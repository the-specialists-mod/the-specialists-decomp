/* client.dll - unnamed_1006e417 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1006e417  FUN_1006e417  (10 bytes)
 * undefined FUN_1006e417()
 */
void FUN_1006e417(void)

{
  int unaff_EBP;
  
  FUN_1006e48d(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}

/* 1006e421  FUN_1006e421  (24 bytes)
 * undefined FUN_1006e421()
 */
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

undefined4 FUN_1006e421(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(iVar1 + -4) = 0xffffffff;
  *(int *)(iVar1 + -8) = unaff_EBP + -0x10;
  *(undefined4 *)(iVar1 + -0xc) = 0x1006e433;
  __local_unwind2(*(int *)(iVar1 + -8),*(int *)(iVar1 + -4));
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return 0;
}

/* 1006e43f  FUN_1006e43f  (78 bytes)
 * undefined FUN_1006e43f(void)
 * called by: FUN_1006e372
 */
void FUN_1006e43f(void)

{
  DWORD *pDVar1;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_EDI;
  
  *(undefined4 *)(unaff_ESI + -4) = *(undefined4 *)(unaff_EBP + -0x28);
  pDVar1 = FUN_1006e7e1();
  pDVar1[0x1b] = *(DWORD *)(unaff_EBP + -0x1c);
  pDVar1 = FUN_1006e7e1();
  pDVar1[0x1c] = *(DWORD *)(unaff_EBP + -0x20);
  if ((((*unaff_EDI == -0x1f928c9d) && (unaff_EDI[4] == 3)) && (unaff_EDI[5] == 0x19930520)) &&
     ((*(int *)(unaff_EBP + -0x24) == 0 && (*(int *)(unaff_EBP + -0x2c) != 0)))) {
    __abnormal_termination();
    FUN_1006e67b((int)unaff_EDI);
  }
  return;
}

/* 1006e48d  FUN_1006e48d  (42 bytes)
 * undefined FUN_1006e48d()
 * called by: FUN_1006e417
 */
undefined4 FUN_1006e48d(int *param_1)

{
  param_1 = (int *)*param_1;
  if ((((*param_1 == -0x1f928c9d) && (param_1[4] == 3)) && (param_1[5] == 0x19930520)) &&
     (param_1[7] == 0)) {
    return 1;
  }
  return 0;
}

/* 1006e4b7  FUN_1006e4b7  (440 bytes)
 * undefined FUN_1006e4b7(int param_1, int param_2, byte.conflict * param_3, byte.conflict * param_4)
 * called by: FUN_1006e2f7
 */
void __cdecl FUN_1006e4b7(int param_1,int param_2,byte_conflict *param_3,byte_conflict *param_4)

{
  int *piVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar3;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined4 *puVar4;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  uint uVar5;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10081fc0;
  pcStack_10 = FUN_10072fe4;
  local_14 = ExceptionList;
  if (*(int *)(param_3 + 4) == 0) {
    return;
  }
  if (*(char *)(*(int *)(param_3 + 4) + 8) == '\0') {
    return;
  }
  if (*(int *)(param_3 + 8) == 0) {
    return;
  }
  piVar1 = (int *)(*(int *)(param_3 + 8) + 0xc + param_2);
  local_8 = 0;
  if ((*param_3 & 8) == 0) {
    if ((*param_4 & 1) == 0) {
      if (*(int *)(param_4 + 0x18) == 0) {
        ExceptionList = &local_14;
        bVar2 = FUN_10074211(*(void **)(param_1 + 0x18),1);
        if ((CONCAT31(extraout_var_03,bVar2) != 0) &&
           (bVar2 = FUN_1007422d(piVar1,1), CONCAT31(extraout_var_04,bVar2) != 0)) {
          uVar5 = *(uint *)(param_4 + 0x14);
          puVar4 = (undefined4 *)FUN_1006e6e2(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          FUN_1006ba20(piVar1,puVar4,uVar5);
          ExceptionList = local_14;
          return;
        }
      }
      else {
        ExceptionList = &local_14;
        bVar2 = FUN_10074211(*(void **)(param_1 + 0x18),1);
        if (((CONCAT31(extraout_var_05,bVar2) != 0) &&
            (bVar2 = FUN_1007422d(piVar1,1), CONCAT31(extraout_var_06,bVar2) != 0)) &&
           (bVar2 = FUN_10074249(*(FARPROC *)(param_4 + 0x18)), CONCAT31(extraout_var_07,bVar2) != 0
           )) {
          if ((*param_4 & 4) != 0) {
            FUN_1006e6e2(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
            FUN_1006afdf(piVar1,*(undefined **)(param_4 + 0x18));
            ExceptionList = local_14;
            return;
          }
          FUN_1006e6e2(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          FUN_1006afd8(piVar1,*(undefined **)(param_4 + 0x18));
          ExceptionList = local_14;
          return;
        }
      }
    }
    else {
      ExceptionList = &local_14;
      bVar2 = FUN_10074211(*(void **)(param_1 + 0x18),1);
      if ((CONCAT31(extraout_var_01,bVar2) != 0) &&
         (bVar2 = FUN_1007422d(piVar1,1), CONCAT31(extraout_var_02,bVar2) != 0)) {
        FUN_1006ba20(piVar1,*(undefined4 **)(param_1 + 0x18),*(uint *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 4) {
          ExceptionList = local_14;
          return;
        }
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          ExceptionList = local_14;
          return;
        }
        goto LAB_1006e545;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    bVar2 = FUN_10074211(*(void **)(param_1 + 0x18),1);
    if ((CONCAT31(extraout_var,bVar2) != 0) &&
       (bVar2 = FUN_1007422d(piVar1,1), CONCAT31(extraout_var_00,bVar2) != 0)) {
      iVar3 = *(int *)(param_1 + 0x18);
      *piVar1 = iVar3;
LAB_1006e545:
      iVar3 = FUN_1006e6e2(iVar3,(int *)(param_4 + 8));
      *piVar1 = iVar3;
      ExceptionList = local_14;
      return;
    }
  }
  FUN_1006e949();
  ExceptionList = local_14;
  return;
}

/* 1006e66f  FUN_1006e66f  (4 bytes)
 * undefined FUN_1006e66f()
 */
undefined4 FUN_1006e66f(void)

{
  return 1;
}

/* 1006e673  FUN_1006e673  (8 bytes)
 * undefined FUN_1006e673()
 */
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void __fastcall FUN_1006e673(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  DWORD *pDVar3;
  undefined4 unaff_EBX;
  undefined1 *puVar4;
  int unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  *(int *)(iVar1 + -4) = unaff_EBP;
  *(undefined4 *)(iVar1 + -8) = 0xffffffff;
  *(undefined **)(iVar1 + -0xc) = &DAT_10081fe0;
  *(code **)(iVar1 + -0x10) = FUN_10072fe4;
  *(void **)(iVar1 + -0x14) = ExceptionList;
  ExceptionList = (void *)(iVar1 + -0x14);
  *(undefined4 *)(iVar1 + -0x18) = param_1;
  *(undefined4 *)(iVar1 + -0x1c) = param_1;
  *(undefined4 *)(iVar1 + -0x20) = unaff_EBX;
  *(undefined4 *)(iVar1 + -0x24) = unaff_ESI;
  puVar4 = (undefined1 *)(iVar1 + -0x28);
  *(undefined4 *)(iVar1 + -0x28) = unaff_EDI;
  *(int *)(iVar1 + -0x1c) = iVar1 + -0x28;
  *(undefined4 *)(iVar1 + -8) = 0;
  *(undefined4 *)(iVar1 + -0x2c) = 0x1006e917;
  pDVar3 = FUN_1006e7e1();
  if (pDVar3[0x18] != 0) {
    *(undefined4 *)(iVar1 + -8) = 1;
    *(undefined4 *)(iVar1 + -0x2c) = 0x1006e928;
    pDVar3 = FUN_1006e7e1();
    pcVar2 = (code *)pDVar3[0x18];
    puVar4 = (undefined1 *)(iVar1 + -0x2c);
    *(undefined4 *)(iVar1 + -0x2c) = 0x1006e92b;
    (*pcVar2)();
    *(undefined4 *)(iVar1 + -8) = 0;
  }
  *(undefined4 *)(iVar1 + -8) = 0xffffffff;
  *(undefined4 *)(puVar4 + -4) = 0x1006e944;
  FUN_100742ee();
  return;
}

/* 1006e67b  FUN_1006e67b  (86 bytes)
 * undefined FUN_1006e67b(int param_1)
 * called by: FUN_1006df89, FUN_1006e43f
 */
void __cdecl FUN_1006e67b(int param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10081fd0;
  pcStack_10 = FUN_10072fe4;
  local_14 = ExceptionList;
  if ((param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(undefined **)(*(int *)(param_1 + 0x1c) + 4),
     UNRECOVERED_JUMPTABLE != (undefined *)0x0)) {
    local_8 = 0;
    ExceptionList = &local_14;
    FUN_1006afd8(*(undefined4 *)(param_1 + 0x18),UNRECOVERED_JUMPTABLE);
  }
  ExceptionList = local_14;
  return;
}

/* 1006e6d1  FUN_1006e6d1  (9 bytes)
 * undefined FUN_1006e6d1()
 */
bool FUN_1006e6d1(void)

{
  int unaff_EBP;
  
  return *(char *)(unaff_EBP + 0xc) != '\0';
}

/* 1006e6da  FUN_1006e6da  (8 bytes)
 * undefined FUN_1006e6da()
 */
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void __fastcall FUN_1006e6da(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  DWORD *pDVar3;
  undefined4 unaff_EBX;
  undefined1 *puVar4;
  int unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  *(int *)(iVar1 + -4) = unaff_EBP;
  *(undefined4 *)(iVar1 + -8) = 0xffffffff;
  *(undefined **)(iVar1 + -0xc) = &DAT_10081fe0;
  *(code **)(iVar1 + -0x10) = FUN_10072fe4;
  *(void **)(iVar1 + -0x14) = ExceptionList;
  ExceptionList = (void *)(iVar1 + -0x14);
  *(undefined4 *)(iVar1 + -0x18) = param_1;
  *(undefined4 *)(iVar1 + -0x1c) = param_1;
  *(undefined4 *)(iVar1 + -0x20) = unaff_EBX;
  *(undefined4 *)(iVar1 + -0x24) = unaff_ESI;
  puVar4 = (undefined1 *)(iVar1 + -0x28);
  *(undefined4 *)(iVar1 + -0x28) = unaff_EDI;
  *(int *)(iVar1 + -0x1c) = iVar1 + -0x28;
  *(undefined4 *)(iVar1 + -8) = 0;
  *(undefined4 *)(iVar1 + -0x2c) = 0x1006e917;
  pDVar3 = FUN_1006e7e1();
  if (pDVar3[0x18] != 0) {
    *(undefined4 *)(iVar1 + -8) = 1;
    *(undefined4 *)(iVar1 + -0x2c) = 0x1006e928;
    pDVar3 = FUN_1006e7e1();
    pcVar2 = (code *)pDVar3[0x18];
    puVar4 = (undefined1 *)(iVar1 + -0x2c);
    *(undefined4 *)(iVar1 + -0x2c) = 0x1006e92b;
    (*pcVar2)();
    *(undefined4 *)(iVar1 + -8) = 0;
  }
  *(undefined4 *)(iVar1 + -8) = 0xffffffff;
  *(undefined4 *)(puVar4 + -4) = 0x1006e944;
  FUN_100742ee();
  return;
}

/* 1006e6e2  FUN_1006e6e2  (35 bytes)
 * int FUN_1006e6e2(int param_1, int * param_2)
 * called by: FUN_1006e4b7
 */
int __cdecl FUN_1006e6e2(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2[1];
  iVar2 = *param_2 + param_1;
  if (-1 < iVar1) {
    iVar2 = iVar2 + *(int *)(*(int *)(iVar1 + param_1) + param_2[2]) + iVar1;
  }
  return iVar2;
}

/* 1006e75c  FUN_1006e75c  (84 bytes)
 * undefined4 FUN_1006e75c(void)
 * called by: FUN_1006ccfc
 */
undefined4 FUN_1006e75c(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_1006dc66();
  DAT_10097780 = TlsAlloc();
  if (DAT_10097780 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_10074261(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10097780,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1006e7ce((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}

/* 1006e7b0  FUN_1006e7b0  (30 bytes)
 * undefined FUN_1006e7b0(void)
 * called by: FUN_1006ccfc
 */
void FUN_1006e7b0(void)

{
  FUN_1006dc8f();
  if (DAT_10097780 != 0xffffffff) {
    TlsFree(DAT_10097780);
    DAT_10097780 = 0xffffffff;
  }
  return;
}

/* 1006e7ce  FUN_1006e7ce  (19 bytes)
 * undefined FUN_1006e7ce(int param_1)
 * called by: FUN_1006e75c, FUN_1006e7e1
 */
void __cdecl FUN_1006e7ce(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_10097f80;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}

/* 1006e7e1  FUN_1006e7e1  (103 bytes)
 * DWORD * FUN_1006e7e1(void)
 * called by: FUN_1006b0e4, FUN_1006c04d, FUN_1006df89, FUN_1006e13c, FUN_1006e372, FUN_1006e43f, FUN_1006e8e8, FUN_1006edb4, FUN_1006edbd, FUN_10075dc7, _rand
 */
DWORD * FUN_1006e7e1(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_10097780);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_10074261(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10097780,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1006e7ce((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_1006e83c;
      }
    }
    __amsg_exit(0x10);
  }
LAB_1006e83c:
  SetLastError(dwErrCode);
  return lpTlsValue;
}

/* 1006e848  FUN_1006e848  (160 bytes)
 * undefined FUN_1006e848(LPVOID param_1)
 * called by: FUN_1006ccfc
 */
void __cdecl FUN_1006e848(LPVOID param_1)

{
  if (DAT_10097780 != 0xffffffff) {
    if ((param_1 != (LPVOID)0x0) || (param_1 = TlsGetValue(DAT_10097780), param_1 != (LPVOID)0x0)) {
      if (*(LPVOID *)((int)param_1 + 0x24) != (LPVOID)0x0) {
        FUN_1006c158(*(LPVOID *)((int)param_1 + 0x24));
      }
      if (*(LPVOID *)((int)param_1 + 0x28) != (LPVOID)0x0) {
        FUN_1006c158(*(LPVOID *)((int)param_1 + 0x28));
      }
      if (*(LPVOID *)((int)param_1 + 0x30) != (LPVOID)0x0) {
        FUN_1006c158(*(LPVOID *)((int)param_1 + 0x30));
      }
      if (*(LPVOID *)((int)param_1 + 0x38) != (LPVOID)0x0) {
        FUN_1006c158(*(LPVOID *)((int)param_1 + 0x38));
      }
      if (*(LPVOID *)((int)param_1 + 0x40) != (LPVOID)0x0) {
        FUN_1006c158(*(LPVOID *)((int)param_1 + 0x40));
      }
      if (*(LPVOID *)((int)param_1 + 0x44) != (LPVOID)0x0) {
        FUN_1006c158(*(LPVOID *)((int)param_1 + 0x44));
      }
      if (*(undefined **)((int)param_1 + 0x50) != &DAT_10097f80) {
        FUN_1006c158(*(undefined **)((int)param_1 + 0x50));
      }
      FUN_1006c158(param_1);
    }
    TlsSetValue(DAT_10097780,(LPVOID)0x0);
    return;
  }
  return;
}

/* 1006e8e8  FUN_1006e8e8  (86 bytes)
 * undefined FUN_1006e8e8(void)
 * called by: FUN_1006df89, FUN_1006e949, FUN_10070e84
 */
void FUN_1006e8e8(void)

{
  DWORD *pDVar1;
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10081fe0;
  pcStack_10 = FUN_10072fe4;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  pDVar1 = FUN_1006e7e1();
  if (pDVar1[0x18] != 0) {
    local_8 = 1;
    pDVar1 = FUN_1006e7e1();
    (*(code *)pDVar1[0x18])();
  }
  local_8 = 0xffffffff;
  FUN_100742ee();
  return;
}

/* 1006e930  FUN_1006e930  (4 bytes)
 * undefined FUN_1006e930()
 */
undefined4 FUN_1006e930(void)

{
  return 1;
}

/* 1006e949  FUN_1006e949  (79 bytes)
 * undefined FUN_1006e949(void)
 * called by: FUN_1006b20f, FUN_1006deee, FUN_1006df89, FUN_1006e243, FUN_1006e4b7
 */
void FUN_1006e949(void)

{
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10081ff8;
  pcStack_10 = FUN_10072fe4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (PTR_FUN_10097784 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*(code *)PTR_FUN_10097784)();
  }
  local_8 = 0xffffffff;
  FUN_1006e8e8();
  return;
}

/* 1006e986  FUN_1006e986  (4 bytes)
 * undefined FUN_1006e986()
 */
undefined4 FUN_1006e986(void)

{
  return 1;
}

/* 1006e99f  FUN_1006e99f  (168 bytes)
 * undefined FUN_1006e99f()
 */
void FUN_1006e99f(void)

{
  int iVar1;
  undefined **ppuVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = 0x14;
  if (DAT_101934e0 == 0) {
    iVar1 = 0x200;
  }
  else if (0x13 < DAT_101934e0) goto LAB_1006e9be;
  DAT_101934e0 = iVar1;
LAB_1006e9be:
  DAT_101924c4 = FUN_10074261(DAT_101934e0,4);
  if (DAT_101924c4 == (int *)0x0) {
    DAT_101934e0 = 0x14;
    DAT_101924c4 = FUN_10074261(0x14,4);
    if (DAT_101924c4 == (int *)0x0) {
      __amsg_exit(0x1a);
    }
  }
  iVar1 = 0;
  ppuVar2 = &PTR_DAT_10097788;
  do {
    *(undefined ***)(iVar1 + (int)DAT_101924c4) = ppuVar2;
    ppuVar2 = ppuVar2 + 8;
    iVar1 = iVar1 + 4;
  } while ((int)ppuVar2 < 0x10097a08);
  uVar3 = 0;
  puVar4 = &DAT_10097798;
  do {
    iVar1 = *(int *)((&DAT_101923c0)[(int)uVar3 >> 5] + (uVar3 & 0x1f) * 0x24);
    if ((iVar1 == -1) || (iVar1 == 0)) {
      *puVar4 = 0xffffffff;
    }
    puVar4 = puVar4 + 8;
    uVar3 = uVar3 + 1;
  } while ((int)puVar4 < 0x100977f8);
  return;
}

/* 1006ea47  FUN_1006ea47  (149 bytes)
 * undefined FUN_1006ea47()
 */
int FUN_1006ea47(void)

{
  FILE *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_1006ec94();
  if (DAT_10191df4 == '\0') {
    return iVar2;
  }
  iVar4 = 0;
  FUN_1006dcfb(2);
  iVar2 = 3;
  if (3 < DAT_101934e0) {
    do {
      iVar5 = iVar2 * 4;
      pFVar1 = *(FILE **)(iVar5 + DAT_101924c4);
      if (pFVar1 != (FILE *)0x0) {
        if (((pFVar1->_flag & 0x83) != 0) && (iVar3 = FUN_1006b37a(pFVar1), iVar3 != -1)) {
          iVar4 = iVar4 + 1;
        }
        if (0x13 < iVar2) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar5 + DAT_101924c4) + 0x20));
          FUN_1006c158(*(LPVOID *)(iVar5 + DAT_101924c4));
          *(undefined4 *)(iVar5 + DAT_101924c4) = 0;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_101934e0);
  }
  FUN_1006dd5c(2);
  return iVar4;
}

/* 1006ea5b  FUN_1006ea5b  (47 bytes)
 * undefined FUN_1006ea5b(uint param_1)
 * called by: FUN_1006b37a, FUN_1006b3f7, FUN_1006b57a, FUN_1006b633, FUN_1006b7df
 */
void __cdecl FUN_1006ea5b(uint param_1)

{
  if ((0x10097787 < param_1) && (param_1 < 0x100979e9)) {
    FUN_1006dcfb(((int)(param_1 + 0xeff68878) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}

/* 1006ea8a  FUN_1006ea8a  (35 bytes)
 * undefined FUN_1006ea8a(int param_1, int param_2)
 * called by: FUN_1006ec9d, FUN_1006f875
 */
void __cdecl FUN_1006ea8a(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1006dcfb(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}

/* 1006eaad  FUN_1006eaad  (47 bytes)
 * undefined FUN_1006eaad(uint param_1)
 * called by: FUN_1006b37a, FUN_1006b3f7, FUN_1006b57a, FUN_1006b633, FUN_1006b74a, FUN_1006b7df
 */
void __cdecl FUN_1006eaad(uint param_1)

{
  if ((0x10097787 < param_1) && (param_1 < 0x100979e9)) {
    FUN_1006dd5c(((int)(param_1 + 0xeff68878) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}

/* 1006eadc  FUN_1006eadc  (35 bytes)
 * undefined FUN_1006eadc(int param_1, int param_2)
 * called by: FUN_1006ec9d, FUN_1006f875
 */
void __cdecl FUN_1006eadc(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1006dd5c(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}

/* 1006eaff  FUN_1006eaff  (93 bytes)
 * undefined4 FUN_1006eaff(uint param_1)
 * called by: FUN_100746fa, __fclose_lk
 */
undefined4 __cdecl FUN_1006eaff(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_101924c0) &&
     ((*(byte *)((&DAT_101923c0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100745e6(param_1);
    uVar1 = FUN_1006eb5c(param_1);
    FUN_10074645(param_1);
    return uVar1;
  }
  pDVar2 = FUN_1006edb4();
  *pDVar2 = 9;
  pDVar2 = FUN_1006edbd();
  *pDVar2 = 0;
  return 0xffffffff;
}

/* 1006eb5c  FUN_1006eb5c  (131 bytes)
 * undefined4 FUN_1006eb5c(uint param_1)
 * called by: FUN_1006eaff
 */
undefined4 __cdecl FUN_1006eb5c(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_100745a4(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_100745a4(2);
      iVar2 = FUN_100745a4(1);
      if (iVar2 == iVar1) goto LAB_1006ebaa;
    }
    hObject = (HANDLE)FUN_100745a4(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1006ebac;
    }
  }
LAB_1006ebaa:
  DVar4 = 0;
LAB_1006ebac:
  FUN_10074525(param_1);
  *(undefined1 *)((&DAT_101923c0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_1006ed41(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

/* 1006ec0a  FUN_1006ec0a  (46 bytes)
 * int FUN_1006ec0a(int * param_1)
 * called by: FUN_1006ec9d
 */
int __cdecl FUN_1006ec0a(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1006ec38(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_10074667(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}

/* 1006ec38  FUN_1006ec38  (92 bytes)
 * undefined4 FUN_1006ec38(int * param_1)
 * called by: FUN_1006b5a6, FUN_1006b80e, FUN_1006ec0a, __fclose_lk
 */
undefined4 __cdecl FUN_1006ec38(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    uVar3 = *param_1 - param_1[2];
    if (0 < (int)uVar3) {
      uVar1 = FUN_1006f93d(param_1[4],(char *)param_1[2],uVar3);
      if (uVar1 == uVar3) {
        if ((param_1[3] & 0x80U) != 0) {
          param_1[3] = param_1[3] & 0xfffffffd;
        }
      }
      else {
        param_1[3] = param_1[3] | 0x20;
        uVar2 = 0xffffffff;
      }
    }
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return uVar2;
}

/* 1006ec94  FUN_1006ec94  (9 bytes)
 * undefined FUN_1006ec94()
 * called by: FUN_1006ea47
 */
void FUN_1006ec94(void)

{
  FUN_1006ec9d(1);
  return;
}

/* 1006ec9d  FUN_1006ec9d  (164 bytes)
 * int FUN_1006ec9d(int param_1)
 * called by: FUN_1006ec94
 */
int __cdecl FUN_1006ec9d(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  FUN_1006dcfb(2);
  iVar4 = 0;
  if (0 < DAT_101934e0) {
    do {
      iVar2 = *(int *)(DAT_101924c4 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_1006ea8a(iVar4,iVar2);
        piVar1 = *(int **)(DAT_101924c4 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_1006ec0a(piVar1);
            if (iVar2 != -1) {
              iVar3 = iVar3 + 1;
            }
          }
          else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
            iVar2 = FUN_1006ec0a(piVar1);
            if (iVar2 == -1) {
              iVar5 = -1;
            }
          }
        }
        FUN_1006eadc(iVar4,*(int *)(DAT_101924c4 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_101934e0);
  }
  FUN_1006dd5c(2);
  if (param_1 != 1) {
    iVar3 = iVar5;
  }
  return iVar3;
}

/* 1006ed41  FUN_1006ed41  (115 bytes)
 * undefined FUN_1006ed41(uint param_1)
 * called by: FUN_1006eb5c, FUN_1006f03b, FUN_1006f1ef, FUN_1006f9a2, FUN_100746fa
 */
void __cdecl FUN_1006ed41(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_1006edbd();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_10097a08;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_1006edb4();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x10097a0c);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x10097b70);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_1006edb4();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_1006edb4();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_1006edb4();
  *pDVar1 = 0x16;
  return;
}

/* 1006edb4  FUN_1006edb4  (9 bytes)
 * DWORD * FUN_1006edb4(void)
 * called by: FUN_1006b419, FUN_1006b5a6, FUN_1006eaff, FUN_1006ed41, FUN_1006efd6, FUN_1006f03b, FUN_1006f18a, FUN_1006f1ef, FUN_1006f93d, FUN_1006f9a2, FUN_1007374c, FUN_100744a9, ... (20 total)
 */
DWORD * FUN_1006edb4(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1006e7e1();
  return pDVar1 + 2;
}

/* 1006edbd  FUN_1006edbd  (9 bytes)
 * DWORD * FUN_1006edbd(void)
 * called by: FUN_1006eaff, FUN_1006ed41, FUN_1006efd6, FUN_1006f18a, FUN_1006f1ef, FUN_1006f93d, FUN_1006f9a2, FUN_100744a9, FUN_10074525, FUN_100745a4, FUN_10074667, FUN_100746fa, ... (13 total)
 */
DWORD * FUN_1006edbd(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1006e7e1();
  return pDVar1 + 3;
}

/* 1006edc6  FUN_1006edc6  (444 bytes)
 * undefined FUN_1006edc6(void)
 * called by: FUN_1006ccfc
 */
void FUN_1006edc6(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  HANDLE hFile;
  UINT *pUVar5;
  int iVar6;
  uint uVar7;
  UINT UVar8;
  UINT UVar9;
  _STARTUPINFOA local_4c;
  byte *local_8;
  
  puVar2 = _malloc(0x480);
  if (puVar2 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_101924c0 = 0x20;
  DAT_101923c0 = puVar2;
  for (; puVar2 < DAT_101923c0 + 0x120; puVar2 = puVar2 + 9) {
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = 0xffffffff;
    puVar2[2] = 0;
    *(undefined1 *)((int)puVar2 + 5) = 10;
  }
  GetStartupInfoA(&local_4c);
  if ((local_4c.cbReserved2 != 0) && ((UINT *)local_4c.lpReserved2 != (UINT *)0x0)) {
    UVar8 = *(UINT *)local_4c.lpReserved2;
    pUVar5 = (UINT *)((int)local_4c.lpReserved2 + 4);
    local_8 = (byte *)((int)pUVar5 + UVar8);
    if (0x7ff < (int)UVar8) {
      UVar8 = 0x800;
    }
    UVar9 = UVar8;
    if ((int)DAT_101924c0 < (int)UVar8) {
      puVar2 = &DAT_101923c4;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_101924c0;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_101924c0 = DAT_101924c0 + 0x20;
        *puVar2 = puVar3;
        puVar1 = puVar3;
        for (; puVar3 < puVar1 + 0x120; puVar3 = puVar3 + 9) {
          *(undefined1 *)(puVar3 + 1) = 0;
          *puVar3 = 0xffffffff;
          puVar3[2] = 0;
          *(undefined1 *)((int)puVar3 + 5) = 10;
          puVar1 = (undefined4 *)*puVar2;
        }
        puVar2 = puVar2 + 1;
        UVar9 = UVar8;
      } while ((int)DAT_101924c0 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_101923c0)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
          *puVar2 = *(undefined4 *)local_8;
          *(byte *)(puVar2 + 1) = (byte)*pUVar5;
        }
        local_8 = local_8 + 4;
        uVar7 = uVar7 + 1;
        pUVar5 = (UINT *)((int)pUVar5 + 1);
      } while ((int)uVar7 < (int)UVar9);
    }
  }
  iVar6 = 0;
  do {
    puVar2 = DAT_101923c0 + iVar6 * 9;
    if (DAT_101923c0[iVar6 * 9] == -1) {
      *(undefined1 *)(puVar2 + 1) = 0x81;
      if (iVar6 == 0) {
        DVar4 = 0xfffffff6;
      }
      else {
        DVar4 = 0xfffffff5 - (iVar6 != 1);
      }
      hFile = GetStdHandle(DVar4);
      if ((hFile != (HANDLE)0xffffffff) && (DVar4 = GetFileType(hFile), DVar4 != 0)) {
        *puVar2 = hFile;
        if ((DVar4 & 0xff) != 2) {
          if ((DVar4 & 0xff) == 3) {
            *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 8;
          }
          goto LAB_1006ef6b;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_1006ef6b:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_101924c0);
      return;
    }
  } while( true );
}

/* 1006ef82  FUN_1006ef82  (84 bytes)
 * undefined FUN_1006ef82(void)
 * called by: FUN_1006ccfc
 */
void FUN_1006ef82(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_101923c0;
  do {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      if (uVar2 < uVar2 + 0x480) {
        lpCriticalSection = (LPCRITICAL_SECTION)(uVar2 + 0xc);
        do {
          if (lpCriticalSection[-1].SpinCount != 0) {
            DeleteCriticalSection(lpCriticalSection);
          }
          uVar2 = uVar2 + 0x24;
          lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].OwningThread;
        } while (uVar2 < *puVar1 + 0x480);
      }
      FUN_1006c158((LPVOID)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x101924c0);
  return;
}

/* 1006efd6  FUN_1006efd6  (101 bytes)
 * DWORD FUN_1006efd6(uint param_1, LONG param_2, DWORD param_3)
 * called by: FUN_1006b419, FUN_1006b5a6, FUN_1006cea5
 */
DWORD __cdecl FUN_1006efd6(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_101924c0) &&
     ((*(byte *)((&DAT_101923c0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100745e6(param_1);
    DVar1 = FUN_1006f03b(param_1,param_2,param_3);
    FUN_10074645(param_1);
    return DVar1;
  }
  pDVar2 = FUN_1006edb4();
  *pDVar2 = 9;
  pDVar2 = FUN_1006edbd();
  *pDVar2 = 0;
  return 0xffffffff;
}

/* 1006f03b  FUN_1006f03b  (115 bytes)
 * DWORD FUN_1006f03b(uint param_1, LONG param_2, DWORD param_3)
 * called by: FUN_1006efd6, FUN_1006f1ef, FUN_1006f9a2, FUN_100746fa, FUN_100763ba
 */
DWORD __cdecl FUN_1006f03b(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  uint uVar4;
  
  hFile = (HANDLE)FUN_100745a4(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_1006edb4();
    *pDVar2 = 9;
  }
  else {
    DVar3 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
    if (DVar3 == 0xffffffff) {
      uVar4 = GetLastError();
    }
    else {
      uVar4 = 0;
    }
    if (uVar4 == 0) {
      pbVar1 = (byte *)((&DAT_101923c0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar3;
    }
    FUN_1006ed41(uVar4);
  }
  return 0xffffffff;
}

/* 1006f0ae  FUN_1006f0ae  (220 bytes)
 * uint FUN_1006f0ae(undefined4 * param_1)
 * called by: FUN_1006b662, FUN_10071944
 */
uint __cdecl FUN_1006f0ae(undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  uVar2 = param_1[3];
  if (((uVar2 & 0x83) != 0) && ((uVar2 & 0x40) == 0)) {
    if ((uVar2 & 2) == 0) {
      param_1[3] = uVar2 | 1;
      if ((uVar2 & 0x10c) == 0) {
        FUN_10073686(param_1);
      }
      else {
        *param_1 = param_1[2];
      }
      iVar3 = FUN_1006f18a(param_1[4],(char *)param_1[2],(char *)param_1[6]);
      param_1[1] = iVar3;
      if ((iVar3 != 0) && (iVar3 != -1)) {
        if ((param_1[3] & 0x82) == 0) {
          uVar2 = param_1[4];
          if (uVar2 == 0xffffffff) {
            puVar4 = &DAT_10097b70;
          }
          else {
            puVar4 = (undefined *)((&DAT_101923c0)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
          }
          if ((puVar4[4] & 0x82) == 0x82) {
            param_1[3] = param_1[3] | 0x2000;
          }
        }
        if (((param_1[6] == 0x200) && ((param_1[3] & 8) != 0)) && ((param_1[3] & 0x400) == 0)) {
          param_1[6] = 0x1000;
        }
        param_1[1] = iVar3 + -1;
        bVar1 = *(byte *)*param_1;
        *param_1 = (byte *)*param_1 + 1;
        return (uint)bVar1;
      }
      param_1[3] = param_1[3] | (-(uint)(iVar3 != 0) & 0x10) + 0x10;
      param_1[1] = 0;
    }
    else {
      param_1[3] = uVar2 | 0x20;
    }
  }
  return 0xffffffff;
}

/* 1006f18a  FUN_1006f18a  (101 bytes)
 * int FUN_1006f18a(uint param_1, char * param_2, char * param_3)
 * called by: FUN_1006b662, FUN_1006f0ae
 */
int __cdecl FUN_1006f18a(uint param_1,char *param_2,char *param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_101924c0) &&
     ((*(byte *)((&DAT_101923c0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100745e6(param_1);
    iVar1 = FUN_1006f1ef(param_1,param_2,param_3);
    FUN_10074645(param_1);
    return iVar1;
  }
  pDVar2 = FUN_1006edb4();
  *pDVar2 = 9;
  pDVar2 = FUN_1006edbd();
  *pDVar2 = 0;
  return -1;
}

/* 1006f1ef  FUN_1006f1ef  (473 bytes)
 * int FUN_1006f1ef(uint param_1, char * param_2, char * param_3)
 * called by: FUN_1006f18a, FUN_100746fa
 */
int __cdecl FUN_1006f1ef(uint param_1,char *param_2,char *param_3)

{
  int *piVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  BOOL BVar5;
  DWORD DVar6;
  DWORD *pDVar7;
  char *pcVar8;
  int iVar9;
  DWORD local_10;
  char *local_c;
  char local_5;
  
  local_c = (char *)0x0;
  if (param_3 != (char *)0x0) {
    piVar1 = &DAT_101923c0 + ((int)param_1 >> 5);
    iVar9 = (param_1 & 0x1f) * 0x24;
    bVar4 = *(byte *)((&DAT_101923c0)[(int)param_1 >> 5] + iVar9 + 4);
    if ((bVar4 & 2) == 0) {
      pcVar8 = param_2;
      if (((bVar4 & 0x48) != 0) &&
         (cVar3 = *(char *)((&DAT_101923c0)[(int)param_1 >> 5] + iVar9 + 5), cVar3 != '\n')) {
        param_3 = param_3 + -1;
        *param_2 = cVar3;
        pcVar8 = param_2 + 1;
        local_c = (char *)0x1;
        *(undefined1 *)(*piVar1 + 5 + iVar9) = 10;
      }
      BVar5 = ReadFile(*(HANDLE *)(*piVar1 + iVar9),pcVar8,(DWORD)param_3,&local_10,
                       (LPOVERLAPPED)0x0);
      if (BVar5 == 0) {
        DVar6 = GetLastError();
        if (DVar6 == 5) {
          pDVar7 = FUN_1006edb4();
          *pDVar7 = 9;
          pDVar7 = FUN_1006edbd();
          *pDVar7 = 5;
        }
        else {
          if (DVar6 == 0x6d) {
            return 0;
          }
          FUN_1006ed41(DVar6);
        }
        return -1;
      }
      bVar4 = *(byte *)(*piVar1 + 4 + iVar9);
      if ((bVar4 & 0x80) == 0) {
        return (int)local_c + local_10;
      }
      if ((local_10 == 0) || (*param_2 != '\n')) {
        bVar4 = bVar4 & 0xfb;
      }
      else {
        bVar4 = bVar4 | 4;
      }
      *(byte *)(*piVar1 + 4 + iVar9) = bVar4;
      param_3 = param_2;
      local_c = param_2 + (int)local_c + local_10;
      pcVar8 = param_2;
      if (param_2 < local_c) {
        do {
          cVar3 = *param_3;
          if (cVar3 == '\x1a') {
            pbVar2 = (byte *)(*piVar1 + 4 + iVar9);
            bVar4 = *pbVar2;
            if ((bVar4 & 0x40) == 0) {
              *pbVar2 = bVar4 | 2;
            }
            break;
          }
          if (cVar3 == '\r') {
            if (param_3 < local_c + -1) {
              if (param_3[1] == '\n') {
                param_3 = param_3 + 2;
                goto LAB_1006f37a;
              }
              *pcVar8 = '\r';
              pcVar8 = pcVar8 + 1;
              param_3 = param_3 + 1;
            }
            else {
              param_3 = param_3 + 1;
              BVar5 = ReadFile(*(HANDLE *)(*piVar1 + iVar9),&local_5,1,&local_10,(LPOVERLAPPED)0x0);
              if (((BVar5 == 0) && (DVar6 = GetLastError(), DVar6 != 0)) || (local_10 == 0)) {
LAB_1006f394:
                *pcVar8 = '\r';
LAB_1006f397:
                pcVar8 = pcVar8 + 1;
              }
              else if ((*(byte *)(*piVar1 + 4 + iVar9) & 0x48) == 0) {
                if ((pcVar8 == param_2) && (local_5 == '\n')) {
LAB_1006f37a:
                  *pcVar8 = '\n';
                  goto LAB_1006f397;
                }
                FUN_1006f03b(param_1,-1,1);
                if (local_5 != '\n') goto LAB_1006f394;
              }
              else {
                if (local_5 == '\n') goto LAB_1006f37a;
                *pcVar8 = '\r';
                pcVar8 = pcVar8 + 1;
                *(char *)(*piVar1 + 5 + iVar9) = local_5;
              }
            }
          }
          else {
            *pcVar8 = cVar3;
            pcVar8 = pcVar8 + 1;
            param_3 = param_3 + 1;
          }
        } while (param_3 < local_c);
      }
      return (int)pcVar8 - (int)param_2;
    }
  }
  return 0;
}

/* 1006f3d0  FUN_1006f3d0  (664 bytes)
 * undefined4 * FUN_1006f3d0(undefined4 * param_1, undefined4 * param_2, uint param_3)
 * called by: FUN_1006b662, FUN_1006b80e, FUN_1006dd71, FUN_100733c2
 */
undefined4 * __cdecl FUN_1006f3d0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar4 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_1006f587_caseD_2;
        case 3:
          goto switchD_1006f587_caseD_3;
        }
        goto switchD_1006f587_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_1006f587_caseD_0;
      case 1:
        goto switchD_1006f587_caseD_1;
      case 2:
        goto switchD_1006f587_caseD_2;
      case 3:
        goto switchD_1006f587_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_1006f587_caseD_2;
            case 3:
              goto switchD_1006f587_caseD_3;
            }
            goto switchD_1006f587_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_1006f587_caseD_2;
            case 3:
              goto switchD_1006f587_caseD_3;
            }
            goto switchD_1006f587_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_1006f587_caseD_2;
            case 3:
              goto switchD_1006f587_caseD_3;
            }
            goto switchD_1006f587_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_1006f587_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_1006f587_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_1006f587_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_1006f587_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_1006f405_caseD_2;
      case 3:
        goto switchD_1006f405_caseD_3;
      }
      goto switchD_1006f405_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_1006f405_caseD_0;
    case 1:
      goto switchD_1006f405_caseD_1;
    case 2:
      goto switchD_1006f405_caseD_2;
    case 3:
      goto switchD_1006f405_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_1006f405_caseD_2;
          case 3:
            goto switchD_1006f405_caseD_3;
          }
          goto switchD_1006f405_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_1006f405_caseD_2;
          case 3:
            goto switchD_1006f405_caseD_3;
          }
          goto switchD_1006f405_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_1006f405_caseD_2;
          case 3:
            goto switchD_1006f405_caseD_3;
          }
          goto switchD_1006f405_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_1006f405_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_1006f405_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_1006f405_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_1006f405_caseD_0:
  return param_1;
}

/* 1006f705  FUN_1006f705  (368 bytes)
 * undefined4 * FUN_1006f705(LPCSTR param_1, char * param_2, uint param_3, undefined4 * param_4)
 * called by: FUN_1006b74a
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl FUN_1006f705(LPCSTR param_1,char *param_2,uint param_3,undefined4 *param_4)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  bVar4 = false;
  bVar3 = false;
  cVar1 = *param_2;
  if (cVar1 == 'a') {
    uVar5 = 0x109;
  }
  else {
    if (cVar1 == 'r') {
      uVar5 = 0;
      uVar6 = DAT_10191fe8 | 1;
      goto LAB_1006f746;
    }
    if (cVar1 != 'w') {
      return (undefined4 *)0x0;
    }
    uVar5 = 0x301;
  }
  uVar6 = DAT_10191fe8 | 2;
LAB_1006f746:
  bVar2 = true;
LAB_1006f749:
  cVar1 = param_2[1];
  param_2 = param_2 + 1;
  if ((cVar1 == '\0') || (!bVar2)) {
    uVar5 = FUN_100746fa(param_1,uVar5,param_3,0x1a4);
    if ((int)uVar5 < 0) {
      return (undefined4 *)0x0;
    }
    _DAT_10191e90 = _DAT_10191e90 + 1;
    param_4[3] = uVar6;
    param_4[1] = 0;
    *param_4 = 0;
    param_4[2] = 0;
    param_4[7] = 0;
    param_4[4] = uVar5;
    return param_4;
  }
  if (cVar1 < 'U') {
    if (cVar1 == 'T') {
      if ((uVar5 & 0x1000) == 0) {
        uVar5 = uVar5 | 0x1000;
        goto LAB_1006f749;
      }
    }
    else if (cVar1 == '+') {
      if ((uVar5 & 2) == 0) {
        uVar5 = uVar5 & 0xfffffffe | 2;
        uVar6 = uVar6 & 0xfffffffc | 0x80;
        goto LAB_1006f749;
      }
    }
    else if (cVar1 == 'D') {
      if ((uVar5 & 0x40) == 0) {
        uVar5 = uVar5 | 0x40;
        goto LAB_1006f749;
      }
    }
    else if (cVar1 == 'R') {
      if (!bVar3) {
        bVar3 = true;
        uVar5 = uVar5 | 0x10;
        goto LAB_1006f749;
      }
    }
    else if ((cVar1 == 'S') && (!bVar3)) {
      bVar3 = true;
      uVar5 = uVar5 | 0x20;
      goto LAB_1006f749;
    }
  }
  else {
    if (cVar1 == 'b') {
      if ((uVar5 & 0xc000) != 0) goto LAB_1006f829;
      uVar5 = uVar5 | 0x8000;
      goto LAB_1006f749;
    }
    if (cVar1 == 'c') {
      if (!bVar4) {
        bVar4 = true;
        uVar6 = uVar6 | 0x4000;
        goto LAB_1006f749;
      }
    }
    else {
      if (cVar1 != 'n') {
        if ((cVar1 != 't') || ((uVar5 & 0xc000) != 0)) goto LAB_1006f829;
        uVar5 = uVar5 | 0x4000;
        goto LAB_1006f749;
      }
      if (!bVar4) {
        bVar4 = true;
        uVar6 = uVar6 & 0xffffbfff;
        goto LAB_1006f749;
      }
    }
  }
LAB_1006f829:
  bVar2 = false;
  goto LAB_1006f749;
}

/* 1006f875  FUN_1006f875  (200 bytes)
 * undefined4 * FUN_1006f875(void)
 * called by: FUN_1006b74a
 */
undefined4 * FUN_1006f875(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x0;
  FUN_1006dcfb(2);
  iVar3 = 0;
  if (0 < DAT_101934e0) {
    do {
      iVar1 = *(int *)(DAT_101924c4 + iVar3 * 4);
      if (iVar1 == 0) {
        iVar3 = iVar3 * 4;
        pvVar2 = _malloc(0x38);
        *(void **)(iVar3 + DAT_101924c4) = pvVar2;
        if (*(int *)(iVar3 + DAT_101924c4) != 0) {
          InitializeCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_101924c4) + 0x20));
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_101924c4) + 0x20));
          puVar4 = *(undefined4 **)(iVar3 + DAT_101924c4);
LAB_1006f919:
          if (puVar4 != (undefined4 *)0x0) {
            puVar4[4] = 0xffffffff;
            puVar4[1] = 0;
            puVar4[3] = 0;
            puVar4[2] = 0;
            *puVar4 = 0;
            puVar4[7] = 0;
          }
        }
        break;
      }
      if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
        FUN_1006ea8a(iVar3,iVar1);
        iVar1 = *(int *)(DAT_101924c4 + iVar3 * 4);
        if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
          puVar4 = *(undefined4 **)(DAT_101924c4 + iVar3 * 4);
          goto LAB_1006f919;
        }
        FUN_1006eadc(iVar3,iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_101934e0);
  }
  FUN_1006dd5c(2);
  return puVar4;
}

/* 1006f93d  FUN_1006f93d  (101 bytes)
 * int FUN_1006f93d(uint param_1, char * param_2, uint param_3)
 * called by: FUN_1006b80e, FUN_1006cea5, FUN_1006ec38
 */
int __cdecl FUN_1006f93d(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_101924c0) &&
     ((*(byte *)((&DAT_101923c0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100745e6(param_1);
    iVar1 = FUN_1006f9a2(param_1,param_2,param_3);
    FUN_10074645(param_1);
    return iVar1;
  }
  pDVar2 = FUN_1006edb4();
  *pDVar2 = 9;
  pDVar2 = FUN_1006edbd();
  *pDVar2 = 0;
  return -1;
}

/* 1006f9a2  FUN_1006f9a2  (395 bytes)
 * int FUN_1006f9a2(DWORD param_1, char * param_2, uint param_3)
 * called by: FUN_1006f93d, FUN_100763ba
 */
int __cdecl FUN_1006f9a2(DWORD param_1,char *param_2,uint param_3)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  BOOL BVar6;
  DWORD *pDVar7;
  char local_418 [1028];
  int local_14;
  DWORD local_10;
  DWORD local_c;
  char *local_8;
  
  local_c = 0;
  local_14 = 0;
  if (param_3 == 0) {
LAB_1006f9bb:
    iVar4 = 0;
  }
  else {
    piVar1 = &DAT_101923c0 + ((int)param_1 >> 5);
    iVar4 = (param_1 & 0x1f) * 0x24;
    if ((*(byte *)(*piVar1 + 4 + iVar4) & 0x20) != 0) {
      FUN_1006f03b(param_1,0,2);
    }
    if ((*(byte *)((undefined4 *)(*piVar1 + iVar4) + 1) & 0x80) == 0) {
      BVar6 = WriteFile(*(HANDLE *)(*piVar1 + iVar4),param_2,param_3,&local_10,(LPOVERLAPPED)0x0);
      if (BVar6 == 0) {
        param_1 = GetLastError();
      }
      else {
        local_c = local_10;
        param_1 = 0;
      }
LAB_1006fa8a:
      if (local_c != 0) {
        return local_c - local_14;
      }
      if (param_1 == 0) goto LAB_1006fafc;
      if (param_1 == 5) {
        pDVar7 = FUN_1006edb4();
        *pDVar7 = 9;
        pDVar7 = FUN_1006edbd();
        *pDVar7 = 5;
      }
      else {
        FUN_1006ed41(param_1);
      }
    }
    else {
      local_8 = param_2;
      param_1 = 0;
      if (param_3 != 0) {
        do {
          pcVar5 = local_418;
          do {
            if (param_3 <= (uint)((int)local_8 - (int)param_2)) break;
            pcVar2 = local_8 + 1;
            cVar3 = *local_8;
            local_8 = pcVar2;
            if (cVar3 == '\n') {
              local_14 = local_14 + 1;
              *pcVar5 = '\r';
              pcVar5 = pcVar5 + 1;
            }
            *pcVar5 = cVar3;
            pcVar5 = pcVar5 + 1;
          } while ((int)pcVar5 - (int)local_418 < 0x400);
          BVar6 = WriteFile(*(HANDLE *)(*piVar1 + iVar4),local_418,(int)pcVar5 - (int)local_418,
                            &local_10,(LPOVERLAPPED)0x0);
          if (BVar6 == 0) {
            param_1 = GetLastError();
            goto LAB_1006fa8a;
          }
          local_c = local_c + local_10;
          if (((int)local_10 < (int)pcVar5 - (int)local_418) ||
             (param_3 <= (uint)((int)local_8 - (int)param_2))) goto LAB_1006fa8a;
        } while( true );
      }
LAB_1006fafc:
      if (((*(byte *)(*piVar1 + 4 + iVar4) & 0x40) != 0) && (*param_2 == '\x1a')) goto LAB_1006f9bb;
      pDVar7 = FUN_1006edb4();
      *pDVar7 = 0x1c;
      pDVar7 = FUN_1006edbd();
      *pDVar7 = 0;
    }
    iVar4 = -1;
  }
  return iVar4;
}

/* 1006fb2d  FUN_1006fb2d  (127 bytes)
 * undefined FUN_1006fb2d(uint * param_1, byte.conflict * param_2)
 * called by: FUN_1006b918
 */
void __thiscall FUN_1006fb2d(void *this,uint *param_1,byte_conflict *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ushort local_1c [6];
  uint local_10;
  undefined4 uStack_c;
  int local_8;
  
  uVar3 = 0;
  uVar1 = FUN_100749c9(this,local_1c,&local_8,param_2,0,0,0,0);
  if ((uVar1 & 4) == 0) {
    iVar2 = FUN_10073eab(local_1c,&local_10);
    if (((uVar1 & 2) != 0) || (iVar2 == 1)) {
      uVar3 = 0x80;
    }
    if (((uVar1 & 1) != 0) || (iVar2 == 2)) {
      uVar3 = uVar3 | 0x100;
    }
  }
  else {
    uVar3 = 0x200;
    local_10 = 0;
    uStack_c = 0;
  }
  *param_1 = uVar3;
  *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_c,local_10);
  param_1[1] = local_8 - (int)param_2;
  return;
}

/* 1006fcf3  FUN_1006fcf3  (7 bytes)
 * undefined FUN_1006fcf3(void)
 * called by: __ctrandisp1, __ctrandisp2
 */
void FUN_1006fcf3(void)

{
  char cVar1;
  ushort uVar2;
  int unaff_EBP;
  ushort in_FPUStatusWord;
  float10 in_ST0;
  
  *(byte *)(unaff_EBP + -0x2c8) = *(byte *)(unaff_EBP + -0x2c8) & 0xfe;
  if (DAT_10191db4 != 0) {
    return;
  }
  *(double *)(unaff_EBP + -0x2d0) = (double)in_ST0;
  cVar1 = *(char *)(unaff_EBP + -0x90);
  if (cVar1 != '\0') {
    if ((cVar1 != -1) && (cVar1 != -2)) {
      if (cVar1 == '\0') {
        return;
      }
      *(int *)(unaff_EBP + -0x8e) = (int)cVar1;
      goto LAB_1006fdc9;
    }
    uVar2 = *(ushort *)(unaff_EBP + -0x2ca) & 0x7ff0;
    if (uVar2 == 0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 4;
      in_ST0 = (float10)fscale(in_ST0,(float10)1536.0);
      if (ABS(in_ST0) < (float10)2.2250738585072014e-308) {
        in_ST0 = in_ST0 * (float10)0.0;
      }
      goto LAB_1006fdc9;
    }
    if (uVar2 == 0x7ff0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 3;
      in_ST0 = (float10)fscale(in_ST0,(float10)-1536.0);
      if ((float10)1.79769313486232e+308 < ABS(in_ST0)) {
        in_ST0 = in_ST0 * (float10)INFINITY;
      }
      goto LAB_1006fdc9;
    }
  }
  if ((*(ushort *)(unaff_EBP + -0xa4) & 0x20) != 0) {
    return;
  }
  if ((in_FPUStatusWord & 0x20) == 0) {
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x8e) = 8;
LAB_1006fdc9:
  *(int *)(unaff_EBP + -0x8a) = *(int *)(unaff_EBP + -0x94) + 1;
  if ((*(byte *)(unaff_EBP + -0x2c8) & 1) == 0) {
    *(undefined4 *)(unaff_EBP + -0x86) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -0x82) = *(undefined4 *)(unaff_EBP + 0xc);
    if (*(char *)(*(int *)(unaff_EBP + -0x94) + 0xd) != '\x01') {
      *(undefined4 *)(unaff_EBP + -0x7e) = *(undefined4 *)(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + -0x7a) = *(undefined4 *)(unaff_EBP + 0x14);
    }
  }
  *(double *)(unaff_EBP + -0x76) = (double)in_ST0;
  FUN_10074e9a((int)*(char *)(*(int *)(unaff_EBP + -0x94) + 0xe),(int *)(unaff_EBP + -0x8e),
               (ushort *)(unaff_EBP + -0xa4));
  return;
}

/* 1006fcfa  FUN_1006fcfa  (305 bytes)
 * undefined FUN_1006fcfa(void)
 * called by: __cintrindisp1, __cintrindisp2
 */
void FUN_1006fcfa(void)

{
  char cVar1;
  ushort uVar2;
  int unaff_EBP;
  ushort in_FPUStatusWord;
  float10 in_ST0;
  
  if (DAT_10191db4 != 0) {
    return;
  }
  *(double *)(unaff_EBP + -0x2d0) = (double)in_ST0;
  cVar1 = *(char *)(unaff_EBP + -0x90);
  if (cVar1 != '\0') {
    if ((cVar1 != -1) && (cVar1 != -2)) {
      if (cVar1 == '\0') {
        return;
      }
      *(int *)(unaff_EBP + -0x8e) = (int)cVar1;
      goto LAB_1006fdc9;
    }
    uVar2 = *(ushort *)(unaff_EBP + -0x2ca) & 0x7ff0;
    if (uVar2 == 0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 4;
      in_ST0 = (float10)fscale(in_ST0,(float10)1536.0);
      if (ABS(in_ST0) < (float10)2.2250738585072014e-308) {
        in_ST0 = in_ST0 * (float10)0.0;
      }
      goto LAB_1006fdc9;
    }
    if (uVar2 == 0x7ff0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 3;
      in_ST0 = (float10)fscale(in_ST0,(float10)-1536.0);
      if ((float10)1.79769313486232e+308 < ABS(in_ST0)) {
        in_ST0 = in_ST0 * (float10)INFINITY;
      }
      goto LAB_1006fdc9;
    }
  }
  if ((*(ushort *)(unaff_EBP + -0xa4) & 0x20) != 0) {
    return;
  }
  if ((in_FPUStatusWord & 0x20) == 0) {
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x8e) = 8;
LAB_1006fdc9:
  *(int *)(unaff_EBP + -0x8a) = *(int *)(unaff_EBP + -0x94) + 1;
  if ((*(byte *)(unaff_EBP + -0x2c8) & 1) == 0) {
    *(undefined4 *)(unaff_EBP + -0x86) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -0x82) = *(undefined4 *)(unaff_EBP + 0xc);
    if (*(char *)(*(int *)(unaff_EBP + -0x94) + 0xd) != '\x01') {
      *(undefined4 *)(unaff_EBP + -0x7e) = *(undefined4 *)(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + -0x7a) = *(undefined4 *)(unaff_EBP + 0x14);
    }
  }
  *(double *)(unaff_EBP + -0x76) = (double)in_ST0;
  FUN_10074e9a((int)*(char *)(*(int *)(unaff_EBP + -0x94) + 0xe),(int *)(unaff_EBP + -0x8e),
               (ushort *)(unaff_EBP + -0xa4));
  return;
}

/* 1006ffa4  FUN_1006ffa4  (7 bytes)
 * undefined FUN_1006ffa4()
 */
float10 FUN_1006ffa4(void)

{
  return (float10)0;
}

/* 1006ffdd  FUN_1006ffdd  (42 bytes)
 * undefined FUN_1006ffdd()
 */
float10 FUN_1006ffdd(void)

{
  int unaff_EBP;
  float10 in_ST0;
  unkbyte10 in_ST1;
  
  *(unkbyte10 *)(unaff_EBP + -0x9e) = in_ST1;
  if ((*(byte *)(unaff_EBP + -0x97) & 0x40) == 0) {
    *(undefined1 *)(unaff_EBP + -0x90) = 1;
  }
  else {
    *(undefined1 *)(unaff_EBP + -0x90) = 7;
  }
  return *(float10 *)(unaff_EBP + -0x9e) + in_ST0;
}

/* 10070007  FUN_10070007  (63 bytes)
 * undefined FUN_10070007()
 */
float10 FUN_10070007(void)

{
  float10 fVar1;
  int unaff_EBP;
  unkbyte10 in_ST0;
  float10 fVar2;
  float10 in_ST1;
  
  *(unkbyte10 *)(unaff_EBP + -0x9e) = in_ST0;
  fVar1 = *(float10 *)(unaff_EBP + -0x9e);
  fVar2 = fVar1;
  if ((*(byte *)(unaff_EBP + -0x97) & 0x40) != 0) {
    *(float10 *)(unaff_EBP + -0x9e) = in_ST1;
    fVar2 = *(float10 *)(unaff_EBP + -0x9e);
    in_ST1 = fVar1;
    if ((*(byte *)(unaff_EBP + -0x97) & 0x40) != 0) {
      *(undefined1 *)(unaff_EBP + -0x90) = 7;
      goto LAB_10070043;
    }
  }
  *(undefined1 *)(unaff_EBP + -0x90) = 1;
LAB_10070043:
  return fVar2 + in_ST1;
}

/* 10070046  FUN_10070046  (29 bytes)
 * undefined FUN_10070046()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unkbyte10 FUN_10070046(void)

{
  int unaff_EBP;
  unkbyte10 Var1;
  
  Var1 = _DAT_10097ba0;
  if (*(char *)(unaff_EBP + -0x90) < '\x01') {
    *(undefined1 *)(unaff_EBP + -0x90) = 1;
  }
  return Var1;
}

/* 10070876  FUN_10070876  (518 bytes)
 * undefined4 FUN_10070876(undefined4 param_1, uint param_2, ushort param_3)
 * called by: FUN_10070a7c
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10070876(undefined4 param_1,uint param_2,ushort param_3)

{
  undefined4 in_EAX;
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  undefined4 in_stack_0000001c;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000022;
  ushort in_stack_00000024;
  
  if ((((((CONCAT22(param_3,param_2._2_2_) ^ 0x700) & 0x700) == 0) &&
       ((&DAT_10097bec)[(param_2._2_2_ & 0x7800) >> 0xb] != '\0')) && ((param_3 & 0x7fff) != 0x7fff)
      ) && ((((in_stack_00000024 & 0x7fff) != 0 && ((in_stack_00000024 & 0x7fff) != 0x7fff)) &&
            (((CONCAT22(in_stack_00000022,in_stack_00000020) & 0x7fffffff) == 0 &&
             ((param_2 & 0x7fffffff) == 0)))))) {
    if ((ushort)((param_3 & 0x7fff) + 0x3f) < (in_stack_00000024 & 0x7fff)) {
      iVar1 = ((in_stack_00000024 & 0x7fff) - (param_3 & 0x7fff) & 0x3f | 0x20) + 1;
      fVar3 = ABS((float10)CONCAT28(in_stack_00000024 & 0x7fff | param_3 & 0x8000,
                                    CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1))));
      fVar2 = ABS((float10)CONCAT28(in_stack_00000024,
                                    CONCAT26(in_stack_00000022,
                                             CONCAT24(in_stack_00000020,in_stack_0000001c))));
      do {
        if (fVar3 <= fVar2) {
          fVar2 = fVar2 - fVar3;
        }
        fVar3 = fVar3 * (float10)_DAT_10097c1c;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    else {
      while (-1 < (int)((in_stack_00000024 & 0x7fff) - ((param_3 & 0x7fff) + 10))) {
        fVar2 = (float10)CONCAT28(in_stack_00000024,
                                  CONCAT26(in_stack_00000022,
                                           CONCAT24(in_stack_00000020,in_stack_0000001c)));
        fVar3 = (float10)CONCAT28((in_stack_00000024 & 0x7fff) -
                                  ((in_stack_00000024 & 0x7fff) - param_3 & 7 | 4) |
                                  param_3 & 0x8000,
                                  CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)));
        fVar2 = fVar2 - (float10)(unkint10)(fVar2 / fVar3) * fVar3;
        in_stack_0000001c = SUB104(fVar2,0);
        in_stack_00000020 = (undefined2)((unkuint10)fVar2 >> 0x20);
        in_stack_00000022 = (undefined2)((unkuint10)fVar2 >> 0x30);
        in_stack_00000024 = (ushort)((unkuint10)fVar2 >> 0x40);
      }
    }
  }
  return in_EAX;
}

/* 10070a7c  FUN_10070a7c  (178 bytes)
 * float10 FUN_10070a7c(void)
 * called by: FUN_1006b9b4
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_10070a7c(void)

{
  float10 in_ST0;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 in_ST1;
  uint uVar2;
  float10 fVar1;
  
  uVar2 = (uint)((unkuint10)in_ST1 >> 0x20);
  if (((uint)((unkuint10)in_ST1 >> 0x30) & 0x7fff0000) != 0) {
    FUN_10070876(SUB104(in_ST1,0),uVar2,(ushort)((unkuint10)in_ST1 >> 0x40));
    return extraout_ST0;
  }
  if (SUB104(in_ST1,0) != 0 || uVar2 != 0) {
    fVar1 = in_ST1 * (float10)_DAT_10097c04;
    FUN_10070876(SUB104(fVar1,0),(uint)((unkuint10)fVar1 >> 0x20),(ushort)((unkuint10)fVar1 >> 0x40)
                );
    return extraout_ST0_00;
  }
  return in_ST0 - (float10)(unkint10)(in_ST0 / in_ST1) * in_ST1;
}

/* 10070e84  FUN_10070e84  (70 bytes)
 * int FUN_10070e84(int * param_1)
 */
int FUN_10070e84(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    iVar3 = FUN_1006e8e8();
    return iVar3;
  }
  if ((DAT_10191e94 != (FARPROC)0x0) &&
     (bVar2 = FUN_10074249(DAT_10191e94), CONCAT31(extraout_var,bVar2) != 0)) {
    iVar3 = (*DAT_10191e94)(param_1);
    return iVar3;
  }
  return 0;
}

/* 10070eca  FUN_10070eca  (17 bytes)
 * undefined FUN_10070eca()
 */
void FUN_10070eca(void)

{
  DAT_10191e94 = SetUnhandledExceptionFilter(FUN_10070e84);
  return;
}

/* 10070edb  FUN_10070edb  (13 bytes)
 * undefined FUN_10070edb()
 */
void FUN_10070edb(void)

{
  SetUnhandledExceptionFilter(DAT_10191e94);
  return;
}

/* 10070ee8  FUN_10070ee8  (2597 bytes)
 * int FUN_10070ee8(int * param_1, byte.conflict * param_2, undefined4 * param_3)
 * called by: FUN_1006bf83
 */
int __thiscall FUN_10070ee8(void *this,int *param_1,byte_conflict *param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  void *this_00;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  void *this_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  int *piVar7;
  byte bVar8;
  byte *pbVar9;
  byte *pbVar10;
  char *pcVar11;
  char *pcVar12;
  WCHAR *pWVar13;
  undefined *puVar14;
  int iVar15;
  bool bVar16;
  int *piVar17;
  char local_1c8;
  char local_1c7 [351];
  byte local_68 [32];
  undefined4 *local_48;
  WCHAR local_42;
  uint local_40;
  byte local_3c;
  undefined1 local_3b;
  byte local_39;
  int local_38;
  WCHAR *local_34;
  WCHAR *local_30;
  undefined8 local_2c;
  int local_24;
  int local_20;
  byte local_1c;
  char local_1b;
  char local_1a;
  char local_19;
  int *local_18;
  char local_13;
  char local_12;
  char local_11;
  int local_10;
  char local_9;
  undefined *local_8;
  
  local_19 = '\0';
  bVar1 = *param_2;
  local_8 = (undefined *)0x0;
  local_38 = 0;
  pbVar9 = param_2;
  piVar7 = (int *)PTR_DAT_10097468;
  do {
    PTR_DAT_10097468 = (undefined *)piVar7;
    if (bVar1 == 0) {
LAB_100718ee:
      if (local_18 == (int *)0xffffffff) {
LAB_100718f4:
        if ((local_38 == 0) && (local_19 == '\0')) {
          local_38 = -1;
        }
      }
      return local_38;
    }
    if ((int)DAT_10097674 < 2) {
      uVar5 = *(byte *)((int)piVar7 + (uint)bVar1 * 2) & 8;
    }
    else {
      piVar7 = (int *)0x8;
      uVar5 = FUN_1006c8b6(this,(uint)bVar1,8);
    }
    if (uVar5 != 0) {
      local_8 = local_8 + -1;
      piVar7 = param_1;
      uVar5 = FUN_10071975((int *)&local_8,param_1);
      FUN_1007195e(uVar5,piVar7);
      uVar5 = FUN_1006c432(this_00,(uint)pbVar9[1]);
      piVar7 = extraout_ECX;
      pbVar10 = pbVar9;
      while (pbVar9 = pbVar10 + 1, uVar5 != 0) {
        piVar17 = (int *)(uint)pbVar10[2];
        uVar5 = FUN_1006c432(piVar7,(int)(uint)pbVar10[2]);
        piVar7 = piVar17;
        pbVar10 = pbVar9;
      }
    }
    if (*pbVar9 == 0x25) {
      local_39 = 0;
      local_1c = 0;
      local_1b = '\0';
      local_12 = '\0';
      local_13 = '\0';
      local_1a = '\0';
      puVar14 = (undefined *)0x0;
      local_9 = '\0';
      local_20 = 0;
      local_24 = 0;
      local_10 = 0;
      local_11 = '\x01';
      local_34 = (WCHAR *)0x0;
      do {
        uVar5 = (uint)pbVar9[1];
        param_2 = pbVar9 + 1;
        if ((int)DAT_10097674 < 2) {
          uVar6 = (byte)PTR_DAT_10097468[uVar5 * 2] & 4;
          piVar7 = (int *)PTR_DAT_10097468;
        }
        else {
          piVar17 = (int *)0x4;
          uVar6 = FUN_1006c8b6(piVar7,uVar5,4);
          piVar7 = piVar17;
        }
        if (uVar6 == 0) {
          if (uVar5 < 0x4f) {
            if (uVar5 != 0x4e) {
              if (uVar5 == 0x2a) {
                local_12 = local_12 + '\x01';
              }
              else if (uVar5 != 0x46) {
                if (uVar5 == 0x49) {
                  if ((pbVar9[2] != 0x36) || (pbVar9[3] != 0x34)) goto LAB_10071043;
                  local_34 = (WCHAR *)((int)local_34 + 1);
                  local_2c = 0;
                  param_2 = pbVar9 + 3;
                }
                else if (uVar5 == 0x4c) {
                  local_11 = local_11 + '\x01';
                }
                else {
LAB_10071043:
                  local_13 = local_13 + '\x01';
                }
              }
            }
          }
          else if (uVar5 == 0x68) {
            local_11 = local_11 + -1;
            local_9 = local_9 + -1;
          }
          else {
            if (uVar5 == 0x6c) {
              local_11 = local_11 + '\x01';
            }
            else if (uVar5 != 0x77) goto LAB_10071043;
            local_9 = local_9 + '\x01';
          }
        }
        else {
          local_24 = local_24 + 1;
          local_10 = (uVar5 - 0x30) + local_10 * 10;
        }
        pbVar9 = param_2;
      } while (local_13 == '\0');
      puVar2 = param_3;
      if (local_12 == '\0') {
        local_30 = (WCHAR *)*param_3;
        puVar2 = param_3 + 1;
        local_48 = param_3;
      }
      param_3 = puVar2;
      local_13 = '\0';
      if (local_9 == '\0') {
        if ((*param_2 == 0x53) || (*param_2 == 0x43)) {
          local_9 = '\x01';
        }
        else {
          local_9 = -1;
        }
      }
      uVar5 = *param_2 | 0x20;
      local_40 = uVar5;
      if (uVar5 != 0x6e) {
        if ((uVar5 == 99) || (uVar5 == 0x7b)) {
          local_8 = local_8 + 1;
          piVar7 = param_1;
          local_18 = (int *)FUN_10071944(param_1);
        }
        else {
          piVar7 = param_1;
          local_18 = (int *)FUN_10071975((int *)&local_8,param_1);
        }
      }
      if ((local_24 != 0) && (local_10 == 0)) {
LAB_100718ce:
        local_8 = local_8 + -1;
        FUN_1007195e((uint)local_18,param_1);
        goto LAB_100718ee;
      }
      if (uVar5 < 0x70) {
        if (uVar5 == 0x6f) {
LAB_100715fb:
          if (local_18 == (int *)0x2d) {
            local_1b = '\x01';
          }
          else if (local_18 != (int *)0x2b) goto LAB_10071630;
          local_10 = local_10 + -1;
          if ((local_10 == 0) && (local_24 != 0)) {
            local_13 = '\x01';
          }
          else {
            local_8 = local_8 + 1;
            piVar7 = param_1;
            local_18 = (int *)FUN_10071944(param_1);
          }
          goto LAB_10071630;
        }
        if (uVar5 != 99) {
          if (uVar5 == 100) goto LAB_100715fb;
          if (uVar5 < 0x65) {
LAB_10071373:
            if ((int *)(uint)*param_2 != local_18) goto LAB_100718ce;
            local_19 = local_19 + -1;
            if (local_12 == '\0') {
              param_3 = local_48;
            }
            goto LAB_1007184f;
          }
          if (0x67 < uVar5) {
            if (uVar5 == 0x69) {
              uVar5 = 100;
              goto LAB_10071131;
            }
            if (uVar5 != 0x6e) goto LAB_10071373;
            puVar14 = local_8;
            if (local_12 != '\0') goto LAB_1007184f;
            goto LAB_10071829;
          }
          pcVar11 = &local_1c8;
          if (local_18 == (int *)0x2d) {
            local_1c8 = '-';
            pcVar11 = local_1c7;
LAB_10071167:
            local_10 = local_10 + -1;
            local_8 = local_8 + 1;
            piVar7 = param_1;
            local_18 = (int *)FUN_10071944(param_1);
          }
          else if (local_18 == (int *)0x2b) goto LAB_10071167;
          if ((local_24 == 0) || (0x15d < local_10)) {
            local_10 = 0x15d;
          }
          while( true ) {
            piVar17 = local_18;
            if ((int)DAT_10097674 < 2) {
              uVar5 = (byte)PTR_DAT_10097468[(int)local_18 * 2] & 4;
            }
            else {
              uVar5 = FUN_1006c8b6(piVar7,(int)local_18,4);
            }
            if ((uVar5 == 0) ||
               (iVar15 = local_10 + -1, bVar16 = local_10 == 0, local_10 = iVar15, bVar16)) break;
            local_20 = local_20 + 1;
            *pcVar11 = (char)piVar17;
            pcVar11 = pcVar11 + 1;
            local_8 = local_8 + 1;
            piVar7 = param_1;
            local_18 = (int *)FUN_10071944(param_1);
          }
          if ((DAT_10097678 == (char)piVar17) &&
             (iVar15 = local_10 + -1, bVar16 = local_10 != 0, local_10 = iVar15, bVar16)) {
            local_8 = local_8 + 1;
            piVar7 = param_1;
            piVar17 = (int *)FUN_10071944(param_1);
            *pcVar11 = DAT_10097678;
            while( true ) {
              pcVar11 = pcVar11 + 1;
              local_18 = piVar17;
              if ((int)DAT_10097674 < 2) {
                uVar5 = (byte)PTR_DAT_10097468[(int)piVar17 * 2] & 4;
              }
              else {
                uVar5 = FUN_1006c8b6(piVar7,(int)piVar17,4);
              }
              if ((uVar5 == 0) ||
                 (iVar15 = local_10 + -1, bVar16 = local_10 == 0, local_10 = iVar15, bVar16)) break;
              local_20 = local_20 + 1;
              *pcVar11 = (char)piVar17;
              local_8 = local_8 + 1;
              piVar7 = param_1;
              piVar17 = (int *)FUN_10071944(param_1);
            }
          }
          pcVar12 = pcVar11;
          if ((local_20 != 0) &&
             (((piVar17 == (int *)0x65 || (piVar17 == (int *)0x45)) &&
              (iVar15 = local_10 + -1, bVar16 = local_10 != 0, local_10 = iVar15, bVar16)))) {
            *pcVar11 = 'e';
            pcVar12 = pcVar11 + 1;
            local_8 = local_8 + 1;
            piVar7 = param_1;
            piVar17 = (int *)FUN_10071944(param_1);
            local_18 = piVar17;
            if (piVar17 == (int *)0x2d) {
              *pcVar12 = '-';
              pcVar12 = pcVar11 + 2;
LAB_1007128e:
              bVar16 = local_10 != 0;
              local_10 = local_10 + -1;
              if (bVar16) goto LAB_1007129d;
              local_10 = 0;
            }
            else if (piVar17 == (int *)0x2b) goto LAB_1007128e;
            while( true ) {
              if ((int)DAT_10097674 < 2) {
                uVar5 = (byte)PTR_DAT_10097468[(int)piVar17 * 2] & 4;
              }
              else {
                uVar5 = FUN_1006c8b6(piVar7,(int)piVar17,4);
              }
              if ((uVar5 == 0) ||
                 (iVar15 = local_10 + -1, bVar16 = local_10 == 0, local_10 = iVar15, bVar16)) break;
              local_20 = local_20 + 1;
              *pcVar12 = (char)piVar17;
              pcVar12 = pcVar12 + 1;
LAB_1007129d:
              local_8 = local_8 + 1;
              piVar7 = param_1;
              piVar17 = (int *)FUN_10071944(param_1);
              local_18 = piVar17;
            }
          }
          local_8 = local_8 + -1;
          piVar7 = param_1;
          FUN_1007195e((uint)piVar17,param_1);
          if (local_20 != 0) {
            if (local_12 == '\0') {
              local_38 = local_38 + 1;
              *pcVar12 = '\0';
              (*(code *)PTR___fptrap_100976a4)(local_11 + -1,local_30,&local_1c8);
              piVar7 = extraout_ECX_00;
            }
            goto LAB_1007184f;
          }
          goto LAB_100718ee;
        }
        if (local_24 == 0) {
          local_10 = local_10 + 1;
          local_24 = 1;
        }
        if ('\0' < local_9) {
          local_1a = '\x01';
        }
        pcVar11 = &DAT_10097d38;
LAB_10071454:
        local_1c = 0xff;
        pbVar9 = (byte *)pcVar11;
        pbVar10 = param_2;
LAB_10071458:
        param_2 = pbVar10;
        _memset(local_68,0,0x20);
        if ((local_40 == 0x7b) && (*pbVar9 == 0x5d)) {
          uVar5 = 0x5d;
          local_68[0xb] = 0x20;
          pbVar9 = pbVar9 + 1;
        }
        else {
          uVar5 = (uint)local_39;
        }
        while (pWVar13 = local_30, bVar1 = *pbVar9, bVar1 != 0x5d) {
          if (((bVar1 == 0x2d) && (bVar8 = (byte)uVar5, bVar8 != 0)) &&
             (bVar4 = pbVar9[1], bVar4 != 0x5d)) {
            if (bVar4 <= bVar8) {
              uVar5 = (uint)bVar4;
              bVar4 = bVar8;
            }
            if ((byte)uVar5 <= bVar4) {
              iVar15 = (bVar4 - uVar5) + 1;
              do {
                local_68[uVar5 >> 3] = local_68[uVar5 >> 3] | '\x01' << ((byte)uVar5 & 7);
                uVar5 = uVar5 + 1;
                iVar15 = iVar15 + -1;
              } while (iVar15 != 0);
            }
            uVar5 = 0;
            pbVar9 = pbVar9 + 2;
          }
          else {
            uVar5 = (uint)bVar1;
            local_68[bVar1 >> 3] = local_68[bVar1 >> 3] | '\x01' << (bVar1 & 7);
            pbVar9 = pbVar9 + 1;
          }
        }
        if (*pbVar9 == 0) goto LAB_100718ee;
        if (local_40 == 0x7b) {
          param_2 = pbVar9;
        }
        local_8 = local_8 + -1;
        local_34 = local_30;
        piVar7 = param_1;
        FUN_1007195e((uint)local_18,param_1);
        while( true ) {
          if ((local_24 != 0) &&
             (iVar15 = local_10 + -1, bVar16 = local_10 == 0, local_10 = iVar15, bVar16))
          goto LAB_100715bd;
          local_8 = local_8 + 1;
          local_18 = (int *)FUN_10071944(param_1);
          if (local_18 == (int *)0xffffffff) break;
          bVar1 = (byte)local_18;
          piVar7 = (int *)(int)(char)(local_68[(int)local_18 >> 3] ^ local_1c);
          if (((uint)piVar7 & 1 << (bVar1 & 7)) == 0) break;
          if (local_12 == '\0') {
            if (local_1a == '\0') {
              *(byte *)pWVar13 = bVar1;
              pWVar13 = (WCHAR *)((int)pWVar13 + 1);
              local_30 = pWVar13;
            }
            else {
              local_3c = bVar1;
              if ((PTR_DAT_10097468[((uint)local_18 & 0xff) * 2 + 1] & 0x80) != 0) {
                local_8 = local_8 + 1;
                uVar5 = FUN_10071944(param_1);
                local_3b = (undefined1)uVar5;
              }
              FUN_10074f6a(&local_42,&local_3c,DAT_10097674);
              *pWVar13 = local_42;
              pWVar13 = pWVar13 + 1;
              piVar7 = extraout_ECX_01;
              local_30 = pWVar13;
            }
          }
          else {
            local_34 = (WCHAR *)((int)local_34 + 1);
          }
        }
        local_8 = local_8 + -1;
        piVar7 = param_1;
        FUN_1007195e((uint)local_18,param_1);
LAB_100715bd:
        if (local_34 == pWVar13) goto LAB_100718ee;
        if ((local_12 == '\0') && (local_38 = local_38 + 1, local_40 != 99)) {
          if (local_1a == '\0') {
            *(byte *)local_30 = 0;
          }
          else {
            *local_30 = L'\0';
          }
        }
      }
      else {
        if (uVar5 == 0x70) {
          local_11 = '\x01';
          goto LAB_100715fb;
        }
        if (uVar5 == 0x73) {
          if ('\0' < local_9) {
            local_1a = '\x01';
          }
          pcVar11 = s_____10097d30;
          goto LAB_10071454;
        }
        if (uVar5 == 0x75) goto LAB_100715fb;
        if (uVar5 != 0x78) {
          if (uVar5 != 0x7b) goto LAB_10071373;
          if ('\0' < local_9) {
            local_1a = '\x01';
          }
          pbVar9 = param_2 + 1;
          pbVar10 = pbVar9;
          if (*pbVar9 == 0x5e) {
            pcVar11 = (char *)(param_2 + 2);
            param_2 = pbVar9;
            goto LAB_10071454;
          }
          goto LAB_10071458;
        }
LAB_10071131:
        if (local_18 == (int *)0x2d) {
          local_1b = '\x01';
LAB_100713c0:
          local_10 = local_10 + -1;
          if ((local_10 == 0) && (local_24 != 0)) {
            local_13 = '\x01';
          }
          else {
            local_8 = local_8 + 1;
            piVar7 = param_1;
            local_18 = (int *)FUN_10071944(param_1);
          }
        }
        else if (local_18 == (int *)0x2b) goto LAB_100713c0;
        if (local_18 == (int *)0x30) {
          local_8 = local_8 + 1;
          piVar7 = param_1;
          local_18 = (int *)FUN_10071944(param_1);
          if (((char)local_18 == 'x') || ((char)local_18 == 'X')) {
            local_8 = local_8 + 1;
            piVar7 = param_1;
            local_18 = (int *)FUN_10071944(param_1);
            uVar5 = 0x78;
          }
          else {
            local_20 = 1;
            if (uVar5 == 0x78) {
              local_8 = local_8 + -1;
              piVar7 = param_1;
              FUN_1007195e((uint)local_18,param_1);
              local_18 = (int *)0x30;
            }
            else {
              uVar5 = 0x6f;
            }
          }
        }
LAB_10071630:
        if (local_34 == (WCHAR *)0x0) {
          if (local_13 == '\0') {
            while ((piVar17 = local_18, uVar5 != 0x78 && (uVar5 != 0x70))) {
              if ((int)DAT_10097674 < 2) {
                uVar6 = (byte)PTR_DAT_10097468[(int)local_18 * 2] & 4;
              }
              else {
                piVar3 = (int *)0x4;
                uVar6 = FUN_1006c8b6(piVar7,(int)local_18,4);
                piVar7 = piVar3;
              }
              if (uVar6 == 0) goto LAB_100717f7;
              if (uVar5 == 0x6f) {
                if (0x37 < (int)piVar17) goto LAB_100717f7;
                iVar15 = (int)puVar14 << 3;
              }
              else {
                iVar15 = (int)puVar14 * 10;
              }
LAB_100717cf:
              local_20 = local_20 + 1;
              puVar14 = (undefined *)(iVar15 + -0x30 + (int)piVar17);
              if ((local_24 != 0) && (local_10 = local_10 + -1, local_10 == 0)) goto LAB_10071805;
              local_8 = local_8 + 1;
              piVar7 = param_1;
              local_18 = (int *)FUN_10071944(param_1);
            }
            if ((int)DAT_10097674 < 2) {
              uVar6 = (byte)PTR_DAT_10097468[(int)local_18 * 2] & 0x80;
            }
            else {
              piVar3 = (int *)0x80;
              uVar6 = FUN_1006c8b6(piVar7,(int)local_18,0x80);
              piVar7 = piVar3;
            }
            if (uVar6 != 0) {
              iVar15 = (int)puVar14 << 4;
              piVar3 = piVar17;
              piVar17 = (int *)FUN_1007190d(piVar7,(uint)piVar17);
              piVar7 = piVar3;
              local_18 = piVar17;
              goto LAB_100717cf;
            }
LAB_100717f7:
            local_8 = local_8 + -1;
            piVar7 = param_1;
            FUN_1007195e((uint)piVar17,param_1);
          }
LAB_10071805:
          if (local_1b != '\0') {
            puVar14 = (undefined *)-(int)puVar14;
          }
        }
        else {
          if (local_13 == '\0') {
            while (piVar17 = local_18, uVar5 != 0x78) {
              if ((int)DAT_10097674 < 2) {
                uVar6 = (byte)PTR_DAT_10097468[(int)local_18 * 2] & 4;
              }
              else {
                uVar6 = FUN_1006c8b6(piVar7,(int)local_18,4);
              }
              if (uVar6 == 0) goto LAB_10071719;
              if (uVar5 == 0x6f) {
                if (0x37 < (int)piVar17) goto LAB_10071719;
                local_2c = __allshl('\x03',(int)local_2c._4_4_);
                piVar7 = extraout_ECX_02;
              }
              else {
                local_2c = __allmul((uint)local_2c,(int)local_2c._4_4_,10,0);
                piVar7 = extraout_ECX_03;
              }
LAB_100716eb:
              local_20 = local_20 + 1;
              piVar17 = piVar17 + -0xc;
              local_2c = CONCAT44((int)local_2c._4_4_ + ((int)piVar17 >> 0x1f) +
                                  (uint)CARRY4((uint)local_2c,(uint)piVar17),
                                  (undefined *)((uint)local_2c + (int)piVar17));
              if ((local_24 != 0) && (local_10 = local_10 + -1, local_10 == 0)) goto LAB_10071727;
              local_8 = local_8 + 1;
              piVar7 = param_1;
              local_18 = (int *)FUN_10071944(param_1);
            }
            if ((int)DAT_10097674 < 2) {
              uVar6 = (byte)PTR_DAT_10097468[(int)local_18 * 2] & 0x80;
            }
            else {
              uVar6 = FUN_1006c8b6(piVar7,(int)local_18,0x80);
            }
            if (uVar6 != 0) {
              local_2c = __allshl('\x04',(int)local_2c._4_4_);
              piVar7 = piVar17;
              piVar17 = (int *)FUN_1007190d(this_01,(uint)piVar17);
              local_18 = piVar17;
              goto LAB_100716eb;
            }
LAB_10071719:
            local_8 = local_8 + -1;
            piVar7 = param_1;
            FUN_1007195e((uint)piVar17,param_1);
          }
LAB_10071727:
          if (local_1b != '\0') {
            piVar7 = (int *)-((int)local_2c._4_4_ + (uint)((uint)local_2c != 0));
            local_2c = CONCAT44(piVar7,-(uint)local_2c);
          }
        }
        if (uVar5 == 0x46) {
          local_20 = 0;
        }
        if (local_20 == 0) goto LAB_100718ee;
        if (local_12 == '\0') {
          local_38 = local_38 + 1;
LAB_10071829:
          if (local_34 == (WCHAR *)0x0) {
            if (local_11 == '\0') {
              *local_30 = (WCHAR)puVar14;
            }
            else {
              *(undefined **)local_30 = puVar14;
            }
          }
          else {
            *(uint *)local_30 = (uint)local_2c;
            *(int **)(local_30 + 2) = local_2c._4_4_;
            piVar7 = local_2c._4_4_;
          }
        }
      }
LAB_1007184f:
      local_19 = local_19 + '\x01';
      param_2 = param_2 + 1;
      this = piVar7;
    }
    else {
      local_8 = local_8 + 1;
      piVar7 = (int *)FUN_10071944(param_1);
      param_2 = pbVar9 + 1;
      local_18 = piVar7;
      if ((int *)(uint)*pbVar9 != piVar7) goto LAB_100718ce;
      this = PTR_DAT_10097468;
      if ((PTR_DAT_10097468[((uint)piVar7 & 0xff) * 2 + 1] & 0x80) != 0) {
        local_8 = local_8 + 1;
        piVar17 = (int *)FUN_10071944(param_1);
        this = (void *)(uint)*param_2;
        param_2 = pbVar9 + 2;
        if (this != piVar17) {
          local_8 = local_8 + -1;
          FUN_1007195e((uint)piVar17,param_1);
          local_8 = local_8 + -1;
          FUN_1007195e((uint)piVar7,param_1);
          goto LAB_100718ee;
        }
        local_8 = local_8 + -1;
      }
    }
    if ((local_18 == (int *)0xffffffff) && ((*param_2 != '%' || (param_2[1] != 'n'))))
    goto LAB_100718f4;
    bVar1 = *param_2;
    pbVar9 = param_2;
    piVar7 = (int *)PTR_DAT_10097468;
  } while( true );
}

/* 1007190d  FUN_1007190d  (55 bytes)
 * uint FUN_1007190d(uint param_1)
 * called by: FUN_10070ee8
 */
uint __thiscall FUN_1007190d(void *this,uint param_1)

{
  uint uVar1;
  
  if (DAT_10097674 < 2) {
    uVar1 = (byte)PTR_DAT_10097468[param_1 * 2] & 4;
  }
  else {
    uVar1 = FUN_1006c8b6(this,param_1,4);
  }
  if (uVar1 == 0) {
    param_1 = (param_1 & 0xffffffdf) - 7;
  }
  return param_1;
}

/* 10071944  FUN_10071944  (26 bytes)
 * uint FUN_10071944(undefined4 * param_1)
 * called by: FUN_10070ee8, FUN_10071975
 */
uint __cdecl FUN_10071944(undefined4 *param_1)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    bVar2 = *(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
    return (uint)bVar2;
  }
  uVar3 = FUN_1006f0ae(param_1);
  return uVar3;
}

/* 1007195e  FUN_1007195e  (23 bytes)
 * undefined FUN_1007195e(uint param_1, int * param_2)
 * called by: FUN_10070ee8
 */
void __cdecl FUN_1007195e(uint param_1,int *param_2)

{
  if (param_1 != 0xffffffff) {
    FUN_100750af(param_1,param_2);
  }
  return;
}

/* 10071975  FUN_10071975  (36 bytes)
 * uint FUN_10071975(int * param_1, undefined4 * param_2)
 * called by: FUN_10070ee8
 */
uint __cdecl FUN_10071975(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  void *this;
  
  do {
    *param_1 = *param_1 + 1;
    uVar1 = FUN_10071944(param_2);
    uVar2 = FUN_1006c432(this,uVar1);
  } while (uVar2 != 0);
  return uVar1;
}

/* 100719d4  FUN_100719d4  (194 bytes)
 * int FUN_100719d4(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7)
 * called by: FUN_1006c07c
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
FUN_100719d4(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_28 [2];
  int local_20;
  int local_18;
  uint local_14;
  int local_c;
  
  uVar3 = param_1 - 0x76c;
  if (((int)uVar3 < 0x46) || (0x8a < (int)uVar3)) {
    iVar2 = -1;
  }
  else {
    iVar4 = *(int *)(&DAT_100980f4 + param_2 * 4) + param_3;
    if (((uVar3 & 3) == 0) && (2 < param_2)) {
      iVar4 = iVar4 + 1;
    }
    FUN_1007511d();
    local_20 = param_4;
    local_18 = param_2 + -1;
    iVar2 = ((param_4 + (uVar3 * 0x16d + iVar4 + (param_1 + -0x76d >> 2)) * 0x18) * 0x3c + param_5)
            * 0x3c + DAT_10098010 + 0x7c558180 + param_6;
    if ((param_7 == 1) ||
       (((param_7 == -1 && (DAT_10098014 != 0)) &&
        (local_14 = uVar3, local_c = iVar4, bVar1 = FUN_100753d2(local_28),
        CONCAT31(extraout_var,bVar1) != 0)))) {
      iVar2 = iVar2 + _DAT_10098018;
    }
  }
  return iVar2;
}

/* 10071a96  FUN_10071a96  (60 bytes)
 * undefined4 FUN_10071a96(int param_1)
 * called by: FUN_1006ccfc
 */
undefined4 __cdecl FUN_10071a96(int param_1)

{
  int iVar1;
  
  DAT_101923a8 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_101923a8 != (HANDLE)0x0) {
    iVar1 = FUN_10071b47();
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_101923a8);
  }
  return 0;
}

/* 10071ad2  FUN_10071ad2  (117 bytes)
 * undefined FUN_10071ad2(void)
 * called by: FUN_1006ccfc
 */
void FUN_10071ad2(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < DAT_101923a0) {
    puVar2 = (undefined4 *)((int)DAT_101923a4 + 0xc);
    do {
      VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
      VirtualFree((LPVOID)*puVar2,0,0x8000);
      HeapFree(DAT_101923a8,0,(LPVOID)puVar2[1]);
      puVar2 = puVar2 + 5;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_101923a0);
  }
  HeapFree(DAT_101923a8,0,DAT_101923a4);
  HeapDestroy(DAT_101923a8);
  return;
}

/* 10071b47  FUN_10071b47  (62 bytes)
 * undefined4 FUN_10071b47(void)
 * called by: FUN_10071a96
 */
undefined4 FUN_10071b47(void)

{
  DAT_101923a4 = HeapAlloc(DAT_101923a8,0,0x140);
  if (DAT_101923a4 == (LPVOID)0x0) {
    return 0;
  }
  DAT_1019239c = 0;
  DAT_101923a0 = 0;
  DAT_10192398 = DAT_101923a4;
  DAT_10192390 = 0x10;
  return 1;
}

/* 10071b85  FUN_10071b85  (43 bytes)
 * uint FUN_10071b85(int param_1)
 * called by: FUN_1006c158, FUN_1006dd71, FUN_1006dea9
 */
uint __cdecl FUN_10071b85(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_101923a4;
  while( true ) {
    if (DAT_101923a4 + DAT_101923a0 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}

/* 10071bb0  FUN_10071bb0  (811 bytes)
 * undefined FUN_10071bb0(uint * param_1, uint param_2)
 * called by: FUN_1006c158, FUN_1006dd71
 */
void __cdecl FUN_10071bb0(uint *param_1,uint param_2)

{
  char *pcVar1;
  uint *puVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int local_10;
  
  uVar5 = param_1[4];
  iVar6 = *(int *)(param_2 - 4);
  piVar9 = (int *)(param_2 - 4);
  uVar10 = param_2 - param_1[3] >> 0xf;
  uVar7 = *(uint *)(param_2 - 8);
  local_10 = iVar6 + -1;
  piVar3 = (int *)(uVar10 * 0x204 + 0x144 + uVar5);
  uVar12 = *(uint *)(local_10 + (int)piVar9);
  if ((uVar12 & 1) == 0) {
    param_2 = ((int)uVar12 >> 4) - 1;
    if (0x3f < param_2) {
      param_2 = 0x3f;
    }
    if (*(int *)(iVar6 + 3 + (int)piVar9) == *(int *)(iVar6 + 7 + (int)piVar9)) {
      if (param_2 < 0x20) {
        pcVar1 = (char *)(param_2 + 4 + uVar5);
        uVar11 = ~(0x80000000U >> ((byte)param_2 & 0x1f));
        puVar2 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar11;
        }
      }
      else {
        pcVar1 = (char *)(param_2 + 4 + uVar5);
        uVar11 = ~(0x80000000U >> ((byte)param_2 - 0x20 & 0x1f));
        puVar2 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar11;
        }
      }
    }
    *(undefined4 *)(*(int *)(iVar6 + 7 + (int)piVar9) + 4) =
         *(undefined4 *)(iVar6 + 3 + (int)piVar9);
    local_10 = local_10 + uVar12;
    *(undefined4 *)(*(int *)(iVar6 + 3 + (int)piVar9) + 8) =
         *(undefined4 *)(iVar6 + 7 + (int)piVar9);
  }
  uVar12 = (local_10 >> 4) - 1;
  if (0x3f < uVar12) {
    uVar12 = 0x3f;
  }
  if ((uVar7 & 1) == 0) {
    piVar9 = (int *)((int)piVar9 - uVar7);
    param_2 = ((int)uVar7 >> 4) - 1;
    if (0x3f < param_2) {
      param_2 = 0x3f;
    }
    local_10 = local_10 + uVar7;
    uVar12 = (local_10 >> 4) - 1;
    if (0x3f < uVar12) {
      uVar12 = 0x3f;
    }
    if (param_2 != uVar12) {
      if (piVar9[1] == piVar9[2]) {
        if (param_2 < 0x20) {
          pcVar1 = (char *)(param_2 + 4 + uVar5);
          uVar11 = ~(0x80000000U >> ((byte)param_2 & 0x1f));
          puVar2 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar11;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar11;
          }
        }
        else {
          pcVar1 = (char *)(param_2 + 4 + uVar5);
          uVar11 = ~(0x80000000U >> ((byte)param_2 - 0x20 & 0x1f));
          puVar2 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar11;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar11;
          }
        }
      }
      *(int *)(piVar9[2] + 4) = piVar9[1];
      *(int *)(piVar9[1] + 8) = piVar9[2];
    }
  }
  if (((uVar7 & 1) != 0) || (param_2 != uVar12)) {
    piVar9[1] = piVar3[uVar12 * 2 + 1];
    piVar9[2] = (int)(piVar3 + uVar12 * 2);
    (piVar3 + uVar12 * 2)[1] = (int)piVar9;
    *(int **)(piVar9[1] + 8) = piVar9;
    if (piVar9[1] == piVar9[2]) {
      cVar4 = *(char *)(uVar12 + 4 + uVar5);
      *(char *)(uVar12 + 4 + uVar5) = cVar4 + '\x01';
      bVar8 = (byte)uVar12;
      if (uVar12 < 0x20) {
        if (cVar4 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
        }
        puVar2 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
        *puVar2 = *puVar2 | 0x80000000U >> (bVar8 & 0x1f);
      }
      else {
        if (cVar4 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
        puVar2 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
        *puVar2 = *puVar2 | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
      }
    }
  }
  *piVar9 = local_10;
  *(int *)(local_10 + -4 + (int)piVar9) = local_10;
  *piVar3 = *piVar3 + -1;
  uVar5 = DAT_10192394;
  puVar2 = DAT_1019239c;
  if ((*piVar3 == 0) && (uVar5 = uVar10, puVar2 = param_1, DAT_1019239c != (uint *)0x0)) {
    VirtualFree((LPVOID)(DAT_10192394 * 0x8000 + DAT_1019239c[3]),0x8000,0x4000);
    DAT_1019239c[2] = DAT_1019239c[2] | 0x80000000U >> ((byte)DAT_10192394 & 0x1f);
    *(undefined4 *)(DAT_1019239c[4] + 0xc4 + DAT_10192394 * 4) = 0;
    *(char *)(DAT_1019239c[4] + 0x43) = *(char *)(DAT_1019239c[4] + 0x43) + -1;
    if (*(char *)(DAT_1019239c[4] + 0x43) == '\0') {
      DAT_1019239c[1] = DAT_1019239c[1] & 0xfffffffe;
    }
    puVar2 = param_1;
    if (DAT_1019239c[2] == 0xffffffff) {
      VirtualFree((LPVOID)DAT_1019239c[3],0,0x8000);
      HeapFree(DAT_101923a8,0,(LPVOID)DAT_1019239c[4]);
      FUN_1006ba20(DAT_1019239c,DAT_1019239c + 5,
                   (DAT_101923a0 * 0x14 - (int)DAT_1019239c) + -0x14 + DAT_101923a4);
      DAT_101923a0 = DAT_101923a0 + -1;
      if (DAT_1019239c < param_1) {
        param_1 = param_1 + -5;
      }
      DAT_10192398 = DAT_101923a4;
      puVar2 = param_1;
    }
  }
  DAT_1019239c = puVar2;
  DAT_10192394 = uVar5;
  return;
}

/* 10071edb  FUN_10071edb  (777 bytes)
 * int * FUN_10071edb(uint * param_1)
 * called by: FUN_1006c216, FUN_1006dd71, FUN_10074261
 */
int * __cdecl FUN_10071edb(uint *param_1)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint local_10;
  uint local_c;
  int local_8;
  
  puVar8 = DAT_101923a4 + DAT_101923a0 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_10192398;
  if (iVar7 < 0x20) {
    local_10 = 0xffffffff >> (bVar5 & 0x1f);
    local_c = 0xffffffff;
  }
  else {
    local_c = 0xffffffff >> (bVar5 - 0x20 & 0x1f);
    local_10 = 0;
  }
  for (; (param_1 < puVar8 && ((param_1[1] & local_c) == 0 && (*param_1 & local_10) == 0));
      param_1 = param_1 + 5) {
  }
  puVar11 = DAT_101923a4;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_10192398 && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_10192398) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_101923a4;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_10192398 && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_10192398) && (param_1 = FUN_100721e4(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_10072295((int)param_1);
      *(int *)param_1[4] = iVar7;
      if (*(int *)param_1[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  piVar4 = (int *)param_1[4];
  local_8 = *piVar4;
  if ((local_8 == -1) ||
     ((piVar4[local_8 + 0x31] & local_c) == 0 && (piVar4[local_8 + 0x11] & local_10) == 0)) {
    local_8 = 0;
    puVar8 = (uint *)(piVar4 + 0x11);
    if ((piVar4[0x31] & local_c) == 0 && (piVar4[0x11] & local_10) == 0) {
      do {
        puVar11 = puVar8 + 0x21;
        local_8 = local_8 + 1;
        puVar8 = puVar8 + 1;
      } while ((*puVar11 & local_c) == 0 && (local_10 & *puVar8) == 0);
    }
  }
  iVar7 = 0;
  piVar2 = piVar4 + local_8 * 0x81 + 0x51;
  local_10 = piVar4[local_8 + 0x11] & local_10;
  if (local_10 == 0) {
    local_10 = piVar4[local_8 + 0x31] & local_c;
    iVar7 = 0x20;
  }
  for (; -1 < (int)local_10; local_10 = local_10 << 1) {
    iVar7 = iVar7 + 1;
  }
  piVar10 = (int *)piVar2[iVar7 * 2 + 1];
  iVar9 = *piVar10 - uVar6;
  iVar14 = (iVar9 >> 4) + -1;
  if (0x3f < iVar14) {
    iVar14 = 0x3f;
  }
  DAT_10192398 = param_1;
  if (iVar14 != iVar7) {
    if (piVar10[1] == piVar10[2]) {
      if (iVar7 < 0x20) {
        pcVar1 = (char *)((int)piVar4 + iVar7 + 4);
        uVar13 = ~(0x80000000U >> ((byte)iVar7 & 0x1f));
        piVar4[local_8 + 0x11] = uVar13 & piVar4[local_8 + 0x11];
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar13;
        }
      }
      else {
        pcVar1 = (char *)((int)piVar4 + iVar7 + 4);
        uVar13 = ~(0x80000000U >> ((byte)iVar7 - 0x20 & 0x1f));
        piVar4[local_8 + 0x31] = piVar4[local_8 + 0x31] & uVar13;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar13;
        }
      }
    }
    *(int *)(piVar10[2] + 4) = piVar10[1];
    *(int *)(piVar10[1] + 8) = piVar10[2];
    if (iVar9 == 0) goto LAB_100721a1;
    piVar10[1] = piVar2[iVar14 * 2 + 1];
    piVar10[2] = (int)(piVar2 + iVar14 * 2);
    (piVar2 + iVar14 * 2)[1] = (int)piVar10;
    *(int **)(piVar10[1] + 8) = piVar10;
    if (piVar10[1] == piVar10[2]) {
      cVar3 = *(char *)(iVar14 + 4 + (int)piVar4);
      bVar5 = (byte)iVar14;
      if (iVar14 < 0x20) {
        *(char *)(iVar14 + 4 + (int)piVar4) = cVar3 + '\x01';
        if (cVar3 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar5 & 0x1f);
        }
        piVar4[local_8 + 0x11] = piVar4[local_8 + 0x11] | 0x80000000U >> (bVar5 & 0x1f);
      }
      else {
        *(char *)(iVar14 + 4 + (int)piVar4) = cVar3 + '\x01';
        if (cVar3 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar5 - 0x20 & 0x1f);
        }
        piVar4[local_8 + 0x31] = piVar4[local_8 + 0x31] | 0x80000000U >> (bVar5 - 0x20 & 0x1f);
      }
    }
  }
  if (iVar9 != 0) {
    *piVar10 = iVar9;
    *(int *)(iVar9 + -4 + (int)piVar10) = iVar9;
  }
LAB_100721a1:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_1019239c)) && (local_8 == DAT_10192394)) {
    DAT_1019239c = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}

/* 100721e4  FUN_100721e4  (177 bytes)
 * undefined4 * FUN_100721e4(void)
 * called by: FUN_10071edb
 */
undefined4 * FUN_100721e4(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_101923a0 == DAT_10192390) {
    pvVar2 = HeapReAlloc(DAT_101923a8,0,DAT_101923a4,(DAT_10192390 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_10192390 = DAT_10192390 + 0x10;
    DAT_101923a4 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_101923a4 + DAT_101923a0 * 0x14);
  pvVar2 = HeapAlloc(DAT_101923a8,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_101923a0 = DAT_101923a0 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_101923a8,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}

/* 10072295  FUN_10072295  (251 bytes)
 * int FUN_10072295(int param_1)
 * called by: FUN_10071edb
 */
int __cdecl FUN_10072295(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LPVOID pvVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *lpAddress;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar9 = 0;
  for (iVar4 = *(int *)(param_1 + 8); -1 < iVar4; iVar4 = iVar4 << 1) {
    iVar9 = iVar9 + 1;
  }
  iVar8 = 0x3f;
  iVar4 = iVar9 * 0x204 + 0x144 + iVar3;
  iVar5 = iVar4;
  do {
    *(int *)(iVar5 + 8) = iVar5;
    *(int *)(iVar5 + 4) = iVar5;
    iVar5 = iVar5 + 8;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  lpAddress = (int *)(iVar9 * 0x8000 + *(int *)(param_1 + 0xc));
  pvVar6 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar6 == (LPVOID)0x0) {
    iVar9 = -1;
  }
  else {
    if (lpAddress <= lpAddress + 0x1c00) {
      piVar7 = lpAddress + 4;
      do {
        piVar7[-2] = -1;
        piVar7[0x3fb] = -1;
        piVar7[-1] = 0xff0;
        *piVar7 = (int)(piVar7 + 0x3ff);
        piVar7[1] = (int)(piVar7 + -0x401);
        piVar7[0x3fa] = 0xff0;
        piVar1 = piVar7 + 0x3fc;
        piVar7 = piVar7 + 0x400;
      } while (piVar1 <= lpAddress + 0x1c00);
    }
    *(int **)(iVar4 + 0x1fc) = lpAddress + 3;
    lpAddress[5] = iVar4 + 0x1f8;
    *(int **)(iVar4 + 0x200) = lpAddress + 0x1c03;
    lpAddress[0x1c04] = iVar4 + 0x1f8;
    *(undefined4 *)(iVar3 + 0x44 + iVar9 * 4) = 0;
    *(undefined4 *)(iVar3 + 0xc4 + iVar9 * 4) = 1;
    cVar2 = *(char *)(iVar3 + 0x43);
    *(char *)(iVar3 + 0x43) = cVar2 + '\x01';
    if (cVar2 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(0x80000000U >> ((byte)iVar9 & 0x1f));
  }
  return iVar9;
}

/* 10072390  FUN_10072390  (758 bytes)
 * undefined4 FUN_10072390(uint * param_1, int param_2, int param_3)
 * called by: FUN_1006dd71
 */
undefined4 __cdecl FUN_10072390(uint *param_1,int param_2,int param_3)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_c;
  
  uVar5 = param_1[4];
  uVar12 = param_3 + 0x17U & 0xfffffff0;
  uVar10 = param_2 - param_1[3] >> 0xf;
  iVar3 = uVar10 * 0x204 + 0x144 + uVar5;
  iVar6 = *(int *)(param_2 + -4);
  iVar9 = iVar6 + -1;
  uVar13 = *(uint *)(iVar6 + -5 + param_2);
  iVar6 = iVar6 + -5 + param_2;
  if (iVar9 < (int)uVar12) {
    if (((uVar13 & 1) != 0) || ((int)(uVar13 + iVar9) < (int)uVar12)) {
      return 0;
    }
    local_c = ((int)uVar13 >> 4) - 1;
    if (0x3f < local_c) {
      local_c = 0x3f;
    }
    if (*(int *)(iVar6 + 4) == *(int *)(iVar6 + 8)) {
      if (local_c < 0x20) {
        pcVar1 = (char *)(local_c + 4 + uVar5);
        uVar11 = ~(0x80000000U >> ((byte)local_c & 0x1f));
        puVar7 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
        *puVar7 = *puVar7 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar11;
        }
      }
      else {
        pcVar1 = (char *)(local_c + 4 + uVar5);
        uVar11 = ~(0x80000000U >> ((byte)local_c - 0x20 & 0x1f));
        puVar7 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
        *puVar7 = *puVar7 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar11;
        }
      }
    }
    *(undefined4 *)(*(int *)(iVar6 + 8) + 4) = *(undefined4 *)(iVar6 + 4);
    *(undefined4 *)(*(int *)(iVar6 + 4) + 8) = *(undefined4 *)(iVar6 + 8);
    iVar6 = uVar13 + (iVar9 - uVar12);
    if (0 < iVar6) {
      uVar13 = (iVar6 >> 4) - 1;
      iVar9 = param_2 + -4 + uVar12;
      if (0x3f < uVar13) {
        uVar13 = 0x3f;
      }
      iVar3 = iVar3 + uVar13 * 8;
      *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(iVar3 + 4);
      *(int *)(iVar9 + 8) = iVar3;
      *(int *)(iVar3 + 4) = iVar9;
      *(int *)(*(int *)(iVar9 + 4) + 8) = iVar9;
      if (*(int *)(iVar9 + 4) == *(int *)(iVar9 + 8)) {
        cVar4 = *(char *)(uVar13 + 4 + uVar5);
        *(char *)(uVar13 + 4 + uVar5) = cVar4 + '\x01';
        bVar8 = (byte)uVar13;
        if (uVar13 < 0x20) {
          if (cVar4 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
          }
          puVar7 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
        }
        else {
          if (cVar4 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
          }
          puVar7 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
          bVar8 = bVar8 - 0x20;
        }
        *puVar7 = *puVar7 | 0x80000000U >> (bVar8 & 0x1f);
      }
      piVar2 = (int *)(param_2 + -4 + uVar12);
      *piVar2 = iVar6;
      *(int *)(iVar6 + -4 + (int)piVar2) = iVar6;
    }
    *(uint *)(param_2 + -4) = uVar12 + 1;
    *(uint *)(param_2 + -8 + uVar12) = uVar12 + 1;
  }
  else if ((int)uVar12 < iVar9) {
    param_3 = iVar9 - uVar12;
    *(uint *)(param_2 + -4) = uVar12 + 1;
    piVar2 = (int *)(param_2 + -4 + uVar12);
    uVar11 = (param_3 >> 4) - 1;
    piVar2[-1] = uVar12 + 1;
    if (0x3f < uVar11) {
      uVar11 = 0x3f;
    }
    if ((uVar13 & 1) == 0) {
      uVar12 = ((int)uVar13 >> 4) - 1;
      if (0x3f < uVar12) {
        uVar12 = 0x3f;
      }
      if (*(int *)(iVar6 + 4) == *(int *)(iVar6 + 8)) {
        if (uVar12 < 0x20) {
          pcVar1 = (char *)(uVar12 + 4 + uVar5);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 & 0x1f));
          puVar7 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
          *puVar7 = *puVar7 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar12;
          }
        }
        else {
          pcVar1 = (char *)(uVar12 + 4 + uVar5);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 - 0x20 & 0x1f));
          puVar7 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
          *puVar7 = *puVar7 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar12;
          }
        }
      }
      *(undefined4 *)(*(int *)(iVar6 + 8) + 4) = *(undefined4 *)(iVar6 + 4);
      *(undefined4 *)(*(int *)(iVar6 + 4) + 8) = *(undefined4 *)(iVar6 + 8);
      param_3 = param_3 + uVar13;
      uVar11 = (param_3 >> 4) - 1;
      if (0x3f < uVar11) {
        uVar11 = 0x3f;
      }
    }
    iVar6 = iVar3 + uVar11 * 8;
    piVar2[1] = *(int *)(iVar3 + 4 + uVar11 * 8);
    piVar2[2] = iVar6;
    *(int **)(iVar6 + 4) = piVar2;
    *(int **)(piVar2[1] + 8) = piVar2;
    if (piVar2[1] == piVar2[2]) {
      cVar4 = *(char *)(uVar11 + 4 + uVar5);
      *(char *)(uVar11 + 4 + uVar5) = cVar4 + '\x01';
      bVar8 = (byte)uVar11;
      if (uVar11 < 0x20) {
        if (cVar4 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
        }
        puVar7 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
      }
      else {
        if (cVar4 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
        puVar7 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
        bVar8 = bVar8 - 0x20;
      }
      *puVar7 = *puVar7 | 0x80000000U >> (bVar8 & 0x1f);
    }
    *piVar2 = param_3;
    *(int *)(param_3 + -4 + (int)piVar2) = param_3;
  }
  return 1;
}

/* 10072686  FUN_10072686  (27 bytes)
 * undefined4 FUN_10072686(undefined4 param_1)
 * called by: FUN_1006dd71, FUN_10074261, __nh_malloc
 */
undefined4 __cdecl FUN_10072686(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_10191ea4 != (code *)0x0) {
    iVar1 = (*DAT_10191ea4)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* 100728c0  FUN_100728c0  (23 bytes)
 * float10 FUN_100728c0(undefined4 param_1, undefined4 param_2, undefined2 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
 * called by: FUN_1006c4b2, FUN_10072a09
 */
float10 __fastcall
FUN_100728c0(undefined4 param_1,uint param_2,undefined2 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float10 in_ST0;
  int local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 local_10;
  double dStack_c;
  
  local_14 = param_7;
  local_10 = param_8;
  dStack_c = (double)in_ST0;
  uStack_1c = param_5;
  uStack_18 = param_6;
  uStack_20 = param_1;
  FUN_10074e9a(param_2,&local_24,&param_3);
  return (float10)dStack_c;
}

/* 10072920  FUN_10072920  (21 bytes)
 * undefined1[10] FUN_10072920(void)
 * called by: FUN_1006c4b2
 */
undefined1  [10] FUN_10072920(void)

{
  float10 in_ST0;
  float10 fVar1;
  undefined1 auVar2 [10];
  
  fVar1 = (float10)f2xm1(-(ROUND(in_ST0) - in_ST0));
  auVar2 = (undefined1  [10])fscale((float10)1 + fVar1,ROUND(in_ST0));
  return auVar2;
}

/* 10072935  FUN_10072935  (23 bytes)
 * undefined FUN_10072935(void)
 * called by: FUN_1006c4b2, FUN_1006c6cd, FUN_1006c9cd
 */
void FUN_10072935(void)

{
  return;
}

/* 1007294c  FUN_1007294c  (25 bytes)
 * undefined4 FUN_1007294c(void)
 * called by: FUN_1006c6cd, FUN_1006c9cd
 */
undefined4 FUN_1007294c(void)

{
  uint in_EAX;
  
  if ((in_EAX & 0x80000) != 0) {
    return 7;
  }
  return 1;
}

/* 100729a8  FUN_100729a8  (22 bytes)
 * uint FUN_100729a8(undefined4 param_1, uint param_2)
 * called by: FUN_1006c6b0, FUN_1006c9b0
 */
uint __cdecl FUN_100729a8(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return param_2 & 0x7ff00000;
  }
  return param_2;
}

/* 100729be  FUN_100729be  (13 bytes)
 * undefined FUN_100729be(void)
 * called by: FUN_1006c4b2
 */
void FUN_100729be(void)

{
  return;
}

/* 10072a09  FUN_10072a09  (163 bytes)
 * undefined FUN_10072a09(undefined4 param_1, uint param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 * called by: FUN_1006c4b2
 */
void __fastcall
FUN_10072a09(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  ushort in_FPUStatusWord;
  float10 in_ST0;
  ushort unaff_retaddr;
  uint uStack_4;
  
  uStack_4 = (uint)((ulonglong)(double)in_ST0 >> 0x20);
  if (((ulonglong)(double)in_ST0 & 0x7ff0000000000000) == 0) {
    fscale(in_ST0,(float10)1536.0);
  }
  else if ((uStack_4 & 0x7ff00000) == 0x7ff00000) {
    fscale(in_ST0,(float10)-1536.0);
  }
  else if (((unaff_retaddr == 0x27f) || ((unaff_retaddr & 0x20) != 0)) ||
          ((in_FPUStatusWord & 0x20) == 0)) {
    return;
  }
  if (param_2 == 0x1d) {
    FUN_100728c0(param_1,0x1d,unaff_retaddr,param_3,param_4,param_5,param_6,param_7);
    return;
  }
  __startOneArgErrorHandling(param_1,param_2,unaff_retaddr,param_3,param_4,param_5);
  return;
}

/* 10072aac  FUN_10072aac  (304 bytes)
 * undefined4 FUN_10072aac(int param_1, int param_2, double param_3, double * param_4)
 * called by: FUN_1006c4b2
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10072aac(int param_1,int param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  
  dVar1 = (double)CONCAT44(param_2,param_1);
  if ((double)CONCAT44(param_2,param_1) < 0.0) {
    dVar1 = -dVar1;
  }
  dVar2 = _DAT_10098130;
  if (param_3._4_4_ == 0x7ff00000) {
    if (param_3._0_4_ != 0) {
LAB_10072b37:
      if (param_2 == 0x7ff00000) {
        if (param_1 != 0) {
          return 0;
        }
        if (0.0 < param_3) goto LAB_10072bd2;
        if (param_3 < 0.0) goto LAB_10072b69;
      }
      else {
        if (param_2 != -0x100000) {
          return 0;
        }
        if (param_1 != 0) {
          return 0;
        }
        iVar3 = FUN_10072bdc(param_3);
        if (0.0 < param_3) {
          dVar2 = _DAT_10098130;
          if (iVar3 == 1) {
            dVar2 = -_DAT_10098130;
          }
          goto LAB_10072bd2;
        }
        if (param_3 < 0.0) {
          dVar2 = _DAT_10098150;
          if (iVar3 != 1) {
            dVar2 = 0.0;
          }
          goto LAB_10072bd2;
        }
      }
      dVar2 = 1.0;
      goto LAB_10072bd2;
    }
    if (1.0 < dVar1) goto LAB_10072bd2;
    if (1.0 <= dVar1) {
LAB_10072afc:
      *param_4 = _DAT_10098138;
      return 1;
    }
  }
  else {
    if (param_3 != -INFINITY) goto LAB_10072b37;
    if (dVar1 <= 1.0) {
      if (1.0 <= dVar1) goto LAB_10072afc;
      goto LAB_10072bd2;
    }
  }
LAB_10072b69:
  dVar2 = 0.0;
LAB_10072bd2:
  *param_4 = dVar2;
  return 0;
}

/* 10072bdc  FUN_10072bdc  (101 bytes)
 * undefined4 FUN_10072bdc(double param_1)
 * called by: FUN_10072aac
 */
undefined4 __cdecl FUN_10072bdc(double param_1)

{
  uint uVar1;
  float10 fVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_10075835(SUB84(param_1,0),(uint)((ulonglong)param_1 >> 0x20));
  if ((uVar1 & 0x90) == 0) {
    fVar2 = __frnd(param_1);
    if ((double)fVar2 == param_1) {
      fVar2 = __frnd(param_1 / 2.0);
      if (fVar2 == (float10)(param_1 / 2.0)) {
        uVar3 = 2;
      }
      else {
        uVar3 = 1;
      }
      return uVar3;
    }
  }
  return 0;
}

/* 10072c41  FUN_10072c41  (511 bytes)
 * int FUN_10072c41(LCID param_1, uint param_2, char * param_3, int param_4, LPWSTR param_5, int param_6, UINT param_7, int param_8)
 * called by: FUN_1006c7ea, FUN_10073a7a, FUN_10075b9d, FUN_10077606
 */
int __cdecl
FUN_10072c41(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10082090;
  pcStack_10 = FUN_10072fe4;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10191ed4 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10191ed4 = 2;
    }
    else {
      DAT_10191ed4 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_10072e65(param_3,param_4);
  }
  if (DAT_10191ed4 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_10191ed4 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_10191ecc;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_1006b970();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_1006b970();
            local_8 = 0xffffffff;
            if (&stack0x00000000 == (undefined1 *)0x3c) {
              ExceptionList = local_14;
              return 0;
            }
            iVar1 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,
                                 (LPWSTR)&stack0xffffffc4,iVar2);
            if (iVar1 == 0) {
              ExceptionList = local_14;
              return 0;
            }
            if (param_6 == 0) {
              param_6 = 0;
              param_5 = (LPWSTR)0x0;
            }
            iVar2 = WideCharToMultiByte(param_7,0x220,(LPCWSTR)&stack0xffffffc4,iVar2,(LPSTR)param_5
                                        ,param_6,(LPCSTR)0x0,(LPBOOL)0x0);
            iVar1 = iVar2;
          }
          else {
            if (param_6 == 0) {
              ExceptionList = local_14;
              return iVar2;
            }
            if (param_6 < iVar2) {
              ExceptionList = local_14;
              return 0;
            }
            iVar1 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,param_5,param_6);
          }
          if (iVar1 != 0) {
            ExceptionList = local_14;
            return iVar2;
          }
        }
      }
    }
  }
  ExceptionList = local_14;
  return 0;
}

/* 10072d51  FUN_10072d51  (4 bytes)
 * undefined FUN_10072d51()
 */
undefined4 FUN_10072d51(void)

{
  return 1;
}

/* 10072e05  FUN_10072e05  (4 bytes)
 * undefined FUN_10072e05()
 */
undefined4 FUN_10072e05(void)

{
  return 1;
}

/* 10072e65  FUN_10072e65  (43 bytes)
 * int FUN_10072e65(char * param_1, int param_2)
 * called by: FUN_10072c41, FUN_1007706f
 */
int __cdecl FUN_10072e65(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = param_2;
  for (pcVar1 = param_1; (iVar2 != 0 && (iVar2 = iVar2 + -1, *pcVar1 != '\0')); pcVar1 = pcVar1 + 1)
  {
  }
  if (*pcVar1 != '\0') {
    return param_2;
  }
  return (int)pcVar1 - (int)param_1;
}

/* 10072e90  FUN_10072e90  (318 bytes)
 * BOOL FUN_10072e90(DWORD param_1, LPCSTR param_2, int param_3, LPWORD param_4, UINT param_5, LCID param_6, int param_7)
 * called by: FUN_1006c8b6, FUN_10075b9d
 */
BOOL __cdecl
FUN_10072e90(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
            int param_7)

{
  undefined1 *puVar1;
  BOOL BVar2;
  int iVar3;
  WORD local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100820a8;
  pcStack_10 = FUN_10072fe4;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_10191ed8;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_10191ed8 == 0) {
    ExceptionList = &local_14;
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    iVar3 = 1;
    puVar1 = local_1c;
    if (BVar2 == 0) {
      BVar2 = GetStringTypeA(0,1,"",1,local_20);
      if (BVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      iVar3 = 2;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  DAT_10191ed8 = iVar3;
  if (DAT_10191ed8 != 2) {
    if (DAT_10191ed8 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_10191ecc;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_1006b970();
        local_1c = &stack0xffffffc8;
        _memset(&stack0xffffffc8,0,iVar3 * 2);
        local_8 = 0xffffffff;
        if ((&stack0x00000000 != (undefined1 *)0x38) &&
           (iVar3 = MultiByteToWideChar(param_5,1,param_2,param_3,(LPWSTR)&stack0xffffffc8,iVar3),
           iVar3 != 0)) {
          BVar2 = GetStringTypeW(param_1,(LPCWSTR)&stack0xffffffc8,iVar3,param_4);
          ExceptionList = local_14;
          return BVar2;
        }
      }
    }
    ExceptionList = local_14;
    return 0;
  }
  if (param_6 == 0) {
    param_6 = DAT_10191ebc;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}

/* 10072f89  FUN_10072f89  (4 bytes)
 * undefined FUN_10072f89()
 */
undefined4 FUN_10072f89(void)

{
  return 1;
}

/* 10072fe4  FUN_10072fe4  (189 bytes)
 * undefined FUN_10072fe4()
 */
undefined4 FUN_10072fe4(int param_1,PVOID param_2,undefined4 param_3)

{
  int iVar1;
  int extraout_ECX;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  int iStack_c;
  undefined4 uStack_8;
  
  puVar4 = &stack0xfffffffc;
  puVar2 = &stack0xfffffffc;
  if ((*(uint *)(param_1 + 4) & 6) == 0) {
    iStack_c = param_1;
    uStack_8 = param_3;
    *(int **)((int)param_2 + -4) = &iStack_c;
    iVar1 = *(int *)((int)param_2 + 8);
    for (iVar3 = *(int *)((int)param_2 + 0xc); iVar3 != -1; iVar3 = *(int *)(iVar1 + iVar3 * 0xc)) {
      if (*(int *)(iVar1 + 4 + iVar3 * 0xc) != 0) {
        iVar1 = (**(code **)(iVar1 + 4 + iVar3 * 0xc))(puVar2,iVar3,puVar4);
        param_2 = *(PVOID *)(puVar2 + 0xc);
        if (iVar1 != 0) {
          if (iVar1 < 0) {
            return 0;
          }
          iVar1 = *(int *)((int)param_2 + 8);
          __global_unwind2(param_2);
          puVar2 = (undefined1 *)((int)param_2 + 0x10);
          __local_unwind2((int)param_2,iVar3);
          FUN_1006b362();
          *(undefined4 *)((int)param_2 + 0xc) = *(undefined4 *)(iVar1 + extraout_ECX * 4);
          (**(code **)(iVar1 + 8 + extraout_ECX * 4))();
        }
      }
      iVar1 = *(int *)((int)param_2 + 8);
    }
  }
  else {
    __local_unwind2((int)param_2,-1);
  }
  return 1;
}

/* 100730a1  FUN_100730a1  (27 bytes)
 * undefined FUN_100730a1(int param_1)
 */
void FUN_100730a1(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}

/* 100730bc  FUN_100730bc  (185 bytes)
 * undefined FUN_100730bc(void)
 * called by: FUN_1006ccfc
 */
void FUN_100730bc(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_101934f0 == 0) {
    FUN_10075d22();
  }
  iVar5 = 0;
  for (puVar6 = DAT_10191e1c; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  DAT_10191ddc = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_10191e1c;
  puVar6 = DAT_10191e1c;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_100740c0((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_1006c158(DAT_10191e1c);
  DAT_10191e1c = (uint *)0x0;
  *puVar3 = 0;
  DAT_101934ec = 1;
  return;
}

/* 10073175  FUN_10073175  (153 bytes)
 * undefined FUN_10073175(void)
 * called by: FUN_1006ccfc
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10073175(void)

{
  undefined4 *puVar1;
  byte_conflict *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_101934f0 == 0) {
    FUN_10075d22();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_10191edc,0x104);
  _DAT_10191dec = &DAT_10191edc;
  pbVar2 = &DAT_10191edc;
  if (*DAT_101934e4 != '\0') {
    pbVar2 = DAT_101934e4;
  }
  FUN_1007320e(pbVar2,(undefined4 *)0x0,(byte_conflict *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_1007320e(pbVar2,puVar1,(byte_conflict *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_10191dd4 = puVar1;
  _DAT_10191dd0 = local_8 + -1;
  return;
}

/* 1007320e  FUN_1007320e  (436 bytes)
 * undefined FUN_1007320e(byte.conflict * param_1, undefined4 * param_2, byte.conflict * param_3, int * param_4, int * param_5)
 * called by: FUN_10073175
 */
void __cdecl
FUN_1007320e(byte_conflict *param_1,undefined4 *param_2,byte_conflict *param_3,int *param_4,
            int *param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  if (*param_1 == '\"') {
    while( true ) {
      bVar1 = param_1[1];
      pbVar4 = param_1 + 1;
      if ((bVar1 == 0x22) || (bVar1 == 0)) break;
      if (((*(byte *)((int)&DAT_10192280 + bVar1 + 1) & 4) != 0) &&
         (*param_5 = *param_5 + 1, param_3 != (byte *)0x0)) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
        pbVar4 = param_1 + 2;
      }
      *param_5 = *param_5 + 1;
      param_1 = pbVar4;
      if (param_3 != (byte *)0x0) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
      }
    }
    *param_5 = *param_5 + 1;
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    if (*pbVar4 == 0x22) {
      pbVar4 = param_1 + 2;
    }
  }
  else {
    do {
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      bVar1 = *param_1;
      pbVar4 = param_1 + 1;
      if ((*(byte *)((int)&DAT_10192280 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_100732b9;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_100732b9:
      pbVar4 = pbVar4 + -1;
    }
    else if (param_3 != (byte *)0x0) {
      param_3[-1] = 0;
    }
  }
  bVar2 = false;
  puVar7 = param_2;
  while (*pbVar4 != 0) {
    for (; (*pbVar4 == 0x20 || (*pbVar4 == 9)); pbVar4 = pbVar4 + 1) {
    }
    if (*pbVar4 == 0) break;
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = param_3;
      puVar7 = puVar7 + 1;
      param_2 = puVar7;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar3 = true;
      uVar6 = 0;
      for (; *pbVar4 == 0x5c; pbVar4 = pbVar4 + 1) {
        uVar6 = uVar6 + 1;
      }
      if (*pbVar4 == 0x22) {
        pbVar5 = pbVar4;
        if ((uVar6 & 1) == 0) {
          if ((!bVar2) || (pbVar5 = pbVar4 + 1, pbVar4[1] != 0x22)) {
            bVar3 = false;
            pbVar5 = pbVar4;
          }
          bVar2 = !bVar2;
          puVar7 = param_2;
        }
        uVar6 = uVar6 >> 1;
        pbVar4 = pbVar5;
      }
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      bVar1 = *pbVar4;
      if ((bVar1 == 0) || ((!bVar2 && ((bVar1 == 0x20 || (bVar1 == 9)))))) break;
      if (bVar3) {
        if (param_3 == (byte *)0x0) {
          if ((*(byte *)((int)&DAT_10192280 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_10192280 + bVar1 + 1) & 4) != 0) {
            *param_3 = bVar1;
            param_3 = param_3 + 1;
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      pbVar4 = pbVar4 + 1;
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}

/* 100733c2  FUN_100733c2  (306 bytes)
 * LPSTR FUN_100733c2(void)
 * called by: FUN_1006ccfc
 */
LPSTR FUN_100733c2(void)

{
  char cVar1;
  WCHAR WVar2;
  WCHAR *pWVar3;
  WCHAR *pWVar4;
  int iVar5;
  size_t _Size;
  LPSTR pCVar6;
  char *pcVar7;
  LPWCH lpWideCharStr;
  LPCH pCVar9;
  LPSTR local_8;
  char *pcVar8;
  
  lpWideCharStr = (LPWCH)0x0;
  pCVar9 = (LPCH)0x0;
  if (DAT_10191fe0 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_10191fe0 = 1;
LAB_10073419:
      if ((lpWideCharStr == (LPWCH)0x0) &&
         (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr == (LPWCH)0x0)) {
        return (LPSTR)0x0;
      }
      WVar2 = *lpWideCharStr;
      pWVar4 = lpWideCharStr;
      while (WVar2 != L'\0') {
        do {
          pWVar3 = pWVar4;
          pWVar4 = pWVar3 + 1;
        } while (*pWVar4 != L'\0');
        pWVar4 = pWVar3 + 2;
        WVar2 = *pWVar4;
      }
      iVar5 = ((int)pWVar4 - (int)lpWideCharStr >> 1) + 1;
      _Size = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      local_8 = (LPSTR)0x0;
      if (((_Size != 0) && (pCVar6 = _malloc(_Size), pCVar6 != (LPSTR)0x0)) &&
         (iVar5 = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,pCVar6,_Size,(LPCSTR)0x0,(LPBOOL)0x0),
         local_8 = pCVar6, iVar5 == 0)) {
        FUN_1006c158(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_10191fe0 = 2;
  }
  else {
    if (DAT_10191fe0 == 1) goto LAB_10073419;
    if (DAT_10191fe0 != 2) {
      return (LPSTR)0x0;
    }
  }
  if ((pCVar9 == (LPCH)0x0) && (pCVar9 = GetEnvironmentStrings(), pCVar9 == (LPCH)0x0)) {
    return (LPSTR)0x0;
  }
  cVar1 = *pCVar9;
  pcVar7 = pCVar9;
  while (cVar1 != '\0') {
    do {
      pcVar8 = pcVar7;
      pcVar7 = pcVar8 + 1;
    } while (*pcVar7 != '\0');
    pcVar7 = pcVar8 + 2;
    cVar1 = *pcVar7;
  }
  pCVar6 = _malloc((size_t)(pcVar7 + (1 - (int)pCVar9)));
  if (pCVar6 == (LPSTR)0x0) {
    pCVar6 = (LPSTR)0x0;
  }
  else {
    FUN_1006f3d0((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}

/* 100734f4  FUN_100734f4  (6 bytes)
 * undefined4 FUN_100734f4(void)
 * called by: entry
 */
undefined4 FUN_100734f4(void)

{
  return 1;
}

/* 100734fa  FUN_100734fa  (57 bytes)
 * undefined FUN_100734fa(void)
 * called by: __amsg_exit
 */
void FUN_100734fa(void)

{
  if ((DAT_10191e24 == 1) || ((DAT_10191e24 == 0 && (DAT_10191e28 == 1)))) {
    FUN_10073533(0xfc);
    if (DAT_10191fe4 != (code *)0x0) {
      (*DAT_10191fe4)();
    }
    FUN_10073533(0xff);
  }
  return;
}

/* 10073533  FUN_10073533  (339 bytes)
 * undefined FUN_10073533(DWORD param_1)
 * called by: FUN_100734fa, FUN_100742ee, __amsg_exit
 */
void __cdecl FUN_10073533(DWORD param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  size_t sVar4;
  HANDLE hFile;
  int iVar5;
  uint *_Dest;
  undefined1 auStackY_1e3 [7];
  LPCVOID lpBuffer;
  LPOVERLAPPED lpOverlapped;
  uint local_1a8 [65];
  uint local_a4 [40];
  
  iVar5 = 0;
  pDVar2 = &DAT_10097ec0;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x10097f50);
  if (param_1 == (&DAT_10097ec0)[iVar5 * 2]) {
    if ((DAT_10191e24 == 1) || ((DAT_10191e24 == 0 && (DAT_10191e28 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x10097ec4);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_100740c0(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_100740c0(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_100740d0(local_a4,_Dest);
      FUN_100740d0(local_a4,(uint *)&DAT_10082368);
      FUN_100740d0(local_a4,*(uint **)(iVar5 * 8 + 0x10097ec4));
      auStackY_1e3._3_4_ = 0x10073657;
      FUN_10075d3e(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}

/* 10073686  FUN_10073686  (68 bytes)
 * undefined FUN_10073686(undefined4 * param_1)
 * called by: FUN_1006cea5, FUN_1006f0ae, FUN_100750af
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10073686(undefined4 *param_1)

{
  void *pvVar1;
  
  _DAT_10191e90 = _DAT_10191e90 + 1;
  pvVar1 = _malloc(0x1000);
  param_1[2] = pvVar1;
  if (pvVar1 == (void *)0x0) {
    param_1[3] = param_1[3] | 4;
    param_1[2] = param_1 + 5;
    param_1[6] = 2;
  }
  else {
    param_1[3] = param_1[3] | 8;
    param_1[6] = 0x1000;
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return;
}

/* 100736ca  FUN_100736ca  (41 bytes)
 * byte.conflict FUN_100736ca(uint param_1)
 * called by: FUN_1006cea5
 */
byte_conflict __cdecl FUN_100736ca(uint param_1)

{
  if (DAT_101924c0 <= param_1) {
    return '\0';
  }
  return *(byte *)((&DAT_101923c0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}

/* 100736f3  FUN_100736f3  (89 bytes)
 * int FUN_100736f3(LPSTR param_1, WCHAR param_2)
 * called by: FUN_1006cfbd
 */
int __cdecl FUN_100736f3(LPSTR param_1,WCHAR param_2)

{
  int iVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_1019238c);
  bVar2 = DAT_10192388 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_1019238c);
    FUN_1006dcfb(0x13);
  }
  iVar1 = FUN_1007374c(param_1,param_2);
  if (bVar2) {
    FUN_1006dd5c(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_1019238c);
  }
  return iVar1;
}

/* 1007374c  FUN_1007374c  (105 bytes)
 * int FUN_1007374c(LPSTR param_1, WCHAR param_2)
 * called by: FUN_100736f3
 */
int __cdecl FUN_1007374c(LPSTR param_1,WCHAR param_2)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  DWORD *pDVar2;
  
  lpMultiByteStr = param_1;
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_10191ebc == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    iVar1 = WideCharToMultiByte(DAT_10191ecc,0x220,&param_2,1,lpMultiByteStr,DAT_10097674,
                                (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((iVar1 != 0) && (param_1 == (LPSTR)0x0)) {
      return iVar1;
    }
  }
  pDVar2 = FUN_1006edb4();
  *pDVar2 = 0x2a;
  return -1;
}

/* 100738a5  FUN_100738a5  (53 bytes)
 * uint FUN_100738a5(uint param_1, uint param_2)
 * called by: FUN_100738da
 */
uint __thiscall FUN_100738a5(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_100738f0(local_8);
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_10073982(uVar1);
  return uVar1;
}

/* 100738da  FUN_100738da  (22 bytes)
 * undefined FUN_100738da(uint param_1, uint param_2)
 * called by: FUN_1006d7c7
 */
void __thiscall FUN_100738da(void *this,uint param_1,uint param_2)

{
  FUN_100738a5(this,param_1,param_2 & 0xfff7ffff);
  return;
}

/* 100738f0  FUN_100738f0  (146 bytes)
 * uint FUN_100738f0(uint param_1)
 * called by: FUN_100738a5
 */
uint __cdecl FUN_100738f0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_1 & 1) != 0) {
    uVar1 = 0x10;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 0x10) != 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_1 & 0x20) != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x80000;
  }
  uVar2 = param_1 & 0xc00;
  if (uVar2 != 0) {
    if (uVar2 == 0x400) {
      uVar1 = uVar1 | 0x100;
    }
    else if (uVar2 == 0x800) {
      uVar1 = uVar1 | 0x200;
    }
    else if (uVar2 == 0xc00) {
      uVar1 = uVar1 | 0x300;
    }
  }
  if ((param_1 & 0x300) == 0) {
    uVar1 = uVar1 | 0x20000;
  }
  else if ((param_1 & 0x300) == 0x200) {
    uVar1 = uVar1 | 0x10000;
  }
  if ((param_1 & 0x1000) != 0) {
    uVar1 = uVar1 | 0x40000;
  }
  return uVar1;
}

/* 10073982  FUN_10073982  (137 bytes)
 * uint FUN_10073982(uint param_1)
 * called by: FUN_100738a5
 */
uint __cdecl FUN_10073982(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)((param_1 & 0x10) != 0);
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((param_1 & 1) != 0) {
    uVar1 = uVar1 | 0x20;
  }
  if ((param_1 & 0x80000) != 0) {
    uVar1 = uVar1 | 2;
  }
  uVar2 = param_1 & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x400;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x800;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0xc00;
    }
  }
  if ((param_1 & 0x30000) == 0) {
    uVar1 = uVar1 | 0x300;
  }
  else if ((param_1 & 0x30000) == 0x10000) {
    uVar1 = uVar1 | 0x200;
  }
  if ((param_1 & 0x40000) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  return uVar1;
}

/* 10073a0b  FUN_10073a0b  (111 bytes)
 * uint FUN_10073a0b(uint param_1)
 * called by: FUN_1006d840
 */
uint __cdecl FUN_10073a0b(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_10191ebc == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_1019238c);
    bVar1 = DAT_10192388 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_1019238c);
      this = (void *)0x13;
      FUN_1006dcfb(0x13);
    }
    param_1 = FUN_10073a7a(this,param_1);
    if (bVar1) {
      FUN_1006dd5c(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_1019238c);
    }
  }
  return param_1;
}

/* 10073a7a  FUN_10073a7a  (203 bytes)
 * uint FUN_10073a7a(uint param_1)
 * called by: FUN_10073a0b, FUN_10076d90, FUN_10076e60
 */
uint __thiscall FUN_10073a7a(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_10191ebc == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    iVar3 = 1;
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_10097674 < 2) {
        uVar2 = (byte)PTR_DAT_10097468[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_1006c8b6(this,param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_10097468[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_10072c41(DAT_10191ebc,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        uVar1 = (uint)local_8 & 0xff;
      }
      else {
        uVar1 = (uint)local_8 & 0xffff;
      }
    }
  }
  return uVar1;
}

/* 10073b45  FUN_10073b45  (73 bytes)
 * undefined4 FUN_10073b45(int param_1, int param_2)
 * called by: FUN_10073be4
 */
undefined4 __cdecl FUN_10073b45(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + (param_2 / 0x20) * 4) & ~(-1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f)))
      != 0) {
    return 0;
  }
  iVar2 = param_2 / 0x20 + 1;
  if (iVar2 < 3) {
    piVar1 = (int *)(param_1 + iVar2 * 4);
    do {
      if (*piVar1 != 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < 3);
  }
  return 1;
}

/* 10073b8e  FUN_10073b8e  (86 bytes)
 * undefined FUN_10073b8e(int param_1, int param_2)
 * called by: FUN_10073be4
 */
void __cdecl FUN_10073b8e(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  iVar1 = FUN_10075f86(*puVar3,1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f),puVar3);
  iVar2 = param_2 / 0x20 + -1;
  if (-1 < iVar2) {
    puVar3 = (uint *)(param_1 + iVar2 * 4);
    do {
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_10075f86(*puVar3,1,puVar3);
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -1;
    } while (-1 < iVar2);
  }
  return;
}

/* 10073be4  FUN_10073be4  (140 bytes)
 * undefined4 FUN_10073be4(int param_1, int param_2)
 * called by: FUN_10073d3f
 */
undefined4 __cdecl FUN_10073be4(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_8;
  
  local_8 = 0;
  puVar1 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  bVar3 = 0x1f - (char)(param_2 % 0x20);
  if (((*puVar1 & 1 << (bVar3 & 0x1f)) != 0) &&
     (iVar2 = FUN_10073b45(param_1,param_2 + 1), iVar2 == 0)) {
    local_8 = FUN_10073b8e(param_1,param_2 + -1);
  }
  *puVar1 = *puVar1 & -1 << (bVar3 & 0x1f);
  iVar2 = param_2 / 0x20 + 1;
  if (iVar2 < 3) {
    puVar5 = (undefined4 *)(param_1 + iVar2 * 4);
    for (iVar4 = 3 - iVar2; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  return local_8;
}

/* 10073c70  FUN_10073c70  (27 bytes)
 * undefined FUN_10073c70(int param_1, undefined4 * param_2)
 * called by: FUN_10073d3f
 */
void __cdecl FUN_10073c70(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 - (int)param_2;
  iVar2 = 3;
  do {
    *(undefined4 *)(iVar1 + (int)param_2) = *param_2;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

/* 10073c8b  FUN_10073c8b  (12 bytes)
 * undefined FUN_10073c8b(undefined4 * param_1)
 * called by: FUN_10073d3f
 */
void __cdecl FUN_10073c8b(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

/* 10073c97  FUN_10073c97  (27 bytes)
 * undefined4 FUN_10073c97(int * param_1)
 * called by: FUN_10073d3f
 */
undefined4 __cdecl FUN_10073c97(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*param_1 != 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 1;
  } while (iVar1 < 3);
  return 1;
}

/* 10073cb2  FUN_10073cb2  (141 bytes)
 * undefined FUN_10073cb2(uint * param_1, uint param_2)
 * called by: FUN_10073d3f
 */
void __cdecl FUN_10073cb2(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int local_8;
  
  local_8 = 3;
  iVar2 = (int)param_2 / 0x20;
  iVar5 = (int)param_2 % 0x20;
  param_2 = 0;
  bVar3 = (byte)iVar5;
  puVar6 = param_1;
  do {
    uVar1 = *puVar6;
    *puVar6 = uVar1 >> (bVar3 & 0x1f) | param_2;
    puVar6 = puVar6 + 1;
    param_2 = (uVar1 & ~(-1 << (bVar3 & 0x1f))) << (0x20 - bVar3 & 0x1f);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  iVar5 = 2;
  iVar4 = 8;
  do {
    if (iVar5 < iVar2) {
      *(undefined4 *)(iVar4 + (int)param_1) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + (int)param_1) = *(undefined4 *)(iVar4 + iVar2 * -4 + (int)param_1);
    }
    iVar5 = iVar5 + -1;
    iVar4 = iVar4 + -4;
  } while (-1 < iVar4);
  return;
}

/* 10073d3f  FUN_10073d3f  (364 bytes)
 * undefined4 FUN_10073d3f(ushort * param_1, uint * param_2, int * param_3)
 * called by: FUN_10073eab, FUN_10073ec1
 */
undefined4 __cdecl FUN_10073d3f(ushort *param_1,uint *param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_1c [3];
  uint local_10;
  uint local_c;
  int local_8;
  
  uVar1 = param_1[5];
  local_10 = *(uint *)(param_1 + 3);
  local_c = *(uint *)(param_1 + 1);
  uVar3 = uVar1 & 0x7fff;
  iVar4 = uVar3 - 0x3fff;
  local_8 = (uint)*param_1 << 0x10;
  if (iVar4 == -0x3fff) {
    iVar4 = 0;
    iVar2 = FUN_10073c97((int *)&local_10);
    if (iVar2 != 0) {
LAB_10073e6b:
      uVar5 = 0;
      goto LAB_10073e6d;
    }
    FUN_10073c8b(&local_10);
  }
  else {
    FUN_10073c70((int)local_1c,&local_10);
    iVar2 = FUN_10073be4((int)&local_10,param_3[2]);
    if (iVar2 != 0) {
      iVar4 = uVar3 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar4 < iVar2 - param_3[2]) {
      FUN_10073c8b(&local_10);
    }
    else {
      if (iVar2 < iVar4) {
        if (*param_3 <= iVar4) {
          FUN_10073c8b(&local_10);
          local_10 = local_10 | 0x80000000;
          FUN_10073cb2(&local_10,param_3[3]);
          iVar4 = param_3[5] + *param_3;
          uVar5 = 1;
          goto LAB_10073e6d;
        }
        local_10 = local_10 & 0x7fffffff;
        iVar4 = param_3[5] + iVar4;
        FUN_10073cb2(&local_10,param_3[3]);
        goto LAB_10073e6b;
      }
      FUN_10073c70((int)&local_10,local_1c);
      FUN_10073cb2(&local_10,iVar2 - iVar4);
      FUN_10073be4((int)&local_10,param_3[2]);
      FUN_10073cb2(&local_10,param_3[3] + 1);
    }
  }
  iVar4 = 0;
  uVar5 = 2;
LAB_10073e6d:
  local_10 = iVar4 << (0x1fU - (char)param_3[3] & 0x1f) |
             -(uint)((uVar1 & 0x8000) != 0) & 0x80000000 | local_10;
  if (param_3[4] == 0x40) {
    param_2[1] = local_10;
    *param_2 = local_c;
  }
  else if (param_3[4] == 0x20) {
    *param_2 = local_10;
  }
  return uVar5;
}

/* 10073eab  FUN_10073eab  (22 bytes)
 * undefined FUN_10073eab(ushort * param_1, uint * param_2)
 * called by: FUN_1006fb2d, FUN_10073ed7
 */
void __cdecl FUN_10073eab(ushort *param_1,uint *param_2)

{
  FUN_10073d3f(param_1,param_2,(int *)&DAT_10097f50);
  return;
}

/* 10073ec1  FUN_10073ec1  (22 bytes)
 * undefined FUN_10073ec1(ushort * param_1, uint * param_2)
 * called by: FUN_10073f04
 */
void __cdecl FUN_10073ec1(ushort *param_1,uint *param_2)

{
  FUN_10073d3f(param_1,param_2,(int *)&DAT_10097f68);
  return;
}

/* 10073ed7  FUN_10073ed7  (45 bytes)
 * undefined FUN_10073ed7(uint * param_1, byte.conflict * param_2)
 * called by: __fassign
 */
void __thiscall FUN_10073ed7(void *this,uint *param_1,byte_conflict *param_2)

{
  ushort local_10 [6];
  
  FUN_100749c9(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_10073eab(local_10,param_1);
  return;
}

/* 10073f04  FUN_10073f04  (45 bytes)
 * undefined FUN_10073f04(uint * param_1, byte.conflict * param_2)
 * called by: __fassign
 */
void __thiscall FUN_10073f04(void *this,uint *param_1,byte_conflict *param_2)

{
  ushort local_10 [6];
  
  FUN_100749c9(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_10073ec1(local_10,param_1);
  return;
}

/* 10073f31  FUN_10073f31  (119 bytes)
 * undefined FUN_10073f31(char * param_1, int param_2, int param_3)
 * called by: FUN_1006d93e, FUN_1006da61, FUN_1006db5d
 */
void __cdecl FUN_10073f31(char *param_1,int param_2,int param_3)

{
  char *_Str;
  char *pcVar1;
  char *pcVar2;
  size_t sVar3;
  char *pcVar4;
  char cVar5;
  
  pcVar1 = param_1;
  pcVar4 = *(char **)(param_3 + 0xc);
  _Str = param_1 + 1;
  *param_1 = '0';
  pcVar2 = _Str;
  if (0 < param_2) {
    param_1 = (char *)param_2;
    param_2 = 0;
    do {
      cVar5 = *pcVar4;
      if (cVar5 == '\0') {
        cVar5 = '0';
      }
      else {
        pcVar4 = pcVar4 + 1;
      }
      *pcVar2 = cVar5;
      pcVar2 = pcVar2 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != (char *)0x0);
  }
  *pcVar2 = '\0';
  if ((-1 < param_2) && ('4' < *pcVar4)) {
    while (pcVar2 = pcVar2 + -1, *pcVar2 == '9') {
      *pcVar2 = '0';
    }
    *pcVar2 = *pcVar2 + '\x01';
  }
  if (*pcVar1 == '1') {
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
  }
  else {
    sVar3 = _strlen(_Str);
    FUN_1006ba20((undefined4 *)pcVar1,(undefined4 *)_Str,sVar3 + 1);
  }
  return;
}

/* 10073fa8  FUN_10073fa8  (92 bytes)
 * int * FUN_10073fa8(undefined4 param_1, undefined4 param_2, int * param_3, uint * param_4)
 * called by: FUN_1006d93e, FUN_1006da61, FUN_1006db5d
 */
int * __cdecl FUN_10073fa8(undefined4 param_1,undefined4 param_2,int *param_3,uint *param_4)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  undefined4 in_stack_ffffffbc;
  undefined2 uVar4;
  short local_2c;
  char local_2a;
  uint local_28 [6];
  uint local_10;
  uint uStack_c;
  undefined2 uStack_8;
  
  uVar4 = (undefined2)((uint)in_stack_ffffffbc >> 0x10);
  FUN_10074004(&local_10,&param_1);
  iVar3 = FUN_10076127(local_10,uStack_c,CONCAT22(uVar4,uStack_8),0x11,'\0',&local_2c);
  puVar2 = param_4;
  piVar1 = param_3;
  param_3[2] = iVar3;
  *param_3 = (int)local_2a;
  param_3[1] = (int)local_2c;
  FUN_100740c0(param_4,local_28);
  piVar1[3] = (int)puVar2;
  return piVar1;
}

/* 10074004  FUN_10074004  (182 bytes)
 * undefined FUN_10074004(uint * param_1, uint * param_2)
 * called by: FUN_10073fa8
 */
void __cdecl FUN_10074004(uint *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint local_8;
  
  uVar1 = *(ushort *)((int)param_2 + 6);
  uVar3 = (uVar1 & 0x7ff0) >> 4;
  uVar2 = *param_2;
  local_8 = 0x80000000;
  if (uVar3 == 0) {
    if (((param_2[1] & 0xfffff) == 0) && (uVar2 == 0)) {
      param_1[1] = 0;
      *param_1 = 0;
      *(undefined2 *)(param_1 + 2) = 0;
      return;
    }
    iVar4 = 0x3c01;
    local_8 = 0;
  }
  else if (uVar3 == 0x7ff) {
    iVar4 = 0x7fff;
  }
  else {
    iVar4 = uVar3 + 0x3c00;
  }
  local_8 = uVar2 >> 0x15 | (param_2[1] & 0xfffff) << 0xb | local_8;
  param_1[1] = local_8;
  *param_1 = uVar2 << 0xb;
  while ((local_8 & 0x80000000) == 0) {
    local_8 = *param_1 >> 0x1f | local_8 * 2;
    *param_1 = *param_1 * 2;
    param_1[1] = local_8;
    iVar4 = iVar4 + 0xffff;
  }
  *(ushort *)(param_1 + 2) = uVar1 & 0x8000 | (ushort)iVar4;
  return;
}

/* 100740c0  FUN_100740c0  (7 bytes)
 * uint * FUN_100740c0(uint * param_1, uint * param_2)
 * called by: FUN_1006d99f, FUN_100730bc, FUN_10073533, FUN_10073fa8, FUN_1007514b, FUN_10076127, FUN_100772ec, FUN_100775c9, FUN_10077606
 */
uint * __cdecl FUN_100740c0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = param_1;
  while (((uint)param_2 & 3) != 0) {
    bVar1 = (byte)*param_2;
    uVar3 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_100741a8;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_100741a8:
        *(byte *)puVar4 = (byte)uVar3;
        return param_1;
      }
      if ((char)(uVar3 >> 8) == '\0') {
        *(short *)puVar4 = (short)uVar3;
        return param_1;
      }
      if ((uVar3 & 0xff0000) == 0) {
        *(short *)puVar4 = (short)uVar3;
        *(byte *)((int)puVar4 + 2) = 0;
        return param_1;
      }
      if ((uVar3 & 0xff000000) == 0) {
        *puVar4 = uVar3;
        return param_1;
      }
    }
    *puVar4 = uVar3;
    puVar4 = puVar4 + 1;
  } while( true );
}

/* 100740d0  FUN_100740d0  (224 bytes)
 * uint * FUN_100740d0(uint * param_1, uint * param_2)
 * called by: FUN_10073533
 */
uint * __cdecl FUN_100740d0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_100740ec;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_1007411f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x1007413b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_100740ec:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x1007413b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x1007413b;
    }
  }
LAB_1007411f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x1007413b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_100741a8:
            *(byte *)puVar5 = (byte)uVar4;
            return param_1;
          }
          if ((char)(uVar4 >> 8) == '\0') {
            *(short *)puVar5 = (short)uVar4;
            return param_1;
          }
          if ((uVar4 & 0xff0000) == 0) {
            *(short *)puVar5 = (short)uVar4;
            *(byte *)((int)puVar5 + 2) = 0;
            return param_1;
          }
          if ((uVar4 & 0xff000000) == 0) {
            *puVar5 = uVar4;
            return param_1;
          }
        }
        *puVar5 = uVar4;
        puVar5 = puVar5 + 1;
      } while( true );
    }
    bVar1 = (byte)*param_2;
    uVar4 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_100741a8;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}

/* 10074211  FUN_10074211  (28 bytes)
 * bool FUN_10074211(void * param_1, UINT_PTR param_2)
 * called by: FUN_1006df89, FUN_1006e4b7
 */
bool __cdecl FUN_10074211(void *param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadReadPtr(param_1,param_2);
  return BVar1 == 0;
}

/* 1007422d  FUN_1007422d  (28 bytes)
 * bool FUN_1007422d(LPVOID param_1, UINT_PTR param_2)
 * called by: FUN_1006e4b7
 */
bool __cdecl FUN_1007422d(LPVOID param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_1,param_2);
  return BVar1 == 0;
}

/* 10074249  FUN_10074249  (24 bytes)
 * bool FUN_10074249(FARPROC param_1)
 * called by: FUN_1006e4b7, FUN_10070e84
 */
bool __cdecl FUN_10074249(FARPROC param_1)

{
  BOOL BVar1;
  
  BVar1 = IsBadCodePtr(param_1);
  return BVar1 == 0;
}

/* 10074261  FUN_10074261  (141 bytes)
 * int * FUN_10074261(int param_1, int param_2)
 * called by: FUN_1006e75c, FUN_1006e7e1, FUN_1006e99f
 */
int * __cdecl FUN_10074261(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint *_Size;
  uint *puVar3;
  
  _Size = (uint *)(param_1 * param_2);
  puVar3 = _Size;
  if (_Size < (uint *)0xffffffe1) {
    if (_Size == (uint *)0x0) {
      puVar3 = (uint *)0x1;
    }
    puVar3 = (uint *)((int)puVar3 + 0xfU & 0xfffffff0);
  }
  do {
    if (puVar3 < (uint *)0xffffffe1) {
      if (_Size < DAT_10097d44 || (int)_Size - (int)DAT_10097d44 == 0) {
        FUN_1006dcfb(9);
        piVar1 = FUN_10071edb(_Size);
        FUN_1006dd5c(9);
        if (piVar1 != (int *)0x0) {
          _memset(piVar1,0,(size_t)_Size);
          return piVar1;
        }
      }
      piVar1 = HeapAlloc(DAT_101923a8,8,(SIZE_T)puVar3);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
    }
    if (DAT_10191ea0 == 0) {
      return (int *)0x0;
    }
    iVar2 = FUN_10072686(puVar3);
  } while (iVar2 != 0);
  return (int *)0x0;
}

/* 100742ee  FUN_100742ee  (23 bytes)
 * undefined FUN_100742ee(void)
 * called by: FUN_1006e8e8
 */
void FUN_100742ee(void)

{
  FUN_10073533(10);
  FUN_10075dc7((DWORD *)0x16);
                    /* WARNING: Subroutine does not return */
  __exit(3);
}

/* 10074386  FUN_10074386  (291 bytes)
 * uint FUN_10074386(void)
 * called by: FUN_100746fa
 */
uint FUN_10074386(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int local_8;
  int local_4;
  
  uVar4 = 0xffffffff;
  FUN_1006dcfb(0x12);
  local_8 = 0;
  local_4 = 0;
  piVar3 = &DAT_101923c0;
  while (puVar2 = (undefined4 *)*piVar3, puVar1 = puVar2, puVar2 != (undefined4 *)0x0) {
    for (; puVar2 < puVar1 + 0x120; puVar2 = puVar2 + 9) {
      if ((*(byte *)(puVar2 + 1) & 1) == 0) {
        if (puVar2[2] == 0) {
          FUN_1006dcfb(0x11);
          if (puVar2[2] == 0) {
            InitializeCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
            puVar2[2] = puVar2[2] + 1;
          }
          FUN_1006dd5c(0x11);
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
        if ((*(byte *)(puVar2 + 1) & 1) == 0) {
          *puVar2 = 0xffffffff;
          uVar4 = ((int)puVar2 - *piVar3) / 0x24 + local_4;
          if (uVar4 != 0xffffffff) goto LAB_10074498;
          break;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
      }
      puVar1 = (undefined4 *)*piVar3;
    }
    local_4 = local_4 + 0x20;
    piVar3 = piVar3 + 1;
    local_8 = local_8 + 1;
    if (0x101924bf < (int)piVar3) goto LAB_10074498;
  }
  puVar2 = _malloc(0x480);
  if (puVar2 != (undefined4 *)0x0) {
    DAT_101924c0 = DAT_101924c0 + 0x20;
    (&DAT_101923c0)[local_8] = puVar2;
    puVar1 = puVar2;
    for (; puVar2 < puVar1 + 0x120; puVar2 = puVar2 + 9) {
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar2 = 0xffffffff;
      puVar2[2] = 0;
      *(undefined1 *)((int)puVar2 + 5) = 10;
      puVar1 = (undefined4 *)(&DAT_101923c0)[local_8];
    }
    uVar4 = local_8 << 5;
    FUN_100745e6(uVar4);
  }
LAB_10074498:
  FUN_1006dd5c(0x12);
  return uVar4;
}

/* 100744a9  FUN_100744a9  (124 bytes)
 * undefined4 FUN_100744a9(uint param_1, HANDLE param_2)
 * called by: FUN_100746fa
 */
undefined4 __cdecl FUN_100744a9(uint param_1,HANDLE param_2)

{
  DWORD *pDVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if (param_1 < DAT_101924c0) {
    iVar2 = (param_1 & 0x1f) * 0x24;
    if (*(int *)((&DAT_101923c0)[(int)param_1 >> 5] + iVar2) == -1) {
      if (DAT_10191e28 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_10074502;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_10074502:
      *(HANDLE *)((&DAT_101923c0)[(int)param_1 >> 5] + iVar2) = param_2;
      return 0;
    }
  }
  pDVar1 = FUN_1006edb4();
  *pDVar1 = 9;
  pDVar1 = FUN_1006edbd();
  *pDVar1 = 0;
  return 0xffffffff;
}

/* 10074525  FUN_10074525  (127 bytes)
 * undefined4 FUN_10074525(uint param_1)
 * called by: FUN_1006eb5c
 */
undefined4 __cdecl FUN_10074525(uint param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_101924c0) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_101923c0)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_10191e28 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_10074581;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_10074581:
      *(undefined4 *)((&DAT_101923c0)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_1006edb4();
  *pDVar2 = 9;
  pDVar2 = FUN_1006edbd();
  *pDVar2 = 0;
  return 0xffffffff;
}

/* 100745a4  FUN_100745a4  (66 bytes)
 * undefined4 FUN_100745a4(uint param_1)
 * called by: FUN_1006eb5c, FUN_1006f03b, FUN_10074667, FUN_100763ba
 */
undefined4 __cdecl FUN_100745a4(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_101924c0) &&
     ((*(byte *)((&DAT_101923c0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_101923c0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_1006edb4();
  *pDVar1 = 9;
  pDVar1 = FUN_1006edbd();
  *pDVar1 = 0;
  return 0xffffffff;
}

/* 100745e6  FUN_100745e6  (95 bytes)
 * undefined FUN_100745e6(uint param_1)
 * called by: FUN_1006eaff, FUN_1006efd6, FUN_1006f18a, FUN_1006f93d, FUN_10074386, FUN_10074667
 */
void __cdecl FUN_100745e6(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_101923c0)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_1006dcfb(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_1006dd5c(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_101923c0)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}

/* 10074645  FUN_10074645  (34 bytes)
 * undefined FUN_10074645(uint param_1)
 * called by: FUN_1006eaff, FUN_1006efd6, FUN_1006f18a, FUN_1006f93d, FUN_10074667, FUN_100746fa
 */
void __cdecl FUN_10074645(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_101923c0)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}

/* 10074667  FUN_10074667  (147 bytes)
 * undefined4 FUN_10074667(uint param_1)
 * called by: FUN_1006ec0a
 */
undefined4 __cdecl FUN_10074667(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_101924c0 <= param_1) {
LAB_100746e8:
    pDVar3 = FUN_1006edb4();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_101923c0)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_100746e8;
  FUN_100745e6(param_1);
  if ((*(byte *)((&DAT_101923c0)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_100745a4(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_100746dd;
    pDVar3 = FUN_1006edbd();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_1006edb4();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_100746dd:
  FUN_10074645(param_1);
  return uVar5;
}

/* 100746fa  FUN_100746fa  (719 bytes)
 * uint FUN_100746fa(LPCSTR param_1, uint param_2, uint param_3, uint param_4)
 * called by: FUN_1006f705
 */
uint __cdecl FUN_100746fa(LPCSTR param_1,uint param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  DWORD *pDVar4;
  HANDLE hFile;
  DWORD DVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  _SECURITY_ATTRIBUTES local_20;
  DWORD local_14;
  DWORD local_10;
  DWORD local_c;
  byte local_5;
  
  bVar8 = (param_2 & 0x80) == 0;
  local_20.nLength = 0xc;
  local_20.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar8) {
    local_5 = 0;
  }
  else {
    local_5 = 0x10;
  }
  local_20.bInheritHandle = (BOOL)bVar8;
  if (((param_2 & 0x8000) == 0) && (((param_2 & 0x4000) != 0 || (DAT_10192134 != 0x8000)))) {
    local_5 = local_5 | 0x80;
  }
  uVar2 = param_2 & 3;
  if (uVar2 == 0) {
    local_10 = 0x80000000;
  }
  else if (uVar2 == 1) {
    local_10 = 0x40000000;
  }
  else {
    if (uVar2 != 2) goto LAB_100747fe;
    local_10 = 0xc0000000;
  }
  if (param_3 == 0x10) {
    local_14 = 0;
  }
  else if (param_3 == 0x20) {
    local_14 = 1;
  }
  else if (param_3 == 0x30) {
    local_14 = 2;
  }
  else {
    if (param_3 != 0x40) goto LAB_100747fe;
    local_14 = 3;
  }
  uVar2 = param_2 & 0x700;
  if (uVar2 < 0x401) {
    if ((uVar2 == 0x400) || (uVar2 == 0)) {
      local_c = 3;
    }
    else if (uVar2 == 0x100) {
      local_c = 4;
    }
    else {
      if (uVar2 == 0x200) goto LAB_10074818;
      if (uVar2 != 0x300) goto LAB_100747fe;
      local_c = 2;
    }
  }
  else {
    if (uVar2 != 0x500) {
      if (uVar2 == 0x600) {
LAB_10074818:
        local_c = 5;
        goto LAB_10074828;
      }
      if (uVar2 != 0x700) {
LAB_100747fe:
        pDVar4 = FUN_1006edb4();
        *pDVar4 = 0x16;
        pDVar4 = FUN_1006edbd();
        *pDVar4 = 0;
        return 0xffffffff;
      }
    }
    local_c = 1;
  }
LAB_10074828:
  uVar2 = 0x80;
  if (((param_2 & 0x100) != 0) && ((~DAT_10191dbc & param_4 & 0x80) == 0)) {
    uVar2 = 1;
  }
  if ((param_2 & 0x40) != 0) {
    uVar2 = uVar2 | 0x4000000;
    local_10 = CONCAT13(local_10._3_1_,0x10000);
  }
  if ((param_2 & 0x1000) != 0) {
    uVar2 = uVar2 | 0x100;
  }
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      uVar2 = uVar2 | 0x10000000;
    }
  }
  else {
    uVar2 = uVar2 | 0x8000000;
  }
  uVar3 = FUN_10074386();
  if (uVar3 == 0xffffffff) {
    pDVar4 = FUN_1006edb4();
    *pDVar4 = 0x18;
    pDVar4 = FUN_1006edbd();
    *pDVar4 = 0;
    return 0xffffffff;
  }
  hFile = CreateFileA(param_1,local_10,local_14,&local_20,local_c,uVar2,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    DVar5 = GetFileType(hFile);
    if (DVar5 != 0) {
      if (DVar5 == 2) {
        local_5 = local_5 | 0x40;
      }
      else if (DVar5 == 3) {
        local_5 = local_5 | 8;
      }
      FUN_100744a9(uVar3,hFile);
      iVar7 = (uVar3 & 0x1f) * 0x24;
      param_1._3_1_ = local_5 & 0x48;
      *(byte *)((&DAT_101923c0)[(int)uVar3 >> 5] + 4 + iVar7) = local_5 | 1;
      if ((((local_5 & 0x48) == 0) && ((local_5 & 0x80) != 0)) && ((param_2 & 2) != 0)) {
        local_14 = FUN_1006f03b(uVar3,-1,2);
        if (local_14 == 0xffffffff) {
          pDVar4 = FUN_1006edbd();
          if (*pDVar4 == 0x83) goto LAB_100749a2;
        }
        else {
          param_3 = param_3 & 0xffffff;
          iVar6 = FUN_1006f1ef(uVar3,(char *)((int)&param_3 + 3),(char *)0x1);
          if ((((iVar6 != 0) || (param_3._3_1_ != '\x1a')) ||
              (iVar6 = FUN_100763ba(uVar3,local_14), iVar6 != -1)) &&
             (DVar5 = FUN_1006f03b(uVar3,0,0), DVar5 != 0xffffffff)) goto LAB_100749a2;
        }
        FUN_1006eaff(uVar3);
        uVar2 = 0xffffffff;
      }
      else {
LAB_100749a2:
        uVar2 = uVar3;
        if ((param_1._3_1_ == 0) && ((param_2 & 8) != 0)) {
          pbVar1 = (byte *)((&DAT_101923c0)[(int)uVar3 >> 5] + 4 + iVar7);
          *pbVar1 = *pbVar1 | 0x20;
        }
      }
      goto LAB_100749bb;
    }
    CloseHandle(hFile);
  }
  DVar5 = GetLastError();
  FUN_1006ed41(DVar5);
  uVar2 = 0xffffffff;
LAB_100749bb:
  FUN_10074645(uVar3);
  return uVar2;
}

/* 100749c9  FUN_100749c9  (1185 bytes)
 * undefined4 FUN_100749c9(ushort * param_1, int * param_2, byte.conflict * param_3, int param_4, int param_5, int param_6, int param_7)
 * called by: FUN_1006fb2d, FUN_10073ed7, FUN_10073f04
 */
undefined4 __thiscall
FUN_100749c9(void *this,ushort *param_1,int *param_2,byte_conflict *param_3,int param_4,int param_5,
            int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  char local_60 [23];
  char local_49;
  ushort local_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  byte_conflict *local_3e;
  ushort local_3a;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  byte *local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  char *local_10;
  int local_c;
  uint local_8;
  
  local_10 = local_60;
  local_2c = 0;
  local_1c = 1;
  local_8 = 0;
  local_14 = 0;
  local_28 = 0;
  local_24 = 0;
  local_30 = 0;
  local_34 = 0;
  local_20 = (byte *)0x0;
  local_c = 0;
  local_18 = 0;
  pbVar8 = param_3;
  while( true ) {
    bVar6 = *pbVar8;
    this = (void *)CONCAT31((int3)((uint)this >> 8),bVar6);
    if ((((bVar6 != 0x20) && (bVar6 != 9)) && (bVar6 != 10)) && (bVar6 != 0xd)) break;
    pbVar8 = pbVar8 + 1;
  }
  iVar1 = 4;
  iVar9 = 0;
  iVar5 = local_14;
LAB_10074a20:
  local_14 = iVar5;
  pbVar7 = pbVar8;
  iVar5 = 1;
  bVar6 = *pbVar7;
  pbVar8 = pbVar7 + 1;
  iVar2 = local_14;
  switch(iVar9) {
  case 0:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) {
LAB_10074a3d:
      local_14 = iVar2;
      iVar9 = 3;
      goto LAB_10074c62;
    }
    if (bVar6 == DAT_10097678) goto LAB_10074a4c;
    if (bVar6 == 0x2b) {
      local_2c = 0;
      iVar9 = 2;
      iVar5 = local_14;
    }
    else if (bVar6 == 0x2d) {
      local_2c = 0x8000;
      iVar9 = 2;
      iVar5 = local_14;
    }
    else {
      iVar9 = iVar5;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_10074d3c;
    }
    goto LAB_10074a20;
  case 1:
    local_14 = 1;
    if (('0' < (char)bVar6) && (iVar2 = iVar5, (char)bVar6 < ':')) goto LAB_10074a3d;
    iVar9 = iVar1;
    if (bVar6 != DAT_10097678) {
      iVar9 = iVar5;
      if ((bVar6 == 0x2b) || (iVar9 = local_14, bVar6 == 0x2d)) goto LAB_10074ad1;
      iVar9 = iVar5;
      local_14 = iVar5;
      if (bVar6 != 0x30) goto LAB_10074aaa;
    }
    goto LAB_10074a20;
  case 2:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) goto LAB_10074a3d;
    if (bVar6 == DAT_10097678) {
LAB_10074a4c:
      iVar9 = 5;
      iVar5 = local_14;
    }
    else {
      iVar9 = iVar5;
      pbVar7 = param_3;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_10074d41;
    }
    goto LAB_10074a20;
  case 3:
    local_14 = iVar5;
    while( true ) {
      if (DAT_10097674 < 2) {
        uVar3 = (byte)PTR_DAT_10097468[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_10097468;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_1006c8b6(this,(uint)bVar6,4);
        this = pbVar7;
      }
      if (uVar3 == 0) break;
      if (local_8 < 0x19) {
        local_8 = local_8 + 1;
        pcVar4 = local_10 + 1;
        *local_10 = bVar6 - 0x30;
        local_10 = pcVar4;
      }
      else {
        local_c = local_c + 1;
      }
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    iVar9 = iVar1;
    iVar5 = local_14;
    if (bVar6 != DAT_10097678) goto LAB_10074bbe;
    goto LAB_10074a20;
  case 4:
    local_14 = 1;
    local_28 = 1;
    iVar9 = iVar5;
    if (local_8 == 0) {
      while (iVar5 = local_28, iVar9 = local_14, bVar6 == 0x30) {
        local_c = local_c + -1;
        bVar6 = *pbVar8;
        pbVar8 = pbVar8 + 1;
      }
    }
    while( true ) {
      local_14 = iVar9;
      local_28 = iVar5;
      if (DAT_10097674 < 2) {
        uVar3 = (byte)PTR_DAT_10097468[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_10097468;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_1006c8b6(this,(uint)bVar6,4);
        this = pbVar7;
      }
      if (uVar3 == 0) break;
      if (local_8 < 0x19) {
        local_8 = local_8 + 1;
        local_c = local_c + -1;
        pcVar4 = local_10 + 1;
        *local_10 = bVar6 - 0x30;
        local_10 = pcVar4;
      }
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      iVar5 = local_28;
      iVar9 = local_14;
    }
LAB_10074bbe:
    iVar9 = local_14;
    if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) {
LAB_10074ad1:
      local_14 = iVar9;
      iVar9 = 0xb;
      pbVar8 = pbVar8 + -1;
      iVar5 = local_14;
    }
    else {
LAB_10074aaa:
      if (((char)bVar6 < 'D') ||
         (('E' < (char)bVar6 && (((char)bVar6 < 'd' || ('e' < (char)bVar6)))))) goto LAB_10074d3c;
      iVar9 = 6;
      iVar5 = local_14;
    }
    goto LAB_10074a20;
  case 5:
    local_28 = iVar5;
    if (DAT_10097674 < 2) {
      uVar3 = (byte)PTR_DAT_10097468[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_10097468;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_1006c8b6(this,(uint)bVar6,4);
      this = pbVar7;
    }
    iVar9 = iVar1;
    pbVar7 = param_3;
    if (uVar3 != 0) goto LAB_10074c62;
    goto LAB_10074d41;
  case 6:
    pbVar7 = pbVar7 + -1;
    this = pbVar7;
    param_3 = pbVar7;
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      if (bVar6 == 0x2b) goto LAB_10074c97;
      if (bVar6 == 0x2d) goto LAB_10074c8b;
      if (bVar6 != 0x30) goto LAB_10074d41;
LAB_10074c30:
      iVar9 = 8;
      iVar5 = local_14;
      goto LAB_10074a20;
    }
    break;
  case 7:
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      pbVar7 = param_3;
      if (bVar6 == 0x30) goto LAB_10074c30;
      goto LAB_10074d41;
    }
    break;
  case 8:
    local_24 = 1;
    while (bVar6 == 0x30) {
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) goto LAB_10074d3c;
    break;
  case 9:
    local_24 = 1;
    pbVar7 = (byte *)0x0;
    goto LAB_10074cc2;
  default:
    goto switchD_10074a2c_caseD_a;
  case 0xb:
    if (param_7 != 0) {
      if (bVar6 == 0x2b) {
LAB_10074c97:
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      else {
        param_3 = pbVar7;
        if (bVar6 != 0x2d) goto LAB_10074d41;
LAB_10074c8b:
        local_1c = -1;
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      goto LAB_10074a20;
    }
    iVar9 = 10;
    pbVar8 = pbVar7;
switchD_10074a2c_caseD_a:
    pbVar7 = pbVar8;
    iVar5 = local_14;
    if (iVar9 != 10) goto LAB_10074a20;
    goto LAB_10074d41;
  }
  iVar9 = 9;
LAB_10074c62:
  pbVar8 = pbVar8 + -1;
  iVar5 = local_14;
  goto LAB_10074a20;
LAB_10074cc2:
  if (DAT_10097674 < 2) {
    uVar3 = (byte)PTR_DAT_10097468[(uint)bVar6 * 2] & 4;
    this = PTR_DAT_10097468;
  }
  else {
    pbVar10 = (byte *)0x4;
    uVar3 = FUN_1006c8b6(this,(uint)bVar6,4);
    this = pbVar10;
  }
  if (uVar3 == 0) goto LAB_10074d0c;
  this = (void *)(int)(char)bVar6;
  pbVar7 = (byte *)((int)this + (int)pbVar7 * 10 + -0x30);
  if (0x1450 < (int)pbVar7) goto LAB_10074d04;
  bVar6 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  goto LAB_10074cc2;
LAB_10074d04:
  pbVar7 = (byte *)0x1451;
LAB_10074d0c:
  while( true ) {
    local_20 = pbVar7;
    if (DAT_10097674 < 2) {
      uVar3 = (byte)PTR_DAT_10097468[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_10097468;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_1006c8b6(this,(uint)bVar6,4);
      this = pbVar7;
    }
    if (uVar3 == 0) break;
    bVar6 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar7 = local_20;
  }
LAB_10074d3c:
  pbVar7 = pbVar8 + -1;
LAB_10074d41:
  *param_2 = (int)pbVar7;
  if (local_14 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte_conflict *)0x0;
    param_3 = (byte_conflict *)0x0;
    local_18 = 4;
    goto LAB_10074e4f;
  }
  pcVar4 = local_10;
  if (0x18 < local_8) {
    if ('\x04' < local_49) {
      local_49 = local_49 + '\x01';
    }
    local_8 = 0x18;
    local_c = local_c + 1;
    pcVar4 = local_10 + -1;
  }
  if (local_8 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte_conflict *)0x0;
    param_3 = (byte_conflict *)0x0;
  }
  else {
    while (pcVar4 = pcVar4 + -1, *pcVar4 == '\0') {
      local_8 = local_8 - 1;
      local_c = local_c + 1;
    }
    FUN_10076060(local_60,local_8,(uint *)&local_44);
    pbVar8 = local_20;
    if (local_1c < 0) {
      pbVar8 = (byte *)-(int)local_20;
    }
    pbVar8 = pbVar8 + local_c;
    if (local_24 == 0) {
      pbVar8 = pbVar8 + param_5;
    }
    if (local_28 == 0) {
      pbVar8 = pbVar8 + -param_6;
    }
    if ((int)pbVar8 < 0x1451) {
      if (-0x1451 < (int)pbVar8) {
        FUN_100766ff((int *)&local_44,(uint)pbVar8,param_4);
        param_3 = (byte_conflict *)CONCAT22(uStack_40,uStack_42);
        goto LAB_10074dd4;
      }
      local_34 = 1;
    }
    else {
      local_30 = 1;
    }
    local_3a = (ushort)param_3;
    local_3e = param_3;
    local_44 = local_3a;
  }
LAB_10074dd4:
  if (local_30 == 0) {
    if (local_34 != 0) {
      local_44 = 0;
      local_3a = 0;
      local_3e = (byte_conflict *)0x0;
      param_3 = (byte_conflict *)0x0;
      local_18 = 1;
    }
  }
  else {
    param_3 = (byte_conflict *)0x0;
    local_3a = 0x7fff;
    local_3e = (byte_conflict *)0x80000000;
    local_44 = 0;
    local_18 = 2;
  }
LAB_10074e4f:
  *(byte_conflict **)(param_1 + 3) = local_3e;
  *(byte_conflict **)(param_1 + 1) = param_3;
  param_1[5] = local_3a | (ushort)local_2c;
  *param_1 = local_44;
  return local_18;
}

/* 10074e9a  FUN_10074e9a  (208 bytes)
 * undefined FUN_10074e9a(uint param_1, int * param_2, ushort * param_3)
 * called by: FUN_1006fcfa, __startOneArgErrorHandling
 */
void __cdecl FUN_10074e9a(uint param_1,int *param_2,ushort *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  uint local_5c [10];
  undefined8 local_34;
  uint local_24;
  
  param_3 = (ushort *)(uint)*param_3;
  iVar2 = *param_2;
  if (iVar2 == 1) {
LAB_10074edf:
    uVar3 = 8;
  }
  else if (iVar2 == 2) {
    uVar3 = 4;
  }
  else if (iVar2 == 3) {
    uVar3 = 0x11;
  }
  else if (iVar2 == 4) {
    uVar3 = 0x12;
  }
  else {
    if (iVar2 == 5) goto LAB_10074edf;
    if (iVar2 == 7) {
      *param_2 = 1;
      goto LAB_10074f35;
    }
    if (iVar2 != 8) goto LAB_10074f35;
    uVar3 = 0x10;
  }
  bVar1 = FUN_10076a2e(uVar3,(double *)(param_2 + 6),(uint)param_3);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
      local_34 = *(undefined8 *)(param_2 + 4);
      local_24 = local_24 & 0xffffffe3 | 3;
    }
    else {
      local_24 = local_24 & 0xfffffffe;
    }
    FUN_1007677b(local_5c,(uint *)&param_3,uVar3,param_1,(undefined8 *)(param_2 + 2),
                 (undefined8 *)(param_2 + 6));
  }
LAB_10074f35:
  FUN_10076c8d();
  if (((*param_2 != 8) && (DAT_10098330 == 0)) && (iVar2 = FUN_10076c6d(), iVar2 != 0)) {
    return;
  }
  FUN_10076c45(*param_2);
  return;
}

/* 10074f6a  FUN_10074f6a  (93 bytes)
 * uint FUN_10074f6a(LPWSTR param_1, byte.conflict * param_2, uint param_3)
 * called by: FUN_10070ee8
 */
uint __cdecl FUN_10074f6a(LPWSTR param_1,byte_conflict *param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_1019238c);
  bVar2 = DAT_10192388 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_1019238c);
    FUN_1006dcfb(0x13);
  }
  uVar1 = FUN_10074fc7(param_1,param_2,param_3);
  if (bVar2) {
    FUN_1006dd5c(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_1019238c);
  }
  return uVar1;
}

/* 10074fc7  FUN_10074fc7  (201 bytes)
 * uint FUN_10074fc7(LPWSTR param_1, byte.conflict * param_2, uint param_3)
 * called by: FUN_10074f6a
 */
uint __cdecl FUN_10074fc7(LPWSTR param_1,byte_conflict *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  DWORD *pDVar3;
  
  if ((param_2 != (byte_conflict *)0x0) && (param_3 != 0)) {
    bVar1 = *param_2;
    if (bVar1 != 0) {
      if (DAT_10191ebc == 0) {
        if (param_1 != (LPWSTR)0x0) {
          *param_1 = (ushort)bVar1;
        }
        return 1;
      }
      if ((PTR_DAT_10097468[(uint)bVar1 * 2 + 1] & 0x80) == 0) {
        iVar2 = MultiByteToWideChar(DAT_10191ecc,9,(LPCSTR)param_2,1,param_1,
                                    (uint)(param_1 != (LPWSTR)0x0));
        if (iVar2 != 0) {
          return 1;
        }
      }
      else {
        if (1 < (int)DAT_10097674) {
          if ((int)param_3 < (int)DAT_10097674) goto LAB_10075059;
          iVar2 = MultiByteToWideChar(DAT_10191ecc,9,(LPCSTR)param_2,DAT_10097674,param_1,
                                      (uint)(param_1 != (LPWSTR)0x0));
          if (iVar2 != 0) {
            return DAT_10097674;
          }
        }
        if ((DAT_10097674 <= param_3) && (param_2[1] != '\0')) {
          return DAT_10097674;
        }
      }
LAB_10075059:
      pDVar3 = FUN_1006edb4();
      *pDVar3 = 0x2a;
      return 0xffffffff;
    }
    if (param_1 != (LPWSTR)0x0) {
      *param_1 = L'\0';
    }
  }
  return 0;
}

/* 100750af  FUN_100750af  (110 bytes)
 * uint FUN_100750af(uint param_1, int * param_2)
 * called by: FUN_1007195e
 */
uint __cdecl FUN_100750af(uint param_1,int *param_2)

{
  uint uVar1;
  
  if ((param_1 != 0xffffffff) &&
     ((uVar1 = param_2[3], (uVar1 & 1) != 0 || (((uVar1 & 0x80) != 0 && ((uVar1 & 2) == 0)))))) {
    if (param_2[2] == 0) {
      FUN_10073686(param_2);
    }
    if (*param_2 == param_2[2]) {
      if (param_2[1] != 0) {
        return 0xffffffff;
      }
      *param_2 = *param_2 + 1;
    }
    if ((*(byte *)(param_2 + 3) & 0x40) == 0) {
      *param_2 = *param_2 + -1;
      *(char *)*param_2 = (char)param_1;
    }
    else {
      *param_2 = *param_2 + -1;
      if (*(char *)*param_2 != (char)param_1) {
        *param_2 = (int)((char *)*param_2 + 1);
        return 0xffffffff;
      }
    }
    param_2[1] = param_2[1] + 1;
    param_2[3] = param_2[3] & 0xffffffefU | 1;
    return param_1 & 0xff;
  }
  return 0xffffffff;
}

/* 1007511d  FUN_1007511d  (46 bytes)
 * undefined FUN_1007511d(void)
 * called by: FUN_100719d4
 */
void FUN_1007511d(void)

{
  if (DAT_101920a8 == 0) {
    FUN_1006dcfb(0xb);
    if (DAT_101920a8 == 0) {
      FUN_1007514b();
      DAT_101920a8 = DAT_101920a8 + 1;
    }
    FUN_1006dd5c(0xb);
  }
  return;
}

/* 1007514b  FUN_1007514b  (647 bytes)
 * undefined FUN_1007514b(void)
 * called by: FUN_1007511d
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007514b(void)

{
  char cVar1;
  char cVar2;
  uint *_Str1;
  DWORD DVar3;
  int iVar4;
  size_t sVar5;
  void *this;
  uint *_Source;
  int local_8;
  
  FUN_1006dcfb(0xc);
  DAT_100980b8 = 0xffffffff;
  DAT_100980a8 = 0xffffffff;
  DAT_10191ff0 = 0;
  _Str1 = (uint *)FUN_10076d06("TZ");
  if (_Str1 == (uint *)0x0) {
    FUN_1006dd5c(0xc);
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_10191ff8);
    if (DVar3 == 0xffffffff) {
      return;
    }
    DAT_10098010 = (void *)(DAT_10191ff8 * 0x3c);
    DAT_10191ff0 = 1;
    if (DAT_1019203e != 0) {
      DAT_10098010 = (void *)((int)DAT_10098010 + DAT_1019204c * 0x3c);
    }
    if ((DAT_10192092 == 0) || (DAT_101920a0 == 0)) {
      DAT_10098014 = 0;
      _DAT_10098018 = 0;
    }
    else {
      DAT_10098014 = 1;
      _DAT_10098018 = (DAT_101920a0 - DAT_1019204c) * 0x3c;
    }
    iVar4 = WideCharToMultiByte(DAT_10191ecc,0x220,(LPCWSTR)&DAT_10191ffc,-1,PTR_DAT_1009809c,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 == 0) || (local_8 != 0)) {
      *PTR_DAT_1009809c = 0;
    }
    else {
      PTR_DAT_1009809c[0x3f] = 0;
    }
    iVar4 = WideCharToMultiByte(DAT_10191ecc,0x220,(LPCWSTR)&DAT_10192050,-1,PTR_DAT_100980a0,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 != 0) && (local_8 == 0)) {
      PTR_DAT_100980a0[0x3f] = 0;
      return;
    }
LAB_100753bc:
    *PTR_DAT_100980a0 = 0;
  }
  else {
    if (((char)*_Str1 != '\0') &&
       ((DAT_101920a4 == (uint *)0x0 ||
        (iVar4 = _strcmp((char *)_Str1,(char *)DAT_101920a4), iVar4 != 0)))) {
      FUN_1006c158(DAT_101920a4);
      sVar5 = _strlen((char *)_Str1);
      DAT_101920a4 = _malloc(sVar5 + 1);
      if (DAT_101920a4 != (uint *)0x0) {
        FUN_100740c0(DAT_101920a4,_Str1);
        FUN_1006dd5c(0xc);
        _strncpy(PTR_DAT_1009809c,(char *)_Str1,3);
        _Source = (uint *)((int)_Str1 + 3);
        PTR_DAT_1009809c[3] = 0;
        cVar1 = *(char *)_Source;
        if (cVar1 == '-') {
          _Source = _Str1 + 1;
        }
        iVar4 = FUN_1006bfb7(this,(byte_conflict *)_Source);
        DAT_10098010 = (void *)(iVar4 * 0xe10);
        for (; (cVar2 = (char)*_Source, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':'))));
            _Source = (uint *)((int)_Source + 1)) {
        }
        if ((char)*_Source == ':') {
          _Source = (uint *)((int)_Source + 1);
          iVar4 = FUN_1006bfb7(DAT_10098010,(byte_conflict *)_Source);
          DAT_10098010 = (void *)((int)DAT_10098010 + iVar4 * 0x3c);
          for (; ('/' < (char)*_Source && ((char)*_Source < ':'));
              _Source = (uint *)((int)_Source + 1)) {
          }
          if ((char)*_Source == ':') {
            _Source = (uint *)((int)_Source + 1);
            iVar4 = FUN_1006bfb7(DAT_10098010,(byte_conflict *)_Source);
            DAT_10098010 = (void *)((int)DAT_10098010 + iVar4);
            for (; ('/' < (char)*_Source && ((char)*_Source < ':'));
                _Source = (uint *)((int)_Source + 1)) {
            }
          }
        }
        if (cVar1 == '-') {
          DAT_10098010 = (void *)-(int)DAT_10098010;
        }
        DAT_10098014 = (int)(char)*_Source;
        if (DAT_10098014 != 0) {
          _strncpy(PTR_DAT_100980a0,(char *)_Source,3);
          PTR_DAT_100980a0[3] = 0;
          return;
        }
        goto LAB_100753bc;
      }
    }
    FUN_1006dd5c(0xc);
  }
  return;
}

/* 100753d2  FUN_100753d2  (33 bytes)
 * bool FUN_100753d2(int * param_1)
 * called by: FUN_100719d4
 */
bool __cdecl FUN_100753d2(int *param_1)

{
  bool bVar1;
  
  FUN_1006dcfb(0xb);
  bVar1 = FUN_100753f3(param_1);
  FUN_1006dd5c(0xb);
  return bVar1;
}

/* 100753f3  FUN_100753f3  (428 bytes)
 * bool FUN_100753f3(int * param_1)
 * called by: FUN_100753d2
 */
bool __cdecl FUN_100753f3(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (DAT_10098014 != 0) {
    uVar5 = param_1[5];
    if ((uVar5 != DAT_100980a8) || (uVar5 != DAT_100980b8)) {
      if (DAT_10191ff0 == 0) {
        FUN_1007559f(1,1,uVar5,4,1,0,0,2,0,0,0);
        FUN_1007559f(0,1,param_1[5],10,5,0,0,2,0,0,0);
      }
      else {
        if (DAT_10192090 != 0) {
          uVar6 = (uint)DAT_10192096;
          uVar3 = 0;
          uVar4 = 0;
        }
        else {
          uVar3 = (uint)DAT_10192094;
          uVar6 = 0;
          uVar4 = (uint)DAT_10192096;
        }
        FUN_1007559f(1,(uint)(DAT_10192090 == 0),uVar5,(uint)DAT_10192092,uVar4,uVar3,uVar6,
                     (uint)DAT_10192098,(uint)DAT_1019209a,(uint)DAT_1019209c,(uint)DAT_1019209e);
        if (DAT_1019203c != 0) {
          uVar6 = (uint)DAT_10192042;
          uVar3 = 0;
          uVar4 = 0;
          uVar5 = param_1[5];
        }
        else {
          uVar3 = (uint)DAT_10192040;
          uVar6 = 0;
          uVar4 = (uint)DAT_10192042;
          uVar5 = param_1[5];
        }
        FUN_1007559f(0,(uint)(DAT_1019203c == 0),uVar5,(uint)DAT_1019203e,uVar4,uVar3,uVar6,
                     (uint)DAT_10192044,(uint)DAT_10192046,(uint)DAT_10192048,(uint)DAT_1019204a);
      }
    }
    iVar1 = param_1[7];
    if (DAT_100980ac < DAT_100980bc) {
      if ((DAT_100980ac <= iVar1) && (iVar1 <= DAT_100980bc)) {
        if ((DAT_100980ac < iVar1) && (iVar1 < DAT_100980bc)) {
          return true;
        }
LAB_1007556b:
        iVar2 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
        if (iVar1 == DAT_100980ac) {
          return DAT_100980b0 <= iVar2;
        }
        return iVar2 < DAT_100980c0;
      }
    }
    else {
      if (iVar1 < DAT_100980bc) {
        return true;
      }
      if (DAT_100980ac < iVar1) {
        return true;
      }
      if ((iVar1 <= DAT_100980bc) || (DAT_100980ac <= iVar1)) goto LAB_1007556b;
    }
  }
  return false;
}

/* 1007559f  FUN_1007559f  (320 bytes)
 * undefined FUN_1007559f(int param_1, int param_2, uint param_3, int param_4, int param_5, int param_6, int param_7, int param_8, int param_9, int param_10, int param_11)
 * called by: FUN_100753f3
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_1007559f(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 1) {
    if ((param_3 & 3) == 0) {
      iVar1 = (&DAT_100980c0)[param_4];
    }
    else {
      iVar1 = *(int *)(&DAT_100980f4 + param_4 * 4);
    }
    iVar2 = (int)(param_3 * 0x16d + -0x63db + iVar1 + 1 + ((int)(param_3 - 1) >> 2)) % 7;
    if (iVar2 < param_6) {
      iVar1 = iVar1 + -6 + (param_5 * 7 - iVar2) + param_6;
    }
    else {
      iVar1 = iVar1 + 1 + (param_5 * 7 - iVar2) + param_6;
    }
    if (param_5 == 5) {
      if ((param_3 & 3) == 0) {
        iVar2 = *(int *)(&DAT_100980c4 + param_4 * 4);
      }
      else {
        iVar2 = *(int *)(&DAT_100980f8 + param_4 * 4);
      }
      if (iVar2 < iVar1) {
        iVar1 = iVar1 + -7;
      }
    }
  }
  else {
    if ((param_3 & 3) == 0) {
      iVar1 = (&DAT_100980c0)[param_4];
    }
    else {
      iVar1 = *(int *)(&DAT_100980f4 + param_4 * 4);
    }
    iVar1 = iVar1 + param_7;
  }
  if (param_1 == 1) {
    DAT_100980a8 = param_3;
    DAT_100980b0 = ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000 + param_11;
    DAT_100980ac = iVar1;
  }
  else {
    DAT_100980c0 = ((param_8 * 0x3c + param_9) * 0x3c + _DAT_10098018 + param_10) * 1000 + param_11;
    if (DAT_100980c0 < 0) {
      DAT_100980c0 = DAT_100980c0 + 86400000;
      DAT_100980bc = iVar1 + -1;
    }
    else {
      DAT_100980bc = iVar1;
      if (86399999 < DAT_100980c0) {
        DAT_100980c0 = DAT_100980c0 + -86400000;
        DAT_100980bc = iVar1 + 1;
      }
    }
    DAT_100980b8 = param_3;
  }
  return;
}

/* 100756df  FUN_100756df  (41 bytes)
 * float10 FUN_100756df(undefined8 param_1, short param_2)
 * called by: FUN_10075762
 */
float10 __cdecl FUN_100756df(undefined8 param_1,short param_2)

{
  undefined8 local_c;
  
  local_c = (double)CONCAT26((param_2 + 0x3fe) * 0x10 | param_1._6_2_ & 0x800f,(int6)param_1);
  return (float10)local_c;
}

