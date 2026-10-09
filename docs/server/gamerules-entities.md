# TS 3.0 server: game rules, modes, objectives, powerups, map entities

Source: Ghidra export of `ts_i386.so` (GCC 2.95, Linux), `server/decomp/*.c`, cross-checked against
`objdump -d` of `/home/mmckenzie/dev/hl/ts/dlls/ts_i386.so`. **All addresses are Ghidra addresses**
(objdump address + 0x10000). Mapper-facing reference: `/home/mmckenzie/dev/hl/ts/ts_fgd.fgd`
(lines 2289-2925 hold the TS entities). "(inferred)" marks an interpretation, not a direct reading.

Conventions used below:

* `pev` sits at object +0x00, the vtable pointer at +0x60, and class members start at +0x64.
* TS's `CBaseEntity` vtable has **7 extra slots in front of `Spawn`**: 0 `BreakableRespawn(bool)`,
  1 `CanUsedTroughWalls`, 2 `GiveSlowMul`, 3 `GoSlow(float amt, bool)`, 4 `InSlow`,
  5 `IsObjective`, 6 `EnableObjective(bool)`, then 7 `Spawn`, 8 `Precache`, 9 `KeyValue`, ...
  The decompiler's `vtable[N]` maps to `vtables.tsv` slot N-2. A raw `*(vtbl + off)` maps to
  slot off/4 - 2. Frequent ones: `+0xb4` IsAlive, `+200` IsPlayer, `+0xd0` TeamID, `+0x14` GoSlow,
  `+0x18` InSlow, `+0x1c` IsObjective, `+0x20` EnableObjective, `+0xf8` Center, `+0x114` slot 67
  (`CTSObjective::Freeze` / `CTSObjectiveManager::Reset` / `CTSPhysicObject::WaitThink`).
* Game-rules vtable (`g_pGameRules`) byte offsets: `+0x1c` IsMultiplayer, `+0x24` IsTeamplay,
  `+0x6c` IPointsForKill, `+0x74` DeathNotice, `+0xcc` PlayerRelationship, `+0xd0` GetTeamIndex,
  `+0xd8` IsValidTeam, `+0xdc` ChangePlayerTeam, `+0xe0` SetDefaultPlayerTeam, `+0xf8` ChangeLevel,
  `+0xfc` GoToIntermission.
* `TSHudMessageAll(r,g,b,effect,hold,text)` / `TSHudMessageOne(..., pev)` send **`TSMessage`**:
  `byte r, byte g, byte b, byte effect, byte hold (tenths of a second, inferred), string text (<=127)`.
  Most game messages use `(0,255,0, 8, 30)`, which is green, effect 8, and a 3 s hold.

---

## 1. Game rules architecture

### 1.1 Two layers: SDK rules objects plus the `TSGameRules` singleton

TS **does not subclass** `CHalfLifeMultiplay`. It keeps the SDK classes, patches them in place,
and adds a global non-virtual helper object, `TSGameRules` (`.bss` 0x1781a0, `CTSGameRules`, about
0x5894 bytes). `CHalfLifeMultiplay::CHalfLifeMultiplay`, `CHalfLifeTeamplay::CHalfLifeTeamplay` and
`CHalfLifeMultiplay::ChangeLevel` each call `CTSGameRules::Init` (0x77d6c). `CHalfLifeMultiplay::Think`
and `CHalfLifeTeamplay::Think` call `CTSGameRules::Think` (0x77204) every frame.

`InstallGameRules` (0xc6050):

```c
exec game.cfg
if deathmatch == 0            -> CHalfLifeRules            (single player; unused)
g_teamplay = DecideGamePlay(mapname, (int)mp_teamplay);
if g_teamplay < 1             -> new CHalfLifeMultiplay   (12 bytes)
else                          -> new CHalfLifeTeamplay    (0x218 bytes)
```

`DecideGamePlay` (0x767ac) resets `g_theOneMode` and `g_lastManStanding`. It reads `g_gamemode`
(worldspawn key `gamemode`, which forces the mode) and falls back to cvars:

| `g_gamemode` (worldspawn) | cvar fallback (gamemode 0) | g_teamplay | flags set |
|---|---|---|---|
| 0 | `mp_theonemode != 0` | 1 | `g_theOneMode = 1` |
| 0 | `lastmanstanding != 0` | 0 | `g_lastManStanding = 1` |
| 0 | `mp_teamplay != 0` | 1 | |
| 0 | otherwise | 0 | |
| 1 "DeathMatch" | | 0 | |
| 2 "Team DeathMatch" | | 1 | |
| 3 "Last Man Standing" | | 0 | `g_lastManStanding = 1` |
| 4 "The One Mode" | | 1 (teamplay rules object) | `g_theOneMode = 1` |

The function also `strncpy`s the first 3 characters of the map name (the `tm_` prefix check from
older versions), but nothing reads the copy.

### 1.2 `CTSGameRules::m_mode` (byte at +0x00) and the dead round/objective modes

`Init` copies `g_teamplay` into byte +0x00. Values: **0 = DM, 1 = continuous TeamDM,
2 = round-based TDM ("Defeat the opposite team"), 3 = objective rounds**. Modes 2 and 3 are assigned
only inside `CTSGameRules::InitObjectives` (0x785d8). That function is itself gated on
`(mode-2) < 2`, and no other code writes the mode byte or sets `g_teamplay` to 2 or 3 (checked by
scanning every store through the `g_teamplay` and `TSGameRules` GOT slots in the disassembly).
**In this build, round-based teamplay and objective rounds can't be reached.** This matches
CHANGELOG line 338: "Changed teamplay from roundbased back to continuous spawning." The mode 2/3 code
is documented below because it's intact, and a reimplementation may want to revive it behind a cvar.

| Effective mode | Rules object | Description string (`GetGameDescription`) | `GameMode` msg byte |
|---|---|---|---|
| DM | CHalfLifeMultiplay | `The Specialists (DM)` | 0 |
| LMS (DM + `g_lastManStanding`) | CHalfLifeMultiplay | `The Specialists (LMS)` | 0 |
| TeamDM | CHalfLifeTeamplay | `The Specialists (Teamplay)` | `g_teamplay` (1) |
| The One | CHalfLifeTeamplay | `The Specialists (The One)` | 1 |

### 1.3 Virtual overrides: what TS changed relative to the SDK

Vtables have 62 slots. Compared with the SDK, TS adds `PlayTextureSounds` (55), `PlayFootstepSounds` (56),
a second `IsValidTeam(char*)` (59, used for model checks), and makes `ChangeLevel` (60) and
`GoToIntermission` (61) virtual.

| Virtual | Address | TS behaviour |
|---|---|---|
| `CHalfLifeMultiplay::Think` | 0xcf038 | SDK timelimit/fraglimit logic, then `TSGameRules.Think()`. When a vote has set the next map (`DAT_001799c4`, `TSGameRules+0x1824`), it calls `GoToIntermission`. Chattime is clamped to 10..120. |
| `CHalfLifeTeamplay::Think` | 0xe412c | Same, but fraglimit compares **team scores**. When `IsCTB()` is true (mode 1 and a `ts_briefcase` exists), it compares the TS team capture counts (`team[i].score`) instead of `team_scores[]`. |
| `PlayerSpawn` | 0x890ac | Sets `pev->weapons |= 0x80000000`. Runs `game_player_equip` if present. Otherwise `GiveNamedItem("weapon_tsgun")`, `BuyArmament()`, and copies stored cash (`+0x540`) to `+0x53c`. |
| `PlayerKilled` | 0x895e4 (6865 B) | Fully rewritten; see §2.3. `CHalfLifeTeamplay::PlayerKilled` (0xe51b8) skips everything while a team change is killing the player (`+0x210`), then calls Multiplay and `RecountTeams`. |
| `DeathNotice` | 0x88f7c | `DeathMsg`: `byte killer` (0 if attacker isn't `FL_CLIENT`), `byte victim`, `string weapon`. Then HLTV `svc_director` (MSG_SPEC, 0x32): `byte 3, short victim, short killer/inflictor, long 0x27`. |
| `IPointsForKill` | 0xcfc0c / 0xe53a4 | DM returns 1. Teamplay is SDK-like (-1 for a team kill) (inferred). |
| `FPlayerCanRespawn` | 0xcfbb8 | Always true. Respawn gating is done by `CBasePlayer` using `+0x770` (see §2.2). |
| `FlPlayerSpawnTime` | 0xcfbc0 | Returns `gpGlobals->time`. |
| `FlPlayerFallDamage` | 0xcfae4 | `mp_falldamage 1`: `(fallvel - 680) * 100/444` (the SDK uses 580). Otherwise 10. |
| `GetPlayerSpawnSpot` | 0xcffa8 | `CGameRules::GetPlayerSpawnSpot` calls `EntSelectSpawnPoint` (§2.1), then fires the spot's `pev->target` (SDK-style). |
| `InitHUD` | 0xcf618 / 0xe45d8 | SDK join text, log line, `UpdateGameMode`, `ScoreInfo` for everyone, MOTD. Teamplay also sends `TeamNames` (`byte n, n×string`) and assigns a team. `CTSGameRules::InitHUD` (0x79134) is called from `CBasePlayer` (game_playerjoin). |
| `ClientDisconnected` | 0xcf960 | Fires `game_playerleave`, logs, `RemoveAllItems`, `TSPlayerDisconnect()` (notifies `ts_playeramount`). |
| `ClientUserInfoChanged` | 0x8b244 | Runs `PlayerIsCheating(); if cheating, force cl_lw 1`. Reverts model changes to HLDM models (`barney, gina, gman, helmet, hgrunt, recon, robo, scientist, zombie` are rejected by `IsValidTeam` 0x8b140): "* HLDM models not allowed." |
| `PlayFootstepSounds` | 0x8b0e4 | True only on a ladder or when 2D speed > 220. |
| `ClientCommand` | 0xceee8 / 0xe43c8 | Voice manager plus `menuselect` (no-op). TS commands live in `ClientCommand()` (global). |
| `UpdateGameMode` | 0xcf5c8 / 0xe4458 | `GameMode`: `byte 0` (DM) or `byte g_teamplay`. |
| Teamplay `SetDefaultPlayerTeam` | 0xe44ac | Reads the **`team` infokey** (not `model`). In The One mode, The One goes to team 0 and everyone else to team 1. Invalid or empty team: fewest players (`mp_defaultteam 0`) or the first team. |
| Teamplay `ChangePlayerTeam` | 0xe488c | A forced change kills the player (900 dmg, `DMG_NEVERGIB` or `DMG_ALWAYSGIB`). Sets the `model` infokey from `CTSGameRules::GetPlayerModel` (a random model from the team's list of up to 3). Sets the `team` infokey. Sends `TeamInfo`, `ScoreInfo`, `TeamNames`. A voluntary change outside The One mode puts the player into observer with a 5 s respawn. |

`ScoreInfo` is always `byte idx, short frags, short deaths(+0xb30), short 0, short GetTeamIndex(team)+1`.

### 1.4 Teams (`CTSGameRules` team table)

Team names come from, in priority order: worldspawn `mapteams` (passed immediately to
`SetTeamList`), `mp_teamlist` if `mp_teamoverride` or the map value is empty, and the defaults
`Team1..Team4`. Up to 4 teams are parsed (`;` separated); in The One mode only 2, and team 0 is
renamed `The One`. Models come from worldspawn `teammodels` or `mp_teammodels`: teams separated by `|`,
up to 3 models per team separated by `;`. Default models (`defTeamModels`): team0 `seal;merc`,
team1 `gordon;laurence`, team2 `agent`, team3 `hitman;castor`. Modes 2/3 force
`Specialists;Mercenaries` with models `seal` / `merc`.

Team record at `TSGameRules + 0x1c + i*0x8c`:

| Off | Type | Meaning |
|---|---|---|
| +0x00 | int | team cash (`initial_cash`; only read in modes 2/3) |
| +0x04 | int | unused counter (zeroed on reset) |
| +0x08 | int | **team score** (round wins and captures; sent in `TeamScore`) |
| +0x0c | char[16] | name |
| +0x1c | char[3][16] | model list |
| +0x4c | char[32] | spawn classname `info_player_team%i` |
| +0x6c | char[32] | fallback spawn classname `info_player_deathmatch` (`info_player_start` for team 0 in modes 2/3) |

`TeamScore` payload (sent after wins and captures): `string name, short score, short 0`.
`TeamNames`: `byte count, count×string`. `TeamInfo`: `byte idx, string team`.

### 1.5 Other `CTSGameRules` state (offsets from 0x1781a0)

| Off | Meaning |
|---|---|
| +0x01 | auto powerup spawner state (0xff before init, then 1) |
| +0x04 | next auto-powerup time |
| +0x08 | round end time (0 = no round running) |
| +0x0c | round restart time (set to now + 3 or now + 1) |
| +0x10 | round timer enabled (`ts_mapglobals` flag 32 clears it) |
| +0x18 | "slow-mo usage blocked" flag; `UsePowerUp` refuses slowmo/slowpause while it's set (inferred) |
| +0x24c / +0x250 | number of `ts_objective_manager` entities and their pointers (max 32) |
| +0x2d0 / +0x2d4 | HUD objective list: count plus 32 × {objective*, msg[4] string_t} (0x14 each) |
| +0x554 | currently selected objective manager |
| +0x558/+0x55c/+0x578 | last broadcast `usecash` / `ammocount` / `realbullet` (change detection) |
| +0x560..+0x56c | global slow-motion: active, amount, end time, next rebroadcast |
| +0x57c | 33 player pointers excluded from global slow |
| +0x684 | per-player vote records (32 × 0x48: voted map[64] + flags) |
| +0xf84..+0x1824 | vote tallies; +0x1824 = chosen next map (`nextmap` → normal mapcycle) |
| +0x1864 | `CBulletManager` (realbullet mode) |
| +0x586c/+0x5870 | allowed-weapon-category mask (default 0x1f; `ts_mapglobals` XORs its spawnflags in) |
| +0x5878/+0x587c | The One exists / next The One check (every 10 s) |
| +0x5880 | pending `CheckDeads` time (death + 1 s) |
| +0x5884 | custom weapon params active (`customweapons` cvar) |
| +0x5885 | superjump map flag (`ts_mapglobals` 64) |
| +0x5890/+0x5891 | `IsCTB()` cache |

`CTSGameRules::Think` also broadcasts `SrvSett` (`TSServerSetting`, `byte id, short value`) whenever
a cvar changes. `InitHUD` sends all four to each joiner:

| id | value |
|---|---|
| 0 | `realbullet` (int) |
| 1 | `usecash != 0` |
| 2 | `ammocount` (also `Set_ammo_count`) |
| 3 | allowed-weapon-category mask |

### 1.6 Relevant cvars (registered in `GameDLLInit`, defaults read from `.data`)

| cvar | default | Use here |
|---|---|---|
| `mp_teamplay` | 0 | teamplay when no worldspawn `gamemode` |
| `mp_theonemode` / `mp_theone` / `mp_theothers` | 0 / `gordon` / `seal` | The One mode (the model cvars look unused here (inferred)) |
| `lastmanstanding` | 0 | LMS |
| `roundtime` | 150 | round length, clamped 30..180 s |
| `respawntime` | 3 | death → respawn delay, clamped 5..30 s (`CTSGameRules::InitHUD`) |
| `respawnnumber` | 1 | LMS: respawns allowed per round (min 1) |
| `nopowerup` | 0.0 | 1 = no auto powerups, and `ts_powerup` stays hidden |
| `slowmatch` | 1.0 | 1 = kills award slow-mo seconds; also skews auto powerups |
| `spectacularness` | 1 | percent chance (0..100) of a slow-mo "death cam" point on stunt or big kills |
| `initial_cash` / `cashforwin` / `cashforlose` | 1200 / 10000 / 1200 | team cash; `TeamWin` payouts |
| `usecash` (C name `dmcashbased`) | 0.0 | broadcast only; `CashBased()` is hard-wired to return 0 |
| `banfortk` | 0 | minutes to ban after 3 team kills (0 = kick) |
| `mp_friendlyfire`, `mp_falldamage`, `mp_fraglimit`, `mp_timelimit`, `mp_chattime` (10), `mp_teamlist` (`hitman;gordon`), `mp_teammodels`, `mp_teamoverride` (1), `mp_defaultteam` (0), `mp_forcerespawn` (1), `mp_autocrosshair` (1), `mp_weaponstay` | | SDK meaning |
| `weaponstay` (C `weaponstay_time`) | 15 | dropped weapon lifetime (weapons doc) |
| `damagemult`, `realbullet`, `ammocount`, `customweapons`, `botarmor`, `bottalk`, `botlearn` | | other subsystems |

Server commands: `restartround` (`cmd_restartround` 0xc5748 → `ResetRestartRound(2)`: in modes
2/3 or LMS it zeroes team scores and restarts in 1 s; otherwise it does nothing visible), and the
`globalslow <0..200>` handler (0xc5600 region) → `SetGlobalSlowMotion(v/100)`. Chat votes:
`vote map <name>`, `vote stats`, `vote reset` (`PlayerVote` 0x7a1c8). A vote passes at
`max(1, players/2)` votes and is re-tallied every 10 s by `CheckVotes`. CheckVotes also has toggles
that print "Friendly fire enabled", "SlowMatch enabled" and "TeamPlay in DM maps enabled, wait next
map"; these set `mp_friendlyfire`, **`mp_slowmatch`** (a name that matches no cvar, so it's a bug),
and `mp_teamplay`.

---

## 2. Player lifecycle under the rules

### 2.1 Spawn point selection

`EntSelectSpawnPoint` (0x76128): in DM the classname is `info_player_deathmatch`. In teamplay it's
the team's `info_player_teamN`, and if no entity of that class exists, the team fallback.
`TSSelectSpawnSpot` (0x76244) then scores up to 32 candidate spots for which `IsTriggered(player)`
(the master check) passes:

```text
for each living, visible (EF_NODRAW clear) player P != self:
    trace spot.origin -> P.origin+view_ofs; if clear:
        if PlayerRelationship(self,P)==GR_TEAMMATE && dist>=128: teammate_sees = true (keep going)
        else: enemy_sees = true
    mindist = min(mindist, dist(spot,P))           // starts at 4096
score = !enemy_sees && teammate_sees ? rand(6145..8192)
      : !enemy_sees                  ? rand(4097..6144)
      :                                mindist
pick max score; if best < 128: telefrag (TakeDamage 300, DMG_ALWAYSGIB) every living player within 128
fallback: first info_player_deathmatch, then info_player_start
```

**No spawn protection** exists in the server. The only related timer, `+0x73c`, is the decay
timer for health above 100.

### 2.2 Respawn timing and round join windows

* `SetPlayerRespawnTime(player, secs)` (0x75ff4) sets `player+0x770 = time + secs`. In LMS only:
  once `player+0x7ba` (respawns used this round) reaches `respawnnumber`, it sets `+0x770 = -1`
  (no respawn) and the status byte `+0x74c = 1`. Otherwise the delay is limited to the time left in
  the round, and `+0x7bc` (join deadline) is set to `min(10, round time left)`.
* `CBasePlayer::PreThink` (0x908cc) shows a countdown, then "Press Fire To Play!". Past `+0x7bc` it
  shows "You have to wait until the next round." and calls `CallCheckDeads`.
* Player status / award byte `+0x74c` is replicated through **`TSPAward`** (`byte entindex, byte value`,
  MSG_ALL, on change): 1 = out until next round, 0xb = respawn pending, 2 = Killer (3 kills),
  3 = Demolition (6), 4 = Specialist (9), 10 = The One (values (inferred) from writers).

### 2.3 `PlayerKilled` scoring, awards, cash

`TSGetPointsForFrag` (0x89140) starts from `IPointsForKill`. A negative value (team kill) is returned
unchanged. In The One mode, a kill by a player who isn't The One scores 0.

| Condition (attacker pev) | Effect |
|---|---|
| close combat / kung fu / pistol-whip ("stock") / thrown knife | base points = 2 |
| stunt: `iuser4 & 0x10c10` and speed > 80 | +1, sets the "diving" flag, HUD tag `#TS_StStl` |
| slide: `iuser4 & 0x20`, `friction < 1`, speed > 80 | +1, sets the "sliding" flag, tag `#TS_SlStl` |
| result >= 2 | HUD `"%i #TS_Frg #TS_FrgFr %s, %s"` (displayed value ×2 if the killer's spree > 8 or this is a double kill) |

Then in `PlayerKilled`:

* Kill spree counter `player+0x744` (byte) is incremented on the killer; the victim's spree is cleared on death.
  * spree 3 → `is_killer`: +30 hp (cap 150), award 2, message `#TS_KillSpree%i` (random 1..16).
  * spree 6 → `is_demolition`: +60 hp (cap 150), award 3.
  * spree 9 → `is_specialist`: hp 150, **kung fu + superjump** (`PwUp 4` and `PwUp 0x100`,
    physinfo `mj=1`), a stored **slow pause, 2 s** if no powerup is held, award 4.
  * spree ≥ 10 → `is_unstoppable`: points ×2, `#TS_Unstoppable`.
* Double kill (< 2 s since the killer's last kill, `+0x748`): points ×2.
* Killing a "specialist" (victim spree > 8): +5 points, the killer gets slow pause 2 s, and
  `#TS_SpreeKilled%i`. Suicide while spree > 8 costs an extra -5.
* Death by your own dropped weapon is announced with `#TS_OwnWeapon`.
* Headshot / knife / katana / coldcock HUD lines (`#TS_Headshot`, `#TS_KnifeKill`,
  `#TS_KatanaKill`, `#TS_Coldcock`).
* "Spectacular" kill (attacker stunting, close combat, or points > 2) with
  `spectacularness`% chance → `CTSSlowMotionPoint::CreateSlowMotionPoint(victim.origin, 0.25, 1.0 s)`.
  Every player with line of sight to that point is slowed to 0.25 for 1 s.
* **slowmatch** (`slowmatch == 1`): a killer with no active powerup and either no stored powerup or
  stored slowmo gets stored slowmo seconds +1, capped at 3.
* Cash: killer `points*500 + 400` (team kill: -1000), victim +900. In modes ≥ 2: killer ±1000, victim +1000.
* Team kills: 3 within rolling 30 s windows (`+0x7c4`/`+0x7c8`) → kick, or `banid <banfortk>`.
* Fires `game_playerdie` (victim) and `game_playerkill` (killer). `+0xb30` deaths++. `ScoreInfo`
  for both. `CallCheckDeads()` schedules `CheckDeads` 1 s later.
* Log lines carry suffixes ` (sliding)`, ` (diving)`, ` (double_kill)`, ` (killed_specialist)`,
  ` (stopped_fury "...")`, ` (is_unstoppable|is_specialist|is_demolition|is_killer)`, ` (victims_weapon)`.
* Weapon name for `DeathMsg`/logs: strip `weapon_`/`monster_`/`func_`; `knife`→`Throwing Knife`,
  `shrapnel`→`Shrapnel`, `grenade`→`M61 Grenade`, kung fu→`Kung Fu`, pistol-whip→`<name> Stock`.

### 2.4 Last Man Standing and The One

* **LMS** (DM, `g_lastManStanding`): `CTSGameRules::Think` restarts the round when
  `+0x0c` expires, and calls `CheckDeads` when the round time runs out. `CheckDeads` (0x79c00)
  counts alive players. One left with ≥ 2 players: "%s is the Last Man Standing! 10 frags",
  +10 frags, log `last_man_standing`, round over in 3 s, `RoundTime(left, 2)`. Several left:
  "%d men standing!". Time up with no winner: "Round over".
  `RestartRound` (0x77920): round time `clamp(roundtime,30,180)`, `RoundTime(secs, 0)`. Every player
  gets the value of their weapons refunded (price + silencer 900, laser 800, flashlight 500,
  scope 1800, plus ammo value) and is put in observer (forced respawn with `+0x770 = now+3`).
  Breakables, ground weapons, powerups and flags are respawned (`RespawnEntities` 0x77764).
* **The One** (teamplay object, 2 teams): every 10 s, if nobody is The One, `SelectRandomTheOne`
  picks a random alive non-observer player. `SetPlayerTheOne` (0x7b078): hp 150, kung fu,
  superjump (`mj=1`), speed 330, a stored slow pause of 3 s if none is held, award 10, "%s is The One!"
  (colour 100,150,255). Kills by anyone else score 0. Whoever kills The One becomes the new One
  (`TheOneIsDead` 0x7b258).

### 2.5 Round timer and wins (modes 2/3, unreachable in this build)

* `RoundTime` (`TSRoundTime`, 2 bytes): `byte seconds_left, byte state` (0 = running,
  2 = ended/frozen). Sent on restart, on join (`CBasePlayer` 0x9xxxx), in `InitHUD`, and on a win.
* Round time out → `RoundTimeLeft` (0x79024): fires the manager's `targetontimeleft`, or calls
  `TeamWin(2 /*draw*/)`. Mode 2 instead calls `TeamWin(2)` directly.
* `CheckDeads` in mode 2: team 1 all dead → team 0 wins; team 0 all dead → team 1 wins.
  Mode 3: fires the manager's `targetonmercdead` / `targetonspecdead`.
* `TeamWin(team, cash, restart, isScore)` (0x78a08): with fewer than 2 players it resets team
  state ("Waiting for other players."). Otherwise every winning player gets `cash`
  (or `cashforwin`) and every other player `cashforlose`, and each player receives `TSHVoice`
  (`byte lost`). team == 2 → "Game Draw". Otherwise `team.score++` and "%s Win!" / "%s Score!".
  `restart` schedules the restart in 3 s. `TeamScore` goes to all.

---

## 3. Objective system

### 3.1 Flow

```text
round start (modes 2/3): InitObjectives → collect ts_objective_manager (≤32); mode=3 if any else 2;
                         EnableObjective(false) on every IsObjective() entity
SetObjective → ClearObjectiveList; pick random manager; manager.Reset() (vtbl slot 67)
manager.Reset → print messagea..d (TSMessage 0,255,0,8,30); fire objptargeta..h
ts_objective_ptr.Use → for each entity named <target>: if IsObjective(): EnableObjective(true);
                       idx = AddObjectiveInList(obj, &objmsg[0..3]); send Objective to every player
objective completes → fire its target (usually ts_wingiver / another ts_objective_ptr) → Freeze(true)
```

`CTSObjective::Freeze(b)` (0x8c310) sets `enabled = !b` and sends **`ShowObj`**
(`byte objective_index, byte visible`) to all.

**`Objective`** (`TSObjective`, variable length, MSG_ONE) from `SendObjectiveToHud` (0x7ac80):
`coord x, coord y, coord z` (the objective's `Center()`), `byte index`, `string text`. The text is
the pointer's message for the receiving player's team index (`objmsgspec` / `objmsgmerc` /
`objmsgteam3` / `objmsgteam4`), or empty if the player has no team. **`objmsgall` is parsed but
never sent** (only 4 strings are copied). The list is resent on team change and in InitHUD.

Because `ts_objective_ptr::Use` works in any mode, a map can still enable objectives in continuous
TeamDM by firing a pointer from another entity. `InitObjectives` never runs there, so the
objectives are never reset (inferred).

### 3.2 Base `CTSObjective` (sizeof 0x64+)

| Off | Field |
|---|---|
| +0x64 | `bool enabled` |
| +0x68 | `int attackerteam` (keyvalue; -1 = any team) |

`CanInteract(player)` → `attackerteam == -1 || attackerteam == GetTeamIndex(player.team)`.
`IsObjective()` returns 1 for CTSObjective and CTSWinGiver (`EnableObjective` on a wingiver resets its
call counter and the used flag).

### 3.3 Per-entity behaviour

| Entity | Class / size | Behaviour | Completion |
|---|---|---|---|
| `ts_objective_manager` | CTSObjectiveManager | invisible; holds 4 HUD lines, 8 targets, and 3 outcome targets | n/a |
| `ts_objective_ptr` | CTSObjectivePointer | Use → enable and register target objectives | n/a |
| `ts_bomb` | CTSBomb | Brush, visible only while enabled (`SOLID_BSP`-like 4, `MOVETYPE_PUSH` 7, `FL_WORLDBRUSH`). Countdown = round time left, decremented 1/s. Beeps `misc/beep2.wav` 1/s (0.1 s when "hurried"). `+use` holds defuse: "%i seconds left" (center print), defuse timer = `defusetime`. When the countdown hits 0: `RoundTimeLeft()`, `Freeze`, and `TSExplosion(center, 300 dmg, DMG 0x1040, radius 2048/4096)`. | Defused: fire `target`, print `message`, Freeze |
| (bomb wires) | `cutwires 1` | `SetRandomWires`: 3 wires, one each of 1 = defuse, 2 = hurry (fast beep, wire state copied to the player `+0x78c..e` → **`Wires`** msg `byte w0,w1,w2`), 3 = detonate (countdown = 0). `CTSBomb::CutWire(i, player)` is called from `CheckForWires` (0x92f08) (inferred: a client command). | wire 1 = defused |
| `ts_hack` | CTSHack (0x80) | Same model handling as the bomb. Hold `+use` for `hackingtime` (clamped 1..30). `misc/hacking.wav` 1/s, then `misc/hacked.wav`. Its own timer (round time left) freezes it when it expires. | fire `target`, `message`, Freeze |
| `ts_teamescape` | CTSTeamEscape (0xf8) | Trigger brush, `SOLID_TRIGGER` while enabled. Counts distinct attacker-team players touching it in the current 1 s window. Needed: `escapepercentage` 0 → 1, 1 → n/3, 2 → 2n/3, 3 → n (n = living players of `attackerteam`, `TSCountPlayers`). | fire `target`, `message`, Freeze |
| `func_vip_safetyzone` | CVipEscape | **No export / classname link**. Spawn only hides the brush. Dead code. | none |
| `ts_wingiver` | CTSWinGiver | `Use`: call counter++. At `callsnumber`: `TeamWin(winnerteam, (int)useValue, restart=1)`, prints `message`, then latches (one-shot until `EnableObjective` resets it). **`victorycash`/`defeatcash` are parsed but unused**: win cash = the Use value or `cashforwin` (inferred from TeamWin's call site). | round win |
| `ts_scoregiver` | CTSScoreGiver | Like wingiver without the latch, `TeamWin(..., restart = spawnflags&1, isScore=1)` → "%s Score!" | team score +1 |
| `ts_trigger` | CTSTrigger | see §5 | n/a |
| `ts_sellzone` | CTSSellZone | Touch by a dropped `WorldGun`: refunds the thrower half the weapon price plus attachments (450/400/250/900). **Gated by `CashBased()`, which always returns 0, so it does nothing in 3.0.** | n/a |

`winnerteam` is passed straight to `TeamWin` as a team **index**: 0 = team 1, 1 = team 2, 2 = draw,
3 = **team 4** (team-array index 3). The FGD's "3: Team 3, 4: Team 4" is off by one, and 4 would
index past the 4 teams (inferred bug).

### 3.4 Briefcase / flag (capture the briefcase)

This is the only objective-style mode that works in 3.0 TeamDM. `CTSGameRules::IsCTB()` is true
when mode == 1 and a `ts_briefcase` exists; fraglimit then counts captures.

* `ts_briefcase` (CTSBriefcase): an invisible `SOLID_TRIGGER` brush that serves as both the briefcase
  home and a capture zone. The constructor assigns a flag ID 1..15 (`s_nextFlagID`).
  Keys: `contents` (≤31 chars, default `"a flag"`), `ownerteam` (1-based; stored -1, so 0 → -1 = any).
  1 s after spawn, `FlagFall` creates a `ts_flag` at the bbox centre carrying `s_flag_status`
  `{bool held, string_t contents, int id, int team, int lastHolder, EHANDLE home}` and sends
  **`TSFlag`** (`byte state 0 = at home, byte id, byte team+1, byte holder 0`).
* `ts_flag` (CTSFlag, 0xb0, derives from CTSPhysicObject): `models/briefcase.mdl`, `MOVETYPE_BOUNCE`,
  gravity 0.7, friction 0.8, glow shell (`renderfx 19`, amt 5) in the team colour: team0 125,165,210;
  team1 200,90,70; team2 225,205,45; team3 145,215,140. Dropped flags return home after
  **20 s** ("%s briefcase returned"). A flag thrown fast enough damages what it hits
  (`speed*30*0.001`, `DMG 0x1080`).
  * Touch by an enemy (or anyone if team == -1): `CBasePlayer::TakeFlag` needs 20 free slots
    (`+0x548 >= 20`). It costs 20 slots (speed is recomputed), "%s picked up a briefcase containing %s!",
    `TSFlag(1, id, team+1, holder)`, log `aquired_briefcase`.
  * Touch by the owning team on a dropped flag: returned home, +5 frags, "%s returned the briefcase!".
  * Drop (death, "drop kungfu", team change): `TSFlag(2, id, team+1, holder)`, log `dropped_briefcase`.
* Capture (`CTSBriefcase::CaptureTouch` 0x8db9c): a player carrying any flag touches a briefcase zone
  whose `ownerteam` matches the player's team (or -1). The flag ID isn't checked in this build.
  The flag goes home, the briefcase fires `target`, prints `message`, gives +10 frags
  ("%s captured the briefcase! 10 #TS_Frg"), increments the team score, sends `TSHVoice` (byte lost)
  to each player, and broadcasts `TeamScore`. With fewer than 2 players it resets the scores instead.

---

## 4. Powerups

### 4.1 Types (bitmask; `CTSPowerUp::SetupPowerUp` 0x98014, `PlayerAddPowerUp` 0x97bc8)

| Bit | FGD name | Model body | Base duration | Kind | Effect on pickup |
|---|---|---|---|---|---|
| 0x001 | Slow Motion | 4 | 3 s | stored | `+0x728 = 1`, `+0x730 = secs` |
| 0x002 | Infinite Clip | 2 | 3 s (unused) | instant | `CTSGun::MultiplyClips` doubles the current gun's clip; fails if no gun |
| 0x004 | Kung Fu | 0 | — | instant/permanent | `player+0x74e = 1`; `PwUp(4, 0)` |
| 0x008 | Slow Pause | 9 | 2 s | stored | `+0x728 = 8` |
| 0x010 | Double Firerate | 1 | 3 s | stored | `+0x728 = 0x10` (CHANGELOG: all timers ×1.5) |
| 0x020 | Grenade | 5 | — | instant | `PickUpWeapon(24 /*M61*/)` |
| 0x040 | Health | 6 | — | instant | health → max(health, 150); starts the overheal decay timer |
| 0x080 | (Armor; missing from FGD) | 7 | — | instant | `TakeArmor(100)` (the `+0x8c` field, always 100.0) |
| 0x100 | "Low Gravity" (FGD) = **Superjump** | 8 | — | instant/permanent | `player+0x74f = 1`, physinfo `mj=1`, `PwUp(0x100, 0)` |

Duration = base × `pwupmult` (rounded). Instant types (mask 0x1e6) can always be picked up and
play `items/gunpickup2.wav`.

Stored powerups (slowmo, slow pause, double firerate) occupy the player's single slot:
`+0x728` held type, `+0x730` seconds. The player can pick one up only when the slot is empty, or
when both the held and the new item are slowmo and the held seconds are < 3. Holding `+use`
(`IN_USE`) swaps: the held powerup is dropped as a new temporary powerup at the player's feet.
`CBasePlayer::UsePowerUp` (0x95980) activates it: `+0x724 = type`, `+0x72c = now + secs`, sends
`PwUpTime` (`byte seconds`) and `TSMBlur` (MSG_PVS, `byte entindex, byte 1 = slowmo | 2 = slowpause`).
While slowmo is active the player's slow factor is 0.35, and 0.225 for slow pause; it's sent as
`TSSlowMo` (`coord factor*100`).

**`PwUp`** (`TSPowerUp`, 3 bytes): `short type, byte seconds`. It's sent whenever the held type or
seconds change (`CBasePlayer::UpdateClientData`), and for the permanent flags as `(4,0)` /
`(0x100,0)`. Superjump is resent on respawn when the map flag is set.

Predicates (0x75fa8..): `SlowMotion = +0x724&1`, `SlowPause = &8`, `InfiniteClips = &2`,
`DoubleFireRate = &0x10`, `KungFu = byte +0x74e`.

### 4.2 `ts_powerup` entity

* Keys: `pwuptype` (int; ≥ 1 = fixed type), `pwupduration` (respawn delay), `pwupmult` (float,
  default 1.0), and `spawnflags` = the allowed random set. Also `message` and `target` (pev).
* `Spawn`: `models/powerup.mdl`, `MOVETYPE_TOSS`, rendermode 1 / amt 255, renderfx 14 (constant glow),
  animated. `SetupPowerUp(pwuptype, -1, 0, permanent=1)`: if `pwuptype < 1`, a random pick from
  `spawnflags`, falling back to all of 0x1ff. `Fall` drops it to the ground; `OnGround` gives a
  bbox of (-16,-16,0)-(16,16,64) and starts `WaitTouch`.
* On pickup: a permanent (map) powerup hides itself, re-randomises if it was random, prints
  `message` to the picker, fires `target`, and respawns after `pwupduration`:
  `< 1 → 60 s`, `1..10 → 10 s`, otherwise `min(v, 180)`.
* Hidden while `nopowerup == 1` or in modes 2/3.

### 4.3 Automatic spawner (`CTSGameRules::Think`, DM/TDM only, `nopowerup != 1`)

When `now > nextPowerup`: `r = RandomFloat(0,1)`; `type = (r < 0.25 && slowmatch != 1) ? 1 /*slowmo*/ :
GetRandomPowerup(0x1ff)`. `PutPowerUp` (0x9797c) picks a random `info_player_deathmatch` (of up to 32),
`GetRandomPosition` near it, and requires no `ts_powerup` within 128 units. It tries every spot.
The result is a temporary powerup (`CreatePowerUp(type,-1)`, 60 s life, fading over its last 30 s:
`renderamt = left/30*255`). Next attempt in 20 s after success, 1 s after failure.
`GetRandomPowerup(mask)` (0x97894) picks uniformly among the set bits 0x1..0x100. It excludes
0x80, and 0x100 when the map superjump flag is set (everyone already has it).

---

## 5. Other TS gameplay entities

| Entity | Notes |
|---|---|
| `ts_trigger` (CTSTrigger) | Brush trigger (`SOLID_TRIGGER`, invisible). Touch by a living player at most once per `nextcheck` (min 0.5 s). Fires `target` if the team matches `attackerteam`/`allowedteam` (2 → -1 = any). Spawnflag 8 = flag carriers only. `message` is a **printf format** that gets the player's name (`%s`) and is always printed, even on a team mismatch. Doesn't chain to base `KeyValue`, so `delay`/`wait`/`master` are ignored. |
| `ts_dmhill` (CTSDMHill) | King of the hill. The first living toucher becomes "king". If another player who isn't a teammate touches, or the king leaves for > `nextcheck`, it resets. Every `nextcheck` (min 0.5 s) the king gets `fragamt` frags (DM), or every living member of the king's team gets `fragamtteam` (teamplay). Message `"<name>|Team <team> <message> ,%i frags for him|they"`, hold `min(nextcheck*10,30)`. Fires `target`. Enabled only if the value for the current mode is > 0. |
| `ts_slowmotion` (CTSSlowMotion) | `duration` (float s; ≤ 0 = toggle), `slowamt` (0..1). Flags 1 start on, 2 whole map (`GlobalSlowMotion2`), 4 slow bullets (`player+0x175` → `TSBTime`). Area mode slows touching players and releases them when they move further than the brush half-diagonal from its centre. Use prints `message` and fires `target`. Re-applied every 0.5 s. |
| `ts_slowmotionpoint` | Internal (death cam): slows every player in line of sight for its duration, then removes itself. |
| `ts_timer` (CTSTimer) | `duration` (int s, must be ≥ 1). Without flag 1 it starts running and **loops**. Flag 1 (Start OFF): each Use starts it and it fires **once**. The FGD's flag 2 "Loop" isn't read. Each tick fires `target` and prints `message`. Use toggles. |
| `ts_customtarget` (CTSCustomTarget) | `targets` = up to 64 names separated by `;` (each char[32]), `accumulate` = Use calls needed, `triggermethod` 0 all / 1 random / 2 sequential loop. Prints `message`. |
| `ts_playeramount` (CTSPlayerAmount) | `clients` (int), `connecttarget`, `disconnecttarget` (char[100] each). Fires when the connected-client count reaches **exactly** `clients` on connect or disconnect. Flag 1 removes it after firing. The delay field is never set by keys, so firing is immediate (inferred). |
| `ts_mapglobals` (CTSMapGlobals) | No keyvalues (KeyValue rejects all). Spawnflags 1 no knives, 2 no pistols, 4 no SMGs, 8 no rifles, 16 no shotguns → `allowed = 0x1f ^ flags`. 32 → no round timer (`TSGameRules+0x10 = 0`). 64 → superjump for everyone. The FGD's "respawns per round / max alive players" aren't implemented. |
| `ts_groundweapon` (CTSGroundWeapon) | Keys `tsweaponid`, `wduration`, `wextraclip`, `buyable`, `attackerteam`. Spawnflags 1 silencer, 2 laser, 4 flashlight, 8 scope, 16 lie on wall (`PutOnWall`). Respawn: `<1 → 60 s` (never in round modes; respawned at round start), `1 → 1 s`, otherwise `min(v,180)`. Buyable only when `CashBased()` (always false in 3.0). |
| `ts_groundammo` (CTSGroundAmmo) | `wduration`; `magsN` (N = 1..11 ammo type) → rounds = N mags × ammo clip size. Flag 16 = on wall. |
| `ts_model` (CTSModel) | Precaches and sets `model`. `SOLID_BBOX` with a zero-size box, static, plays `sequence`. Removed if no model. Render keys come from pev. |
| `ts_wind` (CTSWind) | `base`, `variance`, `frequency` (case-insensitive). Think every `frequency ± frequency/2`: **`TSPSys`** `byte 3, long rand(0..30000) (seed), long yaw = angles.y ± 45, coord base ± variance`. |
| `ts_fog` (CTSFog) | Removes itself on spawn. The **client** reads `near`/`far`/`color` from the BSP entity lump (the strings `ts_fog`/`ts_emitter` are referenced by client function 0x1003a5d0). |
| `ts_emitter` (CTSEmitter) | Server only parses and validates (`Emits per second <= 0!`, `Particles per emit <= 0!`), then **removes itself**. The client simulates from the entity lump. `CTSSharedEmitter::SV_UpdateClient` (sends `TSPSys byte 1`) is never called. |
| `ts_particle` (CTSParticle) | Server-side registry entry (limit 512, `Too many particles!`). Its only server effect is precaching `soundonemit`. |
| `deadcorpse` (CTSDeadCorpse) | Internal: `TSCreateDeadCorpse(player, life)` copies model, angles, sequence, frame and velocity; `MOVETYPE_TOSS`; `renderfx 17` (kRenderFxDeadPlayer) with the player index in rendercolor.x. Times out. |
| `shrapnel` (CTSShrapnel) | Internal grenade fragment, `models/shrapnel.mdl`, bounces (`knife_hit.wav`), damages. Created by `TSExplosion`. |
| `info_breakable` | Internal helper (EHANDLE → breakable). `CTSGameRules::RespawnEntities` calls `BreakableRespawn(false)` on each. |
| `func_breakable` / doors (modified) | New keys `respawntime` (≥ 0 = respawn after N s, with no player in the box), `respawntarget` (char[?], fired on respawn when spawnflag 8 is set), `gibmodel`. `material` is clamped to < 10, else 1. On break, **`TSFrags`** (`TSCreateDebris`, MSG_PVS): `coord origin[3], coord size[3], byte 0, coord mins[3], coord maxs[3], long material/flags, coord speed` for glass (material 0). Other materials use the SDK `TE_BREAKMODEL` (0x6c). `TSExplosion` sends `TSFrags` (MSG_ALL): `coord origin[3], coord radius, coord 0, coord 0, byte 1`. |

---

## 6. Reconstructed FGD for TS entities (binary keyvalues vs `ts_fgd.fgd`)

Types: `int` = `strtol`, `float` = `strtod`, `str` = `ALLOC_STRING` unless noted, `vec` = `"%f %f %f"`.
"pev" means the engine/SDK entvars parser handles the key before the class `KeyValue` runs.

| Classname | Key | Type | Default | Notes |
|---|---|---|---|---|
| worldspawn | `mapteams` | str | — | `;` list, max 4 → `SetTeamList` immediately |
| | `teammodels` | char[] | — | `t0m1;t0m2|t1m1|...` |
| | `gamemode` | int | 0 | 0 server, 1 DM, 2 TDM, 3 LMS, 4 The One |
| | `defaultteam` | int | 0 | ≠0 → spawnflags |= 4 |
| ts_powerup | `pwuptype` | int | 0 | **not in FGD**; ≥ 1 = fixed type |
| | `pwupduration` | int | 0 (FGD 60) | respawn: <1→60, ≤10→10, ≤180 |
| | `pwupmult` | float | 1.0 | duration multiplier |
| | `spawnflags` | pev | 0 | random set: 1,2,4,8,16,32,64,(128 armor),256 superjump |
| | `message`, `target` | pev | | pickup message / fire |
| ts_groundweapon | `tsweaponid` | int | FGD 1 | weapon id (see FGD list) |
| | `wduration` | int | FGD 60 | |
| | `wextraclip` | int | 0 | extra mags |
| | `buyable` | bool | 0 | needs cash mode (off) |
| | `attackerteam` | int | — | team allowed to buy (round modes) |
| | `spawnflags` | pev | | 1 sil, 2 laser, 4 light, 8 scope, 16 wall |
| ts_groundammo | `wduration` | int | 60 | |
| | `mags1`..`mags11` | int | 0 | per ammo type |
| ts_mapglobals | (none) | | | spawnflags 1..64 as §5 |
| ts_objective_manager | `messagea`..`messaged` | str | | HUD lines at round start |
| | `objptargeta`..`objptargeth` | str | | fired at round start |
| | `targetontimeleft` | str | | else draw |
| | `targetonspecdead` | str | | team 1 eliminated |
| | `targetonmercdead` | str | | team 2 eliminated |
| ts_objective_ptr | `objmsgspec`, `objmsgmerc`, `objmsgteam3`, `objmsgteam4` | str | | per-team HUD text |
| | `objmsgall` | str | | parsed, never sent |
| | `target`, `targetname` | pev | | |
| ts_bomb | `defusetime` | int | FGD 10 | |
| | `cutwires` | int | FGD 1 | |
| | `attackerteam` | int | FGD 0 | -1 any |
| | `target`, `message`, `model` | pev | | |
| ts_hack | `hackingtime` | int | FGD 10 | clamped 1..30 |
| | `attackerteam` | int | | |
| ts_teamescape | `escapepercentage` | int | FGD 1 | 0..3 |
| | `attackerteam` | int | | team that escapes |
| ts_trigger | `nextcheck` | float | 0 (≥0.5 used) | |
| | `attackerteam` | float→int | | **2 isn't special here** |
| | `allowedteam` | float→int | | **not in FGD**; 2 → -1 (any) |
| | spawnflags 8 | pev | | flag carrier only |
| ts_dmhill | `nextcheck` | float | FGD "10" | min 0.5 |
| | `fragamt` | int | FGD 5 | DM |
| | `fragamtteam` | int | FGD 1 | TDM |
| ts_slowmotion | `duration` | float | FGD 5 | ≤ 0 = toggle |
| | `slowamt` | float | FGD 0.5 | |
| | spawnflags | pev | | 1 on, 2 all map, 4 slow bullets |
| ts_sellzone | `attackerteam` | int | | dead (cash off) |
| ts_wingiver / ts_scoregiver | `victorycash`, `defeatcash` | int | 2000 / -1000 | parsed, unused (inferred) |
| | `winnerteam` | int | 0 | team index; 2 draw |
| | `callsnumber` | int | FGD 1 | **object default 0, so the first call wins** |
| | scoregiver flag 1 | pev | | restart round |
| ts_briefcase | `contents` | char[32] | "a flag" | |
| | `ownerteam` | int | FGD 1 | stored -1; 0 = any |
| ts_playeramount | `connecttarget`, `disconnecttarget` | char[100] | | |
| | `clients` | int | | |
| ts_timer | `duration` | int | FGD 30 | flag 1 start off (one-shot) |
| ts_customtarget | `targets` | `;` list | | ≤64 × 31 chars |
| | `accumulate` | int | FGD 1 | |
| | `triggermethod` | int | 0 | 0/1/2 |
| ts_model | (pev only) | | | model, sequence, render* |
| ts_wind | `base`, `variance`, `frequency` | float | | |
| ts_fog | `near`, `far`, `color` | client | | server ignores |
| ts_emitter | `particle`, `epslow/high`, `ppelow/high`, `variancelow/high` (vec), `cameradensity`, `cameraradius`, `origin` | | | `origin` is the offset (CHANGELOG 2.1.19) |
| ts_particle | `sprite_name`, `sprite_trans`, `follow_view`, `collide`, `oncollide`, `lifelow/high`, `gravitylow/high`, `colorlow/high`, `fadespeedlow/high`, `p_radiuslow/high`, `scalespeedlow/high`, `current_framelow/high`, `frame_ratelow/high`, `randomdeltalow/high`, `velocitylow/high`, `a_velocitylow/high`, `randomvellow/high`, `followaxis`, `soundonemit`, **`termvelocitylow/high`** (not in FGD), `reactamountlow/high`, `windamountlow/high`, `fadeintimelow/high`, `stretchspeed` | | | clamps: life ≥ 0, colour 0..1, fade ≥ 0, frame ≥ 0 |
| func_breakable (TS) | `respawntime` (int), `respawntarget`, `gibmodel`, `spawnobject`, `explodemagnitude`, `material` | | | plus SDK keys |

Entity exports that exist but aren't in the FGD: `ts_flag` (internal), `ts_slowmotionpoint`, `deadcorpse`,
`shrapnel`, `info_breakable`, `TSWorldGun`, `TSAmmoPack`, `m61_grenade`, `knife`, `weapon_tsgun`,
`cmd_restartround` (a server command, not an entity). `ts_vipescape` isn't exported at all.
FGD entities with no TS-specific binary behaviour: `ts_fog` (client only).

---

## 7. User messages touched by this subsystem

| Name (`RegUserMsg`) | Size | Payload |
|---|---|---|
| `TSMessage` | -1 | `byte r,g,b, byte effect, byte hold, string` |
| `RoundTime` | 2 | `byte secs_left, byte state (0 run, 2 end)` |
| `Objective` | -1 | `coord x,y,z, byte index, string text` |
| `ShowObj` | 2 | `byte index, byte visible` |
| `Wires` | 3 | `byte wire0, wire1, wire2` (0 cut, 1/2/3 types) |
| `SrvSett` | 3 | `byte id, short value` |
| `TSPAward` | 2 | `byte entindex, byte award/status` |
| `TSHVoice` | 1 | `byte 0 = your team won, 1 = lost` |
| `TSFlag` | 4 | `byte state (0 home, 1 taken, 2 dropped), byte flag id, byte team+1, byte holder entindex` |
| `PwUp` | 3 | `short type, byte seconds` |
| `PwUpTime` | 1 | `byte seconds` |
| `TSMBlur` | 2 | `byte entindex, byte 1 slowmo / 2 slowpause` |
| `TSSlowMo` | 2 | `coord slowfactor*100` |
| `TSBTime` | 1 | `byte bullet-time flag` |
| `TSPSys` | -1 | `byte type`; type 3 = wind: `long seed, long yaw, coord strength` |
| `TSFrags` | -1 | debris; see §5 |
| `GameMode` | 1 | `byte g_teamplay` |
| `TeamNames` | -1 | `byte n, n × string` |
| `TeamScore` | -1 | `string team, short score, short 0` |
| `ScoreInfo` | 9 | `byte idx, short frags, short deaths, short 0, short team+1` |
| `DeathMsg` | -1 | `byte killer, byte victim, string weapon` |

---

## 8. Rust recreation notes

**Architecture.** Model the rules the way TS actually works: one `GameRules` struct with a
`mode: Mode { Dm, TeamDm, RoundTdm, Objective }` plus `lms: bool` and `the_one: bool`, instead of
a class hierarchy. The SDK split into Multiplay and Teamplay only matters for team bookkeeping; fold
it into `Option<Teams>`. Put the `CTSGameRules` state (§1.5) in the same struct. Drive it from
`StartFrame` (`rules.think()`), as the SDK does. Keep modes 2/3 behind a cvar (`ts_roundmode`),
because the shipped binary never enables them.

```rust
pub struct Team { name: ArrayString<16>, models: ArrayVec<ArrayString<16>, 3>,
                  spawn_class: &'static CStr, fallback: &'static CStr, cash: i32, score: i32 }
pub struct PlayerTsState { spree: u8, last_kill: f32, award: u8, respawn_at: f32 /* -1 = never */,
                  join_deadline: f32, respawns_used: u8, held_pwup: u16, held_secs: i32,
                  active_pwup: u16, active_until: f32, kungfu: bool, superjump: bool,
                  tk_window: f32, tk_count: u8, the_one: bool, flag: Option<FlagStatus> }
pub struct FlagStatus { id: u8, team: i8, contents: StringT, last_holder: u8, home: EntityRef }
```

**Entity trait.** The `Entity` trait in rust.md §6.3 is enough if you add the TS virtuals as
default methods: `is_objective()`, `enable_objective(bool)`, `freeze(bool)`, `go_slow(f32)`,
`in_slow()`, `breakable_respawn(bool)`. Objective entities share `ObjectiveBase { enabled, attacker_team }`.
`can_interact(team) = attacker_team == -1 || attacker_team == team`. Keep the entvars fallback
parser **before** the class handler, as the SDK's `DispatchKeyValue` does. TS classes rely on
`target`, `targetname`, `message`, `model` and `spawnflags` arriving through pev.

**Implement first** (they appear in shipped maps and work in 3.0): `ts_powerup` (and the auto
spawner), `ts_groundweapon`, `ts_groundammo`, `ts_mapglobals`, `ts_model`, `ts_trigger`, `ts_dmhill`,
`ts_slowmotion` (+ internal slow points), `ts_timer`, `ts_customtarget`, `ts_playeramount`,
`ts_briefcase`/`ts_flag` (CTB), `ts_scoregiver` (as used by CTB maps), the spawn selector, kill
scoring and awards, LMS, The One, breakable respawn, and `ts_wind`. For `ts_emitter`, `ts_particle`
and `ts_fog`, the server only validates and precaches `soundonemit`. The **client** must parse
these from the BSP entity lump. This contradicts rust.md §11 ("map entity sends its parameters to
clients once"), so pick one design. Lump parsing matches TS, needs no bandwidth, and is
deterministic.

**Defer or stub:** `ts_objective_manager`, `ts_objective_ptr`, `ts_bomb` (+ wires), `ts_hack`,
`ts_teamescape`, `ts_wingiver`, team cash, buy-zone `ts_sellzone`, and `func_vip_safetyzone` (dead).
Register the classnames anyway so maps load. A spawn-and-hide stub is enough until round modes exist.
Map votes and TK kick/ban are server-admin features and can come late.

**Gotchas to reproduce or fix deliberately:**
* `winnerteam` index vs FGD labels; `callsnumber` default 0; unused `victorycash`/`defeatcash`.
* `ts_timer` flag 2 ignored; `ts_trigger` always prints its message; `objmsgall` never sent.
* Round time is clamped to 30..180 and respawn time to 5..30, regardless of cvar values.
* `PwUp` is sent on change detection (`+0x738/+0x734` shadow copies), not on every pickup. Mirror
  this with a `last_sent` field in `PlayerTsState`.
* Global and per-entity slow motion are time-scale properties of entities (`fuser1` on
  `CTSPhysicObject`: velocity×s, avelocity×s, gravity×s², restored on change). Players, `grenade`,
  `knife` and `WorldGun` entities are all scaled by `GlobalSlowMotion2`, re-applied every 0.5 s.
  See rust.md §11. Keep a `time_scale: f32` on every physics entity.
* `TSMessage` strings starting with `#TS_` are client localisation keys (titles), so keep them verbatim.
