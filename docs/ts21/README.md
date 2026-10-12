# TS 2.1 vs TS 3.0: gameplay differences

What TS 2.1 (April 2004, `ts21/server-win`, `ts21/client`) does differently from TS 3.0, worked out
from the decompilations, so a "2.1 gameplay" mode can be built into the Rust port. Each report has
a summary table (2.1 vs 3.0, addresses in both builds, Rust port location), the exact 2.1 constants
and pseudocode, lists of what to disable and add, the client/server split, and open questions.

| Report | Covers |
|---|---|
| [weapons.md](weapons.md) | weapon list and stat tables, firing, spread, recoil, damage, armour, melee, grenades, buying, prediction |
| [movement.md](movement.md) | shared `pm` code, speed by slots, stunts, slow motion's effect on movement |
| [rules.md](rules.md) | game modes, cvars, scoring, The One, cash, damage/death/respawn, powerups, slow motion, rounds and objectives |
| [client-protocol.md](client-protocol.md) | user messages, `delta.lst`, client prediction, client cvars/input/events, HUD, how to signal the mode to clients |
| [bots-entities.md](bots-entities.md) | entity classes and keyvalues, breakable respawn, bot AI, server/client commands |

Notes:

* The reports were written by parallel analysis passes over an earlier export whose 2.1 vtable
  naming was off by one or more slots. Their "(labelled `X`)" remarks refer to those old names and
  the warning at the top of `bots-entities.md` describes the bug; both are fixed now
  (`docs/method.md`, "TS 2.1"). **Addresses are authoritative**; names in `ts21/server-win` now
  match the reports' corrected meanings.
* Where the reports overlap (speed by slots, slow pause, armour, weapon timers) they agree. The
  armour, AK47 stat and slot-map claims were re-checked against the disassembly.
* Helper scripts mentioned in the reports lived in `/tmp` and aren't kept.
