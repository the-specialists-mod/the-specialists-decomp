# Player movement, stunts, kung fu, slow motion (server)

Source: `server/` export of `ts_i386.so` (GCC 2.95). All addresses are **Ghidra addresses**
(`objdump` address + `0x10000`). "pev+0xNNN" is an `entvars_t` offset, and "pl+0xNNN" is a raw
`CBasePlayer` offset (`this->field_0xNNN`). Virtual calls are resolved with the rule
`decompiler vtable[N]` = `vtables.tsv` slot `N-2` (byte offset `+0x10` = index 4 = slot 2).
**(inferred)** marks guesses. Everything else is read directly from code or disassembly.

Contents:

1. [pm_shared in TS](#1-pm_shared-in-ts)
2. [Stunts (`CTSStunt`)](#2-stunts-ctsstunt)
3. [Animation selection (`CTSAnimation`)](#3-animation-selection-ctsanimation)
4. [Kung fu and close combat](#4-kung-fu-and-close-combat)
5. [Slow motion](#5-slow-motion)
6. [Super jump, power-ups, health, armor, damage, falling](#6-super-jump-power-ups-health-armor-damage-falling)
7. [CBasePlayer TS methods and the think flow](#7-cbaseplayer-ts-methods-and-the-think-flow)
8. [CBasePlayer member offsets](#8-cbaseplayer-member-offsets)
9. [Rust recreation notes](#9-rust-recreation-notes)

---

## 1. pm_shared in TS

All movement code is in `decomp/global_000f1168.c` (0xf8f78–0x1012dd). The client (`client.dll`)
has a byte-for-byte equivalent copy for prediction. For example `FUN_1002e330` = `PM_PlayerMove`,
`FUN_10053660` = `TSHandle`, `FUN_10053780` = `PM_Jump`, `FUN_10053a70` = `PM_CheckParamters`, and
`FUN_10053d70` = `PM_Duck`. They use the same constants (0x43c80000 = 400 high jump, 0x436ca4a8 =
236.64 jump, `(maxspeed-210)*0.008333*0.5+0.6` accel, and the 0.3/0.75 glide gravity).
The `assert` strings still say `../pm_shared/pm_shared.c`.

### 1.1 Function inventory vs SDK `pm_shared.c`

| Status | Functions |
|---|---|
| **New (TS)** | `FixVelocity` 0xf8fc4 (empty), `PseudoClimb` 0xf8fc8, `TSStandUp` 0xf91fc, `TSGoDuck` 0xf93a8, `TSWallJump` 0xf9444, `TSWallJumpClimb` 0xf94e0, `TSDive` 0xf9534, `TSHandle` 0xf96a0, `CanJumpHigh` 0xf97cc (unreferenced), `PM_GetAccelBySpeed` 0xfdcc4, `PM_GetInfo` 0x10123c (SDK `PM_GetVisEntInfo`) |
| **Modified** | `PM_PlayerMove` 0x1008d8, `PM_CheckParamters` 0xf9c94, `PM_Jump` 0xf9944, `PM_Duck` 0xf9f7c, `PM_WalkMove` 0xfa26c, `PM_Accelerate` 0xfdd08, `PM_Friction` 0xfde08, `PM_CheckFalling` 0x1003d0, `PM_DropPunchAngle` 0x100760, `PM_UpdateStepSound` 0xfcc20, `PM_LadderMove` 0xff654 |
| **Unchanged** (same constants and structure; not diffed instruction by instruction) | `PM_AirAccelerate` (30 cap), `PM_AirMove`, `PM_AddCorrectGravity`, `PM_FixupGravityVelocity`, `PM_AddGravity`, `PM_CheckVelocity`, `PM_ClipVelocity`, `PM_FlyMove`, `PM_WaterMove`, `PM_CheckWater`, `PM_CatagorizePosition` (180 u/s cut, 0.7 normal), `PM_CheckStuck` + stuck table, `PM_UnDuck`, `PM_FixPlayerCrouchStuck`, `PM_SplineFraction`, `PM_Ladder`, `PM_WaterJump`, `PM_CheckWaterJump` (24/8/2000/225), `PM_PreventMegaBunnyJumping` (1.7, 0.65), `PM_Physics_Toss`, `PM_NoClip`, `PM_SpectatorMove`, `GetChaseOrigin`, `PM_ReduceTimers`, `PM_CalcRoll`, texture/step-sound helpers, `PM_PlayWaterSounds`, `PM_Move`, `PM_Init`, debug `PM_Draw*`/`PM_ParticleLine`/`PM_ViewEntity` |

### 1.2 Modifications in detail

**`PM_PlayerMove` (0x1008d8)**

* Time scale: `frametime = msec*0.001; frametime = (fuser1 < 0.1) ? 0 : frametime*fuser1`
  (verified in disassembly at objdump 0xf0928). `fuser1` is the per-player slow-motion factor (§5).
  A factor below 0.1 freezes movement.
* `PM_ReduceTimers` still uses the **unscaled** `cmd.msec`. Duck time, step timer, swim time, and
  `waterjumptime` run in real time.
* Stuck handling: SDK does `if (PM_CheckStuck()) { PM_Duck(); if (PM_CheckStuck()) return; }`.
  TS returns on the first stuck result, with no duck retry.
* **`TSHandle()` is inserted** after `PM_Ladder` and before `PM_UpdateStepSound`/`PM_Duck`.
* Everything else matches the SDK: the ladder, the walk/water/fly cases, and `PM_CheckFalling`.

**`TSHandle` (0xf96a0)**: the stunt hook. It consumes the `iuser4` bits that the server's
`CTSStunt` sets (bit table in §1.3).

```c
if ((cmd.buttons & IN_JUMP) && onground == -1) PseudoClimb();
if (iuser4 & 0x1)  { fwd*=0.5; side*=0.5; up*=0.5; }        // "recovering"
if (iuser4 & 0x20) { fwd =0;   side*=0.3; up*=0.3; }        // lying after dive/slide
if (iuser4 & 0x1c0)  TSDive();
if (iuser4 & 0x7000) TSWallJump();
if (iuser4 & 0x8000) TSWallJumpClimb();
if (iuser4 & 0x4) TSGoDuck();    if (iuser4 & 0x8) TSStandUp();
```

| Function | Effect (exact) |
|---|---|
| `TSDive` 0xf9534 | Choose `(divespeed, h)`: bit 0x100 → (90, 25), else bit 0x40 → (90, 50), else (bit 0x80) → (100, 10). Clear the chosen bit. `dir = normalize(velocity)` (3D). If bit 0x800000 (wall dive), `dir = forward*3` instead. `vel.xy += divespeed*dir.xy`; `vel.z = sqrt(h*1600)` (= `sqrt(2*800*h)`: 200, 282.84, 126.49). Then `onground=-1`, clear 0x800000, `PM_FixupGravityVelocity()`. |
| `TSWallJump` 0xf9444 | `onground=-1`. If bit 0x1000: `vel.xy = -forward.xy*210`, `vel.z = 236.64319`, clear 0x1000. Half-gravity fixup. |
| `TSWallJumpClimb` 0xf94e0 | `onground=-1`. If bit 0x8000: `vel.z = 334.664` (= `sqrt(2*800*70)`), clear 0x8000. Half-gravity fixup. |
| `TSGoDuck` 0xf93a8 | If `usehull != 1`: `usehull=1`, `flags |= FL_DUCKING`. On ground: `origin -= (mins[1]-mins[0])`, `PM_FixPlayerCrouchStuck(1)`, `PM_CatagorizePosition()`. Instant duck, no 0.4 s transition. |
| `TSStandUp` 0xf91fc | Copy of `PM_UnDuck` with view height 28. It keeps the duck hull (view 16) while `IN_DUCK` is held. Clears bit 0x8. **No server code sets 0x8** (inferred dead code). Standing up after a stunt happens through `PM_Duck`→`PM_UnDuck` once bit 0x4 is cleared. |
| `PseudoClimb` 0xf8fc8 | In air, `IN_JUMP` held, `-60 ≤ pitch ≤ 60`: point-hull trace 64 u forward at eye height (+40 if `pitch < -30`). If clear, trace 32 u forward at feet height. If that is blocked and `|vel| < 0.5*maxspeed`, then `vel.z += frametime*1600`, half-gravity fixup. This is a ledge "mantle" assist. |
| `CanJumpHigh` 0xf97cc | Trace 128 u along velocity (duck hull). If blocked and the point 164 u out is not solid or sky, return 1. No callers (dead). |

**`PM_CheckParamters` (0xf9c94)**

| SDK | TS |
|---|---|
| `IN_USE` on ground → `maxspeed *= 1/3` | **removed** |
| Clamp `cmd` to `maxspeed` always | Clamp only if `iuser1 > 0` (spectator). Verified in disassembly: `cmpl $0,0x1fc(...)`/`jle`. Players are clamped later by `PM_WalkMove`/`PM_AirMove`. |
| Zero `cmd` if `FL_FROZEN`/`FL_ONTRAIN`/dead | Also zero it if `iuser4 & 0x10c10` (dive, flips, wall jump) |
| — | If `iuser4 & 0x100000` (super-jump glide): `fwd*=0.5, side*=0.25, up*=0.25`; `gravity = IN_JUMP ? (vel.z >= 0 ? 0.3 : 0.75) : 1.0` |
| View angles from `cmd` unless dead, else `oldangles` | From `cmd` unless dead **or `iuser4 & 0x2`** (set by `Killed`). The yaw is cached in `OldrotArray[player_index]` (32 floats) and restored when frozen. |

**`PM_Jump` (0xf9944)**

* Returns early (**without** setting `oldbuttons |= IN_JUMP`, so a held jump fires as soon as
  the state clears) if `iuser4 & (0x4|0x10|0x20|0x400|0x800|0x10000|0x20000)`.
* The `tfc` and `slj` long-jump code is removed.
* Normal jump: `vel.z = 236.64319` = `sqrt(2*800*35)`. That is a **35-unit jump**; the SDK's is 45 (268.33).
* **High jump**: physinfo `"mj" == "1"` (super-jump power-up) **and** (`bInDuck` or
  `FL_DUCKING`) **and** `IN_DUCK` held **and** `flDuckTime > 0` → `vel.z = 400`,
  `iuser4 |= 0x200000`.
* Water jump: same as SDK (100/80/50, wade sounds).

**`PM_Duck` (0xf9f7c)**: SDK logic. Differences:

* It does nothing while `iuser4 & (0x4|0x8|0x10|0x20|0x400|0x800|0x10000|0x20000)`. The stunt
  code owns the hull then.
* Duck view height is **16** (SDK `VEC_DUCK_VIEW` 12). The transition is
  `view_z = (1-f)*28 + (16-18)*f`, with `f = PM_SplineFraction(1-duckTime/1000, 2.5)`.
  `TIME_TO_DUCK` is still 0.4 (threshold 0.6).

**`PM_WalkMove` (0xfa26c)**: `if (cmd.forwardmove < 0) fmove *= 0.8`. Backpedalling is 80 % speed.

**`PM_Accelerate` (0xfdd08)** + **`PM_GetAccelBySpeed` (0xfdcc4)**

```
accelspeed = accel * frametime * wishspeed * pmove->friction
if (!(iuser4 & 0x20) && !(flags & FL_DUCKING))
    accelspeed *= (maxspeed >= 330) ? 1.1 : (maxspeed - 210) * (1/120) * 0.5 + 0.6
```

The factor runs from 0.6 at 210 u/s to 1.1 at 330 u/s. `maxspeed` comes from the slot weight
(§6.4), so lighter loadouts accelerate faster.

**`PM_Friction` (0xfde08)**: `drop = control * friction * pmove->friction * 0.75 * frametime`.
The extra **×0.75** constant was verified in disassembly (`fmuls` of 0.75 at objdump 0xedf2f).
Edge friction is unchanged.

**`PM_CheckFalling` (0x1003d0)**: `PLAYER_MAX_SAFE_FALL_SPEED` = **680** (SDK 580). The
`fallpain3` sound plays above 680, and volume 0.85 applies above 340. The punch threshold stays 350
and the bounce threshold stays 200. Damage is applied on the server in `PostThink` (§6.6).

**`PM_DropPunchAngle` (0x100760)**: `len -= (10 + 0.5*len) * frametime * fuser1`. Note the
double time scaling: `frametime` is already scaled. If dead, the punch is zeroed.

**`PM_UpdateStepSound` (0xfcc20)**: after the SDK timer computation,
`flTimeStepSound = round(flTimeStepSound / max(fuser1, 0.1))`. Footsteps get sparser in slow motion.

**`PM_LadderMove` (0xff654)**: always 200 u/s. The SDK's `min(200, maxspeed)` clamp and its
×0.333 duck multiplier are removed. Jump-off is still `normal*270`.

### 1.3 playermove user fields

| Field | Use |
|---|---|
| `iuser1`, `iuser2`, `iuser3` | SDK spectator mode/target (`PM_SpectatorMove`). `iuser3 != 0` forces unduck in `PM_Duck` (SDK). |
| `iuser4` | **TS stunt state bitfield**, below. Sent in `clientdata_t` and `entity_state_t` (`global_000ab05c.c` lines 1973/1999/2433). |
| `fuser1` | **Per-player time scale** (1.0 normal). Sent in clientdata (line 2432). |
| `physinfo "mj"` | `"1"` enables the high jump (super-jump power-up or map flag). Also `"slj"="0"`, `"hl"="1"` (Spawn). |
| `fuser2..4`, `vuser1..4` | Not used by the player. `clientdata.vuser3[0]` is zeroed. |

**`pev->iuser4` bits** (writer → reader):

| Bit | Name (inferred) | Set by | Effect |
|---|---|---|---|
| 0x1 | RECOVER | `GoRoll`, `Landing` (roll-out), `HandleWheel`, `HandleSlide` get-up, `BlockPlayer`, super-jump landing | `TSHandle`: cmd ×0.5. Cleared when the stunt recover timer or `pl+0x4dc` expires. |
| 0x2 | DEAD_LOCK | `CBasePlayer::Killed` (sets `iuser4 = 2`) | PM keeps the cached yaw |
| 0x4 | GO_DUCK | every stunt start | `TSGoDuck` (duck hull) and blocks `PM_Duck`/`PM_Jump` |
| 0x8 | STAND_UP | (nothing) | `TSStandUp` |
| 0x10 | DIVING | `GoDive` | Zero `cmd`, block jump/duck, ×0.7 damage taken |
| 0x20 | PRONE | `Landing` (no key held), `HandleWheel` (low flip), `GoBulletTime` | `fwd=0, side*0.3`; no accel factor; `TSState=2` |
| 0x40 / 0x100 / 0x80 | DIVE_HIGH / DIVE_MED / DIVE_LOW impulse | `GoDive`, `GoWheel` | One-shot `TSDive` impulse |
| 0x200 | HAS_KEVLAR | `AddItem` (item 0x20) | buy logic |
| 0x400 | FLIP_HIGH | `GoWheel` | zero cmd, block jump/duck, ×0.7 dmg |
| 0x800 | FLIP_LOW (cartwheel) | `GoWheel` | same |
| 0x1000 | WALLJUMP_IMPULSE | `GoWallJump` | one-shot `TSWallJump` |
| 0x2000, 0x4000 | — | none | in mask 0x7000 only |
| 0x8000 | WALLCLIMB_IMPULSE | `GoWallClimb` | one-shot `TSWallJumpClimb` |
| 0x10000 | WALLJUMPING | `GoWallJump` | zero cmd, ×0.7 dmg |
| 0x20000 | WALLCLIMBING | `GoWallClimb` | blocks jump/duck |
| 0x40000 | ROLLING | `GoRoll`, `Landing` | cleared by the recover timer |
| 0x80000 | FREEZE_ANGLES | (cleared only) | `PostThink`: `pev->angles = pl+0x4e0` |
| 0x100000 | SUPERJUMP_GLIDE | `CTSStunt::Play` from 0x200000 | glide gravity, cmd scale. Landing → shake/roll. |
| 0x200000 | SUPERJUMP_START | `PM_Jump` high jump | `Play` converts it to 0x100000 and plays anim 0x39 plus `airwheel.wav` |
| 0x400000 | NO_VIEW | `PreThink`, when `view_ofs == 0` | client hint (inferred) |
| 0x800000 | WALLDIVE | `HandleStunt`/`HandleWallClimb` | `TSDive` uses `forward*3` |

Masks used in code: `0x10c10` = "airborne stunt" (no cmd, ×0.7 dmg); `0x30c30`/`0x70c30` = "any
stunt" (no attack/block); `0x130c30` = no new roll/flip; `0xc30` = no new dive.

---

## 2. Stunts (`CTSStunt`)

`CTSStunt` is embedded at **pl+0x4f0** (0x44 bytes) and initialised by `CTSStunt::Init`
(0x99fbc). It is server-only. It runs in `CBasePlayer::PreThink` (`CTSStunt::Play`), and from
`CBasePlayer::Jump`/`Duck` (vtable slots 84/85). The motion it starts is applied in shared PM
through `iuser4`.

### 2.1 CTSStunt fields

| Off | Abs (pl+) | Type | Name (inferred) | Evidence |
|---|---|---|---|---|
| +0x00 | 0x4f0 | float | `m_flNextStunt` (cooldown, s) | sent ×10 in `NextStunt`. Gates `HandleStunt`/`GoWheel`. |
| +0x04 | 0x4f4 | float | `m_flRecover` (lock, s) | blocks stunts. When it expires `Play` clears bits 0x1/0x2/0x4/0x40000/0x80000. |
| +0x08 | 0x4f8 | float | `m_flCloseAttackCD` | `CloseAttack` sets 0.7. `CCombatAttack` writes its delay here. |
| +0x0c | 0x4fc | float | `m_flRollTapTime` | double-tap duck window (0.3) |
| +0x10 | 0x500 | float | `m_flWheelTapTime` | double-tap jump window (0.3) |
| +0x14 | 0x504 | float | `m_flClimbTapTime` | double-tap jump at a wall (0.3) |
| +0x18 | 0x508 | float | `m_flBreakableCheck` | -1 disables `CheckForBreakables` |
| +0x1c | 0x50c | int | (init -1) | |
| +0x20 | 0x510 | vec3 | `m_vecStuntDir` | read by `CTSAnimation` |
| +0x2c | 0x51c | bool | `m_bNotBackward` | `GetDirection() != 2` (anim) |
| +0x30 | 0x520 | float | `m_flProneLock` | blocks getting up (0.55 after bullet time) |
| +0x34 | 0x524 | float | `m_flDodgeUntil` | abs time. `TraceAttack` ×0.7 on bullets. |
| +0x38 | 0x528 | float | `m_flWallChain` | wall-stunt cooldown accumulator, reset on ground |
| +0x3c | 0x52c | int | `m_iWallClimbs` | count, reset on ground |
| +0x40 | 0x530 | CBasePlayer* | owner | |

All timers count down by `GiveSlowMul() * gpGlobals->frametime` in `Play` (0x9a014), so they run
in the player's slowed time. The `+0x04` timer is clamped to ≥ 0.001 while active.

### 2.2 Inputs

* **Stunt key = `+alt1` (`IN_ALT1` 0x4000)**. The client strings have `+alt1`, and the shipped
  configs bind `"+alt1"`. The trigger is `m_afButtonPressed & 0x4000` (pl+0x814).
* `m_afButtonPressed` = pl+0x814, computed at the top of `PreThink`:
  `pressed = button & (last ^ button)`, `released = (last^button) & ~button`, `last` = pl+0x810.
* **Stunt ability by free slot space** (pl+0x548 = `TSSpace`, start 81, max load 80).
  `CanDiveX = isTheOne(pl+0x7b9) || (81 - space) < N` with `SlotBonus()`=0:

| Check | 0x9a494 High | 0x9a4ec Medium | 0x9a544 Low |
|---|---|---|---|
| used slots `81-space` must be < | 42 | 52 | 62 |

  This matches CHANGELOG "stunt limits changed: 40 for high, 50 for medium, 60 for low".

### 2.3 State machine

```
              ┌────────── stunt key (pressed), speed<80, slowmul≤0.99 ──► BULLET_TIME (0x4|0x20)
GROUND/AIR ───┤ stunt key, speed≥80 (or wall dive) ───────────────────► DIVE (0x4|0x10|impulse)
              │ jump double-tap ≤0.3s ───────────────────────────────► FLIP (0x4|0x400|0x100) / CARTWHEEL (0x4|0x800|0x80)
              │ duck double-tap ≤0.3s, on ground, speed≥80 ───────────► ROLL (0x1|0x4|0x40000)
              │ stunt key at wall facing it (in air) ────────────────► WALLJUMP (0x4|0x1000|0x10000)
              └ jump double-tap at wall ─────────────────────────────► WALLCLIMB (0x4|0x8000|0x20000)
DIVE ─land─► keys (jump|duck|alt1) held? ─yes─► ROLL-OUT (0x1|0x40000, recover 0.5625)
                                          └no──► PRONE/SLIDE (0x20) ─jump|duck|alt1─► GET-UP (0x1, recover 0.75)
FLIP_HIGH ─land─► RECOVER (0x1, recover 0.375)     CARTWHEEL ─land─► PRONE (0x20)
WALLJUMP/WALLCLIMB ─land─► recover 0.2625;  WALLCLIMB + stunt key in air ─► WALLJUMP or WALL DIVE
```

**`CTSStunt::Play` (0x9a014)**, every PreThink:

1. Decrement timers (+0, +4, +8, +0x30).
2. If alive and not spectating:
   * If 0x200000 is set: set 0x100000, clear 0x200000, play anim 0x39 and `player/airwheel.wav`.
   * On ground: reset +0x38, +0x14, +0x3c.
3. If not on a ladder and not underwater (`waterlevel != 3`):
   * If `recover != 0` and (`recover < 0.01` or the sequence finished, pl+0x78): clear
     0x40000/0x80000/0x4/0x1/0x2. Set `recover = 0`, `pl+0x4dc = 0`, `friction = 1`, and
     `view_ofs = (0,0, FL_DUCKING ? 16 : 28)`.
   * Then dispatch: 0x10 → `HandleDive`, 0x20 → `HandleSlide`, 0xc00 → `HandleWheel`,
     0x10000 → `HandleWallJump`, 0x20000 → `HandleWallClimb`, `button & (IN_JUMP|IN_ALT1)` → `HandleStunt`.
4. Else (ladder/underwater): clear 0x100000. If any of `0x70c31` is set: clear all stunt bits, set
   view 28, friction 1, gravity 1, recover 0, and play anim 1.

**`HandleStunt` (0x9b000)**: requires `nextStunt ≤ 0`, `recover ≤ 0`, and no bits in `0xc30`.
It clears the close-combat window (pl+0x79c/0x7a0/0x7a4).

* `IN_JUMP` held → `CheckForWallClimb` → `GoWallClimb`.
* Else if the stunt key was pressed → `CheckForWallJump` → `GoWallJump`. Else, if
  `CheckForWallDive` passes, set 0x800000 and call `GoDive`.
* Otherwise it requires the stunt key pressed and no bits in `0x130000`. In the air it also
  requires `vel.z ≥ -680` and `time - lastGroundTime(pl+0xb88) ≤ 0.7 / slowmul` ("coyote time").
  Then horizontal speed `< 80` → `GoBulletTime`, else `GoDive`.

### 2.4 Stunt parameters

Common to every start: `view_ofs = 0` (the hull drops to duck through bit 0x4), the
`gmsgTSNextStunt` byte = `round(nextStunt*10)`, and `TSMBlur(entindex, 2)` if
`RandomLong(0,10) + 10*slowmul > T`.

| Stunt | Function | Trigger / conditions | iuser4 | Velocity (PM) | gravity / friction | Timers | Anim id | Sound | Blur T |
|---|---|---|---|---|---|---|---|---|---|
| Dive high | `GoDive` 0x9b1a0 | pitch `v_angle.x < -10` (looking up) and CanDiveHigh | +0x40, 0x4, 0x10 | xy += 90·dir, z = 282.84 | g 0.75 | next = `NextDive()` = 0 | 0x28 | `player/dive.wav` | 8 |
| Dive medium | `GoDive` | pitch ≤ 10 and CanDiveMedium | +0x100 | xy += 90·dir, z = 200 | g 0.75 | 0 | 0x28 | dive | 8 |
| Dive low | `GoDive` | otherwise; CanDiveLow | +0x80 | xy += 100·dir, z = 126.49 | g 0.75, f 0.25 | 0 | 0x28 | dive | 8 |
| Dive (too heavy) | `GoDive` | not CanDiveLow | +0x80 | as low | g 1.0, f 0.9 | 0 | 0x28 | dive | 8 |
| Wall dive | `HandleStunt` → `GoDive` | `CheckForWallDive`: in air, wall within 48 u **behind**, `|n.z|<0.5`, `vel.z ≥ -370` | +0x800000 | dir = forward·3 → xy += 270/300 | as dive | | 0x28 | | |
| Bullet time | `GoBulletTime` 0x9a5b4 | speed < 80 **and `GiveSlowMul() ≤ 0.99`** (only in slow motion) | 0x4, 0x20 | none | | next 0.55, proneLock 0.55, dodge until t+0.55 | 0x36 `bullettime` | `land.wav` | always |
| Flip (back/high) | `GoWheel` 0x9c9bc | 2nd jump press within 0.3 s; CanDiveHigh; dir = back (speed<80 → always back) or pitch < -10 | 0x4, 0x400, 0x100 | xy += 90·dir, z = 200 | g 0.75 | next 0 | 0x31 `wheel_{l,r,f,b}` | `airwheel.wav` | 7 |
| Backflip kick | `GoWheel` | flip with dir 3 | | | | `pl+0x79c = 0.3`, `pl+0x7a0 = 15` (30 with Kung Fu), type 0 | | | |
| Cartwheel (low) | `GoWheel` | not back; CanDiveLow | 0x4, 0x800, 0x80 | xy += 100·dir, z = 126.49 | g 0.75, f 0.25 if forward | | 0x32 `lowwheel_{f,l,r}` | airwheel | 7 |
| Roll | `GoRoll` 0x9cfe8 | duck double-tap ≤ 0.3 s; horizontal speed ≥ 80; ground (or armed window) | 0x1, 0x4, 0x40000 | none (momentum) | f 0.3 | recover 0.75 | 0x2f `roll_{l,r,f,b}` | `land.wav` or texture step on super-jump landing | 9 |
| Wall jump | `GoWallJump` 0x9a7d4 | stunt key; CanDiveHigh; wall within 48 u along `v_forward`, `|n.z|<0.5`, `vel.z ≥ -370` | 0x4, 0x1000, 0x10000 | xy = -fwd·210, z = 236.64 | g 0.75 | chain += 0.35; next = max(0.5, chain) | 0x37 | airwheel | 5 |
| Wall climb | `GoWallClimb` 0x9aa1c | `IN_JUMP` double-tap ≤ 0.3 s; non-player wall within 54 u forward, `|n.z|<0.5`, `vel.z ≥ -370`. While already climbing, no tap needed. | 0x4, 0x8000, 0x20000 | z = 334.66 | g 1.0 | chain += 0.3/0.5/0.75 (high/med/low ability); next = max(0.5, chain); climbs++ | 0x38 `walljump_climb` | airwheel | |
| Jump kick | `CloseAttack` 0x9c630 | any jump press (first call in `CBasePlayer::Jump`), gun held (not kung fu), not ducking, no stunt bits `0x30c30` | | | | CD 0.7; next attack ≥ +0.35 | 10/13/14 random | `closecombat.wav` | |

`GetDirection(dir, angles, 0.6, 0.3)` (0x6b008) uses the yaw-only basis. It returns
**0 = left** if `dot(right) < -0.6`, **1 = right** if `> 0.6`, otherwise **3 = back** if
`dot(forward) < -0.3`, else **2 = forward**.

**Landing handlers** (each fires once `FL_ONGROUND` is set, and sets `gravity = 1` and plays `land.wav`):

| Handler | Condition | Result |
|---|---|---|
| `HandleDive` 0x9b7e4 → `Landing` 0x9bbf4, then anim 2 | 0x10 and no `IN_JUMP|IN_DUCK|IN_ALT1` | clear 0x10, set 0x20 (prone slide). `dir`→anim direction. |
| | keys held | roll-out: clear 0x10, set 0x40000\|0x1, friction 0.5, recover 0.5625, anim 0x2e `dive_{l,r,f,b}_end` |
| `HandleSlide` 0x9b9f8 (each frame while 0x20) | `IN_BACK` | friction 1.0 (brake) |
| | `IN_JUMP|IN_DUCK|IN_ALT1` and proneLock < 0.01 | get up: set 0x1, clear 0x20, view 28, recover 0.75, force anim (pl+0x78 = 1), anim 0x29, friction 1 |
| | `IN_MOVELEFT` / `IN_MOVERIGHT` | sideways roll on the ground: anim 0x2a / 0x2b, dir = forward, friction 1 |
| | else | anim 3 (lie) |
| `HandleWheel` 0x9b820 | 0x800 (cartwheel) | clear 0x800, set 0x20 (prone), reverse dir |
| | 0x400 (flip) | clear 0x400, set 0x1, friction 0.25, recover 0.375 |
| `HandleWallJump` 0x9b4fc | 0x10000 | clear, friction 0.5, recover 0.2625, `nextStunt = 0` if < 0.01 |
| `HandleWallClimb` 0x9b644 | in air + stunt key | wall jump, or wall dive (0x800000) |
| | ground | clear 0x20000, friction 0.5, recover 0.2625 |

**`CheckForBreakables` (0x9bd9c)**, every PreThink (after the observer check):

* If on ground with no attack window: clear `pl+0x798` (last victim).
* Needs `|vel| ≥ 64` or an attack window (`pl+0x79c`).
* Hull 3 (head hull) trace, 64 u along the velocity direction, or ±32 u along `v_forward`
  during an attack window (sign of `pl+0x7a0`).
* Victim needs `takedamage`, not flag 0x2000000, not `EF_NODRAW`, and not the last victim.
* No attack window: players are skipped; other entities take `|vel|` damage (`|vel|*0.1` when the
  diver is alive, as written; inferred inverted). This is the "dive through glass" path.
* Attack window: damage = `|pl+0x7a0|`, after which `pl+0x7a0 *= 0.5` (zero below 5).
  * Players go through team check, then block check by weapon type `pl+0x7a4`
    (0 `VictimKungfuHold`, 1 `VictimKnifeHold`, 2 `VictimKatanaHold`).
  * Then disarm (`DropWeapon(-2, dmg)` unless spawn-protected) and knockback if dmg > 30:
    `victim.vel += |attacker.vel| * dir`, `victim.vel.z = 235`.
  * Damage bits `DMG_CLUB|DMG_NEVERGIB` (0x1080), plus 0x4000000 for kung fu (type 0).

---

## 3. Animation selection (`CTSAnimation`)

`CTSAnimation` lives at **pl+0x28c**, ending around pl+0x474. Entry point
`CTSAnimation::Animate(CBasePlayer*, int id)` (0x6b470, 7218 bytes). The SDK
`CBasePlayer::SetAnimation` (0xd8f50) is a 21-byte stub.

### 3.1 Fields

| Off | Name (inferred) | Notes |
|---|---|---|
| +0x00 | current anim id | init -1 |
| +0x04 | ducking-anim latch | |
| +0x08 | float hold timer (3.0 after a roll), counts down in slowed time | `UpdateTimers` 0x6b37c |
| +0x0c | float "recently shot" timer: ≥0.01 → `aim_`/`combat_idle` instead of `idle_` | |
| +0x10, +0x1dc, +0x1e0 | float timers | `BulletDance` sets +0x1dc = 0.15 |
| +0x14 | last direction index (avoids restarting the same blend) | |
| +0x1c…+0x1cc | 16-byte name tables, indexed by `GetDirection` (L,R,F,B) | `jump_left_`, `jump_right_`, `jump_forward_`×2 (+0x1c); `dive_l_`… (+0x5c); `slide_l_`… (+0x9c); `slide_*_end` (+0xdc); `dive_*_end` (+0x11c); `roll_l/r/f/b` (+0x15c); `roll_l/r` + `roll_f_high` (+0x19c, id 0x30) |
| +0x1e4 | bullet-dance enabled | `EnableBulletDance` when hit for ≤ 80 dmg while slower than 80 u/s, not in the legs |
| +0x1e8 | byte | |

### 3.2 Torso (`sequence`) vs legs (`gaitsequence`)

`SetAnim(name, flags, frame)` (0x6d7e4) does `LookupSequence(name)` (missing → 0) and skips the
call if the sequence is already playing (unless flag 0x80). Flags:

| Bit | Meaning |
|---|---|
| 0x10 | clear `EF_NOINTERP` (0x20), otherwise set it |
| 0x04 | `gaitsequence = 0` (full-body anim) |
| 0x01 | set **only** `gaitsequence` |
| 0x20 | set `frame` = arg |
| 0x100 | keep `frame` |

Typical flag values: 0x94 = full-body stunt, 0x194 = full-body keep-frame direction blend,
0x92/0x14 = torso only.

**Animation ids** (calls to `Animate`):

| Id | Meaning | Sequence names |
|---|---|---|
| 0, 8, 9 | fire | `shoot_<ext>`, `crouch_shoot_<ext>`; prone: `slide_f_`/`slide_b_left/right` + `_shoot` |
| 1, 6 | idle/moving refresh (PostThink: 1 moving or landed, 6 stopped) | `aim_<ext>`/`idle_<ext>`, `crouch_aim_`/`duck_idle_` |
| 2 | in-air dive direction blend | `dive_{l,r,f,b}_<ext>` (`BlendAnimationsByDir`, 0.6/0.3) |
| 3 | lying/sliding | `slide_*` (`BlendAnimationsForSlide`) |
| 4 | jump | `standard_jump`, or `jump_{left,right,forward}_<ext>` when airborne > 96 u/s |
| 5 | go duck | `goduck` |
| 7 | death | `forward_die`, `die_spinback`, `leg_die`, `die_back`, `die_spin`, `normal_die1..3` |
| 10–39, 0x3a | close combat (`IsInCloseCombat`: `id-10 < 30` or 0x3a) | `HandleCloseCombat` 0x6d8d0: `punchleft/right`, `uppercut`, `sidekick`, `backkick`, `circkick*`, `airkick2`, `duckkick`, `kungfu_block`, `knife*`, `katana_*`, `stock_`, `superjump_land` |
| 0x26 | kung fu block | `kungfu_block` |
| 0x28 | dive start | |
| 0x29 | get up | |
| 0x2a / 0x2b | prone side roll L/R | `slide_b_left/right` |
| 0x2e | dive landing roll | `dive_*_end` (+0x11c) |
| 0x2f | roll | `roll_l/r/f/b` (+0x15c); sets hold timer 3.0 |
| 0x30 | high roll | table +0x19c |
| 0x31 | flip | `wheel_l/r/f/b` |
| 0x32 | cartwheel | `lowwheel_f/l/r` |
| 0x33 / 0x34 | reload / draw (torso) | `relo_<ext2>` / `draw_<ext2>` (only on ground, not prone) |
| 0x35 | grenade throw | `grenade` |
| 0x36 | bullet time | `bullettime` |
| 0x37 | wall jump | `walljump_end` |
| 0x38 | wall climb | `walljump_climb` |
| 0x39 | super-jump air | `morfy_jump` / `morfy_jump_guns` |

`<ext>` is the weapon anim extension at pl+0x478 (SDK `m_szAnimExtention`). `<ext2>` is a
second set at pl+0xb58, used for `akimbo`, `one`/`two` (`two` + "2") and so on.

**Priority.** Before switching, `Animate` checks the *current* id. Each stunt animation (3, 4, 0x28–0x39)
refuses to be replaced by a lower-priority id until `m_fSequenceFinished` (pl+0x78, inferred)
is set, the player leaves the ground state, or stunt bit 0x4 clears.

**Gait (legs).** This runs at the end of `Animate` for every id except
4/5/7/0x29/0x2e/0x2f/0x30/0x36/0x39, and only when not in a close-combat gait and when
`iuser4 & 0x30c30 == 0`:

```
if (flags & FL_DUCKING)        gait = speed==0 ? "crouch_idle" : "crawl"
else if (speed > 180)          gait = "run2"
else if (speed > 0)            gait = "walk2"
else gait = ext2 ? "idle_"+ext2 : (ext ? ext : (shotTimer ? "combat_idle" : "combat_idle_low"))
pev->gaitsequence = LookupSequence(gait)
```

Here `speed` is horizontal velocity. When there is no weapon extension and not shooting,
`sequence = gaitsequence` (full body). The animation `framerate` is overwritten every PreThink
with `GiveSlowMul()` (§5).

---

## 4. Kung fu and close combat

### 4.1 Melee bar ("KFu power", pl+0x774, 0–100)

| Item | Formula / value | Where |
|---|---|---|
| Start | 100 | `TSInit` |
| Regen | if `< 100`: `+= 15*dt` (`dt = slowmul*frametime*(1.5 if double-firerate)`); while negative `+= dt` | `PreThink` |
| Spend | `UpdateMeleeBar(x)` 0x9650c: `bar -= x`. If the result is < 0.01, `bar = 0` and `m_flNextAttack(pl+0x12c) = 1.5` (exhaustion lockout). Sends `KFuPower` (char). | |
| Damage scale | `GetMeleeMultiplier()` 0x965d0 = `(max(bar,0)*0.5 + 50) / 100` (0.5 at empty, 1.0 at full) | `CTSGun::CCombatAttack` |
| Costs | block 33 (`CCombatBlock`), blocked attacker 33 (`VictimKungfuHold`), backflip 22.5, jump-kick `1.5*dmg` | |

### 4.2 `CBasePlayer::CloseCombatAttack` (0x95f88)

Signature: `(Vector start, Vector end, Vector dir, int hull, float dmg, int anim, bool disarm, bool playersOnly, bool knockback, bool teamCheck)`.

1. If `anim != -1`, call `Animate(anim)`. If `RandomLong(10,80) < dmg`, send `TSMBlur(ent, dmg>50 ? 2 : 1)`.
2. `CheckHull` (0x95e28): `UTIL_TraceLine` start→end. On a miss, `UTIL_TraceHull(hull)` and
   `FindHullIntersection` with a ±16 × ±16 box, z ±18 (hull 3) or ±36.
3. Victim filters: `takedamage`, not flag 0x2000000, not `EF_NODRAW`. Non-player with
   `playersOnly` → fail. Team check uses `friendlyfire` or `teamCheck`.
4. Player victim: `VictimKungfuHold` (block) → fail. If `disarm` and not spawn-protected:
   `DropWeapon(-2, dmg)`. If `knockback && dmg > 30`: `v.vel += |a.vel|*dir(a→v)`, `v.vel.z = 235`.
   Play `kungfuhit.wav`. `PunchScreen()` is an empty stub (0x95f70).
5. `TraceAttack(this->pev, dmg, dir, tr, DMG_CLUB|DMG_NEVERGIB|0x4000000)` + `ApplyMultiDamage`,
   with `glast_closecombat = 1` (the kill gets credited as a close-combat kill and can trigger the
   slow-motion point, §5.5).

### 4.3 Blocking

* `CTSGun::CCombatBlock` (0x85ebc). Requires next attack ready, no stunt bits `0x70c30`, and bar ≥ 0.01.
  * Kung fu (no gun): `pl+0x7a8 = 0.5` (block window).
  * Knife: `pl+0x7b0 = 0.5` (weapon type 10).
  * Katana: `pl+0x7ac = 0.5` (type 3) (inferred).
  * In all cases: anim 0x26, bar −33, weapon delay 0.5.
* `VictimKungfuHold(attacker, victim)` (0x76f50). The block succeeds when either:
  * the victim's block window (`0x7a8 > 0`) is open, or
  * the attacker is blocking while the victim is mid-kung-fu-attack (`0x79c > 0`, type 0).

  It then requires the victim's bar ≥ 0.1. Effects: `kungfuhit.wav`, both `0x7a0 = 0`, blocked
  side `m_flNextAttack = 0.5`, blocker 0.25, blocked side bar −33. It computes a facing vector but
  does not compare it, so **blocks are omnidirectional** as decompiled. A block absorbs the full
  damage (CHANGELOG).

### 4.4 Kung fu attack table (`CTSGun::CCombatAttack`, 0x86078, 3441 bytes)

Ghidra mangled the locals in this function, so the values below are base damages before scaling
(confidence medium):

* Final `dmg = base * GetMeleeMultiplier()`, ×2 with the Kung Fu power-up (pl+0x74e).
* Reach: `GetGunPosition` + `v_forward * (2 or 3)` units of hull trace, using hull 1 or 3
  (inferred from `(cond)*2+1`).
* A miss **arms a delayed hit**: `pl+0x79c = window`, `pl+0x7a0 = ±dmg`, `pl+0x7a4 = 0`. That
  hit lands through `CheckForBreakables` while the player keeps moving (flying kicks).

| Move | Condition | Base dmg | Delay (s) |
|---|---|---|---|
| any while stunting (`0x50c30`) | | 15 | 0.15 |
| Uppercut | `IN_ATTACK2`, on ground, ducking/`IN_DUCK` | 35 | 0.35 |
| Running kick (air, back dir) | speed-based | `clamp(speed*0.303, 15, 80)` | 0.3 |
| Flying kick | in air, speed > 270, `IN_DUCK`, `dot > 0.5` | `clamp(speed*0.1538, 15, 45)` | 0.25 |
| Combo 1–3 (ground punches) | weapon-anim state 0xf/10/0xe | 25 / 15 | 0.3 / 0.2 |
| Speed punch | | `clamp(speed*0.1, 15, 30)` | 0.25 |
| Air attack | not on ground | 25 | 0.15 |
| Others | | 30 / 20 / 10 | 0.15 / 0.15 / 0.1 |

After an attack, `BlockPlayer(delay*0.75)` sets iuser4 bit 0x1 (half speed) for that time, unless it
was already set. Cold-cock (pistol whip, `CTSGun::ColdCock` 0x81dd0 → `CBasePlayer::ColdCockAttack` 0x96610)
has a range of 35 u and rate 0.725 s (1.0875 alt).

---

## 5. Slow motion

### 5.1 Model

Time is **per entity**. `pev->fuser1` is the entity's current time scale. Three virtuals sit at
the top of `CBaseEntity`'s vtable:

| Slot | Byte off | `CBaseEntity` | `CBasePlayer` |
|---|---|---|---|
| 2 | +0x10 | `GiveSlowMul` 0xac5b4: `max(fuser1, 0.01)` | 0x92960: same |
| 3 | +0x14 | `GoSlow(float amt, char flag)` 0xac5e0: `fuser1 = amt` (instant) | 0x929d0: `target(pl+0x168) = iuser1 ? 1.0 : amt; display(pl+0x170) = amt; flag(pl+0x175) = flag` |
| 4 | +0x18 | `InSlow` 0xac5f4: `fuser1 != 1` | 0x9298c: `pl+0x168 != 1 || pl+0x170 != 1` |

`FixedSlowAmt(x) = max(x, 0.01)` (0x990bc) and `FixedSlowMul(x) = 1/FixedSlowAmt(x)` (0x990e4).

**Player smoothing**: `InterpolateSlowMotion(frametime, &pev->fuser1, target)` (0x9910c), called
every PreThink:

```c
d = target - *cur;
if (fabs(d) > 0.05) d *= min(frametime*7, 1);
*cur += d;               // exponential approach, ~7/s; snaps when within 0.05
```

### 5.2 What the time scale affects (player)

| System | How |
|---|---|
| Movement (shared PM) | `frametime *= fuser1` (zero if < 0.1). Gravity, accel, friction, and integration all slow down. Duck/step/swim timers are not scaled. Step-sound interval ÷ fuser1. Punch decay ×fuser1 a second time. |
| Animation | `PreThink`: `pev->framerate = GiveSlowMul()` every frame |
| Stunt timers | `CTSStunt::Play` and `CTSAnimation::UpdateTimers` use `slowmul*frametime` |
| Player timers | `PreThink` `dt = slowmul*frametime*(1.5 if double-firerate)` for 0x79c, 0x4dc, 0x4ec, 0x7a8, 0x7ac, 0x7b0, 0x7b4 (×5), and bar regen |
| Weapons | `PostThink`: for every item in the 6 slots (pl+0x9f8…), timers at weapon +0x9c (min −1), +0xa0, +0xa4, +0xa8 (min −0.001; 1000 = disabled) and weapon `pev->fuser1` decrease by `dt`. So do `m_flNextAttack` (pl+0x12c), pl+0xb84, and pl+0xb7c. TS weapons use **decrementing relative timers** everywhere. |
| Coyote time | stunt in air allowed for `0.7/slowmul` s after leaving ground |
| Prediction | `clientdata.fuser1 = pev->fuser1`. `weapon_data.fuser1` = weapon `pev->fuser1` (a timer, not a scale) |
| HUD | `UpdateClientData` sends `TSSlowMo` (coord, `amount*100`) when it changes. The amount is 0.225 under an active slow pause, 0.35 under an active slow motion, else `pl+0x170`. It also sends `TSBTime` (byte `pl+0x175`). |

Grenades (`"grenade"`), thrown knives (`"knife"`, 0x1077e5), `WorldGun`s, physics objects
(`CTSPhysicObject` scales gravity by `fuser1²`), shrapnel, and breakable gibs inherit
`fuser1` and use `GiveSlowMul` in their thinks.

### 5.3 Power-up slow motion (per player, line of sight)

`UsePowerUp` (0x95980, the `usepowerup` client command) activates a held power-up:
* active = held, `endTime = now + duration(pl+0x730)`
* sends `PwUpTime` and `TSMBlur(ent, 1)` for slow-mo or `(ent, 2)` for slow pause
* refused with "You can't use Slow-Motion now!" while TSGameRules+0x18 is set (global slow, inferred)

`UpdatePowerUpState` (0x95748), every PreThink, sets the activator's parameters:

| Power-up (bit) | Self `pl+0x17c` | Others `pl+0x180` | Flag `pl+0x175` |
|---|---|---|---|
| Slow motion (0x1) | 0.6 | 0.35 | 0 |
| Slow pause (0x8) | 0.8 | 0.225 | 1 (bullet-time HUD) |

On expiry or death it calls `DeactivateSlowMotionFlow`. In non-team modes (`TSGameRules < 2`) a
dead player's unused slow-mo (with more than 2 s left) or any other held power-up drops as an entity.

`SlowMotionFlow` (0x96bb0), every 0.5 s (`pl+0x178`):

* For each other player that is not already slowed by an equal activator: traceline eye→eye. If
  visible, record them in `pl+0x184[idx]`.
  * If the target is itself an activator with a *smaller* (stronger) `others` value, abort: the
    stronger slow wins.
* Then `this->GoSlow(self, flag)`, and `GoSlow(others, 0)` on every recorded player (copying the
  flag) and on every visible `grenade`, `knife`, and `WorldGun` (up to 32, `pl+0x208[]`, count `pl+0x288`).
* Players stay slowed until deactivation; the list is only appended to.
* `DeactivateSlowMotionFlow` (0x96a9c): self `GoSlow(1,0)`, and every recorded entity back to 1.0.

### 5.4 Global slow

* `globalslow <percent>` server command (`cmd_globalslow` 0xc5580): `amt = arg*0.01`, clamped to
  [0, 2]. Values in 0.999–1.001 become 0, and (0, 0.01) becomes 0.01. Then
  `CTSGameRules::SetGlobalSlowMotion(amt, 0)` (0x7961c): stores amt/until at TSGameRules
  +0x564/+0x568.
* `CTSGameRules::GlobalSlowMotion2(amt, flag)` (0x79720), every 0.5 s: `GoSlow(amt)` on every
  player, grenade, knife, and WorldGun with `!InSlow()`. `amt = 0` resets everyone to 1.0.
* `ts_slowmotion` brush (`CTSSlowMotion`, 0x108 bytes):
  * Keyvalues `duration` (+0xf8) and `slowamt` (+0xfc).
  * Spawnflags: 1 start on, 2 global (uses `GlobalSlowMotion2`), 4 bullet-time flag.
  * Touching players get `GoSlow(slowamt, flag)`. `CheckPlayersDistance` releases them beyond half
    the brush diagonal. `Use` toggles. With `duration > 0` it expires.

### 5.5 Slow-motion points (spectacular kills)

`CTSSlowMotionPoint::CreateSlowMotionPoint(pos, amt, duration, unused, flag)` (0x714d8) creates a
`ts_slowmotionpoint`. Every 0.5 s it slows every player (not already slowed) with line of sight
from the point to their eyes, and on expiry restores them and removes itself.

* `CHalfLifeMultiplay::PlayerKilled`: if the killer was stunting (`iuser4 & 0x10c10`), it was a
  close-combat kill, or a multi-kill (> 2), then `DoSpectacularNess()` (`RandomLong(0,100) ≤
  cvar spectacularness`, 0–100) → point at the victim with `amt 0.25`, `duration 1.0`.
* `TSExplosion` makes the same 0.25/1.0 point at the explosion.
* `CBasePlayer::Killed`: on a headshot (`m_LastHitGroup == 1`) and no global slow, the victim gets
  `GoSlow(0.33)`.
* `mp_slowmatch 1`: each kill gives the killer a slow-mo power-up (`pl+0x728 = 1`, duration `+1`, max 3).

### 5.6 Cvars and commands

`slowmatch` (`mp_slowmatch`), `spectacularness`, `nopowerup`, the `globalslow` command. Client
side: `slowsensitivity` and `cl_usepowerup` (CHANGELOG/client strings).

---

## 6. Super jump, power-ups, health, armor, damage, falling

### 6.1 Super jump

* `CTSSuperJump::Spawn` (0xc9f44): a `CTSPowerUp` with type 0x100. It sets
  `TSGameRules+1 = 0xff` (inferred: "superjump on this map").
* Map flag: `CTSMapGlobals` spawnflag 0x40 → `TSGameRules+0x5885`. With it, every spawn gets
  `mj=1` (`TSInit`).
* Pickup (`PlayerAddPowerUp` 0x97bc8): `pl+0x74f = 1`, physinfo `"mj"="1"`, `PwUp(0x100)`. It is
  permanent until respawn.
* The jump: duck, keep `IN_DUCK` held, and jump while `flDuckTime > 0` (i.e. within 1 s of
  pressing duck). That gives `vel.z = 400` and 0x200000 → server `Play` → 0x100000 glide.
* Glide: `gravity = 0.3` while rising with jump held, 0.75 falling with jump held, 1.0 otherwise.
  `cmd` is scaled (0.5, 0.25, 0.25). The anim `morfy_jump` plays.
* Landing (`PostThink`): `UTIL_ScreenShake(origin, 20, 30, 0.3, 512)`, clear 0x100000.
  * `IN_DUCK` held → forced `GoRoll` (window armed) and `m_flNextAttack = 0.75`.
  * Otherwise `superjump-land.wav`, iuser4 `|= 0x4|0x1`, view 16, recover 0.75, anim 0x3a.

### 6.2 Power-up types

`CTSPowerUp::SetupPowerUp` 0x98014 sets the model `body` (the shared `models/powerup.mdl`) and the
default duration. `PlayerAddPowerUp` applies the pickup.

| Bit | Power-up | Body | Default dur | Pickup effect |
|---|---|---|---|---|
| 0x1 | Slow motion | 4 | 3 s × multiplier(+0x98) | held, `usepowerup` |
| 0x2 | Infinite clip | 2 | — | instant `CTSGun::MultiplyClips` (doubles the clip) |
| 0x4 | Kung fu | 0 | — | `pl+0x74e = 1`: ×2 melee damage, permanent |
| 0x8 | Slow pause | 9 | 2 s | held |
| 0x10 | Double fire rate | 1 | 3 s | held. All PreThink/PostThink timers ×1.5 speed. |
| 0x20 | Grenade | 5 | — | `PickUpWeapon(24)` |
| 0x40 | Health | 6 | — | `health = max(health,150)`; then 1 hp/s decay back to `max_health` (pl+0x73c) |
| 0x80 | Armor | 7 | — | `TakeArmor(100)` |
| 0x100 | Super jump | 8 | — | §6.1 |

Held power-ups are stored in pl+0x728 (type), +0x730 (seconds), active in +0x724, ends at +0x72c.

### 6.3 Health and armor

* `max_health` 100, spawn health 100. Health power-up 150 with decay.
* The One (`mp_theonemode`, pl+0x7b9): regenerates `n*0.16` hp every `1/max(1, n*0.32)` s up to
  150, where `n` = TSGameRules+0x5876 (count of other players, inferred). The One also bypasses
  slot limits (speed/stunts).
* **Kevlar** (`CBasePlayer::TakeDamage` 0x8fa94): if `armorvalue != 0`, the hitgroup is 2–5
  (chest, stomach, arms), and the damage type has none of `0x80040e4` (SLASH, FALL, BLAST, CLUB,
  DROWN, 0x8000000), then `dmg -= min(armor_absorb,1)*dmg`.
  * `armor_absorb` = TSGameRules+0x588c, **default 0.2125**, read from the weapon config key
    `armor_absorb`. `health_absorb` (+0x5888, default 0.1) is loaded but unused on the server.
  * **Armor is never depleted** ("kevlar is always on", CHANGELOG). The result is rounded to int
    before `CBaseMonster::TakeDamage`.
* Spawn protection: `pl+0x71c = time+1.0`. `TraceAttack` ignores hits before then. The player
  renders transparent (`renderamt 125`, fx 14) and gets a screen fade.

### 6.4 Speed by slot weight

`GetSpeedBySlots` (0x76bd4): `speed = 210 + space*(1/81)*120` when `space < 81` and not The One.
`SetPlayerSpeed` (0x93068) clamps to 0–330, stores it in pl+0x550, and calls `pfnSetClientMaxspeed`.
Default is 330 (`TSInit`). The accel factor follows maxspeed (§1.2).

### 6.5 Locational and situational damage (`CBasePlayer::TraceAttack` 0x901cc)

| Condition | Multiplier |
|---|---|
| Victim stunting (`iuser4 & 0x10c10`) | ×0.7 |
| Bullet (`DMG_BULLET`) during bullet-time dodge (`pl+0x524 > time`) | ×0.7 |
| Head (hitgroup 1) with `DMG_BULLET` or 0x8000000 | ×2, or ×1.5 if bit 0x2000000 is also set |
| Legs (6, 7) | ×0.5 |
| Chest/stomach/arms (2–5) | ×1 (kevlar applies here in `TakeDamage`) |
| Spawn-protected | ignored |
| Same team, `friendlyfire` 0 | ignored |

* `PTakeDam` message (13 bytes, PAS): pos, dir, and `min(dmg*0.5,127)` (+128 if it hit kevlar).
  `dmg*8` for flag 0x2000000. Throttled to once per 0.3 s (pl+0x750).
* Dead bodies get `BulletDance`, and an airborne victim is pushed by `dir*50`.
* `damagemult` cvar works only with weapon cheats.

### 6.6 Fall damage (`CBasePlayer::PostThink` 0x91610)

`m_flFallVelocity` (pl+0x828) = `-vel.z`, recorded every PreThink while airborne. On landing,
with health > 0 and fallvel ≥ 350:

```c
if (watertype != CONTENTS_WATER && fallvel > 680) {
    dmg = (fallvel - 680) * 100 * 0.0022522523;   // = 100/(1124-680): fatal at 1124 u/s
    if (health < dmg) EMIT "common/bodysplat.wav";
    TakeDamage(world, world, dmg, DMG_FALL|DMG_NEVERGIB /*0x1020*/);
}
```

That is SDK `PLAYER_MAX_SAFE_FALL_SPEED` 580→680 and `PLAYER_FATAL_FALL_SPEED` 1024→1124. The
`mp_falldamage` path (`CHalfLifeMultiplay::FlPlayerFallDamage`) is not used here. Landing also
calls `Animate(1)`, sets `gravity = 1`, and reports an AI sound if fallvel > 64.

---

## 7. CBasePlayer TS methods and the think flow

### 7.1 Methods not in SDK `player.cpp`

| Address | Method | Purpose |
|---|---|---|
| 0x92960 / 0x929d0 / 0x9298c | `GiveSlowMul` / `GoSlow` / `InSlow` | time scale virtuals (§5) |
| 0x92a08 | `UpdatePlayerState` | pl+0x498 = 2 prone/diving (0x30), 1 ducked, 0 standing → `TSState` |
| 0x92a4c | `TSInit` | per-spawn TS reset: anim/stunt init, fuser1=1, speed 330, space 81, spawn protection, power-ups, `mj` |
| 0x92f08 / 0x92fb4 | `CheckForWires` / `CutWire` | bomb wires (game mode 3) |
| 0x93068 | `SetPlayerSpeed` | clamp 0–330, `SetClientMaxspeed` |
| 0x9310c | `GiveCash` | money |
| 0x9314c | `PickUpWeapon` | weapon pickup |
| 0x9334c / 0x93830 | `DropFlag` / `TakeFlag` | CTF flag (20 slots) |
| 0x93a3c / 0x93da4 | `DropArmor` / `TakeArmor` | kevlar |
| 0x93e88 / 0x93ea4 / 0x93ef4 / 0x93f10 | `ResetArmament` / `AddItemToArmament` / `AddAmmoToArmament` / `BuyArmament` | buy-menu loadout |
| 0x941e8 / 0x9440c / 0x945bc | `BuyAmmo` / `AddItem` / `BuyWeapon` | buying |
| 0x946f0 / 0x94900 / 0x9529c | `DropAmmo` / `DropWeapon` / `ThrowWeapon` | drop/disarm/throw |
| 0x956e0 | `TSUse` | +use handling |
| 0x95748 / 0x95980 | `UpdatePowerUpState` / `UsePowerUp` | power-ups |
| 0x95b58 | `BlockPlayer(t)` | `pl+0x4dc = t`, iuser4 `|= 1` (half speed) |
| 0x95b70 | `SetPlayerGravity(t, g)` | if gravity ≥ 1: `gravity = g`, restore after `t` (pl+0x4ec) |
| 0x95e28 | `CheckHull` | melee trace (§4.2) |
| 0x95f70 | `PunchScreen` | empty |
| 0x95f88 / 0x96610 | `CloseCombatAttack` / `ColdCockAttack` | melee hits |
| 0x9650c / 0x965d0 | `UpdateMeleeBar` / `GetMeleeMultiplier` | KFu bar |
| 0x96bb0 / 0x96a9c | `SlowMotionFlow` / `DeactivateSlowMotionFlow` | power-up slow-mo spread |
| 0x97408–0x97460 | `StartSneaking`/`StopSneaking`/`IsSneaking` | SDK inline |
| 0x6f69c | `ShootBulletsPlayer` | bullet firing (weapons doc) |
| 0x99634–0x99e44 | `StartObserver`, `StopObserver`, `Observer_*` | spectator |

Removed relative to the SDK: flashlight, status bar, `SetPrefsFromUserinfo`,
`Observer_CheckTarget/Properties`. `Jump` (0x92864) and `Duck` (0x927fc) are rewritten (§7.2).
`SetAnimation` is a stub; `CTSAnimation` replaces it.

### 7.2 PreThink (0x908cc) order

1. `m_afButtonPressed/Released` (pl+0x814/0x818) from pl+0x810. `g_pGameRules->PlayerThink`.
   Return on game over.
2. `UTIL_MakeVectors(v_angle)`, `ItemPreFrame`, `WaterMove`, `UpdateClientData` (vtable 89),
   `CheckTimeBasedDamage`, `CheckSuitUpdate`.
3. `InterpolateSlowMotion(fuser1 → pl+0x168)`. `framerate = GiveSlowMul()`. If on ground,
   `pl+0xb88 = time`.
4. Count down timers by `dt` (§5.2). `CTSStunt::Play`. `CTSAnimation::UpdateTimers`. Maintain
   iuser4 0x400000.
5. `UpdatePowerUpState`, `SlowMotionFlow`, health regen/decay, then expire `BlockPlayer`
   (clear bit 1) and the temp gravity.
6. If alive: KFu bar regen. Expire the close-combat window.
7. Spectator (`iuser1`): respawn countdown HUD, `Observer_HandleButtons/Idle`, return.
8. `CTSStunt::CheckForBreakables`. If dead → `PlayerDeathThink`, return.
9. Train control (SDK). **`if (button & IN_JUMP) Jump()`**.
   **`if (IN_DUCK || FL_DUCKING || PFLAG_DUCKING) Duck()`**. If airborne,
   `m_flFallVelocity = -vel.z`. `UpdatePlayerState`.
10. Wires, spawn-protection render reset, delayed kick, barnacle freeze, delayed death (pl+0x84c).

`CBasePlayer::Jump` (0x92864): skipped if `FL_WATERJUMP` or `waterlevel ≥ 2`. Then:
* `CTSStunt::CloseAttack` (jump kick).
* Jump pressed → `GoWheel`.
* Jump pressed on ground with a ground entity → `Animate(4)`, plus the conveyor velocity
  (ground entity `FL_CONVEYOR`).

`CBasePlayer::Duck` (0x927fc): duck pressed → `GoRoll`. Else, if `IN_DUCK` and not yet ducked →
`Animate(5)`.

### 7.3 PostThink (0x91610) order

1. If alive:
   * Frozen angles (0x80000) and tank controls, then `ItemPostFrame`.
   * Fall damage (§6.6). On ground: gravity 1, AI sound, super-jump landing.
   * `Animate(1|6)` by velocity, `StudioFrameAdvance`, `CheckPowerups`, `UpdatePlayerSound`.
   * `m_afButtonLast = button`.
2. Always: decrement weapon timers, `m_flNextAttack`, pl+0xb84, and pl+0xb7c by the scaled `dt`.

---

## 8. CBasePlayer member offsets

`sizeof(CBasePlayer) = 0xb8c`. Entity layout: `pev` at +0x00, vtable at +0x60.

| Off | Type | Inferred name | Evidence |
|---|---|---|---|
| 0x060 | vtable* | | GCC 2.95 layout |
| 0x078 | int | `m_fSequenceFinished` (inferred) | `HandleSlide` sets 1 to force anim change; `Play` uses it to end recovery |
| 0x10c | int | `m_LastHitGroup` | `TraceAttack` writes `tr.iHitgroup` |
| 0x110 | int | `m_bitsDamageType` | `TakeDamage` `|= bits` |
| 0x114–0x11b | byte[8] | `m_rgbTimeBasedDamage` | cleared per DMG bit |
| 0x12c | float | `m_flNextAttack` (relative) | `UpdateMeleeBar` 1.5, block 0.5/0.25, PostThink decrement |
| 0x130 | EHANDLE | (cleared each PreThink) | |
| 0x168 | float | slow target | `GoSlow`, `InterpolateSlowMotion` |
| 0x16c | float | last sent `TSSlowMo` | `UpdateClientData` |
| 0x170 | float | slow display amount | `GoSlow`, `InSlow` |
| 0x174 / 0x175 | byte | last sent / bullet-time flag | `TSBTime` |
| 0x178 | float | next `SlowMotionFlow` | +0.5 s |
| 0x17c / 0x180 | float | activator self / others amount | `UpdatePowerUpState` |
| 0x184 | CBasePlayer*[33] | players I slowed | `SlowMotionFlow` |
| 0x208 / 0x288 | CBaseEntity*[32] / char | slowed projectiles / count | |
| 0x28c | CTSAnimation | animation state (≈0x1ec bytes) | `Animate(&pl->field_0x28c, …)` |
| 0x478 | char[32] | `m_szAnimExtention` | anim names |
| 0x498 / 0x499 | byte | TS stance / last sent | `TSState` |
| 0x4dc | float | block (half-speed) timer | `BlockPlayer` |
| 0x4e0 | vec3 | frozen angles | `PostThink` (0x80000) |
| 0x4ec | float | temp-gravity timer | `SetPlayerGravity` |
| 0x4f0 | CTSStunt | stunt state (0x44) | `CTSStunt::Init(&pl->field_0x4f0, pl)` |
| 0x540 / 0x544 | int | cash / last sent | `TSCash` |
| 0x548 / 0x54c | int | free slot space (81 = none bought, 80 max) / last sent | `TSSpace`, `CanDive*`, `GetSpeedBySlots` |
| 0x550 | float | player speed | `SetPlayerSpeed` |
| 0x71c | float | spawn-protect / disarm-immunity until | `TSInit` +1.0, `TraceAttack` |
| 0x720 | byte | active items sent | `ActItems` |
| 0x724 | int | active power-ups | `SlowMotion()`, `SlowPause()`, double-fire 0x10 |
| 0x728 / 0x72c / 0x730 | int / float / int | held power-up / end time / duration | `UsePowerUp` |
| 0x734 / 0x738 | int | last sent `PwUp` | |
| 0x73c | float | health regen/decay timer | PreThink |
| 0x74e / 0x74f | byte | Kung Fu power-up / super jump | `KungFu()`, `PlayerAddPowerUp` |
| 0x750 | float | next `PTakeDam` | 0.3 s throttle |
| 0x774 | float | KFu bar (0–100) | `KFuPower` |
| 0x778 | float | decays 0.1/s (unknown; disarm accumulator?) | |
| 0x794 | float | next wire check | |
| 0x798 | CBaseEntity* | last stunt/kick victim | `CheckForBreakables` |
| 0x79c | float | close-combat hit window | `GoWheel` 0.3, `CCombatAttack` |
| 0x7a0 | float | pending close-combat damage (sign = direction) | |
| 0x7a4 | byte | pending hit type 0 kung fu / 1 knife / 2 katana | |
| 0x7a8 / 0x7ac / 0x7b0 | float | block windows kung fu / katana / knife (inferred) | `CCombatBlock` |
| 0x7b4 | float | timer decaying ×5 | |
| 0x7b9 | byte | is The One | `CanDive*`, `GetSpeedBySlots` |
| 0x7bc / 0x770 | float | respawn countdowns | PreThink HUD |
| 0x7cc | float | delayed kick time | |
| 0x810 / 0x814 / 0x818 | int | `m_afButtonLast/Pressed/Released` | PreThink prologue |
| 0x828 | float | `m_flFallVelocity` | PreThink/PostThink |
| 0x848 | int | `m_afPhysicsFlags` | 2 ONTRAIN, 4 ONBARNACLE, 8 DUCKING |
| 0x84c | float | scheduled death time | PreThink |
| 0x97c | int | `m_lastDamageAmount` | `TakeDamage` |
| 0x9bc | int | `m_iTrain` | 0xc0 |
| 0x9c4 | EHANDLE | `m_pTank` | PostThink |
| 0x9f8–0xa0c | CBasePlayerItem*[6] | `m_rgpPlayerItems` | PostThink loop (6) |
| 0xa10 | CTSGun* | `m_pActiveItem` | `CloseAttack`, `CCombatBlock` |
| 0xb58 | char[32] | secondary anim ext (`akimbo`, `one`, `two`) | `Animate` |
| 0xb7c / 0xb84 | float | relative timers (1000 = off) | PostThink |
| 0xb88 | float | last on-ground time | PreThink, `HandleStunt`, `GoWheel` |

---

## 9. Rust recreation notes

### 9.1 Shared (`shared::pm`, runs on both sides)

Put everything that changes `origin`, `velocity`, hull, or view height inside `pm`. The client
replays it for prediction.

* **Constants**:
  * jump 236.64319 (35 u), high jump 400, wall jump `-fwd*210` / 236.64, wall climb 334.664
  * dives (90,25) / (90,50) / (100,10) with `z = sqrt(h*1600)`, wall-dive forward×3
  * friction ×0.75, backpedal ×0.8, duck view 16, safe fall 680, ladder 200 flat
  * accel factor `clamp((maxspeed-210)/240+0.6, ·, 1.1)`
  * `PseudoClimb` 64/32/+40, `+1600*frametime`
* **Order**: `CheckParamters` → `frametime = msec*0.001*(fuser1<0.1?0:fuser1)` → `ReduceTimers`
  (unscaled) → … → `PM_Ladder` → **`ts_handle()`** → `UpdateStepSound` → `PM_Duck` → movetype switch.
* **Inputs the client must have**, all networked and predicted:
  * `iuser4` (stunt bits), `fuser1` (time scale), `maxspeed`, `gravity`, `friction`
  * `view_ofs`, physinfo `mj`
  * `bInDuck`, `flDuckTime`, `oldbuttons`

  The server sends `iuser4`/`fuser1` through `clientdata_t`. Add them to `delta.lst`. They are not
  in the stock `clientdata_t` delta.
* **One-shot impulses** (0x40/0x80/0x100/0x1000/0x8000/0x800000) are set by the server and
  consumed by PM. On the client, prediction applies them only after the server's clientdata
  arrives (1 RTT late). For a better-predicted port, move the *triggers* (`HandleStunt`,
  `GoDive`, `GoWheel`, `GoRoll`, wall checks, landing transitions) into `shared::pm` too.
  * They only need traces (`PM_PlayerTrace`/`PM_TraceLine`), `cmd.buttons`, and `oldbuttons`.
  * The CTSStunt timers would then live in prediction-safe fields: `fuser2`–`fuser4` for
    nextStunt/recover/tap windows, and `vuser1` for the stunt direction.
  * Store the stunt ability (slot space) in another `vuser`/`iuser` or a physinfo key.
* `gravity` and `friction` are written by stunt code (0.75/0.25/0.3/0.5/0.9). If triggers move
  into PM, write `pmove->gravity/friction` and make sure they are predicted (`clientdata` lacks
  `gravity`/`friction` in the SDK, so carry them in user fields or physinfo).
* The super-jump glide (0x200000 → 0x100000) is converted server-side in `CTSStunt::Play`. Do it in PM.
* Keep the TS quirks for parity: no `IN_USE` slowdown, cmd clamp only for spectators, stuck
  handling without a duck retry, punch decay ×fuser1 twice, the `OldrotArray` yaw cache when
  `iuser4 & 2`, and `PM_Jump` not latching `oldbuttons` while blocked.
* The existing `mymod/crates/shared/src/pm.rs` uses SDK `JUMP_VELOCITY` 268.33 and has no duck,
  ladder, or water. For TS parity, change it to 236.64 and add friction ×0.75, the accel factor,
  the fuser1 frametime scale, and duck view 16.

### 9.2 Server-only

* Animation choice (`CTSAnimation`): `sequence`/`gaitsequence`/`framerate = slowmul`. These are
  entity-state fields, so the client just renders them.
* Damage: kevlar absorb 0.2125, hitgroup multipliers, stunt ×0.7, dodge ×0.7, fall damage
  `(v-680)/4.44`, spawn protection 1 s.
* Kung fu bar, blocks, `CloseCombatAttack`, `CheckForBreakables` (dive-through glass, delayed
  kicks), disarm, knockback (`v.z = 235`).
* Slow-motion *propagation*: LOS spreading every 0.5 s, global slow, slow-motion points, and
  power-up timers. The server only sets each entity's target factor. Interpolate `fuser1`
  (`+min(1,7dt)*diff`, snap within 0.05) on the server and send the result.
* User messages to recreate: `NextStunt`(1), `TSSlowMo`(2), `TSBTime`(1), `TSMBlur`(2),
  `KFuPower`(1), `TSState`(1), `TSSpace`(1), `PwUp`(3), `PwUpTime`(1), `PTakeDam`(13).

### 9.3 Prediction-sensitive checklist

| Field | Why |
|---|---|
| `fuser1` | scales PM frametime. A mismatch makes every predicted step wrong in slow-mo. |
| `iuser4` | blocks jump/duck, zeroes/scales cmd, triggers impulses, duck hull |
| `maxspeed` | sets both the wishspeed clamp and the accel factor |
| `gravity` / `friction` (`pev`) | changed by stunts. Not in stock clientdata. |
| `view_ofs` | set to 0/16/28 by stunts. In clientdata. |
| physinfo `mj` | high jump |
| weapon timers | decremented in scaled time on the server. `weapon_data_t` must carry the same relative values, and the client must decrement with `fuser1` too. |
