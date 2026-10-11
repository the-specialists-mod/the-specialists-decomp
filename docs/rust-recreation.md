# Recreating TS 3.0 in Rust

This doc ties the subsystem docs to the Rust workspace
([rust-hlmod](https://github.com/CrunchyMonkies/rust-hlmod), `mymod/`), whose design is in
`docs/rust.md` of the parent workspace. Each step names its source sections. Detailed tables and
formulas live in those docs; this file covers order, crate placement, and decisions.

`mymod` today is milestone 1: the server and client load in FWGS, a player spawns and walks with an
SDK-style `shared::pm`, there's a health HUD, and one `Health` message.

## 1. Corrections to `docs/rust.md`

The original design doc guessed at several TS mechanisms. The binaries say otherwise:

| `rust.md` assumption | What TS 3.0 does | Source |
|---|---|---|
| §11 Particles: "the map entity sends its parameters to clients once" | The server validates `ts_emitter`/`ts_particle`/`ts_fog` and then **removes** them. The client parses the BSP entity lump itself. Only `ts_wind` sends a message (`TSPSys`). | gamerules-entities §5–6, rendering §5 |
| §11 Akimbo: "two independent fire timers" | One timer pair, alternating guns. Holding both buttons fires both guns at once with doubled kick. | weapons §4.7 |
| §8 One entity per weapon (`weapon_beretta`, …) | **One `CTSGun` per player** holding 38 records, reported as a single `weapon_data_t` (id 16) | weapons §4, architecture §7.3 |
| §11 Laser sight: "server applies an accuracy modifier" | No server-side accuracy effect. The silencer does change damage, spread, and kick. | weapons §8.1 |
| §11 Slow motion: scale frametime, maxspeed, timers, framerate, pitch | Correct, and it's concrete: `pev->fuser1` is the per-entity time scale, eased at 7/s and snapped within 0.05. PM multiplies frametime by it and freezes below 0.1. The client also keeps a separate eased cosmetic clock. | player-movement §5, rendering §7.5 |
| §11 Buy menu with a cash check | Prices exist but `CashBased()` is 0. The real limit is **81 inventory slots**, which also sets move speed `210 + free·120/81`. The menu is immediate-mode, not VGUI. | weapons §7, architecture-hud §6.2 |
| §7 Port SDK `pm_shared` first, add TS on top | TS modifies ~11 SDK PM functions (jump 35 u, friction ×0.75, accel by speed, no `IN_USE` slowdown, …). Port the **TS** server PM directly; the client copy is identical. | player-movement §1 |
| §9.3 Bitmap-font HUD can't do UTF-8 | Still true. TS draws everything from two TS-only HUD elements; the SDK elements only receive messages. | architecture-hud §4 |

## 2. Build order

Each step is playable. **S** = server crate, **C** = client crate, **Sh** = `shared`.

### Phase A: movement parity

1. **Sh `pm`: replace the SDK port with the TS one** ([player-movement](server/player-movement.md) §1, §9.1).
   * Use the constants listed there.
   * The `CheckParamters` → scaled frametime → … → `ts_handle()` order.
   * Duck, ladder, water.
   * `fuser1` (time scale) and `iuser4` (stunt bits) as inputs from day one.
   * Unit-test the TS constants the same way the current `pm.rs` tests do.
2. **S/C networking of prediction fields** ([architecture](server/architecture.md) §7, [rendering](client/rendering-effects-prediction.md) §8.3).
   * Send `iuser4`, `fuser1`, `vuser1..4`, `maxspeed`, and `view_ofs` in `UpdateClientData`.
   * Ship TS's `delta.lst` with the missing commas fixed (`team`/`playerclass`).
   * Carry the same fields in `HUD_TxferPredictionData`, `HUD_ProcessPlayerState`, and `HUD_TxferLocalOverrides`.
3. **S stunts** ([player-movement](server/player-movement.md) §2–3).
   * `CTSStunt` triggers: `+alt1` (`IN_ALT1`), double-taps within 0.3 s, the slot-space thresholds.
   * `CTSAnimation` sequence/gaitsequence selection.
   * Recommended improvement over TS: move the triggers into `shared::pm`, so the client predicts
     them without a round-trip delay (player-movement §9.1).
4. **C view** ([rendering](client/rendering-effects-prediction.md) §6–7): `V_CalcRefdef` with bob,
   stair smoothing, and punch, and **recoil written into `cl_viewangles`** (the client applies
   kick for human players).

### Phase B: weapons

5. **Sh weapon tables** ([weapons](server/weapons.md) §1–3, §8.3).
   * Generate `weapons.toml`/`ammo.toml` from the decoded tables, **after** applying the `Sparta()`
     overrides.
   * Load them on both sides; the client and server tables must match.
6. **Sh `CTSGun` state machine** ([weapons](server/weapons.md) §4–5.3, §8.2).
   * Fire modes (auto, semi, burst, pump, akimbo-semi, akimbo-auto), reload phases.
   * Timers decremented by `frametime × fuser1 × (DFR ? 1.5 : 1)`.
   * Spread = accuracy + recoil penalty (max +0.1, decays 0.1/s).
   * Seeded pellet directions.
   * This code runs in `HUD_PostRunCmd` and server `ItemPostFrame`.
7. **S hit resolution** ([weapons](server/weapons.md) §5.4–5.9).
   * Damage falloff `sqrt(10·unit/dist)` beyond `10·unit`.
   * Single penetration (≤ 48 units of wall).
   * Hitgroup multipliers; armour `0.2125` on hitgroups 2–5, never depleted.
   * Stunt and dodge ×0.7.
   * `CBulletManager` simulated bullets when `realbullet` is on or the shooter is in slow-mo.
8. **C events** ([rendering](client/rendering-effects-prediction.md) §4): the 11 handlers (`fire.sc`
   etc.), with the same seeded spread trace so impacts match the server.
9. **Grenades, knives, and kung fu** ([weapons](server/weapons.md) §5.6–5.8, [player-movement](server/player-movement.md) §4).
   * Grenade fuse 3 s in the thrower's time, 110 damage blast.
   * Thrown knives at 1900 u/s.
   * Melee bar 0–100, refilling at 15/s; blocks cost 33.

### Phase C: game flow and HUD

10. **S/Sh message table** ([architecture](server/architecture.md) §3, [architecture-hud](client/architecture-hud.md) §3).
    * Define every TS message once in `shared::protocol` (name, size, fields) and generate both
      writer and reader.
    * Send only the TS replacements (`TSHealth`, `TSArmor`, `PTakeDam`, `TSFade`).
    * Stub-hook the stock and TFC leftovers, so the engine doesn't print errors.
11. **S game rules** ([gamerules-entities](server/gamerules-entities.md) §1, §8).
    * One `GameRules` struct with `mode` + `lms` + `the_one`, driven from `StartFrame`.
    * Spawn selection that prefers spots hidden from enemies, with telefrags.
    * Kill scoring and sprees, power-ups, LMS, The One.
    * Optional: put the dead round/objective modes behind a cvar.
12. **S player extensions** ([weapons](server/weapons.md) §7, [player-movement](server/player-movement.md) §6): inventory slots (81) and speed, loadouts (`tkw`/`tki`/`tka`, re-applied
    at spawn), and power-up holding and activation.
13. **C HUD** ([architecture-hud](client/architecture-hud.md) §4, §7).
    * One immediate-mode pass, in TS draw order.
    * State is filled by message handlers.
    * A UTF-8 font atlas.
14. **C menus on TriAPI** ([architecture-hud](client/architecture-hud.md) §6): buy menu (the `rst_cfg` + loadout protocol), team select, scoreboard
    (72 entries; don't copy the 74-entry loop overrun), MOTD.

### Phase D: entities and presentation

15. **S TS map entities** ([gamerules-entities](server/gamerules-entities.md) §3–6).
    * Implement what shipped maps use first: `ts_powerup` and the auto spawner,
      `ts_groundweapon`/`ammo`, `ts_model`, `ts_trigger`, `ts_dmhill`, `ts_timer`, CTB briefcase and
      flag, `ts_slowmotion`.
    * Register the dead objective classnames as stubs, so maps still load.
16. **C studio renderer** ([rendering](client/rendering-effects-prediction.md) §2): port the SDK
    renderer and add TS's torso/legs split at `Bip01 Dorso`/`Bip01 Spine`. Until then, return 0 from
    `HUD_GetStudioModelInterface`.
17. **C slow-motion presentation** ([rendering](client/rendering-effects-prediction.md) §7.5): the eased cosmetic clock, tint/`TSFade` (written every frame),
    and tempent/particle/sound scaling. Check the sound pitch formula, which evaluates to 400 at
    normal speed.
18. **C particles** ([rendering](client/rendering-effects-prediction.md) §5): the TS sprite particle system, the BSP entity-lump reader for
    `ts_emitter`/`ts_particle`/`ts_fog`, and wind from `TSPSys`.
19. Optional: third-person and stunt camera, laser beams and dots, motion-blur "ghosts" (renderfx 17),
    shadows, client slow-mo bullets with trails.

### Phase E: bots

20. **S bots** ([bots](server/bots.md)). TS's own AI, in this order:
    * The node graph (§11): `.ndm` load/save, `AddNode`/linking, `FindPath` (Dijkstra plus the
      greedy walk, quirks included), `FindPathBetweenPoints`. Pure code, unit-tested against the
      shipped `.ndm` files and `scripts/ndm.py`'s `FindPath` replica.
    * Creation (§2–4): `addbot`/`addcustombot` argument semantics, `bots.txt` name picking and
      `Name//skill`, `BotSetup` instead of `ClientPutInServer`, the `CBot` overrides
      (`Spawn` laser colour, `TraceAttack` look-at, `Killed` chat, `IsNetClient` = false).
    * The brain (§5): button hold timers, module mask and order, `UpdateView` turning, `RunMove`
      with the 450/frames msec. Then the DM state (§6), vision (§7), attack (§8), and the other
      modules (§9): buy, respawn, stunt, look around, power-up, chat (§10).
    * Learning (`botlearn` in `PreThink`) and the node commands (§11.2–11.3).
    * Keep every random draw in TS's order (§13). TS only runs bots on listen servers; dedicated
      servers need a port cvar (or the port's existing quota bots).

## 3. Crate placement

| Crate | Gets |
|---|---|
| `shared` | `pm` (TS port), `weapons` (tables + `CTSGun` state machine + spread/pellets + timers), `protocol` (every message, `iuser4` bit names, `fuser1` semantics), `damage` (hitgroup multipliers and falloff, as pure functions), slot/speed formula |
| `server` | entities (TS + stock map entities + remaps), game rules, bots (brain, states, modules, node graph navigation), `CTSStunt`/animation, hit resolution and penetration, `CBulletManager`, slow-mo propagation, cvars (37) and commands (27 client + 7 server) |
| `client` | input (`IN_ALT1`, `cl_attackswitch`, anti-script gate optional), HUD and menus, events, view, renderer, particles, slow-mo presentation, cvars (107) and commands (93) |
| `goldsrc` | message reader/writer generated from `shared::protocol`, BSP entity-lump parser (client), TriAPI font renderer |

## 4. Fix or keep: original bugs

The docs list bugs found in the binaries. Decide each one on purpose:

| Bug | Recommendation |
|---|---|
| Scoreboard loop writes 2 bytes past the object (74 vs 72) | Fix |
| Objective/ShowObj bounds checks are always true | Fix |
| `Buy_SMGs` missing `#` (localisation key) | Fix |
| `default_fov` forced to 80 after registration | Fix (honour the cvar) |
| `weapon_9MMAR` exported instead of `weapon_9mmAR` (HL maps don't resolve) | Fix (export both) |
| `ts/delta.lst` missing commas, lists unused `team` | Fix |
| Bots: `fabs` aim cone fires backwards, dead enemy kept as target, cover cache stores the enemy origin, `FindPath` backtrack pops the current node, `Load` rejects 512 nodes, `savenodes`/`loadnodes` use different paths, unprotected node commands (bots §15) | Keep the AI quirks for parity; fix the file-path and access-check ones behind port cvars |
| `winnerteam` off by one for teams 3/4, `ts_timer` "Loop" flag ignored | Fix, but check map compatibility |
| Sound pitch `100 − ts·(−300)` (400 at normal speed) | Verify in game before deciding |
| Blocks work from any direction (no facing check) | Keep for parity, or put behind a cvar |
| Kung-fu damage table (decompiler garbled the locals) | Re-check against disassembly before porting |

## 5. Open questions for in-game verification

* Torso yaw in the renderer's split-bone code looks like a typo (rendering §2.3).
* Pellet radial distribution `1−r³` (weapons §8.5).
* Katana damage/delay variants (weapons §8.5).
* Whether the client adds a laser accuracy bonus (weapons §8.5).
* Whether fake clients survive `changelevel` with their `CBot` data, and whether `SetClientKeyValue` on a bot triggers `ClientUserInfoChanged` (bots §15). Check with TS under Wine.
* Recoil via `cl_viewangles` copy-back was confirmed on FWGS only, not on Steam GoldSrc (rendering §6).
