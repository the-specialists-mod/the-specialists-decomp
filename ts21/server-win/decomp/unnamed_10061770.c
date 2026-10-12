/* mp.dll - unnamed_10061770 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10061770  FUN_10061770  (23 bytes)
 * undefined FUN_10061770(undefined4 param_1, undefined4 param_2)
 * called by: FUN_100614e0, FUN_10061b70
 */
void __thiscall FUN_10061770(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x19f8) = param_1;
  *(undefined4 *)((int)this + 0x19fc) = param_2;
  return;
}

/* 10061790  FUN_10061790  (161 bytes)
 * undefined FUN_10061790(undefined4 * param_1)
 * called by: FUN_10061220
 */
void __fastcall FUN_10061790(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  param_1[4] = DAT_1009f4a8;
  param_1[5] = DAT_1009f4ac;
  param_1[6] = DAT_1009f4b0;
  param_1[7] = DAT_1009f4a8;
  param_1[8] = DAT_1009f4ac;
  uVar1 = DAT_1009f4b0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[9] = uVar1;
  param_1[0xd] = DAT_1009f4a8;
  param_1[0xe] = DAT_1009f4ac;
  param_1[0xf] = DAT_1009f4b0;
  param_1[0x10] = DAT_1009f4a8;
  param_1[0x11] = DAT_1009f4ac;
  param_1[0x12] = DAT_1009f4b0;
  puVar3 = param_1 + 0x16;
  for (iVar2 = 0x600; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[0x616] = 0;
  param_1[0x617] = 0;
  return;
}

/* 10061840  FUN_10061840  (367 bytes)
 * undefined FUN_10061840(undefined4 * param_1, float * param_2)
 * called by: FUN_100619b0
 */
void __thiscall FUN_10061840(void *this,undefined4 *param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar2 = (*g_engfuncs.pfnRandomLong)(1,0x10);
  if (((*(float *)((int)this + 0x40) == DAT_1009f4a8) &&
      (*(float *)((int)this + 0x44) == DAT_1009f4ac)) &&
     (*(float *)((int)this + 0x48) == DAT_1009f4b0)) {
    *(float *)((int)this + 0x40) = *param_2;
    *(float *)((int)this + 0x44) = param_2[1];
    *(float *)((int)this + 0x48) = param_2[2];
  }
  fVar3 = (float10)(iVar2 * 0x16) * (float10)0.017453292519943295;
  fVar4 = (float10)fcos(fVar3);
  fStack_5c = (float)fVar4;
  fVar3 = (float10)fsin(fVar3);
  fVar4 = SQRT((float10)fStack_5c * (float10)fStack_5c + fVar3 * fVar3);
  if (fVar4 == (float10)0.0) {
    fStack_5c = 0.0;
    fStack_58 = 0.0;
    fStack_54 = 1.0;
  }
  else {
    fVar4 = (float10)1.0 / fVar4;
    FUN_1000c5f0(&fStack_5c,(float)(fVar4 * (float10)fStack_5c),(float)(fVar4 * fVar3),
                 (float)((float10)0.0 * fVar4));
  }
  iVar2 = (*g_engfuncs.pfnRandomLong)(0x400,0x1000);
  fVar1 = (float)iVar2;
  fStack_4c = fStack_58 * fVar1;
  fStack_48 = fStack_54 * fVar1;
  fStack_44 = fStack_5c * fVar1 + *param_2;
  fStack_40 = fStack_4c + param_2[1];
  fStack_3c = fStack_48 + param_2[2];
  FUN_10067850();
  *param_1 = uStack_24;
  param_1[1] = uStack_20;
  param_1[2] = uStack_1c;
  return;
}

/* 100619b0  FUN_100619b0  (433 bytes)
 * undefined4 FUN_100619b0(int * param_1, undefined4 param_2, int param_3, int param_4)
 * called by: FUN_10061b70
 */
undefined4 __thiscall
FUN_100619b0(void *this,int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  undefined4 local_c [3];
  
  *(int *)((int)this + 0x28) = DAT_1009f4a8;
  *(undefined4 *)((int)this + 0x2c) = DAT_1009f4ac;
  *(undefined4 *)((int)this + 0x30) = DAT_1009f4b0;
  fVar5 = (float10)FUN_100551c0(param_3);
  if ((float10)9.0 <= fVar5 * (float10)3.0) {
    fVar5 = (float10)9.0;
  }
  else {
    fVar5 = (float10)FUN_100551c0(param_3);
    fVar5 = fVar5 * (float10)3.0;
  }
  piVar2 = (int *)((int)this + 0x58);
  *(float *)((int)this + 4) = (float)((float10)gpGlobals->time + fVar5);
  *(float *)((int)this + 8) = gpGlobals->time + 0.5;
  piVar4 = piVar2;
  for (iVar3 = 0x600; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  piVar4 = (int *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x185c) = 0;
  *(int *)((int)this + 0x1858) = 0;
  *piVar4 = DAT_1009f4a8;
  *(undefined4 *)((int)this + 0x20) = DAT_1009f4ac;
  *(undefined4 *)((int)this + 0x24) = DAT_1009f4b0;
  piVar1 = (int *)((int)this + 0x10);
  *piVar1 = DAT_1009f4a8;
  *(undefined4 *)((int)this + 0x14) = DAT_1009f4ac;
  *(undefined4 *)((int)this + 0x18) = DAT_1009f4b0;
  *(int *)((int)this + 0x4c) = DAT_1009f4a8;
  *(undefined4 *)((int)this + 0x50) = DAT_1009f4ac;
  *(undefined4 *)((int)this + 0x54) = DAT_1009f4b0;
  if (*(char *)(param_4 + 0x1908) == '\0') {
    iVar3 = FUN_10063200(&DAT_100d9068,param_2,param_1,piVar2,(int *)((int)this + 0x1858));
    if (iVar3 == 0) {
      piVar2 = (int *)FUN_10061840(this,local_c,(float *)(*(int *)(param_3 + 4) + 8));
    }
    *piVar1 = *piVar2;
    *(int *)((int)this + 0x14) = piVar2[1];
    *(int *)((int)this + 0x18) = piVar2[2];
    *piVar4 = *param_1;
    *(int *)((int)this + 0x20) = param_1[1];
    *(int *)((int)this + 0x24) = param_1[2];
    return 3;
  }
  *piVar1 = *param_1;
  *(int *)((int)this + 0x14) = param_1[1];
  *(int *)((int)this + 0x18) = param_1[2];
  *piVar4 = *param_1;
  *(int *)((int)this + 0x20) = param_1[1];
  *(int *)((int)this + 0x24) = param_1[2];
  *(undefined1 *)(param_4 + 0x1908) = 0;
  return 3;
}

/* 10061b70  FUN_10061b70  (1971 bytes)
 * undefined4 FUN_10061b70(float * param_1, void * param_2, float * param_3)
 * called by: FUN_100614e0
 */
undefined4 __thiscall FUN_10061b70(void *this,float *param_1,void *param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  undefined3 extraout_var;
  float *pfVar7;
  undefined4 *puVar8;
  float10 fVar9;
  float10 fVar10;
  float fVar11;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined4 auStack_50 [2];
  float fStack_48;
  undefined4 auStack_44 [7];
  float fStack_28;
  
  if (((*param_3 == DAT_1009f4a8) && (param_3[1] == DAT_1009f4ac)) && (param_3[2] == DAT_1009f4b0))
  {
    return 1;
  }
  if (gpGlobals->time < *(float *)this) {
    return 2;
  }
  pfVar7 = (float *)((int)this + 0x1c);
  *(float *)this = gpGlobals->time + 0.1;
  if ((((*pfVar7 != *param_3) || (*(float *)((int)this + 0x20) != param_3[1])) ||
      (*(float *)((int)this + 0x24) != param_3[2])) &&
     (iVar6 = FUN_100619b0(this,(int *)param_3,(int)param_1[1] + 8,(int)param_1,(int)param_2),
     iVar6 == 1)) {
LAB_10061e7a:
    *pfVar7 = DAT_1009f4a8;
    *(float *)((int)this + 0x20) = DAT_1009f4ac;
    *(float *)((int)this + 0x24) = DAT_1009f4b0;
    return 1;
  }
  pfVar1 = (float *)((int)this + 0x4c);
  if (((*(float *)((int)this + 0x4c) == DAT_1009f4a8) &&
      (*(float *)((int)this + 0x50) == DAT_1009f4ac)) &&
     (*(float *)((int)this + 0x54) == DAT_1009f4b0)) {
    fVar11 = param_1[1];
    pfVar2 = (float *)((int)this + 0x10);
    fVar3 = *pfVar2 - *(float *)((int)fVar11 + 8);
    fVar4 = *(float *)((int)this + 0x14) - *(float *)((int)fVar11 + 0xc);
    fVar11 = *(float *)((int)this + 0x18) - *(float *)((int)fVar11 + 0x10);
    if ((SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar11 * fVar11) < 48.0) &&
       (FUN_10067850(), 1.0 <= fStack_28)) {
      iVar6 = *(int *)((int)this + 0x185c) + 1;
      *(int *)((int)this + 0x185c) = iVar6;
      if (*(int *)((int)this + 0x1858) <= iVar6) {
        FUN_10061770(param_2,0,0);
        *pfVar2 = DAT_1009f4a8;
        *(float *)((int)this + 0x14) = DAT_1009f4ac;
        *(float *)((int)this + 0x18) = DAT_1009f4b0;
        *pfVar7 = DAT_1009f4a8;
        *(float *)((int)this + 0x20) = DAT_1009f4ac;
        *(float *)((int)this + 0x24) = DAT_1009f4b0;
        return 0;
      }
      *pfVar2 = *(float *)((int)this + iVar6 * 0xc + 0x58);
      *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + iVar6 * 0xc + 0x5c);
      *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + iVar6 * 0xc + 0x60);
      if (((*pfVar2 == DAT_1009f4a8) && (*(float *)((int)this + 0x14) == DAT_1009f4ac)) &&
         (*(float *)((int)this + 0x18) == DAT_1009f4b0)) {
        FUN_10061770(param_2,0,0);
        goto LAB_10061e7a;
      }
    }
  }
  else {
    fVar11 = param_1[1];
    fVar3 = *pfVar1 - *(float *)((int)fVar11 + 8);
    fVar4 = *(float *)((int)this + 0x50) - *(float *)((int)fVar11 + 0xc);
    fVar11 = *(float *)((int)this + 0x54) - *(float *)((int)fVar11 + 0x10);
    if ((SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar11 * fVar11) < 48.0) &&
       (FUN_10067850(), 1.0 <= fStack_28)) {
      *pfVar1 = DAT_1009f4a8;
      *(float *)((int)this + 0x50) = DAT_1009f4ac;
      *(float *)((int)this + 0x54) = DAT_1009f4b0;
    }
  }
  if (*(float *)((int)this + 4) < gpGlobals->time) {
    fVar9 = (float10)FUN_100551c0((int)param_1);
    if ((float10)9.0 <= fVar9 * (float10)3.0) {
      fVar9 = (float10)9.0;
    }
    else {
      fVar9 = (float10)FUN_100551c0((int)param_1);
      fVar9 = fVar9 * (float10)3.0;
    }
    *(float *)((int)this + 4) = (float)((float10)gpGlobals->time + fVar9);
    fVar11 = param_1[1];
    fVar3 = *(float *)((int)this + 0x28) - *(float *)((int)fVar11 + 8);
    fVar4 = *(float *)((int)this + 0x2c) - *(float *)((int)fVar11 + 0xc);
    fVar11 = *(float *)((int)this + 0x30) - *(float *)((int)fVar11 + 0x10);
    if (SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar11 * fVar11) < 96.0) {
      pfVar2 = (float *)((int)this + 0x10);
      *pfVar2 = DAT_1009f4a8;
      *(float *)((int)this + 0x14) = DAT_1009f4ac;
      *(float *)((int)this + 0x18) = DAT_1009f4b0;
      if (((*pfVar2 == DAT_1009f4a8) && (*(float *)((int)this + 0x14) == DAT_1009f4ac)) &&
         (*(float *)((int)this + 0x18) == DAT_1009f4b0)) {
        FUN_10061770(param_2,0,0);
        *pfVar2 = DAT_1009f4a8;
        *(float *)((int)this + 0x14) = DAT_1009f4ac;
        *(float *)((int)this + 0x18) = DAT_1009f4b0;
        *pfVar1 = DAT_1009f4a8;
        *(float *)((int)this + 0x50) = DAT_1009f4ac;
        *(float *)((int)this + 0x54) = DAT_1009f4b0;
        *pfVar7 = DAT_1009f4a8;
        *(float *)((int)this + 0x20) = DAT_1009f4ac;
        *(float *)((int)this + 0x24) = DAT_1009f4b0;
        return 1;
      }
    }
    fVar11 = param_1[1];
    *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((int)fVar11 + 8);
    *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((int)fVar11 + 0xc);
    *(undefined4 *)((int)this + 0x30) = *(undefined4 *)((int)fVar11 + 0x10);
  }
  if (*(float *)((int)this + 8) < gpGlobals->time) {
    *(float *)((int)this + 8) = gpGlobals->time + 0.5;
    fVar11 = param_1[1];
    fStack_60 = *(float *)((int)this + 0x18) - *(float *)((int)fVar11 + 0x10);
    fStack_64 = *(float *)((int)this + 0x14) - *(float *)((int)fVar11 + 0xc);
    fStack_68 = *(float *)((int)this + 0x10) - *(float *)((int)fVar11 + 8);
    UTIL_VecToAngles(auStack_50,&fStack_68);
    FUN_10066df0();
    fVar11 = param_1[1];
    fStack_48 = gpGlobals->v_forward[2] * 64.0;
    fStack_5c = *(float *)((int)fVar11 + 0x174) + *(float *)((int)fVar11 + 8) +
                gpGlobals->v_forward[0] * 64.0;
    fStack_58 = *(float *)((int)fVar11 + 0x178) + *(float *)((int)fVar11 + 0xc) +
                gpGlobals->v_forward[1] * 64.0;
    fStack_54 = *(float *)((int)fVar11 + 0x17c) + *(float *)((int)fVar11 + 0x10) + fStack_48;
    fStack_60 = *(float *)((int)fVar11 + 0x17c) + *(float *)((int)fVar11 + 0x10);
    fStack_64 = *(float *)((int)fVar11 + 0x178) + *(float *)((int)fVar11 + 0xc);
    fStack_68 = *(float *)((int)fVar11 + 0x174) + *(float *)((int)fVar11 + 8);
    FUN_10067850();
    bVar5 = 1.0 <= fStack_28;
    fVar11 = param_1[1];
    fStack_54 = gpGlobals->v_forward[2] * 64.0 + *(float *)((int)fVar11 + 0x10);
    fStack_58 = gpGlobals->v_forward[1] * 64.0 + *(float *)((int)fVar11 + 0xc);
    fStack_5c = gpGlobals->v_forward[0] * 64.0 + *(float *)((int)fVar11 + 8);
    FUN_10067850();
    if (bVar5) {
      if (fStack_28 >= 1.0) goto LAB_100621b9;
      FUN_100613e0(param_2,2,1.0);
      fVar11 = 0.5;
    }
    else {
      if (fStack_28 < 1.0) goto LAB_100621b9;
      fVar11 = 1.0;
    }
    FUN_100613e0(param_2,4,fVar11);
  }
LAB_100621b9:
  bVar5 = FUN_1002b380((int)param_1);
  if (CONCAT31(extraout_var,bVar5) != 0) {
    if (0.0 <= *(float *)((int)param_1[1] + 0x10) - *(float *)((int)this + 0x18)) {
      FUN_100613e0(param_2,0x10,1.0);
      FUN_100613e0(param_2,4,1.0);
      FUN_10061450(param_2,2);
      iVar6 = 8;
    }
    else {
      FUN_100613e0(param_2,8,1.0);
      FUN_100613e0(param_2,4,1.0);
      FUN_10061450(param_2,2);
      iVar6 = 0x10;
    }
    FUN_10061450(param_2,iVar6);
    FUN_10061770(param_2,0,0);
    FUN_100616b0(param_2,param_1);
    FUN_100613b0(param_2,0x80);
  }
  fVar11 = param_1[1];
  pfVar7 = FUN_10062330(this,&fStack_68,(int)param_1);
  fStack_54 = pfVar7[2] - *(float *)((int)fVar11 + 0x10);
  fStack_58 = pfVar7[1] - *(float *)((int)fVar11 + 0xc);
  fStack_5c = *pfVar7 - *(float *)((int)fVar11 + 8);
  puVar8 = (undefined4 *)UTIL_VecToAngles(auStack_44,&fStack_5c);
  auStack_50[0] = *puVar8;
  fVar3 = (float)puVar8[1];
  fStack_48 = (float)puVar8[2];
  fVar9 = FUN_100668f0(*(float *)((int)param_1[1] + 0x54));
  fVar11 = (float)fVar9;
  fVar9 = FUN_100668f0(fVar3);
  fVar10 = ABS(fVar9 - (float10)fVar11);
  if ((float)fVar9 < fVar11 != ((float)fVar9 == fVar11)) {
    fVar10 = ABS((float10)360.0 - fVar10);
  }
  fVar9 = (float10)fsin(fVar10 * (float10)0.017453292519943295);
  fVar10 = (float10)fcos(fVar10 * (float10)0.017453292519943295);
  FUN_10061770(param_2,(float)(fVar10 * (float10)param_1[0x132]),
               (float)-(fVar9 * (float10)param_1[0x132]));
  return 2;
}

/* 10062330  FUN_10062330  (1421 bytes)
 * float * FUN_10062330(float * param_1, int param_2)
 * called by: FUN_10061b70
 */
float * __thiscall FUN_10062330(void *this,float *param_1,int param_2)

{
  globalvars_t *pgVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  float local_68;
  float local_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float afStack_50 [3];
  float local_44 [7];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  int iStack_8;
  
  if (gpGlobals->time < *(float *)((int)this + 0xc)) {
    iVar2 = FUN_100628c0((float *)((int)this + 0x4c),(float *)&DAT_1009f4a8);
    if (iVar2 != 0) {
      *param_1 = *(float *)((int)this + 0x10);
      param_1[1] = *(float *)((int)this + 0x14);
      param_1[2] = *(float *)((int)this + 0x18);
      return param_1;
    }
    *param_1 = *(float *)((int)this + 0x4c);
    param_1[1] = *(float *)((int)this + 0x50);
    param_1[2] = *(float *)((int)this + 0x54);
    return param_1;
  }
  pfVar4 = (float *)((int)this + 0x10);
  *(float *)((int)this + 0xc) = gpGlobals->time + 0.5;
  iVar2 = *(int *)(param_2 + 4);
  local_60 = *(float *)((int)this + 0x18) - *(float *)(iVar2 + 0x10);
  local_64 = *(float *)((int)this + 0x14) - *(float *)(iVar2 + 0xc);
  local_68 = *pfVar4 - *(float *)(iVar2 + 8);
  UTIL_VecToAngles(local_44,&local_68);
  FUN_10066df0();
  iVar2 = *(int *)(param_2 + 4);
  local_60 = gpGlobals->v_forward[2] * 24.0 + *(float *)(iVar2 + 0x10);
  local_64 = gpGlobals->v_forward[1] * 24.0 + *(float *)(iVar2 + 0xc);
  local_68 = gpGlobals->v_forward[0] * 24.0 + *(float *)(iVar2 + 8);
  FUN_10067850();
  pgVar1 = gpGlobals;
  if (fStack_28 < 1.0) {
    iVar2 = 10;
    bVar7 = true;
    pcVar5 = gpGlobals->pStringBase + *(int *)(iStack_8 + 0x80);
    pcVar6 = s_func_door_1009299c;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar7 = *pcVar5 == *pcVar6;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (!bVar7) {
      iVar2 = 0x13;
      bVar7 = true;
      pcVar5 = gpGlobals->pStringBase + *(int *)(iStack_8 + 0x80);
      pcVar6 = s_func_door_rotating_10092988;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar7 = *pcVar5 == *pcVar6;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      } while (bVar7);
      if (!bVar7) {
        FUN_1000c5f0(&local_68,fStack_24 - gpGlobals->v_forward[0] * 48.0,
                     fStack_20 - gpGlobals->v_forward[1] * 48.0,
                     fStack_1c - gpGlobals->v_forward[2] * 48.0);
        *(float *)((int)this + 0x4c) = local_68;
        *(float *)((int)this + 0x50) = local_64;
        *(float *)((int)this + 0x54) = local_60;
        *param_1 = *(float *)((int)this + 0x4c);
        param_1[1] = *(float *)((int)this + 0x50);
        param_1[2] = *(float *)((int)this + 0x54);
        return param_1;
      }
    }
  }
  iVar2 = *(int *)(param_2 + 4);
  FUN_1000c5f0(&local_68,gpGlobals->v_right[0] * 16.0,gpGlobals->v_right[1] * 16.0,
               gpGlobals->v_right[2] * 16.0);
  FUN_1000c5f0(afStack_50,local_68 + *pfVar4,local_64 + *(float *)((int)this + 0x14),
               local_60 + *(float *)((int)this + 0x18));
  FUN_1000c5f0(&fStack_5c,pgVar1->v_right[0] * 16.0,pgVar1->v_right[1] * 16.0,
               pgVar1->v_right[2] * 16.0);
  FUN_1000c5f0(local_44,fStack_5c + *(float *)(iVar2 + 8),fStack_58 + *(float *)(iVar2 + 0xc),
               fStack_54 + *(float *)(iVar2 + 0x10));
  FUN_10067850();
  pgVar1 = gpGlobals;
  if (fStack_28 < 1.0) {
    iVar2 = 10;
    bVar7 = true;
    pcVar5 = gpGlobals->pStringBase + *(int *)(iStack_8 + 0x80);
    pcVar6 = s_func_door_1009299c;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar7 = *pcVar5 == *pcVar6;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (!bVar7) {
      iVar2 = 0x13;
      bVar7 = true;
      pcVar5 = gpGlobals->pStringBase + *(int *)(iStack_8 + 0x80);
      pcVar6 = s_func_door_rotating_10092988;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar7 = *pcVar5 == *pcVar6;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      } while (bVar7);
      if (!bVar7) {
        FUN_1000c5f0(&fStack_5c,gpGlobals->v_right[0] * 48.0,gpGlobals->v_right[1] * 48.0,
                     gpGlobals->v_right[2] * 48.0);
        FUN_1000c5f0(&fStack_5c,fStack_24 - fStack_5c,fStack_20 - fStack_58,fStack_1c - fStack_54);
        *(float *)((int)this + 0x4c) = fStack_5c;
        *(float *)((int)this + 0x50) = fStack_58;
        *(float *)((int)this + 0x54) = fStack_54;
        *param_1 = *(float *)((int)this + 0x4c);
        param_1[1] = *(float *)((int)this + 0x50);
        param_1[2] = *(float *)((int)this + 0x54);
        return param_1;
      }
    }
  }
  iVar2 = *(int *)(param_2 + 4);
  FUN_1000c5f0(&fStack_5c,gpGlobals->v_right[0] * 16.0,gpGlobals->v_right[1] * 16.0,
               gpGlobals->v_right[2] * 16.0);
  FUN_1000c5f0(local_44,*pfVar4 - fStack_5c,*(float *)((int)this + 0x14) - fStack_58,
               *(float *)((int)this + 0x18) - fStack_54);
  FUN_1000c5f0(&local_68,pgVar1->v_right[0] * 16.0,pgVar1->v_right[1] * 16.0,
               pgVar1->v_right[2] * 16.0);
  FUN_1000c5f0(afStack_50,*(float *)(iVar2 + 8) - local_68,*(float *)(iVar2 + 0xc) - local_64,
               *(float *)(iVar2 + 0x10) - local_60);
  FUN_10067850();
  if (fStack_28 < 1.0) {
    iVar2 = 10;
    bVar7 = true;
    pcVar5 = gpGlobals->pStringBase + *(int *)(iStack_8 + 0x80);
    pcVar6 = s_func_door_1009299c;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar7 = *pcVar5 == *pcVar6;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (!bVar7) {
      iVar2 = 0x13;
      bVar7 = true;
      pcVar5 = gpGlobals->pStringBase + *(int *)(iStack_8 + 0x80);
      pcVar6 = s_func_door_rotating_10092988;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar7 = *pcVar5 == *pcVar6;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      } while (bVar7);
      if (!bVar7) {
        FUN_1000c5f0(local_44,gpGlobals->v_right[0] * 48.0,gpGlobals->v_right[1] * 48.0,
                     gpGlobals->v_right[2] * 48.0);
        pfVar3 = (float *)FUN_1000c610(&fStack_24,afStack_50,local_44);
        pfVar4 = (float *)((int)this + 0x4c);
        *pfVar4 = *pfVar3;
        *(float *)((int)this + 0x50) = pfVar3[1];
        *(float *)((int)this + 0x54) = pfVar3[2];
      }
    }
  }
  FUN_1000a540(param_1,pfVar4);
  return param_1;
}

/* 100628c0  FUN_100628c0  (54 bytes)
 * undefined4 FUN_100628c0(float * param_1)
 * called by: FUN_10062330
 */
undefined4 __thiscall FUN_100628c0(void *this,float *param_1)

{
  if (((*(float *)this == *param_1) && (*(float *)((int)this + 4) == param_1[1])) &&
     (*(float *)((int)this + 8) == param_1[2])) {
    return 1;
  }
  return 0;
}

/* 10062900  FUN_10062900  (310 bytes)
 * undefined FUN_10062900(float * param_1, float * param_2, undefined4 param_3)
 * called by: FUN_10062fc0, FUN_10063360
 */
void __cdecl FUN_10062900(float *param_1,float *param_2,int param_3)

{
  undefined4 uStack00000030;
  int in_stack_00000044;
  
  if ((((*param_1 != DAT_1009f4a8) || (param_1[1] != DAT_1009f4ac)) || (param_1[2] != DAT_1009f4b0))
     && (((*param_2 != DAT_1009f4a8 || (param_2[1] != DAT_1009f4ac)) || (param_2[2] != DAT_1009f4b0)
         ))) {
    (*g_engfuncs.pfnMessageBegin)(2,0x17,(float *)0x0,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(0);
    (*g_engfuncs.pfnWriteCoord)(*param_1);
    (*g_engfuncs.pfnWriteCoord)(param_1[1]);
    (*g_engfuncs.pfnWriteCoord)(param_1[2]);
    (*g_engfuncs.pfnWriteCoord)(*param_2);
    (*g_engfuncs.pfnWriteCoord)(param_2[1]);
    (*g_engfuncs.pfnWriteCoord)(param_2[2]);
    (*g_engfuncs.pfnWriteShort)(DAT_102df074);
    (*g_engfuncs.pfnWriteByte)(1);
    (*g_engfuncs.pfnWriteByte)(10);
    (*g_engfuncs.pfnWriteByte)(in_stack_00000044);
    (*g_engfuncs.pfnWriteByte)(0x1e);
    uStack00000030 = 0x100629fa;
    (*g_engfuncs.pfnWriteByte)(0);
    uStack00000030 = 0x10062a02;
    (*g_engfuncs.pfnWriteByte)(0);
    uStack00000030 = 0x10062a0d;
    (*g_engfuncs.pfnWriteByte)(0xff);
    uStack00000030 = 0x10062a15;
    (*g_engfuncs.pfnWriteByte)(0x32);
    uStack00000030 = 0x10062a20;
    (*g_engfuncs.pfnWriteByte)(200);
    uStack00000030 = 0x10062a28;
    (*g_engfuncs.pfnWriteByte)(10);
                    /* WARNING: Could not recover jumptable at 0x10062a2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*g_engfuncs.pfnMessageEnd)();
    return;
  }
  return;
}

/* 10062a40  FUN_10062a40  (260 bytes)
 * undefined FUN_10062a40(undefined4 * param_1, undefined4 param_2)
 * called by: FUN_10062bb0
 */
void FUN_10062a40(undefined4 *param_1,int param_2)

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
  (*g_engfuncs.pfnWriteShort)(DAT_102df074);
  (*g_engfuncs.pfnWriteByte)(1);
  (*g_engfuncs.pfnWriteByte)(10);
  (*g_engfuncs.pfnWriteByte)(in_stack_00000040);
  (*g_engfuncs.pfnWriteByte)(0x1e);
  uStack00000020 = 0x10062b0d;
  (*g_engfuncs.pfnWriteByte)(0);
  uStack00000020 = 0x10062b15;
  (*g_engfuncs.pfnWriteByte)(0);
  uStack00000020 = 0x10062b20;
  (*g_engfuncs.pfnWriteByte)(0xff);
  uStack00000020 = 0x10062b28;
  (*g_engfuncs.pfnWriteByte)(0x32);
  uStack00000020 = 0x10062b33;
  (*g_engfuncs.pfnWriteByte)(200);
  uStack00000020 = 0x10062b3b;
  (*g_engfuncs.pfnWriteByte)(10);
                    /* WARNING: Could not recover jumptable at 0x10062b3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 10062b60  FUN_10062b60  (10 bytes)
 * undefined FUN_10062b60()
 */
void FUN_10062b60(void)

{
  FUN_10062b70((undefined4 *)&DAT_100d9068);
  return;
}

/* 10062b70  FUN_10062b70  (12 bytes)
 * undefined4 * FUN_10062b70(undefined4 * param_1)
 * called by: FUN_10062b60
 */
undefined4 * __fastcall FUN_10062b70(undefined4 *param_1)

{
  FUN_10062b80(param_1);
  return param_1;
}

/* 10062b80  FUN_10062b80  (36 bytes)
 * undefined FUN_10062b80(undefined4 * param_1)
 * called by: FUN_10044810, FUN_10062b70, FUN_100639d0, pfnClientCommand
 */
void __fastcall FUN_10062b80(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  puVar2 = param_1;
  for (iVar1 = 0xa00; puVar2 = puVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
  }
  puVar2 = param_1 + 0xa01;
  for (iVar1 = 0x80000; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

/* 10062bb0  FUN_10062bb0  (157 bytes)
 * undefined FUN_10062bb0(float * param_1, int param_2)
 * called by: CBasePlayer::PreThink, pfnClientCommand
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10062bb0(void *this,float *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = FUN_10062cc0(this,param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_10062c50((int)param_1);
    if ((iVar1 == 0) && (iVar1 = *(int *)this, iVar1 < 0x200)) {
      *(int *)this = iVar1 + 1;
      pfVar4 = param_1;
      pfVar5 = (float *)((int)this + iVar1 * 0x14 + 4);
      for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar5 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar5 = pfVar5 + 1;
      }
      FUN_10062fc0(this,*(int *)this + -1,param_2);
      if ((_DAT_10093c34 == 2.0) || (param_2 != 0)) {
        FUN_10062a40(param_1,10);
        iVar7 = 0;
        iVar6 = 0;
        iVar3 = 0;
        iVar1 = 0;
        puVar2 = UTIL_VarArgs((byte_conflict *)s__debug__i_nodes_100995bc);
        UTIL_ClientPrintAll(3,puVar2,iVar1,iVar3,iVar6,iVar7);
      }
    }
  }
  return;
}

/* 10062c50  FUN_10062c50  (100 bytes)
 * undefined4 FUN_10062c50(int param_1)
 * called by: FUN_10062bb0
 */
undefined4 FUN_10062c50(int param_1)

{
  undefined4 uStack_28;
  
  if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
    FUN_10067850();
    if (1.0 <= uStack_28) {
      return 1;
    }
  }
  return 0;
}

/* 10062cc0  FUN_10062cc0  (139 bytes)
 * undefined4 FUN_10062cc0(float * param_1, int param_2)
 * called by: FUN_10062bb0
 */
undefined4 __thiscall FUN_10062cc0(void *this,float *param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  
  if (param_2 == 0) {
    param_2 = (-(uint)(((uint)param_1[3] & 1) != 0) & 0xffffffa0) + 0x80;
  }
  else {
    param_2 = 8;
  }
  iVar2 = 0;
  if (0 < *(int *)this) {
    pfVar1 = (float *)((int)this + 0xc);
    do {
      if (SQRT((pfVar1[-1] - param_1[1]) * (pfVar1[-1] - param_1[1]) +
               (pfVar1[-2] - *param_1) * (pfVar1[-2] - *param_1) +
               (*pfVar1 - param_1[2]) * (*pfVar1 - param_1[2])) < (float)param_2) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      pfVar1 = pfVar1 + 5;
    } while (iVar2 < *(int *)this);
  }
  return 0;
}

/* 10062d50  FUN_10062d50  (369 bytes)
 * undefined4 FUN_10062d50(void)
 * called by: FUN_10062ed0
 */
undefined4 FUN_10062d50(void)

{
  longlong lVar1;
  undefined4 local_84;
  undefined4 uStack_28;
  
  lVar1 = __ftol();
  local_84 = 1;
  if (0 < (int)lVar1) {
    do {
      FUN_10067850();
      if (1.0 <= uStack_28) {
        return 0;
      }
      local_84 = local_84 + 1;
    } while (local_84 <= (int)lVar1);
  }
  return 1;
}

/* 10062ed0  FUN_10062ed0  (236 bytes)
 * bool FUN_10062ed0(int param_1, int param_2)
 * called by: FUN_10062fc0
 */
bool __thiscall FUN_10062ed0(void *this,int param_1,int param_2)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  bVar1 = *(byte *)((int)this + param_2 * 0x14 + 0x10);
  if ((*(byte *)((int)this + param_1 * 0x14 + 0x10) & 1) == 0) {
    if ((bVar1 & 1) == 0) goto LAB_10062fa3;
  }
  else if (((bVar1 & 1) != 0) &&
          (fVar2 = *(float *)((int)this + param_1 * 0x14 + 4) -
                   *(float *)((int)this + param_2 * 0x14 + 4),
          fVar3 = *(float *)((int)this + param_1 * 0x14 + 8) -
                  *(float *)((int)this + param_2 * 0x14 + 8),
          SQRT(fVar2 * fVar2 + fVar3 * fVar3) < 64.0)) {
    return true;
  }
  fVar2 = *(float *)((int)this + param_1 * 0x14 + 4) - *(float *)((int)this + param_2 * 0x14 + 4);
  fVar3 = *(float *)((int)this + param_1 * 0x14 + 8) - *(float *)((int)this + param_2 * 0x14 + 8);
  if (SQRT(fVar2 * fVar2 + fVar3 * fVar3) < 64.0) {
    return true;
  }
  fVar2 = *(float *)((int)this + param_1 * 0x14 + 4) - *(float *)((int)this + param_2 * 0x14 + 4);
  fVar3 = *(float *)((int)this + param_1 * 0x14 + 8) - *(float *)((int)this + param_2 * 0x14 + 8);
  if ((SQRT(fVar2 * fVar2 + fVar3 * fVar3) < 160.0) &&
     (ABS(*(float *)((int)this + param_1 * 0x14 + 0xc) -
          *(float *)((int)this + param_2 * 0x14 + 0xc)) < 32.0)) {
    return true;
  }
LAB_10062fa3:
  iVar4 = FUN_10062d50();
  return iVar4 != 0;
}

/* 10062fc0  FUN_10062fc0  (399 bytes)
 * undefined FUN_10062fc0(int param_1, int param_2)
 * called by: FUN_10062bb0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10062fc0(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined3 extraout_var;
  int iVar2;
  float *pfVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  longlong lVar7;
  int local_40;
  undefined4 *local_3c;
  float fStack_28;
  int iStack_8;
  
  local_40 = 0;
  if (0 < *(int *)this) {
    local_3c = (undefined4 *)((int)this + param_1 * 8 + 0x2804);
    pfVar3 = (float *)((int)this + 4);
    do {
      if (local_40 != param_1) {
        do {
          do {
            FUN_10067850();
            iVar2 = 10;
            bVar6 = true;
            pcVar4 = gpGlobals->pStringBase + *(int *)(iStack_8 + 0x80);
            pcVar5 = s_func_door_1009299c;
            do {
              if (iVar2 == 0) break;
              iVar2 = iVar2 + -1;
              bVar6 = *pcVar4 == *pcVar5;
              pcVar4 = pcVar4 + 1;
              pcVar5 = pcVar5 + 1;
            } while (bVar6);
          } while (bVar6);
          iVar2 = 0x13;
          bVar6 = true;
          pcVar4 = gpGlobals->pStringBase + *(int *)(iStack_8 + 0x80);
          pcVar5 = s_func_door_rotating_10092988;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar6 = *pcVar4 == *pcVar5;
            pcVar4 = pcVar4 + 1;
            pcVar5 = pcVar5 + 1;
          } while (bVar6);
        } while (bVar6);
        if ((1.0 <= fStack_28) &&
           (bVar6 = FUN_10062ed0(this,param_1,local_40), CONCAT31(extraout_var,bVar6) != 0)) {
          *(undefined1 *)((int)this + (param_1 * 0x200 + local_40) * 8 + 0x2808) = 1;
          puVar1 = (undefined4 *)((int)this + (param_1 * 0x200 + local_40) * 8 + 0x2804);
          lVar7 = __ftol();
          *puVar1 = (int)lVar7;
          *local_3c = (int)lVar7;
          local_3c[1] = puVar1[1];
          if ((_DAT_10093c34 == 2.0) || (param_2 != 0)) {
            FUN_10062900((float *)((int)this + param_1 * 0x14 + 4),pfVar3,10);
          }
        }
      }
      local_40 = local_40 + 1;
      local_3c = local_3c + 0x400;
      pfVar3 = pfVar3 + 5;
    } while (local_40 < *(int *)this);
  }
  return;
}

/* 10063150  FUN_10063150  (40 bytes)
 * undefined FUN_10063150(undefined4 param_1)
 * called by: FUN_10063360
 */
void __thiscall FUN_10063150(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0x204008) < 0x200) {
    *(undefined4 *)((int)this + *(int *)((int)this + 0x204008) * 4 + 0x203808) = param_1;
    *(int *)((int)this + 0x204008) = *(int *)((int)this + 0x204008) + 1;
  }
  return;
}

/* 10063180  FUN_10063180  (38 bytes)
 * undefined4 FUN_10063180(int param_1)
 * called by: FUN_10063360
 */
undefined4 __fastcall FUN_10063180(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x204008);
  uVar2 = 0xffffffff;
  if (0 < iVar1) {
    uVar2 = *(undefined4 *)(param_1 + 0x203804 + iVar1 * 4);
    *(undefined4 *)(param_1 + 0x203804 + iVar1 * 4) = 0xffffffff;
    *(int *)(param_1 + 0x204008) = *(int *)(param_1 + 0x204008) + -1;
  }
  return uVar2;
}

/* 100631b0  FUN_100631b0  (72 bytes)
 * undefined FUN_100631b0(int param_1)
 * called by: FUN_10063360
 */
void __fastcall FUN_100631b0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x202808);
  for (iVar1 = 0x400; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x202804) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x203808);
  for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x204008) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x20400c);
  for (iVar1 = 0x800; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

/* 10063200  FUN_10063200  (338 bytes)
 * undefined FUN_10063200(undefined4 param_1, undefined4 param_2, int * param_3, int * param_4)
 * called by: FUN_100619b0
 */
void __thiscall
FUN_10063200(void *this,undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  float fStack_28;
  
  local_4c = 9999;
  local_48 = 9999;
  iVar1 = 0;
  local_3c = -1;
  local_40 = -1;
  if (0 < *(int *)this) {
    do {
      FUN_10067850();
      if (1.0 <= fStack_28) {
        lVar2 = __ftol();
        if ((int)lVar2 < local_4c) {
          local_4c = (int)lVar2;
          local_3c = iVar1;
        }
      }
      FUN_10067850();
      if (1.0 <= fStack_28) {
        lVar2 = __ftol();
        if ((int)lVar2 < local_48) {
          local_48 = (int)lVar2;
          local_40 = iVar1;
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)this);
  }
  FUN_10063360(this,local_3c,local_40,param_3,param_4);
  return;
}

/* 10063360  FUN_10063360  (1206 bytes)
 * undefined4 FUN_10063360(int param_1, int param_2, int * param_3, int * param_4)
 * called by: FUN_10063200, pfnClientCommand
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10063360(void *this,int param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  longlong lVar14;
  int iVar15;
  int local_214;
  int local_210;
  int local_20c;
  int local_208;
  int local_204;
  char acStack_200 [512];
  
  if ((((param_1 != param_2) && (param_2 < *(int *)this)) && (-1 < param_2)) &&
     ((param_1 < *(int *)this && (-1 < param_1)))) {
    local_210 = 0;
    FUN_100631b0((int)this);
    iVar2 = 0;
    if (0 < *(int *)this) {
      puVar6 = (undefined4 *)((int)this + 0x20400c);
      do {
        *puVar6 = 9999;
        iVar2 = iVar2 + 1;
        puVar6 = puVar6 + 4;
      } while (iVar2 < *(int *)this);
    }
    *(undefined4 *)(param_1 * 0x10 + 0x20400c + (int)this) = 0;
    do {
      iVar2 = 0;
      iVar3 = 0;
      iVar11 = 9999;
      if (0 < *(int *)this) {
        piVar7 = (int *)((int)this + 0x20400c);
        do {
          if (((char)piVar7[3] == '\0') && (*piVar7 < iVar11)) {
            iVar2 = iVar3;
            iVar11 = *piVar7;
          }
          iVar3 = iVar3 + 1;
          piVar7 = piVar7 + 4;
        } while (iVar3 < *(int *)this);
      }
      *(undefined1 *)((int)this + iVar2 * 0x10 + 0x204018) = 1;
      if ((param_2 == iVar2) || (iVar11 == 9999)) break;
      iVar11 = 0;
      if (0 < *(int *)this) {
        piVar7 = (int *)((int)this + 0x20400c);
        piVar4 = (int *)(iVar2 * 0x1000 + 0x2804 + (int)this);
        do {
          if (((char)piVar4[1] != '\0') &&
             (iVar3 = *(int *)((int)this + iVar2 * 0x10 + 0x20400c) + *piVar4, iVar3 < *piVar7)) {
            *piVar7 = iVar3;
          }
          iVar11 = iVar11 + 1;
          piVar4 = piVar4 + 2;
          piVar7 = piVar7 + 4;
        } while (iVar11 < *(int *)this);
      }
      local_210 = local_210 + 1;
    } while (local_210 < 1000);
    iVar2 = 0;
    if (0 < *(int *)this) {
      puVar8 = (undefined1 *)((int)this + 0x204018);
      do {
        *puVar8 = 0;
        iVar2 = iVar2 + 1;
        puVar8 = puVar8 + 0x10;
      } while (iVar2 < *(int *)this);
    }
    local_214 = param_2;
    *(undefined1 *)(param_2 * 0x10 + 0x204018 + (int)this) = 1;
    FUN_10063150(this,param_2);
    local_210 = 0;
    do {
      iVar2 = 0;
      local_208 = 9999;
      local_20c = 9999;
      local_204 = -1;
      if (*(int *)this < 1) {
LAB_100635ae:
        if (*(int *)((int)this + 0x204008) < 2) {
          if (_DAT_10093c34 == 2.0) {
            UTIL_ClientPrintAll(3,s__debug_no_node_found_10099604,0,0,0,0);
          }
          local_214 = -1;
        }
        else {
          *(undefined1 *)(local_214 * 0x10 + 0x204018 + (int)this) = 1;
          local_214 = FUN_10063180((int)this);
          *(undefined1 *)(local_214 * 0x10 + 0x204018 + (int)this) = 0;
        }
      }
      else {
        piVar7 = (int *)((int)this + 0x20400c);
        do {
          if ((((char)piVar7[3] == '\0') && (iVar2 != local_214)) &&
             (*(char *)((int)this + (local_214 * 0x200 + iVar2) * 8 + 0x2808) != '\0')) {
            if (iVar2 == param_1) {
              FUN_10063150(this,iVar2);
              if (_DAT_10093c34 != 2.0) goto LAB_1006367f;
              iVar15 = 0;
              iVar3 = 0;
              iVar11 = 0;
              iVar2 = 0;
              pcVar5 = s__debug_arrived_100995d0;
              goto LAB_10063675;
            }
            if (piVar7[2] == 0) {
              lVar14 = __ftol();
              piVar7[1] = (int)lVar14;
              piVar7[2] = *piVar7 + (int)lVar14;
            }
            if ((*piVar7 < local_208) && (piVar7[2] < local_20c)) {
              local_20c = piVar7[2];
              local_208 = *piVar7;
              local_204 = iVar2;
            }
          }
          iVar2 = iVar2 + 1;
          piVar7 = piVar7 + 4;
        } while (iVar2 < *(int *)this);
        if (local_204 == -1) goto LAB_100635ae;
        *(undefined1 *)(local_204 * 0x10 + 0x204018 + (int)this) = 1;
        FUN_10063150(this,local_204);
        local_214 = local_204;
      }
      local_210 = local_210 + 1;
    } while ((local_210 < 1000) && (local_214 != -1));
    if (_DAT_10093c34 == 2.0) {
      iVar15 = 0;
      iVar3 = 0;
      iVar11 = 0;
      iVar2 = 0;
      pcVar5 = UTIL_VarArgs((byte_conflict *)s__debug__i_passages_100995f0);
LAB_10063675:
      UTIL_ClientPrintAll(3,pcVar5,iVar2,iVar11,iVar3,iVar15);
    }
LAB_1006367f:
    if (1 < *(int *)((int)this + 0x204008)) {
      if (param_3 != (int *)0x0) {
        *param_4 = *(int *)((int)this + 0x204008);
        iVar2 = *(int *)((int)this + 0x204008);
        iVar11 = 0;
        if (0 < iVar2) {
          do {
            iVar2 = iVar2 - iVar11;
            iVar11 = iVar11 + 1;
            piVar7 = (int *)((int)this + *(int *)((int)this + iVar2 * 4 + 0x203804) * 0x14 + 4);
            *param_3 = *piVar7;
            param_3[1] = piVar7[1];
            param_3[2] = piVar7[2];
            iVar2 = *(int *)((int)this + 0x204008);
            param_3 = param_3 + 3;
          } while (iVar11 < iVar2);
        }
      }
      if (_DAT_10093c34 == 2.0) {
        local_20c = FUN_10063180((int)this);
        FUN_1006e69a(acStack_200,(byte_conflict *)s_path__i_100995e8);
        do {
          iVar2 = FUN_10063180((int)this);
          pcVar5 = UTIL_VarArgs(&DAT_100995e4);
          uVar9 = 0xffffffff;
          do {
            pcVar13 = pcVar5;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar13 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar13;
          } while (cVar1 != '\0');
          uVar9 = ~uVar9;
          iVar11 = -1;
          pcVar5 = acStack_200;
          do {
            pcVar12 = pcVar5;
            if (iVar11 == 0) break;
            iVar11 = iVar11 + -1;
            pcVar12 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar12;
          } while (cVar1 != '\0');
          pcVar5 = pcVar13 + -uVar9;
          pcVar13 = pcVar12 + -1;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar13 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar13 = pcVar13 + 1;
          }
          if ((local_20c != -1) && (iVar2 != -1)) {
            FUN_10062900((float *)((int)this + local_20c * 0x14 + 4),
                         (float *)((int)this + iVar2 * 0x14 + 4),100);
          }
          local_20c = iVar2;
        } while (0 < *(int *)((int)this + 0x204008));
        iVar2 = -1;
        pcVar5 = acStack_200;
        do {
          pcVar13 = pcVar5;
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          pcVar13 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar13;
        } while (cVar1 != '\0');
        *(undefined2 *)(pcVar13 + -1) = DAT_100995e0;
        pcVar13[1] = DAT_100995e2;
        UTIL_ClientPrintAll(3,acStack_200,0,0,0,0);
      }
      return 1;
    }
  }
  return 0;
}

/* 100639d0  FUN_100639d0  (382 bytes)
 * undefined FUN_100639d0(int * param_1)
 * called by: FUN_10044810, pfnClientCommand
 */
void __fastcall FUN_100639d0(int *param_1)

{
  char cVar1;
  FILE *pFVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  int *piVar10;
  int *piVar11;
  int iStack_20c;
  int iStack_204;
  char acStack_200 [256];
  char local_100 [256];
  
  (*g_engfuncs.pfnGetGameDir)(local_100);
  iVar3 = -1;
  pcVar6 = local_100;
  do {
    pcVar9 = pcVar6;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar9 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar9;
  } while (cVar1 != '\0');
  *(undefined4 *)(pcVar9 + -1) = DAT_10099624;
  *(undefined2 *)(pcVar9 + 3) = DAT_10099628;
  pcVar9[5] = DAT_1009962a;
  FUN_10062b80(param_1);
  iVar3 = 0;
  do {
    pcVar6 = local_100 + iVar3;
    acStack_200[iVar3] = *pcVar6;
    iVar3 = iVar3 + 1;
  } while (*pcVar6 != '\0');
  uVar4 = 0xffffffff;
  pcVar6 = gpGlobals->pStringBase + gpGlobals->mapname;
  do {
    pcVar9 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar9 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar9;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar3 = -1;
  pcVar6 = acStack_200;
  do {
    pcVar8 = pcVar6;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  pcVar6 = pcVar9 + -uVar4;
  pcVar9 = pcVar8 + -1;
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
  iVar3 = -1;
  pcVar6 = acStack_200;
  do {
    pcVar9 = pcVar6;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar9 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar9;
  } while (cVar1 != '\0');
  *(undefined4 *)(pcVar9 + -1) = DAT_1009961c;
  pcVar9[3] = DAT_10099620;
  pFVar2 = (FILE *)FUN_1006f2ff(acStack_200,&DAT_10099594);
  if (pFVar2 != (FILE *)0x0) {
    uVar4 = FUN_1006f312((char *)&iStack_204,4,1,(int *)pFVar2);
    if ((uVar4 != 0) && (iStack_204 < 0x200)) {
      iVar3 = 0;
      *param_1 = iStack_204;
      if (0 < iStack_204) {
        piVar10 = param_1 + 1;
        do {
          FUN_1006f312((char *)piVar10,0x14,1,(int *)pFVar2);
          iVar3 = iVar3 + 1;
          piVar10 = piVar10 + 5;
        } while (iVar3 < *param_1);
      }
      iVar3 = *param_1;
      iStack_20c = 0;
      if (0 < iVar3) {
        piVar10 = param_1 + 0xa01;
        do {
          iVar7 = 0;
          piVar11 = piVar10;
          if (0 < iVar3) {
            do {
              FUN_1006f312((char *)piVar11,8,1,(int *)pFVar2);
              iVar7 = iVar7 + 1;
              piVar11 = piVar11 + 2;
            } while (iVar7 < *param_1);
          }
          iVar3 = *param_1;
          iStack_20c = iStack_20c + 1;
          piVar10 = piVar10 + 0x400;
        } while (iStack_20c < iVar3);
      }
    }
    FUN_1006f1ef(pFVar2);
  }
  return;
}

/* 10063b50  FUN_10063b50  (333 bytes)
 * undefined FUN_10063b50(int * param_1)
 * called by: pfnClientCommand
 */
void __fastcall FUN_10063b50(int *param_1)

{
  char cVar1;
  int iVar2;
  FILE *pFVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  int *piVar10;
  int *piVar11;
  int local_20c;
  int local_204;
  char local_200 [256];
  char acStack_100 [256];
  
  if (0 < *param_1) {
    iVar2 = 0;
    do {
      cVar1 = (&DAT_10099630)[iVar2];
      acStack_100[iVar2] = cVar1;
      iVar2 = iVar2 + 1;
    } while (cVar1 != '\0');
    iVar2 = 0;
    do {
      pcVar6 = acStack_100 + iVar2;
      local_200[iVar2] = *pcVar6;
      iVar2 = iVar2 + 1;
    } while (*pcVar6 != '\0');
    uVar4 = 0xffffffff;
    pcVar6 = gpGlobals->pStringBase + gpGlobals->mapname;
    do {
      pcVar9 = pcVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar9 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar9;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar2 = -1;
    pcVar6 = local_200;
    do {
      pcVar8 = pcVar6;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    pcVar6 = pcVar9 + -uVar4;
    pcVar9 = pcVar8 + -1;
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
    iVar2 = -1;
    pcVar6 = local_200;
    do {
      pcVar9 = pcVar6;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar9 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar9;
    } while (cVar1 != '\0');
    *(undefined4 *)(pcVar9 + -1) = DAT_1009961c;
    pcVar9[3] = DAT_10099620;
    pFVar3 = (FILE *)FUN_1006f2ff(local_200,&DAT_1009962c);
    if (pFVar3 != (FILE *)0x0) {
      local_204 = *param_1;
      FUN_1006f429((char *)&local_204,4,1,(int *)pFVar3);
      iVar2 = 0;
      if (0 < *param_1) {
        piVar10 = param_1 + 1;
        do {
          FUN_1006f429((char *)piVar10,0x14,1,(int *)pFVar3);
          iVar2 = iVar2 + 1;
          piVar10 = piVar10 + 5;
        } while (iVar2 < *param_1);
      }
      iVar2 = *param_1;
      local_20c = 0;
      if (0 < iVar2) {
        piVar10 = param_1 + 0xa01;
        do {
          iVar7 = 0;
          piVar11 = piVar10;
          if (0 < iVar2) {
            do {
              FUN_1006f429((char *)piVar11,8,1,(int *)pFVar3);
              iVar7 = iVar7 + 1;
              piVar11 = piVar11 + 2;
            } while (iVar7 < *param_1);
          }
          iVar2 = *param_1;
          local_20c = local_20c + 1;
          piVar10 = piVar10 + 0x400;
        } while (local_20c < iVar2);
      }
      FUN_1006f1ef(pFVar3);
    }
  }
  return;
}

/* 10063ca0  FUN_10063ca0  (34 bytes)
 * int FUN_10063ca0(int param_1, int param_2, int param_3)
 * called by: FUN_100576d0, RemoveEntityFromSlowedArray
 */
int __cdecl FUN_10063ca0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      if (*(int *)(param_1 + iVar1 * 4) == param_3) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return -1;
}

/* 10064230  FUN_10064230  (176 bytes)
 * int FUN_10064230(byte.conflict * param_1, char param_2)
 * called by: CTSTeamEscape::WaitTouch
 */
int __cdecl FUN_10064230(byte_conflict *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  byte_conflict *pbVar3;
  uint uVar4;
  int iVar5;
  void *this;
  int iVar6;
  byte_conflict *pbVar7;
  bool bVar8;
  
  iVar6 = 0;
  iVar5 = 1;
  bVar8 = true;
  pbVar3 = param_1;
  pbVar7 = &DAT_1009f428;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar8 = *pbVar3 == *pbVar7;
    pbVar3 = pbVar3 + 1;
    pbVar7 = pbVar7 + 1;
  } while (bVar8);
  iVar5 = 1;
  if (0 < gpGlobals->maxClients) {
    do {
      piVar1 = (int *)UTIL_PlayerByIndex(iVar5);
      if (piVar1 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar1 + 0xa8))();
        if (iVar2 != 0) {
          if (!bVar8) {
            pbVar3 = (byte_conflict *)(**(code **)(*piVar1 + 0xb0))();
            uVar4 = FUN_1007e860(this,param_1,pbVar3);
            if (uVar4 != 0) goto LAB_100642cb;
          }
          if (param_2 != '\0') {
            iVar2 = (**(code **)(*piVar1 + 0x94))();
            if ((iVar2 == 0) && ((float)piVar1[0x1ba] < 0.0)) goto LAB_100642cb;
          }
          iVar6 = iVar6 + 1;
        }
      }
LAB_100642cb:
      iVar5 = iVar5 + 1;
    } while (iVar5 <= gpGlobals->maxClients);
  }
  return iVar6;
}

/* 100648e0  FUN_100648e0  (215 bytes)
 * undefined FUN_100648e0(int param_1)
 * called by: CHalfLifeMultiplay::ClientDisconnected
 */
void __cdecl FUN_100648e0(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar2 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
  if ((-1 < iVar2) && (iVar2 < 0x20)) {
    puVar5 = (undefined4 *)(&DAT_100acb94 + iVar2 * 0x48);
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x170) = 2;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x16c) = 0;
  *(uint *)(*(int *)(param_1 + 4) + 0x1a4) = *(uint *)(*(int *)(param_1 + 4) + 0x1a4) & 0xffffdfff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x164) = 0;
  pcVar3 = &DAT_1009f428;
  *(undefined4 *)(param_1 + 0xa88) = 0;
  *(undefined4 *)(param_1 + 0x6e8) = 0xbf800000;
  do {
    cVar1 = *pcVar3;
    pcVar3[param_1 + -0x1009e988] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x118) = 0x80;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x4ac) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x910) = 0;
  *(undefined1 *)(param_1 + 0x731) = 0;
  FUN_10045910(0x100ac8c0);
  return;
}

/* 100649c0  FUN_100649c0  (96 bytes)
 * int FUN_100649c0(undefined4 param_1)
 * called by: FUN_100605f0
 */
int __cdecl FUN_100649c0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int aiStack_80 [32];
  
  iVar2 = 0;
  iVar1 = UTIL_FindEntityByClassname(0,param_1);
  if (iVar1 != 0) {
    do {
      if (0x1f < iVar2) break;
      aiStack_80[iVar2] = iVar1;
      iVar2 = iVar2 + 1;
      iVar1 = UTIL_FindEntityByClassname(iVar1,param_1);
    } while (iVar1 != 0);
    if (iVar2 != 0) {
      iVar1 = (*g_engfuncs.pfnRandomLong)(0,iVar2 + -1);
      return aiStack_80[iVar1];
    }
  }
  return 0;
}

/* 10064a20  FUN_10064a20  (66 bytes)
 * bool FUN_10064a20(int param_1, undefined4 param_2)
 * called by: CBasePlayer::TSInit, CHalfLifeMultiplay::ClientUserInfoChanged
 */
bool __cdecl FUN_10064a20(int param_1,char *param_2)

{
  char *pcVar1;
  byte_conflict *pbVar2;
  
  if (*(int *)(param_1 + 0x14c) != 0) {
    return false;
  }
  pbVar2 = &DAT_10091cc8;
  pcVar1 = (*g_engfuncs.pfnInfoKeyValue)(param_2,s_cl_lw_10098c58);
  FUN_1006ea8e(pcVar1,pbVar2);
  return param_1 != 1;
}

/* 10064ba0  FUN_10064ba0  (305 bytes)
 * undefined4 FUN_10064ba0(int param_1, int param_2, undefined4 param_3, char * param_4, undefined4 param_5, undefined4 param_6)
 * called by: CTSGun::Deploy
 */
undefined4 __thiscall
FUN_10064ba0(void *this,int param_1,int param_2,undefined4 param_3,char *param_4,undefined4 param_5,
            undefined4 param_6)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  void *this_00;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar3 = (**(code **)(*(int *)this + 0x100))();
  if (iVar3 == 0) {
    return 0;
  }
  *(int *)(*(int *)(*(int *)((int)this + 0x70) + 4) + 0xbc) = param_1 - (int)gpGlobals->pStringBase;
  *(int *)(*(int *)(*(int *)((int)this + 0x70) + 4) + 0xc0) = param_2 - (int)gpGlobals->pStringBase;
  pcVar4 = (char *)(*(int *)((int)this + 0x70) + 0xab0);
  do {
    cVar1 = *param_4;
    param_4 = param_4 + 1;
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  (**(code **)(*(int *)this + 0x150))(param_3,param_5,param_6);
  iVar3 = *(int *)((int)this + 0x70);
  if (*(float *)(iVar3 + 0x694) <= gpGlobals->time) {
    fVar5 = FUN_10066590();
    *(float *)(*(int *)((int)this + 0x70) + 0x118) = (float)(fVar5 + (float10)0.5);
  }
  else {
    fVar5 = FUN_10066590();
    *(float *)(iVar3 + 0x118) =
         (float)(((float10)*(float *)(iVar3 + 0x694) - (float10)gpGlobals->time) + fVar5);
  }
  fVar5 = FUN_10066590();
  *(float *)((int)this + 0x98) = (float)(fVar5 + (float10)3.0);
  uVar2 = *(undefined4 *)(*(int *)(*(int *)((int)this + 0x70) + 4) + 0x208);
  iVar3 = (*g_engfuncs.pfnRandomLong)(0,3);
  iVar3 = iVar3 + 0x62;
  uVar7 = 0;
  uVar6 = 0x3fa00000;
  fVar5 = (float10)(*g_engfuncs.pfnRandomFloat)(0.92,1.0);
  EMIT_SOUND_DYN(this_00,uVar2,2,s_weapons_draw_wav_100998e8,(float)fVar5,uVar6,uVar7,iVar3);
  return 1;
}

/* 10065680  FUN_10065680  (134 bytes)
 * undefined FUN_10065680(int param_1)
 * called by: CTSWorldGun::Fall
 */
void __fastcall FUN_10065680(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x198) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 1;
  FUN_100679a0();
  FUN_10067970();
  *(code **)(param_1 + 0x14) = CTSWorldGun::WaitTouch;
  *(code **)(param_1 + 0x10) = FUN_10048fd0;
  return;
}

/* 10065dc0  FUN_10065dc0  (741 bytes)
 * undefined FUN_10065dc0(int param_1)
 * called by: CTSGroundWeapon::Fall
 */
void __fastcall FUN_10065dc0(int param_1)

{
  int iVar1;
  int iVar2;
  edict_t *peVar3;
  undefined4 *puVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  int local_64;
  float local_60;
  float local_5c;
  float local_58;
  int local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  edict_t *peStack_8;
  
  iVar5 = 9999;
  local_80 = DAT_1009f4b0;
  local_7c = DAT_1009f4a8;
  local_78 = DAT_1009f4ac;
  local_74 = DAT_1009f4b0;
  local_70 = DAT_1009f4a8;
  local_6c = DAT_1009f4ac;
  local_68 = DAT_1009f4b0;
  local_64 = 9999;
  local_54 = 0;
  do {
    iVar2 = local_54;
    fVar6 = (float10)fcos((float10)local_54 * (float10)0.017453292519943295);
    fVar9 = (float)fVar6;
    fVar6 = (float10)fsin((float10)local_54 * (float10)0.017453292519943295);
    fVar7 = SQRT((float10)fVar9 * (float10)fVar9 +
                 fVar6 * fVar6 + (float10)local_80 * (float10)local_80);
    if (fVar7 == (float10)0.0) {
      fVar11 = 1.0;
      fVar10 = 0.0;
      fVar9 = 0.0;
    }
    else {
      fVar7 = (float10)1.0 / fVar7;
      fVar11 = (float)((float10)local_80 * fVar7);
      fVar10 = (float)(fVar7 * fVar6);
      fVar9 = (float)(fVar7 * (float10)fVar9);
    }
    FUN_1000c5f0(&local_50,fVar9,fVar10,fVar11);
    local_44 = local_50 * 1024.0;
    local_80 = local_48;
    iVar1 = *(int *)(param_1 + 4);
    local_40 = local_4c * 1024.0;
    local_58 = local_48 * 1024.0 + *(float *)(iVar1 + 0x10);
    local_5c = local_40 + *(float *)(iVar1 + 0xc);
    local_60 = local_44 + *(float *)(iVar1 + 8);
    FUN_10067850();
    if (((fStack_28 < 1.0) &&
        ((((peVar3 = peStack_8, peStack_8 == (edict_t *)0x0 &&
           (peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar3 == (edict_t *)0x0)) ||
          (peVar3->pvPrivateData == (void *)0x0)) ||
         ((iVar1 = *(int *)((int)peVar3->pvPrivateData + 4), *(int *)(iVar1 + 0x16c) != 0x3f800000
          && (-1 < *(char *)(iVar1 + 0x118))))))) &&
       (iVar1 = *(int *)(param_1 + 4), fVar9 = *(float *)(iVar1 + 8) - fStack_24,
       fVar10 = *(float *)(iVar1 + 0xc) - fStack_20, fVar11 = *(float *)(iVar1 + 0x10) - fStack_1c,
       SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11) < (float)local_64)) {
      lVar8 = __ftol();
      iVar5 = (int)lVar8;
      local_7c = fStack_14;
      local_78 = fStack_10;
      local_74 = fStack_c;
      local_70 = fStack_24;
      local_6c = fStack_20;
      local_68 = fStack_1c;
      local_64 = iVar5;
    }
    local_54 = iVar2 + 0x2d;
  } while (local_54 < 0x168);
  if (0x270e < iVar5) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x58) = 0x42b40000;
    return;
  }
  FUN_1000c5f0(&local_60,local_7c + local_7c + local_70,local_6c + local_78 + local_78,
               local_68 + local_74 + local_74);
  iVar5 = *(int *)(param_1 + 4);
  *(float *)(iVar5 + 8) = local_60;
  *(float *)(iVar5 + 0xc) = local_5c;
  *(float *)(iVar5 + 0x10) = local_58;
  puVar4 = (undefined4 *)UTIL_VecToAngles(&local_60,&local_7c);
  iVar5 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar5 + 0x50) = *puVar4;
  *(undefined4 *)(iVar5 + 0x54) = puVar4[1];
  *(undefined4 *)(iVar5 + 0x58) = puVar4[2];
  *(float *)(*(int *)(param_1 + 4) + 0x50) = *(float *)(*(int *)(param_1 + 4) + 0x50) + 90.0;
  return;
}

/* 10066190  FUN_10066190  (170 bytes)
 * undefined FUN_10066190(int param_1)
 * called by: CTSGroundWeapon::Fall
 */
void __fastcall FUN_10066190(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 5;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 1;
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) & 0xffffff7f;
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 2;
  FUN_100679a0();
  FUN_10067970();
  *(code **)(param_1 + 0x14) = CTSGroundWeapon::WaitTouch;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

/* 10066250  FUN_10066250  (492 bytes)
 * undefined FUN_10066250(int * param_1)
 * called by: CTSGroundWeapon::Use, CTSGroundWeapon::WaitTouch
 */
void __thiscall FUN_10066250(void *this,int *param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  piVar2 = param_1;
  iVar3 = (**(code **)(*param_1 + 0xa8))();
  if (iVar3 == 0) {
    return;
  }
  iVar3 = (**(code **)(*param_1 + 0x94))();
  if (iVar3 == 0) {
    return;
  }
  if ((*(byte *)(param_1[1] + 0x118) & 0x80) != 0) {
    return;
  }
  if ((*(byte *)(*(int *)((int)this + 4) + 0x118) & 0x80) != 0) {
    return;
  }
  iVar3 = CBasePlayer::PickUpWeapon
                    ((CBasePlayer *)param_1,*(uint *)((int)this + 0x8c),(undefined4 *)0x0,
                     *(uint *)(*(int *)((int)this + 4) + 0x1a0),'\x01');
  if (iVar3 == 0) {
    return;
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(uint *)(*(int *)((int)this + 4) + 0x118) = *(uint *)(*(int *)((int)this + 4) + 0x118) | 0x80;
  param_1 = *(int **)((int)this + 0x88);
  if (((int)param_1 < 1) && ((DAT_100ac8c0 == '\x03' || (DAT_100ac8c0 == '\x02')))) {
    *(undefined4 *)((int)this + 0x10) = 0;
    goto LAB_1006634c;
  }
  *(code **)((int)this + 0x10) = CTSGroundWeapon::Fall;
  if ((int)param_1 < 1) {
    fVar1 = 60.0;
  }
  else {
    if ((int)param_1 < 0xb4) {
      if ((int)param_1 < 2) {
        param_1 = (int *)0x1;
      }
      else if (0xb3 < (int)param_1) goto LAB_10066325;
    }
    else {
LAB_10066325:
      param_1 = (int *)0xb4;
    }
    fVar1 = (float)(int)param_1;
  }
  *(float *)(*(int *)((int)this + 4) + 0x104) = fVar1 + gpGlobals->time;
LAB_1006634c:
  uVar4 = *(uint *)((int)this + 0x90) & ((int)*(uint *)((int)this + 0x90) < 1) - 1;
  *(uint *)((int)this + 0x90) = uVar4;
  if ((uVar4 != 0) &&
     (puVar5 = get_weapon_info(*(int *)((int)this + 0x8c)),
     *(int *)(piVar2[0x25a] + 0xc4 + (uint)*(byte *)(puVar5 + 2) * 4) < 1)) {
    iVar3 = *(int *)((int)this + 0x90);
    puVar5 = get_weapon_info(*(int *)((int)this + 0x8c));
    iVar3 = FUN_10049f40((void *)piVar2[0x25a],*(byte_conflict *)(puVar5 + 2),iVar3);
    if (iVar3 != 0) {
      EMIT_SOUND_DYN(*(void **)(piVar2[1] + 0x208),*(void **)(piVar2[1] + 0x208),3,
                     s_items_9mmclip1_wav_100993c8,0x3f800000,0x3f4ccccd,0,100);
    }
  }
  iVar3 = *(int *)(*(int *)((int)this + 4) + 0x1d4);
  if (iVar3 != 0) {
    TSHudMessageOne(0,0,0,1,0x1e,gpGlobals->pStringBase + iVar3,piVar2[1]);
  }
  iVar3 = *(int *)(*(int *)((int)this + 4) + 0x1c8);
  if (iVar3 != 0) {
    FireTargets((int)(gpGlobals->pStringBase + iVar3),this,this,3,0);
  }
  return;
}

/* 10066590  FUN_10066590  (7 bytes)
 * float10 FUN_10066590(void)
 * called by: CBasePlayer::PostThink, CBasePlayer::Restore, CBasePlayer::Spawn, CBasePlayer::TSInit, CBasePlayerWeapon::ItemPostFrame, CTSGun::AlternateAttack, CTSGun::GrenadeIdle, CTSGun::Reload, CTSGun::SecondaryAttack, CTSGun::WeaponIdle, CWeaponCycler::Deploy, CWeaponCycler::Holster, ... (29 total)
 */
float10 FUN_10066590(void)

{
  return (float10)0.0;
}

/* 100665a0  FUN_100665a0  (53 bytes)
 * uint FUN_100665a0(void)
 * called by: FUN_10066640
 */
uint FUN_100665a0(void)

{
  DAT_102df8a0 = DAT_102df8a0 * 0x10dcd + 1 +
                 *(int *)(&DAT_10099c90 + (DAT_102df8a0 * 0x10dcd & 0xff) * 4);
  return DAT_102df8a0 & 0xfffffff;
}

/* 100665e0  FUN_100665e0  (23 bytes)
 * undefined FUN_100665e0(uint param_1)
 * called by: FUN_10066640
 */
void __cdecl FUN_100665e0(uint param_1)

{
  DAT_102df8a0 = *(undefined4 *)(&DAT_10099c90 + (param_1 & 0xff) * 4);
  return;
}

/* 10066640  FUN_10066640  (116 bytes)
 * float10 FUN_10066640(int param_1, float param_2, int param_3)
 * called by: CBasePlayer::ShootBulletsPlayer, FUN_10049b80
 */
float10 __cdecl FUN_10066640(int param_1,float param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  
  FUN_100665e0(param_3 + (int)param_2 + param_1);
  FUN_100665a0();
  FUN_100665a0();
  lVar2 = __ftol();
  if ((int)lVar2 == 0) {
    return (float10)param_2;
  }
  uVar1 = FUN_100665a0();
  return (float10)(uVar1 & 0xffff) * (float10)1.52587890625e-05 * (float10)(int)lVar2 +
         (float10)param_2;
}

/* 10066820  FUN_10066820  (33 bytes)
 * undefined FUN_10066820(undefined4 param_1, undefined4 param_2)
 * called by: pfnAddToFullPack, pfnCmdStart
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10066820(int param_1,int param_2)

{
  _DAT_102df8a4 = param_1;
  DAT_102df8a8 = param_2;
                    /* WARNING: Could not recover jumptable at 0x1006683b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_engfuncs.pfnSetGroupMask)(param_1,param_2);
  return;
}

/* 10066850  FUN_10066850  (24 bytes)
 * undefined FUN_10066850(void)
 * called by: pfnAddToFullPack, pfnCmdEnd
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10066850(void)

{
  _DAT_102df8a4 = 0;
  DAT_102df8a8 = 0;
  (*g_engfuncs.pfnSetGroupMask)(0,0);
  return;
}

/* 100668f0  FUN_100668f0  (122 bytes)
 * float10 FUN_100668f0(float param_1)
 * called by: FUN_1005e9a0, FUN_10060120, FUN_10061b70, FUN_10067a50
 */
float10 __cdecl FUN_100668f0(float param_1)

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

/* 10066b30  FUN_10066b30  (242 bytes)
 * int FUN_10066b30(int param_1, int param_2, float * param_3, float param_4)
 */
int __cdecl FUN_10066b30(int param_1,int param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  edict_t *peVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 1;
  peVar4 = (*g_engfuncs.pfnPEntityOfEntIndex)(1);
  fVar1 = param_4 * param_4;
  iVar5 = 0;
  if (peVar4 == (edict_t *)0x0) {
    return 0;
  }
  if (1 < gpGlobals->maxEntities) {
    do {
      if ((((peVar4->free == 0) && (((peVar4->v).flags & 0x28) != 0)) &&
          (fVar2 = *param_3 - (peVar4->v).origin[0], fVar2 = fVar2 * fVar2, fVar2 <= fVar1)) &&
         (((fVar3 = param_3[1] - (peVar4->v).origin[1], fVar2 = fVar3 * fVar3 + fVar2,
           fVar2 <= fVar1 &&
           (fVar3 = param_3[2] - ((peVar4->v).absmax[2] + (peVar4->v).absmin[2]) * 0.5,
           fVar3 * fVar3 + fVar2 <= fVar1)) && (peVar4->pvPrivateData != (void *)0x0)))) {
        *(void **)(param_1 + iVar5 * 4) = peVar4->pvPrivateData;
        iVar5 = iVar5 + 1;
        if (param_2 <= iVar5) {
          return iVar5;
        }
      }
      iVar6 = iVar6 + 1;
      peVar4 = peVar4 + 1;
    } while (iVar6 < gpGlobals->maxEntities);
  }
  return iVar5;
}

/* 10066c30  FUN_10066c30  (71 bytes)
 * undefined4 FUN_10066c30(int param_1, undefined4 param_2, undefined4 param_3)
 * called by: CBasePlayer::PlayerUse, CFuncTrackTrain::NearestPath, FUN_10011cf0, FUN_10043010, FUN_10055650, FUN_10055700, FUN_10059840, TSExplosion
 */
void * __cdecl FUN_10066c30(int param_1,float *param_2,float param_3)

{
  edict_t *peVar1;
  int iVar2;
  
  if (param_1 == 0) {
    peVar1 = (edict_t *)0x0;
  }
  else {
    peVar1 = *(edict_t **)(*(int *)(param_1 + 4) + 0x208);
  }
  peVar1 = (*g_engfuncs.pfnFindEntityInSphere)(peVar1,param_2,param_3);
  if (peVar1 != (edict_t *)0x0) {
    iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar1);
    if (iVar2 != 0) {
      return peVar1->pvPrivateData;
    }
  }
  return (void *)0;
}

/* 10066c80  FUN_10066c80  (71 bytes)
 * undefined4 FUN_10066c80(int param_1, undefined4 param_2, undefined4 param_3)
 * called by: CTriggerChangeTarget::Use, UTIL_FindEntityByClassname, UTIL_FindEntityByTargetname
 */
void * __cdecl FUN_10066c80(int param_1,char *param_2,char *param_3)

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

/* 10066df0  FUN_10066df0  (6 bytes)
 * undefined FUN_10066df0(void)
 * called by: CBaseMonster::FInViewCone, CBaseMonster::GetDeathActivity, CBaseMonster::GetSmallFlinchActivity, CBasePlayer::CheatImpulseCommands, CBasePlayer::ImpulseCommands, CBasePlayer::PlayerUse, CBasePlayer::PreThink, CBasePlayer::ThrowWeapon, CBreakable::Use, CFuncTrackTrain::OnControls, CTSGun::AlternateAttack, CTSGun::GrenadeIdle, ... (33 total)
 */
void FUN_10066df0(void)

{
  float *in_stack_00000004;
  
                    /* WARNING: Could not recover jumptable at 0x10066df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_engfuncs.pfnMakeVectors)(in_stack_00000004);
  return;
}

/* 10066e00  FUN_10066e00  (44 bytes)
 * undefined FUN_10066e00(float * param_1)
 * called by: CEnvLight::Spawn, CFuncTankGun::Fire, CFuncTankLaser::Fire, CFuncTankMortar::Fire
 */
void __cdecl FUN_10066e00(float *param_1)

{
  float local_c;
  float local_8;
  float local_4;
  
  local_8 = param_1[1];
  local_4 = param_1[2];
  local_c = -*param_1;
  (*g_engfuncs.pfnMakeVectors)(&local_c);
  return;
}

/* 100670c0  FUN_100670c0  (33 bytes)
 * int FUN_100670c0(void)
 * called by: FUN_10067110, FUN_100672d0, UTIL_ScreenShake
 */
int FUN_100670c0(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = __ftol();
  iVar1 = (int)lVar2;
  if (iVar1 < 0) {
    return 0;
  }
  if (0xffff < iVar1) {
    iVar1 = 0xffff;
  }
  return iVar1;
}

/* 10067110  FUN_10067110  (101 bytes)
 * undefined FUN_10067110(undefined2 * param_1)
 * called by: UTIL_ScreenFade, UTIL_ScreenFadeAll
 */
void __cdecl FUN_10067110(undefined2 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 in_stack_00000014;
  undefined2 in_stack_00000018;
  
  iVar1 = FUN_100670c0();
  *param_1 = (short)iVar1;
  iVar1 = FUN_100670c0();
  param_1[1] = (short)iVar1;
  lVar2 = __ftol();
  *(char *)(param_1 + 3) = (char)lVar2;
  lVar2 = __ftol();
  *(char *)((int)param_1 + 7) = (char)lVar2;
  lVar2 = __ftol();
  *(char *)(param_1 + 4) = (char)lVar2;
  *(undefined1 *)((int)param_1 + 9) = in_stack_00000014;
  param_1[2] = in_stack_00000018;
  return;
}

/* 10067180  FUN_10067180  (153 bytes)
 * undefined FUN_10067180(undefined2 * param_1, int * param_2)
 * called by: UTIL_ScreenFade, UTIL_ScreenFadeAll
 */
void __cdecl FUN_10067180(undefined2 *param_1,int *param_2)

{
  int iVar1;
  ushort *in_stack_00000014;
  
  if (param_2 != (int *)0x0) {
    iVar1 = (**(code **)(*param_2 + 0xac))();
    if (iVar1 != 0) {
      (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbbb0,(float *)0x0,*(edict_t **)(param_2[1] + 0x208));
      (*g_engfuncs.pfnWriteShort)((uint)*in_stack_00000014);
      (*g_engfuncs.pfnWriteShort)((uint)in_stack_00000014[1]);
      (*g_engfuncs.pfnWriteShort)((int)(short)in_stack_00000014[2]);
      (*g_engfuncs.pfnWriteByte)((uint)(byte)in_stack_00000014[3]);
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)((int)in_stack_00000014 + 7));
      (*g_engfuncs.pfnWriteByte)((uint)(byte)in_stack_00000014[4]);
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)((int)in_stack_00000014 + 9));
                    /* WARNING: Could not recover jumptable at 0x10067211. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_engfuncs.pfnMessageEnd)();
      return;
    }
  }
  return;
}

/* 100672d0  FUN_100672d0  (466 bytes)
 * undefined FUN_100672d0(int * param_1, undefined4 * param_2, char * param_3)
 * called by: CGameText::Use, FUN_100674e0
 */
void __cdecl FUN_100672d0(int *param_1,undefined4 *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int in_stack_0000001c;
  char *in_stack_00000060;
  char acStack_1ac [428];
  
  if (param_1 != (int *)0x0) {
    iVar2 = (**(code **)(*param_1 + 0xac))();
    if (iVar2 != 0) {
      (*g_engfuncs.pfnMessageBegin)(1,0x17,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
      (*g_engfuncs.pfnWriteByte)(0x1d);
      (*g_engfuncs.pfnWriteByte)(*(uint *)(in_stack_0000001c + 0x24) & 0xff);
      iVar2 = FUN_100674b0();
      (*g_engfuncs.pfnWriteShort)((int)(short)iVar2);
      iVar2 = FUN_100674b0();
      (*g_engfuncs.pfnWriteShort)((int)(short)iVar2);
      (*g_engfuncs.pfnWriteByte)(*(int *)(in_stack_0000001c + 8));
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)(in_stack_0000001c + 0xc));
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)(in_stack_0000001c + 0xd));
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)(in_stack_0000001c + 0xe));
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)(in_stack_0000001c + 0xf));
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)(in_stack_0000001c + 0x10));
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)(in_stack_0000001c + 0x11));
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)(in_stack_0000001c + 0x12));
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)(in_stack_0000001c + 0x13));
      uVar3 = FUN_100670c0();
      (*g_engfuncs.pfnWriteShort)(uVar3 & 0xffff);
      uVar3 = FUN_100670c0();
      (*g_engfuncs.pfnWriteShort)(uVar3 & 0xffff);
      uVar3 = FUN_100670c0();
      (*g_engfuncs.pfnWriteShort)(uVar3 & 0xffff);
      if (*(int *)(in_stack_0000001c + 8) == 2) {
        uVar3 = FUN_100670c0();
        (*g_engfuncs.pfnWriteShort)(uVar3 & 0xffff);
      }
      uVar3 = 0xffffffff;
      pcVar4 = in_stack_00000060;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (~uVar3 - 1 < 0x200) {
        (*g_engfuncs.pfnWriteString)(in_stack_00000060);
      }
      else {
        _strncpy(acStack_1ac,in_stack_00000060,0x1ff);
        (*g_engfuncs.pfnWriteString)(acStack_1ac);
      }
                    /* WARNING: Could not recover jumptable at 0x10067494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*g_engfuncs.pfnMessageEnd)();
      return;
    }
  }
  return;
}

/* 100674b0  FUN_100674b0  (39 bytes)
 * int FUN_100674b0(void)
 * called by: FUN_100672d0
 */
int FUN_100674b0(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = __ftol();
  iVar1 = (int)lVar2;
  if (0x7fff < iVar1) {
    return 0x7fff;
  }
  if (iVar1 < -0x8000) {
    iVar1 = -0x8000;
  }
  return iVar1;
}

/* 100674e0  FUN_100674e0  (72 bytes)
 * undefined FUN_100674e0(undefined4 * param_1, char * param_2)
 * called by: CGameText::Use
 */
void __cdecl FUN_100674e0(undefined4 *param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 1;
  if (0 < gpGlobals->maxClients) {
    do {
      piVar1 = (int *)UTIL_PlayerByIndex(iVar2);
      if (piVar1 != (int *)0x0) {
        FUN_100672d0(piVar1,param_1,param_2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= gpGlobals->maxClients);
  }
  return;
}

/* 100675b0  FUN_100675b0  (131 bytes)
 * undefined FUN_100675b0(int param_1, undefined4 param_2, undefined4 param_3, int param_4, int param_5, int param_6, int param_7)
 * called by: CBasePlayer::PreThink, CHalfLifeMultiplay::PlayerKilled, CTSBomb::Use, CTSGameRules::PlayerVote, CTSHack::Use, Host_Say, pfnClientCommand
 */
void FUN_100675b0(int param_1,int param_2,char *param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  char *in_stack_00000020;
  char *in_stack_00000028;
  char *in_stack_00000030;
  char *in_stack_00000034;
  char *in_stack_00000038;
  
  (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbc24,(float *)0x0,*(edict_t **)(param_1 + 0x208));
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
                    /* WARNING: Could not recover jumptable at 0x1006762d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 10067640  FUN_10067640  (91 bytes)
 * undefined FUN_10067640(undefined4 param_1, int * param_2)
 * called by: CHalfLifeMultiplay::ClientUserInfoChanged, CHalfLifeTeamplay::ClientUserInfoChanged, CHalfLifeTeamplay::InitHUD
 */
void __cdecl FUN_10067640(char *param_1,int *param_2)

{
  int iVar1;
  char *in_stack_0000001c;
  
  iVar1 = (**(code **)(*param_2 + 0xac))();
  if (iVar1 != 0) {
    (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbc20,(float *)0x0,*(edict_t **)(param_2[1] + 0x208));
    iVar1 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_2[1] + 0x208));
    (*g_engfuncs.pfnWriteByte)(iVar1);
    (*g_engfuncs.pfnWriteString)(in_stack_0000001c);
                    /* WARNING: Could not recover jumptable at 0x10067693. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*g_engfuncs.pfnMessageEnd)();
    return;
  }
  return;
}

/* 100676a0  FUN_100676a0  (65 bytes)
 * undefined FUN_100676a0(undefined4 param_1, int param_2)
 * called by: CHalfLifeTeamplay::ClientUserInfoChanged
 */
void FUN_100676a0(char *param_1,int param_2)

{
  int iValue;
  int in_stack_00000018;
  char *in_stack_0000001c;
  
  (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbc20,(float *)0x0,(edict_t *)0x0);
  iValue = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)(in_stack_00000018 + 4) + 0x208));
  (*g_engfuncs.pfnWriteByte)(iValue);
  (*g_engfuncs.pfnWriteString)(in_stack_0000001c);
                    /* WARNING: Could not recover jumptable at 0x100676db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 100676f0  FUN_100676f0  (29 bytes)
 * undefined * FUN_100676f0(void)
 * called by: FUN_10023a60, FUN_10024670
 */
undefined * FUN_100676f0(void)

{
  FUN_1006e69a(&DAT_102df890,&DAT_100945a0);
  return &DAT_102df890;
}

/* 10067810  FUN_10067810  (59 bytes)
 * undefined FUN_10067810(undefined4 param_1, undefined4 param_2, int param_3, int param_4, undefined4 param_5, undefined4 param_6)
 * called by: CBaseEntity::FVisible, CTSSlowMotionPoint::WaitThink, FUN_10043010, FUN_100576d0
 */
void __cdecl
FUN_10067810(float *param_1,float *param_2,int param_3,int param_4,edict_t *param_5,
            TraceResult *param_6)

{
  (*g_engfuncs.pfnTraceLine)
            (param_1,param_2,-(uint)(param_4 != 0) & 0x100 | (uint)(param_3 == 1),param_5,param_6);
  return;
}

/* 10067850  FUN_10067850  (22 bytes)
 * undefined FUN_10067850(void)
 * called by: CBaseEntity::TraceBleed, CBasePlayer::CheatImpulseCommands, CBasePlayer::ImpulseCommands, CBasePlayer::PlayerUse, CBasePlayer::PreThink, CBasePlayer::ShootBulletsPlayer, CBlood::Use, CDecal::StaticDecal, CDecal::TriggerDecal, CEnvExplosion::Use, CGib::BounceGibTouch, CGib::StickyGibTouch, ... (45 total)
 */
void FUN_10067850(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  int in_stack_0000000c;
  edict_t *in_stack_00000010;
  TraceResult *in_stack_00000014;
  
                    /* WARNING: Could not recover jumptable at 0x10067860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_engfuncs.pfnTraceLine)
            (in_stack_00000004,in_stack_00000008,(uint)(in_stack_0000000c == 1),in_stack_00000010,
             in_stack_00000014);
  return;
}

/* 10067870  FUN_10067870  (22 bytes)
 * undefined FUN_10067870(void)
 * called by: CBaseMonster::GetDeathActivity, FUN_10056dd0, FUN_1005c680
 */
void FUN_10067870(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  edict_t *in_stack_00000014;
  TraceResult *in_stack_00000018;
  
                    /* WARNING: Could not recover jumptable at 0x10067880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_engfuncs.pfnTraceHull)
            (in_stack_00000004,in_stack_00000008,(uint)(in_stack_0000000c == 1),in_stack_00000010,
             in_stack_00000014,in_stack_00000018);
  return;
}

/* 10067890  FUN_10067890  (6 bytes)
 * undefined FUN_10067890(void)
 * called by: CGamePlayerZone::Use
 */
void FUN_10067890(void)

{
  float *in_stack_00000004;
  float *in_stack_00000008;
  int in_stack_0000000c;
  edict_t *in_stack_00000010;
  TraceResult *in_stack_00000014;
  
                    /* WARNING: Could not recover jumptable at 0x10067890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_engfuncs.pfnTraceModel)
            (in_stack_00000004,in_stack_00000008,in_stack_0000000c,in_stack_00000010,
             in_stack_00000014);
  return;
}

/* 100678a0  FUN_100678a0  (201 bytes)
 * undefined FUN_100678a0(undefined4 * param_1)
 * called by: CTSKnife::BounceTouch, CTSShrapnel::BounceTouch, CTSWorldGun::BounceTouch
 */
void __cdecl FUN_100678a0(undefined4 *param_1)

{
  float fVar1;
  edict_t *peVar2;
  vec_t vVar3;
  vec_t vVar4;
  vec_t vVar5;
  vec_t vVar6;
  vec_t vVar7;
  int iVar8;
  vec_t vVar9;
  globalvars_t *pgVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  pgVar10 = gpGlobals;
  lVar11 = __ftol();
  lVar12 = __ftol();
  lVar13 = __ftol();
  lVar14 = __ftol();
  peVar2 = pgVar10->trace_ent;
  vVar3 = pgVar10->trace_endpos[0];
  vVar4 = pgVar10->trace_endpos[1];
  vVar5 = pgVar10->trace_endpos[2];
  vVar6 = pgVar10->trace_plane_normal[0];
  fVar1 = pgVar10->trace_plane_dist;
  vVar7 = pgVar10->trace_plane_normal[1];
  iVar8 = pgVar10->trace_hitgroup;
  vVar9 = pgVar10->trace_plane_normal[2];
  param_1[4] = pgVar10->trace_fraction;
  param_1[3] = (int)lVar14;
  *param_1 = (int)lVar11;
  param_1[1] = (int)lVar12;
  param_1[2] = (int)lVar13;
  param_1[5] = vVar3;
  param_1[6] = vVar4;
  param_1[7] = vVar5;
  param_1[8] = fVar1;
  param_1[9] = vVar6;
  param_1[10] = vVar7;
  param_1[0xb] = vVar9;
  param_1[0xd] = iVar8;
  param_1[0xc] = peVar2;
  return;
}

/* 10067970  FUN_10067970  (20 bytes)
 * undefined FUN_10067970(void)
 * called by: CBaseEntity::Restore, CBaseMonster::MonsterInitDead, CBasePlayer::Restore, CBasePlayer::Spawn, CBeam::RelinkBeam, CCycler::GenericCyclerSpawn, CFuncTankControls::Spawn, CFuncTrackTrain::Spawn, CFuncTrain::Spawn, CFuncTrainControls::Spawn, CItem::Spawn, CItemSoda::CanThink, ... (52 total)
 */
void FUN_10067970(void)

{
  int in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  
                    /* WARNING: Could not recover jumptable at 0x1006797e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_engfuncs.pfnSetSize)
            (*(edict_t **)(in_stack_00000004 + 0x208),in_stack_00000008,in_stack_0000000c);
  return;
}

/* 100679a0  FUN_100679a0  (20 bytes)
 * undefined FUN_100679a0(void)
 * called by: CBaseDoor::BreakableRespawn, CBaseDoor::SetToggleState, CBaseDoor::Spawn, CBaseMonster::CorpseFallThink, CBaseMonster::MonsterInitDead, CBasePlayer::StartObserver, CBasePlayerItem::Materialize, CBaseSpectator::SpectatorImpulseCommand, CBaseToggle::LinearMoveDone, CBaseTrigger::TeleportTouch, CBaseTrigger::ToggleUse, CBeam::RelinkBeam, ... (73 total)
 */
void FUN_100679a0(void)

{
  int in_stack_00000004;
  float *in_stack_00000008;
  
                    /* WARNING: Could not recover jumptable at 0x100679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_engfuncs.pfnSetOrigin)(*(edict_t **)(in_stack_00000004 + 0x208),in_stack_00000008);
  return;
}

/* 10067a10  FUN_10067a10  (63 bytes)
 * float10 FUN_10067a10(float param_1, float param_2, float param_3)
 * called by: FUN_1003cb30
 */
float10 __cdecl FUN_10067a10(float param_1,float param_2,float param_3)

{
  if (param_3 < param_1 - param_2) {
    return (float10)param_2 + (float10)param_3;
  }
  if (param_1 - param_2 < -param_3) {
    return (float10)param_2 - (float10)param_3;
  }
  return (float10)param_1;
}

/* 10067a50  FUN_10067a50  (151 bytes)
 * float10 FUN_10067a50(float param_1, undefined4 param_2, float param_3)
 * called by: CFuncTrackTrain::Next
 */
float10 __cdecl FUN_10067a50(float param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = FUN_100668f0(param_1);
  fVar1 = (float)fVar2;
  fVar2 = FUN_100668f0(fVar1);
  fVar3 = (float10)fVar1 - fVar2;
  if (param_3 < 0.0) {
    param_3 = -param_3;
  }
  if ((float10)-180.0 <= fVar3) {
    if ((float10)180.0 < fVar3) {
      fVar3 = fVar3 - (float10)360.0;
    }
  }
  else {
    fVar3 = fVar3 + (float10)360.0;
  }
  if ((float10)param_3 < fVar3) {
    return fVar2 + (float10)param_3;
  }
  if (fVar3 < -(float10)param_3) {
    return fVar2 - (float10)param_3;
  }
  return (float10)fVar1;
}

/* 10067af0  FUN_10067af0  (50 bytes)
 * float10 FUN_10067af0(float param_1, float param_2)
 * called by: CFuncTrackTrain::Next, FUN_1001cff0
 */
float10 __cdecl FUN_10067af0(float param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)param_1 - (float10)param_2;
  if (fVar1 < (float10)-180.0) {
    return fVar1 + (float10)360.0;
  }
  if ((float10)180.0 < fVar1) {
    fVar1 = fVar1 - (float10)360.0;
  }
  return fVar1;
}

/* 10067c90  FUN_10067c90  (6 bytes)
 * undefined FUN_10067c90(void)
 * called by: CBasePlayer::ShootBulletsPlayer, CTSKnife::BounceTouch, FUN_10011cf0, FUN_1003f910, FUN_10059510, FUN_10068460
 */
void FUN_10067c90(void)

{
  float *in_stack_00000004;
  
                    /* WARNING: Could not recover jumptable at 0x10067c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_engfuncs.pfnPointContents)(in_stack_00000004);
  return;
}

/* 10067ca0  FUN_10067ca0  (175 bytes)
 * undefined FUN_10067ca0(undefined4 * param_1, undefined4 * param_2, int param_3, int param_4)
 * called by: CBlood::Use
 */
void __cdecl FUN_10067ca0(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uStack00000024;
  float *in_stack_00000028;
  int in_stack_00000040;
  
  iVar1 = UTIL_ShouldShowBlood(param_3);
  if (iVar1 != 0) {
    if ((DAT_1009f4b8 == 1) && (param_3 == 0xf7)) {
      param_3 = 0;
    }
    (*g_engfuncs.pfnMessageBegin)(4,0x17,(float *)param_1,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(0x65);
    (*g_engfuncs.pfnWriteCoord)((float)*param_1);
    (*g_engfuncs.pfnWriteCoord)((float)param_1[1]);
    (*g_engfuncs.pfnWriteCoord)((float)param_1[2]);
    (*g_engfuncs.pfnWriteCoord)(*in_stack_00000028);
    (*g_engfuncs.pfnWriteCoord)(in_stack_00000028[1]);
    (*g_engfuncs.pfnWriteCoord)(in_stack_00000028[2]);
    (*g_engfuncs.pfnWriteByte)(param_3);
    if (0xfe < in_stack_00000040) {
      in_stack_00000040 = 0xff;
    }
    uStack00000024 = 0x10067d43;
    (*g_engfuncs.pfnWriteByte)(in_stack_00000040);
                    /* WARNING: Could not recover jumptable at 0x10067d47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*g_engfuncs.pfnMessageEnd)();
    return;
  }
  return;
}

/* 10067d50  FUN_10067d50  (252 bytes)
 * undefined FUN_10067d50(undefined4 * param_1, undefined4 param_2, int param_3, int param_4)
 * called by: CBlood::Use, FUN_1006a3a0
 */
void __cdecl FUN_10067d50(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uStack0000001c;
  
  iVar1 = UTIL_ShouldShowBlood(param_3);
  if (((iVar1 == 0) || (param_3 == -1)) || (param_4 == 0)) {
    return;
  }
  if ((DAT_1009f4b8 == 1) && (param_3 == 0xf7)) {
    param_3 = 0;
  }
  iVar1 = (**(code **)(*DAT_1009f494 + 0x18))();
  if (iVar1 != 0) {
    param_4 = param_4 * 2;
  }
  if (0xff < param_4) {
    param_4 = 0xff;
  }
  (*g_engfuncs.pfnMessageBegin)(4,0x17,(float *)param_1,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(0x73);
  (*g_engfuncs.pfnWriteCoord)((float)*param_1);
  (*g_engfuncs.pfnWriteCoord)((float)param_1[1]);
  (*g_engfuncs.pfnWriteCoord)((float)param_1[2]);
  (*g_engfuncs.pfnWriteShort)((int)DAT_102dfa58);
  (*g_engfuncs.pfnWriteShort)((int)DAT_102dfa44);
  (*g_engfuncs.pfnWriteByte)(param_3);
  iVar1 = param_4 / 10;
  if (2 < iVar1) {
    if (0xf < iVar1) {
      iVar1 = 0x10;
      goto LAB_10067e37;
    }
    if (2 < iVar1) goto LAB_10067e37;
  }
  iVar1 = 3;
LAB_10067e37:
  uStack0000001c = 0x10067e3e;
  (*g_engfuncs.pfnWriteByte)(iVar1);
                    /* WARNING: Could not recover jumptable at 0x10067e43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 10067e50  FUN_10067e50  (80 bytes)
 * undefined FUN_10067e50(float * param_1)
 * called by: FUN_10019540
 */
void __cdecl FUN_10067e50(float *param_1)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
  fVar2 = (float10)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
  fVar3 = (float10)(*g_engfuncs.pfnRandomFloat)(0.0,1.0);
  *param_1 = (float)fVar1;
  param_1[1] = (float)fVar2;
  param_1[2] = (float)fVar3;
  return;
}

/* 10067ea0  FUN_10067ea0  (66 bytes)
 * undefined FUN_10067ea0(int param_1, int param_2)
 * called by: CBaseEntity::TraceBleed, CBlood::Use, CGib::BounceGibTouch, CGib::StickyGibTouch, FUN_1002c990
 */
void __cdecl FUN_10067ea0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = UTIL_ShouldShowBlood(param_2);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = (*g_engfuncs.pfnRandomLong)(0,5);
  if (param_2 == 0xf7) {
    FUN_10067ef0(param_1,iVar1 + 0xd);
    return;
  }
  FUN_10067ef0(param_1,iVar1 + 0x13);
  return;
}

/* 10067ef0  FUN_10067ef0  (248 bytes)
 * undefined FUN_10067ef0(int param_1, int param_2)
 * called by: CEnvExplosion::Use, FUN_100126a0, FUN_10017220, FUN_1002c7c0, FUN_10067ea0, FUN_1006a400
 */
void __cdecl FUN_10067ef0(int param_1,int param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iValue;
  
  if (((param_2 < 0) || (iValue = (&DAT_1009b0b4)[param_2 * 2], iValue < 0)) ||
     (*(float *)(param_1 + 0x10) == 1.0)) {
    return;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    sVar2 = 0;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x30) + 0x7c);
    if ((piVar1 != (int *)0x0) && (iVar3 = (**(code **)(*piVar1 + 0x98))(), iVar3 == 0)) {
      return;
    }
    iVar3 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_1 + 0x30));
    sVar2 = (short)iVar3;
  }
  iVar3 = 0x68;
  if (sVar2 == 0) {
    iVar3 = 0x74;
    if (iValue < 0x100) goto LAB_10067f8b;
    iVar3 = 0x75;
  }
  else {
    if (iValue < 0x100) goto LAB_10067f8b;
    iVar3 = 0x76;
  }
  iValue = iValue + -0x100;
LAB_10067f8b:
  (*g_engfuncs.pfnMessageBegin)(0,0x17,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(iVar3);
  (*g_engfuncs.pfnWriteCoord)(*(float *)(param_1 + 0x14));
  (*g_engfuncs.pfnWriteCoord)(*(float *)(param_1 + 0x18));
  (*g_engfuncs.pfnWriteCoord)(*(float *)(param_1 + 0x1c));
  (*g_engfuncs.pfnWriteByte)(iValue);
  if (sVar2 != 0) {
    (*g_engfuncs.pfnWriteShort)((int)sVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x10067fde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 10067ff0  FUN_10067ff0  (157 bytes)
 * undefined FUN_10067ff0(int param_1, undefined4 param_2, int param_3, int param_4)
 * called by: FUN_1002c7c0
 */
void __cdecl FUN_10067ff0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int in_stack_0000001c;
  
  if (((param_4 != 0) || ((-1 < param_3 && (param_3 = (&DAT_1009b0b4)[param_3 * 2], -1 < param_3))))
     && (*(float *)(param_1 + 0x10) != 1.0)) {
    (*g_engfuncs.pfnMessageBegin)(0,0x17,(float *)0x0,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(0x70);
    (*g_engfuncs.pfnWriteByte)(in_stack_0000001c);
    (*g_engfuncs.pfnWriteCoord)(*(float *)(param_1 + 0x14));
    (*g_engfuncs.pfnWriteCoord)(*(float *)(param_1 + 0x18));
    (*g_engfuncs.pfnWriteCoord)(*(float *)(param_1 + 0x1c));
    iVar1 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_1 + 0x30));
    (*g_engfuncs.pfnWriteShort)((int)(short)iVar1);
    (*g_engfuncs.pfnWriteByte)(param_3);
                    /* WARNING: Could not recover jumptable at 0x10068087. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*g_engfuncs.pfnMessageEnd)();
    return;
  }
  return;
}

/* 10068090  FUN_10068090  (137 bytes)
 * undefined FUN_10068090(int param_1, int param_2)
 * called by: FUN_1006a400
 */
void __cdecl FUN_10068090(int param_1,int param_2)

{
  int iValue;
  int iVar1;
  
  if (((-1 < param_2) && (iValue = (&DAT_1009b0b4)[param_2 * 2], -1 < iValue)) &&
     (*(float *)(param_1 + 0x10) != 1.0)) {
    (*g_engfuncs.pfnMessageBegin)(5,0x17,(float *)(param_1 + 0x14),(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(0x6d);
    (*g_engfuncs.pfnWriteCoord)(*(float *)(param_1 + 0x14));
    (*g_engfuncs.pfnWriteCoord)(*(float *)(param_1 + 0x18));
    (*g_engfuncs.pfnWriteCoord)(*(float *)(param_1 + 0x1c));
    iVar1 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_1 + 0x30));
    (*g_engfuncs.pfnWriteShort)((int)(short)iVar1);
    (*g_engfuncs.pfnWriteByte)(iValue);
                    /* WARNING: Could not recover jumptable at 0x10068110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*g_engfuncs.pfnMessageEnd)();
    return;
  }
  return;
}

/* 10068170  FUN_10068170  (87 bytes)
 * undefined FUN_10068170(undefined4 * param_1)
 * called by: CBreakable::TraceAttack
 */
void FUN_10068170(undefined4 *param_1)

{
  longlong lVar1;
  
  (*g_engfuncs.pfnMessageBegin)(4,0x17,(float *)param_1,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(0x6f);
  (*g_engfuncs.pfnWriteCoord)((float)*param_1);
  (*g_engfuncs.pfnWriteCoord)((float)param_1[1]);
  (*g_engfuncs.pfnWriteCoord)((float)param_1[2]);
  lVar1 = __ftol();
  (*g_engfuncs.pfnWriteByte)((int)lVar1);
                    /* WARNING: Could not recover jumptable at 0x100681c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 10068210  FUN_10068210  (127 bytes)
 * undefined FUN_10068210(int param_1, char * param_2)
 * called by: CFuncRotating::KeyValue, EntvarsKeyvalue
 */
void __thiscall FUN_10068210(void *this,int param_1,char *param_2)

{
  char cVar1;
  byte_conflict bVar2;
  undefined1 *extraout_ECX;
  int iVar3;
  int iVar4;
  byte_conflict *pbVar5;
  undefined4 *puVar6;
  float10 fVar7;
  byte_conflict local_80 [128];
  
  iVar4 = -(int)param_2;
  do {
    cVar1 = *param_2;
    this = (void *)CONCAT31((int3)((uint)this >> 8),cVar1);
    param_2[(int)(local_80 + iVar4)] = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  pbVar5 = local_80;
  iVar4 = 0;
  do {
    fVar7 = FUN_1006e0fb(this,pbVar5);
    bVar2 = *pbVar5;
    *(float *)(param_1 + iVar4 * 4) = (float)fVar7;
    while( true ) {
      if (bVar2 == '\0') goto LAB_1006826c;
      if (bVar2 == ' ') break;
      bVar2 = pbVar5[1];
      pbVar5 = pbVar5 + 1;
    }
    if (*pbVar5 == '\0') break;
    pbVar5 = pbVar5 + 1;
    iVar4 = iVar4 + 1;
    this = extraout_ECX;
  } while (iVar4 < 3);
LAB_1006826c:
  if ((iVar4 < 2) && (iVar4 = iVar4 + 1, iVar4 < 3)) {
    puVar6 = (undefined4 *)(param_1 + iVar4 * 4);
    for (iVar3 = 3 - iVar4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
  }
  return;
}

/* 10068290  FUN_10068290  (130 bytes)
 * undefined FUN_10068290(int param_1, int param_2, char * param_3)
 * called by: CGameText::KeyValue
 */
void __thiscall FUN_10068290(void *this,int param_1,int param_2,char *param_3)

{
  char cVar1;
  byte_conflict bVar2;
  undefined4 uVar3;
  void *extraout_ECX;
  int iVar4;
  int iVar5;
  byte_conflict *pbVar6;
  undefined4 *puVar7;
  byte_conflict local_80 [128];
  
  iVar5 = -(int)param_3;
  do {
    cVar1 = *param_3;
    this = (void *)CONCAT31((int3)((uint)this >> 8),cVar1);
    param_3[(int)(local_80 + iVar5)] = cVar1;
    param_3 = param_3 + 1;
  } while (cVar1 != '\0');
  iVar5 = 0;
  pbVar6 = local_80;
  if (0 < param_2) {
    do {
      uVar3 = FUN_1006e1dd(this,pbVar6);
      *(undefined4 *)(param_1 + iVar5 * 4) = uVar3;
      bVar2 = *pbVar6;
      while( true ) {
        if (bVar2 == '\0') goto LAB_100682f7;
        if (bVar2 == ' ') break;
        bVar2 = pbVar6[1];
        pbVar6 = pbVar6 + 1;
      }
      if (*pbVar6 == '\0') break;
      pbVar6 = pbVar6 + 1;
      iVar5 = iVar5 + 1;
      this = extraout_ECX;
    } while (iVar5 < param_2);
  }
LAB_100682f7:
  iVar5 = iVar5 + 1;
  if (iVar5 < param_2) {
    puVar7 = (undefined4 *)(param_1 + iVar5 * 4);
    for (iVar4 = param_2 - iVar5; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
  }
  return;
}

/* 10068320  FUN_10068320  (312 bytes)
 * undefined FUN_10068320(float * param_1, float * param_2, float * param_3)
 * called by: CBasePlayer::PlayerUse
 */
void __cdecl FUN_10068320(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float local_c;
  float local_8;
  
  local_8 = param_2[1];
  fVar1 = param_2[2];
  local_c = *param_2;
  if (local_c <= *param_3) {
    if (-*param_3 <= local_c) {
      local_c = 0.0;
    }
    else {
      local_c = local_c + *param_3;
    }
  }
  else {
    local_c = local_c - *param_3;
  }
  if (local_8 <= param_3[1]) {
    if (-param_3[1] <= local_8) {
      local_8 = 0.0;
    }
    else {
      local_8 = local_8 + param_3[1];
    }
  }
  else {
    local_8 = local_8 - param_3[1];
  }
  if (fVar1 <= param_3[2]) {
    if (-param_3[2] <= fVar1) {
      fVar1 = 0.0;
    }
    else {
      fVar1 = fVar1 + param_3[2];
    }
  }
  else {
    fVar1 = fVar1 - param_3[2];
  }
  fVar2 = SQRT(local_c * local_c + local_8 * local_8 + fVar1 * fVar1);
  if (fVar2 == 0.0) {
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 1.0;
    return;
  }
  fVar2 = 1.0 / fVar2;
  *param_1 = local_c * fVar2;
  param_1[1] = local_8 * fVar2;
  param_1[2] = fVar2 * fVar1;
  return;
}

/* 10068460  FUN_10068460  (194 bytes)
 * float10 FUN_10068460(undefined4 param_1, float param_2, float param_3)
 * called by: FUN_10068630
 */
float10 __cdecl FUN_10068460(undefined4 param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  iVar4 = FUN_10067c90();
  if (iVar4 != -3) {
    return (float10)param_2;
  }
  iVar4 = FUN_10067c90();
  if (iVar4 == -3) {
    return (float10)param_3;
  }
  fVar1 = param_3 - param_2;
  fVar3 = param_3;
  fVar2 = param_3;
  while (1.0 < fVar1) {
    fVar2 = fVar1 * 0.5 + param_2;
    iVar4 = FUN_10067c90();
    param_3 = fVar2;
    if (iVar4 == -3) {
      param_2 = fVar2;
      param_3 = fVar3;
    }
    fVar3 = param_3;
    fVar1 = param_3 - param_2;
  }
  return (float10)fVar2;
}

/* 10068630  FUN_10068630  (287 bytes)
 * undefined FUN_10068630(undefined4 param_1, undefined4 param_2, float param_3, undefined4 param_4, undefined4 param_5, float param_6, int param_7)
 * called by: FUN_100126a0
 */
void __cdecl
FUN_10068630(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            int param_7)

{
  float flValue;
  float flValue_00;
  int iValue;
  float10 fVar1;
  float in_stack_00000020;
  float in_stack_00000028;
  float in_stack_00000030;
  float in_stack_00000038;
  
  flValue = param_3;
  fVar1 = FUN_10068460(&param_1,param_3,param_3 + 256.0);
  flValue_00 = param_6;
  if ((fVar1 - (float10)param_3 < (float10)8.0) &&
     (fVar1 = FUN_10068460(&param_4,param_6,param_6 + 256.0),
     fVar1 - (float10)param_6 < (float10)8.0)) {
    return;
  }
  iValue = param_7;
  if (0xff < param_7) {
    iValue = 0xff;
  }
  (*g_engfuncs.pfnMessageBegin)(0,0x17,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(0x72);
  (*g_engfuncs.pfnWriteCoord)(param_6);
  (*g_engfuncs.pfnWriteCoord)(in_stack_00000020);
  (*g_engfuncs.pfnWriteCoord)(flValue);
  (*g_engfuncs.pfnWriteCoord)(in_stack_00000030);
  (*g_engfuncs.pfnWriteCoord)(in_stack_00000038);
  (*g_engfuncs.pfnWriteCoord)(flValue_00);
  (*g_engfuncs.pfnWriteCoord)(in_stack_00000028);
  (*g_engfuncs.pfnWriteShort)((int)DAT_102e00e8);
  (*g_engfuncs.pfnWriteByte)(iValue);
  (*g_engfuncs.pfnWriteCoord)(8.0);
                    /* WARNING: Could not recover jumptable at 0x10068743. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 10068790  FUN_10068790  (34 bytes)
 * undefined4 FUN_10068790(int * param_1)
 * called by: FUN_1006a400
 */
undefined4 __cdecl FUN_10068790(int *param_1)

{
  if (((param_1 != (int *)0x0) && (*param_1 == 0)) && ((param_1[0x89] & 0x40000000U) == 0)) {
    return 1;
  }
  return 0;
}

/* 10068840  FUN_10068840  (42 bytes)
 * undefined FUN_10068840(byte.conflict * param_1)
 * called by: CHalfLifeMultiplay::ClientDisconnected, CHalfLifeMultiplay::InitHUD, CHalfLifeTeamplay::ClientUserInfoChanged, FUN_1004ede0, Host_Say, pfnClientUserInfoChanged
 */
void __cdecl FUN_10068840(byte_conflict *param_1)

{
  FUN_1006f61b(&DAT_102df080,param_1,(undefined4 *)&stack0x00000008);
  (*g_engfuncs.pfnAlertMessage)(at_logged,&DAT_10091bec,&DAT_102df080);
  return;
}

/* 100688f0  FUN_100688f0  (56 bytes)
 * undefined FUN_100688f0(char * param_1, undefined1 * param_2)
 * called by: CGamePlayerEquip::KeyValue, CMultiManager::KeyValue
 */
void __cdecl FUN_100688f0(char *param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    *param_2 = 0;
    return;
  }
  iVar3 = (int)param_2 - (int)param_1;
  do {
    if (cVar1 == '#') break;
    param_1[iVar3] = cVar1;
    cVar1 = param_1[1];
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  param_2[iVar2] = 0;
  return;
}

/* 10068940  FUN_10068940  (11 bytes)
 * undefined FUN_10068940(undefined4 param_1)
 * called by: CChangeLevel::ChangeList, pfnRestore, pfnRestoreGlobalState, pfnSave, pfnSaveGlobalState, pfnSaveReadFields, pfnSaveWriteFields
 */
void __thiscall FUN_10068940(void *this,undefined4 param_1)

{
  *(undefined4 *)this = param_1;
  return;
}

/* 10068950  FUN_10068950  (1 bytes)
 * undefined FUN_10068950(void)
 * called by: CChangeLevel::ChangeList, pfnRestore, pfnRestoreGlobalState, pfnSave, pfnSaveGlobalState, pfnSaveReadFields, pfnSaveWriteFields
 */
void FUN_10068950(void)

{
  return;
}

/* 10068960  FUN_10068960  (26 bytes)
 * int FUN_10068960(int param_1)
 * called by: CChangeLevel::ChangeList, CSave::WriteFields
 */
int __thiscall FUN_10068960(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return -1;
  }
  iVar1 = FUN_10068980(this,*(int *)(param_1 + 4));
  return iVar1;
}

/* 10068980  FUN_10068980  (29 bytes)
 * int FUN_10068980(int param_1)
 * called by: CSave::WriteFields, FUN_10068960
 */
int __thiscall FUN_10068980(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return -1;
  }
  iVar1 = FUN_100689c0(this,*(int *)(param_1 + 0x208));
  return iVar1;
}

/* 100689a0  FUN_100689a0  (29 bytes)
 * undefined FUN_100689a0(undefined4 param_1)
 * called by: CSave::WriteFields
 */
void __thiscall FUN_100689a0(void *this,int param_1)

{
  edict_t *peVar1;
  
  peVar1 = (*g_engfuncs.pfnPEntityOfEntOffset)(param_1);
  FUN_100689c0(this,(int)peVar1);
  return;
}

/* 100689c0  FUN_100689c0  (49 bytes)
 * int FUN_100689c0(int param_1)
 * called by: CSave::WriteFields, FUN_10068980, FUN_100689a0
 */
int __thiscall FUN_100689c0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)this;
  if ((iVar1 != 0) && (param_1 != 0)) {
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 0x20)) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x28) + 4);
      do {
        if (*piVar3 == param_1) {
          return iVar2;
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 6;
      } while (iVar2 < *(int *)(iVar1 + 0x20));
    }
  }
  return -1;
}

/* 10068a00  FUN_10068a00  (52 bytes)
 * int FUN_10068a00(int param_1)
 * called by: FUN_10069490
 */
int __thiscall FUN_10068a00(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)this;
  if ((iVar1 != 0) && (-1 < param_1)) {
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 0x20)) {
      piVar3 = *(int **)(iVar1 + 0x28);
      do {
        if (*piVar3 == param_1) {
          return piVar3[1];
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 6;
      } while (iVar2 < *(int *)(iVar1 + 0x20));
    }
  }
  return 0;
}

/* 10068a40  FUN_10068a40  (66 bytes)
 * undefined4 FUN_10068a40(int param_1, uint param_2)
 * called by: CChangeLevel::ChangeList
 */
undefined4 __thiscall FUN_10068a40(void *this,int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  if (((iVar1 != 0) && (-1 < param_1)) && (param_1 <= *(int *)(iVar1 + 0x20))) {
    iVar2 = param_1 * 0x18;
    *(uint *)(*(int *)(iVar1 + 0x28) + 0x10 + iVar2) =
         *(uint *)(*(int *)(iVar1 + 0x28) + 0x10 + iVar2) | param_2;
    return *(undefined4 *)(*(int *)(*(int *)this + 0x28) + 0x10 + iVar2);
  }
  return 0;
}

/* 10068a90  FUN_10068a90  (37 bytes)
 * undefined FUN_10068a90(int param_1)
 * called by: CRestore::ReadFields
 */
void __thiscall FUN_10068a90(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) < param_1) {
      param_1 = *(int *)(iVar1 + 8);
    }
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) - param_1;
    *(int *)(*(int *)this + 8) = *(int *)(*(int *)this + 8) - param_1;
  }
  return;
}

/* 10068ac0  FUN_10068ac0  (31 bytes)
 * uint FUN_10068ac0(char * param_1)
 * called by: CSaveRestoreBuffer::TokenHash
 */
uint FUN_10068ac0(char *param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  
  uVar3 = 0;
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    uVar3 = (uVar3 >> 4 | uVar3 << 0x1c) ^ (int)cVar2;
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  return uVar3;
}

/* 10068c10  FUN_10068c10  (30 bytes)
 * undefined FUN_10068c10(byte.conflict * param_1, undefined4 * param_2, int param_3)
 * called by: CSave::WriteFields
 */
void __thiscall FUN_10068c10(void *this,byte_conflict *param_1,undefined4 *param_2,int param_3)

{
  CSave::BufferField(this,param_1,param_3 * 4,param_2);
  return;
}

/* 10068c30  FUN_10068c30  (30 bytes)
 * undefined FUN_10068c30(byte.conflict * param_1, undefined4 * param_2, int param_3)
 * called by: CSave::WriteFields
 */
void __thiscall FUN_10068c30(void *this,byte_conflict *param_1,undefined4 *param_2,int param_3)

{
  CSave::BufferField(this,param_1,param_3 * 4,param_2);
  return;
}

/* 10068c50  FUN_10068c50  (91 bytes)
 * undefined FUN_10068c50(byte.conflict * param_1, float * param_2, float param_3)
 * called by: CSave::WriteFields
 */
void __thiscall FUN_10068c50(void *this,byte_conflict *param_1,float *param_2,float param_3)

{
  float fVar1;
  
  fVar1 = param_3;
  CSave::BufferHeader(this,param_1,(int)param_3 * 4);
  if (0 < (int)fVar1) {
    do {
      param_3 = *param_2;
      if (*(int *)this != 0) {
        param_3 = param_3 - *(float *)(*(int *)this + 0x550);
      }
      CSave::BufferData(this,&param_3,4);
      param_2 = param_2 + 1;
      fVar1 = (float)((int)fVar1 + -1);
    } while (fVar1 != 0.0);
  }
  return;
}

/* 10068ce0  FUN_10068ce0  (142 bytes)
 * undefined FUN_10068ce0(byte.conflict * param_1, int param_2, int param_3)
 * called by: CSave::WriteFields
 */
void __thiscall FUN_10068ce0(void *this,byte_conflict *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  
  uVar4 = 0;
  iVar3 = 0;
  if (0 < param_3) {
    do {
      uVar2 = 0xffffffff;
      pcVar5 = gpGlobals->pStringBase + *(int *)(param_2 + iVar3 * 4);
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      iVar3 = iVar3 + 1;
      uVar4 = uVar4 + ~uVar2;
    } while (iVar3 < param_3);
  }
  CSave::BufferHeader(this,param_1,uVar4);
  iVar3 = 0;
  if (0 < param_3) {
    do {
      uVar4 = 0xffffffff;
      pcVar5 = gpGlobals->pStringBase + *(int *)(param_2 + iVar3 * 4);
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      CSave::BufferData(this,(undefined4 *)(gpGlobals->pStringBase + *(int *)(param_2 + iVar3 * 4)),
                        ~uVar4);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  return;
}

/* 10068d90  FUN_10068d90  (43 bytes)
 * undefined FUN_10068d90(byte.conflict * param_1, undefined4 * param_2, int param_3)
 * called by: CSave::WriteFields
 */
void __thiscall FUN_10068d90(void *this,byte_conflict *param_1,undefined4 *param_2,int param_3)

{
  CSave::BufferHeader(this,param_1,param_3 * 0xc);
  CSave::BufferData(this,param_2,param_3 * 0xc);
  return;
}

/* 10068e30  FUN_10068e30  (176 bytes)
 * undefined FUN_10068e30(byte.conflict * param_1, float * param_2, int param_3)
 * called by: CSave::WriteFields
 */
void __thiscall FUN_10068e30(void *this,byte_conflict *param_1,float *param_2,int param_3)

{
  int iVar1;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  CSave::BufferHeader(this,param_1,param_3 * 0xc);
  if (0 < param_3) {
    do {
      local_18 = *param_2;
      local_14 = param_2[1];
      iVar1 = *(int *)this;
      local_10 = param_2[2];
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x52c) != 0)) {
        local_18 = local_18 - *(float *)(iVar1 + 0x544);
        local_14 = local_14 - *(float *)(iVar1 + 0x548);
        local_10 = local_10 - *(float *)(iVar1 + 0x54c);
        local_c = local_18;
        local_8 = local_14;
        local_4 = local_10;
      }
      CSave::BufferData(this,&local_18,0xc);
      param_2 = param_2 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

/* 10069050  FUN_10069050  (25 bytes)
 * undefined FUN_10069050(byte.conflict * param_1, int param_2)
 * called by: CBaseEntity::Save
 */
void __thiscall FUN_10069050(void *this,byte_conflict *param_1,int param_2)

{
  CSave::WriteFields(this,param_1,param_2,0x1009a090,0x56);
  return;
}

/* 10069370  FUN_10069370  (38 bytes)
 * undefined4 FUN_10069370(int param_1, int param_2)
 * called by: CSave::WriteFields
 */
undefined4 FUN_10069370(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      if (*(char *)(iVar1 + param_1) != '\0') {
        return 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 1;
}

/* 10069490  FUN_10069490  (755 bytes)
 * int FUN_10069490(int param_1, int param_2, int param_3, int param_4, undefined4 param_5, byte.conflict * param_6, char * param_7)
 * called by: CRestore::ReadFields
 */
int __thiscall
FUN_10069490(void *this,int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
            byte_conflict *param_6,char *param_7)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  edict_t *pEdict;
  int iVar5;
  float *pName;
  char *szValue;
  int *piVar6;
  int iVar7;
  float *pfVar8;
  EHANDLE *this_00;
  char *pcVar9;
  float *pfVar10;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  local_18 = 0.0;
  local_10 = 0.0;
  iVar7 = *(int *)this;
  local_1c = 0.0;
  local_14 = 0.0;
  if ((iVar7 != 0) && (local_1c = *(float *)(iVar7 + 0x550), *(int *)(iVar7 + 0x52c) != 0)) {
    local_18 = *(float *)(iVar7 + 0x544);
    local_14 = *(float *)(iVar7 + 0x548);
    local_10 = *(float *)(iVar7 + 0x54c);
  }
  iVar7 = 0;
  if (0 < param_3) {
    do {
      iVar5 = (param_4 + iVar7) % param_3;
      piVar6 = (int *)(iVar5 * 0x10 + param_2);
      uVar2 = FUN_1007e860((void *)piVar6[1],(void *)piVar6[1],param_6);
      if (uVar2 == 0) {
        if ((*(int *)((int)this + 4) != 0) && ((*(byte *)((int)piVar6 + 0xe) & 1) != 0)) {
          return iVar5;
        }
        iVar7 = 0;
        if ((short)piVar6[3] < 1) {
          return iVar5;
        }
        goto LAB_10069570;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_3);
  }
  return -1;
LAB_10069570:
  iVar3 = *(int *)(&DAT_1009a5f0 + *piVar6 * 4) * iVar7;
  pfVar8 = (float *)(piVar6[2] + iVar3 + param_1);
  pName = (float *)(param_7 + iVar3);
  switch(*piVar6) {
  case 0:
  case 9:
  case 10:
  case 0xc:
    *pfVar8 = *pName;
    break;
  case 1:
  case 0x10:
  case 0x11:
    iVar3 = iVar7;
    szValue = param_7;
    if (0 < iVar7) {
      do {
        cVar1 = *szValue;
        while (cVar1 != '\0') {
          pcVar9 = szValue + 1;
          szValue = szValue + 1;
          cVar1 = *pcVar9;
        }
        szValue = szValue + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = -1;
    pcVar9 = szValue;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    if (iVar3 == -2) {
      *pfVar8 = 0.0;
    }
    else {
      fVar4 = (float)(*g_engfuncs.pfnAllocString)(szValue);
      *pfVar8 = fVar4;
      if ((fVar4 != 0.0) && (*(int *)((int)local_1c + 8) != 0)) {
        if (*piVar6 == 0x10) {
          (*g_engfuncs.pfnPrecacheModel)(gpGlobals->pStringBase + (int)fVar4);
        }
        else if (*piVar6 == 0x11) {
          (*g_engfuncs.pfnPrecacheSound)(gpGlobals->pStringBase + (int)fVar4);
        }
      }
    }
    break;
  case 2:
    pEdict = (edict_t *)FUN_10068a00(this,(int)*pName);
    if (pEdict == (edict_t *)0x0) {
LAB_10069742:
      *pfVar8 = 0.0;
    }
    else {
      fVar4 = (float)(*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict);
      *pfVar8 = fVar4;
    }
    break;
  case 3:
    iVar3 = FUN_10068a00(this,(int)*pName);
    if (iVar3 == 0) goto LAB_10069742;
    *pfVar8 = *(float *)(iVar3 + 0x7c);
    break;
  case 4:
    this_00 = (EHANDLE *)((int)pfVar8 + (8 - *(int *)(&DAT_1009a5f0 + *piVar6 * 4)) * iVar7);
    iVar3 = FUN_10068a00(this,(int)*pName);
    if (iVar3 == 0) {
      EHANDLE::operator=(this_00,0);
    }
    else {
      EHANDLE::operator=(this_00,*(int *)(iVar3 + 0x7c));
    }
    break;
  case 5:
    iVar3 = FUN_10068a00(this,(int)*pName);
    if (iVar3 == 0) goto LAB_10069742;
    *pfVar8 = (float)(iVar3 + 0x80);
    break;
  case 6:
    fVar4 = (float)FUN_10068a00(this,(int)*pName);
    *pfVar8 = fVar4;
    break;
  case 7:
    *pfVar8 = *pName;
    pfVar8[1] = pName[1];
    pfVar8[2] = pName[2];
    break;
  case 8:
    *pfVar8 = local_18 + *pName;
    pfVar8[1] = local_14 + pName[1];
    pfVar8[2] = local_10 + pName[2];
    break;
  case 0xb:
    iVar3 = -1;
    pfVar10 = pName;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *(char *)pfVar10;
      pfVar10 = (float *)((int)pfVar10 + 1);
    } while (cVar1 != '\0');
    if (iVar3 == -2) goto LAB_10069742;
    fVar4 = (float)(*g_engfuncs.pfnFunctionFromName)((char *)pName);
    *pfVar8 = fVar4;
    break;
  case 0xd:
    *(undefined2 *)pfVar8 = *(undefined2 *)pName;
    break;
  case 0xe:
    *(undefined1 *)pfVar8 = *(undefined1 *)pName;
    break;
  case 0xf:
    *pfVar8 = *pName + local_1c;
    break;
  default:
    (*g_engfuncs.pfnAlertMessage)(at_error,s_Bad_field_type_1009aa4c);
  }
  iVar7 = iVar7 + 1;
  if ((short)piVar6[3] <= iVar7) {
    return iVar5;
  }
  goto LAB_10069570;
}

/* 100697d0  FUN_100697d0  (25 bytes)
 * undefined FUN_100697d0(byte.conflict * param_1, int param_2)
 * called by: CBaseEntity::Restore, pfnRestore
 */
void __thiscall FUN_100697d0(void *this,byte_conflict *param_1,int param_2)

{
  CRestore::ReadFields(this,param_1,param_2,0x1009a090,0x56);
  return;
}

/* 10069910  FUN_10069910  (55 bytes)
 * undefined FUN_10069910(ushort * param_1)
 * called by: CRestore::ReadFields
 */
void __thiscall FUN_10069910(void *this,ushort *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_10069950(this);
  *param_1 = (ushort)uVar1;
  uVar1 = FUN_10069950(this);
  param_1[1] = (ushort)uVar1;
  uVar2 = FUN_100699d0(this);
  *(undefined4 *)(param_1 + 2) = uVar2;
  FUN_10069a60(this,(uint)*param_1);
  return;
}

/* 10069950  FUN_10069950  (28 bytes)
 * uint FUN_10069950(void * param_1)
 * called by: CRestore::ReadFields, FUN_10069910
 */
uint __fastcall FUN_10069950(void *param_1)

{
  undefined2 extraout_var;
  undefined4 local_4;
  
  local_4 = 0;
  FUN_100699e0(param_1,&local_4,2);
  return CONCAT22(extraout_var,(undefined2)local_4);
}

/* 10069970  FUN_10069970  (27 bytes)
 * undefined4 FUN_10069970(void * param_1)
 * called by: CRestore::ReadFields
 */
undefined4 __fastcall FUN_10069970(void *param_1)

{
  undefined4 local_4;
  
  local_4 = 0;
  FUN_100699e0(param_1,&local_4,4);
  return local_4;
}

/* 100699d0  FUN_100699d0  (11 bytes)
 * undefined4 FUN_100699d0(int * param_1)
 * called by: FUN_10069910
 */
undefined4 __fastcall FUN_100699d0(int *param_1)

{
  if (*param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(*param_1 + 4);
}

/* 100699e0  FUN_100699e0  (115 bytes)
 * undefined FUN_100699e0(undefined4 * param_1, uint param_2)
 * called by: FUN_10069950, FUN_10069970, FUN_10069a60
 */
void __thiscall FUN_100699e0(void *this,undefined4 *param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  piVar1 = *(int **)this;
  if (piVar1 != (int *)0x0) {
    if (piVar1[1] - *piVar1 < piVar1[3]) {
      if (piVar1[3] < (int)(piVar1[2] + param_2)) {
        (*g_engfuncs.pfnAlertMessage)(at_error,s_Restore_overflow__1009aae0);
        *(undefined4 *)(*(int *)this + 8) = *(undefined4 *)(*(int *)this + 0xc);
        return;
      }
      if (param_1 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)piVar1[1];
        for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *param_1 = *puVar3;
          puVar3 = puVar3 + 1;
          param_1 = param_1 + 1;
        }
        for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined1 *)param_1 = *(undefined1 *)puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
          param_1 = (undefined4 *)((int)param_1 + 1);
        }
      }
      *(uint *)(*(int *)this + 4) = *(int *)(*(int *)this + 4) + param_2;
      *(int *)(*(int *)this + 8) = *(int *)(*(int *)this + 8) + param_2;
    }
  }
  return;
}

/* 10069a60  FUN_10069a60  (15 bytes)
 * undefined FUN_10069a60(uint param_1)
 * called by: FUN_10069910
 */
void __thiscall FUN_10069a60(void *this,uint param_1)

{
  FUN_100699e0(this,(undefined4 *)0x0,param_1);
  return;
}

/* 10069b10  FUN_10069b10  (11 bytes)
 * undefined FUN_10069b10()
 */
void FUN_10069b10(void)

{
  DAT_102df8b0 = 0;
  return;
}

/* 10069b30  FUN_10069b30  (17 bytes)
 * undefined FUN_10069b30()
 */
void FUN_10069b30(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_102df8b8;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

/* 10069b60  FUN_10069b60  (17 bytes)
 * undefined FUN_10069b60()
 */
void FUN_10069b60(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_102df938;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

/* 10069b90  FUN_10069b90  (17 bytes)
 * undefined FUN_10069b90()
 */
void FUN_10069b90(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_102df9c0;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

/* 10069bc0  FUN_10069bc0  (11 bytes)
 * undefined FUN_10069bc0()
 */
void FUN_10069bc0(void)

{
  DAT_102df9b8 = 0;
  return;
}

/* 10069bd0  FUN_10069bd0  (20 bytes)
 * undefined FUN_10069bd0(undefined4 * param_1)
 * called by: FUN_100236f0
 */
void __fastcall FUN_10069bd0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_100896e0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  return;
}

/* 10069bf0  FUN_10069bf0  (30 bytes)
 * undefined4 * FUN_10069bf0(byte.conflict param_1)
 */
undefined4 * __thiscall FUN_10069bf0(void *this,byte_conflict param_1)

{
  FUN_10069c10(this);
  if ((param_1 & 1) != 0) {
    FUN_1006eb82(this);
  }
  return this;
}

/* 10069c10  FUN_10069c10  (7 bytes)
 * undefined FUN_10069c10(undefined4 * param_1)
 * called by: FUN_10023710, FUN_10069bf0
 */
void __fastcall FUN_10069c10(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_100896e0;
  return;
}

/* 10069cc0  FUN_10069cc0  (31 bytes)
 * undefined FUN_10069cc0(double param_1)
 * called by: CHalfLifeTeamplay::Think, FUN_10023a60
 */
void __thiscall FUN_10069cc0(void *this,double param_1)

{
  double dVar1;
  
  dVar1 = param_1 + *(double *)((int)this + 0x18);
  *(double *)((int)this + 0x18) = dVar1;
  if (0.3 <= dVar1) {
    FUN_10069f90((int)this);
  }
  return;
}

/* 10069ce0  FUN_10069ce0  (144 bytes)
 * undefined FUN_10069ce0(undefined4 param_1)
 * called by: FUN_10023e60
 */
void FUN_10069ce0(edict_t *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (*g_engfuncs.pfnIndexOfEdict)(param_1);
  iVar2 = iVar2 + -1;
  (&DAT_102df9b8)[iVar2 >> 5] = (&DAT_102df9b8)[iVar2 >> 5] | 1 << ((byte)iVar2 & 0x1f);
  iVar4 = 0;
  do {
    bVar1 = (byte)iVar4;
    iVar3 = iVar4 >> 5;
    iVar4 = iVar4 + 1;
    (&DAT_102df938)[iVar2 + iVar3] = (&DAT_102df938)[iVar2 + iVar3] & ~(1 << (bVar1 & 0x1f));
  } while (iVar4 < 0x20);
  iVar4 = 0;
  do {
    iVar3 = iVar4 >> 5;
    bVar1 = (byte)iVar4;
    iVar4 = iVar4 + 1;
    (&DAT_102df9c0)[iVar2 + iVar3] = (&DAT_102df9c0)[iVar2 + iVar3] & ~(1 << (bVar1 & 0x1f));
  } while (iVar4 < 0x20);
  return;
}

/* 10069f30  FUN_10069f30  (88 bytes)
 * undefined FUN_10069f30(void)
 * called by: CVoiceGameMgr::ClientCommand
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10069f30(void)

{
  byte_conflict *in_stack_00001004;
  
  FUN_1006f1c0();
  if (_DAT_1009ab00 != 0.0) {
    FUN_1006f66c(&stack0x00000000,0x1000,in_stack_00001004,(undefined4 *)&stack0x00001008);
    (*g_engfuncs.pfnAlertMessage)(at_console,&DAT_10091bec);
  }
  return;
}

/* 10069f90  FUN_10069f90  (553 bytes)
 * undefined FUN_10069f90(int param_1)
 * called by: CVoiceGameMgr::ClientCommand, FUN_10069cc0
 */
void __fastcall FUN_10069f90(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float10 extraout_ST0;
  int iValue;
  qboolean qStack_14;
  uint uStack_10;
  int *piStack_c;
  int iStack_4;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  (*g_engfuncs.pfnCVarGetFloat)(s_sv_alltalk_1009ab1c);
  if (0 < *(int *)(param_1 + 0x14)) {
    iValue = 0;
    iVar5 = 0;
    do {
      iStack_4 = iVar5 + 1;
      piStack_c = (int *)UTIL_PlayerByIndex(iStack_4);
      if ((piStack_c != (int *)0x0) && (iVar2 = (**(code **)(*piStack_c + 0xa8))(), iVar2 != 0)) {
        uVar6 = 1 << ((byte)iVar5 & 0x1f);
        if (((&DAT_102df9b8)[iVar5 >> 5] & uVar6) != 0) {
          (*g_engfuncs.pfnMessageBegin)
                    (1,*(int *)(param_1 + 0xc),(float *)0x0,*(edict_t **)(piStack_c[1] + 0x208));
          (*g_engfuncs.pfnMessageEnd)();
        }
        uStack_10 = 0;
        if (((uVar6 & (&DAT_102df8b0)[iVar5 >> 5]) != 0) &&
           (iVar5 = 0, 0 < *(int *)(param_1 + 0x14))) {
          do {
            iVar2 = iVar5 + 1;
            piVar3 = (int *)UTIL_PlayerByIndex(iVar2);
            if (((piVar3 != (int *)0x0) && (iVar4 = (**(code **)(*piVar3 + 0xa8))(), iVar4 != 0)) &&
               ((extraout_ST0 != (float10)0.0 ||
                (cVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 4))(piStack_c,piVar3),
                cVar1 != '\0')))) {
              (&uStack_10)[iVar5 >> 5] = (&uStack_10)[iVar5 >> 5] | 1 << ((byte)iVar5 & 0x1f);
            }
            iVar5 = iVar2;
          } while (iVar2 < *(int *)(param_1 + 0x14));
        }
        uVar6 = FUN_1006a1c0(&uStack_10,(int)&DAT_102df938 + iValue);
        if ((char)uVar6 == '\0') {
LAB_1006a0ee:
          *(uint *)((int)&DAT_102df938 + iValue) = uStack_10;
          *(undefined4 *)((int)&DAT_102df9c0 + iValue) =
               *(undefined4 *)((int)&DAT_102df8b8 + iValue);
          (*g_engfuncs.pfnMessageBegin)
                    (1,*(int *)(param_1 + 8),(float *)0x0,*(edict_t **)(piStack_c[1] + 0x208));
          (*g_engfuncs.pfnWriteLong)(iValue);
          (*g_engfuncs.pfnWriteLong)(*(int *)((int)&DAT_102df8b8 + iValue));
          uStack_10 = 0x1006a13d;
          (*g_engfuncs.pfnMessageEnd)();
        }
        else {
          iVar2 = 0;
          iVar5 = iValue;
          do {
            if (*(int *)((int)&DAT_102df8b8 + iVar5) != *(int *)((int)&DAT_102df9c0 + iVar5))
            goto LAB_1006a0ee;
            iVar2 = iVar2 + 1;
            iVar5 = iVar5 + 4;
          } while (iVar2 < 1);
        }
        iVar5 = 0;
        if (0 < *(int *)(param_1 + 0x14)) {
          do {
            uVar6 = 1 << ((byte)iVar5 & 0x1f);
            iVar2 = (iVar5 >> 5) * 4;
            if (((*(uint *)(&stack0xffffffe4 + iVar2) & uVar6) == 0) ||
               (qStack_14 = 1, (uVar6 & *(uint *)((int)&DAT_102df8b8 + iValue + iVar2)) != 0)) {
              qStack_14 = 0;
            }
            iVar5 = iVar5 + 1;
            (*g_engfuncs.pfnVoice_SetClientListening)(uStack_10,iVar5,qStack_14);
          } while (iVar5 < *(int *)(param_1 + 0x14));
        }
      }
      iValue = iValue + 4;
      iVar5 = iStack_4;
    } while (iStack_4 < *(int *)(param_1 + 0x14));
  }
  return;
}

/* 1006a1c0  FUN_1006a1c0  (44 bytes)
 * uint FUN_1006a1c0(int param_1)
 * called by: FUN_10069f90
 */
uint __thiscall FUN_1006a1c0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1 - (int)this;
  do {
    if (*(int *)this != *(int *)(iVar1 + (int)this)) {
      return (uint)this & 0xffffff00;
    }
    iVar2 = iVar2 + 1;
    this = (void *)((int)this + 4);
  } while (iVar2 < 1);
  return CONCAT31((int3)((uint)this >> 8),1);
}

/* 1006a2f0  FUN_1006a2f0  (18 bytes)
 * undefined FUN_1006a2f0(void)
 * called by: CBasePlayer::ShootBulletsPlayer, CM61Grenade::WaitThink, CTSKnife::BounceTouch, CTSKnife::WaitThink, CTSShrapnel::BounceTouch, CTSWorldGun::BounceTouch, FUN_10011cf0, FUN_100126a0, FUN_10017220, FUN_1003f910, FUN_100439e0, FUN_1004c090, ... (17 total)
 */
void FUN_1006a2f0(void)

{
  DAT_102dfa48 = 0;
  DAT_102dfa4c = 0;
  DAT_102dfa50 = 0;
  return;
}

/* 1006a310  FUN_1006a310  (40 bytes)
 * undefined FUN_1006a310(undefined4 param_1, undefined4 param_2)
 * called by: CBasePlayer::ShootBulletsPlayer, CM61Grenade::WaitThink, CTSKnife::BounceTouch, CTSKnife::WaitThink, CTSShrapnel::BounceTouch, CTSWorldGun::BounceTouch, FUN_10011cf0, FUN_100126a0, FUN_10017220, FUN_1003f910, FUN_100439e0, FUN_1004c090, ... (18 total)
 */
void __cdecl FUN_1006a310(undefined4 param_1,undefined4 param_2)

{
  if (DAT_102dfa48 != (int *)0x0) {
    (**(code **)(*DAT_102dfa48 + 0x38))(param_1,param_2,DAT_102dfa4c,DAT_102dfa50);
  }
  return;
}

/* 1006a340  FUN_1006a340  (92 bytes)
 * undefined FUN_1006a340(undefined4 param_1, int param_2, float param_3, uint param_4)
 * called by: CBaseEntity::TraceAttack, CBaseMonster::TraceAttack, CBasePlayer::TraceAttack
 */
void __cdecl FUN_1006a340(undefined4 param_1,int param_2,float param_3,uint param_4)

{
  if (param_2 != 0) {
    DAT_102dfa50 = DAT_102dfa50 | param_4;
    if (param_2 != DAT_102dfa48) {
      FUN_1006a310(param_1,param_1);
      DAT_102dfa48 = param_2;
      DAT_102dfa4c = param_3 + 0.0;
      return;
    }
    DAT_102dfa4c = DAT_102dfa4c + param_3;
  }
  return;
}

/* 1006a3a0  FUN_1006a3a0  (34 bytes)
 * undefined FUN_1006a3a0(void)
 * called by: CBaseEntity::TraceAttack, CBaseMonster::TraceAttack
 */
void FUN_1006a3a0(void)

{
  longlong lVar1;
  int in_stack_00000010;
  
  lVar1 = __ftol();
  FUN_10067d50((undefined4 *)&stack0x00000004,&DAT_1009f4c4,in_stack_00000010,(int)lVar1);
  return;
}

/* 1006a3d0  FUN_1006a3d0  (37 bytes)
 * undefined FUN_1006a3d0(int * param_1, undefined4 param_2)
 * called by: FUN_1006a400
 */
void __cdecl FUN_1006a3d0(int *param_1,undefined4 param_2)

{
  if (param_1 == (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1006a3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*g_engfuncs.pfnRandomLong)(0,4);
    return;
  }
  (**(code **)(*param_1 + 0x7c))(param_2);
  return;
}

/* 1006a400  FUN_1006a400  (179 bytes)
 * undefined FUN_1006a400(int param_1, int param_2)
 * called by: FUN_100126a0
 */
void __cdecl FUN_1006a400(int param_1,int param_2)

{
  int iVar1;
  edict_t *peVar2;
  entvars_t *peVar3;
  int *piVar4;
  
  iVar1 = FUN_10068790(*(int **)(param_1 + 0x30));
  if (iVar1 != 0) {
    peVar2 = *(edict_t **)(param_1 + 0x30);
    if (peVar2 == (edict_t *)0x0) {
      peVar3 = (entvars_t *)0x0;
    }
    else {
      peVar3 = &peVar2->v;
    }
    if (peVar3->solid != 4) {
      if (peVar2 == (edict_t *)0x0) {
        peVar3 = (entvars_t *)0x0;
      }
      else {
        peVar3 = &peVar2->v;
      }
      if (peVar3->movetype != 0xd) {
        return;
      }
    }
    piVar4 = (int *)0x0;
    if ((peVar2 != (edict_t *)0x0) &&
       (iVar1 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar2), iVar1 != 0)) {
      peVar2 = *(edict_t **)(param_1 + 0x30);
      if ((peVar2 == (edict_t *)0x0) &&
         (peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar2 == (edict_t *)0x0)) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = peVar2->pvPrivateData;
      }
    }
    if (param_2 != 5) {
      iVar1 = FUN_1006a3d0(piVar4,2);
      FUN_10068090(param_1,iVar1);
      return;
    }
    iVar1 = FUN_1006a3d0(piVar4,0x80);
    FUN_10067ef0(param_1,iVar1);
  }
  return;
}

/* 1006a550  FUN_1006a550  (82 bytes)
 * undefined FUN_1006a550(byte.conflict * param_1)
 * called by: UTIL_PrecacheOtherWeapon
 */
void __thiscall FUN_1006a550(void *this,byte_conflict *param_1)

{
  int iVar1;
  uint uVar2;
  void *extraout_ECX;
  undefined4 *puVar3;
  
  puVar3 = &DAT_102dfa60;
  while (((byte_conflict *)*puVar3 == (byte_conflict *)0x0 ||
         (uVar2 = FUN_1007e860(this,(byte_conflict *)*puVar3,param_1), this = extraout_ECX,
         uVar2 != 0))) {
    puVar3 = puVar3 + 2;
    if (0x102dfb5f < (int)puVar3) {
      DAT_102e00ec = DAT_102e00ec + 1;
      if (0x1f < DAT_102e00ec) {
        DAT_102e00ec = 0;
      }
      iVar1 = DAT_102e00ec;
      (&DAT_102dfa60)[DAT_102e00ec * 2] = param_1;
      (&DAT_102dfa64)[iVar1 * 2] = iVar1;
      return;
    }
  }
  return;
}

/* 1006aa00  FUN_1006aa00  (156 bytes)
 * undefined FUN_1006aa00(int param_1)
 * called by: CTSGun::Spawn
 */
void __fastcall FUN_1006aa00(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 6;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 2;
  FUN_100679a0();
  FUN_10067970();
  *(code **)(param_1 + 0x14) = CBasePlayerItem::DefaultTouch;
  *(code **)(param_1 + 0x10) = CBasePlayerItem::FallThink;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.1;
  return;
}

/* 1006abf0  FUN_1006abf0  (31 bytes)
 * undefined FUN_1006abf0(int * param_1)
 * called by: CBasePlayer::AddPlayerItem
 */
void __fastcall FUN_1006abf0(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_1009f494 + 0x7c))(param_1);
  if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x1006ac07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 200))();
    return;
  }
  return;
}

/* 1006ad70  FUN_1006ad70  (44 bytes)
 * undefined4 FUN_1006ad70(float param_1, float param_2, int param_3)
 * called by: CBasePlayerWeapon::ItemPostFrame
 */
undefined4 __cdecl FUN_1006ad70(float param_1,float param_2,int param_3)

{
  byte bVar1;
  
  if (param_3 == 0) {
    bVar1 = param_1 < param_2 | (byte)((ushort)((ushort)(param_1 == param_2) << 0xe) >> 8);
  }
  else {
    bVar1 = param_1 < 0.0 | (byte)((ushort)((ushort)(param_1 == 0.0) << 0xe) >> 8);
  }
  if ((POPCOUNT(bVar1) & 1U) != 0) {
    return 1;
  }
  return 0;
}

/* 1006adc0  FUN_1006adc0  (15 bytes)
 * undefined4 FUN_1006adc0(undefined4 param_1)
 * called by: CBasePlayerWeapon::AddToPlayer
 */
undefined4 __thiscall FUN_1006adc0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x70) = param_1;
  return 1;
}

/* 1006b080  FUN_1006b080  (173 bytes)
 * bool FUN_1006b080(int param_1, undefined4 param_2, int param_3, undefined4 param_4)
 * called by: CBasePlayerWeapon::ExtractAmmo
 */
bool __thiscall
FUN_1006b080(void *this,int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  void *this_00;
  int iVar1;
  int iVar2;
  
  if (param_3 < 1) {
    *(undefined4 *)((int)this + 0xa4) = 0xffffffff;
  }
  else if (*(int *)((int)this + 0xa4) == 0) {
    if (param_1 < param_3) {
      param_3 = param_1;
    }
    *(int *)((int)this + 0xa4) = param_3;
    iVar1 = (**(code **)(**(int **)((int)this + 0x70) + 0x6c))(param_1 - param_3,param_2,param_4);
    goto LAB_1006b0ae;
  }
  iVar1 = (**(code **)(**(int **)((int)this + 0x70) + 0x6c))(param_1,param_2,param_4);
LAB_1006b0ae:
  if (0 < iVar1) {
    *(int *)((int)this + 0x9c) = iVar1;
    iVar2 = FUN_1002e680(*(void **)((int)this + 0x70),this);
    if (iVar2 != 0) {
      this_00 = *(void **)(*(int *)((int)this + 4) + 0x208);
      EMIT_SOUND_DYN(this_00,this_00,3,s_items_9mmclip1_wav_100993c8,0x3f800000,0x3f4ccccd,0,100);
    }
  }
  return 0 < iVar1;
}

/* 1006b130  FUN_1006b130  (90 bytes)
 * bool FUN_1006b130(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: CBasePlayerWeapon::ExtractAmmo
 */
bool __thiscall FUN_1006b130(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  void *this_00;
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)((int)this + 0x70) + 0x6c))(param_1,param_2,param_3);
  if (0 < iVar1) {
    *(int *)((int)this + 0xa0) = iVar1;
    this_00 = *(void **)(*(int *)((int)this + 4) + 0x208);
    EMIT_SOUND_DYN(this_00,this_00,3,s_items_9mmclip1_wav_100993c8,0x3f800000,0x3f4ccccd,0,100);
  }
  return 0 < iVar1;
}

/* 1006b1e0  FUN_1006b1e0  (145 bytes)
 * undefined4 FUN_1006b1e0(int param_1, undefined4 param_2, float param_3)
 */
undefined4 __thiscall FUN_1006b1e0(void *this,int param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  iVar1 = *(int *)(*(int *)((int)this + 0x70) + 0x978 + *(int *)((int)this + 0x9c) * 4);
  if (iVar1 < 1) {
    return 0;
  }
  iVar2 = param_1 - *(int *)((int)this + 0xa4);
  if (iVar1 <= iVar2) {
    iVar2 = iVar1;
  }
  if (iVar2 == 0) {
    return 0;
  }
  fVar3 = FUN_10066590();
  *(float *)(*(int *)((int)this + 0x70) + 0x118) = (float)(fVar3 + (float10)param_3);
  iVar1 = *(int *)this;
  iVar2 = (**(code **)(iVar1 + 0x174))(0);
  (**(code **)(iVar1 + 0x150))(param_2,iVar2 != 0);
  *(undefined4 *)((int)this + 0xb0) = 1;
  fVar3 = FUN_10066590();
  *(float *)((int)this + 0x98) = (float)(fVar3 + (float10)3.0);
  return 1;
}

/* 1006bac0  FUN_1006bac0  (129 bytes)
 * undefined4 FUN_1006bac0(int * param_1)
 */
undefined4 __thiscall FUN_1006bac0(void *this,int *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  iVar2 = (**(code **)(*param_1 + 0x138))();
  iVar2 = *(int *)((int)this + iVar2 * 4 + 0x54);
  if (iVar2 != 0) {
    do {
      pbVar3 = (byte *)(gpGlobals->pStringBase + **(int **)(iVar2 + 4));
      pbVar5 = (byte *)(gpGlobals->pStringBase + *(int *)param_1[1]);
      do {
        bVar1 = *pbVar3;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_1006bb1c:
          iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_1006bb21;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_1006bb1c;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_1006bb21:
      if (iVar4 == 0) {
        return 1;
      }
      iVar2 = *(int *)(iVar2 + 0x74);
    } while (iVar2 != 0);
  }
  return 0;
}

/* 1006bcf0  FUN_1006bcf0  (10 bytes)
 * undefined FUN_1006bcf0()
 */
void FUN_1006bcf0(void)

{
  FUN_1006c120((undefined4 *)&DAT_102e00f4);
  return;
}

/* 1006c120  FUN_1006c120  (12 bytes)
 * undefined4 * FUN_1006c120(undefined4 * param_1)
 * called by: FUN_1006bcf0
 */
undefined4 * __fastcall FUN_1006c120(undefined4 *param_1)

{
  FUN_1006c130(param_1);
  return param_1;
}

/* 1006c130  FUN_1006c130  (14 bytes)
 * undefined FUN_1006c130(undefined4 * param_1)
 * called by: FUN_1006c120, FUN_1006c400
 */
void __fastcall FUN_1006c130(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

/* 1006c140  FUN_1006c140  (104 bytes)
 * byte.conflict * FUN_1006c140(int param_1)
 * called by: CEnvGlobal::Spawn, CEnvGlobal::Use, FUN_1006c270, FUN_1006c2a0, FUN_1006c3d0
 */
byte_conflict * __thiscall FUN_1006c140(void *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  if (param_1 == 0) {
    return (byte_conflict *)0x0;
  }
  pbVar2 = *(byte **)this;
  do {
    pbVar3 = (byte *)(gpGlobals->pStringBase + param_1);
    pbVar5 = pbVar2;
    if (pbVar2 == (byte *)0x0) {
      return (byte_conflict *)0x0;
    }
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_1006c18f:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_1006c194;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_1006c18f;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_1006c194:
    if (iVar4 == 0) {
      return pbVar2;
    }
    pbVar2 = *(byte **)(pbVar2 + 100);
  } while( true );
}

/* 1006c200  FUN_1006c200  (103 bytes)
 * undefined FUN_1006c200(int param_1, int param_2, int param_3)
 * called by: CEnvGlobal::Spawn, CEnvGlobal::Use, FUN_1006c330, pfnRestore, pfnSpawn
 */
void __thiscall FUN_1006c200(void *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  int *piVar4;
  
  piVar2 = FUN_1006f6bc(0x68,1);
  piVar2[0x19] = *(int *)this;
  *(int **)this = piVar2;
  pcVar3 = gpGlobals->pStringBase + param_1;
  piVar4 = piVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    *(char *)piVar4 = cVar1;
    piVar4 = (int *)((int)piVar4 + 1);
  } while (cVar1 != '\0');
  piVar4 = piVar2 + 0x10;
  pcVar3 = gpGlobals->pStringBase + param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    *(char *)piVar4 = cVar1;
    piVar4 = (int *)((int)piVar4 + 1);
  } while (cVar1 != '\0');
  piVar2[0x18] = param_3;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return;
}

/* 1006c270  FUN_1006c270  (24 bytes)
 * undefined FUN_1006c270(int param_1, undefined4 param_2)
 * called by: CEnvGlobal::Use, FUN_100378e0
 */
void __thiscall FUN_1006c270(void *this,int param_1,undefined4 param_2)

{
  byte_conflict *pbVar1;
  
  pbVar1 = FUN_1006c140(this,param_1);
  if (pbVar1 != (byte_conflict *)0x0) {
    *(undefined4 *)(pbVar1 + 0x60) = param_2;
  }
  return;
}

/* 1006c2a0  FUN_1006c2a0  (25 bytes)
 * undefined4 FUN_1006c2a0(int param_1)
 * called by: CAutoTrigger::Think, CEnvGlobal::Use, CMultiSource::IsTriggered
 */
undefined4 __thiscall FUN_1006c2a0(void *this,int param_1)

{
  byte_conflict *pbVar1;
  
  pbVar1 = FUN_1006c140(this,param_1);
  if (pbVar1 != (byte_conflict *)0x0) {
    return *(undefined4 *)(pbVar1 + 0x60);
  }
  return 0;
}

/* 1006c2c0  FUN_1006c2c0  (105 bytes)
 * undefined4 FUN_1006c2c0(void * param_1)
 * called by: pfnSaveGlobalState
 */
undefined4 __thiscall FUN_1006c2c0(void *this,void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = CSave::WriteFields(param_1,(byte_conflict *)s_GLOBAL_1009b468,(int)this,0x1009b20c,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)this;
  iVar3 = 0;
  if (0 < *(int *)((int)this + 4)) {
    do {
      if (iVar1 == 0) {
        return 1;
      }
      iVar2 = CSave::WriteFields(param_1,&DAT_1009b460,iVar1,0x1009b21c,3);
      if (iVar2 == 0) {
        return 0;
      }
      iVar1 = *(int *)(iVar1 + 100);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 4));
  }
  return 1;
}

/* 1006c330  FUN_1006c330  (150 bytes)
 * undefined4 FUN_1006c330(void * param_1)
 * called by: pfnRestoreGlobalState
 */
undefined4 __thiscall FUN_1006c330(void *this,void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_68 [64];
  undefined1 auStack_28 [32];
  int local_8;
  
  FUN_1006c400(this);
  iVar1 = CRestore::ReadFields(param_1,(byte_conflict *)s_GLOBAL_1009b468,(int)this,0x1009b20c,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)((int)this + 4);
  iVar3 = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (0 < iVar1) {
    do {
      iVar2 = CRestore::ReadFields(param_1,&DAT_1009b460,(int)local_68,0x1009b21c,3);
      if (iVar2 == 0) {
        return 0;
      }
      FUN_1006c200(this,(int)(local_68 + -(int)gpGlobals->pStringBase),
                   (int)(auStack_28 + -(int)gpGlobals->pStringBase),local_8);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 1;
}

/* 1006c3d0  FUN_1006c3d0  (48 bytes)
 * undefined FUN_1006c3d0(int param_1, int param_2)
 * called by: pfnRestore
 */
void __thiscall FUN_1006c3d0(void *this,int param_1,int param_2)

{
  byte_conflict bVar1;
  byte_conflict *pbVar2;
  byte_conflict *pbVar3;
  
  pbVar2 = FUN_1006c140(this,param_1);
  if (pbVar2 != (byte_conflict *)0x0) {
    pbVar3 = (byte_conflict *)(gpGlobals->pStringBase + param_2);
    pbVar2 = pbVar2 + 0x40;
    do {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      *pbVar2 = bVar1;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != '\0');
  }
  return;
}

/* 1006c400  FUN_1006c400  (37 bytes)
 * undefined FUN_1006c400(undefined4 * param_1)
 * called by: FUN_1006c330, pfnResetGlobalState
 */
void __fastcall FUN_1006c400(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)*param_1;
  while (puVar2 != (undefined *)0x0) {
    puVar1 = *(undefined **)(puVar2 + 100);
    FUN_1006f7f9(puVar2);
    puVar2 = puVar1;
  }
  FUN_1006c130(param_1);
  return;
}

/* 1006c930  FUN_1006c930  (104 bytes)
 * undefined FUN_1006c930(void)
 * called by: CWorld::Precache
 */
void FUN_1006c930(void)

{
  edict_t *peVar1;
  int iVar2;
  entvars_t *peVar3;
  int className;
  
  className = (int)s_bodyque_1009b6c4 - (int)gpGlobals->pStringBase;
  DAT_102e00f0 = (*g_engfuncs.pfnCreateNamedEntity)(className);
  if (DAT_102e00f0 == (edict_t *)0x0) {
    peVar3 = (entvars_t *)0x0;
  }
  else {
    peVar3 = &DAT_102e00f0->v;
  }
  iVar2 = 3;
  do {
    peVar1 = (*g_engfuncs.pfnCreateNamedEntity)(className);
    peVar3->owner = peVar1;
    if (peVar1 == (edict_t *)0x0) {
      peVar3 = (entvars_t *)0x0;
    }
    else {
      peVar3 = &peVar1->v;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  peVar3->owner = DAT_102e00f0;
  return;
}

