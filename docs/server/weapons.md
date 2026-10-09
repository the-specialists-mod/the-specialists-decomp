# Weapons and combat (server `ts_i386.so`, with client notes)

Scope: the weapon tables, `CTSGun` (the single weapon entity), firing and hit detection, projectiles
and explosions, events, user messages, buying/loadouts, and notes for the Rust rewrite.

Conventions:

- All addresses are **Ghidra addresses** (objdump address + 0x10000), as used in `server/functions.tsv`.
- `info+0xNN` means a field of `s_weapon_info` (one entry per weapon id). `st+0xNN` means a field of
  `s_weapon_status` (per player, per weapon id). `gun+0xNN` is a `CTSGun` member, `pl+0xNN` is a
  `CBasePlayer` member, and `pev+0xNN` is an `entvars_t` field.
- "(inferred)" marks meanings that come from usage, not from symbols.
- Vtable calls: decompiler `vtable[N]` is `vtables.tsv` slot `N-2`. Byte offset `+0xNN` into a vtable
  is slot `NN/4 - 2` (for example `+0x54` = slot 19 `TraceAttack`, `+0x10` = slot 2 `GiveSlowMul`).

## 1. Where the numbers live

The stat tables are **not static data**. Both live in `.bss` and are filled at DLL init by code, so
`objdump -s` shows zeros. Every number below comes from emulating the writer functions (parsing the
decompiled assignments and copying the string literals from `.rodata`).

| Global | Address | Layout | Filled by |
|---|---|---|---|
| `global_weapon_info` | `0x17db40` | 38 × `s_weapon_info` (stride `0x3dc` = 988 B) | `compile_weapons_info` `0x7fe28` |
| `global_ammo_info` | `0x186e00` | 16 × `s_ammo_info` (stride `0x38`) | `compile_ammo_info` `0x7f51c` + `Set_ammo_count` `0x7f2cc` |
| `range_damage_multipler` | `0x187180` | 10000 × float | `compile_range_damage` `0x7f1f4` |
| `g_iWeaponPriority` | `0x190dc0` | 38 × int (auto-switch order) | `compile_weapons_info` |

`compile_weapons_info` zeroes the table, then calls one `Write_<weapon>(s_weapon_info*)` per id, then
`Sparta()`. `Sparta()` overrides `accuracy`, `view kick`, `accuracy kick` and `damage` for 32 weapons
through `SetSpartaWeapon(id, acc, vkick, akick, dmg)` `0x7fa34`. These overrides are the shipped
defaults ("all the weapon default values updated to the latest weapon config"). The tables below
already include them.

Accessors (both clamp out-of-range ids to entry 0):

```c
s_weapon_info *get_weapon_info(tsweapon_t id) { return id < 0x26 ? &global_weapon_info[id] : &global_weapon_info[0]; } // 0x7f190
s_ammo_info   *get_ammo_info(int t)           { return t < 0x10 ? &global_ammo_info[t]   : &global_ammo_info[0];   } // 0x7f1c4
```

Runtime overrides go through the same 5 fields. `adjust_weapon_value(file)` `0x9eca4` reads
`<gamedir>/<file>` (cvar `customweapons`; console `loadweapons`). Each line is
`id accuracy viewkick acckick damage cost`, plus `armor_absorb <f>` and `health_absorb <f>`. Accuracy
is clamped to ≥ 0.001. `save_weapon_value` `0x9f044` (console `saveweapons`) writes the same format.
`AdjustSpecificWeapon` `0x9ea3c` changes one weapon. Every change is pushed to clients with
`CustomWP` (§6). The client ships its own copy of all the `Write_*` functions (for example client
`FUN_100047d0` = `Write_ak47`), so client and server start from identical tables.

## 2. `s_weapon_info` layout (0x3dc bytes)

| Off | Type | Meaning | Evidence |
|---|---|---|---|
| `0x000` | u8 | valid (1 = weapon exists) | `SelectWeapon`, `TakeWeapon` |
| `0x004` | i32 | clip size (for stackables: initial count) | `TakeWeapon`, `Reload` |
| `0x008` | u8 | ammo type (index into `global_ammo_info`) | `ReloadWeapon`, `ShootBulletsPlayer` |
| `0x00c` | u32 | firemode bitmask (bit n = mode n, §4.3) | `SwitchFireMode` |
| `0x010` | i32 | stock ("cold cock") damage, 0 = no stock attack | `AlternateAttack`, `ColdCock` |
| `0x014` | f32 | reload time (shotguns: time per shell) | `Reload`, `ShotgunReload` |
| `0x018` | f32 | fire delay in seconds (melee: swing delay) | `StandardFire` |
| `0x01c` | f32 | damage per bullet/pellet (melee: slash damage) | `ShootBulletsPlayer` arg |
| `0x020` | i32 | bullet kind: 0 normal, 1 shotgun, 2 internal "pierce". Projectiles: 4 grenade, 6 combat knife, 7 seal knife, 8 katana | `ShootBulletsPlayer`, `CreateKnife` |
| `0x024` | i32 | pellets per shot (stackables: max count carried) | `ShootBulletsPlayer`, `tkw` |
| `0x028` | f32 | **accuracy** = base spread (katana: throw cooldown) | saved as "accuracy" |
| `0x02c` | u8 | use `ScaleSpread` (recoil-driven spread growth) | `StandardFire` |
| `0x030` | f32 | **view kick** (punch angle, degrees) | saved as "view kick" |
| `0x034` | f32 | **accuracy kick** (spread growth per shot) | saved as "accuracy kick" |
| `0x038` | u8 | apply view kick | `StandardFire` |
| `0x03c` | i32 | zoom FOV step 1 (0 = none). FOV < 40 hides the view model | `SecondaryAttack`, `Zoom` |
| `0x040` | i32 | zoom FOV step 2 (0 = single step) | `SecondaryAttack` |
| `0x044` | char[64] | display name (also used by `WeaponIdFromString`) | `save_weapon_value` |
| `0x084` | u8 | HUD menu slot (1 = blades/grenade, 2 = pistols, 3 = SMGs, 4 = rifles/shotguns, 5 = akimbo) | values |
| `0x085` | u8 | position inside the slot | values, CHANGELOG |
| `0x086` | char[66] | HUD sprite `sprites/weapons/*.spr` | |
| `0x0c8` | i32 | id of the akimbo version of this weapon (-1 = none) | `TakeWeapon`, `StandardFire` |
| `0x0cc` | i32 | id of the single-gun version (self for non-akimbo; -1 for Golden Colts) | `TakeWeapon` |
| `0x0d0` | u8 | weight in inventory slots | `PickUpWeapon` |
| `0x0d4` | f32 | unknown, 0.8–1.0, not read by the server (client handling factor?) (inferred) | |
| `0x0d8` | i32 | cost | saved as "cost" |
| `0x0dc` | u8 | stackable (grenade, knives): pickups increase the count | `TakeWeapon` |
| `0x0e0` | u32 | allowed attachments mask | `CTSGun::AddItem` |
| `0x0e4` | u32 | built-in attachments (always on; a built-in silencer has no penalty) | `TakeWeapon`, `StandardFire` |
| `0x0e8` | char[64] | shell model | client fire event |
| `0x128` | i16[5] | body-group add for silencer, laser, flashlight, scope, laser+flashlight combined (-1 = n/a) | `GetBodyByItems` `0x7f0a4` |
| `0x132` | char[64] | `v_` model | `Deploy` |
| `0x172` | char[64] | `p_` model | `Deploy` |
| `0x1b2` | char[64] | `p_` model with silencer | `Deploy` (item bit 1) |
| `0x1f2` | char[64] | `w_` model | `CTSWorldGun::Spawn` |
| `0x232` | char[32] | player anim extension (`onehanded`, `twohanded`, `akimbo`) | `DefaultDeploy` |
| `0x252` | i16[29] | view-model sequence table A (§4.6) | `WeaponIdle` |
| `0x28c` | i16[29] | sequence table B, the "alternate grip" set; `[0] = -1` if absent | `SecondaryAttack` |
| `0x2c6` | char[64] | fire sound | client |
| `0x306` | char[64] | second sound: silenced fire, or pump for shotguns | client |
| `0x348` | u8 | weapon kind (below) | everywhere |
| `0x34c` | i32 | third-person muzzle/shell forward offset (client only) (inferred) | client `FUN_1003dfa0` |
| `0x350` | u8 | muzzle-flash/shell style class 0/1/2 (inferred) | |
| `0x354`, `0x358` | i32 | more effect offsets (client only) (inferred) | |

Weapon kind (`info+0x348`, returned by `GetWeaponType` `0x8705c`):

| Kind | Meaning | Primary | Secondary | Reload key |
|---|---|---|---|---|
| 0 | kung fu (id 0 only, no stats) | `CCombatAttack` | `CCombatAttack` | `CCombatBlock` |
| 1 | pump/auto shotgun (M3, SPAS, Mossberg) | `ShotgunFire` | grip toggle | `ShotgunReload` |
| 2 | grenade | `GrenadeFire` (overhand) | `GrenadeFire` (roll) | none |
| 3 | knife | `KnifeFire` slash | `KnifeFire` throw | `CCombatBlock` |
| 4 | akimbo built from two singles | `AkimboFire` | `AkimboFire` in modes 4/5 | `Reload` |
| 5 | akimbo-only (Golden Colts) | `AkimboFire` | as 4 | `Reload` |
| 6 | rifle / auto shotgun / MG | `StandardFire` | grip or zoom | `Reload` |
| 7 | sniper (Barrett) | `StandardFire` | zoom | `Reload` |
| 8 | pistol (Sawed-off and Contender included) | `StandardFire` | grip or zoom | `Reload` |
| 9 | SMG | `StandardFire` | grip or zoom | `Reload` |
| 10 | katana | `KatanaFire` | `KatanaThrow` | `CCombatBlock` |
| 11 | (briefcase/flag, `Write_flag`, unused) | `KnifeFire` on press | none | |

`GetWeaponType` remaps a few ids for the restriction system: Katana→3 (knife), Sawed-off→1
(shotgun), akimbo Uzi/Skorpion→9 (SMG), and akimbo Berettas/MK23/Colts/FN→8 (pistol).

Attachment / "item" bits (`st+0x10` owned, `st+0x14` switched on, `info+0xe0/0xe4`):

| Bit | Item | Buy price | Effect |
|---|---|---|---|
| `0x01` | silencer | 900 | damage ×0.775, spread ×0.875, kick ×0.775, accuracy-kick factor ×0.775, silenced `p_` model and sound, no muzzle flash. Built-in silencers (MP5SD, Ruger) get none of the penalties or bonuses. |
| `0x02` | laser sight | 800 | toggled with `useitems`. Server code shows no accuracy change (the "slightly better first shot" in CHANGELOG 2.1.20 is not in this binary) (inferred) |
| `0x04` | flashlight | 500 | toggled with `useitems` |
| `0x08` | scope | 1800 | secondary attack zooms instead of switching grip |
| `0x40` | (synthetic) akimbo flag in `GetActiveItems` | — | third-person rendering |

`useitems` (`CTSGun::SwitchItems` `0x8155c`) cycles: laser → flashlight → both → off, depending on
what is owned, and plays `weapons/switch.wav`.

## 3. The weapon list (decoded, Sparta overrides applied)

Ids are `tsweapon_t`. Id 29 is the briefcase/flag (`Write_flag`, never called by
`compile_weapons_info`, so `info[29].valid = 0`). Attachments: S silencer, L laser, F flashlight,
Z scope. `hud` = slot.position. `slots` = inventory weight (§7.3).

| id | key | display name | type | hud | ammo | akimbo→ / single← | slots | cost | att allow/default |
|---|---|---|---|---|---|---|---|---|---|
| 0 | melee | Kung-fu | 0 kungfu | 1.6 | 0 - |  | 0 | 0 | -/- |
| 1 | glock18 | Glock-18 | 8 pistol | 2.1 | 1 9mm |  | 10 | 850 | SLF/- |
| 2 | beretta | Beretta 92F | 8 pistol | 2.9 | 1 9mm | →8 | 10 | 900 | SLF/- |
| 3 | uzi | Mini-Uzi | 9 smg | 3.1 | 1 9mm | →16 | 20 | 1300 | S/- |
| 4 | benellim3 | Benelli M3 | 1 shotgun | 4.1 | 3 shells |  | 40 | 3000 | LFZ/- |
| 5 | m4 | M4A1 | 6 rifle | 4.2 | 4 5.56 |  | 40 | 4500 | SLFZ/- |
| 6 | mp5sd | MP5SD | 9 smg | 3.2 | 1 9mm |  | 25 | 2500 | SLFZ/S |
| 7 | mp5k | MP5K | 9 smg | 3.3 | 1 9mm |  | 20 | 1500 | SLFZ/- |
| 8 | beretta_akimbo | Akimbo Berettas | 4 akimbo | 5.1 | 1 9mm | ←2 | 10 | 900 | SLF/- |
| 9 | mk23 | SOCOM-MK23 | 8 pistol | 2.2 | 2 .45ACP | →10 | 10 | 700 | SLF/- |
| 10 | mk23akimbo | Akimbo MK23 | 4 akimbo | 5.2 | 2 .45ACP | ←9 | 10 | 700 | SLF/- |
| 11 | usas12 | USAS-12 | 6 rifle | 4.11 | 3 shells |  | 40 | 5100 | LF/- |
| 12 | desert | Desert Eagle | 8 pistol | 2.3 | 5 .50AE |  | 15 | 1050 | SLZ/- |
| 13 | ak47 | AK47 | 6 rifle | 4.3 | 6 7.62x39 |  | 40 | 3000 | Z/- |
| 14 | fnh | Five-seveN | 8 pistol | 2.4 | 7 5.7x28 | →30 | 10 | 1250 | SLF/- |
| 15 | aug | STEYR-AUG | 6 rifle | 4.4 | 4 5.56 |  | 30 | 5000 | SLZ/Z |
| 16 | uzi_akimbo | Akimbo Mini-Uzi | 4 akimbo | 5.3 | 1 9mm | ←3 | 20 | 1300 | S/- |
| 17 | skorpion | Skorpion | 9 smg | 3.4 | 12 .32ACP | →37 | 15 | 1100 | -/- |
| 18 | barrett | Barrett M82A1 | 7 sniper | 4.5 | 8 .50BMG |  | 70 | 9000 | LZ/Z |
| 19 | pdw | MP7-PDW | 9 smg | 3.5 | 7 5.7x28 |  | 25 | 2800 | SLZ/- |
| 20 | spas12 | SPAS-12 | 1 shotgun | 4.6 | 3 shells |  | 30 | 2100 | LF/- |
| 21 | gold | Golden Colts | 5 akimbo_only | 5.4 | 2 .45ACP | ←none | 20 | 2600 | -/- |
| 22 | glock22 | Glock-20C | 8 pistol | 2.5 | 9 10mm |  | 10 | 1300 | SLF/- |
| 23 | mac10 | UMP | 9 smg | 3.6 | 2 .45ACP |  | 30 | 2300 | SLFZ/- |
| 24 | m61 | M61 Grenade | 2 grenade | 1.1 | 0 - |  | 7 | 1000 | -/- |
| 25 | knife | Combat Knife | 3 knife | 1.3 | 0 - |  | 1 | 100 | -/- |
| 26 | mossberg | Mossberg 500 | 1 shotgun | 4.7 | 3 shells |  | 40 | 2500 | LF/- |
| 27 | m16 | M16A4 | 6 rifle | 4.8 | 4 5.56 |  | 40 | 2500 | LFZ/- |
| 28 | ruger | Ruger-MK1 | 8 pistol | 2.6 | 10 .22LR |  | 5 | 1500 | SL/S |
| 30 | fnhakimbo | Akimbo Five-seveN | 4 akimbo | 5.5 | 7 5.7x28 | ←14 | 10 | 1250 | SLF/- |
| 31 | bull | Raging Bull | 8 pistol | 2.7 | 11 .454 |  | 15 | 2100 | LZ/- |
| 32 | m60 | M60E3 | 6 rifle | 4.9 | 4 5.56 |  | 70 | 8000 | -/- |
| 33 | sawedoff | Sawed-off | 8 pistol | 4.10 | 3 shells |  | 20 | 1900 | L/- |
| 34 | katana | Katana | 10 katana | 1.2 | 0 - |  | 10 | 2900 | -/- |
| 35 | sealknife | Seal Knife | 3 knife | 1.4 | 0 - |  | 1 | 100 | -/- |
| 36 | contender | Contender G2 | 8 pistol | 2.8 | 13 7.62x51 |  | 15 | 1500 | LZ/- |
| 37 | skorpion_akimbo | Akimbo Skorpions | 4 akimbo | 5.6 | 12 .32ACP | ←17 | 15 | 1100 | -/- |


Columns: `rate` = `info+0x18`, `reload` = `info+0x14`, `dmg` = `info+0x1c` per pellet, `btype` =
`info+0x20`, `accuracy` = `info+0x28` (spread half-width as a fraction of the aim vector), `scale` =
`info+0x2c`, `acc kick` = `info+0x34`, `view kick` = `info+0x30`, `stock` = `info+0x10`, `zoom fov` =
`info+0x3c,0x40`. For blades and the grenade, `pellets` is the maximum carried count.

| id | key | clip | firemodes (default*) | rate s | reload s | dmg | pellets | btype | accuracy | scale | acc kick | view kick | stock | zoom fov |
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
| 1 | glock18 | 17 | auto*/semi | 0.054 | 1.5 | 24 | 1 | 0 | 0.01 | 1 | 0.0065 | 2.2 | - | - |
| 2 | beretta | 15 | semi* | 0.1 | 1.2 | 27 | 1 | 0 | 0.01 | 1 | 0 | 2.5 | - | - |
| 3 | uzi | 32 | auto*/semi | 0.06 | 2.2 | 20 | 1 | 0 | 0.02 | 1 | 0.0065 | 1.75 | - | - |
| 4 | benellim3 | 7 | semi/pump* | 0.225 | 0.3 | 12 | 8 | 1 | 0.035 | 0 | 0 | 13 | 35 | 40 |
| 5 | m4 | 30 | auto*/semi | 0.07 | 2.8 | 33 | 1 | 0 | 0.005 | 1 | 0.004 | 3.75 | 35 | 26 |
| 6 | mp5sd | 30 | auto*/semi/burst | 0.074 | 2.3 | 19 | 1 | 0 | 0.005 | 1 | 0.005 | 1.25 | 30 | 32 |
| 7 | mp5k | 30 | auto*/semi/burst | 0.066 | 2.3 | 23 | 1 | 0 | 0.02 | 1 | 0.003 | 2.25 | - | 32 |
| 8 | beretta_akimbo | 30 | semi*/ak_semi | 0.1 | 2.4 | 27 | 1 | 0 | 0.02 | 1 | 0 | 2.5 | - | - |
| 9 | mk23 | 12 | semi* | 0.1 | 1.5 | 33 | 1 | 0 | 0.01 | 1 | 0 | 4 | - | - |
| 10 | mk23akimbo | 24 | semi*/ak_semi | 0.1 | 2.5 | 33 | 1 | 0 | 0.02 | 1 | 0 | 4 | - | - |
| 11 | usas12 | 20 | auto* | 0.166 | 3 | 7 | 8 | 1 | 0.065 | 0 | 0 | 4 | 50 | - |
| 12 | desert | 7 | semi* | 0.1 | 2.1 | 49 | 1 | 0 | 0.005 | 1 | 0.0125 | 7.5 | 25 | 60 |
| 13 | ak47 | 30 | auto*/semi | 0.08 | 2.5 | 39 | 1 | 0 | 0.0025 | 1 | 0.0001 | 5.5 | - | 32,13 |
| 14 | fnh | 20 | semi* | 0.1 | 1.5 | 23 | 1 | 0 | 0.0025 | 1 | 0.01 | 1.5 | - | - |
| 15 | aug | 30 | auto*/semi | 0.092 | 2.4 | 29 | 1 | 0 | 0.005 | 1 | 0.01 | 2 | 35 | 40 |
| 16 | uzi_akimbo | 64 | auto*/ak_auto | 0.06 | 3 | 20 | 1 | 0 | 0.04 | 1 | 0.0065 | 1.75 | - | - |
| 17 | skorpion | 20 | auto*/semi | 0.07 | 1 | 16 | 1 | 0 | 0.025 | 1 | 0.0015 | 0.5 | - | - |
| 18 | barrett | 5 | semi* | 0.7 | 2 | 185 | 1 | 0 | 0.001 | 1 | 0.1 | 10 | 70 | 32,8 |
| 19 | pdw | 40 | auto*/semi | 0.063 | 2.5 | 16 | 1 | 0 | 0.005 | 1 | 0.0065 | 1 | - | 40 |
| 20 | spas12 | 8 | semi/pump* | 0.2 | 0.3 | 12 | 8 | 1 | 0.05 | 0 | 0 | 10 | - | - |
| 21 | gold | 16 | semi*/ak_semi | 0.1 | 2.3 | 40 | 1 | 0 | 0.0075 | 1 | 0 | 5.5 | - | - |
| 22 | glock22 | 15 | semi* | 0.1 | 2 | 39 | 1 | 0 | 0.01 | 1 | 0.0125 | 5 | - | - |
| 23 | mac10 | 25 | auto*/semi/burst | 0.092 | 2.5 | 31 | 1 | 0 | 0.015 | 1 | 0 | 3 | 30 | 40 |
| 24 | m61 | 1 | auto* | 1 | 1 | 0 | 2 | 4 | 0.1 | 0 | 0 | 1 | - | - |
| 25 | knife | 1 | auto* | 0.4 | 1 | 30 | 5 | 6 | 0.1 | 0 | 0 | 1 | - | - |
| 26 | mossberg | 8 | pump* | 0.25 | 0.3 | 16 | 8 | 1 | 0.045 | 0 | 0 | 8.5 | - | - |
| 27 | m16 | 18 | semi/burst* | 0.07 | 2.8 | 40 | 1 | 0 | 0.0015 | 1 | 0.005 | 4 | 35 | 32,8 |
| 28 | ruger | 17 | semi* | 0.1 | 1.3 | 15 | 1 | 0 | 0.005 | 1 | 0.008 | 0.35 | - | - |
| 30 | fnhakimbo | 40 | semi*/ak_semi | 0.1 | 3 | 23 | 1 | 0 | 0.005 | 1 | 0.01 | 1.5 | - | - |
| 31 | bull | 5 | semi* | 0.15 | 2 | 95 | 1 | 0 | 0.0025 | 1 | 0 | 13 | - | 40 |
| 32 | m60 | 100 | auto* | 0.109 | 3 | 33 | 1 | 0 | 0.015 | 1 | 0.005 | 1.5 | 50 | - |
| 33 | sawedoff | 2 | semi* | 0.1 | 1.7 | 21 | 8 | 1 | 0.07 | 0 | 0 | 10 | 50 | - |
| 34 | katana | 1 | auto* | 0.7 | 1 | 45 | 0 | 8 | 0.7 | 0 | 0 | 0 | - | - |
| 35 | sealknife | 1 | auto* | 0.25 | 1 | 20 | 10 | 7 | 0.1 | 0 | 0 | 1 | - | - |
| 36 | contender | 1 | semi* | 0.25 | 1.35 | 100 | 1 | 0 | 0.001 | 0 | 0 | 7.5 | - | 26 |
| 37 | skorpion_akimbo | 40 | auto*/ak_auto | 0.07 | 2 | 16 | 1 | 0 | 0.05 | 1 | 0.003 | 0.5 | - | - |

Notes on the numbers:

- Semi-auto fire on a weapon that also has an auto mode uses a fixed 0.1 s delay instead of
  `info+0x18`. Burst is 3 rounds (2 for id 23 "UMP"), 0.03 s apart, then 0.2 s.
- Shotguns in semi mode use 0.15 s. In pump mode, each click alternates between firing and
  pumping (`pump.sc`). The `rate` is the delay after each step.
- Contender (36): after the last round the idle timer is 0.5 s instead of 2 s. `empty.sc` is
  suppressed for it.
- The Barrett sets the player's spread penalty to 0.3 when fired while moving faster than 35 u/s.
  The M60 (32) only applies its accuracy kick ×5 when moving faster than 175 u/s. Otherwise it has
  no spread growth.
- The katana's `accuracy` 0.7 is its throw cooldown. Its `rate`/`dmg` are not used by
  `KatanaFire`, which has hard-coded values (§5.6).

Ammo types (`s_ammo_info`, stride 0x38). `Set_ammo_count(cv_ammocount)` selects the max-carry
column. Cvar `ammocount` default 0 uses the `default` column. Values 1/2/3 use the reduced columns.

| t | name (+0x28) | price +0x04 | per buy +0x10 | max carry +0x0c (ammocount 0 / 1 / 2 / 3) | pierce +0x18 | range unit +0x20 | velocity m/s +0x24 | +0x00 | +0x08 |
|---|---|---|---|---|---|---|---|---|---|
| 1 | 9 x 19mm | 50 | 30 | 210 / 90 / 30 / 0 | 0.2 | 80 | 330 | 0.4 | 1 |
| 2 | .45Acp | 60 | 12 | 175 / 50 / 25 / 0 | 0.2 | 90 | 280 | 0.4 | 1 |
| 3 | SHELLS | 120 | 8 | 60 / 32 / 16 / 0 | 0.0 | 90 | 350 | 0.3 | 2 |
| 4 | 5.56 Nato | 80 | 30 | 120 / 60 / 30 / 0 | 0.9 | 150 | 900 | 0.3 | 2 |
| 5 | .50AE | 70 | 10 | 70 / 21 / 7 / 0 | 0.5 | 90 | 480 | 0.3 | 1 |
| 6 | 7.62 x 39mm | 100 | 30 | 90 / 60 / 30 / 0 | 0.7 | 170 | 790 | 0.2 | 2 |
| 7 | 5.7 x 28 | 120 | 20 | 160 / 40 / 20 / 0 | 1.0 | 100 | 730 | 0.5 | 1 |
| 8 | 50BMG | 500 | 5 | 30 / 10 / 5 / 0 | 1.0 | 200 | 1000 | 0.1 | 2 |
| 9 | 10mm AUTO | 70 | 15 | 90 / 30 / 15 / 0 | 0.5 | 90 | 450 | 0.3 | 1 |
| 10 | .22 LR | 100 | 17 | 150 / 34 / 17 / 0 | 0.9 | 70 | 350 | 0.5 | 1 |
| 11 | .454 Casull | 150 | 5 | 50 / 15 / 5 / 0 | 0.75 | 20 | 400 | 0.3 | 1 |
| 12 | .32Acp | 30 | 20 | 300 / 100 / 40 / 0 | 0.0 | 40 | 300 | 0.5 | 1 |
| 13 | 7.62 x 51mm | 150 | 5 | 35 / 15 / 5 / 0 | 0.7 | 170 | 850 | 0.2 | 2 |

All entries also have `+0x14` = 8192 (max trace distance) and `+0x1c` = 1.0 (radial spread scale).
`+0x00` and `+0x08` are never read by the server (client-side effect parameters (inferred); `+0x08`
looks like pistol=1 / rifle=2). `CTSGun::AddAmmo` `0x808ac` clamps reserve ammo to max carry. Ground ammo
pickups give `mags × per_buy`.


## 4. `CTSGun` — one entity for every weapon

TS does not use one entity per weapon. Each player gets a single `weapon_tsgun` (`CTSGun`,
sizeof 0xa10, `m_iId` = 16, `iItemSlot` = 2) from `CHalfLifeMultiplay::PlayerSpawn` `0x890ac`
(`GiveNamedItem("weapon_tsgun")`). The inventory is an array of 38 `s_weapon_status` records inside
it. "Switching weapons" only changes `gun+0xc8` and re-runs `Deploy`, which re-points two cached
pointers. `UseDecrement()` returns 1, so the timers are relative (`UTIL_WeaponTimeBase() = 0`) and
are decremented in `CBasePlayer::PostThink` by `frametime × GiveSlowMul() × (1.5 with Double Fire
Rate)`. Slow motion and the powerup therefore scale every weapon timer. `m_flNextPrimaryAttack` is
clamped at −1.0; the others at −0.001.

### 4.1 Members

| Off | Type | Meaning |
|---|---|---|
| `0x80` | `CBasePlayer*` | `m_pPlayer` |
| `0x88` | int | `m_iId` = 0x10 (16). Code checks this to recognise a TS gun |
| `0x9c` / `0xa0` / `0xa4` | float | next primary / next secondary / next melee-block time |
| `0xa8` | float | `m_flTimeWeaponIdle` |
| `0xb4` | int | `m_iClip` mirror of the current status clip (for `GetWeaponData`) |
| `0xc8` | `tsweapon_t` | current weapon id (0 = kung fu) |
| `0xcc` | `s_weapon_status*` | `&status[cur]` (null when holstered or kung fu) |
| `0xd0` | `s_weapon_info*` | `&global_weapon_info[cur]` |
| `0xd4` | int[16] | reserve ammo per ammo type |
| `0x114` | `s_weapon_status[38]` | the inventory (ends at `0x964`) |
| `0x964..0x978` | u16[11] | event indices: fire, coldcock, empty, pump, closecombat, firelinked, reload, knife, katana, draw, grenade |
| `0x97a` | u8 | last weapon id sent in `WeaponInfo` |
| `0x97c` | `s_weapon_status` | last status sent; `0x9b4` = last reserve-ammo value sent |
| `0x9b8` | u8[38] | last "owned" flags sent in `WStatus` |
| `0x9e0` | float | next `UpdateClientData` send (10 Hz) |
| `0x9e8` | float | time of the last shot (`ScaleSpread`) |
| `0x9fc`, `0xa00`, `0xa04` | int | kung-fu punch combo, kick combo, last melee animation |
| `0xa0c` | float | grenade-pin time + 5 s (inferred) |

`s_weapon_status` (0x38 bytes; dropped weapons copy it whole into `CTSWorldGun+0x8c`):

| Off | Type | Meaning |
|---|---|---|
| `0x00` | u8 | owned |
| `0x01` | u8 | ammo type (copy of `info+0x08`) |
| `0x02` | u8 | current firemode 0–5; also stored per player at `pl+0x49a+id` as mode+1 |
| `0x04` | int | clip (for stackables: count) |
| `0x08` | int | state counter: burst shots left / shotgun reload phase / grenade phase / melee "hit" flag |
| `0x0c` | int | in reload |
| `0x10` | u32 | owned attachments (§2) |
| `0x14` | u32 | attachments switched on |
| `0x18` | int | `pev->body` computed by `GetBodyByItems` |
| `0x1c` / `0x20` | int | akimbo left / right clip |
| `0x24` | u8 | toggle: which akimbo gun fires next / pump pending / grenade-roll flag / knife-throw flag |
| `0x28` | i16* | current sequence table (`info+0x252` or `info+0x28c`) |
| `0x2c` | u8 | alternate grip active |
| `0x30` | EHANDLE | original owner (for the "killed with own weapon" message) |

### 4.2 Input flow

`CBasePlayerWeapon::ItemPostFrame` `0xa03d4` checks, in order: IN_ATTACK2 → `SecondaryAttack`, then
IN_ATTACK → `PrimaryAttack`, then IN_ALT1 (`0x4000`) → `AlternateAttack` (the stock hit), then
IN_RELOAD → `Reload`, then `WeaponIdle`. It also completes a magazine reload once
`m_flNextAttack` (`pl+0x12c`) expires: it moves `min(clip_size − clip, reserve)` rounds and, for
akimbo, splits the clip into left = clip/2 and right = rest.

```text
PrimaryAttack (0x81a20):
  no weapon            -> CCombatAttack (kung fu)
  kind 2/3/10/11       -> GrenadeFire / KnifeFire(slash) / KatanaFire / KnifeFire
  mode 1 or 4 (semi)   -> Fire if IN_ATTACK just pressed (pl+0x814 & 1) OR Double Fire Rate is active
  mode 0 or 5 (auto)   -> Fire
  mode 2 (burst)       -> on press, if no burst is running: st+8 = 3 (2 for id 23); WeaponIdle fires it
  mode 3 (pump)        -> Fire while IN_ATTACK held
SecondaryAttack (0x817a8):
  kind 2/3 -> roll grenade / throw knife; kind 10 -> KatanaThrow; kind 11 -> nothing
  mode 4 -> Fire on IN_ATTACK2 press (or DFR); mode 5 -> Fire
  else: scope owned  -> zoom fov1 -> fov2 -> off
        no scope     -> toggle grip table A<->B (if B exists), play anim [7]
        then next secondary +0.3 s, idle +1 s
```

`Fire` `0x81c78`: if the player is fully underwater (`pev->waterlevel` at `pev+0x1c0` == 3) or the clip is empty (and Infinite Clip is
off), play `EmptySound` (event `empty.sc`, 0.1 s lockout). Otherwise, kinds 4/5 → `AkimboFire`, kind
1 → `ShotgunFire`, else → `StandardFire`. Each also triggers a third-person shoot animation.

### 4.3 Firemodes

| Mode | Name | Rule |
|---|---|---|
| 0 | auto | fires every `rate` while held |
| 1 | semi | one shot per press; delay 0.1 s if the weapon also has auto, else `rate` |
| 2 | burst | 3 shots 0.03 s apart, then 0.2 s (UMP: 2 shots) |
| 3 | pump | shotguns: alternate fire / pump while held |
| 4 | akimbo semi | both triggers fire; primary = left/right alternating; both pressed = linked shot |
| 5 | akimbo auto | as 4, but held |

On pickup the starting mode comes from `info+0x0c`: bit0 → mode 0, else bit3 → mode 3, else bit2 →
mode 2, else mode 1. `firemode` (`SwitchFireMode` `0x8169c`) advances to the next set bit, wrapping
after 5. Double Fire Rate makes semi modes act as auto.

### 4.4 Reload

- Magazine (`Reload` `0x84d5c` → `ReloadWeapon(clip_size, anim, info+0x14)`): needs reserve > 0 and
  `st+8 == 0`. It sets `m_fInReload` and `m_flNextAttack = reload time`, unzooms, plays event
  `reload.sc` (fparam1 = 0) and player animation 0x33. The view animation is `[1]`. Sawed-off with
  rounds left uses `[8]`.
- Shotgun (`ShotgunReload` `0x84aac`) is a 3-phase state machine in `st+8`:
  - Phase 1: unzoom, event fparam1 = 8, 0.3 s.
  - Phase 2: each `info+0x14` seconds, move one shell from reserve to clip (event fparam1 = 9).
  - Phase 3: end (event fparam1 = 10), next attack +0.3 s.
  - Firing while `st+8 != 0` interrupts the reload (sets phase 2).
- `StopReload` `0x81288` cancels any reload (used by stock attacks and powerups).
- Infinite Clip powerup: the clip is never decremented. `MultiplyClips` `0x81308` is called on
  pickup and doubles the current clip (akimbo: halves are recomputed; stackables: refill from
  free slots).

### 4.5 Zoom

`Zoom(fov)` sets `pev->fov` (`pev+0x214`) and hides the view model when fov < 40. `Unzoom` clears the
fov and restores `pev->viewmodel` to `info+0x132`. Zoom steps come from `info+0x3c/0x40`: AK 32/13,
M16 32/8, Barrett 32/8, others single step. Reload, stock attack, and holster all unzoom.

### 4.6 View-model sequence table (`info+0x252`, 29 × i16)

Index meanings, from the code and the client fire event:

| Index | Use |
|---|---|
| 0 | idle |
| 1 | reload |
| 2 | draw |
| 3, 4, 5 | fire (client picks one at random) |
| 6 | fire last round (bparam1 = clip empty) |
| 7 | switch to alternate grip |
| 8 | reload with a round still loaded (Sawed-off) |
| 8–14 | shotgun reload start / insert / end, pump |
| 15–18 | blade slashes |
| 19 / 20 / 21 | grenade pull pin / throw (also knife throw) / roll |
| 22–27 | akimbo left / right / both fire variants |
| 28 | stock attack |

Table B (`info+0x28c`) exists for Uzi, M4, MP5K, Berettas, MK23 (single and akimbo), Deagle, AK,
Mossberg, M16, and Sawed-off.

### 4.7 Akimbo (`AkimboFire` `0x829c0`)

There is **one** timer pair, not two independent guns. Each shot toggles `st+0x24`, which selects
the gun:
- Single shot: the sides alternate. A side with an empty clip is skipped, and if both are empty,
  `EmptySound` plays.
- Modes 4/5 with **both** buttons down fire a *linked* shot: 2 rounds, one ray from each gun
  (offset ±5 u along `v_right`, second seed + 0x21). The accuracy kick and view kick are doubled,
  and the event is `firelinked.sc`.
- Clip accounting: `st+4` is the total. `st+0x1c` is left and `st+0x20` is right. For kind 4, the
  single-pistol record (`info+0xcc`) mirrors the left clip.
- Rate: modes 1/4 use 0.1 s; otherwise `info+0x18`. Both next-attack timers get the same value.

Picking up a second single pistol when its `info+0xc8` akimbo exists turns them into the akimbo id
(`TakeWeapon` `0x80a04`). The clips merge, and attachments are OR-ed into both records. Dropping
splits them again (`CBasePlayer::DropWeapon` `0x94900`).

## 5. Firing and hit detection

### 5.1 `StandardFire` `0x824a4` (also used by shotguns-as-pistols such as the Sawed-off)

```text
src    = player->GetGunPosition(); aim = v_forward (from pev->v_angle)
spread = info.accuracy
if id == Barrett && |vel| > 35:  pl.spread_penalty = 0.3
if info.scale_spread (or id == M60 && |vel| > 175, with akick × 5):
    ScaleSpread(&spread, info.acc_kick, silenced)
dmg = info.damage × (silenced ? 0.775 : 1)
dir = ShootBulletsPlayer(pellets = info+0x24, src, aim, (spread,spread,spread), dmg, info.bullet, info.ammo, pl.random_seed)
if kind 7 || id 31 || id 33 || info.kick_on:  VKickback(info.view_kick, kind, silenced)
clip -= 1 (unless Infinite Clip); the akimbo twin's reserve record tracks it
PLAYBACK_EVENT(fire.sc, f1=f2=spread, i1=id, i2=attachments, b1=(clip==0), b2=pl.random_seed)
next_primary = rate (see §4.3); idle = 2.0
```

"silenced" always means `(st.items & 1) && !(info.default_items & 1)`.

`ShotgunFire` `0x82108` is the same, minus `ScaleSpread`. Kick is ×0.35 if the shotgun has modes
0/1 and is not in semi mode. In pump mode (`st+0x24` toggles), every other click sends `pump.sc`
(f1 = f2 = 0, b2 = 0) and fires nothing.

### 5.2 Spread growth: `CTSGun::ScaleSpread` `0x802a8`

`pl+0x778` is a per-player spread penalty, capped at 0.1. `PreThink` lowers it by
`0.1 × frametime × slowmul (× 1.5 with DFR)` per second.

```c
if (silenced) *spread *= 0.875;
if (akick > 0) {
  float k = DoubleFireRate(pl) ? 1.0f : 2.0f;  if (silenced) k *= 0.775f;
  float dt = now - gun->last_shot;                       // gun+0x9e8
  if (dt >= 0.001f) {
    *spread += pl->spread_penalty;                       // pl+0x778
    float x = pl->GiveSlowMul() * dt; if (x >= 1) x = 0.5f;
    pl->spread_penalty = fminf(0.1f, (1 - x) * akick * k + pl->spread_penalty);
  }
  gun->last_shot = now;
}
```

`CalcSpread(float&, CBasePlayer*, float)` `0x8020c` (spread × clamp(speed/(100/k), 1, 3k)) has **no
callers** in this build. Movement, stance, and stunts do not change spread on the server, except
for the Barrett/M60 special cases above.

### 5.3 Recoil: `CTSGun::VKickback` `0x80414`

```c
pitch = view_kick * 0.85;
yaw   = pitch * (kind==8 ? 0.35 : kind==4||kind==5 ? 0.15 : kind==1 ? -0.25 : kind==6||kind==7 ? -0.30 : kind==9 ? -0.35 : 0);
if (silenced) { pitch *= 0.775; yaw *= 0.775; }
if (DoubleFireRate) { pitch *= 2/3.f; yaw *= 2/3.f; }
if (pev->flags & FL_FAKECLIENT) { pev->v_angle.x -= pitch; pev->v_angle.y += yaw; } // bots only
```

The server only writes the angles (`pev+0x68/0x6c`) for bots (`flags & 0x2000`). Human players get
the same kick applied by the client in its fire-event handler. The kick is a permanent change to the
view angles, not a `punchangle`. The yaw direction is fixed per weapon kind, not random. The server
never sets `punchangle` ("removed viewpunch due bullet damage").

### 5.4 `CBasePlayer::ShootBulletsPlayer` `0x6f69c`

Signature: `(Vector *outDir, CBasePlayer*, u8 shots, Vector src, Vector aim, Vector spread, float
dmg, int btype, int ammo, int seed)`.

1. **Real bullets?** `rbullet = (cvar realbullet != 0) || shooter->GiveSlowMul() < 0.99`. In slow
   motion, or with `realbullet`, each pellet becomes a simulated `CBulletManager` bullet (§5.5).
   Otherwise the hit is instant.
2. **Per pellet i (1..shots):** `θ = SharedRandomFloat(seed+i, −π, π)`,
   `r = SharedRandomFloat(seed+i+1, 0, ammo.spread_scale=1)`, `m = 1 − r³`. Then
   `x = cos θ·m`, `y = sin θ·m`, `dir = aim + x·spread·right + y·spread·up`, and
   `end = src + dir × ammo.range (8192)`. The decompiler loses the final vector sum, but `x`, `y`
   and the returned `(x·spread, y·spread)` are clear. Note that `1 − r³` puts most pellets near the
   **edge** of the cone. Check this against the client before copying it (inferred).
3. Trace with `UTIL_TraceLine_Expanded` `0x6f4f4` (ignores the shooter).
4. **Range falloff:** `idx = round(dist / ammo.range_unit)`,
   `mult = range_damage_multipler[idx] = min(1, 1/sqrt(max(idx,1)·0.1))`. Damage is full out to
   `10 × range_unit` units, then falls off as `sqrt(10·range_unit/dist)`. Example: 9 mm is full to
   800 u and half at 3200 u. 5.56 is full to 1500 u.
5. `TraceAttack(attacker, dmg·mult·damagemult, dir, tr, bits)` with `bits = 0x1002` (BULLET|NEVERGIB),
   or `0x2001002` for `btype == 1` (shotgun). `damagemult` only applies when `g_flWeaponCheat` is set.
6. **Penetration:** `left = dealt × ammo.pierce`, halved if the victim `IsPlayer()`. If
   `btype ∉ {1,2}` and `left > 5`: step `min(2·left, 48)` units along `dir` from the hit point. If
   that point is not `CONTENTS_SOLID`, recurse once with `shots=1, btype=2, dmg=left`. The
   recursion uses a 4096-unit trace from that point, no spread, and range falloff with a fixed
   30-unit index unit (`dist × 0.00333 × 10`). Shotgun pellets and .32 ACP never penetrate
   (pierce 0). This is the only wall penetration. (`CanUsedTroughWalls` has nothing to do with
   bullets: it decides whether `+use` works through walls, and ground/world guns return 0.)
7. `UTIL_BubbleTrail` underwater. `ApplyMultiDamage` once after all pellets.

### 5.5 `CBulletManager` (global at `0x179a04`)

Up to 256 bullets × 0x40 bytes:

| Off | Field |
|---|---|
| `+0x00` | owner `CBasePlayer*` |
| `+0x04` | current position |
| `+0x10` | start position |
| `+0x1c` | direction |
| `+0x28` | damage |
| `+0x2c` | ammo type |
| `+0x30` | weapon id (for the death message) |
| `+0x34` | shooter slow-mo factor |
| `+0x38` | next update time |
| `+0x3c` | btype |

`Think` `0x6ec7c` steps each bullet when its time comes. The next step is in `0.1/(realbullet+1)` s
if `realbullet < 2`; otherwise every frame. `UpdateBullet` `0x6ef5c`:

```text
step = ammo.velocity_mps × 40 u/m × dt × GetBulletVelocityMult(shooter_slowmul, pl+0x175)
GetBulletVelocityMult(s, f) = s >= 0.99 ? 1 : s / max(1, (1 − s²)·(f ? 10 : 1))
trace pos -> pos + dir*step; miss: advance; hit: range falloff (as 5.4), TraceAttack, pierce test
(min(left,48) units), on pierce continue as btype 2 from the exit point, else destroy
```

So in slow motion, bullets are visible, dodgeable objects travelling at `velocity × 40 u/s` (9 mm:
13 200 u/s), slowed further by the shooter's own slow factor.

### 5.6 Melee, stock, and thrown weapons

| Attack | Function | Reach / hull | Damage | Timing | Notes |
|---|---|---|---|---|---|
| Stock hit (IN_ALT1) | `ColdCock` `0x81dd0` → `CBasePlayer::ColdCockAttack` | 35 u ahead, hull 3 | `info+0x10` (×2/3 while stunting) | 0.725 s (1.0875 stunting); idle 2 s | kevlar sound on hit; event `coldcock.sc`. Only weapons with `stock` > 0 |
| Knife slash | `KnifeFire` `0x84044` | `CheckHull` 35 u | `info.damage × GetMeleeMultiplier()` (×2/3 stunting); bits `0x1004` | `info.rate` (×1.5 stunting) | `VictimKnifeHold` can block; on a miss `pl+0x79c = rate·0.25` (melee lunge) |
| Knife throw | `KnifeFire` (secondary) → `CTSKnife::CreateKnife` `0x7d9e4` | eye + 32 fwd + 1 right, v = fwd·1900 | combat **100**, seal **50**, katana **150**; bits `0x8001000` (can headshot) | | one fewer in the stack; at 0, drops the weapon; frees `info+0xd0` slots |
| Katana | `KatanaFire` `0x833f0` | 15–17 u + hull | 50 base; 35 while stunting; 55 backward/back-pedal attack (×`GetMeleeMultiplier`); bits `0x1080` | ~0.7–1.1 s per variant (inferred) | 4 swing variants (stunt, backward, airborne, alternating ground swings); `VictimKatanaHold` blocks |
| Katana throw | `KatanaThrow` `0x83b68` | as knife | 150 (projectile type 8) | cooldown `info+0x28` = 0.7 s | drops the katana |
| Kung fu | `CCombatAttack` `0x86078` | `CloseCombatAttack` | punches 10/15/20/25/30, kicks 15–80 (speed-scaled); ×`GetMeleeMultiplier`; ×2 with the Kung Fu powerup | 0.1–0.35 s | full detail belongs in the melee doc |
| Block (reload key with no weapon/blade) | `CCombatBlock` `0x85ebc` | | | 0.5 s | event `closecombat.sc` (f1 = id, i2 = 1 kung fu / 0x12 weapon); `UpdateMeleeBar(33)` |

`CTSKnife` (sizeof 0xa4): `movetype` BOUNCE, `gravity` katana 0.85 / combat 0.75 / seal 0.3,
`friction` 0.8. It is lethal while flying; the "flying" flag clears below 700 u/s. On a wall hit
it sticks and becomes a pickup for 30 s.

### 5.7 Grenade (M61, id 24)

- `GrenadeFire` `0x832f0`: pull the pin (anim `[19]`, event `grenade.sc` i1 = 19), `st+8 = 1`,
  0.7 s lockout. The throw happens in `GrenadeIdle` `0x84f18` when the button is released.
- Pitch is remapped: `p' = p·(p ≥ 0 ? 10/9 : 8/9) − 10`. Speed is `min(750, (90 − p')·7)`.
- Overhand: from the eyes + 16 fwd, `v = fwd·speed + player velocity`, spin `avelocity.x = 200`.
- Roll (secondary): from the origin + 16 fwd, speed × 2/3, friction 0.4, spin (−100, 600, 0).
  The event sends i1 = 20 for a throw and 21 for a roll.
- `CM61Grenade` (sizeof 0x94, `w_m61.mdl`, BOUNCE, gravity 0.75, friction 0.8): the fuse is
  **3.0 s of the thrower's time**. Each 0.1 s think adds `0.1 × GiveSlowMul()`, so a grenade
  thrown in slow motion lasts longer in real time.
- Flying impact: if speed > 64, a 64 u look-ahead trace deals `speed × 0.1` (bits `0x1080`) to the
  entity it would hit, but only when that is ≥ the entity's health. This breaks glass; it does not
  chip players.
- Holstering with the pin pulled throws the grenade.
- Buy limit: at most 2 grenades per life (`pl+0x714`), and only when the game-rules mode value is > 1.

### 5.8 `TSExplosion(origin, inflictor, attacker, dmg, bits, r_full, r_max)` `0x7d01c`

The grenade calls `TSExplosion(origin, pev, owner, 110, 0x1040, 300, 1024)`.

- `UTIL_ScreenShake(amp = dmg, freq 80, 1 s, radius 2·r_max)`, plus a `TSFrags` debris message.
- For each entity in the `r_max` sphere (except the inflictor) with `takedamage != 0` and
  `deadflag != DEAD_DEAD`: `d = dmg − max(0, dist − r_full) · dmg/(r_max − r_full)`, clamped at ≥ 0. That is
  full damage inside 300 u and linear to 0 at 1024 u.
- Line of sight to the target gives full `d`. When occluded, the code traces back from the target
  and subtracts the thickness of the obstacle (in units) from `d`. Explosions go through thin walls
  (inferred from the second trace).
- Living players get a `UTIL_ScreenFade` (222, 227, 189 colour, 0.1 s, 0.05 hold, alpha 75).
- `CTSWorldGun` entities in range are knocked around (they get a `Fall`/`BounceTouch` think and
  velocity away from the blast).
- With `spectacularness`, `CTSSlowMotionPoint::CreateSlowMotionPoint` creates a slow-motion zone.

`CTSShrapnel` (`0x7bf9c`, 100 dmg, sticks into walls, 10 s lifetime) exists, but `Create` has no
callers. It is dead code in 3.0.

### 5.9 Damage on the victim

`CBasePlayer::TraceAttack` `0x901cc` (slot 19):

1. Ignored during spawn protection (`pl+0x71c` > now), for teammates without friendly fire, and
   when `takedamage == 0`.
2. ×0.7 while in a stunt/dive state (`pev->iuser4 & 0x10c10`). ×0.7 for bullets while
   `pl+0x524` > now (a timed dodge window) (inferred).
3. Hitgroup multipliers:

| Hitgroup | Multiplier |
|---|---|
| 1 head | ×2 for bullets/thrown knives (`bits & 0x8000002`); ×1.5 if the shotgun flag `0x2000000` is set. Sets `glast_headshot` |
| 6, 7 (legs in the HL convention; CHANGELOG calls them "arm shots") | ×0.5 |
| 2–5 chest/stomach/arms | armour applies (below) |

4. When `IsAlive()` is false (a corpse that is still a player entity), it plays the "bullet dance"
   animation and, if airborne, gets +50·dir velocity.
5. The `PTakeDam` message (≤ 1 per 0.3 s) is sent. Body/head/kevlar hit sounds play.
6. `AddMultiDamage`.

`CBasePlayer::TakeDamage` `0x8fa94` armour rule: if `armorvalue != 0`, the damage type is not in
`0x80040e4` (slash, fall, blast, club, drown, the thrown-knife flag), and the hitgroup is 2–5, then
`dmg −= dmg × min(armor_absorb, 1)`. `armor_absorb` (`0x17da2c` = `TSGameRules+0x588c`) defaults
to **0.2125**, set by the `CTSGameRules` constructor (`CTSGameRules.c`: `this+0x588c = 0x3e59999a`).
A weapons config line `armor_absorb x` overrides it, clamped at 0. CHANGELOG 2.1.21's "20%" is
the rounded figure. Armour is never depleted by this path. `health_absorb` (`0x17da28` =
`TSGameRules+0x5888`, default 0.1) is parsed but never read.
The final damage is rounded to an int before `CBaseMonster::TakeDamage`.

## 6. Events and messages

### 6.1 Events (`CTSGun::Precache` `0x80660`, all `pfnPrecacheEvent(1, …)`)

Every call is `PLAYBACK_EVENT_FULL(flags=1 (FEV_NOTHOST), player, idx, 0, zero, zero, f1, f2, i1, i2, b1, b2)`.
The shooter predicts the event locally; everyone else receives it.

| Event | Sent by | f1 / f2 | i1 | i2 | b1 | b2 |
|---|---|---|---|---|---|---|
| `fire.sc` | `StandardFire`, `ShotgunFire`, `AkimboFire` | spread used (shotgun: accuracy) | weapon id | attachments (`&1` = silenced) | clip now empty (akimbo: which gun `st+0x24`; shotgun: mode == pump) | player random seed `pl+0x7ec` |
| `firelinked.sc` | `AkimboFire`, both guns at once | spread | id | attachments | gun toggle | seed |
| `pump.sc` | `ShotgunFire`, pump step | 0 / 0 | id | attachments | 1 | 0 |
| `empty.sc` | `EmptySound` (not for Contender) | 0 | 0 | 0 | 0 | 0 |
| `reload.sc` | `Reload`, `ShotgunReload` | 0 = magazine; 8/9/10 = shotgun start/insert/end | id | attachments | 0 | 0 |
| `draw.sc` | `Deploy`, `HolsterWeapon` (id 0), after a knife throw | 0 | id | attachments | 0 | 0 |
| `coldcock.sc` | `ColdCock` | stale static direction (unused) | id | attachments | 0 | 0 |
| `knife.sc` | `KnifeFire` slash | 0 | id | 1 if a body was hit | 0 | 0 |
| `katana.sc` | `KatanaFire` | 0 | variant flag (backward/duck) | 1 if a body was hit | 0 | 0 |
| `grenade.sc` | `GrenadeFire`, `GrenadeIdle` | 0 | 19 pin, 20 throw, 21 roll | 0 | 0 | 0 |
| `closecombat.sc` | `CCombatAttack`, `CCombatBlock` | block: f1 = weapon id | attack: packed strength (float bits) | attack: packed flags; block: 1 = kung fu, 0x12 = weapon | 0 | 0 |

Client handlers (`client.dll` `FUN_10003240` hooks them):

| Event | Handler |
|---|---|
| fire | `FUN_1003de40`: dispatches on `info.kind`. Kinds 4/5 → `FUN_1003f090`; kind 1 → `FUN_10040c20`; else `FUN_1003dfa0` |
| firelinked | `FUN_1003de10` (`FUN_1003f090` with linked = 1) |
| empty | `LAB_100424e0` |
| pump | `LAB_100419a0` |
| closecombat | `LAB_10043200` |
| coldcock | `LAB_10043800` |
| reload | `LAB_10042690` |
| knife | `LAB_10043c90` |
| katana | `LAB_10044230` |
| draw | `FUN_100425b0` |
| grenade | `FUN_10042630` |

`FUN_1003dfa0` does the following:

- Reads `get_weapon_info(i1)` (client `FUN_100071c0`).
- Plays view anim `[6]` if b1 is set, else a random `[3..5]`.
- Ejects the `info+0xe8` shell, skipped for silenced weapons, which also get no muzzle flash.
- Draws `sprites/shotgun_pellets.spr` puffs when `pellets > 1`.
- Uses `info+0x34c` as the third-person muzzle offset.
- Re-traces the bullets with the same seed, so decals match the server.

### 6.2 User messages (registered in `global_000cec9c.c` around line 1135)

| Msg (name, size) | Dest | Payload | Sender |
|---|---|---|---|
| `WeaponInfo` (6) | ONE | byte id, byte clip, short reserve ammo, byte firemode, byte attachments. With kung fu: id 0, byte kung-fu bar, 0, 0, 0 | `CTSGun::UpdateClientData` `0x858c8` (checked at 10 Hz, sent on change) |
| `WStatus` (3) | ONE | byte id, byte owned, byte clip/count | same; for every id whose owned flag changed, plus the akimbo/single twin |
| `ActItems` (2) | ALL | byte entindex, byte `GetActiveItems()` (attachments on, \| 0x40 if akimbo) | `CBasePlayer::UpdateClientData` `0x91d00`, on change (third-person laser/flashlight); reset in `Killed` |
| `CustomWP` (−1) | ALL / ONE | string `"%i %f %f %f %f %i"` = id, accuracy, view kick, acc kick, damage, cost | `SendWeaponParams` `0x9eb98`; on connect `InformClientsOnWeaponsParams` also shows "This server is using custom weapons." |
| `TSCash` (2) | ONE | short cash | on change |
| `TSSpace` (1) | ONE | byte free slots (`pl+0x548`) | on change |
| `PTakeDam` (13) | PVS | coord hit pos ×3, coord dir ×3, byte `min(127, dmg/2)` (+128 = kevlar hit; shotgun-flag damage ×8 first) | `TraceAttack`, ≤ 1 per 0.3 s |
| `TSFrags` (−1) | ALL | coord ×3 origin, coord dmg, 0, 0, byte 1 | `TSExplosion` |
| `KFuPower` (1) | ONE | char kung-fu bar | |
| `CurWeapon`, `AmmoX`, `WeaponList`, `ClipInfo` | | HL leftovers. `CTSGun` overrides `UpdateClientData`, so `CurWeapon` only gets a 0,0,0 reset. `ClipInfo` is never sent | |

`GetWeaponData` `0xb00ac` reports only the CTSGun under id 16:

- clip = `gun+0xb4`
- `m_flNextPrimaryAttack` / `Secondary` / `TimeWeaponIdle` = `gun+0x9c` / `0xa0` / `0xa8`
- `m_fInReload` = `gun+0xc0`, `m_fInSpecialReload` = `gun+0x98`
- `fuser1` = `pev->fuser1`; `fuser2/3`, `iuser1..3` = `gun+0x4c..0x5c`

The rest of the per-weapon state reaches the client through `WeaponInfo`/`WStatus`. CHANGELOG says
"weapon clip/firemode update is done completely client side".

## 7. Inventory, buying, dropping

### 7.1 Loadout ("armament") commands (`ClientCommand` `0xad838`)

| Command | Effect |
|---|---|
| `tkw id_attachments …` | `AddItemToArmament`: up to 32 entries at `pl+0x594` (id, attachments, isItem). Stackables are expanded to `count` entries, clamped to `info+0x24` |
| `tki item …` | adds an item entry (`AddItem` bits: 0x10 kevlar, 0x20 special item (inferred), or attachment bits for the current gun) |
| `tka ammotype_count …` | `AddAmmoToArmament`: ammo purchases per type, `pl+0x554[16]` |
| `rst_cfg` | `ResetArmament` |
| `weapon_<id>` | select a weapon (remembers `lastinv` in `pl+0xa1c`) |
| `lastinv` | swap to the previous weapon |
| `firemode` | `SwitchFireMode` |
| `useitems` | `SwitchItems` |
| `drop` / `drop_<id>` | `CBasePlayer::DropWeapon(id or current)` |
| `cashala` | +30000 cash (cheats only) |
| `lasclr_<n>` | broadcasts the laser colour (`PlInfo`) |

The loadout is applied on every spawn by `CBasePlayer::BuyArmament` `0x93f10`, called from
`PlayerSpawn` when the map has no `game_player_equip`. It calls `BuyWeapon`/`AddItem`, then
`BuyAmmo(type)` × count.

- `BuyWeapon` `0x945bc`: weapon restriction check. M61 is only allowed when the game mode value is
  > 1, with at most 2 per life. Price = `info.cost` + attachments (S 900, L 800, F 500, Z 1800).
  Then `PickUpWeapon(id, NULL, attachments, select=1, own=1)`.
- `BuyAmmo` `0x941e8`: adds `per_buy` rounds at the ammo price. −2 = fill all owned weapons;
  −1 = current weapon.
- Kevlar costs 1900 and 10 slots. Item 0x20 costs 700.

**`CashBased()` `0x76abc` always returns 0 in this build, so no price is ever charged or checked.**
Buying is limited only by slots, restrictions, and per-life limits. Cash (`pl+0x540`, clamped to
0..30000 by `GiveCash`) and cvars `initial_cash 1200`, `cashforwin 10000`, `cashforlose 1200`,
`usecash 0` still exist. `CTSGameRules` refunds the value of weapons and ammo at round end
(`puVar5[1]` × rounds / per_buy). Ground weapons marked `buyable` charge only when cash-based.

### 7.2 Restrictions

The `weaponrestriction` console command and `CTSMapGlobals::get_weapon_restriction` set a mask,
default `0x1f` (`InitWeaponRestriction`). A set bit means allowed:

| Bit | Allows |
|---|---|
| `0x01` | knives (kind 3, plus Katana) |
| `0x02` | pistols (kind 8, plus single-gun akimbos) |
| `0x04` | SMGs (kind 9, plus akimbo Uzi/Skorpion) |
| `0x08` | rifles and sniper (kinds 6, 7) |
| `0x10` | shotguns (kind 1, plus Sawed-off) |

Mask 0 blocks everything. Grenades and Golden Colts are never restricted.
`WeaponRestrictionByID` presets: 1 → 0, 2 → 1, 3 → 3, 4 → 0x13.

### 7.3 Slots (weight) and speed

`pl+0x548` = free slots, 81 at spawn. `PickUpWeapon` `0x9314c` needs
`free ≥ info.slots` (× count for stackables). Kevlar takes 10 and the briefcase/flag takes 20.
Throwing a knife or grenade gives its slots back.

`GetSpeedBySlots` `0x76bd4`: `maxspeed = 210 + free × 120/81` when `free ≤ 80` and no flag is
carried. That is 330 u/s empty and 210 u/s full. `TSSpace` sends the value.

### 7.4 Ground and dropped entities

| Class (classname) | Size | Role |
|---|---|---|
| `CTSWorldGun` (`TSWorldGun`, internal classname `CTSWorldGun`) | 0xd8 | Created by `CreateWeapon(player, id, status)` `0xa07ec` on drop/disarm. It carries the full `s_weapon_status` (clip, firemode, attachments, owner). Lifetime `clamp(weaponstay, 5, 60)` s (default 15); the briefcase gets 30 s and a glow shell. Picked up on touch **only while holding +use** (`button & IN_USE`); the briefcase is picked up on plain touch. `CanUsedTroughWalls` = 0. Explosions throw it around. Dropped weapons glow. |
| `CTSGroundWeapon` (`ts_groundweapon`) | 0xb4 | Mapper weapon. Keys: `tsweaponid`, `wduration` (respawn delay, ≤ 180), `wextraclip` (extra mags), `buyable`, `attackerteam`; attachments come from spawnflags (inferred). `PutOnWall` snaps it to a surface. `GetWeapon` `0xa2328` |
| `CTSGroundAmmo` (`ts_groundammo`) | 0xac | Keys `wduration`, `mags<type>`: gives `mags × per_buy` |
| `CTSAmmoPack` (`TSAmmoPack`) | 0xa8 | Dropped ammo (`CBasePlayer::DropAmmo` `0x946f0`, `CTSGun+0xd4` copied); `WaitTouch` gives it back |
| `CTSPistolWeapon`, `…SMG/Shotgun/Rifle/Sniper/BigPistol/MG/Knife/Katana/GrenadeWeapon` + `CTS*Ammo` | 0xb4 / 0xac | HLDM entity replacements (sub-classes of `CTSGroundWeapon`/`Ammo`), listed below |

HLDM replacements (`Random*` picks a random id):

| HLDM classname | TS class | Ids |
|---|---|---|
| `weapon_crossbow` | Sniper | 18 |
| `weapon_shotgun` | Shotgun | random of 4, 26, 33, 20, 11 |
| `weapon_gauss`, `weapon_egon` | Rifle | random of 13, 5, 27, 15 |
| `weapon_rpg` | SMG | random of 23, 7, 6, 19, 17, 3 |
| `weapon_9mmAR` | BigPistol | random of 31, 12, 36 |
| `weapon_hornetgun` | MG | 32 |
| `weapon_satchel`, `ammo_ARgrenades` | Knife | random of 25, 35 |
| `weapon_snark` | Katana | 34 |
| `weapon_handgrenade` | Grenade | 24 |
| (none listed) | Pistol | random of 1, 8, 9, 14, 21, 22, 28 |

The `ammo_*` entities map to the matching `CTS*Ammo` class. Each gives `max_carry/2` of its types.

`CBasePlayer::DropWeapon` `0x94900` (`drop`) and `ThrowWeapon` `0x9529c` launch the gun 16 u ahead.
The throw angle is clamped to 10–120 (inferred). Dropping an akimbo drops the pair as two singles.
Accumulated damage can disarm a player ("disarm by accumulative damage"), which uses the same path.
The auto-switch after a drop follows `g_iWeaponPriority`:

> 18 Barrett, 32 M60, 13 AK47, 5 M4, 15 AUG, 27 M16, 11 USAS, 20 SPAS, 4 M3, 26 Mossberg,
> 33 Sawed-off, 16 Uzi×2, 37 Skorpion×2, 6 MP5SD, 23 UMP, 7 MP5K, 3 Uzi, 17 Skorpion, 19 MP7,
> 10 MK23×2, 8 Beretta×2, 21 Colts, 30 FN×2, 31 Bull, 12 Deagle, 36 Contender, 22 Glock-20C,
> 9 MK23, 2 Beretta, 14 FN, 28 Ruger, 1 Glock-18, 34 Katana, 25 Knife, 35 Seal, 24 M61, 29 case

### 7.5 Powerups that touch weapons (`pl+0x724` bits)

| Bit / field | Powerup | Effect on weapons |
|---|---|---|
| `0x02` (`InfiniteClips` `0x75fc8`) | Infinite clip | The clip is never decremented, and thrown knives/katana aren't consumed. Grenades are still consumed (`GrenadeIdle` decrements unconditionally). On pickup, `MultiplyClips` doubles the clip |
| `0x10` (`DoubleFireRate` `0x75fe4`) | Double fire rate | All weapon timers run 1.5× faster. Semi becomes auto. Recoil ×2/3. Spread-growth factor 1 instead of 2. Spread decay is also 1.5× faster |
| `pl+0x74e` (`KungFu`) | Kung fu | Kung-fu damage ×2 |
| slow motion (`GiveSlowMul`) | Slow-mo | Scales weapon timers and grenade fuses; turns on simulated bullets (§5.5) |

## 8. Rust recreation notes

### 8.1 Corrections to `docs/rust.md` §8/§11

- **One weapon entity per player**, holding 38 inventory records. Not one entity per weapon. Report it
  to the engine as a single `weapon_data_t` (id 16). Carry the current id, clip, and firemode in
  the prediction data. `weapon_data_t.iuser1..3` and `fuser1..3` are free for this. TS itself
  syncs the rest with `WeaponInfo`/`WStatus`.
- **Akimbo is not two independent timers.** It is one timer pair. A toggle picks the gun, and both
  triggers fire in modes 4/5. A "linked" shot fires both guns at once with doubled kick.
- **The laser sight has no server-side accuracy effect** in this build. The silencer does: ×0.775
  damage, ×0.875 spread, ×0.775 kick.
- **No movement/stance spread.** Spread is `accuracy + per-player recoil penalty` (max +0.1, decays
  0.1/s). Only the Barrett and M60 look at speed.
- **Locational damage** in shared code: head ×2 (×1.5 for shotguns), hitgroups 6/7 ×0.5, armour
  on 2–5 only.
- **Buy menu**: prices exist in the tables but are not enforced (`CashBased() == 0`). Inventory
  weight (81 slots) drives move speed (`210 + free·120/81`).

### 8.2 What goes where

| `shared::weapons` (predicted, must match bit-for-bit) | server only |
|---|---|
| `WeaponInfo`/`AmmoInfo` tables and the `CustomWP` override path | Hit traces, `TraceAttack`/`TakeDamage`, hitgroups, armour |
| Firemode state machine (auto/semi/burst/pump/akimbo), burst counter, akimbo toggle | Penetration recursion and `CBulletManager` simulated bullets |
| Timers (relative; decrement = `frametime × slowmul × (DFR ? 1.5 : 1)`) | Projectiles: `CTSKnife`, `CM61Grenade`, `TSExplosion` |
| Clip/reserve bookkeeping, reload phases (incl. shotgun 3-phase) | Inventory changes: pickups, drops, `WorldGun` lifetimes, slots/speed |
| `ScaleSpread` penalty (needs `pl.spread_penalty` and `last_shot` in prediction state) | Loadout/armament application at spawn, restrictions |
| Pellet direction generator (`SharedRandomFloat(seed+i…)`, `1−r³` radial) | Melee hit resolution (`CloseCombatAttack`, holds/blocks) |
| View kick (`VKickback`: client applies it for humans) | Messages (`WeaponInfo`, `WStatus`, `ActItems`, `PTakeDam`, `TSCash`, `TSSpace`) |
| Zoom FOV steps, grip toggle, sequence-table lookups, event emission | `armor_absorb`, `damagemult`, `realbullet`, `ammocount`, `weaponstay` cvars |

Keep `range_damage_multipler` as a pure function: `min(1, 1/sqrt(max(round(dist/unit),1)·0.1))`.
It needs no table.

### 8.3 Draft data schema (TOML)

Field names map 1:1 to `s_weapon_info`. Bit fields are stored as integers so the values stay
exact. `modes` lists the firemode names in bit order. The first listed mode is not the default;
derive it with the §4.3 rule.

```toml
# weapons.toml — one [[weapon]] per tsweapon_t; full example (AK47, id 13)
[[weapon]]
id = 13
key = "ak47"
name = "AK47"
kind = "rifle"
hud = [4, 3]
ammo = 6
clip = 30
modes = ["auto", "semi"]
rate = 0.08
reload = 2.5
damage = 39.0
pellets = 1
bullet = 0
stock = 0
accuracy = 0.0025
scale_spread = true
acc_kick = 0.0001
view_kick = 5.5
kick = true
zoom = [32, 13]
slots = 40
cost = 3000
stack = false
att_allowed = 8
att_default = 0
akimbo = -1
single = 13
[weapon.assets]
v_model = "models/v_ak47.mdl"
p_model = "models/p_ak47.mdl"
p_model_sil = ""
w_model = "models/w_ak47.mdl"
sprite = "sprites/weapons/ak47.spr"
anim_ext = "twohanded"
sound = "weapons/ak47/fire.wav"
sound2 = ""
shell = "models/556_shell.mdl"
body = [0, 0, 0, 1, -1]   # add for S, L, F, Z, L+F
anims = [0, 1, 2, 3, 3, 3, 3, 5]
anims_alt = [4, 8, 2, 7, 7, 7, 7, 6]   # 29 entries, trailing zeros omitted
fx = { muzzle_fwd = 21, style = 1, a = 32, b = 8, handling = 0.85 }        # client-only, meaning inferred
```

All 38 entries, gameplay fields only (paste into `weapon = [ … ]`):

```toml
weapon = [
{ id = 0, key = "melee", name = "Kung-fu", kind = "kungfu", hud = [1, 6], ammo = 0, clip = 0, modes = [], rate = 0, reload = 0, damage = 0, pellets = 0, bullet = 0, accuracy = 0, scale_spread = false, acc_kick = 0, view_kick = 0, kick = false, stock = 0, zoom = [0, 0], slots = 0, cost = 0, stack = false, att_allowed = 0, att_default = 0, akimbo = -1, single = 0 },
{ id = 1, key = "glock18", name = "Glock-18", kind = "pistol", hud = [2, 1], ammo = 1, clip = 17, modes = ["auto", "semi"], rate = 0.054, reload = 1.5, damage = 24, pellets = 1, bullet = 0, accuracy = 0.01, scale_spread = true, acc_kick = 0.0065, view_kick = 2.2, kick = true, stock = 0, zoom = [0, 0], slots = 10, cost = 850, stack = false, att_allowed = 7, att_default = 0, akimbo = -1, single = 1 },
{ id = 2, key = "beretta", name = "Beretta 92F", kind = "pistol", hud = [2, 9], ammo = 1, clip = 15, modes = ["semi"], rate = 0.1, reload = 1.2, damage = 27, pellets = 1, bullet = 0, accuracy = 0.01, scale_spread = true, acc_kick = 0, view_kick = 2.5, kick = true, stock = 0, zoom = [0, 0], slots = 10, cost = 900, stack = false, att_allowed = 7, att_default = 0, akimbo = 8, single = 2 },
{ id = 3, key = "uzi", name = "Mini-Uzi", kind = "smg", hud = [3, 1], ammo = 1, clip = 32, modes = ["auto", "semi"], rate = 0.06, reload = 2.2, damage = 20, pellets = 1, bullet = 0, accuracy = 0.02, scale_spread = true, acc_kick = 0.0065, view_kick = 1.75, kick = true, stock = 0, zoom = [0, 0], slots = 20, cost = 1300, stack = false, att_allowed = 1, att_default = 0, akimbo = 16, single = 3 },
{ id = 4, key = "benellim3", name = "Benelli M3", kind = "shotgun", hud = [4, 1], ammo = 3, clip = 7, modes = ["semi", "pump"], rate = 0.225, reload = 0.3, damage = 12, pellets = 8, bullet = 1, accuracy = 0.035, scale_spread = false, acc_kick = 0, view_kick = 13, kick = true, stock = 35, zoom = [40, 0], slots = 40, cost = 3000, stack = false, att_allowed = 14, att_default = 0, akimbo = -1, single = 4 },
{ id = 5, key = "m4", name = "M4A1", kind = "rifle", hud = [4, 2], ammo = 4, clip = 30, modes = ["auto", "semi"], rate = 0.07, reload = 2.8, damage = 33, pellets = 1, bullet = 0, accuracy = 0.005, scale_spread = true, acc_kick = 0.004, view_kick = 3.75, kick = true, stock = 35, zoom = [26, 0], slots = 40, cost = 4500, stack = false, att_allowed = 15, att_default = 0, akimbo = -1, single = 5 },
{ id = 6, key = "mp5sd", name = "MP5SD", kind = "smg", hud = [3, 2], ammo = 1, clip = 30, modes = ["auto", "semi", "burst"], rate = 0.074, reload = 2.3, damage = 19, pellets = 1, bullet = 0, accuracy = 0.005, scale_spread = true, acc_kick = 0.005, view_kick = 1.25, kick = true, stock = 30, zoom = [32, 0], slots = 25, cost = 2500, stack = false, att_allowed = 15, att_default = 1, akimbo = -1, single = 6 },
{ id = 7, key = "mp5k", name = "MP5K", kind = "smg", hud = [3, 3], ammo = 1, clip = 30, modes = ["auto", "semi", "burst"], rate = 0.066, reload = 2.3, damage = 23, pellets = 1, bullet = 0, accuracy = 0.02, scale_spread = true, acc_kick = 0.003, view_kick = 2.25, kick = true, stock = 0, zoom = [32, 0], slots = 20, cost = 1500, stack = false, att_allowed = 15, att_default = 0, akimbo = -1, single = 7 },
{ id = 8, key = "beretta_akimbo", name = "Akimbo Berettas", kind = "akimbo", hud = [5, 1], ammo = 1, clip = 30, modes = ["semi", "ak_semi"], rate = 0.1, reload = 2.4, damage = 27, pellets = 1, bullet = 0, accuracy = 0.02, scale_spread = true, acc_kick = 0, view_kick = 2.5, kick = true, stock = 0, zoom = [0, 0], slots = 10, cost = 900, stack = false, att_allowed = 7, att_default = 0, akimbo = -1, single = 2 },
{ id = 9, key = "mk23", name = "SOCOM-MK23", kind = "pistol", hud = [2, 2], ammo = 2, clip = 12, modes = ["semi"], rate = 0.1, reload = 1.5, damage = 33, pellets = 1, bullet = 0, accuracy = 0.01, scale_spread = true, acc_kick = 0, view_kick = 4, kick = true, stock = 0, zoom = [0, 0], slots = 10, cost = 700, stack = false, att_allowed = 7, att_default = 0, akimbo = 10, single = 9 },
{ id = 10, key = "mk23akimbo", name = "Akimbo MK23", kind = "akimbo", hud = [5, 2], ammo = 2, clip = 24, modes = ["semi", "ak_semi"], rate = 0.1, reload = 2.5, damage = 33, pellets = 1, bullet = 0, accuracy = 0.02, scale_spread = true, acc_kick = 0, view_kick = 4, kick = true, stock = 0, zoom = [0, 0], slots = 10, cost = 700, stack = false, att_allowed = 7, att_default = 0, akimbo = -1, single = 9 },
{ id = 11, key = "usas12", name = "USAS-12", kind = "rifle", hud = [4, 11], ammo = 3, clip = 20, modes = ["auto"], rate = 0.166, reload = 3, damage = 7, pellets = 8, bullet = 1, accuracy = 0.065, scale_spread = false, acc_kick = 0, view_kick = 4, kick = true, stock = 50, zoom = [0, 0], slots = 40, cost = 5100, stack = false, att_allowed = 6, att_default = 0, akimbo = -1, single = 11 },
{ id = 12, key = "desert", name = "Desert Eagle", kind = "pistol", hud = [2, 3], ammo = 5, clip = 7, modes = ["semi"], rate = 0.1, reload = 2.1, damage = 49, pellets = 1, bullet = 0, accuracy = 0.005, scale_spread = true, acc_kick = 0.0125, view_kick = 7.5, kick = true, stock = 25, zoom = [60, 0], slots = 15, cost = 1050, stack = false, att_allowed = 11, att_default = 0, akimbo = -1, single = 12 },
{ id = 13, key = "ak47", name = "AK47", kind = "rifle", hud = [4, 3], ammo = 6, clip = 30, modes = ["auto", "semi"], rate = 0.08, reload = 2.5, damage = 39, pellets = 1, bullet = 0, accuracy = 0.0025, scale_spread = true, acc_kick = 0.0001, view_kick = 5.5, kick = true, stock = 0, zoom = [32, 13], slots = 40, cost = 3000, stack = false, att_allowed = 8, att_default = 0, akimbo = -1, single = 13 },
{ id = 14, key = "fnh", name = "Five-seveN", kind = "pistol", hud = [2, 4], ammo = 7, clip = 20, modes = ["semi"], rate = 0.1, reload = 1.5, damage = 23, pellets = 1, bullet = 0, accuracy = 0.0025, scale_spread = true, acc_kick = 0.01, view_kick = 1.5, kick = true, stock = 0, zoom = [0, 0], slots = 10, cost = 1250, stack = false, att_allowed = 7, att_default = 0, akimbo = 30, single = 14 },
{ id = 15, key = "aug", name = "STEYR-AUG", kind = "rifle", hud = [4, 4], ammo = 4, clip = 30, modes = ["auto", "semi"], rate = 0.092, reload = 2.4, damage = 29, pellets = 1, bullet = 0, accuracy = 0.005, scale_spread = true, acc_kick = 0.01, view_kick = 2, kick = true, stock = 35, zoom = [40, 0], slots = 30, cost = 5000, stack = false, att_allowed = 11, att_default = 8, akimbo = -1, single = 15 },
{ id = 16, key = "uzi_akimbo", name = "Akimbo Mini-Uzi", kind = "akimbo", hud = [5, 3], ammo = 1, clip = 64, modes = ["auto", "ak_auto"], rate = 0.06, reload = 3, damage = 20, pellets = 1, bullet = 0, accuracy = 0.04, scale_spread = true, acc_kick = 0.0065, view_kick = 1.75, kick = true, stock = 0, zoom = [0, 0], slots = 20, cost = 1300, stack = false, att_allowed = 1, att_default = 0, akimbo = -1, single = 3 },
{ id = 17, key = "skorpion", name = "Skorpion", kind = "smg", hud = [3, 4], ammo = 12, clip = 20, modes = ["auto", "semi"], rate = 0.07, reload = 1, damage = 16, pellets = 1, bullet = 0, accuracy = 0.025, scale_spread = true, acc_kick = 0.0015, view_kick = 0.5, kick = true, stock = 0, zoom = [0, 0], slots = 15, cost = 1100, stack = false, att_allowed = 0, att_default = 0, akimbo = 37, single = 17 },
{ id = 18, key = "barrett", name = "Barrett M82A1", kind = "sniper", hud = [4, 5], ammo = 8, clip = 5, modes = ["semi"], rate = 0.7, reload = 2, damage = 185, pellets = 1, bullet = 0, accuracy = 0.001, scale_spread = true, acc_kick = 0.1, view_kick = 10, kick = true, stock = 70, zoom = [32, 8], slots = 70, cost = 9000, stack = false, att_allowed = 10, att_default = 8, akimbo = -1, single = 18 },
{ id = 19, key = "pdw", name = "MP7-PDW", kind = "smg", hud = [3, 5], ammo = 7, clip = 40, modes = ["auto", "semi"], rate = 0.063, reload = 2.5, damage = 16, pellets = 1, bullet = 0, accuracy = 0.005, scale_spread = true, acc_kick = 0.0065, view_kick = 1, kick = true, stock = 0, zoom = [40, 0], slots = 25, cost = 2800, stack = false, att_allowed = 11, att_default = 0, akimbo = -1, single = 19 },
{ id = 20, key = "spas12", name = "SPAS-12", kind = "shotgun", hud = [4, 6], ammo = 3, clip = 8, modes = ["semi", "pump"], rate = 0.2, reload = 0.3, damage = 12, pellets = 8, bullet = 1, accuracy = 0.05, scale_spread = false, acc_kick = 0, view_kick = 10, kick = true, stock = 0, zoom = [0, 0], slots = 30, cost = 2100, stack = false, att_allowed = 6, att_default = 0, akimbo = -1, single = 20 },
{ id = 21, key = "gold", name = "Golden Colts", kind = "akimbo_only", hud = [5, 4], ammo = 2, clip = 16, modes = ["semi", "ak_semi"], rate = 0.1, reload = 2.3, damage = 40, pellets = 1, bullet = 0, accuracy = 0.0075, scale_spread = true, acc_kick = 0, view_kick = 5.5, kick = true, stock = 0, zoom = [0, 0], slots = 20, cost = 2600, stack = false, att_allowed = 0, att_default = 0, akimbo = -1, single = -1 },
{ id = 22, key = "glock22", name = "Glock-20C", kind = "pistol", hud = [2, 5], ammo = 9, clip = 15, modes = ["semi"], rate = 0.1, reload = 2, damage = 39, pellets = 1, bullet = 0, accuracy = 0.01, scale_spread = true, acc_kick = 0.0125, view_kick = 5, kick = true, stock = 0, zoom = [0, 0], slots = 10, cost = 1300, stack = false, att_allowed = 7, att_default = 0, akimbo = -1, single = 22 },
{ id = 23, key = "mac10", name = "UMP", kind = "smg", hud = [3, 6], ammo = 2, clip = 25, modes = ["auto", "semi", "burst"], rate = 0.092, reload = 2.5, damage = 31, pellets = 1, bullet = 0, accuracy = 0.015, scale_spread = true, acc_kick = 0, view_kick = 3, kick = true, stock = 30, zoom = [40, 0], slots = 30, cost = 2300, stack = false, att_allowed = 15, att_default = 0, akimbo = -1, single = 23 },
{ id = 24, key = "m61", name = "M61 Grenade", kind = "grenade", hud = [1, 1], ammo = 0, clip = 1, modes = ["auto"], rate = 1, reload = 1, damage = 0, pellets = 2, bullet = 4, accuracy = 0.1, scale_spread = false, acc_kick = 0, view_kick = 1, kick = false, stock = 0, zoom = [0, 0], slots = 7, cost = 1000, stack = true, att_allowed = 0, att_default = 0, akimbo = -1, single = 24 },
{ id = 25, key = "knife", name = "Combat Knife", kind = "knife", hud = [1, 3], ammo = 0, clip = 1, modes = ["auto"], rate = 0.4, reload = 1, damage = 30, pellets = 5, bullet = 6, accuracy = 0.1, scale_spread = false, acc_kick = 0, view_kick = 1, kick = false, stock = 0, zoom = [0, 0], slots = 1, cost = 100, stack = true, att_allowed = 0, att_default = 0, akimbo = -1, single = 25 },
{ id = 26, key = "mossberg", name = "Mossberg 500", kind = "shotgun", hud = [4, 7], ammo = 3, clip = 8, modes = ["pump"], rate = 0.25, reload = 0.3, damage = 16, pellets = 8, bullet = 1, accuracy = 0.045, scale_spread = false, acc_kick = 0, view_kick = 8.5, kick = true, stock = 0, zoom = [0, 0], slots = 40, cost = 2500, stack = false, att_allowed = 6, att_default = 0, akimbo = -1, single = 26 },
{ id = 27, key = "m16", name = "M16A4", kind = "rifle", hud = [4, 8], ammo = 4, clip = 18, modes = ["semi", "burst"], rate = 0.07, reload = 2.8, damage = 40, pellets = 1, bullet = 0, accuracy = 0.0015, scale_spread = true, acc_kick = 0.005, view_kick = 4, kick = true, stock = 35, zoom = [32, 8], slots = 40, cost = 2500, stack = false, att_allowed = 14, att_default = 0, akimbo = -1, single = 27 },
{ id = 28, key = "ruger", name = "Ruger-MK1", kind = "pistol", hud = [2, 6], ammo = 10, clip = 17, modes = ["semi"], rate = 0.1, reload = 1.3, damage = 15, pellets = 1, bullet = 0, accuracy = 0.005, scale_spread = true, acc_kick = 0.008, view_kick = 0.35, kick = true, stock = 0, zoom = [0, 0], slots = 5, cost = 1500, stack = false, att_allowed = 3, att_default = 1, akimbo = -1, single = 28 },
{ id = 30, key = "fnhakimbo", name = "Akimbo Five-seveN", kind = "akimbo", hud = [5, 5], ammo = 7, clip = 40, modes = ["semi", "ak_semi"], rate = 0.1, reload = 3, damage = 23, pellets = 1, bullet = 0, accuracy = 0.005, scale_spread = true, acc_kick = 0.01, view_kick = 1.5, kick = true, stock = 0, zoom = [0, 0], slots = 10, cost = 1250, stack = false, att_allowed = 7, att_default = 0, akimbo = -1, single = 14 },
{ id = 31, key = "bull", name = "Raging Bull", kind = "pistol", hud = [2, 7], ammo = 11, clip = 5, modes = ["semi"], rate = 0.15, reload = 2, damage = 95, pellets = 1, bullet = 0, accuracy = 0.0025, scale_spread = true, acc_kick = 0, view_kick = 13, kick = true, stock = 0, zoom = [40, 0], slots = 15, cost = 2100, stack = false, att_allowed = 10, att_default = 0, akimbo = -1, single = 31 },
{ id = 32, key = "m60", name = "M60E3", kind = "rifle", hud = [4, 9], ammo = 4, clip = 100, modes = ["auto"], rate = 0.109, reload = 3, damage = 33, pellets = 1, bullet = 0, accuracy = 0.015, scale_spread = true, acc_kick = 0.005, view_kick = 1.5, kick = true, stock = 50, zoom = [0, 0], slots = 70, cost = 8000, stack = false, att_allowed = 0, att_default = 0, akimbo = -1, single = 32 },
{ id = 33, key = "sawedoff", name = "Sawed-off", kind = "pistol", hud = [4, 10], ammo = 3, clip = 2, modes = ["semi"], rate = 0.1, reload = 1.7, damage = 21, pellets = 8, bullet = 1, accuracy = 0.07, scale_spread = false, acc_kick = 0, view_kick = 10, kick = true, stock = 50, zoom = [0, 0], slots = 20, cost = 1900, stack = false, att_allowed = 2, att_default = 0, akimbo = -1, single = 33 },
{ id = 34, key = "katana", name = "Katana", kind = "katana", hud = [1, 2], ammo = 0, clip = 1, modes = ["auto"], rate = 0.7, reload = 1, damage = 45, pellets = 0, bullet = 8, accuracy = 0.7, scale_spread = false, acc_kick = 0, view_kick = 0, kick = false, stock = 0, zoom = [0, 0], slots = 10, cost = 2900, stack = false, att_allowed = 0, att_default = 0, akimbo = -1, single = 34 },
{ id = 35, key = "sealknife", name = "Seal Knife", kind = "knife", hud = [1, 4], ammo = 0, clip = 1, modes = ["auto"], rate = 0.25, reload = 1, damage = 20, pellets = 10, bullet = 7, accuracy = 0.1, scale_spread = false, acc_kick = 0, view_kick = 1, kick = false, stock = 0, zoom = [0, 0], slots = 1, cost = 100, stack = true, att_allowed = 0, att_default = 0, akimbo = -1, single = 35 },
{ id = 36, key = "contender", name = "Contender G2", kind = "pistol", hud = [2, 8], ammo = 13, clip = 1, modes = ["semi"], rate = 0.25, reload = 1.35, damage = 100, pellets = 1, bullet = 0, accuracy = 0.001, scale_spread = false, acc_kick = 0, view_kick = 7.5, kick = true, stock = 0, zoom = [26, 0], slots = 15, cost = 1500, stack = false, att_allowed = 10, att_default = 0, akimbo = -1, single = 36 },
{ id = 37, key = "skorpion_akimbo", name = "Akimbo Skorpions", kind = "akimbo", hud = [5, 6], ammo = 12, clip = 40, modes = ["auto", "ak_auto"], rate = 0.07, reload = 2, damage = 16, pellets = 1, bullet = 0, accuracy = 0.05, scale_spread = true, acc_kick = 0.003, view_kick = 0.5, kick = true, stock = 0, zoom = [0, 0], slots = 15, cost = 1100, stack = false, att_allowed = 0, att_default = 0, akimbo = -1, single = 17 }
]
```

Ammo (`ammo.toml`; `max_carry` index = cvar `ammocount`):

```toml
ammo = [
  { id = 1,  name = "9 x 19mm",    price = 50,  per_buy = 30, max_carry = [210, 90, 30, 0],  pierce = 0.2,  range_unit = 80,  velocity = 330 },
  { id = 2,  name = ".45Acp",      price = 60,  per_buy = 12, max_carry = [175, 50, 25, 0],  pierce = 0.2,  range_unit = 90,  velocity = 280 },
  { id = 3,  name = "SHELLS",      price = 120, per_buy = 8,  max_carry = [60, 32, 16, 0],   pierce = 0.0,  range_unit = 90,  velocity = 350 },
  { id = 4,  name = "5.56 Nato",   price = 80,  per_buy = 30, max_carry = [120, 60, 30, 0],  pierce = 0.9,  range_unit = 150, velocity = 900 },
  { id = 5,  name = ".50AE",       price = 70,  per_buy = 10, max_carry = [70, 21, 7, 0],    pierce = 0.5,  range_unit = 90,  velocity = 480 },
  { id = 6,  name = "7.62 x 39mm", price = 100, per_buy = 30, max_carry = [90, 60, 30, 0],   pierce = 0.7,  range_unit = 170, velocity = 790 },
  { id = 7,  name = "5.7 x 28",    price = 120, per_buy = 20, max_carry = [160, 40, 20, 0],  pierce = 1.0,  range_unit = 100, velocity = 730 },
  { id = 8,  name = "50BMG",       price = 500, per_buy = 5,  max_carry = [30, 10, 5, 0],    pierce = 1.0,  range_unit = 200, velocity = 1000 },
  { id = 9,  name = "10mm AUTO",   price = 70,  per_buy = 15, max_carry = [90, 30, 15, 0],   pierce = 0.5,  range_unit = 90,  velocity = 450 },
  { id = 10, name = ".22 LR",      price = 100, per_buy = 17, max_carry = [150, 34, 17, 0],  pierce = 0.9,  range_unit = 70,  velocity = 350 },
  { id = 11, name = ".454 Casull", price = 150, per_buy = 5,  max_carry = [50, 15, 5, 0],    pierce = 0.75, range_unit = 20,  velocity = 400 },
  { id = 12, name = ".32Acp",      price = 30,  per_buy = 20, max_carry = [300, 100, 40, 0], pierce = 0.0,  range_unit = 40,  velocity = 300 },
  { id = 13, name = "7.62 x 51mm", price = 150, per_buy = 5,  max_carry = [35, 15, 5, 0],    pierce = 0.7,  range_unit = 170, velocity = 850 },
]
# constants shared by all ammo: max_range = 8192, radial_spread = 1.0, units_per_meter = 40
```

Game constants worth a `combat.toml`:

```toml
armor_absorb = 0.2125   # CTSGameRules constructor default (TSGameRules+0x588c)
silencer = { damage = 0.775, spread = 0.875, kick = 0.775 }
headshot = 2.0
headshot_shotgun = 1.5
leg = 0.5
stunt_damage_taken = 0.7
spread_penalty = { max = 0.1, decay_per_s = 0.1 }
semi_delay = 0.1
burst = { shots = 3, gap = 0.03, end = 0.2 }
pierce = { min_left = 5.0, max_step = 48.0, player_factor = 0.5, unit = 30.0 }
grenade = { fuse = 3.0, damage = 110, r_full = 300, r_max = 1024, max_speed = 750, per_life = 2 }
thrown = { speed = 1900, knife = 100, seal = 50, katana = 150 }
slots = { total = 81, kevlar = 10, flag = 20, speed_min = 210, speed_max = 330 }
attachment_price = { silencer = 900, laser = 800, flashlight = 500, scope = 1800 }
```

### 8.4 Assets per weapon (client tables)

| id | v_/p_/w_ model stem | p_ silenced | fire sound | sound2 (sil/pump) | shell | anim ext | body S,L,F,Z,L+F | fx 34c/350/354/358 | f_d4 |
|---|---|---|---|---|---|---|---|---|---|
| 1 | glock18 | p_glock18_sil.mdl | glock/glock-fire.wav | glock/glock-fire-sil.wav | 9mm_shell | onehanded | 1,2,2,0,2 | 6/0/18/4 | 1 |
| 2 | beretta (w_berettas) | p_beretta_sil.mdl | beretta/fire.wav | beretta/fire-sil.wav | 9mm_shell | onehanded | 1,2,2,0,2 | 6/0/18/5 | 1 |
| 3 | uzi | p_uzi_sil.mdl | uzi/uzi-fire.wav | uzi/uzi-fire-sil.wav | 9mm_shell | onehanded | 1,0,0,0,-1 | 9/2/22/5 | 1 |
| 4 | m3 | - | m3/m3-fire.wav | m3/m3-pump.wav | shotgun_shell_blue | twohanded | 0,2,2,1,2 | 28/0/32/10 | 0.85 |
| 5 | m4 | p_m4_sil.mdl | m4/m4-fire.wav | m4/m4-fire-sil.wav | 556_shell | twohanded | 1,4,2,8,-1 | 23/1/32/8 | 0.85 |
| 6 | mp5sd | p_mp5sd.mdl | mp5sd/mp5sd-fire.wav | mp5sd/mp5sd-fire.wav | 9mm_shell | twohanded | 0,0,0,1,-1 | 16/2/18/6 | 0.9 |
| 7 | mp5k | p_mp5k_sil.mdl | mp5k/mp5k-fire.wav | mp5k/mp5k-fire-sil.wav | 9mm_shell | twohanded | 2,0,0,1,-1 | 6/2/22/5 | 1 |
| 8 | berettas | p_berettas_sil.mdl | beretta/fire.wav | beretta/fire-sil.wav | 9mm_shell | akimbo | 1,2,2,0,2 | 6/0/18/5 | 1 |
| 9 | mk23 | p_mk23_sil.mdl | mk23/mk23-fire.wav | mk23/mk23-fire-sil.wav | 9mm_shell | onehanded | 1,2,2,0,2 | 6/0/18/5 | 1 |
| 10 | mk23_akimbo (w_mk23) | p_mk23_akimbo_sil.mdl | mk23/mk23-fire.wav | mk23/mk23-fire-sil.wav | 9mm_shell | akimbo | 1,2,2,0,2 | 6/0/18/5 | 1 |
| 11 | usas | - | usas/usas-fire.wav | - | shotgun_shell | twohanded | 0,2,1,0,-1 | 26/0/32/10 | 0.85 |
| 12 | desert | p_desert_sil.mdl | deagle/fire.wav | deagle/fire-sil.wav | 9mm_shell | onehanded | 1,0,0,2,-1 | 6/0/20/8 | 1 |
| 13 | ak47 | - | ak47/fire.wav | - | 556_shell | twohanded | 0,0,0,1,-1 | 21/1/32/8 | 0.85 |
| 14 | fnh | p_fnh_sil.mdl | fnh/fnh-fire.wav | fnh/fnh-fire-sil.wav | 56_shell | onehanded | 1,2,2,0,2 | 6/0/18/5 | 1 |
| 15 | aug | p_aug_sil.mdl | aug/aug-fire.wav | aug/aug-fire-sil.wav | 556_shell | twohanded | 1,0,0,0,-1 | 18/1/32/8 | 0.85 |
| 16 | uzi_akimbo (w_uzi) | p_uzi_akimbo_sil.mdl | uzi/uzi-fire.wav | uzi/uzi-fire-sil.wav | 9mm_shell | akimbo | 1,0,0,0,-1 | 9/2/22/5 | 1 |
| 17 | skorpion | - | tmp/fire.wav | tmp/fire-sil.wav | 22_shell | onehanded | 0,0,0,0,-1 | 5/2/16/4 | 1 |
| 18 | m82 | - | barrett/fire.wav | - | 556_shell | twohanded | 0,0,0,0,-1 | 40/2/48/16 | 0.8 |
| 19 | pdw | p_pdw_sil.mdl | pdw/fire.wav | pdw/fire-sil.wav | 56_shell | onehanded | 1,0,0,2,-1 | 13/2/16/4 | 0.9 |
| 20 | spas12 | - | spas12/spas12-fire.wav | spas12/spas12-pump.wav | shotgun_shell | twohanded | 0,0,0,0,-1 | 23/0/32/10 | 0.85 |
| 21 | gold | - | gold/gold-fire.wav | - | 9mm_shell | akimbo | 0,0,0,0,-1 | 6/0/18/5 | 1 |
| 22 | glock22 | p_glock22_sil.mdl | glock22/glock22-fire.wav | glock22/glock22-fire-sil.wav | 9mm_shell | onehanded | 1,2,2,0,2 | 6/0/20/5 | 1 |
| 23 | ump | p_ump_sil.mdl | ump/ump-fire.wav | ump/ump-fire-sil.wav | 9mm_shell | twohanded | 2,0,0,1,-1 | 15/2/30/6 | 0.9 |
| 24 | m61 | - | - | - | - | - | 0,0,0,0,-1 | 0/0/0/0 | 1 |
| 25 | knife | - | - | - | - | - | 0,0,0,0,-1 | 0/0/0/0 | 1 |
| 26 | mossberg | - | mossberg/fire.wav | m3/m3-pump.wav | shotgun_shell_gold | twohanded | 0,2,1,0,-1 | 17/0/32/10 | 0.85 |
| 27 | m16 | - | m16/fire.wav | - | 556_shell | twohanded | 0,0,0,1,-1 | 32/1/32/8 | 0.9 |
| 28 | ruger | p_ruger.mdl | ruger/fire.wav | ruger/fire.wav | 22_shell | onehanded | 0,0,0,0,-1 | 7/0/18/5 | 1 |
| 30 | fnh_akimbo (w_fnh) | p_fnh_akimbo_sil.mdl | fnh/fnh-fire.wav | fnh/fnh-fire-sil.wav | 56_shell | akimbo | 1,2,2,0,2 | 6/0/18/5 | 1 |
| 31 | bull | - | bull/fire01.wav | - | - | onehanded | 0,0,0,1,-1 | 6/0/20/8 | 1 |
| 32 | m60 | - | m60/m60-fire.wav | - | 556_shell | twohanded | 0,0,0,0,-1 | 17/1/32/6 | 0.85 |
| 33 | sawedoff | - | sawedoff/fire.wav | - | - | twohanded | 0,0,0,0,-1 | 17/0/32/11 | 1 |
| 34 | katana | - | - | - | - | - | 0,0,0,0,-1 | 0/0/0/0 | 1 |
| 35 | sealknife | - | - | - | - | - | 0,0,0,0,-1 | 0/0/0/0 | 1 |
| 36 | contender | - | contender/fire.wav | - | - | onehanded | 0,0,0,2,-1 | 23/0/32/10 | 1 |
| 37 | skorpion_ak (w_skorpion) | - | tmp/fire.wav | - | 22_shell | akimbo | 0,0,0,0,-1 | 5/2/16/4 | 1 |

`fx` columns are `info+0x34c/0x350/0x354/0x358` (client-only effect offsets, inferred). `f_d4` is
`info+0xd4` (unknown, client-only).

### 8.5 Open questions to confirm against the client

1. The pellet radial term `1 − r³`: is the decompiled order right? Compare with client
   `FUN_1003dfa0`'s re-trace.
2. The exact katana variant table (damage/delay pairs) in `KatanaFire` `0x833f0`. Ghidra mixes up
   the int and float stack slots there, so read the disassembly at `0x83580..0x83660`.
3. Whether the client adds a laser-sight accuracy bonus (CHANGELOG 2.1.20) in its own
   `ScaleSpread` copy.
4. `info+0xd4`, `0x34c..0x358`, and ammo `+0x00/+0x08`: these are client-only, so trace their uses in
   `client.dll`.
