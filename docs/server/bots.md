# Bots (Windows server `mp.dll`)

Source: `server-win/` export of the Windows server `mp.dll` (MSVC, stripped, no RTTI). Image base
0x10000000, so **Ghidra address = `objdump` address**. All addresses in this doc are `mp.dll`
addresses unless they're marked ".so" (the Linux `ts_i386.so`, Ghidra numbering as in the other
docs). The Linux server has no bot AI: `addbot`/`addcustombot` there only print "Bots only in
listen servers." (§14). The names used here (`CBot`, `CBotBrain`, `CBotModuleAttack`,
`CNodeGraph`, …) were invented for this doc. They are applied to the export from
`scripts/types/mpdll_names.tsv`, so `grep -P '\tCBotBrain\t' server-win/functions.tsv` finds them.

Conventions:

* `pl` = the bot (`CBot *`, a `CBasePlayer`), `pev` = `pl->pev` (at `pl+4` in MSVC). "pev+0xNNN" is a
  standard SDK `entvars_t` offset.
* The bot's AI object `CBotBrain` is embedded at `bot+0xb78`, right after `CBasePlayer` (0xb78 bytes
  in `mp.dll`). Offsets are given both ways: **brain+0xNNN (bot+0xMMM)**, with bot = brain + 0xb78.
* `mp.dll` member offsets differ from the `.so` ones in the other docs. §14.1 gives the conversion:
  `CBasePlayer` members are at **.so − 0x14**, `CTSGun` members at **.so − 0x10**.
* `RL(a,b)` = `g_engfuncs.pfnRandomLong(a,b)` (inclusive: `RL(0,100)` has 101 outcomes), `RF(a,b)` =
  `pfnRandomFloat(a,b)`. `time` = `gpGlobals->time`, `ft` = `gpGlobals->frametime`.
* `sm` = `pl->GiveSlowMul()` (vtable slot 2, 0x10061080) = `max(pev->fuser1, 0.01)`, the TS
  slow-motion time scale (1.0 normally). `skill` = brain+0x1a74.
* Constants and comparison directions were checked in the disassembly. The decompiler gets x87
  compares and `__cdecl` stack arguments wrong in places here. **(inferred)** marks guesses.

Contents:

1. [Overview](#1-overview)
2. [Commands and bot creation](#2-commands-and-bot-creation)
3. [`bots.txt` and `bot_say.txt`](#3-botstxt-and-bot_saytxt)
4. [The `CBot` entity](#4-the-cbot-entity)
5. [`CBotBrain`: layout, reset, think, buttons, view, usercmd](#5-cbotbrain-layout-reset-think-buttons-view-usercmd)
6. [Strategy states](#6-strategy-states)
7. [Vision (bit 0x40)](#7-vision-bit-0x40-cbotmodulevision-0x1006dbf0--0x1006dc10)
8. [Attack (bit 4)](#8-attack-bit-4-cbotmoduleattack-0x1006c520)
9. [The other modules: respawn, buy, stunt, look around, power-up](#9-the-other-modules)
10. [Chat](#10-chat)
11. [Node graph, learning and navigation (incl. the `.ndm` format)](#11-node-graph-learning-and-navigation)
12. [Cvars](#12-cvars)
13. [Skill, random calls, constants](#13-skill-random-calls-constants)
14. [Shared code: mp.dll vs `ts_i386.so`](#14-shared-code-mpdll-vs-ts_i386so)
15. [Quirks and open questions](#15-quirks-and-open-questions)
16. [Rust port notes](#16-rust-port-notes)

---

## 1. Overview

The bot code is one contiguous block, **0x1006b360–0x10071ff0: 75 functions, 26,669 bytes**,
between `CTSStunt` and `CTSFlag` in link order. Seven hooks in shared code reach into it:

| Hook (shared code) | Calls | Purpose |
|---|---|---|
| `pfnGameInit` 0x10026680 | registers `addbot` 0x10026110, `addcustombot` 0x100261a0, cvars `botlearn`/`bottalk`/`botarmor` | §2, §12 |
| `CTSGameRules::Init` 0x1004d910 (every map) | `CNodeGraph::Reset` 0x10070e00, `CNodeGraph::Load` 0x10071cb0, `BotLoadFiles` 0x1006bee0 | §3, §11 |
| `pfnStartFrame` 0x10010e00 (listen servers only) | `BotPlayerByIndex` 0x1006b360, `CBotBrain::Think` 0x1006f500 | §5 |
| `CBasePlayer::PreThink` 0x1005f5c0 | `CNodeGraph::AddNode` 0x10070e30 while `botlearn` > 0 | §11 |
| `pfnClientCommand` 0x1000f8a0 | `addnode`, `savenodes`, `loadnodes`, `resetnodes`, `testpath` | §11 |
| `CHalfLifeMultiplay::PlayerKilled` 0x10059d10 | `CBot::OnKill` 0x1006b970 (kill taunt) | §10 |
| `CBasePlayer::Spawn` 0x1005e5f0, `CTSGun::VKickback` 0x10054000 | test the is-bot flag `pl+0x14c` (`FL_FAKECLIENT`, server-side recoil) | §4, §5 |

Object structure (sizes in bytes):

```
CBot : CBasePlayer                         0x25f0, vtable 0x10094a9c (Spawn, TraceAttack, Killed, IsNetClient)
  +0x000 CBasePlayer                       0xb78
  +0xb78 CBotBrain brain                   0x1a78
           +0x0000 msec, ideal angles, punch accumulator
           +0x0024 CBotState *m_pState     -> one of the three states below, fixed per life
           +0x0028 CBotNav nav             0x1860: path follower, Vector path[512]
           +0x1888 CBotStateDM             DM/TDM strategy        (the only reachable one)
           +0x1894 CBotStateTeamRounds     round TDM strategy     (mode 2, unreachable in 3.0)
           +0x18a0 CBotStateObjective      objective strategy     (mode 3, unreachable in 3.0)
           +0x18ac CBotModuleAttack        bit 0x004  aim, target, move, fire
           +0x18ec CBotModuleBuy           bit 0x010  build the spawn loadout
           +0x18f4 CBotModuleVision        bit 0x040  list visible enemies/teammates
           +0x18fc CBotModuleLookAround    bit 0x080  idle looking
           +0x1904 CBotModuleStunt         bit 0x008  dive / flip
           +0x1910 CBotModulePowerUp       bit 0x200  use a held power-up
           +0x191c CBotModuleChat          bit 0x400  bot_say.txt lines
           +0x1924 module bit mask (bit 1 = navigate, 0x100 = respawn, inline)
           ... enemy, visible lists, goal, buttons, skill (§5.1)
CNodeGraph g_NodeGraph @ 0x100e8330        0x20600c: 512 nodes, 512x512 link matrix, path finding scratch
```

Each frame, for each bot: the state decides which modules run (by setting bits in the mask), the
modules write button timers, the move vector, the navigation goal and the ideal view angles, the
navigator walks a node path to the goal, and `CBotBrain::RunMove` turns the view and sends one
`pfnRunPlayerMove`. Everything the bot does goes through the same usercmd path as a human
player: buttons, view angles, forward/side move. The only direct state changes are `pev->impulse`
on respawn and `CBasePlayer::UsePowerUp`.

The AI in one paragraph: a bot spawns with a random loadout (`CBotModuleBuy`, no money involved),
roams to a random `ts_dmhill`, `ts_powerup` or spawn point over the node graph, and looks around.
When it sees an enemy (±60° cone, eye-to-eye trace) it turns toward the enemy's origin plus a
skill-scaled random offset. With a gun it walks to a 512-unit flank/cover point, dives or ducks
every 5–10 s, and fires taps or bursts when the enemy is within ~25° of its view. With kung fu,
a knife or a katana it charges or circles. It reloads on an empty clip, drops or switches guns
when out of ammo, uses held power-ups in a fight, chases the last place it saw an enemy, and
taunts in chat. Skill (0.1–3.0) scales turn speed, reaction periods and aim error. Bots never
press `+use`, never buy, change fire mode or zoom, and have no team behaviour beyond not
targeting teammates.

## 2. Commands and bot creation

Both are registered in `pfnGameInit` (0x10026680) with `pfnAddServerCommand`
(0x1002668a: `addbot` -> 0x10026110, 0x1002669a: `addcustombot` -> 0x100261a0). They are server
console commands. No client command reaches them (`pfnClientCommand` has no bot-creation path).

### 2.1 `addbot` (0x10026110)

```c
if (IS_DEDICATED_SERVER()) { ALERT(at_console, "Bots only in listen servers.\n"); return; }
if (!strcmp(CMD_ARGV(1), "help")) { ALERT(at_console, "Usage: addbot [botname]\n"); return; }
BotCreate(CMD_ARGV(1));                       // 0x1006b7c0
```

The argument check is `strcmp(argv1, "help") == 0` (string 0x1009f22c). A missing argument gives
`""`, which is valid. **Despite the usage text, `argv(1)` is not the name. It is the model/team**
(see 1.3). The name always comes from `bots.txt`.

### 2.2 `addcustombot` (0x100261a0)

```c
if (IS_DEDICATED_SERVER()) { ALERT(at_console, "Bots only in listen servers.\n"); return; }
if (!strcmp(CMD_ARGV(1), "help")) { ALERT(at_console, "Usage: addcustombot [botname] [team] [skill]\n"); return; }
float skill = (float)atof(CMD_ARGV(3));       // 0x1007d337 = atof, result stored as float
BotCreateCustom(CMD_ARGV(1), CMD_ARGV(2), skill);  // 0x1006b590
```

Evaluation order: argv(3) first, then argv(2), then argv(1). Missing arguments are `""` (skill 0).
Here argv(1) really is the name, and argv(2) ("team") is the model/team string.

### 2.3 `BotCreate` (addbot core, 0x1006b7c0) and `BotCreateCustom` (0x1006b590)

The two functions are the same except for where the skill and name come from. Locals: `char
model[32]` (esp+0xc), `char name[64]` (esp+0x2c). Neither copy is bounds-checked (`strcpy`).

```c
void BotCreate(const char *modelArg)                 // 0x1006b7c0
void BotCreateCustom(const char *nameArg, const char *modelArg, float skillArg)  // 0x1006b590
{
    model[0] = 0;
    if (modelArg[0])                         strcpy(model, modelArg);
    else if (!g_pGameRules->IsTeamplay()) {  // vtable +0x1c = slot 7 (CHalfLifeMultiplay: 0x10027c70
                                             // returns 0; CHalfLifeTeamplay: 0x1003fdd0 returns 1)
        switch (RANDOM_LONG(0, 6)) {         // jump table 0x1006b94c / 0x1006b798
        case 0: "seal"; case 1: "merc"; case 2: "gordon"; case 3: "hitman";
        case 4: "castor"; case 5: "agent"; case 6: "laurence"; }  // strcpy(model, ...)
    }                                        // teamplay + no arg: model stays ""

    // ---- skill ----
    // BotCreate:        skill = RANDOM_FLOAT(0.1, 1.0);              (always)
    // BotCreateCustom:  if (skillArg <= 0.0)  skill = RANDOM_FLOAT(0.1, 1.0);
    //                   else if (skillArg >= 3.0) skill = 3.0;
    //                   else if (skillArg <= 0.1) skill = 0.1;
    //                   else skill = skillArg;
    //   (constants: 0.0f @0x10089110, 3.0 double @0x1008a890, 0.1 double @0x100891a0,
    //    0.1f imm 0x3dcccccd, 1.0f imm 0x3f800000)

    // ---- name ----
    name[0] = 0;
    // BotCreate:        always BotPickName(name, &skill);
    // BotCreateCustom:  if (nameArg[0]) strcpy(name, nameArg); else BotPickName(name, &skill);

    edict_t *ed = CREATE_FAKE_CLIENT(name);             // pfnCreateFakeClient
    if (!ed) {
        ALERT(at_console, UTIL_VarArgs("Could not find any free client slots. Try setting maxplayers to a higher value.\n"));
        return;
    }
    strcpy(g_botNetnames[ENTINDEX(ed)], name);          // 0x100da9a0 + idx*64
    ed->v.netname = MAKE_STRING(g_botNetnames[ENTINDEX(ed)]);  // ptr - gpGlobals->pStringBase
    BotSetup(ed, model, skill);                         // 0x1006b3b0

    // BotCreate only:
    if (g_nodeGraph.count < 1)                          // int at 0x100e8330, test "jg"
        SERVER_COMMAND("botlearn 1\n");
}
```

The random calls happen in this order: `RandomLong(0,6)` (only with no model argument and not
teamplay), then `RandomFloat(0.1,1.0)` (always in addbot, only for skill <= 0 in addcustombot),
then the name-pick `RandomLong`s (§2.4). Only after that is the fake client created.

`g_botNetnames` (0x100da9a0) is `char[33][64]`, indexed by entity index (it ends at 0x100db1e0).
The engine's netname string points into it for the bot's whole life. It is never cleared.

### 2.4 `BotPickName` (0x1006c150)

Tables: `g_botNames` `char[64][64]` at 0x100db1e0, `g_botNameSkill` `float[64]` at 0x100dc1e0,
`g_botNameCount` int at 0x100dc2e0, `g_botNameUsed` `byte[64]` at 0x100dc2e4.

```c
void BotPickName(char *out, float *pSkill)
{
    if (g_botNameCount <= 0) { strcpy(out, "Bot"); return; }    // 0x100a5a74
    for (;;) {
        int pick = -1;
        int up = RANDOM_LONG(0, g_botNameCount - 1), down = up;
        while (up < g_botNameCount || down >= 0) {      // search outward from the random index
            if (pick != -1) goto found;
            if (down >= 0 && !g_botNameUsed[down]) pick = down;
            if (up < g_botNameCount && !g_botNameUsed[up]) pick = up;   // "up" wins a tie
            up++; down--;
        }
        if (pick != -1) goto found;
        memset(g_botNameUsed, 0, 64);    // all names used: clear the flags (16 dwords), draw again
    }
found:
    g_botNameUsed[pick] = 1;
    strcpy(out, g_botNames[pick]);
    if (g_botNameSkill[pick] > 0.0) *pSkill = g_botNameSkill[pick];  // 0.0 double @0x10089120
}
```

* There is one `RandomLong(0, count-1)` per attempt. A second attempt happens only after the
  "all used" reset. After a reset, the next bot gets a random free name again.
* Used flags are **never** cleared when a bot leaves (no reference from `ClientDisconnect` or
  anywhere else). They're cleared only by the "all used" reset above and by reloading `bots.txt`
  (§3).
* A per-name skill **overrides** the skill from 1.3 without any upper clamp. The only clamp
  afterwards is the lower bound of 0.1 in `BotSetup`. An explicit `addcustombot` name never reads
  `bots.txt`.

### 2.5 `BotSetup` (0x1006b3b0): the ClientPutInServer equivalent

`pfnCreateFakeClient` doesn't call `ClientConnect`/`ClientPutInServer`, so this does the
equivalent work by hand:

```c
void BotSetup(edict_t *ed, const char *model, float skill)
{
    char defModel[20] = "seal";                       // copied from 0x1009efcc, zero-padded
    CBot *pl = GetClassPtr<CBot>(&ed->v);             // 0x1006c240 (allocates 0x25f0 bytes)
    pl->m_bIsBot /* pl+0x14c, int[0x53] */ = 1;
    pl->brain.m_skill /* bot+0x25ec = brain+0x1a74 */ = (skill > 0.1f) ? skill : 0.1f;  // 0.1f @0x1008912c
    ALERT(at_console, UTIL_VarArgs("%s connected with skill %f\n", STRING(pl->pev->netname), (double)skill));
                                                      // prints the UNclamped skill
    pl->SetCustomDecalFrames(-1);                     // 0x10035930: pl+0xb2c = -1
    pl->Spawn();                                      // vtable slot 7 -> CBot::Spawn 0x1006bb40
    int idx = ENTINDEX(pl->pev->pContainingEntity);
    SET_CLIENT_KEY_VALUE(idx, GET_INFOKEYBUFFER(ed), "model", model[0] ? model : defModel);
    SET_CLIENT_KEY_VALUE(idx, GET_INFOKEYBUFFER(ed), "team",  model[0] ? model : "");
    SET_CLIENT_KEY_VALUE(idx, GET_INFOKEYBUFFER(ed), "cl_lw", "1");
    if (model[0])
        g_pGameRules->ChangePlayerTeam(pl, model, FALSE, FALSE);  // vtable +0xd4 = slot 53
             // DM: 0x1000ad00 (empty "ret 0x10"); Teamplay: 0x1003f6c0 CHalfLifeTeamplay::ChangePlayerTeam
    g_pGameRules->PlayerThink(pl);                    // vtable +0x48 = slot 18 = 0x1002c370
    for (e = UTIL_FindEntityByClassname(NULL, "ts_playeramount"); e; e = UTIL_FindEntityByClassname(e, "ts_playeramount"))
        e->PlayerConnected();                         // 0x1004ab00, same call pfnClientConnect makes
}
```

Notes:
* Slot 18 really is `PlayerThink`. Its body (0x1002c370) is the SDK one: during intermission it
  sets `m_iEndIntermissionButtonHit` if `m_afButtonPressed & 0x827`, and clears
  `m_afButtonPressed` (pl+0x800), `pev->button`, and `m_afButtonReleased` (pl+0x804). It does
  nothing outside intermission. No gamerules `ClientConnected` (slot 10) or `ClientPutInServer`
  is called. `InitHUD` isn't called either.
* Compared with `pfnClientPutInServer` (0x1000f1c0), bots skip `CBasePlayer::GiveCash`
  (0x10061710), the `sscanf` of a config value, and `pev->effects |= 0x20`.
* Spawn runs **before** the infokeys are set. So the first `CBasePlayer::Spawn` sees an empty
  model, and teamplay team assignment comes from `ChangePlayerTeam` afterwards.
* In teamplay with no model argument, the bot gets `model=seal`, `team=""`, and no
  `ChangePlayerTeam`. Whether the engine's `SetClientKeyValue` triggers
  `ClientUserInfoChanged` (and so the team code) is engine behaviour, outside mp.dll
  **(unknown)**.

## 3. `bots.txt` and `bot_say.txt`

`BotLoadFiles` (0x1006bee0) is called from `CTSGameRules::Init` (0x1004d910). That runs in the
`CHalfLifeMultiplay`/`CHalfLifeTeamplay` constructors and in `ChangeLevel`, so the files are
re-read on every map start, right after the node graph reset/load (0x10070e00, 0x10071cb0).

**`bots.txt`** (0x1006bee0):

```c
GET_GAME_DIR(dir); strcat(dir, "\\"); strcpy(path, dir); strcat(path, "bots.txt");
memset(0x100db1e0, 0, 0x3454*4);   // 0xd150 bytes: names, skills, count, used flags, AND the
                                   // whole bot_say table + counts (ends exactly at 0x100e8330)
FILE *f = fopen(path, "rb");
if (f) {
    while (fgets(line, 1024, f)) {
        char *e = g_botNames[g_botNameCount];
        strcpy(e, line);                          // unbounded: a line > 63 chars overflows into
                                                  // the next entry (and past entry 63 into the skills)
        int i = strlen(e) - 1;
        while (i >= 0 && isspace((int)(signed char)e[i])) i--;   // trailing whitespace incl. \r\n
        for (i++; i < 64; i++) e[i] = 0;          // zero only up to byte 63
        if (e[0] == 0) continue;                  // blank line: not counted
        char *c = strstr(e, "//");                // 0x100a5a64
        if (c) {
            char tmp[256]; tmp[0] = 0; strcpy(tmp, c + 2);
            sscanf(tmp, "%f", &g_botNameSkill[g_botNameCount]);   // "%f" @0x1009f8c8
            strcpy(c, "");                        // cut the name at "//"
        }
        if (++g_botNameCount >= 64) break;
    }
    fclose(f);
}
BotLoadSay();                                     // 0x1006bc00, always called
```

The format is one name per line, with an optional skill: `Name//1.5`.
* Leading whitespace is kept. Whitespace before `//` is kept too (`Name // 2` gives the name
  `"Name "` and skill 2.0, because `%f` skips the leading space).
* A line that **starts** with `//` is not a comment. It becomes an entry with an empty name, which
  is counted and can be picked (`CreateFakeClient("")`). Its skill stays 0 unless a number follows.
* If `sscanf` fails, the skill stays 0.0 (no override). There are at most 64 names, and the rest of
  the file is ignored.
* Validation: the shipped `ts_original/bots.txt` (identical to `ts_custom/bots.txt`) is CRLF with
  70 names, no `//`, and a final blank line. Only the first 64 load (up to `Premium`). `Angus`,
  `Guerrero`, `McBride`, `Manuello`, `Bear`, `Juan` are never used.

**`bot_say.txt`** (`BotLoadSay`, 0x1006bc00). Table `g_botSay` at 0x100dc324 is
`char[3][256][64]` (only 64 slots per section are used; the stride is 256). The counts
`g_botSayCount[3]` are at 0x100e8324/28/2c. Sections: **0 = `offense`, 1 = `freetime`,
2 = `killed`**.

```c
path = gamedir + "\\" + "bot_say.txt";
memset(0x100dc324, 0, 0x3000*4); g_botSayCount[0..2] = 0;
f = fopen(path, "rb"); if (!f) return;
int sec = -1; char word[64];                      // word is NOT reset per line
while (fgets(line, 1024, f)) {
    sscanf(line, "%s", word);                     // "%s" @0x1009cd14 (empty line: word unchanged)
    if      (!strcmp(word, "offense"))  sec = 0;
    else if (!strcmp(word, "freetime")) sec = 1;
    else if (!strcmp(word, "killed"))   sec = 2;
    else if (sec != -1) {
        char *e = g_botSay[sec][g_botSayCount[sec]];
        strcpy(e, line);                          // unbounded, same overflow as bots.txt
        trim trailing isspace, zero bytes [i+1 .. 63];   // identical code
        if (e[0] && ++g_botSayCount[sec] >= 64) break;   // ANY section full -> stop the whole file
    }
}
fclose(f);
```

* A header is any line whose **first word** is exactly `offense`/`freetime`/`killed` (so
  `offense ` with a trailing space works). Lines before the first header are ignored. A text line
  that starts with one of those words switches the section instead of being added.
* An empty line reuses the previous line's `word`. After a header it re-selects the same section;
  otherwise it's added as an empty string and not counted. Either way it's harmless.
* Lines are stored with leading whitespace. `%s` in a line is replaced by a player name (§10).
* Validation against the shipped file (CRLF): offense 25, freetime 29, killed 42 lines.
  Quirk: the freetime line `I came here to kick ass and chew bubblegum, and I all outta gum! ` is
  64 visible characters plus a trailing space. The trim stops at byte 63, so bytes 64.. (` \r\n`)
  aren't zeroed, and the next line overwrites them. The stored string for freetime[0] is therefore
  `"...outta gum!Kung-Fu only? Anyone?!"` (two lines joined). A faithful port should reproduce
  this, or decide not to.

## 4. The `CBot` entity

### 4.1 `GetClassPtr<CBot>` (0x1006c240): allocation and constructor

The standard `GetClassPtr`: `pev == NULL` creates an entity, and existing private data is
returned as is. Otherwise `pfnPvAllocEntPrivateData(ed, 0x25f0)` (zero-filled by the engine)
runs this inlined constructor chain:

| Step | Address | Effect |
|---|---|---|
| base ctors | 0x1006c3b0 | vptr = `CBaseToggle::vftable` |
| | 0x1006c2bf | vptr = `CBaseMonster` (0x1008a244) |
| member | 0x100445c0 | `CTSAnimation::CTSAnimation(this+0x278)` |
| | 0x1006c2dd | vptr = `CBasePlayer` (0x1008a0d8) |
| member array | 0x10008820 | vector-ctor-iterator(this+0xbf8, 12, 512, 0x10027e30): `Vector[512]` at **brain+0x80 (bot+0xbf8)**, trivial ctor (nav path buffer) |
| sub-objects | 0x1006c2e8.. | vptrs: bot+0x2400=0x10094c48, +0x240c=0x10094c44, +0x2418=0x10094c40, +0x2424=0x10094c38, +0x2464=0x10094c30, +0x246c=0x10094c28, +0x2474=0x10094c20, +0x247c=0x10094c18, +0x2488=0x10094c10, +0x2494=0x10094c08 |
| member | 0x1006c310 | `Vector` at bot+0x2440 (brain+0x18c8, i.e. module(bit 4)+0x1c) = `g_vecZero` (0x100ae498) |
| final | 0x1006c371 | vptr = `CBot` vtable 0x10094a9c; `pev` (this+4) = pev |

All other members rely on the engine's zero fill. `CBotBrain::Reset` (§5.2) runs on every spawn.

### 4.2 `CBot` vtable 0x10094a9c (91 slots)

It is the `CBasePlayer` vtable (0x1008a0d8) with these differences:

| Slot | Offset | CBot | CBasePlayer |
|---|---|---|---|
| 7 | 0x1c | `CBot::Spawn` 0x1006bb40 | `CBasePlayer::Spawn` 0x1005e5f0 |
| 19 | 0x4c | `CBot::TraceAttack` 0x1006bac0 | 0x1005efb0 |
| 22 | 0x58 | `CBot::Killed` 0x1006ba00 | 0x1005dff0 |
| 49 | 0xc4 | **`IsNetClient` -> 0x10027c70 (`return 0`)** | 0x10027e00 (`return 1`) |

Slot 49 (`IsNetClient` in the .so) returning FALSE is what keeps bots out of the
`SayText` recipients (§10.3) and out of any other `IsNetClient` check.

**`CBot::Spawn` (0x1006bb40)**, which runs on the first spawn and on every respawn:

```c
brain.Reset();                                 // 0x1006f2c0 (thiscall on bot+0xb78)
CBasePlayer::Spawn();                          // 0x1005e5f0
int r = RANDOM_LONG(0, 100);
int laser = (r > 90) ? 2 : (r > 75) ? 1 : 0;   // cmp 0x5a / 0x4b: P = 76/101, 15/101, 10/101
MESSAGE_BEGIN(MSG_ALL /*2*/, gmsgPlInfo /*0x100d97e0*/, NULL, NULL);
    WRITE_BYTE(ENTINDEX(pev->pContainingEntity));
    WRITE_BYTE(0);                             // key 0 = laser colour
    WRITE_BYTE(laser);
MESSAGE_END();
```

`gmsgPlInfo`: 0x100d97e0 receives the return value of `pfnRegUserMsg("PlInfo", 3)` (0x10032ef5).
This is the same message as the `lasclr_<n>` client command. So each spawn gives the bot a random
laser-sight colour index.

`CBasePlayer::Spawn` itself does `flags &= FL_PROXY; flags |= FL_CLIENT;` and then
`if (pl+0x14c) flags |= FL_FAKECLIENT (0x2000)` (0x1005e688). The same field is at +0x160 in the
.so, so this is shared code: `pl+0x14c` is a `CBasePlayer` member (`m_bIsBot`, inferred
name), not a CBot member.

**`CBot::TraceAttack` (0x1006bac0)**, signature `(entvars_t *pevAttacker, float flDamage, Vector
vecDir, TraceResult *ptr, int bitsDamageType)`, `ret 0x1c`:

```c
CBasePlayer::TraceAttack(pevAttacker, flDamage, vecDir, ptr, bitsDamageType);
CBaseEntity *a = GetClassPtr<CBaseEntity>(pevAttacker);   // 0x100649b0 (allocates a 0x54 CBaseEntity
                                                          // if the attacker has no private data)
if (a && a->IsPlayer())                                   // slot 48 (+0xc0)
    brain.LookAt(this, a->pev->origin);                    // 0x1006f740
```

So a bot that gets hit snaps its ideal view toward the attacker's **origin**, not the eyes. The
actual view turns smoothly (§5.6).

**`CBot::Killed` (0x1006ba00)**, `(entvars_t *pevAttacker, int iGib)`, `ret 8`:

```c
CBasePlayer::Killed(pevAttacker, iGib);          // -> g_pGameRules->PlayerKilled -> may queue the
                                                 //    KILLER bot's chat first (§10.1)
edict_t *e = pevAttacker->pContainingEntity;
if (!e && !(e = PEntityOfEntOffset(0))) return;  // CBaseEntity::Instance pattern
CBaseEntity *k = (CBaseEntity *)e->pvPrivateData;
if (k && k->Classify() == 2 /*CLASS_PLAYER, slot 17 (+0x44)*/ && RANDOM_LONG(0, 100) > 90) {
    strcpy(brain.m_chatName /*bot+0x24b5*/, STRING(pevAttacker->netname));   // killer's name
    brain.m_chatSection /*bot+0x24f8*/ = 2;                                  // "killed"
    brain.m_nextChatTime /*bot+0x2498*/ = RANDOM_FLOAT(0.5, 2.0) + time;
}
```

The `RandomLong` is drawn only when the attacker is a player. A suicide by a player-class
attacker uses the bot's own name.

## 5. `CBotBrain`: layout, reset, think, buttons, view, usercmd

### 5.1 Layout (brain = bot+0xb78, 0x1a78 bytes, ends at bot+0x25f0)

| brain+ | bot+ | Type | Name | Notes |
|---|---|---|---|---|
| 0x000 | 0xb78 | int | m_msecFrames | `RunMove` frame counter; zeroed by `ResetMsec` 0x1006e4b0 |
| 0x004 | 0xb7c | float | m_msecNextTime | end of the 0.5 s measuring window |
| 0x008 | 0xb80 | float | m_msec | 5..100 |
| 0x00c | 0xb84 | Vector | m_idealAngles | pitch (view convention, already negated), yaw, roll (unused). Written only by `SetIdealAngles` 0x1006e4e0, from `LookAt` 0x1006f740 |
| 0x018 | 0xb90 | Vector | m_punchAccum | `UpdateView` low-pass of `pev->punchangle` |
| 0x024 | 0xb9c | CBotState* | m_pState | set only in `Reset` (stores at 0x1006f3e8/f3f7/f406) |
| 0x028 | 0xba0 | CBotNav (0x1860) | nav | §11.7; `Vector path[512]` at brain+0x80 (bot+0xbf8), built by the vector constructor iterator in `GetClassPtr<CBot>` |
| 0x1888 | 0x2400 | CBotStateDM (0xc) | | vt 0x10094c48 → 0x1006e900. Fields: +4 next think, +8 next roam pick |
| 0x1894 | 0x240c | CBotStateTeamRounds (0xc) | | vt 0x10094c44 → 0x1006ed00 |
| 0x18a0 | 0x2418 | CBotStateObjective (0xc) | | vt 0x10094c40 → 0x1006f0c0 |
| 0x18ac | 0x2424 | CBotModuleAttack (0x40) | | vt 0x10094c38 → 0x1006c520; fields in §8 |
| 0x18ec | 0x2464 | CBotModuleBuy (8) | | vt 0x10094c30 → 0x1006d630 |
| 0x18f4 | 0x246c | CBotModuleVision (8) | | vt 0x10094c28 → 0x1006dbf0; +4 next think |
| 0x18fc | 0x2474 | CBotModuleLookAround (8) | | vt 0x10094c20 → 0x1006dde0; +4 next think |
| 0x1904 | 0x247c | CBotModuleStunt (0xc) | | vt 0x10094c18 → 0x1006e130; +4 next, +8 byte mode, +9 byte jumps |
| 0x1910 | 0x2488 | CBotModulePowerUp (0xc) | | vt 0x10094c10 → 0x1006e280; +4 next, +8 byte (unused) |
| 0x191c | 0x2494 | CBotModuleChat (8) | | vt 0x10094c08 → 0x1006e330 |
| 0x1920 | 0x2498 | float | m_nextChatTime | the chat module's `+4` |
| 0x1924 | 0x249c | uint | m_activeModules | bits: 1 navigate, 4 attack, 8 stunt, 0x10 buy, 0x40 vision, 0x80 look around, 0x100 respawn, 0x200 power-up, 0x400 chat |
| 0x1928 | 0x24a0 | Vector | m_navGoal | (0,0,0) = none; zeroed when navigation returns 0 or 1 |
| 0x1934 | 0x24ac | byte | m_goStraight | set to 1 by the attack module with every goal it sets; `CBotNav::Replan` then walks straight to the goal without nodes and clears it (§11.7) |
| 0x1938 | 0x24b0 | CBaseEntity* | m_pEnemy | written only by the attack module |
| 0x193c | 0x24b4 | byte | | written by the states (1 keep goal / 0 fresh roam goal), never read **(inferred unused)** |
| 0x193d | 0x24b5 | char[67] | m_chatName | name for the `%s` of the next chat line |
| 0x1980 | 0x24f8 | int | m_chatSection | 0 offense, 1 freetime, 2 killed |
| 0x1984 | 0x24fc | byte | m_chatNow | read by the chat module, never set (dead feature) |
| 0x1988 | 0x2500 | CBaseEntity*[16] | m_visibleEnemies | filled by vision from index 0 |
| 0x19c8 | 0x2540 | CBaseEntity*[16] | m_visibleMates | filled by vision, never read |
| 0x1a08 | 0x2580 | signed byte | m_numVisibleEnemies | written by vision (as `[list+0x80]`), read by `NumVisibleEnemies` 0x1006f730 |
| 0x1a0c | 0x2584 | Vector | m_lastSeenEnemy | (0,0,0) = none |
| 0x1a18 | 0x2590 | Vector | | zeroed in `Reset`, otherwise unused |
| 0x1a24 | 0x259c | float | m_forwardmove | `SetMove` 0x1006f7f0 |
| 0x1a28 | 0x25a0 | float | m_sidemove | |
| 0x1a2c | 0x25a4 | uint | m_buttons | rebuilt each frame from the timers, copied to `pev->button` |
| 0x1a30 | 0x25a8 | float[16] | m_buttonExpire | button bit `1<<i` is held while `time < m_buttonExpire[i]` |
| 0x1a70 | 0x25e8 | float | m_turnRate | clamp(skill, 0.5, 2) × 10 |
| 0x1a74 | 0x25ec | float | m_skill | from `BotSetup`: ≥ 0.1 |

Outside the brain, the bot uses the `CBasePlayer` member `pl+0x14c` (`m_bIsBot`, .so +0x160).

### 5.2 `CBotBrain::Reset` (0x1006f2c0), called from `CBot::Spawn`

```c
memset(brain+0x1a24, 0, 0x14*4);   // forwardmove, sidemove, buttons, buttonExpire[16], turnRate
memset(brain+0x1924, 0, 0x19*4);   // activeModules, navGoal, 0x1934..0x1987 incl. chat name/section
m_chatName[0] = 0;                 // brain+0x193d (bot+0x24b5)
m_chatSection = 1;                 // brain+0x1980 (bot+0x24f8) = "freetime"
float s = (m_skill > 0.5 && m_skill >= 1.0) ? 1.0 : (m_skill <= 0.5 ? 0.5 : m_skill);
                                   // clamp(skill, 0.5, 1.0); 0.5 double @0x10089180, 1.0 double @0x10089150
m_nextChatTime /*brain+0x1920*/ = RANDOM_FLOAT(60.0, 180.0) * s + time;
nav.Reset();                       // 0x1006f810 on brain+0x28 (layout in §11.7.1)
brain+0x1a0c = g_vecZero; brain+0x1a18 = g_vecZero;
ResetMsec();                       // 0x1006e4b0: brain+0x0, +0x4, +0x8 = 0
switch (TSGameRules.m_mode) {      // byte at 0x100c0a48 (0 DM, 1 TDM, 2 round TDM, 3 objective)
case 0: case 1: m_pState = brain+0x1888; break;  // bot+0x2400, vt 0x10094c48 -> 0x1006e900
case 2:         m_pState = brain+0x1894; break;  // bot+0x240c, vt 0x10094c44 -> 0x1006ed00
default:        m_pState = brain+0x18a0; break;  // bot+0x2418, vt 0x10094c40 -> 0x1006f0c0
}
```

The first memset ends at brain+0x1a74, so `m_skill` survives. Not touched by Reset:
brain+0x0c..0x23 (ideal angles, punch accumulator), the module objects, and brain+0x1988..0x1a0b.
`gamerules-entities.md` §1.2 says modes 2 and 3 can't be reached in this build, so in practice
the state is always the DM/TDM state 0x1006e900.

### 5.3 `pfnStartFrame` (0x10010e00)

```c
if (!IS_DEDICATED_SERVER()) {
    for (int i = 1; i <= gpGlobals->maxClients; i++) {
        g_pCurrentBot /*0x100a93c4*/ = BotPlayerByIndex(i);   // 0x1006b360
        if (g_pCurrentBot && g_pCurrentBot->m_bIsBot == 1)   // pl+0x14c
            g_pCurrentBot->brain.Think(g_pCurrentBot);  // 0x1006f500, ecx = pl+0xb78
    }
}
if (g_pGameRules) g_pGameRules->Think();          // vtable +4
if (!g_fGameOver /*0x100ae490*/) { gpGlobals->teamplay = (float)g_teamplay /*0x100ae484*/; g_ulFrameCount++; }
```

Bots think in entity-index order, **before** the gamerules think, once per server frame.
`BotPlayerByIndex` (0x1006b360) returns `GetClassPtr<CBasePlayer>(&ed->v)` (0x10012620) for
`1 <= i <= maxClients` with a non-NULL, non-free edict that has `FL_FAKECLIENT (0x2000)` **or**
`FL_CLIENT (8)`. Otherwise it returns NULL. Real players go through it too and are filtered by
`+0x14c`.

On a dedicated server, `addbot`/`addcustombot` refuse to run, StartFrame never thinks for bots,
and only gamerules Think runs.

### 5.4 `CBotBrain::Think` (0x1006f500), thiscall(brain, CBot *pl), `ret 4`

```c
UpdateButtons();                                    // 0x1006f4b0
float s = (m_skill > 0.5f && m_skill >= 2.0f) ? 2.0f : (m_skill <= 0.5f ? 0.5f : m_skill);
m_turnRate /*brain+0x1a70*/ = s * 10.0f;            // 0.5f @0x10089190, 2.0f @0x10089930, 10.0f @0x100891c8
if (pl->GiveSlowMul() > 0.1f) {                     // slot 2: CBasePlayer::GiveSlowMul 0x10061080 =
                                                    //   max(pev->fuser1, 0.01f) (FixedSlowAmt 0x10067010)
    m_pState->Think(pl, this);                      // state vtable slot 0
    if (TestModules(0x10))  module[brain+0x18ec].Think(pl, this);
    if (TestModules(0x100)) {                       // "dead / spectating": stop
        if (pl->m_flRespawnTime? /*pl+0x75c*/ > 0.0f && pl+0x75c < time) {
            pl+0x75c = 0;
            pl->StopObserver();                     // 0x10067f10 (inferred: .so StopObserver)
            pl->pev->impulse = 0;
        }
        SetMove(0, 0);                              // 0x1006f7f0
    }
    if (TestModules(0x40))  module[brain+0x18f4].Think(pl, this);
    if (TestModules(0x4))   module[brain+0x18ac].Think(pl, this);
    if (TestModules(0x80))  module[brain+0x18fc].Think(pl, this);
    if (TestModules(0x8))   module[brain+0x1904].Think(pl, this);
    if (TestModules(0x200)) module[brain+0x1910].Think(pl, this);
    if (TestModules(0x400)) module[brain+0x191c].Think(pl, this);   // chat, 3.2
    if (TestModules(0x1)) {
        int r = nav.Think(pl, this, &m_navGoal);    // 0x1006fc00 on brain+0x28
        if (r == 0 || r == 1) { DisableModules(1); m_navGoal = g_vecZero; }
    }
}
pl->pev->button = m_buttons;                        // brain+0x1a2c
RunMove(pl, this);                                  // 0x1006e6d0
```

`module[x].Think` is the module's vtable slot 1 (+4), thiscall on the module object with
`(pl, brain)`. Slot 0 of every module vtable is the shared empty function 0x10027e10. The order is
fixed: state, 0x10, 0x100, 0x40, 4, 0x80, 8, 0x200, 0x400, 1. **When the slow-motion factor
`fuser1` is <= 0.1** (frozen by slow-mo), the AI is skipped, but buttons still expire, the view
still turns, and `RunPlayerMove` is still sent.

Module-mask helpers (all on brain+0x1924 `m_activeModules`):
`TestModules` 0x1006f410 `return m & bits`; `SetModules` 0x1006f420 `m = bits` (exclusive);
`EnableModules` 0x1006f430 `m |= bits`; `DisableModules` 0x1006f450 `m &= ~bits`.

### 5.5 Button timers

* `PressButtons(uint mask, float duration)` 0x1006f470: for i in 0..15, if `mask & (1<<i)`
  then `m_buttonExpire[i] /*brain+0x1a30+4i*/ = duration + time`.
* `UpdateButtons()` 0x1006f4b0: `m_buttons = 0; for i in 0..15: if (time < m_buttonExpire[i])
  m_buttons |= 1<<i;`. This runs at the start of Think, so a press made during frame N
  shows up in frame N+1's `pev->button` and usercmd. Presses made in frame N are not visible in
  frame N.
* `SetMove(fwd, side)` 0x1006f7f0: brain+0x1a24 = fwd, brain+0x1a28 = side.
* `NumVisibleEnemies()` 0x1006f730 returns the signed byte brain+0x1a08, the visible-enemy count the
  vision module writes (§7). The states and the attack module test it.

### 5.6 `CBotBrain::RunMove` (0x1006e6d0) and the view turning (0x1006e500)

`RunMove` is thiscall(brain, pl, brain), `ret 8`:

```c
UpdateView(pl, b->m_turnRate);                       // 0x1006e500
if (time < m_msecNextTime /*+4*/) m_msecFrames /*+0*/++;
else {
    m_msecNextTime = time + 0.5;                     // 0.5 double @0x10089180
    if (m_msecFrames > 0) m_msec /*+8*/ = 450.0 / m_msecFrames;   // 450.0 double @0x10094d88
    m_msecFrames = 0;
}
if (m_msec < 5.0f)   m_msec = 5.0f;                  // @0x1008a540
if (m_msec > 100.0f) m_msec = 100.0f;                // @0x1008a3b4 (strict ">")
g_engfuncs.pfnRunPlayerMove(pl->pev->pContainingEntity, pl->pev->v_angle,
        b->m_forwardmove /*+0x1a24*/, b->m_sidemove /*+0x1a28*/, 0.0f /*upmove*/,
        (unsigned short)pl->pev->button, 0 /*impulse*/, (byte)__ftol(m_msec));
```

`msec` is about 90% of the measured frame time: frames are counted over 0.5 s windows, and
450/frames = 0.9 × 1000 / fps, clamped to [5, 100]. After a reset it's 5 until the first window
closes (the first call only opens a window). The usercmd impulse is always 0. Modules that want an
impulse write `pev->impulse` directly.

`UpdateView(CBot *pl, float turnRate)` (0x1006e500, thiscall on brain, `ret 8`). It does nothing
if `pev == NULL` or `pev->deadflag (pev+0x170) != 0`.

```c
Vector P = pev->punchangle;                          // pev+0x68
float k = min(gpGlobals->frametime * 15.0f, 1.0f);   // 15.0 @0x1008c498, 1.0 @0x10089138
Vector d = P - k * m_punchAccum;                     // brain+0x18 (old value)
m_punchAccum += d;                                   // = P + (1-k)*old
float cur   = UTIL_AngleMod(pev->angles.y);          // 0x10076250
float ideal = UTIL_AngleMod(m_idealAngles.y);        // brain+0x10
float dy = ideal - cur;
if (ideal > cur) { if (dy >= 180.0f) dy -= 360.0f; }
else             { if (dy <= -180.0f) dy += 360.0f; }
float t = min(gpGlobals->frametime * turnRate, 1.0f);
pev->angles.y  = UTIL_AngleMod(cur + t * dy + d.y);
pev->v_angle.y = pev->angles.y;                      // pev+0x78
pev->v_angle.x = pev->v_angle.x + t * (m_idealAngles.x - pev->v_angle.x) + d.x;   // no wrap/clamp
pev->angles.x  = pev->v_angle.x * -0.33333334f;      // @0x10094d84
pev->angles.z  = 0;
```

So the view moves toward `m_idealAngles` (brain+0x0c) by a fraction `frametime*turnRate`
(turnRate = 10 × clamp(skill, 0.5, 2) per second). Recoil (`punchangle`) is added through a
low-pass accumulator. Bots get server-side punchangle because the shared `CTSGun::VKickback`
(0x10054000) applies recoil to `pev->punchangle` only for `FL_FAKECLIENT` owners. Ideal roll
(brain+0x14) is not used.

`LookAt(CBot *pl, Vector target)` 0x1006f740 (thiscall brain, `ret 0x10`):
`src = pl->GetGunPosition()` (slot 88, +0x160); `a = UTIL_VecToAngles(target - src)`;
`if (a.x >= 180) a.x -= 360; if (a.x <= -180) a.x += 360;` (the second test applies to the
result of the first); `a.x = -a.x`; `SetIdealAngles(a)` (0x1006e4e0: brain+0x0c = a).

Button bits used by the modules (raw `usercmd` bits, TS meaning):
`0x1 IN_ATTACK`, `0x2 IN_JUMP`, `0x4 IN_DUCK`, `0x40` "+alt2" (`IN_CANCEL`, TS: weapon
`AlternateAttack` = stock hit, see architecture-hud.md §5.1 and `CBasePlayerWeapon::ItemPostFrame`),
`0x800 IN_ATTACK2`, `0x2000 IN_RELOAD`, `0x4000 IN_ALT1` (stunt key).
The modules never press `IN_USE` (0x20), so a bot can never pick up a dropped `CTSWorldGun`
(that needs +use, weapons.md §7.4). They never send `firemode`, `useitems`, `drop` commands or impulses.

### 5.7 Module scheduling

Every module object is `{vptr; float nextThink @+4; ...}`. Slot 0 of each 2-slot vtable is the
empty 0x10027e10. The module's `Think(pl, brain)` is `__thiscall` on the module.

**Order inside `CBotBrain::Think`** (0x1006f500), only if `sm > 0.1` (`fcomp 0.1; test ah,0x41;
jne skip`: the whole block is skipped while `sm <= 0.1`):
current state `(*brain+0x24)->Think(pl, brain)`, then bits **0x10, 0x100, 0x40, 4, 0x80, 8, 0x200,
0x400, 1** in that order. A bit set by an earlier module this frame runs a later module in the same
frame (for example Attack sets 8, 0x200 and 1).

**Who sets the bits.** The three states (0x1006e900/0x1006ed00/0x1006f0c0, §6) do this on
every state tick:

```c
if (!pl->IsAlive() || pl->pev->iuser1 != 0) {          // dead or observer
    SetModules(pl+0x580 == 0 ? 0x10 : 0x100);           // 0x1006e4c0: armament list empty?
    EnableModules(0x400);
    return;
}
EnableModules(0x40); EnableModules(0x400);
if (NumVisibleEnemies()) { EnableModules(4); DisableModules(0x80); return; }
... (roaming; sets 1 and 0x80) ...
```

Other writers: Attack sets 1, 8, 0x200 and clears 4 (§8). Buy clears 0x10. Stunt clears 8.
Power-up clears 0x200. Chat clears 0x400. Navigation clears 1 (and 0x80 at 0x10070310).
`CBotBrain` reset on spawn (0x1006f2c0, called by `CBot::Spawn` 0x1006bb40 *before*
`CBasePlayer::Spawn`) zeroes brain+0x1924..0x1987 (mask included) and brain+0x1a24..0x1a73.

So a dead bot first runs **Buy** (armament empty), which fills the armament; on the next state tick
the list is non-empty and the bot runs **Respawn** instead. `BuyArmament` (shared code, called from
`PlayerSpawn`) applies the list at the respawn. If every roll in Buy comes out empty
(`f ≤ 0.1` and `RL(0,5) == 0`: 0.1 × 1/6 with `botarmor 0`) the bot re-rolls on the next state tick.

### 5.8 Delay formula

Most modules reschedule themselves with `next = time + min(K / sm / skill, MAX)`
(pattern: `x = K / sm() / skill; if (x >= MAX) x = MAX;` and `sm()` is called twice when `x < MAX`).
A module runs when `next <= time` (`fld next; fcomp time; test ah,0x41; je return`).

| Where | K | MAX |
|---|---|---|
| Attack think 0x1006c520 (+0x4) | 0.1 | 1.0 |
| Attack strafe point 0x1006cbc0 (+0x14) | 3.0 | 7.0 |
| Attack jump / stock hit 0x1006c520 (+0x18) | 1.5 | 10.0 |
| Vision 0x1006dc10 | 0.1 | 0.7 |
| Look around 0x1006dde0 | 0.5 | 5.0 |
| Stunt 0x1006e130 | 0.5 | 1.0 |
| Power-up 0x1006e280 | 0.5 | 3.0 |
| Kung-fu switch-to-gun 0x1006d010 (+0x8) | 0.3 | clamp to [0.3, 3.0] |

## 6. Strategy states

### 6.1 State objects (12 bytes each, 1-slot vtables)

`+0` vptr, `+4` float next think, `+8` float next roam-goal pick time. Zero at construction
(`PvAllocEntPrivateData` zero-fills; constructor 0x1006c240 only writes the vptrs).

**`CBotBrain::Reset` (§5.2) is the only place brain+0x24 is written** (checked: the only stores to `[reg+0x24]` in
0x1006b360..0x10071ff0 are 0x1006f3e8/f3f7/f406). The state never changes during a life. The
three "states" are per-game-mode strategies, not roam/attack/flee. Combat vs. roaming is done
with module bits. Modes 2 and 3 can't be reached in this build (docs/server/gamerules-entities.md
§1.2), so in practice every bot uses state A.

### 6.2 States

All three share this skeleton (0x1006e900 / 0x1006ed00 / 0x1006f0c0):

```c
if (t < st->nextThink) return;
st->nextThink = t + min(0.1 / slow, 1.0);         // not scaled by skill
if (!pl->IsAlive() /*slot 43*/ || pev->iuser1 /*observer*/ != 0) {
    SetModules(BotArmamentEmpty(pl) ? 0x10 : 0x100);    // assign: clears all other bits
    EnableModules(0x400);                            // chat stays on while dead
    return;
}
EnableModules(0x40);  EnableModules(0x400);             // vision + chat always on while alive
if (brain->numEnemies != 0) {                     // 0x1006f730
    EnableModules(4);  DisableModules(0x80);            // combat on, idle look-around off
    return;
}
if (brain->lastSeen != g_vecZero) {               // chase the last place an enemy was seen
    brain->goal = brain->lastSeen; brain->lastSeen = g_vecZero;
    EnableModules(1);
    brain->byte193c = 1; EnableModules(0x80); return;
}
if (brain->goal == g_vecZero && st->nextPick < t) {   // strict <
    PickRoamGoal();                               // state specific, below
    st->nextPick = t + 3.0;  brain->byte193c = 0;  EnableModules(0x80); return;
}
brain->byte193c = 1; EnableModules(0x80);
```

`BotArmamentEmpty(pl)` = 0x1006e4c0: `pl[0x580] == 0` (first entry of the armament list, .so pl+0x594;
empty → the buy module runs).

Vector "== g_vecZero" is three exact float compares against `DAT_100ae498/49c/4a0`.
None of the states ever disables bit 1, bit 4 or bit 8. Bit 4 is cleared by the combat module
itself; bits 1 and 8 by nav and the stunt module. All bits are zeroed at spawn.

**PickRoamGoal, state A (DM/TDM, 0x1006ea93..0x1006ecc3):**

```c
switch (RL(0,4)) {
case 0:  e = TSFoundRandomEntity("ts_dmhill");        // 0x10073a30
         if (!e) goto spawnpoint;
         if (|pev->origin - e->Center()| > 64.0)  { goal = e->Center(); EnableModules(1); }
         break;                                  // within 64: no goal this time
case 2:  e = TSFoundRandomEntity("ts_powerup");
         if (!e) goto spawnpoint;
         goal = e->pev->origin; EnableModules(1); break;
default: // 1, 3, 4
spawnpoint:
         if (g_pGameRules->IsTeamplay() /*vtable +0x1c*/) {
             i = RL(0, CountTeams(&g_TSGameRules) - 1);   // 0x1004df10, ANY team, not our own
             cls = team[i].spawnClass;                    // 0x100c0ab0 + i*0x8c ("info_player_teamN")
             if (!UTIL_FindEntityByClassname(NULL, cls)) cls = team[i].fallbackClass; // 0x100c0ad0 + i*0x8c
         } else cls = "info_player_deathmatch";
         e = TSFoundRandomEntity(cls);
         if (e) { goal = e->pev->origin; EnableModules(1); }
}
```

`TSFoundRandomEntity(cls)` = 0x10073a30: collect up to 32 entities with `UTIL_FindEntityByClassname`,
then `RL(0, n-1)` (no random call when n == 0). `Center()` = vtable +0xf0 (slot 60,
`CBaseEntity::Center`). Random order: `RL(0,4)`, then `RL(0,n-1)` of RandomEntity (hill/powerup),
then for the spawn path `RL(0,teams-1)` (teamplay only) and `RL(0,n-1)`.

**PickRoamGoal, state B (mode 2, 0x1006eebb..0x1006f055):** aims at the *other* team's spawns.

```c
ti = GetTeamIndex(&g_TSGameRules, pl->TeamID() /*vtable +0xc8*/);   // 0x1004eca0, -1 if none
if (ti == 1) { a = team[0].spawnClass; b = team[0].fallbackClass; }   // 0x100c0ab0 / 0x100c0ad0
else         { a = team[1].spawnClass; b = team[1].fallbackClass; }   // 0x100c0b3c / 0x100c0b5c
list = up to 32 entities of class a; if empty, up to 32 of class b;
if (n) { goal = list[RL(0,n-1)]->pev->origin; EnableModules(1); }
```

**State C (0x1006f0c0):** same skeleton, PickRoamGoal does nothing (only the 3 s timer is set),
so the bot only moves to last-seen enemy positions and while fighting.

## 7. Vision (bit 0x40): `CBotModuleVision` 0x1006dbf0 / 0x1006dc10

```c
if (next > time) return;
next = time + min(0.1 / sm / skill, 0.7);
memset(brain+0x1988, 0, 16*4);  memset(brain+0x19c8, 0, 16*4);  brain+0x1a08 (byte) = 0;
for (i = 1; i <= gpGlobals->maxClients; i++) {
    CBaseEntity *p = UTIL_PlayerByIndex(i);                     // 0x100764f0
    if (!p || !p->IsPlayer() /*+0xc0*/ || !p->IsAlive() /*+0xac*/ || p == pl) continue;
    if (p->pev->effects & EF_NODRAW /*0x80*/) continue;
    vec3 eye = p->EyePosition();                                // +0xf4
    if (!pl->FInViewCone(&eye) /*+0x148*/ || !pl->FVisible(&eye) /*+0x104*/) continue;
    for (j = 0; j < 16; j++) {
        if (g_pGameRules->PlayerRelationship(pl, p) /*slot 49, +0xc4*/ == GR_TEAMMATE /*1*/) {
            if (!teammates[j]) { teammates[j] = p; break; }     // brain+0x19c8
        } else if (!enemies[j]) { enemies[j] = p; count++; break; }   // brain+0x1988, byte brain+0x1a08
    }
}
```

`PlayerRelationship` is called inside the inner loop (up to 16 times per player). With
`CHalfLifeMultiplay` it always returns 0, so outside teamplay everybody is an enemy.
**The teammate list brain+0x19c8 is never read** anywhere in mp.dll: there is no team behaviour
(no following, no covering, no team chat) besides not shooting teammates.

* FOV: `MakeVectors(pev->angles)`, 2D unit vector to the eye position, dot with
  `v_forward.xy` must be **> m_flFieldOfView** (pl+0x12c = 0.5, set in `CBasePlayer::Spawn`),
  i.e. a ±60° cone. `pev->angles.x = -v_angle.x/3`, so pitch slightly shortens `v_forward.xy`.
* Visibility: one `TraceLine(pl eyes → p eyes, ignore_monsters, ignore_glass, pl)`, visible iff
  fraction == 1.0.
* Spectators/dead players fail `IsAlive`; invisible (EF_NODRAW) players are skipped.
* Teammates: DM `PlayerRelationship` always returns 0 (everyone is an enemy); teamplay returns 1 iff
  both team names are set and equal (case-insensitive). In The One mode this is still team-based.

## 8. Attack (bit 4): `CBotModuleAttack` 0x1006c520

### 8.1 Fields (module at brain+0x18ac = bot+0x2424)

| Off | brain+ | bot+ | Type | Meaning |
|---|---|---|---|---|
| +0x04 | 0x18b0 | 0x2428 | float | next think |
| +0x08 | 0x18b4 | 0x242c | float | next fire decision (`FireWeapon`) |
| +0x0c | 0x18b8 | 0x2430 | float | next retarget (`SelectEnemy`) |
| +0x10 | 0x18bc | 0x2434 | float | next stunt/duck roll |
| +0x14 | 0x18c0 | 0x2438 | float | strafe point valid until |
| +0x18 | 0x18c4 | 0x243c | float | next close-range jump / stock hit |
| +0x1c | 0x18c8 | 0x2440 | vec3 | cached strafe point |
| +0x28 | 0x18d4 | 0x244c | vec3 | aim offset (re-rolled each think) |
| +0x34 | 0x18e0 | 0x2458 | vec3 | aim lead (knife throw), decays every frame |

Brain fields used: brain+0x1938 (bot+0x24b0) `CBasePlayer* enemy`; byte brain+0x1a08 (bot+0x2580)
visible-enemy count (`NumVisibleEnemies` 0x1006f730); brain+0x1988[16] visible enemies;
brain+0x1a0c vec3 last seen enemy position; brain+0x1928 vec3 navigation goal; byte brain+0x1934
`m_goStraight` (walk to the goal without nodes, §11.7.3); brain+0xc vec3 wanted view angles.

### 8.2 Target selection — 0x1006cec0 (called from the combat think)

```c
if (brain->enemy == NULL || cm->nextRetarget <= t) {
    cm->nextRetarget = t + RF(1.0, 3.0);
    best = 9999.0;
    for (i = 0; i < numEnemies; i++) {
        e = brain->enemies[i];
        if (e && (d = |e->pev->origin - pl->pev->origin|) < best) { brain->enemy = e; best = d; }
    }
}
```

Nearest visible enemy, re-evaluated every 1–3 s. It never clears `brain->enemy`.

### 8.3 Combat module — 0x1006c520 (bit 4, `cm` = brain+0x18ac)

Bit 4 is enabled by the state while `numEnemies != 0`.

```c
e = brain->enemy;                         // captured BEFORE re-targeting below
// (a) every frame: track the enemy
if (e && brain->numEnemies) {
    P = e->pev->origin + cm->aimOff + cm->lead;
    k = min(ft * 5.0, 1.0);
    cm->lead -= k * cm->lead;            // throw lead decays at 5/s
    LookAt(brain, pl, P);                // 0x1006f740, see §5.6
}
// (b) throttled decisions
if (t < cm->nextThink) return;
cm->nextThink = t + min(0.1 / slow / skill, 1.0);
SelectEnemy(pl, brain);                  // 0x1006cec0 (§8.2)
if (!e) return;                          // uses the enemy from before SelectEnemy
dist = |e->pev->origin - pev->origin|;
if (brain->numEnemies == 0) {            // lost sight
    DisableModules(4);
    if (e->IsAlive()) { brain->lastSeen = e->pev->origin; brain->enemy = NULL; }
    ReleaseAttack();                     // 0x1006d540: ATTACK|ATTACK2 off
    return;
}
ComputeAimOffset(pl, brain);             // 0x1006c3c0, §8.3.1
melee = BotHoldingMelee(pl);                // 0x1006cfc0, §8.3.2
if (!melee) {
    brain->goal = FindCoverSpot(pl, brain, &e->pev->origin, e);   // 0x1006cbc0, §8.3.3
    brain->goStraight = 1; EnableModules(1);
    if (cm->nextDodge < t) {                      // strict <
        cm->nextDodge = t + (float)RL(5,10);      // whole seconds
        if (RL(0,100) <= 70) EnableModules(8);       // stunt module (dives/jumps), 71/101
        else PressButtons(IN_DUCK, RF(0.9, 1.6)); // crouch
    }
} else {
    brain->goStraight = 1;
    r = RL(30,60);
    if ((float)r <= pl[0x760] /*kung-fu bar 0..100, .so pl+0x774*/) {
        brain->goal = e->pev->origin;             // charge straight in
    } else {                                      // circle at 128..256 units
        dz = pev->origin.z - e->pev->origin.z;
        x = RF(-1,1); y = RF(-1,1);               // in this order
        dir = normalize(x, y, dz)  /* (0,0,1) if length 0 */;
        brain->goal = e->pev->origin + dir * (float)RL(128,256);
    }
    EnableModules(1);
}
// (c) fire?
A = e->pev->origin + cm->aimOff;                  // no lead here
d = normalize(A - pl->GetGunPosition())  /* (0,0,1) if length 0 */;
MakeVectors(pev->v_angle);
if (fabs(DotProduct(d, v_forward)) > 0.9f || melee)   // 0x10094d60 = (double)0.9f
    FireWeapon(pl, brain, dist);                  // 0x1006d010, §8.3.4
else
    ReleaseAttack();
// (d) close range extra attack (guns only)
if (!melee && dist < 128.0 && cm->nextMelee < t) {
    if (dist < 96.0 && BotCanStockHit(pl) /*0x1006cf90*/) PressButtons(0x40, 0.6);  // stock hit
    else                                                  PressButtons(IN_JUMP, 0.6);
    cm->nextMelee = t + min(1.5 / slow / skill, 10.0);
}
if (pl[0x714] != 0) EnableModules(0x200);            // holds a power-up (.so pl+0x728) -> use it
```

Notes:
* The aim test uses `fabs`, so the bot also "fires" when the enemy is **directly behind** it
  (dot < −0.9). Port as is for exactness.
* After the enemy dies, `brain->enemy` keeps pointing at the corpse (cleared only when alive and
  out of sight). `SelectEnemy` replaces it only when its 1–3 s timer expires. Until then the bot
  keeps aiming and firing at the body while other enemies are visible.
* With a gun the bot always moves to the flank/cover spot. It never stands still.

#### 8.3.1 Aim error — 0x1006c3c0

```c
if (!e) { cm->aimOff = g_vecZero; return; }
if ((e->pev->iuser4 & 0x10c30) == 0 && !(e->pev->flags & FL_DUCKING /*0x4000*/)) {
    r = RL(0,100);
    z = ((float)r <= 50.0 / skill) ? RF(0.0, 32.0)          // body
                                   : e->pev->view_ofs.z;     // head (eye height)
} else z = 0.0;                    // stunting (dive/flip/wall-jump) or ducking: aim at origin
s = max(skill, 0.5);               // skill <= 0.5 -> 0.5
x = RF(-8,8); y = RF(-8,8); w = RF(-8,8);
cm->aimOff = (x/s, y/s, (w + z)/s);
```

Called once per combat think (≤ 10 Hz × skill). The offset is relative to the enemy **origin**.
Random order: `RL(0,100)` and `RF(0,32)` (both conditional), then three `RF(-8,8)` for x, y, z.
High skill shrinks both the jitter and the height offset. With skill 2 the bot aims at most 16
units above the origin.

#### 8.3.2 Weapon predicates

* 0x1006cfc0 `BotHoldingMelee(pl)`: `gun = pl[0x9fc]` (m_pActiveItem); returns 1 if `gun` is a
  CTSGun (`gun+0x78 == 16`) and either `gun+0xbc == NULL` (no weapon status = **kung fu**) or
  `info(gun+0xc0)+0x348` (weapon kind) is 3 (knife) or 10 (katana). Returns 0 if no active item.
* 0x1006cf90 `BotCanStockHit(pl)`: CTSGun with `info != NULL` and `info+0x10` (stock / cold-cock
  damage) > 0.

mp.dll CTSGun offsets used: +0x78 m_iId, +0xb8 current weapon id, +0xbc `s_weapon_status*`
(st+2 firemode, st+4 clip/count), +0xc0 `s_weapon_info*`, +0xc4[16] reserve ammo by ammo type
(`info+8`), +0x104 + id·0x38 status array (byte 0 = owned).

#### 8.3.3 Flank/cover spot — 0x1006cbc0 (guns only)

```c
if (t < cm->nextCover) return cm->coverCache;             // fcomp: recompute when nextCover <= t
cm->nextCover = t + min(3.0 / slow / skill, 7.0);
ang = RL(0,8) * 45;  best = *enemyOrg;  bestDist = 0;
for (i = 1; i <= 8; i++, ang += 45) {
    end = pev->origin + (cos(ang°)*512, sin(ang°)*512, 0);
    TraceLine(pev->origin, end, ignore_monsters, pl, &tr);   P = tr.vecEndPos;
    TraceLine(*enemyOrg, P, ignore_monsters, enemy ? enemy edict : NULL, &tr);
    if (tr.flFraction < 1.0) {                            // enemy can't see P: hiding spot
        TraceLine(pev->origin, P, ignore_monsters, pl, &tr);
        if (tr.flFraction >= 1.0) { cm->coverCache = P; return P; }
    } else {                                              // enemy sees P: candidate flank spot
        TraceLine(pev->origin, P, ignore_monsters, pl, &tr);
        if (tr.flFraction >= 1.0 && (d = (int)|P - pev->origin|) > bestDist)  // __ftol truncation
            { bestDist = d; best = P; }
    }
}
cm->coverCache = *enemyOrg;      // NB: caches the ENEMY ORIGIN, not `best`
return best;
```

Result: the first of 8 directions (random start, 45° steps, 512 units, at the bot's own height)
whose end point is hidden from the enemy origin. If there is none, the farthest end point the
enemy can see (or the enemy origin). Until `nextCover` expires (≤ 7 s) every call returns the cache.
After a "no hiding spot" search that is the enemy origin, so the bot then advances on the enemy.

#### 8.3.4 Fire control — 0x1006d010

`fc = cm`; runs only if `cm->nextFire <= t`, the active item is a CTSGun (`+0x78 == 16`).
`dist` = origin distance from §8.3. Weapon kind `k = info+0x348`.

```c
st = gun->status;
if (st == NULL) {                                         // ---- kung fu ----
    if (dist < 128.0) {
        h = RF(0.1, 0.9) * min(skill, 1.5);
        if (RL(0,100) > 80) { PressButtons(ATTACK, h); PressButtons(ATTACK2, 0); }  // punch
        else {
            PressButtons(ATTACK2, h); PressButtons(ATTACK, 0);                     // kick
            if (RL(0,100) > 50) { PressButtons(JUMP, 0.1);
                if (RL(0,100) > 90) PressButtons(DUCK, 0.1); }
        }
        cm->nextFire = t + h;
    } else if (dist <= 256.0 && RL(0,100) <= 90) {      // RL only when 128 <= dist <= 256
        cm->nextFire = t + 0.5;                          // wait, enemy is close
    } else {
        gun->GetBetterWeapon(0);                         // 0x100548d0: draw best owned weapon
        cm->nextFire = t + clamp(0.3 / slow / skill, 0.3, 3.0);
    }
    return;
}
switch (k) {
case 2:  /* grenade */ PressButtons(ATTACK, 0.1); cm->nextFire = t + 1.0; return;
case 10: /* katana */
    if (dist < 128.0) { PressButtons(ATTACK, 0.5); if (RL(0,100) > 80) PressButtons(DUCK, 0.1); }
    cm->nextFire = t + 0.5; return;
case 3:  /* knife */
    if (st->clip > 1 && (RL(0,100) > 80 || dist > 256.0)) {   // RL only if clip > 1
        PressButtons(ATTACK2, 0.1); PressButtons(ATTACK, 0);   // throw
        tt = dist * 0.00052631577f;                            // dist / 1900
        if (brain->enemy) {
            r = RF(0.75, 1.25);
            cm->lead = brain->enemy->pev->velocity * tt * r;
        }
        cm->lead.z = RF(0.75, 1.25) * (tt * 360.0);             // arc compensation, always
    } else if (dist < 128.0) PressButtons(ATTACK, 0.1);        // slash
    cm->nextFire = t + 0.3; return;
}
if (st->clip <= 0) {                                         // ---- reload / switch ----
    PressButtons(ATTACK, 0);
    if (gun->reserve[info->ammoType] > 0) PressButtons(IN_RELOAD, 0.1);
    else if (RL(0,100) <= 50) pl->DropWeapon(-1 /*current*/, 0.0);   // 0x10062720
    else gun->GetBetterWeapon(gun->curId);                             // 0x100548d0
    cm->nextFire = t + 1.0; return;
}
if (st->firemode != 0 && st->firemode != 3) {               // semi, burst, ...: taps
    h = RF(0.1, 0.3); PressButtons(ATTACK, h); cm->nextFire = t + h;
} else {                                                     // 0 auto, 3 pump: bursts
    h = RF(0.3, 1.0); PressButtons(ATTACK, h); cm->nextFire = t + h + 0.3;
}
```

Since the timer equals the hold time, semi weapons are re-pressed after a one-frame release (see
§5.5). Grenades (`k == 2`) are "fired" at any range. A release happens via ATTACK held 0.1 s and
`GrenadeFire` (weapons.md). The lead (`cm->lead`) is added to the aim point every frame and decays
(§8.3 (a)), so after a knife throw the view swings up and ahead and then settles.

`GetBetterWeapon(exclude)` (0x100548d0 = .so `CTSGun::GetBetterWeapon` 0x80f40): walks
`g_iWeaponPriority` (38 ints at 0x100d0384) and selects the first owned id ≠ `exclude` with
`CTSGun::SelectWeapon` (0x10054930), then calls vtable +0x120 (Deploy path). With exclude 0 a
kung-fu bot draws its best gun. `CBasePlayer::DropWeapon(-1, 0.0)` drops the current weapon
(`param ≥ 0x80000000` → current id).

#### 8.3.5 Damage reaction — `CBot::TraceAttack` 0x1006bac0 (vtable slot 19)

```c
CBasePlayer::TraceAttack(pevAttacker, flDamage, vecDir, ptr, bitsDamageType);   // 0x1005efb0
a = GetClassPtr<CBaseEntity>(pevAttacker);     // 0x100649b0 (CBaseEntity::Instance-like)
if (a && a->IsPlayer() /*+0xc0*/) LookAt(brain, this, a->pev->origin);
```

This only turns the ideal view toward the attacker's origin. It does not set the enemy, goal or
any bit. The vision module picks the attacker up once it is in the new FOV.

---

## 9. The other modules

### 9.1 Respawn (bit 0x100, inline in `CBotBrain::Think`)

```c
float t = pl->m_flRespawnTime;            // pl+0x75c (.so +0x770, set by SetPlayerRespawnTime; -1 = wait for round)
if (t > 0.0 && t < time) {                // 0x1006f5b8..0x1006f5de
    pl->m_flRespawnTime = 0;
    CBasePlayer::StopObserver(pl);        // 0x10067f10 (.so 0x99a14): clears iuser1/2, Spectator msg, respawn(pev) 0x1000f110
    pl->pev->impulse = 0;
}
SetMove(0, 0);                            // 0x1006f7f0: brain+0x1a24 = brain+0x1a28 = 0
```

This is the same code as the human `respawn` client command (`pfnClientCommand` 0x1000fabc),
minus the "You have to wait until the next round." HUD message. The bit stays set until the state
replaces the mask when the bot is alive again.

### 9.2 Buy (bit 0x10): `CBotModuleBuy::Think` 0x1006d630

`__stdcall`-like: `ret 8`, the module `this` is unused. Args `pl, brain`.
Shared functions (mp.dll → .so): `CBasePlayer::ResetArmament` 0x10062010 (0x93e88),
`AddItemToArmament(id, attachments, isItem)` 0x10062030 (0x93ea4; entries at pl+0x580, .so +0x594),
`AddAmmoToArmament(type, count)` 0x10062070 (0x93ef4; pl+0x540[16], .so +0x554). This is the same
list the `rst_cfg` / `tkw` / `tki` / `tka` client commands build, applied by `BuyArmament` at spawn
(weapons.md §7.1; cash is never charged).

Random calls in this exact order:

```c
float f = RF(0, 1);                                   // one roll decides the whole loadout tier
ResetArmament(pl);
if ((f > 0.3 || botarmor != 0) && botarmor != -1)     // cvar botarmor, value at 0x1009ef0c
    AddItemToArmament(pl, 0x10, 0, 1);                // item 0x10 = kevlar
int k = RL(0, 5);
if (k == 5) AddItemToArmament(pl, 34 /*katana*/, 0, 0);
else if (k != 0) {
    int n = (f > 0.75) ? 10 : 1;
    int t = RL(0, 2);                                  // 0 seal knife, 1 combat knife, 2 both
    while (n--) {
        if (t == 0 || t == 2) AddItemToArmament(pl, 35 /*sealknife*/, 0, 0);
        if (t != 0)           AddItemToArmament(pl, 25 /*knife*/, 0, 0);
    }
}
if (f > 0.1) { pistol = RL(0, 9); ... }               // table below
if (f > 0.4 && f < 0.7) { smg = RL(1, 6); ... }
else if (f >= 0.7) { rifle = RL(1, 11); ... }
DisableModules(0x10);
```

For each weapon chosen: `att = BotRandomAttachments(id)` (0x1006d560, 3 RL calls, below), then
`AddItemToArmament(id, att, 0)`; for the entries marked "+50%", `if (RL(0,1)) AddItemToArmament(id, 0, 0)`
(a second copy without attachments: `TakeWeapon` turns two singles into the akimbo weapon);
then `AddAmmoToArmament(ammoType, 10)` (10 purchases of the per-buy amount, capped by max carry).

| Roll | Pistol `RL(0,9)` (f > 0.1) | SMG `RL(1,6)` (0.4 < f < 0.7) | Rifle `RL(1,11)` (f ≥ 0.7) |
|---|---|---|---|
| 0 | 36 Contender G2, ammo 13 | — | — |
| 1 | 1 Glock-18, ammo 1 | 3 Mini-Uzi +50%, ammo 1 | 4 Benelli M3, ammo 3 |
| 2 | 9 SOCOM-MK23 +50%, ammo 2 | 6 MP5SD, ammo 1 | 11 USAS-12, ammo 3 |
| 3 | 12 Desert Eagle, ammo 5 | 7 MP5K, ammo 1 | 20 SPAS-12, ammo 3 |
| 4 | 14 Five-seveN +50%, ammo 7 | 17 Skorpion +50%, ammo 12 | 13 AK47, ammo 6 |
| 5 | 2 Beretta 92F +50%, ammo 1 | 19 MP7-PDW, ammo 7 | 5 M4A1, ammo 4 |
| 6 | 21 Golden Colts, ammo 2 | 23 UMP, ammo 2 | 15 STEYR-AUG, ammo 4 |
| 7 | 22 Glock-20C, ammo 9 | — | 26 Mossberg 500, ammo 3 |
| 8 | 28 Ruger-MK1, ammo 10 | — | 27 M16A4, ammo 4 |
| 9 | 31 Raging Bull, ammo 11 | — | 33 Sawed-off, ammo 3 |
| 10 | — | — | 18 Barrett M82A1, ammo 8 |
| 11 | — | — | 32 M60E3, ammo 4 |

(jump tables at 0x1006db78 / 0x1006dba0 / 0x1006dbb8; the order of calls per entry is
BotRandomAttachments → AddItem → [RL(0,1) → AddItem] → AddAmmo.)

Outcome by `f`: ≤ 0.1 no gun; (0.1, 0.4] pistol only; (0.4, 0.7) pistol + SMG; ≥ 0.7 pistol + rifle.
Ten knives only when `f > 0.75`. Kevlar 70 % with `botarmor 0`, always with any other value except
`-1` (never). Grenades (24) are never bought. Up to 32 entries; extra entries are silently dropped
by `AddItemToArmament` (worst case 1 + 20 + 2 + 2 = 25, so it never happens).

`BotRandomAttachments(id)` 0x1006d560 (`__cdecl`), always 3 calls:

```c
att = 0;
if (RL(0,100) > 50 && (info[id].allowed & 1) && !(info[id].builtin & 1)) att |= 1;   // silencer 50/101
if (RL(0,100) > 50 && (info[id].allowed & 2) && !(info[id].builtin & 2)) att |= 2;   // laser
if (RL(0,100) > 75 && (info[id].allowed & 8) && !(info[id].builtin & 8)) att |= 8;   // scope 25/101
// flashlight (4) is never chosen. allowed = info+0xe0, builtin = info+0xe4 (bytes tested)
```

**`botarmor`**: `cvar_t` at 0x1009ef00 `{"botarmor", "0", FCVAR_SERVER}` (value float 0x1009ef0c),
registered in `pfnGameInit` (decomp/global_1001d6e0.c line 1135). Only read here.

### 9.3 Stunt (bit 8): `CBotModuleStunt::Think` 0x1006e130

Fields: +0x4 next (brain+0x1908, bot+0x2480), byte +0x8 `mode` (brain+0x190c), byte +0x9 `jumps`
(brain+0x190d). Set only by Attack (§8.3, ranged weapons, 71/101 every RL(5,10) s).

```c
if (next > time) return;
next = time + min(0.5 / sm / skill, 1.0);
if (mode == 0) { mode = (RL(0, 100) <= 25) ? 2 : 1; jumps = 0; }   // 2: 26/101 flip, 1: 75/101 dive
uint s = pl->pev->iuser4;
if ((s & 0xc30) == 0) {                         // not diving/prone/flipping
    if (mode == 1) { PressButtons(IN_ALT1, 0.1); return; }          // stunt key
    if (mode == 2) {
        if (!(pl->pev->flags & FL_ONGROUND /*0x200*/) && jumps != 0) {
            PressButtons(IN_JUMP, 0.1); return;  // 2nd press while airborne -> flip / cartwheel
        }
        PressButtons(IN_JUMP, 0.1); jumps++; next = time + 0.2; return;
    }
    if (mode == 4) { mode = 0; DisableModules(8); }
    return;
}
if (!(s & 0x10) && (s & 0x20)) {                // prone after a dive/cartwheel, not mid-dive
    PressButtons(IN_JUMP, 0.1);                  // get up (HandleSlide: IN_JUMP)
    mode = 4;
}
```

What the presses do (player-movement.md §2): `IN_ALT1` = `HandleStunt` → dive when horizontal
speed ≥ 80, bullet time when slower *and* in slow motion, wall jump at a wall. A second `IN_JUMP`
within 0.3 s → `GoWheel` (back flip / cartwheel), or a wall climb at a wall. The jump press,
released 0.1 s, re-pressed after 0.2 s, gives the double-tap.

Exit only through mode 4 (after getting up from prone). A dive that ends in a roll-out (key held
on landing) or a back flip (ends with 0x1, not 0x20) never reaches mode 4: the module keeps
pressing the stunt key / jumping every think until a stunt ends prone, or until the mask is
replaced (death). The module never presses duck, so it never rolls.

### 9.4 Look around (bit 0x80): `CBotModuleLookAround::Think` 0x1006dde0

```c
if (next > time) return;
vec3 v = FindLookPoint(pl, brain);           // 0x1006dea0
brain->LookAt(pl, v);
next = time + min(0.5 / sm / skill, 5.0);
```

`FindLookPoint` 0x1006dea0:

```c
float best = -1.0; vec3 bestPos;
float yaw = RF(0, 360);
for (k = 0; k < 8; k++, yaw += 45.0) {
    float pitch = RF(-30, 30);
    vec3 d = (cos(yaw°), sin(yaw°), sin(pitch°));   // a normalized copy is computed but NOT used
    vec3 end = pl->GetGunPosition() + d * 1024.0;
    TraceLine(pl->GetGunPosition(), end, ignore_monsters, pl, &tr);
    if (tr.flFraction == 1.0) return tr.vecEndPos;  // first free direction wins
    float len = |tr.vecEndPos - pl->origin|;
    if (len > best) { best = len; bestPos = tr.vecEndPos; }
}
return bestPos;
```

### 9.5 Power-up (bit 0x200): `CBotModulePowerUp::Think` 0x1006e280

Fields: +0x4 next (brain+0x1914), byte +0x8 (cleared only, unused).

```c
if (next > time) return;
next = time + min(0.5 / sm / skill, 3.0);
if (pl->m_iHeldPowerUp /*pl+0x714, .so +0x728*/ && !pl->m_iActivePowerUp /*pl+0x710, .so +0x724*/)
    CBasePlayer::UsePowerUp(pl);             // 0x10063420 (.so 0x95980)
if (pl->m_iActivePowerUp) { DisableModules(0x200); byte+8 = 0; }
```

Set by Attack whenever a power-up is held (only while an enemy is visible). So bots use stored
power-ups (Slow Motion, Slow Pause, Double Firerate; gamerules-entities.md §power-ups) at the first
fight. **This is the bot's only slow-motion use.** If `UsePowerUp` refuses (for example the
"You can't use Slow-Motion now!" rule) the bit stays set and it retries every 0.5/sm/skill s.
Instant power-ups (Kung Fu, health, ...) apply on touch and need nothing here. Picking power-ups up
is done by walking to `ts_powerup` (roaming state, §6).

### 9.6 Not present

* **Weapon switching**: only `CTSGun::GetBetterWeapon` (empty clip with no reserve; kung fu with an
  enemy farther than 256, or 256 with 9/101 chance between 128 and 256). No `weapon_` / `lastinv`.
* **Item pickup**: no `IN_USE`; dropped guns (`CTSWorldGun`) can't be picked up by bots. Ground
  weapons/power-ups are touched by walking over them (goals come from the states).
* **Crouch-walking / jumping** in the modules: duck 0.9–1.6 s (ranged fight, 30/101 per 5–10 s),
  duck 0.1 s with katana (20/101) and kung fu (rare); jump 0.6 s at < 128 u with a ranged weapon,
  jumps for flips/getting up, jump 0.1 s in kung fu kicks. Navigation adds its own (not here).
* **Rolls, wall jumps, wall climbs**: never requested on purpose (only by accident of the stunt key
  or a double jump near a wall).
* **Slow motion**: only via held power-ups (§9.5). `IN_ALT1` gives bullet time only if the bot is
  already slowed.
* **Kung fu**: §8.3.4. Kicks are 4× more likely than punches; the bot keeps away while its melee bar
  (pl+0x760) is below RL(30,60).

## 10. Chat

### 10.1 Triggers

| Event | Code | Chance | Bot | Name stored | Section |
|---|---|---|---|---|---|
| Bot kills someone | `CHalfLifeMultiplay::PlayerKilled` 0x1005b190..0x1005b1a8 calls `CBot::OnKill` 0x1006b970 | `RandomLong(0,100) > 90` (10/101) | the killer | victim's `netname` | 0 `offense` |
| Bot is killed by a player | `CBot::Killed` 0x1006ba00 | `RandomLong(0,100) > 90` | the victim | killer's `netname` | 2 `killed` |
| Idle timer | chat module, 3.2 | timer | any bot | none (`m_chatName` = "") | 1 `freetime` |

PlayerKilled condition (disassembly at 0x1005b190):
`if (fragsAwarded /*edi*/ > 0 && pKillerPlayer /*ebp: attacker whose Classify()==2*/ &&
pKillerPlayer->m_bIsBot /*+0x14c*/ != 0) pKillerPlayer->OnKill(pVictim->pev);`.
`fragsAwarded` is the final points value (`IPointsForKill` with TS bonuses applied; -1 for team
kills). So team kills and suicides never trigger it. Its `RandomLong(0,100)` is drawn only when
the condition holds.

`CBot::OnKill(entvars_t *pevVictim)` (0x1006b970, thiscall on the killer bot, `ret 4`):
```c
if (RANDOM_LONG(0, 100) > 90) {
    strcpy(bot+0x24b5, STRING(pevVictim->netname));
    *(int*)(bot+0x24f8) = 0;                                   // offense
    *(float*)(bot+0x2498) = RANDOM_FLOAT(0.5, 2.0) + time;     // push 0x3f000000 / 0x40000000
}
```
The order inside `CBot::Killed` is: PlayerKilled runs first (killer's draws, plus any of
PlayerKilled's own `RandomLong(1,10)`/`(1,16)` spree-message draws), then the victim's
`RandomLong(0,100)`.

A later trigger overwrites an earlier unsent one. Respawning (Reset) also overwrites it, with
section 1, an empty name and a new 60–180 s timer. With the default `respawntime 3` a "killed"
line (0.5–2 s delay) normally goes out first.

### 10.2 Emission: chat module `CBotModuleChat::Think` (0x1006e330, vtable 0x10094c08 slot 1, bit 0x400)

`this` = brain+0x191c (bot+0x2494). Its only data member is `this+4` = `m_nextChatTime`
(brain+0x1920 / bot+0x2498). The states set bit 0x400 every time they tick (e.g. 0x1006e994,
0x1006ece5), so the module effectively runs every frame.

```c
void CBotModuleChat::Think(CBot *pl, CBotBrain *b)
{
    if (bottalk.value == 0.0f) return;                    // 0x1009ee04 (cvar_t 0x1009edf8 + 0xc)
    if (!(m_nextChatTime <= time) && !b->m_chatNow /*brain+0x1984, never set: dead*/) return;
    float s = clamp(b->m_skill, 0.5, 1.0);                // same code as Reset
    m_nextChatTime = RANDOM_FLOAT(60.0, 180.0) * s + time;
    char buf[128];
    sprintf(buf, BotSayLine(b->m_chatSection), b->m_chatName);   // %s -> stored name
    if (strcmp(buf, "")) BotSay(pl, buf);                 // 0x1006e7a0
    b->DisableModules(0x400);                               // 0x1006f450
    b->m_chatSection = 1; b->m_chatName[0] = 0; b->m_chatNow = 0;
}

const char *BotSayLine(int sec)                           // 0x1006bbc0
{
    if (g_botSayCount[sec] <= 0) return "";
    return g_botSay[sec][RANDOM_LONG(0, g_botSayCount[sec] - 1)];
}
```

* The line is used as a **printf format** with one string argument. `%s` becomes the
  victim's name (offense), the killer's name (killed), or `""` (freetime). A line with two `%s` or
  any other `%` conversion reads garbage. The shipped file has 35 lines with `%s`, all single.
* When `bottalk` is 0 nothing happens and the timer isn't advanced. Pending kill chats stay
  queued until `bottalk` is turned back on (they fire immediately if their time has passed).
* Random draws per emission, in order: `RandomFloat(60,180)`, then `RandomLong(0, n-1)` (only if
  the section is non-empty).

### 10.3 `BotSay` (0x1006e7a0): what is sent

thiscall (ecx unused), `(CBot *pl, const char *text)`, `ret 8`:

```c
if (!text) return;
edict_t *me = pl->pev->pContainingEntity;
char msg[128];
sprintf(msg, "%c%s: ", 2, STRING(me->v.netname));        // "%c%s: " @0x1009ccfc
strcat(msg, text); strcat(msg, "\n"); msg[127] = 0;      // unbounded strcats, then terminate
for (CBaseEntity *p = UTIL_FindEntityByClassname(NULL, "player");
     p && p->pev->pContainingEntity && OFFSET(p->pev->pContainingEntity) != 0;   // pfnEntOffsetOfPEntity
     p = UTIL_FindEntityByClassname(p, "player")) {
    if (p->pev && p->pev->pContainingEntity != me && p->IsNetClient()) {   // slot 49
        MESSAGE_BEGIN(MSG_ONE /*1*/, gmsgSayText /*0x100d9744*/, NULL, p->pev->pContainingEntity);
            WRITE_BYTE(ENTINDEX(me));
            WRITE_STRING(msg);
        MESSAGE_END();
    }
}
```

This is **always all-chat** (no team filter, no dead/alive filter, no `(TEAM)` prefix). It isn't
logged and isn't echoed to the server console, and other bots and the speaker receive nothing.
`gmsgSayText` is set from `pfnRegUserMsg("SayText", -1)` at 0x10032b24.

---

## 11. Node graph, learning and navigation

All addresses are mp.dll (image base
0x10000000). Every constant below was read from the disassembly / .rdata, not from the
decompiler. `nav` = the navigation sub-object at brain+0x28 (= bot+0xba0); `brain` =
bot+0xb78. Offsets are given as "nav+X (brain+Y, bot+Z)". `time` = gpGlobals->time.
Distances are Quake units. "Trace" = UTIL_TraceLine 0x10076fb0(start, end, igmon,
pentIgnore, &tr) where igmon 1 = ignore_monsters, 0 = dont_ignore_monsters; "clear" means
`tr.flFraction >= 1.0` (compare against double 1.0 at 0x10089150).

### 11.1 The node graph object `CNodeGraph` @ 0x100e8330

One global, size 0x20600c bytes (0x100e8330 .. 0x102ee33b; the next global 0x102ee33c is the
`sprites/lgtning.spr` model index used by the debug beams). Constructed by the static
initializer 0x10070dd0 -> 0x10070de0 -> ctor 0x10070df0 -> Reset 0x10070e00.

| offset | type | meaning |
|---|---|---|
| +0x0 | int | `m_cNodes` node count, 0..512 |
| +0x4 | CNode[512] | 20 bytes each (below) |
| +0x2804 | CLink[512][512] | 8 bytes each, row-major: `link[i][j]` at +0x2804 + (i*512+j)*8 |
| +0x202804 | int | unused list counter (only zeroed by 0x10071650) |
| +0x202808 | int[1024] | unused list (only filled with -1 by 0x10071650) **(inferred: leftover open list)** |
| +0x203808 | int[512] | path stack (FindPath phase 2); empty slots = -1 |
| +0x204008 | int | path stack count |
| +0x20400c | NodeScratch[512] | 16 bytes each, FindPath scratch |

```c
struct CNode {            // 0x14 bytes, also the on-disk node record
    Vector origin;        // +0x0  player pev->origin when learned (feet/hull centre, not eyes)
    int    flags;         // +0xC  bit0 = NODE_LADDER (player had movetype MOVETYPE_FLY=5,
                          //       IsOnLadder 0x10033670); no other bit is ever set
    int    reserved;      // +0x10 always 0 (both creators zero it)
};
struct CLink {            // 8 bytes, also the on-disk link record
    int  dist;            // +0 __ftol(|origin_i - origin_j|)  (x87 sqrt of the 3D distance, truncated)
    char connected;       // +4 1 = passable
    char pad[3];          // +5 never written explicitly (stays 0 after Reset)
};
struct NodeScratch {      // 16 bytes
    int  g;               // +0 Dijkstra distance from the start node (9999 = infinity)
    int  h;               // +4 __ftol(|origin_goal - origin_j|), computed lazily in phase 2
    int  f;               // +8 g + h (0 = "not computed yet")
    char closed;          // +0xC
};
```
Links are always stored symmetrically (link[i][j] and link[j][i] get the same 8 bytes) and a
node is never linked to itself. Limits: 512 nodes (0x200, checks at 0x10070e56 and 0x10071dcc),
path stack 512 entries, Dijkstra / walk loops 1000 iterations (0x3e8), "infinity" 9999 (0x270f).

#### 11.1.1 Reset 0x10070e00

`count = 0; memset(nodes, 0, 0x2800); memset(links, 0, 0x200000)`. The scratch area is not
cleared here. Called by: static ctor, CTSGameRules::Init 0x1004d910, Load 0x10071cb0 (first
thing), and the `resetnodes` client command.

### 11.2 Learning: adding nodes

#### 11.2.1 Who learns (CBasePlayer::PreThink 0x1005f5c0, block 0x1005fed2..0x1005ff58)

Runs for EVERY player entity that reaches this point of PreThink (humans and bots alike; bots
run PreThink through pfnRunPlayerMove). PreThink returns earlier (so nothing is learned) when
`g_fGameOver` (DAT_100ae490) is set, when pev->iuser1 != 0 (observer), when pev->deadflag > 0,
and in the HLSDK train-control early exit (m_afPhysicsFlags & PFLAG_ONTRAIN(2) path that
returns at LAB_1005fd9b). Then, after the jump/duck code and 0x10061100:

```c
if (botlearn.value > 0.0f && pl->m_flNextNodeLearn /*pl+0x774*/ < time) {
    pl->m_flNextNodeLearn = time + 0.1;              // double 0.1 @ 0x100891a0
    CNode n = { pev->origin, 0, 0 };
    if (IsOnLadder(pl)) n.flags |= 1;                // 0x10033670: pev->movetype == 5
    g_NodeGraph.AddNode(&n, /*manual=*/0);           // 0x10070e30 (ebp == 0 here)
}
```
`botlearn` is cvar_t 0x1009ed98 ("botlearn", default "0.0", flags 4 = FCVAR_SERVER, value at
0x1009eda4), registered in 0x1001d6e0's cvar list. Value 2.0 additionally enables debug output
(beams + chat messages, see §11.6). addbot 0x1006b7c0 issues `pfnServerCommand("botlearn 1\n")`
(string 0x100a5a28) when `g_NodeGraph.count < 1` after creating the bot.
No jump/duck/crouch state is recorded, only position + ladder bit.

#### 11.2.2 AddNode 0x10070e30 (thiscall, `(CNode *n, int manual)`, ret 8)
```c
void CNodeGraph::AddNode(CNode *n, int manual) {
    if (IsTooClose(n, manual)) return;      // 0x10070f50
    if (IsInAir(n)) return;                           // 0x10070ed0
    if (count >= 512) return;                       // silently full
    nodes[count++] = *n;                            // 5 dwords copied
    LinkNewNode(count - 1, manual);                 // 0x10071410
    if (botlearn.value == 2.0f || manual) {         // float 2.0 @ 0x10089930
        UTIL_DebugNodeBeam(n, 10);                        // 0x10070cc0
        UTIL_ClientPrintAll(HUD_PRINTTALK(3), UTIL_VarArgs("(debug)%i nodes\n", count)); // 0x100a5a78
    }
}
```
* **IsTooClose 0x10070f50**: radius `r = manual ? 8 : ((n->flags & 1) ? 32 : 128)`
  (computed as `(-(flags&1) & 0xa0) + 0x80` in AL: 0x80 = 128 or 0x20 = 32). Returns 1 if any
  existing node has 3D distance `< r` (strict, x87 sqrt). Note the ladder test uses the NEW
  node's flag only.
* **InAir 0x10070ed0**: only for non-ladder nodes: Trace(origin, origin - (0,0,72), igmon=1,
  ignore=NULL) (72.0 @ 0x1008f4e8). If clear (fraction >= 1.0: no floor within 72 units) the
  node is rejected (returns 1). Ladder nodes are never rejected.

#### 11.2.3 Linking a new node: LinkNewNode 0x10071410 (thiscall `(int i, int manual)`)

For every existing node j != i (j ascending, 0..count-1):
```c
Vector start = nodes[i].origin; edict_t *ignore = NULL;
for (;;) {                                         // trace through doors
    Trace(start, nodes[j].origin, igmon=1, ignore, &tr);
    const char *cls = STRING(tr.pHit->v.classname);
    if (strcmp(cls, "func_door") && strcmp(cls, "func_door_rotating")) break;  // 0x1009da90/0x1009da7c
    start = tr.vecEndPos; ignore = tr.pHit;        // continue from the hit point, ignoring that door
}
if (tr.flFraction >= 1.0 && IsReachable(i, j)) {     // 0x100711e0
    link[i][j].connected = 1;
    link[i][j].dist = __ftol(sqrt(|nodes[i].origin - nodes[j].origin|^2));   // 3D, truncated
    link[j][i] = link[i][j];                       // all 8 bytes
    if (botlearn.value == 2.0f || manual) UTIL_DebugBeam(nodes[i].origin, nodes[j].origin, 10); // 0x10070b80
}
```
Links are created ONLY when a node is added (against all existing nodes). They are never
removed, re-tested or merged; nodes are never merged or deleted (only `resetnodes`).

**Reachable 0x100711e0** (thiscall `(i, j)`; "2D" = sqrt(dx*dx+dy*dy) of origin_i - origin_j):
```c
if (!(nodes[i].flags & 1) && !(nodes[j].flags & 1))
    return IsGroundContinuous(i, j);                  // 0x10070fe0
// at least one ladder node:
if (2D < 64.0f) return 1;                          // float 64 @ 0x1008a3bc (tested once or twice, same result)
if (2D < 160.0f && fabs(dz) < 32.0) return 1;      // float 160 @ 0x10094da8, double 32 @ 0x10094da0
return IsGroundContinuous(i, j);
```
**IsGroundContinuous 0x10070fe0** (cdecl `(Vector *a, Vector *b)`, a = new node i, b = node j):
```c
Vector d = *b - *a;
int steps = __ftol(|d| * 0.0625f);                 // one probe per 16 units, float @ 0x10094d98
Vector s = d / (float)steps;                       // (division by 0 harmless: loop doesn't run)
for (int k = 1; k <= steps; k++) {
    Vector p = *a + s * k;
    Trace(p, p - (0,0,72), igmon=1, NULL, &tr);    // 72.0 @ 0x1008f4e8
    if (tr.flFraction >= 1.0) return 0;            // a gap: no floor within 72 below the line
}
return 1;
```
So a link needs (a) a clear line of sight between the two node origins (doors are traced
through) and (b) floor under the straight line every 16 units (or the ladder shortcut).
There is no step-height / jump test: drops of any height that keep floor within 72 below the
interpolated line pass.

### 11.3 Console commands (pfnClientCommand 0x1000f8a0)

Plain strcmp chain on Cmd_Argv(0); **no admin / cheats / listen-server check: any connected
client may run them.** No feedback messages except the debug ones.

| command | address of branch | behaviour |
|---|---|---|
| `resetnodes` (0x1009cd94) | 0x100106a6 | Reset 0x10070e00 |
| `loadnodes` (0x1009cd88) | 0x100106ef | Load 0x10071cb0 (reset, then read current map's file) |
| `savenodes` (0x1009cd7c) | 0x10010738 | Save 0x10071e60 |
| `addnode` (0x1009cd74) | 0x10010781 | if `pl->IsAlive()` (vtable slot 43, +0xac) and `pev->iuser1 == 0`: AddNode({pev->origin, IsOnLadder?1:0, 0}, manual=1) -> 8-unit spacing, beams + "(debug)%i nodes" always printed |
| `testpath a b` (0x1009ce2c) | 0x1000fb81 | needs Cmd_Argc() > 2; `FindPath(atoi(argv[1]), atoi(argv[2]), NULL, &tmp)` (atoi = 0x1007d419). Output only when botlearn == 2 (§11.5) |

Map start: CTSGameRules::Init 0x1004d910 calls Reset 0x10070e00 then Load 0x10071cb0 (then
0x1006bee0 bots.txt/bot_say.txt). Nodes are NOT saved automatically anywhere (no call to
0x10071e60 except `savenodes`).

#### 11.3.1 File names and modes

* Load 0x10071cb0: `pfnGetGameDir(buf)` (g_engfuncs slot 99, 0x100ae654); `strcat(buf,
  "\\maps\\")` (0x100a5ae0); path = buf + STRING(gpGlobals->mapname) + ".ndm" (0x100a5ad8);
  `fopen(path, "rb")` (0x100a5a5c; fopen = 0x1007e41f = `_fsopen(name, mode, _SH_DENYNO 0x40)`).
  E.g. `ts\maps\ts_dojo.ndm` relative to the engine's cwd.
* Save 0x10071e60: does nothing if count <= 0. Path = `"TS\\maps\\"` (0x100a5aec, hard-coded,
  NOT the game dir) + mapname + ".ndm", `fopen(path, "wb")` (0x100a5ae8). Silent on failure.

#### 11.3.2 Load / Save logic
```c
void Load() {                     // 0x10071cb0
    build path; Reset();
    FILE *f = fopen(path, "rb"); if (!f) return;
    int n;
    if (fread(&n, 4, 1, f) && n < 512) {          // NOTE: n == 512 rejected (graph stays empty)
        count = n;                                 // negative n: count = n, nothing else read
        for (i = 0; i < count; i++) fread(&nodes[i], 0x14, 1, f);
        for (i = 0; i < count; i++) for (j = 0; j < count; j++) fread(&link[i][j], 8, 1, f);
    }
    fclose(f);
}
void Save() {                     // 0x10071e60
    if (count <= 0) return;
    f = fopen(path, "wb"); if (!f) return;
    fwrite(&count, 4, 1, f); nodes: fwrite(&nodes[i], 0x14, 1, f) x count;
    links: fwrite(&link[i][j], 8, 1, f) for i, j < count (row-major); fclose(f);
}
```
fread results inside the loops are not checked (a truncated file leaves zeros). Quirk: AddNode
allows count to reach 512 and Save writes it, but Load refuses `n >= 512`.

### 11.4 The .ndm file format

Little-endian raw dump, no magic, no version:
```
0x0          int32 n
0x4          n x { float x, y, z; int32 flags; int32 reserved }          (20 bytes)
4 + 20n      n*n x { int32 dist; uint8 connected; uint8 pad[3] }         (8 bytes, link[i][j] row-major)
size         4 + 20n + 8n^2
```
Parser/validator: `scripts/ndm.py` (`python3 -I ndm.py <dir|file>...`, `--path FILE A B` runs
an exact replica of FindPath, `--allpairs`). Validated against all 43 files (20 in
ts_original/maps, 23 in ts_custom/maps of which 20 are byte-identical copies of the originals +
tm_stormshield, ts_cave_of_fear, ts_japa); every size is exactly 4+20n+8n^2:

| map | n | undirected links | ladder nodes |
|---|---|---|---|
| ts_awaken | 227 | 1897 | 0 |
| ts_bikini | 255 | 1943 | 0 |
| ts_casa | 345 | 1936 | 1 |
| ts_central | 484 | 5077 | 4 |
| ts_chateau | 194 | 835 | 0 |
| ts_dietrich | 352 | 2924 | 0 |
| ts_dojo | 120 | 1835 | 0 |
| ts_faculty | 481 | 2628 | 0 |
| ts_fall | 211 | 1181 | 58 |
| ts_gpc | 146 | 1213 | 0 |
| ts_greenhouse | 256 | 2223 | 3 |
| ts_hammertime | 132 | 591 | 0 |
| ts_henningsen | 202 | 1458 | 0 |
| ts_heresy | 238 | 910 | 38 |
| ts_lobbyduel | 154 | 1669 | 0 |
| ts_metro | 179 | 1098 | 0 |
| ts_panzibar | 340 | 2457 | 0 |
| ts_parking | 442 | 3537 | 23 |
| ts_rundown | 145 | 1033 | 0 |
| ts_urbannights | 196 | 583 | 6 |
| tm_stormshield (custom) | 248 | 1407 | 0 |
| ts_cave_of_fear (custom) | 471 | 23723 | 0 |
| ts_japa (custom) | 97 | 666 | 0 |

Observed value ranges over all files: n 97..484 (all < 512); flags only 0 or 1; reserved
always 0; `connected` only 0/1; padding bytes always 00 00 00; link dist 10..3729 and equal to
`trunc(|a-b|)` for all 199,704 directed links; `dist == 0` whenever `connected == 0`; matrix
perfectly symmetric; no self links; min spacing between non-ladder nodes 10.6 (so some
nodes came from manual `addnode`, 8-unit rule), between ladder-involved pairs 32.2. ts_japa is
10 disconnected components (largest 48 nodes), so most path requests there fail.

### 11.5 Path finding: FindPath 0x100717f0

thiscall `int FindPath(int start, int goal, Vector *outPath, int *outCount)`, ret 0x10. Not
A*: a full Dijkstra from `start`, then a greedy walk from `goal` back towards `start` guided by
the Dijkstra distances. Returns 1 on success (path >= 2 nodes), else 0.

```c
int FindPath(int start, int goal, Vector *out, int *outCount) {
    if (start == goal || goal >= count || goal < 0 || start >= count || start < 0) return 0;
    ClearScratch();            // 0x10071650: list@0x202808[1024] = -1, +0x202804 = 0,
                               // stack[512] = -1, stackCount = 0, scratch[512] = all 0
    for (i < count) scr[i].g = 9999;
    scr[start].g = 0;
    // ---- phase 1: Dijkstra (closed flag reused), at most 1000 iterations
    for (it = 0; it < 1000; it++) {
        u = 0; best = 9999;
        for (i < count) if (!scr[i].closed && scr[i].g < best) { u = i; best = scr[i].g; }  // lowest index wins ties
        scr[u].closed = 1;     // NB: if nothing found, node 0 gets closed
        if (u == goal || best == 9999) break;
        for (j < count) if (link[u][j].connected && scr[j].g > scr[u].g + link[u][j].dist)
            scr[j].g = scr[u].g + link[u][j].dist;      // also "relaxes" closed nodes
    }
    // ---- phase 2: walk from goal to start
    for (i < count) scr[i].closed = 0;
    cur = goal; scr[goal].closed = 1; Push(goal);       // Push 0x100715f0: ignored if stackCount >= 512
    for (it = 0; ; ) {
        bestG = 9999; bestF = 9999; bi = -1;
        for (j = 0; j < count; j++) {
            if (scr[j].closed || j == cur || !link[cur][j].connected) continue;
            if (j == start) {                           // reached: done
                Push(j);
                if (botlearn == 2.0f) UTIL_ClientPrintAll(3, "(debug)arrived\n");   // 0x100a5ab0
                goto output;
            }
            if (scr[j].f == 0) {
                scr[j].h = __ftol(|nodes[goal].origin - nodes[j].origin|);   // distance to the WALK origin (goal)
                scr[j].f = scr[j].h + scr[j].g;
            }
            if (scr[j].g < bestG && scr[j].f < bestF) { bestG = scr[j].g; bestF = scr[j].f; bi = j; }
        }
        if (bi == -1) {                                 // dead end
            if (stackCount > 1) {
                scr[cur].closed = 1;
                cur = Pop();                            // 0x10071620 pops the TOP, which is cur itself!
                scr[cur].closed = 0;
            } else {
                if (botlearn == 2.0f) UTIL_ClientPrintAll(3, "(debug)no node found\n"); // 0x100a5ac0
                cur = -1;
            }
        } else {
            scr[bi].closed = 1; Push(bi); cur = bi;
        }
        it++;
        if (it >= 1000 || cur == -1) break;
    }
    if (botlearn == 2.0f) UTIL_ClientPrintAll(3, UTIL_VarArgs("(debug)%i passages\n", it)); // 0x100a5a9c
output:
    if (stackCount <= 1) return 0;
    if (out) {                                          // stack top (start side) first
        *outCount = stackCount;
        for (k = 0; k < stackCount; k++) out[k] = nodes[stack[stackCount-1-k]].origin;
    }
    if (botlearn == 2.0f) {                             // destroys the stack
        a = Pop(); sprintf(buf, "path:%i", a);          // 0x100a5a94
        do { b = Pop(); strcat(buf, UTIL_VarArgs(",%i", b));          // 0x100a5a90
             if (a != -1 && b != -1) UTIL_DebugBeam(nodes[a].origin, nodes[b].origin, 100);  // 10 s
             a = b; } while (stackCount > 0);
        strcat(buf, " \n"); UTIL_ClientPrintAll(3, buf);              // 0x100a5a8c
    }
    return 1;
}
```
Exact-behaviour notes (port these, they change paths):
* Candidate choice needs BOTH `g < bestG` and `f < bestF` (strict) against the best so far,
  scanning j ascending; the start node is taken immediately when it is a linked neighbour,
  regardless of earlier candidates. h is the distance to the goal node, i.e. to where the walk
  STARTED, not to the start node.
* Backtracking bug: Pop returns `cur` (top of stack), so one dead end costs two iterations
  and the node before the dead end is popped off the stack and re-opened; the produced path
  then skips that node (consecutive path nodes may be unlinked: seen once in 150 random ts_fall
  queries with the replica) and may revisit it.
* If the walk hits the 1000-iteration limit with >= 2 stacked nodes, the result is "success"
  with a path that does not reach `start`.
* Nodes with g == 9999 (not reached by phase 1) are never chosen in phase 2.
* "(debug)%i passages" is printed for the fail/limit exit only; "(debug)arrived" for success.

#### 11.5.1 FindPathBetweenPoints 0x100716a0

thiscall `(Vector *from, Vector *to, Vector *outPath, int *outCount, CBasePlayer *pIgnore)`,
ret 0x14, returns FindPath's result:
```c
bestA = bestB = 9999; ia = ib = -1;
for (i < count) {     // "nearest visible node", for both points in the same loop
    Trace(*from, nodes[i].origin, igmon=1, pIgnore ? pIgnore->pev->pContainingEntity : NULL, &tr);
    if (clear && (d = __ftol(|*from - nodes[i].origin|)) < bestA) { bestA = d; ia = i; }
    Trace(*to,   nodes[i].origin, igmon=1, same ignore, &tr);
    if (clear && (d = __ftol(|*to - nodes[i].origin|)) < bestB)   { bestB = d; ib = i; }
}
return FindPath(ia, ib, outPath, outCount);   // -1 -> range check fails -> 0
```
No distance limit; first (lowest index) node wins ties (strict <). The final path ends at the
node nearest to `to`, never at `to` itself.

### 11.6 Debug visuals

TE_BEAMPOINTS via `MessageBegin(MSG_ALL=2, SVC_TEMPENTITY=23, NULL, NULL)`, WriteByte(0),
6 coords, WriteShort(g_sModelIndexLightning DAT_102ee33c = "sprites/lgtning.spr"), then bytes
startframe 1, framerate 10, life = arg (x0.1 s), width 30, noise 0, r 0, g 255, b 50,
brightness 200, scroll 10; MessageEnd.
* 0x10070cc0 UTIL_DebugNodeBeam(CNode*, life): from origin+(0,0,16) to origin-(0,0,16) (16.0 @
  0x1008a420); life 10 for new nodes.
* 0x10070b80 UTIL_DebugBeam(Vector *a, Vector *b, life): skipped if either point == g_vecZero
  (0x100ae498). Life 10 for new links, 100 for testpath paths.
All debug chat goes through UTIL_ClientPrintAll 0x10076cf0 with HUD_PRINTTALK (3).

### 11.7 Navigation (path following)

#### 11.7.1 Data: `CBotNav` at brain+0x28 (bot+0xba0), size 0x1860

| nav+ | brain+ | bot+ | type | meaning |
|---|---|---|---|---|
| 0x0 | 0x28 | 0xba0 | float | next nav think time (time + 0.1) |
| 0x4 | 0x2c | 0xba4 | float | next stuck check time |
| 0x8 | 0x30 | 0xba8 | float | next obstacle (jump/duck) probe time (time + 0.5) |
| 0xc | 0x34 | 0xbac | float | next avoidance recompute time (time + 0.5) |
| 0x10 | 0x38 | 0xbb0 | Vector | current waypoint (zero = none) |
| 0x1c | 0x44 | 0xbbc | Vector | goal the current path was planned for |
| 0x28 | 0x50 | 0xbc8 | Vector | stuck-check reference position |
| 0x34 | 0x5c | 0xbd4 | Vector | zeroed at spawn, otherwise unused |
| 0x40 | 0x68 | 0xbe0 | Vector | wander anchor: set to bot origin by 0x1006f8c0 when zero, never read |
| 0x4c | 0x74 | 0xbec | Vector | avoidance (detour) point (zero = none) |
| 0x58 | 0x80 | 0xbf8 | Vector[512] | path (node origins, start side first) |
| 0x1858 | 0x1880 | 0x23f8 | int | path length |
| 0x185c | 0x1884 | 0x23fc | int | current path index |

Spawn init 0x1006f810 (called from brain init 0x1006f2c0, from CBot::Spawn 0x1006bb40) zeroes
nav+0x0, +0xc, +0x10, +0x1c, +0x34, +0x40, the whole path, +0x1858, +0x185c (NOT +0x4, +0x8,
+0x28, +0x4c).

Brain fields used by navigation: brain+0xc Vector desired view angles (bot+0xb84, written by
0x1006e4e0); brain+0x1924 int module bits (bot+0x249c; bit 1 = navigation enabled; 0x1006f410
test, 0x1006f420 set-all, 0x1006f430 or, 0x1006f450 clear); brain+0x1928 Vector goal
(bot+0x24a0); brain+0x1934 byte "go straight, no nodes" flag (bot+0x24ac, set by the combat
module 0x1006c520); brain+0x1a24 float forwardmove (bot+0x259c), brain+0x1a28 float sidemove
(bot+0x25a0), both set by 0x1006f7f0 SetMove(fwd, side) and fed to pfnRunPlayerMove by
0x1006e6d0; brain+0x1a2c int buttons (bot+0x25a4) rebuilt every frame by 0x1006f4b0 from
brain+0x1a30 float[16] button timers (bot+0x25a8): bit k is held while `time < timer[k]`;
0x1006f470 PressButtons(mask, duration) sets `timer[k] = time + duration` for each set bit k
(duration 0 = release now). Bits are the engine IN_* flags (1 ATTACK, 2 JUMP, 4 DUCK,
8 FORWARD, 0x10 BACK, ...), copied to pev->button by brain think 0x1006f500.

#### 11.7.2 Navigate 0x1006fc00

thiscall on nav: `int Navigate(CBot *pl, CBotBrain *brain, Vector *goal)`, ret 0xc. Called by
brain think 0x1006f500 when module bit 1 is set, with goal = brain+0x1928. Return values:
**0 = arrived** (path exhausted), **1 = failed / nothing to do** (zero goal, stuck, empty
waypoint), **2 = in progress**. The brain treats 0 and 1 alike: clear bit 1 and zero the goal.

```c
int Navigate(pl, brain, goal) {
    if (*goal == g_vecZero) return 1;
    if (nav.nextThink > time) return 2;            // previous SetMove values stay in effect
    nav.nextThink = time + 0.1;                    // double @ 0x100891a0
    if (nav.plannedGoal != *goal)
        Replan(goal, &pl->pev->origin, pl, brain); // 0x1006fa40, always returns 3 (the "== 1 -> return 1" test is dead)
    if (nav.detour == g_vecZero) {
        if (|nav.waypoint - origin| < 48.0f                                   // float @ 0x10092a20
            && Trace(origin, nav.waypoint, igmon=1, ignore=pl edict) clear) {
            if (++nav.pathIndex >= nav.pathCount) {                           // ARRIVED
                brain->SetMove(0, 0); nav.waypoint = 0; nav.plannedGoal = 0; return 0;
            }
            nav.waypoint = nav.path[nav.pathIndex];
            if (nav.waypoint == g_vecZero) { brain->SetMove(0,0); nav.plannedGoal = 0; return 1; }
        }
    } else if (|nav.detour - origin| < 48.0f && Trace(origin, nav.detour, 1, pl) clear)
        nav.detour = 0;                            // detour reached (no waypoint advance this tick)

    if (nav.stuckTime < time) {                    // STUCK CHECK
        nav.stuckTime = time + min(3.0 / pl->GiveSlowMul(), 9.0);   // doubles @ 0x1008a890, 0x10094d90
        if (|nav.stuckPos - origin| < 96.0f) {    // float @ 0x10092a1c
            nav.waypoint = 0; brain->SetMove(0,0); nav.detour = 0; nav.plannedGoal = 0;
            return 1;                              // gave up
        }
        nav.stuckPos = origin;
    }
    if (nav.probeTime < time) {                    // JUMP / DUCK PROBE
        nav.probeTime = time + 0.5;                // double @ 0x10089180
        UTIL_MakeVectors(UTIL_VecToAngles(nav.waypoint - origin));
        eye = origin + pev->view_ofs;
        bool eyeBlocked  = !Trace(eye,    eye    + v_forward*64, 1, pl).clear;   // 64 @ 0x1008a3bc
        bool feetBlocked = !Trace(origin, origin + v_forward*64, 1, pl).clear;
        if (eyeBlocked && !feetBlocked) PressButtons(IN_DUCK, 1.0);
        else if (!eyeBlocked && feetBlocked) { PressButtons(IN_JUMP, 1.0); PressButtons(IN_DUCK, 0.5); }
    }
    if (IsOnLadder(pl)) {                          // movetype == MOVETYPE_FLY
        if (pev->origin.z - nav.waypoint.z < 0.0f) { PressButtons(IN_DUCK|IN_FORWARD /*0xc*/, 1.0);
                                                     PressButtons(IN_JUMP|IN_BACK /*0x12*/, 0.0); }
        else                                       { PressButtons(IN_DUCK|IN_BACK /*0x14*/, 1.0);
                                                     PressButtons(IN_JUMP|IN_FORWARD /*0xa*/, 0.0); }
        brain->SetMove(0, 0);                      // overwritten below anyway
        brain->LookAt(pl, nav.waypoint);            // 0x1006f740
        brain->DisableModules(0x80);                    // stop module 0x80 (bot+0x2474) this frame
    }
    Vector p = GetSteerPoint(pl, brain);              // 0x10070400
    float yaw = UTIL_VecToAngles(p - origin).y;
    float a = UTIL_AngleMod(pev->angles.y), b = UTIL_AngleMod(yaw);          // 0x10076250
    float d = fabs(b - a);
    if (!(b > a)) d = fabs(360.0f - d);            // 360 @ 0x10089170
    d *= M_PI/180;                                 // double @ 0x10089130
    brain->SetMove(cos(d) * pl->m_flPlayerSpeed, -sin(d) * pl->m_flPlayerSpeed);  // pl+0x53c
    return 2;
}
```
* Speed: `pl+0x53c` is the value set by CBasePlayer::SetPlayerSpeed 0x10061670 (clamped
  0..330; also sent as client maxspeed). The bot moves at full speed in the direction of the
  steer point relative to its BODY yaw (pev->angles.y, not v_angle), by mixing forwardmove
  and sidemove, so it can walk backwards/strafe while looking elsewhere.
* GiveSlowMul = CBot vtable slot 2 = 0x10061080 = `max(pev->fuser1, 0.01)` (0x10067010,
  0.01 @ 0x1008c494): the TS slow-motion factor. Normal speed (1.0) -> stuck window 3 s; the
  window grows in slow motion, capped at 9 s.
* Arrival radius 48 (3D, plus clear line ignoring monsters). Stuck threshold: moved < 96
  units since the last check.
* Movement is only recomputed every 0.1 s; frames in between return 2 and reuse forward/side.
* Replan triggers whenever the goal vector differs from the planned one (exact float compare),
  e.g. every 0.1 s while chasing a moving target.

**LookAt 0x1006f740** thiscall on brain `(CBasePlayer *pl, Vector target)` (by value, ret 0x10):
`ang = UTIL_VecToAngles(target - pl->GetGunPosition())` (vtable slot 88 = +0x160,
CBasePlayer::GetGunPosition 0x10033010); if ang.x >= 180: ang.x -= 360; if ang.x <= -180:
ang.x += 360; ang.x = -ang.x; brain+0xc = ang (desired view angles, consumed by the aim code
0x1006e500, §5.6).

#### 11.7.3 Replan 0x1006fa40

thiscall on nav `(Vector *goal, Vector *origin, CBot *pl, CBotBrain *brain)`, ret 0x10, always
returns 3.
```c
nav.stuckPos = 0;
nav.stuckTime = time + min(3.0 / pl->GiveSlowMul(), 9.0);
nav.probeTime = time + 0.5;
memset(nav.path, 0, 0x1800); nav.pathIndex = 0; nav.pathCount = 0;
nav.plannedGoal = 0; nav.waypoint = 0; nav.detour = 0;
if (brain->goStraight /*brain+0x1934*/) {
    nav.waypoint = *goal; nav.plannedGoal = *goal; brain->goStraight = 0; return 3;
}                                    // pathCount 0: first arrival -> index 1 >= 0 -> "arrived"
if (g_NodeGraph.FindPathBetweenPoints(origin, goal, nav.path, &nav.pathCount, pl))
    nav.waypoint = nav.path[0];      // node nearest to the bot
else
    nav.waypoint = RandomWanderPoint(origin);     // 0x1006f8c0, pathCount stays 0
nav.plannedGoal = *goal;
return 3;
```
**RandomWanderPoint 0x1006f8c0** thiscall on nav `(Vector *out, Vector *origin)`:
```c
int r = RANDOM_LONG(1, 16);                       // pfnRandomLong (1st random call)
if (nav.wanderAnchor == 0) nav.wanderAnchor = *origin;   // unused afterwards
float ang = r * 22 * (M_PI/180);                  // 22..352 degrees in 22 degree steps
Vector dir = normalize(cos ang, sin ang, 0);      // (0,0,1) if length is 0 (never)
int dist = RANDOM_LONG(1024, 4096);               // 2nd random call
Trace(*origin, *origin + dir*dist, igmon=1, NULL, &tr);
*out = tr.vecEndPos;
```
These are the only random calls in the node/navigation code.

#### 11.7.4 GetSteerPoint (obstacle avoidance) 0x10070400

thiscall on nav `(Vector *out, CBot *pl, CBotBrain *brain)`, ret 0xc. Traces here use
igmon = 0 (they hit players/monsters), ignoring the bot itself.
```c
if (nav.steerTime > time)                         // cached between recomputes
    return nav.detour == 0 ? nav.waypoint : nav.detour;
nav.steerTime = time + 0.5;
UTIL_MakeVectors(UTIL_VecToAngles(nav.waypoint - origin));
// 1. straight ahead, 24 units                   (24 @ 0x1008a3f8)
Trace(origin, origin + v_forward*24, 0, pl, &tr);
if (!clear && !IsDoor(tr.pHit))                   // IsDoor: classname "func_door" or "func_door_rotating"
    return nav.detour = tr.vecEndPos - v_forward*48;           // 48 @ 0x10092a20
// 2. parallel line 16 units to the right       (16 @ 0x1008a420)
Trace(origin + v_right*16, nav.waypoint + v_right*16, 0, pl, &tr);
if (!clear && !IsDoor(tr.pHit))
    return nav.detour = tr.vecEndPos - v_right*48;             // step to the left
// 3. parallel line 16 units to the left
Trace(origin - v_right*16, nav.waypoint - v_right*16, 0, pl, &tr);
if (!clear && !IsDoor(tr.pHit))
    return nav.detour = tr.vecEndPos + v_right*48;             // step to the right
return nav.waypoint;          // note: an older non-zero nav.detour is NOT cleared here
```
Doors are deliberately walked into (they open on touch). While `nav.detour` is non-zero,
Navigate does not advance waypoints (§11.7.2) until the detour point is reached (< 48 and visible);
the cached branch keeps returning the detour for 0.5 s, the recompute branch returns the
waypoint or a new detour. The trace distance for tests 2 and 3 is the full distance to the
waypoint.

#### 11.7.5 What is NOT there

No ladder-specific link data, no jump links, no path smoothing, no per-node visit
bookkeeping, no automatic save, no node deletion/merging, no reachability retest. Ladder
handling is only: denser ladder nodes (32 spacing, §11.2.2), the relaxed link test (§11.2.3) and the
ladder block of Navigate (§11.7.2: hold FORWARD or BACK + DUCK depending on the waypoint height).

## 12. Cvars

`cvar_t` = `{char *name; char *string; int flags; float value; cvar_t *next}`. All three use flags
4 (`FCVAR_SERVER`) and are registered in `pfnGameInit` (0x10026680) with `pfnCVarRegister`
(0x100ae5a8), in this order among the other TS cvars: `botlearn` (0x10026818), …, `bottalk`
(0x1002684f), …, `botarmor` (0x100268b5, the last one). `SERVER_COMMAND("exec skill.cfg\n")`
(0x100268c0) follows.

| Cvar | cvar_t | name / default string | `.value` | Readers |
|---|---|---|---|---|
| `botlearn` | 0x1009ed98 | 0x1009f040 / 0x1009f068 `"0.0"` | 0x1009eda4 | `CBasePlayer::PreThink` 0x1005fed2 (node recording), 0x10070e81 (add node), 0x10071588, 0x10071a6e, 0x10071ae4, 0x10071b06, 0x10071b99 (node graph code, other part). Set to 1 by `addbot` when there are no nodes. |
| `bottalk` | 0x1009edf8 | 0x1009f018 / 0x1009ce20 `"1"` | 0x1009ee04 | only chat module 0x1006e330 (`!= 0`) |
| `botarmor` | 0x1009ef00 | 0x1009ef68 / 0x1009f1d8 `"0"` | 0x1009ef0c | only module bit 0x10 0x1006d630 (0x1006d662, 0x1006d675) |

All readers use `fld` on `.value`. No `CVAR_GET_FLOAT` string lookups of these names exist.

`exec skill.cfg` is the stock HLSDK line at the end of `GameDLLInit`. The .so's `GameDLLInit`
has it too (string 0x10cfc4), so it is **not** bot-related.

Other bot-related code outside the bot module (complete list from cross-references to the bot
globals, `pl+0x14c`, and `FL_FAKECLIENT` tests):
* `pfnGameInit`: the two commands and three cvars above.
* `CTSGameRules::Init` 0x1004d910: node reset/load, `BotLoadFiles`.
* `pfnStartFrame`: the driver loop.
* `CHalfLifeMultiplay::PlayerKilled`: the OnKill hook.
* `CBasePlayer::Spawn` 0x1005e688: `FL_FAKECLIENT` from `+0x14c` (shared code).
* `CBasePlayer::PreThink` and `pfnClientCommand`: node learning/commands (§11).
* `CTSGun::VKickback` 0x10054000: server-side recoil for fake clients (shared code).

There's nothing in `ServerActivate`, `ClientConnect`, `ClientDisconnect`, `ClientKill`,
`ClientUserInfoChanged`, or the other gamerules code. In particular, bots aren't skipped
anywhere, names aren't released on disconnect, and nothing removes or re-adds bots across a map
change. Whether the engine keeps fake clients across `changelevel` (and if so, whether they still
have `CBot` private data) is engine behaviour **(unknown)**. If the engine re-runs
`pfnClientPutInServer` for them, they would become plain `CBasePlayer`s with `+0x14c == 0` and
stop thinking **(inferred)**.

## 13. Skill, random calls, constants

### 13.1 Skill

| Use | Formula | Range (skill 0.1 … 3.0) |
|---|---|---|
| turn rate (§5.6) | clamp(s,0.5,2)·10 per s | 5 … 20 |
| vision period | min(0.1/slow/s, 0.7) | 0.7 … 0.033 s |
| combat period | min(0.1/slow/s, 1.0) | 1.0 … 0.033 s |
| cover search period | min(3/slow/s, 7) | 7 … 1 s |
| close melee period | min(1.5/slow/s, 10) | 10 … 0.5 s |
| kung fu draw-weapon wait | clamp(0.3/slow/s, 0.3, 3) | 3 … 0.3 s |
| aim jitter | ±8/max(s,0.5) per axis | ±16 … ±2.7 |
| head-vs-body | body (RF 0..32) if RL(0,100) ≤ 50/s | always body when s ≤ 0.5 |
| kung fu hold | RF(0.1,0.9)·min(s,1.5) | |
| chat delay at spawn | RF(60,180)·clamp(s,0.5,1) | |

State think (0.1/slow, ≤ 1 s) and enemy re-target (1–3 s) don't depend on skill.

### 13.2 Random calls in execution order

| Where | Call | Condition |
|---|---|---|
| addbot / addcustombot model | `RandomLong(0,6)` | no model arg and not teamplay |
| addbot skill | `RandomFloat(0.1,1.0)` | always |
| addcustombot skill | `RandomFloat(0.1,1.0)` | skill arg <= 0 |
| BotPickName | `RandomLong(0,count-1)` per attempt | name not given and count > 0. A second attempt happens only after the all-used reset |
| CBot::Spawn → Reset | `RandomFloat(60,180)` | every spawn (inside Reset, before CBasePlayer::Spawn) |
| CBot::Spawn | `RandomLong(0,100)` | every spawn, after CBasePlayer::Spawn (laser colour) |
| PlayerKilled → OnKill | `RandomLong(0,100)`, then `RandomFloat(0.5,2.0)` if > 90 | killer is a bot, points > 0 |
| CBot::Killed | `RandomLong(0,100)`, then `RandomFloat(0.5,2.0)` if > 90 | attacker is a player, after CBasePlayer::Killed |
| Chat module | `RandomFloat(60,180)`, then `RandomLong(0,n-1)` if n > 0 | bottalk != 0 and timer due |

The AI adds these while alive (each only when its timer fires, in module order within a frame;
the states run first):

| Where | Calls, in order | Condition |
|---|---|---|
| State DM roam pick | `RL(0,4)`, then `TSFoundRandomEntity`'s `RL(0,n-1)`; spawn-point path in teamplay adds `RL(0,teams-1)` before it | no goal, pick timer (3 s) expired |
| Attack think | `RF(1,3)` (retarget), `RL(0,100)` + `RF(0,32)` (aim height, conditional), 3 × `RF(-8,8)` (aim offset), `RL(0,8)` (cover search start, ≤ every 7 s), `RL(5,10)` + `RL(0,100)` [+ `RF(0.9,1.6)`] (dodge roll), melee goal `RL(30,60)` [+ `RF(-1,1)` ×2 + `RL(128,256)`], then `FireWeapon`'s draws | §8 |
| `FireWeapon` | kung fu: `RF(0.1,0.9)`, `RL(0,100)` [, `RL(0,100)`, `RL(0,100)`]; knife: `RL(0,100)`, `RF(0.75,1.25)` ×2; guns: `RF(0.1,0.3)` or `RF(0.3,1.0)`; empty: `RL(0,100)` | §8 |
| Buy | `RF(0,1)`, `RL(0,5)`, [`RL(0,2)`], pistol `RL(0,9)`, SMG `RL(1,6)` / rifle `RL(1,11)`, each weapon 3 × `RL(0,100)` + [`RL(0,1)`] | §9 |
| Stunt | `RL(0,100)` when a new stunt starts | §9 |
| Look around | `RF(0,360)`, then `RF(-30,30)` per probed direction (up to 8) | §9 |
| Navigation | `RL(1,16)`, `RL(1024,4096)` in `RandomWanderPoint` when no node path exists | §11 |

### 13.3 Constants

| Address | Value | Use |
|---|---|---|
| 0x10089110 | 0.0f | zero tests |
| 0x1008912c | 0.1f | slow > 0.1 gate (0x1006f570) |
| 0x10089128 | 256.0f | knife/kung-fu range |
| 0x10089138 | 1.0f | min(…,1) clamps |
| 0x10089150 | 1.0 (double) | period caps, grenade/reload delay, trace fraction |
| 0x10089170 | 360.0f | angle wrap |
| 0x10089180 | 0.5 (double) | katana delay, msec window, skill clamp |
| 0x10089190 | 0.5f | skill floor, kung fu wait |
| 0x100891a0 | 0.1 (double) | think period numerator |
| 0x100891c8 | 10.0f | turn rate factor |
| 0x10089930 | 2.0f | turn rate skill cap |
| 0x10089130 | π/180 (double) | deg→rad |
| 0x1008a3b4 | 100.0f | msec max |
| 0x1008a3bc | 64.0f | dmhill "already there" radius |
| 0x1008a3c8 | 0.3 (double) | knife delay, auto pause, kung fu clamp |
| 0x1008a540 | 5.0f | lead decay rate, msec min |
| 0x1008a880 | 10.0 (double) | melee period cap |
| 0x1008a890 | 3.0 (double) | cover period numerator / kung fu cap / roam-goal delay |
| 0x1008a898 | 128.0f | close range |
| 0x1008bcf8 | 0.7 (double) | vision period cap |
| 0x1008c498 | 15.0f | punch accumulator rate |
| 0x1008f4d4 | 50.0f | head-shot chance numerator |
| 0x1008f4e4 / 0x10090050 | 180.0f / −180.0f | wrap |
| 0x10092a1c | 96.0f | stock-hit range |
| 0x10093edc | 1.5f | melee period numerator, kung fu skill cap |
| 0x10094d60 | 0.9f as double | aim cone |
| 0x10094d68 | 512.0 (double) | cover probe length |
| 0x10094d70 | 7.0 (double) | cover period cap |
| 0x10094d78 | 360.0f | knife arc |
| 0x10094d7c | 1/1900 | knife flight time per unit |
| 0x10094d84 | −1/3 | model pitch |
| 0x10094d88 | 450.0 (double) | msec numerator |
| 9999.0f (imm 0x461c3c00) | | nearest-enemy start distance |

Strings: 0x100a35ec `ts_dmhill`, 0x100a3f20 `ts_powerup`, 0x100a23fc `info_player_deathmatch`.

## 14. Shared code: mp.dll vs `ts_i386.so`

Addresses: `mp.dll` addresses as in `server-win/` (Ghidra ==
objdump). `.so` addresses as in `server/functions.tsv` (Ghidra, i.e. objdump + 0x10000), the same
convention as `docs/server/*.md`. "pl" = `CBasePlayer*`, "gun" = `CTSGun*`, "info" =
`s_weapon_info*` (`get_weapon_info`).

### 14.1 Member layout: the rule

**Correction to the brief.** `CBaseEntity` is **not** 0x64 in both builds. It is **0x54 in
mp.dll** and **0x64 in the .so**. The difference is member-function pointers: GCC 2.95 stores a
pointer-to-member-function in 8 bytes, MSVC in 4. Proof from the `TYPEDESCRIPTION` tables
(`CBaseEntity::m_SaveData`, mp.dll `0x1009c7c0`, .so `0x1161c0`):

| field | mp.dll | .so |
|---|---|---|
| vptr | 0x00 | 0x60 (after the data) |
| `pev` | 0x04 | 0x00 |
| `m_pGoalEnt` | 0x08 | 0x04 |
| `m_pLink` | 0x0c | 0x08 |
| `m_pfnThink` | 0x10 (4 B) | 0x0c (8 B) |
| `m_pfnTouch` | 0x14 | 0x14 |
| `m_pfnUse` | 0x18 | 0x1c |
| `m_pfnBlocked` | 0x1c | 0x24 |
| rest of `CBaseEntity` | 0x20..0x53 | 0x2c..0x5f (= dll + 0x0c) |

`CBaseToggle` adds one more PMF, `m_pfnCallWhenMoveDone` (dll 0xcc, 4 B; .so 0xdc, 8 B). So for
every class derived from `CBaseEntity` (checked against `CBaseDelay`, `CBaseAnimating`,
`CBaseToggle`, `CBasePlayer`, `CBasePlayerItem/Weapon` save tables):

```
so_offset(dll) = dll + 0x0c     for 0x20 <= dll < 0x54     (CBaseEntity data after the PMFs)
               = dll + 0x10     for 0x54 <= dll < 0xcc     (CBaseDelay, CBaseAnimating, CBaseToggle head)
               = dll + 0x14     for dll >= 0xd0            (CBaseToggle-derived: CBaseMonster, CBasePlayer, CBot)
               = dll + 0x10     for dll >= 0x54            (CBaseAnimating-derived without CBaseToggle:
                                                            CBasePlayerItem, CBasePlayerWeapon, CTSGun)
```

There are no further PMF members and no padding differences after that: `CBasePlayer` is
0xb78 / 0xb8c (+0x14) and `CTSGun` is 0xa00 / 0xa10 (+0x10). I verified the +0x14 against code
at both ends of `CBasePlayer`: every member of `CBasePlayer::UpdateClientData` (dll `0x10060740`
vs .so `0x91d00`, 30+ fields from 0x15c to 0xa00), `TraceAttack` (`0x1005efb0` vs `0x901cc`:
0xf8/0x10c, 0x278/0x28c, 0x510/0x524, 0x708/0x71c, 0x73c/0x750), `PreThink` (0xb74/0xb88,
0x4dc/0x4f0, 0x278/0x28c), `FInViewCone` (0x12c/0x140), `StopObserver`, `GiveCash`,
`AddItemToArmament`, `SelectItem`, `TSPlayerDisconnect`.

Virtual slots: slot *i* in mp.dll == slot *i* in `server/vtables.tsv`. The .so decompiler shows
raw GCC indices (`this->vtable[n]`), which are slot + 2 (e.g. .so `vtable[0x4a]` == slot 72 ==
mp.dll `[vt+0x120]`).

### 14.2 CBasePlayer offsets (mp.dll <-> .so)

#### 14.2.1 Offsets the bot code (0x1006b360..0x10071ff0) touches on a player

Found by scanning every displacement in the bot range (objdump) and resolving each base register.
Everything else in the 0x54..0xb78 range in bot code is `pev` (entvars) or the bot's own members.

| mp.dll | .so | Type | Name / meaning | Bot use (mp.dll) |
|---|---|---|---|---|
| 0x004 | 0x000 | entvars_t* | `pev` | everywhere |
| 0x14c | 0x160 | int | **is-bot flag** (`m_bIsBot`, inferred name). Shared code: `Spawn` sets `FL_FAKECLIENT` if nonzero (dll `0x1005e5f0`, .so `0x8f568`); `TSPlayerDisconnect` clears it (dll `0x10073920`, .so `0x9f94c`). Still present in the .so | set to 1 in `0x1006b3b0`; `pfnStartFrame` tests `== 1`, `PlayerKilled` tests `!= 0` |
| 0x278 | 0x28c | CTSAnimation | animation state | constructed in `GetClassPtr<CBot>` `0x1006c240` |
| 0x4dc | 0x4f0 | CTSStunt | stunt state | (not by bot code; PreThink) |
| 0x52c | 0x540 | int | cash (0..30000, `GiveCash`) | via `GiveCash` only |
| 0x53c | 0x550 | float | player speed (`SetPlayerSpeed`) | `0x10070400` multiplies the move by it |
| 0x540 | 0x554 | int[16] | armament ammo counts (`AddAmmoToArmament`, `ResetArmament` zeroes 0x540..0x6ff) | `0x1006d630` |
| 0x580 | 0x594 | {int id; int item; u8 flag}[32], stride 0xc | armament (loadout) list (`AddItemToArmament`) | `0x1006e4c0` = "armament empty" (`pl+0x580 == 0`) |
| 0x710 | 0x724 | int | active power-ups bitmask | `0x1006e280`: use when 0 |
| 0x714 | 0x728 | int | held power-up | `0x1006e280` (`UsePowerUp` if held && !active), `0x1006c520` |
| 0x71c | 0x730 | int | power-up duration counter (`PlayerKilled` slowmatch bonus, max 3) | — |
| 0x75c | 0x770 | float | respawn-allowed time (observer wait; `TSInit` 0, `TSPlayerDisconnect` -1). `0 < t < time` → `StopObserver` | brain think `0x1006f500` (bit 0x100) does exactly what the `respawn` client command does |
| 0x760 | 0x774 | float | KFu / melee power bar (0–100) | `0x1006c520` compares with it |
| 0x774 | 0x788 | float | **next node-learn time** (PreThink hook, +0.1 s). In the .so only zeroed by `TSInit` (vestigial) | — |
| 0x9fc | 0xa10 | CTSGun* | `m_pActiveItem` | `0x1006cf90`, `0x1006cfc0`, `0x1006d010` |
| 0xb20 | 0xb34 | int | cleared by `StopObserver` | — |
| 0xb2c | 0xb40 | int | `m_nCustomSprayFrames` (`SetCustomDecalFrames(-1)`) | `0x1006b3b0` |
| 0xb78 | (none) | CBotBrain | first byte after `CBasePlayer`: bot brain | `pl + 0xb78` |
| 0xbf8 | (none) | Vector[0x200] | bot-only, built by `eh vector constructor iterator` `0x10008820` (12-byte elements, ctor = a `return this` stub) = brain+0x80 | |
| 0x25ec | (none) | float | bot skill, `max(skill, 0.1)` = brain+0x1a74 | `0x1006b3b0` |

#### 14.2.2 CBasePlayer virtual slots the bot code calls (mp.dll vtable `0x1008a0d8`, CBot `0x10094a9c`)

| Slot | `[vt+]` | .so method | Notes |
|---|---|---|---|
| 2 | 0x08 | `CBasePlayer::GiveSlowMul` (`0x10061080`) | returns `FixedSlowAmt(pev->fuser1)`: the per-player slow-motion time scale. Brain think runs only if `> 0.1`; module timers divide by it |
| 7 | 0x1c | `Spawn` | CBot overrides: `0x1006bb40` |
| 17 | 0x44 | `Classify` | `0x1006ba00` tests `== 2` (CLASS_PLAYER) on the killer |
| 19 | 0x4c | `TraceAttack` | CBot overrides: `0x1006bac0` |
| 22 | 0x58 | `Killed` | CBot overrides: `0x1006ba00` |
| 43 | 0xac | `IsAlive` | dll `0x1000a9d0`: `deadflag == 0 && health > 0` |
| 48 | 0xc0 | `IsPlayer` | |
| 49 | 0xc4 | `IsNetClient` | **CBot overrides with `return 0` (`0x10027c70`)**; CBasePlayer returns 1. `0x1006dc10`/`0x1006e7a0` use it to tell humans from bots |
| 50 | 0xc8 | `TeamID` | `0x1006ed00` → `CTSGameRules::GetTeamIndex(TSGameRules, TeamID())` |
| 60 | 0xf0 | `Center` | |
| 61 | 0xf4 | `EyePosition` (dll name `EarPosition` is ICF) | origin + view_ofs |
| 65 | 0x104 | `FVisible(const Vector&)` (`0x10014cb0`) | MSVC orders overloads in reverse: 65 = Vector, 66 = CBaseEntity* |
| 82 | 0x148 | `FInViewCone(Vector*)` (`0x10014ab0`) | 82 = Vector*, 83 = CBaseEntity*; dot2D(v_forward, dir) > `m_flFieldOfView` (pl+0x12c) |
| 88 | 0x160 | `GetGunPosition` | |

All other slots of the CBot vtable equal `CBasePlayer`'s (diffed: only 7, 19, 22, 49 differ).

### 14.3 CTSGun and the weapon info record

#### 14.3.1 CTSGun (mp.dll 0xa00, .so 0xa10; dll = .so − 0x10 everywhere above 0x54)

`CBasePlayerItem::m_SaveData`/`CBasePlayerWeapon::m_SaveData` (mp.dll `0x100a73e8`, .so `0x122da0`):
`m_pPlayer` 0x70/0x80, `m_pNext` 0x74/0x84, `m_iId` 0x78/0x88, `m_flNextPrimaryAttack` 0x8c/0x9c,
`m_flNextSecondaryAttack` 0x90/0xa0, `m_flTimeWeaponIdle` 0x98/0xa8, `m_iPrimaryAmmoType`
0x9c/0xac, `m_iSecondaryAmmoType` 0xa0/0xb0, `m_iClip` 0xa4/0xb4, `m_iDefaultAmmo` 0xb4/0xc4.

| mp.dll | .so | Type | Meaning (weapons.md §4.1) | Bot use |
|---|---|---|---|---|
| 0x70 | 0x80 | CBasePlayer* | `m_pPlayer` | |
| 0x78 | 0x88 | int | `m_iId`, 0x10 = TS gun | `0x1006cf90`, `0x1006cfc0`, `0x1006d010` check `== 0x10` |
| 0x8c / 0x90 / 0x94 | 0x9c / 0xa0 / 0xa4 | float | next primary / secondary / block | |
| 0xb8 | 0xc8 | tsweapon_t | current weapon id (0 = kung fu) | `0x1006d010` |
| 0xbc | 0xcc | s_weapon_status* | `&status[cur]`, null when holstered / kung fu | `0x1006cfc0`, `0x1006d010` (non-null test) |
| 0xc0 | 0xd0 | s_weapon_info* | `&global_weapon_info[cur]` | `info+0x348` kind, `info+0x8` ammo type, `info+0x10` stock damage |
| 0xc4 | 0xd4 | int[16] | reserve ammo per ammo type | `0x1006d010`: `gun[0xc4 + info->ammotype*4] < 1` → out of ammo |
| 0x104 | 0x114 | s_weapon_status[38] (0x38 each) | inventory; `+0` owned | `GetBetterWeapon` scans it |

`0x1006cf90` is exactly `CTSGun::AlternateAttack`'s condition (dll `0x10055210`): `status != 0 &&
info->stock_damage > 0` → "can cold-cock".

#### 14.3.2 `s_weapon_info` (0x3dc bytes, 38 records)

Same layout in both builds (POD struct, same stride 0x3dc = 0xf7 dwords, same field uses):
mp.dll table `0x100d0420` (`get_weapon_info` `0x10052f60`: out-of-range ids return record 0;
`compile_weapons_info` `0x10053b80`), .so `global_weapon_info` `0x17db40` (`get_weapon_info`
`0x7f190`). Use `weapons.md` §2 unchanged. Fields the bot code reads: `+0x000` valid (via
`SelectWeapon`), `+0x008` ammo type, `+0x010` stock damage, `+0x0e0` allowed attachments mask,
`+0x0e4` built-in attachments (`0x1006d560` tests bits 1/2/8 = silencer/laser/scope in both), `+0x348`
weapon kind (`0x1006cfc0`, `0x1006d010`: kind 3 knife and 10 katana excluded). `GetWeaponType`
(dll `0x100595f0`, .so `0x8705c`) remaps ids 0x22→3, 0x21→1, 0x10/0x25→9, 10/0x1e/8/0x15→8, else
`info+0x348`. Weapon priority list for `GetBetterWeapon`: `g_iWeaponPriority` mp.dll `0x100d0384`
(38 ints, ends `0x100d041c`).

### 14.4 Game rules

`g_pGameRules` = `DAT_100ae480`. `InstallGameRules` (dll `0x10026ae0`, .so `0xc6050`) is identical
in both: `CHalfLifeRules` when `deathmatch == 0`; else `g_teamplay = DecideGamePlay(mapname, teamplay)`
(dll `0x1004c8c0`, `g_teamplay` = `0x100ae484`); `g_teamplay >= 1` → **`CHalfLifeTeamplay`**
(0x218 B, dll vtable `0x10090fbc`, .so `0x120560`), else **`CHalfLifeMultiplay`** (0xc B, dll vtable
`0x1008f1b4`, .so `0x11d080`). There is no TS game-rules subclass: TS's round/team state lives in
the separate global object **`TSGameRules`** (`CTSGameRules`, mp.dll `0x100c0a48`, .so `0x1781a0`;
byte 0 = mode, 2/3 = objective modes; teams at +0x28 stride 0x8c ×4). `CTSGameRules::Init` (dll
`0x1004d910`) is called from both game-rules constructors and from `ChangeLevel`.

Slots called on `g_pGameRules` by bot code and the paths in §14.5:

| `[vt+]` | Slot | Method (.so) | mp.dll Multiplay / Teamplay impl. | Called from |
|---|---|---|---|---|
| 0x04 | 1 | `Think` | `0x1002bbc0` / `0x1003f170` | `pfnStartFrame` |
| 0x14 | 5 | `IsMultiplayer` | ICF `return 1` `0x1003fdd0` | ClientCommand |
| 0x1c | 7 | `IsTeamplay` | `0x10027c70` (`return 0`) / `0x1003fdd0` (`return 1`) | `0x1006b590`, `0x1006b7c0` (random model only if not teamplay), `0x1006e900` |
| 0x48 | 18 | `PlayerThink(pl)` | `0x1002c370` (both): only does work when `g_fGameOver` | `0x1006b3b0` right after creation |
| 0x68 | 26 | `PlayerKilled` | `0x10059d10` / `0x1003fda0` | engine path |
| 0xc4 | 49 | `PlayerRelationship(pl, target)` | `0x1003ad10` (`return 0` = GR_NOTTEAMMATE) / `0x1003fe30` (1 = GR_TEAMMATE when `stricmp` of team names equal) | `0x1006dc10`: `== 1` → friend list (brain+0x19c8), else enemy list (brain+0x1988) |
| 0xd4 | 53 | `ChangePlayerTeam(pl, name, bKill=0, bGib=0)` | `0x1000ad00` (empty) / `0x1003f6c0` | `0x1006b3b0` if a team name was given |

Consequence: in deathmatch every other player is an enemy; in teamplay friends are players with
the same team name.

`CTSGameRules` non-virtual helpers used by bots: `GetTeamsNum` dll `0x1004df10` (.so `0x785a8`,
counts non-empty names at +0x28/+0xb4/+0x140/+0x1cc), `GetTeamIndex(name)` dll `0x1004eca0` (.so
`0x79b04`, `stricmp` → 0..3 or −1). Both are called with `this = 0x100c0a48`.

### 14.5 Bot-related paths: mp.dll vs .so

#### 14.5.1 `GameDLLInit` (dll `0x10026680` "pfnGameInit", .so `0xc5aa0`)

Identical command and cvar list in the same order, including the bot ones. The **.so also
registers** `addbot`/`addcustombot` and the cvars `botlearn`, `bottalk`, `botarmor`. Cvars (same
defaults, flags 4 = FCVAR_SERVER, in both builds): `botlearn` "0.0" (dll `0x1009ed98`, value at
`0x1009eda4`), `bottalk` "1" (`0x1009edf8`, value `0x1009ee04`), `botarmor` "0" (`0x1009ef00`,
value `0x1009ef0c`). Server commands in order: `addbot`, `addcustombot`, `globalslow`,
`restartround` (`0x100263e0`), `weaponrestriction` (`0x10026540`), `loadweapons`, `saveweapons`;
then `exec skill.cfg`.

#### 14.5.2 `addbot` / `addcustombot`

- .so `cmd_addbot` `0xc5520` / `cmd_addcustombot` `0xc5550`: only
  `ALERT(at_console, "Bots only in listen servers.\n")`.
- mp.dll `cmd_addbot` `0x10026110`: if `IsDedicatedServer()` → the same message and return. If
  `argv(1) == "help"` (exact `strcmp`) → `"Usage: addbot [botname]\n"`. Else `0x1006b7c0(argv(1))`
  (empty string = random name).
- mp.dll `cmd_addcustombot` `0x100261a0`: same dedicated check and `help` test (message
  `"Usage: addcustombot [botname] [team] [skill]\n"`), then
  `0x1006b590(argv(1), argv(2), (float)atof(argv(3)))`.

So the .so text "Bots only in listen servers." is literally the Windows guard; Linux builds compiled
the bot module out and kept the stubs.

#### 14.5.3 `pfnStartFrame` (dll `0x10010e00`, .so `StartFrame` `0xaeaa8`)

.so: `g_pGameRules->Think(); if (!g_fGameOver) { gpGlobals->teamplay = g_teamplay; g_ulFrameCount++; }`.
mp.dll adds a loop **before** `Think`:
```c
if (!g_engfuncs.pfnIsDedicatedServer()) {          // enginefuncs index 115, verified
    for (i = 1; i <= gpGlobals->maxClients; i++) {
        g_pCurrentBot /*0x100a93c4*/ = 0x1006b360(i);  // CBasePlayer* if FL_FAKECLIENT|FL_CLIENT
        if (g_pCurrentBot && g_pCurrentBot->is_bot /*+0x14c*/ == 1)
            0x1006f500(g_pCurrentBot + 0xb78, g_pCurrentBot);   // brain think
    }
}
```
Bots therefore only think on listen servers (and `addbot` refuses on dedicated ones).

#### 14.5.4 `pfnClientCommand` (dll `0x1000f8a0`, .so `ClientCommand` `0xad838`)

Command order is identical except for five extra commands in mp.dll. Full mp.dll order (`*` =
dll-only): `say`, `say_team`, `fov`, `use`, `respawn`, `testpath`*, [`g_flWeaponCheat` (dll
`0x102ef3b8`) != 0: `powerup`, `mj`, `cashala`, `weapon_*`, `lasclr_*`], `rst_cfg`, `tkw`, `tki`, `tka`,
`cutwire_*`, `drop_*`, `drop`, `usepowerup`, `firemode`, `useitems`, `lastinv`, `resetnodes`*,
`loadnodes`*, `savenodes`*, `addnode`*, `changeteam`, `jointeam`, `motd`, `fullupdate`, else
`"Unknown command: %s\n"`.

dll-only handlers (all on the node graph object `0x100e8330`, **no cheat/admin gate**: any client,
also on dedicated servers):
- `testpath a b`: only if `Cmd_Argc() > 2`: `0x100717f0(graph, atoi(argv(1)), atoi(argv(2)), 0, &local)`
  (push order checked in the disassembly at `0x1000fbb1`).
- `resetnodes` → `0x10070e00(graph)`; `loadnodes` → `0x10071cb0(graph)`; `savenodes` →
  `0x10071e60(graph)`.
- `addnode`: only if `pl->IsAlive()` and `pev->iuser1 == 0` (not observing):
  `rec = {pev->origin, flags = IsOnLadder(pl) ? 1 : 0, 0}; 0x10070e30(graph, &rec, 1)` (third
  arg 1 = manual; PreThink passes 0).

`respawn` (shared, both builds): if `pev->iuser1` (observer): if `pl+0x75c < 0` and
`pl+0x740 < time` → `pl+0x740 = time + 1.0`, HUD "You have to wait until the next round."; if
`0 < pl+0x75c < time` → `pl+0x75c = 0; StopObserver(pl); pev->impulse = 0`. The bot brain
(`0x1006f500`, bit 0x100) repeats the second branch.

#### 14.5.5 `CBasePlayer::PreThink` (dll `0x1005f5c0`, .so `0x908cc`)

Same order of calls (matched one-to-one; names in `shared_names.tsv`). The only addition is the
node-learning block, inserted between `UpdatePlayerState()` and the `CheckForWires` block:
```c
if (botlearn.value > 0.0 && pl->node_learn_time /*+0x774*/ < gpGlobals->time) {
    pl->node_learn_time = gpGlobals->time + 0.1;
    rec = { pev->origin, flags = IsOnLadder(pl) ? 1 : 0, 0 };   // 0x10033670
    0x10070e30(&g_NodeGraph /*0x100e8330*/, &rec, 0);
}
```
It runs for **every** player that reaches this point (humans and bots, alive and not observing,
since dead/observer players return earlier in PreThink). The .so keeps the timer field (0x788,
zeroed in `TSInit`) but has no code that reads it.

#### 14.5.6 `CHalfLifeMultiplay::PlayerKilled` (dll `0x10059d10`, .so `0x895e4`)

After `FireTargets("game_playerkill", …)` and the slowmatch power-up bonus (both builds), mp.dll
adds:
```c
if (points > 0 && pKiller && pKiller->is_bot /*+0x14c*/ != 0)
    0x1006b970(pKiller /*this*/, pVictim->pev);   // bot "taunt after a kill" (RandomLong(0,100) > 90)
```
(disassembly `0x1005b18a..0x1005b1a8`; `points` = frag points in `edi`, `-1` = team kill). The
control flow is equivalent to: the bonus block runs when `slowmatch == 1 && killer && points > 0`,
and the hook always runs after it under its own condition. Note the inconsistent bot test: `!= 0`
here, `== 1` in `StartFrame`.

#### 14.5.7 `CTSGameRules::Init` (dll `0x1004d910`, .so `0x77d6c`)

Same fields and constants (`time + 60`, `+5`, `+10`, 0.1f, 0.2125f…). mp.dll inserts, after
`InitObjectives` (`0x1004df30`) and `SetObjective` (`0x1004e530`):
`0x10070e00(&graph)` (reset nodes), `0x10071cb0(&graph)` (load `maps\<map>.ndm`),
`0x1006bee0()` (load `bots.txt` + `bot_say.txt`). So nodes and bot texts reload on every game-rules
construction and every `ChangeLevel`.

#### 14.5.8 Bot creation vs the normal connect path

Normal client: `pfnClientConnect` (dll `0x1000efd0`, .so `0xacce8`) runs
`CTSPlayerAmount::ClientConnect` on every `ts_playeramount`, then `g_pGameRules->ClientConnected`;
`pfnClientPutInServer` (dll `0x1000f1c0`, .so `0xacf44`) does `SetCustomDecalFrames(-1)`,
`GiveCash(initial_cash)`, `Spawn()`, `pev->effects |= EF_NOINTERP (0x20)`.
Bot common setup `0x1006b3b0` does: `GetClassPtr<CBot>`, `is_bot = 1`, skill, `SetCustomDecalFrames(-1)`,
`Spawn()`, three `SetClientKeyValue(index, GetInfoKeyBuffer(edict), key, value)`: `"model"` = the
model argument, `"team"` = team name (or `""`), `"cl_lw"` = `"1"`, then `ChangePlayerTeam` if a team was given, `PlayerThink(pl)`, then the
`CTSPlayerAmount::ClientConnect` loop. It does **not** call `ClientConnected`, `GiveCash(initial_cash)`
or set `EF_NOINTERP` (bots start with 0 cash unless the armament/buy code gives them weapons
another way).

#### 14.5.9 Other observations

- `TSPlayerDisconnect` (dll `0x10073920`, .so `0x9f94c`) clears `FL_FAKECLIENT` and the is-bot
  flag; nothing outside the bot module resets the bot-name "used" flags (`0x100dc2e4`).
- `CBaseEntity::FVisible`/`FInViewCone` overload order differs from the .so (MSVC reverses
  overloads): always map by code, not by slot name.
- Identical-code folding in mp.dll makes several auto-names wrong: `0x1003fdd0`
  "pfnAllowLagCompensation" = any `return 1`, `0x10027c70` "CBaseEntity::MyMonsterPointer" = any
  `return 0`, `0x10027e10` = any empty `void` method, `0x1003aca0` = `ret 8` (e.g.
  `CTSGameRules::UpdateTeamScores`).

### 14.6 Shared functions the bot module calls (were FUN_)

| mp.dll | Name | .so | How matched |
|---|---|---|---|
| `0x10035930` | `CBasePlayer::SetCustomDecalFrames` | `0xdd488` | SDK body (1..7 else −1 → pl+0xb2c/0xb40); also called by `pfnClientPutInServer` |
| `0x1004ab00` | `CTSPlayerAmount::ClientConnect` | `0x72aec` | `++count == target` → `FireTargets` or `DelayedUse` `CBaseDelay`; called for every `ts_playeramount` |
| `0x100649b0` | `GetClassPtr<CBaseEntity>` | `0x97298` | allocs 0x54 = sizeof(CBaseEntity), vtable `0x1008ff10` = CBaseEntity's; returns the attacker entity in `0x1006bac0` |
| `0x100548d0` | `CTSGun::GetBetterWeapon` | `0x80f40` | scans `g_iWeaponPriority` for owned `!= arg`, `SelectWeapon`, then `vt[72]` (Deploy) |
| `0x10054930` | `CTSGun::SelectWeapon` | `0x80fb8` | identical body (gun+0xb8, info valid, `HolsterWeapon`) |
| `0x10067f10` | `CBasePlayer::StopObserver` | `0x99a14` | identical body (`gmsgSpectator`, iuser1/2, `respawn`, `nextthink = -1`) |
| `0x1000f110` | `respawn` | `0xace58` | `"reload\n"` if not DM/coop else `pl->Spawn()` |
| `0x1004df10` | `CTSGameRules::GetTeamsNum` | `0x785a8` | counts 4 team names, stride 0x8c |
| `0x1004eca0` | `CTSGameRules::GetTeamIndex` | `0x79b04` | `stricmp` (`0x100887b0`) of 4 names, −1 |
| `0x10073a30` | `TSFoundRandomEntity` | `0x9fa64` | up to 32 by classname, `RandomLong(0, n-1)`; neighbour of `TSPlayerDisconnect` in both |
| `0x10062010` / `0x10062030` / `0x10062070` | `CBasePlayer::ResetArmament` / `AddItemToArmament` / `AddAmmoToArmament` | `0x93e88` / `0x93ea4` / `0x93ef4` | identical bodies (+0x14 shift) |
| `0x10062720` | `CBasePlayer::DropWeapon(id, float)` | `0x94900` | callees (DropFlag, ThrowWeapon, CreatePowerUp, GrenadeIdle…). Bot calls `DropWeapon(-1, 0.0)`: negative id = current weapon |
| `0x10063420` | `CBasePlayer::UsePowerUp` | `0x95980` | already named |
| `0x10008820` | `eh vector constructor iterator` | — | MSVC runtime helper |
| `0x1007d337` / `0x1007d419` / `0x1007d38e` | `atof` / `atoi` / `atol` | libc | CRT |
| `0x10076d70` | `ClientPrint` | `0xed16c` | `MessageBegin(MSG_ONE, gmsgTextMsg, pev->pContainingEntity)`, byte, 1–5 strings |

Other shared functions identified along the paths (all in `shared_names.tsv`): `SelectItem`,
`SwitchFireMode`, `SwitchItems`, `GiveCash`, `ForceClientDllUpdate`, `GetWeaponType`,
`DoSpectacularNess`, `EHANDLE::Get`/`operator->`, `CBulletManager::Reset`, `InitObjectives`,
`SetObjective`, and the PreThink callees (`ItemPreFrame`, `WaterMove`, `InterpolateSlowMotion`,
`UpdatePowerUpState`, `SlowMotionFlow`, `Observer_HandleButtons`, `Observer_Idle`,
`CTSStunt::Play`, `CTSStunt::CheckForBreakables`, `CTSAnimation::UpdateTimers`, `TrainSpeed`,
`UpdatePlayerState`, `CheckForWires`), matched by call order, arguments, sizes and callees.

## 15. Quirks and open questions

Behaviour to reproduce on purpose (each is cited in its section):

* The aim cone uses `fabs(dot) > 0.9`, so a bot also fires at an enemy **directly behind** it (§8).
* A dead enemy stays in `m_pEnemy` until the 1–3 s retarget timer runs out, so the bot keeps
  aiming at the corpse while other enemies are visible (§8).
* `FindCoverSpot` caches the **enemy origin** instead of its result, so after a search with no
  hiding spot the bot walks at the enemy for up to 7 s (§8).
* The attack module reads `m_pEnemy` before `SelectEnemy`, so the first think after spotting an
  enemy only selects it (§8).
* `msec = 450 / frames` per 0.5 s window: 0.9 × the real frame time, clamped to 5..100 (§5).
* Presses take effect one frame late, and a re-press when the old hold ends gives a one-frame
  release, which is how semi-automatic weapons keep firing (§5).
* Path finding is Dijkstra plus a greedy walk whose backtrack pops the current node, so a path can
  skip a node and contain an unlinked hop (§11.5). `Load` rejects a file with exactly 512 nodes,
  which `AddNode`/`Save` can produce (§11.3).
* `bot_say.txt`'s trim stops at byte 63, so the shipped freetime line "I came here to kick ass…"
  is joined with the next line (§3). Only the first 64 of the 70 shipped bot names load.
* Chat lines are used as `printf` formats (§10). Bots chat to everyone, even in teamplay.
* `addbot`'s argument is the model/team, not the name, despite its usage text (§2).
* `savenodes` writes to the hard-coded `TS\maps\` directory, while `loadnodes` reads
  `<gamedir>\maps\` (§11.3). The node commands have no access check (§11.3).
* `m_bIsBot` is tested as `== 1` in `StartFrame` and `!= 0` in `PlayerKilled` (§14).

Open questions (not decidable from `mp.dll`):

* Whether the engine's `SetClientKeyValue` on a fake client triggers `ClientUserInfoChanged` (and
  so TS's team/model code), and whether fake clients survive `changelevel` with their `CBot`
  private data. If the engine re-runs `ClientPutInServer` for them, they'd become plain
  `CBasePlayer`s with `m_bIsBot == 0` and stand still **(inferred)**. Check under Wine (§16).
* The intent of 450 (instead of 500) in the msec estimate, and of the dead fields
  (`m_chatNow`, brain+0x193c, the teammate list, the `CBotNav` wander anchor).
* `CBotStateTeamRounds` and `CBotStateObjective` can't be tested in the shipped game, because modes
  2 and 3 are unreachable (gamerules-entities.md §1.2). Their code is documented from the
  disassembly only.

## 16. Rust port notes

* **Placement.** The port's `crates/server/src/bots/mod.rs` currently has its own simple AI (quota
  bots plus listen-server `addbot`). TS's AI fits a `bots/` package: `brain.rs` (§5: buttons,
  module mask, `UpdateView`, `RunMove`), `states.rs` (§6), `vision.rs`, `attack.rs`, `modules.rs`
  (buy, stunt, look around, power-up, respawn), `chat.rs` + `files.rs` (§3, §10), and a
  `nodes/` module (graph, `.ndm` I/O, learning, `FindPath`, `CBotNav`; §11). The graph and its
  path finding are pure code with no engine dependency, so they can live in `shared` or a
  standalone module and be unit-tested.
* **Determinism.** Every random draw goes through `pfnRandomLong`/`pfnRandomFloat`, in the
  orders listed in §13. Use the engine's RNG and keep the order, so a seeded comparison against
  TS under Wine stays possible.
* **Faithful by default, deviations behind cvars.** Reproduce the quirks in §15. The port may add
  port-only cvars to fix them (dedicated-server bots, an access check on the node commands, a
  `savenodes` path that matches `loadnodes`). Document each one as a deviation.
* **Dedicated servers.** TS only runs bots on listen servers. The port's dedicated-server tests
  need bots, so keep the port's quota bots there or gate TS's AI on dedicated servers behind a
  port cvar.
* **Data.** The `.ndm` files ship with TS (20 stock maps, three more in `ts_custom`). Load them
  exactly as §11.4 describes. `scripts/ndm.py` in this repo parses them, checks them, and runs a
  replica of `FindPath`, which makes it a reference implementation for unit tests.
