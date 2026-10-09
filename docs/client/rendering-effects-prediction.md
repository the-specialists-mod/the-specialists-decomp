# Client: rendering, effects, view and prediction

This document covers the parts of the TS 3.0 `client.dll` that draw the world and predict the local player:

* the studio model renderer;
* event handlers (weapon fire, melee, reload);
* TS's own sprite particle system and the map emitters;
* temp entities and debris;
* `V_CalcRefdef` and the camera;
* slow-motion presentation;
* client prediction (pmove and weapons).

It ends with notes on recreating these parts in Rust (§10). HUD sprites, menus and VGUI are out of scope.

**Sources and confidence**

* All findings come from static reading of the Ghidra export (`client/`), with cross-checks against the server `.so`, which has full symbols (`server/`), and the HL SDK. Nothing was run in game.
* Large parts of this topic sit in regions where **Ghidra did not create functions**, so `client/decomp/` has no C for them. Those parts were read from `objdump -d` assembly. The regions are:

  | Range | Contents |
  |---|---|
  | `0x10030967–0x100331e0`, `0x1003353e–0x100345f0` | studio renderer core |
  | `0x100418f2–0x100425b0`, `0x1004268b–0x100447f0` | event handlers |
  | `0x10049898–0x10049d10` | user-message thunks |

  So if a function named here is missing from `functions.tsv`, it is not an error.
* Proposed names are ours. Anything marked *(inferred)* is a reasoned guess that hasn't been confirmed byte-for-byte.

**Address conventions** (see `docs/method.md`)

* Client addresses are the same in Ghidra and objdump (image base `0x10000000`).
* Server addresses are Ghidra addresses, which equal the objdump address + `0x10000`.
* MSVC puts the vtable at `+0` in client objects. The server (GCC 2.95) puts it at `+0x60`, so member offsets differ between the two builds.

---

## 0. Cross-cutting globals

These globals are read all over the rendering and prediction code. Learn them first.

| Address | Proposed name | Meaning |
|---|---|---|
| `0x100963e8` | `g_flTimeScale` | **Current slow-motion time scale** (1.0 = normal). Eased toward the target every `HUD_Frame`. |
| `0x1009ff04` | `g_flTargetTimeScale` | Target set by the `TSSlowMo` message (§7.5) |
| `0x1018d178` | `g_bBulletTime` | Set by the `TSBTime` message |
| `0x100963ec` | `g_flGravity` | Cached `cl_gravity` (800) from `HUD_TempEntUpdate`; used by particles |
| `0x1018a464` | `g_iPowerups` | Local powerup bits from `clientdata.vuser1[1]`: 1 SlowMotion, 2 InfiniteClips, 8 SlowPause, 0x10 DoubleFireRate |
| `0x10190b18 / 0x10190b20 / 0x10190b1c` | `g_iUser1/2/3` | Spectator mode, target and flags (from `HUD_ProcessPlayerState`) |
| `0x100cf920` | `gHUD` | `m_flTime` is at `0x100cf944`; `m_iFOV` (int) is at `+0x58` = `0x100cf978` |
| `0x10190b28` | `v_origin` | Final view origin, written by `V_CalcNormalRefdef` |
| `0x101914d0` / `0x101913f8` | `v_angles` / `v_cl_angles` | Final view angles |
| `0x1018bd90/9c/a8` | `v_forward/right/up` | Recomputed at the start of the transparent pass |
| `0x10191440` | `g_vecEyePos` | Eye position (origin + viewheight). Used for culling in third person. |
| `0x101914a0` | `g_pViewModel` | View model entity, or NULL in third person or when fov < 40 |
| `0x10191478` | `g_flFrameTime` | `pparams->frametime`, stored by `V_CalcRefdef` |
| `0x100d43cc` | TS HUD object | `this` for most TS user-message handlers |
| `0x1018bde8` | `g_PSys` | Sprite particle system (§5) |

**Time-scale helpers.** All four match server functions of the same name.

| Client | Name | Formula |
|---|---|---|
| `0x10055ae0` | `InterpolateSlowMotion(ft, &cur, target)` | If \|Δ\| > 0.05: `cur += Δ·min(7·ft, 1)`. Otherwise snap to target. |
| `0x10055aa0` / `0x10055ac0` | `FixedSlowAmt` / `FixedSlowMul` | `1/max(ts, 0.01)` style clamps |
| `0x10056fa0` | `SlowTime(x)` | `x / max(ts, 0.01)` |
| `0x10055b30` | `GetBulletVelocityMult(ts, bt)` | `ts / max(1, (1−ts²)·(bt ? 10 : 1))`, or 1 if ts ≥ 0.99 |

**Effects quality (`cl_fx`, default 1).** Handled by `FX_ApplyCvar` (`0x10057d50`) and `FX_AdaptQuality` (`0x10057a70`).

| `cl_fx` | Particle pool | Emission divisor `0x1018ca60` | Particle physics flag `0x1018ca5a` |
|---|---|---|---|
| 0 | 2048 | 8 | off |
| 1 (auto) | 4096 | 1/2/4/6 from FPS | on when quality > 0.374 |
| 2 | 4096 | 1 | on |

* **Auto mode (1):** every 0.1 s it averages 20 frametime samples. Quality is `q = 1 − (clamp(avg_10ms, 1.11, 3.33) − 1.11)/2.22`.
* The same `q` drives three other settings: shell life `0x1018ca54` = `max(2, 30·q)`; muzzle dlights `0x1018ca58` are on when q ≥ 0.3; the low-detail flag `0x1018ca59` controls LOD bodies.

---

## 1. Per-frame pipeline

| Engine call | TS work (in order) |
|---|---|
| `HUD_Frame(time)` `0x1001aae0` | `InterpolateSlowMotion(&g_flTimeScale)`; `CTS_CL_Emitter::Frame` (`0x1003ab40`): load map emitters on level change, spawn particles; HUD think (FOV easing) |
| `CL_CreateMove` / `HUD_PlayerMove` | pmove copy (§8.1) |
| `HUD_PostRunCmd` `0x100045b0` | `g_runfuncs = runfuncs`; `HUD_WeaponsPostThink` (`0x10003830`, §8.2); store `to->client.fov` |
| `V_CalcRefdef` `0x10069b90` | intermission / spectator / normal refdef (§7); slow-mo tint + TSFade written via `pfnSetScreenFade`; `V_SetFog` (`0x10056c20`) |
| `HUD_CreateEntities` `0x1001bce0` | client bullets (`0x10034e80`); **motion-blur ghosts** (`MotionBlur_Update` `0x10029780`); `UpdateBeams` (`0x10003300`, dead SDK egon code); voice icons |
| `HUD_AddEntity` `0x100447f0` | player hemisphere and occlusion culling; item distance fade/LOD via `curstate.iuser4` (§3.1) |
| `HUD_TempEntUpdate` `0x1001bd00` | SDK loop with frametime × `g_flTimeScale`; TS shell sounds (§4.6) |
| `R_StudioDrawModel` / `R_StudioDrawPlayer` | `g_StudioRenderer` (§2) |
| `HUD_DrawNormalTriangles` `0x10034e40` | `gHUD.m_Spectator.DrawOverview()` (SDK) |
| `HUD_DrawTransparentTriangles` `0x10034e50` → `0x10056dd0` | shadows, lasers, flashlights, particle update+draw, scope overlay, bullets, `glDisable(GL_FOG)` (§3.3) |
| `HUD_StudioEvent` `0x10044b50` | events 5002 (sparks) and 5004 (sound) only |

---

## 2. Studio model renderer

### 2.1 Interface and object

`HUD_GetStudioModelInterface` (`0x1001f3f0`):

1. Accepts only version 1.
2. Returns `r_studio_interface_t` at `0x10093700` = `{1, R_StudioDrawModel 0x1001f3d0, R_StudioDrawPlayer 0x1001f3b0}`.
3. Copies **43** dwords of `engine_studio_api_t` to `IEngineStudio` at `0x100ea7c0`. The 2007 table is shorter than the 46 entries in the current SDK.
4. Calls `Init` through `0x1001f3e0`.

The class structure:

* There is one global object, `g_StudioRenderer`, at `0x100db0e0` (size `0x40b0`).
* `CGameStudioModelRenderer` (ctor `0x1001f370`, vtable `0x1007cd04`) derives from `CStudioModelRenderer` (ctor `0x100300b0`, vtable `0x1007d5f8`).
* The derived class adds no fields and overrides only the destructor. That is the thin SDK `GameStudioModelRenderer.cpp`, not the `_Sample` variant.
* **All TS changes are inside the base class.**

### 2.2 Vtable (27 slots)

TS inserted **two new virtuals right after `StudioDrawPlayer`**, so every SDK slot from `StudioGetAnim` onward moves down by two. The mapping below was confirmed from the vtable offsets each function calls (for example `+0x18` = GetAnim, `+0x30` = EstimateInterpolant, `+0x4c` = CalcRotations).

| Slot | Address | Name | Evidence / TS change |
|---|---|---|---|
| 0 | `0x10030110` (`0x1001f390` derived) | `~CStudioModelRenderer` | scalar-deleting dtor |
| 1 | `0x10030030` | `Init` | `cl_himodels`, `developer`, `r_drawentities`, `GetChromeSprite`, `GetModelCounters`, `Get*Transform` |
| 2 | `0x10031ae0` | `StudioDrawModel` | **TS:** view-model framerate × time scale; renderfx 17 redefined (corpse / ghost) |
| 3 | `0x10032540` | `StudioDrawPlayer` | SDK flow. Forces `pplayer->renderamt = 255`. Hidden when `g_iUser1 == 5 && g_iUser2 == number`. |
| 4 | `0x10033540` | **TS `StudioDrawDeadPlayer(flags, state*, player_info*)`** | gait-less, weapon-less draw with a private `player_info` copy |
| 5 | `0x100337f0` | **TS `StudioDrawGhostPlayer(flags, state*, player_info*)`** | frozen-pose afterimage; applies the stored gait yaw to the torso controllers; draws the weapon model |
| 6 | `0x100307e0` | `StudioGetAnim` | seqgroup / `Cache_Check` / `"loading %s"` |
| 7 | `0x10030970` | `StudioSetUpTransform` | SDK (MOVETYPE_STEP interpolation) |
| 8 | `0x10031080` | `StudioSetupBones` | **TS:** split bone `"Bip01 Dorso"` or `"Bip01 Spine"`, plus a torso yaw fix |
| 9 | `0x10034560` | `StudioCalcAttachments` | `"Too many attachments on %s"` (> 4 calls `exit(-1)`) |
| 10 | `0x100317b0` | `StudioSaveBones` | SDK |
| 11 | `0x10031890` | `StudioMergeBones` | SDK |
| 12 | `0x10030c40` | `StudioEstimateInterpolant` | SDK |
| 13 | `0x10030f80` | `StudioEstimateFrame` | SDK; no time-scale use |
| 14 | `0x10030e60` | `StudioFxTransform` | SDK (renderfx 15/16/18) |
| 15 | `0x100306a0` | `StudioSlerpBones` | SDK |
| 16 | `0x10030140` | `StudioCalcBoneAdj` | SDK |
| 17 | `0x10030380` | `StudioCalcBoneQuaterion` | SDK |
| 18 | `0x10030550` | `StudioCalcBonePosition` | SDK |
| 19 | `0x10030ca0` | `StudioCalcRotations` | SDK |
| 20 | `0x100345f0` | `StudioRenderModel` | SDK, including the glow shell (renderfx 19) two-pass |
| 21 | `0x10034860` | `StudioRenderFinal` | picks hardware or software |
| 22 | `0x10034690` | `StudioRenderFinal_Software` | SDK |
| 23 | `0x10034750` | `StudioRenderFinal_Hardware` | SDK, including `GL_StudioDrawShadow` |
| 24 | `0x10030890` | `StudioPlayerBlend` | SDK (×3, blendstart/blendend) |
| 25 | `0x10031fa0` | `StudioEstimateGait` | **TS:** 2-D speed; ×0.75 gait movement when slow *(inferred condition)* |
| 26 | `0x10032250` | `StudioProcessGait` | **TS:** gaitframe × `curstate.framerate`; no `gaitsequence >= numseq` check |

**Non-virtual helpers**

| Address | Name |
|---|---|
| `0x1002fa90` | `ConcatTransforms` |
| `0x1002fbd0` | `AngleQuaternion` |
| `0x1002fc70` | `QuaternionSlerp` |
| `0x1002fdf0` | `QuaternionMatrix` |
| `0x1002fef0` | `MatrixAngles` |
| `0x1002ffe0` | **TS `QuaternionAngles(q, ang)`** |
| `0x1002fed0` | `MatrixCopy` |
| `0x10030010` | `Vector4Copy` |
| `0x100331e0` | inlined `cl_entity_t` / `entity_state_t` copy |

**Object layout.** This is identical to SDK `CStudioModelRenderer`, so a port can reuse the SDK header unchanged.

| Offset | Field |
|---|---|
| `0x08` / `0x10` | `m_clTime` / `m_clOldTime` (double) |
| `0x18` | `m_fDoInterp` |
| `0x1c` | `m_fGaitEstimation` |
| `0x20` | `m_nFrameCount` |
| `0x24` / `0x28` / `0x2c` | `m_pCvarHiModels` / `m_pCvarDeveloper` / `m_pCvarDrawEntities` |
| `0x30` | `m_pCurrentEntity` |
| `0x34` | `m_pRenderModel` |
| `0x38` / `0x3c` | `m_pPlayerInfo` / `m_nPlayerIndex` |
| `0x40` | `m_flGaitMovement` |
| `0x44..0x4c` | header / bodypart / submodel |
| `0x50` / `0x54` | top / bottom colour |
| `0x58` | chrome sprite |
| `0x5c` | `m_nCachedBones` |
| `0x60` | names `[128][32]` |
| `0x1060` / `0x2860` | cached bone and light transforms |
| `0x4060..` | software scale, view vectors, render origin, counters, transform pointers |

### 2.3 What TS changed

**1. Upper/lower body split (`StudioSetupBones`).**

* The SDK copies gait-sequence bones until the first bone named `Bip01 Spine`. TS stops at **`Bip01 Dorso`** (Italian "back"; TS's models use it) **or** `Bip01 Spine`.
* At the split bone TS also corrects the torso yaw so the upper body keeps the main sequence's facing:

  ```c
  QuaternionAngles(qUpperRoot_saved, a1);  // q[0] of main (upper) sequence, saved before gait copy
  QuaternionAngles(q[0], a2);              // q[0] now = gait root
  d = a1[2] - a2[2];
  QuaternionAngles(q[spine], a3);
  a3[2] = a3[0] + d;                       // literal asm; probably meant a3[2] += d (verify in game)
  AngleQuaternion(a3, q[spine]);
  ```

* This is the only renderer support for "run + aim". Torso yaw comes from the SDK `StudioProcessGait` bone controllers: `(yaw/4 + 30)·4.25` on controllers 0–3, with the ±120 flip.

**2. Slow motion in animation.**

* *View model:* if the entity is `GetViewModel()` and (`g_iPowerups & 0x10` or `g_flTimeScale ∉ [0.999, 1.001]`), the rate is computed as: start at `ts`; × 3.5556 with SlowPause (8); × 1.71429 with SlowMotion (1); × 1.5 with DoubleFireRate (0x10).

  The rate is latched into `g_vmFramerate` (`0x10094cf0`) once per animation restart and written to `curstate.framerate` every frame. The powerup factors make the local player's own animations run faster than the world while they hold the powerup.
* *Legs:* `StudioProcessGait` multiplies the gaitframe advance by `curstate.framerate`, which the server scales for slowed players.
* *World entities:* there is no other time-scale use. The server sends a scaled `framerate`.

**3. renderfx 17 (`kRenderFxDeadPlayer`) is redefined.**

The SDK puts the player index in `renderamt`. TS uses **`rendercolor.r` = player index** and **`rendercolor.b` = type**.

* `b != 1` (**corpse**): (1) Copy `GetPlayerState(r−1)`; (2) Clear `weaponmodel`, `gaitsequence` and `movetype`; set `number = r`; take origin and angles from the entity; (3) Copy `player_info`, set `m_fDoInterp = 0`, and call slot 4.

  Using a copy means the corpse does not disturb the live player's gait state.
* `b == 1` (**motion-blur ghost**):
  * The local player's own ghosts are drawn only in third person with `cl_motionblur > 1`.
  * Ghosts are drawn only while `ts ≤ 0.99`.
  * The ghost builds a `player_info` from `curstate`: `gaitsequence = iuser1`, `renderframe = iuser2`, `gaitframe = fuser3`, `gaityaw = fuser4`. It then calls slot 5.
  * Ghosts are created by `MotionBlur_Update` (§7.6).

**4. Gait estimation.** Speed is 2-D (x, y) in both the velocity path and the origin-delta path. When speed < 180, `m_flGaitMovement *= 0.75` *(inferred: a slower leg cycle when walking)*.

**What the renderer does not do.** Akimbo, stunts, laser sights and player attachments have **no** special renderer code.

* Akimbo and stunts are just sequences that the server selects (`sequence` / `gaitsequence`) on the akimbo-aware `p_` models (`p_berettas.mdl`, etc.).
* The `p_` weapon model is drawn the SDK way: `weaponmodel` → `GetModelByIndex` → `StudioMergeBones`.
* Lasers, flashlights and shadows are drawn in the transparent pass (§3.3), using attachments cached per player.

### 2.4 `HUD_StudioEvent` (`0x10044b50`)

The SDK muzzle-flash events (5001/5011/5021/5031) are removed. Only two events remain:

| Event | Action |
|---|---|
| 5002 | `R_SparkEffect(attachment[0], atoi(options), −100, 100)` |
| 5004 | `EV_PlaySound(ent, attachment[0], CHAN_BODY, options, 1.0, 0.8, 0, 25 + 75·ts + rand(−5, 5))` |

The 5004 pitch is the standard TS slow-motion pitch formula (§4.2).

---

## 3. Entities, culling and the transparent pass

### 3.1 `HUD_AddEntity` (`0x100447f0`)

**Players (type 1).** Return 0 (not drawn) when any of these is true:

1. `!InViewHemisphere(ent)` (`0x10057790`): not within 256 units and not in front of the camera;
2. `!ThirdPersonOcclusionVisible(ent)` (`0x10057330`);
3. the player is flagged as a spectator (`0x101900ec[idx]`, from the `Spectator` message).

Otherwise it sets `g_bPlayerVisible[idx]` (`0x1018bd44`, byte[33]). Shadows, lasers, flashlights and fire events read that array.

**`ThirdPersonOcclusionVisible` is an anti-peek check.**

* In first person it always returns true.
* In third person it traces (hull 2, `PM_GLASS_IGNORE`) from the eye position to the player's origin and to `origin ± right·32 ± up·32`. The player is drawn if any trace is clear.
* So the third-person camera cannot reveal players the eye can't see.

**Other entities: fade and LOD flags in `curstate.iuser4`.** The server sets these bits. At most one of 1 / 4 / 2 applies, checked in that order; bit 8 is independent.

| Bit | Used on | Cull distance | Fade start | Fade `renderamt` |
|---|---|---|---|---|
| 1 | thrown knife (`CTSKnife`) | 592 | 492 | `(592−d)·2.55` |
| 4 | *(small items, inferred)* | 256 | 206 | `(256−d)·5.1` |
| 2 | world guns, ammo, M61 grenade, flag | 1024 | 824 | `(1024−d)·1.275` |
| 8 | LOD model | — | — | `body = GetLODBody(d)`; 0 when `cl_fx` is low |

* Culling uses `BeyondDistance(org, max)` (`0x10057910`; max ×2 when FOV < 40) or `!InViewCone(org)` (`0x100570b0`).
* The fade applies only when FOV ≥ 80. It sets `rendermode = kRenderTransColor` (1), `renderfx = 0` and the `renderamt` above.
* After that comes the SDK spectator code: `AddOverviewEntity`, and the in-eye target is hidden when `g_iUser1 == 5` or pip == 2.

**Culling helpers**

| Address | Name | Behaviour |
|---|---|---|
| `0x10057270` | `GetCullOrigin` | eye position in third person, otherwise `v_origin` |
| `0x100570b0` | `InViewCone(org)` | true if d < 300. Otherwise false if behind. Otherwise `(|dir·r| + 0.5|dir·u|)·(1 + d·0.2/8192) < 0.9`. Also used to cull particles. |
| `0x10057790` | `InViewHemisphere(ent)` | d < 256, or dot(forward) ≥ 0 |
| `0x10057910` | `BeyondDistance(org, max)` | dist ≥ max (max ×2 when zoomed) |
| `0x10056fc0` | `GetLODBody(org)` | d > 256 → 0, > 128 → 1, > 64 → 2, else 3. Zoom raises it: FOV < 14 and d < 2048 → 3; FOV < 41 and d < 512 → 2. |
| `0x100572a0` | `PointVisible(pt, from)` | `EV_PlayerTrace` fraction == 1 |
| `0x100579a0` | `IsPlayerVisibleThisFrame(i)` | reads `g_bPlayerVisible` |
| `0x10056f80` | `ClearVisiblePlayers` | end of the transparent pass |

### 3.2 `HUD_CreateEntities` (`0x1001bce0`)

| Call | Name | Purpose |
|---|---|---|
| `0x1001bcd0` → `0x10034e80` | `ClientBullets_AddEntities` | Adds slow-motion client bullets (§4.4) with `CL_CreateVisibleEntity` and a LOD body |
| `0x1001bcd0` → `0x10029780` | `MotionBlur_Update` | Spawns afterimage tempents (§7.6) |
| `0x10003440` → `0x10003300` | `Game_AddObjects` / `UpdateBeams` | SDK egon beams. The beam pointers are only ever zeroed, so this is dead code. |
| `0x10017570` / `0x10017f30` | voice manager `CreateEntities` | Voice icons |

### 3.3 `HUD_DrawTransparentTriangles` → `TS_DrawEffects` (`0x10056dd0`)

1. On first call: `FX_ApplyCvar`, particle system init (`0x10056bc0`) and client bullet reset. Afterwards, re-apply whenever `cl_fx` changes.
2. `UpdateViewVectors` (`0x10056f60`).
3. `CachePlayerAttachments` (`0x10056e70`): attachments 0–3 of every player go into `0x1018caf8`. The getter is `0x10056be0(out, player, n)`.
4. Hardware renderer only: **`DrawPlayerShadows`** (`0x10055760`).
   * Uses `cl_shadow` and `sprites/ombra.spr`, drawn with TriAPI render mode 4 as quads.
   * For each visible player, trace 8192 units down and draw a 24-unit quad aligned to the floor normal, with alpha `1 − dist·0.005` (nothing beyond 200 units).
   * The local player's own shadow is drawn in first person only when `cl_shadow == 1` and the player is alive.
5. `0x1003de00`: lasers. `0x1003bad0`: flashlights. See the table below.
6. **Particle update + draw** (`0x100520d0`, §5).
7. Hardware only: **`DrawScopeOverlay`** (`0x10054510`). When in first person and `m_iFOV < 40`, it draws `sprites/quarterscope.spr` frame 2 as four mirrored world-space quads 10 units in front of `v_origin`.
8. `ClearVisiblePlayers`. If `cl_fx == 1`, run `FX_AdaptQuality`. Draw the client bullets.
9. `glDisable(GL_FOG)`. The fog is enabled earlier, in `V_CalcRefdef`.

**Laser sight and flashlight**

| Address | Name | Behaviour |
|---|---|---|
| `0x1003bb00` | `DrawLocalLaser` | Direction: view forward (if there is no view model, or `cl_laser == 1`), otherwise view-model attachment 0 → 1 with ±0.003 jitter. Trace 8192 units. The hit point is projected to screen space for the HUD laser dot (`0x100d0cbc/cc0`; a second pair is used for akimbo). The beam is `sprites/laserbeamanim.spr`, additive, animated at `20·ts` fps. |
| `0x1003d600` | `DrawOtherLasers` | For visible players with laser flag 2: `sprites/laserdot.spr` (size 4) at the trace hit, and `sprites/laserbeam.spr` from their `p_` model attachments 0 → 1 |
| `0x1003b250` | `DrawLocalFlashlight` | Flag 4: trace from the eye; dlight key 2, radius `min(1024−d, 120)`, white, 0.1 s. `sprites/flash.spr` glow on view-model attachment 0, plus attachment 2 for akimbo. |
| `0x1003b750` | `DrawOtherFlashlights` | Same dlight for other visible players (key idx+3) |
| `0x100582f0` | `LaserColor(n)` | 0 red (255, 25, 25), 1 green (0, 205, 0), 2 blue (0, 120, 255) |

Where the state comes from:

* **Local state:** weapon HUD flags at `0x100d0cb4`: bit 2 = laser, bit 4 = flashlight, bit 0x40 = akimbo (second beam).
* **Other players:** `0x1018d128[i*2]` from the `ActItems` message, and the colour byte `0x1018d129[i*2]` from `PlInfo`.
* **Colour change:** changing `cl_lasercolor` sends the server command `lasclr_<n>` (`0x1004ce10`).
* **Predicted local state:** `clientdata.vuser1[2]` (§8.3).

---

## 4. Events and weapon effects

### 4.1 Hooked events

`HookEvents` (`FUN_10003240`) registers all eleven. `pfnPrecacheEvent` happens in `CTSGun::Precache` (`0x100084e0`, client copy). The event indices are stored in the gun at `+0x824..+0x838`.

| Event | Handler | Proposed name | Short description |
|---|---|---|---|
| `events/fire.sc` | `0x1003de40` | `EV_TS_Fire` | Dispatch on weapon class (`info+0x348`): 4/5 → `EV_TS_FireAkimbo(linked=0)`, 1 → `EV_TS_FirePump`, else `EV_TS_FireStandard` |
| `events/firelinked.sc` | `0x1003de10` | `EV_TS_FireLinked` | `EV_TS_FireAkimbo(linked=1)`: both guns at once |
| `events/empty.sc` | `0x100424e0` | `EV_TS_Empty` | `weapons/pistol-empty.wav` |
| `events/pump.sc` | `0x100419a0` | `EV_TS_Pump` | Pump anim; first person ejects a shotgun shell and one smoke puff; pump sound (`info+0x306`) |
| `events/closecombat.sc` | `0x10043200` | `EV_TS_CloseCombat` | Kung-fu block or attack: anim, `player/block.wav` or `player/closecombat.wav`, short hull trace, material sound + puff |
| `events/coldcock.sc` | `0x10043800` | `EV_TS_ColdCock` | Pistol-whip: anim A[0x1c], trace fwd·30, material sound + puff |
| `events/reload.sc` | `0x10042690` | `EV_TS_Reload` | Reload anims (shotgun phases 8/9/10), `insert-shell.wav`, `generic_reload.wav`, revolver/sawed-off casings dump |
| `events/knife.sc` | `0x10043c90` | `EV_TS_Knife` | Trace fwd·35. Hit on a hard surface: `scintille_metal` + sparks + `knife_hit.wav`. Miss: `knife_miss.wav`. |
| `events/katana.sc` | `0x10044230` | `EV_TS_Katana` | Trace fwd·50 (back swing −55). Hit: sparks + `katana/hit[1].wav`. Miss: `miss[1].wav`. |
| `events/draw.sc` | `0x100425b0` | `EV_TS_Draw` | Only when spectating in-eye: draw anim with the attachment bodygroup |
| `events/grenade.sc` | `0x10042630` | `EV_TS_Grenade` | In-eye only: M61 anim (0x13 pull, 0x14/0x15 throw) |

**`event_args_t` offsets used:** entindex `+4`, origin `+8`, angles `+0x14`, velocity `+0x20`, ducking `+0x2c`, fparam1/2 `+0x30/+0x34`, iparam1/2 `+0x38/+0x3c`, bparam1/2 `+0x40/+0x44`.

### 4.2 Event arguments and the server senders

Every event is played with **flags = 1 (`FEV_NOTHOST`)**, origin and angles `g_vecZero`, and invoker = player. The client weapon prediction plays the same events locally (§8.2).

| Event | Server sender (`CTSGun::…`) | fparam1 | fparam2 | iparam1 | iparam2 | bparam1 | bparam2 |
|---|---|---|---|---|---|---|---|
| fire | `StandardFire` | spread X | spread Y | weapon id | attachment flags | clip == 0 | shared-random seed |
| fire / pump | `ShotgunFire` | spread / 0 | spread / 0 | id | attachments | firemode == 3 (pump) | seed / 0 |
| fire / firelinked | `AkimboFire` | spread | spread | id | attachments | hand toggle | seed |
| empty | `EmptySound` | 0 | 0 | 0 | 0 | 0 | 0 |
| coldcock | `ColdCock` | dir.x | dir.y (unused) | id | attachments | 0 | 0 |
| closecombat | `CCombatBlock` / `CCombatAttack` | weapon id / 0 | 0 | attack type (0 = block, 1/2/3) | anim index | 0 | 0 |
| reload | `Reload` / `ShotgunReload` | 0, or phase 8/9/10 | 0 | id | attachments | 0 | 0 |
| knife | `KnifeFire` | 0 | 0 | id | state+8 | 0 | 0 |
| katana | `KatanaFire` | 0 | 0 | anim index (0xf = back swing) | state+8 | 0 | 0 |
| draw | `Deploy` / `HolsterWeapon` | 0 | 0 | id | attachments / 0 | 0 | 0 |
| grenade | `GrenadeFire` / `GrenadeIdle` | 0 | 0 | 0x13 / 0x14 + thrown | 0 | 0 | 0 |

**Attachment flags** (`iparam2`): bit 0 silencer, bit 1 laser, bit 2 flashlight, bit 3 scope.

**Sound pitch under slow motion.** Most event sounds use `pitch = 25 + 75·ts + rand(−5, 5)` (≈ 100 at normal speed), `vol = rand(0.92, 1.0)`, `attn = 0.8`, `CHAN_WEAPON`.

The weapon fire sound (`0x1003de90`), ricochets and explosions instead compute `100 − (int)(ts·−300)`. The constant at `0x1007d6f4` really is −300.0, so this gives **400 at normal speed**. It is either an original bug that the engine clamps or a misreading; **check it in game before copying it**.

### 4.3 Weapon info table (client mirror of the server's `compile_weapons_info`)

`FUN_10007de0` builds `s_weapon_info[38]` at `0x100aa050` (stride `0x3dc`) by calling one builder per weapon (`0x100047d0 … 0x10010080`). `GetWeaponInfo(id)` is `0x100071c0`. The same table drives events, prediction and the HUD.

| Offset | Type | Field (AK47 value) |
|---|---|---|
| `0x04` | i32 | clip size (30) |
| `0x08` | u8 | ammo type index (6) |
| `0x0c` | i32 | fire-mode mask: 1 auto, 2 semi, 4 burst, 8 pump *(inferred)* |
| `0x14` | f32 | reload time (2.5) |
| `0x18` | f32 | fire interval (0.08) |
| `0x1c` | f32 | damage (36) |
| `0x20` | i32 | bullet type: 0 normal, 1 buckshot, 2 wall-pierce (internal) |
| `0x24` | i32 | pellets per shot (1; shotguns 8) |
| `0x28` | f32 | base spread (0.004) |
| `0x2c` | u8 | spread grows |
| `0x30` / `0x34` / `0x38` | f32 / f32 / u8 | view kick / spread increment / uses VKickback |
| `0x3c` / `0x40` | i32 | scope FOV levels (32, 13) |
| `0x44` | char[64] | display name |
| `0x86` | char[66] | HUD sprite (`sprites/weapons/ak47.spr`) |
| `0xc8` / `0xcc` | i32 | linked akimbo id / single-variant id |
| `0xd4` / `0xd8` | f32 / i32 | range modifier (0.85) / range (3000) |
| `0xe4` | i32 | built-in attachments (1 = integral silencer, 8 = integral scope) |
| `0xe8` | char[64] | shell model (`models/556_shell.mdl`; empty = no shell) |
| `0x128..0x130` | i16 ×5 | bodygroup for silencer / laser / flashlight / scope / laser+flashlight (`GetWeaponBody` `0x10007110`) |
| `0x132` / `0x172` / `0x1b2` / `0x1f2` | char[64] | `v_`, `p_`, `p_…_sil`, `w_` models |
| `0x232` | char[32] | player anim extension (`twohanded` / `onehanded` / empty for akimbo) |
| `0x252` / `0x28c` | i16[29] | view-model anim sets A (normal) and B (alt mode) |
| `0x2c6` / `0x306` | char[64] | fire sound / silenced sound (pump sound for pump shotguns) |
| `0x348` | u8 | class: 1 pump, 2 grenade, 3 knife, 4 akimbo, 5 akimbo-only, 6 rifle/MG, 7 sniper, 8 pistol, 9 SMG, 10 katana, 11 briefcase |
| `0x34c` | i32 | muzzle forward offset (21) |
| `0x350` / `0x354` / `0x358` | u8 / i32 / i32 | muzzle-flash type / size / sprite count |

**Anim-set indices**

| Index | Animation |
|---|---|
| 1 | reload |
| 2 | draw |
| 3–5 | fire |
| 6 | last shot |
| 7 | mode switch |
| 8 / 9 / 10 | shotgun reload start / insert / end |
| 11 / 12 | pump fire |
| 13 / 14 | pump |
| 15–17 | knife |
| 22–25 | akimbo left / right |
| 28 | coldcock |

`GetActiveAnimSet(info)` (`0x1003df60`) picks set B when the local alt-mode flag (`0x10189f9d`) is on.

**Weapon ids and info builders** (`FUN_10007de0` calls them in this order, same as the server `Write_*`)

| id | Weapon | Builder | id | Weapon | Builder |
|---|---|---|---|---|---|
| 0 | kung fu | `0x1000d000` | 19 | MP7 PDW | `0x1000e1f0` |
| 1 | Glock 18 | `0x10006810` | 20 | SPAS-12 | `0x1000f110` |
| 2 | Beretta 92F | `0x100054a0` | 21 | Golden Colts | `0x10006e20` |
| 3 | Mini-Uzi | `0x1000fd40` | 22 | Glock 20C | `0x10006b10` |
| 4 | Benelli M3 | `0x10005170` | 23 | UMP (server `Write_mac10`) | `0x1000cce0` |
| 5 | M4A1 | `0x1000c3b0` | 24 | M61 grenade | `0x1000ca40` |
| 6 | MP5SD | `0x1000ded0` | 25 | Combat knife | `0x1000bd70` |
| 7 | MP5K | `0x1000db70` | 26 | Mossberg 500 | `0x1000d7f0` |
| 8 | Akimbo Berettas | `0x100057b0` | 27 | M16 | `0x1000c030` |
| 9 | MK23 | `0x1000d0f0` | 28 | Ruger MK1 | `0x1000e500` |
| 10 | Akimbo MK23 | `0x1000d440` | 29 | (unused) | — |
| 11 | USAS-12 | `0x1000fa20` | 30 | Akimbo Five-seveN | `0x100064e0` |
| 12 | Desert Eagle | `0x10005e70` | 31 | Raging Bull | `0x10005b60` |
| 13 | AK47 | `0x100047d0` | 32 | M60 | `0x1000c730` |
| 14 | Five-seveN | `0x100061e0` | 33 | Sawed-off | `0x1000e800` |
| 15 | Steyr AUG | `0x10004b20` | 34 | Katana | `0x1000bab0` |
| 16 | Akimbo Uzi | `0x10010080` | 35 | Seal knife | `0x1000eb80` |
| 17 | Skorpion | `0x1000f750` | 36 | Contender G2 | `0x1000f440` |
| 18 | Barrett M82A1 | `0x10004e40` | 37 | Akimbo Skorpions | `0x1000ee40` |

**Ammo table** (`GetAmmoInfo` `0x100071f0`, 16 × `0x38`). Fields used:

| Index | Meaning |
|---|---|
| `[0]` | fire-sound attenuation (doubled when silenced) |
| `[5]` | max bullet distance |
| `[6]` | damage multiplier after penetration |
| `[7]` | max spread-cone radius |
| `[8]` | range-falloff unit (table built by `0x10007220`) |

### 4.4 `EV_TS_FireStandard` (`0x1003dfa0`) and `EV_TS_FireBullets` (`0x100450c0`)

**Fire sequence**

1. Look up the weapon info by `iparam1`. Silenced = `iparam2 & 1`.
2. Shell velocity = player velocity + `right·rand(120, 140) + up·r + fwd·(r + 50)`, with `r = rand(50, 100)`.
   * Skorpions use `right·rand(−40, 40)`.
   * Shell sound type is 2 (`sshell.wav`) for the USAS-12, otherwise 1.
3. Not silenced, and the shooter is local or visible: muzzle dlight `TS_MuzzleDlight` (`0x10048e60`): radius 192, colour (240, 221, 172), life `0.06/ts`, at most one every `0.1/ts` seconds.
4. Local shooter: `EV_WeaponAnimation(set[bparam1 ? 6 : rand(3..5)], GetWeaponBody(id, attachments))`.
5. First person with a view model:
   * `TS_MuzzleFlash` (`0x100474b0`) at view-model attachment 0: `info+0x358` sprites of `ts_muzzleflash1h.spr` along forward, each ×0.909 smaller, plus a `ts_muzzleflash6.spr` core;
   * `TS_GunSmoke` (`0x10047130`): 45–55 puffs, 5–10 for the sawed-off;
   * pellet spray `0x10046bd0` using `shotgun_pellets.spr` when pellets > 1;
   * shell ejected from attachment 0 − `fwd·info+0x34c`.
6. Third person and other players: the same effects at the cached player attachments (attachment 3 for rifles and snipers, otherwise 0). The muzzle flash fades out by 512 units.
7. Fire sound `0x1003de90`, then gun position (`0x1001c620`), then `EV_TS_FireBullets`.

**`EV_TS_FireBullets(ent, f, r, u, pellets, src, dir, spreadX, spreadY, dmg, bulletType, ammoIdx, growFlag, seed)`** is the client mirror of the server's `CBasePlayer::ShootBulletsPlayer`.

* **Whizz:** for other players' shots, trace 4096 units. If the line's closest approach to the local view (computed with Heron's formula) is < 75 units and the line passes more than 200 units away, play `weapons/whizz1..5.wav` at the viewer on alternating channels 503/504.
* **Particle push** (when physics is enabled): `PS_PushRadial` (`0x100524c0`, radius 512) and `PS_PushAlongLine` (`0x10052720`) along the bullet, with strength `dmg` (×8 for buckshot).
* **Spread** for pellet i, using the seeded `UTIL_SharedRandomFloat` (`0x1001aea0`):

  ```c
  ang = SR(seed+i, -M_PI, M_PI);
  r   = 1 - pow(SR(seed+i+1, 0, ammo[7]), 3);
  dir2 = dir + right*cos(ang)*r*spreadX + up*sin(ang)*r*spreadY;
  end  = src + dir2 * ammo[5];
  ```

* **Normal speed:**
  1. `EV_PlayerTrace` (hull 2, ignoring the shooter);
  2. range multiplier × dmg;
  3. `TS_PlayTextureSound` (`0x10044bf0`) and impact particles;
  4. `TS_DecalGunshot` (`0x10001180`);
  5. remaining dmg ×= `ammo[6]`.
* **Penetration:** bullet type ≠ 1 and remaining dmg > 5: (1) step `min(dmg, 48)` units past the hit; (2) if that point is not `CONTENTS_SOLID`, trace back to find the exit point; (3) play the exit sound and decal; (4) recurse once as type 2 (a straight 4096-unit trace with no spread).
* **Slow motion** (`ts < 0.99` or bullet-time flag `0x1018d16c`): no trace.
  * A **client bullet** is queued in `0x100eb678` (256 slots × `0x5c`): `ClientBullets_Add` `0x10035c20`, `_Update` `0x10035010`, `_Impact` `0x10035d40`, `_Frame` `0x10035b50`.
  * It flies at `GetBulletVelocityMult`, with a `sprites/bullet_trail.spr` trail (`TS_BulletTrail` `0x10046240`), and runs the same impact code when it hits.
  * The server equivalent is `CBulletManager`.

**Akimbo and pump variants**

* `EV_TS_FireAkimbo` (`0x1003f090`): picks anims from set+0x30/0x32 or +0x2c/0x2e based on `bparam1` (hand); muzzle and shell come from attachment 0 or 1; linked mode fires two batches offset ±5 units along right; the second uses `seed + 0x21`.
* `EV_TS_FirePump` (`0x10040c20`): set+0x16/0x18. The shell is ejected here only when `bparam1 ≠ 0`; otherwise `pump.sc` ejects it *(inferred)*.

### 4.5 Impact helpers

| Address | Name | Behaviour |
|---|---|---|
| `0x10001180` | `TS_DecalGunshot(tr)` | Only on `SOLID_BSP` physents |
| `0x10001000` | `TS_DamageDecal(pe)` | `{break1..3}` if classnumber 1; `{shot1..5}` if rendermode 0; else `{bproof1}`. `r_paintball` ≠ 0 → `{splat0..17}`. |
| `0x100010e0` | `TS_DecalTrace` | `R_DecalShoot` if `r_decals` ≠ 0 and the target is solid BSP / pushstep |
| `0x10044bf0` | `TS_PlayTextureSound(dmg, tr, src, end, type)` | Texture via `EV_TraceTexture`; ricochet `debris/ric1..5` at 50% (not on flesh); material sound (table below) when dmg > 33; calls `TS_ImpactParticles` |
| `0x10048f60` | `TS_ImpactParticles(pos, n, type, tex)` | dirt: wood smoke; wood: `woodfrag` + smoke; metal/grate/vent: `scintille_metal` + sparks (+ pellets spray) + smoke; glass/computer: scintille + sparks; default (concrete): `debris_concrete3` + smoke (+ sparks); flesh/slosh: none. Rate-limited per group and culled by PVS and view. |
| `0x10045df0` | `TS_MeleeMaterialSound` | Same lookup, footstep-style sounds; returns the texture char |
| `0x100492b0` | `TS_Sparks(pos, dir, n, scale, speed)` | `sprites/sparks.spr`, count in `[n/2, n]` |
| `0x10046f50` | `TS_Scintille` | `sprites/scintille_metal.spr` |
| `0x10046680` / `0x100464f0` / `0x10046a70` / `0x10046bd0` | `TS_ImpactSmoke` / `TS_SmallPuff` / `TS_PelletSpray` / `TS_SpriteDebris` | sprite particles |
| `0x10047cb0` | `TS_GlassShatter` | `sprites/glassfrag.spr` (TSFrags type 0) |
| `0x100481b0` | `TS_Explosion(org, radius)` | `explo/explode[1-4].wav`, particle push, `grenade_asplode.spr` fireball, `gun_smoke_add` smoke, dlight, sparks |
| `0x10048840` | `TS_BloodImpact` | `sprites/bloodfrag2.spr`. The collision callback sprays `{blood1..8}` decals and plays `player/splat.wav`. Scales with `cl_gore`. |

**Texture materials for `TS_PlayTextureSound`**

| Char | Material | Sounds | Volume | Return factor |
|---|---|---|---|---|
| D | dirt | `debris/gravel1-4` | 0.9 | 0.1 |
| G / M / V | grate / metal / vent | `debris/metal1-5` | 0.9 / 0.9 / 0.5 | 0.5 / 0.3 / 0.3 |
| P / Y | computer / glass | `debris/glass1-3` | 0.8 | 0.2 |
| S | slosh | `player/pl_slosh1-4` | 0.9 | 0 |
| W | wood | `debris/wood1-3` | 0.9 | 0.2 |
| T | tile | `debris/cement`, `cement1-6` | 0.8 | 0.2 |
| C / default | concrete | `debris/cement*` | 0.9 | 0.6 |
| F | flesh | none | — | 0 |

### 4.6 Temp entities

**Shell ejection** (`EV_TS_EjectShell` `0x10056890`):

* calls `R_TempModel` with engine soundtype 0;
* `iuser1` = TS sound type (1 `weapons/shell.wav`, 2 `weapons/sshell.wav`), `iuser4 = 12`, `FTENT_ROTATE`;
* life = `0x1018ca54`;
* a ring of 64 shells, oldest killed first.

**`HUD_TempEntUpdate` (`0x1001bd00`) vs SDK `entity.cpp`.** The structure is the SDK one (sine wave, gravity, rotate, collide, flicker dlight, smoke trail, fade, `CLIENTCUSTOM` callback). The differences:

1. `frametime *= g_flTimeScale`, so all tempents slow down in slow motion. `cl_gravity` is cached in `0x100963ec`.
2. On every collision bounce, `TempEnt_PlayShellSound` (`0x100569a0`) runs before the engine hit-sound callback. It plays once per tempent, with vol `rand(0.1, 0.3)`, attn 1.9 and pitch `(25+75ts±5)·rand(0.9, 1.3)`.
3. The spark shower (0x20000) and floor-settle logic are unchanged from the SDK.

### 4.7 User messages for impact effects

**`TSFrags`** (server variable `gmsgTSCreateDebris`, size −1). The thunk at `0x10049ae0` calls `0x1004bd50`.

| Field | Type | Notes |
|---|---|---|
| origin | 3 × coord | |
| v2 | 3 × coord | box size (breakable/door), `(radius, 0, 0)` (explosion), or a direction (type 2) |
| type | byte | 0 glass, 1 explosion, 2 sparks |
| *type 0 only:* hitpoint, dir | 3 × coord each | |
| *type 0 only:* dmgbits | long | |
| *type 0 only:* force | coord | |

| Type | Sender | Client effect |
|---|---|---|
| 0 | `CBreakable::Die` / `CBaseDoor` (glass material only; other materials still use `TE_BREAKMODEL`) | `TS_GlassShatter`: shards fill the box, velocity `dir·force` |
| 1 | `TSExplosion`, `MSG_ALL` | `TS_Explosion(origin, radius)` |
| 2 | no server sender found | scintille + sparks along dir |

**`PTakeDam`** (13 bytes). Sent by `CBasePlayer::TraceAttack` as `MSG_PVS`, at most once per 0.3 s per victim. The thunk at `0x10049ac0` calls `0x1004bcd0`, which calls `TS_BloodImpact`.

| Field | Type | Notes |
|---|---|---|
| hit position | 3 × coord | |
| dir | 3 × coord | |
| amount | byte | bit 7 = kevlar hit (adds a smoke puff); low 7 bits = `min(dmg/2, 127)` (×8 for buckshot) |

PTakeDam causes no screen effect.

---

## 5. Particle system (`CTS_CL_Emitter`, `ts_emitter`/`ts_particle`/`ts_fog`)

**The server does not network emitters.** `CTSEmitter`/`CTSParticle`/fog entities remove themselves at spawn. The client **re-reads the map's BSP entity lump itself** and builds the emitters locally. The only networked particle data is wind (`TSPSys`).

The same sprite-particle engine (`g_PSys`) also renders every weapon effect in §4.

### 5.1 Loading

1. Every frame `HUD_Frame` calls `CTS_CL_Emitter::Frame` (`0x1003ab40`). When `GetLevelName()` differs from the cached name (`0x10108b38`), it:
   1. calls `KillAll` (`0x10055cf0`);
   2. zeroes the emitters, templates and fog;
   3. resets the local clock (`0x10189478`, double);
   4. calls `LoadMap` (`0x1003a960`), which opens `<gamedir>/<levelname>` with mode `"rb"`.
2. `LoadEntityLump` (`0x1003a860`):
   1. reads the `0x7c`-byte BSP header (version + 15 lumps);
   2. accepts version **29 or 30** (the error text says "should be 30");
   3. mallocs `filelen + 1` for lump 0, reads it and NUL-terminates it.
3. `ProcessEnts` (`0x1003a5d0`) parses with `COM_ParseFile`, in **three passes** over the whole lump:

   | Pass | Parser | Keyvalue handler | Action |
   |---|---|---|---|
   | 1 | `Particle_ParseEntity` `0x1003a290` | `ParticleKeyValue` `0x10055f90` | `classname == "ts_particle"` → `AddParticle` (template) |
   | 2 | `Emitter_ParseEntity` `0x1003a160` | `EmitterKeyValue` `0x10055d20` | `classname == "ts_emitter"` → `AddEmitter` + `SetEmitterParticle` (template whose `targetname` == the emitter's `particle`; `0x1003a820`) |
   | 3 | `Fog_ParseEntity` `0x1003a3c0` | — | `ts_fog`: `near`, `far`, `color "r g b"` → fog block `0x101893b8` |

4. Errors print `CTS_CL_Emitter::ProcessEnts: found %s when expecting {` and `…error parsing entities`.
5. Sprites are loaded by `PSys_LoadSprite` (`0x100509d0`) into a 64-slot cache of `{name[32], HSPRITE, rendermode, frames}`. On failure it prints `WARNING! cannot found %s` and `Sprite '%s' is not a valid sprite.`

The client has **no defaults or clamping**: the structs are zeroed and then filled from keyvalues. The server's `CTSParticle::CheckValues` (life ≥ 0, color 0..1, radius ≥ 0, frame ≥ 0) only runs on the server copy, which is thrown away. A Rust port should apply those clamps anyway.

### 5.2 Data structures

The `CTSSharedEmitter` layout matches the server class. Globals:

| Address | Contents |
|---|---|
| `0x1018abc8` | `g_Emitters`: `emitter_t*[512]`, then `particle_tmpl_t*[512]` |
| `0x101663b8` | emitter storage (512 × 0x118) |
| `0x10108bb8` | template storage (512 × 0x2ec) |

**`emitter_t` (0x118 bytes)**

| Offset | Key / meaning |
|---|---|
| `0x00` | slot index |
| `0x04` | `origin` |
| `0x10` | active |
| `0x14` | template index |
| `0x18` | `particle` (char[100], target template name) |
| `0x7c` / `0x80` | `epshigh` / `epslow`: emits per second |
| `0x84` / `0x88` | `ppehigh` / `ppelow`: particles per emit (int) |
| `0x8c` / `0x98` | `variancehigh` / `variancelow`: spawn box relative to origin |
| `0xa4` / `0xa8` | `cameradensity` / `cameraradius` |
| `0xac` | classname |
| `0x110` | next emit time |
| `0x114` | `spawnflags` (bit 1 = emit once, then remove) |

**`particle_tmpl_t` (0x2ec bytes).** Each value is a high/low pair rolled with `RandomFloat(low, high)` (or `RandomLong` for ints).

| Offsets (high, low) | Key | Copied to live particle offset |
|---|---|---|
| `0x0c`, `0x10` | `lifehigh/low` | `0xd8` |
| `0x14`, `0x18` | `gravityhigh/low` | `0xd0` |
| `0x1c`, `0x20` | `colorhigh/low` (grey level 0..1) | `0xdc` |
| `0x24`, `0x28` | `fadespeedhigh/low` | `0xe0` |
| `0x2c`, `0x30` | `p_radiushigh/low` | `0x108` |
| `0x34`, `0x38` | `scalespeedhigh/low` | `0xe4` |
| `0x3c`, `0x40` | `current_framehigh/low` (int) | `0xf8` |
| `0x44`, `0x48` | `frame_ratehigh/low` | `0xfc` |
| `0x4c`, `0x50` | `randomdeltahigh/low` | `0xe8` |
| `0x54`, `0x58` | `reactamounthigh/low` | `0x100` |
| `0x5c`, `0x60` | `windamounthigh/low` | `0x104` |
| `0x64`, `0x68` | `termvelocityhigh/low` | **never read on the client** |
| `0x6c`, `0x70` | `fadeintimehigh/low` | `0xf0` |
| `0x74` / `0x80` | `velocityhigh/low` (vec3, randomised per axis) | `0x38` |
| `0x8c` / `0x98` | `a_velocityhigh/low` (vec3) | `0x44` |
| `0xbc` / `0xc8` | `randomvelhigh/low` (vec3) | `0x5c` / `0x50` |
| `0xd4` | `followaxis` (vec3) | `0x74` |
| `0xe0` | `stretchspeed` | `0x128` |
| `0xe4` | `sprite_name` (char[100]) | sprite slot `0x114` |
| `0x148` | `sprite_trans` (TriAPI render mode) | |
| `0x14c` | `follow_view` (0..3, see §5.4) | byte `0x05` |
| `0x150` / `0x154` | `collide` / `oncollide` (0..3) | `0x120` / callback `0x11c` |
| `0x158` | `soundonemit` (char[100]) | |
| `0x1bc` / `0x220` / `0x284` | `classname` / `targetname` / `target` | `target` → template index at `0x124` |
| `0x2e8` | `spawnflags` | bit 1: spawned child uses template velocity; bit 2: copied but unused |

**Live particle (300 = 0x12c bytes)**, shared with the weapon effects (§4):

* active / rest / visible flags at `0x00–0x02`;
* type at `0x04` (3 = map emitter);
* previous origin `0x08`, origin `0x14`, angles `0x20`, velocity `0x38` (**units per 0.1 s**), angular velocity `0x44`;
* drift velocity `0x68`, spawn time `0xd4`, next trace time `0xec`, drag `0xf4` (≥ 0.1), next think time `0x110`;
* plus the fields listed in the table above.

**`g_PSys` (`0x1018bde8`)**

| Offset | Contents |
|---|---|
| `+0x04` | max particles |
| `+0x08` | particle array |
| `+0x0c` | sprite cache |
| `+0xa0c` | `float[128]` effect cooldowns |
| `+0xc0c` / `+0xc10` | free hint / highest used index |
| `+0xc14` | "intensive indices": `ushort` list of particles with `reactamount > 0`, rebuilt every frame |

### 5.3 Emission (per emitter, in `CTS_CL_Emitter::Frame`)

1. Skip unless `nextEmit < clock`. `n = RandomLong(ppelow, ppehigh)`; if `n == 0`, skip without rescheduling.
2. `inside` = the view origin is inside the emitter's XY box.
   * If outside: skip when `dot(v_forward, dir_to_box_centre) < 0.1`. Otherwise LOD factor `f = clamp(dist / |high − low|, 1, 10)`.
   * If inside: `f = 1`.
3. `n = ceil(n / div)`, where `div` is the `cl_fx` divisor.
4. Spawn `n / f` particles:
   * XY position: if `cameradensity` and `cameraradius` > 0.01 and inside, `cam.xy + RandomFloat(±R)` with `R = r·(2 − min(density, 1))`, plus `localvel.xy·1.5`. This is how rain is spawned around the camera. Otherwise `origin + RandomFloat(low, high)`.
   * Z position: always `origin.z + RandomFloat(low.z, high.z)`.
5. If `soundonemit` is set: `EV_PlaySound(0, lastpos, CHAN_STATIC, snd, 1, ATTN_NORM, 0, 25 + 75·ts ± 5)`.
6. If spawnflags & 1: remove the emitter. Otherwise `next = clock + (eps > 0 ? (1/eps)/max(ts, 0.01) : 1)·div·f`.

### 5.4 Simulation and drawing (`PSys_UpdateDraw` `0x100520d0`, `dt = frametime·ts`)

**Per-particle update**

1. **Death:** life < 0.001 **and** the animation is finished **and** it has faded **and** it is not shrinking.
2. **Fade out** (only after life ≤ 0): `color −= dt·fadespeed·100`. **Scale:** `radius += dt·scalespeed·100`.
3. **Move** (`Particle_Move` `0x10050ce0`, skipped while resting):
   * `vel.z −= 800·dt·gravity·0.1`;
   * drag `k = min(drag·dt, 1)`: `vel.xy −= k·vel.xy`, `vel.z −= k·(1 − |g|)·vel.z`;
   * `origin += vel·dt·10`.
4. **Think** (`0x10051270`), throttled to `max(div/30, dt)`:

   | Behaviour | Condition | Effect |
   |---|---|---|
   | Random drift | `randomdelta`, dist < 512 | step toward a random `randomvel` target, at most `randomdelta` per think |
   | React | physics flag, dist < 512 | push away from players within 128 units, scaled by their XY velocity *(formula inferred)* |
   | Wind | `windamount` ≠ 0 | `vel += dir·speed·T·windamount` |

   Wind is a seeded gust model:
   * each segment lasts `seeded(0.001, 1)` s, and its target speed is `seeded(0, basespeed)`;
   * speed and direction are cosine-interpolated (`0x10050760`) between segments;
   * the same seed gives identical gusts on every client.
5. **Collision** (`0x10051d50`). Applies to type 3 particles with `collide` set that moved and are visible.
   * Trace interval: `max(0.016, dist·fovscale/8192)`, doubled beyond 1024 units. Trace: `EV_PlayerTrace(prev, origin, PM_STUDIO_BOX)` with the point hull.
   * On hit:
     1. `vel *= 0.3·max(0, 1 − 7·interval)`;
     2. reflect off the plane;
     3. rest if slow;
     4. call the `oncollide` callback.

   | `oncollide` | Callback | Effect |
   |---|---|---|
   | 0 | — | bounce |
   | 1 | `0x10039d30` | kill |
   | 2 | `0x10039d50` | kill and spawn one `target` template particle |
   | 3 | `0x10039f60` | spawn one `target` particle and keep bouncing |

6. **Animate** (after life ends): `frame += dt·framerate`. Then `life −= dt`.

**Drawing.** Particles are drawn in array order, **unsorted**. Each one:

```c
pTriAPI->SpriteTexture(GetSpritePointer(hspr), (int)min(frame, frames-1));
pTriAPI->RenderMode(sprite_trans);  pTriAPI->CullFace(TRI_NONE);
pTriAPI->Begin(TRI_QUADS);
pTriAPI->Color4f(c, c, c, min(1, (now - spawn)/fadeintime));   // c = color
/* 4 x TexCoord2f + Vertex3fv, uv (0,0)(1,0)(1,1)(0,1) */
pTriAPI->End();  pTriAPI->RenderMode(kRenderNormal);
```

**Quad orientation** (`Quad_Build` `0x10050080`):

| `follow_view` | Orientation | Stretch? |
|---|---|---|
| 0 | screen billboard (`v_right`, `v_up`) | yes |
| 1 | view pitch/yaw + rolling (`roll += avel.z·dt·10`) | yes |
| 2 | free rotation (`angles += avel·dt·10`) | no |
| 3 | cylindrical billboard around `followaxis` | no |

**Stretch:** applies when `stretchspeed > 0.01` and `|vel|·stretch > 2·radius`. The quad is `|vel|·stretch` long along velocity, centred on origin, with width `radius·(toCam × dir)` (not normalised).

### 5.5 Wind message and fog

**`TSPSys`** (size −1). Written by the server's `CTSWind::BlowThink` (`MSG_ALL`); read by `MsgFunc_TSPSys` (`0x1004bfd0`).

| Field | Type | Contents |
|---|---|---|
| subtype | byte | must be 3; anything else is ignored |
| seed | long | `RandomLong(0, 30000)` |
| yaw | long | `RandomLong(−45, 45) + angles.y` |
| speed | coord | `base ± variance` |

* The `ts_wind` keyvalues are `base`, `variance`, `frequency` and `angles`.
* `CTSSharedEmitter::SV_UpdateClient` could send subtype 1, but nothing on the server calls it.

**Fog** (`V_SetFog` `0x10056c20`, called at the end of `V_CalcRefdef`):

* If `ts_fog` was loaded, `gl_fog` ≠ 0, and the renderer is hardware: `GL_FOG_MODE = GL_LINEAR`, colour (r, g, b, 1), start = `near`, end = `far`, hint `GL_NICEST`, `glEnable(GL_FOG)`.
* Override: in single player with `gl_fog == 2`, the `gl_fog_red/green/blue/start/end` cvars are used instead.
* `glDisable` runs at the end of the transparent pass.
* The client calls `opengl32` directly, so fog does nothing in the software renderer.

### 5.6 Address table

| Address | Name |
|---|---|
| `0x1003ab40` | `CTS_CL_Emitter::Frame` |
| `0x1003a960` / `0x1003a860` / `0x1003a5d0` | `LoadMap` / `LoadEntityLump` / `ProcessEnts` |
| `0x1003a160` / `0x1003a290` / `0x1003a3c0` / `0x1003a7f0` / `0x1003a820` | `Emitter_ParseEntity` / `Particle_ParseEntity` / `Fog_ParseEntity` / `Fog_Set` / `FindParticleByTargetname` |
| `0x1003a9b0` | `Particle_RandomizeFromTemplate` |
| `0x10055bd0…0x10055d10` | `NextEmitter`, `NextParticle`, `AddEmitter`, `AddParticle`, `SetEmitterParticle`, `KillAll` (`0x10055cf0`), `KillEmitter` |
| `0x10055d20` / `0x10055f90` | `EmitterKeyValue` / `ParticleKeyValue` |
| `0x100507e0` / `0x10056bc0` | `PSys_Init` ("Cannot initialize Particle system!") / `PSys_Startup` |
| `0x10050b60` / `0x10050b20` / `0x1004ffe0` | `PSys_Add` / `PSys_Kill` / `PSys_GetScratchParticle` |
| `0x10050ad0` / `0x10050b00` | `PSys_CooldownReady` / `PSys_SetCooldown` |
| `0x10050ce0` / `0x10051270` / `0x10051d50` / `0x10051d10` | `Particle_Move` / `Particle_Think` / `Particle_Collide` / `Particle_Rest` |
| `0x100520d0` / `0x10050080` / `0x10050000` | `PSys_UpdateDraw` / `Quad_Build` / `Quad_Emit` |
| `0x100524c0` / `0x10052720` / `0x10052c80` | `PSys_PushRadial` / `PSys_PushAlongLine` / `PSys_BlastPush` |
| `0x1004bfd0` | `MsgFunc_TSPSys` |
| `0x1001aea0` / `0x1001ae60` | `SharedRandomFloat` / `SharedRandomLong` (seeded) |
| `0x10050760` | `CosineLerp` |

---

## 6. Weapon kick (client-side recoil)

TS applies **recoil on the client**, not with server `punchangle`.

* The client copy of `CTSGun::VKickback` (`0x10008230`) uses the same constants as the server function: pitch target `−= viewkick·0.85`; yaw by weapon class: 8 → 0.35, 4/5 → 0.15, 1 → −0.25, 6/7 → −0.3, 9 → −0.35; ×0.775 with a silencer, ×2/3 with DoubleFireRate.
* It then starts the view-shake spring `ViewShake::Start(amp, 0.1 s, 35 Hz)` (`0x10057fa0`, object `0x1018cac8`), with amp from the time since the last shot.
* The spring's random flips use `pfnRandomFloat`, so they are **not seeded**. They only run when `runfuncs` is set.
* `V_CalcNormalRefdef` eases the current kick (`0x101914f8`) toward the target (`0x10191d10`) at `min(ft·15, 1)` and **adds the step to `pparams->cl_viewangles`**. Steps 8–9 of §7.2 show where this happens.
* This works because the engine copies `cl_viewangles` back into `cl.viewangles` after `V_CalcRefdef`. That copy-back was confirmed in FWGS `V_GetRefParams`, not in a GoldSrc binary. **A port must keep this write-back.**
* The server's `VKickback` writes `pev->punchangle` only for bots (`FL_FAKECLIENT`).
* **`gmsgTSKickAlign` is unused:** it has a server variable but no `RegUserMsg` and no writer.

---

## 7. View (`V_CalcRefdef`) and camera

### 7.1 Function map

| Address | Name | Notes |
|---|---|---|
| `0x10069b90` | `V_CalcRefdef` | dispatch, then screen fade, then fog |
| `0x10067890` | `V_CalcNormalRefdef` | TS heavily modified |
| `0x10068f70` | `V_CalcSpectatorRefdef` | modes 1/2/3/5, overview |
| `0x100676e0` | `V_CalcIntermissionRefdef` | SDK |
| `0x10069e90` | `V_Init` | cvars (§7.7) |
| `0x10067320` / `0x10067290` / `0x100672f0` | `V_DriftPitch` / `V_StartPitchDrift` / `V_StopPitchDrift` | SDK |
| `0x10066e70` / `0x10066de0` | `V_CalcBob` (TS rewrite) / `V_SmoothBobZ` | |
| `0x100677d0` | `V_SmoothStairs` | TS |
| `0x100675b0` | `V_CalcViewRoll` | TS stunt roll |
| `0x100671f0` | `V_CalcRoll` | SDK formula with `side·0.01`, rollspeed 10 |
| `0x10067550` | `V_AddIdle` | SDK; `v_i*` are static (not registered) |
| `0x100674a0` | `V_CalcGunAngle` | `ev_punch` ×1.25 |
| `0x10069e40` | `V_DropPunchAngle` | `len −= (10 + 0.5·len)·ft·ts` |
| `0x10057ed0` | `V_ApplyKick` *(inferred)* | |
| `0x10058000` / `0x10057fa0` | `ViewShake::Update` / `Start` | |
| `0x10057e90` | `Approach(target, cur, step)` | |
| `0x10024c80` / `0x10025720` / `0x1004fec0` | `CAM_Think` / `CL_CameraOffset` / `CL_IsThirdPerson` | `cam_thirdperson` = `0x100df390` |
| `0x1004fe00` / `0x10025320` / `0x10025370` | `CAM_ToggleThirdPerson` / `CAM_ToFirstPerson` / `CAM_Init` | |
| `0x10049570` / `0x10049760` / `0x10049620` | `MsgFunc_SetFOV` / `CHud::Think` / `ApproachFOV` | |
| `0x10029660` / `0x10029680` / `0x10029780` / `0x10029710` | `MotionBlur_Reset` / `_Add` / `_Update` / ghost callback | |

The Ghidra gap `0x10069f8d–0x1006ac7a` contains only import thunks.

### 7.2 `V_CalcNormalRefdef` step by step

The `pparams` fields used are SDK `ref_params_t`.

1. `V_DriftPitch`.
2. **Local player translucency** (third person or demo): rendermode 1.
   * `renderamt` approaches 100 when the crosshair is on a player (`0x1018a60c`) and `cl_thirdtransparency` is on; otherwise 255.
   * Step size: 50 per frame while fading out, 5 per frame while fading back in.
3. `bob = V_CalcBob()`. A spectator origin override (`0x101914f0`, from pmove) can replace `simorg`.
4. `vieworg = simorg`, with a smoothed viewheight (z only): `vh += (viewheight.z − vh)·min(15·ft, 1)`.
5. **Stair smoothing:**
   * on ground: `smoothZ` follows at rate 15;
   * on the frame you leave the ground: offset = `z − smoothZ`;
   * every frame: `z = smoothZ + offset`, then the offset decays at rate 15.
6. Angle override (spectator); then the 64-entry angle-smoothing ring if `cl_vsmoothing` is set and pmove smoothing flag bit 2 is set.
7. **Weapon kick** (§6): pitch and yaw only; zero it if `|Δ|² < 0.01`.
8. **View-shake spring** step added to `cl_viewangles`. Then `cl_viewangles.pitch += bobPitch·0.1`.
9. `viewangles = cl_viewangles`; `V_CalcShake`, `V_ApplyShake(vieworg, viewangles, 1.0)`; `vieworg += 1/32`.
10. Water offset (`cl_waterdist`, default 4) as in the SDK.
11. `V_CalcViewRoll`, then `V_AddIdle`, then `AngleVectors`.
12. **Third person** (§7.4), then the view model:
    1. angles via `V_CalcGunAngle`;
    2. origin = `vieworg`, then `V_ApplyShake(…, 0.9)`;
    3. `origin += bob offset + forward·(int)(80 − fov)·0.15`, `z −= 1`;
    4. SDK viewsize nudges.
13. `viewangles += punchangle + ev_punchangle`; `V_DropPunchAngle` (scaled by ts). `ev_punchangle` is only ever zeroed, so `V_PunchAxis` is never used.
14. Origin smoothing (SDK `ViewInterp` ring) when the smoothing flag is set, or `cl_vsmoothing` in multiplayer.
15. Save `v_origin`, `v_angles` and `v_cl_angles`.
    * Third person: `viewangles` = camera angles, and the player model pitch = `−normalize(campitch)/3`.
    * `g_pViewModel` = the view model if fov ≥ 40, else NULL.

**End of `V_CalcRefdef`: screen fade, rewritten every frame**

```c
tint = (cl_slowfade && ts < 1) ? rgba(0,100,125,(1-ts)*50) : 0;
if (fadeStart < t && t < fadeStart+dur) {           // TSFade, see 7.5
    half = (dur-hold)/2;  f = ramp-in / 1 / ramp-out;
    out = rgb*f + tint*(1-f), alpha likewise;       // red channel has no tint
} else out = tint;
out.fadeFlags = FFADE_OUT|FFADE_STAYOUT;  pfnSetScreenFade(&out);  V_SetFog();
```

Because this runs every frame, it **overrides any engine `ScreenFade` message**. TS sends `TSFade` instead (`UTIL_ScreenFadeWrite` is replaced on the server).

### 7.3 Bob and roll

**`V_CalcBob`**

* Returns 0 in third person or spectator.
* `cl_bob` is an **integer level** (default 4):

  | `cl_bob` | Level | Pitch level |
  |---|---|---|
  | 0 | 0.1 | 0 |
  | 1 | 0.3 | 0 |
  | 2 | 0.5 | 0.15 |
  | 3 | 0.7 | 0.5 |
  | ≥ 4 | 1 | 1 |

* On ground:
  * `sp = min(|vel.xy|/300, 1.1)`;
  * `phase += sp·ft·5.5·ts·100` degrees;
  * the amplitude follows speed;
  * `ofs = up·sin(2·phase)·amp·0.11 + fwd·(0.75 − amp/2) + right·sin(phase)·amp·0.3`;
  * `bobPitch = sin(2·phase)·amp·pitchLevel·0.25`.
* Off ground: the amplitude halves each frame.
* The z component then goes through `V_SmoothBobZ` (rate ft·20).

**`V_CalcViewRoll`** (stunt roll, from `iuser4` bits). The air roll target applies only when not on ground; on ground the target is 0 at rate 15.

| Condition | Roll target | Rate |
|---|---|---|
| dive (`0x10`) | 35 | 7.5 |
| roll/wheel (`0xc00`) | −10 | 5 |
| other airborne | −5.5 | 15 |
| dead (viewheight ≠ 0) | 80 | — |
| spectator | 0 | — |

The result is `V_CalcRoll(angles, simvel, target, 10)`, smoothed by `min(rate·ft, 1)`.

### 7.4 Third-person camera

TS ignores `CAM_Think`'s distance, apart from the camera angles.

* `CAM_Think` is the SDK version without `cam_contain`. The `thirdperson` command toggles the camera, with distance 30.
* The offset (back, right, up) comes from `cl_camtype`:

  | `cl_camtype` | back | right | up |
  |---|---|---|---|
  | 0 | −48 | 16 | 12 |
  | 1 | −48 | −16 | 12 |
  | 2 | −90 | 0 | 12 |
  | 3 | −`cam_back` | `cam_right` | `cam_up` |

* Clamps: back ∈ [−128, 24]; right and up ∈ [−24, 24].
* Up smoothing: when ducked (0 < viewheight < 28), raise to 32, at rate ft·5.
* Back smoothing, rate ft·5: **dead → −180**; **stunt (`iuser4 & 0x130c30`) → −92** (the "stunt camera" pulls back during dives, rolls and wall moves); otherwise unchanged.
* Collision: (1) trace from `playerorg + (0, 0, up + 28)` to the camera with hull 2; (2) on a hit, `vieworg = endpos + normal·4`, then `z += 1`.
* `back == 0` gives a body-cam mode with extra offsets.
* The player model's z is smoothed at rate 16.

**Automatic camera switches**

* Death (`TSHealth` = 0) forces third person.
* `cl_thirdperson` forces the camera on or off on state changes.
* `cl_thirdpersonswitch 1`: kung fu (no weapon) → third person; drawing a weapon → first person *(inferred)*.

**FOV and zoom**

* `CHud::Think` eases the integer `m_iFOV` toward the target by `max(1, |Δ|/2·ft·50)` per frame, so **zoom is animated**.
* `default_fov` is clamped to [70, 110]; 0 means 80. (ts-patcher changes the default to 90.)
* Sensitivity = `target/default · sensitivity · zoom_sensitivity_ratio` (default 1.2).
* `SetFOV` 0 means 80.
* Scope overlay: §3.3.

### 7.5 Slow motion, bullet time, fades

| Msg | Size | Server writer | Layout | Client |
|---|---|---|---|---|
| `TSSlowMo` (`gmsgTSSlowAmt`) | 2 | `UpdateClientData`, `MSG_ONE` | coord `scale·100`. Scale = 0.225 with SlowPause, 0.35 with SlowMotion, else the `GoSlow` value. | `MsgFunc_TSSlowMo` `0x1004bef0`: target = v·0.01 (0 → 1). Plays `goslow.wav` when ts == 1 and the target ≠ 1. |
| `TSBTime` | 1 | `MSG_ONE` | byte bullet-time flag (`GoSlow` 2nd argument) | `0x1004b8e0`: `g_bBulletTime` |
| `TSMBlur` | 2 | `MSG_PVS`: `Killed` (killer and victim), slow-mo powerup use, `CloseCombatAttack` (level 2 if dmg > 50), `GoBulletTime` (2), `CTSStunt` | byte entindex, byte level 0..2 | `0x1004bf90` → `MotionBlur_Add` |
| `TSFade` | −1 | `UTIL_ScreenFadeWrite` (replaces `ScreenFade`) | short dur, short hold (both ×4096, already divided by the player's slow multiplier), short flags (ignored), byte r, g, b, a | `0x1004c1e0`: stored at `0x101914a8`, start = `gHUD.m_flTime` |

**Time scale itself**

* `HUD_Frame` eases `g_flTimeScale` toward the target at `min(7·ft, 1)` and snaps when within 0.05. The server applies the same function to `pev->fuser1`.
* Client prediction does **not** use the eased global for movement. It uses `fuser1` (§8).
* The eased global scales: tempents, particles, bob phase, punch decay, ghost spawn rate, event sound pitch and the view-model framerate.

**Server side**

* `CTSGameRules::SetGlobalSlowMotion` and `GlobalSlowMotion2` (every 0.5 s) call `GoSlow` on players, grenades and world guns.
* `CBasePlayer::SlowMotionFlow` spreads a slowed player's scale to visible players.
* `CTSStunt::GoBulletTime` needs slow ≤ 0.99. It sets `iuser4 |= 0x4 | 0x20` and sends `TSMBlur` with level 2.

### 7.6 Motion blur = afterimage ghosts

`cl_motionblur` (default 1) is **not a screen-space blur**. It draws translucent copies of players that freeze in place.

* **State:** 32 entries × 24 bytes at `0x100dff48`: `{u8 active; i32 count; i32 max; f64 nextTime}`.
* **`MotionBlur_Add(ent, level)`:** if the entry is already active, `max += 5`. Otherwise level = `min(msg level, cl_fx)`, and `max` = 10 for level 1, 15 for level 2, else 5.
* **`MotionBlur_Update`** (from `HUD_CreateEntities`):
  * entries are cleared when ts ≥ 0.99;
  * every `0.03/ts` s it calls `CL_TempEntAllocCustom(origin, playermodel, 0, cb)`;
  * the ghost copies the player's state and angles, and sets `rendermode 1`, `renderamt 120` (`fuser2 = 120`), **`renderfx 17`**, **`rendercolor = (idx, 0, 1)`**, framerate 0;
  * the gait fields go into `iuser1/iuser2/fuser3/fuser4` (§2.3).
* **Callback:** `fuser2 −= 255·ft/max(ts, 0.01)`; `renderamt` follows `fuser2`; the ghost dies at 0.

### 7.7 View and camera cvars

| Cvar | Default | Flags | Notes |
|---|---|---|---|
| `cl_bob` | 4 | archive | integer level 0..4 |
| `cl_bobcycle`, `cl_bobup` | 0.8, 0.5 | — | registered, unused |
| `cl_waterdist` | 4 | — | |
| `cl_slowfade` | 1 | — | slow-mo blue-green tint |
| `cl_vsmoothing` | 0.05 | archive | |
| `v_centermove`, `v_centerspeed` | 0.15, 500 | — | |
| `scr_ofsx/y/z` | 0 | — | unused |
| `cl_camtype`, `cam_back`, `cam_right`, `cam_up` | 0, 90, 0, 12 | archive | |
| `cl_thirdperson`, `cl_thirdpersonswitch`, `cl_thirdtransparency` | 0, 0, 1 | archive | |
| `cl_motionblur` | 1 | archive | ghosts; 2 = also your own ghosts in third person |
| `cl_fx` | 1 | archive | quality (§0) |
| `cl_shadow`, `cl_laser`, `cl_lasercolor`, `cl_gore` | — | archive | §3, §4 |
| `cam_idealdist` | 100 | — | ignored by the TS camera offset |
| `c_min/maxpitch`, `c_min/maxyaw`, `c_min/maxdistance` | 0/90, −135/135, 30/200 | — | SDK |
| `default_fov` | 80 | — | |
| `zoom_sensitivity_ratio` | 1.2 | — | |
| `gl_fog`, `gl_fog_start/end`, `gl_fog_red/green/blue` | 0, 0/2048, 0.5 | `gl_fog` archive | |

---

## 8. Prediction

### 8.1 Player movement (pm_shared copy)

**Entry points**

* `HUD_PlayerMove` → `PM_Move` (`0x1002e990`); it caches `physents[0].model` in `0x100db0b8`.
* `HUD_PlayerMoveInit` → `PM_Init` (`0x1002ea10`).
* `HUD_PlayerMoveTexture` → `PM_FindTextureType` (`0x1002a340`).
* The client keeps `pmove` in `0x100e52fc`. The `playermove_t` offsets are the SDK ones.

**The client copy matches the server's `PM_*` functions constant for constant.** The only exceptions are:

* the client-modified spectator move;
* the client's `PM_PlayerMove`, which first clears three spectator-camera flags when `runfuncs` is set;
* debug and unreferenced functions that the linker dropped.

The server pm code can therefore be ported once into the shared crate.

**Function map** (client address → server name; sizes client/server)

| Client | Server name | Size | Client | Server name | Size |
|---|---|---|---|---|---|
| `0x10029bb0` | AngleVectors | 247/282 | `0x1002c340` | PM_CheckStuck | 887/1332 |
| `0x10029cb0` | NormalizeAngles | 64/206 | `0x1002c6c0` | GetChaseOrigin | 200/223 |
| `0x10029cf0` | InterpolateAngles | 121/249 | `0x1002c790` | PM_SpectatorMove (**client-modified**) | 2035/1190 |
| `0x10029d70` | AngleBetweenVectors | 129/185 | `0x1002cf90` | PM_SplineFraction | 31/45 |
| `0x10029e00` / `0x10029e40` / `0x10029e90` | CrossProduct / VectorNormalize / VectorAngles | | `0x1002cfb0` | PM_FixPlayerCrouchStuck | 156/253 |
| `0x10058390` / `0x100583e0` / `0x10058410` | Length / VectorScale / VectorMA | | `0x1002d050` | PM_UnDuck | 348/307 |
| `0x10029f70` / `0x1002a030` | PM_SwapTextures / PM_SortTextures | | `0x1002d1b0` | PM_LadderMove | 874/933 |
| `0x1002a0a0` | PM_InitTextureTypes | 661/569 | `0x1002d520` | PM_Ladder | 197/249 |
| `0x1002a340` | PM_FindTextureType | 95/171 | `0x1002d5f0` | PM_WaterJump | 179/183 |
| `0x1002a3a0` | PM_PlayStepSound | 1733/1665 | `0x1002d6b0` | PM_AddGravity | 95/115 |
| `0x1002ab20` / `0x1002aba0` | PM_MapTextureTypeStepType / PM_CatagorizeTextureType | | `0x1002d710` | PM_PushEntity | 203/196 |
| `0x1002aca0` | PM_UpdateStepSound | 806/871 | `0x1002d7e0` | PM_Physics_Toss | 779/794 |
| `0x1002aff0` | PM_AddToTouched | 160/217 | `0x1002daf0` | PM_NoClip | 174/200 |
| `0x1002b090` | PM_CheckVelocity | 248/341 | `0x1002dba0` | PM_PreventMegaBunnyJumping | 97/137 |
| `0x1002b190` | PM_ClipVelocity | 159/241 | `0x1002dc10` | PM_CheckWaterJump | 610/622 |
| `0x1002b230` / `0x1002b2b0` | PM_AddCorrectGravity / PM_FixupGravityVelocity | | `0x1002de80` | PM_CheckFalling | 428/469 |
| `0x1002b310` | PM_FlyMove | 1245/2223 | `0x1002e030` | PM_PlayWaterSounds | 222/269 |
| `0x1002b7f0` | **PM_GetAccelBySpeed** (TS) | 53/64 | `0x1002e120` | PM_CalcRoll | 151/134 |
| `0x1002b830` | PM_Accelerate | 214/256 | `0x1002e1c0` | PM_DropPunchAngle | 113/148 |
| `0x1002b910` | PM_Friction | 412/466 | `0x1002e240` | PM_ReduceTimers | 237/222 |
| `0x1002bab0` | PM_AirAccelerate | 188/220 | `0x1002e330` | PM_PlayerMove | 1031/1103 |
| `0x1002bb70` | PM_WaterMove | 769/890 | `0x1002e770` | PM_CreateStuckTable | 539/1039 |
| `0x1002be80` | PM_AirMove | 318/310 | `0x1002e990` | PM_Move | 115/174 |
| `0x1002bfc0` / `0x1002bfe0` | PM_InWater / PM_CheckWater | | `0x1002ea10` | PM_Init | 30/93 |
| `0x1002c1a0` | PM_CatagorizePosition | 294/302 | `0x1002c2d0` / `0x1002c320` | PM_Get/ResetStuckOffsets | |

**TS block** (the server keeps these at the start of pm_shared)

| Client | Server name | Size | Notes |
|---|---|---|---|
| `0x10052fd0` | PseudoClimb | 551/564 | IN_JUMP while airborne: ledge assist. Pitch ±60, 64/32-unit traces, `+1600·ft` z boost when speed < 0.5·maxspeed. |
| `0x10053200` | TSStandUp | 425/426 | view_ofs 28 / 16; clears iuser4 0x8 |
| `0x100533b0` | TSGoDuck | 127/154 | forces hull 1 + `FL_DUCKING` |
| `0x10053430` | TSWallJump | 136/156 | `vel = −forward·210`, `vz = 236.643` |
| `0x100534c0` | TSWallJumpClimb | 72/84 | `vz = 334.664` |
| `0x10053510` | TSDive | 325/360 | (speed, up) = (90, 25) / (90, 50) / (100, 10); `vz = √(up·1600)` |
| `0x10053660` | TSHandle | 279/299 | stunt dispatcher (see the list below) |
| `0x10053780` | PM_Jump | 731/817 | |
| `0x10053a70` | PM_CheckParamters | 766/736 | |
| `0x10053d70` | PM_Duck | 603/743 | |
| `0x10053fd0` | PM_WalkMove | 1333/1290 | |

**TS changes against SDK `pm_shared.c`**

* **Slow motion:**
  * `frametime = msec·0.001·fuser1`; `fuser1 < 0.1` freezes the player.
  * The step-sound interval is divided by `max(fuser1, 0.1)`.
  * `PM_ReduceTimers` and the waterjump timer still use raw msec.
* **`TSHandle`** runs after ladder detection and before step sounds and duck: PseudoClimb; iuser4 & 0x1 → moves ×0.5; & 0x20 → forward = 0, side/up ×0.3; & 0x1c0 → TSDive; & 0x7000 → TSWallJump; & 0x8000 → TSWallJumpClimb; & 0x4 → TSGoDuck; & 0x8 → TSStandUp.
* **`PM_GetAccelBySpeed`:** `maxspeed ≥ 330 ? 1.1 : 0.6 + (maxspeed − 210)/120·0.5`. It multiplies ground acceleration, except while sliding (0x20) or ducked.
* **`PM_CheckParamters`:**
  * The maxspeed clamp of cmd moves applies only when `iuser1 > 0` (TS quirk).
  * Moves are zeroed when frozen, dead, or `iuser4 & 0x10c10`.
  * Flip (`0x100000`): forward ×0.5, side/up ×0.25, gravity 0.3 (rising) / 0.75 (falling) while holding jump.
  * `iuser4 & 2` or dead freezes yaw from a per-player array (`0x1018a9a4`, the server's `OldrotArray`).
  * Roll = `CalcRoll·4`. Dead view_ofs = −8.
* **`PM_Jump`:**
  * Blocked by `iuser4 & (0x4|0x10|0x20|0xc00|0x10000|0x20000)`.
  * Jump speed **236.643** (= √(2·800·35); SDK 268.3).
  * Physinfo key **`mj`**: when 1, ducked, holding duck, and `flDuckTime > 0` → `vz = 400` and `iuser4 |= 0x200000` (super jump; the server turns this into flip 0x100000).
  * No `slj` long jump.
* **`PM_Duck`:** returns early on stunt bits. Ducked view_ofs is **16** (SDK 12). Ducked moves ×0.333.
* **Step sounds:** run threshold 210 (SDK 220); ducking ×0.35 volume; silent with iuser4 0x1 or 0x200 (stealth shoes).
* **`PM_CheckFalling`:** max safe fall speed **680** (SDK 580); the half threshold is 340.

### 8.2 Weapon prediction (`HUD_WeaponsPostThink` = `0x10003830`)

**Setup**

* On first run (`0x100036f0` + `0x10007de0`) the client: builds the weapon info table (§4.3); fills a fake engine-function table (`pfnPlaybackEvent` → `HUD_PlaybackEvent` `0x1001ad50`, plus random functions and others); creates the local player (`0x1009e628`, vtable `0x1007a548`); creates **a single `CTSGun`** (`0x1009f238`, vtable `0x1007a6b4`) registered as **HL weapon slot 16**.
* `weapon_tsgun` (`0x100083e0`) is its `LINK_ENTITY_TO_CLASS`.
* All 38 TS weapons are predicted by that one object. It switches the info record by the TS weapon id carried in `vuser3[0]`.

**Per-command flow**

1. On respawn, reset the player and gun. On death, holster the gun.
2. Copy from `from` into the player:
   * `iuser1/2/4`, `fuser1`, `vuser1[1]` (powerups);
   * velocity, flags, deadflag, waterlevel, maxspeed, fov, weaponanim, viewmodel, `m_flNextAttack`;
   * buttons (pressed/released computed from `oldbuttons`);
   * `random_seed` → `player+0x7bc`.
3. Copy slot 16's `weapon_data_t` into the gun, then rebuild the current TS weapon slot from `vuser*` and the ammo fields (§8.3). A demo buffer is written when `vuser2[2]` changes.
4. If alive, not in a menu, and `m_flNextAttack ≤ 0`: `gun->ItemPostFrame()` (`0x1000b7b0`). A weapon-index change calls `SelectWeapon` + `Deploy`.
5. Copy back to `to`: viewmodel, fov, weaponanim, nextattack, maxspeed, ammo, `iuser4`, `fuser1`, `vuser1[1]`. A new weaponanim triggers `HUD_SendWeaponAnim(anim, body)`.
6. **Timer decrement:**
   * `dt = msec·0.001·max(fuser1, 0.01)`, ×1.5 with DoubleFireRate;
   * applied to NPA, NSA, idle, `fuser1`, **`fuser4`**, next reload, aim bonus and next attack;
   * SDK clamps;
   * the client-only accuracy decay `0x1009ed8c` drops by `dt·0.1`.
7. Capture the view origin for the laser and flashlight endpoints.

**`weapon_data_t` mapping**

| `weapon_data_t` field | Client gun field | Notes |
|---|---|---|
| `m_iClip` | `+0xa4` | |
| `m_flNextPrimaryAttack` / `Secondary` | `+0x8c` / `+0x90` | |
| `m_flTimeWeaponIdle` | `+0x98` | |
| `m_fInReload` / `m_fInSpecialReload` | `+0xb0` / `+0x88` | |
| `iuser3` | `+0x50` | `m_fireState` |
| `fuser1` | `pev->fuser1` | |
| **`fuser4`** | `+0x94` | **`m_flNextAlternateAttack`** *(inferred)*. Client-only; not sent by the server. |

`m_fAimedDamage`, `m_fInZoom`, `m_iWeaponState`, `iuser4` and `fuser2/3` are unused.

**`ItemPostFrame` (TS)**

1. When a reload finishes, refill the clip (akimbo splits it).
2. `IN_ATTACK2` → Secondary; `IN_ATTACK` → Primary; **`IN_CANCEL` (0x40) & fuser4 ≤ 0 → AlternateAttack**; `IN_RELOAD` → Reload (except the Contender); then idle.

**Firing**

* Events are played locally with `FEV_NOTHOST` (`firelinked` is never played on the client).
* Spread: info accuracy + accumulated kick (`player+0x764`), ×0.875 with silencer.
  * Barrett: spread 0.3 when moving faster than 35.
  * M60: ×5 kick when moving faster than 175.
* Pellets use the shared seed.
* Fire rates: burst 0.03 s between shots and 0.2 s after the burst; semi on an auto-capable weapon 0.1 s; otherwise `info+0x18`.
* `VKickback` is applied client-side (§6).
* Melee (kung fu id 0, knife, katana, coldcock) is predicted only as animation + event + timers. The client copies skip the damage code, so they are much smaller than the server's.

**`CTSGun` method map** (client vtable offset = server offset − 8)

| Client | Server `CTSGun::` | Client | Server `CTSGun::` |
|---|---|---|---|
| `0x100083f0` | Spawn | `0x100091e0` | StandardFire |
| `0x10008470` | Reset | `0x100096f0` | AkimboFire |
| `0x100084e0` | Precache (events) | `0x10008e50` | ShotgunFire |
| `0x10008720` | Deploy | `0x10008100` | ScaleSpread |
| `0x100085d0` | DropWeapon | `0x10008230` | VKickback |
| `0x10008660` | GetBetterWeapon | `0x10009e30` / `0x1000a840` | GrenadeFire / GrenadeIdle |
| `0x100086b0` | SelectWeapon | `0x10009ee0` / `0x1000a1f0` | KatanaFire / KatanaThrow |
| `0x1000ab00` | HolsterWeapon | `0x1000a270` | KnifeFire |
| `0x100089a0` / `0x100088e0` / `0x10008aa0` | Primary / Secondary / AlternateAttack | `0x1000a720` / `0x1000a450` / `0x1000a4c0` | Reload / ReloadWeapon / ShotgunReload |
| `0x10008b30` | Fire | `0x10008c20` (no Ghidra function) | ColdCock |
| `0x10008ac0` | EmptySound | `0x1000a9a0` | WeaponIdle |
| `0x1000b7b0` | ItemPostFrame | `0x1000ad70` / `0x1000adc0` / `0x1000af10` | CCombatIdle / Block / Attack |
| `0x1000acd0` | UpdateClientData | `0x100088a0` | Unzoom *(inferred)* |

**Helpers**

| Address | Name |
|---|---|
| `0x1001aea0` | `UTIL_SharedRandomFloat` (seed table `0x10093168`) |
| `0x1000ba00` | `FireBulletsPlayer` spread (SDK form) |
| `0x1001ace0` | `HUD_SendWeaponAnim` |
| `0x1001ad20` | `HUD_PlaySound` |
| `0x1001adf0` | `UTIL_WeaponTimeBase` (returns 0) |
| `0x100070f0` / `0x10007100` | `InfiniteClips` / `DoubleFireRate` |

### 8.3 What the prediction callbacks carry

**`HUD_TxferLocalOverrides`** (`0x1001b900`): `origin`, `iuser1..4`. This is the SDK set plus `iuser4`.

**`HUD_ProcessPlayerState`** (`0x1001b950`):
* the SDK field list, plus `iuser4`;
* for the local player it also stores `playerclass`, `team` and `iuser1/2/3` in globals (`g_iUser1..3`), plus one more value through `__ftol` (`0x10190b14`).

**`HUD_TxferPredictionData`** (`0x1001bb00`):
* **Player state:** `oldbuttons`, `flFallVelocity`, `iStepLeft`, `playerclass`.
* **Client data:** `viewmodel`, `m_iId`, `ammo_shells/nails/cells/rockets`, `m_flNextAttack`, `fov`, `weaponanim`, `tfstate`, `maxspeed`, `deadflag`, `iuser1..3` (spectator globals when `IsSpectateOnly`), **`iuser4`, `fuser2`, `fuser3`, `vuser1..4`**.
* **All 32 `weapon_data_t`** (0x2c0 dwords).
* `fuser1` doesn't need copying: pmove reads it from `clientdata` every command and never writes it. `fuser4` is never sent. `fuser2/3` are SDK leftovers and always 0.

**TS fields in `clientdata_t`** (server `UpdateClientData` when `m_iId == 16`)

| Field | Meaning |
|---|---|
| `fuser1` | **slow-motion scale** for this player (pmove frametime, weapon timers) |
| `iuser4` | stunt/state bits (table below) |
| `vuser1[1]` | powerups: 1 SlowMotion, 2 InfiniteClips, 8 SlowPause, 0x10 DoubleFireRate |
| `vuser1[2]` | active items (laser/flashlight on), used by the beams |
| `vuser2[0]` | pump pending / grenade armed / burst in progress |
| `vuser2[1]` | reserve ammo of the current ammo type |
| `vuser2[2]` | burst shot counter *(inferred)* |
| `vuser3[0]` | current TS weapon id (0 = kung fu) |
| `vuser3[1]` | firemode: 0 FullAuto, 1 Semi, 2 Burst, 3 Pump, 4 FreeSemi, 5 FreeFull |
| `vuser3[2]` | attachments: 1 silencer, 2 laser, 4 flashlight, 8 scope |
| `vuser4[0]` | akimbo hand toggle |
| `vuser4[1]` | clip |
| `vuser4[2]` | in reload |
| `ammo_nails` | left akimbo clip |
| `ammo_shells` | clip of the paired single/akimbo variant |

**`iuser4` bits** (shared by pmove, view, renderer and server `CTSStunt`)

| Bit | Meaning |
|---|---|
| `0x1` | blocked/slowed: moves ×0.5, no footsteps |
| `0x2` | dead: yaw frozen |
| `0x4` | forced crouch hull (rolls, wall jumps, wheel, bullet time) |
| `0x8` | stand-up request |
| `0x10` | diving |
| `0x20` | sliding/lying after a dive or bullet time |
| `0x40` / `0x80` / `0x100` | one-shot dive impulses (90, 50) / (100, 10) / (90, 25) |
| `0x200` | silent footsteps (stealth shoes) |
| `0x400` / `0x800` | cartwheel/roll left / right |
| `0x1000` (mask `0x7000`) | wall-jump impulse |
| `0x8000` | wall-climb impulse |
| `0x10000` / `0x20000` | wall-jump / wall-climb in progress |
| `0x40000` | rolling *(inferred)* |
| `0x80000` | locked angles *(inferred)* |
| `0x100000` | super-jump flip |
| `0x200000` | super jump started (`mj`) |
| `0x400000` | view_ofs == 0 |
| `0x800000` | dive along view forward |

The "stunt" camera mask `0x130c30` and the jump-block mask above are combinations of these bits.

---

## 9. Open questions

| Item | Where | How to resolve |
|---|---|---|
| Spine yaw line `a3[2] = a3[0] + d` (likely a typo for `a3[2] += d`) | `StudioSetupBones` `0x10031080` | Compare torso facing in game while strafing |
| Fire/ricochet/explosion pitch `100 − ts·(−300)` = 400 | `0x1003eeed`, `0x10044dbd`, `0x100481e4` | Listen in game; check the engine pitch clamp |
| Gait ×0.75 condition | `StudioEstimateGait` | Compare walk cycles |
| `iuser4` 0x40000 / 0x80000 meanings | server `CTSStunt` | Read the server `CTSStunt::Landing` / `PostThink` |
| Spectator mode 5 = in-eye (the SDK uses 4) | `StudioDrawPlayer`, `HUD_AddEntity`, spectator refdef | Check server `Observer_SetMode` constants |
| `DAT_100d5810` readers | `HUD_AddEntity` | Probably accessed through a struct base |
| `cl_viewangles` write-back on Steam GoldSrc | §6 | Test recoil on a GoldSrc build |

---

## 10. Rust recreation notes

This section maps onto `docs/rust.md` §7–§9 and §11.

### 10.1 Suggested order of work

| # | Piece | Depends on | Notes |
|---|---|---|---|
| 1 | `shared::pm`: port the **server** pm code (§8.1) | — | The client copy is identical, so one port serves both. Unit-test against the TS constants: jump 236.643, duck view 16, fall 680, accel-by-speed. Store `fuser1` = time scale and `iuser4` = stunt bits from day one. |
| 2 | Prediction callbacks (§8.3) | 1 | Txfer: carry `iuser4`, `vuser1..4`, all `weapon_data`. ProcessPlayerState: SDK set + `iuser4`. TxferLocalOverrides: + `iuser4`. |
| 3 | `V_CalcRefdef` minimum + bob + stairs + punch | 1 | Write recoil into `cl_viewangles` (§6). Add the screen-fade writer early: it is just `pfnSetScreenFade` every frame. |
| 4 | Events: `fire` / `empty` / `reload` / `pump` with sound, muzzle flash, shell (`R_TempModel`), decals, texture sounds | weapon table in `shared` | The data-driven weapon table (§4.3) is shared with the server and the buy menu. Use the seeded spread formula exactly so impacts match the server. |
| 5 | Shared weapon prediction (one gun object, 38 records) | 1, 4 | Timers × `fuser1`; `FEV_NOTHOST` local events; VKickback client-side |
| 6 | Studio renderer: SDK `CStudioModelRenderer` port + TS split bone (`Bip01 Dorso`/`Spine`) + gait framerate | — | Needed for run+aim. Until then return 0 from `HUD_GetStudioModelInterface` and accept the engine renderer (no torso/leg split). |
| 7 | Slow-motion presentation: eased time scale, tint, pitch formula, tempent/particle `dt` scaling, view-model framerate | 3, 6 | The time scale must also feed `framerate` on the server side |
| 8 | Sprite particle system (`g_PSys`) + impact effects (§4.5) | 4 | Replace engine efx look-alikes. Effects quality (`cl_fx`) can be a simple setting. |
| 9 | Map emitters: BSP entity-lump reader, `ts_emitter`/`ts_particle`/`ts_fog`, wind (`TSPSys`) | 8 | Apply the server `CheckValues` clamps on the client. Velocities are in units per 0.1 s; gravity 1.0 = 800 u/s². |
| 10 | Third-person camera (camtype table, collision trace, stunt pull-back), transparency, anti-peek occlusion | 3 | |
| 11 | Laser sight, flashlight dlight, shadows, scope overlay | 6, 8 | Read attachments after the studio draw |
| 12 | Motion-blur ghosts (renderfx 17 + `rendercolor.b = 1`) | 6, 7 | Needs the custom renderer, so it can't be done with the engine renderer |
| 13 | Client slow-motion bullets with trails | 4, 7 | Mirrors the server `CBulletManager` |

### 10.2 What is optional

| Tier | Pieces |
|---|---|
| **Required for gameplay parity** | pmove (1); prediction transfer (2); weapon table + prediction (4–5); recoil via `cl_viewangles`; the slow-motion time scale applied to pmove and weapon timers |
| **Strongly expected visually** | torso/leg split (6); muzzle flashes, shells, decals, texture sounds; slow-mo tint and sound pitch; third-person camera; laser sight (other players see it, and the HUD dot depends on it) |
| **Optional / cosmetic** | motion-blur ghosts; shadows (`ombra.spr`); map emitters and wind (maps still work, minus rain, smoke and sparks); fog; whizz sounds; particle push/reaction; adaptive `cl_fx`; LOD bodies; item distance fades; glass shatter sprites (`TE_BREAKMODEL` is a fine fallback); client slow-motion bullets (a simple tracer would do) |
| **Drop** | SDK egon beams (dead code); `firelinked` client playback (never played); `TSKickAlign` (unused); the `fuser2/3` copies |

### 10.3 Pitfalls

* **Direct OpenGL.** Fog and some passes call `opengl32` directly (`glFog*`, `glDisable`). Under FWGS with a non-GL renderer, use the engine fog API or skip fog.
* **Fade overrides.** The client rewrites the screen fade every frame. Any engine `ScreenFade` message is overwritten, so route all fades through the TS fade state.
* **Time scale on two clocks.** The *eased* time scale (`g_flTimeScale`) drives cosmetics. The *networked* `fuser1` drives simulation. Keep both: using the eased value for prediction causes mispredictions.
* **renderfx 17 is not SDK.** TS reuses `kRenderFxDeadPlayer` with `rendercolor` fields. If the engine renderer is used, ghosts and corpses render wrong. Pick a mod-private encoding in the Rust renderer.
* **Shared-random seed.** Bullet spread uses `UTIL_SharedRandomFloat` with `bparam2` / `random_seed`. The view-shake spring and particles use unseeded `pfnRandom*`. Only the bullet path has to be bit-exact.
