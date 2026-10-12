# TS 2.1 vs TS 3.0: client-side gameplay and the wire protocol

Scope: user messages (both `LinkUserMessages`, both clients' hooks, payloads), `delta.lst`, client
weapon prediction and client pmove, client cvars and input, events, play-relevant HUD. For each
item there's a pointer into the Rust port (`~/dev/hl/rust-hlmod-the-specialists`, "port" below).

Binaries and evidence:

* **2.1:** `ts21/server-win` (mp.dll) and `ts21/client` (client.dll). The 2.1 client.dll is an
  ebp-frame (debug-like) MSVC build with incremental-link `thunk_` jumps.
* **3.0:** `server-win` (mp.dll), `server` (.so) and `client` (client.dll).
* **Addresses:** Ghidra = objdump for all the PE files.

**Conventions.**

* "**Rust 2.1 mode**" means a runtime switch in the port that keeps the **3.0 wire protocol** (the
  3.0 client.dll and the port's client must keep working) and changes only the numbers and rules.
  Where 2.1 sent something in a different shape, the right approach is almost always to **keep the
  3.0 encoding** and feed it the 2.1 values.
* "UNVERIFIED" marks claims I didn't confirm in disassembly.

---

## 0. Summary table

| Feature | TS 2.1 | TS 3.0 | 2.1 evidence | 3.0 evidence | Rust port location |
|---|---|---|---|---|---|
| User messages registered | 63. Extra: `Flashlight`(2), `FlashBat`(1), `DelObj`(1), `GloSlow`(1), `KAlign`(4) | 64. Extra: `TSFade`(-1), `ShowObj`(2), `TSFlag`(4), `TSMBlur`(2), `PlInfo`(3), `TSPSys`(-1) | `LinkUserMessages` 0x1002a3e0 | `LinkUserMessages` 0x10032a70 | `shared/src/protocol/mod.rs` `MESSAGES`; `server/src/messages.rs` |
| `WStatus` size/payload | 2: `B id, B owned` (client sets grid clip = 1) | 3: `B id, B owned, B count` | srv `CTSGun::UpdateClientData` 0x1004d8c0 (send at decomp CTSGun.c:686); cl 0x1008d4c0 | cl 0x1004f990 | `server/src/weapons/net.rs` `send_wstatus`; `shared/src/protocol/weapons.rs` |
| `TSFrags` size/payload | 13 fixed: `Co×6, B type`. Type 0 breakable, 1 explosion, 2 knife sparks (`scintille2.spr`) | -1: type 0 adds `Co hit×3, Co dir×3, L dmgbits, Co dmg`. Type 2 = `scintille_metal` | cl 0x10088020; srv `CBreakable::Die`, `CTSKnife::BounceTouch` | cl 0x1004bd50 | `shared/src/protocol/effects.rs` |
| Objective visibility | `Objective` makes a slot (0x4c bytes, no visible flag). `DelObj(idx)` clears it. | `Objective` stores the slot with **visible = 0**. `ShowObj(idx,vis)` toggles it. | cl 0x10087d50 / 0x10087ed0; srv `FUN_10046690` | cl 0x1004bb70 / 0x1004bc80 | `server/src/rules/*` objective senders |
| `KFuPower` | `B` 0..255, clamped 0..100 by the client. `WeaponInfo` with id 0 also sets the bar from its clip byte. | `C` −100..100 (bar ≤ 0.01 drawn as an empty red frame). `WeaponInfo` id 0 does **not** touch the bar. | cl 0x1008d000, 0x1008d1a0 | cl 0x1004f6f0, 0x1004f800 | `server/src/weapons/net.rs::send_kfu_power`; `client/src/hud/weapons.rs` |
| `GloSlow`, `KAlign` | Registered and hooked (`GloSlow` → slow-mo icon flag; `KAlign` → 2 coords into a view-kick vector) but **never sent** | absent | no `MessageBegin` with `_DAT_100cbc94`/`_DAT_100cbc98` | — | nothing to do |
| `Flashlight`/`FlashBat` | SDK flashlight messages, sent (`FUN_1002cc20`/`FUN_1002ccd0`, `UpdateClientData`) | not registered, not hooked | `_send21.txt` | — | don't send in 2.1 mode |
| `delta.lst` | `clientdata_t vuser1[1]`: `DT_SIGNED\|DT_FLOAT, 16, 1.0` | `10, 1.0`. Plus one commented line. **Nothing else differs.** | `ts21/delta.lst:48` | `ts_original/delta.lst:49` | `game/ts/delta.lst` (port = 3.0 copy) |
| `clientdata.fuser1` (time scale) | **0 = normal speed**. Otherwise `frametime *= (f ≥ 0.1 ? f : 0)`. | **1.0 = normal**. Always `frametime *= (f ≥ 0.1 ? f : 0)`, so 0 freezes. | cl pmove `FUN_1005f4f0` | cl `PM_PlayerMove` 0x1002e330 | `server/src/net.rs::update_client_data`, `shared/src/pm/mod.rs` |
| `clientdata` extras | `fuser2` = pl+0xadc, `fuser3` = pl+0xad4 (but delta sends 2 bits, so useless); `vuser1[0]` = pl+0x20; `ammo_shells` = pl+0x2c (SDK buckshot) | `vuser1[0]` unused; `ammo_shells` = paired akimbo/single clip; no-slot case sends `vuser3[1..2]` | srv `pfnUpdateClientData` 0x1000f710 | srv 0x10012180 | `server/src/net.rs`, `player::fill_client_data` |
| Predicted weapon timer step | `t -= msec/1000.0` (double `fdiv`), **unscaled**. Also decrements `clientdata.fuser2/fuser3`. | `t -= msec·0.001·max(fuser1,0.01)·(DFR ? 1.5 : 1)` | cl `FUN_10017f70` 0x10018918.. | cl 0x10003830 | `client/src/prediction/gun.rs::post_think`/`frame_time`; `shared/src/weapons/gun.rs::decrement_timers`; `spread.rs::timer_step` |
| Fire delay slow-mo and DFR | Applied **at fire time**: `delay = base·(DFR && auto ? 0.5 : 1)`, then `delay /= 0.15` with SlowPause, else `delay *= (fuser1 == 0 ? 1 : 1/fuser1)` | Applied to the **timer step** (above). Semi on an auto-capable weapon = 0.1 s. | cl `FUN_100213a0` tail; srv `FUN_1004b400` tail | srv/cl `StandardFire` | `shared/src/weapons/gun.rs::standard_fire` (~l.797-840) |
| Predicted alternate attack (`IN_CANCEL` 0x40) | **not predicted** (no branch in the client `ItemPostFrame`) | `IN_CANCEL && fuser4 ≤ 0` → `AlternateAttack` | cl `FUN_10025f40` | cl 0x1000b7b0 | `shared/src/weapons/gun.rs::item_post_frame` (l.585) |
| Client spread-penalty decay | Only when `runfuncs`. `pen -= (now − last)·S·0.1` with `S = max(TSSlowMo,0.1)` (1 when 0). No DFR. | Per command: `pen -= dt·0.1`, where dt includes `fuser1` and DFR | cl 0x10018a.. (`DAT_102964bc`) | cl `0x1009ed8c` | `client/src/prediction/gun.rs`; `shared/src/weapons/spread.rs` |
| Speed-dependent ground accel (`PM_GetAccelBySpeed`) | **absent** (no `330.0f` constant in either 2.1 dll) | `maxspeed ≥ 330 ? 1.1 : 0.6+(maxspeed−210)/120·0.5` | float scan | cl 0x1002b7f0, srv .so 0xfdcc4 | `shared/src/pm/mod.rs` `accel_by_speed_x` (l.806/815/1829) |
| Anti-script key gate | **none**: `+attack`, `+jump`, ... run from `alias`/`wait` scripts | 9 `+` commands need a physical key that frame | cl `+attack` 0x10050b40 etc. | cl 0x10026210 etc. | `client/src/input.rs` l.207-257 (`gate_open`) |
| `cl_attackswitch` | absent (`+attack2` → 0x800, `+alt2` → 0x40, fixed) | swaps `+attack2`/`+alt2` for guns | cl 0x10050810/0x10050a80 | cl 0x10025f40/0x10026110 | `client/src/input.rs` |
| Crosshair suppression | Weapon ∈ {0 kung fu, 24 M61, 25 knife, 34 katana, 35 seal knife} **or Barrett (18) unless FOV < 40** | Weapon ∈ {0, 24, 25, 34, 35}. Barrett has a crosshair unscoped. | cl `FUN_1008b960` | cl `DrawCrosshair` 0x1004e9f0 | `client/src/hud/weapons.rs::draw_crosshair` (l.526, `matches!(h.weapon, 0\|24\|25\|34\|35)`) |
| Divestep (dive-ready) indicator | Drawn only when the crosshair is. Weight limits `used ≤ 21` (and `armor ≤ 0` when `m_Teamplay > 1`) / `≤ 41` / `≤ 71`, with `used = 81 − TSSpace`. | Always drawn (not scoped). Limits `≤ 41 / ≤ 51 / ≤ 61`. | cl 0x1008c1c0, 0x1008c0f0/c160/c190 | cl 0x1004ef50, 0x1004eec0/eef0/ef20 | `client/src/hud/weapons.rs::divestep_layout` (l.600) |
| Slow-mo HUD icon | `sprites/slowmotion.spr` top centre while `TSSlowMo ≠ 0` or `GloSlow` | none (screen tint/fade instead) | cl `FUN_10085d90` tail | — | cosmetic |
| `SetFOV` | Applied instantly (no smoothing) | Smoothed by `UTIL_ApproachFOV` in `CHud::Think` | cl 0x10084710 | cl 0x10049570, 0x10049760 | `client/src/hud/mod.rs` l.260/689 |
| Events | 9 precached (fire, coldcock, firelinked, empty, pump, closecombat, reload, knife, katana). `grenade.sc` ships but is unused. | 11 (+`draw.sc`, `grenade.sc`, spectator in-eye only) | srv strings `CBasePlayerWeapon::Restore`(=Precache); cl `FUN_1001ec80` | `CTSGun::Precache` | `client/src/events.rs`, `shared` `Event` |
| Client cvars | 91 | 107. 3.0 adds `cl_attackswitch`, `cl_buykevlar`, `cl_camtype`, `cl_gore`, `cl_lasercolor`, `cl_motionblur`, `cl_showequipment`, `cl_slowfade`, `cl_thirdperson`, `cl_thirdtransparency`, `gl_fog*`, `hud_color`. `cl_bob` 0.01/flags 0 → 4.0/flags 1. | `_cvars21.txt` method below | doc §2.1 | `client/src/input.rs` cvars |
| Commands | + `buyitem`, `buylast` (empty stubs), `+strafe`, `+mlook` | − those | cl `FUN_10089250` | doc §2.2 | — |

---

## 1. User messages

### 1.1 Registration lists (`LinkUserMessages`)

2.1 is `0x1002a3e0` (decomp `ts21/server-win/decomp/global_10021f00.c`); 3.0 mp.dll is
`0x10032a70`. Both are guarded by `if (gmsgSelAmmo == 0)`. Listed in registration order
(name, size); `&DAT` entries are resolved (`0x10095d2c` = "MOTD", `0x10095c2c` = "PwUp").

```
#   TS 2.1              TS 3.0
1   SelAmmo 4           SelAmmo 4
2   CurWeapon 3         CurWeapon 3
3   Geiger 1            Geiger 1
4   Flashlight 2   *    Health 1
5   FlashBat 1     *    Damage 12
6   Health 1            Battery 2
7   Damage 12           Train 1
8   Battery 2           HudText -1
9   Train 1             SayText -1
10  HudText -1          TextMsg -1
11  SayText -1          WeaponList -1
12  TextMsg -1          ResetHUD 1
13  WeaponList -1       InitHUD 0
14  ResetHUD 1          GameTitle 1
15  InitHUD 0           DeathMsg -1
16  GameTitle 1         ScoreInfo 9
17  DeathMsg -1         TeamInfo -1
18  ScoreInfo 9         TeamScore -1
19  TeamInfo -1         GameMode 1
20  TeamScore -1        MOTD -1
21  GameMode 1          ServerName -1
22  MOTD -1             AmmoPickup 2
23  ServerName -1       WeapPickup 1
24  AmmoPickup 2        ItemPickup -1
25  WeapPickup 1        HideWeapon 1
26  ItemPickup -1       SetFOV 1
27  HideWeapon 1        ShowMenu -1
28  SetFOV 1            ScreenShake 6
29  ShowMenu -1         ScreenFade 10
30  ScreenShake 6       TSFade -1        * 3.0 only
31  ScreenFade 10       AmmoX 2
32  AmmoX 2             TeamNames -1
33  TeamNames -1        VGUIMenu 1
34  VGUIMenu 1          WeaponInfo 6
35  WeaponInfo 6        ClipInfo 1
36  ClipInfo 1          WStatus 3        * size 2 -> 3
37  WStatus 2           ActItems 2
38  ActItems 2          KFuPower 1
39  KFuPower 1          TSHealth 1
40  TSHealth 1          TSArmor 1
41  TSArmor 1           TSState 1
42  TSState 1           TSCash 2
43  TSCash 2            TSSpace 1
44  TSSpace 1           NextStunt 1
45  NextStunt 1         PwUp 3
46  PwUp 3              PwUpTime 1
47  PwUpTime 1          RoundTime 2
48  RoundTime 2         Objective -1
49  Objective -1        ShowObj 2        * 3.0 only
50  DelObj 1       *    Wires 3
51  Wires 3             SrvSett 3
52  GloSlow 1      *    TSPAward 2
53  SrvSett 3           TSBTime 1
54  TSPAward 2          TSHVoice 1
55  TSBTime 1           TSFlag 4         * 3.0 only
56  TSHVoice 1          CustomWP -1
57  CustomWP -1         Spectator 2
58  Spectator 2         TSMBlur 2        * 3.0 only
59  TSMessage -1        TSMessage -1
60  TSSlowMo 2          TSSlowMo 2
61  PTakeDam 13         PTakeDam 13
62  TSFrags 13     *    TSFrags -1       * size 13 -> -1
63  KAlign 4       *    PlInfo 3         * 3.0 only
64                      TSPSys -1        * 3.0 only
```

Order doesn't matter on the wire: the engine sends `svc_newusermsg` (name, id, size) and clients
hook by name. **Sizes do matter**: the engine parses a fixed-size message by the registered size.
The port registers exactly the 3.0 table (`shared/src/protocol/mod.rs` `MESSAGES`, checked
identical), plus `VoiceMask`/`ReqState`/`Logo` elsewhere. **In 2.1 mode, keep registering the 3.0
table unchanged.** No 2.1-only message is needed: `GloSlow` and `KAlign` were never sent, and
`Flashlight`, `FlashBat` and `DelObj` have 3.0 equivalents or are irrelevant (see below).

### 1.2 Client hooks

* **2.1 client** (75 `pfnHookUserMsg` calls through `DAT_102e14a0`; the TS ones are in
  `FUN_10085010` (status) and `FUN_10089250` (weapons)). Compared with 3.0 it has these extra
  hooks: `DelObj`, `FlashBat`, `Flashlight`, `GloSlow`, `KAlign`.
* **3.0 client** (74 named plus `&DAT` Logo/MOTD/PwUp). Extra hooks: `PlInfo`, `ShowObj`,
  `TSFade`, `TSFlag`, `TSMBlur`, `TSPSys`.
* Both hook the TFC leftovers (`ValClass`, `Feign`, `Detpack`, `BuildSt`, `RandomPC`, `Concuss`,
  `SecAmmo*`, `Status*`, `AllowSpec`). Neither hooks `ScreenFade`/`ScreenShake` (the engine
  handles them) or `SelAmmo`.

2.1 client message readers: `BEGIN_READ` 0x10056240, `READ_CHAR` 0x10056290, `READ_BYTE`
0x10056300, `READ_SHORT` 0x10056370, `READ_LONG` 0x10056420, `READ_STRING` 0x10056560,
`READ_COORD` 0x100565f0, `READ_ANGLE` 0x10056620, `READ_HIRESANGLE` 0x10056650.

### 1.3 Payload comparison, message by message (2.1 server sender → 2.1 client reader vs 3.0)

Senders were recovered by scanning every `pfnMessageBegin(dest, gmsgX)` in each decomp and
reading the `pfnWrite*` sequence that follows. Only differences are listed in detail.

| Msg | 2.1 payload (server write / client read) | 3.0 payload | Compatible? What a 2.1-mode server sends |
|---|---|---|---|
| TSHealth / TSArmor / TSState / TSCash / TSSpace | B / B / B / S / B, same fields | same | identical |
| PwUp | `S flags, B value`. The client handler (0x10087b90) is identical to 3.0's: `flags & 0x104` sets the permanent kung-fu (4) / super-jump (0x100) icons, else timed powerup | same | identical |
| PwUpTime | `B secs` → `expire = time + secs` | same | identical |
| RoundTime | `B secs, B mode` (senders write mode 0 or 2) | same; 3.0 also sends it from `InitHUD` | identical |
| TSMessage | `B r,g,b, B flags, B secs, Str` (client clamps \|secs\| ≤ 100) | same | identical |
| PTakeDam | `Co×6, B` (one 2.1 sender, `FUN_100439e0`, writes the hit-direction coords as 0) | same | identical layout |
| TSSlowMo | `Co (factor×100)`. Client: `slow = v/100`. Plays `goslow.wav` on the 0 → ≠0 edge. 2.1's client uses it for tempent/HUD time **and** for prediction spread decay (§3.2). | same layout. The client maps 0 → 1.0 and eases it for cosmetics only. | send 3.0 meaning (0 or factor×100) |
| TSBTime | B | same | identical |
| TSPAward | `B cl(1..64), B award` | same | identical |
| SrvSett | keys 0 realbullet, 1 dmcashbased/usecash, 2 ammo count (`FUN_1001d970` rewrites max ammo), 3 restriction. Sent from `GameDLLInit` (ALL) and `FUN_100451c0` (ONE, per-client init). | same keys 0..3. Unknown keys are ignored by both the 3.0 client and the port client (`hud/state.rs:561`). | identical. **A new key 4 = "gameplay mode" is free** (§5). |
| TSHVoice | B 0 = success, 1 = failed | same | identical |
| CustomWP | `Str "%i %f %f %f %f %i"` | same | identical |
| Spectator | `B cl, B isObserver` | same, with the TS-modified handler | identical |
| ActItems | `B cl, B bits` (ALL) | same | identical |
| NextStunt | `B tenths`. Client: `+0x34 = time + v/10`, used by the divestep cooldown colour. | same | identical |
| Wires | `B, B, B` | same | identical |
| WeaponInfo | `B id, B clip, S reserve, B firemode, B attachments`. No slot: `B id, B round(kfu), S 0, B 0, B 0`. **The 2.1 client, when id == 0, copies clip into the KFu bar** (clamped 0..100). | Same layout. The 3.0 client ignores clip for id 0 (it only does the third-person switch). 3.0 also accepts id 0xff = "keep". | Same layout. In 2.1 mode the server **must also send `KFuPower` on every bar change** (the 3.0 client and the port prediction read the bar only from `KFuPower`, `client/src/state.rs` `kfu_power`). |
| ClipInfo | `B clip`, sent by 2.1 `CTSGun::UpdateClientData` | registered and hooked, **never sent** | don't send (or send; it's harmless) |
| WStatus | `B id, B owned` (size 2). Client: grid id = owned ? id : −1, grid clip = **1**. | `B id, B owned, B count` (size 3). The 3.0 client reads the count into the grid. | **Must** send 3 bytes. Count = the 2.1 equivalent (1 for an owned weapon, or the item count for grenades/knives), so the 3.0 equipment list shows correct numbers. |
| KFuPower | `B` (`WriteByte(round(bar))`). Senders: hit (`FUN_100439e0`: `bar -= dmg`, clamp 0) and kung-fu attack (`FUN_1004de10`) | `C` (`WriteChar`), clamped −100..100. Sender: `UpdateMeleeBar`. | Value range 0..100 fits both encodings: send `C`. |
| Objective | `Co x,y,z, B idx, Str` → slot (0x4c bytes: pos + 64-char label), visible as soon as it exists. idx 0 clears all. | Same layout, slot 0x50 bytes with a `visible` byte that `Objective` does **not** set | Send `Objective` followed by `ShowObj(idx,1)`. Replace 2.1's `DelObj(idx)` with `ShowObj(idx,0)`. |
| DelObj (2.1 only) | `B idx`: memset slot. Sender `FUN_10046690` (ALL). | — | → `ShowObj(idx, 0)` |
| TSFrags | 13 bytes: `Co origin×3, Co size/angles×3, B type`. Type 0 breakable (`CBreakable::Die`, `CBaseEntity::TakeDamage`), type 1 explosion (`Co pos×3, Co radius, 0, 0`), type 2 knife-on-wall sparks (`CTSKnife::BounceTouch`, `FUN_10043720/870`). | -1. Type 0 needs `+Co hit×3, Co dir×3, L dmgbits, Co dmg`. Types 1 and 2 are the same 13 bytes. 3.0 itself no longer sends type 2. | Use the **3.0 type 0 layout**: the 3.0 client reads past the end of a 13-byte type 0 (garbage gibs). Types 1/2 are fine as-is. |
| Flashlight / FlashBat (2.1 only) | SDK `B on, B battery` / `B battery` | not registered | Don't send. The 3.0 client has no hook, and TS flashlights are weapon attachments (ActItems). |
| GloSlow / KAlign (2.1 only) | GloSlow: `B` → status+0xfc0 (forces the slow-mo icon). KAlign: `Co, Co` → `DAT_10320fd0` (a view-kick vector read by view code). **No send site in 2.1 mp.dll** (globals `_DAT_100cbc94`/`_DAT_100cbc98` are only written by the registration). | — | nothing |
| HideWeapon, ScoreInfo, TeamInfo, TeamScore, DeathMsg, MOTD, ServerName, VGUIMenu, SetFOV, TextMsg, SayText, HudText, Train, Geiger, ResetHUD, InitHUD, GameMode, ItemPickup, AmmoPickup, ScreenShake, CurWeapon | stock layouts | stock layouts | identical |
| ScreenFade | **sent** (`FUN_10067180`, `UTIL_ScreenFade*`) | registered, **never sent**. 3.0 uses `TSFade` because its client rewrites the engine fade every frame. | Send `TSFade` (same 10-byte body) |
| TSFade, ShowObj, TSFlag, TSMBlur, PlInfo, TSPSys (3.0 only) | — | — | Keep sending as 3.0 does. They only add effects (motion blur, laser colour, wind, CTF flag icons). TSFlag is needed if 3.0 flag modes stay in 2.1 mode (rules agent's call). |

**Which 3.0 messages a 2.1-mode server must still send, or send differently:**

* **Keep sending all of these:** `TSFade` (instead of `ScreenFade`), `ShowObj` (instead of
  `DelObj`, and after every `Objective`), the 3-byte `WStatus`, the variable `TSFrags` type 0,
  `KFuPower` as char and **on every bar change**, and `PlInfo`/`TSMBlur`/`TSPSys`/`TSFlag` (all
  harmless).
* **Stop sending:** `Flashlight`, `FlashBat`, `DelObj`, `GloSlow`, `KAlign`. They aren't
  registered.
* **New:** a mode flag (§5).

---

## 2. `delta.lst`

`diff ts21/delta.lst ts_original/delta.lst`:

```
46a47
> 	//DEFINE_DELTA( vuser1[0], DT_FLOAT, 8, 10.0 ),
48c49
< 	DEFINE_DELTA( vuser1[1], DT_SIGNED | DT_FLOAT, 16, 1.0 ),
---
> 	DEFINE_DELTA( vuser1[1], DT_SIGNED | DT_FLOAT, 10, 1.0 ),
```

Everything else is byte-identical: `clientdata_t`, `entity_state_t`, `entity_state_player_t`,
`custom_entity_state_t`, `usercmd_t`, `weapon_data_t` and `event_t`.

* **`clientdata.vuser1[1]` is the powerup bitmask** in both (2.1: player+0x69c; 3.0:
  player+0x710).
  * 2.1 gave it 16 signed bits (up to 32767); 3.0 gives it 10 (up to 511).
  * All powerup bits seen on the client are ≤ 0x100 (1, 2, 4, 8, 0x10, 0x100), so 10 bits is
    enough unless a 2.1-mode powerup uses bit ≥ 0x200.
  * UNVERIFIED: why 2.1 used 16 bits. I found no 2.1 bit above 0x100 tested on `+0x69c`.
* **2.1 `clientdata.fuser2`/`fuser3`** (player +0xadc / +0xad4, see §3.1) are 2-bit fields in
  **both** files. They never reach the client meaningfully; the 2.1 client predicts them from 0.
* `delta.lst` is a **server-side** file that the engine sends to clients as delta descriptions.
  It can't be switched per map without a restart. **Keep the 3.0 file** (`game/ts/delta.lst` in
  the port is identical to `ts_original/delta.lst`).

---

## 3. Client prediction

### 3.1 What the server puts in `clientdata_t` (`pfnUpdateClientData`)

2.1 is 0x1000f710; 3.0 mp.dll is 0x10012180. Shared parts: flags, health, viewmodel, waterlevel,
weapons, origin, velocity, view_ofs, punchangle, bInDuck, step/duck/swim times, waterjumptime,
physinfo, maxspeed, fov, weaponanim, pushmsec, **fuser1**, **iuser4**, iuser1/2, m_flNextAttack,
ammo_rockets/cells, and (for `m_iId == 16`) vuser3[0..2], vuser4[0..2], ammo_nails, vuser2[0..2],
vuser1[2].

| Field | 2.1 | 3.0 |
|---|---|---|
| `fuser1` | `pev->fuser1`, **0 = normal**, f = slow factor | `pev->fuser1`, **1.0 = normal** |
| `fuser2` / `fuser3` | player +0xadc / +0xad4 (useless: 2-bit delta) | not set |
| `vuser1[0]` | `(float)player+0x20` (the SDK `ammo_9mm` slot, TS meaning UNVERIFIED). The 2.1 client round-trips it through player+0x20 / `_DAT_1031871c` in prediction. | not set |
| `vuser1[1]` | powerups (player+0x69c) | powerups (player+0x710) |
| `ammo_shells` | player+0x2c (SDK buckshot) | clip of the paired single/akimbo variant (`gun[(slot.pair)*0xe+0x42]`), 0 otherwise |
| no-slot case | — | `vuser3[1] = gun[0x27c]`, `vuser3[2] = gun[0x27b]` |
| slot record | 0x30 bytes (`gun + 0x104 + id*0x30` for status) | 0x38 bytes |

The other vuser/ammo_nails semantics are the same (2.1 client `FUN_10017f70` lines 77-132 unpack
them in the same order as 3.0 §8.3):

* `vuser3` = id, firemode, attachments;
* `vuser4` = akimbo hand, clip, in-reload;
* `vuser2` = pump/burst state, reserve, burst counter;
* `vuser1[2]` = active items;
* `ammo_nails` = left akimbo clip.

**For 2.1 mode, keep the 3.0 layout.** The one translation is **`fuser1`**: a 2.1-mode server must
put 1.0 where 2.1 had 0, or the 3.0 client (and the port's shared pmove) freezes the player. The
2.1 client pmove (`FUN_1005f4f0`):

```c
ft = msec * 0.001;
if (fuser1 != 0) ft *= (fuser1 >= 0.1 ? fuser1 : 0);
```

The 3.0 client (`0x1002e330`) applies the multiply unconditionally. As long as the port keeps
"1.0 = normal" internally, there's nothing to change on the wire.

### 3.2 `HUD_PostRunCmd` / weapon post-think

The 2.1 export `HUD_PostRunCmd` thunk 0x100037b0 → 0x10019ca0 → `FUN_10017f70` (334 lines). The
3.0 equivalent is `HUD_WeaponsPostThink` 0x10003830. One `CTSGun` registered as HL slot 16
(object `0x10296960`, vtable `0x10268c54`) predicts every TS weapon in both builds.

**Differences (2.1 → 3.0):**

1. **Timer step.** 2.1 decrements `to->weapondata[i]` directly after copying back. The fields are
   `m_flNextReload` (+0x1c), `m_fNextAimBonus` (+0x2c), NPA (+8), NSA (+0xc), idle (+0x10),
   `fuser1` (+0x48) and `fuser4` (+0x54), plus `to->client.m_flNextAttack`, `fuser2` and
   `fuser3`. The step is:

   ```
   t = t - (double)msec / 1000.0        // fild; fdiv qword [0x102691c8]; fsubr dword (0x10018921..)
   clamps: +0x2c and +8 at -1.0; the rest at -0.001 (0xba83126f)
   ```

   There is **no** `fuser1` scale and **no** ×1.5 DFR. 3.0: `dt = msec·0.001·max(fuser1,0.01)`,
   ×1.5 with DFR, applied inside the gun. The 2.1 server matches its client: `CBasePlayer::PostThink`
   0x10054180 decrements weapon timers by raw `gpGlobals->frametime`, with clamps −1.0 (NPA) and
   −0.001 (others), and `m_flNextAttack` likewise.

2. **Slow motion and DFR on fire delay** (2.1 client `FUN_100213a0` = StandardFire tail; server
   `FUN_1004b400` tail, verified identical):

   ```
   if firemode == BURST:  delay = (burst_state == 1) ? 0.2 : 0.03     // double consts → float
   elif firemode == SEMI: delay = info.rate                           // (info+0x18), no 0.1 override
   else:                  delay = info.rate * (powerups & 0x10 /*DFR*/ ? 0.5 : 1.0)
   if powerups & 0x08 /*SlowPause*/: delay = delay / 0.15             // server: delay * 6.6666665
   else:                              delay = delay * slowdiv(player)
   NPA = delay; idle = 2.0
   ```

   * Client: `slowdiv = fuser1 == 0 ? 1.0 : 1.0/fuser1` (`FUN_100261b0`, **no 0.1 clamp**).
   * Server: `FUN_100551c0` → `FUN_1005a3d0` = `fuser1 == 0 ? 1 : 1/FUN_1005a3b0(fuser1)`.
     `FUN_1005a3b0` is presumably `max(f, 0.1)` like the client's `FUN_100957c0`, but that's
     UNVERIFIED for the server.
   * 2.1 semi fire (`firemode 1` or `4`) fires on button *press* (`m_afButtonPressed & 1`), or on
     hold with DFR (`FUN_10020380`).
   * 3.0 instead uses `next_primary = rate` (semi on an auto-capable weapon 0.1), and scales the
     step (`shared/src/weapons/gun.rs::standard_fire` l.834-840).

3. **ItemPostFrame** (2.1 `FUN_10025f40` vs 3.0 0x1000b7b0):

   * **Kung fu (no slot).**
     * 2.1: `ATTACK2 && NSA ≤ 0` → Secondary; else `ATTACK && NPA ≤ 0` → Primary; then always
       WeaponIdle.
     * 3.0: the same, but returns after each and adds `IN_RELOAD` → Reload (slot 0x180).
   * **Reload completion.**
     * 2.1 calls the virtual at 0x1003fb80 (it returns 0.0) when `slot.in_reload`; the clip is
       **not** refilled client-side.
     * 3.0 refills the clip (akimbo split) when `in_reload && m_flNextAttack ≤ 0`.
   * **Buttons.**
     * 2.1 order: ATTACK2 → Secondary, ATTACK → Primary, RELOAD (when not in reload) → Reload,
       none → idle.
     * 3.0 adds **`IN_CANCEL (0x40) && fuser4 ≤ 0` → AlternateAttack** and exempts weapon 36
       (Contender) from RELOAD.
     * So 2.1 never *predicts* the +alt2 action, although 2.1 sends bit 0x40 for `+alt2` and its
       server has `CTSGun::AlternateAttack` 0x1004ab40.

4. **Spread-penalty decay** (`DAT_102964bc` in 2.1, `0x1009ed8c` in 3.0):

   ```
   2.1 (only when runfuncs, wall time):
       if pen > 0 && now >= last:
           pen -= (now - last) / slowdiv(TSSlowMo) * 0.1;  pen = max(pen, 0)
       last = now
   where slowdiv(x) = x == 0 ? 1 : 1/max(x, 0.1)   (FUN_10095800/FUN_100957c0)
   3.0: pen -= dt * 0.1 per command (dt from 1.)
   ```

   2.1 reads the HUD's `TSSlowMo` value, not `fuser1`.

5. **Copy-in/copy-out.** 2.1 also carries `fuser2/fuser3` and `vuser1[0]`. Both carry `iuser4`,
   `fuser1` and the vusers. The 2.1 post-frame gate is
   `iuser1 != 5 && !FUN_10051700() && m_flNextAttack ≤ 0`. 3.0 is "alive, not in a menu,
   NextAttack ≤ 0".

**Port impact.** These all live in shared code, so client and server switch together:

* `shared/src/weapons/gun.rs`:
  * `decrement_timers` (l.446): step = raw frametime in 2.1 mode;
  * `standard_fire` (l.797), `shotgun_fire`, akimbo: delay formula above;
  * `item_post_frame` (l.523/585): no alt-attack prediction (and the server side per the weapons
    report).
* `shared/src/weapons/spread.rs`:
  * `timer_step` (l.96): bypass in 2.1 mode;
  * `fixed_slow_amt` (l.89): 2.1's `slowdiv`.
* `client/src/prediction/gun.rs::post_think`, `frame_time` (msec/1000.0 as a double division in
  2.1, vs `msec*0.001` in 3.0; they differ in rounding for some msec values), and
  `write_weapon_data`.
* The `GunHost` trait (`gun.rs` l.150) needs a `gameplay_21()` (or `mode()`) query next to
  `slow_mul()`/`arith()`:
  * server: from the cvar;
  * client: from `from.client.physinfo` (§5).

### 3.3 Client pmove

Both builds' client pmove is a copy of that build's server pmove:

* 2.1: client `HUD_PlayerMove` thunk 0x10002da6 → `FUN_1003e740` → `PM_Move` `FUN_100601a0`
  (asserts `pm_shared.c` from `...\ts-dev\src\pm_shared\pm_shared.c`) → `PM_PlayerMove`
  `FUN_1005f4f0`.
* Spot checks:
  * physinfo `mj` super jump (`vz = sqrt(160000) = 400`, `vel.xy += forward·100`, iuser4
    |= 0x100000) is in both 2.1 client (`unnamed_1008b960.c:2847`) and 2.1 server
    (`unnamed_10045840.c:6103`);
  * the `680.0` fall constant is in both.
* So "switching pmove" on the client = the same switch as the server's shared pm. The movement
  report has the full diff. Client-relevant highlights found here:
  * **No `PM_GetAccelBySpeed` in 2.1.** `330.0f` doesn't occur in either 2.1 dll; it's present
    in 3.0 mp.dll and client.dll (`0x1002b7f0`). Port: `shared/src/pm/mod.rs` l.806/815 (gate
    `accel_by_speed_x` on the mode).
  * **`fuser1 == 0` is "normal" in 2.1** (§3.1). If the port keeps 1.0 = normal on the wire, the
    pm code needs no change for this.
  * The 2.1 `PM_PlayerMove` order is: CheckParameters → … → TS stunt handler (`FUN_10092550`) →
    step sounds (`FUN_10059920`) → duck (`FUN_100935e0`). This is the same shape as 3.0.

### 3.4 Other prediction callbacks

* `HUD_TxferPredictionData` (2.1 `FUN_100413e0`) is the same field set as 3.0, including
  `iuser4`, `fuser2/3`, `vuser1..4` and the 0xb00-byte `weapon_data` copy. The 2.1 dead-angle-
  freeze flag (`DAT_10289fc0` = `!(iuser1 == 0 && deadflag != 0)`) is computed here; 3.0 does
  the same in `CL_CreateMove`.
* `HUD_TxferLocalOverrides` 0x10040ea0 and `HUD_ProcessPlayerState` 0x10040f70 were not diffed in
  detail. They're believed to be the same as 3.0 (UNVERIFIED).

---

## 4. Client cvars, input, events

### 4.1 Cvars

Extracted from every `pfnRegisterVariable` call (2.1 via `DAT_102e1490` plus wrapper
`FUN_1003d2e0`; 3.0 via `gEngfuncs.pfnRegisterVariable`). Defaults were read from `.rdata`.
Here is the complete diff; everything else is identical (name, default, flags).

| Cvar | 2.1 | 3.0 | Gameplay relevance |
|---|---|---|---|
| `cl_bob` | `0.01`, flags 0 | `4.0`, flags 1 (TS custom bob) | view only |
| `cl_attackswitch` | — | 0 | swaps `+attack2`/`+alt2` (3.0-only feature; hide or ignore in 2.1 mode) |
| `cl_buykevlar` | — | 1 | buy menu |
| `cl_camtype`, `cl_thirdperson`, `cl_thirdtransparency` | — | 0/0/1 | camera |
| `cl_gore`, `cl_motionblur`, `cl_slowfade`, `gl_fog*`, `hud_color` | — | | cosmetic |
| `cl_lasercolor` | — | 10 | sends `lasclr_%i` → `PlInfo` |
| `cl_showequipment` | — | 1 | inventory list |

Same in both:

* `m_accel 0`, `m_accelexp 1.2`, `m_accelmax 0` (all FCVAR_ARCHIVE). The formula is identical
  (2.1 `unnamed_10050490.c:1228-1257`):

  ```
  d += sign(d) * min(pow(|d|, m_accelexp) * m_accel, m_accelmax if ≠ 0)
  d *= sensitivity
  ```

  Zoomed, the delta is × the zoom sensitivity instead. These are the "mewcelleration" cvars:
  they are `m_*`, there is no `cl_accel*` in either build.
* `cl_pitchspeed 225`, `cl_yawspeed 210`, `cl_anglespeedkey 0.67`. Both builds clamp at use in
  `CL_AdjustAngles` (2.1 `FUN_10050e30`): pitch speed ≤ **220**, yaw speed ≤ **200**,
  anglespeedkey ≥ **0.67**, pitch ±89, roll ±50. This is the anti-turn-script clamp; same in both.
* `r_paintball 0`: client-only cosmetic in both (no server paintball mode; no paintball string in
  either mp.dll).
* `cl_lw`: read via `GetCvarPointer` in both.
  * `SetFOV` is ignored while `cl_lw != 0` (2.1 0x10084710, 3.0 0x10049570).
  * Zoom sensitivity is the same in both: `fov/80·sensitivity·zoom_sensitivity_ratio`.
  * 2.1 applies the FOV instantly; 3.0 smooths it (`UTIL_ApproachFOV`).
* `cl_usepowerup 1`: both auto-send `usepowerup` from the weapons element's `Think`.
* `cl_solidcross 2`, `cl_realhud 0`, `nohud 0`, `cl_laser 0`, `cl_shadow 2`, `cl_fx 1`,
  `default_fov` (code-generated in both), `hud_r/g/b 150/175/255`, `cam_*`, `zoom_sensitivity_ratio 1.2`.

### 4.2 Input

* **Buttons** (`CL_ButtonBits`, 2.1 `FUN_10051730`): attack 1, duck 4, jump 2, forward 8, back
  0x10, use 0x20, left/right 0x80/0x100, moveleft/right 0x200/0x400, **attack2 0x800**, reload
  0x2000, **alt1 0x4000**, **alt2 0x40**, score 0x8000 (forced when dead or in intermission).
  Same mapping as 3.0, minus `cl_attackswitch`.
* **Anti-script gate: 2.1 has none.**
  * The 2.1 `+attack` (`FUN_10050b40`), `+attack2` (`FUN_10050810`, also runs `special`),
    `+alt2` (`FUN_10050a80`), `+forward` (`FUN_10050490`) and `+jump` (`FUN_100508e0`) call
    `KeyDown` (and the spectator button hook) unconditionally.
  * 3.0 gates nine `+` commands on `g_bRealKey`, set by `HUD_Key_Event`.
  * So in 2.1, `alias`/`wait` combo scripts (kung-fu combos, rapid fire, stunt macros) work.
  * The `cl_pitchspeed`/`cl_yawspeed` clamp exists in both, so "turn scripts" are capped in both.
  * Port: `client/src/input.rs::gate_open()` (l.219) should return true in 2.1 mode. It already
    has a `DEV_SCRIPT_INPUT && sv_cheats` escape, which is the natural place to add
    `|| mode::is_21()`.
* `CL_CreateMove` (2.1 `FUN_10051130`) matches 3.0:
  * voice squelch clears IN_ATTACK;
  * joystick forward/back bits;
  * dead → view angles frozen at the last live value (`DAT_10289fc0`).
* **Commands.**
  * 2.1 has `buy` (opens only when dead or observer and the weapon menu is closed, `FUN_1008db00`,
    same as 3.0), plus `buyitem`/`buylast`, which are **empty stubs** (`FUN_1008db70`/`db90`).
  * 2.1 still has `+strafe` and `+mlook`.
  * `slot1..10`, `invnext`/`invprev`, `+alt1`/`+alt2`, `special`, `thirdperson` exist in both.
  * `lastinv` is a **server** `ClientCommand` in both mp.dlls.
  * Client-originated server commands in both: `weapon_%i`, `drop_%i`, `cutwire_%i`,
    `usepowerup`. 3.0 adds `lasclr_%i`.

### 4.3 Events

Event files on disk:

| Install | Files | Count |
|---|---|---|
| 2.1 `events/` | closecombat, coldcock, empty, firelinked, fire, grenade, katana, knife, pump, reload | 10 |
| 3.0 `events/` | the same plus `draw` | 11 |

Precached / hooked:

| | 2.1 | 3.0 |
|---|---|---|
| Server precache | fire, coldcock, firelinked, empty, pump, closecombat, reload, knife, katana (9). Strings referenced by the mis-named `CBasePlayerWeapon::Restore`, which is really `CTSGun::Precache`. | the 9 + `grenade`, `draw` |
| Client precache | `FUN_1001ec80` stores indices at gun+0xd04..0xd14: fire d04, coldcock d06, empty d08, pump d0a, closecombat d0c, firelinked d0e, reload d10, knife d12, katana d14 | 11 |
| Client `HookEvents` | the 9 TS events + the SDK HL events (glock1, mp5, egon, …, harmless leftovers) | 11 TS only |

So `grenade.sc` ships in 2.1 but no code uses it. `draw.sc` and `grenade.sc` are 3.0 spectator
in-eye cosmetics; keep them in 2.1 mode.

**Event arguments.** 2.1 plays all TS gun events through `FUN_10048ff0`, a PLAYBACK_EVENT_FULL
wrapper that also replays the event to in-eye spectators (`iuser1 == 5 && iuser2 == player`).
Flags are 1 (FEV_NOTHOST), origin and angles are zero.

| Event | 2.1 args (from the pushes before each `call 0x10048ff0`) | 3.0 args | Note |
|---|---|---|---|
| fire (StandardFire 0x1004b7b7) | f1 = f2 = spread (`0x100b1dc4`), i1 = weapon id (gun+0xb8), i2 = slot attachments (+0x10), b1 = clip == 0, b2 = player+0x748 (shared seed) | identical | **verified identical**: spread reconstruction on the 3.0 client works as long as the 2.1-mode spread number goes into f1/f2 and the seed into b2 |
| empty (0x1004aba9) | all 0 | all 0 | identical |
| coldcock (0x1004afeb) | f1/f2 = dir (`0x100b1e68/6c`), **i1 = 0, i2 = 0** | i1 = id, i2 = attachments | 3.0 client anim lookup uses i1, so send the 3.0 form |
| reload (0x1004d228) | i1 = id(edx), **i2 = 0** | i2 = attachments (and f1 = phase 8/9/10 for shotguns) | send 3.0 form (bodygroups) |
| closecombat (0x1004e9f3) | **i1 = global `0x100b1e54`, i2 = 0**, f1 = 0 | f1 = weapon id/0, i1 = attack type, i2 = anim index | send 3.0 form, otherwise the 3.0 client plays anim 0 |
| knife (0x1004ca6b), katana (0x1004c629) | i1/i2 = registers (not decoded) | knife: i1 = id, i2 = state+8. katana: i1 = anim, i2 = state+8. | UNVERIFIED 2.1 meaning; send the 3.0 form |
| pump/fire from ShotgunFire (0x1004b3a7) | pump with zeros after a fire event | same pattern | — |

The 2.1 client handlers read the same `event_args_t` fields. Rule for the port: **events are
3.0-encoded in every mode**, since only the numbers (spread, rates) change. Port:
`shared` `Event`/`EventArgs` in `weapons/gun.rs` (l.830), `client/src/events/*`.

---

## 5. How a server can tell the client to switch at runtime

| Channel | Reaches pmove? | Reaches `HUD_PostRunCmd`? | Reaches HUD? | Original 3.0 client.dll | Notes |
|---|---|---|---|---|---|
| **physinfo key** via `pfnSetPhysicsKeyValue(ed, "ts21", "1")` | yes: `pmove->physinfo`, `PM_Info_ValueForKey`. The port has `pm::State::info_int(c"ts21")` (`shared/src/pm/mod.rs` l.312), the same path as `mj`. | yes: `from->client.physinfo` (`local_state_t.client`). The port's `post_think` has `from`. | yes: cache it from prediction into `client::state`, or call the engine's `PhysInfo_ValueForKey` (exists in `cl_enginefuncs`, header line 1220) | ignores unknown keys | **Recommended.** Per player, delta-compressed (`physinfo DT_STRING` in `clientdata_t`), applies to the server's pmove of the same command. TS already uses `slj`/`hl`/`mj`. Set it at spawn next to them (`server/src/rules/lifecycle.rs` l.268-270, `stunt/mod.rs` l.331-341, `player/save.rs` l.195) **and** for every connected client when the mode cvar changes. Budget: the physinfo string is 256 bytes and TS uses ~15. |
| `SrvSett` key 4 (`B 4, S mode`) | no | no (message arrives asynchronously) | yes: `client/src/hud/state.rs` l.561 | ignored (the switch has cases 0..3 only) | Good for **HUD-only** rules (crosshair, divestep thresholds, gate) and for UI. Send from `InitHUD` and on change, as 3.0 does keys 0..3 (`CTSGameRules::InitHUD`, `Think`). |
| Server cvar with FCVAR_SERVER (like `ts_pm_arith`) | no | no | only via `ServerInfo_ValueForKey` if the engine puts it in serverinfo (UNVERIFIED for GoldSrc/FWGS) | — | `ts_pm_arith` is **server-only**: it doesn't tell clients anything, because the client always uses `Arith::CLIENT` (= mp.dll's MSVC arithmetic = the default server arithmetic). A gameplay mode can't work like that, since the client must change logic. |
| userinfo (client → server) | — | — | — | — | The reverse direction. A FCVAR_USERINFO cvar in the port client (e.g. `_tsrs 1`) lets the server detect clients that can switch. The **original 3.0 client.dll can't**: in 2.1 mode it mispredicts movement (accel-by-speed, …) and weapons (timers and delays, alt attack, spread decay). The server could warn or kick such clients, or require `cl_lw 0` (that only removes weapon prediction; pmove prediction still runs). |

Suggested implementation, following the `ts_pm_arith` pattern (`server/src/rules/cvars.rs`
l.83-96, read on every call):

1. Register a server cvar `ts_gameplay` (`"30"` | `"21"`), read on every command.
2. On change and at every spawn, call `SetPhysicsKeyValue(ed, "gm", "21"|"30")` for all players.
   The server pmove and the server gun read the cvar (or the same physinfo key).
3. The shared code takes a `Mode` argument the way it takes `Arith`. The server passes the cvar;
   the client passes `from.client.physinfo["gm"]` in `post_think` and `pmove.physinfo["gm"]` in
   `HUD_PlayerMove`.
4. The client HUD reads the last predicted physinfo value (or `SrvSett 4`) for: the crosshair
   Barrett rule, the divestep thresholds, the key gate, the slow-mo icon, and the instant FOV.

---

## 6. HUD elements that affect play

| Element | 2.1 | 3.0 | Port |
|---|---|---|---|
| Kung-fu bar | Bottom right, 128 px wide, `fill = power·1.28` (`FUN_1008a0f0`, "Kung-Fu"). Power 0..100 from `KFuPower` (byte) **or** the WeaponInfo clip when holding kung fu. **Meaning:** melee energy. The 2.1 server lowers it on being hit (`bar -= dmg`, clamp 0, `FUN_100439e0`) and on kung-fu attacks (`FUN_1004de10`). Regen and damage scaling are in the kung-fu/weapons report. | Same bar. `≤ 0.01` → red empty frame (exhausted, 1.5 s lockout server-side). Value −100..100 (char). Also feeds client prediction (`state.kfu_power`). | `client/src/hud/weapons.rs` l.338; `server/src/weapons/net.rs::send_kfu_power` |
| Powerup display | Top left: "Slow-Motion" / "Infinite-Ammo" / "Slow-Pause" / "Double-FireRate" (hard-coded English, priority 1 > 2 > 8 > 0x10) + seconds (`FUN_10085c00`). Permanent kung-fu (4) / movement (0x100) icons bottom centre. **Extra:** `slowmotion.spr` top centre while slowed (`TSSlowMo ≠ 0` or `GloSlow`). | `#Pwr_*` localised strings, same priority and timer. Kung-fu/movement icons the same. No slow-mo sprite. | `client/src/hud/status.rs` |
| Slots / weight | `TSSpace` (free slots, starts 81). Status panel shows "free slots". Buy menu shows `%i Slots`, `Free Slots : %i`, `%i Kevlar %i`, **`%i Stealth Shoes %i`** (2.1 sells Stealth Shoes as an item; the buy report covers it). | `#HUD_FreeSlots` + equipment list (`cl_showequipment`) | `client/src/hud/status.rs`, `menus/buy.rs` |
| Divestep / stunt indicator | 3 sprites around the crosshair: up (pitch < −10), level, down (> 10). Sprite i is red (unavailable) when `used = 81 − TSSpace` exceeds **21 (and, if `m_Teamplay > 1`, also when armour > 0) / 41 / 71**. Red base while `NextStunt` cooldown runs. Drawn **only** when the crosshair is drawn (not kung fu, knives, katana, nades, Barrett) and not zoomed. These thresholds mirror 2.1's server-side dive weight limits (see the stunt report). | Limits **41 / 51 / 61** (`0x1004eec0/eef0/ef20`: `81 − space − f() ≤ 0x29/0x33/0x3d`, where `f` = `FUN_1004eeb0`, garbled; the port assumes 0). Drawn whenever not scoped, regardless of weapon. | `client/src/hud/weapons.rs::divestep_layout` l.600, `draw_crosshair` l.526 |
| Crosshair | Hidden when `cl_realhud ≠ 0`. Hidden for weapons 0/24/25/34/35, and for **18 Barrett unless FOV < 40**. When zoomed in first person: no lines and no divesteps. Teammate under the crosshair: `cross` sprite. Gap = 22 (12 with laser on) + spread·k. `cl_solidcross` 0 = sprite, 1–2 = FillRGBA (2 = black lines). | Same, **without the Barrett rule** | `client/src/hud/weapons.rs` l.536: add `\|\| (mode21 && h.weapon == 18 && !scoped)` |
| Credits | Shown when `m_Teamplay > 1` or `dmcashbased` (red below 1000) | same | — |
| Objective markers | Slot exists = visible | `ShowObj` controls visibility | §1.3 |

---

## 7. Things 3.0 has that 2.1 does not (disable in 2.1 mode, client/protocol side)

1. Anti-script real-key gate on 9 `+` commands (`input.rs::gate_open`).
2. `cl_attackswitch` (+attack2 ↔ +alt2 swap).
3. Predicted `AlternateAttack` on `IN_CANCEL` (and its `fuser4` timer gating). Server-side
   removal is a weapons-report item.
4. Time scale applied to the weapon **timer step** (`fuser1`) and the DFR ×1.5 step. Replaced
   in 2.1 by delay scaling at fire time (§3.2).
5. Semi-auto override `0.1 s` on auto-capable weapons (2.1 uses `info.rate`).
6. Client reload-completion clip refill (2.1 waits for the server).
7. `PM_GetAccelBySpeed` (speed-dependent ground acceleration), on the client too.
8. Crosshair on an unscoped Barrett, and divesteps while holding melee/nades.
9. 3.0 divestep weight thresholds 42/52/62.
10. Smooth FOV zoom (`UTIL_ApproachFOV`). In 2.1, `SetFOV` is instant.
11. Protocol-only (keep sending, they're harmless): `TSFade`, `ShowObj`, `TSFlag`, `TSMBlur`,
    `PlInfo`, `TSPSys`, `draw`/`grenade` events.

## 8. Things 2.1 has that 3.0 does not (add in 2.1 mode)

1. Weapon fire delay × `1/fuser1` (when slowed) or `/0.15` (Slow Pause), and auto delay ×0.5 with
   DFR (§3.2). This is shared code and must run identically in client prediction.
2. Wall-clock spread-penalty decay scaled by the `TSSlowMo` factor (prediction only; the server
   has its own decay per the weapons report).
3. Barrett crosshair suppression unless zoomed.
4. Divestep thresholds 22 (no kevlar in team modes) / 42 / 72.
5. Slow-mo HUD sprite (cosmetic).
6. Kung-fu bar set from WeaponInfo's clip when id == 0. Not needed if the server sends `KFuPower`
   on every change.
7. Scriptable `+` commands (no gate).

## 9. Client vs server: what must change where

| Change | Server only | Shared (client + server must agree) | Client only |
|---|---|---|---|
| Message set / encodings | ✓ (keep the 3.0 encoding; translate `DelObj` → `ShowObj`, `ScreenFade` → `TSFade`, 3-byte `WStatus`, 3.0 `TSFrags` type 0, char `KFuPower` on every change) | | |
| `fuser1` normal = 1.0 | ✓ (map 2.1's 0 → 1.0 when filling clientdata) | | |
| Movement (accel-by-speed etc., movement report) | | ✓ `shared::pm`, mode from physinfo | |
| Weapon timer step / fire delay / semi rate / alt attack | | ✓ `shared::weapons::gun` | |
| Spread-decay rule | server per weapons report | ✓ if the shared gun owns it | prediction variant (§3.2.4) |
| Crosshair, divesteps, slow-mo icon, FOV smoothing | | | ✓ `client::hud` |
| Key gate, `cl_attackswitch` | | | ✓ `client::input` |
| Mode signalling | ✓ cvar + `SetPhysicsKeyValue` (+ `SrvSett 4`) | read physinfo | read in HUD |

## 10. Open questions / UNVERIFIED

1. Meaning of 2.1 `clientdata.vuser1[0]` = player+0x20, and why 2.1 gave `vuser1[1]` 16 bits.
2. 2.1 `fuser2`/`fuser3` (player +0xadc/+0xad4): which timers. They are effectively
   client-predicted from 0, so they don't matter to a 3.0-protocol 2.1 mode.
3. 2.1 server `FUN_1005a3b0` clamp (assumed `max(f, 0.1)`). The 2.1 client's `slowdiv` used for
   fire delay (`FUN_100261b0`) has **no** clamp, so the two may differ for `0 < fuser1 < 0.1`.
4. 2.1 knife/katana/closecombat event `iparam` meanings (only the register pushes were seen).
5. Whether `ServerInfo_ValueForKey` can carry a server cvar on GoldSrc/FWGS. physinfo is the
   certain channel.
6. 3.0 `FUN_1004eeb0` (the subtracted term in the divestep thresholds) is garbled
   (`HUD_GetUserEntity` misattribution). The port assumes 0.
7. `HUD_TxferLocalOverrides` / `HUD_ProcessPlayerState` 2.1 vs 3.0 weren't diffed line by line.
8. The 2.1 PwUp bits above 0x100, if any (affects the `delta.lst` 10-bit field). None were seen
   on the client.

### Method notes (to re-derive)

* **Message tables:** extract `RegUserMsg` calls from both `LinkUserMessages`. **Senders and
  payloads:** scan `pfnMessageBegin(dest, gmsgX)` and the following `pfnWrite*` in the decomp,
  after joining wrapped lines (Ghidra wraps long calls).
* **2.1 client hooks:** calls through `DAT_102e14a0` (`pfnHookUserMsg`); handlers resolved
  through thunk → `FUN_X(&DAT_102e024c /*status*/ or &DAT_102dxxxx /*weapons*/ , ...)`.
* **Cvars:** `pfnRegisterVariable` (2.1 `DAT_102e1490`), defaults read from the PE `.rdata`.
* **2.1 client exports:** `objdump -p`, then follow the `jmp` thunks. `HUD_PostRunCmd` →
  0x10019ca0 → 0x10017f70; `HUD_PlayerMove` → 0x1003e740; `CL_CreateMove` → 0x10051130;
  `HUD_TxferPredictionData` → 0x100413e0; `weapon_tsgun` → 0x1001eaa0.
* **2.1 client gun vtable** 0x10268c54: +0x118 ItemPostFrame 0x10025f40, +0x158 Primary
  0x10020380, +0x15c Secondary 0x100201e0, +0x164 Reload 0x10023a90, +0x168 WeaponIdle
  0x10023f80. Fire 0x10020750 → StandardFire 0x100213a0 / akimbo 0x10020cc0.
