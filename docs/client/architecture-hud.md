# TS 3.0 client.dll — architecture, HUD, user messages, input, menus

Scope: `ts/cl_dlls/client.dll` (TS 3.0, MSVC 2007, image base `0x10000000`). All addresses are
PE VAs, which are also the Ghidra and `objdump` addresses. The reference is the HL SDK `cl_dll`
(TFC-flavoured: `TeamFortressViewport`, `CHudMenu`, `ScorePanel`).

Conventions: **(inferred)** marks a name or meaning that comes from behaviour, not from a
string or symbol. `gHUD` = the `CHud` singleton at `0x100cf920`. `gViewPort` = the pointer at
`0x100d5cb0`. `gEngfuncs` = `0x100d5b28`, so `ds:0x100d5b70` is `gEngfuncs+0x48` =
`pfnHookUserMsg`, `+0x44` = `pfnAddCommand`, and `+0x38` = `pfnRegisterVariable`.

**Decompile coverage warning.** Ghidra did not create functions for many small thunks and some
bodies. Examples: every `HOOK_MESSAGE` thunk at `0x100498a0..0x10049b60` and
`0x1004c800..0x1004c9c0`, the TS status `Draw` at `0x10049ea0`, the TS weapon `Think` at
`0x1004ce10`, the input `+cmd` handlers at `0x10025cc0..0x100262a0`, and `CHudDeathNotice` at
`0x1001afa0..0x1001b8b0`. So `decomp/*.c` shows only 32 of the 76 `pfnHookUserMsg` calls, 79 of
the 93 `pfnAddCommand` calls, and 104 of the 107 `pfnRegisterVariable` calls. The tables below come
from scanning the full `objdump -d` for `call [gEngfuncs+off]` and resolving the pushed
immediates. Use that method again if you need anything else from the gaps.

---

## 1. Export table

The client exports 42 plain names plus 463 C++-mangled `vgui::*` symbols. The mangled ones are the
statically linked VGUI1 import/wrapper layer, not mod code.

| Export | VA | What it does in TS | Differences from SDK |
|---|---|---|---|
| `Initialize` | `1001aa10` | Copies `0x62` dwords (the 2007 `cl_enginefunc_t` size) into `gEngfuncs` and requires `iVersion == 7`. Then `EV_HookEvents` (`thunk_FUN_10003240`, hooks `events/fire.sc`, `firelinked.sc`, `reload.sc`, `knife.sc`, `katana.sc`, `closecombat.sc`, `coldcock.sc`, `grenade.sc`, `pump.sc`, `draw.sc`, `empty.sc`). | Copies the table before checking the version (harmless). Has TS event names. |
| `HUD_Init` | `1001aa70` | `InitInput()` `10026b30` → `CHud::Init` `10020170` → `Scheme_Init` `1005c2a0` (registers `bitmapfonts`). | Same order as SDK. |
| `HUD_VidInit` | `1001aa50` | `CHud::VidInit` `100206c0` → `VGui_Startup` `1005b3e0`, which creates `TeamFortressViewport` (`0xad8` bytes) on the first call and re-inits it later. | SDK. |
| `HUD_Redraw` | `1001aa90` | `CHud::Redraw` `10021aa0`, returns 1. ts-patcher hooks its `ret` at `1001aaa9` for the speedometer. | SDK. |
| `HUD_UpdateClientData` | `1001aab0` | `IN_Commands` `10027ca0` (joystick buttons) → `CHud::UpdateClientData` `10024b00`. That stores origin/angles, `m_iKeyBits = CL_ButtonBits(0)`, and weapon bits, runs `CHud::Think` `10049760` (FOV), writes `cdata->fov`, and calls `CL_ResetButtonBits` `10026a40`. | SDK. |
| `HUD_Reset` | `1001aad0` | Calls `CHud::VidInit` again. | SDK. |
| `HUD_Frame` | `1001aae0` | (1) `ServersThink` `10022bb0` (server-browser net poll). (2) `CVoiceStatus::Frame` `10017ea0`. (3) `CTS_CL_Emitter::Frame` `1003ab40` (map `ts_emitter`/`ts_particle`/`ts_fog` entities). (4) **slow-mo lerp** `10055ae0(frametime, &g_flTimescale 0x100963e8, g_flTargetTimescale 0x1009ff04)`. (5) Clears the anti-script key gate `0x100df5cc` (§5.3). | TS additions 3–5. |
| `HUD_Key_Event` | `10025a80` | Keydown on keynum `0x61` (`'a'`) forwards slot 11 to the TS weapon element (buy-menu hotkey, **(inferred)**). If the binding is one of `+attack +attack2 +alt2 +reload +forward +back +moveleft +moveright +jump`, it sets the key gate `0x100df5cc = 1`. Then `TeamFortressViewport::KeyInput` `10064b90`. | Gate and `'a'` are TS. |
| `HUD_VoiceStatus` | `1001ab40` | `CVoiceStatus::UpdateSpeakerStatus`. | SDK. |
| `HUD_DirectorEvent` | `1001ab60` | `CHudSpectator::DirectorMessage` `10023380` (`gHUD+0x6d8`). | Old name (pre-`HUD_DirectorMessage`). |
| `HUD_Shutdown` | `10027250` | `IN_Shutdown` `100273a0` + `KB_Shutdown` `10025970`. | SDK. |
| `HUD_PlayerMoveInit/Texture/PlayerMove` | `1001a9d0/1001a9e0/1001a9f0` | Shared pm code: `PM_Init` `1002ea10`, `PM_FindTextureType` `1002a340`, `PM_Move` `1002e990`. | TS pm code is covered elsewhere. |
| `HUD_GetHullBounds` | `1001a9a0` | Returns 1 for hulls 0–2 but **does not fill mins/maxs** (the engine keeps its defaults). | SDK fills `VEC_HULL_*`. Prone/duck hulls come from pm. |
| `HUD_ConnectionlessPacket` | `1001a9c0` | `*size = 0; return 0`. | SDK. |
| `HUD_PostRunCmd` | `100045b0` | Sets `g_runfuncs`, runs `HUD_WeaponsPostThink` `10003830` (TS weapon prediction), and records `to->client.fov` into `g_lastFOV` `0x100df1a4`. | SDK shape. |
| `HUD_TxferLocalOverrides` | `1001b900` | origin and iuser1..4. | SDK. |
| `HUD_ProcessPlayerState` | `1001b950` | SDK copy, plus `iuser4`. For the local player it caches playerclass, team, iuser1..3, and fuser2 (`0x10190a10..0x10190b24`). | SDK + `iuser4`. |
| `HUD_TxferPredictionData` | `1001bb00` | SDK copy, including `vuser1..4`, `fuser2/3`, `tfstate`, and `0x2c0` dwords of `weapon_data_t` (64 weapons × 11 dwords). Sets `g_iAlive` `0x100936a4` from deadflag/iuser1. | Copies the whole weapon array, not per-field. |
| `HUD_CreateEntities` | `1001bce0` | `FUN_1001bcd0` (`10034e80` + motion-blur trail manager `10029780(0x100dff48)`, **(inferred)**) → `Game_AddObjects` `10003440` (beams) → voice `CreateEntities`. | Motion blur is TS. |
| `HUD_TempEntUpdate` | `1001bd00` | SDK `HUD_TempEntUpdate`, but **gravity is scaled by `g_flTimescale`** (`fVar3 = 0x100963e8 * frametime`) so tempents slow down during slow-mo. | Timescale. |
| `HUD_AddEntity` | `100447f0` | TS entity filtering (third-person transparency, shadows, laser and teammate-visibility flags). | TS. |
| `HUD_StudioEvent` | `10044b50` | Muzzle flashes and shells, with TS events. | TS. |
| `HUD_GetUserEntity` | `1004eeb0` | Returns NULL. | SDK. |
| `HUD_GetStudioModelInterface` | `1001f3f0` | Version 1. Copies `0x2b` dwords of `engine_studio_api_t` to `0x100ea7c0` and returns its own `r_studio_interface_s` at `0x10093700` (custom player renderer). | SDK shape. |
| `HUD_DrawNormalTriangles` | `10034e40` | `CHudSpectator::DrawOverview` `10024970` (only when `IsSpectateOnly()`). | SDK. |
| `HUD_DrawTransparentTriangles` | `10034e50` | `jmp 10056dd0`: TS beams/particles/laser via TriAPI. | TS. |
| `CL_CreateMove` | `10026570` | §5.2. | Anti-cheat clamps, frozen angles when dead. |
| `CL_IsThirdPerson` | `1004fec0` | `cam_thirdperson` `0x100df390`. | SDK. |
| `CL_CameraOffset` | `10025720` | `cam_ofs`. | SDK. |
| `CAM_Think` | `10024c80` | SDK `CAM_Think`. `cam_command` 1 calls the TS thirdperson toggle `1004fe00`, 2 calls `CAM_ToFirstPerson` `10025320`. | SDK. |
| `KB_Find` | `10025880` | Linked list `0x100df5c8` of `{next, kbutton*, name[32]}`. Registered: `in_graph`, `in_mlook`, `in_jlook`. | SDK. |
| `IN_ActivateMouse/DeactivateMouse/MouseEvent/Accumulate/ClearStates` | `10027260/100272a0/100273d0/100278b0/10027930` | §5.4. `IN_MouseEvent` routes clicks to the TS buy menu when the VGUI cursor is visible. | Buy-menu routing. |
| `V_CalcRefdef` | `10069b90` | `V_CalcNormalRefdef` `10067890` / spectator `10068f70` / intermission `100676e0`. Then the **slow-mo tint and TSFade overlay**: if `cl_slowfade && timescale < 1`, screen fade `(0,100,125,alpha)`. A `TSFade` message overrides that colour during its window. Then `10056c20` (motion blur, **(inferred)**). | TS screen fade. |
| `Demo_ReadBuffer` | `1001b8c0` | Types 0 = FOV `0x100d6074`, 1 = `0x100d6078`, 2 = third-person state `0x100d607c`. | Type 2 is TS. |
| `CreateInterface` | `10004750` | Standard `InterfaceReg` lookup (list head `0x1009ff10`) for VGUI2/voice interfaces. | |
| `weapon_tsgun` | `100083e0` | The client-side `LINK_ENTITY_TO_CLASS` stub for prediction (`FUN_1000b760`). | TS. |

`HUD_ChatInputPosition`, `HUD_DirectorMessage`, `IN_ClientLookEvent` and `GetClientAPI` are **not**
exported.

---

## 2. Initialization flow

```
Initialize(pEnginefuncs, 7)   -> gEngfuncs = *pEnginefuncs (0x62 dwords); EV_HookEvents()
HUD_Init()
  InitInput           10026b30  +cmds (§2.2), input cvars, CAM_Init 10025370,
                                IN_Init 10028320, KB_Init 10025930, V_Init 10069e90
  CHud::Init          10020170  hooks (§3), cvars, then element->Init() for 18 elements (§4.1),
                                voice mgr Init(&g_VoiceHelper 0x100df198, &gViewPort),
                                Servers_Init 10022b80, MsgFunc_ResetHUD 100219a0
  Scheme_Init         1005c2a0  "bitmapfonts"
HUD_VidInit()
  CHud::VidInit       100206c0  GetScreenInfo -> gHUD+0x5fe4 (ScreenWidth=0x100d5908,
                                ScreenHeight=0x100d590c, charWidths=0x100d5918);
                                m_iRes = 320/640; SPR_GetList("sprites/hud.txt") on the first
                                call only; reloads "sprites/%d_%s.spr"; m_HUD_number_0 index
                                -> gHUD+0x6204; g_flTimescale = 1.0; element->VidInit() x18
  VGui_Startup        1005b3e0  new TeamFortressViewport(0,0,w,h) or viewport->ReInit 10060aa0
```

`CHud` field map (offsets from `0x100cf920`; SDK names where the code matches):

| Off | Field | Off | Field |
|---|---|---|---|
| `+0x00` | `m_pHudList` (singly linked `{elem, next}`) | `+0x50` | `m_iKeyBits` (`0x100cf970`) |
| `+0x04` | `m_hsprLogo` | `+0x54` | `m_iHideHUDDisplay` |
| `+0x08` | `m_iLogo` | `+0x58` | `m_iFOV` (smoothed) |
| `+0x0c/+0x14` | `m_pSpriteList` / `m_iSpriteCountAllRes` | `+0x5c` | `m_Teamplay` = GameMode (`0x100cf97c`): 0 = DM, 1 = teamplay, >1 = objective modes (inferred) |
| `+0x10` | `m_iSpriteCount` | `+0x60` | `m_iRes` |
| `+0x18` | `m_flMouseSensitivity` (zoom) | `+0x64` | `hud_capturemouse` cvar |
| `+0x1c` | `m_iConcussionEffect` | `+0x68` | `m_iFontHeight` |
| `+0x24/+0x28` | `m_flTime` (`0x100cf944`) / `m_fOldTime` | `+0x6c/+0x70/+0x74` | `m_rghSprites` / `m_rgrcRects` / `m_rgszSpriteNames` |
| `+0x30` | `m_flTimeDelta` (double) | `+0x78` | `default_fov` cvar |
| `+0x38..+0x4c` | `m_vecOrigin`, `m_vecAngles` | `+0x6200` | intermission flag |

### 2.1 Client cvars (complete: 107 registrations)

Flags: `1` = FCVAR_ARCHIVE, `2` = FCVAR_USERINFO. Rows marked **TS** are not in the SDK.

| Cvar | Default | Flags | Registered in | Notes |
|---|---|---|---|---|
| `voice_modenable` | 1 | 1 | voice `10017880` | SDK |
| `voice_clientdebug` | 0 | 0 | voice | SDK |
| `hud_drawhistory_time` | 5 | 0 | CHudAmmo::Init `10019de0` | SDK |
| `hud_fastswitch` | 0 | 1 | CHudAmmo::Init | read by the TS slot code `1004f220` |
| `hud_deathnotice_time` | 6 | 0 | CHudDeathNotice::Init `1001afa0` | SDK |
| `hud_classautokill` | 1 | 3 | CHud::Init | TFC leftover |
| `hud_takesshots` | 0 | 1 | CHud::Init | `snapshot` at intermission |
| `r_paintball` | 0 | 1 | CHud::Init | **TS**: paintball decals/effects |
| `zoom_sensitivity_ratio` | 1.2 | 0 | CHud::Init | scales sensitivity when zoomed (§5.4) |
| `gl_fog` | 0 | 1 | CHud::Init | **TS** fog (cvar ptr `0x100df19c`) |
| `gl_fog_start` / `gl_fog_end` | 0 / 2048 | 0 | CHud::Init | **TS** |
| `gl_fog_red/green/blue` | .5 | 0 | CHud::Init | **TS** |
| `default_fov` | `sprintf("%i",80)` | 0 | CHud::Init | then `value = 80.0` is forced. ts-patcher: "90", flags `0x11`. Clamped to 70..110 in `CHud::Think` (0 → 80). |
| `hud_capturemouse` | 1 | 1 | CHud::Init | SDK |
| `cl_drawnames` | 1 | 1 | CHudSpectator::Init `10022c70` | spectator overview |
| `cam_command` `cam_snapto` `cam_idealyaw` `cam_idealpitch` | 0 | 0 | CAM_Init | SDK |
| `cam_idealdist` | 100 | 0 | CAM_Init | SDK (64 in SDK) |
| `cam_contain` | 0 | 0 | CAM_Init | SDK |
| `c_maxpitch` / `c_minpitch` | 90.0 / 0.0 | 0 | CAM_Init | SDK |
| `c_maxyaw` / `c_minyaw` | 135.0 / -135.0 | 0 | CAM_Init | SDK |
| `c_maxdistance` / `c_mindistance` | 200.0 / 30.0 | 0 | CAM_Init | SDK |
| `lookstrafe` `lookspring` | 0 | 1 | InitInput | SDK |
| `cl_anglespeedkey` | 0.67 | 0 | InitInput | clamped ≥0.67 when used |
| `cl_yawspeed` | 210 | 0 | InitInput | clamped ≤200 when used |
| `cl_pitchspeed` | 225 | 0 | InitInput | clamped ≤220 when used |
| `cl_upspeed` | 320 | 0 | InitInput | SDK |
| `cl_forwardspeed` `cl_backspeed` | 400 | 1 | InitInput | SDK |
| `cl_sidespeed` | 400 | 0 | InitInput | SDK |
| `cl_movespeedkey` | 0.3 | 0 | InitInput | SDK |
| `cl_vsmoothing` | 0.05 | 1 | InitInput | SDK |
| `m_pitch` / `m_yaw` | 0.022 | 1 | InitInput | SDK |
| `m_forward` / `m_side` | 1 / 0.8 | 1 | InitInput | SDK |
| `cl_fx` | 1 | 1 | InitInput | **TS** effects level |
| `cam_back` / `cam_right` / `cam_up` | 90 / 0 / 12 | 1 | InitInput | **TS** third-person offset |
| `cl_camtype` | 0 | 1 | InitInput | **TS** |
| `hud_r` / `hud_g` / `hud_b` | 150 / 175 / 255 | 1 | InitInput | **TS** HUD colour, used by every TS draw |
| `hud_color` | "150,175,255" | 1 | InitInput | **TS** (no reader found, **(inferred)** UI only) |
| `cl_lasercolor` | 10 | 1 | InitInput | **TS**. A change sends `lasclr_%i` (Think `1004ce10`). |
| `cl_buykevlar` | 1 | 1 | InitInput | **TS** buy menu auto-kevlar |
| `nohud` | 0 | 0 | InitInput | **TS**. Hides TS status/weapon/deathnotice drawing. |
| `cl_realhud` | 0 | 1 | InitInput | **TS**. 1 = hide the status panel ("realistic"). |
| `cl_shadow` | 2 | 1 | InitInput | **TS** player shadows |
| `cl_wavedetail` | 0 | 1 | InitInput | **TS** |
| `cl_thirdpersonswitch` | 0 | 1 | InitInput | **TS** auto third person on weapon 0 |
| `cl_usepowerup` | 1 | 1 | InitInput | **TS**. Auto-sends `usepowerup`. |
| `cl_laser` | 0 | 1 | InitInput | **TS** laser-dot style |
| `cl_solidcross` | 2 | 1 | InitInput | **TS** crosshair style |
| `cl_thirdperson` | 0 | 1 | InitInput | **TS** |
| `cl_attackswitch` | 0 | 1 | InitInput | **TS**. Swaps +attack2 ↔ +alt2 (§5.1). |
| `cl_thirdtransparency` | 1 | 1 | InitInput | **TS** |
| `cl_motionblur` | 1 | 1 | InitInput | **TS** |
| `cl_gore` | 2 | 1 | InitInput | **TS** |
| `cl_showequipment` | 1 | 1 | InitInput | **TS** inventory list |
| `m_filter` | 0 | 1 | IN_Init | SDK |
| `sensitivity` | 3 | 1 | IN_Init | SDK |
| `m_accel` / `m_accelexp` / `m_accelmax` | 0 / 1.2 / 0 | 1 | IN_Init | **TS** mouse acceleration (`pow`-based, §5.4) |
| `joystick` | 0 | 1 | IN_Init | SDK |
| `joyname` | "joystick" | 0 | IN_Init | SDK |
| `joyadvanced`, `joyadvaxisx/y/z/r/u/v` | 0 | 0 | IN_Init | SDK |
| `joyforward/side/pitch/yawthreshold` | 0.15 | 0 | IN_Init | SDK |
| `joyforward/side/yawsensitivity` | -1.0 | 0 | IN_Init | SDK |
| `joypitchsensitivity` | 1.0 | 0 | IN_Init | SDK |
| `joywwhack1` / `joywwhack2` | 0.0 | 0 | IN_Init | SDK |
| `hud_saytext_time` | 5 | 0 | CHudSayText::Init `1002ea50` | SDK |
| `hud_centerid` | 0 | 1 | CHudStatusBar::Init `1002f3c0` | SDK |
| `bitmapfonts` | 1 | 0 | Scheme_Init `1005c2a0` | SDK (VGUI) |
| `scr_ofsx/y/z` | 0 | 0 | V_Init | SDK |
| `v_centermove` / `v_centerspeed` | 0.15 / 500 | 0 | V_Init | SDK |
| `cl_bobcycle` / `cl_bob` / `cl_bobup` | 0.8 / **4.0** / 0.5 | 0 / 1 / 0 | V_Init | `cl_bob` default differs (SDK 0.01). TS view bob is custom. |
| `cl_waterdist` | 4 | 0 | V_Init | SDK |
| `cl_slowfade` | 1 | 0 | V_Init | **TS** slow-mo screen tint |

Also read with `pfnGetCvarPointer`: `cl_lw` (`0x100df1a0`, disables SetFOV smoothing).

### 2.2 Console commands (complete: 93 registrations)

| Command | Handler | Notes |
|---|---|---|
| `voice_showbanned` | `10017660` | SDK |
| `cancelselect` | `10019dd0` | CHudAmmo (SDK) |
| `+commandmenu` / `-commandmenu` | `1001fe80` / `1001fea0` | viewport command menu (`commandmenu.txt`) |
| `ForceCloseCommandMenu` | `1001feb0` | SDK |
| `special` | `1001fe90` | `gViewPort->InputPlayerSpecial` `100637a0` (`_special`). **+attack2 also calls this.** |
| `togglebrowser` | `1001fec0` | server browser panel |
| `specmode` | `10022c10` | CHudSpectator |
| `+/-campitchup`, `+/-campitchdown`, `+/-camyawleft`, `+/-camyawright`, `+/-camin`, `+/-camout` | `10025260..10025310` | SDK cam |
| `thirdperson` | **`1004fe00`** | **TS toggle**: flips `cam_thirdperson`, sets `cam_ofs = (pitch, yaw, 30)`, `cam_command 0`, records a demo marker. Refused while observer unless already third person. |
| `firstperson` | `10025320` | SDK |
| `+/-cammousemove`, `+/-camdistance`, `snapto` | `100255d0/10025670/10025680/10025700/10025340` | SDK |
| `+/-moveup`, `+/-movedown`, `+/-left`, `+/-right` | `10025d20..10025d90` | SDK |
| `+/-forward`, `+/-back`, `+/-moveleft`, `+/-moveright` | `10025da0..10025f00` | **gated** (§5.3). Also notify spectator `HandleButtonsDown/Up` (`10023450/100234a0`). |
| `+/-lookup`, `+/-lookdown`, `+/-speed` | `10025e40..10025f30` | SDK |
| `+/-attack` | `10026210` / `10026240` | gated |
| `+/-attack2` | `10025f40` / `10025fc0` | gated. Target button depends on `cl_attackswitch` (§5.1). |
| `+/-use` | `10026030` / `10026040` | |
| `+/-jump` | `10026050` / `10026080` | gated |
| `impulse` | `10026250` | `atoi(Cmd_Argv(1))` |
| `+/-klook`, `+/-jlook` | `10025ce0..10025d10` | SDK |
| `+/-duck` | `10026090` / `100260b0` | |
| `+/-reload` | `100260c0` / `100260e0` | gated |
| `+/-alt1` | `100260f0` / `10026100` | TS stunt button → `IN_ALT1` |
| `+/-alt2` | `10026110` / `10026180` | gated, TS (§5.1) |
| `+/-score`, `+/-showscores` | `10026270` / `10026290` | `gViewPort->ShowScoreBoard/HideScoreBoard` |
| `+/-graph`, `+/-break` | `100261f0..10026200`, `10025cc0..10025cd0` | `+break` kbutton has no reader (dead) |
| `joyadvancedupdate` | `10027b00` | SDK |
| `slot1`..`slot10` | `1004c900..1004c990` | **moved from CHudAmmo to the TS weapon element.** All call `TSWeapons::SelectSlot(n)` `1004f220`. |
| `invnext` / `invprev` | `1004c9a0` / `1004c9b0` | `1004fce0` / `1004fd40`, 0.1 s debounce |
| `buy` | `1004c9c0` | `1004fda0`: opens the buy menu **only when dead or observer**, and only if the weapon menu isn't open |
| `centerview` | `10067290` | SDK |

SDK commands TS removed: `+strafe`, `+mlook` (the `in_strafe` kbutton at `0x100df528` and
`in_mlook` still exist), `+ammo`-style TFC commands, and `+voicerecord` (the engine handles it).

---

## 3. User messages

`HOOK_MESSAGE(x)` thunks call `elem->MsgFunc_x(name, size, buf)`. Each TS handler starts with
`BEGIN_READ(buf,size)` and ends with `m_iFlags |= HUD_ACTIVE`. Reader functions:

| VA | Function | Notes |
|---|---|---|
| `100299b0` | `BEGIN_READ` | |
| `100299d0` | `READ_CHAR` | |
| `10029a10` | `READ_BYTE` | |
| `10029a50` | `READ_SHORT` | signed |
| `10029aa0` | `READ_LONG` | |
| `10029b00` | `READ_STRING` | 2 KB static |
| `10029b60` | `READ_COORD` | `short/8` |
| `10029b80` | `READ_HIRESANGLE` (inferred) | `(u16)*360/65536` |

### 3.1 Hook table (complete: 76 hooks; sizes from server `LinkUserMessages`)

| Message | Size | Thunk | Handler | Owner |
|---|---|---|---|---|
| `VoiceMask` | 8 | `10017580` | `10018780` | CVoiceStatus |
| `ReqState` | 0 | `100175a0` | `10018830` | CVoiceStatus |
| `CurWeapon` | 3 | `10019cf0` | `1001a1d0` | CHudAmmo `+0x7c` |
| `WeaponList` | -1 | `10019d10` | `1001a3d0` | CHudAmmo |
| `AmmoPickup` | 2 | `10019d50` | `1001a070` | CHudAmmo |
| `WeapPickup` | 1 | `10019d70` | `1001a0b0` | CHudAmmo |
| `ItemPickup` | -1 | `10019db0` | `1001a0e0` | CHudAmmo |
| `HideWeapon` | 1 | `10019d90` | `1001a110` | CHudAmmo (TS also sends it on powerup changes) |
| `AmmoX` | 2 | `10019d30` | `1001a030` | CHudAmmo |
| `SecAmmoVal` / `SecAmmoIcon` | — | `1001a5a0/1001a5c0` | `1001a690/1001a650` | CHudAmmoSecondary: TFC, **the server never sends these** |
| `Battery` | 2 | `1001a860` | `1001a920` | CHudBattery (draw is a stub) |
| `DeathMsg` | -1 | `1001af20` | `1001b360` | CHudDeathNotice `+0x570` |
| `Geiger` | 1 | `1001f430` | `1001f4a0` | CHudGeiger |
| `Health` | 1 | `1001f6a0` | `1001f7f0` | CHudHealth (draw is a stub) |
| `Damage` | 12 | `1001f6c0` | `1001f830` | CHudHealth |
| `Logo` | 1 | `1001fdb0` | `100209c0` | CHud |
| `ResetHUD` | 1 | `1001fdd0` | `100219a0` | CHud: `elem->Reset()` for every element |
| `GameMode` | 1 | `1001fe60` | `10021a10` | CHud `m_Teamplay = READ_BYTE` |
| `InitHUD` | 0 | `1001fdf0` | `100219e0` | CHud: `elem->InitHUDData()` |
| `SetFOV` | 1 | `1001fe20` | `10049570` | CHud. Ignored if `cl_lw != 0`. Sets `m_iFOV` (0 → 80) and zoom sensitivity `= fov*0.0125*sensitivity*zoom_sensitivity_ratio`. |
| `Concuss` | — | `1001fe40` | `10021a40` | TFC (`dmg_concuss` status icon), not sent |
| `ValClass`, `Feign`, `Detpack`, `BuildSt`, `RandomPC` | — | `1001fed0/1001ff30/1001ff60/1001fff0/10020020` | `10064da0/10064ea0/10064ed0/10064ff0/10065020` | TFC viewport leftovers, not sent |
| `TeamNames` | -1 | `1001ff00` | `10064df0` | viewport |
| `MOTD` | -1 | `1001ffc0` | `10064f60` | viewport: byte `final`, string chunk appended to `+0x240` (max `0x600`). On final, `ShowVGUIMenu(5)`. |
| `ServerName` | -1 | `10020050` | `10065050` | viewport |
| `ScoreInfo` | 9 | `10020080` | `10065090` | viewport: byte cl, short frags, short deaths, short class, short team → `g_PlayerExtraInfo` |
| `TeamScore` | -1 | `100200b0` | `10065120` | viewport |
| `TeamInfo` | -1 | `100200e0` | `100651c0` | viewport |
| `Spectator` | 2 | `10020110` | `10065250` | viewport, TS-modified (below) |
| `AllowSpec` | — | `10020140` | `100653a0` | viewport (not sent) |
| `VGUIMenu` | 1 | `1001ff90` | `10064f00` | viewport (below) |
| `ShowMenu` | -1 | `10028580` | `10028760` | CHudMenu `+0x59c` (SDK) |
| `HudText` | -1 | `100288c0` | `100295c0` | CHudMessage `+0x248` |
| `GameTitle` | 1 | `100288e0` | `10029610` | CHudMessage |
| `SayText` | -1 | `1002ea30` | `1002ecc0` | CHudSayText `+0x588` |
| `StatusIcon` | — | `1002f0c0` | `1002f1a0` | CHudStatusIcons (not sent) |
| `StatusText` / `StatusValue` | — | `1002f380/1002f3a0` | `1002f850/1002f8d0` | CHudStatusBar (not sent) |
| `TextMsg` | -1 | `10034880` | `10034a60` | CHudTextMessage `+0x5ec` |
| `Train` | 1 | `10034ce0` | `10034df0` | CHudTrain (TS server sends a 4-bit TS value, **(inferred)** unused) |
| `TSHealth` .. `TSFade` | | `100498a0..10049b60` | §3.2 | CHudTSStatus `0x100d43cc` |
| `WeaponInfo` .. `KFuPower` | | `1004c800..1004c8e0` | §3.3 | CHudTSWeapons `0x100d0ca0` |

Sent by the server but **not hooked**: `SelAmmo`, `ScreenShake` and `ScreenFade` (the engine handles
these two). `InitHUD` is hooked.

### 3.2 TS status messages (handled by `CHudTSStatus`, `this = 0x100d43cc`)

| Msg | Handler | Payload (client read order) | Effect |
|---|---|---|---|
| `TSHealth` | `1004b730` | byte hp | `m_iHealth (+0x20)` and `gHUD.m_Health.m_iHealth (0x100cf9d8)`. If hp == 0, not observer and not third person → `ThirdpersonToggle()` (death cam). |
| `TSArmor` | `1004b920` | byte | `+0x21` kevlar |
| `TSState` | `1004b950` | byte | `+0x22` stance: 0 stand, 1 crouch, 2 prone. Indexes `sprites/player/{stand,crouched,prone}.spr`. |
| `TSCash` | `1004b980` | short | `+0x24` credits |
| `TSSpace` | `1004b9b0` | byte | `+0x28` free inventory slots |
| `PwUp` | `1004b9e0` | short flags, byte value | If `flags & 0x104` (4 = kung fu, 0x100 = super jump): set permanent icon flags `+0x29` (kung fu) / `+0x2a` (movement). Otherwise `+0x14 = flags`, `+0x18 = value` (timed powerup). Powerup bits: 1 slow-mo, 2 infinite clip, 4 kung fu, 8 slow pause, 0x10 double fire rate, 0x100 super jump. |
| `PwUpTime` | `1004bad0` | byte secs | `+0x1c = time + secs`, `+0x18 = 0` |
| `RoundTime` | `1004bb20` | byte secs, byte mode | `+0x2c` seconds, `+0x34` mode: 0 = 1 s tick, 1 = 0.1 s tick, 2 = frozen |
| `Objective` | `1004bb70` | coord x,y,z, byte idx, string label | `idx` 0 clears all 32 slots. Stores slot `{visible, pos, label[64]}` (0x50 bytes at `+0xa30`). `+0x1430` = max idx. Note the bounds check uses `||` and is always true. |
| `ShowObj` | `1004bc80` | byte idx, byte visible | toggles slot visibility |
| `TSMessage` | `1004c0a0` | byte r, g, b, byte flags, byte secs (abs, ≤100), string | `AddTSMessage` `1004b520` (§4.3) |
| `PTakeDam` | `1004bcd0` | coord×3 pos, coord×3 dir, byte amount | `FX_PlayerHit` `10048840` (blood, **(inferred)**) |
| `TSSlowMo` | `1004bef0` | coord (×0.01) | `g_flTargetTimescale 0x1009ff04` (0 → 1.0). Plays `goslow.wav` when slow-mo starts. |
| `TSFrags` | `1004bd50` | coord×3 origin, coord×3 size, byte type; type 0: +coord×6, long, coord | 0 = breakable gibs `10047cb0`; 1 = smoke `100481b0`; 2 = metal sparks (`sprites/scintille_metal.spr`) + `100492b0` |
| `TSPAward` | `1004b790` | byte cl (1..64), byte award | `g_PlayerExtraInfo[cl].award` (+0). The scoreboard shows "THE ONE" / "UNSTOPPABLE" / "SPECIALIST". |
| `SrvSett` | `1004b840` | byte key, short value | 0 = `mp_realbullet` → `0x1018d16c`; 1 = `mp_dmcashbased` → `0x1018d170` (shows credits); 2 = ammo count → `SetAmmoCounts` `100072c0` (rewrites max-ammo table); 3 → `0x1018d174` |
| `TSBTime` | `1004b8e0` | byte | bullet-time active `0x1018d178` |
| `TSHVoice` | `1004c180` | byte | 0 → `misc/successful.wav`, 1 → `misc/failed.wav` |
| `TSFlag` | `1004ba50` | byte state, byte idx (1..15), byte team, byte carrier | flag table `+0x146c` (12 bytes each), `+0x1468 = 16` |
| `TSMBlur` | `1004bf90` | byte entidx, byte mode | `MotionBlur::Toggle(0x100dff48, idx)`, mode ignored |
| `TSPSys` | `1004bfd0` | byte type; type 3: long, long yaw, coord | Only type 3: directional particle emitter (rain/wind, **(inferred)**) state at `0x10189438..`. |
| `PlInfo` | `1004b7e0` | byte cl, byte key, byte value | key 0 → `g_PlayerItems[cl].info (0x1018d129 + cl*2)`, used as the laser colour index by `DrawLaserDots` (inferred) |
| `TSFade` | `1004c1e0` | short duration (×1/4096 s), short hold, short flags, byte r,g,b,a | Stored at `0x101914a8..`, start = now. Applied in `V_CalcRefdef`. |

`Spectator` (`10065250`, byte cl, byte isObserver) is TS-modified. For the local player it sets
`g_bObserver` (`0x100d4401` = `CHudTSStatus+0x35`). On entering observer mode it leaves third
person and **opens the buy menu**. On leaving, it re-applies `cl_thirdperson`. It also clears that
player's active-items byte.

`VGUIMenu` (`10064f00`, byte id; id 4 also reads a 64-char string into viewport `+0xa5c`) →
`ShowVGUIMenu(id)` `10064050`: 2 = team menu (only if `m_Teamplay ≥ 1`), 3 = class panel
(TFC), 4 = map briefing, 5 = MOTD (allowed during intermission), 6 = class help.

### 3.3 TS weapon messages (handled by `CHudTSWeapons`, `this = 0x100d0ca0`)

Weapon slots are a grid `m_rgSlots[17 rows][11 buckets]` of `{int id, int clip}` at `+0x164`
(index `bucket + row*11`). `bucket = info->slot (+0x85)` and `row = info->pos (+0x84)` come from
the weapon table `GetTSWeaponInfo(id)` `100071c0` (`0x100aa050`, 38 entries × `0x3dc` bytes).

| Msg | Handler | Payload | Effect |
|---|---|---|---|
| `WeaponInfo` | `1004f800` | byte id (`0xff` = keep), byte clip, short reserve, byte firemode, byte flags | `+0x7b8` current id (`0x100d1458`), `+0x78c` clip, `+0x748[ammotype]` reserve, `+0x78a` firemode, `+0x798` attachments. Updates the grid. If `cl_thirdpersonswitch == 1`, toggles third person when the id changes to/from 0. |
| `ClipInfo` | `1004f780` | byte clip | current clip and grid clip |
| `WStatus` | `1004f990` | byte id, byte owned, byte clip | grid id (−1 when not owned) and clip |
| `ActItems` | `1004fa70` | byte cl (0..32), byte bits | `g_PlayerItems[cl].active (0x1018d128 + cl*2)`: laser/flashlight on. Read for the HUD flags and the laser. |
| `NextStunt` | `1004fac0` | byte (×0.1 s) | `+0x34` stunt cooldown (inferred) |
| `Wires` | `1004fb00` | byte b, g, r | `+0x36fc..+0x36fe`: wire cut state for the bomb-defuse panel |
| `CustomWP` | `1004fb50` | string `"%i %f %f %f %f %i"` | overrides 5 fields of a weapon-table entry (custom weapon params) |
| `KFuPower` | `1004f6f0` | char (−100..100) | `+0x3700` kung-fu power, previous value at `+0x3704` |

---

## 4. HUD element system

### 4.1 `CHud` and element vtables

`CHudBase` vtable layout (7 slots): `[0]` scalar dtor `1001acc0`, `[1]` Init, `[2]` VidInit, `[3]`
Draw(float), `[4]` Think, `[5]` Reset, `[6]` InitHUDData. Fields: `+0x10 m_iFlags` (1 = HUD_ACTIVE,
2 = HUD_INTERMISSION). Shared stubs: `1001f8d0` = `Draw` returning 1 without drawing,
`1002f420` = VidInit returning 1, `1005ab70` = empty, `1005a740` = empty Think, `1005ab80` = return 0.
The base-class vtable is `0x1007c608`.

Init/AddHudElem order (also the draw order):

| # | `gHUD` off | VA | Class | vtable | Init | VidInit | Draw | Think | Reset | InitHUDData |
|---|---|---|---|---|---|---|---|---|---|---|
| 1 | `+0x7c` | `100cf99c` | CHudAmmo | `1007cc88` | `10019de0` | `10019f40` | **stub** | — | `10019ef0` | — |
| 2 | `+0xa4` | `100cf9c4` | CHudHealth | `1007cc6c` | `1001f6e0` | `1001f780` | **stub** | — | `1001f750` | — |
| 3 | `+0x1a4` | `100cfac4` | CHudGeiger | `1007cc50` | `1001f450` | — | `1001f4e0` | — | — | — |
| 4 | `+0x1ec` | `100cfb0c` | CHudTrain | `1007cc18` | `10034d00` | `10034d30` | `10034d40` | — | — | — |
| 5 | `+0x1bc` | `100cfadc` | CHudBattery | `1007cc34` | `1001a880` | `1001a8c0` | **stub** | — | — | — |
| 6 | `+0x208` | `100cfb28` | CHudFlashlight | `1007cbfc` | `1001c740` | `1001c780` | **stub** | — | `1001c770` | — |
| 7 | `+0x248` | `100cfb68` | CHudMessage | `1007cbe0` | `10028900` | `10028940` | `100290b0` | — | `10028980` | — |
| 8 | `+0x330` | `100cfc50` | CHudStatusBar | `1007cbc4` | `1002f3c0` | — | `1002f6f0` | — | `1002f430` | — |
| 9 | `+0x570` | `100cfe90` | CHudDeathNotice | `1007cba8` | `1001afa0` | `1001b000` | `1001b020` | — | — | `1001afe0` |
| 10 | `+0x5c0` | `100cfee0` | CHudAmmoSecondary | `1007cb54` | `1001a5e0` | — | **stub** | — | `1001a640` | — |
| 11 | `+0x5ec` | `100cff0c` | CHudTextMessage | `1007cb38` | `100348a0` | ret 0 | `10018330` (ret 0) | — | — | — |
| 12 | `+0x600` | `100cff20` | CHudStatusIcons | `1007cb1c` | `1002f0e0` | — | `1002f130` | — | `1002f110` | — |
| — | — | — | CVoiceStatus | — | via `FUN_10017570()->Init` | | | | | |
| 13 | `+0x6d8` | `100cfff8` | CHudSpectator | `1007cb00` | `10022c70` | `10022fe0` | `10023080` | — | — | — |
| 14 | `+0x1380` | `100d0ca0` | **CHudTSWeapons** (inferred name) | `1007cae4` | `1004c9d0` | `1004cb50` | `1004d3f0` | `1004ce10` | `1004cd60` | — |
| 15 | `+0x4aac` | `100d43cc` | **CHudTSStatus** (inferred name) | `1007cca4` | `10049b80` | `10049d10` | `10049ea0` | — | `10049e70` | — |
| 16 | `+0x588` | `100cfea8` | CHudSayText | `1007cb8c` | `1002ea50` | — | `1002eb40` | — | — | `1002eaa0` |
| 17 | `+0x59c` | `100cfebc` | CHudMenu | `1007cb70` | `100285a0` | — | `100285f0` | — | `100285e0` | `100285d0` |

**Key finding:** TS keeps the SDK health/battery/ammo/flashlight elements only for their message
bookkeeping and replaced their `Draw` with a stub. Everything visible (health, armour, ammo, cash,
timer, powerups, crosshair, weapon list) is drawn by the two TS elements. `CHudMenu` is drawn last.

`CHud::Redraw` `10021aa0`: computes `m_flTimeDelta`, then handles intermission. On entering it
does `HideAllVGUIMenus`, `ShowScoreBoard`, and sets up `hud_takesshots` → `snapshot\n`; on leaving
it calls `HideScoreBoard`. Then each element: `if (!intermission && (flags & HUD_ACTIVE) &&
!(m_iHideHUDDisplay & HIDEHUD_ALL)) Draw()`, or in intermission only `HUD_INTERMISSION` ones. Then
the animated `sprites/%d_logo.spr` if `m_iLogo` is set.

### 4.2 `CHudTSWeapons` (`0x100d0ca0`)

Selected fields: `+0x14` current active-items bits, `+0x34` next-stunt time, `+0x38` view trace
end (used for the third-person laser), `+0x164` slot grid, `+0x73c` weapon menu open,
`+0x740/+0x744` menu row/bucket, `+0x748` reserve ammo per type, `+0x78a` firemode, `+0x78c` clip,
`+0x7b8` current weapon id, `+0x7bc` last firemode (switch sound), `+0x7c0` **CTSBuyMenu** (embedded,
= `0x100d1460`), `+0x36e4/+0x36f0` wire sprites (cut/uncut), `+0x36fc` wire states, `+0x3700` kung-fu
power, `+0x371c` invnext debounce, `+0x3728` last laser colour.

| VA | Proposed name | What it does / draws |
|---|---|---|
| `1004c9d0` | `Init` | hooks §3.3; `slot1..10`, `invnext`, `invprev`, `buy`; AddHudElem |
| `1004cb50` | `VidInit` | loads `sprites/wires/{r,g,b}wire[cutted].spr`, `sprites/player/divestep{t,b,c}.spr`, `sprites/cross_t.spr`, `cross2.spr`, `cross_e.spr`, `sprites/weapons/item_{not_,}installed.spr`, `kungfu.spr`; `CTSBuyMenu::Init` `10036200` |
| `1004cd60` | `Reset` | grid = −1; slot of weapon 0 (kung fu) = {0, 1} |
| `1004ce10` | `Think` | `lasclr_%i` when `cl_lasercolor` changes. `usepowerup` when `cl_usepowerup` and a powerup is pending. Heartbeat/breathing sounds (`sound/player/heartbeat1.wav`, `breathe2.wav`) at low health and during slow-mo, pitch scaled by timescale. While the weapon menu is open: `IN_ATTACK` → `weapon_%i`, `IN_ATTACK2` → `drop_%i`. Firemode change → `weapons/switch.wav`. |
| `1004d3f0` | `Draw` | `DrawLaserDots` always. If `nohud == 0`: buy menu (if open), then if alive and not observer: `DrawWeaponList` / `DrawKungFuLabel` or `DrawWeaponInfo`, then crosshair or wire panel. |
| `1004d550` | `DrawWirePanel` | 3 wire sprites (32 px apart) centred above the crosshair (bomb defuse) |
| `1004d5f0` | `DrawKungFuBar` | 128×19 frame plus a fill proportional to `KFuPower` |
| `1004d700` | `DrawKungFuLabel` | "Kung-Fu" plus the power bar when holding weapon 0 |
| `1004d7e0` | `DrawWeaponInfo` | weapon name, clip/reserve (`DrawHudNumberTS`), firemode text (`#HUD_SemiAuto`, `#HUD_Burst`, `#HUD_PumpAction`, `#HUD_FreeSemi`, `#HUD_FreeFull`, `#HUD_FullAuto`), attachment flags (`#HUD_Scope`, `#HUD_Flashlight`, `#HUD_Lasersight`, `#HUD_Silencer`), akimbo `%ix`, kung-fu bar |
| `1004e030` | `DrawWeaponList` | the slot-menu / equipment list (`cl_showequipment`), `%d/%d` ammo, highlighted selection |
| `1004e6f0` | `DrawLaserDots` | 2×2 `FillRGBA` dots at projected laser endpoints (two for akimbo), ±1 px jitter, colour from the `PlInfo` laser index |
| `1004e9f0` | `DrawCrosshair` | dynamic crosshair (`cl_solidcross` 0 = sprite / 1–2 = `FillRGBA` lines), spread from the weapon table, `cl_realhud`, divestep sprites; `1004ef50` helper |
| `1004f220` | `SelectSlot(n)` | If a `CHudMenu` is open → menu select. If the buy menu is open → buy-menu key. If the wire panel is up → `cutwire_%i` (1..3). Slot 10 → `weapon_0`. Slots 1..5: fast-switch → `weapon_%i`, else open/cycle the menu. |
| `1004f500` | `SelectNextPrev(dir)` | invnext/invprev |
| `1004fda0` | `CmdBuy` | see `buy` |

### 4.3 `CHudTSStatus` (`0x100d43cc`)

Fields: `+0x14/+0x18/+0x1c` powerup flags/value/expire, `+0x20` health, `+0x21` armour, `+0x22`
stance, `+0x24` cash, `+0x28` slots, `+0x29/+0x2a` kung-fu/super-jump icons, `+0x2c/+0x30/+0x34`
round timer, `+0x35` observer, `+0x38..` stance sprites, `+0x58/+0x5c/+0x64/+0x68/+0x6c` health,
kevlar, kung-fu, movement and flag sprites, `+0x70` 16 × `0x9c` TS messages, `+0xa30` 32 × `0x50`
objectives, `+0x1434..+0x1440` cursor, compass, up and down arrow sprites, `+0x1444[65]`
teammate-visible flags, `+0x146c` flag table.

| VA | Proposed name | Draws |
|---|---|---|
| `10049b80` | `Init` | the 23 hooks |
| `10049d10` | `VidInit` | `sprites/player/{stand,crouched,prone,health,kevlar,kungfu,movement,flag}.spr`, `sprites/{cursor,compass,uparrow,downarrow}.spr` |
| `10049e70` | `Reset` | clears state |
| `10049ea0` | `Draw` | (1) Software cursor at `(0x1018d17c,0x1018d180)−16` if `0x1018d184` is set. No code sets it to 1, so it is dead. (2) If `nohud == 0`: `DrawRoundTimer` (if time > 0), `DrawTSMessages`, `DrawObjectiveText`. If alive and not observer: `DrawTeammateMarkers` (if teamplay), `DrawCrosshairID`, `DrawStatusPanel`, `DrawPowerup` (or clear), `DrawObjectiveMarkers` (if `m_Teamplay > 1`). |
| `1004a130` | `DrawRoundTimer` | top-right `MM:SS` via `DrawHudNumberTS`, red below 60 s; mode drives the tick rate |
| `1004a2e0` | `DrawPowerup` | top-left `#Pwr_SlowMotion` / `#Pwr_InfiniteAmmo` / `#Pwr_SlowPause` / `#Pwr_DoubleFireRate` plus seconds left (green) |
| `1004a3e0` | `DrawStatusPanel` | only if `cl_realhud == 0`. Bottom-left translucent box: stance sprite filled bottom-up by health % (red under 100), health number (red under 50), health and kevlar icons, team-name bar in team colour (`0x10096974` RGB table) when teamplay. Bottom: `<slots> #HUD_FreeSlots`. If `m_Teamplay > 1` or `dmcashbased`: `<cash> #HUD_Credits` (red under 1000). Kung-fu and movement icons bottom-centre. |
| `1004ab40` | `DrawTeammateMarkers` | green 4×4 dot over visible teammates (head +40). Flag sprite (green/red) over flag carriers. |
| `1004acc0` | `DrawCrosshairID` | `EV_PlayerTrace` 8192 u along the view. Shows the player name at centre −40 (red enemy / green team). Stores the trace end for the laser. |
| `1004af40` | `DrawTSMessages` | the 16 timed messages, colour fades out, capped at 10 s |
| `1004b0e0` | `DrawObjectiveText` | objective/briefcase strings ("Take the Briefcase to the base!"), wrapping with `HudStringLen` |
| `10049fc0` | `DrawObjectiveMarkers` | per visible objective: compass sprite at its screen position, up/down arrow if Δz > 72, label |
| `1004b470` | `GetPlayerScreenPos(cl,&x,&y)` | `WorldToScreen(origin+40)` |
| `1004b520` | `AddTSMessage(text,r,g,b,secs,flags)` | Localises `text`. Grey (155) if it contains your name. Flags: 1 = top (y=32), 8 = bottom (h−64), else middle; 2 = left (x=32), 4 = right, else centred; 0x10 = replace the message at the same spot. |

### 4.4 Other elements and helpers

| VA | Proposed name | Evidence |
|---|---|---|
| `10021ce0` | `CHud::DrawHudString(x,y,maxX,str,r,g,b)` | `pfnDrawCharacter` loop with `charWidths`; ts-patcher hook A |
| `10021ca0` | `CHud::DrawHudStringLen(x,maxX,str)` | width sum; ts-patcher hook B |
| `1004c290` | `CHud::DrawHudNumberTS(x,y,flags,n,r,g,b)` | `number_0` sprites, up to 5 digits. Flags 0x10/0x08/0x04/0x02 reserve 5/4/3/2 digits, 0x20 = draw leading zeros, 0x01 = draw zero. |
| `100349a0` | `CHudTextMessage::LookupString` (inferred) | resolves `#`-titles (`titles.txt`) for every TS label |
| `100579c0` | `WorldToScreen(v,&x,&y)` (inferred) | −1 if offscreen; used by markers, ID, laser |
| `10020670` | `CHud::GetSpriteIndex` | `strncmp` 24 over `m_rgszSpriteNames` |
| `10020a40` | `CHud::AddHudElem` | malloc(8) list append |
| `10049760` | `CHud::Think` | elem Think, then FOV: target = `default_fov` clamped 70..110, `UTIL_ApproachFOV` `10049620` smooth zoom, zoom sensitivity |
| `100209f0` | `HUD_GetFOV` | demo record/playback of FOV |
| `1004c250` | `TS_IsLocalDead()` (inferred) | `!demo && CHudTSStatus.health == 0` |
| `1004c280` | `TS_IsLocalObserver()` (inferred) | returns `0x100d4401` |
| `10055ae0` | `TS_ApproachTimescale(dt,&cur,target)` | `cur += min(dt*7,1)*(target−cur)` when the difference is > 0.05 |
| `1001b020` | `CHudDeathNotice::Draw` | SDK layout with `d_%s` sprites, `DrawConsoleString`, `nohud` check. Console lines " killed ", " with ", " killed self", " killed his teammate ". Server payload: byte killer, byte victim, string weapon. |

CHudDeathNotice is SDK code apart from the `nohud` gate. CHudSayText, CHudMenu, CHudMessage and
CHudTextMessage are SDK.

---

## 5. Input

### 5.1 kbuttons → `usercmd_t.buttons` (`CL_ButtonBits` `10026870`)

| kbutton (VA) | Command | Bit |
|---|---|---|
| `100df3e8` | +attack | `IN_ATTACK` 0x1 |
| `100df500` | +jump | `IN_JUMP` 0x2 |
| `100df438` | +duck | `IN_DUCK` 0x4 |
| `100df488` / `100df568` | +forward / +back | 0x8 / 0x10 |
| `100df408` | +use | 0x20 |
| `100df588` | +alt2 (or +attack2 when switched) | **0x40** (`IN_CANCEL`, reused by TS as its secondary/kung-fu action) |
| `100df4a0` / `100df4b0` | +left / +right | 0x80 / 0x100 |
| `100df4d8` / `100df538` | +moveleft / +moveright | 0x200 / 0x400 |
| `100df398` | +attack2 (or +alt2 when switched) | `IN_ATTACK2` 0x800 |
| `100df478` | +reload | `IN_RELOAD` 0x2000 |
| `100df598` | +alt1 | `IN_ALT1` 0x4000 (stunt) |
| `100df4c0` | +score | `IN_SCORE` 0x8000, also forced while `health < 1` or in intermission (`0x100d5b20`) |
| `100df3d8` | +speed | (not sent; `IN_RUN` unused) |

`cl_attackswitch` (`+attack2` `10025f40`, `+alt2` `10026110`): if the cvar is set, a weapon is held (id ≠ 0), and the
weapon's type byte `info+0x348` is not in {2, 3, 10, 11} (**(inferred)** melee/grenade
classes), then `+attack2` drives the 0x40 button and `+alt2` drives `IN_ATTACK2`. Otherwise they
map directly. `+attack2` also runs `special`.

### 5.2 `CL_CreateMove` (`10026570`)

SDK structure with these TS changes:

* `CL_AdjustAngles` `10026330` clamps `cl_pitchspeed ≤ 220`, `cl_yawspeed ≤ 200`, and
  `cl_anglespeedkey ≥ 0.67` (anti-turn-bind). Pitch is clamped to ±89 and roll to ±50.
* Strafe input applies only when `in_strafe` (no command bound, so effectively off).
* If `joystick` is set, `IN_FORWARD`/`IN_BACK` bits follow forwardmove.
* While the voice squelch UI is up (`CVoiceStatus::IsInSquelchMode` `100188b0`), `IN_ATTACK` is cleared.
* If `g_iAlive == 0` (dead, not observing), the view angles are **frozen** at the last live values
  (`0x100df578`).
* `IN_Move` `100282e0` → `IN_MouseMove` `100274d0` + `IN_JoyMove` `10027e40`.

### 5.3 Anti-script key gate

`HUD_Key_Event` sets `g_bRealKey (0x100df5cc) = 1` only if the key's binding is literally one of
the nine gated commands. `HUD_Frame` resets it. The gated `+` handlers (`+attack`, `+attack2`,
`+alt2`, `+reload`, `+forward`, `+back`, `+moveleft`, `+moveright`, `+jump`) start with
`if (!g_bRealKey) return`. So these actions only work from a physical key in the same frame, and
not from `alias`/`wait` scripts or `cmd` injection. `-` handlers are not gated. Movement `+`
handlers also forward to `CHudSpectator::HandleButtonsDown`.

### 5.4 Mouse

* `IN_MouseMove` `100274d0` (only if not `cam_mousemove` (`0x100df394`), not
  `g_iVisibleMouse` (`0x100df714`) and not intermission). It reads `GetCursorPos` minus the window
  centre and applies `m_filter`. It accumulates a **virtual cursor** (`0x1018d17c/180`, clamped to
  the screen). Then: if zoomed (`gHUD.m_flMouseSensitivity ≠ 0`), mouse × that value. Otherwise
  TS acceleration `delta += sign * min(pow(|delta|, m_accelexp)·m_accel, m_accelmax)` (via
  `1006c490`), then × `sensitivity`. Then yaw `m_yaw` and pitch `m_pitch` (±89). If the
  cursor-mode flag `0x1018d184` were set, the view wouldn't rotate.
* `IN_MouseEvent` `100273d0`: normally SDK (engine `Key_Event(K_MOUSE1+i)`). When the VGUI cursor
  is visible and no VGUI menu, team menu or `+0xad0` panel is up, voice squelch is off and
  `+0xad4` is clear, clicks go to `CTSBuyMenu::MouseEvent` `10038360` if the buy menu is open.
* `IN_ActivateMouse`/`Deactivate` use SDK `SystemParametersInfo` acceleration save/restore.
  `IN_Accumulate` is SDK.

---

## 6. Menus and UI

### 6.1 VGUI1 viewport (`TeamFortressViewport`, `gViewPort` `0x100d5cb0`, size `0xad8`)

This is the TFC SDK viewport with TS panels. Constructor `100607f0`. Key methods:

| VA | Proposed name | Notes |
|---|---|---|
| `100607f0` | `TeamFortressViewport::ctor` | schemes "Scoreboard Text", "CommandMenu Text", "Primary Button Text". Creates the scoreboard, server browser, team, class and spectator panels. |
| `10060aa0` | `ReInitialize` | VidInit path |
| `1005c300` | `CSchemeManager::ctor` | `gfx\vgui\fonts\%d_%s.tga` bitmap fonts, `Default Scheme` |
| `10060c70` | `CreateCommandMenu` | parses `commandmenu.txt` |
| `10064b90` | `KeyInput` | from `HUD_Key_Event` |
| `10064050` | `ShowVGUIMenu(id)` | ids §3.2 |
| `100636d0` | `HideVGUIMenu`/`HideCommandMenu` (inferred) | |
| `10063710` / `10063760` | `ShowScoreBoard` / `HideScoreBoard` | `+score` |
| `10064790` | `UpdateCursorState` | shows the VGUI cursor when the buy menu is open (uses `CTSBuyMenu::IsActive`) |
| `100637a0` | `InputPlayerSpecial` | sends `_special` |
| `100642c0` → `100655d0` | `CTeamMenuPanel` (`0x124`) at `+0xaa0` | "Select Team", "Auto assign", `jointeam %d`, map description |
| `10064380` → `10058880` | `CClassMenuPanel` (`0xdf0`) at `+0xaa4` | TFC leftover (`classes/short_%s.txt`, `civilian`) |
| `10063a50` → `1005ce70` | `ScorePanel` (`0x26af0`) | `1005db70` fill: "THE ONE", "UNSTOPPABLE", "SPECIALIST" award titles, " KILLS", "WAITING", "#Spectators" |
| `1005d5f0` | `ScorePanel::Update` | the **ts-patcher crashfix** site: a loop of 74 over arrays sized 72. The byte array at `+0x26aa8` plus 74 ends 2 bytes **past the 0x26af0-byte heap object**. |
| `10063b40` → `1005f220` | server browser | "Refresh", "Connect", `togglebrowser` |
| `10064410` | spectator panel | `#Spec_Help_TSTitle`, `#Spec_TSHelp%d` |
| `1005bb90` / `10063c00` | `CMessageWindowPanel` / `CreateTextWindow` | MOTD and map briefing ("Briefing Text", `#Menu_OK`) |

### 6.2 TS buy menu (`CTSBuyMenu`, embedded at `0x100d1460`): immediate mode, **not VGUI**

This is drawn with `DrawHudString`/`FillRGBA` from `CHudTSWeapons::Draw`. It takes digit keys
through `slotN` and mouse clicks through `IN_MouseEvent`, and shows the VGUI cursor. ts-patcher's
"buymenu width" constants (`0x372AA..0x38032`) are `push imm32` pixel widths inside these
functions.

| VA | Proposed name | Notes |
|---|---|---|
| `10036200` | `Init` | categories `#Buy_Handguns`, `Buy_SMGs` (**missing `#`**, so it shows raw), `#Buy_Rifles`, `#Buy_Shotguns`, `#Buy_SpecialPurpose`; `10036480` loads `<gamedir>\tsbuylist.tsa` |
| `100361f0` / `10036670` / `10036720` | `IsActive` / `Open` / `Close` | Open: refused during demo playback; copies the last config, optionally random-buys, centres the cursor. Close when alive unless page == 8 (team page). |
| `10036750` | `Draw` | page dispatch |
| `100367e0` | `DrawTeamPage` | `#Chg_ChangeTeam`, 1 Specialists / 2 Mercenaries / 0 Cancel → `chgteam %i` |
| `10037540` | `DrawMainPage` | 1 use last/new/empty config, 2 Buy, 3 Remove, 4 Reset, 5 Save, 6 Load, 7 Random, 0 Cancel |
| `10037960` / `10037ba0` / `10037fe0` / `100377d0` | category / weapon options / items / accessory pages | `#Buy_Akimbo`, `#Buy_FullLoad`, attachment toggles, `Kevlar`, `Stealth Shoes` |
| `10036af0`, `10037260`, `10038180` | summary, equipment slots, credits/slots footer | `#Buy_Total`, `#Buy_Total_CashBased`, `#Buy_FreeSlots`, `#Buy_Credits` |
| `10038360` / `10038410` | `MouseEvent` / `HitTest` | left click = select row, right click = key 10 (back) |
| `10038840` | `HandleKey(page,key)` | messages `#Buy_Removed`, `#Buy_ConfigLoaded`, … |
| `10039400` | `SubmitConfig` | sends `rst_cfg`, then `tkw …`, `tki …`, `tka …` (lists of `%i ` / `%i_%i ` ids/attachment pairs). `#Buy_NoCash`, `#Buy_ConfigEmpty`. |
| `100398e0` | `RandomConfig` | |

Client → server commands found: `lasclr_%i`, `usepowerup`, `weapon_%i`, `weapon_0`, `drop_%i`,
`cutwire_%i`, `chgteam %i`, `rst_cfg`, `tkw`/`tki`/`tka`, `jointeam %d`, `_special`, `snapshot`.

### 6.3 Text rendering

* `DrawHudString` `10021ce0`: one `pfnDrawCharacter` per byte, with advance from
  `SCREENINFO.charWidths` (`0x100d5918`). It stops at `\n` or `maxX`. ASCII/Latin-1 only.
  ts-patcher redirects it and `DrawHudStringLen` to the engine `DrawString` (VGUI2, UTF-8).
* Numbers use `hud.txt` `number_0..9` sprites (`DrawHudNumberTS`). Kill feed and spectator text use
  `pfnDrawConsoleString` with `DrawSetTextColor`. VGUI panels use scheme TGA bitmap fonts.
* Every TS label goes through `titles.txt` localisation (`#HUD_*`, `#Buy_*`, `#Pwr_*`, `#Chg_*`,
  `#Spec_*`).

---

## 7. Rust recreation notes

**Build order for the client crate** (each step is playable):

1. **Exports and engine table.** All 42 names (§1), `Initialize` version 7, a `gEngfuncs` copy. Use
   no-op `HUD_GetHullBounds` and `HUD_ConnectionlessPacket`, `HUD_GetUserEntity → null`, and
   `HUD_GetStudioModelInterface → 0` at first.
2. **Input** (`input.rs`): `KButton {down:[i32;2], state:i32}`, `KB_Find` for
   `in_graph/in_mlook/in_jlook`, the §5.1 bit map with TS 0x40/`IN_ALT1` semantics and the
   `cl_attackswitch` swap, `CL_AdjustAngles` clamps, frozen angles when dead. Reimplement the
   anti-script gate (`HUD_Key_Event` sets the flag, `HUD_Frame` clears it) only if you want parity.
   It is cheap. Mouse: rely on FWGS `IN_EngineAppendMove` first, then port §5.4 (TS accel and zoom
   sensitivity).
3. **Message layer** (`msg.rs`): a `MsgReader` (BYTE/CHAR/SHORT/LONG/STRING/COORD=short/8) and a
   `shared::msgs` table generated from §3.1–3.3 so client and server stay in sync. Skip the TFC
   messages (`ValClass`, `Feign`, `Detpack`, `BuildSt`, `RandomPC`, `AllowSpec`, `SecAmmo*`,
   `StatusIcon/Text/Value`, `Concuss`).
4. **Client state** (not drawing): `PlayerHud {health, armor, stance, cash, slots, powerup,
   pw_expire, kfu_power, round_time/mode, timescale, target_timescale}`, `WeaponGrid[17][11]`,
   `extra_info[65] {award, observer, frags, deaths, team, teamname}`, `player_items[65] {active,
   laser_color}`, objectives[32], flags[16], messages[16]. All the message handlers write here.
5. **HUD drawing** as one immediate-mode pass in `HUD_Redraw` over that state. Replace the
   element/vtable system with plain functions in the §4.1 draw order: round timer → TS messages →
   objective text → (alive) teammate markers → crosshair ID → status panel → powerup → objective
   markers → laser dots → weapon info/list or kung-fu → crosshair/wire panel → kill feed → say text
   → menu. Sprites from `hud.txt` and `sprites/player/*.spr` via `SPR_*`. Boxes via `FillRGBA`.
   Colours come from `hud_r/g/b`, red is `(195,45,45)`.
6. **Text**: a font-atlas TriAPI renderer with UTF-8 (fixes the §6.3 limitation), plus a
   `titles.txt` `#key` lookup.
7. **Slow-mo** (`HUD_Frame` lerp at 7/s, tempent and sound pitch scaling, `cl_slowfade` tint and
   `TSFade` via `pfnSetScreenFade` in `V_CalcRefdef`), FOV smoothing (`default_fov` 70..110), the
   third-person toggle and death cam.
8. **Menus on TriAPI instead of VGUI1**: buy menu (§6.2: page state machine, digit and mouse input,
   the `rst_cfg` + `tkw/tki/tka` protocol; check the exact server parsing against the server doc),
   team select (`jointeam`/`chgteam`), scoreboard (+score, `IN_SCORE`, awards), MOTD (concatenate
   `MOTD` chunks), spectator help. Need a cursor: `pfnGetMousePosition` plus `IN_DeactivateMouse`
   while a menu is open. `ShowMenu` (`CHudMenu`) is trivial text and should be ported as-is.
9. Later: `HUD_TempEntUpdate`, TS particle/emitter system (`ts_emitter` lump parsing,
   `TSPSys`/`TSFrags`/`PTakeDam` effects), motion blur, the studio renderer.

**Safe to drop:** the voice-mgr banned-player UI (keep VoiceMask/ReqState hooks returning 1), the
server browser, the command menu, TFC class panels, joystick, `hud_classautokill`.

**Must keep** for server compatibility: hook every message the server sends. Unhooked messages
print engine errors, so stub `Train`, `Geiger`, `Damage`, `Battery`, `Health`, `WeaponList`, `AmmoX`,
`ItemPickup` and others even if they don't draw. `InitHUD`/`ResetHUD` must reset the §4 state.

**Bugs not to copy:** the 74-vs-72 scoreboard overrun (`1005d5f0`), the always-true `Objective`
/`ShowObj` bounds checks (`(i>=0)||(i<32)`), the missing `#` in `Buy_SMGs`, `default_fov` forced to
80 after registration, and `HUD_GetHullBounds` not filling the hulls.
