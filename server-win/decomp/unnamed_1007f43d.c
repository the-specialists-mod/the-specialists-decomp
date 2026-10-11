/* mp.dll - unnamed_1007f43d (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1007f43d  FUN_1007f43d  (123 bytes)
 * undefined FUN_1007f43d(PEXCEPTION_RECORD param_1, PVOID param_2, DWORD param_3, undefined4 param_4, int param_5, byte.conflict * param_6, byte.conflict * param_7, int * param_8, int param_9, PVOID param_10)
 * called by: FUN_1007f0cf, FUN_1007f282
 */
void __cdecl
FUN_1007f43d(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            byte_conflict *param_6,byte_conflict *param_7,int *param_8,int param_9,PVOID param_10)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  if (param_7 != (byte_conflict *)0x0) {
    FUN_1007f5fd((int)param_1,(int)param_2,param_6,param_7);
  }
  if (param_10 == (PVOID)0x0) {
    param_10 = param_2;
  }
  FUN_1007d466(param_10,param_1);
  FUN_1007f389((int)param_2,param_4,param_5,*param_8);
  *(int *)((int)param_2 + 8) = param_8[1] + 1;
  UNRECOVERED_JUMPTABLE =
       (undefined *)
       FUN_1007f4b8((DWORD)param_1,param_2,param_3,param_5,*(undefined4 *)(param_6 + 0xc),param_9,
                    0x100);
  if (UNRECOVERED_JUMPTABLE != (undefined *)0x0) {
    FUN_1007d424(UNRECOVERED_JUMPTABLE);
  }
  return;
}

/* 1007f4b8  FUN_1007f4b8  (165 bytes)
 * undefined4 FUN_1007f4b8(DWORD param_1, undefined4 param_2, DWORD param_3, undefined4 param_4, undefined4 param_5, int param_6, int param_7)
 * called by: FUN_1007f43d
 */
undefined4 __cdecl
FUN_1007f4b8(DWORD param_1,undefined4 param_2,DWORD param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10096028;
  pcStack_10 = FUN_1008664c;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_1007f921();
  FUN_1007f921();
  pDVar1 = FUN_1007f921();
  pDVar1[0x1b] = param_1;
  pDVar1 = FUN_1007f921();
  pDVar1[0x1c] = param_3;
  local_8 = 1;
  uVar2 = FUN_1007d4eb(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_1007f585();
  ExceptionList = local_14;
  return uVar2;
}

/* 1007f55d  FUN_1007f55d  (10 bytes)
 * undefined FUN_1007f55d()
 */
void FUN_1007f55d(void)

{
  int unaff_EBP;
  
  FUN_1007f5d3(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}

/* 1007f567  FUN_1007f567  (24 bytes)
 * undefined FUN_1007f567()
 */
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

undefined4 FUN_1007f567(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(iVar1 + -4) = 0xffffffff;
  *(int *)(iVar1 + -8) = unaff_EBP + -0x10;
  *(undefined4 *)(iVar1 + -0xc) = 0x1007f579;
  __local_unwind2(*(int *)(iVar1 + -8),*(int *)(iVar1 + -4));
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return 0;
}

/* 1007f585  FUN_1007f585  (78 bytes)
 * undefined FUN_1007f585(void)
 * called by: FUN_1007f4b8
 */
void FUN_1007f585(void)

{
  DWORD *pDVar1;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_EDI;
  
  *(undefined4 *)(unaff_ESI + -4) = *(undefined4 *)(unaff_EBP + -0x28);
  pDVar1 = FUN_1007f921();
  pDVar1[0x1b] = *(DWORD *)(unaff_EBP + -0x1c);
  pDVar1 = FUN_1007f921();
  pDVar1[0x1c] = *(DWORD *)(unaff_EBP + -0x20);
  if ((((*unaff_EDI == -0x1f928c9d) && (unaff_EDI[4] == 3)) && (unaff_EDI[5] == 0x19930520)) &&
     ((*(int *)(unaff_EBP + -0x24) == 0 && (*(int *)(unaff_EBP + -0x2c) != 0)))) {
    __abnormal_termination();
    FUN_1007f7c1((int)unaff_EDI);
  }
  return;
}

/* 1007f5d3  FUN_1007f5d3  (42 bytes)
 * undefined FUN_1007f5d3()
 * called by: FUN_1007f55d
 */
undefined4 FUN_1007f5d3(int *param_1)

{
  param_1 = (int *)*param_1;
  if ((((*param_1 == -0x1f928c9d) && (param_1[4] == 3)) && (param_1[5] == 0x19930520)) &&
     (param_1[7] == 0)) {
    return 1;
  }
  return 0;
}

/* 1007f5fd  FUN_1007f5fd  (440 bytes)
 * undefined FUN_1007f5fd(int param_1, int param_2, byte.conflict * param_3, byte.conflict * param_4)
 * called by: FUN_1007f43d
 */
void __cdecl FUN_1007f5fd(int param_1,int param_2,byte_conflict *param_3,byte_conflict *param_4)

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
  
  puStack_c = &DAT_10096040;
  pcStack_10 = FUN_1008664c;
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
        bVar2 = FUN_10086563(*(void **)(param_1 + 0x18),1);
        if ((CONCAT31(extraout_var_03,bVar2) != 0) &&
           (bVar2 = FUN_1008657f(piVar1,1), CONCAT31(extraout_var_04,bVar2) != 0)) {
          uVar5 = *(uint *)(param_4 + 0x14);
          puVar4 = (undefined4 *)FUN_1007f828(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          FUN_10085cf0(piVar1,puVar4,uVar5);
          ExceptionList = local_14;
          return;
        }
      }
      else {
        ExceptionList = &local_14;
        bVar2 = FUN_10086563(*(void **)(param_1 + 0x18),1);
        if (((CONCAT31(extraout_var_05,bVar2) != 0) &&
            (bVar2 = FUN_1008657f(piVar1,1), CONCAT31(extraout_var_06,bVar2) != 0)) &&
           (bVar2 = FUN_1008659b(*(FARPROC *)(param_4 + 0x18)), CONCAT31(extraout_var_07,bVar2) != 0
           )) {
          if ((*param_4 & 4) != 0) {
            FUN_1007f828(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
            FUN_1007d45f(piVar1,*(undefined **)(param_4 + 0x18));
            ExceptionList = local_14;
            return;
          }
          FUN_1007f828(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          FUN_1007d458(piVar1,*(undefined **)(param_4 + 0x18));
          ExceptionList = local_14;
          return;
        }
      }
    }
    else {
      ExceptionList = &local_14;
      bVar2 = FUN_10086563(*(void **)(param_1 + 0x18),1);
      if ((CONCAT31(extraout_var_01,bVar2) != 0) &&
         (bVar2 = FUN_1008657f(piVar1,1), CONCAT31(extraout_var_02,bVar2) != 0)) {
        FUN_10085cf0(piVar1,*(undefined4 **)(param_1 + 0x18),*(uint *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 4) {
          ExceptionList = local_14;
          return;
        }
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          ExceptionList = local_14;
          return;
        }
        goto LAB_1007f68b;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    bVar2 = FUN_10086563(*(void **)(param_1 + 0x18),1);
    if ((CONCAT31(extraout_var,bVar2) != 0) &&
       (bVar2 = FUN_1008657f(piVar1,1), CONCAT31(extraout_var_00,bVar2) != 0)) {
      iVar3 = *(int *)(param_1 + 0x18);
      *piVar1 = iVar3;
LAB_1007f68b:
      iVar3 = FUN_1007f828(iVar3,(int *)(param_4 + 8));
      *piVar1 = iVar3;
      ExceptionList = local_14;
      return;
    }
  }
  FUN_1007fa89();
  ExceptionList = local_14;
  return;
}

/* 1007f7b5  FUN_1007f7b5  (4 bytes)
 * undefined FUN_1007f7b5()
 */
undefined4 FUN_1007f7b5(void)

{
  return 1;
}

/* 1007f7b9  FUN_1007f7b9  (8 bytes)
 * undefined FUN_1007f7b9()
 */
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void __fastcall FUN_1007f7b9(undefined4 param_1)

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
  *(undefined **)(iVar1 + -0xc) = &DAT_10096060;
  *(code **)(iVar1 + -0x10) = FUN_1008664c;
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
  *(undefined4 *)(iVar1 + -0x2c) = 0x1007fa57;
  pDVar3 = FUN_1007f921();
  if (pDVar3[0x18] != 0) {
    *(undefined4 *)(iVar1 + -8) = 1;
    *(undefined4 *)(iVar1 + -0x2c) = 0x1007fa68;
    pDVar3 = FUN_1007f921();
    pcVar2 = (code *)pDVar3[0x18];
    puVar4 = (undefined1 *)(iVar1 + -0x2c);
    *(undefined4 *)(iVar1 + -0x2c) = 0x1007fa6b;
    (*pcVar2)();
    *(undefined4 *)(iVar1 + -8) = 0;
  }
  *(undefined4 *)(iVar1 + -8) = 0xffffffff;
  *(undefined4 *)(puVar4 + -4) = 0x1007fa84;
  FUN_10086724();
  return;
}

/* 1007f7c1  FUN_1007f7c1  (86 bytes)
 * undefined FUN_1007f7c1(int param_1)
 * called by: FUN_1007f0cf, FUN_1007f585
 */
void __cdecl FUN_1007f7c1(int param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10096050;
  pcStack_10 = FUN_1008664c;
  local_14 = ExceptionList;
  if ((param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(undefined **)(*(int *)(param_1 + 0x1c) + 4),
     UNRECOVERED_JUMPTABLE != (undefined *)0x0)) {
    local_8 = 0;
    ExceptionList = &local_14;
    FUN_1007d458(*(undefined4 *)(param_1 + 0x18),UNRECOVERED_JUMPTABLE);
  }
  ExceptionList = local_14;
  return;
}

/* 1007f817  FUN_1007f817  (9 bytes)
 * undefined FUN_1007f817()
 */
bool FUN_1007f817(void)

{
  int unaff_EBP;
  
  return *(char *)(unaff_EBP + 0xc) != '\0';
}

/* 1007f820  FUN_1007f820  (8 bytes)
 * undefined FUN_1007f820()
 */
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void __fastcall FUN_1007f820(undefined4 param_1)

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
  *(undefined **)(iVar1 + -0xc) = &DAT_10096060;
  *(code **)(iVar1 + -0x10) = FUN_1008664c;
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
  *(undefined4 *)(iVar1 + -0x2c) = 0x1007fa57;
  pDVar3 = FUN_1007f921();
  if (pDVar3[0x18] != 0) {
    *(undefined4 *)(iVar1 + -8) = 1;
    *(undefined4 *)(iVar1 + -0x2c) = 0x1007fa68;
    pDVar3 = FUN_1007f921();
    pcVar2 = (code *)pDVar3[0x18];
    puVar4 = (undefined1 *)(iVar1 + -0x2c);
    *(undefined4 *)(iVar1 + -0x2c) = 0x1007fa6b;
    (*pcVar2)();
    *(undefined4 *)(iVar1 + -8) = 0;
  }
  *(undefined4 *)(iVar1 + -8) = 0xffffffff;
  *(undefined4 *)(puVar4 + -4) = 0x1007fa84;
  FUN_10086724();
  return;
}

/* 1007f828  FUN_1007f828  (35 bytes)
 * int FUN_1007f828(int param_1, int * param_2)
 * called by: FUN_1007f5fd
 */
int __cdecl FUN_1007f828(int param_1,int *param_2)

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

/* 1007f89c  FUN_1007f89c  (84 bytes)
 * undefined4 FUN_1007f89c(void)
 * called by: FUN_1007e8b1
 */
undefined4 FUN_1007f89c(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_10082a21();
  DAT_100a8360 = TlsAlloc();
  if (DAT_100a8360 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_1007e7dc(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_100a8360,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1007f90e((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}

/* 1007f8f0  FUN_1007f8f0  (30 bytes)
 * undefined FUN_1007f8f0(void)
 * called by: FUN_1007e8b1
 */
void FUN_1007f8f0(void)

{
  FUN_10082a4a();
  if (DAT_100a8360 != 0xffffffff) {
    TlsFree(DAT_100a8360);
    DAT_100a8360 = 0xffffffff;
  }
  return;
}

/* 1007f90e  FUN_1007f90e  (19 bytes)
 * undefined FUN_1007f90e(int param_1)
 * called by: FUN_1007f89c, FUN_1007f921
 */
void __cdecl FUN_1007f90e(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_100a8c20;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}

/* 1007f921  FUN_1007f921  (103 bytes)
 * DWORD * FUN_1007f921(void)
 * called by: FUN_1007d564, FUN_1007e23b, FUN_1007f0cf, FUN_1007f282, FUN_1007f4b8, FUN_1007f585, FUN_1007fa28, FUN_10083d58, FUN_10083d61, FUN_1008798b
 */
DWORD * FUN_1007f921(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_100a8360);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_1007e7dc(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_100a8360,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1007f90e((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_1007f97c;
      }
    }
    __amsg_exit(0x10);
  }
LAB_1007f97c:
  SetLastError(dwErrCode);
  return lpTlsValue;
}

/* 1007f988  FUN_1007f988  (160 bytes)
 * undefined FUN_1007f988(LPVOID param_1)
 * called by: FUN_1007e8b1
 */
void __cdecl FUN_1007f988(LPVOID param_1)

{
  if (DAT_100a8360 != 0xffffffff) {
    if ((param_1 != (LPVOID)0x0) || (param_1 = TlsGetValue(DAT_100a8360), param_1 != (LPVOID)0x0)) {
      if (*(LPVOID *)((int)param_1 + 0x24) != (LPVOID)0x0) {
        FUN_1007e869(*(LPVOID *)((int)param_1 + 0x24));
      }
      if (*(LPVOID *)((int)param_1 + 0x28) != (LPVOID)0x0) {
        FUN_1007e869(*(LPVOID *)((int)param_1 + 0x28));
      }
      if (*(LPVOID *)((int)param_1 + 0x30) != (LPVOID)0x0) {
        FUN_1007e869(*(LPVOID *)((int)param_1 + 0x30));
      }
      if (*(LPVOID *)((int)param_1 + 0x38) != (LPVOID)0x0) {
        FUN_1007e869(*(LPVOID *)((int)param_1 + 0x38));
      }
      if (*(LPVOID *)((int)param_1 + 0x40) != (LPVOID)0x0) {
        FUN_1007e869(*(LPVOID *)((int)param_1 + 0x40));
      }
      if (*(LPVOID *)((int)param_1 + 0x44) != (LPVOID)0x0) {
        FUN_1007e869(*(LPVOID *)((int)param_1 + 0x44));
      }
      if (*(undefined **)((int)param_1 + 0x50) != &DAT_100a8c20) {
        FUN_1007e869(*(undefined **)((int)param_1 + 0x50));
      }
      FUN_1007e869(param_1);
    }
    TlsSetValue(DAT_100a8360,(LPVOID)0x0);
    return;
  }
  return;
}

/* 1007fa28  FUN_1007fa28  (86 bytes)
 * undefined FUN_1007fa28(void)
 * called by: FUN_1007f0cf, FUN_1007fa89, FUN_100864ff
 */
void FUN_1007fa28(void)

{
  DWORD *pDVar1;
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10096060;
  pcStack_10 = FUN_1008664c;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  pDVar1 = FUN_1007f921();
  if (pDVar1[0x18] != 0) {
    local_8 = 1;
    pDVar1 = FUN_1007f921();
    (*(code *)pDVar1[0x18])();
  }
  local_8 = 0xffffffff;
  FUN_10086724();
  return;
}

/* 1007fa70  FUN_1007fa70  (4 bytes)
 * undefined FUN_1007fa70()
 */
undefined4 FUN_1007fa70(void)

{
  return 1;
}

/* 1007fa89  FUN_1007fa89  (79 bytes)
 * undefined FUN_1007fa89(void)
 * called by: FUN_1007d68f, FUN_1007f034, FUN_1007f0cf, FUN_1007f389, FUN_1007f5fd
 */
void FUN_1007fa89(void)

{
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10096078;
  pcStack_10 = FUN_1008664c;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (PTR_FUN_100a8364 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*(code *)PTR_FUN_100a8364)();
  }
  local_8 = 0xffffffff;
  FUN_1007fa28();
  return;
}

/* 1007fac6  FUN_1007fac6  (4 bytes)
 * undefined FUN_1007fac6()
 */
undefined4 FUN_1007fac6(void)

{
  return 1;
}

/* 1007fadf  FUN_1007fadf  (280 bytes)
 * uint FUN_1007fadf(uint param_1, int * param_2)
 * called by: FUN_1007e578, FUN_1007e73b, FUN_1007e78c, FUN_10080338, sprintf
 */
uint __cdecl FUN_1007fadf(uint param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  byte_conflict bVar5;
  undefined3 extraout_var;
  undefined *puVar6;
  int *piVar7;
  
  piVar4 = param_2;
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  if (((uVar1 & 0x82) == 0) || ((uVar1 & 0x40) != 0)) {
LAB_1007fbeb:
    param_2[3] = uVar1 | 0x20;
  }
  else {
    if ((uVar1 & 1) != 0) {
      param_2[1] = 0;
      if ((uVar1 & 0x10) == 0) goto LAB_1007fbeb;
      *param_2 = param_2[2];
      param_2[3] = uVar1 & 0xfffffffe;
    }
    uVar1 = param_2[3];
    param_2[1] = 0;
    param_2 = (int *)0x0;
    piVar4[3] = uVar1 & 0xffffffef | 2;
    if (((uVar1 & 0x10c) == 0) &&
       (((piVar4 != (int *)&DAT_100a8760 && (piVar4 != (int *)&DAT_100a8780)) ||
        (bVar5 = FUN_1008677f(uVar2), CONCAT31(extraout_var,bVar5) == 0)))) {
      FUN_1008673b(piVar4);
    }
    if ((*(ushort *)(piVar4 + 3) & 0x108) == 0) {
      piVar7 = (int *)0x1;
      param_2 = (int *)FUN_10083af5(uVar2,(char *)&param_1,1);
    }
    else {
      pcVar3 = (char *)piVar4[2];
      piVar7 = (int *)(*piVar4 - (int)pcVar3);
      *piVar4 = (int)(pcVar3 + 1);
      piVar4[1] = piVar4[6] + -1;
      if ((int)piVar7 < 1) {
        if (uVar2 == 0xffffffff) {
          puVar6 = &DAT_100a8b38;
        }
        else {
          puVar6 = (undefined *)((&DAT_102f01c0)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
        }
        if ((puVar6[4] & 0x20) != 0) {
          FUN_10083d6a(uVar2,0,2);
        }
      }
      else {
        param_2 = (int *)FUN_10083af5(uVar2,pcVar3,(uint)piVar7);
      }
      *(undefined1 *)piVar4[2] = (undefined1)param_1;
    }
    if (param_2 == piVar7) {
      return param_1 & 0xff;
    }
    piVar4[3] = piVar4[3] | 0x20;
  }
  return 0xffffffff;
}

/* 1007fbf7  FUN_1007fbf7  (1825 bytes)
 * int FUN_1007fbf7(int * param_1, byte.conflict * param_2, undefined4 * param_3)
 * called by: FUN_1007e73b, FUN_1007e78c, sprintf
 */
int __cdecl FUN_1007fbf7(int *param_1,byte_conflict *param_2,undefined4 *param_3)

{
  byte_conflict *pbVar1;
  uint uVar2;
  WCHAR *pWVar3;
  WCHAR *pWVar4;
  undefined4 uVar5;
  short *psVar6;
  int *piVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined1 local_24c [511];
  undefined1 local_4d;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  uint local_40;
  CHAR local_3c [4];
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  char local_1a;
  char local_19;
  int local_18;
  int local_14;
  undefined1 *local_10;
  WCHAR *local_c;
  uint local_8;
  
  local_34 = 0;
  bVar9 = *param_2;
  local_10 = (undefined1 *)0x0;
  local_18 = 0;
  pbVar1 = param_2;
  do {
    if ((bVar9 == 0) || (param_2 = pbVar1 + 1, local_18 < 0)) {
      return local_18;
    }
    if (((char)bVar9 < ' ') || ('x' < (char)bVar9)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(byte *)((int)&PTR_FUN_10096070 + (int)(char)bVar9) & 0xf;
    }
    local_34 = (int)(char)(&DAT_10096090)[uVar2 * 8 + local_34] >> 4;
    switch(local_34) {
    case 0:
switchD_1007fc65_caseD_0:
      local_28 = 0;
      if ((PTR_DAT_100a8118[(uint)bVar9 * 2 + 1] & 0x80) != 0) {
        FUN_10080338((int)(char)bVar9,param_1,&local_18);
        bVar9 = *param_2;
        param_2 = pbVar1 + 2;
      }
      FUN_10080338((int)(char)bVar9,param_1,&local_18);
      break;
    case 1:
      local_14 = -1;
      local_38 = 0;
      local_2c = 0;
      local_24 = 0;
      local_20 = 0;
      local_8 = 0;
      local_28 = 0;
      break;
    case 2:
      if (bVar9 == 0x20) {
        local_8 = local_8 | 2;
      }
      else if (bVar9 == 0x23) {
        local_8 = local_8 | 0x80;
      }
      else if (bVar9 == 0x2b) {
        local_8 = local_8 | 1;
      }
      else if (bVar9 == 0x2d) {
        local_8 = local_8 | 4;
      }
      else if (bVar9 == 0x30) {
        local_8 = local_8 | 8;
      }
      break;
    case 3:
      if (bVar9 == 0x2a) {
        local_24 = FUN_100803d6((int *)&param_3);
        if (local_24 < 0) {
          local_8 = local_8 | 4;
          local_24 = -local_24;
        }
      }
      else {
        local_24 = (char)bVar9 + -0x30 + local_24 * 10;
      }
      break;
    case 4:
      local_14 = 0;
      break;
    case 5:
      if (bVar9 == 0x2a) {
        local_14 = FUN_100803d6((int *)&param_3);
        if (local_14 < 0) {
          local_14 = -1;
        }
      }
      else {
        local_14 = (char)bVar9 + -0x30 + local_14 * 10;
      }
      break;
    case 6:
      if (bVar9 == 0x49) {
        if ((*param_2 != 0x36) || (pbVar1[2] != '4')) {
          local_34 = 0;
          goto switchD_1007fc65_caseD_0;
        }
        param_2 = pbVar1 + 3;
        local_8 = local_8 | 0x8000;
      }
      else if (bVar9 == 0x68) {
        local_8 = local_8 | 0x20;
      }
      else if (bVar9 == 0x6c) {
        local_8 = local_8 | 0x10;
      }
      else if (bVar9 == 0x77) {
        local_8 = local_8 | 0x800;
      }
      break;
    case 7:
      pWVar4 = local_c;
      if ((char)bVar9 < 'h') {
        if ((char)bVar9 < 'e') {
          if ((char)bVar9 < 'Y') {
            if (bVar9 == 0x58) {
LAB_10080076:
              local_30 = 7;
LAB_1008007d:
              local_10 = (undefined1 *)0x10;
              if ((local_8 & 0x80) != 0) {
                local_1a = '0';
                local_19 = (char)local_30 + 'Q';
                local_20 = 2;
              }
              goto LAB_100800e7;
            }
            if (bVar9 != 0x43) {
              if ((bVar9 != 0x45) && (bVar9 != 0x47)) {
                if (bVar9 == 0x53) {
                  if ((local_8 & 0x830) == 0) {
                    local_8 = local_8 | 0x800;
                  }
                  goto LAB_1007fe24;
                }
                goto LAB_10080201;
              }
              local_38 = 1;
              bVar9 = bVar9 + 0x20;
              goto LAB_1007fe85;
            }
            if ((local_8 & 0x830) == 0) {
              local_8 = local_8 | 0x800;
            }
LAB_1007feb2:
            if ((local_8 & 0x810) == 0) {
              uVar5 = FUN_100803d6((int *)&param_3);
              local_24c[0] = (char)uVar5;
              local_10 = (undefined1 *)0x1;
            }
            else {
              uVar5 = FUN_100803f3((int *)&param_3);
              local_10 = (undefined1 *)FUN_100867a8(local_24c,(WCHAR)uVar5);
              if ((int)local_10 < 0) {
                local_2c = 1;
              }
            }
            pWVar4 = (WCHAR *)local_24c;
          }
          else if (bVar9 == 0x5a) {
            psVar6 = (short *)FUN_100803d6((int *)&param_3);
            if ((psVar6 == (short *)0x0) ||
               (pWVar4 = *(WCHAR **)(psVar6 + 2), pWVar4 == (WCHAR *)0x0)) {
              local_c = (WCHAR *)PTR_DAT_100a8368;
              pWVar4 = (WCHAR *)PTR_DAT_100a8368;
              goto LAB_1007fff7;
            }
            if ((local_8 & 0x800) == 0) {
              local_28 = 0;
              local_10 = (undefined1 *)(int)*psVar6;
            }
            else {
              local_28 = 1;
              local_10 = (undefined1 *)((uint)(int)*psVar6 >> 1);
            }
          }
          else {
            if (bVar9 == 99) goto LAB_1007feb2;
            if (bVar9 == 100) goto LAB_100800dc;
          }
        }
        else {
LAB_1007fe85:
          local_8 = local_8 | 0x40;
          pWVar4 = (WCHAR *)local_24c;
          if (local_14 < 0) {
            local_14 = 6;
          }
          else if ((local_14 == 0) && (bVar9 == 0x67)) {
            local_14 = 1;
          }
          local_4c = *param_3;
          local_48 = param_3[1];
          param_3 = param_3 + 2;
          local_c = pWVar4;
          (*(code *)PTR___fptrap_100a8334)(&local_4c,local_24c,(int)(char)bVar9,local_14,local_38);
          uVar2 = local_8 & 0x80;
          if ((uVar2 != 0) && (local_14 == 0)) {
            (*(code *)PTR___fptrap_100a8340)(local_24c);
          }
          if ((bVar9 == 0x67) && (uVar2 == 0)) {
            (*(code *)PTR___fptrap_100a8338)(local_24c);
          }
          if (local_24c[0] == '-') {
            local_8 = local_8 | 0x100;
            pWVar4 = (WCHAR *)(local_24c + 1);
            local_c = pWVar4;
          }
LAB_1007fff7:
          local_10 = (undefined1 *)_strlen((char *)pWVar4);
          pWVar4 = local_c;
        }
      }
      else {
        if (bVar9 == 0x69) {
LAB_100800dc:
          local_8 = local_8 | 0x40;
        }
        else {
          if (bVar9 == 0x6e) {
            piVar7 = (int *)FUN_100803d6((int *)&param_3);
            if ((local_8 & 0x20) == 0) {
              *piVar7 = local_18;
            }
            else {
              *(undefined2 *)piVar7 = (undefined2)local_18;
            }
            local_2c = 1;
            break;
          }
          if (bVar9 == 0x6f) {
            local_10 = (undefined1 *)0x8;
            if ((local_8 & 0x80) != 0) {
              local_8 = local_8 | 0x200;
            }
            goto LAB_100800e7;
          }
          if (bVar9 == 0x70) {
            local_14 = 8;
            goto LAB_10080076;
          }
          if (bVar9 == 0x73) {
LAB_1007fe24:
            iVar10 = local_14;
            if (local_14 == -1) {
              iVar10 = 0x7fffffff;
            }
            pWVar3 = (WCHAR *)FUN_100803d6((int *)&param_3);
            if ((local_8 & 0x810) == 0) {
              pWVar4 = pWVar3;
              if (pWVar3 == (WCHAR *)0x0) {
                pWVar3 = (WCHAR *)PTR_DAT_100a8368;
                pWVar4 = (WCHAR *)PTR_DAT_100a8368;
              }
              for (; (iVar10 != 0 && ((char)*pWVar3 != '\0')); pWVar3 = (WCHAR *)((int)pWVar3 + 1))
              {
                iVar10 = iVar10 + -1;
              }
              local_10 = (undefined1 *)((int)pWVar3 - (int)pWVar4);
            }
            else {
              if (pWVar3 == (WCHAR *)0x0) {
                pWVar3 = (WCHAR *)PTR_DAT_100a836c;
              }
              local_28 = 1;
              for (pWVar4 = pWVar3; (iVar10 != 0 && (*pWVar4 != L'\0')); pWVar4 = pWVar4 + 1) {
                iVar10 = iVar10 + -1;
              }
              local_10 = (undefined1 *)((int)pWVar4 - (int)pWVar3 >> 1);
              pWVar4 = pWVar3;
            }
            goto LAB_10080201;
          }
          if (bVar9 != 0x75) {
            if (bVar9 != 0x78) goto LAB_10080201;
            local_30 = 0x27;
            goto LAB_1008007d;
          }
        }
        local_10 = (undefined1 *)0xa;
LAB_100800e7:
        if ((local_8 & 0x8000) == 0) {
          if ((local_8 & 0x20) == 0) {
            if ((local_8 & 0x40) == 0) {
              uVar2 = FUN_100803d6((int *)&param_3);
              uVar13 = (ulonglong)uVar2;
              goto LAB_1008013a;
            }
            uVar2 = FUN_100803d6((int *)&param_3);
          }
          else if ((local_8 & 0x40) == 0) {
            uVar2 = FUN_100803d6((int *)&param_3);
            uVar2 = uVar2 & 0xffff;
          }
          else {
            uVar5 = FUN_100803d6((int *)&param_3);
            uVar2 = (uint)(short)uVar5;
          }
          uVar13 = (ulonglong)(int)uVar2;
        }
        else {
          uVar13 = FUN_100803e3((int *)&param_3);
        }
LAB_1008013a:
        iVar10 = (int)(uVar13 >> 0x20);
        if ((((local_8 & 0x40) != 0) && (iVar10 == 0 || (longlong)uVar13 < 0)) &&
           ((longlong)uVar13 < 0)) {
          local_8 = local_8 | 0x100;
          uVar13 = CONCAT44(-(iVar10 + (uint)((int)uVar13 != 0)),-(int)uVar13);
        }
        uVar2 = (uint)(uVar13 >> 0x20);
        uVar15 = uVar13 & 0xffffffff;
        if ((local_8 & 0x8000) == 0) {
          uVar2 = 0;
        }
        if (local_14 < 0) {
          local_14 = 1;
        }
        else {
          local_8 = local_8 & 0xfffffff7;
        }
        if ((int)uVar13 == 0 && uVar2 == 0) {
          local_20 = 0;
        }
        local_c = (WCHAR *)&local_4d;
        while( true ) {
          uVar11 = (uint)uVar15;
          iVar10 = local_14 + -1;
          if ((local_14 < 1) && (uVar11 == 0 && uVar2 == 0)) break;
          local_40 = (int)local_10 >> 0x1f;
          local_44 = (uint)local_10;
          local_14 = iVar10;
          uVar14 = __aullrem(uVar11,uVar2,(uint)local_10,local_40);
          iVar10 = (int)uVar14 + 0x30;
          uVar15 = __aulldiv(uVar11,uVar2,local_44,local_40);
          uVar2 = (uint)(uVar15 >> 0x20);
          if (0x39 < iVar10) {
            iVar10 = iVar10 + local_30;
          }
          pWVar4 = (WCHAR *)((int)local_c + -1);
          *(char *)local_c = (char)iVar10;
          local_c = pWVar4;
        }
        iVar8 = -(int)local_c;
        local_10 = &local_4d + iVar8;
        pWVar4 = (WCHAR *)((int)local_c + 1);
        local_14 = iVar10;
        if (((local_8 & 0x200) != 0) &&
           ((*(char *)pWVar4 != '0' || (local_10 == (undefined1 *)0x0)))) {
          *(char *)local_c = '0';
          local_10 = (undefined1 *)((int)&local_4c + iVar8);
          pWVar4 = local_c;
        }
      }
LAB_10080201:
      local_c = pWVar4;
      uVar2 = local_8;
      if (local_2c == 0) {
        if ((local_8 & 0x40) != 0) {
          if ((local_8 & 0x100) == 0) {
            if ((local_8 & 1) == 0) {
              if ((local_8 & 2) == 0) goto LAB_10080239;
              local_1a = ' ';
            }
            else {
              local_1a = '+';
            }
          }
          else {
            local_1a = '-';
          }
          local_20 = 1;
        }
LAB_10080239:
        iVar10 = (local_24 - local_20) - (int)local_10;
        if ((local_8 & 0xc) == 0) {
          FUN_1008036d(0x20,iVar10,param_1,&local_18);
        }
        FUN_1008039e(&local_1a,local_20,param_1,&local_18);
        if (((uVar2 & 8) != 0) && ((uVar2 & 4) == 0)) {
          FUN_1008036d(0x30,iVar10,param_1,&local_18);
        }
        if ((local_28 == 0) || (puVar12 = local_10, pWVar4 = local_c, (int)local_10 < 1)) {
          FUN_1008039e((char *)local_c,(int)local_10,param_1,&local_18);
        }
        else {
          do {
            puVar12 = puVar12 + -1;
            iVar8 = FUN_100867a8(local_3c,*pWVar4);
            if (iVar8 < 1) break;
            FUN_1008039e(local_3c,iVar8,param_1,&local_18);
            pWVar4 = pWVar4 + 1;
          } while (puVar12 != (undefined1 *)0x0);
        }
        if ((local_8 & 4) != 0) {
          FUN_1008036d(0x20,iVar10,param_1,&local_18);
        }
      }
    }
    bVar9 = *param_2;
    pbVar1 = param_2;
  } while( true );
}

/* 10080338  FUN_10080338  (53 bytes)
 * undefined FUN_10080338(uint param_1, int * param_2, int * param_3)
 * called by: FUN_1007fbf7, FUN_1008036d, FUN_1008039e
 */
void __cdecl FUN_10080338(uint param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = FUN_1007fadf(param_1,param_2);
  }
  else {
    *(undefined1 *)*param_2 = (undefined1)param_1;
    *param_2 = *param_2 + 1;
    uVar2 = param_1 & 0xff;
  }
  if (uVar2 == 0xffffffff) {
    *param_3 = -1;
    return;
  }
  *param_3 = *param_3 + 1;
  return;
}

/* 1008036d  FUN_1008036d  (49 bytes)
 * undefined FUN_1008036d(uint param_1, int param_2, int * param_3, int * param_4)
 * called by: FUN_1007fbf7
 */
void __cdecl FUN_1008036d(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    FUN_10080338(param_1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}

/* 1008039e  FUN_1008039e  (56 bytes)
 * undefined FUN_1008039e(char * param_1, int param_2, int * param_3, int * param_4)
 * called by: FUN_1007fbf7
 */
void __cdecl FUN_1008039e(char *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_10080338((int)cVar1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}

/* 100803d6  FUN_100803d6  (13 bytes)
 * undefined4 FUN_100803d6(int * param_1)
 * called by: FUN_1007fbf7
 */
undefined4 __cdecl FUN_100803d6(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined4 *)(*param_1 + -4);
}

/* 100803e3  FUN_100803e3  (16 bytes)
 * undefined8 FUN_100803e3(int * param_1)
 * called by: FUN_1007fbf7
 */
undefined8 __cdecl FUN_100803e3(int *param_1)

{
  *param_1 = *param_1 + 8;
  return *(undefined8 *)(*param_1 + -8);
}

/* 100803f3  FUN_100803f3  (14 bytes)
 * undefined4 FUN_100803f3(int * param_1)
 * called by: FUN_1007fbf7
 */
undefined4 __cdecl FUN_100803f3(int *param_1)

{
  *param_1 = *param_1 + 4;
  return CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + -4));
}

/* 10080401  FUN_10080401  (2597 bytes)
 * int FUN_10080401(int * param_1, byte.conflict * param_2, undefined4 * param_3)
 * called by: sscanf
 */
int __thiscall FUN_10080401(void *this,int *param_1,byte_conflict *param_2,undefined4 *param_3)

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
  piVar7 = (int *)PTR_DAT_100a8118;
  do {
    PTR_DAT_100a8118 = (undefined *)piVar7;
    if (bVar1 == 0) {
LAB_10080e07:
      if (local_18 == (int *)0xffffffff) {
LAB_10080e0d:
        if ((local_38 == 0) && (local_19 == '\0')) {
          local_38 = -1;
        }
      }
      return local_38;
    }
    if ((int)DAT_100a8324 < 2) {
      uVar5 = *(byte *)((int)piVar7 + (uint)bVar1 * 2) & 8;
    }
    else {
      piVar7 = (int *)0x8;
      uVar5 = FUN_1007e1c6(this,(uint)bVar1,8);
    }
    if (uVar5 != 0) {
      local_8 = local_8 + -1;
      piVar7 = param_1;
      uVar5 = FUN_10080e8e((int *)&local_8,param_1);
      FUN_10080e77(uVar5,piVar7);
      uVar5 = FUN_1007dac6(this_00,(uint)pbVar9[1]);
      piVar7 = extraout_ECX;
      pbVar10 = pbVar9;
      while (pbVar9 = pbVar10 + 1, uVar5 != 0) {
        piVar17 = (int *)(uint)pbVar10[2];
        uVar5 = FUN_1007dac6(piVar7,(int)(uint)pbVar10[2]);
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
        if ((int)DAT_100a8324 < 2) {
          uVar6 = (byte)PTR_DAT_100a8118[uVar5 * 2] & 4;
          piVar7 = (int *)PTR_DAT_100a8118;
        }
        else {
          piVar17 = (int *)0x4;
          uVar6 = FUN_1007e1c6(piVar7,uVar5,4);
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
                  if ((pbVar9[2] != 0x36) || (pbVar9[3] != 0x34)) goto LAB_1008055c;
                  local_34 = (WCHAR *)((int)local_34 + 1);
                  local_2c = 0;
                  param_2 = pbVar9 + 3;
                }
                else if (uVar5 == 0x4c) {
                  local_11 = local_11 + '\x01';
                }
                else {
LAB_1008055c:
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
            else if (uVar5 != 0x77) goto LAB_1008055c;
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
          local_18 = (int *)FUN_10080e5d(param_1);
        }
        else {
          piVar7 = param_1;
          local_18 = (int *)FUN_10080e8e((int *)&local_8,param_1);
        }
      }
      if ((local_24 != 0) && (local_10 == 0)) {
LAB_10080de7:
        local_8 = local_8 + -1;
        FUN_10080e77((uint)local_18,param_1);
        goto LAB_10080e07;
      }
      if (uVar5 < 0x70) {
        if (uVar5 == 0x6f) {
LAB_10080b14:
          if (local_18 == (int *)0x2d) {
            local_1b = '\x01';
          }
          else if (local_18 != (int *)0x2b) goto LAB_10080b49;
          local_10 = local_10 + -1;
          if ((local_10 == 0) && (local_24 != 0)) {
            local_13 = '\x01';
          }
          else {
            local_8 = local_8 + 1;
            piVar7 = param_1;
            local_18 = (int *)FUN_10080e5d(param_1);
          }
          goto LAB_10080b49;
        }
        if (uVar5 != 99) {
          if (uVar5 == 100) goto LAB_10080b14;
          if (uVar5 < 0x65) {
LAB_1008088c:
            if ((int *)(uint)*param_2 != local_18) goto LAB_10080de7;
            local_19 = local_19 + -1;
            if (local_12 == '\0') {
              param_3 = local_48;
            }
            goto LAB_10080d68;
          }
          if (0x67 < uVar5) {
            if (uVar5 == 0x69) {
              uVar5 = 100;
              goto LAB_1008064a;
            }
            if (uVar5 != 0x6e) goto LAB_1008088c;
            puVar14 = local_8;
            if (local_12 != '\0') goto LAB_10080d68;
            goto LAB_10080d42;
          }
          pcVar11 = &local_1c8;
          if (local_18 == (int *)0x2d) {
            local_1c8 = '-';
            pcVar11 = local_1c7;
LAB_10080680:
            local_10 = local_10 + -1;
            local_8 = local_8 + 1;
            piVar7 = param_1;
            local_18 = (int *)FUN_10080e5d(param_1);
          }
          else if (local_18 == (int *)0x2b) goto LAB_10080680;
          if ((local_24 == 0) || (0x15d < local_10)) {
            local_10 = 0x15d;
          }
          while( true ) {
            piVar17 = local_18;
            if ((int)DAT_100a8324 < 2) {
              uVar5 = (byte)PTR_DAT_100a8118[(int)local_18 * 2] & 4;
            }
            else {
              uVar5 = FUN_1007e1c6(piVar7,(int)local_18,4);
            }
            if ((uVar5 == 0) ||
               (iVar15 = local_10 + -1, bVar16 = local_10 == 0, local_10 = iVar15, bVar16)) break;
            local_20 = local_20 + 1;
            *pcVar11 = (char)piVar17;
            pcVar11 = pcVar11 + 1;
            local_8 = local_8 + 1;
            piVar7 = param_1;
            local_18 = (int *)FUN_10080e5d(param_1);
          }
          if ((DAT_100a8328 == (char)piVar17) &&
             (iVar15 = local_10 + -1, bVar16 = local_10 != 0, local_10 = iVar15, bVar16)) {
            local_8 = local_8 + 1;
            piVar7 = param_1;
            piVar17 = (int *)FUN_10080e5d(param_1);
            *pcVar11 = DAT_100a8328;
            while( true ) {
              pcVar11 = pcVar11 + 1;
              local_18 = piVar17;
              if ((int)DAT_100a8324 < 2) {
                uVar5 = (byte)PTR_DAT_100a8118[(int)piVar17 * 2] & 4;
              }
              else {
                uVar5 = FUN_1007e1c6(piVar7,(int)piVar17,4);
              }
              if ((uVar5 == 0) ||
                 (iVar15 = local_10 + -1, bVar16 = local_10 == 0, local_10 = iVar15, bVar16)) break;
              local_20 = local_20 + 1;
              *pcVar11 = (char)piVar17;
              local_8 = local_8 + 1;
              piVar7 = param_1;
              piVar17 = (int *)FUN_10080e5d(param_1);
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
            piVar17 = (int *)FUN_10080e5d(param_1);
            local_18 = piVar17;
            if (piVar17 == (int *)0x2d) {
              *pcVar12 = '-';
              pcVar12 = pcVar11 + 2;
LAB_100807a7:
              bVar16 = local_10 != 0;
              local_10 = local_10 + -1;
              if (bVar16) goto LAB_100807b6;
              local_10 = 0;
            }
            else if (piVar17 == (int *)0x2b) goto LAB_100807a7;
            while( true ) {
              if ((int)DAT_100a8324 < 2) {
                uVar5 = (byte)PTR_DAT_100a8118[(int)piVar17 * 2] & 4;
              }
              else {
                uVar5 = FUN_1007e1c6(piVar7,(int)piVar17,4);
              }
              if ((uVar5 == 0) ||
                 (iVar15 = local_10 + -1, bVar16 = local_10 == 0, local_10 = iVar15, bVar16)) break;
              local_20 = local_20 + 1;
              *pcVar12 = (char)piVar17;
              pcVar12 = pcVar12 + 1;
LAB_100807b6:
              local_8 = local_8 + 1;
              piVar7 = param_1;
              piVar17 = (int *)FUN_10080e5d(param_1);
              local_18 = piVar17;
            }
          }
          local_8 = local_8 + -1;
          piVar7 = param_1;
          FUN_10080e77((uint)piVar17,param_1);
          if (local_20 != 0) {
            if (local_12 == '\0') {
              local_38 = local_38 + 1;
              *pcVar12 = '\0';
              (*(code *)PTR___fptrap_100a833c)(local_11 + -1,local_30,&local_1c8);
              piVar7 = extraout_ECX_00;
            }
            goto LAB_10080d68;
          }
          goto LAB_10080e07;
        }
        if (local_24 == 0) {
          local_10 = local_10 + 1;
          local_24 = 1;
        }
        if ('\0' < local_9) {
          local_1a = '\x01';
        }
        pcVar11 = &DAT_100a8378;
LAB_1008096d:
        local_1c = 0xff;
        pbVar9 = (byte *)pcVar11;
        pbVar10 = param_2;
LAB_10080971:
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
        if (*pbVar9 == 0) goto LAB_10080e07;
        if (local_40 == 0x7b) {
          param_2 = pbVar9;
        }
        local_8 = local_8 + -1;
        local_34 = local_30;
        piVar7 = param_1;
        FUN_10080e77((uint)local_18,param_1);
        while( true ) {
          if ((local_24 != 0) &&
             (iVar15 = local_10 + -1, bVar16 = local_10 == 0, local_10 = iVar15, bVar16))
          goto LAB_10080ad6;
          local_8 = local_8 + 1;
          local_18 = (int *)FUN_10080e5d(param_1);
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
              if ((PTR_DAT_100a8118[((uint)local_18 & 0xff) * 2 + 1] & 0x80) != 0) {
                local_8 = local_8 + 1;
                uVar5 = FUN_10080e5d(param_1);
                local_3b = (undefined1)uVar5;
              }
              FUN_10086955(&local_42,&local_3c,DAT_100a8324);
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
        FUN_10080e77((uint)local_18,param_1);
LAB_10080ad6:
        if (local_34 == pWVar13) goto LAB_10080e07;
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
          goto LAB_10080b14;
        }
        if (uVar5 == 0x73) {
          if ('\0' < local_9) {
            local_1a = '\x01';
          }
          pcVar11 = s_____100a8370;
          goto LAB_1008096d;
        }
        if (uVar5 == 0x75) goto LAB_10080b14;
        if (uVar5 != 0x78) {
          if (uVar5 != 0x7b) goto LAB_1008088c;
          if ('\0' < local_9) {
            local_1a = '\x01';
          }
          pbVar9 = param_2 + 1;
          pbVar10 = pbVar9;
          if (*pbVar9 == 0x5e) {
            pcVar11 = (char *)(param_2 + 2);
            param_2 = pbVar9;
            goto LAB_1008096d;
          }
          goto LAB_10080971;
        }
LAB_1008064a:
        if (local_18 == (int *)0x2d) {
          local_1b = '\x01';
LAB_100808d9:
          local_10 = local_10 + -1;
          if ((local_10 == 0) && (local_24 != 0)) {
            local_13 = '\x01';
          }
          else {
            local_8 = local_8 + 1;
            piVar7 = param_1;
            local_18 = (int *)FUN_10080e5d(param_1);
          }
        }
        else if (local_18 == (int *)0x2b) goto LAB_100808d9;
        if (local_18 == (int *)0x30) {
          local_8 = local_8 + 1;
          piVar7 = param_1;
          local_18 = (int *)FUN_10080e5d(param_1);
          if (((char)local_18 == 'x') || ((char)local_18 == 'X')) {
            local_8 = local_8 + 1;
            piVar7 = param_1;
            local_18 = (int *)FUN_10080e5d(param_1);
            uVar5 = 0x78;
          }
          else {
            local_20 = 1;
            if (uVar5 == 0x78) {
              local_8 = local_8 + -1;
              piVar7 = param_1;
              FUN_10080e77((uint)local_18,param_1);
              local_18 = (int *)0x30;
            }
            else {
              uVar5 = 0x6f;
            }
          }
        }
LAB_10080b49:
        if (local_34 == (WCHAR *)0x0) {
          if (local_13 == '\0') {
            while ((piVar17 = local_18, uVar5 != 0x78 && (uVar5 != 0x70))) {
              if ((int)DAT_100a8324 < 2) {
                uVar6 = (byte)PTR_DAT_100a8118[(int)local_18 * 2] & 4;
              }
              else {
                piVar3 = (int *)0x4;
                uVar6 = FUN_1007e1c6(piVar7,(int)local_18,4);
                piVar7 = piVar3;
              }
              if (uVar6 == 0) goto LAB_10080d10;
              if (uVar5 == 0x6f) {
                if (0x37 < (int)piVar17) goto LAB_10080d10;
                iVar15 = (int)puVar14 << 3;
              }
              else {
                iVar15 = (int)puVar14 * 10;
              }
LAB_10080ce8:
              local_20 = local_20 + 1;
              puVar14 = (undefined *)(iVar15 + -0x30 + (int)piVar17);
              if ((local_24 != 0) && (local_10 = local_10 + -1, local_10 == 0)) goto LAB_10080d1e;
              local_8 = local_8 + 1;
              piVar7 = param_1;
              local_18 = (int *)FUN_10080e5d(param_1);
            }
            if ((int)DAT_100a8324 < 2) {
              uVar6 = (byte)PTR_DAT_100a8118[(int)local_18 * 2] & 0x80;
            }
            else {
              piVar3 = (int *)0x80;
              uVar6 = FUN_1007e1c6(piVar7,(int)local_18,0x80);
              piVar7 = piVar3;
            }
            if (uVar6 != 0) {
              iVar15 = (int)puVar14 << 4;
              piVar3 = piVar17;
              piVar17 = (int *)FUN_10080e26(piVar7,(uint)piVar17);
              piVar7 = piVar3;
              local_18 = piVar17;
              goto LAB_10080ce8;
            }
LAB_10080d10:
            local_8 = local_8 + -1;
            piVar7 = param_1;
            FUN_10080e77((uint)piVar17,param_1);
          }
LAB_10080d1e:
          if (local_1b != '\0') {
            puVar14 = (undefined *)-(int)puVar14;
          }
        }
        else {
          if (local_13 == '\0') {
            while (piVar17 = local_18, uVar5 != 0x78) {
              if ((int)DAT_100a8324 < 2) {
                uVar6 = (byte)PTR_DAT_100a8118[(int)local_18 * 2] & 4;
              }
              else {
                uVar6 = FUN_1007e1c6(piVar7,(int)local_18,4);
              }
              if (uVar6 == 0) goto LAB_10080c32;
              if (uVar5 == 0x6f) {
                if (0x37 < (int)piVar17) goto LAB_10080c32;
                local_2c = __allshl('\x03',(int)local_2c._4_4_);
                piVar7 = extraout_ECX_02;
              }
              else {
                local_2c = __allmul((uint)local_2c,(int)local_2c._4_4_,10,0);
                piVar7 = extraout_ECX_03;
              }
LAB_10080c04:
              local_20 = local_20 + 1;
              piVar17 = piVar17 + -0xc;
              local_2c = CONCAT44((int)local_2c._4_4_ + ((int)piVar17 >> 0x1f) +
                                  (uint)CARRY4((uint)local_2c,(uint)piVar17),
                                  (undefined *)((uint)local_2c + (int)piVar17));
              if ((local_24 != 0) && (local_10 = local_10 + -1, local_10 == 0)) goto LAB_10080c40;
              local_8 = local_8 + 1;
              piVar7 = param_1;
              local_18 = (int *)FUN_10080e5d(param_1);
            }
            if ((int)DAT_100a8324 < 2) {
              uVar6 = (byte)PTR_DAT_100a8118[(int)local_18 * 2] & 0x80;
            }
            else {
              uVar6 = FUN_1007e1c6(piVar7,(int)local_18,0x80);
            }
            if (uVar6 != 0) {
              local_2c = __allshl('\x04',(int)local_2c._4_4_);
              piVar7 = piVar17;
              piVar17 = (int *)FUN_10080e26(this_01,(uint)piVar17);
              local_18 = piVar17;
              goto LAB_10080c04;
            }
LAB_10080c32:
            local_8 = local_8 + -1;
            piVar7 = param_1;
            FUN_10080e77((uint)piVar17,param_1);
          }
LAB_10080c40:
          if (local_1b != '\0') {
            piVar7 = (int *)-((int)local_2c._4_4_ + (uint)((uint)local_2c != 0));
            local_2c = CONCAT44(piVar7,-(uint)local_2c);
          }
        }
        if (uVar5 == 0x46) {
          local_20 = 0;
        }
        if (local_20 == 0) goto LAB_10080e07;
        if (local_12 == '\0') {
          local_38 = local_38 + 1;
LAB_10080d42:
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
LAB_10080d68:
      local_19 = local_19 + '\x01';
      param_2 = param_2 + 1;
      this = piVar7;
    }
    else {
      local_8 = local_8 + 1;
      piVar7 = (int *)FUN_10080e5d(param_1);
      param_2 = pbVar9 + 1;
      local_18 = piVar7;
      if ((int *)(uint)*pbVar9 != piVar7) goto LAB_10080de7;
      this = PTR_DAT_100a8118;
      if ((PTR_DAT_100a8118[((uint)piVar7 & 0xff) * 2 + 1] & 0x80) != 0) {
        local_8 = local_8 + 1;
        piVar17 = (int *)FUN_10080e5d(param_1);
        this = (void *)(uint)*param_2;
        param_2 = pbVar9 + 2;
        if (this != piVar17) {
          local_8 = local_8 + -1;
          FUN_10080e77((uint)piVar17,param_1);
          local_8 = local_8 + -1;
          FUN_10080e77((uint)piVar7,param_1);
          goto LAB_10080e07;
        }
        local_8 = local_8 + -1;
      }
    }
    if ((local_18 == (int *)0xffffffff) && ((*param_2 != '%' || (param_2[1] != 'n'))))
    goto LAB_10080e0d;
    bVar1 = *param_2;
    pbVar9 = param_2;
    piVar7 = (int *)PTR_DAT_100a8118;
  } while( true );
}

/* 10080e26  FUN_10080e26  (55 bytes)
 * uint FUN_10080e26(uint param_1)
 * called by: FUN_10080401
 */
uint __thiscall FUN_10080e26(void *this,uint param_1)

{
  uint uVar1;
  
  if (DAT_100a8324 < 2) {
    uVar1 = (byte)PTR_DAT_100a8118[param_1 * 2] & 4;
  }
  else {
    uVar1 = FUN_1007e1c6(this,param_1,4);
  }
  if (uVar1 == 0) {
    param_1 = (param_1 & 0xffffffdf) - 7;
  }
  return param_1;
}

/* 10080e5d  FUN_10080e5d  (26 bytes)
 * uint FUN_10080e5d(undefined4 * param_1)
 * called by: FUN_10080401, FUN_10080e8e
 */
uint __cdecl FUN_10080e5d(undefined4 *param_1)

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
  uVar3 = FUN_10083266(param_1);
  return uVar3;
}

/* 10080e77  FUN_10080e77  (23 bytes)
 * undefined FUN_10080e77(uint param_1, int * param_2)
 * called by: FUN_10080401
 */
void __cdecl FUN_10080e77(uint param_1,int *param_2)

{
  if (param_1 != 0xffffffff) {
    FUN_10086a9f(param_1,param_2);
  }
  return;
}

/* 10080e8e  FUN_10080e8e  (36 bytes)
 * uint FUN_10080e8e(int * param_1, undefined4 * param_2)
 * called by: FUN_10080401
 */
uint __cdecl FUN_10080e8e(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  void *this;
  
  do {
    *param_1 = *param_1 + 1;
    uVar1 = FUN_10080e5d(param_2);
    uVar2 = FUN_1007dac6(this,uVar1);
  } while (uVar2 != 0);
  return uVar1;
}

/* 10080ed6  FUN_10080ed6  (182 bytes)
 * uint * FUN_10080ed6(uint * param_1)
 * called by: strstr
 */
uint * __cdecl FUN_10080ed6(uint *param_1)

{
  uint uVar1;
  char cVar2;
  uint in_EAX;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  char cVar6;
  uint uVar7;
  
  cVar6 = (char)in_EAX;
  while (((uint)param_1 & 3) != 0) {
    uVar7 = *param_1;
    if ((char)uVar7 == cVar6) {
      return param_1;
    }
    param_1 = (uint *)((int)param_1 + 1);
    if ((char)uVar7 == '\0') {
      return (uint *)0x0;
    }
  }
  uVar7 = in_EAX | in_EAX << 8;
  while( true ) {
    while( true ) {
      uVar1 = *param_1;
      uVar4 = uVar1 ^ (uVar7 << 0x10 | uVar7);
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = param_1 + 1;
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      param_1 = puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (uint *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (uint *)0x0;
        }
      }
    }
    uVar1 = *param_1;
    if ((char)uVar1 == cVar6) {
      return param_1;
    }
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == cVar6) {
      return (uint *)((int)param_1 + 1);
    }
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == cVar6) {
      return (uint *)((int)param_1 + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == cVar6) {
      return (uint *)((int)param_1 + 3);
    }
    param_1 = puVar5;
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
  }
  return (uint *)0x0;
}

/* 10081053  FUN_10081053  (7 bytes)
 * undefined FUN_10081053(void)
 * called by: __ctrandisp1, __ctrandisp2
 */
void FUN_10081053(void)

{
  char cVar1;
  ushort uVar2;
  int unaff_EBP;
  ushort in_FPUStatusWord;
  float10 in_ST0;
  
  *(byte *)(unaff_EBP + -0x2c8) = *(byte *)(unaff_EBP + -0x2c8) & 0xfe;
  if (DAT_102efc04 != 0) {
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
      goto LAB_10081129;
    }
    uVar2 = *(ushort *)(unaff_EBP + -0x2ca) & 0x7ff0;
    if (uVar2 == 0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 4;
      in_ST0 = (float10)fscale(in_ST0,(float10)1536.0);
      if (ABS(in_ST0) < (float10)2.2250738585072014e-308) {
        in_ST0 = in_ST0 * (float10)0.0;
      }
      goto LAB_10081129;
    }
    if (uVar2 == 0x7ff0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 3;
      in_ST0 = (float10)fscale(in_ST0,(float10)-1536.0);
      if ((float10)1.79769313486232e+308 < ABS(in_ST0)) {
        in_ST0 = in_ST0 * (float10)INFINITY;
      }
      goto LAB_10081129;
    }
  }
  if ((*(ushort *)(unaff_EBP + -0xa4) & 0x20) != 0) {
    return;
  }
  if ((in_FPUStatusWord & 0x20) == 0) {
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x8e) = 8;
LAB_10081129:
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
  FUN_10086b0d((int)*(char *)(*(int *)(unaff_EBP + -0x94) + 0xe),(int *)(unaff_EBP + -0x8e),
               (ushort *)(unaff_EBP + -0xa4));
  return;
}

/* 1008105a  FUN_1008105a  (305 bytes)
 * undefined FUN_1008105a(void)
 * called by: __cintrindisp1, __cintrindisp2
 */
void FUN_1008105a(void)

{
  char cVar1;
  ushort uVar2;
  int unaff_EBP;
  ushort in_FPUStatusWord;
  float10 in_ST0;
  
  if (DAT_102efc04 != 0) {
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
      goto LAB_10081129;
    }
    uVar2 = *(ushort *)(unaff_EBP + -0x2ca) & 0x7ff0;
    if (uVar2 == 0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 4;
      in_ST0 = (float10)fscale(in_ST0,(float10)1536.0);
      if (ABS(in_ST0) < (float10)2.2250738585072014e-308) {
        in_ST0 = in_ST0 * (float10)0.0;
      }
      goto LAB_10081129;
    }
    if (uVar2 == 0x7ff0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 3;
      in_ST0 = (float10)fscale(in_ST0,(float10)-1536.0);
      if ((float10)1.79769313486232e+308 < ABS(in_ST0)) {
        in_ST0 = in_ST0 * (float10)INFINITY;
      }
      goto LAB_10081129;
    }
  }
  if ((*(ushort *)(unaff_EBP + -0xa4) & 0x20) != 0) {
    return;
  }
  if ((in_FPUStatusWord & 0x20) == 0) {
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x8e) = 8;
LAB_10081129:
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
  FUN_10086b0d((int)*(char *)(*(int *)(unaff_EBP + -0x94) + 0xe),(int *)(unaff_EBP + -0x8e),
               (ushort *)(unaff_EBP + -0xa4));
  return;
}

/* 10081304  FUN_10081304  (7 bytes)
 * undefined FUN_10081304()
 */
float10 FUN_10081304(void)

{
  return (float10)0;
}

/* 1008133d  FUN_1008133d  (42 bytes)
 * undefined FUN_1008133d()
 */
float10 FUN_1008133d(void)

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

/* 10081367  FUN_10081367  (63 bytes)
 * undefined FUN_10081367()
 */
float10 FUN_10081367(void)

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
      goto LAB_100813a3;
    }
  }
  *(undefined1 *)(unaff_EBP + -0x90) = 1;
LAB_100813a3:
  return fVar2 + in_ST1;
}

/* 100813a6  FUN_100813a6  (29 bytes)
 * undefined FUN_100813a6()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unkbyte10 FUN_100813a6(void)

{
  int unaff_EBP;
  unkbyte10 Var1;
  
  Var1 = _DAT_100a8380;
  if (*(char *)(unaff_EBP + -0x90) < '\x01') {
    *(undefined1 *)(unaff_EBP + -0x90) = 1;
  }
  return Var1;
}

/* 10081bd6  FUN_10081bd6  (518 bytes)
 * undefined4 FUN_10081bd6(undefined4 param_1, uint param_2, ushort param_3)
 * called by: FUN_10081ddc
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10081bd6(undefined4 param_1,uint param_2,ushort param_3)

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
       ((&DAT_100a83cc)[(param_2._2_2_ & 0x7800) >> 0xb] != '\0')) && ((param_3 & 0x7fff) != 0x7fff)
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
        fVar3 = fVar3 * (float10)_DAT_100a83fc;
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

/* 10081ddc  FUN_10081ddc  (178 bytes)
 * float10 FUN_10081ddc(void)
 * called by: FUN_1007dc94
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_10081ddc(void)

{
  float10 in_ST0;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 in_ST1;
  uint uVar2;
  float10 fVar1;
  
  uVar2 = (uint)((unkuint10)in_ST1 >> 0x20);
  if (((uint)((unkuint10)in_ST1 >> 0x30) & 0x7fff0000) != 0) {
    FUN_10081bd6(SUB104(in_ST1,0),uVar2,(ushort)((unkuint10)in_ST1 >> 0x40));
    return extraout_ST0;
  }
  if (SUB104(in_ST1,0) != 0 || uVar2 != 0) {
    fVar1 = in_ST1 * (float10)_DAT_100a83e4;
    FUN_10081bd6(SUB104(fVar1,0),(uint)((unkuint10)fVar1 >> 0x20),(ushort)((unkuint10)fVar1 >> 0x40)
                );
    return extraout_ST0_00;
  }
  return in_ST0 - (float10)(unkint10)(in_ST0 / in_ST1) * in_ST1;
}

/* 10082199  FUN_10082199  (78 bytes)
 * int * FUN_10082199(uint * param_1)
 * called by: __nh_malloc
 */
int * __cdecl FUN_10082199(uint *param_1)

{
  int *piVar1;
  
  if (param_1 <= DAT_100a8b34) {
    FUN_10082ab6(9);
    piVar1 = FUN_10084468(param_1);
    FUN_10082b17(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  piVar1 = HeapAlloc(DAT_102f02dc,0,(int)param_1 + 0xfU & 0xfffffff0);
  return piVar1;
}

/* 100821e7  FUN_100821e7  (45 bytes)
 * undefined FUN_100821e7(void)
 * called by: FUN_1007e8b1
 */
void FUN_100821e7(void)

{
  if (PTR_FUN_100a8094 != (undefined *)0x0) {
    (*(code *)PTR_FUN_100a8094)();
  }
  FUN_100822eb((undefined4 *)&DAT_1009a050,(undefined4 *)&DAT_1009a064);
  FUN_100822eb((undefined4 *)&DAT_1009a000,(undefined4 *)&DAT_1009a04c);
  return;
}

/* 10082225  FUN_10082225  (15 bytes)
 * undefined FUN_10082225(void)
 * called by: FUN_1007e8b1
 */
void FUN_10082225(void)

{
  FUN_10082234(0,0,1);
  return;
}

/* 10082234  FUN_10082234  (163 bytes)
 * undefined FUN_10082234(UINT param_1, int param_2, int param_3)
 * called by: FUN_10082225, __exit
 */
void __cdecl FUN_10082234(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_100822d9();
  if (DAT_102efc60 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_102efc5c = 1;
  DAT_102efc58 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_102f1318 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_102f1314 - 4), DAT_102f1318 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_102f1318 <= puVar1);
    }
    FUN_100822eb((undefined4 *)&DAT_1009a068,(undefined4 *)&DAT_1009a070);
  }
  FUN_100822eb((undefined4 *)&DAT_1009a074,(undefined4 *)&DAT_1009a07c);
  if (param_3 == 0) {
    DAT_102efc60 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_100822e2();
  return;
}

/* 100822d9  FUN_100822d9  (9 bytes)
 * undefined FUN_100822d9(void)
 * called by: FUN_1007dcc0, FUN_10082234
 */
void FUN_100822d9(void)

{
  FUN_10082ab6(0xd);
  return;
}

/* 100822e2  FUN_100822e2  (9 bytes)
 * undefined FUN_100822e2(void)
 * called by: FUN_1007dcc0, FUN_10082234
 */
void FUN_100822e2(void)

{
  FUN_10082b17(0xd);
  return;
}

/* 100822eb  FUN_100822eb  (26 bytes)
 * undefined FUN_100822eb(undefined4 * param_1, undefined4 * param_2)
 * called by: FUN_100821e7, FUN_10082234
 */
void __cdecl FUN_100822eb(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}

/* 10082305  FUN_10082305  (312 bytes)
 * int * FUN_10082305(int * param_1, uint * param_2)
 * called by: FUN_1007dcc0
 */
int * __cdecl FUN_10082305(int *param_1,uint *param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  
  if (param_1 == (int *)0x0) {
    piVar1 = _malloc((size_t)param_2);
  }
  else {
    if (param_2 == (uint *)0x0) {
      FUN_1007e869(param_1);
    }
    else {
      do {
        if (param_2 < (uint *)0xffffffe1) {
          FUN_10082ab6(9);
          puVar2 = (uint *)FUN_10084112((int)param_1);
          if (puVar2 == (uint *)0x0) {
            FUN_10082b17(9);
            if (param_2 == (uint *)0x0) {
              param_2 = (uint *)0x1;
            }
            param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
            piVar1 = HeapReAlloc(DAT_102f02dc,0,param_1,(SIZE_T)param_2);
          }
          else {
            if (DAT_100a8b34 < param_2) {
LAB_100823a4:
              if (param_2 == (uint *)0x0) {
                param_2 = (uint *)0x1;
              }
              param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
              piVar1 = HeapAlloc(DAT_102f02dc,0,(SIZE_T)param_2);
              if (piVar1 != (int *)0x0) {
                puVar4 = (uint *)(param_1[-1] - 1U);
                if (param_2 <= (uint *)(param_1[-1] - 1U)) {
                  puVar4 = param_2;
                }
                FUN_100837c0(piVar1,param_1,(uint)puVar4);
                FUN_1008413d(puVar2,(uint)param_1);
              }
            }
            else {
              iVar3 = FUN_1008491d(puVar2,(int)param_1,(int)param_2);
              piVar1 = param_1;
              if (iVar3 == 0) {
                piVar1 = FUN_10084468(param_2);
                if (piVar1 == (int *)0x0) goto LAB_100823a4;
                puVar4 = (uint *)(param_1[-1] - 1U);
                if (param_2 <= (uint *)(param_1[-1] - 1U)) {
                  puVar4 = param_2;
                }
                FUN_100837c0(piVar1,param_1,(uint)puVar4);
                FUN_1008413d(puVar2,(uint)param_1);
              }
              if (piVar1 == (int *)0x0) goto LAB_100823a4;
            }
            FUN_10082b17(9);
          }
          if (piVar1 != (int *)0x0) {
            return piVar1;
          }
        }
        if (DAT_102efd04 == 0) {
          return (int *)0x0;
        }
        iVar3 = FUN_10084008(param_2);
      } while (iVar3 != 0);
    }
    piVar1 = (int *)0x0;
  }
  return piVar1;
}

/* 1008243d  FUN_1008243d  (69 bytes)
 * SIZE_T FUN_1008243d(LPCVOID param_1)
 * called by: FUN_1007dcc0
 */
SIZE_T __cdecl FUN_1008243d(LPCVOID param_1)

{
  uint uVar1;
  SIZE_T SVar2;
  
  FUN_10082ab6(9);
  uVar1 = FUN_10084112((int)param_1);
  if (uVar1 == 0) {
    FUN_10082b17(9);
    SVar2 = HeapSize(DAT_102f02dc,0,param_1);
  }
  else {
    SVar2 = *(int *)((int)param_1 + -4) - 9;
    FUN_10082b17(9);
  }
  return SVar2;
}

/* 100826a0  FUN_100826a0  (23 bytes)
 * float10 FUN_100826a0(undefined4 param_1, undefined4 param_2, undefined2 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
 * called by: FUN_1007ddb2, FUN_100827e9
 */
float10 __fastcall
FUN_100826a0(undefined4 param_1,uint param_2,undefined2 param_3,undefined4 param_4,
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
  FUN_10086b0d(param_2,&local_24,&param_3);
  return (float10)dStack_c;
}

/* 10082700  FUN_10082700  (21 bytes)
 * undefined1[10] FUN_10082700(void)
 * called by: FUN_1007ddb2
 */
undefined1  [10] FUN_10082700(void)

{
  float10 in_ST0;
  float10 fVar1;
  undefined1 auVar2 [10];
  
  fVar1 = (float10)f2xm1(-(ROUND(in_ST0) - in_ST0));
  auVar2 = (undefined1  [10])fscale((float10)1 + fVar1,ROUND(in_ST0));
  return auVar2;
}

/* 10082715  FUN_10082715  (23 bytes)
 * undefined FUN_10082715(void)
 * called by: FUN_1007ddb2, FUN_1007dfdd
 */
void FUN_10082715(void)

{
  return;
}

/* 1008272c  FUN_1008272c  (25 bytes)
 * undefined4 FUN_1008272c(void)
 * called by: FUN_1007dfdd
 */
undefined4 FUN_1008272c(void)

{
  uint in_EAX;
  
  if ((in_EAX & 0x80000) != 0) {
    return 7;
  }
  return 1;
}

/* 10082788  FUN_10082788  (22 bytes)
 * uint FUN_10082788(undefined4 param_1, uint param_2)
 * called by: FUN_1007dfc0
 */
uint __cdecl FUN_10082788(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return param_2 & 0x7ff00000;
  }
  return param_2;
}

/* 1008279e  FUN_1008279e  (13 bytes)
 * undefined FUN_1008279e(void)
 * called by: FUN_1007ddb2
 */
void FUN_1008279e(void)

{
  return;
}

/* 100827e9  FUN_100827e9  (163 bytes)
 * undefined FUN_100827e9(undefined4 param_1, uint param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 * called by: FUN_1007ddb2
 */
void __fastcall
FUN_100827e9(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
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
    FUN_100826a0(param_1,0x1d,unaff_retaddr,param_3,param_4,param_5,param_6,param_7);
    return;
  }
  __startOneArgErrorHandling(param_1,param_2,unaff_retaddr,param_3,param_4,param_5);
  return;
}

/* 1008288c  FUN_1008288c  (304 bytes)
 * undefined4 FUN_1008288c(int param_1, int param_2, double param_3, double * param_4)
 * called by: FUN_1007ddb2
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1008288c(int param_1,int param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  
  dVar1 = (double)CONCAT44(param_2,param_1);
  if ((double)CONCAT44(param_2,param_1) < 0.0) {
    dVar1 = -dVar1;
  }
  dVar2 = _DAT_100a8cb0;
  if (param_3._4_4_ == 0x7ff00000) {
    if (param_3._0_4_ != 0) {
LAB_10082917:
      if (param_2 == 0x7ff00000) {
        if (param_1 != 0) {
          return 0;
        }
        if (0.0 < param_3) goto LAB_100829b2;
        if (param_3 < 0.0) goto LAB_10082949;
      }
      else {
        if (param_2 != -0x100000) {
          return 0;
        }
        if (param_1 != 0) {
          return 0;
        }
        iVar3 = FUN_100829bc(param_3);
        if (0.0 < param_3) {
          dVar2 = _DAT_100a8cb0;
          if (iVar3 == 1) {
            dVar2 = -_DAT_100a8cb0;
          }
          goto LAB_100829b2;
        }
        if (param_3 < 0.0) {
          dVar2 = _DAT_100a8cd0;
          if (iVar3 != 1) {
            dVar2 = 0.0;
          }
          goto LAB_100829b2;
        }
      }
      dVar2 = 1.0;
      goto LAB_100829b2;
    }
    if (1.0 < dVar1) goto LAB_100829b2;
    if (1.0 <= dVar1) {
LAB_100828dc:
      *param_4 = _DAT_100a8cb8;
      return 1;
    }
  }
  else {
    if (param_3 != -INFINITY) goto LAB_10082917;
    if (dVar1 <= 1.0) {
      if (1.0 <= dVar1) goto LAB_100828dc;
      goto LAB_100829b2;
    }
  }
LAB_10082949:
  dVar2 = 0.0;
LAB_100829b2:
  *param_4 = dVar2;
  return 0;
}

/* 100829bc  FUN_100829bc  (101 bytes)
 * undefined4 FUN_100829bc(double param_1)
 * called by: FUN_1008288c
 */
undefined4 __cdecl FUN_100829bc(double param_1)

{
  uint uVar1;
  float10 fVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_10086d33(SUB84(param_1,0),(uint)((ulonglong)param_1 >> 0x20));
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

/* 10082a21  FUN_10082a21  (41 bytes)
 * undefined FUN_10082a21(void)
 * called by: FUN_1007f89c
 */
void FUN_10082a21(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100a85b4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100a85a4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100a8594);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100a8574);
  return;
}

/* 10082a4a  FUN_10082a4a  (108 bytes)
 * undefined FUN_10082a4a(void)
 * called by: FUN_1007f8f0
 */
void FUN_10082a4a(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_100a8570;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_100a85b4)) && (ppuVar1 != &PTR_DAT_100a85a4)) &&
       ((ppuVar1 != &PTR_DAT_100a8594 && (ppuVar1 != &PTR_DAT_100a8574)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_1007e869(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x100a8630);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100a8594);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100a85a4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100a85b4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100a8574);
  return;
}

/* 10082ab6  FUN_10082ab6  (97 bytes)
 * undefined FUN_10082ab6(int param_1)
 * called by: FUN_1007e08b, FUN_1007e7dc, FUN_1007e869, FUN_10082199, FUN_100822d9, FUN_10082305, FUN_1008243d, FUN_10082ab6, FUN_10082f6c, FUN_10082f80, FUN_10082faf, FUN_100831c2, ... (23 total)
 */
void __cdecl FUN_10082ab6(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_100a8570 + param_1;
  if ((&DAT_100a8570)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_10082ab6(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_1007e869(lpCriticalSection);
    }
    FUN_10082b17(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}

/* 10082b17  FUN_10082b17  (21 bytes)
 * undefined FUN_10082b17(int param_1)
 * called by: FUN_1007e08b, FUN_1007e7dc, FUN_1007e869, FUN_10082199, FUN_100822e2, FUN_10082305, FUN_1008243d, FUN_10082ab6, FUN_10082f6c, FUN_10082fd2, FUN_10083001, FUN_100831c2, ... (23 total)
 */
void __cdecl FUN_10082b17(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_100a8570)[param_1]);
  return;
}

/* 10082b2c  FUN_10082b2c  (511 bytes)
 * int FUN_10082b2c(LCID param_1, uint param_2, char * param_3, int param_4, LPWSTR param_5, int param_6, UINT param_7, int param_8)
 * called by: FUN_1007e0fa, FUN_100855bc, FUN_10087761, FUN_10088b16
 */
int __cdecl
FUN_10082b2c(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10096188;
  pcStack_10 = FUN_1008664c;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_102efcf4 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,&DAT_100a93d8,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_102efcf4 = 2;
    }
    else {
      DAT_102efcf4 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_10082d50(param_3,param_4);
  }
  if (DAT_102efcf4 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_102efcf4 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_102efcec;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_1007e2e0();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_1007e2e0();
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

/* 10082c3c  FUN_10082c3c  (4 bytes)
 * undefined FUN_10082c3c()
 */
undefined4 FUN_10082c3c(void)

{
  return 1;
}

/* 10082cf0  FUN_10082cf0  (4 bytes)
 * undefined FUN_10082cf0()
 */
undefined4 FUN_10082cf0(void)

{
  return 1;
}

/* 10082d50  FUN_10082d50  (43 bytes)
 * int FUN_10082d50(char * param_1, int param_2)
 * called by: FUN_10082b2c
 */
int __cdecl FUN_10082d50(char *param_1,int param_2)

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

/* 10082d7b  FUN_10082d7b  (318 bytes)
 * BOOL FUN_10082d7b(DWORD param_1, LPCSTR param_2, int param_3, LPWORD param_4, UINT param_5, LCID param_6, int param_7)
 * called by: FUN_1007e1c6, FUN_10087761
 */
BOOL __cdecl
FUN_10082d7b(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_100961a0;
  pcStack_10 = FUN_1008664c;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_102efcf8;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_102efcf8 == 0) {
    ExceptionList = &local_14;
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    iVar3 = 1;
    puVar1 = local_1c;
    if (BVar2 == 0) {
      BVar2 = GetStringTypeA(0,1,&DAT_100a93d8,1,local_20);
      if (BVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      iVar3 = 2;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  DAT_102efcf8 = iVar3;
  if (DAT_102efcf8 != 2) {
    if (DAT_102efcf8 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_102efcec;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_1007e2e0();
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
    param_6 = DAT_102efcdc;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}

/* 10082e74  FUN_10082e74  (4 bytes)
 * undefined FUN_10082e74()
 */
undefined4 FUN_10082e74(void)

{
  return 1;
}

/* 10082ec4  FUN_10082ec4  (168 bytes)
 * undefined FUN_10082ec4()
 */
void FUN_10082ec4(void)

{
  int iVar1;
  undefined **ppuVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = 0x14;
  if (DAT_102f1300 == 0) {
    iVar1 = 0x200;
  }
  else if (0x13 < DAT_102f1300) goto LAB_10082ee3;
  DAT_102f1300 = iVar1;
LAB_10082ee3:
  DAT_102f02e0 = FUN_1007e7dc(DAT_102f1300,4);
  if (DAT_102f02e0 == (int *)0x0) {
    DAT_102f1300 = 0x14;
    DAT_102f02e0 = FUN_1007e7dc(0x14,4);
    if (DAT_102f02e0 == (int *)0x0) {
      __amsg_exit(0x1a);
    }
  }
  iVar1 = 0;
  ppuVar2 = &PTR_DAT_100a8740;
  do {
    *(undefined ***)(iVar1 + (int)DAT_102f02e0) = ppuVar2;
    ppuVar2 = ppuVar2 + 8;
    iVar1 = iVar1 + 4;
  } while ((int)ppuVar2 < 0x100a89c0);
  uVar3 = 0;
  puVar4 = &DAT_100a8750;
  do {
    iVar1 = *(int *)((&DAT_102f01c0)[(int)uVar3 >> 5] + (uVar3 & 0x1f) * 0x24);
    if ((iVar1 == -1) || (iVar1 == 0)) {
      *puVar4 = 0xffffffff;
    }
    puVar4 = puVar4 + 8;
    uVar3 = uVar3 + 1;
  } while ((int)puVar4 < 0x100a87b0);
  return;
}

/* 10082f6c  FUN_10082f6c  (149 bytes)
 * undefined FUN_10082f6c()
 */
int FUN_10082f6c(void)

{
  FILE *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_100831b9();
  if (DAT_102efc58 == '\0') {
    return iVar2;
  }
  iVar4 = 0;
  FUN_10082ab6(2);
  iVar2 = 3;
  if (3 < DAT_102f1300) {
    do {
      iVar5 = iVar2 * 4;
      pFVar1 = *(FILE **)(iVar5 + DAT_102f02e0);
      if (pFVar1 != (FILE *)0x0) {
        if (((pFVar1->_flag & 0x83) != 0) && (iVar3 = fclose(pFVar1), iVar3 != -1)) {
          iVar4 = iVar4 + 1;
        }
        if (0x13 < iVar2) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar5 + DAT_102f02e0) + 0x20));
          FUN_1007e869(*(LPVOID *)(iVar5 + DAT_102f02e0));
          *(undefined4 *)(iVar5 + DAT_102f02e0) = 0;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_102f1300);
  }
  FUN_10082b17(2);
  return iVar4;
}

/* 10082f80  FUN_10082f80  (47 bytes)
 * undefined FUN_10082f80(uint param_1)
 * called by: FUN_1007e682, fclose, fgets, fread, fwrite
 */
void __cdecl FUN_10082f80(uint param_1)

{
  if ((0x100a873f < param_1) && (param_1 < 0x100a89a1)) {
    FUN_10082ab6(((int)(param_1 + 0xeff578c0) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}

/* 10082faf  FUN_10082faf  (35 bytes)
 * undefined FUN_10082faf(int param_1, int param_2)
 * called by: FUN_100831c2, FUN_100834b2
 */
void __cdecl FUN_10082faf(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10082ab6(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}

/* 10082fd2  FUN_10082fd2  (47 bytes)
 * undefined FUN_10082fd2(uint param_1)
 * called by: FUN_1007e3ee, FUN_1007e682, fclose, fgets, fread, fwrite
 */
void __cdecl FUN_10082fd2(uint param_1)

{
  if ((0x100a873f < param_1) && (param_1 < 0x100a89a1)) {
    FUN_10082b17(((int)(param_1 + 0xeff578c0) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}

/* 10083001  FUN_10083001  (35 bytes)
 * undefined FUN_10083001(int param_1, int param_2)
 * called by: FUN_100831c2, FUN_100834b2
 */
void __cdecl FUN_10083001(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10082b17(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}

/* 10083024  FUN_10083024  (93 bytes)
 * undefined4 FUN_10083024(uint param_1)
 * called by: FUN_1008723f, __fclose_lk
 */
undefined4 __cdecl FUN_10083024(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_102f02c0) &&
     ((*(byte *)((&DAT_102f01c0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1008712b(param_1);
    uVar1 = FUN_10083081(param_1);
    FUN_1008718a(param_1);
    return uVar1;
  }
  pDVar2 = FUN_10083d58();
  *pDVar2 = 9;
  pDVar2 = FUN_10083d61();
  *pDVar2 = 0;
  return 0xffffffff;
}

/* 10083081  FUN_10083081  (131 bytes)
 * undefined4 FUN_10083081(uint param_1)
 * called by: FUN_10083024
 */
undefined4 __cdecl FUN_10083081(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_100870e9(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_100870e9(2);
      iVar2 = FUN_100870e9(1);
      if (iVar2 == iVar1) goto LAB_100830cf;
    }
    hObject = (HANDLE)FUN_100870e9(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_100830d1;
    }
  }
LAB_100830cf:
  DVar4 = 0;
LAB_100830d1:
  FUN_1008706a(param_1);
  *(undefined1 *)((&DAT_102f01c0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_10083ce5(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

/* 1008312f  FUN_1008312f  (46 bytes)
 * int FUN_1008312f(int * param_1)
 * called by: FUN_100831c2
 */
int __cdecl FUN_1008312f(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1008315d(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_100871ac(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}

/* 1008315d  FUN_1008315d  (92 bytes)
 * undefined4 FUN_1008315d(int * param_1)
 * called by: FUN_1007e578, FUN_1007e6ae, FUN_1008312f, __fclose_lk
 */
undefined4 __cdecl FUN_1008315d(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    uVar3 = *param_1 - param_1[2];
    if (0 < (int)uVar3) {
      uVar1 = FUN_10083af5(param_1[4],(char *)param_1[2],uVar3);
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

/* 100831b9  FUN_100831b9  (9 bytes)
 * undefined FUN_100831b9()
 * called by: FUN_10082f6c
 */
void FUN_100831b9(void)

{
  FUN_100831c2(1);
  return;
}

/* 100831c2  FUN_100831c2  (164 bytes)
 * int FUN_100831c2(int param_1)
 * called by: FUN_100831b9
 */
int __cdecl FUN_100831c2(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  FUN_10082ab6(2);
  iVar4 = 0;
  if (0 < DAT_102f1300) {
    do {
      iVar2 = *(int *)(DAT_102f02e0 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_10082faf(iVar4,iVar2);
        piVar1 = *(int **)(DAT_102f02e0 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_1008312f(piVar1);
            if (iVar2 != -1) {
              iVar3 = iVar3 + 1;
            }
          }
          else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
            iVar2 = FUN_1008312f(piVar1);
            if (iVar2 == -1) {
              iVar5 = -1;
            }
          }
        }
        FUN_10083001(iVar4,*(int *)(DAT_102f02e0 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_102f1300);
  }
  FUN_10082b17(2);
  if (param_1 != 1) {
    iVar3 = iVar5;
  }
  return iVar3;
}

/* 10083266  FUN_10083266  (220 bytes)
 * uint FUN_10083266(undefined4 * param_1)
 * called by: FUN_1007e461, FUN_10080e5d, fgets
 */
uint __cdecl FUN_10083266(undefined4 *param_1)

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
        FUN_1008673b(param_1);
      }
      else {
        *param_1 = param_1[2];
      }
      iVar3 = FUN_1008357a(param_1[4],(char *)param_1[2],(char *)param_1[6]);
      param_1[1] = iVar3;
      if ((iVar3 != 0) && (iVar3 != -1)) {
        if ((param_1[3] & 0x82) == 0) {
          uVar2 = param_1[4];
          if (uVar2 == 0xffffffff) {
            puVar4 = &DAT_100a8b38;
          }
          else {
            puVar4 = (undefined *)((&DAT_102f01c0)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
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

/* 10083342  FUN_10083342  (368 bytes)
 * undefined4 * FUN_10083342(LPCSTR param_1, char * param_2, uint param_3, undefined4 * param_4)
 * called by: FUN_1007e3ee
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl FUN_10083342(LPCSTR param_1,char *param_2,uint param_3,undefined4 *param_4)

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
      uVar6 = DAT_102efe7c | 1;
      goto LAB_10083383;
    }
    if (cVar1 != 'w') {
      return (undefined4 *)0x0;
    }
    uVar5 = 0x301;
  }
  uVar6 = DAT_102efe7c | 2;
LAB_10083383:
  bVar2 = true;
LAB_10083386:
  cVar1 = param_2[1];
  param_2 = param_2 + 1;
  if ((cVar1 == '\0') || (!bVar2)) {
    uVar5 = FUN_1008723f(param_1,uVar5,param_3,0x1a4);
    if ((int)uVar5 < 0) {
      return (undefined4 *)0x0;
    }
    _DAT_102efcfc = _DAT_102efcfc + 1;
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
        goto LAB_10083386;
      }
    }
    else if (cVar1 == '+') {
      if ((uVar5 & 2) == 0) {
        uVar5 = uVar5 & 0xfffffffe | 2;
        uVar6 = uVar6 & 0xfffffffc | 0x80;
        goto LAB_10083386;
      }
    }
    else if (cVar1 == 'D') {
      if ((uVar5 & 0x40) == 0) {
        uVar5 = uVar5 | 0x40;
        goto LAB_10083386;
      }
    }
    else if (cVar1 == 'R') {
      if (!bVar3) {
        bVar3 = true;
        uVar5 = uVar5 | 0x10;
        goto LAB_10083386;
      }
    }
    else if ((cVar1 == 'S') && (!bVar3)) {
      bVar3 = true;
      uVar5 = uVar5 | 0x20;
      goto LAB_10083386;
    }
  }
  else {
    if (cVar1 == 'b') {
      if ((uVar5 & 0xc000) != 0) goto LAB_10083466;
      uVar5 = uVar5 | 0x8000;
      goto LAB_10083386;
    }
    if (cVar1 == 'c') {
      if (!bVar4) {
        bVar4 = true;
        uVar6 = uVar6 | 0x4000;
        goto LAB_10083386;
      }
    }
    else {
      if (cVar1 != 'n') {
        if ((cVar1 != 't') || ((uVar5 & 0xc000) != 0)) goto LAB_10083466;
        uVar5 = uVar5 | 0x4000;
        goto LAB_10083386;
      }
      if (!bVar4) {
        bVar4 = true;
        uVar6 = uVar6 & 0xffffbfff;
        goto LAB_10083386;
      }
    }
  }
LAB_10083466:
  bVar2 = false;
  goto LAB_10083386;
}

/* 100834b2  FUN_100834b2  (200 bytes)
 * undefined4 * FUN_100834b2(void)
 * called by: FUN_1007e3ee
 */
undefined4 * FUN_100834b2(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x0;
  FUN_10082ab6(2);
  iVar3 = 0;
  if (0 < DAT_102f1300) {
    do {
      iVar1 = *(int *)(DAT_102f02e0 + iVar3 * 4);
      if (iVar1 == 0) {
        iVar3 = iVar3 * 4;
        pvVar2 = _malloc(0x38);
        *(void **)(iVar3 + DAT_102f02e0) = pvVar2;
        if (*(int *)(iVar3 + DAT_102f02e0) != 0) {
          InitializeCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_102f02e0) + 0x20));
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_102f02e0) + 0x20));
          puVar4 = *(undefined4 **)(iVar3 + DAT_102f02e0);
LAB_10083556:
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
        FUN_10082faf(iVar3,iVar1);
        iVar1 = *(int *)(DAT_102f02e0 + iVar3 * 4);
        if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
          puVar4 = *(undefined4 **)(DAT_102f02e0 + iVar3 * 4);
          goto LAB_10083556;
        }
        FUN_10083001(iVar3,iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_102f1300);
  }
  FUN_10082b17(2);
  return puVar4;
}

/* 1008357a  FUN_1008357a  (101 bytes)
 * int FUN_1008357a(uint param_1, char * param_2, char * param_3)
 * called by: FUN_1007e461, FUN_10083266
 */
int __cdecl FUN_1008357a(uint param_1,char *param_2,char *param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_102f02c0) &&
     ((*(byte *)((&DAT_102f01c0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1008712b(param_1);
    iVar1 = FUN_100835df(param_1,param_2,param_3);
    FUN_1008718a(param_1);
    return iVar1;
  }
  pDVar2 = FUN_10083d58();
  *pDVar2 = 9;
  pDVar2 = FUN_10083d61();
  *pDVar2 = 0;
  return -1;
}

/* 100835df  FUN_100835df  (473 bytes)
 * int FUN_100835df(uint param_1, char * param_2, char * param_3)
 * called by: FUN_1008357a, FUN_1008723f
 */
int __cdecl FUN_100835df(uint param_1,char *param_2,char *param_3)

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
    piVar1 = &DAT_102f01c0 + ((int)param_1 >> 5);
    iVar9 = (param_1 & 0x1f) * 0x24;
    bVar4 = *(byte *)((&DAT_102f01c0)[(int)param_1 >> 5] + iVar9 + 4);
    if ((bVar4 & 2) == 0) {
      pcVar8 = param_2;
      if (((bVar4 & 0x48) != 0) &&
         (cVar3 = *(char *)((&DAT_102f01c0)[(int)param_1 >> 5] + iVar9 + 5), cVar3 != '\n')) {
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
          pDVar7 = FUN_10083d58();
          *pDVar7 = 9;
          pDVar7 = FUN_10083d61();
          *pDVar7 = 5;
        }
        else {
          if (DVar6 == 0x6d) {
            return 0;
          }
          FUN_10083ce5(DVar6);
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
                goto LAB_1008376a;
              }
              *pcVar8 = '\r';
              pcVar8 = pcVar8 + 1;
              param_3 = param_3 + 1;
            }
            else {
              param_3 = param_3 + 1;
              BVar5 = ReadFile(*(HANDLE *)(*piVar1 + iVar9),&local_5,1,&local_10,(LPOVERLAPPED)0x0);
              if (((BVar5 == 0) && (DVar6 = GetLastError(), DVar6 != 0)) || (local_10 == 0)) {
LAB_10083784:
                *pcVar8 = '\r';
LAB_10083787:
                pcVar8 = pcVar8 + 1;
              }
              else if ((*(byte *)(*piVar1 + 4 + iVar9) & 0x48) == 0) {
                if ((pcVar8 == param_2) && (local_5 == '\n')) {
LAB_1008376a:
                  *pcVar8 = '\n';
                  goto LAB_10083787;
                }
                FUN_10083dcf(param_1,-1,1);
                if (local_5 != '\n') goto LAB_10083784;
              }
              else {
                if (local_5 == '\n') goto LAB_1008376a;
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

/* 100837c0  FUN_100837c0  (664 bytes)
 * undefined4 * FUN_100837c0(undefined4 * param_1, undefined4 * param_2, uint param_3)
 * called by: FUN_1007e461, FUN_1007e578, FUN_10082305, FUN_10085129
 */
undefined4 * __cdecl FUN_100837c0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10083977_caseD_2;
        case 3:
          goto switchD_10083977_caseD_3;
        }
        goto switchD_10083977_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10083977_caseD_0;
      case 1:
        goto switchD_10083977_caseD_1;
      case 2:
        goto switchD_10083977_caseD_2;
      case 3:
        goto switchD_10083977_caseD_3;
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
              goto switchD_10083977_caseD_2;
            case 3:
              goto switchD_10083977_caseD_3;
            }
            goto switchD_10083977_caseD_1;
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
              goto switchD_10083977_caseD_2;
            case 3:
              goto switchD_10083977_caseD_3;
            }
            goto switchD_10083977_caseD_1;
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
              goto switchD_10083977_caseD_2;
            case 3:
              goto switchD_10083977_caseD_3;
            }
            goto switchD_10083977_caseD_1;
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
switchD_10083977_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10083977_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10083977_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10083977_caseD_0:
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
        goto switchD_100837f5_caseD_2;
      case 3:
        goto switchD_100837f5_caseD_3;
      }
      goto switchD_100837f5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_100837f5_caseD_0;
    case 1:
      goto switchD_100837f5_caseD_1;
    case 2:
      goto switchD_100837f5_caseD_2;
    case 3:
      goto switchD_100837f5_caseD_3;
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
            goto switchD_100837f5_caseD_2;
          case 3:
            goto switchD_100837f5_caseD_3;
          }
          goto switchD_100837f5_caseD_1;
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
            goto switchD_100837f5_caseD_2;
          case 3:
            goto switchD_100837f5_caseD_3;
          }
          goto switchD_100837f5_caseD_1;
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
            goto switchD_100837f5_caseD_2;
          case 3:
            goto switchD_100837f5_caseD_3;
          }
          goto switchD_100837f5_caseD_1;
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
switchD_100837f5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_100837f5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_100837f5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_100837f5_caseD_0:
  return param_1;
}

/* 10083af5  FUN_10083af5  (101 bytes)
 * int FUN_10083af5(uint param_1, char * param_2, uint param_3)
 * called by: FUN_1007e578, FUN_1007fadf, FUN_1008315d
 */
int __cdecl FUN_10083af5(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_102f02c0) &&
     ((*(byte *)((&DAT_102f01c0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1008712b(param_1);
    iVar1 = FUN_10083b5a(param_1,param_2,param_3);
    FUN_1008718a(param_1);
    return iVar1;
  }
  pDVar2 = FUN_10083d58();
  *pDVar2 = 9;
  pDVar2 = FUN_10083d61();
  *pDVar2 = 0;
  return -1;
}

/* 10083b5a  FUN_10083b5a  (395 bytes)
 * int FUN_10083b5a(DWORD param_1, char * param_2, uint param_3)
 * called by: FUN_10083af5, FUN_10088981
 */
int __cdecl FUN_10083b5a(DWORD param_1,char *param_2,uint param_3)

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
LAB_10083b73:
    iVar4 = 0;
  }
  else {
    piVar1 = &DAT_102f01c0 + ((int)param_1 >> 5);
    iVar4 = (param_1 & 0x1f) * 0x24;
    if ((*(byte *)(*piVar1 + 4 + iVar4) & 0x20) != 0) {
      FUN_10083dcf(param_1,0,2);
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
LAB_10083c42:
      if (local_c != 0) {
        return local_c - local_14;
      }
      if (param_1 == 0) goto LAB_10083cb4;
      if (param_1 == 5) {
        pDVar7 = FUN_10083d58();
        *pDVar7 = 9;
        pDVar7 = FUN_10083d61();
        *pDVar7 = 5;
      }
      else {
        FUN_10083ce5(param_1);
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
            goto LAB_10083c42;
          }
          local_c = local_c + local_10;
          if (((int)local_10 < (int)pcVar5 - (int)local_418) ||
             (param_3 <= (uint)((int)local_8 - (int)param_2))) goto LAB_10083c42;
        } while( true );
      }
LAB_10083cb4:
      if (((*(byte *)(*piVar1 + 4 + iVar4) & 0x40) != 0) && (*param_2 == '\x1a')) goto LAB_10083b73;
      pDVar7 = FUN_10083d58();
      *pDVar7 = 0x1c;
      pDVar7 = FUN_10083d61();
      *pDVar7 = 0;
    }
    iVar4 = -1;
  }
  return iVar4;
}

/* 10083ce5  FUN_10083ce5  (115 bytes)
 * undefined FUN_10083ce5(uint param_1)
 * called by: FUN_10083081, FUN_100835df, FUN_10083b5a, FUN_10083dcf, FUN_1008723f
 */
void __cdecl FUN_10083ce5(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_10083d61();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_100a89c0;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_10083d58();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x100a89c4);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x100a8b28);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_10083d58();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_10083d58();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_10083d58();
  *pDVar1 = 0x16;
  return;
}

/* 10083d58  FUN_10083d58  (9 bytes)
 * DWORD * FUN_10083d58(void)
 * called by: FUN_1007e6ae, FUN_10083024, FUN_1008357a, FUN_100835df, FUN_10083af5, FUN_10083b5a, FUN_10083ce5, FUN_10083d6a, FUN_10083dcf, FUN_10083e42, FUN_10086801, FUN_100869b2, ... (20 total)
 */
DWORD * FUN_10083d58(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1007f921();
  return pDVar1 + 2;
}

/* 10083d61  FUN_10083d61  (9 bytes)
 * DWORD * FUN_10083d61(void)
 * called by: FUN_10083024, FUN_1008357a, FUN_100835df, FUN_10083af5, FUN_10083b5a, FUN_10083ce5, FUN_10083d6a, FUN_10086fee, FUN_1008706a, FUN_100870e9, FUN_100871ac, FUN_1008723f, ... (13 total)
 */
DWORD * FUN_10083d61(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1007f921();
  return pDVar1 + 3;
}

/* 10083d6a  FUN_10083d6a  (101 bytes)
 * DWORD FUN_10083d6a(uint param_1, LONG param_2, DWORD param_3)
 * called by: FUN_1007e6ae, FUN_1007fadf, FUN_10083e42
 */
DWORD __cdecl FUN_10083d6a(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_102f02c0) &&
     ((*(byte *)((&DAT_102f01c0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1008712b(param_1);
    DVar1 = FUN_10083dcf(param_1,param_2,param_3);
    FUN_1008718a(param_1);
    return DVar1;
  }
  pDVar2 = FUN_10083d58();
  *pDVar2 = 9;
  pDVar2 = FUN_10083d61();
  *pDVar2 = 0;
  return 0xffffffff;
}

/* 10083dcf  FUN_10083dcf  (115 bytes)
 * DWORD FUN_10083dcf(uint param_1, LONG param_2, DWORD param_3)
 * called by: FUN_100835df, FUN_10083b5a, FUN_10083d6a, FUN_1008723f, FUN_10088981
 */
DWORD __cdecl FUN_10083dcf(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  uint uVar4;
  
  hFile = (HANDLE)FUN_100870e9(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_10083d58();
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
      pbVar1 = (byte *)((&DAT_102f01c0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar3;
    }
    FUN_10083ce5(uVar4);
  }
  return 0xffffffff;
}

/* 10083e42  FUN_10083e42  (353 bytes)
 * int FUN_10083e42(char * param_1)
 * called by: FUN_1007e6ae
 */
int __cdecl FUN_10083e42(char *param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  DWORD *pDVar4;
  char *pcVar5;
  DWORD DVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int local_c;
  DWORD local_8;
  
  pcVar8 = param_1;
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(int *)(param_1 + 4) < 0) {
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
  local_8 = FUN_10083d6a(uVar1,0,1);
  if ((int)local_8 < 0) {
LAB_10083ed0:
    local_c = -1;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xc);
    if ((uVar2 & 0x108) == 0) {
      return local_8 - *(int *)(param_1 + 4);
    }
    pcVar5 = *(char **)param_1;
    pcVar7 = *(char **)(param_1 + 8);
    local_c = (int)pcVar5 - (int)pcVar7;
    if ((uVar2 & 3) == 0) {
      if ((uVar2 & 0x80) == 0) {
        pDVar4 = FUN_10083d58();
        *pDVar4 = 0x16;
        goto LAB_10083ed0;
      }
    }
    else {
      pcVar9 = pcVar7;
      if ((*(byte *)((&DAT_102f01c0)[(int)uVar1 >> 5] + 4 + (uVar1 & 0x1f) * 0x24) & 0x80) != 0) {
        for (; pcVar9 < pcVar5; pcVar9 = pcVar9 + 1) {
          if (*pcVar9 == '\n') {
            local_c = local_c + 1;
          }
        }
      }
    }
    if (local_8 != 0) {
      if ((param_1[0xc] & 1U) != 0) {
        if (*(int *)(param_1 + 4) == 0) {
          local_c = 0;
        }
        else {
          pcVar5 = pcVar5 + (*(int *)(param_1 + 4) - (int)pcVar7);
          iVar10 = (uVar1 & 0x1f) * 0x24;
          if ((*(byte *)(iVar10 + 4 + (&DAT_102f01c0)[(int)uVar1 >> 5]) & 0x80) != 0) {
            DVar6 = FUN_10083d6a(uVar1,0,2);
            if (DVar6 == local_8) {
              pcVar7 = *(char **)(param_1 + 8);
              pcVar9 = pcVar5 + (int)pcVar7;
              param_1 = pcVar5;
              for (; pcVar7 < pcVar9; pcVar7 = pcVar7 + 1) {
                if (*pcVar7 == '\n') {
                  param_1 = param_1 + 1;
                }
              }
              bVar3 = pcVar8[0xd] & 0x20;
            }
            else {
              FUN_10083d6a(uVar1,local_8,0);
              pcVar8 = (char *)0x200;
              if ((((char *)0x200 < pcVar5) || ((*(uint *)(param_1 + 0xc) & 8) == 0)) ||
                 ((*(uint *)(param_1 + 0xc) & 0x400) != 0)) {
                pcVar8 = *(char **)(param_1 + 0x18);
              }
              bVar3 = *(byte *)(iVar10 + 4 + (&DAT_102f01c0)[(int)uVar1 >> 5]) & 4;
              param_1 = pcVar8;
            }
            pcVar5 = param_1;
            if (bVar3 != 0) {
              pcVar5 = param_1 + 1;
            }
          }
          param_1 = pcVar5;
          local_8 = local_8 - (int)param_1;
        }
      }
      local_c = local_c + local_8;
    }
  }
  return local_c;
}

/* 10084008  FUN_10084008  (27 bytes)
 * undefined4 FUN_10084008(undefined4 param_1)
 * called by: FUN_1007e7dc, FUN_10082305, __nh_malloc
 */
undefined4 __cdecl FUN_10084008(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_102efd00 != (code *)0x0) {
    iVar1 = (*DAT_102efd00)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* 10084023  FUN_10084023  (60 bytes)
 * undefined4 FUN_10084023(int param_1)
 * called by: FUN_1007e8b1
 */
undefined4 __cdecl FUN_10084023(int param_1)

{
  int iVar1;
  
  DAT_102f02dc = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_102f02dc != (HANDLE)0x0) {
    iVar1 = FUN_100840d4();
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_102f02dc);
  }
  return 0;
}

/* 1008405f  FUN_1008405f  (117 bytes)
 * undefined FUN_1008405f(void)
 * called by: FUN_1007e8b1
 */
void FUN_1008405f(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < DAT_102f02d4) {
    puVar2 = (undefined4 *)((int)DAT_102f02d8 + 0xc);
    do {
      VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
      VirtualFree((LPVOID)*puVar2,0,0x8000);
      HeapFree(DAT_102f02dc,0,(LPVOID)puVar2[1]);
      puVar2 = puVar2 + 5;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_102f02d4);
  }
  HeapFree(DAT_102f02dc,0,DAT_102f02d8);
  HeapDestroy(DAT_102f02dc);
  return;
}

/* 100840d4  FUN_100840d4  (62 bytes)
 * undefined4 FUN_100840d4(void)
 * called by: FUN_10084023
 */
undefined4 FUN_100840d4(void)

{
  DAT_102f02d8 = HeapAlloc(DAT_102f02dc,0,0x140);
  if (DAT_102f02d8 == (LPVOID)0x0) {
    return 0;
  }
  DAT_102f02d0 = 0;
  DAT_102f02d4 = 0;
  DAT_102f02cc = DAT_102f02d8;
  DAT_102f02c4 = 0x10;
  return 1;
}

/* 10084112  FUN_10084112  (43 bytes)
 * uint FUN_10084112(int param_1)
 * called by: FUN_1007e869, FUN_10082305, FUN_1008243d
 */
uint __cdecl FUN_10084112(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_102f02d8;
  while( true ) {
    if (DAT_102f02d8 + DAT_102f02d4 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}

/* 1008413d  FUN_1008413d  (811 bytes)
 * undefined FUN_1008413d(uint * param_1, uint param_2)
 * called by: FUN_1007e869, FUN_10082305
 */
void __cdecl FUN_1008413d(uint *param_1,uint param_2)

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
  uVar5 = DAT_102f02c8;
  puVar2 = DAT_102f02d0;
  if ((*piVar3 == 0) && (uVar5 = uVar10, puVar2 = param_1, DAT_102f02d0 != (uint *)0x0)) {
    VirtualFree((LPVOID)(DAT_102f02c8 * 0x8000 + DAT_102f02d0[3]),0x8000,0x4000);
    DAT_102f02d0[2] = DAT_102f02d0[2] | 0x80000000U >> ((byte)DAT_102f02c8 & 0x1f);
    *(undefined4 *)(DAT_102f02d0[4] + 0xc4 + DAT_102f02c8 * 4) = 0;
    *(char *)(DAT_102f02d0[4] + 0x43) = *(char *)(DAT_102f02d0[4] + 0x43) + -1;
    if (*(char *)(DAT_102f02d0[4] + 0x43) == '\0') {
      DAT_102f02d0[1] = DAT_102f02d0[1] & 0xfffffffe;
    }
    puVar2 = param_1;
    if (DAT_102f02d0[2] == 0xffffffff) {
      VirtualFree((LPVOID)DAT_102f02d0[3],0,0x8000);
      HeapFree(DAT_102f02dc,0,(LPVOID)DAT_102f02d0[4]);
      FUN_10085cf0(DAT_102f02d0,DAT_102f02d0 + 5,
                   (DAT_102f02d4 * 0x14 - (int)DAT_102f02d0) + -0x14 + DAT_102f02d8);
      DAT_102f02d4 = DAT_102f02d4 + -1;
      if (DAT_102f02d0 < param_1) {
        param_1 = param_1 + -5;
      }
      DAT_102f02cc = DAT_102f02d8;
      puVar2 = param_1;
    }
  }
  DAT_102f02d0 = puVar2;
  DAT_102f02c8 = uVar5;
  return;
}

/* 10084468  FUN_10084468  (777 bytes)
 * int * FUN_10084468(uint * param_1)
 * called by: FUN_1007e7dc, FUN_10082199, FUN_10082305
 */
int * __cdecl FUN_10084468(uint *param_1)

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
  
  puVar8 = DAT_102f02d8 + DAT_102f02d4 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_102f02cc;
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
  puVar11 = DAT_102f02d8;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_102f02cc && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_102f02cc) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_102f02d8;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_102f02cc && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_102f02cc) && (param_1 = FUN_10084771(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_10084822((int)param_1);
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
  DAT_102f02cc = param_1;
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
    if (iVar9 == 0) goto LAB_1008472e;
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
LAB_1008472e:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_102f02d0)) && (local_8 == DAT_102f02c8)) {
    DAT_102f02d0 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}

/* 10084771  FUN_10084771  (177 bytes)
 * undefined4 * FUN_10084771(void)
 * called by: FUN_10084468
 */
undefined4 * FUN_10084771(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_102f02d4 == DAT_102f02c4) {
    pvVar2 = HeapReAlloc(DAT_102f02dc,0,DAT_102f02d8,(DAT_102f02c4 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_102f02c4 = DAT_102f02c4 + 0x10;
    DAT_102f02d8 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_102f02d8 + DAT_102f02d4 * 0x14);
  pvVar2 = HeapAlloc(DAT_102f02dc,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_102f02d4 = DAT_102f02d4 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_102f02dc,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}

/* 10084822  FUN_10084822  (251 bytes)
 * int FUN_10084822(int param_1)
 * called by: FUN_10084468
 */
int __cdecl FUN_10084822(int param_1)

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

/* 1008491d  FUN_1008491d  (758 bytes)
 * undefined4 FUN_1008491d(uint * param_1, int param_2, int param_3)
 * called by: FUN_10082305
 */
undefined4 __cdecl FUN_1008491d(uint *param_1,int param_2,int param_3)

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

/* 10084c13  FUN_10084c13  (444 bytes)
 * undefined FUN_10084c13(void)
 * called by: FUN_1007e8b1
 */
void FUN_10084c13(void)

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
  DAT_102f02c0 = 0x20;
  DAT_102f01c0 = puVar2;
  for (; puVar2 < DAT_102f01c0 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_102f02c0 < (int)UVar8) {
      puVar2 = &DAT_102f01c4;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_102f02c0;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_102f02c0 = DAT_102f02c0 + 0x20;
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
      } while ((int)DAT_102f02c0 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_102f01c0)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_102f01c0 + iVar6 * 9;
    if (DAT_102f01c0[iVar6 * 9] == -1) {
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
          goto LAB_10084db8;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_10084db8:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_102f02c0);
      return;
    }
  } while( true );
}

/* 10084dcf  FUN_10084dcf  (84 bytes)
 * undefined FUN_10084dcf(void)
 * called by: FUN_1007e8b1
 */
void FUN_10084dcf(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_102f01c0;
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
      FUN_1007e869((LPVOID)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x102f02c0);
  return;
}

/* 10084e23  FUN_10084e23  (185 bytes)
 * undefined FUN_10084e23(void)
 * called by: FUN_1007e8b1
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10084e23(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_102f1310 == 0) {
    FUN_100878e6();
  }
  iVar5 = 0;
  for (puVar6 = DAT_102efc10; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_102efc40 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_102efc10;
  puVar6 = DAT_102efc10;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_10085c00((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_1007e869(DAT_102efc10);
  DAT_102efc10 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_102f130c = 1;
  return;
}

/* 10084edc  FUN_10084edc  (153 bytes)
 * undefined FUN_10084edc(void)
 * called by: FUN_1007e8b1
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10084edc(void)

{
  undefined4 *puVar1;
  byte_conflict *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_102f1310 == 0) {
    FUN_100878e6();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_102efd08,0x104);
  _DAT_102efc50 = &DAT_102efd08;
  pbVar2 = &DAT_102efd08;
  if (*DAT_102f131c != '\0') {
    pbVar2 = DAT_102f131c;
  }
  FUN_10084f75(pbVar2,(undefined4 *)0x0,(byte_conflict *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_10084f75(pbVar2,puVar1,(byte_conflict *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_102efc38 = puVar1;
  _DAT_102efc34 = local_8 + -1;
  return;
}

/* 10084f75  FUN_10084f75  (436 bytes)
 * undefined FUN_10084f75(byte.conflict * param_1, undefined4 * param_2, byte.conflict * param_3, int * param_4, int * param_5)
 * called by: FUN_10084edc
 */
void __cdecl
FUN_10084f75(byte_conflict *param_1,undefined4 *param_2,byte_conflict *param_3,int *param_4,
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
      if (((*(byte *)((int)&DAT_102f00a0 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_102f00a0 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_10085020;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_10085020:
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
          if ((*(byte *)((int)&DAT_102f00a0 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_102f00a0 + bVar1 + 1) & 4) != 0) {
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

/* 10085129  FUN_10085129  (306 bytes)
 * LPSTR FUN_10085129(void)
 * called by: FUN_1007e8b1
 */
LPSTR FUN_10085129(void)

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
  if (DAT_102efe0c == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_102efe0c = 1;
LAB_10085180:
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
        FUN_1007e869(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_102efe0c = 2;
  }
  else {
    if (DAT_102efe0c == 1) goto LAB_10085180;
    if (DAT_102efe0c != 2) {
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
    FUN_100837c0((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}

/* 1008525b  FUN_1008525b  (57 bytes)
 * undefined FUN_1008525b(void)
 * called by: __amsg_exit
 */
void FUN_1008525b(void)

{
  if ((DAT_102efc18 == 1) || ((DAT_102efc18 == 0 && (DAT_102efc1c == 1)))) {
    FUN_10085294(0xfc);
    if (DAT_102efe10 != (code *)0x0) {
      (*DAT_102efe10)();
    }
    FUN_10085294(0xff);
  }
  return;
}

/* 10085294  FUN_10085294  (339 bytes)
 * undefined FUN_10085294(DWORD param_1)
 * called by: FUN_1008525b, FUN_10086724, __amsg_exit
 */
void __cdecl FUN_10085294(DWORD param_1)

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
  pDVar2 = &DAT_100a8b60;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x100a8bf0);
  if (param_1 == (&DAT_100a8b60)[iVar5 * 2]) {
    if ((DAT_102efc18 == 1) || ((DAT_102efc18 == 0 && (DAT_102efc1c == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x100a8b64);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_10085c00(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_10085c00(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10085c10(local_a4,_Dest);
      FUN_10085c10(local_a4,(uint *)&DAT_10096460);
      FUN_10085c10(local_a4,*(uint **)(iVar5 * 8 + 0x100a8b64));
      auStackY_1e3._3_4_ = 0x100853b8;
      FUN_10087902(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}

/* 100853e7  FUN_100853e7  (53 bytes)
 * uint FUN_100853e7(uint param_1, uint param_2)
 * called by: FUN_1008541c
 */
uint __thiscall FUN_100853e7(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_10085432(local_8);
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_100854c4(uVar1);
  return uVar1;
}

/* 1008541c  FUN_1008541c  (22 bytes)
 * undefined FUN_1008541c(uint param_1, uint param_2)
 * called by: FUN_1007ea5a
 */
void __thiscall FUN_1008541c(void *this,uint param_1,uint param_2)

{
  FUN_100853e7(this,param_1,param_2 & 0xfff7ffff);
  return;
}

/* 10085432  FUN_10085432  (146 bytes)
 * uint FUN_10085432(uint param_1)
 * called by: FUN_100853e7
 */
uint __cdecl FUN_10085432(uint param_1)

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

/* 100854c4  FUN_100854c4  (137 bytes)
 * uint FUN_100854c4(uint param_1)
 * called by: FUN_100853e7
 */
uint __cdecl FUN_100854c4(uint param_1)

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

/* 1008554d  FUN_1008554d  (111 bytes)
 * uint FUN_1008554d(uint param_1)
 * called by: FUN_1007ead3
 */
uint __cdecl FUN_1008554d(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_102efcdc == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_102f1308);
    bVar1 = DAT_102f1304 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_102f1308);
      this = (void *)0x13;
      FUN_10082ab6(0x13);
    }
    param_1 = FUN_100855bc(this,param_1);
    if (bVar1) {
      FUN_10082b17(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_102f1308);
    }
  }
  return param_1;
}

/* 100855bc  FUN_100855bc  (203 bytes)
 * uint FUN_100855bc(uint param_1)
 * called by: FUN_1008554d, FUN_100887b0, FUN_10088880
 */
uint __thiscall FUN_100855bc(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_102efcdc == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    iVar3 = 1;
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_100a8324 < 2) {
        uVar2 = (byte)PTR_DAT_100a8118[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_1007e1c6(this,param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_100a8118[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_10082b2c(DAT_102efcdc,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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

/* 10085687  FUN_10085687  (73 bytes)
 * undefined4 FUN_10085687(int param_1, int param_2)
 * called by: FUN_10085726
 */
undefined4 __cdecl FUN_10085687(int param_1,int param_2)

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

/* 100856d0  FUN_100856d0  (86 bytes)
 * undefined FUN_100856d0(int param_1, int param_2)
 * called by: FUN_10085726
 */
void __cdecl FUN_100856d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  iVar1 = FUN_10087b4a(*puVar3,1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f),puVar3);
  iVar2 = param_2 / 0x20 + -1;
  if (-1 < iVar2) {
    puVar3 = (uint *)(param_1 + iVar2 * 4);
    do {
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_10087b4a(*puVar3,1,puVar3);
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -1;
    } while (-1 < iVar2);
  }
  return;
}

/* 10085726  FUN_10085726  (140 bytes)
 * undefined4 FUN_10085726(int param_1, int param_2)
 * called by: FUN_10085881
 */
undefined4 __cdecl FUN_10085726(int param_1,int param_2)

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
     (iVar2 = FUN_10085687(param_1,param_2 + 1), iVar2 == 0)) {
    local_8 = FUN_100856d0(param_1,param_2 + -1);
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

/* 100857b2  FUN_100857b2  (27 bytes)
 * undefined FUN_100857b2(int param_1, undefined4 * param_2)
 * called by: FUN_10085881
 */
void __cdecl FUN_100857b2(int param_1,undefined4 *param_2)

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

/* 100857cd  FUN_100857cd  (12 bytes)
 * undefined FUN_100857cd(undefined4 * param_1)
 * called by: FUN_10085881
 */
void __cdecl FUN_100857cd(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

/* 100857d9  FUN_100857d9  (27 bytes)
 * undefined4 FUN_100857d9(int * param_1)
 * called by: FUN_10085881
 */
undefined4 __cdecl FUN_100857d9(int *param_1)

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

/* 100857f4  FUN_100857f4  (141 bytes)
 * undefined FUN_100857f4(uint * param_1, uint param_2)
 * called by: FUN_10085881
 */
void __cdecl FUN_100857f4(uint *param_1,uint param_2)

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

/* 10085881  FUN_10085881  (364 bytes)
 * undefined4 FUN_10085881(ushort * param_1, uint * param_2, int * param_3)
 * called by: FUN_100859ed, FUN_10085a03
 */
undefined4 __cdecl FUN_10085881(ushort *param_1,uint *param_2,int *param_3)

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
    iVar2 = FUN_100857d9((int *)&local_10);
    if (iVar2 != 0) {
LAB_100859ad:
      uVar5 = 0;
      goto LAB_100859af;
    }
    FUN_100857cd(&local_10);
  }
  else {
    FUN_100857b2((int)local_1c,&local_10);
    iVar2 = FUN_10085726((int)&local_10,param_3[2]);
    if (iVar2 != 0) {
      iVar4 = uVar3 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar4 < iVar2 - param_3[2]) {
      FUN_100857cd(&local_10);
    }
    else {
      if (iVar2 < iVar4) {
        if (*param_3 <= iVar4) {
          FUN_100857cd(&local_10);
          local_10 = local_10 | 0x80000000;
          FUN_100857f4(&local_10,param_3[3]);
          iVar4 = param_3[5] + *param_3;
          uVar5 = 1;
          goto LAB_100859af;
        }
        local_10 = local_10 & 0x7fffffff;
        iVar4 = param_3[5] + iVar4;
        FUN_100857f4(&local_10,param_3[3]);
        goto LAB_100859ad;
      }
      FUN_100857b2((int)&local_10,local_1c);
      FUN_100857f4(&local_10,iVar2 - iVar4);
      FUN_10085726((int)&local_10,param_3[2]);
      FUN_100857f4(&local_10,param_3[3] + 1);
    }
  }
  iVar4 = 0;
  uVar5 = 2;
LAB_100859af:
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

/* 100859ed  FUN_100859ed  (22 bytes)
 * undefined FUN_100859ed(ushort * param_1, uint * param_2)
 * called by: FUN_1007eef9, FUN_10085a19
 */
void __cdecl FUN_100859ed(ushort *param_1,uint *param_2)

{
  FUN_10085881(param_1,param_2,(int *)&DAT_100a8bf0);
  return;
}

/* 10085a03  FUN_10085a03  (22 bytes)
 * undefined FUN_10085a03(ushort * param_1, uint * param_2)
 * called by: FUN_10085a46
 */
void __cdecl FUN_10085a03(ushort *param_1,uint *param_2)

{
  FUN_10085881(param_1,param_2,(int *)&DAT_100a8c08);
  return;
}

/* 10085a19  FUN_10085a19  (45 bytes)
 * undefined FUN_10085a19(uint * param_1, byte.conflict * param_2)
 * called by: __fassign
 */
void __thiscall FUN_10085a19(void *this,uint *param_1,byte_conflict *param_2)

{
  ushort local_10 [6];
  
  FUN_1008602e(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_100859ed(local_10,param_1);
  return;
}

/* 10085a46  FUN_10085a46  (45 bytes)
 * undefined FUN_10085a46(uint * param_1, byte.conflict * param_2)
 * called by: __fassign
 */
void __thiscall FUN_10085a46(void *this,uint *param_1,byte_conflict *param_2)

{
  ushort local_10 [6];
  
  FUN_1008602e(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_10085a03(local_10,param_1);
  return;
}

/* 10085a73  FUN_10085a73  (119 bytes)
 * undefined FUN_10085a73(char * param_1, int param_2, int param_3)
 * called by: FUN_1007ebd1, FUN_1007ecf4, FUN_1007edf0
 */
void __cdecl FUN_10085a73(char *param_1,int param_2,int param_3)

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
    FUN_10085cf0((undefined4 *)pcVar1,(undefined4 *)_Str,sVar3 + 1);
  }
  return;
}

/* 10085aea  FUN_10085aea  (92 bytes)
 * int * FUN_10085aea(undefined4 param_1, undefined4 param_2, int * param_3, uint * param_4)
 * called by: FUN_1007ebd1, FUN_1007ecf4, FUN_1007edf0
 */
int * __cdecl FUN_10085aea(undefined4 param_1,undefined4 param_2,int *param_3,uint *param_4)

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
  FUN_10085b46(&local_10,&param_1);
  iVar3 = FUN_10087ceb(local_10,uStack_c,CONCAT22(uVar4,uStack_8),0x11,'\0',&local_2c);
  puVar2 = param_4;
  piVar1 = param_3;
  param_3[2] = iVar3;
  *param_3 = (int)local_2a;
  param_3[1] = (int)local_2c;
  FUN_10085c00(param_4,local_28);
  piVar1[3] = (int)puVar2;
  return piVar1;
}

/* 10085b46  FUN_10085b46  (182 bytes)
 * undefined FUN_10085b46(uint * param_1, uint * param_2)
 * called by: FUN_10085aea
 */
void __cdecl FUN_10085b46(uint *param_1,uint *param_2)

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

/* 10085c00  FUN_10085c00  (7 bytes)
 * uint * FUN_10085c00(uint * param_1, uint * param_2)
 * called by: FUN_1007ec32, FUN_10084e23, FUN_10085294, FUN_10085aea, FUN_10087ceb, FUN_10088b16
 */
uint * __cdecl FUN_10085c00(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_10085ce8;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10085ce8:
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

/* 10085c10  FUN_10085c10  (224 bytes)
 * uint * FUN_10085c10(uint * param_1, uint * param_2)
 * called by: FUN_10085294
 */
uint * __cdecl FUN_10085c10(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_10085c2c;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_10085c5f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x10085c7b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_10085c2c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x10085c7b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x10085c7b;
    }
  }
LAB_10085c5f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x10085c7b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10085ce8:
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
    if (bVar1 == 0) goto LAB_10085ce8;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}

/* 10085cf0  FUN_10085cf0  (664 bytes)
 * undefined4 * FUN_10085cf0(undefined4 * param_1, undefined4 * param_2, uint param_3)
 * called by: FUN_1007eed4, FUN_1007f5fd, FUN_1008413d, FUN_10085a73
 */
undefined4 * __cdecl FUN_10085cf0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10085ea7_caseD_2;
        case 3:
          goto switchD_10085ea7_caseD_3;
        }
        goto switchD_10085ea7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10085ea7_caseD_0;
      case 1:
        goto switchD_10085ea7_caseD_1;
      case 2:
        goto switchD_10085ea7_caseD_2;
      case 3:
        goto switchD_10085ea7_caseD_3;
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
              goto switchD_10085ea7_caseD_2;
            case 3:
              goto switchD_10085ea7_caseD_3;
            }
            goto switchD_10085ea7_caseD_1;
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
              goto switchD_10085ea7_caseD_2;
            case 3:
              goto switchD_10085ea7_caseD_3;
            }
            goto switchD_10085ea7_caseD_1;
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
              goto switchD_10085ea7_caseD_2;
            case 3:
              goto switchD_10085ea7_caseD_3;
            }
            goto switchD_10085ea7_caseD_1;
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
switchD_10085ea7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10085ea7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10085ea7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10085ea7_caseD_0:
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
        goto switchD_10085d25_caseD_2;
      case 3:
        goto switchD_10085d25_caseD_3;
      }
      goto switchD_10085d25_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10085d25_caseD_0;
    case 1:
      goto switchD_10085d25_caseD_1;
    case 2:
      goto switchD_10085d25_caseD_2;
    case 3:
      goto switchD_10085d25_caseD_3;
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
            goto switchD_10085d25_caseD_2;
          case 3:
            goto switchD_10085d25_caseD_3;
          }
          goto switchD_10085d25_caseD_1;
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
            goto switchD_10085d25_caseD_2;
          case 3:
            goto switchD_10085d25_caseD_3;
          }
          goto switchD_10085d25_caseD_1;
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
            goto switchD_10085d25_caseD_2;
          case 3:
            goto switchD_10085d25_caseD_3;
          }
          goto switchD_10085d25_caseD_1;
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
switchD_10085d25_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10085d25_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10085d25_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10085d25_caseD_0:
  return param_1;
}

/* 1008602e  FUN_1008602e  (1185 bytes)
 * undefined4 FUN_1008602e(ushort * param_1, int * param_2, byte.conflict * param_3, int param_4, int param_5, int param_6, int param_7)
 * called by: FUN_1007eef9, FUN_10085a19, FUN_10085a46
 */
undefined4 __thiscall
FUN_1008602e(void *this,ushort *param_1,int *param_2,byte_conflict *param_3,int param_4,int param_5,
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
LAB_10086085:
  local_14 = iVar5;
  pbVar7 = pbVar8;
  iVar5 = 1;
  bVar6 = *pbVar7;
  pbVar8 = pbVar7 + 1;
  iVar2 = local_14;
  switch(iVar9) {
  case 0:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) {
LAB_100860a2:
      local_14 = iVar2;
      iVar9 = 3;
      goto LAB_100862c7;
    }
    if (bVar6 == DAT_100a8328) goto LAB_100860b1;
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
      if (bVar6 != 0x30) goto LAB_100863a1;
    }
    goto LAB_10086085;
  case 1:
    local_14 = 1;
    if (('0' < (char)bVar6) && (iVar2 = iVar5, (char)bVar6 < ':')) goto LAB_100860a2;
    iVar9 = iVar1;
    if (bVar6 != DAT_100a8328) {
      iVar9 = iVar5;
      if ((bVar6 == 0x2b) || (iVar9 = local_14, bVar6 == 0x2d)) goto LAB_10086136;
      iVar9 = iVar5;
      local_14 = iVar5;
      if (bVar6 != 0x30) goto LAB_1008610f;
    }
    goto LAB_10086085;
  case 2:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) goto LAB_100860a2;
    if (bVar6 == DAT_100a8328) {
LAB_100860b1:
      iVar9 = 5;
      iVar5 = local_14;
    }
    else {
      iVar9 = iVar5;
      pbVar7 = param_3;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_100863a6;
    }
    goto LAB_10086085;
  case 3:
    local_14 = iVar5;
    while( true ) {
      if (DAT_100a8324 < 2) {
        uVar3 = (byte)PTR_DAT_100a8118[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_100a8118;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_1007e1c6(this,(uint)bVar6,4);
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
    if (bVar6 != DAT_100a8328) goto LAB_10086223;
    goto LAB_10086085;
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
      if (DAT_100a8324 < 2) {
        uVar3 = (byte)PTR_DAT_100a8118[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_100a8118;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_1007e1c6(this,(uint)bVar6,4);
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
LAB_10086223:
    iVar9 = local_14;
    if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) {
LAB_10086136:
      local_14 = iVar9;
      iVar9 = 0xb;
      pbVar8 = pbVar8 + -1;
      iVar5 = local_14;
    }
    else {
LAB_1008610f:
      if (((char)bVar6 < 'D') ||
         (('E' < (char)bVar6 && (((char)bVar6 < 'd' || ('e' < (char)bVar6)))))) goto LAB_100863a1;
      iVar9 = 6;
      iVar5 = local_14;
    }
    goto LAB_10086085;
  case 5:
    local_28 = iVar5;
    if (DAT_100a8324 < 2) {
      uVar3 = (byte)PTR_DAT_100a8118[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_100a8118;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_1007e1c6(this,(uint)bVar6,4);
      this = pbVar7;
    }
    iVar9 = iVar1;
    pbVar7 = param_3;
    if (uVar3 != 0) goto LAB_100862c7;
    goto LAB_100863a6;
  case 6:
    pbVar7 = pbVar7 + -1;
    this = pbVar7;
    param_3 = pbVar7;
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      if (bVar6 == 0x2b) goto LAB_100862fc;
      if (bVar6 == 0x2d) goto LAB_100862f0;
      if (bVar6 != 0x30) goto LAB_100863a6;
LAB_10086295:
      iVar9 = 8;
      iVar5 = local_14;
      goto LAB_10086085;
    }
    break;
  case 7:
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      pbVar7 = param_3;
      if (bVar6 == 0x30) goto LAB_10086295;
      goto LAB_100863a6;
    }
    break;
  case 8:
    local_24 = 1;
    while (bVar6 == 0x30) {
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) goto LAB_100863a1;
    break;
  case 9:
    local_24 = 1;
    pbVar7 = (byte *)0x0;
    goto LAB_10086327;
  default:
    goto switchD_10086091_caseD_a;
  case 0xb:
    if (param_7 != 0) {
      if (bVar6 == 0x2b) {
LAB_100862fc:
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      else {
        param_3 = pbVar7;
        if (bVar6 != 0x2d) goto LAB_100863a6;
LAB_100862f0:
        local_1c = -1;
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      goto LAB_10086085;
    }
    iVar9 = 10;
    pbVar8 = pbVar7;
switchD_10086091_caseD_a:
    pbVar7 = pbVar8;
    iVar5 = local_14;
    if (iVar9 != 10) goto LAB_10086085;
    goto LAB_100863a6;
  }
  iVar9 = 9;
LAB_100862c7:
  pbVar8 = pbVar8 + -1;
  iVar5 = local_14;
  goto LAB_10086085;
LAB_10086327:
  if (DAT_100a8324 < 2) {
    uVar3 = (byte)PTR_DAT_100a8118[(uint)bVar6 * 2] & 4;
    this = PTR_DAT_100a8118;
  }
  else {
    pbVar10 = (byte *)0x4;
    uVar3 = FUN_1007e1c6(this,(uint)bVar6,4);
    this = pbVar10;
  }
  if (uVar3 == 0) goto LAB_10086371;
  this = (void *)(int)(char)bVar6;
  pbVar7 = (byte *)((int)this + (int)pbVar7 * 10 + -0x30);
  if (0x1450 < (int)pbVar7) goto LAB_10086369;
  bVar6 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  goto LAB_10086327;
LAB_10086369:
  pbVar7 = (byte *)0x1451;
LAB_10086371:
  while( true ) {
    local_20 = pbVar7;
    if (DAT_100a8324 < 2) {
      uVar3 = (byte)PTR_DAT_100a8118[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_100a8118;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_1007e1c6(this,(uint)bVar6,4);
      this = pbVar7;
    }
    if (uVar3 == 0) break;
    bVar6 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar7 = local_20;
  }
LAB_100863a1:
  pbVar7 = pbVar8 + -1;
LAB_100863a6:
  *param_2 = (int)pbVar7;
  if (local_14 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte_conflict *)0x0;
    param_3 = (byte_conflict *)0x0;
    local_18 = 4;
    goto LAB_100864b4;
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
    FUN_10087c24(local_60,local_8,(uint *)&local_44);
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
        FUN_1008819e((int *)&local_44,(uint)pbVar8,param_4);
        param_3 = (byte_conflict *)CONCAT22(uStack_40,uStack_42);
        goto LAB_10086439;
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
LAB_10086439:
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
LAB_100864b4:
  *(byte_conflict **)(param_1 + 3) = local_3e;
  *(byte_conflict **)(param_1 + 1) = param_3;
  param_1[5] = local_3a | (ushort)local_2c;
  *param_1 = local_44;
  return local_18;
}

/* 100864ff  FUN_100864ff  (70 bytes)
 * int FUN_100864ff(int * param_1)
 */
int FUN_100864ff(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    iVar3 = FUN_1007fa28();
    return iVar3;
  }
  if ((DAT_102efe14 != (FARPROC)0x0) &&
     (bVar2 = FUN_1008659b(DAT_102efe14), CONCAT31(extraout_var,bVar2) != 0)) {
    iVar3 = (*DAT_102efe14)(param_1);
    return iVar3;
  }
  return 0;
}

/* 10086545  FUN_10086545  (17 bytes)
 * undefined FUN_10086545()
 */
void FUN_10086545(void)

{
  DAT_102efe14 = SetUnhandledExceptionFilter(FUN_100864ff);
  return;
}

/* 10086556  FUN_10086556  (13 bytes)
 * undefined FUN_10086556()
 */
void FUN_10086556(void)

{
  SetUnhandledExceptionFilter(DAT_102efe14);
  return;
}

/* 10086563  FUN_10086563  (28 bytes)
 * bool FUN_10086563(void * param_1, UINT_PTR param_2)
 * called by: FUN_1007f0cf, FUN_1007f5fd
 */
bool __cdecl FUN_10086563(void *param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadReadPtr(param_1,param_2);
  return BVar1 == 0;
}

/* 1008657f  FUN_1008657f  (28 bytes)
 * bool FUN_1008657f(LPVOID param_1, UINT_PTR param_2)
 * called by: FUN_1007f5fd
 */
bool __cdecl FUN_1008657f(LPVOID param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_1,param_2);
  return BVar1 == 0;
}

/* 1008659b  FUN_1008659b  (24 bytes)
 * bool FUN_1008659b(FARPROC param_1)
 * called by: FUN_1007f5fd, FUN_100864ff
 */
bool __cdecl FUN_1008659b(FARPROC param_1)

{
  BOOL BVar1;
  
  BVar1 = IsBadCodePtr(param_1);
  return BVar1 == 0;
}

/* 1008664c  FUN_1008664c  (189 bytes)
 * undefined FUN_1008664c()
 */
undefined4 FUN_1008664c(int param_1,PVOID param_2,undefined4 param_3)

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
          FUN_1007d7e2();
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

/* 10086709  FUN_10086709  (27 bytes)
 * undefined FUN_10086709(int param_1)
 */
void FUN_10086709(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}

/* 10086724  FUN_10086724  (23 bytes)
 * undefined FUN_10086724(void)
 * called by: FUN_1007fa28
 */
void FUN_10086724(void)

{
  FUN_10085294(10);
  FUN_1008798b((DWORD *)0x16);
                    /* WARNING: Subroutine does not return */
  __exit(3);
}

