/* client.dll - unnamed_1007c190 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1007c190  FUN_1007c190  (880 bytes)
 * undefined FUN_1007c190(int param_1, int param_2, int param_3, int param_4, int param_5, undefined4 * param_6, int param_7, float param_8, int param_9, int param_10, int * param_11, float param_12, float param_13)
 */
void __cdecl
FUN_1007c190(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 *param_6,
            int param_7,float param_8,int param_9,int param_10,int *param_11,float param_12,
            float param_13)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  float10 fVar8;
  float10 fVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined1 *puVar15;
  int *piVar16;
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  int local_54;
  int local_50;
  undefined1 local_4c [16];
  float local_3c;
  undefined1 local_38 [48];
  int local_8;
  
  thunk_FUN_1000c160((int)local_4c);
  for (local_50 = 1; local_50 <= param_5; local_50 = local_50 + 1) {
    thunk_FUN_10007fe0(local_60);
    thunk_FUN_10007fe0(local_6c);
    if (param_9 == 4) {
      do {
        fVar8 = (float10)(*DAT_102e1564)(0xbf000000,0x3f000000);
        fVar9 = (float10)(*DAT_102e1564)(0xbf000000,0x3f000000);
        fVar1 = (float)(fVar9 + (float10)(float)fVar8);
        fVar8 = (float10)(*DAT_102e1564)(0xbf000000,0x3f000000);
        fVar9 = (float10)(*DAT_102e1564)(0xbf000000,0x3f000000);
        fVar2 = (float)(fVar9 + (float10)(float)fVar8);
      } while (1.0 < fVar2 * fVar2 + fVar1 * fVar1);
      for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
        fVar3 = *(float *)(param_3 + local_8 * 4);
        fVar4 = *(float *)(param_7 + local_8 * 4);
        fVar5 = *(float *)(param_4 + local_8 * 4);
        iVar6 = thunk_FUN_10008500(local_60);
        *(float *)(iVar6 + local_8 * 4) =
             fVar2 * param_13 * fVar5 + fVar1 * param_12 * fVar3 + fVar4;
        iVar6 = thunk_FUN_10008500(local_60);
        fVar3 = *(float *)(iVar6 + local_8 * 4);
        fVar4 = (float)param_6[local_8];
        iVar6 = thunk_FUN_10008500(local_6c);
        *(float *)(iVar6 + local_8 * 4) = param_8 * fVar3 + fVar4;
      }
    }
    else {
      for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
        fVar1 = *(float *)(param_3 + local_8 * 4);
        fVar2 = *(float *)(param_7 + local_8 * 4);
        fVar3 = *(float *)(param_4 + local_8 * 4);
        iVar6 = thunk_FUN_10008500(local_60);
        *(float *)(iVar6 + local_8 * 4) = param_13 * fVar3 + param_12 * fVar1 + fVar2;
        iVar6 = thunk_FUN_10008500(local_60);
        fVar1 = *(float *)(iVar6 + local_8 * 4);
        fVar2 = (float)param_6[local_8];
        iVar6 = thunk_FUN_10008500(local_6c);
        *(float *)(iVar6 + local_8 * 4) = param_8 * fVar1 + fVar2;
      }
    }
    (**(code **)(DAT_102e15a8 + 0x28))(0,1);
    (**(code **)(DAT_102e15a8 + 0x2c))();
    (**(code **)(DAT_102e15a8 + 0x34))(param_1 + -1);
    (**(code **)(DAT_102e15a8 + 0x38))(2);
    puVar15 = local_4c;
    uVar13 = 0xffffffff;
    uVar11 = 2;
    uVar7 = thunk_FUN_10008500(local_6c);
    (**(code **)(DAT_102e15a8 + 0x3c))(param_6,uVar7,uVar11,uVar13,puVar15);
    iVar6 = param_2;
    iVar10 = param_3;
    iVar12 = param_9;
    iVar14 = param_10;
    piVar16 = param_11;
    uVar7 = thunk_FUN_10008500(local_38);
    local_54 = thunk_FUN_10007660(param_1,param_6,uVar7,iVar6,iVar10,iVar12,iVar14,piVar16);
    if (local_3c != 1.0) {
      if (param_9 == 2) {
        if (local_54 == 0) {
          iVar6 = param_9;
          uVar7 = thunk_FUN_10008500(local_6c);
          thunk_FUN_1007b820(param_1,(int)local_4c,param_6,uVar7,iVar6);
        }
      }
      else if (param_9 == 3) {
        iVar6 = param_9;
        uVar7 = thunk_FUN_10008500(local_6c);
        thunk_FUN_1007b820(param_1,(int)local_4c,param_6,uVar7,iVar6);
      }
      else if (param_9 == 4) {
        iVar6 = param_9;
        uVar7 = thunk_FUN_10008500(local_6c);
        thunk_FUN_1007b820(param_1,(int)local_4c,param_6,uVar7,iVar6);
      }
      else {
        iVar6 = param_9;
        uVar7 = thunk_FUN_10008500(local_6c);
        thunk_FUN_1007b820(param_1,(int)local_4c,param_6,uVar7,iVar6);
      }
    }
    (**(code **)(DAT_102e15a8 + 0x30))();
  }
  return;
}

/* 1007c5e0  FUN_1007c5e0  (2390 bytes)
 * undefined FUN_1007c5e0(int param_1, undefined4 param_2, float * param_3, float * param_4, byte.conflict param_5, float * param_6, float * param_7, float param_8, float param_9, float param_10, int param_11, int param_12, byte.conflict param_13, int param_14)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_1007c5e0(int param_1,undefined4 param_2,float *param_3,float *param_4,byte_conflict param_5,
            float *param_6,float *param_7,float param_8,float param_9,float param_10,int param_11,
            int param_12,byte_conflict param_13,int param_14)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  void *pvVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float *pfVar10;
  void *extraout_ECX;
  float10 fVar11;
  float10 fVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  undefined4 uVar18;
  byte_conflict bVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined *puVar22;
  float local_90;
  undefined1 local_4c [12];
  undefined1 local_40 [12];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  
  if ((DAT_1031761c & 1) == 0) {
    DAT_1031761c = DAT_1031761c | 1;
    thunk_FUN_1000c160(0x10317578);
    FUN_100bc490(0x1007d230);
  }
  if ((DAT_1031761c & 2) == 0) {
    DAT_1031761c = DAT_1031761c | 2;
    thunk_FUN_10007fe0(&DAT_10317610);
    FUN_100bc490(0x1007d210);
  }
  if ((DAT_1031761c & 4) == 0) {
    DAT_1031761c = DAT_1031761c | 4;
    thunk_FUN_10007fe0(&DAT_10317620);
    FUN_100bc490(0x1007d1f0);
  }
  if ((DAT_1031761c & 8) == 0) {
    DAT_1031761c = DAT_1031761c | 8;
    thunk_FUN_10007fe0(&DAT_10317568);
    FUN_100bc490(0x1007d1d0);
  }
  if ((DAT_1031761c & 0x10) == 0) {
    DAT_1031761c = DAT_1031761c | 0x10;
    thunk_FUN_10007fe0(&DAT_10317554);
    FUN_100bc490(0x1007d1b0);
  }
  if ((DAT_1031761c & 0x20) == 0) {
    DAT_1031761c = DAT_1031761c | 0x20;
    thunk_FUN_10007fe0(&DAT_103175c0);
    FUN_100bc490(0x1007d190);
  }
  if ((DAT_1031bee8 == 1) || (DAT_1031bee4 != 0.0)) {
    local_90._0_1_ = '\x01';
  }
  else {
    local_90._0_1_ = '\0';
  }
  DAT_103175bc = local_90._0_1_;
  DAT_10317550 = thunk_FUN_1001d7f0(param_12);
  if (param_11 == 2) {
    fVar16 = *param_7;
    fVar14 = *param_6;
    pfVar3 = (float *)thunk_FUN_10008500(&DAT_10317620);
    *pfVar3 = fVar16 * 4096.0 + fVar14;
    fVar16 = param_7[1];
    fVar14 = param_6[1];
    iVar4 = thunk_FUN_10008500(&DAT_10317620);
    *(float *)(iVar4 + 4) = fVar16 * 4096.0 + fVar14;
    fVar16 = param_7[2];
    fVar14 = param_6[2];
    iVar4 = thunk_FUN_10008500(&DAT_10317620);
    *(float *)(iVar4 + 8) = fVar16 * 4096.0 + fVar14;
    (**(code **)(DAT_102e15a8 + 0x28))(0,1);
    (**(code **)(DAT_102e15a8 + 0x2c))();
    (**(code **)(DAT_102e15a8 + 0x34))(param_1 + -1);
    (**(code **)(DAT_102e15a8 + 0x38))(2);
    puVar22 = &DAT_10317578;
    uVar20 = 0xffffffff;
    uVar18 = 2;
    uVar5 = thunk_FUN_10008500(&DAT_10317620);
    (**(code **)(DAT_102e15a8 + 0x3c))(param_6,uVar5,uVar18,uVar20,puVar22);
    if (_DAT_10317588 != 1.0) {
      iVar4 = param_11;
      uVar5 = thunk_FUN_10008500(&DAT_10317620);
      thunk_FUN_1007b820(param_1,0x10317578,param_6,uVar5,iVar4);
      thunk_FUN_100075f0(0x10317578);
    }
    (**(code **)(DAT_102e15a8 + 0x30))();
  }
  else {
    for (DAT_1031754c = 1; DAT_1031754c <= param_5; DAT_1031754c = DAT_1031754c + 1) {
      fVar11 = thunk_FUN_1003fcb0(param_14 + (uint)DAT_1031754c,-0.5,0.5);
      fVar12 = thunk_FUN_1003fcb0(param_14 + 1 + (uint)DAT_1031754c,-0.5,0.5);
      local_8 = (float)(fVar12 + (float10)(float)fVar11);
      fVar11 = thunk_FUN_1003fcb0(param_14 + 2 + (uint)DAT_1031754c,-0.5,0.5);
      fVar12 = thunk_FUN_1003fcb0(param_14 + 3 + (uint)DAT_1031754c,-0.5,0.5);
      local_c = (float)(fVar12 + (float10)(float)fVar11);
      local_10 = local_c * local_c + local_8 * local_8;
      fVar1 = local_8 * param_8;
      fVar16 = *param_3;
      fVar14 = *param_7;
      fVar2 = local_c * param_9;
      fVar15 = *param_4;
      pfVar3 = (float *)thunk_FUN_10008500(&DAT_10317610);
      *pfVar3 = fVar2 * fVar15 + fVar1 * fVar16 + fVar14;
      fVar1 = local_8 * param_8;
      fVar16 = param_3[1];
      fVar14 = param_7[1];
      fVar2 = local_c * param_9;
      fVar15 = param_4[1];
      iVar4 = thunk_FUN_10008500(&DAT_10317610);
      *(float *)(iVar4 + 4) = fVar2 * fVar15 + fVar1 * fVar16 + fVar14;
      fVar1 = local_8 * param_8;
      fVar16 = param_3[2];
      fVar14 = param_7[2];
      fVar2 = local_c * param_9;
      fVar15 = param_4[2];
      iVar4 = thunk_FUN_10008500(&DAT_10317610);
      *(float *)(iVar4 + 8) = fVar2 * fVar15 + fVar1 * fVar16 + fVar14;
      iVar4 = *(int *)(DAT_10317550 + 0x14);
      pfVar3 = (float *)thunk_FUN_10008500(&DAT_10317610);
      fVar16 = *pfVar3;
      fVar14 = *param_6;
      pfVar3 = (float *)thunk_FUN_10008500(&DAT_10317620);
      *pfVar3 = (float)iVar4 * fVar16 + fVar14;
      iVar4 = *(int *)(DAT_10317550 + 0x14);
      iVar6 = thunk_FUN_10008500(&DAT_10317610);
      fVar16 = *(float *)(iVar6 + 4);
      fVar14 = param_6[1];
      iVar6 = thunk_FUN_10008500(&DAT_10317620);
      *(float *)(iVar6 + 4) = (float)iVar4 * fVar16 + fVar14;
      iVar4 = *(int *)(DAT_10317550 + 0x14);
      iVar6 = thunk_FUN_10008500(&DAT_10317610);
      fVar16 = *(float *)(iVar6 + 8);
      fVar14 = param_6[2];
      iVar6 = thunk_FUN_10008500(&DAT_10317620);
      *(float *)(iVar6 + 8) = (float)iVar4 * fVar16 + fVar14;
      if (DAT_103175bc == '\0') {
        (**(code **)(DAT_102e15a8 + 0x28))(0,1);
        (**(code **)(DAT_102e15a8 + 0x2c))();
        (**(code **)(DAT_102e15a8 + 0x34))(param_1 + -1);
        (**(code **)(DAT_102e15a8 + 0x38))(2);
        puVar22 = &DAT_10317578;
        uVar20 = 0xffffffff;
        uVar18 = 2;
        uVar5 = thunk_FUN_10008500(&DAT_10317620);
        (**(code **)(DAT_102e15a8 + 0x3c))(param_6,uVar5,uVar18,uVar20,puVar22);
        if (_DAT_10317588 != 1.0) {
          pfVar3 = (float *)thunk_FUN_10008500(&DAT_1031758c);
          fVar16 = *param_6;
          fVar14 = *pfVar3;
          pfVar3 = (float *)thunk_FUN_10008500(&DAT_10317568);
          *pfVar3 = fVar16 - fVar14;
          iVar4 = thunk_FUN_10008500(&DAT_1031758c);
          fVar16 = param_6[1];
          fVar14 = *(float *)(iVar4 + 4);
          iVar4 = thunk_FUN_10008500(&DAT_10317568);
          *(float *)(iVar4 + 4) = fVar16 - fVar14;
          iVar4 = thunk_FUN_10008500(&DAT_1031758c);
          fVar16 = param_6[2];
          fVar14 = *(float *)(iVar4 + 8);
          iVar4 = thunk_FUN_10008500(&DAT_10317568);
          *(float *)(iVar4 + 8) = fVar16 - fVar14;
          pvVar7 = (void *)thunk_FUN_10008500(&DAT_10317568);
          fVar11 = thunk_FUN_10097fc0(extraout_ECX,pvVar7);
          _DAT_10317560 = (float)(fVar11 / ((float10)*(int *)(DAT_10317550 + 0x20) / (float10)0.1));
          lVar13 = __ftol();
          fVar11 = thunk_FUN_1001d920((int)lVar13);
          DAT_103175cc = (float)fVar11;
          DAT_103175cc = (float)*(int *)(DAT_10317550 + 0x1c) * param_10 * DAT_103175cc;
          if (param_11 == 1) {
            iVar4 = param_11;
            uVar5 = thunk_FUN_10008500(&DAT_10317620);
            thunk_FUN_1007b820(param_1,0x10317578,param_6,uVar5,iVar4);
            thunk_FUN_100075f0(0x10317578);
          }
          else {
            iVar4 = param_11;
            uVar5 = thunk_FUN_10008500(&DAT_10317620);
            thunk_FUN_1007b820(param_1,0x10317578,param_6,uVar5,iVar4);
            thunk_FUN_100075f0(0x10317578);
          }
          DAT_103175cc = DAT_103175cc * *(float *)(DAT_10317550 + 0x18);
        }
        (**(code **)(DAT_102e15a8 + 0x30))();
      }
      else {
        thunk_FUN_10007fe0(&local_1c);
        thunk_FUN_10007fe0(&local_28);
        thunk_FUN_10015740(&local_34,param_6);
        local_1c = local_34;
        local_18 = local_30;
        local_14 = local_2c;
        local_28 = DAT_10317610;
        local_24 = DAT_10317614;
        local_20 = DAT_10317618;
        thunk_FUN_1006a1c0(&DAT_102f3710,param_1,&local_1c,&local_28,&param_10,&param_12,param_11);
      }
    }
    if ((((DAT_103175bc == '\0') && (param_11 != 2)) && (param_11 != 1)) && (5.0 < DAT_103175cc)) {
      if (48.0 <= DAT_103175cc) {
        local_90 = 48.0;
      }
      else {
        local_90 = DAT_103175cc;
      }
      pfVar3 = thunk_FUN_1000cb20(&DAT_10317610,local_40,local_90);
      puVar8 = thunk_FUN_1000d970(&DAT_1031758c,local_4c,pfVar3);
      _DAT_10317554 = *puVar8;
      _DAT_10317558 = puVar8[1];
      _DAT_1031755c = puVar8[2];
      uVar18 = 0;
      uVar5 = thunk_FUN_10008500(&DAT_10317554);
      iVar4 = (*DAT_102e153c)(uVar5,uVar18);
      if (iVar4 != -2) {
        puVar8 = (undefined4 *)thunk_FUN_10008500(&DAT_1031758c);
        puVar9 = (undefined4 *)thunk_FUN_10008500(&DAT_103175c0);
        *puVar9 = *puVar8;
        iVar4 = thunk_FUN_10008500(&DAT_1031758c);
        iVar6 = thunk_FUN_10008500(&DAT_103175c0);
        *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar4 + 4);
        iVar4 = thunk_FUN_10008500(&DAT_1031758c);
        iVar6 = thunk_FUN_10008500(&DAT_103175c0);
        *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar4 + 8);
        (**(code **)(DAT_102e15a8 + 0x38))(2);
        puVar22 = &DAT_10317578;
        uVar21 = 0xffffffff;
        uVar20 = 0;
        uVar5 = thunk_FUN_10008500(&DAT_1031758c);
        uVar18 = thunk_FUN_10008500(&DAT_10317554);
        (**(code **)(DAT_102e15a8 + 0x3c))(uVar18,uVar5,uVar20,uVar21,puVar22);
        if (_DAT_10317588 != 1.0) {
          iVar4 = 2;
          uVar5 = thunk_FUN_10008500(&DAT_103175c0);
          uVar18 = thunk_FUN_10008500(&DAT_10317554);
          thunk_FUN_1007b820(param_1,0x10317578,uVar18,uVar5,iVar4);
          thunk_FUN_100075f0(0x10317578);
        }
        iVar17 = 2;
        fVar15 = 0.0;
        fVar14 = 0.0;
        fVar16 = DAT_103175cc;
        iVar4 = param_12;
        iVar6 = param_14;
        bVar19 = param_13;
        pfVar3 = (float *)thunk_FUN_10008500(&DAT_10317610);
        pfVar10 = (float *)thunk_FUN_10008500(&DAT_10317554);
        thunk_FUN_1007c5e0(param_1,param_2,param_3,param_4,'\x01',pfVar10,pfVar3,fVar14,fVar15,
                           fVar16,iVar17,iVar4,bVar19,iVar6);
      }
    }
  }
  return;
}

/* 1007d190  FUN_1007d190  (16 bytes)
 * undefined FUN_1007d190(void)
 */
void FUN_1007d190(void)

{
  return;
}

/* 1007d1b0  FUN_1007d1b0  (16 bytes)
 * undefined FUN_1007d1b0(void)
 */
void FUN_1007d1b0(void)

{
  return;
}

/* 1007d1d0  FUN_1007d1d0  (16 bytes)
 * undefined FUN_1007d1d0(void)
 */
void FUN_1007d1d0(void)

{
  return;
}

/* 1007d1f0  FUN_1007d1f0  (16 bytes)
 * undefined FUN_1007d1f0(void)
 */
void FUN_1007d1f0(void)

{
  return;
}

/* 1007d210  FUN_1007d210  (16 bytes)
 * undefined FUN_1007d210(void)
 */
void FUN_1007d210(void)

{
  return;
}

/* 1007d230  FUN_1007d230  (16 bytes)
 * undefined FUN_1007d230(void)
 */
void FUN_1007d230(void)

{
  return;
}

/* 1007d250  FUN_1007d250  (845 bytes)
 * undefined1 FUN_1007d250(undefined4 param_1, int param_2, undefined4 param_3, undefined4 param_4)
 */
undefined1 __cdecl
FUN_1007d250(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint local_b0 [3];
  undefined1 local_a4;
  char local_70 [2];
  uint local_6e [15];
  uint *local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  char *local_20 [4];
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_5 = 0x43;
  local_28 = 0x3f4ccccd;
  uVar4 = 0;
  uVar1 = thunk_FUN_10008500(param_2 + 0x14);
  iVar2 = (*DAT_102e153c)(uVar1,uVar4);
  if (iVar2 == -6) {
    local_5 = 0;
  }
  else {
    local_2c = (**(code **)(DAT_102e15a8 + 0x20))(param_2);
    local_5 = 0;
    if ((local_2c < 1) || (iVar2 = (*DAT_102e14e8)(), iVar2 < local_2c)) {
      local_30 = (uint *)(**(code **)(DAT_102e15a8 + 0x4c))
                                   (*(undefined4 *)(param_2 + 0x30),param_3,param_4);
      if (local_30 != (uint *)0x0) {
        FUN_100bba20((uint *)local_70,local_30);
        local_30 = (uint *)local_70;
        if ((local_70[0] == '-') || (local_70[0] == '+')) {
          local_30 = local_6e;
        }
        if (((((char)*local_30 == '{') || ((char)*local_30 == '!')) || ((char)*local_30 == '~')) ||
           ((char)*local_30 == ' ')) {
          local_30 = (uint *)((int)local_30 + 1);
        }
        FUN_100bba20(local_b0,local_30);
        local_a4 = 0;
        uVar1 = thunk_FUN_10058b50((byte_conflict *)local_b0);
        local_5 = (undefined1)uVar1;
      }
    }
    else {
      local_5 = 0x46;
    }
    switch(local_5) {
    case 0x44:
      local_c = 0x3f666666;
      local_10 = 0x3dcccccd;
      local_20[0] = "player/pl_dirt1.wav";
      local_20[1] = "player/pl_dirt2.wav";
      local_20[2] = "player/pl_dirt3.wav";
      local_24 = 3;
      break;
    default:
      local_c = 0x3f666666;
      local_10 = 0x3f19999a;
      local_20[0] = "player/pl_step1.wav";
      local_20[1] = "player/pl_step2.wav";
      local_24 = 2;
      break;
    case 0x46:
      return local_5;
    case 0x47:
      local_c = 0x3f666666;
      local_10 = 0x3f000000;
      local_20[0] = "player/pl_grate1.wav";
      local_20[1] = "player/pl_grate4.wav";
      local_24 = 2;
      break;
    case 0x4d:
      local_c = 0x3f666666;
      local_10 = 0x3e99999a;
      local_20[0] = "player/pl_metal1.wav";
      local_20[1] = "player/pl_metal2.wav";
      local_24 = 2;
      break;
    case 0x50:
    case 0x59:
      local_c = 0x3f4ccccd;
      local_10 = 0x3e4ccccd;
      local_20[0] = "debris/glass1.wav";
      local_20[1] = "debris/glass2.wav";
      local_20[2] = "debris/glass3.wav";
      local_24 = 3;
      break;
    case 0x53:
      local_c = 0x3f666666;
      local_10 = 0;
      local_20[0] = "player/pl_slosh1.wav";
      local_20[1] = "player/pl_slosh3.wav";
      local_20[2] = "player/pl_slosh2.wav";
      local_20[3] = "player/pl_slosh4.wav";
      local_24 = 4;
      break;
    case 0x54:
      local_c = 0x3f4ccccd;
      local_10 = 0x3e4ccccd;
      local_20[0] = "player/pl_tile1.wav";
      local_20[1] = "player/pl_tile3.wav";
      local_20[2] = "player/pl_tile2.wav";
      local_20[3] = "player/pl_tile4.wav";
      local_24 = 4;
      break;
    case 0x56:
      local_c = 0x3f000000;
      local_10 = 0x3e99999a;
      local_20[0] = "player/pl_duct1.wav";
      local_20[1] = "player/pl_duct1.wav";
      local_24 = 2;
      break;
    case 0x57:
      local_c = 0x3f666666;
      local_10 = 0x3e4ccccd;
      local_20[0] = "debris/wood1.wav";
      local_20[1] = "debris/wood2.wav";
      local_20[2] = "debris/wood3.wav";
      local_24 = 3;
    }
    iVar2 = (*DAT_102e1568)(0,0xf);
    iVar2 = (*DAT_102e1568)(0,local_24 + -1,local_c,local_28,0,iVar2 + 0x60);
    pcVar3 = local_20[iVar2];
    uVar4 = 6;
    uVar1 = thunk_FUN_10008500(param_2 + 0x14);
    (**(code **)(DAT_102e15a8 + 4))(0,uVar1,uVar4,pcVar3);
  }
  return local_5;
}

/* 1007d6c0  FUN_1007d6c0  (397 bytes)
 * undefined FUN_1007d6c0(float * param_1, float * param_2)
 */
void __cdecl FUN_1007d6c0(float *param_1,float *param_2)

{
  double dVar1;
  float10 extraout_ST0;
  longlong lVar2;
  float local_10;
  float local_c;
  
  if ((param_2[1] == 0.0) && (*param_2 == 0.0)) {
    local_c = 0.0;
    if (param_2[2] <= 0.0) {
      local_10 = 270.0;
    }
    else {
      local_10 = 90.0;
    }
  }
  else {
    if (*param_2 == 0.0) {
      if (param_2[1] <= 0.0) {
        local_c = -90.0;
      }
      else {
        local_c = 90.0;
      }
    }
    else {
      FUN_100c1560(SUB84((double)param_2[1],0),(int)((ulonglong)(double)param_2[1] >> 0x20),
                   SUB84((double)*param_2,0),(int)((ulonglong)(double)*param_2 >> 0x20));
      lVar2 = __ftol();
      local_c = (float)(int)lVar2;
    }
    if (local_c < 0.0) {
      local_c = local_c + 360.0;
    }
    dVar1 = (double)(param_2[1] * param_2[1] + *param_2 * *param_2);
    FUN_100bbfe4(param_2,SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
    FUN_100c1560(SUB84((double)param_2[2],0),(int)((ulonglong)(double)param_2[2] >> 0x20),
                 SUB84((double)(float)extraout_ST0,0),
                 (int)((ulonglong)(double)(float)extraout_ST0 >> 0x20));
    lVar2 = __ftol();
    local_10 = (float)(int)lVar2;
    if (local_10 < 0.0) {
      local_10 = local_10 + 360.0;
    }
  }
  *param_1 = -local_10;
  param_1[1] = local_c;
  param_1[2] = 0.0;
  return;
}

/* 1007d8b0  FUN_1007d8b0  (630 bytes)
 * undefined FUN_1007d8b0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1007d8b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  float *pfVar3;
  float in_stack_0000001c;
  float in_stack_00000020;
  undefined1 local_64 [12];
  undefined1 local_58 [12];
  undefined1 local_4c [12];
  undefined1 local_40 [12];
  undefined1 local_34 [12];
  undefined1 local_28 [12];
  undefined1 local_1c [12];
  undefined1 local_10 [12];
  
  if ((DAT_10318178 & 1) == 0) {
    DAT_10318178 = DAT_10318178 | 1;
    thunk_FUN_1007dbf0(0x10317b20);
    FUN_100bc490(0x1007dbd0);
  }
  _DAT_10317a24 = thunk_FUN_1008fd20(&DAT_1031abb0,(uint *)"sprites/bullet_trail.spr",5);
  if (_DAT_10317a24 != -1) {
    _DAT_10317b64 = 0;
    DAT_10317bdb = 0;
    DAT_10317bda = 0;
    DAT_10317b48 = 0;
    DAT_10317b20 = 1;
    _DAT_10317b74 = 0x3ca3d70a;
    _DAT_10317b70 = 0x3f000000;
    _DAT_10317bd8 = DAT_10317a24;
    _DAT_10317b80 = 0;
    _DAT_10317b68 = 0;
    _DAT_10317b7c = 0;
    _DAT_10317bd4 = in_stack_0000001c;
    _DAT_10317b30 = param_1;
    _DAT_10317b34 = param_2;
    _DAT_10317b38 = param_3;
    DAT_10317b21 = 4;
    puVar1 = (undefined4 *)thunk_FUN_10008500(&DAT_10317b4c);
    *puVar1 = 0;
    iVar2 = thunk_FUN_10008500(&DAT_10317b4c);
    *(undefined4 *)(iVar2 + 4) = 0;
    iVar2 = thunk_FUN_10008500(&DAT_10317b4c);
    *(undefined4 *)(iVar2 + 8) = 0;
    _DAT_10317b78 = 0;
    _DAT_10317bb4 = 0;
    _DAT_10317bc4 = 0;
    _DAT_10317bb8 = 0x3f800000;
    _DAT_10317bc8 = 0;
    _DAT_10317bbc = 0x3f800000;
    _DAT_10317bcc = 0x3f800000;
    _DAT_10317bc0 = 0;
    _DAT_10317bd0 = 0x3f800000;
    pfVar3 = thunk_FUN_1000cb20(&DAT_1031ab74,local_10,in_stack_00000020);
    puVar1 = thunk_FUN_1000ca70(&stack0x00000010,local_1c,pfVar3);
    _DAT_10317b84 = *puVar1;
    _DAT_10317b88 = puVar1[1];
    _DAT_10317b8c = puVar1[2];
    pfVar3 = thunk_FUN_1000cb20(&DAT_1031ab74,local_28,in_stack_00000020);
    puVar1 = thunk_FUN_1000d970(&stack0x00000010,local_34,pfVar3);
    _DAT_10317b90 = *puVar1;
    _DAT_10317b94 = puVar1[1];
    _DAT_10317b98 = puVar1[2];
    pfVar3 = thunk_FUN_1000cb20(&DAT_1031ab74,local_40,in_stack_0000001c);
    puVar1 = thunk_FUN_1000d970(&param_1,local_4c,pfVar3);
    _DAT_10317b9c = *puVar1;
    _DAT_10317ba0 = puVar1[1];
    _DAT_10317ba4 = puVar1[2];
    pfVar3 = thunk_FUN_1000cb20(&DAT_1031ab74,local_58,in_stack_0000001c);
    puVar1 = thunk_FUN_1000ca70(&param_1,local_64,pfVar3);
    _DAT_10317ba8 = *puVar1;
    _DAT_10317bac = puVar1[1];
    _DAT_10317bb0 = puVar1[2];
    thunk_FUN_1008ffc0(&DAT_1031abb0,(undefined4 *)&DAT_10317b20,0,0);
  }
  return;
}

/* 1007dbd0  FUN_1007dbd0  (16 bytes)
 * undefined FUN_1007dbd0(void)
 */
void FUN_1007dbd0(void)

{
  return;
}

/* 1007dbf0  FUN_1007dbf0  (102 bytes)
 * int FUN_1007dbf0(int param_1)
 */
int __fastcall FUN_1007dbf0(int param_1)

{
  thunk_FUN_10007fe0(param_1 + 4);
  thunk_FUN_10007fe0(param_1 + 0x10);
  thunk_FUN_10007fe0(param_1 + 0x1c);
  thunk_FUN_10007fe0(param_1 + 0x2c);
  thunk_FUN_10007fe0(param_1 + 0x38);
  thunk_FUN_1006a030(param_1 + 100);
  thunk_FUN_10007fe0(param_1 + 0xbc);
  return param_1;
}

/* 1007dc70  FUN_1007dc70  (323 bytes)
 * undefined FUN_1007dc70(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1007dc70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 in_stack_0000001c;
  
  if ((DAT_10317bfc & 1) == 0) {
    DAT_10317bfc = DAT_10317bfc | 1;
    thunk_FUN_1007dbf0(0x10317850);
    FUN_100bc490(0x1007de10);
  }
  _DAT_10317768 = thunk_FUN_1008fd20(&DAT_1031abb0,(uint *)"sprites/bullet_wave.spr",5);
  if (_DAT_10317768 != -1) {
    _DAT_10317894 = 0;
    DAT_1031790b = 0;
    DAT_1031790a = 0;
    DAT_10317878 = 0;
    DAT_10317850 = 1;
    _DAT_103178a4 = 0x3d0f5c29;
    _DAT_103178a0 = 0x3f19999a;
    _DAT_10317908 = DAT_10317768;
    _DAT_103178b0 = 0;
    _DAT_10317898 = 0;
    _DAT_103178ac = 0;
    _DAT_10317904 = in_stack_0000001c;
    _DAT_10317860 = param_1;
    _DAT_10317864 = param_2;
    _DAT_10317868 = param_3;
    DAT_10317851 = 0;
    puVar1 = (undefined4 *)thunk_FUN_10008500(&DAT_1031787c);
    *puVar1 = 0;
    iVar2 = thunk_FUN_10008500(&DAT_1031787c);
    *(undefined4 *)(iVar2 + 4) = 0;
    iVar2 = thunk_FUN_10008500(&DAT_1031787c);
    *(undefined4 *)(iVar2 + 8) = 0;
    _DAT_103178a8 = 0;
    thunk_FUN_1008ffc0(&DAT_1031abb0,(undefined4 *)&DAT_10317850,0,0);
  }
  return;
}

/* 1007de10  FUN_1007de10  (16 bytes)
 * undefined FUN_1007de10(void)
 */
void FUN_1007de10(void)

{
  return;
}

/* 1007de30  FUN_1007de30  (1301 bytes)
 * undefined FUN_1007de30(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1007de30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  void *pvVar6;
  float *pfVar7;
  float *pfVar8;
  void *pvVar9;
  float10 fVar10;
  void *in_stack_00000028;
  void *in_stack_0000002c;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  undefined1 local_138 [12];
  undefined1 local_12c [12];
  undefined1 local_120 [12];
  undefined1 local_114 [12];
  undefined1 local_108 [12];
  undefined1 local_fc [12];
  undefined1 local_f0 [12];
  undefined1 local_e4 [12];
  undefined1 local_d8 [12];
  undefined1 local_cc [12];
  undefined1 local_c0 [12];
  undefined1 local_b4 [12];
  undefined1 local_a8 [12];
  undefined1 local_9c [12];
  undefined1 local_90 [12];
  undefined1 local_84 [12];
  undefined1 local_78 [12];
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  int local_18;
  void *local_14;
  float local_10;
  float local_c;
  float local_8;
  
  if ((DAT_10317dd0 & 1) == 0) {
    DAT_10317dd0 = DAT_10317dd0 | 1;
    thunk_FUN_1007dbf0(0x10317930);
    FUN_100bc490(0x1007e530);
  }
  if ((DAT_10317dd0 & 2) == 0) {
    DAT_10317dd0 = DAT_10317dd0 | 2;
    thunk_FUN_10007fe0(&DAT_10317f98);
    FUN_100bc490(0x1007e510);
  }
  if ((DAT_10317dd0 & 4) == 0) {
    DAT_10317dd0 = DAT_10317dd0 | 4;
    thunk_FUN_10007fe0(&DAT_10317a14);
    FUN_100bc490(0x1007e4f0);
  }
  _DAT_10317ce0 = thunk_FUN_1008fd20(&DAT_1031abb0,(uint *)"sprites/bullet_trail3.spr",5);
  if (_DAT_10317ce0 != -1) {
    uVar1 = thunk_FUN_10008500(&DAT_10317a14);
    uVar2 = thunk_FUN_10008500(&DAT_10317f98);
    uVar13 = 0;
    uVar3 = thunk_FUN_10008500(&stack0x0000001c);
    (*DAT_102e14b8)(uVar3,uVar13,uVar2,uVar1);
    _DAT_10317974 = 0;
    DAT_103179eb = 0;
    DAT_103179ea = 0;
    DAT_10317958 = 0;
    DAT_10317930 = 1;
    _DAT_10317984 = 0x3d0f5c29;
    _DAT_10317980 = 0x3f333333;
    _DAT_103179e8 = DAT_10317ce0;
    _DAT_10317990 = 0;
    _DAT_10317978 = 0;
    _DAT_1031798c = 0;
    _DAT_103179e4 = in_stack_00000028;
    _DAT_10317940 = param_1;
    _DAT_10317944 = param_2;
    _DAT_10317948 = param_3;
    DAT_10317931 = 4;
    puVar4 = (undefined4 *)thunk_FUN_10008500(&DAT_1031795c);
    *puVar4 = 0;
    iVar5 = thunk_FUN_10008500(&DAT_1031795c);
    *(undefined4 *)(iVar5 + 4) = 0;
    iVar5 = thunk_FUN_10008500(&DAT_1031795c);
    *(undefined4 *)(iVar5 + 8) = 0;
    _DAT_10317988 = 0;
    if (*(float *)(DAT_102e829c + 0xc) <= 3.0) {
      local_8 = 3.0;
    }
    else {
      local_8 = 5.0;
    }
    local_c = ((360.0 / local_8) * 3.1415927) / 180.0;
    local_14 = (void *)0x0;
    local_10 = 1.0 / local_8;
    _DAT_103179d4 = 0;
    _DAT_103179d8 = 0;
    _DAT_103179dc = 0x3f800000;
    _DAT_103179e0 = 0x3f800000;
    for (local_18 = 0; (float)local_18 < local_8; local_18 = local_18 + 1) {
      _DAT_103179c4 = (float)local_18 * local_10;
      _DAT_103179c8 = (float)local_18 * local_10 + local_10;
      _DAT_103179cc = (float)local_18 * local_10 + local_10;
      _DAT_103179d0 = (float)local_18 * local_10;
      puVar12 = local_54;
      pvVar9 = in_stack_00000028;
      fVar10 = (float10)thunk_FUN_1007e4c0(puVar12,(float)local_14);
      pvVar6 = thunk_FUN_1000cb20(&DAT_10317a14,local_48,(float)fVar10);
      pfVar7 = thunk_FUN_1000cb20(pvVar6,puVar12,(float)pvVar9);
      puVar12 = local_60;
      puVar11 = local_30;
      pvVar9 = in_stack_00000028;
      fVar10 = (float10)thunk_FUN_1007e490(local_14,(float)local_14);
      pvVar6 = thunk_FUN_1000cb20(&DAT_10317f98,local_24,(float)fVar10);
      pfVar8 = thunk_FUN_1000cb20(pvVar6,puVar11,(float)pvVar9);
      pvVar9 = thunk_FUN_1000d970(&param_1,local_3c,pfVar8);
      puVar4 = thunk_FUN_1000d970(pvVar9,puVar12,pfVar7);
      _DAT_10317994 = *puVar4;
      _DAT_10317998 = puVar4[1];
      _DAT_1031799c = puVar4[2];
      puVar12 = local_9c;
      pvVar9 = in_stack_00000028;
      fVar10 = (float10)thunk_FUN_1007e4c0(puVar12,(float)local_14 + local_c);
      pvVar6 = thunk_FUN_1000cb20(&DAT_10317a14,local_90,(float)fVar10);
      pfVar7 = thunk_FUN_1000cb20(pvVar6,puVar12,(float)pvVar9);
      puVar11 = local_a8;
      puVar12 = local_78;
      pvVar9 = in_stack_00000028;
      fVar10 = (float10)thunk_FUN_1007e490(in_stack_00000028,(float)local_14 + local_c);
      pvVar6 = thunk_FUN_1000cb20(&DAT_10317f98,local_6c,(float)fVar10);
      pfVar8 = thunk_FUN_1000cb20(pvVar6,puVar12,(float)pvVar9);
      pvVar9 = thunk_FUN_1000d970(&param_1,local_84,pfVar8);
      puVar4 = thunk_FUN_1000d970(pvVar9,puVar11,pfVar7);
      _DAT_103179a0 = *puVar4;
      _DAT_103179a4 = puVar4[1];
      _DAT_103179a8 = puVar4[2];
      puVar12 = local_e4;
      pvVar9 = in_stack_0000002c;
      fVar10 = (float10)thunk_FUN_1007e4c0(puVar12,(float)local_14);
      pvVar6 = thunk_FUN_1000cb20(&DAT_10317a14,local_d8,(float)fVar10);
      pfVar7 = thunk_FUN_1000cb20(pvVar6,puVar12,(float)pvVar9);
      puVar12 = local_f0;
      puVar11 = local_c0;
      pvVar9 = in_stack_0000002c;
      fVar10 = (float10)thunk_FUN_1007e490(local_14,(float)local_14);
      pvVar6 = thunk_FUN_1000cb20(&DAT_10317f98,local_b4,(float)fVar10);
      pfVar8 = thunk_FUN_1000cb20(pvVar6,puVar11,(float)pvVar9);
      pvVar9 = thunk_FUN_1000d970(&stack0x00000010,local_cc,pfVar8);
      puVar4 = thunk_FUN_1000d970(pvVar9,puVar12,pfVar7);
      _DAT_103179b8 = *puVar4;
      _DAT_103179bc = puVar4[1];
      _DAT_103179c0 = puVar4[2];
      puVar12 = local_12c;
      pvVar9 = in_stack_0000002c;
      fVar10 = (float10)thunk_FUN_1007e4c0(puVar12,(float)local_14 + local_c);
      pvVar6 = thunk_FUN_1000cb20(&DAT_10317a14,local_120,(float)fVar10);
      pfVar7 = thunk_FUN_1000cb20(pvVar6,puVar12,(float)pvVar9);
      puVar12 = local_138;
      puVar11 = local_108;
      pvVar9 = in_stack_0000002c;
      fVar10 = (float10)thunk_FUN_1007e490(in_stack_0000002c,(float)local_14 + local_c);
      pvVar6 = thunk_FUN_1000cb20(&DAT_10317f98,local_fc,(float)fVar10);
      pfVar8 = thunk_FUN_1000cb20(pvVar6,puVar11,(float)pvVar9);
      pvVar9 = thunk_FUN_1000d970(&stack0x00000010,local_114,pfVar8);
      puVar4 = thunk_FUN_1000d970(pvVar9,puVar12,pfVar7);
      _DAT_103179ac = *puVar4;
      _DAT_103179b0 = puVar4[1];
      _DAT_103179b4 = puVar4[2];
      local_14 = (void *)((float)local_14 + local_c);
      iVar5 = thunk_FUN_1008ffc0(&DAT_1031abb0,(undefined4 *)&DAT_10317930,0,0);
      if (iVar5 == -1) {
        return;
      }
    }
  }
  return;
}

/* 1007e490  FUN_1007e490  (36 bytes)
 * undefined FUN_1007e490(float param_1)
 */
void __thiscall FUN_1007e490(void *this,float param_1)

{
  FUN_100be284(this,SUB84((double)param_1,0));
  return;
}

/* 1007e4c0  FUN_1007e4c0  (36 bytes)
 * undefined FUN_1007e4c0(float param_1)
 */
void __thiscall FUN_1007e4c0(void *this,float param_1)

{
  FUN_100be334(this,SUB84((double)param_1,0));
  return;
}

/* 1007e4f0  FUN_1007e4f0  (16 bytes)
 * undefined FUN_1007e4f0(void)
 */
void FUN_1007e4f0(void)

{
  return;
}

/* 1007e510  FUN_1007e510  (16 bytes)
 * undefined FUN_1007e510(void)
 */
void FUN_1007e510(void)

{
  return;
}

/* 1007e530  FUN_1007e530  (16 bytes)
 * undefined FUN_1007e530(void)
 */
void FUN_1007e530(void)

{
  return;
}

/* 1007e550  FUN_1007e550  (503 bytes)
 * undefined FUN_1007e550(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007e550(void)

{
  ushort uVar1;
  uint uVar2;
  void *pvVar3;
  float *pfVar4;
  undefined4 *puVar5;
  int iVar6;
  float10 fVar7;
  uint *in_stack_0000001c;
  undefined2 in_stack_00000020;
  short in_stack_00000024;
  short in_stack_00000028;
  undefined1 local_28 [12];
  undefined1 local_1c [12];
  undefined1 local_10 [12];
  
  if ((DAT_10317760 & 1) == 0) {
    DAT_10317760 = DAT_10317760 | 1;
    thunk_FUN_1007dbf0(0x10317770);
    FUN_100bc490(0x1007e7d0);
  }
  uVar1 = thunk_FUN_1008feb0(&DAT_1031abb0,0);
  if ((uVar1 & 0xff) != 0) {
    fVar7 = thunk_FUN_100962e0(DAT_1031b808);
    thunk_FUN_1008ff10(&DAT_1031abb0,0,(float)fVar7);
    uVar2 = thunk_FUN_100968f0(&stack0x00000004);
    if ((uVar2 & 0xff) != 0) {
      pvVar3 = thunk_FUN_10096e30(local_10);
      uVar2 = thunk_FUN_10096e80(&stack0x00000004,pvVar3);
      if (((uVar2 & 0xff) != 0) &&
         (_DAT_1031775c = thunk_FUN_1008fd20(&DAT_1031abb0,in_stack_0000001c,in_stack_00000020),
         _DAT_1031775c != -1)) {
        _DAT_103177b4 = 0;
        DAT_1031782b = 0;
        DAT_1031782a = 0;
        DAT_10317798 = 0;
        DAT_10317770 = 1;
        _DAT_103177c4 = 0;
        _DAT_103177c0 = 0x3f800000;
        _DAT_10317828 = DAT_1031775c;
        _DAT_103177d0 = (float)(int)in_stack_00000028;
        _DAT_103177b8 = 0;
        _DAT_103177cc = 0;
        _DAT_10317824 = (float)(int)in_stack_00000024;
        pfVar4 = thunk_FUN_1000cb20(&stack0x00000010,local_1c,(float)(int)in_stack_00000024 / 2.0);
        puVar5 = thunk_FUN_1000d970(&stack0x00000004,local_28,pfVar4);
        _DAT_10317780 = *puVar5;
        _DAT_10317784 = puVar5[1];
        _DAT_10317788 = puVar5[2];
        DAT_10317771 = 0;
        puVar5 = (undefined4 *)thunk_FUN_10008500(&DAT_1031779c);
        *puVar5 = 0;
        iVar6 = thunk_FUN_10008500(&DAT_1031779c);
        *(undefined4 *)(iVar6 + 4) = 0;
        iVar6 = thunk_FUN_10008500(&DAT_1031779c);
        *(undefined4 *)(iVar6 + 8) = 0xc0000000;
        _DAT_103177c8 = 0x3f000000;
        thunk_FUN_1008ffc0(&DAT_1031abb0,(undefined4 *)&DAT_10317770,0,0);
      }
    }
  }
  return;
}

/* 1007e7d0  FUN_1007e7d0  (16 bytes)
 * undefined FUN_1007e7d0(void)
 */
void FUN_1007e7d0(void)

{
  return;
}

/* 1007e7f0  FUN_1007e7f0  (899 bytes)
 * undefined FUN_1007e7f0(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007e7f0(void)

{
  ushort uVar1;
  uint uVar2;
  void *pvVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  longlong lVar10;
  uint *in_stack_0000001c;
  undefined2 in_stack_00000020;
  short in_stack_00000024;
  short in_stack_00000028;
  short in_stack_0000002c;
  char in_stack_00000030;
  undefined1 *puVar11;
  float fVar12;
  undefined1 local_68 [12];
  undefined1 local_5c [12];
  undefined1 local_50 [12];
  undefined1 local_44 [12];
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  undefined1 local_14 [12];
  int local_8;
  
  if ((DAT_10317ce6 & 1) == 0) {
    DAT_10317ce6 = DAT_10317ce6 | 1;
    thunk_FUN_1007dbf0(0x10317c00);
    FUN_100bc490(0x1007ec60);
  }
  if (in_stack_00000030 == '\0') {
    uVar1 = thunk_FUN_1008feb0(&DAT_1031abb0,0);
    if ((uVar1 & 0xff) == 0) {
      return;
    }
    fVar9 = thunk_FUN_100962e0(DAT_1031b808);
    thunk_FUN_1008ff10(&DAT_1031abb0,0,(float)fVar9);
  }
  uVar2 = thunk_FUN_100968f0(&stack0x00000004);
  if ((uVar2 & 0xff) != 0) {
    pvVar3 = thunk_FUN_10096e30(local_14);
    uVar2 = thunk_FUN_10096e80(&stack0x00000004,pvVar3);
    if (((uVar2 & 0xff) != 0) &&
       (_DAT_10317660 = thunk_FUN_1008fd20(&DAT_1031abb0,in_stack_0000001c,in_stack_00000020),
       _DAT_10317660 != -1)) {
      _DAT_10317c44 = 0x3dcccccd;
      DAT_10317cbb = 0;
      DAT_10317cba = 0;
      DAT_10317c28 = 0;
      DAT_10317c00 = 1;
      _DAT_10317c54 = 0;
      _DAT_10317c50 = 0x3f000000;
      _DAT_10317cb8 = DAT_10317660;
      _DAT_10317c60 = (float)(int)in_stack_0000002c;
      _DAT_10317c48 = 0;
      _DAT_10317c5c = 0;
      _DAT_10317cb4 = (float)(int)in_stack_00000028;
      fVar12 = 2.0;
      puVar11 = local_2c;
      pvVar3 = thunk_FUN_1000cb20(&stack0x00000010,local_20,(float)(int)in_stack_00000028);
      pfVar4 = thunk_FUN_10069fd0(pvVar3,puVar11,fVar12);
      puVar5 = thunk_FUN_1000d970(&stack0x00000004,local_38,pfVar4);
      _DAT_10317c10 = *puVar5;
      _DAT_10317c14 = puVar5[1];
      _DAT_10317c18 = puVar5[2];
      DAT_10317c01 = 0;
      for (local_8 = 0; local_8 < in_stack_00000024; local_8 = local_8 + 1) {
        iVar8 = (int)in_stack_0000002c;
        lVar10 = __ftol();
        uVar6 = (undefined4)lVar10;
        lVar10 = __ftol();
        iVar7 = (*DAT_102e1568)((int)lVar10,uVar6);
        _DAT_10317c60 = (float)(iVar8 + iVar7);
        fVar12 = (float)(in_stack_00000024 - local_8);
        puVar11 = local_50;
        pvVar3 = thunk_FUN_1000cb20(&stack0x00000010,local_44,16.0);
        puVar5 = thunk_FUN_10069fd0(pvVar3,puVar11,fVar12);
        _DAT_10317c2c = *puVar5;
        _DAT_10317c30 = puVar5[1];
        _DAT_10317c34 = puVar5[2];
        pfVar4 = (float *)thunk_FUN_10008500(&DAT_10317c2c);
        fVar9 = (float10)(*DAT_102e1564)(0xc0000000,0x40000000);
        *pfVar4 = (float)(fVar9 + (float10)*pfVar4);
        iVar7 = thunk_FUN_10008500(&DAT_10317c2c);
        fVar9 = (float10)(*DAT_102e1564)(0xc0000000,0x40000000);
        *(float *)(iVar7 + 4) = (float)(fVar9 + (float10)*(float *)(iVar7 + 4));
        _DAT_10317c58 = 0x3dcccccd;
        iVar7 = thunk_FUN_1008ffc0(&DAT_1031abb0,(undefined4 *)&DAT_10317c00,0,0);
        if (iVar7 == -1) {
          return;
        }
        _DAT_10317cb4 = _DAT_10317cb4 * 0.8;
        pfVar4 = thunk_FUN_1000cb20(&stack0x00000010,local_5c,(_DAT_10317cb4 / 1.0) * (float)local_8
                                   );
        puVar5 = thunk_FUN_1000d970(&stack0x00000004,local_68,pfVar4);
        _DAT_10317c10 = *puVar5;
        _DAT_10317c14 = puVar5[1];
        _DAT_10317c18 = puVar5[2];
      }
    }
  }
  return;
}

/* 1007ec60  FUN_1007ec60  (16 bytes)
 * undefined FUN_1007ec60(void)
 */
void FUN_1007ec60(void)

{
  return;
}

/* 1007ec80  FUN_1007ec80  (511 bytes)
 * undefined FUN_1007ec80(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007ec80(void)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float *pfVar5;
  uint *in_stack_0000001c;
  short in_stack_00000020;
  short in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined1 local_1c [12];
  undefined1 local_10 [12];
  
  if ((DAT_10317a20 & 1) == 0) {
    DAT_10317a20 = DAT_10317a20 | 1;
    thunk_FUN_1007dbf0(0x10317dd8);
    FUN_100bc490(0x1007ef00);
  }
  uVar1 = thunk_FUN_100968f0(&stack0x00000004);
  if (((uVar1 & 0xff) != 0) &&
     (_DAT_10317a0c = thunk_FUN_1008fd20(&DAT_1031abb0,in_stack_0000001c,in_stack_00000020),
     _DAT_10317a0c != -1)) {
    _DAT_10317e1c = 0;
    DAT_10317e93 = 0;
    DAT_10317e92 = 0;
    DAT_10317e00 = 2;
    DAT_10317dd8 = 1;
    _DAT_10317e2c = in_stack_00000030;
    if (in_stack_00000020 != 5) {
      _DAT_10317e2c = 0;
    }
    _DAT_10317e28 = in_stack_0000002c;
    DAT_10317e90 = DAT_10317a0c;
    _DAT_10317e38 = 0;
    DAT_10317dd9 = 0;
    iVar2 = thunk_FUN_1008fcd0(&DAT_1031abb0,(int)DAT_10317a0c);
    _DAT_10317e34 = (float)iVar2;
    _DAT_10317e8c = (float)(int)in_stack_00000024;
    pfVar3 = thunk_FUN_1000cb20(&stack0x00000010,local_10,0.1);
    puVar4 = thunk_FUN_1000d970(&stack0x00000004,local_1c,pfVar3);
    _DAT_10317de8 = *puVar4;
    _DAT_10317dec = puVar4[1];
    _DAT_10317df0 = puVar4[2];
    puVar4 = (undefined4 *)thunk_FUN_10008500(&DAT_10317e04);
    *puVar4 = 0;
    iVar2 = thunk_FUN_10008500(&DAT_10317e04);
    *(undefined4 *)(iVar2 + 4) = 0;
    iVar2 = thunk_FUN_10008500(&DAT_10317e04);
    *(undefined4 *)(iVar2 + 8) = 0;
    puVar4 = (undefined4 *)thunk_FUN_10008500(&DAT_10317e10);
    *puVar4 = 0;
    iVar2 = thunk_FUN_10008500(&DAT_10317e10);
    *(undefined4 *)(iVar2 + 4) = 0;
    iVar2 = thunk_FUN_10008500(&DAT_10317e10);
    *(undefined4 *)(iVar2 + 8) = 0;
    _DAT_10317e30 = in_stack_00000034;
    pfVar3 = (float *)thunk_FUN_10008500(&stack0x00000010);
    pfVar5 = (float *)thunk_FUN_10008500(&DAT_10317df4);
    thunk_FUN_1007d6c0(pfVar5,pfVar3);
    _DAT_10317e20 = in_stack_00000028;
    thunk_FUN_1008ffc0(&DAT_1031abb0,(undefined4 *)&DAT_10317dd8,0,0);
  }
  return;
}

/* 1007ef00  FUN_1007ef00  (16 bytes)
 * undefined FUN_1007ef00(void)
 */
void FUN_1007ef00(void)

{
  return;
}

/* 1007ef20  FUN_1007ef20  (960 bytes)
 * undefined FUN_1007ef20(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007ef20(void)

{
  float fVar1;
  ushort uVar2;
  uint uVar3;
  void *pvVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  uint *in_stack_0000001c;
  undefined2 in_stack_00000020;
  short in_stack_00000024;
  undefined4 in_stack_00000028;
  short in_stack_0000002c;
  float in_stack_00000030;
  short in_stack_00000034;
  char in_stack_00000038;
  char in_stack_0000003c;
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  int local_c;
  int local_8;
  
  uVar3 = thunk_FUN_100968f0(&stack0x00000004);
  if ((uVar3 & 0xff) != 0) {
    pvVar4 = thunk_FUN_10096e30(local_18);
    uVar3 = thunk_FUN_10096e80(&stack0x00000004,pvVar4);
    if ((uVar3 & 0xff) != 0) {
      if (in_stack_00000038 == '\0') {
        uVar2 = thunk_FUN_1008feb0(&DAT_1031abb0,2);
        if ((uVar2 & 0xff) == 0) {
          uVar2 = thunk_FUN_1008feb0(&DAT_1031abb0,3);
          if ((uVar2 & 0xff) == 0) {
            uVar2 = thunk_FUN_1008feb0(&DAT_1031abb0,4);
            if ((uVar2 & 0xff) == 0) {
              uVar2 = thunk_FUN_1008feb0(&DAT_1031abb0,5);
              if ((uVar2 & 0xff) == 0) {
                return;
              }
              fVar9 = thunk_FUN_100962e0(DAT_1031b804);
              thunk_FUN_1008ff10(&DAT_1031abb0,5,(float)fVar9);
            }
            else {
              fVar9 = thunk_FUN_100962e0(DAT_1031b804);
              thunk_FUN_1008ff10(&DAT_1031abb0,4,(float)fVar9);
            }
          }
          else {
            fVar9 = thunk_FUN_100962e0(DAT_1031b804);
            thunk_FUN_1008ff10(&DAT_1031abb0,3,(float)fVar9);
          }
        }
        else {
          fVar9 = thunk_FUN_100962e0(DAT_1031b804);
          thunk_FUN_1008ff10(&DAT_1031abb0,2,(float)fVar9);
        }
      }
      if ((DAT_1031843a & 1) == 0) {
        DAT_1031843a = DAT_1031843a | 1;
        thunk_FUN_1007dbf0(0x10317668);
        FUN_100bc490(0x1007f3d0);
      }
      _DAT_10318260 = thunk_FUN_1008fd20(&DAT_1031abb0,in_stack_0000001c,in_stack_00000020);
      if (_DAT_10318260 != -1) {
        _DAT_103176ac = (float)(int)in_stack_00000034;
        DAT_10317723 = 0;
        DAT_10317722 = 0;
        DAT_10317690 = 1;
        DAT_10317668 = 1;
        _DAT_103176bc = 0x3d4ccccd;
        _DAT_103176b8 = 0x3f800000;
        DAT_10317720 = DAT_10318260;
        _DAT_103176c8 = 0;
        _DAT_1031771c = in_stack_00000028;
        pfVar5 = thunk_FUN_1000cb20(&stack0x00000010,local_24,2.0);
        puVar6 = thunk_FUN_1000d970(&stack0x00000004,local_30,pfVar5);
        _DAT_10317678 = *puVar6;
        _DAT_1031767c = puVar6[1];
        _DAT_10317680 = puVar6[2];
        DAT_10317669 = -(in_stack_0000003c != '\0') & 3;
        local_8 = (*DAT_102e1568)((int)in_stack_00000024 / 2,(int)in_stack_00000024);
        for (local_c = 0; local_c < local_8; local_c = local_c + 1) {
          iVar7 = (*DAT_102e1568)(0xffffff4c,0xb4);
          iVar8 = thunk_FUN_10008500(&DAT_103176a0);
          *(float *)(iVar8 + 8) = (float)iVar7;
          puVar6 = thunk_FUN_1000cb20(&stack0x00000010,local_3c,16.0);
          _DAT_10317694 = *puVar6;
          _DAT_10317698 = puVar6[1];
          _DAT_1031769c = puVar6[2];
          pfVar5 = (float *)thunk_FUN_10008500(&DAT_10317694);
          iVar7 = (*DAT_102e1568)(-(int)in_stack_0000002c,(int)in_stack_0000002c);
          *pfVar5 = (float)iVar7 + *pfVar5;
          iVar7 = thunk_FUN_10008500(&DAT_10317694);
          iVar8 = (*DAT_102e1568)(-(int)in_stack_0000002c,(int)in_stack_0000002c);
          *(float *)(iVar7 + 4) = (float)iVar8 + *(float *)(iVar7 + 4);
          iVar7 = thunk_FUN_10008500(&DAT_10317694);
          iVar8 = (*DAT_102e1568)(-(int)in_stack_0000002c / 2,(int)in_stack_0000002c / 2);
          fVar1 = in_stack_00000030;
          *(float *)(iVar7 + 8) = (float)iVar8 + *(float *)(iVar7 + 8);
          iVar7 = thunk_FUN_10008500(&DAT_103176a0);
          _DAT_103176b0 = *(float *)(iVar7 + 8) / 1000.0 + fVar1;
          iVar7 = thunk_FUN_1008fcd0(&DAT_1031abb0,(int)DAT_10317720);
          _DAT_103176c4 = (float)iVar7;
          iVar7 = thunk_FUN_1008ffc0(&DAT_1031abb0,(undefined4 *)&DAT_10317668,0,0);
          if (iVar7 == -1) {
            return;
          }
        }
      }
    }
  }
  return;
}

/* 1007f3d0  FUN_1007f3d0  (16 bytes)
 * undefined FUN_1007f3d0(void)
 */
void FUN_1007f3d0(void)

{
  return;
}

/* 1007f3f0  FUN_1007f3f0  (491 bytes)
 * undefined FUN_1007f3f0(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f3f0(void)

{
  undefined4 *puVar1;
  float *pfVar2;
  int iVar3;
  uint *in_stack_0000001c;
  undefined2 in_stack_00000020;
  short in_stack_00000024;
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  undefined1 local_14 [12];
  int local_8;
  
  if ((DAT_10318439 & 1) == 0) {
    DAT_10318439 = DAT_10318439 | 1;
    thunk_FUN_1007dbf0(0x10317fa8);
    FUN_100bc490(0x1007f660);
  }
  _DAT_1031808c = thunk_FUN_1008fd20(&DAT_1031abb0,in_stack_0000001c,in_stack_00000020);
  if (_DAT_1031808c != -1) {
    _DAT_10317fec = 0;
    DAT_10318063 = 0;
    DAT_10318062 = 0;
    DAT_10317fd0 = 0;
    DAT_10317fa8 = 1;
    _DAT_10317ffc = 0x3d4ccccd;
    puVar1 = thunk_FUN_1000cb20(&stack0x00000010,local_14,2.0);
    _DAT_10317fd4 = *puVar1;
    _DAT_10317fd8 = puVar1[1];
    _DAT_10317fdc = puVar1[2];
    _DAT_10317ff8 = 0x3f333333;
    DAT_10318060 = DAT_1031808c;
    _DAT_10318008 = 0;
    _DAT_10317ff0 = 0;
    _DAT_1031805c = (float)(int)in_stack_00000024;
    DAT_10317fa9 = 0;
    for (local_8 = 0; local_8 < (int)((in_stack_00000024 < 0x19) + 1); local_8 = local_8 + 1) {
      _DAT_1031805c = _DAT_1031805c - (float)local_8;
      pfVar2 = thunk_FUN_1000cb20(&stack0x00000010,local_20,
                                  (float)(local_8 + 1) * ((float)(int)in_stack_00000024 / 2.0));
      puVar1 = thunk_FUN_1000d970(&stack0x00000004,local_2c,pfVar2);
      _DAT_10317fb8 = *puVar1;
      _DAT_10317fbc = puVar1[1];
      _DAT_10317fc0 = puVar1[2];
      iVar3 = thunk_FUN_1008fcd0(&DAT_1031abb0,(int)DAT_10318060);
      _DAT_10318004 = (float)iVar3;
      if (local_8 < 1) {
        _DAT_10318000 = 0;
      }
      else {
        _DAT_10318000 = 0x3f800000;
      }
      iVar3 = thunk_FUN_1008ffc0(&DAT_1031abb0,(undefined4 *)&DAT_10317fa8,0,0);
      if (iVar3 == -1) {
        return;
      }
    }
  }
  return;
}

/* 1007f660  FUN_1007f660  (16 bytes)
 * undefined FUN_1007f660(void)
 */
void FUN_1007f660(void)

{
  return;
}

/* 1007f680  FUN_1007f680  (573 bytes)
 * undefined FUN_1007f680(undefined4 param_1, int param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_1007f680(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  
  if ((DAT_1031792c & 1) == 0) {
    DAT_1031792c = DAT_1031792c | 1;
    thunk_FUN_1007dbf0(0x10318180);
    FUN_100bc490(0x1007f950);
  }
  uVar1 = thunk_FUN_1008feb0(&DAT_1031abb0,8);
  if ((uVar1 & 0xff) != 0) {
    fVar6 = thunk_FUN_100962e0(0.3);
    thunk_FUN_1008ff10(&DAT_1031abb0,8,(float)fVar6);
    uVar1 = thunk_FUN_10097580(&param_3,0x800);
    if ((((uVar1 & 0xff) == 0) && (uVar2 = thunk_FUN_100968f0(&param_3), (uVar2 & 0xff) != 0)) &&
       (_DAT_10318174 = thunk_FUN_1008fd20(&DAT_1031abb0,(uint *)"sprites/gun_smoke_add.spr",5),
       _DAT_10318174 != -1)) {
      _DAT_103181c4 = 0;
      DAT_1031823b = 0;
      DAT_1031823a = 0;
      _DAT_10318190 = param_3;
      _DAT_10318194 = param_4;
      _DAT_10318198 = param_5;
      _DAT_103181ac = param_6;
      _DAT_103181b0 = param_7;
      _DAT_103181b4 = param_8;
      DAT_103181a8 = 1;
      iVar3 = (*DAT_102e1568)(0xfffffffa,6);
      iVar4 = thunk_FUN_10008500(&DAT_103181b8);
      *(float *)(iVar4 + 8) = (float)iVar3;
      pfVar5 = (float *)thunk_FUN_10008500(&DAT_103181ac);
      fVar6 = (float10)(*DAT_102e1564)(0xbf800000,0x3f800000);
      *pfVar5 = (float)(fVar6 + (float10)*pfVar5);
      iVar3 = thunk_FUN_10008500(&DAT_103181ac);
      fVar6 = (float10)(*DAT_102e1564)(0xbf800000,0x3f800000);
      *(float *)(iVar3 + 4) = (float)(fVar6 + (float10)*(float *)(iVar3 + 4));
      iVar3 = thunk_FUN_10008500(&DAT_103181ac);
      fVar6 = (float10)(*DAT_102e1564)(0,0x3f666666);
      *(float *)(iVar3 + 8) = (float)(fVar6 + (float10)*(float *)(iVar3 + 8));
      DAT_10318180 = 1;
      _DAT_103181c8 = 0;
      _DAT_103181d4 = 0;
      _DAT_103181dc = 0;
      _DAT_103181e0 = (float)param_2;
      _DAT_10318234 = param_1;
      _DAT_103181d0 = 0x3e99999a;
      _DAT_10318238 = DAT_10318174;
      DAT_10318181 = 0;
      _DAT_103181d8 = 0x3e19999a;
      thunk_FUN_1008ffc0(&DAT_1031abb0,(undefined4 *)&DAT_10318180,0,0);
    }
  }
  return;
}

/* 1007f950  FUN_1007f950  (16 bytes)
 * undefined FUN_1007f950(void)
 */
void FUN_1007f950(void)

{
  return;
}

/* 1007f970  FUN_1007f970  (970 bytes)
 * undefined FUN_1007f970(short param_1, int param_2)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1007f970(short param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  void *pvVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  float10 fVar8;
  longlong lVar9;
  float in_stack_00000030;
  char in_stack_00000034;
  int local_a0;
  undefined1 local_5c [12];
  undefined1 local_50 [12];
  undefined1 local_44 [12];
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  undefined1 local_14 [12];
  int local_8;
  
  if ((DAT_10317b14 & 1) == 0) {
    DAT_10317b14 = DAT_10317b14 | 1;
    thunk_FUN_1007dbf0(0x10317cf0);
    FUN_100bc490(0x1007fe30);
  }
  if (in_stack_00000034 == '\0') {
    uVar1 = thunk_FUN_1008feb0(&DAT_1031abb0,1);
    if ((uVar1 & 0xff) == 0) {
      return;
    }
    fVar8 = thunk_FUN_100962e0(0.1);
    thunk_FUN_1008ff10(&DAT_1031abb0,1,(float)fVar8);
  }
  if ((*(float *)(DAT_102e81e0 + 0xc) != 0.0) &&
     (uVar2 = thunk_FUN_100968f0(&stack0x0000000c), (uVar2 & 0xff) != 0)) {
    pvVar3 = thunk_FUN_10096e30(local_14);
    uVar2 = thunk_FUN_10096e80(&stack0x0000000c,pvVar3);
    if (((uVar2 & 0xff) != 0) &&
       (_DAT_10317dd4 = thunk_FUN_1008fd20(&DAT_1031abb0,(uint *)"sprites/gun_smoke_add.spr",5),
       _DAT_10317dd4 != -1)) {
      if (*(float *)(DAT_102e81e0 + 0xc) == 2.0) {
        local_a0 = 10;
      }
      else {
        local_a0 = 5;
      }
      DAT_10317ce8 = local_a0;
      _DAT_10317d34 = 0x3dcccccd;
      DAT_10317dab = 0;
      DAT_10317daa = 0;
      DAT_10317d18 = 0;
      DAT_10317cf0 = 1;
      _DAT_10317d44 = 0;
      _DAT_10317d40 = 0x3e99999a;
      _DAT_10317da8 = DAT_10317dd4;
      _DAT_10317d50 = (float)param_2;
      _DAT_10317d38 = 0;
      _DAT_10317d4c = 0;
      _DAT_10317da4 = (float)(int)param_1;
      pfVar4 = thunk_FUN_1000cb20(&stack0x00000024,local_20,(float)(int)param_1 / 2.0);
      puVar5 = thunk_FUN_1000d970(&stack0x0000000c,local_2c,pfVar4);
      _DAT_10317d00 = *puVar5;
      _DAT_10317d04 = puVar5[1];
      _DAT_10317d08 = puVar5[2];
      DAT_10317cf1 = 0;
      for (local_8 = 0; local_8 < DAT_10317ce8; local_8 = local_8 + 1) {
        lVar9 = __ftol();
        uVar6 = (undefined4)lVar9;
        lVar9 = __ftol();
        iVar7 = (*DAT_102e1568)((int)lVar9,uVar6);
        _DAT_10317d50 = (float)(param_2 + iVar7);
        pfVar4 = thunk_FUN_1000cb20(&stack0x00000024,local_38,
                                    in_stack_00000030 / (float)(DAT_10317ce8 - local_8));
        puVar5 = thunk_FUN_1000d970(&stack0x00000018,local_44,pfVar4);
        _DAT_10317d1c = *puVar5;
        _DAT_10317d20 = puVar5[1];
        _DAT_10317d24 = puVar5[2];
        DAT_10318434 = _DAT_10317da4 / 5.0;
        pfVar4 = (float *)thunk_FUN_10008500(&DAT_10317d1c);
        fVar8 = (float10)(*DAT_102e1564)(-DAT_10318434,DAT_10318434);
        *pfVar4 = (float)(fVar8 + (float10)*pfVar4);
        iVar7 = thunk_FUN_10008500(&DAT_10317d1c);
        fVar8 = (float10)(*DAT_102e1564)(-DAT_10318434,DAT_10318434);
        *(float *)(iVar7 + 4) = (float)(fVar8 + (float10)*(float *)(iVar7 + 4));
        _DAT_10317d48 = 0x3dcccccd;
        iVar7 = thunk_FUN_1008ffc0(&DAT_1031abb0,(undefined4 *)&DAT_10317cf0,0,0);
        if (iVar7 == -1) {
          return;
        }
        _DAT_10317da4 = _DAT_10317da4 * 0.8;
        pfVar4 = thunk_FUN_1000cb20(&stack0x00000024,local_50,(float)local_8 * _DAT_10317da4);
        puVar5 = thunk_FUN_1000d970(&stack0x0000000c,local_5c,pfVar4);
        _DAT_10317d00 = *puVar5;
        _DAT_10317d04 = puVar5[1];
        _DAT_10317d08 = puVar5[2];
      }
    }
  }
  return;
}

/* 1007fe30  FUN_1007fe30  (16 bytes)
 * undefined FUN_1007fe30(void)
 */
void FUN_1007fe30(void)

{
  return;
}

/* 1007fe50  FUN_1007fe50  (2397 bytes)
 * undefined FUN_1007fe50(short param_1, short param_2, short param_3, float param_4, char param_5)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1007fe50(short param_1,short param_2,short param_3,float param_4,char param_5)

{
  float fVar1;
  float fVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  void *pvVar7;
  int iVar8;
  int iVar9;
  void *extraout_ECX;
  float10 fVar10;
  longlong lVar11;
  short sStack00000024;
  char in_stack_00000028;
  int in_stack_0000002c;
  undefined1 *puVar12;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  int local_c;
  int local_8;
  
  if ((DAT_10317cdc & 1) == 0) {
    DAT_10317cdc = DAT_10317cdc | 1;
    thunk_FUN_1007dbf0(0x10318268);
    FUN_100bc490(0x10080a10);
  }
  lVar11 = __ftol();
  sStack00000024 = (short)lVar11;
  if (sStack00000024 < 3) {
    sStack00000024 = 3;
  }
  _DAT_10317748 = thunk_FUN_1008fd20(&DAT_1031abb0,(uint *)"sprites/ts_muzzleflash1h.spr",5);
  DAT_10317754 = thunk_FUN_1008fd20(&DAT_1031abb0,(uint *)"sprites/gun_muzzle.spr",5);
  if ((_DAT_10317748 != -1) && (DAT_10317754 != -1)) {
    cVar3 = (char)param_2;
    if (in_stack_00000028 == '\0') {
      _DAT_103182ac = 0;
      DAT_10318323 = (undefined1)param_1;
      DAT_10318322 = cVar3 + '\x01';
      DAT_10318268 = 1;
      _DAT_103182b0 = 0;
      _DAT_103182c8 = 0;
      DAT_10318290 = 1;
      DAT_10318269 = 1;
      DAT_10317b0c = 1.0;
      DAT_10317b10 = 0.15;
      _DAT_10317cec = param_4 * 1.0;
      for (local_8 = 0; local_8 < sStack00000024; local_8 = local_8 + 1) {
        fVar10 = (float10)(*DAT_102e1564)(0x3f333333,0x3fa66666);
        _DAT_1031831c = (float)(fVar10 * (float10)_DAT_10317cec);
        if (local_8 == 0) {
          _DAT_1031831c = _DAT_1031831c * 0.7;
        }
        fVar4 = (float)local_8;
        pfVar6 = (float *)thunk_FUN_10008500(&stack0x00000018);
        fVar1 = *pfVar6;
        iVar8 = (int)sStack00000024;
        pfVar6 = (float *)thunk_FUN_10008500(&stack0x00000018);
        fVar5 = (float)in_stack_0000002c;
        fVar2 = *pfVar6;
        pfVar6 = (float *)thunk_FUN_10008500(&DAT_10318324);
        *pfVar6 = fVar5 * fVar2 + (fVar4 * fVar1 * (float)(int)param_3) / (float)iVar8;
        fVar4 = (float)local_8;
        iVar8 = thunk_FUN_10008500(&stack0x00000018);
        fVar1 = *(float *)(iVar8 + 4);
        iVar9 = (int)sStack00000024;
        iVar8 = thunk_FUN_10008500(&stack0x00000018);
        fVar5 = (float)in_stack_0000002c;
        fVar2 = *(float *)(iVar8 + 4);
        iVar8 = thunk_FUN_10008500(&DAT_10318324);
        *(float *)(iVar8 + 4) = fVar5 * fVar2 + (fVar4 * fVar1 * (float)(int)param_3) / (float)iVar9
        ;
        fVar4 = (float)local_8;
        iVar8 = thunk_FUN_10008500(&stack0x00000018);
        fVar1 = *(float *)(iVar8 + 8);
        iVar9 = (int)sStack00000024;
        iVar8 = thunk_FUN_10008500(&stack0x00000018);
        fVar5 = (float)in_stack_0000002c;
        fVar2 = *(float *)(iVar8 + 8);
        iVar8 = thunk_FUN_10008500(&DAT_10318324);
        *(float *)(iVar8 + 8) = fVar5 * fVar2 + (fVar4 * fVar1 * (float)(int)param_3) / (float)iVar9
        ;
        DAT_10318320 = DAT_10317748;
        iVar8 = thunk_FUN_1008fcd0(&DAT_1031abb0,(int)DAT_10317748);
        _DAT_103182c4 = (float)iVar8;
        _DAT_103182b8 = DAT_10317b0c;
        _DAT_103182bc = DAT_10317b10;
        if (local_8 == 1) {
          local_6c = 0x9999999a;
          uStack_68 = 0x3fb99999;
        }
        else {
          local_6c = 0;
          uStack_68 = 0;
        }
        _DAT_103182c0 = (float)(double)CONCAT44(uStack_68,local_6c);
        iVar8 = (*DAT_102e1568)(0xffffffe2,0x1e);
        iVar9 = thunk_FUN_10008500(&DAT_103182a0);
        *(float *)(iVar9 + 8) = (float)iVar8;
        iVar8 = thunk_FUN_1008ffc0(&DAT_1031abb0,(undefined4 *)&DAT_10318268,0,0);
        if (iVar8 == -1) {
          return;
        }
        DAT_10317b0c = DAT_10317b0c / 1.1;
        DAT_10317b10 = DAT_10317b0c * 0.15;
        _DAT_10317cec = _DAT_10317cec / 1.1;
      }
      if (param_5 == '\x01') {
        _DAT_10317748 = thunk_FUN_1008fd20(&DAT_1031abb0,(uint *)0x10271238,5);
        _DAT_103182ac = 0;
        DAT_10318323 = (undefined1)param_1;
        DAT_10318322 = cVar3 + '\x01';
        pfVar6 = (float *)thunk_FUN_10008500(&stack0x00000018);
        iVar8 = in_stack_0000002c + -2;
        fVar1 = *pfVar6;
        pfVar6 = (float *)thunk_FUN_10008500(&DAT_10318324);
        *pfVar6 = (float)iVar8 * fVar1;
        iVar8 = thunk_FUN_10008500(&stack0x00000018);
        iVar9 = in_stack_0000002c + -2;
        fVar1 = *(float *)(iVar8 + 4);
        iVar8 = thunk_FUN_10008500(&DAT_10318324);
        *(float *)(iVar8 + 4) = (float)iVar9 * fVar1;
        iVar8 = thunk_FUN_10008500(&stack0x00000018);
        fVar1 = *(float *)(iVar8 + 8);
        iVar8 = thunk_FUN_10008500(&DAT_10318324);
        *(float *)(iVar8 + 8) = (float)(in_stack_0000002c + -2) * fVar1;
        iVar8 = (*DAT_102e1568)(0xfffffff6,10);
        iVar9 = thunk_FUN_10008500(&DAT_103182a0);
        *(float *)(iVar9 + 8) = (float)iVar8;
        DAT_10318268 = 1;
        _DAT_103182b0 = 0;
        _DAT_103182bc = 0.13;
        DAT_10318290 = 1;
        _DAT_103182c8 = 0;
        fVar10 = (float10)(*DAT_102e1564)(0x3fb33333,0x3fd9999a);
        _DAT_1031831c = (float)(fVar10 * (float10)param_4);
        _DAT_103182b8 = 0.6;
        DAT_10318320 = DAT_10317748;
        DAT_10318269 = 0;
        iVar8 = (*DAT_102e1568)(0xfffffff6,10);
        iVar9 = thunk_FUN_10008500(&DAT_103182a0);
        *(float *)(iVar9 + 8) = (float)iVar8;
        iVar8 = thunk_FUN_1008fcd0(&DAT_1031abb0,(int)DAT_10318320);
        _DAT_103182c4 = (float)iVar8;
        thunk_FUN_1008ffc0(&DAT_1031abb0,(undefined4 *)&DAT_10318268,0,0);
      }
      else {
        _DAT_103182ac = 0;
        DAT_10318323 = (undefined1)param_1;
        DAT_10318322 = cVar3 + '\x01';
        pfVar6 = (float *)thunk_FUN_10008500(&stack0x00000018);
        iVar8 = in_stack_0000002c + -2;
        fVar1 = *pfVar6;
        pfVar6 = (float *)thunk_FUN_10008500(&DAT_10318324);
        *pfVar6 = (float)iVar8 * fVar1;
        iVar8 = thunk_FUN_10008500(&stack0x00000018);
        iVar9 = in_stack_0000002c + -2;
        fVar1 = *(float *)(iVar8 + 4);
        iVar8 = thunk_FUN_10008500(&DAT_10318324);
        *(float *)(iVar8 + 4) = (float)iVar9 * fVar1;
        iVar8 = thunk_FUN_10008500(&stack0x00000018);
        fVar1 = *(float *)(iVar8 + 8);
        iVar8 = thunk_FUN_10008500(&DAT_10318324);
        *(float *)(iVar8 + 8) = (float)(in_stack_0000002c + -2) * fVar1;
        iVar8 = (*DAT_102e1568)(0xfffffff6,10);
        iVar9 = thunk_FUN_10008500(&DAT_103182a0);
        *(float *)(iVar9 + 8) = (float)iVar8;
        DAT_10318268 = 1;
        _DAT_103182b0 = 0;
        _DAT_103182bc = 0.13;
        DAT_10318290 = 1;
        _DAT_103182c8 = 0;
        fVar10 = (float10)(*DAT_102e1564)(0x3f8ccccd,0x3fb33333);
        _DAT_1031831c = (float)(fVar10 * (float10)param_4);
        _DAT_103182b8 = 0.7;
        DAT_10318320 = DAT_10317748;
        DAT_10318269 = 0;
        iVar8 = (*DAT_102e1568)(0xfffffff6,10);
        iVar9 = thunk_FUN_10008500(&DAT_103182a0);
        *(float *)(iVar9 + 8) = (float)iVar8;
        iVar8 = thunk_FUN_1008fcd0(&DAT_1031abb0,(int)DAT_10318320);
        _DAT_103182c4 = (float)iVar8;
        thunk_FUN_1008ffc0(&DAT_1031abb0,(undefined4 *)&DAT_10318268,0,0);
      }
    }
    else {
      pfVar6 = thunk_FUN_10096e30(local_18);
      puVar12 = local_24;
      iVar8 = (*DAT_102e152c)((int)param_2);
      pvVar7 = thunk_FUN_1000ca70((void *)(iVar8 + 0xb60 + param_1 * 0xc),puVar12,pfVar6);
      pvVar7 = (void *)thunk_FUN_10008500(pvVar7);
      fVar10 = thunk_FUN_10097fc0(extraout_ECX,pvVar7);
      _DAT_10317b04 = (float)fVar10;
      if (_DAT_10317b04 <= 512.0) {
        _DAT_103182ac = 0;
        DAT_10318323 = (undefined1)param_1;
        DAT_10318322 = cVar3 + '\x01';
        DAT_10318268 = 1;
        _DAT_103182b0 = 0;
        DAT_10318290 = 1;
        _DAT_103182c8 = 0;
        DAT_10318320 = DAT_10317748;
        DAT_10317b0c = (512.0 - _DAT_10317b04) * 0.0015625;
        DAT_10317b10 = 0.13;
        _DAT_10317cec = param_4;
        DAT_10318269 = 1;
        for (local_c = 0; local_c < sStack00000024; local_c = local_c + 1) {
          fVar10 = (float10)(*DAT_102e1564)(0x3f19999a,0x3f800000);
          _DAT_1031831c = (float)(fVar10 * (float10)_DAT_10317cec);
          fVar4 = (float)local_c;
          pfVar6 = (float *)thunk_FUN_10008500(&stack0x00000018);
          fVar1 = *pfVar6;
          iVar8 = (int)sStack00000024;
          pfVar6 = (float *)thunk_FUN_10008500(&stack0x00000018);
          fVar5 = (float)in_stack_0000002c;
          fVar2 = *pfVar6;
          pfVar6 = (float *)thunk_FUN_10008500(&DAT_10318324);
          *pfVar6 = fVar5 * fVar2 + (fVar4 * fVar1 * (float)(int)param_3) / (float)iVar8;
          fVar4 = (float)local_c;
          iVar8 = thunk_FUN_10008500(&stack0x00000018);
          fVar1 = *(float *)(iVar8 + 4);
          iVar9 = (int)sStack00000024;
          iVar8 = thunk_FUN_10008500(&stack0x00000018);
          fVar5 = (float)in_stack_0000002c;
          fVar2 = *(float *)(iVar8 + 4);
          iVar8 = thunk_FUN_10008500(&DAT_10318324);
          *(float *)(iVar8 + 4) =
               fVar5 * fVar2 + (fVar4 * fVar1 * (float)(int)param_3) / (float)iVar9;
          fVar4 = (float)local_c;
          iVar8 = thunk_FUN_10008500(&stack0x00000018);
          fVar1 = *(float *)(iVar8 + 8);
          iVar9 = (int)sStack00000024;
          iVar8 = thunk_FUN_10008500(&stack0x00000018);
          fVar5 = (float)in_stack_0000002c;
          fVar2 = *(float *)(iVar8 + 8);
          iVar8 = thunk_FUN_10008500(&DAT_10318324);
          *(float *)(iVar8 + 8) =
               fVar5 * fVar2 + (fVar4 * fVar1 * (float)(int)param_3) / (float)iVar9;
          iVar8 = (*DAT_102e1568)(0xffffffc4,0x3c);
          iVar9 = thunk_FUN_10008500(&DAT_103182a0);
          *(float *)(iVar9 + 8) = (float)iVar8;
          iVar8 = thunk_FUN_1008fcd0(&DAT_1031abb0,(int)DAT_10318320);
          _DAT_103182c4 = (float)iVar8;
          _DAT_103182b8 = DAT_10317b0c;
          _DAT_103182bc = DAT_10317b10;
          if (local_c == 1) {
            local_6c = 0x33333333;
            uStack_68 = 0x3fd33333;
          }
          else {
            local_6c = 0;
            uStack_68 = 0;
          }
          _DAT_103182c0 = (float)(double)CONCAT44(uStack_68,local_6c);
          iVar8 = thunk_FUN_1008ffc0(&DAT_1031abb0,(undefined4 *)&DAT_10318268,0,0);
          if (iVar8 == -1) {
            return;
          }
          DAT_10317b0c = DAT_10317b0c / 1.1;
          DAT_10317b10 = DAT_10317b10 / 1.1;
          _DAT_10317cec = _DAT_10317cec / 1.1;
        }
      }
    }
  }
  return;
}

/* 10080a10  FUN_10080a10  (16 bytes)
 * undefined FUN_10080a10(void)
 */
void FUN_10080a10(void)

{
  return;
}

/* 10080a30  FUN_10080a30  (2846 bytes)
 * undefined FUN_10080a30(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, short param_7, float param_8, char param_9)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_10080a30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,short param_7,float param_8,char param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  void *pvVar9;
  int iVar10;
  int iVar11;
  void *extraout_ECX;
  float10 fVar12;
  longlong lVar13;
  short sStack00000034;
  char in_stack_00000038;
  int in_stack_0000003c;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  int local_c;
  int local_8;
  
  if ((DAT_10317ce5 & 1) == 0) {
    DAT_10317ce5 = DAT_10317ce5 | 1;
    thunk_FUN_1007dbf0(0x10317eb8);
    FUN_100bc490(0x10081820);
  }
  lVar13 = __ftol();
  sStack00000034 = (short)lVar13;
  if (sStack00000034 < 3) {
    sStack00000034 = 3;
  }
  _DAT_10317f94 = thunk_FUN_1008fd20(&DAT_1031abb0,(uint *)"sprites/ts_muzzleflash1h.spr",5);
  if (_DAT_10317f94 != -1) {
    if (in_stack_00000038 == '\0') {
      _DAT_10317efc = 0;
      DAT_10317f73 = 0;
      DAT_10317f72 = 0;
      DAT_10317eb8 = 1;
      _DAT_10317f00 = 0;
      _DAT_10317f18 = 0;
      DAT_10317ee0 = 1;
      DAT_10317eb9 = 1;
      DAT_10317750 = 1.0;
      DAT_10317b18 = 0.15;
      _DAT_10318090 = param_8 * 1.0;
      for (local_8 = 0; local_8 < sStack00000034; local_8 = local_8 + 1) {
        fVar12 = (float10)(*DAT_102e1564)(0x3f333333,0x3fa66666);
        _DAT_10317f6c = (float)(fVar12 * (float10)_DAT_10318090);
        if (local_8 == 0) {
          _DAT_10317f6c = _DAT_10317f6c * 0.7;
        }
        pfVar6 = (float *)thunk_FUN_10008500(&param_1);
        fVar4 = (float)local_8;
        pfVar7 = (float *)thunk_FUN_10008500(&stack0x00000028);
        fVar1 = *pfVar7;
        iVar8 = (int)param_7;
        iVar10 = (int)sStack00000034;
        fVar2 = *pfVar6;
        pfVar6 = (float *)thunk_FUN_10008500(&stack0x00000028);
        fVar5 = (float)in_stack_0000003c;
        fVar3 = *pfVar6;
        pfVar6 = (float *)thunk_FUN_10008500(&DAT_10317ec8);
        *pfVar6 = fVar5 * fVar3 + (fVar4 * fVar1 * (float)iVar8) / (float)iVar10 + fVar2;
        iVar8 = thunk_FUN_10008500(&param_1);
        fVar4 = (float)local_8;
        iVar10 = thunk_FUN_10008500(&stack0x00000028);
        fVar1 = *(float *)(iVar10 + 4);
        iVar10 = (int)param_7;
        iVar11 = (int)sStack00000034;
        fVar2 = *(float *)(iVar8 + 4);
        iVar8 = thunk_FUN_10008500(&stack0x00000028);
        fVar5 = (float)in_stack_0000003c;
        fVar3 = *(float *)(iVar8 + 4);
        iVar8 = thunk_FUN_10008500(&DAT_10317ec8);
        *(float *)(iVar8 + 4) =
             fVar5 * fVar3 + (fVar4 * fVar1 * (float)iVar10) / (float)iVar11 + fVar2;
        iVar8 = thunk_FUN_10008500(&param_1);
        fVar4 = (float)local_8;
        iVar10 = thunk_FUN_10008500(&stack0x00000028);
        fVar1 = *(float *)(iVar10 + 8);
        iVar10 = (int)param_7;
        iVar11 = (int)sStack00000034;
        fVar2 = *(float *)(iVar8 + 8);
        iVar8 = thunk_FUN_10008500(&stack0x00000028);
        fVar5 = (float)in_stack_0000003c;
        fVar3 = *(float *)(iVar8 + 8);
        iVar8 = thunk_FUN_10008500(&DAT_10317ec8);
        *(float *)(iVar8 + 8) =
             fVar5 * fVar3 + (fVar4 * fVar1 * (float)iVar10) / (float)iVar11 + fVar2;
        _DAT_10317ee4 = param_4;
        _DAT_10317ee8 = param_5;
        _DAT_10317eec = param_6;
        iVar8 = thunk_FUN_10008500(&DAT_10317ee4);
        fVar12 = (float10)(*DAT_102e1564)(0xc0400000,0x40400000);
        *(float *)(iVar8 + 8) = (float)(fVar12 + (float10)*(float *)(iVar8 + 8));
        DAT_10317f70 = DAT_10317f94;
        iVar8 = thunk_FUN_1008fcd0(&DAT_1031abb0,(int)DAT_10317f94);
        _DAT_10317f14 = (float)iVar8;
        _DAT_10317f08 = DAT_10317750;
        _DAT_10317f0c = DAT_10317b18;
        if (local_8 == 1) {
          local_6c = 0x9999999a;
          uStack_68 = 0x3fb99999;
        }
        else {
          local_6c = 0;
          uStack_68 = 0;
        }
        _DAT_10317f10 = (float)(double)CONCAT44(uStack_68,local_6c);
        iVar8 = (*DAT_102e1568)(0xffffffa6,0x5a);
        iVar10 = thunk_FUN_10008500(&DAT_10317ef0);
        *(float *)(iVar10 + 8) = (float)iVar8;
        iVar8 = thunk_FUN_1008ffc0(&DAT_1031abb0,(undefined4 *)&DAT_10317eb8,0,0);
        if (iVar8 == -1) {
          return;
        }
        DAT_10317750 = DAT_10317750 / 1.1;
        DAT_10317b18 = DAT_10317750 * 0.15;
        _DAT_10318090 = _DAT_10318090 / 1.1;
      }
      if (param_9 == '\x01') {
        _DAT_10317f94 = thunk_FUN_1008fd20(&DAT_1031abb0,(uint *)0x10271238,5);
        _DAT_10317efc = 0;
        DAT_10317f73 = 0;
        DAT_10317f72 = 0;
        pfVar6 = (float *)thunk_FUN_10008500(&param_1);
        pfVar7 = (float *)thunk_FUN_10008500(&stack0x00000028);
        iVar8 = in_stack_0000003c + -2;
        fVar1 = *pfVar7;
        fVar2 = *pfVar6;
        pfVar6 = (float *)thunk_FUN_10008500(&DAT_10317ec8);
        *pfVar6 = (float)iVar8 * fVar1 + fVar2;
        iVar8 = thunk_FUN_10008500(&param_1);
        iVar10 = thunk_FUN_10008500(&stack0x00000028);
        iVar11 = in_stack_0000003c + -2;
        fVar1 = *(float *)(iVar10 + 4);
        fVar2 = *(float *)(iVar8 + 4);
        iVar8 = thunk_FUN_10008500(&DAT_10317ec8);
        *(float *)(iVar8 + 4) = (float)iVar11 * fVar1 + fVar2;
        iVar8 = thunk_FUN_10008500(&param_1);
        iVar10 = thunk_FUN_10008500(&stack0x00000028);
        fVar1 = *(float *)(iVar10 + 8);
        fVar2 = *(float *)(iVar8 + 8);
        iVar8 = thunk_FUN_10008500(&DAT_10317ec8);
        *(float *)(iVar8 + 8) = (float)(in_stack_0000003c + -2) * fVar1 + fVar2;
        _DAT_10317ee4 = param_4;
        _DAT_10317ee8 = param_5;
        _DAT_10317eec = param_6;
        iVar8 = (*DAT_102e1568)(0xfffffff6,10);
        iVar10 = thunk_FUN_10008500(&DAT_10317ef0);
        *(float *)(iVar10 + 8) = (float)iVar8;
        DAT_10317eb8 = 1;
        _DAT_10317f00 = 0;
        _DAT_10317f0c = 0.13;
        DAT_10317ee0 = 1;
        _DAT_10317f18 = 0;
        fVar12 = (float10)(*DAT_102e1564)(0x3fb33333,0x3fd9999a);
        _DAT_10317f6c = (float)(fVar12 * (float10)param_8);
        _DAT_10317f08 = 0.6;
        DAT_10317f70 = DAT_10317f94;
        DAT_10317eb9 = 0;
        iVar8 = (*DAT_102e1568)(0xfffffff6,10);
        iVar10 = thunk_FUN_10008500(&DAT_10317ef0);
        *(float *)(iVar10 + 8) = (float)iVar8;
        iVar8 = thunk_FUN_1008fcd0(&DAT_1031abb0,(int)DAT_10317f70);
        _DAT_10317f14 = (float)iVar8;
        thunk_FUN_1008ffc0(&DAT_1031abb0,(undefined4 *)&DAT_10317eb8,0,0);
      }
      else {
        _DAT_10317efc = 0;
        DAT_10317f73 = 0;
        DAT_10317f72 = 0;
        pfVar6 = (float *)thunk_FUN_10008500(&param_1);
        pfVar7 = (float *)thunk_FUN_10008500(&stack0x00000028);
        iVar8 = in_stack_0000003c + -2;
        fVar1 = *pfVar7;
        fVar2 = *pfVar6;
        pfVar6 = (float *)thunk_FUN_10008500(&DAT_10317ec8);
        *pfVar6 = (float)iVar8 * fVar1 + fVar2;
        iVar8 = thunk_FUN_10008500(&param_1);
        iVar10 = thunk_FUN_10008500(&stack0x00000028);
        iVar11 = in_stack_0000003c + -2;
        fVar1 = *(float *)(iVar10 + 4);
        fVar2 = *(float *)(iVar8 + 4);
        iVar8 = thunk_FUN_10008500(&DAT_10317ec8);
        *(float *)(iVar8 + 4) = (float)iVar11 * fVar1 + fVar2;
        iVar8 = thunk_FUN_10008500(&param_1);
        iVar10 = thunk_FUN_10008500(&stack0x00000028);
        fVar1 = *(float *)(iVar10 + 8);
        fVar2 = *(float *)(iVar8 + 8);
        iVar8 = thunk_FUN_10008500(&DAT_10317ec8);
        *(float *)(iVar8 + 8) = (float)(in_stack_0000003c + -2) * fVar1 + fVar2;
        _DAT_10317ee4 = param_4;
        _DAT_10317ee8 = param_5;
        _DAT_10317eec = param_6;
        iVar8 = (*DAT_102e1568)(0xfffffff6,10);
        iVar10 = thunk_FUN_10008500(&DAT_10317ef0);
        *(float *)(iVar10 + 8) = (float)iVar8;
        DAT_10317eb8 = 1;
        _DAT_10317f00 = 0;
        _DAT_10317f0c = 0.13;
        DAT_10317ee0 = 1;
        _DAT_10317f18 = 0;
        fVar12 = (float10)(*DAT_102e1564)(0x3f8ccccd,0x3fb33333);
        _DAT_10317f6c = (float)(fVar12 * (float10)param_8);
        _DAT_10317f08 = 0.7;
        DAT_10317f70 = DAT_10317f94;
        DAT_10317eb9 = 0;
        iVar8 = (*DAT_102e1568)(0xfffffff6,10);
        iVar10 = thunk_FUN_10008500(&DAT_10317ef0);
        *(float *)(iVar10 + 8) = (float)iVar8;
        iVar8 = thunk_FUN_1008fcd0(&DAT_1031abb0,(int)DAT_10317f70);
        _DAT_10317f14 = (float)iVar8;
        thunk_FUN_1008ffc0(&DAT_1031abb0,(undefined4 *)&DAT_10317eb8,0,0);
      }
      _DAT_10318424 = thunk_FUN_1008fd20(&DAT_1031abb0,(uint *)"sprites/scintille_metal.spr",5);
      _DAT_10317efc = 0;
      DAT_10317f73 = 0;
      DAT_10317f72 = 0;
      _DAT_10317ee4 = param_4;
      _DAT_10317ee8 = param_5;
      _DAT_10317eec = param_6;
      _DAT_10317ec8 = param_1;
      _DAT_10317ecc = param_2;
      _DAT_10317ed0 = param_3;
      DAT_10317eb8 = 1;
      _DAT_10317f00 = 0;
      _DAT_10317f0c = 0.09;
      DAT_10317ee0 = 0;
      _DAT_10317f18 = 0;
      _DAT_10317f6c = param_8 * 3.0;
      _DAT_10317f08 = 0.5;
      DAT_10317f70 = DAT_10318424;
      iVar8 = thunk_FUN_1008fcd0(&DAT_1031abb0,(int)DAT_10318424);
      _DAT_10317f14 = (float)iVar8;
      thunk_FUN_1008ffc0(&DAT_1031abb0,(undefined4 *)&DAT_10317eb8,0,0);
    }
    else {
      pfVar6 = thunk_FUN_10096e30(local_18);
      pvVar9 = thunk_FUN_1000ca70(&param_1,local_24,pfVar6);
      pvVar9 = (void *)thunk_FUN_10008500(pvVar9);
      fVar12 = thunk_FUN_10097fc0(extraout_ECX,pvVar9);
      _DAT_1031774c = (float)fVar12;
      if (_DAT_1031774c <= 512.0) {
        _DAT_10317efc = 0;
        DAT_10317f73 = 0;
        DAT_10317f72 = 0;
        DAT_10317eb8 = 1;
        _DAT_10317f00 = 0;
        DAT_10317ee0 = 1;
        _DAT_10317f18 = 0;
        DAT_10317f70 = DAT_10317f94;
        DAT_10317750 = (512.0 - _DAT_1031774c) * 0.0015625;
        DAT_10317b18 = 0.13;
        _DAT_10318090 = param_8;
        DAT_10317eb9 = 1;
        for (local_c = 0; local_c < sStack00000034; local_c = local_c + 1) {
          fVar12 = (float10)(*DAT_102e1564)(0x3f19999a,0x3f800000);
          _DAT_10317f6c = (float)(fVar12 * (float10)_DAT_10318090);
          pfVar6 = (float *)thunk_FUN_10008500(&param_1);
          fVar4 = (float)local_c;
          pfVar7 = (float *)thunk_FUN_10008500(&stack0x00000028);
          fVar1 = *pfVar7;
          iVar8 = (int)param_7;
          iVar10 = (int)sStack00000034;
          fVar2 = *pfVar6;
          pfVar6 = (float *)thunk_FUN_10008500(&stack0x00000028);
          fVar5 = (float)in_stack_0000003c;
          fVar3 = *pfVar6;
          pfVar6 = (float *)thunk_FUN_10008500(&DAT_10317ec8);
          *pfVar6 = fVar5 * fVar3 + (fVar4 * fVar1 * (float)iVar8) / (float)iVar10 + fVar2;
          iVar8 = thunk_FUN_10008500(&param_1);
          fVar4 = (float)local_c;
          iVar10 = thunk_FUN_10008500(&stack0x00000028);
          fVar1 = *(float *)(iVar10 + 4);
          iVar10 = (int)param_7;
          iVar11 = (int)sStack00000034;
          fVar2 = *(float *)(iVar8 + 4);
          iVar8 = thunk_FUN_10008500(&stack0x00000028);
          fVar5 = (float)in_stack_0000003c;
          fVar3 = *(float *)(iVar8 + 4);
          iVar8 = thunk_FUN_10008500(&DAT_10317ec8);
          *(float *)(iVar8 + 4) =
               fVar5 * fVar3 + (fVar4 * fVar1 * (float)iVar10) / (float)iVar11 + fVar2;
          iVar8 = thunk_FUN_10008500(&param_1);
          fVar4 = (float)local_c;
          iVar10 = thunk_FUN_10008500(&stack0x00000028);
          fVar1 = *(float *)(iVar10 + 8);
          iVar10 = (int)param_7;
          iVar11 = (int)sStack00000034;
          fVar2 = *(float *)(iVar8 + 8);
          iVar8 = thunk_FUN_10008500(&stack0x00000028);
          fVar5 = (float)in_stack_0000003c;
          fVar3 = *(float *)(iVar8 + 8);
          iVar8 = thunk_FUN_10008500(&DAT_10317ec8);
          *(float *)(iVar8 + 8) =
               fVar5 * fVar3 + (fVar4 * fVar1 * (float)iVar10) / (float)iVar11 + fVar2;
          _DAT_10317ee4 = param_4;
          _DAT_10317ee8 = param_5;
          _DAT_10317eec = param_6;
          iVar8 = (*DAT_102e1568)(0xffffffc4,0x3c);
          iVar10 = thunk_FUN_10008500(&DAT_10317ef0);
          *(float *)(iVar10 + 8) = (float)iVar8;
          iVar8 = thunk_FUN_1008fcd0(&DAT_1031abb0,(int)DAT_10317f70);
          _DAT_10317f14 = (float)iVar8;
          _DAT_10317f08 = DAT_10317750;
          _DAT_10317f0c = DAT_10317b18;
          if (local_c == 1) {
            local_6c = 0x33333333;
            uStack_68 = 0x3fd33333;
          }
          else {
            local_6c = 0;
            uStack_68 = 0;
          }
          _DAT_10317f10 = (float)(double)CONCAT44(uStack_68,local_6c);
          iVar8 = thunk_FUN_1008ffc0(&DAT_1031abb0,(undefined4 *)&DAT_10317eb8,0,0);
          if (iVar8 == -1) {
            return;
          }
          DAT_10317750 = DAT_10317750 / 1.1;
          DAT_10317b18 = DAT_10317b18 / 1.1;
          _DAT_10318090 = _DAT_10318090 / 1.1;
        }
      }
    }
  }
  return;
}

/* 10081820  FUN_10081820  (16 bytes)
 * undefined FUN_10081820(void)
 */
void FUN_10081820(void)

{
  return;
}

/* 10081840  FUN_10081840  (1892 bytes)
 * undefined FUN_10081840(undefined4 param_1, undefined4 param_2)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10081840(undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float10 fVar11;
  
  if ((DAT_10318438 & 1) == 0) {
    DAT_10318438 = DAT_10318438 | 1;
    thunk_FUN_1007dbf0(0x10318348);
    FUN_100bc490(0x100821c0);
  }
  if ((DAT_10318438 & 2) == 0) {
    DAT_10318438 = DAT_10318438 | 2;
    thunk_FUN_10007fe0(&DAT_10318428);
    FUN_100bc490(0x100821a0);
  }
  if ((DAT_10318438 & 4) == 0) {
    DAT_10318438 = DAT_10318438 | 4;
    thunk_FUN_10007fe0(&DAT_1031843c);
    FUN_100bc490(0x10082180);
  }
  puVar5 = (undefined4 *)thunk_FUN_10008500(param_2);
  puVar6 = (undefined4 *)thunk_FUN_10008500(&DAT_10318428);
  *puVar6 = *puVar5;
  iVar7 = thunk_FUN_10008500(param_2);
  iVar8 = thunk_FUN_10008500(&DAT_10318428);
  *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(iVar7 + 4);
  iVar7 = thunk_FUN_10008500(param_2);
  iVar8 = thunk_FUN_10008500(&DAT_10318428);
  *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar7 + 8);
  pfVar9 = (float *)thunk_FUN_10008500(&DAT_10318428);
  iVar7 = thunk_FUN_10008500(&DAT_10318428);
  if (*pfVar9 <= *(float *)(iVar7 + 4)) {
    pfVar9 = (float *)thunk_FUN_10008500(&DAT_10318428);
    iVar7 = thunk_FUN_10008500(&DAT_10318428);
    if (*pfVar9 <= *(float *)(iVar7 + 8)) {
      puVar5 = (undefined4 *)thunk_FUN_10008500(&DAT_10318428);
      *puVar5 = 0;
    }
    else {
      iVar7 = thunk_FUN_10008500(&DAT_10318428);
      *(undefined4 *)(iVar7 + 8) = 0;
    }
  }
  else {
    iVar7 = thunk_FUN_10008500(&DAT_10318428);
    iVar8 = thunk_FUN_10008500(&DAT_10318428);
    if (*(float *)(iVar7 + 4) <= *(float *)(iVar8 + 8)) {
      iVar7 = thunk_FUN_10008500(&DAT_10318428);
      *(undefined4 *)(iVar7 + 4) = 0;
    }
    else {
      iVar7 = thunk_FUN_10008500(&DAT_10318428);
      *(undefined4 *)(iVar7 + 8) = 0;
    }
  }
  _DAT_10318088 = thunk_FUN_1008fd20(&DAT_1031abb0,(uint *)0x102712c0,5);
  if (_DAT_10318088 != -1) {
    _DAT_1031838c = 0x40c00000;
    DAT_10318403 = 0;
    DAT_10318402 = 0;
    DAT_10318370 = 1;
    DAT_10318348 = 1;
    _DAT_1031839c = 0x3d4ccccd;
    _DAT_10318398 = 0x3f333333;
    DAT_10318400 = DAT_10318088;
    _DAT_103183a8 = 0;
    DAT_10318349 = 3;
    pfVar9 = (float *)thunk_FUN_10008500(&DAT_10318428);
    iVar7 = thunk_FUN_10008500(&DAT_10318428);
    fVar1 = *pfVar9;
    fVar2 = *(float *)(iVar7 + 4);
    iVar7 = thunk_FUN_10008500(&DAT_10318428);
    if (20.0 <= (((fVar1 + fVar2 + *(float *)(iVar7 + 8)) / 2.0) / 9.0) * 0.7) {
      _DAT_103183fc = 20.0;
    }
    else {
      pfVar9 = (float *)thunk_FUN_10008500(&DAT_10318428);
      iVar7 = thunk_FUN_10008500(&DAT_10318428);
      fVar1 = *pfVar9;
      fVar2 = *(float *)(iVar7 + 4);
      iVar7 = thunk_FUN_10008500(&DAT_10318428);
      _DAT_103183fc = (((fVar1 + fVar2 + *(float *)(iVar7 + 8)) / 2.0) / 9.0) * 0.7;
    }
    puVar5 = (undefined4 *)thunk_FUN_10008500(&DAT_10318380);
    *puVar5 = 0;
    iVar7 = thunk_FUN_10008500(&DAT_10318380);
    *(undefined4 *)(iVar7 + 4) = 0;
    puVar5 = (undefined4 *)thunk_FUN_10008500(param_1);
    puVar6 = (undefined4 *)thunk_FUN_10008500(&DAT_1031843c);
    *puVar6 = *puVar5;
    iVar7 = thunk_FUN_10008500(param_1);
    iVar8 = thunk_FUN_10008500(&DAT_1031843c);
    *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(iVar7 + 4);
    iVar7 = thunk_FUN_10008500(param_1);
    iVar8 = thunk_FUN_10008500(&DAT_1031843c);
    *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar7 + 8);
    pfVar9 = (float *)thunk_FUN_10008500(&DAT_10318428);
    if (*pfVar9 != 0.0) {
      pfVar9 = (float *)thunk_FUN_10008500(&DAT_1031843c);
      pfVar10 = (float *)thunk_FUN_10008500(param_2);
      *pfVar9 = *pfVar9 - *pfVar10 / 2.0;
    }
    iVar7 = thunk_FUN_10008500(&DAT_10318428);
    if (*(float *)(iVar7 + 4) != 0.0) {
      iVar7 = thunk_FUN_10008500(&DAT_1031843c);
      iVar8 = thunk_FUN_10008500(param_2);
      *(float *)(iVar7 + 4) = *(float *)(iVar7 + 4) - *(float *)(iVar8 + 4) / 2.0;
    }
    iVar7 = thunk_FUN_10008500(&DAT_10318428);
    if (*(float *)(iVar7 + 8) != 0.0) {
      iVar7 = thunk_FUN_10008500(&DAT_1031843c);
      iVar8 = thunk_FUN_10008500(param_2);
      *(float *)(iVar7 + 8) = *(float *)(iVar7 + 8) - *(float *)(iVar8 + 8) / 2.0;
    }
    for (DAT_10317a10 = 0; DAT_10317a10 < 9; DAT_10317a10 = DAT_10317a10 + 1) {
      pfVar9 = (float *)thunk_FUN_10008500(&DAT_10318428);
      if (*pfVar9 == 0.0) {
        iVar7 = thunk_FUN_10008500(param_1);
        iVar8 = thunk_FUN_10008500(param_2);
        fVar1 = *(float *)(iVar8 + 4);
        fVar2 = *(float *)(iVar7 + 4);
        fVar4 = (float)DAT_10317a10;
        iVar7 = thunk_FUN_10008500(param_2);
        fVar3 = *(float *)(iVar7 + 4);
        iVar7 = thunk_FUN_10008500(&DAT_1031843c);
        *(float *)(iVar7 + 4) = (fVar3 / 9.0) * fVar4 + (fVar2 - fVar1 / 2.0);
      }
      else {
        pfVar9 = (float *)thunk_FUN_10008500(param_1);
        pfVar10 = (float *)thunk_FUN_10008500(param_2);
        fVar1 = *pfVar10;
        fVar2 = *pfVar9;
        fVar4 = (float)DAT_10317a10;
        pfVar9 = (float *)thunk_FUN_10008500(param_2);
        fVar3 = *pfVar9;
        pfVar9 = (float *)thunk_FUN_10008500(&DAT_1031843c);
        *pfVar9 = (fVar3 / 9.0) * fVar4 + (fVar2 - fVar1 / 2.0);
      }
      for (DAT_1031825c = 0; DAT_1031825c < 9; DAT_1031825c = DAT_1031825c + 1) {
        pfVar9 = (float *)thunk_FUN_10008500(&DAT_10318428);
        if (*pfVar9 == 0.0) {
          iVar7 = thunk_FUN_10008500(param_1);
          iVar8 = thunk_FUN_10008500(param_2);
          fVar1 = *(float *)(iVar8 + 8);
          fVar2 = *(float *)(iVar7 + 8);
          fVar4 = (float)DAT_1031825c;
          iVar7 = thunk_FUN_10008500(param_2);
          fVar3 = *(float *)(iVar7 + 8);
          iVar7 = thunk_FUN_10008500(&DAT_1031843c);
          *(float *)(iVar7 + 8) = (fVar3 / 9.0) * fVar4 + (fVar2 - fVar1 / 2.0);
        }
        else {
          iVar7 = thunk_FUN_10008500(&DAT_10318428);
          if (*(float *)(iVar7 + 4) == 0.0) {
            iVar7 = thunk_FUN_10008500(param_1);
            iVar8 = thunk_FUN_10008500(param_2);
            fVar1 = *(float *)(iVar8 + 8);
            fVar2 = *(float *)(iVar7 + 8);
            fVar4 = (float)DAT_1031825c;
            iVar7 = thunk_FUN_10008500(param_2);
            fVar3 = *(float *)(iVar7 + 8);
            iVar7 = thunk_FUN_10008500(&DAT_1031843c);
            *(float *)(iVar7 + 8) = (fVar3 / 9.0) * fVar4 + (fVar2 - fVar1 / 2.0);
          }
          else {
            iVar7 = thunk_FUN_10008500(param_1);
            iVar8 = thunk_FUN_10008500(param_2);
            fVar1 = *(float *)(iVar8 + 4);
            fVar2 = *(float *)(iVar7 + 4);
            fVar4 = (float)DAT_1031825c;
            iVar7 = thunk_FUN_10008500(param_2);
            fVar3 = *(float *)(iVar7 + 4);
            iVar7 = thunk_FUN_10008500(&DAT_1031843c);
            *(float *)(iVar7 + 4) = (fVar3 / 9.0) * fVar4 + (fVar2 - fVar1 / 2.0);
          }
        }
        iVar7 = thunk_FUN_1008fcd0(&DAT_1031abb0,(int)DAT_10318400);
        _DAT_103183a4 = (float)iVar7;
        _DAT_10318358 = DAT_1031843c;
        _DAT_1031835c = DAT_10318440;
        _DAT_10318360 = DAT_10318444;
        fVar11 = (float10)(*DAT_102e1564)(0xc1100000,0x41100000);
        pfVar9 = (float *)thunk_FUN_10008500(&DAT_10318374);
        *pfVar9 = (float)fVar11;
        fVar11 = (float10)(*DAT_102e1564)(0xc1100000,0x41100000);
        iVar7 = thunk_FUN_10008500(&DAT_10318374);
        *(float *)(iVar7 + 4) = (float)fVar11;
        iVar7 = (*DAT_102e1568)(0,10);
        iVar8 = thunk_FUN_10008500(&DAT_10318374);
        *(float *)(iVar8 + 8) = (float)iVar7;
        pfVar9 = (float *)thunk_FUN_10008500(&DAT_10318374);
        fVar1 = *pfVar9;
        iVar7 = thunk_FUN_10008500(&DAT_10318380);
        *(float *)(iVar7 + 8) = fVar1 * 10.0;
        iVar7 = (*DAT_102e1568)(0x1e,0x32);
        _DAT_10318390 = (float)(iVar7 + -0x19) * 0.1;
        iVar7 = thunk_FUN_1008ffc0(&DAT_1031abb0,(undefined4 *)&DAT_10318348,0,0);
        if (iVar7 == -1) {
          return;
        }
      }
    }
  }
  return;
}

/* 10082180  FUN_10082180  (16 bytes)
 * undefined FUN_10082180(void)
 */
void FUN_10082180(void)

{
  return;
}

/* 100821a0  FUN_100821a0  (16 bytes)
 * undefined FUN_100821a0(void)
 */
void FUN_100821a0(void)

{
  return;
}

/* 100821c0  FUN_100821c0  (16 bytes)
 * undefined FUN_100821c0(void)
 */
void FUN_100821c0(void)

{
  return;
}

/* 100821e0  FUN_100821e0  (1947 bytes)
 * undefined FUN_100821e0(undefined4 * param_1, int param_2)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100821e0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  undefined4 *puVar5;
  float10 fVar6;
  longlong lVar7;
  undefined4 uVar8;
  char *pcVar9;
  float fVar10;
  int local_8;
  
  if ((DAT_10317ce4 & 1) == 0) {
    DAT_10317ce4 = DAT_10317ce4 | 1;
    thunk_FUN_1007dbf0(0x10318098);
    FUN_100bc490(0x10082b80);
  }
  uVar1 = (*DAT_102e1568)(0,4);
  switch(uVar1) {
  case 0:
    lVar7 = __ftol();
    fVar6 = (float10)(*DAT_102e1564)(0x3f6b851f,0x3f800000,0x3e4ccccd,0,(int)lVar7);
    fVar10 = (float)fVar6;
    pcVar9 = "explo/explode.wav";
    uVar8 = 6;
    uVar1 = thunk_FUN_10008500(param_1);
    (**(code **)(DAT_102e15a8 + 4))(0,uVar1,uVar8,pcVar9,fVar10);
    break;
  case 1:
    lVar7 = __ftol();
    fVar6 = (float10)(*DAT_102e1564)(0x3f6b851f,0x3f800000,0x3e4ccccd,0,(int)lVar7);
    fVar10 = (float)fVar6;
    pcVar9 = "explo/explode1.wav";
    uVar8 = 6;
    uVar1 = thunk_FUN_10008500(param_1);
    (**(code **)(DAT_102e15a8 + 4))(0,uVar1,uVar8,pcVar9,fVar10);
    break;
  case 2:
    lVar7 = __ftol();
    fVar6 = (float10)(*DAT_102e1564)(0x3f6b851f,0x3f800000,0x3e4ccccd,0,(int)lVar7);
    fVar10 = (float)fVar6;
    pcVar9 = "explo/explode2.wav";
    uVar8 = 6;
    uVar1 = thunk_FUN_10008500(param_1);
    (**(code **)(DAT_102e15a8 + 4))(0,uVar1,uVar8,pcVar9,fVar10);
    break;
  case 3:
    lVar7 = __ftol();
    fVar6 = (float10)(*DAT_102e1564)(0x3f6b851f,0x3f800000,0x3e4ccccd,0,(int)lVar7);
    fVar10 = (float)fVar6;
    pcVar9 = "explo/explode3.wav";
    uVar8 = 6;
    uVar1 = thunk_FUN_10008500(param_1);
    (**(code **)(DAT_102e15a8 + 4))(0,uVar1,uVar8,pcVar9,fVar10);
    break;
  case 4:
    lVar7 = __ftol();
    fVar6 = (float10)(*DAT_102e1564)(0x3f6b851f,0x3f800000,0x3e4ccccd,0,(int)lVar7);
    fVar10 = (float)fVar6;
    pcVar9 = "explo/explode4.wav";
    uVar8 = 6;
    uVar1 = thunk_FUN_10008500(param_1);
    (**(code **)(DAT_102e15a8 + 4))(0,uVar1,uVar8,pcVar9,fVar10);
  }
  _DAT_10317758 = thunk_FUN_1008fd20(&DAT_1031abb0,(uint *)"sprites/gun_smoke_add.spr",5);
  if (_DAT_10317758 != -1) {
    _DAT_103180dc = 0x40000000;
    DAT_10318153 = 0;
    DAT_10318152 = 0;
    DAT_103180c0 = 0;
    DAT_10318098 = 1;
    _DAT_103180ec = 0;
    _DAT_103180e8 = 0x3f333333;
    DAT_10318150 = DAT_10317758;
    _DAT_103180e0 = 0.0;
    _DAT_103180f4 = 0.0;
    _DAT_1031814c = (float)param_2 * 0.7;
    _DAT_103180a8 = *param_1;
    _DAT_103180ac = param_1[1];
    _DAT_103180b0 = param_1[2];
    iVar2 = thunk_FUN_10008500(&DAT_103180a8);
    *(float *)(iVar2 + 8) = _DAT_1031814c / 2.0 + *(float *)(iVar2 + 8);
    DAT_10318099 = 0;
    _DAT_103180f0 = 0x3dcccccd;
    for (local_8 = 0; (float)local_8 < DAT_1031b800 * 24.0; local_8 = local_8 + 1) {
      iVar2 = (*DAT_102e1568)(0xffffffca,0x36);
      pfVar3 = (float *)thunk_FUN_10008500(&DAT_103180c4);
      *pfVar3 = (float)iVar2;
      iVar2 = (*DAT_102e1568)(0xffffffca,0x36);
      iVar4 = thunk_FUN_10008500(&DAT_103180c4);
      *(float *)(iVar4 + 4) = (float)iVar2;
      iVar2 = (*DAT_102e1568)(0,0x20);
      iVar4 = thunk_FUN_10008500(&DAT_103180c4);
      *(float *)(iVar4 + 8) = (float)iVar2;
      iVar2 = (*DAT_102e1568)(2,10);
      _DAT_103180f8 = (float)iVar2;
      iVar2 = thunk_FUN_1008ffc0(&DAT_1031abb0,(undefined4 *)&DAT_10318098,0,0);
      if (iVar2 == -1) {
        return;
      }
    }
    _DAT_10317758 = thunk_FUN_1008fd20(&DAT_1031abb0,(uint *)"sprites/scintille_metal.spr",5);
    if (_DAT_10317758 != -1) {
      _DAT_103180dc = 0;
      DAT_10318153 = 0;
      DAT_10318152 = 0;
      DAT_103180c0 = 0;
      DAT_10318098 = 1;
      _DAT_103180ec = 0x3c23d70a;
      puVar5 = (undefined4 *)thunk_FUN_10008500(&DAT_103180c4);
      *puVar5 = 0;
      iVar2 = thunk_FUN_10008500(&DAT_103180c4);
      *(undefined4 *)(iVar2 + 4) = 0;
      iVar2 = thunk_FUN_10008500(&DAT_103180c4);
      *(undefined4 *)(iVar2 + 8) = 0;
      _DAT_103180e8 = 0x3f800000;
      DAT_10318150 = DAT_10317758;
      _DAT_103180f8 = 0.0;
      _DAT_103180e0 = 0.0;
      _DAT_1031814c = (float)(param_2 << 1);
      _DAT_103180a8 = *param_1;
      _DAT_103180ac = param_1[1];
      _DAT_103180b0 = param_1[2];
      iVar2 = thunk_FUN_10008500(&DAT_103180a8);
      *(float *)(iVar2 + 8) = _DAT_1031814c / 2.0 + *(float *)(iVar2 + 8);
      DAT_10318099 = 0;
      iVar2 = thunk_FUN_1008fcd0(&DAT_1031abb0,(int)DAT_10318150);
      _DAT_103180f4 = (float)iVar2;
      _DAT_103180f0 = 0x3f800000;
      iVar2 = thunk_FUN_1008ffc0(&DAT_1031abb0,(undefined4 *)&DAT_10318098,0,0);
      if ((iVar2 != -1) &&
         (_DAT_10317758 = thunk_FUN_1008fd20(&DAT_1031abb0,(uint *)"sprites/debris_concrete2.spr",5)
         , _DAT_10317758 != -1)) {
        _DAT_103180dc = 0x41500000;
        DAT_10318153 = 0;
        DAT_10318152 = 0;
        DAT_103180c0 = 1;
        DAT_10318098 = 1;
        _DAT_103180ec = 0x3d4ccccd;
        _DAT_103180e8 = 0x3f333333;
        DAT_10318150 = DAT_10317758;
        _DAT_103180f8 = 0.0;
        _DAT_1031814c = 8.0;
        _DAT_103180a8 = *param_1;
        _DAT_103180ac = param_1[1];
        _DAT_103180b0 = param_1[2];
        DAT_10318099 = 3;
        _DAT_103180f0 = 0;
        for (local_8 = 0; (float)local_8 < DAT_1031b800 * 64.0; local_8 = local_8 + 1) {
          iVar2 = (*DAT_102e1568)(0xffffff4c,0xb4);
          iVar4 = thunk_FUN_10008500(&DAT_103180d0);
          *(float *)(iVar4 + 8) = (float)iVar2;
          iVar2 = thunk_FUN_10008500(&DAT_103180d0);
          _DAT_103180e0 = *(float *)(iVar2 + 8) / 1000.0 + 2.0;
          iVar2 = thunk_FUN_1008fcd0(&DAT_1031abb0,(int)DAT_10318150);
          _DAT_103180f4 = (float)iVar2;
          iVar2 = (*DAT_102e1568)(0xffffffc0,0x40);
          pfVar3 = (float *)thunk_FUN_10008500(&DAT_103180c4);
          *pfVar3 = (float)iVar2;
          iVar2 = (*DAT_102e1568)(0xffffffc0,0x40);
          iVar4 = thunk_FUN_10008500(&DAT_103180c4);
          *(float *)(iVar4 + 4) = (float)iVar2;
          iVar2 = (*DAT_102e1568)(0,0x40);
          iVar4 = thunk_FUN_10008500(&DAT_103180c4);
          *(float *)(iVar4 + 8) = (float)iVar2;
          iVar2 = thunk_FUN_1008ffc0(&DAT_1031abb0,(undefined4 *)&DAT_10318098,0,0);
          if (iVar2 == -1) {
            return;
          }
        }
      }
    }
  }
  return;
}

/* 10082b80  FUN_10082b80  (16 bytes)
 * undefined FUN_10082b80(void)
 */
void FUN_10082b80(void)

{
  return;
}

/* 10082ba0  FUN_10082ba0  (243 bytes)
 * undefined FUN_10082ba0(undefined1 * param_1, int param_2)
 * called by: thunk_FUN_10082ba0
 */
void __cdecl FUN_10082ba0(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  float10 fVar2;
  undefined4 uVar3;
  char local_30 [32];
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_8 = param_2;
  local_10 = (*DAT_102e1568)(1,8);
  FUN_100bb6e0(local_30,(byte_conflict *)"{blood%i");
  local_c = (**(code **)(DAT_102e15a8 + 0x24))(*(undefined4 *)(local_8 + 0x30));
  if ((((&stack0x00000000 != (undefined1 *)0x30) && (local_30[0] != '\0')) && (local_c != 0)) &&
     ((*(int *)(local_c + 0x60) == 4 || (*(int *)(local_c + 0x7c) == 0xd)))) {
    fVar2 = (float10)thunk_FUN_1000cd40("r_decals");
    if (fVar2 != (float10)0.0) {
      uVar3 = 0;
      uVar1 = thunk_FUN_10008500(local_8 + 0x14);
      uVar1 = (**(code **)(DAT_102e15a8 + 0x20))(local_8,0,uVar1,uVar3);
      uVar1 = (**(code **)(DAT_102e15a4 + 0xd0))(local_30,uVar1);
      uVar1 = (**(code **)(DAT_102e15a4 + 0xcc))(uVar1);
      (**(code **)(DAT_102e15a4 + 0xd4))(uVar1);
    }
  }
  *param_1 = 0;
  return;
}

/* 10082cd0  FUN_10082cd0  (1027 bytes)
 * undefined FUN_10082cd0(undefined4 * param_1, void * param_2, int param_3)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10082cd0(undefined4 *param_1,void *param_2,int param_3)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float10 fVar7;
  longlong lVar8;
  undefined1 *puVar9;
  float fVar10;
  undefined1 auStack_d4 [8];
  undefined4 uStack_cc;
  undefined1 local_54 [12];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [12];
  int local_1c;
  char local_15;
  undefined1 local_14 [12];
  int local_8;
  
  if ((DAT_10318094 & 1) == 0) {
    DAT_10318094 = DAT_10318094 | 1;
    thunk_FUN_1007dbf0(0x10317a28);
    FUN_100bc490(0x10083240);
  }
  thunk_FUN_10007fe0(local_14);
  uVar1 = thunk_FUN_100968f0(param_1);
  if ((uVar1 & 0xff) != 0) {
    pvVar2 = thunk_FUN_10096e30(local_28);
    uVar1 = thunk_FUN_10096e80(param_1,pvVar2);
    if ((uVar1 & 0xff) != 0) {
      if (param_3 == 0) {
        puVar9 = auStack_d4;
        fVar10 = 6.0;
        pvVar2 = thunk_FUN_100831e0(param_2,local_38);
        thunk_FUN_1000cb20(pvVar2,puVar9,fVar10);
        thunk_FUN_10015ce0(&stack0xffffff20,param_1);
        thunk_FUN_1007e550();
      }
      else {
        _DAT_10317744 = thunk_FUN_1008fd20(&DAT_1031abb0,(uint *)"sprites/bloodfrag2.spr",1);
        if (_DAT_10317744 != -1) {
          iVar3 = thunk_FUN_10008500(param_2);
          iVar4 = thunk_FUN_10008500(local_14);
          *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar3 + 8);
          iVar3 = (*DAT_102e1568)();
          local_15 = 0x46 < iVar3;
          DAT_10317a28 = 1;
          DAT_10317ae0 = DAT_10317744;
          _DAT_10317a6c = 0x40400000;
          DAT_10317a50 = 0;
          _DAT_10317a7c = 0x3c23d70a;
          _DAT_10317a78 = 0x3f800000;
          _DAT_10317a88 = 0;
          _DAT_10317adc = 0x3f800000;
          DAT_10317a29 = 3;
          _DAT_10317a38 = *param_1;
          _DAT_10317a3c = param_1[1];
          _DAT_10317a40 = param_1[2];
          lVar8 = __ftol();
          local_8 = (int)lVar8;
          for (local_1c = 0; local_1c < local_8; local_1c = local_1c + 1) {
            pfVar5 = (float *)thunk_FUN_10008500(param_2);
            fVar7 = (float10)(*DAT_102e1564)();
            fVar10 = *pfVar5;
            pfVar5 = (float *)thunk_FUN_10008500(local_14);
            *pfVar5 = (float)(fVar7 + (float10)fVar10);
            iVar3 = thunk_FUN_10008500(param_2);
            fVar7 = (float10)(*DAT_102e1564)();
            fVar10 = *(float *)(iVar3 + 4);
            iVar3 = thunk_FUN_10008500(local_14);
            *(float *)(iVar3 + 4) = (float)(fVar7 + (float10)fVar10);
            iVar3 = thunk_FUN_1008fcd0(&DAT_1031abb0,(int)DAT_10317ae0);
            _DAT_10317a84 = (float)iVar3;
            _DAT_10317a80 = 0x3d99999a;
            fVar7 = (float10)(*DAT_102e1564)();
            _DAT_10317a70 = (float)fVar7;
            fVar10 = (float)(int)((-(uint)(local_15 != '\0') & 0xfffffffe) + 1);
            puVar9 = local_54;
            uStack_cc = 0x1008302f;
            iVar3 = (*DAT_102e1568)();
            uStack_cc = 0x1008304e;
            pvVar2 = thunk_FUN_1000cb20(local_14,local_48,(float)iVar3);
            puVar6 = thunk_FUN_1000cb20(pvVar2,puVar9,fVar10);
            _DAT_10317a54 = *puVar6;
            _DAT_10317a58 = puVar6[1];
            _DAT_10317a5c = puVar6[2];
            iVar3 = thunk_FUN_10008500(&DAT_10317a54);
            iVar4 = (*DAT_102e1568)();
            *(float *)(iVar3 + 8) = (float)iVar4 + *(float *)(iVar3 + 8);
            iVar3 = thunk_FUN_1008ffc0(&DAT_1031abb0,(undefined4 *)&DAT_10317a28,0,
                                       thunk_FUN_10082ba0);
            if (iVar3 == -1) {
              return;
            }
          }
        }
      }
    }
  }
  return;
}

/* 100831e0  FUN_100831e0  (67 bytes)
 * void * FUN_100831e0(void * param_1)
 */
void * __thiscall FUN_100831e0(void *this,void *param_1)

{
  thunk_FUN_1000cae0(param_1,-*(float *)this,-*(float *)((int)this + 4),-*(float *)((int)this + 8));
  return param_1;
}

/* 10083240  FUN_10083240  (16 bytes)
 * undefined FUN_10083240(void)
 */
void FUN_10083240(void)

{
  return;
}

/* 10083260  FUN_10083260  (642 bytes)
 * undefined FUN_10083260(void)
 */
/* WARNING: Removing unreachable block (ram,0x100832e6) */
/* WARNING: Removing unreachable block (ram,0x10083319) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10083260(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  longlong lVar7;
  
  if (DAT_1031b818 != '\0') {
    fVar5 = (float10)(*DAT_102e1530)();
    _DAT_1031844c = (float)(fVar5 - (float10)_DAT_10318448);
    if (0.0 <= _DAT_1031844c) {
      fVar5 = thunk_FUN_100962e0(0.1);
      if (fVar5 <= (float10)_DAT_1031844c) {
        fVar5 = (float10)(*DAT_102e1530)();
        _DAT_10318448 = (float)fVar5;
        DAT_10317dcc = 0;
        DAT_10317dcc = (**(code **)(DAT_102e15a4 + 0x100))(0);
        if (DAT_10317dcc != 0) {
          puVar1 = (undefined4 *)thunk_FUN_10008500(&stack0x00000004);
          puVar2 = (undefined4 *)thunk_FUN_10008500(DAT_10317dcc);
          *puVar2 = *puVar1;
          iVar3 = thunk_FUN_10008500(&stack0x00000004);
          iVar4 = thunk_FUN_10008500(DAT_10317dcc);
          *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar3 + 4);
          iVar3 = thunk_FUN_10008500(&stack0x00000004);
          iVar4 = thunk_FUN_10008500(DAT_10317dcc);
          *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar3 + 8);
          *(undefined4 *)(DAT_10317dcc + 0xc) = 0x43400000;
          lVar7 = __ftol();
          *(char *)(DAT_10317dcc + 0x10) = (char)lVar7;
          lVar7 = __ftol();
          *(char *)(DAT_10317dcc + 0x11) = (char)lVar7;
          lVar7 = __ftol();
          *(char *)(DAT_10317dcc + 0x12) = (char)lVar7;
          fVar5 = (float10)(*DAT_102e1530)();
          fVar6 = thunk_FUN_100962e0(0.06);
          *(float *)(DAT_10317dcc + 0x14) = (float)(fVar6 + (float10)(float)fVar5);
        }
      }
    }
    else {
      fVar5 = (float10)(*DAT_102e1530)();
      _DAT_10318448 = (float)fVar5;
    }
  }
  return;
}

/* 10083590  FUN_10083590  (335 bytes)
 * undefined FUN_10083590(undefined1 * param_1, int param_2)
 * called by: thunk_FUN_10083590
 */
void __cdecl FUN_10083590(undefined1 *param_1,int param_2)

{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 local_100 [12];
  undefined1 local_f4 [12];
  int local_e8;
  undefined1 local_e4;
  undefined1 local_e3;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 local_bc;
  undefined1 local_b8 [24];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  undefined1 local_29;
  int local_8;
  
  thunk_FUN_1007dbf0((int)&local_e4);
  local_8 = param_2;
  local_e8 = thunk_FUN_1008fd20(&DAT_1031abb0,(uint *)"sprites/gun_smoke_add.spr",5);
  if (local_e8 != -1) {
    local_a0 = 0;
    local_29 = 0;
    local_2a = 0;
    local_bc = 0;
    local_e4 = 1;
    local_90 = 0;
    local_94 = 0x3f000000;
    local_2c = (undefined2)local_e8;
    local_84 = 0x41f00000;
    local_9c = 0;
    local_88 = 0;
    local_30 = 0x41000000;
    pfVar1 = thunk_FUN_1000cb20((void *)(local_8 + 0x20),local_f4,4.0);
    puVar2 = thunk_FUN_1000d970((void *)(local_8 + 0x14),local_100,pfVar1);
    local_d4 = *puVar2;
    local_d0 = puVar2[1];
    local_cc = puVar2[2];
    local_e3 = 0;
    puVar2 = (undefined4 *)thunk_FUN_10008500(local_b8);
    *puVar2 = 0;
    iVar3 = thunk_FUN_10008500(local_b8);
    *(undefined4 *)(iVar3 + 4) = 0;
    iVar3 = thunk_FUN_10008500(local_b8);
    *(undefined4 *)(iVar3 + 8) = 0x40000000;
    local_8c = 0x3e800000;
    thunk_FUN_1008ffc0(&DAT_1031abb0,(undefined4 *)&local_e4,0,0);
    *param_1 = 0;
  }
  return;
}

/* 10083740  FUN_10083740  (806 bytes)
 * undefined FUN_10083740(undefined1 * param_1)
 * called by: thunk_FUN_10083740
 */
void __cdecl FUN_10083740(undefined1 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float10 fVar4;
  float10 fVar5;
  undefined1 local_f0 [12];
  int local_e4;
  undefined4 local_e0;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  float local_84;
  undefined4 local_80;
  undefined4 local_2c;
  short local_28;
  undefined1 local_26;
  undefined1 local_25;
  
  thunk_FUN_1007dbf0((int)&local_e0);
  fVar4 = (float10)(*DAT_102e1530)();
  if ((float10)*(float *)(param_1 + 0xd8) <= fVar4) {
    iVar1 = (*DAT_102e1568)(0,100);
    if (iVar1 < 0x51) {
      fVar4 = (float10)(*DAT_102e1530)();
      fVar5 = thunk_FUN_100962e0(DAT_1031b808);
      *(float *)(param_1 + 0xd8) = (float)(fVar5 + (float10)(float)fVar4);
    }
    else {
      fVar4 = (float10)(*DAT_102e1530)();
      fVar5 = (float10)(*DAT_102e1564)(0x3e99999a,0x3f19999a);
      fVar5 = thunk_FUN_100962e0((float)(fVar5 + (float10)DAT_1031b808));
      *(float *)(param_1 + 0xd8) = (float)(fVar5 + (float10)(float)fVar4);
    }
    local_e4 = thunk_FUN_1008fd20(&DAT_1031abb0,(uint *)0x102713bc,5);
    if (local_e4 != -1) {
      local_9c = 0x40a00000;
      local_25 = 0;
      local_26 = 0;
      local_b8 = 0;
      local_e0._0_1_ = 1;
      local_8c = 0x3d4ccccd;
      local_90 = 0x3f666666;
      local_28 = (short)local_e4;
      local_80 = 0;
      local_2c = 0x40400000;
      local_d0 = *(undefined4 *)(param_1 + 0x10);
      local_cc = *(undefined4 *)(param_1 + 0x14);
      local_c8 = *(undefined4 *)(param_1 + 0x18);
      local_e0._1_1_ = 0;
      puVar2 = thunk_FUN_1000cb20(param_1 + 0x1c,local_f0,1.0);
      local_b4 = *puVar2;
      local_b0 = puVar2[1];
      local_ac = puVar2[2];
      fVar4 = (float10)(*DAT_102e1564)(0xc0000000,0x40000000);
      pfVar3 = (float *)thunk_FUN_10008500(&local_b4);
      *pfVar3 = (float)fVar4;
      fVar4 = (float10)(*DAT_102e1564)(0xc0000000,0x40000000);
      iVar1 = thunk_FUN_10008500(&local_b4);
      *(float *)(iVar1 + 4) = (float)fVar4;
      iVar1 = thunk_FUN_10008500(&local_b4);
      *(undefined4 *)(iVar1 + 8) = 0;
      local_98 = 0x3f000000;
      iVar1 = thunk_FUN_1008fcd0(&DAT_1031abb0,(int)local_28);
      local_84 = (float)iVar1;
      local_88 = 0;
      thunk_FUN_1008ffc0(&DAT_1031abb0,&local_e0,0,0);
      *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) - 1.0;
      local_e4 = thunk_FUN_1008fd20(&DAT_1031abb0,(uint *)"sprites/gun_smoke_add.spr",5);
      if (local_e4 != -1) {
        local_9c = 0x40400000;
        local_25 = 0;
        local_26 = 0;
        local_b8 = 0;
        local_e0._0_1_ = 1;
        local_8c = 0;
        local_90 = 0x3e99999a;
        local_28 = (short)local_e4;
        local_80 = 0x41f00000;
        local_98 = 0;
        local_84 = 0.0;
        local_2c = 0x41000000;
        local_d0 = *(undefined4 *)(param_1 + 0x10);
        local_cc = *(undefined4 *)(param_1 + 0x14);
        local_c8 = *(undefined4 *)(param_1 + 0x18);
        local_e0._1_1_ = 0;
        local_88 = 0x3e800000;
        thunk_FUN_1008ffc0(&DAT_1031abb0,&local_e0,0,0);
        if (*(float *)(param_1 + 0x50) < 0.0 != (*(float *)(param_1 + 0x50) == 0.0)) {
          *param_1 = 0;
        }
      }
    }
  }
  return;
}

/* 10083b30  FUN_10083b30  (1440 bytes)
 * undefined FUN_10083b30(void)
 */
void FUN_10083b30(void)

{
  ushort uVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  float10 fVar9;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  int in_stack_0000001c;
  undefined1 auStack_1d4 [4];
  undefined4 uStack_1d0;
  undefined1 auStack_1c8 [4];
  undefined4 uStack_1c4;
  char *pcStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  code *local_194;
  undefined1 local_148 [12];
  undefined1 local_13c [12];
  undefined1 local_130 [12];
  undefined1 local_124 [12];
  undefined1 local_118 [20];
  undefined1 local_104 [12];
  int local_f8;
  float local_f4;
  float local_f0;
  undefined4 local_ec;
  int local_e8;
  int local_e4;
  undefined1 local_e0;
  undefined1 local_df;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [12];
  undefined4 local_9c;
  float local_98;
  float local_90;
  undefined4 local_8c;
  float local_84;
  undefined4 local_80;
  undefined4 local_2c;
  short local_28;
  undefined1 local_26;
  undefined1 local_25;
  undefined4 local_8;
  
  thunk_FUN_1007dbf0((int)&local_e0);
  local_f0 = 0.0;
  local_f4 = 0.25;
  uVar2 = thunk_FUN_100968f0(&stack0x00000004);
  if ((uVar2 & 0xff) != 0) {
    pvVar3 = thunk_FUN_10096e30(local_104);
    uVar2 = thunk_FUN_10096e80(&stack0x00000004,pvVar3);
    if ((uVar2 & 0xff) != 0) {
      if (in_stack_0000001c != 2) {
        local_f4 = DAT_1031b800;
      }
      iVar4 = (*DAT_102e1568)();
      if (iVar4 < 0x33) {
        local_e8 = 0;
      }
      else {
        local_e8 = 0;
        uStack_1c4 = 0x10083be3;
        thunk_FUN_10015ce0(&pcStack_1bc,&stack0x00000010);
        uStack_1d0 = 0x10083bf1;
        thunk_FUN_10015ce0(auStack_1c8,(undefined4 *)&stack0x00000004);
        thunk_FUN_1007f3f0();
      }
      uVar1 = thunk_FUN_1008feb0(&DAT_1031abb0,7);
      uVar2 = 0;
      if ((uVar1 & 0xff) == 0) {
        if (in_stack_0000001c != 1) {
          return;
        }
        local_f4 = local_f4 * 0.5;
      }
      else {
        fVar9 = thunk_FUN_100962e0(DAT_1031b804);
        uVar2 = thunk_FUN_1008ff10(&DAT_1031abb0,7,(float)fVar9);
      }
      if (0 < local_e8) {
        local_e4 = thunk_FUN_1008fd20(&DAT_1031abb0,(uint *)"sprites/debris_concrete3.spr",1);
        if (local_e4 == -1) {
          return;
        }
        local_9c = 0x40c00000;
        local_25 = 0;
        local_26 = 0;
        local_b8 = 1;
        local_e0 = 1;
        local_8c = 0x3d4ccccd;
        local_90 = 1.0;
        local_28 = (short)local_e4;
        local_80 = 0;
        local_2c = 0x40800000;
        pfVar5 = thunk_FUN_1000cb20(&stack0x00000010,local_118,2.0);
        puVar6 = thunk_FUN_1000d970(&stack0x00000004,local_124,pfVar5);
        local_d0 = *puVar6;
        local_cc = puVar6[1];
        local_c8 = puVar6[2];
        local_df = 3;
        for (local_f8 = 0; local_f8 < local_e8; local_f8 = local_f8 + 1) {
          iVar4 = (*DAT_102e1568)();
          iVar7 = thunk_FUN_10008500(local_a8);
          *(float *)(iVar7 + 8) = (float)iVar4;
          puVar6 = thunk_FUN_1000cb20(&stack0x00000010,local_130,16.0);
          local_b4 = *puVar6;
          local_b0 = puVar6[1];
          local_ac = puVar6[2];
          pfVar5 = (float *)thunk_FUN_10008500(&local_b4);
          iVar4 = (*DAT_102e1568)();
          *pfVar5 = (float)iVar4 + *pfVar5;
          iVar4 = thunk_FUN_10008500(&local_b4);
          iVar7 = (*DAT_102e1568)();
          *(float *)(iVar4 + 4) = (float)iVar7 + *(float *)(iVar4 + 4);
          iVar4 = thunk_FUN_10008500(&local_b4);
          iVar7 = (*DAT_102e1568)();
          *(float *)(iVar4 + 8) = (float)iVar7 + *(float *)(iVar4 + 8);
          iVar4 = thunk_FUN_10008500(local_a8);
          local_98 = *(float *)(iVar4 + 8) / 1000.0 + 1.0;
          iVar4 = thunk_FUN_1008fcd0(&DAT_1031abb0,(int)local_28);
          local_84 = (float)iVar4;
          iVar4 = (*DAT_102e1568)();
          local_f0 = (float)iVar4;
          if (local_f0 <= 60.0) {
            local_194 = (code *)0x0;
          }
          else {
            local_194 = thunk_FUN_10083590;
          }
          uStack_1b4 = 0x10083f03;
          iVar4 = thunk_FUN_1008ffc0(&DAT_1031abb0,(undefined4 *)&local_e0,0,local_194);
          if (iVar4 == -1) {
            return;
          }
        }
        uVar2 = 0;
        if (90.0 < local_f0) {
          uVar8 = thunk_FUN_10008500(&stack0x00000010);
          uVar2 = uVar8 & 0xffff0000;
          if (*(float *)(uVar8 + 8) < 0.3) {
            local_9c = 0;
            local_25 = 0;
            local_26 = 0;
            local_b8 = 0;
            local_e0 = 1;
            local_8c = 0;
            local_28 = -1;
            local_80 = 0;
            pfVar5 = thunk_FUN_1000cb20(&stack0x00000010,local_13c,2.0);
            puVar6 = thunk_FUN_1000d970(&stack0x00000004,local_148,pfVar5);
            local_d0 = *puVar6;
            local_cc = puVar6[1];
            local_c8 = puVar6[2];
            puVar6 = (undefined4 *)thunk_FUN_10008500(&local_b4);
            *puVar6 = 0;
            iVar4 = thunk_FUN_10008500(&local_b4);
            *(undefined4 *)(iVar4 + 4) = 0;
            iVar4 = thunk_FUN_10008500(&local_b4);
            *(undefined4 *)(iVar4 + 8) = 0;
            local_c4 = in_stack_00000010;
            local_c0 = in_stack_00000014;
            local_bc = in_stack_00000018;
            iVar4 = (*DAT_102e1568)();
            local_90 = (float)iVar4;
            local_98 = 10.0;
            local_8 = 0;
            local_df = 0;
            uStack_1b4 = 0x1008405b;
            uVar2 = thunk_FUN_1008ffc0(&DAT_1031abb0,(undefined4 *)&local_e0,thunk_FUN_10083740,0);
            if (uVar2 == 0xffffffff) {
              return;
            }
          }
        }
      }
      if (in_stack_0000001c == 1) {
        local_ec = 1;
      }
      else if (in_stack_0000001c == 2) {
        local_ec = 2;
      }
      else {
        local_ec = 4;
      }
      uStack_1b4 = CONCAT22((short)(uVar2 >> 0x10),(undefined2)local_ec);
      uStack_1b8 = 5;
      pcStack_1bc = "sprites/gun_smoke_add.spr";
      uStack_1d0 = 0x100840b3;
      thunk_FUN_10015ce0(auStack_1c8,&stack0x00000010);
      thunk_FUN_10015ce0(auStack_1d4,(undefined4 *)&stack0x00000004);
      thunk_FUN_1007e7f0();
    }
  }
  return;
}

/* 10084240  FUN_10084240  (933 bytes)
 * undefined FUN_10084240(undefined4 * param_1, undefined4 * param_2, int param_3, undefined4 param_4)
 */
void __cdecl FUN_10084240(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  void *pvVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 uVar4;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  float10 fVar5;
  undefined4 uStack_fc;
  undefined4 uStack_f0;
  char *pcStack_e4;
  undefined4 uStack_e0;
  char *pcStack_d8;
  undefined4 uStack_d4;
  uint uStack_d0;
  char *pcStack_cc;
  undefined1 local_18 [12];
  int local_c;
  uint local_8;
  
  uVar1 = thunk_FUN_1008feb0(&DAT_1031abb0,7);
  if ((uVar1 & 0xff) == 0) {
    if ((param_3 != 1) && (param_3 != 2)) {
      return;
    }
  }
  else {
    fVar5 = thunk_FUN_100962e0(DAT_1031b804);
    pcStack_cc = (char *)0x1008428e;
    thunk_FUN_1008ff10(&DAT_1031abb0,7,(float)fVar5);
  }
  uVar2 = thunk_FUN_100968f0(param_1);
  if ((uVar2 & 0xff) != 0) {
    pvVar3 = thunk_FUN_10096e30(local_18);
    pcStack_cc = (char *)0x100842be;
    uVar2 = thunk_FUN_10096e80(param_1,pvVar3);
    if ((uVar2 & 0xff) != 0) {
      if (param_3 == 1) {
        local_8 = 1;
      }
      else if (param_3 == 2) {
        local_8 = 2;
      }
      else {
        local_8 = 4;
      }
      pcStack_cc = (char *)0x100842fe;
      local_c = (*DAT_102e1568)();
      switch(param_4) {
      case 0x44:
        pcStack_cc = (char *)0x10;
        uStack_d0 = local_8 & 0xffff;
        uStack_d4 = 5;
        pcStack_d8 = "sprites/wood_smoke_add.spr";
        thunk_FUN_10015ce0(&pcStack_e4,param_2);
        thunk_FUN_10015ce0(&uStack_f0,param_1);
        thunk_FUN_1007e7f0();
        break;
      default:
        pcStack_cc = (char *)0x9;
        uStack_d0 = 0x3f800000;
        uStack_d4 = 0x20;
        pcStack_d8 = (char *)0x40800000;
        uStack_e0 = 1;
        pcStack_e4 = (char *)0x10084356;
        (*DAT_102e1568)();
        uStack_e0 = 1;
        pcStack_e4 = "sprites/debris_concrete3.spr";
        thunk_FUN_10015ce0(&uStack_f0,param_2);
        thunk_FUN_10015ce0(&uStack_fc,param_1);
        thunk_FUN_1007ef20();
        pcStack_cc = (char *)0x10;
        uStack_d0 = CONCAT22(extraout_var,(undefined2)local_8);
        uStack_d4 = 5;
        pcStack_d8 = "sprites/gun_smoke_add.spr";
        thunk_FUN_10015ce0(&pcStack_e4,param_2);
        thunk_FUN_10015ce0(&uStack_f0,param_1);
        thunk_FUN_1007e7f0();
        break;
      case 0x46:
      case 0x53:
        break;
      case 0x47:
      case 0x4d:
      case 0x56:
        if (0x21 < local_c) {
          pcStack_cc = "sprites/scintille_metal.spr";
          uStack_e0 = 0x100843dd;
          thunk_FUN_10015ce0(&pcStack_d8,param_2);
          thunk_FUN_10015ce0(&pcStack_e4,param_1);
          thunk_FUN_1007f3f0();
        }
        pcStack_cc = (char *)0x9;
        uStack_d0 = 0x3e4ccccd;
        uStack_d4 = 0x20;
        pcStack_d8 = (char *)0x40800000;
        uStack_e0 = 1;
        pcStack_e4 = (char *)0x1008440f;
        (*DAT_102e1568)();
        uStack_e0 = 5;
        pcStack_e4 = "sprites/scintille2.spr";
        thunk_FUN_10015ce0(&uStack_f0,param_2);
        thunk_FUN_10015ce0(&uStack_fc,param_1);
        thunk_FUN_1007ef20();
        uVar4 = extraout_var_00;
        if (0x46 < local_c) {
          pcStack_cc = (char *)0x3f400000;
          uStack_d0 = 0;
          uStack_d4 = 5;
          pcStack_d8 = (char *)0x5;
          uStack_f0 = 0x1008446c;
          thunk_FUN_10015ce0(&stack0xffffff18,param_2);
          uStack_fc = 0x1008447a;
          thunk_FUN_10015ce0(&stack0xffffff0c,param_1);
          thunk_FUN_1007ec80();
          uVar4 = extraout_var_01;
        }
        pcStack_cc = (char *)0x10;
        uStack_d0 = CONCAT22(uVar4,(undefined2)local_8);
        uStack_d4 = 5;
        pcStack_d8 = "sprites/gun_smoke_add.spr";
        thunk_FUN_10015ce0(&pcStack_e4,param_2);
        thunk_FUN_10015ce0(&uStack_f0,param_1);
        thunk_FUN_1007e7f0();
        break;
      case 0x50:
      case 0x59:
        pcStack_cc = "sprites/scintille_metal.spr";
        uStack_e0 = 0x10084592;
        thunk_FUN_10015ce0(&pcStack_d8,param_2);
        thunk_FUN_10015ce0(&pcStack_e4,param_1);
        thunk_FUN_1007f3f0();
        pcStack_cc = (char *)0x10;
        uStack_d0 = CONCAT22(extraout_var_03,(undefined2)local_8);
        uStack_d4 = 5;
        pcStack_d8 = "sprites/gun_smoke_add.spr";
        thunk_FUN_10015ce0(&pcStack_e4,param_2);
        thunk_FUN_10015ce0(&uStack_f0,param_1);
        thunk_FUN_1007e7f0();
        break;
      case 0x57:
        pcStack_cc = (char *)0x5;
        uStack_d0 = 0x3f800000;
        uStack_d4 = 0x20;
        pcStack_d8 = (char *)0x40c00000;
        uStack_e0 = 1;
        pcStack_e4 = (char *)0x100844d9;
        (*DAT_102e1568)();
        uStack_e0 = 5;
        pcStack_e4 = "sprites/woodfrag.spr";
        thunk_FUN_10015ce0(&uStack_f0,param_2);
        thunk_FUN_10015ce0(&uStack_fc,param_1);
        thunk_FUN_1007ef20();
        pcStack_cc = (char *)0x10;
        uStack_d0 = CONCAT22(extraout_var_02,(undefined2)local_8);
        uStack_d4 = 5;
        pcStack_d8 = "sprites/wood_smoke_add.spr";
        thunk_FUN_10015ce0(&pcStack_e4,param_2);
        thunk_FUN_10015ce0(&uStack_f0,param_1);
        thunk_FUN_1007e7f0();
      }
    }
  }
  return;
}

/* 10084710  FUN_10084710  (186 bytes)
 * undefined4 FUN_10084710(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 */
undefined4 __cdecl
FUN_10084710(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  uint uVar2;
  float10 fVar3;
  
  thunk_FUN_10056240(param_4,param_3);
  uVar2 = thunk_FUN_10056300();
  if ((DAT_102e7f18 == 0) || (*(float *)(DAT_102e7f18 + 0xc) == 0.0)) {
    DAT_102e7f1c = (float)(int)uVar2;
    if (uVar2 == 0) {
      *(undefined4 *)(param_1 + 0x58) = 0x50;
    }
    else {
      *(uint *)(param_1 + 0x58) = uVar2;
    }
    if (*(int *)(param_1 + 0x58) == 0x50) {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    else {
      fVar1 = *(float *)(DAT_102e8498 + 0xc);
      fVar3 = (float10)thunk_FUN_1000cd40("zoom_sensitivity_ratio");
      *(float *)(param_1 + 0x18) = (float)(fVar3 * (float10)(((float)(int)uVar2 / 80.0) * fVar1));
    }
  }
  return 1;
}

/* 10084800  FUN_10084800  (530 bytes)
 * undefined FUN_10084800(int * param_1, int param_2)
 */
void __cdecl FUN_10084800(int *param_1,int param_2)

{
  longlong lVar1;
  
  if ((*param_1 < 1) || (0x50 < *param_1)) {
    *param_1 = param_2;
  }
  else if (*param_1 != param_2) {
    if (*param_1 < param_2) {
      lVar1 = __ftol();
      *param_1 = (int)lVar1;
      if (param_2 <= *param_1) {
        *param_1 = param_2;
      }
    }
    else if (param_2 < *param_1) {
      lVar1 = __ftol();
      *param_1 = (int)lVar1;
      if (*param_1 <= param_2) {
        *param_1 = param_2;
      }
    }
    else {
      *param_1 = param_2;
    }
  }
  return;
}

/* 10084aa0  FUN_10084aa0  (346 bytes)
 * undefined FUN_10084aa0(undefined4 * param_1)
 */
void __fastcall FUN_10084aa0(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  longlong lVar5;
  int *local_10;
  
  for (local_10 = (int *)*param_1; local_10 != (int *)0x0; local_10 = (int *)local_10[1]) {
    if ((*(uint *)(*local_10 + 0x10) & 1) != 0) {
      (**(code **)(*(int *)*local_10 + 0x10))();
    }
  }
  *(undefined4 *)(param_1[0x1e] + 0xc) = 0x42a00000;
  thunk_FUN_10046e30();
  lVar5 = __ftol();
  iVar3 = (int)lVar5;
  if (iVar3 == 0) {
    lVar5 = __ftol();
    thunk_FUN_10084800(param_1 + 0x16,(int)lVar5);
  }
  else {
    thunk_FUN_10084800(param_1 + 0x16,iVar3);
  }
  if ((float)(int)param_1[0x16] == *(float *)(param_1[0x1e] + 0xc)) {
    param_1[6] = 0;
  }
  else {
    fVar1 = *(float *)(param_1[0x1e] + 0xc);
    fVar2 = *(float *)(DAT_102e8498 + 0xc);
    fVar4 = (float10)thunk_FUN_1000cd40("zoom_sensitivity_ratio");
    param_1[6] = (float)(fVar4 * (float10)(((float)iVar3 / fVar1) * fVar2));
  }
  if (param_1[0x16] == 0) {
    lVar5 = __ftol();
    param_1[0x16] = (int)lVar5;
  }
  return;
}

/* 10084c50  FUN_10084c50  (38 bytes)
 * undefined FUN_10084c50(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_10084c50
 */
void __cdecl FUN_10084c50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_100877b0(&DAT_102e024c,param_1,param_2,param_3);
  return;
}

/* 10084c80  FUN_10084c80  (38 bytes)
 * undefined FUN_10084c80(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_10084c80
 */
void __cdecl FUN_10084c80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10087a10(&DAT_102e024c,param_1,param_2,param_3);
  return;
}

/* 10084cb0  FUN_10084cb0  (38 bytes)
 * undefined FUN_10084cb0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_10084cb0
 */
void __cdecl FUN_10084cb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10087a70(&DAT_102e024c,param_1,param_2,param_3);
  return;
}

/* 10084ce0  FUN_10084ce0  (38 bytes)
 * undefined FUN_10084ce0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_10084ce0
 */
void __cdecl FUN_10084ce0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10087ad0(&DAT_102e024c,param_1,param_2,param_3);
  return;
}

/* 10084d10  FUN_10084d10  (38 bytes)
 * undefined FUN_10084d10(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_10084d10
 */
void __cdecl FUN_10084d10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10087b30(&DAT_102e024c,param_1,param_2,param_3);
  return;
}

/* 10084d40  FUN_10084d40  (38 bytes)
 * undefined FUN_10084d40(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_10084d40
 */
void __cdecl FUN_10084d40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10087b90(&DAT_102e024c,param_1,param_2,param_3);
  return;
}

/* 10084d70  FUN_10084d70  (38 bytes)
 * undefined FUN_10084d70(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_10084d70
 */
void __cdecl FUN_10084d70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10087c60(&DAT_102e024c,param_1,param_2,param_3);
  return;
}

/* 10084da0  FUN_10084da0  (38 bytes)
 * undefined FUN_10084da0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_10084da0
 */
void __cdecl FUN_10084da0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10087cd0(&DAT_102e024c,param_1,param_2,param_3);
  return;
}

/* 10084dd0  FUN_10084dd0  (38 bytes)
 * undefined FUN_10084dd0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_10084dd0
 */
void __cdecl FUN_10084dd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10087d50(param_1,param_2,param_3);
  return;
}

/* 10084e00  FUN_10084e00  (38 bytes)
 * undefined FUN_10084e00(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_10084e00
 */
void __cdecl FUN_10084e00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10087ed0(&DAT_102e024c,param_1,param_2,param_3);
  return;
}

/* 10084e30  FUN_10084e30  (38 bytes)
 * undefined FUN_10084e30(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_10084e30
 */
void __cdecl FUN_10084e30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_100882e0(param_1,param_2,param_3);
  return;
}

/* 10084e60  FUN_10084e60  (38 bytes)
 * undefined FUN_10084e60(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_10084e60
 */
void __cdecl FUN_10084e60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_100881e0(&DAT_102e024c,param_1,param_2,param_3);
  return;
}

/* 10084e90  FUN_10084e90  (38 bytes)
 * undefined FUN_10084e90(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_10084e90
 */
void __cdecl FUN_10084e90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10088420(&DAT_102e024c,param_1,param_2,param_3);
  return;
}

/* 10084ec0  FUN_10084ec0  (38 bytes)
 * undefined FUN_10084ec0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_10084ec0
 */
void __cdecl FUN_10084ec0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10088480(&DAT_102e024c,param_1,param_2,param_3);
  return;
}

/* 10084ef0  FUN_10084ef0  (38 bytes)
 * undefined FUN_10084ef0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_10084ef0
 */
void __cdecl FUN_10084ef0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10087860(&DAT_102e024c,param_1,param_2,param_3);
  return;
}

/* 10084f20  FUN_10084f20  (38 bytes)
 * undefined FUN_10084f20(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_10084f20
 */
void __cdecl FUN_10084f20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_100878e0(&DAT_102e024c,param_1,param_2,param_3);
  return;
}

/* 10084f50  FUN_10084f50  (38 bytes)
 * undefined FUN_10084f50(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_10084f50
 */
void __cdecl FUN_10084f50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_100879a0(&DAT_102e024c,param_1,param_2,param_3);
  return;
}

/* 10084f80  FUN_10084f80  (38 bytes)
 * undefined FUN_10084f80(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_10084f80
 */
void __cdecl FUN_10084f80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10088510(&DAT_102e024c,param_1,param_2,param_3);
  return;
}

/* 10084fb0  FUN_10084fb0  (38 bytes)
 * undefined FUN_10084fb0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_10084fb0
 */
void __cdecl FUN_10084fb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10087f60(param_1,param_2,param_3);
  return;
}

/* 10084fe0  FUN_10084fe0  (38 bytes)
 * undefined FUN_10084fe0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_10084fe0
 */
void __cdecl FUN_10084fe0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10088020(param_1,param_2,param_3);
  return;
}

/* 10085010  FUN_10085010  (418 bytes)
 * undefined4 FUN_10085010(int param_1)
 * called by: thunk_FUN_10085010
 */
undefined4 __fastcall FUN_10085010(int param_1)

{
  (*DAT_102e14a0)("TSHealth",thunk_FUN_10084c50);
  (*DAT_102e14a0)("TSArmor",thunk_FUN_10084c80);
  (*DAT_102e14a0)("TSState",thunk_FUN_10084cb0);
  (*DAT_102e14a0)("TSCash",thunk_FUN_10084ce0);
  (*DAT_102e14a0)("TSSpace",thunk_FUN_10084d10);
  (*DAT_102e14a0)(&DAT_102714b0,thunk_FUN_10084d40);
  (*DAT_102e14a0)("PwUpTime",thunk_FUN_10084d70);
  (*DAT_102e14a0)("RoundTime",thunk_FUN_10084da0);
  (*DAT_102e14a0)("Objective",thunk_FUN_10084dd0);
  (*DAT_102e14a0)("DelObj",thunk_FUN_10084e00);
  (*DAT_102e14a0)("TSMessage",thunk_FUN_10084e30);
  (*DAT_102e14a0)("PTakeDam",thunk_FUN_10084fb0);
  (*DAT_102e14a0)("TSSlowMo",thunk_FUN_10084e60);
  (*DAT_102e14a0)("TSFrags",thunk_FUN_10084fe0);
  (*DAT_102e14a0)("GloSlow",thunk_FUN_10084e90);
  (*DAT_102e14a0)("KAlign",thunk_FUN_10084ec0);
  (*DAT_102e14a0)("TSPAward",thunk_FUN_10084ef0);
  (*DAT_102e14a0)("SrvSett",thunk_FUN_10084f20);
  (*DAT_102e14a0)("TSBTime",thunk_FUN_10084f50);
  (*DAT_102e14a0)("TSHVoice",thunk_FUN_10084f80);
  thunk_FUN_10046ec0(&DAT_102da3c8,param_1);
  return 1;
}

/* 10085220  FUN_10085220  (506 bytes)
 * undefined4 FUN_10085220(int param_1)
 * called by: thunk_FUN_10085220
 */
undefined4 __fastcall FUN_10085220(int param_1)

{
  undefined4 uVar1;
  
  _memset((void *)(param_1 + 0x38),0,0x20);
  uVar1 = (*DAT_102e1458)("sprites/player/stand.spr");
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  uVar1 = (*DAT_102e1458)("sprites/player/crouched.spr");
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = (*DAT_102e1458)("sprites/player/prone.spr");
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  uVar1 = (*DAT_102e1458)("sprites/player/health.spr");
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  uVar1 = (*DAT_102e1458)("sprites/player/kevlar.spr");
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  uVar1 = (*DAT_102e1458)("sprites/slowmotion.spr");
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  uVar1 = (*DAT_102e1458)("sprites/cursor.spr");
  *(undefined4 *)(param_1 + 0xfb0) = uVar1;
  uVar1 = (*DAT_102e1458)("sprites/compass.spr");
  *(undefined4 *)(param_1 + 0xfb4) = uVar1;
  uVar1 = (*DAT_102e1458)("sprites/uparrow.spr");
  *(undefined4 *)(param_1 + 0xfb8) = uVar1;
  uVar1 = (*DAT_102e1458)("sprites/downarrow.spr");
  *(undefined4 *)(param_1 + 0xfbc) = uVar1;
  uVar1 = (*DAT_102e1458)("sprites/player/kungfu.spr");
  *(undefined4 *)(param_1 + 100) = uVar1;
  uVar1 = (*DAT_102e1458)("sprites/player/movement.spr");
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0xfc0) = 0;
  _memset((void *)(param_1 + 0x6c),0,0x5c0);
  _memset((void *)(param_1 + 0xfc1),0,0x21);
  _memset((void *)(param_1 + 0x62c),0,0x980);
  *(undefined4 *)(param_1 + 0xfac) = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  return 1;
}

/* 100854a0  FUN_100854a0  (126 bytes)
 * undefined FUN_100854a0(int param_1)
 * called by: thunk_FUN_100854a0
 */
void __fastcall FUN_100854a0(int param_1)

{
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0xfc0) = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  return;
}

/* 10085540  FUN_10085540  (19 bytes)
 * undefined FUN_10085540(void)
 * called by: thunk_FUN_10085540
 */
void FUN_10085540(void)

{
  return;
}

/* 10085560  FUN_10085560  (328 bytes)
 * undefined4 FUN_10085560(int param_1)
 * called by: thunk_FUN_10085560
 */
undefined4 __fastcall FUN_10085560(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  
  if (DAT_1031bf00 != '\0') {
    lVar5 = __ftol();
    uVar2 = (undefined4)lVar5;
    lVar5 = __ftol();
    uVar3 = (undefined4)lVar5;
    lVar5 = __ftol();
    (*DAT_102e1468)(*(undefined4 *)(param_1 + 0xfb0),(int)lVar5,uVar3,uVar2);
    (*DAT_102e1474)(0,DAT_1031bef8 + -0x10,DAT_1031befc + -0x10,0);
  }
  if (*(float *)(DAT_102e8268 + 0xc) == 0.0) {
    if (*(float *)(param_1 + 0x2c) != 0.0) {
      thunk_FUN_10085970(param_1);
    }
    thunk_FUN_10086ec0(param_1);
    uVar4 = thunk_FUN_100885b0();
    if (((uVar4 & 0xff) == 0) && (cVar1 = thunk_FUN_10088600(), cVar1 == '\0')) {
      if (DAT_102da424 != 0) {
        thunk_FUN_10086950(param_1);
      }
      thunk_FUN_10086b00();
      thunk_FUN_10085d90(param_1);
      if (*(int *)(param_1 + 0x14) == 0) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
      else {
        thunk_FUN_10085c00(param_1);
      }
      if (1 < DAT_102da424) {
        thunk_FUN_10085700(param_1);
      }
    }
  }
  return 1;
}

/* 10085700  FUN_10085700  (493 bytes)
 * undefined FUN_10085700(int param_1)
 */
void __fastcall FUN_10085700(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_c;
  
  for (local_c = 0; local_c <= *(int *)(param_1 + 0xfac); local_c = local_c + 1) {
    if (*(char *)(param_1 + 0x638 + local_c * 0x4c) != '\0') {
      puVar5 = &DAT_10318748;
      puVar4 = &DAT_10318830;
      uVar1 = thunk_FUN_10008500(param_1 + 0x62c + local_c * 0x4c);
      thunk_FUN_10097650(uVar1,puVar4,puVar5);
      if ((DAT_10318830 != -1) && (DAT_10318748 != -1)) {
        (*DAT_102e1468)(*(undefined4 *)(param_1 + 0xfb4),100,100,0xcd);
        (*DAT_102e1474)(0,DAT_10318830 + -0x10,DAT_10318748 + -0x10,0);
        iVar2 = thunk_FUN_10008500(param_1 + 0x62c + local_c * 0x4c);
        iVar3 = thunk_FUN_10008500(&DAT_102da400);
        if (*(float *)(iVar2 + 8) <= *(float *)(iVar3 + 8) + 72.0) {
          iVar2 = thunk_FUN_10008500(param_1 + 0x62c + local_c * 0x4c);
          iVar3 = thunk_FUN_10008500(&DAT_102da400);
          if (*(float *)(iVar2 + 8) < *(float *)(iVar3 + 8) - 72.0) {
            (*DAT_102e1468)(*(undefined4 *)(param_1 + 0xfbc),100,100,0xcd);
            (*DAT_102e1474)(0,DAT_10318830 + -0x10,DAT_10318748 + 0x10,0);
          }
        }
        else {
          (*DAT_102e1468)(*(undefined4 *)(param_1 + 0xfb8),100,100,0xcd);
          (*DAT_102e1474)(0,DAT_10318830 + -0x10,DAT_10318748 + -0x30,0);
        }
        thunk_FUN_10047f00(DAT_10318830 + 0x10,DAT_10318748 + -8,DAT_102e1234,
                           (char *)(param_1 + 0x638 + local_c * 0x4c),100,100,0xcd);
      }
    }
  }
  return;
}

/* 10085970  FUN_10085970  (515 bytes)
 * undefined FUN_10085970(int param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10085970(int param_1)

{
  longlong lVar1;
  undefined4 local_50;
  undefined4 uStack_4c;
  
  if (*(float *)(param_1 + 0x30) < DAT_102da3ec) {
    if (*(char *)(param_1 + 0x34) != '\x02') {
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) - 1.0;
    }
    if (*(float *)(param_1 + 0x2c) < 0.0 != (*(float *)(param_1 + 0x2c) == 0.0)) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    if (*(char *)(param_1 + 0x34) == '\x01') {
      local_50 = 0xa0000000;
      uStack_4c = 0x3fb99999;
    }
    else {
      local_50 = 0;
      uStack_4c = 0x3ff00000;
    }
    *(float *)(param_1 + 0x30) = DAT_102da3ec + (float)(double)CONCAT44(uStack_4c,local_50);
  }
  lVar1 = __ftol();
  DAT_103187b4 = (int)lVar1;
  if (DAT_103187b4 < 0x3c) {
    DAT_10318828 = 0xc3;
    DAT_10318794 = 0x2d;
    DAT_103188c4 = 0x2d;
  }
  else {
    lVar1 = __ftol();
    DAT_10318828 = (undefined4)lVar1;
    lVar1 = __ftol();
    DAT_10318794 = (undefined4)lVar1;
    lVar1 = __ftol();
    DAT_103188c4 = (undefined4)lVar1;
  }
  DAT_10318730 = DAT_102e1234 + -0x48;
  DAT_1031881c = 8;
  _DAT_10318858 = 0x14;
  DAT_10318730 = thunk_FUN_10088620(&DAT_102da3c8,DAT_10318730,0xc,3,DAT_103187b4 / 0x3c,
                                    DAT_10318828,DAT_10318794,DAT_103188c4);
  DAT_10318730 = thunk_FUN_10047f00(DAT_10318730,DAT_1031881c + 4,DAT_102e1234,":",DAT_10318828,
                                    DAT_10318794,DAT_103188c4);
  DAT_10318730 = thunk_FUN_10088620(&DAT_102da3c8,DAT_10318730,DAT_1031881c + 4,0x23,
                                    DAT_103187b4 % 0x3c,DAT_10318828,DAT_10318794,DAT_103188c4);
  return;
}

/* 10085c00  FUN_10085c00  (311 bytes)
 * undefined FUN_10085c00(int param_1)
 */
void __fastcall FUN_10085c00(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((*(uint *)(param_1 + 0x14) & 1) == 0) {
    if ((*(uint *)(param_1 + 0x14) & 2) == 0) {
      if ((*(uint *)(param_1 + 0x14) & 8) == 0) {
        if ((*(uint *)(param_1 + 0x14) & 0x10) != 0) {
          FUN_100bba20((uint *)&DAT_10318860,(uint *)0x1027165c);
        }
      }
      else {
        FUN_100bba20((uint *)&DAT_10318860,(uint *)"Slow-Pause");
      }
    }
    else {
      FUN_100bba20((uint *)&DAT_10318860,(uint *)"Infinite-Ammo");
    }
  }
  else {
    FUN_100bba20((uint *)&DAT_10318860,(uint *)"Slow-Motion");
  }
  DAT_10318728 = thunk_FUN_10047f00(8,8,DAT_102e1234,&DAT_10318860,0x2d,0xc3,0x2d);
  if (*(float *)(param_1 + 0x1c) <= DAT_102da3ec) {
    if (*(int *)(param_1 + 0x18) != 0) {
      thunk_FUN_10088620(&DAT_102da3c8,DAT_10318728 + 4,8,3,*(int *)(param_1 + 0x18),0x2d,0xc3,0x2d)
      ;
    }
  }
  else {
    uVar4 = 0x2d;
    uVar3 = 0xc3;
    uVar2 = 0x2d;
    lVar1 = __ftol();
    thunk_FUN_10088620(&DAT_102da3c8,DAT_10318728 + 4,8,3,(int)lVar1,uVar2,uVar3,uVar4);
  }
  return;
}

/* 10085d90  FUN_10085d90  (2406 bytes)
 * undefined FUN_10085d90(int param_1)
 */
void __fastcall FUN_10085d90(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int local_54;
  int local_50;
  int local_4c;
  
  if (*(float *)(DAT_102e820c + 0xc) == 0.0) {
    lVar4 = __ftol();
    DAT_1031872c = (int)lVar4;
    lVar4 = __ftol();
    DAT_10318818 = (int)lVar4;
    lVar4 = __ftol();
    DAT_10318738 = (int)lVar4;
    DAT_1031873c = 8;
    DAT_10318814 = 0x28;
    DAT_103188c0 = DAT_102e1238 + -0x30;
    (*DAT_102e1484)(8,DAT_103188c0,0x7f,0x27,DAT_1031872c,DAT_10318818,DAT_10318738,0xf);
    (*DAT_102e1468)(*(undefined4 *)(param_1 + 0x38 + (uint)*(byte *)(param_1 + 0x22) * 4),
                    DAT_1031872c / 2,DAT_10318818 / 2,DAT_10318738 / 2);
    (*DAT_102e1474)(0,DAT_1031873c,DAT_103188c0 + -4,0);
    DAT_1031873c = 0x48;
    if (*(byte *)(param_1 + 0x20) < 0x32) {
      local_4c = 0x2d;
    }
    else {
      local_4c = DAT_10318738 / 2;
    }
    if (*(byte *)(param_1 + 0x20) < 0x32) {
      local_50 = 0x2d;
    }
    else {
      local_50 = DAT_10318818 / 2;
    }
    if (*(byte *)(param_1 + 0x20) < 0x32) {
      local_54 = 0xc3;
    }
    else {
      local_54 = DAT_1031872c / 2;
    }
    thunk_FUN_10088620(&DAT_102da3c8,0x48,DAT_103188c0 + 4,5,(uint)*(byte *)(param_1 + 0x20),
                       local_54,local_50,local_4c);
    if (*(byte *)(param_1 + 0x20) < 0x32) {
      local_4c = 0x2d;
    }
    else {
      local_4c = DAT_10318738 / 2;
    }
    if (*(byte *)(param_1 + 0x20) < 0x32) {
      local_50 = 0x2d;
    }
    else {
      local_50 = DAT_10318818 / 2;
    }
    if (*(byte *)(param_1 + 0x20) < 0x32) {
      local_54 = 0xc3;
    }
    else {
      local_54 = DAT_1031872c / 2;
    }
    (*DAT_102e1468)(*(undefined4 *)(param_1 + 0x58),local_54,local_50,local_4c);
    (*DAT_102e1474)(0,0x68,DAT_103188c0,0);
    if (*(char *)(param_1 + 0x21) != '\0') {
      if (*(byte *)(param_1 + 0x21) < 0x32) {
        local_4c = 0x2d;
      }
      else {
        local_4c = DAT_10318738 / 2;
      }
      if (*(byte *)(param_1 + 0x21) < 0x32) {
        local_50 = 0x2d;
      }
      else {
        local_50 = DAT_10318818 / 2;
      }
      if (*(byte *)(param_1 + 0x21) < 0x32) {
        local_54 = 0xc3;
      }
      else {
        local_54 = DAT_1031872c / 2;
      }
      thunk_FUN_10088620(&DAT_102da3c8,DAT_1031873c,DAT_103188c0 + 0x18,5,
                         (uint)*(byte *)(param_1 + 0x21),local_54,local_50,local_4c);
      if (*(byte *)(param_1 + 0x21) < 0x32) {
        local_4c = 0x2d;
      }
      else {
        local_4c = DAT_10318738 / 2;
      }
      if (*(byte *)(param_1 + 0x21) < 0x32) {
        local_50 = 0x2d;
      }
      else {
        local_50 = DAT_10318818 / 2;
      }
      if (*(byte *)(param_1 + 0x21) < 0x32) {
        local_54 = 0xc3;
      }
      else {
        local_54 = DAT_1031872c / 2;
      }
      (*DAT_102e1468)(*(undefined4 *)(param_1 + 0x5c),local_54,local_50,local_4c);
      (*DAT_102e1474)(0,0x68,DAT_103188c0 + 0x14,0);
    }
    DAT_1031873c = 8;
    DAT_10318814 = 0x14;
    DAT_103188c0 = DAT_103188c0 + -0x14;
    if (DAT_102da424 != 0) {
      piVar1 = (int *)(*DAT_102e1524)();
      FUN_100bba20((uint *)&DAT_10318834,(uint *)(&DAT_1031fa0a + *piVar1 * 0x1a));
      (*DAT_102e1484)(DAT_1031873c,DAT_103188c0,0x7f,DAT_10318814 + -1,DAT_1031872c,DAT_10318818,
                      DAT_10318738,0x23);
      thunk_FUN_10047e90(&DAT_1031872c,&DAT_10318818,&DAT_10318738);
      thunk_FUN_10047f00(DAT_1031873c + 2,DAT_103188c0,DAT_102e1234,&DAT_10318834,DAT_1031872c,
                         DAT_10318818,DAT_10318738);
    }
    DAT_1031873c = 0x88;
    DAT_10318814 = 0x14;
    DAT_103188c0 = DAT_102e1238 + -0x1c;
    (*DAT_102e1484)(0x88,DAT_103188c0,0x7f,0x13,DAT_1031872c,DAT_10318818,DAT_10318738,0xf);
    if (*(char *)(param_1 + 0x28) == '\0') {
      local_4c = 0x2d;
    }
    else {
      local_4c = DAT_10318738 / 2;
    }
    if (*(char *)(param_1 + 0x28) == '\0') {
      local_50 = 0x2d;
    }
    else {
      local_50 = DAT_10318818 / 2;
    }
    if (*(char *)(param_1 + 0x28) == '\0') {
      local_54 = 0xc3;
    }
    else {
      local_54 = DAT_1031872c / 2;
    }
    DAT_1031880c = thunk_FUN_10088620(&DAT_102da3c8,DAT_1031873c + 8,DAT_103188c0 + 2,3,
                                      (uint)*(byte *)(param_1 + 0x28),local_54,local_50,local_4c);
    if (*(char *)(param_1 + 0x28) == '\0') {
      local_4c = 0x2d;
    }
    else {
      local_4c = DAT_10318738 / 2;
    }
    if (*(char *)(param_1 + 0x28) == '\0') {
      local_50 = 0x2d;
    }
    else {
      local_50 = DAT_10318818 / 2;
    }
    if (*(char *)(param_1 + 0x28) == '\0') {
      local_54 = 0xc3;
    }
    else {
      local_54 = DAT_1031872c / 2;
    }
    thunk_FUN_10047f00(DAT_1031880c + 8,DAT_103188c0,DAT_102e1234,"free slots",local_54,local_50,
                       local_4c);
    if ((1 < DAT_102da424) || (DAT_1031beec != 0)) {
      DAT_103188c0 = DAT_103188c0 - DAT_10318814;
      (*DAT_102e1484)(DAT_1031873c,DAT_103188c0,0x7f,DAT_10318814 + -1,DAT_1031872c,DAT_10318818,
                      DAT_10318738,0xf);
      if (*(int *)(param_1 + 0x24) < 1000) {
        local_4c = 0x2d;
      }
      else {
        local_4c = DAT_10318738 / 2;
      }
      if (*(int *)(param_1 + 0x24) < 1000) {
        local_50 = 0x2d;
      }
      else {
        local_50 = DAT_10318818 / 2;
      }
      if (*(int *)(param_1 + 0x24) < 1000) {
        local_54 = 0xc3;
      }
      else {
        local_54 = DAT_1031872c / 2;
      }
      DAT_1031880c = thunk_FUN_10088620(&DAT_102da3c8,DAT_1031873c,DAT_103188c0 + 2,0x11,
                                        *(int *)(param_1 + 0x24),local_54,local_50,local_4c);
      if (*(int *)(param_1 + 0x24) < 1000) {
        local_4c = 0x2d;
      }
      else {
        local_4c = DAT_10318738 / 2;
      }
      if (*(int *)(param_1 + 0x24) < 1000) {
        local_50 = 0x2d;
      }
      else {
        local_50 = DAT_10318818 / 2;
      }
      if (*(int *)(param_1 + 0x24) < 1000) {
        local_54 = 0xc3;
      }
      else {
        local_54 = DAT_1031872c / 2;
      }
      thunk_FUN_10047f00(DAT_1031880c + 8,DAT_103188c0,DAT_102e1234,"Credits",local_54,local_50,
                         local_4c);
    }
    if (*(char *)(param_1 + 0x29) != '\0') {
      DAT_1031873c = DAT_102e1234 / 2 + -0x30;
      DAT_103188c0 = DAT_102e1238 + -0x38;
      lVar4 = __ftol();
      uVar2 = (undefined4)lVar4;
      lVar4 = __ftol();
      uVar3 = (undefined4)lVar4;
      lVar4 = __ftol();
      (*DAT_102e1468)(*(undefined4 *)(param_1 + 100),(int)lVar4,uVar3,uVar2);
      (*DAT_102e1474)(0,DAT_1031873c,DAT_103188c0,0);
    }
    if (*(char *)(param_1 + 0x2a) != '\0') {
      DAT_1031873c = DAT_102e1234 / 2;
      DAT_103188c0 = DAT_102e1238 + -0x38;
      lVar4 = __ftol();
      uVar2 = (undefined4)lVar4;
      lVar4 = __ftol();
      uVar3 = (undefined4)lVar4;
      lVar4 = __ftol();
      (*DAT_102e1468)(*(undefined4 *)(param_1 + 0x68),(int)lVar4,uVar3,uVar2);
      (*DAT_102e1474)(0,DAT_1031873c,DAT_103188c0,0);
    }
    if ((DAT_1031bee4 != 0.0) || (*(char *)(param_1 + 0xfc0) != '\0')) {
      DAT_1031873c = DAT_102e1234 / 2 + -0x10;
      DAT_103188c0 = 0x10;
      lVar4 = __ftol();
      uVar2 = (undefined4)lVar4;
      lVar4 = __ftol();
      uVar3 = (undefined4)lVar4;
      lVar4 = __ftol();
      (*DAT_102e1468)(*(undefined4 *)(param_1 + 0x60),(int)lVar4,uVar3,uVar2);
      (*DAT_102e1474)(0,DAT_1031873c,DAT_103188c0,0);
    }
  }
  return;
}

/* 10086950  FUN_10086950  (343 bytes)
 * undefined FUN_10086950(int param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10086950(int param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  
  piVar1 = (int *)(*DAT_102e1524)();
  DAT_10318870 = *piVar1;
  DAT_103187a0 = (*DAT_102e14e8)();
  for (DAT_103187bc = 0; DAT_103187bc <= DAT_103187a0; DAT_103187bc = DAT_103187bc + 1) {
    if ((((*(char *)(param_1 + DAT_103187bc + 0xfc1) != '\0') &&
         (*(undefined1 *)(param_1 + DAT_103187bc + 0xfc1) = 0, DAT_103187bc != DAT_10318870)) &&
        (uVar2 = FUN_100db540(&DAT_1031fa0a + DAT_103187bc * 0x1a,
                              &DAT_1031fa0a + DAT_10318870 * 0x1a), uVar2 == 0)) &&
       (((thunk_FUN_10087250(DAT_103187bc,&DAT_103188d0,&DAT_10318854), DAT_103188d0 != -1 &&
         (DAT_10318854 != -1)) &&
        (_DAT_10318824 = 0x44800000, *(int *)(&DAT_1031f3e0 + DAT_103187bc * 0x14) != 0)))) {
      _DAT_10318740 = 0x3f000000;
      lVar3 = __ftol();
      (*DAT_102e1484)(DAT_103188d0 + -2,DAT_10318854 + -2,4,4,0x2d,0xc3,0x2d,(int)lVar3);
    }
  }
  return;
}

/* 10086b00  FUN_10086b00  (737 bytes)
 * undefined FUN_10086b00(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10086b00(void)

{
  int *piVar1;
  float *pfVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  undefined1 local_14 [16];
  
  if ((DAT_10318744 & 1) == 0) {
    DAT_10318744 = DAT_10318744 | 1;
    thunk_FUN_1000c160(0x10318750);
    FUN_100bc490(0x10086ea0);
  }
  piVar1 = (int *)(*DAT_102e1524)();
  DAT_103187b8 = *piVar1;
  (**(code **)(DAT_102e15a8 + 0x2c))();
  (**(code **)(DAT_102e15a8 + 0x28))(0,1);
  (**(code **)(DAT_102e15a8 + 0x34))(DAT_103187b8 + -1);
  (**(code **)(DAT_102e15a8 + 0x38))(2);
  pfVar2 = thunk_FUN_1000cb20(&DAT_1031ab5c,local_20,8192.0);
  puVar7 = local_2c;
  pvVar3 = thunk_FUN_10096e30(local_14);
  pvVar3 = thunk_FUN_1000d970(pvVar3,puVar7,pfVar2);
  uVar4 = thunk_FUN_10008500(pvVar3);
  pvVar3 = thunk_FUN_10096e30(local_38);
  uVar5 = thunk_FUN_10008500(pvVar3);
  (**(code **)(DAT_102e15a8 + 0x3c))(uVar5,uVar4);
  (**(code **)(DAT_102e15a8 + 0x30))();
  _DAT_102db788 = DAT_10318764;
  _DAT_102db78c = DAT_10318768;
  _DAT_102db790 = DAT_1031876c;
  uVar4 = (**(code **)(DAT_102e15a8 + 0x20))(&DAT_10318750);
  DAT_10318798 = (int *)(*DAT_102e152c)(uVar4);
  DAT_103188c8 = 0;
  if ((DAT_10318798 != (int *)0x0) && (DAT_10318798[1] != 0)) {
    if (DAT_102da424 == 0) {
      if (*(int *)(&DAT_1031f3e0 + *DAT_10318798 * 0x14) != 0) {
        FUN_100bba20((uint *)&DAT_103187c8,*(uint **)(&DAT_1031f3e0 + *DAT_10318798 * 0x14));
        thunk_FUN_10047f00(DAT_102e1234 / 2,DAT_102e1238 / 2 + -0x28,DAT_102e1234,&DAT_103187c8,0xc3
                           ,0x2d,0x2d);
        DAT_103188c8 = 2;
      }
    }
    else {
      uVar6 = FUN_100db540(&DAT_1031fa0a + *DAT_10318798 * 0x1a,&DAT_1031fa0a + DAT_103187b8 * 0x1a)
      ;
      if (uVar6 == 0) {
        if (*(int *)(&DAT_1031f3e0 + *DAT_10318798 * 0x14) != 0) {
          FUN_100bba20((uint *)&DAT_103187c8,*(uint **)(&DAT_1031f3e0 + *DAT_10318798 * 0x14));
          thunk_FUN_10047f00(DAT_102e1234 / 2,DAT_102e1238 / 2 + -0x28,DAT_102e1234,&DAT_103187c8,
                             0x2d,0xc3,0x2d);
          DAT_103188c8 = 1;
        }
      }
      else if (*(int *)(&DAT_1031f3e0 + *DAT_10318798 * 0x14) != 0) {
        FUN_100bba20((uint *)&DAT_103187c8,*(uint **)(&DAT_1031f3e0 + *DAT_10318798 * 0x14));
        thunk_FUN_10047f00(DAT_102e1234 / 2,DAT_102e1238 / 2 + -0x28,DAT_102e1234,&DAT_103187c8,0xc3
                           ,0x2d,0x2d);
        DAT_103188c8 = 2;
      }
    }
  }
  return;
}

/* 10086ea0  FUN_10086ea0  (16 bytes)
 * undefined FUN_10086ea0(void)
 */
void FUN_10086ea0(void)

{
  return;
}

/* 10086ec0  FUN_10086ec0  (721 bytes)
 * undefined FUN_10086ec0(int param_1)
 */
void __fastcall FUN_10086ec0(int param_1)

{
  bool bVar1;
  longlong lVar2;
  
  for (DAT_10318810 = 0; DAT_10318810 < 0x10; DAT_10318810 = DAT_10318810 + 1) {
    if (DAT_102da3ec < *(float *)(param_1 + 0x6c + DAT_10318810 * 0x5c)) {
      if (10.0 < *(float *)(param_1 + 0x6c + DAT_10318810 * 0x5c) - DAT_102da3ec) {
        *(float *)(param_1 + 0x6c + DAT_10318810 * 0x5c) = DAT_102da3ec + 10.0;
      }
      if (((*(int *)(param_1 + 0x70 + DAT_10318810 * 0x5c) == 0) &&
          (*(int *)(param_1 + 0x74 + DAT_10318810 * 0x5c) == 0)) &&
         (*(int *)(param_1 + 0x78 + DAT_10318810 * 0x5c) == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      DAT_1031879c = !bVar1;
      lVar2 = __ftol();
      DAT_103188cc = (undefined4)lVar2;
      lVar2 = __ftol();
      DAT_103187c0 = (undefined4)lVar2;
      lVar2 = __ftol();
      DAT_10318820 = (undefined4)lVar2;
      thunk_FUN_10047f00(*(int *)(param_1 + 0xbc + DAT_10318810 * 0x5c),
                         *(undefined4 *)(param_1 + 0xc0 + DAT_10318810 * 0x5c),DAT_102e1234,
                         (char *)(param_1 + 0x7c + DAT_10318810 * 0x5c),DAT_103188cc,DAT_103187c0,
                         DAT_10318820);
    }
  }
  return;
}

/* 10087250  FUN_10087250  (273 bytes)
 * undefined FUN_10087250(undefined4 param_1, undefined4 * param_2, undefined4 * param_3)
 */
void __cdecl FUN_10087250(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  if ((DAT_1031885c & 1) == 0) {
    DAT_1031885c = DAT_1031885c | 1;
    thunk_FUN_10007fe0(&DAT_10318874);
    FUN_100bc490(0x100873b0);
  }
  DAT_10318808 = (*DAT_102e152c)(param_1);
  *param_2 = 0xffffffff;
  *param_3 = 0xffffffff;
  if ((DAT_10318808 != 0) && (*(int *)(DAT_10318808 + 4) != 0)) {
    puVar2 = (undefined4 *)thunk_FUN_10008500(DAT_10318808 + 0xb48);
    puVar3 = (undefined4 *)thunk_FUN_10008500(&DAT_10318874);
    *puVar3 = *puVar2;
    iVar4 = thunk_FUN_10008500(DAT_10318808 + 0xb48);
    iVar5 = thunk_FUN_10008500(&DAT_10318874);
    *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar4 + 4);
    iVar4 = thunk_FUN_10008500(DAT_10318808 + 0xb48);
    fVar1 = *(float *)(iVar4 + 8);
    iVar4 = thunk_FUN_10008500(&DAT_10318874);
    *(float *)(iVar4 + 8) = fVar1 + 40.0;
    uVar6 = thunk_FUN_10008500(&DAT_10318874);
    thunk_FUN_10097650(uVar6,param_2,param_3);
  }
  return;
}

/* 100873b0  FUN_100873b0  (16 bytes)
 * undefined FUN_100873b0(void)
 */
void FUN_100873b0(void)

{
  return;
}

/* 100873d0  FUN_100873d0  (790 bytes)
 * undefined FUN_100873d0(uint * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, int param_5, uint param_6)
 */
void __thiscall
FUN_100873d0(void *this,uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5,uint param_6)

{
  size_t sVar1;
  int iVar2;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  while ((local_c < 0xf && (DAT_102da3ec <= *(float *)((int)this + local_c * 0x5c + 0x6c)))) {
    local_c = local_c + 1;
  }
  if ((0xf < local_c) || (DAT_102da3ec < *(float *)((int)this + local_c * 0x5c + 0x6c))) {
    return;
  }
  FUN_100bba20((uint *)((int)this + local_c * 0x5c + 0x7c),param_1);
  *(undefined4 *)((int)this + local_c * 0x5c + 0x78) = param_4;
  *(undefined4 *)((int)this + local_c * 0x5c + 0x70) = param_2;
  *(undefined4 *)((int)this + local_c * 0x5c + 0x74) = param_3;
  if ((param_6 & 1) == 0) {
    if ((param_6 & 8) == 0) {
      *(int *)((int)this + local_c * 0x5c + 0xc0) = DAT_102e1238 / 2;
    }
    else {
      *(int *)((int)this + local_c * 0x5c + 0xc0) = DAT_102e1238 + -0x20;
    }
  }
  else {
    *(undefined4 *)((int)this + local_c * 0x5c + 0xc0) = 0x20;
  }
  if ((param_6 & 2) == 0) {
    if ((param_6 & 4) == 0) {
      iVar2 = DAT_102e1234 / 2;
      sVar1 = _strlen((char *)((int)this + local_c * 0x5c + 0x7c));
      *(size_t *)((int)this + local_c * 0x5c + 0xbc) = iVar2 + (sVar1 >> 1) * -6;
    }
    else {
      sVar1 = _strlen((char *)((int)this + local_c * 0x5c + 0x7c));
      *(size_t *)((int)this + local_c * 0x5c + 0xbc) = DAT_102e1234 + sVar1 * -6 + -0x20;
    }
  }
  else {
    *(undefined4 *)((int)this + local_c * 0x5c + 0xbc) = 0x20;
  }
  *(uint *)((int)this + local_c * 0x5c + 0xc4) = param_6;
  local_10 = 0;
  local_14 = 0;
  do {
    if ((0xf < local_10) || (0xf < local_14)) goto LAB_100876bc;
    if ((DAT_102da3ec < *(float *)((int)this + local_10 * 0x5c + 0x6c)) &&
       ((*(int *)((int)this + local_10 * 0x5c + 0xc0) == *(int *)((int)this + local_c * 0x5c + 0xc0)
        && (*(int *)((int)this + local_10 * 0x5c + 0xc4) ==
            *(int *)((int)this + local_c * 0x5c + 0xc4))))) {
      if ((param_6 & 0x10) != 0) {
        *(undefined4 *)((int)this + local_10 * 0x5c + 0x6c) = 0;
LAB_100876bc:
        *(float *)((int)this + local_c * 0x5c + 0x6c) = (float)param_5 / 10.0 + DAT_102da3ec;
        return;
      }
      if ((*(uint *)((int)this + local_c * 0x5c + 0xc4) & 1) == 0) {
        *(int *)((int)this + local_c * 0x5c + 0xc0) =
             *(int *)((int)this + local_c * 0x5c + 0xc0) + -0x10;
      }
      else {
        *(int *)((int)this + local_c * 0x5c + 0xc0) =
             *(int *)((int)this + local_c * 0x5c + 0xc0) + 0x10;
      }
      local_10 = 0;
      local_14 = local_14 + 1;
    }
    local_10 = local_10 + 1;
  } while( true );
}

/* 100877b0  FUN_100877b0  (130 bytes)
 * undefined4 FUN_100877b0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_100877b0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined1 local_c;
  
  thunk_FUN_10056240(param_3,param_2);
  DAT_102da480 = thunk_FUN_10056300();
  local_c = (undefined1)DAT_102da480;
  *(undefined1 *)((int)this + 0x20) = local_c;
  cVar1 = thunk_FUN_10088600();
  if ((cVar1 == '\0') && (*(char *)((int)this + 0x20) == '\0')) {
    iVar2 = thunk_FUN_100b5a50();
    if (iVar2 == 0) {
      thunk_FUN_1008f090();
    }
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return 1;
}

/* 10087860  FUN_10087860  (100 bytes)
 * undefined4 FUN_10087860(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_10087860(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 local_10;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar1 = thunk_FUN_10056300();
  uVar2 = thunk_FUN_10056300();
  if ((0 < (int)uVar1) && ((int)uVar1 < 0x41)) {
    local_10 = (undefined1)uVar2;
    (&DAT_1031fa00)[uVar1 * 0x1a] = local_10;
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return 1;
}

/* 100878e0  FUN_100878e0  (137 bytes)
 * undefined4 FUN_100878e0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_100878e0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar1 = thunk_FUN_10056300();
  iVar2 = thunk_FUN_10056370();
  switch(uVar1) {
  case 0:
    DAT_1031bee8 = iVar2;
    break;
  case 1:
    DAT_1031beec = iVar2;
    break;
  case 2:
    thunk_FUN_1001d970(iVar2);
    break;
  case 3:
    DAT_1031bef0 = iVar2;
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return 1;
}

/* 100879a0  FUN_100879a0  (79 bytes)
 * undefined4 FUN_100879a0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_100879a0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar1 = thunk_FUN_10056300();
  DAT_1031bef4 = uVar1 != 0;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return 1;
}

/* 10087a10  FUN_10087a10  (68 bytes)
 * undefined4 FUN_10087a10(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_10087a10(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar1 = thunk_FUN_10056300();
  *(char *)((int)this + 0x21) = (char)uVar1;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return 1;
}

/* 10087a70  FUN_10087a70  (68 bytes)
 * undefined4 FUN_10087a70(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_10087a70(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar1 = thunk_FUN_10056300();
  *(char *)((int)this + 0x22) = (char)uVar1;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return 1;
}

/* 10087ad0  FUN_10087ad0  (68 bytes)
 * undefined4 FUN_10087ad0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_10087ad0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  thunk_FUN_10056240(param_3,param_2);
  iVar1 = thunk_FUN_10056370();
  *(int *)((int)this + 0x24) = iVar1;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return 1;
}

/* 10087b30  FUN_10087b30  (68 bytes)
 * undefined4 FUN_10087b30(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_10087b30(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar1 = thunk_FUN_10056300();
  *(char *)((int)this + 0x28) = (char)uVar1;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return 1;
}

/* 10087b90  FUN_10087b90  (160 bytes)
 * undefined4 FUN_10087b90(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_10087b90(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar1 = thunk_FUN_10056370();
  uVar2 = thunk_FUN_10056300();
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
    }
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return 1;
}

/* 10087c60  FUN_10087c60  (90 bytes)
 * undefined4 FUN_10087c60(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_10087c60(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar1 = thunk_FUN_10056300();
  *(float *)((int)this + 0x1c) = (float)(int)uVar1 + DAT_102da3ec;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return 1;
}

/* 10087cd0  FUN_10087cd0  (95 bytes)
 * undefined4 FUN_10087cd0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_10087cd0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar1 = thunk_FUN_10056300();
  *(float *)((int)this + 0x2c) = (float)(int)uVar1;
  uVar1 = thunk_FUN_10056300();
  *(char *)((int)this + 0x34) = (char)uVar1;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return 1;
}

/* 10087d50  FUN_10087d50  (304 bytes)
 * undefined4 FUN_10087d50(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 FUN_10087d50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  float *pfVar2;
  int iVar3;
  float10 fVar4;
  uint local_58 [16];
  uint local_18;
  float local_14;
  float local_10;
  float local_c;
  int local_8;
  
  thunk_FUN_10056240(param_3,param_2);
  fVar4 = (float10)thunk_FUN_100565f0();
  local_14 = (float)fVar4;
  fVar4 = (float10)thunk_FUN_100565f0();
  local_10 = (float)fVar4;
  fVar4 = (float10)thunk_FUN_100565f0();
  local_c = (float)fVar4;
  local_18 = thunk_FUN_10056300();
  puVar1 = (uint *)thunk_FUN_10056560();
  FUN_100bba20(local_58,puVar1);
  if ((-1 < (int)local_18) || ((int)local_18 < 0x20)) {
    if (local_18 == 0) {
      _memset((void *)(local_8 + 0x62c),0,0x980);
      *(undefined4 *)(local_8 + 0xfac) = 0;
    }
    pfVar2 = (float *)thunk_FUN_10008500(local_8 + 0x62c + local_18 * 0x4c);
    *pfVar2 = local_14;
    iVar3 = thunk_FUN_10008500(local_8 + 0x62c + local_18 * 0x4c);
    *(float *)(iVar3 + 4) = local_10;
    iVar3 = thunk_FUN_10008500(local_8 + 0x62c + local_18 * 0x4c);
    *(float *)(iVar3 + 8) = local_c;
    FUN_100bba20((uint *)(local_8 + 0x638 + local_18 * 0x4c),local_58);
    if (*(int *)(local_8 + 0xfac) < (int)local_18) {
      *(uint *)(local_8 + 0xfac) = local_18;
    }
  }
  *(uint *)(local_8 + 0x10) = *(uint *)(local_8 + 0x10) | 1;
  return 1;
}

/* 10087ed0  FUN_10087ed0  (106 bytes)
 * undefined4 FUN_10087ed0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_10087ed0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar1 = thunk_FUN_10056300();
  if ((-1 < (int)uVar1) || ((int)uVar1 < 0x20)) {
    _memset((void *)((int)this + uVar1 * 0x4c + 0x62c),0,0x4c);
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return 1;
}

/* 10087f60  FUN_10087f60  (149 bytes)
 * undefined4 FUN_10087f60(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 FUN_10087f60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  float10 fVar2;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  int local_8;
  
  thunk_FUN_10056240(param_3,param_2);
  thunk_FUN_10007fe0(&local_14);
  thunk_FUN_10007fe0(&local_20);
  fVar2 = (float10)thunk_FUN_100565f0();
  local_14 = (float)fVar2;
  fVar2 = (float10)thunk_FUN_100565f0();
  local_10 = (float)fVar2;
  fVar2 = (float10)thunk_FUN_100565f0();
  local_c = (float)fVar2;
  fVar2 = (float10)thunk_FUN_100565f0();
  local_20 = (float)fVar2;
  fVar2 = (float10)thunk_FUN_100565f0();
  local_1c = (float)fVar2;
  fVar2 = (float10)thunk_FUN_100565f0();
  local_18 = (float)fVar2;
  uVar1 = thunk_FUN_10056300();
  thunk_FUN_10082cd0(&local_14,&local_20,uVar1);
  *(uint *)(local_8 + 0x10) = *(uint *)(local_8 + 0x10) | 1;
  return 1;
}

/* 10088020  FUN_10088020  (349 bytes)
 * undefined4 FUN_10088020(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 FUN_10088020(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  float10 fVar2;
  longlong lVar3;
  undefined1 auStack_cc [4];
  undefined4 uStack_c8;
  undefined1 auStack_c0 [4];
  undefined4 uStack_bc;
  char *pcStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  int local_8;
  
  thunk_FUN_10056240(param_3,param_2);
  thunk_FUN_10007fe0(&local_14);
  thunk_FUN_10007fe0(&local_20);
  thunk_FUN_10007fe0(&local_2c);
  fVar2 = (float10)thunk_FUN_100565f0();
  local_14 = (float)fVar2;
  fVar2 = (float10)thunk_FUN_100565f0();
  local_10 = (float)fVar2;
  fVar2 = (float10)thunk_FUN_100565f0();
  local_c = (float)fVar2;
  fVar2 = (float10)thunk_FUN_100565f0();
  local_20 = (float)fVar2;
  fVar2 = (float10)thunk_FUN_100565f0();
  local_1c = (float)fVar2;
  fVar2 = (float10)thunk_FUN_100565f0();
  local_18 = (float)fVar2;
  uVar1 = thunk_FUN_10056300();
  if (uVar1 == 0) {
    uStack_a0 = 0x100880bd;
    thunk_FUN_10081840(&local_14,&local_20);
  }
  else if (uVar1 == 1) {
    lVar3 = __ftol();
    thunk_FUN_100821e0(&local_14,(int)lVar3);
  }
  else if (uVar1 == 2) {
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    uStack_b0 = 0x1008810b;
    thunk_FUN_10015ce0(&uStack_a8,&local_2c);
    uStack_bc = 0x10088119;
    thunk_FUN_10015ce0(&pcStack_b4,&local_14);
    thunk_FUN_1007f3f0();
    uStack_a0 = 0x3f000000;
    uStack_a4 = 0x10;
    uStack_a8 = 0x40000000;
    uStack_b0 = 5;
    pcStack_b4 = "sprites/scintille2.spr";
    uStack_c8 = 0x1008814a;
    thunk_FUN_10015ce0(auStack_c0,&local_2c);
    thunk_FUN_10015ce0(auStack_cc,&local_14);
    thunk_FUN_1007ef20();
  }
  *(uint *)(local_8 + 0x10) = *(uint *)(local_8 + 0x10) | 1;
  return 1;
}

/* 100881e0  FUN_100881e0  (204 bytes)
 * undefined4 FUN_100881e0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_100881e0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 uVar2;
  float10 fVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  thunk_FUN_10056240(param_3,param_2);
  fVar1 = DAT_1031bee4;
  fVar3 = (float10)thunk_FUN_100565f0();
  DAT_1031bee4 = (float)fVar3;
  DAT_1031bee4 = DAT_1031bee4 / 100.0;
  if ((fVar1 == 0.0) && (DAT_1031bee4 != 0.0)) {
    uVar9 = 100;
    uVar8 = 0;
    uVar7 = 0x3f4ccccd;
    uVar6 = 0x3f800000;
    pcVar5 = "goslow.wav";
    uVar4 = 0;
    uVar2 = thunk_FUN_10008500(&DAT_102da400);
    (**(code **)(DAT_102e15a8 + 4))(0xffffffff,uVar2,uVar4,pcVar5,uVar6,uVar7,uVar8,uVar9);
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return 1;
}

/* 100882e0  FUN_100882e0  (252 bytes)
 * undefined4 FUN_100882e0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 FUN_100882e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_5c [15];
  undefined1 local_1d;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  void *local_8;
  
  thunk_FUN_10056240(param_3,param_2);
  local_c = thunk_FUN_10056300();
  local_10 = thunk_FUN_10056300();
  local_14 = thunk_FUN_10056300();
  local_1c = thunk_FUN_10056300();
  local_a4 = thunk_FUN_10056300();
  local_a0 = local_a4;
  if ((int)local_a4 < 1) {
    local_a0 = -local_a4;
  }
  if ((int)local_a0 < 100) {
    if ((int)local_a4 < 1) {
      local_a4 = -local_a4;
    }
    local_a8 = local_a4;
  }
  else {
    local_a8 = 100;
  }
  local_18 = local_a8;
  puVar1 = (uint *)thunk_FUN_10056560();
  FUN_100bba20(local_5c,puVar1);
  local_1d = 0;
  thunk_FUN_100873d0(local_8,local_5c,local_c,local_10,local_14,local_18,local_1c);
  *(uint *)((int)local_8 + 0x10) = *(uint *)((int)local_8 + 0x10) | 1;
  return 1;
}

/* 10088420  FUN_10088420  (71 bytes)
 * undefined4 FUN_10088420(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_10088420(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar1 = thunk_FUN_10056300();
  *(char *)((int)this + 0xfc0) = (char)uVar1;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return 1;
}

/* 10088480  FUN_10088480  (104 bytes)
 * undefined4 FUN_10088480(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_10088480(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  
  thunk_FUN_10056240(param_3,param_2);
  fVar3 = (float10)thunk_FUN_100565f0();
  pfVar1 = (float *)thunk_FUN_10008500(&DAT_10320fd0);
  *pfVar1 = (float)fVar3;
  fVar3 = (float10)thunk_FUN_100565f0();
  iVar2 = thunk_FUN_10008500(&DAT_10320fd0);
  *(float *)(iVar2 + 4) = (float)fVar3;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return 1;
}

/* 10088510  FUN_10088510  (123 bytes)
 * undefined4 FUN_10088510(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_10088510(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar1 = thunk_FUN_10056300();
  if (uVar1 == 0) {
    thunk_FUN_1003d310("misc/successful.wav",0x3f800000);
  }
  else if (uVar1 == 1) {
    thunk_FUN_1003d310("misc/failed.wav",0x3f800000);
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return 1;
}

/* 100885b0  FUN_100885b0  (55 bytes)
 * uint FUN_100885b0(void)
 */
uint FUN_100885b0(void)

{
  uint uVar1;
  
  uVar1 = (*(code *)DAT_102e15ac[1])();
  if ((uVar1 == 0) && (uVar1 = (*(code *)*DAT_102e15ac)(), uVar1 == 0)) {
    return (uint)(DAT_102e026c == '\0');
  }
  return uVar1 & 0xffffff00;
}

/* 10088600  FUN_10088600  (21 bytes)
 * undefined1 FUN_10088600(void)
 */
undefined1 FUN_10088600(void)

{
  return DAT_102e0281;
}

/* 10088620  FUN_10088620  (1564 bytes)
 * int FUN_10088620(int param_1, undefined4 param_2, uint param_3, int param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 */
int __thiscall
FUN_10088620(void *this,int param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar1 = thunk_FUN_1003d220(this,*(int *)((int)this + 0x7088));
  piVar2 = (int *)thunk_FUN_1003d220(this,*(int *)((int)this + 0x7088));
  iVar1 = *(int *)(iVar1 + 4) - *piVar2;
  DAT_1031882c = thunk_FUN_1003d220(this,*(int *)((int)this + 0x7088));
  if (param_4 < 1) {
    if ((param_3 & 1) != 0) {
      uVar5 = param_5;
      uVar6 = param_6;
      uVar7 = param_7;
      uVar3 = thunk_FUN_1003d1d0(this,*(int *)((int)this + 0x7088));
      (*DAT_102e1468)(uVar3,uVar5,uVar6,uVar7);
      if ((param_3 & 0x10) != 0) {
        if ((param_3 & 0x20) != 0) {
          uVar5 = param_5;
          uVar6 = param_6;
          uVar7 = param_7;
          uVar3 = thunk_FUN_1003d1d0(this,*(int *)((int)this + 0x7088));
          (*DAT_102e1468)(uVar3,uVar5,uVar6,uVar7);
          (*DAT_102e1474)(0,param_1,param_2,DAT_1031882c);
        }
        param_1 = param_1 + iVar1;
      }
      if ((param_3 & 0x18) != 0) {
        if ((param_3 & 0x20) != 0) {
          uVar5 = param_5;
          uVar6 = param_6;
          uVar7 = param_7;
          uVar3 = thunk_FUN_1003d1d0(this,*(int *)((int)this + 0x7088));
          (*DAT_102e1468)(uVar3,uVar5,uVar6,uVar7);
          (*DAT_102e1474)(0,param_1,param_2,DAT_1031882c);
        }
        param_1 = param_1 + iVar1;
      }
      if ((param_3 & 0xc) != 0) {
        if ((param_3 & 0x20) != 0) {
          uVar5 = param_5;
          uVar6 = param_6;
          uVar7 = param_7;
          uVar3 = thunk_FUN_1003d1d0(this,*(int *)((int)this + 0x7088));
          (*DAT_102e1468)(uVar3,uVar5,uVar6,uVar7);
          (*DAT_102e1474)(0,param_1,param_2,DAT_1031882c);
        }
        param_1 = param_1 + iVar1;
      }
      if ((param_3 & 6) != 0) {
        if ((param_3 & 0x20) != 0) {
          uVar5 = thunk_FUN_1003d1d0(this,*(int *)((int)this + 0x7088));
          (*DAT_102e1468)(uVar5,param_5,param_6,param_7);
          (*DAT_102e1474)(0,param_1,param_2,DAT_1031882c);
        }
        param_1 = param_1 + iVar1;
      }
      iVar4 = thunk_FUN_1003d220(this,*(int *)((int)this + 0x7088));
      (*DAT_102e1474)(0,param_1,param_2,iVar4);
      param_1 = param_1 + iVar1;
    }
  }
  else {
    if (param_4 < 10000) {
      if ((param_3 & 0x10) != 0) {
        if ((param_3 & 0x20) != 0) {
          uVar5 = param_5;
          uVar6 = param_6;
          uVar7 = param_7;
          uVar3 = thunk_FUN_1003d1d0(this,*(int *)((int)this + 0x7088));
          (*DAT_102e1468)(uVar3,uVar5,uVar6,uVar7);
          (*DAT_102e1474)(0,param_1,param_2,DAT_1031882c);
        }
        param_1 = param_1 + iVar1;
      }
    }
    else {
      uVar5 = param_5;
      uVar6 = param_6;
      uVar7 = param_7;
      uVar3 = thunk_FUN_1003d1d0(this,*(int *)((int)this + 0x7088) + param_4 / 10000);
      (*DAT_102e1468)(uVar3,uVar5,uVar6,uVar7);
      iVar4 = thunk_FUN_1003d220(this,*(int *)((int)this + 0x7088) + param_4 / 10000);
      (*DAT_102e1474)(0,param_1,param_2,iVar4);
      param_1 = param_1 + iVar1;
    }
    if (param_4 < 1000) {
      if ((param_3 & 0x18) != 0) {
        if ((param_3 & 0x20) != 0) {
          uVar5 = param_5;
          uVar6 = param_6;
          uVar7 = param_7;
          uVar3 = thunk_FUN_1003d1d0(this,*(int *)((int)this + 0x7088));
          (*DAT_102e1468)(uVar3,uVar5,uVar6,uVar7);
          (*DAT_102e1474)(0,param_1,param_2,DAT_1031882c);
        }
        param_1 = param_1 + iVar1;
      }
    }
    else {
      iVar4 = (param_4 % 10000) / 1000;
      uVar5 = param_5;
      uVar6 = param_6;
      uVar7 = param_7;
      uVar3 = thunk_FUN_1003d1d0(this,*(int *)((int)this + 0x7088) + iVar4);
      (*DAT_102e1468)(uVar3,uVar5,uVar6,uVar7);
      iVar4 = thunk_FUN_1003d220(this,*(int *)((int)this + 0x7088) + iVar4);
      (*DAT_102e1474)(0,param_1,param_2,iVar4);
      param_1 = param_1 + iVar1;
    }
    if (param_4 < 100) {
      if ((param_3 & 0xc) != 0) {
        if ((param_3 & 0x20) != 0) {
          uVar5 = param_5;
          uVar6 = param_6;
          uVar7 = param_7;
          uVar3 = thunk_FUN_1003d1d0(this,*(int *)((int)this + 0x7088));
          (*DAT_102e1468)(uVar3,uVar5,uVar6,uVar7);
          (*DAT_102e1474)(0,param_1,param_2,DAT_1031882c);
        }
        param_1 = param_1 + iVar1;
      }
    }
    else {
      iVar4 = (param_4 % 1000) / 100;
      uVar5 = param_5;
      uVar6 = param_6;
      uVar7 = param_7;
      uVar3 = thunk_FUN_1003d1d0(this,*(int *)((int)this + 0x7088) + iVar4);
      (*DAT_102e1468)(uVar3,uVar5,uVar6,uVar7);
      iVar4 = thunk_FUN_1003d220(this,*(int *)((int)this + 0x7088) + iVar4);
      (*DAT_102e1474)(0,param_1,param_2,iVar4);
      param_1 = param_1 + iVar1;
    }
    if (param_4 < 10) {
      if ((param_3 & 6) != 0) {
        if ((param_3 & 0x20) != 0) {
          uVar5 = param_5;
          uVar6 = param_6;
          uVar7 = param_7;
          uVar3 = thunk_FUN_1003d1d0(this,*(int *)((int)this + 0x7088));
          (*DAT_102e1468)(uVar3,uVar5,uVar6,uVar7);
          (*DAT_102e1474)(0,param_1,param_2,DAT_1031882c);
        }
        param_1 = param_1 + iVar1;
      }
    }
    else {
      iVar4 = (param_4 % 100) / 10;
      uVar5 = param_5;
      uVar6 = param_6;
      uVar7 = param_7;
      uVar3 = thunk_FUN_1003d1d0(this,*(int *)((int)this + 0x7088) + iVar4);
      (*DAT_102e1468)(uVar3,uVar5,uVar6,uVar7);
      iVar4 = thunk_FUN_1003d220(this,*(int *)((int)this + 0x7088) + iVar4);
      (*DAT_102e1474)(0,param_1,param_2,iVar4);
      param_1 = param_1 + iVar1;
    }
    uVar5 = thunk_FUN_1003d1d0(this,*(int *)((int)this + 0x7088) + param_4 % 10);
    (*DAT_102e1468)(uVar5,param_5,param_6,param_7);
    iVar4 = thunk_FUN_1003d220(this,*(int *)((int)this + 0x7088) + param_4 % 10);
    (*DAT_102e1474)(0,param_1,param_2,iVar4);
    param_1 = param_1 + iVar1;
  }
  return param_1;
}

/* 10088dd0  FUN_10088dd0  (38 bytes)
 * undefined FUN_10088dd0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_10088dd0
 */
void __cdecl FUN_10088dd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_1008d1a0(&DAT_102db750,param_1,param_2,param_3);
  return;
}

/* 10088e00  FUN_10088e00  (38 bytes)
 * undefined FUN_10088e00(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_10088e00
 */
void __cdecl FUN_10088e00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_1008d0c0(&DAT_102db750,param_1,param_2,param_3);
  return;
}

/* 10088e30  FUN_10088e30  (38 bytes)
 * undefined FUN_10088e30(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_10088e30
 */
void __cdecl FUN_10088e30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_1008d4c0(&DAT_102db750,param_1,param_2,param_3);
  return;
}

/* 10088e60  FUN_10088e60  (38 bytes)
 * undefined FUN_10088e60(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_10088e60
 */
void __cdecl FUN_10088e60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_1008d620(&DAT_102db750,param_1,param_2,param_3);
  return;
}

/* 10088e90  FUN_10088e90  (38 bytes)
 * undefined FUN_10088e90(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_10088e90
 */
void __cdecl FUN_10088e90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_1008d6a0(&DAT_102db750,param_1,param_2,param_3);
  return;
}

/* 10088ec0  FUN_10088ec0  (38 bytes)
 * undefined FUN_10088ec0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_10088ec0
 */
void __cdecl FUN_10088ec0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_1008d730(&DAT_102db750,param_1,param_2,param_3);
  return;
}

/* 10088ef0  FUN_10088ef0  (38 bytes)
 * undefined FUN_10088ef0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_10088ef0
 */
void __cdecl FUN_10088ef0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_1008d7b0(param_1,param_2,param_3);
  return;
}

/* 10088f20  FUN_10088f20  (38 bytes)
 * undefined FUN_10088f20(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_10088f20
 */
void __cdecl FUN_10088f20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_1008d000(&DAT_102db750,param_1,param_2,param_3);
  return;
}

/* 10088f50  FUN_10088f50  (29 bytes)
 * undefined FUN_10088f50(void)
 * called by: thunk_FUN_10088f50
 */
void FUN_10088f50(void)

{
  thunk_FUN_1008d880(&DAT_102db750);
  return;
}

/* 10088f80  FUN_10088f80  (29 bytes)
 * undefined FUN_10088f80(void)
 * called by: thunk_FUN_10088f80
 */
void FUN_10088f80(void)

{
  thunk_FUN_1008d8a0(&DAT_102db750);
  return;
}

/* 10088fb0  FUN_10088fb0  (29 bytes)
 * undefined FUN_10088fb0(void)
 * called by: thunk_FUN_10088fb0
 */
void FUN_10088fb0(void)

{
  thunk_FUN_1008d8c0(&DAT_102db750);
  return;
}

/* 10088fe0  FUN_10088fe0  (29 bytes)
 * undefined FUN_10088fe0(void)
 * called by: thunk_FUN_10088fe0
 */
void FUN_10088fe0(void)

{
  thunk_FUN_1008d8e0(&DAT_102db750);
  return;
}

/* 10089010  FUN_10089010  (29 bytes)
 * undefined FUN_10089010(void)
 * called by: thunk_FUN_10089010
 */
void FUN_10089010(void)

{
  thunk_FUN_1008d900(&DAT_102db750);
  return;
}

/* 10089040  FUN_10089040  (29 bytes)
 * undefined FUN_10089040(void)
 * called by: thunk_FUN_10089040
 */
void FUN_10089040(void)

{
  thunk_FUN_1008d920(&DAT_102db750);
  return;
}

/* 10089070  FUN_10089070  (29 bytes)
 * undefined FUN_10089070(void)
 * called by: thunk_FUN_10089070
 */
void FUN_10089070(void)

{
  thunk_FUN_1008d940(&DAT_102db750);
  return;
}

/* 100890a0  FUN_100890a0  (29 bytes)
 * undefined FUN_100890a0(void)
 * called by: thunk_FUN_100890a0
 */
void FUN_100890a0(void)

{
  thunk_FUN_1008d960(&DAT_102db750);
  return;
}

/* 100890d0  FUN_100890d0  (29 bytes)
 * undefined FUN_100890d0(void)
 * called by: thunk_FUN_100890d0
 */
void FUN_100890d0(void)

{
  thunk_FUN_1008d980(&DAT_102db750);
  return;
}

/* 10089100  FUN_10089100  (29 bytes)
 * undefined FUN_10089100(void)
 * called by: thunk_FUN_10089100
 */
void FUN_10089100(void)

{
  thunk_FUN_1008d9a0(&DAT_102db750);
  return;
}

/* 10089130  FUN_10089130  (29 bytes)
 * undefined FUN_10089130(void)
 * called by: thunk_FUN_10089130
 */
void FUN_10089130(void)

{
  thunk_FUN_1008d9c0(&DAT_102db750);
  return;
}

/* 10089160  FUN_10089160  (29 bytes)
 * undefined FUN_10089160(void)
 * called by: thunk_FUN_10089160
 */
void FUN_10089160(void)

{
  thunk_FUN_1008da60(&DAT_102db750);
  return;
}

/* 10089190  FUN_10089190  (29 bytes)
 * undefined FUN_10089190(void)
 * called by: thunk_FUN_10089190
 */
void FUN_10089190(void)

{
  thunk_FUN_1008db00(0x102db750);
  return;
}

/* 100891c0  FUN_100891c0  (29 bytes)
 * undefined FUN_100891c0(void)
 * called by: thunk_FUN_100891c0
 */
void FUN_100891c0(void)

{
  thunk_FUN_1008db70();
  return;
}

/* 100891f0  FUN_100891f0  (29 bytes)
 * undefined FUN_100891f0(void)
 * called by: thunk_FUN_100891f0
 */
void FUN_100891f0(void)

{
  thunk_FUN_1008db90();
  return;
}

/* 10089220  FUN_10089220  (36 bytes)
 * undefined FUN_10089220(void)
 */
void FUN_10089220(void)

{
  _memset(&DAT_10318ae8,-1,0x1000);
  return;
}

/* 10089250  FUN_10089250  (490 bytes)
 * undefined4 FUN_10089250(int param_1)
 * called by: thunk_FUN_10089250
 */
undefined4 __fastcall FUN_10089250(int param_1)

{
  (*DAT_102e14a0)("WeaponInfo",thunk_FUN_10088dd0);
  (*DAT_102e14a0)("ClipInfo",thunk_FUN_10088e00);
  (*DAT_102e14a0)("WStatus",thunk_FUN_10088e30);
  (*DAT_102e14a0)("ActItems",thunk_FUN_10088e60);
  (*DAT_102e14a0)("NextStunt",thunk_FUN_10088e90);
  (*DAT_102e14a0)("Wires",thunk_FUN_10088ec0);
  (*DAT_102e14a0)("CustomWP",thunk_FUN_10088ef0);
  (*DAT_102e14a0)("KFuPower",thunk_FUN_10088f20);
  (*DAT_102e149c)("slot1",thunk_FUN_10088f50);
  (*DAT_102e149c)("slot2",thunk_FUN_10088f80);
  (*DAT_102e149c)("slot3",thunk_FUN_10088fb0);
  (*DAT_102e149c)("slot4",thunk_FUN_10088fe0);
  (*DAT_102e149c)("slot5",thunk_FUN_10089010);
  (*DAT_102e149c)("slot6",thunk_FUN_10089040);
  (*DAT_102e149c)("slot7",thunk_FUN_10089070);
  (*DAT_102e149c)("slot8",thunk_FUN_100890a0);
  (*DAT_102e149c)("slot9",thunk_FUN_100890d0);
  (*DAT_102e149c)("slot10",thunk_FUN_10089100);
  (*DAT_102e149c)("invnext",thunk_FUN_10089130);
  (*DAT_102e149c)("invprev",thunk_FUN_10089160);
  (*DAT_102e149c)(&DAT_1027171c,thunk_FUN_10089190);
  (*DAT_102e149c)("buylast",thunk_FUN_100891c0);
  (*DAT_102e149c)("buyitem",thunk_FUN_100891f0);
  thunk_FUN_10046ec0(&DAT_102da3c8,param_1);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  return 1;
}

/* 100894c0  FUN_100894c0  (781 bytes)
 * undefined4 FUN_100894c0(int param_1)
 * called by: thunk_FUN_100894c0
 */
undefined4 __fastcall FUN_100894c0(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int local_10;
  
  thunk_FUN_1001e270();
  _memset((void *)(param_1 + 0x164),-1,0x5d8);
  for (local_10 = 0; local_10 < 0x40; local_10 = local_10 + 1) {
    pcVar1 = thunk_FUN_1001d7b0(local_10);
    if (*pcVar1 != '\0') {
      uVar2 = (*DAT_102e1458)(pcVar1 + 0x86);
      *(undefined4 *)(param_1 + 0x44 + local_10 * 4) = uVar2;
    }
  }
  uVar2 = (*DAT_102e1458)("sprites/weapons/kungfu.spr");
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  uVar2 = (*DAT_102e1458)("sprites/weapons/item_installed.spr");
  *(undefined4 *)(param_1 + 0x144) = uVar2;
  uVar2 = (*DAT_102e1458)("sprites/weapons/item_not_installed.spr");
  *(undefined4 *)(param_1 + 0x148) = uVar2;
  uVar2 = (*DAT_102e1458)("sprites/cross_e.spr");
  *(undefined4 *)(param_1 + 0x14c) = uVar2;
  uVar2 = (*DAT_102e1458)("sprites/cross2.spr");
  *(undefined4 *)(param_1 + 0x150) = uVar2;
  uVar2 = (*DAT_102e1458)("sprites/cross_t.spr");
  *(undefined4 *)(param_1 + 0x154) = uVar2;
  uVar2 = (*DAT_102e1458)("sprites/player/divestept.spr");
  *(undefined4 *)(param_1 + 0x158) = uVar2;
  uVar2 = (*DAT_102e1458)("sprites/player/divestepc.spr");
  *(undefined4 *)(param_1 + 0x15c) = uVar2;
  uVar2 = (*DAT_102e1458)("sprites/player/divestepb.spr");
  *(undefined4 *)(param_1 + 0x160) = uVar2;
  *(undefined1 *)(param_1 + 0x73c) = 0;
  *(undefined4 *)(param_1 + 0x740) = 0;
  *(undefined4 *)(param_1 + 0x744) = 0;
  _memset((void *)(param_1 + 0x788),0,0x30);
  *(undefined1 *)(param_1 + 0x7b8) = 0;
  _memset((void *)(param_1 + 0x748),0,0x40);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x4af0) = 0;
  *(undefined4 *)(param_1 + 0x7cc) = 0;
  _memset((void *)(param_1 + 2000),0,0x160);
  *(undefined1 *)(param_1 + 0x930) = 0;
  *(undefined1 *)(param_1 + 0x931) = 0;
  thunk_FUN_10089220();
  thunk_FUN_1006aa70((undefined1 *)(param_1 + 0x934));
  uVar2 = (*DAT_102e1458)("sprites/wires/rwire.spr");
  *(undefined4 *)(param_1 + 0x4ac8) = uVar2;
  uVar2 = (*DAT_102e1458)("sprites/wires/gwire.spr");
  *(undefined4 *)(param_1 + 0x4acc) = uVar2;
  uVar2 = (*DAT_102e1458)("sprites/wires/bwire.spr");
  *(undefined4 *)(param_1 + 0x4ad0) = uVar2;
  uVar2 = (*DAT_102e1458)("sprites/wires/rwirecutted.spr");
  *(undefined4 *)(param_1 + 0x4ad4) = uVar2;
  uVar2 = (*DAT_102e1458)("sprites/wires/gwirecutted.spr");
  *(undefined4 *)(param_1 + 0x4ad8) = uVar2;
  uVar2 = (*DAT_102e1458)("sprites/wires/bwirecutted.spr");
  *(undefined4 *)(param_1 + 0x4adc) = uVar2;
  *(undefined1 *)(param_1 + 0x4ae0) = 0;
  *(undefined1 *)(param_1 + 0x4ae1) = 0;
  *(undefined1 *)(param_1 + 0x4ae2) = 0;
  *(undefined4 *)(param_1 + 0x4ae4) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x4ae8) = 0;
  *(undefined4 *)(param_1 + 0x4af4) = 0;
  *(undefined4 *)(param_1 + 0x4af8) = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  return 1;
}

/* 10089890  FUN_10089890  (278 bytes)
 * undefined FUN_10089890(int param_1)
 * called by: thunk_FUN_10089890
 */
void __fastcall FUN_10089890(int param_1)

{
  _memset((void *)(param_1 + 0x164),-1,0x5d8);
  *(undefined4 *)(param_1 + 0x324) = 0;
  *(undefined4 *)(param_1 + 0x328) = 1;
  *(undefined1 *)(param_1 + 0x73c) = 0;
  *(undefined1 *)(param_1 + 0x7b9) = 0;
  *(undefined4 *)(param_1 + 0x740) = 0;
  *(undefined4 *)(param_1 + 0x744) = 0;
  *(undefined1 *)(param_1 + 0x7b8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x7cc) = 0;
  *(undefined4 *)(param_1 + 0x4af0) = 0;
  *(undefined1 *)(param_1 + 0x4ae0) = 0;
  *(undefined1 *)(param_1 + 0x4ae1) = 0;
  *(undefined1 *)(param_1 + 0x4ae2) = 0;
  *(undefined4 *)(param_1 + 0x4ae4) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x4ae8) = 0;
  *(undefined4 *)(param_1 + 0x4af4) = 0;
  *(undefined4 *)(param_1 + 0x4af8) = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  return;
}

/* 100899f0  FUN_100899f0  (741 bytes)
 * undefined FUN_100899f0(int param_1)
 * called by: thunk_FUN_100899f0
 */
void __fastcall FUN_100899f0(int param_1)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  float10 fVar4;
  undefined1 local_90 [64];
  undefined1 local_50 [64];
  uint local_10;
  uint local_c;
  int local_8;
  
  local_8 = param_1;
  if ((*(float *)(DAT_102e81c8 + 0xc) != 0.0) && (DAT_102e0260 != 0)) {
    local_c = *(uint *)(param_1 + 0x4af8) ^ DAT_102da418;
    local_10 = local_c & DAT_102da418;
    if ((local_10 & 0x20) != 0) {
      if (DAT_102da3ec <= *(float *)(param_1 + 0x4af4)) {
        (*DAT_102e14a4)("usepowerup");
      }
      *(float *)(local_8 + 0x4af4) = DAT_102da3ec + 0.3;
    }
  }
  *(uint *)(local_8 + 0x4af8) = DAT_102da418;
  if (*(float *)(local_8 + 0x4ae4) < 100.0) {
    fVar1 = DAT_102da3ec - *(float *)(local_8 + 0x4ae8);
    fVar4 = thunk_FUN_10095800(DAT_1031bee4);
    *(float *)(local_8 + 0x4ae4) =
         (float)(((float10)fVar1 / fVar4) * (float10)15.0 + (float10)*(float *)(local_8 + 0x4ae4));
    if (100.0 < *(float *)(local_8 + 0x4ae4)) {
      *(undefined4 *)(local_8 + 0x4ae4) = 0x42c80000;
    }
  }
  *(float *)(local_8 + 0x4ae8) = DAT_102da3ec;
  thunk_FUN_10052960((undefined1 *)(local_8 + 0x934));
  uVar3 = thunk_FUN_100885b0();
  if ((((uVar3 & 0xff) == 0) && (cVar2 = thunk_FUN_10088600(), cVar2 == '\0')) &&
     (*(char *)(local_8 + 0x73c) != '\0')) {
    uVar3 = thunk_FUN_1008f040(&DAT_102da3c8,1);
    if ((uVar3 & 0xff) != 0) {
      if ((*(int *)(local_8 + 0x740) != -1) &&
         (-1 < *(int *)(local_8 + 0x164 + *(int *)(local_8 + 0x740) * 0x58 +
                       *(int *)(local_8 + 0x744) * 8))) {
        FUN_100bb6e0(local_50,(byte_conflict *)"weapon_%i");
        (*DAT_102e14a4)(local_50);
      }
      *(undefined1 *)(local_8 + 0x73c) = 0;
      *(undefined4 *)(local_8 + 0x740) = 0;
      *(undefined4 *)(local_8 + 0x744) = 0;
    }
    uVar3 = thunk_FUN_1008f040(&DAT_102da3c8,0x800);
    if ((uVar3 & 0xff) != 0) {
      if (0 < *(int *)(local_8 + 0x164 + *(int *)(local_8 + 0x740) * 0x58 +
                      *(int *)(local_8 + 0x744) * 8)) {
        FUN_100bb6e0(local_90,(byte_conflict *)"drop_%i");
        (*DAT_102e14a4)(local_90);
      }
      *(undefined1 *)(local_8 + 0x73c) = 0;
      *(undefined4 *)(local_8 + 0x740) = 0;
      *(undefined4 *)(local_8 + 0x744) = 0;
    }
  }
  return;
}

/* 10089d90  FUN_10089d90  (448 bytes)
 * undefined4 FUN_10089d90(void * param_1)
 * called by: thunk_FUN_10089d90
 */
undefined4 __fastcall FUN_10089d90(void *param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  
  thunk_FUN_1008b410((int)param_1);
  if (*(float *)(DAT_102e8268 + 0xc) == 0.0) {
    cVar1 = thunk_FUN_10052960((undefined1 *)((int)param_1 + 0x934));
    if (cVar1 != '\0') {
      thunk_FUN_1006b5b0((void *)((int)param_1 + 0x934));
    }
    uVar3 = thunk_FUN_100885b0();
    if (((uVar3 & 0xff) == 0) && (cVar1 = thunk_FUN_10088600(), cVar1 == '\0')) {
      cVar1 = thunk_FUN_10052960((undefined1 *)((int)param_1 + 0x934));
      if ((cVar1 != '\0') && (*(int *)((int)param_1 + 0x938) != 8)) {
        thunk_FUN_1006b530((undefined1 *)((int)param_1 + 0x934));
      }
      if (*(char *)((int)param_1 + 0x73c) != '\0') {
        thunk_FUN_1008af40((int)param_1);
      }
      if (*(char *)((int)param_1 + 0x7b8) == '\0') {
        *(undefined4 *)((int)param_1 + 0x14) = 0;
        thunk_FUN_1008a0f0();
      }
      else {
        piVar2 = (int *)(*DAT_102e1524)();
        *(uint *)((int)param_1 + 0x14) = (uint)(byte)(&DAT_10316c64)[*piVar2];
        thunk_FUN_1008a320((int)param_1);
      }
      cVar1 = thunk_FUN_10052960((undefined1 *)((int)param_1 + 0x934));
      if (cVar1 == '\0') {
        if (((*(char *)((int)param_1 + 0x4ae0) == '\0') &&
            (*(char *)((int)param_1 + 0x4ae1) == '\0')) &&
           (*(char *)((int)param_1 + 0x4ae2) == '\0')) {
          thunk_FUN_1008b960(param_1);
        }
        else {
          thunk_FUN_10089fc0((int)param_1);
        }
      }
    }
    else {
      *(undefined4 *)((int)param_1 + 0x14) = 0;
      *(undefined1 *)((int)param_1 + 0x930) = 1;
    }
  }
  else if (*(char *)((int)param_1 + 0x7b8) == '\0') {
    *(undefined4 *)((int)param_1 + 0x14) = 0;
  }
  else {
    piVar2 = (int *)(*DAT_102e1524)();
    *(uint *)((int)param_1 + 0x14) = (uint)(byte)(&DAT_10316c64)[*piVar2];
  }
  return 1;
}

/* 10089fc0  FUN_10089fc0  (242 bytes)
 * undefined FUN_10089fc0(int param_1)
 */
void __fastcall FUN_10089fc0(int param_1)

{
  DAT_10318948 = DAT_102e1234 / 2 + -0x30;
  DAT_10318ac0 = DAT_102e1238 / 2 + -0x80;
  for (DAT_10319f98 = 0; DAT_10319f98 < 3; DAT_10319f98 = DAT_10319f98 + 1) {
    if (*(char *)(param_1 + DAT_10319f98 + 0x4ae0) == '\0') {
      (*DAT_102e1468)(*(undefined4 *)(param_1 + 0x4ad4 + DAT_10319f98 * 4),0xff,0xff,0xff);
    }
    else {
      (*DAT_102e1468)(*(undefined4 *)(param_1 + 0x4ac8 + DAT_10319f98 * 4),0xff,0xff,0xff);
    }
    (*DAT_102e1470)(0,DAT_10318948,DAT_10318ac0,0);
    DAT_10318948 = DAT_10318948 + 0x20;
  }
  return;
}

/* 1008a0f0  FUN_1008a0f0  (448 bytes)
 * undefined FUN_1008a0f0(void)
 */
void FUN_1008a0f0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  lVar4 = __ftol();
  DAT_103189c0 = (undefined4)lVar4;
  lVar4 = __ftol();
  DAT_10318a18 = (undefined4)lVar4;
  lVar4 = __ftol();
  DAT_10318a4c = (undefined4)lVar4;
  DAT_10318990 = DAT_102e1234 + -0x88;
  DAT_103189f8 = 0x14;
  DAT_10319f38 = DAT_102e1238 + -0x1c;
  lVar4 = __ftol();
  iVar1 = (int)lVar4;
  (*DAT_102e1484)(DAT_10318990,DAT_10319f38,iVar1,DAT_103189f8 + -1,DAT_103189c0,DAT_10318a18,
                  DAT_10318a4c,0x40);
  if (iVar1 < 0x80) {
    (*DAT_102e1484)(DAT_10318990 + iVar1,DAT_10319f38,0x80 - iVar1,DAT_103189f8 + -1,DAT_103189c0,
                    DAT_10318a18,DAT_10318a4c,0x1e);
  }
  DAT_10319f38 = DAT_10319f38 - DAT_103189f8;
  (*DAT_102e1484)(DAT_10318990,DAT_10319f38,0x80,DAT_103189f8 + -1,DAT_103189c0,DAT_10318a18,
                  DAT_10318a4c,0x23);
  lVar4 = __ftol();
  uVar2 = (undefined4)lVar4;
  lVar4 = __ftol();
  uVar3 = (undefined4)lVar4;
  lVar4 = __ftol();
  thunk_FUN_10047f00(DAT_10318990 + 2,DAT_10319f38,DAT_102e1234,"Kung-Fu",(int)lVar4,uVar3,uVar2);
  return;
}

/* 1008a320  FUN_1008a320  (2436 bytes)
 * undefined FUN_1008a320(int param_1)
 */
void __fastcall FUN_1008a320(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  if (*(float *)(DAT_102e820c + 0xc) == 0.0) {
    lVar7 = __ftol();
    DAT_103189c4 = (int)lVar7;
    lVar7 = __ftol();
    DAT_10319f88 = (int)lVar7;
    lVar7 = __ftol();
    DAT_103189ec = (int)lVar7;
    DAT_10318a98 = thunk_FUN_1001d7b0((uint)*(byte *)(param_1 + 0x7b8));
    DAT_10318a54 = DAT_102e1234 + -0x88;
    DAT_10319f3c = DAT_102e1238 + -8;
    DAT_10319f34 = 0x14;
    for (DAT_10318a40 = 0; DAT_10318a40 < 4; DAT_10318a40 = DAT_10318a40 + 1) {
      if ((*(uint *)(param_1 + 0x798) & 1 << ((byte)DAT_10318a40 & 0x1f)) != 0) {
        DAT_10319f3c = DAT_10319f3c - DAT_10319f34;
        (*DAT_102e1484)(DAT_10318a54,DAT_10319f3c,0x80,DAT_10319f34 + -1,DAT_103189c4,DAT_10319f88,
                        DAT_103189ec,
                        (-((*(uint *)(param_1 + 0x14) & 1 << ((byte)DAT_10318a40 & 0x1f)) != 0) &
                        0x1eU) + 0xf);
        switch(DAT_10318a40) {
        case 0:
          FUN_100bba20((uint *)&DAT_10318a60,(uint *)"Silencer");
          break;
        case 1:
          FUN_100bba20((uint *)&DAT_10318a60,(uint *)"Lasersight");
          break;
        case 2:
          FUN_100bba20((uint *)&DAT_10318a60,(uint *)"Flashlight");
          break;
        case 3:
          FUN_100bba20((uint *)&DAT_10318a60,(uint *)"Scope");
        }
        thunk_FUN_10047f00(DAT_10318a54 + 2,DAT_10319f3c,DAT_102e1234,&DAT_10318a60,DAT_103189c4 / 2
                           ,DAT_10319f88 / 2,DAT_103189ec / 2);
        bVar6 = (byte)DAT_10318a40;
        iVar10 = DAT_103189ec;
        if ((*(uint *)(param_1 + 0x14) & 1 << (bVar6 & 0x1f)) == 0) {
          iVar10 = DAT_103189ec / 2;
        }
        iVar8 = DAT_10319f88;
        if ((*(uint *)(param_1 + 0x14) & 1 << (bVar6 & 0x1f)) == 0) {
          iVar8 = DAT_10319f88 / 2;
        }
        iVar1 = DAT_103189c4;
        if ((*(uint *)(param_1 + 0x14) & 1 << (bVar6 & 0x1f)) == 0) {
          iVar1 = DAT_103189c4 / 2;
        }
        (*DAT_102e1468)(*(undefined4 *)(param_1 + 0x144),iVar1,iVar8,iVar10);
        (*DAT_102e1474)(0,DAT_10318a54 + 0x70,DAT_10319f3c,0);
      }
    }
    DAT_10319f3c = DAT_10319f3c - DAT_10319f34;
    (*DAT_102e1484)(DAT_10318a54,DAT_10319f3c,0x80,DAT_10319f34 + -1,DAT_103189c4,DAT_10319f88,
                    DAT_103189ec,0xf);
    puVar2 = thunk_FUN_1001d7b0((uint)*(byte *)(param_1 + 0x7b8));
    if (puVar2[8] == '\0') {
      puVar2 = thunk_FUN_1001d7b0((uint)*(byte *)(param_1 + 0x7b8));
      if (puVar2[0xd4] != '\0') {
        lVar7 = __ftol();
        uVar3 = (undefined4)lVar7;
        lVar7 = __ftol();
        uVar4 = (undefined4)lVar7;
        lVar7 = __ftol();
        uVar5 = (undefined4)lVar7;
        iVar10 = *(int *)(param_1 + 0x78c);
        uVar9 = 5;
        iVar8 = DAT_10319f3c;
        lVar7 = __ftol();
        thunk_FUN_10088620(&DAT_102da3c8,(int)lVar7,iVar8,uVar9,iVar10,uVar5,uVar4,uVar3);
      }
    }
    else {
      lVar7 = __ftol();
      uVar3 = (undefined4)lVar7;
      lVar7 = __ftol();
      uVar4 = (undefined4)lVar7;
      lVar7 = __ftol();
      thunk_FUN_10088620(&DAT_102da3c8,DAT_10318a54 + 2,DAT_10319f3c,5,*(int *)(param_1 + 0x78c),
                         (int)lVar7,uVar4,uVar3);
      thunk_FUN_10047f00(DAT_10318a54 + 0x40,DAT_10319f3c,DAT_102e1234,"/",
                         (int)(DAT_103189c4 + (DAT_103189c4 >> 0x1f & 3U)) >> 2,
                         (int)(DAT_10319f88 + (DAT_10319f88 >> 0x1f & 3U)) >> 2,
                         (int)(DAT_103189ec + (DAT_103189ec >> 0x1f & 3U)) >> 2);
      thunk_FUN_1001d7b0((uint)*(byte *)(param_1 + 0x7b8));
      thunk_FUN_1001d7b0((uint)*(byte *)(param_1 + 0x7b8));
      thunk_FUN_1001d7b0((uint)*(byte *)(param_1 + 0x7b8));
      lVar7 = __ftol();
      uVar3 = (undefined4)lVar7;
      lVar7 = __ftol();
      uVar4 = (undefined4)lVar7;
      lVar7 = __ftol();
      uVar5 = (undefined4)lVar7;
      puVar2 = thunk_FUN_1001d7b0((uint)*(byte *)(param_1 + 0x7b8));
      iVar10 = *(int *)(param_1 + 0x748 + (uint)(byte)puVar2[8] * 4);
      uVar9 = 5;
      iVar8 = DAT_10319f3c;
      lVar7 = __ftol();
      thunk_FUN_10088620(&DAT_102da3c8,(int)lVar7,iVar8,uVar9,iVar10,uVar5,uVar4,uVar3);
      DAT_10319f3c = DAT_10319f3c - DAT_10319f34;
      (*DAT_102e1484)(DAT_10318a54,DAT_10319f3c,0x80,DAT_10319f34 + -1,DAT_103189c4,DAT_10319f88,
                      DAT_103189ec,0xf);
      switch(*(undefined1 *)(param_1 + 0x78a)) {
      case 1:
        FUN_100bba20((uint *)&DAT_10318aa0,(uint *)"Semi-auto");
        break;
      case 2:
        FUN_100bba20((uint *)&DAT_10318aa0,(uint *)"Burst");
        break;
      case 3:
        FUN_100bba20((uint *)&DAT_10318aa0,(uint *)"Pump-action");
        break;
      case 4:
        FUN_100bba20((uint *)&DAT_10318aa0,(uint *)"Free Semi");
        break;
      case 5:
        FUN_100bba20((uint *)&DAT_10318aa0,(uint *)"Free Full");
        break;
      default:
        FUN_100bba20((uint *)&DAT_10318aa0,(uint *)"Full-auto");
      }
      lVar7 = __ftol();
      uVar3 = (undefined4)lVar7;
      lVar7 = __ftol();
      uVar4 = (undefined4)lVar7;
      lVar7 = __ftol();
      thunk_FUN_10047f00(DAT_10318a54 + 2,DAT_10319f3c,DAT_102e1234,&DAT_10318aa0,(int)lVar7,uVar4,
                         uVar3);
      DAT_10319f3c = DAT_10319f3c - DAT_10319f34;
      (*DAT_102e1484)(DAT_10318a54,DAT_10319f3c,0x80,DAT_10319f34 + -1,DAT_103189c4,DAT_10319f88,
                      DAT_103189ec,0xf);
      lVar7 = __ftol();
      uVar3 = (undefined4)lVar7;
      lVar7 = __ftol();
      uVar4 = (undefined4)lVar7;
      lVar7 = __ftol();
      uVar5 = (undefined4)lVar7;
      puVar2 = thunk_FUN_1001d7b0((uint)*(byte *)(param_1 + 0x7b8));
      puVar2 = thunk_FUN_1001d7f0((uint)(byte)puVar2[8]);
      thunk_FUN_10047f00(DAT_10318a54 + 2,DAT_10319f3c,DAT_102e1234,puVar2 + 0x28,uVar5,uVar4,uVar3)
      ;
    }
    DAT_10319f3c = DAT_10319f3c - DAT_10319f34;
    (*DAT_102e1484)(DAT_10318a54,DAT_10319f3c,0x80,DAT_10319f34 + -1,DAT_103189c4,DAT_10319f88,
                    DAT_103189ec,0x23);
    lVar7 = __ftol();
    uVar3 = (undefined4)lVar7;
    lVar7 = __ftol();
    uVar4 = (undefined4)lVar7;
    lVar7 = __ftol();
    thunk_FUN_10047f00(DAT_10318a54 + 2,DAT_10319f3c,DAT_102e1234,DAT_10318a98 + 0x44,(int)lVar7,
                       uVar4,uVar3);
    if (DAT_102da420 < 0x28) {
      FUN_100bb6e0(&DAT_10318aa0,"%ix");
      thunk_FUN_10047f00(0x18,0x18,DAT_102e1234,&DAT_10318aa0,DAT_103189c4,DAT_10319f88,DAT_103189ec
                        );
    }
  }
  return;
}

/* 1008af40  FUN_1008af40  (981 bytes)
 * undefined FUN_1008af40(int param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1008af40(int param_1)

{
  longlong lVar1;
  char local_4c;
  
  for (DAT_10318984 = 1; DAT_10318984 < 6; DAT_10318984 = DAT_10318984 + 1) {
    lVar1 = __ftol();
    DAT_10319ef0 = (undefined4)lVar1;
    lVar1 = __ftol();
    DAT_10318ae0 = (undefined4)lVar1;
    lVar1 = __ftol();
    DAT_1031893c = (undefined4)lVar1;
    DAT_10318ad8 = (DAT_10318984 + -1) * 0x80 + 8;
    _DAT_10318ad0 = 0x80;
    _DAT_10318934 = 0x30;
    (*DAT_102e1484)(DAT_10318ad8,8,0x80,0x14,DAT_10319ef0,DAT_10318ae0,DAT_1031893c,
                    (-(uint)(DAT_10318984 != *(int *)(param_1 + 0x744)) & 0xffffffce) + 100);
    DAT_103189cc = DAT_10318984 == *(int *)(param_1 + 0x744);
    thunk_FUN_10047e90(&DAT_10319ef0,&DAT_10318ae0,&DAT_1031893c);
    thunk_FUN_10088620(&DAT_102da3c8,DAT_10318ad8,8,2,DAT_10318984,DAT_10319ef0,DAT_10318ae0,
                       DAT_1031893c);
    DAT_103189f0 = 0x1c;
    for (DAT_1031898c = 0; DAT_1031898c < 0x11; DAT_1031898c = DAT_1031898c + 1) {
      if (*(int *)(param_1 + 0x164 + DAT_1031898c * 0x58 + DAT_10318984 * 8) != -1) {
        if ((DAT_1031898c == *(int *)(param_1 + 0x740)) &&
           (DAT_10318984 == *(int *)(param_1 + 0x744))) {
          local_4c = '\x01';
        }
        else {
          local_4c = '\0';
        }
        DAT_103189cc = local_4c;
        if (local_4c != '\0') {
          DAT_10319fa4 = thunk_FUN_1001d7b0(*(int *)(param_1 + 0x164 + DAT_1031898c * 0x58 +
                                                    DAT_10318984 * 8));
          lVar1 = __ftol();
          DAT_10319ef0 = (undefined4)lVar1;
          lVar1 = __ftol();
          DAT_10318ae0 = (undefined4)lVar1;
          lVar1 = __ftol();
          DAT_1031893c = (undefined4)lVar1;
          thunk_FUN_10047e90(&DAT_10319ef0,&DAT_10318ae0,&DAT_1031893c);
          thunk_FUN_10047f00(DAT_10318ad8 + _DAT_10318ad0,DAT_103189f0,DAT_102e1234,
                             DAT_10319fa4 + 0x44,DAT_10319ef0,DAT_10318ae0,DAT_1031893c);
        }
        if (*(int *)(param_1 + DAT_1031898c * 0x58 + 0x168 + DAT_10318984 * 8) < 1) {
          DAT_10319ef0 = 0xc3;
          DAT_10318ae0 = 0x2d;
          DAT_1031893c = 0x2d;
        }
        else {
          lVar1 = __ftol();
          DAT_10319ef0 = (undefined4)lVar1;
          lVar1 = __ftol();
          DAT_10318ae0 = (undefined4)lVar1;
          lVar1 = __ftol();
          DAT_1031893c = (undefined4)lVar1;
        }
        thunk_FUN_10047e90(&DAT_10319ef0,&DAT_10318ae0,&DAT_1031893c);
        (*DAT_102e1468)(*(undefined4 *)
                         (param_1 + 0x44 +
                         *(int *)(param_1 + 0x164 + DAT_1031898c * 0x58 + DAT_10318984 * 8) * 4),
                        DAT_10319ef0,DAT_10318ae0,DAT_1031893c);
        (*DAT_102e1474)(0,DAT_10318ad8,DAT_103189f0,0);
        DAT_103189f0 = DAT_103189f0 + _DAT_10318934;
      }
    }
  }
  return;
}

/* 1008b410  FUN_1008b410  (1076 bytes)
 * undefined FUN_1008b410(int param_1)
 */
void __fastcall FUN_1008b410(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float *pfVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  
  iVar1 = (*DAT_102e1568)(0xfffffff6,10);
  DAT_10318930 = iVar1 / 10;
  iVar1 = (*DAT_102e1568)(0xfffffff6,10);
  DAT_103189dc = iVar1 / 10;
  iVar1 = thunk_FUN_100b5a50();
  if (iVar1 == 0) {
    DAT_103189f4 = DAT_102e1234 / 2;
    DAT_10319f94 = DAT_102e1238 / 2;
  }
  else {
    puVar12 = &DAT_10319f94;
    puVar10 = &DAT_103189f4;
    uVar2 = thunk_FUN_10008500(param_1 + 0x38);
    thunk_FUN_10097650(uVar2,puVar10,puVar12);
  }
  if ((*(uint *)(param_1 + 0x14) & 2) != 0) {
    if ((*(uint *)(param_1 + 0x14) & 0x40) == 0) {
      iVar1 = thunk_FUN_10008500(param_1 + 0x1c);
      if (((*(float *)(iVar1 + 8) < 4096.0) &&
          (pfVar3 = (float *)thunk_FUN_10008500(param_1 + 0x1c), *pfVar3 != -1.0)) &&
         (iVar1 = thunk_FUN_10008500(param_1 + 0x1c), *(float *)(iVar1 + 4) != -1.0)) {
        thunk_FUN_10008500(param_1 + 0x1c);
        lVar4 = __ftol();
        DAT_10318940 = (undefined4)lVar4;
        if ((DAT_10318950 == 0) || (1.0 <= *(float *)(DAT_102e82ec + 0xc))) {
          uVar11 = 0;
          uVar9 = 0;
          uVar8 = 0xff;
          uVar7 = 2;
          uVar5 = 2;
          uVar2 = DAT_10318940;
          thunk_FUN_10008500(param_1 + 0x1c);
          lVar4 = __ftol();
          uVar6 = (undefined4)lVar4;
          thunk_FUN_10008500(param_1 + 0x1c);
          lVar4 = __ftol();
          (*DAT_102e1484)((int)lVar4,uVar6,uVar5,uVar7,uVar8,uVar9,uVar11,uVar2);
        }
        else {
          (*DAT_102e1484)(DAT_103189f4 + -1 + DAT_10318930,DAT_10319f94 + -1 + DAT_103189dc,2,2,0xff
                          ,0,0,DAT_10318940);
        }
      }
    }
    else {
      iVar1 = thunk_FUN_10008500(param_1 + 0x1c);
      if (((*(float *)(iVar1 + 8) < 4096.0) &&
          (pfVar3 = (float *)thunk_FUN_10008500(param_1 + 0x1c), *pfVar3 != -1.0)) &&
         (iVar1 = thunk_FUN_10008500(param_1 + 0x1c), *(float *)(iVar1 + 4) != -1.0)) {
        thunk_FUN_10008500(param_1 + 0x1c);
        lVar4 = __ftol();
        DAT_10318940 = (undefined4)lVar4;
        if ((DAT_10318950 == 0) || (1.0 <= *(float *)(DAT_102e82ec + 0xc))) {
          uVar11 = 0;
          uVar9 = 0;
          uVar8 = 0xff;
          uVar7 = 2;
          uVar5 = 2;
          uVar2 = DAT_10318940;
          thunk_FUN_10008500(param_1 + 0x1c);
          lVar4 = __ftol();
          uVar6 = (undefined4)lVar4;
          thunk_FUN_10008500(param_1 + 0x1c);
          lVar4 = __ftol();
          (*DAT_102e1484)((int)lVar4,uVar6,uVar5,uVar7,uVar8,uVar9,uVar11,uVar2);
        }
        else {
          (*DAT_102e1484)(DAT_103189f4 + 3 + DAT_10318930,DAT_10319f94 + -1 + DAT_103189dc,2,2,0xff,
                          0,0,DAT_10318940);
        }
      }
      iVar1 = thunk_FUN_10008500(param_1 + 0x28);
      if (((*(float *)(iVar1 + 8) < 4096.0) &&
          (pfVar3 = (float *)thunk_FUN_10008500(param_1 + 0x28), *pfVar3 != -1.0)) &&
         (iVar1 = thunk_FUN_10008500(param_1 + 0x28), *(float *)(iVar1 + 4) != -1.0)) {
        DAT_10318940 = 0xff;
        if ((DAT_10318950 == 0) || (1.0 <= *(float *)(DAT_102e82ec + 0xc))) {
          uVar11 = 0xff;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 0xff;
          uVar5 = 2;
          uVar6 = 2;
          thunk_FUN_10008500(param_1 + 0x28);
          lVar4 = __ftol();
          uVar2 = (undefined4)lVar4;
          thunk_FUN_10008500(param_1 + 0x28);
          lVar4 = __ftol();
          (*DAT_102e1484)((int)lVar4,uVar2,uVar6,uVar5,uVar7,uVar8,uVar9,uVar11);
        }
        else {
          (*DAT_102e1484)(DAT_103189f4 + -5 + DAT_103189dc,DAT_10319f94 + -1 + DAT_10318930,2,2,0xff
                          ,0,0,0xff);
        }
      }
    }
  }
  return;
}

