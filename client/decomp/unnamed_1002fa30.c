/* client.dll - unnamed_1002fa30 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1002fa30  FUN_1002fa30  (92 bytes)
 * undefined FUN_1002fa30(float * param_1, float * param_2, float * param_3)
 * called by: FUN_10024160
 */
void __cdecl FUN_1002fa30(float *param_1,float *param_2,float *param_3)

{
  *param_3 = *param_1 * *param_2 + param_2[2] * param_1[2] + param_2[1] * param_1[1] + param_2[3];
  param_3[1] = param_2[6] * param_1[2] + param_2[5] * param_1[1] + param_2[4] * *param_1 +
               param_2[7];
  param_3[2] = param_2[10] * param_1[2] + param_2[9] * param_1[1] + param_2[8] * *param_1 +
               param_2[0xb];
  return;
}

/* 1002fa90  FUN_1002fa90  (314 bytes)
 * undefined FUN_1002fa90(float * param_1, float * param_2, float * param_3)
 */
void __cdecl FUN_1002fa90(float *param_1,float *param_2,float *param_3)

{
  *param_3 = param_1[2] * param_2[8] + param_1[1] * param_2[4] + *param_1 * *param_2;
  param_3[1] = param_2[9] * param_1[2] + param_2[1] * *param_1 + param_1[1] * param_2[5];
  param_3[2] = param_2[10] * param_1[2] + param_2[2] * *param_1 + param_1[1] * param_2[6];
  param_3[3] = param_2[0xb] * param_1[2] + param_2[3] * *param_1 + param_1[1] * param_2[7] +
               param_1[3];
  param_3[4] = param_1[4] * *param_2 + param_1[5] * param_2[4] + param_1[6] * param_2[8];
  param_3[5] = param_1[4] * param_2[1] + param_1[5] * param_2[5] + param_1[6] * param_2[9];
  param_3[6] = param_1[4] * param_2[2] + param_1[5] * param_2[6] + param_1[6] * param_2[10];
  param_3[7] = param_1[4] * param_2[3] + param_1[5] * param_2[7] + param_2[0xb] * param_1[6] +
               param_1[7];
  param_3[8] = *param_2 * param_1[8] + param_1[9] * param_2[4] + param_1[10] * param_2[8];
  param_3[9] = param_2[1] * param_1[8] + param_1[9] * param_2[5] + param_1[10] * param_2[9];
  param_3[10] = param_2[2] * param_1[8] + param_1[9] * param_2[6] + param_1[10] * param_2[10];
  param_3[0xb] = param_2[3] * param_1[8] + param_1[9] * param_2[7] + param_1[10] * param_2[0xb] +
                 param_1[0xb];
  return;
}

/* 1002fbd0  FUN_1002fbd0  (150 bytes)
 * undefined FUN_1002fbd0(float * param_1, float * param_2)
 */
void __cdecl FUN_1002fbd0(float *param_1,float *param_2)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar2 = (float10)fsin((float10)param_1[2] * (float10)0.5);
  fVar1 = (float)fVar2;
  fVar2 = (float10)fcos((float10)param_1[2] * (float10)0.5);
  fVar3 = (float10)fsin((float10)param_1[1] * (float10)0.5);
  fVar4 = (float10)fcos((float10)param_1[1] * (float10)0.5);
  fVar5 = (float10)fsin((float10)*param_1 * (float10)0.5);
  fVar6 = (float10)fcos((float10)*param_1 * (float10)0.5);
  fVar7 = (float10)(float)fVar5 * fVar4;
  fVar8 = fVar6 * (float10)(float)fVar3;
  *param_2 = (float)(fVar7 * fVar2 - fVar8 * (float10)fVar1);
  param_2[1] = (float)(fVar7 * (float10)fVar1 + fVar8 * fVar2);
  fVar3 = (float10)(float)fVar5 * (float10)(float)fVar3;
  param_2[2] = (float)(fVar6 * fVar4 * (float10)fVar1 - fVar3 * fVar2);
  param_2[3] = (float)(fVar6 * fVar4 * fVar2 + fVar3 * (float10)fVar1);
  return;
}

/* 1002fc70  FUN_1002fc70  (381 bytes)
 * undefined FUN_1002fc70(float * param_1, float * param_2, float param_3, float * param_4)
 * called by: FUN_100306a0
 */
void __cdecl FUN_1002fc70(float *param_1,float *param_2,float param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  fVar2 = 0.0;
  fVar4 = 0.0;
  iVar7 = (int)param_1 - (int)param_2;
  iVar6 = 4;
  pfVar5 = param_2;
  do {
    fVar3 = *(float *)(iVar7 + (int)pfVar5) - *pfVar5;
    iVar6 = iVar6 + -1;
    fVar2 = fVar3 * fVar3 + fVar2;
    fVar3 = *(float *)(iVar7 + -4 + (int)(pfVar5 + 1)) + *pfVar5;
    fVar4 = fVar3 * fVar3 + fVar4;
    pfVar5 = pfVar5 + 1;
  } while (iVar6 != 0);
  if (fVar4 < fVar2) {
    iVar6 = 4;
    pfVar5 = param_2;
    do {
      *pfVar5 = -*pfVar5;
      pfVar5 = pfVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  fVar2 = *param_1 * *param_2 +
          param_1[1] * param_2[1] + param_1[2] * param_2[2] + param_1[3] * param_2[3];
  if (1e-06 < fVar2 + 1.0) {
    if (1.0 - fVar2 <= 1e-06) {
      fVar10 = (float10)1.0 - (float10)param_3;
      fVar8 = (float10)param_3;
    }
    else {
      fVar8 = (float10)FUN_1006c6b0();
      fVar9 = (float10)fsin(fVar8);
      fVar10 = (float10)fsin(((float10)1.0 - (float10)param_3) * (float10)(float)fVar8);
      fVar10 = fVar10 / (float10)(float)fVar9;
      fVar8 = (float10)fsin((float10)(float)fVar8 * (float10)param_3);
      fVar8 = fVar8 / (float10)(float)fVar9;
    }
    iVar6 = 4;
    pfVar5 = param_2;
    do {
      pfVar1 = (float *)((int)pfVar5 + iVar7);
      fVar2 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      iVar6 = iVar6 + -1;
      *(float *)((int)param_4 + (-4 - (int)param_2) + (int)pfVar5) =
           (float)(fVar8 * (float10)fVar2 + fVar10 * (float10)*pfVar1);
    } while (iVar6 != 0);
    return;
  }
  *param_4 = -param_2[1];
  param_4[1] = *param_2;
  param_4[2] = -param_2[3];
  param_4[3] = param_2[2];
  iVar6 = 3;
  fVar10 = (float10)fsin(((float10)1.0 - (float10)param_3) * (float10)1.5707963267948966);
  fVar8 = (float10)fsin((float10)param_3 * (float10)1.5707963267948966);
  pfVar5 = param_4;
  do {
    iVar6 = iVar6 + -1;
    *pfVar5 = (float)(fVar8 * (float10)*pfVar5 +
                     fVar10 * (float10)*(float *)(((int)param_1 - (int)param_4) + (int)pfVar5));
    pfVar5 = pfVar5 + 1;
  } while (iVar6 != 0);
  return;
}

/* 1002fdf0  FUN_1002fdf0  (219 bytes)
 * undefined FUN_1002fdf0(float * param_1, float * param_2)
 * called by: FUN_1002ffe0
 */
void __cdecl FUN_1002fdf0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1[1] * param_1[1];
  fVar2 = param_1[2] * param_1[2];
  *param_2 = (1.0 - (fVar1 + fVar1)) - (fVar2 + fVar2);
  fVar1 = *param_1 * param_1[1] + param_1[2] * param_1[3];
  param_2[4] = fVar1 + fVar1;
  param_2[8] = (param_1[2] * *param_1 + param_1[2] * *param_1) -
               (param_1[3] * param_1[1] + param_1[3] * param_1[1]);
  param_2[1] = (*param_1 * param_1[1] + *param_1 * param_1[1]) -
               (param_1[2] * param_1[3] + param_1[2] * param_1[3]);
  fVar1 = *param_1 * *param_1;
  fVar2 = param_1[2] * param_1[2];
  param_2[5] = (1.0 - (fVar1 + fVar1)) - (fVar2 + fVar2);
  fVar1 = *param_1 * param_1[3] + param_1[2] * param_1[1];
  param_2[9] = fVar1 + fVar1;
  fVar1 = param_1[3] * param_1[1] + param_1[2] * *param_1;
  param_2[2] = fVar1 + fVar1;
  param_2[6] = (param_1[2] * param_1[1] + param_1[2] * param_1[1]) -
               (*param_1 * param_1[3] + *param_1 * param_1[3]);
  fVar1 = *param_1 * *param_1;
  fVar2 = param_1[1] * param_1[1];
  param_2[10] = (1.0 - (fVar1 + fVar1)) - (fVar2 + fVar2);
  return;
}

/* 1002fed0  FUN_1002fed0  (20 bytes)
 * undefined FUN_1002fed0(undefined4 * param_1, undefined4 * param_2)
 */
void __cdecl FUN_1002fed0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

/* 1002fef0  FUN_1002fef0  (231 bytes)
 * undefined FUN_1002fef0(float * param_1, float * param_2)
 * called by: FUN_1002ffe0
 */
void __cdecl FUN_1002fef0(float *param_1,float *param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)FUN_1006c9b0();
  param_1[1] = (float)fVar1;
  fVar2 = fVar1;
  if (fVar1 <= (float10)0.0) {
    fVar2 = -fVar1;
  }
  if (fVar2 - (float10)1.5707963267948966 <= (float10)0.0) {
    if (fVar1 <= (float10)0.0) {
      fVar1 = -fVar1;
    }
    fVar1 = -(fVar1 - (float10)1.5707963267948966);
  }
  else {
    if (fVar1 <= (float10)0.0) {
      fVar1 = -fVar1;
    }
    fVar1 = fVar1 - (float10)1.5707963267948966;
  }
  if (fVar1 < (float10)0.009999999776482582) {
    *param_1 = 0.0;
    fVar2 = (float10)fpatan(-(float10)param_2[1],(float10)param_2[5]);
    param_1[2] = (float)fVar2;
    return;
  }
  fVar2 = (float10)fpatan((float10)param_2[9],(float10)param_2[10]);
  *param_1 = (float)fVar2;
  fVar2 = (float10)fpatan((float10)param_2[4],(float10)*param_2);
  param_1[2] = (float)fVar2;
  return;
}

/* 1002ffe0  FUN_1002ffe0  (37 bytes)
 * undefined FUN_1002ffe0(float * param_1, float * param_2)
 */
void __cdecl FUN_1002ffe0(float *param_1,float *param_2)

{
  float local_30 [12];
  
  FUN_1002fdf0(param_1,local_30);
  FUN_1002fef0(param_2,local_30);
  return;
}

/* 10030010  FUN_10030010  (31 bytes)
 * undefined FUN_10030010(undefined4 * param_1, undefined4 * param_2)
 */
void __cdecl FUN_10030010(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return;
}

/* 10030030  FUN_10030030  (127 bytes)
 * undefined FUN_10030030(int param_1)
 * called by: FUN_1001f3e0
 */
void __fastcall FUN_10030030(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*DAT_100ea7ec)(s_cl_himodels_10094d10);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = (*DAT_100ea7ec)(s_developer_10094d04);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = (*DAT_100ea7ec)(s__r_drawentities_10094cf3 + 1);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = (*DAT_100ea7f4)();
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  (*DAT_100ea7f8)(param_1 + 0x4098,param_1 + 0x409c);
  uVar1 = (*DAT_100ea800)();
  *(undefined4 *)(param_1 + 0x40a8) = uVar1;
  uVar1 = (*DAT_100ea804)();
  *(undefined4 *)(param_1 + 0x40ac) = uVar1;
  uVar1 = (*DAT_100ea808)();
  *(undefined4 *)(param_1 + 0x40a4) = uVar1;
  uVar1 = (*DAT_100ea80c)();
  *(undefined4 *)(param_1 + 0x40a0) = uVar1;
  return;
}

/* 100300b0  FUN_100300b0  (88 bytes)
 * undefined FUN_100300b0(undefined4 * param_1)
 * called by: FUN_1001f370
 */
void __fastcall FUN_100300b0(undefined4 *param_1)

{
  param_1[6] = 1;
  param_1[7] = 1;
  *param_1 = &PTR_FUN_1007d5f8;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x16] = 0;
  param_1[0x1026] = 0;
  param_1[0x1027] = 0;
  param_1[0x1028] = 0;
  param_1[0x1029] = 0;
  param_1[0x102a] = 0;
  param_1[0x102b] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  return;
}

/* 10030110  FUN_10030110  (30 bytes)
 * undefined4 * FUN_10030110(byte.conflict param_1)
 */
undefined4 * __thiscall FUN_10030110(void *this,byte_conflict param_1)

{
  FUN_10030130(this);
  if ((param_1 & 1) != 0) {
    FUN_1006ad4c(this);
  }
  return this;
}

/* 10030130  FUN_10030130  (7 bytes)
 * undefined FUN_10030130(undefined4 * param_1)
 * called by: FUN_10030110
 */
void __fastcall FUN_10030130(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1007d5f8;
  return;
}

/* 100306a0  FUN_100306a0  (307 bytes)
 * undefined FUN_100306a0(int param_1, int param_2, float * param_3, float * param_4, float param_5)
 */
void __thiscall
FUN_100306a0(void *this,int param_1,int param_2,float *param_3,float *param_4,float param_5)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 *puVar5;
  int local_18;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  pfVar2 = param_4;
  if (0.0 <= param_5) {
    if (1.0 < param_5) {
      param_5 = 1.0;
    }
  }
  else {
    param_5 = 0.0;
  }
  local_18 = 0;
  fVar1 = 1.0 - param_5;
  if (0 < *(int *)(*(int *)((int)this + 0x44) + 0x8c)) {
    param_4 = param_3;
    puVar5 = (undefined4 *)(param_1 + 8);
    pfVar3 = pfVar2;
    pfVar4 = (float *)(param_2 + 4);
    do {
      FUN_1002fc70((float *)(puVar5 + -2),param_4,param_5,&local_10);
      puVar5[-2] = local_10;
      puVar5[-1] = local_c;
      *puVar5 = local_8;
      puVar5[1] = local_4;
      local_18 = local_18 + 1;
      param_4 = param_4 + 4;
      puVar5 = puVar5 + 4;
      pfVar4[-1] = param_5 * *pfVar3 + fVar1 * pfVar4[-1];
      *pfVar4 = fVar1 * *pfVar4 + param_5 * *(float *)(((int)pfVar2 - param_2) + (int)pfVar4);
      pfVar4[1] = fVar1 * pfVar4[1] + param_5 * pfVar3[2];
      pfVar3 = pfVar3 + 3;
      pfVar4 = pfVar4 + 3;
    } while (local_18 < *(int *)(*(int *)((int)this + 0x44) + 0x8c));
  }
  return;
}

/* 10030890  FUN_10030890  (215 bytes)
 * undefined FUN_10030890(int param_1, int * param_2, float * param_3)
 */
void FUN_10030890(int param_1,int *param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  
  lVar2 = __ftol();
  fVar1 = (float)(int)lVar2;
  *param_2 = (int)lVar2;
  if (fVar1 < *(float *)(param_1 + 0x88)) {
    *param_3 = *param_3 - *(float *)(param_1 + 0x88) * 0.33333334;
    *param_2 = 0;
    return;
  }
  if (*(float *)(param_1 + 0x90) < fVar1) {
    *param_3 = *param_3 - *(float *)(param_1 + 0x90) * 0.33333334;
    *param_2 = 0xff;
    return;
  }
  if (*(float *)(param_1 + 0x90) - *(float *)(param_1 + 0x88) < 0.1) {
    *param_2 = 0x7f;
    *param_3 = 0.0;
    return;
  }
  lVar2 = __ftol();
  *param_2 = (int)lVar2;
  *param_3 = 0.0;
  return;
}

/* 100331e0  FUN_100331e0  (862 bytes)
 * undefined FUN_100331e0(undefined4 * param_1)
 */
void __thiscall FUN_100331e0(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  *(undefined2 *)((int)this + 0x38) = *(undefined2 *)(param_1 + 0xe);
  *(undefined2 *)((int)this + 0x3a) = *(undefined2 *)((int)param_1 + 0x3a);
  *(undefined4 *)((int)this + 0x3c) = param_1[0xf];
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  *(undefined1 *)((int)this + 0x44) = *(undefined1 *)(param_1 + 0x11);
  *(undefined4 *)((int)this + 0x48) = param_1[0x12];
  *(undefined4 *)((int)this + 0x4c) = param_1[0x13];
  *(undefined2 *)((int)this + 0x50) = *(undefined2 *)(param_1 + 0x14);
  *(undefined1 *)((int)this + 0x52) = *(undefined1 *)((int)param_1 + 0x52);
  *(undefined4 *)((int)this + 0x54) = param_1[0x15];
  *(undefined4 *)((int)this + 0x58) = param_1[0x16];
  *(undefined4 *)((int)this + 0x5c) = param_1[0x17];
  *(undefined4 *)((int)this + 0x60) = param_1[0x18];
  *(undefined4 *)((int)this + 100) = param_1[0x19];
  *(undefined4 *)((int)this + 0x68) = param_1[0x1a];
  *(undefined4 *)((int)this + 0x6c) = param_1[0x1b];
  *(undefined4 *)((int)this + 0x70) = param_1[0x1c];
  *(undefined4 *)((int)this + 0x74) = param_1[0x1d];
  *(undefined4 *)((int)this + 0x78) = param_1[0x1e];
  *(undefined4 *)((int)this + 0x7c) = param_1[0x1f];
  *(undefined4 *)((int)this + 0x80) = param_1[0x20];
  *(undefined4 *)((int)this + 0x84) = param_1[0x21];
  *(undefined4 *)((int)this + 0x88) = param_1[0x22];
  *(undefined4 *)((int)this + 0x8c) = param_1[0x23];
  *(undefined4 *)((int)this + 0x90) = param_1[0x24];
  *(undefined4 *)((int)this + 0x94) = param_1[0x25];
  *(undefined4 *)((int)this + 0x98) = param_1[0x26];
  *(undefined4 *)((int)this + 0x9c) = param_1[0x27];
  *(undefined4 *)((int)this + 0xa0) = param_1[0x28];
  *(undefined4 *)((int)this + 0xa4) = param_1[0x29];
  *(undefined4 *)((int)this + 0xa8) = param_1[0x2a];
  *(undefined4 *)((int)this + 0xac) = param_1[0x2b];
  *(undefined4 *)((int)this + 0xb0) = param_1[0x2c];
  *(undefined4 *)((int)this + 0xb4) = param_1[0x2d];
  *(undefined4 *)((int)this + 0xb8) = param_1[0x2e];
  *(undefined4 *)((int)this + 0xbc) = param_1[0x2f];
  *(undefined4 *)((int)this + 0xc0) = param_1[0x30];
  *(undefined4 *)((int)this + 0xc4) = param_1[0x31];
  *(undefined4 *)((int)this + 200) = param_1[0x32];
  *(undefined4 *)((int)this + 0xcc) = param_1[0x33];
  *(undefined4 *)((int)this + 0xd0) = param_1[0x34];
  *(undefined4 *)((int)this + 0xd4) = param_1[0x35];
  *(undefined4 *)((int)this + 0xd8) = param_1[0x36];
  *(undefined4 *)((int)this + 0xdc) = param_1[0x37];
  *(undefined4 *)((int)this + 0xe0) = param_1[0x38];
  *(undefined4 *)((int)this + 0xe4) = param_1[0x39];
  *(undefined4 *)((int)this + 0xe8) = param_1[0x3a];
  *(undefined4 *)((int)this + 0xec) = param_1[0x3b];
  *(undefined4 *)((int)this + 0xf0) = param_1[0x3c];
  *(undefined4 *)((int)this + 0xf4) = param_1[0x3d];
  *(undefined4 *)((int)this + 0xf8) = param_1[0x3e];
  *(undefined4 *)((int)this + 0xfc) = param_1[0x3f];
  *(undefined4 *)((int)this + 0x100) = param_1[0x40];
  *(undefined4 *)((int)this + 0x104) = param_1[0x41];
  *(undefined4 *)((int)this + 0x108) = param_1[0x42];
  *(undefined4 *)((int)this + 0x10c) = param_1[0x43];
  *(undefined4 *)((int)this + 0x110) = param_1[0x44];
  *(undefined4 *)((int)this + 0x114) = param_1[0x45];
  *(undefined4 *)((int)this + 0x118) = param_1[0x46];
  *(undefined4 *)((int)this + 0x11c) = param_1[0x47];
  *(undefined4 *)((int)this + 0x120) = param_1[0x48];
  *(undefined4 *)((int)this + 0x124) = param_1[0x49];
  *(undefined4 *)((int)this + 0x128) = param_1[0x4a];
  *(undefined4 *)((int)this + 300) = param_1[0x4b];
  *(undefined4 *)((int)this + 0x130) = param_1[0x4c];
  *(undefined4 *)((int)this + 0x134) = param_1[0x4d];
  *(undefined4 *)((int)this + 0x138) = param_1[0x4e];
  *(undefined4 *)((int)this + 0x13c) = param_1[0x4f];
  *(undefined4 *)((int)this + 0x140) = param_1[0x50];
  *(undefined4 *)((int)this + 0x144) = param_1[0x51];
  *(undefined4 *)((int)this + 0x148) = param_1[0x52];
  *(undefined4 *)((int)this + 0x14c) = param_1[0x53];
  *(undefined4 *)((int)this + 0x150) = param_1[0x54];
  return;
}

/* 100345f0  FUN_100345f0  (151 bytes)
 * undefined FUN_100345f0(int * param_1)
 */
void __fastcall FUN_100345f0(int *param_1)

{
  int iVar1;
  
  (*DAT_100ea85c)();
  (*DAT_100ea848)(0);
  if (*(int *)(param_1[0xc] + 0x304) == 0x13) {
    *(undefined4 *)(param_1[0xc] + 0x304) = 0;
    (**(code **)(*param_1 + 0x54))();
    iVar1 = (*DAT_100ea860)();
    if (iVar1 == 0) {
      (*(gEngfuncs.pTriAPI)->RenderMode)(5);
    }
    (*DAT_100ea848)(2);
    (*(gEngfuncs.pTriAPI)->SpriteTexture)((model_s *)param_1[0x16],0);
    *(undefined4 *)(param_1[0xc] + 0x304) = 0x13;
    (**(code **)(*param_1 + 0x54))();
    iVar1 = (*DAT_100ea860)();
    if (iVar1 == 0) {
      (*(gEngfuncs.pTriAPI)->RenderMode)(0);
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x54))();
  }
  return;
}

/* 10034690  FUN_10034690  (189 bytes)
 * undefined FUN_10034690(int param_1)
 */
void __fastcall FUN_10034690(int param_1)

{
  int iVar1;
  
  (*DAT_100ea854)(0);
  if (*(int *)(*(int *)(param_1 + 0x2c) + 0xc) == 0x40000000) {
    (*DAT_100ea830)();
  }
  else if (*(int *)(*(int *)(param_1 + 0x2c) + 0xc) == 0x40400000) {
    (*DAT_100ea828)();
  }
  else {
    iVar1 = 0;
    if (0 < *(int *)(*(int *)(param_1 + 0x44) + 0xcc)) {
      do {
        (*DAT_100ea810)(iVar1,param_1 + 0x48,param_1 + 0x4c);
        (*DAT_100ea824)();
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(*(int *)(param_1 + 0x44) + 0xcc));
    }
  }
  if (*(float *)(*(int *)(param_1 + 0x2c) + 0xc) == 4.0) {
    (*(gEngfuncs.pTriAPI)->RenderMode)(5);
    (*DAT_100ea828)();
    (*(gEngfuncs.pTriAPI)->RenderMode)(0);
  }
  if (*(float *)(*(int *)(param_1 + 0x2c) + 0xc) == 5.0) {
    (*DAT_100ea82c)();
  }
                    /* WARNING: Could not recover jumptable at 0x10034747. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100ea858)();
  return;
}

/* 10034860  FUN_10034860  (31 bytes)
 * undefined FUN_10034860(int * param_1)
 */
void __fastcall FUN_10034860(int *param_1)

{
  int iVar1;
  
  iVar1 = (*DAT_100ea860)();
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x5c))();
    return;
  }
  (**(code **)(*param_1 + 0x58))();
  return;
}

/* 100348d0  FUN_100348d0  (199 bytes)
 * char * FUN_100348d0(char * param_1, char * param_2, int param_3)
 * called by: FUN_1002f480, FUN_100349a0, FUN_10058880, FUN_10060c70, FUN_10061720, FUN_10063c00, FUN_10064df0
 */
char * __cdecl FUN_100348d0(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  client_textmessage_t *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar7 = param_2;
  iVar2 = param_3;
  if (*param_1 != '\0') {
    while (param_3 = iVar2, 0 < param_3) {
      if (*param_1 == '#') {
        pcVar4 = &DAT_100eae74;
        pcVar6 = param_1 + 1;
        for (pcVar5 = pcVar6;
            ((cVar1 = *pcVar5, '@' < cVar1 && (cVar1 < '{')) || (('/' < cVar1 && (cVar1 < ':'))));
            pcVar5 = pcVar5 + 1) {
          *pcVar4 = cVar1;
          pcVar4 = pcVar4 + 1;
        }
        *pcVar4 = '\0';
        pcVar3 = (*gEngfuncs.pfnTextMessageGet)(&DAT_100eae74);
        if ((pcVar3 == (client_textmessage_t *)0x0) ||
           (pcVar4 = pcVar3->pMessage, pcVar4 == (char *)0x0)) {
          *pcVar7 = *param_1;
          pcVar7 = pcVar7 + 1;
        }
        else {
          cVar1 = *pcVar4;
          while (cVar1 != '\0') {
            pcVar4 = pcVar4 + 1;
            *pcVar7 = cVar1;
            pcVar7 = pcVar7 + 1;
            cVar1 = *pcVar4;
          }
          *pcVar7 = '\0';
          pcVar6 = pcVar5;
        }
      }
      else {
        *pcVar7 = *param_1;
        pcVar7 = pcVar7 + 1;
        pcVar6 = param_1 + 1;
        *pcVar7 = '\0';
      }
      param_1 = pcVar6;
      iVar2 = param_3 + -1;
      if (*pcVar6 == '\0') {
        param_2[param_3 + -2] = '\0';
        return param_2;
      }
    }
  }
  param_2[param_3 + -1] = '\0';
  return param_2;
}

/* 100349a0  FUN_100349a0  (29 bytes)
 * undefined * FUN_100349a0(char * param_1)
 * called by: FUN_10028760, FUN_100368f0, FUN_10036af0, FUN_10037260, FUN_10038180, FUN_10038840, FUN_1004a2e0, FUN_1004a3e0, FUN_1004b520, FUN_1004d7e0, FUN_1004ff10, FUN_10058880, ... (21 total)
 */
undefined * __cdecl FUN_100349a0(char *param_1)

{
  FUN_100348d0(param_1,&DAT_100eb274,0x400);
  return &DAT_100eb274;
}

/* 100349c0  FUN_100349c0  (78 bytes)
 * char * FUN_100349c0(char * param_1, int * param_2)
 * called by: FUN_10034a60
 */
char * FUN_100349c0(char *param_1,int *param_2)

{
  client_textmessage_t *pcVar1;
  
  if (param_1 == (char *)0x0) {
    return s_;
  }
  if (*param_1 == '#') {
    pcVar1 = (*gEngfuncs.pfnTextMessageGet)(param_1 + 1);
    if ((pcVar1 != (client_textmessage_t *)0x0) && (pcVar1->pMessage != (char *)0x0)) {
      if ((param_2 != (int *)0x0) && (pcVar1->effect < 0)) {
        *param_2 = -pcVar1->effect;
      }
      return pcVar1->pMessage;
    }
  }
  return param_1;
}

/* 10034a10  FUN_10034a10  (36 bytes)
 * undefined FUN_10034a10(char * param_1)
 * called by: FUN_10034a60
 */
void __cdecl FUN_10034a10(char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffff;
  pcVar3 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if ((param_1[~uVar2 - 2] == '\n') || (param_1[~uVar2 - 2] == '\r')) {
    param_1[~uVar2 - 2] = '\0';
  }
  return;
}

/* 10034a40  FUN_10034a40  (28 bytes)
 * undefined FUN_10034a40(char * param_1)
 * called by: FUN_10034a60
 */
void __cdecl FUN_10034a40(char *param_1)

{
  char *pcVar1;
  char cVar2;
  
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    if (*param_1 == '\r') {
      *param_1 = '\n';
    }
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  return;
}

/* 10034a60  FUN_10034a60  (617 bytes)
 * undefined4 FUN_10034a60(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_100234d0
 */
undefined4 FUN_10034a60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint local_4;
  
  FUN_100299b0(param_3,param_2);
  local_4 = FUN_10029a10();
  puVar3 = &local_4;
  pcVar2 = FUN_10029b00();
  pcVar2 = FUN_100349c0(pcVar2,(int *)puVar3);
  uVar4 = 0xffffffff;
  piVar9 = (int *)0x0;
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
  pcVar6 = (char *)&DAT_100eaf74;
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
  pcVar2 = FUN_10029b00();
  pcVar2 = FUN_100349c0(pcVar2,piVar9);
  uVar4 = 0xffffffff;
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
  pcVar6 = (char *)&DAT_100eaff4;
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
  FUN_10034a10((char *)&DAT_100eaff4);
  piVar9 = (int *)0x0;
  pcVar2 = FUN_10029b00();
  pcVar2 = FUN_100349c0(pcVar2,piVar9);
  uVar4 = 0xffffffff;
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
  pcVar6 = (char *)&DAT_100eb074;
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
  FUN_10034a10((char *)&DAT_100eb074);
  piVar9 = (int *)0x0;
  pcVar2 = FUN_10029b00();
  pcVar2 = FUN_100349c0(pcVar2,piVar9);
  uVar4 = 0xffffffff;
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
  pcVar6 = (char *)&DAT_100eb0f4;
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
  FUN_10034a10((char *)&DAT_100eb0f4);
  piVar9 = (int *)0x0;
  pcVar2 = FUN_10029b00();
  pcVar2 = FUN_100349c0(pcVar2,piVar9);
  uVar4 = 0xffffffff;
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
  pcVar6 = (char *)&DAT_100eb174;
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
  FUN_10034a10((char *)&DAT_100eb174);
  if ((DAT_100d5cb0 == 0) || (uVar4 = FUN_10064240(DAT_100d5cb0), (char)uVar4 != '\0')) {
    switch(local_4) {
    case 1:
      DAT_100eb1f4 = 1;
      puVar7 = &DAT_100eb1f5;
      break;
    case 2:
      puVar7 = &DAT_100eb1f4;
      break;
    case 3:
      FUN_1006ac7a(&DAT_100eb1f4,(byte_conflict *)&DAT_100eaf74);
      iVar10 = -1;
      iVar8 = 0x80;
      puVar3 = (uint *)FUN_10034a40(&DAT_100eb1f4);
      FUN_1002ed00(&DAT_100cfea8,puVar3,iVar8,iVar10);
      return 1;
    case 4:
      FUN_1006ac7a(&DAT_100eb1f4,(byte_conflict *)&DAT_100eaf74);
      pcVar2 = (char *)FUN_10034a40(&DAT_100eb1f4);
      (*gEngfuncs.pfnCenterPrint)(pcVar2);
      return 1;
    default:
      goto switchD_10034bdb_default;
    }
    FUN_1006ac7a(puVar7,(byte_conflict *)&DAT_100eaf74);
    pcVar2 = (char *)FUN_10034a40(&DAT_100eb1f4);
    (*gEngfuncs.pfnConsolePrint)(pcVar2);
  }
switchD_10034bdb_default:
  return 1;
}

/* 10034df0  FUN_10034df0  (67 bytes)
 * undefined4 FUN_10034df0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_10034df0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  *(uint *)((int)this + 0x18) = uVar1;
  if (uVar1 != 0) {
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
    return 1;
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) & 0xfffffffe;
  return 1;
}

/* 10034e60  FUN_10034e60  (20 bytes)
 * undefined FUN_10034e60(void)
 * called by: FUN_10056dd0
 */
void FUN_10034e60(void)

{
  if (DAT_100f1278 != 0) {
    FUN_10035b50(&DAT_100eb678);
    return;
  }
  return;
}

/* 10034e80  FUN_10034e80  (39 bytes)
 * undefined FUN_10034e80(void)
 * called by: FUN_1001bcd0
 */
void FUN_10034e80(void)

{
  if (DAT_101089c4 == '\0') {
    FUN_10034f90(0x100eb678);
  }
  if (DAT_100f1278 != 0) {
    FUN_10034fa0(0x100eb678);
    return;
  }
  return;
}

/* 10034eb0  FUN_10034eb0  (10 bytes)
 * undefined FUN_10034eb0(void)
 * called by: FUN_10056dd0
 */
void FUN_10034eb0(void)

{
  FUN_10034f60(&DAT_100eb678);
  return;
}

/* 10034ed0  FUN_10034ed0  (10 bytes)
 * undefined FUN_10034ed0(void)
 */
void FUN_10034ed0(void)

{
  FUN_10034f00(&DAT_100eb678);
  return;
}

/* 10034ee0  FUN_10034ee0  (12 bytes)
 * undefined FUN_10034ee0(void)
 */
void FUN_10034ee0(void)

{
  FUN_1006af63(0x10034ef0);
  return;
}

/* 10034f00  FUN_10034f00  (74 bytes)
 * undefined4 * FUN_10034f00(undefined4 * param_1)
 * called by: FUN_10034ed0
 */
undefined4 * __fastcall FUN_10034f00(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_1 + 0x19da;
  iVar2 = 0x20;
  do {
    FUN_100025e0(puVar1 + -0x1d6,0x1c,0x40,&LAB_10017e90);
    FUN_100025e0(puVar1,0xc,4,&LAB_10017e90);
    puVar1 = puVar1 + 0x2ee;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_10034f60(param_1);
  return param_1;
}

/* 10034f60  FUN_10034f60  (34 bytes)
 * undefined FUN_10034f60(undefined4 * param_1)
 * called by: FUN_10034eb0, FUN_10034f00
 */
void __fastcall FUN_10034f60(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x1700; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x1700] = 0;
  param_1[0x1701] = 0;
  *(undefined1 *)(param_1 + 0x74d3) = 0;
  return;
}

/* 10034f90  FUN_10034f90  (15 bytes)
 * undefined FUN_10034f90(int param_1)
 * called by: FUN_10034e80
 */
void __fastcall FUN_10034f90(int param_1)

{
  *(undefined1 *)(param_1 + 0x1d34c) = 1;
  *(undefined1 *)(param_1 + 0x1d34d) = 0;
  return;
}

/* 10034fa0  FUN_10034fa0  (105 bytes)
 * undefined FUN_10034fa0(int param_1)
 * called by: FUN_10034e80
 */
void __fastcall FUN_10034fa0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if ((*(char *)(param_1 + 0x1d34d) != '\0') && (iVar3 = 1, 1 < *(int *)(param_1 + 0x1d308))) {
    puVar2 = (undefined4 *)(param_1 + 0x6ad4);
    do {
      if (DAT_1018ca59 == '\0') {
        uVar1 = FUN_10056fc0((float *)(puVar2 + 0x20d));
      }
      else {
        uVar1 = 0;
      }
      *puVar2 = uVar1;
      (*gEngfuncs.CL_CreateVisibleEntity)(0,(cl_entity_s *)(puVar2 + -0xc5));
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 0x2ee;
    } while (iVar3 < *(int *)(param_1 + 0x1d308));
  }
  return;
}

/* 10035010  FUN_10035010  (2787 bytes)
 * undefined FUN_10035010(int param_1, int param_2)
 * called by: FUN_10035b50
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10035010(void *this,int param_1,int param_2)

{
  float *this_00;
  _func_399 **pp_Var1;
  undefined4 uVar2;
  model_s *pSpriteModel;
  int iVar3;
  undefined4 *puVar4;
  float *pfVar5;
  int unaff_EDI;
  float10 fVar6;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float in_stack_ffffff40;
  float fVar7;
  float *pfVar8;
  float in_stack_ffffff4c;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float in_stack_ffffff74;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float local_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  this_00 = (float *)((int)this + param_1 * 0x5c + 0x28);
  pfVar9 = (float *)0x10035034;
  uVar2 = FUN_100570b0(this_00);
  if ((char)uVar2 != '\0') {
    local_78 = DAT_10190b28 - *this_00;
    local_74 = DAT_10190b2c - *(float *)((int)this + param_1 * 0x5c + 0x2c);
    local_70 = DAT_10190b30 - *(float *)((int)this + param_1 * 0x5c + 0x30);
    local_54 = local_78 * local_78 + local_74 * local_74 + local_70 * local_70;
    if (10.0 <= local_54) {
      local_54 = 1.0;
    }
    else {
      local_54 = local_54 * 0.1;
    }
    if ((*(char *)((int)this + 0x1d34d) == '\0') ||
       (((DAT_1018d178 == '\0' && (0.1 < DAT_100963e8)) ||
        (iVar3 = *(int *)((int)this + 0x1d308), 0x1f < iVar3)))) {
      if (-1 < param_2) {
        pp_Var1 = &(gEngfuncs.pTriAPI)->SpriteTexture;
        in_stack_ffffff4c = 2.589876e-29;
        pSpriteModel = (*gEngfuncs.GetSpritePointer)(*(HSPRITE *)(&DAT_1018be14 + param_2 * 0x28));
        pfVar9 = (float *)0x10035289;
        iVar3 = (**pp_Var1)(pSpriteModel,unaff_EDI);
        if (iVar3 != 0) {
          (*(gEngfuncs.pTriAPI)->RenderMode)(5);
          (*(gEngfuncs.pTriAPI)->CullFace)(TRI_NONE);
          (*(gEngfuncs.pTriAPI)->Begin)(2);
          pfVar9 = (float *)0x100352d1;
          (*(gEngfuncs.pTriAPI)->Color4f)(1.0,1.0,1.0,fStack_3c);
          if (*(int *)((int)this + param_1 * 0x5c + 0x44) != 3) {
            local_6c = DAT_100963e8 * 37.5;
            if ((25.0 < local_6c) || (5.0 <= local_6c)) {
              if (25.0 < local_6c) {
                local_6c = 25.0;
              }
            }
            else {
              local_6c = 5.0;
            }
            fStack_38 = local_6c * *(float *)((int)this + param_1 * 0x5c + 0x1c);
            fStack_34 = local_6c * *(float *)((int)this + param_1 * 0x5c + 0x20);
            fStack_30 = local_6c * *(float *)((int)this + param_1 * 0x5c + 0x24);
            FUN_10002610(&fStack_44,&fStack_38);
            fStack_5c = fStack_44 + *this_00;
            fStack_58 = fStack_40 + *(float *)((int)this + param_1 * 0x5c + 0x2c);
            local_54 = fStack_3c + *(float *)((int)this + param_1 * 0x5c + 0x30);
            FUN_10002610(&fStack_68,&fStack_5c);
            fStack_50 = fStack_68;
            fStack_48 = fStack_60;
            fStack_60 = _DAT_1018bdb0 * local_70;
            fStack_4c = fStack_64;
            fStack_68 = _DAT_1018bda8 * local_70;
            fStack_64 = _DAT_1018bdac * local_70;
            FUN_10002610(&fStack_5c,&fStack_68);
            fStack_44 = fStack_50 - fStack_5c;
            fStack_40 = fStack_4c - fStack_58;
            fStack_3c = fStack_48 - local_54;
            FUN_10002610(&fStack_38,&fStack_44);
            fStack_28 = fStack_38;
            fStack_68 = _DAT_1018bda8 * local_70;
            fStack_64 = _DAT_1018bdac * local_70;
            fStack_24 = fStack_34;
            fStack_20 = fStack_30;
            fStack_60 = _DAT_1018bdb0 * local_70;
            FUN_10002610(&fStack_5c,&fStack_68);
            fStack_44 = fStack_5c + fStack_50;
            fStack_40 = fStack_58 + fStack_4c;
            fStack_3c = local_54 + fStack_48;
            FUN_10002610(&fStack_38,&fStack_44);
            fStack_68 = local_6c * *(float *)((int)this + param_1 * 0x5c + 0x1c);
            fStack_1c = fStack_38;
            fStack_64 = local_6c * *(float *)((int)this + param_1 * 0x5c + 0x20);
            fStack_18 = fStack_34;
            fStack_60 = local_6c * *(float *)((int)this + param_1 * 0x5c + 0x24);
            fStack_14 = fStack_30;
            FUN_10002610(&fStack_5c,&fStack_68);
            fStack_44 = *this_00 - fStack_5c;
            fStack_40 = *(float *)((int)this + param_1 * 0x5c + 0x2c) - fStack_58;
            fStack_3c = *(float *)((int)this + param_1 * 0x5c + 0x30) - local_54;
            FUN_10002610(&fStack_38,&fStack_44);
            fStack_50 = fStack_38;
            fStack_68 = _DAT_1018bda8 * local_70;
            fStack_4c = fStack_34;
            fStack_48 = fStack_30;
            fStack_64 = _DAT_1018bdac * local_70;
            fStack_60 = _DAT_1018bdb0 * local_70;
            FUN_10002610(&fStack_5c,&fStack_68);
            fStack_44 = fStack_5c + fStack_50;
            fStack_40 = fStack_58 + fStack_4c;
            fStack_3c = local_54 + fStack_48;
            FUN_10002610(&fStack_38,&fStack_44);
            fStack_68 = _DAT_1018bda8 * local_70;
            fStack_10 = fStack_38;
            fStack_64 = _DAT_1018bdac * local_70;
            fStack_c = fStack_34;
            fStack_60 = _DAT_1018bdb0 * local_70;
            fStack_8 = fStack_30;
            FUN_10002610(&fStack_5c,&fStack_68);
            fStack_44 = fStack_50 - fStack_5c;
            fStack_40 = fStack_4c - fStack_58;
            fStack_3c = fStack_48 - local_54;
            FUN_10002610(&fStack_38,&fStack_44);
            fStack_4 = fStack_38;
            FUN_10050000((int)&fStack_28);
            fStack_68 = local_6c * *(float *)((int)this + param_1 * 0x5c + 0x1c);
            fStack_64 = local_6c * *(float *)((int)this + param_1 * 0x5c + 0x20);
            fStack_60 = local_6c * *(float *)((int)this + param_1 * 0x5c + 0x24);
            FUN_10002610(&fStack_5c,&fStack_68);
            fStack_44 = fStack_5c + *this_00;
            fStack_40 = fStack_58 + *(float *)((int)this + param_1 * 0x5c + 0x2c);
            fStack_3c = local_54 + *(float *)((int)this + param_1 * 0x5c + 0x30);
            FUN_10002610(&fStack_38,&fStack_44);
            fStack_68 = _DAT_1018bd9c * local_70;
            fStack_50 = fStack_38;
            fStack_64 = _DAT_1018bda0 * local_70;
            fStack_4c = fStack_34;
            fStack_60 = _DAT_1018bda4 * local_70;
            fStack_48 = fStack_30;
            FUN_10002610(&fStack_5c,&fStack_68);
            fStack_44 = fStack_50 - fStack_5c;
            fStack_40 = fStack_4c - fStack_58;
            fStack_3c = fStack_48 - local_54;
            FUN_10002610(&fStack_38,&fStack_44);
            fStack_68 = _DAT_1018bd9c * local_70;
            fStack_28 = fStack_38;
            fStack_64 = _DAT_1018bda0 * local_70;
            fStack_24 = fStack_34;
            fStack_20 = fStack_30;
            fStack_60 = _DAT_1018bda4 * local_70;
            FUN_10002610(&fStack_5c,&fStack_68);
            fStack_44 = fStack_5c + fStack_50;
            fStack_40 = fStack_58 + fStack_4c;
            fStack_3c = local_54 + fStack_48;
            FUN_10002610(&fStack_38,&fStack_44);
            fStack_68 = local_6c * *(float *)((int)this + param_1 * 0x5c + 0x1c);
            fStack_1c = fStack_38;
            fStack_64 = local_6c * *(float *)((int)this + param_1 * 0x5c + 0x20);
            fStack_18 = fStack_34;
            fStack_60 = local_6c * *(float *)((int)this + param_1 * 0x5c + 0x24);
            fStack_14 = fStack_30;
            FUN_10002610(&fStack_5c,&fStack_68);
            fStack_44 = *this_00 - fStack_5c;
            fStack_40 = *(float *)((int)this + param_1 * 0x5c + 0x2c) - fStack_58;
            fStack_3c = *(float *)((int)this + param_1 * 0x5c + 0x30) - local_54;
            FUN_10002610(&fStack_38,&fStack_44);
            fStack_68 = _DAT_1018bd9c * local_70;
            fStack_50 = fStack_38;
            fStack_64 = _DAT_1018bda0 * local_70;
            fStack_4c = fStack_34;
            fStack_48 = fStack_30;
            fStack_60 = _DAT_1018bda4 * local_70;
            FUN_10002610(&fStack_5c,&fStack_68);
            puVar4 = (undefined4 *)
                     FUN_10009190(&fStack_38,fStack_5c + fStack_50,fStack_58 + fStack_4c,
                                  local_54 + fStack_48);
            FUN_10002610(&fStack_44,puVar4);
            fStack_10 = fStack_44;
            fStack_c = fStack_40;
            fStack_8 = fStack_3c;
            puVar4 = (undefined4 *)
                     FUN_10009190(&fStack_44,_DAT_1018bd9c * local_70,_DAT_1018bda0 * local_70,
                                  _DAT_1018bda4 * local_70);
            FUN_10002610(&fStack_68,puVar4);
            puVar4 = (undefined4 *)
                     FUN_10009190(&fStack_38,fStack_50 - fStack_68,fStack_4c - fStack_64,
                                  fStack_48 - fStack_60);
            FUN_10002610(&fStack_5c,puVar4);
            fStack_4 = fStack_5c;
            FUN_10050000((int)&fStack_28);
          }
          in_stack_ffffff74 = 0.0;
          FUN_10050080(&fStack_28,this_00,&fStack_50,local_70,'\x01',(float *)0x0,0.0,(float *)0x0);
          FUN_10050000((int)&fStack_28);
          (*(gEngfuncs.pTriAPI)->End)();
          (*(gEngfuncs.pTriAPI)->RenderMode)(0);
        }
      }
    }
    else {
      switch(*(undefined4 *)((int)this + param_1 * 0x5c + 0x44)) {
      case 3:
        *(undefined4 *)((int)this + iVar3 * 3000 + 0x679c) = *(undefined4 *)((int)this + 0x1d314);
        *(undefined4 *)((int)this + *(int *)((int)this + 0x1d308) * 3000 + 0x5ee0) =
             *(undefined4 *)((int)this + 0x1d334);
        break;
      case 4:
      case 6:
      case 8:
      case 0xd:
        *(undefined4 *)((int)this + iVar3 * 3000 + 0x679c) = *(undefined4 *)((int)this + 0x1d310);
        *(undefined4 *)((int)this + *(int *)((int)this + 0x1d308) * 3000 + 0x5ee0) =
             *(undefined4 *)((int)this + 0x1d330);
        break;
      default:
        *(undefined4 *)((int)this + iVar3 * 3000 + 0x679c) = *(undefined4 *)((int)this + 0x1d30c);
        *(undefined4 *)((int)this + *(int *)((int)this + 0x1d308) * 3000 + 0x5ee0) =
             *(undefined4 *)((int)this + 0x1d32c);
      }
      pfVar9 = (float *)((int)this + *(int *)((int)this + 0x1d308) * 3000 + 0x6750);
      *pfVar9 = *this_00;
      pfVar9[1] = *(float *)((int)this + param_1 * 0x5c + 0x2c);
      pfVar9[2] = *(float *)((int)this + param_1 * 0x5c + 0x30);
      pfVar9 = (float *)((int)this + *(int *)((int)this + 0x1d308) * 3000 + 0x5ed4);
      in_stack_ffffff4c = 2.589848e-29;
      FUN_10046110(pfVar9,(float *)((int)this + param_1 * 0x5c + 0x1c));
      *(float *)((int)this + *(int *)((int)this + 0x1d308) * 3000 + 0x5ed4) =
           -*(float *)((int)this + *(int *)((int)this + 0x1d308) * 3000 + 0x5ed4);
      *(int *)((int)this + 0x1d308) = *(int *)((int)this + 0x1d308) + 1;
    }
    fVar6 = FUN_10055b30(DAT_100963e8,DAT_1018d178);
    fVar11 = (float)fVar6;
    puVar4 = FUN_100071f0(*(int *)((int)this + param_1 * 0x5c + 0x44));
    fVar11 = (float)(int)puVar4[9] * 40.0 * fVar11 * DAT_10191478;
    fVar10 = 2.59047e-29;
    puVar4 = (undefined4 *)
             FUN_10009190(&local_78,fVar11 * *(float *)((int)this + param_1 * 0x5c + 0x1c),
                          fVar11 * *(float *)((int)this + param_1 * 0x5c + 0x20),
                          fVar11 * *(float *)((int)this + param_1 * 0x5c + 0x24));
    FUN_10002610(&stack0xffffff7c,puVar4);
    pfVar5 = (float *)FUN_10035b10(this_00,&fStack_60,(float *)&stack0xffffff7c);
    *this_00 = *pfVar5;
    *(float *)((int)this + param_1 * 0x5c + 0x2c) = pfVar5[1];
    *(float *)((int)this + param_1 * 0x5c + 0x30) = pfVar5[2];
    if ((0.0 < *(float *)(DAT_100df550 + 0xc)) &&
       ((*gEngfuncs.GetClientTime)(),
       (float10)*(float *)((int)this + param_1 * 0x5c + 0x4c) < extraout_ST0)) {
      fVar6 = FUN_10056fa0(0.01);
      fVar11 = (float)fVar6;
      (*gEngfuncs.GetClientTime)();
      pfVar5 = (float *)((int)this + param_1 * 0x5c + 0x34);
      *(float *)((int)this + param_1 * 0x5c + 0x4c) = (float)(extraout_ST0_00 + (float10)fVar11);
      fVar7 = 2.5905115e-29;
      pfVar8 = pfVar5;
      fVar11 = in_stack_ffffff74;
      fVar12 = fStack_48;
      FUN_10002610(&stack0xffffff4c,pfVar5);
      FUN_10002610(&stack0xffffff40,this_00);
      FUN_10046240(in_stack_ffffff40,fVar7,(float)pfVar8,in_stack_ffffff4c,(float)pfVar9,fVar10,
                   in_stack_ffffff74,fVar11,fVar12);
      *pfVar5 = *this_00;
      *(undefined4 *)((int)this + param_1 * 0x5c + 0x38) =
           *(undefined4 *)((int)this + param_1 * 0x5c + 0x2c);
      *(undefined4 *)((int)this + param_1 * 0x5c + 0x3c) =
           *(undefined4 *)((int)this + param_1 * 0x5c + 0x30);
    }
  }
  return;
}

/* 10035b10  FUN_10035b10  (51 bytes)
 * undefined FUN_10035b10(float * param_1, float * param_2)
 * called by: FUN_10035010, FUN_1003d600, FUN_1003dfa0, FUN_1003f090, FUN_10040c20, FUN_100481b0, FUN_10050080, FUN_10052720, FUN_10052c80, FUN_10054510, FUN_10057330
 */
void __thiscall FUN_10035b10(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_2[1];
  fVar2 = *(float *)((int)this + 4);
  fVar3 = param_2[2];
  fVar4 = *(float *)((int)this + 8);
  *param_1 = *param_2 + *(float *)this;
  param_1[1] = fVar1 + fVar2;
  param_1[2] = fVar3 + fVar4;
  return;
}

/* 10035b50  FUN_10035b50  (196 bytes)
 * undefined FUN_10035b50(void * param_1)
 * called by: FUN_10034e60
 */
void __fastcall FUN_10035b50(void *param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  undefined1 auStack_44 [68];
  
  iVar1 = FUN_100509d0(&DAT_1018bde8,(byte_conflict *)s_sprites_shotgun_pellets_spr_10094d84,5);
  iVar3 = 0;
  *(undefined4 *)((int)param_1 + 0x5c00) = 0;
  *(undefined4 *)((int)param_1 + 0x1d308) = 1;
  pfVar2 = (float *)((int)param_1 + 0x50);
  do {
    if (pfVar2[-0x14] != 0.0) {
      (*gEngfuncs.GetClientTime)();
      if ((float10)*pfVar2 < extraout_ST0) {
        (*gEngfuncs.GetClientTime)();
        *pfVar2 = (float)extraout_ST0_00;
        if ((-1 < DAT_1018d16c) && (DAT_1018d16c < 2)) {
          *pfVar2 = 0.1 / (float)(DAT_1018d16c + 1) + (float)extraout_ST0_00;
        }
        FUN_10035d40(param_1,iVar3,(int)auStack_44);
      }
      if (DAT_100963e8 < 0.99) {
        FUN_10035010(param_1,iVar3,iVar1);
      }
      *(int *)((int)param_1 + 0x5c00) = *(int *)((int)param_1 + 0x5c00) + 1;
    }
    iVar3 = iVar3 + 1;
    pfVar2 = pfVar2 + 0x17;
  } while (iVar3 < 0x100);
  return;
}

/* 10035c20  FUN_10035c20  (229 bytes)
 * undefined FUN_10035c20(int param_1, int * param_2, int * param_3, int * param_4, int * param_5, int param_6)
 * called by: FUN_100450c0
 */
void __thiscall
FUN_10035c20(void *this,int param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = this;
  do {
    if (*piVar2 == 0) {
      if (iVar1 != -1) {
        piVar2 = (int *)((int)this + iVar1 * 0x5c);
        *piVar2 = param_1;
        piVar2[7] = *param_3;
        piVar2[8] = param_3[1];
        piVar2[9] = param_3[2];
        piVar2[0x10] = *param_4;
        piVar2[0x11] = *param_5;
        piVar2[4] = *param_2;
        piVar2[5] = param_2[1];
        piVar2[6] = param_2[2];
        piVar2[1] = *param_2;
        piVar2[2] = param_2[1];
        piVar2[3] = param_2[2];
        piVar2[10] = *param_2;
        piVar2[0xb] = param_2[1];
        piVar2[0xc] = param_2[2];
        piVar2[0xd] = *param_2;
        piVar2[0xe] = param_2[1];
        iVar1 = param_2[2];
        piVar2[0x13] = 0;
        piVar2[0x14] = 0;
        piVar2[0xf] = iVar1;
        piVar2[0x15] = param_6;
        piVar2[0x16] = 0;
        *(int *)((int)this + 0x5c00) = *(int *)((int)this + 0x5c00) + 1;
      }
      return;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0x17;
  } while (iVar1 < 0x100);
  return;
}

/* 10035d10  FUN_10035d10  (33 bytes)
 * undefined FUN_10035d10(int param_1)
 * called by: FUN_10035d40
 */
void __thiscall FUN_10035d10(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)((int)this + param_1 * 0x5c);
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

/* 10035d40  FUN_10035d40  (1188 bytes)
 * undefined FUN_10035d40(int param_1, int param_2)
 * called by: FUN_10035b50
 */
void __thiscall FUN_10035d40(void *this,int param_1,int param_2)

{
  float *point;
  vec_t *end;
  int *piVar1;
  pmtrace_s *tr;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 extraout_ST0;
  longlong lVar5;
  void *unaff_retaddr;
  float fStack0000000c;
  float fStack00000010;
  float fStack00000014;
  float in_stack_00000018;
  float in_stack_0000001c;
  pmtrace_s *in_stack_00000020;
  float fStack00000024;
  float fStack00000028;
  vec_t in_stack_0000002c;
  vec_t in_stack_00000030;
  undefined1 uStack00000034;
  int in_stack_00000050;
  char in_stack_00000054;
  float fVar6;
  float fVar7;
  float in_stack_ffffffd0;
  float in_stack_ffffffd4;
  float in_stack_ffffffd8;
  float fVar8;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar3 = param_1;
  piVar1 = (int *)((int)this + param_1 * 0x5c);
  FUN_100071f0(*(int *)((int)this + param_1 * 0x5c + 0x44));
  fVar4 = FUN_10055b30(DAT_100963e8,DAT_1018d178);
  fVar7 = (float)fVar4;
  (*gEngfuncs.GetClientTime)();
  fVar6 = (float)((float10)(float)piVar1[0x14] - extraout_ST0);
  if ((float10)(float)piVar1[0x14] - extraout_ST0 < (float10)0.001) {
    fVar6 = DAT_10191478;
  }
  FUN_10002610(&stack0xffffffd0,(undefined4 *)&stack0xffffffc4);
  fVar8 = in_stack_ffffffd0 * fVar6;
  fVar6 = in_stack_ffffffd8 * fVar6;
  FUN_10002610(&fStack_18,(undefined4 *)&stack0xffffffdc);
  fStack_c = fStack_18 * fVar7;
  fStack_8 = fStack_14 * fVar7;
  fStack_4 = fStack_10 * fVar7;
  FUN_10002610(&stack0xffffffb8,&fStack_c);
  point = (float *)(piVar1 + 1);
  (*gEngfuncs.PM_PointContents)(point,(int *)0x0);
  (*(gEngfuncs.pEventAPI)->EV_SetUpPlayerPrediction)(0,1);
  (*(gEngfuncs.pEventAPI)->EV_PushPMStates)();
  (*(gEngfuncs.pEventAPI)->EV_SetSolidPlayers)(*piVar1 + -1);
  (*(gEngfuncs.pEventAPI)->EV_SetTraceHull)(2);
  fStack0000000c = in_stack_ffffffd0 + *point;
  fStack00000010 = in_stack_ffffffd4 + (float)piVar1[2];
  fStack00000014 = in_stack_ffffffd8 + (float)piVar1[3];
  FUN_10002610(&stack0x00000000,&stack0x0000000c);
  tr = in_stack_00000020;
  (*(gEngfuncs.pEventAPI)->EV_PlayerTrace)(point,(float *)&stack0x00000000,2,-1,in_stack_00000020);
  uStack00000034 = 0;
  if (tr->fraction == 1.0) {
    fStack_10 = fVar6 + *point;
    fStack00000024 = fStack_18 + (float)piVar1[2];
    fStack00000028 = fStack_14 + (float)piVar1[3];
    *point = fStack_10;
    piVar1[2] = (int)fStack00000024;
    piVar1[3] = (int)fStack00000028;
    fStack_c = fStack00000024;
    fStack_8 = fStack00000028;
  }
  else {
    end = tr->endpos;
    uStack00000034 = 1;
    *point = *end;
    piVar1[2] = (int)tr->endpos[1];
    piVar1[3] = (int)tr->endpos[2];
    in_stack_00000020 = (pmtrace_s *)((float)piVar1[4] - *point);
    if (piVar1[0x15] == 2) {
      fStack00000024 = (float)piVar1[5] - (float)piVar1[2];
      fStack00000028 = (float)piVar1[6] - (float)piVar1[3];
      FUN_10002610(&fStack_10,&stack0x00000020);
    }
    else {
      fStack00000024 = (float)piVar1[5] - (float)piVar1[2];
      fStack00000028 = (float)piVar1[6] - (float)piVar1[3];
      FUN_10002610(&fStack_10,&stack0x00000020);
    }
    lVar5 = __ftol();
    fVar4 = FUN_10007290((int)lVar5);
    fVar7 = (float)(fVar4 * (float10)(float)piVar1[0x10]);
    in_stack_00000020 = (pmtrace_s *)(fVar6 + *point);
    fStack00000024 = fStack_18 + (float)piVar1[2];
    fStack00000028 = fStack_14 + (float)piVar1[3];
    FUN_10002610(&stack0x00000014,&stack0x00000020);
    FUN_10044bf0(*piVar1,(int)tr,point,&stack0x00000014,piVar1[0x15]);
    FUN_10001180((int)tr);
    fVar7 = fVar7 * *(float *)((int)fVar8 + 0x18);
    iVar3 = in_stack_00000050;
    if (((piVar1[0x15] != 2) && (piVar1[0x15] != 1)) && (5.0 < fVar7)) {
      if (48.0 <= fVar7) {
        fVar7 = 48.0;
      }
      in_stack_00000020 = (pmtrace_s *)(fVar7 * (float)piVar1[7]);
      fStack00000024 = fVar7 * (float)piVar1[8];
      fStack00000028 = fVar7 * (float)piVar1[9];
      FUN_10002610(&stack0x00000014,&stack0x00000020);
      param_2 = (int)(fStack00000014 + *end);
      fStack0000000c = in_stack_00000018 + tr->endpos[1];
      fStack00000010 = in_stack_0000001c + tr->endpos[2];
      FUN_10002610(&fStack_4,&param_2);
      fStack_14 = (float)param_1;
      iVar2 = (*gEngfuncs.PM_PointContents)((float *)&stack0xffffffe4,(int *)0x0);
      iVar3 = in_stack_00000050;
      if (iVar2 != -2) {
        *point = fStack_14;
        piVar1[4] = (int)fStack_14;
        piVar1[2] = (int)fStack_10;
        piVar1[5] = (int)fStack_10;
        piVar1[3] = (int)fStack_c;
        piVar1[6] = (int)fStack_c;
        piVar1[0x10] = (int)fVar8;
        piVar1[0x15] = 2;
        fStack00000028 = *end;
        in_stack_0000002c = tr->endpos[1];
        in_stack_00000030 = tr->endpos[2];
        (*(gEngfuncs.pEventAPI)->EV_SetTraceHull)(2);
        (*(gEngfuncs.pEventAPI)->EV_PlayerTrace)(&fStack_10,end,0,-1,tr);
        if (tr->fraction != 1.0) {
          FUN_10044bf0(*piVar1,(int)tr,&param_1,&stack0x00000040,2);
          FUN_10001180((int)tr);
        }
        in_stack_00000054 = '\0';
        iVar3 = in_stack_00000050;
      }
    }
  }
  (*(gEngfuncs.pEventAPI)->EV_PopPMStates)();
  if (in_stack_00000054 != '\0') {
    FUN_10035d10(unaff_retaddr,iVar3);
  }
  return;
}

/* 100361f0  FUN_100361f0  (3 bytes)
 * undefined1 FUN_100361f0(undefined1 * param_1)
 * called by: FUN_1004d3f0, FUN_1004f220, FUN_10064790, IN_MouseEvent
 */
undefined1 __fastcall FUN_100361f0(undefined1 *param_1)

{
  return *param_1;
}

/* 10036200  FUN_10036200  (638 bytes)
 * undefined FUN_10036200(undefined1 * param_1)
 * called by: FUN_1004cb50
 */
void __fastcall FUN_10036200(undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  
  *param_1 = 0;
  param_1[0x2f10] = 1;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  puVar6 = (undefined4 *)(param_1 + 0x14);
  for (iVar2 = 0x102; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  puVar6 = (undefined4 *)(param_1 + 0x41c);
  for (iVar2 = 0x102; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  puVar6 = (undefined4 *)(param_1 + 0x824);
  for (iVar2 = 0x912; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  FUN_10036480((int)param_1);
  param_1[0x2f08] = 1;
  *(undefined4 *)(param_1 + 0x2f14) = 0;
  *(undefined4 *)(param_1 + 0x2f1c) = 0;
  puVar6 = (undefined4 *)(param_1 + 0x2d6c);
  for (iVar2 = 0x3c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0xffffffff;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)(param_1 + 0x2d6c) = 1;
  *(undefined4 *)(param_1 + 0x2d80) = 9;
  *(undefined4 *)(param_1 + 0x2d94) = 0xc;
  *(undefined4 *)(param_1 + 0x2da8) = 0xe;
  *(undefined4 *)(param_1 + 0x2dbc) = 2;
  *(undefined4 *)(param_1 + 0x2dd0) = 0x15;
  *(undefined4 *)(param_1 + 0x2de4) = 0x16;
  *(undefined4 *)(param_1 + 0x2df8) = 0x1c;
  *(undefined4 *)(param_1 + 0x2e0c) = 0x1f;
  *(undefined4 *)(param_1 + 0x2e20) = 0x24;
  *(undefined4 *)(param_1 + 0x2d70) = 3;
  *(undefined4 *)(param_1 + 0x2d84) = 6;
  *(undefined4 *)(param_1 + 0x2d98) = 7;
  *(undefined4 *)(param_1 + 0x2dac) = 0x11;
  *(undefined4 *)(param_1 + 0x2dc0) = 0x13;
  *(undefined4 *)(param_1 + 0x2dd4) = 0x17;
  *(undefined4 *)(param_1 + 0x2d74) = 5;
  *(undefined4 *)(param_1 + 0x2d88) = 0xd;
  *(undefined4 *)(param_1 + 0x2d9c) = 0xf;
  *(undefined4 *)(param_1 + 0x2db0) = 0x1b;
  *(undefined4 *)(param_1 + 0x2dc4) = 0x12;
  *(undefined4 *)(param_1 + 0x2d78) = 4;
  *(undefined4 *)(param_1 + 0x2d8c) = 0xb;
  *(undefined4 *)(param_1 + 0x2da0) = 0x14;
  *(undefined4 *)(param_1 + 0x2db4) = 0x1a;
  *(undefined4 *)(param_1 + 0x2dc8) = 0x21;
  *(undefined4 *)(param_1 + 0x2d7c) = 0x18;
  *(undefined4 *)(param_1 + 0x2d90) = 0x19;
  *(undefined4 *)(param_1 + 0x2da4) = 0x20;
  *(undefined4 *)(param_1 + 0x2db8) = 0x22;
  *(undefined4 *)(param_1 + 0x2dcc) = 0x23;
  pcVar5 = param_1 + 0x2e5c;
  for (iVar2 = 0x28; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + 4;
  }
  uVar3 = 0xffffffff;
  pcVar5 = s__Buy_Handguns_10094ddc;
  do {
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar7 + -uVar3;
  pcVar7 = param_1 + 0x2e5c;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar5 = &DAT_10094dd0;
  do {
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar7 + -uVar3;
  pcVar7 = param_1 + 0x2e7c;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar5 = s__Buy_Rifles_10094dc4;
  do {
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar7 + -uVar3;
  pcVar7 = param_1 + 0x2e9c;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar5 = s__Buy_Shotguns_10094db4;
  do {
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar7 + -uVar3;
  pcVar7 = param_1 + 0x2ebc;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar5 = s__Buy_SpecialPurpose_10094da0;
  do {
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar7 + -uVar3;
  pcVar7 = param_1 + 0x2edc;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return;
}

/* 10036480  FUN_10036480  (219 bytes)
 * undefined FUN_10036480(int param_1)
 * called by: FUN_10036200
 */
void __fastcall FUN_10036480(int param_1)

{
  LPCSTR pCVar1;
  FILE *pFVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char acStack_408 [1032];
  
  pCVar1 = (LPCSTR)(param_1 + 0x2c6c);
  *pCVar1 = '\0';
  (*gEngfuncs.pfnGetGameDirectory)();
  FUN_1006ac7a(pCVar1,(byte_conflict *)s__s_tsbuylist_tsa_10094dec);
  pFVar2 = (FILE *)FUN_1006b77b(pCVar1,&DAT_10092b28);
  if (pFVar2 == (FILE *)0x0) {
    pFVar2 = (FILE *)FUN_1006b77b(pCVar1,&DAT_10092b34);
    if (pFVar2 == (FILE *)0x0) {
      *pCVar1 = '\0';
      return;
    }
  }
  else {
    iVar3 = FUN_1006b57a((int *)pFVar2,0,0);
    if (iVar3 == 0) {
      iVar3 = 0;
      uVar4 = FUN_1006b633(acStack_408,0x408,1,(int *)pFVar2);
      if (uVar4 != 0) {
        puVar6 = (undefined4 *)(param_1 + 0x824);
        do {
          puVar7 = puVar6;
          if (iVar3 < 9) {
            iVar3 = iVar3 + 1;
            puVar7 = puVar6 + 0x102;
            pcVar8 = acStack_408;
            for (iVar5 = 0x102; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar6 = *(undefined4 *)pcVar8;
              pcVar8 = pcVar8 + 4;
              puVar6 = puVar6 + 1;
            }
          }
          uVar4 = FUN_1006b633(acStack_408,0x408,1,(int *)pFVar2);
          puVar6 = puVar7;
        } while (uVar4 != 0);
      }
    }
  }
  FUN_1006b37a(pFVar2);
  return;
}

/* 10036560  FUN_10036560  (108 bytes)
 * undefined FUN_10036560(int param_1)
 * called by: FUN_10038840
 */
void __fastcall FUN_10036560(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  char *pcVar3;
  
  if ((*(char *)(param_1 + 0x2c6c) != '\0') &&
     (pFVar1 = (FILE *)FUN_1006b77b((LPCSTR)(param_1 + 0x2c6c),&DAT_10092b34), pFVar1 != (FILE *)0x0
     )) {
    iVar2 = FUN_1006b57a((int *)pFVar1,0,0);
    if (iVar2 == 0) {
      pcVar3 = (char *)(param_1 + 0x824);
      iVar2 = 9;
      do {
        FUN_1006b7df(pcVar3,0x408,1,(int *)pFVar1);
        pcVar3 = pcVar3 + 0x408;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_1006b37a(pFVar1);
  }
  return;
}

/* 100365d0  FUN_100365d0  (3 bytes)
 * undefined1 FUN_100365d0(void)
 * called by: FUN_10036640, FUN_10036af0
 */
undefined1 FUN_100365d0(void)

{
  return 0;
}

/* 100365e0  FUN_100365e0  (90 bytes)
 * undefined4 FUN_100365e0(uint param_1, char param_2)
 * called by: FUN_10036af0, FUN_10037960, FUN_10037fe0, FUN_10038410, FUN_10038840, FUN_10038f60
 */
undefined4 FUN_100365e0(uint param_1,char param_2)

{
  undefined4 uVar1;
  
  if (param_2 == '\0') {
    uVar1 = FUN_1000b6d0(param_1,DAT_1018d174);
    if ((char)uVar1 != '\0') {
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
    if ((DAT_100cf97c < 2) && (param_1 == 0x18)) {
      return 1;
    }
  }
  else if ((DAT_100cf97c < 2) && ((param_1 & 0x20) != 0)) {
    return 1;
  }
  return 0;
}

/* 10036640  FUN_10036640  (20 bytes)
 * undefined4 FUN_10036640(void)
 * called by: FUN_10036af0, FUN_10037260, FUN_10037540, FUN_10037960, FUN_10037ba0, FUN_10037fe0, FUN_10038f60, FUN_100392b0, FUN_10039400
 */
undefined4 FUN_10036640(void)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_100365d0();
  uVar2 = 30000;
  if (cVar1 != '\0') {
    uVar2 = DAT_100d43f0;
  }
  return uVar2;
}

/* 10036660  FUN_10036660  (6 bytes)
 * undefined4 FUN_10036660(void)
 * called by: FUN_10036af0, FUN_10037960, FUN_10037ba0, FUN_10037fe0, FUN_10038f60, FUN_10039400
 */
undefined4 FUN_10036660(void)

{
  return 0x51;
}

/* 10036670  FUN_10036670  (175 bytes)
 * undefined FUN_10036670(char * param_1)
 * called by: FUN_1004fda0, FUN_10065250
 */
void __fastcall FUN_10036670(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  float10 extraout_ST0;
  
  if (*param_1 == '\0') {
    iVar2 = (*(gEngfuncs.pDemoAPI)->IsPlayingback)();
    if (iVar2 != 0) {
      *param_1 = '\0';
      return;
    }
    cVar1 = param_1[0x2f10];
    pcVar3 = param_1 + 0x41c;
    pcVar4 = param_1 + 0x14;
    for (iVar2 = 0x102; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar4 = pcVar4 + 4;
    }
    param_1[0x2f0c] = '\0';
    param_1[0x2f0d] = '\0';
    param_1[0x2f0e] = '\0';
    param_1[0x2f0f] = '\0';
    *param_1 = '\x01';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[0x2f08] = '\0';
    if (cVar1 != '\0') {
      param_1[0x2f10] = '\0';
      (*gEngfuncs.pfnRandomFloat)(0.5,1.0);
      FUN_100398e0(param_1,(float)extraout_ST0);
    }
    FUN_100392b0(param_1);
    DAT_1018d184 = 0;
    DAT_1018d17c = DAT_100d5908 / 2;
    DAT_1018d180 = DAT_100d590c / 2;
    FUN_10064790(DAT_100d5cb0);
  }
  return;
}

/* 10036720  FUN_10036720  (42 bytes)
 * undefined FUN_10036720(undefined1 * param_1)
 * called by: FUN_10038840, FUN_1004d3f0
 */
void __fastcall FUN_10036720(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2f0c) = 0;
  DAT_1018d184 = 0;
  FUN_10064790(DAT_100d5cb0);
  return;
}

/* 10036750  FUN_10036750  (113 bytes)
 * undefined FUN_10036750(void * param_1)
 * called by: FUN_1004d3f0
 */
void __fastcall FUN_10036750(void *param_1)

{
  if (*(int *)((int)param_1 + 4) != 8) {
    FUN_10036af0((int)param_1);
    switch(*(undefined4 *)((int)param_1 + 4)) {
    case 1:
      FUN_100377d0((int)param_1);
      return;
    case 2:
      FUN_10037960(param_1);
      return;
    case 3:
      FUN_10037ba0(param_1);
      return;
    case 4:
      FUN_10037fe0((int)param_1);
      return;
    case 5:
      FUN_100373c0((int)param_1);
      return;
    case 6:
      FUN_10037260(param_1,'\x01');
      return;
    case 7:
      FUN_10037260(param_1,'\0');
      return;
    default:
      FUN_10037540((int)param_1);
      return;
    }
  }
  FUN_100367e0((int)param_1);
  return;
}

/* 100367e0  FUN_100367e0  (272 bytes)
 * undefined FUN_100367e0(int param_1)
 * called by: FUN_10036750
 */
void __fastcall FUN_100367e0(int param_1)

{
  longlong lVar1;
  
  lVar1 = __ftol();
  *(int *)(param_1 + 0x2efc) = (int)lVar1;
  lVar1 = __ftol();
  *(int *)(param_1 + 0x2f00) = (int)lVar1;
  lVar1 = __ftol();
  *(int *)(param_1 + 0x2f04) = (int)lVar1;
  FUN_1004fed0(&DAT_1018a6b0,8,DAT_100d590c / 2,0x14,0x80);
  FUN_1004ff10(&DAT_1018a6b0,s__Chg_ChangeTeam_10094e40,0x2d,0xc3,0x2d,0x32);
  FUN_1004ff10(&DAT_1018a6b0,s_1__Chg_Join_Specialists_10094e28,*(int *)(param_1 + 0x2efc) / 2,
               *(int *)(param_1 + 0x2f00) / 2,*(int *)(param_1 + 0x2f04) / 2,0x32);
  FUN_1004ff10(&DAT_1018a6b0,s_2__Chg_Join_Mercenaries_10094e10,*(int *)(param_1 + 0x2efc) / 2,
               *(int *)(param_1 + 0x2f00) / 2,*(int *)(param_1 + 0x2f04) / 2,0x32);
  FUN_1004ff10(&DAT_1018a6b0,s_0__Chg_Cancel_10094e00,100,100,0xcd,0x32);
  return;
}

/* 100368f0  FUN_100368f0  (506 bytes)
 * undefined FUN_100368f0(char * param_1, uint param_2)
 * called by: FUN_10011a60, FUN_10036af0
 */
void __cdecl FUN_100368f0(char *param_1,uint param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  if (param_2 == 0) {
    *param_1 = '\0';
    return;
  }
  uVar3 = 0xffffffff;
  pcVar2 = &DAT_10094e88;
  do {
    pcVar6 = pcVar2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar6;
  } while (cVar1 != '\0');
  DAT_10108a44 = '\0';
  uVar3 = ~uVar3;
  pcVar2 = pcVar6 + -uVar3;
  pcVar6 = param_1;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar6 = pcVar6 + 1;
  }
  if ((param_2 & 1) != 0) {
    pcVar2 = FUN_100349a0(s__Buy_Sil_10094e7c);
    uVar3 = 0xffffffff;
    do {
      pcVar6 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar2 = param_1;
    do {
      pcVar7 = pcVar2;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar7;
    } while (cVar1 != '\0');
    pcVar2 = pcVar6 + -uVar3;
    pcVar6 = pcVar7 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar6 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar6 = pcVar6 + 1;
    }
    DAT_10108a44 = '\x01';
  }
  if ((param_2 & 2) != 0) {
    if (DAT_10108a44 != '\0') {
      uVar3 = 0xffffffff;
      pcVar2 = &DAT_10094e78;
      do {
        pcVar6 = pcVar2;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar6 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar6;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      iVar5 = -1;
      pcVar2 = param_1;
      do {
        pcVar7 = pcVar2;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar7 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar7;
      } while (cVar1 != '\0');
      pcVar2 = pcVar6 + -uVar3;
      pcVar6 = pcVar7 + -1;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar6 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar6 = pcVar6 + 1;
      }
    }
    pcVar2 = FUN_100349a0(s__Buy_Las_10094e6c);
    uVar3 = 0xffffffff;
    do {
      pcVar6 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar2 = param_1;
    do {
      pcVar7 = pcVar2;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar7;
    } while (cVar1 != '\0');
    pcVar2 = pcVar6 + -uVar3;
    pcVar6 = pcVar7 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar6 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar6 = pcVar6 + 1;
    }
    DAT_10108a44 = '\x01';
  }
  if ((param_2 & 4) != 0) {
    if (DAT_10108a44 != '\0') {
      uVar3 = 0xffffffff;
      pcVar2 = &DAT_10094e78;
      do {
        pcVar6 = pcVar2;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar6 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar6;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      iVar5 = -1;
      pcVar2 = param_1;
      do {
        pcVar7 = pcVar2;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar7 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar7;
      } while (cVar1 != '\0');
      pcVar2 = pcVar6 + -uVar3;
      pcVar6 = pcVar7 + -1;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar6 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar6 = pcVar6 + 1;
      }
    }
    pcVar2 = FUN_100349a0(s__Buy_Fla_10094e60);
    uVar3 = 0xffffffff;
    do {
      pcVar6 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar2 = param_1;
    do {
      pcVar7 = pcVar2;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar7;
    } while (cVar1 != '\0');
    pcVar2 = pcVar6 + -uVar3;
    pcVar6 = pcVar7 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar6 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar6 = pcVar6 + 1;
    }
    DAT_10108a44 = '\x01';
  }
  if ((param_2 & 8) != 0) {
    if (DAT_10108a44 != '\0') {
      uVar3 = 0xffffffff;
      pcVar2 = &DAT_10094e78;
      do {
        pcVar6 = pcVar2;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar6 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar6;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      iVar5 = -1;
      pcVar2 = param_1;
      do {
        pcVar7 = pcVar2;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar7 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar7;
      } while (cVar1 != '\0');
      pcVar2 = pcVar6 + -uVar3;
      pcVar6 = pcVar7 + -1;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar6 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar6 = pcVar6 + 1;
      }
    }
    pcVar2 = FUN_100349a0(s__Buy_Sco_10094e54);
    uVar3 = 0xffffffff;
    do {
      pcVar6 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar2 = param_1;
    do {
      pcVar7 = pcVar2;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar7;
    } while (cVar1 != '\0');
    pcVar2 = pcVar6 + -uVar3;
    pcVar6 = pcVar7 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar6 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  uVar3 = 0xffffffff;
  pcVar2 = &DAT_10094e50;
  do {
    pcVar6 = pcVar2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar5 = -1;
  do {
    pcVar2 = param_1;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar2 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar2;
  } while (cVar1 != '\0');
  pcVar6 = pcVar6 + -uVar3;
  pcVar2 = pcVar2 + -1;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar2 = pcVar2 + 1;
  }
  return;
}

/* 10036af0  FUN_10036af0  (1899 bytes)
 * undefined FUN_10036af0(int param_1)
 * called by: FUN_10036750
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10036af0(int param_1)

{
  char cVar1;
  byte_conflict *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  char *pcVar12;
  char *pcVar13;
  bool bVar14;
  longlong lVar15;
  byte_conflict bVar16;
  
  lVar15 = __ftol();
  *(int *)(param_1 + 0x2efc) = (int)lVar15;
  lVar15 = __ftol();
  *(int *)(param_1 + 0x2f00) = (int)lVar15;
  lVar15 = __ftol();
  *(int *)(param_1 + 0x2f04) = (int)lVar15;
  (*gEngfuncs.pfnFillRGBA)
            (8,8,0x280,0x13,*(int *)(param_1 + 0x2efc) / 2,*(int *)(param_1 + 0x2f00) / 2,
             (int)lVar15 / 2,0x32);
  cVar1 = FUN_100365d0();
  if (cVar1 == '\0') {
    pbVar2 = FUN_100349a0(s__Buy_Total_10094e9c);
    FUN_1006ac7a((undefined1 *)&DAT_101089f8,pbVar2);
  }
  else {
    FUN_10036640();
    pbVar2 = FUN_100349a0(s__Buy_Total_CashBased_10094ea8);
    FUN_1006ac7a((undefined1 *)&DAT_101089f8,pbVar2);
  }
  iVar3 = FUN_10036640();
  if (iVar3 == *(int *)(param_1 + 0x414) || iVar3 - *(int *)(param_1 + 0x414) < 0) {
    iVar3 = 0x2d;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x2f04) / 2;
  }
  iVar4 = FUN_10036640();
  if (iVar4 == *(int *)(param_1 + 0x414) || iVar4 - *(int *)(param_1 + 0x414) < 0) {
    iVar4 = 0x2d;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x2f00) / 2;
  }
  iVar5 = FUN_10036640();
  if (iVar5 == *(int *)(param_1 + 0x414) || iVar5 - *(int *)(param_1 + 0x414) < 0) {
    iVar5 = 0xc3;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x2efc) / 2;
  }
  FUN_10021ce0(8,8,DAT_100d5908,(char *)&DAT_101089f8,iVar5,iVar4,iVar3);
  FUN_10036660();
  pbVar2 = FUN_100349a0(s__Buy_FreeSlots_10094e8c);
  FUN_1006ac7a((undefined1 *)&DAT_101089f8,pbVar2);
  iVar3 = FUN_10036660();
  if (iVar3 == *(int *)(param_1 + 0x418) || iVar3 - *(int *)(param_1 + 0x418) < 0) {
    iVar3 = 0x2d;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x2f04) / 2;
  }
  iVar4 = FUN_10036660();
  if (iVar4 == *(int *)(param_1 + 0x418) || iVar4 - *(int *)(param_1 + 0x418) < 0) {
    iVar4 = 0x2d;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x2f00) / 2;
  }
  iVar5 = FUN_10036660();
  if (iVar5 == *(int *)(param_1 + 0x418) || iVar5 - *(int *)(param_1 + 0x418) < 0) {
    iVar5 = 0xc3;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x2efc) / 2;
  }
  FUN_10021ce0(0x108,8,DAT_100d5908,(char *)&DAT_101089f8,iVar5,iVar4,iVar3);
  DAT_10108b30 = 1;
  do {
    DAT_10108a40 = DAT_10108b30 * 0x80 + -0x78;
    DAT_10108b24 = 0x1c;
    _DAT_10108a1c = 0x80;
    DAT_10108a90 = 0x30;
    (*gEngfuncs.pfnFillRGBA)
              (DAT_10108a40,0x1c,0x80,0x14,*(int *)(param_1 + 0x2efc) / 2,
               *(int *)(param_1 + 0x2f00) / 2,*(int *)(param_1 + 0x2f04) / 2,0x32);
    FUN_1004c290(&DAT_100cf920,DAT_10108a40,DAT_10108b24,'\x02',DAT_10108b30,
                 *(int *)(param_1 + 0x2efc) / 2,*(int *)(param_1 + 0x2f00) / 2,
                 *(int *)(param_1 + 0x2f04) / 2);
    DAT_10108b24 = DAT_10108b24 + 0x14;
    DAT_10108abc = 0;
    do {
      uVar9 = *(uint *)(param_1 + 0x98 + DAT_10108abc * 0x38);
      if (uVar9 != 0) {
        if (*(char *)(param_1 + DAT_10108abc * 0x38 + 0x94) == '\0') {
          if (uVar9 == 0) goto LAB_1003722d;
          DAT_101089f0 = FUN_100071c0(uVar9);
          if (*(byte *)(DAT_101089f0 + 0x21) == DAT_10108b30) {
            uVar6 = FUN_100365e0(*(uint *)(param_1 + 0x98 + DAT_10108abc * 0x38),'\0');
            DAT_10108a18 = (char)uVar6 == '\0';
            if ((bool)DAT_10108a18) {
              iVar3 = *(int *)(param_1 + 0x2f04);
              iVar4 = *(int *)(param_1 + 0x2f00);
              iVar5 = *(int *)(param_1 + 0x2efc);
            }
            else {
              iVar3 = 0x2d;
              iVar5 = 0xc3;
              iVar4 = 0x2d;
            }
            (*gEngfuncs.pfnSPR_Set)
                      (*(HSPRITE *)
                        (&DAT_100d0ce4 + *(int *)(param_1 + 0x98 + DAT_10108abc * 0x38) * 4),iVar5,
                       iVar4,iVar3);
            (*gEngfuncs.pfnSPR_DrawAdditive)(0,DAT_10108a40,DAT_10108b24,(wrect_t *)0x0);
            iVar3 = *(int *)(param_1 + 200 + DAT_10108abc * 0x38);
            if (iVar3 == 0) {
              if (*(byte *)(DAT_101089f0 + 2) != 0) {
                uVar6 = *(undefined4 *)(param_1 + 0x2f04);
                uVar11 = *(undefined4 *)(param_1 + 0x2f00);
                uVar7 = *(undefined4 *)(param_1 + 0x2efc);
                iVar3 = *(int *)(param_1 + 0x14 + (uint)*(byte *)(DAT_101089f0 + 2) * 8);
                bVar16 = '\x05';
                goto LAB_10036ff5;
              }
            }
            else {
              uVar6 = *(undefined4 *)(param_1 + 0x2f04);
              uVar11 = *(undefined4 *)(param_1 + 0x2f00);
              uVar7 = *(undefined4 *)(param_1 + 0x2efc);
              bVar16 = '\x02';
LAB_10036ff5:
              FUN_1004c290(&DAT_100cf920,DAT_10108a40,DAT_10108b24 + 5,bVar16,iVar3,uVar7,uVar11,
                           uVar6);
            }
            uVar9 = *(uint *)(param_1 + 0x9c + DAT_10108abc * 0x38);
            if (uVar9 != 0) {
              FUN_100368f0((char *)&DAT_101089f8,uVar9);
              if ((char)DAT_101089f8 != '\0') {
                FUN_10021ce0(DAT_10108a40,DAT_10108b24 + 0x14,DAT_100d5908,(char *)&DAT_101089f8,
                             *(int *)(param_1 + 0x2efc) / 2,*(int *)(param_1 + 0x2f00) / 2,
                             *(int *)(param_1 + 0x2f04) / 2);
              }
            }
            DAT_10108b24 = DAT_10108b24 + DAT_10108a90;
          }
          if (*(char *)(param_1 + 0xc4 + DAT_10108abc * 0x38) != '\0') {
            puVar8 = FUN_100071c0(DAT_101089f0[0x32]);
            if (*(byte *)(puVar8 + 0x21) == DAT_10108b30) {
              uVar6 = FUN_100365e0(DAT_101089f0[0x32],'\0');
              DAT_10108a18 = (char)uVar6 == '\0';
              if ((bool)DAT_10108a18) {
                iVar3 = *(int *)(param_1 + 0x2f04);
                iVar4 = *(int *)(param_1 + 0x2f00);
                iVar5 = *(int *)(param_1 + 0x2efc);
              }
              else {
                iVar3 = 0x2d;
                iVar5 = 0xc3;
                iVar4 = 0x2d;
              }
              (*gEngfuncs.pfnSPR_Set)
                        (*(HSPRITE *)(&DAT_100d0ce4 + DAT_101089f0[0x32] * 4),iVar5,iVar4,iVar3);
              (*gEngfuncs.pfnSPR_DrawAdditive)(0,DAT_10108a40,DAT_10108b24,(wrect_t *)0x0);
              FUN_1004c290(&DAT_100cf920,DAT_10108a40,DAT_10108b24 + 5,'\x05',
                           *(int *)(param_1 + 0x14 + (uint)*(byte *)(DAT_101089f0 + 2) * 8),
                           *(undefined4 *)(param_1 + 0x2efc),*(undefined4 *)(param_1 + 0x2f00),
                           *(undefined4 *)(param_1 + 0x2f04));
              uVar9 = *(uint *)(param_1 + 0x9c + DAT_10108abc * 0x38);
              if (uVar9 != 0) {
                FUN_100368f0((char *)&DAT_101089f8,uVar9);
                if ((char)DAT_101089f8 != '\0') {
                  FUN_10021ce0(DAT_10108a40,DAT_10108b24 + 0x14,DAT_100d5908,(char *)&DAT_101089f8,
                               *(int *)(param_1 + 0x2efc) / 2,*(int *)(param_1 + 0x2f00) / 2,
                               *(int *)(param_1 + 0x2f04) / 2);
                }
              }
              DAT_10108b24 = DAT_10108b24 + DAT_10108a90;
            }
          }
        }
        else {
          if (DAT_10108b30 != 1) goto LAB_1003722d;
          uVar6 = FUN_100365e0(uVar9,'\x01');
          bVar14 = (char)uVar6 == '\0';
          uVar9 = *(uint *)(param_1 + 0x98 + DAT_10108abc * 0x38);
          DAT_10108a18 = bVar14;
          if ((uVar9 & 0x10) == 0) {
            if ((uVar9 & 0x20) != 0) {
              pcVar12 = s_Stealth_Shoes_1009295c;
              goto LAB_10036e56;
            }
          }
          else {
            pcVar12 = &DAT_1009296c;
LAB_10036e56:
            uVar9 = 0xffffffff;
            do {
              pcVar13 = pcVar12;
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              pcVar13 = pcVar12 + 1;
              cVar1 = *pcVar12;
              pcVar12 = pcVar13;
            } while (cVar1 != '\0');
            uVar9 = ~uVar9;
            pcVar12 = pcVar13 + -uVar9;
            pcVar13 = (char *)&DAT_101089f8;
            for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
              pcVar12 = pcVar12 + 4;
              pcVar13 = pcVar13 + 4;
            }
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar13 = *pcVar12;
              pcVar12 = pcVar12 + 1;
              pcVar13 = pcVar13 + 1;
            }
          }
          if (bVar14) {
            uVar6 = *(undefined4 *)(param_1 + 0x2f04);
            uVar11 = *(undefined4 *)(param_1 + 0x2f00);
            uVar7 = *(undefined4 *)(param_1 + 0x2efc);
          }
          else {
            uVar6 = 0x2d;
            uVar7 = 0xc3;
            uVar11 = 0x2d;
          }
          FUN_10021ce0(DAT_10108a40,DAT_10108b24 + 5,DAT_100d5908,(char *)&DAT_101089f8,uVar7,uVar11
                       ,uVar6);
          DAT_10108b24 = DAT_10108b24 + DAT_10108a90;
        }
      }
LAB_1003722d:
      DAT_10108abc = DAT_10108abc + 1;
    } while (DAT_10108abc < 0x10);
    DAT_10108b30 = DAT_10108b30 + 1;
    if (5 < (int)DAT_10108b30) {
      return;
    }
  } while( true );
}

/* 10037260  FUN_10037260  (352 bytes)
 * undefined FUN_10037260(char param_1)
 * called by: FUN_10036750
 */
void __thiscall FUN_10037260(void *this,char param_1)

{
  bool bVar1;
  char *pcVar2;
  byte_conflict *pbVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  lVar7 = __ftol();
  *(int *)((int)this + 0x2efc) = (int)lVar7;
  lVar7 = __ftol();
  *(int *)((int)this + 0x2f00) = (int)lVar7;
  lVar7 = __ftol();
  *(int *)((int)this + 0x2f04) = (int)lVar7;
  FUN_1004fed0(&DAT_1018a6b0,0x88,DAT_100d590c / 2,0x14,0x80);
  pcVar2 = s__Buy_SaveEquipment_10094f08;
  if (param_1 == '\0') {
    pcVar2 = s__Buy_LoadEquipment_10094ef4;
  }
  FUN_1004ff10(&DAT_1018a6b0,pcVar2,0x2d,0xc3,0x2d,0x32);
  piVar5 = (int *)((int)this + 0xc24);
  iVar6 = 1;
  do {
    if (*piVar5 < 1) {
      pcVar2 = s__Buy_SlotEmpty_10094ee4;
    }
    else {
      pcVar2 = s__Buy_SlotAvailable_10094ed0;
    }
    pbVar3 = FUN_100349a0(pcVar2);
    FUN_1006ac7a(&DAT_10108af8,pbVar3);
    iVar4 = FUN_10036640();
    if ((iVar4 < *piVar5) && (param_1 == '\0')) {
      iVar4 = 0x2d;
      iVar9 = 0x2d;
      iVar8 = 0xc3;
    }
    else {
      iVar4 = *(int *)((int)this + 0x2f04) / 2;
      iVar9 = *(int *)((int)this + 0x2f00) / 2;
      iVar8 = *(int *)((int)this + 0x2efc) / 2;
    }
    FUN_1004ff10(&DAT_1018a6b0,&DAT_10108af8,iVar8,iVar9,iVar4,0x32);
    piVar5 = piVar5 + 0x102;
    bVar1 = iVar6 < 9;
    iVar6 = iVar6 + 1;
  } while (bVar1);
  FUN_1004ff10(&DAT_1018a6b0,s_0__Buy_GoBack_10094ec0,100,100,0xcd,0x32);
  FUN_10037540((int)this);
  return;
}

/* 100373c0  FUN_100373c0  (374 bytes)
 * undefined FUN_100373c0(int param_1)
 * called by: FUN_10036750
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100373c0(int param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  longlong lVar11;
  
  lVar11 = __ftol();
  *(int *)(param_1 + 0x2efc) = (int)lVar11;
  lVar11 = __ftol();
  *(int *)(param_1 + 0x2f00) = (int)lVar11;
  lVar11 = __ftol();
  *(int *)(param_1 + 0x2f04) = (int)lVar11;
  FUN_1004fed0(&DAT_1018a6b0,0x88,DAT_100d590c / 2,0x14,0x80);
  puVar7 = (uint *)(param_1 + 0x98);
  iVar6 = 1;
  do {
    if (*puVar7 != 0) {
      if ((char)puVar7[-1] == '\0') {
        _DAT_10108af4 = FUN_100071c0(*puVar7);
        FUN_1006ac7a((undefined1 *)&DAT_10108a20,(byte_conflict *)s__i__s_10092974);
      }
      else {
        FUN_1006ac7a((undefined1 *)&DAT_10108a20,&DAT_10091200);
        if ((*puVar7 & 0x10) == 0) {
          if ((*puVar7 & 0x20) == 0) goto LAB_100374bc;
          pcVar8 = s_Stealth_Shoes_1009295c;
        }
        else {
          pcVar8 = &DAT_1009296c;
        }
        uVar3 = 0xffffffff;
        do {
          pcVar10 = pcVar8;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar10 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar10;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        iVar4 = -1;
        pcVar8 = (char *)&DAT_10108a20;
        do {
          pcVar9 = pcVar8;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar9 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar9;
        } while (cVar1 != '\0');
        pcVar8 = pcVar10 + -uVar3;
        pcVar10 = pcVar9 + -1;
        for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar10 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar10 = pcVar10 + 1;
        }
      }
LAB_100374bc:
      FUN_1004ff10(&DAT_1018a6b0,(char *)&DAT_10108a20,*(int *)(param_1 + 0x2efc) / 2,
                   *(int *)(param_1 + 0x2f00) / 2,*(int *)(param_1 + 0x2f04) / 2,0x32);
    }
    puVar7 = puVar7 + 0xe;
    bVar2 = 0xf < iVar6;
    iVar6 = iVar6 + 1;
    if (bVar2) {
      FUN_1004ff10(&DAT_1018a6b0,s_0__Buy_GoBack_10094ec0,100,100,0xcd,0x32);
      FUN_10037540(param_1);
      return;
    }
  } while( true );
}

/* 10037540  FUN_10037540  (644 bytes)
 * undefined FUN_10037540(int param_1)
 * called by: FUN_10036750, FUN_10037260, FUN_100373c0, FUN_100377d0
 */
void __fastcall FUN_10037540(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar4 = __ftol();
  *(int *)(param_1 + 0x2efc) = (int)lVar4;
  lVar4 = __ftol();
  *(int *)(param_1 + 0x2f00) = (int)lVar4;
  lVar4 = __ftol();
  *(int *)(param_1 + 0x2f04) = (int)lVar4;
  if (*(int *)(param_1 + 4) == 0) {
    DAT_10108b18 = 0x3f800000;
  }
  else {
    DAT_10108b18 = 0x3f000000;
  }
  FUN_1004fed0(&DAT_1018a6b0,8,DAT_100d590c / 2,0x14,0x80);
  if (*(int *)(param_1 + 0x414) < 1) {
    FUN_1004ff10(&DAT_1018a6b0,s_1__Buy_EmptyConfig_10094fc4,0xc3,0x2d,0x2d,0x32);
  }
  else {
    pcVar3 = s_1__Buy_UseLastConfig_10094fac;
    if (*(char *)(param_1 + 0x2f08) != '\0') {
      pcVar3 = s_1__Buy_UseNewConfig_10094f98;
    }
    iVar6 = 0x32;
    uVar5 = 0x2d;
    iVar1 = FUN_10036640();
    iVar2 = ((iVar1 - *(int *)(param_1 + 0x414) < 0) - 1 & 0x96) + 0x2d;
    iVar1 = FUN_10036640();
    FUN_1004ff10(&DAT_1018a6b0,pcVar3,
                 ((iVar1 - *(int *)(param_1 + 0x414) < 0) - 1 & 0xffffff6a) + 0xc3,iVar2,uVar5,iVar6
                );
  }
  FUN_1004ff10(&DAT_1018a6b0,s_2__Buy_Buy_10094f8c,*(int *)(param_1 + 0x2efc) / 2,
               *(int *)(param_1 + 0x2f00) / 2,*(int *)(param_1 + 0x2f04) / 2,0x32);
  FUN_1004ff10(&DAT_1018a6b0,s_3__Buy_RemoveItem_10094f78,*(int *)(param_1 + 0x2efc) / 2,
               *(int *)(param_1 + 0x2f00) / 2,*(int *)(param_1 + 0x2f04) / 2,0x32);
  FUN_1004ff10(&DAT_1018a6b0,s_4__Buy_ResetConfig_10094f64,*(int *)(param_1 + 0x2efc) / 2,
               *(int *)(param_1 + 0x2f00) / 2,*(int *)(param_1 + 0x2f04) / 2,0x32);
  FUN_1004ff10(&DAT_1018a6b0,s_5__Buy_SaveConfig_10094f50,*(int *)(param_1 + 0x2efc) / 2,
               *(int *)(param_1 + 0x2f00) / 2,*(int *)(param_1 + 0x2f04) / 2,0x32);
  FUN_1004ff10(&DAT_1018a6b0,s_6__Buy_LoadConfig_10094f3c,*(int *)(param_1 + 0x2efc) / 2,
               *(int *)(param_1 + 0x2f00) / 2,*(int *)(param_1 + 0x2f04) / 2,0x32);
  FUN_1004ff10(&DAT_1018a6b0,s_7__Buy_Random_10094f2c,0x2d,0xc3,0x2d,0x32);
  if (*(int *)(param_1 + 4) == 0) {
    FUN_1004ff10(&DAT_1018a6b0,s_0__Buy_Cancel_10094f1c,100,100,0xcd,0x32);
  }
  return;
}

/* 100377d0  FUN_100377d0  (389 bytes)
 * undefined FUN_100377d0(int param_1)
 * called by: FUN_10036750, FUN_10037960, FUN_10037fe0
 */
void __fastcall FUN_100377d0(int param_1)

{
  longlong lVar1;
  
  lVar1 = __ftol();
  *(int *)(param_1 + 0x2efc) = (int)lVar1;
  lVar1 = __ftol();
  *(int *)(param_1 + 0x2f00) = (int)lVar1;
  lVar1 = __ftol();
  *(int *)(param_1 + 0x2f04) = (int)lVar1;
  if (*(int *)(param_1 + 4) == 1) {
    DAT_10108a94 = 0x3f800000;
  }
  else {
    DAT_10108a94 = 0x3f000000;
  }
  FUN_1004fed0(&DAT_1018a6b0,0x88,DAT_100d590c / 2,0x14,0x80);
  DAT_101089c8 = 0;
  do {
    if (*(int *)(param_1 + 0x2d6c + DAT_101089c8 * 4) == -1) break;
    FUN_1006ac7a(&DAT_10108a48,(byte_conflict *)s__c__s_10094ff0);
    FUN_1004ff10(&DAT_1018a6b0,&DAT_10108a48,*(int *)(param_1 + 0x2efc) / 2,
                 *(int *)(param_1 + 0x2f00) / 2,*(int *)(param_1 + 0x2f04) / 2,0x32);
    DAT_101089c8 = DAT_101089c8 + 1;
  } while (DAT_101089c8 < 5);
  FUN_1004ff10(&DAT_1018a6b0,s_6__Buy_PlayerAccessory_10094fd8,*(int *)(param_1 + 0x2efc) / 2,
               *(int *)(param_1 + 0x2f00) / 2,*(int *)(param_1 + 0x2f04) / 2,0x32);
  if (*(int *)(param_1 + 4) == 1) {
    FUN_1004ff10(&DAT_1018a6b0,s_0__Buy_GoBack_10094ec0,100,100,0xcd,0x32);
  }
  FUN_10037540(param_1);
  return;
}

/* 10037960  FUN_10037960  (575 bytes)
 * undefined FUN_10037960(void * param_1)
 * called by: FUN_10036750, FUN_10037ba0
 */
void __fastcall FUN_10037960(void *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  lVar8 = __ftol();
  *(int *)((int)param_1 + 0x2efc) = (int)lVar8;
  lVar8 = __ftol();
  *(int *)((int)param_1 + 0x2f00) = (int)lVar8;
  lVar8 = __ftol();
  *(int *)((int)param_1 + 0x2f04) = (int)lVar8;
  FUN_1004fed0(&DAT_1018a6b0,0x108,DAT_100d590c / 2,0x14,0x80);
  DAT_10108ae4 = 0;
  do {
    uVar2 = *(uint *)((int)param_1 + (DAT_10108ae4 * 5 + *(int *)((int)param_1 + 8)) * 4 + 0x2d6c);
    if ((uVar2 != 0xffffffff) && (uVar3 = FUN_100365e0(uVar2,'\0'), (char)uVar3 == '\0')) {
      DAT_101089f4 = *(int *)((int)param_1 +
                             (DAT_10108ae4 * 5 + *(int *)((int)param_1 + 8)) * 4 + 0x2d6c) ==
                     *(int *)((int)param_1 + 0x10);
      puVar4 = FUN_100071c0(*(int *)((int)param_1 +
                                    (DAT_10108ae4 * 5 + *(int *)((int)param_1 + 8)) * 4 + 0x2d6c));
      iVar7 = puVar4[0x36];
      iVar6 = *(int *)((int)param_1 + 0x414);
      iVar5 = FUN_10036640();
      DAT_10108b28 = iVar7 + iVar6 <= iVar5;
      if ((bool)DAT_10108b28) {
        puVar4 = FUN_100071c0(*(int *)((int)param_1 +
                                      (DAT_10108ae4 * 5 + *(int *)((int)param_1 + 8)) * 4 + 0x2d6c))
        ;
        iVar7 = *(int *)((int)param_1 + 0x418);
        bVar1 = *(byte *)(puVar4 + 0x34);
        iVar6 = FUN_10036660();
        DAT_10108b28 = '\x01';
        if (iVar6 < (int)((uint)bVar1 + iVar7)) goto LAB_10037a8e;
      }
      else {
LAB_10037a8e:
        DAT_10108b28 = '\0';
      }
      FUN_100071c0(*(int *)((int)param_1 +
                           (DAT_10108ae4 * 5 + *(int *)((int)param_1 + 8)) * 4 + 0x2d6c));
      FUN_1006ac7a(&DAT_10108ac0,(byte_conflict *)s__c__s_10094ff0);
      if (DAT_10108b28 == '\0') {
        iVar5 = 0x2d;
        iVar7 = 0xc3;
        iVar6 = 0x2d;
      }
      else {
        iVar5 = *(int *)((int)param_1 + 0x2f04) / 2;
        iVar6 = *(int *)((int)param_1 + 0x2f00) / 2;
        iVar7 = *(int *)((int)param_1 + 0x2efc) / 2;
      }
      FUN_1004ff10(&DAT_1018a6b0,&DAT_10108ac0,iVar7,iVar6,iVar5,0x32);
      if (DAT_101089f4 != '\0') {
        FUN_10038180(param_1,*(int *)((int)param_1 + 0x10));
      }
    }
    DAT_10108ae4 = DAT_10108ae4 + 1;
    if (0xb < DAT_10108ae4) {
      if (*(int *)((int)param_1 + 4) == 2) {
        FUN_1004ff10(&DAT_1018a6b0,s_0__Buy_GoBack_10094ec0,100,100,0xcd,0x32);
      }
      FUN_100377d0((int)param_1);
      return;
    }
  } while( true );
}

/* 10037ba0  FUN_10037ba0  (1064 bytes)
 * undefined FUN_10037ba0(void * param_1)
 * called by: FUN_10036750
 */
void __fastcall FUN_10037ba0(void *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  char *pcVar8;
  
  lVar7 = __ftol();
  *(int *)((int)param_1 + 0x2efc) = (int)lVar7;
  lVar7 = __ftol();
  *(int *)((int)param_1 + 0x2f00) = (int)lVar7;
  lVar7 = __ftol();
  *(int *)((int)param_1 + 0x2f04) = (int)lVar7;
  DAT_101089ec = FUN_10012ad0(*(uint *)((int)param_1 + 0x10),
                              (byte_conflict)*(undefined4 *)((int)param_1 + 0xc),0,'\0');
  iVar3 = FUN_10036640();
  DAT_10108ae0 = DAT_101089ec + *(int *)((int)param_1 + 0x414) <= iVar3;
  if ((bool)DAT_10108ae0) {
    puVar4 = FUN_100071c0(*(int *)((int)param_1 + 0x10));
    iVar3 = *(int *)((int)param_1 + 0x418);
    bVar1 = *(byte *)(puVar4 + 0x34);
    iVar5 = FUN_10036660();
    DAT_10108ae0 = '\x01';
    if (iVar5 < (int)((uint)bVar1 + iVar3)) goto LAB_10037c4b;
  }
  else {
LAB_10037c4b:
    DAT_10108ae0 = '\0';
  }
  FUN_1004fed0(&DAT_1018a6b0,0x188,DAT_100d590c / 2,0x14,0x80);
  FUN_1004ff10(&DAT_1018a6b0,s_1__Buy_Buy_10095074,
               (-(uint)(DAT_10108ae0 != '\0') & 0xffffff6a) + 0xc3,
               (-(uint)(DAT_10108ae0 != '\0') & 0x96) + 0x2d,0x2d,0x32);
  DAT_10108b1c = 0;
  do {
    bVar2 = FUN_10038d70(param_1,1 << ((byte)DAT_10108b1c & 0x1f));
    if (bVar2) {
      DAT_10108a68 = DAT_101089ec;
      switch(DAT_10108b1c) {
      case 0:
        FUN_1006ac7a(&DAT_10108a98,(byte_conflict *)s__i__HUD_Silencer__i_1009505c);
        DAT_10108a68 = DAT_10108a68 + 900;
        break;
      case 1:
        FUN_1006ac7a(&DAT_10108a98,(byte_conflict *)s__i__HUD_Lasersight__i_10095044);
        DAT_10108a68 = DAT_10108a68 + 800;
        break;
      case 2:
        FUN_1006ac7a(&DAT_10108a98,(byte_conflict *)s__i__HUD_Flashlight__i_1009502c);
        DAT_10108a68 = DAT_10108a68 + 500;
        break;
      case 3:
        FUN_1006ac7a(&DAT_10108a98,(byte_conflict *)s__i__HUD_Scope__i_10095018);
        DAT_10108a68 = DAT_10108a68 + 0x708;
      }
      iVar3 = FUN_10036640();
      DAT_10108ae0 = DAT_10108a68 + *(int *)((int)param_1 + 0x414) <= iVar3;
      if ((bool)DAT_10108ae0) {
        iVar5 = *(int *)((int)param_1 + 0x2f04) / 2;
        iVar3 = *(int *)((int)param_1 + 0x2f00) / 2;
        iVar6 = *(int *)((int)param_1 + 0x2efc) / 2;
      }
      else {
        iVar5 = 0x2d;
        iVar3 = 0x2d;
        iVar6 = 0xc3;
      }
      FUN_1004ff10(&DAT_1018a6b0,&DAT_10108a98,iVar6,iVar3,iVar5,0x32);
    }
    DAT_10108b1c = DAT_10108b1c + 1;
  } while (DAT_10108b1c < 4);
  puVar4 = FUN_100071c0(*(int *)((int)param_1 + 0x10));
  if (puVar4[0x32] == -1) {
    puVar4 = FUN_100071c0(*(int *)((int)param_1 + 0x10));
    if (*(char *)(puVar4 + 0x37) == '\0') goto LAB_10037f98;
    DAT_101089ec = FUN_10012ad0(*(uint *)((int)param_1 + 0x10),'\0',1,'\0');
    iVar3 = FUN_10036640();
    DAT_10108ae0 = DAT_101089ec + *(int *)((int)param_1 + 0x414) <= iVar3;
    if ((bool)DAT_10108ae0) {
      puVar4 = FUN_100071c0(*(int *)((int)param_1 + 0x10));
      bVar1 = *(byte *)(puVar4 + 0x34);
      puVar4 = FUN_100071c0(*(int *)((int)param_1 + 0x10));
      iVar3 = puVar4[9];
      iVar5 = *(int *)((int)param_1 + 0x418);
      iVar6 = FUN_10036660();
      if (iVar6 < (int)((uint)bVar1 * iVar3 + iVar5)) goto LAB_10037f5d;
      DAT_10108ae0 = '\x01';
    }
    else {
LAB_10037f5d:
      DAT_10108ae0 = '\0';
    }
    pcVar8 = s_6__Buy_FullLoad_10094ff8;
  }
  else {
    DAT_101089ec = FUN_10012ad0(*(uint *)((int)param_1 + 0x10),
                                (byte_conflict)*(undefined4 *)((int)param_1 + 0xc),1,'\0');
    iVar3 = FUN_10036640();
    DAT_10108ae0 = DAT_101089ec + *(int *)((int)param_1 + 0x414) <= iVar3;
    if ((bool)DAT_10108ae0) {
      puVar4 = FUN_100071c0(*(int *)((int)param_1 + 0x10));
      iVar3 = *(int *)((int)param_1 + 0x418);
      bVar1 = *(byte *)(puVar4 + 0x34);
      iVar5 = FUN_10036660();
      if (iVar5 < (int)(iVar3 + (uint)bVar1 * 2)) goto LAB_10037e9a;
      DAT_10108ae0 = '\x01';
    }
    else {
LAB_10037e9a:
      DAT_10108ae0 = '\0';
    }
    pcVar8 = s_6__Buy_Akimbo_10095008;
  }
  FUN_1004ff10(&DAT_1018a6b0,pcVar8,(-(uint)(DAT_10108ae0 != '\0') & 0xffffff6a) + 0xc3,
               (-(uint)(DAT_10108ae0 != '\0') & 0x96) + 0x2d,0x2d,0x32);
LAB_10037f98:
  if (*(int *)((int)param_1 + 4) == 3) {
    FUN_1004ff10(&DAT_1018a6b0,s_0__Buy_GoBack_10094ec0,100,100,0xcd,0x32);
  }
  FUN_10037960(param_1);
  return;
}

/* 10037fe0  FUN_10037fe0  (409 bytes)
 * undefined FUN_10037fe0(int param_1)
 * called by: FUN_10036750
 */
void __fastcall FUN_10037fe0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  lVar6 = __ftol();
  *(int *)(param_1 + 0x2efc) = (int)lVar6;
  lVar6 = __ftol();
  *(int *)(param_1 + 0x2f00) = (int)lVar6;
  lVar6 = __ftol();
  *(int *)(param_1 + 0x2f04) = (int)lVar6;
  DAT_10108ab8 = 0;
  FUN_1004fed0(&DAT_1018a6b0,0x108,DAT_100d590c / 2,0x14,0x80);
  DAT_10108aec = 0;
  do {
    iVar4 = 0;
    uVar1 = 0;
    if (DAT_10108aec == 0) {
      FUN_1006ac7a(&DAT_101089cc,(byte_conflict *)s__i_Kevlar__i_10095080);
      DAT_10108ab8 = 0x76c;
      uVar1 = 0x10;
      iVar4 = 10;
    }
    else if (DAT_10108aec == 1) {
      FUN_1006ac7a(&DAT_101089cc,(byte_conflict *)s__i_Stealth_Shoes__i_10095090);
      DAT_10108ab8 = 700;
      uVar1 = 0x20;
    }
    uVar2 = FUN_100365e0(uVar1,'\x01');
    if ((char)uVar2 == '\0') {
      iVar3 = FUN_10036640();
      if (iVar3 < *(int *)(param_1 + 0x414) + DAT_10108ab8) {
LAB_100380ee:
        iVar5 = 0x2d;
        iVar4 = 0xc3;
        iVar3 = 0x2d;
      }
      else {
        iVar3 = FUN_10036660();
        if (iVar3 < *(int *)(param_1 + 0x418) + iVar4) goto LAB_100380ee;
        iVar5 = *(int *)(param_1 + 0x2f04) / 2;
        iVar3 = *(int *)(param_1 + 0x2f00) / 2;
        iVar4 = *(int *)(param_1 + 0x2efc) / 2;
      }
      FUN_1004ff10(&DAT_1018a6b0,&DAT_101089cc,iVar4,iVar3,iVar5,0x32);
    }
    DAT_10108aec = DAT_10108aec + 1;
    if (1 < DAT_10108aec) {
      FUN_1004ff10(&DAT_1018a6b0,s_0__Buy_GoBack_10094ec0,100,100,0xcd,0x32);
      FUN_100377d0(param_1);
      return;
    }
  } while( true );
}

/* 10038180  FUN_10038180  (480 bytes)
 * undefined FUN_10038180(int param_1)
 * called by: FUN_10037960
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10038180(void *this,int param_1)

{
  byte_conflict *pbVar1;
  longlong lVar2;
  
  lVar2 = __ftol();
  *(int *)((int)this + 0x2efc) = (int)lVar2;
  lVar2 = __ftol();
  *(int *)((int)this + 0x2f00) = (int)lVar2;
  lVar2 = __ftol();
  *(int *)((int)this + 0x2f04) = (int)lVar2;
  DAT_10108af0 = 0x100;
  DAT_10108b2c = DAT_100d590c / 2 + -0x30;
  _DAT_10108a8c = 0x30;
  DAT_10108b34 = 0x108;
  (*gEngfuncs.pfnFillRGBA)
            (0x108,DAT_10108b2c,0xff,0x2f,*(int *)((int)this + 0x2efc),*(int *)((int)this + 0x2f00),
             *(int *)((int)this + 0x2f04),0x19);
  (*gEngfuncs.pfnSPR_Set)
            (*(HSPRITE *)(&DAT_100d0ce4 + param_1 * 4),*(int *)((int)this + 0x2efc),
             *(int *)((int)this + 0x2f00),*(int *)((int)this + 0x2f04));
  (*gEngfuncs.pfnSPR_DrawAdditive)(0,DAT_10108b34,DAT_10108b2c,(wrect_t *)0x0);
  FUN_100071c0(param_1);
  pbVar1 = FUN_100349a0(s__Buy_Credits_100950b4);
  FUN_1006ac7a(&DAT_10108a6c,pbVar1);
  FUN_10021ce0(DAT_10108af0 / 2 + DAT_10108b34,DAT_10108b2c,DAT_100d5908,&DAT_10108a6c,
               *(int *)((int)this + 0x2efc) / 2,*(int *)((int)this + 0x2f00) / 2,
               *(int *)((int)this + 0x2f04) / 2);
  FUN_100071c0(param_1);
  pbVar1 = FUN_100349a0(s__Buy_Slots_100950a8);
  FUN_1006ac7a(&DAT_10108a6c,pbVar1);
  FUN_10021ce0(DAT_10108af0 / 2 + DAT_10108b34,DAT_10108b2c + 0x14,DAT_100d5908,&DAT_10108a6c,
               *(int *)((int)this + 0x2efc) / 2,*(int *)((int)this + 0x2f00) / 2,
               *(int *)((int)this + 0x2f04) / 2);
  return;
}

/* 10038360  FUN_10038360  (171 bytes)
 * undefined FUN_10038360(uint param_1)
 * called by: IN_MouseEvent
 */
void __thiscall FUN_10038360(void *this,uint param_1)

{
  uint uVar1;
  undefined4 extraout_EDX;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  uVar1 = *(uint *)((int)this + 0x2f18);
  *(uint *)((int)this + 0x2f18) = param_1;
  uVar1 = param_1 ^ uVar1;
  *(uint *)((int)this + 0x2f1c) = uVar1 & param_1;
  uVar1 = ~param_1 & uVar1;
  *(uint *)((int)this + 0x2f20) = uVar1;
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 2) != 0) {
      FUN_10038840(this,param_1,*(undefined4 *)((int)this + 4),10);
    }
    return;
  }
  (*gEngfuncs.GetMousePosition)(&local_c,(int *)&param_1);
  FUN_10038410(this,local_c,param_1,&iStack_8,&iStack_4);
  if (iStack_8 == -1) {
    FUN_10038840(this,extraout_EDX,*(undefined4 *)((int)this + 4),1);
    return;
  }
  FUN_10038840(this,iStack_4,iStack_8,iStack_4);
  return;
}

/* 10038410  FUN_10038410  (1007 bytes)
 * undefined FUN_10038410(int param_1, int param_2, int * param_3, int * param_4)
 * called by: FUN_10038360
 */
void __thiscall FUN_10038410(void *this,int param_1,int param_2,int *param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if ((param_1 < 8) || (param_2 < DAT_100d590c / 2)) {
LAB_100387ee:
    *param_3 = -1;
    return;
  }
  iVar10 = (param_2 - DAT_100d590c / 2) / 0x14;
  iVar2 = (int)(param_1 + -8 + (param_1 + -8 >> 0x1f & 0x7fU)) >> 7;
  if (iVar2 != 0) {
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        iVar2 = *(int *)((int)this + 4);
        if ((iVar2 == 2) || (iVar2 == 3)) {
          iVar8 = 0;
          iVar2 = 0;
          param_1 = 0;
          while (uVar5 = *(uint *)((int)this + (*(int *)((int)this + 8) + iVar8) * 4 + 0x2d6c),
                uVar5 != 0xffffffff) {
            uVar3 = FUN_100365e0(uVar5,'\0');
            if ((char)uVar3 == '\0') {
              if (iVar10 == iVar2 - param_1) {
                *param_3 = 2;
                iVar10 = param_1 + 1 + iVar10;
                *param_4 = iVar10;
                if (iVar10 < 10) {
                  return;
                }
                *param_4 = iVar10 + 1;
                return;
              }
            }
            else {
              param_1 = param_1 + 1;
            }
            iVar8 = iVar8 + 5;
            iVar2 = iVar2 + 1;
            if (0x3b < iVar8) {
              return;
            }
          }
          if (iVar10 == iVar2 - param_1) {
            *param_3 = 2;
            *param_4 = 10;
            return;
          }
        }
        else {
          if (iVar2 != 4) goto LAB_100387dd;
          if (iVar10 < 3) {
            uVar5 = 0;
            if (iVar10 == 0) {
              uVar5 = 0x10;
            }
            else if (iVar10 == 1) {
              uVar5 = 0x20;
            }
            uVar3 = FUN_100365e0(uVar5,'\x01');
            if ((char)uVar3 != '\0') {
              iVar10 = iVar10 + 1;
            }
            *param_3 = 4;
            iVar2 = 10;
            if (iVar10 != 2) {
              iVar2 = iVar10 + 1;
            }
            *param_4 = iVar2;
            return;
          }
        }
      }
      else {
        if (iVar2 != 3) {
LAB_100387dd:
          *param_3 = -1;
          return;
        }
        if (*(int *)((int)this + 4) == 3) {
          if (iVar10 == 0) {
            *param_3 = 3;
            *param_4 = 1;
            return;
          }
          iVar8 = 0;
          iVar2 = 0;
          do {
            iVar9 = iVar2;
            bVar1 = FUN_10038d70(this,1 << ((byte)iVar9 & 0x1f));
            if (bVar1) {
              if (iVar10 == (iVar9 - iVar8) + 1) {
                *param_3 = 3;
                *param_4 = iVar8 + 1 + iVar10;
                return;
              }
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar2 = iVar9 + 1;
          } while (iVar2 < 4);
          puVar4 = FUN_100071c0(*(int *)((int)this + 0x10));
          if (puVar4[0x32] == -1) {
            puVar4 = FUN_100071c0(*(int *)((int)this + 0x10));
            if ((*(char *)(puVar4 + 0x37) != '\0') &&
               (iVar6 = iVar2 - iVar8, iVar2 = iVar9 + 2, iVar10 == iVar6 + 1)) {
              *param_3 = 3;
              *param_4 = 6;
              return;
            }
          }
          else {
            iVar6 = iVar2 - iVar8;
            iVar2 = iVar9 + 2;
            if (iVar10 == iVar6 + 1) {
              *param_3 = 3;
              *param_4 = 6;
              return;
            }
          }
          if (iVar10 == (iVar2 - iVar8) + 1) {
            *param_3 = 3;
            *param_4 = 10;
            return;
          }
        }
      }
LAB_100386ca:
      *param_3 = -1;
      return;
    }
    iVar2 = *(int *)((int)this + 4);
    if ((((iVar2 != 1) && (iVar2 != 2)) && (iVar2 != 3)) && (iVar2 != 4)) {
      if (iVar2 != 5) {
        if ((iVar2 != 6) && (iVar2 != 7)) {
          *param_3 = -1;
          return;
        }
        if (iVar10 < 0xb) {
          *param_3 = iVar2;
          *param_4 = iVar10;
          return;
        }
        goto LAB_100387dd;
      }
      iVar2 = 0;
      piVar7 = (int *)((int)this + 0x98);
      while (*piVar7 != 0) {
        if (iVar10 == iVar2) {
          *param_3 = 5;
          *param_4 = iVar10 + 1;
          return;
        }
        iVar2 = iVar2 + 1;
        piVar7 = piVar7 + 0xe;
        if (0xf < iVar2) {
          return;
        }
      }
      if (iVar10 == iVar2) {
        *param_3 = 5;
        *param_4 = 10;
        return;
      }
      goto LAB_100387ee;
    }
    if (6 < iVar10) goto LAB_100386ca;
    *param_3 = 1;
    if (*(int *)((int)this + 4) == 1) {
      iVar2 = 10;
      if (iVar10 == 6) goto LAB_100385a5;
    }
    else if (iVar10 == 6) {
      *param_3 = -1;
      return;
    }
    iVar2 = iVar10 + 1;
LAB_100385a5:
    *param_4 = iVar2;
    return;
  }
  if (7 < iVar10) goto LAB_100386ca;
  *param_3 = 0;
  if (*(int *)((int)this + 4) == 0) {
    iVar2 = 10;
    if (iVar10 == 7) goto LAB_10038495;
  }
  else if (iVar10 == 7) {
    *param_3 = -1;
    return;
  }
  iVar2 = iVar10 + 1;
LAB_10038495:
  *param_4 = iVar2;
  return;
}

/* 10038800  FUN_10038800  (60 bytes)
 * undefined FUN_10038800(void * param_1)
 * called by: FUN_10038840, FUN_100398e0
 */
void __fastcall FUN_10038800(void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)((int)param_1 + 0x14);
  for (iVar1 = 0x102; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)((int)param_1 + 0x2f08) = 1;
  if (*(float *)(DAT_100df42c + 0xc) != 0.0) {
    FUN_10038f60(param_1,0x10,0,0,'\x01');
  }
  return;
}

/* 10038840  FUN_10038840  (1279 bytes)
 * undefined FUN_10038840(undefined1 * param_1, undefined4 param_2, undefined4 param_3, uint param_4)
 * called by: FUN_10038360, FUN_1004f220
 */
void __fastcall FUN_10038840(undefined1 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  byte_conflict *pbVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  char local_40 [64];
  
  if ((int)param_4 < 1) {
    return;
  }
  if (0xb < (int)param_4) {
    return;
  }
  switch(param_3) {
  case 0:
    if (param_4 == 1) {
      uVar4 = FUN_10039400((int)param_1);
      if ((char)uVar4 != '\0') {
        FUN_10036720(param_1);
        return;
      }
    }
    else {
      if (param_4 == 2) {
        *(undefined4 *)(param_1 + 4) = 1;
        return;
      }
      if (param_4 == 3) {
        *(undefined4 *)(param_1 + 4) = 5;
        return;
      }
      if (param_4 == 4) {
        FUN_10038800(param_1);
        FUN_1004b520(&DAT_100d43cc,s__Buy_ConfigReset_10095108,0,0,0,0x14,0);
        *(undefined4 *)(param_1 + 0x2f0c) = 0;
        return;
      }
      if (param_4 == 5) {
        *(undefined4 *)(param_1 + 4) = 6;
        return;
      }
      if (param_4 == 6) {
        *(undefined4 *)(param_1 + 4) = 7;
        return;
      }
      if (param_4 == 7) {
        FUN_100398e0(param_1,0.0);
        return;
      }
      if (param_4 == 10) {
        FUN_10036720(param_1);
        return;
      }
    }
    break;
  case 1:
    if (param_4 == 6) {
      *(undefined4 *)(param_1 + 4) = 4;
      return;
    }
    if ((int)param_4 < 6) {
      if (*(int *)(param_1 + param_4 * 4 + 0x2d68) != -1) {
        *(undefined4 *)(param_1 + 4) = 2;
        *(uint *)(param_1 + 8) = param_4 - 1;
        return;
      }
    }
    else if (param_4 == 10) goto LAB_10038b80;
    break;
  case 2:
    if (param_4 != 10) {
      iVar5 = param_4 - 1;
      if (0xb < iVar5) {
        return;
      }
      iVar3 = iVar5;
      if (9 < (int)param_4) {
        iVar3 = param_4 - 2;
      }
      if (*(int *)(param_1 + (*(int *)(param_1 + 8) + iVar3 * 5) * 4 + 0x2d6c) == -1) {
        return;
      }
      iVar3 = iVar5;
      if (9 < (int)param_4) {
        iVar3 = param_4 - 2;
      }
      uVar4 = FUN_100365e0(*(uint *)(param_1 + (*(int *)(param_1 + 8) + iVar3 * 5) * 4 + 0x2d6c),
                           '\0');
      if ((char)uVar4 != '\0') {
        return;
      }
      *(undefined4 *)(param_1 + 4) = 3;
      if (9 < (int)param_4) {
        iVar5 = param_4 - 2;
      }
      *(undefined4 *)(param_1 + 0x10) =
           *(undefined4 *)(param_1 + (iVar5 * 5 + *(int *)(param_1 + 8)) * 4 + 0x2d6c);
      return;
    }
    goto LAB_10038cd2;
  case 3:
    if ((param_4 != 1) && (param_4 != 6)) {
      if ((1 < (int)param_4) && ((int)param_4 < 6)) {
        uVar10 = 1 << ((char)param_4 - 2U & 0x1f);
        bVar1 = FUN_10038d70(param_1,uVar10);
        if (!bVar1) {
          return;
        }
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | uVar10;
        return;
      }
      if (param_4 != 10) {
        return;
      }
      *(undefined4 *)(param_1 + 4) = 2;
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xc) = 0;
      return;
    }
    uVar10 = *(uint *)(param_1 + 0xc);
    uVar9 = *(uint *)(param_1 + 0x10);
    cVar12 = '\0';
    uVar11 = CONCAT31((int3)((uint)param_2 >> 8),param_4 == 6);
    goto LAB_10038ccb;
  case 4:
    if (2 < (int)param_4) {
      if (param_4 != 10) {
        return;
      }
      goto LAB_10038cd2;
    }
    if (param_4 == 1) {
      param_4 = 0x10;
    }
    else if (param_4 == 2) {
      param_4 = 0x20;
    }
    uVar4 = FUN_100365e0(param_4,'\x01');
    if ((char)uVar4 != '\0') {
      return;
    }
    cVar12 = '\x01';
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = param_4;
LAB_10038ccb:
    FUN_10038f60(param_1,uVar9,uVar10,uVar11,cVar12);
LAB_10038cd2:
    *(undefined4 *)(param_1 + 4) = 1;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  case 5:
    if (param_4 == 10) goto LAB_10038b80;
    iVar5 = -1;
    iVar3 = 0;
    piVar6 = (int *)(param_1 + 0x98);
    do {
      if (iVar5 != -1) goto LAB_10038a96;
      if ((*piVar6 != 0) && (iVar3 + 1U == param_4)) {
        iVar5 = iVar3;
      }
      iVar3 = iVar3 + 1;
      piVar6 = piVar6 + 0xe;
    } while (iVar3 < 0x10);
    if (iVar5 != -1) {
LAB_10038a96:
      if (param_1[iVar5 * 0x38 + 0x94] == '\0') {
        FUN_100071c0(*(int *)(param_1 + iVar5 * 0x38 + 0x98));
        pbVar2 = FUN_100349a0(s__Buy_Removed_100950d0);
      }
      else {
        pbVar2 = FUN_100349a0(s__Buy_Removed_100950d0);
      }
      FUN_1006ac7a(local_40,pbVar2);
      FUN_1004b520(&DAT_100d43cc,local_40,0,0,0,0x14,0);
      FUN_10038e40(param_1,iVar5);
      FUN_100392b0(param_1);
      return;
    }
    break;
  case 6:
    if (param_4 != 10) {
      puVar7 = (undefined4 *)(param_1 + 0x14);
      puVar8 = (undefined4 *)(param_1 + param_4 * 0x408 + 0x41c);
      for (iVar5 = 0x102; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      FUN_10036560((int)param_1);
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xc) = 0;
      pbVar2 = FUN_100349a0(s__Buy_SavedConfig_100950f4);
      FUN_1006ac7a(local_40,pbVar2);
      FUN_1004b520(&DAT_100d43cc,local_40,0,0,0,0x14,0);
      return;
    }
LAB_10038b80:
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  case 7:
    if (param_4 == 10) goto LAB_10038b80;
    if (0 < *(int *)(param_1 + param_4 * 0x408 + 0x81c)) {
      puVar7 = (undefined4 *)(param_1 + param_4 * 0x408 + 0x41c);
      puVar8 = (undefined4 *)(param_1 + 0x14);
      for (iVar5 = 0x102; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      FUN_100392b0(param_1);
      pbVar2 = FUN_100349a0(s__Buy_ConfigLoaded_100950e0);
      FUN_1006ac7a(local_40,pbVar2);
      FUN_1004b520(&DAT_100d43cc,local_40,0,0,0,0x14,0);
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      param_1[0x2f08] = 1;
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      return;
    }
    break;
  case 8:
    if ((int)param_4 < 3) {
      FUN_1006ac7a(local_40,(byte_conflict *)s_chgteam__i_100950c4);
      (*gEngfuncs.pfnServerCmd)(local_40);
      FUN_10036720(param_1);
      return;
    }
    if (param_4 == 10) {
      FUN_10036720(param_1);
    }
  }
  return;
}

/* 10038d70  FUN_10038d70  (77 bytes)
 * bool FUN_10038d70(uint param_1)
 * called by: FUN_10037ba0, FUN_10038410, FUN_10038840
 */
bool __thiscall FUN_10038d70(void *this,uint param_1)

{
  undefined4 *puVar1;
  
  if ((*(uint *)((int)this + 0xc) & param_1) != 0) {
    return false;
  }
  puVar1 = FUN_100071c0(*(int *)((int)this + 0x10));
  if ((param_1 & puVar1[0x39]) != 0) {
    return false;
  }
  puVar1 = FUN_100071c0(*(int *)((int)this + 0x10));
  return (param_1 & puVar1[0x38]) != 0;
}

/* 10038dc0  FUN_10038dc0  (119 bytes)
 * uint FUN_10038dc0(uint param_1, char param_2, char param_3)
 * called by: FUN_10038f60
 */
uint FUN_10038dc0(uint param_1,char param_2,char param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0;
  if (param_3 == '\0') {
    puVar2 = FUN_100071c0(param_1);
    uVar1 = (uint)*(byte *)(puVar2 + 0x34);
    if (param_2 != '\0') {
      puVar2 = FUN_100071c0(param_1);
      if (*(char *)(puVar2 + 0x37) == '\0') {
        return uVar1 * 2;
      }
      puVar2 = FUN_100071c0(param_1);
      return puVar2[9] * uVar1;
    }
  }
  else if ((param_1 & 0x10) != 0) {
    return 10;
  }
  return uVar1;
}

/* 10038e40  FUN_10038e40  (288 bytes)
 * undefined4 FUN_10038e40(int param_1)
 * called by: FUN_10038840, FUN_10038f60
 */
undefined4 __thiscall FUN_10038e40(void *this,int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 local_38 [14];
  
  pcVar6 = (char *)((int)this + param_1 * 0x38 + 0x94);
  *(int *)((int)this + 0x414) =
       *(int *)((int)this + 0x414) - *(int *)((int)this + param_1 * 0x38 + 0xa0);
  if (*pcVar6 == '\0') {
    if (*(int *)((int)this + param_1 * 0x38 + 200) == 0) {
      puVar2 = FUN_100071c0(*(int *)((int)this + param_1 * 0x38 + 0x98));
      iVar3 = *(int *)((int)this + 0x418) -
              (uint)*(byte *)(puVar2 + 0x34) *
              ((*(char *)((int)this + param_1 * 0x38 + 0xc4) != '\0') + 1);
    }
    else {
      puVar2 = FUN_100071c0(*(int *)((int)this + param_1 * 0x38 + 0x98));
      iVar3 = *(int *)((int)this + 0x418) -
              (uint)*(byte *)(puVar2 + 0x34) * *(int *)((int)this + param_1 * 0x38 + 200);
    }
  }
  else {
    if ((*(byte *)((int)this + param_1 * 0x38 + 0x98) & 0x10) == 0) goto LAB_10038ef5;
    iVar3 = *(int *)((int)this + 0x418) + -10;
  }
  *(int *)((int)this + 0x418) = iVar3;
LAB_10038ef5:
  for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + 4;
  }
  do {
    bVar1 = false;
    puVar2 = (undefined4 *)((int)this + 0x94);
    iVar3 = 0xf;
    do {
      if (((int)puVar2[1] < 1) && (0 < (int)puVar2[0xf])) {
        puVar5 = puVar2;
        puVar7 = local_38;
        for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar5 = puVar2 + 0xe;
        puVar7 = puVar2;
        for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar5 = local_38;
        puVar7 = puVar2 + 0xe;
        for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        bVar1 = true;
      }
      puVar2 = puVar2 + 0xe;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  } while (bVar1);
  *(undefined1 *)((int)this + 0x2f08) = 1;
  return CONCAT31((int3)((uint)puVar2 >> 8),1);
}

/* 10038f60  FUN_10038f60  (833 bytes)
 * undefined4 FUN_10038f60(uint param_1, uint param_2, uint param_3, char param_4)
 * called by: FUN_10038800, FUN_10038840, FUN_100398e0
 */
uint __thiscall FUN_10038f60(void *this,uint param_1,uint param_2,uint param_3,char param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint3 uVar5;
  undefined4 uVar4;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  
  uVar1 = FUN_100365e0(param_1,param_4);
  if ((char)uVar1 != '\0') {
    return uVar1 & 0xffffff00;
  }
  puVar2 = FUN_100071c0(param_1);
  if ((puVar2[0x32] == -1) && (puVar2 = FUN_100071c0(param_1), *(char *)(puVar2 + 0x37) == '\0')) {
    param_3 = param_3 & 0xffffff00;
  }
  iVar3 = FUN_10012ad0(param_1,(byte_conflict)param_2,param_3,param_4);
  iVar9 = *(int *)((int)this + 0x414);
  uVar1 = FUN_10036640();
  if ((int)uVar1 < iVar3 + iVar9) {
    return uVar1 & 0xffffff00;
  }
  uVar1 = FUN_10038dc0(param_1,(char)param_3,param_4);
  iVar9 = *(int *)((int)this + 0x418);
  iVar3 = FUN_10036660();
  uVar5 = (uint3)((uint)iVar3 >> 8);
  if (iVar3 < (int)(uVar1 + iVar9)) {
    return (uint)uVar5 << 8;
  }
  puVar2 = (undefined4 *)((uint)uVar5 << 8);
  iVar9 = 0;
  pcVar7 = (char *)((int)this + 0x94);
  do {
    if ((char)puVar2 != '\0') break;
    if (*(uint *)(pcVar7 + 4) == param_1) {
      if (param_4 == '\0') {
        puVar2 = FUN_100071c0(param_1);
        if (*(char *)(puVar2 + 0x37) != '\0') {
          iVar3 = *(int *)((int)this + iVar9 * 0x38 + 200);
          puVar2 = FUN_100071c0(param_1);
          if ((int)puVar2[9] <= iVar3) goto LAB_1003915d;
          if ((char)param_3 == '\0') {
            *(int *)((int)this + iVar9 * 0x38 + 200) = iVar3 + 1;
            puVar2 = FUN_100071c0(param_1);
            *(int *)((int)this + iVar9 * 0x38 + 0xa0) =
                 *(int *)((int)this + iVar9 * 0x38 + 0xa0) + puVar2[0x36];
            puVar2 = FUN_100071c0(param_1);
            *(int *)((int)this + 0x414) = *(int *)((int)this + 0x414) + puVar2[0x36];
            puVar2 = FUN_100071c0(param_1);
            *(uint *)((int)this + 0x418) =
                 *(int *)((int)this + 0x418) + (uint)*(byte *)(puVar2 + 0x34);
          }
          else {
            iVar3 = *(int *)((int)this + iVar9 * 0x38 + 200);
            puVar2 = FUN_100071c0(param_1);
            iVar8 = puVar2[9] - iVar3;
            *(int *)((int)this + iVar9 * 0x38 + 200) = iVar3 + iVar8;
            puVar2 = FUN_100071c0(param_1);
            *(int *)((int)this + iVar9 * 0x38 + 0xa0) =
                 *(int *)((int)this + iVar9 * 0x38 + 0xa0) + puVar2[0x36] * iVar8;
            puVar2 = FUN_100071c0(param_1);
            *(int *)((int)this + 0x414) = *(int *)((int)this + 0x414) + puVar2[0x36] * iVar8;
            puVar2 = FUN_100071c0(param_1);
            *(uint *)((int)this + 0x418) =
                 *(int *)((int)this + 0x418) + (uint)*(byte *)(puVar2 + 0x34) * iVar8;
          }
          goto LAB_1003928a;
        }
        puVar2 = FUN_100071c0(param_1);
        if ((puVar2[0x32] != -1) && (pcVar7[0x30] == '\0')) {
          param_2 = param_2 | *(uint *)(pcVar7 + 8);
          param_3 = CONCAT31(param_3._1_3_,1);
        }
        uVar4 = FUN_10038e40(this,iVar9);
        puVar2 = (undefined4 *)CONCAT31((int3)((uint)uVar4 >> 8),1);
      }
      else if (*pcVar7 != '\0') {
LAB_1003915d:
        return (uint)puVar2 & 0xffffff00;
      }
    }
    iVar9 = iVar9 + 1;
    pcVar7 = pcVar7 + 0x38;
  } while (iVar9 < 0x10);
  iVar9 = 0;
  piVar6 = (int *)((int)this + 0x98);
  do {
    if (*piVar6 == 0) break;
    iVar9 = iVar9 + 1;
    piVar6 = piVar6 + 0xe;
  } while (iVar9 < 0x10);
  puVar2 = FUN_100071c0(param_1);
  if (*(char *)(puVar2 + 0x37) == '\0') {
    *(char *)((int)this + iVar9 * 0x38 + 0xc4) = (char)param_3;
  }
  *(uint *)((int)this + iVar9 * 0x38 + 0x9c) = ~-(uint)(param_4 != '\0') & param_2;
  *(uint *)((int)this + iVar9 * 0x38 + 0x98) = param_1;
  *(char *)((int)this + iVar9 * 0x38 + 0x94) = param_4;
  iVar3 = FUN_10012ad0(param_1,(byte_conflict)param_2,param_3,param_4);
  *(int *)((int)this + iVar9 * 0x38 + 0xa0) = iVar3;
  if ((param_4 == '\0') && (puVar2 = FUN_100071c0(param_1), *(char *)(puVar2 + 0x37) != '\0')) {
    if ((char)param_3 == '\0') {
      *(undefined4 *)((int)this + iVar9 * 0x38 + 200) = 1;
    }
    else {
      puVar2 = FUN_100071c0(param_1);
      *(undefined4 *)((int)this + iVar9 * 0x38 + 200) = puVar2[9];
    }
  }
  *(int *)((int)this + 0x414) =
       *(int *)((int)this + 0x414) + *(int *)((int)this + iVar9 * 0x38 + 0xa0);
  uVar1 = FUN_10038dc0(param_1,(char)param_3,param_4);
  *(int *)((int)this + 0x418) = *(int *)((int)this + 0x418) + uVar1;
LAB_1003928a:
  uVar4 = FUN_100392b0(this);
  *(undefined1 *)((int)this + 0x2f08) = 1;
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}

/* 100392b0  FUN_100392b0  (194 bytes)
 * undefined FUN_100392b0(void * param_1)
 * called by: FUN_10036670, FUN_10038840, FUN_10038f60
 */
void __fastcall FUN_100392b0(void *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int local_8;
  
  iVar2 = FUN_10036640();
  iVar2 = iVar2 - *(int *)((int)param_1 + 0x414);
  puVar3 = (undefined4 *)((int)param_1 + 0x14);
  for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  iVar5 = iVar2;
  if (0 < iVar2) {
    do {
      bVar1 = true;
      piVar7 = (int *)((int)param_1 + 0x98);
      local_8 = 0x10;
      do {
        if ((*piVar7 != 0) && ((char)piVar7[-1] == '\0')) {
          puVar3 = FUN_100071c0(*piVar7);
          uVar6 = (uint)*(byte *)(puVar3 + 2);
          puVar3 = FUN_100071f0(uVar6);
          if ((-1 < iVar5 - puVar3[1]) && (uVar4 = FUN_10039380(param_1,uVar6), (char)uVar4 != '\0')
             ) {
            puVar3 = FUN_100071f0(uVar6);
            iVar5 = iVar5 - puVar3[1];
            bVar1 = false;
          }
        }
        piVar7 = piVar7 + 0xe;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    } while (!bVar1);
    *(uint *)((int)param_1 + 0x2f0c) = iVar2 - iVar5 & (iVar2 - iVar5 < 1) - 1;
  }
  return;
}

/* 10039380  FUN_10039380  (115 bytes)
 * undefined4 FUN_10039380(int param_1)
 * called by: FUN_100392b0
 */
undefined4 __thiscall FUN_10039380(void *this,int param_1)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  
  if ((-1 < param_1) && (param_1 < 0x10)) {
    in_EAX = FUN_100071f0(param_1);
    if (*(int *)((int)this + param_1 * 8 + 0x14) < (int)in_EAX[3]) {
      puVar1 = FUN_100071f0(param_1);
      *(int *)((int)this + param_1 * 8 + 0x14) =
           *(int *)((int)this + param_1 * 8 + 0x14) + puVar1[4];
      *(int *)((int)this + param_1 * 8 + 0x18) = *(int *)((int)this + param_1 * 8 + 0x18) + 1;
      puVar1 = FUN_100071f0(param_1);
      if ((int)puVar1[3] < *(int *)((int)this + param_1 * 8 + 0x14)) {
        puVar1 = FUN_100071f0(param_1);
        *(undefined4 *)((int)this + param_1 * 8 + 0x14) = puVar1[3];
      }
      return CONCAT31((int3)((uint)puVar1 >> 8),1);
    }
  }
  return (uint)in_EAX & 0xffffff00;
}

/* 10039400  FUN_10039400  (1039 bytes)
 * undefined4 FUN_10039400(int param_1)
 * called by: FUN_10038840
 */
uint __fastcall FUN_10039400(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
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
  
  if (*(int *)(param_1 + 0x414) < 1) {
    FUN_1004b520(&DAT_100d43cc,s__Buy_ConfigEmpty_10095154,0xc3,0x2d,0x2d,0x14,0);
  }
  iVar3 = FUN_10036640();
  if (iVar3 < *(int *)(param_1 + 0x414)) {
    uVar4 = FUN_1004b520(&DAT_100d43cc,s__Buy_NoCash_10095148,0xc3,0x2d,0x2d,0x14,0);
    return uVar4 & 0xffffff00;
  }
  uVar4 = FUN_10036660();
  if ((int)uVar4 < *(int *)(param_1 + 0x418)) {
    return uVar4 & 0xffffff00;
  }
  do {
    bVar2 = false;
    piVar10 = (int *)(param_1 + 0x98);
    local_1fc = 0xf;
    do {
      if ((0 < *piVar10) && (0 < piVar10[0xe])) {
        if (((char)piVar10[-1] == '\0') && ((char)piVar10[0xd] == '\0')) {
          puVar5 = FUN_100071c0(*piVar10);
          if ((*(char *)(puVar5 + 2) == '\0') ||
             (puVar5 = FUN_100071c0(piVar10[0xe]), *(char *)(puVar5 + 2) == '\0')) {
            puVar5 = FUN_100071c0(*piVar10);
            if ((*(char *)(puVar5 + 2) == '\0') &&
               (puVar5 = FUN_100071c0(piVar10[0xe]), *(char *)(puVar5 + 2) == '\0')) {
              if (piVar10[0x10] < piVar10[2]) goto LAB_10039546;
            }
            else {
              puVar5 = FUN_100071c0(*piVar10);
              if (*(char *)(puVar5 + 2) != '\0') {
LAB_10039546:
                piVar11 = piVar10 + -1;
                piVar12 = local_138;
                for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *piVar12 = *piVar11;
                  piVar11 = piVar11 + 1;
                  piVar12 = piVar12 + 1;
                }
                bVar2 = true;
                piVar11 = piVar10 + 0xd;
                piVar12 = piVar10 + -1;
                for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *piVar12 = *piVar11;
                  piVar11 = piVar11 + 1;
                  piVar12 = piVar12 + 1;
                }
                piVar11 = local_138;
                piVar12 = piVar10 + 0xd;
                for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *piVar12 = *piVar11;
                  piVar11 = piVar11 + 1;
                  piVar12 = piVar12 + 1;
                }
              }
            }
          }
          else if (piVar10[0x10] < piVar10[2]) goto LAB_10039546;
        }
        else if (piVar10[0x10] < piVar10[2]) goto LAB_10039546;
      }
      piVar10 = piVar10 + 0xe;
      local_1fc = local_1fc + -1;
    } while (local_1fc != 0);
  } while (bVar2);
  (*gEngfuncs.pfnServerCmd)(s_rst_cfg_10092a7c);
  uVar4 = 0xffffffff;
  pcVar16 = &DAT_10092a74;
  do {
    pcVar14 = pcVar16;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar14 = pcVar16 + 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar14;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar16 = pcVar14 + -uVar4;
  pcVar14 = acStack_1b8;
  for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar16;
    pcVar16 = pcVar16 + 4;
    pcVar14 = pcVar14 + 4;
  }
  iVar3 = 0x10;
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar14 = *pcVar16;
    pcVar16 = pcVar16 + 1;
    pcVar14 = pcVar14 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar16 = &DAT_10092a6c;
  do {
    pcVar14 = pcVar16;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar14 = pcVar16 + 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar14;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar16 = pcVar14 + -uVar4;
  pcVar14 = acStack_80;
  for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar16;
    pcVar16 = pcVar16 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar14 = *pcVar16;
    pcVar16 = pcVar16 + 1;
    pcVar14 = pcVar14 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar16 = &DAT_10092a64;
  do {
    pcVar14 = pcVar16;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar14 = pcVar16 + 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar14;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar16 = pcVar14 + -uVar4;
  pcVar14 = acStack_100;
  for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar16;
    pcVar16 = pcVar16 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar14 = *pcVar16;
    pcVar16 = pcVar16 + 1;
    pcVar14 = pcVar14 + 1;
  }
  piVar10 = (int *)(param_1 + 0x98);
  do {
    if (*piVar10 != 0) {
      if ((char)piVar10[-1] == '\0') {
        puVar5 = FUN_100071c0(*piVar10);
        if ((*(char *)(puVar5 + 0x37) == '\0') && ((char)piVar10[0xb] != '\0')) {
          FUN_1006ac7a(acStack_1f8,(byte_conflict *)s__i__i_10092a5c);
          uVar4 = 0xffffffff;
          pcVar16 = acStack_1f8;
          do {
            pcVar14 = pcVar16;
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            pcVar14 = pcVar16 + 1;
            cVar1 = *pcVar16;
            pcVar16 = pcVar14;
          } while (cVar1 != '\0');
          uVar4 = ~uVar4;
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
          pcVar16 = pcVar14 + -uVar4;
          pcVar14 = pcVar13 + -1;
          for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar16;
            pcVar16 = pcVar16 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
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
      uVar4 = 0xffffffff;
      pcVar14 = acStack_1f8;
      do {
        pcVar13 = pcVar14;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar13 = pcVar14 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar13;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar8 = -1;
      do {
        pcVar14 = pcVar16;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar14 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar14;
      } while (cVar1 != '\0');
      pcVar16 = pcVar13 + -uVar4;
      pcVar14 = pcVar14 + -1;
      for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar14 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar14 = pcVar14 + 1;
      }
    }
    piVar10 = piVar10 + 0xe;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar8 = 0;
  iVar3 = param_1 + 0x18;
  do {
    if (*(int *)(iVar3 + -4) != 0) {
      FUN_1006ac7a(acStack_1f8,(byte_conflict *)s__i__i_10092a5c);
      uVar4 = 0xffffffff;
      pcVar16 = acStack_1f8;
      do {
        pcVar14 = pcVar16;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar14 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar14;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
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
      pcVar16 = pcVar14 + -uVar4;
      pcVar14 = pcVar13 + -1;
      for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar14 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar14 = pcVar14 + 1;
      }
    }
    iVar8 = iVar8 + 1;
    iVar3 = iVar3 + 8;
    if (0xf < iVar8) {
      (*gEngfuncs.pfnServerCmd)(acStack_1b8);
      (*gEngfuncs.pfnServerCmd)(acStack_100);
      (*gEngfuncs.pfnServerCmd)(acStack_80);
      if (*(char *)(param_1 + 0x2f08) == '\0') {
        pcVar16 = s__Buy_UsingLastConfig_10095130;
      }
      else {
        pcVar16 = s__Buy_UsingNewConfig_1009511c;
      }
      uVar6 = FUN_1004b520(&DAT_100d43cc,pcVar16,0,0,0,0x14,0);
      *(undefined1 *)(param_1 + 0x2f08) = 0;
      puVar5 = (undefined4 *)(param_1 + 0x14);
      puVar15 = (undefined4 *)(param_1 + 0x41c);
      for (iVar3 = 0x102; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar15 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar15 = puVar15 + 1;
      }
      return CONCAT31((int3)((uint)uVar6 >> 8),1);
    }
  } while( true );
}

/* 10039810  FUN_10039810  (203 bytes)
 * uint FUN_10039810(int param_1)
 * called by: FUN_10012c20, FUN_100398e0
 */
uint __cdecl FUN_10039810(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = (*gEngfuncs.pfnRandomLong)(0,100);
  if (0x32 < iVar1) {
    puVar2 = FUN_100071c0(param_1);
    if ((*(byte *)(puVar2 + 0x38) & 1) != 0) {
      puVar2 = FUN_100071c0(param_1);
      if ((*(byte *)(puVar2 + 0x39) & 1) == 0) {
        uVar3 = 1;
      }
    }
  }
  iVar1 = (*gEngfuncs.pfnRandomLong)(0,100);
  if (0x32 < iVar1) {
    puVar2 = FUN_100071c0(param_1);
    if ((*(byte *)(puVar2 + 0x38) & 2) != 0) {
      puVar2 = FUN_100071c0(param_1);
      if ((*(byte *)(puVar2 + 0x39) & 2) == 0) {
        uVar3 = uVar3 | 2;
      }
    }
  }
  iVar1 = (*gEngfuncs.pfnRandomLong)(0,100);
  if (0x4b < iVar1) {
    puVar2 = FUN_100071c0(param_1);
    if ((*(byte *)(puVar2 + 0x38) & 8) != 0) {
      puVar2 = FUN_100071c0(param_1);
      if ((*(byte *)(puVar2 + 0x39) & 8) == 0) {
        uVar3 = uVar3 | 8;
      }
    }
  }
  return uVar3;
}

/* 100398e0  FUN_100398e0  (992 bytes)
 * undefined FUN_100398e0(float param_1)
 * called by: FUN_10036670, FUN_10038840
 */
void __thiscall FUN_100398e0(void *this,float param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float10 fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  
  FUN_10038800(this);
  iVar1 = (*gEngfuncs.pfnRandomLong)(0,5);
  if (iVar1 == 2) {
    cVar8 = '\0';
    iVar1 = (*gEngfuncs.pfnRandomLong)(0,2);
    uVar7 = CONCAT31((int3)((uint)extraout_ECX >> 8),iVar1 == 0);
    uVar5 = 0x23;
  }
  else {
    cVar8 = '\0';
    if (iVar1 == 3) {
      uVar7 = 0;
      uVar5 = 0x22;
    }
    else {
      cVar8 = '\0';
      iVar1 = (*gEngfuncs.pfnRandomLong)(0,2);
      uVar7 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0);
      uVar5 = 0x19;
    }
  }
  FUN_10038f60(this,uVar5,0,uVar7,cVar8);
  if (param_1 <= 0.0) {
    fVar4 = (float10)(*gEngfuncs.pfnRandomFloat)(0.0,1.0);
    param_1 = (float)fVar4;
  }
  if ((0.1 < param_1) && (param_1 < 0.9)) {
    iVar1 = (*gEngfuncs.pfnRandomLong)(0,9);
    switch(iVar1) {
    case 0:
      cVar8 = '\0';
      uVar7 = 0;
      uVar5 = FUN_10039810(0x24);
      uVar6 = 0x24;
      break;
    case 1:
      cVar8 = '\0';
      uVar7 = 0;
      uVar5 = FUN_10039810(1);
      uVar6 = 1;
      break;
    case 2:
      cVar8 = '\0';
      iVar1 = (*gEngfuncs.pfnRandomLong)(0,1);
      uVar7 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 0);
      uVar5 = FUN_10039810(9);
      uVar6 = 9;
      break;
    case 3:
      cVar8 = '\0';
      uVar7 = 0;
      uVar5 = FUN_10039810(0xc);
      uVar6 = 0xc;
      break;
    case 4:
      cVar8 = '\0';
      iVar1 = (*gEngfuncs.pfnRandomLong)(0,1);
      uVar7 = CONCAT31((int3)((uint)extraout_ECX_00 >> 8),iVar1 != 0);
      uVar5 = FUN_10039810(0xe);
      uVar6 = 0xe;
      break;
    case 5:
      cVar8 = '\0';
      iVar1 = (*gEngfuncs.pfnRandomLong)(0,1);
      uVar7 = CONCAT31((int3)((ulonglong)iVar1 >> 0x28),(int)iVar1 != 0);
      uVar5 = FUN_10039810(2);
      uVar6 = 2;
      break;
    case 6:
      cVar8 = '\0';
      uVar7 = 0;
      uVar5 = FUN_10039810(0x15);
      uVar6 = 0x15;
      break;
    case 7:
      cVar8 = '\0';
      uVar7 = 0;
      uVar5 = FUN_10039810(0x16);
      uVar6 = 0x16;
      break;
    case 8:
      cVar8 = '\0';
      uVar7 = 0;
      uVar5 = FUN_10039810(0x1c);
      uVar6 = 0x1c;
      break;
    case 9:
      cVar8 = '\0';
      uVar7 = 0;
      uVar5 = FUN_10039810(0x1f);
      uVar6 = 0x1f;
      break;
    default:
      goto switchD_100399b0_default;
    }
    FUN_10038f60(this,uVar6,uVar5,uVar7,cVar8);
  }
switchD_100399b0_default:
  if ((param_1 <= 0.3) || (0.7 <= param_1)) {
    if (param_1 < 0.7) goto switchD_10039afa_default;
    iVar1 = (*gEngfuncs.pfnRandomLong)(1,0xc);
    switch(iVar1) {
    case 1:
      cVar8 = '\0';
      uVar7 = 0;
      uVar5 = FUN_10039810(4);
      uVar6 = 4;
      break;
    case 2:
      cVar8 = '\0';
      uVar7 = 0;
      uVar5 = FUN_10039810(0xb);
      uVar6 = 0xb;
      break;
    case 3:
      cVar8 = '\0';
      uVar7 = 0;
      uVar5 = FUN_10039810(0x14);
      uVar6 = 0x14;
      break;
    case 4:
      cVar8 = '\0';
      uVar7 = 0;
      uVar5 = FUN_10039810(0xd);
      uVar6 = 0xd;
      break;
    case 5:
      cVar8 = '\0';
      uVar7 = 0;
      uVar5 = FUN_10039810(5);
      uVar6 = 5;
      break;
    case 6:
      cVar8 = '\0';
      uVar7 = 0;
      uVar5 = FUN_10039810(0xf);
      uVar6 = 0xf;
      break;
    case 7:
      cVar8 = '\0';
      uVar7 = 0;
      uVar5 = FUN_10039810(0x1a);
      uVar6 = 0x1a;
      break;
    case 8:
      cVar8 = '\0';
      uVar7 = 0;
      uVar5 = FUN_10039810(0x1b);
      uVar6 = 0x1b;
      break;
    case 9:
      cVar8 = '\0';
      uVar7 = 0;
      uVar5 = FUN_10039810(0x21);
      uVar6 = 0x21;
      break;
    case 10:
      cVar8 = '\0';
      uVar7 = 0;
      uVar5 = FUN_10039810(0x12);
      uVar6 = 0x12;
      break;
    case 0xb:
      cVar8 = '\0';
      uVar7 = 0;
      uVar5 = FUN_10039810(0x20);
      uVar6 = 0x20;
      break;
    default:
      goto switchD_10039afa_default;
    }
  }
  else {
    iVar1 = (*gEngfuncs.pfnRandomLong)(1,6);
    switch(iVar1) {
    case 1:
      cVar8 = '\0';
      iVar1 = (*gEngfuncs.pfnRandomLong)(0,1);
      uVar7 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 0);
      uVar5 = FUN_10039810(3);
      uVar6 = 3;
      break;
    case 2:
      cVar8 = '\0';
      uVar7 = 0;
      uVar5 = FUN_10039810(6);
      uVar6 = 6;
      break;
    case 3:
      cVar8 = '\0';
      uVar7 = 0;
      uVar5 = FUN_10039810(7);
      uVar6 = 7;
      break;
    case 4:
      cVar8 = '\0';
      uVar7 = 0;
      uVar5 = FUN_10039810(0x11);
      uVar6 = 0x11;
      break;
    case 5:
      cVar8 = '\0';
      uVar7 = 0;
      uVar5 = FUN_10039810(0x13);
      uVar6 = 0x13;
      break;
    case 6:
      cVar8 = '\0';
      uVar7 = 0;
      uVar5 = FUN_10039810(0x17);
      uVar6 = 0x17;
      break;
    default:
      goto switchD_10039afa_default;
    }
  }
  FUN_10038f60(this,uVar6,uVar5,uVar7,cVar8);
switchD_10039afa_default:
  puVar2 = (undefined4 *)((int)this + 0x14);
  puVar3 = (undefined4 *)((int)this + 0x41c);
  for (iVar1 = 0x102; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

/* 1003a160  FUN_1003a160  (300 bytes)
 * int FUN_1003a160(int param_1, undefined4 * param_2, undefined4 * param_3)
 * called by: FUN_1003a5d0
 */
int __cdecl FUN_1003a160(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  byte_conflict bVar1;
  char *data;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte_conflict *pbVar5;
  undefined4 *puVar6;
  byte_conflict *pbVar7;
  undefined4 uStack_504;
  byte_conflict abStack_500 [256];
  byte_conflict local_400 [1024];
  
  puVar6 = param_2;
  for (iVar2 = 0x46; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  do {
    data = (*gEngfuncs.COM_ParseFile)((char *)param_1,(char *)local_400);
    if (local_400[0] == '}') {
      return (int)data;
    }
    if (data == (char *)0x0) {
      *param_3 = 1;
      return 0;
    }
    uVar3 = 0xffffffff;
    uStack_504 = abStack_500;
    pbVar5 = local_400;
    do {
      pbVar7 = pbVar5;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pbVar7 = pbVar5 + 1;
      bVar1 = *pbVar5;
      pbVar5 = pbVar7;
    } while (bVar1 != '\0');
    uVar3 = ~uVar3;
    pbVar5 = pbVar7 + -uVar3;
    pbVar7 = uStack_504;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pbVar7 = *(undefined4 *)pbVar5;
      pbVar5 = pbVar5 + 4;
      pbVar7 = pbVar7 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pbVar7 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      pbVar7 = pbVar7 + 1;
    }
    uVar3 = 0xffffffff;
    pbVar5 = abStack_500;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != '\0');
    uVar3 = ~uVar3;
    while ((uVar3 - 1 != 0 && (abStack_500[uVar3 - 2] == ' '))) {
      abStack_500[uVar3 - 2] = '\0';
      uVar3 = uVar3 - 1;
    }
    param_1 = (int)(*gEngfuncs.COM_ParseFile)(data,(char *)local_400);
    if ((char *)param_1 == (char *)0x0) {
      *param_3 = 1;
      return 0;
    }
    if (local_400[0] == '}') {
      *param_3 = 1;
      return (int)(char *)param_1;
    }
    FUN_10055d20(&DAT_1018abc8,(int)param_2,abStack_500,local_400);
  } while( true );
}

/* 1003a290  FUN_1003a290  (300 bytes)
 * int FUN_1003a290(int param_1, undefined4 * param_2, undefined4 * param_3)
 * called by: FUN_1003a5d0
 */
int __cdecl FUN_1003a290(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  byte_conflict bVar1;
  char *data;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte_conflict *pbVar5;
  undefined4 *puVar6;
  byte_conflict *pbVar7;
  undefined4 uStack_504;
  byte_conflict abStack_500 [256];
  byte_conflict local_400 [1024];
  
  puVar6 = param_2;
  for (iVar2 = 0xbb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  do {
    data = (*gEngfuncs.COM_ParseFile)((char *)param_1,(char *)local_400);
    if (local_400[0] == '}') {
      return (int)data;
    }
    if (data == (char *)0x0) {
      *param_3 = 1;
      return 0;
    }
    uVar3 = 0xffffffff;
    uStack_504 = abStack_500;
    pbVar5 = local_400;
    do {
      pbVar7 = pbVar5;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pbVar7 = pbVar5 + 1;
      bVar1 = *pbVar5;
      pbVar5 = pbVar7;
    } while (bVar1 != '\0');
    uVar3 = ~uVar3;
    pbVar5 = pbVar7 + -uVar3;
    pbVar7 = uStack_504;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pbVar7 = *(undefined4 *)pbVar5;
      pbVar5 = pbVar5 + 4;
      pbVar7 = pbVar7 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pbVar7 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      pbVar7 = pbVar7 + 1;
    }
    uVar3 = 0xffffffff;
    pbVar5 = abStack_500;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != '\0');
    uVar3 = ~uVar3;
    while ((uVar3 - 1 != 0 && (abStack_500[uVar3 - 2] == ' '))) {
      abStack_500[uVar3 - 2] = '\0';
      uVar3 = uVar3 - 1;
    }
    param_1 = (int)(*gEngfuncs.COM_ParseFile)(data,(char *)local_400);
    if ((char *)param_1 == (char *)0x0) {
      *param_3 = 1;
      return 0;
    }
    if (local_400[0] == '}') {
      *param_3 = 1;
      return (int)(char *)param_1;
    }
    FUN_10055f90(&DAT_1018abc8,(int)param_2,abStack_500,local_400);
  } while( true );
}

/* 1003a3c0  FUN_1003a3c0  (515 bytes)
 * int FUN_1003a3c0(int param_1, undefined4 * param_2, undefined4 * param_3)
 * called by: FUN_1003a5d0
 */
/* WARNING: Type propagation algorithm not settling */

int __cdecl FUN_1003a3c0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  byte_conflict bVar2;
  char *data;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *this;
  undefined *extraout_ECX;
  undefined *this_00;
  void *this_01;
  char *pcVar6;
  byte_conflict *pbVar7;
  undefined4 *puVar8;
  char *pcVar9;
  byte_conflict *pbVar10;
  float10 fVar11;
  undefined4 *in_stack_00000014;
  undefined4 *in_stack_0000001c;
  char acStack_4fa [2];
  undefined4 auStack_4f8 [2];
  byte_conflict abStack_4f0 [240];
  char local_400 [8];
  char acStack_3f8 [8];
  byte_conflict abStack_3f0 [1008];
  
  puVar8 = param_2;
  for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
LAB_1003a3e3:
  do {
    data = (*gEngfuncs.COM_ParseFile)((char *)param_1,local_400);
    if (acStack_3f8[0] == '}') {
      return (int)data;
    }
    if (data == (char *)0x0) {
      *in_stack_00000014 = 1;
      return 0;
    }
    uVar4 = 0xffffffff;
    pcVar6 = acStack_3f8;
    do {
      pcVar9 = pcVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar9 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar9;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar6 = pcVar9 + -uVar4;
    pcVar9 = (char *)auStack_4f8;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar9 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar9 = pcVar9 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar6 = (char *)auStack_4f8;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    while ((uVar4 - 1 != 0 && (*(char *)((int)auStack_4f8 + (uVar4 - 2)) == ' '))) {
      *(undefined1 *)((int)auStack_4f8 + (uVar4 - 2)) = 0;
      uVar4 = uVar4 - 1;
    }
    param_1 = (int)(*gEngfuncs.COM_ParseFile)(data,acStack_3f8);
    if ((char *)param_1 == (char *)0x0) {
      *in_stack_0000001c = 1;
      return 0;
    }
    if (abStack_3f0[0] == '}') {
      *in_stack_0000001c = 1;
      return (int)(char *)param_1;
    }
    uVar4 = FUN_10076d90(this,abStack_4f0,&DAT_100951c8);
    if (uVar4 == 0) {
      fVar11 = FUN_1006b918(extraout_ECX,abStack_3f0);
      param_2[2] = (float)fVar11;
      goto LAB_1003a3e3;
    }
    uVar4 = FUN_10076d90(abStack_4f0,abStack_4f0,&DAT_100951c0);
    if (uVar4 == 0) {
      fVar11 = FUN_1006b918(this_00,abStack_3f0);
      param_2[1] = (float)fVar11;
    }
    else {
      uVar4 = FUN_10076d90(this_00,abStack_4f0,(byte_conflict *)s_color_100936a8);
      if (uVar4 == 0) {
        iVar3 = FUN_1006bf83((char *)abStack_3f0,(byte_conflict *)s__f__f__f_100951b4);
        if (iVar3 != 3) {
          (*gEngfuncs.Con_Printf)(s_color_has_bad_value__Should_be___1009518c);
        }
      }
      else {
        uVar4 = FUN_10076d90(this_01,abStack_4f0,(byte_conflict *)s_classname_10093bc0);
        if (uVar4 == 0) {
          uVar4 = 0xffffffff;
          pbVar7 = abStack_3f0;
          do {
            pbVar10 = pbVar7;
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            pbVar10 = pbVar7 + 1;
            bVar2 = *pbVar7;
            pbVar7 = pbVar10;
          } while (bVar2 != '\0');
          uVar4 = ~uVar4;
          pbVar7 = pbVar10 + -uVar4;
          pbVar10 = (byte_conflict *)(param_2 + 6);
          for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)pbVar10 = *(undefined4 *)pbVar7;
            pbVar7 = pbVar7 + 4;
            pbVar10 = pbVar10 + 4;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *pbVar10 = *pbVar7;
            pbVar7 = pbVar7 + 1;
            pbVar10 = pbVar10 + 1;
          }
        }
      }
    }
  } while( true );
}

/* 1003a5d0  FUN_1003a5d0  (533 bytes)
 * undefined FUN_1003a5d0(int param_1)
 * called by: FUN_1003a960
 */
void __cdecl FUN_1003a5d0(int param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  char *data;
  int iVar4;
  void *this;
  void *this_00;
  void *this_01;
  void *this_02;
  int iStack_478;
  undefined4 auStack_474 [6];
  byte_conflict abStack_45c [92];
  char local_400 [8];
  char acStack_3f8 [1016];
  
  pcVar2 = (char *)param_1;
  while (iVar1 = FUN_10055bf0(0x1018abc8), data = (char *)param_1, iVar1 != -1) {
    pcVar2 = (*gEngfuncs.COM_ParseFile)(pcVar2,local_400);
    if (pcVar2 == (char *)0x0) break;
    if (acStack_3f8[0] != '{') goto LAB_1003a726;
    pcVar2 = (char *)FUN_1003a290((int)pcVar2,&DAT_10108bb8 + iVar1 * 0xbb,&iStack_478);
    if (iStack_478 != 0) goto LAB_1003a7cc;
    uVar3 = FUN_10076d90(this,(byte_conflict *)(iVar1 * 0x2ec + 0x10108d74),
                         (byte_conflict *)s_ts_particle_10095250);
    if (uVar3 == 0) {
      FUN_10055c50(&DAT_1018abc8,&DAT_10108bb8 + iVar1 * 0xbb);
    }
  }
  do {
    iVar1 = FUN_10055bd0(&DAT_1018abc8);
    if (iVar1 == -1) {
LAB_1003a749:
      while( true ) {
        pcVar2 = (*gEngfuncs.COM_ParseFile)((char *)param_1,local_400);
        if (pcVar2 == (char *)0x0) {
          return;
        }
        if (acStack_3f8[0] != '{') {
          (*gEngfuncs.Con_Printf)(s_CTS_CL_Emitter__ProcessEnts__fou_1009520c,acStack_3f8);
          return;
        }
        param_1 = FUN_1003a3c0((int)pcVar2,auStack_474,&iStack_478);
        if (iStack_478 != 0) break;
        uVar3 = FUN_10076d90(this_02,abStack_45c,(byte_conflict *)s_ts_fog_10095204);
        if (uVar3 == 0) {
          FUN_1003a7f0(auStack_474);
        }
      }
LAB_1003a7cc:
      (*gEngfuncs.Con_Printf)(s_CTS_CL_Emitter__ProcessEnts__err_100951cc);
      return;
    }
    pcVar2 = (*gEngfuncs.COM_ParseFile)(data,local_400);
    if (pcVar2 == (char *)0x0) goto LAB_1003a749;
    if (acStack_3f8[0] != '{') {
LAB_1003a726:
      (*gEngfuncs.Con_Printf)(s_CTS_CL_Emitter__ProcessEnts__fou_1009520c,acStack_3f8);
      return;
    }
    data = (char *)FUN_1003a160((int)pcVar2,&DAT_101663b8 + iVar1 * 0x46,&iStack_478);
    if (iStack_478 != 0) goto LAB_1003a7cc;
    uVar3 = FUN_10076d90(this_00,(byte_conflict *)(iVar1 * 0x118 + 0x10166464),
                         (byte_conflict *)s_ts_emitter_10095244);
    if (uVar3 == 0) {
      FUN_10055c10(&DAT_1018abc8,&DAT_101663b8 + iVar1 * 0x46);
      iVar4 = FUN_1003a820(this_01,(byte_conflict *)(iVar1 * 0x118 + 0x101663d0));
      FUN_10055c90(&DAT_1018abc8,iVar1,iVar4);
    }
  } while( true );
}

/* 1003a7f0  FUN_1003a7f0  (41 bytes)
 * undefined FUN_1003a7f0(undefined4 * param_1)
 * called by: FUN_1003a5d0
 */
void __cdecl FUN_1003a7f0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = &DAT_101893b8;
    for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_1;
      param_1 = param_1 + 1;
      puVar2 = puVar2 + 1;
    }
    DAT_101893b8._0_1_ = 1;
    return;
  }
  DAT_101893b8._0_1_ = 1;
  return;
}

/* 1003a820  FUN_1003a820  (62 bytes)
 * undefined4 FUN_1003a820(byte.conflict * param_1)
 * called by: FUN_1003a5d0, FUN_1003ab40
 */
undefined4 __thiscall FUN_1003a820(void *this,byte_conflict *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  void *extraout_ECX;
  int *piVar3;
  
  piVar3 = &DAT_1018b3c8;
  do {
    puVar1 = (undefined4 *)*piVar3;
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = FUN_10076d90(this,(byte_conflict *)(puVar1 + 0x88),param_1);
      this = extraout_ECX;
      if (uVar2 == 0) {
        return *puVar1;
      }
    }
    piVar3 = piVar3 + 1;
  } while ((int)piVar3 < 0x1018bbc8);
  return 0xffffffff;
}

/* 1003a860  FUN_1003a860  (244 bytes)
 * char * FUN_1003a860(LPCSTR param_1)
 * called by: FUN_1003a960
 */
char * __cdecl FUN_1003a860(LPCSTR param_1)

{
  FILE *pFVar1;
  uint uVar2;
  char *pcVar3;
  int local_7c;
  int local_78;
  uint local_74;
  
  pFVar1 = (FILE *)FUN_1006b77b(param_1,&DAT_10092b28);
  if (pFVar1 == (FILE *)0x0) {
    return (char *)0x0;
  }
  uVar2 = FUN_1006b633((char *)&local_7c,0x7c,1,(int *)pFVar1);
  if (uVar2 != 1) {
    (*gEngfuncs.Con_Printf)(s_CTS_CL_Emitter__LoadEntityLump__C_100952f4,param_1);
    FUN_1006b37a(pFVar1);
    return (char *)0x0;
  }
  if ((local_7c != 0x1d) && (local_7c != 0x1e)) {
    FUN_1006b37a(pFVar1);
    (*gEngfuncs.Con_Printf)(s_CTS_CL_Emitter__LoadEntityLump__M_1009529c,param_1,local_7c,0x1e);
    return (char *)0x0;
  }
  FUN_1006b57a((int *)pFVar1,local_78,0);
  pcVar3 = _malloc(local_74 + 1);
  if (pcVar3 == (char *)0x0) {
    FUN_1006b37a(pFVar1);
    (*gEngfuncs.Con_Printf)(s_CTS_CL_Emitter__LoadEntityLump__C_1009525c,local_74 + 1);
    return (char *)0x0;
  }
  FUN_1006b633(pcVar3,local_74,1,(int *)pFVar1);
  pcVar3[local_74] = '\0';
  FUN_1006b37a(pFVar1);
  return pcVar3;
}

/* 1003a960  FUN_1003a960  (76 bytes)
 * undefined FUN_1003a960(undefined4 param_1)
 * called by: FUN_1003ab40
 */
void __cdecl FUN_1003a960(undefined4 param_1)

{
  char *pcVar1;
  CHAR aCStack_100 [256];
  
  (*gEngfuncs.pfnGetGameDirectory)(param_1);
  FUN_1006ac7a(aCStack_100,(byte_conflict *)s__s__s_10092b2c);
  pcVar1 = FUN_1003a860(aCStack_100);
  if (pcVar1 != (char *)0x0) {
    FUN_1003a5d0((int)pcVar1);
    FUN_1006c158(pcVar1);
  }
  return;
}

/* 1003a9b0  FUN_1003a9b0  (399 bytes)
 * undefined FUN_1003a9b0(int param_1, int param_2)
 * called by: FUN_1003ab40
 */
void __cdecl FUN_1003a9b0(int param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = (float10)(*gEngfuncs.pfnRandomFloat)(*(float *)(param_2 + 0x10),*(float *)(param_2 + 0xc))
  ;
  *(float *)(param_1 + 0xd8) = (float)fVar2;
  fVar2 = (float10)(*gEngfuncs.pfnRandomFloat)
                             (*(float *)(param_2 + 0x18),*(float *)(param_2 + 0x14));
  *(float *)(param_1 + 0xd0) = (float)fVar2;
  fVar2 = (float10)(*gEngfuncs.pfnRandomFloat)
                             (*(float *)(param_2 + 0x20),*(float *)(param_2 + 0x1c));
  *(float *)(param_1 + 0xdc) = (float)fVar2;
  fVar2 = (float10)(*gEngfuncs.pfnRandomFloat)
                             (*(float *)(param_2 + 0x28),*(float *)(param_2 + 0x24));
  *(float *)(param_1 + 0xe0) = (float)fVar2;
  fVar2 = (float10)(*gEngfuncs.pfnRandomFloat)
                             (*(float *)(param_2 + 0x30),*(float *)(param_2 + 0x2c));
  *(float *)(param_1 + 0x108) = (float)fVar2;
  fVar2 = (float10)(*gEngfuncs.pfnRandomFloat)
                             (*(float *)(param_2 + 0x38),*(float *)(param_2 + 0x34));
  *(float *)(param_1 + 0xe4) = (float)fVar2;
  iVar1 = (*gEngfuncs.pfnRandomLong)(*(int *)(param_2 + 0x40),*(int *)(param_2 + 0x3c));
  *(float *)(param_1 + 0xf8) = (float)iVar1;
  fVar2 = (float10)(*gEngfuncs.pfnRandomFloat)
                             (*(float *)(param_2 + 0x48),*(float *)(param_2 + 0x44));
  *(float *)(param_1 + 0xfc) = (float)fVar2;
  fVar2 = (float10)(*gEngfuncs.pfnRandomFloat)
                             (*(float *)(param_2 + 0x50),*(float *)(param_2 + 0x4c));
  *(float *)(param_1 + 0xe8) = (float)fVar2;
  fVar2 = (float10)(*gEngfuncs.pfnRandomFloat)
                             (*(float *)(param_2 + 0x58),*(float *)(param_2 + 0x54));
  *(float *)(param_1 + 0x100) = (float)fVar2;
  fVar2 = (float10)(*gEngfuncs.pfnRandomFloat)
                             (*(float *)(param_2 + 0x60),*(float *)(param_2 + 0x5c));
  *(float *)(param_1 + 0x104) = (float)fVar2;
  fVar2 = (float10)(*gEngfuncs.pfnRandomFloat)
                             (*(float *)(param_2 + 0x70),*(float *)(param_2 + 0x6c));
  *(float *)(param_1 + 0xf0) = (float)fVar2;
  fVar2 = (float10)(*gEngfuncs.pfnRandomFloat)
                             (*(float *)(param_2 + 0x80),*(float *)(param_2 + 0x74));
  *(float *)(param_1 + 0x38) = (float)fVar2;
  fVar2 = (float10)(*gEngfuncs.pfnRandomFloat)
                             (*(float *)(param_2 + 0x84),*(float *)(param_2 + 0x78));
  *(float *)(param_1 + 0x3c) = (float)fVar2;
  fVar2 = (float10)(*gEngfuncs.pfnRandomFloat)
                             (*(float *)(param_2 + 0x88),*(float *)(param_2 + 0x7c));
  *(float *)(param_1 + 0x40) = (float)fVar2;
  fVar2 = (float10)(*gEngfuncs.pfnRandomFloat)
                             (*(float *)(param_2 + 0x98),*(float *)(param_2 + 0x8c));
  *(float *)(param_1 + 0x44) = (float)fVar2;
  fVar2 = (float10)(*gEngfuncs.pfnRandomFloat)
                             (*(float *)(param_2 + 0x9c),*(float *)(param_2 + 0x90));
  *(float *)(param_1 + 0x48) = (float)fVar2;
  fVar2 = (float10)(*gEngfuncs.pfnRandomFloat)
                             (*(float *)(param_2 + 0xa0),*(float *)(param_2 + 0x94));
  *(float *)(param_1 + 0x4c) = (float)fVar2;
  return;
}

/* 1003ab40  FUN_1003ab40  (1808 bytes)
 * undefined FUN_1003ab40(undefined4 param_1, undefined4 param_2)
 * called by: HUD_Frame
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1003ab40(undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  char cVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  bool bVar6;
  byte_conflict *pbVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 uVar13;
  cl_entity_s *pcVar14;
  void *this;
  uint uVar15;
  int iVar16;
  float *pfVar17;
  char *pcVar18;
  float *pfVar19;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar20;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 extraout_ST0_04;
  longlong lVar21;
  float local_4c;
  int iStack_48;
  float fStack_44;
  float fStack_3c;
  float fStack_34;
  
  pbVar7 = (byte_conflict *)(*gEngfuncs.pfnGetLevelName)();
  uVar8 = FUN_10076d90(this,(byte_conflict *)&DAT_10108b38,pbVar7);
  if (uVar8 != 0) {
    pcVar9 = (*gEngfuncs.pfnGetLevelName)();
    uVar8 = 0xffffffff;
    do {
      pcVar18 = pcVar9;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar18 = pcVar9 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar18;
    } while (cVar2 != '\0');
    uVar8 = ~uVar8;
    pcVar9 = pcVar18 + -uVar8;
    pcVar18 = &DAT_10108b38;
    for (uVar15 = uVar8 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar18 = pcVar18 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar18 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar18 = pcVar18 + 1;
    }
    FUN_10055cf0(&DAT_1018abc8);
    _DAT_10189478 = 0.0;
    puVar11 = &DAT_101663b8;
    for (iVar16 = 0x8c00; iVar16 != 0; iVar16 = iVar16 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    puVar11 = &DAT_10108bb8;
    for (iVar16 = 0x17600; iVar16 != 0; iVar16 = iVar16 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    puVar11 = &DAT_101893b8;
    for (iVar16 = 0x1f; iVar16 != 0; iVar16 = iVar16 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    _DAT_10189478 = (double)((ulonglong)_DAT_10189478 & 0xffffffff);
    if (DAT_10108b38 == '\0') {
      return;
    }
    FUN_1003a960(&DAT_10108b38);
  }
  if ((DAT_10108b38 != '\0') && (DAT_1018bdf0 != 0)) {
    _DAT_10189478 = _DAT_10189478 + (double)CONCAT44(param_2,param_1);
    pfVar17 = (float *)&DAT_101663bc;
    do {
      if ((pfVar17[0x43] < (float)_DAT_10189478) && (pfVar17 != (float *)0x4)) {
        fVar3 = pfVar17[4];
        iVar16 = (int)fVar3 * 0x2ec;
        if ((&DAT_10108bb8 + (int)fVar3 * 0xbb != (undefined4 *)0x0) &&
           (iVar10 = (*gEngfuncs.pfnRandomLong)((int)pfVar17[0x21],(int)pfVar17[0x20]), iVar10 != 0)
           ) {
          if ((((DAT_10190b28 <= pfVar17[0x25] + *pfVar17) ||
               (DAT_10190b2c <= pfVar17[0x26] + pfVar17[1])) ||
              (pfVar17[0x22] + *pfVar17 <= DAT_10190b28)) ||
             (bVar6 = true, pfVar17[0x23] + pfVar17[1] <= DAT_10190b2c)) {
            bVar6 = false;
          }
          local_4c = 1.0;
          if (!bVar6) {
            fStack_34 = ((pfVar17[0x25] + pfVar17[0x22]) * 0.5 + *pfVar17) - DAT_10190b28;
            fVar5 = ((pfVar17[0x26] + pfVar17[0x23]) * 0.5 + pfVar17[1]) - DAT_10190b2c;
            local_4c = SQRT(fStack_34 * fStack_34 + fVar5 * fVar5);
            if (local_4c < 0.0001) {
              local_4c = 0.0001;
            }
            if (DAT_1018bd90 * (fStack_34 / local_4c) +
                DAT_1018bd98 * (0.0 / local_4c) + DAT_1018bd94 * (fVar5 / local_4c) < 0.1)
            goto LAB_1003b236;
            local_4c = local_4c /
                       SQRT((pfVar17[0x22] - pfVar17[0x25]) * (pfVar17[0x22] - pfVar17[0x25]) +
                            (pfVar17[0x24] - pfVar17[0x27]) * (pfVar17[0x24] - pfVar17[0x27]) +
                            (pfVar17[0x23] - pfVar17[0x26]) * (pfVar17[0x23] - pfVar17[0x26]));
            if ((local_4c < 1.0) || (local_4c <= 10.0)) {
              if (local_4c < 1.0) {
                local_4c = 1.0;
              }
            }
            else {
              local_4c = 10.0;
            }
          }
          if (iVar10 % (int)fStack_44 == 0) {
            iVar10 = iVar10 / (int)fStack_44;
          }
          else {
            iVar10 = iVar10 / (int)fStack_44 + 1;
          }
          puVar11 = FUN_1004ffe0();
          iVar12 = FUN_100509d0(&DAT_1018bde8,(byte_conflict *)(iVar16 + 0x10108c9c),
                                *(short *)(&DAT_10108d00 + iVar16));
          if (iVar12 == -1) {
            (*gEngfuncs.Con_Printf)
                      (s_Sprite___s__is_not_a_valid_sprit_10095168,
                       (byte_conflict *)(iVar16 + 0x10108c9c));
          }
          else {
            *(undefined1 *)((int)puVar11 + 7) = 0;
            *(undefined1 *)puVar11 = 1;
            *(undefined1 *)((int)puVar11 + 6) = 0;
            *(short *)(puVar11 + 0x45) = (short)iVar12;
            *(undefined1 *)(puVar11 + 1) = 3;
            uVar13 = *(undefined4 *)(&DAT_10108c84 + iVar16);
            uVar4 = *(undefined4 *)(&DAT_10108c88 + iVar16);
            puVar11[0x14] = *(undefined4 *)(&DAT_10108c80 + iVar16);
            puVar11[0x15] = uVar13;
            puVar11[0x16] = uVar4;
            uVar13 = *(undefined4 *)(&DAT_10108c78 + iVar16);
            uVar4 = *(undefined4 *)(&DAT_10108c7c + iVar16);
            puVar11[0x17] = *(undefined4 *)(&DAT_10108c74 + iVar16);
            puVar11[0x18] = uVar13;
            puVar11[0x19] = uVar4;
            *(undefined *)((int)puVar11 + 5) = (&DAT_10108d04)[iVar16];
            puVar11[0x48] = *(undefined4 *)(&DAT_10108d08 + iVar16);
            uVar13 = FUN_1003a820((void *)(iVar16 + 0x10108e3c),(void *)(iVar16 + 0x10108e3c));
            puVar11[0x49] = uVar13;
            *(byte *)((int)puVar11 + 3) = (byte)(*(uint *)(&DAT_10108ea0 + iVar16) >> 1) & 1;
            uVar13 = *(undefined4 *)(&DAT_10108c90 + iVar16);
            uVar4 = *(undefined4 *)(&DAT_10108c94 + iVar16);
            puVar11[0x1d] = *(undefined4 *)(&DAT_10108c8c + iVar16);
            puVar11[0x1e] = uVar13;
            puVar11[0x1f] = uVar4;
            puVar11[0x4a] = *(undefined4 *)(&DAT_10108c98 + iVar16);
            iVar12 = *(int *)(&DAT_10108d0c + iVar16);
            if (iVar12 == 1) {
              puVar11[0x47] = &LAB_10039d30;
            }
            else if (iVar12 == 2) {
              puVar11[0x47] = &LAB_10039d50;
            }
            else if (iVar12 == 3) {
              puVar11[0x47] = &LAB_10039f60;
            }
            else {
              puVar11[0x47] = 0;
            }
            iStack_48 = 0;
            if (0.0 < (float)iVar10 / local_4c) {
              do {
                FUN_1003a9b0((int)puVar11,(int)(&DAT_10108bb8 + (int)fVar3 * 0xbb));
                if (((pfVar17[0x28] <= 0.01) || (pfVar17[0x29] <= 0.01)) || (!bVar6)) {
                  (*gEngfuncs.pfnRandomFloat)(pfVar17[0x25],pfVar17[0x22]);
                  puVar11[5] = (float)(extraout_ST0_01 + (float10)*pfVar17);
                  (*gEngfuncs.pfnRandomFloat)(pfVar17[0x26],pfVar17[0x23]);
                  fVar20 = extraout_ST0_02 + (float10)pfVar17[1];
LAB_1003b101:
                  puVar11[6] = (float)fVar20;
                }
                else {
                  fVar5 = pfVar17[0x29] + pfVar17[0x29];
                  if (pfVar17[0x28] <= 1.0) {
                    fVar1 = pfVar17[0x28];
                  }
                  else {
                    fVar1 = 1.0;
                  }
                  fVar5 = fVar5 - (fVar5 - pfVar17[0x29]) * fVar1;
                  fStack_3c = -fVar5;
                  (*gEngfuncs.pfnRandomFloat)(fStack_3c,fVar5);
                  puVar11[5] = (float)(extraout_ST0 + (float10)DAT_10190b28);
                  (*gEngfuncs.pfnRandomFloat)(fStack_34,fVar5);
                  puVar11[6] = (float)(extraout_ST0_00 + (float10)DAT_10190b2c);
                  pcVar14 = (*gEngfuncs.GetLocalPlayer)();
                  if (pcVar14 != (cl_entity_s *)0x0) {
                    puVar11[5] = (pcVar14->curstate).velocity[0] * 1.5 + (float)puVar11[5];
                    fVar20 = (float10)(pcVar14->curstate).velocity[1] * (float10)1.5 +
                             (float10)(float)puVar11[6];
                    goto LAB_1003b101;
                  }
                }
                (*gEngfuncs.pfnRandomFloat)(pfVar17[0x27],pfVar17[0x24]);
                puVar11[7] = (float)(extraout_ST0_03 + (float10)pfVar17[2]);
                FUN_10050b60(&DAT_1018bde8,puVar11,0,puVar11[0x47]);
                iStack_48 = iStack_48 + 1;
              } while ((float)iStack_48 < (float)iVar10 / local_4c);
            }
            if ((&DAT_10108d10)[iVar16] != '\0') {
              iVar10 = (*gEngfuncs.pfnRandomLong)(-5,5);
              lVar21 = __ftol();
              (*(gEngfuncs.pEventAPI)->EV_PlaySound)
                        (0,(float *)(puVar11 + 5),6,&DAT_10108d10 + iVar16,1.0,1.0,0,
                         iVar10 + (0x19 - (int)lVar21));
            }
            if (((uint)pfVar17[0x44] & 1) == 0) {
              (*gEngfuncs.pfnRandomFloat)(pfVar17[0x1f],pfVar17[0x1e]);
              if (extraout_ST0_04 <= (float10)0.0) {
                pfVar17[0x43] = (float)(int)fStack_3c * fStack_44 + (float)_DAT_10189478;
              }
              else {
                fVar20 = FUN_10056fa0((float)((float10)1.0 / extraout_ST0_04));
                pfVar17[0x43] =
                     (float)((float10)_DAT_10189478 +
                            fVar20 * (float10)(int)fStack_3c * (float10)fStack_44);
              }
            }
            else {
              FUN_10055d10(&DAT_1018abc8,(int)pfVar17[-1]);
              pfVar19 = pfVar17 + -1;
              for (iVar16 = 0x46; iVar16 != 0; iVar16 = iVar16 + -1) {
                *pfVar19 = 0.0;
                pfVar19 = pfVar19 + 1;
              }
            }
          }
        }
      }
LAB_1003b236:
      pfVar17 = pfVar17 + 0x46;
    } while ((int)pfVar17 < 0x101893bc);
  }
  return;
}

/* 1003b250  FUN_1003b250  (1207 bytes)
 * undefined FUN_1003b250(void)
 * called by: FUN_1003bad0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003b250(void)

{
  _func_420 **pp_Var1;
  _func_422 **pp_Var2;
  _func_399 **pp_Var3;
  float fVar4;
  cl_entity_s *pcVar5;
  float *start;
  model_s *pSpriteModel;
  int iVar6;
  float10 fVar7;
  float10 extraout_ST0;
  float fStack00000008;
  float fStack0000000c;
  float fStack00000010;
  float fStack00000018;
  float fStack0000001c;
  float fStack00000024;
  float fStack00000028;
  pmtrace_s *tr;
  int in_stack_ffffffdc;
  
  if ((DAT_10189574 & 1) == 0) {
    DAT_10189574 = DAT_10189574 | 1;
    FUN_1006af63(0x1003b740);
  }
  if ((DAT_10189574 & 2) == 0) {
    DAT_10189574 = DAT_10189574 | 2;
    FUN_1006af63(0x1003b730);
  }
  if ((DAT_10189574 & 4) == 0) {
    DAT_10189574 = DAT_10189574 | 4;
    FUN_1006af63(0x1003b720);
  }
  if ((DAT_10189574 & 8) == 0) {
    DAT_10189574 = DAT_10189574 | 8;
    FUN_1006af63(0x1003b710);
  }
  if ((DAT_100d0cb4 & 4) != 0) {
    (*(gEngfuncs.pEventAPI)->EV_PushPMStates)();
    (*(gEngfuncs.pEventAPI)->EV_SetUpPlayerPrediction)(0,1);
    pp_Var1 = &(gEngfuncs.pEventAPI)->EV_SetSolidPlayers;
    pcVar5 = (*gEngfuncs.GetLocalPlayer)();
    (**pp_Var1)(pcVar5->index + -1);
    (*(gEngfuncs.pEventAPI)->EV_SetTraceHull)(2);
    FUN_10002610(&stack0xffffffd4,(undefined4 *)&stack0xffffffc8);
    FUN_10057270((undefined4 *)&stack0xfffffff8);
    FUN_10002610(&stack0xffffffec,(undefined4 *)&stack0xffffffe0);
    start = (float *)FUN_10057270((undefined4 *)&stack0x00000004);
    tr = (pmtrace_s *)&DAT_10189588;
    pp_Var2 = &(gEngfuncs.pEventAPI)->EV_PlayerTrace;
    pcVar5 = (*gEngfuncs.GetLocalPlayer)();
    (**pp_Var2)(start,(float *)&stack0xffffffec,2,pcVar5->index,tr);
    (*(gEngfuncs.pEventAPI)->EV_PopPMStates)();
    if (_DAT_10189598 != 1.0) {
      FUN_10057270(&stack0x00000018);
      FUN_10002610(&stack0x00000000,(undefined4 *)&stack0xfffffff4);
      fVar7 = FUN_10058390((float *)&stack0x00000000);
      _DAT_10189508 = (float)fVar7;
      DAT_1018948c = (dlight_s *)0x0;
      DAT_1018948c = (*(gEngfuncs.pEfxAPI)->CL_AllocDlight)(2);
      if (DAT_1018948c != (dlight_s *)0x0) {
        DAT_1018948c->origin[0] = DAT_1018959c;
        DAT_1018948c->origin[1] = _DAT_101895a0;
        DAT_1018948c->origin[2] = _DAT_101895a4;
        fVar4 = 1024.0 - _DAT_10189508;
        if (120.0 <= fVar4) {
          fVar4 = 120.0;
        }
        DAT_1018948c->radius = fVar4;
        (DAT_1018948c->color).r = 0xff;
        (DAT_1018948c->color).g = 0xff;
        (DAT_1018948c->color).b = 0xff;
        (*gEngfuncs.GetClientTime)();
        DAT_1018948c->die = (float)(extraout_ST0 + (float10)0.1);
      }
    }
    if (DAT_101914a0 != 0) {
      _DAT_101895cc = FUN_100509d0(&DAT_1018bde8,(byte_conflict *)s_sprites_flash_spr_10095340,5);
      if (_DAT_101895cc != -1) {
        pp_Var3 = &(gEngfuncs.pTriAPI)->SpriteTexture;
        pSpriteModel = (*gEngfuncs.GetSpritePointer)
                                 (*(HSPRITE *)(&DAT_1018be14 + _DAT_101895cc * 0x28));
        iVar6 = (**pp_Var3)(pSpriteModel,in_stack_ffffffdc);
        if (iVar6 != 0) {
          (*(gEngfuncs.pTriAPI)->RenderMode)(5);
          (*(gEngfuncs.pTriAPI)->CullFace)(TRI_NONE);
          (*(gEngfuncs.pTriAPI)->Begin)(2);
          (*(gEngfuncs.pTriAPI)->Color4f)(0.7,0.7,0.7,1.0);
          fStack00000024 = _DAT_1018bdac;
          fStack00000028 = _DAT_1018bdb0;
          _DAT_101894f8 = *(float *)(DAT_101914a0 + 0xb60) - _DAT_1018bda8;
          _DAT_101894fc = *(float *)(DAT_101914a0 + 0xb64) - _DAT_1018bdac;
          _DAT_10189500 = *(float *)(DAT_101914a0 + 0xb68) - _DAT_1018bdb0;
          fStack00000008 = _DAT_101894f8;
          fStack0000000c = _DAT_101894fc;
          fStack00000010 = _DAT_10189500;
          fStack00000018 = _DAT_101894fc;
          fStack0000001c = _DAT_10189500;
          FUN_10050080((float *)&DAT_10189510,(float *)&DAT_101894f8,&DAT_10189480,6.0,'\x01',
                       (float *)0x0,0.0,(float *)0x0);
          FUN_10050000(0x10189510);
          if ((DAT_100d0cb4 & 0x40) != 0) {
            fStack00000024 = _DAT_1018bdac;
            fStack00000028 = _DAT_1018bdb0;
            _DAT_101894f8 = *(float *)(DAT_101914a0 + 0xb78) - _DAT_1018bda8;
            _DAT_101894fc = *(float *)(DAT_101914a0 + 0xb7c) - _DAT_1018bdac;
            _DAT_10189500 = *(float *)(DAT_101914a0 + 0xb80) - _DAT_1018bdb0;
            fStack00000008 = _DAT_101894f8;
            fStack0000000c = _DAT_101894fc;
            fStack00000010 = _DAT_10189500;
            fStack00000018 = _DAT_101894fc;
            fStack0000001c = _DAT_10189500;
            FUN_10050080((float *)&DAT_10189510,(float *)&DAT_101894f8,&DAT_10189480,4.0,'\x01',
                         (float *)0x0,0.0,(float *)0x0);
            FUN_10050000(0x10189510);
          }
          (*(gEngfuncs.pTriAPI)->End)();
          (*(gEngfuncs.pTriAPI)->RenderMode)(0);
        }
      }
    }
  }
  return;
}

/* 1003b750  FUN_1003b750  (832 bytes)
 * undefined FUN_1003b750(void)
 * called by: FUN_1003bad0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003b750(void)

{
  float fVar1;
  char cVar2;
  cl_entity_s *pcVar3;
  float *pfVar4;
  float10 fVar5;
  float10 extraout_ST0;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined4 auStack_8 [2];
  
  if ((DAT_101894dc & 1) == 0) {
    DAT_101894dc = DAT_101894dc | 1;
    FUN_1006af63(0x1003bac0);
  }
  if ((DAT_101894dc & 2) == 0) {
    DAT_101894dc = DAT_101894dc | 2;
    FUN_1006af63(0x1003bab0);
  }
  if ((DAT_101894dc & 4) == 0) {
    DAT_101894dc = DAT_101894dc | 4;
    FUN_1006af63(0x1003baa0);
  }
  if ((DAT_101894dc & 8) == 0) {
    DAT_101894dc = DAT_101894dc | 8;
    FUN_1006af63(0x1003ba90);
  }
  DAT_10189504 = (*gEngfuncs.GetMaxClients)();
  pcVar3 = (*gEngfuncs.GetLocalPlayer)();
  DAT_10189564 = pcVar3->index;
  DAT_10189490 = 0;
  if (-1 < DAT_10189504) {
    do {
      if ((((DAT_10189490 != DAT_10189564) &&
           ((*(byte *)((int)&DAT_1018d128 + DAT_10189490 * 2) & 4) != 0)) &&
          (DAT_101894e0 = (*gEngfuncs.GetEntityByIndex)(DAT_10189490),
          DAT_101894e0 != (cl_entity_s *)0x0)) &&
         ((DAT_101894e0->player != 0 && (cVar2 = FUN_100579a0(DAT_10189490), cVar2 != '\0')))) {
        FUN_10068e20(DAT_10189490,(undefined4 *)&DAT_10189578,(float *)&DAT_10189568);
        (*gEngfuncs.pfnAngleVectors)
                  ((float *)&DAT_10189568,(float *)&DAT_101894e8,(float *)0x0,(float *)0x0);
        (*(gEngfuncs.pEventAPI)->EV_PushPMStates)();
        (*(gEngfuncs.pEventAPI)->EV_SetUpPlayerPrediction)(0,1);
        (*(gEngfuncs.pEventAPI)->EV_SetSolidPlayers)(DAT_101894e0->index + -1);
        (*(gEngfuncs.pEventAPI)->EV_SetTraceHull)(2);
        fStack_30 = _DAT_101894e8 * 1024.0;
        fStack_2c = _DAT_101894ec * 1024.0;
        fStack_28 = _DAT_101894f0 * 1024.0;
        FUN_10002610(&fStack_24,&fStack_30);
        fStack_18 = _DAT_10189578 + fStack_24;
        fStack_14 = _DAT_1018957c + fStack_20;
        fStack_10 = _DAT_10189580 + fStack_1c;
        FUN_10002610(&stack0x0000000c,&fStack_18);
        (*(gEngfuncs.pEventAPI)->EV_PlayerTrace)
                  ((float *)&DAT_10189578,(float *)&stack0x0000000c,2,DAT_101894e0->index,
                   (pmtrace_s *)&DAT_10189498);
        fStack_24 = 2.5978002e-29;
        (*(gEngfuncs.pEventAPI)->EV_PopPMStates)();
        if (_DAT_101894a8 != 1.0) {
          pfVar4 = (float *)FUN_10057270(auStack_8);
          fStack_20 = DAT_101894ac - *pfVar4;
          fStack_28 = _DAT_101894b0 - pfVar4[1];
          fStack_24 = _DAT_101894b4 - pfVar4[2];
          fStack_1c = fStack_28;
          fStack_18 = fStack_24;
          fVar5 = FUN_10058390(&fStack_20);
          _DAT_10189560 = (float)fVar5;
          DAT_1018950c = (dlight_s *)0x0;
          DAT_1018950c = (*(gEngfuncs.pEfxAPI)->CL_AllocDlight)(DAT_101894e0->index + 3);
          if (DAT_1018950c != (dlight_s *)0x0) {
            DAT_1018950c->origin[0] = DAT_101894ac;
            DAT_1018950c->origin[1] = _DAT_101894b0;
            DAT_1018950c->origin[2] = _DAT_101894b4;
            fVar1 = 1024.0 - _DAT_10189560;
            if (120.0 <= fVar1) {
              fVar1 = 120.0;
            }
            DAT_1018950c->radius = fVar1;
            (DAT_1018950c->color).r = 0xff;
            (DAT_1018950c->color).g = 0xff;
            (DAT_1018950c->color).b = 0xff;
            (*gEngfuncs.GetClientTime)();
            DAT_1018950c->die = (float)(extraout_ST0 + (float10)0.1);
          }
        }
      }
      DAT_10189490 = DAT_10189490 + 1;
    } while (DAT_10189490 <= DAT_10189504);
  }
  return;
}

/* 1003bad0  FUN_1003bad0  (10 bytes)
 * undefined FUN_1003bad0(void)
 * called by: FUN_10056dd0
 */
void FUN_1003bad0(void)

{
  FUN_1003b250();
  FUN_1003b750();
  return;
}

/* 1003bb00  FUN_1003bb00  (5758 bytes)
 * undefined FUN_1003bb00(void)
 * called by: FUN_1003de00
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003bb00(void)

{
  _func_422 **pp_Var1;
  _func_399 **pp_Var2;
  int ignore_pe;
  cl_entity_s *pcVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float *start;
  int iVar6;
  int iVar7;
  model_s *pSpriteModel;
  int unaff_EBP;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar8;
  longlong lVar9;
  float unaff_retaddr;
  float in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  undefined4 in_stack_00000010;
  pmtrace_s *tr;
  float in_stack_ffffff6c;
  float in_stack_ffffff70;
  float in_stack_ffffff74;
  float in_stack_ffffff78;
  float in_stack_ffffff7c;
  float in_stack_ffffff80;
  undefined4 *in_stack_ffffff84;
  float in_stack_ffffff88;
  float fStack_74;
  float in_stack_ffffff90;
  float fVar10;
  float in_stack_ffffff94;
  float fVar11;
  float in_stack_ffffff98;
  float in_stack_ffffff9c;
  float in_stack_ffffffa0;
  float in_stack_ffffffa4;
  float in_stack_ffffffa8;
  float in_stack_ffffffac;
  float in_stack_ffffffb0;
  float in_stack_ffffffb4;
  float fVar12;
  float in_stack_ffffffb8;
  float in_stack_ffffffbc;
  float fVar13;
  float in_stack_ffffffc0;
  float in_stack_ffffffc4;
  float in_stack_ffffffc8;
  float in_stack_ffffffcc;
  float in_stack_ffffffd0;
  float in_stack_ffffffd4;
  float in_stack_ffffffd8;
  float in_stack_ffffffdc;
  float fVar14;
  float in_stack_ffffffe0;
  float fVar15;
  float in_stack_ffffffe4;
  float in_stack_ffffffe8;
  float in_stack_ffffffec;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if ((DAT_101897d8 & 1) == 0) {
    DAT_101897d8 = DAT_101897d8 | 1;
    FUN_1006af63(0x1003d1f0);
  }
  if ((DAT_101897d8 & 2) == 0) {
    DAT_101897d8 = DAT_101897d8 | 2;
    FUN_1006af63(0x1003d1e0);
  }
  if ((DAT_101897d8 & 4) == 0) {
    DAT_101897d8 = DAT_101897d8 | 4;
    FUN_1006af63(0x1003d1d0);
  }
  if ((DAT_101897d8 & 8) == 0) {
    DAT_101897d8 = DAT_101897d8 | 8;
    FUN_1006af63(0x1003d1c0);
  }
  if ((DAT_101897d8 & 0x10) == 0) {
    DAT_101897d8 = DAT_101897d8 | 0x10;
    FUN_1006af63(0x1003d1b0);
  }
  if ((DAT_101897d8 & 0x20) == 0) {
    DAT_101897d8 = DAT_101897d8 | 0x20;
    FUN_100025e0(&DAT_10189800,0xc,4,&LAB_10017e90);
    FUN_1006af63(0x1003d1a0);
  }
  if ((DAT_101897d8 & 0x40) == 0) {
    DAT_101897d8 = DAT_101897d8 | 0x40;
    FUN_1006af63(0x1003d190);
  }
  if ((DAT_101897d8 & 0x80) == 0) {
    DAT_101897d8 = DAT_101897d8 | 0x80;
    FUN_1006af63(0x1003d180);
  }
  if ((DAT_100d0cb4 & 2) == 0) {
    return;
  }
  pcVar3 = (*gEngfuncs.GetLocalPlayer)();
  ignore_pe = pcVar3->index;
  (*(gEngfuncs.pEventAPI)->EV_PushPMStates)();
  (*(gEngfuncs.pEventAPI)->EV_SetUpPlayerPrediction)(0,1);
  (*(gEngfuncs.pEventAPI)->EV_SetSolidPlayers)(ignore_pe + -1);
  (*gEngfuncs.pfnRandomFloat)(-1.0,1.0);
  _DAT_101897e8 = (float)extraout_ST0;
  (*gEngfuncs.pfnRandomFloat)(-1.0,1.0);
  _DAT_1018997c = (float)extraout_ST0_00;
  if ((DAT_101914a0 == 0) || (*(int *)(DAT_100df5b0 + 0xc) == 0x3f800000)) {
    _DAT_101897c8 = DAT_1018bd90;
    _DAT_101897cc = DAT_1018bd94;
    _DAT_101897d0 = DAT_1018bd98;
  }
  else {
    puVar4 = (undefined4 *)
             FUN_10009190(&stack0xffffffbc,
                          *(float *)(DAT_101914a0 + 0xb6c) - *(float *)(DAT_101914a0 + 0xb60),
                          *(float *)(DAT_101914a0 + 0xb70) - *(float *)(DAT_101914a0 + 0xb64),
                          *(float *)(DAT_101914a0 + 0xb74) - *(float *)(DAT_101914a0 + 0xb68));
    FUN_10002610(&stack0xffffff80,puVar4);
    fVar8 = FUN_1003d5c0((float *)&stack0xffffff80);
    if (fVar8 == (float10)0.0) {
      puVar4 = (undefined4 *)FUN_1001fb70(&stack0xffffffc8,0,0,1);
    }
    else {
      fVar8 = (float10)1.0 / fVar8;
      puVar4 = (undefined4 *)
               FUN_10009190(&stack0xffffff68,(float)((float10)in_stack_ffffff80 * fVar8),
                            (float)((float10)(float)in_stack_ffffff84 * fVar8),
                            (float)((float10)in_stack_ffffff88 * fVar8));
    }
    FUN_10002610(&fStack_74,puVar4);
    _DAT_101897d0 = in_stack_ffffff94;
    _DAT_101897c8 = _DAT_101897e8 * 0.003 + fStack_74;
    _DAT_101897cc = _DAT_1018997c * 0.003 + in_stack_ffffff90;
    in_stack_ffffff94 = _DAT_101897d0;
  }
  if ((DAT_100d0cb4 & 0x40) == 0) {
    (*(gEngfuncs.pEventAPI)->EV_SetTraceHull)(2);
    puVar4 = (undefined4 *)
             FUN_10009190(&stack0xffffff9c,_DAT_101897c8 * 8192.0,_DAT_101897cc * 8192.0,
                          _DAT_101897d0 * 8192.0);
    FUN_10002610(&stack0xffffff6c,puVar4);
    pfVar5 = (float *)FUN_10057270((undefined4 *)&stack0xffffffa8);
    puVar4 = (undefined4 *)
             FUN_10009190(&stack0xffffffb4,in_stack_ffffff6c + *pfVar5,in_stack_ffffff70 + pfVar5[1]
                          ,in_stack_ffffff74 + pfVar5[2]);
    FUN_10002610(&stack0xffffffc0,puVar4);
    tr = (pmtrace_s *)&DAT_101898c8;
    pfVar5 = (float *)&stack0xffffffc0;
    iVar7 = 2;
    pp_Var1 = &(gEngfuncs.pEventAPI)->EV_PlayerTrace;
    iVar6 = ignore_pe;
    start = (float *)FUN_10057270((undefined4 *)&stack0xffffffe4);
    (**pp_Var1)(start,pfVar5,iVar7,iVar6,tr);
    pfVar5 = (float *)FUN_10057270((undefined4 *)&stack0xffffffb0);
    puVar4 = (undefined4 *)
             FUN_10009190(&stack0xffffffbc,_DAT_101898dc - *pfVar5,_DAT_101898e0 - pfVar5[1],
                          _DAT_101898e4 - pfVar5[2]);
    FUN_10002610(&stack0xffffffa4,puVar4);
    DAT_101897dc = SQRT(in_stack_ffffffa8 * in_stack_ffffffa8 +
                        in_stack_ffffffac * in_stack_ffffffac +
                        in_stack_ffffffa4 * in_stack_ffffffa4);
    DAT_1018987c = 0.0;
  }
  else {
    if ((DAT_101914a0 == 0) || (*(int *)(DAT_100df5b0 + 0xc) == 0x3f800000)) {
      _DAT_10189970 = DAT_1018bd90;
      _DAT_10189974 = DAT_1018bd94;
      _DAT_10189978 = DAT_1018bd98;
    }
    else {
      puVar4 = (undefined4 *)
               FUN_10009190(&stack0xffffffbc,
                            *(float *)(DAT_101914a0 + 0xb84) - *(float *)(DAT_101914a0 + 0xb78),
                            *(float *)(DAT_101914a0 + 0xb88) - *(float *)(DAT_101914a0 + 0xb7c),
                            *(float *)(DAT_101914a0 + 0xb8c) - *(float *)(DAT_101914a0 + 0xb80));
      FUN_10002610(&stack0xffffff80,puVar4);
      fVar8 = FUN_1003d5c0((float *)&stack0xffffff80);
      if (fVar8 == (float10)0.0) {
        puVar4 = (undefined4 *)FUN_1001fb70(&stack0xffffffc8,0,0,1);
      }
      else {
        fVar8 = (float10)1.0 / fVar8;
        puVar4 = (undefined4 *)
                 FUN_10009190(&stack0xffffff68,(float)((float10)in_stack_ffffff80 * fVar8),
                              (float)((float10)(float)in_stack_ffffff84 * fVar8),
                              (float)((float10)in_stack_ffffff88 * fVar8));
      }
      FUN_10002610(&fStack_74,puVar4);
      _DAT_10189978 = in_stack_ffffff94;
      _DAT_10189970 = _DAT_1018997c * 0.003 + fStack_74;
      _DAT_10189974 = _DAT_101897e8 * 0.003 + in_stack_ffffff90;
      in_stack_ffffff94 = _DAT_10189978;
    }
    (*(gEngfuncs.pEventAPI)->EV_SetTraceHull)(2);
    puVar4 = (undefined4 *)
             FUN_10009190(&fStack_4,_DAT_1018bd9c * 4.0,_DAT_1018bda0 * 4.0,_DAT_1018bda4 * 4.0);
    FUN_10002610(&stack0xffffff90,puVar4);
    puVar4 = (undefined4 *)
             FUN_10009190(&stack0x00000014,_DAT_101897c8 * 8192.0,_DAT_101897cc * 8192.0,
                          _DAT_101897d0 * 8192.0);
    FUN_10002610(&stack0xffffff84,puVar4);
    pfVar5 = (float *)FUN_10057270(&stack0x00000008);
    puVar4 = (undefined4 *)
             FUN_10009190(&fStack_10,(float)in_stack_ffffff84 + *pfVar5,
                          in_stack_ffffff88 + pfVar5[1],fStack_74 + pfVar5[2]);
    FUN_10002610(&stack0xffffff78,puVar4);
    puVar4 = (undefined4 *)
             FUN_10009190(&stack0xffffffe4,in_stack_ffffff90 + in_stack_ffffff78,
                          in_stack_ffffff94 + in_stack_ffffff7c,
                          in_stack_ffffff98 + in_stack_ffffff80);
    FUN_10002610(&stack0xffffffcc,puVar4);
    puVar4 = (undefined4 *)
             FUN_10009190(&stack0xffffffb4,_DAT_1018bd9c * 4.0,_DAT_1018bda0 * 4.0,
                          _DAT_1018bda4 * 4.0);
    FUN_10002610(&stack0xffffff6c,puVar4);
    pfVar5 = (float *)FUN_10057270((undefined4 *)&stack0xffffffa8);
    puVar4 = (undefined4 *)
             FUN_10009190(&stack0xffffff9c,in_stack_ffffff6c + *pfVar5,in_stack_ffffff70 + pfVar5[1]
                          ,in_stack_ffffff74 + pfVar5[2]);
    FUN_10002610(&stack0xffffffc0,puVar4);
    (*(gEngfuncs.pEventAPI)->EV_PlayerTrace)
              ((float *)&stack0xffffffc0,(float *)&stack0xffffffcc,2,ignore_pe,
               (pmtrace_s *)&DAT_101898c8);
    puVar4 = (undefined4 *)
             FUN_10009190(&stack0xffffffb0,_DAT_1018bd9c * -4.0,_DAT_1018bda0 * -4.0,
                          _DAT_1018bda4 * -4.0);
    FUN_10002610(&fStack_74,puVar4);
    puVar4 = (undefined4 *)
             FUN_10009190(&stack0xffffffbc,_DAT_10189970 * 8192.0,_DAT_10189974 * 8192.0,
                          _DAT_10189978 * 8192.0);
    FUN_10002610(&stack0xffffff80,puVar4);
    pfVar5 = (float *)FUN_10057270((undefined4 *)&stack0xffffffc8);
    puVar4 = (undefined4 *)
             FUN_10009190(&fStack_8,in_stack_ffffff80 + *pfVar5,(float)in_stack_ffffff84 + pfVar5[1]
                          ,in_stack_ffffff88 + pfVar5[2]);
    FUN_10002610(&stack0xffffff98,puVar4);
    puVar4 = (undefined4 *)
             FUN_10009190(&stack0x00000004,fStack_74 + in_stack_ffffff98,
                          in_stack_ffffff90 + in_stack_ffffff9c,
                          in_stack_ffffff94 + in_stack_ffffffa0);
    FUN_10002610(&stack0xffffffd4,puVar4);
    puVar4 = (undefined4 *)
             FUN_10009190(&stack0x0000001c,_DAT_1018bd9c * -4.0,_DAT_1018bda0 * -4.0,
                          _DAT_1018bda4 * -4.0);
    FUN_10002610(&stack0xffffffa4,puVar4);
    pfVar5 = (float *)FUN_10057270((undefined4 *)&stack0x00000028);
    puVar4 = (undefined4 *)
             FUN_10009190(&stack0x00000010,in_stack_ffffffa4 + *pfVar5,in_stack_ffffffa8 + pfVar5[1]
                          ,in_stack_ffffffac + pfVar5[2]);
    FUN_10002610(&stack0xffffffe0,puVar4);
    (*(gEngfuncs.pEventAPI)->EV_PlayerTrace)
              ((float *)&stack0xffffffe0,(float *)&stack0xffffffd4,2,ignore_pe,
               (pmtrace_s *)&DAT_10189880);
    pfVar5 = (float *)FUN_10057270((undefined4 *)&stack0xffffffc4);
    puVar4 = (undefined4 *)
             FUN_10009190(&stack0xffffffd0,_DAT_101898dc - *pfVar5,_DAT_101898e0 - pfVar5[1],
                          _DAT_101898e4 - pfVar5[2]);
    FUN_10002610(&stack0xffffffb8,puVar4);
    DAT_101897dc = SQRT(in_stack_ffffffb8 * in_stack_ffffffb8 +
                        in_stack_ffffffbc * in_stack_ffffffbc +
                        in_stack_ffffffc0 * in_stack_ffffffc0);
    pfVar5 = (float *)FUN_10057270((undefined4 *)&stack0xffffffc4);
    in_stack_ffffff84 =
         (undefined4 *)
         FUN_10009190(&stack0xffffffd0,_DAT_10189894 - *pfVar5,_DAT_10189898 - pfVar5[1],
                      _DAT_1018989c - pfVar5[2]);
    in_stack_ffffff80 = 2.5985414e-29;
    FUN_10002610(&stack0xffffffb8,in_stack_ffffff84);
    DAT_1018987c = SQRT(in_stack_ffffffbc * in_stack_ffffffbc +
                        in_stack_ffffffc0 * in_stack_ffffffc0 +
                        in_stack_ffffffb8 * in_stack_ffffffb8);
  }
  (*(gEngfuncs.pEventAPI)->EV_PopPMStates)();
  puVar4 = (undefined4 *)
           FUN_10009190(&stack0xffffffb0,DAT_1018bd90 + DAT_1018bd90,DAT_1018bd94 + DAT_1018bd94,
                        DAT_1018bd98 + DAT_1018bd98);
  FUN_10002610(&stack0xffffff80,puVar4);
  puVar4 = (undefined4 *)
           FUN_10009190(&stack0xffffffbc,_DAT_101898dc - in_stack_ffffff80,
                        _DAT_101898e0 - (float)in_stack_ffffff84,_DAT_101898e4 - in_stack_ffffff88);
  FUN_10002610(&fStack_74,puVar4);
  _DAT_101899a8 = in_stack_ffffff94;
  _DAT_101899a4 = in_stack_ffffff90;
  _DAT_101899a0 = fStack_74;
  fVar10 = _DAT_101899a4;
  fVar11 = _DAT_101899a8;
  FUN_100579c0(&DAT_101899a0,(undefined4 *)&DAT_101895d4,(undefined4 *)&DAT_10189878);
  _DAT_100d0cbc = (float)_DAT_101895d4;
  _DAT_100d0cc4 = DAT_101897dc;
  _DAT_100d0cc0 = (float)_DAT_10189878;
  if ((DAT_100d0cb4 & 0x40) != 0) {
    puVar4 = (undefined4 *)
             FUN_10009190(&stack0xffffffb0,DAT_1018bd90 + DAT_1018bd90,DAT_1018bd94 + DAT_1018bd94,
                          DAT_1018bd98 + DAT_1018bd98);
    FUN_10002610(&stack0xffffff80,puVar4);
    puVar4 = (undefined4 *)
             FUN_10009190(&stack0xffffffbc,_DAT_10189894 - in_stack_ffffff80,
                          _DAT_10189898 - (float)in_stack_ffffff84,_DAT_1018989c - in_stack_ffffff88
                         );
    _DAT_101899a4 = fVar10;
    _DAT_101899a8 = fVar11;
    FUN_10002610(&fStack_74,puVar4);
    _DAT_101899a0 = fStack_74;
    FUN_100579c0(&DAT_101899a0,(undefined4 *)&DAT_101895d4,(undefined4 *)&DAT_10189878);
    _DAT_100d0cc8 = (float)_DAT_101895d4;
    _DAT_100d0cd0 = DAT_1018987c;
    _DAT_100d0ccc = (float)_DAT_10189878;
  }
  if (DAT_101914a0 == 0) goto LAB_1003d15f;
  iVar6 = FUN_100509d0(&DAT_1018bde8,(byte_conflict *)s_sprites_laserbeamanim_spr_10095354,5);
  if (iVar6 == -1) {
    DAT_101899b0 = iVar6;
    return;
  }
  _DAT_101899b4 = DAT_100963e8 * DAT_10191478 * 20.0 + _DAT_101899b4;
  DAT_101899b0 = iVar6;
  lVar9 = __ftol();
  if ((int)lVar9 < 0) {
LAB_1003c672:
    _DAT_101899b4 = 0.0;
  }
  else {
    iVar7 = FUN_10050980(&DAT_1018bde8,iVar6);
    lVar9 = __ftol();
    iVar6 = DAT_101899b0;
    if (iVar7 + -1 < (int)lVar9) goto LAB_1003c672;
  }
  pp_Var2 = &(gEngfuncs.pTriAPI)->SpriteTexture;
  __ftol();
  pSpriteModel = (*gEngfuncs.GetSpritePointer)(*(HSPRITE *)(&DAT_1018be14 + iVar6 * 0x28));
  iVar6 = (**pp_Var2)(pSpriteModel,unaff_EBP);
  if (iVar6 == 0) {
    return;
  }
  fStack_74 = _DAT_1018bda8;
  _DAT_10189860 = *(float *)(DAT_101914a0 + 0xb60);
  _DAT_10189864 = *(float *)(DAT_101914a0 + 0xb64);
  _DAT_10189868 = *(float *)(DAT_101914a0 + 0xb68);
  fVar10 = _DAT_1018bdb0;
  FUN_10002610(&stack0xffffff98,&fStack_74);
  in_stack_ffffff98 = _DAT_10189860 - in_stack_ffffff98;
  in_stack_ffffff9c = _DAT_10189864 - in_stack_ffffff9c;
  in_stack_ffffffa0 = _DAT_10189868 - in_stack_ffffffa0;
  FUN_10002610(&stack0xffffffb0,(undefined4 *)&stack0xffffffa4);
  _DAT_10189868 = in_stack_ffffffb8;
  _DAT_10189864 = in_stack_ffffffb4;
  _DAT_10189860 = in_stack_ffffffb0;
  fVar11 = _DAT_10189860;
  fVar12 = _DAT_10189864;
  _DAT_101899a4 = _DAT_10189868;
  (*(gEngfuncs.pTriAPI)->RenderMode)(5);
  (*(gEngfuncs.pTriAPI)->CullFace)(TRI_NONE);
  (*(gEngfuncs.pTriAPI)->Begin)(2);
  FUN_100582f0((int)*(char *)((int)&DAT_1018d128 + ignore_pe * 2 + 1),&stack0x00000004,
               &stack0x00000008,&stack0x0000000c);
  (*(gEngfuncs.pTriAPI)->Color4f)
            ((float)(int)in_stack_00000004 * fVar10 * 0.003921569,
             (float)in_stack_00000008 * fVar10 * 0.003921569,
             (float)in_stack_0000000c * fVar10 * 0.003921569,1.0);
  fStack_74 = 2.5989528e-29;
  puVar4 = (undefined4 *)
           FUN_10009190(&stack0xffffffd8,_DAT_101897c8 + _DAT_101897c8,_DAT_101897cc + _DAT_101897cc
                        ,_DAT_101897d0 + _DAT_101897d0);
  FUN_10002610(&stack0xffffffa8,puVar4);
  fStack_74 = 2.598971e-29;
  puVar4 = (undefined4 *)
           FUN_10009190(&stack0xffffffe4,_DAT_101898dc - in_stack_ffffff9c,
                        _DAT_101898e0 - in_stack_ffffffa0,_DAT_101898e4 - fVar11);
  _DAT_101899a8 = in_stack_ffffffbc;
  FUN_10002610(&stack0xffffffb4,puVar4);
  _DAT_101899a0 = fVar12;
  fStack_74 = 2.599e-29;
  fVar10 = _DAT_101899a0;
  fVar12 = _DAT_101899a4;
  fVar13 = _DAT_101899a8;
  puVar4 = (undefined4 *)
           FUN_10009190(&stack0xffffffd8,_DAT_1018bda8 * 0.5,_DAT_1018bdac * 0.5,_DAT_1018bdb0 * 0.5
                       );
  FUN_10002610(&stack0xffffffa8,puVar4);
  fStack_74 = 2.5990166e-29;
  puVar4 = (undefined4 *)
           FUN_10009190(&stack0xffffffe4,in_stack_ffffff9c * in_stack_ffffff98,
                        in_stack_ffffffa0 * in_stack_ffffff98,fVar11 * in_stack_ffffff98);
  FUN_10002610(&stack0xffffffb4,puVar4);
  fStack_74 = 2.599035e-29;
  puVar4 = (undefined4 *)
           FUN_10009190(&fStack_10,_DAT_101899a0 - fVar10,_DAT_101899a4 - fVar12,
                        _DAT_101899a8 - fVar13);
  FUN_10002610(&stack0xffffffc0,puVar4);
  (*(gEngfuncs.pTriAPI)->TexCoord2f)(0.0,0.0);
  (*(gEngfuncs.pTriAPI)->Vertex3fv)((float *)&DAT_10189990);
  puVar4 = (undefined4 *)
           FUN_10009190(&stack0xffffffe4,_DAT_1018bda8 * 0.5,_DAT_1018bdac * 0.5,_DAT_1018bdb0 * 0.5
                       );
  FUN_10002610(&stack0xffffffb4,puVar4);
  puVar4 = (undefined4 *)FUN_10009190(&fStack_10,fVar10 * fVar11,fVar12 * fVar11,fVar13 * fVar11);
  FUN_10002610(&stack0xffffffc0,puVar4);
  puVar4 = (undefined4 *)
           FUN_10009190(&fStack_4,in_stack_ffffffc0 + _DAT_101899a0,
                        _DAT_101899a4 + in_stack_ffffffc4,_DAT_101899a8 + in_stack_ffffffc8);
  FUN_10002610(&stack0xffffffcc,puVar4);
  (*(gEngfuncs.pTriAPI)->TexCoord2f)(1.0,0.0);
  (*(gEngfuncs.pTriAPI)->Vertex3fv)((float *)&DAT_10189990);
  _DAT_10189990 = in_stack_ffffffe4;
  _DAT_10189994 = in_stack_ffffffe8;
  _DAT_10189998 = in_stack_ffffffec;
  puVar4 = (undefined4 *)
           FUN_10009190(&fStack_10,_DAT_1018bda8 * 0.5,_DAT_1018bdac * 0.5,_DAT_1018bdb0 * 0.5);
  FUN_10002610(&stack0xffffffc0,puVar4);
  puVar4 = (undefined4 *)
           FUN_10009190(&fStack_4,in_stack_ffffffc0 * fVar13,in_stack_ffffffc4 * fVar13,
                        in_stack_ffffffc8 * fVar13);
  FUN_10002610(&stack0xffffffcc,puVar4);
  puVar4 = (undefined4 *)
           FUN_10009190(&stack0x00000008,in_stack_ffffffcc + _DAT_10189860,
                        _DAT_10189864 + in_stack_ffffffd0,_DAT_10189868 + in_stack_ffffffd4);
  FUN_10002610(&stack0xffffffd8,puVar4);
  (*(gEngfuncs.pTriAPI)->TexCoord2f)(1.0,1.0);
  (*(gEngfuncs.pTriAPI)->Vertex3fv)((float *)&DAT_10189990);
  puVar4 = (undefined4 *)
           FUN_10009190(&fStack_4,_DAT_1018bda8 * 0.5,_DAT_1018bdac * 0.5,_DAT_1018bdb0 * 0.5);
  FUN_10002610(&stack0xffffffcc,puVar4);
  puVar4 = (undefined4 *)
           FUN_10009190(&stack0x00000008,in_stack_ffffffcc * in_stack_ffffffc8,
                        in_stack_ffffffd0 * in_stack_ffffffc8,in_stack_ffffffd4 * in_stack_ffffffc8)
  ;
  FUN_10002610(&stack0xffffffd8,puVar4);
  puVar4 = (undefined4 *)
           FUN_10009190(&stack0x00000014,_DAT_10189860 - in_stack_ffffffd8,
                        _DAT_10189864 - in_stack_ffffffdc,_DAT_10189868 - in_stack_ffffffe0);
  FUN_10002610(&stack0xffffffe4,puVar4);
  fVar10 = _DAT_10189990;
  fVar11 = _DAT_10189994;
  fVar12 = _DAT_10189998;
  (*(gEngfuncs.pTriAPI)->TexCoord2f)(0.0,1.0);
  (*(gEngfuncs.pTriAPI)->Vertex3fv)((float *)&DAT_10189990);
  if ((DAT_100d0cb4 & 0x40) != 0) {
    _DAT_10189860 = *(float *)(DAT_101914a0 + 0xb78);
    _DAT_10189864 = *(float *)(DAT_101914a0 + 0xb7c);
    _DAT_10189868 = *(float *)(DAT_101914a0 + 0xb80);
    fVar13 = _DAT_1018bda8;
    fVar14 = _DAT_1018bdac;
    fVar15 = _DAT_1018bdb0;
    FUN_10002610(&stack0xffffffe4,(undefined4 *)&stack0xffffffd8);
    fStack_10 = _DAT_10189860 - fVar10;
    fStack_c = _DAT_10189864 - fVar11;
    fStack_8 = _DAT_10189868 - fVar12;
    FUN_10002610(&fStack_4,&fStack_10);
    _DAT_10189860 = fStack_4;
    _DAT_10189868 = in_stack_00000004;
    _DAT_10189864 = unaff_retaddr;
    puVar4 = (undefined4 *)
             FUN_10009190(&stack0x00000008,_DAT_10189970 + _DAT_10189970,
                          _DAT_10189974 + _DAT_10189974,_DAT_10189978 + _DAT_10189978);
    FUN_10002610(&stack0xffffffd8,puVar4);
    puVar4 = (undefined4 *)
             FUN_10009190(&stack0x00000014,_DAT_10189894 - fVar13,_DAT_10189898 - fVar14,
                          _DAT_1018989c - fVar15);
    _DAT_101899a0 = fVar10;
    _DAT_101899a4 = fVar11;
    _DAT_101899a8 = fVar12;
    FUN_10002610(&stack0xffffffe4,puVar4);
    fVar10 = _DAT_101899a0;
    fVar11 = _DAT_101899a4;
    fVar12 = _DAT_101899a8;
    puVar4 = (undefined4 *)
             FUN_10009190(&stack0x00000008,_DAT_1018bda8 * 0.5,_DAT_1018bdac * 0.5,
                          _DAT_1018bdb0 * 0.5);
    FUN_10002610(&stack0xffffffd8,puVar4);
    puVar4 = (undefined4 *)
             FUN_10009190(&stack0x00000014,fVar13 * in_stack_ffffffd4,fVar14 * in_stack_ffffffd4,
                          fVar15 * in_stack_ffffffd4);
    FUN_10002610(&stack0xffffffe4,puVar4);
    puVar4 = (undefined4 *)
             FUN_10009190(&stack0x00000020,_DAT_101899a0 - fVar10,_DAT_101899a4 - fVar11,
                          _DAT_101899a8 - fVar12);
    FUN_10002610(&fStack_10,puVar4);
    _DAT_10189990 = fStack_10;
    _DAT_10189994 = fStack_c;
    _DAT_10189998 = fStack_8;
    (*(gEngfuncs.pTriAPI)->TexCoord2f)(0.0,0.0);
    (*(gEngfuncs.pTriAPI)->Vertex3fv)((float *)&DAT_10189990);
    puVar4 = (undefined4 *)
             FUN_10009190(&stack0x00000014,_DAT_1018bda8 * 0.5,_DAT_1018bdac * 0.5,
                          _DAT_1018bdb0 * 0.5);
    FUN_10002610(&stack0xffffffe4,puVar4);
    puVar4 = (undefined4 *)
             FUN_10009190(&stack0x00000020,fVar10 * fVar15,fVar11 * fVar15,fVar12 * fVar15);
    FUN_10002610(&fStack_10,puVar4);
    puVar4 = (undefined4 *)
             FUN_10009190(&stack0x0000002c,fStack_10 + _DAT_101899a0,_DAT_101899a4 + fStack_c,
                          _DAT_101899a8 + fStack_8);
    FUN_10002610(&fStack_4,puVar4);
    _DAT_10189990 = fStack_4;
    _DAT_10189998 = in_stack_00000004;
    (*(gEngfuncs.pTriAPI)->TexCoord2f)(1.0,0.0);
    (*(gEngfuncs.pTriAPI)->Vertex3fv)((float *)&DAT_10189990);
    puVar4 = (undefined4 *)
             FUN_10009190(&stack0x00000020,_DAT_1018bda8 * 0.5,_DAT_1018bdac * 0.5,
                          _DAT_1018bdb0 * 0.5);
    FUN_10002610(&fStack_10,puVar4);
    puVar4 = (undefined4 *)
             FUN_10009190(&stack0x0000002c,fStack_10 * fVar12,fStack_c * fVar12,fStack_8 * fVar12);
    FUN_10002610(&fStack_4,puVar4);
    puVar4 = (undefined4 *)
             FUN_10009190(&stack0x00000038,fStack_4 + _DAT_10189860,_DAT_10189864 + unaff_retaddr,
                          _DAT_10189868 + in_stack_00000004);
    FUN_10002610(&stack0x00000008,puVar4);
    _DAT_10189990 = (float)in_stack_00000008;
    _DAT_10189994 = (float)in_stack_0000000c;
    _DAT_10189998 = (float)in_stack_00000010;
    (*(gEngfuncs.pTriAPI)->TexCoord2f)(1.0,1.0);
    (*(gEngfuncs.pTriAPI)->Vertex3fv)((float *)&DAT_10189990);
    puVar4 = (undefined4 *)
             FUN_10009190(&stack0x0000002c,_DAT_1018bda8 * 0.5,_DAT_1018bdac * 0.5,
                          _DAT_1018bdb0 * 0.5);
    FUN_10002610(&stack0x00000050,puVar4);
    pfVar5 = (float *)FUN_1003d240(&stack0x00000050,(float *)&stack0x00000038,fStack_8);
    pfVar5 = (float *)FUN_1003d200(&DAT_10189860,(float *)&stack0x00000044,pfVar5);
    _DAT_10189990 = *pfVar5;
    _DAT_10189994 = pfVar5[1];
    _DAT_10189998 = pfVar5[2];
    (*(gEngfuncs.pTriAPI)->TexCoord2f)(0.0,1.0);
    (*(gEngfuncs.pTriAPI)->Vertex3fv)((float *)&DAT_10189990);
  }
  fStack_8 = 2.5996446e-29;
  (*(gEngfuncs.pTriAPI)->End)();
  (*(gEngfuncs.pTriAPI)->RenderMode)(0);
LAB_1003d15f:
  lVar9 = __ftol();
  _DAT_100d0cb8 = (int)lVar9;
  return;
}

/* 1003d200  FUN_1003d200  (51 bytes)
 * undefined FUN_1003d200(float * param_1, float * param_2)
 * called by: FUN_1003bb00, FUN_1003dfa0, FUN_1003f090, FUN_10046240, FUN_10050080, FUN_10052720, FUN_10054510, FUN_10057330
 */
void __thiscall FUN_1003d200(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)((int)this + 4);
  fVar2 = param_2[1];
  fVar3 = *(float *)((int)this + 8);
  fVar4 = param_2[2];
  *param_1 = *(float *)this - *param_2;
  param_1[1] = fVar1 - fVar2;
  param_1[2] = fVar3 - fVar4;
  return;
}

/* 1003d240  FUN_1003d240  (51 bytes)
 * undefined FUN_1003d240(float * param_1, float param_2)
 * called by: FUN_1003bb00, FUN_1003d600, FUN_1003dfa0, FUN_1003f090, FUN_10040c20, FUN_100450c0, FUN_10048840, FUN_10050080, FUN_10052720, FUN_10052c80, FUN_10054510, FUN_10057330
 */
void __thiscall FUN_1003d240(void *this,float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)((int)this + 4);
  fVar2 = *(float *)((int)this + 8);
  *param_1 = param_2 * *(float *)this;
  param_1[1] = param_2 * fVar1;
  param_1[2] = param_2 * fVar2;
  return;
}

/* 1003d280  FUN_1003d280  (825 bytes)
 * undefined FUN_1003d280(float param_1, float param_2, float param_3, float * param_4, float param_5, int * param_6, int * param_7, int * param_8)
 * called by: FUN_1003d600
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_1003d280(float param_1,float param_2,float param_3,float *param_4,float param_5,int *param_6,
            int *param_7,int *param_8)

{
  float unaff_retaddr;
  int *in_stack_00000024;
  int *in_stack_00000028;
  float *in_stack_0000002c;
  float fStack00000030;
  float fStack00000034;
  float in_stack_00000038;
  float in_stack_0000003c;
  float in_stack_00000040;
  float in_stack_00000044;
  float in_stack_00000048;
  float in_stack_0000004c;
  float in_stack_00000054;
  float in_stack_fffffff8;
  float in_stack_fffffffc;
  
  if ((DAT_101897e0 & 1) == 0) {
    DAT_101897e0 = DAT_101897e0 | 1;
    FUN_1006af63(0x1003d5f0);
  }
  (*(gEngfuncs.pTriAPI)->RenderMode)(5);
  (*(gEngfuncs.pTriAPI)->CullFace)(TRI_NONE);
  (*(gEngfuncs.pTriAPI)->Begin)(2);
  (*(gEngfuncs.pTriAPI)->Color4f)
            ((float)*in_stack_00000024 * 0.003921569,(float)*in_stack_00000028 * 0.003921569,
             (float)(int)*in_stack_0000002c * 0.003921569,1.0);
  FUN_10002610(&stack0xfffffff8,(undefined4 *)&stack0xffffffec);
  param_1 = *in_stack_0000002c - in_stack_fffffff8;
  param_2 = in_stack_0000002c[1] - in_stack_fffffffc;
  param_3 = in_stack_0000002c[2] - unaff_retaddr;
  FUN_10002610(&param_4,&param_1);
  _DAT_101897f0 = param_4;
  _DAT_101897f4 = param_5;
  _DAT_101897f8 = param_6;
  (*(gEngfuncs.pTriAPI)->TexCoord2f)(0.0,0.0);
  (*(gEngfuncs.pTriAPI)->Vertex3fv)((float *)&DAT_101897f0);
  param_7 = (int *)(_DAT_1018bda8 * in_stack_0000003c);
  param_8 = (int *)(_DAT_1018bdac * in_stack_0000003c);
  in_stack_00000024 = (int *)(_DAT_1018bdb0 * in_stack_0000003c);
  FUN_10002610(&param_4,&param_7);
  param_1 = (float)param_4 + *in_stack_0000002c;
  param_2 = param_5 + in_stack_0000002c[1];
  param_3 = (float)param_6 + in_stack_0000002c[2];
  FUN_10002610(&stack0xfffffff8,&param_1);
  (*(gEngfuncs.pTriAPI)->TexCoord2f)(1.0,0.0);
  (*(gEngfuncs.pTriAPI)->Vertex3fv)((float *)&DAT_101897f0);
  in_stack_00000028 = (int *)(_DAT_1018bda8 * in_stack_00000048);
  in_stack_0000002c = (float *)(_DAT_1018bdac * in_stack_00000048);
  fStack00000030 = _DAT_1018bdb0 * in_stack_00000048;
  FUN_10002610(&param_7,&stack0x00000028);
  param_4 = (float *)((float)param_7 + in_stack_00000038);
  param_5 = in_stack_0000003c + (float)param_8;
  param_6 = (int *)(in_stack_00000040 + (float)in_stack_00000024);
  FUN_10002610(&param_1,&param_4);
  _DAT_101897f0 = (float *)param_1;
  _DAT_101897f4 = param_2;
  _DAT_101897f8 = (int *)param_3;
  (*(gEngfuncs.pTriAPI)->TexCoord2f)(1.0,1.0);
  (*(gEngfuncs.pTriAPI)->Vertex3fv)((float *)&DAT_101897f0);
  fStack00000034 = _DAT_1018bda8 * in_stack_00000054;
  param_2 = (float)&stack0x00000034;
  in_stack_00000038 = _DAT_1018bdac * in_stack_00000054;
  in_stack_0000003c = _DAT_1018bdb0 * in_stack_00000054;
  param_1 = 2.5999434e-29;
  FUN_10002610(&stack0x00000028,(undefined4 *)param_2);
  param_7 = (int *)(in_stack_00000044 - (float)in_stack_00000028);
  param_2 = (float)&param_7;
  param_8 = (int *)(in_stack_00000048 - (float)in_stack_0000002c);
  in_stack_00000024 = (int *)(in_stack_0000004c - fStack00000030);
  param_1 = 2.5999585e-29;
  FUN_10002610(&param_4,(undefined4 *)param_2);
  _DAT_101897f0 = param_4;
  param_2 = 1.0;
  param_1 = 0.0;
  _DAT_101897f4 = param_5;
  _DAT_101897f8 = param_6;
  (*(gEngfuncs.pTriAPI)->TexCoord2f)(0.0,1.0);
  param_2 = (float)&DAT_101897f0;
  param_1 = 2.599976e-29;
  (*(gEngfuncs.pTriAPI)->Vertex3fv)((float *)&DAT_101897f0);
  param_2 = 2.5999786e-29;
  (*(gEngfuncs.pTriAPI)->End)();
  param_2 = 0.0;
  param_1 = 2.5999817e-29;
  (*(gEngfuncs.pTriAPI)->RenderMode)(0);
  return;
}

/* 1003d5c0  FUN_1003d5c0  (33 bytes)
 * float10 FUN_1003d5c0(float * param_1)
 * called by: FUN_1003bb00, FUN_10050080, FUN_10051270, FUN_10052720, FUN_10052c80
 */
float10 __fastcall FUN_1003d5c0(float *param_1)

{
  return SQRT((float10)param_1[2] * (float10)param_1[2] +
              (float10)param_1[1] * (float10)param_1[1] + (float10)*param_1 * (float10)*param_1);
}

/* 1003d600  FUN_1003d600  (1939 bytes)
 * undefined FUN_1003d600(void)
 * called by: FUN_1003de00
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d600(void)

{
  _func_399 **pp_Var1;
  char cVar2;
  cl_entity_s *pcVar3;
  model_s *pmVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  void *this;
  undefined4 *puVar10;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float fVar11;
  float *pfVar12;
  float fVar13;
  int *in_stack_fffffeec;
  int *piVar14;
  int iStack_f4;
  float fStack_f0;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_84;
  float fStack_80;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_58;
  float fStack_54;
  float fStack_44;
  float fStack_40;
  float afStack_3c [3];
  undefined4 auStack_30 [3];
  undefined4 auStack_24 [2];
  float fStack_1c;
  undefined4 auStack_18 [5];
  float fStack_4;
  
  if ((DAT_10189874 & 1) == 0) {
    DAT_10189874 = DAT_10189874 | 1;
    FUN_1006af63(0x1003ddf0);
  }
  if ((DAT_10189874 & 2) == 0) {
    DAT_10189874 = DAT_10189874 | 2;
    FUN_1006af63(0x1003dde0);
  }
  if ((DAT_10189874 & 4) == 0) {
    DAT_10189874 = DAT_10189874 | 4;
    FUN_1006af63(0x1003ddd0);
  }
  if ((DAT_10189874 & 8) == 0) {
    DAT_10189874 = DAT_10189874 | 8;
    FUN_1006af63(0x1003ddc0);
  }
  if ((DAT_10189874 & 0x10) == 0) {
    DAT_10189874 = DAT_10189874 | 0x10;
    FUN_1006af63(0x1003ddb0);
  }
  if ((DAT_10189874 & 0x20) == 0) {
    DAT_10189874 = DAT_10189874 | 0x20;
    FUN_1006af63(0x1003dda0);
  }
  DAT_101895d0 = FUN_100509d0(&DAT_1018bde8,(byte_conflict *)s_sprites_laserdot_spr_100936b0,5);
  if ((DAT_101895d0 != -1) &&
     (DAT_10189630 = FUN_100509d0(&DAT_1018bde8,(byte_conflict *)s_sprites_laserbeam_spr_10093bf8,5)
     , DAT_10189630 != -1)) {
    (*gEngfuncs.pfnRandomFloat)(-1.0,1.0);
    _DAT_1018962c = (float)extraout_ST0;
    (*gEngfuncs.pfnRandomFloat)(-1.0,1.0);
    _DAT_101897d4 = (float)extraout_ST0_00;
    DAT_101897e4 = (*gEngfuncs.GetMaxClients)();
    pcVar3 = (*gEngfuncs.GetLocalPlayer)();
    DAT_10189870 = pcVar3->index;
    DAT_1018986c = 0;
    if (-1 < DAT_101897e4) {
      do {
        if ((((DAT_1018986c != DAT_10189870) &&
             ((*(byte *)((int)&DAT_1018d128 + DAT_1018986c * 2) & 2) != 0)) &&
            (DAT_1018996c = (int)(*gEngfuncs.GetEntityByIndex)(DAT_1018986c),
            (cl_entity_s *)DAT_1018996c != (cl_entity_s *)0x0)) &&
           ((((cl_entity_s *)DAT_1018996c)->player != 0 &&
            (cVar2 = FUN_100579a0(DAT_1018986c), cVar2 != '\0')))) {
          pp_Var1 = &(gEngfuncs.pTriAPI)->SpriteTexture;
          pmVar4 = (*gEngfuncs.GetSpritePointer)(*(HSPRITE *)(&DAT_1018be14 + DAT_101895d0 * 0x28));
          iVar5 = (**pp_Var1)(pmVar4,(int)in_stack_fffffeec);
          if (iVar5 != 0) {
            FUN_10068e20(DAT_1018986c,(undefined4 *)&DAT_10189960,(float *)&DAT_10189980);
            _DAT_10189980 = _DAT_1018962c * 0.05 + _DAT_10189980;
            _DAT_10189984 = _DAT_101897d4 * 0.05 + _DAT_10189984;
            (*gEngfuncs.pfnAngleVectors)
                      ((float *)&DAT_10189980,(float *)&DAT_10189620,(float *)0x0,(float *)0x0);
            pfVar6 = (float *)FUN_10056be0(afStack_3c,DAT_1018986c,1);
            pfVar7 = (float *)FUN_10056be0((undefined4 *)&stack0x00000000,DAT_1018986c,0);
            fStack_f0 = *pfVar6 - *pfVar7;
            iVar5 = FUN_10056be0(auStack_18,DAT_1018986c,1);
            iVar8 = FUN_10056be0((undefined4 *)&stack0x00000018,DAT_1018986c,0);
            fVar11 = *(float *)(iVar5 + 4) - *(float *)(iVar8 + 4);
            iVar5 = FUN_10056be0(auStack_30,DAT_1018986c,1);
            iVar8 = FUN_10056be0(auStack_24,DAT_1018986c,0);
            fVar13 = *(float *)(iVar5 + 8) - *(float *)(iVar8 + 8);
            FUN_10029e40(&fStack_f0);
            iVar5 = DAT_1018986c;
            if (_DAT_10189624 * fVar11 + _DAT_10189628 * fVar13 + _DAT_10189620 * fStack_f0 < 0.7) {
              _DAT_10189620 = fStack_f0;
              _DAT_10189624 = fVar11;
              _DAT_10189628 = fVar13;
            }
            fVar11 = DAT_10191478 * 15.0;
            if (1.0 < fVar11) {
              fVar11 = 1.0;
            }
            fStack_98 = _DAT_10189624 - (float)(&DAT_1018963c)[DAT_1018986c * 3];
            pfVar6 = (float *)(&DAT_10189638 + DAT_1018986c * 3);
            fStack_94 = _DAT_10189628 - (float)(&DAT_10189640)[DAT_1018986c * 3];
            fStack_a8 = (_DAT_10189620 - (float)(&DAT_10189638)[DAT_1018986c * 3]) * fVar11;
            fStack_a4 = fStack_98 * fVar11;
            fStack_44 = fStack_a4 + (float)(&DAT_1018963c)[DAT_1018986c * 3];
            fStack_40 = fVar11 * fStack_94 + (float)(&DAT_10189640)[DAT_1018986c * 3];
            *pfVar6 = fStack_a8 + *pfVar6;
            (&DAT_1018963c)[iVar5 * 3] = fStack_44;
            (&DAT_10189640)[iVar5 * 3] = fStack_40;
            FUN_10029e40(pfVar6);
            (*(gEngfuncs.pEventAPI)->EV_PushPMStates)();
            (*(gEngfuncs.pEventAPI)->EV_SetUpPlayerPrediction)(0,1);
            (*(gEngfuncs.pEventAPI)->EV_SetSolidPlayers)(*(int *)DAT_1018996c + -1);
            (*(gEngfuncs.pEventAPI)->EV_SetTraceHull)(2);
            fStack_58 = (float)(&DAT_1018963c)[DAT_1018986c * 3] * 8192.0;
            fStack_54 = (float)(&DAT_10189640)[DAT_1018986c * 3] * 8192.0;
            fStack_44 = (float)(&DAT_10189638)[DAT_1018986c * 3] * 8192.0 + _DAT_10189960;
            fStack_70 = _DAT_10189964 + fStack_58;
            fStack_6c = _DAT_10189968 + fStack_54;
            fStack_40 = fStack_70;
            afStack_3c[0] = fStack_6c;
            (*(gEngfuncs.pEventAPI)->EV_PlayerTrace)
                      ((float *)&DAT_10189960,&fStack_44,2,*(int *)DAT_1018996c,
                       (pmtrace_s *)&DAT_101895d8);
            (*(gEngfuncs.pEventAPI)->EV_PopPMStates)();
            fStack_98 = (float)(&DAT_1018963c)[DAT_1018986c * 3] +
                        (float)(&DAT_1018963c)[DAT_1018986c * 3];
            fStack_94 = (float)(&DAT_10189640)[DAT_1018986c * 3] +
                        (float)(&DAT_10189640)[DAT_1018986c * 3];
            _DAT_10189850 =
                 _DAT_101895ec -
                 ((float)(&DAT_10189638)[DAT_1018986c * 3] +
                 (float)(&DAT_10189638)[DAT_1018986c * 3]);
            _DAT_10189854 = _DAT_101895f0 - fStack_98;
            _DAT_10189858 = _DAT_101895f4 - fStack_94;
            fStack_a8 = _DAT_10189850;
            fStack_a4 = _DAT_10189854;
            fStack_a0 = _DAT_10189858;
            fStack_68 = _DAT_10189854;
            fStack_64 = _DAT_10189858;
            FUN_100582f0((int)*(char *)((int)&DAT_1018d128 + DAT_1018986c * 2 + 1),&fStack_c0,
                         &fStack_bc,&uStack_b8);
            (*(gEngfuncs.pTriAPI)->RenderMode)(5);
            in_stack_fffffeec = (int *)0x1003dbc8;
            (*(gEngfuncs.pTriAPI)->CullFace)(TRI_NONE);
            (*(gEngfuncs.pTriAPI)->Begin)(2);
            (*(gEngfuncs.pTriAPI)->Color4f)
                      ((float)iStack_b4 * 0.003921569,(float)iStack_b0 * 0.003921569,
                       (float)iStack_ac * 0.003921569,1.0);
            FUN_10050080((float *)&DAT_10189910,(float *)&DAT_10189850,&DAT_10189960,4.0,'\x01',
                         (float *)0x0,0.0,(float *)0x0);
            fStack_f0 = 2.600485e-29;
            FUN_10050000(0x10189910);
            fStack_f0 = 2.6004878e-29;
            (*(gEngfuncs.pTriAPI)->End)();
            (*(gEngfuncs.pTriAPI)->RenderMode)(0);
            pp_Var1 = &(gEngfuncs.pTriAPI)->SpriteTexture;
            pmVar4 = (*gEngfuncs.GetSpritePointer)
                               (*(HSPRITE *)(&DAT_1018be14 + DAT_10189630 * 0x28));
            iVar5 = (**pp_Var1)(pmVar4,(int)in_stack_fffffeec);
            if (iVar5 != 0) {
              fStack_84 = (float)(&DAT_1018963c)[DAT_1018986c * 3] * 16.0;
              fStack_80 = (float)(&DAT_10189640)[DAT_1018986c * 3] * 16.0;
              fStack_c4 = _DAT_10189850 - (float)(&DAT_10189638)[DAT_1018986c * 3] * 16.0;
              fStack_c0 = _DAT_10189854 - fStack_84;
              fStack_bc = _DAT_10189858 - fStack_80;
              piVar14 = (int *)&stack0xffffff14;
              pfVar6 = &fStack_f0;
              in_stack_fffffeec = &iStack_f4;
              pfVar7 = &fStack_c4;
              fVar13 = 0.5;
              fStack_6c = fStack_c0;
              fStack_68 = fStack_bc;
              pfVar9 = (float *)FUN_1003d240(&DAT_10189638 + DAT_1018986c * 3,&fStack_1c,16.0);
              pfVar12 = &fStack_4;
              this = (void *)FUN_10056be0((undefined4 *)&stack0x00000014,DAT_1018986c,0);
              fVar11 = 2.600573e-29;
              puVar10 = (undefined4 *)FUN_10035b10(this,pfVar12,pfVar9);
              FUN_10002610(&stack0xfffffed8,puVar10);
              FUN_1003d280(fVar11,(float)pfVar12,(float)pfVar9,pfVar7,fVar13,in_stack_fffffeec,
                           (int *)pfVar6,piVar14);
            }
          }
        }
        DAT_1018986c = DAT_1018986c + 1;
      } while (DAT_1018986c <= DAT_101897e4);
    }
  }
  return;
}

/* 1003de00  FUN_1003de00  (10 bytes)
 * undefined FUN_1003de00(void)
 * called by: FUN_10056dd0
 */
void FUN_1003de00(void)

{
  FUN_1003bb00();
  FUN_1003d600();
  return;
}

/* 1003de10  FUN_1003de10  (33 bytes)
 * undefined FUN_1003de10(int param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1003de10(int param_1)

{
  _DAT_10189bf4 = FUN_100071c0(*(int *)(param_1 + 0x38));
  FUN_1003f090(param_1,(float)_DAT_10189bf4,'\x01');
  return;
}

/* 1003de40  FUN_1003de40  (79 bytes)
 * undefined FUN_1003de40(int param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1003de40(int param_1)

{
  char cVar1;
  
  _DAT_10189ec8 = FUN_100071c0(*(int *)(param_1 + 0x38));
  cVar1 = *(char *)(_DAT_10189ec8 + 0xd2);
  if ((cVar1 != '\x04') && (cVar1 != '\x05')) {
    if (cVar1 == '\x01') {
      FUN_10040c20(param_1,(float)_DAT_10189ec8);
      return;
    }
    FUN_1003dfa0(param_1,(float)_DAT_10189ec8);
    return;
  }
  FUN_1003f090(param_1,(float)_DAT_10189ec8,'\0');
  return;
}

/* 1003de90  FUN_1003de90  (198 bytes)
 * undefined FUN_1003de90(undefined4 param_1)
 * called by: FUN_1003dfa0, FUN_1003f090, FUN_10040c20
 */
void __cdecl FUN_1003de90(int param_1)

{
  event_api_s *peVar1;
  int iVar2;
  float attenuation;
  char *sample;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar3;
  int unaff_retaddr;
  int in_stack_00000014;
  char in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000028;
  int in_stack_0000002c;
  
  peVar1 = gEngfuncs.pEventAPI;
  if (in_stack_00000018 == '\0') {
    iVar2 = (*gEngfuncs.pfnRandomLong)(-5,5);
    attenuation = (float)(iVar2 + in_stack_00000028);
    FUN_100071f0((uint)*(byte *)(in_stack_0000001c + 8));
    (*gEngfuncs.pfnRandomFloat)(0.92,1.0);
    sample = (char *)(in_stack_0000001c + 0x2c6);
    fVar3 = extraout_ST0_00;
  }
  else {
    iVar2 = (*gEngfuncs.pfnRandomLong)(-5,5);
    attenuation = (float)(iVar2 + in_stack_00000028);
    FUN_100071f0((uint)*(byte *)(in_stack_0000001c + 8));
    (*gEngfuncs.pfnRandomFloat)(0.84,0.92);
    sample = (char *)(in_stack_0000001c + 0x306);
    fVar3 = extraout_ST0;
  }
  (*peVar1->EV_PlaySound)
            (in_stack_00000014,(float *)&stack0x00000018,in_stack_0000002c,sample,(float)fVar3,
             attenuation,unaff_retaddr,param_1);
  return;
}

/* 1003df60  FUN_1003df60  (63 bytes)
 * int FUN_1003df60(int param_1)
 * called by: FUN_1003dfa0, FUN_1003f090, FUN_10040c20, FUN_100425b0, FUN_10042630
 */
int __cdecl FUN_1003df60(int param_1)

{
  int iVar1;
  
  iVar1 = (*(gEngfuncs.pDemoAPI)->IsPlayingback)();
  if (iVar1 != 0) {
    DAT_10189f9d = DAT_100d6078;
  }
  if ((DAT_10189f9d != '\0') && (DAT_10190b18 != 5)) {
    return param_1 + 0x28c;
  }
  return param_1 + 0x252;
}

/* 1003dfa0  FUN_1003dfa0  (4108 bytes)
 * undefined FUN_1003dfa0(int param_1, float param_2)
 * called by: FUN_1003de40
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1003dfa0(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  char cVar3;
  short sVar4;
  float *pfVar5;
  float *pfVar6;
  void *pvVar7;
  undefined4 *puVar8;
  float fVar9;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  uint uVar10;
  float unaff_retaddr;
  float in_stack_0000000c;
  float in_stack_00000010;
  float in_stack_00000014;
  float in_stack_00000018;
  float in_stack_0000001c;
  float in_stack_00000020;
  float in_stack_00000024;
  float in_stack_00000028;
  float in_stack_0000002c;
  float in_stack_00000030;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  char *pcVar20;
  float *pfVar21;
  float *pfVar22;
  float fVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  float in_stack_ffffff60;
  int in_stack_ffffff64;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float afStack_78 [2];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  uint uStack_48;
  float afStack_44 [2];
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if ((DAT_10189f8d & 1) == 0) {
    DAT_10189f8d = DAT_10189f8d | 1;
    FUN_1006af63(0x1003f080);
  }
  if ((DAT_10189f8d & 2) == 0) {
    DAT_10189f8d = DAT_10189f8d | 2;
    FUN_1006af63(0x1003f070);
  }
  if ((DAT_10189f8d & 4) == 0) {
    DAT_10189f8d = DAT_10189f8d | 4;
    FUN_1006af63(0x1003f060);
  }
  if ((DAT_10189f8d & 8) == 0) {
    DAT_10189f8d = DAT_10189f8d | 8;
    FUN_1006af63(0x1003f050);
  }
  if ((DAT_10189f8d & 0x10) == 0) {
    DAT_10189f8d = DAT_10189f8d | 0x10;
    FUN_1006af63(0x1003f040);
  }
  if ((DAT_10189f8d & 0x20) == 0) {
    DAT_10189f8d = DAT_10189f8d | 0x20;
    FUN_1006af63(0x1003f030);
  }
  if ((DAT_10189f8d & 0x40) == 0) {
    DAT_10189f8d = DAT_10189f8d | 0x40;
    FUN_1006af63(0x1003f020);
  }
  if ((DAT_10189f8d & 0x80) == 0) {
    DAT_10189f8d = DAT_10189f8d | 0x80;
    FUN_1006af63(0x1003f010);
  }
  if ((DAT_10189b0c & 1) == 0) {
    DAT_10189b0c = DAT_10189b0c | 1;
    FUN_1006af63(0x1003f000);
  }
  if ((DAT_10189b0c & 2) == 0) {
    DAT_10189b0c = DAT_10189b0c | 2;
    FUN_1006af63(0x1003eff0);
  }
  iVar1 = param_1;
  DAT_10189ce4 = *(float **)(param_1 + 4);
  _DAT_1018a0b8 = *(undefined4 *)(param_1 + 8);
  _DAT_1018a0bc = *(undefined4 *)(param_1 + 0xc);
  _DAT_1018a0c0 = *(undefined4 *)(param_1 + 0x10);
  _DAT_10189da8 = *(undefined4 *)(param_1 + 0x14);
  _DAT_10189dac = *(undefined4 *)(param_1 + 0x18);
  _DAT_10189db0 = *(undefined4 *)(param_1 + 0x1c);
  _DAT_10189ac0 = *(float *)(param_1 + 0x20);
  _DAT_10189ac4 = *(float *)(param_1 + 0x24);
  _DAT_10189ac8 = *(float *)(param_1 + 0x28);
  DAT_10189bdc = *(int *)(param_1 + 0x40);
  (*gEngfuncs.pfnAngleVectors)
            ((float *)&DAT_10189da8,&DAT_1018a030,(float *)&DAT_10189c38,(float *)&DAT_10189b30);
  fVar2 = in_stack_00000018;
  DAT_1018a040 = *(int *)(iVar1 + 0x38);
  DAT_10189d10 = *(uint *)(iVar1 + 0x3c);
  if (*(char *)((int)in_stack_00000018 + 0xe8) == '\0') {
    DAT_10189f7c = 0;
  }
  else {
    DAT_10189f7c = (*(gEngfuncs.pEventAPI)->EV_FindModelIndex)
                             ((char *)((int)in_stack_00000018 + 0xe8));
  }
  uVar10 = 1;
  fStack_68 = 1.4013e-45;
  if (DAT_1018a040 == 0xb) {
    fStack_68 = 2.8026e-45;
    uVar10 = 2;
  }
  if (*(int *)((int)fVar2 + 0xcc) == 0x11) {
    iVar18 = 0x28;
    iVar17 = -0x28;
  }
  else {
    iVar18 = 0x8c;
    iVar17 = 0x78;
  }
  _DAT_10189b18 = (*gEngfuncs.pfnRandomLong)(iVar17,iVar18);
  pfVar21 = (float *)0x64;
  DAT_101899c8 = (*gEngfuncs.pfnRandomLong)(0x32,100);
  if ((DAT_10189d10 & 1) == 0) {
    cVar3 = FUN_100579a0((int)DAT_10189ce4);
    if (cVar3 == '\0') {
      iVar17 = FUN_1001c5e0((int)DAT_10189ce4);
      if (iVar17 == 0) goto LAB_1003e2af;
    }
    pfVar21 = (float *)0xd7;
    pfVar5 = (float *)FUN_1003d240(&DAT_10189b30,&fStack_88,32.0);
    pfVar22 = &fStack_54;
    pfVar6 = (float *)FUN_1003d240(&DAT_1018a030,(float *)&stack0xffffff5c,16.0);
    pvVar7 = (void *)FUN_10035b10(&DAT_1018a0b8,&fStack_94,pfVar6);
    uVar15 = 0x1003e29c;
    puVar8 = (undefined4 *)FUN_10035b10(pvVar7,pfVar22,pfVar5);
    FUN_10002610(&stack0xffffff34,puVar8);
    FUN_10048e60(uVar15,pfVar22,pfVar5);
  }
LAB_1003e2af:
  pfVar22 = (float *)0x1003e2bb;
  pfVar5 = DAT_10189ce4;
  iVar17 = FUN_1001c5e0((int)DAT_10189ce4);
  if (iVar17 != 0) {
    DAT_10189eac = FUN_1003df60((int)fVar2);
    pfVar21 = (float *)DAT_1018a040;
    pfVar22 = (float *)DAT_10189d10;
    DAT_10189ae8 = FUN_10007110(DAT_1018a040,DAT_10189d10);
    if (DAT_10189bdc == 0) {
      pfVar22 = (float *)0x0;
      pfVar21 = (float *)0x1003e30a;
      iVar17 = (*gEngfuncs.pfnRandomLong)(0,2);
      sVar4 = *(short *)(DAT_10189eac + 6 + iVar17 * 2);
    }
    else {
      sVar4 = *(short *)(DAT_10189eac + 0xc);
    }
    pfVar5 = (float *)0x1003e32c;
    (*(gEngfuncs.pEventAPI)->EV_WeaponAnimation)((int)sVar4,DAT_10189ae8);
    iVar17 = CL_IsThirdPerson();
    if (iVar17 == 0) {
      if (DAT_101914a0 == 0) {
        if (DAT_10189f7c != 0) {
          fStack_88 = (float)(DAT_101899c8 + 0x32);
          fStack_8c = (float)(int)fStack_88;
          fStack_94 = fStack_8c * DAT_1018a030;
          fStack_90 = DAT_1018a034 * fStack_8c;
          fStack_8c = DAT_1018a038 * fStack_8c;
          FUN_10002610(&fStack_8,&fStack_94);
          fStack_7c = (float)DAT_101899c8;
          fStack_84 = fStack_7c * _DAT_10189b30;
          fStack_80 = _DAT_10189b34 * fStack_7c;
          fStack_7c = _DAT_10189b38 * fStack_7c;
          FUN_10002610(&param_1,&fStack_84);
          fStack_58 = (float)_DAT_10189b18;
          fStack_60 = fStack_58 * _DAT_10189c38;
          fStack_5c = _DAT_10189c3c * fStack_58;
          fStack_58 = _DAT_10189c40 * fStack_58;
          FUN_10002610(&fStack_54,&fStack_60);
          fStack_14 = fStack_54 + _DAT_10189ac0;
          fStack_10 = _DAT_10189ac4 + fStack_50;
          fStack_c = _DAT_10189ac8 + fStack_4c;
          FUN_10002610(&stack0x00000010,&fStack_14);
          fStack_38 = (float)param_1 + in_stack_00000010;
          fStack_34 = param_2 + in_stack_00000014;
          fStack_30 = in_stack_0000000c + in_stack_00000018;
          FUN_10002610(&fStack_20,&fStack_38);
          fStack_2c = fStack_8 + fStack_20;
          fStack_28 = fStack_4 + fStack_1c;
          fStack_24 = unaff_retaddr + fStack_18;
          FUN_10002610(afStack_78,&fStack_2c);
          pfVar6 = afStack_78;
          pfVar22 = (float *)&DAT_10190b28;
          goto LAB_1003e9e6;
        }
      }
      else {
        fVar28 = 0.0;
        fVar14 = (float)(DAT_10189d10 & 0xffffff01);
        iVar17 = (DAT_10189d10 & 1) << 3;
        fVar25 = 1.26117e-44;
        FUN_10002610(&stack0xffffff44,&DAT_1018a030);
        pfVar6 = afStack_78;
        uVar19 = 0x41200000;
        uVar15 = 0x1003e382;
        fVar9 = fVar2;
        puVar8 = (undefined4 *)FUN_1003efb0(&DAT_10189ac0,pfVar6,10.0);
        FUN_10002610(&stack0xffffff34,puVar8);
        fVar13 = 0.0;
        pfVar11 = afStack_44;
        pfVar12 = DAT_10189ce4;
        puVar8 = (undefined4 *)FUN_10056be0(pfVar11,(int)DAT_10189ce4,0);
        FUN_10002610(&stack0xffffff28,puVar8);
        FUN_100474b0((float)pfVar11,(float)pfVar12,fVar13,uVar15,pfVar6,uVar19,fVar9,(float)pfVar21,
                     (float)pfVar22,(float)pfVar5,fVar25,fVar14,iVar17,fVar28);
        if ((DAT_10189d10 & 1) == 0) {
          fVar29 = 0.0;
          fVar26 = 24.0;
          if (DAT_1018a040 == 0x21) {
            FUN_10002610(&stack0xffffff4c,&DAT_1018a030);
            pfVar21 = afStack_78;
            pfVar22 = (float *)0x41200000;
            fVar13 = 2.6010803e-29;
            puVar8 = (undefined4 *)FUN_1003efb0(&DAT_10189ac0,pfVar21,10.0);
            FUN_10002610(&stack0xffffff40,puVar8);
            FUN_10002610(&stack0xffffff34,(undefined4 *)(DAT_101914a0 + 0xb60));
            iVar17 = 10;
            sVar4 = 5;
            fVar9 = (float)(*gEngfuncs.pfnRandomLong)(5,10);
            fVar28 = 2.24208e-44;
          }
          else {
            FUN_10002610(&stack0xffffff4c,&DAT_1018a030);
            pfVar21 = afStack_78;
            pfVar22 = (float *)0x41200000;
            fVar13 = 2.6011074e-29;
            puVar8 = (undefined4 *)FUN_1003efb0(&DAT_10189ac0,pfVar21,10.0);
            FUN_10002610(&stack0xffffff40,puVar8);
            FUN_10002610(&stack0xffffff34,(undefined4 *)(DAT_101914a0 + 0xb60));
            iVar17 = 0x37;
            sVar4 = 0x2d;
            fVar9 = (float)(*gEngfuncs.pfnRandomLong)(0x2d,0x37);
            fVar28 = 2.24208e-44;
          }
        }
        else {
          fVar29 = 0.0;
          fVar26 = 24.0;
          FUN_10002610(&stack0xffffff4c,&DAT_1018a030);
          pfVar21 = afStack_78;
          fVar13 = 10.0;
          fVar9 = 2.6011366e-29;
          puVar8 = (undefined4 *)FUN_1003efb0(&DAT_10189ac0,pfVar21,10.0);
          FUN_10002610(&stack0xffffff40,puVar8);
          FUN_10002610(&stack0xffffff34,(undefined4 *)(DAT_101914a0 + 0xb60));
          sVar4 = 0x32;
          iVar17 = (*gEngfuncs.pfnRandomLong)(0x32,0x3c);
          FUN_10047130(8,iVar17,(float)puVar8,fVar9,(float)pfVar21,fVar13,(float)pfVar5,fVar25,
                       fVar14,fVar26,fVar29,in_stack_ffffff60,in_stack_ffffff64);
          in_stack_ffffff64 = 1;
          in_stack_ffffff60 = 4.0;
          FUN_10002610(&stack0xffffff54,(undefined4 *)&DAT_10189c38);
          pfVar5 = &fStack_70;
          fVar25 = 10.0;
          pfVar22 = (float *)0x1003e513;
          puVar8 = (undefined4 *)FUN_1003efb0(&DAT_10189ac0,pfVar5,10.0);
          FUN_10002610(&stack0xffffff48,puVar8);
          pfVar21 = (float *)FUN_1003d240(&DAT_1018a030,&fStack_3c,
                                          (float)*(int *)((int)fVar2 + 0x34c));
          puVar8 = (undefined4 *)FUN_1003d200((void *)(DAT_101914a0 + 0xb60),&fStack_8c,pfVar21);
          FUN_10002610(&stack0xffffff3c,puVar8);
          fVar9 = 1.12104e-43;
          fVar28 = 7.00649e-44;
          iVar17 = 0x1003e565;
          fVar13 = (float)(*gEngfuncs.pfnRandomLong)(0x32,0x50);
          puVar8 = (undefined4 *)0x1;
        }
        FUN_10047130(sVar4,iVar17,fVar28,fVar9,(float)puVar8,fVar13,(float)pfVar21,(float)pfVar22,
                     (float)pfVar5,fVar25,fVar14,fVar26,(int)fVar29);
        if (1 < *(int *)((int)fVar2 + 0x24)) {
          fVar28 = 0.0;
          iVar18 = 1;
          uVar15 = 0;
          fVar25 = 0.0;
          pfVar5 = (float *)0x7;
          pfVar21 = (float *)CONCAT22(extraout_var,(short)*(int *)((int)fVar2 + 0x24));
          pfVar22 = (float *)0x3f000000;
          iVar17 = 5;
          pcVar20 = s_sprites_shotgun_pellets_spr_10094d84;
          pfVar6 = afStack_78;
          fVar13 = 3.0;
          fVar14 = 2.6012118e-29;
          puVar8 = (undefined4 *)FUN_1003d240(&DAT_1018a030,pfVar6,3.0);
          FUN_10002610(&stack0xffffff30,puVar8);
          fVar9 = 0.0;
          pfVar11 = afStack_44;
          pfVar12 = DAT_10189ce4;
          puVar8 = (undefined4 *)FUN_10056be0(pfVar11,(int)DAT_10189ce4,0);
          FUN_10002610(&stack0xffffff24,puVar8);
          FUN_10046bd0((float)pfVar11,(float)pfVar12,fVar9,fVar14,(float)pfVar6,fVar13,
                       (byte_conflict *)pcVar20,iVar17,(int)pfVar21,pfVar22,(int)pfVar5,fVar25,
                       uVar15,iVar18,(int)fVar28);
        }
        if (DAT_10189f7c != 0) {
          fStack_88 = (float)(DAT_101899c8 + 0x32);
          fStack_64 = (float)(int)fStack_88;
          fStack_6c = fStack_64 * DAT_1018a030;
          fStack_68 = DAT_1018a034 * fStack_64;
          fStack_64 = DAT_1018a038 * fStack_64;
          FUN_10002610(&param_1,&fStack_6c);
          in_stack_00000024 = (float)DAT_101899c8;
          in_stack_0000001c = in_stack_00000024 * _DAT_10189b30;
          in_stack_00000020 = _DAT_10189b34 * in_stack_00000024;
          in_stack_00000024 = _DAT_10189b38 * in_stack_00000024;
          FUN_10002610(&fStack_8,&stack0x0000001c);
          in_stack_00000030 = (float)_DAT_10189b18;
          in_stack_00000028 = in_stack_00000030 * _DAT_10189c38;
          in_stack_0000002c = _DAT_10189c3c * in_stack_00000030;
          in_stack_00000030 = _DAT_10189c40 * in_stack_00000030;
          FUN_10002610(&fStack_2c,&stack0x00000028);
          fStack_20 = fStack_2c + _DAT_10189ac0;
          fStack_1c = _DAT_10189ac4 + fStack_28;
          fStack_18 = _DAT_10189ac8 + fStack_24;
          FUN_10002610(&fStack_38,&fStack_20);
          in_stack_00000010 = fStack_8 + fStack_38;
          in_stack_00000014 = fStack_4 + fStack_34;
          in_stack_00000018 = unaff_retaddr + fStack_30;
          FUN_10002610(&fStack_14,&stack0x00000010);
          fStack_54 = (float)param_1 + fStack_14;
          fStack_50 = param_2 + fStack_10;
          fStack_4c = in_stack_0000000c + fStack_c;
          FUN_10002610(afStack_44,&fStack_54);
          fStack_58 = (float)*(int *)((int)fVar2 + 0x34c);
          fStack_60 = fStack_58 * DAT_1018a030;
          fStack_5c = DAT_1018a034 * fStack_58;
          fStack_58 = DAT_1018a038 * fStack_58;
          FUN_10002610(&fStack_84,&fStack_60);
          fStack_94 = *(float *)(DAT_101914a0 + 0xb60) - fStack_84;
          fStack_90 = *(float *)(DAT_101914a0 + 0xb64) - fStack_80;
          fStack_8c = *(float *)(DAT_101914a0 + 0xb68) - fStack_7c;
          FUN_10002610(afStack_78,&fStack_94);
          pfVar6 = afStack_44;
          pfVar22 = afStack_78;
LAB_1003e9e6:
          pfVar5 = (float *)&DAT_10189da8;
          pfVar21 = (float *)0x1003e9eb;
          FUN_10056890(pfVar22,(float *)&DAT_10189da8,pfVar6,&DAT_10189ac0,DAT_10189f7c,uVar10);
        }
      }
    }
  }
  iVar17 = CL_IsThirdPerson();
  if (iVar17 == 0) {
    iVar17 = FUN_1001c5e0((int)DAT_10189ce4);
    if (iVar17 != 0) goto LAB_1003eee7;
  }
  cVar3 = FUN_100579a0((int)DAT_10189ce4);
  if (cVar3 != '\0') {
    if ((*(char *)((int)fVar2 + 0x348) == '\x06') || (*(char *)((int)fVar2 + 0x348) == '\a')) {
      fVar9 = 4.2039e-45;
    }
    else {
      fVar9 = 0.0;
    }
    fVar28 = 1.4013e-45;
    fVar13 = (float)(DAT_10189d10 & 0xffffff01);
    iVar17 = (DAT_10189d10 & 1) << 3;
    fVar25 = 1.26117e-44;
    FUN_10002610(&stack0xffffff44,&DAT_1018a030);
    pfVar6 = afStack_78;
    uVar19 = 0x41200000;
    uVar15 = 0x1003ea74;
    fVar14 = fVar2;
    puVar8 = (undefined4 *)FUN_1003efb0(&DAT_10189ac0,pfVar6,10.0);
    FUN_10002610(&stack0xffffff34,puVar8);
    pfVar11 = afStack_44;
    pfVar12 = DAT_10189ce4;
    puVar8 = (undefined4 *)FUN_10056be0(pfVar11,(int)DAT_10189ce4,(uint)fVar9);
    FUN_10002610(&stack0xffffff28,puVar8);
    FUN_100474b0((float)pfVar11,(float)pfVar12,fVar9,uVar15,pfVar6,uVar19,fVar14,(float)pfVar21,
                 (float)pfVar22,(float)pfVar5,fVar25,fVar13,iVar17,fVar28);
    if ((DAT_10189d10 & 1) == 0) {
      cVar3 = *(char *)((int)fVar2 + 0x348);
      if (DAT_1018a040 == 0x21) {
        if ((cVar3 == '\x06') || (cVar3 == '\a')) {
          fVar28 = 4.2039e-45;
        }
        else {
          fVar28 = 0.0;
        }
        fVar29 = 0.0;
        fVar26 = 24.0;
        FUN_10002610(&stack0xffffff4c,&DAT_1018a030);
        pfVar21 = afStack_78;
        fVar23 = 10.0;
        fVar14 = 2.6016217e-29;
        puVar8 = (undefined4 *)FUN_1003efb0(&DAT_10189ac0,pfVar21,10.0);
        FUN_10002610(&stack0xffffff40,puVar8);
        puVar8 = (undefined4 *)FUN_10056be0(afStack_44,(int)DAT_10189ce4,(uint)fVar28);
        FUN_10002610(&stack0xffffff34,puVar8);
        iVar17 = 10;
        sVar4 = 5;
        fVar9 = (float)(*gEngfuncs.pfnRandomLong)(5,10);
        fVar16 = 2.24208e-44;
      }
      else {
        if ((cVar3 == '\x06') || (cVar3 == '\a')) {
          fVar28 = 4.2039e-45;
        }
        else {
          fVar28 = 0.0;
        }
        fVar29 = 0.0;
        fVar26 = 24.0;
        FUN_10002610(&stack0xffffff4c,&DAT_1018a030);
        pfVar21 = afStack_78;
        fVar23 = 10.0;
        fVar14 = 2.6016575e-29;
        puVar8 = (undefined4 *)FUN_1003efb0(&DAT_10189ac0,pfVar21,10.0);
        FUN_10002610(&stack0xffffff40,puVar8);
        puVar8 = (undefined4 *)FUN_10056be0(afStack_44,(int)DAT_10189ce4,(uint)fVar28);
        FUN_10002610(&stack0xffffff34,puVar8);
        iVar17 = 0x37;
        sVar4 = 0x2d;
        fVar9 = (float)(*gEngfuncs.pfnRandomLong)(0x2d,0x37);
        fVar16 = 2.24208e-44;
      }
    }
    else {
      if ((*(char *)((int)fVar2 + 0x348) == '\x06') || (*(char *)((int)fVar2 + 0x348) == '\a')) {
        fVar9 = 4.2039e-45;
      }
      else {
        fVar9 = 0.0;
      }
      fVar29 = 0.0;
      fVar26 = 24.0;
      FUN_10002610(&stack0xffffff4c,&DAT_1018a030);
      pfVar21 = afStack_78;
      fVar28 = 10.0;
      fVar14 = 2.601695e-29;
      puVar8 = (undefined4 *)FUN_1003efb0(&DAT_10189ac0,pfVar21,10.0);
      FUN_10002610(&stack0xffffff40,puVar8);
      puVar8 = (undefined4 *)FUN_10056be0(afStack_44,(int)DAT_10189ce4,(uint)fVar9);
      FUN_10002610(&stack0xffffff34,puVar8);
      sVar4 = 0x32;
      iVar17 = (*gEngfuncs.pfnRandomLong)(0x32,0x3c);
      FUN_10047130(8,iVar17,fVar9,fVar14,(float)pfVar21,fVar28,(float)pfVar5,fVar25,fVar13,fVar26,
                   fVar29,in_stack_ffffff60,in_stack_ffffff64);
      if ((*(char *)((int)fVar2 + 0x348) == '\x06') || (*(char *)((int)fVar2 + 0x348) == '\a')) {
        uVar10 = 3;
      }
      else {
        uVar10 = 0;
      }
      FUN_10002610(&stack0xffffff54,(undefined4 *)&DAT_10189c38);
      pfVar5 = &fStack_70;
      fVar25 = 10.0;
      fVar23 = 2.6017336e-29;
      puVar8 = (undefined4 *)FUN_1003efb0(&DAT_10189ac0,pfVar5,10.0);
      FUN_10002610(&stack0xffffff48,puVar8);
      pfVar21 = (float *)FUN_1003d240(&DAT_1018a030,&fStack_3c,(float)*(int *)((int)fVar2 + 0x34c));
      pfVar22 = &fStack_8c;
      pvVar7 = (void *)FUN_10056be0(&fStack_7c,(int)DAT_10189ce4,uVar10);
      puVar8 = (undefined4 *)FUN_1003d200(pvVar7,pfVar22,pfVar21);
      FUN_10002610(&stack0xffffff3c,puVar8);
      fVar9 = 1.12104e-43;
      fVar16 = 7.00649e-44;
      iVar17 = 0x1003eccd;
      fVar14 = (float)(*gEngfuncs.pfnRandomLong)(0x32,0x50);
      fVar28 = 1.4013e-45;
    }
    FUN_10047130(sVar4,iVar17,fVar16,fVar9,fVar28,fVar14,(float)pfVar21,fVar23,(float)pfVar5,fVar25,
                 fVar13,fVar26,(int)fVar29);
    if (1 < *(int *)((int)fVar2 + 0x24)) {
      fVar28 = 0.0;
      iVar27 = 1;
      uVar19 = 0;
      fVar25 = 0.0;
      iVar24 = 7;
      iVar17 = CONCAT22(extraout_var_00,(short)*(int *)((int)fVar2 + 0x24));
      uVar15 = 0x3f000000;
      iVar18 = 5;
      pcVar20 = s_sprites_shotgun_pellets_spr_10094d84;
      pfVar21 = afStack_78;
      fVar13 = 3.0;
      fVar14 = 2.6017824e-29;
      puVar8 = (undefined4 *)FUN_1003d240(&DAT_1018a030,pfVar21,3.0);
      FUN_10002610(&stack0xffffff30,puVar8);
      fVar9 = 4.2039e-45;
      pfVar22 = afStack_44;
      pfVar5 = DAT_10189ce4;
      puVar8 = (undefined4 *)FUN_10056be0(pfVar22,(int)DAT_10189ce4,3);
      FUN_10002610(&stack0xffffff24,puVar8);
      FUN_10046bd0((float)pfVar22,(float)pfVar5,fVar9,fVar14,(float)pfVar21,fVar13,
                   (byte_conflict *)pcVar20,iVar18,iVar17,uVar15,iVar24,fVar25,uVar19,iVar27,
                   (int)fVar28);
    }
    if (DAT_10189f7c != 0) {
      if ((*(char *)((int)fVar2 + 0x348) == '\x06') || (*(char *)((int)fVar2 + 0x348) == '\a')) {
        uVar10 = 3;
      }
      else {
        uVar10 = 0;
      }
      fStack_88 = (float)(DAT_101899c8 + 0x32);
      fVar9 = (float)(int)fStack_88;
      fStack_54 = fVar9 * DAT_1018a030;
      fStack_50 = DAT_1018a034 * fVar9;
      fVar14 = (float)DAT_101899c8;
      fStack_60 = fVar14 * _DAT_10189b30;
      fStack_5c = _DAT_10189b34 * fVar14;
      fVar13 = (float)_DAT_10189b18;
      fStack_94 = fVar13 * _DAT_10189c38;
      fStack_84 = fStack_94 + _DAT_10189ac0 + fStack_60 + fStack_54;
      fStack_90 = _DAT_10189ac4 + _DAT_10189c3c * fVar13 + fStack_5c + fStack_50;
      fStack_8c = fVar13 * _DAT_10189c40 + _DAT_10189ac8 + fVar14 * _DAT_10189b38 +
                  fVar9 * DAT_1018a038;
      fStack_64 = (float)*(int *)((int)fVar2 + 0x34c);
      fStack_6c = fStack_64 * DAT_1018a030;
      fStack_68 = DAT_1018a034 * fStack_64;
      fStack_64 = DAT_1018a038 * fStack_64;
      fStack_80 = fStack_90;
      fStack_7c = fStack_8c;
      pfVar21 = (float *)FUN_10056be0(afStack_78,(int)DAT_10189ce4,uVar10);
      fStack_60 = *pfVar21 - fStack_6c;
      fStack_90 = pfVar21[1] - fStack_68;
      fStack_8c = pfVar21[2] - fStack_64;
      fStack_5c = fStack_90;
      fStack_58 = fStack_8c;
      FUN_10056890(&fStack_60,(float *)&DAT_10189da8,&fStack_84,&DAT_10189ac0,DAT_10189f7c,uStack_48
                  );
    }
  }
LAB_1003eee7:
  __ftol();
  FUN_10002610(&stack0xffffff44,(undefined4 *)&DAT_1018a0b8);
  FUN_1003de90(DAT_10189ce4);
  FUN_1001c620(iVar1,(float *)&DAT_10189db8,(float *)&DAT_1018a0b8);
  _DAT_10189d88 = DAT_1018a030;
  _DAT_10189d8c = DAT_1018a034;
  _DAT_10189d90 = DAT_1018a038;
  FUN_100450c0((int)DAT_10189ce4,&DAT_1018a030,(float *)&DAT_10189c38,(float *)&DAT_10189b30,
               *(byte_conflict *)((int)fVar2 + 0x24),(float *)&DAT_10189db8,(float *)&DAT_10189d88,
               *(float *)(iVar1 + 0x30),*(float *)(iVar1 + 0x34),*(float *)((int)fVar2 + 0x1c),
               *(int *)((int)fVar2 + 0x20),(uint)*(byte *)((int)fVar2 + 8),
               CONCAT31((int3)((uint)DAT_1018a034 >> 8),*(undefined1 *)((int)fVar2 + 0x2c)),
               *(int *)(iVar1 + 0x44));
  return;
}

/* 1003efb0  FUN_1003efb0  (51 bytes)
 * undefined FUN_1003efb0(float * param_1, float param_2)
 * called by: FUN_1003dfa0, FUN_1003f090, FUN_10040c20, FUN_10052c80
 */
void __thiscall FUN_1003efb0(void *this,float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)((int)this + 4);
  fVar2 = *(float *)((int)this + 8);
  *param_1 = *(float *)this / param_2;
  param_1[2] = fVar2 / param_2;
  param_1[1] = fVar1 / param_2;
  return;
}

/* 1003f090  FUN_1003f090  (6881 bytes)
 * undefined FUN_1003f090(int param_1, float param_2, char param_3)
 * called by: FUN_1003de10, FUN_1003de40
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1003f090(int param_1,float param_2,char param_3)

{
  int iVar1;
  float fVar2;
  char cVar3;
  float *pfVar4;
  float *pfVar5;
  void *pvVar6;
  undefined4 *puVar7;
  float fVar8;
  uint uVar9;
  float unaff_retaddr;
  undefined3 in_stack_0000000d;
  float in_stack_00000010;
  float in_stack_00000014;
  float in_stack_00000018;
  float in_stack_0000001c;
  float in_stack_00000020;
  float in_stack_00000024;
  char in_stack_00000030;
  char in_stack_00000040;
  float *pfVar10;
  float *pfVar11;
  short sVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  int lHigh;
  undefined4 uVar19;
  float *pfVar20;
  float fVar21;
  float *pfVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float in_stack_ffffff58;
  int in_stack_ffffff5c;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  int iStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float afStack_5c [2];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float afStack_38 [2];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if ((DAT_10189edc & 1) == 0) {
    DAT_10189edc = DAT_10189edc | 1;
    FUN_1006af63(0x10040c10);
  }
  if ((DAT_10189edc & 2) == 0) {
    DAT_10189edc = DAT_10189edc | 2;
    FUN_1006af63(0x10040c00);
  }
  if ((DAT_10189edc & 4) == 0) {
    DAT_10189edc = DAT_10189edc | 4;
    FUN_1006af63(0x10040bf0);
  }
  if ((DAT_10189edc & 8) == 0) {
    DAT_10189edc = DAT_10189edc | 8;
    FUN_1006af63(0x10040be0);
  }
  if ((DAT_10189edc & 0x10) == 0) {
    DAT_10189edc = DAT_10189edc | 0x10;
    FUN_1006af63(0x10040bd0);
  }
  if ((DAT_10189edc & 0x20) == 0) {
    DAT_10189edc = DAT_10189edc | 0x20;
    FUN_1006af63(0x10040bc0);
  }
  if ((DAT_10189edc & 0x40) == 0) {
    DAT_10189edc = DAT_10189edc | 0x40;
    FUN_1006af63(0x10040bb0);
  }
  if ((DAT_10189edc & 0x80) == 0) {
    DAT_10189edc = DAT_10189edc | 0x80;
    FUN_1006af63(0x10040ba0);
  }
  if ((DAT_10189e7c & 1) == 0) {
    DAT_10189e7c = DAT_10189e7c | 1;
    FUN_1006af63(0x10040b90);
  }
  if ((DAT_10189e7c & 2) == 0) {
    DAT_10189e7c = DAT_10189e7c | 2;
    FUN_1006af63(0x10040b80);
  }
  iVar1 = param_1;
  DAT_10189c14 = *(float **)(param_1 + 4);
  _DAT_10189ed0 = *(undefined4 *)(param_1 + 8);
  _DAT_10189ed4 = *(undefined4 *)(param_1 + 0xc);
  _DAT_10189ed8 = *(undefined4 *)(param_1 + 0x10);
  _DAT_1018a000 = *(undefined4 *)(param_1 + 0x14);
  _DAT_1018a004 = *(undefined4 *)(param_1 + 0x18);
  _DAT_1018a008 = *(undefined4 *)(param_1 + 0x1c);
  _DAT_10189ea0 = *(float *)(param_1 + 0x20);
  _DAT_10189ea4 = *(float *)(param_1 + 0x24);
  _DAT_10189ea8 = *(float *)(param_1 + 0x28);
  _DAT_10189c9c = *(undefined4 *)(param_1 + 0x40);
  DAT_10189d3c = *(int *)(param_1 + 0x40);
  (*gEngfuncs.pfnAngleVectors)
            ((float *)&DAT_1018a000,&DAT_10189cb8,(float *)&DAT_10189e50,(float *)&DAT_10189d18);
  fVar2 = in_stack_00000018;
  DAT_10189a5c = *(int *)(iVar1 + 0x38);
  _DAT_1018a0b4 = *(uint *)(iVar1 + 0x3c);
  if (*(char *)((int)in_stack_00000018 + 0xe8) == '\0') {
    DAT_10189d5c = 0;
  }
  else {
    DAT_10189d5c = (*(gEngfuncs.pEventAPI)->EV_FindModelIndex)
                             ((char *)((int)in_stack_00000018 + 0xe8));
  }
  if (*(int *)((int)fVar2 + 0xcc) == 0x11) {
    lHigh = 0x28;
    iVar18 = -0x28;
  }
  else {
    lHigh = 0x8c;
    iVar18 = 0x78;
  }
  _DAT_10189b40 = (*gEngfuncs.pfnRandomLong)(iVar18,lHigh);
  pfVar20 = (float *)0x64;
  DAT_10189a3c = (*gEngfuncs.pfnRandomLong)(0x32,100);
  if (((_DAT_1018a0b4 & 1) == 0) &&
     ((cVar3 = FUN_100579a0((int)DAT_10189c14), cVar3 != '\0' ||
      (iVar18 = FUN_1001c5e0((int)DAT_10189c14), iVar18 != 0)))) {
    pfVar20 = (float *)0xd7;
    pfVar4 = (float *)FUN_1003d240(&DAT_10189d18,&fStack_6c,32.0);
    pfVar22 = &fStack_48;
    pfVar5 = (float *)FUN_1003d240(&DAT_10189cb8,(float *)&stack0xffffff54,16.0);
    pvVar6 = (void *)FUN_10035b10(&DAT_10189ed0,&fStack_9c,pfVar5);
    uVar15 = 0x1003f377;
    puVar7 = (undefined4 *)FUN_10035b10(pvVar6,pfVar22,pfVar4);
    FUN_10002610(&stack0xffffff2c,puVar7);
    FUN_10048e60(uVar15,pfVar22,pfVar4);
  }
  pfVar4 = (float *)0x1003f395;
  pfVar22 = DAT_10189c14;
  iVar18 = FUN_1001c5e0((int)DAT_10189c14);
  if (iVar18 != 0) {
    DAT_10189d54 = FUN_1003df60((int)fVar2);
    DAT_101899c4 = FUN_10007110(DAT_10189a5c,_DAT_1018a0b4);
    if (in_stack_00000030 == '\0') {
      pfVar4 = (float *)0x0;
      if (DAT_10189d3c == 0) {
        pfVar20 = (float *)0x1003f413;
        iVar18 = (*gEngfuncs.pfnRandomLong)(0,1);
        sVar12 = *(short *)(DAT_10189d54 + 0x30 + iVar18 * 2);
      }
      else {
        pfVar20 = (float *)0x1003f3fd;
        iVar18 = (*gEngfuncs.pfnRandomLong)(0,1);
        sVar12 = *(short *)(DAT_10189d54 + 0x2c + iVar18 * 2);
      }
    }
    else {
      pfVar4 = (float *)0x0;
      pfVar20 = (float *)0x1003f3db;
      iVar18 = (*gEngfuncs.pfnRandomLong)(0,2);
      sVar12 = *(short *)(DAT_10189d54 + 6 + iVar18 * 2);
    }
    _DAT_10189e6c = (int)sVar12;
    pfVar22 = (float *)0x1003f439;
    (*(gEngfuncs.pEventAPI)->EV_WeaponAnimation)(_DAT_10189e6c,DAT_101899c4);
    iVar18 = CL_IsThirdPerson();
    if (iVar18 == 0) {
      if (DAT_101914a0 == 0) {
        if (in_stack_00000040 == '\0') {
          if (DAT_10189d5c == 0) goto LAB_100403d3;
          iStack_90 = DAT_10189a3c + 0x32;
          fVar24 = (float)iStack_90;
          puVar7 = (undefined4 *)
                   FUN_10009190(afStack_38,fVar24 * DAT_10189cb8,fVar24 * DAT_10189cbc,
                                fVar24 * DAT_10189cc0);
          FUN_10002610(&fStack_80,puVar7);
          fVar24 = (float)DAT_10189a3c;
          puVar7 = (undefined4 *)
                   FUN_10009190(&fStack_44,fVar24 * _DAT_10189d18,fVar24 * _DAT_10189d1c,
                                fVar24 * _DAT_10189d20);
          FUN_10002610(&fStack_8c,puVar7);
          fVar24 = (float)_DAT_10189b40;
          puVar7 = (undefined4 *)
                   FUN_10009190(&fStack_50,fVar24 * _DAT_10189e50,fVar24 * _DAT_10189e54,
                                fVar24 * _DAT_10189e58);
          FUN_10002610(&fStack_9c,puVar7);
          puVar7 = (undefined4 *)
                   FUN_10009190(&fStack_14,_DAT_10189ea0 + fStack_9c,_DAT_10189ea4 + fStack_98,
                                _DAT_10189ea8 + fStack_94);
          FUN_10002610(&fStack_68,puVar7);
          puVar7 = (undefined4 *)
                   FUN_10009190(&fStack_20,fStack_8c + fStack_68,fStack_88 + fStack_64,
                                fStack_84 + fStack_60);
          FUN_10002610(&fStack_74,puVar7);
          puVar7 = (undefined4 *)
                   FUN_10009190(&fStack_2c,fStack_80 + fStack_74,fStack_7c + fStack_70,
                                fStack_78 + fStack_6c);
          FUN_10002610(afStack_5c,puVar7);
          pfVar4 = &DAT_10190b28;
        }
        else {
          if (DAT_10189d5c == 0) goto LAB_100403d3;
          iStack_90 = DAT_10189a3c + 0x32;
          fStack_94 = (float)iStack_90;
          fStack_9c = fStack_94 * DAT_10189cb8;
          fStack_98 = fStack_94 * DAT_10189cbc;
          fStack_94 = fStack_94 * DAT_10189cc0;
          FUN_10002610(&fStack_14,&fStack_9c);
          fStack_84 = (float)DAT_10189a3c;
          fStack_8c = fStack_84 * _DAT_10189d18;
          fStack_88 = fStack_84 * _DAT_10189d1c;
          fStack_84 = fStack_84 * _DAT_10189d20;
          FUN_10002610(&fStack_44,&fStack_8c);
          fStack_60 = (float)_DAT_10189b40;
          fStack_68 = fStack_60 * _DAT_10189e50;
          fStack_64 = fStack_60 * _DAT_10189e54;
          fStack_60 = fStack_60 * _DAT_10189e58;
          FUN_10002610(&fStack_80,&fStack_68);
          fStack_74 = fStack_80 + _DAT_10189ea0;
          fStack_70 = _DAT_10189ea4 + fStack_7c;
          fStack_6c = _DAT_10189ea8 + fStack_78;
          FUN_10002610(&fStack_50,&fStack_74);
          puVar7 = (undefined4 *)
                   FUN_10009190(&stack0x0000001c,fStack_44 + fStack_50,fStack_40 + fStack_4c,
                                fStack_3c + fStack_48);
          FUN_10002610(&fStack_20,puVar7);
          puVar7 = (undefined4 *)
                   FUN_10009190(&stack0x00000010,fStack_14 + fStack_20,fStack_10 + fStack_1c,
                                fStack_c + fStack_18);
          FUN_10002610(afStack_5c,puVar7);
          fStack_2c = _DAT_10189e50 * 4.0;
          fStack_28 = _DAT_10189e54 * 4.0;
          fStack_24 = _DAT_10189e58 * 4.0;
          FUN_10002610(&fStack_8,&fStack_2c);
          puVar7 = (undefined4 *)
                   FUN_10009190(&param_1,DAT_10190b28 - fStack_8,DAT_10190b2c - fStack_4,
                                DAT_10190b30 - unaff_retaddr);
          FUN_10002610(afStack_38,puVar7);
          FUN_10056890(afStack_38,(float *)&DAT_1018a000,afStack_5c,&DAT_10189ea0,DAT_10189d5c,1);
          iStack_90 = DAT_10189a3c + 0x32;
          fStack_94 = (float)iStack_90;
          fStack_9c = fStack_94 * DAT_10189cb8;
          fStack_98 = fStack_94 * DAT_10189cbc;
          fStack_94 = fStack_94 * DAT_10189cc0;
          FUN_10002610(&fStack_74,&fStack_9c);
          fVar24 = (float)DAT_10189a3c;
          puVar7 = (undefined4 *)
                   FUN_10009190(&fStack_14,fVar24 * _DAT_10189d18,fVar24 * _DAT_10189d1c,
                                fVar24 * _DAT_10189d20);
          FUN_10002610(&fStack_68,puVar7);
          fVar24 = (float)_DAT_10189b40;
          puVar7 = (undefined4 *)
                   FUN_10009190(&fStack_20,fVar24 * _DAT_10189e50,fVar24 * _DAT_10189e54,
                                fVar24 * _DAT_10189e58);
          FUN_10002610(&fStack_8c,puVar7);
          puVar7 = (undefined4 *)
                   FUN_10009190(&fStack_2c,fStack_8c + _DAT_10189ea0,_DAT_10189ea4 + fStack_88,
                                _DAT_10189ea8 + fStack_84);
          FUN_10002610(&fStack_80,puVar7);
          puVar7 = (undefined4 *)
                   FUN_10009190(&fStack_8,fStack_68 + fStack_80,fStack_64 + fStack_7c,
                                fStack_60 + fStack_78);
          FUN_10002610(&fStack_44,puVar7);
          puVar7 = (undefined4 *)
                   FUN_10009190(&stack0x0000001c,fStack_74 + fStack_44,fStack_70 + fStack_40,
                                fStack_6c + fStack_3c);
          FUN_10002610(afStack_5c,puVar7);
          puVar7 = (undefined4 *)
                   FUN_10009190(&stack0x00000010,_DAT_10189e50 * 4.0,_DAT_10189e54 * 4.0,
                                _DAT_10189e58 * 4.0);
          FUN_10002610(&fStack_50,puVar7);
          puVar7 = (undefined4 *)
                   FUN_10009190(&param_1,fStack_50 + DAT_10190b28,DAT_10190b2c + fStack_4c,
                                DAT_10190b30 + fStack_48);
          FUN_10002610(afStack_38,puVar7);
          pfVar4 = afStack_38;
        }
      }
      else {
        fVar25 = 0.0;
        fVar24 = fVar2;
        if (in_stack_00000040 == '\0') {
          fVar8 = (float)(_DAT_1018a0b4 & 0xffffff01);
          iVar18 = (_DAT_1018a0b4 & 1) << 3;
          fVar13 = 1.26117e-44;
          FUN_10002610(&stack0xffffff3c,&DAT_10189cb8);
          pfVar5 = afStack_5c;
          uVar19 = 0x41200000;
          uVar15 = 0x1003f551;
          puVar7 = (undefined4 *)FUN_1003efb0(&DAT_10189ea0,pfVar5,10.0);
          FUN_10002610(&stack0xffffff2c,puVar7);
          uVar9 = CONCAT31((int3)((uint)-DAT_10189d3c >> 8),-(DAT_10189d3c != 0)) & 0xfffffffe;
          fVar14 = (float)CONCAT31((int3)(uVar9 >> 8),(char)uVar9 + '\x02');
        }
        else {
          fVar14 = (float)(_DAT_1018a0b4 & 0xffffff01);
          iVar18 = (_DAT_1018a0b4 & 1) << 3;
          fVar23 = 1.26117e-44;
          FUN_10002610(&stack0xffffff3c,&DAT_10189cb8);
          pfVar5 = afStack_5c;
          uVar19 = 0x41200000;
          uVar15 = 0x1003f49d;
          fVar8 = fVar2;
          puVar7 = (undefined4 *)FUN_1003efb0(&DAT_10189ea0,pfVar5,10.0);
          FUN_10002610(&stack0xffffff2c,puVar7);
          fVar13 = 0.0;
          pfVar10 = afStack_38;
          pfVar11 = DAT_10189c14;
          puVar7 = (undefined4 *)FUN_10056be0(pfVar10,(int)DAT_10189c14,0);
          FUN_10002610(&stack0xffffff20,puVar7);
          FUN_100474b0((float)pfVar10,(float)pfVar11,fVar13,uVar15,pfVar5,uVar19,fVar8,
                       (float)pfVar20,(float)pfVar4,(float)pfVar22,fVar23,fVar14,iVar18,fVar25);
          fVar8 = (float)(_DAT_1018a0b4 & 0xffffff01);
          fVar25 = 0.0;
          iVar18 = (_DAT_1018a0b4 & 1) << 3;
          fVar13 = 1.26117e-44;
          FUN_10002610(&stack0xffffff3c,&DAT_10189cb8);
          pfVar5 = afStack_5c;
          uVar19 = 0x41200000;
          uVar15 = 0x1003f505;
          puVar7 = (undefined4 *)FUN_1003efb0(&DAT_10189ea0,pfVar5,10.0);
          FUN_10002610(&stack0xffffff2c,puVar7);
          fVar14 = 2.8026e-45;
        }
        pfVar11 = afStack_38;
        pfVar10 = DAT_10189c14;
        puVar7 = (undefined4 *)FUN_10056be0(pfVar11,(int)DAT_10189c14,(uint)fVar14);
        FUN_10002610(&stack0xffffff20,puVar7);
        FUN_100474b0((float)pfVar11,(float)pfVar10,fVar14,uVar15,pfVar5,uVar19,fVar24,(float)pfVar20
                     ,(float)pfVar4,(float)pfVar22,fVar13,fVar8,iVar18,fVar25);
        fVar25 = 0.0;
        fVar24 = 24.0;
        if ((_DAT_1018a0b4 & 1) == 0) {
          FUN_10002610(&stack0xffffff44,&DAT_10189cb8);
          pfVar20 = afStack_5c;
          pfVar4 = (float *)0x41200000;
          fVar23 = 2.6024517e-29;
          puVar7 = (undefined4 *)FUN_1003efb0(&DAT_10189ea0,pfVar20,10.0);
          FUN_10002610(&stack0xffffff38,puVar7);
          FUN_10002610(&stack0xffffff2c,
                       (undefined4 *)
                       (DAT_101914a0 + 0xb60 + ((-(uint)(DAT_10189d3c != 0) & 0xfffffffe) + 2) * 0xc
                       ));
          iVar18 = 0x37;
          sVar12 = 0x2d;
          fVar14 = (float)(*gEngfuncs.pfnRandomLong)(0x2d,0x37);
          fVar16 = 2.24208e-44;
        }
        else {
          FUN_10002610(&stack0xffffff44,&DAT_10189cb8);
          pfVar20 = afStack_5c;
          fVar23 = 10.0;
          fVar14 = 2.6024842e-29;
          puVar7 = (undefined4 *)FUN_1003efb0(&DAT_10189ea0,pfVar20,10.0);
          FUN_10002610(&stack0xffffff38,puVar7);
          FUN_10002610(&stack0xffffff2c,
                       (undefined4 *)
                       (DAT_101914a0 + 0xb60 + ((-(uint)(DAT_10189d3c != 0) & 0xfffffffe) + 2) * 0xc
                       ));
          sVar12 = 0x32;
          iVar18 = (*gEngfuncs.pfnRandomLong)(0x32,0x3c);
          FUN_10047130(8,iVar18,(float)puVar7,fVar14,(float)pfVar20,fVar23,(float)pfVar22,fVar13,
                       fVar8,fVar24,fVar25,in_stack_ffffff58,in_stack_ffffff5c);
          in_stack_ffffff5c = 1;
          in_stack_ffffff58 = 4.0;
          FUN_10002610(&stack0xffffff4c,(undefined4 *)&DAT_10189e50);
          pfVar22 = &fStack_54;
          fVar13 = 10.0;
          pfVar4 = (float *)0x1003f6a1;
          puVar7 = (undefined4 *)FUN_1003efb0(&DAT_10189ea0,pfVar22,10.0);
          FUN_10002610(&stack0xffffff40,puVar7);
          pfVar20 = (float *)FUN_1003d240(&DAT_10189cb8,&fStack_30,
                                          (float)*(int *)((int)fVar2 + 0x34c));
          puVar7 = (undefined4 *)
                   FUN_1003d200((void *)(DAT_101914a0 + 0xb60 +
                                        ((-(uint)(DAT_10189d3c != 0) & 0xfffffffe) + 2) * 0xc),
                                &fStack_94,pfVar20);
          FUN_10002610(&stack0xffffff34,puVar7);
          fVar14 = 1.12104e-43;
          fVar16 = 7.00649e-44;
          iVar18 = 0x1003f706;
          fVar23 = (float)(*gEngfuncs.pfnRandomLong)(0x32,0x50);
          puVar7 = (undefined4 *)0x1;
        }
        FUN_10047130(sVar12,iVar18,fVar16,fVar14,(float)puVar7,fVar23,(float)pfVar20,(float)pfVar4,
                     (float)pfVar22,fVar13,fVar8,fVar24,(int)fVar25);
        if (in_stack_00000040 == '\0') {
          if (DAT_10189d5c == 0) goto LAB_100403d3;
          iStack_90 = DAT_10189a3c + 0x32;
          fStack_94 = (float)iStack_90;
          fStack_9c = fStack_94 * DAT_10189cb8;
          fStack_98 = fStack_94 * DAT_10189cbc;
          fStack_94 = fStack_94 * DAT_10189cc0;
          FUN_10002610(&fStack_20,&fStack_9c);
          fStack_84 = (float)DAT_10189a3c;
          fStack_8c = fStack_84 * _DAT_10189d18;
          fStack_88 = fStack_84 * _DAT_10189d1c;
          fStack_84 = fStack_84 * _DAT_10189d20;
          FUN_10002610(&fStack_44,&fStack_8c);
          fStack_60 = (float)_DAT_10189b40;
          fStack_68 = fStack_60 * _DAT_10189e50;
          fStack_64 = fStack_60 * _DAT_10189e54;
          fStack_60 = fStack_60 * _DAT_10189e58;
          FUN_10002610(&fStack_80,&fStack_68);
          fStack_74 = fStack_80 + _DAT_10189ea0;
          fStack_70 = _DAT_10189ea4 + fStack_7c;
          fStack_6c = _DAT_10189ea8 + fStack_78;
          FUN_10002610(&fStack_50,&fStack_74);
          fStack_14 = fStack_44 + fStack_50;
          fStack_10 = fStack_40 + fStack_4c;
          fStack_c = fStack_3c + fStack_48;
          FUN_10002610(&fStack_2c,&fStack_14);
          fStack_8 = fStack_20 + fStack_2c;
          fStack_4 = fStack_1c + fStack_28;
          FUN_10002610(afStack_5c,&fStack_8);
          in_stack_00000024 = (float)*(int *)((int)fVar2 + 0x34c);
          in_stack_0000001c = in_stack_00000024 * DAT_10189cb8;
          in_stack_00000020 = in_stack_00000024 * DAT_10189cbc;
          in_stack_00000024 = in_stack_00000024 * DAT_10189cc0;
          FUN_10002610(&stack0x00000010,&stack0x0000001c);
          iVar18 = (-(uint)(DAT_10189d3c != 0) & 0xfffffffe) + 2;
          param_1 = (int)(*(float *)(DAT_101914a0 + 0xb60 + iVar18 * 0xc) - in_stack_00000010);
          iVar18 = DAT_101914a0 + 0xb60 + iVar18 * 0xc;
          param_2 = *(float *)(iVar18 + 4) - in_stack_00000014;
          _param_3 = *(float *)(iVar18 + 8) - in_stack_00000018;
          FUN_10002610(afStack_38,&param_1);
          pfVar4 = afStack_38;
        }
        else {
          if (DAT_10189d5c == 0) goto LAB_100403d3;
          iStack_90 = DAT_10189a3c + 0x32;
          _param_3 = (float)iStack_90;
          param_1 = (int)(_param_3 * DAT_10189cb8);
          param_2 = _param_3 * DAT_10189cbc;
          _param_3 = _param_3 * DAT_10189cc0;
          FUN_10002610(&fStack_44,&param_1);
          in_stack_00000018 = (float)DAT_10189a3c;
          in_stack_00000010 = in_stack_00000018 * _DAT_10189d18;
          in_stack_00000014 = in_stack_00000018 * _DAT_10189d1c;
          in_stack_00000018 = in_stack_00000018 * _DAT_10189d20;
          FUN_10002610(&fStack_20,&stack0x00000010);
          in_stack_00000024 = (float)_DAT_10189b40;
          in_stack_0000001c = in_stack_00000024 * _DAT_10189e50;
          in_stack_00000020 = in_stack_00000024 * _DAT_10189e54;
          in_stack_00000024 = in_stack_00000024 * _DAT_10189e58;
          FUN_10002610(&fStack_8,&stack0x0000001c);
          fStack_2c = fStack_8 + _DAT_10189ea0;
          fStack_28 = _DAT_10189ea4 + fStack_4;
          fStack_24 = _DAT_10189ea8 + unaff_retaddr;
          FUN_10002610(&fStack_14,&fStack_2c);
          fStack_50 = fStack_20 + fStack_14;
          fStack_4c = fStack_1c + fStack_10;
          fStack_48 = fStack_18 + fStack_c;
          FUN_10002610(&fStack_74,&fStack_50);
          fStack_80 = fStack_44 + fStack_74;
          fStack_7c = fStack_40 + fStack_70;
          fStack_78 = fStack_3c + fStack_6c;
          FUN_10002610(afStack_38,&fStack_80);
          fStack_60 = (float)*(int *)((int)fVar2 + 0x34c);
          fStack_68 = fStack_60 * DAT_10189cb8;
          fStack_64 = fStack_60 * DAT_10189cbc;
          fStack_60 = fStack_60 * DAT_10189cc0;
          FUN_10002610(&fStack_8c,&fStack_68);
          fStack_9c = *(float *)(DAT_101914a0 + 0xb60) - fStack_8c;
          fStack_98 = *(float *)(DAT_101914a0 + 0xb64) - fStack_88;
          fStack_94 = *(float *)(DAT_101914a0 + 0xb68) - fStack_84;
          FUN_10002610(afStack_5c,&fStack_9c);
          FUN_10056890(afStack_5c,(float *)&DAT_1018a000,afStack_38,&DAT_10189ea0,DAT_10189d5c,1);
          iStack_90 = DAT_10189a3c + 0x32;
          fStack_94 = (float)iStack_90;
          fStack_9c = fStack_94 * DAT_10189cb8;
          fStack_98 = fStack_94 * DAT_10189cbc;
          fStack_94 = fStack_94 * DAT_10189cc0;
          FUN_10002610(&fStack_20,&fStack_9c);
          fStack_84 = (float)DAT_10189a3c;
          fStack_8c = fStack_84 * _DAT_10189d18;
          fStack_88 = fStack_84 * _DAT_10189d1c;
          fStack_84 = fStack_84 * _DAT_10189d20;
          FUN_10002610(&fStack_44,&fStack_8c);
          fStack_60 = (float)_DAT_10189b40;
          fStack_68 = fStack_60 * _DAT_10189e50;
          fStack_64 = fStack_60 * _DAT_10189e54;
          fStack_60 = fStack_60 * _DAT_10189e58;
          FUN_10002610(&fStack_80,&fStack_68);
          fStack_74 = fStack_80 + _DAT_10189ea0;
          fStack_70 = _DAT_10189ea4 + fStack_7c;
          fStack_6c = _DAT_10189ea8 + fStack_78;
          FUN_10002610(&fStack_50,&fStack_74);
          fStack_14 = fStack_44 + fStack_50;
          fStack_10 = fStack_40 + fStack_4c;
          fStack_c = fStack_3c + fStack_48;
          FUN_10002610(&fStack_2c,&fStack_14);
          fStack_8 = fStack_20 + fStack_2c;
          fStack_4 = fStack_1c + fStack_28;
          FUN_10002610(afStack_5c,&fStack_8);
          in_stack_00000024 = (float)*(int *)((int)fVar2 + 0x34c);
          in_stack_0000001c = in_stack_00000024 * DAT_10189cb8;
          in_stack_00000020 = in_stack_00000024 * DAT_10189cbc;
          in_stack_00000024 = in_stack_00000024 * DAT_10189cc0;
          FUN_10002610(&stack0x00000010,&stack0x0000001c);
          param_1 = (int)(*(float *)(DAT_101914a0 + 0xb78) - in_stack_00000010);
          param_2 = *(float *)(DAT_101914a0 + 0xb7c) - in_stack_00000014;
          _param_3 = *(float *)(DAT_101914a0 + 0xb80) - in_stack_00000018;
          FUN_10002610(afStack_38,&param_1);
          pfVar4 = afStack_38;
        }
      }
      pfVar22 = (float *)&DAT_1018a000;
      pfVar20 = (float *)0x100403d0;
      FUN_10056890(pfVar4,(float *)&DAT_1018a000,afStack_5c,&DAT_10189ea0,DAT_10189d5c,1);
    }
  }
LAB_100403d3:
  iVar18 = CL_IsThirdPerson();
  if (((iVar18 != 0) || (iVar18 = FUN_1001c5e0((int)DAT_10189c14), iVar18 == 0)) &&
     (cVar3 = FUN_100579a0((int)DAT_10189c14), cVar3 != '\0')) {
    fVar25 = 1.4013e-45;
    fVar24 = fVar2;
    if (in_stack_00000040 == '\0') {
      fVar8 = (float)(_DAT_1018a0b4 & 0xffffff01);
      iVar18 = (_DAT_1018a0b4 & 1) << 3;
      fVar13 = 1.26117e-44;
      FUN_10002610(&stack0xffffff3c,&DAT_10189cb8);
      pfVar5 = afStack_5c;
      uVar19 = 0x41200000;
      uVar15 = 0x10040503;
      puVar7 = (undefined4 *)FUN_1003efb0(&DAT_10189ea0,pfVar5,10.0);
      FUN_10002610(&stack0xffffff2c,puVar7);
      uVar9 = CONCAT31((int3)((uint)-DAT_10189d3c >> 8),-(DAT_10189d3c != 0)) & 0xfffffffe;
      fVar14 = (float)CONCAT31((int3)(uVar9 >> 8),(char)uVar9 + '\x02');
    }
    else {
      fVar14 = (float)(_DAT_1018a0b4 & 0xffffff01);
      iVar18 = (_DAT_1018a0b4 & 1) << 3;
      fVar23 = 1.26117e-44;
      FUN_10002610(&stack0xffffff3c,&DAT_10189cb8);
      pfVar5 = afStack_5c;
      uVar19 = 0x41200000;
      uVar15 = 0x1004044f;
      fVar8 = fVar2;
      puVar7 = (undefined4 *)FUN_1003efb0(&DAT_10189ea0,pfVar5,10.0);
      FUN_10002610(&stack0xffffff2c,puVar7);
      fVar13 = 0.0;
      pfVar10 = afStack_38;
      pfVar11 = DAT_10189c14;
      puVar7 = (undefined4 *)FUN_10056be0(pfVar10,(int)DAT_10189c14,0);
      FUN_10002610(&stack0xffffff20,puVar7);
      FUN_100474b0((float)pfVar10,(float)pfVar11,fVar13,uVar15,pfVar5,uVar19,fVar8,(float)pfVar20,
                   (float)pfVar4,(float)pfVar22,fVar23,fVar14,iVar18,fVar25);
      fVar8 = (float)(_DAT_1018a0b4 & 0xffffff01);
      fVar25 = 1.4013e-45;
      iVar18 = (_DAT_1018a0b4 & 1) << 3;
      fVar13 = 1.26117e-44;
      FUN_10002610(&stack0xffffff3c,&DAT_10189cb8);
      pfVar5 = afStack_5c;
      uVar19 = 0x41200000;
      uVar15 = 0x100404b7;
      puVar7 = (undefined4 *)FUN_1003efb0(&DAT_10189ea0,pfVar5,10.0);
      FUN_10002610(&stack0xffffff2c,puVar7);
      fVar14 = 2.8026e-45;
    }
    pfVar11 = afStack_38;
    pfVar10 = DAT_10189c14;
    puVar7 = (undefined4 *)FUN_10056be0(pfVar11,(int)DAT_10189c14,(uint)fVar14);
    FUN_10002610(&stack0xffffff20,puVar7);
    FUN_100474b0((float)pfVar11,(float)pfVar10,fVar14,uVar15,pfVar5,uVar19,fVar24,(float)pfVar20,
                 (float)pfVar4,(float)pfVar22,fVar13,fVar8,iVar18,fVar25);
    fVar25 = 0.0;
    fVar24 = 24.0;
    if ((_DAT_1018a0b4 & 1) == 0) {
      FUN_10002610(&stack0xffffff44,&DAT_10189cb8);
      pfVar20 = afStack_5c;
      fVar21 = 10.0;
      fVar23 = 2.6036617e-29;
      puVar7 = (undefined4 *)FUN_1003efb0(&DAT_10189ea0,pfVar20,10.0);
      FUN_10002610(&stack0xffffff38,puVar7);
      uVar9 = CONCAT31((int3)((uint)-DAT_10189d3c >> 8),-(DAT_10189d3c != 0)) & 0xfffffffe;
      fVar16 = (float)CONCAT31((int3)(uVar9 >> 8),(char)uVar9 + '\x02');
      puVar7 = (undefined4 *)FUN_10056be0(afStack_38,(int)DAT_10189c14,(uint)fVar16);
      FUN_10002610(&stack0xffffff2c,puVar7);
      iVar18 = 0x37;
      sVar12 = 0x2d;
      fVar14 = (float)(*gEngfuncs.pfnRandomLong)(0x2d,0x37);
      fVar17 = 2.24208e-44;
    }
    else {
      FUN_10002610(&stack0xffffff44,&DAT_10189cb8);
      pfVar20 = afStack_5c;
      fVar16 = 10.0;
      fVar23 = 2.603695e-29;
      puVar7 = (undefined4 *)FUN_1003efb0(&DAT_10189ea0,pfVar20,10.0);
      FUN_10002610(&stack0xffffff38,puVar7);
      uVar9 = CONCAT31((int3)((uint)-DAT_10189d3c >> 8),-(DAT_10189d3c != 0)) & 0xfffffffe;
      fVar14 = (float)CONCAT31((int3)(uVar9 >> 8),(char)uVar9 + '\x02');
      puVar7 = (undefined4 *)FUN_10056be0(afStack_38,(int)DAT_10189c14,(uint)fVar14);
      FUN_10002610(&stack0xffffff2c,puVar7);
      sVar12 = 0x32;
      iVar18 = (*gEngfuncs.pfnRandomLong)(0x32,0x3c);
      FUN_10047130(8,iVar18,fVar14,fVar23,(float)pfVar20,fVar16,(float)pfVar22,fVar13,fVar8,fVar24,
                   fVar25,in_stack_ffffff58,in_stack_ffffff5c);
      FUN_10002610(&stack0xffffff4c,(undefined4 *)&DAT_10189e50);
      pfVar22 = &fStack_54;
      fVar13 = 10.0;
      fVar21 = 2.6037306e-29;
      puVar7 = (undefined4 *)FUN_1003efb0(&DAT_10189ea0,pfVar22,10.0);
      FUN_10002610(&stack0xffffff40,puVar7);
      pfVar20 = (float *)FUN_1003d240(&DAT_10189cb8,&fStack_30,(float)*(int *)((int)fVar2 + 0x34c));
      pfVar4 = &fStack_94;
      uVar9 = CONCAT31((int3)((uint)-DAT_10189d3c >> 8),-(DAT_10189d3c != 0)) & 0xfffffffe;
      pvVar6 = (void *)FUN_10056be0(&fStack_84,(int)DAT_10189c14,
                                    CONCAT31((int3)(uVar9 >> 8),(char)uVar9 + '\x02'));
      puVar7 = (undefined4 *)FUN_1003d200(pvVar6,pfVar4,pfVar20);
      FUN_10002610(&stack0xffffff34,puVar7);
      fVar14 = 1.12104e-43;
      fVar17 = 7.00649e-44;
      iVar18 = 0x100406c6;
      fVar23 = (float)(*gEngfuncs.pfnRandomLong)(0x32,0x50);
      fVar16 = 1.4013e-45;
    }
    FUN_10047130(sVar12,iVar18,fVar17,fVar14,fVar16,fVar23,(float)pfVar20,fVar21,(float)pfVar22,
                 fVar13,fVar8,fVar24,(int)fVar25);
    if (DAT_10189d5c != 0) {
      iStack_90 = DAT_10189a3c + 0x32;
      fStack_94 = (float)iStack_90;
      fStack_9c = fStack_94 * DAT_10189cb8;
      fStack_98 = fStack_94 * DAT_10189cbc;
      fStack_94 = fStack_94 * DAT_10189cc0;
      FUN_10002610(&fStack_20,&fStack_9c);
      fStack_84 = (float)DAT_10189a3c;
      fStack_8c = fStack_84 * _DAT_10189d18;
      fStack_88 = fStack_84 * _DAT_10189d1c;
      fStack_84 = fStack_84 * _DAT_10189d20;
      FUN_10002610(&fStack_44,&fStack_8c);
      fStack_60 = (float)_DAT_10189b40;
      fStack_68 = fStack_60 * _DAT_10189e50;
      fStack_64 = fStack_60 * _DAT_10189e54;
      fStack_60 = fStack_60 * _DAT_10189e58;
      FUN_10002610(&fStack_80,&fStack_68);
      fStack_74 = _DAT_10189ea0 + fStack_80;
      fStack_70 = _DAT_10189ea4 + fStack_7c;
      fStack_6c = _DAT_10189ea8 + fStack_78;
      FUN_10002610(&fStack_50,&fStack_74);
      fStack_14 = fStack_44 + fStack_50;
      fStack_10 = fStack_40 + fStack_4c;
      fStack_c = fStack_3c + fStack_48;
      FUN_10002610(&fStack_2c,&fStack_14);
      fStack_8 = fStack_20 + fStack_2c;
      fStack_4 = fStack_1c + fStack_28;
      FUN_10002610(afStack_5c,&fStack_8);
      in_stack_00000024 = (float)*(int *)((int)fVar2 + 0x34c);
      in_stack_0000001c = DAT_10189cb8 * in_stack_00000024;
      in_stack_00000020 = DAT_10189cbc * in_stack_00000024;
      in_stack_00000024 = DAT_10189cc0 * in_stack_00000024;
      FUN_10002610(&stack0x00000010,&stack0x0000001c);
      uVar9 = CONCAT31((int3)((uint)-DAT_10189d3c >> 8),-(DAT_10189d3c != 0)) & 0xfffffffe;
      pfVar20 = (float *)FUN_10056be0((undefined4 *)&stack0x00000028,(int)DAT_10189c14,
                                      CONCAT31((int3)(uVar9 >> 8),(char)uVar9 + '\x02'));
      param_1 = (int)(*pfVar20 - in_stack_00000010);
      param_2 = pfVar20[1] - in_stack_00000014;
      _param_3 = pfVar20[2] - in_stack_00000018;
      FUN_10002610(afStack_38,&param_1);
      FUN_10056890(afStack_38,(float *)&DAT_1018a000,afStack_5c,&DAT_10189ea0,DAT_10189d5c,1);
    }
  }
  __ftol();
  puVar7 = (undefined4 *)FUN_1001fb70(&stack0x00000028,100,100,100);
  FUN_10002610(&stack0xffffff3c,puVar7);
  FUN_1003de90(DAT_10189c14);
  FUN_1001c620(iVar1,(float *)&DAT_10189d78,(float *)&DAT_10189ed0);
  _DAT_10189cd0 = DAT_10189cc0;
  _DAT_10189cc8 = DAT_10189cb8;
  _DAT_10189ccc = DAT_10189cbc;
  if (in_stack_00000040 == '\0') {
    FUN_100450c0((int)DAT_10189c14,&DAT_10189cb8,(float *)&DAT_10189e50,(float *)&DAT_10189d18,
                 *(byte_conflict *)((int)fVar2 + 0x24),(float *)&DAT_10189d78,(float *)&DAT_10189cc8
                 ,*(float *)(iVar1 + 0x30),*(float *)(iVar1 + 0x34),*(float *)((int)fVar2 + 0x1c),
                 *(int *)((int)fVar2 + 0x20),(uint)*(byte *)((int)fVar2 + 8),
                 CONCAT31((int3)((uint)DAT_10189cbc >> 8),*(undefined1 *)((int)fVar2 + 0x2c)),
                 *(int *)(iVar1 + 0x44));
    return;
  }
  fStack_9c = _DAT_10189e50 * 5.0 + _DAT_10189d78;
  fStack_98 = _DAT_10189d7c + _DAT_10189e54 * 5.0;
  fStack_94 = _DAT_10189d80 + _DAT_10189e58 * 5.0;
  fStack_88 = fStack_98;
  fStack_84 = fStack_94;
  FUN_100450c0((int)DAT_10189c14,&DAT_10189cb8,(float *)&DAT_10189e50,(float *)&DAT_10189d18,
               *(byte_conflict *)((int)fVar2 + 0x24),&fStack_9c,(float *)&DAT_10189cc8,
               *(float *)(iVar1 + 0x30),*(float *)(iVar1 + 0x34),*(float *)((int)fVar2 + 0x1c),
               *(int *)((int)fVar2 + 0x20),(uint)*(byte *)((int)fVar2 + 8),
               CONCAT31((int3)((uint)fStack_98 >> 8),*(undefined1 *)((int)fVar2 + 0x2c)),
               *(int *)(iVar1 + 0x44));
  fStack_9c = _DAT_10189e50 * -5.0 + _DAT_10189d78;
  fStack_98 = _DAT_10189d7c + _DAT_10189e54 * -5.0;
  fStack_94 = _DAT_10189d80 + _DAT_10189e58 * -5.0;
  fStack_88 = fStack_98;
  fStack_84 = fStack_94;
  FUN_100450c0((int)DAT_10189c14,&DAT_10189cb8,(float *)&DAT_10189e50,(float *)&DAT_10189d18,
               *(byte_conflict *)((int)fVar2 + 0x24),&fStack_9c,(float *)&DAT_10189cc8,
               *(float *)(iVar1 + 0x30),*(float *)(iVar1 + 0x34),*(float *)((int)fVar2 + 0x1c),
               *(int *)((int)fVar2 + 0x20),(uint)*(byte *)((int)fVar2 + 8),
               CONCAT31((int3)((uint)fStack_98 >> 8),*(undefined1 *)((int)fVar2 + 0x2c)),
               *(int *)(iVar1 + 0x44) + 0x21);
  return;
}

/* 10040c20  FUN_10040c20  (3282 bytes)
 * undefined FUN_10040c20(int param_1, float param_2)
 * called by: FUN_1003de40
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10040c20(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  float *pfVar5;
  void *this;
  undefined4 *puVar6;
  undefined2 extraout_var;
  undefined4 *puVar7;
  float *pfVar8;
  short sVar9;
  undefined2 extraout_var_00;
  float in_stack_0000000c;
  float in_stack_00000010;
  float in_stack_00000014;
  float in_stack_00000018;
  float in_stack_0000001c;
  float in_stack_00000020;
  float in_stack_00000024;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  char *pcVar14;
  undefined4 *in_stack_ffffff40;
  float fVar15;
  int iVar16;
  float *in_stack_ffffff44;
  float fVar17;
  float fVar18;
  undefined *puVar19;
  int iVar20;
  float fVar21;
  undefined *puVar22;
  float fVar23;
  float in_stack_ffffff58;
  int in_stack_ffffff5c;
  int iVar24;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  undefined4 auStack_8 [2];
  
  if ((DAT_10189d58 & 1) == 0) {
    DAT_10189d58 = DAT_10189d58 | 1;
    FUN_1006af63(0x10041990);
  }
  if ((DAT_10189d58 & 2) == 0) {
    DAT_10189d58 = DAT_10189d58 | 2;
    FUN_1006af63(0x10041980);
  }
  if ((DAT_10189d58 & 4) == 0) {
    DAT_10189d58 = DAT_10189d58 | 4;
    FUN_1006af63(0x10041970);
  }
  if ((DAT_10189d58 & 8) == 0) {
    DAT_10189d58 = DAT_10189d58 | 8;
    FUN_1006af63(0x10041960);
  }
  if ((DAT_10189d58 & 0x10) == 0) {
    DAT_10189d58 = DAT_10189d58 | 0x10;
    FUN_1006af63(0x10041950);
  }
  if ((DAT_10189d58 & 0x20) == 0) {
    DAT_10189d58 = DAT_10189d58 | 0x20;
    FUN_1006af63(0x10041940);
  }
  if ((DAT_10189d58 & 0x40) == 0) {
    DAT_10189d58 = DAT_10189d58 | 0x40;
    FUN_1006af63(0x10041930);
  }
  if ((DAT_10189d58 & 0x80) == 0) {
    DAT_10189d58 = DAT_10189d58 | 0x80;
    FUN_1006af63(0x10041920);
  }
  if ((DAT_10189ec4 & 1) == 0) {
    DAT_10189ec4 = DAT_10189ec4 | 1;
    FUN_1006af63(0x10041910);
  }
  if ((DAT_10189ec4 & 2) == 0) {
    DAT_10189ec4 = DAT_10189ec4 | 2;
    FUN_1006af63(0x10041900);
  }
  iVar1 = param_1;
  DAT_10189aa4 = *(float *)(param_1 + 4);
  _DAT_1018a048 = *(undefined4 *)(param_1 + 8);
  _DAT_1018a04c = *(undefined4 *)(param_1 + 0xc);
  _DAT_1018a050 = *(undefined4 *)(param_1 + 0x10);
  _DAT_10189ad0 = *(undefined4 *)(param_1 + 0x14);
  _DAT_10189ad4 = *(undefined4 *)(param_1 + 0x18);
  _DAT_10189ad8 = *(undefined4 *)(param_1 + 0x1c);
  _DAT_10189ef0 = *(float *)(param_1 + 0x20);
  _DAT_10189ef4 = *(float *)(param_1 + 0x24);
  _DAT_10189ef8 = *(float *)(param_1 + 0x28);
  (*gEngfuncs.pfnAngleVectors)
            ((float *)&DAT_10189ad0,&DAT_10189c08,(float *)&DAT_10189b00,(float *)&DAT_10189eb8);
  fVar2 = in_stack_00000018;
  DAT_10189aa8 = *(int *)(iVar1 + 0x38);
  DAT_10189cd4 = *(uint *)(iVar1 + 0x3c);
  DAT_10189b1c = *(int *)(iVar1 + 0x40);
  if (*(char *)((int)in_stack_00000018 + 0xe8) == '\0') {
    DAT_10189fc0 = 0;
  }
  else {
    DAT_10189fc0 = (*(gEngfuncs.pEventAPI)->EV_FindModelIndex)
                             ((char *)((int)in_stack_00000018 + 0xe8));
  }
  _DAT_10189e04 = (*gEngfuncs.pfnRandomLong)(0x14,0x28);
  pcVar14 = (char *)0x14;
  _DAT_10189b54 = (*gEngfuncs.pfnRandomLong)(0,0x14);
  if ((DAT_10189cd4 & 1) == 0) {
    cVar3 = FUN_100579a0((int)DAT_10189aa4);
    if (cVar3 == '\0') {
      iVar4 = FUN_1001c5e0((int)DAT_10189aa4);
      if (iVar4 == 0) goto LAB_10040eff;
    }
    in_stack_ffffff44 = (float *)0xd7;
    in_stack_ffffff40 = (undefined4 *)0xf1;
    pcVar14 = (char *)FUN_1003d240(&DAT_10189eb8,&fStack_9c,32.0);
    pfVar8 = &fStack_18;
    pfVar5 = (float *)FUN_1003d240(&DAT_10189c08,&fStack_90,16.0);
    this = (void *)FUN_10035b10(&DAT_1018a048,(float *)&stack0xffffff58,pfVar5);
    uVar11 = 0x10040eec;
    puVar6 = (undefined4 *)FUN_10035b10(this,pfVar8,(float *)pcVar14);
    FUN_10002610(&stack0xffffff34,puVar6);
    FUN_10048e60(uVar11,pfVar8,pcVar14);
  }
LAB_10040eff:
  iVar4 = FUN_1001c5e0((int)DAT_10189aa4);
  if (iVar4 != 0) {
    DAT_10189ee4 = FUN_1003df60((int)fVar2);
    in_stack_ffffff40 = (undefined4 *)0x10040f33;
    _DAT_10189d38 = FUN_10007110(DAT_10189aa8,DAT_10189cd4);
    if (DAT_10189b1c == 0) {
      sVar9 = *(short *)(DAT_10189ee4 + 0x16);
    }
    else {
      sVar9 = *(short *)(DAT_10189ee4 + 0x18);
    }
    in_stack_ffffff44 = (float *)0x10040f68;
    (*(gEngfuncs.pEventAPI)->EV_WeaponAnimation)((int)sVar9,_DAT_10189d38);
    iVar4 = CL_IsThirdPerson();
    if (iVar4 == 0) {
      if (DAT_101914a0 == 0) {
        if ((DAT_10189b1c == 0) && (DAT_10189fc0 != 0)) {
          fStack_80 = (float)_DAT_10189e04;
          fStack_88 = fStack_80 * DAT_10189c08;
          fStack_84 = DAT_10189c0c * fStack_80;
          fStack_80 = DAT_10189c10 * fStack_80;
          FUN_10002610(&fStack_40,&fStack_88);
          fStack_98 = (float)_DAT_10189b54;
          fStack_a0 = fStack_98 * _DAT_10189eb8;
          fStack_9c = _DAT_10189ebc * fStack_98;
          fStack_98 = _DAT_10189ec0 * fStack_98;
          FUN_10002610(&fStack_7c,&fStack_a0);
          fStack_50 = (float)_DAT_10189e04;
          fStack_58 = fStack_50 * _DAT_10189b00;
          fStack_54 = _DAT_10189b04 * fStack_50;
          fStack_50 = _DAT_10189b08 * fStack_50;
          FUN_10002610(&fStack_70,&fStack_58);
          fStack_1c = fStack_70 + _DAT_10189ef0;
          fStack_18 = _DAT_10189ef4 + fStack_6c;
          fStack_14 = _DAT_10189ef8 + fStack_68;
          FUN_10002610(&fStack_28,&fStack_1c);
          fStack_4c = fStack_7c + fStack_28;
          fStack_48 = fStack_78 + fStack_24;
          fStack_44 = fStack_74 + fStack_20;
          FUN_10002610(&fStack_64,&fStack_4c);
          fStack_34 = fStack_40 + fStack_64;
          fStack_30 = fStack_3c + fStack_60;
          fStack_2c = fStack_38 + fStack_5c;
          FUN_10002610(&fStack_94,&fStack_34);
          puVar22 = (undefined *)0x2;
          pfVar8 = &fStack_94;
          puVar19 = &DAT_10189ef0;
          in_stack_ffffff44 = (float *)&DAT_10189ad0;
          in_stack_ffffff40 = &DAT_10190b28;
          puVar6 = (undefined4 *)DAT_10189fc0;
          goto LAB_10041482;
        }
      }
      else {
        fVar21 = 0.0;
        iVar4 = 0;
        fVar18 = 0.0;
        fVar17 = 1.26117e-44;
        FUN_10002610(&stack0xffffff3c,&DAT_10189c08);
        pfVar8 = &fStack_94;
        uVar12 = 0x41200000;
        uVar11 = 0x10040fb1;
        fVar15 = fVar2;
        puVar6 = (undefined4 *)FUN_1003efb0(&DAT_10189ef0,pfVar8,10.0);
        FUN_10002610(&stack0xffffff2c,puVar6);
        fVar10 = 0.0;
        pfVar5 = &fStack_10;
        fVar13 = DAT_10189aa4;
        puVar6 = (undefined4 *)FUN_10056be0(pfVar5,(int)DAT_10189aa4,0);
        FUN_10002610(&stack0xffffff20,puVar6);
        FUN_100474b0((float)pfVar5,fVar13,fVar10,uVar11,pfVar8,uVar12,fVar15,(float)pcVar14,
                     (float)in_stack_ffffff40,(float)in_stack_ffffff44,fVar17,fVar18,iVar4,fVar21);
        fVar21 = 0.0;
        fVar10 = 24.0;
        FUN_10002610(&stack0xffffff44,&DAT_10189c08);
        pfVar8 = &fStack_94;
        fVar15 = 10.0;
        fVar13 = 2.6044772e-29;
        puVar6 = (undefined4 *)FUN_1003efb0(&DAT_10189ef0,pfVar8,10.0);
        FUN_10002610(&stack0xffffff38,puVar6);
        FUN_10002610(&stack0xffffff2c,(undefined4 *)(DAT_101914a0 + 0xb60));
        iVar4 = (*gEngfuncs.pfnRandomLong)(5,10);
        FUN_10047130(0x10,iVar4,(float)puVar6,fVar13,(float)pfVar8,fVar15,(float)in_stack_ffffff44,
                     fVar17,fVar18,fVar10,fVar21,in_stack_ffffff58,in_stack_ffffff5c);
        in_stack_ffffff44 = (float *)CONCAT22(extraout_var,*(undefined2 *)((int)fVar2 + 0x24));
        pfVar8 = &fStack_8c;
        in_stack_ffffff5c = 0;
        in_stack_ffffff58 = 1.4013e-45;
        uVar12 = 0;
        fVar18 = 0.0;
        iVar4 = 7;
        uVar11 = 0x3f000000;
        in_stack_ffffff40 = (undefined4 *)0x5;
        pcVar14 = s_sprites_shotgun_pellets_spr_10094d84;
        fVar17 = 3.0;
        fVar10 = 2.6045088e-29;
        puVar6 = (undefined4 *)FUN_1003d240(&DAT_10189c08,pfVar8,3.0);
        FUN_10002610(&stack0xffffff30,puVar6);
        fVar15 = 0.0;
        puVar6 = auStack_8;
        fVar13 = DAT_10189aa4;
        puVar7 = (undefined4 *)FUN_10056be0(puVar6,(int)DAT_10189aa4,0);
        FUN_10002610(&stack0xffffff24,puVar7);
        FUN_10046bd0((float)puVar6,fVar13,fVar15,fVar10,(float)pfVar8,fVar17,
                     (byte_conflict *)pcVar14,(int)in_stack_ffffff40,(int)in_stack_ffffff44,uVar11,
                     iVar4,fVar18,uVar12,(int)in_stack_ffffff58,in_stack_ffffff5c);
        if ((DAT_10189b1c == 0) && (DAT_10189fc0 != 0)) {
          in_stack_00000024 = (float)_DAT_10189e04;
          in_stack_0000001c = in_stack_00000024 * DAT_10189c08;
          in_stack_00000020 = DAT_10189c0c * in_stack_00000024;
          in_stack_00000024 = DAT_10189c10 * in_stack_00000024;
          FUN_10002610(&fStack_74,&stack0x0000001c);
          in_stack_0000000c = (float)_DAT_10189b54;
          param_1 = (int)(in_stack_0000000c * _DAT_10189eb8);
          param_2 = _DAT_10189ebc * in_stack_0000000c;
          in_stack_0000000c = _DAT_10189ec0 * in_stack_0000000c;
          FUN_10002610(&fStack_38,&param_1);
          in_stack_00000018 = (float)_DAT_10189e04;
          in_stack_00000010 = in_stack_00000018 * _DAT_10189b00;
          in_stack_00000014 = _DAT_10189b04 * in_stack_00000018;
          in_stack_00000018 = _DAT_10189b08 * in_stack_00000018;
          FUN_10002610(&fStack_2c,&stack0x00000010);
          fStack_5c = fStack_2c + _DAT_10189ef0;
          fStack_58 = _DAT_10189ef4 + fStack_28;
          fStack_54 = _DAT_10189ef8 + fStack_24;
          FUN_10002610(&fStack_44,&fStack_5c);
          fStack_20 = fStack_38 + fStack_44;
          fStack_1c = fStack_34 + fStack_40;
          fStack_18 = fStack_30 + fStack_3c;
          FUN_10002610(&fStack_14,&fStack_20);
          fStack_68 = fStack_74 + fStack_14;
          fStack_64 = fStack_70 + fStack_10;
          fStack_60 = fStack_6c + fStack_c;
          FUN_10002610(auStack_8,&fStack_68);
          fStack_48 = (float)*(int *)((int)fVar2 + 0x34c);
          fStack_50 = fStack_48 * DAT_10189c08;
          fStack_4c = DAT_10189c0c * fStack_48;
          fStack_48 = DAT_10189c10 * fStack_48;
          FUN_10002610(&fStack_98,&fStack_50);
          fStack_80 = *(float *)(DAT_101914a0 + 0xb60) - fStack_98;
          fStack_7c = *(float *)(DAT_101914a0 + 0xb64) - fStack_94;
          fStack_78 = *(float *)(DAT_101914a0 + 0xb68) - fStack_90;
          FUN_10002610(&fStack_8c,&fStack_80);
          in_stack_ffffff5c = 2;
          puVar22 = &DAT_10189ef0;
          pfVar8 = &fStack_8c;
          puVar19 = &DAT_10189ad0;
          puVar6 = auStack_8;
          in_stack_ffffff58 = (float)DAT_10189fc0;
LAB_10041482:
          pcVar14 = (char *)0x10041487;
          FUN_10056890(in_stack_ffffff40,in_stack_ffffff44,pfVar8,puVar19,puVar6,(uint)puVar22);
        }
      }
    }
  }
  iVar4 = CL_IsThirdPerson();
  if (iVar4 == 0) {
    iVar4 = FUN_1001c5e0((int)DAT_10189aa4);
    if (iVar4 != 0) goto LAB_10041834;
  }
  cVar3 = FUN_100579a0((int)DAT_10189aa4);
  if (cVar3 != '\0') {
    fVar21 = 1.4013e-45;
    iVar4 = 0;
    fVar18 = 0.0;
    fVar17 = 1.26117e-44;
    FUN_10002610(&stack0xffffff3c,&DAT_10189c08);
    pfVar8 = &fStack_94;
    uVar12 = 0x41200000;
    uVar11 = 0x100414ec;
    fVar15 = fVar2;
    puVar6 = (undefined4 *)FUN_1003efb0(&DAT_10189ef0,pfVar8,10.0);
    FUN_10002610(&stack0xffffff2c,puVar6);
    fVar10 = 4.2039e-45;
    pfVar5 = &fStack_10;
    fVar13 = DAT_10189aa4;
    puVar6 = (undefined4 *)FUN_10056be0(pfVar5,(int)DAT_10189aa4,3);
    FUN_10002610(&stack0xffffff20,puVar6);
    FUN_100474b0((float)pfVar5,fVar13,fVar10,uVar11,pfVar8,uVar12,fVar15,(float)pcVar14,
                 (float)in_stack_ffffff40,(float)in_stack_ffffff44,fVar17,fVar18,iVar4,fVar21);
    fVar23 = 0.0;
    fVar21 = 24.0;
    FUN_10002610(&stack0xffffff44,&DAT_10189c08);
    pfVar8 = &fStack_94;
    fVar10 = 10.0;
    fVar15 = 2.60488e-29;
    puVar6 = (undefined4 *)FUN_1003efb0(&DAT_10189ef0,pfVar8,10.0);
    FUN_10002610(&stack0xffffff38,puVar6);
    fVar13 = 4.2039e-45;
    puVar6 = (undefined4 *)FUN_10056be0(&fStack_10,(int)DAT_10189aa4,3);
    FUN_10002610(&stack0xffffff2c,puVar6);
    iVar4 = (*gEngfuncs.pfnRandomLong)(5,10);
    FUN_10047130(0x18,iVar4,fVar13,fVar15,(float)pfVar8,fVar10,(float)in_stack_ffffff44,fVar17,
                 fVar18,fVar21,fVar23,in_stack_ffffff58,in_stack_ffffff5c);
    iVar4 = CONCAT22(extraout_var_00,*(undefined2 *)((int)fVar2 + 0x24));
    pfVar8 = &fStack_8c;
    iVar24 = 0;
    fVar21 = 1.4013e-45;
    uVar12 = 0;
    fVar18 = 0.0;
    iVar20 = 7;
    uVar11 = 0x3f000000;
    iVar16 = 5;
    pcVar14 = s_sprites_shotgun_pellets_spr_10094d84;
    fVar17 = 3.0;
    fVar10 = 2.6049138e-29;
    puVar6 = (undefined4 *)FUN_1003d240(&DAT_10189c08,pfVar8,3.0);
    FUN_10002610(&stack0xffffff30,puVar6);
    fVar15 = 4.2039e-45;
    puVar6 = auStack_8;
    fVar13 = DAT_10189aa4;
    puVar7 = (undefined4 *)FUN_10056be0(puVar6,(int)DAT_10189aa4,3);
    FUN_10002610(&stack0xffffff24,puVar7);
    FUN_10046bd0((float)puVar6,fVar13,fVar15,fVar10,(float)pfVar8,fVar17,(byte_conflict *)pcVar14,
                 iVar16,iVar4,uVar11,iVar20,fVar18,uVar12,(int)fVar21,iVar24);
    if ((DAT_10189b1c == 0) && (DAT_10189fc0 != 0)) {
      fStack_78 = (float)_DAT_10189e04;
      fStack_80 = fStack_78 * DAT_10189c08;
      fStack_7c = DAT_10189c0c * fStack_78;
      fStack_78 = DAT_10189c10 * fStack_78;
      FUN_10002610(&fStack_38,&fStack_80);
      fStack_90 = (float)_DAT_10189b54;
      fStack_98 = fStack_90 * _DAT_10189eb8;
      fStack_94 = _DAT_10189ebc * fStack_90;
      fStack_90 = _DAT_10189ec0 * fStack_90;
      FUN_10002610(&fStack_74,&fStack_98);
      fStack_48 = (float)_DAT_10189e04;
      fStack_50 = fStack_48 * _DAT_10189b00;
      fStack_4c = _DAT_10189b04 * fStack_48;
      fStack_48 = _DAT_10189b08 * fStack_48;
      FUN_10002610(&fStack_68,&fStack_50);
      fStack_14 = fStack_68 + _DAT_10189ef0;
      fStack_10 = _DAT_10189ef4 + fStack_64;
      fStack_c = _DAT_10189ef8 + fStack_60;
      FUN_10002610(&fStack_20,&fStack_14);
      fStack_44 = fStack_74 + fStack_20;
      fStack_40 = fStack_70 + fStack_1c;
      fStack_3c = fStack_6c + fStack_18;
      FUN_10002610(&fStack_5c,&fStack_44);
      fStack_2c = fStack_38 + fStack_5c;
      fStack_28 = fStack_34 + fStack_58;
      fStack_24 = fStack_30 + fStack_54;
      FUN_10002610(&fStack_8c,&fStack_2c);
      in_stack_00000018 = (float)*(int *)((int)fVar2 + 0x34c);
      in_stack_00000010 = in_stack_00000018 * DAT_10189c08;
      in_stack_00000014 = DAT_10189c0c * in_stack_00000018;
      in_stack_00000018 = DAT_10189c10 * in_stack_00000018;
      FUN_10002610(&param_1,&stack0x00000010);
      pfVar8 = (float *)FUN_10056be0((undefined4 *)&stack0x00000028,(int)DAT_10189aa4,3);
      in_stack_0000001c = *pfVar8 - (float)param_1;
      in_stack_00000020 = pfVar8[1] - param_2;
      in_stack_00000024 = pfVar8[2] - in_stack_0000000c;
      FUN_10002610(auStack_8,&stack0x0000001c);
      FUN_10056890(auStack_8,(float *)&DAT_10189ad0,&fStack_8c,&DAT_10189ef0,DAT_10189fc0,2);
    }
  }
LAB_10041834:
  __ftol();
  FUN_10002610(&stack0xffffff3c,(undefined4 *)&DAT_1018a048);
  FUN_1003de90(DAT_10189aa4);
  FUN_1001c620(iVar1,(float *)&DAT_10189c48,(float *)&DAT_1018a048);
  _DAT_10189e20 = DAT_10189c08;
  _DAT_10189e24 = DAT_10189c0c;
  _DAT_10189e28 = DAT_10189c10;
  FUN_100450c0((int)DAT_10189aa4,&DAT_10189c08,(float *)&DAT_10189b00,(float *)&DAT_10189eb8,
               *(byte_conflict *)((int)fVar2 + 0x24),(float *)&DAT_10189c48,(float *)&DAT_10189e20,
               *(float *)(iVar1 + 0x30),*(float *)(iVar1 + 0x34),*(float *)((int)fVar2 + 0x1c),
               *(int *)((int)fVar2 + 0x20),(uint)*(byte *)((int)fVar2 + 8),
               CONCAT31((int3)((uint)DAT_10189c0c >> 8),*(undefined1 *)((int)fVar2 + 0x2c)),
               *(int *)(iVar1 + 0x44));
  return;
}

/* 100425b0  FUN_100425b0  (123 bytes)
 * undefined FUN_100425b0(int param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100425b0(int param_1)

{
  undefined4 uVar1;
  
  DAT_10189ca0 = *(int *)(param_1 + 0x38);
  DAT_10189e3c = FUN_100071c0(*(int *)(param_1 + 0x38));
  DAT_10189ff4 = *(uint *)(param_1 + 0x3c);
  _DAT_10189eb4 = *(int *)(param_1 + 4);
  uVar1 = FUN_1001c5c0(_DAT_10189eb4);
  if ((char)uVar1 != '\0') {
    DAT_10189c04 = FUN_1003df60((int)DAT_10189e3c);
    _DAT_10189f5c = FUN_10007110(DAT_10189ca0,DAT_10189ff4);
    (*(gEngfuncs.pEventAPI)->EV_WeaponAnimation)((int)*(short *)(DAT_10189c04 + 4),_DAT_10189f5c);
  }
  return;
}

/* 10042630  FUN_10042630  (91 bytes)
 * undefined FUN_10042630(int param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10042630(int param_1)

{
  undefined4 uVar1;
  
  DAT_10189abc = *(int *)(param_1 + 0x38);
  DAT_1018a0c4 = FUN_100071c0(0x18);
  _DAT_10189ee8 = *(int *)(param_1 + 4);
  uVar1 = FUN_1001c5c0(_DAT_10189ee8);
  if ((char)uVar1 != '\0') {
    _DAT_10189ffc = FUN_1003df60((int)DAT_1018a0c4);
    (*(gEngfuncs.pEventAPI)->EV_WeaponAnimation)
              ((int)*(short *)(_DAT_10189ffc + DAT_10189abc * 2),1);
  }
  return;
}

/* 10044bf0  FUN_10044bf0  (1143 bytes)
 * float10 FUN_10044bf0(undefined4 param_1, int param_2, undefined4 param_3, undefined4 param_4, int param_5)
 * called by: FUN_10035d40, FUN_100450c0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_10044bf0(int param_1,int param_2,float *param_3,float *param_4,int param_5)

{
  _func_408 **pp_Var1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  byte_conflict *pbVar9;
  float attenuation;
  char *pcVar10;
  byte_conflict *pbVar11;
  longlong lVar12;
  float *in_stack_00000020;
  float *in_stack_00000024;
  int in_stack_0000005c;
  undefined4 in_stack_ffffff9c;
  float *in_stack_ffffffa0;
  float volume;
  int in_stack_ffffffb0;
  int in_stack_ffffffb4;
  float fStack_44;
  float *pfStack_40;
  char *apcStack_2c [3];
  byte_conflict abStack_20 [15];
  undefined1 uStack_11;
  
  iVar4 = (*gEngfuncs.PM_PointContents)((float *)(param_2 + 0x14),(int *)0x0);
  if (iVar4 == -6) goto switchD_10044e11_caseD_46;
  (*gEngfuncs.pfnRandomLong)(0,100);
  iVar4 = (*(gEngfuncs.pEventAPI)->EV_IndexFromTrace)((pmtrace_s *)param_2);
  cVar3 = '\0';
  if ((0 < iVar4) && (iVar5 = (*gEngfuncs.GetMaxClients)(), iVar4 <= iVar5)) {
    cVar3 = 'F';
    goto LAB_10044dfa;
  }
  pcVar6 = (*(gEngfuncs.pEventAPI)->EV_TraceTexture)
                     (*(int *)(param_2 + 0x30),in_stack_00000020,in_stack_00000024);
  if (pcVar6 != (char *)0x0) {
    uVar7 = 0xffffffff;
    do {
      pcVar10 = pcVar6;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = pcVar6 + 1;
      cVar3 = *pcVar6;
      pcVar6 = pcVar10;
    } while (cVar3 != '\0');
    uVar7 = ~uVar7;
    pcVar6 = pcVar10 + -uVar7;
    pcVar10 = &stack0xffffff9c;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar10 = pcVar10 + 1;
    }
    pcVar6 = &stack0xffffff9c;
    if (((char)in_stack_ffffff9c == '-') || ((char)in_stack_ffffff9c == '+')) {
      pcVar6 = &stack0xffffff9e;
    }
    cVar3 = *pcVar6;
    if ((((cVar3 == '{') || (cVar3 == '!')) || (cVar3 == '~')) || (cVar3 == ' ')) {
      pcVar6 = pcVar6 + 1;
    }
    uVar7 = 0xffffffff;
    do {
      pcVar10 = pcVar6;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = pcVar6 + 1;
      cVar3 = *pcVar6;
      pcVar6 = pcVar10;
    } while (cVar3 != '\0');
    uVar7 = ~uVar7;
    pbVar9 = (byte_conflict *)(pcVar10 + -uVar7);
    pbVar11 = abStack_20;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar9;
      pbVar9 = pbVar9 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pbVar11 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      pbVar11 = pbVar11 + 1;
    }
    uStack_11 = 0;
    cVar3 = FUN_1002a340(abStack_20);
    if (cVar3 == 'F') goto LAB_10044dfa;
  }
  _DAT_1018a0f8 = (*gEngfuncs.pfnRandomLong)(0,0x7fff);
  if (0x3ffe < _DAT_1018a0f8) goto LAB_10044dfa;
  switch(_DAT_1018a0f8 % 5) {
  case 1:
    pcVar6 = s_debris_ric2_wav_100956d8;
    break;
  case 2:
    uVar7 = 0xffffffff;
    pcVar6 = s_debris_ric3_wav_100956c8;
    do {
      pcVar10 = pcVar6;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar10;
    } while (cVar2 != '\0');
    uVar7 = ~uVar7;
    pcVar6 = pcVar10 + -uVar7;
    pcVar10 = (char *)&DAT_1018a168;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar10 = pcVar10 + 4;
    }
    goto LAB_10044db7;
  case 3:
    pcVar6 = s_debris_ric4_wav_100956b8;
    break;
  case 4:
    uVar7 = 0xffffffff;
    pcVar6 = s_debris_ric5_wav_100956a8;
    do {
      pcVar10 = pcVar6;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar10;
    } while (cVar2 != '\0');
    uVar7 = ~uVar7;
    pcVar6 = pcVar10 + -uVar7;
    pcVar10 = (char *)&DAT_1018a168;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar10 = pcVar10 + 4;
    }
    goto LAB_10044db7;
  default:
    pcVar6 = s_debris_ric1_wav_10095698;
  }
  uVar7 = 0xffffffff;
  do {
    pcVar10 = pcVar6;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar10 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar10;
  } while (cVar2 != '\0');
  uVar7 = ~uVar7;
  pcVar6 = pcVar10 + -uVar7;
  pcVar10 = (char *)&DAT_1018a168;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar10 = pcVar10 + 4;
  }
LAB_10044db7:
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar10 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar10 = pcVar10 + 1;
  }
  lVar12 = __ftol();
  (*(gEngfuncs.pEventAPI)->EV_PlaySound)
            (-1,in_stack_ffffffa0,0,(char *)&DAT_1018a168,1.0,0.99,0,100 - (int)lVar12);
LAB_10044dfa:
  switch((int)cVar3) {
  case 0x44:
    fStack_44 = 0.1;
    iVar4 = 4;
    break;
  default:
    fStack_44 = 0.6;
    goto LAB_10044f9d;
  case 0x46:
switchD_10044e11_caseD_46:
    return (float10)0.0;
  case 0x47:
    fStack_44 = 0.5;
    apcStack_2c[0] = s_debris_metal5_wav_100955e4;
    iVar4 = 5;
    break;
  case 0x4d:
    goto LAB_10044e64;
  case 0x50:
  case 0x59:
    fStack_44 = 0.2;
    iVar4 = 3;
    break;
  case 0x53:
    fStack_44 = 0.0;
    iVar4 = 4;
    break;
  case 0x54:
    fStack_44 = 0.2;
LAB_10044f9d:
    apcStack_2c[0] = s_debris_cement4_wav_10095508;
    apcStack_2c[1] = s_debris_cement5_wav_100954f4;
    apcStack_2c[2] = s_debris_cement6_wav_100954e0;
    iVar4 = 7;
    break;
  case 0x56:
LAB_10044e64:
    fStack_44 = 0.3;
    apcStack_2c[0] = s_debris_metal5_wav_100955e4;
    iVar4 = 5;
    break;
  case 0x57:
    fStack_44 = 0.2;
    iVar4 = 3;
  }
  FUN_10048f60(pfStack_40,(byte_conflict *)(param_2 + 0x20),in_stack_0000005c,(int)cVar3);
  if (0x21 < param_1) {
    iVar5 = (*gEngfuncs.pfnRandomLong)(-5,5);
    lVar12 = __ftol();
    attenuation = (float)(iVar5 + (0x19 - (int)lVar12));
    volume = 0.0;
    pp_Var1 = &(gEngfuncs.pEventAPI)->EV_PlaySound;
    iVar4 = (*gEngfuncs.pfnRandomLong)(0,iVar4 + -1);
    (**pp_Var1)(0,pfStack_40,6,apcStack_2c[iVar4],volume,attenuation,in_stack_ffffffb0,
                in_stack_ffffffb4);
  }
  return (float10)fStack_44;
}

/* 100450c0  FUN_100450c0  (3277 bytes)
 * undefined FUN_100450c0(int param_1, undefined4 param_2, float * param_3, float * param_4, byte.conflict param_5, float * param_6, float * param_7, float param_8, float param_9, float param_10, int param_11, int param_12, undefined4 param_13, int param_14)
 * called by: FUN_1003dfa0, FUN_1003f090, FUN_10040c20, FUN_100450c0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_100450c0(int param_1,undefined4 param_2,float *param_3,float *param_4,byte_conflict param_5,
            float *param_6,float *param_7,float param_8,float param_9,float param_10,int param_11,
            int param_12,float param_13,int param_14)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  byte bVar4;
  float *pfVar5;
  cl_entity_s *pcVar6;
  int iVar7;
  uint uVar8;
  float10 fVar9;
  float10 fVar10;
  longlong lVar11;
  float in_stack_0000003c;
  float in_stack_00000040;
  int in_stack_00000044;
  int in_stack_0000004c;
  float in_stack_00000060;
  int in_stack_00000064;
  undefined4 in_stack_00000068;
  int in_stack_0000006c;
  float fVar12;
  float fVar13;
  undefined *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  char cVar18;
  float fVar19;
  float fVar20;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  undefined1 auStack_4 [4];
  
  if ((DAT_1018a1b4 & 1) == 0) {
    DAT_1018a1b4 = DAT_1018a1b4 | 1;
    FUN_1006af63(0x10045de0);
  }
  if ((DAT_1018a1b4 & 2) == 0) {
    DAT_1018a1b4 = DAT_1018a1b4 | 2;
    FUN_1006af63(0x10045dd0);
  }
  if ((DAT_1018a1b4 & 4) == 0) {
    DAT_1018a1b4 = DAT_1018a1b4 | 4;
    FUN_1006af63(0x10045dc0);
  }
  if ((DAT_1018a1b4 & 8) == 0) {
    DAT_1018a1b4 = DAT_1018a1b4 | 8;
    FUN_1006af63(0x10045db0);
  }
  if ((DAT_1018a1b4 & 0x10) == 0) {
    DAT_1018a1b4 = DAT_1018a1b4 | 0x10;
    FUN_1006af63(0x10045da0);
  }
  if ((DAT_1018a1b4 & 0x20) == 0) {
    DAT_1018a1b4 = DAT_1018a1b4 | 0x20;
    FUN_1006af63(0x10045d90);
  }
  if ((DAT_1018d16c != 0) || (DAT_1018a154 = '\0', DAT_100963e8 < 0.99)) {
    DAT_1018a154 = '\x01';
  }
  DAT_1018a0e0 = FUN_100071f0(param_12);
  pfVar2 = param_7;
  pfVar3 = param_6;
  if (param_11 != 2) {
    fVar15 = *param_7;
    fVar16 = param_7[2];
    fVar17 = param_7[1];
    pfVar5 = (float *)FUN_1003d240(&stack0xffffffc4,&local_18,4096.0);
    pfVar3 = param_6;
    fVar20 = *pfVar5 + *param_6;
    fVar13 = param_6[2];
    fVar1 = param_6[1] + pfVar5[1];
    local_28 = fVar13 + pfVar5[2];
    FUN_10002610(&local_24,(undefined4 *)&stack0xffffffd0);
    _DAT_1018a1b8 = local_24;
    fVar12 = 2.8026e-45;
    _DAT_1018a1bc = local_20;
    _DAT_1018a1c0 = local_1c;
    (*(gEngfuncs.pEventAPI)->EV_PlayerTrace)
              (pfVar3,(float *)&DAT_1018a1b8,2,-1,(pmtrace_s *)&DAT_1018a110);
    _DAT_1018a1b8 = DAT_1018a124;
    _DAT_1018a1bc = DAT_1018a128;
    _DAT_1018a1c0 = DAT_1018a12c;
    local_1c = *pfVar3 + DAT_1018a124;
    local_28 = DAT_1018a124;
    fStack_c = pfVar3[1];
    local_24 = DAT_1018a128;
    local_18 = fStack_c + DAT_1018a128;
    fStack_8 = pfVar3[2];
    local_20 = DAT_1018a12c;
    fStack_14 = fStack_8 + DAT_1018a12c;
    FUN_10002610(&fStack_10,&local_1c);
    local_28 = fStack_10 * 0.5;
    local_24 = fStack_c * 0.5;
    local_20 = fStack_8 * 0.5;
    FUN_10002610(&stack0xffffffc0,&local_28);
    fStack_10 = fVar13 - _DAT_1018a1b8;
    fStack_c = fVar15 - _DAT_1018a1bc;
    fStack_8 = fVar17 - _DAT_1018a1c0;
    FUN_10002610(&local_28,&fStack_10);
    pcVar6 = (*gEngfuncs.GetLocalPlayer)();
    if (param_6 != (float *)pcVar6->index) {
      local_1c = *pfVar3 - _DAT_1018a1b8;
      fStack_c = pfVar3[1];
      fStack_8 = pfVar3[2];
      local_18 = fStack_c - _DAT_1018a1bc;
      fStack_14 = fStack_8 - _DAT_1018a1c0;
      FUN_10002610(&stack0xffffffcc,&local_1c);
      if (200.0 < SQRT(fVar16 * fVar16 + fVar20 * fVar20 + fVar1 * fVar1)) {
        local_1c = fVar13 - DAT_10190b28;
        fStack_c = DAT_10190b2c;
        fStack_8 = DAT_10190b30;
        local_18 = fVar15 - DAT_10190b2c;
        fStack_14 = fVar17 - DAT_10190b30;
        FUN_10002610(&stack0xffffffcc,&local_1c);
        if (SQRT(fVar16 * fVar16 + fVar20 * fVar20 + fVar1 * fVar1) <
            SQRT(local_28 * local_28 + local_24 * local_24 + local_20 * local_20) - 100.0) {
          local_18 = pfVar3[1];
          fVar19 = DAT_10190b28 - *pfVar3;
          fStack_c = DAT_10190b2c;
          fStack_14 = pfVar3[2];
          fStack_8 = DAT_10190b30;
          fVar16 = DAT_10190b2c - local_18;
          fVar20 = DAT_10190b30 - fStack_14;
          FUN_10002610(&local_28,(undefined4 *)&stack0xffffffcc);
          fStack_c = DAT_10190b2c;
          fStack_8 = DAT_10190b30;
          param_12 = (int)SQRT(local_28 * local_28 + local_24 * local_24 + local_20 * local_20);
          local_1c = DAT_10190b28 - _DAT_1018a1b8;
          local_18 = DAT_10190b2c - _DAT_1018a1bc;
          fStack_14 = DAT_10190b30 - _DAT_1018a1c0;
          FUN_10002610(&stack0xffffffcc,&local_1c);
          local_1c = *pfVar3 - _DAT_1018a1b8;
          fStack_c = pfVar3[1];
          fStack_8 = pfVar3[2];
          local_18 = fStack_c - _DAT_1018a1bc;
          fStack_14 = fStack_8 - _DAT_1018a1c0;
          FUN_10002610(&local_28,&local_1c);
          fVar1 = SQRT(local_28 * local_28 + local_24 * local_24 + local_20 * local_20);
          fVar16 = (SQRT(fVar19 * fVar19 + fVar16 * fVar16 + fVar20 * fVar20) + fVar1 +
                   (float)param_12) * 0.5;
          fVar16 = SQRT((fVar16 - (float)param_12) * (fVar16 - fVar1) * (fVar16 - fVar1) * fVar16);
          param_12 = (int)((fVar16 + fVar16) / fVar1);
          if ((float)param_12 < 75.0) {
            (*gEngfuncs.pfnRandomLong)(1,5);
            FUN_1006ac7a((undefined1 *)&param_1,(byte_conflict *)s_weapons_whizz_d_wav_100956e8);
            param_6 = (float *)((uint)param_6 & 0xffffff);
            fVar16 = 1.0 / ((float)param_14 + 0.1);
            param_14 = (int)(fVar16 + fVar16);
            if (1.0 < (float)param_14) {
              param_14 = 0x3f800000;
            }
            iVar7 = (*gEngfuncs.pfnRandomLong)(-5,5);
            lVar11 = __ftol();
            uVar8 = DAT_1018a1c4 & 0x80000001;
            if ((int)uVar8 < 0) {
              uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
            }
            DAT_1018a1c4 = DAT_1018a1c4 + 1;
            (*(gEngfuncs.pEventAPI)->EV_PlaySound)
                      (-1,&DAT_10190b28,uVar8 + 0x1f7,(char *)&param_3,in_stack_00000040,0.8,0,
                       iVar7 + (0x19 - (int)lVar11));
          }
        }
      }
    }
    param_12 = (int)in_stack_0000003c;
    if (in_stack_00000044 == 3) {
      param_12 = (int)(in_stack_0000003c * 8.0);
    }
    fStack_10 = fVar13 - _DAT_1018a1b8;
    fStack_c = fVar15 - _DAT_1018a1bc;
    fStack_8 = fVar17 - _DAT_1018a1c0;
    FUN_10002610(auStack_4,&fStack_10);
    if (DAT_1018ca5a != '\0') {
      param_11 = (int)in_stack_0000003c;
      if (in_stack_00000044 == 3) {
        param_11 = (int)(in_stack_0000003c * 8.0);
      }
      fVar16 = 0.0;
      fVar15 = 2.6100624e-29;
      pfVar5 = pfVar3;
      FUN_100524c0(&DAT_1018bde8,pfVar3,(float *)0x0,512.0,(float)param_12);
      if (((in_stack_00000044 == 5) || (in_stack_00000044 == 8)) || (in_stack_00000044 == 0xd)) {
        cVar18 = '\x01';
      }
      else {
        cVar18 = '\0';
      }
      puVar14 = &DAT_1018a1b8;
      fVar13 = 2.610078e-29;
      fVar17 = (float)param_11;
      FUN_10002610(&stack0xffffff9c,(undefined4 *)&DAT_1018a1b8);
      FUN_10002610(&stack0xffffff90,pfVar3);
      FUN_10052720(&DAT_1018bde8,fVar12,fVar13,(float)puVar14,fVar15,(float)pfVar5,fVar16,fVar17,
                   cVar18);
    }
    fVar16 = param_9;
    fVar15 = param_8;
    DAT_1018a0dc = CONCAT31(DAT_1018a0dc._1_3_,1);
    if (param_10._0_1_ != '\0') {
      do {
        fVar9 = FUN_1001aea0((DAT_1018a0dc & 0xff) + in_stack_0000004c,-3.1415927,3.1415927);
        param_11 = (int)(float)fVar9;
        fVar9 = FUN_1001aea0((DAT_1018a0dc & 0xff) + 1 + in_stack_0000004c,0.0,
                             (float)DAT_1018a0e0[7]);
        fVar9 = (float10)1.0 - fVar9 * fVar9 * fVar9;
        fVar10 = (float10)fcos((float10)(float)param_11);
        param_12 = (int)(float)(fVar9 * fVar10);
        fVar10 = (float10)fsin((float10)(float)param_11);
        fVar9 = fVar9 * fVar10;
        DAT_1018a1a8 = (float)(fVar9 * (float10)*(float *)fVar16 * (float10)(float)param_14 +
                               (float10)(float)param_12 * (float10)*(float *)fVar15 *
                               (float10)param_13 + (float10)*pfVar2);
        DAT_1018a1ac = (float)((float10)(float)param_12 * (float10)*(float *)((int)fVar15 + 4) *
                               (float10)param_13 +
                               fVar9 * (float10)(float)param_14 *
                               (float10)*(float *)((int)fVar16 + 4) + (float10)pfVar2[1]);
        DAT_1018a1b0 = (float)((float10)(float)param_12 * (float10)*(float *)((int)fVar15 + 8) *
                               (float10)param_13 +
                               fVar9 * (float10)*(float *)((int)fVar16 + 8) *
                               (float10)(float)param_14 + (float10)pfVar2[2]);
        _DAT_1018a1b8 = (float)(int)DAT_1018a0e0[5] * DAT_1018a1a8 + *pfVar3;
        _DAT_1018a1bc = (float)(int)DAT_1018a0e0[5] * DAT_1018a1ac + pfVar3[1];
        _DAT_1018a1c0 = (float)(int)DAT_1018a0e0[5] * DAT_1018a1b0 + pfVar3[2];
        if (DAT_1018a154 == '\0') {
          (*(gEngfuncs.pEventAPI)->EV_SetUpPlayerPrediction)(0,1);
          (*(gEngfuncs.pEventAPI)->EV_PushPMStates)();
          (*(gEngfuncs.pEventAPI)->EV_SetSolidPlayers)((int)param_8 + -1);
          (*(gEngfuncs.pEventAPI)->EV_SetTraceHull)(2);
          (*(gEngfuncs.pEventAPI)->EV_PlayerTrace)
                    (pfVar3,(float *)&DAT_1018a1b8,2,-1,(pmtrace_s *)&DAT_1018a110);
          if (_DAT_1018a120 != 1.0) {
            _DAT_1018a100 = *pfVar3 - DAT_1018a124;
            _DAT_1018a104 = pfVar3[1] - DAT_1018a128;
            _DAT_1018a108 = pfVar3[2] - DAT_1018a12c;
            fVar9 = FUN_10058390((float *)&DAT_1018a100);
            _DAT_1018a0f4 = (float)(fVar9 / ((float10)(int)DAT_1018a0e0[8] * (float10)10.0));
            lVar11 = __ftol();
            fVar9 = FUN_10007290((int)lVar11);
            DAT_1018a164 = (float)(fVar9 * (float10)in_stack_00000060);
            iVar7 = in_stack_00000064;
            if (in_stack_00000064 == 1) {
              iVar7 = 1;
            }
            FUN_10044bf0(in_stack_0000003c,0x1018a110,pfVar3,&DAT_1018a1b8,iVar7);
            FUN_10001180(0x1018a110);
            DAT_1018a164 = DAT_1018a164 * (float)DAT_1018a0e0[6];
          }
          (*(gEngfuncs.pEventAPI)->EV_PopPMStates)();
        }
        else {
          local_28 = *pfVar3;
          local_24 = pfVar3[1];
          local_20 = pfVar3[2];
          fStack_10 = DAT_1018a1a8;
          fStack_c = DAT_1018a1ac;
          fStack_8 = DAT_1018a1b0;
          local_1c = local_28;
          local_18 = local_24;
          fStack_14 = local_20;
          FUN_10035c20(&DAT_100eb678,(int)param_6,(int *)&local_1c,(int *)&fStack_10,
                       (int *)&stack0x0000003c,&stack0x00000044,(int)in_stack_00000040);
        }
        bVar4 = (char)DAT_1018a0dc + 1;
        DAT_1018a0dc = CONCAT31(DAT_1018a0dc._1_3_,bVar4);
      } while (bVar4 <= param_10._0_1_);
    }
    if (((DAT_1018a154 == '\0') && (in_stack_00000040 != 1.4013e-45)) && (5.0 < DAT_1018a164)) {
      fVar17 = DAT_1018a164;
      if (48.0 <= DAT_1018a164) {
        fVar17 = 48.0;
      }
      fStack_10 = fVar17 * DAT_1018a1a8;
      _DAT_1018a0e8 = fStack_10 + DAT_1018a124;
      _DAT_1018a0ec = DAT_1018a1ac * fVar17 + DAT_1018a128;
      _DAT_1018a0f0 = fVar17 * DAT_1018a1b0 + DAT_1018a12c;
      local_28 = _DAT_1018a0e8;
      local_24 = _DAT_1018a0ec;
      local_20 = _DAT_1018a0f0;
      fStack_c = _DAT_1018a0ec;
      fStack_8 = _DAT_1018a0f0;
      iVar7 = (*gEngfuncs.PM_PointContents)((float *)&DAT_1018a0e8,(int *)0x0);
      if (iVar7 != -2) {
        _DAT_1018a158 = DAT_1018a124;
        _DAT_1018a15c = DAT_1018a128;
        _DAT_1018a160 = DAT_1018a12c;
        (*(gEngfuncs.pEventAPI)->EV_SetTraceHull)(2);
        (*(gEngfuncs.pEventAPI)->EV_PlayerTrace)
                  ((float *)&DAT_1018a0e8,&DAT_1018a124,0,-1,(pmtrace_s *)&DAT_1018a110);
        if (_DAT_1018a120 != 1.0) {
          FUN_10044bf0(param_14,0x1018a110,&DAT_1018a0e8,&DAT_1018a158,2);
          FUN_10001180(0x1018a110);
        }
        FUN_100450c0(param_14,in_stack_0000003c,(float *)fVar15,(float *)fVar16,'\x01',
                     (float *)&DAT_1018a0e8,&DAT_1018a1a8,0.0,0.0,DAT_1018a164,2,in_stack_00000064,
                     (float)in_stack_00000068,in_stack_0000006c);
      }
    }
    return;
  }
  _DAT_1018a1b8 = *param_7 * 4096.0 + *param_6;
  _DAT_1018a1bc = param_7[1] * 4096.0 + param_6[1];
  _DAT_1018a1c0 = param_7[2] * 4096.0 + param_6[2];
  (*(gEngfuncs.pEventAPI)->EV_SetUpPlayerPrediction)(0,1);
  (*(gEngfuncs.pEventAPI)->EV_PushPMStates)();
  pfVar2 = param_3;
  (*(gEngfuncs.pEventAPI)->EV_SetSolidPlayers)((int)param_3 + -1);
  (*(gEngfuncs.pEventAPI)->EV_SetTraceHull)(2);
  (*(gEngfuncs.pEventAPI)->EV_PlayerTrace)
            (pfVar3,(float *)&DAT_1018a1b8,2,-1,(pmtrace_s *)&DAT_1018a110);
  if (_DAT_1018a120 != 1.0) {
    FUN_10044bf0(pfVar2,0x1018a110,pfVar3,&DAT_1018a1b8,2);
    FUN_10001180(0x1018a110);
  }
  (*(gEngfuncs.pEventAPI)->EV_PopPMStates)();
  return;
}

/* 10045df0  FUN_10045df0  (735 bytes)
 * undefined1 FUN_10045df0(undefined4 param_1, int param_2, undefined4 param_3, undefined4 param_4)
 */
undefined1 __cdecl FUN_10045df0(undefined4 param_1,int param_2,float *param_3,float *param_4)

{
  _func_408 **pp_Var1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  byte_conflict *pbVar9;
  float attenuation;
  char *pcVar10;
  byte_conflict *pbVar11;
  longlong lVar12;
  float *in_stack_00000018;
  float *in_stack_0000001c;
  float volume;
  int in_stack_ffffff78;
  float *point;
  undefined4 uStack_6c;
  char acStack_68 [2];
  char acStack_66 [10];
  float *pfStack_5c;
  byte_conflict abStack_28 [15];
  undefined1 uStack_19;
  
  point = (float *)(param_2 + 0x14);
  iVar4 = (*gEngfuncs.PM_PointContents)(point,(int *)0x0);
  if (iVar4 == -6) {
    return 0;
  }
  iVar4 = (*(gEngfuncs.pEventAPI)->EV_IndexFromTrace)((pmtrace_s *)param_2);
  uVar3 = 0;
  if ((iVar4 < 1) || (iVar5 = (*gEngfuncs.GetMaxClients)(), iVar5 < iVar4)) {
    pcVar6 = (*(gEngfuncs.pEventAPI)->EV_TraceTexture)
                       (*(int *)(param_2 + 0x30),in_stack_00000018,in_stack_0000001c);
    if (pcVar6 != (char *)0x0) {
      uVar7 = 0xffffffff;
      do {
        pcVar10 = pcVar6;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar10 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar10;
      } while (cVar2 != '\0');
      uVar7 = ~uVar7;
      pcVar6 = pcVar10 + -uVar7;
      pcVar10 = acStack_68;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar10 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar10 = pcVar10 + 1;
      }
      pcVar6 = acStack_68;
      if ((acStack_68[0] == '-') || (acStack_68[0] == '+')) {
        pcVar6 = acStack_68 + 2;
      }
      cVar2 = *pcVar6;
      if ((((cVar2 == '{') || (cVar2 == '!')) || (cVar2 == '~')) || (cVar2 == ' ')) {
        pcVar6 = pcVar6 + 1;
      }
      uVar7 = 0xffffffff;
      do {
        pcVar10 = pcVar6;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar10 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar10;
      } while (cVar2 != '\0');
      uVar7 = ~uVar7;
      pbVar9 = (byte_conflict *)(pcVar10 + -uVar7);
      pbVar11 = abStack_28;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pbVar11 = *(undefined4 *)pbVar9;
        pbVar9 = pbVar9 + 4;
        pbVar11 = pbVar11 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pbVar11 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        pbVar11 = pbVar11 + 1;
      }
      uStack_19 = 0;
      uVar3 = FUN_1002a340(abStack_28);
    }
  }
  else {
    uVar3 = 0x46;
  }
  switch(uVar3) {
  case 0x44:
    iVar4 = 3;
    break;
  default:
    goto LAB_1004605c;
  case 0x46:
    return uVar3;
  case 0x47:
    goto LAB_1004605c;
  case 0x4d:
    goto LAB_1004605c;
  case 0x50:
  case 0x59:
    iVar4 = 3;
    break;
  case 0x53:
    iVar4 = 4;
    break;
  case 0x54:
    iVar4 = 4;
    break;
  case 0x56:
LAB_1004605c:
    iVar4 = 2;
    break;
  case 0x57:
    iVar4 = 3;
  }
  iVar5 = (*gEngfuncs.pfnRandomLong)(-5,5);
  lVar12 = __ftol();
  attenuation = (float)(iVar5 + (0x19 - (int)lVar12));
  volume = 0.0;
  pp_Var1 = &(gEngfuncs.pEventAPI)->EV_PlaySound;
  iVar4 = (*gEngfuncs.pfnRandomLong)(0,iVar4 + -1);
  (**pp_Var1)(0,pfStack_5c,6,(char *)(&uStack_6c)[iVar4],volume,attenuation,in_stack_ffffff78,
              (int)point);
  return uVar3;
}

/* 10046110  FUN_10046110  (294 bytes)
 * undefined FUN_10046110(float * param_1, float * param_2)
 * called by: FUN_10035010, FUN_10046a70, FUN_10055500, FUN_10055760
 */
void __cdecl FUN_10046110(float *param_1,float *param_2)

{
  float fVar1;
  float10 extraout_ST1;
  longlong lVar2;
  
  if ((param_2[1] == 0.0) && (*param_2 == 0.0)) {
    if (0.0 < param_2[2]) {
      *param_1 = -90.0;
      param_1[2] = 0.0;
      param_1[1] = 0.0;
      return;
    }
    *param_1 = -270.0;
    param_1[2] = 0.0;
    param_1[1] = 0.0;
    return;
  }
  if (*param_2 != 0.0) {
    fpatan((float10)param_2[1],(float10)*param_2);
    __ftol();
  }
  fpatan((float10)param_2[2],
         SQRT((float10)param_2[1] * (float10)param_2[1] + (float10)*param_2 * (float10)*param_2));
  lVar2 = __ftol();
  fVar1 = (float)(int)lVar2;
  if (fVar1 < 0.0) {
    fVar1 = fVar1 + 360.0;
  }
  *param_1 = -fVar1;
  param_1[2] = 0.0;
  param_1[1] = (float)extraout_ST1;
  return;
}

/* 10046240  FUN_10046240  (674 bytes)
 * undefined FUN_10046240(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9)
 * called by: FUN_10035010
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_10046240(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8,float param_9)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar1 = FUN_100509d0(&DAT_1018bde8,(byte_conflict *)s_sprites_bullet_trail_spr_100956fc,5);
  if (iVar1 != -1) {
    puVar2 = FUN_1004ffe0();
    *(undefined1 *)((int)puVar2 + 5) = 0;
    *(undefined1 *)puVar2 = 1;
    puVar2[0x37] = param_9 * 0.75;
    puVar2[0x38] = 0x3dcccccd;
    *(short *)(puVar2 + 0x45) = (short)iVar1;
    puVar2[0x42] = param_7;
    puVar2[5] = param_1;
    puVar2[6] = param_2;
    *(undefined1 *)(puVar2 + 1) = 4;
    puVar2[7] = param_3;
    puVar2[0x2c] = 0;
    puVar2[0x30] = 0;
    puVar2[0x2d] = 0x3f800000;
    puVar2[0x31] = 0;
    puVar2[0x2e] = 0x3f800000;
    puVar2[0x32] = 0x3f800000;
    puVar2[0x2f] = 0;
    puVar2[0x33] = 0x3f800000;
    local_30 = param_4 - _DAT_1018bda8 * param_8;
    local_2c = param_5 - _DAT_1018bdac * param_8;
    local_28 = param_6 - _DAT_1018bdb0 * param_8;
    puVar2[0x20] = local_30;
    puVar2[0x21] = local_2c;
    puVar2[0x22] = local_28;
    local_24 = _DAT_1018bda8 * param_8;
    local_20 = _DAT_1018bdac * param_8;
    local_1c = _DAT_1018bdb0 * param_8;
    FUN_10002610(&local_30,&local_24);
    local_18 = local_30 + param_4;
    local_14 = param_5 + local_2c;
    local_10 = param_6 + local_28;
    FUN_10002610(&local_c,&local_18);
    puVar2[0x23] = local_c;
    puVar2[0x24] = local_8;
    puVar2[0x25] = local_4;
    param_4 = _DAT_1018bda8 * param_7;
    param_5 = _DAT_1018bdac * param_7;
    param_6 = _DAT_1018bdb0 * param_7;
    FUN_10002610(&local_c,&param_4);
    local_18 = local_c + param_1;
    local_14 = param_2 + local_8;
    local_10 = param_3 + local_4;
    FUN_10002610(&local_24,&local_18);
    puVar2[0x26] = local_24;
    puVar2[0x27] = local_20;
    puVar2[0x28] = local_1c;
    param_4 = _DAT_1018bda8 * param_7;
    param_5 = _DAT_1018bdac * param_7;
    param_6 = _DAT_1018bdb0 * param_7;
    FUN_10002610(&local_c,&param_4);
    puVar3 = (undefined4 *)FUN_1003d200(&param_1,&local_18,&local_c);
    puVar2[0x29] = *puVar3;
    puVar2[0x2a] = puVar3[1];
    puVar2[0x2b] = puVar3[2];
    FUN_10050b60(&DAT_1018bde8,puVar2,0,0);
  }
  return;
}

/* 100464f0  FUN_100464f0  (393 bytes)
 * undefined FUN_100464f0(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, byte.conflict * param_7, undefined4 param_8, short param_9, int param_10)
 * called by: FUN_10048840
 */
void __cdecl
FUN_100464f0(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            byte_conflict *param_7,undefined4 param_8,short param_9,int param_10)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  float10 fVar6;
  float local_c;
  float local_8;
  float local_4;
  
  uVar2 = FUN_10050ad0(&DAT_1018bde8,0);
  if ((char)uVar2 != '\0') {
    fVar6 = FUN_10056fa0(DAT_1018ca48);
    FUN_10050b00(&DAT_1018bde8,0,(float)fVar6);
    uVar2 = FUN_100570b0(&param_1);
    if ((char)uVar2 != '\0') {
      uVar2 = FUN_10057270(&local_c);
      iVar3 = FUN_100572a0(&param_1,uVar2);
      if ((char)iVar3 != '\0') {
        iVar3 = FUN_100509d0(&DAT_1018bde8,param_7,(short)param_8);
        if (iVar3 != -1) {
          puVar4 = FUN_1004ffe0();
          iVar5 = (int)(short)param_10;
          param_10 = (int)param_9;
          *(undefined1 *)((int)puVar4 + 5) = 0;
          *(undefined1 *)puVar4 = 1;
          puVar4[0x38] = 0;
          puVar4[0x37] = 0x3f800000;
          puVar4[0x3f] = (float)iVar5;
          *(short *)(puVar4 + 0x45) = (short)iVar3;
          puVar4[0x36] = 0;
          puVar4[0x3e] = 0;
          puVar4[0x42] = (float)param_10;
          fVar1 = (float)param_10 * 0.5;
          local_c = param_4 * fVar1;
          param_4 = param_1 + local_c;
          param_5 = param_2 + param_5 * fVar1;
          *(undefined1 *)(puVar4 + 1) = 0;
          param_6 = param_3 + fVar1 * param_6;
          puVar4[0xe] = 0;
          puVar4[5] = param_4;
          puVar4[6] = param_5;
          puVar4[7] = param_6;
          puVar4[0xf] = 0;
          puVar4[0x10] = 0xc0000000;
          puVar4[0x39] = 0x3f000000;
          puVar4[0x3d] = 0x40533333;
          puVar4[0x4a] = 0x40e00000;
          local_8 = param_5;
          local_4 = param_6;
          FUN_10050b60(&DAT_1018bde8,puVar4,0,0);
        }
      }
    }
  }
  return;
}

/* 10046680  FUN_10046680  (994 bytes)
 * undefined FUN_10046680(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, byte.conflict * param_7, int param_8, short param_9, undefined4 param_10, float param_11, int param_12)
 * called by: FUN_10048f60
 */
void __cdecl
FUN_10046680(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            byte_conflict *param_7,int param_8,short param_9,int param_10,float param_11,
            int param_12)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  float10 fVar7;
  longlong lVar8;
  longlong lVar9;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 local_c;
  float fStack_8;
  float fStack_4;
  
  if ((char)param_12 == '\0') {
    uVar3 = FUN_10050ad0(&DAT_1018bde8,0);
    if ((char)uVar3 == '\0') {
      return;
    }
    fVar7 = FUN_10056fa0(DAT_1018ca48);
    FUN_10050b00(&DAT_1018bde8,0,(float)fVar7);
  }
  uVar3 = FUN_100570b0(&param_1);
  if ((char)uVar3 != '\0') {
    uVar3 = FUN_10057270(&local_c);
    iVar4 = FUN_100572a0(&param_1,uVar3);
    if (((char)iVar4 != '\0') &&
       (iVar4 = FUN_100509d0(&DAT_1018bde8,param_7,(short)param_8), iVar4 != -1)) {
      puVar5 = FUN_1004ffe0();
      iVar6 = (int)param_11._0_2_;
      param_11 = (float)iVar6;
      param_12 = (int)(short)param_10;
      puVar5[0x3f] = param_11;
      fVar2 = (float)param_12;
      puVar5[0x34] = 0x3dcccccd;
      *(undefined1 *)((int)puVar5 + 7) = 0;
      puVar5[0x42] = fVar2;
      local_54 = param_4 * fVar2;
      *(undefined1 *)((int)puVar5 + 6) = 0;
      *(undefined1 *)((int)puVar5 + 5) = 0;
      *(undefined1 *)puVar5 = 1;
      puVar5[0x38] = 0;
      local_50 = param_5 * fVar2;
      puVar5[0x37] = 0x3f000000;
      *(short *)(puVar5 + 0x45) = (short)iVar4;
      puVar5[0x36] = 0;
      puVar5[0x3e] = 0;
      local_48 = local_54 * 0.5;
      local_44 = local_50 * 0.5;
      local_40 = fVar2 * param_6 * 0.5;
      FUN_10002610(&local_54,&local_48);
      local_3c = local_54 + param_1;
      local_38 = param_2 + local_50;
      local_34 = param_3 + local_4c;
      FUN_10002610(&local_30,&local_3c);
      *(undefined1 *)(puVar5 + 1) = 0;
      puVar5[0x3d] = 0x40533333;
      puVar5[0x4a] = 0x40e00000;
      puVar5[5] = local_30;
      param_12 = 0;
      puVar5[6] = local_2c;
      puVar5[7] = local_28;
      if (0 < param_9) {
        lVar8 = __ftol();
        param_11 = (float)-iVar6;
        lVar9 = __ftol();
        param_10 = (int)lVar9;
        pfVar1 = (float *)(puVar5 + 0xe);
        param_11 = (float)(int)param_9;
        do {
          iVar4 = (*gEngfuncs.pfnRandomLong)(param_10,(int)lVar8);
          param_8 = iVar4 + iVar6;
          puVar5[0x3f] = (float)param_8;
          fVar7 = (float10)(*gEngfuncs.pfnRandomFloat)(8.0,24.0);
          local_30 = (float)((float10)param_4 * fVar7);
          local_2c = (float)((float10)param_5 * fVar7);
          local_28 = (float)((float10)param_6 * fVar7);
          FUN_10002610(&local_3c,&local_30);
          local_40 = (float)(int)param_11;
          local_48 = local_3c / local_40;
          local_44 = local_38 / local_40;
          local_40 = local_34 / local_40;
          FUN_10002610(&fStack_24,&local_48);
          *pfVar1 = fStack_24;
          puVar5[0xf] = uStack_20;
          puVar5[0x10] = uStack_1c;
          fVar7 = (float10)(*gEngfuncs.pfnRandomFloat)(-2.0,2.0);
          *pfVar1 = (float)(fVar7 + (float10)*pfVar1);
          fVar7 = (float10)(*gEngfuncs.pfnRandomFloat)(-2.0,2.0);
          puVar5[0xf] = (float)(fVar7 + (float10)(float)puVar5[0xf]);
          puVar5[0x39] = 0x3dcccccd;
          iVar4 = FUN_10050b60(&DAT_1018bde8,puVar5,0,0);
          if (iVar4 == -1) {
            return;
          }
          fVar2 = (float)puVar5[0x42];
          puVar5[0x42] = fVar2 * 0.8;
          fVar2 = fVar2 * 0.8 * (float)param_12;
          fStack_18 = param_4 * fVar2;
          fStack_14 = param_5 * fVar2;
          local_54 = fStack_18 + param_1;
          local_50 = param_2 + fStack_14;
          local_4c = param_3 + fVar2 * param_6;
          puVar5[5] = local_54;
          puVar5[6] = local_50;
          puVar5[7] = local_4c;
          param_12 = param_12 + 1;
          param_11 = (float)((int)param_11 + -1);
          fStack_8 = local_50;
          fStack_4 = local_4c;
        } while (param_12 < param_9);
      }
    }
  }
  return;
}

/* 10046a70  FUN_10046a70  (351 bytes)
 * undefined FUN_10046a70(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, byte.conflict * param_7, int param_8, int param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13)
 * called by: FUN_10048f60
 */
void __cdecl
FUN_10046a70(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            byte_conflict *param_7,int param_8,int param_9,undefined4 param_10,undefined4 param_11,
            undefined4 param_12,undefined4 param_13)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  short sVar4;
  
  uVar1 = FUN_100570b0(&param_1);
  if ((char)uVar1 != '\0') {
    sVar4 = (short)param_8;
    iVar2 = FUN_100509d0(&DAT_1018bde8,param_7,sVar4);
    if (iVar2 != -1) {
      puVar3 = FUN_1004ffe0();
      puVar3[0x34] = 0;
      *(undefined1 *)((int)puVar3 + 7) = 0;
      *(undefined1 *)((int)puVar3 + 6) = 0;
      *(undefined1 *)((int)puVar3 + 5) = 2;
      *(undefined1 *)puVar3 = 1;
      uVar1 = param_12;
      if (sVar4 != 5) {
        uVar1 = 0;
      }
      puVar3[0x38] = uVar1;
      puVar3[0x37] = param_11;
      *(short *)(puVar3 + 0x45) = (short)iVar2;
      puVar3[0x3f] = 0;
      *(undefined1 *)(puVar3 + 1) = 0;
      param_8 = FUN_100509a0(&DAT_1018bde8,(int)(short)iVar2);
      param_9 = (int)(short)param_9;
      puVar3[0x3e] = (float)param_8;
      puVar3[0x42] = (float)param_9;
      puVar3[5] = param_4 * 0.1 + param_1;
      puVar3[6] = param_2 + param_5 * 0.1;
      puVar3[0x39] = param_13;
      puVar3[7] = param_3 + param_6 * 0.1;
      FUN_10046110((float *)(puVar3 + 8),&param_4);
      puVar3[0x36] = param_10;
      FUN_10050b60(&DAT_1018bde8,puVar3,0,0);
    }
  }
  return;
}

/* 10046bd0  FUN_10046bd0  (888 bytes)
 * undefined FUN_10046bd0(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, byte.conflict * param_7, int param_8, int param_9, undefined4 param_10, int param_11, float param_12, undefined4 param_13, int param_14, int param_15)
 * called by: FUN_1003dfa0, FUN_10040c20, FUN_10048f60
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_10046bd0(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            byte_conflict *param_7,int param_8,int param_9,undefined4 param_10,int param_11,
            float param_12,undefined4 param_13,int param_14,int param_15)

{
  float *pfVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  float10 fVar6;
  longlong lVar7;
  short sVar8;
  float fVar9;
  undefined4 local_c;
  float local_8;
  float local_4;
  
  uVar2 = FUN_100570b0(&param_1);
  if ((char)uVar2 != '\0') {
    uVar2 = FUN_10057270(&local_c);
    iVar3 = FUN_100572a0(&param_1,uVar2);
    if ((char)iVar3 != '\0') {
      if ((char)param_14 == '\0') {
        uVar2 = FUN_10050ad0(&DAT_1018bde8,2);
        if ((char)uVar2 == '\0') {
          uVar2 = FUN_10050ad0(&DAT_1018bde8,3);
          if ((char)uVar2 == '\0') {
            uVar2 = FUN_10050ad0(&DAT_1018bde8,4);
            if ((char)uVar2 == '\0') {
              uVar2 = FUN_10050ad0(&DAT_1018bde8,5);
              if ((char)uVar2 == '\0') {
                return;
              }
              fVar6 = FUN_10056fa0(DAT_1018ca44);
              fVar9 = (float)fVar6;
              sVar8 = 5;
            }
            else {
              fVar6 = FUN_10056fa0(DAT_1018ca44);
              fVar9 = (float)fVar6;
              sVar8 = 4;
            }
          }
          else {
            fVar6 = FUN_10056fa0(DAT_1018ca44);
            fVar9 = (float)fVar6;
            sVar8 = 3;
          }
        }
        else {
          fVar6 = FUN_10056fa0(DAT_1018ca44);
          fVar9 = (float)fVar6;
          sVar8 = 2;
        }
        FUN_10050b00(&DAT_1018bde8,sVar8,fVar9);
      }
      sVar8 = (short)param_8;
      iVar3 = FUN_100509d0(&DAT_1018bde8,param_7,sVar8);
      if (iVar3 != -1) {
        puVar4 = FUN_1004ffe0();
        puVar4[0x34] = param_13;
        *(undefined1 *)((int)puVar4 + 7) = 0;
        *(undefined1 *)((int)puVar4 + 6) = 0;
        *(undefined1 *)((int)puVar4 + 5) = 1;
        *(undefined1 *)puVar4 = 1;
        if (sVar8 == 5) {
          puVar4[0x38] = 0x3d4ccccd;
        }
        else {
          puVar4[0x38] = 0;
        }
        puVar4[0x37] = 0x3f800000;
        *(short *)(puVar4 + 0x45) = (short)iVar3;
        puVar4[0x3f] = 0;
        puVar4[0x40] = 0x3e99999a;
        puVar4[0x4a] = 0;
        puVar4[0x42] = param_10;
        local_8 = param_2 + param_5 + param_5;
        local_4 = param_3 + param_6 + param_6;
        puVar4[0x48] = 2;
        puVar4[5] = param_4 + param_4 + param_1;
        puVar4[6] = local_8;
        puVar4[7] = local_4;
        *(byte *)(puVar4 + 1) = -((char)param_15 != '\0') & 3;
        param_14 = (*gEngfuncs.pfnRandomLong)((int)(short)param_9 / 2,(int)(short)param_9);
        lVar7 = __ftol();
        param_14 = (int)lVar7;
        param_15 = 0;
        if (0 < param_14) {
          param_4 = param_4 * 16.0;
          param_5 = param_5 * 16.0;
          iVar3 = (int)(short)param_11;
          param_6 = param_6 * 16.0;
          pfVar1 = (float *)(puVar4 + 0xe);
          param_11 = iVar3 / 2;
          param_8 = -(iVar3 / 2);
          local_8 = param_5;
          local_4 = param_6;
          do {
            param_9 = (*gEngfuncs.pfnRandomLong)(-0xb4,0xb4);
            puVar4[0x13] = (float)param_9;
            *pfVar1 = param_4;
            puVar4[0xf] = param_5;
            puVar4[0x10] = param_6;
            param_9 = (*gEngfuncs.pfnRandomLong)(-iVar3,iVar3);
            *pfVar1 = (float)param_9 + *pfVar1;
            param_9 = (*gEngfuncs.pfnRandomLong)(-iVar3,iVar3);
            puVar4[0xf] = (float)param_9 + (float)puVar4[0xf];
            param_9 = (*gEngfuncs.pfnRandomLong)(param_8,param_11);
            puVar4[0x10] = (float)param_9 + (float)puVar4[0x10];
            puVar4[0x36] = (float)puVar4[0x13] * 0.001 + param_12;
            param_9 = FUN_100509a0(&DAT_1018bde8,(int)*(short *)(puVar4 + 0x45));
            puVar4[0x3e] = (float)param_9;
            iVar5 = FUN_10050b60(&DAT_1018bde8,puVar4,0,0);
            if (iVar5 == -1) {
              return;
            }
            param_15 = param_15 + 1;
          } while (param_15 < param_14);
        }
      }
    }
  }
  return;
}

/* 10046f50  FUN_10046f50  (470 bytes)
 * undefined FUN_10046f50(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, byte.conflict * param_7, short param_8, short param_9)
 * called by: FUN_10048f60, FUN_1004bd50
 */
void __cdecl
FUN_10046f50(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            byte_conflict *param_7,short param_8,short param_9)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar2 = FUN_100509d0(&DAT_1018bde8,param_7,param_8);
  if (iVar2 != -1) {
    puVar3 = FUN_1004ffe0();
    *(short *)(puVar3 + 0x45) = (short)iVar2;
    puVar3[0x34] = 0;
    *(undefined1 *)((int)puVar3 + 7) = 0;
    puVar3[0xe] = param_4 + param_4;
    *(undefined1 *)((int)puVar3 + 6) = 0;
    puVar3[0xf] = param_5 + param_5;
    *(undefined1 *)((int)puVar3 + 5) = 0;
    *(undefined1 *)puVar3 = 1;
    puVar3[0x10] = param_6 + param_6;
    puVar3[0x38] = 0x3d4ccccd;
    puVar3[0x42] = (float)(int)param_9;
    puVar3[0x37] = 0x3f333333;
    puVar3[0x3f] = 0;
    puVar3[0x36] = 0;
    *(undefined1 *)(puVar3 + 1) = 0;
    _param_8 = 0;
    if (param_9 < 0x19 != 0xffffffff) {
      do {
        iVar2 = _param_8 + 1;
        puVar3[0x42] = (float)puVar3[0x42] - (float)_param_8;
        fVar1 = (float)iVar2 * (float)(int)param_9 * 0.5;
        puVar3[5] = param_1 + param_4 * fVar1;
        puVar3[6] = param_2 + param_5 * fVar1;
        puVar3[7] = param_3 + fVar1 * param_6;
        iVar4 = FUN_100509a0(&DAT_1018bde8,(int)*(short *)(puVar3 + 0x45));
        puVar3[0x3e] = (float)iVar4;
        if (_param_8 < 1) {
          puVar3[0x39] = 0;
        }
        else {
          puVar3[0x39] = 0x3f800000;
        }
        iVar4 = FUN_10050b60(&DAT_1018bde8,puVar3,0,0);
      } while ((iVar4 != -1) && (_param_8 = iVar2, iVar2 < (int)((param_9 < 0x19) + 1)));
    }
  }
  return;
}

/* 10047130  FUN_10047130  (896 bytes)
 * undefined FUN_10047130(short param_1, int param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9, float param_10, float param_11, float param_12, int param_13)
 * called by: FUN_1003dfa0, FUN_1003f090, FUN_10040c20
 */
void __cdecl
FUN_10047130(short param_1,int param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8,float param_9,float param_10,float param_11,float param_12,
            int param_13)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  float10 fVar6;
  longlong lVar7;
  longlong lVar8;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 local_c;
  float fStack_8;
  float fStack_4;
  
  if ((char)param_13 == '\0') {
    uVar3 = FUN_10050ad0(&DAT_1018bde8,1);
    if ((char)uVar3 == '\0') {
      return;
    }
    fVar6 = FUN_10056fa0(0.1);
    FUN_10050b00(&DAT_1018bde8,1,(float)fVar6);
  }
  if ((*(float *)(DAT_100df464 + 0xc) != 0.0) &&
     (uVar3 = FUN_100570b0(&param_3), (char)uVar3 != '\0')) {
    uVar3 = FUN_10057270(&local_c);
    iVar4 = FUN_100572a0(&param_3,uVar3);
    if (((char)iVar4 != '\0') &&
       (iVar4 = FUN_100509d0(&DAT_1018bde8,(byte_conflict *)s_sprites_gun_smoke_add_spr_100953f0,5),
       iVar4 != -1)) {
      puVar5 = FUN_1004ffe0();
      puVar5[0x3f] = (float)param_2;
      puVar5[0x34] = 0x3c23d70a;
      *(undefined1 *)((int)puVar5 + 7) = 0;
      *(undefined1 *)((int)puVar5 + 6) = 0;
      *(undefined1 *)((int)puVar5 + 5) = 0;
      puVar5[0x42] = (float)(int)param_1;
      *(undefined1 *)puVar5 = 1;
      puVar5[0x38] = 0;
      puVar5[0x37] = 0x3e99999a;
      *(short *)(puVar5 + 0x45) = (short)iVar4;
      fVar2 = (float)(int)param_1 * 0.5;
      puVar5[0x36] = 0;
      puVar5[0x3e] = 0;
      param_13 = 0;
      *(undefined1 *)(puVar5 + 1) = 0;
      puVar5[0x3d] = 0x40533333;
      puVar5[5] = param_3 + param_9 * fVar2;
      puVar5[6] = param_4 + param_10 * fVar2;
      puVar5[7] = param_5 + fVar2 * param_11;
      lVar7 = __ftol();
      lVar8 = __ftol();
      pfVar1 = (float *)(puVar5 + 0xe);
      _param_1 = 5;
      do {
        iVar4 = (*gEngfuncs.pfnRandomLong)((int)lVar8,(int)lVar7);
        puVar5[0x3f] = (float)(iVar4 + param_2);
        fVar2 = param_12 / (float)_param_1;
        fStack_30 = param_6 + fVar2 * param_9;
        fStack_2c = param_7 + param_10 * fVar2;
        fStack_28 = param_8 + fVar2 * param_11;
        FUN_10002610(&fStack_24,&fStack_30);
        fVar2 = (float)puVar5[0x42] * 0.2;
        *pfVar1 = fStack_24;
        puVar5[0xf] = uStack_20;
        puVar5[0x10] = uStack_1c;
        fVar6 = (float10)(*gEngfuncs.pfnRandomFloat)(-fVar2,fVar2);
        *pfVar1 = (float)(fVar6 + (float10)*pfVar1);
        fVar6 = (float10)(*gEngfuncs.pfnRandomFloat)(-fVar2,fVar2);
        puVar5[0xf] = (float)(fVar6 + (float10)(float)puVar5[0xf]);
        puVar5[0x39] = 0x3dcccccd;
        iVar4 = FUN_10050b60(&DAT_1018bde8,puVar5,0,0);
        if (iVar4 == -1) {
          return;
        }
        fVar2 = (float)puVar5[0x42];
        puVar5[0x42] = fVar2 * 0.8;
        fVar2 = fVar2 * 0.8 * (float)param_13;
        fStack_18 = fVar2 * param_9;
        fStack_14 = param_10 * fVar2;
        fStack_8 = param_4 + fStack_14;
        fStack_4 = param_5 + fVar2 * param_11;
        puVar5[5] = fStack_18 + param_3;
        puVar5[6] = fStack_8;
        puVar5[7] = fStack_4;
        _param_1 = _param_1 + -1;
        param_13 = param_13 + 1;
      } while (0 < _param_1);
    }
  }
  return;
}

/* 100474b0  FUN_100474b0  (2045 bytes)
 * undefined FUN_100474b0(float param_1, float param_2, float param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, float param_7, float param_8, float param_9, float param_10, float param_11, float param_12, int param_13, float param_14)
 * called by: FUN_1003dfa0, FUN_1003f090, FUN_10040c20
 */
void __cdecl
FUN_100474b0(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8,float param_9,float param_10,float param_11,float param_12,
            int param_13,float param_14)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  short sVar7;
  int iVar8;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 fVar9;
  float10 extraout_ST0_04;
  float10 extraout_ST0_05;
  longlong lVar10;
  float in_stack_0000003c;
  float fStack00000040;
  float in_stack_00000048;
  int in_stack_0000004c;
  float in_stack_00000050;
  float in_stack_ffffff98;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack_24;
  float fStack_20;
  float fStack_18;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  fVar4 = (float)(uint)*(byte *)((int)param_7 + 0x350);
  param_7 = *(float *)((int)param_7 + 0x358);
  if (param_14._0_1_ != '\0') {
    lVar10 = __ftol();
    param_7 = (float)lVar10;
  }
  if (param_12._0_1_ == '\0') {
    fVar14 = 60.0;
    fVar13 = 50.0;
    fVar12 = 2.6122616e-29;
    (*gEngfuncs.pfnRandomFloat)(50.0,60.0);
    pfVar5 = &param_10;
    fVar6 = (float)(extraout_ST0 * (float10)(int)param_9);
    fVar11 = 2.6122706e-29;
    FUN_10002610(&stack0xffffffa4,pfVar5);
    FUN_10002610(&stack0xffffff98,&param_3);
    FUN_10052c80(&DAT_1018bde8,in_stack_ffffff98,fVar11,(float)pfVar5,fVar12,fVar13,fVar14,fVar4,
                 fVar6);
  }
  fStack00000040 = (float)(int)(short)param_13;
  lVar10 = __ftol();
  param_13 = (int)lVar10;
  if ((short)lVar10 < 3) {
    param_13 = 3;
  }
  iVar8 = param_13;
  puVar2 = FUN_1004ffe0();
  puVar2[0x40] = 0;
  puVar2[0x3d] = 0x40533333;
  puVar2[0x4a] = 0;
  iVar3 = FUN_100509d0(&DAT_1018bde8,(byte_conflict *)s_sprites_ts_muzzleflash1h_spr_10095734,5);
  if (iVar3 != -1) {
    sVar7 = (short)iVar3;
    if (param_14._0_1_ == '\0') {
      fVar4 = (float)(int)(short)param_13;
      iVar8 = 0;
      puVar2[0x34] = 0;
      *(undefined1 *)((int)puVar2 + 7) = 0;
      *(undefined1 *)((int)puVar2 + 6) = 0;
      *(undefined1 *)puVar2 = 1;
      puVar2[0x36] = 0;
      puVar2[0x3f] = 0;
      *(undefined1 *)((int)puVar2 + 5) = 1;
      *(undefined1 *)(puVar2 + 1) = 1;
      param_14 = 0.9;
      if (0 < (int)fVar4) {
        fStack00000040 = (float)(int)fStack_24;
        param_13 = (int)(float)(int)fVar4;
        param_9 = (float)(int)in_stack_0000003c;
        do {
          (*gEngfuncs.pfnRandomFloat)(0.7,1.3);
          puVar2[0x42] = (float)(extraout_ST0_00 * (float10)fVar4);
          if (iVar8 == 0) {
            puVar2[0x42] = (float)(extraout_ST0_00 * (float10)fVar4 * (float10)0.7);
          }
          fVar6 = (float)(int)fStack_24;
          puVar2[5] = param_11 * param_12 +
                      (in_stack_00000048 * fVar6 * param_12) / in_stack_0000003c + param_5;
          puVar2[6] = param_11 * (float)param_13 +
                      (in_stack_00000048 * fVar6 * (float)param_13) / in_stack_0000003c + param_6;
          puVar2[7] = param_11 * param_14 +
                      (in_stack_00000048 * fVar6 * param_14) / in_stack_0000003c + param_7;
          puVar2[0xe] = param_8;
          puVar2[0xf] = param_9;
          puVar2[0x10] = param_10;
          (*gEngfuncs.pfnRandomFloat)(-3.0,3.0);
          puVar2[0x10] = (float)(extraout_ST0_01 + (float10)(float)puVar2[0x10]);
          *(short *)(puVar2 + 0x45) = sVar7;
          iVar3 = FUN_100509a0(&DAT_1018bde8,(int)sVar7);
          puVar2[0x37] = in_stack_00000048;
          puVar2[0x38] = fStack_24;
          puVar2[0x3e] = (float)iVar3;
          if (iVar8 == 1) {
            uVar1 = 0x3e4ccccd;
          }
          else {
            uVar1 = 0;
          }
          puVar2[0x39] = uVar1;
          fStack_c = (float)(*gEngfuncs.pfnRandomLong)(-0x5a,0x5a);
          puVar2[0x13] = (float)(int)fStack_c;
          iVar3 = FUN_10050b60(&DAT_1018bde8,puVar2,0,0);
          if (iVar3 == -1) {
            return;
          }
          in_stack_00000050 = in_stack_00000050 * 0.90909094;
          iVar8 = iVar8 + 1;
          fStack_20 = fStack_20 * 0.90909094;
        } while (iVar8 < (int)fStack_18);
      }
      if (fStack_20 == 1.4013e-45) {
        iVar8 = FUN_100509d0(&DAT_1018bde8,(byte_conflict *)s_sprites_ts_muzzleflash6_spr_10095718,5
                            );
        puVar2[0x34] = 0;
        param_14 = (float)((int)in_stack_0000003c + -2);
        *(undefined1 *)((int)puVar2 + 7) = 0;
        *(undefined1 *)((int)puVar2 + 6) = 0;
        fVar4 = (float)(int)param_14;
        puVar2[5] = fVar4 * param_10 + param_3;
        puVar2[6] = fVar4 * param_11 + param_4;
        puVar2[7] = fVar4 * param_12 + param_5;
        puVar2[0xe] = param_6;
        puVar2[0xf] = param_7;
        puVar2[0x10] = param_8;
        fStack00000040 = (float)(*gEngfuncs.pfnRandomLong)(-10,10);
        puVar2[0x13] = (float)(int)fStack00000040;
        *(undefined1 *)puVar2 = 1;
        puVar2[0x36] = 0;
        puVar2[0x38] = 0x3e051eb8;
        *(undefined1 *)((int)puVar2 + 5) = 1;
        puVar2[0x3f] = 0;
        (*gEngfuncs.pfnRandomFloat)(1.4,1.7);
        puVar2[0x37] = 0x3f19999a;
        *(short *)(puVar2 + 0x45) = (short)iVar8;
        *(undefined1 *)(puVar2 + 1) = 0;
        puVar2[0x42] = (float)(extraout_ST0_02 * (float10)fStack_18);
        in_stack_00000050 = (float)(*gEngfuncs.pfnRandomLong)(-10,10);
        puVar2[0x13] = (float)(int)in_stack_00000050;
        in_stack_00000050 = (float)FUN_100509a0(&DAT_1018bde8,(int)*(short *)(puVar2 + 0x45));
      }
      else {
        puVar2[0x34] = 0;
        param_14 = (float)((int)in_stack_0000003c + -2);
        *(undefined1 *)((int)puVar2 + 7) = 0;
        *(undefined1 *)((int)puVar2 + 6) = 0;
        fVar4 = (float)(int)param_14;
        puVar2[5] = fVar4 * param_10 + param_3;
        puVar2[6] = fVar4 * param_11 + param_4;
        puVar2[7] = fVar4 * param_12 + param_5;
        puVar2[0xe] = param_6;
        puVar2[0xf] = param_7;
        puVar2[0x10] = param_8;
        fStack00000040 = (float)(*gEngfuncs.pfnRandomLong)(-10,10);
        puVar2[0x13] = (float)(int)fStack00000040;
        *(undefined1 *)puVar2 = 1;
        puVar2[0x36] = 0;
        puVar2[0x38] = 0x3e051eb8;
        *(undefined1 *)((int)puVar2 + 5) = 1;
        puVar2[0x3f] = 0;
        (*gEngfuncs.pfnRandomFloat)(1.1,1.4);
        puVar2[0x37] = 0x3f333333;
        *(short *)(puVar2 + 0x45) = sVar7;
        *(undefined1 *)(puVar2 + 1) = 0;
        puVar2[0x42] = (float)(extraout_ST0_03 * (float10)fStack_18);
        in_stack_00000050 = (float)(*gEngfuncs.pfnRandomLong)(-10,10);
        puVar2[0x13] = (float)(int)in_stack_00000050;
        in_stack_00000050 = (float)FUN_100509a0(&DAT_1018bde8,(int)*(short *)(puVar2 + 0x45));
      }
      puVar2[0x3e] = (float)(int)in_stack_00000050;
      FUN_10050b60(&DAT_1018bde8,puVar2,0,0);
      return;
    }
    pfVar5 = (float *)FUN_10057270(&uStack_4);
    fStack_10 = param_3 - *pfVar5;
    fStack_c = param_4 - pfVar5[1];
    fStack_8 = param_5 - pfVar5[2];
    fVar9 = FUN_10058390(&fStack_10);
    if (fVar9 <= (float10)512.0) {
      fStack00000040 = (float)(int)(short)iVar8;
      puVar2[0x34] = 0;
      *(undefined1 *)((int)puVar2 + 7) = 0;
      *(undefined1 *)((int)puVar2 + 6) = 0;
      *(undefined1 *)puVar2 = 1;
      puVar2[0x36] = 0;
      param_14 = (float)(((float10)512.0 - fVar9) * (float10)0.0005859375);
      *(undefined1 *)((int)puVar2 + 5) = 1;
      puVar2[0x3f] = 0;
      *(short *)(puVar2 + 0x45) = sVar7;
      *(undefined1 *)(puVar2 + 1) = 1;
      lVar10 = __ftol();
      fVar4 = param_8;
      fVar6 = (float)(int)(short)lVar10;
      iVar8 = 0;
      if (0 < (int)fVar6) {
        fStack00000040 = (float)(int)fStack_24;
        param_13 = (int)(float)(int)fVar6;
        param_9 = (float)(int)in_stack_0000003c;
        while( true ) {
          (*gEngfuncs.pfnRandomFloat)(0.6,1.0);
          puVar2[0x42] = (float)(extraout_ST0_04 * (float10)fVar6);
          fVar11 = (float)(int)fStack_20;
          puVar2[5] = param_11 * param_12 +
                      (fVar11 * in_stack_00000048 * param_12) / in_stack_0000003c + param_5;
          puVar2[6] = param_11 * (float)param_13 +
                      (fVar11 * in_stack_00000048 * (float)param_13) / in_stack_0000003c + param_6;
          puVar2[7] = param_11 * param_14 +
                      (fVar11 * in_stack_00000048 * param_14) / in_stack_0000003c + param_7;
          puVar2[0xe] = param_8;
          puVar2[0xf] = param_9;
          puVar2[0x10] = fVar4;
          (*gEngfuncs.pfnRandomFloat)(-3.0,3.0);
          puVar2[0x10] = (float)(extraout_ST0_05 + (float10)(float)puVar2[0x10]);
          in_stack_0000004c = FUN_100509a0(&DAT_1018bde8,(int)*(short *)(puVar2 + 0x45));
          puVar2[0x37] = in_stack_00000048;
          puVar2[0x38] = fStack_24;
          puVar2[0x3e] = (float)in_stack_0000004c;
          if (iVar8 == 1) {
            uVar1 = 0x3e99999a;
          }
          else {
            uVar1 = 0;
          }
          puVar2[0x39] = uVar1;
          iVar3 = FUN_10050b60(&DAT_1018bde8,puVar2,0,0);
          if (iVar3 == -1) break;
          in_stack_00000048 = in_stack_00000048 * 0.90909094;
          iVar8 = iVar8 + 1;
          fStack_24 = in_stack_00000048 * 0.2;
          if ((int)fStack_20 <= iVar8) {
            return;
          }
        }
      }
    }
  }
  return;
}

/* 10047cb0  FUN_10047cb0  (1271 bytes)
 * undefined FUN_10047cb0(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, undefined4 param_7, float param_8, float param_9, float param_10, float param_11, float param_12, float param_13, uint param_14, float param_15)
 * called by: FUN_1004bd50
 */
void __cdecl
FUN_10047cb0(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            undefined4 param_7,float param_8,float param_9,float param_10,float param_11,
            float param_12,float param_13,uint param_14,float param_15)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  float10 fVar5;
  int local_5c;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  
  local_54 = param_4;
  local_50 = param_5;
  local_4c = param_6;
  if (param_4 <= param_5) {
    if (param_4 <= param_6) {
      local_54 = 0.0;
    }
    else {
      local_4c = 0.0;
    }
  }
  else if (param_5 <= param_6) {
    local_50 = 0.0;
  }
  else {
    local_4c = 0.0;
  }
  iVar2 = FUN_100509d0(&DAT_1018bde8,(byte_conflict *)s_sprites_glassfrag_spr_10095754,5);
  if (iVar2 != -1) {
    puVar3 = FUN_1004ffe0();
    puVar3[0x34] = 0x3f800000;
    *(undefined1 *)((int)puVar3 + 7) = 0;
    *(undefined1 *)((int)puVar3 + 6) = 0;
    *(undefined1 *)((int)puVar3 + 5) = 1;
    *(undefined1 *)puVar3 = 1;
    puVar3[0x38] = 0x3d4ccccd;
    puVar3[0x37] = 0x3f333333;
    *(short *)(puVar3 + 0x45) = (short)iVar2;
    fVar1 = (local_4c + local_50 + local_54) * 0.055555556 * 0.7;
    puVar3[0x3f] = 0;
    *(undefined1 *)(puVar3 + 1) = 3;
    puVar3[0x48] = 2;
    puVar3[0x40] = 0x3f000000;
    puVar3[0x4a] = 0;
    if (20.0 <= fVar1) {
      fVar1 = 20.0;
    }
    puVar3[0x42] = fVar1;
    local_48 = param_1;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    local_44 = param_2;
    local_40 = param_3;
    if (local_54 != 0.0) {
      local_48 = param_1 - param_4 * 0.5;
    }
    if (local_50 != 0.0) {
      local_44 = param_2 - param_5 * 0.5;
    }
    if (local_4c != 0.0) {
      local_40 = param_3 - param_6 * 0.5;
    }
    local_5c = 0;
    uVar4 = param_14 & 0x8000002;
    do {
      if (local_54 == 0.0) {
        local_44 = param_5 * 0.11111111 * (float)local_5c + (param_2 - param_5 * 0.5);
      }
      else {
        local_48 = param_4 * 0.11111111 * (float)local_5c + (param_1 - param_4 * 0.5);
      }
      param_14 = 0;
      do {
        if ((local_54 == 0.0) || (local_50 == 0.0)) {
          local_40 = param_6 * 0.11111111 * (float)(int)param_14 + (param_3 - param_6 * 0.5);
        }
        else {
          local_44 = param_5 * 0.11111111 * (float)(int)param_14 + (param_2 - param_5 * 0.5);
        }
        iVar2 = FUN_100509a0(&DAT_1018bde8,(int)*(short *)(puVar3 + 0x45));
        puVar3[5] = local_48;
        puVar3[0x3e] = (float)iVar2;
        puVar3[6] = local_44;
        puVar3[7] = local_40;
        if (uVar4 == 0) {
          fVar5 = (float10)(*gEngfuncs.pfnRandomFloat)
                                     (param_8 * param_15 * 0.5,param_8 * param_15 + 15.0);
          puVar3[0xe] = (float)fVar5;
          fVar5 = (float10)(*gEngfuncs.pfnRandomFloat)
                                     (param_9 * param_15 * 0.5,param_9 * param_15 + 15.0);
          puVar3[0xf] = (float)fVar5;
          fVar5 = (float10)(*gEngfuncs.pfnRandomFloat)
                                     (param_10 * param_15 * 0.5,param_10 * param_15 + 15.0);
          puVar3[0x10] = (float)fVar5;
        }
        else {
          fVar5 = (float10)(*gEngfuncs.pfnRandomFloat)(-9.0,9.0);
          puVar3[0xe] = (float)fVar5;
          fVar5 = (float10)(*gEngfuncs.pfnRandomFloat)(-9.0,9.0);
          puVar3[0xf] = (float)fVar5;
          iVar2 = (*gEngfuncs.pfnRandomLong)(0,10);
          puVar3[0x10] = (float)iVar2;
          fVar1 = param_15 /
                  (SQRT(((float)puVar3[5] - param_11) * ((float)puVar3[5] - param_11) +
                        ((float)puVar3[6] - param_12) * ((float)puVar3[6] - param_12) +
                        ((float)puVar3[7] - param_13) * ((float)puVar3[7] - param_13)) + 1.0);
          puVar3[0xe] = param_8 * fVar1 * 10.0 + (float)puVar3[0xe];
          puVar3[0xf] = param_9 * fVar1 * 10.0 + (float)puVar3[0xf];
          puVar3[0x10] = fVar1 * param_10 * 10.0 + (float)puVar3[0x10];
        }
        iVar2 = (*gEngfuncs.pfnRandomLong)(-0x5a,0x5a);
        puVar3[0x13] = (float)iVar2;
        fVar5 = (float10)(*gEngfuncs.pfnRandomFloat)(2.0,5.0);
        puVar3[0x36] = (float)fVar5;
        iVar2 = FUN_10050b60(&DAT_1018bde8,puVar3,0,0);
        if (iVar2 == -1) {
          return;
        }
        param_14 = param_14 + 1;
      } while ((int)param_14 < 9);
      local_5c = local_5c + 1;
    } while (local_5c < 9);
  }
  return;
}

/* 100481b0  FUN_100481b0  (1343 bytes)
 * undefined FUN_100481b0(float * param_1, int param_2)
 * called by: FUN_1004bd50
 */
void __cdecl FUN_100481b0(float *param_1,int param_2)

{
  float *pfVar1;
  event_api_s *peVar2;
  int iVar3;
  undefined4 *puVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float attenuation;
  int unaff_EBX;
  int unaff_EBP;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 extraout_ST0_04;
  float10 extraout_ST0_05;
  float10 extraout_ST0_06;
  float10 extraout_ST0_07;
  float10 extraout_ST0_08;
  float10 extraout_ST0_09;
  longlong lVar7;
  float *in_stack_0000000c;
  int iStack00000010;
  double dVar8;
  int in_stack_00000030;
  int iStack00000034;
  int in_stack_00000038;
  int in_stack_00000054;
  char *sample;
  float volume;
  undefined4 uVar9;
  float *pfVar10;
  
  iVar3 = (*gEngfuncs.pfnRandomLong)(0,4);
  peVar2 = gEngfuncs.pEventAPI;
  switch(iVar3) {
  case 0:
    lVar7 = __ftol();
    attenuation = (float)(100 - (int)lVar7);
    (*gEngfuncs.pfnRandomFloat)(0.92,1.0);
    volume = (float)extraout_ST0;
    sample = s_explo_explode_wav_100957d8;
    break;
  case 1:
    lVar7 = __ftol();
    attenuation = (float)(100 - (int)lVar7);
    (*gEngfuncs.pfnRandomFloat)(0.92,1.0);
    volume = (float)extraout_ST0_00;
    sample = s_explo_explode1_wav_100957c4;
    break;
  case 2:
    lVar7 = __ftol();
    attenuation = (float)(100 - (int)lVar7);
    (*gEngfuncs.pfnRandomFloat)(0.92,1.0);
    volume = (float)extraout_ST0_01;
    sample = s_explo_explode2_wav_100957b0;
    break;
  case 3:
    lVar7 = __ftol();
    attenuation = (float)(100 - (int)lVar7);
    (*gEngfuncs.pfnRandomFloat)(0.92,1.0);
    volume = (float)extraout_ST0_02;
    sample = s_explo_explode3_wav_1009579c;
    break;
  case 4:
    lVar7 = __ftol();
    attenuation = (float)(100 - (int)lVar7);
    (*gEngfuncs.pfnRandomFloat)(0.92,1.0);
    volume = (float)extraout_ST0_03;
    sample = s_explo_explode4_wav_10095788;
    break;
  default:
    goto switchD_100481d2_default;
  }
  (*peVar2->EV_PlaySound)(0,in_stack_0000000c,6,sample,volume,attenuation,unaff_EBP,unaff_EBX);
switchD_100481d2_default:
  iStack00000034 = in_stack_00000038 * 10;
  FUN_100524c0(&DAT_1018bde8,in_stack_0000000c,(float *)0x0,512.0,(float)iStack00000034);
  iVar3 = FUN_100509d0(&DAT_1018bde8,(byte_conflict *)s_sprites_grenade_asplode_spr_1009576c,5);
  if (iVar3 != -1) {
    puVar4 = FUN_1004ffe0();
    dVar8 = (double)in_stack_00000038;
    *(short *)(puVar4 + 0x45) = (short)iVar3;
    pfVar1 = (float *)(puVar4 + 5);
    puVar4[0x34] = 0x3c23d70a;
    *(undefined1 *)((int)puVar4 + 7) = 0;
    *(undefined1 *)((int)puVar4 + 6) = 0;
    *(undefined1 *)((int)puVar4 + 5) = 0;
    puVar4[0x42] = (float)in_stack_00000038 * 0.5;
    *(undefined1 *)puVar4 = 1;
    puVar4[0x38] = 0;
    puVar4[0x37] = 0x3e99999a;
    puVar4[0x36] = 0;
    puVar4[0x3e] = 0;
    *pfVar1 = *in_stack_0000000c;
    puVar4[6] = in_stack_0000000c[1];
    puVar4[7] = in_stack_0000000c[2];
    puVar4[7] = (float)in_stack_00000038 * 0.5 * 0.5 + (float)puVar4[7];
    *(undefined1 *)(puVar4 + 1) = 0;
    puVar4[0x39] = 0x3dcccccd;
    puVar4[0x3d] = 0x40533333;
    puVar4[0x4a] = 0;
    lVar7 = __ftol();
    iStack00000010 = (int)lVar7;
    iStack00000034 = 0;
    if (0 < iStack00000010) {
      do {
        (*gEngfuncs.pfnRandomFloat)(-70.0,70.0);
        puVar4[0xe] = (float)extraout_ST0_04;
        (*gEngfuncs.pfnRandomFloat)(-70.0,70.0);
        puVar4[0xf] = (float)extraout_ST0_05;
        (*gEngfuncs.pfnRandomFloat)(0.0,70.0);
        puVar4[0x10] = (float)extraout_ST0_06;
        iStack00000034 = (*gEngfuncs.pfnRandomLong)(0x19,0x1e);
        dVar8 = 0.0;
        puVar4[0x3f] = (float)iStack00000034;
        iStack00000010 = 0x10048496;
        iVar3 = FUN_10050b60(&DAT_1018bde8,puVar4,0,0);
        if (iVar3 == -1) {
          return;
        }
        in_stack_00000054 = in_stack_00000054 + 1;
      } while (in_stack_00000054 < in_stack_00000030);
    }
    iVar3 = FUN_100509d0(&DAT_1018bde8,(byte_conflict *)s_sprites_gun_smoke_add_spr_100953f0,5);
    if (iVar3 != -1) {
      puVar4[0x34] = 0x3c23d70a;
      *(undefined1 *)((int)puVar4 + 7) = 0;
      *(undefined1 *)((int)puVar4 + 6) = 0;
      *(undefined1 *)((int)puVar4 + 5) = 0;
      *(undefined1 *)puVar4 = 1;
      puVar4[0x42] = (float)((float10)dVar8 * (float10)0.7);
      puVar4[0x38] = 0;
      puVar4[0x37] = 0x3e99999a;
      *(short *)(puVar4 + 0x45) = (short)iVar3;
      puVar4[0x36] = 0;
      puVar4[0x3e] = 0;
      *pfVar1 = *in_stack_0000000c;
      puVar4[6] = in_stack_0000000c[1];
      puVar4[7] = in_stack_0000000c[2];
      puVar4[7] = (float)((float10)dVar8 * (float10)0.7 * (float10)0.5 + (float10)(float)puVar4[7]);
      *(undefined1 *)(puVar4 + 1) = 0;
      puVar4[0x39] = 0x3dcccccd;
      puVar4[0x3d] = 0x40533333;
      puVar4[0x4a] = 0;
      lVar7 = __ftol();
      iStack00000010 = (int)lVar7;
      iStack00000034 = 0;
      if (0 < iStack00000010) {
        do {
          (*gEngfuncs.pfnRandomFloat)(-54.0,54.0);
          puVar4[0xe] = (float)extraout_ST0_07;
          (*gEngfuncs.pfnRandomFloat)(-54.0,54.0);
          puVar4[0xf] = (float)extraout_ST0_08;
          (*gEngfuncs.pfnRandomFloat)(0.0,54.0);
          puVar4[0x10] = (float)extraout_ST0_09;
          iStack00000034 = (*gEngfuncs.pfnRandomLong)(2,10);
          puVar4[0x3f] = (float)iStack00000034;
          iStack00000010 = 0x100485ca;
          iVar3 = FUN_10050b60(&DAT_1018bde8,puVar4,0,0);
          if (iVar3 == -1) {
            return;
          }
          in_stack_00000054 = in_stack_00000054 + 1;
        } while (in_stack_00000054 < in_stack_00000030);
      }
      pfVar5 = (float *)FUN_1001fb70(&stack0x00000018,0,0,0x20);
      pfVar10 = (float *)&stack0x00000024;
      uVar9 = 0x1004860c;
      puVar6 = (undefined4 *)FUN_10035b10(in_stack_0000000c,pfVar10,pfVar5);
      FUN_10002610(&stack0xffffffe4,puVar6);
      FUN_10048e60(uVar9,pfVar10,pfVar5);
      iVar3 = FUN_100509d0(&DAT_1018bde8,(byte_conflict *)s_sprites_scintille_metal_spr_10095460,5);
      if (iVar3 != -1) {
        puVar4[0x34] = 0;
        *(undefined1 *)((int)puVar4 + 7) = 0;
        *(undefined1 *)((int)puVar4 + 6) = 0;
        *(undefined1 *)((int)puVar4 + 5) = 0;
        *(undefined1 *)puVar4 = 1;
        puVar4[0x38] = 0x3d4ccccd;
        puVar4[0xe] = 0;
        puVar4[0xf] = 0;
        puVar4[0x10] = 0;
        *(short *)(puVar4 + 0x45) = (short)iVar3;
        puVar4[0x37] = 0x3f800000;
        puVar4[0x3f] = 0;
        puVar4[0x36] = 0;
        in_stack_00000038 = in_stack_00000038 * 2;
        puVar4[0x42] = (float)in_stack_00000038;
        *pfVar1 = *in_stack_0000000c;
        puVar4[6] = in_stack_0000000c[1];
        puVar4[7] = in_stack_0000000c[2];
        puVar4[7] = (float)in_stack_00000038 * 0.5 + (float)puVar4[7];
        *(undefined1 *)(puVar4 + 1) = 0;
        in_stack_00000038 = FUN_100509a0(&DAT_1018bde8,(int)*(short *)(puVar4 + 0x45));
        puVar4[0x39] = 0x40000000;
        puVar4[0x3e] = (float)in_stack_00000038;
        FUN_10050b60(&DAT_1018bde8,puVar4,0,0);
      }
    }
  }
  return;
}

/* 10048840  FUN_10048840  (1538 bytes)
 * undefined FUN_10048840(float * param_1, float * param_2, int param_3)
 * called by: FUN_1004bcd0
 */
void __cdecl FUN_10048840(float *param_1,float *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  longlong lVar4;
  int in_stack_0000001c;
  int in_stack_00000024;
  undefined4 *in_stack_0000002c;
  float *in_stack_00000050;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float fVar9;
  char *pcVar10;
  short sVar11;
  float fStack_6c;
  int iStack_68;
  float fStack_64;
  undefined1 *in_stack_ffffffac;
  undefined1 *puVar12;
  int iStack_48;
  float fStack_44;
  float fStack_40;
  float local_3c;
  float fStack_38;
  undefined1 *puStack_34;
  float fStack_30;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  float fStack_18;
  undefined1 *puStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  uVar1 = FUN_100570b0(param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_10057270(&local_3c);
    fVar5 = 2.6137527e-29;
    iVar2 = FUN_100572a0(param_1,uVar1);
    if ((char)iVar2 != '\0') {
      if (0x7f < param_3) {
        (*gEngfuncs.pfnRandomFloat)(-0.3,0.3);
        (*gEngfuncs.pfnRandomFloat)(-0.3,0.3);
        (*gEngfuncs.pfnRandomFloat)(-0.1,0.1);
        fStack_64 = (float)(extraout_ST0 + (float10)fStack_64);
        FUN_10029e40(&fStack_6c);
        pfVar8 = &fStack_24;
        iVar2 = 0x14;
        sVar11 = 4;
        uVar1 = 5;
        pcVar10 = s_sprites_gun_smoke_add_spr_100953f0;
        fVar9 = 6.0;
        fVar7 = 2.6138174e-29;
        puVar3 = (undefined4 *)FUN_1003d240(&fStack_6c,pfVar8,6.0);
        fVar6 = 2.6138207e-29;
        FUN_10002610(&stack0xffffff64,puVar3);
        FUN_10002610(&stack0xffffff58,param_1);
        FUN_100464f0(fVar5,fVar6,(float)puVar3,fVar7,(float)pfVar8,fVar9,(byte_conflict *)pcVar10,
                     uVar1,sVar11,iVar2);
        lVar4 = __ftol();
        in_stack_00000024 = (int)lVar4;
      }
      iVar2 = FUN_100509d0(&DAT_1018bde8,(byte_conflict *)s_sprites_bloodfrag2_spr_1009580c,1);
      if (iVar2 != -1) {
        puVar3 = FUN_1004ffe0();
        fVar5 = (float)in_stack_00000024 * 0.075;
        *(short *)(puVar3 + 0x45) = (short)iVar2;
        *(undefined1 *)puVar3 = 1;
        puVar3[0x34] = 0x3f000000;
        *(undefined1 *)((int)puVar3 + 5) = 0;
        puVar3[0x38] = 0;
        puVar3[0x37] = 0x3f800000;
        puVar3[0x3f] = 0;
        if ((fVar5 <= 1.0) || (fVar5 < 5.0)) {
          if (fVar5 <= 1.0) {
            fVar5 = 1.0;
          }
        }
        else {
          fVar5 = 5.0;
        }
        puVar3[0x42] = fVar5;
        puVar3[0x4a] = 0x40000000;
        *(undefined1 *)(puVar3 + 1) = 3;
        puVar3[0x48] = 2;
        fVar5 = *(float *)(in_stack_0000001c + 8);
        __ftol();
        if (*(float *)(DAT_100df3a8 + 0xc) <= 10.0) {
          lVar4 = __ftol();
          switch((int)lVar4) {
          case 1:
            __ftol();
            break;
          case 2:
            __ftol();
            break;
          case 3:
            __ftol();
            break;
          case 4:
            __ftol();
            break;
          case 5:
            __ftol();
          }
        }
        else {
          __ftol();
        }
        (*gEngfuncs.pfnRandomFloat)(0.5,1.0);
        FUN_10029e40(&fStack_64);
        puVar12 = in_stack_ffffffac;
        if (0 < iStack_68) {
          while( true ) {
            iStack_20 = FUN_100509a0(&DAT_1018bde8,(int)*(short *)(puVar3 + 0x45));
            puVar3[0x39] = 0x3d99999a;
            puVar3[0x3e] = (float)iStack_20;
            (*gEngfuncs.pfnRandomFloat)(1.0,2.0);
            puVar3[0x36] = (float)extraout_ST0_00;
            if ((int)fStack_44 < 1) {
              local_3c = *param_2 * 32.0;
              fVar6 = param_2[1];
              puStack_34 = (undefined1 *)(param_2[2] * 32.0);
              puVar3[0xe] = local_3c;
              puVar3[0xf] = fVar6 * 32.0;
              puVar3[0x10] = puStack_34;
              puVar3[5] = *in_stack_0000002c;
              puVar3[6] = in_stack_0000002c[1];
              puVar3[7] = in_stack_0000002c[2];
              fStack_38 = fVar6 * 32.0;
            }
            else {
              (*gEngfuncs.pfnRandomFloat)(8.0,24.0);
              pfVar8 = (float *)(puVar3 + 0xe);
              *pfVar8 = (float)(extraout_ST0_01 * (float10)(float)puVar12);
              puVar3[0xf] = (float)((float10)0.0 * extraout_ST0_01);
              puVar3[0x10] = (float)((float10)0.0 * extraout_ST0_01);
              (*gEngfuncs.pfnRandomFloat)(-1.0,1.0);
              *pfVar8 = (float)(extraout_ST0_02 + (float10)*pfVar8);
              (*gEngfuncs.pfnRandomFloat)(-1.0,1.0);
              puVar3[0xf] = (float)(extraout_ST0_03 + (float10)(float)puVar3[0xf]);
              fVar6 = (float)puVar3[0x42];
              puVar3[5] = fVar5;
              puVar3[6] = in_stack_ffffffac;
              puVar3[7] = fStack_30;
              fStack_c = fVar6 * fStack_44 * 0.3;
              fStack_8 = fStack_40 * fVar6 * 0.3;
              fStack_4 = fVar6 * local_3c * 0.3;
              fVar5 = fStack_c + fStack_38;
              in_stack_ffffffac = (undefined1 *)((float)puStack_34 + fStack_8);
              fStack_10 = fStack_4 + fStack_30;
              fStack_28 = (float)puVar3[0x42] * 0.1 + fStack_28;
              fStack_30 = fStack_10 - fStack_28 / (float)iStack_48;
              fStack_38 = fVar5;
              puStack_34 = in_stack_ffffffac;
              fStack_18 = fVar5;
              puStack_14 = in_stack_ffffffac;
            }
            fStack_64 = 2.6141812e-29;
            iVar2 = (*gEngfuncs.PM_PointContents)((float *)(puVar3 + 5),(int *)0x0);
            if (iVar2 == -2) break;
            puVar12 = &LAB_10048710;
            iVar2 = FUN_10050b60(&DAT_1018bde8,puVar3,0,&LAB_10048710);
            if (iVar2 == -1) {
              return;
            }
            fStack_24 = (float)((int)fStack_24 + 1);
            param_2 = in_stack_00000050;
            if ((int)fStack_40 <= (int)fStack_24) {
              return;
            }
          }
        }
      }
    }
  }
  return;
}

/* 10048e60  FUN_10048e60  (244 bytes)
 * undefined FUN_10048e60(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_1003dfa0, FUN_1003f090, FUN_10040c20, FUN_100481b0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10048e60(vec_t param_1,vec_t param_2,vec_t param_3)

{
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar1;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  vec_t in_stack_00000010;
  
  if (DAT_1018ca58 != '\0') {
    (*gEngfuncs.GetClientTime)();
    _DAT_1018a460 = (float)(extraout_ST0 - (float10)_DAT_1018a45c);
    if (extraout_ST0 - (float10)_DAT_1018a45c < (float10)0.0) {
      (*gEngfuncs.GetClientTime)();
      _DAT_1018a45c = (float)extraout_ST0_00;
      return;
    }
    fVar1 = FUN_10056fa0(0.1);
    if (fVar1 <= (float10)_DAT_1018a460) {
      (*gEngfuncs.GetClientTime)();
      _DAT_1018a45c = (float)extraout_ST0_01;
      DAT_1018a444 = (dlight_s *)0x0;
      DAT_1018a444 = (*(gEngfuncs.pEfxAPI)->CL_AllocDlight)(0);
      if (DAT_1018a444 != (dlight_s *)0x0) {
        DAT_1018a444->origin[0] = param_2;
        DAT_1018a444->origin[1] = param_3;
        DAT_1018a444->origin[2] = in_stack_00000010;
        DAT_1018a444->radius = 192.0;
        (DAT_1018a444->color).r = 0xf0;
        (DAT_1018a444->color).g = 0xdd;
        (DAT_1018a444->color).b = 0xac;
        fVar1 = FUN_10056fa0(0.06);
        (*gEngfuncs.GetClientTime)();
        DAT_1018a444->die = (float)(extraout_ST0_02 + (float10)(float)fVar1);
      }
    }
  }
  return;
}

/* 10048f60  FUN_10048f60  (797 bytes)
 * undefined FUN_10048f60(float * param_1, byte.conflict * param_2, int param_3, undefined4 param_4)
 * called by: FUN_10044bf0
 */
void __cdecl FUN_10048f60(float *param_1,byte_conflict *param_2,int param_3,byte_conflict *param_4)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float10 fVar4;
  undefined4 in_stack_00000018;
  float in_stack_ffffffb0;
  float in_stack_ffffffb8;
  byte_conflict *pbVar5;
  float in_stack_ffffffbc;
  float in_stack_ffffffc0;
  float in_stack_ffffffc4;
  char *in_stack_ffffffc8;
  char *pcVar6;
  float in_stack_ffffffcc;
  char *in_stack_ffffffd0;
  float fVar7;
  char *pcVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  char *pcVar14;
  short sVar15;
  undefined4 uVar16;
  int iVar17;
  float fVar18;
  short sVar19;
  float fVar20;
  undefined4 uVar21;
  int iVar22;
  undefined4 local_c [3];
  
  uVar1 = FUN_10050ad0(&DAT_1018bde8,7);
  if ((char)uVar1 == '\0') {
    if ((param_3 != 1) && (param_3 != 2)) {
      return;
    }
  }
  else {
    fVar4 = FUN_10056fa0(DAT_1018ca44);
    FUN_10050b00(&DAT_1018bde8,7,(float)fVar4);
  }
  uVar1 = FUN_100570b0(param_1);
  if ((char)uVar1 == '\0') {
    return;
  }
  uVar1 = FUN_10057270(local_c);
  fVar7 = 2.6143184e-29;
  iVar2 = FUN_100572a0(param_1,uVar1);
  if ((char)iVar2 == '\0') {
    return;
  }
  if (param_3 == 1) {
    fVar3 = 1.4013e-45;
  }
  else {
    fVar3 = (float)((-(uint)(param_3 != 2) & 2) + 2);
  }
  fVar11 = 0.0;
  fVar9 = 2.6143307e-29;
  iVar2 = (*gEngfuncs.pfnRandomLong)(0,100);
  switch(in_stack_00000018) {
  case 0x44:
    fVar7 = 4.2039e-44;
    pcVar6 = s_sprites_wood_smoke_add_spr_100953d4;
    goto LAB_10049193;
  default:
    iVar22 = 1;
    iVar17 = 0;
    uVar13 = 0x3f800000;
    fVar12 = 1.0;
    iVar10 = 0x20;
    uVar1 = 0x40800000;
    fVar11 = 7.00649e-45;
    fVar9 = 1.4013e-45;
    pcVar6 = s_sprites_debris_concrete3_spr_10095824;
    fVar7 = 2.6144788e-29;
    pbVar5 = param_4;
    FUN_10002610(&stack0xffffffbc,(undefined4 *)param_4);
    FUN_10002610(&stack0xffffffb0,param_1);
    FUN_10046bd0(in_stack_ffffffb0,fVar7,(float)pbVar5,in_stack_ffffffbc,in_stack_ffffffc0,
                 in_stack_ffffffc4,(byte_conflict *)pcVar6,(int)fVar9,(int)fVar11,uVar1,iVar10,
                 fVar12,uVar13,iVar17,iVar22);
    iVar10 = 1;
    fVar18 = 2.8026e-44;
    uVar1 = 0x10;
    fVar12 = 7.00649e-45;
    pcVar8 = s_sprites_gun_smoke_add_spr_100953f0;
    fVar7 = 2.614492e-29;
    pbVar5 = param_4;
    FUN_10002610(&stack0xffffffc8,(undefined4 *)param_4);
    FUN_10002610(&stack0xffffffbc,param_1);
    FUN_10046680(in_stack_ffffffbc,fVar7,(float)pbVar5,(float)pcVar6,fVar9,fVar11,
                 (byte_conflict *)pcVar8,(int)fVar12,SUB42(fVar3,0),uVar1,fVar18,iVar10);
    if (0x32 < iVar2) {
      sVar19 = 3;
      sVar15 = 5;
      pcVar14 = s_sprites_scintille_metal_spr_10095460;
      fVar7 = 2.6145053e-29;
      pbVar5 = param_4;
      FUN_10002610(&stack0xffffffd4,(undefined4 *)param_4);
      FUN_10002610(&stack0xffffffc8,param_1);
      FUN_10046f50((float)pcVar6,fVar7,(float)pbVar5,(float)pcVar8,fVar12,fVar3,
                   (byte_conflict *)pcVar14,sVar15,sVar19);
      fVar11 = 25.0;
      fVar9 = 1.15;
      iVar2 = 5;
      fVar7 = 2.614518e-29;
      FUN_10002610(&stack0xffffffd4,(undefined4 *)param_4);
      FUN_10002610(&stack0xffffffc8,param_1);
      FUN_100492b0((float)pcVar6,fVar7,(float)param_4,(float)pcVar8,fVar12,fVar3,iVar2,fVar9,fVar11)
      ;
    }
  case 0x46:
  case 0x53:
    return;
  case 0x47:
  case 0x4d:
  case 0x56:
    if (0x21 < iVar2) {
      sVar19 = 0x30;
      sVar15 = 5;
      pcVar6 = s_sprites_scintille_metal_spr_10095460;
      fVar12 = 2.6143503e-29;
      pbVar5 = param_4;
      FUN_10002610(&stack0xffffffd4,(undefined4 *)param_4);
      FUN_10002610(&stack0xffffffc8,param_1);
      FUN_10046f50((float)in_stack_ffffffc8,fVar12,(float)pbVar5,fVar7,fVar9,fVar11,
                   (byte_conflict *)pcVar6,sVar15,sVar19);
    }
    fVar20 = 25.0;
    fVar18 = 1.15;
    iVar10 = 0x17;
    in_stack_ffffffcc = 2.614363e-29;
    in_stack_ffffffd0 = (char *)param_4;
    FUN_10002610(&stack0xffffffd4,(undefined4 *)param_4);
    FUN_10002610(&stack0xffffffc8,param_1);
    fVar12 = 2.6143677e-29;
    FUN_100492b0((float)in_stack_ffffffc8,in_stack_ffffffcc,(float)in_stack_ffffffd0,fVar7,fVar9,
                 fVar11,iVar10,fVar18,fVar20);
    if (0x46 < iVar2) {
      uVar21 = 0x3e800000;
      uVar16 = 0x3c75c28f;
      uVar13 = 0x3f400000;
      uVar1 = 0;
      iVar10 = 5;
      iVar2 = 5;
      in_stack_ffffffd0 = s_sprites_shotgun_pellets_spr_10094d84;
      in_stack_ffffffbc = 2.6143825e-29;
      pbVar5 = param_4;
      FUN_10002610(&stack0xffffffc4,(undefined4 *)param_4);
      FUN_10002610(&stack0xffffffb8,param_1);
      FUN_10046a70(in_stack_ffffffb8,in_stack_ffffffbc,(float)pbVar5,fVar12,(float)in_stack_ffffffc8
                   ,in_stack_ffffffcc,(byte_conflict *)in_stack_ffffffd0,iVar2,iVar10,uVar1,uVar13,
                   uVar16,uVar21);
    }
    break;
  case 0x50:
  case 0x59:
    sVar19 = 0x30;
    sVar15 = 5;
    pcVar6 = s_sprites_scintille_metal_spr_10095460;
    in_stack_ffffffcc = 2.6144297e-29;
    in_stack_ffffffd0 = (char *)param_4;
    FUN_10002610(&stack0xffffffd4,(undefined4 *)param_4);
    FUN_10002610(&stack0xffffffc8,param_1);
    FUN_10046f50((float)in_stack_ffffffc8,in_stack_ffffffcc,(float)in_stack_ffffffd0,fVar7,fVar9,
                 fVar11,(byte_conflict *)pcVar6,sVar15,sVar19);
    if (0x32 < iVar2) {
      fVar18 = 25.0;
      fVar12 = 1.15;
      iVar2 = 3;
      in_stack_ffffffcc = 2.614444e-29;
      in_stack_ffffffd0 = (char *)param_4;
      FUN_10002610(&stack0xffffffd4,(undefined4 *)param_4);
      FUN_10002610(&stack0xffffffc8,param_1);
      FUN_100492b0((float)in_stack_ffffffc8,in_stack_ffffffcc,(float)in_stack_ffffffd0,fVar7,fVar9,
                   fVar11,iVar2,fVar12,fVar18);
    }
    break;
  case 0x57:
    iVar17 = 1;
    iVar10 = 0;
    uVar13 = 0x3f400000;
    fVar9 = 1.0;
    iVar2 = 0x20;
    uVar1 = 0x40a00000;
    in_stack_ffffffd0 = (char *)0x5;
    in_stack_ffffffcc = 7.00649e-45;
    in_stack_ffffffc8 = s_sprites_woodfrag_spr_10095844;
    fVar7 = 2.6144033e-29;
    pbVar5 = param_4;
    FUN_10002610(&stack0xffffffbc,(undefined4 *)param_4);
    FUN_10002610(&stack0xffffffb0,param_1);
    FUN_10046bd0(in_stack_ffffffb0,fVar7,(float)pbVar5,in_stack_ffffffbc,in_stack_ffffffc0,
                 in_stack_ffffffc4,(byte_conflict *)in_stack_ffffffc8,(int)in_stack_ffffffcc,
                 (int)in_stack_ffffffd0,uVar1,iVar2,fVar9,uVar13,iVar10,iVar17);
    fVar7 = 4.2039e-44;
    pcVar6 = s_sprites_wood_smoke_add_spr_100953d4;
    goto LAB_10049193;
  }
  fVar7 = 7.00649e-44;
  pcVar6 = s_sprites_gun_smoke_add_spr_100953f0;
LAB_10049193:
  iVar10 = 1;
  uVar1 = 0x10;
  iVar2 = 5;
  fVar9 = 2.614457e-29;
  FUN_10002610(&stack0xffffffc8,(undefined4 *)param_4);
  sVar15 = SUB42(fVar3,0);
  FUN_10002610(&stack0xffffffbc,param_1);
  FUN_10046680(in_stack_ffffffbc,fVar9,(float)param_4,(float)in_stack_ffffffc8,in_stack_ffffffcc,
               (float)in_stack_ffffffd0,(byte_conflict *)pcVar6,iVar2,sVar15,uVar1,fVar7,iVar10);
  return;
}

/* 100492b0  FUN_100492b0  (689 bytes)
 * undefined FUN_100492b0(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, int param_7, float param_8, float param_9)
 * called by: FUN_10048f60, FUN_1004bd50
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_100492b0(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            int param_7,float param_8,float param_9)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float flLow;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  float10 fVar9;
  longlong lVar10;
  int iStack_1c;
  
  uVar6 = FUN_10057910(&param_1,0x200);
  if ((((char)uVar6 == '\0') && (uVar6 = FUN_100570b0(&param_1), (char)uVar6 != '\0')) &&
     (iVar7 = FUN_100509d0(&DAT_1018bde8,(byte_conflict *)s_sprites_sparks_spr_1009585c,5),
     iVar7 != -1)) {
    puVar8 = FUN_1004ffe0();
    fVar2 = (float)puVar8[0x42];
    *(short *)(puVar8 + 0x45) = (short)iVar7;
    puVar8[0x34] = 0x3f800000;
    *(undefined1 *)((int)puVar8 + 7) = 0;
    *(undefined1 *)((int)puVar8 + 6) = 0;
    *(undefined1 *)((int)puVar8 + 5) = 0;
    *(undefined1 *)puVar8 = 1;
    puVar8[0x38] = 0x3d4ccccd;
    puVar8[0x37] = 0x3f666666;
    puVar8[0x3f] = 0;
    puVar8[0x4a] = 0x3eb33333;
    puVar8[0x3d] = 0x3dcccccd;
    puVar8[0x48] = 2;
    puVar8[5] = param_1 + param_4 * fVar2;
    puVar8[6] = param_2 + param_5 * fVar2;
    puVar8[7] = param_3 + fVar2 * param_6;
    param_7 = (*gEngfuncs.pfnRandomLong)((int)(short)param_7 / 2,(int)(short)param_7);
    lVar10 = __ftol();
    fVar2 = param_9;
    param_7 = (int)lVar10;
    iStack_1c = 0;
    if (0 < param_7) {
      fVar3 = param_4 * 17.0;
      fVar4 = param_5 * 17.0;
      pfVar1 = (float *)(puVar8 + 0xe);
      fVar5 = param_6 * 17.0;
      flLow = -param_9;
      param_4 = flLow;
      do {
        fVar9 = (float10)(*gEngfuncs.pfnRandomFloat)(0.5,1.15);
        *pfVar1 = fVar3;
        puVar8[0x42] = (float)(fVar9 * (float10)param_8);
        puVar8[0xf] = fVar4;
        puVar8[0x10] = fVar5;
        fVar9 = (float10)(*gEngfuncs.pfnRandomFloat)(flLow,fVar2);
        *pfVar1 = (float)(fVar9 + (float10)*pfVar1);
        fVar9 = (float10)(*gEngfuncs.pfnRandomFloat)(flLow,fVar2);
        puVar8[0xf] = (float)(fVar9 + (float10)(float)puVar8[0xf]);
        fVar9 = (float10)(*gEngfuncs.pfnRandomFloat)(0.0,fVar2);
        puVar8[0x10] = (float)(fVar9 + (float10)(float)puVar8[0x10]);
        fVar9 = (float10)(*gEngfuncs.pfnRandomFloat)(0.1,1.0);
        puVar8[0x36] = (float)fVar9;
        if ((fVar9 <= (float10)0.7) || (_DAT_1018ca50 <= 0.9)) {
          *(undefined1 *)(puVar8 + 1) = 0;
        }
        else {
          *(undefined1 *)(puVar8 + 1) = 3;
        }
        param_9 = (float)FUN_100509a0(&DAT_1018bde8,(int)*(short *)(puVar8 + 0x45));
        puVar8[0x3e] = (float)(int)param_9;
        iVar7 = FUN_10050b60(&DAT_1018bde8,puVar8,0,0);
      } while ((iVar7 != -1) && (iStack_1c = iStack_1c + 1, iStack_1c < param_7));
    }
  }
  return;
}

/* 10049570  FUN_10049570  (162 bytes)
 * undefined4 FUN_10049570(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 */
undefined4 __cdecl
FUN_10049570(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  float10 fVar2;
  
  FUN_100299b0(param_4,param_3);
  uVar1 = FUN_10029a10();
  if ((DAT_100df1a0 != 0) && (*(float *)(DAT_100df1a0 + 0xc) != 0.0)) {
    return 1;
  }
  DAT_100df1a4 = (float)(int)uVar1;
  if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x58) = 0x50;
  }
  else {
    *(uint *)(param_1 + 0x58) = uVar1;
  }
  if (*(int *)(param_1 + 0x58) == 0x50) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    return 1;
  }
  fVar2 = (float10)(*gEngfuncs.pfnGetCvarFloat)(s_zoom_sensitivity_ratio_100937fc);
  *(float *)(param_1 + 0x18) =
       (float)((float10)(int)uVar1 * (float10)0.0125 * (float10)*(float *)(DAT_100df708 + 0xc) *
              fVar2);
  return 1;
}

/* 10049620  FUN_10049620  (306 bytes)
 * undefined FUN_10049620(int * param_1, int param_2)
 * called by: FUN_10049760
 */
void __cdecl FUN_10049620(int *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *param_1;
  if ((float)iVar1 < 0.001) {
    *param_1 = param_2;
    return;
  }
  if (param_2 != iVar1) {
    if (iVar1 < param_2) {
      lVar2 = __ftol();
      *param_1 = (int)lVar2;
      if (param_2 <= (int)lVar2) {
        *param_1 = param_2;
        return;
      }
    }
    else {
      if (param_2 < iVar1) {
        lVar2 = __ftol();
        *param_1 = (int)lVar2;
        if (param_2 < (int)lVar2) {
          return;
        }
      }
      *param_1 = param_2;
    }
  }
  return;
}

/* 10049760  FUN_10049760  (312 bytes)
 * undefined FUN_10049760(undefined4 * param_1)
 * called by: FUN_10024b00
 */
void __fastcall FUN_10049760(undefined4 *param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  longlong lVar5;
  int iVar6;
  float local_8;
  
  for (piVar1 = (int *)*param_1; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if ((*(byte *)((int *)*piVar1 + 4) & 1) != 0) {
      (**(code **)(*(int *)*piVar1 + 0x10))();
    }
  }
  iVar6 = param_1[0x1e];
  if (0.001 <= *(float *)(iVar6 + 0xc)) {
    if ((110.0 <= *(float *)(iVar6 + 0xc)) || (70.0 < *(float *)(iVar6 + 0xc))) {
      if (110.0 <= *(float *)(iVar6 + 0xc)) {
        local_8 = 110.0;
      }
      else {
        local_8 = *(float *)(iVar6 + 0xc);
      }
    }
    else {
      local_8 = 70.0;
    }
  }
  else {
    local_8 = 80.0;
  }
  FUN_100209f0();
  lVar5 = __ftol();
  iVar3 = (int)lVar5;
  piVar1 = param_1 + 0x16;
  iVar6 = iVar3;
  if ((float)iVar3 < 0.001) {
    lVar5 = __ftol();
    iVar6 = (int)lVar5;
  }
  FUN_10049620(piVar1,iVar6);
  fVar2 = (float)*piVar1 - local_8;
  if (fVar2 <= 0.0) {
    fVar2 = -fVar2;
  }
  if (0.01 <= fVar2) {
    fVar4 = (float10)(*gEngfuncs.pfnGetCvarFloat)(s_zoom_sensitivity_ratio_100937fc);
    param_1[6] = (float)(((float10)iVar3 / (float10)local_8) *
                         (float10)*(float *)(DAT_100df708 + 0xc) * fVar4);
  }
  else {
    param_1[6] = 0;
  }
  if ((float)*piVar1 < 0.001) {
    lVar5 = __ftol();
    *piVar1 = (int)lVar5;
  }
  return;
}

/* 10049d10  FUN_10049d10  (352 bytes)
 * undefined FUN_10049d10(int param_1)
 */
void __fastcall FUN_10049d10(int param_1)

{
  HSPRITE HVar1;
  int iVar2;
  HSPRITE *pHVar3;
  undefined4 *puVar4;
  
  pHVar3 = (HSPRITE *)(param_1 + 0x38);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pHVar3 = 0;
    pHVar3 = pHVar3 + 1;
  }
  HVar1 = (*gEngfuncs.pfnSPR_Load)(s_sprites_player_stand_spr_10095a60);
  *(HSPRITE *)(param_1 + 0x38) = HVar1;
  HVar1 = (*gEngfuncs.pfnSPR_Load)(s_sprites_player_crouched_spr_10095a44);
  *(HSPRITE *)(param_1 + 0x3c) = HVar1;
  HVar1 = (*gEngfuncs.pfnSPR_Load)(s_sprites_player_prone_spr_10095a28);
  *(HSPRITE *)(param_1 + 0x40) = HVar1;
  HVar1 = (*gEngfuncs.pfnSPR_Load)(s_sprites_player_health_spr_10095a0c);
  *(HSPRITE *)(param_1 + 0x58) = HVar1;
  HVar1 = (*gEngfuncs.pfnSPR_Load)(s_sprites_player_kevlar_spr_100959f0);
  *(HSPRITE *)(param_1 + 0x5c) = HVar1;
  HVar1 = (*gEngfuncs.pfnSPR_Load)(s_sprites_cursor_spr_100959dc);
  *(HSPRITE *)(param_1 + 0x1434) = HVar1;
  HVar1 = (*gEngfuncs.pfnSPR_Load)(s_sprites_compass_spr_100959c8);
  *(HSPRITE *)(param_1 + 0x1438) = HVar1;
  HVar1 = (*gEngfuncs.pfnSPR_Load)(s_sprites_uparrow_spr_100959b4);
  *(HSPRITE *)(param_1 + 0x143c) = HVar1;
  HVar1 = (*gEngfuncs.pfnSPR_Load)(s_sprites_downarrow_spr_1009599c);
  *(HSPRITE *)(param_1 + 0x1440) = HVar1;
  HVar1 = (*gEngfuncs.pfnSPR_Load)(s_sprites_player_kungfu_spr_10095980);
  *(HSPRITE *)(param_1 + 100) = HVar1;
  HVar1 = (*gEngfuncs.pfnSPR_Load)(s_sprites_player_movement_spr_10095964);
  *(HSPRITE *)(param_1 + 0x68) = HVar1;
  HVar1 = (*gEngfuncs.pfnSPR_Load)(s_sprites_player_flag_spr_1009594c);
  *(HSPRITE *)(param_1 + 0x6c) = HVar1;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  puVar4 = (undefined4 *)(param_1 + 0x70);
  for (iVar2 = 0x270; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = (undefined4 *)(param_1 + 0x1444);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)puVar4 = 0;
  puVar4 = (undefined4 *)(param_1 + 0xa30);
  for (iVar2 = 0x280; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(param_1 + 0x1468) = 0;
  puVar4 = (undefined4 *)(param_1 + 0x146c);
  for (iVar2 = 0x30; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(param_1 + 0x152c) = 0;
  *(undefined1 *)(param_1 + 0x152d) = 0;
  *(undefined4 *)(param_1 + 0x1530) = 0;
  *(undefined4 *)(param_1 + 0x1534) = 0;
  *(undefined4 *)(param_1 + 0x1430) = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  return;
}

/* 10049fc0  FUN_10049fc0  (360 bytes)
 * undefined FUN_10049fc0(int param_1)
 */
void __fastcall FUN_10049fc0(int param_1)

{
  int y;
  int iVar1;
  float *pfVar2;
  
  iVar1 = 0;
  if (-1 < *(int *)(param_1 + 0x1430)) {
    pfVar2 = (float *)(param_1 + 0xa3c);
    do {
      if ((((*(char *)(pfVar2 + -3) != '\0') && (*(char *)(pfVar2 + 1) != '\0')) &&
          (FUN_100579c0(pfVar2 + -2,&DAT_1018a5b0,&DAT_1018a4cc), DAT_1018a5b0 != -1)) &&
         (DAT_1018a4cc != -1)) {
        (*gEngfuncs.pfnSPR_Set)(*(HSPRITE *)(param_1 + 0x1438),100,100,0xcd);
        (*gEngfuncs.pfnSPR_DrawAdditive)(0,DAT_1018a5b0 + -0x10,DAT_1018a4cc + -0x10,(wrect_t *)0x0)
        ;
        if (*pfVar2 <= DAT_100cf960 + 72.0) {
          if (*pfVar2 < DAT_100cf960 - 72.0) {
            (*gEngfuncs.pfnSPR_Set)(*(HSPRITE *)(param_1 + 0x1440),100,100,0xcd);
            y = DAT_1018a4cc + 0x10;
            goto LAB_1004a0cd;
          }
        }
        else {
          (*gEngfuncs.pfnSPR_Set)(*(HSPRITE *)(param_1 + 0x143c),100,100,0xcd);
          y = DAT_1018a4cc + -0x30;
LAB_1004a0cd:
          (*gEngfuncs.pfnSPR_DrawAdditive)(0,DAT_1018a5b0 + -0x10,y,(wrect_t *)0x0);
        }
        FUN_10021ce0(DAT_1018a5b0 + 0x10,DAT_1018a4cc + -8,DAT_100d5908,(char *)(pfVar2 + 1),100,100
                     ,0xcd);
      }
      iVar1 = iVar1 + 1;
      pfVar2 = pfVar2 + 0x14;
    } while (iVar1 <= *(int *)(param_1 + 0x1430));
  }
  return;
}

/* 1004a130  FUN_1004a130  (426 bytes)
 * undefined FUN_1004a130(int param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1004a130(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  if (*(float *)(param_1 + 0x30) < DAT_100cf944) {
    if (*(char *)(param_1 + 0x34) != '\x02') {
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) - 1.0;
    }
    if (*(float *)(param_1 + 0x2c) <= 0.0) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    if (*(char *)(param_1 + 0x34) == '\x01') {
      fVar1 = 0.1;
    }
    else {
      fVar1 = 1.0;
    }
    *(float *)(param_1 + 0x30) = DAT_100cf944 + fVar1;
  }
  lVar5 = __ftol();
  iVar2 = (int)lVar5;
  DAT_1018a538 = iVar2;
  if (iVar2 < 0x3c) {
    uVar4 = 0xc3;
    uVar3 = 0x2d;
    DAT_1018a5a8 = 0xc3;
    DAT_1018a514 = 0x2d;
    DAT_1018a608 = 0x2d;
  }
  else {
    lVar5 = __ftol();
    uVar4 = (undefined4)lVar5;
    DAT_1018a5a8 = uVar4;
    lVar5 = __ftol();
    uVar3 = (undefined4)lVar5;
    DAT_1018a514 = uVar3;
    lVar5 = __ftol();
    DAT_1018a608 = (undefined4)lVar5;
  }
  _DAT_1018a478 = DAT_100d5908 + -0x48;
  DAT_1018a59c = 8;
  _DAT_1018a5dc = 0x14;
  _DAT_1018a478 =
       FUN_1004c290(&DAT_100cf920,_DAT_1018a478,0xc,'\x03',iVar2 / 0x3c,uVar4,uVar3,DAT_1018a608);
  _DAT_1018a478 =
       FUN_10021ce0(_DAT_1018a478,DAT_1018a59c + 4,DAT_100d5908,&DAT_10093ac4,DAT_1018a5a8,
                    DAT_1018a514,DAT_1018a608);
  _DAT_1018a478 =
       FUN_1004c290(&DAT_100cf920,_DAT_1018a478,DAT_1018a59c + 4,'#',DAT_1018a538 % 0x3c,
                    DAT_1018a5a8,DAT_1018a514,DAT_1018a608);
  return;
}

/* 1004a2e0  FUN_1004a2e0  (252 bytes)
 * undefined FUN_1004a2e0(int param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1004a2e0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined4 uVar11;
  
  uVar4 = *(uint *)(param_1 + 0x14);
  if ((uVar4 & 1) == 0) {
    if ((uVar4 & 2) == 0) {
      if ((uVar4 & 8) != 0) {
        pcVar10 = s__Pwr_SlowPause_10095a90;
        goto LAB_1004a307;
      }
      if ((uVar4 & 0x10) == 0) goto LAB_1004a361;
      pcVar10 = s__Pwr_DoubleFireRate_10095a7c;
    }
    else {
      pcVar10 = s__Pwr_InfiniteAmmo_10095aa0;
    }
    pcVar10 = FUN_100349a0(pcVar10);
    uVar4 = 0xffffffff;
    do {
      pcVar6 = pcVar10;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar6 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar6;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar10 = pcVar6 + -uVar4;
    pcVar6 = (char *)&DAT_1018a5e0;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar6 = pcVar6 + 4;
    }
  }
  else {
    pcVar10 = s__Pwr_SlowMotion_10095ab4;
LAB_1004a307:
    pcVar10 = FUN_100349a0(pcVar10);
    uVar4 = 0xffffffff;
    do {
      pcVar6 = pcVar10;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar6 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar6;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar10 = pcVar6 + -uVar4;
    pcVar6 = (char *)&DAT_1018a5e0;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar6 = pcVar6 + 4;
    }
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar6 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar6 = pcVar6 + 1;
  }
LAB_1004a361:
  iVar2 = FUN_10021ce0(8,8,DAT_100d5908,(char *)&DAT_1018a5e0,0x2d,0xc3,0x2d);
  _DAT_1018a470 = iVar2;
  if (*(float *)(param_1 + 0x1c) <= DAT_100cf944) {
    iVar3 = *(int *)(param_1 + 0x18);
    if (iVar3 == 0) {
      return;
    }
    uVar11 = 0x2d;
    uVar9 = 0xc3;
    uVar8 = 0x2d;
  }
  else {
    uVar11 = 0x2d;
    uVar9 = 0xc3;
    uVar8 = 0x2d;
    lVar7 = __ftol();
    iVar3 = (int)lVar7;
  }
  FUN_1004c290(&DAT_100cf920,iVar2 + 4,8,'\x03',iVar3,uVar8,uVar9,uVar11);
  return;
}

/* 1004a3e0  FUN_1004a3e0  (1885 bytes)
 * undefined FUN_1004a3e0(int param_1)
 */
void __fastcall FUN_1004a3e0(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  cl_entity_s *pcVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 uStack0000001c;
  int iStack00000030;
  int in_stack_00000050;
  int in_stack_00000054;
  int in_stack_00000058;
  int in_stack_0000005c;
  int in_stack_00000060;
  int in_stack_00000064;
  int in_stack_00000068;
  int in_stack_0000006c;
  undefined4 uStack000000e8;
  
  if (*(float *)(DAT_100df494 + 0xc) == 0.0) {
    lVar11 = __ftol();
    DAT_1018a474 = (int)lVar11;
    lVar12 = __ftol();
    DAT_1018a598 = (int)lVar12;
    lVar13 = __ftol();
    DAT_1018a480 = (int)lVar13;
    DAT_1018a604 = DAT_100d590c + -0x30;
    DAT_1018a4c4 = 8;
    DAT_1018a594 = 0x28;
    (*gEngfuncs.pfnFillRGBA)(8,DAT_1018a604,0x7f,0x27,(int)lVar11,(int)lVar12,DAT_1018a480,0xf);
    (*gEngfuncs.pfnSPR_Width)(*(HSPRITE *)(param_1 + 0x38 + (uint)*(byte *)(param_1 + 0x22) * 4),0);
    iVar3 = (*gEngfuncs.pfnSPR_Height)
                      (*(HSPRITE *)(param_1 + 0x38 + (uint)*(byte *)(param_1 + 0x22) * 4),0);
    bVar2 = *(byte *)(param_1 + 0x20);
    if (bVar2 < 0x65) {
      uVar4 = (uint)bVar2;
    }
    else {
      uVar4 = 100;
    }
    if (bVar2 < 100) {
      (*gEngfuncs.pfnSPR_Set)
                (*(HSPRITE *)(param_1 + 0x38 + (uint)*(byte *)(param_1 + 0x22) * 4),0xc3,0x2d,0x2d);
      (*gEngfuncs.pfnSPR_DrawAdditive)(0,DAT_1018a4c4,DAT_1018a604 + -4,(wrect_t *)&stack0x00000030)
      ;
    }
    uStack0000001c = 0x1004a562;
    (*gEngfuncs.pfnSPR_Set)
              (*(HSPRITE *)(param_1 + 0x38 + (uint)*(byte *)(param_1 + 0x22) * 4),DAT_1018a474 / 2,
               DAT_1018a598 / 2,DAT_1018a480 / 2);
    uStack0000001c = 0x1004a580;
    (*gEngfuncs.pfnSPR_DrawAdditive)
              (0,DAT_1018a4c4,DAT_1018a604 + -4 + (iVar3 - (int)(uVar4 * iVar3) / 100),
               (wrect_t *)&stack0x00000050);
    DAT_1018a4c4 = 0x48;
    if (*(byte *)(param_1 + 0x20) < 0x32) {
      iVar9 = 0x2d;
      iVar3 = 0x2d;
      iVar5 = 0xc3;
    }
    else {
      iVar9 = DAT_1018a480 / 2;
      iVar3 = DAT_1018a598 / 2;
      iVar5 = DAT_1018a474 / 2;
    }
    iStack00000030 = 0x1004a5f7;
    FUN_1004c290(&DAT_100cf920,0x48,DAT_1018a604 + 4,'\x05',(uint)*(byte *)(param_1 + 0x20),iVar5,
                 iVar3,iVar9);
    if (*(byte *)(param_1 + 0x20) < 0x32) {
      iVar9 = 0x2d;
      iVar3 = 0x2d;
      iVar5 = 0xc3;
    }
    else {
      iVar9 = DAT_1018a480 / 2;
      iVar3 = DAT_1018a598 / 2;
      iVar5 = DAT_1018a474 / 2;
    }
    (*gEngfuncs.pfnSPR_Set)(*(HSPRITE *)(param_1 + 0x58),iVar5,iVar3,iVar9);
    (*gEngfuncs.pfnSPR_DrawAdditive)(0,0x68,DAT_1018a604,(wrect_t *)0x0);
    if (*(byte *)(param_1 + 0x21) != 0) {
      if (*(byte *)(param_1 + 0x21) < 0x32) {
        in_stack_0000006c = 0x2d;
        in_stack_00000068 = 0x2d;
        in_stack_00000064 = 0xc3;
      }
      else {
        in_stack_0000006c = DAT_1018a480 / 2;
        in_stack_00000068 = DAT_1018a598 / 2;
        in_stack_00000064 = DAT_1018a474 / 2;
      }
      in_stack_00000060 = *(HSPRITE *)(param_1 + 0x5c);
      in_stack_0000005c = 0x1004a6bd;
      (*gEngfuncs.pfnSPR_Set)
                (in_stack_00000060,in_stack_00000064,in_stack_00000068,in_stack_0000006c);
      in_stack_00000068 = DAT_1018a604 + 0x14;
      in_stack_0000006c = 0;
      in_stack_00000064 = DAT_1018a4c4;
      in_stack_00000060 = 0;
      in_stack_0000005c = 0x1004a6d8;
      (*gEngfuncs.pfnSPR_DrawAdditive)(0,DAT_1018a4c4,in_stack_00000068,(wrect_t *)0x0);
    }
    DAT_1018a4c4 = 8;
    DAT_1018a604 = DAT_1018a604 + -0x14;
    DAT_1018a594 = 0x14;
    if (DAT_100cf97c != 0) {
      pcVar6 = (*gEngfuncs.GetLocalPlayer)();
      iVar3 = pcVar6->index;
      uVar4 = 0xffffffff;
      in_stack_0000006c = 0x23;
      pcVar7 = &DAT_101901fe + iVar3 * 0x20;
      do {
        pcVar10 = pcVar7;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar10 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar10;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar7 = pcVar10 + -uVar4;
      pcVar10 = (char *)&DAT_1018a5b4;
      for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar10 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar10 = pcVar10 + 1;
      }
      iVar3 = (int)(short)(&DAT_101901fc)[iVar3 * 0x10];
      in_stack_00000064 = (&DAT_10096978)[iVar3 * 3];
      in_stack_00000068 = (&DAT_1009697c)[iVar3 * 3];
      in_stack_00000060 = (&DAT_10096974)[iVar3 * 3];
      in_stack_0000005c = DAT_1018a594 + -1;
      in_stack_00000058 = 0x7f;
      in_stack_00000054 = DAT_1018a604;
      in_stack_00000050 = DAT_1018a4c4;
      (*gEngfuncs.pfnFillRGBA)
                (DAT_1018a4c4,DAT_1018a604,0x7f,in_stack_0000005c,in_stack_00000060,
                 in_stack_00000064,in_stack_00000068,0x23);
      FUN_10021ce0(DAT_1018a4c4 + 2,DAT_1018a604,DAT_100d5908,(char *)&DAT_1018a5b4,
                   (&DAT_10096974)[iVar3 * 3],(&DAT_10096978)[iVar3 * 3],(&DAT_1009697c)[iVar3 * 3])
      ;
    }
    DAT_1018a604 = DAT_100d590c + -0x1c;
    DAT_1018a4c4 = 0x88;
    DAT_1018a594 = 0x14;
    in_stack_0000006c = 0x1004a7f8;
    (*gEngfuncs.pfnFillRGBA)(0x88,DAT_1018a604,0x7f,0x13,DAT_1018a474,DAT_1018a598,DAT_1018a480,0xf)
    ;
    if (*(byte *)(param_1 + 0x28) == 0) {
      iVar9 = 0x2d;
      iVar3 = 0x2d;
      iVar5 = 0xc3;
    }
    else {
      iVar9 = DAT_1018a480 / 2;
      iVar3 = DAT_1018a598 / 2;
      iVar5 = DAT_1018a474 / 2;
    }
    DAT_1018a58c = FUN_1004c290(&DAT_100cf920,DAT_1018a4c4 + 8,DAT_1018a604 + 2,'\x03',
                                (uint)*(byte *)(param_1 + 0x28),iVar5,iVar3,iVar9);
    if (*(char *)(param_1 + 0x28) == '\0') {
      iVar9 = 0x2d;
      iVar3 = 0x2d;
      iVar5 = 0xc3;
    }
    else {
      iVar9 = DAT_1018a480 / 2;
      iVar3 = DAT_1018a598 / 2;
      iVar5 = DAT_1018a474 / 2;
    }
    pcVar7 = FUN_100349a0(s__HUD_FreeSlots_10095ad4);
    FUN_10021ce0(DAT_1018a58c + 8,DAT_1018a604,DAT_100d5908,pcVar7,iVar5,iVar3,iVar9);
    if ((1 < DAT_100cf97c) || (DAT_1018d170 != 0)) {
      DAT_1018a604 = DAT_1018a604 - DAT_1018a594;
      (*gEngfuncs.pfnFillRGBA)
                (DAT_1018a4c4,DAT_1018a604,0x7f,DAT_1018a594 + -1,DAT_1018a474,DAT_1018a598,
                 DAT_1018a480,0xf);
      if (*(int *)(param_1 + 0x24) < 1000) {
        iVar9 = 0x2d;
        iVar3 = 0x2d;
        iVar5 = 0xc3;
      }
      else {
        iVar9 = DAT_1018a480 / 2;
        iVar3 = DAT_1018a598 / 2;
        iVar5 = DAT_1018a474 / 2;
      }
      DAT_1018a58c = FUN_1004c290(&DAT_100cf920,DAT_1018a4c4,DAT_1018a604 + 2,'\x11',
                                  *(int *)(param_1 + 0x24),iVar5,iVar3,iVar9);
      if (*(int *)(param_1 + 0x24) < 1000) {
        iVar9 = 0x2d;
        iVar3 = 0x2d;
        iVar5 = 0xc3;
      }
      else {
        iVar9 = DAT_1018a480 / 2;
        iVar3 = DAT_1018a598 / 2;
        iVar5 = DAT_1018a474 / 2;
      }
      pcVar7 = FUN_100349a0(s__HUD_Credits_10095ac4);
      FUN_10021ce0(DAT_1018a58c + 8,DAT_1018a604,DAT_100d5908,pcVar7,iVar5,iVar3,iVar9);
    }
    if (*(char *)(param_1 + 0x29) != '\0') {
      DAT_1018a4c4 = DAT_100d5908 / 2 + -0x30;
      DAT_1018a604 = DAT_100d590c + -0x38;
      lVar11 = __ftol();
      lVar12 = __ftol();
      lVar13 = __ftol();
      (*gEngfuncs.pfnSPR_Set)(*(HSPRITE *)(param_1 + 100),(int)lVar13,(int)lVar12,(int)lVar11);
      (*gEngfuncs.pfnSPR_DrawAdditive)(0,DAT_1018a4c4,DAT_1018a604,(wrect_t *)0x0);
    }
    if (*(char *)(param_1 + 0x2a) != '\0') {
      DAT_1018a604 = DAT_100d590c + -0x38;
      DAT_1018a4c4 = DAT_100d5908 / 2;
      lVar11 = __ftol();
      iVar3 = (int)lVar11;
      lVar11 = __ftol();
      iVar9 = (int)lVar11;
      lVar11 = __ftol();
      uStack000000e8 = 0x1004ab1e;
      (*gEngfuncs.pfnSPR_Set)(*(HSPRITE *)(param_1 + 0x68),(int)lVar11,iVar9,iVar3);
      uStack000000e8 = 0x1004ab35;
      (*gEngfuncs.pfnSPR_DrawAdditive)(0,DAT_1018a4c4,DAT_1018a604,(wrect_t *)0x0);
    }
  }
  return;
}

/* 1004ab40  FUN_1004ab40  (380 bytes)
 * undefined FUN_1004ab40(int param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1004ab40(int param_1)

{
  cl_entity_s *pcVar1;
  int r;
  int g;
  
  pcVar1 = (*gEngfuncs.GetLocalPlayer)();
  DAT_1018a5f0 = pcVar1->index;
  DAT_1018a520 = (*gEngfuncs.GetMaxClients)();
  DAT_1018a540 = 0;
  if (-1 < DAT_1018a520) {
    do {
      if ((*(char *)(param_1 + 0x1444 + DAT_1018a540) != '\0') &&
         (*(undefined1 *)(param_1 + 0x1444 + DAT_1018a540) = 0, DAT_1018a540 != DAT_1018a5f0)) {
        if ((&DAT_101901f0)[DAT_1018a540 * 8] == 0) {
          if ((((&DAT_101901fc)[DAT_1018a540 * 0x10] == (&DAT_101901fc)[DAT_1018a5f0 * 0x10]) &&
              (FUN_1004b470(DAT_1018a540,&DAT_1018a614,&DAT_1018a5d8), DAT_1018a614 != -1)) &&
             (DAT_1018a5d8 != -1)) {
            _DAT_1018a5a4 = 0x44800000;
            _DAT_1018a4c8 = 0x3f000000;
            (*gEngfuncs.pfnFillRGBA)(DAT_1018a614 + -2,DAT_1018a5d8 + -2,4,4,0x2d,0xc3,0x2d,0x75);
          }
        }
        else {
          FUN_1004b470(DAT_1018a540,&DAT_1018a614,&DAT_1018a5d8);
          if ((DAT_1018a614 != -1) && (DAT_1018a5d8 != -1)) {
            if ((&DAT_101901fc)[DAT_1018a540 * 0x10] == (&DAT_101901fc)[DAT_1018a5f0 * 0x10]) {
              g = 0x41;
              r = 0xf;
            }
            else {
              g = 0xf;
              r = 0x41;
            }
            (*gEngfuncs.pfnSPR_Set)(*(HSPRITE *)(param_1 + 0x6c),r,g,0xf);
            (*gEngfuncs.pfnSPR_DrawAdditive)
                      (0,DAT_1018a614 + -0x18,DAT_1018a5d8 + -0x30,(wrect_t *)0x0);
          }
        }
      }
      DAT_1018a540 = DAT_1018a540 + 1;
    } while (DAT_1018a540 <= DAT_1018a520);
  }
  return;
}

/* 1004acc0  FUN_1004acc0  (623 bytes)
 * undefined FUN_1004acc0(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004acc0(void)

{
  char cVar1;
  int iVar2;
  cl_entity_s *pcVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  undefined4 auStack_8 [2];
  
  if ((DAT_1018a534 & 1) == 0) {
    DAT_1018a534 = DAT_1018a534 | 1;
    FUN_1006af63(0x1004af30);
  }
  pcVar3 = (*gEngfuncs.GetLocalPlayer)();
  DAT_1018a53c = pcVar3->index;
  (*(gEngfuncs.pEventAPI)->EV_PushPMStates)();
  (*(gEngfuncs.pEventAPI)->EV_SetUpPlayerPrediction)(0,1);
  (*(gEngfuncs.pEventAPI)->EV_SetSolidPlayers)(DAT_1018a53c + -1);
  (*(gEngfuncs.pEventAPI)->EV_SetTraceHull)(2);
  fVar10 = DAT_1018bd90 * 8192.0;
  fVar11 = DAT_1018bd94 * 8192.0;
  fVar12 = DAT_1018bd98 * 8192.0;
  pfVar4 = (float *)FUN_10057270(auStack_8);
  fStack_14 = fVar10 + *pfVar4;
  fStack_10 = fVar11 + pfVar4[1];
  fStack_c = fVar12 + pfVar4[2];
  pfVar4 = (float *)FUN_10057270((undefined4 *)&stack0x00000004);
  (*(gEngfuncs.pEventAPI)->EV_PlayerTrace)
            (pfVar4,&fStack_14,2,DAT_1018a53c,(pmtrace_s *)&DAT_1018a4d0);
  _DAT_100d0cd8 = DAT_1018a4e4;
  _DAT_100d0cdc = DAT_1018a4e8;
  _DAT_100d0ce0 = DAT_1018a4ec;
  iVar5 = (*(gEngfuncs.pEventAPI)->EV_IndexFromTrace)((pmtrace_s *)&DAT_1018a4d0);
  _DAT_1018a518 = (*gEngfuncs.GetEntityByIndex)(iVar5);
  iVar5 = DAT_100d590c;
  DAT_1018a60c = 0;
  if ((_DAT_1018a518 != (cl_entity_s *)0x0) && (_DAT_1018a518->player != 0)) {
    iVar2 = _DAT_1018a518->index;
    if ((DAT_100cf97c == 0) ||
       ((&DAT_101901fc)[iVar2 * 0x10] != (&DAT_101901fc)[DAT_1018a53c * 0x10])) {
      if (*(char **)(&DAT_1018fbd8 + iVar2 * 0x14) != (char *)0x0) {
        uVar6 = 0xffffffff;
        pcVar8 = *(char **)(&DAT_1018fbd8 + iVar2 * 0x14);
        do {
          pcVar9 = pcVar8;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar9 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar9;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pcVar8 = pcVar9 + -uVar6;
        pcVar9 = (char *)&DAT_1018a548;
        for (uVar7 = uVar6 >> 2; iVar5 = DAT_100d590c, uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar9 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        }
        FUN_10021ce0(DAT_100d5908 / 2,iVar5 / 2 + -0x28,DAT_100d5908,(char *)&DAT_1018a548,0xc3,0x2d
                     ,0x2d);
        DAT_1018a60c = 2;
        (*(gEngfuncs.pEventAPI)->EV_PopPMStates)();
        return;
      }
    }
    else if (*(char **)(&DAT_1018fbd8 + iVar2 * 0x14) != (char *)0x0) {
      uVar6 = 0xffffffff;
      pcVar8 = *(char **)(&DAT_1018fbd8 + iVar2 * 0x14);
      do {
        pcVar9 = pcVar8;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar8 = pcVar9 + -uVar6;
      pcVar9 = (char *)&DAT_1018a548;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      FUN_10021ce0(DAT_100d5908 / 2,iVar5 / 2 + -0x28,DAT_100d5908,(char *)&DAT_1018a548,0x2d,0xc3,
                   0x2d);
      DAT_1018a60c = 1;
    }
  }
  (*(gEngfuncs.pEventAPI)->EV_PopPMStates)();
  return;
}

/* 1004af40  FUN_1004af40  (410 bytes)
 * undefined FUN_1004af40(int param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1004af40(int param_1)

{
  int iVar1;
  float *pfVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  DAT_1018a590 = 0;
  do {
    pfVar2 = (float *)(param_1 + 0x70 + DAT_1018a590 * 0x9c);
    if (DAT_100cf944 < *(float *)(param_1 + 0x70 + DAT_1018a590 * 0x9c)) {
      if (10.0 < *pfVar2 - DAT_100cf944) {
        *pfVar2 = DAT_100cf944 + 10.0;
      }
      iVar1 = param_1 + DAT_1018a590 * 0x9c;
      if (((*(int *)(param_1 + 0x74 + DAT_1018a590 * 0x9c) == 0) && (*(int *)(iVar1 + 0x78) == 0))
         && (*(int *)(iVar1 + 0x7c) == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      DAT_1018a51c = !bVar3;
      lVar4 = __ftol();
      _DAT_1018a610 = (int)lVar4;
      lVar5 = __ftol();
      _DAT_1018a544 = (int)lVar5;
      lVar6 = __ftol();
      _DAT_1018a5a0 = (undefined4)lVar6;
      FUN_10021ce0(*(int *)(iVar1 + 0x100),*(undefined4 *)(iVar1 + 0x104),DAT_100d5908,
                   (char *)(iVar1 + 0x80),(int)lVar4,(int)lVar5,_DAT_1018a5a0);
    }
    DAT_1018a590 = DAT_1018a590 + 1;
  } while (DAT_1018a590 < 0x10);
  return;
}

/* 1004b0e0  FUN_1004b0e0  (905 bytes)
 * undefined FUN_1004b0e0(int param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1004b0e0(int param_1)

{
  char cVar1;
  int iVar2;
  cl_entity_s *pcVar3;
  int g;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int y;
  char *pcVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  longlong lVar15;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000018;
  int in_stack_0000001c;
  undefined4 uVar16;
  undefined4 uVar17;
  char *pcVar18;
  int iVar19;
  int *piStack_c;
  
  if (0 < *(int *)(param_1 + 0x1468)) {
    __ftol();
    __ftol();
    __ftol();
    pcVar3 = (*gEngfuncs.GetLocalPlayer)();
    if (pcVar3 != (cl_entity_s *)0x0) {
      (*gEngfuncs.GetLocalPlayer)();
    }
    fVar12 = FUN_10055ac0(DAT_100963e8);
    fVar14 = (float10)_DAT_100cf950;
    fVar13 = (float10)*(float *)(param_1 + 0x1530) - fVar14 / fVar12;
    *(float *)(param_1 + 0x1530) = (float)fVar13;
    fVar14 = (float10)*(float *)(param_1 + 0x1534) - fVar14 / fVar12;
    *(float *)(param_1 + 0x1534) = (float)fVar14;
    if ((float)fVar13 < 0.0) {
      *(undefined4 *)(param_1 + 0x1530) = 0x3dcccccd;
      *(bool *)(param_1 + 0x152c) = *(char *)(param_1 + 0x152c) == '\0';
    }
    if (fVar14 < (float10)0.0) {
      *(undefined4 *)(param_1 + 0x1534) = 0x3f000000;
      *(bool *)(param_1 + 0x152d) = *(char *)(param_1 + 0x152d) == '\0';
    }
    iVar4 = 0x10;
    if (*(int *)(param_1 + 0x1468) < 0x11) {
      iVar4 = *(int *)(param_1 + 0x1468);
    }
    *(undefined4 *)(param_1 + 0x1468) = 0;
    iVar19 = 0;
    if (0 < iVar4) {
      piVar10 = (int *)(param_1 + 0x1470);
      iVar5 = param_1;
      do {
        if (((piVar10[-1] != 0) && (iVar2 = piVar10[1], 0 < iVar2)) && (iVar2 < 5)) {
          y = iVar2 * 0x30 + 0x28;
          iVar2 = DAT_100d5908 + -0x38;
          lVar15 = __ftol();
          iVar7 = (int)lVar15;
          lVar15 = __ftol();
          g = (int)lVar15;
          lVar15 = __ftol();
          (*gEngfuncs.pfnSPR_Set)(*(HSPRITE *)(iVar5 + 0x6c),(int)lVar15,g,iVar7);
          (*gEngfuncs.pfnSPR_DrawAdditive)(0,iVar2,y,(wrect_t *)0x0);
          iVar7 = *piStack_c;
          if ((0 < iVar7) && (iVar7 < 0x41)) {
            if (iVar7 == y) {
              uVar8 = 0xffffffff;
              pcVar18 = s_Take_the_Briefcase_to_the_base__10095ae4;
              do {
                pcVar11 = pcVar18;
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                pcVar11 = pcVar18 + 1;
                cVar1 = *pcVar18;
                pcVar18 = pcVar11;
              } while (cVar1 != '\0');
              uVar8 = ~uVar8;
              pcVar18 = pcVar11 + -uVar8;
              pcVar11 = (char *)&DAT_1018a484;
              for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                *(undefined4 *)pcVar11 = *(undefined4 *)pcVar18;
                pcVar18 = pcVar18 + 4;
                pcVar11 = pcVar11 + 4;
              }
              for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *pcVar11 = *pcVar18;
                pcVar18 = pcVar18 + 1;
                pcVar11 = pcVar11 + 1;
              }
              iVar4 = in_stack_00000004 + 0x23;
              if (0xff < iVar4) {
                iVar4 = 0xff;
              }
              pcVar18 = (char *)&DAT_1018a484;
              uVar16 = 0x140;
              iVar19 = DAT_100d5908;
              uVar17 = in_stack_0000000c;
              uVar6 = in_stack_00000008;
              iVar5 = FUN_10021ca0(0,DAT_100d5908,(char *)&DAT_1018a484);
              FUN_10021ce0((DAT_100d5908 - iVar5) + -0x20,uVar16,iVar19,pcVar18,iVar4,uVar17,uVar6);
            }
            if (*(char **)(&DAT_1018fbd8 + *piStack_c * 0x14) == (char *)0x0) {
              DAT_1018a484._0_1_ = 0;
            }
            else {
              _strncpy((char *)&DAT_1018a484,*(char **)(&DAT_1018fbd8 + *piStack_c * 0x14),0x18);
            }
            DAT_1018a49c = 0;
            iVar4 = 0x28;
            lVar15 = __ftol();
            iVar19 = (int)lVar15;
            lVar15 = __ftol();
            uVar6 = (undefined4)lVar15;
            pcVar18 = (char *)&DAT_1018a484;
            uVar17 = in_stack_00000018;
            iVar5 = DAT_100d5908;
            iVar7 = FUN_10021ca0(0,DAT_100d5908,(char *)&DAT_1018a484);
            FUN_10021ce0(iVar2 - iVar7,uVar17,iVar5,pcVar18,uVar6,iVar19,iVar4);
            iVar5 = in_stack_0000001c;
          }
          *(int *)(iVar5 + 0x1468) = param_1 + 1;
          piVar10 = piStack_c;
        }
        iVar19 = iVar19 + 1;
        piVar10 = piVar10 + 3;
      } while (iVar19 < iVar4);
    }
  }
  return;
}

/* 1004b470  FUN_1004b470  (150 bytes)
 * undefined FUN_1004b470(undefined4 param_1, undefined4 * param_2, undefined4 * param_3)
 * called by: FUN_1004ab40
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1004b470(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  if ((DAT_1018a5d4 & 1) == 0) {
    DAT_1018a5d4 = DAT_1018a5d4 | 1;
    FUN_1006af63(0x1004b510);
  }
  DAT_1018a588 = (*gEngfuncs.GetEntityByIndex)(param_1);
  *param_2 = 0xffffffff;
  *param_3 = 0xffffffff;
  if ((DAT_1018a588 != (cl_entity_s *)0x0) && (DAT_1018a588->player != 0)) {
    _DAT_1018a5f8 = DAT_1018a588->origin[0];
    _DAT_1018a5fc = DAT_1018a588->origin[1];
    _DAT_1018a600 = DAT_1018a588->origin[2] + 40.0;
    FUN_100579c0(&DAT_1018a5f8,param_2,param_3);
  }
  return;
}

/* 1004b520  FUN_1004b520  (518 bytes)
 * undefined FUN_1004b520(char * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, int param_5, uint param_6)
 * called by: FUN_10012050, FUN_10038840, FUN_10039400, FUN_1004c0a0
 */
void __thiscall
FUN_1004b520(void *this,char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5,uint param_6)

{
  uint *_Dest;
  uint uVar1;
  char *_Source;
  cl_entity_s *pcVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  size_t _Count;
  
  iVar4 = 0;
  pfVar6 = (float *)((int)this + 0x70);
  do {
    if (*pfVar6 < DAT_100cf944) break;
    iVar4 = iVar4 + 1;
    pfVar6 = pfVar6 + 0x27;
  } while (iVar4 < 0xf);
  if (0xf < iVar4) {
    return;
  }
  if (DAT_100cf944 < *(float *)((int)this + iVar4 * 0x9c + 0x70)) {
    return;
  }
  _Count = 0x80;
  _Dest = (uint *)((int)this + iVar4 * 0x9c + 0x80);
  _Source = FUN_100349a0(param_1);
  _strncpy((char *)_Dest,_Source,_Count);
  *(undefined1 *)((int)this + iVar4 * 0x9c + 0xff) = 0;
  pcVar2 = (*gEngfuncs.GetLocalPlayer)();
  if (pcVar2 != (cl_entity_s *)0x0) {
    pcVar2 = (*gEngfuncs.GetLocalPlayer)();
    if (((-1 < pcVar2->index) && (*(char **)(&DAT_1018fbd8 + pcVar2->index * 0x14) != (char *)0x0))
       && (puVar3 = FUN_1006c930(_Dest,*(char **)(&DAT_1018fbd8 + pcVar2->index * 0x14)),
          puVar3 != (uint *)0x0)) {
      *(undefined4 *)((int)this + iVar4 * 0x9c + 0x7c) = 0x9b;
      *(undefined4 *)((int)this + iVar4 * 0x9c + 0x74) = 0x9b;
      *(undefined4 *)((int)this + iVar4 * 0x9c + 0x78) = 0x9b;
      goto LAB_1004b5f5;
    }
  }
  *(undefined4 *)((int)this + iVar4 * 0x9c + 0x7c) = param_4;
  *(undefined4 *)((int)this + iVar4 * 0x9c + 0x74) = param_2;
  *(undefined4 *)((int)this + iVar4 * 0x9c + 0x78) = param_3;
LAB_1004b5f5:
  if ((param_6 & 1) == 0) {
    if ((param_6 & 8) == 0) {
      iVar5 = DAT_100d590c / 2;
    }
    else {
      iVar5 = DAT_100d590c + -0x40;
    }
    *(int *)((int)this + iVar4 * 0x9c + 0x104) = iVar5;
  }
  else {
    *(undefined4 *)((int)this + iVar4 * 0x9c + 0x104) = 0x20;
  }
  if ((param_6 & 2) == 0) {
    if ((param_6 & 4) == 0) {
      iVar5 = FUN_10021ca0(0,DAT_100d5908,(char *)_Dest);
      *(int *)((int)this + iVar4 * 0x9c + 0x100) = DAT_100d5908 / 2 - iVar5 / 2;
    }
    else {
      iVar5 = FUN_10021ca0(0,DAT_100d5908,(char *)_Dest);
      *(int *)((int)this + iVar4 * 0x9c + 0x100) = (DAT_100d5908 - iVar5) + -0x20;
    }
  }
  else {
    *(undefined4 *)((int)this + iVar4 * 0x9c + 0x100) = 0x20;
  }
  iVar5 = 0;
  *(uint *)((int)this + iVar4 * 0x9c + 0x108) = param_6;
  iVar7 = 0;
  do {
    if (0xf < iVar7) break;
    if (((DAT_100cf944 < *(float *)((int)this + iVar5 * 0x9c + 0x70)) &&
        (iVar8 = *(int *)((int)this + iVar4 * 0x9c + 0x104),
        *(int *)((int)this + iVar5 * 0x9c + 0x104) == iVar8)) &&
       (uVar1 = *(uint *)((int)this + iVar4 * 0x9c + 0x108),
       *(uint *)((int)this + iVar5 * 0x9c + 0x108) == uVar1)) {
      if ((param_6 & 0x10) != 0) {
        *(undefined4 *)((int)this + iVar5 * 0x9c + 0x70) = 0;
        break;
      }
      if ((uVar1 & 1) == 0) {
        iVar8 = iVar8 + -0x10;
      }
      else {
        iVar8 = iVar8 + 0x10;
      }
      iVar5 = 0;
      *(int *)((int)this + iVar4 * 0x9c + 0x104) = iVar8;
      iVar7 = iVar7 + 1;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x10);
  *(float *)((int)this + iVar4 * 0x9c + 0x70) = (float)param_5 * 0.1 + DAT_100cf944;
  return;
}

/* 1004b730  FUN_1004b730  (86 bytes)
 * undefined FUN_1004b730(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
void __thiscall FUN_1004b730(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  
  FUN_100299b0(param_3,param_2);
  DAT_100cf9d8 = FUN_10029a10();
  *(char *)((int)this + 0x20) = (char)DAT_100cf9d8;
  cVar1 = FUN_1004c280();
  if ((cVar1 == '\0') && (*(char *)((int)this + 0x20) == '\0')) {
    iVar2 = CL_IsThirdPerson();
    if (iVar2 == 0) {
      FUN_1004fe00();
    }
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1004b790  FUN_1004b790  (70 bytes)
 * undefined FUN_1004b790(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
void __thiscall FUN_1004b790(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  uVar2 = FUN_10029a10();
  if ((0 < (int)uVar1) && ((int)uVar1 < 0x41)) {
    *(char *)(&DAT_101901f4 + uVar1 * 8) = (char)uVar2;
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1004b7e0  FUN_1004b7e0  (81 bytes)
 * undefined FUN_1004b7e0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
void __thiscall FUN_1004b7e0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  uVar2 = FUN_10029a10();
  uVar3 = FUN_10029a10();
  if (((0 < (int)uVar1) && ((int)uVar1 < 0x41)) && (uVar2 == 0)) {
    *(char *)((int)&DAT_1018d128 + uVar1 * 2 + 1) = (char)uVar3;
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1004b840  FUN_1004b840  (142 bytes)
 * undefined FUN_1004b840(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
void __thiscall FUN_1004b840(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  iVar2 = FUN_10029a50();
  switch(uVar1) {
  case 0:
    DAT_1018d16c = iVar2;
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
    return;
  case 1:
    DAT_1018d170 = iVar2;
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
    return;
  case 2:
    FUN_100072c0(iVar2);
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
    return;
  case 3:
    DAT_1018d174 = iVar2;
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1004b8e0  FUN_1004b8e0  (54 bytes)
 * undefined FUN_1004b8e0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
void __thiscall FUN_1004b8e0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  DAT_1018d178 = uVar1 != 0;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1004b920  FUN_1004b920  (46 bytes)
 * undefined FUN_1004b920(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
void __thiscall FUN_1004b920(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  *(char *)((int)this + 0x21) = (char)uVar1;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1004b950  FUN_1004b950  (46 bytes)
 * undefined FUN_1004b950(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
void __thiscall FUN_1004b950(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  *(char *)((int)this + 0x22) = (char)uVar1;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1004b980  FUN_1004b980  (46 bytes)
 * undefined FUN_1004b980(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
void __thiscall FUN_1004b980(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_100299b0(param_3,param_2);
  iVar1 = FUN_10029a50();
  *(int *)((int)this + 0x24) = iVar1;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1004b9b0  FUN_1004b9b0  (46 bytes)
 * undefined FUN_1004b9b0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
void __thiscall FUN_1004b9b0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  *(char *)((int)this + 0x28) = (char)uVar1;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1004b9e0  FUN_1004b9e0  (111 bytes)
 * undefined4 FUN_1004b9e0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_1004b9e0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a50();
  uVar2 = FUN_10029a10();
  if ((uVar1 & 0x104) == 0) {
    *(uint *)((int)this + 0x14) = uVar1;
    *(uint *)((int)this + 0x18) = uVar2;
  }
  else {
    if ((uVar1 & 4) == 0) {
      *(undefined1 *)((int)this + 0x2a) = 1;
    }
    else {
      *(undefined1 *)((int)this + 0x29) = 1;
    }
    if (*(int *)((int)this + 0x14) == 0) {
      *(undefined4 *)((int)this + 0x14) = 0;
      *(undefined4 *)((int)this + 0x18) = 0;
      *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
      return 1;
    }
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return 1;
}

/* 1004ba50  FUN_1004ba50  (121 bytes)
 * undefined4 FUN_1004ba50(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_1004ba50(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_100299b0(param_3,param_2);
  uVar2 = FUN_10029a10();
  uVar3 = FUN_10029a10();
  uVar4 = FUN_10029a10();
  uVar5 = FUN_10029a10();
  if ((0 < (int)uVar3) && ((int)uVar3 < 0x10)) {
    puVar1 = (uint *)((int)this + uVar3 * 0xc + 0x146c);
    if (uVar2 == 1) {
      puVar1[1] = uVar5;
    }
    else {
      puVar1[1] = 0;
    }
    *puVar1 = uVar2;
    puVar1[2] = uVar4;
  }
  *(undefined4 *)((int)this + 0x1468) = 0x10;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return 1;
}

/* 1004bad0  FUN_1004bad0  (67 bytes)
 * undefined FUN_1004bad0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
void __thiscall FUN_1004bad0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  uint uVar2;
  
  FUN_100299b0(param_3,param_2);
  uVar2 = FUN_10029a10();
  fVar1 = (float)(int)uVar2 + DAT_100cf944;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  *(float *)((int)this + 0x1c) = fVar1;
  return;
}

