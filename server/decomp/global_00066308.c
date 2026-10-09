/* ts_i386.so - global_00066308 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 00066308  _init  (24 bytes)
 * int _init(EVP_PKEY_CTX * ctx)
 */
int __regparm3 _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  call_gmon_start();
  frame_dummy();
  iVar1 = __do_global_ctors_aux();
  return iVar1;
}

/* 0006ac60  call_gmon_start  (34 bytes)
 * undefined call_gmon_start(void)
 * called by: _init
 */
void processEntry call_gmon_start(void)

{
  __gmon_start__();
  return;
}

/* 0006ac90  gcc2_compiled.  (4 bytes)
 * undefined gcc2_compiled.(void)
 * called by: __do_global_dtors_aux, frame_dummy
 */
void gcc2_compiled_(void)

{
  return;
}

/* 0006ac94  __do_global_dtors_aux  (145 bytes)
 * undefined __do_global_dtors_aux(void)
 * called by: _fini
 */
void __do_global_dtors_aux(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBX;
  
  gcc2_compiled_();
  if (*(int *)(unaff_EBX + 0xa6368) == 0) {
    if (*(int *)("Pistols " + unaff_EBX) != 0) {
      __cxa_finalize(*(undefined4 *)(unaff_EBX + 0xa6360));
    }
    piVar1 = *(int **)(unaff_EBX + 0xa6364);
    iVar2 = *piVar1;
    while (iVar2 != 0) {
      *(int **)(unaff_EBX + 0xa6364) = piVar1 + 1;
      (*(code *)*piVar1)();
      piVar1 = *(int **)(unaff_EBX + 0xa6364);
      iVar2 = *piVar1;
    }
    if (*(int *)("m_iszSpriteFlash" + unaff_EBX + 0xd) != 0) {
      __deregister_frame_info((void *)(unaff_EBX + 0xba2e8));
    }
    *(undefined4 *)(unaff_EBX + 0xa6368) = 1;
  }
  return;
}

/* 0006ad30  fini_dummy  (10 bytes)
 * undefined fini_dummy(void)
 */
void fini_dummy(void)

{
  return;
}

/* 0006ad40  frame_dummy  (60 bytes)
 * undefined frame_dummy(void)
 * called by: _init
 */
void frame_dummy(void)

{
  int unaff_EBX;
  
  gcc2_compiled_();
  if (*(int *)("cycler" + unaff_EBX + 3) != 0) {
    __register_frame_info(unaff_EBX + 0xba23c,(undefined4 *)(&UNK_0010d1f4 + unaff_EBX));
  }
  return;
}

/* 0006ad80  init_dummy  (10 bytes)
 * undefined init_dummy(void)
 */
void init_dummy(void)

{
  return;
}

/* 0006ad90  Write_ak47  (629 bytes)
 * undefined Write_ak47(undefined1 * param_1)
 */
/* Write_ak47(s_weapon_info *) */

void Write_ak47(undefined1 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 *puVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x1e;
  param_1[8] = 6;
  *(undefined4 *)(param_1 + 0xc) = 3;
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
  *(undefined4 *)(param_1 + 0x44) = 0x37344b41;
  param_1[0x48] = 0;
  param_1[0x84] = 4;
  param_1[0x85] = 3;
  pcVar3 = "sprites/weapons/ak47.spr";
  pcVar4 = param_1 + 0x86;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar3;
  param_1[0xd0] = 0x28;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd8) = 3000;
  *(undefined4 *)(param_1 + 0xe0) = 8;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar3 = "models/556_shell.mdl";
  pcVar4 = param_1 + 0xe8;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar3;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 1;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  puVar2 = &DAT_00106633;
  puVar5 = (undefined4 *)(param_1 + 0x132);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = *(undefined2 *)puVar2;
  pcVar3 = "models/p_ak47.mdl";
  puVar2 = (undefined4 *)(param_1 + 0x172);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  param_1[0x1b2] = 0;
  puVar2 = &DAT_00106658;
  puVar5 = (undefined4 *)(param_1 + 0x1f2);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = *(undefined2 *)puVar2;
  pcVar3 = "twohanded";
  puVar2 = (undefined4 *)(param_1 + 0x232);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25a) = 3;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x25e) = 3;
  *(undefined2 *)(param_1 + 0x260) = 5;
  *(undefined2 *)(param_1 + 0x28c) = 4;
  *(undefined2 *)(param_1 + 0x28e) = 8;
  *(undefined2 *)(param_1 + 0x290) = 2;
  *(undefined2 *)(param_1 + 0x292) = 7;
  *(undefined2 *)(param_1 + 0x294) = 7;
  *(undefined2 *)(param_1 + 0x296) = 7;
  *(undefined2 *)(param_1 + 0x298) = 7;
  *(undefined2 *)(param_1 + 0x29a) = 6;
  pcVar3 = "weapons/ak47/fire.wav";
  puVar2 = (undefined4 *)(param_1 + 0x2c6);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  param_1[0x306] = 0;
  param_1[0x348] = 6;
  *(undefined4 *)(param_1 + 0x34c) = 0x15;
  param_1[0x350] = 1;
  *(undefined4 *)(param_1 + 0x354) = 0x20;
  *(undefined4 *)(param_1 + 0x358) = 8;
  return;
}

/* 0006b008  GetDirection  (188 bytes)
 * int GetDirection(float * param_1, int param_2, float param_3, float param_4)
 */
/* GetDirection(Vector, Vector, float, float) */

int GetDirection(float *param_1,int param_2,float param_3,float param_4)

{
  float fVar1;
  int iVar2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = *(undefined4 *)(param_2 + 4);
  local_14 = *(undefined4 *)(param_2 + 8);
  local_1c = 0;
  UTIL_MakeVectors(&local_1c);
  fVar1 = gpGlobals->v_right[2] * param_1[2] +
          gpGlobals->v_right[1] * param_1[1] + gpGlobals->v_right[0] * *param_1;
  if (-param_3 <= fVar1) {
    if (fVar1 <= param_3) {
      iVar2 = ~-(uint)(gpGlobals->v_forward[2] * param_1[2] +
                       gpGlobals->v_forward[1] * param_1[1] + gpGlobals->v_forward[0] * *param_1 <
                      -param_4) + 3;
    }
    else {
      iVar2 = 1;
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

/* 0006ddcc  Write_aug  (587 bytes)
 * undefined Write_aug(undefined1 * param_1)
 */
/* Write_aug(s_weapon_info *) */

void Write_aug(undefined1 *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
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
  pcVar2 = "STEYR-AUG";
  puVar3 = (undefined4 *)(param_1 + 0x44);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  param_1[0x84] = 4;
  param_1[0x85] = 4;
  pcVar2 = "sprites/weapons/aug.spr";
  puVar3 = (undefined4 *)(param_1 + 0x86);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  param_1[0xd0] = 0x1e;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd8) = 5000;
  *(undefined4 *)(param_1 + 0xe0) = 0xb;
  *(undefined4 *)(param_1 + 0xe4) = 8;
  pcVar2 = "models/556_shell.mdl";
  pcVar4 = param_1 + 0xe8;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar2 = "models/v_aug.mdl";
  pcVar4 = param_1 + 0x132;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "models/p_aug.mdl";
  pcVar4 = param_1 + 0x172;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "models/p_aug_sil.mdl";
  pcVar4 = param_1 + 0x1b2;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "models/w_aug.mdl";
  pcVar4 = param_1 + 0x1f2;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "twohanded";
  puVar3 = (undefined4 *)(param_1 + 0x232);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 3;
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined2 *)(param_1 + 600) = 2;
  *(undefined2 *)(param_1 + 0x25a) = 2;
  *(undefined2 *)(param_1 + 0x25c) = 2;
  *(undefined2 *)(param_1 + 0x25e) = 2;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28a) = 4;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar2 = "weapons/aug/aug-fire.wav";
  pcVar4 = param_1 + 0x2c6;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "weapons/aug/aug-fire-sil.wav";
  pcVar4 = param_1 + 0x306;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  param_1[0x348] = 6;
  *(undefined4 *)(param_1 + 0x34c) = 0x12;
  param_1[0x350] = 1;
  *(undefined4 *)(param_1 + 0x354) = 0x20;
  *(undefined4 *)(param_1 + 0x358) = 8;
  return;
}

/* 0006e018  Write_barrett  (566 bytes)
 * undefined Write_barrett(undefined1 * param_1)
 */
/* Write_barrett(s_weapon_info *) */

void Write_barrett(undefined1 *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
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
  pcVar2 = "Barrett M82A1";
  puVar3 = (undefined4 *)(param_1 + 0x44);
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  param_1[0x84] = 4;
  param_1[0x85] = 5;
  pcVar2 = "sprites/weapons/m82.spr";
  puVar3 = (undefined4 *)(param_1 + 0x86);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  param_1[0xd0] = 0x46;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0xd8) = 9000;
  *(undefined4 *)(param_1 + 0xe0) = 10;
  *(undefined4 *)(param_1 + 0xe4) = 8;
  pcVar2 = "models/556_shell.mdl";
  pcVar4 = param_1 + 0xe8;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar2 = "models/v_m82.mdl";
  pcVar4 = param_1 + 0x132;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "models/p_m82.mdl";
  pcVar4 = param_1 + 0x172;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  param_1[0x1b2] = 0;
  pcVar2 = "models/w_m82.mdl";
  pcVar4 = param_1 + 0x1f2;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "twohanded";
  puVar3 = (undefined4 *)(param_1 + 0x232);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25c) = 4;
  *(undefined2 *)(param_1 + 0x25e) = 3;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28a) = 5;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar2 = "weapons/barrett/fire.wav";
  pcVar4 = param_1 + 0x2c6;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  param_1[0x306] = 0;
  param_1[0x348] = 7;
  *(undefined4 *)(param_1 + 0x34c) = 0x28;
  param_1[0x350] = 2;
  *(undefined4 *)(param_1 + 0x354) = 0x30;
  *(undefined4 *)(param_1 + 0x358) = 0x10;
  return;
}

/* 0006e250  Write_benellim3  (598 bytes)
 * undefined Write_benellim3(undefined1 * param_1)
 */
/* Write_benellim3(s_weapon_info *) */

void Write_benellim3(undefined1 *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  
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
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 8;
  *(undefined4 *)(param_1 + 0x20) = 1;
  pcVar2 = "Benelli M3";
  puVar3 = (undefined4 *)(param_1 + 0x44);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar3 + 2) = pcVar2[2];
  param_1[0x84] = 4;
  param_1[0x85] = 1;
  pcVar2 = "sprites/weapons/m3.spr";
  puVar3 = (undefined4 *)(param_1 + 0x86);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar3 + 2) = pcVar2[2];
  param_1[0xd0] = 0x28;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd8) = 3000;
  *(undefined4 *)(param_1 + 0xe0) = 0xe;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar2 = "models/shotgun_shell_blue.mdl";
  puVar3 = (undefined4 *)(param_1 + 0xe8);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  *(undefined2 *)(param_1 + 300) = 2;
  *(undefined2 *)(param_1 + 0x12e) = 1;
  *(undefined2 *)(param_1 + 0x130) = 2;
  pcVar2 = "models/v_m3.mdl";
  puVar3 = (undefined4 *)(param_1 + 0x132);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  pcVar2 = "models/p_m3.mdl";
  puVar3 = (undefined4 *)(param_1 + 0x172);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  param_1[0x1b2] = 0;
  pcVar2 = "models/w_m3.mdl";
  puVar3 = (undefined4 *)(param_1 + 0x1f2);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  pcVar2 = "twohanded";
  puVar3 = (undefined4 *)(param_1 + 0x232);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
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
  *(undefined2 *)(param_1 + 0x28a) = 10;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar2 = "weapons/m3/m3-fire.wav";
  puVar3 = (undefined4 *)(param_1 + 0x2c6);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar3 + 2) = pcVar2[2];
  pcVar2 = "weapons/m3/m3-pump.wav";
  puVar3 = (undefined4 *)(param_1 + 0x306);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar3 + 2) = pcVar2[2];
  param_1[0x348] = 1;
  *(undefined4 *)(param_1 + 0x34c) = 0x1c;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0x20;
  *(undefined4 *)(param_1 + 0x358) = 10;
  return;
}

/* 0006e4a8  Write_beretta  (570 bytes)
 * undefined Write_beretta(undefined1 * param_1)
 */
/* Write_beretta(s_weapon_info *) */

void Write_beretta(undefined1 *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
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
  *(undefined4 *)(param_1 + 0x28) = 0x3c75c28f;
  *(undefined4 *)(param_1 + 0x30) = 0x40400000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar2 = "Beretta 92F";
  puVar3 = (undefined4 *)(param_1 + 0x44);
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  param_1[0x84] = 2;
  param_1[0x85] = 9;
  pcVar2 = "sprites/weapons/beretta.spr";
  puVar3 = (undefined4 *)(param_1 + 0x86);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  param_1[0xd0] = 10;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 900;
  *(undefined4 *)(param_1 + 0xe0) = 7;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar2 = "models/9mm_shell.mdl";
  pcVar4 = param_1 + 0xe8;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  *(undefined2 *)(param_1 + 300) = 2;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 2;
  pcVar2 = "models/v_beretta.mdl";
  pcVar4 = param_1 + 0x132;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "models/p_beretta.mdl";
  pcVar4 = param_1 + 0x172;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "models/p_beretta_sil.mdl";
  pcVar4 = param_1 + 0x1b2;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "models/w_berettas.mdl";
  puVar3 = (undefined4 *)(param_1 + 0x1f2);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  pcVar2 = "onehanded";
  puVar3 = (undefined4 *)(param_1 + 0x232);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 5;
  *(undefined2 *)(param_1 + 0x256) = 4;
  *(undefined2 *)(param_1 + 600) = 1;
  *(undefined2 *)(param_1 + 0x25a) = 2;
  *(undefined2 *)(param_1 + 0x25c) = 1;
  *(undefined2 *)(param_1 + 0x25e) = 3;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar2 = "weapons/beretta/fire.wav";
  pcVar4 = param_1 + 0x2c6;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "weapons/beretta/fire-sil.wav";
  pcVar4 = param_1 + 0x306;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  *(undefined4 *)(param_1 + 0x34c) = 6;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0x12;
  *(undefined4 *)(param_1 + 0x358) = 5;
  return;
}

/* 0006e6e4  Write_beretta_akimbo  (728 bytes)
 * undefined Write_beretta_akimbo(undefined1 * param_1)
 */
/* Write_beretta_akimbo(s_weapon_info *) */

void Write_beretta_akimbo(undefined1 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x1e;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0xc) = 0x12;
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
  pcVar3 = "Akimbo Berettas";
  puVar2 = (undefined4 *)(param_1 + 0x44);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  param_1[0x84] = 5;
  param_1[0x85] = 1;
  pcVar3 = "sprites/weapons/berettas.spr";
  pcVar5 = param_1 + 0x86;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  *pcVar5 = *pcVar3;
  param_1[0xd0] = 10;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 900;
  *(undefined4 *)(param_1 + 0xe0) = 7;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar3 = "models/9mm_shell.mdl";
  pcVar5 = param_1 + 0xe8;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  *pcVar5 = *pcVar3;
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  *(undefined2 *)(param_1 + 300) = 2;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 2;
  pcVar3 = "models/v_berettas.mdl";
  puVar2 = (undefined4 *)(param_1 + 0x132);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  pcVar3 = "models/p_berettas.mdl";
  puVar2 = (undefined4 *)(param_1 + 0x172);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  pcVar3 = "models/p_berettas_sil.mdl";
  puVar2 = (undefined4 *)(param_1 + 0x1b2);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  pcVar3 = "models/w_berettas.mdl";
  puVar2 = (undefined4 *)(param_1 + 0x1f2);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  puVar2 = &DAT_00106777;
  puVar4 = (undefined4 *)(param_1 + 0x232);
  for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar2;
  *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar2 + 2);
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 0x27e) = 3;
  *(undefined2 *)(param_1 + 0x282) = 4;
  *(undefined2 *)(param_1 + 0x280) = 5;
  *(undefined2 *)(param_1 + 0x284) = 6;
  *(undefined2 *)(param_1 + 0x286) = 7;
  *(undefined2 *)(param_1 + 0x288) = 8;
  *(undefined2 *)(param_1 + 600) = 0x1a;
  *(undefined2 *)(param_1 + 0x25a) = 0x1a;
  *(undefined2 *)(param_1 + 0x25c) = 0x1a;
  *(undefined2 *)(param_1 + 0x260) = 0xe;
  *(undefined2 *)(param_1 + 0x28c) = 0xd;
  *(undefined2 *)(param_1 + 0x28e) = 0x1c;
  *(undefined2 *)(param_1 + 0x290) = 2;
  *(undefined2 *)(param_1 + 0x2b8) = 0x10;
  *(undefined2 *)(param_1 + 700) = 0x11;
  *(undefined2 *)(param_1 + 0x2ba) = 0x12;
  *(undefined2 *)(param_1 + 0x2be) = 0x13;
  *(undefined2 *)(param_1 + 0x2c0) = 0x14;
  *(undefined2 *)(param_1 + 0x2c2) = 0x15;
  *(undefined2 *)(param_1 + 0x292) = 0xd;
  *(undefined2 *)(param_1 + 0x294) = 0xd;
  *(undefined2 *)(param_1 + 0x296) = 0xd;
  *(undefined2 *)(param_1 + 0x29a) = 0xf;
  pcVar3 = "weapons/beretta/fire.wav";
  pcVar5 = param_1 + 0x2c6;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  *pcVar5 = *pcVar3;
  pcVar3 = "weapons/beretta/fire-sil.wav";
  pcVar5 = param_1 + 0x306;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  *pcVar5 = *pcVar3;
  *(undefined4 *)(param_1 + 0x34c) = 6;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0x12;
  *(undefined4 *)(param_1 + 0x358) = 5;
  return;
}

/* 0006e9bc  Write_bull  (548 bytes)
 * undefined Write_bull(undefined1 * param_1)
 */
/* Write_bull(s_weapon_info *) */

void Write_bull(undefined1 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
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
  pcVar2 = "Raging Bull";
  puVar4 = (undefined4 *)(param_1 + 0x44);
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  param_1[0x84] = 2;
  param_1[0x85] = 7;
  pcVar2 = "sprites/weapons/bull.spr";
  pcVar3 = param_1 + 0x86;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  *pcVar3 = *pcVar2;
  param_1[0xd0] = 0xf;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x834;
  *(undefined4 *)(param_1 + 0xe0) = 10;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  param_1[0xe8] = 0;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 1;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar2 = "models/v_bull.mdl";
  puVar4 = (undefined4 *)(param_1 + 0x132);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  pcVar2 = "models/p_bull.mdl";
  puVar4 = (undefined4 *)(param_1 + 0x172);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  param_1[0x1b2] = 0;
  pcVar2 = "models/w_bull.mdl";
  puVar4 = (undefined4 *)(param_1 + 0x1f2);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  pcVar2 = "onehanded";
  puVar4 = (undefined4 *)(param_1 + 0x232);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 4;
  *(undefined2 *)(param_1 + 0x256) = 3;
  *(undefined2 *)(param_1 + 600) = 1;
  *(undefined2 *)(param_1 + 0x25a) = 2;
  *(undefined2 *)(param_1 + 0x25c) = 1;
  *(undefined2 *)(param_1 + 0x25e) = 2;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar2 = "weapons/bull/fire01.wav";
  puVar4 = (undefined4 *)(param_1 + 0x2c6);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  param_1[0x306] = 0;
  param_1[0x348] = 8;
  *(undefined4 *)(param_1 + 0x34c) = 6;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0x14;
  *(undefined4 *)(param_1 + 0x358) = 8;
  return;
}

/* 0006f4f4  UTIL_TraceLine_Expanded  (354 bytes)
 * undefined UTIL_TraceLine_Expanded(undefined4 param_1, undefined4 param_2, int param_3, undefined4 param_4, undefined4 param_5)
 */
/* UTIL_TraceLine_Expanded(Vector const &, Vector const &, IGNORE_MONSTERS, edict_s *, TraceResult
   *) */

void UTIL_TraceLine_Expanded
               (undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
               undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_18;
  int local_14;
  
  iVar3 = 1;
  if (0 < gpGlobals->maxClients) {
    local_18 = 0xc;
    do {
      piVar1 = (int *)UTIL_PlayerByIndex(iVar3);
      if (piVar1 != (int *)0x0) {
        puVar4 = (undefined4 *)(*piVar1 + 0xd0);
        puVar5 = (undefined4 *)(vecBoxes + local_18);
        for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        *(float *)(*piVar1 + 0xd0) = *(float *)(*piVar1 + 0xd0) + 32.0;
        *(float *)(*piVar1 + 0xd4) = *(float *)(*piVar1 + 0xd4) + 32.0;
        *(float *)(*piVar1 + 0xd8) = *(float *)(*piVar1 + 0xd8) + 32.0;
        *(float *)(*piVar1 + 0xc4) = *(float *)(*piVar1 + 0xc4) - 32.0;
        *(float *)(*piVar1 + 200) = *(float *)(*piVar1 + 200) - 32.0;
        *(float *)(*piVar1 + 0xcc) = *(float *)(*piVar1 + 0xcc) - 32.0;
      }
      local_18 = local_18 + 0xc;
      iVar3 = iVar3 + 1;
    } while (iVar3 <= gpGlobals->maxClients);
  }
  UTIL_TraceLine(param_1,param_2,param_3,param_4,param_5);
  iVar3 = 1;
  if (0 < gpGlobals->maxClients) {
    local_14 = 0xc;
    do {
      piVar1 = (int *)UTIL_PlayerByIndex(iVar3);
      if (piVar1 != (int *)0x0) {
        puVar4 = (undefined4 *)(vecBoxes + local_14);
        puVar5 = (undefined4 *)(*piVar1 + 0xd0);
        for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      local_14 = local_14 + 0xc;
      iVar3 = iVar3 + 1;
    } while (iVar3 <= gpGlobals->maxClients);
  }
  return;
}

/* 0006f658  __static_initialization_and_destruction_0  (46 bytes)
 * undefined __static_initialization_and_destruction_0(int param_1, int param_2)
 * called by: global.constructors.keyed.to.glast_weaponid
 */
void __static_initialization_and_destruction_0(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 == 0xffff) && (param_1 == 1)) {
    iVar1 = 0x1f;
    do {
      iVar1 = iVar1 + -0x10;
    } while (iVar1 != -1);
  }
  return;
}

/* 0006f688  global.constructors.keyed.to.glast_weaponid  (19 bytes)
 * undefined global.constructors.keyed.to.glast_weaponid(void)
 */
/* global constructors keyed to glast_weaponid */

void global_constructors_keyed_to_glast_weaponid(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

/* 00070210  deadcorpse  (33 bytes)
 * undefined deadcorpse(uint param_1)
 */
void deadcorpse(uint param_1)

{
  GetClassPtr<CTSDeadCorpse>(param_1);
  return;
}

/* 00070234  TSCreateDeadCorpse  (472 bytes)
 * undefined TSCreateDeadCorpse(int * param_1, float param_2)
 */
/* TSCreateDeadCorpse(CBasePlayer *, float) */

void TSCreateDeadCorpse(int *param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (-1 < *(char *)(*param_1 + 0x118)) {
    piVar1 = CBaseEntity::Create(0x106e38,(undefined4 *)(*param_1 + 8),
                                 (undefined4 *)(*param_1 + 0x50),0);
    piVar1[0x19] = (int)(param_2 + gpGlobals->time);
    piVar1[0x1a] = (int)param_2;
    puVar4 = (undefined4 *)(*param_1 + 0x50);
    puVar5 = (undefined4 *)(*piVar1 + 0x50);
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)(*piVar1 + 0xb8) = *(undefined4 *)(*param_1 + 0xb8);
    *(undefined4 *)(*piVar1 + 0xb4) = *(undefined4 *)(*param_1 + 0xb4);
    *(undefined4 *)(*piVar1 + 0x130) = *(undefined4 *)(*param_1 + 0x130);
    *(undefined4 *)(*piVar1 + 0x1a8) = *(undefined4 *)(*param_1 + 0x1a8);
    *(undefined4 *)(*piVar1 + 0x108) = 6;
    puVar4 = (undefined4 *)(*param_1 + 0x20);
    puVar5 = (undefined4 *)(*piVar1 + 0x20);
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)(*piVar1 + 0x1a4) = 0;
    *(undefined4 *)(*piVar1 + 0x170) = *(undefined4 *)(*param_1 + 0x170);
    *(undefined4 *)(*piVar1 + 0x148) = 1;
    iVar3 = *piVar1;
    iVar2 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*param_1 + 0x208));
    *(float *)(iVar3 + 0x150) = (float)iVar2;
    *(undefined4 *)(*piVar1 + 0x154) = 0;
    *(undefined4 *)(*piVar1 + 0x158) = 0;
    *(undefined4 *)(*piVar1 + 0x15c) = 0x11;
    *(undefined4 *)(*piVar1 + 0x14c) = 0x437f0000;
    *(uint *)(*piVar1 + 0x118) = *(uint *)(*param_1 + 0x118) | 0x20;
    *(undefined4 *)(*piVar1 + 0x128) = *(undefined4 *)(*param_1 + 0x128);
    *(undefined4 *)(*piVar1 + 0x134) = *(undefined4 *)(*param_1 + 0x134);
    UTIL_SetOrigin(*piVar1,*param_1 + 8);
    UTIL_SetSize(*piVar1,*param_1 + 0xdc,*param_1 + 0xe8);
  }
  return;
}

/* 00070504  GetClassPtr<CTSDeadCorpse>  (131 bytes)
 * CTSDeadCorpse * GetClassPtr<CTSDeadCorpse>(uint param_1)
 */
/* CTSDeadCorpse * GetClassPtr<CTSDeadCorpse>(CTSDeadCorpse *) */

CTSDeadCorpse * GetClassPtr<CTSDeadCorpse>(uint param_1)

{
  edict_t *peVar1;
  CTSDeadCorpse *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSDeadCorpse *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSDeadCorpse *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x6c);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSDeadCorpse_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 00070588  CTSDeadCorpse_type_info_function  (70 bytes)
 * undefined4 * CTSDeadCorpse_type_info_function(void)
 */
/* CTSDeadCorpse type_info function */

undefined4 * CTSDeadCorpse_type_info_function(void)

{
  if (CTSDeadCorpse_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CTSDeadCorpse_type_info_node,"13CTSDeadCorpse",&CBaseEntity_type_info_node);
  }
  return &CTSDeadCorpse_type_info_node;
}

/* 000705d8  Write_desert  (658 bytes)
 * undefined Write_desert(undefined1 * param_1)
 */
/* Write_desert(s_weapon_info *) */

void Write_desert(undefined1 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 7;
  param_1[8] = 5;
  *(undefined4 *)(param_1 + 0xc) = 2;
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
  pcVar2 = "Desert Eagle";
  pcVar3 = param_1 + 0x44;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  *pcVar3 = *pcVar2;
  param_1[0x84] = 2;
  param_1[0x85] = 3;
  pcVar2 = "sprites/weapons/desert.spr";
  puVar4 = (undefined4 *)(param_1 + 0x86);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar4 + 2) = pcVar2[2];
  param_1[0xd0] = 0xf;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x41a;
  *(undefined4 *)(param_1 + 0xe0) = 0xb;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar2 = "models/9mm_shell.mdl";
  pcVar3 = param_1 + 0xe8;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  *pcVar3 = *pcVar2;
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 2;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar2 = "models/v_desert.mdl";
  puVar4 = (undefined4 *)(param_1 + 0x132);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  pcVar2 = "models/p_desert.mdl";
  puVar4 = (undefined4 *)(param_1 + 0x172);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  pcVar2 = "models/p_desert_sil.mdl";
  puVar4 = (undefined4 *)(param_1 + 0x1b2);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  pcVar2 = "models/w_desert.mdl";
  puVar4 = (undefined4 *)(param_1 + 0x1f2);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  pcVar2 = "onehanded";
  puVar4 = (undefined4 *)(param_1 + 0x232);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x25e) = 5;
  *(undefined2 *)(param_1 + 0x260) = 9;
  *(undefined2 *)(param_1 + 0x28a) = 0xb;
  *(undefined2 *)(param_1 + 0x28c) = 6;
  *(undefined2 *)(param_1 + 0x28e) = 0xc;
  *(undefined2 *)(param_1 + 0x290) = 0;
  *(undefined2 *)(param_1 + 0x292) = 7;
  *(undefined2 *)(param_1 + 0x294) = 7;
  *(undefined2 *)(param_1 + 0x296) = 7;
  *(undefined2 *)(param_1 + 0x298) = 8;
  *(undefined2 *)(param_1 + 0x29a) = 10;
  *(undefined2 *)(param_1 + 0x2c4) = 0xb;
  pcVar2 = "weapons/deagle/fire.wav";
  puVar4 = (undefined4 *)(param_1 + 0x2c6);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  pcVar2 = "weapons/deagle/fire-sil.wav";
  puVar4 = (undefined4 *)(param_1 + 0x306);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  param_1[0x348] = 8;
  *(undefined4 *)(param_1 + 0x34c) = 6;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0x14;
  *(undefined4 *)(param_1 + 0x358) = 8;
  return;
}

/* 0007086c  ts_trigger  (33 bytes)
 * undefined ts_trigger(uint param_1)
 */
void ts_trigger(uint param_1)

{
  GetClassPtr<CTSTrigger>(param_1);
  return;
}

/* 00070cb0  ts_slowmotion  (33 bytes)
 * undefined ts_slowmotion(uint param_1)
 */
void ts_slowmotion(uint param_1)

{
  GetClassPtr<CTSSlowMotion>(param_1);
  return;
}

/* 000714b4  ts_slowmotionpoint  (33 bytes)
 * undefined ts_slowmotionpoint(uint param_1)
 */
void ts_slowmotionpoint(uint param_1)

{
  GetClassPtr<CTSSlowMotionPoint>(param_1);
  return;
}

/* 000718f4  ts_dmhill  (33 bytes)
 * undefined ts_dmhill(uint param_1)
 */
void ts_dmhill(uint param_1)

{
  GetClassPtr<CTSDMHill>(param_1);
  return;
}

/* 000722c4  ts_model  (33 bytes)
 * undefined ts_model(uint param_1)
 */
void ts_model(uint param_1)

{
  GetClassPtr<CTSModel>(param_1);
  return;
}

/* 00072464  ts_mapglobals  (33 bytes)
 * undefined ts_mapglobals(uint param_1)
 */
void ts_mapglobals(uint param_1)

{
  GetClassPtr<CTSMapGlobals>(param_1);
  return;
}

/* 0007269c  ts_sellzone  (33 bytes)
 * undefined ts_sellzone(uint param_1)
 */
void ts_sellzone(uint param_1)

{
  GetClassPtr<CTSSellZone>(param_1);
  return;
}

/* 0007299c  ts_playeramount  (33 bytes)
 * undefined ts_playeramount(uint param_1)
 */
void ts_playeramount(uint param_1)

{
  GetClassPtr<CTSPlayerAmount>(param_1);
  return;
}

/* 00072d2c  ts_timer  (33 bytes)
 * undefined ts_timer(uint param_1)
 */
void ts_timer(uint param_1)

{
  GetClassPtr<CTSTimer>(param_1);
  return;
}

/* 00072f90  ts_customtarget  (33 bytes)
 * undefined ts_customtarget(uint param_1)
 */
void ts_customtarget(uint param_1)

{
  GetClassPtr<CTSCustomTarget>(param_1);
  return;
}

/* 00073330  GetClassPtr<CTSTrigger>  (170 bytes)
 * CTSTrigger * GetClassPtr<CTSTrigger>(uint param_1)
 */
/* CTSTrigger * GetClassPtr<CTSTrigger>(CTSTrigger *) */

CTSTrigger * GetClassPtr<CTSTrigger>(uint param_1)

{
  edict_t *peVar1;
  CTSTrigger *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSTrigger *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSTrigger *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x110)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CBaseTrigger_virtual_table;
    pCVar2->vtable = (void **)CTSTrigger_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000733dc  GetClassPtr<CTSSlowMotion>  (134 bytes)
 * CTSSlowMotion * GetClassPtr<CTSSlowMotion>(uint param_1)
 */
/* CTSSlowMotion * GetClassPtr<CTSSlowMotion>(CTSSlowMotion *) */

CTSSlowMotion * GetClassPtr<CTSSlowMotion>(uint param_1)

{
  edict_t *peVar1;
  CTSSlowMotion *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSSlowMotion *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSSlowMotion *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x108)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSSlowMotion_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 00073464  GetClassPtr<CTSSlowMotionPoint>  (134 bytes)
 * CTSSlowMotionPoint * GetClassPtr<CTSSlowMotionPoint>(uint param_1)
 */
/* CTSSlowMotionPoint * GetClassPtr<CTSSlowMotionPoint>(CTSSlowMotionPoint *) */

CTSSlowMotionPoint * GetClassPtr<CTSSlowMotionPoint>(uint param_1)

{
  edict_t *peVar1;
  CTSSlowMotionPoint *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSSlowMotionPoint *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSSlowMotionPoint *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0xf8);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSSlowMotionPoint_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000734ec  GetClassPtr<CTSDMHill>  (134 bytes)
 * CTSDMHill * GetClassPtr<CTSDMHill>(uint param_1)
 */
/* CTSDMHill * GetClassPtr<CTSDMHill>(CTSDMHill *) */

CTSDMHill * GetClassPtr<CTSDMHill>(uint param_1)

{
  edict_t *peVar1;
  CTSDMHill *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSDMHill *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSDMHill *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x80);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSDMHill_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 00073574  GetClassPtr<CBasePlayer>  (184 bytes)
 * CBasePlayer * GetClassPtr<CBasePlayer>(uint param_1)
 */
/* CBasePlayer * GetClassPtr<CBasePlayer>(CBasePlayer *) */

CBasePlayer * GetClassPtr<CBasePlayer>(uint param_1)

{
  edict_t *peVar1;
  CBasePlayer *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CBasePlayer *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CBasePlayer *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0xb8c)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CBaseMonster_virtual_table;
    pCVar2->vtable = (void **)CBasePlayer_virtual_table;
    CTSAnimation::CTSAnimation((CTSAnimation *)&pCVar2->field_0x28c);
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 0007362c  GetClassPtr<CTSModel>  (161 bytes)
 * CTSModel * GetClassPtr<CTSModel>(uint param_1)
 */
/* CTSModel * GetClassPtr<CTSModel>(CTSModel *) */

CTSModel * GetClassPtr<CTSModel>(uint param_1)

{
  edict_t *peVar1;
  CTSModel *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSModel *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSModel *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x104)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CTSModel_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000736d0  GetClassPtr<CTSMapGlobals>  (131 bytes)
 * CTSMapGlobals * GetClassPtr<CTSMapGlobals>(uint param_1)
 */
/* CTSMapGlobals * GetClassPtr<CTSMapGlobals>(CTSMapGlobals *) */

CTSMapGlobals * GetClassPtr<CTSMapGlobals>(uint param_1)

{
  edict_t *peVar1;
  CTSMapGlobals *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSMapGlobals *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSMapGlobals *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x6c);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSMapGlobals_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 00073754  GetClassPtr<CTSSellZone>  (131 bytes)
 * CTSSellZone * GetClassPtr<CTSSellZone>(uint param_1)
 */
/* CTSSellZone * GetClassPtr<CTSSellZone>(CTSSellZone *) */

CTSSellZone * GetClassPtr<CTSSellZone>(uint param_1)

{
  edict_t *peVar1;
  CTSSellZone *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSSellZone *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSSellZone *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x68);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSSellZone_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000737d8  GetClassPtr<CTSPlayerAmount>  (143 bytes)
 * CTSPlayerAmount * GetClassPtr<CTSPlayerAmount>(uint param_1)
 */
/* CTSPlayerAmount * GetClassPtr<CTSPlayerAmount>(CTSPlayerAmount *) */

CTSPlayerAmount * GetClassPtr<CTSPlayerAmount>(uint param_1)

{
  edict_t *peVar1;
  CTSPlayerAmount *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSPlayerAmount *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSPlayerAmount *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x13c)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CTSPlayerAmount_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 00073868  GetClassPtr<CBaseDelay>  (131 bytes)
 * CBaseDelay * GetClassPtr<CBaseDelay>(uint param_1)
 */
/* CBaseDelay * GetClassPtr<CBaseDelay>(CBaseDelay *) */

CBaseDelay * GetClassPtr<CBaseDelay>(uint param_1)

{
  edict_t *peVar1;
  CBaseDelay *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CBaseDelay *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CBaseDelay *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x6c);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000738ec  GetClassPtr<CTSTimer>  (138 bytes)
 * CTSTimer * GetClassPtr<CTSTimer>(uint param_1)
 */
/* CTSTimer * GetClassPtr<CTSTimer>(CTSTimer *) */

CTSTimer * GetClassPtr<CTSTimer>(uint param_1)

{
  edict_t *peVar1;
  CTSTimer *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSTimer *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSTimer *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x6c);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSTimer_virtual_table;
    *(undefined4 *)&pCVar2->field_0x64 = 0;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 00073978  GetClassPtr<CTSCustomTarget>  (199 bytes)
 * uint * GetClassPtr<CTSCustomTarget>(uint param_1)
 */
/* CTSCustomTarget * GetClassPtr<CTSCustomTarget>(CTSCustomTarget *) */

uint * GetClassPtr<CTSCustomTarget>(uint param_1)

{
  edict_t *peVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  puVar2 = (uint *)0x0;
  if (*(int *)(param_1 + 0x208) != 0) {
    puVar2 = *(uint **)(*(int *)(param_1 + 0x208) + 0x7c);
  }
  if (puVar2 == (uint *)0x0) {
    puVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(*(edict_t **)(param_1 + 0x208),0x878);
    puVar2[0x18] = (uint)CBaseEntity_virtual_table;
    puVar2[0x18] = (uint)CTSCustomTarget_virtual_table;
    puVar2[0x21d] = 0;
    puVar2[0x21c] = 0;
    puVar2[0x219] = 0;
    puVar4 = puVar2 + 0x19;
    for (iVar3 = 0x200; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *puVar2 = param_1;
  }
  return puVar2;
}

/* 00073a40  CTSMapGlobals_type_info_function  (70 bytes)
 * undefined4 * CTSMapGlobals_type_info_function(void)
 */
/* CTSMapGlobals type_info function */

undefined4 * CTSMapGlobals_type_info_function(void)

{
  if (CTSMapGlobals_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CTSMapGlobals_type_info_node,"13CTSMapGlobals",&CBaseEntity_type_info_node);
  }
  return &CTSMapGlobals_type_info_node;
}

/* 00073a88  CTSTrigger_type_info_function  (70 bytes)
 * undefined4 * CTSTrigger_type_info_function(void)
 */
/* CTSTrigger type_info function */

undefined4 * CTSTrigger_type_info_function(void)

{
  if (CTSTrigger_type_info_node == 0) {
    CBaseTrigger_type_info_function();
    __rtti_si(&CTSTrigger_type_info_node,"10CTSTrigger",&CBaseTrigger_type_info_node);
  }
  return &CTSTrigger_type_info_node;
}

/* 00073ad8  CTSDMHill_type_info_function  (70 bytes)
 * undefined4 * CTSDMHill_type_info_function(void)
 */
/* CTSDMHill type_info function */

undefined4 * CTSDMHill_type_info_function(void)

{
  if (CTSDMHill_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CTSDMHill_type_info_node,&DAT_001070bc,&CBaseEntity_type_info_node);
  }
  return &CTSDMHill_type_info_node;
}

/* 00073b28  CTSSlowMotion_type_info_function  (70 bytes)
 * undefined4 * CTSSlowMotion_type_info_function(void)
 */
/* CTSSlowMotion type_info function */

undefined4 * CTSSlowMotion_type_info_function(void)

{
  if (CTSSlowMotion_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CTSSlowMotion_type_info_node,"13CTSSlowMotion",&CBaseEntity_type_info_node);
  }
  return &CTSSlowMotion_type_info_node;
}

/* 00073b78  CTSSlowMotionPoint_type_info_function  (70 bytes)
 * undefined4 * CTSSlowMotionPoint_type_info_function(void)
 */
/* CTSSlowMotionPoint type_info function */

undefined4 * CTSSlowMotionPoint_type_info_function(void)

{
  if (CTSSlowMotionPoint_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CTSSlowMotionPoint_type_info_node,"18CTSSlowMotionPoint",&CBaseEntity_type_info_node)
    ;
  }
  return &CTSSlowMotionPoint_type_info_node;
}

/* 00073bc0  CTSModel_type_info_function  (70 bytes)
 * undefined4 * CTSModel_type_info_function(void)
 */
/* CTSModel type_info function */

undefined4 * CTSModel_type_info_function(void)

{
  if (CTSModel_type_info_node == 0) {
    CBaseToggle_type_info_function();
    __rtti_si(&CTSModel_type_info_node,"8CTSModel",&CBaseToggle_type_info_node);
  }
  return &CTSModel_type_info_node;
}

/* 00073c08  CTSSellZone_type_info_function  (70 bytes)
 * undefined4 * CTSSellZone_type_info_function(void)
 */
/* CTSSellZone type_info function */

undefined4 * CTSSellZone_type_info_function(void)

{
  if (CTSSellZone_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CTSSellZone_type_info_node,"11CTSSellZone",&CBaseEntity_type_info_node);
  }
  return &CTSSellZone_type_info_node;
}

/* 00073c50  CTSPlayerAmount_type_info_function  (70 bytes)
 * undefined4 * CTSPlayerAmount_type_info_function(void)
 */
/* CTSPlayerAmount type_info function */

undefined4 * CTSPlayerAmount_type_info_function(void)

{
  if (CTSPlayerAmount_type_info_node == 0) {
    CBaseDelay_type_info_function();
    __rtti_si(&CTSPlayerAmount_type_info_node,"15CTSPlayerAmount",&CBaseDelay_type_info_node);
  }
  return &CTSPlayerAmount_type_info_node;
}

/* 00073c98  CTSTimer_type_info_function  (70 bytes)
 * undefined4 * CTSTimer_type_info_function(void)
 */
/* CTSTimer type_info function */

undefined4 * CTSTimer_type_info_function(void)

{
  if (CTSTimer_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CTSTimer_type_info_node,"8CTSTimer",&CBaseEntity_type_info_node);
  }
  return &CTSTimer_type_info_node;
}

/* 00073d0c  CTSCustomTarget_type_info_function  (70 bytes)
 * undefined4 * CTSCustomTarget_type_info_function(void)
 */
/* CTSCustomTarget type_info function */

undefined4 * CTSCustomTarget_type_info_function(void)

{
  if (CTSCustomTarget_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CTSCustomTarget_type_info_node,"15CTSCustomTarget",&CBaseEntity_type_info_node);
  }
  return &CTSCustomTarget_type_info_node;
}

/* 00073dac  ts_emitter  (33 bytes)
 * undefined ts_emitter(uint param_1)
 */
void ts_emitter(uint param_1)

{
  GetClassPtr<CTSEmitter>(param_1);
  return;
}

/* 00073dd0  ts_particle  (33 bytes)
 * undefined ts_particle(uint param_1)
 */
void ts_particle(uint param_1)

{
  GetClassPtr<CTSParticle>(param_1);
  return;
}

/* 00073df4  ts_wind  (33 bytes)
 * undefined ts_wind(uint param_1)
 */
void ts_wind(uint param_1)

{
  GetClassPtr<CTSWind>(param_1);
  return;
}

/* 00073e18  ts_fog  (33 bytes)
 * undefined ts_fog(uint param_1)
 */
void ts_fog(uint param_1)

{
  GetClassPtr<CTSFog>(param_1);
  return;
}

/* 000744ac  GetClassPtr<CTSEmitter>  (143 bytes)
 * CTSEmitter * GetClassPtr<CTSEmitter>(uint param_1)
 */
/* CTSEmitter * GetClassPtr<CTSEmitter>(CTSEmitter *) */

CTSEmitter * GetClassPtr<CTSEmitter>(uint param_1)

{
  edict_t *peVar1;
  CTSEmitter *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSEmitter *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSEmitter *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x114)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CPointEntity_virtual_table;
    pCVar2->vtable = (void **)CTSEmitter_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 0007453c  GetClassPtr<CTSParticle>  (143 bytes)
 * CTSParticle * GetClassPtr<CTSParticle>(uint param_1)
 */
/* CTSParticle * GetClassPtr<CTSParticle>(CTSParticle *) */

CTSParticle * GetClassPtr<CTSParticle>(uint param_1)

{
  edict_t *peVar1;
  CTSParticle *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSParticle *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSParticle *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x224)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CPointEntity_virtual_table;
    pCVar2->vtable = (void **)CTSParticle_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000745cc  GetClassPtr<CTSWind>  (140 bytes)
 * CTSWind * GetClassPtr<CTSWind>(uint param_1)
 */
/* CTSWind * GetClassPtr<CTSWind>(CTSWind *) */

CTSWind * GetClassPtr<CTSWind>(uint param_1)

{
  edict_t *peVar1;
  CTSWind *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSWind *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSWind *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x70);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CPointEntity_virtual_table;
    pCVar2->vtable = (void **)CTSWind_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 00074658  GetClassPtr<CTSFog>  (140 bytes)
 * CTSFog * GetClassPtr<CTSFog>(uint param_1)
 */
/* CTSFog * GetClassPtr<CTSFog>(CTSFog *) */

CTSFog * GetClassPtr<CTSFog>(uint param_1)

{
  edict_t *peVar1;
  CTSFog *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSFog *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSFog *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CPointEntity_virtual_table;
    pCVar2->vtable = (void **)CTSFog_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000746e4  CTSEmitter_type_info_function  (70 bytes)
 * undefined4 * CTSEmitter_type_info_function(void)
 */
/* CTSEmitter type_info function */

undefined4 * CTSEmitter_type_info_function(void)

{
  if (CTSEmitter_type_info_node == 0) {
    CPointEntity_type_info_function();
    __rtti_si(&CTSEmitter_type_info_node,"10CTSEmitter",&CPointEntity_type_info_node);
  }
  return &CTSEmitter_type_info_node;
}

/* 0007472c  CTSParticle_type_info_function  (70 bytes)
 * undefined4 * CTSParticle_type_info_function(void)
 */
/* CTSParticle type_info function */

undefined4 * CTSParticle_type_info_function(void)

{
  if (CTSParticle_type_info_node == 0) {
    CPointEntity_type_info_function();
    __rtti_si(&CTSParticle_type_info_node,"11CTSParticle",&CPointEntity_type_info_node);
  }
  return &CTSParticle_type_info_node;
}

/* 00074774  CTSWind_type_info_function  (70 bytes)
 * undefined4 * CTSWind_type_info_function(void)
 */
/* CTSWind type_info function */

undefined4 * CTSWind_type_info_function(void)

{
  if (CTSWind_type_info_node == 0) {
    CPointEntity_type_info_function();
    __rtti_si(&CTSWind_type_info_node,"7CTSWind",&CPointEntity_type_info_node);
  }
  return &CTSWind_type_info_node;
}

/* 000747bc  CTSFog_type_info_function  (70 bytes)
 * undefined4 * CTSFog_type_info_function(void)
 */
/* CTSFog type_info function */

undefined4 * CTSFog_type_info_function(void)

{
  if (CTSFog_type_info_node == 0) {
    CPointEntity_type_info_function();
    __rtti_si(&CTSFog_type_info_node,"6CTSFog",&CPointEntity_type_info_node);
  }
  return &CTSFog_type_info_node;
}

/* 00074804  Write_flag  (477 bytes)
 * undefined Write_flag(undefined1 * param_1)
 */
/* Write_flag(s_weapon_info *) */

void Write_flag(undefined1 *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 1;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x1d;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0x28) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  param_1[0x38] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 7;
  pcVar2 = "Briefcase";
  puVar3 = (undefined4 *)(param_1 + 0x44);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  param_1[0x84] = 1;
  param_1[0x85] = 5;
  pcVar2 = "sprites/weapons/knife.spr";
  puVar3 = (undefined4 *)(param_1 + 0x86);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  param_1[0xd0] = 0x14;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  param_1[0xdc] = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar2 = "models/v_knife.mdl";
  puVar3 = (undefined4 *)(param_1 + 0x132);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar3 + 2) = pcVar2[2];
  pcVar2 = "models/p_knife.mdl";
  puVar3 = (undefined4 *)(param_1 + 0x172);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar3 + 2) = pcVar2[2];
  param_1[0x1b2] = 0;
  pcVar2 = "models/w_knife.mdl";
  puVar3 = (undefined4 *)(param_1 + 0x1f2);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar3 + 2) = pcVar2[2];
  param_1[0x232] = 0;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 0x270) = 3;
  *(undefined2 *)(param_1 + 0x272) = 4;
  *(undefined2 *)(param_1 + 0x274) = 5;
  *(undefined2 *)(param_1 + 0x276) = 6;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  param_1[0x2c6] = 0;
  param_1[0x306] = 0;
  param_1[0x348] = 0xb;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0;
  *(undefined4 *)(param_1 + 0x358) = 0;
  return;
}

/* 000749e4  Write_fnh  (568 bytes)
 * undefined Write_fnh(undefined1 * param_1)
 */
/* Write_fnh(s_weapon_info *) */

void Write_fnh(undefined1 *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
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
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 1;
  param_1[0x2c] = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar2 = "Five-seveN";
  puVar3 = (undefined4 *)(param_1 + 0x44);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar3 + 2) = pcVar2[2];
  param_1[0x84] = 2;
  param_1[0x85] = 4;
  pcVar2 = "sprites/weapons/fnh.spr";
  puVar3 = (undefined4 *)(param_1 + 0x86);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  param_1[0xd0] = 10;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x4e2;
  *(undefined4 *)(param_1 + 0xe0) = 7;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar2 = "models/56_shell.mdl";
  puVar3 = (undefined4 *)(param_1 + 0xe8);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  *(undefined2 *)(param_1 + 300) = 2;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 2;
  pcVar2 = "models/v_fnh.mdl";
  pcVar4 = param_1 + 0x132;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "models/p_fnh.mdl";
  pcVar4 = param_1 + 0x172;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "models/p_fnh_sil.mdl";
  pcVar4 = param_1 + 0x1b2;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "models/w_fnh.mdl";
  pcVar4 = param_1 + 0x1f2;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "onehanded";
  puVar3 = (undefined4 *)(param_1 + 0x232);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25a) = 3;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x25e) = 4;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar2 = "weapons/fnh/fnh-fire.wav";
  pcVar4 = param_1 + 0x2c6;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "weapons/fnh/fnh-fire-sil.wav";
  pcVar4 = param_1 + 0x306;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  param_1[0x348] = 8;
  *(undefined4 *)(param_1 + 0x34c) = 6;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0x12;
  *(undefined4 *)(param_1 + 0x358) = 5;
  return;
}

/* 00074c1c  Write_fnhakimbo  (613 bytes)
 * undefined Write_fnhakimbo(undefined1 * param_1)
 */
/* Write_fnhakimbo(s_weapon_info *) */

void Write_fnhakimbo(undefined1 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
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
  pcVar3 = "Akimbo Five-seveN";
  puVar2 = (undefined4 *)(param_1 + 0x44);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  param_1[0x84] = 5;
  param_1[0x85] = 5;
  pcVar3 = "sprites/weapons/fnh_akimbo.spr";
  puVar2 = (undefined4 *)(param_1 + 0x86);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  *(char *)((int)puVar2 + 2) = pcVar3[2];
  param_1[0xd0] = 10;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x4e2;
  *(undefined4 *)(param_1 + 0xe0) = 7;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar3 = "models/56_shell.mdl";
  puVar2 = (undefined4 *)(param_1 + 0xe8);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  *(undefined2 *)(param_1 + 300) = 2;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 2;
  pcVar3 = "models/v_fnh_akimbo.mdl";
  puVar2 = (undefined4 *)(param_1 + 0x132);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  pcVar3 = "models/p_fnh_akimbo.mdl";
  puVar2 = (undefined4 *)(param_1 + 0x172);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  pcVar3 = "models/p_fnh_akimbo_sil.mdl";
  puVar2 = (undefined4 *)(param_1 + 0x1b2);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  pcVar3 = "models/w_fnh.mdl";
  pcVar5 = param_1 + 0x1f2;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  *pcVar5 = *pcVar3;
  puVar2 = &DAT_00106777;
  puVar4 = (undefined4 *)(param_1 + 0x232);
  for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar2;
  *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar2 + 2);
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 5;
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined2 *)(param_1 + 0x27e) = 3;
  *(undefined2 *)(param_1 + 0x282) = 2;
  *(undefined2 *)(param_1 + 0x280) = 3;
  *(undefined2 *)(param_1 + 0x284) = 2;
  *(undefined2 *)(param_1 + 0x286) = 3;
  *(undefined2 *)(param_1 + 0x288) = 2;
  *(undefined2 *)(param_1 + 600) = 4;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25c) = 4;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar3 = "weapons/fnh/fnh-fire.wav";
  pcVar5 = param_1 + 0x2c6;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  *pcVar5 = *pcVar3;
  pcVar3 = "weapons/fnh/fnh-fire-sil.wav";
  pcVar5 = param_1 + 0x306;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  *pcVar5 = *pcVar3;
  *(undefined4 *)(param_1 + 0x34c) = 6;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0x12;
  *(undefined4 *)(param_1 + 0x358) = 5;
  return;
}

/* 00075d7c  info_breakable  (33 bytes)
 * undefined info_breakable(uint param_1)
 */
void info_breakable(uint param_1)

{
  GetClassPtr<CInfoBreakable>(param_1);
  return;
}

/* 00075e04  GetClassPtr<CInfoBreakable>  (140 bytes)
 * CInfoBreakable * GetClassPtr<CInfoBreakable>(uint param_1)
 */
/* CInfoBreakable * GetClassPtr<CInfoBreakable>(CInfoBreakable *) */

CInfoBreakable * GetClassPtr<CInfoBreakable>(uint param_1)

{
  edict_t *peVar1;
  CInfoBreakable *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CInfoBreakable *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CInfoBreakable *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x6c);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CPointEntity_virtual_table;
    pCVar2->vtable = (void **)CInfoBreakable_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 00075e90  CBreakable_type_info_function  (70 bytes)
 * undefined4 * CBreakable_type_info_function(void)
 */
/* CBreakable type_info function */

undefined4 * CBreakable_type_info_function(void)

{
  if (CBreakable_type_info_node == 0) {
    CBaseDelay_type_info_function();
    __rtti_si(&CBreakable_type_info_node,"10CBreakable",&CBaseDelay_type_info_node);
  }
  return &CBreakable_type_info_node;
}

/* 00075f60  CInfoBreakable_type_info_function  (70 bytes)
 * undefined4 * CInfoBreakable_type_info_function(void)
 */
/* CInfoBreakable type_info function */

undefined4 * CInfoBreakable_type_info_function(void)

{
  if (CInfoBreakable_type_info_node == 0) {
    CPointEntity_type_info_function();
    __rtti_si(&CInfoBreakable_type_info_node,"14CInfoBreakable",&CPointEntity_type_info_node);
  }
  return &CInfoBreakable_type_info_node;
}

/* 00075fa8  SlowMotion  (14 bytes)
 * uint SlowMotion(int param_1)
 */
/* SlowMotion(CBasePlayer *) */

uint SlowMotion(int param_1)

{
  return *(uint *)(param_1 + 0x724) & 1;
}

/* 00075fb8  SlowPause  (14 bytes)
 * uint SlowPause(int param_1)
 */
/* SlowPause(CBasePlayer *) */

uint SlowPause(int param_1)

{
  return *(uint *)(param_1 + 0x724) & 8;
}

/* 00075fc8  InfiniteClips  (14 bytes)
 * uint InfiniteClips(int param_1)
 */
/* InfiniteClips(CBasePlayer *) */

uint InfiniteClips(int param_1)

{
  return *(uint *)(param_1 + 0x724) & 2;
}

/* 00075fd8  KungFu  (12 bytes)
 * undefined1 KungFu(int param_1)
 */
/* KungFu(CBasePlayer *) */

undefined1 KungFu(int param_1)

{
  return *(undefined1 *)(param_1 + 0x74e);
}

/* 00075fe4  DoubleFireRate  (14 bytes)
 * uint DoubleFireRate(int param_1)
 */
/* DoubleFireRate(CBasePlayer *) */

uint DoubleFireRate(int param_1)

{
  return *(uint *)(param_1 + 0x724) & 0x10;
}

/* 00075ff4  SetPlayerRespawnTime  (302 bytes)
 * undefined SetPlayerRespawnTime(int param_1, int param_2)
 */
/* SetPlayerRespawnTime(CBasePlayer *, int, bool) */

void SetPlayerRespawnTime(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  if ((((TSGameRules == '\x03') || (TSGameRules == '\x02')) || (g_lastManStanding == 0)) ||
     (TSGameRules != '\0')) {
    *(float *)(param_1 + 0x770) = (float)param_2 + gpGlobals->time;
  }
  else {
    fVar1 = (float)respawnnumber._12_4_;
    if ((float)respawnnumber._12_4_ < 1.0) {
      fVar1 = 1.0;
    }
    if (fVar1 <= (float)(short)*(char *)(param_1 + 0x7ba)) {
      *(undefined4 *)(param_1 + 0x770) = 0xbf800000;
    }
    else {
      fVar1 = DAT_001781a8 - gpGlobals->time;
      fVar2 = (float)param_2;
      if (fVar1 < fVar2) {
        fVar2 = fVar1;
      }
      *(float *)(param_1 + 0x770) = fVar2 + gpGlobals->time;
      fVar1 = DAT_001781a8 - gpGlobals->time;
      if (10.0 < fVar1) {
        fVar1 = 10.0;
      }
      *(float *)(param_1 + 0x7bc) = fVar1 + gpGlobals->time;
    }
  }
  if (*(float *)(param_1 + 0x770) < 0.0) {
    *(undefined1 *)(param_1 + 0x74c) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x74c) = 0xb;
  }
  return;
}

/* 00076128  EntSelectSpawnPoint  (277 bytes)
 * int EntSelectSpawnPoint(int * param_1)
 */
/* EntSelectSpawnPoint(CBaseEntity *) */

int EntSelectSpawnPoint(int *param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  edict_t *pEdict;
  char *pcVar4;
  char *pcVar5;
  char local_5c [32];
  char local_3c [2];
  char acStack_3a [42];
  
  pcVar5 = local_5c;
  iVar2 = (**(code **)(*g_pGameRules + 0x24))(g_pGameRules);
  if (iVar2 == 0) {
    pcVar5 = (char *)0x0;
    pcVar3 = "info_player_deathmatch";
  }
  else {
    local_5c[0] = '\0';
    pcVar3 = (char *)(**(code **)(param_1[0x18] + 0xd0))(param_1);
    iVar2 = CTSGameRules::GetTeamIndex((CTSGameRules *)&TSGameRules,pcVar3);
    if (iVar2 < 0) {
      pcVar3 = "info_player_deathmatch";
      pcVar4 = local_3c;
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar4 = pcVar4 + 4;
      }
      *(undefined2 *)pcVar4 = *(undefined2 *)pcVar3;
      pcVar4[2] = pcVar3[2];
    }
    else {
      strcpy(local_3c,(char *)(iVar2 * 0x8c + 0x178208));
      strcpy(local_5c,(char *)(iVar2 * 0x8c + 0x178228));
    }
    pcVar3 = local_3c;
  }
  pEdict = (edict_t *)TSSelectSpawnSpot(pcVar3,param_1,pcVar5);
  bVar1 = false;
  if ((pEdict == (edict_t *)0x0) ||
     (iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict), iVar2 == 0)) {
    bVar1 = true;
  }
  if (bVar1) {
    pEdict = (*g_engfuncs.pfnPEntityOfEntIndex)(0);
  }
  return (int)pEdict;
}

/* 00076244  TSSelectSpawnSpot  (1371 bytes)
 * undefined4 TSSelectSpawnSpot(char * param_1, int * param_2, char * param_3)
 */
/* TSSelectSpawnSpot(char const *, CBaseEntity *, char const *) */

undefined4 TSSelectSpawnSpot(char *param_1,int *param_2,char *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  edict_t *peVar8;
  edict_t *peVar9;
  int iVar10;
  undefined1 *puVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  undefined1 *puVar15;
  undefined4 *puVar16;
  int iVar17;
  int local_1a0;
  uint local_19c;
  float local_18c;
  float local_188;
  float local_184;
  undefined1 local_17c [16];
  float local_16c;
  int aiStack_140 [33];
  undefined4 local_bc [32];
  char local_3c [32];
  undefined1 auStack_1c [12];
  
  strcpy(local_3c,param_1);
  if ((param_3 != (char *)0x0) &&
     (iVar6 = UTIL_FindEntityByClassname((int *)0x0,param_1), iVar6 == 0)) {
    strcpy(local_3c,param_3);
  }
  piVar13 = (int *)0x0;
  puVar16 = local_bc;
  for (iVar6 = 0x20; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar16 = 0;
    puVar16 = puVar16 + 1;
  }
  piVar14 = aiStack_140;
  for (iVar6 = 0x20; piVar14 = piVar14 + 1, iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar14 = 0;
  }
  local_19c = 0;
  do {
    do {
      piVar13 = (int *)UTIL_FindEntityByClassname(piVar13,local_3c);
      if (piVar13 == (int *)0x0) goto LAB_00076585;
      iVar6 = (**(code **)(piVar13[0x18] + 0x6c))(piVar13,param_2);
    } while (iVar6 == 0);
    piVar14 = (int *)0x0;
    bVar4 = true;
    bVar5 = false;
    local_1a0 = 0x1000;
    while (piVar14 = (int *)UTIL_FindEntityByClassname(piVar14,"player"), piVar14 != (int *)0x0) {
      if ((((piVar14 != param_2) &&
           (iVar6 = (**(code **)(piVar14[0x18] + 200))(piVar14), iVar6 != 0)) &&
          (iVar6 = (**(code **)(piVar14[0x18] + 0xb4))(piVar14), iVar6 != 0)) &&
         (iVar6 = *piVar14, -1 < *(char *)(iVar6 + 0x118))) {
        if (bVar4) {
          local_18c = *(float *)(iVar6 + 8) + *(float *)(iVar6 + 0x174);
          local_188 = *(float *)(iVar6 + 0xc) + *(float *)(iVar6 + 0x178);
          local_184 = *(float *)(iVar6 + 0x10) + *(float *)(iVar6 + 0x17c);
          UTIL_TraceLine(*piVar13 + 8,&local_18c,1,1,*(undefined4 *)(*piVar13 + 0x208),local_17c);
          if (local_16c == 1.0) {
            iVar6 = (**(code **)(*g_pGameRules + 0xcc))(g_pGameRules,param_2,piVar14);
            if (iVar6 == 1) {
              iVar6 = *piVar13;
              iVar7 = *piVar14;
              fVar1 = *(float *)(iVar6 + 8) - *(float *)(iVar7 + 8);
              fVar3 = *(float *)(iVar6 + 0xc) - *(float *)(iVar7 + 0xc);
              fVar2 = *(float *)(iVar6 + 0x10) - *(float *)(iVar7 + 0x10);
              if (128.0 <= SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1)) {
                bVar5 = true;
                goto LAB_0007645c;
              }
            }
            bVar4 = false;
          }
        }
LAB_0007645c:
        iVar6 = *piVar13;
        iVar7 = *piVar14;
        local_18c = *(float *)(iVar6 + 8) - *(float *)(iVar7 + 8);
        local_188 = *(float *)(iVar6 + 0xc) - *(float *)(iVar7 + 0xc);
        local_184 = *(float *)(iVar6 + 0x10) - *(float *)(iVar7 + 0x10);
        iVar6 = (int)ROUND(SQRT(local_184 * local_184 +
                                local_188 * local_188 + local_18c * local_18c));
        if (iVar6 < local_1a0) {
          local_1a0 = iVar6;
        }
      }
    }
    local_bc[local_19c] = piVar13;
    local_19c = local_19c + 1;
    if ((bVar5) && (bVar4)) {
      iVar7 = 0x2000;
      iVar6 = 0x1801;
LAB_0007653e:
      iVar6 = (*g_engfuncs.pfnRandomLong)(iVar6,iVar7);
      aiStack_140[local_19c] = iVar6;
    }
    else {
      if (bVar4) {
        iVar7 = 0x1800;
        iVar6 = 0x1001;
        goto LAB_0007653e;
      }
      aiStack_140[local_19c] = local_1a0;
    }
  } while ((int)local_19c < 0x20);
LAB_00076585:
  if ((int)local_19c < 1) {
    piVar13 = (int *)UTIL_FindEntityByClassname((int *)0x0,"info_player_deathmatch");
    if (piVar13 == (int *)0x0) {
      piVar13 = (int *)UTIL_FindEntityByClassname((int *)0x0,"info_player_start");
    }
    if (piVar13 == (int *)0x0) {
      return 0;
    }
    return *(undefined4 *)(*piVar13 + 0x208);
  }
  iVar6 = 0;
  iVar17 = 0;
  iVar7 = 0;
  if ((int)local_19c < 1) goto LAB_000766a8;
  iVar10 = 0;
  uVar12 = local_19c & 3;
  if ((int)local_19c < 1) {
LAB_00076631:
    if (iVar6 < *(int *)((int)aiStack_140 + iVar10 + 4)) {
      iVar6 = *(int *)((int)aiStack_140 + iVar10 + 4);
      iVar7 = iVar17;
    }
    iVar10 = iVar10 + 4;
    iVar17 = iVar17 + 1;
    if ((int)local_19c <= iVar17) goto LAB_000766a8;
  }
  else if (uVar12 != 0) {
    if (1 < uVar12) {
      if (2 < uVar12) {
        if (0 < aiStack_140[1]) {
          iVar6 = aiStack_140[1];
        }
        iVar10 = 4;
        iVar17 = 1;
      }
      if (iVar6 < *(int *)((int)aiStack_140 + iVar10 + 4)) {
        iVar6 = *(int *)((int)aiStack_140 + iVar10 + 4);
        iVar7 = iVar17;
      }
      iVar10 = iVar10 + 4;
      iVar17 = iVar17 + 1;
    }
    goto LAB_00076631;
  }
  puVar11 = auStack_1c + iVar10;
  puVar15 = puVar11;
  do {
    if (iVar6 < *(int *)(puVar11 + -0x120)) {
      iVar6 = *(int *)(puVar15 + -0x120);
      iVar7 = iVar17;
    }
    if (iVar6 < *(int *)(puVar11 + -0x11c)) {
      iVar6 = *(int *)(puVar15 + -0x11c);
      iVar7 = iVar17 + 1;
    }
    if (iVar6 < *(int *)(puVar11 + -0x118)) {
      iVar6 = *(int *)(puVar15 + -0x118);
      iVar7 = iVar17 + 2;
    }
    if (iVar6 < *(int *)(puVar11 + -0x114)) {
      iVar6 = *(int *)(puVar15 + -0x114);
      iVar7 = iVar17 + 3;
    }
    puVar15 = puVar15 + 0x10;
    puVar11 = puVar11 + 0x10;
    iVar17 = iVar17 + 4;
  } while (iVar17 < (int)local_19c);
LAB_000766a8:
  piVar13 = (int *)local_bc[iVar7];
  if (aiStack_140[iVar7 + 1] < 0x80) {
    piVar14 = (int *)0x0;
    while (piVar14 = (int *)UTIL_FindEntityInSphere(piVar14,*piVar13 + 8,0x43000000),
          piVar14 != (int *)0x0) {
      iVar6 = (**(code **)(piVar14[0x18] + 200))(piVar14);
      if (((iVar6 != 0) && (piVar14 != param_2)) &&
         ((iVar6 = (**(code **)(piVar14[0x18] + 0xb4))(piVar14), iVar6 != 0 &&
          (-1 < *(char *)(*piVar14 + 0x118))))) {
        peVar8 = (*g_engfuncs.pfnPEntityOfEntIndex)(0);
        peVar9 = (*g_engfuncs.pfnPEntityOfEntIndex)(0);
        (**(code **)(piVar14[0x18] + 0x58))
                  (piVar14,(uint)&peVar9->v & (peVar9 == (edict_t *)0x0) - 1,
                   (uint)&peVar8->v & (peVar8 == (edict_t *)0x0) - 1,0x43960000,0x1000);
      }
    }
  }
  g_pLastSpawn = piVar13;
  return *(undefined4 *)(*piVar13 + 0x208);
}

/* 000767ac  DecideGamePlay  (267 bytes)
 * undefined4 DecideGamePlay(undefined4 param_1, undefined4 param_2)
 */
/* DecideGamePlay(char *, int) */

undefined4 DecideGamePlay(undefined4 param_1,undefined4 param_2)

{
  char local_4c [68];
  
  g_theOneMode = 0;
  g_lastManStanding = 0;
  if (g_gamemode < 1) {
    local_4c[0] = '\0';
    strncpy(local_4c,gpGlobals->pStringBase + gpGlobals->mapname,3);
    if ((float)mp_theonemode._12_4_ == 0.0) {
      if ((float)lastmanstanding._12_4_ != 0.0) {
        g_gamemode = 0;
        g_lastManStanding = 1;
        return 0;
      }
      if ((float)teamplay._12_4_ == 0.0) {
        g_gamemode = 0;
        return param_2;
      }
    }
    else {
      g_theOneMode = 1;
    }
  }
  else {
    switch(g_gamemode) {
    default:
      g_gamemode = 0;
      g_theOneMode = 0;
      g_lastManStanding = 0;
      return 0;
    case 2:
      break;
    case 3:
      g_gamemode = 0;
      g_theOneMode = 0;
      g_lastManStanding = 1;
      return 0;
    case 4:
      g_theOneMode = 1;
    }
  }
  g_gamemode = 0;
  return 1;
}

/* 000768d4  TSHudMessageOne  (254 bytes)
 * undefined TSHudMessageOne(undefined1 param_1, undefined1 param_2, undefined1 param_3, undefined4 param_4, undefined4 param_5, char * param_6, int param_7)
 */
/* TSHudMessageOne(unsigned char, unsigned char, unsigned char, int, int, char *, entvars_s *) */

void TSHudMessageOne(byte param_1,byte param_2,byte param_3,int param_4,int param_5,char *param_6,
                    int param_7)

{
  char local_9c [127];
  undefined1 local_1d;
  
  if ((param_7 != 0) && (*param_6 != '\0')) {
    strncpy(local_9c,param_6,0x80);
    local_1d = 0;
    (*g_engfuncs.pfnMessageBegin)(1,gmsgTSMessage,(float *)0x0,*(edict_t **)(param_7 + 0x208));
    (*g_engfuncs.pfnWriteByte)((uint)param_1);
    (*g_engfuncs.pfnWriteByte)((uint)param_2);
    (*g_engfuncs.pfnWriteByte)((uint)param_3);
    (*g_engfuncs.pfnWriteByte)(param_4);
    (*g_engfuncs.pfnWriteByte)(param_5);
    (*g_engfuncs.pfnWriteString)(local_9c);
    (*g_engfuncs.pfnMessageEnd)();
  }
  return;
}

/* 000769d4  TSHudMessageAll  (229 bytes)
 * undefined TSHudMessageAll(undefined1 param_1, undefined1 param_2, undefined1 param_3, undefined4 param_4, undefined4 param_5, char * param_6)
 */
/* TSHudMessageAll(unsigned char, unsigned char, unsigned char, int, int, char *) */

void TSHudMessageAll(byte param_1,byte param_2,byte param_3,int param_4,int param_5,char *param_6)

{
  char local_9c [127];
  undefined1 local_1d;
  
  if (*param_6 != '\0') {
    strncpy(local_9c,param_6,0x80);
    local_1d = 0;
    (*g_engfuncs.pfnMessageBegin)(2,gmsgTSMessage,(float *)0x0,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)((uint)param_1);
    (*g_engfuncs.pfnWriteByte)((uint)param_2);
    (*g_engfuncs.pfnWriteByte)((uint)param_3);
    (*g_engfuncs.pfnWriteByte)(param_4);
    (*g_engfuncs.pfnWriteByte)(param_5);
    (*g_engfuncs.pfnWriteString)(local_9c);
    (*g_engfuncs.pfnMessageEnd)();
  }
  return;
}

/* 00076abc  CashBased  (20 bytes)
 * undefined4 CashBased(void)
 */
/* CashBased(void) */

undefined4 CashBased(void)

{
  return 0;
}

/* 00076ad0  InitWeaponRestriction  (6 bytes)
 * undefined4 InitWeaponRestriction(void)
 */
/* InitWeaponRestriction(void) */

undefined4 InitWeaponRestriction(void)

{
  return 0x1f;
}

/* 00076ad8  WeaponRestrictionByID  (79 bytes)
 * undefined4 WeaponRestrictionByID(undefined4 param_1)
 */
/* WeaponRestrictionByID(int) */

undefined4 WeaponRestrictionByID(undefined4 param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  default:
    uVar1 = InitWeaponRestriction();
    break;
  case 1:
    uVar1 = 0;
    break;
  case 2:
    uVar1 = 1;
    break;
  case 3:
    uVar1 = 3;
    break;
  case 4:
    uVar1 = 0x13;
  }
  return uVar1;
}

/* 00076b48  DoSpectacularNess  (139 bytes)
 * bool DoSpectacularNess(void)
 */
/* DoSpectacularNess(void) */

bool DoSpectacularNess(void)

{
  float fVar1;
  int iVar2;
  
  iVar2 = (*g_engfuncs.pfnRandomLong)(0,100);
  fVar1 = (float)spectacularness._12_4_;
  if ((float)spectacularness._12_4_ < 0.0) {
    fVar1 = 0.0;
  }
  if (100.0 < fVar1) {
    fVar1 = 100.0;
  }
  return (int)ROUND(fVar1) != 0 && iVar2 <= (int)ROUND(fVar1);
}

/* 00076bd4  GetSpeedBySlots  (117 bytes)
 * int GetSpeedBySlots(int param_1)
 */
/* GetSpeedBySlots(CBasePlayer *) */

int GetSpeedBySlots(int param_1)

{
  if ((*(char *)(param_1 + 0x7b9) == '\0') && (*(int *)(param_1 + 0x548) < 0x51)) {
    param_1 = (int)ROUND((float)*(int *)(param_1 + 0x548) * 0.012345679 * 120.0 + 210.0);
  }
  return param_1;
}

/* 00076c4c  GetAccelBySlots  (61 bytes)
 * undefined GetAccelBySlots(CBasePlayer * param_1)
 */
/* GetAccelBySlots(CBasePlayer *) */

undefined4 GetAccelBySlots(int param_1)

{
  return *(undefined4 *)(param_1 + 0x548);
}

/* 00076c8c  VictimKatanaHold  (342 bytes)
 * undefined2 VictimKatanaHold(CBasePlayer * param_1, int * param_2)
 */
/* VictimKatanaHold(CBasePlayer *, CBaseEntity *, float) */

ushort VictimKatanaHold(CBasePlayer *param_1,int *param_2)

{
  float fVar1;
  entvars_t *peVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  float *pfVar6;
  ushort uVar7;
  float local_3c [4];
  float local_2c [7];
  
  iVar3 = (**(code **)(param_2[0x18] + 200))(param_2);
  uVar7 = 0;
  if (iVar3 != 0) {
    fVar1 = (float)param_2[0x1ec];
    uVar7 = (ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 | (ushort)(fVar1 == 0.0) << 0xe;
    if (0.0 < fVar1) {
      fVar1 = (float)param_2[0x1dd];
      uVar7 = (ushort)(fVar1 < 0.1) << 8 | (ushort)NAN(fVar1) << 10 | (ushort)(fVar1 == 0.1) << 0xe;
      if (fVar1 >= 0.1 && (fVar1 == 0.1) == 0) {
        peVar2 = param_1->pev;
        iVar3 = *param_2;
        local_3c[0] = (peVar2->origin[0] + *(float *)(iVar3 + 8)) * 0.5;
        local_3c[1] = (peVar2->origin[1] + *(float *)(iVar3 + 0xc)) * 0.5;
        local_3c[2] = (peVar2->origin[2] + *(float *)(iVar3 + 0x10)) * 0.5;
        pfVar5 = local_3c;
        pfVar6 = local_2c;
        for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar6 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          pfVar6 = pfVar6 + 1;
        }
        local_2c[2] = local_2c[2] + 20.0;
        UTIL_Sparks(local_2c);
        EMIT_SOUND_DYN((int)param_1->pev->pContainingEntity,4,"weapons/knife/knife_hit.wav",
                       0x3f800000,0x3f4ccccd,0,100,0.5);
        *(undefined4 *)&param_1->field_0x7a0 = 0;
        *(undefined4 *)&param_1->field_0x12c = 0x3f400000;
        param_2[0x4b] = 0x3eb33333;
        uVar4 = CBasePlayer::UpdateMeleeBar(param_1,33.0);
        uVar7 = (ushort)CONCAT31((int3)((uint)uVar4 >> 8),1);
      }
    }
  }
  return uVar7;
}

/* 00076de4  VictimKnifeHold  (361 bytes)
 * undefined2 VictimKnifeHold(CBasePlayer * param_1, int * param_2)
 */
/* VictimKnifeHold(CBasePlayer *, CBaseEntity *, float) */

undefined2 VictimKnifeHold(CBasePlayer *param_1,int *param_2)

{
  float fVar1;
  entvars_t *peVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  float *pfVar6;
  float local_3c [4];
  float local_2c [7];
  
  iVar3 = (**(code **)(param_2[0x18] + 200))(param_2);
  if (iVar3 == 0) {
    return 0;
  }
  if ((float)param_2[0x1eb] <= 0.0) {
    fVar1 = (float)param_2[0x1ec];
    if (0.0 >= fVar1) {
      return (ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 | (ushort)(fVar1 == 0.0) << 0xe;
    }
    fVar1 = (float)param_2[0x1dd];
    if (fVar1 < 0.1 || (fVar1 == 0.1) != 0) {
      return (ushort)(fVar1 < 0.1) << 8 | (ushort)NAN(fVar1) << 10 | (ushort)(fVar1 == 0.1) << 0xe;
    }
  }
  peVar2 = param_1->pev;
  iVar3 = *param_2;
  local_3c[0] = (peVar2->origin[0] + *(float *)(iVar3 + 8)) * 0.5;
  local_3c[1] = (peVar2->origin[1] + *(float *)(iVar3 + 0xc)) * 0.5;
  local_3c[2] = (peVar2->origin[2] + *(float *)(iVar3 + 0x10)) * 0.5;
  pfVar5 = local_3c;
  pfVar6 = local_2c;
  for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar6 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar6 = pfVar6 + 1;
  }
  local_2c[2] = local_2c[2] + 20.0;
  UTIL_Sparks(local_2c);
  EMIT_SOUND_DYN((int)param_1->pev->pContainingEntity,4,"weapons/knife/knife_hit.wav",0x3f800000,
                 0x3f4ccccd,0,100,0.5);
  *(undefined4 *)&param_1->field_0x7a0 = 0;
  *(undefined4 *)&param_1->field_0x12c = 0x3f000000;
  param_2[0x4b] = 0x3e800000;
  uVar4 = CBasePlayer::UpdateMeleeBar(param_1,33.0);
  return (short)CONCAT31((int3)((uint)uVar4 >> 8),1);
}

/* 00076f50  VictimKungfuHold  (498 bytes)
 * undefined4 VictimKungfuHold(CBasePlayer * param_1, CBasePlayer * param_2)
 */
/* VictimKungfuHold(CBasePlayer *, CBaseEntity *, float, TraceResult *) */

undefined4 VictimKungfuHold(CBasePlayer *param_1,CBasePlayer *param_2)

{
  float fVar1;
  entvars_t *peVar2;
  entvars_t *peVar3;
  bool bVar4;
  int iVar5;
  undefined2 uVar7;
  undefined2 extraout_var;
  undefined4 uVar6;
  float *pfVar8;
  float *pfVar9;
  CBasePlayer *local_48;
  float local_3c [4];
  float local_2c [7];
  
  iVar5 = (*param_2->vtable[0x32])(param_2);
  uVar6 = 0;
  if (iVar5 != 0) {
    bVar4 = false;
    local_48 = (CBasePlayer *)0x0;
    fVar1 = *(float *)&param_2->field_0x7a8;
    uVar7 = (undefined2)((uint)iVar5 >> 0x10);
    uVar6 = CONCAT22(uVar7,(ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                           (ushort)(fVar1 == 0.0) << 0xe);
    if (0.0 < fVar1) {
      bVar4 = true;
      local_48 = param_2;
    }
    else {
      fVar1 = *(float *)&param_1->field_0x7a8;
      uVar6 = CONCAT22(uVar7,(ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                             (ushort)(fVar1 == 0.0) << 0xe);
      if ((0.0 < fVar1) && (param_2->field_0x7a4 == '\0')) {
        fVar1 = *(float *)&param_2->field_0x79c;
        uVar6 = CONCAT22(uVar7,(ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                               (ushort)(fVar1 == 0.0) << 0xe);
        if (0.0 < fVar1) {
          bVar4 = true;
          local_48 = param_1;
          param_1 = param_2;
        }
      }
    }
    if ((bVar4) && (local_48 != (CBasePlayer *)0x0)) {
      peVar2 = param_1->pev;
      peVar3 = local_48->pev;
      local_2c[0] = peVar2->origin[0] - peVar3->origin[0];
      local_2c[1] = peVar2->origin[1] - peVar3->origin[1];
      local_2c[2] = peVar2->origin[2] - peVar3->origin[2];
      fVar1 = SQRT(local_2c[2] * local_2c[2] + local_2c[1] * local_2c[1] + local_2c[0] * local_2c[0]
                  );
      if (fVar1 == 0.0) {
        local_3c[0] = 0.0;
        local_3c[1] = 0.0;
        local_3c[2] = 1.0;
      }
      else {
        fVar1 = 1.0 / fVar1;
        local_3c[0] = fVar1 * local_2c[0];
        local_3c[1] = fVar1 * local_2c[1];
        local_3c[2] = fVar1 * local_2c[2];
      }
      pfVar8 = local_3c;
      pfVar9 = local_2c;
      for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar9 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar9 = pfVar9 + 1;
      }
      UTIL_MakeVectors(local_48->pev->v_angle);
      fVar1 = *(float *)&param_2->field_0x774;
      uVar6 = CONCAT22(extraout_var,
                       (ushort)(fVar1 < 0.1) << 8 | (ushort)NAN(fVar1) << 10 |
                       (ushort)(fVar1 == 0.1) << 0xe);
      if (fVar1 >= 0.1) {
        EMIT_SOUND_DYN((int)param_1->pev->pContainingEntity,4,"player/kungfuhit.wav",0x3f800000,
                       0x3f4ccccd,0,100,0.5);
        *(undefined4 *)&local_48->field_0x7a0 = 0;
        *(undefined4 *)&param_1->field_0x7a0 = 0;
        *(undefined4 *)&param_1->field_0x12c = 0x3f000000;
        *(undefined4 *)&local_48->field_0x12c = 0x3e800000;
        uVar6 = CBasePlayer::UpdateMeleeBar(param_1,33.0);
        uVar6 = CONCAT31((int3)((uint)uVar6 >> 8),1);
      }
    }
  }
  return uVar6;
}

/* 00077148  HaveFlag  (11 bytes)
 * undefined1 HaveFlag(int param_1)
 */
/* HaveFlag(CBasePlayer *) */

undefined1 HaveFlag(int param_1)

{
  return *(undefined1 *)(param_1 + 2000);
}

/* 00077154  __static_initialization_and_destruction_0  (94 bytes)
 * undefined __static_initialization_and_destruction_0(int param_1, int param_2)
 * called by: global.constructors.keyed.to.SlowMotion, global.destructors.keyed.to.SlowMotion
 */
void __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if ((param_2 == 0xffff) && (param_1 == 1)) {
    CTSGameRules::CTSGameRules((CTSGameRules *)&TSGameRules);
  }
  if ((param_2 == 0xffff) && (param_1 == 0)) {
    CBulletManager::~CBulletManager((CBulletManager *)&DAT_00179a04,2);
  }
  return;
}

/* 000771b4  global.constructors.keyed.to.SlowMotion  (19 bytes)
 * undefined global.constructors.keyed.to.SlowMotion(void)
 */
/* global constructors keyed to SlowMotion(CBasePlayer *) */

void global_constructors_keyed_to_SlowMotion(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

/* 000771c8  global.destructors.keyed.to.SlowMotion  (19 bytes)
 * undefined global.destructors.keyed.to.SlowMotion(void)
 */
/* global destructors keyed to SlowMotion(CBasePlayer *) */

void global_destructors_keyed_to_SlowMotion(void)

{
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

/* 0007a1b0  CalcMiniminVotants  (24 bytes)
 * int CalcMiniminVotants(int param_1)
 */
/* CalcMiniminVotants(int) */

int CalcMiniminVotants(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 / 2;
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  return iVar1;
}

/* 0007b3a8  Write_glock18  (567 bytes)
 * undefined Write_glock18(undefined1 * param_1)
 */
/* Write_glock18(s_weapon_info *) */

void Write_glock18(undefined1 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x11;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0xc) = 3;
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
  puVar2 = &DAT_00107b21;
  puVar4 = (undefined4 *)(param_1 + 0x44);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)puVar4 = *(undefined1 *)puVar2;
  param_1[0x84] = 2;
  param_1[0x85] = 1;
  pcVar3 = "sprites/weapons/glock18.spr";
  puVar2 = (undefined4 *)(param_1 + 0x86);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  param_1[0xd0] = 10;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x352;
  *(undefined4 *)(param_1 + 0xe0) = 7;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar3 = "models/9mm_shell.mdl";
  pcVar5 = param_1 + 0xe8;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  *pcVar5 = *pcVar3;
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  *(undefined2 *)(param_1 + 300) = 2;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 2;
  pcVar3 = "models/v_glock18.mdl";
  pcVar5 = param_1 + 0x132;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  *pcVar5 = *pcVar3;
  pcVar3 = "models/p_glock18.mdl";
  pcVar5 = param_1 + 0x172;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  *pcVar5 = *pcVar3;
  pcVar3 = "models/p_glock18_sil.mdl";
  pcVar5 = param_1 + 0x1b2;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  *pcVar5 = *pcVar3;
  pcVar3 = "models/w_glock18.mdl";
  pcVar5 = param_1 + 0x1f2;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  *pcVar5 = *pcVar3;
  pcVar3 = "onehanded";
  puVar2 = (undefined4 *)(param_1 + 0x232);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x25e) = 5;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar3 = "weapons/glock/glock-fire.wav";
  pcVar5 = param_1 + 0x2c6;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  *pcVar5 = *pcVar3;
  pcVar3 = "weapons/glock/glock-fire-sil.wav";
  pcVar5 = param_1 + 0x306;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  *pcVar5 = *pcVar3;
  param_1[0x348] = 8;
  *(undefined4 *)(param_1 + 0x34c) = 6;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0x12;
  *(undefined4 *)(param_1 + 0x358) = 4;
  return;
}

/* 0007b5e0  Write_glock22  (564 bytes)
 * undefined Write_glock22(undefined1 * param_1)
 */
/* Write_glock22(s_weapon_info *) */

void Write_glock22(undefined1 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0xf;
  param_1[8] = 9;
  *(undefined4 *)(param_1 + 0xc) = 2;
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
  puVar2 = &DAT_00107be1;
  puVar4 = (undefined4 *)(param_1 + 0x44);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar2;
  param_1[0x84] = 2;
  param_1[0x85] = 5;
  pcVar3 = "sprites/weapons/glock22.spr";
  puVar2 = (undefined4 *)(param_1 + 0x86);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  param_1[0xd0] = 10;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x514;
  *(undefined4 *)(param_1 + 0xe0) = 7;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar3 = "models/9mm_shell.mdl";
  pcVar5 = param_1 + 0xe8;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  *pcVar5 = *pcVar3;
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  *(undefined2 *)(param_1 + 300) = 2;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 2;
  pcVar3 = "models/v_glock22.mdl";
  pcVar5 = param_1 + 0x132;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  *pcVar5 = *pcVar3;
  pcVar3 = "models/p_glock22.mdl";
  pcVar5 = param_1 + 0x172;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  *pcVar5 = *pcVar3;
  pcVar3 = "models/p_glock22_sil.mdl";
  pcVar5 = param_1 + 0x1b2;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  *pcVar5 = *pcVar3;
  pcVar3 = "models/w_glock22.mdl";
  pcVar5 = param_1 + 0x1f2;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  *pcVar5 = *pcVar3;
  pcVar3 = "onehanded";
  puVar2 = (undefined4 *)(param_1 + 0x232);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x25e) = 5;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar3 = "weapons/glock22/glock22-fire.wav";
  pcVar5 = param_1 + 0x2c6;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  *pcVar5 = *pcVar3;
  pcVar3 = "weapons/glock22/glock22-fire-sil.wav";
  pcVar5 = param_1 + 0x306;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  *pcVar5 = *pcVar3;
  param_1[0x348] = 8;
  *(undefined4 *)(param_1 + 0x34c) = 6;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0x14;
  *(undefined4 *)(param_1 + 0x358) = 5;
  return;
}

/* 0007b814  Write_gold  (576 bytes)
 * undefined Write_gold(undefined1 * param_1)
 */
/* Write_gold(s_weapon_info *) */

void Write_gold(undefined1 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 *puVar5;
  
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
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pcVar3 = "Golden Colts";
  pcVar4 = param_1 + 0x44;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar3;
  param_1[0x84] = 5;
  param_1[0x85] = 4;
  pcVar3 = "sprites/weapons/gold.spr";
  pcVar4 = param_1 + 0x86;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar3;
  param_1[0xd0] = 0x14;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0xa28;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar3 = "models/9mm_shell.mdl";
  pcVar4 = param_1 + 0xe8;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar3;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar3 = "models/v_gold.mdl";
  puVar2 = (undefined4 *)(param_1 + 0x132);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  pcVar3 = "models/p_gold.mdl";
  puVar2 = (undefined4 *)(param_1 + 0x172);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  pcVar3 = "models/w_gold.mdl";
  puVar2 = (undefined4 *)(param_1 + 0x1f2);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  puVar2 = &DAT_00106777;
  puVar5 = (undefined4 *)(param_1 + 0x232);
  for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = *(undefined2 *)puVar2;
  *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar2 + 2);
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 0x27e) = 3;
  *(undefined2 *)(param_1 + 0x282) = 4;
  *(undefined2 *)(param_1 + 0x280) = 3;
  *(undefined2 *)(param_1 + 0x284) = 4;
  *(undefined2 *)(param_1 + 0x286) = 5;
  *(undefined2 *)(param_1 + 0x288) = 6;
  *(undefined2 *)(param_1 + 600) = 7;
  *(undefined2 *)(param_1 + 0x25a) = 7;
  *(undefined2 *)(param_1 + 0x25c) = 7;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar3 = "weapons/gold/gold-fire.wav";
  puVar2 = (undefined4 *)(param_1 + 0x2c6);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  *(char *)((int)puVar2 + 2) = pcVar3[2];
  *(undefined4 *)(param_1 + 0x34c) = 6;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0x12;
  *(undefined4 *)(param_1 + 0x358) = 5;
  return;
}

/* 0007bf78  shrapnel  (33 bytes)
 * undefined shrapnel(uint param_1)
 */
void shrapnel(uint param_1)

{
  GetClassPtr<CTSShrapnel>(param_1);
  return;
}

/* 0007c850  m61_grenade  (33 bytes)
 * undefined m61_grenade(uint param_1)
 */
void m61_grenade(uint param_1)

{
  GetClassPtr<CM61Grenade>(param_1);
  return;
}

/* 0007d01c  TSExplosion  (2458 bytes)
 * undefined TSExplosion(float * param_1, undefined4 param_2, undefined4 param_3, float param_4, undefined4 param_5, float param_6, float param_7)
 */
/* WARNING: Type propagation algorithm not settling */
/* TSExplosion(Vector, entvars_s *, entvars_s *, float, int, float, float) */

void TSExplosion(float *param_1,undefined4 param_2,int param_3,float param_4,undefined4 param_5,
                float param_6,float param_7)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  char *pcVar4;
  int *piVar5;
  uint uVar6;
  float fVar7;
  bool bVar8;
  undefined4 *puVar9;
  undefined3 extraout_var;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  int *piVar14;
  float *pfVar15;
  float *pfVar16;
  undefined4 *puVar17;
  undefined2 in_FPUControlWord;
  int aiStackY_144 [2];
  undefined1 auStack_11c [24];
  float *local_104;
  float local_100 [2];
  float *local_f8;
  float local_f4 [9];
  float local_d0 [11];
  float local_a4 [8];
  int local_84;
  undefined2 local_80;
  undefined2 uStack_7e;
  float local_7c [8];
  int local_5c [3];
  float local_50 [8];
  int local_30 [8];
  
  piVar14 = (int *)0x0;
  param_1[2] = param_1[2] + 1.0;
  pfVar15 = param_1;
  pfVar16 = local_7c;
  for (iVar10 = 3; iVar10 != 0; iVar10 = iVar10 + -1) {
    *pfVar16 = *pfVar15;
    pfVar15 = pfVar15 + 1;
    pfVar16 = pfVar16 + 1;
  }
  local_7c[2] = local_7c[2] + 50.0;
  UTIL_ScreenShake(param_1,param_4,80.0,1.0,param_7 + param_7);
  (*g_engfuncs.pfnMessageBegin)(2,gmsgTSCreateDebris,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteCoord)(*param_1);
  (*g_engfuncs.pfnWriteCoord)(param_1[1]);
  (*g_engfuncs.pfnWriteCoord)(param_1[2]);
  _local_80 = CONCAT22(uStack_7e,in_FPUControlWord);
  local_84 = (int)ROUND(param_4);
  (*g_engfuncs.pfnWriteCoord)((float)local_84);
  (*g_engfuncs.pfnWriteCoord)(0.0);
  (*g_engfuncs.pfnWriteCoord)(0.0);
  (*g_engfuncs.pfnWriteByte)(1);
  (*g_engfuncs.pfnMessageEnd)();
  local_f4[0] = param_4 / (param_7 - param_6);
  local_f8 = local_a4 + 2;
  local_104 = local_d0 + 1;
  puVar13 = auStack_11c;
  do {
    do {
      *(undefined4 *)(puVar13 + -8) = *(undefined4 *)(puVar13 + 0x138);
      *(undefined4 *)(puVar13 + -0xc) = *(undefined4 *)(puVar13 + 0x120);
      *(int **)(puVar13 + -0x10) = piVar14;
      *(undefined4 *)(puVar13 + -0x14) = 0x7d957;
      piVar14 = (int *)UTIL_FindEntityInSphere
                                 (*(int **)(puVar13 + -0x10),*(undefined4 *)(puVar13 + -0xc),
                                  *(undefined4 *)(puVar13 + -8));
      if (piVar14 == (int *)0x0) {
        *(undefined4 *)(puVar13 + -4) = 0x7d969;
        bVar8 = DoSpectacularNess();
        if (CONCAT31(extraout_var,bVar8) != 0) {
          puVar9 = *(undefined4 **)(puVar13 + 0x120);
          *(undefined4 *)(puVar13 + 0x80) = *puVar9;
          *(undefined4 *)(puVar13 + 0x84) = puVar9[1];
          *(undefined4 *)(puVar13 + 0x88) = puVar9[2];
          *(undefined2 *)(puVar13 + -0x10) = 0;
          *(undefined4 *)(puVar13 + -0x14) = 0;
          *(undefined4 *)(puVar13 + -0x18) = 0x3f800000;
          *(undefined4 *)(puVar13 + -0x1c) = 0x3e800000;
          *(undefined1 **)(puVar13 + -0x20) = puVar13 + 0x80;
          *(undefined4 *)(puVar13 + -0x24) = 0x7d9b0;
          CTSSlowMotionPoint::CreateSlowMotionPoint();
        }
        return;
      }
    } while (*(int *)(puVar13 + 0x124) == *piVar14);
    puVar12 = puVar13;
    if ((*(float *)(*piVar14 + 0x16c) != 0.0) && (*(int *)(*piVar14 + 0x170) != 2)) {
      iVar10 = piVar14[0x18];
      *(int **)(puVar13 + -0x10) = piVar14;
      pcVar3 = *(code **)(iVar10 + 0xb4);
      *(undefined4 *)(puVar13 + -0x14) = 0x7d204;
      iVar10 = (*pcVar3)();
      if (iVar10 != 0) {
        iVar10 = piVar14[0x18];
        *(int **)(puVar13 + -0x10) = piVar14;
        pcVar3 = *(code **)(iVar10 + 200);
        *(undefined4 *)(puVar13 + -0x14) = 0x7d218;
        iVar10 = (*pcVar3)();
        if (iVar10 != 0) {
          *(undefined4 *)(puVar13 + 0x80) = 0x435e0000;
          *(undefined4 *)(puVar13 + 0x84) = 0x43630000;
          *(undefined4 *)(puVar13 + 0x88) = 0x433d0000;
          *(undefined4 *)(puVar13 + -0xc) = 0;
          *(undefined4 *)(puVar13 + -0x10) = 0x4b;
          *(undefined4 *)(puVar13 + -0x14) = 0x3d4ccccd;
          *(undefined4 *)(puVar13 + -0x18) = 0x3dcccccd;
          *(undefined4 *)(puVar13 + -0x1c) = *(undefined4 *)(puVar13 + 0x24);
          *(int **)(puVar13 + -0x20) = piVar14;
          *(undefined4 *)(puVar13 + -0x24) = 0x7d261;
          UTIL_ScreenFade(*(int **)(puVar13 + -0x20),*(float **)(puVar13 + -0x1c),
                          *(float *)(puVar13 + -0x18),*(float *)(puVar13 + -0x14),puVar13[-0x10],
                          *(undefined2 *)(puVar13 + -0xc));
        }
      }
      iVar10 = piVar14[0x18];
      *(int **)(puVar13 + -0xc) = piVar14;
      *(undefined4 *)(puVar13 + -0x10) = *(undefined4 *)(puVar13 + 0x24);
      pcVar3 = *(code **)(iVar10 + 0xf8);
      *(undefined4 *)(puVar13 + -0x14) = 0x7d275;
      (*pcVar3)();
      puVar9 = *(undefined4 **)(puVar13 + 0x20);
      puVar17 = (undefined4 *)(puVar13 + 0xac);
      for (iVar10 = 3; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar17 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar17 = puVar17 + 1;
      }
      *(float *)(puVar13 + 0xb4) = *(float *)(puVar13 + 0xb4) + 1.0;
      *(undefined1 **)(puVar13 + -0x14) = puVar13 + 0xbc;
      *(undefined4 *)(puVar13 + -0x18) = *(undefined4 *)(*(int *)(puVar13 + 0x120) + 0x208);
      *(undefined4 *)(puVar13 + -0x1c) = 0;
      *(undefined1 **)(puVar13 + -0x20) = puVar13 + 0xac;
      *(undefined4 *)(puVar13 + -0x24) = *(undefined4 *)(puVar13 + 0x11c);
      *(undefined4 *)(puVar13 + -0x28) = 0x7d2ca;
      UTIL_TraceLine(*(undefined4 *)(puVar13 + -0x24),*(undefined4 *)(puVar13 + -0x20),
                     *(int *)(puVar13 + -0x1c),*(undefined4 *)(puVar13 + -0x18),
                     *(undefined4 *)(puVar13 + -0x14));
      pfVar15 = *(float **)(puVar13 + 0x11c);
      fVar1 = *pfVar15;
      fVar2 = pfVar15[1];
      fVar7 = pfVar15[2] - *(float *)(puVar13 + 0xb4);
      *(float *)(puVar13 + 0x7c) = fVar1 - *(float *)(puVar13 + 0xac);
      *(float *)(puVar13 + 0x80) = fVar2 - *(float *)(puVar13 + 0xb0);
      *(float *)(puVar13 + 0x84) = fVar7;
      *(float *)(puVar13 + 0x78) =
           SQRT(fVar7 * fVar7 +
                (fVar2 - *(float *)(puVar13 + 0xb0)) * *(float *)(puVar13 + 0x80) +
                (fVar1 - *(float *)(puVar13 + 0xac)) * *(float *)(puVar13 + 0x7c));
      *(undefined4 *)(puVar13 + 0x28) = *(undefined4 *)(puVar13 + 0x128);
      if ((*(float *)(puVar13 + 0x130) < *(float *)(puVar13 + 0x78)) &&
         (fVar1 = *(float *)(puVar13 + 0x128) -
                  (*(float *)(puVar13 + 0x78) - *(float *)(puVar13 + 0x130)) *
                  *(float *)(puVar13 + 0x24), *(float *)(puVar13 + 0x28) = fVar1, fVar1 < 0.0)) {
        *(undefined4 *)(puVar13 + 0x28) = 0;
      }
      if ((*(float *)(puVar13 + 0xcc) == 1.0) ||
         (*(int *)(puVar13 + 0xec) == *(int *)(*piVar14 + 0x208))) {
        *(undefined4 *)(puVar13 + -8) = 0x7d3a5;
        ClearMultiDamage();
        pfVar15 = *(float **)(puVar13 + 0x11c);
        fVar1 = *(float *)(puVar13 + 0xac) - *pfVar15;
        fVar7 = *(float *)(puVar13 + 0xb0) - pfVar15[1];
        fVar2 = *(float *)(puVar13 + 0xb4) - pfVar15[2];
        *(float *)(puVar13 + 0x5c) = fVar1;
        *(float *)(puVar13 + 0x60) = fVar7;
        *(float *)(puVar13 + 100) = fVar2;
        *(float *)(puVar13 + 0x78) = SQRT(fVar2 * fVar2 + fVar7 * fVar7 + fVar1 * fVar1);
        if (*(float *)(puVar13 + 0x78) == 0.0) {
          *(undefined4 *)(puVar13 + 0x7c) = 0;
          *(undefined4 *)(puVar13 + 0x80) = 0;
          *(undefined4 *)(puVar13 + 0x84) = 0x3f800000;
        }
        else {
          fVar1 = 1.0 / *(float *)(puVar13 + 0x78);
          *(float *)(puVar13 + 0x7c) = fVar1 * *(float *)(puVar13 + 0x5c);
          *(float *)(puVar13 + 0x80) = fVar1 * *(float *)(puVar13 + 0x60);
          *(float *)(puVar13 + 0x84) = fVar1 * *(float *)(puVar13 + 100);
        }
        iVar10 = piVar14[0x18];
        *(undefined4 *)(puVar13 + -0x10) = *(undefined4 *)(puVar13 + 300);
        *(undefined1 **)(puVar13 + -0x14) = puVar13 + 0xbc;
        *(undefined4 *)(puVar13 + -0x18) = *(undefined4 *)(puVar13 + 0x20);
        *(undefined4 *)(puVar13 + -0x1c) = *(undefined4 *)(puVar13 + 0x28);
LAB_0007d62d:
        *(undefined4 *)(puVar13 + -0x20) = *(undefined4 *)(puVar13 + 0x124);
        *(int **)(puVar13 + -0x24) = piVar14;
        pcVar3 = *(code **)(iVar10 + 0x54);
        *(undefined4 *)(puVar13 + -0x28) = 0x7d638;
        (*pcVar3)();
        *(undefined4 *)(puVar13 + -0x10) = *(undefined4 *)(puVar13 + 0x124);
        *(undefined4 *)(puVar13 + -0x14) = *(undefined4 *)(puVar13 + 0x120);
        *(undefined4 *)(puVar13 + -0x18) = 0x7d64e;
        ApplyMultiDamage(*(undefined4 *)(puVar13 + -0x14),*(undefined4 *)(puVar13 + -0x10));
        puVar12 = puVar13 + -4;
      }
      else {
        puVar9 = (undefined4 *)(puVar13 + 0xd0);
        puVar17 = (undefined4 *)(puVar13 + 0x7c);
        for (iVar10 = 3; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar17 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar17 = puVar17 + 1;
        }
        if (*(int *)(puVar13 + 0xc0) != 0) {
          puVar9 = *(undefined4 **)(puVar13 + 0x11c);
          puVar17 = (undefined4 *)(puVar13 + 0x7c);
          for (iVar10 = 3; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar17 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar17 = puVar17 + 1;
          }
        }
        iVar10 = *piVar14;
        *(undefined1 **)(puVar13 + -0x14) = puVar13 + 0xbc;
        *(undefined4 *)(puVar13 + -0x18) = *(undefined4 *)(iVar10 + 0x208);
        *(undefined4 *)(puVar13 + -0x1c) = 0;
        *(undefined4 *)(puVar13 + -0x20) = *(undefined4 *)(puVar13 + 0x11c);
        *(undefined1 **)(puVar13 + -0x24) = puVar13 + 0xac;
        *(undefined4 *)(puVar13 + -0x28) = 0x7d4db;
        UTIL_TraceLine(*(undefined4 *)(puVar13 + -0x24),*(undefined4 *)(puVar13 + -0x20),
                       *(int *)(puVar13 + -0x1c),*(undefined4 *)(puVar13 + -0x18),
                       *(undefined4 *)(puVar13 + -0x14));
        puVar12 = puVar13 + -4;
        if (*(float *)(puVar13 + 0xcc) != 1.0) {
          fVar1 = *(float *)(puVar13 + 0xd8) - *(float *)(puVar13 + 0x84);
          *(float *)(puVar13 + 0x5c) = *(float *)(puVar13 + 0xd0) - *(float *)(puVar13 + 0x7c);
          *(float *)(puVar13 + 0x60) = *(float *)(puVar13 + 0xd4) - *(float *)(puVar13 + 0x80);
          *(float *)(puVar13 + 100) = fVar1;
          *(float *)(puVar13 + 0x1c) =
               SQRT(fVar1 * fVar1 +
                    (*(float *)(puVar13 + 0xd4) - *(float *)(puVar13 + 0x80)) *
                    *(float *)(puVar13 + 0x60) +
                    (*(float *)(puVar13 + 0xd0) - *(float *)(puVar13 + 0x7c)) *
                    *(float *)(puVar13 + 0x5c));
          puVar12 = puVar13 + -4;
          if (*(float *)(puVar13 + 0x1c) < *(float *)(puVar13 + 0x28)) {
            *(undefined4 *)(puVar13 + -8) = 0x7d560;
            ClearMultiDamage();
            pfVar15 = *(float **)(puVar13 + 0x11c);
            fVar1 = *(float *)(puVar13 + 0xac) - *pfVar15;
            fVar7 = *(float *)(puVar13 + 0xb0) - pfVar15[1];
            fVar2 = *(float *)(puVar13 + 0xb4) - pfVar15[2];
            *(float *)(puVar13 + 0x4c) = fVar1;
            *(float *)(puVar13 + 0x50) = fVar7;
            *(float *)(puVar13 + 0x54) = fVar2;
            *(float *)(puVar13 + 0x78) = SQRT(fVar2 * fVar2 + fVar7 * fVar7 + fVar1 * fVar1);
            if (*(float *)(puVar13 + 0x78) == 0.0) {
              *(undefined4 *)(puVar13 + 0x5c) = 0;
              *(undefined4 *)(puVar13 + 0x60) = 0;
              *(undefined4 *)(puVar13 + 100) = 0x3f800000;
            }
            else {
              fVar1 = 1.0 / *(float *)(puVar13 + 0x78);
              *(float *)(puVar13 + 0x5c) = fVar1 * *(float *)(puVar13 + 0x4c);
              *(float *)(puVar13 + 0x60) = fVar1 * *(float *)(puVar13 + 0x50);
              *(float *)(puVar13 + 100) = fVar1 * *(float *)(puVar13 + 0x54);
            }
            iVar10 = piVar14[0x18];
            *(undefined4 *)(puVar13 + -0x10) = *(undefined4 *)(puVar13 + 300);
            *(undefined1 **)(puVar13 + -0x14) = puVar13 + 0xbc;
            *(undefined1 **)(puVar13 + -0x18) = puVar13 + 0x5c;
            *(float *)(puVar13 + -0x1c) = *(float *)(puVar13 + 0x28) - *(float *)(puVar13 + 0x1c);
            goto LAB_0007d62d;
          }
        }
      }
    }
    *(int **)(puVar12 + 0x1c) = piVar14;
    pcVar4 = gpGlobals->pStringBase;
    iVar10 = *(int *)*piVar14;
    *(char **)(puVar12 + -0xc) = "WorldGun";
    *(char **)(puVar12 + -0x10) = pcVar4 + iVar10;
    *(undefined4 *)(puVar12 + -0x14) = 0x7d678;
    iVar10 = strcmp(*(char **)(puVar12 + -0x10),*(char **)(puVar12 + -0xc));
    puVar13 = puVar12;
    if (iVar10 == 0) {
      *(int *)(puVar12 + -0xc) = *piVar14 + 8;
      *(int *)(puVar12 + -0x10) = *piVar14;
      *(undefined4 *)(puVar12 + -0x14) = 0x7d695;
      UTIL_SetOrigin(*(int *)(puVar12 + -0x10),*(undefined4 *)(puVar12 + -0xc));
      *(undefined4 *)(puVar12 + 0x80) = 0;
      *(undefined4 *)(puVar12 + 0x84) = 0;
      *(undefined4 *)(puVar12 + 0x88) = 0;
      *(undefined4 *)(puVar12 + 0x50) = 0;
      *(undefined4 *)(puVar12 + 0x54) = 0;
      *(undefined4 *)(puVar12 + 0x58) = 0;
      *(undefined4 *)(puVar12 + -8) = *(undefined4 *)(puVar12 + 0x24);
      *(undefined4 *)(puVar12 + -0xc) = *(undefined4 *)(puVar12 + 0x18);
      *(int *)(puVar12 + -0x10) = *piVar14;
      *(undefined4 *)(puVar12 + -0x14) = 0x7d6cf;
      UTIL_SetSize(*(int *)(puVar12 + -0x10),*(undefined4 *)(puVar12 + -0xc),
                   *(undefined4 *)(puVar12 + -8));
      piVar14[5] = -0x10000;
      piVar14[6] = (int)CTSWorldGun::BounceTouch;
      piVar14[3] = -0x10000;
      piVar14[4] = (int)CTSWorldGun::Fall;
      *(float *)(*piVar14 + 0x104) = gpGlobals->time + 0.1;
      *(undefined4 *)(*piVar14 + 0x108) = 10;
      *(undefined4 *)(*piVar14 + 0x10c) = 2;
      *(undefined4 *)(*piVar14 + 0x11c) = 0x3f333333;
      *(undefined4 *)(*piVar14 + 0x120) = 0x3f4ccccd;
      iVar10 = *piVar14;
      fVar1 = *(float *)(iVar10 + 8) - *(float *)(puVar12 + 0xa0);
      fVar7 = *(float *)(iVar10 + 0xc) - *(float *)(puVar12 + 0xa4);
      fVar2 = *(float *)(iVar10 + 0x10) - *(float *)(puVar12 + 0xa8);
      *(float *)(puVar12 + 0x80) = fVar1;
      *(float *)(puVar12 + 0x84) = fVar7;
      *(float *)(puVar12 + 0x88) = fVar2;
      iVar10 = *piVar14;
      pfVar15 = *(float **)(puVar12 + 0x24);
      *(float *)(puVar12 + 0x7c) = SQRT(fVar2 * fVar2 + fVar7 * fVar7 + fVar1 * fVar1);
      *(undefined4 *)(puVar12 + 0xc) = 0;
      if (*(float *)(puVar12 + 0x7c) == *(float *)(puVar12 + 0xc)) {
        *(undefined4 *)(puVar12 + 0x30) = 0;
        *(undefined4 *)(puVar12 + 0x34) = 0;
        *(undefined4 *)(puVar12 + 0x38) = 0x3f800000;
      }
      else {
        fVar7 = 1.0 / *(float *)(puVar12 + 0x7c);
        fVar1 = pfVar15[1];
        fVar2 = pfVar15[2];
        *(float *)(puVar12 + 0x30) = fVar7 * *pfVar15;
        *(float *)(puVar12 + 0x34) = fVar7 * fVar1;
        *(float *)(puVar12 + 0x38) = fVar7 * fVar2;
      }
      *(float *)(puVar12 + 0x7c) =
           SQRT(*(float *)(puVar12 + 0x88) * *(float *)(puVar12 + 0x88) +
                *(float *)(puVar12 + 0x84) * *(float *)(puVar12 + 0x84) +
                *(float *)(puVar12 + 0x80) * *(float *)(puVar12 + 0x80));
      fVar1 = *(float *)(puVar12 + 0x138) - *(float *)(puVar12 + 0x7c);
      *(float *)(puVar12 + 0x40) = fVar1 * *(float *)(puVar12 + 0x30);
      *(float *)(puVar12 + 0x44) = fVar1 * *(float *)(puVar12 + 0x34);
      *(float *)(puVar12 + 0x48) = fVar1 * *(float *)(puVar12 + 0x38);
      *(undefined4 *)(puVar12 + -0x10) = *(undefined4 *)(*(int *)(puVar12 + 0x1c) + 0x88);
      *(undefined4 *)(puVar12 + -0x14) = 0x7d85c;
      puVar9 = get_weapon_info(*(uint *)(puVar12 + -0x10));
      *(ushort *)(puVar12 + -2) = (ushort)*(byte *)(puVar9 + 0x34);
      fVar1 = (float)*(short *)(puVar12 + -2);
      *(float *)(puVar12 + 0x60) = *(float *)(puVar12 + 0x40) / fVar1;
      *(float *)(puVar12 + 100) = *(float *)(puVar12 + 0x44) / fVar1;
      *(float *)(puVar12 + 0x68) = *(float *)(puVar12 + 0x48) / fVar1;
      *(float *)(puVar12 + 0x50) = *(float *)(puVar12 + 0x60) * 10.0;
      *(float *)(puVar12 + 0x54) = *(float *)(puVar12 + 100) * 10.0;
      *(float *)(puVar12 + 0x58) = *(float *)(puVar12 + 0x68) * 10.0;
      puVar9 = *(undefined4 **)(puVar12 + 0x18);
      puVar17 = (undefined4 *)(iVar10 + 0x20);
      for (iVar11 = 3; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar17 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar17 = puVar17 + 1;
      }
      piVar5 = *(int **)(puVar12 + 0x1c);
      iVar10 = *piVar5;
      uVar6 = *(uint *)(iVar10 + 0x1a4);
      if ((uVar6 & 0x200) != 0) {
        *(uint *)(iVar10 + 0x1a4) = uVar6 & 0xfffffdff;
        iVar10 = *piVar5;
        *(float *)(iVar10 + 0x28) = ABS(*(float *)(iVar10 + 0x28)) + 50.0;
      }
      *(undefined4 *)(puVar12 + -0xc) = 300;
      *(undefined4 *)(puVar12 + -0x10) = 0xfffffed4;
      *(undefined4 *)(puVar12 + -0x14) = 0x7d910;
      iVar11 = (*g_engfuncs.pfnRandomLong)(*(int *)(puVar12 + -0x10),*(int *)(puVar12 + -0xc));
      iVar10 = **(int **)(puVar12 + 0x1c);
      *(int *)(puVar12 + -0x14) = iVar11;
      *(float *)(iVar10 + 0x60) = (float)*(int *)(puVar12 + -0x14);
      *(undefined4 *)(puVar12 + -0xc) = 300;
      *(undefined4 *)(puVar12 + -0x10) = 0xfffffed4;
      *(undefined4 *)(puVar12 + -0x14) = 0x7d930;
      iVar11 = (*g_engfuncs.pfnRandomLong)(*(int *)(puVar12 + -0x10),*(int *)(puVar12 + -0xc));
      iVar10 = **(int **)(puVar12 + 0x1c);
      *(int *)(puVar12 + -0x14) = iVar11;
      *(float *)(iVar10 + 100) = (float)*(int *)(puVar12 + -0x14);
    }
  } while( true );
}

/* 0007d9c0  knife  (33 bytes)
 * undefined knife(uint param_1)
 */
void knife(uint param_1)

{
  GetClassPtr<CTSKnife>(param_1);
  return;
}

/* 0007ed5c  GetClassPtr<CTSShrapnel>  (152 bytes)
 * CTSShrapnel * GetClassPtr<CTSShrapnel>(uint param_1)
 */
/* CTSShrapnel * GetClassPtr<CTSShrapnel>(CTSShrapnel *) */

CTSShrapnel * GetClassPtr<CTSShrapnel>(uint param_1)

{
  edict_t *peVar1;
  CTSShrapnel *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSShrapnel *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSShrapnel *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x9c);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSPhysicObject_virtual_table;
    pCVar2->vtable = (void **)CTSGrenade_virtual_table;
    pCVar2->vtable = (void **)CTSShrapnel_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 0007edf4  GetClassPtr<CM61Grenade>  (152 bytes)
 * CM61Grenade * GetClassPtr<CM61Grenade>(uint param_1)
 */
/* CM61Grenade * GetClassPtr<CM61Grenade>(CM61Grenade *) */

CM61Grenade * GetClassPtr<CM61Grenade>(uint param_1)

{
  edict_t *peVar1;
  CM61Grenade *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CM61Grenade *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CM61Grenade *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x94);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSPhysicObject_virtual_table;
    pCVar2->vtable = (void **)CTSGrenade_virtual_table;
    pCVar2->vtable = (void **)CM61Grenade_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 0007ee8c  GetClassPtr<CTSKnife>  (152 bytes)
 * CTSKnife * GetClassPtr<CTSKnife>(uint param_1)
 */
/* CTSKnife * GetClassPtr<CTSKnife>(CTSKnife *) */

CTSKnife * GetClassPtr<CTSKnife>(uint param_1)

{
  edict_t *peVar1;
  CTSKnife *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSKnife *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSKnife *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0xa4);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CTSPhysicObject_virtual_table;
    pCVar2->vtable = (void **)CTSGrenade_virtual_table;
    pCVar2->vtable = (void **)CTSKnife_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 0007ef24  CTSPhysicObject_type_info_function  (70 bytes)
 * undefined4 * CTSPhysicObject_type_info_function(void)
 */
/* CTSPhysicObject type_info function */

undefined4 * CTSPhysicObject_type_info_function(void)

{
  if (CTSPhysicObject_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CTSPhysicObject_type_info_node,"15CTSPhysicObject",&CBaseEntity_type_info_node);
  }
  return &CTSPhysicObject_type_info_node;
}

/* 0007ef6c  CTSGrenade_type_info_function  (70 bytes)
 * undefined4 * CTSGrenade_type_info_function(void)
 */
/* CTSGrenade type_info function */

undefined4 * CTSGrenade_type_info_function(void)

{
  if (CTSGrenade_type_info_node == 0) {
    CTSPhysicObject_type_info_function();
    __rtti_si(&CTSGrenade_type_info_node,"10CTSGrenade",&CTSPhysicObject_type_info_node);
  }
  return &CTSGrenade_type_info_node;
}

/* 0007efb4  CM61Grenade_type_info_function  (70 bytes)
 * undefined4 * CM61Grenade_type_info_function(void)
 */
/* CM61Grenade type_info function */

undefined4 * CM61Grenade_type_info_function(void)

{
  if (CM61Grenade_type_info_node == 0) {
    CTSGrenade_type_info_function();
    __rtti_si(&CM61Grenade_type_info_node,"11CM61Grenade",&CTSGrenade_type_info_node);
  }
  return &CM61Grenade_type_info_node;
}

/* 0007f004  CTSKnife_type_info_function  (70 bytes)
 * undefined4 * CTSKnife_type_info_function(void)
 */
/* CTSKnife type_info function */

undefined4 * CTSKnife_type_info_function(void)

{
  if (CTSKnife_type_info_node == 0) {
    CTSGrenade_type_info_function();
    __rtti_si(&CTSKnife_type_info_node,"8CTSKnife",&CTSGrenade_type_info_node);
  }
  return &CTSKnife_type_info_node;
}

/* 0007f054  CTSShrapnel_type_info_function  (70 bytes)
 * undefined4 * CTSShrapnel_type_info_function(void)
 */
/* CTSShrapnel type_info function */

undefined4 * CTSShrapnel_type_info_function(void)

{
  if (CTSShrapnel_type_info_node == 0) {
    CTSGrenade_type_info_function();
    __rtti_si(&CTSShrapnel_type_info_node,"11CTSShrapnel",&CTSGrenade_type_info_node);
  }
  return &CTSShrapnel_type_info_node;
}

/* 0007f0a4  GetBodyByItems  (234 bytes)
 * int GetBodyByItems(int param_1, uint param_2)
 */
/* GetBodyByItems(int, int) */

int GetBodyByItems(int param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((param_2 & 1) != 0) {
    iVar2 = (int)*(short *)(&DAT_0017dc68 + param_1 * 0x3dc);
  }
  if ((param_2 & 6) == 6) {
    if (*(short *)(&DAT_0017dc70 + param_1 * 0x3dc) == -1) goto LAB_0007f114;
    sVar1 = *(short *)(&DAT_0017dc70 + param_1 * 0x3dc);
  }
  else {
LAB_0007f114:
    if ((param_2 & 2) != 0) {
      iVar2 = iVar2 + *(short *)(&DAT_0017dc6a + param_1 * 0x3dc);
    }
    if ((param_2 & 4) == 0) goto LAB_0007f15c;
    sVar1 = *(short *)(&DAT_0017dc6c + param_1 * 0x3dc);
  }
  iVar2 = iVar2 + sVar1;
LAB_0007f15c:
  if ((param_2 & 8) == 0) {
    if (param_1 == 0x24) {
      iVar2 = iVar2 + 1;
    }
  }
  else {
    iVar2 = iVar2 + *(short *)(&DAT_0017dc6e + param_1 * 0x3dc);
  }
  return iVar2;
}

/* 0007f190  get_weapon_info  (51 bytes)
 * undefined4 * get_weapon_info(uint param_1)
 */
/* get_weapon_info(tsweapon_t) */

undefined4 * get_weapon_info(uint param_1)

{
  undefined4 *puVar1;
  
  puVar1 = &global_weapon_info;
  if (param_1 < 0x26) {
    puVar1 = &global_weapon_info + param_1 * 0xf7;
  }
  return puVar1;
}

/* 0007f1c4  get_ammo_info  (48 bytes)
 * undefined4 * get_ammo_info(uint param_1)
 */
/* get_ammo_info(int) */

undefined4 * get_ammo_info(uint param_1)

{
  undefined4 *puVar1;
  
  puVar1 = &global_ammo_info;
  if (param_1 < 0x10) {
    puVar1 = &global_ammo_info + param_1 * 0xe;
  }
  return puVar1;
}

/* 0007f1f4  compile_range_damage  (153 bytes)
 * undefined compile_range_damage(void)
 */
/* compile_range_damage(void) */

void compile_range_damage(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
    iVar1 = iVar2;
    if (iVar2 < 1) {
      iVar1 = 1;
    }
    *(float *)((int)&range_damage_multipler + iVar3) = 1.0 / SQRT((float)iVar1 * 0.1);
    if (1.0 < *(float *)((int)&range_damage_multipler + iVar3)) {
      *(undefined4 *)((int)&range_damage_multipler + iVar3) = 0x3f800000;
    }
    if (*(float *)((int)&range_damage_multipler + iVar3) < 0.0) {
      *(undefined4 *)((int)&range_damage_multipler + iVar3) = 0;
    }
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 10000);
  return;
}

/* 0007f290  get_range_multipler  (53 bytes)
 * longdouble get_range_multipler(int param_1)
 */
/* get_range_multipler(int) */

longdouble get_range_multipler(int param_1)

{
  longdouble lVar1;
  
  if (param_1 < 0) {
    lVar1 = (longdouble)range_damage_multipler;
  }
  else if (param_1 < 10000) {
    lVar1 = (longdouble)(&range_damage_multipler)[param_1];
  }
  else {
    lVar1 = (longdouble)DAT_00190dbc;
  }
  return lVar1;
}

/* 0007f2cc  Set_ammo_count  (572 bytes)
 * undefined Set_ammo_count(undefined4 param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Set_ammo_count(int) */

void Set_ammo_count(undefined4 param_1)

{
  switch(param_1) {
  default:
    _DAT_00186e44 = 0xd2;
    _DAT_00186f24 = 0x46;
    _DAT_00186f94 = 0xa0;
    _DAT_00186e7c = 0xaf;
    _DAT_00187004 = 0x5a;
    _DAT_00186eec = 0x78;
    _DAT_00186f5c = 0x5a;
    _DAT_00186fcc = 0x1e;
    _DAT_00186eb4 = 0x3c;
    _DAT_0018703c = 0x96;
    _DAT_00187074 = 0x32;
    _DAT_001870ac = 300;
    _DAT_001870e4 = 0x23;
    break;
  case 1:
    _DAT_00186e44 = 0x5a;
    _DAT_00186f24 = 0x15;
    _DAT_00186f94 = 0x28;
    _DAT_00186e7c = 0x32;
    _DAT_00187004 = 0x1e;
    _DAT_00186eec = 0x3c;
    _DAT_00186f5c = 0x3c;
    _DAT_00186fcc = 10;
    _DAT_00186eb4 = 0x20;
    _DAT_0018703c = 0x22;
    _DAT_00187074 = 0xf;
    _DAT_001870ac = 100;
    _DAT_001870e4 = 0xf;
    break;
  case 2:
    _DAT_00186e44 = 0x1e;
    _DAT_00186f24 = 7;
    _DAT_00186f94 = 0x14;
    _DAT_00186e7c = 0x19;
    _DAT_00187004 = 0xf;
    _DAT_00186eec = 0x1e;
    _DAT_00186f5c = 0x1e;
    _DAT_00186fcc = 5;
    _DAT_00186eb4 = 0x10;
    _DAT_0018703c = 0x11;
    _DAT_00187074 = 5;
    _DAT_001870ac = 0x28;
    _DAT_001870e4 = 5;
    break;
  case 3:
    _DAT_00186e44 = 0;
    _DAT_00186f24 = 0;
    _DAT_00186f94 = 0;
    _DAT_00186e7c = 0;
    _DAT_00187004 = 0;
    _DAT_00186eec = 0;
    _DAT_00186f5c = 0;
    _DAT_00186fcc = 0;
    _DAT_00186eb4 = 0;
    _DAT_0018703c = 0;
    _DAT_00187074 = 0;
    _DAT_001870ac = 0;
    _DAT_001870e4 = 0;
  }
  return;
}

/* 0007f51c  compile_ammo_info  (1302 bytes)
 * undefined compile_ammo_info(void)
 */
/* compile_ammo_info(void) */

void compile_ammo_info(void)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  puVar1 = &global_ammo_info;
  for (iVar2 = 0xe0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  iVar2 = 0xf;
  puVar1 = &DAT_00187164;
  do {
    *puVar1 = 0x3f800000;
    puVar1[-0xe] = 0x3f800000;
    puVar1[-0x1c] = 0x3f800000;
    puVar1[-0x2a] = 0x3f800000;
    puVar1[-0x38] = 0x3f800000;
    puVar1[-0x46] = 0x3f800000;
    puVar1[-0x54] = 0x3f800000;
    puVar1[-0x62] = 0x3f800000;
    puVar1 = puVar1 + -0x70;
    iVar2 = iVar2 + -8;
  } while (-1 < iVar2);
  DAT_00186e38 = 0x3ecccccd;
  DAT_00186e3c = 0x32;
  DAT_00186e40 = 1;
  DAT_00186e48 = 0x1e;
  DAT_00186e4c = 0x2000;
  DAT_00186e50 = 0x3e4ccccd;
  DAT_00186e58 = 0x50;
  DAT_00186e5c = 0x14a;
  puVar1 = &DAT_00107ff8;
  puVar4 = &DAT_00186e60;
  for (iVar2 = 2; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)puVar4 = *(undefined1 *)puVar1;
  DAT_00186f18 = 0x3e99999a;
  DAT_00186f1c = 0x46;
  DAT_00186f20 = 1;
  DAT_00186f28 = 10;
  DAT_00186f2c = 0x2000;
  DAT_00186f30 = 0x3f000000;
  DAT_00186f38 = 0x5a;
  DAT_00186f3c = 0x1e0;
  DAT_00186f40 = 0x4130352e;
  DAT_00186f44 = 0x45;
  DAT_00186f88 = 0x3f000000;
  DAT_00186f8c = 0x78;
  DAT_00186f90 = 1;
  DAT_00186f98 = 0x14;
  DAT_00186f9c = 0x2000;
  DAT_00186fa0 = 0x3f800000;
  DAT_00186fa8 = 100;
  DAT_00186fac = 0x2da;
  puVar1 = &DAT_00108007;
  puVar4 = &DAT_00186fb0;
  for (iVar2 = 2; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)puVar4 = *(undefined1 *)puVar1;
  DAT_00186e70 = 0x3ecccccd;
  DAT_00186e74 = 0x3c;
  DAT_00186e78 = 1;
  DAT_00186e80 = 0xc;
  DAT_00186e84 = 0x2000;
  DAT_00186e88 = 0x3e4ccccd;
  DAT_00186e90 = 0x5a;
  DAT_00186e94 = 0x118;
  puVar1 = &DAT_00108010;
  puVar4 = &DAT_00186e98;
  for (iVar2 = 1; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar1;
  *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
  DAT_00186ff8 = 0x3e99999a;
  DAT_00186ffc = 0x46;
  DAT_00187000 = 1;
  DAT_00187008 = 0xf;
  DAT_0018700c = 0x2000;
  DAT_00187010 = 0x3f000000;
  DAT_00187018 = 0x5a;
  DAT_0018701c = 0x1c2;
  pcVar3 = "10mm AUTO";
  puVar1 = &DAT_00187020;
  for (iVar2 = 2; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar1 = puVar1 + 1;
  }
  *(undefined2 *)puVar1 = *(undefined2 *)pcVar3;
  DAT_00186ee0 = 0x3e99999a;
  DAT_00186ee4 = 0x50;
  DAT_00186ee8 = 2;
  DAT_00186ef0 = 0x1e;
  DAT_00186ef4 = 0x2000;
  DAT_00186ef8 = 0x3f666666;
  DAT_00186f00 = 0x96;
  DAT_00186f04 = 900;
  pcVar3 = "5.56 Nato";
  puVar1 = &DAT_00186f08;
  for (iVar2 = 2; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar1 = puVar1 + 1;
  }
  *(undefined2 *)puVar1 = *(undefined2 *)pcVar3;
  DAT_00186f50 = 0x3e4ccccd;
  DAT_00186f54 = 100;
  DAT_00186f58 = 2;
  DAT_00186f60 = 0x1e;
  DAT_00186f64 = 0x2000;
  DAT_00186f68 = 0x3f333333;
  DAT_00186f70 = 0xaa;
  DAT_00186f74 = 0x316;
  puVar1 = &DAT_0010802b;
  puVar4 = &DAT_00186f78;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  DAT_00186fc0 = 0x3dcccccd;
  DAT_00186fc4 = 500;
  DAT_00186fc8 = 2;
  DAT_00186fd0 = 5;
  DAT_00186fd4 = 0x2000;
  DAT_00186fd8 = 0x3f800000;
  DAT_00186fe0 = 200;
  DAT_00186fe4 = 1000;
  DAT_00186fe8 = 0x4d423035;
  DAT_00186fec = 0x47;
  DAT_00186ea8 = 0x3e99999a;
  DAT_00186eac = 0x78;
  DAT_00186eb0 = 2;
  DAT_00186eb8 = 8;
  DAT_00186ebc = 0x2000;
  DAT_00186ec0 = 0;
  DAT_00186ec8 = 0x5a;
  DAT_00186ecc = 0x15e;
  pcVar3 = "SHELLS";
  puVar1 = &DAT_00186ed0;
  for (iVar2 = 1; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar1 = puVar1 + 1;
  }
  *(undefined2 *)puVar1 = *(undefined2 *)pcVar3;
  *(char *)((int)puVar1 + 2) = pcVar3[2];
  DAT_00187030 = 0x3f000000;
  DAT_00187034 = 100;
  DAT_00187038 = 1;
  DAT_00187040 = 0x11;
  DAT_00187044 = 0x2000;
  DAT_00187048 = 0x3f666666;
  DAT_00187050 = 0x46;
  DAT_00187054 = 0x15e;
  puVar1 = &DAT_00108044;
  puVar4 = &DAT_00187058;
  for (iVar2 = 1; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar1;
  *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
  DAT_00187068 = 0x3e99999a;
  DAT_0018706c = 0x96;
  DAT_00187070 = 1;
  DAT_00187078 = 5;
  DAT_0018707c = 0x2000;
  DAT_00187080 = 0x3f400000;
  DAT_00187088 = 0x14;
  DAT_0018708c = 400;
  pcVar3 = ".454 Casull";
  puVar1 = &DAT_00187090;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar1 = puVar1 + 1;
  }
  DAT_001870a0 = 0x3f000000;
  DAT_001870a4 = 0x1e;
  DAT_001870a8 = 1;
  DAT_001870b0 = 0x14;
  DAT_001870b4 = 0x2000;
  DAT_001870b8 = 0;
  DAT_001870c0 = 0x28;
  DAT_001870c4 = 300;
  puVar1 = &DAT_00108057;
  puVar4 = &DAT_001870c8;
  for (iVar2 = 1; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar1;
  *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
  DAT_001870d8 = 0x3e4ccccd;
  DAT_001870dc = 0x96;
  DAT_001870e0 = 2;
  DAT_001870e8 = 5;
  DAT_001870ec = 0x2000;
  DAT_001870f0 = 0x3f333333;
  DAT_001870f8 = 0xaa;
  DAT_001870fc = 0x352;
  puVar1 = &DAT_0010805e;
  puVar4 = &DAT_00187100;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  Set_ammo_count(0);
  return;
}

/* 0007fa34  SetSpartaWeapon  (67 bytes)
 * undefined SetSpartaWeapon(uint param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 */
/* SetSpartaWeapon(tsweapon_t, float, float, float, float) */

void SetSpartaWeapon(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = get_weapon_info(param_1);
  puVar1[10] = param_2;
  puVar1[0xc] = param_3;
  puVar1[0xd] = param_4;
  puVar1[7] = param_5;
  return;
}

/* 0007fa78  Sparta  (942 bytes)
 * undefined Sparta(void)
 */
/* Sparta(void) */

void Sparta(void)

{
  SetSpartaWeapon(1,0x3c23d70a,0x400ccccd,0x3bd4fdf4,0x41c00000);
  SetSpartaWeapon(9,0x3c23d70a,0x40800000,0,0x42040000);
  SetSpartaWeapon(10,0x3ca3d70a,0x40800000,0,0x42040000);
  SetSpartaWeapon(0xc,0x3ba3d70a,0x40f00000,0x3c4ccccd,0x42440000);
  SetSpartaWeapon(0xe,0x3b23d70a,0x3fc00000,0x3c23d70a,0x41b80000);
  SetSpartaWeapon(0x1e,0x3ba3d70a,0x3fc00000,0x3c23d70a,0x41b80000);
  SetSpartaWeapon(2,0x3c23d70a,0x40200000,0,0x41d80000);
  SetSpartaWeapon(8,0x3ca3d70a,0x40200000,0,0x41d80000);
  SetSpartaWeapon(0x15,0x3bf5c28f,0x40b00000,0,0x42200000);
  SetSpartaWeapon(0x16,0x3c23d70a,0x40a00000,0x3c4ccccd,0x421c0000);
  SetSpartaWeapon(0x1c,0x3ba3d70a,0x3eb33333,0x3c03126f,0x41700000);
  SetSpartaWeapon(0x1f,0x3b23d70a,0x41500000,0,0x42be0000);
  SetSpartaWeapon(0x24,0x3a83126f,0x40f00000,0,0x42c80000);
  SetSpartaWeapon(3,0x3ca3d70a,0x3fe00000,0x3bd4fdf4,0x41a00000);
  SetSpartaWeapon(0x10,0x3d23d70a,0x3fe00000,0x3bd4fdf4,0x41a00000);
  SetSpartaWeapon(6,0x3ba3d70a,0x3fa00000,0x3ba3d70a,0x41980000);
  SetSpartaWeapon(7,0x3ca3d70a,0x40100000,0x3b449ba6,0x41b80000);
  SetSpartaWeapon(0x11,0x3ccccccd,0x3f000000,0x3ac49ba6,0x41800000);
  SetSpartaWeapon(0x25,0x3d4ccccd,0x3f000000,0x3b449ba6,0x41800000);
  SetSpartaWeapon(0x13,0x3ba3d70a,0x3f800000,0x3bd4fdf4,0x41800000);
  SetSpartaWeapon(0x17,0x3c75c28f,0x40400000,0,0x41f80000);
  SetSpartaWeapon(5,0x3ba3d70a,0x40700000,0x3b83126f,0x42040000);
  SetSpartaWeapon(0x12,0x3a83126f,0x41200000,0x3dcccccd,0x43390000);
  SetSpartaWeapon(0xd,0x3b23d70a,0x40b00000,0x38d1b717,0x421c0000);
  SetSpartaWeapon(0xf,0x3ba3d70a,0x40000000,0x3c23d70a,0x41e80000);
  SetSpartaWeapon(0x1b,0x3ac49ba6,0x40800000,0x3ba3d70a,0x42200000);
  SetSpartaWeapon(4,0x3d0f5c29,0x41500000,0,0x41400000);
  SetSpartaWeapon(0x14,0x3d4ccccd,0x41200000,0,0x41400000);
  SetSpartaWeapon(0x21,0x3d8f5c29,0x41200000,0,0x41a80000);
  SetSpartaWeapon(0x1a,0x3d3851ec,0x41080000,0,0x41800000);
  SetSpartaWeapon(0xb,0x3d851eb8,0x40800000,0,0x40e00000);
  SetSpartaWeapon(0x20,0x3c75c28f,0x3fc00000,0x3ba3d70a,0x42040000);
  return;
}

/* 0007fe28  compile_weapons_info  (881 bytes)
 * undefined compile_weapons_info(void)
 */
/* compile_weapons_info(void) */

void compile_weapons_info(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &global_weapon_info;
  for (iVar1 = 0x24aa; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  Write_melee(0x17db40);
  Write_glock18(&DAT_0017df1c);
  Write_uzi(&DAT_0017e6d4);
  Write_uzi_akimbo(&DAT_00181900);
  Write_benellim3(&DAT_0017eab0);
  Write_m4(&DAT_0017ee8c);
  Write_mp5sd(&DAT_0017f268);
  Write_mp5k(&DAT_0017f644);
  Write_beretta_akimbo(&DAT_0017fa20);
  Write_beretta(&DAT_0017e2f8);
  Write_mk23(&DAT_0017fdfc);
  Write_mk23akimbo(&DAT_001801d8);
  Write_usas12(&DAT_001805b4);
  Write_desert(&DAT_00180990);
  Write_ak47(&DAT_00180d6c);
  Write_fnh(&DAT_00181148);
  Write_aug(&DAT_00181524);
  Write_skorpion(&DAT_00181cdc);
  Write_barrett(&DAT_001820b8);
  Write_pdw(&DAT_00182494);
  Write_spas12(&DAT_00182870);
  Write_gold(&DAT_00182c4c);
  Write_glock22(&DAT_00183028);
  Write_mac10(&DAT_00183404);
  Write_m61(&DAT_001837e0);
  Write_knife(&DAT_00183bbc);
  Write_mossberg(&DAT_00183f98);
  Write_m16(&DAT_00184374);
  Write_ruger(&DAT_00184750);
  Write_fnhakimbo(&DAT_00184f08);
  Write_bull(&DAT_001852e4);
  Write_m60(&DAT_001856c0);
  Write_sawedoff(&DAT_00185a9c);
  Write_katana(&DAT_00185e78);
  Write_sealknife(&DAT_00186254);
  Write_contender(&DAT_00186630);
  Write_skorpion_akimbo(&DAT_00186a0c);
  Sparta();
  compile_ammo_info();
  compile_range_damage();
  puVar2 = &g_iWeaponPriority;
  for (iVar1 = 0x26; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  g_iWeaponPriority = 0x12;
  DAT_00190dc4 = 0x20;
  DAT_00190dc8 = 0xd;
  DAT_00190dcc = 5;
  DAT_00190dd0 = 0xf;
  DAT_00190dd4 = 0x1b;
  DAT_00190dd8 = 0xb;
  DAT_00190ddc = 0x14;
  DAT_00190de0 = 4;
  DAT_00190de4 = 0x1a;
  DAT_00190de8 = 0x21;
  DAT_00190dec = 0x10;
  DAT_00190df0 = 0x25;
  DAT_00190df4 = 6;
  DAT_00190df8 = 0x17;
  DAT_00190dfc = 7;
  DAT_00190e00 = 3;
  DAT_00190e04 = 0x11;
  DAT_00190e08 = 0x13;
  DAT_00190e0c = 10;
  DAT_00190e10 = 8;
  DAT_00190e14 = 0x15;
  DAT_00190e18 = 0x1e;
  DAT_00190e1c = 0x1f;
  DAT_00190e20 = 0xc;
  DAT_00190e24 = 0x24;
  DAT_00190e28 = 0x16;
  DAT_00190e2c = 9;
  DAT_00190e30 = 2;
  DAT_00190e34 = 0xe;
  DAT_00190e38 = 0x1c;
  DAT_00190e3c = 1;
  DAT_00190e40 = 0x22;
  DAT_00190e44 = 0x19;
  DAT_00190e48 = 0x23;
  DAT_00190e4c = 0x18;
  DAT_00190e50 = 0x1d;
  return;
}

/* 0008019c  IsWeaponAkimbo  (55 bytes)
 * undefined4 IsWeaponAkimbo(int param_1)
 */
/* IsWeaponAkimbo(int) */

undefined4 IsWeaponAkimbo(int param_1)

{
  return CONCAT31((int3)((uint)(param_1 * 0xf7) >> 8),(&DAT_0017de88)[param_1 * 0x3dc] == '\x04');
}

/* 000801d4  IsOnlyAkimbo  (55 bytes)
 * undefined4 IsOnlyAkimbo(int param_1)
 */
/* IsOnlyAkimbo(int) */

undefined4 IsOnlyAkimbo(int param_1)

{
  return CONCAT31((int3)((uint)(param_1 * 0xf7) >> 8),(&DAT_0017de88)[param_1 * 0x3dc] == '\x05');
}

/* 0008020c  CalcSpread  (155 bytes)
 * undefined CalcSpread(float * param_1, int * param_2, float param_3)
 */
/* CalcSpread(float &, CBasePlayer *, float) */

void CalcSpread(float *param_1,int *param_2,float param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  spread_mul_1221 =
       SQRT(*(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28) +
            *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
            *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20)) / (100.0 / param_3);
  if (spread_mul_1221 < 1.0) {
    spread_mul_1221 = 1.0;
  }
  if (param_3 * 3.0 < spread_mul_1221) {
    spread_mul_1221 = param_3 * 3.0;
  }
  *param_1 = *param_1 * spread_mul_1221;
  return;
}

/* 00080518  weapon_tsgun  (33 bytes)
 * undefined weapon_tsgun(uint param_1)
 */
void weapon_tsgun(uint param_1)

{
  GetClassPtr<CTSGun>(param_1);
  return;
}

/* 00086e2c  GetCloseCombatVectors  (116 bytes)
 * undefined GetCloseCombatVectors(undefined4 param_1, float * param_2, float * param_3, float * param_4)
 */
/* GetCloseCombatVectors(int, Vector &, Vector &, Vector &, Vector &) */

void GetCloseCombatVectors(undefined4 param_1,float *param_2,float *param_3,float *param_4)

{
  int iVar1;
  float *pfVar2;
  float local_1c [4];
  
  local_1c[0] = *param_2 + *param_4 * 32.0;
  local_1c[1] = param_2[1] + param_4[1] * 32.0;
  local_1c[2] = param_2[2] + param_4[2] * 32.0;
  pfVar2 = local_1c;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    param_3 = param_3 + 1;
  }
  return;
}

/* 00086ea0  DropKickback  (437 bytes)
 * undefined DropKickback(float * param_1, float * param_2, float param_3, float param_4)
 */
/* DropKickback(float *, float *, float, float) */

void DropKickback(float *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longdouble lVar6;
  
  if ((0.0 <= param_3) && (fVar2 = SQRT(param_1[1] * param_1[1] + *param_1 * *param_1), 0.0 < fVar2)
     ) {
    fVar3 = *param_1 - *param_2;
    fVar5 = param_1[1] - param_2[1];
    fVar4 = SQRT(fVar5 * fVar5 + fVar3 * fVar3);
    fVar1 = *param_2;
    lVar6 = FixedSlowMul(param_4);
    if ((longdouble)15.0 * ((longdouble)param_3 / lVar6) <= (longdouble)fVar4) {
      lVar6 = FixedSlowMul(param_4);
      lVar6 = (longdouble)fVar3 * (longdouble)15.0 * ((longdouble)param_3 / lVar6);
    }
    else {
      lVar6 = (longdouble)fVar3 * (longdouble)fVar4;
    }
    *param_2 = (float)(lVar6 + (longdouble)fVar1);
    fVar1 = param_2[1];
    lVar6 = FixedSlowMul(param_4);
    if ((longdouble)15.0 * ((longdouble)param_3 / lVar6) <= (longdouble)fVar4) {
      lVar6 = FixedSlowMul(param_4);
      lVar6 = (longdouble)fVar5 * (longdouble)15.0 * ((longdouble)param_3 / lVar6);
    }
    else {
      lVar6 = (longdouble)fVar5 * (longdouble)fVar4;
    }
    param_2[1] = (float)(lVar6 + (longdouble)fVar1);
    *param_1 = *param_1 / fVar2;
    param_1[1] = param_1[1] / fVar2;
    lVar6 = FixedSlowMul(param_4);
    fVar2 = (float)((longdouble)fVar2 - (longdouble)15.0 * ((longdouble)param_3 / lVar6));
    if (fVar2 < 0.0) {
      fVar2 = 0.0;
    }
    *param_1 = fVar2 * *param_1;
    param_1[1] = fVar2 * param_1[1];
  }
  return;
}

/* 0008705c  GetWeaponType  (99 bytes)
 * undefined1 GetWeaponType(uint param_1)
 */
/* GetWeaponType(tsweapon_t) */

undefined1 GetWeaponType(uint param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  
  if (param_1 == 0x22) {
    uVar1 = 3;
  }
  else if (param_1 == 0x21) {
    uVar1 = 1;
  }
  else if ((param_1 == 0x10) || (param_1 == 0x25)) {
    uVar1 = 9;
  }
  else if ((param_1 == 10) || (((param_1 == 0x1e || (param_1 == 8)) || (param_1 == 0x15)))) {
    uVar1 = 8;
  }
  else {
    puVar2 = get_weapon_info(param_1);
    uVar1 = *(undefined1 *)(puVar2 + 0xd2);
  }
  return uVar1;
}

/* 000870c8  IsRestrictedWeapon  (131 bytes)
 * uint IsRestrictedWeapon(uint param_1, uint param_2)
 */
/* IsRestrictedWeapon(tsweapon_t, int) */

uint IsRestrictedWeapon(uint param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = param_1 - 1;
  if (uVar3 < 0x25) {
    if (param_2 == 0) {
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
    cVar1 = GetWeaponType(param_1);
    uVar2 = (int)cVar1 - 1;
    uVar3 = uVar2;
    if (8 < uVar2) goto switchD_00087111_caseD_1;
    uVar3 = (int)&__DT_PLTGOT - (&switchD_00087111::switchdataD_00087114)[uVar2];
    switch(uVar2) {
    case 0:
      bVar4 = (param_2 & 0x10) == 0;
      break;
    default:
      goto switchD_00087111_caseD_1;
    case 2:
      uVar3 = param_2 ^ 1;
      if ((uVar3 & 1) == 0) goto switchD_00087111_caseD_1;
      goto LAB_00087144;
    case 5:
    case 6:
      bVar4 = (param_2 & 8) == 0;
      break;
    case 7:
      bVar4 = (param_2 & 2) == 0;
      break;
    case 8:
      bVar4 = (param_2 & 4) == 0;
    }
    if (bVar4) {
LAB_00087144:
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
  }
switchD_00087111_caseD_1:
  return uVar3 & 0xffffff00;
}

/* 00087170  GetClassPtr<CTSGun>  (170 bytes)
 * CTSGun * GetClassPtr<CTSGun>(uint param_1)
 */
/* CTSGun * GetClassPtr<CTSGun>(CTSGun *) */

CTSGun * GetClassPtr<CTSGun>(uint param_1)

{
  edict_t *peVar1;
  CTSGun *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTSGun *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTSGun *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0xa10)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBasePlayerItem_virtual_table;
    pCVar2->vtable = (void **)CBasePlayerWeapon_virtual_table;
    pCVar2->vtable = (void **)CTSGun_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 0008721c  CTSGun_type_info_function  (70 bytes)
 * undefined4 * CTSGun_type_info_function(void)
 */
/* CTSGun type_info function */

undefined4 * CTSGun_type_info_function(void)

{
  if (CTSGun_type_info_node == 0) {
    CBasePlayerWeapon_type_info_function();
    __rtti_si(&CTSGun_type_info_node,"6CTSGun",&CBasePlayerWeapon_type_info_node);
  }
  return &CTSGun_type_info_node;
}

/* 0008727c  Write_katana  (477 bytes)
 * undefined Write_katana(undefined1 * param_1)
 */
/* Write_katana(s_weapon_info *) */

void Write_katana(undefined1 *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  
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
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x42340000;
  param_1[0x38] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 8;
  pcVar2 = "Katana";
  puVar3 = (undefined4 *)(param_1 + 0x44);
  for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar3 + 2) = pcVar2[2];
  param_1[0x84] = 1;
  param_1[0x85] = 2;
  pcVar2 = "sprites/weapons/katana.spr";
  puVar3 = (undefined4 *)(param_1 + 0x86);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar3 + 2) = pcVar2[2];
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
  pcVar2 = "models/v_katana.mdl";
  puVar3 = (undefined4 *)(param_1 + 0x132);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  pcVar2 = "models/p_katana.mdl";
  puVar3 = (undefined4 *)(param_1 + 0x172);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  param_1[0x1b2] = 0;
  pcVar2 = "models/w_katana.mdl";
  puVar3 = (undefined4 *)(param_1 + 0x1f2);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  param_1[0x232] = 0;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined2 *)(param_1 + 0x270) = 4;
  *(undefined2 *)(param_1 + 0x272) = 3;
  *(undefined2 *)(param_1 + 0x274) = 2;
  *(undefined2 *)(param_1 + 0x276) = 5;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  param_1[0x2c6] = 0;
  param_1[0x306] = 0;
  param_1[0x348] = 10;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0;
  *(undefined4 *)(param_1 + 0x358) = 0;
  return;
}

/* 0008745c  Write_knife  (492 bytes)
 * undefined Write_knife(undefined1 * param_1)
 */
/* Write_knife(s_weapon_info *) */

void Write_knife(undefined1 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 1;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
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
  pcVar2 = "Combat Knife";
  pcVar3 = param_1 + 0x44;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  *pcVar3 = *pcVar2;
  param_1[0x84] = 1;
  param_1[0x85] = 3;
  pcVar2 = "sprites/weapons/knife.spr";
  puVar4 = (undefined4 *)(param_1 + 0x86);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  param_1[0xd0] = 1;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 100;
  param_1[0xdc] = 1;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar2 = "models/v_knife.mdl";
  puVar4 = (undefined4 *)(param_1 + 0x132);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar4 + 2) = pcVar2[2];
  pcVar2 = "models/p_knife.mdl";
  puVar4 = (undefined4 *)(param_1 + 0x172);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar4 + 2) = pcVar2[2];
  param_1[0x1b2] = 0;
  pcVar2 = "models/w_knife.mdl";
  puVar4 = (undefined4 *)(param_1 + 0x1f2);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar4 + 2) = pcVar2[2];
  param_1[0x232] = 0;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 0x270) = 3;
  *(undefined2 *)(param_1 + 0x272) = 4;
  *(undefined2 *)(param_1 + 0x274) = 5;
  *(undefined2 *)(param_1 + 0x27a) = 7;
  *(undefined2 *)(param_1 + 0x276) = 6;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  param_1[0x2c6] = 0;
  param_1[0x306] = 0;
  param_1[0x348] = 3;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0;
  *(undefined4 *)(param_1 + 0x358) = 0;
  return;
}

/* 00087648  Write_m16  (644 bytes)
 * undefined Write_m16(undefined1 * param_1)
 */
/* Write_m16(s_weapon_info *) */

void Write_m16(undefined1 *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
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
  *(undefined4 *)(param_1 + 0x44) = 0x4136314d;
  *(undefined2 *)(param_1 + 0x48) = 0x34;
  param_1[0x84] = 4;
  param_1[0x85] = 8;
  pcVar2 = "sprites/weapons/m16.spr";
  puVar3 = (undefined4 *)(param_1 + 0x86);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  param_1[0xd0] = 0x28;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f666666;
  *(undefined4 *)(param_1 + 0xd8) = 0x9c4;
  *(undefined4 *)(param_1 + 0xe0) = 0xe;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar2 = "models/556_shell.mdl";
  pcVar4 = param_1 + 0xe8;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 1;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar2 = "models/v_m16.mdl";
  pcVar4 = param_1 + 0x132;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "models/p_m16.mdl";
  pcVar4 = param_1 + 0x172;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  param_1[0x1b2] = 0;
  pcVar2 = "models/w_m16.mdl";
  pcVar4 = param_1 + 0x1f2;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "twohanded";
  puVar3 = (undefined4 *)(param_1 + 0x232);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x25e) = 4;
  *(undefined2 *)(param_1 + 0x260) = 8;
  *(undefined2 *)(param_1 + 0x28a) = 0xf;
  *(undefined2 *)(param_1 + 0x28c) = 7;
  *(undefined2 *)(param_1 + 0x28e) = 0xe;
  *(undefined2 *)(param_1 + 0x290) = 2;
  *(undefined2 *)(param_1 + 0x292) = 10;
  *(undefined2 *)(param_1 + 0x294) = 0xb;
  *(undefined2 *)(param_1 + 0x296) = 10;
  *(undefined2 *)(param_1 + 0x298) = 0xb;
  *(undefined2 *)(param_1 + 0x29a) = 9;
  *(undefined2 *)(param_1 + 0x2c4) = 0xf;
  pcVar2 = "weapons/m16/fire.wav";
  pcVar4 = param_1 + 0x2c6;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  param_1[0x306] = 0;
  param_1[0x348] = 6;
  *(undefined4 *)(param_1 + 0x34c) = 0x20;
  param_1[0x350] = 1;
  *(undefined4 *)(param_1 + 0x354) = 0x20;
  *(undefined4 *)(param_1 + 0x358) = 8;
  return;
}

/* 000878cc  Write_m4  (667 bytes)
 * undefined Write_m4(undefined1 * param_1)
 */
/* Write_m4(s_weapon_info *) */

void Write_m4(undefined1 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
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
  *(undefined4 *)(param_1 + 0x44) = 0x3141344d;
  param_1[0x48] = 0;
  param_1[0x84] = 4;
  param_1[0x85] = 2;
  pcVar2 = "sprites/weapons/m4.spr";
  puVar4 = (undefined4 *)(param_1 + 0x86);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar4 + 2) = pcVar2[2];
  param_1[0xd0] = 0x28;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd8) = 0x1194;
  *(undefined4 *)(param_1 + 0xe0) = 0xf;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar2 = "models/556_shell.mdl";
  pcVar3 = param_1 + 0xe8;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  *pcVar3 = *pcVar2;
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined2 *)(param_1 + 0x12a) = 4;
  *(undefined2 *)(param_1 + 300) = 2;
  *(undefined2 *)(param_1 + 0x12e) = 8;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar2 = "models/v_m4.mdl";
  puVar4 = (undefined4 *)(param_1 + 0x132);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  pcVar2 = "models/p_m4.mdl";
  puVar4 = (undefined4 *)(param_1 + 0x172);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  pcVar2 = "models/p_m4_sil.mdl";
  puVar4 = (undefined4 *)(param_1 + 0x1b2);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  pcVar2 = "models/w_m4.mdl";
  puVar4 = (undefined4 *)(param_1 + 0x1f2);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  pcVar2 = "twohanded";
  puVar4 = (undefined4 *)(param_1 + 0x232);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x25e) = 4;
  *(undefined2 *)(param_1 + 0x260) = 8;
  *(undefined2 *)(param_1 + 0x28a) = 0xf;
  *(undefined2 *)(param_1 + 0x28c) = 7;
  *(undefined2 *)(param_1 + 0x28e) = 0xe;
  *(undefined2 *)(param_1 + 0x290) = 2;
  *(undefined2 *)(param_1 + 0x292) = 10;
  *(undefined2 *)(param_1 + 0x294) = 0xb;
  *(undefined2 *)(param_1 + 0x296) = 10;
  *(undefined2 *)(param_1 + 0x298) = 0xb;
  *(undefined2 *)(param_1 + 0x29a) = 9;
  *(undefined2 *)(param_1 + 0x2c4) = 0xf;
  pcVar2 = "weapons/m4/m4-fire.wav";
  puVar4 = (undefined4 *)(param_1 + 0x2c6);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar4 + 2) = pcVar2[2];
  pcVar2 = "weapons/m4/m4-fire-sil.wav";
  puVar4 = (undefined4 *)(param_1 + 0x306);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar4 + 2) = pcVar2[2];
  param_1[0x348] = 6;
  *(undefined4 *)(param_1 + 0x34c) = 0x17;
  param_1[0x350] = 1;
  *(undefined4 *)(param_1 + 0x354) = 0x20;
  *(undefined4 *)(param_1 + 0x358) = 8;
  return;
}

/* 00087b68  Write_m60  (568 bytes)
 * undefined Write_m60(undefined1 * param_1)
 */
/* Write_m60(s_weapon_info *) */

void Write_m60(undefined1 *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
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
  *(undefined4 *)(param_1 + 0x44) = 0x4530364d;
  *(undefined2 *)(param_1 + 0x48) = 0x33;
  param_1[0x84] = 4;
  param_1[0x85] = 9;
  pcVar2 = "sprites/weapons/m60.spr";
  puVar3 = (undefined4 *)(param_1 + 0x86);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  param_1[0xd0] = 0x46;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd8) = 8000;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar2 = "models/556_shell.mdl";
  pcVar4 = param_1 + 0xe8;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar2 = "models/v_m60.mdl";
  pcVar4 = param_1 + 0x132;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "models/p_m60.mdl";
  pcVar4 = param_1 + 0x172;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  param_1[0x1b2] = 0;
  pcVar2 = "models/w_m60.mdl";
  pcVar4 = param_1 + 0x1f2;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "twohanded";
  puVar3 = (undefined4 *)(param_1 + 0x232);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 4;
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined2 *)(param_1 + 600) = 2;
  *(undefined2 *)(param_1 + 0x25a) = 3;
  *(undefined2 *)(param_1 + 0x25c) = 2;
  *(undefined2 *)(param_1 + 0x25e) = 3;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28a) = 5;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar2 = "weapons/m60/m60-fire.wav";
  pcVar4 = param_1 + 0x2c6;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  param_1[0x306] = 0;
  param_1[0x348] = 6;
  *(undefined4 *)(param_1 + 0x34c) = 0x11;
  param_1[0x350] = 1;
  *(undefined4 *)(param_1 + 0x354) = 0x20;
  *(undefined4 *)(param_1 + 0x358) = 6;
  return;
}

/* 00087da0  Write_m61  (458 bytes)
 * undefined Write_m61(undefined1 * param_1)
 */
/* Write_m61(s_weapon_info *) */

void Write_m61(undefined1 *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 1;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
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
  pcVar2 = "M61 Grenade";
  puVar3 = (undefined4 *)(param_1 + 0x44);
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  param_1[0x84] = 1;
  param_1[0x85] = 1;
  pcVar2 = "sprites/weapons/m61.spr";
  puVar3 = (undefined4 *)(param_1 + 0x86);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  param_1[0xd0] = 7;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 1000;
  param_1[0xdc] = 1;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar2 = "models/v_m61.mdl";
  pcVar4 = param_1 + 0x132;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "models/p_m61.mdl";
  pcVar4 = param_1 + 0x172;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  param_1[0x1b2] = 0;
  pcVar2 = "models/w_m61.mdl";
  pcVar4 = param_1 + 0x1f2;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  param_1[0x232] = 0;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined2 *)(param_1 + 0x278) = 2;
  *(undefined2 *)(param_1 + 0x27a) = 3;
  *(undefined2 *)(param_1 + 0x27c) = 4;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  param_1[0x2c6] = 0;
  param_1[0x306] = 0;
  param_1[0x348] = 2;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0;
  *(undefined4 *)(param_1 + 0x358) = 0;
  return;
}

/* 00087f6c  Write_mac10  (576 bytes)
 * undefined Write_mac10(undefined1 * param_1)
 */
/* Write_mac10(s_weapon_info *) */

void Write_mac10(undefined1 *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
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
  *(undefined4 *)(param_1 + 0x44) = 0x504d55;
  param_1[0x84] = 3;
  param_1[0x85] = 6;
  pcVar2 = "sprites/weapons/ump.spr";
  puVar3 = (undefined4 *)(param_1 + 0x86);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  param_1[0xd0] = 0x1e;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f666666;
  *(undefined4 *)(param_1 + 0xd8) = 0x8fc;
  *(undefined4 *)(param_1 + 0xe0) = 0xf;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar2 = "models/9mm_shell.mdl";
  pcVar4 = param_1 + 0xe8;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  *(undefined2 *)(param_1 + 0x128) = 2;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 1;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar2 = "models/v_ump.mdl";
  pcVar4 = param_1 + 0x132;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "models/p_ump.mdl";
  pcVar4 = param_1 + 0x172;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "models/p_ump_sil.mdl";
  pcVar4 = param_1 + 0x1b2;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "models/w_ump.mdl";
  pcVar4 = param_1 + 0x1f2;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "twohanded";
  puVar3 = (undefined4 *)(param_1 + 0x232);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 2;
  *(undefined2 *)(param_1 + 0x256) = 1;
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25c) = 5;
  *(undefined2 *)(param_1 + 0x25e) = 3;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28a) = 6;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar2 = "weapons/ump/ump-fire.wav";
  pcVar4 = param_1 + 0x2c6;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "weapons/ump/ump-fire-sil.wav";
  pcVar4 = param_1 + 0x306;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  param_1[0x348] = 9;
  *(undefined4 *)(param_1 + 0x34c) = 0xf;
  param_1[0x350] = 2;
  *(undefined4 *)(param_1 + 0x354) = 0x1e;
  *(undefined4 *)(param_1 + 0x358) = 6;
  return;
}

/* 000881ac  Write_melee  (215 bytes)
 * undefined Write_melee(int param_1)
 */
/* Write_melee(s_weapon_info *) */

void Write_melee(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(param_1 + 0x44) = 0x676e754b;
  *(undefined4 *)(param_1 + 0x48) = 0x75662d;
  pcVar2 = "models/v_melee.mdl";
  puVar3 = (undefined4 *)(param_1 + 0x132);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar3 + 2) = pcVar2[2];
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 4;
  *(undefined2 *)(param_1 + 0x256) = 1;
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
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x84) = 1;
  *(undefined1 *)(param_1 + 0x85) = 6;
  return;
}

/* 00088284  Write_mk23  (641 bytes)
 * undefined Write_mk23(undefined1 * param_1)
 */
/* Write_mk23(s_weapon_info *) */

void Write_mk23(undefined1 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
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
  *(undefined4 *)(param_1 + 0x20) = 0;
  puVar2 = &DAT_00108457;
  puVar4 = (undefined4 *)(param_1 + 0x44);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar2;
  *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar2 + 2);
  param_1[0x84] = 2;
  param_1[0x85] = 2;
  pcVar3 = "sprites/weapons/mk23.spr";
  pcVar5 = param_1 + 0x86;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  *pcVar5 = *pcVar3;
  param_1[0xd0] = 10;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 700;
  *(undefined4 *)(param_1 + 0xe0) = 7;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar3 = "models/9mm_shell.mdl";
  pcVar5 = param_1 + 0xe8;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  *pcVar5 = *pcVar3;
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  *(undefined2 *)(param_1 + 300) = 2;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 2;
  pcVar3 = "models/v_mk23.mdl";
  puVar2 = (undefined4 *)(param_1 + 0x132);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  pcVar3 = "models/p_mk23.mdl";
  puVar2 = (undefined4 *)(param_1 + 0x172);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  pcVar3 = "models/p_mk23_sil.mdl";
  puVar2 = (undefined4 *)(param_1 + 0x1b2);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  pcVar3 = "models/w_mk23.mdl";
  puVar2 = (undefined4 *)(param_1 + 0x1f2);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  pcVar3 = "onehanded";
  puVar2 = (undefined4 *)(param_1 + 0x232);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 0xb;
  *(undefined2 *)(param_1 + 0x256) = 4;
  *(undefined2 *)(param_1 + 600) = 1;
  *(undefined2 *)(param_1 + 0x25a) = 2;
  *(undefined2 *)(param_1 + 0x25c) = 1;
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
  pcVar3 = "weapons/mk23/mk23-fire.wav";
  puVar2 = (undefined4 *)(param_1 + 0x2c6);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  *(char *)((int)puVar2 + 2) = pcVar3[2];
  pcVar3 = "weapons/mk23/mk23-fire-sil.wav";
  puVar2 = (undefined4 *)(param_1 + 0x306);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  *(char *)((int)puVar2 + 2) = pcVar3[2];
  param_1[0x348] = 8;
  *(undefined4 *)(param_1 + 0x34c) = 6;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0x12;
  *(undefined4 *)(param_1 + 0x358) = 5;
  return;
}

/* 00088508  Write_mk23akimbo  (725 bytes)
 * undefined Write_mk23akimbo(undefined1 * param_1)
 */
/* Write_mk23akimbo(s_weapon_info *) */

void Write_mk23akimbo(undefined1 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 *puVar5;
  
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
  puVar2 = &DAT_0010851f;
  puVar5 = (undefined4 *)(param_1 + 0x44);
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  param_1[0x84] = 5;
  param_1[0x85] = 2;
  pcVar3 = "sprites/weapons/mk23_akimbo.spr";
  puVar2 = (undefined4 *)(param_1 + 0x86);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  param_1[0xd0] = 10;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 700;
  *(undefined4 *)(param_1 + 0xe0) = 7;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar3 = "models/9mm_shell.mdl";
  pcVar4 = param_1 + 0xe8;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar3;
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  *(undefined2 *)(param_1 + 300) = 2;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 2;
  pcVar3 = "models/v_mk23_akimbo.mdl";
  pcVar4 = param_1 + 0x132;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar3;
  pcVar3 = "models/p_mk23_akimbo.mdl";
  pcVar4 = param_1 + 0x172;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar3;
  pcVar3 = "models/p_mk23_akimbo_sil.mdl";
  pcVar4 = param_1 + 0x1b2;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar3;
  pcVar3 = "models/w_mk23.mdl";
  puVar2 = (undefined4 *)(param_1 + 0x1f2);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  puVar2 = &DAT_00106777;
  puVar5 = (undefined4 *)(param_1 + 0x232);
  for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = *(undefined2 *)puVar2;
  *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar2 + 2);
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 0xd;
  *(undefined2 *)(param_1 + 0x256) = 5;
  *(undefined2 *)(param_1 + 0x27e) = 1;
  *(undefined2 *)(param_1 + 0x282) = 3;
  *(undefined2 *)(param_1 + 0x280) = 2;
  *(undefined2 *)(param_1 + 0x284) = 4;
  *(undefined2 *)(param_1 + 0x286) = 2;
  *(undefined2 *)(param_1 + 0x288) = 4;
  *(undefined2 *)(param_1 + 600) = 0xe;
  *(undefined2 *)(param_1 + 0x25a) = 0xe;
  *(undefined2 *)(param_1 + 0x25c) = 0xe;
  *(undefined2 *)(param_1 + 0x260) = 0xb;
  *(undefined2 *)(param_1 + 0x28c) = 6;
  *(undefined2 *)(param_1 + 0x28e) = 0x10;
  *(undefined2 *)(param_1 + 0x290) = 5;
  *(undefined2 *)(param_1 + 0x2b8) = 7;
  *(undefined2 *)(param_1 + 700) = 9;
  *(undefined2 *)(param_1 + 0x2ba) = 8;
  *(undefined2 *)(param_1 + 0x2be) = 10;
  *(undefined2 *)(param_1 + 0x2c0) = 8;
  *(undefined2 *)(param_1 + 0x2c2) = 10;
  *(undefined2 *)(param_1 + 0x292) = 6;
  *(undefined2 *)(param_1 + 0x294) = 6;
  *(undefined2 *)(param_1 + 0x296) = 6;
  *(undefined2 *)(param_1 + 0x29a) = 0xc;
  pcVar3 = "weapons/mk23/mk23-fire.wav";
  puVar2 = (undefined4 *)(param_1 + 0x2c6);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  *(char *)((int)puVar2 + 2) = pcVar3[2];
  pcVar3 = "weapons/mk23/mk23-fire-sil.wav";
  puVar2 = (undefined4 *)(param_1 + 0x306);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  *(char *)((int)puVar2 + 2) = pcVar3[2];
  *(undefined4 *)(param_1 + 0x34c) = 6;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0x12;
  *(undefined4 *)(param_1 + 0x358) = 5;
  return;
}

/* 000887e0  Write_mossberg  (692 bytes)
 * undefined Write_mossberg(undefined1 * param_1)
 */
/* Write_mossberg(s_weapon_info *) */

void Write_mossberg(undefined1 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 8;
  param_1[8] = 3;
  *(undefined4 *)(param_1 + 0xc) = 8;
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
  pcVar2 = "Mossberg 500";
  pcVar3 = param_1 + 0x44;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  *pcVar3 = *pcVar2;
  param_1[0x84] = 4;
  param_1[0x85] = 7;
  pcVar2 = "sprites/weapons/mossberg.spr";
  pcVar3 = param_1 + 0x86;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  *pcVar3 = *pcVar2;
  param_1[0xd0] = 0x28;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0xd8) = 0x9c4;
  *(undefined4 *)(param_1 + 0xe0) = 6;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar2 = "models/shotgun_shell_gold.mdl";
  puVar4 = (undefined4 *)(param_1 + 0xe8);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  *(undefined2 *)(param_1 + 300) = 1;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar2 = "models/v_mossberg.mdl";
  puVar4 = (undefined4 *)(param_1 + 0x132);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  pcVar2 = "models/p_mossberg.mdl";
  puVar4 = (undefined4 *)(param_1 + 0x172);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  param_1[0x1b2] = 0;
  pcVar2 = "models/w_mossberg.mdl";
  puVar4 = (undefined4 *)(param_1 + 0x1f2);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  pcVar2 = "twohanded";
  puVar4 = (undefined4 *)(param_1 + 0x232);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 0;
  *(undefined2 *)(param_1 + 0x256) = 7;
  *(undefined2 *)(param_1 + 0x262) = 8;
  *(undefined2 *)(param_1 + 0x264) = 9;
  *(undefined2 *)(param_1 + 0x266) = 10;
  *(undefined2 *)(param_1 + 0x268) = 1;
  *(undefined2 *)(param_1 + 0x26a) = 1;
  *(undefined2 *)(param_1 + 0x26c) = 2;
  *(undefined2 *)(param_1 + 0x26e) = 2;
  *(undefined2 *)(param_1 + 0x260) = 0xb;
  *(undefined2 *)(param_1 + 0x28c) = 3;
  *(undefined2 *)(param_1 + 0x28e) = 3;
  *(undefined2 *)(param_1 + 0x290) = 7;
  *(undefined2 *)(param_1 + 0x29c) = 0xd;
  *(undefined2 *)(param_1 + 0x29e) = 0xe;
  *(undefined2 *)(param_1 + 0x2a0) = 0xf;
  *(undefined2 *)(param_1 + 0x2a2) = 4;
  *(undefined2 *)(param_1 + 0x2a4) = 4;
  *(undefined2 *)(param_1 + 0x2a6) = 5;
  *(undefined2 *)(param_1 + 0x2a8) = 5;
  *(undefined2 *)(param_1 + 0x29a) = 0xc;
  pcVar2 = "weapons/mossberg/fire.wav";
  puVar4 = (undefined4 *)(param_1 + 0x2c6);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  pcVar2 = "weapons/m3/m3-pump.wav";
  puVar4 = (undefined4 *)(param_1 + 0x306);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar4 + 2) = pcVar2[2];
  param_1[0x348] = 1;
  *(undefined4 *)(param_1 + 0x34c) = 0x11;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x354) = 0x20;
  *(undefined4 *)(param_1 + 0x358) = 10;
  return;
}

/* 00088a94  Write_mp5k  (655 bytes)
 * undefined Write_mp5k(undefined1 * param_1)
 */
/* Write_mp5k(s_weapon_info *) */

void Write_mp5k(undefined1 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x1e;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0xc) = 7;
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
  *(undefined4 *)(param_1 + 0x44) = 0x4b35504d;
  param_1[0x48] = 0;
  param_1[0x84] = 3;
  param_1[0x85] = 3;
  pcVar2 = "sprites/weapons/mp5k.spr";
  pcVar3 = param_1 + 0x86;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  *pcVar3 = *pcVar2;
  param_1[0xd0] = 0x14;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x5dc;
  *(undefined4 *)(param_1 + 0xe0) = 0xf;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  pcVar2 = "models/9mm_shell.mdl";
  pcVar3 = param_1 + 0xe8;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  *pcVar3 = *pcVar2;
  *(undefined2 *)(param_1 + 0x128) = 2;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 1;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar2 = "models/v_mp5k.mdl";
  puVar4 = (undefined4 *)(param_1 + 0x132);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  pcVar2 = "models/p_mp5k.mdl";
  puVar4 = (undefined4 *)(param_1 + 0x172);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  pcVar2 = "models/p_mp5k_sil.mdl";
  puVar4 = (undefined4 *)(param_1 + 0x1b2);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  pcVar2 = "models/w_mp5k.mdl";
  puVar4 = (undefined4 *)(param_1 + 0x1f2);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  pcVar2 = "twohanded";
  puVar4 = (undefined4 *)(param_1 + 0x232);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 1;
  *(undefined2 *)(param_1 + 0x256) = 2;
  *(undefined2 *)(param_1 + 600) = 3;
  *(undefined2 *)(param_1 + 0x25a) = 4;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x25e) = 4;
  *(undefined2 *)(param_1 + 0x260) = 5;
  *(undefined2 *)(param_1 + 0x28c) = 7;
  *(undefined2 *)(param_1 + 0x28e) = 10;
  *(undefined2 *)(param_1 + 0x290) = 7;
  *(undefined2 *)(param_1 + 0x292) = 8;
  *(undefined2 *)(param_1 + 0x294) = 9;
  *(undefined2 *)(param_1 + 0x296) = 8;
  *(undefined2 *)(param_1 + 0x298) = 9;
  *(undefined2 *)(param_1 + 0x29a) = 6;
  pcVar2 = "weapons/mp5k/mp5k-fire.wav";
  puVar4 = (undefined4 *)(param_1 + 0x2c6);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar4 + 2) = pcVar2[2];
  pcVar2 = "weapons/mp5k/mp5k-fire-sil.wav";
  puVar4 = (undefined4 *)(param_1 + 0x306);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar4 + 2) = pcVar2[2];
  param_1[0x348] = 9;
  *(undefined4 *)(param_1 + 0x34c) = 6;
  param_1[0x350] = 2;
  *(undefined4 *)(param_1 + 0x354) = 0x16;
  *(undefined4 *)(param_1 + 0x358) = 5;
  return;
}

/* 00088d24  Write_mp5sd  (597 bytes)
 * undefined Write_mp5sd(undefined1 * param_1)
 */
/* Write_mp5sd(s_weapon_info *) */

void Write_mp5sd(undefined1 *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x1e;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 0xc) = 7;
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
  *(undefined4 *)(param_1 + 0x44) = 0x5335504d;
  *(undefined2 *)(param_1 + 0x48) = 0x44;
  param_1[0x84] = 3;
  param_1[0x85] = 2;
  pcVar2 = "sprites/weapons/mp5sd.spr";
  puVar3 = (undefined4 *)(param_1 + 0x86);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  param_1[0xd0] = 0x19;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f666666;
  *(undefined4 *)(param_1 + 0xd8) = 0x9c4;
  *(undefined4 *)(param_1 + 0xe0) = 0xf;
  *(undefined4 *)(param_1 + 0xe4) = 1;
  pcVar2 = "models/9mm_shell.mdl";
  pcVar4 = param_1 + 0xe8;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)(param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 1;
  *(undefined2 *)(param_1 + 0x130) = 0xffff;
  pcVar2 = "models/v_mp5sd.mdl";
  puVar3 = (undefined4 *)(param_1 + 0x132);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar3 + 2) = pcVar2[2];
  pcVar2 = "models/p_mp5sd.mdl";
  puVar3 = (undefined4 *)(param_1 + 0x172);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar3 + 2) = pcVar2[2];
  pcVar2 = "models/p_mp5sd.mdl";
  puVar3 = (undefined4 *)(param_1 + 0x1b2);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar3 + 2) = pcVar2[2];
  pcVar2 = "models/w_mp5sd.mdl";
  puVar3 = (undefined4 *)(param_1 + 0x1f2);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  *(char *)((int)puVar3 + 2) = pcVar2[2];
  pcVar2 = "twohanded";
  puVar3 = (undefined4 *)(param_1 + 0x232);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar2;
  *(undefined2 *)(param_1 + 0x252) = 0;
  *(undefined2 *)(param_1 + 0x254) = 5;
  *(undefined2 *)(param_1 + 0x256) = 4;
  *(undefined2 *)(param_1 + 600) = 1;
  *(undefined2 *)(param_1 + 0x25a) = 2;
  *(undefined2 *)(param_1 + 0x25c) = 3;
  *(undefined2 *)(param_1 + 0x25e) = 3;
  *(undefined2 *)(param_1 + 0x260) = 0;
  *(undefined2 *)(param_1 + 0x28a) = 6;
  *(undefined2 *)(param_1 + 0x28c) = 0xffff;
  pcVar2 = "weapons/mp5sd/mp5sd-fire.wav";
  pcVar4 = param_1 + 0x2c6;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  pcVar2 = "weapons/mp5sd/mp5sd-fire.wav";
  pcVar4 = param_1 + 0x306;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar2;
  param_1[0x348] = 9;
  *(undefined4 *)(param_1 + 0x34c) = 0x10;
  param_1[0x350] = 2;
  *(undefined4 *)(param_1 + 0x354) = 0x12;
  *(undefined4 *)(param_1 + 0x358) = 6;
  return;
}

/* 00089140  TSGetPointsForFrag  (1172 bytes)
 * uint TSGetPointsForFrag(undefined4 param_1, uint * param_2, uint * param_3, uint param_4, undefined1 * param_5, undefined1 * param_6)
 */
/* TSGetPointsForFrag(CBasePlayer *, entvars_s *, entvars_s *, int, bool *, bool *) */

uint TSGetPointsForFrag(undefined4 param_1,uint *param_2,uint *param_3,uint param_4,
                       undefined1 *param_5,undefined1 *param_6)

{
  edict_t *peVar1;
  int iVar2;
  char *pcVar3;
  void *pvVar4;
  void *pvVar5;
  CTSKnife *this;
  byte *pbVar6;
  undefined4 *puVar7;
  uint uVar8;
  char *pcVar9;
  byte *pbVar10;
  char *pcVar11;
  bool bVar12;
  bool bVar13;
  char local_9c [64];
  char local_5c [76];
  
  if ((int)param_4 < 0) {
    return param_4;
  }
  peVar1 = (edict_t *)param_2[0x82];
  if (peVar1 == (edict_t *)0x0) {
    peVar1 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
  }
  pvVar4 = (void *)0x0;
  if (peVar1 != (edict_t *)0x0) {
    pvVar4 = peVar1->pvPrivateData;
  }
  local_5c[0] = '\0';
  local_9c[0] = '\0';
  if (((g_theOneMode != 0) &&
      (iVar2 = (**(code **)(*(int *)((int)pvVar4 + 0x60) + 200))(pvVar4), iVar2 != 0)) &&
     (*(char *)((int)pvVar4 + 0x7b9) == '\0')) {
    return 0;
  }
  if ((param_2[0x69] & 8) == 0) goto LAB_00089542;
  strcpy(local_9c,gpGlobals->pStringBase + param_2[0x74]);
  if (param_3 != (uint *)0x0) {
    if (param_3 == param_2) {
      peVar1 = (edict_t *)param_2[0x82];
      if (peVar1 == (edict_t *)0x0) {
        peVar1 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
      }
      pvVar5 = (void *)0x0;
      if (peVar1 != (edict_t *)0x0) {
        pvVar5 = peVar1->pvPrivateData;
      }
      if (glast_weaponid == -1) {
        if (*(int *)((int)pvVar5 + 0xa10) == 0) {
          if (glast_closecombat != '\0') {
            puVar7 = &DAT_00108787;
            pcVar9 = local_5c;
            for (iVar2 = 2; iVar2 != 0; iVar2 = iVar2 + -1) {
              *(undefined4 *)pcVar9 = *puVar7;
              puVar7 = puVar7 + 1;
              pcVar9 = pcVar9 + 4;
            }
            pcVar11 = pcVar9 + 2;
            pcVar3 = (char *)((int)puVar7 + 2);
            *(undefined2 *)pcVar9 = *(undefined2 *)puVar7;
            goto LAB_00089382;
          }
        }
        else if ((*(int *)(*(int *)((int)pvVar5 + 0xa10) + 0x88) == 0x10) &&
                ((*(int *)(*(int *)((int)pvVar5 + 0xa10) + 0xcc) == 0 || (glast_closecombat != '\0')
                 ))) {
          puVar7 = &DAT_00108787;
          pcVar9 = local_5c;
          for (iVar2 = 2; iVar2 != 0; iVar2 = iVar2 + -1) {
            *(undefined4 *)pcVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            pcVar9 = pcVar9 + 4;
          }
          pcVar11 = pcVar9 + 2;
          pcVar3 = (char *)((int)puVar7 + 2);
          *(undefined2 *)pcVar9 = *(undefined2 *)puVar7;
LAB_00089382:
          *pcVar11 = *pcVar3;
          goto LAB_00089383;
        }
      }
    }
    else {
      bVar12 = CARRY4((uint)gpGlobals->pStringBase,*param_3);
      pbVar6 = (byte *)(gpGlobals->pStringBase + *param_3);
      bVar13 = pbVar6 == (byte *)0x0;
      iVar2 = 6;
      pbVar10 = &DAT_001077e5;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar12 = *pbVar6 < *pbVar10;
        bVar13 = *pbVar6 == *pbVar10;
        pbVar6 = pbVar6 + 1;
        pbVar10 = pbVar10 + 1;
      } while (bVar13);
      if ((!bVar12 && !bVar13) != bVar12) {
        return param_4 & 0xff;
      }
      peVar1 = (edict_t *)param_3[0x82];
      if (peVar1 == (edict_t *)0x0) {
        peVar1 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
      }
      this = (CTSKnife *)0x0;
      if (peVar1 != (edict_t *)0x0) {
        this = peVar1->pvPrivateData;
      }
      if (this == (CTSKnife *)0x0) {
        pcVar3 = "Throwing";
        pcVar11 = local_5c;
        for (iVar2 = 2; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar11 = pcVar11 + 4;
        }
        goto LAB_00089382;
      }
      pcVar3 = CTSKnife::GetDescription(this);
      strcpy(local_5c,pcVar3);
LAB_00089383:
      param_4 = 2;
    }
  }
  if (((param_2[0x94] & 0x10c10) == 0) ||
     (SQRT((float)param_2[10] * (float)param_2[10] +
           (float)param_2[9] * (float)param_2[9] + (float)param_2[8] * (float)param_2[8]) <= 80.0))
  {
    if (((param_2[0x94] & 0x20) == 0) ||
       ((1.0 <= (float)param_2[0x48] ||
        (SQRT((float)param_2[10] * (float)param_2[10] +
              (float)param_2[9] * (float)param_2[9] + (float)param_2[8] * (float)param_2[8]) <= 80.0
        )))) {
      if (local_5c[0] != '\0') {
        strcat(local_5c," #TS_Stl");
      }
    }
    else {
      if ((glast_closecombat == '\0') &&
         (iVar2 = (**(code **)(*(int *)((int)pvVar4 + 0x60) + 200))(pvVar4), iVar2 != 0)) {
        param_4 = param_4 + 1;
      }
      if (1 < (byte)param_4) {
        if (local_5c[0] == '\0') {
          puVar7 = &DAT_001087ab;
          pcVar3 = local_5c;
          for (iVar2 = 2; iVar2 != 0; iVar2 = iVar2 + -1) {
            *(undefined4 *)pcVar3 = *puVar7;
            puVar7 = puVar7 + 1;
            pcVar3 = pcVar3 + 4;
          }
          *(undefined2 *)pcVar3 = *(undefined2 *)puVar7;
        }
        else {
          strcat(local_5c," & #TS_SlStl");
        }
      }
      *param_5 = 1;
    }
  }
  else {
    if ((glast_closecombat == '\0') &&
       (iVar2 = (**(code **)(*(int *)((int)pvVar4 + 0x60) + 200))(pvVar4), iVar2 != 0)) {
      param_4 = param_4 + 1;
    }
    if (1 < (byte)param_4) {
      if (local_5c[0] == '\0') {
        pcVar3 = "#TS_StStl";
        pcVar11 = local_5c;
        for (iVar2 = 2; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar11 = pcVar11 + 4;
        }
        *(undefined2 *)pcVar11 = *(undefined2 *)pcVar3;
      }
      else {
        strcat(local_5c," & #TS_StStl");
      }
    }
    *param_6 = 1;
  }
LAB_00089542:
  if (1 < (byte)param_4) {
    uVar8 = param_4 & 0xff;
    if ((pvVar4 != (void *)0x0) &&
       (iVar2 = (**(code **)(*(int *)((int)pvVar4 + 0x60) + 200))(pvVar4), iVar2 != 0)) {
      if (8 < *(byte *)((int)pvVar4 + 0x744)) {
        uVar8 = uVar8 << 1;
      }
      if (gpGlobals->time - *(float *)((int)pvVar4 + 0x748) < 2.0) {
        uVar8 = uVar8 << 1;
      }
    }
    pcVar3 = UTIL_VarArgs("%i #TS_Frg #TS_FrgFr %s, %s",uVar8,local_9c,local_5c);
    TSHudMessageAll(0,0xff,0,1,0x1e,pcVar3);
  }
  return param_4 & 0xff;
}

/* 0008b3a8  ts_objective_manager  (33 bytes)
 * undefined ts_objective_manager(uint param_1)
 */
void ts_objective_manager(uint param_1)

{
  GetClassPtr<CTSObjectiveManager>(param_1);
  return;
}

/* 0008b9f8  ts_objective_ptr  (33 bytes)
 * undefined ts_objective_ptr(uint param_1)
 */
void ts_objective_ptr(uint param_1)

{
  GetClassPtr<CTSObjectivePointer>(param_1);
  return;
}

