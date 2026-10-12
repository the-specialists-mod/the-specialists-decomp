# Documentation index

Start with [rust-recreation.md](rust-recreation.md) for the plan, then read the subsystem docs as
you build each part. Every claim cites a Ghidra address. Look the address up in `../server/functions.tsv`,
`../client/functions.tsv` or (for `bots.md`) `../server-win/functions.tsv` to find the decompiled function. "(inferred)" marks conclusions drawn
from behaviour rather than from a symbol or string.

| Doc | Covers |
|---|---|
| [method.md](method.md) | How the export was made, address conventions, GCC 2.95 layout facts, pitfalls |
| [rust-recreation.md](rust-recreation.md) | Cross-cutting plan: build order mapped onto the Rust workspace, corrections to `rust.md` |
| **Server** (`ts_i386.so`) | |
| [server/architecture.md](server/architecture.md) | Entry points, all 50 `DLL_FUNCTIONS` slots, 37 cvars, 67 user messages with payloads, 27 client commands, 189 classnames, class hierarchy and the TS vtable shift, networking hooks |
| [server/player-movement.md](server/player-movement.md) | TS `pm_shared` changes, the `iuser4` stunt bitfield, dives/flips/wall jumps, the `fuser1` time scale, kung fu, slow-mo power-ups, damage/armour/fall damage, `CBasePlayer` member offsets |
| [server/weapons.md](server/weapons.md) | The 38-weapon and 16-ammo stat tables (decoded), the single-`CTSGun` design, fire modes and akimbo, spread/recoil, damage falloff and penetration, `CBulletManager`, grenades/knives, events, buying, TOML schema |
| [server/gamerules-entities.md](server/gamerules-entities.md) | Game modes (DM/TDM/LMS/The One), the static `TSGameRules` helper, kill scoring and spawn selection, objectives (mostly dead in 3.0), power-ups, TS map entities with a reconstructed FGD |
| **Server** (`mp.dll`, Windows) | |
| [server/bots.md](server/bots.md) | The bot AI, which only the Windows server has: `addbot`/`addcustombot`, `bots.txt`/`bot_say.txt`, the `CBot` entity and its brain (strategy states, seven behaviour modules, button timers, view turning, `RunPlayerMove`), vision, aiming with skill, fire control, loadouts, stunts, chat, the node graph (learning, `FindPath`, navigation) and the `.ndm` format, cvars, every random call; plus the `mp.dll` ↔ `ts_i386.so` member-offset rule |
| **Client** (`client.dll`) | |
| [client/architecture-hud.md](client/architecture-hud.md) | Exports, 107 cvars, 93 commands, 76 message hooks with payloads, the HUD manager and its 17 elements, input and TS buttons, the anti-script gate, the immediate-mode buy menu, scoreboard overflow |
| [client/rendering-effects-prediction.md](client/rendering-effects-prediction.md) | Studio renderer (torso/legs split), 11 event handlers, the TS particle system and BSP-lump emitters, `V_CalcRefdef` (recoil, slow-mo tint), motion-blur ghosts, client pmove and weapon prediction |
| **TS 2.1** (`ts21/`) | |
| [ts21/README.md](ts21/README.md) | What 2.1 does differently from 3.0, for a 2.1 gameplay mode: [weapons](ts21/weapons.md), [movement and stunts](ts21/movement.md), [rules, powerups and modes](ts21/rules.md), [client and protocol](ts21/client-protocol.md), [bots and entities](ts21/bots-entities.md) |

## Headline facts

* **One weapon entity per player.** `CTSGun` holds 38 per-weapon records. The weapon and ammo stat
  tables are built at startup and then overridden by `Sparta()`, which is why they're zero on disk.
* **Two networked fields carry most TS state.**
  * `fuser1` is the per-entity time scale, used for slow motion.
  * `iuser4` is the stunt bitfield.

  Both go through `clientdata_t`/`entity_state_t`, and the client's pmove (an identical copy of the
  server's) reads them.
* **Slow motion runs on two clocks on the client:** the networked `fuser1` for simulation, and an
  eased global for cosmetics (tint, particles, sound pitch).
* **Much of the shipped code is dead.** In 3.0, round-based and objective modes can't be reached,
  `CashBased()` returns 0, and some messages are registered but never sent. The docs mark these,
  and the Rust port can revive them behind cvars.
* **Map particles and fog are client-only.** The client parses them from the BSP entity lump; the
  server deletes them.
* **Bots exist only in the Windows server.** `mp.dll` has a complete waypoint bot (listen servers
  only); the Linux `.so` keeps just the commands and cvars. The bots learn a node graph from
  players' positions (`botlearn`) and ship it as `maps/<map>.ndm`.
