/* mp.dll - global_10052f60 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10052f60  get_weapon_info  (39 bytes)
 * undefined4 * get_weapon_info(int param_1)
 * called by: BotRandomAttachments, CBasePlayer::BuyAmmo, CBasePlayer::DropWeapon, CBasePlayer::Killed, CBasePlayer::PickUpWeapon, CHalfLifeMultiplay::PlayerKilled, CTSBigPistolWeapon::GetWeapon, CTSGameRules::RestartRound, CTSGroundWeapon::GetWeapon, CTSGroundWeapon::Spawn, CTSGun::AlternateAttack, CTSGun::HolsterWeapon, ... (26 total)
 */
undefined4 * __cdecl get_weapon_info(int param_1)

{
  if ((-1 < param_1) && (param_1 < 0x26)) {
    return &global_weapon_info + param_1 * 0xf7;
  }
  return &global_weapon_info;
}

/* 10052f90  get_ammo_info  (36 bytes)
 * undefined4 * get_ammo_info(int param_1)
 * called by: CBasePlayer::BuyAmmo, CBasePlayer::ShootBulletsPlayer, CTSBigPistolAmmo::Spawn, CTSGameRules::RestartRound, CTSGroundAmmo::KeyValue, CTSGroundWeapon::GetWeapon, CTSRifleAmmo::Spawn, CTSSMGAmmo::Spawn, CTSShotgunAmmo::Spawn, CTSSniperAmmo::Spawn, FUN_10047280
 */
undefined4 * __cdecl get_ammo_info(int param_1)

{
  if ((-1 < param_1) && (param_1 < 0x10)) {
    return &DAT_100c6388 + param_1 * 0xe;
  }
  return &DAT_100c6388;
}

/* 10053060  Set_ammo_count  (447 bytes)
 * undefined Set_ammo_count(int param_1)
 * called by: CTSGameRules::Think, compile_ammo_info
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl Set_ammo_count(int param_1)

{
  if (param_1 == 1) {
    _DAT_100c63cc = 0x5a;
    _DAT_100c6474 = 0x3c;
    _DAT_100c64e4 = 0x3c;
    _DAT_100c64ac = 0x15;
    _DAT_100c651c = 0x28;
    _DAT_100c6404 = 0x32;
    _DAT_100c658c = 0x1e;
    _DAT_100c6554 = 10;
    _DAT_100c643c = 0x20;
    _DAT_100c65c4 = 0x22;
    _DAT_100c65fc = 0xf;
    _DAT_100c6634 = 100;
    _DAT_100c666c = 0xf;
    return;
  }
  if (param_1 != 2) {
    if (param_1 != 3) {
      _DAT_100c63cc = 0xd2;
      _DAT_100c64ac = 0x46;
      _DAT_100c651c = 0xa0;
      _DAT_100c6404 = 0xaf;
      _DAT_100c658c = 0x5a;
      _DAT_100c6474 = 0x78;
      _DAT_100c64e4 = 0x5a;
      _DAT_100c6554 = 0x1e;
      _DAT_100c643c = 0x3c;
      _DAT_100c65c4 = 0x96;
      _DAT_100c65fc = 0x32;
      _DAT_100c6634 = 300;
      _DAT_100c666c = 0x23;
      return;
    }
    _DAT_100c63cc = 0;
    _DAT_100c64ac = 0;
    _DAT_100c651c = 0;
    _DAT_100c6404 = 0;
    _DAT_100c658c = 0;
    _DAT_100c6474 = 0;
    _DAT_100c64e4 = 0;
    _DAT_100c6554 = 0;
    _DAT_100c643c = 0;
    _DAT_100c65c4 = 0;
    _DAT_100c65fc = 0;
    _DAT_100c6634 = 0;
    _DAT_100c666c = 0;
    return;
  }
  _DAT_100c64ac = 7;
  _DAT_100c63cc = 0x1e;
  _DAT_100c6474 = 0x1e;
  _DAT_100c64e4 = 0x1e;
  _DAT_100c651c = 0x14;
  _DAT_100c6404 = 0x19;
  _DAT_100c658c = 0xf;
  _DAT_100c6554 = 5;
  _DAT_100c643c = 0x10;
  _DAT_100c65c4 = 0x11;
  _DAT_100c65fc = 5;
  _DAT_100c6634 = 0x28;
  _DAT_100c666c = 5;
  return;
}

/* 10053220  compile_ammo_info  (1482 bytes)
 * undefined compile_ammo_info(void)
 * called by: compile_weapons_info
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compile_ammo_info(void)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  puVar2 = &DAT_100c6388;
  for (iVar3 = 0xe0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_100c63a4;
  do {
    *puVar2 = 0x3f800000;
    puVar2 = puVar2 + 0xe;
  } while ((int)puVar2 < 0x100c6724);
  uVar4 = 0xffffffff;
  pcVar6 = &DAT_100a4488;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  _DAT_100c63c0 = 0x3ecccccd;
  _DAT_100c63c4 = 0x32;
  _DAT_100c63c8 = 1;
  _DAT_100c63d0 = 0x1e;
  _DAT_100c63d4 = 0x2000;
  _DAT_100c63d8 = 0x3e4ccccd;
  _DAT_100c63e0 = 0x50;
  _DAT_100c63e4 = 0x14a;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)&DAT_100c63e8;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = (char *)&DAT_100a4480;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  _DAT_100c64a0 = 0x3e99999a;
  _DAT_100c64a4 = 0x46;
  _DAT_100c64a8 = 1;
  _DAT_100c64b0 = 10;
  _DAT_100c64b4 = 0x2000;
  _DAT_100c64b8 = 0x3f000000;
  _DAT_100c64c0 = 0x5a;
  _DAT_100c64c4 = 0x1e0;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)&DAT_100c64c8;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = &DAT_100a4474;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  _DAT_100c6510 = 0x3f000000;
  _DAT_100c6514 = 0x78;
  _DAT_100c6518 = 1;
  _DAT_100c6520 = 0x14;
  _DAT_100c6524 = 0x2000;
  _DAT_100c6528 = 0x3f800000;
  _DAT_100c6530 = 100;
  _DAT_100c6534 = 0x2da;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)&DAT_100c6538;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar4 = 0xffffffff;
  _DAT_100c63f8 = 0x3ecccccd;
  _DAT_100c63fc = 0x3c;
  _DAT_100c6400 = 1;
  _DAT_100c6408 = 0xc;
  _DAT_100c640c = 0x2000;
  _DAT_100c6410 = 0x3e4ccccd;
  _DAT_100c6418 = 0x5a;
  _DAT_100c641c = 0x118;
  pcVar6 = &DAT_100a446c;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)&DAT_100c6420;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = s_10mm_AUTO_100a4460;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  _DAT_100c6580 = 0x3e99999a;
  _DAT_100c6584 = 0x46;
  _DAT_100c6588 = 1;
  _DAT_100c6590 = 0xf;
  _DAT_100c6594 = 0x2000;
  _DAT_100c6598 = 0x3f000000;
  _DAT_100c65a0 = 0x5a;
  _DAT_100c65a4 = 0x1c2;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)&DAT_100c65a8;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = s_5_56_Nato_100a4454;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  _DAT_100c646c = 0x50;
  _DAT_100c6468 = 0x3e99999a;
  _DAT_100c6470 = 2;
  _DAT_100c6478 = 0x1e;
  _DAT_100c647c = 0x2000;
  _DAT_100c6480 = 0x3f666666;
  _DAT_100c6488 = 0x96;
  _DAT_100c648c = 900;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)&DAT_100c6490;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = &DAT_100a4448;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  _DAT_100c64d8 = 0x3e4ccccd;
  _DAT_100c64dc = 100;
  _DAT_100c64e0 = 2;
  _DAT_100c64e8 = 0x1e;
  _DAT_100c64ec = 0x2000;
  _DAT_100c64f0 = 0x3f333333;
  _DAT_100c64f8 = 0xaa;
  _DAT_100c64fc = 0x316;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)&DAT_100c6500;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  _DAT_100c6548 = 0x3dcccccd;
  _DAT_100c654c = 500;
  _DAT_100c6550 = 2;
  _DAT_100c6558 = 5;
  uVar4 = 0xffffffff;
  _DAT_100c655c = 0x2000;
  pcVar6 = (char *)&DAT_100a4440;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  _DAT_100c6560 = 0x3f800000;
  _DAT_100c6568 = 200;
  _DAT_100c656c = 1000;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)&DAT_100c6570;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = s_SHELLS_100a4438;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  _DAT_100c6430 = 0x3e99999a;
  _DAT_100c6434 = 0x78;
  _DAT_100c6438 = 2;
  _DAT_100c6440 = 8;
  _DAT_100c6444 = 0x2000;
  _DAT_100c6448 = 0;
  _DAT_100c6450 = 0x5a;
  _DAT_100c6454 = 0x15e;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)&DAT_100c6458;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = &DAT_100a4430;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  _DAT_100c65b8 = 0x3f000000;
  _DAT_100c65bc = 100;
  _DAT_100c65c0 = 1;
  _DAT_100c65c8 = 0x11;
  _DAT_100c65cc = 0x2000;
  _DAT_100c65d0 = 0x3f666666;
  _DAT_100c65d8 = 0x46;
  _DAT_100c65dc = 0x15e;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)&DAT_100c65e0;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = s__454_Casull_100a4424;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  _DAT_100c65f0 = 0x3e99999a;
  _DAT_100c65f4 = 0x96;
  _DAT_100c65f8 = 1;
  _DAT_100c6600 = 5;
  _DAT_100c6604 = 0x2000;
  _DAT_100c6608 = 0x3f400000;
  _DAT_100c6610 = 0x14;
  _DAT_100c6614 = 400;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)&DAT_100c6618;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = &DAT_100a441c;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  _DAT_100c6628 = 0x3f000000;
  _DAT_100c662c = 0x1e;
  _DAT_100c6630 = 1;
  _DAT_100c6638 = 0x14;
  _DAT_100c663c = 0x2000;
  _DAT_100c6640 = 0;
  _DAT_100c6648 = 0x28;
  _DAT_100c664c = 300;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)&DAT_100c6650;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = &DAT_100a4410;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  _DAT_100c6674 = 0x2000;
  _DAT_100c6660 = 0x3e4ccccd;
  _DAT_100c6664 = 0x96;
  _DAT_100c6668 = 2;
  _DAT_100c6670 = 5;
  _DAT_100c6678 = 0x3f333333;
  _DAT_100c6680 = 0xaa;
  _DAT_100c6684 = 0x352;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)&DAT_100c6688;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  Set_ammo_count(0);
  return;
}

/* 10053b80  compile_weapons_info  (795 bytes)
 * undefined compile_weapons_info(void)
 * called by: W_Precache
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compile_weapons_info(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &global_weapon_info;
  for (iVar1 = 0x24aa; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  Write_melee(0x100d0420);
  Write_glock18(&DAT_100d07fc);
  Write_uzi(&DAT_100d0fb4);
  Write_uzi_akimbo(&DAT_100d41e0);
  Write_benellim3(&DAT_100d1390);
  Write_m4(&DAT_100d176c);
  Write_mp5sd(&DAT_100d1b48);
  Write_mp5k(&DAT_100d1f24);
  Write_beretta_akimbo(&DAT_100d2300);
  Write_beretta(&DAT_100d0bd8);
  Write_mk23(&DAT_100d26dc);
  Write_mk23akimbo(&DAT_100d2ab8);
  Write_usas12(&DAT_100d2e94);
  Write_desert(&DAT_100d3270);
  Write_ak47(&DAT_100d364c);
  Write_fnh(&DAT_100d3a28);
  Write_aug(&DAT_100d3e04);
  Write_skorpion(&DAT_100d45bc);
  Write_barrett(&DAT_100d4998);
  Write_pdw(&DAT_100d4d74);
  Write_spas12(&DAT_100d5150);
  Write_gold(&DAT_100d552c);
  Write_glock22(&DAT_100d5908);
  Write_mac10(&DAT_100d5ce4);
  Write_m61(&DAT_100d60c0);
  FUN_10003bf0(&DAT_100d649c);
  Write_mossberg(&DAT_100d6878);
  Write_m16(&DAT_100d6c54);
  Write_ruger(&DAT_100d7030);
  Write_fnhakimbo(&DAT_100d77e8);
  Write_bull(&DAT_100d7bc4);
  Write_m60(&DAT_100d7fa0);
  Write_sawedoff(&DAT_100d837c);
  Write_katana(&DAT_100d8758);
  Write_sealknife(&DAT_100d8b34);
  Write_contender(&DAT_100d8f10);
  Write_skorpion_akimbo(&DAT_100d92ec);
  FUN_10053820();
  compile_ammo_info();
  FUN_10052fc0();
  puVar2 = &g_iWeaponPriority;
  for (iVar1 = 0x26; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  g_iWeaponPriority = 0x12;
  DAT_100d0388 = 0x20;
  _DAT_100d038c = 0xd;
  _DAT_100d0390 = 5;
  _DAT_100d0394 = 0xf;
  _DAT_100d0398 = 0x1b;
  _DAT_100d039c = 0xb;
  _DAT_100d03a0 = 0x14;
  _DAT_100d03a4 = 4;
  _DAT_100d03a8 = 0x1a;
  _DAT_100d03ac = 0x21;
  _DAT_100d03b0 = 0x10;
  _DAT_100d03b4 = 0x25;
  _DAT_100d03b8 = 6;
  _DAT_100d03bc = 0x17;
  _DAT_100d03c0 = 7;
  _DAT_100d03c4 = 3;
  _DAT_100d03c8 = 0x11;
  _DAT_100d03cc = 0x13;
  _DAT_100d03d0 = 10;
  _DAT_100d03d4 = 8;
  _DAT_100d03d8 = 0x15;
  _DAT_100d03dc = 0x1e;
  _DAT_100d03e0 = 0x1f;
  _DAT_100d03e4 = 0xc;
  _DAT_100d03e8 = 0x24;
  _DAT_100d03ec = 0x16;
  _DAT_100d03f0 = 9;
  _DAT_100d03f4 = 2;
  _DAT_100d03f8 = 0xe;
  _DAT_100d03fc = 0x1c;
  _DAT_100d0400 = 1;
  _DAT_100d0404 = 0x22;
  _DAT_100d0408 = 0x19;
  _DAT_100d040c = 0x23;
  _DAT_100d0410 = 0x18;
  _DAT_100d0414 = 0x1d;
  return;
}

/* 10054100  weapon_tsgun  (12 bytes)
 * undefined weapon_tsgun(int param_1)
 */
void __cdecl weapon_tsgun(int param_1)

{
                    /* 0x54100  343  weapon_tsgun */
  GetClassPtr<CTSGun>(param_1);
  return;
}

/* 100595f0  GetWeaponType  (84 bytes)
 * undefined1 GetWeaponType(int param_1)
 * called by: CBasePlayer::DropWeapon, CHalfLifeMultiplay::PlayerKilled, FUN_10059650
 */
/* .so 0x8705c; id remap + info+0x348 */

undefined1 __cdecl GetWeaponType(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0x22) {
    return 3;
  }
  if (param_1 == 0x21) {
    return 1;
  }
  if (param_1 == 0x10) {
    return 9;
  }
  if (param_1 == 0x25) {
    return 9;
  }
  if (param_1 == 10) {
    return 8;
  }
  if (param_1 == 0x1e) {
    return 8;
  }
  if (param_1 == 8) {
    return 8;
  }
  if (param_1 == 0x15) {
    return 8;
  }
  puVar1 = get_weapon_info(param_1);
  return *(undefined1 *)(puVar1 + 0xd2);
}

/* 100596e0  GetClassPtr<CTSGun>  (79 bytes)
 * undefined GetClassPtr<CTSGun>(int param_1)
 * called by: weapon_tsgun
 */
void __cdecl GetClassPtr<CTSGun>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xa00),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSGun::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10059880  TSGetPointsForFrag  (1161 bytes)
 * uint TSGetPointsForFrag(undefined4 param_1, int * param_2, int * param_3, uint param_4, undefined1 * param_5, undefined1 * param_6)
 * called by: CHalfLifeMultiplay::PlayerKilled
 */
uint __cdecl
TSGetPointsForFrag(undefined4 param_1,int *param_2,int *param_3,uint param_4,undefined1 *param_5,
                  undefined1 *param_6)

{
  char cVar1;
  edict_t *peVar2;
  int iVar3;
  void *pvVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  int *piVar9;
  byte *pbVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  bool bVar14;
  uint local_84;
  char acStack_80 [64];
  char acStack_40 [64];
  
  if ((int)param_4 < 0) {
    return param_4;
  }
  local_84 = param_4 & 0xff;
  peVar2 = (edict_t *)param_2[0x82];
  if ((peVar2 == (edict_t *)0x0) &&
     (peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar2 == (edict_t *)0x0)) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = peVar2->pvPrivateData;
  }
  acStack_80[0] = '\0';
  acStack_40[0] = '\0';
  if (((DAT_102efbc0 != 0) && (iVar3 = (**(code **)(*piVar9 + 0xc0))(), iVar3 != 0)) &&
     (*(char *)((int)piVar9 + 0x7a5) == '\0')) {
    return 0;
  }
  if ((*(byte *)(param_2 + 0x69) & 8) == 0) goto LAB_10059c80;
  uVar6 = 0xffffffff;
  pcVar11 = gpGlobals->pStringBase + param_2[0x74];
  do {
    pcVar13 = pcVar11;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar13 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar13;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar11 = pcVar13 + -uVar6;
  pcVar13 = acStack_40;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar13 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar13 = pcVar13 + 1;
  }
  if (param_3 != (int *)0x0) {
    if (param_3 == param_2) {
      peVar2 = (edict_t *)param_2[0x82];
      if ((peVar2 == (edict_t *)0x0) &&
         (peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar2 == (edict_t *)0x0)) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = peVar2->pvPrivateData;
      }
      if (DAT_100a32b4 == -1) {
        iVar3 = *(int *)((int)pvVar4 + 0x9fc);
        if (iVar3 == 0) {
LAB_100599af:
          if (DAT_100da9d8 != '\0') {
LAB_100599b8:
            pcVar11 = &DAT_100a4674;
            goto LAB_100599c1;
          }
        }
        else if (*(int *)(iVar3 + 0x78) == 0x10) {
          if (*(int *)(iVar3 + 0xbc) != 0) goto LAB_100599af;
          goto LAB_100599b8;
        }
      }
    }
    else {
      pbVar10 = &DAT_1009d568;
      pbVar5 = (byte *)(gpGlobals->pStringBase + *param_3);
      do {
        bVar8 = *pbVar5;
        bVar14 = bVar8 < *pbVar10;
        if (bVar8 != *pbVar10) {
LAB_10059acc:
          iVar3 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
          goto LAB_10059ad1;
        }
        if (bVar8 == 0) break;
        bVar8 = pbVar5[1];
        bVar14 = bVar8 < pbVar10[1];
        if (bVar8 != pbVar10[1]) goto LAB_10059acc;
        pbVar5 = pbVar5 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar8 != 0);
      iVar3 = 0;
LAB_10059ad1:
      if (iVar3 != 0) {
        return param_4 & 0xff;
      }
      peVar2 = (edict_t *)param_3[0x82];
      if (((peVar2 == (edict_t *)0x0) &&
          (peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar2 == (edict_t *)0x0)) ||
         (peVar2->pvPrivateData == (void *)0x0)) {
        pcVar11 = s_Throwing_100a4658;
      }
      else {
        pcVar11 = CTSKnife::GetDescription((int)peVar2->pvPrivateData);
      }
LAB_100599c1:
      uVar6 = 0xffffffff;
      param_4 = 2;
      do {
        pcVar13 = pcVar11;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      local_84 = 2;
      pcVar11 = pcVar13 + -uVar6;
      pcVar13 = acStack_80;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar13 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
  }
  if (((param_2[0x94] & 0x10c10U) == 0) ||
     (SQRT((float)param_2[10] * (float)param_2[10] +
           (float)param_2[9] * (float)param_2[9] + (float)param_2[8] * (float)param_2[8]) <= 80.0))
  {
    if (((param_2[0x94] & 0x20U) == 0) ||
       ((1.0 <= (float)param_2[0x48] ||
        (SQRT((float)param_2[10] * (float)param_2[10] +
              (float)param_2[9] * (float)param_2[9] + (float)param_2[8] * (float)param_2[8]) <= 80.0
        )))) {
      if (acStack_80[0] != '\0') {
        uVar6 = 0xffffffff;
        pcVar11 = &DAT_100a4624;
        do {
          pcVar13 = pcVar11;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar13 = pcVar11 + 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar13;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar3 = -1;
        pcVar11 = acStack_80;
        do {
          pcVar12 = pcVar11;
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          pcVar12 = pcVar11 + 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar12;
        } while (cVar1 != '\0');
        pcVar11 = pcVar13 + -uVar6;
        pcVar13 = pcVar12 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar13 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar13 = pcVar13 + 1;
        }
      }
    }
    else {
      if ((DAT_100da9d8 == '\0') && (iVar3 = (**(code **)(*piVar9 + 0xc0))(), iVar3 != 0)) {
        bVar8 = (char)param_4 + 1;
        param_4 = (uint)bVar8;
        local_84 = (uint)bVar8;
      }
      if (1 < (byte)param_4) {
        if (acStack_80[0] != '\0') {
          uVar6 = 0xffffffff;
          pcVar11 = &DAT_100a463c;
          do {
            pcVar13 = pcVar11;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar13 = pcVar11 + 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar13;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          iVar3 = -1;
          pcVar11 = acStack_80;
          do {
            pcVar12 = pcVar11;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar12 = pcVar11 + 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar12;
          } while (cVar1 != '\0');
          pcVar11 = pcVar13 + -uVar6;
          pcVar13 = pcVar12 + -1;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar13 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar13 = pcVar13 + 1;
          }
          *param_5 = 1;
          goto LAB_10059c80;
        }
        uVar6 = 0xffffffff;
        pcVar11 = s__TS_SlStl_100a4630;
        do {
          pcVar13 = pcVar11;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar13 = pcVar11 + 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar13;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pcVar11 = pcVar13 + -uVar6;
        pcVar13 = acStack_80;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar13 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar13 = pcVar13 + 1;
        }
      }
      *param_5 = 1;
    }
  }
  else {
    if ((DAT_100da9d8 == '\0') && (iVar3 = (**(code **)(*piVar9 + 0xc0))(), iVar3 != 0)) {
      bVar8 = (char)param_4 + 1;
      param_4 = (uint)bVar8;
      local_84 = (uint)bVar8;
    }
    if (1 < (byte)param_4) {
      if (acStack_80[0] != '\0') {
        uVar6 = 0xffffffff;
        pcVar11 = s____TS_StStl_100a4664;
        do {
          pcVar13 = pcVar11;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar13 = pcVar11 + 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar13;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar3 = -1;
        pcVar11 = acStack_80;
        do {
          pcVar12 = pcVar11;
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          pcVar12 = pcVar11 + 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar12;
        } while (cVar1 != '\0');
        pcVar11 = pcVar13 + -uVar6;
        pcVar13 = pcVar12 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar13 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar13 = pcVar13 + 1;
        }
        *param_6 = 1;
        goto LAB_10059c80;
      }
      uVar6 = 0xffffffff;
      pcVar11 = s__TS_StStl_100a464c;
      do {
        pcVar13 = pcVar11;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar11 = pcVar13 + -uVar6;
      pcVar13 = acStack_80;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar13 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    *param_6 = 1;
  }
LAB_10059c80:
  if (1 < (byte)param_4) {
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 0xc0))();
    }
    pcVar11 = UTIL_VarArgs((byte_conflict *)s__i__TS_Frg__TS_FrgFr__s___s_100a4608);
    TSHudMessageAll(0,0xff,0,1,0x1e,pcVar11);
  }
  return local_84;
}

/* 1005b590  ts_objective_manager  (12 bytes)
 * undefined ts_objective_manager(int param_1)
 */
void __cdecl ts_objective_manager(int param_1)

{
                    /* 0x5b590  319  ts_objective_manager */
  GetClassPtr<CTSObjectiveManager>(param_1);
  return;
}

/* 1005bbf0  ts_objective_ptr  (12 bytes)
 * undefined ts_objective_ptr(int param_1)
 */
void __cdecl ts_objective_ptr(int param_1)

{
                    /* 0x5bbf0  320  ts_objective_ptr */
  GetClassPtr<CTSObjectivePointer>(param_1);
  return;
}

/* 1005bf00  ts_wingiver  (12 bytes)
 * undefined ts_wingiver(int param_1)
 */
void __cdecl ts_wingiver(int param_1)

{
                    /* 0x5bf00  332  ts_wingiver */
  GetClassPtr<CTSWinGiver>(param_1);
  return;
}

/* 1005c1d0  ts_scoregiver  (12 bytes)
 * undefined ts_scoregiver(int param_1)
 */
void __cdecl ts_scoregiver(int param_1)

{
                    /* 0x5c1d0  324  ts_scoregiver */
  GetClassPtr<CTSScoreGiver>(param_1);
  return;
}

/* 1005c420  ts_bomb  (12 bytes)
 * undefined ts_bomb(int param_1)
 */
void __cdecl ts_bomb(int param_1)

{
                    /* 0x5c420  307  ts_bomb */
  GetClassPtr<CTSBomb>(param_1);
  return;
}

/* 1005cb10  ts_hack  (12 bytes)
 * undefined ts_hack(int param_1)
 */
void __cdecl ts_hack(int param_1)

{
                    /* 0x5cb10  316  ts_hack */
  GetClassPtr<CTSHack>(param_1);
  return;
}

/* 1005d010  ts_teamescape  (12 bytes)
 * undefined ts_teamescape(int param_1)
 */
void __cdecl ts_teamescape(int param_1)

{
                    /* 0x5d010  328  ts_teamescape */
  GetClassPtr<CTSTeamEscape>(param_1);
  return;
}

/* 1005d3b0  ts_briefcase  (12 bytes)
 * undefined ts_briefcase(int param_1)
 */
void __cdecl ts_briefcase(int param_1)

{
                    /* 0x5d3b0  308  ts_briefcase */
  GetClassPtr<CTSBriefcase>(param_1);
  return;
}

/* 1005dac0  GetClassPtr<CTSObjectiveManager>  (79 bytes)
 * undefined GetClassPtr<CTSObjectiveManager>(int param_1)
 * called by: ts_objective_manager
 */
void __cdecl GetClassPtr<CTSObjectiveManager>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x90), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSObjectiveManager::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1005db10  GetClassPtr<CTSObjectivePointer>  (76 bytes)
 * undefined GetClassPtr<CTSObjectivePointer>(int param_1)
 * called by: ts_objective_ptr
 */
void __cdecl GetClassPtr<CTSObjectivePointer>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x68), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSObjectivePointer::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1005db60  GetClassPtr<CTSWinGiver>  (76 bytes)
 * undefined GetClassPtr<CTSWinGiver>(int param_1)
 * called by: ts_wingiver
 */
void __cdecl GetClassPtr<CTSWinGiver>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x6c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSWinGiver::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1005dbb0  GetClassPtr<CTSScoreGiver>  (76 bytes)
 * undefined GetClassPtr<CTSScoreGiver>(int param_1)
 * called by: ts_scoregiver
 */
void __cdecl GetClassPtr<CTSScoreGiver>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x6c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSScoreGiver::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1005dc00  GetClassPtr<CTSBomb>  (76 bytes)
 * undefined GetClassPtr<CTSBomb>(int param_1)
 * called by: ts_bomb
 */
void __cdecl GetClassPtr<CTSBomb>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x78), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSBomb::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1005dc60  GetClassPtr<CTSHack>  (76 bytes)
 * undefined GetClassPtr<CTSHack>(int param_1)
 * called by: ts_hack
 */
void __cdecl GetClassPtr<CTSHack>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x70), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSHack::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1005dcb0  GetClassPtr<CTSTeamEscape>  (79 bytes)
 * undefined GetClassPtr<CTSTeamEscape>(int param_1)
 * called by: ts_teamescape
 */
void __cdecl GetClassPtr<CTSTeamEscape>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xe8), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSTeamEscape::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1005dd10  GetClassPtr<CTSBriefcase>  (80 bytes)
 * undefined GetClassPtr<CTSBriefcase>(int param_1)
 * called by: ts_briefcase
 */
void __cdecl GetClassPtr<CTSBriefcase>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x9c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    puVar3 = CTSBriefcase::CTSBriefcase(puVar3);
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100649b0  GetClassPtr<CBaseEntity>  (76 bytes)
 * undefined GetClassPtr<CBaseEntity>(int param_1)
 * called by: CBasePlayer::TraceAttack, CBot::TraceAttack
 */
/* .so 0x97298; alloc 0x54 = sizeof(CBaseEntity) in MSVC */

void __cdecl GetClassPtr<CBaseEntity>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CBaseEntity::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10066540  PlayerAddPowerUp  (461 bytes)
 * undefined4 PlayerAddPowerUp(void * param_1, uint param_2, int param_3)
 * called by: CTSPowerUp::WaitTouch
 */
undefined4 __cdecl PlayerAddPowerUp(void *param_1,uint param_2,int param_3)

{
  void *this;
  int iVar1;
  uint uVar2;
  longlong lVar3;
  
  if ((param_2 & 0x80) == 0) {
    if ((param_2 & 4) == 0) {
      if ((param_2 & 0x100) == 0) {
        if ((param_2 & 0x40) == 0) {
          if ((param_2 & 0x20) == 0) {
            if ((param_2 & 2) != 0) {
              iVar1 = *(int *)((int)param_1 + 0x9fc);
              if ((iVar1 != 0) && (*(int *)(iVar1 + 0x78) == 0x10)) {
                uVar2 = CTSGun::MultiplyClips(iVar1);
                if ((char)uVar2 != '\0') goto LAB_100666da;
              }
              return 0;
            }
            *(undefined4 *)((int)param_1 + 0x710) = 0;
            *(uint *)((int)param_1 + 0x714) = param_2;
            *(undefined4 *)((int)param_1 + 0x718) = 0;
            *(undefined4 *)((int)param_1 + 0x71c) = *(undefined4 *)(param_3 + 0x80);
          }
          else {
            iVar1 = CBasePlayer::PickUpWeapon(param_1,0x18,(undefined4 *)0x0,0,'\x01','\0');
            if (iVar1 == 0) {
              return 0;
            }
          }
        }
        else {
          if (*(float *)(*(int *)((int)param_1 + 4) + 0x160) < 150.0) {
            *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x160) = 0x43160000;
          }
          *(float *)((int)param_1 + 0x728) = gpGlobals->time + 1.0;
        }
      }
      else if (*(char *)((int)param_1 + 0x73b) == '\0') {
        *(undefined1 *)((int)param_1 + 0x73b) = 1;
        (*g_engfuncs.pfnSetPhysicsKeyValue)
                  (*(edict_t **)(*(int *)((int)param_1 + 4) + 0x208),&DAT_1009ce1c,&DAT_1009ce20);
        (*g_engfuncs.pfnMessageBegin)
                  (1,DAT_100d978c,(float *)0x0,*(edict_t **)(*(int *)((int)param_1 + 4) + 0x208));
        (*g_engfuncs.pfnWriteShort)(0x100);
        (*g_engfuncs.pfnWriteByte)(0);
        (*g_engfuncs.pfnMessageEnd)();
      }
    }
    else if (*(char *)((int)param_1 + 0x73a) == '\0') {
      *(undefined1 *)((int)param_1 + 0x73a) = 1;
      (*g_engfuncs.pfnMessageBegin)
                (1,DAT_100d978c,(float *)0x0,*(edict_t **)(*(int *)((int)param_1 + 4) + 0x208));
      (*g_engfuncs.pfnWriteShort)(4);
      (*g_engfuncs.pfnWriteByte)(0);
      (*g_engfuncs.pfnMessageEnd)();
    }
  }
  else {
    lVar3 = __ftol();
    CBasePlayer::TakeArmor(param_1,(int)lVar3);
  }
LAB_100666da:
  this = *(void **)(*(int *)((int)param_1 + 4) + 0x208);
  EMIT_SOUND_DYN(this,this,3,s_items_gunpickup2_wav_1009f7a0,0x3f800000,0x3f4ccccd,0);
  return 1;
}

/* 10066710  ts_powerup  (12 bytes)
 * undefined ts_powerup(int param_1)
 */
void __cdecl ts_powerup(int param_1)

{
                    /* 0x66710  323  ts_powerup */
  GetClassPtr<CTSPowerUp>(param_1);
  return;
}

/* 10066fa0  GetClassPtr<CTSPowerUp>  (106 bytes)
 * undefined GetClassPtr<CTSPowerUp>(int param_1)
 * called by: CTSPowerUp::CreatePowerUp, ts_powerup
 */
void __cdecl GetClassPtr<CTSPowerUp>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x8c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSPowerUp::vftable;
    puVar3[0x1d] = 0;
    puVar3[0x22] = 0x3f800000;
    puVar3[0x21] = 0;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10067010  FixedSlowAmt  (29 bytes)
 * float10 FixedSlowAmt(float param_1)
 * called by: CBaseEntity::GiveSlowMul, CBasePlayer::GiveSlowMul
 */
/* max(x, 0.01) */

float10 __cdecl FixedSlowAmt(float param_1)

{
  if (param_1 < 0.01) {
    return (float10)0.01;
  }
  return (float10)param_1;
}

/* 10067030  InterpolateSlowMotion  (80 bytes)
 * undefined InterpolateSlowMotion(float param_1, float * param_2, float param_3)
 * called by: CBasePlayer::PreThink
 */
/* .so 0x9910c; (frametime, &pev->fuser1, pl+0x154) */

void __cdecl InterpolateSlowMotion(float param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_3 - *param_2;
  fVar2 = fVar1;
  if (fVar1 < 0.0) {
    fVar2 = -fVar1;
  }
  if (0.05 < fVar2) {
    fVar2 = param_1 * 7.0;
    if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
    fVar1 = fVar2 * fVar1;
  }
  *param_2 = fVar1 + *param_2;
  return;
}

/* 1006b360  BotPlayerByIndex  (80 bytes)
 * undefined4 BotPlayerByIndex(int param_1)
 * called by: pfnStartFrame
 */
/* CBasePlayer* for edict i with FL_FAKECLIENT|FL_CLIENT, else NULL */

undefined4 __cdecl BotPlayerByIndex(int param_1)

{
  uint uVar1;
  edict_t *peVar2;
  undefined4 uVar3;
  
  if ((0 < param_1) && (param_1 <= gpGlobals->maxClients)) {
    peVar2 = (*g_engfuncs.pfnPEntityOfEntIndex)(param_1);
    if (((peVar2 != (edict_t *)0x0) && (peVar2->free == 0)) &&
       ((uVar1 = (peVar2->v).flags, (uVar1 & 0x2000) != 0 || ((uVar1 & 8) != 0)))) {
      uVar3 = GetClassPtr<CBasePlayer>((int)&peVar2->v);
      return uVar3;
    }
  }
  return 0;
}

/* 1006b3b0  BotSetup  (474 bytes)
 * undefined BotSetup(int param_1, char * param_2, float param_3)
 * called by: BotCreate, BotCreateCustom
 */
/* ClientPutInServer equivalent: GetClassPtr<CBot>, isBot, skill, Spawn, infokeys model/team/cl_lw,
   ChangePlayerTeam, PlayerThink, ts_playeramount */

void __cdecl BotSetup(int param_1,char *param_2,float param_3)

{
  float fVar1;
  CBasePlayer *this;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  char *pcVar6;
  char *unaff_ESI;
  char *in_stack_00000010;
  CBasePlayer *pCStack00000020;
  char *pcStack00000024;
  char *in_stack_00000028;
  char *pcVar7;
  double dVar8;
  
  pcVar4 = (char *)0x0;
  this = (CBasePlayer *)GetClassPtr<CBot>(param_1 + 0x80);
  *(undefined4 *)&this->field_0x14c = 1;
  fVar1 = param_3;
  if (param_3 <= 0.1) {
    fVar1 = 0.1;
  }
  *(float *)&this[3].field_0x384 = fVar1;
  pcVar6 = gpGlobals->pStringBase + this->pev->netname;
  dVar8 = (double)param_3;
  pcVar7 = s__s_connected_with_skill__f_100a5994;
  pcVar2 = UTIL_VarArgs((byte_conflict *)s__s_connected_with_skill__f_100a5994);
  (*g_engfuncs.pfnAlertMessage)(at_console,pcVar2,pcVar7,pcVar6,dVar8);
  CBasePlayer::SetCustomDecalFrames(this,-1);
  (*this->vtable[7])();
  iVar3 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
  pcVar2 = in_stack_00000010;
  pcVar6 = (*g_engfuncs.pfnGetInfoKeyBuffer)((edict_t *)param_1);
  (*g_engfuncs.pfnSetClientKeyValue)(iVar3,pcVar6,pcVar2,unaff_ESI);
  pcStack00000024 = param_2;
  if (*param_2 == '\0') {
    pcStack00000024 = &DAT_100a9398;
  }
  iVar3 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
  pcVar2 = (*g_engfuncs.pfnGetInfoKeyBuffer)((edict_t *)param_1);
  (*g_engfuncs.pfnSetClientKeyValue)(iVar3,pcVar2,in_stack_00000028,pcVar4);
  iVar3 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
  pcVar4 = (*g_engfuncs.pfnGetInfoKeyBuffer)((edict_t *)param_1);
  (*g_engfuncs.pfnSetClientKeyValue)(iVar3,pcVar4,&DAT_1009ce20,in_stack_00000010);
  if (*param_2 != '\0') {
    pCStack00000020 = (CBasePlayer *)0x0;
    (**(code **)(*g_pGameRules + 0xd4))();
  }
  pCStack00000020 = this;
  (**(code **)(*g_pGameRules + 0x48))();
  for (piVar5 = (int *)UTIL_FindEntityByClassname(0,s_ts_playeramount_1009cc30);
      piVar5 != (int *)0x0;
      piVar5 = (int *)UTIL_FindEntityByClassname((int)piVar5,s_ts_playeramount_1009cc30)) {
    CTSPlayerAmount::ClientConnect(piVar5);
  }
  return;
}

/* 1006b590  BotCreateCustom  (517 bytes)
 * undefined BotCreateCustom(char * param_1, char * param_2, float param_3)
 * called by: cmd_addcustombot
 */
/* addcustombot core: model/skill/name, CreateFakeClient, netname */

void __cdecl BotCreateCustom(char *param_1,char *param_2,float param_3)

{
  char cVar1;
  edict_t *pEdict;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  float10 extraout_ST0;
  float in_stack_00000010;
  float in_stack_00000014;
  char local_60 [8];
  char acStack_58 [4];
  char acStack_54 [20];
  char local_40 [4];
  char acStack_3c [60];
  
  local_60[0] = '\0';
  if (*param_2 == '\0') {
    iVar3 = (**(code **)(*g_pGameRules + 0x1c))();
    if (iVar3 != 0) goto switchD_1006b5ce_default;
    iVar3 = (*g_engfuncs.pfnRandomLong)(0,6);
    switch(iVar3) {
    case 0:
      pcVar2 = acStack_58;
      pcVar6 = (char *)&DAT_1009efcc;
      break;
    case 1:
      pcVar2 = acStack_58;
      pcVar6 = &DAT_100a3f90;
      break;
    case 2:
      pcVar2 = acStack_58;
      pcVar6 = s_gordon_1009efe4;
      break;
    case 3:
      pcVar2 = acStack_58;
      pcVar6 = s_hitman_100a5a20;
      break;
    case 4:
      pcVar2 = acStack_58;
      pcVar6 = s_castor_100a5a18;
      break;
    case 5:
      pcVar2 = acStack_58;
      pcVar6 = s_agent_100a5a10;
      break;
    case 6:
      pcVar2 = acStack_58;
      pcVar6 = s_laurence_100a5a04;
      break;
    default:
      goto switchD_1006b5ce_default;
    }
  }
  else {
    pcVar2 = local_60;
    pcVar6 = param_2;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar7 + -uVar4;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar2 = pcVar2 + 1;
  }
switchD_1006b5ce_default:
  if (0.0 < param_3) {
    if ((3.0 <= param_3) || (0.1 < param_3)) {
      param_2 = (char *)param_3;
      if (3.0 <= param_3) {
        param_2 = (char *)0x40400000;
      }
    }
    else {
      param_2 = (char *)0x3dcccccd;
    }
  }
  else {
    (*g_engfuncs.pfnRandomFloat)(0.1,1.0);
    in_stack_00000010 = (float)extraout_ST0;
  }
  local_40[0] = '\0';
  if (*param_1 == '\0') {
    BotPickName(local_40,&param_2);
  }
  else {
    uVar4 = 0xffffffff;
    do {
      pcVar2 = param_1;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar2 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar2;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar2 = pcVar2 + -uVar4;
    pcVar6 = local_40;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar6 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  pEdict = (*g_engfuncs.pfnCreateFakeClient)(local_40);
  if (pEdict == (edict_t *)0x0) {
    pcVar2 = UTIL_VarArgs((byte_conflict *)s_Could_not_find_any_free_client_s_100a59b0);
    (*g_engfuncs.pfnAlertMessage)(at_console,pcVar2);
    return;
  }
  iVar3 = (*g_engfuncs.pfnIndexOfEdict)(pEdict);
  uVar4 = 0xffffffff;
  pcVar2 = acStack_3c;
  do {
    pcVar6 = pcVar2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar2 = pcVar6 + -uVar4;
  pcVar6 = &g_botNetnames + iVar3 * 0x40;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar6 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar6 = pcVar6 + 1;
  }
  iVar3 = (*g_engfuncs.pfnIndexOfEdict)(pEdict);
  (pEdict->v).netname = (string_t)(&g_botNetnames + (iVar3 * 0x40 - (int)gpGlobals->pStringBase));
  BotSetup((int)pEdict,acStack_54,in_stack_00000014);
  return;
}

/* 1006b7c0  BotCreate  (396 bytes)
 * undefined BotCreate(char * param_1)
 * called by: cmd_addbot
 */
/* addbot core: arg=model, RandomFloat skill, bots.txt name, "botlearn 1" if no nodes */

void __cdecl BotCreate(char *param_1)

{
  char cVar1;
  edict_t *pEdict;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  char *pcVar8;
  float10 extraout_ST0;
  float fStack0000000c;
  float in_stack_00000018;
  uint local_60;
  uint auStack_58 [3];
  char acStack_4c [20];
  char acStack_38 [4];
  char acStack_34 [52];
  
  local_60 = local_60 & 0xffffff00;
  if (*param_1 == '\0') {
    iVar3 = (**(code **)(*g_pGameRules + 0x1c))();
    if (iVar3 != 0) goto switchD_1006b7fe_default;
    iVar3 = (*g_engfuncs.pfnRandomLong)(0,6);
    switch(iVar3) {
    case 0:
      puVar6 = auStack_58;
      param_1 = (char *)&DAT_1009efcc;
      break;
    case 1:
      puVar6 = auStack_58;
      param_1 = &DAT_100a3f90;
      break;
    case 2:
      puVar6 = auStack_58;
      param_1 = s_gordon_1009efe4;
      break;
    case 3:
      puVar6 = auStack_58;
      param_1 = s_hitman_100a5a20;
      break;
    case 4:
      puVar6 = auStack_58;
      param_1 = s_castor_100a5a18;
      break;
    case 5:
      puVar6 = auStack_58;
      param_1 = s_agent_100a5a10;
      break;
    case 6:
      puVar6 = auStack_58;
      param_1 = s_laurence_100a5a04;
      break;
    default:
      goto switchD_1006b7fe_default;
    }
  }
  else {
    puVar6 = &local_60;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar2 = param_1;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar2 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar2;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  puVar7 = (uint *)(pcVar2 + -uVar4);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar6 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)puVar6 = (char)*puVar7;
    puVar7 = (uint *)((int)puVar7 + 1);
    puVar6 = (uint *)((int)puVar6 + 1);
  }
switchD_1006b7fe_default:
  (*g_engfuncs.pfnRandomFloat)(0.1,1.0);
  fStack0000000c = (float)extraout_ST0;
  acStack_38[0] = '\0';
  BotPickName(acStack_38,&stack0x0000000c);
  pEdict = (*g_engfuncs.pfnCreateFakeClient)(acStack_38);
  if (pEdict == (edict_t *)0x0) {
    pcVar2 = UTIL_VarArgs((byte_conflict *)s_Could_not_find_any_free_client_s_100a59b0);
    (*g_engfuncs.pfnAlertMessage)(at_console,pcVar2);
    return;
  }
  iVar3 = (*g_engfuncs.pfnIndexOfEdict)(pEdict);
  uVar4 = 0xffffffff;
  pcVar2 = acStack_34;
  do {
    pcVar8 = pcVar2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar2 = pcVar8 + -uVar4;
  pcVar8 = &g_botNetnames + iVar3 * 0x40;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar8 = pcVar8 + 1;
  }
  iVar3 = (*g_engfuncs.pfnIndexOfEdict)(pEdict);
  (pEdict->v).netname = (string_t)(&g_botNetnames + (iVar3 * 0x40 - (int)gpGlobals->pStringBase));
  BotSetup((int)pEdict,acStack_4c,in_stack_00000018);
  if (g_NodeGraph < 1) {
    local_60 = 0x1006b942;
    (*g_engfuncs.pfnServerCommand)(s_botlearn_1_100a5a28);
  }
  return;
}

/* 1006bbc0  BotSayLine  (51 bytes)
 * undefined BotSayLine()
 * called by: CBotModuleChat::Think
 */
/* random line from bot_say section (0 offense,1 freetime,2 killed) or "" */

undefined4 * BotSayLine(int param_1)

{
  int iVar1;
  
  if (*(int *)(&g_botSayCount + param_1 * 4) < 1) {
    return (undefined4 *)&DAT_100a9398;
  }
  iVar1 = (*g_engfuncs.pfnRandomLong)(0,*(int *)(&g_botSayCount + param_1 * 4) + -1);
  return &g_botSay + (iVar1 + param_1 * 0x100) * 0x10;
}

/* 1006bc00  BotLoadSay  (729 bytes)
 * undefined BotLoadSay(void)
 * called by: BotLoadFiles
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* parse bot_say.txt into g_botSay[3][256][64] (64 used per section) */

void BotLoadSay(void)

{
  char cVar1;
  byte bVar2;
  FILE *pFVar3;
  char *pcVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  char *pcVar12;
  char *pcVar13;
  bool bVar14;
  byte abStack_640 [64];
  char local_600 [256];
  char acStack_500 [256];
  char acStack_400 [1024];
  
  (*g_engfuncs.pfnGetGameDir)(local_600);
  uVar7 = 0xffffffff;
  pcVar4 = &DAT_100a5a60;
  do {
    pcVar13 = pcVar4;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar13 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar13;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  iVar8 = -1;
  pcVar4 = local_600;
  do {
    pcVar12 = pcVar4;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar12 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar12;
  } while (cVar1 != '\0');
  pcVar4 = pcVar13 + -uVar7;
  pcVar13 = pcVar12 + -1;
  for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar13 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar13 = pcVar13 + 1;
  }
  puVar11 = &g_botSay;
  for (iVar8 = 0x3000; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  _g_botSayCount = 0;
  _DAT_100e8328 = 0;
  uVar7 = 0xffffffff;
  pcVar4 = local_600;
  do {
    pcVar13 = pcVar4;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar13 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar13;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  _DAT_100e832c = 0;
  pcVar4 = pcVar13 + -uVar7;
  pcVar13 = acStack_500;
  for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar13 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar13 = pcVar13 + 1;
  }
  uVar7 = 0xffffffff;
  pcVar4 = s_bot_say_txt_100a5a50;
  do {
    pcVar13 = pcVar4;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar13 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar13;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  iVar8 = -1;
  pcVar4 = acStack_500;
  do {
    pcVar12 = pcVar4;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar12 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar12;
  } while (cVar1 != '\0');
  pcVar4 = pcVar13 + -uVar7;
  pcVar13 = pcVar12 + -1;
  for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar13 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar13 = pcVar13 + 1;
  }
  pFVar3 = (FILE *)fopen(acStack_500,&DAT_100a5a5c);
  iVar8 = -1;
  if (pFVar3 != (FILE *)0x0) {
    pcVar4 = fgets(acStack_400,0x400,(undefined4 *)pFVar3);
    while (pcVar4 != (char *)0x0) {
      sscanf(acStack_400,&DAT_1009cd14);
      pcVar4 = s_offense_100a5a48;
      pbVar5 = abStack_640;
      do {
        bVar2 = *pbVar5;
        bVar14 = bVar2 < (byte)*pcVar4;
        if (bVar2 != *pcVar4) {
LAB_1006bd40:
          iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
          goto LAB_1006bd45;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar5[1];
        bVar14 = bVar2 < (byte)pcVar4[1];
        if (bVar2 != pcVar4[1]) goto LAB_1006bd40;
        pbVar5 = pbVar5 + 2;
        pcVar4 = pcVar4 + 2;
      } while (bVar2 != 0);
      iVar6 = 0;
LAB_1006bd45:
      if (iVar6 == 0) {
        iVar8 = 0;
      }
      else {
        pcVar4 = s_freetime_100a5a3c;
        pbVar5 = abStack_640;
        do {
          bVar2 = *pbVar5;
          bVar14 = bVar2 < (byte)*pcVar4;
          if (bVar2 != *pcVar4) {
LAB_1006bd7d:
            iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
            goto LAB_1006bd82;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar5[1];
          bVar14 = bVar2 < (byte)pcVar4[1];
          if (bVar2 != pcVar4[1]) goto LAB_1006bd7d;
          pbVar5 = pbVar5 + 2;
          pcVar4 = pcVar4 + 2;
        } while (bVar2 != 0);
        iVar6 = 0;
LAB_1006bd82:
        if (iVar6 == 0) {
          iVar8 = 1;
        }
        else {
          pcVar4 = s_killed_100a5a34;
          pbVar5 = abStack_640;
          do {
            bVar2 = *pbVar5;
            bVar14 = bVar2 < (byte)*pcVar4;
            if (bVar2 != *pcVar4) {
LAB_1006bdbd:
              iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
              goto LAB_1006bdc2;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar5[1];
            bVar14 = bVar2 < (byte)pcVar4[1];
            if (bVar2 != pcVar4[1]) goto LAB_1006bdbd;
            pbVar5 = pbVar5 + 2;
            pcVar4 = pcVar4 + 2;
          } while (bVar2 != 0);
          iVar6 = 0;
LAB_1006bdc2:
          if (iVar6 == 0) {
            iVar8 = 2;
          }
          else if (iVar8 != -1) {
            iVar6 = iVar8 * 0x100;
            uVar7 = 0xffffffff;
            pcVar4 = acStack_400;
            do {
              pcVar13 = pcVar4;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar13 = pcVar4 + 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar13;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            pcVar4 = pcVar13 + -uVar7;
            pcVar13 = (char *)(&g_botSay + (*(int *)(&g_botSayCount + iVar8 * 4) + iVar6) * 0x10);
            for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
              pcVar4 = pcVar4 + 4;
              pcVar13 = pcVar13 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar13 = *pcVar4;
              pcVar4 = pcVar4 + 1;
              pcVar13 = pcVar13 + 1;
            }
            uVar7 = 0xffffffff;
            pcVar4 = (char *)(&g_botSay + (*(int *)(&g_botSayCount + iVar8 * 4) + iVar6) * 0x10);
            do {
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar4 + 1;
            } while (cVar1 != '\0');
            iVar10 = ~uVar7 - 2;
            while ((-1 < iVar10 &&
                   (uVar7 = isspace((void *)((*(int *)(&g_botSayCount + iVar8 * 4) + iVar6) * 0x40),
                                    (int)*(char *)((int)(&g_botSay +
                                                        (*(int *)(&g_botSayCount + iVar8 * 4) +
                                                        iVar6) * 0x10) + iVar10)), uVar7 == 0))) {
              iVar10 = iVar10 + -1;
            }
            while (iVar10 = iVar10 + 1, iVar10 < 0x40) {
              *(undefined1 *)
               ((int)&g_botSay + iVar10 + (*(int *)(&g_botSayCount + iVar8 * 4) + iVar6) * 0x40) = 0
              ;
            }
            if ((*(char *)(&g_botSay + (*(int *)(&g_botSayCount + iVar8 * 4) + iVar6) * 0x10) !=
                 '\0') &&
               (iVar6 = *(int *)(&g_botSayCount + iVar8 * 4) + 1,
               *(int *)(&g_botSayCount + iVar8 * 4) = iVar6, 0x3f < iVar6)) break;
          }
        }
      }
      pcVar4 = fgets(acStack_400,0x400,(undefined4 *)pFVar3);
    }
    fclose(pFVar3);
  }
  return;
}

/* 1006bee0  BotLoadFiles  (620 bytes)
 * undefined BotLoadFiles(void)
 * called by: CTSGameRules::Init
 */
/* parse bots.txt (name//skill), then BotLoadSay; called from CTSGameRules::Init */

void BotLoadFiles(void)

{
  char cVar1;
  FILE *pFVar2;
  char *pcVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  void *this;
  uint *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  char *pcVar11;
  char acStack_700 [256];
  char acStack_600 [256];
  char local_500 [256];
  char acStack_400 [1024];
  
  (*g_engfuncs.pfnGetGameDir)(local_500);
  uVar5 = 0xffffffff;
  pcVar3 = &DAT_100a5a60;
  do {
    pcVar11 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar11 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar11;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar6 = -1;
  pcVar3 = local_500;
  do {
    pcVar10 = pcVar3;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar10 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar10;
  } while (cVar1 != '\0');
  pcVar3 = pcVar11 + -uVar5;
  pcVar11 = pcVar10 + -1;
  for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar11 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar11 = pcVar11 + 1;
  }
  puVar9 = &g_botNames;
  for (iVar6 = 0x3454; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar3 = local_500;
  do {
    pcVar11 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar11 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar11;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar3 = pcVar11 + -uVar5;
  pcVar11 = acStack_700;
  for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar11 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar11 = pcVar11 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar3 = s_bots_txt_100a5a68;
  do {
    pcVar11 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar11 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar11;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar6 = -1;
  pcVar3 = acStack_700;
  do {
    pcVar10 = pcVar3;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar10 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar10;
  } while (cVar1 != '\0');
  pcVar3 = pcVar11 + -uVar5;
  pcVar11 = pcVar10 + -1;
  for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar11 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar11 = pcVar11 + 1;
  }
  pFVar2 = (FILE *)fopen(acStack_700,&DAT_100a5a5c);
  if (pFVar2 != (FILE *)0x0) {
    pcVar3 = fgets(acStack_400,0x400,(undefined4 *)pFVar2);
    while (pcVar3 != (char *)0x0) {
      uVar5 = 0xffffffff;
      pcVar3 = acStack_400;
      do {
        pcVar11 = pcVar3;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar11 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar11;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar3 = pcVar11 + -uVar5;
      pcVar11 = (char *)(&g_botNames + g_botNameCount * 0x10);
      for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar11 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar11 = pcVar11 + 1;
      }
      uVar5 = 0xffffffff;
      pcVar3 = (char *)(&g_botNames + g_botNameCount * 0x10);
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      iVar6 = ~uVar5 - 2;
      while ((-1 < iVar6 &&
             (this = (void *)(int)*(char *)((int)&g_botNames + iVar6 + g_botNameCount * 0x40),
             uVar5 = isspace(this,(int)this), uVar5 == 0))) {
        iVar6 = iVar6 + -1;
      }
      while (iVar6 = iVar6 + 1, iVar6 < 0x40) {
        *(undefined1 *)((int)&g_botNames + iVar6 + g_botNameCount * 0x40) = 0;
      }
      if (*(char *)(&g_botNames + g_botNameCount * 0x10) != '\0') {
        puVar4 = strstr(&g_botNames + g_botNameCount * 0x10,&DAT_100a5a64);
        if (puVar4 != (uint *)0x0) {
          uVar5 = 0xffffffff;
          pcVar3 = (char *)((int)puVar4 + 2);
          do {
            pcVar11 = pcVar3;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar11 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar11;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          acStack_600[0] = '\0';
          pcVar3 = pcVar11 + -uVar5;
          pcVar11 = acStack_600;
          for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar3;
            pcVar3 = pcVar3 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar11 = *pcVar3;
            pcVar3 = pcVar3 + 1;
            pcVar11 = pcVar11 + 1;
          }
          sscanf(acStack_600,&DAT_1009f8c8);
          uVar5 = 0xffffffff;
          pcVar3 = &DAT_100a9398;
          do {
            pcVar11 = pcVar3;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar11 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar11;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          puVar8 = (uint *)(pcVar11 + -uVar5);
          for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar4 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar4 = puVar4 + 1;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(char *)puVar4 = (char)*puVar8;
            puVar8 = (uint *)((int)puVar8 + 1);
            puVar4 = (uint *)((int)puVar4 + 1);
          }
        }
        g_botNameCount = g_botNameCount + 1;
        if (0x3f < g_botNameCount) break;
      }
      pcVar3 = fgets(acStack_400,0x400,(undefined4 *)pFVar2);
    }
    fclose(pFVar2);
  }
  BotLoadSay();
  return;
}

/* 1006c150  BotPickName  (236 bytes)
 * undefined BotPickName(char * param_1, undefined4 * param_2)
 * called by: BotCreate, BotCreateCustom
 */
/* random unused bots.txt name (outward search), resets used flags when exhausted, applies per-name
   skill */

void __cdecl BotPickName(char *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  
  if (0 < g_botNameCount) {
    while( true ) {
      iVar6 = -1;
      iVar2 = (*g_engfuncs.pfnRandomLong)(0,g_botNameCount + -1);
      for (iVar5 = iVar2; (iVar2 < g_botNameCount || (-1 < iVar5)); iVar5 = iVar5 + -1) {
        if (iVar6 != -1) goto LAB_1006c1e6;
        if ((-1 < iVar5) && (*(char *)((int)&g_botNameUsed + iVar5) == '\0')) {
          iVar6 = iVar5;
        }
        if ((iVar2 < g_botNameCount) && (*(char *)((int)&g_botNameUsed + iVar2) == '\0')) {
          iVar6 = iVar2;
        }
        iVar2 = iVar2 + 1;
      }
      if (iVar6 != -1) break;
      puVar8 = &g_botNameUsed;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
    }
LAB_1006c1e6:
    uVar3 = 0xffffffff;
    *(undefined1 *)((int)&g_botNameUsed + iVar6) = 1;
    pcVar7 = (char *)(&g_botNames + iVar6 * 0x10);
    do {
      pcVar9 = pcVar7;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar7 = pcVar9 + -uVar3;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)param_1 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      param_1 = param_1 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *param_1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      param_1 = param_1 + 1;
    }
    if (0.0 < *(float *)(&g_botNameSkill + iVar6 * 4)) {
      *param_2 = *(undefined4 *)(&g_botNameSkill + iVar6 * 4);
    }
    return;
  }
  uVar3 = 0xffffffff;
  pcVar7 = &DAT_100a5a74;
  do {
    pcVar9 = pcVar7;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar7 = pcVar9 + -uVar3;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)param_1 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    param_1 = param_1 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

/* 1006c240  GetClassPtr<CBot>  (353 bytes)
 * undefined GetClassPtr<CBot>(int param_1)
 * called by: BotSetup
 */
/* alloc 0x25f0, inlined CBot ctor (vtable 0x10094a9c, sub-object vptrs) */

void __cdecl GetClassPtr<CBot>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  void *pvStack_c;
  code *pcStack_8;
  void *pvStack_4;
  
  pvStack_4 = (void *)0xffffffff;
  pcStack_8 = FUN_10088e01;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((param_1 == 0) &&
     (ExceptionList = &pvStack_c, peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0
     )) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x25f0),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    pcStack_8 = (code *)puVar3;
    CBaseToggle::CBaseToggle(puVar3);
    *puVar3 = &CBaseMonster::vftable;
    CTSAnimation::CTSAnimation((int)(puVar3 + 0x9e));
    *puVar3 = &CBasePlayer::vftable;
    __vector_constructor_iterator(puVar3 + 0x2fe,0xc,0x200,CBasePlayerWeapon::GetWeaponPtr);
    puVar3[0x900] = &CBotStateDM::vftable;
    puVar3[0x903] = &CBotStateTeamRounds::vftable;
    puVar3[0x906] = &CBotStateObjective::vftable;
    puVar3[0x909] = &CBotModuleAttack::vftable;
    puVar3[0x910] = DAT_100ae498;
    puVar3[0x911] = DAT_100ae49c;
    puVar3[0x912] = DAT_100ae4a0;
    puVar3[0x919] = &PTR_OnFreeEntPrivateData_10094c30;
    puVar3[0x91b] = &CBotModuleVision::vftable;
    puVar3[0x91d] = &PTR_OnFreeEntPrivateData_10094c20;
    puVar3[0x91f] = &PTR_OnFreeEntPrivateData_10094c18;
    puVar3[0x922] = &PTR_OnFreeEntPrivateData_10094c10;
    puVar3[0x925] = &CBotModuleChat::vftable;
    *puVar3 = &CBot::vftable;
    puVar3[1] = param_1;
    ExceptionList = pvStack_4;
    return;
  }
  iRam00000004 = peVar1;
  ExceptionList = pvStack_c;
  return;
}

/* 1006cf90  BotCanStockHit  (47 bytes)
 * undefined BotCanStockHit()
 * called by: CBotModuleAttack::Think
 */
/* current weapon info+0x10 (cold-cock damage) > 0 */

uint BotCanStockHit(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x9fc);
  if ((((uVar1 != 0) && (*(int *)(uVar1 + 0x78) == 0x10)) &&
      (uVar1 = *(uint *)(uVar1 + 0xc0), uVar1 != 0)) && (0 < *(int *)(uVar1 + 0x10))) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}

/* 1006cfc0  BotHoldingMelee  (71 bytes)
 * undefined BotHoldingMelee()
 * called by: CBotModuleAttack::Think
 */
/* kung fu (no status), knife (3) or katana (10) */

undefined4 BotHoldingMelee(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x9fc);
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(iVar2 + 0x78) != 0x10) {
    return 0;
  }
  if (((*(int *)(iVar2 + 0xbc) != 0) &&
      (cVar1 = *(char *)(*(int *)(iVar2 + 0xc0) + 0x348), cVar1 != '\x03')) && (cVar1 != '\n')) {
    return 0;
  }
  return 1;
}

/* 1006d560  BotRandomAttachments  (203 bytes)
 * uint BotRandomAttachments(int param_1)
 * called by: CBotModuleBuy::Think
 */
/* random silencer(>50)/laser(>50)/scope(>75) if allowed and not built-in (used by buy module) */

uint __cdecl BotRandomAttachments(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = (*g_engfuncs.pfnRandomLong)(0,100);
  if (0x32 < iVar1) {
    puVar2 = get_weapon_info(param_1);
    if ((*(byte *)(puVar2 + 0x38) & 1) != 0) {
      puVar2 = get_weapon_info(param_1);
      if ((*(byte *)(puVar2 + 0x39) & 1) == 0) {
        uVar3 = 1;
      }
    }
  }
  iVar1 = (*g_engfuncs.pfnRandomLong)(0,100);
  if (0x32 < iVar1) {
    puVar2 = get_weapon_info(param_1);
    if ((*(byte *)(puVar2 + 0x38) & 2) != 0) {
      puVar2 = get_weapon_info(param_1);
      if ((*(byte *)(puVar2 + 0x39) & 2) == 0) {
        uVar3 = uVar3 | 2;
      }
    }
  }
  iVar1 = (*g_engfuncs.pfnRandomLong)(0,100);
  if (0x4b < iVar1) {
    puVar2 = get_weapon_info(param_1);
    if ((*(byte *)(puVar2 + 0x38) & 8) != 0) {
      puVar2 = get_weapon_info(param_1);
      if ((*(byte *)(puVar2 + 0x39) & 8) == 0) {
        uVar3 = uVar3 | 8;
      }
    }
  }
  return uVar3;
}

/* 1006e4c0  BotArmamentEmpty  (20 bytes)
 * bool BotArmamentEmpty(int param_1)
 * called by: CBotStateDM::Think, CBotStateObjective::Think, CBotStateTeamRounds::Think
 */
/* pl+0x580 == 0 (first armament entry empty) -> buy module */

bool BotArmamentEmpty(int param_1)

{
  return *(int *)(param_1 + 0x580) == 0;
}

/* 1006e7a0  BotSay  (352 bytes)
 * undefined BotSay()
 * called by: CBotModuleChat::Think
 */
/* SayText "\x02name: text\n" MSG_ONE to every other IsNetClient player */

void BotSay(int param_1,char *param_2)

{
  char cVar1;
  edict_t *pEdict;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char acStack_80 [12];
  undefined4 uStack_74;
  char acStack_68 [103];
  undefined1 uStack_1;
  
  if (param_2 != (char *)0x0) {
    pEdict = *(edict_t **)(*(int *)(param_1 + 4) + 0x208);
    sprintf(acStack_80,(byte_conflict *)s__c_s__1009ccfc);
    uVar3 = 0xffffffff;
    do {
      pcVar6 = param_2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar4 = -1;
    pcVar8 = acStack_80;
    do {
      pcVar7 = pcVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar7;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -uVar3;
    pcVar8 = pcVar7 + -1;
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar6 = &DAT_1009ccd8;
    do {
      pcVar8 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar4 = -1;
    pcVar6 = acStack_80;
    do {
      pcVar7 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    pcVar6 = pcVar8 + -uVar3;
    pcVar8 = pcVar7 + -1;
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
    uStack_1 = 0;
    piVar2 = (int *)UTIL_FindEntityByClassname(0,s_player_1009c678);
    while (((piVar2 != (int *)0x0 && (*(edict_t **)(piVar2[1] + 0x208) != (edict_t *)0x0)) &&
           (iVar4 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(piVar2[1] + 0x208)),
           iVar4 != 0))) {
      if (((piVar2[1] != 0) && (*(edict_t **)(piVar2[1] + 0x208) != pEdict)) &&
         (iVar4 = (**(code **)(*piVar2 + 0xc4))(), iVar4 != 0)) {
        (*g_engfuncs.pfnMessageBegin)(1,gmsgSayText,(float *)0x0,*(edict_t **)(piVar2[1] + 0x208));
        iVar4 = (*g_engfuncs.pfnIndexOfEdict)(pEdict);
        (*g_engfuncs.pfnWriteByte)(iVar4);
        (*g_engfuncs.pfnWriteString)(acStack_68);
        uStack_74 = 0x1006e8dc;
        (*g_engfuncs.pfnMessageEnd)();
      }
      piVar2 = (int *)UTIL_FindEntityByClassname((int)piVar2,s_player_1009c678);
    }
  }
  return;
}

/* 10070b40  VectorEquals  (54 bytes)
 * undefined4 VectorEquals(float * param_1)
 * called by: CBotNav::GetSteerPoint
 */
/* thiscall Vector==Vector (exact float compare) */

undefined4 __thiscall VectorEquals(void *this,float *param_1)

{
  if (((*(float *)this == *param_1) && (*(float *)((int)this + 4) == param_1[1])) &&
     (*(float *)((int)this + 8) == param_1[2])) {
    return 1;
  }
  return 0;
}

/* 10070b80  UTIL_DebugBeam  (308 bytes)
 * undefined UTIL_DebugBeam(float * param_1, float * param_2, undefined4 param_3)
 * called by: CNodeGraph::FindPath, CNodeGraph::LinkNewNode
 */
/* TE_BEAMPOINTS a->b, lgtning.spr, green, life arg*0.1s; skips zero vectors */

void __cdecl UTIL_DebugBeam(float *param_1,float *param_2,int param_3)

{
  undefined4 uStack00000030;
  int in_stack_00000044;
  undefined4 uStack0000004c;
  
  if ((((*param_1 != DAT_100ae498) || (param_1[1] != DAT_100ae49c)) || (param_1[2] != DAT_100ae4a0))
     && (((*param_2 != DAT_100ae498 || (param_2[1] != DAT_100ae49c)) || (param_2[2] != DAT_100ae4a0)
         ))) {
    (*g_engfuncs.pfnMessageBegin)(2,0x17,(float *)0x0,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(0);
    (*g_engfuncs.pfnWriteCoord)(*param_1);
    (*g_engfuncs.pfnWriteCoord)(param_1[1]);
    (*g_engfuncs.pfnWriteCoord)(param_1[2]);
    (*g_engfuncs.pfnWriteCoord)(*param_2);
    (*g_engfuncs.pfnWriteCoord)(param_2[1]);
    (*g_engfuncs.pfnWriteCoord)(param_2[2]);
    (*g_engfuncs.pfnWriteShort)(g_sModelIndexLightning);
    (*g_engfuncs.pfnWriteByte)(1);
    (*g_engfuncs.pfnWriteByte)(10);
    (*g_engfuncs.pfnWriteByte)(in_stack_00000044);
    (*g_engfuncs.pfnWriteByte)(0x1e);
    uStack00000030 = 0x10070c7a;
    (*g_engfuncs.pfnWriteByte)(0);
    uStack00000030 = 0x10070c82;
    (*g_engfuncs.pfnWriteByte)(0);
    uStack00000030 = 0x10070c8d;
    (*g_engfuncs.pfnWriteByte)(0xff);
    uStack00000030 = 0x10070c95;
    (*g_engfuncs.pfnWriteByte)(0x32);
    uStack00000030 = 0x10070ca0;
    (*g_engfuncs.pfnWriteByte)(200);
    uStack00000030 = 0x10070ca8;
    (*g_engfuncs.pfnWriteByte)(10);
    uStack0000004c = 0x10070cb1;
    (*g_engfuncs.pfnMessageEnd)();
  }
  return;
}

/* 10070cc0  UTIL_DebugNodeBeam  (261 bytes)
 * undefined UTIL_DebugNodeBeam(undefined4 * param_1, undefined4 param_2)
 * called by: CNodeGraph::AddNode
 */
/* vertical 32-unit TE_BEAMPOINTS at a node */

void __cdecl UTIL_DebugNodeBeam(undefined4 *param_1,int param_2)

{
  float fVar1;
  float in_stack_0000000c;
  float in_stack_00000014;
  float in_stack_0000001c;
  undefined4 uStack00000020;
  float in_stack_00000024;
  int in_stack_00000040;
  
  fVar1 = (float)param_1[2];
  (*g_engfuncs.pfnMessageBegin)(2,0x17,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnWriteCoord)(fVar1 - 16.0);
  (*g_engfuncs.pfnWriteCoord)((float)param_1);
  (*g_engfuncs.pfnWriteCoord)(in_stack_0000000c);
  (*g_engfuncs.pfnWriteCoord)(in_stack_00000014);
  (*g_engfuncs.pfnWriteCoord)(in_stack_0000001c);
  (*g_engfuncs.pfnWriteCoord)(in_stack_00000024);
  (*g_engfuncs.pfnWriteShort)(g_sModelIndexLightning);
  (*g_engfuncs.pfnWriteByte)(1);
  (*g_engfuncs.pfnWriteByte)(10);
  (*g_engfuncs.pfnWriteByte)(in_stack_00000040);
  (*g_engfuncs.pfnWriteByte)(0x1e);
  uStack00000020 = 0x10070d8d;
  (*g_engfuncs.pfnWriteByte)(0);
  uStack00000020 = 0x10070d95;
  (*g_engfuncs.pfnWriteByte)(0);
  uStack00000020 = 0x10070da0;
  (*g_engfuncs.pfnWriteByte)(0xff);
  uStack00000020 = 0x10070da8;
  (*g_engfuncs.pfnWriteByte)(0x32);
  uStack00000020 = 0x10070db3;
  (*g_engfuncs.pfnWriteByte)(200);
  uStack00000020 = 0x10070dbb;
  (*g_engfuncs.pfnWriteByte)(10);
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 10071ff0  ts_flag  (12 bytes)
 * undefined ts_flag(int param_1)
 */
void __cdecl ts_flag(int param_1)

{
                    /* 0x71ff0  312  ts_flag */
  GetClassPtr<CTSFlag>(param_1);
  return;
}

/* 10072b80  GetClassPtr<CTSFlag>  (79 bytes)
 * undefined GetClassPtr<CTSFlag>(int param_1)
 * called by: CTSFlag::CreateFlag, ts_flag
 */
void __cdecl GetClassPtr<CTSFlag>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xa0), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSFlag::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10072c00  InformClientsOnWeaponsParams  (89 bytes)
 * undefined InformClientsOnWeaponsParams(int param_1)
 * called by: CTSGameRules::InitHUD, cmd_loadweapons
 */
void __cdecl InformClientsOnWeaponsParams(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    TSHudMessageAll(0x2d,0xc3,0x2d,8,100,s_This_server_is_using_custom_weap_100a5b88);
  }
  else {
    TSHudMessageOne(0x2d,0xc3,0x2d,8,100,s_This_server_is_using_custom_weap_100a5b88,
                    *(int *)(param_1 + 4));
  }
  iVar1 = 0;
  do {
    SendWeaponParams(iVar1,param_1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x26);
  return;
}

/* 10072c60  SendWeaponParams  (239 bytes)
 * undefined SendWeaponParams(int param_1, int param_2)
 * called by: InformClientsOnWeaponsParams
 */
void __cdecl SendWeaponParams(int param_1,int param_2)

{
  char *pcVar1;
  undefined1 local_40 [12];
  undefined4 uStack_34;
  char acStack_30 [47];
  undefined1 local_1;
  
  if ((-1 < param_1) && (param_1 < 0x26)) {
    pcVar1 = (char *)get_weapon_info(param_1);
    if (*pcVar1 != '\0') {
      get_weapon_info(param_1);
      get_weapon_info(param_1);
      get_weapon_info(param_1);
      get_weapon_info(param_1);
      get_weapon_info(param_1);
      sprintf(local_40,(byte_conflict *)s__i__f__f__f__f__i_100a5bb0);
      local_1 = 0;
      if (param_2 != 0) {
        (*g_engfuncs.pfnMessageBegin)
                  (1,DAT_100d97d0,(float *)0x0,*(edict_t **)(*(int *)(param_2 + 4) + 0x208));
        (*g_engfuncs.pfnWriteString)(acStack_30);
        uStack_34 = 0x10072d1f;
        (*g_engfuncs.pfnMessageEnd)();
        return;
      }
      (*g_engfuncs.pfnMessageBegin)(2,DAT_100d97d0,(float *)0x0,(edict_t *)0x0);
      (*g_engfuncs.pfnWriteString)(acStack_30);
      uStack_34 = 0x10072d4a;
      (*g_engfuncs.pfnMessageEnd)();
    }
  }
  return;
}

/* 10072d50  adjust_weapon_value  (864 bytes)
 * undefined4 adjust_weapon_value(void)
 * called by: cmd_loadweapons
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 adjust_weapon_value(void)

{
  char cVar1;
  FILE *pFVar2;
  char *pcVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iStack_620;
  float fStack_61c;
  float fStack_618;
  float fStack_614;
  float fStack_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined4 local_600;
  undefined1 auStack_5fc [256];
  CHAR aCStack_4fc [256];
  char acStack_3fc [1020];
  
  (*g_engfuncs.pfnGetGameDir)((char *)&local_600);
  sprintf(aCStack_4fc,(byte_conflict *)s__s_s_s_100a5c48);
  pFVar2 = (FILE *)fopen(aCStack_4fc,&DAT_100a5a5c);
  if (pFVar2 == (FILE *)0x0) {
    return 0;
  }
  pcVar3 = fgets(acStack_3fc,0x400,(undefined4 *)pFVar2);
  do {
    if (pcVar3 == (char *)0x0) {
      fclose(pFVar2);
      iVar14 = 0;
      iVar13 = 0;
      iVar12 = 0;
      iVar10 = 0;
      puVar6 = UTIL_VarArgs((byte_conflict *)s_weapons_behaviour_changed_by__s_100a5be8);
      uVar7 = UTIL_ClientPrintAll(3,puVar6,iVar10,iVar12,iVar13,iVar14);
      DAT_100c62cc = 1;
      return CONCAT31((int3)((uint)uVar7 >> 8),1);
    }
    uVar8 = 0xffffffff;
    pcVar3 = acStack_3fc;
    do {
      pcVar11 = pcVar3;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar11 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar11;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    auStack_5fc[0] = '\0';
    pcVar3 = pcVar11 + -uVar8;
    pcVar11 = auStack_5fc;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar11 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar8 = 0xffffffff;
    pcVar3 = auStack_5fc;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    iVar10 = ~uVar8 - 2;
    while ((-1 < iVar10 &&
           (uVar8 = isspace((void *)(int)(char)auStack_5fc[iVar10],(int)(char)auStack_5fc[iVar10]),
           uVar8 == 0))) {
      iVar10 = iVar10 + -1;
    }
    if (iVar10 + 1 < 0x100) {
      uVar9 = 0x100 - (iVar10 + 1);
      puVar5 = (undefined4 *)(auStack_5fc + iVar10 + 1);
      for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar5 = 0;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
    }
    if ((auStack_5fc[0] != '\0') &&
       (puVar4 = strstr((uint *)auStack_5fc,&DAT_100a5a64), puVar4 == (uint *)0x0)) {
      puVar4 = strstr((uint *)auStack_5fc,s_armor_absorb_100a5c38);
      if (puVar4 == (uint *)0x0) {
        puVar4 = strstr((uint *)auStack_5fc,s_health_absorb_100a5c20);
        if (puVar4 == (uint *)0x0) {
          iVar10 = sscanf(auStack_5fc,(byte_conflict *)s__i__f__f__f__f__i_100a5c0c);
          if (iVar10 < 6) {
            uVar7 = (*g_engfuncs.pfnAlertMessage)
                              (at_console,s_You_need_to_run_saveweapons_agai_100a5bc4);
            return CONCAT31((int3)((uint)uVar7 >> 8),1);
          }
          if (((-1 < iStack_620) && (iStack_620 < 0x26)) &&
             (pcVar3 = (char *)get_weapon_info(iStack_620), *pcVar3 != '\0')) {
            fStack_610 = fStack_618;
            if (fStack_618 <= 0.001) {
              fStack_610 = 0.001;
            }
            puVar5 = get_weapon_info(iStack_620);
            puVar5[10] = fStack_610;
            puVar5 = get_weapon_info(iStack_620);
            puVar5[0xc] = uStack_60c;
            puVar5 = get_weapon_info(iStack_620);
            puVar5[0xd] = local_600;
            puVar5 = get_weapon_info(iStack_620);
            puVar5[7] = uStack_604;
            puVar5 = get_weapon_info(iStack_620);
            puVar5[0x36] = uStack_608;
          }
        }
        else {
          uVar8 = 0xffffffff;
          pcVar3 = s_health_absorb_100a5c20;
          do {
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          iVar10 = sscanf((char *)((~uVar8 - 1) + (int)puVar4),&DAT_100a5c30);
          if ((iVar10 != 0) && (_DAT_100c62d0 = fStack_61c, fStack_61c < 0.0)) {
            _DAT_100c62d0 = 0.0;
          }
        }
      }
      else {
        uVar8 = 0xffffffff;
        pcVar3 = s_armor_absorb_100a5c38;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        iVar10 = sscanf((char *)((~uVar8 - 1) + (int)puVar4),&DAT_100a5c30);
        if ((iVar10 != 0) && (_DAT_100c62d4 = fStack_614, fStack_614 < 0.0)) {
          _DAT_100c62d4 = 0.0;
        }
      }
    }
    pcVar3 = fgets(acStack_3fc,0x400,(undefined4 *)pFVar2);
  } while( true );
}

/* 100730b0  save_weapon_value  (445 bytes)
 * undefined4 save_weapon_value(void)
 * called by: cmd_saveweapons
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 save_weapon_value(void)

{
  char cVar1;
  FILE *pFVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char local_508 [1024];
  CHAR aCStack_108 [260];
  
  (*g_engfuncs.pfnGetGameDir)(local_508);
  sprintf(aCStack_108,(byte_conflict *)s__s_s_s_100a5c48);
  pFVar2 = (FILE *)fopen(aCStack_108,&DAT_100a5e8c);
  if (pFVar2 == (FILE *)0x0) {
    return 0;
  }
  FUN_1007e682((int *)pFVar2,0,0);
  uVar6 = 0xffffffff;
  pcVar3 = s__________________________________100a5ce4;
  do {
    pcVar9 = pcVar3;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar9 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar9;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar3 = pcVar9 + -uVar6;
  pcVar9 = local_508;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar9 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar3 = local_508;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  fwrite(local_508,1,~uVar6 - 1,(int *)pFVar2);
  iVar8 = 0;
  do {
    pcVar3 = (char *)get_weapon_info(iVar8);
    if (*pcVar3 != '\0') {
      get_weapon_info(iVar8);
      get_weapon_info(iVar8);
      get_weapon_info(iVar8);
      get_weapon_info(iVar8);
      get_weapon_info(iVar8);
      get_weapon_info(iVar8);
      sprintf(local_508,(byte_conflict *)s____s__i__f__f__f__f__i_100a5cc8);
      uVar6 = 0xffffffff;
      pcVar3 = local_508;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      fwrite(local_508,1,~uVar6 - 1,(int *)pFVar2);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x26);
  sprintf(local_508,(byte_conflict *)s__________________________________100a5c70);
  uVar6 = 0xffffffff;
  pcVar3 = local_508;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  fwrite(local_508,1,~uVar6 - 1,(int *)pFVar2);
  fclose(pFVar2);
  iVar12 = 0;
  iVar11 = 0;
  iVar10 = 0;
  iVar8 = 0;
  puVar4 = UTIL_VarArgs((byte_conflict *)s_weapons_behaviour_saved_to__s_100a5c50);
  uVar5 = UTIL_ClientPrintAll(3,puVar4,iVar8,iVar10,iVar11,iVar12);
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}

/* 10073340  TSPrecache  (1500 bytes)
 * undefined TSPrecache(void)
 * called by: CWorld::Precache
 */
void TSPrecache(void)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  
  (*g_engfuncs.pfnPrecacheSound)(s_player_superjump_land_wav_100a534c);
  (*g_engfuncs.pfnPrecacheSound)(s_player_land_wav_100a595c);
  (*g_engfuncs.pfnPrecacheSound)(s_player_dive_wav_100a596c);
  (*g_engfuncs.pfnPrecacheSound)(s_player_airwheel_wav_100a5948);
  (*g_engfuncs.pfnPrecacheSound)(s_player_headshot_wav_100a52a0);
  (*g_engfuncs.pfnPrecacheSound)(s_player_headshot2_wav_100a52b4);
  (*g_engfuncs.pfnPrecacheSound)(s_player_kevlarhit_wav_100a4588);
  (*g_engfuncs.pfnPrecacheSound)(s_player_block_wav_100a62a8);
  (*g_engfuncs.pfnPrecacheSound)(s_player_splat_wav_100a6294);
  (*g_engfuncs.pfnPrecacheSound)(s_player_bodyhit1_wav_100a528c);
  (*g_engfuncs.pfnPrecacheSound)(s_player_bodyhit2_wav_100a5278);
  (*g_engfuncs.pfnPrecacheSound)(s_player_bodyhit3_wav_100a5264);
  (*g_engfuncs.pfnPrecacheSound)(s_player_bodyhit4_wav_100a5250);
  (*g_engfuncs.pfnPrecacheSound)(s_player_die_wav_100a6284);
  (*g_engfuncs.pfnPrecacheSound)(s_player_die1_wav_100a6274);
  (*g_engfuncs.pfnPrecacheSound)(s_player_die2_wav_100a6264);
  (*g_engfuncs.pfnPrecacheSound)(s_player_die3_wav_100a6254);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pain1_wav_100a6240);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pain2_wav_100a5214);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pain3_wav_100a5228);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pain4_wav_100a523c);
  (*g_engfuncs.pfnPrecacheSound)(s_misc_hacking_wav_100a5038);
  (*g_engfuncs.pfnPrecacheSound)(s_misc_hacked_wav_100a5028);
  (*g_engfuncs.pfnPrecacheSound)(s_misc_failed_wav_100a6230);
  (*g_engfuncs.pfnPrecacheSound)(s_misc_successful_wav_100a621c);
  (*g_engfuncs.pfnPrecacheSound)(s_misc_gogogo_wav_100a620c);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_ric1_wav_100a61fc);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_ric2_wav_100a61ec);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_ric3_wav_100a61dc);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_ric4_wav_100a61cc);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_ric5_wav_100a61bc);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_cement_wav_100a61a8);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_cement1_wav_100a6194);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_cement2_wav_100a6180);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_cement3_wav_100a616c);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_cement4_wav_100a6158);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_cement5_wav_100a6144);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_cement6_wav_100a6130);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_gravel1_wav_100a611c);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_gravel2_wav_100a6108);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_gravel3_wav_100a60f4);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_gravel4_wav_100a60e0);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_metal1_wav_1009e31c);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_metal2_wav_1009e308);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_metal3_wav_1009e2f4);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_metal4_wav_100a60cc);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_metal5_wav_100a60b8);
  (*g_engfuncs.pfnPrecacheSound)(s_weapons_shell_wav_100a60a4);
  (*g_engfuncs.pfnPrecacheSound)(s_weapons_sshell_wav_100a6090);
  iVar6 = 0;
  do {
    puVar3 = get_weapon_info(iVar6);
    pbVar1 = (byte *)(puVar3 + 0x3a);
    if (pbVar1 != (byte *)0x0) {
      pbVar7 = &DAT_100a9398;
      pbVar4 = pbVar1;
      do {
        bVar2 = *pbVar4;
        bVar8 = bVar2 < *pbVar7;
        if (bVar2 != *pbVar7) {
LAB_100735ad:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_100735b2;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar4[1];
        bVar8 = bVar2 < pbVar7[1];
        if (bVar2 != pbVar7[1]) goto LAB_100735ad;
        pbVar4 = pbVar4 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar2 != 0);
      iVar5 = 0;
LAB_100735b2:
      if (iVar5 != 0) {
        (*g_engfuncs.pfnPrecacheModel)((char *)pbVar1);
      }
    }
    pbVar1 = (byte *)((int)puVar3 + 0x132);
    if (pbVar1 != (byte *)0x0) {
      pbVar7 = &DAT_100a9398;
      pbVar4 = pbVar1;
      do {
        bVar2 = *pbVar4;
        bVar8 = bVar2 < *pbVar7;
        if (bVar2 != *pbVar7) {
LAB_100735f5:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_100735fa;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar4[1];
        bVar8 = bVar2 < pbVar7[1];
        if (bVar2 != pbVar7[1]) goto LAB_100735f5;
        pbVar4 = pbVar4 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar2 != 0);
      iVar5 = 0;
LAB_100735fa:
      if (iVar5 != 0) {
        (*g_engfuncs.pfnPrecacheModel)((char *)pbVar1);
      }
    }
    pbVar1 = (byte *)((int)puVar3 + 0x172);
    if (pbVar1 != (byte *)0x0) {
      pbVar7 = &DAT_100a9398;
      pbVar4 = pbVar1;
      do {
        bVar2 = *pbVar4;
        bVar8 = bVar2 < *pbVar7;
        if (bVar2 != *pbVar7) {
LAB_1007363d:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_10073642;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar4[1];
        bVar8 = bVar2 < pbVar7[1];
        if (bVar2 != pbVar7[1]) goto LAB_1007363d;
        pbVar4 = pbVar4 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar2 != 0);
      iVar5 = 0;
LAB_10073642:
      if (iVar5 != 0) {
        (*g_engfuncs.pfnPrecacheModel)((char *)pbVar1);
      }
    }
    pbVar1 = (byte *)((int)puVar3 + 0x1b2);
    if (pbVar1 != (byte *)0x0) {
      pbVar7 = &DAT_100a9398;
      pbVar4 = pbVar1;
      do {
        bVar2 = *pbVar4;
        bVar8 = bVar2 < *pbVar7;
        if (bVar2 != *pbVar7) {
LAB_10073685:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_1007368a;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar4[1];
        bVar8 = bVar2 < pbVar7[1];
        if (bVar2 != pbVar7[1]) goto LAB_10073685;
        pbVar4 = pbVar4 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar2 != 0);
      iVar5 = 0;
LAB_1007368a:
      if (iVar5 != 0) {
        (*g_engfuncs.pfnPrecacheModel)((char *)pbVar1);
      }
    }
    pbVar1 = (byte *)((int)puVar3 + 0x1f2);
    if (pbVar1 != (byte *)0x0) {
      pbVar7 = &DAT_100a9398;
      pbVar4 = pbVar1;
      do {
        bVar2 = *pbVar4;
        bVar8 = bVar2 < *pbVar7;
        if (bVar2 != *pbVar7) {
LAB_100736cd:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_100736d2;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar4[1];
        bVar8 = bVar2 < pbVar7[1];
        if (bVar2 != pbVar7[1]) goto LAB_100736cd;
        pbVar4 = pbVar4 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar2 != 0);
      iVar5 = 0;
LAB_100736d2:
      if (iVar5 != 0) {
        (*g_engfuncs.pfnPrecacheModel)((char *)pbVar1);
      }
    }
    pbVar1 = (byte *)((int)puVar3 + 0x2c6);
    if (pbVar1 != (byte *)0x0) {
      pbVar7 = &DAT_100a9398;
      pbVar4 = pbVar1;
      do {
        bVar2 = *pbVar4;
        bVar8 = bVar2 < *pbVar7;
        if (bVar2 != *pbVar7) {
LAB_10073715:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_1007371a;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar4[1];
        bVar8 = bVar2 < pbVar7[1];
        if (bVar2 != pbVar7[1]) goto LAB_10073715;
        pbVar4 = pbVar4 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar2 != 0);
      iVar5 = 0;
LAB_1007371a:
      if (iVar5 != 0) {
        (*g_engfuncs.pfnPrecacheSound)((char *)pbVar1);
      }
    }
    pbVar1 = (byte *)((int)puVar3 + 0x306);
    if (pbVar1 != (byte *)0x0) {
      pbVar7 = &DAT_100a9398;
      pbVar4 = pbVar1;
      do {
        bVar2 = *pbVar4;
        bVar8 = bVar2 < *pbVar7;
        if (bVar2 != *pbVar7) {
LAB_1007375d:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_10073762;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar4[1];
        bVar8 = bVar2 < pbVar7[1];
        if (bVar2 != pbVar7[1]) goto LAB_1007375d;
        pbVar4 = pbVar4 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar2 != 0);
      iVar5 = 0;
LAB_10073762:
      if (iVar5 != 0) {
        (*g_engfuncs.pfnPrecacheSound)((char *)pbVar1);
      }
    }
    iVar6 = iVar6 + 1;
    if (0x25 < iVar6) {
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_pistol_empty_wav_100a6074);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_insert_shell_wav_100a6058);
      (*g_engfuncs.pfnPrecacheSound)(s_goslow_wav_100a604c);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_whizz1_wav_100a6038);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_whizz2_wav_100a6024);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_whizz3_wav_100a6010);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_whizz4_wav_100a5ffc);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_whizz5_wav_100a5fe8);
      (*g_engfuncs.pfnPrecacheSound)(s_player_closecombat_wav_100a597c);
      (*g_engfuncs.pfnPrecacheSound)(s_player_kungfuhit_wav_100a3700);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_weapondrop_wav_100a5434);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_items_wav_100a544c);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_draw_wav_100a5fd4);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_switch_wav_100a4574);
      (*g_engfuncs.pfnPrecacheSound)(s_items_9mmclip1_wav_100a5460);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_generic_reload_wav_100a5fb8);
      (*g_engfuncs.pfnPrecacheSound)(s_explo_explode_wav_100a5fa4);
      (*g_engfuncs.pfnPrecacheSound)(s_explo_explode1_wav_100a5f90);
      (*g_engfuncs.pfnPrecacheSound)(s_explo_explode2_wav_100a5f7c);
      (*g_engfuncs.pfnPrecacheSound)(s_explo_explode3_wav_100a5f68);
      (*g_engfuncs.pfnPrecacheSound)(s_explo_explode4_wav_100a5f54);
      (*g_engfuncs.pfnPrecacheModel)(s_models_generic_clip_mdl_100a5f3c);
      (*g_engfuncs.pfnPrecacheModel)(s_models_ammopack_mdl_100a5f28);
      (*g_engfuncs.pfnPrecacheModel)(s_models_bullet_mdl_100a5f14);
      (*g_engfuncs.pfnPrecacheModel)(s_models_long_bullet_mdl_100a5efc);
      (*g_engfuncs.pfnPrecacheModel)(s_models_pellet_mdl_100a5ee8);
      UTIL_PrecacheOther(0x100a5edc);
      UTIL_PrecacheOther(0x100a437c);
      UTIL_PrecacheOther(0x100a3f18);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_knife_knife_miss_wav_100a45d4);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_knife_knife_hit_wav_100a36e4);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_knife_knife_hitbody_wav_100a43e4);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_katana_hit_body_wav_100a45a0);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_katana_miss1_wav_100a5ec0);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_katana_miss_wav_100a45bc);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_katana_hit_wav_100a5ea8);
      (*g_engfuncs.pfnPrecacheSound)(s_weapons_katana_hit1_wav_100a5e90);
      return;
    }
  } while( true );
}

/* 10073920  TSPlayerDisconnect  (270 bytes)
 * undefined TSPlayerDisconnect(void * param_1)
 * called by: CHalfLifeMultiplay::ClientDisconnected
 */
void __cdecl TSPlayerDisconnect(void *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  
  CBasePlayer::DropFlag(param_1,'\0');
  iVar2 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)((int)param_1 + 4) + 0x208));
  if ((-1 < iVar2) && (iVar2 < 0x20)) {
    puVar7 = (undefined4 *)(&DAT_100c10cc + iVar2 * 0x48);
    for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
  }
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x170) = 2;
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x16c) = 0;
  *(uint *)(*(int *)((int)param_1 + 4) + 0x1a4) =
       *(uint *)(*(int *)((int)param_1 + 4) + 0x1a4) & 0xffffdfff;
  *(uint *)(*(int *)((int)param_1 + 4) + 0x1a4) =
       *(uint *)(*(int *)((int)param_1 + 4) + 0x1a4) | 0x80000000;
  *(undefined4 *)((int)param_1 + 0x14c) = 0;
  uVar4 = 0xffffffff;
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x164) = 0;
  *(undefined4 *)((int)param_1 + 0xb1c) = 0;
  *(undefined4 *)((int)param_1 + 0x75c) = 0xbf800000;
  pcVar6 = &DAT_100a9398;
  do {
    pcVar8 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar8 + -uVar4;
  pcVar8 = (char *)((int)param_1 + 0xb34);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar8 = pcVar8 + 1;
  }
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x118) = 0x80;
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x160) = 0;
  *(undefined4 *)((int)param_1 + 0x9a4) = 0;
  *(undefined4 *)((int)param_1 + 0x520) = 0xbf800000;
  *(undefined1 *)((int)param_1 + 0x7a5) = 0;
  CTSGameRules::CallCheckDeads(0x100c0a48);
  return;
}

/* 10073a30  TSFoundRandomEntity  (103 bytes)
 * int TSFoundRandomEntity(undefined4 param_1)
 * called by: CBotStateDM::Think
 */
/* .so 0x9fa64; random of up to 32 by classname */

int __cdecl TSFoundRandomEntity(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_80 [32];
  
  iVar2 = 0;
  iVar1 = UTIL_FindEntityByClassname(0,param_1);
  if (iVar1 != 0) {
    piVar3 = local_80;
    do {
      if (0x1f < iVar2) break;
      *piVar3 = iVar1;
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
      iVar1 = UTIL_FindEntityByClassname(iVar1,param_1);
    } while (iVar1 != 0);
    if (iVar2 != 0) {
      iVar1 = (*g_engfuncs.pfnRandomLong)(0,iVar2 + -1);
      return local_80[iVar1];
    }
  }
  return 0;
}

/* 10073aa0  PlayerIsCheating  (66 bytes)
 * bool PlayerIsCheating(int param_1, undefined4 param_2)
 * called by: CBasePlayer::TSInit, CHalfLifeMultiplay::ClientUserInfoChanged
 */
/* .so 0x9fae0; neighbour of TSFoundRandomEntity in both, sscanf */

bool __cdecl PlayerIsCheating(int param_1,char *param_2)

{
  char *pcVar1;
  byte_conflict *pbVar2;
  
  if (*(int *)(param_1 + 0x14c) != 0) {
    return false;
  }
  pbVar2 = &DAT_1009cc60;
  pcVar1 = (*g_engfuncs.pfnInfoKeyValue)(param_2,s_cl_lw_100a4bb8);
  sscanf(pcVar1,pbVar2);
  return param_1 != 1;
}

/* 10073af0  RemoveEntityFromSlowedArray  (147 bytes)
 * undefined RemoveEntityFromSlowedArray(int param_1)
 * called by: CM61Grenade::WaitThink, CTSFlag::Destroy, CTSKnife::Use, CTSKnife::WaitThink, CTSShrapnel::WaitThink, CTSWorldGun::Fall, CTSWorldGun::GetWeapon, CTSWorldGun::WaitThink
 */
void __cdecl RemoveEntityFromSlowedArray(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_4;
  
  local_4 = 1;
  if (0 < gpGlobals->maxClients) {
    do {
      piVar1 = (int *)UTIL_PlayerByIndex(local_4);
      if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0xc0))(), iVar2 != 0)) {
        iVar2 = (int)(char)piVar1[0x9d];
        iVar3 = 0;
        if (0 < iVar2) {
          do {
            iVar2 = FUN_10072bd0(piVar1 + 0x7d,iVar2,param_1);
            if (-1 < iVar2) {
              piVar1[iVar2 + 0x7d] = 0;
            }
            iVar2 = (int)(char)piVar1[0x9d];
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar2);
        }
      }
      local_4 = local_4 + 1;
    } while (local_4 <= gpGlobals->maxClients);
  }
  return;
}

/* 100741b0  TSWorldGun  (12 bytes)
 * undefined TSWorldGun(int param_1)
 */
void __cdecl TSWorldGun(int param_1)

{
                    /* 0x741b0  168  TSWorldGun */
  GetClassPtr<CTSWorldGun>(param_1);
  return;
}

/* 10074c20  TSAmmoPack  (12 bytes)
 * undefined TSAmmoPack(int param_1)
 */
void __cdecl TSAmmoPack(int param_1)

{
                    /* 0x74c20  167  TSAmmoPack */
  GetClassPtr<CTSAmmoPack>(param_1);
  return;
}

/* 10075050  ts_groundweapon  (12 bytes)
 * undefined ts_groundweapon(int param_1)
 */
void __cdecl ts_groundweapon(int param_1)

{
                    /* 0x75050  315  ts_groundweapon */
  GetClassPtr<CTSGroundWeapon>(param_1);
  return;
}

/* 10075c10  ts_groundammo  (12 bytes)
 * undefined ts_groundammo(int param_1)
 */
void __cdecl ts_groundammo(int param_1)

{
                    /* 0x75c10  314  ts_groundammo */
  GetClassPtr<CTSGroundAmmo>(param_1);
  return;
}

/* 10075fe0  GetClassPtr<CTSWorldGun>  (79 bytes)
 * undefined GetClassPtr<CTSWorldGun>(int param_1)
 * called by: CTSWorldGun::CreateWeapon, TSWorldGun
 */
void __cdecl GetClassPtr<CTSWorldGun>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,200), peVar1 = (entvars_t *)param_1,
        puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSWorldGun::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10076030  GetClassPtr<CTSAmmoPack>  (79 bytes)
 * undefined GetClassPtr<CTSAmmoPack>(int param_1)
 * called by: CTSAmmoPack::CreateAmmoPack, TSAmmoPack
 */
void __cdecl GetClassPtr<CTSAmmoPack>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x98), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSAmmoPack::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10076080  GetClassPtr<CTSGroundWeapon>  (79 bytes)
 * undefined GetClassPtr<CTSGroundWeapon>(int param_1)
 * called by: ts_groundweapon
 */
void __cdecl GetClassPtr<CTSGroundWeapon>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xa4), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSGroundWeapon::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100760d0  GetClassPtr<CTSGroundAmmo>  (79 bytes)
 * undefined GetClassPtr<CTSGroundAmmo>(int param_1)
 * called by: ts_groundammo
 */
void __cdecl GetClassPtr<CTSGroundAmmo>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x9c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSGroundAmmo::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10076250  UTIL_AngleMod  (120 bytes)
 * float10 UTIL_AngleMod(float param_1)
 * called by: CBotBrain::UpdateView, CBotNav::Navigate, FUN_10077190
 */
/* wrap to [0, 360) */

float10 __cdecl UTIL_AngleMod(float param_1)

{
  longlong lVar1;
  
  if (param_1 < 0.0) {
    lVar1 = __ftol();
    return (float10)((1 - (int)lVar1) * 0x168) + (float10)param_1;
  }
  if (360.0 <= param_1) {
    lVar1 = __ftol();
    return (float10)param_1 - (float10)((int)lVar1 * 0x168);
  }
  return (float10)param_1;
}

/* 100762d0  UTIL_VecToAngles  (47 bytes)
 * undefined UTIL_VecToAngles(undefined4 * param_1, undefined4 param_2)
 * called by: CBotBrain::LookAt, CBotNav::GetSteerPoint, CBotNav::Navigate, CFuncTrackTrain::Find, CFuncTrackTrain::Next, CGib::StickyGibTouch, CInfoIntermission::Think, CTSGroundAmmo::PutOnWall, CTSKnife::BounceTouch, CTSShrapnel::BounceTouch, CTriggerCamera::FollowTarget, FUN_10021260, ... (14 total)
 */
void __cdecl UTIL_VecToAngles(undefined4 *param_1,float *param_2)

{
  float local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (*g_engfuncs.pfnVecToAngles)(param_2,&local_c);
  *param_1 = local_c;
  param_1[1] = uStack_8;
  param_1[2] = uStack_4;
  return;
}

/* 10076300  UTIL_EntitiesInBox  (257 bytes)
 * int UTIL_EntitiesInBox(int * param_1, int param_2, float * param_3, float * param_4, uint param_5)
 * called by: CBaseDoor::BreakableRespawn, CBaseMonster::Look, CBreakable::BreakableRespawn, CBreakable::Die, CFade::Use, CRotDoor::BreakableRespawn, CXenTree::HandleAnimEvent
 */
int __cdecl UTIL_EntitiesInBox(int *param_1,int param_2,float *param_3,float *param_4,uint param_5)

{
  edict_t *peVar1;
  edict_t *peVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 1;
  peVar1 = (*g_engfuncs.pfnPEntityOfEntIndex)(1);
  iVar4 = 0;
  if (peVar1 == (edict_t *)0x0) {
    return 0;
  }
  if (1 < gpGlobals->maxEntities) {
    do {
      if (((peVar1->free == 0) &&
          ((((param_5 == 0 || (((peVar1->v).flags & param_5) != 0)) &&
            (*param_3 <= (peVar1->v).absmax[0])) &&
           ((param_3[1] <= (peVar1->v).absmax[1] && (param_3[2] <= (peVar1->v).absmax[2])))))) &&
         (((peVar1->v).absmin[0] <= *param_4 &&
          (((((peVar1->v).absmin[1] <= param_4[1] && ((peVar1->v).absmin[2] <= param_4[2])) &&
            ((peVar2 = peVar1, peVar1 != (edict_t *)0x0 ||
             (peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar2 != (edict_t *)0x0)))) &&
           (peVar2->pvPrivateData != (void *)0x0)))))) {
        *param_1 = (int)peVar2->pvPrivateData;
        iVar4 = iVar4 + 1;
        param_1 = param_1 + 1;
        if (param_2 <= iVar4) {
          return iVar4;
        }
      }
      iVar3 = iVar3 + 1;
      peVar1 = peVar1 + 1;
    } while (iVar3 < gpGlobals->maxEntities);
  }
  return iVar4;
}

/* 10076460  UTIL_FindEntityByString  (71 bytes)
 * undefined4 UTIL_FindEntityByString(int param_1, undefined4 param_2, undefined4 param_3)
 * called by: CTriggerChangeTarget::Use, UTIL_FindEntityByClassname, UTIL_FindEntityByTargetname
 */
void * __cdecl UTIL_FindEntityByString(int param_1,char *param_2,char *param_3)

{
  edict_t *peVar1;
  int iVar2;
  
  if (param_1 == 0) {
    peVar1 = (edict_t *)0x0;
  }
  else {
    peVar1 = *(edict_t **)(*(int *)(param_1 + 4) + 0x208);
  }
  peVar1 = (*g_engfuncs.pfnFindEntityByString)(peVar1,param_2,param_3);
  if (peVar1 != (edict_t *)0x0) {
    iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar1);
    if (iVar2 != 0) {
      return peVar1->pvPrivateData;
    }
  }
  return (void *)0;
}

/* 100764b0  UTIL_FindEntityByClassname  (24 bytes)
 * undefined UTIL_FindEntityByClassname(int param_1, undefined4 param_2)
 * called by: BotSay, BotSetup, CBasePlayer::SlowMotionFlow, CBotStateDM::Think, CBotStateTeamRounds::Think, CTSDMHill::WaitTouch, CTSGameRules::CheckVotes, CTSGameRules::InitObjectives, CTSGameRules::RespawnEntities, FUN_1004c4a0, FUN_1004da70, FUN_1004e9f0, ... (18 total)
 */
void __cdecl UTIL_FindEntityByClassname(int param_1,undefined4 param_2)

{
  UTIL_FindEntityByString(param_1,s_classname_1009c37c,param_2);
  return;
}

/* 100764d0  UTIL_FindEntityByTargetname  (24 bytes)
 * undefined UTIL_FindEntityByTargetname(int param_1, undefined4 param_2)
 * called by: CGamePlayerTeam::TargetTeamName, CTSEmitter::InitThink, FUN_10019530
 */
void __cdecl UTIL_FindEntityByTargetname(int param_1,undefined4 param_2)

{
  UTIL_FindEntityByString(param_1,s_targetname_1009c68c,param_2);
  return;
}

/* 100764f0  UTIL_PlayerByIndex  (53 bytes)
 * int UTIL_PlayerByIndex(int param_1)
 * called by: CBasePlayer::AddPointsToTeam, CBasePlayer::Killed, CBasePlayer::SlowMotionFlow, CBotModuleVision::Scan, CGamePlayerZone::Use, CHalfLifeMultiplay::InitHUD, CHalfLifeMultiplay::Think, CHalfLifeTeamplay::InitHUD, CHalfLifeTeamplay::RecountTeams, CTSBriefcase::CaptureTouch, CTSGameRules::CheckDeads, CTSGameRules::InitHUD, ... (31 total)
 */
int __cdecl UTIL_PlayerByIndex(int param_1)

{
  edict_t *peVar1;
  
  if ((0 < param_1) && (param_1 <= gpGlobals->maxClients)) {
    peVar1 = (*g_engfuncs.pfnPEntityOfEntIndex)(param_1);
    if ((peVar1 != (edict_t *)0x0) && (peVar1->free == 0)) {
      return (int)peVar1->pvPrivateData;
    }
  }
  return 0;
}

/* 10076530  UTIL_MakeVectors  (13 bytes)
 * undefined UTIL_MakeVectors(undefined4 param_1)
 * called by: CBaseMonster::FInViewCone, CBaseMonster::GetDeathActivity, CBasePlayer::CheatImpulseCommands, CBasePlayer::DropFlag, CBasePlayer::ImpulseCommands, CBasePlayer::PlayerUse, CBasePlayer::PreThink, CBasePlayer::ThrowWeapon, CBotModuleAttack::Think, CBotNav::GetSteerPoint, CBotNav::Navigate, CBreakable::Use, ... (40 total)
 */
void __cdecl UTIL_MakeVectors(float *param_1)

{
  (*g_engfuncs.pfnMakeVectors)(param_1);
  return;
}

/* 10076600  UTIL_EmitAmbientSound  (163 bytes)
 * undefined UTIL_EmitAmbientSound(undefined4 param_1, undefined4 * param_2, char * param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * called by: CAmbientGeneric::Precache, CAmbientGeneric::RampThink, CAmbientGeneric::ToggleUse, CSpeaker::SpeakerThink, TEXTURETYPE_PlaySound
 */
void __cdecl
UTIL_EmitAmbientSound
          (edict_t *param_1,undefined4 *param_2,char *param_3,float param_4,float param_5,
          int param_6)

{
  int iVar1;
  longlong lVar2;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char local_20 [32];
  
  local_2c = (float)*param_2;
  local_28 = param_2[1];
  local_24 = param_2[2];
  if ((param_3 == (char *)0x0) || (*param_3 != '!')) {
    lVar2 = __ftol();
    (*g_engfuncs.pfnEmitAmbientSound)(param_1,&local_2c,param_3,param_4,param_5,param_6,(int)lVar2);
  }
  else {
    iVar1 = SENTENCEG_Lookup(local_20,(int)param_3,local_20);
    if (-1 < iVar1) {
      lVar2 = __ftol();
      (*g_engfuncs.pfnEmitAmbientSound)
                (param_1,&local_2c,local_20,param_4,param_5,param_6,(int)lVar2);
      return;
    }
  }
  return;
}

/* 100766b0  UTIL_ScreenShake  (427 bytes)
 * undefined UTIL_ScreenShake(float * param_1, float param_2, undefined4 param_3, undefined4 param_4, float param_5)
 * called by: CBasePlayer::PostThink, CShake::Use, TSExplosion
 */
void __cdecl
UTIL_ScreenShake(float *param_1,float param_2,undefined4 param_3,int param_4,float param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  longlong lVar6;
  
  FUN_10076860();
  FUN_10076860();
  param_4 = 1;
  if (0 < gpGlobals->maxClients) {
    do {
      piVar5 = (int *)UTIL_PlayerByIndex(param_4);
      if ((((piVar5 != (int *)0x0) && (iVar1 = piVar5[1], (*(uint *)(iVar1 + 0x1a4) & 0x200) != 0))
          && ((param_5 <= 0.0 ||
              (fVar2 = *param_1 - *(float *)(iVar1 + 8),
              fVar3 = param_1[1] - *(float *)(iVar1 + 0xc),
              fVar4 = param_1[2] - *(float *)(iVar1 + 0x10),
              SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4) < param_5)))) && (param_2 != 0.0))
      {
        FUN_10076860();
        (*g_engfuncs.pfnMessageBegin)(1,DAT_100d96d0,(float *)0x0,*(edict_t **)(piVar5[1] + 0x208));
        (*g_engfuncs.pfnWriteShort)((uint)param_2 & 0xffff);
        (**(code **)(*piVar5 + 8))();
        lVar6 = __ftol();
        (*g_engfuncs.pfnWriteShort)((int)lVar6);
        (**(code **)(*piVar5 + 8))();
        lVar6 = __ftol();
        (*g_engfuncs.pfnWriteShort)((int)lVar6);
        (*g_engfuncs.pfnMessageEnd)();
      }
      param_4 = param_4 + 1;
    } while (param_4 <= gpGlobals->maxClients);
  }
  return;
}

/* 100769e0  UTIL_ScreenFadeAll  (100 bytes)
 * undefined UTIL_ScreenFadeAll(void)
 * called by: CFade::Use, CRevertSaved::Use
 */
void UTIL_ScreenFadeAll(void)

{
  int *piVar1;
  int iVar2;
  undefined2 local_c [6];
  
  FUN_10076890(local_c);
  iVar2 = 1;
  if (0 < gpGlobals->maxClients) {
    do {
      piVar1 = (int *)UTIL_PlayerByIndex(iVar2);
      FUN_10076900((int)local_c,piVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 <= gpGlobals->maxClients);
  }
  return;
}

/* 10076a50  UTIL_ScreenFade  (57 bytes)
 * undefined UTIL_ScreenFade(int * param_1)
 * called by: CBasePlayer::TSInit, CBasePlayer::TakeDamage, CFade::Use, TSExplosion
 */
void __cdecl UTIL_ScreenFade(int *param_1)

{
  undefined2 local_c [6];
  
  FUN_10076890(local_c);
  FUN_10076900((int)local_c,param_1);
  return;
}

/* 10076cf0  UTIL_ClientPrintAll  (121 bytes)
 * undefined UTIL_ClientPrintAll(undefined4 param_1, undefined4 param_2, int param_3, int param_4, int param_5, int param_6)
 * called by: CBasePlayer::PreThink, CBasePlayer::ShootBulletsPlayer, CBulletManager::FireBullet, CHalfLifeMultiplay::InitHUD, CHalfLifeMultiplay::PlayerKilled, CNodeGraph::AddNode, CNodeGraph::FindPath, CTSAmmoPack::CreateAmmoPack, CTSFlag::CreateFlag, CTSGameRules::CheckVotes, CTSGameRules::PlayerVote, CTSKnife::BounceTouch, ... (18 total)
 */
void UTIL_ClientPrintAll(int param_1,char *param_2,int param_3,int param_4,int param_5,int param_6)

{
  char *in_stack_0000001c;
  char *in_stack_00000024;
  char *in_stack_0000002c;
  char *in_stack_00000030;
  char *in_stack_00000034;
  
  (*g_engfuncs.pfnMessageBegin)(2,DAT_100d9748,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(param_5);
  (*g_engfuncs.pfnWriteString)(in_stack_0000001c);
  if (in_stack_00000024 != (char *)0x0) {
    (*g_engfuncs.pfnWriteString)(in_stack_00000024);
  }
  if (in_stack_0000002c != (char *)0x0) {
    (*g_engfuncs.pfnWriteString)(in_stack_0000002c);
  }
  if (in_stack_00000030 != (char *)0x0) {
    (*g_engfuncs.pfnWriteString)(in_stack_00000030);
  }
  if (in_stack_00000034 != (char *)0x0) {
    (*g_engfuncs.pfnWriteString)(in_stack_00000034);
  }
                    /* WARNING: Could not recover jumptable at 0x10076d63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 10076d70  ClientPrint  (131 bytes)
 * undefined ClientPrint(int param_1, undefined4 param_2, undefined4 param_3, int param_4, int param_5, int param_6, int param_7)
 * called by: CBasePlayer::PreThink, CHalfLifeMultiplay::PlayerKilled, CTSBomb::Use, CTSGameRules::PlayerVote, CTSHack::Use, Host_Say, pfnClientCommand
 */
/* .so 0xed16c; gmsgTextMsg MSG_ONE */

void ClientPrint(int param_1,int param_2,char *param_3,int param_4,int param_5,int param_6,
                int param_7)

{
  char *in_stack_00000020;
  char *in_stack_00000028;
  char *in_stack_00000030;
  char *in_stack_00000034;
  char *in_stack_00000038;
  
  (*g_engfuncs.pfnMessageBegin)(1,DAT_100d9748,(float *)0x0,*(edict_t **)(param_1 + 0x208));
  (*g_engfuncs.pfnWriteByte)(param_6);
  (*g_engfuncs.pfnWriteString)(in_stack_00000020);
  if (in_stack_00000028 != (char *)0x0) {
    (*g_engfuncs.pfnWriteString)(in_stack_00000028);
  }
  if (in_stack_00000030 != (char *)0x0) {
    (*g_engfuncs.pfnWriteString)(in_stack_00000030);
  }
  if (in_stack_00000034 != (char *)0x0) {
    (*g_engfuncs.pfnWriteString)(in_stack_00000034);
  }
  if (in_stack_00000038 != (char *)0x0) {
    (*g_engfuncs.pfnWriteString)(in_stack_00000038);
  }
                    /* WARNING: Could not recover jumptable at 0x10076ded. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 10076ed0  UTIL_ShowMessage  (71 bytes)
 * undefined UTIL_ShowMessage(undefined4 param_1, int * param_2)
 * called by: CBaseTrigger::ActivateMultiTrigger, CMessage::Use, UTIL_ShowMessageAll
 */
void __cdecl UTIL_ShowMessage(char *param_1,int *param_2)

{
  int iVar1;
  undefined4 uStack0000000c;
  char *in_stack_00000014;
  
  if (param_2 != (int *)0x0) {
    iVar1 = (**(code **)(*param_2 + 0xc4))();
    if (iVar1 != 0) {
      (*g_engfuncs.pfnMessageBegin)(1,DAT_100d9710,(float *)0x0,*(edict_t **)(param_2[1] + 0x208));
      (*g_engfuncs.pfnWriteString)(in_stack_00000014);
      uStack0000000c = 0x10076f15;
      (*g_engfuncs.pfnMessageEnd)();
    }
  }
  return;
}

/* 10076f20  UTIL_ShowMessageAll  (65 bytes)
 * undefined UTIL_ShowMessageAll(undefined4 param_1)
 * called by: CMessage::Use, CRevertSaved::MessageThink
 */
void __cdecl UTIL_ShowMessageAll(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 1;
  if (0 < gpGlobals->maxClients) {
    do {
      piVar1 = (int *)UTIL_PlayerByIndex(iVar2);
      if (piVar1 != (int *)0x0) {
        UTIL_ShowMessage(param_1,piVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= gpGlobals->maxClients);
  }
  return;
}

/* 10076fb0  UTIL_TraceLine  (43 bytes)
 * undefined UTIL_TraceLine(undefined4 param_1, undefined4 param_2, int param_3, undefined4 param_4, undefined4 param_5)
 * called by: CBaseEntity::TraceBleed, CBasePlayer::CheatImpulseCommands, CBasePlayer::ImpulseCommands, CBasePlayer::PlayerUse, CBasePlayer::PreThink, CBlood::Use, CBotModuleAttack::FindCoverSpot, CBotModuleLookAround::FindLookPoint, CBotNav::GetSteerPoint, CBotNav::Navigate, CBotNav::RandomWanderPoint, CDecal::StaticDecal, ... (49 total)
 */
/* (start, end, igmon, pentIgnore, ptr): ignore_monsters == 1 -> dont_ignore_monsters flag */

void __cdecl
UTIL_TraceLine(float *param_1,float *param_2,int param_3,edict_t *param_4,TraceResult *param_5)

{
  (*g_engfuncs.pfnTraceLine)(param_1,param_2,SUB14(param_3 == 1,0),param_4,param_5);
  return;
}

/* 10077010  UTIL_TraceModel  (35 bytes)
 * undefined UTIL_TraceModel(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * called by: CGamePlayerZone::Use
 */
void __cdecl
UTIL_TraceModel(float *param_1,float *param_2,int param_3,edict_t *param_4,TraceResult *param_5)

{
  (*g_engfuncs.pfnTraceModel)(param_1,param_2,param_3,param_4,param_5);
  return;
}

/* 10077110  UTIL_SetSize  (31 bytes)
 * undefined UTIL_SetSize(int param_1, undefined4 param_2, undefined4 param_3)
 * called by: CBaseAnimating::SetSequenceBox, CBaseEntity::Restore, CBaseMonster::MonsterInitDead, CBasePlayer::Restore, CBasePlayer::Spawn, CBeam::RelinkBeam, CCycler::GenericCyclerSpawn, CFade::Spawn, CFuncPlat::Setup, CFuncTankControls::Spawn, CFuncTrackTrain::Spawn, CFuncTrain::Spawn, ... (59 total)
 */
void __cdecl UTIL_SetSize(int param_1,float *param_2,float *param_3)

{
  (*g_engfuncs.pfnSetSize)(*(edict_t **)(param_1 + 0x208),param_2,param_3);
  return;
}

/* 10077130  UTIL_SetOrigin  (26 bytes)
 * undefined UTIL_SetOrigin(int param_1, undefined4 param_2)
 * called by: CBaseDoor::BreakableRespawn, CBaseDoor::SetToggleState, CBaseDoor::Spawn, CBaseMonster::CorpseFallThink, CBaseMonster::MonsterInitDead, CBasePlayer::StartObserver, CBasePlayerItem::Materialize, CBaseSpectator::SpectatorImpulseCommand, CBaseToggle::LinearMoveDone, CBaseTrigger::TeleportTouch, CBaseTrigger::ToggleUse, CBeam::RelinkBeam, ... (80 total)
 */
void __cdecl UTIL_SetOrigin(int param_1,float *param_2)

{
  (*g_engfuncs.pfnSetOrigin)(*(edict_t **)(param_1 + 0x208),param_2);
  return;
}

/* 10077260  UTIL_VarArgs  (29 bytes)
 * undefined * UTIL_VarArgs(byte.conflict * param_1)
 * called by: BotCreate, BotCreateCustom, BotSetup, CBasePlayer::PreThink, CBasePlayer::ShootBulletsPlayer, CHalfLifeMultiplay::InitHUD, CHalfLifeMultiplay::PlayerKilled, CHalfLifeMultiplay::Think, CHalfLifeTeamplay::Think, CNodeGraph::AddNode, CNodeGraph::FindPath, CTSBomb::Use, ... (29 total)
 */
undefined * __cdecl UTIL_VarArgs(byte_conflict *param_1)

{
  FUN_1007e73b(&DAT_102ee74c,param_1,(undefined4 *)&stack0x00000008);
  return &DAT_102ee74c;
}

/* 10077280  UTIL_IsMasterTriggered  (114 bytes)
 * undefined4 UTIL_IsMasterTriggered(int param_1, undefined4 param_2)
 * called by: CBaseButton::ButtonActivate, CBaseButton::ButtonTouch, CBaseButton::TriggerAndWait, CBaseDMStart::IsTriggered, CBaseDoor::DoorActivate, CBaseDoor::DoorTouch, CBaseTrigger::ActivateMultiTrigger, CBaseTrigger::TeleportTouch, CFuncTank::StartControl, CRuleEntity::CanFireForActivator, CTriggerSave::SaveTouch
 */
undefined4 __cdecl UTIL_IsMasterTriggered(int param_1,undefined4 param_2)

{
  int *piVar1;
  edict_t *pEdict;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (param_1 != 0) {
    pEdict = (*g_engfuncs.pfnFindEntityByString)
                       ((edict_t *)0x0,s_targetname_1009c68c,gpGlobals->pStringBase + param_1);
    if (pEdict != (edict_t *)0x0) {
      iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict);
      if ((iVar2 != 0) && (piVar1 = pEdict->pvPrivateData, piVar1 != (int *)0x0)) {
        uVar3 = (**(code **)(*piVar1 + 0x30))();
        if ((uVar3 & 0x80) != 0) {
          uVar4 = (**(code **)(*piVar1 + 100))();
          return uVar4;
        }
      }
    }
    (*g_engfuncs.pfnAlertMessage)(at_console,s_Master_was_null_or_not_a_master__100a70ec);
  }
  return 1;
}

/* 10077300  UTIL_ShouldShowBlood  (85 bytes)
 * undefined4 UTIL_ShouldShowBlood(int param_1)
 * called by: FUN_10077370, FUN_10077420, FUN_10077580
 */
undefined4 __cdecl UTIL_ShouldShowBlood(int param_1)

{
  float10 fVar1;
  
  if (param_1 != -1) {
    if (param_1 == 0xf7) {
      fVar1 = (float10)(*g_engfuncs.pfnCVarGetFloat)(s_violence_hblood_100a7120);
      if (fVar1 != (float10)0.0) {
        return 1;
      }
    }
    else {
      fVar1 = (float10)(*g_engfuncs.pfnCVarGetFloat)(s_violence_ablood_100a7110);
      if (fVar1 != (float10)0.0) {
        return 1;
      }
    }
  }
  return 0;
}

/* 10077820  UTIL_Sparks  (66 bytes)
 * undefined UTIL_Sparks(undefined4 * param_1)
 * called by: CBreakable::TraceAttack, CShower::Think, CTSKnife::BounceTouch, DoSpark, FUN_10019590, FUN_1004cc30, FUN_1004cd70, TEXTURETYPE_PlaySound
 */
void __cdecl UTIL_Sparks(undefined4 *param_1)

{
  undefined4 uStack00000018;
  
  (*g_engfuncs.pfnMessageBegin)(4,0x17,(float *)param_1,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(9);
  (*g_engfuncs.pfnWriteCoord)((float)*param_1);
  (*g_engfuncs.pfnWriteCoord)((float)param_1[1]);
  (*g_engfuncs.pfnWriteCoord)((float)param_1[2]);
  uStack00000018 = 0x10077860;
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 100778d0  UTIL_TeamsMatch  (62 bytes)
 * undefined4 UTIL_TeamsMatch(char * param_1, byte.conflict * param_2)
 * called by: CGameTeamMaster::TeamMatch
 */
undefined4 __cdecl UTIL_TeamsMatch(char *param_1,byte_conflict *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(*g_pGameRules + 0x1c))();
  if (iVar1 == 0) {
    return 1;
  }
  if ((*param_1 != '\0') && (*param_2 != '\0')) {
    uVar2 = FUN_100887b0(param_1,(byte_conflict *)param_1,param_2);
    if (uVar2 == 0) {
      return 1;
    }
  }
  return 0;
}

/* 10077d80  UTIL_Remove  (55 bytes)
 * undefined UTIL_Remove(int * param_1)
 * called by: CAutoTrigger::Think, CBaseDelay::SUB_UseTargets, CBaseEntity::Killed, CBasePlayerItem::DefaultTouch, CEnvExplosion::Smoke, CFireAndDie::Think, CFuncTankLaser::Activate, CFuncTrainControls::Find, CGameCounter::Use, CGameCounterSet::Use, CGamePlayerHurt::Use, CGamePlayerTeam::Use, ... (59 total)
 */
void __cdecl UTIL_Remove(int *param_1)

{
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0xe0))();
    *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) | 0x40000000;
    *(undefined4 *)(param_1[1] + 0x1cc) = 0;
  }
  return;
}

/* 10077df0  UTIL_PrecacheOther  (115 bytes)
 * undefined UTIL_PrecacheOther(int param_1)
 * called by: CBreakable::Precache, CFuncTankRocket::Precache, ClientPrecache, TSPrecache, W_Precache
 */
void __cdecl UTIL_PrecacheOther(int param_1)

{
  edict_t *pEdict;
  int iVar1;
  edict_t *peVar2;
  
  pEdict = (*g_engfuncs.pfnCreateNamedEntity)(param_1 - (int)gpGlobals->pStringBase);
  if (pEdict == (edict_t *)0x0) {
LAB_10077e1f:
    (*g_engfuncs.pfnAlertMessage)(at_console,s_NULL_Ent_in_UTIL_PrecacheOther_100a7130);
    return;
  }
  iVar1 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict);
  if (iVar1 == 0) goto LAB_10077e1f;
  peVar2 = (pEdict->v).pContainingEntity;
  if (peVar2 == (edict_t *)0x0) {
    peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    if (peVar2 == (edict_t *)0x0) goto LAB_10077e57;
  }
  if (peVar2->pvPrivateData != (int *)0x0) {
    (**(code **)(*(int *)peVar2->pvPrivateData + 0x20))();
  }
LAB_10077e57:
  (*g_engfuncs.pfnRemoveEntity)(pEdict);
  return;
}

/* 10077e70  UTIL_LogPrintf  (42 bytes)
 * undefined UTIL_LogPrintf(byte.conflict * param_1)
 * called by: CBasePlayer::DropFlag, CBasePlayer::TakeFlag, CHalfLifeMultiplay::ClientDisconnected, CHalfLifeMultiplay::InitHUD, CHalfLifeMultiplay::PlayerKilled, CHalfLifeTeamplay::ClientUserInfoChanged, CTSBriefcase::CaptureTouch, CTSGameRules::CheckDeads, CTSGameRules::SetPlayerTheOne, CTSGameRules::TeamWin, Host_Say, pfnClientUserInfoChanged
 */
void __cdecl UTIL_LogPrintf(byte_conflict *param_1)

{
  FUN_1007e73b(&DAT_102ee344,param_1,(undefined4 *)&stack0x00000008);
  (*g_engfuncs.pfnAlertMessage)(at_logged,&DAT_1009cd14,&DAT_102ee344);
  return;
}

/* 100783c0  EntvarsKeyvalue  (226 bytes)
 * undefined EntvarsKeyvalue(int param_1, int param_2)
 * called by: pfnKeyValue
 */
void __cdecl EntvarsKeyvalue(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *this;
  undefined4 *puVar4;
  float10 fVar5;
  
  puVar4 = &DAT_100a6810;
  do {
    uVar1 = FUN_100887b0((void *)puVar4[1],(void *)puVar4[1],*(byte_conflict **)(param_2 + 4));
    if (uVar1 == 0) {
      switch(*puVar4) {
      case 0:
      case 0xf:
        fVar5 = atof(this,*(byte_conflict **)(param_2 + 8));
        *(float *)(puVar4[2] + param_1) = (float)fVar5;
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      case 1:
      case 0x10:
      case 0x11:
        iVar2 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
        *(int *)(puVar4[2] + param_2) = iVar2;
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      default:
        (*g_engfuncs.pfnAlertMessage)(at_error,s_Bad_field_in_entity___100a71ac);
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      case 7:
      case 8:
        FUN_10077910((float *)(puVar4[2] + param_1),*(char **)(param_2 + 8));
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      case 10:
        uVar3 = atoi(this,*(byte_conflict **)(param_2 + 8));
        *(undefined4 *)(puVar4[2] + param_1) = uVar3;
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
    }
    puVar4 = puVar4 + 4;
  } while ((int)puVar4 < 0x100a6d70);
  return;
}

/* 100795a0  MaxAmmoCarry  (251 bytes)
 * undefined4 MaxAmmoCarry(int param_1)
 * called by: CWeaponBox::PackAmmo, CWeaponBox::Touch
 */
undefined4 __cdecl MaxAmmoCarry(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  bool bVar6;
  int local_4;
  
  local_4 = 0;
  puVar5 = &DAT_102eee30;
  do {
    pbVar4 = (byte *)puVar5[-2];
    if (pbVar4 != (byte *)0x0) {
      pbVar2 = (byte *)(gpGlobals->pStringBase + param_1);
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_100795ef:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_100795f4;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_100795ef;
        pbVar2 = pbVar2 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_100795f4:
      if (iVar3 == 0) {
        return *(undefined4 *)(&DAT_102eee2c + local_4 * 0x2c);
      }
    }
    pbVar4 = (byte *)*puVar5;
    if (pbVar4 != (byte *)0x0) {
      pbVar2 = (byte *)(gpGlobals->pStringBase + param_1);
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_1007962a:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_1007962f;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_1007962a;
        pbVar2 = pbVar2 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_1007962f:
      if (iVar3 == 0) {
        return *(undefined4 *)(&DAT_102eee34 + local_4 * 0x2c);
      }
    }
    puVar5 = puVar5 + 0xb;
    local_4 = local_4 + 1;
    if (0x102ef3af < (int)puVar5) {
      (*g_engfuncs.pfnAlertMessage)
                (at_console,s_MaxAmmoCarry___doesn_t_recognize_100a758c,
                 gpGlobals->pStringBase + param_1);
      return 0xffffffff;
    }
  } while( true );
}

/* 100798d0  UTIL_PrecacheOtherWeapon  (233 bytes)
 * undefined UTIL_PrecacheOtherWeapon(int param_1)
 * called by: W_Precache
 */
void __cdecl UTIL_PrecacheOtherWeapon(int param_1)

{
  int *piVar1;
  edict_t *pEdict;
  int iVar2;
  edict_t *peVar3;
  void *extraout_ECX;
  void *this;
  byte_conflict **ppbVar4;
  undefined4 *puVar5;
  int unaff_retaddr;
  byte_conflict *apbStack_20 [4];
  byte_conflict *pbStack_10;
  
  pEdict = (*g_engfuncs.pfnCreateNamedEntity)(param_1 - (int)gpGlobals->pStringBase);
  if (pEdict == (edict_t *)0x0) {
LAB_10079903:
    (*g_engfuncs.pfnAlertMessage)(at_console,s_NULL_Ent_in_UTIL_PrecacheOtherWe_100a75b4);
    return;
  }
  iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict);
  if (iVar2 == 0) goto LAB_10079903;
  peVar3 = (pEdict->v).pContainingEntity;
  if (peVar3 == (edict_t *)0x0) {
    peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    if (peVar3 == (edict_t *)0x0) goto LAB_100799a8;
  }
  piVar1 = peVar3->pvPrivateData;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x20))();
    ppbVar4 = apbStack_20;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *ppbVar4 = (byte_conflict *)0x0;
      ppbVar4 = ppbVar4 + 1;
    }
    iVar2 = (**(code **)(*piVar1 + 0x118))(apbStack_20);
    if (iVar2 != 0) {
      ppbVar4 = apbStack_20;
      puVar5 = &DAT_102eee20 + unaff_retaddr * 0xb;
      for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *ppbVar4;
        ppbVar4 = ppbVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      this = (void *)0x0;
      if ((apbStack_20[2] != (byte_conflict *)0x0) && (*apbStack_20[2] != '\0')) {
        FUN_10079870((void *)0x0,apbStack_20[2]);
        this = extraout_ECX;
      }
      if ((pbStack_10 != (byte_conflict *)0x0) && (*pbStack_10 != '\0')) {
        FUN_10079870(this,pbStack_10);
      }
    }
  }
LAB_100799a8:
  (*g_engfuncs.pfnRemoveEntity)(pEdict);
  return;
}

/* 100799c0  W_Precache  (507 bytes)
 * undefined W_Precache(void)
 * called by: CWorld::Precache
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void W_Precache(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_102eee20;
  for (iVar1 = 0x160; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_102eed18;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_102ef3a4 = 0;
  UTIL_PrecacheOther(0x1009f70c);
  UTIL_PrecacheOther(0x100a7708);
  UTIL_PrecacheOther(0x100a3ff0);
  UTIL_PrecacheOther(0x100a4f60);
  UTIL_PrecacheOther(0x100a4fa4);
  UTIL_PrecacheOther(0x100a3558);
  UTIL_PrecacheOther(0x100a357c);
  UTIL_PrecacheOther(0x100a35b8);
  UTIL_PrecacheOther(0x100a35ec);
  UTIL_PrecacheOther(0x100a5020);
  UTIL_PrecacheOther(0x100a4fd8);
  UTIL_PrecacheOther(0x100a5068);
  UTIL_PrecacheOther(0x100a3628);
  compile_weapons_info();
  UTIL_PrecacheOtherWeapon(0x100a4494);
  UTIL_PrecacheOther(0x100a3f20);
  UTIL_PrecacheOther(0x100a3f2c);
  UTIL_PrecacheOther(0x100a32fc);
  g_sModelIndexLightning = (*g_engfuncs.pfnPrecacheModel)(s_sprites_lgtning_spr_1009dfe0);
  (**(code **)(*g_pGameRules + 0x18))();
  iVar1 = (*g_engfuncs.pfnPrecacheModel)(s_sprites_zerogxplode_spr_100a76f0);
  DAT_102eed0c = (undefined2)iVar1;
  iVar1 = (*g_engfuncs.pfnPrecacheModel)(s_sprites_WXplo1_spr_100a76dc);
  _DAT_102eecf8 = (undefined2)iVar1;
  iVar1 = (*g_engfuncs.pfnPrecacheModel)(s_sprites_steam1_spr_100a76c8);
  DAT_102eecfa = (undefined2)iVar1;
  iVar1 = (*g_engfuncs.pfnPrecacheModel)(s_sprites_bubble_spr_1009de10);
  DAT_102ef3a0 = (undefined2)iVar1;
  iVar1 = (*g_engfuncs.pfnPrecacheModel)(s_sprites_bloodspray_spr_100a76b0);
  DAT_102eed10 = (undefined2)iVar1;
  iVar1 = (*g_engfuncs.pfnPrecacheModel)(s_sprites_blood_spr_100a769c);
  DAT_102eecfc = (undefined2)iVar1;
  iVar1 = (*g_engfuncs.pfnPrecacheModel)(PTR_s_sprites_laserbeam_spr_100a73e0);
  _DAT_102eed0e = (undefined2)iVar1;
  iVar1 = (*g_engfuncs.pfnPrecacheModel)(s_sprites_laserdot_spr_100a7684);
  _DAT_102eee18 = (undefined2)iVar1;
  (*g_engfuncs.pfnPrecacheModel)(s_models_grenade_mdl_1009e0f0);
  (*g_engfuncs.pfnPrecacheModel)(s_sprites_explode1_spr_100a766c);
  (*g_engfuncs.pfnPrecacheSound)(s_weapons_debris1_wav_100a7658);
  (*g_engfuncs.pfnPrecacheSound)(s_weapons_debris2_wav_100a7644);
  (*g_engfuncs.pfnPrecacheSound)(s_weapons_debris3_wav_100a7630);
  (*g_engfuncs.pfnPrecacheSound)(s_weapons_grenade_hit1_wav_100a7614);
  (*g_engfuncs.pfnPrecacheSound)(s_weapons_grenade_hit2_wav_100a75f8);
  (*g_engfuncs.pfnPrecacheSound)(s_weapons_grenade_hit3_wav_100a75dc);
  (*g_engfuncs.pfnPrecacheSound)(s_weapons_bullet_hit1_wav_100a21dc);
  (*g_engfuncs.pfnPrecacheSound)(s_weapons_bullet_hit2_wav_100a21c4);
  (*g_engfuncs.pfnPrecacheSound)(s_items_weapondrop1_wav_100a5b30);
  return;
}

/* 1007a7b0  weaponbox  (12 bytes)
 * undefined weaponbox(int param_1)
 */
void __cdecl weaponbox(int param_1)

{
                    /* 0x7a7b0  344  weaponbox */
  GetClassPtr<CWeaponBox>(param_1);
  return;
}

/* 1007ac50  GetClassPtr<CWeaponBox>  (79 bytes)
 * undefined GetClassPtr<CWeaponBox>(int param_1)
 * called by: weaponbox
 */
void __cdecl GetClassPtr<CWeaponBox>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x170),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CWeaponBox::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1007acc0  infodecal  (12 bytes)
 * undefined infodecal(int param_1)
 */
void __cdecl infodecal(int param_1)

{
                    /* 0x7acc0  260  infodecal */
  GetClassPtr<CDecal>(param_1);
  return;
}

/* 1007b010  bodyque  (12 bytes)
 * undefined bodyque(int param_1)
 */
void __cdecl bodyque(int param_1)

{
                    /* 0x7b010  177  bodyque */
  GetClassPtr<CCorpse>(param_1);
  return;
}

/* 1007b380  pfnSaveGlobalState  (90 bytes)
 * void pfnSaveGlobalState(SAVERESTOREDATA * param_1)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnSaveGlobalState(SAVERESTOREDATA *param_1)

{
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_10088e18;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_10077ee0(&param_1,param_1);
  uStack_4 = 0;
  FUN_1007b1f0(&DAT_102ef3b0,&param_1);
  uStack_4 = 0xffffffff;
  CBaseEntity::SUB_DoNothing((CBaseEntity *)&param_1);
  ExceptionList = pvStack_c;
  return;
}

/* 1007b3e0  pfnRestoreGlobalState  (103 bytes)
 * void pfnRestoreGlobalState(SAVERESTOREDATA * param_1)
 */
void __cdecl pfnRestoreGlobalState(SAVERESTOREDATA *param_1)

{
  CBaseEntity local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_10088e38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10077ee0(local_18,param_1);
  local_10 = 1;
  local_14 = 0;
  local_4 = 0;
  FUN_1007b260(&DAT_102ef3b0,local_18);
  local_4 = 0xffffffff;
  CBaseEntity::SUB_DoNothing(local_18);
  ExceptionList = local_c;
  return;
}

/* 1007b450  pfnResetGlobalState  (21 bytes)
 * void pfnResetGlobalState(void)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnResetGlobalState(void)

{
  FUN_1007b350((undefined4 *)&DAT_102ef3b0);
  DAT_100a0988 = 1;
  return;
}

/* 1007b470  worldspawn  (12 bytes)
 * undefined worldspawn(int param_1)
 */
void __cdecl worldspawn(int param_1)

{
                    /* 0x7b470  346  worldspawn */
  GetClassPtr<CWorld>(param_1);
  return;
}

/* 1007bd90  GetClassPtr<CDecal>  (76 bytes)
 * undefined GetClassPtr<CDecal>(int param_1)
 * called by: infodecal
 */
void __cdecl GetClassPtr<CDecal>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CDecal::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1007bde0  GetClassPtr<CCorpse>  (76 bytes)
 * undefined GetClassPtr<CCorpse>(int param_1)
 * called by: bodyque
 */
void __cdecl GetClassPtr<CCorpse>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CCorpse::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1007be30  GetClassPtr<CWorld>  (76 bytes)
 * undefined GetClassPtr<CWorld>(int param_1)
 * called by: worldspawn
 */
void __cdecl GetClassPtr<CWorld>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CWorld::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1007bf20  xen_plantlight  (12 bytes)
 * undefined xen_plantlight(int param_1)
 */
void __cdecl xen_plantlight(int param_1)

{
                    /* 0x7bf20  349  xen_plantlight */
  GetClassPtr<CXenPLight>(param_1);
  return;
}

/* 1007c2e0  xen_hair  (12 bytes)
 * undefined xen_hair(int param_1)
 */
void __cdecl xen_hair(int param_1)

{
                    /* 0x7c2e0  347  xen_hair */
  GetClassPtr<CXenHair>(param_1);
  return;
}

/* 1007c430  xen_ttrigger  (12 bytes)
 * undefined xen_ttrigger(int param_1)
 */
void __cdecl xen_ttrigger(int param_1)

{
                    /* 0x7c430  354  xen_ttrigger */
  GetClassPtr<CXenTreeTrigger>(param_1);
  return;
}

/* 1007c500  xen_tree  (12 bytes)
 * undefined xen_tree(int param_1)
 */
void __cdecl xen_tree(int param_1)

{
                    /* 0x7c500  353  xen_tree */
  GetClassPtr<CXenTree>(param_1);
  return;
}

/* 1007cb70  xen_spore_small  (12 bytes)
 * undefined xen_spore_small(int param_1)
 */
void __cdecl xen_spore_small(int param_1)

{
                    /* 0x7cb70  352  xen_spore_small */
  GetClassPtr<CXenSporeSmall>(param_1);
  return;
}

/* 1007cb80  xen_spore_medium  (12 bytes)
 * undefined xen_spore_medium(int param_1)
 */
void __cdecl xen_spore_medium(int param_1)

{
                    /* 0x7cb80  351  xen_spore_medium */
  GetClassPtr<CXenSporeMed>(param_1);
  return;
}

/* 1007cb90  xen_spore_large  (12 bytes)
 * undefined xen_spore_large(int param_1)
 */
void __cdecl xen_spore_large(int param_1)

{
                    /* 0x7cb90  350  xen_spore_large */
  GetClassPtr<CXenSporeLarge>(param_1);
  return;
}

/* 1007cba0  xen_hull  (12 bytes)
 * undefined xen_hull(int param_1)
 */
void __cdecl xen_hull(int param_1)

{
                    /* 0x7cba0  348  xen_hull */
  GetClassPtr<CXenHull>(param_1);
  return;
}

/* 1007d010  GetClassPtr<CXenPLight>  (76 bytes)
 * undefined GetClassPtr<CXenPLight>(int param_1)
 * called by: xen_plantlight
 */
void __cdecl GetClassPtr<CXenPLight>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x78), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CXenPLight::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1007d060  GetClassPtr<CXenHair>  (76 bytes)
 * undefined GetClassPtr<CXenHair>(int param_1)
 * called by: xen_hair
 */
void __cdecl GetClassPtr<CXenHair>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x74), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CXenHair::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1007d0b0  GetClassPtr<CXenTreeTrigger>  (76 bytes)
 * undefined GetClassPtr<CXenTreeTrigger>(int param_1)
 * called by: CXenTreeTrigger::TriggerCreate, xen_ttrigger
 */
void __cdecl GetClassPtr<CXenTreeTrigger>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CXenTreeTrigger::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1007d100  GetClassPtr<CXenTree>  (76 bytes)
 * undefined GetClassPtr<CXenTree>(int param_1)
 * called by: xen_tree
 */
void __cdecl GetClassPtr<CXenTree>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x78), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CXenTree::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1007d160  GetClassPtr<CXenHull>  (76 bytes)
 * undefined GetClassPtr<CXenHull>(int param_1)
 * called by: CXenHull::CreateHull, xen_hull
 */
void __cdecl GetClassPtr<CXenHull>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CXenHull::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1007d1c0  GetClassPtr<CXenSporeSmall>  (76 bytes)
 * undefined GetClassPtr<CXenSporeSmall>(int param_1)
 * called by: xen_spore_small
 */
void __cdecl GetClassPtr<CXenSporeSmall>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x74), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CXenSporeSmall::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1007d220  GetClassPtr<CXenSporeMed>  (76 bytes)
 * undefined GetClassPtr<CXenSporeMed>(int param_1)
 * called by: xen_spore_medium
 */
void __cdecl GetClassPtr<CXenSporeMed>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x74), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CXenSporeMed::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1007d270  GetClassPtr<CXenSporeLarge>  (76 bytes)
 * undefined GetClassPtr<CXenSporeLarge>(int param_1)
 * called by: xen_spore_large
 */
void __cdecl GetClassPtr<CXenSporeLarge>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x74), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CXenSporeLarge::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1007d310  __ftol  (39 bytes)
 * longlong __ftol(void)
 * called by: CAmbientGeneric::InitModulationParms, CAmbientGeneric::ToggleUse, CBaseAnimating::StudioFrameAdvance, CBaseButton::KeyValue, CBaseDoor::KeyValue, CBaseMonster::BestVisibleEnemy, CBasePlatTrain::KeyValue, CBasePlayer::AddPoints, CBasePlayer::CheckTimeBasedDamage, CBasePlayer::Killed, CBasePlayer::PickUpWeapon, CBasePlayer::PlayerUse, ... (144 total)
 */
/* Library Function - Single Match
    __ftol
   
   Library: Visual Studio */

longlong __ftol(void)

{
  float10 in_ST0;
  
  return (longlong)ROUND(in_ST0);
}

/* 1007d337  atof  (87 bytes)
 * float10 atof(undefined * param_1, byte.conflict * param_2)
 * called by: CBaseButton::KeyValue, CBaseDelay::KeyValue, CBaseDoor::KeyValue, CBasePlatTrain::KeyValue, CBaseToggle::KeyValue, CBaseTrigger::KeyValue, CBlood::KeyValue, CChangeLevel::KeyValue, CEnvSound::KeyValue, CEnvSpark::KeyValue, CFade::KeyValue, CFrictionModifier::KeyValue, ... (44 total)
 */
/* CRT */

float10 __thiscall atof(undefined *param_1,byte_conflict *param_2)

{
  uint uVar1;
  int iVar2;
  byte *this;
  undefined *puVar3;
  uint local_1c [6];
  
  while( true ) {
    if (DAT_100a8324 < 2) {
      uVar1 = (byte)PTR_DAT_100a8118[(uint)*param_2 * 2] & 8;
      param_1 = PTR_DAT_100a8118;
    }
    else {
      puVar3 = (undefined *)0x8;
      uVar1 = FUN_1007e1c6(param_1,(uint)*param_2,8);
      param_1 = puVar3;
    }
    if (uVar1 == 0) break;
    param_2 = param_2 + 1;
  }
  this = param_2;
  _strlen((char *)param_2);
  iVar2 = FUN_1007eef9(this,local_1c,param_2);
  return (float10)*(double *)(iVar2 + 0x10);
}

/* 1007d38e  atol  (139 bytes)
 * int atol(byte.conflict * param_1)
 * called by: atoi
 */
/* CRT */

int __thiscall atol(void *this,byte_conflict *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined *puVar6;
  
  while( true ) {
    if (DAT_100a8324 < 2) {
      uVar1 = (byte)PTR_DAT_100a8118[(uint)*param_1 * 2] & 8;
      this = PTR_DAT_100a8118;
    }
    else {
      puVar6 = (undefined *)0x8;
      uVar1 = FUN_1007e1c6(this,(uint)*param_1,8);
      this = puVar6;
    }
    if (uVar1 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar1 = (uint)*param_1;
  pbVar5 = param_1 + 1;
  if ((uVar1 == 0x2d) || (uVar4 = uVar1, uVar1 == 0x2b)) {
    uVar4 = (uint)*pbVar5;
    pbVar5 = param_1 + 2;
  }
  iVar3 = 0;
  while( true ) {
    if (DAT_100a8324 < 2) {
      uVar2 = (byte)PTR_DAT_100a8118[uVar4 * 2] & 4;
    }
    else {
      puVar6 = (undefined *)0x4;
      uVar2 = FUN_1007e1c6(this,uVar4,4);
      this = puVar6;
    }
    if (uVar2 == 0) break;
    iVar3 = (uVar4 - 0x30) + iVar3 * 10;
    uVar4 = (uint)*pbVar5;
    pbVar5 = pbVar5 + 1;
  }
  if (uVar1 == 0x2d) {
    iVar3 = -iVar3;
  }
  return iVar3;
}

/* 1007d419  atoi  (11 bytes)
 * undefined atoi(byte.conflict * param_1)
 * called by: CAmbientGeneric::KeyValue, CAutoTrigger::KeyValue, CBaseButton::KeyValue, CBaseDoor::KeyValue, CBaseTrigger::KeyValue, CBlood::KeyValue, CBreakable::KeyValue, CBubbling::KeyValue, CDeadHEV::KeyValue, CEnvExplosion::KeyValue, CEnvGlobal::KeyValue, CEnvShooter::KeyValue, ... (59 total)
 */
/* CRT */

void __thiscall atoi(void *this,byte_conflict *param_1)

{
  atol(this,param_1);
  return;
}

/* 1007d70c  __global_unwind2  (32 bytes)
 * undefined __global_unwind2(PVOID param_1)
 * called by: FUN_1008664c
 */
/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x1007d724,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}

/* 1007d74e  __local_unwind2  (104 bytes)
 * undefined __local_unwind2(int param_1, int param_2)
 * called by: FUN_1007f567, FUN_1008664c, FUN_10086709
 */
/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
   Studio 2003 Release */

void __cdecl __local_unwind2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvStack_1c;
  code *pcStack_18;
  undefined4 local_14;
  int iStack_10;
  
  iStack_10 = param_1;
  pcStack_18 = FUN_1007d72c;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_1007d7e2();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}

/* 1007d7b6  __abnormal_termination  (35 bytes)
 * int __abnormal_termination(void)
 * called by: FUN_1007f585
 */
/* Library Function - Single Match
    __abnormal_termination
   
   Library: Visual Studio */

int __cdecl __abnormal_termination(void)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(code **)((int)ExceptionList + 4) == FUN_1007d72c) &&
     (*(int *)((int)ExceptionList + 8) == *(int *)(*(int *)((int)ExceptionList + 0xc) + 0xc))) {
    iVar1 = 1;
  }
  return iVar1;
}

/* 1007d7d9  __NLG_Notify1  (9 bytes)
 * undefined __NLG_Notify1(undefined4 param_1)
 * called by: __CallSettingFrame@12
 */
/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_100a80a8 = param_1;
  DAT_100a80a4 = in_EAX;
  DAT_100a80ac = unaff_EBP;
  return;
}

/* 1007d7fa  sprintf  (82 bytes)
 * int sprintf(undefined1 * param_1, byte.conflict * param_2)
 * called by: BotSay, CBasePlayer::TakeFlag, CBotModuleChat::Think, CEnvLight::KeyValue, CEnvLight::Spawn, CHalfLifeMultiplay::CHalfLifeMultiplay, CHalfLifeMultiplay::ClientUserInfoChanged, CHalfLifeMultiplay::PlayerKilled, CHalfLifeTeamplay::ClientUserInfoChanged, CHalfLifeTeamplay::InitHUD, CItemBattery::MyTouch, CNodeGraph::FindPath, ... (29 total)
 */
int __cdecl sprintf(undefined1 *param_1,byte_conflict *param_2)

{
  int iVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_18 = 0x42;
  local_20 = 0x7fffffff;
  iVar1 = FUN_1007fbf7((int *)&local_24,param_2,(undefined4 *)&stack0x0000000c);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_1007fadf(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar1;
}

/* 1007d84c  sscanf  (52 bytes)
 * undefined sscanf(char * param_1, byte.conflict * param_2)
 * called by: BotLoadFiles, BotLoadSay, CEnvLight::KeyValue, CTSGameRules::TeamWin, CTSSharedEmitter::EmitterKeyValue, CTSSharedEmitter::ParticleKeyValue, CVoiceGameMgr::ClientCommand, PlayerIsCheating, adjust_weapon_value, pfnClientCommand, pfnClientPutInServer
 */
void __cdecl sscanf(char *param_1,byte_conflict *param_2)

{
  void *this;
  char *local_24;
  size_t local_20;
  char *local_1c;
  undefined4 local_18;
  
  local_18 = 0x49;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = _strlen(param_1);
  FUN_10080401(this,(int *)&local_24,param_2,(undefined4 *)&stack0x0000000c);
  return;
}

/* 1007d880  _strncmp  (56 bytes)
 * int _strncmp(char * _Str1, char * _Str2, size_t _MaxCount)
 * called by: CFuncTankControls::Think, CHalfLifeMultiplay::PlayerKilled, CTSAnimation::Animate, CTSAnimation::HandleCloseCombat, CTSGroundAmmo::KeyValue, Host_Say
 */
/* Library Function - Single Match
    _strncmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar5 = 0;
  sVar3 = _MaxCount;
  pcVar6 = _Str1;
  if (_MaxCount != 0) {
    do {
      if (sVar3 == 0) break;
      sVar3 = sVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar4 = _MaxCount - sVar3;
    do {
      pcVar6 = _Str2;
      pcVar7 = _Str1;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = _Str1 + 1;
      pcVar6 = _Str2 + 1;
      cVar2 = *_Str1;
      cVar1 = *_Str2;
      _Str2 = pcVar6;
      _Str1 = pcVar7;
    } while (cVar1 == cVar2);
    uVar5 = 0;
    if ((byte)pcVar6[-1] <= (byte)pcVar7[-1]) {
      if (pcVar6[-1] == pcVar7[-1]) {
        return 0;
      }
      uVar5 = 0xfffffffe;
    }
    uVar5 = ~uVar5;
  }
  return uVar5;
}

/* 1007d8c0  _strncat  (291 bytes)
 * char * _strncat(char * _Dest, char * _Source, size_t _Count)
 * called by: Host_Say
 */
/* Library Function - Single Match
    _strncat
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strncat(char *_Dest,char *_Source,size_t _Count)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar5 = (uint *)_Dest;
  if (_Count == 0) {
    return _Dest;
  }
  do {
    if (((uint)puVar5 & 3) == 0) goto LAB_1007d8ea;
    uVar4 = *puVar5;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_1007d91b;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar6 = (uint *)((int)puVar6 + 2);
      goto LAB_1007d92b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_1007d8ea:
    do {
      puVar6 = puVar5;
      puVar5 = puVar6 + 1;
    } while (((*puVar6 ^ 0xffffffff ^ *puVar6 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar6;
    if ((char)uVar4 == '\0') goto LAB_1007d92b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar6 = (uint *)((int)puVar6 + 1);
      goto LAB_1007d92b;
    }
  }
LAB_1007d91b:
  puVar6 = (uint *)((int)puVar5 + -1);
LAB_1007d92b:
  if (((uint)_Source & 3) == 0) {
    uVar3 = _Count >> 2;
  }
  else {
    do {
      bVar1 = (byte)*(uint *)_Source;
      uVar4 = (uint)bVar1;
      _Source = (char *)((int)_Source + 1);
      if (bVar1 == 0) goto LAB_1007d97a;
      *(byte *)puVar6 = bVar1;
      puVar6 = (uint *)((int)puVar6 + 1);
      _Count = _Count - 1;
      if (_Count == 0) goto LAB_1007d970;
    } while (((uint)_Source & 3) != 0);
    uVar3 = _Count >> 2;
  }
  do {
    if (uVar3 == 0) {
      for (uVar4 = _Count & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        uVar3 = *(uint *)_Source;
        _Source = (char *)((int)_Source + 1);
        *(byte *)puVar6 = (byte)uVar3;
        puVar6 = (uint *)((int)puVar6 + 1);
        if ((byte)uVar3 == 0) {
          return _Dest;
        }
      }
LAB_1007d970:
      *(byte *)puVar6 = 0;
      return _Dest;
    }
    uVar2 = *(uint *)_Source;
    uVar4 = *(uint *)_Source;
    _Source = (char *)((int)_Source + 4);
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar4 == '\0') {
LAB_1007d97a:
        *(byte *)puVar6 = (byte)uVar4;
        return _Dest;
      }
      if ((char)(uVar4 >> 8) == '\0') {
        *(short *)puVar6 = (short)uVar4;
        return _Dest;
      }
      if ((uVar4 & 0xff0000) == 0) {
        *(short *)puVar6 = (short)uVar4;
        *(byte *)((int)puVar6 + 2) = 0;
        return _Dest;
      }
      if ((uVar4 & 0xff000000) == 0) {
        *puVar6 = uVar4;
        return _Dest;
      }
    }
    *puVar6 = uVar4;
    puVar6 = puVar6 + 1;
    uVar3 = uVar3 - 1;
  } while( true );
}

/* 1007d9f0  strstr  (133 bytes)
 * uint * strstr(uint * param_1, char * param_2)
 * called by: BotLoadFiles, CTSGameRules::PlayerVote, Host_Say, adjust_weapon_value, pfnClientCommand
 */
uint * __cdecl strstr(uint *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  uint *puVar4;
  uint *puVar5;
  char *pcVar6;
  
  if (*param_2 == '\0') {
    return param_1;
  }
  if (param_2[1] == '\0') {
    puVar5 = FUN_10080ed6(param_1);
    return puVar5;
  }
  do {
    cVar3 = (char)*param_1;
    do {
      while (puVar5 = param_1, param_1 = (uint *)((int)puVar5 + 1), cVar3 != *param_2) {
        if (cVar3 == '\0') {
          return (uint *)0x0;
        }
        cVar3 = *(char *)param_1;
      }
      cVar3 = *(char *)param_1;
      pcVar6 = param_2;
      puVar4 = puVar5;
    } while (cVar3 != param_2[1]);
    do {
      if (pcVar6[2] == '\0') {
        return puVar5;
      }
      if (*(char *)((int)puVar4 + 2) != pcVar6[2]) break;
      pcVar1 = pcVar6 + 3;
      if (*pcVar1 == '\0') {
        return puVar5;
      }
      pcVar2 = (char *)((int)puVar4 + 3);
      pcVar6 = pcVar6 + 2;
      puVar4 = (uint *)((int)puVar4 + 2);
    } while (*pcVar1 == *pcVar2);
  } while( true );
}

/* 1007db4a  isspace  (46 bytes)
 * uint isspace(int param_1)
 * called by: BotLoadFiles, BotLoadSay, adjust_weapon_value
 */
uint __thiscall isspace(void *this,int param_1)

{
  uint uVar1;
  
  if (1 < DAT_100a8324) {
    uVar1 = FUN_1007e1c6(this,param_1,0x117);
    return uVar1;
  }
  return *(ushort *)(PTR_DAT_100a8118 + param_1 * 2) & 0x117;
}

/* 1007db80  _strncpy  (254 bytes)
 * char * _strncpy(char * _Dest, char * _Source, size_t _Count)
 * called by: CHalfLifeMultiplay::SendMOTDToClient, CHalfLifeTeamplay::CHalfLifeTeamplay, CHalfLifeTeamplay::ChangePlayerTeam, CHalfLifeTeamplay::RecountTeams, CTSBriefcase::KeyValue, FUN_1003f3b0, FUN_1004c8c0, FUN_1004fae0, FUN_10076a90, FUN_10085294, TSHudMessageAll, TSHudMessageOne, ... (14 total)
 */
/* Library Function - Single Match
    _strncpy
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x1007dbbe;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_1007dbfb;
        goto LAB_1007dc69;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x1007dc65:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_1007dc69:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_1007dbfb;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x1007dc65;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x1007dc65;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x1007dc65;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x1007dbbe:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_1007dbfb:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}

/* 1007dcb2  operator_new  (14 bytes)
 * void * operator_new(uint param_1)
 * called by: FUN_10022b40, FUN_10022bf0, InstallGameRules, ReloadMapCycleFile
 */
/* Library Function - Single Match
    void * __cdecl operator new(unsigned int)
   
   Library: Visual Studio 2003 Release */

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(param_1,1);
  return pvVar1;
}

/* 1007e30f  fclose  (49 bytes)
 * undefined4 fclose(FILE * param_1)
 * called by: BotLoadFiles, BotLoadSay, CNodeGraph::Load, CNodeGraph::Save, FUN_10082f6c, adjust_weapon_value, save_weapon_value
 */
undefined4 __cdecl fclose(FILE *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1->_flag & 0x40) == 0) {
    FUN_10082f80((uint)param_1);
    uVar1 = __fclose_lk(param_1);
    FUN_10082fd2((uint)param_1);
  }
  else {
    param_1->_flag = 0;
  }
  return uVar1;
}

/* 1007e340  __fclose_lk  (76 bytes)
 * undefined4 __fclose_lk(FILE * param_1)
 * called by: fclose
 */
/* Library Function - Single Match
    __fclose_lk
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __fclose_lk(FILE *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_1->_flag & 0x83) != 0) {
    uVar2 = FUN_1008315d((int *)param_1);
    __freebuf(param_1);
    iVar1 = FUN_10083024(param_1->_file);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else if (param_1->_tmpfname != (char *)0x0) {
      FUN_1007e869(param_1->_tmpfname);
      param_1->_tmpfname = (char *)0x0;
    }
  }
  param_1->_flag = 0;
  return uVar2;
}

/* 1007e38c  fgets  (98 bytes)
 * char * fgets(char * param_1, int param_2, undefined4 * param_3)
 * called by: BotLoadFiles, BotLoadSay, adjust_weapon_value
 */
char * __cdecl fgets(char *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  uint uVar2;
  char *pcVar3;
  
  if (param_2 < 1) {
    param_1 = (char *)0x0;
  }
  else {
    FUN_10082f80((uint)param_3);
    pcVar3 = param_1;
    do {
      param_2 = param_2 + -1;
      if (param_2 == 0) break;
      piVar1 = param_3 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        uVar2 = FUN_10083266(param_3);
      }
      else {
        uVar2 = (uint)*(byte *)*param_3;
        *param_3 = (byte *)*param_3 + 1;
      }
      if (uVar2 == 0xffffffff) {
        if (pcVar3 == param_1) {
          param_1 = (char *)0x0;
          goto LAB_1007e3e0;
        }
        break;
      }
      *pcVar3 = (char)uVar2;
      pcVar3 = pcVar3 + 1;
    } while ((char)uVar2 != '\n');
    *pcVar3 = '\0';
LAB_1007e3e0:
    FUN_10082fd2((uint)param_3);
  }
  return param_1;
}

/* 1007e41f  fopen  (19 bytes)
 * undefined fopen(LPCSTR param_1, char * param_2)
 * called by: BotLoadFiles, BotLoadSay, CNodeGraph::Load, CNodeGraph::Save, adjust_weapon_value, save_weapon_value
 */
void __cdecl fopen(LPCSTR param_1,char *param_2)

{
  FUN_1007e3ee(param_1,param_2,0x40);
  return;
}

/* 1007e432  fread  (47 bytes)
 * uint fread(char * param_1, uint param_2, uint param_3, int * param_4)
 * called by: CNodeGraph::Load
 */
uint __cdecl fread(char *param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  
  FUN_10082f80((uint)param_4);
  uVar1 = FUN_1007e461(param_1,param_2,param_3,param_4);
  FUN_10082fd2((uint)param_4);
  return uVar1;
}

/* 1007e549  fwrite  (47 bytes)
 * uint fwrite(char * param_1, uint param_2, uint param_3, int * param_4)
 * called by: CNodeGraph::Save, save_weapon_value
 */
uint __cdecl fwrite(char *param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  
  FUN_10082f80((uint)param_4);
  uVar1 = FUN_1007e578(param_1,param_2,param_3,param_4);
  FUN_10082fd2((uint)param_4);
  return uVar1;
}

/* 1007e98a  entry  (157 bytes)
 * int entry(undefined4 param_1, int param_2, undefined4 param_3)
 */
int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_102efc0c;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_1007e9d2;
    if ((DAT_102f1320 != (code *)0x0) &&
       (iVar2 = (*DAT_102f1320)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_1007e8b1(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_1007e9d2:
  iVar2 = FUN_10027ea0();
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_1007e8b1(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_1007e8b1(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_102f1320 != (code *)0x0) {
      iVar2 = (*DAT_102f1320)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}

/* 1007ea27  __amsg_exit  (48 bytes)
 * void __amsg_exit(int param_1)
 * called by: FUN_1007dd50, FUN_1007dfad, FUN_1007f921, FUN_10082ab6, FUN_10082ec4, FUN_10084c13, FUN_10084e23, FUN_10084edc, __fptrap
 */
/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_102efc18 == 1) || ((DAT_102efc18 == 0 && (DAT_102efc1c == 1)))) {
    FUN_1008525b();
  }
  FUN_10085294(param_1);
  (*(code *)PTR___exit_100a8330)(0xff);
  return;
}

