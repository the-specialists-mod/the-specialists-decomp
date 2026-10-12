# TS 2.1 vs TS 3.0: game rules, scoring, powerups, game modes, player state

Scope: `CTSGameRules` and the SDK rules objects, server cvars, frag/stunt scoring, kill sprees, The One,
LMS, teamplay, respawn timing, spawn protection and spawn points, cash/buying, player damage (armour,
headshots, friendly fire, TK), powerups and slow motion, objectives and rounds, client commands, votes.

Binaries: 2.1 = `~/dev/hl/ts21/dlls/mp.dll` (export `ts30-decomp/ts21/server-win`), 3.0 = `mp.dll`
(`ts30-decomp/server-win`) and `ts_i386.so` (`ts30-decomp/server`, Ghidra addr = objdump + 0x10000).
All 2.1 addresses are mp.dll VAs (0x1000xxxx). 2.1 names in the export are often wrong. The real names
used below come from matching code and strings. Where a 2.1 address is labelled differently in
`functions.tsv`, the export label is given in brackets. Float constants were decoded from `.rdata`.

**2.1 struct/field map** (all verified from code; 3.0 MSVC equivalents in brackets):

| 2.1 location | meaning |
|---|---|
| `0x100ac8c0` | `TSGameRules` (the `CTSGameRules` singleton). Byte +0 = mode (0 DM, 1 TDM, 2 round TDM, 3 objective) |
| `TSGameRules+0x1a0` / `+0x1a4` / `+0x1c0` | last broadcast `usecash` / `ammocount` / `realbullet` (SrvSett change detection) |
| `+0x1a8 .. +0x1bc` | global slow motion state (active, amount, end time, start time, last `globalslow` cvar value) |
| `+0x1b8` | next periodic `RespawnEntities` time (DM/TDM, every 60 s) |
| `+0x54bc` / `+0x54c0` / `+0x54c4` / `+0x54c8` | ts_mapglobals init flag / map weapon mask / effective mask / last sent mask |
| `+0x54cc` / `+0x54cd` | ts_mapglobals byte at pev+0x54 / pev+0x58 (respawns per round, max alive; see rounds section) |
| `+0x54ce` | "The One exists" |
| `+0x54d0` | next The One check (every 10 s) |
| `+0x54d4` | pending CheckDeads time |
| `0x1009f498` | `g_teamplay` (result of DecideGamePlay; copied into mode byte) |
| `0x102e00fc` / `0x102e0100` | `g_theOneMode` = `mp_theonemode` and `g_flWeaponCheat` = `sv_cheats`, both read in `CWorld::Spawn` (0x1006c530, labelled `CBaseEntity::Save`) |
| player `+0x4b8` | cash (3.0 `+0x540` mp.dll / `+0x554` .so) |
| player `+0x4c0` | free slots (3.0 `+0x548` .so) |
| player `+0x4cc..+0x50c` / `+0x50c..+0x68c` | armament: ammo counts [16] / item list [32] x {id, attachments, is_item} |
| player `+0x68c` | grenades bought this life |
| player `+0x694` | spawn-protection end time (spawn + 1 s) (3.0 .so `+0x71c`) |
| player `+0x69c` / `+0x6a0` / `+0x6a4` / `+0x6a8` | powerup active type / held type / active end time / held seconds (3.0 .so `+0x724/+0x728/+0x72c/+0x730`) |
| player `+0x6b4` | overheal decay timer (3.0 `+0x73c`) |
| player `+0x6bc` | kill spree byte (3.0 `+0x744`) |
| player `+0x6c0` | time of last kill (3.0 `+0x748`) |
| player `+0x6c4` | award/status byte, sent as TSPAward (3.0 `+0x74c`) |
| player `+0x6c6` / `+0x6c7` | kung fu / superjump (3.0 `+0x74e/+0x74f`) |
| player `+0x6e8` | respawn time, -1 = not before next round (3.0 `+0x770`) |
| player `+0x731` | is The One (3.0 `+0x7b9`) |
| player `+0x732` | respawns used this round (3.0 `+0x7ba`) |
| player `+0x734` | join deadline (3.0 `+0x7bc`) |
| player `+0x73c` / `+0x740` | team-kill window end / team-kill count (3.0 `+0x7c4/+0x7c8`) |
| player `+0xaa0` | team name char[16] |
| 2.1 vtable byte offsets | entity: `+0x94` IsAlive, `+0xa8` IsPlayer; rules: `+0x68` IPointsForKill, `+0x6c` PlayerKilled, `+0x70` DeathNotice, `+0xc8` PlayerRelationship, `+0xd8`/`+0xdc` team assign, `+0xf4` ChangeLevel, `+0xf8` GoToIntermission |

---

## 1. Summary table

| Feature | TS 2.1 | TS 3.0 | 2.1 evidence | 3.0 evidence | Rust port location |
|---|---|---|---|---|---|
| Game mode selection | **Map-prefix driven**: `tm_` → 3 (objective rounds), `tr_`/`cs_`/`de_` → 2 (round TDM), `ts_` → The One/teamplay cvars, others → `mp_teamplay`. No worldspawn `gamemode` key. LMS isn't a mode, the `lastmanstanding` cvar is read live | worldspawn `gamemode` key, then cvars (`mp_theonemode`, `lastmanstanding`, `mp_teamplay`). Modes 2/3 unreachable | `FUN_100433b0` (DecideGamePlay), `InstallGameRules` 0x1001eba0 | `DecideGamePlay` .so 0x767ac | `rules/state.rs::decide_gameplay`, `GameRules::install` |
| Round modes 2/3 | **Live** (round TDM and objective maps) | dead code | `FUN_100449b0` (InitObjectives), Think 0x10043cc0 | doc §1.2 | `rules/frame.rs::ts_think`, `entities/ts/misc.rs` stubs (§9) |
| Teams | Teamplay in DM maps = **SDK model teams** (team = `model` infokey, list from `mp_teamlist`). Round modes: fixed `Specialists`/`Mercenary` with `seal`/`merc` | `team` infokey; up to 4 TS teams from `mapteams`/`mp_teamlist`, models from `teammodels`/`mp_teammodels` | `FUN_10038920` (teamplay SetDefaultPlayerTeam), Init `FUN_10044810` | `CHalfLifeTeamplay::SetDefaultPlayerTeam` 0xe44ac | `rules/teams.rs`, `rules/state.rs` |
| Cvars registered | 43 distinct (adds `mp_flashlight`, `initial_cash`, `cashforwin`, `cashforlose`, `globalslow`, `weaponrestriction`, `respawnnumber`, `restartround`; no `mp_teammodels`, no `botarmor`) | 37 (+`botarmor`, `mp_teammodels`); `initial_cash`/`cashforwin`/`cashforlose`/`respawnnumber`/`dmgreport` defined but never registered | `pfnGameInit` 0x1001e750 | `GameDLLInit` .so 0xc5aa0 | `rules/cvars.rs::CVARS` |
| Cvar defaults | `respawntime 5`, `initial_cash 3000`, `cashforwin 1500`, `cashforlose -1000` | `respawntime 3`, constants 1200/10000/1200 | cvar_t structs 0x10093a0c.. | 0x1009eb28.. | `rules/cvars.rs` |
| `globalslow`, `restartround`, `weaponrestriction` | **cvars**, polled every frame by `CTSGameRules::Think` | server commands | Think 0x10043cc0 | `cmd_globalslow`, `cmd_restartround`, `cmd_weaponrestriction` | `rules/commands.rs` (server cmds), `rules/frame.rs` |
| `weaponrestriction` values | 1 → mask 0, 2 → 0x01, 3 → 0x03, 4 → 0x13, 5 → 0x1f ignoring the map; other → 0x1f & map mask | command | `FUN_10043630`/`FUN_10043620` | `cmd_weaponrestriction` | `rules/commands.rs` |
| Stunt kill bonus | **+2** (3 total with base 1), no speed requirement, also stacks on close combat (kung fu + stunt = 4) | +1, needs speed > 80 and not close combat | `FUN_1004f3c0` (TSGetPointsForFrag) 0x1004f54b | `TSGetPointsForFrag` .so 0x89140 | `rules/scoring.rs::points_for_frag` |
| Slide kill bonus | +1 (friction < 1, speed > 80) | +1, not with close combat | same | same | same |
| Close-combat base points | 2 for kung fu (no gun / `glast_closecombat`), any melee category-10 weapon ("Katana"), thrown knife | 2 for close combat, pistol-whip "stock", knives (`GetDescription`) | same | same | same |
| Kill HUD doubling | message shows raw points | displayed value ×2 for spree > 8 / double kill | same | same | same |
| Double kill | window **1.0 s**, always updates last-kill time | 2.0 s, a double kill resets last-kill time to 0 | `PlayerKilled` 0x1004f7e0 | mp.dll 0x10059d10 (.so 0x895e4) | `rules/scoring.rs::player_killed` |
| Spree rewards | 3: +30 hp (cap 150), 6: **+50** hp (cap 150), 9: hp = 150 (set, can lower overheal), kungfu+superjump, **slow pause 3 s** | 3: +30, 6: **+60**, 9: hp max(hp,150), slow pause **2 s** | 0x1004fc35.. | .so `PlayerKilled` | `rules/scoring.rs` |
| Spree ≥ 10 | points ×2, award 5 | points ×2, award unchanged | 0x1004faba | | same |
| Killing a specialist (victim spree > 8) | +5 points, killer slow pause **3 s** | +5, slow pause **2 s** | 0x1004f9a9 | | same |
| Specialist suicide | no penalty | -5 frags | — | .so PlayerKilled | same |
| Slow-mo death cam | `CreateSlowMotionPoint(victim, 0.15, 1.5 s)` | `(victim, 0.25, 1.0 s)` | 0x1004f8e0 (push 0x3e19999a, 0x3fc00000) | push 0x3e800000, 0x3f800000 | `rules/scoring.rs`, `entities/ts/triggers.rs` (slow point) |
| `slowmatch` kill reward | held slowmo +1 s, **cap 5** | cap 3 | 0x1004fde8 | .so | `rules/scoring.rs` |
| Kill cash | only if cash mode (`usecash` in DM/TDM): killer **points×900**, no TK penalty reachable, no victim cash; round modes: none per kill | killer points×500+400 (TK -1000), victim +900; modes ≥2 ±1000 (but `CashBased()==0`) | `FUN_10042d00`, `FUN_10042c50` | | `rules/scoring.rs`, `rules/lifecycle.rs::give_cash` |
| Cash economy | **Works**: `CashBased() = mode∈{2,3} || usecash`. Cash floor `initial_cash` (3000) on join, observer and death; cap 30000 | `CashBased()` hard-wired to 0 | `FUN_100435f0`, `FUN_10042c90` | `CashBased` .so 0x76abc | `rules/state.rs::cash_based`, `weapons/inventory.rs` |
| Kevlar purchase | only in round modes (2/3), sets armor = 100, cost 1900 when cash-based | any mode, `TakeArmor(100)` (slot cost 10) | `FUN_10055c30` | `CBasePlayer::AddItem` .so 0x9440c | `weapons/inventory.rs::add_item` |
| Armour damage model | **depleting**: `dmg ≤ armor`: armor -= dmg, dmg ×0.5. `dmg > armor`: dmg = armor (compiled bug), armor = 0. Exempt types 0x40e0 | non-depleting: dmg -= dmg·min(armor_absorb,1) (0.2125), exempt 0x80040e4 | real `TakeDamage` 0x10052cf0 (labelled `TakeHealth`) | .so 0x8fa94 | `player/damage.rs::after_kevlar` |
| Armour on death | DM/TDM: drops an **armor powerup** carrying the remaining armour value | nothing | real `Killed` 0x10052390 (labelled `BloodColor`) | .so 0x8ed5c | `rules/lifecycle.rs::killed` |
| Headshot multiplier | ×2 for `DMG_BULLET` only | ×2 for 0x8000002, ×1.5 if shotgun bit 0x2000000 | real `TraceAttack` 0x10053310 (labelled `TakeDamage`) | .so 0x901cc | `player/damage.rs` |
| Extra TraceAttack ×0.7 | stunting only | stunting, plus ×0.7 for bullets while `+0x524 > now` | same | same | `player/damage.rs` |
| Spawn protection | 1 s TraceAttack immunity + translucent (same in both) | same | `+0x694` check | `+0x71c` check | `player/damage.rs` |
| Overheal decay | -1 hp/s down to **100** (fixed), applies to The One too | down to `max_health`; The One instead regenerates | `PreThink` 0x100537e0 | .so `PreThink` 0x908cc | `rules/lifecycle.rs::health_regen` |
| Speed by free slots | `s ≥ 70 → 310`, else `(int)(s/70·140 + 170)`; max speed cap 310 | `s < 81 → s/81·120 + 210`, cap 330 | `FUN_100436e0`, `FUN_100557b0` | `GetSpeedBySlots` .so 0x76bd4 | `shared::ts::speed_by_slots` (shared, prediction!) |
| The One selection | every frame when none (internally every 10 s) + every 10 s if no alive One | every 10 s | Think, `SelectRandomTheOne` 0x100466e0 | 0x1004fcc0 | `rules/frame.rs::the_one_check` |
| The One perks | hp 150, kungfu, superjump, slowpause 3 s, award 10; **+10·players hp per kill (cap 200)**; can't be disarmed; no speed change; models `mp_theone`/`mp_theothers` | hp 150, kf, sj, pause 3 s, speed 330, health regen, no dive limits; team-based models | `SetPlayerTheOne` 0x100467c0, Teamplay PlayerKilled 0x100392e0 | 0x1004fdd0 | `rules/scoring.rs`, `rules/teams.rs` |
| Respawn join deadline (round/LMS) | `min(25, round time left)` | `min(10, …)` | `FUN_10042d50` (SetPlayerRespawnTime) | .so 0x75ff4 | `rules/lifecycle.rs` |
| Respawn trigger | `+attack` in observer | `+attack` and a `respawn` client command | PreThink | ClientCommand | `rules/lifecycle.rs::respawn_command` |
| Auto powerups | only when the map has **no** `ts_powerup` | always (unless `nopowerup`) | Think | Think | `rules/frame.rs::auto_powerups` |
| `RespawnEntities` | every 60 s in non-LMS DM/TDM | per-entity timers only | Think | | `rules/frame.rs` |
| Team win payout | team cash: winner `min(max(c+cashforwin, initial),30000)`, loser `max(c+cashforlose, initial)`; players inherit team cash at death/observer/round start | player GiveCash (dead) | TeamWin 0x10044d00 | 0x1004e180 | `entities/ts/ctb.rs::team_win` |
| LMS winner | +10 frags, "Last Man Standing! %i frags"; alive = IsAlive or respawn pending; no "men standing" line | +10, log event, "%d men standing!" | CheckDeads 0x10045940 | 0x1004ed10 | `rules/frame.rs::check_deads` |
| Round restart refund | none | weapon/ammo value refunded | RestartRound 0x100445d0 | 0x1004d630 | `rules/frame.rs::round_refund` |
| Breakable/door respawn | global 60 s tick restores all broken `func_breakable` and all doors (no occupancy check) | per-entity `respawntime` via `info_breakable` | RespawnEntities 0x10044400 | 0x1004d4d0 | `entities/ts/mod.rs::respawn_entities` |
| ts_mapglobals | keys `playerrespawn` (mode 3 respawns per round), `playeratatime` (unused); spawnflags = weapon mask only | no keys; flags 32 (no round timer), 64 (superjump) | KV 0x10042090 | | `entities/ts/misc.rs` |
| ts_trigger | `nextcheck`, `allowedteam` (0 Spec, 1 Merc, ≥2 any, <0 none) only | + `message`, `attackerteam`, flag 8 | 0x10040a70/0x10040c00 | | `entities/ts/triggers.rs` |
| ts_wingiver cash | `victorycash`/`defeatcash` used when cashforwin/lose are 0 | unused | Use 0x10050d10 | | `entities/ts/ctb.rs` |
| Powerup durations / pool | slowmo 5, pause 3, dblfire 5, infclip 3 (timed); random pool = all 9 bits incl. armor; no `pwupmult`; spawnflags ignored | 3/2/3, infclip instant; pool from spawnflags, no armor | SetupPowerUp 0x10059ce0 | 0x100668f0 | `entities/ts/powerup.rs` |
| Powerup slow factors | slowmo self 0.55 / others 0.35; pause 0.6 / 0.15 | 0.6/0.35; 0.8/0.225 | 0x100568e0 | 0x10063270 | `rules/powerup.rs` consts |
| Slow encoding / easing | `fuser1 0` = normal; applied instantly | `fuser1 1` = normal; eased | 0x10055220 | 0x100610c0 | `rules/powerup.rs`, `shared/src/pm/mod.rs` |
| Round-mode spawn bonus | every spawn in modes 2/3 holds slowmo 3 s | none | 0x100552f0 | | `player/mod.rs` spawn |
| Cheat `powerup 4` | stored **timed infinite clip** (type 2) | `MultiplyClips` | `pfnClientCommand` 0x1000d4b0 | .so `ClientCommand` 0xad838 | `rules/commands.rs::cheat_powerup` |
| Cheat `cashala` | +10000 | +30000 | same | same | `rules/commands.rs` |
| Cheat `give <item>` | exists (sv_cheats) | removed | same | — | `rules/commands.rs` |
| Bot node cmds | `addnode/savenodes/loadnodes/resetnodes/testpath` are **client** commands, ungated | (bots: separate) | same | | `bots/nodes.rs::client_command` |
| Messages | `GloSlow`, `DelObj`, `KAlign`, `Flashlight`, `FlashBat` | `ShowObj`, `TSFlag`, `TSMBlur`, `TSPSys`, `TSFade`, `PlInfo` | `LinkUserMessages` strings | | `messages.rs` |
| Entities | `ts_bomb ts_dmhill ts_hack ts_mapglobals ts_model ts_objective_manager ts_objective_ptr ts_powerup ts_slowmotion ts_slowmotionpoint ts_teamescape ts_trigger ts_wingiver` | adds `ts_briefcase ts_flag ts_customtarget ts_emitter ts_fog ts_groundammo ts_particle ts_playeramount ts_scoregiver ts_sellzone ts_timer ts_wind info_breakable info_player_team1..4` | export table | export table | `entities/ts/*` |

---
## 2. Server cvars (registration lists, defaults, flags)

2.1: `pfnGameInit` 0x1001e750 (the export calls it that; it is `GameDLLInit`). cvar_t is 0x14 bytes
(`name,string,flags,value,next`). 3.0: `GameDLLInit` .so 0xc5aa0 / mp.dll 0x1001d690 block (cvar_t 0x18).
Flags: 0x4 = FCVAR_SERVER, 0x104 = SERVER|UNLOGGED. Order below is 2.1 registration order.

| cvar | 2.1 default (flags) | 3.0 default (flags) |
|---|---|---|
| `displaysoundlist` | "0" (0x0) | "0" (0x0) |
| `mp_teamplay` | "0" (0x4) | "0" (0x4) |
| `mp_fraglimit` | "0" (0x4) | "0" (0x4) |
| `mp_timelimit` | "0" (0x4) | "0" (0x4) |
| `mp_fragsleft` | "0" (0x104) | "0" (0x104) |
| `mp_timeleft` | "0" (0x104) | "0" (0x104) |
| `mp_friendlyfire` | "0" (0x4) | "0" (0x4) |
| `mp_falldamage` | "0" (0x4) | "0" (0x4) |
| `mp_weaponstay` | "0" (0x4) | "0" (0x4) |
| `mp_forcerespawn` | "1" (0x4) | "1" (0x4) |
| **`mp_flashlight`** | "0" (0x4) | not registered |
| `mp_autocrosshair` | "1" (0x4) | "1" (0x4) |
| `decalfrequency` | "30" (0x4) | "30" (0x4) |
| `mp_teamlist` | "hitman;gordon" (0x4) | "hitman;gordon" (0x4) |
| **`mp_teammodels`** | not registered | "" (0x4) |
| `mp_teamoverride` | "1" (0x0) | "1" (0x0) |
| `mp_defaultteam` | "0" (0x0) | "0" (0x0) |
| `mp_allowmonsters` | "0" (0x4) | "0" (0x4) |
| `mp_chattime` | "10" (0x4) | "10" (0x4) |
| **`initial_cash`** | **"3000"** (0x4) | struct exists, **not registered**, constant "1200" |
| **`cashforwin`** | **"1500"** (0x4) | not registered, constant "10000" |
| **`cashforlose`** | **"-1000"** (0x4) | not registered, constant "1200" |
| `roundtime` | "150" (0x4) | "150" (0x4) |
| **`respawntime`** | **"5"** (0x4) | "3" (0x4) (both clamp to 5..30 when used, so the effective default is 5 in both) |
| `damagemult` | "0.0" (0x4) | "0.0" (0x4) (both: only applied when `sv_cheats` was on at map load) |
| `slowmatch` | "1.0" (0x4) | "1.0" (0x4) |
| `botlearn` | "0.0" (0x4) | "0.0" (0x4) |
| **`globalslow`** | "0.0" (0x4), cvar polled each frame | server command `globalslow <0..200>` |
| `nopowerup` | "0.0" (0x4) | "0.0" (0x4) |
| `realbullet` | "0.0" (0x4) | "0.0" (0x4) |
| `usecash` | "0.0" (0x4) — **functional** (enables cash in DM/TDM) | "0.0" (0x4) — broadcast only |
| `ammocount` | "0" (0x4) | "0" (0x4) |
| `bottalk` | "1" (0x4) | "1" (0x4) |
| `weaponstay` | "15" (0x4) | "15" (0x4) |
| `mp_theonemode` | "0" (0x4) | "0" (0x4) |
| `mp_theone` | "gordon" (0x4) — **used** (The One's model) | "gordon" — unused |
| `mp_theothers` | "seal" (0x4) — **used** (everyone else's model) | "seal" — unused |
| `lastmanstanding` | "0" (0x4), read live every frame | "0" (0x4), latched by DecideGamePlay at map start |
| **`weaponrestriction`** | "0" (0x4), cvar | server command |
| `spectacularness` | "1" (0x4) | "1" (0x4) |
| **`respawnnumber`** | "1" (0x4) | struct exists, not registered (value 0 → clamped to 1) |
| **`restartround`** | "0" (0x4), cvar: Think calls `ResetRestartRound((int)v)` then sets it back to 0 | server command |
| `customweapons` | "" (0x4): Think loads the file named in it, broadcasts, resets it to "" | "" (0x4) |
| `banfortk` | "0" (0x4) (registered twice: GameDLLInit and pfnGameInit) | "0" (0x4) |
| **`botarmor`** | not registered | "0" (0x4) |
| `dmgreport` | — | struct exists, not registered |

Server commands: 2.1 registers only `addbot` and `addcustombot` (server-side since 2.03). 3.0 adds
`globalslow`, `restartround`, `weaponrestriction`, `loadweapons`, `saveweapons`.

**Rust:** `crates/server/src/rules/cvars.rs::CVARS` is the 3.0 list. A 2.1 mode needs a second table
(or a `ts_gameplay 21` switch in `register()`), with `initial_cash`/`cashforwin`/`cashforlose`/`respawnnumber`
becoming real cvars (`INITIAL_CASH`, `CASH_FOR_WIN`, … are consts today), `globalslow`/`restartround`/
`weaponrestriction` as polled cvars in `rules/frame.rs::ts_think` (cvars can't be registered *and* be
commands with the same name, so in 2.1 mode skip the `rules/commands.rs` server commands), and
`respawntime` default "5". Since the engine only registers a cvar once, a runtime switch should register
the union and interpret per mode.

### 2.1 Polled-cvar semantics in `CTSGameRules::Think` (2.1 0x10043cc0, labelled `GameDLLInit`)

```c
// globalslow (cvar float g). max = sv_cheats(at map load) ? 2.0 : 1.0
v = clamp(g, 0, max);  if (v == 1.0) v = 0;          // 1.0 means "off"
if (v != 0 && v != gs.amount) SetGlobalSlow(v, 0);   // FUN_10045500: duration 0 = until changed
else if (gs.last_cvar != v) gs.active = 0;           // cvar went to 0/1: stop
if (gs.end != 0 && gs.end < now) gs.active = 0;
gs.last_cvar = v;
if (!gs.active) { if (gs.amount) { ApplyGlobalSlow(0); gs.amount = gs.end = 0; } }
else ApplyGlobalSlow(gs.amount);                     // FUN_100455f0, every frame
...
// weaponrestriction (cvar w)
mask = (w == 5) ? 0x1f : (FUN_10043630((int)w) & map_mask);
//   FUN_10043630: 1→0x00, 2→0x01, 3→0x03, 4→0x13, default→0x1f
//   map_mask = ts_mapglobals.spawnflags ^ 0x1f (0x1f when no ts_mapglobals)
if (mask != last_sent) SrvSett(3, mask);
// restartround (cvar r)
if (r != 0) { ResetRestartRound((int)r); CVarSetFloat("restartround", 0); }
// customweapons (cvar string s)
if (s[0]) { copy; if (adjust_weapon_value()) InformClientsOnWeaponsParams(0); CVarSetString("customweapons",""); }
```

Bit meaning of the mask (same as 3.0 `IsRestrictedWeapon`, 2.1 `FUN_1004ecd0`): 0x01 pistols… the
category→bit map in 2.1 is: weapon category 1 needs 0x10, 3 needs 0x01, 6/7 need 0x08, 8 needs 0x02,
9 needs 0x04 (category from `FUN_1004ec80`). A mask of 0 restricts every weapon (`weaponrestriction 1`
= melee/kung fu only).

`SrvSett` id 0 in 2.1 carries `realbullet != 0` (3.0 sends the integer value).

---

## 3. Game modes and team handling

### 3.1 DecideGamePlay (2.1 `FUN_100433b0`, called from `InstallGameRules` 0x1001eba0)

```c
int DecideGamePlay(mapname, int teamplay_cvar_int) {
    char p[4]; strncpy(p, mapname, 3); p[3] = 0;
    if (!strcmp(p, "ts_")) { if (g_theOneMode) return 1; goto generic; }
    if (!strcmp(p, "tm_")) return 3;                       // objective rounds
    if (!strcmp(p, "tr_") || !strcmp(p, "cs_") || !strcmp(p, "de_")) return 2;   // round TDM
generic:
    if (mp_teamplay != 0) return 1;
    return teamplay_cvar_int;                              // (int)mp_teamplay == 0 here
}
// InstallGameRules: g_teamplay = result; < 1 → CHalfLifeMultiplay (12 B), else CHalfLifeTeamplay (0x218 B)
```

Notes:
* The One only applies to `ts_` maps and then forces teamplay. On any other prefix The One mode
  (`g_theOneMode`, read from `mp_theonemode` in `CWorld::Spawn` 0x1006c530) still runs its Think logic
  but on DM rules. Probably harmless, since the One check is in Think regardless (UNVERIFIED in play).
* `tm_`/`tr_`/`cs_`/`de_` force round modes regardless of cvars.
* LMS is not decided here. `CTSGameRules::Think` reads the `lastmanstanding` cvar every frame, and LMS
  logic runs when `lastmanstanding != 0 && mode == 0` (DM). Toggling the cvar mid-map switches LMS on/off.
* No worldspawn `gamemode` key (3.0's `g_gamemode` 1..4) exists in 2.1.

**Rust:** `rules/state.rs::decide_gameplay` + `GameRules::install`. 2.1 mode: replace with the prefix logic,
return mode 0..3, and make LMS a live cvar check in `rules/frame.rs::ts_think` and in
`SetPlayerRespawnTime` (`rules/lifecycle.rs`).

### 3.2 Teams

* **Round modes (2/3):** `CHalfLifeTeamplay` ctor (0x10038550) builds the team list as
  `"Specialists;Mercenary"` (string at 0x10097488 / 0x1009747c); `CTSGameRules::Init` (`FUN_10044810`)
  copies `"seal"` to +0x15 and `"merc"` to +0x45 (the two team models) and team cash +0x78/+0x7c =
  `(int)initial_cash`. Exactly 2 teams.
* **Teamplay on DM maps (mode 1) and The One:** SDK HL teamplay. The team **is the model**
  (`SetDefaultPlayerTeam`-like `FUN_10038920`, teamplay vtable +0xdc): outside The One mode, `player+0xaa0`
  (team name) = the `model` infokey (16 chars). With `mp_teamoverride`/team list (`mp_teamlist`
  "hitman;gordon"), invalid models are replaced (`* Server limits teams to '%s'`, `* Can't change team to
  '%s'`). Teams = up to the SDK limit of names in `mp_teamlist`, not 4 TS slots, and there is no
  `mapteams`/`teammodels` worldspawn key, no `info_player_teamN`.
* **The One mode:** The One's model = `mp_theone` cvar (default "gordon"), everyone else = `mp_theothers`
  ("seal"); both `model` and `team` infokeys are set to it. (2.0.4 changelog: "All players will be agents
  except The One, who is laurence" — the cvar defaults in the binary are gordon/seal; server.cfg presumably
  sets them.)
* `jointeam N` → rules `+0xd0(N-1)` then `+0xd8(player, name)` (index → name, then change team).
  `changeteam` → sends the team menu message (byte 2).
* Spawn class (2.1 `FUN_10042f50`): DM or mode 1 → `info_player_deathmatch`. Modes 2/3: the player
  whose team equals `"Specialists"` (or `"Mercenary"` when `TSGameRules+0x2d0` is set, i.e. sides
  swapped) uses `info_player_start`, the other team `info_player_deathmatch`. 3.0: `info_player_teamN`
  with fallbacks.
* Spot scoring (`FUN_10043010`) is identical to 3.0 `TSSelectSpawnSpot`: up to 32 spots,
  `rand(0x1801..0x2000)` if seen only by teammates ≥128 away, `rand(0x1001..0x1800)` if unseen,
  else the min distance (start 4096); telefrag radius 128, 300 dmg, `DMG 0x1000`.

**Rust:** `rules/teams.rs` and `rules/state.rs` (team table, `the_one_team_names`), `rules/spawnpoint.rs`
(spot classname only; scoring unchanged).

### 3.3 The One

| | 2.1 | 3.0 |
|---|---|---|
| Activation | `ts_` map + `mp_theonemode` (map-load value) | worldspawn gamemode 4 or `mp_theonemode` |
| Selection | Think: `if (g_theOneMode && !theOneExists) SelectRandomTheOne()` every frame (the function itself only runs once per 10 s, `+0x54d0`); plus at the end of Think every 10 s: if no player with `+0x731` is a player, select | every 10 s if no living One |
| Candidates | IsPlayer && IsAlive && not observer (`pev->iuser1 == 0`), ≤ 33 | same, but returns early if a One exists |
| `SetPlayerTheOne` (0x100467c0) | `+0x731=1`, health = 150, kungfu+superjump (`mj 1`, `PwUp 4,0` and `PwUp 0x100,0`), overheal timer = now+1, slow pause 3 s if no powerup active/held, award 10, `"%s is The One!"` (100,150,255) | same plus `SetPlayerSpeed(330)`, a log line, team change through `ChangePlayerTeam` |
| Team after selection | `SetDefaultPlayerTeam` (+0xdc) → model `mp_theone` | `SetDefaultPlayerTeam` + `ChangePlayerTeam` |
| Kill by The One | **The One's health += 10 × (number of IsPlayer clients in slots 0..maxClients-1), capped at 200** (`CHalfLifeTeamplay::PlayerKilled` 0x100392e0, constants: `iVar4*10`, `200.0`=0x43480000). The changelog's "ten*players frags" is wrong: it is health | nothing |
| Points | Non-One killers score 0 (`FUN_1004f3c0`). The One scores normal points | same |
| Disarm | **The One can't be disarmed**: the three kung-fu/melee disarm calls (`FUN_10056080(victim,-2)` in `FUN_10056f20`, `FUN_100572a0`, `FUN_1005c680`) are skipped when `victim+0x731`; the kung-fu power drain in `FUN_1004de10` (`+0x6ec -= dmg*0.9`) is also skipped | no The One disarm immunity found (the dive-height/stamina and speed exemptions are 3.0 only) |
| Overheal | decays to 100 like everyone else | exempt from decay; regenerates (`health_regen` in the port) |
| Death | `TheOneIsDead`: killer (player, not self) becomes The One; "The One was killed by %s!"; else "The One is dead" | same |

**Rust:** `rules/frame.rs::the_one_check/select_random_the_one`, `rules/scoring.rs::the_one_is_dead`,
`set_player_the_one_other`, `rules/lifecycle.rs::health_regen` (2.1: no regen, normal decay),
`rules/teams.rs::the_one_switch` (2.1: model cvars), weapons disarm code (`weapons/` kung fu, check
`is_the_one`), `shared::ts::speed_by_slots` (2.1 has no The One speed rule).

---

## 4. Kill scoring (`CHalfLifeMultiplay::PlayerKilled`)

2.1: `CHalfLifeMultiplay::PlayerKilled` 0x1004f7e0 (2320 B) + `TSGetPointsForFrag` = `FUN_1004f3c0`
(1046 B). 3.0: .so 0x895e4 (6865 B) / mp.dll 0x10059d10, `TSGetPointsForFrag` .so 0x89140.
Teamplay wrapper 2.1 `FUN_100392e0` (teamplay vtable slot 27) adds The One's health bonus (§3.3).

### 4.1 2.1 `TSGetPointsForFrag(victim, attacker_pev, inflictor_pev, base)` exact

```c
if (mode == 2 || mode == 3) return base;                  // round modes: plain SDK points
if (base < 0) return base;                                // team kill (-1)
pts = base & 0xff; killer = CBaseEntity of attacker_pev;
if (g_theOneMode && killer->IsPlayer() && !killer->isTheOne) return 0;
if (!(attacker_pev->flags & FL_CLIENT)) goto msg;
label = "";
if (inflictor) {
  if (inflictor != attacker_pev) {                         // projectile
     if (strcmp(classname(inflictor), "knife") != 0) return base & 0xff;   // grenade etc: plain
     label = "Throwing Knife"; pts = 2;
  } else if (glast_weaponid_2_1 == 0) {                    // DAT_100ac81c (3.0 tests == -1)
     gun = killer->activeItem;                             // +0x968
     if (!gun) { if (glast_closecombat) { label = "Kung-Fu"; pts = 2; } }
     else if (gun->id == 0x10 /*weapon_tsgun*/) {
        if (gun->curWeapon == 0 || glast_closecombat) { label = "Kung-Fu"; pts = 2; }
        else if (weapon_info[gun->wid].category(+0xd8 byte) == 10) { label = "Katana"; pts = 2; }
     }
  }
}
if (attacker_pev->iuser4 & 0x10c10) {                      // any stunt flag, NO speed test
   if (killer->IsPlayer()) pts += 2;                       // 3.0: +1 and only if !closecombat && speed>80
   if (pts < 2) return pts;
   label = label[0] ? label + " & Stuntman style!" : "Stuntman style!";
} else if ((iuser4 & 0x20) && friction < 1.0 && |velocity| > 80) {   // slide
   if (killer->IsPlayer()) pts += 1;                       // 3.0: +1 only if !closecombat
   if (pts < 2) return pts;
   label = label[0] ? label + " & Sliding style!" : "Sliding style!";
} else if (label[0]) label += " style!";                   // (DAT_100989f0: " style!" suffix, UNVERIFIED text)
msg:
if (pts >= 2) TSHudMessageAll(0,255,0, 1, 30, "%i frags for %s, %s", pts, netname, label);
return pts;
```

So in 2.1: plain kill 1, stunt kill **3**, slide kill 2, close-combat kill 2, close-combat + stunt **4**,
close-combat + slide 3. (2.0.8 changelog: "Plus two (three total) frags for a stunt kill.") The HUD
line uses English strings (3.0 uses `#TS_*` title keys, and doubles the shown value on spree/double kill).

### 4.2 2.1 PlayerKilled body (only where it differs; the full order)

```c
DeathNotice(victim, killer, inflictor);           // vtbl +0x70, 2.1 FUN_1004ede0 (same weapon naming as 3.0)
victim.deaths++;                                   // +0xa88
FireTargets("game_playerdie", victim);
if (victim.isTheOne) { TheOneIsDead(victim, killer); victim.spree = 0; }
if (attacker_pev == victim.pev || !killer || !killer->IsPlayer()) { attacker.frags -= 1; goto score_info; }
pts = TSGetPointsForFrag(victim, attacker, inflictor, IPointsForKill(killer, victim));
if ((attacker.iuser4 & 0x10c10) || glast_closecombat || pts > 2)
    if (spectacularness_roll())                     // FUN_10043670: s=(int)spectacularness; s!=0 && RandomLong(0,100) <= s
        CreateSlowMotionPoint(victim.origin, 0.15 /*0x3e19999a*/, 1.5 /*0x3fc00000*/);   // 3.0: 0.25, 1.0
if ((mode == 0 || mode == 1) && pts > 0) {
    if (now - killer.lastKill < 1.0) { pts *= 2; HUD "DoubleFrag for %s!"; }          // 3.0: < 2.0
    if (victim.spree >= 3) {
        if (victim.spree < 9) HUD "%s stops %s's fury!";
        else { pts += 5; HUD(...,hold 40) "%i frags for %s, he has killed THE SPECIALIST!";
               if (!killer.pwActive && !killer.pwHeld) { held = 8 /*slow pause*/; heldSecs = 3; } }  // 3.0: 2 s
    }
    if (killer.spree != 255) killer.spree++;
    switch (killer.spree) {
      case 3: HUD "%s is a Killer!";        hp = min(hp+30, 150); award = isOne?10:2; break;
      case 6: HUD "%s is Demolition Man!";  hp = min(hp+50, 150); award = isOne?10:3; break;   // 3.0: +60
      case 9: HUD "%s is The Specialist!";  hp = 150;  /* set, not max */
              kungfu = superjump = 1; SetPhysicsKeyValue("mj","1"); PwUp(4,0); PwUp(0x100,0);
              if (!pwActive && !pwHeld) { held = 8; heldSecs = 3; }                          // 3.0: 2 s
              award = isOne?10:4; break;
      default: if (spree >= 10) { HUD "%s is Unstoppable! %i consecutive frags"; pts *= 2; award = isOne?10:5; }
    }
    if (hp > 100) overhealTimer = now + 1;
    killer.lastKill = now;                           // always (3.0 zeroes it after a double kill)
    GiveKillCash(killer, pts == -1 ? -1000 : pts * 900, pts == -1);   // FUN_10042d00: only if CashBased()
}
attacker.frags += pts;
log kill; FireTargets("game_playerkill", killer);
if (slowmatch == 1 && pts > 0 && (killer.pwHeld == 0 || killer.pwHeld & 1) && killer.pwActive == 0)
    { killer.pwHeld = 1 /*slowmo*/; killer.heldSecs = min(killer.heldSecs + 1, 5); }        // 3.0 cap 3
if (pts > 0 && killer.isBot) BotTaunt(...);        // FUN_1005ddd0: 9% chance, 0.5..2 s delay
if (pts == -1) TeamKillPunish();                   // identical to 3.0: 3 TKs inside rolling 30 s → kick / banid banfortk
score_info: ScoreInfo(victim); ScoreInfo(killer) and killer.+0xa9c = (int)now;
CallCheckDeads();                                  // FUN_10045910
```

Not present in 2.1: specialist-suicide -5, headshot/knife/katana/coldcock/own-weapon HUD lines,
victim +900 cash, round-mode ±1000 kill cash, log suffix tags, `#TS_KillSpree%i` random lines. In 2.1 the
kill-cash call is inside the `mode 0/1 && pts > 0` block, so round modes give **no** per-kill cash and the
TK branch (-1000) is unreachable. Victim spree is reset at (re)spawn (`FUN_100552f0`), not in PlayerKilled.

`IPointsForKill`: DM `FUN_100242f0` returns 1; teamplay `FUN_10039500`: 0 if no attacker, -1 for a
teammate (other than self), else 1 — same as 3.0.

**Rust:** `rules/scoring.rs::player_killed` and `points_for_frag`. The differences are all constants or
branch conditions; a `Ruleset` enum read once per kill is enough. `spectacular_roll` is the same.
Death-cam slow point parameters live in the same function.

---

## 5. Cash and buying (server side)

### 5.1 Cash state

* `CashBased()` 2.1 `FUN_100435f0`: `mode == 2 || mode == 3 || TSGameRules.usecash_copy != 0`.
  3.0 `CashBased` returns 0 always. **2.1 has a working economy.**
* Player cash `+0x4b8`, `GiveCash` (`FUN_10042c50`) clamps 0..30000 (same as 3.0 `GiveCash`).
* Join (`CTSGameRules::InitHUD` 2.1 `FUN_100451c0`): cash = `(int)initial_cash` (3000). Then
  `StartObserver`, respawns used = 0, grenades bought = 0, `SetPlayerRespawnTime(respawntime clamp)`.
* `FUN_10042c90` (called from `StartObserver`, `Killed`, team change, spawn reset): in modes 2/3
  `cash = max(cash, team cash)` (`FUN_100458b0` = GetTeamCash); then **floor at `initial_cash`**:
  `if (cash < initial_cash) cash = (int)initial_cash`. So in 2.1 you never respawn with less than 3000.
* `StartObserver` sends the cash to the client (`TSCash`-like message, `short cash`, msg id
  `DAT_100cbc54`; 3.0 has the same message, UNVERIFIED that 3.0 sends it there) and stores `+0x4bc = cash`.
* Kill reward: killer `+900 × points` (DM/TDM, `usecash` on). Team win/lose payouts: see §9 (rounds).
* Cheat `cashala` (sv_cheats): +10000 (3.0: +30000).

### 5.2 Buy commands (identical command set and armament storage)

Client commands `rst_cfg` (clear list `FUN_10055950`), `tkw id_attach…`, `tki item…`, `tka type_count…`
fill a 32-entry item list and 16 ammo counters. `tkw` clamps the count for stackable weapons
(`weapon_info+0xd4` flag; count ≤ `weapon_info[9]`). `PlayerSpawn` (2.1 `FUN_1004f350`) runs
`game_player_equip` if present, otherwise `GiveNamedItem("weapon_tsgun")`, `BuyArmament()`
(`FUN_100559d0`), `+0x4b4 = cash`. All the same as 3.0. On death the armament list is cleared in both
(`FUN_10055950` in 2.1 Killed / `ResetArmament` in 3.0), so the client re-sends its config.

Per-item rules (2.1 `FUN_10055e00` BuyWeapon, `FUN_10055c30` AddItem, `FUN_10055a40` BuyAmmo):

| | 2.1 | 3.0 |
|---|---|---|
| Weapon restricted by mask | `FUN_1004ecd0(id, effective mask)` | `IsRestrictedWeapon(id, mask)` |
| Grenade (id 0x18) | DM/TDM: never buyable. Modes 2/3: max 2 per life (`+0x68c`) | same (`1 < TSGameRules || id != 0x18`, max 2) |
| Weapon price | `weapon_info[0x34]` (dword 52) when cash-based; attachments silencer 900, laser 800, flashlight 500, scope 1800 | `weapon_info[0x36]`; same attachment prices; never charged (CashBased 0) |
| Slots | `PickUpWeapon`: fails if `free_slots - weapon_info.slots(+0xca byte) < 0`; then speed = `GetSpeedBySlots` | same check on `+0x548` |
| Kevlar (item bit 0x10) | **modes 2/3 only**; cost 1900 (0x76c) when cash-based; needs armor < 100; sets `armorvalue = 100`, `+0x690 |= 0x10`, `weapons/items.wav`; **no slot cost** | any mode; `TakeArmor(100)` (vest costs 10 slots, see `weapons/inventory.rs::armor_change`) |
| Item bit 0x20 | modes 2/3 only, cost 700, sets `iuser4 |= 0x200`, `+0x690 |= 0x20` | modes ≥ 2, same |
| Gun attachments (bits 1/2/4/8) | priced as above when cash-based; `CTSGun::AddItem` | same |
| Ammo | price `ammo_info[1]` per mag when cash-based | same, never charged |

### 5.3 Speed from free slots (SHARED: prediction)

2.1 `FUN_100436e0` + `FUN_100557b0` (SetPlayerSpeed), spawn reset sets `free = 81` (0x51) and speed 310:

```c
float GetSpeedBySlots_21(int free) {          // constants .rdata 0x100885e0..ec
    if (free >= 70) return 310.0f;            // 0x46
    return (float)(int)(free * 0.014285714f /*1/70*/ * 140.0f + 170.0f);  // __ftol: truncate
}
void SetPlayerSpeed_21(float s) { s = min(s, 310); s = max(s, 0); maxspeed = (int)s; }
// 3.0: free < 81 ? free/81*120+210 : (The One/≥81) → 330 cap
```

With 81 free slots a 2.1 player runs at 310 (3.0: 330). A full loadout (0 free) is 170 (3.0: 210).
The One gets no speed bonus in 2.1. This is in `crates/shared/src/ts.rs::speed_by_slots`, which the client
uses for prediction (`maxspeed` reaches the client through the engine, but the port predicts from shared
code), so the 2.1 formula must be switched on both sides (send the ruleset in `SrvSett` or a new id).
The movement/weapons report covers how `maxspeed` feeds PM.

**Rust:** `weapons/inventory.rs` (`buy_armament`, `buy_weapon`, `add_item`, `buy_ammo`, `take_armor`),
`rules/state.rs::cash_based` (2.1: `mode>=2 || usecash`), `rules/lifecycle.rs::give_cash`,
`shared::ts::speed_by_slots`.

---

## 6. Player damage, death and respawn

### 6.1 TraceAttack (2.1 0x10053310, labelled `CBasePlayer::TakeDamage`; 3.0 .so 0x901cc)

```c
if (now < spawnProtectEnd /*+0x694 = spawn+1.0*/) return;        // same in 3.0 (+0x71c)
if (pev->iuser4 & 0x10c10) dmg *= 0.7;                             // .rdata 0x10082938 (double 0.7)
// 3.0 only: if (now < +0x524 && (bits & DMG_BULLET)) dmg *= 0.7;
if (attacker is player && PlayerRelationship == GR_TEAMMATE && mp_friendlyfire == 0) return;
if (pev->takedamage == 0) return;
hitgroup = tr->iHitgroup;
if (hitgroup == 1 && (bits & DMG_BULLET)) { dmg *= 2; headshot = 1; }   // 3.0: bits & 0x8000002, x1.5 if 0x2000000
else if (hitgroup == 6 || hitgroup == 7) dmg *= 0.5;
kevlarHit = armor != 0 && (bits & DMG_BULLET) && alive && hitgroup in 2..5;
if (!alive) push corpse: velocity += dir*50 (unless FL_ONGROUND... flag 0x200 test)
every 0.3 s: TSTakeDamage msg (MSG_PVS): coord end[3], coord dir[3], byte (int)dmg   // 3.0: byte = min(dmg*0.5,127) (+128 if kevlar), x8 for shotgun
sounds (headshot / kevlar / bodyhit / pain)
AddMultiDamage(attacker, this, dmg, bits);
```

### 6.2 TakeDamage armour (2.1 0x10052cf0, labelled `CBasePlayer::TakeHealth`; 3.0 .so 0x8fa94)

```c
// 2.1 (verified in disassembly at 0x10052e07..0x10052e91)
if (armor != 0 && !(bits & 0x40e0) && lastHitgroup in {2,3,4,5}) {
    if (dmg <= armor) { armor -= dmg; dmg *= 0.5; }     // .rdata 0x100801e0 = 0.5
    else              { dmg = dmg - (dmg - armor);       // == old armor  (D8 E1: fsub st,st(1))
                        armor = 0; }
}
CBaseMonster::TakeDamage(..., (float)(int)dmg, bits);   // truncated like 3.0
// 3.0: if (armor && !(bits & 0x80040e4) && hitgroup 2..5) dmg -= dmg * min(armor_absorb /*0.2125*/, 1); armor unchanged
```

The 2.1 `dmg > armor` branch is almost certainly a source bug (intended `dmg - armor` plus half the
armour), but it is what shipped: a hit bigger than the remaining armour deals exactly the remaining armour.
Example: armour 100, hit 150 → 100 damage, armour 0. Armour 20, hit 90 → 20 damage.

Fall damage (`FlPlayerFallDamage` 2.1 0x10024220): identical to 3.0, `mp_falldamage == 1 ?
(fallvel - 680) * 0.22522523 : 10`.

### 6.3 Killed (2.1 0x10052390, labelled `CBaseMonster::BloodColor`; 3.0 .so 0x8ed5c)

Differences from 3.0:
* **DM/TDM: armour drop.** `if (armorvalue > 0) { pw = CTSPowerUp::CreatePowerUp(0x80 /*armor*/, -1);
  pw.origin = victim.origin; pw+0x7c = armorvalue; }` — a temporary armor powerup worth the remaining armour.
* No `TSMotionBlur` messages (3.0 sends 50%/80% blur on killer/victim).
* Respawn time: `SetPlayerRespawnTime(clamp(respawntime,5,30) truncated)`, same clamp as 3.0.
* Headshot death slow (`fuser1 = 0.33` unless `TSGameRules+0x14`) is in both.
* Drops every weapon 1..63 (and the akimbo twin), same as 3.0 (3.0 also `DropAmmo`/`DropFlag`).

### 6.4 SetPlayerRespawnTime (2.1 `FUN_10042d50`; 3.0 .so 0x75ff4)

```c
void SetPlayerRespawnTime_21(p, int secs, bool force) {
  left = roundEnd(+0x08) - now;
  if (mode == 3) {
    n = mapglobals_respawns (+0x54cc byte);
    if (n == 0) { p.respawnAt = now + secs; goto done; }
    if (p.respawnsUsed >= n || force) goto never;
    limited: p.respawnAt = now + min(secs, left); p.joinDeadline = now + min(25, left); goto done;
  }
  if (mode == 2) { n = max(respawnnumber, 1); if (p.respawnsUsed < n && !force) goto limited; goto never; }
  if (lastmanstanding == 0 || mode != 0) { p.respawnAt = now + secs; goto done; }
  n = max(respawnnumber, 1); if (p.respawnsUsed < n) goto limited;   // LMS
never: p.respawnAt = -1;
done:  p.award = (p.respawnAt < 0) ? 1 : 0xb;
}
```

3.0 join deadline is `min(10, left)` and only LMS uses it. `respawnsUsed` (`+0x732`) is incremented
in `Killed`, reset on join and round restart.

### 6.5 PreThink observer flow (2.1 0x100537e0)

In observer (`iuser1 != 0`): `+attack` with `respawnAt < 0` → "You have to wait until the next round."
(195,45,45, 1 s throttle); `+attack` with `0 < respawnAt < now` → respawn (`FUN_1005a700`).
Countdown HUD: `"%i"` (hold 2 s) while waiting, `"Press Fire To Play!"` (hold 3 s) when ready.
Join deadline: `"%i seconds left for respawn, press Fire to Play!"`; when it passes: `respawnAt = -1`,
status 1, message, `CallCheckDeads`. 3.0 additionally accepts a `respawn` client command.

Other PreThink items: overheal decay to a fixed 100 (§3.3); kung-fu power (`+0x6ec`) regenerates
15/s (scaled by the slow factor) to 100; `botlearn > 0` records nav nodes every 0.1 s; mode 3 runs
`CheckForWires` (`FUN_10055650`) every 0.5 s; spawn translucency (rendermode 1, amt 125, fx 14) cleared
after `+0x694`.

**Rust:** `player/damage.rs` (`after_kevlar`, TraceAttack multipliers, `TSTakeDamage` byte),
`rules/lifecycle.rs::killed` (armour powerup drop), `rules/lifecycle.rs` respawn/observer functions,
`rules/lifecycle.rs::health_regen`.

---

## 7. Powerups

2.1 player fields: active `+0x69c`, held `+0x6a0`, active end `+0x6a4`, held secs `+0x6a8`
(3.0 mp.dll `+0x710/+0x714/+0x718/+0x71c`). Type bits and model bodies are the same in both
(1 slowmo body 4, 2 infinite clip 2, 4 kung fu 0, 8 slow pause 9, 0x10 double firerate 1, 0x20 grenade 5,
0x40 health 6, 0x80 armor 7, 0x100 superjump 8).

| Item | 2.1 | 3.0 | 2.1 addr | 3.0 addr (mp.dll) |
|---|---|---|---|---|
| ts_powerup keys | `pwuptype`, `pwupduration` only; **spawnflags ignored**, no `pwupmult` | + `pwupmult`, spawnflags = random set | KeyValue 0x10059c10 (labelled `CBaseEntity::ObjectCaps`) | 0x10066780 |
| Random type | `1 << RandomLong(0, superjump ? 7 : 8)`: uniform over all 9 bits **including armor 0x80** | `GetRandomPowerup(spawnflags or 0x1ff)`, never 0x80, no 0x100 with the map superjump flag | SetupPowerUp 0x10059ce0 | 0x100668f0 / 0x100662f0 |
| `superjump` "for everyone" | a `cvar_t superjump "0"` exists at 0x10093d2c and is read (0x1005493d, 0x10059cf1) but it is **never registered**, so it is always 0 (dead) | ts_mapglobals flag 64 | — | — |
| Base durations | slowmo **5**, infinite clip 3, slow pause **3**, double firerate **5** (no multiplier) | 3, 3, 2, 3 × `pwupmult` | 0x10059ce0 | 0x100668f0 |
| Infinite clip (0x2) | **stored, timed** (3 s, activated like slowmo); while active the bullet fire path skips `clip--` | instant `CTSGun::MultiplyClips` (doubles the clip) | PlayerAddPowerUp 0x100599d0; predicate 0x10042c20 used in fire paths 0x1004b050/0x1004b400/0x1004b8c0/0x1004c6c0 | 0x10066540 |
| Instant types (can always pick up) | mask **0x1e4** | 0x1e6 | WaitTouch 0x1005a160 | 0x10066da0 |
| Slowmo top-up | allowed while holding slowmo with held secs **< 5** | < 3 | 0x1005a160 | 0x10066da0 |
| +use swap | drops held item if `IN_USE && held` (slowmo only if secs > 4). **Bug: no instant-type exclusion, so touching health/armor with +use spawns a copy of your held item and you keep yours** | also requires a stored type; slowmo secs > 2 | 0x1005a160 | 0x10066da0 |
| Armor pickup | `armorvalue = min(armorvalue + 100, 100)` | `TakeArmor(100)` (slot cost) | 0x100599d0 | 0x10066540 |
| Health / grenade / kung fu / superjump | same: health max(hp,150) + decay timer; `PickUpWeapon(24)`; `PwUp(4,0)`; `mj 1` + `PwUp(0x100,0)` | same | | |
| Activation (`usepowerup`) | needs `iuser1==0`, alive, held, nothing active; `TSGameRules+0x14` blocks slowmo/pause ("You can't use Slow-Motion now!"); sends `PwUpTime` only | also `TSMBlur` (doesn't exist in 2.1) | UsePowerUp 0x10056a90 | 0x10063420 |
| Activator slow (self / others) | slowmo **0.55 / 0.35**; slow pause **0.6 / 0.15** | slowmo 0.6 / 0.35; slow pause 0.8 / 0.225 | UpdatePowerUpState 0x100568e0 | 0x10063270 |
| `TSSlowMo` value | slow pause 0.15, slowmo 0.35, else current (0 = normal) | 0.225 / 0.35 / display (1 = normal) | UpdateClientData 0x100547c0 | |
| Death drop of held/active | DM/TDM `CreatePowerUp(type,-1)` (default secs); slowmo only if secs > 4 | > 2 | 0x100568e0 | 0x10063270 |
| Spawn in round modes 2/3 | **every spawn holds slowmo, 3 s** (`FUN_100552f0`: held=1, secs=3) | nothing | 0x100552f0 | |
| Double firerate | fire delay ×0.5 at fire time, semi→auto, spread growth factor 1 (instead of 2); timers not sped up | all timers ×1.5 per frame, recoil ×2/3 (weapons.md §7.5) | 0x1004b050, 0x10049a50 | |
| Auto spawner | only when the map has **no ts_powerup**; DM/TDM; `nopowerup != 1`; type index `r<0.25 && slowmatch!=1 ? 0 : RandomLong(0,8)` → `1<<idx` (armor possible); 20 s after success / 1 s after failure; same PutPowerUp/GetRandomPosition/60 s lifetime/30 s fade | always (unless `nopowerup`); `GetRandomPowerup(0x1ff)` | Think 0x10043cc0, PutPowerUp 0x10059840 | 0x10066370 |
| Map powerup respawn delay | `<1→60`, `1..10→10`, else `min(v,180)` | same | 0x1005a160 | |
| Armor drop on death | yes (DM/TDM): temporary armor powerup holding the victim's armour value (§6.3) | no | Killed 0x10052390 | |

PlayerAddPowerUp 2.1 order: armor, kung fu (`PwUp(4,0)` if new), superjump (`mj 1`, `PwUp(0x100,0)` if new),
health, grenade (`PickUpWeapon(24)`, fail → 0), else stored (`active=0, held=kind, end=0, heldsecs=pu.secs`);
then `items/gunpickup2.wav`. Active `0x100` (cheat only) sets `gravity = 0.15` until it expires.

Cheat `powerup N` (sv_cheats at map load, alive, not observer): 1 → slow pause (8), 2 → grenade,
3 → kung fu + superjump, **4 → stored infinite clip (2)** (3.0: MultiplyClips), 5 → double firerate (0x10),
other → slowmo (1). Stored types: only if nothing active; same type adds 5 s else sets 5 s; `PwUp(type,0)`.

**Rust:** `entities/ts/powerup.rs` (keys, Setup, durations, random pool, instant mask, thresholds,
swap-duplication bug), `rules/powerup.rs::add_powerup/use_powerup/update_state` (armor add, activator
constants, TSSlowMo, no TSMBlur, drop threshold), `rules/frame.rs::auto_powerups/put_powerup`
(no-ts_powerup gate, index pick), `rules/commands.rs::cheat_powerup`, `shared/src/ts.rs` (`STORED`
set gains 0x2), `shared/src/weapons/gun.rs` (infinite clip, double firerate model: **shared/prediction**).

---

## 8. Slow-motion system

| Item | 2.1 | 3.0 | 2.1 addr | 3.0 addr |
|---|---|---|---|---|
| Time-scale encoding | **`pev->fuser1 == 0` means normal speed**; slow multiplier `SlowMul = fuser1==0 ? 1 : 1/max(fuser1,0.1)`; PM: `if (fuser1 != 0) frametime *= (fuser1 >= 0.1 ? fuser1 : 0)` | `fuser1 == 1` normal, `GiveSlowMul = max(fuser1, 0.01)` | 0x100551c0, 0x1005a3d0/0x1005a3b0, PM_PlayerMove 0x10033c90 (pmove+0x20c) | 0x10061080, 0x10067010 |
| Player GoSlow | non-virtual and **instant**: `fuser1 = iuser1 ? 0 : amt`, display `+0x158 = amt`, bullet-time flag `+0x15d`; on release clamps next-attack times to ≤ 1.0 | virtual; target + ~7/s interpolation in PreThink | 0x10055220 | 0x100610c0, 0x10067030 |
| InSlow | `fuser1 != 0 || +0x158 != 0` | `target != 1 || display != 1` | 0x100551e0 | 0x100610a0 |
| Global slow | `globalslow` **cvar** (fraction) polled each Think, clamp `[0, cheats?2:1]`, 1.0 = off (§2) | `globalslow <percent>` server command ×0.01, clamp [0,2] | 0x10043cc0, 0x10045500, 0x100455f0 | 0x10026250, 0x1004e9f0 |
| GlobalSlow2 | every 0.5 s: alive players not InSlow → GoSlow(amt); `grenade`, `knife`, `WorldGun`: `if fuser1 == 0: fuser1 = amt`; amt 0 resets | same (virtual GoSlow) | 0x100455f0 | |
| ts_slowmotion | same keys (`duration`, `slowamt`), flags 1/2/4, toggle/timed, 0.5 s re-apply, distance release; Use message channel 1 (3.0: 8) | | 0x10040db0..0x10041240 | 0x100491f0.. |
| ts_slowmotionpoint | same (0.5 s LOS scan of players not already slowed) | | 0x100412d0 / 0x10041460 | 0x10049750 |
| Death cam point | 0.15 for 1.5 s (also used by `TSExplosion` 0x10047aa0) | 0.25 for 1.0 s | | |
| Headshot death | `fuser1 = +0x158 = 0.33` directly | GoSlow(0.33), interpolated | Killed | |
| Weapon delays under slow | delay fixed at fire time: `rate × SlowMul`, or **`rate × 6.6666665`** while the shooter's own slow pause is active; PostThink decrements by raw frametime | delay unscaled, timers decrement by `frametime × slowmul` | 0x1004b050 (6.6666665 @0x10088928), PostThink 0x10054180 | weapons.md |
| `GloSlow` message | registered (1 byte), never sent | removed | | |
| Double-tap +use activation | function exists (0.3 s window), no callers | client sends `usepowerup` | 0x10056890 | |

**Rust:** `rules/powerup.rs` (`go_slow*`, `in_slow`, `interpolate` → snap in 2.1, `slow_flow`),
`rules/frame.rs` (global slow), `entities/ts/triggers.rs` (ts_slowmotion/point), `rules/scoring.rs` and
`entities/stock/explode.rs` (point parameters), `shared/src/pm/mod.rs` (`fuser1` frametime scaling) and
`shared/src/weapons/gun.rs` (timer model). Keep the port's internal 1.0-is-normal encoding and send 1.0
for "normal"; only the constants, the instant (non-interpolated) application and the weapon-delay model
need a switch. The latter two touch client prediction.

---

## 9. Round modes (2/3), team cash, LMS, objectives and map entities

All of this is live in 2.1 and dead or different in 3.0. 2.1 entity vtable labels in the export are shifted
by one slot (labels `Save` = Spawn, `ObjectCaps` = KeyValue, `Blocked` = Use, `Restore` = …); slot `0xf0` =
`EnableObjective(bool)`, `0xf4` = `Freeze(bool)`, slot 0 = `BreakableRespawn(bool)`.

### 9.1 Think round branch (2.1 0x10043cc0)

```c
if (checkDeadsAt && checkDeadsAt < now) CheckDeads();
if (mode == 0 || mode == 1) {
    auto powerups (§7); The One (§3.3);
    if (lastmanstanding == 0 || mode != 0) {               // DM/TDM without LMS
        if (nextEntRespawn(+0x1b8) < now) { RespawnEntities(0); nextEntRespawn = now + 60; }
    } else {                                               // LMS (DM only)
        if (restartAt && restartAt < now) RestartRound();
        if (roundEnd < now && restartAt == 0) CheckDeads();
    }
} else {                                                   // modes 2/3: no auto powerups, no The One
    if (roundEnd < now && restartAt == 0)
        mode == 2 ? TeamWin(2, (int)cashforlose, (int)cashforlose) : RoundTimeLeft();
    if (restartAt && restartAt < now) RestartRound();
}
```

3.0 gates round expiry on a "round timer enabled" byte (`ts_mapglobals` flag 32); 2.1 has no such flag.
Init sets the first restart to now + 5 in both.

### 9.2 RespawnEntities (2.1 0x10044400)

Called with `force = 0` every 60 s in non-LMS DM/TDM and with `force = 1` from RestartRound.
Calls slot-0 `BreakableRespawn(force)` on every `func_breakable`, `func_door`, `func_door_rotating`:
* CBreakable (0x100423f0): `if (deadflag == 2 || effects == EF_NODRAW || force) { deadflag = 0;
  health = saved(+0x5c); effects = 0; Spawn(); }`. `CBreakable::Die` (0x10042540) sets `deadflag = 2,
  effects = 0x80`.
* CBaseDoor (0x10013b80): same condition, also restores origin/angles (+0x104/+0x110), zero velocities, Spawn.
* **No "player inside the box" check, no `respawntime`/`respawntarget` keys** (3.0 per-breakable timers via
  `info_breakable`).

Then in modes 2/3/LMS: `ts_groundweapon::Fall` (respawn ground weapons); in LMS: `ts_powerup::Fall`.

So in 2.1 DM every broken breakable and every door returns to its spawn state on a global 60 s tick.

### 9.3 RestartRound / ResetRestartRound / TeamWin / CheckDeads / RoundTimeLeft

| | 2.1 | 3.0 |
|---|---|---|
| Round length | `clamp(roundtime, 30, 180)` | same |
| RestartRound per player | modes 2/3: cash = max(cash, team cash) then floor `initial_cash`; **no weapon refund**; join deadline now+25 (mode 0/1, 2, or 3 with `playerrespawn`); respawn at now+3, award 11, used = 0, observer | refund of weapon + ammo value via GiveCash; deadline now+10 |
| InitObjectives | every RestartRound: mode = 3 if any `ts_objective_manager` (≤32) else 2; `EnableObjective(0)` on all bomb/hack/teamescape; wingiver counters reset | gated, unreachable |
| Mode-2 side swap | round counter `+0x2cc`; every 3 rounds toggles `+0x2d0` → spawn classes swap between teams | none |
| `restartround` | cvar → `ResetRestartRound((int)v)`, restart in **3 s**; v ≥ 2 also resets team cash and scores and sends TeamScore | command → `ResetRestartRound(2)`, restart in 1 s; score reset skipped when round timer on (bug) |
| TeamWin signature | `TeamWin(team, winCash, loseCash)`; always restart in 3 s, always `RoundTime(left, 2)` | `TeamWin(team, cash, restart, isScore)` |
| Win payout | **team cash**: winner `min(max(cash+win, initial_cash), 30000)`, loser `max(cash+lose, initial_cash)`; draw: both `max(cash+lose, initial)`; score++ for the winner. No player cash at win time (players pick up team cash at their next floor: death/observer/round start) | per-player GiveCash `cashforwin`/`cashforlose` |
| < 2 players | team cash = initial, scores 0, prints win text then "Waiting other players." | "Waiting for other players." |
| `TSHVoice` | per player: lost = draw ? 1 : (team != winner) by team **name** | same idea by index |
| TeamScore | `("Specialists", s0, 0)`, `("Mercenary", s1, 0)` in modes 2/3 | per team |
| CheckDeads (LMS) | "alive" = IsAlive **or respawnAt ≥ 0**; one left with ≥ 2 players: `"%s is the Last Man Standing! %i frags"` (10), +10 frags, round over in 3 s, no log line; else "Round over" only if time is up or < 2 players. **No "%d men standing!"** | IsAlive only; log `last_man_standing`; "%d men standing!" |
| CheckDeads mode 2 | count alive by team name: none → `TeamWin(2, lose, lose)`; only Specialists → `TeamWin(0, win, lose)`; only Mercenary → `TeamWin(1, win, lose)` | same by index (dead) |
| CheckDeads mode 3 | merc alive & spec dead → manager `targetonspecdead`; spec alive & merc dead → `targetonmercdead`; both dead → draw | same (dead) |
| Round timeout | mode 2: `TeamWin(2, lose, lose)`; mode 3: `RoundTimeLeft` → manager `targetontimeleft`, else draw | same, gated by timer flag |
| Message styles | `TSHudMessage` effect 1 | effect 8 |

Addresses (2.1): RestartRound 0x100445d0, ResetRestartRound 0x10044ba0, TeamWin 0x10044d00,
RoundTimeLeft 0x100450f0, SetObjective 0x10045150, CallCheckDeads 0x10045910, CheckDeads 0x10045940
(`push 0xa` at 0x10045a42), InitObjectives 0x100449b0. 3.0 mp.dll: 0x1004d630, 0x1004e070, 0x1004e180,
0x1004e4d0, 0x1004e530, 0x1004ece0, 0x1004ed10, 0x1004df30.

With default cvars a team's cash never drops below 3000 and a win adds 1500; a loss adds -1000 but the
floor keeps it at ≥ 3000.

### 9.4 Objective entities (mode 3)

* `ts_objective_manager`: `messagea..d`, `objptargeta..h`, `targetontimeleft`, `targetonspecdead`,
  `targetonmercdead`. SetObjective: random manager, prints messagea..d (0,255,0, effect 1, hold 30),
  fires objptarget a..h.
* `ts_objective_ptr` Use (0x100508f0): only targets of class `ts_hack`/`ts_bomb`/`ts_teamescape` (no
  IsObjective virtual in 2.1): `EnableObjective(1)`, add to list, `Objective` message (`coord center xyz,
  byte idx, string`) with `objmsgspec` (+0x54) for "Specialists" players, else `objmsgmerc` (+0x58).
* `CanInteract` (0x100513d0): `attackerteam` 0 = Specialists only, 1 = Mercenary only, anything else =
  **nobody** (3.0: -1 = anyone).
* `ts_bomb`: `defusetime` (int, **not clamped**), `cutwires`. Enable: brush visible (solid 4, movetype 7,
  FL_WORLDBRUSH), countdown = round time left, random wires (one each of 1, 2, rest 3). Beep 1/s
  (0.1 s hurried). At 0: RoundTimeLeft, Freeze, `TSExplosion(center, 300, DMG 0x1040, 2048)`. `+use`
  defuse, progress resets after a 0.5 s gap, "%i seconds left". `cutwire_N` (0x10055700): living,
  non-observer player, bombs within 64 units, `CutWire(n,p)` (0x100511a0): wire 3 → explode, 2 → hurry
  (+ `Wires` message from player `+0x708..0x70a`), 1 → defused.
* `ts_hack`: `hackingtime` clamped 1..30, `misc/hacking.wav`/`misc/hacked.wav`, own round-time countdown.
* `ts_teamescape`: `escapepercentage` 0 → 1, 1 → n/3, 2 → 2n/3, 3 → n (attacker team count), 1 s window.
* `ts_wingiver` Use (0x10050d10): `win = cashforwin ? cashforwin : victorycash(+0x5c)`, `lose = cashforlose ?
  cashforlose : defeatcash(+0x60)` — **victorycash/defeatcash are used** (3.0: parsed, unused).
* `Freeze(1)` sends **`DelObj(byte idx)`** (2.1 msg) instead of 3.0's `ShowObj(idx, visible)`.
* `func_vip_safetyzone`: not exported in either (dead).

### 9.5 Other map entities

* `ts_mapglobals` (KeyValue 0x10042090): keys **`playerrespawn`** (pev+0x54 → TSGR+0x54cc, respawns per
  round in mode 3) and **`playeratatime`** (pev+0x58 → TSGR+0x54cd, never read). Weapon mask =
  `spawnflags ^ 0x1f`. **No flag 32 (no round timer) or 64 (superjump for all)**. Read once in Think.
* `ts_trigger` (KV 0x10040a70, Touch 0x10040c00): keys `nextcheck` (min 0.5) and `allowedteam` only.
  `allowedteam` 0 = "Specialists" only, 1 = "Mercenary" only, ≥ 2 = anyone, negative = nobody. No
  `message`, no `attackerteam`, no flag-carrier spawnflag 8.
* `ts_dmhill` (0x10041660/0x10041710/0x10041830): same algorithm and message as 3.0; team match by team
  name string (model teams in mode 1); 1 s arming delay after spawn.
* `ts_slowmotion`, `ts_slowmotionpoint`, `ts_powerup`, `ts_groundweapon`, `ts_model`: present (§7, §8).
* Not in 2.1: `ts_briefcase`/`ts_flag` (no CTB, so teamplay fraglimit counts team frags only),
  `ts_scoregiver`, `ts_sellzone`, `ts_timer`, `ts_customtarget`, `ts_playeramount`, `ts_groundammo`,
  `ts_wind`, `ts_fog`, `ts_emitter`, `ts_particle`, `info_breakable`, `info_player_team1..4`.

**Rust:** modes 2/3 are not implemented (`Mode::RoundTdm`/`Mode::Objective` exist, nothing sets them).
`entities/ts/misc.rs` stubs `ts_objective_manager`, `ts_objective_ptr`, `ts_bomb`, `ts_hack`,
`ts_teamescape`. `entities/ts/ctb.rs::team_win` is the 3.0 version. Work list: `rules/state.rs`
(prefix DecideGamePlay, team cash), `rules/frame.rs::{ts_think, check_deads, restart_round,
reset_restart_round}`, `rules/lifecycle.rs` (cash floor on death/spawn/observer, `set_respawn_time`),
`rules/spawnpoint.rs` (class + swap), `entities/ts/mod.rs::respawn_entities` (60 s global tick, doors),
real objective entities replacing the stubs, `cutwire_` in `rules/commands.rs`, `entities/ts/triggers.rs`
(2.1 ts_trigger), `entities/ts/misc.rs` (2.1 mapglobals keys).

---

## 10. Client commands (`ClientCommand`)

2.1 `pfnClientCommand` 0x1000d4b0 vs 3.0 .so `ClientCommand` 0xad838. `cheats` = `sv_cheats` latched at
map load (2.1 `0x102e0100`, 3.0 `g_flWeaponCheat`).

| Command | 2.1 | 3.0 |
|---|---|---|
| `say`, `say_team` | Host_Say | same (votes parsed from chat in both) |
| `give <classname>` | **cheats**: `GiveNamedItem` | removed |
| `fov <n>` | cheats & argc>1: sets `+0x948` and `pev->fov`; else prints `"fov" is "%d"` | same |
| `use <item>` | `SelectItem` | same |
| `respawn` | — (only +attack in observer) | respawn when the timer has passed, else "You have to wait…" |
| `testpath a b` | bot path test (ungated) | — |
| `powerup N` | cheats; mapping in §7 (4 = timed infinite clip) | 4 = MultiplyClips |
| `cashala` | cheats; +10000 | cheats; +30000 |
| `weapon_N` | select CTSGun slot | same |
| `lasclr_` | — | laser colour (`TSPlayerInfo`) |
| `rst_cfg`, `tkw`, `tki`, `tka` | buy config (§5) | same |
| `cutwire_N` | `CutWire` (bomb wires, mode 3) | same (dead) |
| `drop_N` / `drop` | drop weapon N / current (`-1`) | same |
| `usepowerup`, `firemode`, `useitems`, `lastinv` | same | same (`lastinv` disabled with kung fu out in both) |
| `resetnodes`, `loadnodes`, `savenodes`, `addnode` | **client commands, ungated** (any player can edit the bot graph) | bots handled elsewhere |
| `changeteam` | sends the team menu (byte 2) | same |
| `jointeam N` | `GetIndexedTeamName(N-1)` → `ChangePlayerTeam` | same idea, TS team table |
| `motd`, `fullupdate` | — | added |
| unknown | rules `ClientCommand` (voice/menuselect), then "Unknown command: %s" | same |

Server commands: `addbot`, `addcustombot` in both (2.03: "addbot … now a server command, which rcon
required for"). `globalslow`, `restartround`, `weaponrestriction`, `loadweapons`, `saveweapons` are
3.0-only commands; in 2.1 the first three are cvars (§2).

**Rust:** `rules/commands.rs::client_command` (give, testpath, respawn gating, cashala amount, powerup 4),
`commands.rs::client_command` dispatch, `bots/nodes.rs::client_command` (2.1: ungated), `weapons/commands.rs`.

## 11. Votes, logging, spectator, intermission

* **Votes:** `PlayerVote` (2.1 0x10045df0) / `CheckVotes` (0x10046150) have the same strings and logic as
  3.0: `vote map <name>`, `vote stats`, `vote reset`, threshold `CalcMiniminVotants(n) = max(1, n/2)`
  (0x10045dd0), the friendly-fire / slowmatch / teamplay-in-DM toggles including the `mp_slowmatch`
  name bug. No gameplay difference found (deep diff not done, UNVERIFIED for edge cases).
* **Multiplay Think / intermission** (2.1 0x10023a60): same fraglimit/timelimit, `mp_fragsleft`/`mp_timeleft`
  direct set, chattime clamp 10..120, then `CTSGameRules::Think`. Teamplay Think 0x100386d0 compares team
  scores (no CTB in 2.1).
* **Logging:** 2.1 logs SDK-style kill/suicide lines (`"%s<%i><%s><%s>" killed "…" with "%s"`), team
  joins, TK kicks/bans. 3.0 adds the kill tags (` (sliding)`, ` (diving)`, ` (double_kill)`, …) and
  `triggered` events (`last_man_standing`, the one, briefcase). Cosmetic for gameplay.
* **Spectator:** `StartObserver` 2.1 0x1005a400 is SDK-like plus cash floor and cash message. Chase-cam
  modes are client-driven (2.0.6: "force chase cam", 2.0.9: first-person spectator cut, locked chase cam
  kept). The server side was not diffed in detail (UNVERIFIED); the port's `observer_set_mode` etc. in
  `rules/lifecycle.rs` follow 3.0.
* **DeathNotice** (2.1 `FUN_1004ede0`): same weapon naming (strip `weapon_`/`monster_`/`func_`,
  "Throwing Knife", "Shrapnel", "M61 Grenade", "Kung Fu", "<gun> Stock"). Same `DeathMsg` layout.

---

## 12. Things 3.0 has that 2.1 does not (disable in 2.1 mode)

* Worldspawn `gamemode` key; `mapteams`/`teammodels`; `mp_teammodels`; 4-team TS team table; `info_player_teamN`.
* CTB (`ts_briefcase`/`ts_flag`, `TSFlag`, capture scoring, `IsCTB` fraglimit), `ts_scoregiver`, `ts_sellzone`,
  `ts_timer`, `ts_customtarget`, `ts_playeramount`, `ts_groundammo`, `ts_wind`, `ts_fog`/`ts_emitter`/`ts_particle`,
  `info_breakable` + per-breakable `respawntime`/`respawntarget`.
* `ts_mapglobals` flags 32 (no round timer) and 64 (superjump for everyone); `ts_trigger` `message`/`attackerteam`/flag 8.
* `pwupmult`, ts_powerup spawnflags random set, armor excluded from random powerups, instant infinite clip
  (MultiplyClips), `TSMBlur`, slow-motion interpolation (eased GoSlow), "1.0 = normal" `fuser1` encoding.
* Kill extras: specialist-suicide -5, victim +900 cash, headshot/knife/katana/coldcock/own-weapon HUD lines,
  `#TS_*` titles, kill log tags, `last_man_standing`/the-one log events, "%d men standing!".
* The One: speed 330, overheal regeneration, decay exemption, dive/stamina exemptions, team-index logic.
* Armor: `armor_absorb` non-depleting model; kevlar buyable in DM; vest slot cost.
* Server commands `globalslow`, `restartround`, `weaponrestriction`, `loadweapons`, `saveweapons`;
  client commands `respawn`, `motd`, `fullupdate`, `lasclr_`.
* TraceAttack extra ×0.7 window (`+0x524`), shotgun ×1.5 headshots, scaled `TSTakeDamage` byte; death `TSMotionBlur`.
* Round-restart weapon refund; 10 s join deadline; `CashBased()` forced off.
* `botarmor` cvar.

## 13. Things 2.1 has that 3.0 lacks (add for 2.1 mode)

* Map-prefix mode selection and **working round modes 2/3** (round TDM `tr_`/`cs_`/`de_`, objective `tm_`) with
  team cash, TeamWin payouts, side swap every 3 rounds, objective entities, bomb wires (`DelObj` message).
* **Working cash economy** (`usecash` in DM/TDM, always in 2/3): 3000 floor, 900/point kill cash, priced buys,
  kevlar 1900 (round modes only), `cashforwin`/`cashforlose`/`initial_cash`/`respawnnumber` as real cvars,
  wingiver `victorycash`/`defeatcash`.
* Polled cvars `globalslow`, `restartround`, `weaponrestriction` (values 1..5).
* Live `lastmanstanding` cvar; 25 s join deadline; mode-3 `playerrespawn` from ts_mapglobals.
* Global 60 s `RespawnEntities` tick (breakables and doors) in DM/TDM.
* Auto powerups only on maps without `ts_powerup`; random pool includes armor; timed infinite-clip
  powerup; longer stored durations (5/3/3/5); slow factors 0.55/0.35 and 0.6/0.15; slowmo spawn bonus
  (3 s) in round modes; armor powerup dropped on death; +use duplication bug.
* Stunt kill +2 (no speed check), 1 s double-kill window, spree constants (+50 hp, pause 3 s), slowmatch cap 5,
  death-cam point 0.15 × 1.5 s.
* Depleting armour with the `dmg = armor` overflow rule.
* The One: +10·players health per kill (cap 200), disarm immunity, `mp_theone`/`mp_theothers` models.
* Model-based HL teamplay on DM maps (`mp_teamlist`).
* Speed by slots 170..310 (cap 310).
* Client commands `give` (cheats), ungated bot-node editing, `testpath`; `cashala` = 10000.
* Messages `GloSlow` (never sent), `DelObj`, `KAlign`, `Flashlight`, `FlashBat` (the last three are
  outside this area).

## 14. Client vs server

Server-only (no prediction impact): game mode selection, teams, scoring, sprees, The One, cash, buying
rules, round flow, objectives, respawn timing, votes, armour model, headshot multipliers, spawn points,
powerup pickup/selection/durations, auto spawner, RespawnEntities, cvars/commands.

Shared / must also change on the client for prediction to match:
* `shared::ts::speed_by_slots` (2.1: 170..310, cap 310; 3.0: 210..330). The client predicts movement with
  the player's maxspeed; if the port computes it from free slots on both sides, the 2.1 formula must be used
  on both. The One gets no speed change in 2.1.
* Slow-motion application: 2.1 applies `fuser1` instantly (no interpolation) and uses `fuser1 = 0` for
  normal; PM frametime scaling in `shared/src/pm/mod.rs` reads it. Keep sending 1.0 for normal and only
  drop the interpolation (server), or teach the PM that 0 = 1.
* Weapon timers under slow motion and double firerate (`shared/src/weapons/gun.rs`): 2.1 fixes the delay at
  fire time (`rate × SlowMul`, ×6.6666665 under own slow pause, ×0.5 double firerate) and decrements by raw
  frametime; 3.0 decrements timers by `frametime × slowmul` (×1.5 double firerate). Infinite clip as a timed
  powerup skips the clip decrement. These belong in the shared gun code and need the same switch on the
  client, like `ts_pm_arith`.
* HUD/protocol: `GameMode` byte can be 2/3; `RoundTime`, `Objective`, `DelObj`, `Wires`, `TSCash`, `TeamScore`
  ("Specialists"/"Mercenary") must be handled by the client in 2.1 mode; `SrvSett 1` (usecash) now means
  real cash, so the buy menu should show prices; `TSSlowMo` 0.15/0.35; no `TSMBlur`.
* Suggested switch: a server cvar `ts_gameplay` ("30"/"21") latched at map start, broadcast to clients in
  `SrvSett` (new id) so shared code (speed, slow, gun timers) picks the ruleset, mirroring how `ts_pm_arith`
  selects shared arithmetic at runtime.

## 15. Open questions / unverified

* The rounds research pass reported 2.1 kill cash as "modes 2/3 or usecash, team kill −1000". The
  disassembly at 0x1004f91b..0x1004fd57 shows the `GiveKillCash` call (0x1004fd4f) is inside the
  `mode ∈ {0,1} && pts > 0` block (modes 2/3 jump straight to 0x1004fd57), so round modes give no kill cash
  and the −1000 branch is unreachable. This report uses the disassembly.
* `TSGameRules+0x14` (blocks slowmo/slow pause use, also gates the headshot death slow): never written by
  absolute address in either build; meaning unknown (same in both).
* `0x102e0100` identified as `sv_cheats` at map load (`CWorld::Spawn` reads `CVarGetFloat("sv_cheats")`
  into it) — verified for 2.1.
* 2.1 `TSTakeDamage` damage byte: the `__ftol` argument wasn't traced (3.0 scales by 0.5, cap 127, +128 kevlar).
* The `" style!"` suffix text appended to close-combat labels without a stunt (`DAT_100989f0`) wasn't decoded.
* The One "+10·players" counts IsPlayer clients in slots 0..maxClients-1 (index 0 is the world, so the
  last slot is never counted) — off-by-one as compiled.
* Whether `ChangePlayerTeam` in 2.1 forces observer + 5 s respawn on every voluntary change, and whether 2.1
  InitHUD resends the objective list to joiners.
* Spectator/chase-cam server code and votes were only spot-checked.
* An objective enabled in modes 0/1 (round end 0) would count down from a negative time (inferred).
