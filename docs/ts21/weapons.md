# TS 2.1 vs TS 3.0: WEAPONS

Scope: weapon list/IDs, stat tables, firing/spread/recoil, damage pipeline (falloff, penetration,
hitgroups, armour), shotguns, reload, stock hit, melee (kung fu, knife, katana), thrown blades,
grenade/explosion/shrapnel, drop/pickup, akimbo, buying/slots/speed, powerups-on-weapons, and
client prediction.

Conventions. **2.1 addresses** are `ts21/server-win` (`~/dev/hl/ts21/dlls/mp.dll`, Ghidra == objdump)
unless marked *client* (`ts21/client`, 2.1 `client.dll`). **3.0 addresses** are `.so` Ghidra addresses
from `docs/server/weapons.md` unless marked `mp.dll`. In 2.1, many functions are unnamed (`FUN_`); I
give the 3.0 name they correspond to. Two 2.1 names are wrong because the vtable naming shifted by
one slot for `CBasePlayer`: `CBasePlayer::TakeDamage` 0x10053310 is really **TraceAttack** (vtable
+0x34, slot 13), and `CBasePlayer::TakeHealth` 0x10052cf0 is really **TakeDamage** (slot 14). Float
constants were decoded from `.rdata` with `struct`. Unless marked UNVERIFIED, every 2.1 claim was
checked in the decomp and, where the decomp was ambiguous (x87 code, int/float mix-ups), in the
disassembly.

2.1 `CTSGun` member map (MSVC; `int*` index ×4): `+0x70` m_pPlayer, `+0x8c/+0x90/+0x94` next
primary/secondary/alt, `+0x98` idle, `+0xa4` clip mirror, `+0xb8` current id (byte), `+0xbc` status
ptr, `+0xc0` info ptr, `+0xc4 + 4·t` reserve ammo, `+0x104 + 0x30·id` status array (64 × 0x30),
`+0xd04..+0xd14` event indices (fire, coldcock, empty, pump, closecombat, firelinked, reload, knife,
katana), `+0xd94` last-shot time, `+0xda8` punch combo, `+0xdac` kick combo, `+0xdb0` last melee
anim (and katana alternation). 2.1 player: `+0x118` m_flNextAttack, `+0x4b8` cash, `+0x4c0` free
slots, `+0x4c8` max speed, `+0x4cc[16]` armament ammo, `+0x50c[32]×0xc` armament weapons, `+0x68c`
grenades bought this life, `+0x694` spawn-protect-until, `+0x69c` active powerup bits, `+0x6a0`
held powerup, `+0x6c6` Kung Fu, `+0x6ec` kung-fu bar, `+0x6f4` spread penalty, `+0x748` random
seed, `+0x770` buttons pressed this frame, `+0x968` CTSGun*. 2.1 slow motion is `pev->fuser1`
(0 = normal). The weapon code uses `T = fuser1 ? 1/max(fuser1, 0.1) : 1` (`FUN_100551c0` →
`FUN_1005a3d0`/`FUN_1005a3b0`) as a *delay multiplier* (§3.10).

## 1. Summary table

| Feature | TS 2.1 | TS 3.0 | 2.1 evidence | 3.0 evidence | Rust port location |
|---|---|---|---|---|---|
| Weapon table size | 64 entries × 0x3f4 B; 33 weapons + kung fu | 38 × 0x3dc; 36 weapons + kung fu | `FUN_10049890` (compile_weapons_info), base 0x100bbea8 | `compile_weapons_info` 0x7fe28 | `shared/data/weapons.toml`, `shared/src/weapons/table.rs` |
| Ids missing in 2.1 | 2 Beretta 92F (single), 36 Contender, 37 Akimbo Skorpions (29 = case in neither) | present | Write list in `FUN_10049890` | weapons.md §3 | weapons.toml |
| Id 17 | **STEYR-TMP**: 9mm, clip 30, 0.05 s, `v_tmp`, $1600, 20 slots, S+L | Skorpion (.32ACP, 20) | `Write_skorpion` 0x100056b0 (misnamed) | §3 | weapons.toml, assets.toml |
| Id 23 | "UMP" (`v_ump`), modes auto/semi only | UMP, auto/semi/**burst (2 rounds)** | `Write_mac10` 0x10003980 | §4.3 | weapons.toml; `gun.rs primary_attack` |
| Bullet damage | `ammo.dmg(int) × weapon.mult × (1+Σrand)`: per-ammo base damage, per-weapon multiplier | `info.damage` per weapon (Sparta) | `ShootBulletsPlayer` 0x1003fd40 (0x100403d8..) | `ShootBulletsPlayer` 0x6f69c | `server/weapons/fire.rs shoot_bullets`; tables |
| Random damage | each pellet that hits: `m += RandomFloat(0,0.05)`; **accumulates over pellets** of one shot (m starts at 1.0) | none | 0x100403e9..0x10040410 | – | `fire.rs shoot_bullets` |
| Range falloff | `idx = trunc(dist/unit)`, same `min(1,1/sqrt(max(idx,1)·0.1))` table | same, round (inferred) | `FUN_100491f0`, `FUN_10049270` | `compile_range_damage` 0x7f1f4 | `spread.rs range_index` |
| Penetration step | `min(left, 48)` | `min(2·left, 48)` | 0x100404f0.. | §5.4 | `fire.rs pierce_shot` |
| Ammo table | 11 types (t=1..10, 12); .454 is **t=12**; no .32ACP/7.62x51; different max carry; damage field | 13 types | `compile_ammo_info` 0x10049420, `Set_ammo_count` 0x100492a0 | 0x7f51c/0x7f2cc | `shared/data/ammo.toml` |
| Pellet spread pattern | HL triangle: `x = U(s+1)+U(s+2)`, `y = U(s+3)+U(s+4)`, U∈[-0.5,0.5] (seeds overlap between pellets); bots use engine RandomFloat with circle rejection | polar `1−r³` | 0x10040089.. | §5.4 | `spread.rs pellet_offset/pellet_dir` |
| View kick (humans, client) | **random**: pitch = U(kick/2, kick)·s; yaw = kick·0.65·(s·u ± 0.5 ∓ r2) | pitch = 0.85·kick; yaw = fixed factor per kind | server `FUN_10049b80`; client `FUN_1001e8e0` | `VKickback` 0x80414 | `spread.rs view_kick`, `gun.rs vkickback` |
| Silencer | spread ×1.2, damage ×0.8, kick: yaw ×0.8 (pitch ×0.8 client) | spread ×0.875, damage/kick ×0.775 | `FUN_1004b400`, `FUN_1004b8c0`, `FUN_10049b80` | §2 | `gun.rs standard_fire/akimbo_fire`, `combat.toml` |
| Spread growth (ScaleSpread) | `k = DFR?1:2`, no silencer factor, `x = dt/T` | `k` ×0.775 silenced, `x = slowmul·dt`, dt ≥ 0.001 | `FUN_10049a50` | 0x802a8 | `spread.rs grow_spread_penalty`, `gun.rs scale_spread` |
| Moving penalty | Barrett **and M60**: `|vel| > 80` → penalty = 0.1 | Barrett `>35` → 0.3; M60 akick×5 if `>175` | `FUN_1004b400` | §5.1 | `gun.rs standard_fire` |
| Semi-auto delay | `info.rate` | 0.1 s if weapon also has auto | `FUN_1004b400` | §4.3 | `gun.rs standard_fire` |
| Shotgun semi delay / kick | 0.1 s; kick ×**1.3** in semi | 0.15 s; kick ×0.35 when not semi (mode-0/1 guns) | `FUN_1004b050` | §5.1 | `gun.rs shotgun_fire` |
| Weapon timers | delays pre-multiplied by `T` and DFR (×0.5 auto only); decremented by raw frametime | delays raw; timers decremented by `frametime·slowmul·(DFR 1.5)` | PostThink 0x10054180 (+0x8c.. -= frametime) | §4 | `spread.rs timer_step`, `gun.rs decrement_timers` |
| Slow Pause owner | all weapon delays ×6.6666665 | (no such rule) | `FUN_10042c10` callers | – | `gun.rs` fire paths |
| Akimbo linked offset | ±4 u along v_right | ±5 u | `FUN_1004b8c0` | §4.7 | `gun.rs akimbo_fire` |
| Stock hit (+alt2) | only M4 (5) and Sawed-off (33) (flag byte); **20 dmg** for both; reach 38 | per-weapon 25–70 dmg (M3, M4, MP5SD, USAS, Deagle, AUG, Barrett, UMP, M16, M60, Sawed-off); reach 35; ×2/3 stunting | `AlternateAttack` 0x1004ab40 → `FUN_100572a0` | `ColdCock` 0x81dd0 | `gun.rs cold_cock` |
| Knife slash | combat 35 / seal 15 flat, reach 38, bits 0x1080, delay rate×0.7 | info.damage (30/20)×GetMeleeMultiplier, 35 u, bits 0x1004 | `FUN_1004c6c0` | `KnifeFire` 0x84044 | `gun.rs knife_fire` |
| Knife throw | v = 1300; combat **80** (<512 u) falling linearly to 50 at 1024+ u; seal 50; bits 0x1080 (no headshot); sticks 10 s | v = 1900; 100/50; bits 0x8001000 (headshot ×2); 30 s | `FUN_1004c6c0`, `CTSKnife::BounceTouch` 0x10048380 | `CreateKnife` 0x7d9e4 | `server/weapons/projectiles.rs Knife` |
| Katana | dmg = trunc(base·0.85): 59 standing/slow, 29 moving >100, 85 back-pedal (hits behind), 76 crouch; no throw; no block | 50/35/55 × melee mult; `KatanaThrow` 150 | `FUN_1004c090` | `KatanaFire` 0x833f0 | `gun.rs katana_fire/katana_throw` |
| Kung-fu damage | base × 0.9 × bar/100 (bar 0..100); bar −= 0.9·base per attack | base × (bar·0.5+50)/100 | `FUN_1004de10` @0x1004e2dd | `CCombatAttack` 0x86078, `GetMeleeMultiplier` 0x965d0 | `spread.rs melee_damage`, `gun.rs ccombat_attack` |
| Reload key with blade | nothing (no knife/katana block) | `CCombatBlock` | `Reload` 0x1004d0e0 | §4.1 table | `gun.rs reload` |
| Grenade explosion | 100 dmg, full radius **128**, max 1024 | 110 dmg, 300, 1024 | `CM61Grenade::WaitThink` 0x100477e0 | §5.8 | `projectiles.rs` grenade, `explode.rs ts_explosion` |
| Shrapnel | **30–45 pieces per explosion**, 2000 u/s, 100 dmg each (bits 0x1004) | dead code | `TSExplosion` 0x10047aa0 → `CTSShrapnel::Create` 0x10046f10 | 0x7bf9c (no callers) | `entities/ts/shrapnel.rs`, `explode.rs` |
| Head / limbs | head ×2 for any bits&2 (incl. shotgun) ; 6/7 ×0.5 | head ×2, ×1.5 shotgun, thrown knife ×2 | TraceAttack 0x10053310 | 0x901cc | `server/player/damage.rs trace_attack` |
| Armour | hitgroups 2–5: if dmg < armor: armor −= dmg, dmg ×0.5; else dmg = old armor, armor = 0 | dmg −= dmg·0.2125, armour never depleted | TakeDamage 0x10052cf0 @0x10052e07 | 0x8fa94 | `damage.rs after_kevlar/take_damage` |
| Victim view punch | `punchangle.x −= 3` per damage | none | 0x10052cf0 | §5.3 | `damage.rs take_damage` |
| Dodge window ×0.7 | absent | `pl+0x524` window | 0x10053310 | §5.9 | `damage.rs` |
| Real bullets | only when shooter `fuser1 != 0` (slow-mo); `realbullet` flag global never set | `realbullet` cvar or slow-mo | 0x1003fe17 | §5.4 | `fire.rs`, `bullets.rs` |
| customweapons file | `id acc vkick akick` (no damage/cost/armor lines), ids < 64 | + damage, cost, `armor_absorb`, `health_absorb` | `adjust_weapon_value` 0x10063ed0 | 0x9eca4 | `server/weapons/custom.rs` |
| CustomWP message | `"%i %f %f %f"` | `"%i %f %f %f %f %i"` | `SendWeaponParams` 0x10063df0; client `FUN_1008d7b0` | 0x9eb98 | `shared/protocol/weapons.rs` |
| Cash | **enforced** when game mode is 2 or 3 | `CashBased()` always 0 | `FUN_100435f0` | 0x76abc | `rules/state.rs cash_based`, `inventory.rs buy_weapon` |
| Move speed vs slots | `free ≥ 70 → 310`, else `trunc(170 + free·140/70)` (170..310) | `210 + free·120/81` (210..330) | `FUN_100436e0`, `FUN_100557b0` | `GetSpeedBySlots` 0x76bd4 | `shared/src/ts.rs speed_by_slots` |
| Slot weights that differ | Berettas×2 20, USAS 50, AUG 40, TMP 20, PDW 30, SPAS 40, UMP 25, M61 15 | 10, 40, 30, 15, 25, 30, 30, 7 | Write_* +0xca | §3 | weapons.toml |
| Infinite Clip pickup | no `MultiplyClips` | doubles clip | `PlayerAddPowerUp` 0x100599d0, `UsePowerUp` 0x10056a90 | 0x81308 | `gun.rs multiply_clips` |
| Golden Colts restriction | restricted as pistol (bit 2) | never restricted | `FUN_1004ec80` | §7.2 | `inventory.rs` restrictions |
| Explosions push dropped guns | no | yes | `TSExplosion` 0x10047aa0 | §5.8 | `explode.rs` |
| Events | 9 (no `draw.sc`, `grenade.sc`) | 11 | client `FUN_1001ec80` | §6.1 | `prediction/gun.rs event_index` |


## 2. Weapon list and per-weapon stats

### 2.1 2.1 `s_weapon_info` layout (0x3f4 bytes; differs from 3.0's 0x3dc)

Decoded from the 33 writers `Write_*` 0x10001000..0x10005dc0, plus `FUN_10002e50` = Write_knife.
`FUN_10049890` (= compile_weapons_info, called from `W_Precache`) zeroes 0xfd00 bytes (64 entries)
at `0x100bbea8`, copies "Kung-fu" into entry 0 `+0x44`, calls the writers, then
`compile_ammo_info` and `FUN_100491f0` (range table). **There is no `Sparta()` override pass in 2.1.**
`get_weapon_info` 0x10049190 clamps ids to `< 0x40`.

| Off | Type | Meaning (3.0 offset) |
|---|---|---|
| 0x000 | u8 | valid |
| 0x004 | i32 | clip |
| 0x008 | u8 | ammo type |
| 0x00c | u32 | firemode mask (bit n = mode n; same as 3.0) |
| 0x010 | **u8** | **stock-hit allowed flag** (3.0: i32 stock damage) |
| 0x014 | f32 | reload time |
| 0x018 | f32 | fire delay |
| 0x01c | f32 | **damage multiplier** applied to the ammo type's integer damage (3.0: absolute damage) |
| 0x020 | i32 | bullet kind (0 normal, 1 shotgun, 4 grenade, 6 combat knife, 7 seal; katana 0) |
| 0x024 | i32 | pellets / max stack |
| 0x028 | f32 | accuracy |
| 0x02c | u8 | use ScaleSpread |
| 0x030 | f32 | view kick |
| 0x034 | f32 | accuracy kick |
| 0x038 | u8 | apply view kick |
| 0x03c/0x040 | i32 | zoom FOV 1 / 2 |
| 0x044 | char[64] | name |
| 0x084/0x085 | u8 | HUD slot / position |
| 0x086 | char[64] | HUD sprite |
| **0x0c6** | **i16** | akimbo id (3.0: i32 at 0xc8) |
| **0x0c8** | **i16** | single id (3.0: i32 at 0xcc) |
| **0x0ca** | u8 | slots (3.0 0xd0) |
| 0x0cc | f32 | client handling factor (3.0 0xd4) |
| 0x0d0 | i32 | cost (3.0 0xd8) |
| 0x0d4 | u8 | stackable (3.0 0xdc) |
| 0x0d8 / 0x0dc | u32 | allowed / built-in attachments (3.0 0xe0/0xe4) |
| 0x0e0 | char[64] | shell model |
| 0x120 | i16[5] | body-group adds S,L,F,Z,L+F |
| 0x12a / 0x16a / 0x1aa / 0x1ea | char[64] | v_ / p_ / p_ silenced / w_ model |
| 0x22a | char[64] | anim extension (3.0: char[32]) |
| 0x26a / 0x2a4 | i16[29] | sequence tables A / B (`B[0] == -1` → no alternate grip) |
| 0x2de / 0x31e | char[64] | fire sound / second sound |
| 0x360 | u8 | weapon kind (same kind codes as 3.0) |
| 0x364..0x370 | i32,u8,i32,i32 | client effect offsets |

`s_weapon_status` in 2.1 is **0x30** bytes (3.0: 0x38) with the same first fields (owned +0, ammo
type +1, firemode +2, clip +4, state +8, in-reload +0xc, owned attachments +0x10, switched-on +0x14,
body +0x18, akimbo L/R +0x1c/+0x20, toggle +0x24, seq ptr +0x28, alt grip +0x2c). No original-owner
EHANDLE (+0x30 in 3.0, used for the "killed with own weapon" message).

### 2.2 Stat table: 2.1 built-in values vs 3.0 (Sparta-applied)

dmg 2.1 = ammo base damage × `info+0x1c` (before the random factor and silencer, §3.2). 3.0
values are from weapons.md §3. In "modes", "ak_" means akimbo modes 4/5. Stock: 2.1 always deals
20 when the flag is set. "None" acc kick = field not written (0).

| id | 2.1 name | kind | clip 2.1/3.0 | ammo 2.1/3.0 | modes 2.1 (3.0) | rate 2.1/3.0 | reload 2.1/3.0 | dmg 2.1 (=ammo×mult) / 3.0 | pellets | accuracy 2.1/3.0 | acc kick 2.1/3.0 | view kick 2.1/3.0 | zoom 2.1 (3.0) | stock 2.1/3.0 | slots 2.1/3.0 | cost 2.1/3.0 | att allow/def 2.1 (3.0) |
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
| 1 | Glock-18 | 8 | 17/17 | 9mm/1 | auto/semi (auto/semi) | 0.054/0.054 | 2.0/1.5 | 30.38 (=45×0.675) / 24 | 1/1 | 0.032/0.01 | 0.007/0.0065 | 2.5/2.2 | - (-) | -/0 | 10/10 | 850/850 | SLF/- (SLF/-) |
| 3 | Mini-Uzi | 9 | 32/32 | 9mm/1 | auto/semi (auto/semi) | 0.06/0.06 | 2.2/2.2 | 27.0 (=45×0.6) / 20 | 1/1 | 0.031/0.02 | 0.006/0.0065 | 2.9/1.75 | - (-) | -/0 | 20/20 | 1300/1300 | S/- (S/-) |
| 4 | Benelli M3 | 1 | 7/7 | shells/3 | semi/pump (semi/pump) | 0.2/0.225 | 0.3/0.3 | 11.52 (=18×0.64) / 12 | 8/8 | 0.051/0.035 | None/0 | 11.5/13 | 40 (40) | -/35 | 40/40 | 3000/3000 | LFZ/- (LFZ/-) |
| 5 | M4A1 | 6 | 30/30 | 5.56/4 | auto/semi (auto/semi) | 0.07/0.07 | 2.8/2.8 | 42.0 (=60×0.7) / 33 | 1/1 | 0.0075/0.005 | 0.001/0.004 | 4.0/3.75 | 26 (26) | 20 (flag)/35 | 40/40 | 4500/4500 | SLFZ/- (SLFZ/-) |
| 6 | MP5SD | 9 | 30/30 | 9mm/1 | auto/semi/burst (auto/semi/burst) | 0.074/0.074 | 2.3/2.3 | 33.75 (=45×0.75) / 19 | 1/1 | 0.01/0.005 | 0.015/0.005 | 1.75/1.25 | 32 (32) | -/30 | 25/25 | 2500/2500 | SLFZ/S (SLFZ/S) |
| 7 | MP5K | 9 | 30/30 | 9mm/1 | auto/semi/burst (auto/semi/burst) | 0.066/0.066 | 2.3/2.3 | 31.5 (=45×0.7) / 23 | 1/1 | 0.029/0.02 | 0.005/0.003 | 3.25/2.25 | 32 (32) | -/0 | 20/20 | 1500/1500 | SLFZ/- (SLFZ/-) |
| 8 | Akimbo Berettas | 5 | 30/30 | 9mm/1 | semi/ak_semi (semi/ak_semi) | 0.1/0.1 | 2.4/2.4 | 33.75 (=45×0.75) / 27 | 1/1 | 0.028/0.02 | 0.0/0 | 2.5/2.5 | - (-) | -/0 | 20/10 | 1800/900 | SLF/- (SLF/-) |
| 9 | SOCOM-MK23 | 8 | 12/12 | .45/2 | semi (semi) | 0.1/0.1 | 1.5/1.5 | 39.32 (=55×0.715) / 33 | 1/1 | 0.025/0.01 | 0.0/0 | 3.0/4 | - (-) | -/0 | 10/10 | 700/700 | SLF/- (SLF/-) |
| 10 | Akimbo MK23 | 4 | 24/24 | .45/2 | semi/ak_semi (semi/ak_semi) | 0.1/0.1 | 2.5/2.5 | 39.32 (=55×0.715) / 33 | 1/1 | 0.03/0.02 | 0.0/0 | 3.5/4 | - (-) | -/0 | 10/10 | 700/700 | SLF/- (SLF/-) |
| 11 | USAS-12 | 6 | 20/20 | shells/3 | auto (auto) | 0.166/0.166 | 3.0/3 | 5.4 (=18×0.3) / 7 | 8/8 | 0.08/0.065 | None/0 | 9.5/4 | - (-) | -/50 | 50/40 | 5100/5100 | LF/- (LF/-) |
| 12 | Desert Eagle | 8 | 7/7 | .50AE/5 | semi (semi) | 0.1/0.1 | 2.1/2.1 | 57.75 (=77×0.75) / 49 | 1/1 | 0.0225/0.005 | 0.015/0.0125 | 9.0/7.5 | 60 (60) | -/25 | 15/15 | 1050/1050 | SLZ/- (SLZ/-) |
| 13 | AK47 | 6 | 30/30 | 7.62x39/6 | auto/semi (auto/semi) | 0.08/0.08 | 2.5/2.5 | 52.5 (=70×0.75) / 39 | 1/1 | 0.003/0.0025 | 0.0/0.0001 | 6.0/5.5 | 32,13 (32,13) | -/0 | 40/40 | 3000/3000 | Z/- (Z/-) |
| 14 | Five-seveN | 8 | 20/20 | 5.7/7 | semi (semi) | 0.1/0.1 | 1.5/1.5 | 24.5 (=35×0.7) / 23 | 1/1 | 0.01/0.0025 | 0.0/0.01 | 1.5/1.5 | - (-) | -/0 | 10/10 | 1250/1250 | SLF/- (SLF/-) |
| 15 | STEYR-AUG | 6 | 30/30 | 5.56/4 | auto/semi (auto/semi) | 0.092/0.092 | 2.4/2.4 | 42.0 (=60×0.7) / 29 | 1/1 | 0.005/0.005 | 0.02/0.01 | 3.52/2 | 40 (40) | -/35 | 40/30 | 5000/5000 | SLZ/Z (SLZ/Z) |
| 16 | Akimbo Mini-Uzi | 4 | 64/64 | 9mm/1 | auto/ak_auto (auto/ak_auto) | 0.06/0.06 | 3.0/3 | 23.62 (=45×0.525) / 20 | 1/1 | 0.035/0.04 | 0.00581/0.0065 | 3.2/1.75 | - (-) | -/0 | 20/20 | 1300/1300 | S/- (S/-) |
| 17 | STEYR-TMP | 9 | 30/20 | 9mm/12 | auto/semi (auto/semi) | 0.05/0.07 | 1.8/1 | 27.0 (=45×0.6) / 16 | 1/1 | 0.027/0.025 | 0.01/0.0015 | 2.25/0.5 | - (-) | -/0 | 20/15 | 1600/1100 | SL/- (-/-) |
| 18 | Barrett M82A1 | 7 | 5/5 | BMG/8 | semi (semi) | 0.7/0.7 | 2.0/2 | 150.0 (=150×1.0) / 185 | 1/1 | 0.001/0.001 | 0.1/0.1 | 10.0/10 | 32,8 (32,8) | -/70 | 70/70 | 9000/9000 | LZ/Z (LZ/Z) |
| 19 | MP7-PDW | 9 | 40/40 | 5.7/7 | auto/semi (auto/semi) | 0.063/0.063 | 2.5/2.5 | 26.25 (=35×0.75) / 16 | 1/1 | 0.0225/0.005 | 0.015/0.0065 | 2.6/1 | 40 (40) | -/0 | 30/25 | 2800/2800 | SLZ/- (SLZ/-) |
| 20 | SPAS-12 | 1 | 8/8 | shells/3 | semi/pump (semi/pump) | 0.2/0.2 | 0.3/0.3 | 9.72 (=18×0.54) / 12 | 8/8 | 0.04/0.05 | None/0 | 7.0/10 | - (-) | -/0 | 40/30 | 2100/2100 | LF/- (LF/-) |
| 21 | Golden Colts | 5 | 16/16 | .45/2 | semi/ak_semi (semi/ak_semi) | 0.1/0.1 | 2.8/2.3 | 41.25 (=55×0.75) / 40 | 1/1 | 0.0225/0.0075 | 0.0/0 | 4.75/5.5 | - (-) | -/0 | 20/20 | 2600/2600 | -/- (-/-) |
| 22 | Glock-20C | 8 | 15/15 | 10mm/9 | semi (semi) | 0.1/0.1 | 2.0/2 | 45.0 (=60×0.75) / 39 | 1/1 | 0.0325/0.01 | 0.0/0.0125 | 4.5/5 | - (-) | -/0 | 10/10 | 1300/1300 | SLF/- (SLF/-) |
| 23 | UMP | 9 | 25/25 | .45/2 | auto/semi (auto/semi/burst) | 0.092/0.092 | 2.8/2.5 | 41.25 (=55×0.75) / 31 | 1/1 | 0.032/0.015 | 0.0075/0 | 5.25/3 | 40 (40) | -/30 | 25/30 | 2300/2300 | SLFZ/- (SLFZ/-) |
| 24 | M61 Grenade | 2 | 1/1 | -/0 | auto (auto) | 1.0/1 | 1.0/1 | - (=-×1.0) / 0 | 2/2 | 0.1/0.1 | None/0 | 1.0/1 | - (-) | -/0 | 15/7 | 1000/1000 | -/- (-/-) |
| 25 | Combat Knife | 3 | 1/1 | -/0 | auto (auto) | 0.4/0.4 | 1.0/1 | - (=-×1.0) / 30 | 5/5 | 0.1/0.1 | None/0 | 1.0/1 | - (-) | -/0 | 1/1 | 100/100 | -/- (-/-) |
| 26 | Mossberg 500 | 1 | 8/8 | shells/3 | pump (pump) | 0.2/0.25 | 0.3/0.3 | 13.32 (=18×0.74) / 16 | 8/8 | 0.071/0.045 | None/0 | 14.5/8.5 | - (-) | -/0 | 40/40 | 2500/2500 | LF/- (LF/-) |
| 27 | M16A4 | 6 | 18/18 | 5.56/4 | semi/burst (semi/burst) | 0.07/0.07 | 2.8/2.8 | 45.0 (=60×0.75) / 40 | 1/1 | 0.001/0.0015 | 0.001/0.005 | 5.5/4 | 32,8 (32,8) | -/35 | 40/40 | 2500/2500 | LFZ/- (LFZ/-) |
| 28 | Ruger-MK1 | 8 | 17/17 | .22/10 | semi (semi) | 0.1/0.1 | 1.3/1.3 | 17.25 (=23×0.75) / 15 | 1/1 | 0.01/0.005 | 0.0/0.008 | 0.7/0.35 | - (-) | -/0 | 5/5 | 1500/1500 | SL/S (SL/S) |
| 30 | Akimbo Five-seveN | 4 | 40/40 | 5.7/7 | semi/ak_semi (semi/ak_semi) | 0.1/0.1 | 3.0/3 | 24.5 (=35×0.7) / 23 | 1/1 | 0.02/0.005 | 0.015/0.01 | 2.1/1.5 | - (-) | -/0 | 10/10 | 1250/1250 | SLF/- (SLF/-) |
| 31 | Raging Bull | 8 | 5/5 | .454/11 | semi (semi) | 0.15/0.15 | 2.0/2 | 120.0 (=160×0.75) / 95 | 1/1 | 0.01/0.0025 | 0.0/0 | 18.5/13 | 40 (40) | -/0 | 15/15 | 2100/2100 | LZ/- (LZ/-) |
| 32 | M60E3 | 6 | 100/100 | 5.56/4 | auto (auto) | 0.109/0.109 | 3.0/3 | 45.0 (=60×0.75) / 33 | 1/1 | 0.015/0.015 | 0.009/0.005 | 2.0/1.5 | - (-) | -/50 | 70/70 | 8000/8000 | -/- (-/-) |
| 33 | Sawed-off | 8 | 2/2 | shells/3 | semi (semi) | 0.1/0.1 | 1.7/1.7 | 12.6 (=18×0.7) / 21 | 8/8 | 0.062/0.07 | None/0 | 9.5/10 | - (-) | 20 (flag)/50 | 20/20 | 1900/1900 | L/- (L/-) |
| 34 | Katana | 10 | 1/1 | -/0 | auto (auto) | 0.7/0.7 | 1.0/1 | - (=-×1.0) / 45 | 0/0 | 0.1/0.7 | None/0 | 1.0/0 | - (-) | -/0 | 10/10 | 2900/2900 | -/- (-/-) |
| 35 | Seal Knife | 3 | 1/1 | -/0 | auto (auto) | 0.3/0.25 | 1.0/1 | - (=-×1.0) / 20 | 10/10 | 0.1/0.1 | None/0 | 1.0/1 | - (-) | -/0 | 1/1 | 100/100 | -/- (-/-) |

Things the table shows:
- Rates, clips, reload times, zooms and costs mostly match. The tuning moved to damage, accuracy
  and kick: 2.1 bullets hit **harder** (AK 52.5 vs 39, M4 42 vs 33, MP5SD 33.75 vs 19, Deagle 57.75
  vs 49, Bull 120 vs 95, PDW 26.25 vs 16) but are **less accurate** (Glock 0.032 vs 0.01, MP5K
  0.029 vs 0.02, PDW 0.0225 vs 0.005, Deagle 0.0225 vs 0.005) and **kick harder** (Mossberg 14.5 vs
  8.5, Bull 18.5 vs 13). The Barrett is weaker (150 vs 185) and shotguns do about the same per pellet.
- Ids whose meaning differs: 8 (2.1 Akimbo Berettas is kind 5 *akimbo-only*, `single = -1`, 20
  slots, $1800, since there is no single Beretta), 17 (TMP), 23 (no burst), 31 (ammo .454 at t=12).
- 2.1 knife/katana/seal `rate`/`damage` fields aren't used as damage. The blade code hard-codes
  values (§5).
- `info+0xd4` stackable = 1 for M61, Combat Knife and Seal Knife (katana 0). Same as 3.0.

### 2.3 Ammo table (2.1 `compile_ammo_info` 0x10049420, base 0x100b1e98, stride 0x38)

Accessor `FUN_100491c0` (index < 16). Fields: +0x00 f (client), +0x04 price, +0x08 class (1
pistol, 2 rifle), +0x0c max carry (set by `Set_ammo_count`), +0x10 per buy, +0x14 range 8192,
+0x18 pierce, **+0x1c integer base damage** (3.0: radial spread scale 1.0), +0x20 range unit, +0x24
velocity m/s, +0x28 name.

| t | name | price | per buy | max carry ammocount 0/1/2/3 | pierce | **dmg** | unit | vel | 3.0 diff |
|---|---|---|---|---|---|---|---|---|---|
| 1 | 9 x 19mm | 50 | 30 | 210/90/30/0 | 0.2 | 45 | 80 | 330 | same |
| 2 | .45Acp | 60 | 12 | **200/48/16**/0 | 0.2 | 55 | 90 | 280 | 3.0 175/50/25 |
| 3 | SHELLS | 120 | 8 | 60/32/16/0 | 0 | 18 | 90 | 350 | same |
| 4 | 5.56 Nato | 80 | 30 | **90**/60/30/0 | 0.9 | 60 | 150 | 900 | 3.0 max 120 |
| 5 | .50AE | 70 | 10 | 70/21/7/0 | 0.5 | 77 | 90 | 480 | same |
| 6 | 7.62 x 39mm | 100 | 30 | 90/60/30/0 | 0.7 | 70 | 170 | 790 | same |
| 7 | 5.7 x 28 | 120 | 20 | **200**/40/20/0 | 1.0 | 35 | 100 | 730 | 3.0 max 160 |
| 8 | 50BMG | 500 | 5 | **20**/10/5/0 | 1.0 | 150 | 200 | 1000 | 3.0 max 30 |
| 9 | 10mm AUTO | 70 | 15 | **100**/30/15/0 | 0.5 | 60 | 90 | 450 | 3.0 max 90 |
| 10 | .22 LR | 100 | 17 | 150/34/17/0 | **0.05** | 23 | 70 | 350 | 3.0 pierce 0.9 |
| 11 | (empty) | | | | | | | | 3.0 .454 here |
| 12 | .454 Casull | 150 | 5 | 50/15/5/0 | 0.75 | 160 | 20 | 400 | 3.0 t=12 is .32ACP |
| 13 | (none) | | | | | | | | 3.0 7.62x51 |

The `+0x00` values match 3.0 (0.4/0.4/0.3/0.3/0.3/0.2/0.5/0.1/0.3/0.5/0.3). Note the .454's 2.1 type
index 12 vs 3.0's 11. A shared enum must map `ammo id` per mode, or the 2.1 table must keep index 12.

### 2.4 `weapons_official.txt` and `customweapons`

- `customweapons` defaults to `""` (cvar at 0x10093d54; also `server.cfg: customweapons ""`). The
  game-rules think (`global_10021f00.c` ~line 235) loads the named file once when the cvar is
  non-empty (`adjust_weapon_value` 0x10063ed0), broadcasts it (`InformClientsOnWeaponsParams`
  0x10063d90 → "This server is using custom weapons." + one `CustomWP` per valid id < 64), then
  resets the cvar to `""`. **`weapons_official.txt` is not loaded by default.** The string doesn't
  occur in mp.dll. The shipped defaults are the `Write_*` values above.
- File format (2.1): `//` lines are skipped (`strstr(line,"//")`). Each line is
  `sscanf("%i %f %f %f")` = **id accuracy viewkick acckick**. Accuracy `<= 0.001` becomes 0.001.
  Ids must be 0..63 and valid. Only `+0x28`, `+0x30` and `+0x34` are written. There is **no damage,
  cost, `armor_absorb` or `health_absorb`** (3.0 has all of these). `save_weapon_value` 0x100640e0
  writes `//<name>` and `%i %f %f %f` for every valid id. That is exactly the official file's format,
  so it was generated with `saveweapons` from some other tuning.
- File comment semantics ("accuracy kickback of 0 → accuracy will not be scaled") match the code:
  `ScaleSpread` returns immediately when `akick <= 0` (§3.4).
- The official file's values differ from the built-ins. They are generally lower kick and better
  accuracy, for example AK 0.003/**3.0**/0 vs 0.003/6.0/0, M4 0.0075/2.75/**0** vs 0.0075/4.0/0.001,
  Bull 0.01/8.0 vs 0.01/18.5. Full per-id list:

| id | built-in acc/vkick/akick | weapons_official.txt |
|---|---|---|
| 1 | 0.032/2.5/0.007 | 0.022/1.5/0.007 |
| 3 | 0.031/2.9/0.006 | 0.03/2.0/0.005 |
| 4 | 0.051/11.5/0 | 0.038/8.0/0 |
| 5 | 0.0075/4.0/0.001 | 0.0075/2.75/0 |
| 6 | 0.01/1.75/0.015 | 0.005/1.3/0.013 |
| 7 | 0.029/3.25/0.005 | 0.01/2.3/0.005 |
| 8 | 0.028/2.5/0 | 0.028/1.5/0 |
| 9 | 0.025/3.0/0 | 0.02/2.0/0 |
| 10 | 0.03/3.5/0 | 0.03/2.2/0 |
| 11 | 0.08/9.5/0 | 0.07/7.0/0 |
| 12 | 0.0225/9.0/0.015 | 0.01/2.9/0 |
| 13 | 0.003/6.0/0 | 0.003/3.0/0 |
| 14 | 0.01/1.5/0 | 0.01/1.3/0 |
| 15 | 0.005/3.52/0.02 | 0.005/1.0/0.015 |
| 16 | 0.035/3.2/0.00581 | 0.03/2.0/0.005 |
| 17 | 0.027/2.25/0.01 | 0.015/1.2/0.01 |
| 18 | 0.001/10/0.1 | same |
| 19 | 0.0225/2.6/0.015 | 0.003/1.9/0.0075 |
| 20 | 0.04/7.0/0 | same |
| 21 | 0.0225/4.75/0 | 0.015/2.0/0 |
| 22 | 0.0325/4.5/0 | 0.023/2.7/0 |
| 23 | 0.032/5.25/0.0075 | 0.015/2.55/0.005 (file calls it "MAC10", but MAC-10 was removed in 2.0.x for the UMP) |
| 26 | 0.071/14.5/0 | 0.042/8.4/0 |
| 27 | 0.001/5.5/0.001 | 0.001/2.5/0 |
| 28 | 0.01/0.7/0 | 0.001/0.7/0 |
| 30 | 0.02/2.1/0.015 | 0.02/1.5/0 |
| 31 | 0.01/18.5/0 | 0.01/8.0/0 |
| 32 | 0.015/2.0/0.009 | 0.007/1.3/0.01 |
| 33 | 0.062/9.5/0 | 0.07/7.0/0 |
| 24/25/34/35 | 0.1/1.0/0 | same |

Recommendation: implement the built-in table as "2.1" and support loading `weapons_official.txt`
through the existing `customweapons` path, with the 2.1 parser (3 values, no damage).

## 3. Firing

### 3.1 Input dispatch (2.1 `PrimaryAttack` 0x1004aa50, `SecondaryAttack` 0x1004a800, `ItemPostFrame` 0x10064ce0)

`ItemPostFrame` order is the same as 3.0: IN_ATTACK2, IN_ATTACK, button 0x40 (+alt2), IN_RELOAD
(only when not in reload), then idle. With no weapon (kung fu), only IN_ATTACK2, IN_ATTACK and
IN_RELOAD (block). The magazine-reload completion is the same: `min(clip − cur, reserve)`; akimbo
L = clip/2, R = rest; a kind-4 akimbo mirrors L into the single's record; a single with an akimbo
twin adds the rounds to the twin.

PrimaryAttack (2.1):
```
no weapon:  if IN_ATTACK pressed this frame (pl+0x770&1) -> CCombatAttack   // 3.0 doc: "no weapon -> CCombatAttack" (press gating not compared)
kind 2:     st+0x24 = 0; GrenadeFire
kind 3:     if pressed: st+0x24 = 0; KnifeFire (slash)
kind 10:    if pressed: KatanaFire
mode 1/4:   fire only if pressed || DFR
mode 0/5:   Fire
mode 2:     if pressed && st+8 == 0: st+8 = 3        // all burst guns 3 rounds (3.0: id 23 = 2)
mode 3:     if pev->button & IN_ATTACK: Fire
```
SecondaryAttack (2.1):
```
no weapon:  IN_ATTACK2 pressed -> CCombatAttack
kind 2:     st+0x24 = 1; GrenadeFire (roll)
kind 3:     pressed: st+0x24 = 1; KnifeFire (throw)
(kind 10 is NOT special: no KatanaThrow in 2.1; it falls through to the grip/zoom code, which does
 nothing for the katana because table B[0] == -1, then sets the 0.3/1.0 timers)
mode 4:     pressed || DFR -> Fire;  mode 5 -> Fire
scope owned (st+0x10 & 8): fov 0 -> z1 (hide viewmodel if z1 < 40); fov == z2 or z2 == 0 -> 0 (restore viewmodel); else z2
else grip toggle if B[0] != -1 (anim [7])
next secondary = 0.3, idle = 1.0
```
Zoom steps and the grip toggle are identical to 3.0.

`Fire` = `FUN_1004ac20`:
```
if pev->waterlevel == 3 -> EmptySound
if clip < 1 && !(st+0x24 && mode == 3 && kind == 1) -> EmptySound     // pending pump may still cycle with an empty tube
                                                                      // NOTE: no Infinite-Clip bypass here (3.0 has one)
kind 4/5 -> AkimboFire; kind 1 -> ShotgunFire; else StandardFire; then CTSAnimation::Animate (3rd-person)
```
`EmptySound` = `FUN_1004ab60`: event `empty.sc`. next primary = next secondary = `0.1·T`, idle 0.5.

### 3.2 StandardFire (2.1 `FUN_1004b400`)

```
if !InfiniteClip (pl+0x69c & 2):
    clip -= 1
    if info.akimbo (i16 +0xc6) != -1:  twin.clip -= 1; twin.left = this.clip; clamp twin.clip >= 0
src = GetGunPosition(); aim = v_forward
spread = info.accuracy
silenced = (st+0x10 & 1) && !(info+0xdc & 1)
if silenced: spread *= 1.2                                  // 3.0: *= 0.875
if id == 32 (M60) || id == 18 (Barrett):
    if |pev->velocity| > 80: pl.spread_penalty (pl+0x6f4) = 0.1   // set, not added
if info.scale_spread: ScaleSpread(&spread, info.acc_kick)
mult = (silenced ? 0.8 : 1.0) * info+0x1c                   // 3.0: dmg *= 0.775
ShootBulletsPlayer(pellets, src, aim, (spread,spread,spread), mult, info.btype, info.ammo, pl.seed)
if kind == 7 || id == 31 || id == 33 || info.kick_on: VKickback(info.view_kick, kind, silenced)
PLAYBACK fire.sc: f1=f2=spread, i1=id, i2=st+0x10, b1=(clip==0), b2=seed   (same as 3.0)
delay = mode 2 ? (st+8 == 1 ? 0.2 : 0.03)
      : mode 1 ? info.rate                                  // 3.0: 0.1 when the gun also has auto
      :          info.rate * (DFR ? 0.5 : 1.0)
delay = SlowPause(pl+0x69c & 8) ? delay * 6.6666665 : delay * T
next_primary = delay; idle = 2.0
```

### 3.3 ShotgunFire (2.1 `FUN_1004b050`)

```
if st+8 != 0: st+8 = 2; return                       // fire button during a shell reload = end the reload (no shot this frame)
pumping = (mode == 3 && st+0x24 != 0)
delay = (mode == 1) ? 0.1 : info.rate * (DFR ? 0.5 : 1)   // 3.0 semi 0.15
delay = SlowPause ? delay*6.6666665 : delay*T;  next_primary = delay; idle = 2.0
if clip < 1 && !pumping: return                      // silent
if clip >= 1 && !pumping && !InfiniteClip: clip -= 1
if !pumping:
    ShootBulletsPlayer(pellets, src, v_forward, accuracy (no ScaleSpread, no silencer), mult = info+0x1c, btype 1, ammo 3, seed)
    if kick_on: VKickback(view_kick * (mode == 1 ? 1.3 : 1.0), kind, not silenced)   // 3.0: x0.35 when not semi
    event fire.sc
else: event pump.sc
st+0x24 = !st+0x24                                    // toggles in every mode
```

### 3.4 ScaleSpread (2.1 `FUN_10049a50`) and spread-penalty decay

```
if akick <= 0: return
k = DFR ? 1.0 : 2.0                                  // no silencer factor (3.0: k *= 0.775 silenced)
dt = now - gun+0xd94
if dt >= 0:                                          // 3.0: dt >= 0.001
    *spread += pl+0x6f4
    x = dt / T                                       // = dt*fuser1 in slow-mo (3.0 slowmul*dt; same up to the 0.1 vs 0.01 floor)
    if x >= 1: x = 0.5; gun+0xd98 = 0
    pl+0x6f4 = min(0.1, (1 - x)*k*akick + pl+0x6f4)
    gun+0xd94 = now
else: gun+0xd98 = 0; gun+0xd94 = now
```
Decay in `PreThink` 0x100537e0 (around 0x10053a40): `pen -= (dt/T)·0.1`, clamped at 0. Here
`dt = now − pl+0x6f0` (last think time). There's **no DFR 1.5× decay** (3.0 has it).
Kung-fu bar regen in the same block: `bar += (dt/T)·15`, capped at 100.

### 3.5 Recoil / view kick (2.1 server `FUN_10049b80`, client `FUN_1001e8e0`)

```
s  = silenced ? 0.8 : 1.0
u  = SharedRandomFloat(seed,   -0.5, 0.5)
p  = SharedRandomFloat(seed+1, kick/2, kick)          // client uses it; server discards it
r2 = SharedRandomFloat(seed+2, 0, 0.75)
yaw0 = s*u;  yaw0 += (yaw0 >= 0 ? 0.5 : -0.5)
if kind in {6 rifle, 1 shotgun, 7 sniper}: yaw0 -= r2
elif kind == 8 (pistol):                     yaw0 += r2
yaw = yaw0 * kick * 0.65
SERVER (bots only, pev->flags & FL_FAKECLIENT): v_angle.x -= kick;  v_angle.y += yaw
CLIENT (local player, kick > 0 and first prediction DAT_102e2cbc): viewangles.x -= p*s; viewangles.y += yaw
```
So 2.1 human recoil is a **random** pitch in [0.5, 1]·kick·s and a **random-sided** yaw of about
0.65·kick·(0.5..1.25). 3.0 is deterministic: pitch 0.85·kick, a fixed yaw factor per kind, ×0.775
silenced, ×2/3 DFR. 2.1 has **no DFR kick reduction**. The kick is a permanent view-angle change in
both versions (no recovery). SharedRandomFloat is the HL `UTIL_SharedRandomFloat` (`FUN_10066640`).

### 3.6 Akimbo (2.1 `FUN_1004b8c0`)

Same structure as 3.0 (one timer pair, toggle at `st+0x24`, linked shot when both buttons are down
in modes 4/5, or always in mode 0, unless a side is empty). Differences:
- Linked side offset is `±4·v_right` (3.0 ±5). The second ray seed is seed+0x21 (same).
- Silencer: spread ×1.2, damage ×0.8, VKickback silenced flag. akick ×2 and kick ×2 when linked (same).
- Delay: burst 0.03/0.2, modes 1/4 0.1, else rate×(DFR 0.5), then ×6.67 SlowPause or ×T.
  Next primary = next secondary = delay; idle 2.0.
- Clip: −2 linked (L−1, R−1), else −1 from the toggled side. Kind 4 mirrors L into the single.
  Infinite Clip skips all of this.

### 3.7 Burst, semi, pump, DFR

- Burst (`WeaponIdle` 0x1004d660): while mode 2 and next_primary ≤ 0 and `st+8 ≥ 1`: Fire, then
  `st+8 −= 1`. That gives 3 shots 0.03 s apart, then 0.2 s (the last shot fires with `st+8 == 1`).
  Same as 3.0, except 3.0's UMP 2-round burst.
- DFR (pl+0x69c & 0x10) in 2.1: semi fires while held. **Auto/shotgun/knife/katana delays ×0.5**
  (doubles the rate; 3.0 runs all timers 1.5× faster). Burst and semi-mode delays aren't reduced.
  ScaleSpread k = 1. No kick change.
- Slow Pause (pl+0x69c & 8) owner: every attack delay ×6.6666665 (the stock hit too, §5.1). 3.0 has
  no such rule. UNVERIFIED intent: it caps the owner's rate while everyone else is frozen.
- Slow motion: delays ×T (`1/max(fuser1,0.1)`). Weapon timers count down in real frametime
  (`PostThink` 0x10054180, `gun+0x8c..0x98 -= gpGlobals->frametime`).

### 3.8 ShootBulletsPlayer (2.1 0x1003fd40)

```
rbullet = (DAT_100aca80 != 0) || (shooter.pev->fuser1 != 0)   // DAT_100aca80 is .bss and never written (one reference in the binary) -> slow-mo only
ammo = get_ammo_info(param ammo); m = 1.0  (_DAT_100ac85c, reset ONCE per call)
if btype == 2 (pierce continuation): see below
for pellet i in 1..shots (seed s = param_seed + i):
    if !(pev->flags & FL_FAKECLIENT):
        x = SRF(s, -.5,.5) + SRF(s+1, -.5,.5);  y = SRF(s+2, -.5,.5) + SRF(s+3, -.5,.5)
    else: repeat x = RF(-.5,.5)+RF(-.5,.5), y = ... until x²+y² <= 1   (engine RandomFloat)
    dir = aim + x*spreadX*right + y*spreadY*up     (not normalized)
    end = src + dir * ammo.range(8192)
    if rbullet: CBulletManager::FireBullet(...); continue
    tr = UTIL_TraceLine(src, end, ignore shooter)
    if tr.fraction != 1:
        idx  = trunc(dist(src, tr.endpos) / ammo.unit)        // computed as dist/(unit*10)*10
        dmg  = ammo.dmg(int) * table[idx] * mult              // table[i] = min(1, 1/sqrt(max(i,1)*0.1))
        if damagemult > 0 && cheats(0x102e0100): m = damagemult
        m += RandomFloat(0, 0.05)                             // engine RNG, not shared
        TraceAttack(attacker, dmg*m, dir, tr, btype == 1 ? 0x2001002 : 0x1002)
        left = dmg * ammo.pierce;  if victim IsPlayer: left *= 0.5
ApplyMultiDamage
if !rbullet && btype != 1 && left > 5:                         // uses the LAST pellet's 'left'
    step = min(left, 48);  p = tr.endpos + dir*step            // 3.0: min(2*left, 48)
    if POINT_CONTENTS(p) != CONTENTS_SOLID:
        ShootBulletsPlayer(shots=1, src=p, dir, spread, dmg = m*left, btype=2, ...)
btype 2: end = src + dir*4096 (no spread); if hit: idx = trunc(dist*0.0033333*10) (= dist/30);
         TraceAttack(dmg_param * table[idx], bits 0x1002); no further penetration.
```
Consequences: without cheats, the random multiplier is **not reset between pellets**. Shotgun
pellet *k* of a shot gets `1 + Σ_{j≤k} U_j(0,0.05)`, averaging 1 + 0.025·k, up to +40% on the 8th
pellet. Only pellets that hit something add to the sum. Damage is passed as a float. Rounding
happens in TakeDamage (§4.2).

`CBulletManager` 2.1 (`FireBullet` 0x1003f7e0, think `FUN_1003f770` every 0.1 s, update
`FUN_1003f910`): step per think = `vel_mps × 4 × S × dir`, where `S = shooter fuser1 (or 1)`, ×0.2
if `shooter+0x15d` is set (UNVERIFIED: the slow-pause owner flag). That is 40·vel u/s at normal speed,
as in 3.0. On a hit it applies the same falloff/damage/random/pierce rules, with pierce step
`min(left,48)`, continuing as btype 2.

### 3.9 Reload (2.1 `Reload` 0x1004d0e0)

```
no weapon: CCombatBlock (kung fu only)
kind 2 or 3: nothing                                 // 3.0: knife -> CCombatBlock
kind 1 (and single id != 36): ShotgunReload
reserve > 0 && st+8 == 0 required                    // no reload while a burst is pending (same as 3.0)
anim = (id == 33 && clip > 0) ? seq[8] : seq[1]
ReloadWeapon(clip_size, anim): needs min(clip_size - clip, reserve) > 0; st+0xc = 1; m_flNextAttack(pl+0x118) = info.reload   // not scaled by T
idle = 5.0; unzoom; event reload.sc; player anim 0x32
```
Katana (kind 10) goes down the magazine path and does nothing (no reserve).
ShotgunReload `FUN_1004cea0`, `st+8` phases:
- 0 → 1: if reserve > 0 and clip < size: unzoom, anim seq[8], next attack/idle/primary/secondary
  +0.3.
- 1: each time idle ≤ 0, move one shell, play `weapons/insert_shell.wav` on the **server**
  (`EMIT_SOUND_DYN`), anim seq[9], idle = `info.reload` (0.3). When full or reserve is empty: phase 2.
- 2: anim seq[10], next attack 0.3, idle 3.0; `st+0x24 = 0`.

3.0 sends the phases as `reload.sc` fparam 8/9/10 instead. Timing is the same.
`StopReload` exists in 3.0. In 2.1 the stock hit clears `st+0xc`/`st+8` inline (§5.1).

### 3.10 Slow-motion factor

`T(fuser1) = fuser1 == 0 ? 1 : 1/max(fuser1, 0.1)`. 2.1 multiplies **delays** by T at the moment
they're set. 3.0 multiplies the **timer decrement** by `max(fuser1,0.01)`. They're equivalent except:
(a) the floor (0.1 vs 0.01); (b) in 2.1 a delay set before slow-mo starts isn't stretched; (c) DFR
differs (0.5× auto delays vs 1.5× all timers).

## 4. Damage on the victim

### 4.1 TraceAttack (2.1 0x10053310, labelled `CBasePlayer::TakeDamage`)

```
if now < pl+0x694 (spawn protection): return
if pev->iuser4 & 0x10c10 (stunt/dive states): dmg *= 0.7          (same as 3.0)
if attacker is a player && PlayerRelationship == teammate && mp_friendlyfire == 0: return
if takedamage == 0: return
pl.m_LastHitGroup (pl+0xf8) = tr.iHitgroup
hitgroup 1: if bits & DMG_BULLET(2): dmg *= 2, headshot flag       // shotgun bits 0x2001002 contain 2 -> x2 (3.0: x1.5); thrown knives (0x1080) never get x2
hitgroup 6,7: dmg *= 0.5
kevlar sound if armor && bits&2 && IsAlive && hitgroup 2..5
if !IsAlive (corpse): bullet-dance anim; if !onground: velocity += 50*dir
PTakeDam message at most every 0.3 s (pl+0x6c8), same fields as 3.0; hit sounds; pain sound 3/7
AddMultiDamage(attacker, this, dmg, bits)
```
Missing vs 3.0: the `pl+0x524` timed dodge ×0.7 and the 1.5× shotgun headshot.

### 4.2 TakeDamage (2.1 0x10052cf0, labelled `CBasePlayer::TakeHealth`) — armour

Verified in disassembly (0x10052e07..0x10052e8f, `d8 e1 = fsub st(0),st(1)`):
```
if bits & 0x40 (DMG_BLAST): gamerules hook
if !IsAlive or dmg == 0: return
flinch anim: legs (6/7), or horizontal speed >= 80, or dmg <= 80 -> FUN_1003ede0; else FUN_1003ee00
if !FPlayerCanTakeDamage: return
if armorvalue != 0 && !(bits & 0x40e0) && hitgroup in 2..5:
    if dmg <= armor: armor -= dmg; dmg *= 0.5
    else:            dmg = armor (old value); armor = 0             // literal code (dmg - (dmg - armor)); likely a bug, but that's the behaviour
CBaseMonster::TakeDamage(..., (float)ftol(dmg), bits)               // truncated to int
pev->punchangle.x -= 3                                              // victim view punch on every hit (3.0 removed it)
HLTV director message, HEV suit logic (HL leftovers)
```
3.0: `dmg -= dmg·min(armor_absorb=0.2125, 1)`, no `armorvalue` change, bits mask `0x80040e4`. The
2.1 armour therefore halves body hits and is used up. A body hit bigger than the remaining armour
deals exactly the remaining armour value.

## 5. Melee and blades

### 5.1 Stock hit / cold cock (2.1 `AlternateAttack` 0x1004ab40 → `FUN_100572a0` = ColdCockAttack)

- Allowed only when `info+0x10` (u8 flag) != 0: **M4A1 (5) and Sawed-off (33)**.
- If the weapon is a grenade with the pin pulled: `GrenadeIdle(force)` (throws it). Clears `st+0xc`
  and `st+8` (cancels reloads and bursts).
- Delay 0.725 × T (or ×6.67 SlowPause). It goes on next primary/secondary/alt. Idle 2.0. No stunt
  modifier (3.0: 1.0875 while stunting, damage ×2/3).
- `ColdCockAttack(src = gunpos, end = gunpos + fwd·38, hull 3, damage 20.0, player anim 23, flags 0,0,0,0)`.
  The hull trace hits the first entity with takedamage and a non-negative `+0x118`. Friendly-fire
  check. Players get kungfuhit.wav. `FUN_100439e0` lets a blocking victim cancel it. TraceAttack
  (bits from the caller's frame, UNVERIFIED, probably 0x1080 like the blades). The four bool flags
  (disarm, knockback, ...) are all 0, so no disarm.
- Sound: kevlarhit.wav on hit, closecombat.wav on miss. Event `coldcock.sc`. 3.0's reach is 35 and
  damage is `info+0x10` (25..70).

### 5.2 Knife slash and throw (2.1 `FUN_1004c6c0` = KnifeFire)

Common: delay = `rate × (DFR 0.5) × (SlowPause 6.67 | T) × 0.7` on next primary and secondary
(combat 0.4 → 0.28 s, seal 0.3 → 0.21 s); idle 3.0.

Slash (primary, `st+0x24 == 0`):
- Refused while `iuser4 & 0x10c20`. Player anim 25 + RandomLong(0,2). Hold window
  `pl+0x728 = now + min(rate·5, T·rate·0.5)`.
- Trace 38 u from gunpos (`FUN_10056dd0`, hull 3). If the target takes damage: `FUN_10043870`
  (victim knife-block) can cancel. TraceAttack(**combat 35 / seal 15**, `v_forward`, bits
  **0x1080**). On a player: `st+8 = 1`, hitbody sound.
- Miss: `pl+0x718 = now + min(3, 0.3·T)`, `pl+0x71c = 35|15`, `pl+0x720 = 1` (lunge/whiff state).
- Event `knife.sc` (b2/i2 = hit). There is no kung-fu-bar multiplier (3.0 uses GetMeleeMultiplier).

Throw (secondary): origin = eye + fwd·32 + right (traced from eye + right). **Velocity = fwd·1300**
(3.0: 1900). angles = vec_to_angles(dir), angles.z = 90, avelocity.x = −1300. Third-person anim 28
on the ground. knife_miss.wav. If not Infinite Clip: free slots += `info.slots`, speed update, stack
−1. At 0 the weapon is removed and the best weapon selected (`FUN_10049fb0`).

`CTSKnife::BounceTouch` 0x10048380 (2.1), thrown-blade damage:
```
d = |pos - throw_origin|
dmg = (btype == 6 combat) ? (d < 512 ? 80 : max(50, 80 - (d-512)*80/1536)) : 50     // seal 50 flat
if other.takedamage && other.IsPlayer: TraceAttack(dmg, vel dir, bits 0x1080); vel *= -0.25; hitbody sound
elif other == worldspawn:
    if speed >= 100 && -dot(normal, dir) < 0.4 && normal.z <= 0.98:  ricochet: sparks msg, vel *= 0.5, keep flying
    else: stick (solid 0, movetype 5, angles from dir, z=90), hit sound
elif other is another "knife": ignore
else: vel *= -0.25
then: touch = WaitTouch (pickup), gravity 0.75, remove at now+10           // 3.0: 30 s, gravity by blade type
```
The "flying" flag (`+0x80`) clears below 700 u/s but is **not** tested before dealing damage in
2.1. Thrown blades hurt only players (`IsPlayer`), not breakables. The +0x84 origin and the
type come from `CreateKnife` 0x10048010. Note: CHANGELOG/docs talk about "max 80 dmg", and that
matches combat knife ≤ 512 u.

### 5.3 Katana (2.1 `FUN_1004c090`)

```
refused while iuser4 & 0x30c20
speed = |vel|;  back = speed > 100 && dot(vel_dir, fwd) <= -0.5
reach_len = 48; base = (speed > 100 ? 35 : 70); hold = 0.5; anim alternates 0x1d/0x1e (event variant 17/16)
if back:              iuser4 |= 1; base = -100; reach_len = 54; hold = 1.0; anim 0x1f (variant 15); pl+0x470 = now + 3T
elif !onground:       anim 0x20 (variant 17)
elif duck || gun flag 0x4000: iuser4 |= 4|1; view_ofs = (0,0,16); base = 90; hold = 1.0; anim 0x21; pl+0x470 = now + 3T
pl+0x72c = now + min(hold*5, T*hold*0.5)              // katana-block window
v = trunc(base * 0.85)                                 // 29 / 59 / -85 / 76
end = gunpos + fwd * reach_len * sign(v)               // backward swing hits BEHIND the player
hull = v >= 0 ? 3 : 1
hit -> FUN_10043720 (victim katana block, gets float v) may cancel; else TraceAttack(|v|, fwd, bits 0x1080)
miss -> pl+0x718 = now + min(3, 0.3T); pl+0x71c = v; pl+0x720 = 2
delay = hold * (DFR 0.5) * (SlowPause 6.67 | T) * 0.7  -> 0.35 s normal, 0.7 s back/duck;  idle 3.0
```
3.0: 50 base, 35 stunting, 55 backward, × GetMeleeMultiplier, bits 0x1080, plus `KatanaThrow`
(150 dmg projectile, 0.7 s cooldown). In 2.1 the katana has **no throw, no block, no bar multiplier**.

### 5.4 Kung fu (2.1 `FUN_1004de10` = CCombatAttack)

Gate: `pl+0x118`, next primary and next secondary must have expired, and `iuser4 & 0x70c30 == 0`.
`speed = |velocity|`, `back = speed > 100 && dot(vel_dir, fwd) <= -0.5`. `clamp(a,lo,hi)` below is the
code's `<lo → lo, >hi → hi`.

| Input / condition | base dmg | reach | delay (×T) | anim |
|---|---|---|---|---|
| IN_ATTACK, `iuser4 & 0x10` (stunt) or airborne | clamp(speed·0.1, 10, 30) | 38 | 0.3 | 0x18 (airborne) |
| IN_ATTACK, ground, combo `gun+0xda8` < 5 | 10 (combo++) | 38 | 0.15 | 0x16 |
| IN_ATTACK, ground, 6th punch | clamp(speed/15, 10, 20) (combo = 0) | 38 | 0.2 | 0x17 |
| IN_ATTACK2, `iuser4 & 0xc00` | clamp(speed·0.1, 10, 30) | 48 | 1.0 | – |
| IN_ATTACK2, ground and (duck or flag 0x4000): sweep | 30 | 48 | 1.0 | 0x14; view_ofs z=16; iuser4 \|= 4\|1; pl+0x470 = now+3T |
| IN_ATTACK2, back | clamp(speed·0.30303, 10, 90) | 56 (hits behind: v_angle pitch 0, reach ×−1, hull 1) | 0.9 | 0x11 |
| IN_ATTACK2, airborne, speed > 270, duck, dot > 0.5: flying kick | clamp(speed·0.1538462, 10, 45) | 48 | 0.9 | 0x10; view_ofs 16; iuser4 \|= 4 |
| IN_ATTACK2, airborne, speed > 200 | clamp(speed·0.1, 10, 30) | 48 | 0.7 | 0x13 → 0x12 → 0xf cycle |
| IN_ATTACK2 not just pressed (`pl+0x770 & 0x800 == 0`) and kick combo `gun+0xdac` < 3 | 10 (combo++) | 48 | 0.25 | 0xb/0xc alternate. **Unreachable in practice**: CCombatAttack is entered only from Primary/SecondaryAttack on a fresh press (`pl+0x770` = buttons pressed this frame, set in PreThink 0x100537fc) |
| IN_ATTACK2 (ground or speed ≤ 200), the normal case | clamp(speed/15, 10, 20) (combo = 0) | 48 | 0.5 | 0xa → 0xe → 0xd → 0xf cycle |

Then (0x1004e2dd):
```
cost = base * 0.9
dmg  = cost * bar(pl+0x6ec) * 0.01                    // 0..90 % of base, scaled by the bar
if !pl+0x731 (The One?): bar = max(0, bar - cost); send bar (byte) to owner (KFuPower-like msg 0x100cbc3c)
if KungFu powerup (pl+0x6c6): dmg *= 2
CloseCombatAttack(FUN_10056f20)(src = gunpos, end = src + fwd*reach*(back ? -1 : 1), hull back ? 1 : 3,
                  dmg, anim, strong = dmg > 15, ...)
miss: pl+0x718 = now + min(3, 0.3T); pl+0x71c = ±..., pl+0x720 = 0
if !(iuser4 & 1): FUN_10056b60(T*delay*0.9)           // movement slow-down during the attack (UNVERIFIED meaning)
next primary = secondary = idle = T*delay; pl+0x474 = now + T*delay
```
Bar regen: +15/s ÷ T in PreThink, cap 100 (3.0 regen is also 15/s per the port's `regen_melee_bar`).
Block (`FUN_1004dc70` = CCombatBlock): when all timers are clear and `iuser4 & 0x70c30 == 0`, block
until `pl+0x724 = now + min(3.0, 0.3·T)`. block.wav plays if more than 1 s has passed since the last
block. Next primary/secondary = the same 0.3·T. 3.0 blocks for 0.5 s and also blocks with blades.

3.0 kung fu uses different bases (punches 10/20/25/30, sweep 35, back 15–80, flying 15–45, light
kicks 15, heavy 25, airborne 15–30), delays (0.1–0.35) and multiplier
`GetMeleeMultiplier = (max(bar,0)·0.5 + 50)/100`. A full bar gives 100% in 3.0 but 90% in 2.1, and
an empty bar gives 50% in 3.0 but **0%** in 2.1.

## 6. Grenade, explosion, shrapnel

- `GrenadeFire` `FUN_1004c020`: same as 3.0 (pin anim seq[19], `st+8 = 1`, 0.7 s lockout).
- `GrenadeIdle` 0x1004d260: same pitch remap `p·(p≥0 ? 10/9 : 8/9) − 10`, speed `min(750, (90−p')·7)`.
  Overhand from eye+16fwd, `v = fwd·speed + vel`, avelocity.x 200. Roll from origin+16fwd, ×2/3,
  friction 0.4, avelocity (−100,600). `CM61Grenade::CreateGrenade(player, fuse 3.0)`. Free slots +=
  `info.slots` (**15** in 2.1). The stack is always decremented (also under Infinite Clip). The
  holster/coldcock force-throw is the same.
- `CM61Grenade::WaitThink` 0x100477e0: fuse counter += 0.1 per 0.1 s think, or `0.1·max(fuser1,0.1)`
  in slow-mo. Explodes when counter ≥ 3.0. Flying impact: speed > 64, 64 u look-ahead, if
  `speed·0.1 ≥ target health` → TraceAttack (same as 3.0). Explosion:
  `TSExplosion(origin, pev, owner, dmg 100, bits 0x1040, r_full 128, r_max 1024)` (3.0: 110, 300).
- `TSExplosion` 0x10047aa0 (also called by `CBreakable::Die` and `CTSBomb::WaitThink`): screen shake
  (amp = dmg, 80, 1 s, 2·r_max), TSFrags message, then for each entity in r_max with takedamage and
  `deadflag != 2`: `d = dmg − max(0, dist − r_full)·dmg/(r_max − r_full)` (≥ 0); screen fade on
  living players (222,227,189); occlusion trace with obstacle thickness subtracted (same as 3.0).
  Then **shrapnel**: `n = RandomLong(30, 45)` pieces, each `dir = normalize(RF(−1,1), RF(−1,1),
  RF(−0.3,1))`, `CTSShrapnel::Create(owner-or-inflictor, origin, dir·2000 + owner.velocity)`. Last,
  `CreateSlowMotionPoint(0.15, 1.5)` if `FUN_10043670()` (spectacularness). **No CTSWorldGun
  knock-around** (3.0 has it).
- `CTSShrapnel` (BounceTouch 0x10047110, WaitThink 0x10047450): touching a damageable player →
  TraceAttack(**100**, vel dir, bits **0x1004**), attacker = owner, bounce ×−0.25. worldspawn/func_wall
  → sticks (movetype 5). Others → ×−0.25 bounce. Each think: speed −1 u/s per 0.1 s. Removed when
  speed < 100 and not stuck, or when the lifetime `+0x78` passes (set in its Spawn, value
  UNVERIFIED). So every grenade (and exploding breakable) in 2.1 also sprays 30–45 lethal 100-damage
  fragments. 3.0 never creates them.

## 7. Drop, pickup, world guns

- `CTSWorldGun` Spawn (labelled `CBaseEntity::Save`) 0x100650f0: same physics as 3.0 (BOUNCE, BBOX,
  gravity 0.7, friction 0.8, life `clamp(weaponstay, 5, 60)`). 2.1 has no briefcase case. BounceTouch
  0x10065270: same sliding rules (vel.z ×0.3 per touch; on ground ×0.7 under 40·S u/s, else ×0.9;
  breaks func_breakable with health ≤ slots+50 for 50 dmg). Pickup on touch only with IN_USE
  (`WaitTouch` 0x100657b0), the same as 3.0. The record copied is 0x30 bytes.
- `ThrowWeapon` 0x100564d0: alive: `speed = 2·(90 − pitch)` (pitch = v_angle.x + offset); dead:
  RandomLong(60,160) with random angles. Origin eye + 16fwd (+ offsets). `v = fwd·speed + 0.9·vel +
  (0,0,0.33·speed)`. avelocity y/z RandomLong(±300). 3.0's decomp lost the velocity sum; the
  structure is the same (UNVERIFIED whether the constants match).
- `PickUpWeapon` 0x10055830: needs `free_slots − info.slots ≥ 0`, then `FUN_1004a040` (TakeWeapon).
  free −= slots, speed update, gunpickup2.wav. It switches to the akimbo id if the twin is owned.
- Akimbo split on drop: UNVERIFIED in 2.1 (not traced). 2.1 Berettas can't split (no single id).

## 8. Buying, slots, speed

- Commands are the same as 3.0: `tkw id_att`, `tki`, `tka type_count`, `rst_cfg`, `weapon_<id>`,
  `lastinv`, `firemode`, `useitems`, `drop`, `drop_<id>`, `usepowerup`, `cashala` (+10000,
  cheats; 3.0 +30000). 2.1 adds `powerup <n>` (debug give) and `cutwire_<n>`. Armament: 32 entries at
  pl+0x50c (×0xc: id, attachments, isItem), ammo counts at pl+0x4cc[16]. Stackables expand to
  `min(count, info+0x24)` entries.
- `BuyArmament` = `FUN_100559d0` (called from `FUN_1004f350`, the spawn equip). `BuyWeapon`
  `FUN_10055e00`:
  ```
  if restricted(id, mask DAT_100b1d84): return
  if id == 24 (M61): game mode 0/1 -> refuse; else at most 2 per life (pl+0x68c)
  if CashBased: cost = info.cost + S 900 + L 800 + F 500 + Z 1800; need cash >= cost
  PickUpWeapon(...); if CashBased: cash -= cost
  ```
  `CashBased` = `FUN_100435f0`: **true when game mode (DAT_100ac8c0) is 2 or 3** (or `DAT_100aca60`,
  which nothing writes). 3.0's `CashBased()` returns 0, so 2.1 really charges money in modes 2/3.
  `BuyAmmo` `FUN_10055a40`: −2 = every owned weapon's ammo (iterates ids 63..0), −1 = current. Each
  buy adds `per_buy` (clamped to max carry by `FUN_10049f40`) and costs `price` when cash-based.
  9mmclip1.wav.
- Restrictions (`FUN_1004ecd0`/`FUN_1004ec80`): mask 0 → everything restricted. A set bit means
  allowed: 0x10 shotgun (kind 1, plus Sawed-off), 0x01 knife (kind 3, plus Katana), 0x08 kinds 6/7,
  0x02 pistol (kind 8, plus ids 8, 10, 21, 30), 0x04 SMG (kind 9, plus id 16). Grenade and kung fu are
  never restricted. The difference from 3.0 is that **Golden Colts (21) count as a pistol** (3.0:
  never restricted), and 3.0 maps akimbo Skorpions too.
- Slots: 81 at spawn (`mov [esi+0x4c0],0x51` 0x10055363). Speed `FUN_100436e0`:
  `free ≥ 70 → 310; else trunc(170 + free·(1/70)·140)`, then `SetClientMaxspeed` (clamped 0..310).
  3.0: `210 + free·120/81`. Kevlar slots/price: UNVERIFIED for 2.1 (the `tki` path `FUN_10055c30` was
  not traced).
- `tsbuylist.tsa` (2.1, client-only file, read by client `FUN_1006b090` into `this+0x824`):
  **9 presets × 0x408 bytes**, raw structs, little-endian:
  - `+0x00 + 8·t` (t = 0..15): `{i32 rounds, i32 buys}` per ammo type (for example t=1: 210, 7).
  - `+0x84 + 0x38·k` (k = 0..~25): weapon entry `{i32 id, i32 attachments, i32 cost, …, +0x30 i32
    count}` (count = stack size for knives/grenades).
  - `+0x400`: i32 total cost (weapons + attachments). `+0x404`: i32 slots used.

  The shipped `tsbuylist.tsa` and `tsbuylist_official.tsa` are identical. The 3.0 install's file is
  0 bytes (created on first save). The client turns a preset into `tkw/tka` commands. Server limits
  are only slots, restrictions, the grenade limit and cash (modes 2/3).

## 9. Powerups that touch weapons (2.1 pl+0x69c bits)

| bit | powerup | 2.1 weapon effect | 3.0 |
|---|---|---|---|
| 0x02 | Infinite Clip (`FUN_10042c20`) | no clip decrement (standard/shotgun/akimbo), thrown knives not consumed, grenades still consumed. **No `MultiplyClips`**. An empty clip still plays EmptySound (Fire checks clip < 1 first) | adds MultiplyClips ×2 on pickup and an empty-clip bypass |
| 0x10 | Double Fire Rate (`FUN_10042c40`) | auto/shotgun/knife/katana delays ×0.5; semi fires while held; ScaleSpread k=1 | all timers ×1.5, kick ×2/3, decay ×1.5 |
| 0x08 | Slow Pause (`FUN_10042c10`) | owner's attack delays ×6.6666665 | – |
| pl+0x6c6 | Kung Fu (`FUN_10042c30`) | kung-fu dmg ×2 | same |
| fuser1 | slow-mo | delays ×T, real bullets, grenade fuse in thrower's time | same idea |
| 0x20 (pickup) | grenade powerup: `PickUpWeapon(24)` | – | (3.0 type list differs: gamerules doc) |

Powerups are stored in `pl+0x6a0` and activated by `UsePowerUp` 0x10056a90. Slow-mo/slow-pause are
refused when `DAT_100ac8d4` is set ("You can't use Slow Motion now").

## 10. Client (prediction) — what must switch

TS 2.1's client.dll also contains a full `CTSGun` copy with the same offsets (event indices at
`+0xd04..+0xd14`, client `FUN_1001ec80`), its own `Write_*` tables (for example client
`FUN_1001a4b0` = Write_ak47, same 2.1 values) and a CustomWP parser with 3 fields (client
`FUN_1008d7b0`). The 3.0 port runs the shared `Gun` on both sides, so a 2.1 mode must switch these
**in shared code** (both server and `client/src/prediction/gun.rs`):

1. The weapon/ammo tables (`shared/data/*.toml` → a second table set chosen at runtime, like
   `set_custom_tables`): clip, rate, reload, accuracy, view/acc kick, scale/kick flags, modes, zoom,
   pellets, ammo type, slots, attachments, ids present (no 2/36/37; TMP at 17). The client can't
   learn the table from CustomWP (only 3 fields), so the mode flag itself must reach the client
   (for example a physinfo key or a new message), like `ts_pm_arith`.
2. Fire-delay rules (§3.2/3.3/3.6/3.7): semi = rate, shotgun semi 0.1, DFR ×0.5 instead of ×1.5
   timers, slow-pause ×6.67, delays ×T instead of timer scaling, no UMP 2-burst.
3. ScaleSpread (§3.4): k without silencer factor, dt ≥ 0, `x = dt/T`. Silencer spread ×1.2.
   Barrett/M60 >80 → penalty 0.1. Penalty decay without DFR.
4. VKickback (§3.5): the random pitch/yaw formula with SharedRandomFloat seeds +0/+1/+2 (client
   applies the pitch from seed+1).
5. Pellet direction (§3.8): the triangle distribution (client re-traces decals with the same seed).
   This must match the server for decals.
6. Shotgun state machine differences (fire during reload → phase 2 without shooting; kick ×1.3 semi).
7. Akimbo ±4 offset.
8. Kung-fu/knife/katana timing and the bar math (`spread.rs melee_damage/regen_melee_bar`), no
   knife/katana block on reload, no katana throw (secondary does nothing).
9. Events: no `draw.sc`/`grenade.sc` in 2.1. The 3.0 client can keep them; for a 2.1 *client*
   protocol, skip them.

Server-only: damage, falloff/penetration (pierce step), the random damage factor, hitgroups, armour,
punchangle, thrown-blade damage/velocity (the velocity is server-spawned), grenade/explosion/
shrapnel, buying/cash/restrictions, slot→speed formula (speed is sent via maxspeed; but if
`shared/src/ts.rs speed_by_slots` is used in pm prediction it must switch too), real-bullet trigger,
customweapons parser.

## 11. Things 3.0 has that 2.1 doesn't (disable in 2.1 mode)

- Weapons: Beretta 92F single (2), Contender G2 (36), Akimbo Skorpions (37), Skorpion as id 17 (2.1
  = STEYR-TMP), UMP burst mode and the 2-round burst rule.
- Per-weapon stock damage and stock on 9 more weapons (2.1: only M4/Sawed-off, 20 dmg); stunting
  stock modifiers.
- Katana throw; knife/katana block on reload; GetMeleeMultiplier (bar 50–100%) on all melee.
- Thrown-knife headshot flag (0x8001000) and 1900 u/s, 100/50/150 damage; 30 s blade lifetime.
- Silencer bonus (spread ×0.875), ×0.775 damage/kick; DFR kick/decay changes; DFR ×1.5 timers.
- Semi-auto fixed 0.1 s on auto-capable guns; shotgun semi 0.15 s and ×0.35 kick.
- Sparta-tuned absolute damage table; `armor_absorb`/`health_absorb` (0.2125 non-depleting armour);
  customweapons damage/cost fields; CustomWP 6-field format.
- Barrett 35 u/s → 0.3 penalty; M60 175 u/s akick ×5.
- Shotgun headshot ×1.5; dodge-window ×0.7 (pl+0x524).
- `realbullet` cvar making all bullets simulated (2.1: slow-mo only).
- Infinite Clip `MultiplyClips` and empty-clip bypass.
- Explosion knocking dropped guns around.
- Golden Colts exempt from restrictions.
- `draw.sc`, `grenade.sc` events; original-owner tracking in the weapon status.

## 12. 2.1 features missing in 3.0 (add for 2.1 mode)

- Ammo-based damage (`ammo.dmg × weapon.mult`) and the 2.1 ammo table (t=12 .454, .22 pierce
  0.05, different max carry).
- Accumulating per-pellet random damage factor (+U(0,0.05) per hit, `damagemult` replaces the base
  when cheats are on).
- Random-sided, random-magnitude view kick (§3.5).
- HL triangle spread distribution.
- Silencer penalty (spread ×1.2, damage ×0.8).
- Barrett/M60 moving > 80 → spread penalty 0.1.
- Slow-pause owner ×6.67 attack delays.
- 2.1 armour (half damage, depletes, quirky overflow) and victim punchangle −3.
- Shrapnel from every TSExplosion (30–45 × 100 dmg) and the 100/128/1024 grenade.
- Thrown combat knife 80→50 distance falloff, 1300 u/s, ricochet/stick rules, 10 s.
- Katana and kung-fu tables of §5.3/§5.4, bar-scaled (0–90%) damage and bar cost.
- Cash enforcement in game modes 2/3; per-life grenade cap in modes ≥ 2 (same as 3.0) and no
  grenades in modes 0/1 (same).
- Slot speed 170..310.
- Server-side `insert_shell.wav` on shotgun reload (cosmetic).

## 13. Rust touch points

| Area | File / function |
|---|---|
| Tables | `crates/shared/data/{weapons,ammo,combat}.toml`, `shared/src/weapons/table.rs` (`tables()`, `set_custom_tables`, `with_weapon_params`): add a 2.1 table set selected by a cvar (precedent `ts_pm_arith`, `server/src/rules/cvars.rs:84`) |
| Fire logic | `shared/src/weapons/gun.rs`: `primary_attack` 600, `secondary_attack` 650, `fire` 725, `scale_spread` 756, `vkickback` 776, `standard_fire` 797, `shotgun_fire` 846, `akimbo_fire` 887, `cold_cock` 988, `reload` 1555, `shotgun_reload` 1601, `weapon_idle` 1661, `multiply_clips` 2008, `decrement_timers` 446 / `timer_dt` 465 |
| Math | `shared/src/weapons/spread.rs`: `pellet_offset` 52, `pellet_dir` 62, `timer_step` 96, `decay_spread_penalty` 110, `regen_melee_bar` 127, `shot_interval` 142, `grow_spread_penalty` 155, `view_kick` 178, `melee_damage` 207, `range_index` 280 |
| Melee | `gun.rs`: `knife_fire` 1130, `katana_fire` 1219, `katana_throw` 1305, `ccombat_attack` 1332, `ccombat_block` 1515; server `server/src/weapons/melee.rs` |
| Bullets | `server/src/weapons/fire.rs` `shoot_bullets` 84, `pierce_shot` 152; `server/src/weapons/bullets.rs` |
| Victim | `server/src/player/damage.rs` `trace_attack` 146, `after_kevlar` 81, `take_damage` 250 |
| Projectiles | `server/src/weapons/projectiles.rs` (`Knife` 451, `bounce_touch` 676, grenade); `server/src/entities/stock/explode.rs` `ts_explosion` 206; `server/src/entities/ts/shrapnel.rs` (already implements CTSShrapnel; call it from `ts_explosion` in 2.1 mode) |
| Inventory/buy | `server/src/weapons/inventory.rs` `buy_weapon` 375, `buy_ammo` 394, `buy_armament` 430, `throw_weapon` 110, `sync_speed` 30; `server/src/rules/state.rs cash_based` 196; `shared/src/ts.rs speed_by_slots` 85 |
| customweapons | `server/src/weapons/custom.rs` (`parse_line` 53, `load` 131, `inform` 191); `shared/src/protocol/weapons.rs` (CustomWP) |
| Client | `crates/client/src/prediction/gun.rs` (`post_think` 508, `event_index` 236) uses the shared `Gun`; it needs the mode flag |

## 14. Open questions / UNVERIFIED

1. Whether competitive 2.1 servers ran `customweapons weapons_official.txt`. The binary default is
   the built-in table.
2. `DAT_100aca80` (real-bullets global) and `DAT_100aca60` (cash global) are .bss and never written
   by code (one/two references each, checked by byte search). Treated as always 0.
3. ColdCock TraceAttack bits and the meaning of its four bool arguments (all 0 from
   AlternateAttack). Not decoded inside `FUN_100572a0`.
4. `FUN_10056b60(T·delay·0.9)` after kung-fu attacks (probably a movement slow-down) and
   `FUN_10043720`/`FUN_10043870`/`FUN_100439e0` (katana/knife/kung-fu block resolution; the
   kung-fu one also changes the bar) weren't traced. The melee/stunt report should cover them.
5. `CBulletManager` ×0.2 when `shooter+0x15d` is set (assumed slow-pause owner).
6. Shrapnel lifetime field `+0x78` (Spawn not traced; the port's 3.0 entity uses 30 s/10 s).
7. 2.1 `DropWeapon` akimbo splitting, kevlar/item buy (`FUN_10055c30`) prices/slots, and the 2.1
   `WeaponInfo`/`WStatus` payloads (`CTSGun::UpdateClientData` 0x1004d8c0) weren't compared to 3.0.
8. 3.0 range index: weapons.md says "round"; MSVC `__ftol` truncates in 2.1. Check 3.0 mp.dll if
   bit-exactness matters.
9. 3.0 kung-fu bar cost per attack wasn't re-derived here. Compare `CCombatAttack` 0x86078 if the
   2.1 bar model is implemented as a switch.
10. ThrowWeapon velocity constants in 3.0 (decomp lost the sum).
