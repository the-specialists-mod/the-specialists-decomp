/* mp.dll - global_10001000 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10001000  Write_ak47  (842 bytes)
 * undefined Write_ak47(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_ak47(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x1e;
  param_1[8] = 6;
  *(undefined4 *)(param_1 + 0xc) = 3;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0xd;
  *(undefined4 *)(param_1 + 0x14) = 0x40200000;
  *(undefined4 *)(param_1 + 0x18) = 0x3da3d70a;
  *(undefined4 *)(param_1 + 0x1c) = 0x42100000;
  *(undefined4 *)(param_1 + 0x28) = 0x3b83126f;
  *(undefined4 *)(param_1 + 0x30) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x34) = 0x38d1b717;
  *(undefined4 *)(param_1 + 0x3c) = 0x20;
  *(undefined4 *)(param_1 + 0x40) = 0xd;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = &DAT_1009a114;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x84] = 4;
  uVar2 = 0xffffffff;
  param_1[0x85] = 3;
  pcVar4 = s_sprites_weapons_ak47_spr_1009a0f8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0x28;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd8) = 3000;
  *(undefined4 *)(param_1 + 0xe0) = 8;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_556_shell_mdl_1009a0e0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 1;
  pcVar4 = &DAT_1009a0cc;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_ak47_mdl_1009a0b8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a9398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_1009a0a4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_twohanded_1009a098;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 0x290) = 2;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x292) = 7;
  *(undefined2 *)(param_1 + 0x294) = 7;
  *(undefined2 *)(param_1 + 0x296) = 7;
  *(undefined2 *)(param_1 + 0x298) = 7;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25a) = 3;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x25e) = 3;
  *(undefined2 *)(param_1 + 0x260) = 5;
  *(undefined2 *)(param_1 + 0x28c) = 4;
  *(undefined2 *)(param_1 + 0x28e) = 8;
  *(undefined2 *)(param_1 + 0x29a) = 6;
  pcVar4 = s_weapons_ak47_fire_wav_1009a080;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a9398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x358) = 8;
  param_1[0x348] = 6;
  *(undefined4 *)(param_1 + 0x34c) = 0x15;
  param_1[0x350] = 1;
  *(undefined4 *)(param_1 + 0x354) = 0x20;
  return;
}

/* 10001360  Write_aug  (792 bytes)
 * undefined Write_aug(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_aug(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x1e;
  param_1[8] = 4;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x10) = 0x23;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0x4019999a;
  *(undefined4 *)(param_1 + 0x18) = 0x3dbc6a7f;
  *(undefined4 *)(param_1 + 0x1c) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x28) = 0x3be56042;
  *(undefined4 *)(param_1 + 0x30) = 0x40000000;
  *(undefined4 *)(param_1 + 0x34) = 0x3c4ccccd;
  *(undefined4 *)(param_1 + 0x3c) = 0x28;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = s_STEYR_AUG_1009a1c4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 4;
  param_1[0x85] = 4;
  pcVar4 = s_sprites_weapons_aug_spr_1009a1ac;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0x1e;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd8) = 5000;
  *(undefined4 *)(param_1 + 0xe0) = 0xb;
  *(undefined4 *)(param_1 + 0xe4) = 8;
  pcVar4 = s_models_556_shell_mdl_1009a0e0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  pcVar4 = s_models_v_aug_mdl_1009a198;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_aug_mdl_1009a184;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_aug_sil_mdl_1009a16c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_aug_mdl_1009a158;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_twohanded_1009a098;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 600) = 2;
  *(undefined2 *)(param_1 + 0x25a) = 2;
  *(undefined2 *)(param_1 + 0x25c) = 2;
  *(undefined2 *)(param_1 + 0x25e) = 2;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 3;
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28a) = 4;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_aug_aug_fire_wav_1009a13c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_aug_aug_fire_sil_wav_1009a11c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x350] = 1;
  param_1[0x348] = 6;
  *(undefined4 *)(param_1 + 0x34c) = 0x12;
  *(undefined4 *)(param_1 + 0x354) = 0x20;
  *(undefined4 *)(param_1 + 0x358) = 8;
  return;
}

/* 10001680  Write_barrett  (801 bytes)
 * undefined Write_barrett(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_barrett(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 5;
  param_1[8] = 8;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x10) = 0x46;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x12;
  *(undefined4 *)(param_1 + 0x14) = 0x40000000;
  *(undefined4 *)(param_1 + 0x18) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x1c) = 0x43520000;
  *(undefined4 *)(param_1 + 0x28) = 0x3a83126f;
  *(undefined4 *)(param_1 + 0x30) = 0x41200000;
  *(undefined4 *)(param_1 + 0x34) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x3c) = 0x20;
  *(undefined4 *)(param_1 + 0x40) = 8;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = s_Barrett_M82A1_1009a240;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 4;
  param_1[0x85] = 5;
  pcVar4 = s_sprites_weapons_m82_spr_1009a228;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0x46;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0xd8) = 9000;
  *(undefined4 *)(param_1 + 0xe0) = 10;
  *(undefined4 *)(param_1 + 0xe4) = 8;
  pcVar4 = s_models_556_shell_mdl_1009a0e0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  pcVar4 = s_models_v_m82_mdl_1009a214;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_m82_mdl_1009a200;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a9398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_m82_mdl_1009a1ec;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_twohanded_1009a098;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25c) = 4;
  *(undefined2 *)(param_1 + 0x25e) = 3;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28a) = 5;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_barrett_fire_wav_1009a1d0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a9398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x348] = 7;
  *(undefined4 *)(param_1 + 0x34c) = 0x28;
  param_1[0x350] = 2;
  *(undefined4 *)(param_1 + 0x354) = 0x30;
  *(undefined4 *)(param_1 + 0x358) = 0x10;
  return;
}

/* 100019b0  Write_benellim3  (811 bytes)
 * undefined Write_benellim3(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_benellim3(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 7;
  param_1[8] = 3;
  *(undefined4 *)(param_1 + 0xc) = 10;
  *(undefined4 *)(param_1 + 0x10) = 0x23;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 4;
  *(undefined4 *)(param_1 + 0x14) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x18) = 0x3e666666;
  *(undefined4 *)(param_1 + 0x1c) = 0x41480000;
  *(undefined4 *)(param_1 + 0x28) = 0x3d23d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x41200000;
  *(undefined4 *)(param_1 + 0x3c) = 0x28;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  uVar2 = 0xffffffff;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 8;
  *(undefined4 *)(param_1 + 0x20) = 1;
  pcVar4 = s_Benelli_M3_1009a2e8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 4;
  param_1[0x85] = 1;
  pcVar4 = s_sprites_weapons_m3_spr_1009a2d0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0x28;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd8) = 3000;
  *(undefined4 *)(param_1 + 0xe0) = 0xe;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_shotgun_shell_blue_mdl_1009a2b0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  *(undefined2 *)(param_1 + 300) = 2;
  *(undefined2 *)(param_1 + 0x12e) = 1;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 2;
  pcVar4 = s_models_v_m3_mdl_1009a2a0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_m3_mdl_1009a290;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a9398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_m3_mdl_1009a280;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_twohanded_1009a098;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x262) = 2;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x256) = 5;
  *(undefined2 *)(param_1 + 0x264) = 3;
  *(undefined2 *)(param_1 + 0x266) = 4;
  *(undefined2 *)(param_1 + 0x268) = 6;
  *(undefined2 *)(param_1 + 0x26a) = 7;
  *(undefined2 *)(param_1 + 0x26c) = 8;
  *(undefined2 *)(param_1 + 0x26e) = 9;
  *(undefined2 *)(param_1 + 0x28a) = 10;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_m3_m3_fire_wav_1009a268;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_m3_m3_pump_wav_1009a250;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x358) = 10;
  param_1[0x350] = 0;
  param_1[0x348] = 1;
  *(undefined4 *)(param_1 + 0x34c) = 0x1c;
  *(undefined4 *)(param_1 + 0x354) = 0x20;
  return;
}

/* 10001ce0  Write_beretta  (770 bytes)
 * undefined Write_beretta(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_beretta(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0xf;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 8;
  *(undefined4 *)(param_1 + 0xcc) = 2;
  param_1[0x348] = 8;
  *(undefined4 *)(param_1 + 0x14) = 0x3f99999a;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x41e80000;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0x3c75c28f;
  *(undefined4 *)(param_1 + 0x30) = 0x40400000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = s_Beretta_92F_1009a3d4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 2;
  param_1[0x85] = 9;
  pcVar4 = s_sprites_weapons_beretta_spr_1009a3b8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 10;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 900;
  *(undefined4 *)(param_1 + 0xe0) = 7;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_9mm_shell_mdl_1009a3a0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  *(undefined2 *)(param_1 + 300) = 2;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 2;
  pcVar4 = s_models_v_beretta_mdl_1009a388;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_beretta_mdl_1009a370;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_beretta_sil_mdl_1009a354;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_berettas_mdl_1009a33c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_onehanded_1009a330;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 600) = 1;
  *(undefined2 *)(param_1 + 0x25c) = 1;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 5;
  *(undefined2 *)(param_1 + 0x256) = 4;
  *(undefined2 *)(param_1 + 0x25a) = 2;
  *(undefined2 *)(param_1 + 0x25e) = 3;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_beretta_fire_wav_1009a314;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_beretta_fire_sil_wav_1009a2f4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x34c) = 6;
  *(undefined4 *)(param_1 + 0x354) = 0x12;
  *(undefined4 *)(param_1 + 0x358) = 5;
  return;
}

/* 10001ff0  Write_beretta_akimbo  (929 bytes)
 * undefined Write_beretta_akimbo(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_beretta_akimbo(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x1e;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0xc) = 0x12;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 2;
  param_1[0x348] = 4;
  *(undefined4 *)(param_1 + 0x14) = 0x4019999a;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x41e80000;
  *(undefined4 *)(param_1 + 0x28) = 0x3c8b4396;
  *(undefined4 *)(param_1 + 0x30) = 0x40400000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = s_Akimbo_Berettas_1009a454;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x84] = 5;
  uVar2 = 0xffffffff;
  param_1[0x85] = 1;
  pcVar4 = s_sprites_weapons_berettas_spr_1009a434;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0xd0] = 10;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 900;
  *(undefined4 *)(param_1 + 0xe0) = 7;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_9mm_shell_mdl_1009a3a0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 300) = 2;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 2;
  pcVar4 = s_models_v_berettas_mdl_1009a41c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_berettas_mdl_1009a404;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_berettas_sil_mdl_1009a3e8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_berettas_mdl_1009a33c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_1009a3e0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 600) = 0x1a;
  *(undefined2 *)(param_1 + 0x25a) = 0x1a;
  *(undefined2 *)(param_1 + 0x25c) = 0x1a;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 0x290) = 2;
  *(undefined2 *)(param_1 + 0x28c) = 0xd;
  *(undefined2 *)(param_1 + 0x292) = 0xd;
  *(undefined2 *)(param_1 + 0x294) = 0xd;
  *(undefined2 *)(param_1 + 0x296) = 0xd;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x27e) = 3;
  *(undefined2 *)(param_1 + 0x282) = 4;
  *(undefined2 *)(param_1 + 0x280) = 5;
  *(undefined2 *)(param_1 + 0x284) = 6;
  *(undefined2 *)(param_1 + 0x286) = 7;
  *(undefined2 *)(param_1 + 0x288) = 8;
  *(undefined2 *)(param_1 + 0x260) = 0xe;
  *(undefined2 *)(param_1 + 0x28e) = 0x1c;
  *(undefined2 *)(param_1 + 0x2b8) = 0x10;
  *(undefined2 *)(param_1 + 700) = 0x11;
  *(undefined2 *)(param_1 + 0x2ba) = 0x12;
  *(undefined2 *)(param_1 + 0x2be) = 0x13;
  *(undefined2 *)(param_1 + 0x2c0) = 0x14;
  *(undefined2 *)(param_1 + 0x2c2) = 0x15;
  *(undefined2 *)(param_1 + 0x29a) = 0xf;
  pcVar4 = s_weapons_beretta_fire_wav_1009a314;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_beretta_fire_sil_wav_1009a2f4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x354) = 0x12;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x34c) = 6;
  *(undefined4 *)(param_1 + 0x358) = 5;
  return;
}

/* 100023a0  Write_bull  (776 bytes)
 * undefined Write_bull(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_bull(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 5;
  param_1[8] = 0xb;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x1f;
  *(undefined4 *)(param_1 + 0x14) = 0x40000000;
  *(undefined4 *)(param_1 + 0x18) = 0x3e19999a;
  *(undefined4 *)(param_1 + 0x1c) = 0x42aa0000;
  *(undefined4 *)(param_1 + 0x28) = 0x3bf5c28f;
  *(undefined4 *)(param_1 + 0x30) = 0x41900000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x28;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = s_Raging_Bull_1009a4d4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 2;
  param_1[0x85] = 7;
  pcVar4 = s_sprites_weapons_bull_spr_1009a4b8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0xf;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x834;
  *(undefined4 *)(param_1 + 0xe0) = 10;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = &DAT_100a9398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 1;
  pcVar4 = s_models_v_bull_mdl_1009a4a4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_bull_mdl_1009a490;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a9398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_bull_mdl_1009a47c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_onehanded_1009a330;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x25a) = 2;
  *(undefined2 *)(param_1 + 0x25e) = 2;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 4;
  *(undefined2 *)(param_1 + 0x256) = 3;
  *(undefined2 *)(param_1 + 600) = 1;
  *(undefined2 *)(param_1 + 0x25c) = 1;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_bull_fire01_wav_1009a464;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a9398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x350] = 0;
  param_1[0x348] = 8;
  *(undefined4 *)(param_1 + 0x34c) = 6;
  *(undefined4 *)(param_1 + 0x354) = 0x14;
  *(undefined4 *)(param_1 + 0x358) = 8;
  return;
}

/* 100026b0  Write_desert  (874 bytes)
 * undefined Write_desert(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_desert(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 7;
  param_1[8] = 5;
  *(undefined4 *)(param_1 + 0xc) = 2;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0x19;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0xc;
  *(undefined4 *)(param_1 + 0x14) = 0x40066666;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x425c0000;
  *(undefined4 *)(param_1 + 0x28) = 0x3c75c28f;
  *(undefined4 *)(param_1 + 0x30) = 0x41000000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x3c;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = s_Desert_Eagle_1009a584;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x84] = 2;
  uVar2 = 0xffffffff;
  param_1[0x85] = 3;
  pcVar4 = s_sprites_weapons_desert_spr_1009a568;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0xd0] = 0xf;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x41a;
  *(undefined4 *)(param_1 + 0xe0) = 0xb;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_9mm_shell_mdl_1009a3a0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 2;
  pcVar4 = s_models_v_desert_mdl_1009a554;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_desert_mdl_1009a540;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_desert_sil_mdl_1009a528;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_desert_mdl_1009a514;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_onehanded_1009a330;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x292) = 7;
  *(undefined2 *)(param_1 + 0x294) = 7;
  *(undefined2 *)(param_1 + 0x296) = 7;
  *(undefined2 *)(param_1 + 0x28a) = 0xb;
  *(undefined2 *)(param_1 + 0x2c4) = 0xb;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25e) = 5;
  *(undefined2 *)(param_1 + 0x260) = 9;
  *(undefined2 *)(param_1 + 0x28c) = 6;
  *(undefined2 *)(param_1 + 0x28e) = 0xc;
  *(undefined2 *)(param_1 + 0x290) = 0;
  *(undefined2 *)(param_1 + 0x298) = 8;
  *(undefined2 *)(param_1 + 0x29a) = 10;
  pcVar4 = s_weapons_deagle_fire_wav_1009a4fc;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_deagle_fire_sil_wav_1009a4e0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x358) = 8;
  param_1[0x350] = 0;
  param_1[0x348] = 8;
  *(undefined4 *)(param_1 + 0x34c) = 6;
  *(undefined4 *)(param_1 + 0x354) = 0x14;
  return;
}

/* 10002a20  Write_fnh  (768 bytes)
 * undefined Write_fnh(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_fnh(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x14;
  param_1[8] = 7;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0x1e;
  *(undefined4 *)(param_1 + 0xcc) = 0xe;
  *(undefined4 *)(param_1 + 0x14) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x41a80000;
  *(undefined4 *)(param_1 + 0x28) = 0x3bf5c28f;
  *(undefined4 *)(param_1 + 0x30) = 0x3fc00000;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = s_Five_seveN_1009a6a8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 2;
  param_1[0x85] = 4;
  pcVar4 = s_sprites_weapons_fnh_spr_1009a690;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 10;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x4e2;
  *(undefined4 *)(param_1 + 0xe0) = 7;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_56_shell_mdl_1009a67c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 1;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  *(undefined2 *)(param_1 + 300) = 2;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 2;
  pcVar4 = s_models_v_fnh_mdl_1009a668;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_fnh_mdl_1009a654;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_fnh_sil_mdl_1009a63c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_fnh_mdl_1009a628;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_onehanded_1009a330;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25a) = 3;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 0x25e) = 4;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_fnh_fnh_fire_wav_1009a60c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_fnh_fnh_fire_sil_wav_1009a5ec;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x350] = 0;
  param_1[0x348] = 8;
  *(undefined4 *)(param_1 + 0x34c) = 6;
  *(undefined4 *)(param_1 + 0x354) = 0x12;
  *(undefined4 *)(param_1 + 0x358) = 5;
  return;
}

/* 10002d20  Write_fnhakimbo  (810 bytes)
 * undefined Write_fnhakimbo(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_fnhakimbo(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x28;
  param_1[8] = 7;
  *(undefined4 *)(param_1 + 0xc) = 0x12;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0xe;
  param_1[0x348] = 4;
  *(undefined4 *)(param_1 + 0x14) = 0x40400000;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x41a80000;
  *(undefined4 *)(param_1 + 0x28) = 0x3c4ccccd;
  *(undefined4 *)(param_1 + 0x30) = 0x40200000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = s_Akimbo_Five_seveN_1009a720;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 5;
  param_1[0x85] = 5;
  pcVar4 = s_sprites_weapons_fnh_akimbo_spr_1009a700;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 10;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x4e2;
  *(undefined4 *)(param_1 + 0xe0) = 7;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_56_shell_mdl_1009a67c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 1;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  *(undefined2 *)(param_1 + 300) = 2;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 2;
  pcVar4 = s_models_v_fnh_akimbo_mdl_1009a6e8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_fnh_akimbo_mdl_1009a6d0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_fnh_akimbo_sil_mdl_1009a6b4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_fnh_mdl_1009a628;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_1009a3e0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x27e) = 3;
  *(undefined2 *)(param_1 + 0x280) = 3;
  *(undefined2 *)(param_1 + 0x286) = 3;
  *(undefined2 *)(param_1 + 600) = 4;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25c) = 4;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 5;
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined2 *)(param_1 + 0x282) = 2;
  *(undefined2 *)(param_1 + 0x284) = 2;
  *(undefined2 *)(param_1 + 0x288) = 2;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_fnh_fnh_fire_wav_1009a60c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_fnh_fnh_fire_sil_wav_1009a5ec;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x34c) = 6;
  *(undefined4 *)(param_1 + 0x354) = 0x12;
  *(undefined4 *)(param_1 + 0x358) = 5;
  return;
}

/* 10003050  Write_glock18  (767 bytes)
 * undefined Write_glock18(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_glock18(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x11;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0xc) = 3;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 1;
  *(undefined4 *)(param_1 + 0x14) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x18) = 0x3d5d2f1b;
  *(undefined4 *)(param_1 + 0x1c) = 0x41c00000;
  *(undefined4 *)(param_1 + 0x28) = 0x3cc49ba6;
  *(undefined4 *)(param_1 + 0x30) = 0x400ccccd;
  *(undefined4 *)(param_1 + 0x34) = 0x3c03126f;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = &DAT_1009a7f8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 2;
  param_1[0x85] = 1;
  pcVar4 = s_sprites_weapons_glock18_spr_1009a7dc;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 10;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x352;
  *(undefined4 *)(param_1 + 0xe0) = 7;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_9mm_shell_mdl_1009a3a0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  *(undefined2 *)(param_1 + 300) = 2;
  *(undefined2 *)(param_1 + 0x130) = 2;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  pcVar4 = s_models_v_glock18_mdl_1009a7c4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_glock18_mdl_1009a7ac;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_glock18_sil_mdl_1009a790;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_glock18_mdl_1009a778;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_onehanded_1009a330;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25e) = 5;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_glock_glock_fire_wav_1009a758;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_glock_glock_fire_sil_wav_1009a734;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x358) = 4;
  param_1[0x348] = 8;
  *(undefined4 *)(param_1 + 0x34c) = 6;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0x12;
  return;
}

/* 10003350  Write_glock22  (778 bytes)
 * undefined Write_glock22(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_glock22(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0xf;
  param_1[8] = 9;
  *(undefined4 *)(param_1 + 0xc) = 2;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x16;
  *(undefined4 *)(param_1 + 0x14) = 0x40000000;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x42240000;
  *(undefined4 *)(param_1 + 0x28) = 0x3ccccccd;
  *(undefined4 *)(param_1 + 0x30) = 0x40900000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = &DAT_1009a8d0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 2;
  param_1[0x85] = 5;
  pcVar4 = s_sprites_weapons_glock22_spr_1009a8b4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 10;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x514;
  *(undefined4 *)(param_1 + 0xe0) = 7;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_9mm_shell_mdl_1009a3a0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 300) = 2;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 2;
  pcVar4 = s_models_v_glock22_mdl_1009a89c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_glock22_mdl_1009a884;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_glock22_sil_mdl_1009a868;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_glock22_mdl_1009a850;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_onehanded_1009a330;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25e) = 5;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_glock22_glock22_fire_wav_1009a82c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_glock22_glock22_fire_sil_1009a804;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x358) = 5;
  param_1[0x350] = 0;
  param_1[0x348] = 8;
  *(undefined4 *)(param_1 + 0x34c) = 6;
  *(undefined4 *)(param_1 + 0x354) = 0x14;
  return;
}

/* 10003660  Write_gold  (718 bytes)
 * undefined Write_gold(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_gold(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x10;
  param_1[8] = 2;
  *(undefined4 *)(param_1 + 0xc) = 0x12;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0xffffffff;
  param_1[0x348] = 5;
  *(undefined4 *)(param_1 + 0x14) = 0x40133333;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x42140000;
  *(undefined4 *)(param_1 + 0x28) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = s_Golden_Colts_1009a950;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 5;
  param_1[0x85] = 4;
  pcVar4 = s_sprites_weapons_gold_spr_1009a934;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0x14;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0xa28;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_9mm_shell_mdl_1009a3a0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 0;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar4 = s_models_v_gold_mdl_1009a920;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_gold_mdl_1009a90c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_gold_mdl_1009a8f8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_1009a3e0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x27e) = 3;
  *(undefined2 *)(param_1 + 0x280) = 3;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 0x282) = 4;
  *(undefined2 *)(param_1 + 0x284) = 4;
  *(undefined2 *)(param_1 + 0x286) = 5;
  *(undefined2 *)(param_1 + 0x288) = 6;
  *(undefined2 *)(param_1 + 600) = 7;
  *(undefined2 *)(param_1 + 0x25a) = 7;
  *(undefined2 *)(param_1 + 0x25c) = 7;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_gold_gold_fire_wav_1009a8dc;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x34c) = 6;
  *(undefined4 *)(param_1 + 0x354) = 0x12;
  *(undefined4 *)(param_1 + 0x358) = 5;
  return;
}

/* 10003930  Write_katana  (696 bytes)
 * undefined Write_katana(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_katana(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 1;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x22;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x28) = 0x3f333333;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x42340000;
  param_1[0x38] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 8;
  pcVar4 = s_Katana_1009a9b8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 1;
  param_1[0x85] = 2;
  pcVar4 = s_sprites_weapons_katana_spr_1009a99c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 10;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0xb54;
  param_1[0xdc] = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar4 = s_models_v_katana_mdl_1009a988;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_katana_mdl_1009a974;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a9398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_katana_mdl_1009a960;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a9398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined2 *)(param_1 + 0x270) = 4;
  *(undefined2 *)(param_1 + 0x272) = 3;
  *(undefined2 *)(param_1 + 0x274) = 2;
  *(undefined2 *)(param_1 + 0x276) = 5;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = &DAT_100a9398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a9398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x34c) = 0;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0;
  *(undefined4 *)(param_1 + 0x358) = 0;
  param_1[0x348] = 10;
  return;
}

/* 10003eb0  Write_m16  (882 bytes)
 * undefined Write_m16(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_m16(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x12;
  param_1[8] = 4;
  *(undefined4 *)(param_1 + 0xc) = 6;
  *(undefined4 *)(param_1 + 0x10) = 0x23;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x1b;
  *(undefined4 *)(param_1 + 0x14) = 0x40333333;
  *(undefined4 *)(param_1 + 0x18) = 0x3d8f5c29;
  *(undefined4 *)(param_1 + 0x1c) = 0x42200000;
  *(undefined4 *)(param_1 + 0x28) = 0x3b449ba6;
  *(undefined4 *)(param_1 + 0x30) = 0x40900000;
  *(undefined4 *)(param_1 + 0x34) = 0x38d1b717;
  *(undefined4 *)(param_1 + 0x3c) = 0x20;
  *(undefined4 *)(param_1 + 0x40) = 8;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = &DAT_1009aa3c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x84] = 4;
  uVar2 = 0xffffffff;
  param_1[0x85] = 8;
  pcVar4 = s_sprites_weapons_m16_spr_1009aa24;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0xd0] = 0x28;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f666666;
  *(undefined4 *)(param_1 + 0xd8) = 0x9c4;
  *(undefined4 *)(param_1 + 0xe0) = 0xe;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_556_shell_mdl_1009a0e0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 1;
  pcVar4 = s_models_v_m16_mdl_1009aa10;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_m16_mdl_1009a9fc;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a9398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_m16_mdl_1009a9e8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_twohanded_1009a098;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x25e) = 4;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 0x290) = 2;
  *(undefined2 *)(param_1 + 0x292) = 10;
  *(undefined2 *)(param_1 + 0x294) = 0xb;
  *(undefined2 *)(param_1 + 0x296) = 10;
  *(undefined2 *)(param_1 + 0x298) = 0xb;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x260) = 8;
  *(undefined2 *)(param_1 + 0x28a) = 0xf;
  *(undefined2 *)(param_1 + 0x28c) = 7;
  *(undefined2 *)(param_1 + 0x28e) = 0xe;
  *(undefined2 *)(param_1 + 0x29a) = 9;
  *(undefined2 *)(param_1 + 0x2c4) = 0xf;
  pcVar4 = s_weapons_m16_fire_wav_1009a9d0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a9398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x358) = 8;
  param_1[0x350] = 1;
  param_1[0x348] = 6;
  *(undefined4 *)(param_1 + 0x34c) = 0x20;
  *(undefined4 *)(param_1 + 0x354) = 0x20;
  return;
}

/* 10004230  Write_m4  (887 bytes)
 * undefined Write_m4(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_m4(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x1e;
  param_1[8] = 4;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x10) = 0x23;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 5;
  *(undefined4 *)(param_1 + 0x14) = 0x40333333;
  *(undefined4 *)(param_1 + 0x18) = 0x3d8f5c29;
  *(undefined4 *)(param_1 + 0x1c) = 0x42080000;
  *(undefined4 *)(param_1 + 0x28) = 0x3bc49ba6;
  *(undefined4 *)(param_1 + 0x30) = 0x40800000;
  *(undefined4 *)(param_1 + 0x34) = 0x3b449ba6;
  *(undefined4 *)(param_1 + 0x3c) = 0x1a;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = &DAT_1009aad4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x84] = 4;
  uVar2 = 0xffffffff;
  param_1[0x85] = 2;
  pcVar4 = s_sprites_weapons_m4_spr_1009aabc;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0xd0] = 0x28;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd8) = 0x1194;
  *(undefined4 *)(param_1 + 0xe0) = 0xf;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_556_shell_mdl_1009a0e0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined2 *)(param_1 + 0x12a) = 4;
  *(undefined2 *)(param_1 + 300) = 2;
  *(undefined2 *)(param_1 + 0x12e) = 8;
  pcVar4 = s_models_v_m4_mdl_1009aaac;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_m4_mdl_1009aa9c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_m4_sil_mdl_1009aa88;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_m4_mdl_1009aa78;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_twohanded_1009a098;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x290) = 2;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25e) = 4;
  *(undefined2 *)(param_1 + 0x28a) = 0xf;
  *(undefined2 *)(param_1 + 0x294) = 0xb;
  *(undefined2 *)(param_1 + 0x298) = 0xb;
  *(undefined2 *)(param_1 + 0x2c4) = 0xf;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x260) = 8;
  *(undefined2 *)(param_1 + 0x28c) = 7;
  *(undefined2 *)(param_1 + 0x28e) = 0xe;
  *(undefined2 *)(param_1 + 0x292) = 10;
  *(undefined2 *)(param_1 + 0x296) = 10;
  *(undefined2 *)(param_1 + 0x29a) = 9;
  pcVar4 = s_weapons_m4_m4_fire_wav_1009aa60;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_m4_m4_fire_sil_wav_1009aa44;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x358) = 8;
  param_1[0x350] = 1;
  param_1[0x348] = 6;
  *(undefined4 *)(param_1 + 0x34c) = 0x17;
  *(undefined4 *)(param_1 + 0x354) = 0x20;
  return;
}

/* 100045b0  Write_m60  (780 bytes)
 * undefined Write_m60(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_m60(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 100;
  param_1[8] = 4;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0x32;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x20;
  *(undefined4 *)(param_1 + 0x14) = 0x40400000;
  *(undefined4 *)(param_1 + 0x18) = 0x3ddf3b64;
  *(undefined4 *)(param_1 + 0x1c) = 0x421c0000;
  *(undefined4 *)(param_1 + 0x28) = 0x3ca3d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x34) = 0x3c1374bc;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = &DAT_1009ab4c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 4;
  param_1[0x85] = 9;
  pcVar4 = s_sprites_weapons_m60_spr_1009ab34;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0x46;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd8) = 8000;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_556_shell_mdl_1009a0e0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  pcVar4 = s_models_v_m60_mdl_1009ab20;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_m60_mdl_1009ab0c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a9398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_m60_mdl_1009aaf8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_twohanded_1009a098;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x25a) = 3;
  *(undefined2 *)(param_1 + 600) = 2;
  *(undefined2 *)(param_1 + 0x25c) = 2;
  *(undefined2 *)(param_1 + 0x25e) = 3;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 4;
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28a) = 5;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_m60_m60_fire_wav_1009aadc;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a9398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x350] = 1;
  param_1[0x348] = 6;
  *(undefined4 *)(param_1 + 0x34c) = 0x11;
  *(undefined4 *)(param_1 + 0x354) = 0x20;
  *(undefined4 *)(param_1 + 0x358) = 6;
  return;
}

/* 100048c0  Write_m61  (671 bytes)
 * undefined Write_m61(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_m61(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 1;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x18;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  param_1[0x38] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 2;
  *(undefined4 *)(param_1 + 0x20) = 4;
  pcVar4 = s_M61_Grenade_1009aba8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 1;
  param_1[0x85] = 1;
  pcVar4 = s_sprites_weapons_m61_spr_1009ab90;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  uVar2 = 0xffffffff;
  param_1[0xd0] = 7;
  *(undefined4 *)(param_1 + 0xd8) = 1000;
  param_1[0xdc] = 1;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar4 = s_models_v_m61_mdl_1009ab7c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_m61_mdl_1009ab68;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a9398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_m61_mdl_1009ab54;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a9398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined2 *)(param_1 + 0x278) = 2;
  *(undefined2 *)(param_1 + 0x27a) = 3;
  *(undefined2 *)(param_1 + 0x27c) = 4;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = &DAT_100a9398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a9398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x34c) = 0;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0;
  *(undefined4 *)(param_1 + 0x358) = 0;
  param_1[0x348] = 2;
  return;
}

/* 10004b60  Write_mac10  (790 bytes)
 * undefined Write_mac10(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_mac10(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x19;
  param_1[8] = 2;
  *(undefined4 *)(param_1 + 0xc) = 7;
  *(undefined4 *)(param_1 + 0x10) = 0x1e;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x17;
  *(undefined4 *)(param_1 + 0x14) = 0x40200000;
  *(undefined4 *)(param_1 + 0x18) = 0x3dbc6a7f;
  *(undefined4 *)(param_1 + 0x1c) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x28) = 0x3ce56042;
  *(undefined4 *)(param_1 + 0x30) = 0x40800000;
  *(undefined4 *)(param_1 + 0x34) = 0x3b449ba6;
  *(undefined4 *)(param_1 + 0x3c) = 0x28;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = &DAT_1009ac5c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 3;
  param_1[0x85] = 6;
  pcVar4 = s_sprites_weapons_ump_spr_1009ac44;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0x1e;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f666666;
  *(undefined4 *)(param_1 + 0xd8) = 0x8fc;
  *(undefined4 *)(param_1 + 0xe0) = 0xf;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_9mm_shell_mdl_1009a3a0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 2;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 1;
  pcVar4 = s_models_v_ump_mdl_1009ac30;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_ump_mdl_1009ac1c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_ump_sil_mdl_1009ac04;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_ump_mdl_1009abf0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_twohanded_1009a098;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25e) = 3;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 2;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25c) = 5;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28a) = 6;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_ump_ump_fire_wav_1009abd4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_ump_ump_fire_sil_wav_1009abb4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x358) = 6;
  param_1[0x348] = 9;
  *(undefined4 *)(param_1 + 0x34c) = 0xf;
  param_1[0x350] = 2;
  *(undefined4 *)(param_1 + 0x354) = 0x1e;
  return;
}

/* 10004e80  Write_melee  (240 bytes)
 * undefined Write_melee(int param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_melee(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_1009ac74;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0x44);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_v_melee_mdl_1009ac60;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0x132);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined1 *)(param_1 + 0x84) = 1;
  *(undefined2 *)(param_1 + 0x254) = 4;
  *(undefined2 *)(param_1 + 600) = 2;
  *(undefined2 *)(param_1 + 0x25a) = 10;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x25e) = 5;
  *(undefined2 *)(param_1 + 0x260) = 9;
  *(undefined2 *)(param_1 + 0x262) = 6;
  *(undefined2 *)(param_1 + 0x264) = 5;
  *(undefined2 *)(param_1 + 0x266) = 8;
  *(undefined2 *)(param_1 + 0x268) = 7;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x85) = 6;
  return;
}

/* 10004f70  Write_mk23  (846 bytes)
 * undefined Write_mk23(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_mk23(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0xc;
  param_1[8] = 2;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 10;
  *(undefined4 *)(param_1 + 0xcc) = 9;
  *(undefined4 *)(param_1 + 0x14) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x42100000;
  *(undefined4 *)(param_1 + 0x28) = 0x3ca3d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x40800000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = &DAT_1009ad28;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x84] = 2;
  uVar2 = 0xffffffff;
  param_1[0x85] = 2;
  pcVar4 = s_sprites_weapons_mk23_spr_1009ad0c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 10;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 700;
  *(undefined4 *)(param_1 + 0xe0) = 7;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_9mm_shell_mdl_1009a3a0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 300) = 2;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 2;
  pcVar4 = s_models_v_mk23_mdl_1009acf8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_mk23_mdl_1009ace4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_mk23_sil_mdl_1009accc;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_mk23_mdl_1009acb8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_onehanded_1009a330;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x25a) = 2;
  *(undefined2 *)(param_1 + 600) = 1;
  *(undefined2 *)(param_1 + 0x25c) = 1;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 0xb;
  *(undefined2 *)(param_1 + 0x256) = 4;
  *(undefined2 *)(param_1 + 0x25e) = 3;
  *(undefined2 *)(param_1 + 0x260) = 9;
  *(undefined2 *)(param_1 + 0x28c) = 5;
  *(undefined2 *)(param_1 + 0x28e) = 0xc;
  *(undefined2 *)(param_1 + 0x290) = 0;
  *(undefined2 *)(param_1 + 0x292) = 6;
  *(undefined2 *)(param_1 + 0x294) = 7;
  *(undefined2 *)(param_1 + 0x296) = 6;
  *(undefined2 *)(param_1 + 0x298) = 8;
  *(undefined2 *)(param_1 + 0x29a) = 10;
  pcVar4 = s_weapons_mk23_mk23_fire_wav_1009ac9c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_mk23_mk23_fire_sil_wav_1009ac7c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x34c) = 6;
  param_1[0x350] = 0;
  param_1[0x348] = 8;
  *(undefined4 *)(param_1 + 0x354) = 0x12;
  *(undefined4 *)(param_1 + 0x358) = 5;
  return;
}

/* 100052c0  Write_mk23akimbo  (933 bytes)
 * undefined Write_mk23akimbo(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_mk23akimbo(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x18;
  param_1[8] = 2;
  *(undefined4 *)(param_1 + 0xc) = 0x12;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 9;
  param_1[0x348] = 4;
  *(undefined4 *)(param_1 + 0x14) = 0x40200000;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x42100000;
  *(undefined4 *)(param_1 + 0x28) = 0x3ca3d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x40800000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = &DAT_1009adac;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x84] = 5;
  uVar2 = 0xffffffff;
  param_1[0x85] = 2;
  pcVar4 = s_sprites_weapons_mk23_akimbo_spr_1009ad8c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0xd0] = 10;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 700;
  *(undefined4 *)(param_1 + 0xe0) = 7;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_9mm_shell_mdl_1009a3a0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 1;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  *(undefined2 *)(param_1 + 300) = 2;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 2;
  pcVar4 = s_models_v_mk23_akimbo_mdl_1009ad70;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_mk23_akimbo_mdl_1009ad54;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_mk23_akimbo_sil_mdl_1009ad34;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_mk23_mdl_1009acb8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_1009a3e0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x284) = 4;
  *(undefined2 *)(param_1 + 0x288) = 4;
  *(undefined2 *)(param_1 + 0x256) = 5;
  *(undefined2 *)(param_1 + 600) = 0xe;
  *(undefined2 *)(param_1 + 0x25a) = 0xe;
  *(undefined2 *)(param_1 + 0x25c) = 0xe;
  *(undefined2 *)(param_1 + 0x290) = 5;
  *(undefined2 *)(param_1 + 0x280) = 2;
  *(undefined2 *)(param_1 + 0x286) = 2;
  *(undefined2 *)(param_1 + 0x2ba) = 8;
  *(undefined2 *)(param_1 + 0x2be) = 10;
  *(undefined2 *)(param_1 + 0x2c0) = 8;
  *(undefined2 *)(param_1 + 0x2c2) = 10;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 0xd;
  *(undefined2 *)(param_1 + 0x27e) = 1;
  *(undefined2 *)(param_1 + 0x282) = 3;
  *(undefined2 *)(param_1 + 0x260) = 0xb;
  *(undefined2 *)(param_1 + 0x28c) = 6;
  *(undefined2 *)(param_1 + 0x28e) = 0x10;
  *(undefined2 *)(param_1 + 0x2b8) = 7;
  *(undefined2 *)(param_1 + 700) = 9;
  *(undefined2 *)(param_1 + 0x292) = 6;
  *(undefined2 *)(param_1 + 0x294) = 6;
  *(undefined2 *)(param_1 + 0x296) = 6;
  *(undefined2 *)(param_1 + 0x29a) = 0xc;
  pcVar4 = s_weapons_mk23_mk23_fire_wav_1009ac9c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_mk23_mk23_fire_sil_wav_1009ac7c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x34c) = 6;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0x12;
  *(undefined4 *)(param_1 + 0x358) = 5;
  return;
}

/* 10005670  Write_mossberg  (887 bytes)
 * undefined Write_mossberg(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_mossberg(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 8;
  param_1[8] = 3;
  *(undefined4 *)(param_1 + 0xc) = 8;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x1a;
  *(undefined4 *)(param_1 + 0x14) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x18) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x1c) = 0x41800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3d75c28f;
  *(undefined4 *)(param_1 + 0x30) = 0x41600000;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 8;
  *(undefined4 *)(param_1 + 0x20) = 1;
  pcVar4 = s_Mossberg_500_1009ae5c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x84] = 4;
  uVar2 = 0xffffffff;
  param_1[0x85] = 7;
  pcVar4 = s_sprites_weapons_mossberg_spr_1009ae3c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0xd0] = 0x28;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd8) = 0x9c4;
  *(undefined4 *)(param_1 + 0xe0) = 6;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_shotgun_shell_gold_mdl_1009ae1c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  *(undefined2 *)(param_1 + 300) = 1;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  pcVar4 = s_models_v_mossberg_mdl_1009ae04;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_mossberg_mdl_1009adec;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a9398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_mossberg_mdl_1009add4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_twohanded_1009a098;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x28c) = 3;
  *(undefined2 *)(param_1 + 0x28e) = 3;
  *(undefined2 *)(param_1 + 0x2a2) = 4;
  *(undefined2 *)(param_1 + 0x2a4) = 4;
  *(undefined2 *)(param_1 + 0x26c) = 2;
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x2a6) = 5;
  *(undefined2 *)(param_1 + 0x2a8) = 5;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 0;
  *(undefined2 *)(param_1 + 0x256) = 7;
  *(undefined2 *)(param_1 + 0x262) = 8;
  *(undefined2 *)(param_1 + 0x264) = 9;
  *(undefined2 *)(param_1 + 0x266) = 10;
  *(undefined2 *)(param_1 + 0x268) = 1;
  *(undefined2 *)(param_1 + 0x26a) = 1;
  *(undefined2 *)(param_1 + 0x260) = 0xb;
  *(undefined2 *)(param_1 + 0x290) = 7;
  *(undefined2 *)(param_1 + 0x29c) = 0xd;
  *(undefined2 *)(param_1 + 0x29e) = 0xe;
  *(undefined2 *)(param_1 + 0x2a0) = 0xf;
  *(undefined2 *)(param_1 + 0x29a) = 0xc;
  pcVar4 = s_weapons_mossberg_fire_wav_1009adb8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_m3_m3_pump_wav_1009a250;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x350] = 0;
  param_1[0x348] = 1;
  *(undefined4 *)(param_1 + 0x34c) = 0x11;
  *(undefined4 *)(param_1 + 0x354) = 0x20;
  *(undefined4 *)(param_1 + 0x358) = 10;
  return;
}

/* 100059f0  Write_mp5k  (856 bytes)
 * undefined Write_mp5k(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_mp5k(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x1e;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0xc) = 7;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 7;
  *(undefined4 *)(param_1 + 0x14) = 0x40133333;
  *(undefined4 *)(param_1 + 0x18) = 0x3d872b02;
  *(undefined4 *)(param_1 + 0x1c) = 0x41e00000;
  *(undefined4 *)(param_1 + 0x28) = 0x3ca3d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x40400000;
  *(undefined4 *)(param_1 + 0x34) = 0x3ba3d70a;
  *(undefined4 *)(param_1 + 0x3c) = 0x20;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = &DAT_1009af18;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x84] = 3;
  uVar2 = 0xffffffff;
  param_1[0x85] = 3;
  pcVar4 = s_sprites_weapons_mp5k_spr_1009aefc;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0x14;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x5dc;
  *(undefined4 *)(param_1 + 0xe0) = 0xf;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_9mm_shell_mdl_1009a3a0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 0x128) = 2;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 1;
  pcVar4 = s_models_v_mp5k_mdl_1009aee8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_mp5k_mdl_1009aed4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_mp5k_sil_mdl_1009aebc;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_mp5k_mdl_1009aea8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_twohanded_1009a098;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x28c) = 7;
  *(undefined2 *)(param_1 + 0x290) = 7;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25e) = 4;
  *(undefined2 *)(param_1 + 0x292) = 8;
  *(undefined2 *)(param_1 + 0x296) = 8;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 0x260) = 5;
  *(undefined2 *)(param_1 + 0x28e) = 10;
  *(undefined2 *)(param_1 + 0x294) = 9;
  *(undefined2 *)(param_1 + 0x298) = 9;
  *(undefined2 *)(param_1 + 0x29a) = 6;
  pcVar4 = s_weapons_mp5k_mp5k_fire_wav_1009ae8c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_mp5k_mp5k_fire_sil_wav_1009ae6c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x34c) = 6;
  param_1[0x348] = 9;
  param_1[0x350] = 2;
  *(undefined4 *)(param_1 + 0x354) = 0x16;
  *(undefined4 *)(param_1 + 0x358) = 5;
  return;
}

/* 10005d50  Write_mp5sd  (787 bytes)
 * undefined Write_mp5sd(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_mp5sd(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x1e;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0xc) = 7;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0x1e;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 6;
  *(undefined4 *)(param_1 + 0x14) = 0x40133333;
  *(undefined4 *)(param_1 + 0x18) = 0x3d978d50;
  *(undefined4 *)(param_1 + 0x1c) = 0x41900000;
  *(undefined4 *)(param_1 + 0x28) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x3fa00000;
  *(undefined4 *)(param_1 + 0x34) = 0x3bf5c28f;
  *(undefined4 *)(param_1 + 0x3c) = 0x20;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = &DAT_1009af98;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 3;
  param_1[0x85] = 2;
  pcVar4 = s_sprites_weapons_mp5sd_spr_1009af7c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0x19;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f666666;
  *(undefined4 *)(param_1 + 0xd8) = 0x9c4;
  *(undefined4 *)(param_1 + 0xe0) = 0xf;
  *(undefined4 *)(param_1 + 0xe4) = 1;
  pcVar4 = s_models_9mm_shell_mdl_1009a3a0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 1;
  pcVar4 = s_models_v_mp5sd_mdl_1009af68;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_mp5sd_mdl_1009af54;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_mp5sd_mdl_1009af54;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_mp5sd_mdl_1009af40;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_twohanded_1009a098;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 600) = 1;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x25e) = 3;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 5;
  *(undefined2 *)(param_1 + 0x256) = 4;
  *(undefined2 *)(param_1 + 0x25a) = 2;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28a) = 6;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_mp5sd_mp5sd_fire_wav_1009af20;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_mp5sd_mp5sd_fire_wav_1009af20;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x358) = 6;
  param_1[0x348] = 9;
  *(undefined4 *)(param_1 + 0x34c) = 0x10;
  param_1[0x350] = 2;
  *(undefined4 *)(param_1 + 0x354) = 0x12;
  return;
}

/* 10006070  Write_pdw  (778 bytes)
 * undefined Write_pdw(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_pdw(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x28;
  param_1[8] = 7;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x13;
  *(undefined4 *)(param_1 + 0x14) = 0x40200000;
  *(undefined4 *)(param_1 + 0x18) = 0x3d810625;
  *(undefined4 *)(param_1 + 0x1c) = 0x41800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x34) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x3c) = 0x28;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = &DAT_1009b040;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 3;
  param_1[0x85] = 5;
  pcVar4 = s_sprites_weapons_pdw_spr_1009b028;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0x19;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f666666;
  *(undefined4 *)(param_1 + 0xd8) = 0xaf0;
  *(undefined4 *)(param_1 + 0xe0) = 0xb;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_56_shell_mdl_1009a67c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 2;
  pcVar4 = s_models_v_pdw_mdl_1009b014;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_pdw_mdl_1009b000;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_pdw_sil_mdl_1009afe8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_pdw_mdl_1009afd4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_onehanded_1009a330;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25e) = 3;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25c) = 5;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_pdw_fire_wav_1009afbc;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_pdw_fire_sil_wav_1009afa0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x358) = 4;
  param_1[0x348] = 9;
  *(undefined4 *)(param_1 + 0x34c) = 0xd;
  param_1[0x350] = 2;
  *(undefined4 *)(param_1 + 0x354) = 0x10;
  return;
}

/* 10006380  Write_ruger  (766 bytes)
 * undefined Write_ruger(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_ruger(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x11;
  param_1[8] = 10;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x1c;
  *(undefined4 *)(param_1 + 0x14) = 0x3fa66666;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x41800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3ba3d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = &DAT_1009b0cc;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 2;
  param_1[0x85] = 6;
  pcVar4 = s_sprites_weapons_ruger_spr_1009b0b0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 5;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x5dc;
  *(undefined4 *)(param_1 + 0xe0) = 3;
  *(undefined4 *)(param_1 + 0xe4) = 1;
  pcVar4 = s_models_22_shell_mdl_1009b09c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  pcVar4 = s_models_v_ruger_mdl_1009b088;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_ruger_mdl_1009b074;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_ruger_mdl_1009b074;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_ruger_mdl_1009b060;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_onehanded_1009a330;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x25a) = 2;
  *(undefined2 *)(param_1 + 0x25e) = 2;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 4;
  *(undefined2 *)(param_1 + 0x256) = 3;
  *(undefined2 *)(param_1 + 600) = 1;
  *(undefined2 *)(param_1 + 0x25c) = 1;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_ruger_fire_wav_1009b048;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_ruger_fire_wav_1009b048;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x350] = 0;
  param_1[0x348] = 8;
  *(undefined4 *)(param_1 + 0x34c) = 7;
  *(undefined4 *)(param_1 + 0x354) = 0x12;
  *(undefined4 *)(param_1 + 0x358) = 5;
  return;
}

/* 10006680  Write_sawedoff  (886 bytes)
 * undefined Write_sawedoff(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_sawedoff(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 2;
  param_1[8] = 3;
  *(undefined4 *)(param_1 + 0xc) = 2;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0x32;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x21;
  *(undefined4 *)(param_1 + 0x14) = 0x3fd9999a;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x41b80000;
  *(undefined4 *)(param_1 + 0x28) = 0x3e051eb8;
  *(undefined4 *)(param_1 + 0x30) = 0x41180000;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 8;
  *(undefined4 *)(param_1 + 0x20) = 1;
  pcVar4 = s_Sawed_off_1009b15c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x84] = 4;
  uVar2 = 0xffffffff;
  param_1[0x85] = 10;
  pcVar4 = s_sprites_weapons_sawedoff_spr_1009b13c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0xd0] = 0x14;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x76c;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe0) = 2;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = &DAT_100a9398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 0;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  pcVar4 = s_models_v_sawedoff_mdl_1009b124;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_sawedoff_mdl_1009b10c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a9398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_sawedoff_mdl_1009b0f4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_twohanded_1009a098;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25e) = 4;
  *(undefined2 *)(param_1 + 0x28c) = 5;
  *(undefined2 *)(param_1 + 0x290) = 5;
  *(undefined2 *)(param_1 + 0x254) = 2;
  *(undefined2 *)(param_1 + 0x292) = 7;
  *(undefined2 *)(param_1 + 0x294) = 8;
  *(undefined2 *)(param_1 + 0x296) = 7;
  *(undefined2 *)(param_1 + 0x298) = 8;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x262) = 9;
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined2 *)(param_1 + 0x260) = 0xb;
  *(undefined2 *)(param_1 + 0x28a) = 0xd;
  *(undefined2 *)(param_1 + 0x28e) = 6;
  *(undefined2 *)(param_1 + 0x29c) = 10;
  *(undefined2 *)(param_1 + 0x29a) = 0xc;
  *(undefined2 *)(param_1 + 0x2c4) = 0xd;
  pcVar4 = s_weapons_sawedoff_fire_wav_1009b0d8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a9398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x358) = 0xb;
  param_1[0x350] = 0;
  param_1[0x348] = 8;
  *(undefined4 *)(param_1 + 0x34c) = 0x11;
  *(undefined4 *)(param_1 + 0x354) = 0x20;
  return;
}

/* 10006a00  Write_sealknife  (700 bytes)
 * undefined Write_sealknife(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_sealknife(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 1;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x23;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x1c) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x28) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  param_1[0x38] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 10;
  *(undefined4 *)(param_1 + 0x20) = 7;
  pcVar4 = s_Seal_Knife_1009b1d0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 1;
  param_1[0x85] = 4;
  pcVar4 = s_sprites_weapons_sealknife_spr_1009b1b0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  uVar2 = 0xffffffff;
  param_1[0xd0] = 1;
  *(undefined4 *)(param_1 + 0xd8) = 100;
  param_1[0xdc] = 1;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar4 = s_models_v_sealknife_mdl_1009b198;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_sealknife_mdl_1009b180;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a9398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_sealknife_mdl_1009b168;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a9398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined2 *)(param_1 + 0x270) = 2;
  *(undefined2 *)(param_1 + 0x272) = 3;
  *(undefined2 *)(param_1 + 0x274) = 4;
  *(undefined2 *)(param_1 + 0x27a) = 5;
  *(undefined2 *)(param_1 + 0x276) = 6;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a9398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a9398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x34c) = 0;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0;
  *(undefined4 *)(param_1 + 0x358) = 0;
  param_1[0x348] = 3;
  return;
}

/* 10006cc0  Write_skorpion_akimbo  (718 bytes)
 * undefined Write_skorpion_akimbo(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_skorpion_akimbo(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x28;
  param_1[8] = 0xc;
  *(undefined4 *)(param_1 + 0xc) = 0x21;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x11;
  param_1[0x348] = 4;
  *(undefined4 *)(param_1 + 0x14) = 0x40000000;
  *(undefined4 *)(param_1 + 0x18) = 0x3d8f5c29;
  *(undefined4 *)(param_1 + 0x1c) = 0x41800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3d0f5c29;
  *(undefined4 *)(param_1 + 0x30) = 0x3f0ccccd;
  *(undefined4 *)(param_1 + 0x34) = 0x3b23d70a;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = s_Akimbo_Skorpions_1009b268;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 5;
  param_1[0x85] = 6;
  pcVar4 = s_sprites_weapons_skorpion_akimbo__1009b244;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0xf;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x44c;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_22_shell_mdl_1009b09c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  pcVar4 = s_models_v_skorpion_ak_mdl_1009b228;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_skorpion_ak_mdl_1009b20c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_skorpion_mdl_1009b1f4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_1009a3e0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x254) = 2;
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25e) = 4;
  *(undefined2 *)(param_1 + 0x27e) = 6;
  *(undefined2 *)(param_1 + 0x282) = 5;
  *(undefined2 *)(param_1 + 0x280) = 6;
  *(undefined2 *)(param_1 + 0x284) = 5;
  *(undefined2 *)(param_1 + 0x286) = 6;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x288) = 5;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_tmp_fire_wav_1009b1dc;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x358) = 4;
  *(undefined4 *)(param_1 + 0x34c) = 5;
  param_1[0x350] = 2;
  *(undefined4 *)(param_1 + 0x354) = 0x10;
  return;
}

/* 10006f90  Write_spas12  (807 bytes)
 * undefined Write_spas12(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_spas12(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 8;
  param_1[8] = 3;
  *(undefined4 *)(param_1 + 0xc) = 10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x14;
  *(undefined4 *)(param_1 + 0x14) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x18) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x41400000;
  *(undefined4 *)(param_1 + 0x28) = 0x3da3d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x41200000;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 8;
  *(undefined4 *)(param_1 + 0x40) = 0;
  uVar2 = 0xffffffff;
  param_1[0x38] = 1;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x20) = 1;
  pcVar4 = &DAT_1009b330;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 4;
  param_1[0x85] = 6;
  pcVar4 = s_sprites_weapons_spas12_spr_1009b314;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0x1e;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd8) = 0x834;
  *(undefined4 *)(param_1 + 0xe0) = 6;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_shotgun_shell_mdl_1009b2f8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar4 = s_models_v_spas12_mdl_1009b2e4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_spas12_mdl_1009b2d0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a9398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_spas12_mdl_1009b2bc;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_twohanded_1009a098;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x256) = 5;
  *(undefined2 *)(param_1 + 0x262) = 2;
  *(undefined2 *)(param_1 + 0x264) = 3;
  *(undefined2 *)(param_1 + 0x266) = 4;
  *(undefined2 *)(param_1 + 0x268) = 6;
  *(undefined2 *)(param_1 + 0x26a) = 7;
  *(undefined2 *)(param_1 + 0x26c) = 8;
  *(undefined2 *)(param_1 + 0x26e) = 9;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_spas12_spas12_fire_wav_1009b29c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_spas12_spas12_pump_wav_1009b27c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x350] = 0;
  param_1[0x348] = 1;
  *(undefined4 *)(param_1 + 0x34c) = 0x17;
  *(undefined4 *)(param_1 + 0x354) = 0x20;
  *(undefined4 *)(param_1 + 0x358) = 10;
  return;
}

/* 100072c0  Write_contender  (782 bytes)
 * undefined Write_contender(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_contender(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 1;
  param_1[8] = 0xd;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x24;
  *(undefined4 *)(param_1 + 0x14) = 0x3faccccd;
  *(undefined4 *)(param_1 + 0x18) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x1c) = 0x42be0000;
  param_1[0x38] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x28) = 0x3a83126f;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x41400000;
  *(undefined4 *)(param_1 + 0x3c) = 0x1a;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = s_Contender_G2_1009b3bc;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 2;
  param_1[0x85] = 8;
  pcVar4 = s_sprites_weapons_contender_spr_1009b39c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0xf;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x5dc;
  *(undefined4 *)(param_1 + 0xe0) = 10;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = &DAT_100a9398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 2;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar4 = s_models_v_contender_mdl_1009b384;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_contender_mdl_1009b36c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a9398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_contender_mdl_1009b354;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_onehanded_1009a330;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25c) = 4;
  *(undefined2 *)(param_1 + 0x25e) = 3;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined2 *)(param_1 + 0x254) = 2;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_contender_fire_wav_1009b338;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a9398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x350] = 0;
  param_1[0x348] = 8;
  *(undefined4 *)(param_1 + 0x34c) = 0x17;
  *(undefined4 *)(param_1 + 0x354) = 0x20;
  *(undefined4 *)(param_1 + 0x358) = 10;
  return;
}

/* 100075d0  Write_skorpion  (714 bytes)
 * undefined Write_skorpion(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_skorpion(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x14;
  param_1[8] = 0xc;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0x25;
  *(undefined4 *)(param_1 + 0xcc) = 0x11;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3d8f5c29;
  *(undefined4 *)(param_1 + 0x1c) = 0x41800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3cf5c28f;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x34) = 0x3b23d70a;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = s_Skorpion_1009b438;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 3;
  param_1[0x85] = 4;
  pcVar4 = s_sprites_weapons_skorpion_spr_1009b418;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0xf;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x44c;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_22_shell_mdl_1009b09c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  pcVar4 = s_models_v_skorpion_mdl_1009b400;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_skorpion_mdl_1009b3e8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_skorpion_mdl_1009b1f4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_onehanded_1009a330;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 2;
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25c) = 5;
  *(undefined2 *)(param_1 + 0x25e) = 3;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_tmp_fire_wav_1009b1dc;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_tmp_fire_sil_wav_1009b3cc;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x348] = 9;
  *(undefined4 *)(param_1 + 0x34c) = 5;
  param_1[0x350] = 2;
  *(undefined4 *)(param_1 + 0x354) = 0x10;
  *(undefined4 *)(param_1 + 0x358) = 4;
  return;
}

/* 100078a0  Write_usas12  (793 bytes)
 * undefined Write_usas12(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_usas12(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x14;
  param_1[8] = 3;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0x32;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0xb;
  *(undefined4 *)(param_1 + 0x14) = 0x40400000;
  *(undefined4 *)(param_1 + 0x18) = 0x3e29fbe7;
  *(undefined4 *)(param_1 + 0x1c) = 0x40e00000;
  param_1[0x38] = 1;
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x28) = 0x3d8f5c29;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x40800000;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 8;
  pcVar4 = &DAT_1009b4b8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 4;
  param_1[0x85] = 0xb;
  pcVar4 = s_sprites_weapons_usas12_spr_1009b49c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0x28;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd8) = 0x13ec;
  *(undefined4 *)(param_1 + 0xe0) = 6;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_shotgun_shell_mdl_1009b2f8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  *(undefined2 *)(param_1 + 300) = 1;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar4 = s_models_v_usas_mdl_1009b488;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_usas_mdl_1009b474;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a9398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_usas_mdl_1009b460;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_twohanded_1009a098;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25a) = 3;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x25e) = 3;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28a) = 4;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_usas_usas_fire_wav_1009b444;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_100a9398;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x350] = 0;
  param_1[0x348] = 6;
  *(undefined4 *)(param_1 + 0x34c) = 0x1a;
  *(undefined4 *)(param_1 + 0x354) = 0x20;
  *(undefined4 *)(param_1 + 0x358) = 10;
  return;
}

/* 10007bc0  Write_uzi  (831 bytes)
 * undefined Write_uzi(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_uzi(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x20;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0x10;
  *(undefined4 *)(param_1 + 0xcc) = 3;
  *(undefined4 *)(param_1 + 0x14) = 0x400ccccd;
  *(undefined4 *)(param_1 + 0x18) = 0x3d75c28f;
  *(undefined4 *)(param_1 + 0x1c) = 0x41b00000;
  *(undefined4 *)(param_1 + 0x28) = 0x3ccccccd;
  *(undefined4 *)(param_1 + 0x30) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x34) = 0x3be56042;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = &DAT_1009b568;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x84] = 3;
  uVar2 = 0xffffffff;
  param_1[0x85] = 1;
  pcVar4 = s_sprites_weapons_uzi_spr_1009b550;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0x14;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x514;
  *(undefined4 *)(param_1 + 0xe0) = 1;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_9mm_shell_mdl_1009a3a0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 1;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  pcVar4 = s_models_v_uzi_mdl_1009b53c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_uzi_mdl_1009b528;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_uzi_sil_mdl_1009b510;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_uzi_mdl_1009b4fc;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_onehanded_1009a330;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x290) = 2;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x292) = 10;
  *(undefined2 *)(param_1 + 0x294) = 0xb;
  *(undefined2 *)(param_1 + 0x296) = 10;
  *(undefined2 *)(param_1 + 0x298) = 0xb;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25e) = 4;
  *(undefined2 *)(param_1 + 0x260) = 8;
  *(undefined2 *)(param_1 + 0x28c) = 7;
  *(undefined2 *)(param_1 + 0x28e) = 0xe;
  *(undefined2 *)(param_1 + 0x29a) = 9;
  pcVar4 = s_weapons_uzi_uzi_fire_wav_1009b4e0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_uzi_uzi_fire_sil_wav_1009b4c0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x348] = 9;
  *(undefined4 *)(param_1 + 0x34c) = 9;
  param_1[0x350] = 2;
  *(undefined4 *)(param_1 + 0x354) = 0x16;
  *(undefined4 *)(param_1 + 0x358) = 5;
  return;
}

/* 10007f00  Write_uzi_akimbo  (813 bytes)
 * undefined Write_uzi_akimbo(undefined1 * param_1)
 * called by: compile_weapons_info
 */
void __cdecl Write_uzi_akimbo(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x40;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0xc) = 0x21;
  uVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 3;
  param_1[0x348] = 4;
  *(undefined4 *)(param_1 + 0x14) = 0x40400000;
  *(undefined4 *)(param_1 + 0x18) = 0x3d75c28f;
  *(undefined4 *)(param_1 + 0x1c) = 0x41b00000;
  *(undefined4 *)(param_1 + 0x28) = 0x3cf5c28f;
  *(undefined4 *)(param_1 + 0x30) = 0x40000000;
  *(undefined4 *)(param_1 + 0x34) = 0x3bc49ba6;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar4 = s_Akimbo_Mini_Uzi_1009b5e0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0x84] = 5;
  param_1[0x85] = 3;
  pcVar4 = s_sprites_weapons_uzi_akimbo_spr_1009b5c0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x86;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  param_1[0xd0] = 0x14;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x514;
  *(undefined4 *)(param_1 + 0xe0) = 1;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar4 = s_models_9mm_shell_mdl_1009a3a0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0xe8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 1;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar4 = s_models_v_uzi_akimbo_mdl_1009b5a8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x132;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_uzi_akimbo_mdl_1009b590;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x172;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_p_uzi_akimbo_sil_mdl_1009b574;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1b2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_models_w_uzi_mdl_1009b4fc;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x1f2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_1009a3e0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x232;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined2 *)(param_1 + 600) = 0xc;
  *(undefined2 *)(param_1 + 0x25e) = 0xc;
  *(undefined2 *)(param_1 + 0x27e) = 0x18;
  *(undefined2 *)(param_1 + 0x282) = 0x19;
  *(undefined2 *)(param_1 + 0x280) = 0x18;
  *(undefined2 *)(param_1 + 0x284) = 0x19;
  *(undefined2 *)(param_1 + 0x286) = 0x18;
  *(undefined2 *)(param_1 + 0x288) = 0x19;
  uVar2 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 0xb;
  *(undefined2 *)(param_1 + 0x256) = 4;
  *(undefined2 *)(param_1 + 0x25a) = 0xd;
  *(undefined2 *)(param_1 + 0x25c) = 0xe;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar4 = s_weapons_uzi_uzi_fire_wav_1009b4e0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x2c6;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar4 = s_weapons_uzi_uzi_fire_sil_wav_1009b4c0;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1 + 0x306;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x34c) = 9;
  param_1[0x350] = 2;
  *(undefined4 *)(param_1 + 0x354) = 0x16;
  *(undefined4 *)(param_1 + 0x358) = 5;
  return;
}

/* 10008820  __vector_constructor_iterator  (42 bytes)
 * undefined __vector_constructor_iterator(undefined4 param_1, undefined4 param_2, int param_3, undefined * param_4)
 * called by: GetClassPtr<CBot>
 */
/* MSVC eh vector constructor iterator (array of member objects) */

void __vector_constructor_iterator
               (undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  if (-1 < param_3 + -1) {
    do {
      (*(code *)param_4)();
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

/* 10008850  Server_GetBlendingInterface  (77 bytes)
 * undefined4 Server_GetBlendingInterface(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 param_4, undefined4 param_5)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
Server_GetBlendingInterface
          (int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5
          )

{
                    /* 0x8850  166  Server_GetBlendingInterface */
  if (param_1 == 1) {
    *param_2 = &DAT_1009b938;
    _DAT_100a93b0 = *param_3;
    _DAT_100a93b4 = param_3[1];
    _DAT_100a93b8 = param_3[2];
    _DAT_100a93bc = param_3[3];
    _DAT_100a93a8 = param_4;
    _DAT_100a93a4 = param_5;
  }
  return 0;
}

/* 100088c0  ExtractBbox  (82 bytes)
 * undefined4 ExtractBbox(int param_1, int param_2, undefined4 * param_3, undefined4 * param_4)
 * called by: CBaseAnimating::ExtractBbox
 */
undefined4 __cdecl ExtractBbox(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0xa8) + param_1 + param_2 * 0xb0;
  *param_3 = *(undefined4 *)(iVar1 + 0x60);
  param_3[1] = *(undefined4 *)(iVar1 + 100);
  param_3[2] = *(undefined4 *)(iVar1 + 0x68);
  *param_4 = *(undefined4 *)(iVar1 + 0x6c);
  param_4[1] = *(undefined4 *)(iVar1 + 0x70);
  param_4[2] = *(undefined4 *)(iVar1 + 0x74);
  return 1;
}

/* 10008920  LookupActivity  (115 bytes)
 * int LookupActivity(int param_1, undefined4 param_2, int param_3)
 * called by: CBaseAnimating::LookupActivity
 */
int __cdecl LookupActivity(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar1 = param_1;
  if (param_1 != 0) {
    piVar4 = (int *)(param_1 + 0xa4);
    iVar2 = *(int *)(param_1 + 0xa8) + param_1;
    iVar3 = 0;
    iVar5 = 0;
    param_1 = -1;
    if (0 < *piVar4) {
      piVar4 = (int *)(iVar2 + 0x2c);
      do {
        if ((piVar4[-1] == param_3) &&
           ((iVar3 = iVar3 + *piVar4, iVar3 == 0 ||
            (iVar2 = (*g_engfuncs.pfnRandomLong)(0,iVar3 + -1), iVar2 < *piVar4)))) {
          param_1 = iVar5;
        }
        iVar5 = iVar5 + 1;
        piVar4 = piVar4 + 0x2c;
      } while (iVar5 < *(int *)(iVar1 + 0xa4));
    }
    return param_1;
  }
  return 0;
}

/* 10008a00  GetSequenceInfo  (184 bytes)
 * undefined GetSequenceInfo(int param_1, int param_2, float * param_3, float * param_4)
 * called by: CBaseAnimating::ResetSequenceInfo, CWeaponCycler::SecondaryAttack
 */
void __cdecl GetSequenceInfo(int param_1,int param_2,float *param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xa4) <= *(int *)(param_2 + 0x128)) {
      *param_3 = 0.0;
      *param_4 = 0.0;
      return;
    }
    iVar2 = *(int *)(param_2 + 0x128) * 0xb0 + *(int *)(param_1 + 0xa8) + param_1;
    if (1 < *(int *)(iVar2 + 0x38)) {
      *param_3 = (*(float *)(iVar2 + 0x20) * 256.0) / (float)(*(int *)(iVar2 + 0x38) + -1);
      fVar1 = SQRT(*(float *)(iVar2 + 0x54) * *(float *)(iVar2 + 0x54) +
                   *(float *)(iVar2 + 0x50) * *(float *)(iVar2 + 0x50) +
                   *(float *)(iVar2 + 0x4c) * *(float *)(iVar2 + 0x4c));
      *param_4 = fVar1;
      *param_4 = (fVar1 * *(float *)(iVar2 + 0x20)) / (float)(*(int *)(iVar2 + 0x38) + -1);
      return;
    }
    *param_3 = 256.0;
    *param_4 = 0.0;
  }
  return;
}

/* 10008ac0  GetSequenceFlags  (53 bytes)
 * undefined4 GetSequenceFlags(int param_1, int param_2)
 * called by: CBaseAnimating::GetSequenceFlags
 */
undefined4 __cdecl GetSequenceFlags(int param_1,int param_2)

{
  if ((param_1 != 0) && (*(int *)(param_2 + 0x128) < *(int *)(param_1 + 0xa4))) {
    return *(undefined4 *)
            (*(int *)(param_2 + 0x128) * 0xb0 + *(int *)(param_1 + 0xa8) + 0x24 + param_1);
  }
  return 0;
}

/* 10008b00  GetAnimationEvent  (329 bytes)
 * int GetAnimationEvent(int param_1, int param_2, undefined4 * param_3, float param_4, float param_5, int param_6)
 * called by: CBaseAnimating::DispatchAnimEvents
 */
int __cdecl
GetAnimationEvent(int param_1,int param_2,undefined4 *param_3,float param_4,float param_5,
                 int param_6)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  if (((param_1 != 0) && (*(int *)(param_2 + 0x128) < *(int *)(param_1 + 0xa4))) &&
     (param_3 != (undefined4 *)0x0)) {
    iVar4 = *(int *)(param_2 + 0x128) * 0xb0 + *(int *)(param_1 + 0xa8) + param_1;
    iVar1 = *(int *)(iVar4 + 0x30);
    iVar5 = *(int *)(iVar4 + 0x34) + param_1;
    if ((iVar1 != 0) && (param_6 <= iVar1)) {
      iVar2 = *(int *)(iVar4 + 0x38);
      if (iVar2 < 2) {
        param_4 = 0.0;
        param_5 = 1.0;
      }
      else {
        param_4 = param_4 * (float)(iVar2 + -1) * 0.00390625;
        param_5 = param_5 * (float)(iVar2 + -1) * 0.00390625;
      }
      if (param_6 < iVar1) {
        piVar6 = (int *)(iVar5 + param_6 * 0x4c);
        do {
          if ((piVar6[1] < 5000) &&
             (((fVar3 = (float)*piVar6, param_4 <= fVar3 && (fVar3 < param_5)) ||
              (((*(byte *)(iVar4 + 0x24) & 1) != 0 &&
               (((float)(iVar2 + -1) <= param_5 && (fVar3 < (param_5 - (float)iVar2) + 1.0)))))))) {
            *param_3 = *(undefined4 *)(iVar5 + 4 + param_6 * 0x4c);
            param_3[1] = iVar5 + param_6 * 0x4c + 0xc;
            return param_6 + 1;
          }
          param_6 = param_6 + 1;
          piVar6 = piVar6 + 0x13;
        } while (param_6 < iVar1);
      }
    }
  }
  return 0;
}

/* 10008c50  SetController  (366 bytes)
 * float10 SetController(int param_1, int param_2, int param_3, float param_4)
 * called by: CBaseAnimating::InitBoneControllers
 */
float10 __cdecl SetController(int param_1,int param_2,int param_3,float param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_1 == 0) {
    return (float10)param_4;
  }
  iVar3 = *(int *)(param_1 + 0x98) + param_1;
  iVar2 = *(int *)(param_1 + 0x94);
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      if (*(int *)(iVar3 + 0x14) == param_3) break;
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x18;
    } while (iVar1 < iVar2);
  }
  if (iVar1 < iVar2) {
    if ((*(byte *)(iVar3 + 4) & 0x38) != 0) {
      if (*(float *)(iVar3 + 0xc) < *(float *)(iVar3 + 8)) {
        param_4 = -param_4;
      }
      if (*(float *)(iVar3 + 8) + 359.0 < *(float *)(iVar3 + 0xc)) {
        if (param_4 <= 360.0) {
          if (param_4 < 0.0) {
            __ftol();
          }
        }
        else {
          __ftol();
        }
      }
    }
    lVar4 = __ftol();
    iVar2 = (int)lVar4;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (0xff < iVar2) {
      iVar2 = 0xff;
    }
    *(char *)(param_2 + 0x13c + param_3) = (char)iVar2;
    return ((float10)*(float *)(iVar3 + 0xc) - (float10)*(float *)(iVar3 + 8)) * (float10)iVar2 *
           (float10)0.00392156862745098 + (float10)*(float *)(iVar3 + 8);
  }
  return (float10)param_4;
}

/* 10008dc0  VecBModelOrigin  (103 bytes)
 * undefined VecBModelOrigin(float * param_1, int param_2)
 * called by: CBaseDoor::Spawn, CBaseEntity::TakeDamage, CBasePlayer::PlayerUse, CBreakable::Die, CBreakable::Spawn, CBubbling::FizzThink, CFuncRotating::HurtTouch, CPendulum::Touch, CRotDoor::Spawn
 */
void __cdecl VecBModelOrigin(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_2 + 0xf8);
  fVar2 = *(float *)(param_2 + 0xfc);
  fVar3 = *(float *)(param_2 + 200);
  fVar4 = *(float *)(param_2 + 0xcc);
  *param_1 = *(float *)(param_2 + 0xf4) * 0.5 + *(float *)(param_2 + 0xc4);
  param_1[1] = fVar1 * 0.5 + fVar3;
  param_1[2] = fVar2 * 0.5 + fVar4;
  return;
}

/* 10008e30  func_wall  (12 bytes)
 * undefined func_wall(int param_1)
 */
void __cdecl func_wall(int param_1)

{
                    /* 0x8e30  233  func_wall */
  GetClassPtr<CFuncWall>(param_1);
  return;
}

/* 10008f00  func_wall_toggle  (12 bytes)
 * undefined func_wall_toggle(int param_1)
 */
void __cdecl func_wall_toggle(int param_1)

{
                    /* 0x8f00  234  func_wall_toggle */
  GetClassPtr<CFuncWallToggle>(param_1);
  return;
}

/* 10008ff0  func_conveyor  (12 bytes)
 * undefined func_conveyor(int param_1)
 */
void __cdecl func_conveyor(int param_1)

{
                    /* 0x8ff0  207  func_conveyor */
  GetClassPtr<CFuncConveyor>(param_1);
  return;
}

/* 10009130  func_illusionary  (12 bytes)
 * undefined func_illusionary(int param_1)
 */
void __cdecl func_illusionary(int param_1)

{
                    /* 0x9130  213  func_illusionary */
  GetClassPtr<CFuncIllusionary>(param_1);
  return;
}

/* 10009220  func_monsterclip  (12 bytes)
 * undefined func_monsterclip(int param_1)
 */
void __cdecl func_monsterclip(int param_1)

{
                    /* 0x9220  215  func_monsterclip */
  GetClassPtr<CFuncMonsterClip>(param_1);
  return;
}

/* 100092d0  func_rotating  (12 bytes)
 * undefined func_rotating(int param_1)
 */
void __cdecl func_rotating(int param_1)

{
                    /* 0x92d0  222  func_rotating */
  GetClassPtr<CFuncRotating>(param_1);
  return;
}

/* 1000a090  func_pendulum  (12 bytes)
 * undefined func_pendulum(int param_1)
 */
void __cdecl func_pendulum(int param_1)

{
                    /* 0xa090  216  func_pendulum */
  GetClassPtr<CPendulum>(param_1);
  return;
}

/* 1000a890  GetClassPtr<CFuncWall>  (76 bytes)
 * undefined GetClassPtr<CFuncWall>(int param_1)
 * called by: func_wall
 */
void __cdecl GetClassPtr<CFuncWall>(int param_1)

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
    *puVar3 = &CFuncWall::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1000aaf0  GetClassPtr<CFuncWallToggle>  (76 bytes)
 * undefined GetClassPtr<CFuncWallToggle>(int param_1)
 * called by: func_wall_toggle
 */
void __cdecl GetClassPtr<CFuncWallToggle>(int param_1)

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
    *puVar3 = &CFuncWallToggle::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1000ab40  GetClassPtr<CFuncConveyor>  (76 bytes)
 * undefined GetClassPtr<CFuncConveyor>(int param_1)
 * called by: func_conveyor
 */
void __cdecl GetClassPtr<CFuncConveyor>(int param_1)

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
    *puVar3 = &CFuncConveyor::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1000ab90  GetClassPtr<CFuncIllusionary>  (79 bytes)
 * undefined GetClassPtr<CFuncIllusionary>(int param_1)
 * called by: func_illusionary
 */
void __cdecl GetClassPtr<CFuncIllusionary>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xf0), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CFuncIllusionary::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1000acb0  GetClassPtr<CFuncMonsterClip>  (76 bytes)
 * undefined GetClassPtr<CFuncMonsterClip>(int param_1)
 * called by: func_monsterclip
 */
void __cdecl GetClassPtr<CFuncMonsterClip>(int param_1)

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
    *puVar3 = &CFuncMonsterClip::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1000ad40  GetClassPtr<CFuncRotating>  (76 bytes)
 * undefined GetClassPtr<CFuncRotating>(int param_1)
 * called by: func_rotating
 */
void __cdecl GetClassPtr<CFuncRotating>(int param_1)

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
    *puVar3 = &CFuncRotating::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1000adb0  GetClassPtr<CPendulum>  (79 bytes)
 * undefined GetClassPtr<CPendulum>(int param_1)
 * called by: func_pendulum
 */
void __cdecl GetClassPtr<CPendulum>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x84), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CPendulum::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1000ae80  env_global  (12 bytes)
 * undefined env_global(int param_1)
 */
void __cdecl env_global(int param_1)

{
                    /* 0xae80  193  env_global */
  GetClassPtr<CEnvGlobal>(param_1);
  return;
}

/* 1000b0e0  multisource  (12 bytes)
 * undefined multisource(int param_1)
 */
void __cdecl multisource(int param_1)

{
                    /* 0xb0e0  277  multisource */
  GetClassPtr<CMultiSource>(param_1);
  return;
}

/* 1000bba0  func_button  (12 bytes)
 * undefined func_button(int param_1)
 */
void __cdecl func_button(int param_1)

{
                    /* 0xbba0  206  func_button */
  GetClassPtr<CBaseButton>(param_1);
  return;
}

/* 1000be30  ButtonSound  (136 bytes)
 * char * ButtonSound(undefined4 param_1)
 * called by: CBaseButton::Precache, CBaseButton::Spawn, CBaseDoor::Precache, CMomentaryRotButton::Spawn, CRotButton::Spawn
 */
char * __cdecl ButtonSound(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return s_common_null_wav_1009bfb8;
  case 1:
    return s_buttons_button1_wav_1009c664;
  case 2:
    return s_buttons_button2_wav_1009c650;
  case 3:
    return s_buttons_button3_wav_1009c63c;
  case 4:
    return s_buttons_button4_wav_1009c628;
  case 5:
    return s_buttons_button5_wav_1009c614;
  case 6:
    return s_buttons_button6_wav_1009c600;
  case 7:
    return s_buttons_button7_wav_1009c5ec;
  case 8:
    return s_buttons_button8_wav_1009c5d8;
  default:
    return s_buttons_button9_wav_1009c4dc;
  case 10:
    return s_buttons_button10_wav_1009c5c0;
  case 0xb:
    return s_buttons_button11_wav_1009c5a8;
  case 0xc:
    return s_buttons_latchlocked1_wav_1009c58c;
  case 0xd:
    return s_buttons_latchunlocked1_wav_1009c570;
  case 0xe:
    return s_buttons_lightswitch2_wav_1009c554;
  case 0x15:
    return s_buttons_lever1_wav_1009c540;
  case 0x16:
    return s_buttons_lever2_wav_1009c52c;
  case 0x17:
    return s_buttons_lever3_wav_1009c518;
  case 0x18:
    return s_buttons_lever4_wav_1009c504;
  case 0x19:
    return s_buttons_lever5_wav_1009c4f0;
  }
}

/* 1000bf20  DoSpark  (479 bytes)
 * undefined DoSpark(int param_1, float * param_2)
 * called by: CBaseButton::ButtonSpark, CEnvSpark::SparkThink
 */
void __cdecl DoSpark(int param_1,float *param_2)

{
  void *this;
  void *this_00;
  float10 fVar1;
  longlong lVar2;
  char *pcVar3;
  float local_3c;
  float local_38;
  float local_34;
  Vector local_30;
  float local_24;
  float local_20;
  float local_1c;
  Vector local_18;
  float local_c;
  float local_8;
  float local_4;
  
  local_3c = *(float *)(param_1 + 0xf4) * 0.5;
  local_38 = *(float *)(param_1 + 0xf8) * 0.5;
  local_34 = *(float *)(param_1 + 0xfc) * 0.5;
  Vector::Vector(&local_30,&local_3c);
  local_24 = local_30.x + *param_2;
  local_20 = local_30.y + param_2[1];
  local_1c = local_30.z + param_2[2];
  Vector::Vector(&local_18,&local_24);
  local_c = local_18.x;
  local_8 = local_18.y;
  local_4 = local_18.z;
  UTIL_Sparks(&local_c);
  fVar1 = (float10)(*g_engfuncs.pfnRandomFloat)(0.25,0.75);
  this = (void *)(float)(fVar1 * (float10)0.4);
  (*g_engfuncs.pfnRandomFloat)(0.0,1.0);
  lVar2 = __ftol();
  switch((int)lVar2) {
  case 0:
    EMIT_SOUND_DYN(*(void **)(param_1 + 0x208),*(void **)(param_1 + 0x208),2,
                   s_buttons_spark1_wav_1009c474,this,0x3f4ccccd,0);
    return;
  case 1:
    EMIT_SOUND_DYN(this_00,*(undefined4 *)(param_1 + 0x208),2,s_buttons_spark2_wav_1009c460,this,
                   0x3f4ccccd,0);
    return;
  case 2:
    pcVar3 = s_buttons_spark3_wav_1009c44c;
    break;
  case 3:
    EMIT_SOUND_DYN(*(void **)(param_1 + 0x208),*(void **)(param_1 + 0x208),2,
                   s_buttons_spark4_wav_1009c438,this,0x3f4ccccd,0);
    return;
  case 4:
    EMIT_SOUND_DYN(this_00,*(undefined4 *)(param_1 + 0x208),2,s_buttons_spark5_wav_1009c424,this,
                   0x3f4ccccd,0);
    return;
  case 5:
    pcVar3 = s_buttons_spark6_wav_1009c410;
    break;
  default:
    goto switchD_1000bff8_default;
  }
  EMIT_SOUND_DYN(this,*(undefined4 *)(param_1 + 0x208),2,pcVar3,this,0x3f4ccccd,0);
switchD_1000bff8_default:
  return;
}

/* 1000c700  func_rot_button  (12 bytes)
 * undefined func_rot_button(int param_1)
 */
void __cdecl func_rot_button(int param_1)

{
                    /* 0xc700  221  func_rot_button */
  GetClassPtr<CRotButton>(param_1);
  return;
}

/* 1000c990  momentary_rot_button  (12 bytes)
 * undefined momentary_rot_button(int param_1)
 */
void __cdecl momentary_rot_button(int param_1)

{
                    /* 0xc990  274  momentary_rot_button */
  GetClassPtr<CMomentaryRotButton>(param_1);
  return;
}

/* 1000d1e0  env_debris  (12 bytes)
 * undefined env_debris(int param_1)
 */
void __cdecl env_debris(int param_1)

{
                    /* 0xd1e0  189  env_debris
                       0xd1e0  202  env_spark */
  GetClassPtr<CEnvSpark>(param_1);
  return;
}

/* 1000d530  button_target  (12 bytes)
 * undefined button_target(int param_1)
 */
void __cdecl button_target(int param_1)

{
                    /* 0xd530  178  button_target */
  GetClassPtr<CButtonTarget>(param_1);
  return;
}

/* 1000d690  GetClassPtr<CEnvGlobal>  (76 bytes)
 * undefined GetClassPtr<CEnvGlobal>(int param_1)
 * called by: env_global
 */
void __cdecl GetClassPtr<CEnvGlobal>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x60), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CEnvGlobal::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1000d6e0  GetClassPtr<CMultiSource>  (79 bytes)
 * undefined GetClassPtr<CMultiSource>(int param_1)
 * called by: multisource
 */
void __cdecl GetClassPtr<CMultiSource>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x1dc),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CMultiSource::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1000d740  GetClassPtr<CBaseButton>  (79 bytes)
 * undefined GetClassPtr<CBaseButton>(int param_1)
 * called by: func_button
 */
void __cdecl GetClassPtr<CBaseButton>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x128),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CBaseButton::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1000d7b0  GetClassPtr<CRotButton>  (79 bytes)
 * undefined GetClassPtr<CRotButton>(int param_1)
 * called by: func_rot_button
 */
void __cdecl GetClassPtr<CRotButton>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x128),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CRotButton::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1000d800  GetClassPtr<CMomentaryRotButton>  (79 bytes)
 * undefined GetClassPtr<CMomentaryRotButton>(int param_1)
 * called by: momentary_rot_button
 */
void __cdecl GetClassPtr<CMomentaryRotButton>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x118),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CMomentaryRotButton::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1000d870  GetClassPtr<CEnvSpark>  (76 bytes)
 * undefined GetClassPtr<CEnvSpark>(int param_1)
 * called by: env_debris
 */
void __cdecl GetClassPtr<CEnvSpark>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x58), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CEnvSpark::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1000d8d0  GetClassPtr<CButtonTarget>  (76 bytes)
 * undefined GetClassPtr<CButtonTarget>(int param_1)
 * called by: button_target
 */
void __cdecl GetClassPtr<CButtonTarget>(int param_1)

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
    *puVar3 = &CButtonTarget::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1000d920  GetEntityAPI  (44 bytes)
 * undefined4 GetEntityAPI(undefined4 * param_1, int param_2)
 */
undefined4 __cdecl GetEntityAPI(undefined4 *param_1,int param_2)

{
  int iVar1;
  DLL_FUNCTIONS *pDVar2;
  
                    /* 0xd920  163  GetEntityAPI */
  if ((param_1 != (undefined4 *)0x0) && (param_2 == 0x8c)) {
    pDVar2 = &gFunctionTable;
    for (iVar1 = 0x32; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = pDVar2->pfnGameInit;
      pDVar2 = (DLL_FUNCTIONS *)&pDVar2->pfnSpawn;
      param_1 = param_1 + 1;
    }
    return 1;
  }
  return 0;
}

/* 1000d950  GetEntityAPI2  (52 bytes)
 * undefined4 GetEntityAPI2(undefined4 * param_1, int * param_2)
 */
undefined4 __cdecl GetEntityAPI2(undefined4 *param_1,int *param_2)

{
  int iVar1;
  DLL_FUNCTIONS *pDVar2;
  
                    /* 0xd950  164  GetEntityAPI2 */
  if ((param_1 != (undefined4 *)0x0) && (*param_2 == 0x8c)) {
    pDVar2 = &gFunctionTable;
    for (iVar1 = 0x32; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = pDVar2->pfnGameInit;
      pDVar2 = (DLL_FUNCTIONS *)&pDVar2->pfnSpawn;
      param_1 = param_1 + 1;
    }
    return 1;
  }
  *param_2 = 0x8c;
  return 0;
}

/* 1000d990  GetNewDLLFunctions  (100 bytes)
 * undefined4 GetNewDLLFunctions(undefined4 * param_1, int * param_2)
 */
undefined4 __cdecl GetNewDLLFunctions(undefined4 *param_1,int *param_2)

{
                    /* 0xd990  165  GetNewDLLFunctions */
  if (param_1 == (undefined4 *)0x0) {
    (*g_engfuncs.pfnAlertMessage)(at_error,s_GetNewDLLFunctions_called_with_n_1009c88c);
    return 0;
  }
  if (*param_2 != 1) {
    (*g_engfuncs.pfnAlertMessage)(at_error,s_GetNewDLLFunctions_version_misma_1009c850,*param_2,1);
    *param_2 = 1;
    return 0;
  }
  *param_1 = gNewDLLFunctions.pfnOnFreeEntPrivateData;
  param_1[1] = gNewDLLFunctions.pfnGameShutdown;
  param_1[2] = gNewDLLFunctions.pfnShouldCollide;
  return 1;
}

/* 1000da00  pfnSpawn  (432 bytes)
 * int pfnSpawn(edict_t * pent)
 * called by: CBaseEntity::Create, CBasePlayer::GiveNamedItem, CChangeLevel::ChangeLevelNow
 */
int __cdecl pfnSpawn(edict_t *pent)

{
  byte bVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  
  if ((pent != (edict_t *)0x0) && (piVar2 = pent->pvPrivateData, piVar2 != (int *)0x0)) {
    iVar4 = piVar2[1];
    *(float *)(iVar4 + 0xc4) = *(float *)(iVar4 + 8) - 1.0;
    *(float *)(iVar4 + 200) = *(float *)(iVar4 + 0xc) - 1.0;
    *(float *)(iVar4 + 0xcc) = *(float *)(iVar4 + 0x10) - 1.0;
    iVar4 = piVar2[1];
    *(float *)(iVar4 + 0xd0) = *(float *)(iVar4 + 8) + 1.0;
    *(float *)(iVar4 + 0xd4) = *(float *)(iVar4 + 0xc) + 1.0;
    *(float *)(iVar4 + 0xd8) = *(float *)(iVar4 + 0x10) + 1.0;
    (**(code **)(*piVar2 + 0x1c))();
    pvVar3 = pent->pvPrivateData;
    if (pvVar3 != (void *)0x0) {
      if (g_pGameRules != (int *)0x0) {
        iVar4 = (**(code **)(*g_pGameRules + 8))(pvVar3);
        if (iVar4 == 0) {
          return -1;
        }
      }
      if ((*(uint *)(*(int *)((int)pvVar3 + 4) + 0x1a4) & 0x40000000) != 0) {
        return -1;
      }
      iVar4 = *(int *)(*(int *)((int)pvVar3 + 4) + 4);
      if (iVar4 != 0) {
        iVar4 = FUN_1007b1c0(&DAT_102ef3b0,iVar4);
        if (iVar4 == 0) {
          FUN_1007b100(&DAT_102ef3b0,*(int *)(*(int *)((int)pvVar3 + 4) + 4),gpGlobals->mapname,1);
        }
        else {
          if (*(int *)(iVar4 + 0x60) == 2) {
            return -1;
          }
          pbVar6 = (byte *)(iVar4 + 0x40);
          pbVar5 = (byte *)(gpGlobals->pStringBase + gpGlobals->mapname);
          do {
            bVar1 = *pbVar5;
            bVar7 = bVar1 < *pbVar6;
            if (bVar1 != *pbVar6) {
LAB_1000db73:
              iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
              goto LAB_1000db78;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar7 = bVar1 < pbVar6[1];
            if (bVar1 != pbVar6[1]) goto LAB_1000db73;
            pbVar5 = pbVar5 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_1000db78:
          if (iVar4 != 0) {
            FUN_1000ed70((int)pvVar3);
            return 0;
          }
        }
      }
    }
  }
  return 0;
}

/* 1000dbb0  pfnKeyValue  (62 bytes)
 * void pfnKeyValue(edict_t * pentKeyvalue, KeyValueData * pkvd)
 */
void __cdecl pfnKeyValue(edict_t *pentKeyvalue,KeyValueData *pkvd)

{
  if ((pkvd != (KeyValueData *)0x0) && (pentKeyvalue != (edict_t *)0x0)) {
    EntvarsKeyvalue((int)&pentKeyvalue->v,(int)pkvd);
    if ((pkvd->fHandled == 0) &&
       ((pkvd->szClassName != (char *)0x0 && (pentKeyvalue->pvPrivateData != (int *)0x0)))) {
      (**(code **)(*(int *)pentKeyvalue->pvPrivateData + 0x24))(pkvd);
    }
  }
  return;
}

/* 1000dbf0  pfnTouch  (89 bytes)
 * void pfnTouch(edict_t * pentTouched, edict_t * pentOther)
 * called by: CBasePlayer::GiveNamedItem
 */
void __cdecl pfnTouch(edict_t *pentTouched,edict_t *pentOther)

{
  void *pvVar1;
  int *piVar2;
  
  if (DAT_100a93c0 == 0) {
    if (pentTouched == (edict_t *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = pentTouched->pvPrivateData;
    }
    if (pentOther == (edict_t *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = pentOther->pvPrivateData;
    }
    if ((piVar2 != (int *)0x0) && (pvVar1 != (void *)0x0)) {
      if (((*(uint *)(*(int *)((int)pvVar1 + 4) + 0x1a4) | *(uint *)(piVar2[1] + 0x1a4)) &
          0x40000000) == 0) {
        (**(code **)(*piVar2 + 0xd4))(pvVar1);
      }
    }
  }
  return;
}

/* 1000dc50  pfnUse  (64 bytes)
 * void pfnUse(edict_t * pentUsed, edict_t * pentOther)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnUse(edict_t *pentUsed,edict_t *pentOther)

{
  void *pvVar1;
  int *piVar2;
  
  if (pentUsed == (edict_t *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = pentUsed->pvPrivateData;
  }
  if (pentOther == (edict_t *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = pentOther->pvPrivateData;
  }
  if ((piVar2 != (int *)0x0) && ((*(uint *)(piVar2[1] + 0x1a4) & 0x40000000) == 0)) {
    (**(code **)(*piVar2 + 0xd8))(pvVar1,pvVar1,3,0);
  }
  return;
}

/* 1000dc90  pfnThink  (76 bytes)
 * void pfnThink(edict_t * pent)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnThink(edict_t *pent)

{
  int *piVar1;
  
  if ((pent != (edict_t *)0x0) && (piVar1 = pent->pvPrivateData, piVar1 != (int *)0x0)) {
    if ((((int *)piVar1[1])[0x69] & 0x80000000U) != 0) {
      (*g_engfuncs.pfnAlertMessage)
                (at_error,s_Dormant_entity__s_is_thinking___1009c8c4,
                 gpGlobals->pStringBase + *(int *)piVar1[1]);
    }
    (**(code **)(*piVar1 + 0xd0))();
  }
  return;
}

/* 1000dce0  pfnBlocked  (44 bytes)
 * void pfnBlocked(edict_t * pentBlocked, edict_t * pentOther)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnBlocked(edict_t *pentBlocked,edict_t *pentOther)

{
  void *pvVar1;
  int *piVar2;
  
  if (pentBlocked == (edict_t *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = pentBlocked->pvPrivateData;
  }
  if (pentOther == (edict_t *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = pentOther->pvPrivateData;
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xdc))(pvVar1);
  }
  return;
}

/* 1000dd10  pfnSave  (252 bytes)
 * void pfnSave(edict_t * pent, SAVERESTOREDATA * pSaveData)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnSave(edict_t *pent,SAVERESTOREDATA *pSaveData)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  ENTITYTABLE *pEVar4;
  int iVar5;
  SAVERESTOREDATA *pSVar6;
  uint uVar7;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  pSVar6 = pSaveData;
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_10088c58;
  pvStack_c = ExceptionList;
  if (((pent != (edict_t *)0x0) && (piVar2 = pent->pvPrivateData, piVar2 != (int *)0x0)) &&
     (pSaveData != (SAVERESTOREDATA *)0x0)) {
    iVar3 = pSaveData->currentIndex;
    pEVar4 = pSaveData->pTable;
    ExceptionList = &pvStack_c;
    if (pEVar4[iVar3].pent != pent) {
      ExceptionList = &pvStack_c;
      (*g_engfuncs.pfnAlertMessage)(at_error,s_ENTITY_TABLE_OR_INDEX_IS_WRONG___1009c8e8);
    }
    uVar7 = (**(code **)(*piVar2 + 0x30))();
    if ((uVar7 & 0x80000000) == 0) {
      iVar5 = piVar2[1];
      if (*(int *)(iVar5 + 0x108) == 7) {
        fVar1 = *(float *)(iVar5 + 0x100);
        *(float *)(iVar5 + 0x100) = gpGlobals->time;
        *(float *)(piVar2[1] + 0x104) =
             (*(float *)(iVar5 + 0x104) - fVar1) + *(float *)(piVar2[1] + 0x100);
      }
      pEVar4[iVar3].location = pSVar6->size;
      pEVar4[iVar3].classname = *(string_t *)piVar2[1];
      FUN_10077ee0(&pent,pSVar6);
      uStack_4 = 0;
      (**(code **)(*piVar2 + 0x28))(&pent);
      pEVar4[iVar3].size = pSVar6->size - pEVar4[iVar3].location;
      uStack_4 = 0xffffffff;
      CBaseEntity::SUB_DoNothing((CBaseEntity *)&pent);
    }
  }
  ExceptionList = pvStack_c;
  return;
}

/* 1000de10  FindGlobalEntity  (172 bytes)
 * int FindGlobalEntity(int param_1, int param_2)
 * called by: pfnRestore
 */
/* WARNING: Variable defined which should be unmapped: param_1 */

int __cdecl FindGlobalEntity(int param_1,int param_2)

{
  byte bVar1;
  edict_t *peVar2;
  void *pvVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  int in_stack_00000014;
  
  peVar2 = (*g_engfuncs.pfnFindEntityByString)
                     ((edict_t *)0x0,s_globalname_1009c934,gpGlobals->pStringBase + param_2);
  if (peVar2 == (edict_t *)0x0) {
    peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    if (peVar2 == (edict_t *)0x0) {
      pvVar3 = (void *)0x0;
      goto LAB_1000de4d;
    }
  }
  pvVar3 = peVar2->pvPrivateData;
LAB_1000de4d:
  if (pvVar3 != (void *)0x0) {
    pbVar4 = (byte *)(gpGlobals->pStringBase + **(int **)((int)pvVar3 + 4));
    pbVar6 = (byte *)(gpGlobals->pStringBase + in_stack_00000014);
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_1000de94:
        iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_1000de99;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_1000de94;
      pbVar4 = pbVar4 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_1000de99:
    if (iVar5 != 0) {
      (*g_engfuncs.pfnAlertMessage)(at_console,s_Global_entity_found__s__wrong_cl_1009c90c);
      pvVar3 = (void *)0x0;
    }
  }
  return (int)pvVar3;
}

/* 1000dec0  pfnRestore  (919 bytes)
 * int pfnRestore(edict_t * pent, SAVERESTOREDATA * pSaveData, int globalEntity)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pfnRestore(edict_t *pent,SAVERESTOREDATA *pSaveData,int globalEntity)

{
  vec_t *pvVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  uint uVar6;
  byte *pbVar7;
  int *piVar8;
  byte *pbVar9;
  bool bVar10;
  CBaseEntity aCStack_304 [4];
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  CRestore aCStack_2f8 [4];
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  vec_t vStack_2ec;
  vec_t vStack_2e8;
  vec_t vStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  Vector VStack_2c8;
  Vector VStack_2bc;
  int iStack_2b0;
  int iStack_2ac;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  void *pvStack_c;
  code *pcStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  pcStack_8 = FUN_10088c86;
  pvStack_c = ExceptionList;
  if (pent == (edict_t *)0x0) {
    return 0;
  }
  piVar5 = pent->pvPrivateData;
  if (piVar5 == (int *)0x0) {
    return 0;
  }
  if (pSaveData == (SAVERESTOREDATA *)0x0) {
    return 0;
  }
  ExceptionList = &pvStack_c;
  FUN_10077ee0(aCStack_304,pSaveData);
  uStack_300 = 0;
  uStack_2fc = 1;
  iStack_4 = 0;
  if (globalEntity == 0) {
LAB_1000e0cc:
    piVar8 = (int *)0x0;
    uVar6 = (**(code **)(*piVar5 + 0x30))();
    if ((uVar6 & 4) == 0) {
      (**(code **)(*piVar5 + 0x2c))(aCStack_304);
      (**(code **)(*piVar5 + 0x20))();
    }
    else {
      (**(code **)(*piVar5 + 0x2c))();
      (**(code **)(*piVar5 + 0x1c))();
    }
    if (pent != (edict_t *)0x0) {
      piVar8 = pent->pvPrivateData;
    }
    if (globalEntity == 0) {
      if ((piVar8 != (int *)0x0) && (*(int *)(piVar8[1] + 4) != 0)) {
        iVar3 = FUN_1007b1c0(&DAT_102ef3b0,*(int *)(piVar8[1] + 4));
        if (iVar3 == 0) {
          (*g_engfuncs.pfnAlertMessage)
                    (at_error,s_Global_Entity__s___s__not_in_tab_1009c940,
                     gpGlobals->pStringBase + ((int *)piVar8[1])[1],
                     gpGlobals->pStringBase + *(int *)piVar8[1]);
          FUN_1007b100(&DAT_102ef3b0,*(int *)(piVar8[1] + 4),gpGlobals->mapname,1);
        }
        else {
          if (*(int *)(iVar3 + 0x60) == 2) {
            iStack_4 = 0xffffffff;
            CBaseEntity::SUB_DoNothing(aCStack_304);
            ExceptionList = pvStack_c;
            return -1;
          }
          pbVar7 = (byte *)(gpGlobals->pStringBase + gpGlobals->mapname);
          pbVar9 = (byte *)(iVar3 + 0x40);
          do {
            bVar2 = *pbVar7;
            bVar10 = bVar2 < *pbVar9;
            if (bVar2 != *pbVar9) {
LAB_1000e1cf:
              iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_1000e1d4;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar7[1];
            bVar10 = bVar2 < pbVar9[1];
            if (bVar2 != pbVar9[1]) goto LAB_1000e1cf;
            pbVar7 = pbVar7 + 2;
            pbVar9 = pbVar9 + 2;
          } while (bVar2 != 0);
          iVar3 = 0;
LAB_1000e1d4:
          if (iVar3 != 0) {
            FUN_1000ed70((int)piVar8);
          }
        }
      }
    }
    else {
      pSaveData->vecLandmarkOffset[0] = vStack_2ec;
      pSaveData->vecLandmarkOffset[1] = vStack_2e8;
      pSaveData->vecLandmarkOffset[2] = vStack_2e4;
      if (piVar8 != (int *)0x0) {
        UTIL_SetOrigin(piVar8[1],piVar8[1] + 8);
        (**(code **)(*piVar8 + 0x90))();
      }
    }
  }
  else {
    FUN_10077ee0(aCStack_2f8,pSaveData);
    uStack_2f4 = 0;
    iStack_4._0_1_ = 1;
    uStack_2f0 = 0;
    CRestore::ReadEntVars(aCStack_2f8,(byte_conflict *)s_ENTVARS_1009c968,(int)&iStack_2b0);
    iVar3 = pSaveData->pTable[pSaveData->currentIndex].location;
    pSaveData->size = iVar3;
    pSaveData->pCurrentData = pSaveData->pBaseData + iVar3;
    iVar3 = FUN_1007b1c0(&DAT_102ef3b0,iStack_2ac);
    pbVar9 = (byte *)(iVar3 + 0x40);
    pcVar4 = pSaveData->szCurrentMapName;
    do {
      bVar2 = *pcVar4;
      bVar10 = bVar2 < *pbVar9;
      if (bVar2 != *pbVar9) {
LAB_1000dfba:
        iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_1000dfbf;
      }
      if (bVar2 == 0) break;
      bVar2 = pcVar4[1];
      bVar10 = bVar2 < pbVar9[1];
      if (bVar2 != pbVar9[1]) goto LAB_1000dfba;
      pcVar4 = pcVar4 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar2 != 0);
    iVar3 = 0;
LAB_1000dfbf:
    if (iVar3 == 0) {
      pvVar1 = pSaveData->vecLandmarkOffset;
      vStack_2ec = *pvVar1;
      vStack_2e8 = pSaveData->vecLandmarkOffset[1];
      vStack_2e4 = pSaveData->vecLandmarkOffset[2];
      piVar5 = (int *)FindGlobalEntity(iStack_2b0,iStack_2ac);
      if (piVar5 != (int *)0x0) {
        uStack_300 = 1;
        iVar3 = piVar5[1];
        fStack_2d8 = pSaveData->vecLandmarkOffset[2] - *(float *)(iVar3 + 0xe4);
        fStack_2dc = pSaveData->vecLandmarkOffset[1] - *(float *)(iVar3 + 0xe0);
        fStack_2e0 = *pvVar1 - *(float *)(iVar3 + 0xdc);
        Vector::Vector(&VStack_2bc,&fStack_2e0);
        fStack_2cc = fStack_1cc + VStack_2bc.z;
        fStack_2d0 = fStack_1d0 + VStack_2bc.y;
        fStack_2d4 = fStack_1d4 + VStack_2bc.x;
        Vector::Vector(&VStack_2c8,&fStack_2d4);
        *pvVar1 = VStack_2c8.x;
        pSaveData->vecLandmarkOffset[1] = VStack_2c8.y;
        pSaveData->vecLandmarkOffset[2] = VStack_2c8.z;
        pent = *(edict_t **)(piVar5[1] + 0x208);
        FUN_1007b300(&DAT_102ef3b0,*(int *)(piVar5[1] + 4),gpGlobals->mapname);
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        CBaseEntity::SUB_DoNothing((CBaseEntity *)aCStack_2f8);
        goto LAB_1000e0cc;
      }
    }
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    CBaseEntity::SUB_DoNothing((CBaseEntity *)aCStack_2f8);
  }
  iStack_4 = 0xffffffff;
  CBaseEntity::SUB_DoNothing(aCStack_304);
  ExceptionList = pvStack_c;
  return 0;
}

/* 1000e270  pfnSetAbsBox  (33 bytes)
 * void pfnSetAbsBox(edict_t * pent)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnSetAbsBox(edict_t *pent)

{
  if ((pent != (edict_t *)0x0) && (pent->pvPrivateData != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000e281. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)pent->pvPrivateData + 0x40))();
    return;
  }
  SetObjectCollisionBox((int)&pent->v);
  return;
}

/* 1000e2a0  pfnSaveWriteFields  (104 bytes)
 * void pfnSaveWriteFields(SAVERESTOREDATA * param_1, char * param_2, void * param_3, TYPEDESCRIPTION * param_4, int param_5)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnSaveWriteFields(SAVERESTOREDATA *param_1,char *param_2,void *param_3,
                       TYPEDESCRIPTION *param_4,int param_5)

{
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_10088c98;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_10077ee0(&param_1,param_1);
  uStack_4 = 0;
  CSave::WriteFields((CSave *)&param_1,(byte_conflict *)param_2,(int)param_3,(int)param_4,param_5);
  uStack_4 = 0xffffffff;
  CBaseEntity::SUB_DoNothing((CBaseEntity *)&param_1);
  ExceptionList = pvStack_c;
  return;
}

/* 1000e310  pfnSaveReadFields  (117 bytes)
 * void pfnSaveReadFields(SAVERESTOREDATA * param_1, char * param_2, void * param_3, TYPEDESCRIPTION * param_4, int param_5)
 */
void __cdecl
pfnSaveReadFields(SAVERESTOREDATA *param_1,char *param_2,void *param_3,TYPEDESCRIPTION *param_4,
                 int param_5)

{
  CRestore local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_10088cb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10077ee0(local_18,param_1);
  local_10 = 1;
  local_14 = 0;
  local_4 = 0;
  CRestore::ReadFields(local_18,(byte_conflict *)param_2,(int)param_3,param_4,param_5);
  local_4 = 0xffffffff;
  CBaseEntity::SUB_DoNothing((CBaseEntity *)local_18);
  ExceptionList = local_c;
  return;
}

/* 1000e390  pfnOnFreeEntPrivateData  (21 bytes)
 * void pfnOnFreeEntPrivateData(edict_t * pEnt)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnOnFreeEntPrivateData(edict_t *pEnt)

{
  if ((pEnt != (edict_t *)0x0) && (pEnt->pvPrivateData != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000e3a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)pEnt->pvPrivateData + 0x38))();
    return;
  }
  return;
}

/* 1000e3b0  pfnShouldCollide  (62 bytes)
 * int pfnShouldCollide(edict_t * pentTouched, edict_t * pentOther)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pfnShouldCollide(edict_t *pentTouched,edict_t *pentOther)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  
  if (pentTouched == (edict_t *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = pentTouched->pvPrivateData;
  }
  if (pentOther == (edict_t *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = pentOther->pvPrivateData;
  }
  if ((piVar3 != (int *)0x0) && ((*(uint *)(piVar3[1] + 0x1a4) & 0x40000000) == 0)) {
    iVar2 = (**(code **)(*piVar3 + 0x3c))(pvVar1);
    return iVar2;
  }
  return 1;
}

/* 1000eb00  SetObjectCollisionBox  (456 bytes)
 * undefined SetObjectCollisionBox(int param_1)
 * called by: CBaseEntity::SetObjectCollisionBox, pfnSetAbsBox
 */
void __cdecl SetObjectCollisionBox(int param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x10c) == 4) &&
     (((*(float *)(param_1 + 0x50) != 0.0 || (*(float *)(param_1 + 0x54) != 0.0)) ||
      (*(float *)(param_1 + 0x58) != 0.0)))) {
    fVar1 = 0.0;
    pfVar2 = (float *)(param_1 + 0xe8);
    iVar3 = 3;
    do {
      if (fVar1 < ABS(pfVar2[-3])) {
        fVar1 = ABS(pfVar2[-3]);
      }
      if (fVar1 < ABS(*pfVar2)) {
        fVar1 = ABS(*pfVar2);
      }
      pfVar2 = pfVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = 3;
    pfVar2 = (float *)(param_1 + 8);
    do {
      iVar3 = iVar3 + -1;
      pfVar2[0x2f] = *pfVar2 - fVar1;
      pfVar2[0x32] = fVar1 + *pfVar2;
      pfVar2 = pfVar2 + 1;
    } while (iVar3 != 0);
  }
  else {
    *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 8) + *(float *)(param_1 + 0xdc);
    *(float *)(param_1 + 200) = *(float *)(param_1 + 0xe0) + *(float *)(param_1 + 0xc);
    *(float *)(param_1 + 0xcc) = *(float *)(param_1 + 0xe4) + *(float *)(param_1 + 0x10);
    *(float *)(param_1 + 0xd0) = *(float *)(param_1 + 8) + *(float *)(param_1 + 0xe8);
    *(float *)(param_1 + 0xd4) = *(float *)(param_1 + 0xec) + *(float *)(param_1 + 0xc);
    *(float *)(param_1 + 0xd8) = *(float *)(param_1 + 0xf0) + *(float *)(param_1 + 0x10);
  }
  *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 0xc4) - 1.0;
  *(float *)(param_1 + 200) = *(float *)(param_1 + 200) - 1.0;
  *(float *)(param_1 + 0xcc) = *(float *)(param_1 + 0xcc) - 1.0;
  *(float *)(param_1 + 0xd0) = *(float *)(param_1 + 0xd0) + 1.0;
  *(float *)(param_1 + 0xd4) = *(float *)(param_1 + 0xd4) + 1.0;
  *(float *)(param_1 + 0xd8) = *(float *)(param_1 + 0xd8) + 1.0;
  return;
}

/* 1000efd0  pfnClientConnect  (82 bytes)
 * qboolean pfnClientConnect(edict_t * pEntity, char * pszName, char * pszAddress, char[128] szRejectReason)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

qboolean pfnClientConnect(edict_t *pEntity,char *pszName,char *pszAddress,char szRejectReason [128])

{
  int *piVar1;
  qboolean qVar2;
  
  for (piVar1 = (int *)UTIL_FindEntityByClassname(0,s_ts_playeramount_1009cc30);
      piVar1 != (int *)0x0;
      piVar1 = (int *)UTIL_FindEntityByClassname((int)piVar1,s_ts_playeramount_1009cc30)) {
    CTSPlayerAmount::ClientConnect(piVar1);
  }
  qVar2 = (**(code **)(*g_pGameRules + 0x28))(pEntity,pszName,pszAddress,szRejectReason._0_4_);
  return qVar2;
}

/* 1000f030  pfnClientDisconnect  (221 bytes)
 * void pfnClientDisconnect(edict_t * pEntity)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnClientDisconnect(edict_t *pEntity)

{
  int *piVar1;
  int iValue;
  undefined1 auStack_100 [16];
  undefined4 uStack_f0;
  edict_t *peStack_ec;
  char acStack_e8 [232];
  
  for (piVar1 = (int *)UTIL_FindEntityByClassname(0,s_ts_playeramount_1009cc30);
      piVar1 != (int *)0x0;
      piVar1 = (int *)UTIL_FindEntityByClassname((int)piVar1,s_ts_playeramount_1009cc30)) {
    FUN_1004ac20(piVar1);
  }
  if (g_fGameOver == 0) {
    sprintf(auStack_100,(byte_conflict *)s____s_has_left_the_game_1009cc40);
    (*g_engfuncs.pfnMessageBegin)(2,gmsgSayText,(float *)0x0,(edict_t *)0x0);
    iValue = (*g_engfuncs.pfnIndexOfEdict)(pEntity);
    (*g_engfuncs.pfnWriteByte)(iValue);
    (*g_engfuncs.pfnWriteString)(acStack_e8);
    (*g_engfuncs.pfnMessageEnd)();
    (pEntity->v).takedamage = 0.0;
    (pEntity->v).solid = 0;
    UTIL_SetOrigin((int)&pEntity->v,(pEntity->v).origin);
    peStack_ec = pEntity;
    uStack_f0 = 0x1000f105;
    (**(code **)(*g_pGameRules + 0x30))();
  }
  return;
}

/* 1000f110  respawn  (73 bytes)
 * undefined respawn(int param_1)
 * called by: CBasePlayer::StopObserver
 */
/* .so 0xace58; "reload\n" if not DM/coop else pl->Spawn() */

void __cdecl respawn(int param_1)

{
  int *piVar1;
  
  if ((gpGlobals->coop == 0.0) && (gpGlobals->deathmatch == 0.0)) {
    (*g_engfuncs.pfnServerCommand)(s_reload_1009cc58);
    return;
  }
  piVar1 = (int *)GetClassPtr<CBasePlayer>(param_1);
                    /* WARNING: Could not recover jumptable at 0x1000f156. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x1c))();
  return;
}

/* 1000f160  pfnClientKill  (87 bytes)
 * void pfnClientKill(edict_t * pEntity)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnClientKill(edict_t *pEntity)

{
  edict_t *peVar1;
  void *pvVar2;
  
  peVar1 = (pEntity->v).pContainingEntity;
  if (peVar1 == (edict_t *)0x0) {
    peVar1 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    if (peVar1 == (edict_t *)0x0) {
      pvVar2 = (void *)0x0;
      goto LAB_1000f183;
    }
  }
  pvVar2 = peVar1->pvPrivateData;
LAB_1000f183:
  if ((*(int *)(*(int *)((int)pvVar2 + 4) + 0x244) == 0) &&
     (*(float *)((int)pvVar2 + 0x838) <= 0.001)) {
    *(float *)((int)pvVar2 + 0x838) = gpGlobals->time + 1.0;
  }
  return;
}

/* 1000f1c0  pfnClientPutInServer  (93 bytes)
 * void pfnClientPutInServer(edict_t * pEntity)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnClientPutInServer(edict_t *pEntity)

{
  CBasePlayer *this;
  
  this = (CBasePlayer *)GetClassPtr<CBasePlayer>((int)&pEntity->v);
  CBasePlayer::SetCustomDecalFrames(this,-1);
  sscanf(PTR_DAT_1009ecdc,&DAT_1009cc60);
  CBasePlayer::GiveCash(this,(int)pEntity);
  (*this->vtable[7])();
  this->pev->effects = this->pev->effects | 0x20;
  return;
}

/* 1000f220  Host_Say  (1654 bytes)
 * undefined Host_Say(int param_1, int param_2)
 * called by: pfnClientCommand
 */
void __cdecl Host_Say(int param_1,int param_2)

{
  char cVar1;
  byte_conflict *pbVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  undefined *puVar7;
  char *pcVar8;
  int *piVar9;
  edict_t *peVar10;
  void *this;
  void *this_00;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *pvVar11;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  uint uVar12;
  char *pcVar13;
  char *pcVar14;
  uint *puVar15;
  char *pcVar16;
  uint *puVar17;
  int in_stack_0000000c;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined4 auStack_290 [2];
  int iStack_288;
  char acStack_280 [4];
  uint auStack_27c [6];
  char acStack_264 [104];
  char acStack_1fc [256];
  uint auStack_fc [63];
  
  pbVar2 = (byte_conflict *)(*g_engfuncs.pfnCmd_Argv)(0);
  iVar3 = (*g_engfuncs.pfnCmd_Argc)();
  if (iVar3 == 0) {
    return;
  }
  piVar4 = (int *)GetClassPtr<CBasePlayer>(param_2 + 0x80);
  if (gpGlobals->time < (float)piVar4[0x1eb]) {
    return;
  }
  uVar5 = FUN_100887b0(this,pbVar2,&DAT_1009cd2c);
  if ((uVar5 == 0) ||
     (uVar5 = FUN_100887b0(this_00,pbVar2,(byte_conflict *)s_say_team_1009cd20), uVar5 == 0)) {
    iVar3 = (*g_engfuncs.pfnCmd_Argc)();
    if (iVar3 < 2) {
      return;
    }
    pcVar13 = (*g_engfuncs.pfnCmd_Args)();
    pvVar11 = extraout_ECX_01;
  }
  else {
    iVar3 = (*g_engfuncs.pfnCmd_Argc)();
    if (iVar3 < 2) {
      sprintf(acStack_1fc,&DAT_1009cd14);
      pcVar13 = acStack_1fc;
      pvVar11 = extraout_ECX_00;
    }
    else {
      (*g_engfuncs.pfnCmd_Args)();
      sprintf(acStack_1fc,(byte_conflict *)s__s__s_1009cd18);
      pcVar13 = acStack_1fc;
      pvVar11 = extraout_ECX;
    }
  }
  if (*pcVar13 == '\"') {
    pcVar13 = pcVar13 + 1;
    uVar5 = 0xffffffff;
    pcVar14 = pcVar13;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar1 != '\0');
    pvVar11 = (void *)(~uVar5 - 1);
    pcVar13[~uVar5 - 2] = '\0';
  }
  pcVar14 = pcVar13;
  if (pcVar13 != (char *)0x0) {
    while (*pcVar14 != '\0') {
      uVar5 = FUN_1007db1c(pvVar11,(int)*pcVar14);
      pvVar11 = extraout_ECX_02;
      if (((uVar5 != 0) &&
          (uVar5 = FUN_1007dac6((void *)(int)*pcVar14,(int)*pcVar14), pvVar11 = extraout_ECX_03,
          uVar5 == 0)) || (pcVar14 = pcVar14 + 1, pcVar14 == (char *)0x0)) goto LAB_1000f352;
    }
    if (pcVar14 != (char *)0x0) {
      return;
    }
  }
LAB_1000f352:
  if (in_stack_0000000c == 0) {
    pcVar14 = s__c_s__1009ccfc;
  }
  else {
    pcVar14 = s__c_TEAM___s__1009cd04;
  }
  sprintf((undefined1 *)auStack_27c,(byte_conflict *)pcVar14);
  uVar5 = 0xffffffff;
  puVar6 = auStack_27c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    uVar12 = *puVar6;
    puVar6 = (uint *)((int)puVar6 + 1);
  } while ((char)uVar12 != '\0');
  iVar3 = 0x7e - (~uVar5 - 1);
  uVar5 = 0xffffffff;
  pcVar14 = pcVar13;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar14 + 1;
  } while (cVar1 != '\0');
  if (iVar3 < (int)(~uVar5 - 1)) {
    pcVar13[iVar3] = '\0';
  }
  puVar6 = strstr(auStack_27c,&DAT_100a93d8);
  cVar1 = *pcVar13;
  pcVar14 = pcVar13;
  while (cVar1 != '\0') {
    if (cVar1 == '%') {
      if (pcVar14[1] == 'a') {
        pcVar8 = s_with_kevlar_1009cce8;
        if (*(float *)(piVar4[1] + 0x1bc) == 0.0) {
          pcVar8 = s_no_kevlar_1009ccdc;
        }
      }
      else {
        if (pcVar14[1] != 'h') {
          uVar5 = 0xffffffff;
          pcVar8 = &DAT_1009ccf8;
          do {
            pcVar16 = pcVar8;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar16 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar16;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          iVar3 = -1;
          puVar17 = puVar6;
          do {
            puVar15 = puVar17;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            puVar15 = (uint *)((int)puVar17 + 1);
            uVar12 = *puVar17;
            puVar17 = puVar15;
          } while ((char)uVar12 != '\0');
          pcVar8 = pcVar16 + -uVar5;
          pcVar16 = (char *)((int)puVar15 + -1);
          for (uVar12 = uVar5 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar16 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar16 = pcVar16 + 1;
          }
          goto LAB_1000f4aa;
        }
        __ftol();
        sprintf((undefined1 *)auStack_290,&DAT_1009ccf4);
        pcVar8 = (char *)auStack_290;
      }
      uVar5 = 0xffffffff;
      do {
        pcVar16 = pcVar8;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar16 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar16;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar3 = -1;
      puVar17 = auStack_27c;
      do {
        puVar15 = puVar17;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        puVar15 = (uint *)((int)puVar17 + 1);
        uVar12 = *puVar17;
        puVar17 = puVar15;
      } while ((char)uVar12 != '\0');
      pcVar8 = pcVar16 + -uVar5;
      pcVar16 = (char *)((int)puVar15 + -1);
      for (uVar12 = uVar5 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar16 = pcVar16 + 4;
      }
      pcVar14 = pcVar14 + 1;
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar16 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar16 = pcVar16 + 1;
      }
    }
    else {
      _strncat((char *)puVar6,pcVar14,1);
    }
LAB_1000f4aa:
    pcVar8 = pcVar14 + 1;
    pcVar14 = pcVar14 + 1;
    cVar1 = *pcVar8;
  }
  uVar5 = 0xffffffff;
  pcVar14 = &DAT_1009ccd8;
  do {
    pcVar8 = pcVar14;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = pcVar14 + 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar3 = -1;
  puVar6 = auStack_27c;
  do {
    puVar17 = puVar6;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    puVar17 = (uint *)((int)puVar6 + 1);
    uVar12 = *puVar6;
    puVar6 = puVar17;
  } while ((char)uVar12 != '\0');
  pcVar14 = pcVar8 + -uVar5;
  pcVar8 = (char *)((int)puVar17 + -1);
  for (uVar12 = uVar5 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar14;
    pcVar14 = pcVar14 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar14;
    pcVar14 = pcVar14 + 1;
    pcVar8 = pcVar8 + 1;
  }
  iVar3 = _strncmp(pcVar13,s_timeleft_1009cccc,8);
  if (iVar3 == 0) {
    (*g_engfuncs.pfnCVarGetFloat)(s_mp_timeleft_1009ccc0);
    __ftol();
    piVar4 = (int *)GetClassPtr<CBasePlayer>(in_stack_0000000c + 0x80);
    iVar3 = (**(code **)(*piVar4 + 0xc4))();
    if (iVar3 != 0) {
      iVar20 = 0;
      iVar19 = 0;
      iVar18 = 0;
      iVar3 = 0;
      puVar7 = UTIL_VarArgs((byte_conflict *)s_Time_left___i__02i_1009ccac);
      ClientPrint(in_stack_0000000c + 0x80,3,puVar7,iVar3,iVar18,iVar19,iVar20);
    }
  }
  else {
    iVar3 = _strncmp(pcVar13,&DAT_1009cc80,4);
    if (iVar3 == 0) {
      auStack_fc[0]._0_1_ = 0;
      puVar6 = FUN_10088b16((uint *)(pcVar13 + 4));
      uVar5 = 0xffffffff;
      do {
        puVar17 = puVar6;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        puVar17 = (uint *)((int)puVar6 + 1);
        uVar12 = *puVar6;
        puVar6 = puVar17;
      } while ((char)uVar12 != '\0');
      uVar5 = ~uVar5;
      puVar6 = (uint *)((int)puVar17 - uVar5);
      puVar17 = auStack_fc;
      for (uVar12 = uVar5 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar17 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar17 = puVar17 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(char *)puVar17 = (char)*puVar6;
        puVar6 = (uint *)((int)puVar6 + 1);
        puVar17 = (uint *)((int)puVar17 + 1);
      }
      piVar9 = (int *)GetClassPtr<CBasePlayer>(param_2 + 0x80);
      iVar3 = (**(code **)(*piVar9 + 0xc4))();
      if ((iVar3 != 0) &&
         (iVar3 = CTSGameRules::PlayerVote((CTSGameRules *)&TSGameRules,param_2,auStack_fc),
         iVar3 != 0)) goto LAB_1000f581;
    }
    piVar9 = (int *)UTIL_FindEntityByClassname(0,s_player_1009c678);
    while (((piVar9 != (int *)0x0 && (*(edict_t **)(piVar9[1] + 0x208) != (edict_t *)0x0)) &&
           (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(piVar9[1] + 0x208)),
           iVar3 != 0))) {
      if (((piVar9[1] != 0) && (*(int *)(piVar9[1] + 0x208) != param_2)) &&
         (iVar3 = (**(code **)(*piVar9 + 0xc4))(), iVar3 != 0)) {
        if (in_stack_0000000c != 0) {
          peVar10 = (edict_t *)param_2;
          if ((param_2 == 0) &&
             (peVar10 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar10 == (edict_t *)0x0)) {
            pvVar11 = (void *)0x0;
          }
          else {
            pvVar11 = peVar10->pvPrivateData;
          }
          iVar3 = (**(code **)(*g_pGameRules + 0xc4))(piVar9,pvVar11);
          if (iVar3 != 1) goto LAB_1000f7cf;
        }
        if ((((TSGameRules != '\x03') && (TSGameRules != '\x02')) && (DAT_102efbc4 == 0)) ||
           (((iVar3 = (**(code **)(*piVar4 + 0xac))(), iVar3 != 0 || (0.0 <= (float)piVar4[0x1d7]))
            || ((iVar3 = (**(code **)(*piVar9 + 0xac))(), iVar3 == 0 && ((float)piVar9[0x1d7] < 0.0)
                ))))) {
          (*g_engfuncs.pfnMessageBegin)(1,gmsgSayText,(float *)0x0,*(edict_t **)(piVar9[1] + 0x208))
          ;
          iVar3 = (*g_engfuncs.pfnIndexOfEdict)((edict_t *)param_2);
          (*g_engfuncs.pfnWriteByte)(iVar3);
          (*g_engfuncs.pfnWriteString)(acStack_264);
          auStack_290[0] = 0x1000f7cf;
          (*g_engfuncs.pfnMessageEnd)();
        }
      }
LAB_1000f7cf:
      piVar9 = (int *)UTIL_FindEntityByClassname((int)piVar9,s_player_1009c678);
    }
    (*g_engfuncs.pfnMessageBegin)(1,gmsgSayText,(float *)0x0,*(edict_t **)(param_2 + 0x288));
    iVar3 = (*g_engfuncs.pfnIndexOfEdict)((edict_t *)param_2);
    (*g_engfuncs.pfnWriteByte)(iVar3);
    (*g_engfuncs.pfnWriteString)(acStack_264);
    (*g_engfuncs.pfnMessageEnd)();
    (*g_engfuncs.pfnServerPrint)(acStack_280);
  }
LAB_1000f581:
  pcVar13 = s_say_team_1009cd20;
  if (in_stack_0000000c == 0) {
    pcVar13 = &DAT_1009cd2c;
  }
  if (g_teamplay == 0) {
    (*g_engfuncs.pfnGetPlayerUserId)((edict_t *)param_2);
    (*g_engfuncs.pfnGetPlayerAuthId)((edict_t *)param_2);
    (*g_engfuncs.pfnGetPlayerUserId)((edict_t *)param_2);
    pcVar14 = s___s<_i><_s><_i>___s___s__1009cc64;
  }
  else {
    pcVar8 = (*g_engfuncs.pfnGetInfoKeyBuffer)((edict_t *)param_2);
    pcVar14 = (char *)0x1000f5bc;
    (*g_engfuncs.pfnInfoKeyValue)(pcVar8,pcVar13);
    (*g_engfuncs.pfnGetPlayerAuthId)((edict_t *)param_2);
    (*g_engfuncs.pfnGetPlayerUserId)((edict_t *)param_2);
  }
  UTIL_LogPrintf((byte_conflict *)pcVar14);
  *(float *)(iStack_288 + 0x7ac) = gpGlobals->time + 0.5;
  return;
}

/* 1000f8a0  pfnClientCommand  (4547 bytes)
 * void pfnClientCommand(edict_t * pEntity)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnClientCommand(edict_t *pEntity)

{
  entvars_t *peVar1;
  char cVar2;
  byte bVar3;
  CTSGun *pCVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  byte_conflict *pbVar8;
  undefined4 uVar9;
  CBasePlayer *pCVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined3 extraout_var;
  undefined4 uVar13;
  undefined *puVar14;
  void *this;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  uint uVar15;
  uint uVar16;
  void *this_04;
  int iVar17;
  int *unaff_EBP;
  int *unaff_ESI;
  byte *pbVar18;
  char *pcVar19;
  int iVar20;
  char *pcVar21;
  bool bVar22;
  edict_t *in_stack_00000008;
  int iVar23;
  float fVar24;
  entvars_t *peVar25;
  entvars_t **ppeVar26;
  undefined1 uVar27;
  entvars_t *peStack_9c;
  int iStack_98;
  int iStack_94;
  float fStack_90;
  vec_t vStack_8c;
  vec_t vStack_88;
  uint uStack_84;
  int iStack_80;
  char acStack_7c [4];
  char acStack_78 [8];
  undefined4 uStack_70;
  undefined1 uStack_5;
  
  puVar5 = (uint *)(*g_engfuncs.pfnCmd_Argv)(0);
  if (in_stack_00000008->pvPrivateData != (void *)0x0) {
    peVar1 = &in_stack_00000008->v;
    pbVar18 = &DAT_1009cd2c;
    puVar6 = puVar5;
    do {
      bVar3 = (byte)*puVar6;
      bVar22 = bVar3 < *pbVar18;
      if (bVar3 != *pbVar18) {
LAB_1000f8fe:
        iVar7 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
        goto LAB_1000f903;
      }
      if (bVar3 == 0) break;
      bVar3 = *(byte *)((int)puVar6 + 1);
      bVar22 = bVar3 < pbVar18[1];
      if (bVar3 != pbVar18[1]) goto LAB_1000f8fe;
      puVar6 = (uint *)((int)puVar6 + 2);
      pbVar18 = pbVar18 + 2;
    } while (bVar3 != 0);
    iVar7 = 0;
LAB_1000f903:
    peStack_9c = peVar1;
    if (iVar7 == 0) {
      Host_Say((int)in_stack_00000008,0);
      return;
    }
    pcVar19 = s_say_team_1009cd20;
    puVar6 = puVar5;
    do {
      bVar3 = (byte)*puVar6;
      bVar22 = bVar3 < (byte)*pcVar19;
      if (bVar3 != *pcVar19) {
LAB_1000f947:
        iVar7 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
        goto LAB_1000f94c;
      }
      if (bVar3 == 0) break;
      bVar3 = *(byte *)((int)puVar6 + 1);
      bVar22 = bVar3 < (byte)pcVar19[1];
      if (bVar3 != pcVar19[1]) goto LAB_1000f947;
      puVar6 = (uint *)((int)puVar6 + 2);
      pcVar19 = pcVar19 + 2;
    } while (bVar3 != 0);
    iVar7 = 0;
LAB_1000f94c:
    if (iVar7 == 0) {
      Host_Say((int)in_stack_00000008,1);
      return;
    }
    pbVar18 = &DAT_1009ce7c;
    puVar6 = puVar5;
    do {
      bVar3 = (byte)*puVar6;
      bVar22 = bVar3 < *pbVar18;
      if (bVar3 != *pbVar18) {
LAB_1000f991:
        iVar7 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
        goto LAB_1000f996;
      }
      if (bVar3 == 0) break;
      bVar3 = *(byte *)((int)puVar6 + 1);
      bVar22 = bVar3 < pbVar18[1];
      if (bVar3 != pbVar18[1]) goto LAB_1000f991;
      puVar6 = (uint *)((int)puVar6 + 2);
      pbVar18 = pbVar18 + 2;
    } while (bVar3 != 0);
    iVar7 = 0;
LAB_1000f996:
    if (iVar7 == 0) {
      if ((_g_flWeaponCheat != 0.0) && (iVar7 = (*g_engfuncs.pfnCmd_Argc)(), 1 < iVar7)) {
        pbVar8 = (byte_conflict *)(*g_engfuncs.pfnCmd_Argv)(1);
        uVar9 = atoi(this,pbVar8);
        iVar7 = GetClassPtr<CBasePlayer>((int)peVar1);
        *(undefined4 *)(iVar7 + 0x9dc) = uVar9;
        pbVar8 = (byte_conflict *)(*g_engfuncs.pfnCmd_Argv)(1);
        iVar7 = atoi(this_00,pbVar8);
        (in_stack_00000008->v).fov = (float)iVar7;
        return;
      }
      GetClassPtr<CBasePlayer>((int)peVar1);
      pcVar19 = UTIL_VarArgs((byte_conflict *)s__fov__is___d__1009ce6c);
      (*g_engfuncs.pfnClientPrintf)(in_stack_00000008,print_console,pcVar19);
      return;
    }
    pbVar18 = &DAT_1009ce68;
    puVar6 = puVar5;
    do {
      bVar3 = (byte)*puVar6;
      bVar22 = bVar3 < *pbVar18;
      if (bVar3 != *pbVar18) {
LAB_1000fa5c:
        iVar7 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
        goto LAB_1000fa61;
      }
      if (bVar3 == 0) break;
      bVar3 = *(byte *)((int)puVar6 + 1);
      bVar22 = bVar3 < pbVar18[1];
      if (bVar3 != pbVar18[1]) goto LAB_1000fa5c;
      puVar6 = (uint *)((int)puVar6 + 2);
      pbVar18 = pbVar18 + 2;
    } while (bVar3 != 0);
    iVar7 = 0;
LAB_1000fa61:
    if (iVar7 == 0) {
      pbVar8 = (byte_conflict *)(*g_engfuncs.pfnCmd_Argv)(1);
      pCVar10 = (CBasePlayer *)GetClassPtr<CBasePlayer>((int)peVar1);
      CBasePlayer::SelectItem(pCVar10,pbVar8);
      return;
    }
    pcVar19 = s_respawn_1009ce60;
    puVar6 = puVar5;
    do {
      bVar3 = (byte)*puVar6;
      bVar22 = bVar3 < (byte)*pcVar19;
      if (bVar3 != *pcVar19) {
LAB_1000fab7:
        iVar7 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
        goto LAB_1000fabc;
      }
      if (bVar3 == 0) break;
      bVar3 = *(byte *)((int)puVar6 + 1);
      bVar22 = bVar3 < (byte)pcVar19[1];
      if (bVar3 != pcVar19[1]) goto LAB_1000fab7;
      puVar6 = (uint *)((int)puVar6 + 2);
      pcVar19 = pcVar19 + 2;
    } while (bVar3 != 0);
    iVar7 = 0;
LAB_1000fabc:
    if (iVar7 == 0) {
      iVar7 = GetClassPtr<CBasePlayer>((int)peVar1);
      if (*(int *)(*(int *)(iVar7 + 4) + 0x244) != 0) {
        if ((*(float *)(iVar7 + 0x75c) < 0.0) && (*(float *)(iVar7 + 0x740) < gpGlobals->time)) {
          *(float *)(iVar7 + 0x740) = gpGlobals->time + 1.0;
          TSHudMessageOne(0xc3,0x2d,0x2d,0x10,0x14,s_You_have_to_wait_until_the_next_r_1009ce38,
                          *(int *)(iVar7 + 4));
        }
        if ((0.0 < *(float *)(iVar7 + 0x75c)) && (*(float *)(iVar7 + 0x75c) < gpGlobals->time)) {
          *(undefined4 *)(iVar7 + 0x75c) = 0;
          CBasePlayer::StopObserver(iVar7);
          *(undefined4 *)(*(int *)(iVar7 + 4) + 0x184) = 0;
          return;
        }
      }
    }
    else {
      pcVar19 = s_testpath_1009ce2c;
      puVar6 = puVar5;
      do {
        bVar3 = (byte)*puVar6;
        bVar22 = bVar3 < (byte)*pcVar19;
        if (bVar3 != *pcVar19) {
LAB_1000fbac:
          iVar7 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
          goto LAB_1000fbb1;
        }
        if (bVar3 == 0) break;
        bVar3 = *(byte *)((int)puVar6 + 1);
        bVar22 = bVar3 < (byte)pcVar19[1];
        if (bVar3 != pcVar19[1]) goto LAB_1000fbac;
        puVar6 = (uint *)((int)puVar6 + 2);
        pcVar19 = pcVar19 + 2;
      } while (bVar3 != 0);
      iVar7 = 0;
LAB_1000fbb1:
      if (iVar7 == 0) {
        iVar7 = (*g_engfuncs.pfnCmd_Argc)();
        if (2 < iVar7) {
          ppeVar26 = &peStack_9c;
          pbVar8 = (byte_conflict *)(*g_engfuncs.pfnCmd_Argv)(2);
          atoi(this_01,pbVar8);
          pbVar8 = (byte_conflict *)(*g_engfuncs.pfnCmd_Argv)(1);
          iVar7 = atoi(this_02,pbVar8);
          CNodeGraph::FindPath((CNodeGraph *)&g_NodeGraph,iVar7,(int)ppeVar26,unaff_ESI,unaff_EBP);
          return;
        }
      }
      else {
        if (_g_flWeaponCheat != 0.0) {
          pcVar19 = s_powerup_1009ce24;
          puVar6 = puVar5;
          do {
            bVar3 = (byte)*puVar6;
            bVar22 = bVar3 < (byte)*pcVar19;
            if (bVar3 != *pcVar19) {
LAB_1000fc46:
              iVar7 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
              goto LAB_1000fc4b;
            }
            if (bVar3 == 0) break;
            bVar3 = *(byte *)((int)puVar6 + 1);
            bVar22 = bVar3 < (byte)pcVar19[1];
            if (bVar3 != pcVar19[1]) goto LAB_1000fc46;
            puVar6 = (uint *)((int)puVar6 + 2);
            pcVar19 = pcVar19 + 2;
          } while (bVar3 != 0);
          iVar7 = 0;
LAB_1000fc4b:
          if ((iVar7 == 0) && (iVar7 = (*g_engfuncs.pfnCmd_Argc)(), 1 < iVar7)) {
            pbVar8 = (byte_conflict *)(*g_engfuncs.pfnCmd_Argv)(1);
            uVar9 = atoi(this_03,pbVar8);
            pCVar10 = (CBasePlayer *)GetClassPtr<CBasePlayer>((int)peVar1);
            if (pCVar10 == (CBasePlayer *)0x0) {
              return;
            }
            iVar7 = (*pCVar10->vtable[0x2b])();
            if (iVar7 == 0) {
              return;
            }
            if (pCVar10->pev->iuser1 != 0) {
              return;
            }
            switch(uVar9) {
            case 1:
              iVar7 = 8;
              break;
            case 2:
              CBasePlayer::PickUpWeapon(pCVar10,0x18,(undefined4 *)0x0,0,'\x01','\0');
              return;
            case 3:
              pCVar10->field_0x73a = 1;
              (*g_engfuncs.pfnMessageBegin)
                        (1,DAT_100d978c,(float *)0x0,(in_stack_00000008->v).pContainingEntity);
              (*g_engfuncs.pfnWriteShort)(4);
              (*g_engfuncs.pfnWriteByte)(0);
              (*g_engfuncs.pfnMessageEnd)();
              pCVar10->field_0x73b = 1;
              (*g_engfuncs.pfnSetPhysicsKeyValue)
                        (pCVar10->pev->pContainingEntity,&DAT_1009ce1c,&DAT_1009ce20);
              (*g_engfuncs.pfnMessageBegin)
                        (1,DAT_100d978c,(float *)0x0,(in_stack_00000008->v).pContainingEntity);
              (*g_engfuncs.pfnWriteShort)(0x100);
              (*g_engfuncs.pfnWriteByte)(0);
              uStack_70 = 0x1000fd6a;
              (*g_engfuncs.pfnMessageEnd)();
              return;
            case 4:
              iVar7 = *(int *)&pCVar10->field_0x9fc;
              if (iVar7 == 0) {
                return;
              }
              if (*(int *)(iVar7 + 0x78) != 0x10) {
                return;
              }
              CTSGun::MultiplyClips(iVar7);
              return;
            case 5:
              iVar7 = 0x10;
              break;
            default:
              iVar7 = 1;
            }
            if (*(int *)&pCVar10->field_0x710 != 0) {
              return;
            }
            (*g_engfuncs.pfnMessageBegin)
                      (1,DAT_100d978c,(float *)0x0,(in_stack_00000008->v).pContainingEntity);
            (*g_engfuncs.pfnWriteShort)(iVar7);
            (*g_engfuncs.pfnWriteByte)(0);
            iStack_94 = 0x1000fde8;
            (*g_engfuncs.pfnMessageEnd)();
            if (*(int *)&pCVar10->field_0x714 == iVar7) {
              *(int *)&pCVar10->field_0x71c = *(int *)&pCVar10->field_0x71c + 5;
            }
            else {
              *(undefined4 *)&pCVar10->field_0x71c = 5;
            }
            *(int *)&pCVar10->field_0x714 = iVar7;
            *(undefined4 *)&pCVar10->field_0x718 = 0;
            return;
          }
          if (_g_flWeaponCheat != 0.0) {
            pcVar19 = s_cashala_1009ce14;
            puVar6 = puVar5;
            do {
              bVar3 = (byte)*puVar6;
              bVar22 = bVar3 < (byte)*pcVar19;
              if (bVar3 != *pcVar19) {
LAB_1000fe5c:
                iVar7 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
                goto LAB_1000fe61;
              }
              if (bVar3 == 0) break;
              bVar3 = *(byte *)((int)puVar6 + 1);
              bVar22 = bVar3 < (byte)pcVar19[1];
              if (bVar3 != pcVar19[1]) goto LAB_1000fe5c;
              puVar6 = (uint *)((int)puVar6 + 2);
              pcVar19 = pcVar19 + 2;
            } while (bVar3 != 0);
            iVar7 = 0;
LAB_1000fe61:
            if (iVar7 == 0) {
              iVar7 = 30000;
              pCVar10 = (CBasePlayer *)GetClassPtr<CBasePlayer>((int)peVar1);
              CBasePlayer::GiveCash(pCVar10,iVar7);
              return;
            }
          }
        }
        puVar6 = strstr(puVar5,s_weapon__1009ce0c);
        if ((puVar6 == (uint *)0x0) || (puVar6 != puVar5)) {
          puVar6 = strstr(puVar5,s_lasclr__1009ce04);
          if ((puVar6 != (uint *)0x0) && (puVar6 == puVar5)) {
            uVar15 = 0xffffffff;
            pcVar19 = &DAT_100a9398;
            do {
              pcVar21 = pcVar19;
              if (uVar15 == 0) break;
              uVar15 = uVar15 - 1;
              pcVar21 = pcVar19 + 1;
              cVar2 = *pcVar19;
              pcVar19 = pcVar21;
            } while (cVar2 != '\0');
            uVar15 = ~uVar15;
            peStack_9c = (entvars_t *)0x0;
            pcVar19 = pcVar21 + -uVar15;
            pcVar21 = acStack_7c;
            for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
              *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
              pcVar19 = pcVar19 + 4;
              pcVar21 = pcVar21 + 4;
            }
            for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
              *pcVar21 = *pcVar19;
              pcVar19 = pcVar19 + 1;
              pcVar21 = pcVar21 + 1;
            }
            uVar15 = 0xffffffff;
            pcVar19 = (char *)((int)puVar5 + 7);
            do {
              pcVar21 = pcVar19;
              if (uVar15 == 0) break;
              uVar15 = uVar15 - 1;
              pcVar21 = pcVar19 + 1;
              cVar2 = *pcVar19;
              pcVar19 = pcVar21;
            } while (cVar2 != '\0');
            uVar15 = ~uVar15;
            pcVar19 = pcVar21 + -uVar15;
            pcVar21 = acStack_7c;
            for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
              *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
              pcVar19 = pcVar19 + 4;
              pcVar21 = pcVar21 + 4;
            }
            for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
              *pcVar21 = *pcVar19;
              pcVar19 = pcVar19 + 1;
              pcVar21 = pcVar21 + 1;
            }
            sscanf(acStack_7c,&DAT_1009cc60);
            (*g_engfuncs.pfnMessageBegin)(2,gmsgPlInfo,(float *)0x0,(edict_t *)0x0);
            iVar7 = (*g_engfuncs.pfnIndexOfEdict)((in_stack_00000008->v).pContainingEntity);
            (*g_engfuncs.pfnWriteByte)(iVar7);
            (*g_engfuncs.pfnWriteByte)(0);
            (*g_engfuncs.pfnWriteByte)(iStack_80);
            fStack_90 = 2.5440885e-29;
            (*g_engfuncs.pfnMessageEnd)();
            return;
          }
          pbVar18 = &DAT_1009cdfc;
          puVar6 = puVar5;
          do {
            bVar3 = (byte)*puVar6;
            bVar22 = bVar3 < *pbVar18;
            if (bVar3 != *pbVar18) {
LAB_1001005e:
              iVar7 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
              goto LAB_10010063;
            }
            if (bVar3 == 0) break;
            bVar3 = *(byte *)((int)puVar6 + 1);
            bVar22 = bVar3 < pbVar18[1];
            if (bVar3 != pbVar18[1]) goto LAB_1001005e;
            puVar6 = (uint *)((int)puVar6 + 2);
            pbVar18 = pbVar18 + 2;
          } while (bVar3 != 0);
          iVar7 = 0;
LAB_10010063:
          if (iVar7 == 0) {
            iVar7 = GetClassPtr<CBasePlayer>((int)peVar1);
            CBasePlayer::ResetArmament(iVar7);
            return;
          }
          pbVar18 = &DAT_1009cdf8;
          puVar6 = puVar5;
          do {
            bVar3 = (byte)*puVar6;
            bVar22 = bVar3 < *pbVar18;
            if (bVar3 != *pbVar18) {
LAB_100100ad:
              iVar7 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
              goto LAB_100100b2;
            }
            if (bVar3 == 0) break;
            bVar3 = *(byte *)((int)puVar6 + 1);
            bVar22 = bVar3 < pbVar18[1];
            if (bVar3 != pbVar18[1]) goto LAB_100100ad;
            puVar6 = (uint *)((int)puVar6 + 2);
            pbVar18 = pbVar18 + 2;
          } while (bVar3 != 0);
          iVar7 = 0;
LAB_100100b2:
          if (iVar7 == 0) {
            iVar7 = (*g_engfuncs.pfnCmd_Argc)();
            iVar17 = 1;
            if (1 < iVar7) {
              do {
                pcVar19 = (*g_engfuncs.pfnCmd_Argv)(iVar17);
                uVar15 = 0xffffffff;
                do {
                  pcVar21 = pcVar19;
                  if (uVar15 == 0) break;
                  uVar15 = uVar15 - 1;
                  pcVar21 = pcVar19 + 1;
                  cVar2 = *pcVar19;
                  pcVar19 = pcVar21;
                } while (cVar2 != '\0');
                uVar15 = ~uVar15;
                pcVar19 = pcVar21 + -uVar15;
                pcVar21 = acStack_78;
                for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                  *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
                  pcVar19 = pcVar19 + 4;
                  pcVar21 = pcVar21 + 4;
                }
                for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
                  *pcVar21 = *pcVar19;
                  pcVar19 = pcVar19 + 1;
                  pcVar21 = pcVar21 + 1;
                }
                sscanf(acStack_78,(byte_conflict *)s__i__i_1009cdf0);
                puVar11 = get_weapon_info((int)fStack_90);
                if (*(char *)(puVar11 + 0x37) == '\0') {
                  uVar27 = 0;
                  fVar24 = fStack_90;
                  iVar23 = iStack_94;
                  pCVar10 = (CBasePlayer *)GetClassPtr<CBasePlayer>(iStack_98);
                  CBasePlayer::AddItemToArmament(pCVar10,fVar24,iVar23,uVar27);
                }
                else {
                  puVar11 = get_weapon_info((int)fStack_90);
                  iVar23 = iStack_94;
                  if ((int)puVar11[9] <= iStack_94) {
                    puVar11 = get_weapon_info((int)fStack_90);
                    iVar23 = puVar11[9];
                  }
                  if (iVar23 < 2) {
                    iStack_94 = 1;
                  }
                  else {
                    puVar11 = get_weapon_info((int)fStack_90);
                    if ((int)puVar11[9] <= iStack_94) {
                      puVar11 = get_weapon_info((int)fStack_90);
                      iStack_94 = puVar11[9];
                    }
                  }
                  iVar23 = iStack_98;
                  iVar20 = 0;
                  if (0 < iStack_94) {
                    do {
                      uVar27 = 0;
                      uVar9 = 0;
                      fVar24 = fStack_90;
                      pCVar10 = (CBasePlayer *)GetClassPtr<CBasePlayer>(iVar23);
                      CBasePlayer::AddItemToArmament(pCVar10,fVar24,uVar9,uVar27);
                      iVar20 = iVar20 + 1;
                    } while (iVar20 < iStack_94);
                  }
                }
                iVar17 = iVar17 + 1;
                if (iVar7 <= iVar17) {
                  return;
                }
              } while( true );
            }
          }
          else {
            pbVar18 = &DAT_1009cdec;
            puVar6 = puVar5;
            do {
              bVar3 = (byte)*puVar6;
              bVar22 = bVar3 < *pbVar18;
              if (bVar3 != *pbVar18) {
LAB_1001021a:
                iVar7 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
                goto LAB_1001021f;
              }
              if (bVar3 == 0) break;
              bVar3 = *(byte *)((int)puVar6 + 1);
              bVar22 = bVar3 < pbVar18[1];
              if (bVar3 != pbVar18[1]) goto LAB_1001021a;
              puVar6 = (uint *)((int)puVar6 + 2);
              pbVar18 = pbVar18 + 2;
            } while (bVar3 != 0);
            iVar7 = 0;
LAB_1001021f:
            if (iVar7 == 0) {
              iVar7 = (*g_engfuncs.pfnCmd_Argc)();
              iVar17 = 1;
              if (1 < iVar7) {
                do {
                  pcVar19 = (*g_engfuncs.pfnCmd_Argv)(iVar17);
                  uVar15 = 0xffffffff;
                  do {
                    pcVar21 = pcVar19;
                    if (uVar15 == 0) break;
                    uVar15 = uVar15 - 1;
                    pcVar21 = pcVar19 + 1;
                    cVar2 = *pcVar19;
                    pcVar19 = pcVar21;
                  } while (cVar2 != '\0');
                  uVar15 = ~uVar15;
                  pcVar19 = pcVar21 + -uVar15;
                  pcVar21 = acStack_78;
                  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
                    pcVar19 = pcVar19 + 4;
                    pcVar21 = pcVar21 + 4;
                  }
                  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
                    *pcVar21 = *pcVar19;
                    pcVar19 = pcVar19 + 1;
                    pcVar21 = pcVar21 + 1;
                  }
                  sscanf(acStack_78,&DAT_1009cc60);
                  uVar27 = 1;
                  uVar9 = 0;
                  iVar23 = iStack_94;
                  pCVar10 = (CBasePlayer *)GetClassPtr<CBasePlayer>(iStack_98);
                  CBasePlayer::AddItemToArmament(pCVar10,iVar23,uVar9,uVar27);
                  iVar17 = iVar17 + 1;
                  if (iVar7 <= iVar17) {
                    return;
                  }
                } while( true );
              }
            }
            else {
              pbVar18 = &DAT_1009cde8;
              puVar6 = puVar5;
              do {
                bVar3 = (byte)*puVar6;
                bVar22 = bVar3 < *pbVar18;
                if (bVar3 != *pbVar18) {
LAB_100102d5:
                  iVar7 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
                  goto LAB_100102da;
                }
                if (bVar3 == 0) break;
                bVar3 = *(byte *)((int)puVar6 + 1);
                bVar22 = bVar3 < pbVar18[1];
                if (bVar3 != pbVar18[1]) goto LAB_100102d5;
                puVar6 = (uint *)((int)puVar6 + 2);
                pbVar18 = pbVar18 + 2;
              } while (bVar3 != 0);
              iVar7 = 0;
LAB_100102da:
              if (iVar7 != 0) {
                puVar6 = strstr(puVar5,s_cutwire__1009cddc);
                if ((puVar6 != (uint *)0x0) && (puVar6 == puVar5)) {
                  uVar15 = 0xffffffff;
                  pcVar19 = &DAT_100a9398;
                  do {
                    pcVar21 = pcVar19;
                    if (uVar15 == 0) break;
                    uVar15 = uVar15 - 1;
                    pcVar21 = pcVar19 + 1;
                    cVar2 = *pcVar19;
                    pcVar19 = pcVar21;
                  } while (cVar2 != '\0');
                  uVar15 = ~uVar15;
                  pcVar19 = pcVar21 + -uVar15;
                  pcVar21 = acStack_7c;
                  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
                    pcVar19 = pcVar19 + 4;
                    pcVar21 = pcVar21 + 4;
                  }
                  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
                    *pcVar21 = *pcVar19;
                    pcVar19 = pcVar19 + 1;
                    pcVar21 = pcVar21 + 1;
                  }
                  uVar15 = 0xffffffff;
                  puVar5 = puVar5 + 2;
                  do {
                    puVar6 = puVar5;
                    if (uVar15 == 0) break;
                    uVar15 = uVar15 - 1;
                    puVar6 = (uint *)((int)puVar5 + 1);
                    uVar16 = *puVar5;
                    puVar5 = puVar6;
                  } while ((char)uVar16 != '\0');
                  uVar15 = ~uVar15;
                  pcVar19 = (char *)((int)puVar6 - uVar15);
                  pcVar21 = acStack_7c;
                  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
                    pcVar19 = pcVar19 + 4;
                    pcVar21 = pcVar21 + 4;
                  }
                  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
                    *pcVar21 = *pcVar19;
                    pcVar19 = pcVar19 + 1;
                    pcVar21 = pcVar21 + 1;
                  }
                  sscanf(acStack_7c,&DAT_1009cc60);
                  peVar25 = peStack_9c;
                  pCVar10 = (CBasePlayer *)GetClassPtr<CBasePlayer>((int)peVar1);
                  CBasePlayer::CutWire(pCVar10,(int)peVar25);
                  return;
                }
                puVar6 = strstr(puVar5,s_drop__1009cdd4);
                if ((puVar6 == (uint *)0x0) || (puVar6 != puVar5)) {
                  pbVar18 = &DAT_1009cdcc;
                  puVar6 = puVar5;
                  do {
                    bVar3 = (byte)*puVar6;
                    bVar22 = bVar3 < *pbVar18;
                    if (bVar3 != *pbVar18) {
LAB_100104d6:
                      iVar7 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
                      goto LAB_100104db;
                    }
                    if (bVar3 == 0) break;
                    bVar3 = *(byte *)((int)puVar6 + 1);
                    bVar22 = bVar3 < pbVar18[1];
                    if (bVar3 != pbVar18[1]) goto LAB_100104d6;
                    puVar6 = (uint *)((int)puVar6 + 2);
                    pbVar18 = pbVar18 + 2;
                  } while (bVar3 != 0);
                  iVar7 = 0;
LAB_100104db:
                  if (iVar7 != 0) {
                    pcVar19 = s_usepowerup_1009cdc0;
                    puVar6 = puVar5;
                    do {
                      bVar3 = (byte)*puVar6;
                      bVar22 = bVar3 < (byte)*pcVar19;
                      if (bVar3 != *pcVar19) {
LAB_1001050f:
                        iVar7 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
                        goto LAB_10010514;
                      }
                      if (bVar3 == 0) break;
                      bVar3 = *(byte *)((int)puVar6 + 1);
                      bVar22 = bVar3 < (byte)pcVar19[1];
                      if (bVar3 != pcVar19[1]) goto LAB_1001050f;
                      puVar6 = (uint *)((int)puVar6 + 2);
                      pcVar19 = pcVar19 + 2;
                    } while (bVar3 != 0);
                    iVar7 = 0;
LAB_10010514:
                    if (iVar7 == 0) {
                      piVar12 = (int *)GetClassPtr<CBasePlayer>((int)peVar1);
                      CBasePlayer::UsePowerUp(piVar12);
                      return;
                    }
                    pcVar19 = s_firemode_1009cdb4;
                    puVar6 = puVar5;
                    do {
                      bVar3 = (byte)*puVar6;
                      bVar22 = bVar3 < (byte)*pcVar19;
                      if (bVar3 != *pcVar19) {
LAB_1001055e:
                        iVar7 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
                        goto LAB_10010563;
                      }
                      if (bVar3 == 0) break;
                      bVar3 = *(byte *)((int)puVar6 + 1);
                      bVar22 = bVar3 < (byte)pcVar19[1];
                      if (bVar3 != pcVar19[1]) goto LAB_1001055e;
                      puVar6 = (uint *)((int)puVar6 + 2);
                      pcVar19 = pcVar19 + 2;
                    } while (bVar3 != 0);
                    iVar7 = 0;
LAB_10010563:
                    if (iVar7 == 0) {
                      iVar7 = GetClassPtr<CBasePlayer>((int)peVar1);
                      iVar7 = *(int *)(iVar7 + 0x9fc);
                      if (iVar7 == 0) {
                        return;
                      }
                      if (*(int *)(iVar7 + 0x78) != 0x10) {
                        return;
                      }
                      CTSGun::SwitchFireMode(iVar7);
                      return;
                    }
                    pcVar19 = s_useitems_1009cda8;
                    puVar6 = puVar5;
                    do {
                      bVar3 = (byte)*puVar6;
                      bVar22 = bVar3 < (byte)*pcVar19;
                      if (bVar3 != *pcVar19) {
LAB_100105c5:
                        iVar7 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
                        goto LAB_100105ca;
                      }
                      if (bVar3 == 0) break;
                      bVar3 = *(byte *)((int)puVar6 + 1);
                      bVar22 = bVar3 < (byte)pcVar19[1];
                      if (bVar3 != pcVar19[1]) goto LAB_100105c5;
                      puVar6 = (uint *)((int)puVar6 + 2);
                      pcVar19 = pcVar19 + 2;
                    } while (bVar3 != 0);
                    iVar7 = 0;
LAB_100105ca:
                    if (iVar7 == 0) {
                      iVar7 = GetClassPtr<CBasePlayer>((int)peVar1);
                      iVar7 = *(int *)(iVar7 + 0x9fc);
                      if (iVar7 == 0) {
                        return;
                      }
                      if (*(int *)(iVar7 + 0x78) != 0x10) {
                        return;
                      }
                      CTSGun::SwitchItems(iVar7);
                      return;
                    }
                    pcVar19 = s_lastinv_1009cda0;
                    puVar6 = puVar5;
                    do {
                      bVar3 = (byte)*puVar6;
                      bVar22 = bVar3 < (byte)*pcVar19;
                      if (bVar3 != *pcVar19) {
LAB_1001062c:
                        iVar7 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
                        goto LAB_10010631;
                      }
                      if (bVar3 == 0) break;
                      bVar3 = *(byte *)((int)puVar6 + 1);
                      bVar22 = bVar3 < (byte)pcVar19[1];
                      if (bVar3 != pcVar19[1]) goto LAB_1001062c;
                      puVar6 = (uint *)((int)puVar6 + 2);
                      pcVar19 = pcVar19 + 2;
                    } while (bVar3 != 0);
                    iVar7 = 0;
LAB_10010631:
                    if (iVar7 == 0) {
                      iVar7 = GetClassPtr<CBasePlayer>((int)peVar1);
                      pCVar4 = *(CTSGun **)(iVar7 + 0x9fc);
                      if (pCVar4 == (CTSGun *)0x0) {
                        return;
                      }
                      if (*(int *)&pCVar4->field_0x78 != 0x10) {
                        return;
                      }
                      iVar7 = *(int *)(iVar7 + 0xa08);
                      if (*(int *)&pCVar4->field_0xb8 == 0) {
                        return;
                      }
                      iVar17 = GetClassPtr<CBasePlayer>((int)peVar1);
                      *(undefined4 *)(iVar17 + 0xa08) = *(undefined4 *)&pCVar4->field_0xb8;
                      iVar7 = CTSGun::SelectWeapon(pCVar4,iVar7);
                      if (iVar7 == 0) {
                        return;
                      }
                      (*pCVar4->vtable[0x48])();
                      return;
                    }
                    pcVar19 = s_resetnodes_1009cd94;
                    puVar6 = puVar5;
                    do {
                      bVar3 = (byte)*puVar6;
                      bVar22 = bVar3 < (byte)*pcVar19;
                      if (bVar3 != *pcVar19) {
LAB_100106d1:
                        iVar7 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
                        goto LAB_100106d6;
                      }
                      if (bVar3 == 0) break;
                      bVar3 = *(byte *)((int)puVar6 + 1);
                      bVar22 = bVar3 < (byte)pcVar19[1];
                      if (bVar3 != pcVar19[1]) goto LAB_100106d1;
                      puVar6 = (uint *)((int)puVar6 + 2);
                      pcVar19 = pcVar19 + 2;
                    } while (bVar3 != 0);
                    iVar7 = 0;
LAB_100106d6:
                    if (iVar7 == 0) {
                      CNodeGraph::Reset(&g_NodeGraph);
                      return;
                    }
                    pcVar19 = s_loadnodes_1009cd88;
                    puVar6 = puVar5;
                    do {
                      bVar3 = (byte)*puVar6;
                      bVar22 = bVar3 < (byte)*pcVar19;
                      if (bVar3 != *pcVar19) {
LAB_1001071a:
                        iVar7 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
                        goto LAB_1001071f;
                      }
                      if (bVar3 == 0) break;
                      bVar3 = *(byte *)((int)puVar6 + 1);
                      bVar22 = bVar3 < (byte)pcVar19[1];
                      if (bVar3 != pcVar19[1]) goto LAB_1001071a;
                      puVar6 = (uint *)((int)puVar6 + 2);
                      pcVar19 = pcVar19 + 2;
                    } while (bVar3 != 0);
                    iVar7 = 0;
LAB_1001071f:
                    if (iVar7 == 0) {
                      CNodeGraph::Load(&g_NodeGraph);
                      return;
                    }
                    pcVar19 = s_savenodes_1009cd7c;
                    puVar6 = puVar5;
                    do {
                      bVar3 = (byte)*puVar6;
                      bVar22 = bVar3 < (byte)*pcVar19;
                      if (bVar3 != *pcVar19) {
LAB_10010763:
                        iVar7 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
                        goto LAB_10010768;
                      }
                      if (bVar3 == 0) break;
                      bVar3 = *(byte *)((int)puVar6 + 1);
                      bVar22 = bVar3 < (byte)pcVar19[1];
                      if (bVar3 != pcVar19[1]) goto LAB_10010763;
                      puVar6 = (uint *)((int)puVar6 + 2);
                      pcVar19 = pcVar19 + 2;
                    } while (bVar3 != 0);
                    iVar7 = 0;
LAB_10010768:
                    if (iVar7 == 0) {
                      CNodeGraph::Save(&g_NodeGraph);
                      return;
                    }
                    pcVar19 = s_addnode_1009cd74;
                    puVar6 = puVar5;
                    do {
                      bVar3 = (byte)*puVar6;
                      bVar22 = bVar3 < (byte)*pcVar19;
                      if (bVar3 != *pcVar19) {
LAB_100107ac:
                        iVar7 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
                        goto LAB_100107b1;
                      }
                      if (bVar3 == 0) break;
                      bVar3 = *(byte *)((int)puVar6 + 1);
                      bVar22 = bVar3 < (byte)pcVar19[1];
                      if (bVar3 != pcVar19[1]) goto LAB_100107ac;
                      puVar6 = (uint *)((int)puVar6 + 2);
                      pcVar19 = pcVar19 + 2;
                    } while (bVar3 != 0);
                    iVar7 = 0;
LAB_100107b1:
                    if (iVar7 == 0) {
                      piVar12 = (int *)GetClassPtr<CBasePlayer>((int)peVar1);
                      iVar7 = (**(code **)(*piVar12 + 0xac))();
                      if (iVar7 == 0) {
                        return;
                      }
                      iVar7 = GetClassPtr<CBasePlayer>((int)peVar1);
                      if (*(int *)(*(int *)(iVar7 + 4) + 0x244) != 0) {
                        return;
                      }
                      fStack_90 = (in_stack_00000008->v).origin[0];
                      uStack_84 = 0;
                      iStack_80 = 0;
                      vStack_8c = (in_stack_00000008->v).origin[1];
                      vStack_88 = (in_stack_00000008->v).origin[2];
                      iVar7 = GetClassPtr<CBasePlayer>((int)peVar1);
                      bVar22 = CBasePlayer::IsOnLadder(iVar7);
                      if (CONCAT31(extraout_var,bVar22) != 0) {
                        uStack_84 = uStack_84 | 1;
                      }
                      CNodeGraph::AddNode((CNodeGraph *)&g_NodeGraph,&fStack_90,1);
                      return;
                    }
                    pcVar19 = s_changeteam_1009cd68;
                    puVar6 = puVar5;
                    do {
                      bVar3 = (byte)*puVar6;
                      bVar22 = bVar3 < (byte)*pcVar19;
                      if (bVar3 != *pcVar19) {
LAB_10010880:
                        iVar7 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
                        goto LAB_10010885;
                      }
                      if (bVar3 == 0) break;
                      bVar3 = *(byte *)((int)puVar6 + 1);
                      bVar22 = bVar3 < (byte)pcVar19[1];
                      if (bVar3 != pcVar19[1]) goto LAB_10010880;
                      puVar6 = (uint *)((int)puVar6 + 2);
                      pcVar19 = pcVar19 + 2;
                    } while (bVar3 != 0);
                    iVar7 = 0;
LAB_10010885:
                    if (iVar7 == 0) {
                      (*g_engfuncs.pfnMessageBegin)
                                (1,DAT_100d975c,(float *)0x0,
                                 (in_stack_00000008->v).pContainingEntity);
                      (*g_engfuncs.pfnWriteByte)(2);
                      peStack_9c = (entvars_t *)0x100108b2;
                      (*g_engfuncs.pfnMessageEnd)();
                      return;
                    }
                    pcVar19 = s_jointeam_1009cd5c;
                    puVar6 = puVar5;
                    do {
                      bVar3 = (byte)*puVar6;
                      bVar22 = bVar3 < (byte)*pcVar19;
                      if (bVar3 != *pcVar19) {
LAB_100108e8:
                        iVar7 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
                        goto LAB_100108ed;
                      }
                      if (bVar3 == 0) break;
                      bVar3 = *(byte *)((int)puVar6 + 1);
                      bVar22 = bVar3 < (byte)pcVar19[1];
                      if (bVar3 != pcVar19[1]) goto LAB_100108e8;
                      puVar6 = (uint *)((int)puVar6 + 2);
                      pcVar19 = pcVar19 + 2;
                    } while (bVar3 != 0);
                    iVar7 = 0;
LAB_100108ed:
                    if ((iVar7 == 0) && (iVar7 = (*g_engfuncs.pfnCmd_Argc)(), 1 < iVar7)) {
                      uVar9 = 0;
                      iVar7 = *g_pGameRules;
                      pbVar8 = (byte_conflict *)(*g_engfuncs.pfnCmd_Argv)(1);
                      iVar17 = atoi(this_04,pbVar8);
                      uVar9 = (**(code **)(iVar7 + 0xcc))(iVar17 + -1,uVar9);
                      uVar13 = GetClassPtr<CBasePlayer>((int)peVar1);
                      (**(code **)(iVar7 + 0xd4))(uVar13,uVar9);
                      return;
                    }
                    pbVar18 = &DAT_1009cd54;
                    puVar6 = puVar5;
                    do {
                      bVar3 = (byte)*puVar6;
                      bVar22 = bVar3 < *pbVar18;
                      if (bVar3 != *pbVar18) {
LAB_10010973:
                        iVar7 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
                        goto LAB_10010978;
                      }
                      if (bVar3 == 0) break;
                      bVar3 = *(byte *)((int)puVar6 + 1);
                      bVar22 = bVar3 < pbVar18[1];
                      if (bVar3 != pbVar18[1]) goto LAB_10010973;
                      puVar6 = (uint *)((int)puVar6 + 2);
                      pbVar18 = pbVar18 + 2;
                    } while (bVar3 != 0);
                    iVar7 = 0;
LAB_10010978:
                    if (iVar7 == 0) {
                      iVar7 = (**(code **)(*g_pGameRules + 0x14))();
                      if (iVar7 == 0) {
                        return;
                      }
                      CHalfLifeMultiplay::SendMOTDToClient((in_stack_00000008->v).pContainingEntity)
                      ;
                      return;
                    }
                    pcVar19 = s_fullupdate_1009cd48;
                    puVar6 = puVar5;
                    do {
                      bVar3 = (byte)*puVar6;
                      bVar22 = bVar3 < (byte)*pcVar19;
                      if (bVar3 != *pcVar19) {
LAB_100109d7:
                        iVar7 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
                        goto LAB_100109dc;
                      }
                      if (bVar3 == 0) break;
                      bVar3 = *(byte *)((int)puVar6 + 1);
                      bVar22 = bVar3 < (byte)pcVar19[1];
                      if (bVar3 != pcVar19[1]) goto LAB_100109d7;
                      puVar6 = (uint *)((int)puVar6 + 2);
                      pcVar19 = pcVar19 + 2;
                    } while (bVar3 != 0);
                    iVar7 = 0;
LAB_100109dc:
                    if (iVar7 == 0) {
                      piVar12 = (int *)GetClassPtr<CBasePlayer>((int)peVar1);
                      CBasePlayer::ForceClientDllUpdate(piVar12);
                      return;
                    }
                    iVar7 = *g_pGameRules;
                    puVar6 = puVar5;
                    uVar9 = GetClassPtr<CBasePlayer>((int)peVar1);
                    iVar7 = (**(code **)(iVar7 + 0x5c))(uVar9,puVar6);
                    if (iVar7 != 0) {
                      return;
                    }
                    _strncpy((char *)&uStack_84,(char *)puVar5,0x7f);
                    uStack_5 = 0;
                    iVar20 = 0;
                    iVar23 = 0;
                    iVar17 = 0;
                    iVar7 = 0;
                    puVar14 = UTIL_VarArgs((byte_conflict *)s_Unknown_command___s_1009cd30);
                    ClientPrint((int)peVar1,2,puVar14,iVar7,iVar17,iVar23,iVar20);
                    return;
                  }
                  peVar25 = (entvars_t *)0xffffffff;
                }
                else {
                  uVar15 = 0xffffffff;
                  pcVar19 = &DAT_100a9398;
                  do {
                    pcVar21 = pcVar19;
                    if (uVar15 == 0) break;
                    uVar15 = uVar15 - 1;
                    pcVar21 = pcVar19 + 1;
                    cVar2 = *pcVar19;
                    pcVar19 = pcVar21;
                  } while (cVar2 != '\0');
                  uVar15 = ~uVar15;
                  pcVar19 = pcVar21 + -uVar15;
                  pcVar21 = acStack_7c;
                  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
                    pcVar19 = pcVar19 + 4;
                    pcVar21 = pcVar21 + 4;
                  }
                  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
                    *pcVar21 = *pcVar19;
                    pcVar19 = pcVar19 + 1;
                    pcVar21 = pcVar21 + 1;
                  }
                  uVar15 = 0xffffffff;
                  pcVar19 = (char *)((int)puVar5 + 5);
                  do {
                    pcVar21 = pcVar19;
                    if (uVar15 == 0) break;
                    uVar15 = uVar15 - 1;
                    pcVar21 = pcVar19 + 1;
                    cVar2 = *pcVar19;
                    pcVar19 = pcVar21;
                  } while (cVar2 != '\0');
                  uVar15 = ~uVar15;
                  pcVar19 = pcVar21 + -uVar15;
                  pcVar21 = acStack_7c;
                  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
                    pcVar19 = pcVar19 + 4;
                    pcVar21 = pcVar21 + 4;
                  }
                  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
                    *pcVar21 = *pcVar19;
                    pcVar19 = pcVar19 + 1;
                    pcVar21 = pcVar21 + 1;
                  }
                  sscanf(acStack_7c,&DAT_1009cc60);
                  peVar25 = peStack_9c;
                }
                fVar24 = 0.0;
                pCVar10 = (CBasePlayer *)GetClassPtr<CBasePlayer>((int)peVar1);
                CBasePlayer::DropWeapon(pCVar10,(uint)peVar25,fVar24);
                return;
              }
              iVar7 = (*g_engfuncs.pfnCmd_Argc)();
              iVar17 = 1;
              if (1 < iVar7) {
                do {
                  pcVar19 = (*g_engfuncs.pfnCmd_Argv)(iVar17);
                  uVar15 = 0xffffffff;
                  do {
                    pcVar21 = pcVar19;
                    if (uVar15 == 0) break;
                    uVar15 = uVar15 - 1;
                    pcVar21 = pcVar19 + 1;
                    cVar2 = *pcVar19;
                    pcVar19 = pcVar21;
                  } while (cVar2 != '\0');
                  uVar15 = ~uVar15;
                  pcVar19 = pcVar21 + -uVar15;
                  pcVar21 = acStack_78;
                  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
                    pcVar19 = pcVar19 + 4;
                    pcVar21 = pcVar21 + 4;
                  }
                  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
                    *pcVar21 = *pcVar19;
                    pcVar19 = pcVar19 + 1;
                    pcVar21 = pcVar21 + 1;
                  }
                  sscanf(acStack_78,(byte_conflict *)s__i__i_1009cdf0);
                  fVar24 = fStack_90;
                  iVar23 = iStack_94;
                  pCVar10 = (CBasePlayer *)GetClassPtr<CBasePlayer>(iStack_98);
                  CBasePlayer::AddAmmoToArmament(pCVar10,(int)fVar24,iVar23);
                  iVar17 = iVar17 + 1;
                  if (iVar7 <= iVar17) {
                    return;
                  }
                } while( true );
              }
            }
          }
        }
        else {
          uVar15 = 0xffffffff;
          pcVar19 = &DAT_100a9398;
          do {
            pcVar21 = pcVar19;
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1;
            pcVar21 = pcVar19 + 1;
            cVar2 = *pcVar19;
            pcVar19 = pcVar21;
          } while (cVar2 != '\0');
          uVar15 = ~uVar15;
          pcVar19 = pcVar21 + -uVar15;
          pcVar21 = acStack_7c;
          for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
            pcVar19 = pcVar19 + 4;
            pcVar21 = pcVar21 + 4;
          }
          for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
            *pcVar21 = *pcVar19;
            pcVar19 = pcVar19 + 1;
            pcVar21 = pcVar21 + 1;
          }
          uVar15 = 0xffffffff;
          pcVar19 = (char *)((int)puVar5 + 7);
          do {
            pcVar21 = pcVar19;
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1;
            pcVar21 = pcVar19 + 1;
            cVar2 = *pcVar19;
            pcVar19 = pcVar21;
          } while (cVar2 != '\0');
          uVar15 = ~uVar15;
          pcVar19 = pcVar21 + -uVar15;
          pcVar21 = acStack_7c;
          for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
            pcVar19 = pcVar19 + 4;
            pcVar21 = pcVar21 + 4;
          }
          for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
            *pcVar21 = *pcVar19;
            pcVar19 = pcVar19 + 1;
            pcVar21 = pcVar21 + 1;
          }
          sscanf(acStack_7c,&DAT_1009cc60);
          iVar7 = GetClassPtr<CBasePlayer>((int)peVar1);
          pCVar4 = *(CTSGun **)(iVar7 + 0x9fc);
          if ((pCVar4 != (CTSGun *)0x0) && (*(int *)&pCVar4->field_0x78 == 0x10)) {
            iVar7 = GetClassPtr<CBasePlayer>((int)peVar1);
            *(undefined4 *)(iVar7 + 0xa08) = *(undefined4 *)&pCVar4->field_0xb8;
            iVar7 = CTSGun::SelectWeapon(pCVar4,(int)peStack_9c);
            if (iVar7 != 0) {
              (*pCVar4->vtable[0x48])();
              return;
            }
          }
        }
      }
    }
  }
  return;
}

/* 10010a80  pfnClientUserInfoChanged  (578 bytes)
 * void pfnClientUserInfoChanged(edict_t * pEntity, char * infobuffer)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnClientUserInfoChanged(edict_t *pEntity,char *infobuffer)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  bool bVar6;
  char *infobuffer_00;
  char *in_stack_fffffe00;
  char acStack_1f0 [28];
  undefined4 uStack_1d4;
  undefined1 auStack_d4 [24];
  char acStack_bc [188];
  
  if (pEntity->pvPrivateData != (void *)0x0) {
    iVar3 = (pEntity->v).netname;
    if ((iVar3 != 0) && (gpGlobals->pStringBase[iVar3] != '\0')) {
      pbVar2 = (byte *)(*g_engfuncs.pfnInfoKeyValue)(infobuffer,&DAT_1009ceec);
      pbVar5 = (byte *)(gpGlobals->pStringBase + (pEntity->v).netname);
      do {
        bVar1 = *pbVar5;
        bVar6 = bVar1 < *pbVar2;
        if (bVar1 != *pbVar2) {
LAB_10010b13:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_10010b18;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar6 = bVar1 < pbVar2[1];
        if (bVar1 != pbVar2[1]) goto LAB_10010b13;
        pbVar5 = pbVar5 + 2;
        pbVar2 = pbVar2 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_10010b18:
      if (iVar3 != 0) {
        pcVar4 = (*g_engfuncs.pfnInfoKeyValue)(infobuffer,&DAT_1009ceec);
        _strncpy(acStack_1f0,pcVar4,0xff);
        pcVar4 = acStack_1f0;
        if (&stack0x00000000 != (undefined1 *)0x1f0) {
          do {
            if (*pcVar4 == '\0') break;
            if (*pcVar4 == '%') {
              *pcVar4 = ' ';
            }
            pcVar4 = pcVar4 + 1;
          } while (pcVar4 != (char *)0x0);
        }
        pcVar4 = acStack_1f0;
        infobuffer_00 = &DAT_1009ceec;
        iVar3 = (*g_engfuncs.pfnIndexOfEdict)(pEntity);
        (*g_engfuncs.pfnSetClientKeyValue)(iVar3,infobuffer_00,pcVar4,in_stack_fffffe00);
        (*g_engfuncs.pfnInfoKeyValue)(infobuffer,&DAT_1009ceec);
        sprintf(auStack_d4,(byte_conflict *)s____s_changed_name_to__s_1009ced0);
        (*g_engfuncs.pfnMessageBegin)(2,gmsgSayText,(float *)0x0,(edict_t *)0x0);
        iVar3 = (*g_engfuncs.pfnIndexOfEdict)(pEntity);
        (*g_engfuncs.pfnWriteByte)(iVar3);
        uStack_1d4 = 0x10010be5;
        (*g_engfuncs.pfnWriteString)(acStack_bc);
        (*g_engfuncs.pfnMessageEnd)();
        if (g_teamplay == 0) {
          (*g_engfuncs.pfnInfoKeyValue)(infobuffer,&DAT_1009ceec);
          (*g_engfuncs.pfnGetPlayerUserId)(pEntity);
          (*g_engfuncs.pfnGetPlayerAuthId)(pEntity);
          (*g_engfuncs.pfnGetPlayerUserId)(pEntity);
          pcVar4 = s___s<_i><_s><_i>__changed_name_to_1009ce80;
        }
        else {
          (*g_engfuncs.pfnInfoKeyValue)(infobuffer,&DAT_1009ceec);
          (*g_engfuncs.pfnInfoKeyValue)(infobuffer,s_model_1009cca4);
          (*g_engfuncs.pfnGetPlayerAuthId)(pEntity);
          (*g_engfuncs.pfnGetPlayerUserId)(pEntity);
          pcVar4 = s___s<_i><_s><_s>__changed_name_to_1009cea8;
        }
        UTIL_LogPrintf((byte_conflict *)pcVar4);
      }
    }
    iVar3 = *g_pGameRules;
    GetClassPtr<CBasePlayer>((int)&pEntity->v);
    (**(code **)(iVar3 + 0x60))();
  }
  return;
}

/* 10010cd0  pfnServerDeactivate  (30 bytes)
 * void pfnServerDeactivate(void)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnServerDeactivate(void)

{
  if (DAT_100a93c8 == 1) {
    DAT_100a93c8 = 0;
    FUN_10067160(&DAT_100d99d0);
    return;
  }
  return;
}

/* 10010cf0  pfnServerActivate  (154 bytes)
 * void pfnServerActivate(edict_t * pEdictList, int edictCount, int clientMax)
 */
void __cdecl pfnServerActivate(edict_t *pEdictList,int edictCount,int clientMax)

{
  int *piVar1;
  edict_t *peVar2;
  int iVar3;
  
  iVar3 = 0;
  DAT_100a93c8 = 1;
  if (0 < edictCount) {
    do {
      if (((pEdictList->free == 0) && (clientMax <= iVar3)) &&
         (pEdictList->pvPrivateData != (void *)0x0)) {
        peVar2 = pEdictList;
        if (((pEdictList == (edict_t *)0x0) &&
            (peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar2 == (edict_t *)0x0)) ||
           ((piVar1 = peVar2->pvPrivateData, piVar1 == (int *)0x0 ||
            ((*(uint *)(piVar1[1] + 0x1a4) & 0x80000000) != 0)))) {
          (*g_engfuncs.pfnAlertMessage)
                    (at_console,s_Can_t_instance__s_1009cef4,
                     gpGlobals->pStringBase + (pEdictList->v).classname);
        }
        else {
          (**(code **)(*piVar1 + 0x34))();
        }
      }
      iVar3 = iVar3 + 1;
      pEdictList = pEdictList + 1;
    } while (iVar3 < edictCount);
  }
  LinkUserMessages();
  return;
}

/* 10010d90  pfnPlayerPreThink  (24 bytes)
 * void pfnPlayerPreThink(edict_t * pEntity)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnPlayerPreThink(edict_t *pEntity)

{
  if ((pEntity != (edict_t *)0x0) && (pEntity->pvPrivateData != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10010da1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)pEntity->pvPrivateData + 0x158))();
    return;
  }
  return;
}

/* 10010db0  pfnPlayerPostThink  (24 bytes)
 * void pfnPlayerPostThink(edict_t * pEntity)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnPlayerPostThink(edict_t *pEntity)

{
  if ((pEntity != (edict_t *)0x0) && (pEntity->pvPrivateData != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10010dc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)pEntity->pvPrivateData + 0x15c))();
    return;
  }
  return;
}

/* 10010dd0  pfnParmsChangeLevel  (35 bytes)
 * void pfnParmsChangeLevel(void)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnParmsChangeLevel(void)

{
  void *pvVar1;
  undefined4 uVar2;
  
  pvVar1 = gpGlobals->pSaveData;
  if (pvVar1 != (void *)0x0) {
    uVar2 = BuildChangeList();
    *(undefined4 *)((int)pvVar1 + 0x24) = uVar2;
  }
  return;
}

/* 10010e00  pfnStartFrame  (129 bytes)
 * void pfnStartFrame(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnStartFrame(void)

{
  int iVar1;
  
  iVar1 = (*g_engfuncs.pfnIsDedicatedServer)();
  if ((iVar1 == 0) && (iVar1 = 1, 0 < gpGlobals->maxClients)) {
    do {
      _g_pCurrentBot = (int *)BotPlayerByIndex(iVar1);
      if ((_g_pCurrentBot != (int *)0x0) && (_g_pCurrentBot[0x53] == 1)) {
        CBotBrain::Think((CBotBrain *)(_g_pCurrentBot + 0x2de),_g_pCurrentBot);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 <= gpGlobals->maxClients);
  }
  if (g_pGameRules != (int *)0x0) {
    (**(code **)(*g_pGameRules + 4))();
  }
  if (g_fGameOver == 0) {
    gpGlobals->teamplay = (float)g_teamplay;
    _DAT_100ae4ac = _DAT_100ae4ac + 1;
  }
  return;
}

/* 10010e90  ClientPrecache  (806 bytes)
 * undefined ClientPrecache(void)
 * called by: CWorld::Precache
 */
void ClientPrecache(void)

{
  (*g_engfuncs.pfnPrecacheSound)(s_player_sprayer_wav_1009d4ac);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_fallpain3_wav_1009d494);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_step1_wav_1009d480);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_step2_wav_1009d46c);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_step3_wav_1009d458);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_step4_wav_1009d444);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_metal1_wav_1009d42c);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_metal2_wav_1009d414);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_metal3_wav_1009d3fc);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_metal4_wav_1009d3e4);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_dirt1_wav_1009d3d0);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_dirt2_wav_1009d3bc);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_dirt3_wav_1009d3a8);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_dirt4_wav_1009d394);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_duct1_wav_1009d380);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_duct2_wav_1009d36c);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_duct3_wav_1009d358);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_duct4_wav_1009d344);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_grate1_wav_1009d32c);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_grate2_wav_1009d314);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_grate3_wav_1009d2fc);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_grate4_wav_1009d2e4);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_slosh1_wav_1009d2cc);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_slosh2_wav_1009d2b4);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_slosh3_wav_1009d29c);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_slosh4_wav_1009d284);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_tile1_wav_1009d270);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_tile2_wav_1009d25c);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_tile3_wav_1009d248);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_tile4_wav_1009d234);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_tile5_wav_1009d220);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_swim1_wav_1009d20c);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_swim2_wav_1009d1f8);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_swim3_wav_1009d1e4);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_swim4_wav_1009d1d0);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_ladder1_wav_1009d1b8);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_ladder2_wav_1009d1a0);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_ladder3_wav_1009d188);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_ladder4_wav_1009d170);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_wade1_wav_1009d15c);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_wade2_wav_1009d148);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_wade3_wav_1009d134);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_wade4_wav_1009d120);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_wood1_wav_1009d10c);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_wood2_wav_1009d0f8);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_wood3_wav_1009d0e4);
  (*g_engfuncs.pfnPrecacheSound)(s_plats_train_use1_wav_1009d0cc);
  (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark5_wav_1009c424);
  (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark6_wav_1009c410);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_glass1_wav_1009d0b8);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_glass2_wav_1009d0a4);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_glass3_wav_1009d090);
  (*g_engfuncs.pfnPrecacheSound)(s_common_bodysplat_wav_1009d078);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_pain2_wav_1009d064);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_pain4_wav_1009d050);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_pain5_wav_1009d03c);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_pain6_wav_1009d028);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_pain7_wav_1009d014);
  (*g_engfuncs.pfnPrecacheModel)(s_models_player_mdl_1009cc1c);
  (*g_engfuncs.pfnPrecacheSound)(s_common_wpn_hudoff_wav_1009cffc);
  (*g_engfuncs.pfnPrecacheSound)(s_common_wpn_hudon_wav_1009cfe4);
  (*g_engfuncs.pfnPrecacheSound)(s_common_wpn_moveselect_wav_1009cfc8);
  (*g_engfuncs.pfnPrecacheSound)(s_common_wpn_select_wav_1009cfb0);
  (*g_engfuncs.pfnPrecacheSound)(s_common_wpn_denyselect_wav_1009cf94);
  (*g_engfuncs.pfnPrecacheSound)(s_player_geiger6_wav_1009cf80);
  (*g_engfuncs.pfnPrecacheSound)(s_player_geiger5_wav_1009cf6c);
  (*g_engfuncs.pfnPrecacheSound)(s_player_geiger4_wav_1009cf58);
  (*g_engfuncs.pfnPrecacheSound)(s_player_geiger3_wav_1009cf44);
  (*g_engfuncs.pfnPrecacheSound)(s_player_geiger2_wav_1009cf30);
  (*g_engfuncs.pfnPrecacheSound)(s_player_geiger1_wav_1009cf1c);
  if (DAT_100d96cc != 0) {
    UTIL_PrecacheOther(0x1009cf08);
  }
  return;
}

/* 100111c0  pfnGetGameDescription  (21 bytes)
 * char * pfnGetGameDescription(void)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * pfnGetGameDescription(void)

{
  char *pcVar1;
  
  if (g_pGameRules != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100111cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar1 = (char *)(**(code **)(*g_pGameRules + 0x24))();
    return pcVar1;
  }
  return s_Half_Life_1009d4c0;
}

/* 100111e0  pfnSys_Error  (22 bytes)
 * void pfnSys_Error(char * error_string)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnSys_Error(char *error_string)

{
  (*g_engfuncs.pfnAlertMessage)(at_error,s_Sys_Error___s_1009d4cc,error_string);
  return;
}

/* 10011200  pfnPlayerCustomization  (104 bytes)
 * void pfnPlayerCustomization(edict_t * pEntity, customization_t * pCustom)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnPlayerCustomization(edict_t *pEntity,customization_t *pCustom)

{
  resourcetype_t rVar1;
  
  if ((pEntity == (edict_t *)0x0) || (pEntity->pvPrivateData == (CBasePlayer *)0x0)) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_PlayerCustomization__Couldn_t_ge_1009d53c);
    return;
  }
  if (pCustom == (customization_t *)0x0) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_PlayerCustomization__NULL_custom_1009d510);
    return;
  }
  rVar1 = (pCustom->resource).type;
  if (-1 < (int)rVar1) {
    if ((int)rVar1 < 3) {
      return;
    }
    if (rVar1 == t_decal) {
      CBasePlayer::SetCustomDecalFrames(pEntity->pvPrivateData,pCustom->nUserData2);
      return;
    }
  }
  (*g_engfuncs.pfnAlertMessage)(at_console,s_PlayerCustomization__Unknown_cus_1009d4dc);
  return;
}

/* 10011270  pfnSpectatorConnect  (21 bytes)
 * void pfnSpectatorConnect(edict_t * pEntity)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnSpectatorConnect(edict_t *pEntity)

{
  if ((pEntity != (edict_t *)0x0) && (pEntity->pvPrivateData != (void *)0x0)) {
    FUN_1003e000((int)pEntity->pvPrivateData);
    return;
  }
  return;
}

/* 10011290  pfnSpectatorDisconnect  (21 bytes)
 * void pfnSpectatorDisconnect(edict_t * pEntity)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnSpectatorDisconnect(edict_t *pEntity)

{
  if ((pEntity != (edict_t *)0x0) && (pEntity->pvPrivateData != (CBaseEntity *)0x0)) {
    CBaseEntity::SUB_DoNothing(pEntity->pvPrivateData);
    return;
  }
  return;
}

/* 100112b0  pfnSpectatorThink  (21 bytes)
 * void pfnSpectatorThink(edict_t * pEntity)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnSpectatorThink(edict_t *pEntity)

{
  if ((pEntity != (edict_t *)0x0) && (pEntity->pvPrivateData != (void *)0x0)) {
    CBaseSpectator::SpectatorThink((int)pEntity->pvPrivateData);
    return;
  }
  return;
}

/* 100112d0  pfnSetupVisibility  (255 bytes)
 * void pfnSetupVisibility(edict_s * pViewEntity, edict_s * pClient, uchar * * pvs, uchar * * pas)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnSetupVisibility(edict_s *pViewEntity,edict_s *pClient,uchar **pvs,uchar **pas)

{
  edict_s *peVar1;
  uchar *puVar2;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_14;
  float fStack_10;
  float fStack_8;
  float fStack_4;
  
  peVar1 = pClient;
  if (pViewEntity != (edict_s *)0x0) {
    peVar1 = pViewEntity;
  }
  if (((pClient->v).flags & 0x100000U) == 0) {
    fStack_30 = (peVar1->v).view_ofs[0] + (peVar1->v).origin[0];
    fStack_2c = (peVar1->v).view_ofs[1] + (peVar1->v).origin[1];
    fStack_10 = (peVar1->v).view_ofs[2] + (peVar1->v).origin[2];
    fStack_1c = fStack_10;
    if (((peVar1->v).flags & 0x4000U) != 0) {
      fStack_4 = fStack_10 - 18.0;
      fStack_1c = fStack_4;
      fStack_8 = fStack_2c;
    }
    fStack_28 = fStack_1c;
    fStack_24 = fStack_30;
    fStack_20 = fStack_2c;
    fStack_14 = fStack_2c;
    puVar2 = (*g_engfuncs.pfnSetFatPVS)(&fStack_30);
    *pvs = puVar2;
    puVar2 = (*g_engfuncs.pfnSetFatPAS)(&fStack_30);
    *pas = puVar2;
    return;
  }
  *pvs = (uchar *)0x0;
  *pas = (uchar *)0x0;
  return;
}

/* 100113d0  pfnAddToFullPack  (1390 bytes)
 * int pfnAddToFullPack(entity_state_s * state, int e, edict_t * ent, edict_t * host, int hostflags, int player, uchar * pSet)
 */
int __cdecl
pfnAddToFullPack(entity_state_s *state,int e,edict_t *ent,edict_t *host,int hostflags,int player,
                uchar *pSet)

{
  byte bVar1;
  uint uVar2;
  byte_conflict bVar3;
  byte *pbVar4;
  edict_t *peVar5;
  void *pvVar6;
  int iVar7;
  entvars_t *peVar8;
  entity_state_s *peVar9;
  char *pcVar10;
  byte *pbVar11;
  bool bVar12;
  longlong lVar13;
  
  if (((((ent->v).effects == 0x80) && (ent != host)) || ((ent->v).modelindex == 0)) ||
     (gpGlobals->pStringBase + (ent->v).model == (char *)0x0)) {
    return 0;
  }
  if (((ent->v).flags & 0x4000000U) == 0) {
    if ((ent != host) && (iVar7 = (*g_engfuncs.pfnCheckVisibility)(ent,pSet), iVar7 == 0)) {
      return 0;
    }
  }
  else if (ent != host) {
    return 0;
  }
  if (((((ent->v).flags & 0x100U) != 0) && ((hostflags & 1U) != 0)) && ((ent->v).owner == host)) {
    return 0;
  }
  iVar7 = (host->v).groupinfo;
  if (iVar7 != 0) {
    FUN_10076210(iVar7,0);
    uVar2 = (ent->v).groupinfo;
    if (uVar2 != 0) {
      if (DAT_102eeb6c == 0) {
        if (((host->v).groupinfo & uVar2) == 0) {
          return 0;
        }
      }
      else if ((DAT_102eeb6c == 1) && (((host->v).groupinfo & uVar2) != 0)) {
        return 0;
      }
    }
    FUN_10076230();
  }
  peVar9 = state;
  for (iVar7 = 0x55; iVar7 != 0; iVar7 = iVar7 + -1) {
    peVar9->entityType = 0;
    peVar9 = (entity_state_s *)&peVar9->number;
  }
  state->number = e;
  state->entityType = 1;
  if (((ent->v).flags & 0x20000000U) != 0) {
    state->entityType = 2;
  }
  lVar13 = __ftol();
  state->animtime = (float)(int)lVar13 * 0.001;
  state->origin[0] = (ent->v).origin[0];
  state->origin[1] = (ent->v).origin[1];
  state->origin[2] = (ent->v).origin[2];
  state->angles[0] = (ent->v).angles[0];
  state->angles[1] = (ent->v).angles[1];
  state->angles[2] = (ent->v).angles[2];
  state->mins[0] = (ent->v).mins[0];
  state->mins[1] = (ent->v).mins[1];
  state->mins[2] = (ent->v).mins[2];
  state->maxs[0] = (ent->v).maxs[0];
  state->maxs[1] = (ent->v).maxs[1];
  state->maxs[2] = (ent->v).maxs[2];
  state->startpos[0] = (ent->v).startpos[0];
  state->startpos[1] = (ent->v).startpos[1];
  state->startpos[2] = (ent->v).startpos[2];
  state->endpos[0] = (ent->v).endpos[0];
  state->endpos[1] = (ent->v).endpos[1];
  state->endpos[2] = (ent->v).endpos[2];
  state->impacttime = (ent->v).impacttime;
  state->starttime = (ent->v).starttime;
  state->modelindex = (ent->v).modelindex;
  state->frame = (ent->v).frame;
  state->skin = (short)(ent->v).skin;
  state->effects = (ent->v).effects;
  if ((((player == 0) && ((ent->v).animtime != 0.0)) && ((ent->v).velocity[0] == 0.0)) &&
     (((ent->v).velocity[1] == 0.0 && ((ent->v).velocity[2] == 0.0)))) {
    state->eflags = state->eflags | 1;
  }
  state->scale = (ent->v).scale;
  state->solid = (short)(ent->v).solid;
  state->colormap = (ent->v).colormap;
  state->movetype = (ent->v).movetype;
  state->sequence = (ent->v).sequence;
  state->framerate = (ent->v).framerate;
  state->body = (ent->v).body;
  iVar7 = 0;
  do {
    state->controller[iVar7] = (ent->v).controller[iVar7];
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  iVar7 = 0;
  do {
    state->blending[iVar7] = (ent->v).blending[iVar7];
    iVar7 = iVar7 + 1;
  } while (iVar7 < 2);
  if (ent == (edict_t *)0x0) {
    peVar8 = (entvars_t *)0x0;
  }
  else {
    peVar8 = &ent->v;
  }
  pcVar10 = s_WorldGun_1009d570;
  pbVar4 = (byte *)(gpGlobals->pStringBase + peVar8->classname);
  do {
    bVar1 = *pbVar4;
    bVar12 = bVar1 < (byte)*pcVar10;
    if (bVar1 != *pcVar10) {
LAB_100116e1:
      iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_100116e6;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar12 = bVar1 < (byte)pcVar10[1];
    if (bVar1 != pcVar10[1]) goto LAB_100116e1;
    pbVar4 = pbVar4 + 2;
    pcVar10 = pcVar10 + 2;
  } while (bVar1 != 0);
  iVar7 = 0;
LAB_100116e6:
  if (iVar7 == 0) {
    peVar5 = ent;
    if ((ent == (edict_t *)0x0) &&
       (peVar5 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar5 == (edict_t *)0x0)) {
      pvVar6 = (void *)0x0;
    }
    else {
      pvVar6 = peVar5->pvPrivateData;
    }
    if (*(edict_t **)((int)pvVar6 + 0xc0) != host) goto LAB_10011713;
LAB_10011789:
    bVar3 = 'd';
    state->renderamt = 2;
    state->renderfx = 0x13;
    (state->rendercolor).r = 'd';
    (state->rendercolor).g = 'd';
  }
  else {
LAB_10011713:
    if (ent == (edict_t *)0x0) {
      peVar8 = (entvars_t *)0x0;
    }
    else {
      peVar8 = &ent->v;
    }
    pbVar11 = &DAT_1009d568;
    pbVar4 = (byte *)(gpGlobals->pStringBase + peVar8->classname);
    do {
      bVar1 = *pbVar4;
      bVar12 = bVar1 < *pbVar11;
      if (bVar1 != *pbVar11) {
LAB_1001175a:
        iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_1001175f;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar12 = bVar1 < pbVar11[1];
      if (bVar1 != pbVar11[1]) goto LAB_1001175a;
      pbVar4 = pbVar4 + 2;
      pbVar11 = pbVar11 + 2;
    } while (bVar1 != 0);
    iVar7 = 0;
LAB_1001175f:
    if (iVar7 == 0) {
      peVar5 = ent;
      if ((ent == (edict_t *)0x0) &&
         (peVar5 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar5 == (edict_t *)0x0)) {
        pvVar6 = (void *)0x0;
      }
      else {
        pvVar6 = peVar5->pvPrivateData;
      }
      if (*(edict_t **)((int)pvVar6 + 0x7c) == host) goto LAB_10011789;
    }
    state->rendermode = (ent->v).rendermode;
    lVar13 = __ftol();
    state->renderamt = (int)lVar13;
    state->renderfx = (ent->v).renderfx;
    lVar13 = __ftol();
    (state->rendercolor).r = (byte_conflict)lVar13;
    lVar13 = __ftol();
    (state->rendercolor).g = (byte_conflict)lVar13;
    lVar13 = __ftol();
    bVar3 = (byte_conflict)lVar13;
  }
  (state->rendercolor).b = bVar3;
  state->aiment = 0;
  peVar5 = (ent->v).aiment;
  if (peVar5 != (edict_t *)0x0) {
    iVar7 = (*g_engfuncs.pfnIndexOfEdict)(peVar5);
    state->aiment = iVar7;
  }
  state->owner = 0;
  peVar5 = (ent->v).owner;
  if (((peVar5 != (edict_t *)0x0) && (iVar7 = (*g_engfuncs.pfnIndexOfEdict)(peVar5), 0 < iVar7)) &&
     (iVar7 <= gpGlobals->maxClients)) {
    state->owner = iVar7;
  }
  if (player == 0) {
    state->iuser4 = (ent->v).iuser4;
    state->playerclass = (ent->v).playerclass;
    return 1;
  }
  state->basevelocity[0] = (ent->v).basevelocity[0];
  state->basevelocity[1] = (ent->v).basevelocity[1];
  state->basevelocity[2] = (ent->v).basevelocity[2];
  state->velocity[0] = (ent->v).velocity[0];
  state->velocity[1] = (ent->v).velocity[1];
  state->velocity[2] = (ent->v).velocity[2];
  iVar7 = (*g_engfuncs.pfnModelIndex)(gpGlobals->pStringBase + (ent->v).weaponmodel);
  state->weaponmodel = iVar7;
  state->gaitsequence = (ent->v).gaitsequence;
  state->spectator = (ent->v).flags & 0x4000000;
  state->friction = (ent->v).friction;
  state->gravity = (ent->v).gravity;
  state->usehull = (uint)(ent->v).flags >> 0xe & 1;
  lVar13 = __ftol();
  state->health = (int)lVar13;
  state->iuser4 = (ent->v).iuser4;
  return 1;
}

/* 10011940  pfnCreateBaseline  (413 bytes)
 * void pfnCreateBaseline(int player, int eindex, entity_state_s * baseline, edict_s * entity, int playermodelindex, vec3_t player_mins, vec3_t player_maxs)
 */
void __cdecl
pfnCreateBaseline(int player,int eindex,entity_state_s *baseline,edict_s *entity,
                 int playermodelindex,vec3_t player_mins,vec3_t player_maxs)

{
  float fVar1;
  vec_t vVar2;
  longlong lVar3;
  
  baseline->origin[0] = (entity->v).origin[0];
  baseline->origin[1] = (entity->v).origin[1];
  baseline->origin[2] = (entity->v).origin[2];
  baseline->angles[0] = (entity->v).angles[0];
  baseline->angles[1] = (entity->v).angles[1];
  baseline->angles[2] = (entity->v).angles[2];
  baseline->frame = (entity->v).frame;
  baseline->skin = (short)(entity->v).skin;
  baseline->rendermode = (uint)(byte)(entity->v).rendermode;
  lVar3 = __ftol();
  baseline->renderamt = (uint)lVar3 & 0xff;
  lVar3 = __ftol();
  (baseline->rendercolor).r = (byte_conflict)lVar3;
  lVar3 = __ftol();
  (baseline->rendercolor).g = (byte_conflict)lVar3;
  lVar3 = __ftol();
  (baseline->rendercolor).b = (byte_conflict)lVar3;
  baseline->renderfx = (uint)(byte)(entity->v).renderfx;
  if (player != 0) {
    baseline->mins[0] = player_mins[0];
    baseline->mins[1] = player_mins[1];
    baseline->mins[2] = player_mins[2];
    baseline->maxs[0] = player_maxs[0];
    baseline->maxs[1] = player_maxs[1];
    baseline->colormap = eindex;
    baseline->maxs[2] = player_maxs[2];
    baseline->modelindex = playermodelindex;
    baseline->friction = 1.0;
    baseline->movetype = 3;
    fVar1 = (entity->v).scale;
    baseline->solid = 3;
    baseline->scale = fVar1;
    baseline->framerate = 1.0;
    baseline->gravity = 1.0;
    return;
  }
  baseline->mins[0] = (entity->v).mins[0];
  baseline->mins[1] = (entity->v).mins[1];
  baseline->mins[2] = (entity->v).mins[2];
  baseline->maxs[0] = (entity->v).maxs[0];
  baseline->maxs[1] = (entity->v).maxs[1];
  vVar2 = (entity->v).maxs[2];
  baseline->colormap = 0;
  baseline->maxs[2] = vVar2;
  baseline->modelindex = (entity->v).modelindex;
  baseline->movetype = (entity->v).movetype;
  baseline->scale = (entity->v).scale;
  baseline->solid = (short)(entity->v).solid;
  baseline->framerate = (entity->v).framerate;
  baseline->gravity = (entity->v).gravity;
  return;
}

/* 10011f70  pfnRegisterEncoders  (52 bytes)
 * void pfnRegisterEncoders(void)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnRegisterEncoders(void)

{
  (*g_engfuncs.pfnDeltaAddEncoder)(s_Entity_Encode_1009d59c,FUN_10011b50);
  (*g_engfuncs.pfnDeltaAddEncoder)(s_Custom_Encode_1009d58c,FUN_10011e80);
  (*g_engfuncs.pfnDeltaAddEncoder)(s_Player_Encode_1009d57c,FUN_10011cf0);
  return;
}

/* 10011fb0  pfnGetWeaponData  (463 bytes)
 * int pfnGetWeaponData(edict_s * player, weapon_data_s * info)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pfnGetWeaponData(edict_s *player,weapon_data_s *info)

{
  weapon_data_s *pwVar1;
  float fVar2;
  int *piVar3;
  weapon_data_s *pwVar4;
  edict_t *peVar5;
  int *piVar6;
  int iVar7;
  void *pvVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 auStack_2c [8];
  int iStack_c;
  
  pwVar4 = info;
  peVar5 = (player->v).pContainingEntity;
  if ((peVar5 == (edict_t *)0x0) &&
     (peVar5 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar5 == (edict_t *)0x0)) {
    pvVar8 = (void *)0x0;
  }
  else {
    pvVar8 = peVar5->pvPrivateData;
  }
  for (iVar7 = 0x2c0; iVar7 != 0; iVar7 = iVar7 + -1) {
    info->m_iId = 0;
    info = (weapon_data_s *)&info->m_iClip;
  }
  if (pvVar8 == (void *)0x0) {
    return 1;
  }
  piVar9 = (int *)((int)pvVar8 + 0x9e4);
  info = (weapon_data_s *)0x6;
  do {
    piVar3 = (int *)*piVar9;
    if (piVar3 != (int *)0x0) {
      for (; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[0x1d]) {
        piVar6 = (int *)(**(code **)(*piVar3 + 0x150))();
        if ((piVar6 != (int *)0x0) && (iVar7 = (**(code **)(*piVar6 + 400))(), iVar7 != 0)) {
          puVar10 = auStack_2c;
          for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          (**(code **)(*piVar6 + 0x118))(auStack_2c);
          if ((-1 < iStack_c) && (iStack_c < 0x20)) {
            pwVar1 = pwVar4 + iStack_c;
            pwVar1->m_iId = iStack_c;
            pwVar1->m_iClip = piVar6[0x29];
            if ((float)piVar6[0x26] <= -0.001) {
              fVar2 = -0.001;
            }
            else {
              fVar2 = (float)piVar6[0x26];
            }
            pwVar1->m_flTimeWeaponIdle = fVar2;
            if ((float)piVar6[0x23] <= -0.001) {
              fVar2 = -0.001;
            }
            else {
              fVar2 = (float)piVar6[0x23];
            }
            pwVar1->m_flNextPrimaryAttack = fVar2;
            if ((float)piVar6[0x24] <= -0.001) {
              fVar2 = -0.001;
            }
            else {
              fVar2 = (float)piVar6[0x24];
            }
            pwVar1->m_flNextSecondaryAttack = fVar2;
            pwVar1->m_fInReload = piVar6[0x2c];
            pwVar1->m_fInSpecialReload = piVar6[0x22];
            if (*(float *)(piVar6[1] + 0x254) <= -0.001) {
              fVar2 = -0.001;
            }
            else {
              fVar2 = *(float *)(piVar6[1] + 0x254);
            }
            pwVar1->fuser1 = fVar2;
            pwVar1->fuser2 = (float)piVar6[0x10];
            pwVar1->fuser3 = (float)piVar6[0x11];
            pwVar1->iuser1 = piVar6[0x12];
            pwVar1->iuser2 = piVar6[0x13];
            pwVar1->iuser3 = piVar6[0x14];
          }
        }
      }
    }
    piVar9 = piVar9 + 1;
    info = (weapon_data_s *)((int)&info[-1].fuser4 + 3);
  } while (info != (weapon_data_s *)0x0);
  return 1;
}

/* 10012180  pfnUpdateClientData  (916 bytes)
 * void pfnUpdateClientData(edict_s * ent, int sendweapons, clientdata_s * cd)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnUpdateClientData(edict_s *ent,int sendweapons,clientdata_s *cd)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  char *pcVar4;
  edict_t *peVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  longlong lVar12;
  undefined4 auStack_2c [7];
  int iStack_10;
  
  cd->flags = (ent->v).flags;
  cd->health = (ent->v).health;
  iVar3 = (*g_engfuncs.pfnModelIndex)(gpGlobals->pStringBase + (ent->v).viewmodel);
  cd->viewmodel = iVar3;
  cd->waterlevel = (ent->v).waterlevel;
  cd->watertype = (ent->v).watertype;
  cd->weapons = (ent->v).weapons;
  cd->origin[0] = (ent->v).origin[0];
  cd->origin[1] = (ent->v).origin[1];
  cd->origin[2] = (ent->v).origin[2];
  cd->velocity[0] = (ent->v).velocity[0];
  cd->velocity[1] = (ent->v).velocity[1];
  cd->velocity[2] = (ent->v).velocity[2];
  cd->view_ofs[0] = (ent->v).view_ofs[0];
  cd->view_ofs[1] = (ent->v).view_ofs[1];
  cd->view_ofs[2] = (ent->v).view_ofs[2];
  cd->punchangle[0] = (ent->v).punchangle[0];
  cd->punchangle[1] = (ent->v).punchangle[1];
  cd->punchangle[2] = (ent->v).punchangle[2];
  cd->bInDuck = (ent->v).bInDuck;
  cd->flTimeStepSound = (ent->v).flTimeStepSound;
  cd->flDuckTime = (ent->v).flDuckTime;
  cd->flSwimTime = (ent->v).flSwimTime;
  lVar12 = __ftol();
  cd->waterjumptime = (int)lVar12;
  pcVar4 = (*g_engfuncs.pfnGetPhysicsInfoString)(ent);
  uVar7 = 0xffffffff;
  do {
    pcVar10 = pcVar4;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar10 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar10;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar4 = pcVar10 + -uVar7;
  pcVar10 = cd->physinfo;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar10 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar10 = pcVar10 + 1;
  }
  cd->maxspeed = (ent->v).maxspeed;
  cd->fov = (ent->v).fov;
  cd->weaponanim = (ent->v).weaponanim;
  cd->pushmsec = (ent->v).pushmsec;
  cd->fuser1 = (ent->v).fuser1;
  cd->iuser4 = (ent->v).iuser4;
  cd->iuser1 = (ent->v).iuser1;
  cd->iuser2 = (ent->v).iuser2;
  cd->vuser3[0] = 0.0;
  if (sendweapons != 0) {
    peVar5 = (ent->v).pContainingEntity;
    if ((peVar5 == (edict_t *)0x0) &&
       (peVar5 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar5 == (edict_t *)0x0)) {
      return;
    }
    pvVar2 = peVar5->pvPrivateData;
    if (pvVar2 != (void *)0x0) {
      cd->m_flNextAttack = *(float *)((int)pvVar2 + 0x118);
      cd->vuser1[1] = (float)*(int *)((int)pvVar2 + 0x710);
      cd->ammo_shells = 0;
      cd->ammo_rockets = *(int *)((int)pvVar2 + 0x30);
      cd->ammo_cells = *(int *)((int)pvVar2 + 0x34);
      cd->vuser3[0] = 0.0;
      if (((*(int **)((int)pvVar2 + 0x9fc) != (int *)0x0) &&
          (piVar6 = (int *)(**(code **)(**(int **)((int)pvVar2 + 0x9fc) + 0x150))(),
          piVar6 != (int *)0x0)) && (iVar3 = (**(code **)(*piVar6 + 400))(), iVar3 != 0)) {
        iVar3 = *piVar6;
        puVar11 = auStack_2c;
        for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
        (**(code **)(iVar3 + 0x118))(auStack_2c);
        cd->vuser3[0] = 0.0;
        cd->m_iId = iStack_10;
        if (iStack_10 == 0x10) {
          cd->vuser3[0] = (float)piVar6[0x2e];
          if (piVar6[0x2f] != 0) {
            cd->vuser3[1] = (float)*(byte *)(piVar6[0x2f] + 2);
            cd->vuser3[2] = (float)*(int *)(piVar6[0x2f] + 0x10);
            cd->vuser4[0] = (float)*(byte *)(piVar6[0x2f] + 0x24);
            cd->vuser4[1] = (float)*(int *)(piVar6[0x2f] + 4);
            cd->ammo_nails = *(int *)(piVar6[0x2f] + 0x1c);
            iVar3 = piVar6[0x30];
            if (iVar3 != 0) {
              if (*(int *)(iVar3 + 200) == -1) {
                iVar3 = *(int *)(iVar3 + 0xcc);
                if ((iVar3 != -1) && (iVar3 != piVar6[0x2e])) {
                  cd->ammo_shells = piVar6[iVar3 * 0xe + 0x42];
                }
              }
              else {
                cd->ammo_shells = piVar6[*(int *)(iVar3 + 200) * 0xe + 0x42];
              }
            }
            cd->vuser4[2] = (float)*(int *)(piVar6[0x2f] + 0xc);
            cd->vuser2[0] = (float)*(int *)(piVar6[0x2f] + 8);
            cd->vuser2[1] = (float)piVar6[*(byte *)(piVar6[0x30] + 8) + 0x31];
            cd->vuser2[2] = (float)*(byte *)(piVar6[0x2f] + 0x2c);
            cd->vuser1[2] = (float)*(int *)(piVar6[0x2f] + 0x14);
            return;
          }
          cd->vuser3[1] = (float)piVar6[0x27c];
          cd->vuser3[2] = (float)piVar6[0x27b];
        }
      }
    }
  }
  return;
}

/* 10012520  pfnCmdStart  (72 bytes)
 * void pfnCmdStart(edict_t * player, usercmd_s * cmd, uint random_seed)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnCmdStart(edict_t *player,usercmd_s *cmd,uint random_seed)

{
  void *pvVar1;
  int iVar2;
  edict_t *peVar3;
  
  peVar3 = (player->v).pContainingEntity;
  if ((peVar3 == (edict_t *)0x0) &&
     (peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar3 == (edict_t *)0x0)) {
    return;
  }
  pvVar1 = peVar3->pvPrivateData;
  if (pvVar1 != (void *)0x0) {
    iVar2 = *(int *)(*(int *)((int)pvVar1 + 4) + 0x240);
    if (iVar2 != 0) {
      FUN_10076210(iVar2,0);
    }
    *(uint *)((int)pvVar1 + 0x7d8) = random_seed;
  }
  return;
}

/* 10012570  pfnCmdEnd  (54 bytes)
 * void pfnCmdEnd(edict_t * player)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnCmdEnd(edict_t *player)

{
  edict_t *peVar1;
  
  peVar1 = (player->v).pContainingEntity;
  if ((peVar1 == (edict_t *)0x0) &&
     (peVar1 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar1 == (edict_t *)0x0)) {
    return;
  }
  if ((peVar1->pvPrivateData != (void *)0x0) &&
     (*(int *)(*(int *)((int)peVar1->pvPrivateData + 4) + 0x240) != 0)) {
    FUN_10076230();
    return;
  }
  return;
}

/* 100125b0  pfnConnectionlessPacket  (13 bytes)
 * int pfnConnectionlessPacket(netadr_s * net_from, char * args, char * response_buffer, int * response_buffer_size)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pfnConnectionlessPacket
              (netadr_s *net_from,char *args,char *response_buffer,int *response_buffer_size)

{
  *response_buffer_size = 0;
  return 0;
}

/* 100125c0  pfnGetHullBounds  (22 bytes)
 * int pfnGetHullBounds(int hullnumber, float * mins, float * maxs)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pfnGetHullBounds(int hullnumber,float *mins,float *maxs)

{
  int iVar1;
  
  iVar1 = 0;
  if (((hullnumber == 0) || (hullnumber == 1)) || (hullnumber == 2)) {
    iVar1 = 1;
  }
  return iVar1;
}

/* 100125e0  pfnInconsistentFile  (59 bytes)
 * int pfnInconsistentFile(edict_s * player, char * filename, char * disconnect_message)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pfnInconsistentFile(edict_s *player,char *filename,char *disconnect_message)

{
  float10 fVar1;
  
  fVar1 = (float10)(*g_engfuncs.pfnCVarGetFloat)(s_mp_consistency_1009d5dc);
  if (fVar1 != (float10)1.0) {
    return 0;
  }
  sprintf(disconnect_message,(byte_conflict *)s_Server_is_enforcing_file_consist_1009d5ac);
  return 1;
}

/* 10012620  GetClassPtr<CBasePlayer>  (173 bytes)
 * undefined GetClassPtr<CBasePlayer>(int param_1)
 * called by: BotPlayerByIndex, CEnvSound::Think, CTSDMHill::WaitTouch, CTriggerHurt::RadiationThink, Host_Say, pfnClientCommand, pfnClientPutInServer, pfnClientUserInfoChanged, player, respawn
 */
void __cdecl GetClassPtr<CBasePlayer>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  void *pvStack_c;
  code *pcStack_8;
  void *pvStack_4;
  
  pvStack_4 = (void *)0xffffffff;
  pcStack_8 = FUN_10088ce1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((param_1 == 0) &&
     (ExceptionList = &pvStack_c, peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0
     )) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xb78),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CBaseMonster::vftable;
    pcStack_8 = (code *)puVar3;
    CTSAnimation::CTSAnimation((int)(puVar3 + 0x9e));
    *puVar3 = &CBasePlayer::vftable;
    puVar3[1] = param_1;
    ExceptionList = pvStack_4;
    return;
  }
  iRam00000004 = peVar1;
  ExceptionList = pvStack_c;
  return;
}

/* 10015a20  PlayLockSounds  (544 bytes)
 * undefined PlayLockSounds(int param_1, int * param_2, int param_3, float param_4)
 * called by: CBaseButton::ButtonActivate, CBaseButton::ButtonTouch, CBaseDoor::DoorActivate, CBaseDoor::DoorTouch
 */
void __cdecl PlayLockSounds(int param_1,int *param_2,int param_3,float param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  int *piVar6;
  float fVar7;
  uint uVar8;
  
  fVar7 = param_4;
  piVar6 = param_2;
  param_4 = 0.5;
  if (fVar7 == 0.0) {
    param_4 = 3.0;
  }
  if (param_3 == 0) {
    piVar1 = param_2 + 2;
    if ((*piVar1 == 0) || (gpGlobals->time <= (float)param_2[6])) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (((param_2[3] == 0) || (*(char *)((int)param_2 + 0x21) != '\0')) ||
       (gpGlobals->time <= (float)param_2[7])) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((!bVar4) || (param_2 = (int *)0x3e800000, !bVar5)) {
      param_2 = (int *)0x3f800000;
    }
    if (bVar4) {
      EMIT_SOUND_DYN(*(void **)(param_1 + 0x208),*(void **)(param_1 + 0x208),3,
                     gpGlobals->pStringBase + *piVar1,param_2,0x3f4ccccd,0);
      piVar6[6] = (int)(param_4 + gpGlobals->time);
    }
    if (!bVar5) {
      return;
    }
    uVar3 = piVar6[5];
    uVar8 = SENTENCEG_PlaySequentialSz
                      (*(void **)(param_1 + 0x208),
                       (byte_conflict *)(gpGlobals->pStringBase + piVar6[3]),0x3f59999a,0x3f4ccccd,0
                       ,100,uVar3,0);
    piVar6[5] = uVar8;
    piVar6[4] = 0;
    *(bool *)((int)piVar6 + 0x21) = uVar3 == uVar8;
  }
  else {
    iVar2 = *param_2;
    if ((iVar2 == 0) || (gpGlobals->time <= (float)param_2[6])) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (((param_2[1] == 0) || ((char)param_2[8] != '\0')) || (gpGlobals->time <= (float)param_2[7]))
    {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((!bVar4) || (param_2 = (int *)0x3e800000, !bVar5)) {
      param_2 = (int *)0x3f800000;
    }
    if (bVar4) {
      EMIT_SOUND_DYN(gpGlobals->pStringBase + iVar2,*(undefined4 *)(param_1 + 0x208),3,
                     gpGlobals->pStringBase + iVar2,param_2,0x3f4ccccd,0);
      piVar6[6] = (int)(param_4 + gpGlobals->time);
    }
    if (!bVar5) {
      return;
    }
    uVar3 = piVar6[4];
    uVar8 = SENTENCEG_PlaySequentialSz
                      (*(void **)(param_1 + 0x208),
                       (byte_conflict *)(gpGlobals->pStringBase + piVar6[1]),0x3f59999a,0x3f4ccccd,0
                       ,100,uVar3,0);
    piVar6[4] = uVar8;
    piVar6[5] = 0;
    *(bool *)(piVar6 + 8) = uVar3 == uVar8;
  }
  piVar6[7] = (int)(gpGlobals->time + 6.0);
  return;
}

/* 100160d0  func_door  (12 bytes)
 * undefined func_door(int param_1)
 */
void __cdecl func_door(int param_1)

{
                    /* 0x160d0  208  func_door
                       0x160d0  235  func_water */
  GetClassPtr<CBaseDoor>(param_1);
  return;
}

/* 10017eb0  func_door_rotating  (12 bytes)
 * undefined func_door_rotating(int param_1)
 */
void __cdecl func_door_rotating(int param_1)

{
                    /* 0x17eb0  209  func_door_rotating */
  GetClassPtr<CRotDoor>(param_1);
  return;
}

/* 100183e0  momentary_door  (12 bytes)
 * undefined momentary_door(int param_1)
 */
void __cdecl momentary_door(int param_1)

{
                    /* 0x183e0  273  momentary_door */
  GetClassPtr<CMomentaryDoor>(param_1);
  return;
}

/* 10018a50  GetClassPtr<CBaseDoor>  (169 bytes)
 * undefined GetClassPtr<CBaseDoor>(int param_1)
 * called by: CBaseDoor::Blocked, func_door
 */
void __cdecl GetClassPtr<CBaseDoor>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  void *pvStack_c;
  code *pcStack_8;
  void *pvStack_4;
  
  pvStack_4 = (void *)0xffffffff;
  pcStack_8 = FUN_10088d01;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((param_1 == 0) &&
     (ExceptionList = &pvStack_c, peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0
     )) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x154),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CBaseDoor::vftable;
    pcStack_8 = (code *)puVar3;
    EHANDLE::operator=((EHANDLE *)(puVar3 + 0x3c),0);
    puVar3[1] = param_1;
    ExceptionList = pvStack_4;
    return;
  }
  iRam00000004 = peVar1;
  ExceptionList = pvStack_c;
  return;
}

/* 10018b10  GetClassPtr<CRotDoor>  (188 bytes)
 * undefined GetClassPtr<CRotDoor>(int param_1)
 * called by: func_door_rotating
 */
void __cdecl GetClassPtr<CRotDoor>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  void *pvStack_c;
  code *pcStack_8;
  void *pvStack_4;
  
  pvStack_4 = (void *)0xffffffff;
  pcStack_8 = FUN_10088d21;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((param_1 == 0) &&
     (ExceptionList = &pvStack_c, peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0
     )) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x154),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CBaseDoor::vftable;
    pcStack_8 = (code *)puVar3;
    EHANDLE::operator=((EHANDLE *)(puVar3 + 0x3c),0);
    *puVar3 = &CRotDoor::vftable;
    EHANDLE::operator=((EHANDLE *)(puVar3 + 0x3c),0);
    puVar3[1] = param_1;
    ExceptionList = pvStack_4;
    return;
  }
  iRam00000004 = peVar1;
  ExceptionList = pvStack_c;
  return;
}

/* 10018bd0  GetClassPtr<CMomentaryDoor>  (79 bytes)
 * undefined GetClassPtr<CMomentaryDoor>(int param_1)
 * called by: momentary_door
 */
void __cdecl GetClassPtr<CMomentaryDoor>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xf4), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CMomentaryDoor::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10018c20  info_landmark  (12 bytes)
 * undefined info_landmark(int param_1)
 */
void __cdecl info_landmark(int param_1)

{
                    /* 0x18c20  250  info_landmark
                       0x18c20  258  info_target
                       0x18c20  259  info_teleport_destination */
  GetClassPtr<CPointEntity>(param_1);
  return;
}

/* 10018c30  env_bubbles  (12 bytes)
 * undefined env_bubbles(int param_1)
 */
void __cdecl env_bubbles(int param_1)

{
                    /* 0x18c30  188  env_bubbles */
  GetClassPtr<CBubbling>(param_1);
  return;
}

/* 10019000  beam  (12 bytes)
 * undefined beam(int param_1)
 */
void __cdecl beam(int param_1)

{
                    /* 0x19000  176  beam */
  GetClassPtr<CBeam>(param_1);
  return;
}

/* 100195d0  env_beam  (12 bytes)
 * undefined env_beam(int param_1)
 */
void __cdecl env_beam(int param_1)

{
                    /* 0x195d0  185  env_beam
                       0x195d0  196  env_lightning */
  GetClassPtr<CLightning>(param_1);
  return;
}

/* 1001ac10  env_laser  (12 bytes)
 * undefined env_laser(int param_1)
 */
void __cdecl env_laser(int param_1)

{
                    /* 0x1ac10  195  env_laser */
  GetClassPtr<CLaser>(param_1);
  return;
}

/* 1001b2f0  env_glow  (12 bytes)
 * undefined env_glow(int param_1)
 */
void __cdecl env_glow(int param_1)

{
                    /* 0x1b2f0  194  env_glow */
  GetClassPtr<CGlow>(param_1);
  return;
}

/* 1001b4e0  env_sprite  (12 bytes)
 * undefined env_sprite(int param_1)
 */
void __cdecl env_sprite(int param_1)

{
                    /* 0x1b4e0  203  env_sprite */
  GetClassPtr<CSprite>(param_1);
  return;
}

/* 1001ba40  gibshooter  (12 bytes)
 * undefined gibshooter(int param_1)
 */
void __cdecl gibshooter(int param_1)

{
                    /* 0x1ba40  247  gibshooter */
  GetClassPtr<CGibShooter>(param_1);
  return;
}

/* 1001c100  env_shooter  (12 bytes)
 * undefined env_shooter(int param_1)
 */
void __cdecl env_shooter(int param_1)

{
                    /* 0x1c100  200  env_shooter */
  GetClassPtr<CEnvShooter>(param_1);
  return;
}

/* 1001c370  test_effect  (12 bytes)
 * undefined test_effect(int param_1)
 */
void __cdecl test_effect(int param_1)

{
                    /* 0x1c370  288  test_effect */
  GetClassPtr<CTestEffect>(param_1);
  return;
}

/* 1001c680  env_blood  (12 bytes)
 * undefined env_blood(int param_1)
 */
void __cdecl env_blood(int param_1)

{
                    /* 0x1c680  187  env_blood */
  GetClassPtr<CBlood>(param_1);
  return;
}

/* 1001cad0  env_shake  (12 bytes)
 * undefined env_shake(int param_1)
 */
void __cdecl env_shake(int param_1)

{
                    /* 0x1cad0  199  env_shake */
  GetClassPtr<CShake>(param_1);
  return;
}

/* 1001cce0  env_fade  (12 bytes)
 * undefined env_fade(int param_1)
 */
void __cdecl env_fade(int param_1)

{
                    /* 0x1cce0  191  env_fade */
  GetClassPtr<CFade>(param_1);
  return;
}

/* 1001cf80  env_message  (12 bytes)
 * undefined env_message(int param_1)
 */
void __cdecl env_message(int param_1)

{
                    /* 0x1cf80  197  env_message */
  GetClassPtr<CMessage>(param_1);
  return;
}

/* 1001d2a0  env_funnel  (12 bytes)
 * undefined env_funnel(int param_1)
 */
void __cdecl env_funnel(int param_1)

{
                    /* 0x1d2a0  192  env_funnel */
  GetClassPtr<CEnvFunnel>(param_1);
  return;
}

/* 1001d390  env_beverage  (12 bytes)
 * undefined env_beverage(int param_1)
 */
void __cdecl env_beverage(int param_1)

{
                    /* 0x1d390  186  env_beverage */
  GetClassPtr<CEnvBeverage>(param_1);
  return;
}

/* 1001d4a0  item_sodacan  (12 bytes)
 * undefined item_sodacan(int param_1)
 */
void __cdecl item_sodacan(int param_1)

{
                    /* 0x1d4a0  266  item_sodacan */
  GetClassPtr<CItemSoda>(param_1);
  return;
}

