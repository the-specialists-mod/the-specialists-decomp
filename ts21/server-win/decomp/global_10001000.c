/* mp.dll - global_10001000 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10001000  Write_ak47  (624 bytes)
 * undefined Write_ak47(undefined1 * param_1)
 * called by: FUN_10049890
 */
void __cdecl Write_ak47(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  *(undefined2 *)(param_1 + 200) = 0xd;
  *(undefined4 *)(param_1 + 0x40) = 0xd;
  pcVar2 = &DAT_1008f104;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x1e;
  param_1[8] = 6;
  *(undefined4 *)(param_1 + 0xc) = 3;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined4 *)(param_1 + 0x14) = 0x40200000;
  *(undefined4 *)(param_1 + 0x18) = 0x3da3d70a;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x28) = 0x3b449ba6;
  *(undefined4 *)(param_1 + 0x30) = 0x40c00000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x20;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f0c0)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_sprites_weapons_ak47_spr_1008f0e8;
  param_1[0x84] = 4;
  param_1[0x85] = 3;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f062)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_556_shell_mdl_1008f0d0;
  param_1[0xca] = 0x28;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd0) = 3000;
  *(undefined4 *)(param_1 + 0xd8) = 8;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008eff0)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1008f0bc;
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 1;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008ef92)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_ak47_mdl_1008f0a8;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008ef3e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f27e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1008f094;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008eeaa)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_twohanded_1008f088;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008ee5e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x2a8) = 2;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x2aa) = 7;
  *(undefined2 *)(param_1 + 0x2ac) = 7;
  *(undefined2 *)(param_1 + 0x2ae) = 7;
  *(undefined2 *)(param_1 + 0x2b0) = 7;
  pcVar2 = s_weapons_ak47_fire_wav_1008f070;
  *(undefined2 *)(param_1 + 0x26c) = 1;
  *(undefined2 *)(param_1 + 0x270) = 3;
  *(undefined2 *)(param_1 + 0x272) = 3;
  *(undefined2 *)(param_1 + 0x274) = 3;
  *(undefined2 *)(param_1 + 0x276) = 3;
  *(undefined2 *)(param_1 + 0x278) = 5;
  *(undefined2 *)(param_1 + 0x2a4) = 4;
  *(undefined2 *)(param_1 + 0x2a6) = 8;
  *(undefined2 *)(param_1 + 0x2b2) = 6;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008ed92)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f10a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  param_1[0x360] = 6;
  *(undefined4 *)(param_1 + 0x364) = 0x15;
  param_1[0x368] = 1;
  *(undefined4 *)(param_1 + 0x36c) = 0x20;
  *(undefined4 *)(param_1 + 0x370) = 8;
  return;
}

/* 10001280  Write_aug  (568 bytes)
 * undefined Write_aug(undefined1 * param_1)
 * called by: FUN_10049890
 */
void __cdecl Write_aug(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = s_STEYR_AUG_1008f1b4;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x1e;
  param_1[8] = 4;
  *(undefined4 *)(param_1 + 0xc) = 3;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0x4019999a;
  *(undefined4 *)(param_1 + 0x18) = 0x3dbc6a7f;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x28) = 0x3ba3d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x406147ae;
  *(undefined4 *)(param_1 + 0x34) = 0x3ca3d70a;
  *(undefined4 *)(param_1 + 0x3c) = 0x28;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f170)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_sprites_weapons_aug_spr_1008f19c;
  param_1[0x84] = 4;
  param_1[0x85] = 4;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f116)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_556_shell_mdl_1008f0d0;
  param_1[0xca] = 0x28;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd0) = 5000;
  *(undefined4 *)(param_1 + 0xd8) = 0xb;
  *(undefined4 *)(param_1 + 0xdc) = 8;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008eff0)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_v_aug_mdl_1008f188;
  *(undefined2 *)(param_1 + 0x120) = 1;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f05e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_aug_mdl_1008f174;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f00a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_aug_sil_mdl_1008f15c;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008efb2)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_w_aug_mdl_1008f148;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008ef5e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_twohanded_1008f088;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008ee5e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_1 + 0x270) = 2;
  *(undefined2 *)(param_1 + 0x272) = 2;
  *(undefined2 *)(param_1 + 0x274) = 2;
  *(undefined2 *)(param_1 + 0x276) = 2;
  pcVar2 = s_weapons_aug_aug_fire_wav_1008f12c;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 3;
  *(undefined2 *)(param_1 + 0x26e) = 1;
  *(undefined2 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008ee4e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_weapons_aug_aug_fire_sil_wav_1008f10c;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008edee)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  param_1[0x360] = 6;
  *(undefined4 *)(param_1 + 0x364) = 0x12;
  param_1[0x368] = 1;
  *(undefined4 *)(param_1 + 0x36c) = 0x20;
  *(undefined4 *)(param_1 + 0x370) = 8;
  return;
}

/* 100014c0  Write_barrett  (575 bytes)
 * undefined Write_barrett(undefined1 * param_1)
 * called by: FUN_10049890
 */
void __cdecl Write_barrett(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = s_Barrett_M82A1_1008f230;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 5;
  param_1[8] = 8;
  *(undefined4 *)(param_1 + 0xc) = 2;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0x12;
  *(undefined4 *)(param_1 + 0x14) = 0x40000000;
  *(undefined4 *)(param_1 + 0x18) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3a83126f;
  *(undefined4 *)(param_1 + 0x30) = 0x41200000;
  *(undefined4 *)(param_1 + 0x34) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x3c) = 0x20;
  *(undefined4 *)(param_1 + 0x40) = 8;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f1ec)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_sprites_weapons_m82_spr_1008f218;
  param_1[0x84] = 4;
  param_1[0x85] = 5;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f192)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_556_shell_mdl_1008f0d0;
  param_1[0xca] = 0x46;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0xd0) = 9000;
  *(undefined4 *)(param_1 + 0xd8) = 10;
  *(undefined4 *)(param_1 + 0xdc) = 8;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008eff0)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_v_m82_mdl_1008f204;
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f0da)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_m82_mdl_1008f1f0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f086)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f27e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_w_m82_mdl_1008f1dc;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008eff2)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_twohanded_1008f088;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008ee5e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_1 + 0x272) = 4;
  *(undefined2 *)(param_1 + 0x274) = 4;
  pcVar2 = s_weapons_barrett_fire_wav_1008f1c0;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 1;
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x270) = 3;
  *(undefined2 *)(param_1 + 0x276) = 3;
  *(undefined2 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008eee2)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f10a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  param_1[0x360] = 7;
  *(undefined4 *)(param_1 + 0x364) = 0x28;
  param_1[0x368] = 2;
  *(undefined4 *)(param_1 + 0x36c) = 0x30;
  *(undefined4 *)(param_1 + 0x370) = 0x10;
  return;
}

/* 10001700  Write_benellim3  (585 bytes)
 * undefined Write_benellim3(undefined1 * param_1)
 * called by: FUN_10049890
 */
void __cdecl Write_benellim3(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = s_Benelli_M3_1008f2d8;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 7;
  param_1[8] = 3;
  *(undefined4 *)(param_1 + 0xc) = 10;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 4;
  *(undefined4 *)(param_1 + 0x14) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x18) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f23d70a;
  *(undefined4 *)(param_1 + 0x28) = 0x3d50e560;
  *(undefined4 *)(param_1 + 0x30) = 0x41380000;
  *(undefined4 *)(param_1 + 0x3c) = 0x28;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 8;
  *(undefined4 *)(param_1 + 0x20) = 1;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f294)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_sprites_weapons_m3_spr_1008f2c0;
  param_1[0x84] = 4;
  param_1[0x85] = 1;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f23a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_shotgun_shell_blue_mdl_1008f2a0;
  param_1[0xca] = 0x28;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd0) = 3000;
  *(undefined4 *)(param_1 + 0xd8) = 0xe;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f1c0)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_v_m3_mdl_1008f290;
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 2;
  *(undefined2 *)(param_1 + 0x124) = 2;
  *(undefined2 *)(param_1 + 0x126) = 1;
  *(undefined2 *)(param_1 + 0x128) = 2;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f166)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_m3_mdl_1008f280;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f116)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f27e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_w_m3_mdl_1008f270;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f086)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_twohanded_1008f088;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008ee5e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_weapons_m3_m3_fire_wav_1008f258;
  *(undefined2 *)(param_1 + 0x27a) = 2;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 1;
  *(undefined2 *)(param_1 + 0x26e) = 5;
  *(undefined2 *)(param_1 + 0x27c) = 3;
  *(undefined2 *)(param_1 + 0x27e) = 4;
  *(undefined2 *)(param_1 + 0x280) = 6;
  *(undefined2 *)(param_1 + 0x282) = 7;
  *(undefined2 *)(param_1 + 0x284) = 8;
  *(undefined2 *)(param_1 + 0x286) = 9;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008ef7a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_weapons_m3_m3_pump_wav_1008f240;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008ef22)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  param_1[0x368] = 0;
  param_1[0x360] = 1;
  *(undefined4 *)(param_1 + 0x364) = 0x1c;
  *(undefined4 *)(param_1 + 0x36c) = 0x20;
  *(undefined4 *)(param_1 + 0x370) = 10;
  return;
}

/* 10001950  Write_beretta_akimbo  (702 bytes)
 * undefined Write_beretta_akimbo(undefined1 * param_1)
 * called by: FUN_10049890
 */
void __cdecl Write_beretta_akimbo(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0xffff;
  pcVar2 = s_Akimbo_Berettas_1008f3c4;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x1e;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0xc) = 0x12;
  param_1[0x10] = 0;
  param_1[0x360] = 5;
  *(undefined4 *)(param_1 + 0x14) = 0x4019999a;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x28) = 0x3ce56042;
  *(undefined4 *)(param_1 + 0x30) = 0x40200000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f380)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_sprites_weapons_berettas_spr_1008f3a4;
  param_1[0x84] = 5;
  param_1[0x85] = 1;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f31e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_9mm_shell_mdl_1008f38c;
  param_1[0xca] = 0x14;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0x708;
  *(undefined4 *)(param_1 + 0xd8) = 7;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f2ac)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_v_berettas_mdl_1008f374;
  *(undefined2 *)(param_1 + 0x120) = 1;
  *(undefined2 *)(param_1 + 0x122) = 2;
  *(undefined2 *)(param_1 + 0x124) = 2;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 2;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f24a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_berettas_mdl_1008f35c;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f1f2)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_berettas_sil_mdl_1008f340;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f196)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_w_berettas_mdl_1008f328;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f13e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1008f320;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f0f6)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_1 + 0x26c) = 1;
  *(undefined2 *)(param_1 + 0x270) = 0x1a;
  *(undefined2 *)(param_1 + 0x272) = 0x1a;
  *(undefined2 *)(param_1 + 0x274) = 0x1a;
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x2a4) = 0xd;
  *(undefined2 *)(param_1 + 0x2aa) = 0xd;
  *(undefined2 *)(param_1 + 0x2ac) = 0xd;
  *(undefined2 *)(param_1 + 0x2ae) = 0xd;
  pcVar2 = s_weapons_beretta_fire_wav_1008f304;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x296) = 3;
  *(undefined2 *)(param_1 + 0x29a) = 4;
  *(undefined2 *)(param_1 + 0x298) = 5;
  *(undefined2 *)(param_1 + 0x29c) = 6;
  *(undefined2 *)(param_1 + 0x29e) = 7;
  *(undefined2 *)(param_1 + 0x2a0) = 8;
  *(undefined2 *)(param_1 + 0x278) = 0xe;
  *(undefined2 *)(param_1 + 0x2a6) = 0x1c;
  *(undefined2 *)(param_1 + 0x2a8) = 2;
  *(undefined2 *)(param_1 + 0x2d0) = 0x10;
  *(undefined2 *)(param_1 + 0x2d4) = 0x11;
  *(undefined2 *)(param_1 + 0x2d2) = 0x12;
  *(undefined2 *)(param_1 + 0x2d6) = 0x13;
  *(undefined2 *)(param_1 + 0x2d8) = 0x14;
  *(undefined2 *)(param_1 + 0x2da) = 0x15;
  *(undefined2 *)(param_1 + 0x2b2) = 0xf;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f026)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_weapons_beretta_fire_sil_wav_1008f2e4;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008efc6)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(param_1 + 0x364) = 6;
  *(undefined4 *)(param_1 + 0x370) = 5;
  param_1[0x368] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0x12;
  return;
}

/* 10001c10  Write_bull  (642 bytes)
 * undefined Write_bull(undefined1 * param_1)
 * called by: FUN_10049890
 */
void __cdecl Write_bull(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  *param_1 = 1;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  pcVar2 = s_Raging_Bull_1008f450;
  *(undefined4 *)(param_1 + 4) = 5;
  param_1[8] = 0xc;
  *(undefined4 *)(param_1 + 0xc) = 2;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0x1f;
  *(undefined4 *)(param_1 + 0x14) = 0x40000000;
  *(undefined4 *)(param_1 + 0x18) = 0x3e19999a;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x28) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x41940000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x28;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f40c)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_sprites_weapons_bull_spr_1008f434;
  param_1[0x84] = 2;
  param_1[0x85] = 7;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f3ae)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  param_1[0xca] = 0xf;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0x834;
  *(undefined4 *)(param_1 + 0xd8) = 10;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f348)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_v_bull_mdl_1008f420;
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 1;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f2f6)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_bull_mdl_1008f40c;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f2a2)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f27e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_w_bull_mdl_1008f3f8;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f20e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_onehanded_1008f3ec;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f1c2)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_1 + 0x270) = 1;
  *(undefined2 *)(param_1 + 0x272) = 2;
  *(undefined2 *)(param_1 + 0x274) = 1;
  *(undefined2 *)(param_1 + 0x276) = 2;
  pcVar2 = s_weapons_bull_fire01_wav_1008f3d4;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 4;
  *(undefined2 *)(param_1 + 0x26e) = 3;
  *(undefined2 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f0f6)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f10a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  param_1[0x360] = 8;
  *(undefined4 *)(param_1 + 0x364) = 6;
  param_1[0x368] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0x14;
  *(undefined4 *)(param_1 + 0x370) = 8;
  return;
}

/* 10001ea0  Write_desert  (691 bytes)
 * undefined Write_desert(undefined1 * param_1)
 * called by: FUN_10049890
 */
void __cdecl Write_desert(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  *param_1 = 1;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  pcVar2 = s_Desert_Eagle_1008f500;
  *(undefined4 *)(param_1 + 4) = 7;
  param_1[8] = 5;
  *(undefined4 *)(param_1 + 0xc) = 2;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0xc;
  *(undefined4 *)(param_1 + 0x14) = 0x40066666;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x28) = 0x3cb851ec;
  *(undefined4 *)(param_1 + 0x30) = 0x41100000;
  *(undefined4 *)(param_1 + 0x34) = 0x3c75c28f;
  *(undefined4 *)(param_1 + 0x3c) = 0x3c;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f4bc)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_sprites_weapons_desert_spr_1008f4e4;
  param_1[0x84] = 2;
  param_1[0x85] = 3;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f45e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_9mm_shell_mdl_1008f38c;
  param_1[0xca] = 0xf;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0x41a;
  *(undefined4 *)(param_1 + 0xd8) = 0xb;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f2ac)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_v_desert_mdl_1008f4d0;
  *(undefined2 *)(param_1 + 0x120) = 1;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 2;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f3a6)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_desert_mdl_1008f4bc;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f352)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_desert_sil_mdl_1008f4a4;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f2fa)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_w_desert_mdl_1008f490;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f2a6)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_onehanded_1008f3ec;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f1c2)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_1 + 0x270) = 3;
  *(undefined2 *)(param_1 + 0x274) = 3;
  pcVar2 = s_weapons_deagle_fire_wav_1008f478;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 1;
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x272) = 4;
  *(undefined2 *)(param_1 + 0x276) = 5;
  *(undefined2 *)(param_1 + 0x278) = 9;
  *(undefined2 *)(param_1 + 0x2a4) = 6;
  *(undefined2 *)(param_1 + 0x2a6) = 0xb;
  *(undefined2 *)(param_1 + 0x2a8) = 0;
  *(undefined2 *)(param_1 + 0x2aa) = 7;
  *(undefined2 *)(param_1 + 0x2ac) = 7;
  *(undefined2 *)(param_1 + 0x2ae) = 7;
  *(undefined2 *)(param_1 + 0x2b0) = 8;
  *(undefined2 *)(param_1 + 0x2b2) = 10;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f19a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_weapons_deagle_fire_sil_wav_1008f45c;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f13e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  param_1[0x360] = 8;
  *(undefined4 *)(param_1 + 0x364) = 6;
  param_1[0x368] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0x14;
  *(undefined4 *)(param_1 + 0x370) = 8;
  return;
}

/* 10002160  Write_fnh  (547 bytes)
 * undefined Write_fnh(undefined1 * param_1)
 * called by: FUN_10049890
 */
void __cdecl Write_fnh(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  *(undefined4 *)(param_1 + 0x14) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x30) = 0x3fc00000;
  pcVar2 = s_Five_seveN_1008f5cc;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x14;
  param_1[8] = 7;
  *(undefined4 *)(param_1 + 0xc) = 2;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0x1e;
  *(undefined2 *)(param_1 + 200) = 0xe;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x28) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f588)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_sprites_weapons_fnh_spr_1008f5b4;
  param_1[0x84] = 2;
  param_1[0x85] = 4;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f52e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_56_shell_mdl_1008f5a0;
  param_1[0xca] = 10;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0x4e2;
  *(undefined4 *)(param_1 + 0xd8) = 7;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f4c0)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_v_fnh_mdl_1008f58c;
  *(undefined2 *)(param_1 + 0x120) = 1;
  *(undefined2 *)(param_1 + 0x122) = 2;
  *(undefined2 *)(param_1 + 0x124) = 2;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 2;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f462)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_fnh_mdl_1008f578;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f40e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_fnh_sil_mdl_1008f560;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f3b6)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_w_fnh_mdl_1008f54c;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f362)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_onehanded_1008f3ec;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f1c2)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_1 + 0x270) = 3;
  *(undefined2 *)(param_1 + 0x272) = 3;
  *(undefined2 *)(param_1 + 0x274) = 3;
  pcVar2 = s_weapons_fnh_fnh_fire_wav_1008f530;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 1;
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x276) = 4;
  *(undefined2 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f252)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_weapons_fnh_fnh_fire_sil_wav_1008f510;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f1f2)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  param_1[0x368] = 0;
  param_1[0x360] = 8;
  *(undefined4 *)(param_1 + 0x364) = 6;
  *(undefined4 *)(param_1 + 0x36c) = 0x12;
  *(undefined4 *)(param_1 + 0x370) = 5;
  return;
}

/* 10002390  Write_fnhakimbo  (597 bytes)
 * undefined Write_fnhakimbo(undefined1 * param_1)
 * called by: FUN_10049890
 */
void __cdecl Write_fnhakimbo(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = s_Akimbo_Five_seveN_1008f644;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x28;
  param_1[8] = 7;
  *(undefined4 *)(param_1 + 0xc) = 0x12;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0xe;
  param_1[0x360] = 4;
  *(undefined4 *)(param_1 + 0x14) = 0x40400000;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x28) = 0x3ca3d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x40066666;
  *(undefined4 *)(param_1 + 0x34) = 0x3c75c28f;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f600)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_sprites_weapons_fnh_akimbo_spr_1008f624;
  param_1[0x84] = 5;
  param_1[0x85] = 5;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f59e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_56_shell_mdl_1008f5a0;
  param_1[0xca] = 10;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0x4e2;
  *(undefined4 *)(param_1 + 0xd8) = 7;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f4c0)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_1 + 0x120) = 1;
  pcVar2 = s_models_v_fnh_akimbo_mdl_1008f60c;
  *(undefined2 *)(param_1 + 0x122) = 2;
  *(undefined2 *)(param_1 + 0x124) = 2;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 2;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f4e2)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_fnh_akimbo_mdl_1008f5f4;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f48a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_fnh_akimbo_sil_mdl_1008f5d8;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f42e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_w_fnh_mdl_1008f54c;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f362)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1008f320;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f0f6)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_1 + 0x296) = 3;
  *(undefined2 *)(param_1 + 0x298) = 3;
  *(undefined2 *)(param_1 + 0x29e) = 3;
  *(undefined2 *)(param_1 + 0x270) = 4;
  *(undefined2 *)(param_1 + 0x272) = 4;
  *(undefined2 *)(param_1 + 0x274) = 4;
  pcVar2 = s_weapons_fnh_fnh_fire_wav_1008f530;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 5;
  *(undefined2 *)(param_1 + 0x26e) = 1;
  *(undefined2 *)(param_1 + 0x29a) = 2;
  *(undefined2 *)(param_1 + 0x29c) = 2;
  *(undefined2 *)(param_1 + 0x2a0) = 2;
  *(undefined2 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f252)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_weapons_fnh_fnh_fire_sil_wav_1008f510;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f1f2)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  param_1[0x368] = 0;
  *(undefined4 *)(param_1 + 0x364) = 6;
  *(undefined4 *)(param_1 + 0x36c) = 0x12;
  *(undefined4 *)(param_1 + 0x370) = 5;
  return;
}

/* 100025f0  Write_glock18  (556 bytes)
 * undefined Write_glock18(undefined1 * param_1)
 * called by: FUN_10049890
 */
void __cdecl Write_glock18(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_1008f71c;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x11;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0xc) = 3;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 1;
  *(undefined4 *)(param_1 + 0x14) = 0x40000000;
  *(undefined4 *)(param_1 + 0x18) = 0x3d5d2f1b;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f2ccccd;
  *(undefined4 *)(param_1 + 0x28) = 0x3d03126f;
  *(undefined4 *)(param_1 + 0x30) = 0x40200000;
  *(undefined4 *)(param_1 + 0x34) = 0x3be56042;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f6d8)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_sprites_weapons_glock18_spr_1008f700;
  param_1[0x84] = 2;
  param_1[0x85] = 1;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f67a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_9mm_shell_mdl_1008f38c;
  param_1[0xca] = 10;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0x352;
  *(undefined4 *)(param_1 + 0xd8) = 7;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f2ac)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_v_glock18_mdl_1008f6e8;
  *(undefined2 *)(param_1 + 0x120) = 1;
  *(undefined2 *)(param_1 + 0x122) = 2;
  *(undefined2 *)(param_1 + 0x124) = 2;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 2;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f5be)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_glock18_mdl_1008f6d0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f566)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_glock18_sil_mdl_1008f6b4;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f50a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_w_glock18_mdl_1008f69c;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f4b2)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_onehanded_1008f3ec;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f1c2)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x270) = 3;
  *(undefined2 *)(param_1 + 0x274) = 3;
  pcVar2 = s_weapons_glock_glock_fire_wav_1008f67c;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 1;
  *(undefined2 *)(param_1 + 0x272) = 4;
  *(undefined2 *)(param_1 + 0x276) = 5;
  *(undefined2 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f39e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_weapons_glock_glock_fire_sil_wav_1008f658;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f33a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(param_1 + 0x370) = 4;
  param_1[0x368] = 0;
  param_1[0x360] = 8;
  *(undefined4 *)(param_1 + 0x364) = 6;
  *(undefined4 *)(param_1 + 0x36c) = 0x12;
  return;
}

/* 10002820  Write_glock22  (551 bytes)
 * undefined Write_glock22(undefined1 * param_1)
 * called by: FUN_10049890
 */
void __cdecl Write_glock22(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_1008f7f4;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0xf;
  param_1[8] = 9;
  *(undefined4 *)(param_1 + 0xc) = 2;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0x16;
  *(undefined4 *)(param_1 + 0x14) = 0x40000000;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x28) = 0x3d051eb8;
  *(undefined4 *)(param_1 + 0x30) = 0x40900000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f7b0)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_sprites_weapons_glock22_spr_1008f7d8;
  param_1[0x84] = 2;
  param_1[0x85] = 5;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f752)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_9mm_shell_mdl_1008f38c;
  param_1[0xca] = 10;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0x514;
  *(undefined4 *)(param_1 + 0xd8) = 7;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f2ac)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_v_glock22_mdl_1008f7c0;
  *(undefined2 *)(param_1 + 0x120) = 1;
  *(undefined2 *)(param_1 + 0x122) = 2;
  *(undefined2 *)(param_1 + 0x124) = 2;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 2;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f696)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_glock22_mdl_1008f7a8;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f63e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_glock22_sil_mdl_1008f78c;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f5e2)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_w_glock22_mdl_1008f774;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f58a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_onehanded_1008f3ec;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f1c2)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x270) = 3;
  *(undefined2 *)(param_1 + 0x274) = 3;
  pcVar2 = s_weapons_glock22_glock22_fire_wav_1008f750;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 1;
  *(undefined2 *)(param_1 + 0x272) = 4;
  *(undefined2 *)(param_1 + 0x276) = 5;
  *(undefined2 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f472)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_weapons_glock22_glock22_fire_sil_1008f728;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f40a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(param_1 + 0x370) = 5;
  param_1[0x368] = 0;
  param_1[0x360] = 8;
  *(undefined4 *)(param_1 + 0x364) = 6;
  *(undefined4 *)(param_1 + 0x36c) = 0x14;
  return;
}

/* 10002a50  Write_gold  (544 bytes)
 * undefined Write_gold(undefined1 * param_1)
 * called by: FUN_10049890
 */
void __cdecl Write_gold(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = s_Golden_Colts_1008f874;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x10;
  param_1[8] = 2;
  *(undefined4 *)(param_1 + 0xc) = 0x12;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0xffff;
  param_1[0x360] = 5;
  *(undefined4 *)(param_1 + 0x14) = 0x40333333;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x28) = 0x3cb851ec;
  *(undefined4 *)(param_1 + 0x30) = 0x40980000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f830)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_sprites_weapons_gold_spr_1008f858;
  param_1[0x84] = 5;
  param_1[0x85] = 4;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f7d2)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_9mm_shell_mdl_1008f38c;
  param_1[0xca] = 0x14;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0xa28;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f2ac)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_v_gold_mdl_1008f844;
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f71a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_gold_mdl_1008f830;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f6c6)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_w_gold_mdl_1008f81c;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f632)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1008f320;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f0f6)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_1 + 0x29a) = 4;
  *(undefined2 *)(param_1 + 0x296) = 3;
  *(undefined2 *)(param_1 + 0x298) = 3;
  *(undefined2 *)(param_1 + 0x29c) = 4;
  pcVar2 = s_weapons_gold_gold_fire_wav_1008f800;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 1;
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x29e) = 5;
  *(undefined2 *)(param_1 + 0x2a0) = 6;
  *(undefined2 *)(param_1 + 0x270) = 7;
  *(undefined2 *)(param_1 + 0x272) = 7;
  *(undefined2 *)(param_1 + 0x274) = 7;
  *(undefined2 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f522)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(param_1 + 0x364) = 6;
  *(undefined4 *)(param_1 + 0x370) = 5;
  param_1[0x368] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0x12;
  return;
}

/* 10002c70  Write_katana  (467 bytes)
 * undefined Write_katana(undefined1 * param_1)
 * called by: FUN_10049890
 */
void __cdecl Write_katana(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = s_Katana_1008f8dc;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 1;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0x22;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  param_1[0x38] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f898)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_sprites_weapons_katana_spr_1008f8c0;
  param_1[0x84] = 1;
  param_1[0x85] = 3;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f83a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  pcVar2 = s_models_v_katana_mdl_1008f8ac;
  param_1[0xca] = 10;
  *(undefined4 *)(param_1 + 0xd0) = 0xb54;
  param_1[0xd4] = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f782)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_katana_mdl_1008f898;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f72e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f27e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_w_katana_mdl_1008f884;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f69a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f1fe)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26e) = 1;
  *(undefined2 *)(param_1 + 0x288) = 4;
  *(undefined2 *)(param_1 + 0x28a) = 3;
  *(undefined2 *)(param_1 + 0x28c) = 2;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f14a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f10a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  param_1[0x360] = 10;
  *(undefined4 *)(param_1 + 0x364) = 0;
  param_1[0x368] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0;
  *(undefined4 *)(param_1 + 0x370) = 0;
  return;
}

/* 10003040  Write_m16  (635 bytes)
 * undefined Write_m16(undefined1 * param_1)
 * called by: FUN_10049890
 */
void __cdecl Write_m16(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  *(undefined4 *)(param_1 + 0x28) = 0x3a83126f;
  *(undefined4 *)(param_1 + 0x34) = 0x3a83126f;
  pcVar2 = &DAT_1008f9b8;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x12;
  param_1[8] = 4;
  *(undefined4 *)(param_1 + 0xc) = 6;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0x1b;
  *(undefined4 *)(param_1 + 0x14) = 0x40333333;
  *(undefined4 *)(param_1 + 0x18) = 0x3d8f5c29;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x30) = 0x40b00000;
  *(undefined4 *)(param_1 + 0x3c) = 0x20;
  *(undefined4 *)(param_1 + 0x40) = 8;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f974)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_sprites_weapons_m16_spr_1008f9a0;
  param_1[0x84] = 4;
  param_1[0x85] = 8;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f91a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_556_shell_mdl_1008f0d0;
  param_1[0xca] = 0x28;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f666666;
  *(undefined4 *)(param_1 + 0xd0) = 0x9c4;
  *(undefined4 *)(param_1 + 0xd8) = 0xe;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008eff0)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_v_m16_mdl_1008f98c;
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 1;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f862)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_m16_mdl_1008f978;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f80e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f27e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_w_m16_mdl_1008f964;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f77a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_twohanded_1008f088;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008ee5e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_1 + 0x272) = 4;
  *(undefined2 *)(param_1 + 0x276) = 4;
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x270) = 3;
  *(undefined2 *)(param_1 + 0x274) = 3;
  *(undefined2 *)(param_1 + 0x2a8) = 2;
  *(undefined2 *)(param_1 + 0x2ac) = 0xb;
  *(undefined2 *)(param_1 + 0x2b0) = 0xb;
  pcVar2 = s_weapons_m16_fire_wav_1008f94c;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 1;
  *(undefined2 *)(param_1 + 0x278) = 8;
  *(undefined2 *)(param_1 + 0x2a4) = 7;
  *(undefined2 *)(param_1 + 0x2a6) = 0xe;
  *(undefined2 *)(param_1 + 0x2aa) = 10;
  *(undefined2 *)(param_1 + 0x2ae) = 10;
  *(undefined2 *)(param_1 + 0x2b2) = 9;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f66e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f10a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  param_1[0x360] = 6;
  *(undefined4 *)(param_1 + 0x364) = 0x20;
  param_1[0x368] = 1;
  *(undefined4 *)(param_1 + 0x36c) = 0x20;
  *(undefined4 *)(param_1 + 0x370) = 8;
  return;
}

/* 100032c0  Write_m4  (662 bytes)
 * undefined Write_m4(undefined1 * param_1)
 * called by: FUN_10049890
 */
void __cdecl Write_m4(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_1008fa50;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x1e;
  param_1[8] = 4;
  *(undefined4 *)(param_1 + 0xc) = 3;
  param_1[0x10] = 1;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 5;
  *(undefined4 *)(param_1 + 0x14) = 0x40333333;
  *(undefined4 *)(param_1 + 0x18) = 0x3d8f5c29;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x28) = 0x3bf5c28f;
  *(undefined4 *)(param_1 + 0x30) = 0x40800000;
  *(undefined4 *)(param_1 + 0x34) = 0x3a83126f;
  *(undefined4 *)(param_1 + 0x3c) = 0x1a;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fa0c)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_sprites_weapons_m4_spr_1008fa38;
  param_1[0x84] = 4;
  param_1[0x85] = 2;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f9b2)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_556_shell_mdl_1008f0d0;
  param_1[0xca] = 0x28;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd0) = 0x1194;
  *(undefined4 *)(param_1 + 0xd8) = 0xf;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008eff0)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_1 + 0x120) = 1;
  pcVar2 = s_models_v_m4_mdl_1008fa28;
  *(undefined2 *)(param_1 + 0x122) = 4;
  *(undefined2 *)(param_1 + 0x124) = 2;
  *(undefined2 *)(param_1 + 0x126) = 8;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f8fe)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_m4_mdl_1008fa18;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f8ae)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_m4_sil_mdl_1008fa04;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f85a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_w_m4_mdl_1008f9f4;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f80a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_twohanded_1008f088;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008ee5e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_1 + 0x272) = 4;
  *(undefined2 *)(param_1 + 0x276) = 4;
  *(undefined2 *)(param_1 + 0x270) = 3;
  *(undefined2 *)(param_1 + 0x274) = 3;
  *(undefined2 *)(param_1 + 0x2a2) = 0xf;
  *(undefined2 *)(param_1 + 0x2ac) = 0xb;
  *(undefined2 *)(param_1 + 0x2b0) = 0xb;
  *(undefined2 *)(param_1 + 0x2dc) = 0xf;
  pcVar2 = s_weapons_m4_m4_fire_wav_1008f9dc;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 1;
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x278) = 8;
  *(undefined2 *)(param_1 + 0x2a4) = 7;
  *(undefined2 *)(param_1 + 0x2a6) = 0xe;
  *(undefined2 *)(param_1 + 0x2a8) = 2;
  *(undefined2 *)(param_1 + 0x2aa) = 10;
  *(undefined2 *)(param_1 + 0x2ae) = 10;
  *(undefined2 *)(param_1 + 0x2b2) = 9;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f6fe)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_weapons_m4_m4_fire_sil_wav_1008f9c0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f6a2)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  param_1[0x360] = 6;
  *(undefined4 *)(param_1 + 0x364) = 0x17;
  param_1[0x368] = 1;
  *(undefined4 *)(param_1 + 0x36c) = 0x20;
  *(undefined4 *)(param_1 + 0x370) = 8;
  return;
}

/* 10003560  Write_m60  (573 bytes)
 * undefined Write_m60(undefined1 * param_1)
 * called by: FUN_10049890
 */
void __cdecl Write_m60(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  pcVar2 = &DAT_1008fac8;
  *(undefined4 *)(param_1 + 4) = 100;
  param_1[8] = 4;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0x20;
  *(undefined4 *)(param_1 + 0x14) = 0x40400000;
  *(undefined4 *)(param_1 + 0x18) = 0x3ddf3b64;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x28) = 0x3c75c28f;
  *(undefined4 *)(param_1 + 0x30) = 0x40000000;
  *(undefined4 *)(param_1 + 0x34) = 0x3c1374bc;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fa84)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_sprites_weapons_m60_spr_1008fab0;
  param_1[0x84] = 4;
  param_1[0x85] = 9;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fa2a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_556_shell_mdl_1008f0d0;
  param_1[0xca] = 0x46;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd0) = 8000;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008eff0)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_v_m60_mdl_1008fa9c;
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f972)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_m60_mdl_1008fa88;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f91e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f27e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_w_m60_mdl_1008fa74;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f88a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_twohanded_1008f088;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008ee5e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_1 + 0x270) = 2;
  *(undefined2 *)(param_1 + 0x272) = 3;
  *(undefined2 *)(param_1 + 0x274) = 2;
  *(undefined2 *)(param_1 + 0x276) = 3;
  pcVar2 = s_weapons_m60_m60_fire_wav_1008fa58;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 4;
  *(undefined2 *)(param_1 + 0x26e) = 1;
  *(undefined2 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f77a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f10a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  param_1[0x360] = 6;
  *(undefined4 *)(param_1 + 0x364) = 0x11;
  param_1[0x368] = 1;
  *(undefined4 *)(param_1 + 0x36c) = 0x20;
  *(undefined4 *)(param_1 + 0x370) = 6;
  return;
}

/* 100037a0  Write_m61  (471 bytes)
 * undefined Write_m61(undefined1 * param_1)
 * called by: FUN_10049890
 */
void __cdecl Write_m61(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = s_M61_Grenade_1008fb24;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 1;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0x18;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  param_1[0x38] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 2;
  *(undefined4 *)(param_1 + 0x20) = 4;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fae0)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_sprites_weapons_m61_spr_1008fb0c;
  param_1[0x84] = 1;
  param_1[0x85] = 2;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fa86)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  pcVar2 = s_models_v_m61_mdl_1008faf8;
  param_1[0xca] = 0xf;
  *(undefined4 *)(param_1 + 0xd0) = 1000;
  param_1[0xd4] = 1;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f9ce)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_m61_mdl_1008fae4;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f97a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f27e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_w_m61_mdl_1008fad0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f8e6)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f1fe)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26e) = 1;
  *(undefined2 *)(param_1 + 0x290) = 2;
  *(undefined2 *)(param_1 + 0x292) = 3;
  *(undefined2 *)(param_1 + 0x294) = 4;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f14a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f10a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  param_1[0x360] = 2;
  *(undefined4 *)(param_1 + 0x364) = 0;
  param_1[0x368] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0;
  *(undefined4 *)(param_1 + 0x370) = 0;
  return;
}

/* 10003980  Write_mac10  (567 bytes)
 * undefined Write_mac10(undefined1 * param_1)
 * called by: FUN_10049890
 */
void __cdecl Write_mac10(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_1008fbd8;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x19;
  param_1[8] = 2;
  *(undefined4 *)(param_1 + 0xc) = 3;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0x17;
  *(undefined4 *)(param_1 + 0x14) = 0x40333333;
  *(undefined4 *)(param_1 + 0x18) = 0x3dbc6a7f;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x28) = 0x3d03126f;
  *(undefined4 *)(param_1 + 0x30) = 0x40a80000;
  *(undefined4 *)(param_1 + 0x34) = 0x3bf5c28f;
  *(undefined4 *)(param_1 + 0x3c) = 0x28;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fb94)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_sprites_weapons_ump_spr_1008fbc0;
  param_1[0x84] = 3;
  param_1[0x85] = 6;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fb3a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_9mm_shell_mdl_1008f38c;
  param_1[0xca] = 0x19;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f666666;
  *(undefined4 *)(param_1 + 0xd0) = 0x8fc;
  *(undefined4 *)(param_1 + 0xd8) = 0xf;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f2ac)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_v_ump_mdl_1008fbac;
  *(undefined2 *)(param_1 + 0x120) = 2;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 1;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fa82)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_ump_mdl_1008fb98;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fa2e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_ump_sil_mdl_1008fb80;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f9d6)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_w_ump_mdl_1008fb6c;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f982)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_twohanded_1008f088;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008ee5e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_1 + 0x274) = 3;
  *(undefined2 *)(param_1 + 0x276) = 3;
  pcVar2 = s_weapons_ump_ump_fire_wav_1008fb50;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 5;
  *(undefined2 *)(param_1 + 0x26e) = 4;
  *(undefined2 *)(param_1 + 0x270) = 1;
  *(undefined2 *)(param_1 + 0x272) = 2;
  *(undefined2 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f872)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_weapons_ump_ump_fire_sil_wav_1008fb30;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f812)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  param_1[0x360] = 9;
  *(undefined4 *)(param_1 + 0x364) = 0xf;
  param_1[0x368] = 2;
  *(undefined4 *)(param_1 + 0x36c) = 0x1e;
  *(undefined4 *)(param_1 + 0x370) = 6;
  return;
}

/* 10003bc0  Write_mk23  (679 bytes)
 * undefined Write_mk23(undefined1 * param_1)
 * called by: FUN_10049890
 */
void __cdecl Write_mk23(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  *param_1 = 1;
  param_1[8] = 2;
  *(undefined4 *)(param_1 + 0xc) = 2;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  pcVar2 = &DAT_1008fc88;
  *(undefined4 *)(param_1 + 4) = 0xc;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 10;
  *(undefined2 *)(param_1 + 200) = 9;
  *(undefined4 *)(param_1 + 0x14) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f370a3d;
  *(undefined4 *)(param_1 + 0x28) = 0x3ccccccd;
  *(undefined4 *)(param_1 + 0x30) = 0x40400000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fc44)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  param_1[0x84] = 2;
  param_1[0x85] = 2;
  pcVar2 = s_sprites_weapons_mk23_spr_1008fc6c;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fbe6)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_9mm_shell_mdl_1008f38c;
  param_1[0xca] = 10;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 700;
  *(undefined4 *)(param_1 + 0xd8) = 7;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f2ac)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_1 + 0x122) = 2;
  *(undefined2 *)(param_1 + 0x124) = 2;
  *(undefined2 *)(param_1 + 0x128) = 2;
  pcVar2 = s_models_v_mk23_mdl_1008fc58;
  *(undefined2 *)(param_1 + 0x120) = 1;
  *(undefined2 *)(param_1 + 0x126) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fb2e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_mk23_mdl_1008fc44;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fada)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_mk23_sil_mdl_1008fc2c;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fa82)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_w_mk23_mdl_1008fc18;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fa2e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_onehanded_1008f3ec;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f1c2)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_1 + 0x2a6) = 0xc;
  *(undefined2 *)(param_1 + 0x270) = 1;
  *(undefined2 *)(param_1 + 0x274) = 1;
  pcVar2 = s_weapons_mk23_mk23_fire_wav_1008fbfc;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 0xb;
  *(undefined2 *)(param_1 + 0x26e) = 4;
  *(undefined2 *)(param_1 + 0x272) = 2;
  *(undefined2 *)(param_1 + 0x276) = 3;
  *(undefined2 *)(param_1 + 0x278) = 9;
  *(undefined2 *)(param_1 + 0x2a4) = 5;
  *(undefined2 *)(param_1 + 0x2a8) = 0;
  *(undefined2 *)(param_1 + 0x2aa) = 6;
  *(undefined2 *)(param_1 + 0x2ac) = 7;
  *(undefined2 *)(param_1 + 0x2ae) = 6;
  *(undefined2 *)(param_1 + 0x2b0) = 8;
  *(undefined2 *)(param_1 + 0x2b2) = 10;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f91e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_weapons_mk23_mk23_fire_sil_wav_1008fbdc;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f8be)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(param_1 + 0x364) = 6;
  param_1[0x360] = 8;
  param_1[0x368] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0x12;
  *(undefined4 *)(param_1 + 0x370) = 5;
  return;
}

/* 10003e70  Write_mk23akimbo  (702 bytes)
 * undefined Write_mk23akimbo(undefined1 * param_1)
 * called by: FUN_10049890
 */
void __cdecl Write_mk23akimbo(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_1008fd0c;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x18;
  param_1[8] = 2;
  *(undefined4 *)(param_1 + 0xc) = 0x12;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 9;
  param_1[0x360] = 4;
  *(undefined4 *)(param_1 + 0x14) = 0x40200000;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f370a3d;
  *(undefined4 *)(param_1 + 0x28) = 0x3cf5c28f;
  *(undefined4 *)(param_1 + 0x30) = 0x40600000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fcc8)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_sprites_weapons_mk23_akimbo_spr_1008fcec;
  param_1[0x84] = 5;
  param_1[0x85] = 2;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fc66)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_9mm_shell_mdl_1008f38c;
  param_1[0xca] = 10;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 700;
  *(undefined4 *)(param_1 + 0xd8) = 7;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f2ac)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_1 + 0x120) = 1;
  pcVar2 = s_models_v_mk23_akimbo_mdl_1008fcd0;
  *(undefined2 *)(param_1 + 0x122) = 2;
  *(undefined2 *)(param_1 + 0x124) = 2;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 2;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fba6)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_mk23_akimbo_mdl_1008fcb4;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fb4a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_mk23_akimbo_sil_mdl_1008fc94;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008faea)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_w_mk23_mdl_1008fc18;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fa2e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1008f320;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f0f6)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_1 + 0x298) = 2;
  *(undefined2 *)(param_1 + 0x29c) = 4;
  *(undefined2 *)(param_1 + 0x2a0) = 4;
  *(undefined2 *)(param_1 + 0x29e) = 2;
  *(undefined2 *)(param_1 + 0x270) = 0xe;
  *(undefined2 *)(param_1 + 0x272) = 0xe;
  *(undefined2 *)(param_1 + 0x274) = 0xe;
  *(undefined2 *)(param_1 + 0x2d6) = 10;
  *(undefined2 *)(param_1 + 0x2da) = 10;
  pcVar2 = s_weapons_mk23_mk23_fire_wav_1008fbfc;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 0xd;
  *(undefined2 *)(param_1 + 0x26e) = 5;
  *(undefined2 *)(param_1 + 0x296) = 1;
  *(undefined2 *)(param_1 + 0x29a) = 3;
  *(undefined2 *)(param_1 + 0x278) = 0xb;
  *(undefined2 *)(param_1 + 0x2a4) = 6;
  *(undefined2 *)(param_1 + 0x2a6) = 0x10;
  *(undefined2 *)(param_1 + 0x2a8) = 5;
  *(undefined2 *)(param_1 + 0x2d0) = 7;
  *(undefined2 *)(param_1 + 0x2d4) = 9;
  *(undefined2 *)(param_1 + 0x2d2) = 8;
  *(undefined2 *)(param_1 + 0x2d8) = 8;
  *(undefined2 *)(param_1 + 0x2aa) = 6;
  *(undefined2 *)(param_1 + 0x2ac) = 6;
  *(undefined2 *)(param_1 + 0x2ae) = 6;
  *(undefined2 *)(param_1 + 0x2b2) = 0xc;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f91e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_weapons_mk23_mk23_fire_sil_wav_1008fbdc;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f8be)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(param_1 + 0x364) = 6;
  param_1[0x368] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0x12;
  *(undefined4 *)(param_1 + 0x370) = 5;
  return;
}

/* 10004130  Write_mossberg  (693 bytes)
 * undefined Write_mossberg(undefined1 * param_1)
 * called by: FUN_10049890
 */
void __cdecl Write_mossberg(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 8;
  *(undefined4 *)(param_1 + 0xc) = 8;
  param_1[0x38] = 1;
  *(undefined4 *)(param_1 + 0x24) = 8;
  *(undefined4 *)(param_1 + 0x20) = 1;
  pcVar2 = s_Mossberg_500_1008fdbc;
  param_1[8] = 3;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0x1a;
  *(undefined4 *)(param_1 + 0x14) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x18) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f3d70a4;
  *(undefined4 *)(param_1 + 0x28) = 0x3d916873;
  *(undefined4 *)(param_1 + 0x30) = 0x41680000;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x2c] = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fd78)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_sprites_weapons_mossberg_spr_1008fd9c;
  param_1[0x84] = 4;
  param_1[0x85] = 7;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fd16)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_shotgun_shell_gold_mdl_1008fd7c;
  param_1[0xca] = 0x28;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f666666;
  *(undefined4 *)(param_1 + 0xd0) = 0x9c4;
  *(undefined4 *)(param_1 + 0xd8) = 6;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fc9c)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_v_mossberg_mdl_1008fd64;
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 2;
  *(undefined2 *)(param_1 + 0x124) = 1;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fc3a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_mossberg_mdl_1008fd4c;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fbe2)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f27e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_w_mossberg_mdl_1008fd34;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fb4a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_twohanded_1008f088;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008ee5e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_1 + 0x280) = 1;
  *(undefined2 *)(param_1 + 0x282) = 1;
  *(undefined2 *)(param_1 + 0x26e) = 7;
  *(undefined2 *)(param_1 + 0x284) = 2;
  *(undefined2 *)(param_1 + 0x286) = 2;
  *(undefined2 *)(param_1 + 0x2a8) = 7;
  *(undefined2 *)(param_1 + 0x2a4) = 3;
  *(undefined2 *)(param_1 + 0x2a6) = 3;
  *(undefined2 *)(param_1 + 0x2ba) = 4;
  *(undefined2 *)(param_1 + 700) = 4;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x2be) = 5;
  *(undefined2 *)(param_1 + 0x2c0) = 5;
  pcVar2 = s_weapons_mossberg_fire_wav_1008fd18;
  *(undefined2 *)(param_1 + 0x26c) = 0;
  *(undefined2 *)(param_1 + 0x27a) = 8;
  *(undefined2 *)(param_1 + 0x27c) = 9;
  *(undefined2 *)(param_1 + 0x27e) = 10;
  *(undefined2 *)(param_1 + 0x278) = 0xb;
  *(undefined2 *)(param_1 + 0x2b4) = 0xd;
  *(undefined2 *)(param_1 + 0x2b6) = 0xe;
  *(undefined2 *)(param_1 + 0x2b8) = 0xf;
  *(undefined2 *)(param_1 + 0x2b2) = 0xc;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fa3a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_weapons_m3_m3_pump_wav_1008f240;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008ef22)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  param_1[0x360] = 1;
  *(undefined4 *)(param_1 + 0x364) = 0x11;
  param_1[0x368] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0x20;
  *(undefined4 *)(param_1 + 0x370) = 10;
  return;
}

/* 100043f0  Write_mp5k  (638 bytes)
 * undefined Write_mp5k(undefined1 * param_1)
 * called by: FUN_10049890
 */
void __cdecl Write_mp5k(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  *(undefined4 *)(param_1 + 0xc) = 7;
  *(undefined2 *)(param_1 + 200) = 7;
  pcVar2 = &DAT_1008fe78;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x1e;
  param_1[8] = 1;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined4 *)(param_1 + 0x14) = 0x40133333;
  *(undefined4 *)(param_1 + 0x18) = 0x3d872b02;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x28) = 0x3ced9168;
  *(undefined4 *)(param_1 + 0x30) = 0x40500000;
  *(undefined4 *)(param_1 + 0x34) = 0x3ba3d70a;
  *(undefined4 *)(param_1 + 0x3c) = 0x20;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fe34)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_sprites_weapons_mp5k_spr_1008fe5c;
  param_1[0x84] = 3;
  param_1[0x85] = 3;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fdd6)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_9mm_shell_mdl_1008f38c;
  param_1[0xca] = 0x14;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0x5dc;
  *(undefined4 *)(param_1 + 0xd8) = 0xf;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f2ac)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_v_mp5k_mdl_1008fe48;
  *(undefined2 *)(param_1 + 0x120) = 2;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 1;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fd1e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_mp5k_mdl_1008fe34;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fcca)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_mp5k_sil_mdl_1008fe1c;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fc72)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_w_mp5k_mdl_1008fe08;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fc1e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_twohanded_1008f088;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008ee5e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_1 + 0x270) = 3;
  *(undefined2 *)(param_1 + 0x274) = 3;
  *(undefined2 *)(param_1 + 0x272) = 4;
  *(undefined2 *)(param_1 + 0x2a4) = 7;
  *(undefined2 *)(param_1 + 0x2a8) = 7;
  *(undefined2 *)(param_1 + 0x276) = 4;
  *(undefined2 *)(param_1 + 0x2ac) = 9;
  *(undefined2 *)(param_1 + 0x2b0) = 9;
  pcVar2 = s_weapons_mp5k_mp5k_fire_wav_1008fdec;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 1;
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x278) = 5;
  *(undefined2 *)(param_1 + 0x2a6) = 10;
  *(undefined2 *)(param_1 + 0x2aa) = 8;
  *(undefined2 *)(param_1 + 0x2ae) = 8;
  *(undefined2 *)(param_1 + 0x2b2) = 6;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fb0e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_weapons_mp5k_mp5k_fire_sil_wav_1008fdcc;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008faae)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  param_1[0x360] = 9;
  *(undefined4 *)(param_1 + 0x364) = 6;
  param_1[0x368] = 2;
  *(undefined4 *)(param_1 + 0x36c) = 0x16;
  *(undefined4 *)(param_1 + 0x370) = 5;
  return;
}

/* 10004670  Write_mp5sd  (567 bytes)
 * undefined Write_mp5sd(undefined1 * param_1)
 * called by: FUN_10049890
 */
void __cdecl Write_mp5sd(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_1008fef8;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x1e;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0xc) = 7;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 6;
  *(undefined4 *)(param_1 + 0x14) = 0x40133333;
  *(undefined4 *)(param_1 + 0x18) = 0x3d978d50;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x28) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x3fe00000;
  *(undefined4 *)(param_1 + 0x34) = 0x3c75c28f;
  *(undefined4 *)(param_1 + 0x3c) = 0x20;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008feb4)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_sprites_weapons_mp5sd_spr_1008fedc;
  param_1[0x84] = 3;
  param_1[0x85] = 2;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fe56)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_9mm_shell_mdl_1008f38c;
  param_1[0xca] = 0x19;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f666666;
  *(undefined4 *)(param_1 + 0xd0) = 0x9c4;
  *(undefined4 *)(param_1 + 0xd8) = 0xf;
  *(undefined4 *)(param_1 + 0xdc) = 1;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f2ac)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_v_mp5sd_mdl_1008fec8;
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 1;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fd9e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_mp5sd_mdl_1008feb4;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fd4a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_mp5sd_mdl_1008feb4;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fd0a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_w_mp5sd_mdl_1008fea0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fcb6)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_twohanded_1008f088;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008ee5e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_1 + 0x274) = 3;
  *(undefined2 *)(param_1 + 0x276) = 3;
  pcVar2 = s_weapons_mp5sd_mp5sd_fire_wav_1008fe80;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 5;
  *(undefined2 *)(param_1 + 0x26e) = 4;
  *(undefined2 *)(param_1 + 0x270) = 1;
  *(undefined2 *)(param_1 + 0x272) = 2;
  *(undefined2 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fba2)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_weapons_mp5sd_mp5sd_fire_wav_1008fe80;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fb62)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  param_1[0x360] = 9;
  *(undefined4 *)(param_1 + 0x364) = 0x10;
  param_1[0x368] = 2;
  *(undefined4 *)(param_1 + 0x36c) = 0x12;
  *(undefined4 *)(param_1 + 0x370) = 6;
  return;
}

/* 100048b0  Write_pdw  (567 bytes)
 * undefined Write_pdw(undefined1 * param_1)
 * called by: FUN_10049890
 */
void __cdecl Write_pdw(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  *(undefined4 *)(param_1 + 4) = 0x28;
  *(undefined4 *)(param_1 + 0x3c) = 0x28;
  pcVar2 = &DAT_1008ffa0;
  *param_1 = 1;
  param_1[8] = 7;
  *(undefined4 *)(param_1 + 0xc) = 3;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0x13;
  *(undefined4 *)(param_1 + 0x14) = 0x40200000;
  *(undefined4 *)(param_1 + 0x18) = 0x3d810625;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x28) = 0x3cb851ec;
  *(undefined4 *)(param_1 + 0x30) = 0x40266666;
  *(undefined4 *)(param_1 + 0x34) = 0x3c75c28f;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008ff5c)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_sprites_weapons_pdw_spr_1008ff88;
  param_1[0x84] = 3;
  param_1[0x85] = 5;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008ff02)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_56_shell_mdl_1008f5a0;
  param_1[0xca] = 0x1e;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f666666;
  *(undefined4 *)(param_1 + 0xd0) = 0xaf0;
  *(undefined4 *)(param_1 + 0xd8) = 0xb;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f4c0)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_v_pdw_mdl_1008ff74;
  *(undefined2 *)(param_1 + 0x120) = 1;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 2;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fe4a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_pdw_mdl_1008ff60;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fdf6)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_pdw_sil_mdl_1008ff48;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fd9e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_w_pdw_mdl_1008ff34;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fd4a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_onehanded_1008f3ec;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f1c2)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_1 + 0x270) = 3;
  *(undefined2 *)(param_1 + 0x276) = 3;
  pcVar2 = s_weapons_pdw_fire_wav_1008ff1c;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 1;
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x272) = 4;
  *(undefined2 *)(param_1 + 0x274) = 5;
  *(undefined2 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fc3e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_weapons_pdw_fire_sil_wav_1008ff00;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fbe2)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  param_1[0x360] = 9;
  *(undefined4 *)(param_1 + 0x364) = 0xd;
  param_1[0x368] = 2;
  *(undefined4 *)(param_1 + 0x36c) = 0x10;
  *(undefined4 *)(param_1 + 0x370) = 4;
  return;
}

/* 10004af0  Write_ruger  (550 bytes)
 * undefined Write_ruger(undefined1 * param_1)
 * called by: FUN_10049890
 */
void __cdecl Write_ruger(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_1009002c;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x11;
  param_1[8] = 10;
  *(undefined4 *)(param_1 + 0xc) = 2;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0x1c;
  *(undefined4 *)(param_1 + 0x14) = 0x3fa66666;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x28) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008ffe8)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_sprites_weapons_ruger_spr_10090010;
  param_1[0x84] = 2;
  param_1[0x85] = 6;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008ff8a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_22_shell_mdl_1008fffc;
  param_1[0xca] = 5;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0x5dc;
  *(undefined4 *)(param_1 + 0xd8) = 3;
  *(undefined4 *)(param_1 + 0xdc) = 1;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008ff1c)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_v_ruger_mdl_1008ffe8;
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008febe)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_ruger_mdl_1008ffd4;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fe6a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_ruger_mdl_1008ffd4;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fe2a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_w_ruger_mdl_1008ffc0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fdd6)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_onehanded_1008f3ec;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f1c2)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_1 + 0x272) = 2;
  *(undefined2 *)(param_1 + 0x276) = 2;
  pcVar2 = s_weapons_ruger_fire_wav_1008ffa8;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 4;
  *(undefined2 *)(param_1 + 0x26e) = 3;
  *(undefined2 *)(param_1 + 0x270) = 1;
  *(undefined2 *)(param_1 + 0x274) = 1;
  *(undefined2 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fcca)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_weapons_ruger_fire_wav_1008ffa8;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fc8a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  param_1[0x368] = 0;
  param_1[0x360] = 8;
  *(undefined4 *)(param_1 + 0x364) = 7;
  *(undefined4 *)(param_1 + 0x36c) = 0x12;
  *(undefined4 *)(param_1 + 0x370) = 5;
  return;
}

/* 10004d20  Write_sawedoff  (717 bytes)
 * undefined Write_sawedoff(undefined1 * param_1)
 * called by: FUN_10049890
 */
void __cdecl Write_sawedoff(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  *param_1 = 1;
  param_1[0x10] = 1;
  param_1[0x38] = 1;
  *(undefined4 *)(param_1 + 0x20) = 1;
  pcVar2 = s_Sawed_off_100900bc;
  *(undefined4 *)(param_1 + 4) = 2;
  param_1[8] = 3;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0x21;
  *(undefined4 *)(param_1 + 0x14) = 0x3fd9999a;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x28) = 0x3d7df3b6;
  *(undefined4 *)(param_1 + 0x30) = 0x41180000;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 8;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x10090078)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_sprites_weapons_sawedoff_spr_1009009c;
  param_1[0x84] = 4;
  param_1[0x85] = 10;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x10090016)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  param_1[0xca] = 0x14;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0x76c;
  *(undefined4 *)(param_1 + 0xd8) = 2;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f348)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_v_sawedoff_mdl_10090084;
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008ff5a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_sawedoff_mdl_1009006c;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008ff02)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f27e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_w_sawedoff_mdl_10090054;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fe6a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_twohanded_1008f088;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008ee5e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_1 + 0x272) = 4;
  *(undefined2 *)(param_1 + 0x276) = 4;
  *(undefined2 *)(param_1 + 0x270) = 3;
  *(undefined2 *)(param_1 + 0x274) = 3;
  *(undefined2 *)(param_1 + 0x2a4) = 5;
  *(undefined2 *)(param_1 + 0x2a8) = 5;
  *(undefined2 *)(param_1 + 0x26c) = 2;
  *(undefined2 *)(param_1 + 0x2a2) = 0xd;
  *(undefined2 *)(param_1 + 0x2aa) = 7;
  *(undefined2 *)(param_1 + 0x2ae) = 7;
  *(undefined2 *)(param_1 + 0x2dc) = 0xd;
  pcVar2 = s_weapons_sawedoff_fire_wav_10090038;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x27a) = 9;
  *(undefined2 *)(param_1 + 0x26e) = 1;
  *(undefined2 *)(param_1 + 0x278) = 0xb;
  *(undefined2 *)(param_1 + 0x2a6) = 6;
  *(undefined2 *)(param_1 + 0x2b4) = 10;
  *(undefined2 *)(param_1 + 0x2ac) = 8;
  *(undefined2 *)(param_1 + 0x2b0) = 8;
  *(undefined2 *)(param_1 + 0x2b2) = 0xc;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fd5a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f10a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(param_1 + 0x370) = 0xb;
  param_1[0x360] = 8;
  *(undefined4 *)(param_1 + 0x364) = 0x11;
  param_1[0x368] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0x20;
  return;
}

/* 10004ff0  Write_sealknife  (486 bytes)
 * undefined Write_sealknife(undefined1 * param_1)
 * called by: FUN_10049890
 */
void __cdecl Write_sealknife(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = s_Seal_Knife_10090130;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 1;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0x23;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  param_1[0x38] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 10;
  *(undefined4 *)(param_1 + 0x20) = 7;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x100900ec)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_sprites_weapons_sealknife_spr_10090110;
  param_1[0x84] = 1;
  param_1[0x85] = 4;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009008a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_v_sealknife_mdl_100900f8;
  param_1[0xca] = 1;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 100;
  param_1[0xd4] = 1;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008ffce)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_sealknife_mdl_100900e0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008ff76)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f27e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_w_sealknife_mdl_100900c8;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fede)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f1fe)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26e) = 1;
  *(undefined2 *)(param_1 + 0x288) = 2;
  *(undefined2 *)(param_1 + 0x28a) = 3;
  *(undefined2 *)(param_1 + 0x28c) = 4;
  *(undefined2 *)(param_1 + 0x28e) = 0;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f14a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f10a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  param_1[0x360] = 3;
  *(undefined4 *)(param_1 + 0x364) = 0;
  param_1[0x368] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0;
  *(undefined4 *)(param_1 + 0x370) = 0;
  return;
}

/* 100051e0  Write_spas12  (606 bytes)
 * undefined Write_spas12(undefined1 * param_1)
 * called by: FUN_10049890
 */
void __cdecl Write_spas12(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 8;
  param_1[0x38] = 1;
  *(undefined4 *)(param_1 + 0x24) = 8;
  *(undefined4 *)(param_1 + 0x20) = 1;
  pcVar2 = &DAT_100901f0;
  param_1[8] = 3;
  *(undefined4 *)(param_1 + 0xc) = 10;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0x14;
  *(undefined4 *)(param_1 + 0x14) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x18) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f0a3d71;
  *(undefined4 *)(param_1 + 0x28) = 0x3d23d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x40e00000;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x2c] = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x100901ac)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_sprites_weapons_spas12_spr_100901d4;
  param_1[0x84] = 4;
  param_1[0x85] = 6;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009014e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_shotgun_shell_mdl_100901b8;
  param_1[0xca] = 0x28;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd0) = 0x834;
  *(undefined4 *)(param_1 + 0xd8) = 6;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x100900d8)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_v_spas12_mdl_100901a4;
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009007a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_spas12_mdl_10090190;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x10090026)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f27e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_w_spas12_mdl_1009017c;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008ff92)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_twohanded_1008f088;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008ee5e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_weapons_spas12_spas12_fire_wav_1009015c;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 1;
  *(undefined2 *)(param_1 + 0x26e) = 5;
  *(undefined2 *)(param_1 + 0x27a) = 2;
  *(undefined2 *)(param_1 + 0x27c) = 3;
  *(undefined2 *)(param_1 + 0x27e) = 4;
  *(undefined2 *)(param_1 + 0x280) = 6;
  *(undefined2 *)(param_1 + 0x282) = 7;
  *(undefined2 *)(param_1 + 0x284) = 8;
  *(undefined2 *)(param_1 + 0x286) = 9;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fe7e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_weapons_spas12_spas12_pump_wav_1009013c;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008fe1e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  param_1[0x360] = 1;
  *(undefined4 *)(param_1 + 0x364) = 0x17;
  param_1[0x368] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0x20;
  *(undefined4 *)(param_1 + 0x370) = 10;
  return;
}

/* 100056b0  Write_skorpion  (614 bytes)
 * undefined Write_skorpion(undefined1 * param_1)
 * called by: FUN_10049890
 */
void __cdecl Write_skorpion(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_10090338;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x1e;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0xc) = 3;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0x11;
  *(undefined4 *)(param_1 + 0x14) = 0x3fe66666;
  *(undefined4 *)(param_1 + 0x18) = 0x3d4ccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f19999a;
  *(undefined4 *)(param_1 + 0x28) = 0x3cdd2f1b;
  *(undefined4 *)(param_1 + 0x30) = 0x40100000;
  *(undefined4 *)(param_1 + 0x34) = 0x3c23d70a;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x100902f4)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_sprites_weapons_tmp_spr_10090320;
  param_1[0x84] = 3;
  param_1[0x85] = 4;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009029a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_9mm_shell_mdl_1008f38c;
  param_1[0xca] = 0x14;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0x640;
  *(undefined4 *)(param_1 + 0xd8) = 3;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f2ac)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_v_tmp_mdl_1009030c;
  *(undefined2 *)(param_1 + 0x120) = 1;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x100901e2)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_tmp_mdl_100902f8;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009018e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_tmp_sil_mdl_100902e0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x10090136)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_w_tmp_mdl_100902cc;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x100900e2)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_onehanded_1008f3ec;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f1c2)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_1 + 0x270) = 3;
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x2a8) = 2;
  *(undefined2 *)(param_1 + 0x274) = 3;
  *(undefined2 *)(param_1 + 0x2aa) = 8;
  *(undefined2 *)(param_1 + 0x2ae) = 8;
  pcVar2 = s_weapons_tmp_fire_wav_100902b4;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 1;
  *(undefined2 *)(param_1 + 0x272) = 4;
  *(undefined2 *)(param_1 + 0x276) = 4;
  *(undefined2 *)(param_1 + 0x278) = 5;
  *(undefined2 *)(param_1 + 0x2a4) = 7;
  *(undefined2 *)(param_1 + 0x2a6) = 10;
  *(undefined2 *)(param_1 + 0x2ac) = 9;
  *(undefined2 *)(param_1 + 0x2b0) = 9;
  *(undefined2 *)(param_1 + 0x2b2) = 6;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008ffd6)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_weapons_tmp_fire_sil_wav_10090298;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008ff7a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(param_1 + 0x364) = 9;
  *(undefined4 *)(param_1 + 0x370) = 4;
  param_1[0x360] = 9;
  param_1[0x368] = 2;
  *(undefined4 *)(param_1 + 0x36c) = 0x10;
  return;
}

/* 10005920  Write_usas12  (546 bytes)
 * undefined Write_usas12(undefined1 * param_1)
 * called by: FUN_10049890
 */
void __cdecl Write_usas12(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_100903b8;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x14;
  param_1[8] = 3;
  *(undefined4 *)(param_1 + 0xc) = 1;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0xb;
  *(undefined4 *)(param_1 + 0x14) = 0x40400000;
  *(undefined4 *)(param_1 + 0x18) = 0x3e29fbe7;
  *(undefined4 *)(param_1 + 0x1c) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x28) = 0x3da3d70a;
  *(undefined4 *)(param_1 + 0x30) = 0x41180000;
  param_1[0x38] = 1;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 8;
  *(undefined4 *)(param_1 + 0x20) = 1;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x10090374)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_sprites_weapons_usas12_spr_1009039c;
  param_1[0x84] = 4;
  param_1[0x85] = 3;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x10090316)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_shotgun_shell_mdl_100901b8;
  param_1[0xca] = 0x32;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0xd0) = 0x13ec;
  *(undefined4 *)(param_1 + 0xd8) = 6;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x100900d8)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_v_usas_mdl_10090388;
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x122) = 2;
  *(undefined2 *)(param_1 + 0x124) = 1;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009025e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_usas_mdl_10090374;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009020a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f27e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_w_usas_mdl_10090360;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x10090176)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_twohanded_1008f088;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008ee5e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_1 + 0x270) = 3;
  *(undefined2 *)(param_1 + 0x272) = 3;
  *(undefined2 *)(param_1 + 0x274) = 3;
  *(undefined2 *)(param_1 + 0x276) = 3;
  pcVar2 = s_weapons_usas_usas_fire_wav_10090344;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 1;
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x10090066)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1009f428;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009f10a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  param_1[0x368] = 0;
  param_1[0x360] = 6;
  *(undefined4 *)(param_1 + 0x364) = 0x1a;
  *(undefined4 *)(param_1 + 0x36c) = 0x20;
  *(undefined4 *)(param_1 + 0x370) = 10;
  return;
}

/* 10005b50  Write_uzi  (617 bytes)
 * undefined Write_uzi(undefined1 * param_1)
 * called by: FUN_10049890
 */
void __cdecl Write_uzi(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_10090468;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x20;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0xc) = 3;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0x10;
  *(undefined2 *)(param_1 + 200) = 3;
  *(undefined4 *)(param_1 + 0x14) = 0x400ccccd;
  *(undefined4 *)(param_1 + 0x18) = 0x3d75c28f;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f19999a;
  *(undefined4 *)(param_1 + 0x28) = 0x3cfdf3b6;
  *(undefined4 *)(param_1 + 0x30) = 0x4039999a;
  *(undefined4 *)(param_1 + 0x34) = 0x3bc49ba6;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x10090424)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_sprites_weapons_uzi_spr_10090450;
  param_1[0x84] = 3;
  param_1[0x85] = 1;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x100903ca)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_9mm_shell_mdl_1008f38c;
  param_1[0xca] = 0x14;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0x514;
  *(undefined4 *)(param_1 + 0xd8) = 1;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f2ac)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_v_uzi_mdl_1009043c;
  *(undefined2 *)(param_1 + 0x120) = 1;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x10090312)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_uzi_mdl_10090428;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x100902be)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_uzi_sil_mdl_10090410;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x10090266)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_w_uzi_mdl_100903fc;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x10090212)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_onehanded_1008f3ec;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f1c2)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_1 + 0x272) = 4;
  *(undefined2 *)(param_1 + 0x276) = 4;
  *(undefined2 *)(param_1 + 0x26c) = 1;
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x2a8) = 2;
  *(undefined2 *)(param_1 + 0x2ac) = 0xb;
  *(undefined2 *)(param_1 + 0x2b0) = 0xb;
  pcVar2 = s_weapons_uzi_uzi_fire_wav_100903e0;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x270) = 3;
  *(undefined2 *)(param_1 + 0x274) = 3;
  *(undefined2 *)(param_1 + 0x278) = 8;
  *(undefined2 *)(param_1 + 0x2a4) = 7;
  *(undefined2 *)(param_1 + 0x2a6) = 0xe;
  *(undefined2 *)(param_1 + 0x2aa) = 10;
  *(undefined2 *)(param_1 + 0x2ae) = 10;
  *(undefined2 *)(param_1 + 0x2b2) = 9;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x10090102)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_weapons_uzi_uzi_fire_sil_wav_100903c0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x100900a2)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(param_1 + 0x364) = 9;
  param_1[0x360] = 9;
  param_1[0x368] = 2;
  *(undefined4 *)(param_1 + 0x36c) = 0x16;
  *(undefined4 *)(param_1 + 0x370) = 5;
  return;
}

/* 10005dc0  Write_uzi_akimbo  (610 bytes)
 * undefined Write_uzi_akimbo(undefined1 * param_1)
 * called by: FUN_10049890
 */
void __cdecl Write_uzi_akimbo(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = s_Akimbo_Mini_Uzi_100904e0;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x40;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0xc) = 0x21;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 3;
  param_1[0x360] = 4;
  *(undefined4 *)(param_1 + 0x14) = 0x40400000;
  *(undefined4 *)(param_1 + 0x18) = 0x3d75c28f;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f066666;
  *(undefined4 *)(param_1 + 0x28) = 0x3d0f5c29;
  *(undefined4 *)(param_1 + 0x30) = 0x404ccccd;
  *(undefined4 *)(param_1 + 0x34) = 0x3bbe61d0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009049c)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_sprites_weapons_uzi_akimbo_spr_100904c0;
  param_1[0x84] = 5;
  param_1[0x85] = 3;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009043a)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_9mm_shell_mdl_1008f38c;
  param_1[0xca] = 0x14;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0x514;
  *(undefined4 *)(param_1 + 0xd8) = 1;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f2ac)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_v_uzi_akimbo_mdl_100904a8;
  *(undefined2 *)(param_1 + 0x120) = 1;
  *(undefined2 *)(param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x126) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1009037e)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_uzi_akimbo_mdl_10090490;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x10090326)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_p_uzi_akimbo_sil_mdl_10090474;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x100902ca)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_models_w_uzi_mdl_100903fc;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x10090212)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = &DAT_1008f320;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x1008f0f6)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)(param_1 + 0x270) = 0xc;
  *(undefined2 *)(param_1 + 0x276) = 0xc;
  *(undefined2 *)(param_1 + 0x29a) = 0x19;
  *(undefined2 *)(param_1 + 0x29c) = 0x19;
  *(undefined2 *)(param_1 + 0x2a0) = 0x19;
  pcVar2 = s_weapons_uzi_uzi_fire_wav_100903e0;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 0xb;
  *(undefined2 *)(param_1 + 0x26e) = 4;
  *(undefined2 *)(param_1 + 0x272) = 0xd;
  *(undefined2 *)(param_1 + 0x274) = 0xe;
  *(undefined2 *)(param_1 + 0x296) = 0x18;
  *(undefined2 *)(param_1 + 0x298) = 0x18;
  *(undefined2 *)(param_1 + 0x29e) = 0x18;
  *(undefined2 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x2a4) = 0xffff;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x10090102)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_weapons_uzi_uzi_fire_sil_wav_100903c0;
  do {
    cVar1 = *pcVar2;
    (param_1 + -0x100900a2)[(int)pcVar2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(param_1 + 0x364) = 9;
  param_1[0x368] = 2;
  *(undefined4 *)(param_1 + 0x36c) = 0x16;
  *(undefined4 *)(param_1 + 0x370) = 5;
  return;
}

/* 10006880  LookupActivity  (115 bytes)
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

/* 10006af0  GetSequenceInfo  (184 bytes)
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

/* 10006bb0  GetSequenceFlags  (53 bytes)
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

/* 10006bf0  GetAnimationEvent  (331 bytes)
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
               (((float)(iVar2 + -1) < param_5 != ((float)(iVar2 + -1) == param_5) &&
                (fVar3 < (param_5 - (float)iVar2) + 1.0)))))))) {
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

/* 100071d0  VecBModelOrigin  (93 bytes)
 * undefined VecBModelOrigin(float * param_1, int param_2)
 * called by: CBaseEntity::TakeDamage, CBasePlayer::PlayerUse, CBreakable::Die, CBubbling::FizzThink, CFuncRotating::HurtTouch, CPendulum::Touch
 */
void __cdecl VecBModelOrigin(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_2 + 0xf8);
  fVar2 = *(float *)(param_2 + 0xfc);
  fVar3 = *(float *)(param_2 + 0xcc);
  fVar4 = *(float *)(param_2 + 200);
  *param_1 = *(float *)(param_2 + 0xf4) * 0.5 + *(float *)(param_2 + 0xc4);
  param_1[1] = fVar1 * 0.5 + fVar4;
  param_1[2] = fVar2 * 0.5 + fVar3;
  return;
}

/* 10008ab0  GetClassPtr<CFuncWall>  (76 bytes)
 * undefined GetClassPtr<CFuncWall>(int param_1)
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

/* 10008f60  GetClassPtr<CFuncWallToggle>  (76 bytes)
 * undefined GetClassPtr<CFuncWallToggle>(int param_1)
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

/* 10008fb0  GetClassPtr<CFuncConveyor>  (76 bytes)
 * undefined GetClassPtr<CFuncConveyor>(int param_1)
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

/* 10009000  GetClassPtr<CFuncIllusionary>  (79 bytes)
 * undefined GetClassPtr<CFuncIllusionary>(int param_1)
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

/* 100090b0  GetClassPtr<CFuncMonsterClip>  (76 bytes)
 * undefined GetClassPtr<CFuncMonsterClip>(int param_1)
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

/* 10009110  GetClassPtr<CFuncRotating>  (76 bytes)
 * undefined GetClassPtr<CFuncRotating>(int param_1)
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

/* 10009170  GetClassPtr<CPendulum>  (79 bytes)
 * undefined GetClassPtr<CPendulum>(int param_1)
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

/* 10009f80  ButtonSound  (136 bytes)
 * char * ButtonSound(undefined4 param_1)
 * called by: CBaseButton::Precache, CBaseButton::Spawn, CBaseDoor::Precache, CMomentaryRotButton::Spawn, CRotButton::Spawn
 */
char * __cdecl ButtonSound(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return s_common_null_wav_10090f10;
  case 1:
    return s_buttons_button1_wav_100915bc;
  case 2:
    return s_buttons_button2_wav_100915a8;
  case 3:
    return s_buttons_button3_wav_10091594;
  case 4:
    return s_buttons_button4_wav_10091580;
  case 5:
    return s_buttons_button5_wav_1009156c;
  case 6:
    return s_buttons_button6_wav_10091558;
  case 7:
    return s_buttons_button7_wav_10091544;
  case 8:
    return s_buttons_button8_wav_10091530;
  default:
    return s_buttons_button9_wav_10091434;
  case 10:
    return s_buttons_button10_wav_10091518;
  case 0xb:
    return s_buttons_button11_wav_10091500;
  case 0xc:
    return s_buttons_latchlocked1_wav_100914e4;
  case 0xd:
    return s_buttons_latchunlocked1_wav_100914c8;
  case 0xe:
    return s_buttons_lightswitch2_wav_100914ac;
  case 0x15:
    return s_buttons_lever1_wav_10091498;
  case 0x16:
    return s_buttons_lever2_wav_10091484;
  case 0x17:
    return s_buttons_lever3_wav_10091470;
  case 0x18:
    return s_buttons_lever4_wav_1009145c;
  case 0x19:
    return s_buttons_lever5_wav_10091448;
  }
}

/* 1000a070  DoSpark  (383 bytes)
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
  float local_18;
  float local_14;
  float local_10;
  float local_4;
  
  local_4 = *(float *)(param_1 + 0xfc) * 0.5;
  local_18 = *(float *)(param_1 + 0xf4) * 0.5 + *param_2;
  local_14 = *(float *)(param_1 + 0xf8) * 0.5 + param_2[1];
  local_10 = local_4 + param_2[2];
  UTIL_Sparks(&local_18);
  fVar1 = (float10)(*g_engfuncs.pfnRandomFloat)(0.25,0.75);
  this = (void *)(float)(fVar1 * (float10)0.4);
  (*g_engfuncs.pfnRandomFloat)(0.0,1.0);
  lVar2 = __ftol();
  switch((int)lVar2) {
  case 0:
    EMIT_SOUND_DYN(this,*(undefined4 *)(param_1 + 0x208),2,s_buttons_spark1_wav_100913cc,this,
                   0x3f4ccccd,0,100);
    return;
  case 1:
    EMIT_SOUND_DYN(*(void **)(param_1 + 0x208),*(void **)(param_1 + 0x208),2,
                   s_buttons_spark2_wav_100913b8,this,0x3f4ccccd,0,100);
    return;
  case 2:
    pcVar3 = s_buttons_spark3_wav_100913a4;
    break;
  case 3:
    EMIT_SOUND_DYN(this,*(undefined4 *)(param_1 + 0x208),2,s_buttons_spark4_wav_10091390,this,
                   0x3f4ccccd,0,100);
    return;
  case 4:
    EMIT_SOUND_DYN(*(void **)(param_1 + 0x208),*(void **)(param_1 + 0x208),2,
                   s_buttons_spark5_wav_1009137c,this,0x3f4ccccd,0,100);
    return;
  case 5:
    pcVar3 = s_buttons_spark6_wav_10091368;
    break;
  default:
    goto switchD_1000a106_default;
  }
  EMIT_SOUND_DYN(this_00,*(undefined4 *)(param_1 + 0x208),2,pcVar3,this,0x3f4ccccd,0,100);
switchD_1000a106_default:
  return;
}

/* 1000b520  GetClassPtr<CEnvGlobal>  (76 bytes)
 * undefined GetClassPtr<CEnvGlobal>(int param_1)
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

/* 1000b580  GetClassPtr<CMultiSource>  (79 bytes)
 * undefined GetClassPtr<CMultiSource>(int param_1)
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

/* 1000b5e0  GetClassPtr<CBaseButton>  (79 bytes)
 * undefined GetClassPtr<CBaseButton>(int param_1)
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

/* 1000b650  GetClassPtr<CRotButton>  (79 bytes)
 * undefined GetClassPtr<CRotButton>(int param_1)
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

/* 1000b6a0  GetClassPtr<CMomentaryRotButton>  (79 bytes)
 * undefined GetClassPtr<CMomentaryRotButton>(int param_1)
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

/* 1000b710  GetClassPtr<CEnvSpark>  (76 bytes)
 * undefined GetClassPtr<CEnvSpark>(int param_1)
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

/* 1000b770  GetClassPtr<CButtonTarget>  (76 bytes)
 * undefined GetClassPtr<CButtonTarget>(int param_1)
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

/* 1000b7c0  GetEntityAPI  (44 bytes)
 * undefined4 GetEntityAPI(undefined4 * param_1, int param_2)
 */
undefined4 __cdecl GetEntityAPI(undefined4 *param_1,int param_2)

{
  int iVar1;
  DLL_FUNCTIONS *pDVar2;
  
                    /* 0xb7c0  151  GetEntityAPI */
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

/* 1000b7f0  GetEntityAPI2  (52 bytes)
 * undefined4 GetEntityAPI2(undefined4 * param_1, int * param_2)
 */
undefined4 __cdecl GetEntityAPI2(undefined4 *param_1,int *param_2)

{
  int iVar1;
  DLL_FUNCTIONS *pDVar2;
  
                    /* 0xb7f0  152  GetEntityAPI2 */
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

/* 1000b830  pfnSpawn  (406 bytes)
 * int pfnSpawn(edict_t * pent)
 * called by: CBaseEntity::Create, CBasePlayer::GiveNamedItem, CChangeLevel::ChangeLevelNow
 */
int __cdecl pfnSpawn(edict_t *pent)

{
  byte bVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  byte_conflict *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  
  if ((pent != (edict_t *)0x0) && (piVar2 = pent->pvPrivateData, piVar2 != (int *)0x0)) {
    iVar4 = piVar2[1];
    *(float *)(iVar4 + 0xc4) = *(float *)(iVar4 + 8) - 1.0;
    *(float *)(iVar4 + 200) = *(float *)(iVar4 + 0xc) - 1.0;
    *(float *)(iVar4 + 0xcc) = *(float *)(iVar4 + 0x10) - 1.0;
    iVar4 = piVar2[1];
    *(float *)(iVar4 + 0xd0) = *(float *)(iVar4 + 8) + 1.0;
    *(float *)(iVar4 + 0xd4) = *(float *)(iVar4 + 0xc) + 1.0;
    *(float *)(iVar4 + 0xd8) = *(float *)(iVar4 + 0x10) + 1.0;
    (**(code **)(*piVar2 + 0xc))();
    pvVar3 = pent->pvPrivateData;
    if (pvVar3 != (void *)0x0) {
      if (DAT_1009f494 != (int *)0x0) {
        iVar4 = (**(code **)(*DAT_1009f494 + 8))(pvVar3);
        if (iVar4 == 0) {
          return -1;
        }
      }
      if ((*(uint *)(*(int *)((int)pvVar3 + 4) + 0x1a4) & 0x40000000) != 0) {
        return -1;
      }
      iVar4 = *(int *)(*(int *)((int)pvVar3 + 4) + 4);
      if (iVar4 != 0) {
        pbVar5 = thunk_FUN_1006c140(&DAT_102e00f4,iVar4);
        if (pbVar5 == (byte_conflict *)0x0) {
          FUN_1006c200(&DAT_102e00f4,*(int *)(*(int *)((int)pvVar3 + 4) + 4),gpGlobals->mapname,1);
        }
        else {
          if (*(int *)(pbVar5 + 0x60) == 2) {
            return -1;
          }
          pbVar7 = pbVar5 + 0x40;
          pbVar6 = (byte *)(gpGlobals->pStringBase + gpGlobals->mapname);
          do {
            bVar1 = *pbVar6;
            bVar8 = bVar1 < *pbVar7;
            if (bVar1 != *pbVar7) {
LAB_1000b989:
              iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
              goto LAB_1000b98e;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar8 = bVar1 < pbVar7[1];
            if (bVar1 != pbVar7[1]) goto LAB_1000b989;
            pbVar6 = pbVar6 + 2;
            pbVar7 = pbVar7 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_1000b98e:
          if (iVar4 != 0) {
            FUN_1000ca70((int)pvVar3);
            return 0;
          }
        }
      }
    }
  }
  return 0;
}

/* 1000b9d0  pfnKeyValue  (62 bytes)
 * void pfnKeyValue(edict_t * pentKeyvalue, KeyValueData * pkvd)
 */
void __cdecl pfnKeyValue(edict_t *pentKeyvalue,KeyValueData *pkvd)

{
  if ((pkvd != (KeyValueData *)0x0) && (pentKeyvalue != (edict_t *)0x0)) {
    EntvarsKeyvalue((int)&pentKeyvalue->v,(int)pkvd);
    if ((pkvd->fHandled == 0) &&
       ((pkvd->szClassName != (char *)0x0 && (pentKeyvalue->pvPrivateData != (int *)0x0)))) {
      (**(code **)(*(int *)pentKeyvalue->pvPrivateData + 0x14))(pkvd);
    }
  }
  return;
}

/* 1000ba10  pfnTouch  (89 bytes)
 * void pfnTouch(edict_t * pentTouched, edict_t * pentOther)
 * called by: CBasePlayer::GiveNamedItem
 */
void __cdecl pfnTouch(edict_t *pentTouched,edict_t *pentOther)

{
  void *pvVar1;
  int *piVar2;
  
  if (DAT_1009f42c == 0) {
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
        (**(code **)(*piVar2 + 0xbc))(pvVar1);
      }
    }
  }
  return;
}

/* 1000ba70  pfnUse  (64 bytes)
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
    (**(code **)(*piVar2 + 0xc0))(pvVar1,pvVar1,3,0);
  }
  return;
}

/* 1000bab0  pfnThink  (75 bytes)
 * void pfnThink(edict_t * pent)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnThink(edict_t *pent)

{
  int *piVar1;
  
  if ((pent != (edict_t *)0x0) && (piVar1 = pent->pvPrivateData, piVar1 != (int *)0x0)) {
    if (((int *)piVar1[1])[0x69] < 0) {
      (*g_engfuncs.pfnAlertMessage)
                (at_error,s_Dormant_entity__s_is_thinking___10091798,
                 gpGlobals->pStringBase + *(int *)piVar1[1]);
    }
                    /* WARNING: Could not recover jumptable at 0x1000baf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0xb8))();
    return;
  }
  return;
}

/* 1000bb00  pfnBlocked  (44 bytes)
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
    (**(code **)(*piVar2 + 0xc4))(pvVar1);
  }
  return;
}

/* 1000bb30  pfnSave  (249 bytes)
 * void pfnSave(edict_t * pent, SAVERESTOREDATA * pSaveData)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnSave(edict_t *pent,SAVERESTOREDATA *pSaveData)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  ENTITYTABLE *pEVar4;
  SAVERESTOREDATA *pSVar5;
  int iVar6;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  pSVar5 = pSaveData;
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_1007fe78;
  pvStack_c = ExceptionList;
  if (((pent != (edict_t *)0x0) && (piVar2 = pent->pvPrivateData, piVar2 != (int *)0x0)) &&
     (pSaveData != (SAVERESTOREDATA *)0x0)) {
    iVar3 = pSaveData->currentIndex;
    pEVar4 = pSaveData->pTable;
    ExceptionList = &pvStack_c;
    if (pEVar4[iVar3].pent != pent) {
      ExceptionList = &pvStack_c;
      (*g_engfuncs.pfnAlertMessage)(at_error,s_ENTITY_TABLE_OR_INDEX_IS_WRONG___100917bc);
    }
    iVar6 = (**(code **)(*piVar2 + 0x20))();
    if (-1 < iVar6) {
      iVar6 = piVar2[1];
      if (*(int *)(iVar6 + 0x108) == 7) {
        fVar1 = *(float *)(iVar6 + 0x100);
        *(float *)(iVar6 + 0x100) = gpGlobals->time;
        *(float *)(piVar2[1] + 0x104) =
             (*(float *)(iVar6 + 0x104) - fVar1) + *(float *)(piVar2[1] + 0x100);
      }
      pEVar4[iVar3].location = pSVar5->size;
      pEVar4[iVar3].classname = *(string_t *)piVar2[1];
      FUN_10068940(&pent,pSVar5);
      uStack_4 = 0;
      (**(code **)(*piVar2 + 0x18))(&pent);
      pEVar4[iVar3].size = pSVar5->size - pEVar4[iVar3].location;
      uStack_4 = 0xffffffff;
      FUN_10068950();
    }
  }
  ExceptionList = pvStack_c;
  return;
}

/* 1000bc40  FindGlobalEntity  (172 bytes)
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
                     ((edict_t *)0x0,s_globalname_10091808,gpGlobals->pStringBase + param_2);
  if (peVar2 == (edict_t *)0x0) {
    peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    if (peVar2 == (edict_t *)0x0) {
      pvVar3 = (void *)0x0;
      goto LAB_1000bc7d;
    }
  }
  pvVar3 = peVar2->pvPrivateData;
LAB_1000bc7d:
  if (pvVar3 != (void *)0x0) {
    pbVar4 = (byte *)(gpGlobals->pStringBase + **(int **)((int)pvVar3 + 4));
    pbVar6 = (byte *)(gpGlobals->pStringBase + in_stack_00000014);
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_1000bcc4:
        iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_1000bcc9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_1000bcc4;
      pbVar4 = pbVar4 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_1000bcc9:
    if (iVar5 != 0) {
      (*g_engfuncs.pfnAlertMessage)(at_console,s_Global_entity_found__s__wrong_cl_100917e0);
      pvVar3 = (void *)0x0;
    }
  }
  return (int)pvVar3;
}

/* 1000bcf0  pfnRestore  (875 bytes)
 * int pfnRestore(edict_t * pent, SAVERESTOREDATA * pSaveData, int globalEntity)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pfnRestore(edict_t *pent,SAVERESTOREDATA *pSaveData,int globalEntity)

{
  vec_t *pvVar1;
  byte bVar2;
  byte_conflict *pbVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  byte *pbVar8;
  vec_t vVar9;
  byte *pbVar10;
  bool bVar11;
  undefined1 auStack_2e8 [4];
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined1 auStack_2dc [4];
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  vec_t vStack_2bc;
  vec_t vStack_2b8;
  vec_t vStack_2b4;
  int iStack_2b0;
  int iStack_2ac;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  void *pvStack_c;
  code *pcStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  pcStack_8 = FUN_1007fea6;
  pvStack_c = ExceptionList;
  if (pent == (edict_t *)0x0) {
    return 0;
  }
  piVar6 = pent->pvPrivateData;
  if (piVar6 == (int *)0x0) {
    return 0;
  }
  if (pSaveData == (SAVERESTOREDATA *)0x0) {
    return 0;
  }
  ExceptionList = &pvStack_c;
  FUN_10068940(auStack_2e8,pSaveData);
  uStack_2e4 = 0;
  uStack_2e0 = 1;
  iStack_4 = 0;
  vVar9 = vStack_2b4;
  if (globalEntity == 0) {
LAB_1000bed3:
    uVar7 = (**(code **)(*piVar6 + 0x20))();
    if ((uVar7 & 4) == 0) {
      (**(code **)(*piVar6 + 0x1c))(auStack_2e8);
      (**(code **)(*piVar6 + 0x10))();
    }
    else {
      (**(code **)(*piVar6 + 0x1c))();
      (**(code **)(*piVar6 + 0xc))();
    }
    if (pent == (edict_t *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = pent->pvPrivateData;
    }
    if (globalEntity == 0) {
      if ((piVar6 != (int *)0x0) && (*(int *)(piVar6[1] + 4) != 0)) {
        pbVar3 = thunk_FUN_1006c140(&DAT_102e00f4,*(int *)(piVar6[1] + 4));
        if (pbVar3 == (byte_conflict *)0x0) {
          (*g_engfuncs.pfnAlertMessage)
                    (at_error,s_Global_Entity__s___s__not_in_tab_10091814,
                     gpGlobals->pStringBase + ((int *)piVar6[1])[1],
                     gpGlobals->pStringBase + *(int *)piVar6[1]);
          FUN_1006c200(&DAT_102e00f4,*(int *)(piVar6[1] + 4),gpGlobals->mapname,1);
        }
        else {
          if (*(int *)(pbVar3 + 0x60) == 2) {
            iStack_4 = 0xffffffff;
            FUN_10068950();
            ExceptionList = pvStack_c;
            return -1;
          }
          pbVar8 = (byte *)(gpGlobals->pStringBase + gpGlobals->mapname);
          pbVar10 = pbVar3 + 0x40;
          do {
            bVar2 = *pbVar8;
            bVar11 = bVar2 < *pbVar10;
            if (bVar2 != *pbVar10) {
LAB_1000bfd3:
              iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_1000bfd8;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar8[1];
            bVar11 = bVar2 < pbVar10[1];
            if (bVar2 != pbVar10[1]) goto LAB_1000bfd3;
            pbVar8 = pbVar8 + 2;
            pbVar10 = pbVar10 + 2;
          } while (bVar2 != 0);
          iVar5 = 0;
LAB_1000bfd8:
          if (iVar5 != 0) {
            FUN_1000ca70((int)piVar6);
          }
        }
      }
    }
    else {
      pSaveData->vecLandmarkOffset[0] = vStack_2bc;
      pSaveData->vecLandmarkOffset[1] = vStack_2b8;
      pSaveData->vecLandmarkOffset[2] = vVar9;
      if (piVar6 != (int *)0x0) {
        FUN_100679a0();
        (**(code **)(*piVar6 + 0x78))();
      }
    }
  }
  else {
    FUN_10068940(auStack_2dc,pSaveData);
    uStack_2d8 = 0;
    iStack_4._0_1_ = 1;
    uStack_2d4 = 0;
    FUN_100697d0(auStack_2dc,(byte_conflict *)s_ENTVARS_1009183c,(int)&iStack_2b0);
    iVar5 = pSaveData->pTable[pSaveData->currentIndex].location;
    pSaveData->pCurrentData = pSaveData->pBaseData + iVar5;
    pSaveData->size = iVar5;
    pbVar3 = thunk_FUN_1006c140(&DAT_102e00f4,iStack_2ac);
    pbVar10 = pbVar3 + 0x40;
    pcVar4 = pSaveData->szCurrentMapName;
    do {
      bVar2 = *pcVar4;
      bVar11 = bVar2 < *pbVar10;
      if (bVar2 != *pbVar10) {
LAB_1000bde6:
        iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_1000bdeb;
      }
      if (bVar2 == 0) break;
      bVar2 = pcVar4[1];
      bVar11 = bVar2 < pbVar10[1];
      if (bVar2 != pbVar10[1]) goto LAB_1000bde6;
      pcVar4 = pcVar4 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar2 != 0);
    iVar5 = 0;
LAB_1000bdeb:
    if (iVar5 == 0) {
      pvVar1 = pSaveData->vecLandmarkOffset;
      vStack_2bc = *pvVar1;
      vStack_2b8 = pSaveData->vecLandmarkOffset[1];
      vVar9 = pSaveData->vecLandmarkOffset[2];
      piVar6 = (int *)FindGlobalEntity(iStack_2b0,iStack_2ac);
      if (piVar6 != (int *)0x0) {
        uStack_2e4 = 1;
        iVar5 = piVar6[1];
        fStack_2c0 = pSaveData->vecLandmarkOffset[1] - *(float *)(iVar5 + 0xe0);
        fStack_2c4 = *pvVar1 - *(float *)(iVar5 + 0xdc);
        fStack_2c8 = (pSaveData->vecLandmarkOffset[2] - *(float *)(iVar5 + 0xe4)) + fStack_1cc;
        fStack_2cc = fStack_1d0 + fStack_2c0;
        fStack_2d0 = fStack_1d4 + fStack_2c4;
        *pvVar1 = fStack_2d0;
        pSaveData->vecLandmarkOffset[1] = fStack_2cc;
        pSaveData->vecLandmarkOffset[2] = fStack_2c8;
        pent = *(edict_t **)(piVar6[1] + 0x208);
        FUN_1006c3d0(&DAT_102e00f4,*(int *)(piVar6[1] + 4),gpGlobals->mapname);
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        FUN_10068950();
        goto LAB_1000bed3;
      }
    }
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    FUN_10068950();
  }
  iStack_4 = 0xffffffff;
  FUN_10068950();
  ExceptionList = pvStack_c;
  return 0;
}

/* 1000c070  pfnSetAbsBox  (34 bytes)
 * void pfnSetAbsBox(edict_t * pent)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnSetAbsBox(edict_t *pent)

{
  if ((pent != (edict_t *)0x0) && (pent->pvPrivateData != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000c081. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)pent->pvPrivateData + 0x28))();
    return;
  }
  SetObjectCollisionBox((int)&pent->v);
  return;
}

/* 1000c0a0  pfnSaveWriteFields  (104 bytes)
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
  pcStack_8 = FUN_1007feb8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_10068940(&param_1,param_1);
  uStack_4 = 0;
  CSave::WriteFields((CSave *)&param_1,(byte_conflict *)param_2,(int)param_3,(int)param_4,param_5);
  uStack_4 = 0xffffffff;
  FUN_10068950();
  ExceptionList = pvStack_c;
  return;
}

/* 1000c110  pfnSaveReadFields  (117 bytes)
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
  pcStack_8 = FUN_1007fed8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10068940(local_18,param_1);
  local_10 = 1;
  local_14 = 0;
  local_4 = 0;
  CRestore::ReadFields(local_18,(byte_conflict *)param_2,(int)param_3,(int)param_4,param_5);
  local_4 = 0xffffffff;
  FUN_10068950();
  ExceptionList = local_c;
  return;
}

/* 1000c820  SetObjectCollisionBox  (428 bytes)
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
    *(float *)(param_1 + 0xd0) = *(float *)(param_1 + 0xe8) + *(float *)(param_1 + 8);
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

/* 1000cd30  pfnClientConnect  (32 bytes)
 * qboolean pfnClientConnect(edict_t * pEntity, char * pszName, char * pszAddress, char[128] szRejectReason)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

qboolean pfnClientConnect(edict_t *pEntity,char *pszName,char *pszAddress,char szRejectReason [128])

{
  qboolean qVar1;
  
  qVar1 = (**(code **)(*DAT_1009f494 + 0x2c))(pEntity,pszName,pszAddress,szRejectReason._0_4_);
  return qVar1;
}

/* 1000cd50  pfnClientDisconnect  (171 bytes)
 * void pfnClientDisconnect(edict_t * pEntity)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnClientDisconnect(edict_t *pEntity)

{
  int iValue;
  undefined1 auStack_100 [16];
  undefined4 uStack_f0;
  edict_t *peStack_ec;
  char acStack_e8 [232];
  
  if (DAT_1009f4a4 == 0) {
    FUN_1006e69a(auStack_100,(byte_conflict *)s____s_has_left_the_game_10091b08);
    (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbc20,(float *)0x0,(edict_t *)0x0);
    iValue = (*g_engfuncs.pfnIndexOfEdict)(pEntity);
    (*g_engfuncs.pfnWriteByte)(iValue);
    (*g_engfuncs.pfnWriteString)(acStack_e8);
    (*g_engfuncs.pfnMessageEnd)();
    (pEntity->v).takedamage = 0.0;
    (pEntity->v).solid = 0;
    FUN_100679a0();
    peStack_ec = pEntity;
    uStack_f0 = 0x1000cdf3;
    (**(code **)(*DAT_1009f494 + 0x34))();
  }
  return;
}

/* 1000ce50  pfnClientKill  (112 bytes)
 * void pfnClientKill(edict_t * pEntity)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnClientKill(edict_t *pEntity)

{
  edict_t *peVar1;
  int *piVar2;
  
  peVar1 = (pEntity->v).pContainingEntity;
  if (peVar1 == (edict_t *)0x0) {
    peVar1 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    if (peVar1 == (edict_t *)0x0) {
      piVar2 = (int *)0x0;
      goto LAB_1000ce7a;
    }
  }
  piVar2 = peVar1->pvPrivateData;
LAB_1000ce7a:
  if ((*(int *)(piVar2[1] + 0x244) == 0) && ((float)piVar2[0x1ea] <= gpGlobals->time)) {
    piVar2[0x1ea] = (int)(gpGlobals->time + 1.0);
    (pEntity->v).health = 0.0;
    (**(code **)(*piVar2 + 0x40))(&pEntity->v,1);
  }
  return;
}

/* 1000cec0  pfnClientPutInServer  (56 bytes)
 * void pfnClientPutInServer(edict_t * pEntity)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnClientPutInServer(edict_t *pEntity)

{
  int *this;
  
  this = (int *)GetClassPtr<CBasePlayer>((int)&pEntity->v);
  FUN_1002e360(this,-1);
  (**(code **)(*this + 0xc))();
  *(uint *)(this[1] + 0x118) = *(uint *)(this[1] + 0x118) | 0x20;
  return;
}

/* 1000cf00  Host_Say  (1449 bytes)
 * undefined Host_Say(int param_1, int param_2)
 * called by: pfnClientCommand
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl Host_Say(int param_1,int param_2)

{
  char cVar1;
  byte_conflict *pbVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  uint *puVar8;
  int *piVar9;
  char *infobuffer;
  void *this;
  void *this_00;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *this_01;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  uint uVar10;
  uint *puVar11;
  int in_stack_0000000c;
  char *pcVar12;
  char *pcVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint *puStack_288;
  undefined4 uStack_280;
  char acStack_27c [4];
  int iStack_278;
  char acStack_264 [104];
  uint auStack_1fc [64];
  uint auStack_fc [63];
  
  pbVar2 = (byte_conflict *)(*g_engfuncs.pfnCmd_Argv)(0);
  iVar3 = (*g_engfuncs.pfnCmd_Argc)();
  if (iVar3 == 0) {
    return;
  }
  iVar3 = param_2 + 0x80;
  piVar4 = (int *)GetClassPtr<CBasePlayer>(iVar3);
  if (gpGlobals->time < (float)piVar4[0x1ce]) {
    return;
  }
  uVar5 = FUN_1007e860(this,pbVar2,&DAT_10091c04);
  if ((uVar5 == 0) ||
     (uVar5 = FUN_1007e860(this_00,pbVar2,(byte_conflict *)s_say_team_10091bf8), uVar5 == 0)) {
    iVar6 = (*g_engfuncs.pfnCmd_Argc)();
    if (iVar6 < 2) {
      return;
    }
    puStack_288 = (uint *)(*g_engfuncs.pfnCmd_Args)();
    this_01 = extraout_ECX_01;
  }
  else {
    iVar6 = (*g_engfuncs.pfnCmd_Argc)();
    if (iVar6 < 2) {
      FUN_1006e69a((undefined1 *)auStack_1fc,&DAT_10091bec);
      puStack_288 = auStack_1fc;
      this_01 = extraout_ECX_00;
    }
    else {
      (*g_engfuncs.pfnCmd_Args)();
      FUN_1006e69a((undefined1 *)auStack_1fc,(byte_conflict *)s__s__s_10091bf0);
      puStack_288 = auStack_1fc;
      this_01 = extraout_ECX;
    }
  }
  puVar11 = puStack_288;
  if ((char)*puStack_288 == '\"') {
    puVar11 = (uint *)((int)puStack_288 + 1);
    uVar5 = 0xffffffff;
    puVar8 = puVar11;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      uVar10 = *puVar8;
      puVar8 = (uint *)((int)puVar8 + 1);
    } while ((char)uVar10 != '\0');
    this_01 = (void *)(~uVar5 - 1);
    *(char *)((~uVar5 - 2) + (int)puVar11) = '\0';
    puStack_288 = puVar11;
  }
  for (; puVar11 != (uint *)0x0; puVar11 = (uint *)((int)puVar11 + 1)) {
    if ((char)*puVar11 == '\0') {
      return;
    }
    uVar5 = FUN_1006e879(this_01,(int)(char)*puVar11);
    this_01 = extraout_ECX_02;
    if ((uVar5 != 0) &&
       (uVar5 = FUN_1006e7fb((void *)(int)(char)*puVar11,(int)(char)*puVar11),
       this_01 = extraout_ECX_03, uVar5 == 0)) break;
  }
  if (in_stack_0000000c == 0) {
    pcVar13 = s__c_s__10091bd4;
  }
  else {
    pcVar13 = s__c_TEAM___s__10091bdc;
  }
  FUN_1006e69a(acStack_27c,(byte_conflict *)pcVar13);
  uVar5 = 0xffffffff;
  pcVar13 = acStack_27c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar1 != '\0');
  iVar6 = 0x7e - (~uVar5 - 1);
  uVar5 = 0xffffffff;
  puVar11 = puStack_288;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    uVar10 = *puVar11;
    puVar11 = (uint *)((int)puVar11 + 1);
  } while ((char)uVar10 != '\0');
  if (iVar6 < (int)(~uVar5 - 1)) {
    *(undefined1 *)(iVar6 + (int)puStack_288) = 0;
  }
  uVar5 = 0xffffffff;
  puVar11 = puStack_288;
  do {
    puVar8 = puVar11;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    puVar8 = (uint *)((int)puVar11 + 1);
    uVar10 = *puVar11;
    puVar11 = puVar8;
  } while ((char)uVar10 != '\0');
  uVar5 = ~uVar5;
  iVar6 = -1;
  pcVar13 = acStack_27c;
  do {
    pcVar12 = pcVar13;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar12 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar12;
  } while (cVar1 != '\0');
  pcVar13 = (char *)((int)puVar8 - uVar5);
  pcVar12 = pcVar12 + -1;
  for (uVar10 = uVar5 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar12 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar12 = pcVar12 + 1;
  }
  iVar6 = -1;
  pcVar13 = acStack_27c;
  do {
    pcVar12 = pcVar13;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar12 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar12;
  } while (cVar1 != '\0');
  *(undefined2 *)(pcVar12 + -1) = DAT_10091bd0;
  FUN_1007fd38(puStack_288);
  iVar6 = _strncmp((char *)puStack_288,s_timeleft_10091bc4,8);
  if (iVar6 == 0) {
    (*g_engfuncs.pfnCVarGetFloat)(s_mp_timeleft_10091bb8);
    __ftol();
    piVar4 = (int *)GetClassPtr<CBasePlayer>(iVar3);
    iVar6 = (**(code **)(*piVar4 + 0xac))();
    if (iVar6 != 0) {
      iVar16 = 0;
      iVar15 = 0;
      iVar14 = 0;
      iVar6 = 0;
      puVar7 = UTIL_VarArgs((byte_conflict *)s_Time_left___i__02i_10091ba4);
      FUN_100675b0(iVar3,3,puVar7,iVar6,iVar14,iVar15,iVar16);
    }
  }
  else {
    iVar6 = _strncmp((char *)puStack_288,&DAT_10091ba0,2);
    if (iVar6 == 0) {
      piVar4 = (int *)GetClassPtr<CBasePlayer>(iVar3);
      iVar6 = (**(code **)(*piVar4 + 0xac))();
      if (iVar6 != 0) {
        (*g_engfuncs.pfnCVarGetFloat)(s_mp_friendlyfire_10091b90);
        iVar16 = 0;
        iVar15 = 0;
        iVar14 = 0;
        iVar6 = 0;
        puVar7 = UTIL_VarArgs((byte_conflict *)s_Friendly_fire_is__s_10091b70);
        FUN_100675b0(iVar3,3,puVar7,iVar6,iVar14,iVar15,iVar16);
      }
    }
    else {
      iVar6 = _strncmp((char *)puStack_288,&DAT_10091b68,4);
      if (iVar6 == 0) {
        auStack_fc[0]._0_1_ = 0;
        puVar8 = FUN_1007fd38(puStack_288 + 1);
        puVar11 = auStack_fc;
        do {
          uVar5 = *puVar8;
          puVar8 = (uint *)((int)puVar8 + 1);
          *(char *)puVar11 = (char)uVar5;
          puVar11 = (uint *)((int)puVar11 + 1);
        } while ((char)uVar5 != '\0');
        piVar9 = (int *)GetClassPtr<CBasePlayer>(iVar3);
        iVar3 = (**(code **)(*piVar9 + 0xac))();
        if ((iVar3 != 0) &&
           (iVar3 = CTSGameRules::PlayerVote((CTSGameRules *)&DAT_100ac8c0,param_2,auStack_fc),
           iVar3 != 0)) goto LAB_1000d3d7;
      }
      piVar9 = (int *)UTIL_FindEntityByClassname(0,s_player_100915d0);
      while (((piVar9 != (int *)0x0 && (*(edict_t **)(piVar9[1] + 0x208) != (edict_t *)0x0)) &&
             (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(piVar9[1] + 0x208)),
             iVar3 != 0))) {
        if ((((piVar9[1] != 0) && (*(int *)(piVar9[1] + 0x208) != param_2)) &&
            ((iVar3 = (**(code **)(*piVar9 + 0xac))(), iVar3 != 0 &&
             ((in_stack_0000000c == 0 ||
              (iVar3 = (**(code **)(*DAT_1009f494 + 200))(piVar9,*(undefined4 *)(param_2 + 0x7c)),
              iVar3 == 1)))))) &&
           (((DAT_100ac8c0 != '\x03' && ((DAT_100ac8c0 != '\x02' && (_DAT_10093ce8 == 0.0)))) ||
            (((iVar3 = (**(code **)(*piVar4 + 0x94))(), iVar3 != 0 || (0.0 <= (float)piVar4[0x1ba]))
             || ((iVar3 = (**(code **)(*piVar9 + 0x94))(), iVar3 == 0 &&
                 ((float)piVar9[0x1ba] < 0.0)))))))) {
          (*g_engfuncs.pfnMessageBegin)
                    (1,DAT_100cbc20,(float *)0x0,*(edict_t **)(piVar9[1] + 0x208));
          iVar3 = (*g_engfuncs.pfnIndexOfEdict)((edict_t *)param_2);
          (*g_engfuncs.pfnWriteByte)(iVar3);
          (*g_engfuncs.pfnWriteString)(acStack_264);
          uStack_280 = 0x1000d37a;
          (*g_engfuncs.pfnMessageEnd)();
        }
        piVar9 = (int *)UTIL_FindEntityByClassname((int)piVar9,s_player_100915d0);
      }
      (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbc20,(float *)0x0,*(edict_t **)(param_2 + 0x288));
      iVar3 = (*g_engfuncs.pfnIndexOfEdict)((edict_t *)param_2);
      (*g_engfuncs.pfnWriteByte)(iVar3);
      (*g_engfuncs.pfnWriteString)(acStack_264);
      (*g_engfuncs.pfnMessageEnd)();
      (*g_engfuncs.pfnServerPrint)((char *)&uStack_280);
    }
  }
LAB_1000d3d7:
  pcVar13 = s_say_team_10091bf8;
  if (in_stack_0000000c == 0) {
    pcVar13 = &DAT_10091c04;
  }
  if (DAT_1009f498 == 0) {
    (*g_engfuncs.pfnGetPlayerUserId)((edict_t *)param_2);
    (*g_engfuncs.pfnGetPlayerAuthId)((edict_t *)param_2);
    (*g_engfuncs.pfnGetPlayerUserId)((edict_t *)param_2);
    pcVar12 = s___s<_i><_s><_i>___s___s__10091b28;
  }
  else {
    infobuffer = (*g_engfuncs.pfnGetInfoKeyBuffer)((edict_t *)param_2);
    pcVar12 = (char *)0x1000d40e;
    (*g_engfuncs.pfnInfoKeyValue)(infobuffer,pcVar13);
    (*g_engfuncs.pfnGetPlayerAuthId)((edict_t *)param_2);
    (*g_engfuncs.pfnGetPlayerUserId)((edict_t *)param_2);
  }
  FUN_10068840((byte_conflict *)pcVar12);
  *(float *)(iStack_278 + 0x738) = gpGlobals->time + 0.5;
  return;
}

/* 1000d4b0  pfnClientCommand  (3142 bytes)
 * void pfnClientCommand(edict_t * pEntity)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnClientCommand(edict_t *pEntity)

{
  entvars_t *peVar1;
  char cVar2;
  byte bVar3;
  uint *puVar4;
  char *pcVar5;
  CBasePlayer *pCVar6;
  byte_conflict *pbVar7;
  undefined4 uVar8;
  void *pvVar9;
  uint *puVar10;
  char *pcVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined3 extraout_var;
  undefined4 uVar14;
  undefined *puVar15;
  int iVar16;
  void *this;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  void *this_04;
  int *unaff_EBP;
  int *unaff_ESI;
  int iVar17;
  bool bVar18;
  edict_t *in_stack_00000008;
  int iVar19;
  float fVar20;
  int iVar21;
  uint uVar22;
  undefined1 uVar23;
  uint uStack_98;
  int iStack_94;
  float fStack_90;
  vec_t vStack_8c;
  vec_t vStack_88;
  uint auStack_84 [2];
  char acStack_7c [4];
  char acStack_78 [115];
  undefined1 uStack_5;
  
  puVar4 = (uint *)(*g_engfuncs.pfnCmd_Argv)(0);
  if (in_stack_00000008->pvPrivateData != (void *)0x0) {
    iVar16 = 4;
    bVar18 = true;
    peVar1 = &in_stack_00000008->v;
    puVar10 = puVar4;
    pcVar5 = &DAT_10091c04;
    do {
      if (iVar16 == 0) break;
      iVar16 = iVar16 + -1;
      bVar18 = (char)*puVar10 == *pcVar5;
      puVar10 = (uint *)((int)puVar10 + 1);
      pcVar5 = pcVar5 + 1;
    } while (bVar18);
    if (bVar18) {
      Host_Say((int)in_stack_00000008,0);
      return;
    }
    iVar16 = 9;
    bVar18 = true;
    puVar10 = puVar4;
    pcVar5 = s_say_team_10091bf8;
    do {
      if (iVar16 == 0) break;
      iVar16 = iVar16 + -1;
      bVar18 = (char)*puVar10 == *pcVar5;
      puVar10 = (uint *)((int)puVar10 + 1);
      pcVar5 = pcVar5 + 1;
    } while (bVar18);
    if (bVar18) {
      Host_Say((int)in_stack_00000008,1);
      return;
    }
    iVar16 = 5;
    bVar18 = true;
    puVar10 = puVar4;
    pcVar5 = &DAT_10091d10;
    do {
      if (iVar16 == 0) break;
      iVar16 = iVar16 + -1;
      bVar18 = (char)*puVar10 == *pcVar5;
      puVar10 = (uint *)((int)puVar10 + 1);
      pcVar5 = pcVar5 + 1;
    } while (bVar18);
    if (bVar18) {
      if (_DAT_102e0100 != 0.0) {
        pcVar5 = (*g_engfuncs.pfnCmd_Argv)(1);
        iVar16 = (*g_engfuncs.pfnAllocString)(pcVar5);
        pcVar5 = gpGlobals->pStringBase + iVar16;
        pCVar6 = (CBasePlayer *)GetClassPtr<CBasePlayer>(iStack_94);
        CBasePlayer::GiveNamedItem(pCVar6,(int)pcVar5);
        return;
      }
    }
    else {
      iVar16 = 4;
      bVar18 = true;
      puVar10 = puVar4;
      pcVar5 = &DAT_10091d0c;
      do {
        if (iVar16 == 0) break;
        iVar16 = iVar16 + -1;
        bVar18 = (char)*puVar10 == *pcVar5;
        puVar10 = (uint *)((int)puVar10 + 1);
        pcVar5 = pcVar5 + 1;
      } while (bVar18);
      if (bVar18) {
        if ((_DAT_102e0100 != 0.0) && (iVar16 = (*g_engfuncs.pfnCmd_Argc)(), 1 < iVar16)) {
          pbVar7 = (byte_conflict *)(*g_engfuncs.pfnCmd_Argv)(1);
          uVar8 = FUN_1006e1dd(this,pbVar7);
          iVar16 = GetClassPtr<CBasePlayer>(uStack_98);
          *(undefined4 *)(iVar16 + 0x948) = uVar8;
          pbVar7 = (byte_conflict *)(*g_engfuncs.pfnCmd_Argv)(1);
          iVar16 = FUN_1006e1dd(this_00,pbVar7);
          *(float *)(uStack_98 + 0x214) = (float)iVar16;
          return;
        }
        GetClassPtr<CBasePlayer>((int)peVar1);
        pcVar5 = UTIL_VarArgs((byte_conflict *)s__fov__is___d__10091cfc);
        (*g_engfuncs.pfnClientPrintf)(in_stack_00000008,print_console,pcVar5);
        return;
      }
      iVar16 = 4;
      bVar18 = true;
      puVar10 = puVar4;
      pcVar5 = &DAT_10091cf8;
      do {
        if (iVar16 == 0) break;
        iVar16 = iVar16 + -1;
        bVar18 = (char)*puVar10 == *pcVar5;
        puVar10 = (uint *)((int)puVar10 + 1);
        pcVar5 = pcVar5 + 1;
      } while (bVar18);
      if (bVar18) {
        pbVar7 = (byte_conflict *)(*g_engfuncs.pfnCmd_Argv)(1);
        pvVar9 = (void *)GetClassPtr<CBasePlayer>(uStack_98);
        FUN_1002c530(pvVar9,pbVar7);
        return;
      }
      iVar16 = 9;
      bVar18 = true;
      puVar10 = puVar4;
      pcVar5 = s_testpath_10091cec;
      do {
        if (iVar16 == 0) break;
        iVar16 = iVar16 + -1;
        bVar18 = (char)*puVar10 == *pcVar5;
        puVar10 = (uint *)((int)puVar10 + 1);
        pcVar5 = pcVar5 + 1;
      } while (bVar18);
      if (bVar18) {
        iVar16 = (*g_engfuncs.pfnCmd_Argc)();
        if (2 < iVar16) {
          puVar4 = &uStack_98;
          pbVar7 = (byte_conflict *)(*g_engfuncs.pfnCmd_Argv)(2);
          FUN_1006e1dd(this_01,pbVar7);
          pbVar7 = (byte_conflict *)(*g_engfuncs.pfnCmd_Argv)(1);
          iVar16 = FUN_1006e1dd(this_02,pbVar7);
          FUN_10063360(&DAT_100d9068,iVar16,(int)puVar4,unaff_ESI,unaff_EBP);
          return;
        }
      }
      else {
        if (_DAT_102e0100 != 0.0) {
          iVar16 = 8;
          bVar18 = true;
          puVar10 = puVar4;
          pcVar5 = s_powerup_10091ce4;
          do {
            if (iVar16 == 0) break;
            iVar16 = iVar16 + -1;
            bVar18 = (char)*puVar10 == *pcVar5;
            puVar10 = (uint *)((int)puVar10 + 1);
            pcVar5 = pcVar5 + 1;
          } while (bVar18);
          if ((bVar18) && (iVar16 = (*g_engfuncs.pfnCmd_Argc)(), 1 < iVar16)) {
            pbVar7 = (byte_conflict *)(*g_engfuncs.pfnCmd_Argv)(1);
            uVar8 = FUN_1006e1dd(this_03,pbVar7);
            pCVar6 = (CBasePlayer *)GetClassPtr<CBasePlayer>(uStack_98);
            if (pCVar6 == (CBasePlayer *)0x0) {
              return;
            }
            iVar16 = (*pCVar6->vtable[0x25])();
            if (iVar16 == 0) {
              return;
            }
            if (pCVar6->pev->iuser1 != 0) {
              return;
            }
            switch(uVar8) {
            case 1:
              iVar16 = 8;
              break;
            case 2:
              CBasePlayer::PickUpWeapon(pCVar6,0x18,(undefined4 *)0x0,0,'\x01');
              return;
            case 3:
              pCVar6->field_0x6c6 = 1;
              (*g_engfuncs.pfnMessageBegin)
                        (1,DAT_100cbc68,(float *)0x0,*(edict_t **)(uStack_98 + 0x208));
              (*g_engfuncs.pfnWriteShort)(4);
              (*g_engfuncs.pfnWriteByte)(0);
              (*g_engfuncs.pfnMessageEnd)();
              pCVar6->field_0x6c7 = 1;
              (*g_engfuncs.pfnSetPhysicsKeyValue)
                        (pCVar6->pev->pContainingEntity,&DAT_10091cdc,&DAT_10091ce0);
              (*g_engfuncs.pfnMessageBegin)
                        (1,DAT_100cbc68,(float *)0x0,*(edict_t **)(uStack_98 + 0x208));
              (*g_engfuncs.pfnWriteShort)(0x100);
              (*g_engfuncs.pfnWriteByte)(0);
                    /* WARNING: Could not recover jumptable at 0x1000d834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*g_engfuncs.pfnMessageEnd)();
              return;
            case 4:
              iVar16 = 2;
              break;
            case 5:
              iVar16 = 0x10;
              break;
            default:
              iVar16 = 1;
            }
            if (*(int *)&pCVar6->field_0x69c != 0) {
              return;
            }
            (*g_engfuncs.pfnMessageBegin)
                      (1,DAT_100cbc68,(float *)0x0,*(edict_t **)(uStack_98 + 0x208));
            (*g_engfuncs.pfnWriteShort)(iVar16);
            (*g_engfuncs.pfnWriteByte)(0);
            iStack_94 = 0x1000d88a;
            (*g_engfuncs.pfnMessageEnd)();
            if (*(int *)&pCVar6->field_0x6a0 == iVar16) {
              *(int *)&pCVar6->field_0x6a8 = *(int *)&pCVar6->field_0x6a8 + 5;
            }
            else {
              *(undefined4 *)&pCVar6->field_0x6a8 = 5;
            }
            *(int *)&pCVar6->field_0x6a0 = iVar16;
            *(undefined4 *)&pCVar6->field_0x6a4 = 0;
            return;
          }
          if (_DAT_102e0100 != 0.0) {
            iVar16 = 8;
            bVar18 = true;
            puVar10 = puVar4;
            pcVar5 = s_cashala_10091cd4;
            do {
              if (iVar16 == 0) break;
              iVar16 = iVar16 + -1;
              bVar18 = (char)*puVar10 == *pcVar5;
              puVar10 = (uint *)((int)puVar10 + 1);
              pcVar5 = pcVar5 + 1;
            } while (bVar18);
            if (bVar18) {
              iVar21 = 10000;
              iVar16 = GetClassPtr<CBasePlayer>((int)peVar1);
              FUN_10042c50(iVar16,iVar21);
              return;
            }
          }
        }
        puVar10 = FUN_1006ead0(puVar4,s_weapon__10091ccc);
        if ((puVar10 == (uint *)0x0) || (puVar10 != puVar4)) {
          iVar16 = 8;
          bVar18 = true;
          puVar10 = puVar4;
          pcVar5 = &DAT_10091cc0;
          do {
            if (iVar16 == 0) break;
            iVar16 = iVar16 + -1;
            bVar18 = (char)*puVar10 == *pcVar5;
            puVar10 = (uint *)((int)puVar10 + 1);
            pcVar5 = pcVar5 + 1;
          } while (bVar18);
          if (bVar18) {
            iVar16 = GetClassPtr<CBasePlayer>((int)peVar1);
            FUN_10055950(iVar16);
            return;
          }
          iVar16 = 4;
          bVar18 = true;
          puVar10 = puVar4;
          pcVar5 = &DAT_10091cbc;
          do {
            if (iVar16 == 0) break;
            iVar16 = iVar16 + -1;
            bVar18 = (char)*puVar10 == *pcVar5;
            puVar10 = (uint *)((int)puVar10 + 1);
            pcVar5 = pcVar5 + 1;
          } while (bVar18);
          if (bVar18) {
            iVar16 = (*g_engfuncs.pfnCmd_Argc)();
            iVar21 = 1;
            if (1 < iVar16) {
              do {
                pcVar11 = (*g_engfuncs.pfnCmd_Argv)(iVar21);
                pcVar5 = acStack_78;
                do {
                  cVar2 = *pcVar11;
                  pcVar11 = pcVar11 + 1;
                  *pcVar5 = cVar2;
                  pcVar5 = pcVar5 + 1;
                } while (cVar2 != '\0');
                FUN_1006ea8e(acStack_78,(byte_conflict *)s__i__i_10091cb4);
                puVar12 = get_weapon_info((int)fStack_90);
                if (*(char *)(puVar12 + 0x35) == '\0') {
                  uVar23 = 0;
                  fVar20 = fStack_90;
                  iVar17 = iStack_94;
                  pvVar9 = (void *)GetClassPtr<CBasePlayer>((int)peVar1);
                  FUN_10055970(pvVar9,fVar20,iVar17,uVar23);
                }
                else {
                  puVar12 = get_weapon_info((int)fStack_90);
                  iVar17 = iStack_94;
                  if ((int)puVar12[9] <= iStack_94) {
                    puVar12 = get_weapon_info((int)fStack_90);
                    iVar17 = puVar12[9];
                  }
                  if (iVar17 < 2) {
                    iStack_94 = 1;
                  }
                  else {
                    puVar12 = get_weapon_info((int)fStack_90);
                    if ((int)puVar12[9] <= iStack_94) {
                      puVar12 = get_weapon_info((int)fStack_90);
                      iStack_94 = puVar12[9];
                    }
                  }
                  iVar17 = 0;
                  if (0 < iStack_94) {
                    do {
                      uVar23 = 0;
                      uVar8 = 0;
                      fVar20 = fStack_90;
                      pvVar9 = (void *)GetClassPtr<CBasePlayer>((int)peVar1);
                      FUN_10055970(pvVar9,fVar20,uVar8,uVar23);
                      iVar17 = iVar17 + 1;
                    } while (iVar17 < iStack_94);
                  }
                }
                iVar21 = iVar21 + 1;
              } while (iVar21 < iVar16);
              return;
            }
          }
          else {
            iVar16 = 4;
            bVar18 = true;
            puVar10 = puVar4;
            pcVar5 = &DAT_10091cb0;
            do {
              if (iVar16 == 0) break;
              iVar16 = iVar16 + -1;
              bVar18 = (char)*puVar10 == *pcVar5;
              puVar10 = (uint *)((int)puVar10 + 1);
              pcVar5 = pcVar5 + 1;
            } while (bVar18);
            if (bVar18) {
              iVar16 = (*g_engfuncs.pfnCmd_Argc)();
              iVar21 = 1;
              if (1 < iVar16) {
                do {
                  pcVar11 = (*g_engfuncs.pfnCmd_Argv)(iVar21);
                  pcVar5 = acStack_78;
                  do {
                    cVar2 = *pcVar11;
                    pcVar11 = pcVar11 + 1;
                    *pcVar5 = cVar2;
                    pcVar5 = pcVar5 + 1;
                  } while (cVar2 != '\0');
                  FUN_1006ea8e(acStack_78,&DAT_10091cc8);
                  uVar23 = 1;
                  uVar8 = 0;
                  iVar17 = iStack_94;
                  pvVar9 = (void *)GetClassPtr<CBasePlayer>((int)peVar1);
                  FUN_10055970(pvVar9,iVar17,uVar8,uVar23);
                  iVar21 = iVar21 + 1;
                } while (iVar21 < iVar16);
                return;
              }
            }
            else {
              iVar16 = 4;
              bVar18 = true;
              puVar10 = puVar4;
              pcVar5 = &DAT_10091cac;
              do {
                if (iVar16 == 0) break;
                iVar16 = iVar16 + -1;
                bVar18 = (char)*puVar10 == *pcVar5;
                puVar10 = (uint *)((int)puVar10 + 1);
                pcVar5 = pcVar5 + 1;
              } while (bVar18);
              if (bVar18) {
                iVar16 = (*g_engfuncs.pfnCmd_Argc)();
                iVar21 = 1;
                if (1 < iVar16) {
                  do {
                    pcVar11 = (*g_engfuncs.pfnCmd_Argv)(iVar21);
                    pcVar5 = acStack_78;
                    do {
                      cVar2 = *pcVar11;
                      pcVar11 = pcVar11 + 1;
                      *pcVar5 = cVar2;
                      pcVar5 = pcVar5 + 1;
                    } while (cVar2 != '\0');
                    FUN_1006ea8e(acStack_78,(byte_conflict *)s__i__i_10091cb4);
                    fVar20 = fStack_90;
                    iVar17 = iStack_94;
                    pvVar9 = (void *)GetClassPtr<CBasePlayer>((int)peVar1);
                    FUN_100559b0(pvVar9,(int)fVar20,iVar17);
                    iVar21 = iVar21 + 1;
                  } while (iVar21 < iVar16);
                  return;
                }
              }
              else {
                puVar10 = FUN_1006ead0(puVar4,s_cutwire__10091ca0);
                if ((puVar10 != (uint *)0x0) && (puVar10 == puVar4)) {
                  iVar16 = 0;
                  do {
                    cVar2 = (&DAT_1009f428)[iVar16];
                    acStack_7c[iVar16] = cVar2;
                    iVar16 = iVar16 + 1;
                  } while (cVar2 != '\0');
                  puVar4 = puVar4 + 2;
                  iVar16 = -(int)puVar4;
                  do {
                    uVar22 = *puVar4;
                    *(char *)((int)puVar4 + (int)(acStack_7c + iVar16)) = (char)uVar22;
                    puVar4 = (uint *)((int)puVar4 + 1);
                  } while ((char)uVar22 != '\0');
                  FUN_1006ea8e(acStack_7c,&DAT_10091cc8);
                  pvVar9 = (void *)GetClassPtr<CBasePlayer>((int)peVar1);
                  FUN_10055700(pvVar9,uStack_98);
                  return;
                }
                puVar10 = FUN_1006ead0(puVar4,s_drop__10091c98);
                if ((puVar10 != (uint *)0x0) && (puVar10 == puVar4)) {
                  iVar16 = 0;
                  do {
                    cVar2 = (&DAT_1009f428)[iVar16];
                    acStack_7c[iVar16] = cVar2;
                    iVar16 = iVar16 + 1;
                  } while (cVar2 != '\0');
                  pcVar5 = (char *)((int)puVar4 + 5);
                  iVar16 = -(int)pcVar5;
                  do {
                    cVar2 = *pcVar5;
                    pcVar5[(int)(acStack_7c + iVar16)] = cVar2;
                    pcVar5 = pcVar5 + 1;
                  } while (cVar2 != '\0');
                  FUN_1006ea8e(acStack_7c,&DAT_10091cc8);
                  pvVar9 = (void *)GetClassPtr<CBasePlayer>((int)peVar1);
                  FUN_10056080(pvVar9,uStack_98);
                  return;
                }
                iVar16 = 5;
                bVar18 = true;
                puVar10 = puVar4;
                pcVar5 = &DAT_10091c90;
                do {
                  if (iVar16 == 0) break;
                  iVar16 = iVar16 + -1;
                  bVar18 = (char)*puVar10 == *pcVar5;
                  puVar10 = (uint *)((int)puVar10 + 1);
                  pcVar5 = pcVar5 + 1;
                } while (bVar18);
                if (bVar18) {
                  uVar22 = 0xffffffff;
                  pvVar9 = (void *)GetClassPtr<CBasePlayer>((int)peVar1);
                  FUN_10056080(pvVar9,uVar22);
                  return;
                }
                iVar16 = 0xb;
                bVar18 = true;
                puVar10 = puVar4;
                pcVar5 = s_usepowerup_10091c84;
                do {
                  if (iVar16 == 0) break;
                  iVar16 = iVar16 + -1;
                  bVar18 = (char)*puVar10 == *pcVar5;
                  puVar10 = (uint *)((int)puVar10 + 1);
                  pcVar5 = pcVar5 + 1;
                } while (bVar18);
                if (bVar18) {
                  piVar13 = (int *)GetClassPtr<CBasePlayer>((int)peVar1);
                  CBasePlayer::UsePowerUp(piVar13);
                  return;
                }
                iVar16 = 9;
                bVar18 = true;
                puVar10 = puVar4;
                pcVar5 = s_firemode_10091c78;
                do {
                  if (iVar16 == 0) break;
                  iVar16 = iVar16 + -1;
                  bVar18 = (char)*puVar10 == *pcVar5;
                  puVar10 = (uint *)((int)puVar10 + 1);
                  pcVar5 = pcVar5 + 1;
                } while (bVar18);
                if (bVar18) {
                  iVar16 = GetClassPtr<CBasePlayer>((int)peVar1);
                  iVar16 = *(int *)(iVar16 + 0x968);
                  if ((iVar16 != 0) && (*(int *)(iVar16 + 0x78) == 0x10)) {
                    FUN_1004a790(iVar16);
                    return;
                  }
                }
                else {
                  iVar16 = 9;
                  bVar18 = true;
                  puVar10 = puVar4;
                  pcVar5 = s_useitems_10091c6c;
                  do {
                    if (iVar16 == 0) break;
                    iVar16 = iVar16 + -1;
                    bVar18 = (char)*puVar10 == *pcVar5;
                    puVar10 = (uint *)((int)puVar10 + 1);
                    pcVar5 = pcVar5 + 1;
                  } while (bVar18);
                  if (bVar18) {
                    iVar16 = GetClassPtr<CBasePlayer>((int)peVar1);
                    iVar16 = *(int *)(iVar16 + 0x968);
                    if ((iVar16 != 0) && (*(int *)(iVar16 + 0x78) == 0x10)) {
                      FUN_1004a6c0(iVar16);
                      return;
                    }
                  }
                  else {
                    iVar16 = 8;
                    bVar18 = true;
                    puVar10 = puVar4;
                    pcVar5 = s_lastinv_10091c64;
                    do {
                      if (iVar16 == 0) break;
                      iVar16 = iVar16 + -1;
                      bVar18 = (char)*puVar10 == *pcVar5;
                      puVar10 = (uint *)((int)puVar10 + 1);
                      pcVar5 = pcVar5 + 1;
                    } while (bVar18);
                    if (bVar18) {
                      iVar16 = GetClassPtr<CBasePlayer>((int)peVar1);
                      piVar13 = *(int **)(iVar16 + 0x968);
                      if ((piVar13 != (int *)0x0) && (piVar13[0x1e] == 0x10)) {
                        bVar3 = *(byte *)(piVar13 + 0x2e);
                        uVar22 = *(uint *)(iVar16 + 0x974);
                        if (bVar3 != 0) {
                          iVar16 = GetClassPtr<CBasePlayer>((int)peVar1);
                          *(uint *)(iVar16 + 0x974) = (uint)bVar3;
                          iVar16 = FUN_1004a4c0(piVar13,uVar22);
                          if (iVar16 != 0) {
                            (**(code **)(*piVar13 + 0x104))();
                            return;
                          }
                        }
                      }
                    }
                    else {
                      iVar16 = 0xb;
                      bVar18 = true;
                      puVar10 = puVar4;
                      pcVar5 = s_resetnodes_10091c58;
                      do {
                        if (iVar16 == 0) break;
                        iVar16 = iVar16 + -1;
                        bVar18 = (char)*puVar10 == *pcVar5;
                        puVar10 = (uint *)((int)puVar10 + 1);
                        pcVar5 = pcVar5 + 1;
                      } while (bVar18);
                      if (bVar18) {
                        FUN_10062b80((undefined4 *)&DAT_100d9068);
                        return;
                      }
                      iVar16 = 10;
                      bVar18 = true;
                      puVar10 = puVar4;
                      pcVar5 = s_loadnodes_10091c4c;
                      do {
                        if (iVar16 == 0) break;
                        iVar16 = iVar16 + -1;
                        bVar18 = (char)*puVar10 == *pcVar5;
                        puVar10 = (uint *)((int)puVar10 + 1);
                        pcVar5 = pcVar5 + 1;
                      } while (bVar18);
                      if (bVar18) {
                        FUN_100639d0((int *)&DAT_100d9068);
                        return;
                      }
                      iVar16 = 10;
                      bVar18 = true;
                      puVar10 = puVar4;
                      pcVar5 = s_savenodes_10091c40;
                      do {
                        if (iVar16 == 0) break;
                        iVar16 = iVar16 + -1;
                        bVar18 = (char)*puVar10 == *pcVar5;
                        puVar10 = (uint *)((int)puVar10 + 1);
                        pcVar5 = pcVar5 + 1;
                      } while (bVar18);
                      if (bVar18) {
                        FUN_10063b50((int *)&DAT_100d9068);
                        return;
                      }
                      iVar16 = 8;
                      bVar18 = true;
                      puVar10 = puVar4;
                      pcVar5 = s_addnode_10091c38;
                      do {
                        if (iVar16 == 0) break;
                        iVar16 = iVar16 + -1;
                        bVar18 = (char)*puVar10 == *pcVar5;
                        puVar10 = (uint *)((int)puVar10 + 1);
                        pcVar5 = pcVar5 + 1;
                      } while (bVar18);
                      if (bVar18) {
                        piVar13 = (int *)GetClassPtr<CBasePlayer>((int)peVar1);
                        iVar16 = (**(code **)(*piVar13 + 0x94))();
                        if ((iVar16 != 0) &&
                           (iVar16 = GetClassPtr<CBasePlayer>((int)peVar1),
                           *(int *)(*(int *)(iVar16 + 4) + 0x244) == 0)) {
                          fStack_90 = (in_stack_00000008->v).origin[0];
                          auStack_84[0] = 0;
                          auStack_84[1] = 0;
                          vStack_8c = (in_stack_00000008->v).origin[1];
                          vStack_88 = (in_stack_00000008->v).origin[2];
                          iVar16 = GetClassPtr<CBasePlayer>((int)peVar1);
                          bVar18 = FUN_1002b380(iVar16);
                          if (CONCAT31(extraout_var,bVar18) != 0) {
                            auStack_84[0] = auStack_84[0] | 1;
                          }
                          FUN_10062bb0(&DAT_100d9068,&fStack_90,1);
                          return;
                        }
                      }
                      else {
                        iVar16 = 0xb;
                        bVar18 = true;
                        puVar10 = puVar4;
                        pcVar5 = s_changeteam_10091c2c;
                        do {
                          if (iVar16 == 0) break;
                          iVar16 = iVar16 + -1;
                          bVar18 = (char)*puVar10 == *pcVar5;
                          puVar10 = (uint *)((int)puVar10 + 1);
                          pcVar5 = pcVar5 + 1;
                        } while (bVar18);
                        if (bVar18) {
                          (*g_engfuncs.pfnMessageBegin)
                                    (1,DAT_100cbc38,(float *)0x0,
                                     (in_stack_00000008->v).pContainingEntity);
                          (*g_engfuncs.pfnWriteByte)(2);
                    /* WARNING: Could not recover jumptable at 0x1000e016. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (*g_engfuncs.pfnMessageEnd)();
                          return;
                        }
                        iVar16 = 9;
                        bVar18 = true;
                        puVar10 = puVar4;
                        pcVar5 = s_jointeam_10091c20;
                        do {
                          if (iVar16 == 0) break;
                          iVar16 = iVar16 + -1;
                          bVar18 = (char)*puVar10 == *pcVar5;
                          puVar10 = (uint *)((int)puVar10 + 1);
                          pcVar5 = pcVar5 + 1;
                        } while (bVar18);
                        if ((bVar18) && (iVar16 = (*g_engfuncs.pfnCmd_Argc)(), 1 < iVar16)) {
                          uVar8 = 0;
                          iVar16 = *DAT_1009f494;
                          pbVar7 = (byte_conflict *)(*g_engfuncs.pfnCmd_Argv)(1);
                          iVar21 = FUN_1006e1dd(this_04,pbVar7);
                          uVar8 = (**(code **)(iVar16 + 0xd0))(iVar21 + -1,uVar8);
                          uVar14 = GetClassPtr<CBasePlayer>((int)peVar1);
                          (**(code **)(iVar16 + 0xd8))(uVar14,uVar8);
                          return;
                        }
                        iVar16 = *DAT_1009f494;
                        puVar10 = puVar4;
                        uVar8 = GetClassPtr<CBasePlayer>((int)peVar1);
                        iVar16 = (**(code **)(iVar16 + 0x60))(uVar8,puVar10);
                        if (iVar16 == 0) {
                          _strncpy((char *)auStack_84,(char *)puVar4,0x7f);
                          uStack_5 = 0;
                          iVar19 = 0;
                          iVar17 = 0;
                          iVar21 = 0;
                          iVar16 = 0;
                          puVar15 = UTIL_VarArgs((byte_conflict *)s_Unknown_command___s_10091c08);
                          FUN_100675b0((int)peVar1,2,puVar15,iVar16,iVar21,iVar17,iVar19);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          iVar16 = 0;
          do {
            cVar2 = (&DAT_1009f428)[iVar16];
            acStack_7c[iVar16] = cVar2;
            iVar16 = iVar16 + 1;
          } while (cVar2 != '\0');
          pcVar5 = (char *)((int)puVar4 + 7);
          iVar16 = -(int)pcVar5;
          do {
            cVar2 = *pcVar5;
            pcVar5[(int)(acStack_7c + iVar16)] = cVar2;
            pcVar5 = pcVar5 + 1;
          } while (cVar2 != '\0');
          FUN_1006ea8e(acStack_7c,&DAT_10091cc8);
          iVar16 = GetClassPtr<CBasePlayer>((int)peVar1);
          piVar13 = *(int **)(iVar16 + 0x968);
          if ((piVar13 != (int *)0x0) && (piVar13[0x1e] == 0x10)) {
            bVar3 = *(byte *)(piVar13 + 0x2e);
            iVar16 = GetClassPtr<CBasePlayer>((int)peVar1);
            *(uint *)(iVar16 + 0x974) = (uint)bVar3;
            iVar16 = FUN_1004a4c0(piVar13,uStack_98);
            if (iVar16 != 0) {
              (**(code **)(*piVar13 + 0x104))();
              return;
            }
          }
        }
      }
    }
  }
  return;
}

/* 1000e110  pfnClientUserInfoChanged  (570 bytes)
 * void pfnClientUserInfoChanged(edict_t * pEntity, char * infobuffer)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnClientUserInfoChanged(edict_t *pEntity,char *infobuffer)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  byte *pbVar6;
  bool bVar7;
  char *infobuffer_00;
  char *in_stack_fffffe00;
  char acStack_1f0 [28];
  undefined4 uStack_1d4;
  undefined1 auStack_d4 [24];
  char acStack_bc [188];
  
  if (pEntity->pvPrivateData != (void *)0x0) {
    iVar3 = (pEntity->v).netname;
    if ((iVar3 != 0) && (gpGlobals->pStringBase[iVar3] != '\0')) {
      pbVar2 = (byte *)(*g_engfuncs.pfnInfoKeyValue)(infobuffer,&DAT_10091d84);
      pbVar6 = (byte *)(gpGlobals->pStringBase + (pEntity->v).netname);
      do {
        bVar1 = *pbVar6;
        bVar7 = bVar1 < *pbVar2;
        if (bVar1 != *pbVar2) {
LAB_1000e1a3:
          iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_1000e1a8;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar7 = bVar1 < pbVar2[1];
        if (bVar1 != pbVar2[1]) goto LAB_1000e1a3;
        pbVar6 = pbVar6 + 2;
        pbVar2 = pbVar2 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_1000e1a8:
      if (iVar3 != 0) {
        pcVar4 = (*g_engfuncs.pfnInfoKeyValue)(infobuffer,&DAT_10091d84);
        _strncpy(acStack_1f0,pcVar4,0xff);
        pcVar4 = acStack_1f0;
        do {
          if (*pcVar4 == '\0') break;
          if (*pcVar4 == '%') {
            *pcVar4 = ' ';
          }
          pcVar4 = pcVar4 + 1;
        } while (pcVar4 != (char *)0x0);
        pcVar4 = acStack_1f0;
        infobuffer_00 = &DAT_10091d84;
        iVar3 = (*g_engfuncs.pfnIndexOfEdict)(pEntity);
        (*g_engfuncs.pfnSetClientKeyValue)(iVar3,infobuffer_00,pcVar4,in_stack_fffffe00);
        (*g_engfuncs.pfnInfoKeyValue)(infobuffer,&DAT_10091d84);
        FUN_1006e69a(auStack_d4,(byte_conflict *)s____s_changed_name_to__s_10091d68);
        (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbc20,(float *)0x0,(edict_t *)0x0);
        iVar3 = (*g_engfuncs.pfnIndexOfEdict)(pEntity);
        (*g_engfuncs.pfnWriteByte)(iVar3);
        uStack_1d4 = 0x1000e26d;
        (*g_engfuncs.pfnWriteString)(acStack_bc);
        (*g_engfuncs.pfnMessageEnd)();
        if (DAT_1009f498 == 0) {
          (*g_engfuncs.pfnInfoKeyValue)(infobuffer,&DAT_10091d84);
          (*g_engfuncs.pfnGetPlayerUserId)(pEntity);
          (*g_engfuncs.pfnGetPlayerAuthId)(pEntity);
          (*g_engfuncs.pfnGetPlayerUserId)(pEntity);
          pcVar4 = s___s<_i><_s><_i>__changed_name_to_10091d18;
        }
        else {
          (*g_engfuncs.pfnInfoKeyValue)(infobuffer,&DAT_10091d84);
          (*g_engfuncs.pfnInfoKeyValue)(infobuffer,s_model_10091b60);
          (*g_engfuncs.pfnGetPlayerAuthId)(pEntity);
          (*g_engfuncs.pfnGetPlayerUserId)(pEntity);
          pcVar4 = s___s<_i><_s><_s>__changed_name_to_10091d40;
        }
        FUN_10068840((byte_conflict *)pcVar4);
      }
    }
    iVar3 = *DAT_1009f494;
    uVar5 = GetClassPtr<CBasePlayer>((int)&pEntity->v);
    (**(code **)(iVar3 + 100))(uVar5,infobuffer);
  }
  return;
}

/* 1000e350  pfnServerDeactivate  (20 bytes)
 * void pfnServerDeactivate(void)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnServerDeactivate(void)

{
  if (DAT_1009f434 == 1) {
    DAT_1009f434 = 0;
  }
  return;
}

/* 1000e370  pfnServerActivate  (151 bytes)
 * void pfnServerActivate(edict_t * pEdictList, int edictCount, int clientMax)
 */
void __cdecl pfnServerActivate(edict_t *pEdictList,int edictCount,int clientMax)

{
  int *piVar1;
  edict_t *peVar2;
  int iVar3;
  
  iVar3 = 0;
  DAT_1009f434 = 1;
  if (0 < edictCount) {
    do {
      if (((pEdictList->free == 0) && (clientMax <= iVar3)) &&
         (pEdictList->pvPrivateData != (void *)0x0)) {
        peVar2 = pEdictList;
        if (((pEdictList == (edict_t *)0x0) &&
            (peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar2 == (edict_t *)0x0)) ||
           ((piVar1 = peVar2->pvPrivateData, piVar1 == (int *)0x0 ||
            (*(int *)(piVar1[1] + 0x1a4) < 0)))) {
          (*g_engfuncs.pfnAlertMessage)
                    (at_console,s_Can_t_instance__s_10091d8c,
                     gpGlobals->pStringBase + (pEdictList->v).classname);
        }
        else {
          (**(code **)(*piVar1 + 0x24))();
        }
      }
      iVar3 = iVar3 + 1;
      pEdictList = pEdictList + 1;
    } while (iVar3 < edictCount);
  }
  LinkUserMessages();
  return;
}

/* 1000e410  pfnPlayerPreThink  (24 bytes)
 * void pfnPlayerPreThink(edict_t * pEntity)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnPlayerPreThink(edict_t *pEntity)

{
  if ((pEntity != (edict_t *)0x0) && (pEntity->pvPrivateData != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000e421. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)pEntity->pvPrivateData + 0x13c))();
    return;
  }
  return;
}

/* 1000e430  pfnPlayerPostThink  (24 bytes)
 * void pfnPlayerPostThink(edict_t * pEntity)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnPlayerPostThink(edict_t *pEntity)

{
  if ((pEntity != (edict_t *)0x0) && (pEntity->pvPrivateData != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000e441. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)pEntity->pvPrivateData + 0x140))();
    return;
  }
  return;
}

/* 1000e450  pfnParmsNewLevel  (1 bytes)
 * void pfnParmsNewLevel(void)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnParmsNewLevel(void)

{
  return;
}

/* 1000e460  pfnParmsChangeLevel  (35 bytes)
 * void pfnParmsChangeLevel(void)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnParmsChangeLevel(void)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = gpGlobals->pSaveData;
  if (pvVar1 != (void *)0x0) {
    iVar2 = CChangeLevel::ChangeList();
    *(int *)((int)pvVar1 + 0x24) = iVar2;
  }
  return;
}

/* 1000e490  pfnStartFrame  (119 bytes)
 * void pfnStartFrame(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnStartFrame(void)

{
  int iVar1;
  
  iVar1 = 1;
  if (0 < gpGlobals->maxClients) {
    do {
      _DAT_1009f430 = (float *)FUN_1005d870(iVar1);
      if ((_DAT_1009f430 != (float *)0x0) && (_DAT_1009f430[0x53] == 1.4013e-45)) {
        FUN_100614e0(_DAT_1009f430 + 0x2b9,_DAT_1009f430);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 <= gpGlobals->maxClients);
  }
  if (DAT_1009f494 != (int *)0x0) {
    (**(code **)(*DAT_1009f494 + 4))();
  }
  if (DAT_1009f4a4 == 0) {
    gpGlobals->teamplay = (float)DAT_1009f498;
    _DAT_1009f4bc = _DAT_1009f4bc + 1;
  }
  return;
}

/* 1000e510  ClientPrecache  (883 bytes)
 * undefined ClientPrecache(void)
 * called by: CWorld::Precache
 */
void ClientPrecache(void)

{
  (*g_engfuncs.pfnPrecacheSound)(s_player_sprayer_wav_100923d4);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_fallpain2_wav_100923bc);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_fallpain3_wav_100923a4);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_step1_wav_10092390);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_step2_wav_1009237c);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_step3_wav_10092368);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_step4_wav_10092354);
  (*g_engfuncs.pfnPrecacheSound)(s_common_npc_step1_wav_1009233c);
  (*g_engfuncs.pfnPrecacheSound)(s_common_npc_step2_wav_10092324);
  (*g_engfuncs.pfnPrecacheSound)(s_common_npc_step3_wav_1009230c);
  (*g_engfuncs.pfnPrecacheSound)(s_common_npc_step4_wav_100922f4);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_metal1_wav_100922dc);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_metal2_wav_100922c4);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_metal3_wav_100922ac);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_metal4_wav_10092294);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_dirt1_wav_10092280);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_dirt2_wav_1009226c);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_dirt3_wav_10092258);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_dirt4_wav_10092244);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_duct1_wav_10092230);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_duct2_wav_1009221c);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_duct3_wav_10092208);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_duct4_wav_100921f4);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_grate1_wav_100921dc);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_grate2_wav_100921c4);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_grate3_wav_100921ac);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_grate4_wav_10092194);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_slosh1_wav_1009217c);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_slosh2_wav_10092164);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_slosh3_wav_1009214c);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_slosh4_wav_10092134);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_tile1_wav_10092120);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_tile2_wav_1009210c);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_tile3_wav_100920f8);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_tile4_wav_100920e4);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_tile5_wav_100920d0);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_swim1_wav_100920bc);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_swim2_wav_100920a8);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_swim3_wav_10092094);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_swim4_wav_10092080);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_ladder1_wav_10092068);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_ladder2_wav_10092050);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_ladder3_wav_10092038);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_ladder4_wav_10092020);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_wade1_wav_1009200c);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_wade2_wav_10091ff8);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_wade3_wav_10091fe4);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_wade4_wav_10091fd0);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_wood1_wav_10091fbc);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_wood2_wav_10091fa8);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_wood3_wav_10091f94);
  (*g_engfuncs.pfnPrecacheSound)(s_plats_train_use1_wav_10091f7c);
  (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark5_wav_1009137c);
  (*g_engfuncs.pfnPrecacheSound)(s_buttons_spark6_wav_10091368);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_glass1_wav_10091f68);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_glass2_wav_10091f54);
  (*g_engfuncs.pfnPrecacheSound)(s_debris_glass3_wav_10091f40);
  (*g_engfuncs.pfnPrecacheSound)(s_items_flashlight1_wav_10091f28);
  (*g_engfuncs.pfnPrecacheSound)(s_items_flashlight1_wav_10091f28);
  (*g_engfuncs.pfnPrecacheSound)(s_common_bodysplat_wav_10091f10);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_pain2_wav_10091efc);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_pain4_wav_10091ee8);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_pain5_wav_10091ed4);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_pain6_wav_10091ec0);
  (*g_engfuncs.pfnPrecacheSound)(s_player_pl_pain7_wav_10091eac);
  (*g_engfuncs.pfnPrecacheModel)(s_models_player_mdl_10091af4);
  (*g_engfuncs.pfnPrecacheSound)(s_common_wpn_hudoff_wav_10091e94);
  (*g_engfuncs.pfnPrecacheSound)(s_common_wpn_hudon_wav_10091e7c);
  (*g_engfuncs.pfnPrecacheSound)(s_common_wpn_moveselect_wav_10091e60);
  (*g_engfuncs.pfnPrecacheSound)(s_common_wpn_select_wav_10091e48);
  (*g_engfuncs.pfnPrecacheSound)(s_common_wpn_denyselect_wav_10091e2c);
  (*g_engfuncs.pfnPrecacheSound)(s_player_geiger6_wav_10091e18);
  (*g_engfuncs.pfnPrecacheSound)(s_player_geiger5_wav_10091e04);
  (*g_engfuncs.pfnPrecacheSound)(s_player_geiger4_wav_10091df0);
  (*g_engfuncs.pfnPrecacheSound)(s_player_geiger3_wav_10091ddc);
  (*g_engfuncs.pfnPrecacheSound)(s_player_geiger2_wav_10091dc8);
  (*g_engfuncs.pfnPrecacheSound)(s_player_geiger1_wav_10091db4);
  if (DAT_100cbba8 != 0) {
    UTIL_PrecacheOther(0x10091da0);
  }
  return;
}

/* 1000e890  pfnGetGameDescription  (21 bytes)
 * char * pfnGetGameDescription(void)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * pfnGetGameDescription(void)

{
  char *pcVar1;
  
  if (DAT_1009f494 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1000e89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar1 = (char *)(**(code **)(*DAT_1009f494 + 0x28))();
    return pcVar1;
  }
  return s_Half_Life_100923e8;
}

/* 1000e8b0  pfnSys_Error  (1 bytes)
 * void pfnSys_Error(char * error_string)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnSys_Error(char *error_string)

{
  return;
}

/* 1000e8c0  pfnPlayerCustomization  (119 bytes)
 * void pfnPlayerCustomization(edict_t * pEntity, customization_t * pCustom)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnPlayerCustomization(edict_t *pEntity,customization_t *pCustom)

{
  resourcetype_t rVar1;
  
  if ((pEntity == (edict_t *)0x0) || (pEntity->pvPrivateData == (void *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000e8df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*g_engfuncs.pfnAlertMessage)(at_console,s_PlayerCustomization__Couldn_t_ge_10092454);
    return;
  }
  if (pCustom == (customization_t *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1000e8fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*g_engfuncs.pfnAlertMessage)(at_console,s_PlayerCustomization__NULL_custom_10092428);
    return;
  }
  rVar1 = (pCustom->resource).type;
  if (-1 < (int)rVar1) {
    if (2 < (int)rVar1) {
      if (rVar1 != t_decal) goto LAB_1000e921;
      FUN_1002e360(pEntity->pvPrivateData,pCustom->nUserData2);
    }
    return;
  }
LAB_1000e921:
                    /* WARNING: Could not recover jumptable at 0x1000e931. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_engfuncs.pfnAlertMessage)(at_console,s_PlayerCustomization__Unknown_cus_100923f4);
  return;
}

/* 1000e940  pfnSpectatorConnect  (21 bytes)
 * void pfnSpectatorConnect(edict_t * pEntity)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnSpectatorConnect(edict_t *pEntity)

{
  if ((pEntity != (edict_t *)0x0) && (pEntity->pvPrivateData != (void *)0x0)) {
    FUN_10037640((int)pEntity->pvPrivateData);
    return;
  }
  return;
}

/* 1000e960  pfnSpectatorDisconnect  (22 bytes)
 * void pfnSpectatorDisconnect(edict_t * pEntity)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnSpectatorDisconnect(edict_t *pEntity)

{
  if ((pEntity != (edict_t *)0x0) && (pEntity->pvPrivateData != (void *)0x0)) {
    return;
  }
  return;
}

/* 1000e980  pfnSpectatorThink  (21 bytes)
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

/* 1000e9a0  pfnSetupVisibility  (233 bytes)
 * void pfnSetupVisibility(edict_s * pViewEntity, edict_s * pClient, uchar * * pvs, uchar * * pas)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnSetupVisibility(edict_s *pViewEntity,edict_s *pClient,uchar **pvs,uchar **pas)

{
  edict_s *peVar1;
  uchar *puVar2;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  peVar1 = pClient;
  if (pViewEntity != (edict_s *)0x0) {
    peVar1 = pViewEntity;
  }
  if (((pClient->v).flags & 0x100000U) != 0) {
    *pvs = (uchar *)0x0;
    *pas = (uchar *)0x0;
    return;
  }
  fStack_18 = (peVar1->v).view_ofs[0] + (peVar1->v).origin[0];
  fStack_14 = (peVar1->v).view_ofs[1] + (peVar1->v).origin[1];
  fStack_10 = (peVar1->v).view_ofs[2] + (peVar1->v).origin[2];
  if (((peVar1->v).flags & 0x4000U) != 0) {
    fStack_10 = fStack_10 - 18.0;
    fStack_c = fStack_18;
    fStack_8 = fStack_14;
    fStack_4 = fStack_10;
  }
  puVar2 = (*g_engfuncs.pfnSetFatPVS)(&fStack_18);
  *pvs = puVar2;
  puVar2 = (*g_engfuncs.pfnSetFatPAS)(&fStack_18);
  *pas = puVar2;
  return;
}

/* 1000ea90  pfnAddToFullPack  (1073 bytes)
 * int pfnAddToFullPack(entity_state_s * state, int e, edict_t * ent, edict_t * host, int hostflags, int player, uchar * pSet)
 */
int __cdecl
pfnAddToFullPack(entity_state_s *state,int e,edict_t *ent,edict_t *host,int hostflags,int player,
                uchar *pSet)

{
  uint uVar1;
  edict_t *peVar2;
  int iVar3;
  entity_state_s *peVar4;
  longlong lVar5;
  
  if (((((ent->v).effects != 0x80) || (ent == host)) && ((ent->v).modelindex != 0)) &&
     (gpGlobals->pStringBase + (ent->v).model != (char *)0x0)) {
    if (((ent->v).flags & 0x4000000U) == 0) {
      if ((ent != host) && (iVar3 = (*g_engfuncs.pfnCheckVisibility)(ent,pSet), iVar3 == 0)) {
        return 0;
      }
    }
    else if (ent != host) {
      return 0;
    }
    if (((((ent->v).flags & 0x100U) == 0) || ((hostflags & 1U) == 0)) || ((ent->v).owner != host)) {
      iVar3 = (host->v).groupinfo;
      if (iVar3 != 0) {
        FUN_10066820(iVar3,0);
        uVar1 = (ent->v).groupinfo;
        if (uVar1 != 0) {
          if (DAT_102df8a8 == 0) {
            if (((host->v).groupinfo & uVar1) == 0) {
              return 0;
            }
          }
          else if ((DAT_102df8a8 == 1) && (((host->v).groupinfo & uVar1) != 0)) {
            return 0;
          }
        }
        FUN_10066850();
      }
      peVar4 = state;
      for (iVar3 = 0x55; iVar3 != 0; iVar3 = iVar3 + -1) {
        peVar4->entityType = 0;
        peVar4 = (entity_state_s *)&peVar4->number;
      }
      state->entityType = 1;
      state->number = e;
      if (((ent->v).flags & 0x20000000U) != 0) {
        state->entityType = 2;
      }
      lVar5 = __ftol();
      state->animtime = (float)(int)lVar5 * 0.001;
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
      iVar3 = 0;
      do {
        state->controller[iVar3] = (ent->v).controller[iVar3];
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
      iVar3 = 0;
      do {
        state->blending[iVar3] = (ent->v).blending[iVar3];
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
      state->rendermode = (ent->v).rendermode;
      lVar5 = __ftol();
      state->renderamt = (int)lVar5;
      state->renderfx = (ent->v).renderfx;
      lVar5 = __ftol();
      (state->rendercolor).r = (byte_conflict)lVar5;
      lVar5 = __ftol();
      (state->rendercolor).g = (byte_conflict)lVar5;
      lVar5 = __ftol();
      (state->rendercolor).b = (byte_conflict)lVar5;
      state->aiment = 0;
      peVar2 = (ent->v).aiment;
      if (peVar2 != (edict_t *)0x0) {
        iVar3 = (*g_engfuncs.pfnIndexOfEdict)(peVar2);
        state->aiment = iVar3;
      }
      state->owner = 0;
      peVar2 = (ent->v).owner;
      if (((peVar2 != (edict_t *)0x0) && (iVar3 = (*g_engfuncs.pfnIndexOfEdict)(peVar2), 0 < iVar3))
         && (iVar3 <= gpGlobals->maxClients)) {
        state->owner = iVar3;
      }
      if (player == 0) {
        state->playerclass = (ent->v).playerclass;
      }
      else {
        state->basevelocity[0] = (ent->v).basevelocity[0];
        state->basevelocity[1] = (ent->v).basevelocity[1];
        state->basevelocity[2] = (ent->v).basevelocity[2];
        iVar3 = (*g_engfuncs.pfnModelIndex)(gpGlobals->pStringBase + (ent->v).weaponmodel);
        state->weaponmodel = iVar3;
        state->gaitsequence = (ent->v).gaitsequence;
        state->spectator = (ent->v).flags & 0x4000000;
        state->friction = (ent->v).friction;
        state->gravity = (ent->v).gravity;
        state->usehull = (uint)(ent->v).flags >> 0xe & 1;
        lVar5 = __ftol();
        state->health = (int)lVar5;
      }
      state->iuser4 = (ent->v).iuser4;
      return 1;
    }
  }
  return 0;
}

/* 1000eed0  pfnCreateBaseline  (413 bytes)
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

/* 1000f500  pfnRegisterEncoders  (52 bytes)
 * void pfnRegisterEncoders(void)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnRegisterEncoders(void)

{
  (*g_engfuncs.pfnDeltaAddEncoder)(s_Entity_Encode_100924a0,FUN_1000f0e0);
  (*g_engfuncs.pfnDeltaAddEncoder)(s_Custom_Encode_10092490,FUN_1000f410);
  (*g_engfuncs.pfnDeltaAddEncoder)(s_Player_Encode_10092480,FUN_1000f280);
  return;
}

/* 1000f540  pfnGetWeaponData  (464 bytes)
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
  if (pvVar8 != (void *)0x0) {
    piVar9 = (int *)((int)pvVar8 + 0x950);
    info = (weapon_data_s *)0x6;
    do {
      piVar3 = (int *)*piVar9;
      if (piVar3 != (int *)0x0) {
        for (; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[0x1d]) {
          piVar6 = (int *)(**(code **)(*piVar3 + 0x134))();
          if ((piVar6 != (int *)0x0) && (iVar7 = (**(code **)(*piVar6 + 0x174))(), iVar7 != 0)) {
            puVar10 = auStack_2c;
            for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
              *puVar10 = 0;
              puVar10 = puVar10 + 1;
            }
            (**(code **)(*piVar6 + 0xfc))(auStack_2c);
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
  }
  return 1;
}

/* 1000f710  pfnUpdateClientData  (837 bytes)
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
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  longlong lVar10;
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
  lVar10 = __ftol();
  cd->waterjumptime = (int)lVar10;
  pcVar4 = (*g_engfuncs.pfnGetPhysicsInfoString)(ent);
  pcVar8 = cd->physinfo;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    *pcVar8 = cVar1;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  cd->maxspeed = (ent->v).maxspeed;
  cd->fov = (ent->v).fov;
  cd->weaponanim = (ent->v).weaponanim;
  cd->pushmsec = (ent->v).pushmsec;
  cd->fuser1 = (ent->v).fuser1;
  cd->iuser4 = (ent->v).iuser4;
  cd->iuser1 = (ent->v).iuser1;
  iVar3 = (ent->v).iuser2;
  cd->vuser3[0] = 0.0;
  cd->iuser2 = iVar3;
  if (sendweapons != 0) {
    peVar5 = (ent->v).pContainingEntity;
    if ((peVar5 == (edict_t *)0x0) &&
       (peVar5 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar5 == (edict_t *)0x0)) {
      return;
    }
    pvVar2 = peVar5->pvPrivateData;
    if (pvVar2 != (void *)0x0) {
      cd->m_flNextAttack = *(float *)((int)pvVar2 + 0x118);
      cd->fuser2 = *(float *)((int)pvVar2 + 0xadc);
      cd->fuser3 = *(float *)((int)pvVar2 + 0xad4);
      cd->vuser1[0] = (float)*(int *)((int)pvVar2 + 0x20);
      cd->vuser1[1] = (float)*(int *)((int)pvVar2 + 0x69c);
      cd->ammo_shells = *(int *)((int)pvVar2 + 0x2c);
      cd->ammo_rockets = *(int *)((int)pvVar2 + 0x30);
      cd->ammo_cells = *(int *)((int)pvVar2 + 0x34);
      cd->vuser3[0] = 0.0;
      if (((*(int **)((int)pvVar2 + 0x968) != (int *)0x0) &&
          (piVar6 = (int *)(**(code **)(**(int **)((int)pvVar2 + 0x968) + 0x134))(),
          piVar6 != (int *)0x0)) && (iVar3 = (**(code **)(*piVar6 + 0x174))(), iVar3 != 0)) {
        iVar3 = *piVar6;
        puVar9 = auStack_2c;
        for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        (**(code **)(iVar3 + 0xfc))(auStack_2c);
        cd->vuser3[0] = 0.0;
        cd->m_iId = iStack_10;
        if (iStack_10 == 0x10) {
          cd->vuser3[0] = (float)*(byte *)(piVar6 + 0x2e);
          if (piVar6[0x2f] != 0) {
            cd->vuser3[1] = (float)*(byte *)(piVar6[0x2f] + 2);
            cd->vuser3[2] = (float)*(int *)(piVar6[0x2f] + 0x10);
            cd->vuser4[0] = (float)*(byte *)(piVar6[0x2f] + 0x24);
            cd->vuser4[1] = (float)*(int *)(piVar6[0x2f] + 4);
            cd->ammo_nails = *(int *)(piVar6[0x2f] + 0x1c);
            cd->vuser4[2] = (float)*(int *)(piVar6[0x2f] + 0xc);
            cd->vuser2[0] = (float)*(int *)(piVar6[0x2f] + 8);
            cd->vuser2[1] = (float)piVar6[*(byte *)(piVar6[0x30] + 8) + 0x31];
            cd->vuser2[2] = (float)*(byte *)(piVar6[0x2f] + 0x2c);
            cd->vuser1[2] = (float)*(int *)(piVar6[0x2f] + 0x14);
          }
        }
      }
    }
  }
  return;
}

/* 1000fa60  pfnCmdStart  (72 bytes)
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
      FUN_10066820(iVar2,0);
    }
    *(uint *)((int)pvVar1 + 0x748) = random_seed;
  }
  return;
}

/* 1000fab0  pfnCmdEnd  (54 bytes)
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
    FUN_10066850();
    return;
  }
  return;
}

/* 1000faf0  pfnConnectionlessPacket  (13 bytes)
 * int pfnConnectionlessPacket(netadr_s * net_from, char * args, char * response_buffer, int * response_buffer_size)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pfnConnectionlessPacket
              (netadr_s *net_from,char *args,char *response_buffer,int *response_buffer_size)

{
  *response_buffer_size = 0;
  return 0;
}

/* 1000fb00  pfnGetHullBounds  (22 bytes)
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

/* 1000fb20  pfnCreateInstancedBaselines  (1 bytes)
 * void pfnCreateInstancedBaselines(void)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnCreateInstancedBaselines(void)

{
  return;
}

/* 1000fb30  pfnInconsistentFile  (59 bytes)
 * int pfnInconsistentFile(edict_s * player, char * filename, char * disconnect_message)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pfnInconsistentFile(edict_s *player,char *filename,char *disconnect_message)

{
  float10 fVar1;
  
  fVar1 = (float10)(*g_engfuncs.pfnCVarGetFloat)(s_mp_consistency_100924e0);
  if (fVar1 != (float10)1.0) {
    return 0;
  }
  FUN_1006e69a(disconnect_message,(byte_conflict *)s_Server_is_enforcing_file_consist_100924b0);
  return 1;
}

/* 1000fb70  pfnAllowLagCompensation  (6 bytes)
 * int pfnAllowLagCompensation(void)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pfnAllowLagCompensation(void)

{
  return 1;
}

/* 1000fb80  GetClassPtr<CBasePlayer>  (173 bytes)
 * undefined GetClassPtr<CBasePlayer>(int param_1)
 * called by: CEnvSound::Think, CTSDMHill::WaitTouch, CTriggerHurt::RadiationThink, FUN_1000ce00, FUN_100392e0, FUN_1005d870, Host_Say, pfnClientCommand, pfnClientPutInServer, pfnClientUserInfoChanged
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
  pcStack_8 = FUN_1007ff01;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((param_1 == 0) &&
     (ExceptionList = &pvStack_c, peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0
     )) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xae4),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CBaseMonster::vftable;
    pcStack_8 = (code *)puVar3;
    CTSAnimation::CTSAnimation((int)(puVar3 + 0x9d));
    *puVar3 = &CBasePlayer::vftable;
    puVar3[1] = param_1;
    ExceptionList = pvStack_4;
    return;
  }
  iRam00000004 = peVar1;
  ExceptionList = pvStack_c;
  return;
}

/* 100136a0  PlayLockSounds  (536 bytes)
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
                     gpGlobals->pStringBase + *piVar1,param_2,0x3f4ccccd,0,100);
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
                     gpGlobals->pStringBase + iVar2,param_2,0x3f4ccccd,0,100);
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

/* 10015d00  GetClassPtr<CBaseDoor>  (79 bytes)
 * undefined GetClassPtr<CBaseDoor>(int param_1)
 * called by: CBaseDoor::Blocked
 */
void __cdecl GetClassPtr<CBaseDoor>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x148),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CBaseDoor::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10015d60  GetClassPtr<CRotDoor>  (79 bytes)
 * undefined GetClassPtr<CRotDoor>(int param_1)
 */
void __cdecl GetClassPtr<CRotDoor>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x148),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CRotDoor::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10015db0  GetClassPtr<CMomentaryDoor>  (79 bytes)
 * undefined GetClassPtr<CMomentaryDoor>(int param_1)
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

/* 1001a1b0  GetClassPtr<CPointEntity>  (76 bytes)
 * undefined GetClassPtr<CPointEntity>(int param_1)
 */
void __cdecl GetClassPtr<CPointEntity>(int param_1)

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
    *puVar3 = &CPointEntity::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001a200  GetClassPtr<CBubbling>  (76 bytes)
 * undefined GetClassPtr<CBubbling>(int param_1)
 */
void __cdecl GetClassPtr<CBubbling>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,100), peVar1 = (entvars_t *)param_1,
        puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CBubbling::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001a260  GetClassPtr<CBeam>  (76 bytes)
 * undefined GetClassPtr<CBeam>(int param_1)
 * called by: CBeam::BeamCreate
 */
void __cdecl GetClassPtr<CBeam>(int param_1)

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
    *puVar3 = &CBeam::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001a330  GetClassPtr<CLightning>  (79 bytes)
 * undefined GetClassPtr<CLightning>(int param_1)
 */
void __cdecl GetClassPtr<CLightning>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x88), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CLightning::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001a380  GetClassPtr<CLaser>  (76 bytes)
 * undefined GetClassPtr<CLaser>(int param_1)
 */
void __cdecl GetClassPtr<CLaser>(int param_1)

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
    *puVar3 = &CLaser::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001a3d0  GetClassPtr<CGlow>  (76 bytes)
 * undefined GetClassPtr<CGlow>(int param_1)
 */
void __cdecl GetClassPtr<CGlow>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x5c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CGlow::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001a420  GetClassPtr<CSprite>  (76 bytes)
 * undefined GetClassPtr<CSprite>(int param_1)
 * called by: CSprite::SpriteCreate
 */
void __cdecl GetClassPtr<CSprite>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x5c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CSprite::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001a490  GetClassPtr<CGibShooter>  (76 bytes)
 * undefined GetClassPtr<CGibShooter>(int param_1)
 */
void __cdecl GetClassPtr<CGibShooter>(int param_1)

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
    *puVar3 = &CGibShooter::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001a4e0  GetClassPtr<CEnvShooter>  (76 bytes)
 * undefined GetClassPtr<CEnvShooter>(int param_1)
 */
void __cdecl GetClassPtr<CEnvShooter>(int param_1)

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
    *puVar3 = &CEnvShooter::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001a530  GetClassPtr<CTestEffect>  (79 bytes)
 * undefined GetClassPtr<CTestEffect>(int param_1)
 */
void __cdecl GetClassPtr<CTestEffect>(int param_1)

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
    *puVar3 = &CTestEffect::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001a580  GetClassPtr<CBlood>  (76 bytes)
 * undefined GetClassPtr<CBlood>(int param_1)
 */
void __cdecl GetClassPtr<CBlood>(int param_1)

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
    *puVar3 = &CBlood::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001a5d0  GetClassPtr<CShake>  (76 bytes)
 * undefined GetClassPtr<CShake>(int param_1)
 */
void __cdecl GetClassPtr<CShake>(int param_1)

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
    *puVar3 = &CShake::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001a620  GetClassPtr<CFade>  (76 bytes)
 * undefined GetClassPtr<CFade>(int param_1)
 */
void __cdecl GetClassPtr<CFade>(int param_1)

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
    *puVar3 = &CFade::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001a670  GetClassPtr<CMessage>  (76 bytes)
 * undefined GetClassPtr<CMessage>(int param_1)
 */
void __cdecl GetClassPtr<CMessage>(int param_1)

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
    *puVar3 = &CMessage::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001a6c0  GetClassPtr<CEnvFunnel>  (76 bytes)
 * undefined GetClassPtr<CEnvFunnel>(int param_1)
 */
void __cdecl GetClassPtr<CEnvFunnel>(int param_1)

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
    *puVar3 = &CEnvFunnel::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001a710  GetClassPtr<CEnvBeverage>  (76 bytes)
 * undefined GetClassPtr<CEnvBeverage>(int param_1)
 */
void __cdecl GetClassPtr<CEnvBeverage>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x5c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CEnvBeverage::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001a760  GetClassPtr<CItemSoda>  (76 bytes)
 * undefined GetClassPtr<CItemSoda>(int param_1)
 */
void __cdecl GetClassPtr<CItemSoda>(int param_1)

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
    *puVar3 = &CItemSoda::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001afa0  GetClassPtr<CShower>  (76 bytes)
 * undefined GetClassPtr<CShower>(int param_1)
 */
void __cdecl GetClassPtr<CShower>(int param_1)

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
    *puVar3 = &CShower::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001b000  GetClassPtr<CEnvExplosion>  (79 bytes)
 * undefined GetClassPtr<CEnvExplosion>(int param_1)
 */
void __cdecl GetClassPtr<CEnvExplosion>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x158),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CEnvExplosion::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001c2b0  GetClassPtr<CBreakable>  (76 bytes)
 * undefined GetClassPtr<CBreakable>(int param_1)
 */
void __cdecl GetClassPtr<CBreakable>(int param_1)

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
    *puVar3 = &CBreakable::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001c300  GetClassPtr<CPushable>  (79 bytes)
 * undefined GetClassPtr<CPushable>(int param_1)
 */
void __cdecl GetClassPtr<CPushable>(int param_1)

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
    *puVar3 = &CPushable::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001e490  GetClassPtr<CFuncTankGun>  (79 bytes)
 * undefined GetClassPtr<CFuncTankGun>(int param_1)
 */
void __cdecl GetClassPtr<CFuncTankGun>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xd4), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CFuncTankGun::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001e520  GetClassPtr<CFuncTankLaser>  (79 bytes)
 * undefined GetClassPtr<CFuncTankLaser>(int param_1)
 */
void __cdecl GetClassPtr<CFuncTankLaser>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xdc), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CFuncTankLaser::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001e570  GetClassPtr<CFuncTankRocket>  (79 bytes)
 * undefined GetClassPtr<CFuncTankRocket>(int param_1)
 */
void __cdecl GetClassPtr<CFuncTankRocket>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xd4), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CFuncTankRocket::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001e5c0  GetClassPtr<CFuncTankMortar>  (79 bytes)
 * undefined GetClassPtr<CFuncTankMortar>(int param_1)
 */
void __cdecl GetClassPtr<CFuncTankMortar>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xd4), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CFuncTankMortar::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001e610  GetClassPtr<CFuncTankControls>  (76 bytes)
 * undefined GetClassPtr<CFuncTankControls>(int param_1)
 */
void __cdecl GetClassPtr<CFuncTankControls>(int param_1)

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
    *puVar3 = &CFuncTankControls::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1001e750  pfnGameInit  (577 bytes)
 * void pfnGameInit(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnGameInit(void)

{
  (*g_engfuncs.pfnAddServerCommand)(s_addbot_100940e4,FUN_1001e660);
  (*g_engfuncs.pfnAddServerCommand)(s_addcustombot_100940d4,FUN_1001e6c0);
  _DAT_1009f488 = (*g_engfuncs.pfnCVarGetPointer)(s_sv_gravity_100940c8);
  _DAT_1009f48c = (*g_engfuncs.pfnCVarGetPointer)(s_sv_aim_100940c0);
  _DAT_1009f490 = (*g_engfuncs.pfnCVarGetPointer)(s_mp_footsteps_100940b0);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_displaysoundlist_10093a0c);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_teamplay_10093a48);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_fraglimit_10093a5c);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_timelimit_10093a70);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_fragsleft_10093a20);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_timeleft_10093a34);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_friendlyfire_10093a84);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_falldamage_10093a98);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_weaponstay_10093aac);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_forcerespawn_10093ac0);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_flashlight_10093ad4);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_autocrosshair_10093ae8);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_decalfrequency_10093afc);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_teamlist_10093b10);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_teamoverride_10093b24);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_defaultteam_10093b38);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_allowmonsters_10093b4c);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_chattime_10093b60);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_initial_cash_10093b74);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_cashforwin_10093b88);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_cashforlose_10093b9c);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_roundtime_10093bb0);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_respawntime_10093bc4);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_damagemult_10093bd8);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_slowmatch_10093bec);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_botlearn_10093c28);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_globalslow_10093c00);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_nopowerup_10093c14);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_realbullet_10093c3c);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_usecash_10093c50);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_ammocount_10093c64);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_bottalk_10093c78);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_weaponstay_10093c8c);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_theonemode_10093ca0);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_theone_10093cb4);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_mp_theothers_10093cc8);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_lastmanstanding_10093cdc);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_weaponrestriction_10093cf0);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_spectacularness_10093d04);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_respawnnumber_10093d18);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_restartround_10093d40);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_customweapons_10093d54);
  (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_banfortk_10093d68);
  (*g_engfuncs.pfnServerCommand)(s_exec_skill_cfg_100940a0);
  return;
}

/* 1001eba0  InstallGameRules  (331 bytes)
 * undefined4 * InstallGameRules(void)
 * called by: CWorld::Precache
 */
undefined4 * InstallGameRules(void)

{
  globalvars_t *pgVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_1007ff3c;
  puStack_c = ExceptionList;
  ExceptionList = &puStack_c;
  (*g_engfuncs.pfnServerCommand)(s_exec_game_cfg_100940f4);
  (*g_engfuncs.pfnServerExecute)();
  pgVar1 = gpGlobals;
  if (gpGlobals->deathmatch == 0.0) {
    DAT_1009f498 = 0;
    puStack_c = operator_new(4);
    if (puStack_c != (undefined4 *)0x0) {
      puVar2 = FUN_100343a0(puStack_c);
      ExceptionList = pcStack_8;
      return puVar2;
    }
  }
  else {
    lVar3 = __ftol();
    DAT_1009f498 = FUN_100433b0(pgVar1->pStringBase + pgVar1->mapname,(int)lVar3);
    if (DAT_1009f498 < 1) {
      lVar3 = __ftol();
      DAT_1009f498 = 0;
      if ((int)lVar3 == 1) {
        puStack_c = operator_new(0xc);
      }
      else {
        puStack_c = operator_new(0xc);
      }
      if (puStack_c != (undefined4 *)0x0) {
        puVar2 = CHalfLifeMultiplay::CHalfLifeMultiplay(puStack_c);
        ExceptionList = pcStack_8;
        return puVar2;
      }
    }
    else {
      puStack_c = operator_new(0x218);
      if (puStack_c != (undefined4 *)0x0) {
        puVar2 = CHalfLifeTeamplay::CHalfLifeTeamplay(puStack_c);
        ExceptionList = pcStack_8;
        return puVar2;
      }
    }
  }
  ExceptionList = pcStack_8;
  return (undefined4 *)0x0;
}

/* 1001f9f0  GetClassPtr<CRecharge>  (79 bytes)
 * undefined GetClassPtr<CRecharge>(int param_1)
 */
void __cdecl GetClassPtr<CRecharge>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x104),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CRecharge::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100205b0  GetClassPtr<CGenericCycler>  (79 bytes)
 * undefined GetClassPtr<CGenericCycler>(int param_1)
 */
void __cdecl GetClassPtr<CGenericCycler>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x154),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CGenericCycler::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10020680  GetClassPtr<CCyclerProbe>  (79 bytes)
 * undefined GetClassPtr<CCyclerProbe>(int param_1)
 */
void __cdecl GetClassPtr<CCyclerProbe>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x154),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CCyclerProbe::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100206d0  GetClassPtr<CCyclerSprite>  (76 bytes)
 * undefined GetClassPtr<CCyclerSprite>(int param_1)
 */
void __cdecl GetClassPtr<CCyclerSprite>(int param_1)

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
    *puVar3 = &CCyclerSprite::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10020730  GetClassPtr<CWeaponCycler>  (79 bytes)
 * undefined GetClassPtr<CWeaponCycler>(int param_1)
 */
void __cdecl GetClassPtr<CWeaponCycler>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xc0), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CWeaponCycler::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10020840  GetClassPtr<CWreckage>  (79 bytes)
 * undefined GetClassPtr<CWreckage>(int param_1)
 */
void __cdecl GetClassPtr<CWreckage>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x154),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CWreckage::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100208a0  GiveFnptrsToDll  (32 bytes)
 * undefined GiveFnptrsToDll(undefined4 * param_1, undefined4 param_2)
 */
void GiveFnptrsToDll(undefined4 *param_1,globalvars_t *param_2)

{
  int iVar1;
  enginefuncs_t_ts30 *peVar2;
  
  peVar2 = &g_engfuncs;
                    /* 0x208a0  1  GiveFnptrsToDll */
  for (iVar1 = 0x9b; iVar1 != 0; iVar1 = iVar1 + -1) {
    peVar2->pfnPrecacheModel = (_func_38 *)*param_1;
    param_1 = param_1 + 1;
    peVar2 = (enginefuncs_t_ts30 *)&peVar2->pfnPrecacheSound;
  }
  gpGlobals = param_2;
  return;
}

/* 10020e90  GetClassPtr<CHealthKit>  (76 bytes)
 * undefined GetClassPtr<CHealthKit>(int param_1)
 */
void __cdecl GetClassPtr<CHealthKit>(int param_1)

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
    *puVar3 = &CHealthKit::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10020ee0  GetClassPtr<CWallHealth>  (79 bytes)
 * undefined GetClassPtr<CWallHealth>(int param_1)
 */
void __cdecl GetClassPtr<CWallHealth>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x104),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CWallHealth::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10020f60  CreateInterface  (121 bytes)
 * undefined4 CreateInterface(byte.conflict * param_1, undefined4 * param_2)
 */
undefined4 __cdecl CreateInterface(byte_conflict *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  bool bVar7;
  
  puVar2 = DAT_1009f748;
  do {
    if (puVar2 == (undefined4 *)0x0) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 1;
      }
      return 0;
    }
    pbVar3 = (byte *)puVar2[1];
    pbVar6 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_10020f9f:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_10020fa4;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_10020f9f;
      pbVar3 = pbVar3 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_10020fa4:
    if (iVar4 == 0) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 0;
      }
      uVar5 = (*(code *)*puVar2)();
      return uVar5;
    }
    puVar2 = (undefined4 *)puVar2[2];
  } while( true );
}

/* 10021410  GetClassPtr<CWorldItem>  (76 bytes)
 * undefined GetClassPtr<CWorldItem>(int param_1)
 */
void __cdecl GetClassPtr<CWorldItem>(int param_1)

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
    *puVar3 = &CWorldItem::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10021460  GetClassPtr<CItemSuit>  (76 bytes)
 * undefined GetClassPtr<CItemSuit>(int param_1)
 */
void __cdecl GetClassPtr<CItemSuit>(int param_1)

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
    *puVar3 = &CItemSuit::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10021560  GetClassPtr<CItemBattery>  (76 bytes)
 * undefined GetClassPtr<CItemBattery>(int param_1)
 */
void __cdecl GetClassPtr<CItemBattery>(int param_1)

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
    *puVar3 = &CItemBattery::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10021750  GetClassPtr<CItemAntidote>  (76 bytes)
 * undefined GetClassPtr<CItemAntidote>(int param_1)
 */
void __cdecl GetClassPtr<CItemAntidote>(int param_1)

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
    *puVar3 = &CItemAntidote::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10021810  GetClassPtr<CItemSecurity>  (76 bytes)
 * undefined GetClassPtr<CItemSecurity>(int param_1)
 */
void __cdecl GetClassPtr<CItemSecurity>(int param_1)

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
    *puVar3 = &CItemSecurity::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

