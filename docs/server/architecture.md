# TS 3.0 server (`ts_i386.so`): architecture and engine interfaces

This document covers how the server game library talks to the engine: the exports, the
`DLL_FUNCTIONS` table, cvars, user messages, client commands, entity classnames, the class
hierarchy, and the networking hooks. It's meant for whoever reimplements the server in Rust
(`/home/mmckenzie/dev/hl/mymod`). Gameplay internals (weapons, stunts, game rules logic,
`pm_shared`) are documented elsewhere. Here they appear only where they touch an interface.

## 0. Conventions

* **Addresses are Ghidra addresses**, as used in `server/functions.tsv` and the `decomp/*.c`
  headers. Ghidra address = file/objdump address + `0x10000`. To read raw data, subtract `0x10000`
  (for example `objdump -s -j .data --start-address=$((0x1160e0-0x10000))`).
* **Pointers in `.data` are mostly zero on disk.** They're filled in by `R_386_32` relocations,
  so read them with `readelf -rW` instead of dumping bytes. The `gFunctionTable` contents below
  come from that relocation table.
* **Object layout (GCC 2.95):** `pev` is at `+0x00`, CBaseEntity data follows, and the vtable
  pointer is at `+0x60` (after `m_fireState` at `+0x5c`). `CGameRules`-derived objects have no
  `pev`, so their vtable pointer is at `+0x00`.
* **Vtable slot numbering.** The decompiler indexes from the start of the vtable, where entry
  `[0]` is 0 and `[1]` is `&__tf<Class>`, but `server/vtables.tsv` numbers slots from the first
  function. So `this->vtable[N]` in the decompiled code is tsv slot `N-2`, and a raw byte offset
  `*(vt + off)` is slot `off/4 - 2`. Example: `(**(code**)(piVar[0x18] + 0x160))(p)` in
  `PlayerPreThink` is slot 86, `CBasePlayer::PreThink`.
* "SDK" means `/home/mmckenzie/dev/hl/halflife-sdk/dlls`. That tree is a *newer* SDK than the one
  TS was built on. TS lacks `MyTogglePointer`/`SetActivator`, `EFLAG_FLESH_SOUND`, and other later
  additions, so "stock" below means "same behaviour as the SDK of that era".
* Offsets into `entvars_t`/`entity_state_t`/`clientdata_t` were computed with clang from
  `scripts/types/goldsrc_types.i` (i386). Notable ones: `pev+0x1a4 flags`, `+0x240 groupinfo`,
  `+0x244 iuser1`, `+0x250 iuser4`, `+0x254 fuser1`, `+0x208 pContainingEntity`.
* "(inferred)" marks an interpretation that the code doesn't prove directly.

---

## 1. Exports and entry points

The library has 282 exported text symbols: 189 entity link functions (§5), 8 engine entry
points, and the `pm_shared` / math helpers (`PM_*`, `VectorMA`, `AngleVectors`, …, plus the TS
movement helpers `TSDive`, `TSGoDuck`, `TSHandle`, `TSStandUp`, `TSWallJump`, `TSWallJumpClimb`,
`PseudoClimb`, `CanJumpHigh`, `FixVelocity`).

| Export | Ghidra addr | Behaviour |
|---|---|---|
| `GiveFnptrsToDll(enginefuncs_t*, globalvars_t*)` | `000c8890` | Copies **0x9b = 155** dwords into `g_engfuncs` (`00190f20`) and stores `gpGlobals` (`0019118c`). 155 slots means TS's `enginefuncs_t` runs through `pfnResetTutorMessageDecayData` (the CS:CZ-era interface) but stops before `pfnQueryClientCvarValue`. The Ghidra type is `enginefuncs_t_ts30`. |
| `GetEntityAPI(DLL_FUNCTIONS*, int ver)` | `000aaa7c` | Legacy entry. Fails unless `ver == 0x8c` (140, `INTERFACE_VERSION`). Copies 50 dwords from `gFunctionTable`. |
| `GetEntityAPI2(DLL_FUNCTIONS*, int* ver)` | `000aaac0` | Same check. On a mismatch it writes 140 to `*ver` and returns 0. Otherwise copies 50 dwords and returns 1. |
| `GetNewDLLFunctions(NEW_DLL_FUNCTIONS*, int* ver)` | `000aab0c` | Requires `*ver == 1` and copies 3 pointers from `gNewFunctionTable` (`001161a8`). It logs `"GetNewDLLFunctions version mismatch; requested=%d ours=%d"` otherwise. **This export is not in the reference SDK**, so TS added it. |
| `Server_GetBlendingInterface` | `000a3f80` | For version 1 it fills `svBlending`, copies `IEngineStudio`, and stores `g_pRotationMatrix`/`g_pBoneTransform`, but **it always returns 0** (`mov $0x0,%eax` at file `0x93fd1`). The engine therefore uses its own default blending, and TS's server-side studio blending code is effectively dead. The SDK returns 1. |

There's no `Server_GetPhysicsInterface` export (FWGS only).

### 1.1 `gFunctionTable` (`DLL_FUNCTIONS`, `001160e0`, 50 slots) and `gNewFunctionTable`

Status key: **stock** = same as the SDK of that era. **TS** = behaviour added or changed by TS.
**TS-heavy** = mostly TS code.

| # | Slot | Implementation (addr, size) | Status | Notes |
|---|---|---|---|---|
| 0 | pfnGameInit | `GameDLLInit` `000c5aa0` (822) | TS | 7 TS server commands and 37 cvars (§2). No `sk_*` skill cvars are registered, although `exec skill.cfg` is still issued. |
| 1 | pfnSpawn | `DispatchSpawn` `000aab8c` (441) | stock | Slot 7 `Spawn`, then `g_pGameRules->IsAllowedToSpawn` (gamerules slot 2), plus globalname handling. |
| 2 | pfnThink | `DispatchThink` `000aae64` (116) | stock | Warns `"Dormant entity %s is thinking!!"` when `FL_DORMANT` is set, then calls slot 52 `Think`. |
| 3 | pfnUse | `DispatchUse` `000aae14` (80) | stock | Skipped when `FL_KILLME` is set. Calls `Use(other, other, USE_TOGGLE(3), 0)`. |
| 4 | pfnTouch | `DispatchTouch` `000aada4` (112) | stock | Checks `gTouchDisabled` and `FL_KILLME` on either entity. |
| 5 | pfnBlocked | `DispatchBlocked` `000aaed8` | stock | |
| 6 | pfnKeyValue | `DispatchKeyValue` `000aad4c` | stock | Calls `EntvarsKeyvalue` first, then the entity's slot 9 `KeyValue`. |
| 7–14 | pfnSave … pfnResetGlobalState | `DispatchSave` `000aaf18`, `DispatchRestore` `000ab128`, `DispatchObjectCollsionBox` `000ab61c`, `SaveWriteFields` `000ab654`, `SaveReadFields` `000ab6e8`, `SaveGlobalState` `000f42ec`, `RestoreGlobalState` `000f436c`, `ResetGlobalState` `000f43fc` | stock | TS is `multiplayer_only`. These can be stubs, except `pfnSetAbsBox`, which must compute the absmin/absmax box. |
| 15 | pfnClientConnect | `ClientConnect` `000acce8` (99) | TS | First calls `CTSPlayerAmount::ClientConnect` (`00072aec`) on every `ts_playeramount` (player-count trigger), then `g_pGameRules->ClientConnected` (slot 10). |
| 16 | pfnClientDisconnect | `ClientDisconnect` `000acd4c` (265) | TS | Same `ts_playeramount` loop (`CTSPlayerAmount::ClientDisconnect` `00072c08`), then stock: `SayText "- %s has left the game"`, `takedamage=0`, `solid=0`, `ClientDisconnected`. |
| 17 | pfnClientKill | `ClientKill` `000acec8` (122) | TS | **Delayed suicide.** If `pev->iuser1 == 0` (not observing) and no suicide is pending, it sets `player+0x84c = time + 1.0`. `CBasePlayer::PreThink` (`000908cc`) later sets `health = 0` and calls `Killed(pev, GIB_NEVER)` once that time passes. |
| 18 | pfnClientPutInServer | `ClientPutInServer` `000acf44` (112) | TS | `GetClassPtr<CBasePlayer>`, `SetCustomDecalFrames(-1)`, `GiveCash(atoi(initial_cash.string))` (§2: always "1200"), `Spawn` (slot 7), `effects |= EF_NOINTERP`. |
| 19 | pfnClientCommand | `ClientCommand` `000ad838` (3506) | TS-heavy | §4. |
| 20 | pfnClientUserInfoChanged | `ClientUserInfoChanged` `000ae638` (687) | stock | Name-change broadcast with `%` sanitising and log line, then gamerules slot 24. |
| 21 | pfnServerActivate | `ServerActivate` `000ae928` (223) | stock | Calls `Activate` (slot 13) on non-client edicts, then `LinkUserMessages` (`000d7db0`). User messages are registered here, not in GameInit. |
| 22 | pfnServerDeactivate | `ServerDeactivate` `000ae8ec` (57) | TS | Also calls `CTSSharedEmitter::KillAll(s_Emitter)`, the particle emitter singleton. |
| 23 | pfnPlayerPreThink | `PlayerPreThink` `000aea0c` | stock | Calls player slot 86 `PreThink`. |
| 24 | pfnPlayerPostThink | `PlayerPostThink` `000aea38` | stock | Calls player slot 87 `PostThink`. |
| 25 | pfnStartFrame | `StartFrame` `000aeaa8` (84) | stock | `g_pGameRules->Think()`, `gpGlobals->teamplay = g_teamplay`, `g_ulFrameCount++`. |
| 26 | pfnParmsNewLevel | `ParmsNewLevel` `000aea64` | stock (empty) | |
| 27 | pfnParmsChangeLevel | `ParmsChangeLevel` `000aea68` | stock | |
| 28 | pfnGetGameDescription | `GetGameDescription` `000aee84` | TS strings | Calls gamerules slot 9: `"The Specialists (DM)"`, `"(Teamplay)"`, `"(The One)"`, or `"(LMS)"` (`g_sz*Description`, `0011d004`…), or `"The Specialists"` from the base `CGameRules`. |
| 29 | pfnPlayerCustomization | `PlayerCustomization` `000aeef0` | stock | Decals only. |
| 30–32 | pfnSpectatorConnect/Disconnect/Think | `000aef88` / `000aefc0` / `000aeff8` | stock | `CBaseSpectator`, unused in practice. Observer mode lives in `CBasePlayer::StartObserver`. |
| 33 | pfnSys_Error | `Sys_Error` `000aeebc` | stock | |
| 34 | pfnPM_Move | `PM_Move` `00101188` | TS-heavy | `pm_shared`, which contains the TS stunts and slow motion. |
| 35 | pfnPM_Init | `PM_Init` `00101280` | stock | Builds the stuck table and the texture types. |
| 36 | pfnPM_FindTextureType | `PM_FindTextureType` `000fc28c` | stock | |
| 37 | pfnSetupVisibility | `SetupVisibility` `000af030` (330) | stock | `FL_PROXY` → null PVS. Eye is `origin + view_ofs`, lowered by 18 when `FL_DUCKING`. |
| 38 | pfnUpdateClientData | `UpdateClientData` `000b0294` (998) | TS-heavy | §7.2. |
| 39 | pfnAddToFullPack | `AddToFullPack` `000af180` (1686) | TS | §7.1. |
| 40 | pfnCreateBaseline | `CreateBaseline` `000af81c` (474) | stock | |
| 41 | pfnRegisterEncoders | `RegisterEncoders` `000b004c` | stock | `Entity_Encode` `000afaa4`, `Custom_Encode` `000afec4`, `Player_Encode` `000afcbc`. |
| 42 | pfnGetWeaponData | `GetWeaponData` `000b00ac` (487) | stock | §7.3. |
| 43 | pfnCmdStart | `CmdStart` `000b067c` | stock | `UTIL_SetGroupTrace(pev->groupinfo)` and `player+0x7ec = random_seed`. |
| 44 | pfnCmdEnd | `CmdEnd` `000b06f4` | stock | |
| 45 | pfnConnectionlessPacket | `000b0750` | stock | Returns 0. |
| 46 | pfnGetHullBounds | `GetHullBounds` `000b0760` | stock (incl. bug) | Returns 1 for hulls 0–2. Like the SDK it assigns to local pointer copies, so `mins`/`maxs` are never written (inferred from the decompile). |
| 47 | pfnCreateInstancedBaselines | `000b0810` | stock | No instanced baselines. |
| 48 | pfnInconsistentFile | `InconsistentFile` `000b0830` | stock | `mp_consistency`. |
| 49 | pfnAllowLagCompensation | `000b0894` | stock | Returns 1. |
| N0 | pfnOnFreeEntPrivateData | `OnFreeEntPrivateData` `000ab788` | TS (new API) | Calls slot 14 `CBaseEntity::OnFreeEntPrivateData` (`000ac650`), which is empty everywhere. |
| N1 | pfnGameShutdown | `GameShutdown` `000ab7b0` | TS (new API) | Empty. |
| N2 | pfnShouldCollide | `ShouldCollide` `000ab7b4` | TS (new API) | Returns 1 if there's no private data or `FL_KILLME` is set. Otherwise calls slot 15 `ShouldCollide(other)`. Overridden by `CTSKnife` (always 1) and `CTSWorldGun` (`000a1290`). |

`CTSWorldGun::ShouldCollide` compares the other entity's classname against `"WorldGun"`
(`0010a74b`) and `"knife"` (`001077e5`) and returns false on a match, so dropped guns pass
through each other and through thrown knives.

Dropped guns are created through the `TSWorldGun` export, but their `pev->classname` is then
set to the string `"WorldGun"` (`global_00066308.c:4277`). Every lookup uses that runtime name:
`UTIL_FindEntityByClassname(…,"WorldGun")` in `CBasePlayer`, `CTSGameRules`, `CTSSellZone`, and
`AddToFullPack`.

**Unusual points:**
* `NEW_DLL_FUNCTIONS` is implemented on top of an older SDK base. `OnFreeEntPrivateData` and
  `ShouldCollide` also exist as **CBaseEntity virtuals** (slots 14 and 15), which the SDK doesn't
  have.
* User messages are registered in `ServerActivate` → `LinkUserMessages`, guarded by
  `if (gmsgSelAmmo == 0)`, so this happens once per process.
* Two game-rules objects run side by side (§6.3): the polymorphic `g_pGameRules` (`0011904c`, a
  stock `CHalfLifeMultiplay`/`CHalfLifeTeamplay`, created in `InstallGameRules` `000c6050`) and
  a **static, non-virtual `CTSGameRules TSGameRules`** at `001781a0` (.bss), which holds the
  rounds, teams, objectives, slow motion, and the bullet manager.

---

## 2. Game init: cvars and server commands

`GameDLLInit` (`000c5aa0`) does the following in order:

1. `pfnAddServerCommand` for `addbot`, `addcustombot`, `globalslow`, `restartround`,
   `weaponrestriction`, `loadweapons`, `saveweapons` (table 2.2).
2. `pfnCVarGetPointer` for `sv_gravity` → `g_psv_gravity`, `sv_aim` → `g_psv_aim`, and
   `mp_footsteps` → `g_footsteps`.
3. `pfnCVarRegister` for 37 static `cvar_t`s (table 2.1). Five more `cvar_t`s are defined but never registered.
4. `pfnServerCommand("exec skill.cfg\n")`.

`InstallGameRules` (`000c6050`) runs `exec game.cfg` and then picks the rules with
`DecideGamePlay` (`000767ac`):

* `mp_theonemode` set → The One (`g_theOneMode = 1`, teamplay).
* `lastmanstanding` set → LMS (`g_lastManStanding = 1`, non-team).
* `mp_teamplay` set → teamplay.
* Otherwise DM.

An internal `g_gamemode` (`00123dc0`) can force a mode: 2 = team, 3 = LMS, 4 = The One. Teamplay
uses `new CHalfLifeTeamplay` (0x218 bytes); DM, LMS, and The One use `new CHalfLifeMultiplay`
(0xc bytes).

### 2.1 Cvars (`cvar_t` initializers in `.data`, `00118ce0`–`00119014` and `00124ce0`)

Flags: `0x4` = `FCVAR_SERVER`, `0x100` = `FCVAR_UNLOGGED`. "Reg?" says whether `GameDLLInit`
registers the cvar.

| C symbol (addr) | Cvar name | Default | Flags | Reg? | Use / notes |
|---|---|---|---|---|---|
| `displaysoundlist` (`00118ce0`) | displaysoundlist | 0 | 0 | yes | stock |
| `fragsleft` (`00118cf4`) | mp_fragsleft | 0 | 0x104 | yes | stock |
| `timeleft` (`00118d08`) | mp_timeleft | 0 | 0x104 | yes | stock |
| `teamplay` (`00118d1c`) | mp_teamplay | 0 | 0x4 | yes | stock; also read by `DecideGamePlay` |
| `fraglimit` (`00118d30`) | mp_fraglimit | 0 | 0x4 | yes | stock |
| `timelimit` (`00118d44`) | mp_timelimit | 0 | 0x4 | yes | stock |
| `friendlyfire` (`00118d58`) | mp_friendlyfire | 0 | 0x4 | yes | stock |
| `falldamage` (`00118d6c`) | mp_falldamage | 0 | 0x4 | yes | stock |
| `weaponstay` (`00118d80`) | mp_weaponstay | 0 | 0x4 | yes | stock |
| `forcerespawn` (`00118d94`) | mp_forcerespawn | 1 | 0x4 | yes | stock |
| `aimcrosshair` (`00118da8`) | mp_autocrosshair | 1 | 0x4 | yes | stock |
| `decalfrequency` (`00118dbc`) | decalfrequency | 30 | 0x4 | yes | stock |
| `teamlist` (`00118dd0`) | mp_teamlist | `hitman;gordon` | 0x4 | yes | stock-ish (default changed) |
| `teammodels` (`00118de4`) | mp_teammodels | `""` | 0x4 | yes | **TS**: per-team model lists (`CTSGameRules::SetTeamModelList`) |
| `teamoverride` (`00118df8`) | mp_teamoverride | 1 | 0 | yes | stock |
| `defaultteam` (`00118e0c`) | mp_defaultteam | 0 | 0 | yes | stock |
| `allowmonsters` (`00118e20`) | mp_allowmonsters | 0 | 0x4 | yes | stock |
| `mp_chattime` (`00118e34`) | mp_chattime | 10 | 0x4 | yes | stock |
| `initial_cash` (`00118e48`) | initial_cash | 1200 | 0x4 | **no** | **TS**. Never registered, so the `.string` is always "1200" (parsed by `ClientPutInServer`) and the `.value` is always **0.0** (the team-cash init in `CTSGameRules` reads `.value`). |
| `cashforwin` (`00118e5c`) | cashforwin | 10000 | 0x4 | **no** | **TS**. Only the `.string` is read (`sscanf`) in `CTSGameRules::TeamWin`, so it's effectively a constant of 10000. |
| `cashforlose` (`00118e70`) | cashforlose | 1200 | 0x4 | **no** | **TS**. Same as above, a constant of 1200. |
| `roundtime` (`00118e84`) | roundtime | 150 | 0x4 | yes | **TS** round length, in seconds |
| `respawntime` (`00118e98`) | respawntime | 3 | 0x4 | yes | **TS** |
| `damagemult` (`00118eac`) | damagemult | 0.0 | 0x4 | yes | **TS** custom weapon damage multiplier (announced in `CTSGameRules::InitHUD`) |
| `slowmatch` (`00118ec0`) | slowmatch | 1.0 | 0x4 | yes | **TS** slow-motion match setting (inferred) |
| `nopowerup` (`00118ed4`) | nopowerup | 0.0 | 0x4 | yes | **TS** disables powerups |
| `botlearn` (`00118ee8`) | botlearn | 0.0 | 0x4 | yes | **TS** bots (listen server only) |
| `realbullet` (`00118efc`) | realbullet | 0.0 | 0x4 | yes | **TS** simulated bullets (`CBulletManager`), mirrored to clients via `SrvSett` 0 |
| `dmcashbased` (`00118f10`) | **usecash** | 0.0 | 0x4 | yes | **TS** buy system on/off, mirrored via `SrvSett` 1 |
| `cv_ammocount` (`00118f24`) | ammocount | 0 | 0x4 | yes | **TS**: `Set_ammo_count`, mirrored via `SrvSett` 2 |
| `bottalk` (`00118f38`) | bottalk | 1 | 0x4 | yes | **TS** |
| `weaponstay_time` (`00118f4c`) | **weaponstay** | 15 | 0x4 | yes | **TS** dropped-weapon lifetime. The name collides conceptually with `mp_weaponstay`. |
| `mp_theonemode` (`00118f60`) | mp_theonemode | 0 | 0x4 | yes | **TS** The One mode |
| `mp_theone` (`00118f74`) | mp_theone | gordon | 0x4 | yes | **TS** The One's model |
| `mp_theothers` (`00118f88`) | mp_theothers | seal | 0x4 | yes | **TS** others' model |
| `lastmanstanding` (`00118f9c`) | lastmanstanding | 0 | 0x4 | yes | **TS** LMS mode |
| `spectacularness` (`00118fb0`) | spectacularness | 1 | 0x4 | yes | **TS** stunt score multiplier (inferred) |
| `respawnnumber` (`00118fc4`) | respawnnumber | 1 | 0x4 | **no** | **TS**. Never registered, so `.value` is 0 and the code clamps it to 1 (`global_00066308.c`). |
| `customweapons` (`00118fd8`) | customweapons | `""` | 0x4 | yes | **TS** weapon-parameter file (see `loadweapons`) |
| `banfortk` (`00118fec`) | banfortk | 0 | 0x4 | yes | **TS** team-kill ban |
| `dmgreport` (`00119000`) | dmgreport | 0 | 0x4 | **no** | **TS**. Read with `CVarGetFloat("dmgreport")` (5 sites: `CBulletManager`, `CBasePlayer`, `CTSKnife`). Because it's unregistered this returns 0 unless something else creates the cvar. |
| `botarmor` (`00119014`) | botarmor | 0 | 0x4 | yes | **TS** |
| `voice_serverdebug` (`00124ce0`) | voice_serverdebug | 0 | 0 | in `CVoiceGameMgr::Init` | stock |
| `sv_alltalk` (`00124cf4`) | sv_alltalk | 0 | 0 | in `CVoiceGameMgr::Init` | stock |

Engine cvars the DLL reads or writes by name: `mp_consistency`, `mp_footsteps`, `sv_aim`,
`sv_cheats` (→ `g_flWeaponCheat` `0019f268`, which gates the cheat commands), `skill`,
`suitvolume`, `showtriggers`, `violence_agibs`/`violence_hgibs`, `sv_language`, `hostname`,
`mapcyclefile`, `motdfile`, `servercfgfile`, `lservercfgfile`. Written by worldspawn/env code:
`sv_gravity`, `sv_stepsize`, `sv_skyname`, `sv_skycolor_*`, `sv_skyvec_*`, `sv_wateramp`, `sv_zmax`,
`sv_newunit`, `room_type`, `v_dark`, `mp_teamplay`, `mp_friendlyfire`, `mp_slowmatch` (sic),
`mp_defaultteam`, `mp_chattime`.

Physinfo keys set with `pfnSetPhysicsKeyValue` (read by `pm_shared`): `slj` (stock long jump,
"0"/"1"), `hl` = "1" (stock), and the TS key **`mj` = "1"** for the Low-Gravity/super-jump powerup
(`PlayerAddPowerUp` `00097bc8`).

### 2.2 Server console commands

| Command | Handler | Args / behaviour |
|---|---|---|
| `addbot` | `cmd_addbot` `000c5520` | Prints "Bots only in listen servers." (stub in the dedicated .so) |
| `addcustombot` | `cmd_addcustombot` `000c5550` | Same stub |
| `globalslow [pct]` | `cmd_globalslow` `000c5580` | No arg: prints the current value. Arg: percent → factor `pct*0.01`, clamped to [0, 2]. Values in 0.999–1.001 become 0 (off), and values under 0.01 become 0.01. Applied through `CTSGameRules::SetGlobalSlowMotion`/`GlobalSlowMotion2` (state at `00178700`/`00178704`). |
| `restartround` | `cmd_restartround` `000c5748` | `TSGameRules.ResetRestartRound(2)` |
| `weaponrestriction [n]` | `cmd_weaponrestriction` `000c58a0` | No arg: `display_weaponrestriction`. `5` = reset (`InitWeaponRestriction`). Otherwise `WeaponRestrictionByID(n) & allowed`. The mask (`0017da10` = `TSGameRules+0x5870`) is broadcast as `SrvSett` 3. |
| `loadweapons <file>` | `cmd_loadweapons` `000c59ac` | `adjust_weapon_value` (`0009eca4`) parses lines of `id accuracy viewkick accuracykick damage cost` plus `armor_absorb`/`health_absorb`, then `InformClientsOnWeaponsParams` (`0009eb14`) → `CustomWP` |
| `saveweapons <file>` | `cmd_saveweapons` `000c5a2c` | `save_weapon_value` writes the same format |

---

## 3. User messages

`LinkUserMessages` (`000d7db0`) registers everything below. Also registered:

* `VoiceMask` (8) and `ReqState` (0) in `CVoiceGameMgr::Init`.
* `Logo` (1), registered lazily in `CBasePlayer::ImpulseCommands` (impulse 99).

`gmsgFlashlight`, `gmsgFlashBattery`, `gmsgSetCurWeap`, and `gmsgTSKickAlign` (`001134ac`) exist
as globals but are **never registered**. Destinations: `MSG_ONE`=1, `MSG_ALL`=2, `MSG_PVS`=4,
`MSG_SPEC`=9.

### 3.1 Registration table

Size −1 means variable length. Global addresses are in `.bss`/`.data` near `001133c4`.

| Name | Size | Global | Sent? | Origin |
|---|---|---|---|---|
| SelAmmo | 4 | gmsgSelAmmo `001133cc` | never | stock |
| CurWeapon | 3 | gmsgCurWeapon `001133e4` | yes | stock |
| Geiger | 1 | gmsgGeigerRange `00113448` | yes | stock |
| Health | 1 | gmsgHealth `001133e8` | **never** (replaced by TSHealth) | stock |
| Damage | 12 | gmsgDamage `001133ec` | **never** (replaced by PTakeDam) | stock |
| Battery | 2 | gmsgBattery `001133f0` | **never** (replaced by TSArmor) | stock |
| Train | 1 | gmsgTrain `001133f4` | yes | stock |
| HudText | −1 | gmsgHudText `00113404` | yes | stock |
| SayText | −1 | gmsgSayText `00113438` | yes | stock |
| TextMsg | −1 | gmsgTextMsg `0011343c` | yes | stock |
| WeaponList | −1 | gmsgWeaponList `001133fc` | **never** | stock |
| ResetHUD | 1 | gmsgResetHUD `001133d8` | yes | stock |
| InitHUD | 0 | gmsgInitHUD `001133dc` | yes | stock |
| GameTitle | 1 | gmsgShowGameTitle `001133e0` | never | stock |
| DeathMsg | −1 | gmsgDeathMsg `00113408` | yes | stock |
| ScoreInfo | 9 | gmsgScoreInfo `0011340c` | yes | stock |
| TeamInfo | −1 | gmsgTeamInfo `00113410` | yes | stock |
| TeamScore | −1 | gmsgTeamScore `00113414` | yes | stock |
| GameMode | 1 | gmsgGameMode `00113418` | yes | stock |
| MOTD | −1 | gmsgMOTD `0011341c` | yes | stock |
| ServerName | −1 | gmsgServerName `00113420` | yes | stock |
| AmmoPickup | 2 | gmsgAmmoPickup `00113424` | yes | stock |
| WeapPickup | 1 | gmsgWeapPickup `00113428` | never | stock |
| ItemPickup | −1 | gmsgItemPickup `0011342c` | yes | stock |
| HideWeapon | 1 | gmsgHideWeapon `00113430` | yes | stock |
| SetFOV | 1 | gmsgSetFOV `00113440` | yes | stock |
| ShowMenu | −1 | gmsgShowMenu `00113444` | never | stock |
| ScreenShake | 6 | gmsgShake `001133c4` | yes | stock |
| ScreenFade | 10 | gmsgFade `001133c8` | **never** (replaced by TSFade) | stock |
| **TSFade** | −1 | gmsgTSFade `001134c8` | yes | TS |
| AmmoX | 2 | gmsgAmmoX `00113400` | yes | stock |
| TeamNames | −1 | gmsgTeamNames `0011344c` | yes | stock |
| VGUIMenu | 1 | gmsgVGUIMenu `00113450` | yes | stock |
| **WeaponInfo** | 6 | gmsgWeaponInfo `00113458` | yes | TS |
| **ClipInfo** | 1 | gmsgClipInfo `0011345c` | **never** | TS (dead) |
| **WStatus** | 3 | gmsgTSWeaponStatus `00113474` | yes | TS |
| **ActItems** | 2 | gmsgTSActiveItems `00113478` | yes | TS |
| **KFuPower** | 1 | gmsgKFuPower `00113454` | yes | TS |
| **TSHealth** | 1 | gmsgTSHealth `00113460` | yes | TS |
| **TSArmor** | 1 | gmsgTSArmor `00113464` | yes | TS |
| **TSState** | 1 | gmsgTSState `00113468` | yes | TS |
| **TSCash** | 2 | gmsgTSCash `0011346c` | yes | TS |
| **TSSpace** | 1 | gmsgTSSpace `00113470` | yes | TS |
| **NextStunt** | 1 | gmsgTSNextStunt `0011347c` | yes | TS |
| **PwUp** | 3 | gmsgTSPowerUp `00113480` | yes | TS |
| **PwUpTime** | 1 | gmsgTSPowerUpTime `00113484` | yes | TS |
| **RoundTime** | 2 | gmsgTSRoundTime `00113488` | yes | TS |
| **Objective** | −1 | gmsgTSObjective `001134a0` | yes | TS |
| **ShowObj** | 2 | gmsgTSShowObjective `001134a4` | yes | TS |
| **Wires** | 3 | gmsgTSWires `001134a8` | yes | TS |
| **SrvSett** | 3 | gmsgTSServerSetting `001134b0` | yes | TS |
| **TSPAward** | 2 | gmsgTSPlayerAward `001134b4` | yes | TS |
| **TSBTime** | 1 | gmsgTSBulletTime `001134b8` | yes | TS |
| **TSHVoice** | 1 | gmsgTSVoiceMessage `001134bc` | yes | TS |
| **TSFlag** | 4 | gmsgTSHaveFlag `001134c0` | yes | TS |
| **CustomWP** | −1 | gmsgTSCustomWeaponParams `001134c4` | yes | TS |
| Spectator | 2 | gmsgSpectator `00113490` | yes | stock name, TS use |
| **TSMBlur** | 2 | gmsgTSMotionBlur `001134cc` | yes | TS |
| **TSMessage** | −1 | gmsgTSMessage `00113494` | yes | TS |
| **TSSlowMo** | 2 | gmsgTSSlowAmt `00113498` | yes | TS |
| **PTakeDam** | 13 | gmsgTSTakeDamage `0011348c` | yes | TS |
| **TSFrags** | −1 | gmsgTSCreateDebris `0011349c` | yes | TS |
| **PlInfo** | 3 | gmsgTSPlayerInfo `001134d4` | yes | TS |
| **TSPSys** | −1 | gmsgTSParticleSystem `001134d0` | yes | TS |

### 3.2 TS message payloads

`B`=WriteByte, `C`=WriteChar, `S`=WriteShort, `L`=WriteLong, `Co`=WriteCoord, `Str`=WriteString.
Offsets like `pl+0x540` are `CBasePlayer` fields. Most "per-player HUD" messages are sent by
`CBasePlayer::UpdateClientData` (`00091d00`, called from `PostThink`) when a value differs from
its cached "last sent" copy.

| Msg | Dest | Payload | Senders | Meaning |
|---|---|---|---|---|
| TSHealth | ONE | `B hp` | `CBasePlayer::UpdateClientData`, `::Killed` `0008ed5c` | Health (clamped ≥0). Cache at `pl+0x9e0`. |
| TSArmor | ONE | `B armor` | `UpdateClientData` | `pev->armorvalue`. Cache at `pl+0x9e4`. |
| TSState | ONE | `B state` | `UpdateClientData` | `pl+0x498`, set by `UpdatePlayerState` `00092a08`: 0 = standing, 1 = `FL_DUCKING`, 2 = `pev->iuser4 & 0x30` (stunt/lying, inferred). |
| TSCash | ONE | `S cash` | `UpdateClientData`, `StartObserver` `00099634` | Money `pl+0x540` |
| TSSpace | ONE | `B space` | `UpdateClientData` | Free inventory weight `pl+0x548`. Starts at 81 (`TSInit` `00092a4c`) and changes by ±20/±10 as items are bought (inferred). |
| PwUp | ONE | `S bits, B amount` | `UpdateClientData`, `PlayerAddPowerUp` `00097bc8`, `ClientCommand`, `CTSGameRules::SetPlayerTheOne` `0007b078`, `CHalfLifeMultiplay::PlayerKilled` | Powerup bitmask (`pl+0x728`) and count/duration (`pl+0x730`). Bits match the FGD: 1 slow-mo, 2 infinite clip, 4 kung fu, 8 slow pause, 0x10 double firerate, 0x20 grenade, 0x40 health, 0x80 armor, 0x100 low gravity / super jump (`mj`). The permanent kung-fu (4) and super-jump (0x100) flags are sent as their own PwUp with B=0. |
| PwUpTime | ONE | `B secs` | `CBasePlayer::UsePowerUp` `00095980` | Remaining active time, `pl+0x72c − time` |
| KFuPower | ONE | `C value` | `CBasePlayer::UpdateMeleeBar` `0009650c` | Kung-fu / melee bar, `round(pl+0x774)` |
| NextStunt | ONE | `B tenths` | `CTSStunt::GoBulletTime/GoWallJump/GoWallClimb/GoDive/HandleWallJump/HandleWallClimb/GoWheel` (`0009a5b4`…) | Stunt cooldown, `round(cooldown*10)` |
| TSBTime | ONE | `B on` | `UpdateClientData` | Bullet-time state (`pl+0x174`, copied from `pl+0x175`) |
| TSSlowMo | ONE | `Co factor*100` | `UpdateClientData` | Player slow-motion factor `pl+0x16c` (picked from `pl+0x170` and others depending on `pl+0x724` bits 1/8). A coord is used as a 16-bit fixed value. |
| TSMBlur | PVS | `B entindex, B mode` | `CBasePlayer::Killed`, `UsePowerUp`, `CloseCombatAttack` `00095f88`, `CTSStunt::Go*` | Motion-blur trail on an entity. 0 = off, 1 = short, 2 = long (inferred). Melee sends 2 if damage > 50, else 1. |
| ActItems | ALL | `B entindex, B mask` | `UpdateClientData`, `Killed`, `StartObserver` | Weapon attachments that are on (`CTSGun::GetActiveItems` `00081228`: slot+0x14 mask, plus 0x40 for akimbo) for third-person rendering (laser, flashlight). |
| TSPAward | ALL | `B entindex, B award` | `UpdateClientData` | Player award/icon `pl+0x74c` (values 0, 1, 10, 11 seen; inferred to be kill-streak or The One icons) |
| Wires | ONE | `B w0, B w1, B w2` | `UpdateClientData` | Bomb-defuse wire state `pl+0x78c..0x78e` (client cuts with `cutwire_N`) |
| WStatus | ONE | `B weaponId, B status, B ammo` | `CTSGun::UpdateClientData` `000858c8` | Per-weapon inventory slot (ids 0–37). Status byte is at `gun+0x114+id*0x38`, count at `gun+0x118+id*0x38`. Checked every 0.1 s. Sent when changed, and also for the active weapon's two linked ids when WeaponInfo is sent. |
| WeaponInfo | ONE | `B weaponId, B clip, S reserve, B mode, B extra` | `CTSGun::UpdateClientData` | Active weapon: id `gun+0xc8`, clip (slot+4), reserve ammo (`gun+0xd4[ammotype]`), slot+2 byte (fire mode, inferred), slot+0x10 (inferred). With no weapon slot: `B id, B round(pl+0x774), S 0, B 0, B 0`. |
| RoundTime | ONE/ALL | `B secs, B state` | `CTSGameRules::RestartRound` `00077920`, `ResetRestartRound` `00078750`, `TeamWin` `00078a08`, `InitHUD` `00079134`, `CheckDeads` `00079c00`, `CBasePlayer::UpdateClientData` | Round time remaining, plus state (0 = running, 2 = round over) |
| SrvSett | ALL/ONE | `B key, S value` | `CTSGameRules::Think` `00077204`, `InitHUD`, `cmd_weaponrestriction` | key 0 = `realbullet`, 1 = `usecash != 0`, 2 = `ammocount`, 3 = weapon restriction mask |
| CustomWP | ALL/ONE | `Str "id acc vkick acckick dmg cost"` | `SendWeaponParams` `0009eb98` | Custom weapon parameters, `"%i %f %f %f %f %i"` from `get_weapon_info(id)` fields `[10],[0xc],[0xd],[7],[0x36]` |
| Objective | ONE | `Co x, Co y, Co z, B idx, Str text` | `CTSGameRules::SendObjectiveToHud` `0007ac80` | Objective position (`Center()`, slot 60) and team-specific text. The decompile is garbled (inferred: idx = objective index). |
| ShowObj | ALL | `B idx, B show` | `CTSGameRules::ShowObjectiveOnHud` `0007aebc` | Toggle objective marker |
| TSFlag | ALL | `B action, B team, B flagIdx+1, B carrier` | `CBasePlayer::TakeFlag` `00093830` (1), `::DropFlag` `0009334c` (2), `CTSBriefcase::FlagFall` `0008da00` (0) | Capture-the-briefcase/flag status. Field meanings are inferred from `pl+0x7d8/0x7dc`. |
| TSHVoice | ONE | `B lost` | `CTSGameRules::TeamWin`, `CTSBriefcase::CaptureTouch` `0008db9c` | Announcer: 0 = your team won/captured, 1 = enemy (inferred from `param != myTeam`) |
| PTakeDam | PVS | `Co endpos×3, Co dir×3, B dmg` | `CBasePlayer::TraceAttack` `000901cc` | Hit effect at `tr.vecEndPos` along `vecDir`. Replaces `Damage`. |
| TSFrags | PVS/ALL | Breakable/door: `Co origin×3, Co size×3, B 0, Co hitpos×3, Co hitdir×3, L dmgbits, Co dmg*mult`. Explosion: `Co origin×3, Co radius, Co 0, Co 0, B 1`. | `CBreakable::Die` `000752e0`, `CBaseDoor::TraceAttack` `000b57ac`, `TSExplosion` `0007d01c` | Client-side debris (type 0) / explosion debris (type 1). `CBreakable` stores the last hit at `+0xf8` (pos), `+0x104` (dir), `+0x110` (damage, ×8 for bit `0x2000000`), and `+0x114` (damage bits). |
| PlInfo | ALL | `B entindex, B key, B value` | `ClientCommand` (`lasclr_N`) | key 0 = laser colour |
| TSPSys | ALL/ONE | type 3 (wind): `B 3, L seed(0..30000), L yaw(angles.y±45), Co strength`. Type 1: `B 1` only. | `CTSWind::BlowThink` `000743a8`; `CTSSharedEmitter::SV_UpdateClient` `000f8284` | Particle system control. The emitter path really sends only one byte per active emitter or particle slot (confirmed in disassembly at file `0xe82da`). The client must get emitter definitions elsewhere (map/`particles.txt`, inferred). |
| TSMessage | ONE/ALL | `B r, B g, B b, B a, B b2, Str text` | `TSHudMessageOne` `000768d4`, `TSHudMessageAll` `000769d4` | Coloured HUD text (≤127 chars). Common (a, b2) pairs are (8, 30), (16, 20), (8, 100). Inferred: a = position/style, b2 = hold time in tenths of a second. |
| TSFade | ONE | `S duration, S hold, S flags, B r, B g, B b, B a` | `UTIL_ScreenFadeWrite` `000ecc54` | Same layout as `ScreenFade` (fixed-point 4.12 times), but under a TS name |
| Spectator | ONE/ALL | `B entindex, B isObserver` | `CTSGameRules::InitHUD`, `CBasePlayer::ForceClientDllUpdate` `00092594`, `TSInit`, `StartObserver`, `StopObserver` `00099a14` | Observer flag for scoreboard and HUD |
| VGUIMenu | ONE | `B 2` | `ClientCommand` `changeteam` | Opens team-select menu 2 |

Stock messages TS sends with stock layouts: CurWeapon (`B state, B id, B clip`, only from
`CBasePlayerWeapon::UpdateClientData` and `RemoveAllItems`), AmmoX, AmmoPickup, ScoreInfo
(`B idx, S frags, S deaths, S 0, S team`, also from `CTSDMHill::WaitTouch`, `CTSBriefcase`,
`CTSFlag::PlayerTakeFlag`), TeamInfo, TeamScore (`Str, S, S`), TeamNames, DeathMsg, GameMode,
SayText, TextMsg, HudText, ScreenShake, SetFOV, HideWeapon, Train, Geiger, MOTD, ServerName,
ItemPickup, and ResetHUD/InitHUD. SVC traffic: 24 `SVC_TEMPENTITY` sites (all stock TE
types, plus `TE_BREAKMODEL` from `CBreakable::Die`), `SVC_INTERMISSION`, `SVC_CDTRACK`,
`SVC_WEAPONANIM`, `SVC_ROOMTYPE`, and `MSG_SPEC` with `0x32` (= 50, the older `SVC_HLTV` value,
not the SDK's `SVC_DIRECTOR`=51) for `DRC_CMD_EVENT` in `DeathNotice`/`TakeDamage`.

---

## 4. Client commands (`ClientCommand`, `000ad838`)

Dispatch is a linear chain of `strcmp`/`strstr` (prefix) tests on `Cmd_Argv(0)`. Anything left
over goes to `g_pGameRules->ClientCommand` (slot 23). That calls
`CVoiceGameMgr::ClientCommand` (`000f770c`) first and then swallows `menuselect`. Anything still
unhandled prints `"Unknown command: %s"`.

| Command | Handler | Args / behaviour |
|---|---|---|
| `say` / `say_team` | `Host_Say` `000ad02c` | stock |
| `fov [n]` | inline | Sets `pl+0x9f0` and `pev->fov` only when `sv_cheats` is on. Otherwise prints `"fov" is "%d"`. |
| `use <name>` | `CBasePlayer::SelectItem` `000dade4` | stock HL item select (unused by the TS HUD) |
| `respawn` | inline | Only while observing (`iuser1 != 0`). With `pl+0x770 < 0` it prints "You have to wait until the next round." If the respawn time `pl+0x770` has passed, it calls `StopObserver`. |
| `powerup <n>` (cheat) | inline | Needs `sv_cheats`, alive, not observing. n: 1 → slow pause (8), 2 → grenade (`PickUpWeapon(0x18)`), 3 → kung fu + super jump (`mj`), 4 → `CTSGun::MultiplyClips`, 5 → double firerate (0x10), other → slow motion (1). Stacks +5 if it's the same powerup. |
| `cashala` (cheat) | `GiveCash(30000)` | Needs `sv_cheats` |
| `weapon_<id>` | `CTSGun::SelectWeapon` `00080fb8` then `Deploy` (slot 72) | Select TS weapon by numeric id. Stores the previous one in `pl+0xa1c` for `lastinv`. Requires the active item to be the CTSGun (`m_iId == 16`). |
| `lasclr_<n>` | inline | Broadcasts `PlInfo(idx, 0, n)` (laser colour) |
| `rst_cfg` | `CBasePlayer::ResetArmament` `00093e88` | Clears the buy loadout |
| `tkw <id>_<n> …` | `AddItemToArmament` `00093ea4` | Buy/spawn loadout: weapons. For each arg `id_n`: normal weapon → add with attachment flags n. Weapon whose info `[0x37]` flag is set (grenades/knives, inferred) → add n copies, clamped to `info[9]`. |
| `tki <id> …` | `AddItemToArmament(id,0,1)` | Loadout: items |
| `tka <type>_<n> …` | `AddAmmoToArmament` `00093ef4` | Loadout: ammo |
| `cutwire_<n>` | `CBasePlayer::CutWire` `00092fb4` | Bomb defuse |
| `drop` / `drop_<id>` | `CBasePlayer::DropWeapon(id or -1, 0)` `00094900` | Drop current or specific weapon |
| `usepowerup` | `CBasePlayer::UsePowerUp` `00095980` | Activate a stored powerup |
| `firemode` | `CTSGun::SwitchFireMode` `0008169c` | |
| `useitems` | `CTSGun::SwitchItems` `0008155c` | Toggle attachments (laser/flashlight/silencer) |
| `lastinv` | `SelectWeapon(pl+0xa1c)` | Swap to the previous TS weapon |
| `changeteam` | → `VGUIMenu(2)` | |
| `jointeam <n>` | gamerules slot 51 `GetIndexedTeamName(n-1)` → slot 53 `ChangePlayerTeam` | |
| `motd` | `CHalfLifeMultiplay::SendMOTDToClient` `000d0ae4` | Multiplayer only |
| `fullupdate` | `CBasePlayer::ForceClientDllUpdate` `00092594` | |
| `vban <hex>`, `VModEnable <0/1>` | `CVoiceGameMgr::ClientCommand` | stock voice |
| `menuselect <n>` | `CHalfLifeMultiplay`/`Teamplay::ClientCommand` | Parsed and ignored |

The stock SDK commands `give`, `drop <classname>`, `spectate`, and `specmode` are absent.
Impulses (`CBasePlayer::ImpulseCommands`) are stock: 99 → Logo, 201 → spray, 204 → force
update, plus the cheat impulses. TS stunts, kung fu, and so on are driven by `usercmd` buttons in
`PreThink`/`pm_shared`, not by console commands.

---

## 5. Entity classnames

All 189 link functions (`void classname(entvars_t*)` → `GetClassPtr<Class>`) are exported. Size
is the exact `pfnPvAllocEntPrivateData` size in `GetClassPtr<Class>`. "Parent" is the last base
whose vtable the inlined constructor stores (§6). Some stock classes carry TS changes:
`CBreakable`, `CBaseDoor`, and `CRotDoor` override `BreakableRespawn` and send `TSFrags`, and
`CBasePlayer` is heavily extended (0xb8c bytes).

#### 5.1 TS-specific classnames (38)

| classname | class | sizeof | parent | link fn |
|---|---|---|---|---|
| `TSAmmoPack` | CTSAmmoPack | 0xa8 | CBaseEntity | `000a1310` |
| `TSWorldGun` | CTSWorldGun | 0xd8 | CTSPhysicObject | `000a07c8` |
| `deadcorpse` | CTSDeadCorpse | 0x6c | CBaseEntity | `00070210` |
| `info_breakable` | CInfoBreakable | 0x6c | CPointEntity | `00075d7c` |
| `info_player_team1` | CBaseDMStart | 0x64 | CPointEntity | `000e2ae0` |
| `info_player_team2` | CBaseDMStart | 0x64 | CPointEntity | `000e2b04` |
| `info_player_team3` | CBaseDMStart | 0x64 | CPointEntity | `000e2b28` |
| `info_player_team4` | CBaseDMStart | 0x64 | CPointEntity | `000e2b4c` |
| `knife` | CTSKnife | 0xa4 | CTSGrenade | `0007d9c0` |
| `m61_grenade` | CM61Grenade | 0x94 | CTSGrenade | `0007c850` |
| `shrapnel` | CTSShrapnel | 0x9c | CTSGrenade | `0007bf78` |
| `ts_bomb` | CTSBomb | 0x88 | CTSObjective | `0008c3ac` |
| `ts_briefcase` | CTSBriefcase | 0xac | CBaseEntity | `0008d764` |
| `ts_customtarget` | CTSCustomTarget | 0x878 | CBaseEntity | `00072f90` |
| `ts_dmhill` | CTSDMHill | 0x80 | CBaseEntity | `000718f4` |
| `ts_emitter` | CTSEmitter | 0x114 | CPointEntity | `00073dac` |
| `ts_flag` | CTSFlag | 0xb0 | CTSPhysicObject | `0009d850` |
| `ts_fog` | CTSFog | 0x64 | CPointEntity | `00073e18` |
| `ts_groundammo` | CTSGroundAmmo | 0xac | CBaseEntity | `000a26f4` |
| `ts_groundweapon` | CTSGroundWeapon | 0xb4 | CBaseEntity | `000a192c` |
| `ts_hack` | CTSHack | 0x80 | CTSObjective | `0008cc08` |
| `ts_mapglobals` | CTSMapGlobals | 0x6c | CBaseEntity | `00072464` |
| `ts_model` | CTSModel | 0x104 | CBaseToggle | `000722c4` |
| `ts_objective_manager` | CTSObjectiveManager | 0xa0 | CBaseEntity | `0008b3a8` |
| `ts_objective_ptr` | CTSObjectivePointer | 0x78 | CBaseEntity | `0008b9f8` |
| `ts_particle` | CTSParticle | 0x224 | CPointEntity | `00073dd0` |
| `ts_playeramount` | CTSPlayerAmount | 0x13c | CBaseDelay | `0007299c` |
| `ts_powerup` | CTSPowerUp | 0x9c | CBaseAnimating | `00097df8` |
| `ts_scoregiver` | CTSScoreGiver | 0x7c | CTSWinGiver | `0008c06c` |
| `ts_sellzone` | CTSSellZone | 0x68 | CBaseEntity | `0007269c` |
| `ts_slowmotion` | CTSSlowMotion | 0x108 | CBaseEntity | `00070cb0` |
| `ts_slowmotionpoint` | CTSSlowMotionPoint | 0xf8 | CBaseEntity | `000714b4` |
| `ts_teamescape` | CTSTeamEscape | 0xf8 | CTSObjective | `0008d2cc` |
| `ts_timer` | CTSTimer | 0x6c | CBaseEntity | `00072d2c` |
| `ts_trigger` | CTSTrigger | 0x110 | CBaseTrigger | `0007086c` |
| `ts_wind` | CTSWind | 0x70 | CPointEntity | `00073df4` |
| `ts_wingiver` | CTSWinGiver | 0x7c | CBaseEntity | `0008bd38` |
| `weapon_tsgun` | CTSGun | 0xa10 | CBasePlayerWeapon | `00080518` |

`TSWorldGun`, `TSAmmoPack`, `knife`, `m61_grenade`, `shrapnel`, and `deadcorpse` are spawned at
runtime with `pfnCreateNamedEntity`/`GetClassPtr`. `weapon_tsgun` is the single "weapon" item
every player carries (`m_iId == 16`). It holds the whole TS inventory (38 weapon slots of 0x38
bytes each) and is the `m_pActiveItem` that `UpdateClientData` and `ClientCommand` test.

#### 5.2 Stock HL classnames re-pointed at TS classes (17)

These keep HL maps playable: HL weapons and ammo map to TS ground weapons and ammo. Note that
`weapon_9MMAR` has an upper-case `MMAR`, while the SDK name is `weapon_9mmAR`. `dlsym` is
case-sensitive, so HL maps that use `weapon_9mmAR` won't find it.

| classname | class | sizeof | parent | link fn |
|---|---|---|---|---|
| `ammo_9mmAR` | CTSBigPistolAmmo | 0xac | CTSGroundAmmo | `000c9388` |
| `ammo_ARgrenades` | CTSKnifeWeapon | 0xb4 | CTSGroundWeapon | `000c93f4` |
| `ammo_buckshot` | CTSShotgunAmmo | 0xac | CTSGroundAmmo | `000c928c` |
| `ammo_crossbow` | CTSSniperAmmo | 0xac | CTSGroundAmmo | `000c9244` |
| `ammo_gaussclip` | CTSRifleAmmo | 0xac | CTSGroundAmmo | `000c92d4` |
| `ammo_rpgclip` | CTSSMGAmmo | 0xac | CTSGroundAmmo | `000c9340` |
| `item_longjump` | CTSSuperJump | 0x9c | CTSPowerUp | `000c9484` |
| `weapon_9MMAR` | CTSBigPistolWeapon | 0xb4 | CTSGroundWeapon | `000c93ac` |
| `weapon_crossbow` | CTSSniperWeapon | 0xb4 | CTSGroundWeapon | `000c9268` |
| `weapon_egon` | CTSRifleWeapon | 0xb4 | CTSGroundWeapon | `000c931c` |
| `weapon_gauss` | CTSRifleWeapon | 0xb4 | CTSGroundWeapon | `000c92f8` |
| `weapon_handgrenade` | CTSGrenadeWeapon | 0xb4 | CTSGroundWeapon | `000c9460` |
| `weapon_hornetgun` | CTSMGWeapon | 0xb4 | CTSGroundWeapon | `000c93d0` |
| `weapon_rpg` | CTSSMGWeapon | 0xb4 | CTSGroundWeapon | `000c9364` |
| `weapon_satchel` | CTSKnifeWeapon | 0xb4 | CTSGroundWeapon | `000c9418` |
| `weapon_shotgun` | CTSShotgunWeapon | 0xb4 | CTSGroundWeapon | `000c92b0` |
| `weapon_snark` | CTSKatanaWeapon | 0xb4 | CTSGroundWeapon | `000c943c` |

#### 5.3 Stock HL classnames on (essentially) stock SDK classes (134)

Format: `classname` Class sizeof. The hierarchies are the SDK ones.

- `DelayedUse` CBaseDelay 0x6c · `ambient_generic` CAmbientGeneric 0xd4 · `beam` CBeam 0x64 · `bodyque` CCorpse 0x64
- `button_target` CButtonTarget 0x64 · `cycler` CGenericCycler 0x168 · `cycler_prdroid` CCyclerProbe 0x168 · `cycler_sprite` CCyclerSprite 0x70
- `cycler_weapon` CWeaponCycler 0xd0 · `cycler_wreckage` CWreckage 0x168 · `env_beam` CLightning 0x98 · `env_beverage` CEnvBeverage 0x6c
- `env_blood` CBlood 0x64 · `env_bubbles` CBubbling 0x74 · `env_debris` CEnvSpark 0x68 · `env_explosion` CEnvExplosion 0x16c
- `env_fade` CFade 0x64 · `env_funnel` CEnvFunnel 0x70 · `env_global` CEnvGlobal 0x70 · `env_glow` CGlow 0x6c
- `env_laser` CLaser 0x78 · `env_lightning` CLightning 0x98 · `env_message` CMessage 0x64 · `env_render` CRenderFxManager 0x64
- `env_shake` CShake 0x64 · `env_shooter` CEnvShooter 0x88 · `env_sound` CEnvSound 0x6c · `env_spark` CEnvSpark 0x68
- `env_sprite` CSprite 0x6c · `fireanddie` CFireAndDie 0x6c · `func_breakable` CBreakable 0x118 · `func_button` CBaseButton 0x13c
- `func_conveyor` CFuncConveyor 0x64 · `func_door` CBaseDoor 0x168 · `func_door_rotating` CRotDoor 0x168 · `func_friction` CFrictionModifier 0x68
- `func_guntarget` CGunTarget 0x168 · `func_healthcharger` CWallHealth 0x118 · `func_illusionary` CFuncIllusionary 0x104 · `func_ladder` CLadder 0x104
- `func_monsterclip` CFuncMonsterClip 0x64 · `func_pendulum` CPendulum 0x94 · `func_plat` CFuncPlat 0x114 · `func_platrot` CFuncPlatRot 0x12c
- `func_pushable` CPushable 0x124 · `func_recharge` CRecharge 0x118 · `func_rot_button` CRotButton 0x13c · `func_rotating` CFuncRotating 0x78
- `func_tank` CFuncTankGun 0xe4 · `func_tankcontrols` CFuncTankControls 0x68 · `func_tanklaser` CFuncTankLaser 0xec · `func_tankmortar` CFuncTankMortar 0xe4
- `func_tankrocket` CFuncTankRocket 0xe4 · `func_trackautochange` CFuncTrackAuto 0x150 · `func_trackchange` CFuncTrackChange 0x150 · `func_tracktrain` CFuncTrackTrain 0xac
- `func_train` CFuncTrain 0x118 · `func_traincontrols` CFuncTrainControls 0x64 · `func_wall` CFuncWall 0x64 · `func_wall_toggle` CFuncWallToggle 0x64
- `func_water` CBaseDoor 0x168 · `game_counter` CGameCounter 0x68 · `game_counter_set` CGameCounterSet 0x68 · `game_end` CGameEnd 0x68
- `game_player_equip` CGamePlayerEquip 0x168 · `game_player_hurt` CGamePlayerHurt 0x68 · `game_player_team` CGamePlayerTeam 0x68 · `game_score` CGameScore 0x68
- `game_team_master` CGameTeamMaster 0x70 · `game_team_set` CGameTeamSet 0x68 · `game_text` CGameText 0x90 · `game_zone_player` CGamePlayerZone 0x78
- `gibshooter` CGibShooter 0x88 · `info_intermission` CInfoIntermission 0x64 · `info_landmark` CPointEntity 0x64 · `info_null` CNullEntity 0x64
- `info_player_deathmatch` CBaseDMStart 0x64 · `info_player_start` CBaseDMStart 0x64 · `info_target` CPointEntity 0x64 · `info_teleport_destination` CPointEntity 0x64
- `infodecal` CDecal 0x64 · `item_antidote` CItemAntidote 0x64 · `item_battery` CItemBattery 0x64 · `item_healthkit` CHealthKit 0x64
- `item_security` CItemSecurity 0x64 · `item_sodacan` CItemSoda 0x64 · `item_suit` CItemSuit 0x64 · `light` CLight 0x6c
- `light_environment` CEnvLight 0x6c · `light_spot` CLight 0x6c · `momentary_door` CMomentaryDoor 0x108 · `momentary_rot_button` CMomentaryRotButton 0x12c
- `monster_hevsuit_dead` CDeadHEV 0x168 · `multi_manager` CMultiManager 0x190 · `multisource` CMultiSource 0x1ec · `path_corner` CPathCorner 0x68
- `path_track` CPathTrack 0x78 · `player` CBasePlayer 0xb8c · `player_loadsaved` CRevertSaved 0x6c · `player_weaponstrip` CStripWeapons 0x64
- `soundent` CSoundEnt 0x874 · `spark_shower` CShower 0x64 · `speaker` CSpeaker 0x68 · `target_cdaudio` CTargetCDAudio 0x64
- `test_effect` CTestEffect 0x138 · `trigger` CBaseTrigger 0x104 · `trigger_auto` CAutoTrigger 0x74 · `trigger_autosave` CTriggerSave 0x104
- `trigger_camera` CTriggerCamera 0xa8 · `trigger_cdaudio` CTriggerCDAudio 0x104 · `trigger_changelevel` CChangeLevel 0x14c · `trigger_changetarget` CTriggerChangeTarget 0x70
- `trigger_counter` CTriggerCounter 0x104 · `trigger_endsection` CTriggerEndSection 0x104 · `trigger_gravity` CTriggerGravity 0x104 · `trigger_hurt` CTriggerHurt 0x104
- `trigger_monsterjump` CTriggerMonsterJump 0x104 · `trigger_multiple` CTriggerMultiple 0x104 · `trigger_once` CTriggerOnce 0x104 · `trigger_push` CTriggerPush 0x104
- `trigger_relay` CTriggerRelay 0x70 · `trigger_teleport` CTriggerTeleport 0x104 · `trigger_transition` CTriggerVolume 0x64 · `weaponbox` CWeaponBox 0x180
- `world_items` CWorldItem 0x68 · `worldspawn` CWorld 0x64 · `xen_hair` CXenHair 0x84 · `xen_hull` CXenHull 0x64
- `xen_plantlight` CXenPLight 0x88 · `xen_spore_large` CXenSporeLarge 0x84 · `xen_spore_medium` CXenSporeMed 0x84 · `xen_spore_small` CXenSporeSmall 0x84
- `xen_tree` CXenTree 0x88 · `xen_ttrigger` CXenTreeTrigger 0x64

Removed compared to the SDK: every `monster_*` except `monster_hevsuit_dead`, all scripted,
node, and `monstermaker` entities, the HL weapon entities that aren't remapped (`weapon_crowbar`,
`weapon_9mmhandgun`, `weapon_glock`, `weapon_357`, `weapon_python`, `weapon_mp5`,
`weapon_tripmine`), their ammo, and projectiles (`grenade`, `rpg_rocket`, `hornet`,
`crossbow_bolt`, …), plus `func_vehicle`, `env_smoker`, and `item_airtank`.

---

## 6. Class hierarchy (TS classes) and TS-added virtuals

Parents come from the order of vtable stores in each inlined `GetClassPtr<X>` constructor. For
example `GetClassPtr<CTSSlowMotion>` (`000733dc`) allocates 0x108 bytes and stores
`CBaseEntity_virtual_table`, then `CTSSlowMotion_virtual_table`. New slots come from comparing
`vtables.tsv` lengths against the parent.

```
CBaseEntity (67 slots in TS; 7 TS slots prepended, see 6.1)
├── CTSPhysicObject            0x64  +67 WaitThink, +68 SavePhysics, +69 RestorePhysycs
│   ├── CTSWorldGun            0xd8  "TSWorldGun"  (CanUsedTroughWalls, ShouldCollide, Use, WaitThink)
│   ├── CTSFlag                0xb0  "ts_flag"
│   └── CTSGrenade             (abstract) +70 BounceTouch
│       ├── CTSKnife           0xa4  "knife"        (ShouldCollide → 1)
│       ├── CM61Grenade        0x94  "m61_grenade"
│       └── CTSShrapnel        0x9c  "shrapnel"
├── CTSGroundWeapon            0xb4  "ts_groundweapon"  +67 OnGround, +68 GetWeapon
│   ├── CTSBigPistolWeapon / CTSSMGWeapon / CTSRifleWeapon / CTSShotgunWeapon / CTSKnifeWeapon
│   │                              +69 Random<Kind>() (picks a random weapon of that class)
│   ├── CTSGrenadeWeapon, CTSSniperWeapon, CTSMGWeapon, CTSKatanaWeapon (Spawn only)
│   └── CTSPistolWeapon        (vtable only, never linked)
├── CTSGroundAmmo              0xac  "ts_groundammo"  +67 OnGround
│   └── CTSBigPistol/SMG/Rifle/Shotgun/SniperAmmo 0xac; CTSPistolAmmo (never linked)
├── CTSAmmoPack                0xa8  "TSAmmoPack"
├── CTSObjective               0x64  (abstract) +67 Freeze
│   ├── CTSBomb 0x88 "ts_bomb", CTSHack 0x80 "ts_hack", CTSTeamEscape 0xf8 "ts_teamescape"
├── CTSWinGiver                0x7c  "ts_wingiver"
│   └── CTSScoreGiver          0x7c  "ts_scoregiver"
├── CTSObjectiveManager        0xa0  +67 Reset
├── CTSObjectivePointer 0x78, CTSBriefcase 0xac, CTSCustomTarget 0x878, CTSDMHill 0x80,
│   CTSDeadCorpse 0x6c, CTSMapGlobals 0x6c, CTSSellZone 0x68, CTSSlowMotion 0x108,
│   CTSSlowMotionPoint 0xf8, CTSTimer 0x6c, CVipEscape (vtable only, never linked)
├── CPointEntity → CTSEmitter 0x114, CTSFog 0x64, CTSParticle 0x224, CTSWind 0x70, CInfoBreakable 0x6c
└── CBaseDelay
    ├── CTSPlayerAmount        0x13c "ts_playeramount"
    └── CBaseAnimating
        ├── CTSPowerUp         0x9c  "ts_powerup" → CTSSuperJump 0x9c "item_longjump"
        ├── CBaseToggle → CTSModel 0x104;  CBaseTrigger → CTSTrigger 0x110
        ├── CBaseToggle → CBaseMonster → CBasePlayer 0xb8c "player"
        └── CBasePlayerItem → CBasePlayerWeapon (+95 AlternateAttack) → CTSGun 0xa10 "weapon_tsgun"
```

There are also non-entity TS classes with no vtables: `CTSGameRules` (static `TSGameRules`
`001781a0`, 41 methods: rounds, teams, objectives, votes, The One, global slow-mo),
`CBulletManager` (embedded in `TSGameRules+0x1864`, ticked when `+0x5864` is set),
`CTSStunt` (per-player stunt state machine), `CTSAnimation`, and `CTSSharedEmitter`
(`s_Emitter` singleton, 512 emitter/particle slots).

### 6.1 TS-added virtual slots

`CBaseEntity` (`00124bc0`-family vtables; base implementations near `000ac5ac`):

| Slot | Method | Base impl | Overrides / purpose |
|---|---|---|---|
| 0 | `BreakableRespawn(bool)` | `000ac5ac` (empty) | `CBreakable` `00074e84`, `CBaseDoor` `000b5604`, `CRotDoor` `000b7838`: rebuild breakables on round restart |
| 1 | `CanUsedTroughWalls()` | `000ac5b0` → false | true for `CTSFlag`, `CTSWorldGun`, `CTSGroundWeapon`, `CTSGroundAmmo` (pick up through thin walls / `+use` traces) |
| 2 | `GiveSlowMul()` | `000ac5b4` → `FixedSlowAmt(pev->fuser1)` | `CBasePlayer` `00092960` |
| 3 | `GoSlow(float, char)` | `000ac5e0`: `pev->fuser1 = f` | `CBasePlayer` `000929d0` |
| 4 | `InSlow()` | `000ac5f4` | `CBasePlayer` `0009298c` |
| 5 | `IsObjective()` | `000ac628` → false | `CTSObjective`, `CTSWinGiver` → true |
| 6 | `EnableObjective(bool)` | `000ac62c` (empty) | `CTSBomb`, `CTSHack`, `CTSTeamEscape`, `CTSObjective`, `CTSWinGiver` |
| 14 | `OnFreeEntPrivateData()` | `000ac650` (empty) | none |
| 15 | `ShouldCollide(CBaseEntity*)` | `000ac654` → 1 | `CTSKnife`, `CTSWorldGun` |
| 56 | `UpdateOnRemove()` | `000e2ccc` | virtual in TS (not in the SDK of the time) |

Because slots 0–6 come **before** `Spawn`, every SDK slot index is shifted by +7 compared with an
SDK binary (TS `Spawn` = slot 7, `Think` = 52, `Touch` = 53, `Use` = 54).

**The per-entity slow-motion factor is stored in `pev->fuser1`.** That's why `clientdata.fuser1`
(22 bits, ×128) and `weapon_data.fuser1` are networked (§7).

`CBasePlayer` (vtable `001141c0`, 91 slots) adds no new slots beyond the SDK's `CBasePlayer`
set (84 Jump, 85 Duck, 86 PreThink, 87 PostThink, 88 GetGunPosition, 89 UpdateClientData,
90 ImpulseCommands). It overrides the TS base slots 2–4 (slow motion). All other TS player
behaviour is in non-virtual methods (`TSInit`, `UsePowerUp`, `DropWeapon`, `TakeFlag`, …).
`CBasePlayerWeapon` adds slot 95 `AlternateAttack` (TS, overridden by `CTSGun::AlternateAttack`
`00081ba8`, the third attack button).

---

## 7. Networking hooks

### 7.1 `AddToFullPack` (`000af180`) and `CreateBaseline` (`000af81c`)

The culling is stock: `EF_NODRAW` (unless host), `modelindex`/model, `FL_SPECTATOR`, PVS check,
`FL_SKIPLOCALHOST`, `groupinfo` with `g_groupop`. The copy is stock: `entityType` = 2 for
`FL_CUSTOMENTITY`, `EFLAG_SLERP` for non-moving animated entities, aiment, and owner only when
it's a client. The TS differences:

| Field | TS behaviour |
|---|---|
| render* (classname `"WorldGun"` with `this+0xd0 == host`, or `"knife"` with `this+0x8c == host`) | Forced to `rendermode 0, renderamt 2, renderfx 19 (kRenderFxGlowShell), rendercolor (100,100,100)`. Dropped guns or knives that belong to the viewing client get a glow shell (inferred: the owner's own drop or throw). The runtime classname is `"WorldGun"`, not the link name `TSWorldGun` (§1.1). |
| `iuser4` | Copied for **both** players and non-players. For players it carries the TS stunt/state bits (`iuser4 & 0x30` = lying/stunt, see `UpdatePlayerState`). |
| `playerclass` | Copied only for non-players (stock "decalable glass" hack). |
| `velocity` | Copied for players. This is a TS addition, but `delta.lst`'s `entity_state_player_t` doesn't send `velocity`, so it's unused on the wire. |
| `basevelocity, weaponmodel, gaitsequence, spectator, friction, gravity, usehull, health` | players, stock |
| `team` | never set, although `delta.lst` lists `team` for players |

`CreateBaseline` is stock. Players get `colormap = eindex`, `movetype = MOVETYPE_WALK`,
`solid = SOLID_SLIDEBOX`, `friction = gravity = framerate = 1.0`.

### 7.2 `UpdateClientData` (`000b0294`)

It copies the stock fields: flags, health, viewmodel, water, weapons, origin, velocity, view_ofs,
punchangle, duck/step/swim times, waterjumptime, physinfo, maxspeed, fov, weaponanim, pushmsec,
iuser1, iuser2. Then the TS-specific mapping, which matches the extended `clientdata_t` in
`ts/delta.lst` (`vuser1..4` as 10-bit signed values, `fuser1` 22 bits, `iuser4` 32 bits):

| clientdata field | Source | Meaning |
|---|---|---|
| `fuser1` | `pev->fuser1` | Slow-motion factor (§6.1) |
| `iuser4` | `pev->iuser4` | Stunt/state bitfield (prediction) |
| `m_flNextAttack` | `pl+0x12c` | stock `CBaseMonster::m_flNextAttack` |
| `vuser1[1]` | `pl+0x724` | Active powerup bits (bit 1 slow-mo, bit 8 slow pause, …) |
| `ammo_rockets`, `ammo_cells` | `pl+0x3c`, `pl+0x40` | `CBaseEntity::ammo_rockets` / `ammo_uranium` (stock slots) |
| `ammo_shells` | ammo count of the linked weapon id (`def+200`, or `def+0xcc` if that's −1; akimbo/alt partner, inferred) | |
| `m_iId` | `GetItemInfo().iId` of the active item | 16 = CTSGun |
| `vuser3[0]` | `gun+0xc8` | Active TS weapon id (only if `m_iId == 16`, else 0) |
| `vuser3[1]`, `vuser3[2]` | slot byte `+2`, slot int `+0x10` (or `gun+0xa00`/`+0x9fc` with no slot) | Fire mode / extra (inferred) |
| `vuser4[0]`, `vuser4[1]`, `vuser4[2]` | slot byte `+0x24`, slot int `+4` (clip), slot int `+0xc` | |
| `ammo_nails` | slot int `+0x1c` | |
| `vuser2[0]`, `vuser2[1]`, `vuser2[2]` | slot `+8`, reserve ammo `gun+0xd4[def->ammotype]`, slot byte `+0x2c` | |
| `vuser1[2]` | slot `+0x14` | Attachment mask (same as `ActItems`) |

Here "slot" is `*(gun+0xcc)`, the active weapon's 0x38-byte state block. The exact names of the
slot fields belong in the weapons document.

### 7.3 `GetWeaponData` (`000b00ac`)

Stock. It walks the 6 `m_rgpPlayerItems` buckets (`pl+0x9f8`), takes `GetWeaponPtr()`
(slot 84), checks `UseDecrement()` (slot 100), and calls `GetItemInfo` (slot 70). For
`iId < 32` it fills `m_iClip`, the three timers (clamped ≥ −0.001), `m_fInReload`,
`m_fInSpecialReload`, `fuser1 = pev->fuser1` (slow-mo), `fuser2/fuser3 = m_flStartThrow/
m_flReleaseThrow`, and `iuser1..3 = m_chargeReady/m_fInAttack/m_fireState`. In practice only the
CTSGun (id 16) is ever present. Its `UseDecrement`, `ShouldWeaponIdle`, and `iItemSlot` return
constants (`0008726c`, `00087274`, `00087264`).

### 7.4 Encoders and `delta.lst`

`RegisterEncoders` adds `Entity_Encode`, `Custom_Encode`, and `Player_Encode`, all stock: they
unset origin for the local player, unset origin/angles for entities with both `impacttime` and
`starttime`, and handle `MOVETYPE_FOLLOW`+aiment. `ts/delta.lst` changes:

* `clientdata_t`: adds `vuser1..4[0..2]` (10-bit signed), `fuser1` (22 bits, ×128),
  `fuser2..4` (2 bits), `iuser1..3` (5 bits), `iuser4` (32 bits), and `ammo_*`/`m_iId`.
* `entity_state_t` and `entity_state_player_t`: add `iuser4` (32 bits). Players also get `team`
  and `playerclass` (4 bits). **The `team` and `playerclass` lines lack trailing commas** in
  `delta.lst`. The file evidently loads in GoldSrc. A stricter parser (FWGS
  `Delta_ParseField`) should be checked.
* `weapon_data_t`: stock field set.

---

## 8. Rust recreation notes (`mymod`)

What maps directly onto the existing crates:

| TS piece | mymod today | Action |
|---|---|---|
| `GiveFnptrsToDll` / `GetEntityAPI2` / `GetNewDLLFunctions` | `crates/server/src/lib.rs` (all three exist; `goldsrc::server::init`) | Keep. Also export the legacy `GetEntityAPI` only if Steam GoldSrc needs it (FWGS tries `GetEntityAPI2` first). Skip `Server_GetBlendingInterface`, since TS's returns 0 anyway. |
| `dll_functions()` table | `lib.rs::dll_functions`, with stubs for save/restore | Matches §1.1. Port `ClientKill` (1 s delay), `ServerDeactivate` (emitter reset), and `ClientConnect`/`ClientDisconnect` (`ts_playeramount` hook). |
| `OnFreeEntPrivateData` / `ShouldCollide` | `lib.rs` (`on_free_private_data` → `world::free`, `should_collide` → 1) | Add an `Entity::should_collide` trait method (needed for `TSWorldGun` and `knife`) and honour `FL_KILLME`. |
| Entity linking | `crates/server/src/entities.rs` `link_entities!` macro, `world.rs` slab | Generate the 38 TS classnames plus the 17 HL remaps plus whatever stock entities maps need (`worldspawn`, `info_player_*`, `func_wall`, `func_breakable`, `func_door*`, triggers, `env_*`, `ambient_generic`, `light*`, `multi_manager`, `game_*`). Drop monsters and xen. |
| `AddToFullPack` / `CreateBaseline` / `UpdateClientData` | `crates/server/src/net.rs` | Extend `update_client_data` with the §7.2 mapping, written as typed fields (`slow_factor`, `stunt_bits`, `weapon_id`, …) in a `shared::protocol` struct so the client prediction reads the same layout. Add the glow-shell override and `iuser4` copy to `add_to_full_pack`. |
| `GetWeaponData` | `lib.rs::get_weapon_data` (stub) | Only one "weapon" (the TS gun container) is needed. Mirror §7.3 with the TS weapon id instead of `m_iId 16` if the client is redesigned. |
| User messages | `shared/src/protocol.rs` (only `Health`), `goldsrc/src/msg.rs` (`MsgReader`) | Define all §3.2 TS messages in `shared::protocol` (name ≤11 chars, size, field list) and generate the writer and reader from one table. Register in `pfnServerActivate` once (TS does this) or in GameInit. Use only the TS replacements (`TSHealth`, `TSArmor`, `PTakeDam`, `TSFade`), not `Health`/`Battery`/`Damage`/`ScreenFade`. |
| Cvars | none | Add a `cvars.rs` with `static mut cvar_t` (or leaked `Box`) for the §2.1 set. Decide deliberately whether `initial_cash`, `cashforwin`, `cashforlose`, `respawnnumber`, and `dmgreport` should be real cvars. In TS they're constants, because they're never registered. |
| Server commands | none | `globalslow`, `restartround`, `weaponrestriction`, `loadweapons`, `saveweapons` through `pfnAddServerCommand` (needs `'static` names). |
| Client commands | `lib.rs::client_command` | Table-driven parser for §4, with prefix commands (`weapon_`, `drop_`, `cutwire_`, `lasclr_`) and the `tkw`/`tki`/`tka` loadout lists. |
| Movement/stunts | `shared/src/pm.rs` | The `mj` physinfo key, the `iuser4` stunt bits, and `fuser1` slow-mo must agree between server and client pm. |

What still has to be built (none of it exists in mymod):

1. A two-level game rules model: a polymorphic rules trait (DM/Teamplay/The One/LMS, from
   `DecideGamePlay`) plus a TS round/objective controller (`CTSGameRules`: rounds, cash, team
   win, objectives, votes, global slow-mo, bullet manager).
2. The player extensions: cash, inventory weight (`TSSpace`), powerups (`PwUp`, `PwUpTime`),
   melee bar, stunt state (`CTSStunt`), observer/respawn timing, flag carrying, bomb wires, and a
   "last sent" cache for every HUD message above (TS sends from `UpdateClientData` in `PostThink`).
3. The single-container weapon model (`CTSGun`: 38 weapon slots, attachments, akimbo, fire modes,
   and the `WeaponInfo`/`WStatus`/`ActItems` sync) and the loadable weapon parameter table
   (`CustomWP`).
4. The TS map entities from §5.1, the ground weapon/ammo/powerup pickups, and the objective
   family.
5. A per-entity slow-motion API: a `slow_factor` stored in `pev.fuser1` and networked through
   `clientdata.fuser1` and `weapon_data.fuser1` (this matches rust.md §11, "slow motion").
6. Client-side debris and particles (`TSFrags`, `TSPSys`) and the extended `delta.lst`. Ship
   TS's file, but add the missing commas.
