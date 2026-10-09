/* client.dll - unnamed_1000b9b0 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1000b9b0  FUN_1000b9b0  (17 bytes)
 * undefined FUN_1000b9b0(int param_1)
 * called by: FUN_10003830
 */
void __fastcall FUN_1000b9b0(int param_1)

{
  FUN_10055aa0(*(float *)(*(int *)(param_1 + 4) + 0x254));
  return;
}

/* 1000b9d0  FUN_1000b9d0  (47 bytes)
 * undefined FUN_1000b9d0(int param_1)
 * called by: FUN_100036d0, FUN_10004600
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000b9d0(int param_1)

{
  *(undefined4 *)(param_1 + 0x768) = 0;
  *(undefined4 *)(param_1 + 0x76c) = 0;
  *(undefined4 *)(param_1 + 0x770) = 0;
  _DAT_10191480 = 0;
  _DAT_10191484 = 0;
  _DAT_10191488 = 0;
  *(undefined4 *)(param_1 + 0x764) = 0;
  _DAT_1018d188 = 0;
  return;
}

/* 1000ba00  FUN_1000ba00  (167 bytes)
 * undefined FUN_1000ba00(float * param_1, float param_2)
 * called by: FUN_10008e50, FUN_100091e0, FUN_100096f0
 */
void FUN_1000ba00(float *param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float in_stack_00000024;
  float in_stack_00000028;
  float in_stack_0000003c;
  
  if (SUB41(param_2,0) != '\0') {
    uVar1 = (uint)param_2 & 0xff;
    iVar2 = (int)in_stack_0000003c + 4;
    do {
      fVar3 = FUN_1001aea0(iVar2 + -3,-0.5,0.5);
      fVar4 = FUN_1001aea0(iVar2 + -2,-0.5,0.5);
      in_stack_0000003c = (float)(fVar4 + (float10)(float)fVar3);
      fVar3 = FUN_1001aea0(iVar2 + -1,-0.5,0.5);
      fVar4 = FUN_1001aea0(iVar2,-0.5,0.5);
      iVar2 = iVar2 + 1;
      uVar1 = uVar1 - 1;
      param_2 = (float)(fVar4 + (float10)(float)fVar3);
    } while (uVar1 != 0);
  }
  *param_1 = in_stack_00000024 * in_stack_0000003c;
  param_1[2] = 0.0;
  param_1[1] = in_stack_00000028 * param_2;
  return;
}

/* 1000bab0  FUN_1000bab0  (696 bytes)
 * undefined FUN_1000bab0(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000bab0(undefined1 *param_1)

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
  pcVar4 = s_Katana_10091bd0;
  do {
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
  pcVar4 = s_sprites_weapons_katana_spr_10091bb4;
  do {
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
  pcVar4 = s_models_v_katana_mdl_10091ba0;
  do {
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
  pcVar4 = s_models_p_katana_mdl_10091b8c;
  do {
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
  pcVar4 = s_;
  do {
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
  pcVar4 = s_models_w_katana_mdl_10091b78;
  do {
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
  pcVar4 = s_;
  do {
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
  pcVar4 = s_;
  do {
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
  pcVar4 = s_;
  do {
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

/* 1000bd70  FUN_1000bd70  (700 bytes)
 * undefined FUN_1000bd70(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000bd70(undefined1 *param_1)

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
  *(undefined4 *)(param_1 + 0xcc) = 0x19;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x28) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  param_1[0x38] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 5;
  *(undefined4 *)(param_1 + 0x20) = 6;
  pcVar4 = s_Combat_Knife_10091bd8;
  do {
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
  param_1[0x85] = 3;
  pcVar4 = s_sprites_weapons_knife_spr_10091754;
  do {
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
  pcVar4 = s_models_v_knife_mdl_10091740;
  do {
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
  pcVar4 = s_models_p_knife_mdl_1009172c;
  do {
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
  pcVar4 = s_;
  do {
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
  pcVar4 = s_models_w_knife_mdl_10091718;
  do {
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
  pcVar4 = s_;
  do {
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
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 0x270) = 3;
  *(undefined2 *)(param_1 + 0x272) = 4;
  *(undefined2 *)(param_1 + 0x274) = 5;
  *(undefined2 *)(param_1 + 0x27a) = 7;
  *(undefined2 *)(param_1 + 0x276) = 6;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  uVar2 = 0xffffffff;
  pcVar4 = s_;
  do {
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
  pcVar4 = s_;
  do {
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

/* 1000c030  FUN_1000c030  (882 bytes)
 * undefined FUN_1000c030(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000c030(undefined1 *param_1)

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
  pcVar4 = &DAT_10091c54;
  do {
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
  pcVar4 = s_sprites_weapons_m16_spr_10091c3c;
  do {
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
  pcVar4 = s_models_556_shell_mdl_10091264;
  do {
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
  pcVar4 = s_models_v_m16_mdl_10091c28;
  do {
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
  pcVar4 = s_models_p_m16_mdl_10091c14;
  do {
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
  pcVar4 = s_;
  do {
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
  pcVar4 = s_models_w_m16_mdl_10091c00;
  do {
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
  pcVar4 = s_twohanded_1009121c;
  do {
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
  pcVar4 = s_weapons_m16_fire_wav_10091be8;
  do {
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
  pcVar4 = s_;
  do {
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

/* 1000c3b0  FUN_1000c3b0  (887 bytes)
 * undefined FUN_1000c3b0(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000c3b0(undefined1 *param_1)

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
  pcVar4 = &DAT_10091cec;
  do {
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
  pcVar4 = s_sprites_weapons_m4_spr_10091cd4;
  do {
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
  pcVar4 = s_models_556_shell_mdl_10091264;
  do {
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
  pcVar4 = s_models_v_m4_mdl_10091cc4;
  do {
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
  pcVar4 = s_models_p_m4_mdl_10091cb4;
  do {
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
  pcVar4 = s_models_p_m4_sil_mdl_10091ca0;
  do {
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
  pcVar4 = s_models_w_m4_mdl_10091c90;
  do {
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
  pcVar4 = s_twohanded_1009121c;
  do {
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
  pcVar4 = s_weapons_m4_m4_fire_wav_10091c78;
  do {
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
  pcVar4 = s_weapons_m4_m4_fire_sil_wav_10091c5c;
  do {
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

/* 1000c730  FUN_1000c730  (780 bytes)
 * undefined FUN_1000c730(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000c730(undefined1 *param_1)

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
  pcVar4 = &DAT_10091d64;
  do {
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
  pcVar4 = s_sprites_weapons_m60_spr_10091d4c;
  do {
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
  pcVar4 = s_models_556_shell_mdl_10091264;
  do {
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
  pcVar4 = s_models_v_m60_mdl_10091d38;
  do {
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
  pcVar4 = s_models_p_m60_mdl_10091d24;
  do {
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
  pcVar4 = s_;
  do {
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
  pcVar4 = s_models_w_m60_mdl_10091d10;
  do {
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
  pcVar4 = s_twohanded_1009121c;
  do {
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
  pcVar4 = s_weapons_m60_m60_fire_wav_10091cf4;
  do {
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
  pcVar4 = s_;
  do {
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

/* 1000ca40  FUN_1000ca40  (671 bytes)
 * undefined FUN_1000ca40(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000ca40(undefined1 *param_1)

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
  pcVar4 = s_M61_Grenade_10091dc0;
  do {
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
  pcVar4 = s_sprites_weapons_m61_spr_10091da8;
  do {
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
  pcVar4 = s_models_v_m61_mdl_10091d94;
  do {
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
  pcVar4 = s_models_p_m61_mdl_10091d80;
  do {
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
  pcVar4 = s_;
  do {
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
  pcVar4 = s_models_w_m61_mdl_10091d6c;
  do {
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
  pcVar4 = s_;
  do {
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
  pcVar4 = s_;
  do {
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
  pcVar4 = s_;
  do {
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

/* 1000cce0  FUN_1000cce0  (790 bytes)
 * undefined FUN_1000cce0(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000cce0(undefined1 *param_1)

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
  pcVar4 = &DAT_10091e74;
  do {
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
  pcVar4 = s_sprites_weapons_ump_spr_10091e5c;
  do {
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
  pcVar4 = s_models_9mm_shell_mdl_10091524;
  do {
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
  pcVar4 = s_models_v_ump_mdl_10091e48;
  do {
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
  pcVar4 = s_models_p_ump_mdl_10091e34;
  do {
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
  pcVar4 = s_models_p_ump_sil_mdl_10091e1c;
  do {
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
  pcVar4 = s_models_w_ump_mdl_10091e08;
  do {
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
  pcVar4 = s_twohanded_1009121c;
  do {
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
  pcVar4 = s_weapons_ump_ump_fire_wav_10091dec;
  do {
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
  pcVar4 = s_weapons_ump_ump_fire_sil_wav_10091dcc;
  do {
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

/* 1000d000  FUN_1000d000  (240 bytes)
 * undefined FUN_1000d000(int param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000d000(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_10091e8c;
  do {
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
  pcVar4 = s_models_v_melee_mdl_10091e78;
  do {
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

/* 1000d0f0  FUN_1000d0f0  (846 bytes)
 * undefined FUN_1000d0f0(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000d0f0(undefined1 *param_1)

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
  pcVar4 = &DAT_10091f40;
  do {
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
  pcVar4 = s_sprites_weapons_mk23_spr_10091f24;
  do {
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
  pcVar4 = s_models_9mm_shell_mdl_10091524;
  do {
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
  pcVar4 = s_models_v_mk23_mdl_10091f10;
  do {
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
  pcVar4 = s_models_p_mk23_mdl_10091efc;
  do {
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
  pcVar4 = s_models_p_mk23_sil_mdl_10091ee4;
  do {
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
  pcVar4 = s_models_w_mk23_mdl_10091ed0;
  do {
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
  pcVar4 = s_onehanded_100914b4;
  do {
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
  pcVar4 = s_weapons_mk23_mk23_fire_wav_10091eb4;
  do {
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
  pcVar4 = s_weapons_mk23_mk23_fire_sil_wav_10091e94;
  do {
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

/* 1000d440  FUN_1000d440  (933 bytes)
 * undefined FUN_1000d440(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000d440(undefined1 *param_1)

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
  pcVar4 = &DAT_10091fc4;
  do {
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
  pcVar4 = s_sprites_weapons_mk23_akimbo_spr_10091fa4;
  do {
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
  pcVar4 = s_models_9mm_shell_mdl_10091524;
  do {
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
  pcVar4 = s_models_v_mk23_akimbo_mdl_10091f88;
  do {
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
  pcVar4 = s_models_p_mk23_akimbo_mdl_10091f6c;
  do {
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
  pcVar4 = s_models_p_mk23_akimbo_sil_mdl_10091f4c;
  do {
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
  pcVar4 = s_models_w_mk23_mdl_10091ed0;
  do {
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
  pcVar4 = &DAT_10091564;
  do {
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
  pcVar4 = s_weapons_mk23_mk23_fire_wav_10091eb4;
  do {
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
  pcVar4 = s_weapons_mk23_mk23_fire_sil_wav_10091e94;
  do {
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

/* 1000d7f0  FUN_1000d7f0  (887 bytes)
 * undefined FUN_1000d7f0(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000d7f0(undefined1 *param_1)

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
  pcVar4 = s_Mossberg_500_10092074;
  do {
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
  pcVar4 = s_sprites_weapons_mossberg_spr_10092054;
  do {
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
  pcVar4 = s_models_shotgun_shell_gold_mdl_10092034;
  do {
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
  pcVar4 = s_models_v_mossberg_mdl_1009201c;
  do {
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
  pcVar4 = s_models_p_mossberg_mdl_10092004;
  do {
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
  pcVar4 = s_;
  do {
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
  pcVar4 = s_models_w_mossberg_mdl_10091fec;
  do {
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
  pcVar4 = s_twohanded_1009121c;
  do {
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
  pcVar4 = s_weapons_mossberg_fire_wav_10091fd0;
  do {
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
  pcVar4 = s_weapons_m3_m3_pump_wav_100913d4;
  do {
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

/* 1000db70  FUN_1000db70  (856 bytes)
 * undefined FUN_1000db70(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000db70(undefined1 *param_1)

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
  pcVar4 = &DAT_10092130;
  do {
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
  pcVar4 = s_sprites_weapons_mp5k_spr_10092114;
  do {
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
  pcVar4 = s_models_9mm_shell_mdl_10091524;
  do {
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
  pcVar4 = s_models_v_mp5k_mdl_10092100;
  do {
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
  pcVar4 = s_models_p_mp5k_mdl_100920ec;
  do {
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
  pcVar4 = s_models_p_mp5k_sil_mdl_100920d4;
  do {
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
  pcVar4 = s_models_w_mp5k_mdl_100920c0;
  do {
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
  pcVar4 = s_twohanded_1009121c;
  do {
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
  pcVar4 = s_weapons_mp5k_mp5k_fire_wav_100920a4;
  do {
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
  pcVar4 = s_weapons_mp5k_mp5k_fire_sil_wav_10092084;
  do {
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

/* 1000ded0  FUN_1000ded0  (787 bytes)
 * undefined FUN_1000ded0(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000ded0(undefined1 *param_1)

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
  pcVar4 = &DAT_100921b0;
  do {
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
  pcVar4 = s_sprites_weapons_mp5sd_spr_10092194;
  do {
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
  pcVar4 = s_models_9mm_shell_mdl_10091524;
  do {
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
  pcVar4 = s_models_v_mp5sd_mdl_10092180;
  do {
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
  pcVar4 = s_models_p_mp5sd_mdl_1009216c;
  do {
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
  pcVar4 = s_models_p_mp5sd_mdl_1009216c;
  do {
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
  pcVar4 = s_models_w_mp5sd_mdl_10092158;
  do {
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
  pcVar4 = s_twohanded_1009121c;
  do {
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
  pcVar4 = s_weapons_mp5sd_mp5sd_fire_wav_10092138;
  do {
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
  pcVar4 = s_weapons_mp5sd_mp5sd_fire_wav_10092138;
  do {
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

/* 1000e1f0  FUN_1000e1f0  (778 bytes)
 * undefined FUN_1000e1f0(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000e1f0(undefined1 *param_1)

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
  pcVar4 = &DAT_10092258;
  do {
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
  pcVar4 = s_sprites_weapons_pdw_spr_10092240;
  do {
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
  pcVar4 = s_models_56_shell_mdl_10091800;
  do {
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
  pcVar4 = s_models_v_pdw_mdl_1009222c;
  do {
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
  pcVar4 = s_models_p_pdw_mdl_10092218;
  do {
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
  pcVar4 = s_models_p_pdw_sil_mdl_10092200;
  do {
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
  pcVar4 = s_models_w_pdw_mdl_100921ec;
  do {
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
  pcVar4 = s_onehanded_100914b4;
  do {
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
  pcVar4 = s_weapons_pdw_fire_wav_100921d4;
  do {
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
  pcVar4 = s_weapons_pdw_fire_sil_wav_100921b8;
  do {
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

/* 1000e500  FUN_1000e500  (766 bytes)
 * undefined FUN_1000e500(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000e500(undefined1 *param_1)

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
  pcVar4 = &DAT_100922e4;
  do {
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
  pcVar4 = s_sprites_weapons_ruger_spr_100922c8;
  do {
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
  pcVar4 = s_models_22_shell_mdl_100922b4;
  do {
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
  pcVar4 = s_models_v_ruger_mdl_100922a0;
  do {
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
  pcVar4 = s_models_p_ruger_mdl_1009228c;
  do {
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
  pcVar4 = s_models_p_ruger_mdl_1009228c;
  do {
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
  pcVar4 = s_models_w_ruger_mdl_10092278;
  do {
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
  pcVar4 = s_onehanded_100914b4;
  do {
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
  pcVar4 = s_weapons_ruger_fire_wav_10092260;
  do {
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
  pcVar4 = s_weapons_ruger_fire_wav_10092260;
  do {
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

/* 1000e800  FUN_1000e800  (886 bytes)
 * undefined FUN_1000e800(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000e800(undefined1 *param_1)

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
  pcVar4 = s_Sawed_off_10092374;
  do {
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
  pcVar4 = s_sprites_weapons_sawedoff_spr_10092354;
  do {
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
  pcVar4 = s_;
  do {
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
  pcVar4 = s_models_v_sawedoff_mdl_1009233c;
  do {
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
  pcVar4 = s_models_p_sawedoff_mdl_10092324;
  do {
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
  pcVar4 = s_;
  do {
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
  pcVar4 = s_models_w_sawedoff_mdl_1009230c;
  do {
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
  pcVar4 = s_twohanded_1009121c;
  do {
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
  pcVar4 = s_weapons_sawedoff_fire_wav_100922f0;
  do {
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
  pcVar4 = s_;
  do {
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

/* 1000eb80  FUN_1000eb80  (700 bytes)
 * undefined FUN_1000eb80(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000eb80(undefined1 *param_1)

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
  pcVar4 = s_Seal_Knife_100923e8;
  do {
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
  pcVar4 = s_sprites_weapons_sealknife_spr_100923c8;
  do {
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
  pcVar4 = s_models_v_sealknife_mdl_100923b0;
  do {
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
  pcVar4 = s_models_p_sealknife_mdl_10092398;
  do {
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
  pcVar4 = s_;
  do {
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
  pcVar4 = s_models_w_sealknife_mdl_10092380;
  do {
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
  pcVar4 = s_;
  do {
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
  pcVar4 = s_;
  do {
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
  pcVar4 = s_;
  do {
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

/* 1000ee40  FUN_1000ee40  (718 bytes)
 * undefined FUN_1000ee40(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000ee40(undefined1 *param_1)

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
  pcVar4 = s_Akimbo_Skorpions_10092480;
  do {
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
  pcVar4 = s_sprites_weapons_skorpion_akimbo__1009245c;
  do {
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
  pcVar4 = s_models_22_shell_mdl_100922b4;
  do {
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
  pcVar4 = s_models_v_skorpion_ak_mdl_10092440;
  do {
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
  pcVar4 = s_models_p_skorpion_ak_mdl_10092424;
  do {
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
  pcVar4 = s_models_w_skorpion_mdl_1009240c;
  do {
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
  pcVar4 = &DAT_10091564;
  do {
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
  pcVar4 = s_weapons_tmp_fire_wav_100923f4;
  do {
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

/* 1000f110  FUN_1000f110  (807 bytes)
 * undefined FUN_1000f110(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000f110(undefined1 *param_1)

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
  pcVar4 = &DAT_10092548;
  do {
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
  pcVar4 = s_sprites_weapons_spas12_spr_1009252c;
  do {
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
  pcVar4 = s_models_shotgun_shell_mdl_10092510;
  do {
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
  pcVar4 = s_models_v_spas12_mdl_100924fc;
  do {
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
  pcVar4 = s_models_p_spas12_mdl_100924e8;
  do {
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
  pcVar4 = s_;
  do {
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
  pcVar4 = s_models_w_spas12_mdl_100924d4;
  do {
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
  pcVar4 = s_twohanded_1009121c;
  do {
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
  pcVar4 = s_weapons_spas12_spas12_fire_wav_100924b4;
  do {
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
  pcVar4 = s_weapons_spas12_spas12_pump_wav_10092494;
  do {
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

/* 1000f440  FUN_1000f440  (782 bytes)
 * undefined FUN_1000f440(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000f440(undefined1 *param_1)

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
  pcVar4 = s_Contender_G2_100925d4;
  do {
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
  pcVar4 = s_sprites_weapons_contender_spr_100925b4;
  do {
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
  pcVar4 = s_;
  do {
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
  pcVar4 = s_models_v_contender_mdl_1009259c;
  do {
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
  pcVar4 = s_models_p_contender_mdl_10092584;
  do {
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
  pcVar4 = s_;
  do {
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
  pcVar4 = s_models_w_contender_mdl_1009256c;
  do {
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
  pcVar4 = s_onehanded_100914b4;
  do {
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
  pcVar4 = s_weapons_contender_fire_wav_10092550;
  do {
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
  pcVar4 = s_;
  do {
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

/* 1000f750  FUN_1000f750  (714 bytes)
 * undefined FUN_1000f750(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000f750(undefined1 *param_1)

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
  pcVar4 = s_Skorpion_10092650;
  do {
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
  pcVar4 = s_sprites_weapons_skorpion_spr_10092630;
  do {
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
  pcVar4 = s_models_22_shell_mdl_100922b4;
  do {
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
  pcVar4 = s_models_v_skorpion_mdl_10092618;
  do {
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
  pcVar4 = s_models_p_skorpion_mdl_10092600;
  do {
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
  pcVar4 = s_models_w_skorpion_mdl_1009240c;
  do {
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
  pcVar4 = s_onehanded_100914b4;
  do {
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
  pcVar4 = s_weapons_tmp_fire_wav_100923f4;
  do {
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
  pcVar4 = s_weapons_tmp_fire_sil_wav_100925e4;
  do {
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

/* 1000fa20  FUN_1000fa20  (793 bytes)
 * undefined FUN_1000fa20(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000fa20(undefined1 *param_1)

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
  pcVar4 = &DAT_100926d0;
  do {
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
  pcVar4 = s_sprites_weapons_usas12_spr_100926b4;
  do {
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
  pcVar4 = s_models_shotgun_shell_mdl_10092510;
  do {
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
  pcVar4 = s_models_v_usas_mdl_100926a0;
  do {
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
  pcVar4 = s_models_p_usas_mdl_1009268c;
  do {
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
  pcVar4 = s_;
  do {
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
  pcVar4 = s_models_w_usas_mdl_10092678;
  do {
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
  pcVar4 = s_twohanded_1009121c;
  do {
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
  pcVar4 = s_weapons_usas_usas_fire_wav_1009265c;
  do {
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
  pcVar4 = s_;
  do {
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

/* 1000fd40  FUN_1000fd40  (831 bytes)
 * undefined FUN_1000fd40(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_1000fd40(undefined1 *param_1)

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
  pcVar4 = &DAT_10092780;
  do {
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
  pcVar4 = s_sprites_weapons_uzi_spr_10092768;
  do {
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
  pcVar4 = s_models_9mm_shell_mdl_10091524;
  do {
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
  pcVar4 = s_models_v_uzi_mdl_10092754;
  do {
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
  pcVar4 = s_models_p_uzi_mdl_10092740;
  do {
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
  pcVar4 = s_models_p_uzi_sil_mdl_10092728;
  do {
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
  pcVar4 = s_models_w_uzi_mdl_10092714;
  do {
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
  pcVar4 = s_onehanded_100914b4;
  do {
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
  pcVar4 = s_weapons_uzi_uzi_fire_wav_100926f8;
  do {
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
  pcVar4 = s_weapons_uzi_uzi_fire_sil_wav_100926d8;
  do {
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

/* 10010080  FUN_10010080  (813 bytes)
 * undefined FUN_10010080(undefined1 * param_1)
 * called by: FUN_10007de0
 */
void __cdecl FUN_10010080(undefined1 *param_1)

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
  pcVar4 = s_Akimbo_Mini_Uzi_100927f8;
  do {
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
  pcVar4 = s_sprites_weapons_uzi_akimbo_spr_100927d8;
  do {
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
  pcVar4 = s_models_9mm_shell_mdl_10091524;
  do {
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
  pcVar4 = s_models_v_uzi_akimbo_mdl_100927c0;
  do {
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
  pcVar4 = s_models_p_uzi_akimbo_mdl_100927a8;
  do {
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
  pcVar4 = s_models_p_uzi_akimbo_sil_mdl_1009278c;
  do {
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
  pcVar4 = s_models_w_uzi_mdl_10092714;
  do {
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
  pcVar4 = &DAT_10091564;
  do {
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
  pcVar4 = s_weapons_uzi_uzi_fire_wav_100926f8;
  do {
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
  pcVar4 = s_weapons_uzi_uzi_fire_sil_wav_100926d8;
  do {
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

/* 100103b0  FUN_100103b0  (131 bytes)
 * undefined FUN_100103b0(undefined4 * param_1)
 * called by: FUN_10066750
 */
void __fastcall FUN_100103b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[0xb61];
  *param_1 = &PTR_FUN_1007aa34;
  param_1[1] = &PTR_AttemptToMaterialize_1007aa30;
  param_1[2] = &PTR_FUN_1007aa04;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100667c0(puVar1);
    FUN_1006ad4c(puVar1);
  }
  puVar1 = (undefined4 *)param_1[0xb62];
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100667c0(puVar1);
    FUN_1006ad4c(puVar1);
  }
  puVar1 = (undefined4 *)param_1[0xb63];
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100667c0(puVar1);
    FUN_1006ad4c(puVar1);
  }
  puVar1 = (undefined4 *)param_1[0xb64];
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100667c0(puVar1);
    FUN_1006ad4c(puVar1);
  }
  return;
}

/* 10010440  FUN_10010440  (481 bytes)
 * undefined FUN_10010440(int param_1)
 * called by: FUN_10011320, FUN_10011650
 */
void __fastcall FUN_10010440(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  Panel *this;
  void *pvVar3;
  Panel *this_00;
  int iVar4;
  undefined **ppuVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_1007774b;
  local_c = ExceptionList;
  puVar1 = *(undefined4 **)(param_1 + 0x2d88);
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0xc) = 2;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100667c0(puVar1);
    FUN_1006ad4c(puVar1);
  }
  if (*(int *)(param_1 + 0xc) == 2) {
    iVar2 = 0x3f800000;
  }
  else {
    iVar2 = 0x3f000000;
  }
  lVar9 = __ftol();
  lVar10 = __ftol();
  lVar11 = __ftol();
  this = (Panel *)FUN_10066790(0xe8);
  local_4 = 0;
  this_00 = (Panel *)0x0;
  if (this != (Panel *)0x0) {
    vgui::Panel::Panel(this);
    *(undefined ***)this = &PTR_setPos_1007aa38;
    this_00 = this;
  }
  local_4 = 0xffffffff;
  *(Panel **)(param_1 + 0x2d88) = this_00;
  if (param_1 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = param_1 + 8;
  }
  FUN_100667e0(this_00,(1 < DAT_100cf97c) + 6,0x88,DAT_100d590c / 2,0x80,0x14,param_1,iVar8);
  ppuVar5 = &PTR_s_1_Handguns_10092824;
  iVar6 = (int)lVar11 / 2;
  iVar4 = (int)lVar10 / 2;
  pvVar3 = (void *)((int)lVar9 / 2);
  iVar8 = 0;
  do {
    iVar7 = iVar8;
    FUN_100668f0(*(void **)(param_1 + 0x2d88),iVar7,*ppuVar5,pvVar3,iVar4,iVar6,0x32,iVar2,0xb);
    ppuVar5 = ppuVar5 + 1;
    iVar8 = iVar7 + 1;
  } while ((int)ppuVar5 < 0x10092838);
  if (1 < DAT_100cf97c) {
    iVar8 = iVar7 + 2;
    FUN_100668f0(*(void **)(param_1 + 0x2d88),iVar8,PTR_s_1_Buy_10092844,pvVar3,iVar4,iVar6,0x32,
                 iVar2,0xb);
  }
  FUN_100668f0(*(void **)(param_1 + 0x2d88),iVar8,PTR_s_0_Cancel_10092838,100,100,0xcd,0x32,
               0x3f800000,0);
  FUN_10066880(*(int **)(param_1 + 0x2d88));
  (**(code **)(**(int **)(param_1 + 0x2d88) + 0x24))(1);
  ExceptionList = pvVar3;
  return;
}

/* 10010630  FUN_10010630  (608 bytes)
 * undefined FUN_10010630(int param_1)
 * called by: FUN_10011320, FUN_10011650
 */
void __fastcall FUN_10010630(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  Panel *this;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  char local_2c [28];
  void *pvStack_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_1007776b;
  local_c = ExceptionList;
  iVar6 = 0;
  puVar2 = *(undefined4 **)(param_1 + 0x2d88);
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0xc) = 5;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_100667c0(puVar2);
    FUN_1006ad4c(puVar2);
  }
  if (*(int *)(param_1 + 0xc) == 2) {
    iVar3 = 0x3f800000;
  }
  else {
    iVar3 = 0x3f000000;
  }
  lVar11 = __ftol();
  lVar12 = __ftol();
  lVar13 = __ftol();
  this = (Panel *)FUN_10066790(0xe8);
  local_4 = 0;
  if (this == (Panel *)0x0) {
    this = (Panel *)0x0;
  }
  else {
    vgui::Panel::Panel(this);
    *(undefined ***)this = &PTR_setPos_1007aa38;
  }
  local_4 = 0xffffffff;
  *(Panel **)(param_1 + 0x2d88) = this;
  if (param_1 == 0) {
    iVar14 = 0;
  }
  else {
    iVar14 = param_1 + 8;
  }
  FUN_100667e0(this,*(int *)(param_1 + 0x1c) + 1,0x88,DAT_100d590c / 2,0x80,0x14,param_1,iVar14);
  if (0 < *(int *)(param_1 + 0x1c)) {
    puVar7 = (uint *)(param_1 + 0xb0);
    do {
      if (*puVar7 != 0) {
        if ((char)puVar7[-1] == '\0') {
          FUN_100071c0(*puVar7);
          FUN_1006ac7a(local_2c,(byte_conflict *)s__i__s_10092974);
          iVar14 = 8;
        }
        else {
          FUN_1006ac7a(local_2c,&DAT_10091200);
          if ((*puVar7 & 0x10) == 0) {
            if ((*puVar7 & 0x20) != 0) {
              pcVar8 = s_Stealth_Shoes_1009295c;
              goto LAB_100107c4;
            }
          }
          else {
            pcVar8 = &DAT_1009296c;
LAB_100107c4:
            uVar4 = 0xffffffff;
            do {
              pcVar10 = pcVar8;
              if (uVar4 == 0) break;
              uVar4 = uVar4 - 1;
              pcVar10 = pcVar8 + 1;
              cVar1 = *pcVar8;
              pcVar8 = pcVar10;
            } while (cVar1 != '\0');
            uVar4 = ~uVar4;
            iVar14 = -1;
            pcVar8 = local_2c;
            do {
              pcVar9 = pcVar8;
              if (iVar14 == 0) break;
              iVar14 = iVar14 + -1;
              pcVar9 = pcVar8 + 1;
              cVar1 = *pcVar8;
              pcVar8 = pcVar9;
            } while (cVar1 != '\0');
            pcVar8 = pcVar10 + -uVar4;
            pcVar10 = pcVar9 + -1;
            for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
              pcVar8 = pcVar8 + 4;
              pcVar10 = pcVar10 + 4;
            }
            for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *pcVar10 = *pcVar8;
              pcVar8 = pcVar8 + 1;
              pcVar10 = pcVar10 + 1;
            }
          }
          iVar14 = 10;
        }
        FUN_100668f0(*(void **)(param_1 + 0x2d88),iVar6,local_2c,(int)lVar11 / 2,(int)lVar12 / 2,
                     (int)lVar13 / 2,0x32,iVar3,iVar14);
      }
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 0xe;
    } while (iVar6 < *(int *)(param_1 + 0x1c));
  }
  FUN_100668f0(*(void **)(param_1 + 0x2d88),iVar6,PTR_s_0_Cancel_10092838,100,100,0xcd,0x32,
               0x3f800000,0);
  FUN_10066880(*(int **)(param_1 + 0x2d88));
  (**(code **)(**(int **)(param_1 + 0x2d88) + 0x24))(1);
  ExceptionList = pvStack_10;
  return;
}

/* 10010890  FUN_10010890  (25 bytes)
 * undefined FUN_10010890(int param_1)
 * called by: FUN_10011320, FUN_10011650
 */
void __fastcall FUN_10010890(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 1;
  if (*(int **)(param_1 + 0x2d88) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x2d88) + 0x24))(0);
  }
  return;
}

/* 100108b0  FUN_100108b0  (756 bytes)
 * undefined FUN_100108b0(int param_1)
 * called by: FUN_10011320, FUN_10011650
 */
void __fastcall FUN_100108b0(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  Panel *this;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  char local_4c [60];
  void *pvStack_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_1007778b;
  local_c = ExceptionList;
  puVar4 = *(undefined4 **)(param_1 + 0x2d8c);
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0xc) = 3;
  if (puVar4 != (undefined4 *)0x0) {
    FUN_100667c0(puVar4);
    FUN_1006ad4c(puVar4);
  }
  iVar7 = 0;
  lVar10 = __ftol();
  lVar11 = __ftol();
  lVar12 = __ftol();
  iVar8 = 0;
  do {
    iVar1 = *(int *)(&DAT_1007a950 + (iVar8 + *(int *)(param_1 + 0x20) * 9) * 4);
    if (iVar1 != -1) {
      uVar3 = FUN_1000b6d0(iVar1,DAT_1018d174);
      if (((char)uVar3 == '\0') && ((1 < DAT_100cf97c || (iVar1 != 0x18)))) {
        iVar7 = iVar7 + 1;
      }
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 9);
  this = (Panel *)FUN_10066790(0xe8);
  local_4 = 0;
  if (this == (Panel *)0x0) {
    this = (Panel *)0x0;
  }
  else {
    vgui::Panel::Panel(this);
    *(undefined ***)this = &PTR_setPos_1007aa38;
  }
  local_4 = 0xffffffff;
  *(Panel **)(param_1 + 0x2d8c) = this;
  if (param_1 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = param_1 + 8;
  }
  FUN_100667e0(this,iVar7 + 1,0x108,DAT_100d590c / 2,0x80,0x14,param_1,iVar8);
  iVar8 = 0;
  if (0 < iVar7) {
    do {
      iVar1 = *(int *)(&DAT_1007a950 + (iVar8 + *(int *)(param_1 + 0x20) * 9) * 4);
      if (iVar1 != -1) {
        uVar3 = FUN_1000b6d0(iVar1,DAT_1018d174);
        if (((char)uVar3 == '\0') && ((1 < DAT_100cf97c || (iVar1 != 0x18)))) {
          iVar1 = *(int *)(param_1 + 0x28);
          iVar5 = *(int *)(&DAT_1007a950 + (iVar8 + *(int *)(param_1 + 0x20) * 9) * 4);
          if ((1 < DAT_100cf97c) || (iVar6 = 30000, DAT_1018d170 != 0)) {
            iVar6 = DAT_100d43f0;
          }
          puVar4 = FUN_100071c0(iVar5);
          if (iVar6 < puVar4[0x36] + *(int *)(param_1 + 0x42c)) {
LAB_10010aa8:
            bVar2 = false;
          }
          else {
            puVar4 = FUN_100071c0(*(int *)(&DAT_1007a950 +
                                          (iVar8 + *(int *)(param_1 + 0x20) * 9) * 4));
            if (0x51 < (int)((uint)*(byte *)(puVar4 + 0x34) + *(int *)(param_1 + 0x430)))
            goto LAB_10010aa8;
            bVar2 = true;
          }
          FUN_100071c0(*(int *)(&DAT_1007a950 + (iVar8 + *(int *)(param_1 + 0x20) * 9) * 4));
          FUN_1006ac7a(local_4c,(byte_conflict *)s__i__s_10092974);
          if ((*(int *)(param_1 + 0xc) == 3) || (iVar5 == iVar1)) {
            iVar1 = 0x3f800000;
          }
          else {
            iVar1 = 0x3f000000;
          }
          if (bVar2) {
            iVar9 = (int)lVar12 / 2;
            iVar6 = (int)lVar11 / 2;
            iVar5 = (int)lVar10 / 2;
          }
          else {
            iVar9 = 0x2d;
            iVar5 = 0xc3;
            iVar6 = 0x2d;
          }
          FUN_100668f0(*(void **)(param_1 + 0x2d8c),iVar8,local_4c,iVar5,iVar6,iVar9,0x32,iVar1,8);
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar7);
  }
  FUN_100668f0(*(void **)(param_1 + 0x2d8c),iVar8,PTR_s_0_Cancel_10092838,100,100,0xcd,0x32,
               0x3f800000,0);
  FUN_10066880(*(int **)(param_1 + 0x2d8c));
  (**(code **)(**(int **)(param_1 + 0x2d8c) + 0x24))(1);
  ExceptionList = pvStack_10;
  return;
}

/* 10010bb0  FUN_10010bb0  (25 bytes)
 * undefined FUN_10010bb0(int param_1)
 * called by: FUN_10011320, FUN_10011650
 */
void __fastcall FUN_10010bb0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 2;
  if (*(int **)(param_1 + 0x2d8c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x2d8c) + 0x24))(0);
  }
  return;
}

/* 10010bd0  FUN_10010bd0  (1368 bytes)
 * undefined FUN_10010bd0(int param_1)
 * called by: FUN_10011320, FUN_10011650
 */
void __fastcall FUN_10010bd0(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  Panel *this;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  char *pcVar12;
  int local_64;
  char local_4c [60];
  void *pvStack_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_100777ab;
  local_c = ExceptionList;
  iVar6 = 0;
  puVar3 = *(undefined4 **)(param_1 + 0x2d90);
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0xc) = 4;
  if (puVar3 != (undefined4 *)0x0) {
    FUN_100667c0(puVar3);
    FUN_1006ad4c(puVar3);
  }
  local_64 = 0;
  lVar9 = __ftol();
  lVar10 = __ftol();
  lVar11 = __ftol();
  iVar2 = FUN_10012ad0(*(uint *)(param_1 + 0x28),(byte_conflict)*(undefined4 *)(param_1 + 0x24),0,
                       '\0');
  if ((1 < DAT_100cf97c) || (iVar5 = 30000, DAT_1018d170 != 0)) {
    iVar5 = DAT_100d43f0;
  }
  if ((iVar5 < iVar2 + *(int *)(param_1 + 0x42c)) ||
     (puVar3 = FUN_100071c0(*(int *)(param_1 + 0x28)),
     0x51 < (int)((uint)*(byte *)(puVar3 + 0x34) + *(int *)(param_1 + 0x430)))) {
    bVar1 = 0;
  }
  else {
    bVar1 = 1;
  }
  do {
    uVar7 = 1 << ((byte)iVar6 & 0x1f);
    if ((((uVar7 & *(uint *)(param_1 + 0x24)) == 0) &&
        (puVar3 = FUN_100071c0(*(int *)(param_1 + 0x28)), (uVar7 & puVar3[0x39]) == 0)) &&
       (puVar3 = FUN_100071c0(*(int *)(param_1 + 0x28)), (uVar7 & puVar3[0x38]) != 0)) {
      local_64 = local_64 + 1;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  puVar3 = FUN_100071c0(*(int *)(param_1 + 0x28));
  if ((puVar3[0x32] != -1) ||
     (puVar3 = FUN_100071c0(*(int *)(param_1 + 0x28)), *(char *)(puVar3 + 0x37) != '\0')) {
    local_64 = local_64 + 1;
  }
  this = (Panel *)FUN_10066790(0xe8);
  iVar6 = 0;
  local_4 = 0;
  if (this == (Panel *)0x0) {
    this = (Panel *)0x0;
  }
  else {
    vgui::Panel::Panel(this);
    *(undefined ***)this = &PTR_setPos_1007aa38;
  }
  local_4 = 0xffffffff;
  *(Panel **)(param_1 + 0x2d90) = this;
  if (param_1 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = param_1 + 8;
  }
  FUN_100667e0(this,local_64 + 2,0x188,DAT_100d590c / 2,0x80,0x14,param_1,iVar5);
  FUN_100668f0(*(void **)(param_1 + 0x2d90),0,PTR_s_1_Buy_10092844,
               (-(uint)bVar1 & 0xffffff6a) + 0xc3,(-(uint)bVar1 & 0x96) + 0x2d,0x2d,0x32,0x3f800000,
               8);
  do {
    uVar7 = 1 << ((byte)iVar6 & 0x1f);
    if ((((uVar7 & *(uint *)(param_1 + 0x24)) == 0) &&
        (puVar3 = FUN_100071c0(*(int *)(param_1 + 0x28)), (uVar7 & puVar3[0x39]) == 0)) &&
       (puVar3 = FUN_100071c0(*(int *)(param_1 + 0x28)), (uVar7 & puVar3[0x38]) != 0)) {
      iVar5 = iVar2;
      switch(iVar6) {
      case 0:
        FUN_1006ac7a(local_4c,(byte_conflict *)s__i_Silencer__i_100929b4);
        iVar5 = iVar2 + 900;
        break;
      case 1:
        FUN_1006ac7a(local_4c,(byte_conflict *)s__i_Lasersight__i_100929a0);
        iVar5 = iVar2 + 800;
        break;
      case 2:
        FUN_1006ac7a(local_4c,(byte_conflict *)s__i_Flashlight__i_1009298c);
        iVar5 = iVar2 + 500;
        break;
      case 3:
        FUN_1006ac7a(local_4c,(byte_conflict *)s__i_Scope__i_1009297c);
        iVar5 = iVar2 + 0x708;
      }
      if ((1 < DAT_100cf97c) || (iVar8 = 30000, DAT_1018d170 != 0)) {
        iVar8 = DAT_100d43f0;
      }
      if (iVar8 < iVar5 + *(int *)(param_1 + 0x42c)) {
        iVar8 = 0x2d;
        iVar5 = 0x2d;
        iVar4 = 0xc3;
      }
      else {
        iVar8 = (int)lVar11 / 2;
        iVar5 = (int)lVar10 / 2;
        iVar4 = (int)lVar9 / 2;
      }
      FUN_100668f0(*(void **)(param_1 + 0x2d90),iVar6 + 1,local_4c,iVar4,iVar5,iVar8,0x32,0x3f800000
                   ,10);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  puVar3 = FUN_100071c0(*(int *)(param_1 + 0x28));
  if (puVar3[0x32] == -1) {
    puVar3 = FUN_100071c0(*(int *)(param_1 + 0x28));
    if (*(char *)(puVar3 + 0x37) == '\0') goto LAB_100110d4;
    iVar2 = FUN_10012ad0(*(uint *)(param_1 + 0x28),'\0',1,'\0');
    if ((1 < DAT_100cf97c) || (iVar5 = 30000, DAT_1018d170 != 0)) {
      iVar5 = DAT_100d43f0;
    }
    if (iVar5 < iVar2 + *(int *)(param_1 + 0x42c)) {
LAB_10011095:
      bVar1 = 0;
    }
    else {
      puVar3 = FUN_100071c0(*(int *)(param_1 + 0x28));
      bVar1 = *(byte *)(puVar3 + 0x34);
      puVar3 = FUN_100071c0(*(int *)(param_1 + 0x28));
      if (0x51 < (int)((uint)bVar1 * puVar3[9] + *(int *)(param_1 + 0x430))) goto LAB_10011095;
      bVar1 = 1;
    }
    iVar2 = 9;
    pcVar12 = PTR_s_6_Full_Load_10092850;
  }
  else {
    iVar2 = FUN_10012ad0(*(uint *)(param_1 + 0x28),(byte_conflict)*(undefined4 *)(param_1 + 0x24),1,
                         '\0');
    if ((1 < DAT_100cf97c) || (iVar5 = 30000, DAT_1018d170 != 0)) {
      iVar5 = DAT_100d43f0;
    }
    if ((iVar5 < iVar2 + *(int *)(param_1 + 0x42c)) ||
       (puVar3 = FUN_100071c0(*(int *)(param_1 + 0x28)),
       0x51 < (int)(*(int *)(param_1 + 0x430) + (uint)*(byte *)(puVar3 + 0x34) * 2))) {
      bVar1 = 0;
    }
    else {
      bVar1 = 1;
    }
    FUN_100071c0(*(int *)(param_1 + 0x28));
    iVar2 = 8;
    pcVar12 = PTR_s_6_Buy_Akimbo_1009284c;
  }
  FUN_100668f0(*(void **)(param_1 + 0x2d90),iVar6,pcVar12,(-(uint)bVar1 & 0xffffff6a) + 0xc3,
               (-(uint)bVar1 & 0x96) + 0x2d,0x2d,0x32,0x3f800000,iVar2);
LAB_100110d4:
  FUN_100668f0(*(void **)(param_1 + 0x2d90),iVar6,PTR_s_0_Cancel_10092838,100,100,0xcd,0x32,
               0x3f800000,0);
  FUN_10066880(*(int **)(param_1 + 0x2d90));
  (**(code **)(**(int **)(param_1 + 0x2d90) + 0x24))(1);
  ExceptionList = pvStack_10;
  return;
}

/* 10011140  FUN_10011140  (25 bytes)
 * undefined FUN_10011140(int param_1)
 * called by: FUN_10011320, FUN_10011650
 */
void __fastcall FUN_10011140(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 3;
  if (*(int **)(param_1 + 0x2d90) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x2d90) + 0x24))(0);
  }
  return;
}

/* 10011160  FUN_10011160  (197 bytes)
 * undefined FUN_10011160(int param_1)
 * called by: FUN_10011230, FUN_10011320, FUN_10011650, FUN_10012050, FUN_100124a0, FUN_100128e0, FUN_10012c20
 */
void __fastcall FUN_10011160(int param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  this = *(void **)(param_1 + 0x2d84);
  if (this != (void *)0x0) {
    iVar1 = *(int *)(param_1 + 0x42c);
    if (iVar1 < 1) {
      FUN_10066a90(this,0,PTR_s_1_Empty_Config_10092808,0xc3,0x2d,0x2d,0x32,0x3f800000,1,0);
      return;
    }
    pcVar4 = PTR_s_1_Use_Last_Config_1009283c;
    if (*(char *)(param_1 + 0x10) != '\0') {
      pcVar4 = PTR_s_1_Use_New_Config_10092840;
    }
    if ((1 < DAT_100cf97c) || (iVar3 = 30000, DAT_1018d170 != 0)) {
      iVar3 = DAT_100d43f0;
    }
    iVar2 = DAT_100d43f0;
    if ((DAT_100cf97c < 2) && (DAT_1018d170 == 0)) {
      iVar2 = 30000;
    }
    FUN_10066a90(this,0,pcVar4,((iVar2 - iVar1 < 0) - 1 & 0xffffff6a) + 0xc3,
                 ((iVar3 - iVar1 < 0) - 1 & 0x96) + 0x2d,0x2d,0x32,0x3f800000,1,0);
  }
  return;
}

/* 10011230  FUN_10011230  (227 bytes)
 * undefined FUN_10011230(undefined4 param_1)
 * called by: FUN_10066770
 */
void __thiscall FUN_10011230(void *this,undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float10 fVar5;
  
  if ((char)param_1 == '\0') {
    *(uint *)(*(int *)(DAT_100d5cb0 + 0xaac) + 4) =
         *(uint *)(*(int *)(DAT_100d5cb0 + 0xaac) + 4) & 0xfffffffe;
    *(undefined4 *)((int)this + 0xc) = 1;
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  else {
    *(uint *)(*(int *)(DAT_100d5cb0 + 0xaac) + 4) =
         *(uint *)(*(int *)(DAT_100d5cb0 + 0xaac) + 4) | 1;
    cVar1 = *(char *)((int)this + 0x11);
    *(undefined4 *)((int)this + 0xc) = 1;
    puVar3 = (undefined4 *)((int)this + 0x434);
    puVar4 = (undefined4 *)((int)this + 0x2c);
    for (iVar2 = 0x102; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined1 *)((int)this + 0x10) = 0;
    if (cVar1 != '\0') {
      *(undefined1 *)((int)this + 0x11) = 0;
      fVar5 = (float10)(*gEngfuncs.pfnRandomFloat)(0.5,1.0);
      FUN_10012c20(this,(float)fVar5);
    }
    FUN_100129f0(this);
    FUN_10011160((int)this);
  }
  if (*(int **)((int)this + 0x2d84) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x2d84) + 0x24))(param_1);
  }
  if (*(int **)((int)this + 0x2d88) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x2d88) + 0x24))(0);
  }
  if (*(int **)((int)this + 0x2d8c) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x2d8c) + 0x24))(0);
  }
  if (*(int **)((int)this + 0x2d90) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x2d90) + 0x24))(0);
  }
  return;
}

/* 10011320  FUN_10011320  (744 bytes)
 * undefined FUN_10011320()
 */
void __thiscall FUN_10011320(void *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  char acStack_40 [64];
  
  iVar4 = *(int *)(param_2 + 0x148);
  switch(*(undefined4 *)(param_2 + 0x144)) {
  case 0:
    switch(*(undefined4 *)((int)param_1 + 0xc)) {
    case 1:
      FUN_10066770(*(undefined4 **)(DAT_100d5cb0 + 0xaac));
      return;
    case 2:
    case 5:
      FUN_10010890((int)param_1);
    case 3:
      FUN_10010bb0((int)param_1);
    case 4:
      FUN_10011140((int)param_1);
      return;
    }
    break;
  case 1:
    uVar2 = FUN_10012050((int)param_1);
    if ((char)uVar2 != '\0') {
      FUN_10066770(*(undefined4 **)(DAT_100d5cb0 + 0xaac));
      return;
    }
    break;
  case 2:
    FUN_10010440((int)param_1);
    return;
  case 3:
    FUN_10010630((int)param_1);
    return;
  case 4:
    puVar3 = (undefined4 *)((int)param_1 + 0x2c);
    for (iVar4 = 0x102; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    FUN_1004b520(&DAT_100d43cc,s_Config_Reset_100929dc,0,0,0,0x14,0);
    *(undefined1 *)((int)param_1 + 0x10) = 1;
    *(undefined4 *)((int)param_1 + 0x14) = 0;
    FUN_10011160((int)param_1);
    return;
  case 7:
    FUN_10012c20(param_1,0.0);
    return;
  case 8:
    iVar1 = *(int *)((int)param_1 + 0xc);
    if (iVar1 == 3) {
      *(undefined4 *)((int)param_1 + 0x28) =
           *(undefined4 *)
            (&DAT_1007a950 +
            (*(int *)((int)param_1 + 0x20) + iVar4 + *(int *)((int)param_1 + 0x20) * 8) * 4);
      FUN_10010bd0((int)param_1);
      return;
    }
    if (iVar1 != 4) {
      if (iVar1 != 5) {
        return;
      }
      FUN_100071c0(*(int *)((int)param_1 + iVar4 * 0x38 + 0xb0));
      FUN_1006ac7a(acStack_40,(byte_conflict *)s__s_removed__100929d0);
      FUN_1004b520(&DAT_100d43cc,acStack_40,0,0,0,0x14,0);
      FUN_100128e0(param_1,iVar4);
      FUN_100129f0(param_1);
      iVar1 = *(int *)((int)param_1 + 0x1c);
joined_r0x10011586:
      if (iVar1 == 0) {
        FUN_10010890((int)param_1);
      }
      FUN_10066b10(*(void **)((int)param_1 + 0x2d88),iVar4);
      return;
    }
    goto LAB_100115ec;
  case 9:
    FUN_100124a0(param_1,*(uint *)((int)param_1 + 0x28),*(uint *)((int)param_1 + 0x24),1,'\0');
    return;
  case 10:
    if (*(int *)((int)param_1 + 0xc) != 4) {
      if (*(int *)((int)param_1 + 0xc) != 5) {
        return;
      }
      FUN_1006ac7a(acStack_40,(byte_conflict *)s__s_removed_100929c4);
      FUN_1004b520(&DAT_100d43cc,acStack_40,0,0,0,0x14,0);
      FUN_100128e0(param_1,iVar4);
      FUN_100129f0(param_1);
      iVar1 = *(int *)((int)param_1 + 0x1c);
      goto joined_r0x10011586;
    }
    uVar5 = 1 << ((byte)iVar4 & 0x1f);
    if ((*(uint *)((int)param_1 + 0x24) & uVar5) != 0) {
      return;
    }
    puVar3 = FUN_100071c0(*(int *)((int)param_1 + 0x28));
    if ((uVar5 & puVar3[0x39]) != 0) {
      return;
    }
    puVar3 = FUN_100071c0(*(int *)((int)param_1 + 0x28));
    if ((uVar5 & puVar3[0x38]) == 0) {
      return;
    }
    *(uint *)((int)param_1 + 0x24) = *(uint *)((int)param_1 + 0x24) | uVar5;
    iVar4 = FUN_10012480(param_1,*(int *)((int)param_1 + 0x28));
    if (iVar4 == 0) {
      return;
    }
    FUN_100128e0(param_1,iVar4);
LAB_100115ec:
    FUN_100124a0(param_1,*(uint *)((int)param_1 + 0x28),*(uint *)((int)param_1 + 0x24),0,'\0');
    break;
  case 0xb:
    if (*(int *)((int)param_1 + 0xc) == 2) {
      *(int *)((int)param_1 + 0x20) = iVar4;
      FUN_100108b0((int)param_1);
      return;
    }
  }
  return;
}

/* 10011650  FUN_10011650  (939 bytes)
 * undefined FUN_10011650()
 */
void __fastcall FUN_10011650(int param_1,undefined4 param_2,int param_3)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  char acStack_20 [32];
  
  switch(*(undefined4 *)(param_1 + 4)) {
  case 1:
    switch(param_3) {
    case 0xd:
    case 0x31:
      uVar5 = FUN_10012050(param_1 + -8);
      if ((char)uVar5 != '\0') {
        FUN_10066770(*(undefined4 **)(DAT_100d5cb0 + 0xaac));
        return;
      }
      break;
    case 0x1b:
    case 0x30:
      FUN_10066770(*(undefined4 **)(DAT_100d5cb0 + 0xaac));
      break;
    case 0x32:
      FUN_10010440(param_1 + -8);
      return;
    case 0x33:
      FUN_10010630(param_1 + -8);
      return;
    case 0x34:
      puVar2 = (undefined4 *)(param_1 + 0x24);
      for (iVar3 = 0x102; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      FUN_1004b520(&DAT_100d43cc,s_Config_Reset_100929dc,0,0,0,0x14,0);
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined4 *)(param_1 + 0xc) = 0;
      FUN_10011160(param_1 + -8);
      return;
    case 0x37:
      FUN_10012c20((void *)(param_1 + -8),0.0);
      return;
    }
    break;
  case 2:
    iVar3 = param_3 + -0x30;
    if (iVar3 != 6) {
      if ((iVar3 < 1) || (5 < iVar3)) {
        if ((param_3 == 0x1b) || (iVar3 == 0)) {
          FUN_10010890(param_1 + -8);
          return;
        }
      }
      else if (*(int *)(&DAT_1007a94c + iVar3 * 4) != -1) {
        *(int *)(param_1 + 0x18) = param_3 + -0x31;
        FUN_100108b0(param_1 + -8);
        return;
      }
    }
    break;
  case 3:
    iVar3 = param_3 + -0x30;
    if ((0 < iVar3) && (iVar3 < 10)) {
      *(undefined4 *)(param_1 + 0x20) =
           *(undefined4 *)(&DAT_1007a94c + (iVar3 + *(int *)(param_1 + 0x18) * 9) * 4);
      FUN_10010bd0(param_1 + -8);
      return;
    }
    if ((param_3 == 0x1b) || (iVar3 == 0)) {
      FUN_10010bb0(param_1 + -8);
      return;
    }
    break;
  case 4:
    iVar3 = param_3 + -0x30;
    if ((iVar3 == 1) || (iVar3 == 6)) {
      FUN_100124a0((void *)(param_1 + -8),*(uint *)(param_1 + 0x20),*(uint *)(param_1 + 0x1c),
                   CONCAT31((int3)((uint)param_2 >> 8),iVar3 == 6),'\0');
      return;
    }
    if ((iVar3 < 2) || (5 < iVar3)) {
      if ((param_3 == 0x1b) || ((param_3 == 0xd || (param_3 == 0x30)))) {
        FUN_10011140(param_1 + -8);
        return;
      }
    }
    else {
      pvVar1 = (void *)(param_1 + -8);
      uVar7 = 1 << ((char)param_3 - 0x32U & 0x1f);
      if ((((uVar7 & *(uint *)(param_1 + 0x1c)) == 0) &&
          (puVar2 = FUN_100071c0(*(int *)(param_1 + 0x20)), (uVar7 & puVar2[0x39]) == 0)) &&
         (puVar2 = FUN_100071c0(*(int *)(param_1 + 0x20)), (uVar7 & puVar2[0x38]) != 0)) {
        *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | uVar7;
        iVar3 = FUN_10012480(pvVar1,*(int *)(param_1 + 0x20));
        if (iVar3 != 0) {
          FUN_100128e0(pvVar1,iVar3);
          FUN_100124a0(pvVar1,*(uint *)(param_1 + 0x20),*(uint *)(param_1 + 0x1c),0,'\0');
          return;
        }
      }
    }
    break;
  case 5:
    iVar3 = param_3 + -0x30;
    if ((iVar3 < 1) || (9 < iVar3)) {
      if ((param_3 == 0x1b) || (param_3 == 0x30)) {
        FUN_10010890(param_1 + -8);
        return;
      }
    }
    else {
      iVar8 = -1;
      iVar4 = 0;
      piVar6 = (int *)(param_1 + 0xa8);
      do {
        if (iVar8 != -1) goto LAB_1001185d;
        if ((*piVar6 != 0) && (iVar4 + 1 == iVar3)) {
          iVar8 = iVar4;
        }
        iVar4 = iVar4 + 1;
        piVar6 = piVar6 + 0xe;
      } while (iVar4 < 0x10);
      if (iVar8 != -1) {
LAB_1001185d:
        if (*(char *)(param_1 + 0xa4 + iVar8 * 0x38) == '\0') {
          FUN_100071c0(*(int *)(param_1 + (iVar8 + 3) * 0x38));
          FUN_1006ac7a(acStack_20,(byte_conflict *)s__s_Removed_100929ec);
        }
        else {
          FUN_1006ac7a(acStack_20,(byte_conflict *)s__s_Removed_100929ec);
        }
        FUN_1004b520(&DAT_100d43cc,acStack_20,0,0,0,0x14,0);
        pvVar1 = (void *)(param_1 + -8);
        FUN_100128e0(pvVar1,iVar8);
        FUN_100129f0(pvVar1);
        if (*(int *)(param_1 + 0x14) == 0) {
          FUN_10010890((int)pvVar1);
          return;
        }
      }
    }
  }
  return;
}

/* 10011a60  FUN_10011a60  (1507 bytes)
 * undefined FUN_10011a60(int param_1)
 * called by: FUN_100648c0
 */
void __fastcall FUN_10011a60(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int r;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int b;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  char *pcVar16;
  int g;
  char *pcVar17;
  bool bVar18;
  longlong lVar19;
  byte_conflict bVar20;
  int iStack_30;
  int iStack_2c;
  uint uStack_10;
  int iStack_4;
  
  lVar19 = __ftol();
  iVar2 = (int)lVar19;
  lVar19 = __ftol();
  iVar3 = (int)lVar19;
  lVar19 = __ftol();
  iVar4 = (int)lVar19;
  b = iVar4 / 2;
  g = iVar3 / 2;
  r = iVar2 / 2;
  (*gEngfuncs.pfnFillRGBA)(8,8,0x280,0x13,r,g,b,0x32);
  if ((DAT_100cf97c < 2) && (DAT_1018d170 == 0)) {
    FUN_1006ac7a(&DAT_100b3300,(byte_conflict *)s__Total___i__10092a08);
  }
  else {
    FUN_1006ac7a(&DAT_100b3300,(byte_conflict *)s_Remain_Cash____i__Total___i__10092a14);
  }
  if ((1 < DAT_100cf97c) || (iVar14 = 30000, DAT_1018d170 != 0)) {
    iVar14 = DAT_100d43f0;
  }
  iVar10 = *(int *)(param_1 + 0x42c);
  iVar15 = b;
  if (iVar14 == iVar10 || iVar14 - iVar10 < 0) {
    iVar15 = 0x2d;
  }
  if ((1 < DAT_100cf97c) || (iVar14 = 30000, DAT_1018d170 != 0)) {
    iVar14 = DAT_100d43f0;
  }
  iVar9 = g;
  if (iVar14 == iVar10 || iVar14 - iVar10 < 0) {
    iVar9 = 0x2d;
  }
  if ((1 < DAT_100cf97c) || (iVar14 = 30000, DAT_1018d170 != 0)) {
    iVar14 = DAT_100d43f0;
  }
  iVar5 = r;
  if (iVar14 == iVar10 || iVar14 - iVar10 < 0) {
    iVar5 = 0xc3;
  }
  FUN_10021ce0(8,8,DAT_100d5908,&DAT_100b3300,iVar5,iVar9,iVar15);
  FUN_1006ac7a(&DAT_100b3300,(byte_conflict *)s_Free_Slots____i_100929f8);
  iVar15 = -*(int *)(param_1 + 0x430) + 0x51;
  iVar10 = g;
  iVar14 = b;
  if (iVar15 < 1) {
    iVar14 = 0x2d;
    iVar10 = 0x2d;
  }
  iVar9 = r;
  if (-*(int *)(param_1 + 0x430) == -0x51 || iVar15 < 0) {
    iVar9 = 0xc3;
  }
  FUN_10021ce0(0x108,8,DAT_100d5908,&DAT_100b3300,iVar9,iVar10,iVar14);
  uStack_10 = 1;
  do {
    iVar10 = uStack_10 * 0x80 + -0x78;
    (*gEngfuncs.pfnFillRGBA)(iVar10,0x1c,0x80,0x14,r,g,b,0x32);
    FUN_1004c290(&DAT_100cf920,iVar10,0x1c,'\x02',uStack_10,r,g,b);
    iStack_30 = 0x30;
    iStack_2c = 0x44;
    iVar14 = 0x35;
    puVar11 = (uint *)(param_1 + 0xb0);
    iStack_4 = 0x10;
    do {
      uVar12 = *puVar11;
      if (uVar12 != 0) {
        if ((char)puVar11[-1] == '\0') {
          if (uVar12 == 0) goto LAB_10012013;
          puVar6 = FUN_100071c0(uVar12);
          if (*(byte *)(puVar6 + 0x21) == uStack_10) {
            uVar12 = *puVar11;
            uVar7 = FUN_1000b6d0(uVar12,DAT_1018d174);
            if ((char)uVar7 == '\0') {
              if (DAT_100cf97c < 2) {
                bVar18 = uVar12 == 0x18;
              }
              else {
                bVar18 = false;
              }
            }
            else {
              bVar18 = true;
            }
            iVar15 = iVar2;
            iVar9 = iVar3;
            iVar5 = iVar4;
            if (bVar18) {
              iVar15 = 0xc3;
              iVar9 = 0x2d;
              iVar5 = 0x2d;
            }
            (*gEngfuncs.pfnSPR_Set)(*(HSPRITE *)(&DAT_100d0ce4 + *puVar11 * 4),iVar15,iVar9,iVar5);
            (*gEngfuncs.pfnSPR_DrawAdditive)(0,iVar10,iStack_30,(wrect_t *)0x0);
            uVar12 = puVar11[0xc];
            if (uVar12 == 0) {
              if (*(byte *)(puVar6 + 2) != 0) {
                uVar12 = *(uint *)(param_1 + 0x2c + (uint)*(byte *)(puVar6 + 2) * 8);
                bVar20 = '\x05';
                goto LAB_10011e59;
              }
            }
            else {
              bVar20 = '\x02';
LAB_10011e59:
              FUN_1004c290(&DAT_100cf920,iVar10,iVar14,bVar20,uVar12,iVar2,iVar3,iVar4);
            }
            if ((puVar11[1] != 0) && (FUN_100368f0(&DAT_100b3300,puVar11[1]), DAT_100b3300 != '\0'))
            {
              FUN_10021ce0(iVar10,iStack_2c,DAT_100d5908,&DAT_100b3300,r,g,b);
            }
            iStack_30 = iStack_30 + 0x30;
            iVar14 = iVar14 + 0x30;
            iStack_2c = iStack_2c + 0x30;
          }
          if (((char)puVar11[0xb] != '\0') &&
             (puVar8 = FUN_100071c0(puVar6[0x32]), *(byte *)(puVar8 + 0x21) == uStack_10)) {
            iVar15 = puVar6[0x32];
            uVar7 = FUN_1000b6d0(iVar15,DAT_1018d174);
            if ((char)uVar7 == '\0') {
              if (DAT_100cf97c < 2) {
                bVar18 = iVar15 == 0x18;
              }
              else {
                bVar18 = false;
              }
            }
            else {
              bVar18 = true;
            }
            iVar15 = iVar2;
            iVar9 = iVar3;
            iVar5 = iVar4;
            if (bVar18) {
              iVar15 = 0xc3;
              iVar9 = 0x2d;
              iVar5 = 0x2d;
            }
            (*gEngfuncs.pfnSPR_Set)
                      (*(HSPRITE *)(&DAT_100d0ce4 + puVar6[0x32] * 4),iVar15,iVar9,iVar5);
            (*gEngfuncs.pfnSPR_DrawAdditive)(0,iVar10,iStack_30,(wrect_t *)0x0);
            FUN_1004c290(&DAT_100cf920,iVar10,iVar14,'\x05',
                         *(int *)(param_1 + 0x2c + (uint)*(byte *)(puVar6 + 2) * 8),iVar2,iVar3,
                         iVar4);
            if ((puVar11[1] != 0) && (FUN_100368f0(&DAT_100b3300,puVar11[1]), DAT_100b3300 != '\0'))
            {
              FUN_10021ce0(iVar10,iStack_2c,DAT_100d5908,&DAT_100b3300,r,g,b);
            }
            iStack_30 = iStack_30 + 0x30;
            iVar14 = iVar14 + 0x30;
            iStack_2c = iStack_2c + 0x30;
          }
        }
        else {
          if (uStack_10 != 1) goto LAB_10012013;
          if ((uVar12 & 0x10) == 0) {
            if ((uVar12 & 0x20) != 0) {
              uVar12 = 0xffffffff;
              pcVar16 = s_Stealth_Shoes_1009295c;
              do {
                pcVar17 = pcVar16;
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1;
                pcVar17 = pcVar16 + 1;
                cVar1 = *pcVar16;
                pcVar16 = pcVar17;
              } while (cVar1 != '\0');
              uVar12 = ~uVar12;
              pcVar16 = pcVar17 + -uVar12;
              pcVar17 = &DAT_100b3300;
              for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                *(undefined4 *)pcVar17 = *(undefined4 *)pcVar16;
                pcVar16 = pcVar16 + 4;
                pcVar17 = pcVar17 + 4;
              }
              goto LAB_10011d25;
            }
          }
          else {
            uVar12 = 0xffffffff;
            pcVar16 = &DAT_1009296c;
            do {
              pcVar17 = pcVar16;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar17 = pcVar16 + 1;
              cVar1 = *pcVar16;
              pcVar16 = pcVar17;
            } while (cVar1 != '\0');
            uVar12 = ~uVar12;
            pcVar16 = pcVar17 + -uVar12;
            pcVar17 = &DAT_100b3300;
            for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
              *(undefined4 *)pcVar17 = *(undefined4 *)pcVar16;
              pcVar16 = pcVar16 + 4;
              pcVar17 = pcVar17 + 4;
            }
LAB_10011d25:
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar17 = *pcVar16;
              pcVar16 = pcVar16 + 1;
              pcVar17 = pcVar17 + 1;
            }
          }
          FUN_10021ce0(8,iVar14,DAT_100d5908,&DAT_100b3300,r,g,b);
          iStack_30 = iStack_30 + 0x30;
          iVar14 = iVar14 + 0x30;
          iStack_2c = iStack_2c + 0x30;
        }
      }
LAB_10012013:
      puVar11 = puVar11 + 0xe;
      iStack_4 = iStack_4 + -1;
    } while (iStack_4 != 0);
    uStack_10 = uStack_10 + 1;
    if (5 < (int)uStack_10) {
      return;
    }
  } while( true );
}

/* 10012050  FUN_10012050  (1057 bytes)
 * undefined4 FUN_10012050(int param_1)
 * called by: FUN_10011320, FUN_10011650
 */
uint __fastcall FUN_10012050(int param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  char *pcVar13;
  char *pcVar14;
  undefined4 *puVar15;
  char *pcVar16;
  int local_1fc;
  char acStack_1f8 [64];
  char acStack_1b8 [128];
  int local_138 [14];
  char acStack_100 [128];
  char acStack_80 [128];
  
  if (*(int *)(param_1 + 0x42c) < 1) {
    FUN_1004b520(&DAT_100d43cc,s_Your_config_is_empty__10092a94,0xc3,0x2d,0x2d,0x14,0);
  }
  if ((1 < DAT_100cf97c) || (uVar3 = 30000, DAT_1018d170 != 0)) {
    uVar3 = DAT_100d43f0;
  }
  if ((int)uVar3 < *(int *)(param_1 + 0x42c)) {
    uVar3 = FUN_1004b520(&DAT_100d43cc,s_No_cash_left__10092a84,0xc3,0x2d,0x2d,0x14,0);
    return uVar3 & 0xffffff00;
  }
  if (0x51 < *(int *)(param_1 + 0x430)) {
    return uVar3 & 0xffffff00;
  }
  do {
    bVar2 = false;
    piVar10 = (int *)(param_1 + 0xb0);
    local_1fc = 0xf;
    do {
      if ((0 < *piVar10) && (0 < piVar10[0xe])) {
        if (((char)piVar10[-1] == '\0') && ((char)piVar10[0xd] == '\0')) {
          puVar4 = FUN_100071c0(*piVar10);
          if ((*(char *)(puVar4 + 2) == '\0') ||
             (puVar4 = FUN_100071c0(piVar10[0xe]), *(char *)(puVar4 + 2) == '\0')) {
            puVar4 = FUN_100071c0(*piVar10);
            if ((*(char *)(puVar4 + 2) == '\0') &&
               (puVar4 = FUN_100071c0(piVar10[0xe]), *(char *)(puVar4 + 2) == '\0')) {
              if (piVar10[0x10] < piVar10[2]) goto LAB_100121a5;
            }
            else {
              puVar4 = FUN_100071c0(*piVar10);
              if (*(char *)(puVar4 + 2) != '\0') {
LAB_100121a5:
                piVar11 = piVar10 + -1;
                piVar12 = local_138;
                for (iVar6 = 0xe; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *piVar12 = *piVar11;
                  piVar11 = piVar11 + 1;
                  piVar12 = piVar12 + 1;
                }
                bVar2 = true;
                piVar11 = piVar10 + 0xd;
                piVar12 = piVar10 + -1;
                for (iVar6 = 0xe; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *piVar12 = *piVar11;
                  piVar11 = piVar11 + 1;
                  piVar12 = piVar12 + 1;
                }
                piVar11 = local_138;
                piVar12 = piVar10 + 0xd;
                for (iVar6 = 0xe; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *piVar12 = *piVar11;
                  piVar11 = piVar11 + 1;
                  piVar12 = piVar12 + 1;
                }
              }
            }
          }
          else if (piVar10[0x10] < piVar10[2]) goto LAB_100121a5;
        }
        else if (piVar10[0x10] < piVar10[2]) goto LAB_100121a5;
      }
      piVar10 = piVar10 + 0xe;
      local_1fc = local_1fc + -1;
    } while (local_1fc != 0);
  } while (bVar2);
  (*gEngfuncs.pfnServerCmd)(s_rst_cfg_10092a7c);
  uVar3 = 0xffffffff;
  pcVar16 = &DAT_10092a74;
  do {
    pcVar14 = pcVar16;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar14 = pcVar16 + 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar14;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar16 = pcVar14 + -uVar3;
  pcVar14 = acStack_1b8;
  for (uVar7 = uVar3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar16;
    pcVar16 = pcVar16 + 4;
    pcVar14 = pcVar14 + 4;
  }
  iVar6 = 0x10;
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar14 = *pcVar16;
    pcVar16 = pcVar16 + 1;
    pcVar14 = pcVar14 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar16 = &DAT_10092a6c;
  do {
    pcVar14 = pcVar16;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar14 = pcVar16 + 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar14;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar16 = pcVar14 + -uVar3;
  pcVar14 = acStack_80;
  for (uVar7 = uVar3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar16;
    pcVar16 = pcVar16 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar14 = *pcVar16;
    pcVar16 = pcVar16 + 1;
    pcVar14 = pcVar14 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar16 = &DAT_10092a64;
  do {
    pcVar14 = pcVar16;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar14 = pcVar16 + 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar14;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar16 = pcVar14 + -uVar3;
  pcVar14 = acStack_100;
  for (uVar7 = uVar3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar16;
    pcVar16 = pcVar16 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar14 = *pcVar16;
    pcVar16 = pcVar16 + 1;
    pcVar14 = pcVar14 + 1;
  }
  piVar10 = (int *)(param_1 + 0xb0);
  do {
    if (*piVar10 != 0) {
      if ((char)piVar10[-1] == '\0') {
        puVar4 = FUN_100071c0(*piVar10);
        if ((*(char *)(puVar4 + 0x37) == '\0') && ((char)piVar10[0xb] != '\0')) {
          FUN_1006ac7a(acStack_1f8,(byte_conflict *)s__i__i_10092a5c);
          uVar3 = 0xffffffff;
          pcVar16 = acStack_1f8;
          do {
            pcVar14 = pcVar16;
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            pcVar14 = pcVar16 + 1;
            cVar1 = *pcVar16;
            pcVar16 = pcVar14;
          } while (cVar1 != '\0');
          uVar3 = ~uVar3;
          iVar8 = -1;
          pcVar16 = acStack_1b8;
          do {
            pcVar13 = pcVar16;
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            pcVar13 = pcVar16 + 1;
            cVar1 = *pcVar16;
            pcVar16 = pcVar13;
          } while (cVar1 != '\0');
          pcVar16 = pcVar14 + -uVar3;
          pcVar14 = pcVar13 + -1;
          for (uVar7 = uVar3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar16;
            pcVar16 = pcVar16 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *pcVar14 = *pcVar16;
            pcVar16 = pcVar16 + 1;
            pcVar14 = pcVar14 + 1;
          }
          FUN_1006ac7a(acStack_1f8,(byte_conflict *)s__i__i_10092a5c);
        }
        else {
          FUN_1006ac7a(acStack_1f8,(byte_conflict *)s__i__i_10092a5c);
        }
        pcVar16 = acStack_1b8;
      }
      else {
        FUN_1006ac7a(acStack_1f8,&DAT_10091200);
        pcVar16 = acStack_100;
      }
      uVar3 = 0xffffffff;
      pcVar14 = acStack_1f8;
      do {
        pcVar13 = pcVar14;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar13 = pcVar14 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar13;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      iVar8 = -1;
      do {
        pcVar14 = pcVar16;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar14 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar14;
      } while (cVar1 != '\0');
      pcVar16 = pcVar13 + -uVar3;
      pcVar14 = pcVar14 + -1;
      for (uVar7 = uVar3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar14 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar14 = pcVar14 + 1;
      }
    }
    piVar10 = piVar10 + 0xe;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar8 = 0;
  iVar6 = param_1 + 0x30;
  do {
    if (*(int *)(iVar6 + -4) != 0) {
      FUN_1006ac7a(acStack_1f8,(byte_conflict *)s__i__i_10092a5c);
      uVar3 = 0xffffffff;
      pcVar16 = acStack_1f8;
      do {
        pcVar14 = pcVar16;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar14 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar14;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      iVar9 = -1;
      pcVar16 = acStack_80;
      do {
        pcVar13 = pcVar16;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar13 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar13;
      } while (cVar1 != '\0');
      pcVar16 = pcVar14 + -uVar3;
      pcVar14 = pcVar13 + -1;
      for (uVar7 = uVar3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar14 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar14 = pcVar14 + 1;
      }
    }
    iVar8 = iVar8 + 1;
    iVar6 = iVar6 + 8;
    if (0xf < iVar8) {
      (*gEngfuncs.pfnServerCmd)(acStack_1b8);
      (*gEngfuncs.pfnServerCmd)(acStack_100);
      (*gEngfuncs.pfnServerCmd)(acStack_80);
      if (*(char *)(param_1 + 0x10) == '\0') {
        pcVar16 = s_Using_last_config__10092a48;
      }
      else {
        pcVar16 = s_Using_new_config__10092a34;
      }
      FUN_1004b520(&DAT_100d43cc,pcVar16,0,0,0,0x14,0);
      *(undefined1 *)(param_1 + 0x10) = 0;
      puVar4 = (undefined4 *)(param_1 + 0x2c);
      puVar15 = (undefined4 *)(param_1 + 0x434);
      for (iVar6 = 0x102; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar15 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar15 = puVar15 + 1;
      }
      uVar5 = FUN_10011160(param_1);
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
  } while( true );
}

/* 10012480  FUN_10012480  (31 bytes)
 * int FUN_10012480(int param_1)
 * called by: FUN_10011320, FUN_10011650
 */
int __thiscall FUN_10012480(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)((int)this + 0xb0);
  do {
    if (*piVar2 == param_1) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0xe;
  } while (iVar1 < 0x10);
  return -1;
}

/* 100124a0  FUN_100124a0  (1073 bytes)
 * undefined4 FUN_100124a0(uint param_1, uint param_2, int param_3, char param_4)
 * called by: FUN_10011320, FUN_10011650, FUN_10012c20
 */
uint __thiscall FUN_100124a0(void *this,uint param_1,uint param_2,int param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  
  if (param_4 != '\0') {
    if ((1 < DAT_100cf97c) || (iVar8 = 30000, DAT_1018d170 != 0)) {
      iVar8 = DAT_100d43f0;
    }
    iVar2 = FUN_10012ad0(param_1,'\0',0,'\x01');
    puVar3 = (undefined4 *)(iVar2 + *(int *)((int)this + 0x42c));
    if (iVar8 < (int)puVar3) {
      return (uint)puVar3 & 0xffffff00;
    }
    goto LAB_100125bc;
  }
  uVar1 = FUN_1000b6d0(param_1,DAT_1018d174);
  if ((char)uVar1 != '\0') {
LAB_100124d7:
    return uVar1 & 0xffffff00;
  }
  if (DAT_100cf97c < 2) {
    if (param_1 == 0x18) goto LAB_100124d7;
    iVar8 = 30000;
    if (DAT_1018d170 != 0) goto LAB_100124ee;
  }
  else {
LAB_100124ee:
    iVar8 = DAT_100d43f0;
  }
  iVar2 = FUN_10012ad0(param_1,(byte_conflict)param_2,param_3,'\0');
  uVar1 = iVar2 + *(int *)((int)this + 0x42c);
  if (iVar8 < (int)uVar1) {
    return uVar1 & 0xffffff00;
  }
  if ((char)param_3 == '\0') {
    iVar8 = 1;
  }
  else {
    puVar3 = FUN_100071c0(param_1);
    if (*(char *)(puVar3 + 0x37) == '\0') {
      iVar8 = 2;
    }
    else {
      puVar3 = FUN_100071c0(param_1);
      iVar8 = puVar3[9];
    }
  }
  puVar3 = FUN_100071c0(param_1);
  if (0x51 < (int)((uint)*(byte *)(puVar3 + 0x34) * iVar8 + *(int *)((int)this + 0x430))) {
    return (uint)puVar3 & 0xffffff00;
  }
LAB_100125bc:
  uVar1 = (uint)puVar3 & 0xffffff00;
  iVar8 = 0;
  pcVar6 = (char *)((int)this + 0xac);
  do {
    if ((char)uVar1 != '\0') break;
    if (*(uint *)(pcVar6 + 4) == param_1) {
      if (param_4 == '\0') {
        puVar3 = FUN_100071c0(param_1);
        if (*(char *)(puVar3 + 0x37) != '\0') {
          uVar1 = *(uint *)((int)this + (iVar8 + 4) * 0x38);
          piVar4 = (int *)((int)this + (iVar8 + 4) * 0x38);
          puVar3 = FUN_100071c0(param_1);
          if ((int)uVar1 < (int)puVar3[9]) {
            if ((char)param_3 == '\0') {
              *piVar4 = uVar1 + 1;
              piVar4 = (int *)((int)this + iVar8 * 0x38 + 0xb8);
              puVar3 = FUN_100071c0(param_1);
              *piVar4 = *piVar4 + puVar3[0x36];
              puVar3 = FUN_100071c0(param_1);
              *(int *)((int)this + 0x42c) = *(int *)((int)this + 0x42c) + puVar3[0x36];
              puVar3 = FUN_100071c0(param_1);
              iVar8 = *(int *)((int)this + 0x430) + (uint)*(byte *)(puVar3 + 0x34);
            }
            else {
              iVar2 = *piVar4;
              puVar3 = FUN_100071c0(param_1);
              iVar7 = puVar3[9] - iVar2;
              *piVar4 = iVar2 + iVar7;
              piVar4 = (int *)((int)this + iVar8 * 0x38 + 0xb8);
              puVar3 = FUN_100071c0(param_1);
              *piVar4 = *piVar4 + puVar3[0x36] * iVar7;
              puVar3 = FUN_100071c0(param_1);
              *(int *)((int)this + 0x42c) = *(int *)((int)this + 0x42c) + puVar3[0x36] * iVar7;
              puVar3 = FUN_100071c0(param_1);
              iVar8 = *(int *)((int)this + 0x430) + (uint)*(byte *)(puVar3 + 0x34) * iVar7;
            }
            *(int *)((int)this + 0x430) = iVar8;
            FUN_100129f0(this);
            *(undefined1 *)((int)this + 0x10) = 1;
            uVar5 = FUN_10011160((int)this);
            return CONCAT31((int3)((uint)uVar5 >> 8),1);
          }
          goto LAB_1001271b;
        }
        puVar3 = FUN_100071c0(param_1);
        if ((puVar3[0x32] != -1) && (pcVar6[0x30] == '\0')) {
          param_2 = param_2 | *(uint *)(pcVar6 + 8);
          param_3 = CONCAT31(param_3._1_3_,1);
        }
        uVar5 = FUN_100128e0(this,iVar8);
        uVar1 = CONCAT31((int3)((uint)uVar5 >> 8),1);
      }
      else if (*pcVar6 != '\0') {
LAB_1001271b:
        return uVar1 & 0xffffff00;
      }
    }
    iVar8 = iVar8 + 1;
    pcVar6 = pcVar6 + 0x38;
  } while (iVar8 < 0x10);
  iVar8 = 0;
  piVar4 = (int *)((int)this + 0xb0);
  do {
    if (*piVar4 == 0) break;
    iVar8 = iVar8 + 1;
    piVar4 = piVar4 + 0xe;
  } while (iVar8 < 0x10);
  pcVar6 = (char *)((int)this + iVar8 * 0x38 + 0xac);
  puVar3 = FUN_100071c0(param_1);
  if (*(char *)(puVar3 + 0x37) == '\0') {
    pcVar6[0x30] = (char)param_3;
  }
  *pcVar6 = param_4;
  *(uint *)(pcVar6 + 4) = param_1;
  *(uint *)(pcVar6 + 8) = ~-(uint)(param_4 != '\0') & param_2;
  iVar2 = FUN_10012ad0(param_1,(byte_conflict)param_2,param_3,param_4);
  *(int *)(pcVar6 + 0xc) = iVar2;
  if ((param_4 == '\0') && (puVar3 = FUN_100071c0(param_1), *(char *)(puVar3 + 0x37) != '\0')) {
    if ((char)param_3 == '\0') {
      *(undefined4 *)((int)this + (iVar8 + 4) * 0x38) = 1;
    }
    else {
      puVar3 = FUN_100071c0(param_1);
      *(undefined4 *)((int)this + (iVar8 + 4) * 0x38) = puVar3[9];
    }
  }
  *(int *)((int)this + 0x42c) = *(int *)((int)this + 0x42c) + *(int *)(pcVar6 + 0xc);
  if (param_4 == '\0') {
    if ((char)param_3 == '\0') {
      iVar8 = 1;
    }
    else {
      puVar3 = FUN_100071c0(param_1);
      if (*(char *)(puVar3 + 0x37) == '\0') {
        iVar8 = 2;
      }
      else {
        puVar3 = FUN_100071c0(param_1);
        iVar8 = puVar3[9];
      }
    }
    puVar3 = FUN_100071c0(param_1);
    *(uint *)((int)this + 0x430) =
         *(int *)((int)this + 0x430) + (uint)*(byte *)(puVar3 + 0x34) * iVar8;
  }
  FUN_100129f0(this);
  *(undefined1 *)((int)this + 0x10) = 1;
  *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 1;
  uVar5 = FUN_10011160((int)this);
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}

/* 100128e0  FUN_100128e0  (270 bytes)
 * undefined4 FUN_100128e0(int param_1)
 * called by: FUN_10011320, FUN_10011650, FUN_100124a0
 */
undefined4 __thiscall FUN_100128e0(void *this,int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_38 [14];
  
  *(int *)((int)this + 0x42c) =
       *(int *)((int)this + 0x42c) - *(int *)((int)this + param_1 * 0x38 + 0xb8);
  if (*(char *)((int)this + param_1 * 0x38 + 0xac) == '\0') {
    iVar4 = *(int *)((int)this + param_1 * 0x38 + 0xb0);
    if (*(int *)((int)this + (param_1 + 4) * 0x38) == 0) {
      puVar2 = FUN_100071c0(iVar4);
      iVar4 = (uint)*(byte *)(puVar2 + 0x34) *
              ((*(char *)((int)this + param_1 * 0x38 + 0xdc) != '\0') + 1);
    }
    else {
      puVar2 = FUN_100071c0(iVar4);
      iVar4 = (uint)*(byte *)(puVar2 + 0x34) * *(int *)((int)this + (param_1 + 4) * 0x38);
    }
    *(int *)((int)this + 0x430) = *(int *)((int)this + 0x430) - iVar4;
  }
  puVar2 = (undefined4 *)((int)this + param_1 * 0x38 + 0xac);
  for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  do {
    bVar1 = false;
    puVar2 = (undefined4 *)((int)this + 0xac);
    iVar4 = 0xf;
    do {
      if (((int)puVar2[1] < 1) && (0 < (int)puVar2[0xf])) {
        puVar6 = puVar2;
        puVar7 = local_38;
        for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar6 = puVar2 + 0xe;
        puVar7 = puVar2;
        for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar6 = local_38;
        puVar7 = puVar2 + 0xe;
        for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        bVar1 = true;
      }
      puVar2 = puVar2 + 0xe;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  } while (bVar1);
  *(undefined1 *)((int)this + 0x10) = 1;
  *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + -1;
  uVar3 = FUN_10011160((int)this);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

/* 100129f0  FUN_100129f0  (220 bytes)
 * undefined FUN_100129f0(void * param_1)
 * called by: FUN_10011230, FUN_10011320, FUN_10011650, FUN_100124a0
 */
void __fastcall FUN_100129f0(void *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int local_8;
  
  if ((1 < DAT_100cf97c) || (iVar6 = 30000, DAT_1018d170 != 0)) {
    iVar6 = DAT_100d43f0;
  }
  iVar6 = iVar6 - *(int *)((int)param_1 + 0x42c);
  puVar2 = (undefined4 *)((int)param_1 + 0x2c);
  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  iVar4 = iVar6;
  if (0 < iVar6) {
    do {
      bVar1 = true;
      piVar7 = (int *)((int)param_1 + 0xb0);
      local_8 = 0x10;
      do {
        if ((*piVar7 != 0) && ((char)piVar7[-1] == '\0')) {
          puVar2 = FUN_100071c0(*piVar7);
          uVar5 = (uint)*(byte *)(puVar2 + 2);
          puVar2 = FUN_100071f0(uVar5);
          if ((-1 < iVar4 - puVar2[1]) && (uVar3 = FUN_10012ba0(param_1,uVar5), (char)uVar3 != '\0')
             ) {
            puVar2 = FUN_100071f0(uVar5);
            iVar4 = iVar4 - puVar2[1];
            bVar1 = false;
          }
        }
        piVar7 = piVar7 + 0xe;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    } while (!bVar1);
    *(uint *)((int)param_1 + 0x14) = iVar6 - iVar4 & (iVar6 - iVar4 < 1) - 1;
  }
  return;
}

/* 10012ad0  FUN_10012ad0  (199 bytes)
 * int FUN_10012ad0(uint param_1, byte.conflict param_2, int param_3, char param_4)
 * called by: FUN_10010bd0, FUN_100124a0, FUN_10037ba0, FUN_10038f60
 */
int FUN_10012ad0(uint param_1,byte_conflict param_2,int param_3,char param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_4 == '\0') {
    puVar1 = FUN_100071c0(param_1);
    if (*(char *)(puVar1 + 0x37) != '\0') {
      if ((char)param_3 == '\0') {
        iVar2 = 1;
      }
      else {
        puVar1 = FUN_100071c0(param_1);
        iVar2 = puVar1[9];
      }
      puVar1 = FUN_100071c0(param_1);
      return puVar1[0x36] * iVar2;
    }
    puVar1 = FUN_100071c0(param_1);
    iVar2 = puVar1[0x36] * (((char)param_3 != '\0') + 1);
    if ((param_2 & 1) != 0) {
      iVar2 = iVar2 + 900;
    }
    if ((param_2 & 2) != 0) {
      iVar2 = iVar2 + 800;
    }
    if ((param_2 & 4) != 0) {
      iVar2 = iVar2 + 500;
    }
    if ((param_2 & 8) != 0) {
      return iVar2 + 0x708;
    }
  }
  else {
    if ((param_1 & 0x10) != 0) {
      return 0x76c;
    }
    iVar2 = 700;
    if ((param_1 & 0x20) == 0) {
      iVar2 = param_3;
    }
  }
  return iVar2;
}

/* 10012ba0  FUN_10012ba0  (115 bytes)
 * undefined4 FUN_10012ba0(int param_1)
 * called by: FUN_100129f0
 */
undefined4 __thiscall FUN_10012ba0(void *this,int param_1)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  
  if ((-1 < param_1) && (param_1 < 0x10)) {
    in_EAX = FUN_100071f0(param_1);
    if (*(int *)((int)this + param_1 * 8 + 0x2c) < (int)in_EAX[3]) {
      puVar1 = FUN_100071f0(param_1);
      *(int *)((int)this + param_1 * 8 + 0x2c) =
           *(int *)((int)this + param_1 * 8 + 0x2c) + puVar1[4];
      *(int *)((int)this + param_1 * 8 + 0x30) = *(int *)((int)this + param_1 * 8 + 0x30) + 1;
      puVar1 = FUN_100071f0(param_1);
      if ((int)puVar1[3] < *(int *)((int)this + param_1 * 8 + 0x2c)) {
        puVar1 = FUN_100071f0(param_1);
        *(undefined4 *)((int)this + param_1 * 8 + 0x2c) = puVar1[3];
      }
      return CONCAT31((int3)((uint)puVar1 >> 8),1);
    }
  }
  return (uint)in_EAX & 0xffffff00;
}

/* 10012c20  FUN_10012c20  (972 bytes)
 * undefined FUN_10012c20(float param_1)
 * called by: FUN_10011230, FUN_10011320, FUN_10011650
 */
void __thiscall FUN_10012c20(void *this,float param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float10 fVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  
  puVar2 = (undefined4 *)((int)this + 0x2c);
  for (iVar1 = 0x102; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)((int)this + 0x10) = 1;
  iVar1 = (*gEngfuncs.pfnRandomLong)(0,5);
  if (iVar1 == 2) {
    cVar7 = '\0';
    iVar1 = (*gEngfuncs.pfnRandomLong)(0,2);
    iVar1 = CONCAT31((int3)((uint)extraout_ECX >> 8),iVar1 == 0);
    uVar5 = 0x23;
  }
  else {
    cVar7 = '\0';
    if (iVar1 == 3) {
      iVar1 = 0;
      uVar5 = 0x22;
    }
    else {
      cVar7 = '\0';
      iVar1 = (*gEngfuncs.pfnRandomLong)(0,2);
      iVar1 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0);
      uVar5 = 0x19;
    }
  }
  FUN_100124a0(this,uVar5,0,iVar1,cVar7);
  if (param_1 <= 0.0) {
    fVar4 = (float10)(*gEngfuncs.pfnRandomFloat)(0.0,1.0);
    param_1 = (float)fVar4;
  }
  if ((0.1 < param_1) && (param_1 < 0.9)) {
    iVar1 = (*gEngfuncs.pfnRandomLong)(1,9);
    switch(iVar1) {
    case 1:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(1);
      uVar6 = 1;
      break;
    case 2:
      cVar7 = '\0';
      iVar1 = (*gEngfuncs.pfnRandomLong)(0,1);
      iVar1 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 0);
      uVar5 = FUN_10039810(9);
      uVar6 = 9;
      break;
    case 3:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(0xc);
      uVar6 = 0xc;
      break;
    case 4:
      cVar7 = '\0';
      iVar1 = (*gEngfuncs.pfnRandomLong)(0,1);
      iVar1 = CONCAT31((int3)((uint)extraout_ECX_00 >> 8),iVar1 != 0);
      uVar5 = FUN_10039810(0xe);
      uVar6 = 0xe;
      break;
    case 5:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(8);
      uVar6 = 8;
      break;
    case 6:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(0x15);
      uVar6 = 0x15;
      break;
    case 7:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(0x16);
      uVar6 = 0x16;
      break;
    case 8:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(0x1c);
      uVar6 = 0x1c;
      break;
    case 9:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(0x1f);
      uVar6 = 0x1f;
      break;
    default:
      goto switchD_10012cfe_default;
    }
    FUN_100124a0(this,uVar6,uVar5,iVar1,cVar7);
  }
switchD_10012cfe_default:
  if ((param_1 <= 0.3) || (0.7 <= param_1)) {
    if (param_1 < 0.7) goto switchD_10012e21_default;
    iVar1 = (*gEngfuncs.pfnRandomLong)(1,0xb);
    switch(iVar1) {
    case 1:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(4);
      uVar6 = 4;
      break;
    case 2:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(0xb);
      uVar6 = 0xb;
      break;
    case 3:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(0x14);
      uVar6 = 0x14;
      break;
    case 4:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(0xd);
      uVar6 = 0xd;
      break;
    case 5:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(5);
      uVar6 = 5;
      break;
    case 6:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(0xf);
      uVar6 = 0xf;
      break;
    case 7:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(0x1a);
      uVar6 = 0x1a;
      break;
    case 8:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(0x1b);
      uVar6 = 0x1b;
      break;
    case 9:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(0x21);
      uVar6 = 0x21;
      break;
    case 10:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(0x12);
      uVar6 = 0x12;
      break;
    case 0xb:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(0x20);
      uVar6 = 0x20;
      break;
    default:
      goto switchD_10012e21_default;
    }
  }
  else {
    iVar1 = (*gEngfuncs.pfnRandomLong)(1,6);
    switch(iVar1) {
    case 1:
      cVar7 = '\0';
      iVar1 = (*gEngfuncs.pfnRandomLong)(0,1);
      iVar1 = CONCAT31((int3)((ulonglong)iVar1 >> 0x28),(int)iVar1 != 0);
      uVar5 = FUN_10039810(3);
      uVar6 = 3;
      break;
    case 2:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(6);
      uVar6 = 6;
      break;
    case 3:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(7);
      uVar6 = 7;
      break;
    case 4:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(0x11);
      uVar6 = 0x11;
      break;
    case 5:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(0x13);
      uVar6 = 0x13;
      break;
    case 6:
      cVar7 = '\0';
      iVar1 = 0;
      uVar5 = FUN_10039810(0x17);
      uVar6 = 0x17;
      break;
    default:
      goto switchD_10012e21_default;
    }
  }
  FUN_100124a0(this,uVar6,uVar5,iVar1,cVar7);
switchD_10012e21_default:
  puVar2 = (undefined4 *)((int)this + 0x2c);
  puVar3 = (undefined4 *)((int)this + 0x434);
  for (iVar1 = 0x102; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_10011160((int)this);
  return;
}

/* 10014480  FUN_10014480  (15 bytes)
 * undefined FUN_10014480()
 */
void __fastcall FUN_10014480(int param_1)

{
  if (*(undefined4 **)(param_1 + 0xe4) != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1001448c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined4 **)(param_1 + 0xe4))();
    return;
  }
  return;
}

/* 100158c0  FUN_100158c0  (201 bytes)
 * Button * FUN_100158c0(undefined4 param_1, int param_2, int param_3, int param_4, int param_5)
 * called by: vgui::ScrollBar2::ScrollBar2
 */
Button * __thiscall
FUN_100158c0(void *this,undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  Image *pIVar2;
  Color local_c [4];
  undefined4 uStack_8;
  
  vgui::Button::Button(this,s_,param_2,param_3,param_4,param_5);
  iVar1 = vgui::Color::Color(local_c,0x3c,0x3c,0x3c,0);
  vgui::LineBorder::LineBorder
            ((LineBorder *)((int)this + 0xf0),&vgui::Color::_vftable_,*(undefined4 *)(iVar1 + 4),
             *(undefined4 *)(iVar1 + 8));
  *(undefined ***)this = &PTR_setPos_1007be7c;
  pIVar2 = (Image *)FUN_1005b8d0(uStack_8);
  if (pIVar2 != (Image *)0x0) {
    iVar1 = vgui::Color::Color((Color *)&stack0xffffffe8,0x8c,0x8c,0x8c,0);
    (**(code **)(*(int *)pIVar2 + 0xc))
              (&vgui::Color::_vftable_,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
    vgui::Label::setImage(this,pIVar2);
  }
  vgui::Panel::setBorder(this,(Border *)((int)this + 0xf0));
  return this;
}

/* 10015990  FUN_10015990  (73 bytes)
 * undefined FUN_10015990()
 */
void __fastcall FUN_10015990(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  (**(code **)(*param_1 + 0xe8))(auStack_4,auStack_8);
  uVar2 = 0;
  uVar1 = 0;
  (**(code **)(*param_1 + 0x178))(0,0,0,0);
  (**(code **)(*param_1 + 0x180))(0,0,uVar2,uVar1);
  return;
}

/* 10015c40  FUN_10015c40  (14 bytes)
 * undefined FUN_10015c40()
 */
void __fastcall FUN_10015c40(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x238))();
  return;
}

/* 10015d60  FUN_10015d60  (20 bytes)
 * undefined FUN_10015d60()
 */
void __fastcall FUN_10015d60(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x22c))(*(undefined4 *)(param_1 + 8));
  return;
}

/* 100167d0  FUN_100167d0  (29 bytes)
 * undefined FUN_100167d0()
 */
void __thiscall FUN_100167d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x230))(param_2,param_3,param_4);
  return;
}

/* 100167f0  FUN_100167f0  (24 bytes)
 * undefined FUN_100167f0()
 */
void __thiscall FUN_100167f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x234))(param_2,param_3);
  return;
}

/* 10016810  FUN_10016810  (24 bytes)
 * undefined FUN_10016810()
 */
void __thiscall FUN_10016810(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x238))(param_2,param_3);
  return;
}

/* 100171a0  FUN_100171a0  (22 bytes)
 * char FUN_100171a0(int param_1)
 * called by: FUN_10017470, FUN_100174c0
 */
char __cdecl FUN_100171a0(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = '\0';
  iVar2 = 0;
  do {
    cVar1 = cVar1 + *(char *)(iVar2 + param_1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  return cVar1;
}

/* 100171c0  FUN_100171c0  (12 bytes)
 * int FUN_100171c0(int param_1)
 * called by: FUN_100176b0
 */
int __fastcall FUN_100171c0(int param_1)

{
  FUN_10017450(param_1);
  return param_1;
}

/* 100171e0  FUN_100171e0  (211 bytes)
 * undefined4 FUN_100171e0(LPVOID param_1)
 * called by: FUN_100178c0
 */
undefined4 __fastcall FUN_100171e0(LPVOID param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int local_214;
  char local_210 [16];
  CHAR local_200 [512];
  
  FUN_100172c0(param_1);
  FUN_1006b78e(local_200,0x200,(byte_conflict *)s__s__s_10092b2c);
  pFVar1 = (FILE *)FUN_1006b77b(local_200,&DAT_10092b28);
  if (pFVar1 == (FILE *)0x0) {
    return 1;
  }
  FUN_1006b633((char *)&local_214,1,4,(int *)pFVar1);
  if (local_214 == 1) {
    FUN_1006b57a((int *)pFVar1,0,2);
    iVar2 = FUN_1006b3f7((char *)pFVar1);
    FUN_1006b57a((int *)pFVar1,4,0);
    for (uVar4 = iVar2 - 4U >> 4; uVar4 != 0; uVar4 = uVar4 - 1) {
      FUN_1006b633(local_210,1,0x10,(int *)pFVar1);
      FUN_100174c0(param_1,(undefined4 *)local_210);
    }
  }
  uVar3 = FUN_1006b37a(pFVar1);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

/* 100172c0  FUN_100172c0  (56 bytes)
 * undefined FUN_100172c0(LPVOID param_1)
 * called by: FUN_100171e0
 */
void __fastcall FUN_100172c0(LPVOID param_1)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  int iVar3;
  LPVOID pvVar4;
  
  iVar3 = 0x100;
  pvVar4 = param_1;
  do {
    pvVar2 = *(LPVOID *)((int)pvVar4 + 0x14);
    while (pvVar2 != pvVar4) {
      pvVar1 = *(LPVOID *)((int)pvVar2 + 0x14);
      FUN_1006ad4c(pvVar2);
      pvVar2 = pvVar1;
    }
    pvVar4 = (LPVOID)((int)pvVar4 + 0x18);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_10017450((int)param_1);
  return;
}

/* 10017300  FUN_10017300  (157 bytes)
 * undefined FUN_10017300(char * param_1)
 * called by: FUN_100177e0
 */
void __fastcall FUN_10017300(char *param_1)

{
  char *pcVar1;
  FILE *pFVar2;
  int iVar3;
  undefined4 local_204;
  CHAR local_200 [512];
  
  FUN_1006b78e(local_200,0x200,(byte_conflict *)s__s__s_10092b2c);
  pFVar2 = (FILE *)FUN_1006b77b(local_200,&DAT_10092b34);
  if (pFVar2 != (FILE *)0x0) {
    local_204 = 1;
    FUN_1006b7df((char *)&local_204,1,4,(int *)pFVar2);
    iVar3 = 0x100;
    do {
      for (pcVar1 = *(char **)(param_1 + 0x14); pcVar1 != param_1;
          pcVar1 = *(char **)(pcVar1 + 0x14)) {
        FUN_1006b7df(pcVar1,1,0x10,(int *)pFVar2);
      }
      param_1 = param_1 + 0x18;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    FUN_1006b37a(pFVar2);
  }
  return;
}

/* 100173a0  FUN_100173a0  (19 bytes)
 * bool FUN_100173a0(int * param_1)
 * called by: FUN_100173c0, FUN_10018360, FUN_100185f0, FUN_10018c80, FUN_10018cf0
 */
bool __thiscall FUN_100173a0(void *this,int *param_1)

{
  int *piVar1;
  
  piVar1 = FUN_10017470(this,param_1);
  return piVar1 != (int *)0x0;
}

/* 100173c0  FUN_100173c0  (87 bytes)
 * undefined FUN_100173c0(int * param_1, char param_2)
 * called by: FUN_10018cf0
 */
void __thiscall FUN_100173c0(void *this,int *param_1,char param_2)

{
  bool bVar1;
  int *piVar2;
  
  if (param_2 == '\0') {
    piVar2 = FUN_10017470(this,param_1);
    if (piVar2 != (int *)0x0) {
      *(int *)(piVar2[4] + 0x14) = piVar2[5];
      *(int *)(piVar2[5] + 0x10) = piVar2[4];
      FUN_1006ad4c(piVar2);
    }
  }
  else {
    bVar1 = FUN_100173a0(this,param_1);
    if (!bVar1) {
      FUN_100174c0(this,param_1);
      return;
    }
  }
  return;
}

/* 10017420  FUN_10017420  (48 bytes)
 * undefined FUN_10017420(undefined * param_1)
 * called by: FUN_10017660
 */
void __thiscall FUN_10017420(void *this,undefined *param_1)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = 0x100;
  do {
    for (pvVar1 = *(void **)((int)this + 0x14); pvVar1 != this;
        pvVar1 = *(void **)((int)pvVar1 + 0x14)) {
      (*(code *)param_1)(pvVar1);
    }
    this = (void *)((int)this + 0x18);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

/* 10017450  FUN_10017450  (18 bytes)
 * undefined FUN_10017450(int param_1)
 * called by: FUN_100171c0, FUN_100172c0
 */
void __fastcall FUN_10017450(int param_1)

{
  int iVar1;
  
  iVar1 = 0x100;
  do {
    *(int *)(param_1 + 0x10) = param_1;
    *(int *)(param_1 + 0x14) = param_1;
    param_1 = param_1 + 0x18;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

/* 10017470  FUN_10017470  (69 bytes)
 * int * FUN_10017470(int * param_1)
 * called by: FUN_100173a0, FUN_100173c0
 */
int * __thiscall FUN_10017470(void *this,int *param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  
  bVar2 = FUN_100171a0((int)param_1);
  piVar1 = *(int **)((int)this + (uint)bVar2 * 0x18 + 0x14);
  do {
    if (piVar1 == (int *)((int)this + (uint)bVar2 * 0x18)) {
      return (int *)0x0;
    }
    iVar3 = 4;
    bVar6 = true;
    piVar4 = param_1;
    piVar5 = piVar1;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *piVar4 == *piVar5;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      return piVar1;
    }
    piVar1 = (int *)piVar1[5];
  } while( true );
}

/* 100174c0  FUN_100174c0  (100 bytes)
 * undefined4 * FUN_100174c0(undefined4 * param_1)
 * called by: FUN_100171e0, FUN_100173c0
 */
undefined4 * __thiscall FUN_100174c0(void *this,undefined4 *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 *puVar4;
  
  puVar4 = operator_new(0x18);
  if (puVar4 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  bVar3 = FUN_100171a0((int)param_1);
  *puVar4 = *param_1;
  puVar4[1] = param_1[1];
  pvVar1 = (void *)((int)this + (uint)bVar3 * 0x18);
  puVar4[2] = param_1[2];
  uVar2 = param_1[3];
  puVar4[5] = pvVar1;
  puVar4[3] = uVar2;
  puVar4[4] = *(undefined4 *)((int)pvVar1 + 0x10);
  *(undefined4 **)((int)pvVar1 + 0x10) = puVar4;
  *(undefined4 **)(puVar4[4] + 0x14) = puVar4;
  return puVar4;
}

/* 10017530  FUN_10017530  (10 bytes)
 * undefined FUN_10017530()
 */
void FUN_10017530(void)

{
  FUN_10017540();
  FUN_10017550();
  return;
}

/* 10017540  FUN_10017540  (10 bytes)
 * undefined FUN_10017540(void)
 * called by: FUN_10017530
 */
void FUN_10017540(void)

{
  FUN_100176b0((undefined4 *)&DAT_100b3320);
  return;
}

/* 10017550  FUN_10017550  (12 bytes)
 * undefined FUN_10017550(void)
 * called by: FUN_10017530
 */
void FUN_10017550(void)

{
  FUN_1006af63(0x10017560);
  return;
}

/* 10017560  FUN_10017560  (10 bytes)
 * undefined FUN_10017560()
 */
void FUN_10017560(void)

{
  FUN_100177e0((undefined4 *)&DAT_100b3320);
  return;
}

/* 10017570  FUN_10017570  (6 bytes)
 * undefined * FUN_10017570(void)
 * called by: CL_CreateMove, FUN_10020170, FUN_100206c0, FUN_1002ed00, FUN_1005db70, FUN_1005e660, FUN_1005e7f0, FUN_1005e870, FUN_10063760, FUN_10064790, HUD_CreateEntities, HUD_Frame, ... (14 total)
 */
undefined * FUN_10017570(void)

{
  return &DAT_100b3320;
}

/* 10017580  FUN_10017580  (31 bytes)
 * undefined FUN_10017580()
 */
undefined4 FUN_10017580(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (DAT_100cc394 != (void *)0x0) {
    FUN_10018780(DAT_100cc394,param_2,param_3);
  }
  return 1;
}

/* 100175a0  FUN_100175a0  (31 bytes)
 * undefined FUN_100175a0()
 */
undefined4 FUN_100175a0(void)

{
  if (DAT_100cc394 != (void *)0x0) {
    FUN_10018830(DAT_100cc394);
  }
  return 1;
}

/* 100175c0  FUN_100175c0  (152 bytes)
 * undefined FUN_100175c0()
 */
void FUN_100175c0(void)

{
  uint auStack_100 [64];
  
  DAT_100cc390 = DAT_100cc390 + 1;
  FUN_1006ac7a((undefined1 *)auStack_100,
               (byte_conflict *)s_Ban__d___2x_2x_2x_2x_2x_2x_2x_2x_10092b38);
  FUN_10077606(auStack_100);
  (*gEngfuncs.pfnConsolePrint)((char *)auStack_100);
  return;
}

/* 10017660  FUN_10017660  (67 bytes)
 * undefined FUN_10017660()
 */
void FUN_10017660(void)

{
  if (DAT_100cc394 != 0) {
    DAT_100cc390 = 0;
    (*gEngfuncs.pfnConsolePrint)(s_________BANNED_PLAYERS_________10092b94);
    FUN_10017420((void *)(DAT_100cc394 + 0x177f8),FUN_100175c0);
    (*gEngfuncs.pfnConsolePrint)(s________________________________10092b74);
  }
  return;
}

/* 100176b0  FUN_100176b0  (261 bytes)
 * undefined4 * FUN_100176b0(undefined4 * param_1)
 * called by: FUN_10017540
 */
undefined4 * __fastcall FUN_100176b0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_10077818;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_1007c608;
  param_1[5] = &PTR_FUN_1007c5dc;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  local_4 = 0;
  param_1[0xc] = 0;
  puVar2 = param_1 + 0x2e5;
  iVar1 = 0x20;
  do {
    FUN_100025e0(puVar2 + -0x1d6,0x1c,0x40,FUN_10017e90);
    FUN_100025e0(puVar2,0xc,4,FUN_10017e90);
    puVar2 = puVar2 + 0x2ee;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_100171c0((int)(param_1 + 0x5dfe));
  *param_1 = &PTR_FUN_1007c5bc;
  param_1[5] = &PTR_FUN_1007c590;
  *(undefined1 *)(param_1 + 0x63fe) = 0;
  param_1[6] = 0;
  param_1[0x5df9] = 0;
  param_1[0x5dd0] = 0;
  param_1[0x5dd1] = 0;
  param_1[0x5dd2] = 0;
  param_1[0x5dd3] = 0;
  param_1[0x5dd4] = 0;
  param_1[0x5dd5] = 0;
  param_1[0x5dfa] = 0;
  param_1[0x5dfb] = 0;
  *(undefined1 *)((int)param_1 + 0x177f5) = 0;
  *(undefined1 *)(param_1 + 0x5dfd) = 0;
  puVar2 = param_1 + 0x5dd6;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[7] = 0xffffffff;
  ExceptionList = local_c;
  return param_1;
}

/* 100177c0  FUN_100177c0  (30 bytes)
 * undefined4 * FUN_100177c0(byte.conflict param_1)
 */
undefined4 * __thiscall FUN_100177c0(void *this,byte_conflict param_1)

{
  FUN_100177e0(this);
  if ((param_1 & 1) != 0) {
    FUN_1006ad4c(this);
  }
  return this;
}

/* 100177e0  FUN_100177e0  (219 bytes)
 * undefined FUN_100177e0(undefined4 * param_1)
 * called by: FUN_10017560, FUN_100177c0
 */
void __fastcall FUN_100177e0(undefined4 *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvStack_c;
  code *pcStack_8;
  uint local_4;
  
  pcStack_8 = FUN_10077846;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_1007c5bc;
  param_1[5] = &PTR_FUN_1007c590;
  local_4 = 1;
  DAT_100cc394 = 0;
  puVar3 = param_1 + 0x6401;
  iVar2 = 7;
  do {
    FUN_1006ad4c((LPVOID)puVar3[-2]);
    puVar3[-2] = 0;
    FUN_1006ad4c((LPVOID)*puVar3);
    *puVar3 = 0;
    FUN_1006ad4c((LPVOID)puVar3[-1]);
    puVar3[-1] = 0;
    puVar3 = puVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_1006ad4c((LPVOID)param_1[0x5dfc]);
  param_1[0x5dfc] = 0;
  FUN_10018b90((int)param_1);
  pcVar1 = (*gEngfuncs.pfnGetGameDirectory)();
  if ((pcVar1 != (char *)0x0) && (*(char *)(param_1 + 0x63fe) != '\0')) {
    (*gEngfuncs.pfnGetGameDirectory)();
    FUN_10017300((char *)(param_1 + 0x5dfe));
  }
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_100172c0(param_1 + 0x5dfe);
  *param_1 = &PTR_FUN_1007c608;
  ExceptionList = pvStack_c;
  return;
}

/* 100178c0  FUN_100178c0  (560 bytes)
 * undefined FUN_100178c0()
 */
undefined4 __thiscall FUN_100178c0(int param_1)

{
  char *pcVar1;
  Label *pLVar2;
  undefined4 uVar3;
  int *piVar4;
  ImagePanel *pIVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iStack0000000c;
  void *in_stack_00000024;
  undefined4 in_stack_00000028;
  void *pvStack_c;
  
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (*gEngfuncs.pfnRegisterVariable)(s_voice_modenable_10092bf8,&DAT_10092c08,1);
  (*gEngfuncs.pfnRegisterVariable)(s_voice_clientdebug_10092be0,&DAT_10092bf4,0);
  (*gEngfuncs.pfnAddCommand)(s_voice_showbanned_10092bcc,FUN_10017660);
  pcVar1 = (*gEngfuncs.pfnGetGameDirectory)();
  if (pcVar1 != (char *)0x0) {
    (*gEngfuncs.pfnGetGameDirectory)();
    FUN_100171e0((LPVOID)(param_1 + 0x177f8));
    *(undefined1 *)(param_1 + 0x18ff8) = 1;
  }
  puVar7 = (undefined4 *)(param_1 + 0x18ffc);
  DAT_100cc394 = param_1;
  *(undefined4 *)(param_1 + 0x17738) = 0;
  *(undefined4 *)(param_1 + 0x1773c) = 0;
  *(undefined4 *)(param_1 + 0x177dc) = 0;
  iStack0000000c = 7;
  puVar8 = puVar7;
  for (iVar6 = 0x1c; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  do {
    pvStack_c = (void *)0x10017977;
    pLVar2 = operator_new(0xd0);
    if (pLVar2 == (Label *)0x0) {
      uVar3 = 0;
    }
    else {
      pvStack_c = (void *)0x10017992;
      uVar3 = vgui::Label::Label(pLVar2,s_);
    }
    puVar7[1] = uVar3;
    pvStack_c = (void *)0x100179a7;
    pLVar2 = operator_new(0xd0);
    if (pLVar2 == (Label *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      pvStack_c = (void *)0x100179c6;
      piVar4 = (int *)vgui::Label::Label(pLVar2,s_);
    }
    *puVar7 = piVar4;
    if (piVar4 != (int *)0x0) {
      pvStack_c = (void *)0x100179e0;
      (**(code **)(*piVar4 + 0x20c))();
      pvStack_c = (void *)0x5;
      (**(code **)(*(int *)*puVar7 + 0x218))();
      (**(code **)(*(int *)*puVar7 + 0x21c))(5);
      (**(code **)(*(int *)*puVar7 + 0x40))(puVar7[1]);
    }
    pvStack_c = (void *)0x10017a0d;
    pIVar5 = operator_new(0xc0);
    if (pIVar5 == (ImagePanel *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      pvStack_c = (void *)0x10017a28;
      piVar4 = (int *)vgui::ImagePanel::ImagePanel(pIVar5,(Image *)0x0);
    }
    puVar7[2] = piVar4;
    if (piVar4 != (int *)0x0) {
      pvStack_c = (void *)0x10017a42;
      (**(code **)(*piVar4 + 0x40))();
    }
    puVar7[3] = 0xffffffff;
    puVar7 = puVar7 + 4;
    iStack0000000c = iStack0000000c + -1;
  } while (iStack0000000c != 0);
  pvStack_c = (void *)0x10017a61;
  pIVar5 = operator_new(0xc0);
  if (pIVar5 == (ImagePanel *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = vgui::ImagePanel::ImagePanel(pIVar5,(Image *)0x0);
  }
  *(undefined4 *)(param_1 + 0x177f0) = uVar3;
  *(undefined1 *)(param_1 + 0x177d8) = 0;
  *(void **)(param_1 + 0x17734) = in_stack_00000024;
  *(undefined4 *)(param_1 + 0x20) = in_stack_00000028;
  FUN_10020a40(&DAT_100cf920,param_1);
  *(undefined4 *)(param_1 + 0x10) = 1;
  pvStack_c = (void *)0x10017ac4;
  (*gEngfuncs.pfnHookUserMsg)(s_VoiceMask_10092bc0,FUN_10017580);
  pvStack_c = (void *)0x10017ad4;
  (*gEngfuncs.pfnHookUserMsg)(s_ReqState_10092bb4,FUN_100175a0);
  ExceptionList = in_stack_00000024;
  return 1;
}

/* 10017af0  FUN_10017af0  (924 bytes)
 * undefined4 FUN_10017af0(char param_1)
 */
undefined4 __cdecl FUN_10017af0(char param_1)

{
  int iVar1;
  byte_conflict *data;
  HSPRITE HVar2;
  int extraout_ECX;
  float10 fVar3;
  
  FUN_1006b970();
  FUN_10018b90(extraout_ECX);
  iVar1 = FUN_1005b8d0(s_gfx_vgui_icntlk_pl_tga_10092d18);
  *(int *)(extraout_ECX + 0x177e8) = iVar1;
  if (iVar1 != 0) {
    iVar1 = vgui::Color::Color((Color *)&stack0x00000000,0xff,0xff,0xff,1);
    (**(code **)(**(int **)(extraout_ECX + 0x177e8) + 0xc))
              (&vgui::Color::_vftable_,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
  }
  iVar1 = FUN_1005b8d0(s_gfx_vgui_icntlk_sv_tga_10092d00);
  *(int *)(extraout_ECX + 0x177ec) = iVar1;
  if (iVar1 != 0) {
    iVar1 = vgui::Color::Color((Color *)&stack0x00000000,0xff,0xff,0xff,1);
    (**(code **)(**(int **)(extraout_ECX + 0x177ec) + 0xc))
              (&vgui::Color::_vftable_,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
  }
  (**(code **)(**(int **)(extraout_ECX + 0x177f0) + 0x1fc))(*(undefined4 *)(extraout_ECX + 0x177e8))
  ;
  (**(code **)(**(int **)(extraout_ECX + 0x177f0) + 0x24))(0);
  iVar1 = FUN_1005ba50(s_gfx_vgui_speaker4_tga_10092ce8);
  *(int *)(extraout_ECX + 0x177e4) = iVar1;
  if (iVar1 != 0) {
    iVar1 = vgui::Color::Color((Color *)&stack0xfffffff8,0xff,0xff,0xff,1);
    (**(code **)(**(int **)(extraout_ECX + 0x177e4) + 0xc))
              (&vgui::Color::_vftable_,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
  }
  iVar1 = FUN_1005ba50(s_gfx_vgui_640_speaker1_tga_10092ccc);
  *(int *)(extraout_ECX + 0x17740) = iVar1;
  if (iVar1 != 0) {
    iVar1 = vgui::Color::Color((Color *)&stack0xfffffff8,0xff,0xff,0xff,1);
    (**(code **)(**(int **)(extraout_ECX + 0x17740) + 0xc))
              (&vgui::Color::_vftable_,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
  }
  iVar1 = FUN_1005ba50(s_gfx_vgui_640_speaker2_tga_10092cb0);
  *(int *)(extraout_ECX + 0x17744) = iVar1;
  if (iVar1 != 0) {
    iVar1 = vgui::Color::Color((Color *)&stack0xfffffff8,0xff,0xff,0xff,1);
    (**(code **)(**(int **)(extraout_ECX + 0x17744) + 0xc))
              (&vgui::Color::_vftable_,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
  }
  iVar1 = FUN_1005ba50(s_gfx_vgui_640_speaker3_tga_10092c94);
  *(int *)(extraout_ECX + 0x17748) = iVar1;
  if (iVar1 != 0) {
    iVar1 = vgui::Color::Color((Color *)&stack0xfffffff8,0xff,0xff,0xff,1);
    (**(code **)(**(int **)(extraout_ECX + 0x17748) + 0xc))
              (&vgui::Color::_vftable_,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
  }
  iVar1 = FUN_1005ba50(s_gfx_vgui_640_speaker4_tga_10092c78);
  *(int *)(extraout_ECX + 0x1774c) = iVar1;
  if (iVar1 != 0) {
    iVar1 = vgui::Color::Color((Color *)&stack0xfffffff8,0xff,0xff,0xff,1);
    (**(code **)(**(int **)(extraout_ECX + 0x1774c) + 0xc))
              (&vgui::Color::_vftable_,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
  }
  iVar1 = FUN_1005b8d0(s_gfx_vgui_icntlk_squelch_tga_10092c5c);
  *(int *)(extraout_ECX + 0x17750) = iVar1;
  if (iVar1 != 0) {
    iVar1 = vgui::Color::Color((Color *)&stack0xfffffff8,0xff,0xff,0xff,1);
    (**(code **)(**(int **)(extraout_ECX + 0x17750) + 0xc))
              (&vgui::Color::_vftable_,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
  }
  iVar1 = FUN_1005b8d0(s_gfx_vgui_640_voiceblocked_tga_10092c3c);
  *(int *)(extraout_ECX + 0x17754) = iVar1;
  if (iVar1 != 0) {
    iVar1 = vgui::Color::Color((Color *)&stack0xfffffff8,0xff,0xff,0xff,1);
    (**(code **)(**(int **)(extraout_ECX + 0x17754) + 0xc))
              (&vgui::Color::_vftable_,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
  }
  *(undefined4 *)(extraout_ECX + 0x177e0) = 0x42340000;
  data = (*gEngfuncs.COM_LoadFile)(s_scripts_voicemodel_txt_10092c24,5,(int *)0x0);
  if (data != (byte_conflict *)0x0) {
    (*gEngfuncs.COM_ParseFile)((char *)data,&param_1);
    if (('/' < param_1) && (param_1 < ':')) {
      fVar3 = FUN_1006b918(&param_1,(byte_conflict *)&param_1);
      *(float *)(extraout_ECX + 0x177e0) = (float)fVar3;
    }
    (*gEngfuncs.COM_FreeFile)(data);
  }
  HVar2 = (*gEngfuncs.pfnSPR_Load)(s_sprites_voiceicon_spr_10092c0c);
  *(HSPRITE *)(extraout_ECX + 0x177dc) = HVar2;
  return 1;
}

/* 10017e90  FUN_10017e90  (3 bytes)
 * undefined FUN_10017e90()
 */
undefined4 __fastcall FUN_10017e90(undefined4 param_1)

{
  return param_1;
}

/* 10017ea0  FUN_10017ea0  (140 bytes)
 * undefined FUN_10017ea0(double param_1)
 * called by: HUD_Frame
 */
void __thiscall FUN_10017ea0(void *this,double param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  float10 extraout_ST0;
  
  (*gEngfuncs.GetClientTime)();
  if ((float10)1.0 < extraout_ST0 - (float10)*(float *)((int)this + 0x18)) {
    FUN_10018360(this,'\0');
  }
  *(double *)((int)this + 0x17738) = param_1 + *(double *)((int)this + 0x17738);
  cVar1 = (**(code **)(**(int **)((int)this + 0x17734) + 0x10))();
  puVar2 = (undefined4 *)((int)this + 0x18ffc);
  iVar3 = 7;
  if (cVar1 == '\0') {
    do {
      (**(code **)(*(int *)*puVar2 + 0x24))(0);
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  else {
    do {
      (**(code **)(*(int *)*puVar2 + 0x24))(CONCAT31((int3)((uint)puVar2[3] >> 8),puVar2[3] != -1));
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = 0;
  do {
    FUN_100185f0(this,iVar3);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x20);
  return;
}

/* 10017f30  FUN_10017f30  (396 bytes)
 * undefined FUN_10017f30(int param_1)
 * called by: HUD_CreateEntities
 */
void __fastcall FUN_10017f30(int param_1)

{
  cl_entity_s *pcVar1;
  model_s *pmVar2;
  int iVar3;
  cl_entity_s *pcVar4;
  cl_entity_s *ent;
  int in_stack_00000008;
  cl_entity_s *in_stack_0000000c;
  int iStack_8;
  
  if (*(int *)(param_1 + 0x177dc) != 0) {
    (*gEngfuncs.GetLocalPlayer)();
    iStack_8 = 0;
    ent = (cl_entity_s *)(param_1 + 0x34);
    do {
      if (((((*(uint *)(param_1 + 0x24 + (iStack_8 >> 5) * 4) & 1 << ((byte)iStack_8 & 0x1f)) != 0)
           && (pcVar1 = (*gEngfuncs.GetEntityByIndex)(iStack_8 + 1), pcVar1 != (cl_entity_s *)0x0))
          && (*(int *)(param_1 + 700) <= (pcVar1->curstate).messagenum)) &&
         ((((pcVar1->curstate).effects & 0x80) == 0 &&
          ((pcVar1 != (cl_entity_s *)param_1 || (DAT_100df390 != 0)))))) {
        pcVar4 = ent;
        for (iVar3 = 0x2ee; iVar3 != 0; iVar3 = iVar3 + -1) {
          pcVar4->index = 0;
          pcVar4 = (cl_entity_s *)&pcVar4->player;
        }
        (ent->curstate).rendermode = 5;
        (ent->curstate).renderamt = 0xff;
        (ent->baseline).renderamt = 0xff;
        (ent->curstate).renderfx = 0xe;
        (ent->curstate).framerate = 1.0;
        (ent->curstate).frame = 0.0;
        pmVar2 = (*gEngfuncs.GetSpritePointer)(*(HSPRITE *)(iStack_8 + 0x177dc));
        ent->model = pmVar2;
        ent->angles[2] = 0.0;
        ent->angles[1] = 0.0;
        ent->angles[0] = 0.0;
        (ent->curstate).scale = 0.5;
        ent->origin[1] = 0.0;
        ent->origin[0] = 0.0;
        ent->origin[2] = 45.0;
        ent->origin[0] = pcVar1->origin[0] + ent->origin[0];
        ent->origin[1] = pcVar1->origin[1] + ent->origin[1];
        ent->origin[2] = pcVar1->origin[2] + ent->origin[2];
        (*gEngfuncs.CL_CreateVisibleEntity)(0,ent);
        iStack_8 = in_stack_00000008;
        ent = in_stack_0000000c;
      }
      iStack_8 = iStack_8 + 1;
    } while (iStack_8 < 0x20);
  }
  return;
}

/* 100180c0  FUN_100180c0  (624 bytes)
 * undefined FUN_100180c0(int param_1, int param_2)
 * called by: HUD_VoiceStatus
 */
void __thiscall FUN_100180c0(void *this,int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  byte bVar7;
  float10 fVar8;
  hud_player_info_t hStack_220;
  char acStack_200 [512];
  
  if (**(int **)((int)this + 0x20) != 0) {
    fVar8 = (float10)(*gEngfuncs.pfnGetCvarFloat)(s_voice_clientdebug_10092be0);
    if (fVar8 != (float10)0.0) {
      FUN_1006b78e(acStack_200,0x100,(byte_conflict *)s_CVoiceStatus__UpdateSpeakerStatu_10092d4c);
      (*gEngfuncs.pfnConsolePrint)(acStack_200);
    }
    if (param_1 == -1) {
      *(bool *)((int)this + 0x177f4) = param_2 != 0;
      if (param_2 != 0) {
        (*gEngfuncs.pfnClientCmd)(s_voice_modenable_1_10092d38);
        FUN_10018900((int)this);
        return;
      }
    }
    else {
      if (param_1 == -2) {
        *(bool *)((int)this + 0x177f5) = param_2 != 0;
        FUN_10018900((int)this);
        return;
      }
      if ((-1 < param_1) && (param_1 < 0x20)) {
        iVar1 = param_1 + -1;
        if (iVar1 < 0) {
          return;
        }
        puVar3 = (undefined4 *)FUN_100188c0(this,iVar1);
        iVar4 = iVar1 >> 5;
        if (param_2 == 0) {
          *(uint *)((int)this + iVar4 * 4 + 0x24) =
               *(uint *)((int)this + iVar4 * 4 + 0x24) & ~(1 << ((byte)iVar1 & 0x1f));
          if (puVar3 != (undefined4 *)0x0) {
            (**(code **)(*(int *)*puVar3 + 0x24))(0);
            puVar3[3] = 0xffffffff;
          }
        }
        else {
          bVar7 = (byte)iVar1 & 0x1f;
          puVar2 = (uint *)((int)this + iVar4 * 4 + 0x24);
          *puVar2 = *puVar2 | 1 << bVar7;
          *(uint *)((int)this + iVar4 * 4 + 0x2c) =
               *(uint *)((int)this + iVar4 * 4 + 0x2c) | 1 << bVar7;
          if ((puVar3 == (undefined4 *)0x0) &&
             (piVar5 = (int *)FUN_100188f0(this), piVar5 != (int *)0x0)) {
            hStack_220.name = (char *)0x0;
            hStack_220.ping = 0;
            hStack_220.thisplayer = '\0';
            hStack_220.spectator = '\0';
            hStack_220.packetloss = '\0';
            hStack_220._9_3_ = 0;
            hStack_220.model = (char *)0x0;
            hStack_220.topcolor = 0;
            hStack_220.bottomcolor = 0;
            (*gEngfuncs.pfnGetPlayerInfo)(param_1,&hStack_220);
            FUN_1006b78e(acStack_200,0x200,(byte_conflict *)s__s_10092d30);
            (**(code **)(**(int **)((int)this + 0x17734) + 4))(param_1,&hStack_220.field_0x14);
            if ((int *)piVar5[1] != (int *)0x0) {
              (**(code **)(*(int *)piVar5[1] + 300))
                        (hStack_220.model,hStack_220._16_4_,hStack_220._20_4_,100);
              (**(code **)(*(int *)piVar5[1] + 0x40))(**(undefined4 **)((int)this + 0x20));
              iVar4 = *(int *)piVar5[1];
              uVar6 = (**(code **)(**(int **)((int)this + 0x17734) + 0x10))();
              (**(code **)(iVar4 + 0x24))(uVar6);
            }
            if ((int *)*piVar5 != (int *)0x0) {
              (**(code **)(*(int *)*piVar5 + 0x120))(0xff,0xff,0xff,0);
              (**(code **)(*(int *)*piVar5 + 300))(0,0,0,0xff);
              (**(code **)(*(int *)*piVar5 + 0x200))((int *)*piVar5,&stack0xfffffdd8);
            }
            piVar5[3] = iVar1;
            FUN_10018900((int)this);
            return;
          }
        }
      }
    }
    FUN_10018900((int)this);
  }
  return;
}

/* 10018330  FUN_10018330  (5 bytes)
 * undefined FUN_10018330()
 */
undefined4 FUN_10018330(void)

{
  return 0;
}

/* 10018340  FUN_10018340  (32 bytes)
 * undefined FUN_10018340()
 */
undefined4 * __thiscall FUN_10018340(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_1007c608;
  if ((param_2 & 1) != 0) {
    FUN_1006ad4c(param_1);
  }
  return param_1;
}

/* 10018360  FUN_10018360  (612 bytes)
 * undefined FUN_10018360(char param_1)
 * called by: FUN_10017ea0, FUN_10018830, FUN_10018cf0
 */
void __thiscall FUN_10018360(void *this,char param_1)

{
  uint iPlayer;
  char cVar1;
  char playerID [16];
  bool bVar2;
  char *pcVar3;
  qboolean qVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  undefined4 unaff_EBX;
  uint uVar9;
  undefined4 unaff_EBP;
  uint uVar10;
  undefined4 unaff_EDI;
  char *pcVar11;
  char *pcVar12;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 extraout_ST0_04;
  char in_stack_00000008;
  char in_stack_00000028;
  undefined4 in_stack_fffff50c;
  int iStack_af0;
  int aiStack_aec [2];
  int iStack_ae4;
  char acStack_adc [4];
  char acStack_ad8 [476];
  char acStack_8fc [268];
  undefined1 auStack_7f0 [20];
  char acStack_7dc [8];
  char acStack_7d4 [2004];
  
  pcVar3 = (*gEngfuncs.pfnGetLevelName)();
  if (*pcVar3 == '\0') {
    (*gEngfuncs.pfnGetCvarFloat)(s_voice_clientdebug_10092be0);
    if (extraout_ST0 != (float10)0.0) {
      (*gEngfuncs.pfnConsolePrint)(s_CVoiceStatus__UpdateServerState__10092dfc);
      return;
    }
  }
  else {
    (*gEngfuncs.pfnGetCvarFloat)(s_voice_modenable_10092bf8);
    if ((in_stack_00000008 != '\0') ||
       (*(uint *)((int)this + 0x1c) != (uint)(extraout_ST0_00 != (float10)0.0))) {
      *(uint *)((int)this + 0x1c) = (uint)(extraout_ST0_00 != (float10)0.0);
      FUN_1006b78e(acStack_8fc,0x100,(byte_conflict *)s_VModEnable__d_10092dec);
      (*gEngfuncs.pfnServerCmd)(acStack_8fc);
      (*gEngfuncs.pfnGetCvarFloat)(s_voice_clientdebug_10092be0);
      if (extraout_ST0_01 != (float10)0.0) {
        FUN_1006ac7a(&stack0xfffff50c,(byte_conflict *)s_CVoiceStatus__UpdateServerState__10092dbc);
        (*gEngfuncs.pfnConsolePrint)(&stack0xfffff50c);
      }
    }
    FUN_1006ac7a(auStack_7f0,&DAT_10092db4);
    uVar9 = 0;
    uVar10 = 0;
    uVar6 = 0;
    do {
      iPlayer = uVar6 + 1;
      playerID[4] = (char)unaff_EDI;
      playerID[5] = (char)((uint)unaff_EDI >> 8);
      playerID[6] = (char)((uint)unaff_EDI >> 0x10);
      playerID[7] = (char)((uint)unaff_EDI >> 0x18);
      playerID._0_4_ = &stack0xfffff500;
      playerID[8] = (char)unaff_EBP;
      playerID[9] = (char)((uint)unaff_EBP >> 8);
      playerID[10] = (char)((uint)unaff_EBP >> 0x10);
      playerID[0xb] = (char)((uint)unaff_EBP >> 0x18);
      playerID[0xc] = (char)unaff_EBX;
      playerID[0xd] = (char)((uint)unaff_EBX >> 8);
      playerID[0xe] = (char)((uint)unaff_EBX >> 0x10);
      playerID[0xf] = (char)((uint)unaff_EBX >> 0x18);
      qVar4 = (*gEngfuncs.GetPlayerUniqueID)(iPlayer,playerID);
      if (qVar4 != 0) {
        bVar2 = FUN_100173a0((void *)(iStack_af0 + 0x177f8),aiStack_aec);
        bVar5 = (byte)uVar6;
        if (bVar2) {
          uVar10 = uVar10 | 1 << (bVar5 & 0x1f);
        }
        if ((*(uint *)(iStack_af0 + 0x30 + ((int)uVar6 >> 5) * 4) & 1 << (bVar5 & 0x1f)) != 0) {
          uVar9 = uVar9 | 1 << (bVar5 & 0x1f);
        }
      }
      uVar6 = iPlayer;
    } while (iPlayer < 0x20);
    cVar8 = '\x01';
    if (uVar9 == uVar10) {
      cVar8 = (char)((uint)in_stack_fffff50c >> 0x18);
    }
    FUN_1006ac7a(acStack_adc,&DAT_10092db0);
    uVar6 = 0xffffffff;
    pcVar3 = acStack_adc;
    do {
      pcVar12 = pcVar3;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar12 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar12;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar3 = acStack_7dc;
    do {
      pcVar11 = pcVar3;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar11 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar11;
    } while (cVar1 != '\0');
    pcVar3 = pcVar12 + -uVar6;
    pcVar12 = pcVar11 + -1;
    for (uVar9 = uVar6 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar12 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar12 = pcVar12 + 1;
    }
    if ((cVar8 == '\0') && (in_stack_00000028 == '\0')) {
      (*gEngfuncs.pfnGetCvarFloat)(s_voice_clientdebug_10092be0);
      if (extraout_ST0_02 != (float10)0.0) {
        (*gEngfuncs.pfnConsolePrint)(s_CVoiceStatus__UpdateServerState__10092d84);
      }
    }
    else {
      (*gEngfuncs.pfnGetCvarFloat)(s_voice_clientdebug_10092be0);
      if (extraout_ST0_03 != (float10)0.0) {
        FUN_1006ac7a(acStack_ad8,(byte_conflict *)s_CVoiceStatus__UpdateServerState__10092dbc);
        (*gEngfuncs.pfnConsolePrint)(acStack_ad8);
      }
      (*gEngfuncs.pfnServerCmdUnreliable)(acStack_7d4);
    }
    (*gEngfuncs.GetClientTime)();
    *(float *)(iStack_ae4 + 0x18) = (float)extraout_ST0_04;
  }
  return;
}

/* 100185d0  FUN_100185d0  (25 bytes)
 * undefined FUN_100185d0(undefined4 param_1, int param_2)
 * called by: FUN_1005db70
 */
void __thiscall FUN_100185d0(void *this,undefined4 param_1,int param_2)

{
  *(undefined4 *)((int)this + param_2 * 4 + 0x17754) = param_1;
  FUN_100185f0(this,param_2 + -1);
  return;
}

/* 100185f0  FUN_100185f0  (385 bytes)
 * undefined FUN_100185f0(int param_1)
 * called by: FUN_10017ea0, FUN_100185d0
 */
void __thiscall FUN_100185f0(void *this,int param_1)

{
  int *piVar1;
  char playerID [16];
  bool bVar2;
  qboolean qVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  int iVar6;
  undefined4 unaff_ESI;
  float10 fVar7;
  int unaff_retaddr;
  char cStack00000018;
  undefined1 local_10 [14];
  char cStack_2;
  char cStack_1;
  
  iVar6 = param_1;
  piVar1 = *(int **)((int)this + param_1 * 4 + 0x17758);
  if ((piVar1 != (int *)0x0) &&
     (playerID._4_4_ = unaff_ESI, playerID._0_4_ = local_10, playerID._8_4_ = unaff_EBP,
     playerID._12_4_ = unaff_EBX, qVar3 = (*gEngfuncs.GetPlayerUniqueID)(param_1 + 1,playerID),
     qVar3 != 0)) {
    fVar7 = (float10)FUN_1006b9aa(extraout_ECX);
    cStack00000018 = fVar7 < (float10)0.3;
    bVar5 = (byte)iVar6 & 0x1f;
    iVar6 = iVar6 >> 5;
    cStack_1 = (1 << bVar5 & *(uint *)((int)this + iVar6 * 4 + 0x24)) != 0;
    bVar2 = FUN_10018cc0(this,unaff_retaddr);
    cStack_2 = !bVar2;
    bVar2 = FUN_100173a0((void *)((int)this + 0x177f8),&param_1);
    if (cStack_2 != '\0') {
      (**(code **)(*piVar1 + 0x1fc))(0);
      return;
    }
    if (bVar2) {
      (**(code **)(*piVar1 + 0x1fc))(*(undefined4 *)((int)this + 0x17754));
      return;
    }
    if (cStack_1 != '\0') {
      if (cStack00000018 == '\0') {
        uVar4 = *(undefined4 *)((int)this + 0x17748);
      }
      else {
        uVar4 = *(undefined4 *)((int)this + 0x1774c);
      }
      (**(code **)(*piVar1 + 0x1fc))(uVar4);
      (**(code **)(*piVar1 + 0x120))(0xff,0xaa,0,1);
      return;
    }
    if ((1 << bVar5 & *(uint *)((int)this + iVar6 * 4 + 0x2c)) == 0) {
      (**(code **)(*piVar1 + 0x1fc))(*(undefined4 *)((int)this + 0x17740));
      (**(code **)(*piVar1 + 0x120))(100,100,100,1);
      return;
    }
    (**(code **)(*piVar1 + 0x1fc))(*(undefined4 *)((int)this + 0x17744));
  }
  return;
}

/* 10018780  FUN_10018780  (166 bytes)
 * undefined FUN_10018780(undefined4 param_1, undefined4 param_2)
 * called by: FUN_10017580
 */
void __thiscall FUN_10018780(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  char acStack_100 [256];
  
  FUN_100299b0(param_2,param_1);
  iVar1 = FUN_10029aa0();
  *(int *)((int)this + 0x28) = iVar1;
  iVar1 = FUN_10029aa0();
  *(int *)((int)this + 0x30) = iVar1;
  fVar3 = (float10)(*gEngfuncs.pfnGetCvarFloat)(s_voice_clientdebug_10092be0);
  if (fVar3 != (float10)0.0) {
    (*gEngfuncs.pfnConsolePrint)(s_CVoiceStatus__HandleVoiceMaskMsg_10092e7c);
    FUN_1006ac7a(acStack_100,(byte_conflict *)s___m_AudiblePlayers__d_____lu_10092e58);
    (*gEngfuncs.pfnConsolePrint)(acStack_100);
    FUN_1006ac7a(acStack_100,(byte_conflict *)s___m_ServerBannedPlayers__d_____l_10092e30);
    (*gEngfuncs.pfnConsolePrint)(acStack_100);
  }
  uVar2 = FUN_10029a10();
  *(uint *)((int)this + 0x1c) = uVar2;
  return;
}

/* 10018830  FUN_10018830  (57 bytes)
 * undefined FUN_10018830(void * param_1)
 * called by: FUN_100175a0
 */
void __fastcall FUN_10018830(void *param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)(*gEngfuncs.pfnGetCvarFloat)(s_voice_clientdebug_10092be0);
  if (fVar1 != (float10)0.0) {
    (*gEngfuncs.pfnConsolePrint)(s_CVoiceStatus__HandleReqStateMsg_10092ea0);
  }
  FUN_10018360(param_1,'\x01');
  return;
}

/* 10018870  FUN_10018870  (29 bytes)
 * undefined FUN_10018870(int param_1)
 * called by: FUN_1005e660
 */
void __fastcall FUN_10018870(int param_1)

{
  if (*(char *)(param_1 + 0x177d8) == '\0') {
    *(undefined1 *)(param_1 + 0x177d8) = 1;
                    /* WARNING: Could not recover jumptable at 0x10018889. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x17734) + 8))();
    return;
  }
  return;
}

/* 10018890  FUN_10018890  (18 bytes)
 * undefined FUN_10018890(int param_1)
 * called by: FUN_10063760
 */
void __fastcall FUN_10018890(int param_1)

{
  *(undefined1 *)(param_1 + 0x177d8) = 0;
                    /* WARNING: Could not recover jumptable at 0x1001889f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x17734) + 8))();
  return;
}

/* 100188b0  FUN_100188b0  (7 bytes)
 * undefined1 FUN_100188b0(int param_1)
 * called by: CL_CreateMove, FUN_1005db70, FUN_1005e660, FUN_1005e7f0, FUN_10064790, IN_MouseEvent
 */
undefined1 __fastcall FUN_100188b0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x177d8);
}

/* 100188c0  FUN_100188c0  (46 bytes)
 * int FUN_100188c0(int param_1)
 * called by: FUN_100180c0, FUN_100188f0
 */
int __thiscall FUN_100188c0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)((int)this + 0x19008);
  do {
    if (*piVar2 == param_1) {
      return iVar1 * 0x10 + 0x18ffc + (int)this;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 4;
  } while (iVar1 < 7);
  return 0;
}

/* 100188f0  FUN_100188f0  (8 bytes)
 * undefined FUN_100188f0(void * param_1)
 * called by: FUN_100180c0
 */
void __fastcall FUN_100188f0(void *param_1)

{
  FUN_100188c0(param_1,-1);
  return;
}

/* 10018900  FUN_10018900  (650 bytes)
 * undefined FUN_10018900(int param_1)
 * called by: FUN_100180c0
 */
void __fastcall FUN_10018900(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBX;
  int iVar3;
  int unaff_EBP;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined1 *puVar10;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined1 local_c [4];
  int local_8;
  int local_4;
  
  local_10 = DAT_100d590c / 2;
  local_14 = 8;
  local_18 = 8;
  local_8 = param_1;
  if (*(int **)(param_1 + 0x177e4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x177e4) + 8))(&local_14,&local_18);
  }
  piVar4 = (int *)(param_1 + 0x19004);
  local_4 = 7;
  do {
    if ((piVar4[1] == -1) || ((int *)piVar4[-2] == (int *)0x0)) {
      if ((int *)*piVar4 != (int *)0x0) {
        (**(code **)(*(int *)*piVar4 + 0x24))(0);
      }
      if ((int *)piVar4[-1] != (int *)0x0) {
        (**(code **)(*(int *)piVar4[-1] + 0x24))(0);
      }
      if ((int *)piVar4[-2] != (int *)0x0) {
        (**(code **)(*(int *)piVar4[-2] + 0x24))(0);
      }
    }
    else {
      puVar10 = local_c;
      piVar9 = &local_1c;
      (**(code **)(*(int *)piVar4[-2] + 0x214))(piVar9);
      iVar1 = (DAT_100d5908 * 2) / 3;
      if (iVar1 < unaff_EBP) {
        unaff_EBP = iVar1;
      }
      iVar1 = unaff_EBP + 6 + local_1c;
      iVar3 = unaff_EBX;
      if (unaff_EBX < local_14) {
        iVar3 = local_14;
      }
      iVar3 = iVar3 + 4;
      iVar5 = (DAT_100d5908 - iVar1) + -8;
      iVar8 = local_18;
      (**(code **)(*(int *)piVar4[-1] + 0x10))(iVar5,local_18,iVar1,iVar3);
      iVar7 = unaff_EBP;
      (**(code **)(*(int *)piVar4[-2] + 0x10))(2,(iVar3 - unaff_EBP) / 2,piVar9,unaff_EBP);
      iVar1 = iVar5 + 4;
      if ((int *)*piVar4 == (int *)0x0) {
        (**(code **)(iRam00000000 + 0x24))(0);
      }
      else {
        (**(code **)(*(int *)*piVar4 + 0x1fc))(*(undefined4 *)(puVar10 + 0x177e4));
        (**(code **)(*(int *)*piVar4 + 0x24))(1);
        (**(code **)(*(int *)*piVar4 + 0x10))(iVar1,(iVar3 - iVar8) / 2,iVar5,iVar7);
      }
      local_10 = local_10 + 2 + iVar3;
      param_1 = local_8;
    }
    piVar4 = piVar4 + 4;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  if ((((*(int *)(param_1 + 0x177e8) == 0) || (*(int *)(param_1 + 0x177ec) == 0)) ||
      (*(int **)(param_1 + 0x177f0) == (int *)0x0)) ||
     ((*(char *)(param_1 + 0x177f4) == '\0' && (*(char *)(param_1 + 0x177f5) == '\0')))) {
    (**(code **)(**(int **)(param_1 + 0x177f0) + 0x24))(0);
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x177f0) + 0x40))(**(undefined4 **)(param_1 + 0x20));
  (**(code **)(**(int **)(param_1 + 0x177f0) + 0x24))(1);
  if (*(char *)(param_1 + 0x177f5) != '\0') {
    fVar6 = (float10)(*gEngfuncs.pfnGetCvarFloat)(s_voice_clientdebug_10092be0);
    if (fVar6 != (float10)0.0) {
      uVar2 = *(undefined4 *)(param_1 + 0x177ec);
      iVar1 = **(int **)(param_1 + 0x177f0);
      goto LAB_10018b25;
    }
  }
  uVar2 = *(undefined4 *)(param_1 + 0x177e8);
  iVar1 = **(int **)(param_1 + 0x177f0);
LAB_10018b25:
  (**(code **)(iVar1 + 0x1fc))(uVar2);
  (**(code **)(**(int **)(param_1 + 0x177e8) + 8))(&local_10,&local_14);
  iVar3 = DAT_100d5908 - local_18;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x17734) + 0xc))();
  (**(code **)**(undefined4 **)(param_1 + 0x177f0))(iVar3 + -10,iVar1 - local_1c);
  return;
}

/* 10018b90  FUN_10018b90  (229 bytes)
 * undefined FUN_10018b90(int param_1)
 * called by: FUN_100177e0, FUN_10017af0
 */
void __fastcall FUN_10018b90(int param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_1006ad4c(*(LPVOID *)(param_1 + 0x177e8));
  *(undefined4 *)(param_1 + 0x177e8) = 0;
  FUN_1006ad4c(*(LPVOID *)(param_1 + 0x177ec));
  *(undefined4 *)(param_1 + 0x177ec) = 0;
  FUN_1006ad4c(*(LPVOID *)(param_1 + 0x177e4));
  *(undefined4 *)(param_1 + 0x177e4) = 0;
  FUN_1006ad4c(*(LPVOID *)(param_1 + 0x17740));
  *(undefined4 *)(param_1 + 0x17740) = 0;
  FUN_1006ad4c(*(LPVOID *)(param_1 + 0x17744));
  *(undefined4 *)(param_1 + 0x17744) = 0;
  FUN_1006ad4c(*(LPVOID *)(param_1 + 0x17748));
  *(undefined4 *)(param_1 + 0x17748) = 0;
  FUN_1006ad4c(*(LPVOID *)(param_1 + 0x1774c));
  *(undefined4 *)(param_1 + 0x1774c) = 0;
  FUN_1006ad4c(*(LPVOID *)(param_1 + 0x17750));
  *(undefined4 *)(param_1 + 0x17750) = 0;
  FUN_1006ad4c(*(LPVOID *)(param_1 + 0x17754));
  *(undefined4 *)(param_1 + 0x17754) = 0;
  piVar1 = (int *)(param_1 + 0x17758);
  iVar2 = 0x20;
  do {
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 0x1fc))(0);
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(int **)(param_1 + 0x177f0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x177f0) + 0x1fc))(0);
  }
  return;
}

/* 10018c80  FUN_10018c80  (61 bytes)
 * bool FUN_10018c80(undefined4 param_1)
 * called by: FUN_1002ed00, FUN_1005e660
 */
bool __thiscall FUN_10018c80(void *this,int param_1)

{
  char playerID [16];
  bool bVar1;
  qboolean qVar2;
  undefined4 unaff_ESI;
  undefined8 in_stack_fffffff0;
  
  playerID._4_4_ = unaff_ESI;
  playerID._0_4_ = &stack0xfffffff0;
  playerID._8_8_ = in_stack_fffffff0;
  qVar2 = (*gEngfuncs.GetPlayerUniqueID)(param_1,playerID);
  if (qVar2 == 0) {
    return false;
  }
  bVar1 = FUN_100173a0((void *)((int)this + 0x177f8),&param_1);
  return bVar1;
}

/* 10018cc0  FUN_10018cc0  (41 bytes)
 * bool FUN_10018cc0(int param_1)
 * called by: FUN_100185f0, FUN_1005e870
 */
bool __thiscall FUN_10018cc0(void *this,int param_1)

{
  return (1 << ((byte)(param_1 + -1) & 0x1f) & *(uint *)((int)this + (param_1 + -1 >> 5) * 4 + 0x28)
         ) != 0;
}

/* 10018cf0  FUN_10018cf0  (281 bytes)
 * undefined FUN_10018cf0(int param_1)
 * called by: FUN_1005e660
 */
void __thiscall FUN_10018cf0(void *this,int param_1)

{
  char playerID [16];
  bool bVar1;
  qboolean qVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  int in_stack_0000000c;
  undefined8 in_stack_fffffef0;
  undefined4 in_stack_fffffef8;
  int iStack_e8;
  int aiStack_e4 [3];
  char acStack_d8 [216];
  
  (*gEngfuncs.pfnGetCvarFloat)(s_voice_clientdebug_10092be0);
  if (extraout_ST0 != (float10)0.0) {
    (*gEngfuncs.pfnConsolePrint)(s_CVoiceStatus__SetPlayerBlockedSt_10092f34);
  }
  playerID[4] = (char)in_stack_fffffef0;
  playerID[5] = (char)((ulonglong)in_stack_fffffef0 >> 8);
  playerID[6] = (char)((ulonglong)in_stack_fffffef0 >> 0x10);
  playerID[7] = (char)((ulonglong)in_stack_fffffef0 >> 0x18);
  playerID[8] = (char)((ulonglong)in_stack_fffffef0 >> 0x20);
  playerID[9] = (char)((ulonglong)in_stack_fffffef0 >> 0x28);
  playerID[10] = (char)((ulonglong)in_stack_fffffef0 >> 0x30);
  playerID[0xb] = (char)((ulonglong)in_stack_fffffef0 >> 0x38);
  playerID._0_4_ = &stack0xfffffef8;
  playerID[0xc] = (char)in_stack_fffffef8;
  playerID[0xd] = (char)((uint)in_stack_fffffef8 >> 8);
  playerID[0xe] = (char)((uint)in_stack_fffffef8 >> 0x10);
  playerID[0xf] = (char)((uint)in_stack_fffffef8 >> 0x18);
  qVar2 = (*gEngfuncs.GetPlayerUniqueID)(in_stack_0000000c,playerID);
  if (qVar2 != 0) {
    (*gEngfuncs.pfnGetCvarFloat)(s_voice_clientdebug_10092be0);
    if (extraout_ST0_00 != (float10)0.0) {
      (*gEngfuncs.pfnConsolePrint)(s_CVoiceStatus__SetPlayerBlockedSt_10092f08);
    }
    if ((*(uint *)((int)this + (in_stack_0000000c + -1 >> 5) * 4 + 0x28) &
        1 << ((byte)(in_stack_0000000c + -1) & 0x1f)) != 0) {
      (*gEngfuncs.pfnGetCvarFloat)(s_voice_clientdebug_10092be0);
      if (extraout_ST0_01 != (float10)0.0) {
        FUN_100173a0((void *)((int)this + 0x177f8),&iStack_e8);
        FUN_1006ac7a(acStack_d8,(byte_conflict *)s_CVoiceStatus__SetPlayerBlockedSt_10092ec4);
        (*gEngfuncs.pfnConsolePrint)(acStack_d8);
      }
      bVar1 = FUN_100173a0((void *)((int)this + 0x177f8),aiStack_e4);
      FUN_100173c0((void *)((int)this + 0x177f8),aiStack_e4,!bVar1);
      FUN_10018360(this,'\0');
    }
  }
  return;
}

/* 10018f40  FUN_10018f40  (10 bytes)
 * undefined FUN_10018f40()
 */
void FUN_10018f40(void)

{
  FUN_10018f50();
  FUN_10018f60();
  return;
}

/* 10018f50  FUN_10018f50  (10 bytes)
 * undefined FUN_10018f50(void)
 * called by: FUN_10018f40
 */
void FUN_10018f50(void)

{
  FUN_100191b0((Panel *)&DAT_100cc3a0);
  return;
}

/* 10018f60  FUN_10018f60  (12 bytes)
 * undefined FUN_10018f60(void)
 * called by: FUN_10018f40
 */
void FUN_10018f60(void)

{
  FUN_1006af63(0x10018f70);
  return;
}

/* 10018f70  FUN_10018f70  (37 bytes)
 * undefined FUN_10018f70()
 */
void FUN_10018f70(void)

{
  DAT_100cc3a0 = &PTR_setPos_1007c6bc;
  DAT_100cc474 = &PTR_FUN_1007c6b8;
  FUN_10058590((int *)0x100cca9c);
  return;
}

/* 10018f90  FUN_10018f90  (11 bytes)
 * undefined FUN_10018f90()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10018f90(void)

{
  _DAT_100cc398 = &PTR_FUN_1007c6b0;
  return;
}

/* 10018fa0  FUN_10018fa0  (14 bytes)
 * undefined FUN_10018fa0()
 */
void FUN_10018fa0(void)

{
  FUN_100641e0(DAT_100d5cb0);
  return;
}

/* 10018fb0  FUN_10018fb0  (59 bytes)
 * Label * FUN_10018fb0(Label * param_1)
 * called by: FUN_100191b0
 */
Label * __fastcall FUN_10018fb0(Label *param_1)

{
  vgui::Label::Label(param_1,s_);
  vgui::ScrollBar::ScrollBar((ScrollBar *)(param_1 + 0xd0),0,0,0,0,false);
  vgui::Slider::Slider((Slider *)(param_1 + 0x1a8),0,0,10,10,false);
  return param_1;
}

/* 10018ff0  FUN_10018ff0  (352 bytes)
 * undefined FUN_10018ff0(int * param_1)
 * called by: FUN_100192d0
 */
void __thiscall FUN_10018ff0(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  void *local_4;
  
  piVar1 = param_1;
  local_4 = this;
  (**(code **)(*param_1 + 0xc))(&param_1,&local_4);
  (**(code **)(*(int *)this + 0x40))(piVar1);
  (**(code **)(*(int *)this + 0x20c))(1);
  iVar7 = 0;
  (**(code **)(*(int *)this + 0x21c))(0);
  iVar6 = 0;
  (**(code **)(*(int *)this + 300))(0,0,0,0xff);
  uVar5 = 0;
  (**(code **)(*(int *)this + 0x120))(0xff,0xff,0xff,0);
  iVar4 = iVar7;
  (*(code *)**(undefined4 **)this)(0x28,iVar7);
  iVar3 = 0x14;
  (**(code **)(*(int *)this + 8))(iVar6 / 2 + -0x28,0x14);
  (**(code **)(*(int *)this + 0x200))(this,uVar5);
  (**(code **)(*(int *)this + 0x24))(1);
  (**(code **)(*(int *)((int)this + 0x1a8) + 0x214))(10);
  (**(code **)(*(int *)((int)this + 0x1a8) + 0x218))(1);
  piVar2 = (int *)((int)this + 0xd0);
  (*(code *)**(undefined4 **)((int)this + 0xd0))(iVar4 / 2 + 0x28,iVar7);
  (**(code **)(*piVar2 + 8))(iVar3 / 2 + -0x50,0x14);
  (**(code **)(*piVar2 + 0x224))((int *)((int)this + 0x1a8));
  (**(code **)(*piVar2 + 0x40))(piVar1);
  (**(code **)(*piVar2 + 0x208))(0,100);
  (**(code **)(*piVar2 + 0x120))(0xff,0xff,0xff,0);
  (**(code **)(*piVar2 + 300))(0xff,0xff,0xff,0);
  return;
}

/* 10019150  FUN_10019150  (35 bytes)
 * float10 FUN_10019150(int param_1)
 * called by: FUN_100195d0
 */
float10 __fastcall FUN_10019150(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0xd0) + 0x200))(param_1);
  return (float10)iVar1 * (float10)0.01;
}

/* 10019180  FUN_10019180  (39 bytes)
 * undefined FUN_10019180(int param_1)
 * called by: FUN_100192d0
 */
void __fastcall FUN_10019180(int param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0xd0);
  lVar2 = __ftol();
  (**(code **)(iVar1 + 0x1fc))((int)lVar2);
  return;
}

/* 100191b0  FUN_100191b0  (256 bytes)
 * Panel * FUN_100191b0(Panel * param_1)
 * called by: FUN_10018f50
 */
Panel * __fastcall FUN_100191b0(Panel *param_1)

{
  void *unaff_EDI;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_1007789e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  vgui::Panel::Panel(param_1,0,0,0,0);
  *(undefined4 *)(param_1 + 0xbc) = 0x96;
  *(undefined ***)param_1 = &PTR_setPos_1007c8d0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined ***)(param_1 + 0xd4) = &PTR_FUN_1007c8cc;
  vgui::Label::Label((Label *)(param_1 + 0xe0),s_);
  FUN_10018fb0((Label *)(param_1 + 0x1b4));
  FUN_10018fb0((Label *)(param_1 + 0x458));
  FUN_100584a0(param_1 + 0x6fc);
  local_4 = 0;
  vgui::Button::Button((Button *)(param_1 + 0x960),s_,0,0);
  *(undefined ***)param_1 = &PTR_setPos_1007c6bc;
  *(undefined ***)(param_1 + 0xd4) = &PTR_FUN_1007c6b8;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  (**(code **)(*(int *)(param_1 + 0x960) + 0x240))(&DAT_100cc398);
  (**(code **)(*(int *)(param_1 + 0xe0) + 300))(0xff,0xff,0xff,200);
  ExceptionList = unaff_EDI;
  return param_1;
}

/* 100192d0  FUN_100192d0  (698 bytes)
 * undefined FUN_100192d0()
 */
void __fastcall FUN_100192d0(int *param_1)

{
  int *piVar1;
  int iVar2;
  IVoiceTweak_s *pIVar3;
  int *piVar4;
  undefined *puVar5;
  float10 extraout_ST0;
  int iVar6;
  undefined4 uStack_7c;
  int *piStack_78;
  int iStack_74;
  int *piStack_70;
  int *piVar7;
  undefined1 *puVar8;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  
  if (DAT_100ccdf0 == '\0') {
    DAT_100ccdf0 = '\x01';
    param_1[0x36] = DAT_100d5908;
    param_1[0x37] = DAT_100d590c;
    pIVar3 = gEngfuncs.pVoiceTweak;
    param_1[0x6c] = (int)gEngfuncs.pVoiceTweak;
    iStack_30 = 0x10019313;
    (*pIVar3->StartVoiceTweakMode)();
    iStack_30 = (DAT_100d590c - param_1[0x37]) / 2;
    iStack_34 = (DAT_100d5908 - param_1[0x36]) / 2;
    iStack_38 = 0x1001933f;
    (**(code **)*param_1)();
    iStack_38 = param_1[0x37];
    iStack_3c = param_1[0x36];
    (**(code **)(*param_1 + 8))();
    piVar1 = param_1 + 0x6d;
    FUN_100349a0(s__Mic_Volume_10092fdc);
    FUN_10018ff0(piVar1,param_1);
    (**(code **)(param_1[0x6c] + 0xc))();
    FUN_10019180((int)piVar1);
    (**(code **)(*piVar1 + 0x14))();
    piVar1 = param_1 + 0x116;
    FUN_100349a0(s__Speaker_Volume_10092fcc);
    FUN_10018ff0(piVar1,param_1);
    (**(code **)(param_1[0x6c] + 0xc))();
    FUN_10019180((int)piVar1);
    puVar8 = &stack0xffffffd8;
    piVar7 = &iStack_3c;
    (**(code **)(*piVar1 + 0x14))();
    piVar1 = param_1 + 0x1bf;
    (**(code **)(param_1[0x1bf] + 0x40))();
    FUN_100585b0(piVar1,s_gfx_vgui_checked_tga_10092f9c,s_gfx_vgui_unchecked_tga_10092fb4);
    FUN_10058660(piVar1,(byte_conflict *)s_Enable_Voice_In_This_Mod_10092f80);
    (**(code **)*piVar1)();
    piStack_70 = (int *)0x10019446;
    FUN_10058640(piVar1,0);
    piStack_70 = (int *)0x10019451;
    (*gEngfuncs.pfnGetCvarFloat)(s_voice_modenable_10092bf8);
    FUN_100586e0(piVar1,extraout_ST0 != (float10)0.0);
    if (param_1 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = param_1 + 0x35;
    }
    FUN_100586c0(piVar1,piVar4);
    iVar2 = param_1[600];
    piVar1 = param_1 + 600;
    FUN_100349a0(s__Menu_OK_10092f74);
    iStack_74 = 0x100194a6;
    piStack_70 = piVar1;
    (**(code **)(iVar2 + 0x200))();
    piStack_70 = (int *)0x100194ba;
    (**(code **)(*piVar1 + 0xc))();
    piStack_70 = (int *)((param_1[0x37] - (int)piVar7) + -3);
    iStack_74 = (param_1[0x36] - (int)puVar8) / 2;
    piStack_78 = (int *)0x100194e2;
    (**(code **)*piVar1)();
    uStack_7c = 0x100194ea;
    piStack_78 = param_1;
    (**(code **)(*piVar1 + 0x40))();
    piVar1 = param_1 + 0x38;
    uStack_7c = 0xff;
    iVar6 = 0;
    (**(code **)(param_1[0x38] + 300))(0,0,0);
    (**(code **)(*piVar1 + 0x120))(0xff,0xff,0xff,0);
    iVar2 = *piVar1;
    puVar5 = FUN_100349a0(s__Voice_Properties_10092f60);
    (**(code **)(iVar2 + 0x200))(piVar1,puVar5);
    (**(code **)(*piVar1 + 0xc))(&uStack_7c,&piStack_70);
    (**(code **)*piVar1)((param_1[0x36] - iVar6) / 2,5);
    (**(code **)(*piVar1 + 0x40))(param_1);
    (**(code **)(*param_1 + 0x24))(1);
    param_1[0x34] = DAT_100cf944;
  }
  return;
}

/* 10019590  FUN_10019590  (62 bytes)
 * undefined FUN_10019590(int * param_1)
 */
void __fastcall FUN_10019590(int *param_1)

{
  (**(code **)(param_1[0x6c] + 4))();
  DAT_100ccdf0 = 0;
  (**(code **)(*param_1 + 0x24))(0);
  param_1[0x33] = 0;
  if (param_1[0x32] != 0) {
    (**(code **)(*DAT_100d5cb0 + 0x4c))(param_1);
  }
  return;
}

/* 100195d0  FUN_100195d0  (191 bytes)
 * undefined FUN_100195d0()
 */
void __fastcall FUN_100195d0(int *param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_c [4];
  undefined1 auStack_8 [8];
  
  if (param_1[0x2f] != 0) {
    (**(code **)(*param_1 + 0x178))(0,0,0,param_1[0x2f]);
    (**(code **)(*param_1 + 0x180))(0,0,param_1[3],param_1[4]);
  }
  (**(code **)(*param_1 + 0xc))(auStack_8,auStack_c);
  uVar4 = 1;
  uVar3 = 0x80;
  (**(code **)(*param_1 + 0x178))(0x80,0x80,0x80,1);
  (**(code **)(*param_1 + 0x184))(0,0,uVar4,uVar3);
  fVar2 = FUN_10019150((int)(param_1 + 0x6d));
  (**(code **)(param_1[0x6c] + 8))(0,(float)fVar2);
  iVar1 = param_1[0x6c];
  fVar2 = FUN_10019150((int)(param_1 + 0x116));
  (**(code **)(iVar1 + 8))(1,(float)fVar2);
  return;
}

/* 10019690  FUN_10019690  (55 bytes)
 * undefined FUN_10019690()
 */
void __thiscall FUN_10019690(int param_1,int param_2)

{
  char cVar1;
  
  if (param_2 == param_1 + 0x628) {
    cVar1 = FUN_100586d0(param_2);
    if (cVar1 != '\0') {
      (*gEngfuncs.pfnClientCmd)(s_voice_modenable_1_10092d38);
      return;
    }
    (*gEngfuncs.pfnClientCmd)(s_voice_modenable_0_10092fe8);
  }
  return;
}

/* 100196d0  FUN_100196d0  (52 bytes)
 * undefined FUN_100196d0(int * param_1)
 */
void __fastcall FUN_100196d0(int *param_1)

{
  if (param_1[0x2f] != 0) {
    (**(code **)(*param_1 + 0x178))(0,0,0,param_1[0x2f]);
    (**(code **)(*param_1 + 0x180))(0,0,param_1[3],param_1[4]);
  }
  return;
}

/* 10019710  FUN_10019710  (21 bytes)
 * undefined FUN_10019710()
 */
void __fastcall FUN_10019710(int param_1)

{
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  return;
}

/* 10019730  FUN_10019730  (24 bytes)
 * undefined FUN_10019730(int * param_1)
 */
void __fastcall FUN_10019730(int *param_1)

{
  (**(code **)(*param_1 + 0x24))(1);
  param_1[0x34] = DAT_100cf944;
  return;
}

/* 10019750  FUN_10019750  (44 bytes)
 * undefined FUN_10019750(int * param_1)
 */
void __fastcall FUN_10019750(int *param_1)

{
  (**(code **)(*param_1 + 0x24))(0);
  param_1[0x33] = 0;
  if (param_1[0x32] != 0) {
    (**(code **)(*DAT_100d5cb0 + 0x4c))(param_1);
  }
  return;
}

/* 10019780  FUN_10019780  (5 bytes)
 * undefined FUN_10019780()
 */
undefined1 FUN_10019780(void)

{
  return 0;
}

/* 10019790  FUN_10019790  (43 bytes)
 * undefined FUN_10019790(int param_1)
 * called by: FUN_10019f40
 */
void __fastcall FUN_10019790(int param_1)

{
  int iVar1;
  
  iVar1 = 0x20;
  do {
    if (*(int *)(param_1 + 0x9c) != 0) {
      FUN_100197c0(param_1);
    }
    param_1 = param_1 + 0x148;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

/* 100197c0  FUN_100197c0  (1323 bytes)
 * undefined FUN_100197c0(int param_1)
 * called by: FUN_10019790, FUN_1001a3d0
 */
void FUN_100197c0(int param_1)

{
  int iVar1;
  client_sprite_t *pcVar2;
  byte_conflict *pbVar3;
  HSPRITE HVar4;
  int iVar5;
  int local_88;
  int local_84;
  char local_80 [128];
  
  iVar1 = ((0x27f < DAT_100d5908) - 1 & 0xfffffec0) + 0x280;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xe4) = 0;
    local_84 = iVar1;
    FUN_1006ac7a(local_80,(byte_conflict *)s_sprites__s_txt_1009305c);
    pcVar2 = (*gEngfuncs.pfnSPR_GetList)(local_80,&local_88);
    if (pcVar2 != (client_sprite_t *)0x0) {
      pbVar3 = FUN_1001a520((byte_conflict *)pcVar2,(byte_conflict *)s_crosshair_10093050,iVar1,
                            local_88);
      if (pbVar3 == (byte_conflict *)0x0) {
        *(undefined4 *)(param_1 + 0xf8) = 0;
      }
      else {
        FUN_1006ac7a(local_80,(byte_conflict *)s_sprites__s_spr_10093040);
        HVar4 = (*gEngfuncs.pfnSPR_Load)(local_80);
        *(HSPRITE *)(param_1 + 0xf8) = HVar4;
        *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(pbVar3 + 0x88);
        *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(pbVar3 + 0x8c);
        *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(pbVar3 + 0x90);
        *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(pbVar3 + 0x94);
      }
      pbVar3 = FUN_1001a520((byte_conflict *)pcVar2,(byte_conflict *)s_autoaim_10093038,local_84,
                            local_88);
      if (pbVar3 == (byte_conflict *)0x0) {
        *(undefined4 *)(param_1 + 0x10c) = 0;
      }
      else {
        FUN_1006ac7a(local_80,(byte_conflict *)s_sprites__s_spr_10093040);
        HVar4 = (*gEngfuncs.pfnSPR_Load)(local_80);
        *(HSPRITE *)(param_1 + 0x10c) = HVar4;
        *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(pbVar3 + 0x88);
        *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(pbVar3 + 0x8c);
        *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(pbVar3 + 0x90);
        *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(pbVar3 + 0x94);
      }
      pbVar3 = FUN_1001a520((byte_conflict *)pcVar2,&DAT_10093030,local_84,local_88);
      if (pbVar3 == (byte_conflict *)0x0) {
        *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0xf8);
        *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0xfc);
        *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0x100);
        *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0x104);
        *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x108);
      }
      else {
        FUN_1006ac7a(local_80,(byte_conflict *)s_sprites__s_spr_10093040);
        HVar4 = (*gEngfuncs.pfnSPR_Load)(local_80);
        *(HSPRITE *)(param_1 + 0x120) = HVar4;
        *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(pbVar3 + 0x88);
        *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(pbVar3 + 0x8c);
        *(undefined4 *)(param_1 + 300) = *(undefined4 *)(pbVar3 + 0x90);
        *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(pbVar3 + 0x94);
      }
      pbVar3 = FUN_1001a520((byte_conflict *)pcVar2,(byte_conflict *)s_zoom_autoaim_10093020,
                            local_84,local_88);
      if (pbVar3 == (byte_conflict *)0x0) {
        *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x120);
        *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0x124);
        *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x128);
        *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 300);
        *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x130);
      }
      else {
        FUN_1006ac7a(local_80,(byte_conflict *)s_sprites__s_spr_10093040);
        HVar4 = (*gEngfuncs.pfnSPR_Load)(local_80);
        *(HSPRITE *)(param_1 + 0x134) = HVar4;
        *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(pbVar3 + 0x88);
        *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(pbVar3 + 0x8c);
        *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(pbVar3 + 0x90);
        *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(pbVar3 + 0x94);
      }
      iVar1 = local_84;
      pbVar3 = FUN_1001a520((byte_conflict *)pcVar2,(byte_conflict *)s_weapon_10093018,local_84,
                            local_88);
      if (pbVar3 == (byte_conflict *)0x0) {
        *(undefined4 *)(param_1 + 0xbc) = 0;
      }
      else {
        FUN_1006ac7a(local_80,(byte_conflict *)s_sprites__s_spr_10093040);
        HVar4 = (*gEngfuncs.pfnSPR_Load)(local_80);
        *(HSPRITE *)(param_1 + 0xbc) = HVar4;
        *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(pbVar3 + 0x88);
        *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(pbVar3 + 0x8c);
        *(undefined4 *)(param_1 + 200) = *(undefined4 *)(pbVar3 + 0x90);
        *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(pbVar3 + 0x94);
        iVar5 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4);
        if (DAT_100cf910 <= iVar5) {
          DAT_100cf910 = iVar5;
        }
      }
      pbVar3 = FUN_1001a520((byte_conflict *)pcVar2,(byte_conflict *)s_weapon_s_1009300c,iVar1,
                            local_88);
      if (pbVar3 == (byte_conflict *)0x0) {
        *(undefined4 *)(param_1 + 0xa8) = 0;
      }
      else {
        FUN_1006ac7a(local_80,(byte_conflict *)s_sprites__s_spr_10093040);
        HVar4 = (*gEngfuncs.pfnSPR_Load)(local_80);
        *(HSPRITE *)(param_1 + 0xa8) = HVar4;
        *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(pbVar3 + 0x88);
        *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(pbVar3 + 0x8c);
        *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(pbVar3 + 0x90);
        *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(pbVar3 + 0x94);
      }
      pbVar3 = FUN_1001a520((byte_conflict *)pcVar2,&DAT_10093004,iVar1,local_88);
      if (pbVar3 == (byte_conflict *)0x0) {
        *(undefined4 *)(param_1 + 0xd0) = 0;
      }
      else {
        FUN_1006ac7a(local_80,(byte_conflict *)s_sprites__s_spr_10093040);
        HVar4 = (*gEngfuncs.pfnSPR_Load)(local_80);
        *(HSPRITE *)(param_1 + 0xd0) = HVar4;
        *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(pbVar3 + 0x88);
        *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(pbVar3 + 0x8c);
        *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(pbVar3 + 0x90);
        *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(pbVar3 + 0x94);
        iVar5 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4);
        if (DAT_100cf910 <= iVar5) {
          DAT_100cf910 = iVar5;
        }
      }
      pbVar3 = FUN_1001a520((byte_conflict *)pcVar2,(byte_conflict *)s_ammo2_10092ffc,iVar1,local_88
                           );
      if (pbVar3 == (byte_conflict *)0x0) {
        *(undefined4 *)(param_1 + 0xe4) = 0;
      }
      else {
        FUN_1006ac7a(local_80,(byte_conflict *)s_sprites__s_spr_10093040);
        HVar4 = (*gEngfuncs.pfnSPR_Load)(local_80);
        *(HSPRITE *)(param_1 + 0xe4) = HVar4;
        *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(pbVar3 + 0x88);
        *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(pbVar3 + 0x8c);
        *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(pbVar3 + 0x90);
        *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(pbVar3 + 0x94);
        iVar1 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4);
        if (DAT_100cf910 <= iVar1) {
          DAT_100cf910 = iVar1;
          return;
        }
      }
    }
  }
  return;
}

/* 10019cf0  FUN_10019cf0  (26 bytes)
 * undefined FUN_10019cf0()
 */
void FUN_10019cf0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1001a1d0(&DAT_100cf99c,param_1,param_2,param_3);
  return;
}

/* 10019d10  FUN_10019d10  (26 bytes)
 * undefined FUN_10019d10()
 */
void FUN_10019d10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1001a3d0(param_1,param_2,param_3);
  return;
}

/* 10019d30  FUN_10019d30  (26 bytes)
 * undefined FUN_10019d30()
 */
void FUN_10019d30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1001a030(param_1,param_2,param_3);
  return;
}

/* 10019d50  FUN_10019d50  (26 bytes)
 * undefined FUN_10019d50()
 */
void FUN_10019d50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1001a070(param_1,param_2,param_3);
  return;
}

/* 10019d70  FUN_10019d70  (26 bytes)
 * undefined FUN_10019d70()
 */
void FUN_10019d70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1001a0b0(param_1,param_2,param_3);
  return;
}

/* 10019d90  FUN_10019d90  (26 bytes)
 * undefined FUN_10019d90()
 */
void FUN_10019d90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1001a110(&DAT_100cf99c,param_1,param_2,param_3);
  return;
}

/* 10019db0  FUN_10019db0  (26 bytes)
 * undefined FUN_10019db0()
 */
void FUN_10019db0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1001a0e0(param_1,param_2,param_3);
  return;
}

/* 10019dd0  FUN_10019dd0  (12 bytes)
 * undefined FUN_10019dd0()
 */
void FUN_10019dd0(void)

{
  FUN_1001a4e0();
  return;
}

/* 10019de0  FUN_10019de0  (263 bytes)
 * undefined4 FUN_10019de0(int * param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10019de0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_10020a40(&DAT_100cf920,(int)param_1);
  (*gEngfuncs.pfnHookUserMsg)(s_CurWeapon_100930ec,FUN_10019cf0);
  (*gEngfuncs.pfnHookUserMsg)(s_WeaponList_100930e0,FUN_10019d10);
  (*gEngfuncs.pfnHookUserMsg)(s_AmmoPickup_100930d4,FUN_10019d50);
  (*gEngfuncs.pfnHookUserMsg)(s_WeapPickup_100930c8,FUN_10019d70);
  (*gEngfuncs.pfnHookUserMsg)(s_ItemPickup_100930bc,FUN_10019db0);
  (*gEngfuncs.pfnHookUserMsg)(s_HideWeapon_100930b0,FUN_10019d90);
  (*gEngfuncs.pfnHookUserMsg)(s_AmmoX_100930a8,FUN_10019d30);
  (*gEngfuncs.pfnAddCommand)(s_cancelselect_10093098,FUN_10019dd0);
  (**(code **)(*param_1 + 0x14))();
  (*gEngfuncs.pfnRegisterVariable)(s_hud_drawhistory_time_1009307c,&DAT_10093094,0);
  (*gEngfuncs.pfnRegisterVariable)(s_hud_fastswitch_1009306c,&DAT_10092bf4,1);
  param_1[4] = param_1[4] | 1;
  puVar2 = &DAT_100ccdf8;
  for (iVar1 = 0xa40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  _DAT_100cf808 = 0;
  puVar2 = &DAT_100cf6f8;
  for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_100cf788;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_100cf850;
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return 1;
}

/* 10019ef0  FUN_10019ef0  (68 bytes)
 * undefined FUN_10019ef0()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10019ef0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  _DAT_100cf808 = 0;
  DAT_100cf840 = 0;
  puVar2 = &DAT_100cf6f8;
  for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_100cf788;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_100cf850;
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  _DAT_100cf974 = 0;
  return;
}

/* 10019f40  FUN_10019f40  (229 bytes)
 * undefined4 FUN_10019f40(int param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10019f40(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_10020670(&DAT_100cf920,s_bucket1_10093104);
  *(int *)(param_1 + 0x20) = iVar1;
  iVar1 = FUN_10020670(&DAT_100cf920,s_selection_100930f8);
  *(int *)(param_1 + 0x24) = iVar1;
  if (*(int *)(param_1 + 0x20) < 0) {
    _DAT_100cf830 = 0;
  }
  else {
    _DAT_100cf830 = *(undefined4 *)(DAT_100cf98c + *(int *)(param_1 + 0x20) * 4);
  }
  piVar2 = (int *)(*(int *)(param_1 + 0x20) * 0x10 + DAT_100cf990);
  _DAT_100cf838 = piVar2[1] - *piVar2;
  iVar1 = *(int *)(param_1 + 0x20) * 0x10 + DAT_100cf990;
  _DAT_100cf844 = *(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8);
  iVar1 = *(int *)(param_1 + 0x20) * 0x10 + DAT_100cf990;
  iVar1 = *(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8);
  if (DAT_100cf910 <= iVar1) {
    DAT_100cf910 = iVar1;
  }
  FUN_10019790(0x100ccdf8);
  if (0x27f < DAT_100d5908) {
    _DAT_100cf83c = 0x14;
    _DAT_100cf80c = 4;
    return 1;
  }
  _DAT_100cf83c = 10;
  _DAT_100cf80c = 2;
  return 1;
}

/* 1001a030  FUN_1001a030  (52 bytes)
 * undefined4 FUN_1001a030(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_10019d30
 */
undefined4 FUN_1001a030(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  uVar2 = FUN_10029a10();
  (&DAT_100cf788)[uVar1] = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
  return 1;
}

/* 1001a070  FUN_1001a070  (59 bytes)
 * undefined4 FUN_1001a070(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_10019d50
 */
undefined4 FUN_1001a070(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  uVar2 = FUN_10029a10();
  FUN_1001a710(&DAT_100cf850,1,uVar1,(uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f));
  return 1;
}

/* 1001a0b0  FUN_1001a0b0  (46 bytes)
 * undefined4 FUN_1001a0b0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_10019d70
 */
undefined4 FUN_1001a0b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  FUN_1001a710(&DAT_100cf850,2,uVar1,0);
  return 1;
}

/* 1001a0e0  FUN_1001a0e0  (46 bytes)
 * undefined4 FUN_1001a0e0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_10019db0
 */
undefined4 FUN_1001a0e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  
  FUN_100299b0(param_3,param_2);
  pcVar1 = FUN_10029b00();
  FUN_1001a7b0(&DAT_100cf850,3,pcVar1,0);
  return 1;
}

/* 1001a110  FUN_1001a110  (189 bytes)
 * undefined4 FUN_1001a110(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_10019d90
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_1001a110(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  wrect_t rc;
  
  FUN_100299b0(param_3,param_2);
  _DAT_100cf974 = FUN_10029a10();
  if ((_DAT_100cf974 & 5) != 0) {
    DAT_100cf840 = 0;
    rc.right = DAT_100cf814;
    rc.left = DAT_100cf810;
    rc.top = DAT_100cf818;
    rc.bottom = DAT_100cf81c;
    (*gEngfuncs.pfnSetCrosshair)(0,rc,0,0,0);
    return 1;
  }
  iVar1 = *(int *)((int)this + 0x1c);
  if (iVar1 != 0) {
    (*gEngfuncs.pfnSetCrosshair)
              (*(HSPRITE *)(iVar1 + 0xf8),*(wrect_t *)(iVar1 + 0xfc),0xff,0xff,0xff);
  }
  return 1;
}

/* 1001a1d0  FUN_1001a1d0  (506 bytes)
 * undefined4 FUN_1001a1d0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_10019cf0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_1001a1d0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  wrect_t rc;
  wrect_t rc_00;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  HSPRITE hspr;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  FUN_100299b0(param_3,param_2);
  uVar3 = FUN_10029a10();
  iVar4 = FUN_100299d0();
  uVar5 = FUN_100299d0();
  if (iVar4 < 1) {
    rc.right = DAT_100cf824;
    rc.left = DAT_100cf820;
    rc.top = DAT_100cf828;
    rc.bottom = DAT_100cf82c;
    (*gEngfuncs.pfnSetCrosshair)(0,rc,0,0,0);
    return 0;
  }
  if ((iVar4 == -1) && (uVar5 == 0xffffffff)) {
    _DAT_100d5b1c = 1;
    DAT_100cf840 = 0;
    return 1;
  }
  _DAT_100d5b1c = 0;
  iVar1 = iVar4 * 0x148;
  if (&DAT_100ccdf8 + iVar4 * 0x52 == (undefined4 *)0x0) {
    return 0;
  }
  if ((int)uVar5 < -1) {
    uVar5 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
  }
  *(uint *)(&DAT_100cce98 + iVar1) = uVar5;
  if (uVar3 == 0) {
    return 1;
  }
  *(undefined4 **)((int)this + 0x1c) = &DAT_100ccdf8 + iVar4 * 0x52;
  if ((DAT_100cf974 & 5) != 0) goto LAB_1001a3af;
  if (DAT_100cf978 < 0x5a) {
    if (((int)uVar3 >= 2) && (hspr = *(HSPRITE *)(&DAT_100ccf2c + iVar1), hspr != 0)) {
      puVar2 = &DAT_100ccf30;
      goto LAB_1001a352;
    }
    uVar7 = *(undefined4 *)(&DAT_100ccf1c + iVar1);
    uVar8 = *(undefined4 *)(&DAT_100ccf20 + iVar1);
    uVar9 = *(undefined4 *)(&DAT_100ccf24 + iVar1);
    iVar4 = *(int *)(&DAT_100ccf28 + iVar1);
    hspr = *(HSPRITE *)(&DAT_100ccf18 + iVar1);
  }
  else if (((int)uVar3 < 2) || (hspr = *(HSPRITE *)(&DAT_100ccf04 + iVar1), hspr == 0)) {
    uVar7 = *(undefined4 *)(&DAT_100ccef4 + iVar1);
    uVar8 = *(undefined4 *)(&DAT_100ccef8 + iVar1);
    uVar9 = *(undefined4 *)(&DAT_100ccefc + iVar1);
    iVar4 = *(int *)(&DAT_100ccf00 + iVar1);
    hspr = *(HSPRITE *)(&DAT_100ccef0 + iVar1);
  }
  else {
    puVar2 = &DAT_100ccf08;
LAB_1001a352:
    puVar6 = (undefined4 *)(puVar2 + iVar1);
    uVar7 = *puVar6;
    uVar8 = puVar6[1];
    uVar9 = puVar6[2];
    iVar4 = puVar6[3];
  }
  rc_00.right = uVar8;
  rc_00.left = uVar7;
  rc_00.top = uVar9;
  rc_00.bottom = iVar4;
  (*gEngfuncs.pfnSetCrosshair)(hspr,rc_00,0xff,0xff,0xff);
LAB_1001a3af:
  *(undefined4 *)((int)this + 0x14) = 0x43480000;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return 1;
}

/* 1001a3d0  FUN_1001a3d0  (270 bytes)
 * undefined4 FUN_1001a3d0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_10019d10
 */
undefined4 FUN_1001a3d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char local_148 [128];
  int local_c8;
  int local_c4;
  uint local_c0;
  uint local_bc;
  int local_b8;
  int local_b4;
  uint local_b0;
  int local_ac;
  undefined4 local_a8;
  
  FUN_100299b0(param_3,param_2);
  pcVar2 = FUN_10029b00();
  uVar4 = 0xffffffff;
  do {
    pcVar7 = pcVar2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar2 = pcVar7 + -uVar4;
  pcVar7 = local_148;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar7 = pcVar7 + 1;
  }
  local_c8 = FUN_100299d0();
  local_c0 = FUN_10029a10();
  if (local_c0 == 0xff) {
    local_c0 = 0xffffffff;
  }
  local_c4 = FUN_100299d0();
  local_bc = FUN_10029a10();
  if (local_bc == 0xff) {
    local_bc = 0xffffffff;
  }
  local_b8 = FUN_100299d0();
  local_b4 = FUN_100299d0();
  iVar3 = FUN_100299d0();
  local_ac = iVar3;
  local_b0 = FUN_10029a10();
  local_a8 = 0;
  pcVar2 = local_148;
  puVar8 = &DAT_100ccdf8 + iVar3 * 0x52;
  for (iVar6 = 0x52; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar8 = puVar8 + 1;
  }
  FUN_100197c0((int)(&DAT_100ccdf8 + iVar3 * 0x52));
  return 1;
}

/* 1001a4e0  FUN_1001a4e0  (57 bytes)
 * undefined FUN_1001a4e0(void)
 * called by: FUN_10019dd0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001a4e0(void)

{
  if (DAT_100cf840 != 0) {
    _DAT_100cf834 = DAT_100cf840;
    DAT_100cf840 = 0;
    (*gEngfuncs.pfnPlaySoundByName)(s_common_wpn_hudoff_wav_10093114,1.0);
    return;
  }
  (*gEngfuncs.pfnClientCmd)(s_escape_1009310c);
  return;
}

/* 1001a520  FUN_1001a520  (119 bytes)
 * byte.conflict * FUN_1001a520(byte.conflict * param_1, byte.conflict * param_2, int param_3, int param_4)
 * called by: FUN_100197c0
 */
byte_conflict * __cdecl
FUN_1001a520(byte_conflict *param_1,byte_conflict *param_2,int param_3,int param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  if (param_1 != (byte_conflict *)0x0) {
    while (param_4 != 0) {
      param_4 = param_4 + -1;
      pbVar2 = param_2;
      pbVar4 = param_1;
      do {
        bVar1 = *pbVar2;
        bVar5 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_1001a565:
          iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
          goto LAB_1001a56a;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar5 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_1001a565;
        pbVar2 = pbVar2 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_1001a56a:
      if ((iVar3 == 0) && (*(int *)(param_1 + 0x84) == param_3)) {
        return param_1;
      }
      param_1 = param_1 + 0x98;
    }
  }
  return (byte_conflict *)0x0;
}

/* 1001a5a0  FUN_1001a5a0  (26 bytes)
 * undefined FUN_1001a5a0()
 */
void FUN_1001a5a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1001a690(&DAT_100cfee0,param_1,param_2,param_3);
  return;
}

/* 1001a5c0  FUN_1001a5c0  (26 bytes)
 * undefined FUN_1001a5c0()
 */
void FUN_1001a5c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1001a650(&DAT_100cfee0,param_1,param_2,param_3);
  return;
}

/* 1001a5e0  FUN_1001a5e0  (85 bytes)
 * undefined FUN_1001a5e0()
 */
undefined4 __fastcall FUN_1001a5e0(int *param_1)

{
  (*gEngfuncs.pfnHookUserMsg)(s_SecAmmoVal_10093138,FUN_1001a5a0);
  (*gEngfuncs.pfnHookUserMsg)(s_SecAmmoIcon_1009312c,FUN_1001a5c0);
  FUN_10020a40(&DAT_100cf920,(int)param_1);
  param_1[5] = 0;
  param_1[6] = -1;
  param_1[7] = -1;
  param_1[8] = -1;
  param_1[9] = -1;
  (**(code **)(*param_1 + 0x14))();
  return 1;
}

/* 1001a640  FUN_1001a640  (8 bytes)
 * undefined FUN_1001a640()
 */
void __fastcall FUN_1001a640(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}

/* 1001a650  FUN_1001a650  (49 bytes)
 * undefined4 FUN_1001a650(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_1001a5c0
 */
undefined4 __thiscall
FUN_1001a650(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  
  FUN_100299b0(param_3,param_2);
  pcVar1 = FUN_10029b00();
  iVar2 = FUN_10020670(&DAT_100cf920,pcVar1);
  *(int *)((int)this + 0x14) = iVar2;
  return 1;
}

/* 1001a690  FUN_1001a690  (128 bytes)
 * undefined4 FUN_1001a690(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_1001a5a0
 */
undefined4 __thiscall
FUN_1001a690(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  if ((-1 < (int)uVar1) && ((int)uVar1 < 4)) {
    uVar2 = FUN_10029a10();
    *(uint *)((int)this + uVar1 * 4 + 0x18) = uVar2;
    uVar1 = *(uint *)((int)this + 0x10);
    iVar5 = 0;
    *(uint *)((int)this + 0x10) = uVar1 | 1;
    puVar3 = (uint *)((int)this + 0x18);
    iVar4 = 4;
    do {
      uVar2 = *puVar3;
      puVar3 = puVar3 + 1;
      iVar5 = iVar5 + (uVar2 & ((int)uVar2 < 0) - 1);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (iVar5 == 0) {
      *(uint *)((int)this + 0x10) = uVar1 & 0xfffffffe;
      return 1;
    }
    *(undefined4 *)((int)this + 0x28) = 0x43480000;
  }
  return 1;
}

