# TS 2.1 vs TS 3.0: bots, map entities, console/client commands, misc

Scope: entity classes and their behaviour/keyvalues, the bot AI, server/client commands, and other gameplay
items not covered by the weapons/movement/rules/client reports.

Addresses: `2.1` = `~/dev/hl/ts21/dlls/mp.dll` (= `ts30-decomp/ts21/server-win/`), `3.0dll` = TS 3.0 `mp.dll`
(`server-win/`), `.so` = `ts_i386.so` (`server/`, Ghidra numbering). All 2.1 claims below were read from the
2.1 decomp and checked in `objdump -d -M intel`, unless marked **UNVERIFIED** or **(inferred)**.

> **Warning about the 2.1 export's names (affects anyone reading `ts21/server-win/`).**
> `docs/method.md` says "2.1 vtable slot i == 3.0 slot i+7". That is wrong. 2.1 already has 3 TS virtuals in
> front of `Spawn`: slot 0 = `BreakableRespawn(bool)` (overridden by CBreakable/CPushable/CBaseDoor/CRotDoor,
> body at 0x100423f0), slot 1 = `CanUsedTroughWalls()` (`mov al,1; ret` 0x10008b20; CTSGroundWeapon 0x10066580 and
> CTSWorldGun 0x10066560 override it with `xor al,al; ret`), slot 2 = an unknown virtual whose default is
> `pev->nextthink = time + 1.0` (0x10008b30; no entity class overrides it). Then **2.1 slots 3–9 = 3.0 slots 7–13**
> (Spawn, Precache, KeyValue, Save, Restore, ObjectCaps, Activate). 2.1 has no `OnFreeEntPrivateData` /
> `ShouldCollide` (those came with `GetNewDLLFunctions`, which 2.1 doesn't export), so **2.1 slot ≥10 = 3.0 slot + 6**
> (2.1 player: 37 IsAlive, 42 IsPlayer, 43 IsNetClient, 44 TeamID; 3.0: 43/48/49/50). A 7th slot is inserted
> somewhere after TeamID (not located). Evidence: CFuncWall 2.1 slot 5 (0x10008b60) sets `kvd->fHandled = 0`
> (KeyValue); BotSetup calls `vtable+0xc` (slot 3) as Spawn; slot 37 body = `deadflag==0 && health>0`.
> Consequence: in `ts21/server-win/decomp`, a function named **`X::Save` is really `X::Spawn`, `X::Restore` is
> `X::Precache`, `X::ObjectCaps` is `X::KeyValue`**, `CBaseEntity::Blocked` near ground weapons is `Use`, etc.
> This report uses the corrected meanings.

---

## Summary table

| Feature | TS 2.1 | TS 3.0 | 2.1 evidence | 3.0 evidence | Rust port location |
|---|---|---|---|---|---|
| Entity classnames | 307 exports, strict subset of 3.0 (no 2.1-only classes) | +47 exports: 12 new `ts_*`, `info_breakable`, `info_player_team1..4`, 16 HL weapon/ammo aliases | PE export table | PE export table | `entities/ts/mod.rs` link table, `entities/mod.rs::dispatch_spawn` |
| HLDM weapon/ammo classnames (`weapon_9MMAR`, `ammo_buckshot`, …) | Not present (removed in 2.04) → entities fail to spawn | Spawn random TS ground weapons / ammo (CTS*Weapon/CTS*Ammo) | export list | `.so` CTSRifleWeapon::RandomRifle 0xc97d8 etc. | `entities/ts/ground.rs::hl_weapon_ids/hl_ammo_types` |
| `func_breakable` respawn | Broken breakables stay as dead/NODRAW; `RespawnEntities` restores **all** broken `func_breakable`, `func_door`, `func_door_rotating` every **60 s** in DM/TDM (LMS off) and at round restart; no box check; no keys | Per-entity timer: `respawntime` (0 → 30 s, <0 → removed), player-in-box retry 5 s, `respawntarget` (flag 8), via `info_breakable` helper | 2.1 Think 0x10043d.. (`+0x1b8` timer), RespawnEntities 0x10044400, BreakableRespawn 0x100423f0, KeyValue 0x1001b050 | `.so` CBreakable::Die/BreakableRespawn 0x74e84, CInfoBreakable::RespawnThink 0x75da0 | `entities/stock/breakable.rs::{die,schedule_respawn,breakable_respawn,key_value}`, `rules/frame.rs::think` |
| `ts_powerup` random set | `1 << RL(0,8)` (all 9 types incl. armor 0x80 and superjump 0x100), or `RL(0,7)` when cvar `superjump` ≠ 0; spawnflags ignored | random from `spawnflags` set (fallback 0x1ff); `pwupmult` key | SetupPowerUp 0x10059ce0, KeyValue 0x10059c10 | gamerules-entities.md §4 | `entities/ts/powerup.rs::setup/key_value` |
| Powerup durations | Slow-mo **5 s**, Infinite Clip **3 s (stored, not instant)**, Slow Pause **3 s**, Double Firerate **5 s** | 3 / instant / 2 / 3 (× `pwupmult`) | SetupPowerUp 0x10059ce0 | §4.1 | `entities/ts/powerup.rs::body_and_secs/duration` |
| Powerup pickup rules | Instant mask **0x1e4**; slow-mo stacking if held slow-mo has **< 5 s**; armor `+100` capped 100 | instant 0x1e6; stacking < 3 s | WaitTouch 0x1005a160, PlayerAddPowerUp 0x100599d0 | §4.1 | `entities/ts/powerup.rs::pickup`, `rules/powerup.rs::add_powerup` |
| Auto powerup spawner | Only when the map has **no `ts_powerup`**; type = `1 << RL(0,8)` (armor and superjump possible) or slow-mo (25 %, slowmatch≠1) | Always (DM/TDM); `GetRandomPowerup(0x1ff)` excludes armor and (map-flag) superjump | 2.1 CTSGameRules Think (global_10021f00.c:~3395), PutPowerUp 0x10059840 | `.so` CTSGameRules::Think | `rules/frame.rs::auto_powerups/put_powerup`, `rules/state.rs::random_powerup` |
| `ts_groundweapon` | Keys `tsweaponid`, `wduration`, `wextraclip` only; picked up by **touch while holding +use** (or Use) | + `buyable`, `attackerteam`; +use search only (touch pickup only for id 29) | KeyValue 0x10065bb0, WaitTouch 0x10066440, Use/GetWeapon 0x10066250 | `.so` 0xa19f0/0xa26cc/0xa2328 | `entities/ts/ground.rs::GroundWeapon::{key_value,touch}` |
| `ts_mapglobals` | Keys `playerrespawn` (respawns per round in objective mode) and `playeratatime` (read, user unknown) | KeyValue rejects all | KeyValue 0x10042090, FUN_10042d50 | §5 | `entities/ts/misc.rs::MapGlobals` |
| `ts_trigger` | Keys `nextcheck`, `allowedteam` (0 = team named "Specialists", 1 = "Mercenary", ≥2 any). No message, no flag-carrier flag, no `attackerteam` | + `attackerteam`, team index, printf `message`, spawnflag 8 | KeyValue 0x10040a70, WaitTouch 0x10040c00 | §5 | `entities/ts/triggers.rs::Trigger` |
| `ts_objective_ptr` | Only `objmsgspec`, `objmsgmerc` (2 teams) | + `objmsgteam3/4`, `objmsgall` | KeyValue 0x10050800 | §6 | `entities/ts/misc.rs` (stub) |
| Bots: aim error | `origin + (RL(-32,32), RL(-32,32), RL(-16,32)) / max(skill,0.5)`, recomputed ≤10 Hz, no per-frame tracking | `RF(-8,8)` jitter + head/body z, per-frame tracking + knife lead | attack think 0x1005e5e0 (0x1005e704..) | 0x1006c3c0 / 0x1006c520 | `bots/attack.rs::{think,compute_aim_offset}` |
| Bots: view turning | Pitch snaps instantly; yaw turns at **constant 300 °/s** (600–1200 °/s on look-around frames), skill-independent | Exponential approach, rate 10×clamp(skill,0.5,2) /s | RunMove 0x100603d0, ChangeYaw 0x10060120, Think 0x100614e0 (`+0x1b14 = 30`) | 0x1006e500 | `bots/brain.rs::{update_view,run_move,look_at}` |
| Bots: fire gating | Always calls fire control (no facing check) | Only if `|dot| > 0.9` or melee | 0x1005e904 | 0x1006c520 (c) | `bots/attack.rs::think` |
| Bots: buy | No kevlar ever; 1–5 or 10 knives always; no Contender; Beretta = akimbo id 8; SMG 17 ammo 1 | kevlar 70 % (`botarmor`), knives sometimes, Contender etc. | Buy 0x1005f320 | 0x1006d630 | `bots/modules.rs::buy` |
| Bots: stunt choice | `RL(1,2)`: 50 % dive, 50 % jump-flip | 25/101 flip, 75/101 dive | 0x1005fc40 | 0x1006e130 | `bots/modules.rs::stunt` |
| Bots: misc | no damage reaction, respawn by pressing fire, no `botarmor`, no `botlearn 1` auto, `bots.txt` 31 names (8 with skill) | `CBot::TraceAttack` turn-to-attacker, direct StopObserver respawn, `botarmor`, auto `botlearn 1` | CBot vtable 0x10089220 | §2, §8.3.5, §9.1 | `bots/{mod,brain,files}.rs` |
| `.ndm` node format | Identical (n<512, 20-byte nodes, 8-byte links, `TS\maps\` save path) | same | Load 0x100639d0 | 0x10071cb0 | `bots/nodes.rs` (no change) |
| Server commands | `addbot`, `addcustombot` only; `globalslow`, `restartround`, `weaponrestriction`, `superjump`, `customweapons` are **cvars** polled each frame | + commands `globalslow`, `restartround`, `weaponrestriction`, `loadweapons`, `saveweapons`; `superjump` cvar gone | pfnGameInit 0x1001e750, Think 0x10043... | 0x10026680 | `rules/commands.rs::register_server_commands`, `rules/cvars.rs` |
| Client commands | + `give` (sv_cheats); no `respawn`, `lasclr_`, `motd`, `fullupdate` | opposite | pfnClientCommand 0x1000d4b0 | 0x1000f8a0 | `rules/commands.rs::client_command` |

---

## (a) Entity classes

### a.1 Export diff (classnames)

Parsed both PE export name tables (`.work/exp.py`). 2.1 has 307 names, 3.0 has 354. **Every 2.1 export exists in
3.0**; there is no 2.1-only entity.

**Only in 3.0** (47):

* New TS entities (12): `ts_briefcase`, `ts_flag`, `ts_customtarget`, `ts_emitter`, `ts_particle`, `ts_fog`,
  `ts_groundammo`, `ts_playeramount`, `ts_scoregiver`, `ts_sellzone`, `ts_timer`, `ts_wind`.
* Helpers / spawns: `info_breakable`, `info_player_team1`..`info_player_team4`.
* HLDM aliases (CHANGELOG 2.04 "Removed HL weapons … and other HLDM entities"; 3.0 brings the names back as TS
  spawners): `weapon_9MMAR`, `weapon_crossbow`, `weapon_egon`, `weapon_gauss`, `weapon_handgrenade`,
  `weapon_hornetgun`, `weapon_rpg`, `weapon_satchel`, `weapon_shotgun`, `weapon_snark`, `ammo_9mmAR`,
  `ammo_ARgrenades`, `ammo_buckshot`, `ammo_crossbow`, `ammo_gaussclip`, `ammo_rpgclip`.
* Non-entity: `GetNewDLLFunctions`, `Server_GetBlendingInterface`, plus think/touch member exports of the new
  classes (`CTSFlag::*`, `CTSGroundAmmo::*`, `CTSTimer::WaitThink`, `CInfoBreakable::RespawnThink`, …).

TS classnames present in **both**: `ts_bomb`, `ts_dmhill`, `ts_groundweapon`, `ts_hack`, `ts_mapglobals`,
`ts_model`, `ts_objective_manager`, `ts_objective_ptr`, `ts_powerup`, `ts_slowmotion`, `ts_slowmotionpoint`,
`ts_teamescape`, `ts_trigger`, `ts_wingiver`, plus internal `TSWorldGun`, `TSAmmoPack`, `weapon_tsgun`, `knife`,
`m61_grenade`, `shrapnel`, `deadcorpse`. 2.1 still exports the HL/Xen leftovers (`item_longjump`, `xen_*`,
`monster_hevsuit_dead`, `cycler_*`, …), and so does 3.0.

3.0 HLDM alias mapping (from `.so`; the port already implements it in `ground.rs`), all disabled in 2.1 mode:

| Classname | 3.0 class | Weapon(s) / ammo |
|---|---|---|
| `weapon_crossbow` | CTSSniperWeapon | 18 |
| `weapon_shotgun` | CTSShotgunWeapon | random of 4, 26, 33, 20, 11 |
| `weapon_egon` (+`weapon_gauss` in the port) | CTSRifleWeapon | random of 13, 5, 27, 15 |
| `weapon_rpg` | CTSSMGWeapon | random of 23, 7, 6, 19, 17, 3 |
| `weapon_9MMAR` | CTSBigPistolWeapon | random of 31, 12, 36 |
| `weapon_hornetgun` | CTSMGWeapon | 32 (+100 rounds) |
| `ammo_ARgrenades` | CTSKnifeWeapon | random of 25, 35 |
| `weapon_snark` | CTSKatanaWeapon | 34 |
| `weapon_handgrenade` | CTSGrenadeWeapon | 24 |
| `ammo_*` | CTS*Ammo | half a max-carry of the matching ammo types |

### a.2 Class sizes (`sizeof`, from the allocators)

2.1 sizes computed from the inlined `pfnPvAllocEntPrivateData(ed, size)` in each export
(`.work/sizes.py`), 3.0 from `server-win/classes.tsv` (or `.so` size − 0x10).

| Class | 2.1 | 3.0 mp.dll | Note |
|---|---|---|---|
| CBasePlayer (`player`) | 0xae4 | 0xb78 | |
| CBot | 0x2600 (brain 0x1b1c at +0xae4) | 0x25f0 (brain 0x1a78 at +0xb78) | skill at brain+0x1b18 vs +0x1a74 |
| CTSGun (`weapon_tsgun`) | 0xdb4 | 0xa00 | |
| CBreakable (`func_breakable`) | 0x78 | 0x108 | 3.0 adds respawntime/respawntarget/EHANDLE |
| CTSTrigger | 0x60 | 0x100 | 3.0 adds message buffer, attackerteam |
| CTSPowerUp | 0x88 | 0x8c | 3.0 adds `pwupmult` |
| CTSGroundWeapon | 0x94 | 0xa4 | 3.0 adds buyable/attackerteam/extra |
| CTSObjectivePointer | 0x5c | 0x68 | 2 vs 4(+1) message strings |
| CTSModel | 0x150 | 0xf4 | different base class; behaviour equal (a.9) |
| CTSWorldGun | 0xb8 | 0xc8 | weapons report |
| Same size both | CTSSlowMotion 0xf8, CTSSlowMotionPoint 0xe8, CTSDMHill 0x70, CTSMapGlobals 0x5c, CTSBomb 0x78, CTSHack 0x70, CTSTeamEscape 0xe8, CTSWinGiver 0x6c, CTSObjectiveManager 0x90, CTSAmmoPack 0x98, CTSShrapnel 0x8c, CTSKnife 0x94 | | |

### a.3 `func_breakable` (+ doors) respawn — **2.1 has BreakableRespawn, but no per-entity timer**

The task assumption "BreakableRespawn is 3.0-only" is wrong: the virtual exists in 2.1 (vtable slot 0).

2.1 `CBreakable::KeyValue` (0x1001b050, named `ObjectCaps` in the export) handles: `explosion`
(`directed`→1 else 0), `material` (0..9, else 1), `deadmodel`, `shards` (ignored), `gibmodel`, `spawnobject`
(1..21 → table 0x10093050), `explodemagnitude` (→ `pev->impulse`), `lip` (ignored), else CBaseDelay.
**No `respawntime`, `respawntarget`.**

2.1 `CBreakable::Spawn` (0x10042440): saves `m_maxHealth (this+0x5c) = pev->health`, `takedamage = (flags&1)?0:1`,
`solid=SOLID_BSP(4)`, `movetype=PUSH(7)`, etc. (SDK).

2.1 `CBreakable::Die` (0x10042540) ends with `solid = 0; SUB_UseTargets; nextthink = ltime+0.1; deadflag = 2;
effects = EF_NODRAW; takedamage = 0; think = 0x10015e10;` then `spawnobject`/explosion. The entity is **kept**.

2.1 `BreakableRespawn(bool force)` (0x100423f0, shared by CBreakable and CPushable):
```c
if (pev->deadflag == DEAD_DEAD || pev->effects == EF_NODRAW || force) {
    pev->deadflag = 0; pev->health = m_maxHealth /*this+0x5c*/; pev->effects = 0;
    m_pfnThink /*this+0x10*/ = NULL;
    this->Spawn();                       // vtable slot 3
}
```
CBaseDoor (0x10013b80) and CRotDoor (0x10015400) have their own overrides (same deadflag/effects test, reset and
re-Spawn) **(inferred: door bodies not decoded line by line)**.

2.1 `CTSGameRules::RespawnEntities(bool force)` (0x10044400):
```c
for each "func_breakable", "func_door", "func_door_rotating": e->BreakableRespawn(force);   // slot 0
if (mode == 3 || mode == 2 || lastmanstanding != 0) {
    for each "ts_groundweapon": CTSGroundWeapon::Fall(e);
    if (lastmanstanding != 0) for each "ts_powerup": CTSPowerUp::Fall(e);
}
```
Called from `RestartRound`, `GameDLLInit`, and from `CTSGameRules::Think` (2.1 global_10021f00.c ~line 3420):
```c
if (mode <= 1) {                                   // DM / TDM
    ...
    if (lastmanstanding == 0 || mode != 0) {        // i.e. not DM-with-LMS
        if (rules+0x1b8 < time) { RespawnEntities(false); rules+0x1b8 = time + 60.0; }
    } else { /* LMS: RestartRound / CheckDeads timers */ }
}
```
So in 2.1 DM/TDM **every broken breakable (and every "dead" door) comes back together on a global 60 s clock**,
regardless of players standing inside, with no `respawntarget` firing.

3.0 (`.so` 0x74e84 / 0x75da0 and Die): `respawntime` (int keyvalue, default 0). In Die: `respawntime < 0` →
`SUB_Remove`; else the `info_breakable` helper thinks at `time + (respawntime == 0 ? 30 : respawntime)`.
BreakableRespawn: if `respawntime < 0` remove; if `UTIL_EntitiesInBox(absmin, absmax, flags 0x2008)` finds
anything → retry in 5 s; else fire `respawntarget` (spawnflag 8; delayed via `DelayedUse` if `delay`), restore.
3.0 `RespawnEntities` iterates `info_breakable` (not func_breakable/doors) and also `ts_flag`, and the periodic
60 s call is gone from Think.

**2.1 mode implementation:** in `breakable.rs`, ignore `respawntime`/`respawntarget` keys (treat as unset), make
Die keep the entity hidden without scheduling, make `breakable_respawn` skip the box check and the target, and add
the 60 s sweep (`rules+0x1b8`) to `rules/frame.rs::think` that calls `breakable_respawn(false)` on all
`func_breakable`, `func_door`, `func_door_rotating` (door respawn: `entities/stock/doors.rs`).

### a.4 `ts_powerup` (2.1)

KeyValue 0x10059c10: `pwuptype` (int → this+0x74), `pwupduration` (int → this+0x84). Nothing else (no
`pwupmult`; spawnflags are not used as the random set).

Spawn 0x10059e70: classname `ts_powerup`, `models/powerup.mdl`, `MOVETYPE_TOSS`, solid 2, `rendermode 1`,
`renderamt 255`, `renderfx 14`, framerate 1, think `Fall` at +0.1, `SetupPowerUp(pwuptype, -1, 0.0, permanent=1)`.

`SetupPowerUp(type, secs, life, permanent)` 0x10059ce0:
```c
if (type < 1)                     { r = RL(0, superjump_cvar ? 7 : 8); random = 1; type = 1 << r; }
else if (superjump_cvar && (type & 0x100)) { type = 1 << RL(0,7); random = 0; }
else random = 0;
body/seconds: 0x1 → body 4, 5 s | 0x2 → body 2, 3 s | 0x4 → body 0 | 0x8 → body 9, 3 s | 0x10 → body 1, 5 s
              0x20 → body 5 | 0x40 → body 6 | 0x80 → body 7 | 0x100 → body 8
if (secs > 0) seconds = secs;
this+0x7c = 100.0 (armor amount); this+0x70 = permanent; this+0x78 = time + life;
```
`superjump_cvar` = 2.1 cvar `superjump` (value 0x10093d38); 3.0 replaced it with `ts_mapglobals` flag 64.

Fall 0x10059f90: hidden (`EF_NODRAW`, re-check every 5 s) if `nopowerup == 1` or mode 2/3; temporary ones are
removed when `time > life`. OnGround: solid 1, clear NODRAW, `effects |= 2`, WaitTouch/WaitThink.
WaitThink: temp powerups fade `renderamt = min((life-time)/30*255, 255)` (same as 3.0).

WaitTouch 0x1005a160 (player `pl`, held type `pl+0x6a0`, active `pl+0x69c`, held secs `pl+0x6a8`):
```c
if (!pl->IsPlayer() || !pl->IsAlive()) return;
ok = ((held == 0 || (held == 1 && type == 1 && heldSecs < 5) || (pl->pev->button & IN_USE)) && active == 0)
     || (type & 0x1e4);                                  // 0x1e4 = kungfu|grenade|health|armor|superjump
drop = (button & IN_USE) && held && (held != 1 || heldSecs > 4) ? held : 0;
if (!ok || !PlayerAddPowerUp(pl, type, this)) return;
if (drop) CreatePowerUp(drop, -1) at pl origin;
temporary → UTIL_Remove; permanent → if random re-roll; hide; respawn after
    pwupduration < 1 → 60 s; < 11 → 10 s; > 179 → 180 s; else pwupduration;
print message (TSHudMessageOne 0,0,0,1,30), FireTargets(target).
```
`PlayerAddPowerUp` 0x100599d0:
* 0x80 armor: `pev->armorvalue += 100.0` (this+0x7c), cap 100.
* 0x04 kung fu: if not already, set flag `pl+0x6c6`, send `PwUp`-type msg (short 4, byte 0).
* 0x100 superjump: if not already, flag `pl+0x6c7`, physinfo `mj=1`, msg (0x100, 0).
* 0x40 health: `if (health < 150) health = 150`; overheal timer `pl+0x6b4 = time + 1.0`.
* 0x20 grenade: `PickUpWeapon(24)`; failure → not picked.
* **anything else (0x1, 0x2, 0x8, 0x10) is stored**: `active = 0; held = type; pl+0x6a4 = 0; heldSecs = secs`.
  So Infinite Clip is a stored/activated powerup in 2.1 (3 s), not 3.0's instant `MultiplyClips`.
* Always plays `items/gunpickup2.wav`.
What the stored types do once activated (`UsePowerUp` 0x10056a90) is the rules/movement reports' area.

Auto spawner (2.1 CTSGameRules Think): runs in DM/TDM only when **no `ts_powerup` exists in the map**
(`rules[1]` is set to 1 then cleared if `UTIL_FindEntityByClassname("ts_powerup")` finds one; checked once) and
`nopowerup != 1`:
```c
if (next <= time) {
    r = RF(0,1);
    idx = (r >= 0.25 || slowmatch == 1.0) ? RL(0,8) : 0;      // index, not mask
    ok = PutPowerUp(idx);   // 0x10059840: CreatePowerUp(1 << idx, -1), life 60 s, at a random
                            // info_player_deathmatch (≤32, tried from a shrinking random list),
                            // no ts_powerup within 128 (0x43000000) units
    next = time + (ok ? 20 : 1);
} else if (next - time > 21) next = 0;
```
3.0 runs the spawner on every DM/TDM map and uses `GetRandomPowerup(0x1ff)` (never armor; no superjump when the
map flag gives it to everyone). Rust: `rules/frame.rs::auto_powerups`, `rules/state.rs::random_powerup`.

### a.5 `ts_groundweapon` (2.1)

KeyValue 0x10065bb0: `tsweaponid` (→ +0x8c), `wduration` (→ +0x88), `wextraclip` (→ +0x90). **No `buyable`,
`attackerteam`.**

Spawn 0x10065c70: removed if the weapon id has no info; model = `info + 0x1ea` (w_ model); spawnflag 16 →
`MOVETYPE_FLY (5)` else `TOSS (6)`; solid 2; think `Fall` +0.1; `pev->iuser4 |= 2`; `onWall` byte = 0.
Fall 0x100660b0 (every 0.5 s until landed): flag 16 → `PutOnWall` (0x10065dc0, 8 directions × 45°, 1024-unit
traces, nearest non-takedamage non-NODRAW hit; origin = end + 2·normal; angles = VecToAngles(normal), pitch +90;
none found → `angles.z = 90`), else when on ground: angles.x = angles.z = 0; then sound
`items/weapondrop1.wav`, `MOVETYPE_FLY`, solid 1, clear NODRAW, `effects |= 2`, touch `WaitTouch`.

Pickup: `WaitTouch` 0x10066440 → only `if (toucher->pev->button & IN_USE)` call `GetWeapon` (0x10066250). The
`Use` virtual (slot named `CBaseEntity::Blocked`, 0x10066240) calls `GetWeapon` too.
`GetWeapon`: IsPlayer && IsAlive && neither NODRAW → `PickUpWeapon(id, NULL, spawnflags /*attachments*/, 1)`;
on success hide; respawn: `wduration < 1` → 60 s, except never in modes 2/3 (respawned by RespawnEntities);
`< 2` → 1 s; `> 179` → 180 s; else `wduration`. `wextraclip > 0` and the player has 0 reserve of that ammo type →
give `wextraclip` (FUN_10049f40) + `items/9mmclip1.wav`. Then `message` (HUD) and `target`.
Same respawn table as 3.0. Differences: no buy/cash path; 2.1's touch-with-+use works through walls as long as
the player's box touches it (3.0's +use search needs a clear eye line because `CanUsedTroughWalls` is false; 2.1
also has that override for the `Use` path). Port: `ground.rs::GroundWeapon::touch` should pick up when
`button & IN_USE` in 2.1 mode; ignore `buyable`/`attackerteam`.

### a.6 `ts_mapglobals`

2.1 KeyValue 0x10042090: `playerrespawn` (int → +0x54), `playeratatime` (int → +0x58). Spawn: invisible, think
every 10 s. GameDLLInit/Think copies `allowed = spawnflags ^ 0x1f` and the two bytes into the rules
(`rules+0x54cc` = playerrespawn, `+0x54cd` = playeratatime). `playerrespawn` is used by `SetPlayerRespawnTime`
(FUN_10042d50) in objective mode 3: 0 → respawn after N s unlimited; N > 0 → only while the player's respawn count
(`pl+0x732`) < N, respawn at `min(N s, round time left)`, join window `min(25, left)`. No reader of
`playeratatime` found (**UNVERIFIED: unused**). Spawnflags 32 (no round timer) / 64 (superjump for all) of 3.0:
2.1 only XORs `spawnflags` with 0x1f for the weapon mask; **UNVERIFIED** whether bits 32/64 do anything in 2.1
(superjump is the `superjump` cvar there).

### a.7 `ts_trigger`

2.1 KeyValue 0x10040a70: `nextcheck` (float → +0x5c), `allowedteam` (float → int, +0x58). Returns `fHandled = 0`
for anything else (pev keys still work). Spawn 0x10040af0: invisible trigger brush (`effects |= NODRAW`, solid 1,
movetype 5), touch `WaitTouch`, first allowed time = `time + max(nextcheck, 0.5)`.
WaitTouch 0x10040c00:
```c
if (time < nextAllowed || !IsPlayer || !IsAlive) return;
if (allowedteam == 0 && stricmp(TeamID(), "Specialists") != 0) goto skip;   // FUN_1007e860 = stricmp
if (allowedteam == 1 && stricmp(TeamID(), "Mercenary")   != 0) goto skip;
FireTargets(target);                      // allowedteam >= 2 (or < 0): anyone
skip: nextAllowed = time + max(nextcheck, 0.5);
```
No `message` print, no `attackerteam`, no flag-carrier spawnflag. 3.0 compares team indices (2 → any) and prints
`message` with `%s` = name. Port: `entities/ts/triggers.rs::Trigger`.

### a.8 Objective entities (2.1)

The classes exist with the same sizes as 3.0 (bomb 0x78, hack 0x70, teamescape 0xe8, wingiver 0x6c, manager 0x90).
KeyValues (string lists from each KeyValue):
* `ts_objective_manager` (0x100503a0): `objptargeta..h`, `messagea..d`, `targetontimeleft`, `targetonspecdead`,
  `targetonmercdead` (same as 3.0).
* `ts_objective_ptr` (0x10050800): **only `objmsgspec`, `objmsgmerc`** (3.0 adds `objmsgteam3`, `objmsgteam4`,
  `objmsgall`).
* base CTSObjective (0x10050ec0): `attackerteam`.
* `ts_wingiver` (0x10050bb0): `victorycash`, `defeatcash`, `winnerteam`, `callsnumber` (same names as 3.0;
  **UNVERIFIED** whether 2.1 uses the cash values — 2.1 has `usecash`/`cashforwin` cvars).
* `ts_bomb` (0x100515a0): `defusetime`, `cutwires`. `ts_hack`: `hackingtime`. `ts_teamescape`: `escapepercentage`.
2.1 has no `ShowObj` user message, so `Freeze` doesn't hide HUD objectives the 3.0 way (client report). Whether
modes 2/3 are reachable in 2.1 is the rules report's question; these entities only matter if they are.

### a.9 Other shared entities

* `ts_dmhill`: same keys (`nextcheck`, `fragamt`, `fragamtteam`), same size, same logic (first toucher is king,
  reset on enemy touch or absence > nextcheck, frags every max(nextcheck,0.5) s, team mode gives `fragamtteam` to
  every player whose team string matches, "%i frags for him/they" message). No gameplay difference found.
* `ts_slowmotion` (keys `duration`, `slowamt`, flags 1/2/4) and `ts_slowmotionpoint` (created by PlayerKilled and
  TSExplosion): same sizes and structure. No difference found.
* `ts_model`: both versions: precache+set model, `SOLID_SLIDEBOX (3)`, movetype 0, takedamage 0, health 1,
  yaw_speed 5, ResetSequenceInfo; removed without `model`. (gamerules-entities.md calls it SOLID_BBOX; the `.so`
  writes 3.) 2.1 inherits from a larger base (0x150 vs 0xf4). No gameplay difference found.

### a.10 3.0-only entities and what 2.1 maps do without them

`ts_briefcase`/`ts_flag` (CTB), `ts_scoregiver`, `ts_timer`, `ts_customtarget`, `ts_playeramount`, `ts_wind`,
`ts_fog`, `ts_emitter`, `ts_particle`, `ts_groundammo`, `ts_sellzone`, `info_breakable`, `info_player_team1..4`
and the HLDM aliases: in 2.1 the engine has no export for them, prints "Can't init <classname>" and frees the
edict. A 2.1 mode must make them **not spawn** (return -1 from `DispatchSpawn` / remove on spawn) since the port
can't drop exports at runtime. Note that 2.1 team spawns use `info_player_deathmatch` / `info_player_start`
(rules report).

---

## (b) Bots

The 2.1 bot block is 0x1005d870–0x10063cc0 (≈ 25 KB, unnamed in the export). Function map (2.1 → 3.0 name):

| 2.1 | size | 3.0 equivalent |
|---|---|---|
| 0x1005d870 | 79 | BotPlayerByIndex |
| 0x1005d8c0 | 325 | BotSetup |
| 0x1005da10 | 507 | BotCreateCustom (name, model, skill) |
| 0x1005dc30 | 378 | BotCreate |
| 0x1005ddd0 | 107 | CBot::OnKill |
| 0x1005de40 | 163 | CBot::Killed (slot 16) |
| 0x1005def0 | 22 | CBot::Spawn (slot 3: brain Reset + CBasePlayer::Spawn) |
| 0x1005df10/0x1005df50/0x1005e180/0x1005e380 | | BotSayLine / BotLoadSay / BotLoadFiles / BotPickName |
| 0x1005e450 | 346 | GetClassPtr<CBot> (0x2600 bytes) |
| 0x1005e5e0 | 959 | CBotModuleAttack::Think (aim offset inline) |
| 0x1005e9a0 | 955 | FindCoverSpot |
| 0x1005ed60 | 172 | SelectEnemy |
| 0x1005ee10 | 71 | BotHoldingMelee |
| 0x1005ee60 | 973 | FireWeapon |
| 0x1005f230 | 30 | ReleaseAttack |
| 0x1005f250 | 203 | BotRandomAttachments (identical) |
| 0x1005f320 | 899 | CBotModuleBuy::Think |
| 0x1005f890 | 500 | Vision |
| 0x1005fa90 | 426 | LookAround (no FindLookPoint) |
| 0x1005fc40 | 325 | Stunt |
| 0x1005fd90 | 169 | PowerUp (identical: 0.5 / 3.0) |
| 0x1005fe40 | 341 | Chat (identical) |
| 0x10060090/0x10060120/0x100603d0 | | SetIdealAngles(+snap) / ChangeYaw / RunMove |
| 0x100604a0 | 329 | BotSay (identical) |
| 0x100605f0/0x10060950/0x10061020 | | States DM / TeamRounds / Objective |
| 0x10061220 | 330 | CBotBrain::Reset |
| 0x100613e0/0x10061450/0x10061490 | | PressButtons / ReleaseButton / UpdateButtons (32 slot table) |
| 0x100614e0 | 439 | CBotBrain::Think |
| 0x10061790..0x10062330 | | CBotNav (Reset, RandomWanderPoint, Replan, Navigate, GetSteerPoint) |
| 0x10062b60..0x10063b50 | | CNodeGraph (same algorithm and constants) |

CBot vtable 0x10089220 overrides only Spawn (3), Killed (16), IsNetClient (43, returns 0). **No `TraceAttack`
override**: 2.1 bots don't turn toward an attacker.

### b.1 Commands and creation

* `addbot` (0x1001e660) / `addcustombot` (0x1001e6c0): server commands, refuse on dedicated servers ("Bots only in
  listen servers."), same usage strings. `addcustombot` args (name, model, skill) like 3.0.
* Model when none given: `RL(0,6)` → seal, merc, gordon, hitman, castor, agent, laurence **even in teamplay**
  (3.0 only outside teamplay; in 3.0 teamplay the model stays "").
* Skill: addbot `RF(0.1,1.0)`; addcustombot `≤0 → RF(0.1,1.0)`, `≥3 → 3`, `≤0.1 → 0.1`; per-name skill from
  `bots.txt` overrides (same as 3.0). BotSetup stores the skill **without the 0.1 floor** that 3.0 applies
  (`this[0x97f] = skill`) **(inferred from decomp; matters only for a bots.txt skill between 0 and 0.1)**.
* Netname is a heap copy (`operator new`), not a static table. BotSetup sets infokeys `model` (or `seal`) and
  `cl_lw 1` only (3.0 also sets `team`), then `ChangePlayerTeam` if a model was given, then `PlayerThink`.
  No `ts_playeramount` notification (entity doesn't exist).
* BotCreate does **not** issue `botlearn 1` when the node graph is empty (3.0 does).
* Cvars: `botlearn` "0.0" and `bottalk` "1" exist; **`botarmor` doesn't**.
* Shipped data: 2.1 `bots.txt` has 31 names, 8 with `//skill` (`The Sprayer//0.1`, `Hollywood//1.1`,
  `Bennett//0.8`, `Tango//0.15`, `Sadsa//0.2`, `Dillon//1.0`, `Action Specialist//0.95`, `The Hitman//1.5`);
  3.0's has 70 names, none with skills. 2.1 `bot_say.txt`: offense 10, freetime 11, killed 20 lines (3.0: 25/29/42).
  Loaders are identical (64 names, 3×64 lines, same quirks).

### b.2 Brain think and buttons (0x100614e0)

```c
UpdateButtons();                          // 32 slots {mask, expire}; slot expired → cleared
brain->turnSpeed /*+0x1b14*/ = 30.0;      // reset every frame
if (pev->fuser1 == 0.0 || pev->fuser1 >= 0.1) {   // 2.1 fuser1 0 = normal time
    state->Think; then bits 0x10, 0x100, 0x40, 4, 0x80, 8, 0x200, 0x400, 1 (same order as 3.0)
    0x100 (dead): PressButtons(IN_ATTACK, 0.1); SetMove(0,0);      // respawn by pressing fire
}
pev->button = buttons; RunMove();
```
3.0's respawn module calls `StopObserver` + respawn directly once `m_flRespawnTime` passes. 2.1 has no
`respawn` client command either; the dead player respawns by +attack (SDK `PlayerDeathThink`) **(inferred)**.
PressButtons(mask, dur) keeps one slot per distinct mask value (32 slots), ReleaseButton(mask) clears the slot
with that exact mask. Behaviour equals 3.0's per-bit timers for the masks the AI uses.

Module timer formula is the same everywhere: `next = time + min(K·slowInv/skill, MAX)`, where 2.1's helper
(0x100551c0 → 0x1005a3d0) returns `fuser1 == 0 ? 1 : 1/max(fuser1, c)`, i.e. the same `K/sm/skill` as 3.0.

### b.3 View (biggest feel difference)

* `LookAt(pl, P)` 0x100616b0: `a = VecToAngles(P - GetGunPosition())`, wrap, `a.x = -a.x`, then 0x10060090:
  **`pev->v_angle = a + pev->punchangle` immediately**, `pev->angles.x = v_angle.x * -1/3`, `angles.z = 0`,
  `pev->ideal_yaw = wrap(a.y)`.
* RunMove 0x100603d0 → ChangeYaw 0x10060120: `step = turnSpeed * frametime * 10` degrees; move `pev->angles.y`
  toward `ideal_yaw` by at most `step` (shortest way), then `v_angle.y = angles.y`. msec handling identical to 3.0
  (450/frames, clamp 5..100).
* Result: **pitch snaps; yaw turns at a constant 300 °/s**, and on frames where LookAround ran,
  `turnSpeed = RF(2,4)·30` → 600–1200 °/s. Skill doesn't affect turning. 3.0 instead moves both axes by
  `min(ft·10·clamp(skill,0.5,2), 1)` of the remaining angle per frame and low-passes punchangle.

### b.4 Attack (0x1005e5e0) — complete 2.1 pseudocode

```c
if (time < cm->next) return;                         // NO per-frame tracking
cm->next = time + min(0.1/sm/skill, 1.0);
SelectEnemy();                                       // 0x1005ed60
if (!brain->enemy) return;                           // uses the enemy AFTER SelectEnemy
dist = |enemy.origin - origin|;
if (!NumVisibleEnemies()) {
    DisableModules(4);
    if (enemy->IsAlive()) { brain->lastSeen = enemy.origin; brain->enemy = NULL; }
    ReleaseAttack(); return;
}
s = skill <= 0.5 ? 0.5 : skill;
x = RL(-32,32); y = RL(-32,32); z = RL(-16,32);      // integers, in this order
LookAt(enemy.origin + (x,y,z)/s);
if (!HoldingMelee()) {
    brain->goal = FindCoverSpot(enemy.origin, enemy); brain->goStraight = 1; Enable(1);
    if (cm->nextDodge < time) {
        cm->nextDodge = time + RL(5,10);
        if (RL(0,100) > 70) PressButtons(IN_DUCK, RF(0.9,1.6)); else Enable(8);   // same odds as 3.0
    }
} else { brain->goStraight = 1; brain->goal = enemy.origin; Enable(1); }       // always charges
FireWeapon(dist);                                    // ALWAYS (no 0.9 facing test)
if (dist < 128 && cm->nextJump < time) {             // dist = origin distance
    PressButtons(IN_JUMP, 0.6);                      // no stock hit (+alt2) branch
    cm->nextJump = time + min(1.0/sm/skill, 10.0);   // K = 1.0 (3.0: 1.5)
}
if (pl->heldPowerUp /*pl+0x6a0*/) Enable(0x200);
```
SelectEnemy: retarget when `enemy == NULL || next <= time`, `next = time + 3.0` fixed (3.0: `RF(1,3)`),
nearest of the 16 visible enemies.

FindCoverSpot 0x1005e9a0 (`next` timer `min(3/sm/skill, 7)`):
```c
dirs = 8; step = 45; ang = RL(0,8)*45; radius = 1024;              // 3.0: 512
if (|enemyOrg - origin| > 1024) { dirs = 4; step = 22; ang = (int)VecToAngles(enemyOrg - origin).y; radius = 2048; }
best = enemyOrg; bestDist = 0;
for (k = 1; k <= dirs; k++, ang += step) {
    P = trace(origin → origin + (cos ang, sin ang, 0)·radius).end;
    if (trace(enemyOrg → P, ignore enemy).fraction < 1) {          // hidden from enemy
        if (trace(origin → P).fraction >= 1) { cache = P; return P; }
    } else if (trace(origin → P).fraction >= 1 && (int)|P - origin| > bestDist) { best = P; bestDist = ...; }
}
cache = best; return best;                                          // 3.0 caches enemyOrg (bug)
```

FireWeapon 0x1005ee60 (`next` = cm+8):
* Kung fu (no status): `dist < 128`: `if (RL(0,100) <= 80) { Press(IN_ATTACK2,0.3); Release(IN_ATTACK);
  if (RL(0,100) > 80) { if (RL(0,100) > 50) Press(IN_JUMP,0.1); Press(IN_DUCK,0.1); } } else { Press(IN_ATTACK,0.3);
  Release(IN_ATTACK2); }`, `next = time + 0.9`. `dist > 256`: `GetBetterWeapon(0)`,
  `next = time + clamp(0.3/sm/skill, 0.3, 3.0)`. 128 ≤ dist ≤ 256: nothing (re-evaluated next think).
* Grenade (kind 2): `Press(IN_ATTACK,0.1)`, `next +1.0` (same).
* Katana (10): same as 3.0.
* Knife (3): `if (RL(0,100) > 70 || dist > 128) { Press(IN_ATTACK2,0.1); Release(IN_ATTACK); } else
  Press(IN_ATTACK,0.1)`; `next +0.3`. No clip > 1 test, no throw lead.
* Gun, clip > 0: semi/burst (`firemode != 0 && != 3`): `h = RF(0.1,0.2)`, `next = time + h`; auto/pump:
  `h = RF(0.3,1.7)`, `next = time + h + 0.3`. (3.0: 0.1–0.3 and 0.3–1.0.)
* Gun, clip ≤ 0: same as 3.0 (reload 0.1 s if reserve, else `RL(0,100) <= 50` drop, else switch; `next +1`).

### b.5 Buy (0x1005f320), 2.1 ids

```c
f = RF(0,1); ResetArmament();                      // no kevlar at all
k = RL(0,5);
if (k == 2)      add 35 (seal knife) × (f > 0.75 ? 10 : 1);
else if (k == 3) add 34 (katana);
else             add 25 (combat knife) × (f > 0.75 ? 5 : 1);
if (f <= 0.1) { add 25 × 9; goto done_pistol; }     // knives only
switch (RL(1,9)) {   // pistol, each: att = BotRandomAttachments(id); AddItem(id, att); [+50%: RL(0,1) → AddItem(id,0)]; AddAmmo(type, 10)
 1: 1 Glock-18, ammo 1 | 2: 9 SOCOM +50%, ammo 2 | 3: 12 Deagle, ammo 5 | 4: 14 Five-seveN +50%, ammo 7
 5: 8 Akimbo Berettas, ammo 1 | 6: 21 Golden Colts, ammo 2 | 7: 22 Glock-20C, ammo 9 | 8: 28 Ruger, ammo 10
 9: 31 Raging Bull, ammo 12 }
done_pistol:
if (0.4 < f && f < 0.7) switch (RL(1,6)) { 1: 3 Mini-Uzi +50%, ammo 1 | 2: 6 MP5SD, 1 | 3: 7 MP5K, 1 |
                                           4: 17 (STEYR-TMP in 2.1's weapons_official.txt), ammo 1 | 5: 19 MP7, 7 | 6: 23, ammo 2 }
else if (f >= 0.7) switch (RL(1,11)) { 1: 4, 3 | 2: 11, 3 | 3: 20, 3 | 4: 13, 6 | 5: 5, 4 | 6: 15, 4 | 7: 26, 3 |
                                       8: 27, 4 | 9: 33, 3 | 10: 18, 8 | 11: 32, 4 }       // same as 3.0
DisableModules(0x10);
```
Differences vs 3.0: no kevlar; knife logic; pistol roll 1..9 (no Contender 36; slot 5 = akimbo id 8 instead of
Beretta id 2 +50%, Raging Bull ammo 12 instead of 11); SMG 17 has no +50% and ammo 1 (3.0: +50%, ammo 12).
Weapon 23 is MAC10 in 2.1's `weapons_official.txt` (CHANGELOG 2.06 says MAC10 → UMP; weapons report decides).
Attachment rolls identical (`allowed` at info+0xd8, `builtin` +0xdc in 2.1).

### b.6 Other modules

* **Vision** (0x1005f890): same timer (0.1, 0.7), FOV and trace. Also skips players with `pev->iuser1 != 0` and
  players already listed.
* **LookAround** (0x1005fa90): timer `min(2/sm/skill, 5)` (3.0: 0.5, 5). No traces:
  `if (brain->keepGoal /*+0x1910*/ == 0 || goal == 0) yaw = v_angle.y + (RL(0,1) ? 179 : -179);  // look behind
   else if (keepGoal == 1) yaw = VecToAngles(goal - origin).y + RL(-60,60);`
  pitch 0, roll = v_angle.z; `SetIdealAngles` (snaps v_angle, sets ideal_yaw) and
  `turnSpeed = RF(2,4)*30`. The state's `keepGoal` byte (3.0's write-only brain+0x193c) is read here.
* **Stunt** (0x1005fc40): mode `RL(1,2)` (1 dive via IN_ALT1, 2 double jump); rest identical to 3.0.
* **PowerUp**, **Chat**, **BotSay**: identical to 3.0 (offsets: held `pl+0x6a0`, active `pl+0x69c`).
* **States**: DM state same as 3.0 except the spawn-point goal is always `info_player_deathmatch` (no
  teamplay team-spawn class lookup). TeamRounds state picks `info_player_deathmatch` if the bot's team string is
  "Specialists" else `info_player_start` (swapped when global `0x100acb90` ≠ 0) **(inferred: team-swap flag)**.
* **Navigation / node graph**: same algorithms and constants (arrival 48, stuck 96 / min(3/sm,9) s, probe 64,
  steer 16/24/48). `.ndm` format identical, so 3.0 node files load in 2.1 and vice versa. Shipped 2.1 files: 20
  identical to 3.0's, `ts_henningsen.ndm` differs (380 vs 202 nodes), plus `ts_ordeal.ndm` (316) and
  `tm_stormshield.ndm` (248); 3.0 adds `ts_lobbyduel.ndm`. Commands `addnode`, `savenodes`, `loadnodes`,
  `resetnodes`, `testpath` exist in both. Learning in PreThink identical (0.1 s, `botlearn > 0`).
* `pfnStartFrame` 2.1 runs bot think for every `m_bIsBot` player without the dedicated-server test (irrelevant,
  bots can't be created there).

### b.7 Rust port changes (all server-only)

Add a mode switch read by the bot code (`ts_gameplay 21` or similar; see precedent `ts_pm_arith` in
`rules/cvars.rs`):
* `bots/attack.rs`: aim offset formula (b.4), no per-frame track/lead, retarget 3 s, no facing gate, always charge
  in melee, cover spot radius 1024/2048 + far-enemy 4-ray fan + cache `best`, jump K = 1.0 and no stock hit,
  fire-control constants (b.4).
* `bots/brain.rs`: `turnSpeed` 30/frame and ChangeYaw view model (b.3), respawn by `IN_ATTACK` press, slow
  test `fuser1 == 0 || ≥ 0.1` (check how the port stores the time scale), no TraceAttack hook.
* `bots/modules.rs`: buy table (b.5), stunt odds, LookAround (b.6).
* `bots/states.rs::pick_dm`: always `info_player_deathmatch`.
* `bots/mod.rs`: random model also in teamplay, no `botlearn 1`, no `team` infokey, no 0.1 floor;
  `rules/cvars.rs`: hide `botarmor`.
* `bots/files.rs`: ship/choose the 2.1 `bots.txt`/`bot_say.txt` (data, not code).

---

## (c) Commands

### Server commands (`pfnAddServerCommand`)

| | 2.1 (pfnGameInit 0x1001e750) | 3.0 (0x10026680) |
|---|---|---|
| `addbot`, `addcustombot` | yes | yes |
| `globalslow` | **cvar** (default "0.0"), polled in Think: effective = clamp(v, 0, sv_cheats ? 2 : 1); 1 → off; other ≠0 → `GlobalSlowMotion(v)` | command |
| `restartround` | **cvar** (default "0"): when ≠0, `ResetRestartRound((int)v)` then the cvar is set back to 0 | command |
| `weaponrestriction` | **cvar** (default "0"): each frame `allowed = (v == 5) ? 0x1f : mask(v) & mapglobals_allowed`, broadcast `SrvSett(3, allowed)` on change | command |
| `customweapons` | cvar (string): when non-empty, load the file via `adjust_weapon_value`, inform clients, reset to "" | cvar (still exists) |
| `loadweapons`, `saveweapons` | — | commands |
| `superjump` | cvar "0" (superjump for everyone; also blocks superjump powerups) | gone (mapglobals flag 64) |

Other cvar-list differences (details belong to the rules report): 2.1 has `mp_flashlight`, `globalslow`,
`weaponrestriction`, `superjump`, `restartround`; 3.0 adds `mp_teammodels`, `dmgreport`, `botarmor`; defaults
differ for `initial_cash` (3000/1200), `cashforwin` (1500/10000), `cashforlose` (-1000/1200), `respawntime` (5/3).

Rust: `rules/commands.rs::register_server_commands` registers the 3.0 commands. In 2.1 mode keep the commands
(harmless) but also honour the 2.1 cvar forms, polled from `rules/frame.rs::think`.

### Client commands (`pfnClientCommand`, strings referenced in the function)

* Both: `say`, `say_team`, `fov`, `use`, `testpath`, `powerup` (cheat), `mj`, `cashala`, `weapon_*`, `rst_cfg`,
  `tkw`, `tki`, `tka`, `cutwire_*`, `drop_*`, `drop`, `usepowerup`, `firemode`, `useitems`, `lastinv`,
  `resetnodes`, `loadnodes`, `savenodes`, `addnode`, `changeteam`, `jointeam`.
* **2.1 only:** `give <item>` (SDK cheat, requires `sv_cheats` value ≥ 1, `0x1000d532`).
* **3.0 only:** `respawn` ("You have to wait until the next round."), `lasclr_*` (laser colour), `motd`,
  `fullupdate`.
Rust: `rules/commands.rs::client_command` — in 2.1 mode drop `respawn`/`lasclr_`/`motd`, optionally add `give`
under cheats.

---

## (d) Misc gameplay items found along the way

* 2.1 periodic `RespawnEntities` every 60 s in DM/TDM (a.3) also covers doors.
* 2.1 powerup auto-spawn only on maps without `ts_powerup` (a.4).
* 2.1 `nopowerup == 1` hides map powerups (same as 3.0).
* User messages related to these entities: 2.1 lacks `TSFlag`, `TSPSys`, `ShowObj`, `TSMBlur` (client report).

---

## Things 3.0 has that 2.1 does not (disable in 2.1 mode)

1. Classnames: `ts_briefcase`, `ts_flag`, `ts_scoregiver`, `ts_timer`, `ts_customtarget`, `ts_playeramount`,
   `ts_wind`, `ts_fog`, `ts_emitter`, `ts_particle`, `ts_groundammo`, `ts_sellzone`, `info_breakable`,
   `info_player_team1..4`, and the 16 HLDM weapon/ammo aliases → don't spawn.
2. Breakable keys `respawntime`/`respawntarget`, the per-entity 30 s timer, the player-in-box check.
3. `ts_powerup` `pwupmult` and spawnflags-as-random-set; 3.0 durations; Infinite Clip as instant; instant mask
   0x1e6; slow-mo stacking < 3 s; spawner on maps that have powerups; armor/superjump excluded from the spawner.
4. `ts_groundweapon` `buyable`/`attackerteam` and +use-search-only pickup.
5. `ts_trigger` `attackerteam`, message print, spawnflag 8, team-index matching.
6. `ts_objective_ptr` `objmsgteam3/4`, `objmsgall`.
7. Bots: `botarmor`, kevlar, auto `botlearn 1`, `CBot::TraceAttack` reaction, `team` infokey, 0.1 skill floor,
   per-frame aim tracking, knife-throw lead, facing gate, head/body aim choice, kung-fu circling, stock hit,
   FindLookPoint, proportional skill-scaled turning, direct respawn.
8. Server commands `loadweapons`/`saveweapons` (and the command forms of globalslow/restartround/weaponrestriction).
9. Client commands `respawn`, `lasclr_`, `motd`, `fullupdate`.

## 2.1 features missing in 3.0 (add for 2.1 mode)

1. 60 s global respawn sweep of broken `func_breakable` / `func_door` / `func_door_rotating` (DM/TDM, LMS off).
2. `ts_mapglobals` keys `playerrespawn` (objective-mode respawn limit) and `playeratatime`.
3. `ts_trigger` hard-coded team names via `allowedteam` 0/1.
4. Ground weapons picked up by touch while holding +use.
5. 2.1 powerup tables (a.4) and armor/superjump in the random/auto sets; `superjump` cvar.
6. 2.1 bot behaviour (b.2–b.6) and data files.
7. Cvar-driven `globalslow`, `restartround`, `weaponrestriction`, `superjump`; `give` cheat command.

## Client vs server

Everything in this report is **server-only**: entity logic, bots and commands don't run in shared prediction
code. Client-visible effects: (1) entities that don't spawn in 2.1 mode (`ts_fog`, `ts_emitter`, `ts_wind`) are
parsed by the 3.0 **client** from the BSP entity lump, so a 2.1-mode client must also ignore them (client report);
(2) the powerup body/duration (`PwUpTime` etc.) and `SrvSett` broadcasts use existing messages; (3) bots send
ordinary usercmds, so nothing changes in prediction.

## Open questions / unverified

* 2.1 vtable slot 2 (default `nextthink = time + 1.0`) — which virtual is it? And where is the 7th slot
  inserted after TeamID? (Affects naming in `ts21/server-win/`; the method.md "+7" claim should be fixed.)
* Door `BreakableRespawn` bodies in 2.1 (0x10013b80, 0x10015400) not decoded fully.
* Who reads `ts_mapglobals.playeratatime` in 2.1 (no reader found); whether 2.1 handles mapglobals spawnflags 32/64.
* Whether 2.1 `ts_wingiver` uses `victorycash`/`defeatcash`.
* 2.1 BotSetup skill floor (decomp shows a raw store; not checked in asm).
* Objective entity behaviour (bomb/hack/teamescape/manager) beyond keys: same sizes and keys, not diffed
  line by line; only relevant if 2.1 round/objective modes are reachable (rules report).
* `TeamRounds` bot state's `0x100acb90` flag meaning.
* Weapon id names (17, 23, 8) come from 2.1's `weapons_official.txt`; the weapons report owns the id table.

Helper scripts used (not part of any repo): `/tmp/ts21diff/.work/{exp.py,sizes.py,cvars.py,consts.py,strrefs.py,fn.sh}`.
