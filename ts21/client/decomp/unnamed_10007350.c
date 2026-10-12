/* client.dll - unnamed_10007350 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10007350  FUN_10007350  (332 bytes)
 * undefined * FUN_10007350(int param_1)
 */
undefined * __cdecl FUN_10007350(int param_1)

{
  if (*(int *)(param_1 + 0x8c) == 1) {
    if (*(float *)(DAT_1028fd54 + 0xc) == 0.0) {
      (*DAT_102e1568)(0,2);
      FUN_100bb6e0(&DAT_1028fd34,(byte_conflict *)"{break%i");
    }
    else {
      (*DAT_102e1568)(0,0x11);
      FUN_100bb6e0(&DAT_1028fd34,(byte_conflict *)"{splat%i");
    }
  }
  else if (*(int *)(param_1 + 0x68) == 0) {
    if (*(float *)(DAT_1028fd54 + 0xc) == 0.0) {
      (*DAT_102e1568)(0,4);
      FUN_100bb6e0(&DAT_1028fd34,(byte_conflict *)"{shot%i");
    }
    else {
      (*DAT_102e1568)(0,0x11);
      FUN_100bb6e0(&DAT_1028fd34,(byte_conflict *)"{splat%i");
    }
  }
  else if (*(float *)(DAT_1028fd54 + 0xc) == 0.0) {
    FUN_100bb6e0(&DAT_1028fd34,(byte_conflict *)"{bproof1");
  }
  else {
    (*DAT_102e1568)(0,0x11);
    FUN_100bb6e0(&DAT_1028fd34,(byte_conflict *)"{splat%i");
  }
  return &DAT_1028fd34;
}

/* 100074f0  FUN_100074f0  (195 bytes)
 * undefined FUN_100074f0(int param_1, char * param_2)
 */
void __cdecl FUN_100074f0(int param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  undefined4 uVar4;
  
  iVar1 = (**(code **)(DAT_102e15a8 + 0x24))(*(undefined4 *)(param_1 + 0x30));
  if ((((param_2 != (char *)0x0) && (*param_2 != '\0')) && (iVar1 != 0)) &&
     ((*(int *)(iVar1 + 0x60) == 4 || (*(int *)(iVar1 + 0x7c) == 0xd)))) {
    fVar3 = (float10)thunk_FUN_1000cd40("r_decals");
    if (fVar3 != (float10)0.0) {
      uVar4 = 0;
      uVar2 = thunk_FUN_10008500(param_1 + 0x14);
      uVar2 = (**(code **)(DAT_102e15a8 + 0x20))(param_1,0,uVar2,uVar4);
      uVar2 = (**(code **)(DAT_102e15a4 + 0xd0))(param_2,uVar2);
      uVar2 = (**(code **)(DAT_102e15a4 + 0xcc))(uVar2);
      (**(code **)(DAT_102e15a4 + 0xd4))(uVar2);
    }
  }
  return;
}

/* 100075f0  FUN_100075f0  (84 bytes)
 * undefined FUN_100075f0(int param_1)
 */
void __cdecl FUN_100075f0(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = (**(code **)(DAT_102e15a8 + 0x24))(*(undefined4 *)(param_1 + 0x30));
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x60) == 4)) {
    pcVar2 = thunk_FUN_10007350(iVar1);
    thunk_FUN_100074f0(param_1,pcVar2);
  }
  return;
}

/* 10007660  FUN_10007660  (319 bytes)
 * undefined4 FUN_10007660(int param_1, undefined4 * param_2, undefined4 param_3, int param_4, int param_5, undefined4 param_6, int param_7, int * param_8)
 */
undefined4 __cdecl
FUN_10007660(int param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5,
            undefined4 param_6,int param_7,int *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint local_6c;
  undefined1 local_28 [12];
  undefined1 local_1c [12];
  uint local_10;
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  if ((param_1 < 1) || (iVar5 = (*DAT_102e14e8)(), iVar5 < param_1)) {
    local_6c = 0;
  }
  else {
    local_6c = 0x1000000;
  }
  local_10 = local_6c >> 0x18;
  if ((param_7 != 0) && (iVar5 = *param_8, *param_8 = *param_8 + 1, iVar5 % param_7 == 0)) {
    thunk_FUN_10007fe0(local_1c);
    if (local_10 == 0) {
      puVar6 = (undefined4 *)thunk_FUN_10008500(local_1c);
      *puVar6 = *param_2;
      iVar5 = thunk_FUN_10008500(local_1c);
      *(undefined4 *)(iVar5 + 4) = param_2[1];
      iVar5 = thunk_FUN_10008500(local_1c);
      *(undefined4 *)(iVar5 + 8) = param_2[2];
    }
    else {
      thunk_FUN_10008000(local_28,0,0,-4);
      for (local_c = 0; local_c < 3; local_c = local_c + 1) {
        iVar5 = thunk_FUN_10008500(local_28);
        fVar1 = (float)param_2[local_c];
        fVar2 = *(float *)(iVar5 + local_c * 4);
        fVar3 = *(float *)(param_5 + local_c * 4);
        fVar4 = *(float *)(param_4 + local_c * 4);
        iVar5 = thunk_FUN_10008500(local_1c);
        *(float *)(iVar5 + local_c * 4) = fVar4 * 16.0 + fVar3 + fVar3 + fVar1 + fVar2;
      }
    }
    if (param_7 != 1) {
      local_8 = 1;
    }
    uVar7 = thunk_FUN_10008500(local_1c);
    thunk_FUN_10042da0(uVar7,param_3);
  }
  return local_8;
}

/* 100077f0  FUN_100077f0  (811 bytes)
 * undefined FUN_100077f0(int param_1)
 * called by: thunk_FUN_100077f0
 */
void __cdecl FUN_100077f0(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined3 extraout_var;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  undefined4 *puVar16;
  float10 fVar17;
  char *pcVar18;
  float fVar19;
  int *piVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined1 local_88 [12];
  undefined1 local_7c [12];
  undefined1 local_70 [12];
  undefined1 local_64 [12];
  undefined1 local_58 [12];
  undefined4 local_4c;
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  int local_30;
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  undefined1 local_14 [12];
  int local_8;
  
  thunk_FUN_10007fe0(local_14);
  thunk_FUN_10007fe0(local_20);
  thunk_FUN_10007fe0(local_2c);
  thunk_FUN_10007fe0(local_3c);
  thunk_FUN_10007fe0(local_48);
  thunk_FUN_10007fe0(local_58);
  thunk_FUN_10007fe0(local_64);
  thunk_FUN_10007fe0(local_70);
  thunk_FUN_10007fe0(local_7c);
  thunk_FUN_10007fe0(local_88);
  local_8 = *(int *)(param_1 + 4);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_14);
  *puVar2 = *(undefined4 *)(param_1 + 8);
  iVar3 = thunk_FUN_10008500(local_14);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0xc);
  iVar3 = thunk_FUN_10008500(local_14);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x10);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_20);
  *puVar2 = *(undefined4 *)(param_1 + 0x14);
  iVar3 = thunk_FUN_10008500(local_20);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x18);
  iVar3 = thunk_FUN_10008500(local_20);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x1c);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_2c);
  *puVar2 = *(undefined4 *)(param_1 + 0x20);
  iVar3 = thunk_FUN_10008500(local_2c);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x24);
  iVar3 = thunk_FUN_10008500(local_2c);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x28);
  local_30 = *(int *)(param_1 + 0x40);
  uVar4 = thunk_FUN_10008500(local_70);
  uVar5 = thunk_FUN_10008500(local_7c);
  uVar6 = thunk_FUN_10008500(local_88);
  uVar7 = thunk_FUN_10008500(local_20);
  (*DAT_102e14b8)(uVar7,uVar6,uVar5,uVar4);
  local_4c = (**(code **)(DAT_102e15a8 + 0xc))("models/shell.mdl");
  bVar1 = thunk_FUN_10042e10(local_8);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    thunk_FUN_100431a0();
    (**(code **)(DAT_102e15a8 + 0x40))((local_30 != 0) + '\x03',2);
    thunk_FUN_100ba810(0,0xc0000000);
  }
  fVar22 = 4.0;
  fVar21 = -12.0;
  fVar19 = 20.0;
  iVar3 = thunk_FUN_10008500(local_70);
  iVar8 = thunk_FUN_10008500(local_7c);
  iVar9 = thunk_FUN_10008500(local_88);
  iVar10 = thunk_FUN_10008500(local_48);
  iVar11 = thunk_FUN_10008500(local_3c);
  iVar12 = thunk_FUN_10008500(local_2c);
  iVar13 = thunk_FUN_10008500(local_14);
  thunk_FUN_10042fe0(param_1,iVar13,iVar12,iVar11,iVar10,iVar9,iVar8,iVar3,fVar19,fVar21,fVar22);
  uVar23 = 1;
  uVar5 = local_4c;
  iVar3 = thunk_FUN_10008500(local_20);
  uVar4 = *(undefined4 *)(iVar3 + 4);
  uVar6 = thunk_FUN_10008500(local_3c);
  uVar7 = thunk_FUN_10008500(local_48);
  thunk_FUN_10042f60(uVar7,uVar6,uVar4,uVar5,uVar23);
  iVar3 = (*DAT_102e1568)(0,3);
  fVar17 = (float10)(*DAT_102e1564)(0x3f6b851f,0x3f800000,0x3f4ccccd,0,iVar3 + 0x62);
  fVar19 = (float)fVar17;
  pcVar18 = "weapons/pl_gun3.wav";
  uVar5 = 1;
  uVar4 = thunk_FUN_10008500(local_14);
  (**(code **)(DAT_102e15a8 + 4))(local_8,uVar4,uVar5,pcVar18,fVar19);
  pfVar14 = (float *)thunk_FUN_10008500(local_14);
  pfVar15 = (float *)thunk_FUN_10008500(local_58);
  thunk_FUN_10042e50(param_1,pfVar15,pfVar14);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_88);
  puVar16 = (undefined4 *)thunk_FUN_10008500(local_64);
  *puVar16 = *puVar2;
  iVar3 = thunk_FUN_10008500(local_88);
  iVar8 = thunk_FUN_10008500(local_64);
  *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(iVar3 + 4);
  iVar3 = thunk_FUN_10008500(local_88);
  iVar8 = thunk_FUN_10008500(local_64);
  *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar3 + 8);
  fVar19 = *(float *)(param_1 + 0x34);
  fVar21 = *(float *)(param_1 + 0x30);
  piVar20 = (int *)0x0;
  iVar13 = 0;
  iVar12 = 1;
  fVar22 = 8192.0;
  iVar3 = thunk_FUN_10008500(local_64);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_58);
  iVar11 = 1;
  iVar8 = thunk_FUN_10008500(local_70);
  iVar9 = thunk_FUN_10008500(local_7c);
  iVar10 = thunk_FUN_10008500(local_88);
  thunk_FUN_1007c190(local_8,iVar10,iVar9,iVar8,iVar11,puVar2,iVar3,fVar22,iVar12,iVar13,piVar20,
                     fVar21,fVar19);
  return;
}

/* 10007bf0  FUN_10007bf0  (807 bytes)
 * undefined FUN_10007bf0(int param_1)
 * called by: thunk_FUN_10007bf0
 */
void __cdecl FUN_10007bf0(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined3 extraout_var;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  undefined4 *puVar16;
  float10 fVar17;
  char *pcVar18;
  float fVar19;
  int *piVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined1 local_90 [12];
  undefined1 local_84 [12];
  undefined1 local_78 [12];
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined4 local_48;
  undefined1 local_44 [12];
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  undefined1 local_14 [12];
  int local_8;
  
  thunk_FUN_10007fe0(local_14);
  thunk_FUN_10007fe0(local_20);
  thunk_FUN_10007fe0(local_2c);
  thunk_FUN_10007fe0(local_38);
  thunk_FUN_10007fe0(local_44);
  thunk_FUN_10007fe0(local_54);
  thunk_FUN_10007fe0(local_60);
  thunk_FUN_10007fe0(local_6c);
  thunk_FUN_10007fe0(local_78);
  thunk_FUN_10007fe0(local_84);
  thunk_FUN_10007fe0(local_90);
  local_8 = *(int *)(param_1 + 4);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_14);
  *puVar2 = *(undefined4 *)(param_1 + 8);
  iVar3 = thunk_FUN_10008500(local_14);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0xc);
  iVar3 = thunk_FUN_10008500(local_14);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x10);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_20);
  *puVar2 = *(undefined4 *)(param_1 + 0x14);
  iVar3 = thunk_FUN_10008500(local_20);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x18);
  iVar3 = thunk_FUN_10008500(local_20);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x1c);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_2c);
  *puVar2 = *(undefined4 *)(param_1 + 0x20);
  iVar3 = thunk_FUN_10008500(local_2c);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x24);
  iVar3 = thunk_FUN_10008500(local_2c);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x28);
  uVar4 = thunk_FUN_10008500(local_78);
  uVar5 = thunk_FUN_10008500(local_84);
  uVar6 = thunk_FUN_10008500(local_90);
  uVar7 = thunk_FUN_10008500(local_20);
  (*DAT_102e14b8)(uVar7,uVar6,uVar5,uVar4);
  local_48 = (**(code **)(DAT_102e15a8 + 0xc))("models/shell.mdl");
  bVar1 = thunk_FUN_10042e10(local_8);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    thunk_FUN_100431a0();
    (**(code **)(DAT_102e15a8 + 0x40))(3,2);
    thunk_FUN_100ba810(0,0xc0000000);
  }
  fVar22 = 4.0;
  fVar21 = -12.0;
  fVar19 = 20.0;
  iVar3 = thunk_FUN_10008500(local_78);
  iVar8 = thunk_FUN_10008500(local_84);
  iVar9 = thunk_FUN_10008500(local_90);
  iVar10 = thunk_FUN_10008500(local_44);
  iVar11 = thunk_FUN_10008500(local_38);
  iVar12 = thunk_FUN_10008500(local_2c);
  iVar13 = thunk_FUN_10008500(local_14);
  thunk_FUN_10042fe0(param_1,iVar13,iVar12,iVar11,iVar10,iVar9,iVar8,iVar3,fVar19,fVar21,fVar22);
  uVar23 = 1;
  uVar5 = local_48;
  iVar3 = thunk_FUN_10008500(local_20);
  uVar4 = *(undefined4 *)(iVar3 + 4);
  uVar6 = thunk_FUN_10008500(local_38);
  uVar7 = thunk_FUN_10008500(local_44);
  thunk_FUN_10042f60(uVar7,uVar6,uVar4,uVar5,uVar23);
  iVar3 = (*DAT_102e1568)(0,3);
  fVar17 = (float10)(*DAT_102e1564)(0x3f6b851f,0x3f800000,0x3f4ccccd,0,iVar3 + 0x62);
  fVar19 = (float)fVar17;
  pcVar18 = "weapons/pl_gun3.wav";
  uVar5 = 1;
  uVar4 = thunk_FUN_10008500(local_14);
  (**(code **)(DAT_102e15a8 + 4))(local_8,uVar4,uVar5,pcVar18,fVar19);
  pfVar14 = (float *)thunk_FUN_10008500(local_14);
  pfVar15 = (float *)thunk_FUN_10008500(local_54);
  thunk_FUN_10042e50(param_1,pfVar15,pfVar14);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_90);
  puVar16 = (undefined4 *)thunk_FUN_10008500(local_60);
  *puVar16 = *puVar2;
  iVar3 = thunk_FUN_10008500(local_90);
  iVar8 = thunk_FUN_10008500(local_60);
  *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(iVar3 + 4);
  iVar3 = thunk_FUN_10008500(local_90);
  iVar8 = thunk_FUN_10008500(local_60);
  *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar3 + 8);
  fVar19 = *(float *)(param_1 + 0x34);
  fVar21 = *(float *)(param_1 + 0x30);
  piVar20 = &DAT_1028fcac + local_8;
  iVar13 = 0;
  iVar12 = 1;
  fVar22 = 8192.0;
  iVar3 = thunk_FUN_10008500(local_60);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_54);
  iVar11 = 1;
  iVar8 = thunk_FUN_10008500(local_78);
  iVar9 = thunk_FUN_10008500(local_84);
  iVar10 = thunk_FUN_10008500(local_90);
  thunk_FUN_1007c190(local_8,iVar10,iVar9,iVar8,iVar11,puVar2,iVar3,fVar22,iVar12,iVar13,piVar20,
                     fVar21,fVar19);
  return;
}

/* 10007fe0  FUN_10007fe0  (22 bytes)
 * undefined4 FUN_10007fe0(undefined4 param_1)
 */
undefined4 __fastcall FUN_10007fe0(undefined4 param_1)

{
  return param_1;
}

/* 10008000  FUN_10008000  (50 bytes)
 * float * FUN_10008000(int param_1, int param_2, int param_3)
 */
float * __thiscall FUN_10008000(void *this,int param_1,int param_2,int param_3)

{
  *(float *)this = (float)param_1;
  *(float *)((int)this + 4) = (float)param_2;
  *(float *)((int)this + 8) = (float)param_3;
  return this;
}

/* 10008040  FUN_10008040  (966 bytes)
 * undefined FUN_10008040(int param_1)
 * called by: thunk_FUN_10008040
 */
void __cdecl FUN_10008040(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined3 extraout_var;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  undefined4 *puVar16;
  float10 fVar17;
  char *pcVar18;
  float fVar19;
  int *piVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined1 local_94 [12];
  undefined1 local_88 [12];
  undefined1 local_7c [12];
  undefined1 local_70 [12];
  undefined1 local_64 [12];
  undefined1 local_58 [12];
  undefined4 local_4c;
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  int local_30;
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  undefined1 local_14 [12];
  int local_8;
  
  thunk_FUN_10007fe0(local_14);
  thunk_FUN_10007fe0(local_20);
  thunk_FUN_10007fe0(local_2c);
  thunk_FUN_10007fe0(local_3c);
  thunk_FUN_10007fe0(local_48);
  thunk_FUN_10007fe0(local_58);
  thunk_FUN_10007fe0(local_64);
  thunk_FUN_10007fe0(local_70);
  thunk_FUN_10007fe0(local_7c);
  thunk_FUN_10007fe0(local_88);
  thunk_FUN_10007fe0(local_94);
  local_8 = *(int *)(param_1 + 4);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_14);
  *puVar2 = *(undefined4 *)(param_1 + 8);
  iVar3 = thunk_FUN_10008500(local_14);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0xc);
  iVar3 = thunk_FUN_10008500(local_14);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x10);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_20);
  *puVar2 = *(undefined4 *)(param_1 + 0x14);
  iVar3 = thunk_FUN_10008500(local_20);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x18);
  iVar3 = thunk_FUN_10008500(local_20);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x1c);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_2c);
  *puVar2 = *(undefined4 *)(param_1 + 0x20);
  iVar3 = thunk_FUN_10008500(local_2c);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x24);
  iVar3 = thunk_FUN_10008500(local_2c);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x28);
  uVar4 = thunk_FUN_10008500(local_7c);
  uVar5 = thunk_FUN_10008500(local_88);
  uVar6 = thunk_FUN_10008500(local_94);
  uVar7 = thunk_FUN_10008500(local_20);
  (*DAT_102e14b8)(uVar7,uVar6,uVar5,uVar4);
  local_4c = (**(code **)(DAT_102e15a8 + 0xc))("models/shotgunshell.mdl");
  bVar1 = thunk_FUN_10042e10(local_8);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    thunk_FUN_100431a0();
    (**(code **)(DAT_102e15a8 + 0x40))(2,2);
    thunk_FUN_100ba810(0,0xc1200000);
  }
  for (local_30 = 0; local_30 < 2; local_30 = local_30 + 1) {
    fVar22 = 6.0;
    fVar21 = -12.0;
    fVar19 = 32.0;
    iVar3 = thunk_FUN_10008500(local_7c);
    iVar8 = thunk_FUN_10008500(local_88);
    iVar9 = thunk_FUN_10008500(local_94);
    iVar10 = thunk_FUN_10008500(local_48);
    iVar11 = thunk_FUN_10008500(local_3c);
    iVar12 = thunk_FUN_10008500(local_2c);
    iVar13 = thunk_FUN_10008500(local_14);
    thunk_FUN_10042fe0(param_1,iVar13,iVar12,iVar11,iVar10,iVar9,iVar8,iVar3,fVar19,fVar21,fVar22);
    uVar23 = 2;
    uVar5 = local_4c;
    iVar3 = thunk_FUN_10008500(local_20);
    uVar4 = *(undefined4 *)(iVar3 + 4);
    uVar6 = thunk_FUN_10008500(local_3c);
    uVar7 = thunk_FUN_10008500(local_48);
    thunk_FUN_10042f60(uVar7,uVar6,uVar4,uVar5,uVar23);
  }
  iVar3 = (*DAT_102e1568)(0,0x1f);
  fVar17 = (float10)(*DAT_102e1564)(0x3f7ae148,0x3f800000,0x3f4ccccd,0,iVar3 + 0x55);
  fVar19 = (float)fVar17;
  pcVar18 = "weapons/dbarrel1.wav";
  uVar5 = 1;
  uVar4 = thunk_FUN_10008500(local_14);
  (**(code **)(DAT_102e15a8 + 4))(local_8,uVar4,uVar5,pcVar18,fVar19);
  pfVar14 = (float *)thunk_FUN_10008500(local_14);
  pfVar15 = (float *)thunk_FUN_10008500(local_58);
  thunk_FUN_10042e50(param_1,pfVar15,pfVar14);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_94);
  puVar16 = (undefined4 *)thunk_FUN_10008500(local_64);
  *puVar16 = *puVar2;
  iVar3 = thunk_FUN_10008500(local_94);
  iVar8 = thunk_FUN_10008500(local_64);
  *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(iVar3 + 4);
  iVar3 = thunk_FUN_10008500(local_94);
  iVar8 = thunk_FUN_10008500(local_64);
  *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar3 + 8);
  iVar3 = (*DAT_102e14e8)();
  if (iVar3 < 2) {
    fVar22 = 0.08716;
    fVar21 = 0.08716;
    piVar20 = &DAT_1028fcac + local_8;
    iVar13 = 0;
    iVar12 = 4;
    fVar19 = 2048.0;
    iVar3 = thunk_FUN_10008500(local_64);
    puVar2 = (undefined4 *)thunk_FUN_10008500(local_58);
    iVar11 = 0xc;
    iVar8 = thunk_FUN_10008500(local_7c);
    iVar9 = thunk_FUN_10008500(local_88);
    iVar10 = thunk_FUN_10008500(local_94);
    thunk_FUN_1007c190(local_8,iVar10,iVar9,iVar8,iVar11,puVar2,iVar3,fVar19,iVar12,iVar13,piVar20,
                       fVar21,fVar22);
  }
  else {
    fVar22 = 0.04362;
    fVar21 = 0.17365;
    piVar20 = &DAT_1028fcac + local_8;
    iVar13 = 0;
    iVar12 = 4;
    fVar19 = 2048.0;
    iVar3 = thunk_FUN_10008500(local_64);
    puVar2 = (undefined4 *)thunk_FUN_10008500(local_58);
    iVar11 = 8;
    iVar8 = thunk_FUN_10008500(local_7c);
    iVar9 = thunk_FUN_10008500(local_88);
    iVar10 = thunk_FUN_10008500(local_94);
    thunk_FUN_1007c190(local_8,iVar10,iVar9,iVar8,iVar11,puVar2,iVar3,fVar19,iVar12,iVar13,piVar20,
                       fVar21,fVar22);
  }
  return;
}

/* 10008500  FUN_10008500  (22 bytes)
 * undefined4 FUN_10008500(undefined4 param_1)
 */
undefined4 __fastcall FUN_10008500(undefined4 param_1)

{
  return param_1;
}

/* 10008520  FUN_10008520  (918 bytes)
 * undefined FUN_10008520(int param_1)
 * called by: thunk_FUN_10008520
 */
void __cdecl FUN_10008520(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined3 extraout_var;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  undefined4 *puVar16;
  float10 fVar17;
  char *pcVar18;
  float fVar19;
  int *piVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined1 local_90 [12];
  undefined1 local_84 [12];
  undefined1 local_78 [12];
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined4 local_48;
  undefined1 local_44 [12];
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  undefined1 local_14 [12];
  int local_8;
  
  thunk_FUN_10007fe0(local_14);
  thunk_FUN_10007fe0(local_20);
  thunk_FUN_10007fe0(local_2c);
  thunk_FUN_10007fe0(local_38);
  thunk_FUN_10007fe0(local_44);
  thunk_FUN_10007fe0(local_54);
  thunk_FUN_10007fe0(local_60);
  thunk_FUN_10007fe0(local_6c);
  thunk_FUN_10007fe0(local_78);
  thunk_FUN_10007fe0(local_84);
  thunk_FUN_10007fe0(local_90);
  local_8 = *(int *)(param_1 + 4);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_14);
  *puVar2 = *(undefined4 *)(param_1 + 8);
  iVar3 = thunk_FUN_10008500(local_14);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0xc);
  iVar3 = thunk_FUN_10008500(local_14);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x10);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_20);
  *puVar2 = *(undefined4 *)(param_1 + 0x14);
  iVar3 = thunk_FUN_10008500(local_20);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x18);
  iVar3 = thunk_FUN_10008500(local_20);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x1c);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_2c);
  *puVar2 = *(undefined4 *)(param_1 + 0x20);
  iVar3 = thunk_FUN_10008500(local_2c);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x24);
  iVar3 = thunk_FUN_10008500(local_2c);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x28);
  uVar4 = thunk_FUN_10008500(local_78);
  uVar5 = thunk_FUN_10008500(local_84);
  uVar6 = thunk_FUN_10008500(local_90);
  uVar7 = thunk_FUN_10008500(local_20);
  (*DAT_102e14b8)(uVar7,uVar6,uVar5,uVar4);
  local_48 = (**(code **)(DAT_102e15a8 + 0xc))("models/shotgunshell.mdl");
  bVar1 = thunk_FUN_10042e10(local_8);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    thunk_FUN_100431a0();
    (**(code **)(DAT_102e15a8 + 0x40))(1,2);
    thunk_FUN_100ba810(0,0xc0a00000);
  }
  fVar22 = 6.0;
  fVar21 = -12.0;
  fVar19 = 32.0;
  iVar3 = thunk_FUN_10008500(local_78);
  iVar8 = thunk_FUN_10008500(local_84);
  iVar9 = thunk_FUN_10008500(local_90);
  iVar10 = thunk_FUN_10008500(local_44);
  iVar11 = thunk_FUN_10008500(local_38);
  iVar12 = thunk_FUN_10008500(local_2c);
  iVar13 = thunk_FUN_10008500(local_14);
  thunk_FUN_10042fe0(param_1,iVar13,iVar12,iVar11,iVar10,iVar9,iVar8,iVar3,fVar19,fVar21,fVar22);
  uVar23 = 2;
  uVar5 = local_48;
  iVar3 = thunk_FUN_10008500(local_20);
  uVar4 = *(undefined4 *)(iVar3 + 4);
  uVar6 = thunk_FUN_10008500(local_38);
  uVar7 = thunk_FUN_10008500(local_44);
  thunk_FUN_10042f60(uVar7,uVar6,uVar4,uVar5,uVar23);
  iVar3 = (*DAT_102e1568)(0,0x1f);
  fVar17 = (float10)(*DAT_102e1564)(0x3f733333,0x3f800000,0x3f4ccccd,0,iVar3 + 0x5d);
  fVar19 = (float)fVar17;
  pcVar18 = "weapons/sbarrel1.wav";
  uVar5 = 1;
  uVar4 = thunk_FUN_10008500(local_14);
  (**(code **)(DAT_102e15a8 + 4))(local_8,uVar4,uVar5,pcVar18,fVar19);
  pfVar14 = (float *)thunk_FUN_10008500(local_14);
  pfVar15 = (float *)thunk_FUN_10008500(local_54);
  thunk_FUN_10042e50(param_1,pfVar15,pfVar14);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_90);
  puVar16 = (undefined4 *)thunk_FUN_10008500(local_60);
  *puVar16 = *puVar2;
  iVar3 = thunk_FUN_10008500(local_90);
  iVar8 = thunk_FUN_10008500(local_60);
  *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(iVar3 + 4);
  iVar3 = thunk_FUN_10008500(local_90);
  iVar8 = thunk_FUN_10008500(local_60);
  *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar3 + 8);
  iVar3 = (*DAT_102e14e8)();
  if (iVar3 < 2) {
    fVar22 = 0.08716;
    fVar21 = 0.08716;
    piVar20 = &DAT_1028fcac + local_8;
    iVar13 = 0;
    iVar12 = 4;
    fVar19 = 2048.0;
    iVar3 = thunk_FUN_10008500(local_60);
    puVar2 = (undefined4 *)thunk_FUN_10008500(local_54);
    iVar11 = 6;
    iVar8 = thunk_FUN_10008500(local_78);
    iVar9 = thunk_FUN_10008500(local_84);
    iVar10 = thunk_FUN_10008500(local_90);
    thunk_FUN_1007c190(local_8,iVar10,iVar9,iVar8,iVar11,puVar2,iVar3,fVar19,iVar12,iVar13,piVar20,
                       fVar21,fVar22);
  }
  else {
    fVar22 = 0.04362;
    fVar21 = 0.08716;
    piVar20 = &DAT_1028fcac + local_8;
    iVar13 = 0;
    iVar12 = 4;
    fVar19 = 2048.0;
    iVar3 = thunk_FUN_10008500(local_60);
    puVar2 = (undefined4 *)thunk_FUN_10008500(local_54);
    iVar11 = 4;
    iVar8 = thunk_FUN_10008500(local_78);
    iVar9 = thunk_FUN_10008500(local_84);
    iVar10 = thunk_FUN_10008500(local_90);
    thunk_FUN_1007c190(local_8,iVar10,iVar9,iVar8,iVar11,puVar2,iVar3,fVar19,iVar12,iVar13,piVar20,
                       fVar21,fVar22);
  }
  return;
}

/* 100089a0  FUN_100089a0  (46 bytes)
 * undefined4 * FUN_100089a0(undefined4 * param_1)
 */
undefined4 * __thiscall FUN_100089a0(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return this;
}

/* 100089e0  FUN_100089e0  (46 bytes)
 * undefined4 * FUN_100089e0(undefined4 * param_1)
 */
undefined4 * __thiscall FUN_100089e0(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return this;
}

/* 10008a20  FUN_10008a20  (46 bytes)
 * undefined4 * FUN_10008a20(undefined4 * param_1)
 */
undefined4 * __thiscall FUN_10008a20(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return this;
}

/* 10008a60  FUN_10008a60  (46 bytes)
 * undefined4 * FUN_10008a60(undefined4 * param_1)
 */
undefined4 * __thiscall FUN_10008a60(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return this;
}

/* 10008aa0  FUN_10008aa0  (46 bytes)
 * undefined4 * FUN_10008aa0(undefined4 * param_1)
 */
undefined4 * __thiscall FUN_10008aa0(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return this;
}

/* 10008ae0  FUN_10008ae0  (46 bytes)
 * undefined4 * FUN_10008ae0(undefined4 * param_1)
 */
undefined4 * __thiscall FUN_10008ae0(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return this;
}

/* 10008b20  FUN_10008b20  (46 bytes)
 * undefined4 * FUN_10008b20(undefined4 * param_1)
 */
undefined4 * __thiscall FUN_10008b20(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return this;
}

/* 10008b60  FUN_10008b60  (46 bytes)
 * undefined4 * FUN_10008b60(undefined4 * param_1)
 */
undefined4 * __thiscall FUN_10008b60(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return this;
}

/* 10008ba0  FUN_10008ba0  (46 bytes)
 * undefined4 * FUN_10008ba0(undefined4 * param_1)
 */
undefined4 * __thiscall FUN_10008ba0(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return this;
}

/* 10008be0  FUN_10008be0  (46 bytes)
 * undefined4 * FUN_10008be0(undefined4 * param_1)
 */
undefined4 * __thiscall FUN_10008be0(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return this;
}

/* 10008c20  FUN_10008c20  (46 bytes)
 * undefined4 * FUN_10008c20(undefined4 * param_1)
 */
undefined4 * __thiscall FUN_10008c20(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return this;
}

/* 10008c60  FUN_10008c60  (46 bytes)
 * undefined4 * FUN_10008c60(undefined4 * param_1)
 */
undefined4 * __thiscall FUN_10008c60(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return this;
}

/* 10008ca0  FUN_10008ca0  (46 bytes)
 * undefined4 * FUN_10008ca0(undefined4 * param_1)
 */
undefined4 * __thiscall FUN_10008ca0(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return this;
}

/* 10008ce0  FUN_10008ce0  (1011 bytes)
 * undefined FUN_10008ce0(int param_1)
 * called by: thunk_FUN_10008ce0
 */
void __cdecl FUN_10008ce0(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined3 extraout_var;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  undefined4 *puVar16;
  float10 fVar17;
  char *pcVar18;
  float fVar19;
  int *piVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined1 local_84 [12];
  undefined1 local_78 [12];
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined4 local_48;
  undefined1 local_44 [12];
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  undefined1 local_14 [12];
  int local_8;
  
  thunk_FUN_10007fe0(local_14);
  thunk_FUN_10007fe0(local_20);
  thunk_FUN_10007fe0(local_2c);
  thunk_FUN_10007fe0(local_38);
  thunk_FUN_10007fe0(local_44);
  thunk_FUN_10007fe0(local_54);
  thunk_FUN_10007fe0(local_60);
  thunk_FUN_10007fe0(local_6c);
  thunk_FUN_10007fe0(local_78);
  thunk_FUN_10007fe0(local_84);
  local_8 = *(int *)(param_1 + 4);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_14);
  *puVar2 = *(undefined4 *)(param_1 + 8);
  iVar3 = thunk_FUN_10008500(local_14);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0xc);
  iVar3 = thunk_FUN_10008500(local_14);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x10);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_20);
  *puVar2 = *(undefined4 *)(param_1 + 0x14);
  iVar3 = thunk_FUN_10008500(local_20);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x18);
  iVar3 = thunk_FUN_10008500(local_20);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x1c);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_2c);
  *puVar2 = *(undefined4 *)(param_1 + 0x20);
  iVar3 = thunk_FUN_10008500(local_2c);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x24);
  iVar3 = thunk_FUN_10008500(local_2c);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x28);
  uVar4 = thunk_FUN_10008500(local_6c);
  uVar5 = thunk_FUN_10008500(local_78);
  uVar6 = thunk_FUN_10008500(local_84);
  uVar7 = thunk_FUN_10008500(local_20);
  (*DAT_102e14b8)(uVar7,uVar6,uVar5,uVar4);
  local_48 = (**(code **)(DAT_102e15a8 + 0xc))("models/shell.mdl");
  bVar1 = thunk_FUN_10042e10(local_8);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    thunk_FUN_100431a0();
    iVar3 = (*DAT_102e1568)(0,2,2);
    (**(code **)(DAT_102e15a8 + 0x40))(iVar3 + 5);
    fVar17 = (float10)(*DAT_102e1564)(0xc0000000,0x40000000);
    thunk_FUN_100ba810(0,(float)fVar17);
  }
  fVar22 = 4.0;
  fVar21 = -12.0;
  fVar19 = 20.0;
  iVar3 = thunk_FUN_10008500(local_6c);
  iVar8 = thunk_FUN_10008500(local_78);
  iVar9 = thunk_FUN_10008500(local_84);
  iVar10 = thunk_FUN_10008500(local_44);
  iVar11 = thunk_FUN_10008500(local_38);
  iVar12 = thunk_FUN_10008500(local_2c);
  iVar13 = thunk_FUN_10008500(local_14);
  thunk_FUN_10042fe0(param_1,iVar13,iVar12,iVar11,iVar10,iVar9,iVar8,iVar3,fVar19,fVar21,fVar22);
  uVar23 = 1;
  uVar5 = local_48;
  iVar3 = thunk_FUN_10008500(local_20);
  uVar4 = *(undefined4 *)(iVar3 + 4);
  uVar6 = thunk_FUN_10008500(local_38);
  uVar7 = thunk_FUN_10008500(local_44);
  thunk_FUN_10042f60(uVar7,uVar6,uVar4,uVar5,uVar23);
  iVar3 = (*DAT_102e1568)(0,1);
  if (iVar3 == 0) {
    iVar3 = (*DAT_102e1568)(0,0xf);
    iVar3 = iVar3 + 0x5e;
    uVar23 = 0;
    uVar7 = 0x3f4ccccd;
    uVar6 = 0x3f800000;
    pcVar18 = "weapons/hks1.wav";
    uVar5 = 1;
    uVar4 = thunk_FUN_10008500(local_14);
    (**(code **)(DAT_102e15a8 + 4))(local_8,uVar4,uVar5,pcVar18,uVar6,uVar7,uVar23,iVar3);
  }
  else if (iVar3 == 1) {
    iVar3 = (*DAT_102e1568)(0,0xf);
    iVar3 = iVar3 + 0x5e;
    uVar23 = 0;
    uVar7 = 0x3f4ccccd;
    uVar6 = 0x3f800000;
    pcVar18 = "weapons/hks2.wav";
    uVar5 = 1;
    uVar4 = thunk_FUN_10008500(local_14);
    (**(code **)(DAT_102e15a8 + 4))(local_8,uVar4,uVar5,pcVar18,uVar6,uVar7,uVar23,iVar3);
  }
  pfVar14 = (float *)thunk_FUN_10008500(local_14);
  pfVar15 = (float *)thunk_FUN_10008500(local_54);
  thunk_FUN_10042e50(param_1,pfVar15,pfVar14);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_84);
  puVar16 = (undefined4 *)thunk_FUN_10008500(local_60);
  *puVar16 = *puVar2;
  iVar3 = thunk_FUN_10008500(local_84);
  iVar8 = thunk_FUN_10008500(local_60);
  *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(iVar3 + 4);
  iVar3 = thunk_FUN_10008500(local_84);
  iVar8 = thunk_FUN_10008500(local_60);
  *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar3 + 8);
  iVar3 = (*DAT_102e14e8)();
  if (iVar3 < 2) {
    fVar19 = *(float *)(param_1 + 0x34);
    fVar21 = *(float *)(param_1 + 0x30);
    piVar20 = &DAT_1028fcac + local_8;
    iVar13 = 2;
    iVar12 = 2;
    fVar22 = 8192.0;
    iVar3 = thunk_FUN_10008500(local_60);
    puVar2 = (undefined4 *)thunk_FUN_10008500(local_54);
    iVar11 = 1;
    iVar8 = thunk_FUN_10008500(local_6c);
    iVar9 = thunk_FUN_10008500(local_78);
    iVar10 = thunk_FUN_10008500(local_84);
    thunk_FUN_1007c190(local_8,iVar10,iVar9,iVar8,iVar11,puVar2,iVar3,fVar22,iVar12,iVar13,piVar20,
                       fVar21,fVar19);
  }
  else {
    fVar19 = *(float *)(param_1 + 0x34);
    fVar21 = *(float *)(param_1 + 0x30);
    piVar20 = &DAT_1028fcac + local_8;
    iVar13 = 2;
    iVar12 = 2;
    fVar22 = 8192.0;
    iVar3 = thunk_FUN_10008500(local_60);
    puVar2 = (undefined4 *)thunk_FUN_10008500(local_54);
    iVar11 = 1;
    iVar8 = thunk_FUN_10008500(local_6c);
    iVar9 = thunk_FUN_10008500(local_78);
    iVar10 = thunk_FUN_10008500(local_84);
    thunk_FUN_1007c190(local_8,iVar10,iVar9,iVar8,iVar11,puVar2,iVar3,fVar22,iVar12,iVar13,piVar20,
                       fVar21,fVar19);
  }
  return;
}

/* 100091d0  FUN_100091d0  (46 bytes)
 * undefined4 * FUN_100091d0(undefined4 * param_1)
 */
undefined4 * __thiscall FUN_100091d0(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return this;
}

/* 10009210  FUN_10009210  (46 bytes)
 * undefined4 * FUN_10009210(undefined4 * param_1)
 */
undefined4 * __thiscall FUN_10009210(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return this;
}

/* 10009250  FUN_10009250  (46 bytes)
 * undefined4 * FUN_10009250(undefined4 * param_1)
 */
undefined4 * __thiscall FUN_10009250(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return this;
}

/* 10009290  FUN_10009290  (46 bytes)
 * undefined4 * FUN_10009290(undefined4 * param_1)
 */
undefined4 * __thiscall FUN_10009290(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return this;
}

/* 100092d0  FUN_100092d0  (46 bytes)
 * undefined4 * FUN_100092d0(undefined4 * param_1)
 */
undefined4 * __thiscall FUN_100092d0(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return this;
}

/* 10009310  FUN_10009310  (102 bytes)
 * undefined4 * FUN_10009310(undefined4 * param_1)
 */
undefined4 * __thiscall FUN_10009310(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = 0x24;
  puVar2 = param_1;
  puVar3 = this;
  while( true ) {
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    *puVar3 = *puVar2;
  }
  puVar2 = param_1 + 0x25;
  puVar3 = (undefined4 *)((int)this + 0x94);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_1 + 0x2a;
  puVar3 = (undefined4 *)((int)this + 0xa8);
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined ***)this = &vgui::Scheme::_vftable_;
  return this;
}

/* 10009390  FUN_10009390  (174 bytes)
 * int FUN_10009390(int param_1)
 */
int __thiscall FUN_10009390(void *this,int param_1)

{
  uint local_14;
  uint local_10;
  uint local_c;
  
  for (local_c = 0; local_c < 0x24; local_c = local_c + 1) {
    *(undefined4 *)((int)this + local_c * 4 + 4) = *(undefined4 *)(param_1 + 4 + local_c * 4);
  }
  for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
    *(undefined4 *)((int)this + local_10 * 4 + 0x94) =
         *(undefined4 *)(param_1 + 0x94 + local_10 * 4);
  }
  for (local_14 = 0; local_14 < 0xe; local_14 = local_14 + 1) {
    *(undefined4 *)((int)this + local_14 * 4 + 0xa8) =
         *(undefined4 *)(param_1 + 0xa8 + local_14 * 4);
  }
  return (int)this;
}

/* 10009470  FUN_10009470  (57 bytes)
 * undefined4 * FUN_10009470(int param_1)
 */
undefined4 * __thiscall FUN_10009470(void *this,int param_1)

{
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined ***)this = &vgui::Color::_vftable_;
  return this;
}

/* 100094c0  FUN_100094c0  (80 bytes)
 * int FUN_100094c0(int param_1)
 */
int __thiscall FUN_100094c0(void *this,int param_1)

{
  uint local_c;
  
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    *(undefined1 *)((int)this + local_c + 4) = *(undefined1 *)(param_1 + local_c + 4);
  }
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  return (int)this;
}

/* 10009530  FUN_10009530  (578 bytes)
 * undefined4 * FUN_10009530(int param_1)
 */
undefined4 * __thiscall FUN_10009530(void *this,int param_1)

{
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)((int)this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined1 *)((int)this + 0x70) = *(undefined1 *)(param_1 + 0x70);
  *(undefined4 *)((int)this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined1 *)((int)this + 0x78) = *(undefined1 *)(param_1 + 0x78);
  *(undefined4 *)((int)this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)((int)this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined1 *)((int)this + 0x8c) = *(undefined1 *)(param_1 + 0x8c);
  *(undefined4 *)((int)this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined1 *)((int)this + 0x94) = *(undefined1 *)(param_1 + 0x94);
  *(undefined1 *)((int)this + 0x95) = *(undefined1 *)(param_1 + 0x95);
  *(undefined4 *)((int)this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  vgui::Color::Color((Color *)((int)this + 0x9c),(Color *)(param_1 + 0x9c));
  vgui::Color::Color((Color *)((int)this + 0xa8),(Color *)(param_1 + 0xa8));
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined1 *)((int)this + 0xb8) = *(undefined1 *)(param_1 + 0xb8);
  *(undefined1 *)((int)this + 0xb9) = *(undefined1 *)(param_1 + 0xb9);
  *(undefined1 *)((int)this + 0xba) = *(undefined1 *)(param_1 + 0xba);
  *(undefined ***)this = &vgui::Panel::_vftable_;
  return this;
}

/* 10009810  FUN_10009810  (283 bytes)
 * undefined FUN_10009810(int param_1)
 * called by: thunk_FUN_10009810
 */
void __cdecl FUN_10009810(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_14 [12];
  int local_8;
  
  thunk_FUN_10007fe0(local_14);
  local_8 = *(int *)(param_1 + 4);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_14);
  *puVar2 = *(undefined4 *)(param_1 + 8);
  iVar3 = thunk_FUN_10008500(local_14);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0xc);
  iVar3 = thunk_FUN_10008500(local_14);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x10);
  bVar1 = thunk_FUN_10042e10(local_8);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    (**(code **)(DAT_102e15a8 + 0x40))(2,2);
    thunk_FUN_100ba810(0,0xc1200000);
  }
  iVar3 = (*DAT_102e1568)(0,1);
  if (iVar3 == 0) {
    iVar3 = (*DAT_102e1568)(0,0xf);
    iVar3 = iVar3 + 0x5e;
    uVar9 = 0;
    uVar8 = 0x3f4ccccd;
    uVar7 = 0x3f800000;
    pcVar6 = "weapons/glauncher.wav";
    uVar5 = 1;
    uVar4 = thunk_FUN_10008500(local_14);
    (**(code **)(DAT_102e15a8 + 4))(local_8,uVar4,uVar5,pcVar6,uVar7,uVar8,uVar9,iVar3);
  }
  else if (iVar3 == 1) {
    iVar3 = (*DAT_102e1568)(0,0xf);
    iVar3 = iVar3 + 0x5e;
    uVar9 = 0;
    uVar8 = 0x3f4ccccd;
    uVar7 = 0x3f800000;
    pcVar6 = "weapons/glauncher2.wav";
    uVar5 = 1;
    uVar4 = thunk_FUN_10008500(local_14);
    (**(code **)(DAT_102e15a8 + 4))(local_8,uVar4,uVar5,pcVar6,uVar7,uVar8,uVar9,iVar3);
  }
  return;
}

/* 10009980  FUN_10009980  (721 bytes)
 * int FUN_10009980(int param_1)
 */
int __thiscall FUN_10009980(void *this,int param_1)

{
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  for (local_c = 0; local_c < 2; local_c = local_c + 1) {
    *(undefined4 *)((int)this + local_c * 4 + 4) = *(undefined4 *)(param_1 + 4 + local_c * 4);
  }
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    *(undefined4 *)((int)this + local_10 * 4 + 0xc) = *(undefined4 *)(param_1 + 0xc + local_10 * 4);
  }
  for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
    *(undefined4 *)((int)this + local_14 * 4 + 0x14) =
         *(undefined4 *)(param_1 + 0x14 + local_14 * 4);
  }
  for (local_18 = 0; local_18 < 2; local_18 = local_18 + 1) {
    *(undefined4 *)((int)this + local_18 * 4 + 0x1c) =
         *(undefined4 *)(param_1 + 0x1c + local_18 * 4);
  }
  for (local_1c = 0; local_1c < 2; local_1c = local_1c + 1) {
    *(undefined4 *)((int)this + local_1c * 4 + 0x24) =
         *(undefined4 *)(param_1 + 0x24 + local_1c * 4);
  }
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
    *(undefined4 *)((int)this + local_20 * 4 + 0x58) =
         *(undefined4 *)(param_1 + 0x58 + local_20 * 4);
  }
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined1 *)((int)this + 0x70) = *(undefined1 *)(param_1 + 0x70);
  *(undefined4 *)((int)this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined1 *)((int)this + 0x78) = *(undefined1 *)(param_1 + 0x78);
  *(undefined4 *)((int)this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)((int)this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined1 *)((int)this + 0x8c) = *(undefined1 *)(param_1 + 0x8c);
  *(undefined4 *)((int)this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined1 *)((int)this + 0x94) = *(undefined1 *)(param_1 + 0x94);
  *(undefined1 *)((int)this + 0x95) = *(undefined1 *)(param_1 + 0x95);
  *(undefined4 *)((int)this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  vgui::Color::operator=((Color *)((int)this + 0x9c),(Color *)(param_1 + 0x9c));
  vgui::Color::operator=((Color *)((int)this + 0xa8),(Color *)(param_1 + 0xa8));
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined1 *)((int)this + 0xb8) = *(undefined1 *)(param_1 + 0xb8);
  *(undefined1 *)((int)this + 0xb9) = *(undefined1 *)(param_1 + 0xb9);
  *(undefined1 *)((int)this + 0xba) = *(undefined1 *)(param_1 + 0xba);
  return (int)this;
}

/* 10009d10  FUN_10009d10  (726 bytes)
 * undefined FUN_10009d10(int param_1)
 * called by: thunk_FUN_10009d10
 */
void __cdecl FUN_10009d10(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined3 extraout_var;
  float *pfVar8;
  float *pfVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float10 fVar14;
  int iVar15;
  float fVar16;
  char *pcVar17;
  int iVar18;
  float fVar19;
  int iVar20;
  int *piVar21;
  float fVar22;
  undefined1 local_68 [12];
  undefined1 local_5c [12];
  undefined1 local_50 [12];
  undefined1 local_44 [12];
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  undefined1 local_14 [12];
  int local_8;
  
  thunk_FUN_10007fe0(local_14);
  thunk_FUN_10007fe0(local_20);
  thunk_FUN_10007fe0(local_2c);
  thunk_FUN_10007fe0(local_38);
  thunk_FUN_10007fe0(local_44);
  thunk_FUN_10007fe0(local_50);
  thunk_FUN_10007fe0(local_5c);
  thunk_FUN_10007fe0(local_68);
  local_8 = *(int *)(param_1 + 4);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_14);
  *puVar2 = *(undefined4 *)(param_1 + 8);
  iVar3 = thunk_FUN_10008500(local_14);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0xc);
  iVar3 = thunk_FUN_10008500(local_14);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x10);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_20);
  *puVar2 = *(undefined4 *)(param_1 + 0x14);
  iVar3 = thunk_FUN_10008500(local_20);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x18);
  iVar3 = thunk_FUN_10008500(local_20);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x1c);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_2c);
  *puVar2 = *(undefined4 *)(param_1 + 0x20);
  iVar3 = thunk_FUN_10008500(local_2c);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x24);
  iVar3 = thunk_FUN_10008500(local_2c);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x28);
  uVar4 = thunk_FUN_10008500(local_50);
  uVar5 = thunk_FUN_10008500(local_5c);
  uVar6 = thunk_FUN_10008500(local_68);
  uVar7 = thunk_FUN_10008500(local_20);
  (*DAT_102e14b8)(uVar7,uVar6,uVar5,uVar4);
  bVar1 = thunk_FUN_10042e10(local_8);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar3 = (*DAT_102e14e8)();
    thunk_FUN_100431a0();
    (**(code **)(DAT_102e15a8 + 0x40))(2,iVar3 != 1);
    thunk_FUN_100ba810(0,0xc1200000);
  }
  iVar3 = (*DAT_102e1568)(0,1);
  if (iVar3 == 0) {
    fVar14 = (float10)(*DAT_102e1564)(0x3f4ccccd,0x3f666666,0x3f4ccccd,0,100);
    fVar19 = (float)fVar14;
    pcVar17 = "weapons/357_shot1.wav";
    uVar5 = 1;
    uVar4 = thunk_FUN_10008500(local_14);
    (**(code **)(DAT_102e15a8 + 4))(local_8,uVar4,uVar5,pcVar17,fVar19);
  }
  else if (iVar3 == 1) {
    fVar14 = (float10)(*DAT_102e1564)(0x3f4ccccd,0x3f666666,0x3f4ccccd,0,100);
    fVar19 = (float)fVar14;
    pcVar17 = "weapons/357_shot2.wav";
    uVar5 = 1;
    uVar4 = thunk_FUN_10008500(local_14);
    (**(code **)(DAT_102e15a8 + 4))(local_8,uVar4,uVar5,pcVar17,fVar19);
  }
  pfVar8 = (float *)thunk_FUN_10008500(local_14);
  pfVar9 = (float *)thunk_FUN_10008500(local_38);
  thunk_FUN_10042e50(param_1,pfVar9,pfVar8);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_68);
  puVar10 = (undefined4 *)thunk_FUN_10008500(local_44);
  *puVar10 = *puVar2;
  iVar3 = thunk_FUN_10008500(local_68);
  iVar11 = thunk_FUN_10008500(local_44);
  *(undefined4 *)(iVar11 + 4) = *(undefined4 *)(iVar3 + 4);
  iVar3 = thunk_FUN_10008500(local_68);
  iVar11 = thunk_FUN_10008500(local_44);
  *(undefined4 *)(iVar11 + 8) = *(undefined4 *)(iVar3 + 8);
  fVar19 = *(float *)(param_1 + 0x34);
  fVar22 = *(float *)(param_1 + 0x30);
  piVar21 = (int *)0x0;
  iVar20 = 0;
  iVar18 = 3;
  fVar16 = 8192.0;
  iVar3 = thunk_FUN_10008500(local_44);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_38);
  iVar15 = 1;
  iVar11 = thunk_FUN_10008500(local_50);
  iVar12 = thunk_FUN_10008500(local_5c);
  iVar13 = thunk_FUN_10008500(local_68);
  thunk_FUN_1007c190(local_8,iVar13,iVar12,iVar11,iVar15,puVar2,iVar3,fVar16,iVar18,iVar20,piVar21,
                     fVar22,fVar19);
  return;
}

/* 1000a0a0  FUN_1000a0a0  (64 bytes)
 * Panel * FUN_1000a0a0(Panel * param_1)
 */
Panel * __fastcall FUN_1000a0a0(Panel *param_1)

{
  vgui::Panel::Panel(param_1,0,0,10,10);
  *(undefined ***)param_1 = &vgui::Label::_vftable_;
  vgui::Label::init((Label *)param_1,1,"",true);
  return param_1;
}

/* 1000a0f0  FUN_1000a0f0  (171 bytes)
 * Panel * FUN_1000a0f0(Panel * param_1)
 */
Panel * __thiscall FUN_1000a0f0(void *this,Panel *param_1)

{
  vgui::Panel::Panel(this,param_1);
  *(Panel *)((int)this + 0xbc) = param_1[0xbc];
  *(Panel *)((int)this + 0xbd) = param_1[0xbd];
  *(Panel *)((int)this + 0xbe) = param_1[0xbe];
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)((int)this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)((int)this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined ***)this = &vgui::Label::_vftable_;
  return this;
}

/* 1000a1d0  FUN_1000a1d0  (162 bytes)
 * Panel * FUN_1000a1d0(Panel * param_1)
 */
Panel * __thiscall FUN_1000a1d0(void *this,Panel *param_1)

{
  vgui::Panel::operator=(this,param_1);
  *(Panel *)((int)this + 0xbc) = param_1[0xbc];
  *(Panel *)((int)this + 0xbd) = param_1[0xbd];
  *(Panel *)((int)this + 0xbe) = param_1[0xbe];
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)((int)this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)((int)this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  return this;
}

/* 1000a2a0  FUN_1000a2a0  (99 bytes)
 * undefined4 * FUN_1000a2a0(int param_1)
 */
undefined4 * __thiscall FUN_1000a2a0(void *this,int param_1)

{
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  vgui::Color::Color((Color *)((int)this + 0x18),(Color *)(param_1 + 0x18));
  *(undefined ***)this = &vgui::Image::_vftable_;
  return this;
}

/* 1000a320  FUN_1000a320  (283 bytes)
 * undefined FUN_1000a320(int param_1)
 * called by: thunk_FUN_1000a320
 */
void __cdecl FUN_1000a320(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  undefined1 local_14 [12];
  undefined4 local_8;
  
  thunk_FUN_10007fe0(local_14);
  thunk_FUN_10007fe0(local_20);
  thunk_FUN_10007fe0(local_2c);
  local_8 = *(undefined4 *)(param_1 + 4);
  puVar1 = (undefined4 *)thunk_FUN_10008500(local_14);
  *puVar1 = *(undefined4 *)(param_1 + 8);
  iVar2 = thunk_FUN_10008500(local_14);
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0xc);
  iVar2 = thunk_FUN_10008500(local_14);
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 0x10);
  puVar1 = (undefined4 *)thunk_FUN_10008500(local_20);
  *puVar1 = *(undefined4 *)(param_1 + 0x14);
  iVar2 = thunk_FUN_10008500(local_20);
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x18);
  iVar2 = thunk_FUN_10008500(local_20);
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 0x1c);
  puVar1 = (undefined4 *)thunk_FUN_10008500(local_2c);
  *puVar1 = *(undefined4 *)(param_1 + 0x20);
  iVar2 = thunk_FUN_10008500(local_2c);
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x24);
  iVar2 = thunk_FUN_10008500(local_2c);
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 0x28);
  uVar9 = *(undefined4 *)(param_1 + 0x38);
  uVar4 = -(uint)(*(int *)(param_1 + 0x40) != 0) & 0x80;
  uVar8 = 0x3f4ccccd;
  uVar7 = 0x3f800000;
  pcVar6 = "ambience/pulsemachine.wav";
  uVar5 = 1;
  uVar3 = thunk_FUN_10008500(local_14);
  (**(code **)(DAT_102e15a8 + 4))(local_8,uVar3,uVar5,pcVar6,uVar7,uVar8,uVar4,uVar9);
  return;
}

/* 1000a490  FUN_1000a490  (146 bytes)
 * int FUN_1000a490(int param_1)
 */
int __thiscall FUN_1000a490(void *this,int param_1)

{
  uint local_10;
  uint local_c;
  
  for (local_c = 0; local_c < 2; local_c = local_c + 1) {
    *(undefined4 *)((int)this + local_c * 4 + 4) = *(undefined4 *)(param_1 + 4 + local_c * 4);
  }
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    *(undefined4 *)((int)this + local_10 * 4 + 0xc) = *(undefined4 *)(param_1 + 0xc + local_10 * 4);
  }
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  vgui::Color::operator=((Color *)((int)this + 0x18),(Color *)(param_1 + 0x18));
  return (int)this;
}

/* 1000a550  FUN_1000a550  (91 bytes)
 * Image * FUN_1000a550(Image * param_1)
 */
Image * __thiscall FUN_1000a550(void *this,Image *param_1)

{
  vgui::Image::Image(this,param_1);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined ***)this = &vgui::Border::_vftable_;
  return this;
}

/* 1000a5d0  FUN_1000a5d0  (94 bytes)
 * Image * FUN_1000a5d0(Image * param_1)
 */
Image * __thiscall FUN_1000a5d0(void *this,Image *param_1)

{
  uint local_c;
  
  vgui::Image::operator=(this,param_1);
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    *(undefined4 *)((int)this + local_c * 4 + 0x24) = *(undefined4 *)(param_1 + local_c * 4 + 0x24);
  }
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  return this;
}

/* 1000a650  FUN_1000a650  (60 bytes)
 * undefined FUN_1000a650(undefined4 param_1)
 */
void __cdecl FUN_1000a650(undefined4 param_1)

{
  (**(code **)(DAT_102e15a8 + 0x54))(param_1,"events/gaussspin.sc");
  (**(code **)(DAT_102e15a8 + 8))(param_1,1,"ambience/pulsemachine.wav");
  return;
}

/* 1000a6a0  FUN_1000a6a0  (57 bytes)
 * undefined FUN_1000a6a0(int param_1, int param_2, int param_3, int param_4)
 */
void FUN_1000a6a0(int param_1,int param_2,int param_3,int param_4)

{
  Color *pCVar1;
  Color local_14 [12];
  int local_8;
  
  pCVar1 = (Color *)vgui::Color::Color(local_14,param_1,param_2,param_3,param_4);
  vgui::Color::operator=((Color *)(local_8 + 0x38),pCVar1);
  return;
}

/* 1000a6f0  FUN_1000a6f0  (4317 bytes)
 * undefined FUN_1000a6f0(int param_1)
 * called by: thunk_FUN_1000a6f0
 */
void __cdecl FUN_1000a6f0(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float *pfVar10;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar11;
  undefined4 *puVar12;
  void *pvVar13;
  void *extraout_ECX;
  float10 fVar14;
  longlong lVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  char *pcVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int *piVar25;
  undefined4 uVar26;
  uint uStack_1d0;
  undefined1 local_184 [12];
  undefined1 local_178 [12];
  undefined1 local_16c [12];
  float local_160;
  undefined1 local_15c [12];
  undefined1 local_150 [12];
  undefined1 local_144 [12];
  undefined1 local_138 [12];
  float local_12c;
  undefined1 local_128 [12];
  undefined1 local_11c [12];
  undefined1 local_110 [12];
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  undefined4 local_e8;
  float local_e4;
  int local_e0 [5];
  undefined1 local_cc [48];
  int local_9c [4];
  float local_8c;
  undefined1 local_88 [12];
  undefined1 local_7c [16];
  undefined4 local_6c;
  undefined4 local_58;
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  float local_30;
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  undefined1 local_14 [12];
  uint local_8;
  
  thunk_FUN_10007fe0(local_14);
  thunk_FUN_10007fe0(local_20);
  thunk_FUN_10007fe0(local_2c);
  local_30 = *(float *)(param_1 + 0x30);
  local_34 = *(undefined4 *)(param_1 + 0x40);
  local_38 = *(int *)(param_1 + 0x40);
  local_3c = 0x1c2;
  thunk_FUN_10007fe0(local_48);
  thunk_FUN_10007fe0(local_54);
  thunk_FUN_1000c160((int)local_9c);
  thunk_FUN_1000c160((int)local_e0);
  local_e4 = 1.0;
  local_e8 = 0;
  local_ec = 0;
  local_f0 = 1;
  local_f4 = 10;
  thunk_FUN_10007fe0(local_110);
  thunk_FUN_10007fe0(local_11c);
  thunk_FUN_10007fe0(local_128);
  local_8 = *(uint *)(param_1 + 4);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_14);
  *puVar2 = *(undefined4 *)(param_1 + 8);
  iVar3 = thunk_FUN_10008500(local_14);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0xc);
  iVar3 = thunk_FUN_10008500(local_14);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x10);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_20);
  *puVar2 = *(undefined4 *)(param_1 + 0x14);
  iVar3 = thunk_FUN_10008500(local_20);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x18);
  iVar3 = thunk_FUN_10008500(local_20);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x1c);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_2c);
  *puVar2 = *(undefined4 *)(param_1 + 0x20);
  iVar3 = thunk_FUN_10008500(local_2c);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x24);
  iVar3 = thunk_FUN_10008500(local_2c);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x44) == 0) {
    pfVar4 = (float *)thunk_FUN_10008500(local_14);
    pfVar5 = (float *)thunk_FUN_10008500(local_48);
    thunk_FUN_10042e50(param_1,pfVar5,pfVar4);
    local_fc = (**(code **)(DAT_102e15a8 + 0xc))("sprites/smoke.spr");
    local_104 = (**(code **)(DAT_102e15a8 + 0xc))("sprites/hotglow.spr");
    local_100 = local_104;
    uVar6 = thunk_FUN_10008500(local_110);
    uVar7 = thunk_FUN_10008500(local_11c);
    uVar8 = thunk_FUN_10008500(local_128);
    uVar9 = thunk_FUN_10008500(local_20);
    (*DAT_102e14b8)(uVar9,uVar8,uVar7,uVar6);
    pfVar4 = (float *)thunk_FUN_10008500(local_54);
    pfVar5 = (float *)thunk_FUN_10008500(local_128);
    fVar22 = 8192.0;
    pfVar10 = (float *)thunk_FUN_10008500(local_48);
    thunk_FUN_10098330(pfVar10,fVar22,pfVar5,pfVar4);
    bVar1 = thunk_FUN_10042e10(local_8);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      thunk_FUN_100ba810(0,0xc0000000);
      (**(code **)(DAT_102e15a8 + 0x40))(6,2);
    }
    iVar3 = (*DAT_102e1568)(0,0x1f);
    iVar3 = iVar3 + 0x55;
    uVar9 = 0;
    uVar8 = 0x3f4ccccd;
    fVar22 = local_30 * 0.0025 + 0.5;
    pcVar19 = "weapons/gauss2.wav";
    uVar7 = 1;
    uVar6 = thunk_FUN_10008500(local_14);
    (**(code **)(DAT_102e15a8 + 4))(local_8,uVar6,uVar7,pcVar19,fVar22,uVar8,uVar9,iVar3);
    while ((10.0 < local_30 && (0 < local_f4))) {
      local_f4 = local_f4 + -1;
      (**(code **)(DAT_102e15a8 + 0x28))(0,1);
      (**(code **)(DAT_102e15a8 + 0x2c))();
      (**(code **)(DAT_102e15a8 + 0x34))(local_8 - 1);
      (**(code **)(DAT_102e15a8 + 0x38))(2);
      piVar25 = local_9c;
      uVar9 = 0xffffffff;
      uVar8 = 2;
      uVar6 = thunk_FUN_10008500(local_54);
      uVar7 = thunk_FUN_10008500(local_48);
      (**(code **)(DAT_102e15a8 + 0x3c))(uVar7,uVar6,uVar8,uVar9,piVar25);
      (**(code **)(DAT_102e15a8 + 0x30))();
      if (local_9c[0] != 0) {
        return;
      }
      if (local_f0 == 0) {
        if (local_38 == 0) {
          uStack_1d0 = 0x40040000;
          fVar22 = local_30;
        }
        else {
          uStack_1d0 = 0x3ff00000;
          fVar22 = 128.0;
        }
        fVar23 = (float)(int)((-(uint)(local_38 != 0) & 0xffffff01) + 0xff);
        fVar24 = (float)(int)((-(uint)(local_38 != 0) & 0xffffff81) + 0xff);
        uVar6 = 0x437f0000;
        uVar26 = 0;
        uVar21 = 0;
        uVar20 = 0;
        uVar18 = 0;
        fVar16 = (float)(double)((ulonglong)uStack_1d0 << 0x20);
        uVar17 = 0x3dcccccd;
        uVar7 = local_fc;
        uVar8 = thunk_FUN_10008500(local_88);
        uVar9 = thunk_FUN_10008500(local_48);
        (**(code **)(DAT_102e15a4 + 0xf8))
                  (uVar9,uVar8,uVar7,uVar17,fVar16,uVar18,fVar22,uVar20,uVar21,uVar26,uVar6,fVar24,
                   fVar23);
      }
      else {
        bVar1 = thunk_FUN_10042e10(local_8);
        if (CONCAT31(extraout_var_00,bVar1) != 0) {
          thunk_FUN_100431a0();
        }
        local_f0 = 0;
        if (local_38 == 0) {
          uStack_1d0 = 0x40040000;
          fVar22 = local_30;
        }
        else {
          uStack_1d0 = 0x3ff00000;
          fVar22 = 128.0;
        }
        fVar23 = (float)(int)((-(uint)(local_38 != 0) & 0xffffff01) + 0xff);
        fVar24 = (float)(int)((-(uint)(local_38 != 0) & 0xffffff81) + 0xff);
        uVar6 = 0x437f0000;
        uVar21 = 0;
        uVar20 = 0;
        uVar18 = 0;
        uVar17 = 0;
        fVar16 = (float)(double)((ulonglong)uStack_1d0 << 0x20);
        uVar9 = 0x3dcccccd;
        uVar7 = local_fc;
        uVar8 = thunk_FUN_10008500(local_88);
        (**(code **)(DAT_102e15a4 + 0xe4))
                  (local_8 | 0x1000,uVar8,uVar7,uVar9,fVar16,uVar17,fVar22,uVar18,uVar20,uVar21,
                   uVar6,fVar24,fVar23);
      }
      local_f8 = (**(code **)(DAT_102e15a8 + 0x24))(local_6c);
      if (local_f8 == 0) {
        return;
      }
      if (*(int *)(local_f8 + 0x60) == 4) {
        local_58 = 0;
        pfVar4 = (float *)thunk_FUN_10008500(local_7c);
        pfVar5 = (float *)thunk_FUN_10008500(local_128);
        fVar22 = *pfVar4;
        fVar23 = *pfVar5;
        iVar3 = thunk_FUN_10008500(local_7c);
        iVar11 = thunk_FUN_10008500(local_128);
        fVar24 = *(float *)(iVar3 + 4);
        fVar16 = *(float *)(iVar11 + 4);
        iVar3 = thunk_FUN_10008500(local_7c);
        iVar11 = thunk_FUN_10008500(local_128);
        local_12c = -(*(float *)(iVar3 + 8) * *(float *)(iVar11 + 8) +
                     fVar24 * fVar16 + fVar22 * fVar23);
        if (0.5 <= local_12c) {
          thunk_FUN_100075f0((int)local_9c);
          uVar21 = 0x80;
          uVar20 = 0x40c00000;
          fVar22 = local_30 / 255.0;
          uVar18 = 0xe;
          uVar17 = 3;
          uVar9 = 0x3f800000;
          uVar6 = local_100;
          uVar7 = thunk_FUN_10008500(&DAT_1031c324);
          uVar8 = thunk_FUN_10008500(local_88);
          (**(code **)(DAT_102e15a4 + 200))
                    (uVar8,uVar7,uVar9,uVar6,uVar17,uVar18,fVar22,uVar20,uVar21);
          if (local_ec != 0) {
            return;
          }
          local_ec = 1;
          if (local_38 == 0) {
            thunk_FUN_10007fe0(local_150);
            pfVar4 = (float *)thunk_FUN_10008500(local_150);
            pfVar5 = (float *)thunk_FUN_10008500(local_128);
            fVar22 = 8.0;
            pfVar10 = (float *)thunk_FUN_10008500(local_88);
            thunk_FUN_10098330(pfVar10,fVar22,pfVar5,pfVar4);
            (**(code **)(DAT_102e15a8 + 0x2c))();
            (**(code **)(DAT_102e15a8 + 0x34))(local_8 - 1);
            (**(code **)(DAT_102e15a8 + 0x38))(2);
            piVar25 = local_e0;
            uVar9 = 0xffffffff;
            uVar8 = 2;
            uVar6 = thunk_FUN_10008500(local_54);
            uVar7 = thunk_FUN_10008500(local_150);
            (**(code **)(DAT_102e15a8 + 0x3c))(uVar7,uVar6,uVar8,uVar9,piVar25);
            if (local_e0[0] == 0) {
              thunk_FUN_10007fe0(local_15c);
              piVar25 = local_e0;
              uVar9 = 0xffffffff;
              uVar8 = 2;
              uVar6 = thunk_FUN_10008500(local_88);
              uVar7 = thunk_FUN_10008500(local_cc);
              (**(code **)(DAT_102e15a8 + 0x3c))(uVar7,uVar6,uVar8,uVar9,piVar25);
              pfVar4 = (float *)thunk_FUN_10008500(local_cc);
              pfVar5 = (float *)thunk_FUN_10008500(local_88);
              fVar22 = *pfVar4;
              fVar23 = *pfVar5;
              pfVar4 = (float *)thunk_FUN_10008500(local_15c);
              *pfVar4 = fVar22 - fVar23;
              iVar3 = thunk_FUN_10008500(local_cc);
              iVar11 = thunk_FUN_10008500(local_88);
              fVar22 = *(float *)(iVar3 + 4);
              fVar23 = *(float *)(iVar11 + 4);
              iVar3 = thunk_FUN_10008500(local_15c);
              *(float *)(iVar3 + 4) = fVar22 - fVar23;
              iVar3 = thunk_FUN_10008500(local_cc);
              iVar11 = thunk_FUN_10008500(local_88);
              fVar22 = *(float *)(iVar3 + 8);
              fVar23 = *(float *)(iVar11 + 8);
              iVar3 = thunk_FUN_10008500(local_15c);
              *(float *)(iVar3 + 8) = fVar22 - fVar23;
              pvVar13 = (void *)thunk_FUN_10008500(local_15c);
              fVar14 = thunk_FUN_10097fc0(extraout_ECX,pvVar13);
              local_160 = (float)fVar14;
              if (local_160 < local_30) {
                if (local_160 == 0.0) {
                  local_160 = 1.0;
                }
                local_30 = local_30 - local_160;
                thunk_FUN_10007fe0(local_16c);
                pfVar4 = (float *)thunk_FUN_10008500(local_88);
                pfVar5 = (float *)thunk_FUN_10008500(local_128);
                fVar22 = *pfVar4;
                fVar23 = *pfVar5;
                pfVar4 = (float *)thunk_FUN_10008500(local_16c);
                *pfVar4 = fVar22 - fVar23;
                iVar3 = thunk_FUN_10008500(local_88);
                iVar11 = thunk_FUN_10008500(local_128);
                fVar22 = *(float *)(iVar3 + 4);
                fVar23 = *(float *)(iVar11 + 4);
                iVar3 = thunk_FUN_10008500(local_16c);
                *(float *)(iVar3 + 4) = fVar22 - fVar23;
                iVar3 = thunk_FUN_10008500(local_88);
                iVar11 = thunk_FUN_10008500(local_128);
                fVar22 = *(float *)(iVar3 + 8);
                fVar23 = *(float *)(iVar11 + 8);
                iVar3 = thunk_FUN_10008500(local_16c);
                *(float *)(iVar3 + 8) = fVar22 - fVar23;
                fVar14 = (float10)(*DAT_102e1564)(0x41200000,0x41a00000,0x42c80000,0xff,0x42c80000);
                fVar22 = (float)(fVar14 / (float10)100.0);
                uVar17 = 0x3dcccccd;
                uVar9 = 3;
                uVar6 = local_104;
                uVar7 = thunk_FUN_10008500(local_16c);
                uVar8 = thunk_FUN_10008500(local_88);
                (**(code **)(DAT_102e15a4 + 0xa0))(0xf,uVar8,uVar7,uVar6,uVar9,uVar17,fVar22);
                thunk_FUN_100075f0((int)local_e0);
                uVar21 = 0x80;
                uVar20 = 0x40c00000;
                fVar22 = local_30 / 255.0;
                uVar18 = 0xe;
                uVar17 = 3;
                uVar9 = 0x3dcccccd;
                uVar6 = local_100;
                uVar7 = thunk_FUN_10008500(&DAT_1031c324);
                uVar8 = thunk_FUN_10008500(local_cc);
                (**(code **)(DAT_102e15a4 + 200))
                          (uVar8,uVar7,uVar9,uVar6,uVar17,uVar18,fVar22,uVar20,uVar21);
                thunk_FUN_10007fe0(local_178);
                pfVar4 = (float *)thunk_FUN_10008500(local_cc);
                pfVar5 = (float *)thunk_FUN_10008500(local_128);
                fVar22 = *pfVar4;
                fVar23 = *pfVar5;
                pfVar4 = (float *)thunk_FUN_10008500(local_178);
                *pfVar4 = fVar22 - fVar23;
                iVar3 = thunk_FUN_10008500(local_cc);
                iVar11 = thunk_FUN_10008500(local_128);
                fVar22 = *(float *)(iVar3 + 4);
                fVar23 = *(float *)(iVar11 + 4);
                iVar3 = thunk_FUN_10008500(local_178);
                *(float *)(iVar3 + 4) = fVar22 - fVar23;
                iVar3 = thunk_FUN_10008500(local_cc);
                iVar11 = thunk_FUN_10008500(local_128);
                fVar22 = *(float *)(iVar3 + 8);
                fVar23 = *(float *)(iVar11 + 8);
                iVar3 = thunk_FUN_10008500(local_178);
                *(float *)(iVar3 + 8) = fVar22 - fVar23;
                fVar14 = (float10)(*DAT_102e1564)(0x41200000,0x41a00000,0x43480000,0xff,0x42200000);
                fVar22 = (float)(fVar14 / (float10)100.0);
                uVar17 = 0x3dcccccd;
                lVar15 = __ftol();
                uVar7 = (undefined4)lVar15;
                uVar6 = local_104;
                uVar8 = thunk_FUN_10008500(local_178);
                uVar9 = thunk_FUN_10008500(local_cc);
                (**(code **)(DAT_102e15a4 + 0xa0))(0xf,uVar9,uVar8,uVar6,uVar7,uVar17,fVar22);
                pfVar4 = (float *)thunk_FUN_10008500(local_cc);
                pfVar5 = (float *)thunk_FUN_10008500(local_128);
                fVar22 = *pfVar4;
                fVar23 = *pfVar5;
                pfVar4 = (float *)thunk_FUN_10008500(local_48);
                *pfVar4 = fVar22 + fVar23;
                iVar3 = thunk_FUN_10008500(local_cc);
                iVar11 = thunk_FUN_10008500(local_128);
                fVar22 = *(float *)(iVar3 + 4);
                fVar23 = *(float *)(iVar11 + 4);
                iVar3 = thunk_FUN_10008500(local_48);
                *(float *)(iVar3 + 4) = fVar22 + fVar23;
                iVar3 = thunk_FUN_10008500(local_cc);
                iVar11 = thunk_FUN_10008500(local_128);
                fVar22 = *(float *)(iVar3 + 8);
                fVar23 = *(float *)(iVar11 + 8);
                iVar3 = thunk_FUN_10008500(local_48);
                *(float *)(iVar3 + 8) = fVar22 + fVar23;
              }
            }
            else {
              local_30 = 0.0;
            }
            (**(code **)(DAT_102e15a8 + 0x30))();
          }
          else {
            if (local_38 != 0) {
              uVar26 = 0x80;
              uVar21 = 0x3e99999a;
              uVar20 = 0x3f48c8c9;
              uVar18 = 0xe;
              uVar17 = 3;
              uVar9 = 0x3e4ccccd;
              uVar6 = local_100;
              uVar7 = thunk_FUN_10008500(&DAT_1031c324);
              uVar8 = thunk_FUN_10008500(local_88);
              (**(code **)(DAT_102e15a4 + 200))
                        (uVar8,uVar7,uVar9,uVar6,uVar17,uVar18,uVar20,uVar21,uVar26);
              thunk_FUN_10007fe0(local_184);
              pfVar4 = (float *)thunk_FUN_10008500(local_88);
              pfVar5 = (float *)thunk_FUN_10008500(local_7c);
              fVar22 = *pfVar4;
              fVar23 = *pfVar5;
              pfVar4 = (float *)thunk_FUN_10008500(local_184);
              *pfVar4 = fVar22 + fVar23;
              iVar3 = thunk_FUN_10008500(local_88);
              iVar11 = thunk_FUN_10008500(local_7c);
              fVar22 = *(float *)(iVar3 + 4);
              fVar23 = *(float *)(iVar11 + 4);
              iVar3 = thunk_FUN_10008500(local_184);
              *(float *)(iVar3 + 4) = fVar22 + fVar23;
              iVar3 = thunk_FUN_10008500(local_88);
              iVar11 = thunk_FUN_10008500(local_7c);
              fVar22 = *(float *)(iVar3 + 8);
              fVar23 = *(float *)(iVar11 + 8);
              iVar3 = thunk_FUN_10008500(local_184);
              *(float *)(iVar3 + 8) = fVar22 + fVar23;
              fVar14 = (float10)(*DAT_102e1564)(0x41200000,0x41a00000,0x42c80000,0xff,0x43480000);
              fVar22 = (float)(fVar14 / (float10)100.0);
              uVar17 = 0x3f19999a;
              uVar9 = 8;
              uVar6 = local_104;
              uVar7 = thunk_FUN_10008500(local_184);
              uVar8 = thunk_FUN_10008500(local_88);
              (**(code **)(DAT_102e15a4 + 0xa0))(0xf,uVar8,uVar7,uVar6,uVar9,uVar17,fVar22);
            }
            local_30 = 0.0;
          }
        }
        else {
          thunk_FUN_10007fe0(local_138);
          pfVar4 = (float *)thunk_FUN_10008500(local_138);
          pfVar5 = (float *)thunk_FUN_10008500(local_7c);
          fVar22 = local_12c + local_12c;
          pfVar10 = (float *)thunk_FUN_10008500(local_128);
          thunk_FUN_10098330(pfVar10,fVar22,pfVar5,pfVar4);
          local_e4 = local_e4 - local_8c;
          puVar2 = (undefined4 *)thunk_FUN_10008500(local_138);
          puVar12 = (undefined4 *)thunk_FUN_10008500(local_128);
          *puVar12 = *puVar2;
          iVar3 = thunk_FUN_10008500(local_138);
          iVar11 = thunk_FUN_10008500(local_128);
          *(undefined4 *)(iVar11 + 4) = *(undefined4 *)(iVar3 + 4);
          iVar3 = thunk_FUN_10008500(local_138);
          iVar11 = thunk_FUN_10008500(local_128);
          *(undefined4 *)(iVar11 + 8) = *(undefined4 *)(iVar3 + 8);
          pfVar4 = (float *)thunk_FUN_10008500(local_48);
          pfVar5 = (float *)thunk_FUN_10008500(local_128);
          fVar22 = 8.0;
          pfVar10 = (float *)thunk_FUN_10008500(local_88);
          thunk_FUN_10098330(pfVar10,fVar22,pfVar5,pfVar4);
          pfVar4 = (float *)thunk_FUN_10008500(local_54);
          pfVar5 = (float *)thunk_FUN_10008500(local_128);
          fVar22 = 8192.0;
          pfVar10 = (float *)thunk_FUN_10008500(local_48);
          thunk_FUN_10098330(pfVar10,fVar22,pfVar5,pfVar4);
          uVar20 = 0x80;
          fVar22 = local_30 * local_12c * 0.5 * 0.1;
          fVar23 = (local_30 * local_12c) / 255.0;
          uVar18 = 0xe;
          uVar17 = 3;
          uVar9 = 0x3e4ccccd;
          uVar6 = local_100;
          uVar7 = thunk_FUN_10008500(&DAT_1031c324);
          uVar8 = thunk_FUN_10008500(local_88);
          (**(code **)(DAT_102e15a4 + 200))
                    (uVar8,uVar7,uVar9,uVar6,uVar17,uVar18,fVar23,fVar22,uVar20);
          thunk_FUN_10007fe0(local_144);
          pfVar4 = (float *)thunk_FUN_10008500(local_88);
          pfVar5 = (float *)thunk_FUN_10008500(local_7c);
          fVar22 = *pfVar4;
          fVar23 = *pfVar5;
          pfVar4 = (float *)thunk_FUN_10008500(local_144);
          *pfVar4 = fVar22 + fVar23;
          iVar3 = thunk_FUN_10008500(local_88);
          iVar11 = thunk_FUN_10008500(local_7c);
          fVar22 = *(float *)(iVar3 + 4);
          fVar23 = *(float *)(iVar11 + 4);
          iVar3 = thunk_FUN_10008500(local_144);
          *(float *)(iVar3 + 4) = fVar22 + fVar23;
          iVar3 = thunk_FUN_10008500(local_88);
          iVar11 = thunk_FUN_10008500(local_7c);
          fVar22 = *(float *)(iVar3 + 8);
          fVar23 = *(float *)(iVar11 + 8);
          iVar3 = thunk_FUN_10008500(local_144);
          *(float *)(iVar3 + 8) = fVar22 + fVar23;
          fVar14 = (float10)(*DAT_102e1564)(0x41200000,0x41a00000,0x42c80000,0xff,0x42c80000);
          fVar22 = (float)(fVar14 / (float10)100.0);
          uVar17 = 0x3dcccccd;
          uVar9 = 3;
          uVar6 = local_104;
          uVar7 = thunk_FUN_10008500(local_144);
          uVar8 = thunk_FUN_10008500(local_88);
          (**(code **)(DAT_102e15a4 + 0xa0))(0xf,uVar8,uVar7,uVar6,uVar9,uVar17,fVar22);
          if (local_12c == 0.0) {
            local_12c = 0.1;
          }
          local_30 = (1.0 - local_12c) * local_30;
        }
      }
      else {
        pfVar4 = (float *)thunk_FUN_10008500(local_88);
        pfVar5 = (float *)thunk_FUN_10008500(local_128);
        fVar22 = *pfVar4;
        fVar23 = *pfVar5;
        pfVar4 = (float *)thunk_FUN_10008500(local_48);
        *pfVar4 = fVar22 + fVar23;
        iVar3 = thunk_FUN_10008500(local_88);
        iVar11 = thunk_FUN_10008500(local_128);
        fVar22 = *(float *)(iVar3 + 4);
        fVar23 = *(float *)(iVar11 + 4);
        iVar3 = thunk_FUN_10008500(local_48);
        *(float *)(iVar3 + 4) = fVar22 + fVar23;
        iVar3 = thunk_FUN_10008500(local_88);
        iVar11 = thunk_FUN_10008500(local_128);
        fVar22 = *(float *)(iVar3 + 8);
        fVar23 = *(float *)(iVar11 + 8);
        iVar3 = thunk_FUN_10008500(local_48);
        *(float *)(iVar3 + 8) = fVar22 + fVar23;
      }
    }
  }
  else {
    thunk_FUN_1000a650(local_8);
  }
  return;
}

/* 1000bc10  FUN_1000bc10  (63 bytes)
 * Border * FUN_1000bc10(Border * param_1)
 */
Border * __thiscall FUN_1000bc10(void *this,Border *param_1)

{
  vgui::Border::Border(this,param_1);
  vgui::Color::Color((Color *)((int)this + 0x38),(Color *)(param_1 + 0x38));
  *(undefined ***)this = &vgui::LineBorder::_vftable_;
  return this;
}

/* 1000bc60  FUN_1000bc60  (54 bytes)
 * Border * FUN_1000bc60(Border * param_1)
 */
Border * __thiscall FUN_1000bc60(void *this,Border *param_1)

{
  vgui::Border::operator=(this,param_1);
  vgui::Color::operator=((Color *)((int)this + 0x38),(Color *)(param_1 + 0x38));
  return this;
}

/* 1000bcb0  FUN_1000bcb0  (52 bytes)
 * Panel * FUN_1000bcb0(Panel * param_1)
 */
Panel * __fastcall FUN_1000bcb0(Panel *param_1)

{
  vgui::Panel::Panel(param_1);
  *(undefined ***)param_1 = &vgui::ImagePanel::_vftable_;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  return param_1;
}

/* 1000bd00  FUN_1000bd00  (63 bytes)
 * Panel * FUN_1000bd00(Panel * param_1)
 */
Panel * __thiscall FUN_1000bd00(void *this,Panel *param_1)

{
  vgui::Panel::Panel(this,param_1);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined ***)this = &vgui::ImagePanel::_vftable_;
  return this;
}

/* 1000bd50  FUN_1000bd50  (54 bytes)
 * Panel * FUN_1000bd50(Panel * param_1)
 */
Panel * __thiscall FUN_1000bd50(void *this,Panel *param_1)

{
  vgui::Panel::operator=(this,param_1);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  return this;
}

/* 1000bda0  FUN_1000bda0  (81 bytes)
 * Image * FUN_1000bda0(Image * param_1)
 */
Image * __thiscall FUN_1000bda0(void *this,Image *param_1)

{
  vgui::Image::Image(this,param_1);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(Image *)((int)this + 0x28) = param_1[0x28];
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined ***)this = &vgui::Bitmap::_vftable_;
  return this;
}

/* 1000be10  FUN_1000be10  (72 bytes)
 * Image * FUN_1000be10(Image * param_1)
 */
Image * __thiscall FUN_1000be10(void *this,Image *param_1)

{
  vgui::Image::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(Image *)((int)this + 0x28) = param_1[0x28];
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  return this;
}

/* 1000be70  FUN_1000be70  (45 bytes)
 * Bitmap * FUN_1000be70(Bitmap * param_1)
 */
Bitmap * __thiscall FUN_1000be70(void *this,Bitmap *param_1)

{
  vgui::Bitmap::Bitmap(this,param_1);
  *(undefined ***)this = &vgui::BitmapTGA::_vftable_;
  return this;
}

/* 1000beb0  FUN_1000beb0  (36 bytes)
 * Bitmap * FUN_1000beb0(Bitmap * param_1)
 */
Bitmap * __thiscall FUN_1000beb0(void *this,Bitmap *param_1)

{
  vgui::Bitmap::operator=(this,param_1);
  return this;
}

/* 1000bee0  FUN_1000bee0  (31 bytes)
 * undefined4 * FUN_1000bee0(undefined4 * param_1)
 */
undefined4 * __fastcall FUN_1000bee0(undefined4 *param_1)

{
  *param_1 = &vgui::InputSignal::_vftable_;
  return param_1;
}

/* 1000bf10  FUN_1000bf10  (33 bytes)
 * undefined4 * FUN_1000bf10(undefined4 * param_1)
 */
undefined4 * __fastcall FUN_1000bf10(undefined4 *param_1)

{
  *param_1 = &vgui::InputSignal::_vftable_;
  return param_1;
}

/* 1000bf40  FUN_1000bf40  (24 bytes)
 * undefined4 FUN_1000bf40(undefined4 param_1)
 */
undefined4 __fastcall FUN_1000bf40(undefined4 param_1)

{
  return param_1;
}

/* 1000bf60  FUN_1000bf60  (204 bytes)
 * Label * FUN_1000bf60(Label * param_1)
 */
Label * __thiscall FUN_1000bf60(void *this,Label *param_1)

{
  vgui::Label::Label(this,param_1);
  *(undefined4 *)((int)this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(Label *)((int)this + 0xd4) = param_1[0xd4];
  *(Label *)((int)this + 0xd5) = param_1[0xd5];
  *(Label *)((int)this + 0xd6) = param_1[0xd6];
  *(undefined4 *)((int)this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)((int)this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)((int)this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)((int)this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)((int)this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)((int)this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined ***)this = &vgui::Button::_vftable_;
  return this;
}

/* 1000c060  FUN_1000c060  (195 bytes)
 * Label * FUN_1000c060(Label * param_1)
 */
Label * __thiscall FUN_1000c060(void *this,Label *param_1)

{
  vgui::Label::operator=(this,param_1);
  *(undefined4 *)((int)this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(Label *)((int)this + 0xd4) = param_1[0xd4];
  *(Label *)((int)this + 0xd5) = param_1[0xd5];
  *(Label *)((int)this + 0xd6) = param_1[0xd6];
  *(undefined4 *)((int)this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)((int)this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)((int)this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)((int)this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)((int)this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)((int)this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  return this;
}

/* 1000c160  FUN_1000c160  (55 bytes)
 * int FUN_1000c160(int param_1)
 */
int __fastcall FUN_1000c160(int param_1)

{
  thunk_FUN_10007fe0(param_1 + 0x14);
  thunk_FUN_1000c1b0(param_1 + 0x20);
  thunk_FUN_10007fe0(param_1 + 0x34);
  return param_1;
}

/* 1000c1b0  FUN_1000c1b0  (30 bytes)
 * undefined4 FUN_1000c1b0(undefined4 param_1)
 */
undefined4 __fastcall FUN_1000c1b0(undefined4 param_1)

{
  thunk_FUN_10007fe0(param_1);
  return param_1;
}

/* 1000c1e0  FUN_1000c1e0  (282 bytes)
 * undefined FUN_1000c1e0(int param_1)
 * called by: thunk_FUN_1000c1e0
 */
void __cdecl FUN_1000c1e0(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined3 extraout_var;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  undefined1 local_14 [12];
  int local_8;
  
  thunk_FUN_10007fe0(local_14);
  thunk_FUN_10007fe0(local_20);
  thunk_FUN_10007fe0(local_2c);
  local_8 = *(int *)(param_1 + 4);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_14);
  *puVar2 = *(undefined4 *)(param_1 + 8);
  iVar3 = thunk_FUN_10008500(local_14);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0xc);
  iVar3 = thunk_FUN_10008500(local_14);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x10);
  uVar10 = 100;
  uVar9 = 0;
  uVar8 = 0x3f4ccccd;
  uVar7 = 0x3f800000;
  pcVar6 = "weapons/cbar_miss1.wav";
  uVar5 = 1;
  uVar4 = thunk_FUN_10008500(local_14);
  (**(code **)(DAT_102e15a8 + 4))(local_8,uVar4,uVar5,pcVar6,uVar7,uVar8,uVar9,uVar10);
  bVar1 = thunk_FUN_10042e10(local_8);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    (**(code **)(DAT_102e15a8 + 0x40))(4,1);
    iVar3 = DAT_1028fd30 % 3;
    DAT_1028fd30 = DAT_1028fd30 + 1;
    if (iVar3 == 0) {
      (**(code **)(DAT_102e15a8 + 0x40))(4,1);
    }
    else if (iVar3 == 1) {
      (**(code **)(DAT_102e15a8 + 0x40))(5,1);
    }
    else if (iVar3 == 2) {
      (**(code **)(DAT_102e15a8 + 0x40))(7,1);
    }
  }
  return;
}

/* 1000c340  FUN_1000c340  (82 bytes)
 * undefined FUN_1000c340(int param_1)
 * called by: thunk_FUN_1000c340
 */
void __cdecl FUN_1000c340(int param_1)

{
  *(undefined4 *)(param_1 + 0xb8c) = *(undefined4 *)(param_1 + 0x170);
  *(undefined4 *)(param_1 + 0xb90) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(param_1 + 0xb94) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(param_1 + 0xb98) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(param_1 + 0xb9c) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(param_1 + 0xba0) = *(undefined4 *)(param_1 + 0x184);
  return;
}

/* 1000c3b0  FUN_1000c3b0  (1371 bytes)
 * undefined FUN_1000c3b0(int param_1)
 * called by: thunk_FUN_1000c3b0
 */
void __cdecl FUN_1000c3b0(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  undefined3 extraout_var;
  void *pvVar11;
  uint *puVar12;
  float10 fVar13;
  char *pcVar14;
  float fVar15;
  undefined4 uVar16;
  undefined1 *puVar17;
  undefined4 uVar18;
  undefined1 local_100 [12];
  undefined1 local_f4 [12];
  undefined1 local_e8 [12];
  undefined1 local_dc [12];
  undefined1 local_d0 [12];
  uint *local_c4;
  undefined4 local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  int local_b0;
  undefined1 local_ac [12];
  undefined1 local_a0 [12];
  undefined1 local_94 [12];
  int local_88;
  undefined1 local_84 [16];
  float local_74;
  undefined1 local_70 [28];
  undefined4 local_54;
  undefined1 local_40 [12];
  undefined1 local_34 [12];
  undefined1 local_28 [12];
  undefined1 local_1c [12];
  undefined1 local_10 [12];
  
  thunk_FUN_10007fe0(local_10);
  thunk_FUN_10007fe0(local_1c);
  thunk_FUN_10007fe0(local_28);
  thunk_FUN_10007fe0(local_34);
  thunk_FUN_10007fe0(local_40);
  thunk_FUN_1000c160((int)local_84);
  thunk_FUN_10007fe0(local_94);
  thunk_FUN_10007fe0(local_a0);
  thunk_FUN_10007fe0(local_ac);
  local_88 = *(int *)(param_1 + 4);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_94);
  *puVar2 = *(undefined4 *)(param_1 + 8);
  iVar3 = thunk_FUN_10008500(local_94);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0xc);
  iVar3 = thunk_FUN_10008500(local_94);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x10);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_a0);
  *puVar2 = *(undefined4 *)(param_1 + 0x14);
  iVar3 = thunk_FUN_10008500(local_a0);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x18);
  iVar3 = thunk_FUN_10008500(local_a0);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x1c);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_ac);
  *puVar2 = *(undefined4 *)(param_1 + 0x20);
  iVar3 = thunk_FUN_10008500(local_ac);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x24);
  iVar3 = thunk_FUN_10008500(local_ac);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x28);
  uVar4 = thunk_FUN_10008500(local_28);
  uVar5 = thunk_FUN_10008500(local_34);
  uVar6 = thunk_FUN_10008500(local_40);
  uVar7 = thunk_FUN_10008500(local_a0);
  (*DAT_102e14b8)(uVar7,uVar6,uVar5,uVar4);
  pfVar8 = (float *)thunk_FUN_10008500(local_94);
  pfVar9 = (float *)thunk_FUN_10008500(local_10);
  thunk_FUN_10042e50(param_1,pfVar9,pfVar8);
  pfVar8 = (float *)thunk_FUN_10008500(local_1c);
  pfVar9 = (float *)thunk_FUN_10008500(local_40);
  fVar15 = 8192.0;
  pfVar10 = (float *)thunk_FUN_10008500(local_10);
  thunk_FUN_10098330(pfVar10,fVar15,pfVar9,pfVar8);
  iVar3 = (*DAT_102e1568)(0,0xf);
  iVar3 = iVar3 + 0x5d;
  uVar16 = 0;
  uVar7 = 0x3f4ccccd;
  uVar6 = 0x3f800000;
  pcVar14 = "weapons/xbow_fire1.wav";
  uVar5 = 1;
  uVar4 = thunk_FUN_10008500(local_94);
  (**(code **)(DAT_102e15a8 + 4))(local_88,uVar4,uVar5,pcVar14,uVar6,uVar7,uVar16,iVar3);
  iVar3 = (*DAT_102e1568)(0,0xf);
  fVar13 = (float10)(*DAT_102e1564)(0x3f733333,0x3f800000,0x3f4ccccd,0,iVar3 + 0x5d);
  fVar15 = (float)fVar13;
  pcVar14 = "weapons/xbow_reload1.wav";
  uVar5 = 3;
  uVar4 = thunk_FUN_10008500(local_94);
  (**(code **)(DAT_102e15a8 + 4))(local_88,uVar4,uVar5,pcVar14,fVar15);
  bVar1 = thunk_FUN_10042e10(local_88);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    if (*(int *)(param_1 + 0x38) == 0) {
      if (*(int *)(param_1 + 0x3c) != 0) {
        (**(code **)(DAT_102e15a8 + 0x40))(6,1);
      }
    }
    else {
      (**(code **)(DAT_102e15a8 + 0x40))(4,1);
    }
  }
  (**(code **)(DAT_102e15a8 + 0x2c))();
  (**(code **)(DAT_102e15a8 + 0x34))(local_88 + -1);
  (**(code **)(DAT_102e15a8 + 0x38))(2);
  puVar17 = local_84;
  uVar7 = 0xffffffff;
  uVar6 = 2;
  uVar4 = thunk_FUN_10008500(local_1c);
  uVar5 = thunk_FUN_10008500(local_10);
  (**(code **)(DAT_102e15a8 + 0x3c))(uVar5,uVar4,uVar6,uVar7,puVar17);
  if (local_74 < 1.0) {
    local_b0 = (**(code **)(DAT_102e15a8 + 0x24))(local_54);
    if (*(int *)(local_b0 + 0x60) == 4) {
      if (*(int *)(local_b0 + 0x68) == 0) {
        fVar13 = (float10)(*DAT_102e1564)(0x3f733333,0x3f800000,0x3f4ccccd,0,100);
        fVar15 = (float)fVar13;
        pcVar14 = "weapons/xbow_hit1.wav";
        uVar5 = 4;
        uVar4 = thunk_FUN_10008500(local_70);
        (**(code **)(DAT_102e15a8 + 4))(0,uVar4,uVar5,pcVar14,fVar15);
        uVar5 = 0;
        uVar4 = thunk_FUN_10008500(local_70);
        iVar3 = (*DAT_102e153c)(uVar4,uVar5);
        if (iVar3 != -3) {
          uVar4 = thunk_FUN_10008500(local_70);
          (**(code **)(DAT_102e15a4 + 0x88))(uVar4);
        }
        thunk_FUN_10007fe0(&local_bc);
        local_c0 = (**(code **)(DAT_102e15a8 + 0xc))("models/crossbow_bolt.mdl");
        pfVar8 = (float *)thunk_FUN_10008500(&local_bc);
        pfVar9 = (float *)thunk_FUN_10008500(local_40);
        thunk_FUN_10098040(pfVar9,pfVar8);
        thunk_FUN_10008500(&local_bc);
        pfVar8 = thunk_FUN_10008000(local_d0,0,0,0);
        uVar4 = thunk_FUN_10008500(pfVar8);
        pfVar8 = thunk_FUN_1000cb20(local_40,local_dc,10.0);
        pvVar11 = thunk_FUN_1000ca70(local_70,local_e8,pfVar8);
        uVar5 = thunk_FUN_10008500(pvVar11);
        local_c4 = (uint *)(**(code **)(DAT_102e15a4 + 0xc0))(uVar5,uVar4);
        if (local_c4 != (uint *)0x0) {
          *local_c4 = *local_c4 | 0x80000;
          pfVar8 = thunk_FUN_1000cb20(local_40,local_f4,10.0);
          puVar12 = thunk_FUN_1000ca70(local_70,local_100,pfVar8);
          local_c4[0x5c] = *puVar12;
          local_c4[0x5d] = puVar12[1];
          local_c4[0x5e] = puVar12[2];
          local_c4[0x5f] = local_bc;
          local_c4[0x60] = local_b8;
          local_c4[0x61] = local_b4;
          local_c4[10] = (uint)thunk_FUN_1000c340;
        }
      }
    }
    else {
      iVar3 = (*DAT_102e1568)(0,1);
      if (iVar3 == 0) {
        uVar18 = 100;
        uVar16 = 0;
        uVar7 = 0x3f4ccccd;
        uVar6 = 0x3f800000;
        pcVar14 = "weapons/xbow_hitbod1.wav";
        uVar5 = 4;
        uVar4 = thunk_FUN_10008500(local_70);
        (**(code **)(DAT_102e15a8 + 4))(local_88,uVar4,uVar5,pcVar14,uVar6,uVar7,uVar16,uVar18);
      }
      else if (iVar3 == 1) {
        uVar18 = 100;
        uVar16 = 0;
        uVar7 = 0x3f4ccccd;
        uVar6 = 0x3f800000;
        pcVar14 = "weapons/xbow_hitbod2.wav";
        uVar5 = 4;
        uVar4 = thunk_FUN_10008500(local_70);
        (**(code **)(DAT_102e15a8 + 4))(local_88,uVar4,uVar5,pcVar14,uVar6,uVar7,uVar16,uVar18);
      }
    }
  }
  (**(code **)(DAT_102e15a8 + 0x30))();
  return;
}

/* 1000ca70  FUN_1000ca70  (78 bytes)
 * void * FUN_1000ca70(void * param_1, float * param_2)
 */
void * __thiscall FUN_1000ca70(void *this,void *param_1,float *param_2)

{
  thunk_FUN_1000cae0(param_1,*(float *)this - *param_2,*(float *)((int)this + 4) - param_2[1],
                     *(float *)((int)this + 8) - param_2[2]);
  return param_1;
}

/* 1000cae0  FUN_1000cae0  (50 bytes)
 * undefined4 * FUN_1000cae0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 * __thiscall
FUN_1000cae0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  return this;
}

/* 1000cb20  FUN_1000cb20  (70 bytes)
 * void * FUN_1000cb20(void * param_1, float param_2)
 */
void * __thiscall FUN_1000cb20(void *this,void *param_1,float param_2)

{
  thunk_FUN_1000cae0(param_1,param_2 * *(float *)this,param_2 * *(float *)((int)this + 4),
                     param_2 * *(float *)((int)this + 8));
  return param_1;
}

/* 1000cb80  FUN_1000cb80  (50 bytes)
 * undefined FUN_1000cb80(undefined4 param_1, undefined4 param_2, int param_3, undefined * param_4)
 */
void FUN_1000cb80(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  while (param_3 = param_3 + -1, -1 < param_3) {
    (*(code *)param_4)();
  }
  return;
}

/* 1000cbc0  FUN_1000cbc0  (303 bytes)
 * undefined FUN_1000cbc0(int param_1)
 * called by: thunk_FUN_1000cbc0
 */
void __cdecl FUN_1000cbc0(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined3 extraout_var;
  float10 fVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_14 [12];
  int local_8;
  
  thunk_FUN_10007fe0(local_14);
  local_8 = *(int *)(param_1 + 4);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_14);
  *puVar2 = *(undefined4 *)(param_1 + 8);
  iVar3 = thunk_FUN_10008500(local_14);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0xc);
  iVar3 = thunk_FUN_10008500(local_14);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x10);
  iVar3 = (*DAT_102e1568)(0,0xf);
  iVar3 = iVar3 + 0x5d;
  uVar11 = 0;
  uVar10 = 0x3f4ccccd;
  uVar8 = 0x3f800000;
  pcVar7 = "weapons/xbow_fire1.wav";
  uVar6 = 1;
  uVar4 = thunk_FUN_10008500(local_14);
  (**(code **)(DAT_102e15a8 + 4))(local_8,uVar4,uVar6,pcVar7,uVar8,uVar10,uVar11,iVar3);
  iVar3 = (*DAT_102e1568)(0,0xf);
  fVar5 = (float10)(*DAT_102e1564)(0x3f733333,0x3f800000,0x3f4ccccd,0,iVar3 + 0x5d);
  fVar9 = (float)fVar5;
  pcVar7 = "weapons/xbow_reload1.wav";
  uVar6 = 3;
  uVar4 = thunk_FUN_10008500(local_14);
  (**(code **)(DAT_102e15a8 + 4))(local_8,uVar4,uVar6,pcVar7,fVar9);
  bVar1 = thunk_FUN_10042e10(local_8);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    if (*(int *)(param_1 + 0x38) == 0) {
      if (*(int *)(param_1 + 0x3c) != 0) {
        (**(code **)(DAT_102e15a8 + 0x40))(6,1);
      }
    }
    else {
      (**(code **)(DAT_102e15a8 + 0x40))(4,1);
    }
    thunk_FUN_100ba810(0,0xc0000000);
  }
  return;
}

/* 1000cd40  FUN_1000cd40  (29 bytes)
 * undefined FUN_1000cd40(undefined4 param_1)
 */
void __cdecl FUN_1000cd40(undefined4 param_1)

{
  (*DAT_102e1494)(param_1);
  return;
}

/* 1000cd70  FUN_1000cd70  (221 bytes)
 * undefined FUN_1000cd70(int param_1)
 * called by: thunk_FUN_1000cd70
 */
void __cdecl FUN_1000cd70(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined3 extraout_var;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_14 [12];
  int local_8;
  
  thunk_FUN_10007fe0(local_14);
  local_8 = *(int *)(param_1 + 4);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_14);
  *puVar2 = *(undefined4 *)(param_1 + 8);
  iVar3 = thunk_FUN_10008500(local_14);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0xc);
  iVar3 = thunk_FUN_10008500(local_14);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x10);
  uVar10 = 100;
  uVar9 = 0;
  uVar8 = 0x3f4ccccd;
  uVar7 = 0x3f666666;
  pcVar6 = "weapons/rocketfire1.wav";
  uVar5 = 1;
  uVar4 = thunk_FUN_10008500(local_14);
  (**(code **)(DAT_102e15a8 + 4))(local_8,uVar4,uVar5,pcVar6,uVar7,uVar8,uVar9,uVar10);
  uVar10 = 100;
  uVar9 = 0;
  uVar8 = 0x3f4ccccd;
  uVar7 = 0x3f333333;
  pcVar6 = "weapons/glauncher.wav";
  uVar5 = 3;
  uVar4 = thunk_FUN_10008500(local_14);
  (**(code **)(DAT_102e15a8 + 4))(local_8,uVar4,uVar5,pcVar6,uVar7,uVar8,uVar9,uVar10);
  bVar1 = thunk_FUN_10042e10(local_8);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    (**(code **)(DAT_102e15a8 + 0x40))(3,1);
    thunk_FUN_100ba810(0,0xc0a00000);
  }
  return;
}

/* 1000ce90  FUN_1000ce90  (1093 bytes)
 * undefined FUN_1000ce90(int param_1)
 * called by: thunk_FUN_1000ce90
 */
void __cdecl FUN_1000ce90(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char *pcVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 *puVar24;
  undefined4 uVar25;
  undefined1 local_b8 [20];
  undefined1 local_a4 [48];
  undefined1 local_74 [12];
  undefined1 local_68 [12];
  undefined1 local_5c [12];
  undefined1 local_50 [12];
  undefined1 local_44 [12];
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  int local_20;
  undefined1 local_1c [12];
  int local_10;
  undefined4 local_c;
  uint local_8;
  
  thunk_FUN_10007fe0(local_1c);
  local_8 = *(uint *)(param_1 + 4);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_1c);
  *puVar2 = *(undefined4 *)(param_1 + 8);
  iVar3 = thunk_FUN_10008500(local_1c);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0xc);
  iVar3 = thunk_FUN_10008500(local_1c);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x10);
  local_c = *(undefined4 *)(param_1 + 0x38);
  local_10 = *(int *)(param_1 + 0x3c);
  local_20 = *(int *)(param_1 + 0x40);
  if (local_20 == 0) {
    if (local_10 == 1) {
      uVar23 = 0x7d;
      uVar21 = 0;
      uVar18 = 0x3f4ccccd;
      uVar16 = 0x3f7ae148;
      pcVar14 = "weapons/egon_run3.wav";
      uVar12 = 6;
      uVar4 = thunk_FUN_10008500(local_1c);
      (**(code **)(DAT_102e15a8 + 4))(local_8,uVar4,uVar12,pcVar14,uVar16,uVar18,uVar21,uVar23);
    }
    else {
      uVar23 = 100;
      uVar21 = 0;
      uVar18 = 0x3f4ccccd;
      uVar16 = 0x3f666666;
      pcVar14 = "weapons/egon_run3.wav";
      uVar12 = 6;
      uVar4 = thunk_FUN_10008500(local_1c);
      (**(code **)(DAT_102e15a8 + 4))(local_8,uVar4,uVar12,pcVar14,uVar16,uVar18,uVar21,uVar23);
    }
  }
  else if (local_10 == 1) {
    uVar23 = 0x7d;
    uVar21 = 0;
    uVar18 = 0x3f4ccccd;
    uVar16 = 0x3f7ae148;
    pcVar14 = "weapons/egon_windup2.wav";
    uVar12 = 1;
    uVar4 = thunk_FUN_10008500(local_1c);
    (**(code **)(DAT_102e15a8 + 4))(local_8,uVar4,uVar12,pcVar14,uVar16,uVar18,uVar21,uVar23);
  }
  else {
    uVar23 = 100;
    uVar21 = 0;
    uVar18 = 0x3f4ccccd;
    uVar16 = 0x3f666666;
    pcVar14 = "weapons/egon_windup2.wav";
    uVar12 = 1;
    uVar4 = thunk_FUN_10008500(local_1c);
    (**(code **)(DAT_102e15a8 + 4))(local_8,uVar4,uVar12,pcVar14,uVar16,uVar18,uVar21,uVar23);
  }
  bVar1 = thunk_FUN_10042e10(local_8);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar3 = (*DAT_102e1568)(0,3,1);
    (**(code **)(DAT_102e15a8 + 0x40))(*(undefined4 *)(&DAT_10288dc0 + iVar3 * 4));
  }
  if ((((local_20 == 1) &&
       (bVar1 = thunk_FUN_10042e10(local_8), CONCAT31(extraout_var_00,bVar1) != 0)) &&
      (DAT_1028fcac == 0)) && ((DAT_1028fca8 == 0 && (*(float *)(DAT_102e7f18 + 0xc) != 0.0)))) {
    thunk_FUN_10007fe0(local_2c);
    thunk_FUN_10007fe0(local_38);
    thunk_FUN_10007fe0(local_44);
    thunk_FUN_10007fe0(local_50);
    thunk_FUN_10007fe0(local_5c);
    thunk_FUN_10007fe0(local_68);
    thunk_FUN_10007fe0(local_74);
    thunk_FUN_1000c160((int)local_b8);
    iVar3 = (*DAT_102e152c)(local_8);
    if (iVar3 != 0) {
      puVar2 = (undefined4 *)thunk_FUN_10008500(&DAT_102da40c);
      puVar5 = (undefined4 *)thunk_FUN_10008500(local_50);
      *puVar5 = *puVar2;
      iVar6 = thunk_FUN_10008500(&DAT_102da40c);
      iVar7 = thunk_FUN_10008500(local_50);
      *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar6 + 4);
      iVar6 = thunk_FUN_10008500(&DAT_102da40c);
      iVar7 = thunk_FUN_10008500(local_50);
      *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar6 + 8);
      uVar4 = thunk_FUN_10008500(local_74);
      uVar12 = thunk_FUN_10008500(local_68);
      uVar16 = thunk_FUN_10008500(local_5c);
      uVar18 = thunk_FUN_10008500(local_50);
      (*DAT_102e14b8)(uVar18,uVar16,uVar12,uVar4);
      pfVar8 = (float *)thunk_FUN_10008500(iVar3 + 0xb48);
      pfVar9 = (float *)thunk_FUN_10008500(local_2c);
      thunk_FUN_10042e50(param_1,pfVar9,pfVar8);
      pfVar8 = (float *)thunk_FUN_10008500(local_38);
      pfVar9 = (float *)thunk_FUN_10008500(local_5c);
      fVar19 = 2048.0;
      pfVar10 = (float *)thunk_FUN_10008500(local_2c);
      thunk_FUN_10098330(pfVar10,fVar19,pfVar9,pfVar8);
      (**(code **)(DAT_102e15a8 + 0x28))(0,1);
      (**(code **)(DAT_102e15a8 + 0x2c))();
      (**(code **)(DAT_102e15a8 + 0x34))(local_8 - 1);
      (**(code **)(DAT_102e15a8 + 0x38))(2);
      puVar24 = local_b8;
      uVar18 = 0xffffffff;
      uVar16 = 2;
      uVar4 = thunk_FUN_10008500(local_38);
      uVar12 = thunk_FUN_10008500(local_2c);
      (**(code **)(DAT_102e15a8 + 0x3c))(uVar12,uVar4,uVar16,uVar18,puVar24);
      (**(code **)(DAT_102e15a8 + 0x30))();
      uVar12 = (**(code **)(DAT_102e15a8 + 0xc))("sprites/xbeam1.spr");
      uVar25 = 0x41cc0000;
      uVar22 = 0x40a00000;
      uVar20 = 0x40a00000;
      uVar17 = 0x3e19999a;
      uVar15 = 0;
      uVar13 = 0x40a00000;
      uVar11 = 0x3d99999a;
      uVar23 = 0x3e4ccccd;
      uVar21 = 0x40600000;
      uVar18 = 0x47c34f80;
      uVar4 = uVar12;
      uVar16 = thunk_FUN_10008500(local_a4);
      DAT_1028fcac = (**(code **)(DAT_102e15a4 + 0xe4))
                               (local_8 | 0x1000,uVar16,uVar4,uVar18,uVar21,uVar23,uVar11,uVar13,
                                uVar15,uVar17,uVar20,uVar22,uVar25);
      if (DAT_1028fcac != 0) {
        *(uint *)(DAT_1028fcac + 8) = *(uint *)(DAT_1028fcac + 8) | 0x10;
      }
      uVar22 = 0x41cc0000;
      uVar20 = 0x40a00000;
      uVar17 = 0x40a00000;
      uVar15 = 0x3e19999a;
      uVar13 = 0;
      uVar11 = 0x40200000;
      uVar23 = 0x3dcccccd;
      uVar21 = 0x3da3d70a;
      uVar18 = 0x40a00000;
      uVar16 = 0x47c34f80;
      uVar4 = thunk_FUN_10008500(local_a4);
      DAT_1028fca8 = (**(code **)(DAT_102e15a4 + 0xe4))
                               (local_8 | 0x1000,uVar4,uVar12,uVar16,uVar18,uVar21,uVar23,uVar11,
                                uVar13,uVar15,uVar17,uVar20,uVar22);
    }
  }
  return;
}

/* 1000d3f0  FUN_1000d3f0  (239 bytes)
 * undefined FUN_1000d3f0(int param_1)
 * called by: thunk_FUN_1000d3f0
 */
void __cdecl FUN_1000d3f0(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined3 extraout_var;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_14 [12];
  int local_8;
  
  thunk_FUN_10007fe0(local_14);
  local_8 = *(int *)(param_1 + 4);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_14);
  *puVar2 = *(undefined4 *)(param_1 + 8);
  iVar3 = thunk_FUN_10008500(local_14);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0xc);
  iVar3 = thunk_FUN_10008500(local_14);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x10);
  (**(code **)(DAT_102e15a8 + 8))(local_8,6,"weapons/egon_run3.wav");
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar10 = 100;
    uVar9 = 0;
    uVar8 = 0x3f4ccccd;
    uVar7 = 0x3f7ae148;
    pcVar6 = "weapons/egon_off1.wav";
    uVar5 = 1;
    uVar4 = thunk_FUN_10008500(local_14);
    (**(code **)(DAT_102e15a8 + 4))(local_8,uVar4,uVar5,pcVar6,uVar7,uVar8,uVar9,uVar10);
  }
  bVar1 = thunk_FUN_10042e10(local_8);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    if (DAT_1028fcac != 0) {
      *(undefined4 *)(DAT_1028fcac + 0x38) = 0;
      DAT_1028fcac = 0;
    }
    if (DAT_1028fca8 != 0) {
      *(undefined4 *)(DAT_1028fca8 + 0x38) = 0;
      DAT_1028fca8 = 0;
    }
  }
  return;
}

/* 1000d520  FUN_1000d520  (448 bytes)
 * undefined FUN_1000d520(int param_1)
 * called by: thunk_FUN_1000d520
 */
void __cdecl FUN_1000d520(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined4 local_c;
  int local_8;
  
  thunk_FUN_10007fe0(local_18);
  thunk_FUN_10007fe0(local_24);
  thunk_FUN_10007fe0(local_30);
  thunk_FUN_10007fe0(local_3c);
  thunk_FUN_10007fe0(local_48);
  thunk_FUN_10007fe0(local_54);
  local_8 = *(int *)(param_1 + 4);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_18);
  *puVar2 = *(undefined4 *)(param_1 + 8);
  iVar3 = thunk_FUN_10008500(local_18);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0xc);
  iVar3 = thunk_FUN_10008500(local_18);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x10);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_24);
  *puVar2 = *(undefined4 *)(param_1 + 0x14);
  iVar3 = thunk_FUN_10008500(local_24);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x18);
  iVar3 = thunk_FUN_10008500(local_24);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x1c);
  local_c = *(undefined4 *)(param_1 + 0x38);
  bVar1 = thunk_FUN_10042e10(local_8);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar3 = (*DAT_102e1568)(0,2);
    thunk_FUN_100ba810(0,(float)iVar3);
    (**(code **)(DAT_102e15a8 + 0x40))(5,1);
  }
  iVar3 = (*DAT_102e1568)(0,2);
  if (iVar3 == 0) {
    uVar10 = 100;
    uVar9 = 0;
    uVar8 = 0x3f4ccccd;
    uVar7 = 0x3f800000;
    pcVar6 = "agrunt/ag_fire1.wav";
    uVar5 = 1;
    uVar4 = thunk_FUN_10008500(local_18);
    (**(code **)(DAT_102e15a8 + 4))(local_8,uVar4,uVar5,pcVar6,uVar7,uVar8,uVar9,uVar10);
  }
  else if (iVar3 == 1) {
    uVar10 = 100;
    uVar9 = 0;
    uVar8 = 0x3f4ccccd;
    uVar7 = 0x3f800000;
    pcVar6 = "agrunt/ag_fire2.wav";
    uVar5 = 1;
    uVar4 = thunk_FUN_10008500(local_18);
    (**(code **)(DAT_102e15a8 + 4))(local_8,uVar4,uVar5,pcVar6,uVar7,uVar8,uVar9,uVar10);
  }
  else if (iVar3 == 2) {
    uVar10 = 100;
    uVar9 = 0;
    uVar8 = 0x3f4ccccd;
    uVar7 = 0x3f800000;
    pcVar6 = "agrunt/ag_fire3.wav";
    uVar5 = 1;
    uVar4 = thunk_FUN_10008500(local_18);
    (**(code **)(DAT_102e15a8 + 4))(local_8,uVar4,uVar5,pcVar6,uVar7,uVar8,uVar9,uVar10);
  }
  return;
}

/* 1000d750  FUN_1000d750  (427 bytes)
 * undefined FUN_1000d750(int param_1)
 * called by: thunk_FUN_1000d750
 */
void __cdecl FUN_1000d750(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined3 extraout_var;
  float *pfVar6;
  void *pvVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined1 local_a0 [12];
  undefined1 local_94 [12];
  undefined1 local_88 [12];
  undefined1 local_7c [16];
  float local_6c;
  undefined1 local_38 [12];
  float local_2c [3];
  undefined1 local_20 [12];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  thunk_FUN_10007fe0(&local_14);
  thunk_FUN_10007fe0(local_20);
  thunk_FUN_10007fe0(local_2c);
  thunk_FUN_10007fe0(local_38);
  thunk_FUN_1000c160((int)local_7c);
  local_8 = *(int *)(param_1 + 4);
  puVar2 = (undefined4 *)thunk_FUN_10008500(&local_14);
  *puVar2 = *(undefined4 *)(param_1 + 8);
  iVar3 = thunk_FUN_10008500(&local_14);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0xc);
  iVar3 = thunk_FUN_10008500(&local_14);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x10);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_20);
  *puVar2 = *(undefined4 *)(param_1 + 0x14);
  iVar3 = thunk_FUN_10008500(local_20);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x18);
  iVar3 = thunk_FUN_10008500(local_20);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x1c);
  uVar9 = 0;
  uVar8 = 0;
  uVar4 = thunk_FUN_10008500(local_38);
  uVar5 = thunk_FUN_10008500(local_20);
  (*DAT_102e14b8)(uVar5,uVar4,uVar8,uVar9);
  bVar1 = thunk_FUN_10042e10(local_8);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    uVar4 = thunk_FUN_10008500(local_2c);
    (**(code **)(DAT_102e15a8 + 0x18))(uVar4);
    puVar2 = thunk_FUN_1000d970(&local_14,local_88,local_2c);
    local_14 = *puVar2;
    local_10 = puVar2[1];
    local_c = puVar2[2];
    (**(code **)(DAT_102e15a8 + 0x2c))();
    (**(code **)(DAT_102e15a8 + 0x34))(local_8 + -1);
    (**(code **)(DAT_102e15a8 + 0x38))(2);
    puVar10 = local_7c;
    uVar9 = 0xffffffff;
    uVar8 = 0;
    pfVar6 = thunk_FUN_1000cb20(local_38,local_94,128.0);
    pvVar7 = thunk_FUN_1000d970(&local_14,local_a0,pfVar6);
    uVar4 = thunk_FUN_10008500(pvVar7);
    uVar5 = thunk_FUN_10008500(&local_14);
    (**(code **)(DAT_102e15a8 + 0x3c))(uVar5,uVar4,uVar8,uVar9,puVar10);
    if (local_6c < 1.0) {
      (**(code **)(DAT_102e15a8 + 0x40))(6,0);
    }
    (**(code **)(DAT_102e15a8 + 0x30))();
  }
  return;
}

/* 1000d970  FUN_1000d970  (78 bytes)
 * void * FUN_1000d970(void * param_1, float * param_2)
 */
void * __thiscall FUN_1000d970(void *this,void *param_1,float *param_2)

{
  thunk_FUN_1000cae0(param_1,*(float *)this + *param_2,*(float *)((int)this + 4) + param_2[1],
                     *(float *)((int)this + 8) + param_2[2]);
  return param_1;
}

/* 1000d9e0  FUN_1000d9e0  (512 bytes)
 * undefined FUN_1000d9e0(int param_1)
 * called by: thunk_FUN_1000d9e0
 */
void __cdecl FUN_1000d9e0(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined3 extraout_var;
  float *pfVar6;
  float *this;
  void *pvVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined1 local_dc [12];
  undefined1 local_d0 [12];
  undefined1 local_c4 [12];
  undefined1 local_b8 [12];
  undefined1 local_ac [12];
  undefined1 local_a0 [12];
  undefined1 local_94 [12];
  undefined1 local_88 [12];
  int local_7c;
  int local_78;
  float local_6c;
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  thunk_FUN_10007fe0(&local_14);
  thunk_FUN_10007fe0(local_20);
  thunk_FUN_10007fe0(local_2c);
  thunk_FUN_10007fe0(local_38);
  thunk_FUN_1000c160((int)&local_7c);
  local_8 = *(int *)(param_1 + 4);
  puVar2 = (undefined4 *)thunk_FUN_10008500(&local_14);
  *puVar2 = *(undefined4 *)(param_1 + 8);
  iVar3 = thunk_FUN_10008500(&local_14);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0xc);
  iVar3 = thunk_FUN_10008500(&local_14);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x10);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_20);
  *puVar2 = *(undefined4 *)(param_1 + 0x14);
  iVar3 = thunk_FUN_10008500(local_20);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x18);
  iVar3 = thunk_FUN_10008500(local_20);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x1c);
  uVar10 = 0;
  uVar8 = 0;
  uVar4 = thunk_FUN_10008500(local_38);
  uVar5 = thunk_FUN_10008500(local_20);
  (*DAT_102e14b8)(uVar5,uVar4,uVar8,uVar10);
  bVar1 = thunk_FUN_10042e10(local_8);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      pfVar6 = thunk_FUN_10008000(local_94,-0x10,-0x10,-0x12);
      puVar9 = local_a0;
      this = thunk_FUN_10008000(local_88,-0x10,-0x10,-0x24);
      pfVar6 = thunk_FUN_1000ca70(this,puVar9,pfVar6);
      puVar2 = thunk_FUN_1000ca70(&local_14,local_ac,pfVar6);
      local_14 = *puVar2;
      local_10 = puVar2[1];
      local_c = puVar2[2];
    }
    (**(code **)(DAT_102e15a8 + 0x2c))();
    (**(code **)(DAT_102e15a8 + 0x34))(local_8 + -1);
    (**(code **)(DAT_102e15a8 + 0x38))(2);
    pfVar6 = thunk_FUN_1000cb20(local_38,local_b8,64.0);
    pvVar7 = thunk_FUN_1000d970(&local_14,local_c4,pfVar6);
    uVar4 = thunk_FUN_10008500(pvVar7);
    pfVar6 = thunk_FUN_1000cb20(local_38,local_d0,20.0);
    pvVar7 = thunk_FUN_1000d970(&local_14,local_dc,pfVar6);
    uVar5 = thunk_FUN_10008500(pvVar7);
    (**(code **)(DAT_102e15a8 + 0x3c))(uVar5,uVar4);
    if (((local_7c == 0) && (local_78 == 0)) && (0.25 < local_6c)) {
      (**(code **)(DAT_102e15a8 + 0x40))(5,0);
    }
    (**(code **)(DAT_102e15a8 + 0x30))();
  }
  return;
}

/* 1000dc60  FUN_1000dc60  (481 bytes)
 * undefined FUN_1000dc60(int param_1)
 * called by: thunk_FUN_1000dc60
 */
void __cdecl FUN_1000dc60(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  uint *puVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint local_128 [64];
  int local_28;
  undefined4 local_24;
  float local_20;
  uint local_1c;
  ushort local_16;
  undefined1 local_14 [12];
  undefined4 local_8;
  
  thunk_FUN_10007fe0(local_14);
  local_8 = *(undefined4 *)(param_1 + 4);
  puVar1 = (undefined4 *)thunk_FUN_10008500(local_14);
  *puVar1 = *(undefined4 *)(param_1 + 8);
  iVar2 = thunk_FUN_10008500(local_14);
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0xc);
  iVar2 = thunk_FUN_10008500(local_14);
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 0x10);
  local_16 = *(ushort *)(param_1 + 0x38);
  local_28 = *(int *)(param_1 + 0x40);
  local_20 = (float)(local_16 & 0x3f) / 40.0;
  local_1c = (int)(uint)local_16 >> 0xc & 7;
  lVar4 = __ftol();
  local_24 = (undefined4)lVar4;
  switch(local_1c) {
  case 1:
    FUN_100bba20(local_128,(uint *)"plats/ttrain1.wav");
    break;
  case 2:
    FUN_100bba20(local_128,(uint *)"plats/ttrain2.wav");
    break;
  case 3:
    FUN_100bba20(local_128,(uint *)"plats/ttrain3.wav");
    break;
  case 4:
    FUN_100bba20(local_128,(uint *)"plats/ttrain4.wav");
    break;
  case 5:
    FUN_100bba20(local_128,(uint *)"plats/ttrain6.wav");
    break;
  case 6:
    FUN_100bba20(local_128,(uint *)"plats/ttrain7.wav");
    break;
  default:
    FUN_100bba20(local_128,(uint *)"");
    return;
  }
  if (local_28 == 0) {
    uVar9 = 0x80;
    uVar8 = 0x3f4ccccd;
    puVar6 = local_128;
    uVar5 = 6;
    fVar7 = local_20;
    uVar10 = local_24;
    uVar3 = thunk_FUN_10008500(local_14);
    (**(code **)(DAT_102e15a8 + 4))(local_8,uVar3,uVar5,puVar6,fVar7,uVar8,uVar9,uVar10);
  }
  else {
    (**(code **)(DAT_102e15a8 + 8))(local_8,6,local_128);
  }
  return;
}

/* 1000dee0  FUN_1000dee0  (18 bytes)
 * undefined4 FUN_1000dee0(void)
 */
undefined4 FUN_1000dee0(void)

{
  return 0;
}

/* 1000df00  FUN_1000df00  (61 bytes)
 * Dar<char> * FUN_1000df00(Dar<char> * param_1)
 */
Dar<char> * __fastcall FUN_1000df00(Dar<char> *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  vgui::Dar<char>::ensureCapacity(param_1,4);
  return param_1;
}

/* 1000df50  FUN_1000df50  (65 bytes)
 * Dar<char> * FUN_1000df50(int param_1)
 */
Dar<char> * __thiscall FUN_1000df50(void *this,int param_1)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  vgui::Dar<char>::ensureCapacity(this,param_1);
  return this;
}

/* 1000dfb0  FUN_1000dfb0  (218 bytes)
 * undefined FUN_1000dfb0(int param_1)
 */
void __thiscall FUN_1000dfb0(void *this,int param_1)

{
  void *_Dst;
  undefined4 local_14;
  undefined4 local_c;
  
  if (*(int *)((int)this + 4) < param_1) {
    local_c = *(uint *)((int)this + 4);
    if (local_c == 0) {
      local_c = 1;
    }
    for (; (int)local_c < param_1; local_c = local_c << 1) {
    }
    _Dst = operator_new(local_c);
    if (_Dst == (void *)0x0) {
      FUN_100bbc60(0);
    }
    _memset(_Dst,0,local_c);
    *(uint *)((int)this + 4) = local_c;
    for (local_14 = 0; local_14 < *(int *)this; local_14 = local_14 + 1) {
      *(undefined1 *)((int)_Dst + local_14) = *(undefined1 *)(*(int *)((int)this + 8) + local_14);
    }
    FUN_100bbb10(*(void **)((int)this + 8));
    *(void **)((int)this + 8) = _Dst;
  }
  return;
}

/* 1000e0c0  FUN_1000e0c0  (48 bytes)
 * undefined FUN_1000e0c0(int param_1)
 */
void __thiscall FUN_1000e0c0(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 <= *(int *)((int)this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 1000e100  FUN_1000e100  (24 bytes)
 * undefined4 FUN_1000e100(undefined4 * param_1)
 */
undefined4 __fastcall FUN_1000e100(undefined4 *param_1)

{
  return *param_1;
}

/* 1000e120  FUN_1000e120  (68 bytes)
 * undefined FUN_1000e120(undefined1 param_1)
 */
void __thiscall FUN_1000e120(void *this,undefined1 param_1)

{
  vgui::Dar<char>::ensureCapacity(this,*(int *)this + 1);
  *(undefined1 *)(*(int *)((int)this + 8) + *(int *)this) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 1000e180  FUN_1000e180  (78 bytes)
 * uint FUN_1000e180(char param_1)
 */
uint __thiscall FUN_1000e180(void *this,char param_1)

{
  char cVar1;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (*(int *)this <= local_c) {
      return (uint)this & 0xffffff00;
    }
    cVar1 = *(char *)(*(int *)((int)this + 8) + local_c);
    if (cVar1 == param_1) break;
    local_c = local_c + 1;
  }
  return CONCAT31(cVar1 >> 7,1);
}

/* 1000e1f0  FUN_1000e1f0  (56 bytes)
 * undefined FUN_1000e1f0(char param_1)
 */
void __thiscall FUN_1000e1f0(void *this,char param_1)

{
  bool bVar1;
  
  bVar1 = vgui::Dar<char>::hasElement(this,param_1);
  if (!bVar1) {
    vgui::Dar<char>::addElement(this,param_1);
  }
  return;
}

/* 1000e240  FUN_1000e240  (155 bytes)
 * undefined FUN_1000e240(char param_1, int param_2)
 */
void __thiscall FUN_1000e240(void *this,char param_1,int param_2)

{
  int iVar1;
  int local_c;
  
  if ((-1 < param_2) && (param_2 <= *(int *)this)) {
    if ((param_2 == *(int *)this) || (*(int *)this == 0)) {
      vgui::Dar<char>::addElement(this,param_1);
    }
    else {
      vgui::Dar<char>::addElement(this,param_1);
      iVar1 = *(int *)this;
      while (local_c = iVar1 + -1, param_2 < local_c) {
        *(undefined1 *)(*(int *)((int)this + 8) + local_c) =
             *(undefined1 *)(iVar1 + -2 + *(int *)((int)this + 8));
        iVar1 = local_c;
      }
      *(char *)(*(int *)((int)this + 8) + param_2) = param_1;
    }
  }
  return;
}

/* 1000e310  FUN_1000e310  (54 bytes)
 * undefined FUN_1000e310(undefined1 param_1, int param_2)
 */
void __thiscall FUN_1000e310(void *this,undefined1 param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(undefined1 *)(*(int *)((int)this + 8) + param_2) = param_1;
  }
  return;
}

/* 1000e360  FUN_1000e360  (109 bytes)
 * undefined FUN_1000e360(int param_1)
 */
void __thiscall FUN_1000e360(void *this,int param_1)

{
  int local_c;
  
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    for (local_c = param_1; local_c < *(int *)this + -1; local_c = local_c + 1) {
      *(undefined1 *)(*(int *)((int)this + 8) + local_c) =
           *(undefined1 *)(local_c + 1 + *(int *)((int)this + 8));
    }
    *(int *)this = *(int *)this + -1;
  }
  return;
}

/* 1000e3f0  FUN_1000e3f0  (86 bytes)
 * undefined FUN_1000e3f0(char param_1)
 */
void __thiscall FUN_1000e3f0(void *this,char param_1)

{
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (*(int *)this <= local_c) {
      return;
    }
    if (*(char *)(*(int *)((int)this + 8) + local_c) == param_1) break;
    local_c = local_c + 1;
  }
  vgui::Dar<char>::removeElementAt(this,local_c);
  return;
}

/* 1000e460  FUN_1000e460  (28 bytes)
 * undefined FUN_1000e460(undefined4 * param_1)
 */
void __fastcall FUN_1000e460(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

/* 1000e490  FUN_1000e490  (53 bytes)
 * undefined1 FUN_1000e490(int param_1)
 */
undefined1 __thiscall FUN_1000e490(void *this,int param_1)

{
  undefined1 uVar1;
  
  if ((param_1 < 0) || (*(int *)this <= param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(*(int *)((int)this + 8) + param_1);
  }
  return uVar1;
}

/* 1000e4e0  FUN_1000e4e0  (61 bytes)
 * Dar<char*> * FUN_1000e4e0(Dar<char*> * param_1)
 */
Dar<char*> * __fastcall FUN_1000e4e0(Dar<char*> *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  vgui::Dar<char*>::ensureCapacity(param_1,4);
  return param_1;
}

/* 1000e530  FUN_1000e530  (65 bytes)
 * Dar<char*> * FUN_1000e530(int param_1)
 */
Dar<char*> * __thiscall FUN_1000e530(void *this,int param_1)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  vgui::Dar<char*>::ensureCapacity(this,param_1);
  return this;
}

/* 1000e590  FUN_1000e590  (225 bytes)
 * undefined FUN_1000e590(int param_1)
 */
void __thiscall FUN_1000e590(void *this,int param_1)

{
  void *_Dst;
  undefined4 local_14;
  undefined4 local_c;
  
  if (*(int *)((int)this + 4) < param_1) {
    local_c = *(int *)((int)this + 4);
    if (local_c == 0) {
      local_c = 1;
    }
    for (; local_c < param_1; local_c = local_c << 1) {
    }
    _Dst = operator_new(local_c << 2);
    if (_Dst == (void *)0x0) {
      FUN_100bbc60(0);
    }
    _memset(_Dst,0,local_c << 2);
    *(int *)((int)this + 4) = local_c;
    for (local_14 = 0; local_14 < *(int *)this; local_14 = local_14 + 1) {
      *(undefined4 *)((int)_Dst + local_14 * 4) =
           *(undefined4 *)(*(int *)((int)this + 8) + local_14 * 4);
    }
    FUN_100bbb10(*(void **)((int)this + 8));
    *(void **)((int)this + 8) = _Dst;
  }
  return;
}

/* 1000e6b0  FUN_1000e6b0  (48 bytes)
 * undefined FUN_1000e6b0(int param_1)
 */
void __thiscall FUN_1000e6b0(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 <= *(int *)((int)this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 1000e6f0  FUN_1000e6f0  (24 bytes)
 * undefined4 FUN_1000e6f0(undefined4 * param_1)
 */
undefined4 __fastcall FUN_1000e6f0(undefined4 *param_1)

{
  return *param_1;
}

/* 1000e710  FUN_1000e710  (68 bytes)
 * undefined FUN_1000e710(undefined4 param_1)
 */
void __thiscall FUN_1000e710(void *this,undefined4 param_1)

{
  vgui::Dar<char*>::ensureCapacity(this,*(int *)this + 1);
  *(undefined4 *)(*(int *)((int)this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 1000e770  FUN_1000e770  (74 bytes)
 * uint FUN_1000e770(int param_1)
 */
uint __thiscall FUN_1000e770(void *this,int param_1)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (*(int *)this <= local_c) {
      return (uint)this & 0xffffff00;
    }
    iVar1 = *(int *)(*(int *)((int)this + 8) + local_c * 4);
    if (iVar1 == param_1) break;
    local_c = local_c + 1;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

/* 1000e7d0  FUN_1000e7d0  (56 bytes)
 * undefined FUN_1000e7d0(char * param_1)
 */
void __thiscall FUN_1000e7d0(void *this,char *param_1)

{
  bool bVar1;
  
  bVar1 = vgui::Dar<char*>::hasElement(this,param_1);
  if (!bVar1) {
    vgui::Dar<char*>::addElement(this,param_1);
  }
  return;
}

/* 1000e820  FUN_1000e820  (155 bytes)
 * undefined FUN_1000e820(char * param_1, int param_2)
 */
void __thiscall FUN_1000e820(void *this,char *param_1,int param_2)

{
  int local_c;
  
  if ((-1 < param_2) && (param_2 <= *(int *)this)) {
    if ((param_2 == *(int *)this) || (*(int *)this == 0)) {
      vgui::Dar<char*>::addElement(this,param_1);
    }
    else {
      vgui::Dar<char*>::addElement(this,param_1);
      local_c = *(int *)this;
      while (local_c = local_c + -1, param_2 < local_c) {
        *(undefined4 *)(*(int *)((int)this + 8) + local_c * 4) =
             *(undefined4 *)(*(int *)((int)this + 8) + -4 + local_c * 4);
      }
      *(char **)(*(int *)((int)this + 8) + param_2 * 4) = param_1;
    }
  }
  return;
}

/* 1000e8f0  FUN_1000e8f0  (54 bytes)
 * undefined FUN_1000e8f0(undefined4 param_1, int param_2)
 */
void __thiscall FUN_1000e8f0(void *this,undefined4 param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(undefined4 *)(*(int *)((int)this + 8) + param_2 * 4) = param_1;
  }
  return;
}

/* 1000e940  FUN_1000e940  (109 bytes)
 * undefined FUN_1000e940(int param_1)
 */
void __thiscall FUN_1000e940(void *this,int param_1)

{
  int local_c;
  
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    for (local_c = param_1; local_c < *(int *)this + -1; local_c = local_c + 1) {
      *(undefined4 *)(*(int *)((int)this + 8) + local_c * 4) =
           *(undefined4 *)(*(int *)((int)this + 8) + 4 + local_c * 4);
    }
    *(int *)this = *(int *)this + -1;
  }
  return;
}

/* 1000e9d0  FUN_1000e9d0  (82 bytes)
 * undefined FUN_1000e9d0(int param_1)
 */
void __thiscall FUN_1000e9d0(void *this,int param_1)

{
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (*(int *)this <= local_c) {
      return;
    }
    if (*(int *)(*(int *)((int)this + 8) + local_c * 4) == param_1) break;
    local_c = local_c + 1;
  }
  vgui::Dar<char*>::removeElementAt(this,local_c);
  return;
}

/* 1000ea40  FUN_1000ea40  (28 bytes)
 * undefined FUN_1000ea40(undefined4 * param_1)
 */
void __fastcall FUN_1000ea40(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

/* 1000ea70  FUN_1000ea70  (53 bytes)
 * undefined4 FUN_1000ea70(int param_1)
 */
undefined4 __thiscall FUN_1000ea70(void *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (*(int *)this <= param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)((int)this + 8) + param_1 * 4);
  }
  return uVar1;
}

/* 1000eac0  FUN_1000eac0  (61 bytes)
 * Dar<int> * FUN_1000eac0(Dar<int> * param_1)
 */
Dar<int> * __fastcall FUN_1000eac0(Dar<int> *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  vgui::Dar<int>::ensureCapacity(param_1,4);
  return param_1;
}

/* 1000eb10  FUN_1000eb10  (65 bytes)
 * Dar<int> * FUN_1000eb10(int param_1)
 */
Dar<int> * __thiscall FUN_1000eb10(void *this,int param_1)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  vgui::Dar<int>::ensureCapacity(this,param_1);
  return this;
}

/* 1000eb70  FUN_1000eb70  (225 bytes)
 * undefined FUN_1000eb70(int param_1)
 */
void __thiscall FUN_1000eb70(void *this,int param_1)

{
  void *_Dst;
  undefined4 local_14;
  undefined4 local_c;
  
  if (*(int *)((int)this + 4) < param_1) {
    local_c = *(int *)((int)this + 4);
    if (local_c == 0) {
      local_c = 1;
    }
    for (; local_c < param_1; local_c = local_c << 1) {
    }
    _Dst = operator_new(local_c << 2);
    if (_Dst == (void *)0x0) {
      FUN_100bbc60(0);
    }
    _memset(_Dst,0,local_c << 2);
    *(int *)((int)this + 4) = local_c;
    for (local_14 = 0; local_14 < *(int *)this; local_14 = local_14 + 1) {
      *(undefined4 *)((int)_Dst + local_14 * 4) =
           *(undefined4 *)(*(int *)((int)this + 8) + local_14 * 4);
    }
    FUN_100bbb10(*(void **)((int)this + 8));
    *(void **)((int)this + 8) = _Dst;
  }
  return;
}

/* 1000ec90  FUN_1000ec90  (48 bytes)
 * undefined FUN_1000ec90(int param_1)
 */
void __thiscall FUN_1000ec90(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 <= *(int *)((int)this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 1000ecd0  FUN_1000ecd0  (24 bytes)
 * undefined4 FUN_1000ecd0(undefined4 * param_1)
 */
undefined4 __fastcall FUN_1000ecd0(undefined4 *param_1)

{
  return *param_1;
}

/* 1000ecf0  FUN_1000ecf0  (68 bytes)
 * undefined FUN_1000ecf0(undefined4 param_1)
 */
void __thiscall FUN_1000ecf0(void *this,undefined4 param_1)

{
  vgui::Dar<int>::ensureCapacity(this,*(int *)this + 1);
  *(undefined4 *)(*(int *)((int)this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 1000ed50  FUN_1000ed50  (74 bytes)
 * uint FUN_1000ed50(int param_1)
 */
uint __thiscall FUN_1000ed50(void *this,int param_1)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (*(int *)this <= local_c) {
      return (uint)this & 0xffffff00;
    }
    iVar1 = *(int *)(*(int *)((int)this + 8) + local_c * 4);
    if (iVar1 == param_1) break;
    local_c = local_c + 1;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

/* 1000edb0  FUN_1000edb0  (56 bytes)
 * undefined FUN_1000edb0(int param_1)
 */
void __thiscall FUN_1000edb0(void *this,int param_1)

{
  bool bVar1;
  
  bVar1 = vgui::Dar<int>::hasElement(this,param_1);
  if (!bVar1) {
    vgui::Dar<int>::addElement(this,param_1);
  }
  return;
}

/* 1000ee00  FUN_1000ee00  (155 bytes)
 * undefined FUN_1000ee00(int param_1, int param_2)
 */
void __thiscall FUN_1000ee00(void *this,int param_1,int param_2)

{
  int local_c;
  
  if ((-1 < param_2) && (param_2 <= *(int *)this)) {
    if ((param_2 == *(int *)this) || (*(int *)this == 0)) {
      vgui::Dar<int>::addElement(this,param_1);
    }
    else {
      vgui::Dar<int>::addElement(this,param_1);
      local_c = *(int *)this;
      while (local_c = local_c + -1, param_2 < local_c) {
        *(undefined4 *)(*(int *)((int)this + 8) + local_c * 4) =
             *(undefined4 *)(*(int *)((int)this + 8) + -4 + local_c * 4);
      }
      *(int *)(*(int *)((int)this + 8) + param_2 * 4) = param_1;
    }
  }
  return;
}

/* 1000eed0  FUN_1000eed0  (54 bytes)
 * undefined FUN_1000eed0(undefined4 param_1, int param_2)
 */
void __thiscall FUN_1000eed0(void *this,undefined4 param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(undefined4 *)(*(int *)((int)this + 8) + param_2 * 4) = param_1;
  }
  return;
}

/* 1000ef20  FUN_1000ef20  (109 bytes)
 * undefined FUN_1000ef20(int param_1)
 */
void __thiscall FUN_1000ef20(void *this,int param_1)

{
  int local_c;
  
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    for (local_c = param_1; local_c < *(int *)this + -1; local_c = local_c + 1) {
      *(undefined4 *)(*(int *)((int)this + 8) + local_c * 4) =
           *(undefined4 *)(*(int *)((int)this + 8) + 4 + local_c * 4);
    }
    *(int *)this = *(int *)this + -1;
  }
  return;
}

/* 1000efb0  FUN_1000efb0  (82 bytes)
 * undefined FUN_1000efb0(int param_1)
 */
void __thiscall FUN_1000efb0(void *this,int param_1)

{
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (*(int *)this <= local_c) {
      return;
    }
    if (*(int *)(*(int *)((int)this + 8) + local_c * 4) == param_1) break;
    local_c = local_c + 1;
  }
  vgui::Dar<int>::removeElementAt(this,local_c);
  return;
}

/* 1000f020  FUN_1000f020  (28 bytes)
 * undefined FUN_1000f020(undefined4 * param_1)
 */
void __fastcall FUN_1000f020(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

/* 1000f050  FUN_1000f050  (53 bytes)
 * undefined4 FUN_1000f050(int param_1)
 */
undefined4 __thiscall FUN_1000f050(void *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (*(int *)this <= param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)((int)this + 8) + param_1 * 4);
  }
  return uVar1;
}

/* 1000f0a0  FUN_1000f0a0  (61 bytes)
 * Dar<vgui::Button*> * FUN_1000f0a0(Dar<vgui::Button*> * param_1)
 */
Dar<vgui::Button*> * __fastcall FUN_1000f0a0(Dar<vgui::Button*> *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  vgui::Dar<vgui::Button*>::ensureCapacity(param_1,4);
  return param_1;
}

/* 1000f0f0  FUN_1000f0f0  (65 bytes)
 * Dar<vgui::Button*> * FUN_1000f0f0(int param_1)
 */
Dar<vgui::Button*> * __thiscall FUN_1000f0f0(void *this,int param_1)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  vgui::Dar<vgui::Button*>::ensureCapacity(this,param_1);
  return this;
}

/* 1000f150  FUN_1000f150  (225 bytes)
 * undefined FUN_1000f150(int param_1)
 */
void __thiscall FUN_1000f150(void *this,int param_1)

{
  void *_Dst;
  undefined4 local_14;
  undefined4 local_c;
  
  if (*(int *)((int)this + 4) < param_1) {
    local_c = *(int *)((int)this + 4);
    if (local_c == 0) {
      local_c = 1;
    }
    for (; local_c < param_1; local_c = local_c << 1) {
    }
    _Dst = operator_new(local_c << 2);
    if (_Dst == (void *)0x0) {
      FUN_100bbc60(0);
    }
    _memset(_Dst,0,local_c << 2);
    *(int *)((int)this + 4) = local_c;
    for (local_14 = 0; local_14 < *(int *)this; local_14 = local_14 + 1) {
      *(undefined4 *)((int)_Dst + local_14 * 4) =
           *(undefined4 *)(*(int *)((int)this + 8) + local_14 * 4);
    }
    FUN_100bbb10(*(void **)((int)this + 8));
    *(void **)((int)this + 8) = _Dst;
  }
  return;
}

/* 1000f270  FUN_1000f270  (48 bytes)
 * undefined FUN_1000f270(int param_1)
 */
void __thiscall FUN_1000f270(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 <= *(int *)((int)this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 1000f2b0  FUN_1000f2b0  (24 bytes)
 * undefined4 FUN_1000f2b0(undefined4 * param_1)
 */
undefined4 __fastcall FUN_1000f2b0(undefined4 *param_1)

{
  return *param_1;
}

/* 1000f2d0  FUN_1000f2d0  (68 bytes)
 * undefined FUN_1000f2d0(undefined4 param_1)
 */
void __thiscall FUN_1000f2d0(void *this,undefined4 param_1)

{
  vgui::Dar<vgui::Button*>::ensureCapacity(this,*(int *)this + 1);
  *(undefined4 *)(*(int *)((int)this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 1000f330  FUN_1000f330  (74 bytes)
 * uint FUN_1000f330(int param_1)
 */
uint __thiscall FUN_1000f330(void *this,int param_1)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (*(int *)this <= local_c) {
      return (uint)this & 0xffffff00;
    }
    iVar1 = *(int *)(*(int *)((int)this + 8) + local_c * 4);
    if (iVar1 == param_1) break;
    local_c = local_c + 1;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

/* 1000f390  FUN_1000f390  (56 bytes)
 * undefined FUN_1000f390(Button * param_1)
 */
void __thiscall FUN_1000f390(void *this,Button *param_1)

{
  bool bVar1;
  
  bVar1 = vgui::Dar<vgui::Button*>::hasElement(this,param_1);
  if (!bVar1) {
    vgui::Dar<vgui::Button*>::addElement(this,param_1);
  }
  return;
}

/* 1000f3e0  FUN_1000f3e0  (155 bytes)
 * undefined FUN_1000f3e0(Button * param_1, int param_2)
 */
void __thiscall FUN_1000f3e0(void *this,Button *param_1,int param_2)

{
  int local_c;
  
  if ((-1 < param_2) && (param_2 <= *(int *)this)) {
    if ((param_2 == *(int *)this) || (*(int *)this == 0)) {
      vgui::Dar<vgui::Button*>::addElement(this,param_1);
    }
    else {
      vgui::Dar<vgui::Button*>::addElement(this,param_1);
      local_c = *(int *)this;
      while (local_c = local_c + -1, param_2 < local_c) {
        *(undefined4 *)(*(int *)((int)this + 8) + local_c * 4) =
             *(undefined4 *)(*(int *)((int)this + 8) + -4 + local_c * 4);
      }
      *(Button **)(*(int *)((int)this + 8) + param_2 * 4) = param_1;
    }
  }
  return;
}

/* 1000f4b0  FUN_1000f4b0  (54 bytes)
 * undefined FUN_1000f4b0(undefined4 param_1, int param_2)
 */
void __thiscall FUN_1000f4b0(void *this,undefined4 param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(undefined4 *)(*(int *)((int)this + 8) + param_2 * 4) = param_1;
  }
  return;
}

/* 1000f500  FUN_1000f500  (109 bytes)
 * undefined FUN_1000f500(int param_1)
 */
void __thiscall FUN_1000f500(void *this,int param_1)

{
  int local_c;
  
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    for (local_c = param_1; local_c < *(int *)this + -1; local_c = local_c + 1) {
      *(undefined4 *)(*(int *)((int)this + 8) + local_c * 4) =
           *(undefined4 *)(*(int *)((int)this + 8) + 4 + local_c * 4);
    }
    *(int *)this = *(int *)this + -1;
  }
  return;
}

/* 1000f590  FUN_1000f590  (82 bytes)
 * undefined FUN_1000f590(int param_1)
 */
void __thiscall FUN_1000f590(void *this,int param_1)

{
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (*(int *)this <= local_c) {
      return;
    }
    if (*(int *)(*(int *)((int)this + 8) + local_c * 4) == param_1) break;
    local_c = local_c + 1;
  }
  vgui::Dar<vgui::Button*>::removeElementAt(this,local_c);
  return;
}

/* 1000f600  FUN_1000f600  (28 bytes)
 * undefined FUN_1000f600(undefined4 * param_1)
 */
void __fastcall FUN_1000f600(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

/* 1000f630  FUN_1000f630  (53 bytes)
 * undefined4 FUN_1000f630(int param_1)
 */
undefined4 __thiscall FUN_1000f630(void *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (*(int *)this <= param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)((int)this + 8) + param_1 * 4);
  }
  return uVar1;
}

/* 1000f680  FUN_1000f680  (61 bytes)
 * Dar<vgui::SurfaceBase*> * FUN_1000f680(Dar<vgui::SurfaceBase*> * param_1)
 */
Dar<vgui::SurfaceBase*> * __fastcall FUN_1000f680(Dar<vgui::SurfaceBase*> *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  vgui::Dar<vgui::SurfaceBase*>::ensureCapacity(param_1,4);
  return param_1;
}

/* 1000f6d0  FUN_1000f6d0  (65 bytes)
 * Dar<vgui::SurfaceBase*> * FUN_1000f6d0(int param_1)
 */
Dar<vgui::SurfaceBase*> * __thiscall FUN_1000f6d0(void *this,int param_1)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  vgui::Dar<vgui::SurfaceBase*>::ensureCapacity(this,param_1);
  return this;
}

/* 1000f730  FUN_1000f730  (225 bytes)
 * undefined FUN_1000f730(int param_1)
 */
void __thiscall FUN_1000f730(void *this,int param_1)

{
  void *_Dst;
  undefined4 local_14;
  undefined4 local_c;
  
  if (*(int *)((int)this + 4) < param_1) {
    local_c = *(int *)((int)this + 4);
    if (local_c == 0) {
      local_c = 1;
    }
    for (; local_c < param_1; local_c = local_c << 1) {
    }
    _Dst = operator_new(local_c << 2);
    if (_Dst == (void *)0x0) {
      FUN_100bbc60(0);
    }
    _memset(_Dst,0,local_c << 2);
    *(int *)((int)this + 4) = local_c;
    for (local_14 = 0; local_14 < *(int *)this; local_14 = local_14 + 1) {
      *(undefined4 *)((int)_Dst + local_14 * 4) =
           *(undefined4 *)(*(int *)((int)this + 8) + local_14 * 4);
    }
    FUN_100bbb10(*(void **)((int)this + 8));
    *(void **)((int)this + 8) = _Dst;
  }
  return;
}

/* 1000f850  FUN_1000f850  (48 bytes)
 * undefined FUN_1000f850(int param_1)
 */
void __thiscall FUN_1000f850(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 <= *(int *)((int)this + 4))) {
    *(int *)this = param_1;
  }
  return;
}

/* 1000f890  FUN_1000f890  (24 bytes)
 * undefined4 FUN_1000f890(undefined4 * param_1)
 */
undefined4 __fastcall FUN_1000f890(undefined4 *param_1)

{
  return *param_1;
}

/* 1000f8b0  FUN_1000f8b0  (68 bytes)
 * undefined FUN_1000f8b0(undefined4 param_1)
 */
void __thiscall FUN_1000f8b0(void *this,undefined4 param_1)

{
  vgui::Dar<vgui::SurfaceBase*>::ensureCapacity(this,*(int *)this + 1);
  *(undefined4 *)(*(int *)((int)this + 8) + *(int *)this * 4) = param_1;
  *(int *)this = *(int *)this + 1;
  return;
}

/* 1000f910  FUN_1000f910  (74 bytes)
 * uint FUN_1000f910(int param_1)
 */
uint __thiscall FUN_1000f910(void *this,int param_1)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (*(int *)this <= local_c) {
      return (uint)this & 0xffffff00;
    }
    iVar1 = *(int *)(*(int *)((int)this + 8) + local_c * 4);
    if (iVar1 == param_1) break;
    local_c = local_c + 1;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

/* 1000f970  FUN_1000f970  (56 bytes)
 * undefined FUN_1000f970(SurfaceBase * param_1)
 */
void __thiscall FUN_1000f970(void *this,SurfaceBase *param_1)

{
  bool bVar1;
  
  bVar1 = vgui::Dar<vgui::SurfaceBase*>::hasElement(this,param_1);
  if (!bVar1) {
    vgui::Dar<vgui::SurfaceBase*>::addElement(this,param_1);
  }
  return;
}

/* 1000f9c0  FUN_1000f9c0  (155 bytes)
 * undefined FUN_1000f9c0(SurfaceBase * param_1, int param_2)
 */
void __thiscall FUN_1000f9c0(void *this,SurfaceBase *param_1,int param_2)

{
  int local_c;
  
  if ((-1 < param_2) && (param_2 <= *(int *)this)) {
    if ((param_2 == *(int *)this) || (*(int *)this == 0)) {
      vgui::Dar<vgui::SurfaceBase*>::addElement(this,param_1);
    }
    else {
      vgui::Dar<vgui::SurfaceBase*>::addElement(this,param_1);
      local_c = *(int *)this;
      while (local_c = local_c + -1, param_2 < local_c) {
        *(undefined4 *)(*(int *)((int)this + 8) + local_c * 4) =
             *(undefined4 *)(*(int *)((int)this + 8) + -4 + local_c * 4);
      }
      *(SurfaceBase **)(*(int *)((int)this + 8) + param_2 * 4) = param_1;
    }
  }
  return;
}

/* 1000fa90  FUN_1000fa90  (54 bytes)
 * undefined FUN_1000fa90(undefined4 param_1, int param_2)
 */
void __thiscall FUN_1000fa90(void *this,undefined4 param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)this)) {
    *(undefined4 *)(*(int *)((int)this + 8) + param_2 * 4) = param_1;
  }
  return;
}

/* 1000fae0  FUN_1000fae0  (109 bytes)
 * undefined FUN_1000fae0(int param_1)
 */
void __thiscall FUN_1000fae0(void *this,int param_1)

{
  int local_c;
  
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    for (local_c = param_1; local_c < *(int *)this + -1; local_c = local_c + 1) {
      *(undefined4 *)(*(int *)((int)this + 8) + local_c * 4) =
           *(undefined4 *)(*(int *)((int)this + 8) + 4 + local_c * 4);
    }
    *(int *)this = *(int *)this + -1;
  }
  return;
}

