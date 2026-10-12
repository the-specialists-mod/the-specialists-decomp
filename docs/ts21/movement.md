# TS 2.1 vs TS 3.0: player movement and stunts

Scope: shared `pm_shared` (server `mp.dll` and the client prediction copy), the `CTSStunt` state machine,
speed by slot weight, slow-motion as it affects movement, the jump kick and backflip kick, and the
client-side "mewcelleration". Kung-fu attack damage tables and weapon timers belong to the weapons area. They
are noted here only where they change movement.

Conventions:
* `pm+0xNNN` is a `playermove_s` offset. These are identical in 2.1 and 3.0: `frametime` 0x10, `velocity` 0x5c,
  `flDuckTime` 0x8c, `bInDuck` 0x90, `flags` 0xb8, `usehull` 0xbc, `gravity` 0xc0, `friction` 0xc4,
  `oldbuttons` 0xc8, `onground` 0xe0, `maxspeed` 0x1f4, `iuser4` 0x208, `fuser1` 0x20c,
  `cmd.forwardmove/sidemove/upmove` 0x45468/6c/70, `cmd.buttons` 0x45476.
* `pev+0xNNN` is an `entvars_t` offset (`iuser4` 0x250, `fuser1` 0x254, `button` 0x180, `flags` 0x1a4,
  `v_angle` 0x74, `gravity` 0x11c, `friction` 0x120, `view_ofs` 0x174, `armorvalue` 0x1bc).
* 2.1 addresses are `ts21/server-win` (2.1 `mp.dll`) unless marked "cl21" (2.1 `client.dll`, `ts21/client`).
  3.0 addresses are `server-win` (3.0 `mp.dll`, "mp30") or `server` (.so, Ghidra address, "so30").
* `slowInv` (2.1) = `FUN_100551c0(pl)` = `FixedSlowMul(pev->fuser1)` = `fuser1 == 0 ? 1.0 : 1/max(fuser1, 0.1)`
  (0x1005a3d0 and 0x1005a3b0, disassembled).
* I checked every float constant against `.rdata` (2.1 file offset == RVA).
* Method for pm_shared: I normalised each 2.1 pm function and its 3.0 `mp.dll` counterpart (rename
  globals/locals) and diffed them. All the SDK-derived functions not listed below came out identical in
  both builds (diff = register/local naming only).

---

## 1. Summary table

| Feature | TS 2.1 | TS 3.0 | 2.1 evidence | 3.0 evidence | Rust port location |
|---|---|---|---|---|---|
| Ground accel factor (`PM_Accelerate`) | constant **×0.7** when not prone (0x20) and not `FL_DUCKING` | `GetAccelBySpeed(maxspeed)`: 0.6 @210 … 1.1 @≥330 | 0x100315f0 (cl21 0x1005aef0), double 0.7 @0x10082938 | mp30 0x10037dc0, so30 0xfdcc4 | `shared/src/pm/mod.rs` `accelerate()` l.794 (`accel_by_speed_x`) |
| Default / max player speed | **310**, clamp 0..310 | 330, clamp 0..330 | TSInit 0x100552f0 `SetPlayerSpeed(310)`; `SetPlayerSpeed` 0x100557b0 | so30 `TSInit` 0x92a4c, `SetPlayerSpeed` 0x93068 | `shared/src/ts.rs::speed_by_slots`, `server/src/weapons/inventory.rs:38`, `rules/scoring.rs:692` |
| Speed by slots | `space ≥ 70 ? 310 : (int)(space/70*140 + 170)` (170..310, truncated) | `space < 81 ? 210 + space/81*120 : 330` (The One → 330) | 0x100436e0 (consts 170, 140, 1/70, 310 @0x100885e0..ec) | so30 0x76bd4 | `shared/src/ts.rs::speed_by_slots` |
| Stunt slot limits (used = 81 − space) | High < **22**, Medium < **42**, Low < **72** | 42 / 52 / 62 (The One bypasses) | 0x1005b0b0 / 0x1005b110 / 0x1005b130 | so30 0x9a494/0x9a4ec/0x9a544 | `server/src/stunt/moves.rs` `can_dive*` l.12-22 |
| CanDiveHigh extra rule | in game types 2/3 (TSGameRules byte ≠ 0/1) also needs `pev->armorvalue > 0` | none | 0x1005b0b0 | — | `moves.rs::can_dive_high` |
| `TSHandle` RECOVER (iuser4 0x1) | cmd **×0.1** | cmd ×0.5 | 0x10058400 (double 0.1 @0x10080200), cl21 0x10092550 | mp30 0x10065090 (0.5 @0x10089180) | `shared/src/pm/ts.rs::ts_handle` |
| Wall jump impulse (`TSWallJump`) | `vel.xy = −fwd.xy·`**170**, `vel.z =` **282.84** (50 u), then clamp horiz to 2·maxspeed | −fwd·210, z 236.64 (35 u), no clamp | 0x100581d0 (0x438d6bde), cl21 0x10092160 | mp30 0x10064e60 | `pm/ts.rs::ts_wall_jump`, `WALLJUMP_SPEED` |
| Wall climb impulse (`TSWallJumpClimb`) | `vel.z =` **309.84** (60 u) + 2·maxspeed clamp | 334.664 (70 u) | 0x10058270 (0x439aeb59), cl21 0x10092280 | mp30 0x10064ef0 (0x43a754fe) | `pm/ts.rs::ts_wall_jump_climb`, `WALLCLIMB_VELOCITY` |
| Dive impulse (`TSDive`) | same (90,25)/(90,50)/(100,10); **then clamp horiz to 2·maxspeed**; **no wall dive** | same impulses; wall dive `dir=fwd·3` (0x800000); no clamp | 0x100582d0 | mp30 0x10064f40 | `pm/ts.rs::ts_dive` |
| `FixVelocity(vel,lim)` | **implemented**: if `|vel|3D > lim`: `vel.xy *= lim/|vel|` | empty (ICF → `SUB_DoNothing`) | 0x10057d10 | so30 0xf8fc4 | new helper in `pm/ts.rs` |
| Strafe-jump boost (`PM_Jump`) | if `IN_MOVELEFT|IN_MOVERIGHT` held: `vel.xy += 100·norm(vel).xy`, clamp horiz to maxspeed | none | 0x10058680 (test `[pm+0x45477],6` @0x100589a5), cl21 0x10092940 | mp30 0x100651b0 | `pm/mod.rs::jump` l.1670 |
| Super (high) jump | `vel.xy += 100·norm(vel).xy` (no clamp), z 400, sets **0x100000** | z 400 only, sets 0x200000 | 0x10058680 | mp30 0x100651b0 | `pm/mod.rs::jump` l.1709 |
| Glide bit read by `PM_CheckParamters` | **0x80000** | 0x100000 | 0x10058a60 | mp30 0x100654a0 | `pm/mod.rs::check_parameters` l.509 |
| `fuser1` semantics | **0 = normal speed** (TSInit and StartObserver write 0) | 1.0 = normal | 0x100552f0, 0x1005a400 | so30 TSInit | `pm/mod.rs` l.340, `ts::TIME_SCALE_FREEZE` |
| PM frametime scale | `fuser1 != 0 ? (fuser1 ≥ 0.1 ? ft·fuser1 : 0) : ft` | `fuser1 ≥ 0.1 ? ft·fuser1 : 0` | `PM_PlayerMove` 0x10033c90 | mp30 0x1003a4e0 | `pm/mod.rs::player_move` l.340 |
| Punch decay | `×(fuser1==0 ? 1 : fuser1)`; **no dead-zeroing** | ×fuser1; zeroed while dead | 0x10033b10 | mp30 0x1003a370 | `pm/mod.rs::drop_punch_angle` |
| Step-sound interval | `/fuser1` only if `fuser1 != 0` (no 0.1 floor) | `/max(fuser1,0.1)` | 0x10030b00 @0x10030dad | mp30 0x10037230 | `pm/sound.rs` |
| Slow-motion application | **instant** (`GoSlow` writes `fuser1` directly) | smoothed 7/s, snap < 0.05 | 0x10055220 | so30 0x9910c | `rules/powerup.rs` l.21 |
| Slow-mo power-up self/others | **0.55 / 0.35** | 0.6 / 0.35 | 0x100568e0 | so30 0x95748 | `rules/powerup.rs::SLOWMO` |
| Slow-pause self/others | **0.6 / 0.15** | 0.8 / 0.225 | 0x100568e0 | so30 0x95748 | `rules/powerup.rs::SLOWPAUSE` |
| FixedSlowAmt floor | **0.1** | 0.01 | 0x1005a3b0 | so30 0x990bc | `stunt/mod.rs::slow_mul` |
| Stunt timers | **absolute** `time + d·slowInv` (fixed at start) | relative, `−= slowmul·dt` | all `CTSStunt` | so30 0x9a014 | `stunt/moves.rs::play` |
| Dive-landing roll-out recover | **0.75** | 0.5625 | 0x1005c4e0 | so30 0x9bbf4 | `moves.rs::landing` l.385 |
| Flip-landing recover | **0.5** | 0.375 | 0x1005c040 | so30 0x9b820 | `moves.rs::handle_wheel` l.411 |
| Get-up (from prone) recover | **1.0** | 0.75 | 0x1005c1f0 | so30 0x9b9f8 | `moves.rs::handle_slide` l.432 |
| Wall jump/climb landing | **recover 0.5, sets RECOVER bit 0x1** | recover 0.2625, no RECOVER bit | 0x1005bd80 / 0x1005bec0 | so30 0x9b4fc / 0x9b644 | `moves.rs::land_wall_stunt` l.325 |
| Roll-out / get-up keys | `IN_JUMP|IN_ALT1` (0x4002) | `IN_JUMP|IN_DUCK|IN_ALT1` (0x4006) | 0x1005c4e0, 0x1005c1f0 | so30 `Landing`/`HandleSlide` | `moves.rs` l.373, l.428 |
| Wall dive (stunt key, wall behind) | **absent** | present | 0x1005b9f0 (no call) | so30 0x9ad44 | `moves.rs::check_for_wall_dive` |
| Wall-climb trigger while gliding | blocked (`IN_JUMP` path only if not gliding) | allowed | 0x1005b9f0 | so30 0x9b000 | `moves.rs::handle_stunt` |
| Bullet time | needs `fuser1 != 0` (slowed); no ×0.7 bullet dodge | needs slowmul ≤ 0.99; dodge ×0.7 for 0.55 s | 0x1005b160 | so30 0x9a5b4 | `moves.rs::go_bullet_time` |
| Wall-chain cooldown | `next = time + min(10, slowInv·max(0.5, chain))` | `next = max(0.5, chain)`, no cap (the .so's 10.0 is the `NextStunt` ×10 message scale) | 0x1005b320 / 0x1005b550 | so30 0x9a7d4/0x9aa1c | `moves.rs::go_wall_jump/climb` |
| Wall-climb counter | none | `m_iWallClimbs++` | — | so30 | `p.stunt.wall_climbs` |
| Jump kick (`CloseAttack`) | dmg `clamp(|v|/15,10,20)`·(KF?2:1); CD 0.7; next attack **0.7**; **no KFu bar cost** | same dmg/CD; next attack 0.35; bar −1.5·dmg | 0x1005cd00 | so30 0x9c630 | `moves.rs::close_attack` l.647 |
| Backflip kick | 15 (30 with Kung Fu), window 0.3; **no bar cost** | 15/30, window 0.3, bar −22.5 | 0x1005d0e0 | so30 0x9c9bc | `moves.rs::go_wheel` l.488 |
| Kung-fu `BlockPlayer` after an attack | `t = delay·0.9·slowInv`, ground only, RECOVER → ×**0.1** input | `t = delay·0.75`, ×0.5 input | 0x10056b60 called from 0x1004de10 | so30 0x95b58 | `stunt/mod.rs::block_player` l.214 |
| Motion blur `TSMBlur` on stunts | none (message doesn't exist) | yes | strings.tsv | so30 | `stunt/mod.rs::maybe_blur` |
| Physinfo `mj` | TSInit always `"0"`; set to 1 by super-jump pickup / "The Specialist" | TSInit `0`, or `1` via map flag 0x40 | 0x100552f0, PlayerAddPowerUp 0x100599d0 | so30 `TSInit` | `stunt/mod.rs::sync_superjump` |
| Backpedal 0.8, friction ×0.75, duck view 16, ladder 200, fall 680/1124, jump 236.64, PseudoClimb, duck ×0.333, AirAccelerate cap 30, stuck/categorize/fly/water | identical | identical | diffs §2.7 | | no change |

---

## 2. pm_shared: what changes (shared code, affects prediction)

The 2.1 TS pm code is at 0x10057d10–0x10058fd0 (`unnamed_10045840.c`). The SDK-derived code is at 0x1002f540–0x100342e0.
In 3.0 `mp.dll` the TS pm code is at 0x10064a00–0x10065a00 and the SDK part at 0x100362a0–0x1003ab30.

| 2.1 | 3.0 mp.dll | .so name | Diff |
|---|---|---|---|
| 0x10057d10 | (ICF'd `SUB_DoNothing`) | `FixVelocity` | **2.1 implemented, 3.0 empty** |
| 0x10057d70 | 0x10064a00 | `PseudoClimb` | identical |
| 0x10057fa0 | 0x10064c30 | `TSStandUp` | identical |
| 0x10058150 | 0x10064de0 | `TSGoDuck` | identical |
| 0x100581d0 | 0x10064e60 | `TSWallJump` | **constants + clamp** |
| 0x10058270 | 0x10064ef0 | `TSWallJumpClimb` | **constant + clamp** |
| 0x100582d0 | 0x10064f40 | `TSDive` | **no wall dive + clamp** |
| 0x10058400 | 0x10065090 | `TSHandle` | **RECOVER ×0.1** |
| 0x10058680 | 0x100651b0 | `PM_Jump` | **strafe boost, high-jump xy boost, bit** |
| 0x10058a60 | 0x100654a0 | `PM_CheckParamters` | **glide bit 0x80000** |
| 0x10058d70 | 0x100657a0 | `PM_Duck` | identical |
| 0x10058fd0 | 0x10065a00 | `PM_WalkMove` | identical (incl. backpedal ×0.8) |
| 0x100315f0 | 0x10037dc0 | `PM_Accelerate` | **×0.7 constant** |
| 0x100316b0 | 0x10037ea0 | `PM_Friction` | identical (×0.75) |
| 0x10033c90 | 0x1003a4e0 | `PM_PlayerMove` | **fuser1==0 guard** |
| 0x10033b10 | 0x1003a370 | `PM_DropPunchAngle` | **fuser1==0 guard, no dead check** |
| 0x10030b00 | 0x10037230 | `PM_UpdateStepSound` | **fuser1==0 guard** |
| 0x100337d0 | 0x1003a030 | `PM_CheckFalling` | identical |
| 0x10032b00 | 0x10039360 | `PM_LadderMove` | identical |

I checked the 2.1 client copy (`ts21/client`) at the key points. It matches the 2.1 server:
`TSHandle` ×0.1 (cl21 0x10092550, lines 2734-2736), `PM_Accelerate` ×0.7 (cl21 0x1005aef0),
wall jump 170 / `sqrt(80000)` (cl21 0x10092160), wall climb `sqrt(96000)` (cl21 0x10092280),
`PM_Jump` strafe boost `buttons & 0x600` and high jump `|= 0x100000` (cl21 0x10092940).
The 2.1 client computes some of the constants as `sqrt(double)` at run time.

### 2.1 `PM_Accelerate` (2.1 0x100315f0)

```c
if (!dead && !waterjumptime) {
    addspeed = wishspeed - dot(velocity, wishdir);
    if (addspeed > 0) {
        accelspeed = friction * frametime * wishspeed * accel;   // pm->friction * frametime * wishspeed * accel
        if (!(iuser4 & 0x20) && !(flags & FL_DUCKING))
            accelspeed *= 0.7;                                   // double 0.7 (0x10082938)
        accelspeed = min(accelspeed, addspeed);
        velocity += accelspeed * wishdir;
    }
}
```
3.0 multiplies by `GetAccelBySpeed(maxspeed)` instead: `maxspeed >= 330 ? 1.1 : (maxspeed-210)/120*0.5+0.6`.
A 2.1 player at full speed (310) accelerates with factor 0.7. A 3.0 player at 330 uses 1.1, so 3.0
accelerates about 57 % faster at full speed. Note 2.1's 0.7 is a `double` multiply (MSVC `fmul qword`)
and applies after the product. Keep the port's `Fpu` rounding style: `(prod as ext * 0.7d)`.

### 2.2 `TSHandle` (2.1 0x10058400)

Same structure and order as 3.0 (`PseudoClimb` when `IN_JUMP` held in air, then RECOVER/PRONE input scaling,
then the impulses, then `TSGoDuck`/`TSStandUp`). The only difference is:
```c
if (iuser4 & 0x1) { fwd *= 0.1; side *= 0.1; up *= 0.1; }   // 3.0: 0.5   (double 0.1 @0x10080200)
if (iuser4 & 0x20){ fwd *= 0.0; side *= 0.3; up *= 0.3; }   // same (2.1 multiplies fwd by double 0.0)
```
RECOVER (0x1) is set by roll, dive roll-out, flip landing, get-up, super-jump landing, kung-fu `BlockPlayer`,
**and in 2.1 also by wall-jump/wall-climb landings**. In 2.1 the player has almost no input control during
any recovery.

### 2.3 Wall jump, wall climb, dive impulses and `FixVelocity`

```c
// FixVelocity (2.1 0x10057d10).  3.0: empty function.
void FixVelocity(float *vel, float lim) {
    float len = sqrt(vel[0]^2 + vel[1]^2 + vel[2]^2);    // 3D length (0x1002fbf0)
    if (len != 0 && lim < len) { float k = lim / len; vel[0] *= k; vel[1] *= k; }   // z untouched
}

// TSWallJump (2.1 0x100581d0)
onground = -1;
if (iuser4 & 0x1000) {
    vel[0] = -170 * forward[0]; vel[1] = -170 * forward[1];   // 3.0: 210
    vel[2] = 282.84271;                                       // 0x438d6bde = sqrt(1600*50); 3.0: 236.64319
    iuser4 &= ~0x1000;
}
PM_FixupGravityVelocity();                                    // 0x100310f0
FixVelocity(velocity, maxspeed + maxspeed);                   // 3.0: no-op

// TSWallJumpClimb (2.1 0x10058270)
onground = -1;
if (iuser4 & 0x8000) { vel[2] = 309.83865 /*0x439aeb59 = sqrt(1600*60)*/; iuser4 &= ~0x8000; }   // 3.0: 334.664
PM_FixupGravityVelocity();
FixVelocity(velocity, 2*maxspeed);

// TSDive (2.1 0x100582d0)
(divespeed,h) = (iuser4&0x100) ? (90,25) : (iuser4&0x40) ? (90,50) : (100,10); clear that bit;
dir = normalize(velocity);              // 3D.  NO "if (iuser4 & 0x800000) dir = forward*3" in 2.1
onground = -1;
vel.xy += divespeed * dir.xy;
vel.z = sqrt(h*1600);                   // 200 / 282.84 / 126.49
PM_FixupGravityVelocity();
FixVelocity(velocity, 2*maxspeed);      // 2.1 only. 2.1 also doesn't clear 0x800000 (never set)
```
The clamp only bites when horizontal speed is already high (`|v|3D > 2·maxspeed`, e.g. > 620 at maxspeed 310).
It caps dive-chaining and wall-climb speed gains. With pitch 0 the wall jump itself is
`sqrt(170²+282.8²) = 330 < 340`, so it never triggers there.

### 2.4 `PM_Jump` (2.1 0x10058680)

Prologue identical to 3.0. Same early returns: `dead` → set `oldbuttons |= IN_JUMP`; `iuser4 & 0x34`
or `& 0x30c00` → return without latching; waterjumptime countdown; water jump 100/80/50 + wade sounds;
`onground == -1` → latch; `oldbuttons & IN_JUMP` → return. Then:
```c
onground = -1;
PM_PreventMegaBunnyJumping();                       // 0x100334f0 (1.7 / 0.65, unchanged)
PM_PlayStepSound(...,1.0);
mj = atoi(PM_Info_ValueForKey(physinfo, "mj"));
if ((bInDuck || (flags & FL_DUCKING)) && mj == 1 && (cmd.buttons & IN_DUCK) && flDuckTime > 0) {
    dir = normalize(velocity);                      // 2.1 only
    vel.xy += 100 * dir.xy;                         // 2.1 only (no clamp)
    vel.z = 400;
    iuser4 |= 0x100000;                             // 2.1 "superjump start" (3.0 uses 0x200000)
} else {
    if (cmd.buttons & (IN_MOVELEFT | IN_MOVERIGHT)) {   // byte test [pm+0x45477] & 6 — 2.1 only
        dir = normalize(velocity);
        vel.xy += 100 * dir.xy;
        FixVelocity(velocity, maxspeed);            // horizontal clamp to maxspeed (vel.z≈0 on ground)
    }
    vel.z = 236.64319;
}
PM_FixupGravityVelocity();
oldbuttons |= IN_JUMP;
```
The strafe-jump boost gives up to +100 u/s along the current velocity when jumping with a strafe key held.
It is capped at maxspeed, so it only helps when you are below max speed: you get to full speed instantly from a slow start.
UNVERIFIED (interpretation only): this may be what the CHANGELOG calls "1.5 walljumping reinstated" or a strafe
assist. The code is unambiguous either way.

### 2.5 `PM_CheckParamters` (2.1 0x10058a60)

Identical to 3.0 (spectator-only clamp, no `IN_USE` slow, zero cmd on `0x1001000` flags / dead / `iuser4 & 0x10` /
`iuser4 & 0x10c00`, yaw cache `OldrotArray`, dead view −8) except for the glide test bit:
```c
if (iuser4 & 0x80000) {      // 3.0: 0x100000
    fwd *= 0.5; side *= 0.25; up *= 0.25;
    gravity = (cmd.buttons & IN_JUMP) ? (vel.z >= 0 ? 0.3 : 0.75) : 1.0;
}
```
Also note: the 2.1 zero-cmd mask is `(iuser4 & 0x10) || (iuser4 & 0x10c00)`, which is the same as 0x10c10.

### 2.6 `PM_PlayerMove` / punch / step sound (fuser1 guard)

```c
frametime = cmd.msec * 0.001;
if (fuser1 != 0) frametime *= (fuser1 >= 0.1 ? fuser1 : 0);     // 3.0: always (fuser1 is 1.0 normally)
// PM_DropPunchAngle (0x10033b10): len -= (0.5*len + 10) * frametime * (fuser1 == 0 ? 1 : fuser1); clamp ≥0
//                                  (no "if dead → zero" branch; 3.0 zeroes punch while dead)
// PM_UpdateStepSound (0x10030b00): if (fuser1 != 0) flTimeStepSound = (int)(flTimeStepSound / fuser1)
```
The rest of `PM_PlayerMove` matches 3.0: no stuck duck-retry, `TSHandle` after `PM_Ladder`, then step sound,
then `PM_Duck`, and the same movetype switch.

**Port recommendation:** keep the 3.0 convention (`fuser1 = 1.0` normal) in 2.1 mode too. With `fuser1 ≥ 0.1`
the 2.1 and 3.0 formulas give the same result. The only behaviour to port is "no dead punch-zeroing" (minor),
plus the step-sound floor. Don't reproduce `fuser1 = 0`. It is an encoding detail, and 0 would freeze 3.0 code paths.

### 2.7 Things in shared pm that are identical (don't touch)

`PM_WalkMove` (backpedal ×0.8 is in 2.1 too, so the CHANGELOG "4/7 → 4/5" predates 2.1), `PM_Friction` ×0.75 + edge
friction, `PM_AirAccelerate` (cap 30), `PM_AirMove`, `PM_Duck` (TIME_TO_DUCK 0.4, view 16/28, ×0.333 crouch-walk,
blocked by `iuser4 & 0x3c` / `0x30c00`), `PM_UnDuck`, `TSGoDuck`, `TSStandUp`, `PseudoClimb` (64/32/+40,
`+frametime*1600` up if `|v| < 0.5*maxspeed`), `PM_LadderMove` (flat 200, jump-off 270), `PM_CheckFalling`
(punch 350, safe 680, fallpain), `PM_CheckWater/WaterMove/WaterJump`, `PM_CatagorizePosition` (180 / 0.7), `PM_CheckStuck`,
`PM_FlyMove`, `PM_CheckVelocity`, gravity helpers, `PM_PreventMegaBunnyJumping`, texture loading.
Step size is the engine's `sv_stepsize` (not in the dll). Gravity is `sv_gravity` × `pev->gravity` in both.

### 2.8 Physinfo keys

Both versions use `mj` (super jump), `slj` (`"0"`, or `"1"` from `CBaseAnimating::HandleAnimEvent` (SDK longjump
leftover, unused by pm)) and `hl` = `"1"`. In 2.1 `mj` is set to `"0"` in TSInit (0x100552f0 →
`SetPhysicsKeyValue("mj","0")`). It is set to `"1"` by the super-jump pickup (`PlayerAddPowerUp` 0x100599d0, power-up
0x100, once per life via `pl+0x6c7`) and by "The Specialist" (CHalfLifeMultiplay 0x… `"%s is The Specialist"` and
global_10021f00 l.4315: health 150, `mj=1`, kung fu). 2.1 has no map-flag path (3.0 `CTSMapGlobals` 0x40).

### 2.9 Client mouse acceleration ("mewcelleration")

The CHANGELOG names `cl_accel/cl_accelexp/cl_accelmax`. Neither client has those strings. Both have `m_accel`,
`m_accelexp`, `m_accelmax` (2.1 cl 0x10270138.., 3.0 cl 0x100946f0..). In 2.1 (cl21 `unnamed_10050490.c`
l.1225-1260) they only change mouse look:
```
d = sign(dx) * min(m_accelmax (if ≠0), |dx|^m_accelexp * m_accel);   accum += d; accum *= sensitivity
```
They don't touch `forwardmove/sidemove`, except through the stock `+strafe`/lookstrafe mouse-to-side mapping, which
is unchanged. **No prediction or pm change is needed.** The 3.0 client has the same cvars. No `slowsensitivity` exists in either
client's string table.

---

## 3. Server stunt code (`CTSStunt`, server-only)

2.1 `CTSStunt` is at `pl+0x468` (`CTSStunt::Init` 0x1005acb0). It is called from TSInit 0x100552f0 with owner at +0x40.
Fields (2.1 offset → meaning): +0x00 nextStunt (**absolute time**), +0x08 recover (absolute), +0x0c jump-kick CD
(absolute), +0x10 roll tap window, +0x14 wheel (flip) tap window, +0x18 climb tap window, +0x20 init −1,
+0x24 vec3 stunt dir, +0x30 bool notBackward, +0x38 proneLock (absolute), +0x3c wallChain, +0x40 owner.
There is no dodge timer and no wall-climb counter. Player fields used: `pl+0x770` = `m_afButtonPressed`,
`pl+0x4c0` = free slot space (start 81), `pl+0x4c8` = player speed, `pl+0xae0` = last on-ground time,
`pl+0x118` = `m_flNextAttack` (relative), `pl+0x460` BlockPlayer end time (absolute), `pl+0x464` temp-gravity end time,
`pl+0x718/0x71c/0x720` close-combat window end (absolute) / damage / type, `pl+0x6ec` KFu bar.

Every 2.1 duration below is `gpGlobals->time + d * slowInv`, computed once at stunt start. 3.0 stores `d` and
decrements by `slowmul*frametime`. If slow-mo doesn't change mid-timer the two match. For the port, keep the 3.0
relative timers and change only the `d` values. For exactness, freeze `slowInv` at start (`d_eff = d*slowInv`,
decremented by real `frametime`) and use the 0.1 floor.

### 3.1 `CTSStunt::Play` (2.1 0x1005acf0), every PreThink

```c
if (!IsAlive || pev->iuser1) return;
if (iuser4 & 0x100000) {                       // super-jump start → glide
    iuser4 = (iuser4 | 0x80000) & ~0x100000;   // 3.0: 0x200000 → 0x100000
    Animate(0x38 /*morfy_jump*/); EMIT airwheel.wav
}
if (flags & FL_ONGROUND) { wallChain = 0; climbTap = 0; }   // 3.0 also resets wall-climb count
if (movetype != MOVETYPE_FLY /*ladder*/ && waterlevel != 3) {
    if (recover != 0 && (recover < time || pl->m_fSequenceFinished /*pl+0x68*/)) {
        iuser4 &= ~(0x40000 | 0x4 | 0x1);      // 3.0 also clears 0x2 and 0x80000
        recover = 0; friction = 1; view_ofs = (0,0, FL_DUCKING ? 16 : 28);
    }
    if (iuser4 & 0x10)    HandleDive();        // 0x1005c020 → Landing 0x1005c4e0 + Animate(2)
    if (iuser4 & 0x20)    HandleSlide();       // 0x1005c1f0
    if (iuser4 & 0xc00)   HandleWheel();       // 0x1005c040
    if (iuser4 & 0x10000) HandleWallJump();    // 0x1005bd80
    if (iuser4 & 0x20000) HandleWallClimb();   // 0x1005bec0
    if (button & (IN_ALT1 | IN_JUMP)) HandleStunt();  // 0x1005b9f0
} else {
    iuser4 &= ~0x80000;
    if (iuser4 & 0x70c31) { clear 0x40000,4,1,0x10,0x20,0x400,0x800,0x10000,0x20000;
                            view 28; friction 1; gravity 1; recover 0; anim cur = -1; Animate(1); }
}
```
No timer countdown happens here (timers are absolute). The `0.001` clamp and `recover < 0.01` test of 3.0 don't exist.

### 3.2 `HandleStunt` (2.1 0x1005b9f0)

```c
if (nextStunt > time || recover > time || (iuser4 & 0xc30)) return;
// (3.0 also clears the close-combat window pl+0x79c/0x7a0/0x7a4 here; 2.1 does not)
if (!(button & IN_JUMP) || (iuser4 & 0x80000 /*gliding*/)) {
    if ((pressed & IN_ALT1) && CheckForWallJump()) { GoWallJump(); return; }
    // 3.0: else if CheckForWallDive() { iuser4 |= 0x800000; GoDive(); }   — absent in 2.1
} else if (CheckForWallClimb()) { GoWallClimb(); return; }
if (!(pressed & IN_ALT1) || (iuser4 & 0xb0000)) return;       // 0x80000|0x20000|0x10000 (3.0: 0x130000 = same meaning)
if (!(flags & FL_ONGROUND)) {
    if (vel.z < -680) return;
    if (time - lastGroundTime > 0.7 * slowInv) return;        // coyote time, same as 3.0
}
if (|vel.xy| < 80) { GoBulletTime(); return; }
GoDive();                                                      // inlined in 2.1
```

**GoDive (inlined in 0x1005b9f0):**
| Condition | iuser4 | gravity | friction |
|---|---|---|---|
| `v_angle.x < -10 && CanDiveHigh` | `|0x40` | 0.75 | — |
| `v_angle.x <= 10 && CanDiveMedium` | `|0x100` | 0.75 | — |
| else `CanDiveLow` | `|0x80` | 0.75 | 0.25 |
| else (too heavy) | `|0x80` | 1.0 | 0.9 |

Then `iuser4 |= 0x4|0x10`, `view_ofs = 0`, `Animate(0x28)`, `nextStunt = time + 0` (`NextDive()` returns 0),
`NextStunt` msg `(next-time)*10`, `dir = normalize(vel)`, `dive.wav`. This is the same as 3.0 except there is no blur.

**GoBulletTime (0x1005b160):** `if (pev->fuser1 == 0) return` (only while slowed. The 3.0 equivalent is `slowmul ≤ 0.99`).
`dir = -v_forward`, `notBackward = 1`, `nextStunt = time + 0.55*slowInv`, msg, `iuser4 |= 0x4|0x20`, `pl+0x288 = 3`,
`proneLock = time + 0.55*slowInv`, `view_ofs = 0`, `if (m_flNextAttack < 0) m_flNextAttack = 0.55*slowInv`,
`Animate(0x35 /*bullettime*/)`, `land.wav`. **2.1 has no dodge timer**: `TraceAttack` 2.1 (CBasePlayer.c l.1689)
has only the stunt ×0.7 (`iuser4 & 0x10c10`). 3.0 additionally gives ×0.7 to bullets for 0.55 s.

**CheckForWallJump (0x1005b7a0):** `CanDiveHigh` → `UTIL_MakeVectors(v_angle)`; `TraceLine(origin, origin + v_forward*48,
ignore_monsters)`; `fraction < 1 && -0.5 < n.z < 0.5 && vel.z > -370`. Same as 3.0 (48 @0x10087ef0, −370 @0x1008920c).

**CheckForWallClimb (0x1005b890):** if not already climbing (0x20000): needs `pressed & IN_JUMP`. If `climbTap < time`
then `climbTap = time + 0.3` and fail (first tap arms it; second tap within 0.3 s proceeds). Then `TraceLine(origin,
origin + v_forward*54, dont_ignore_monsters)`, `fraction < 1`, hit entity not a player (vtbl+0xa8), `|n.z| < 0.5`,
`vel.z > -370`. Same as 3.0 (54 @0x10089210). No `CanDive` check.

**GoWallJump (0x1005b320):** `dir = -v_forward`; `iuser4 &= ~0x80000` (ends glide); `|= 0x4|0x1000|0x10000`; `&= ~0x20000`;
`view 0`; `Animate(0x36)`; `gravity = 0.75`; `wallChain += 0.35`;
`nextStunt = time + min(10, slowInv*max(0.5, wallChain))`; msg; `airwheel.wav`.

**GoWallClimb (0x1005b550):** `dir = -v_forward`; `&= ~0x80000`; `|= 0x4|0x8000|0x20000`; `&= ~0x10000`; `view 0`;
`Animate(0x37)`; `gravity = 1.0`; `wallChain += CanDiveHigh ? 0.3 : CanDiveMedium ? 0.5 : 0.75`;
`nextStunt` as for the wall jump; msg; `airwheel.wav`. No climb counter.

### 3.3 Landing handlers (2.1)

All of them fire only with `FL_ONGROUND`, set `gravity = 1` and play `land.wav`.

| Handler | 2.1 | 3.0 |
|---|---|---|
| `Landing` 0x1005c4e0 (from dive, 0x10) | clear 0x10. If `!(button & (IN_ALT1\|IN_JUMP))` → `|0x20` prone, view 0, anim dir = `GetDirection(v_angle, dir)` (`notBackward = d != 2`). Else roll-out: `|0x40000|0x1`, friction 0.5, view 0, **recover 0.75**, anim 0x2e | keys incl. IN_DUCK, recover 0.5625 |
| `HandleWheel` 0x1005c040 | cartwheel (0x800): clear, `|0x20`, view 0, `dir = -dir`, anim dir. Flip (0x400): clear, `|0x1`, friction 0.25, view 0, **recover 0.5** | flip recover 0.375 |
| `HandleSlide` 0x1005c1f0 (each frame while prone) | `IN_BACK` → friction 1. If `button & (IN_ALT1\|IN_JUMP)` and `proneLock < time`: `|0x1`, `&~0x20`, view 28, **recover 1.0**, `m_fSequenceFinished = 1`, anim 0x29, friction 1. Else `IN_MOVELEFT`/`IN_MOVERIGHT` (with proneLock expired): anim 0x2a/0x2b, `dir = normalize(v_forward)`, friction 1, `notBackward = 0`, `pl+0x288 = 2`. Else anim 3 | get-up keys incl. IN_DUCK, recover 0.75 |
| `HandleWallJump` 0x1005bd80 | clear 0x10000, **`|0x1`**, friction 0.5, view 0, **recover 0.5**; if `nextStunt < time` → `nextStunt = time` + msg | no RECOVER bit, recover 0.2625 |
| `HandleWallClimb` 0x1005bec0 | in air + `pressed & IN_ALT1` + `CheckForWallJump` → `GoWallJump` (no wall dive); on ground as `HandleWallJump` with 0x20000 | air: wall jump or wall dive; ground recover 0.2625 |

### 3.4 Flip / cartwheel (`GoWheel` 2.1 0x1005d0e0, from `CBasePlayer::Jump` 0x100550e0)

```c
ok = (time <= wheelTap) && (nextStunt <= time) && !(iuser4 & 0xb0c30) && !(time < recover) && movetype != FLY;
if (!(flags&FL_ONGROUND) && time - lastGroundTime > 0.7*slowInv) ok = 0;
if (ok) {
    if (|vel.xy| >= 80) { dir = normalize(vel); d = GetDirection(v_angle, dir) /*0x1003d5c0*/; }
    else                { dir = -v_forward; d = 3 /*back*/; }
    if (CanDiveHigh && (d == 3 || v_angle.x < -10)) {          // flip
        iuser4 |= 0x4|0x400|0x100; view 0; Animate(0x30); gravity 0.75; nextStunt = time; msg; airwheel;
        wheelTap = 0;
        if (d == 3) {                                           // backflip kick
            pl->ccWindowEnd(0x718) = time + 0.3*slowInv;
            pl->ccDamage (0x71c)   = 15.0 * (KungFuPowerup ? 2.0 : 1.0);   // 15 / 30
            pl->ccType   (0x720)   = 0;                          // kung-fu type
        }                                                        // 3.0 also: KFu bar −22.5, TSMBlur
        return 1;
    }
    if (CanDiveLow && d != 3) {                                  // cartwheel
        iuser4 |= 0x4|0x800|0x80; view 0; Animate(0x31); gravity 0.75;
        if (d == 2 /*forward*/) friction = 0.25;
        nextStunt = time; msg; airwheel; wheelTap = 0; return 1;
    }
}
wheelTap = time + 0.3; return 0;
```
This matches 3.0 apart from the absolute timers, no bar cost and no blur. The backflip damage is 15 in both (CHANGELOG
"Backflip damage is now 15"). The kick lands through `CheckForBreakables` (2.1 0x1005c680, not diffed in
detail. UNVERIFIED: is it the same as 3.0?).

### 3.5 Roll (`GoRoll` 2.1 0x1005d600, from `Duck` and super-jump landing)

```c
if (!(flags&FL_ONGROUND) && rollTap < time) return 0;           // in air only while a window is armed
ok = |vel.xy| >= 80 && time <= rollTap && !(iuser4 & 0xb0c30) && !(time < recover) && movetype != FLY;
if (ok) { dir = normalize(vel); iuser4 = (iuser4 & ~0x80000) | 0x40000|0x4|0x1; friction 0.3; view 0;
          recover = time + 0.75*slowInv; Animate(0x2f); land.wav; rollTap = 0; return 1; }
rollTap = time + 0.3; return 0;
```
Same as 3.0, except that RECOVER means ×0.1 input in 2.1 (×0.5 in 3.0). GoRoll doesn't check `nextStunt` in either.
CHANGELOG "Fixed super roll": I found no special-case code. UNVERIFIED what exploit that was.

3.0 wall-chain note: the `10.0` in the .so `GoWallJump`/`GoWallClimb` is the `NextStunt` message scale
(`ROUND(next*10)`), not a cap. 3.0 uses `next = max(0.5, chain)` (the port's `go_wall_jump/climb` match this). 2.1 uses
`min(10, slowInv*max(0.5, chain))`, which only bites after more than 28 chained wall jumps.

### 3.6 Jump kick (`CloseAttack` 2.1 0x1005cd00, first call in `CBasePlayer::Jump`)

Gate: `recover <= time`, `!(iuser4 & 0x30c30)`, not `FL_DUCKING`, `kickCD <= time`, and (no `CTSGun` item, or the
item isn't the gun container (+0x78 ≠ 0x10), or its current weapon (+0xbc) ≠ 0, i.e. not kung fu).
Then `kickCD = time + 0.7*slowInv`. Anim random {10, 14, 13}. `dmg = clamp(|vel|3D/15, 10, 20) * (KungFu ? 2 : 1)`.
`CloseCombatAttack(gunpos, gunpos + v_forward*48, …)`. On hit: `if (m_flNextAttack < 0) m_flNextAttack = 0.7*slowInv`
(3.0: 0.35), `closecombat.wav`. 2.1 costs no KFu bar (3.0: −1.5·dmg).

### 3.7 `CBasePlayer::Jump` / `Duck` (2.1 0x100550e0 / 0x10055090)

Same flow as 3.0. Jump: skipped if `FL_WATERJUMP` or `waterlevel ≥ 2`. Then `CloseAttack`, then on
`pressed & IN_JUMP` `GoWheel`, then `Animate(4)` + conveyor velocity on ground. Duck: `pressed & IN_DUCK` → `GoRoll`,
else `IN_DUCK` held and not yet ducked → `Animate(5)`.

### 3.8 Super-jump landing (2.1 `PostThink` 0x10054180)

Same as 3.0 but keyed on 2.1's glide bit 0x80000: `UTIL_ScreenShake(origin, 20, 30, 0.3, 512)`, clear 0x80000. If
`IN_DUCK` is held: `rollTap = time + 0.3`, `GoRoll()`; on success `m_flNextAttack = 0.75*slowInv`. Otherwise
`superjump-land.wav`, `iuser4 |= 0x4|0x1`, view 16, `recover = time + 0.75*slowInv`, `Animate(0x39)`.

### 3.9 Fall damage

Identical to 3.0: on landing with `fallvel ≥ 350`, if `watertype != CONTENTS_WATER && fallvel > 680`:
`dmg = (fallvel-680)*0.22522523`, `bodysplat.wav` if `health < dmg`, `TakeDamage(dmg, DMG_FALL|DMG_NEVERGIB)`.

### 3.10 Kung-fu movement side effects (2.1 `CCombatAttack` 0x1004de10)

After a melee attack on the ground: `BlockPlayer(slowInv * delay * 0.9)` (0x10056b60. Ground only, sets
`pl+0x460 = time+t` and RECOVER → **×0.1 input**). 3.0: `delay*0.75`, ×0.5. Several 2.1 attacks also set
`view_ofs.z = 16` and a `time + 3*x` timer (lines 160-210 of that function, UNVERIFIED meaning).
The 2.1 attack table differs from 3.0's. Constants seen: speed thresholds 100/200/270; damage clamps `|v|/15`→[10,20],
`|v|*0.1`→[10,30], `|v|*0.30303`→[10,90]; delays 0.15/0.2/0.25/0.3/0.5/0.7/0.9/1.0; bar −0.9·dmg. This
belongs to the weapons/melee area and isn't fully decoded here. 2.1 kung-fu attack functions 0x1004c090/0x1004c6c0 refuse while
`iuser4 & 0x30c20` / `0x10c20` (3.0 allows a 15-dmg attack while stunting, `0x50c30` path).

### 3.11 Slow motion as it affects movement (2.1)

* `GoSlow` 0x10055220: `pev->fuser1 = iuser1 ? 0 : amt` (instant). `pl+0x158` = amount, `pl+0x15d` = bullet-time flag.
  There is no `InterpolateSlowMotion` in 2.1 PreThink.
* Power-ups (`UpdatePowerUpState` 0x100568e0): slow-mo self 0.55 / others 0.35 (`pl+0x164/0x168`). Slow pause self
  0.6 / others 0.15, flag 1. Victims move at `fuser1 × normal` in pm, so 35 % / 15 % speed.
  (CHANGELOG "raised the speed at which victims move when slow pause is activated" → 3.0's 0.225.)
* Headshot victim: `fuser1 = 0.33` (CBaseMonster.c l.882, `TSGameRules+0x14` global-slow flag clear). Same value in 3.0.
* PreThink: `framerate = (fuser1 == 0 || fuser1 ≥ 0.1) ? max(fuser1 (0→1), 0.1) : 0`.
* 2.1 PostThink decrements weapon timers and `m_flNextAttack` by **unscaled** `gpGlobals->frametime`. 3.0 uses
  `slowmul*frametime`. So in 2.1, slowed players' guns reload/fire at real-time speed while their movement is slowed.
  This belongs to the weapons agent. Mentioned because it changes "dive/flip vs reload" timing. CHANGELOG "Fixed doing flips
  allowing reloading faster" (pre-2.1; no flip-specific reload code found in 2.1).
* Game types 2/3 (TSInit): every spawn gets a held slow-mo power-up (type 1, 3 s). Gamerules area.

### 3.12 Other

* No stamina system in either version. KFu bar (2.1 `pl+0x6ec`, regen 15/s scaled, max 100) is melee power only.
* No per-weapon speed modifiers in either. Speed comes only from slot space via `GetSpeedBySlots` →
  `SetPlayerSpeed` (2.1 callers: `PickUpWeapon`, `CTSGun::GrenadeIdle`, buy/drop paths).
* Animation ids above 0x34 are one lower in 2.1 (2.1 has no grenade-throw anim 0x35): bullettime 0x35, walljump 0x36,
  wallclimb 0x37, morfy 0x38, superjump_land 0x39 (3.0: 0x36/0x37/0x38/0x39/0x3a). Cosmetic, but the port's `animate` ids must be
  remapped if 2.1 models are used.
* `TSMBlur` doesn't exist in 2.1 (no stunt blur).
* 2.1 iuser4 bit layout differs only for the super jump (2.1 start 0x100000 / glide 0x80000, versus 3.0 0x200000 / 0x100000 with 0x80000 =
  FREEZE_ANGLES). The port doesn't talk to a 2.1 client, so keep 3.0's bit layout in 2.1 mode.

---

## 4. Things 3.0 has that 2.1 does not (disable in 2.1 mode)

1. Speed-dependent accel factor `GetAccelBySpeed` (use constant 0.7).
2. Wall dive (`CheckForWallDive`, iuser4 0x800000, `forward*3` in `TSDive`).
3. Bullet-time bullet dodge ×0.7 (`m_flDodgeUntil`).
4. IN_DUCK as a roll-out / get-up key (Landing / HandleSlide use 0x4002 in 2.1).
5. KFu bar cost for the backflip kick (22.5) and the jump kick (1.5·dmg).
6. `HandleStunt` clearing the close-combat window.
7. Slow-motion smoothing (`InterpolateSlowMotion`), the 0.01 slow floor (2.1: 0.1).
8. Wall-climb from jump while gliding (2.1 skips the climb branch while 0x80000-glide).
9. The One (`pl+0x7b9`) bypass of slot limits / speed (2.1 has "The Specialist": health 150 + mj + kung fu, no slot bypass).
10. Stunt motion blur (`TSMBlur`), map-flag super jump (`CTSMapGlobals` 0x40).
11. Dead-player punch zeroing in pm.

## 5. 2.1 features missing in 3.0 (add in 2.1 mode)

1. Strafe-jump boost in `PM_Jump` (+100 along velocity, clamp to maxspeed) when `IN_MOVELEFT|IN_MOVERIGHT` is held.
2. Super-jump horizontal boost (+100 along velocity).
3. `FixVelocity` horizontal clamp to `2*maxspeed` after dive / wall jump / wall climb impulses.
4. RECOVER bit on wall-jump/wall-climb landing. RECOVER input scale 0.1.
5. `CanDiveHigh` armour requirement in team game types (2/3) (UNVERIFIED rationale; code is clear).
6. Wall-chain cooldown cap `min(10, …)` (3.0 has none).

---

## 6. Client prediction: exactly what must change in shared pm

The switch must be visible to both `shared::pm` runs. The server-only `ts_pm_arith` cvar can't reach the client.
**Use a physinfo key**, e.g. server `SetPhysicsKeyValue(edict, "g21", "1")` in `on_spawn`, driven by a server cvar
(`ts_gameplay 21`). The pm reads it with the existing `Pm::info_int(c"g21") == 1` (as `mj` is read in `jump()`), and
physinfo already reaches the client in `clientdata_t`. In `crates/shared/src/pm/`:

| # | Function (Rust) | 2.1 mode change |
|---|---|---|
| 1 | `mod.rs::accelerate` (l.794-815) | factor = `0.7` (double, applied to `prod`) instead of `accel_by_speed_x(maxspeed)`. Same gating (`!(iuser4&PRONE) && !(flags&FL_DUCKING)`) |
| 2 | `ts.rs::ts_handle` | RECOVER multiplier 0.1 (double) instead of 0.5 |
| 3 | `ts.rs::ts_wall_jump` | speed 170, `vel.z = 282.842_71`; after `fixup_gravity_velocity()` call `fix_velocity(2*maxspeed)` |
| 4 | `ts.rs::ts_wall_jump_climb` | `vel.z = 309.838_65`; then `fix_velocity(2*maxspeed)` |
| 5 | `ts.rs::ts_dive` | ignore `WALLDIVE` (never set in 2.1 mode); after fixup `fix_velocity(2*maxspeed)` |
| 6 | new `ts.rs::fix_velocity(lim)` | `L = |v|3D; if L != 0 && lim < L { v.x *= lim/L; v.y *= lim/L }` (2.1 0x10057d10; float math, `_DAT_100cbd34 = lim/L` stored as float) |
| 7 | `mod.rs::jump` (l.1670-1720) | high jump: `dir = normalize(v)` (3D), `v.xy += 100*dir.xy` before `v.z = 400`. Normal jump: if `cmd.buttons & (IN_MOVELEFT|IN_MOVERIGHT)`: `dir = normalize(v)`, `v.xy += 100*dir.xy`, `fix_velocity(maxspeed)`, then `v.z = 236.64319` |
| 8 | `mod.rs::check_parameters` glide | unchanged if the port keeps 3.0 bit layout (server converts START→GLIDE). Only the server's bit names differ |
| 9 | `mod.rs::drop_punch_angle` | 2.1: no dead zeroing (optional, cosmetic) |
| 10 | `mod.rs` step sound | 2.1: `(int)(t / fuser1)` (truncation) without the 0.1 floor (inaudible difference; optional) |

Inputs the client already needs and has: `iuser4`, `fuser1`, `maxspeed` (now 170..310), `gravity`/`friction` (written by
stunts; values unchanged), `view_ofs`, physinfo (`mj` + the new mode key). `delta.lst` 2.1 vs 3.0 differs only in
`vuser1[1]` bits (16 vs 10), which is irrelevant here. No new networked fields are needed.

Server-only (no prediction impact): everything in §3 (stunt triggers, timers, slot limits, recover times, landing keys,
kick damage, BlockPlayer duration, slow-mo amounts/smoothing, speed-by-slots formula, default speed 310). The speed
reaches the client through `maxspeed`.

---

## 7. Open questions / unverified

* **CanDiveHigh armour rule** (2.1 0x1005b0b0): in game types other than 0/1 it requires `pev->armorvalue > 0`.
  The code is certain. It is unclear what game types 2/3 are in 2.1 (TSGameRules byte at 0x100ac8c0). Ask the gamerules agent.
* **Kung-fu attack table 2.1** (0x1004de10) is not fully decoded. Only clamps/thresholds are listed (§3.10).
* `CheckForBreakables` 2.1 (0x1005c680) is not diffed against 3.0 (dive-through-glass, kick delivery, knockback 235).
* "Super roll" (CHANGELOG): no specific code identified.
* "1.5 walljumping reinstated": in 2.1 both the stunt-key wall jump (kick back, "2.0 style") and the double-tap-jump wall
  climb exist. 3.0 has both too. Which one the CHANGELOG means by "1.5" is unverified. The strafe-jump boost (§2.4) is the
  only jump mechanic present in 2.1 and absent in 3.0.
* The 2.1 kill message "Stuntman style!" (0x1004f3c0, stunting kill or prone-sliding-in-slowmo kill) and the CHANGELOG "three
  frags for a stunt kill" belong to scoring.
* The 2.1 `GoSlow` sets `fuser1 = 0` for spectators. The port can keep 1.0.
