/* client.dll - unnamed_100bf5e0 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100bf5e0  FUN_100bf5e0  (19 bytes)
 * undefined FUN_100bf5e0(int param_1)
 */
void __cdecl FUN_100bf5e0(int param_1)

{
  FUN_100bf600(param_1,1);
  return;
}

/* 100bf600  FUN_100bf600  (369 bytes)
 * undefined FUN_100bf600(int param_1, int param_2)
 * called by: FUN_100bc3d0, FUN_100bf5e0
 */
void FUN_100bf600(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_102791f8;
  pcStack_10 = FUN_100c9368;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if ((((DAT_1028b3e4 & 4) != 0) &&
      (ExceptionList = &pvStack_14, iVar2 = FUN_100bf940(), iVar2 == 0)) &&
     (iVar2 = FUN_100c32e0(2,0x10278f08,0x49d,0,(byte_conflict *)"_CrtCheckMemory()"), iVar2 == 1))
  {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_100c4260(9);
  local_8 = 0;
  BVar3 = FUN_100bfe20(param_1);
  if ((BVar3 == 0) &&
     (iVar2 = FUN_100c32e0(2,0x10278f08,0x4a9,0,(byte_conflict *)"_CrtIsValidHeapPointer(pUserData)"
                          ), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((((*(uint *)(param_1 + -0xc) & 0xffff) != 4) && (*(int *)(param_1 + -0xc) != 1)) &&
     (((*(uint *)(param_1 + -0xc) & 0xffff) != 2 &&
      ((*(int *)(param_1 + -0xc) != 3 &&
       (iVar2 = FUN_100c32e0(2,0x10278f08,0x4af,0,
                             (byte_conflict *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"), iVar2 == 1)
       ))))) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((*(int *)(param_1 + -0xc) == 2) && (param_2 == 1)) {
    param_2 = 2;
  }
  if (((*(int *)(param_1 + -0xc) != 3) && (*(int *)(param_1 + -0xc) != param_2)) &&
     (iVar2 = FUN_100c32e0(2,0x10278f08,0x4b6,0,(byte_conflict *)"pHead->nBlockUse == nBlockUse"),
     iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_8 = 0xffffffff;
  FUN_100bf771();
  FUN_100bf77c();
  return;
}

/* 100bf771  FUN_100bf771  (11 bytes)
 * undefined FUN_100bf771(void)
 * called by: FUN_100bf600
 */
void FUN_100bf771(void)

{
  FUN_100c4300(9);
  return;
}

/* 100bf77c  FUN_100bf77c  (20 bytes)
 * undefined4 FUN_100bf77c(void)
 * called by: FUN_100bf600
 */
undefined4 FUN_100bf77c(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return *(undefined4 *)(unaff_EBP + -0x1c);
}

/* 100bf790  FUN_100bf790  (28 bytes)
 * undefined4 FUN_100bf790(undefined4 param_1)
 */
undefined4 __cdecl FUN_100bf790(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_1028b3ec;
  DAT_1028b3ec = param_1;
  return uVar1;
}

/* 100bf7b0  FUN_100bf7b0  (189 bytes)
 * undefined FUN_100bf7b0(int param_1, undefined4 param_2)
 */
void FUN_100bf7b0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10279208;
  pcStack_10 = FUN_100c9368;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_100c4260(9);
  local_8 = 0;
  BVar2 = FUN_100bfe20(param_1);
  if (BVar2 != 0) {
    if (((((*(uint *)(param_1 + -0xc) & 0xffff) != 4) && (*(int *)(param_1 + -0xc) != 1)) &&
        ((*(uint *)(param_1 + -0xc) & 0xffff) != 2)) &&
       ((*(int *)(param_1 + -0xc) != 3 &&
        (iVar3 = FUN_100c32e0(2,0x10278f08,0x4ff,0,
                              (byte_conflict *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"), iVar3 == 1
        )))) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)(param_1 + -0xc) = param_2;
  }
  local_8 = 0xffffffff;
  FUN_100bf86d();
  FUN_100bf878();
  return;
}

/* 100bf86d  FUN_100bf86d  (11 bytes)
 * undefined FUN_100bf86d(void)
 * called by: FUN_100bf7b0
 */
void FUN_100bf86d(void)

{
  FUN_100c4300(9);
  return;
}

/* 100bf878  FUN_100bf878  (17 bytes)
 * undefined FUN_100bf878(void)
 * called by: FUN_100bf7b0
 */
void FUN_100bf878(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return;
}

/* 100bf890  FUN_100bf890  (28 bytes)
 * undefined * FUN_100bf890(undefined * param_1)
 */
undefined * __cdecl FUN_100bf890(undefined *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_FUN_1028bd20;
  PTR_FUN_1028bd20 = param_1;
  return puVar1;
}

/* 100bf8b0  FUN_100bf8b0  (136 bytes)
 * undefined4 FUN_100bf8b0(char * param_1, char param_2, int param_3)
 * called by: FUN_100bf1f0, FUN_100bf940
 */
undefined4 __cdecl FUN_100bf8b0(char *param_1,char param_2,int param_3)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_8;
  
  local_8 = 1;
  while( true ) {
    do {
      iVar4 = param_3 + -1;
      if (param_3 == 0) {
        return local_8;
      }
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      param_3 = iVar4;
    } while (cVar1 == param_2);
    iVar4 = FUN_100c32e0(0,0,0,0,(byte_conflict *)
                                 "memory check error at 0x%08X = 0x%02X, should be 0x%02X.\n");
    if (iVar4 == 1) break;
    local_8 = 0;
  }
  pcVar2 = (code *)swi(3);
  uVar3 = (*pcVar2)();
  return uVar3;
}

/* 100bf940  FUN_100bf940  (885 bytes)
 * undefined4 FUN_100bf940(void)
 * called by: FUN_100be6f0, FUN_100beb60, FUN_100bf1f0, FUN_100bf600
 */
undefined4 FUN_100bf940(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *local_24;
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10279390;
  pcStack_10 = FUN_100c9368;
  pvStack_14 = ExceptionList;
  if ((DAT_1028b3e4 & 1) == 0) {
    return 1;
  }
  ExceptionList = &pvStack_14;
  FUN_100c4260(9);
  local_8 = 0;
  iVar3 = __heapchk();
  if ((iVar3 == -1) || (iVar3 == -2)) {
    for (local_24 = DAT_10321c88; local_24 != (undefined4 *)0x0; local_24 = (undefined4 *)*local_24)
    {
      bVar2 = true;
      iVar3 = FUN_100bf8b0((char *)(local_24 + 7),DAT_1028b3f0,4);
      if (iVar3 == 0) {
        iVar3 = FUN_100c32e0(0,0,0,0,(byte_conflict *)"DAMAGE: before %hs block (#%d) at 0x%08X.\n")
        ;
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        bVar2 = false;
      }
      iVar3 = FUN_100bf8b0((char *)((int)local_24 + local_24[4] + 0x20),DAT_1028b3f0,4);
      if (iVar3 == 0) {
        iVar3 = FUN_100c32e0(0,0,0,0,(byte_conflict *)"DAMAGE: after %hs block (#%d) at 0x%08X.\n");
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        bVar2 = false;
      }
      if ((local_24[5] == 0) &&
         (iVar3 = FUN_100bf8b0((char *)(local_24 + 8),DAT_1028b3f1,local_24[4]), iVar3 == 0)) {
        iVar3 = FUN_100c32e0(0,0,0,0,(byte_conflict *)"DAMAGE: on top of Free block at 0x%08X.\n");
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        bVar2 = false;
      }
      if (!bVar2) {
        if ((local_24[2] != 0) &&
           (iVar3 = FUN_100c32e0(0,0,0,0,(byte_conflict *)"%hs allocated at file %hs(%d).\n"),
           iVar3 == 1)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        iVar3 = FUN_100c32e0(0,0,0,0,(byte_conflict *)"%hs located at 0x%08X is %u bytes long.\n");
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
      }
    }
  }
  else {
    switch(iVar3) {
    case -6:
      iVar3 = FUN_100c32e0(0,0,0,0,"%s");
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      break;
    case -5:
      iVar3 = FUN_100c32e0(0,0,0,0,"%s");
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      break;
    case -4:
      iVar3 = FUN_100c32e0(0,0,0,0,"%s");
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      break;
    case -3:
      iVar3 = FUN_100c32e0(0,0,0,0,"%s");
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      break;
    default:
      iVar3 = FUN_100c32e0(0,0,0,0,"%s");
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
    }
  }
  local_8 = 0xffffffff;
  FUN_100bfcb5();
  uVar4 = FUN_100bfcc0();
  return uVar4;
}

/* 100bfcb5  FUN_100bfcb5  (11 bytes)
 * undefined FUN_100bfcb5(void)
 * called by: FUN_100bf940
 */
void FUN_100bfcb5(void)

{
  FUN_100c4300(9);
  return;
}

/* 100bfcc0  FUN_100bfcc0  (20 bytes)
 * undefined4 FUN_100bfcc0(void)
 * called by: FUN_100bf940
 */
undefined4 FUN_100bfcc0(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return *(undefined4 *)(unaff_EBP + -0x1c);
}

/* 100bfcf0  FUN_100bfcf0  (34 bytes)
 * int FUN_100bfcf0(int param_1)
 * called by: FUN_100bbce0, FUN_100c1e30
 */
int __cdecl FUN_100bfcf0(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_1028b3e4;
  if (param_1 != -1) {
    DAT_1028b3e4 = param_1;
  }
  return iVar1;
}

/* 100bfd20  FUN_100bfd20  (141 bytes)
 * undefined FUN_100bfd20(undefined * param_1, undefined4 param_2)
 */
void FUN_100bfd20(undefined *param_1,undefined4 param_2)

{
  undefined4 *local_20;
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_102793a0;
  pcStack_10 = FUN_100c9368;
  pvStack_14 = ExceptionList;
  if ((DAT_1028b3e4 & 1) == 0) {
    ExceptionList = &pvStack_14;
    FUN_100bfdb8();
    return;
  }
  ExceptionList = &pvStack_14;
  FUN_100c4260(9);
  local_8 = 0;
  for (local_20 = DAT_10321c88; local_20 != (undefined4 *)0x0; local_20 = (undefined4 *)*local_20) {
    if ((local_20[5] & 0xffff) == 4) {
      (*(code *)param_1)(local_20 + 8,param_2);
    }
  }
  local_8 = 0xffffffff;
  FUN_100bfdad();
  FUN_100bfdb8();
  return;
}

/* 100bfdad  FUN_100bfdad  (11 bytes)
 * undefined FUN_100bfdad(void)
 * called by: FUN_100bfd20
 */
void FUN_100bfdad(void)

{
  FUN_100c4300(9);
  return;
}

/* 100bfdb8  FUN_100bfdb8  (17 bytes)
 * undefined FUN_100bfdb8(void)
 * called by: FUN_100bfd20
 */
void FUN_100bfdb8(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return;
}

/* 100bfe20  FUN_100bfe20  (292 bytes)
 * BOOL FUN_100bfe20(int param_1)
 * called by: FUN_100beb60, FUN_100bf1f0, FUN_100bf600, FUN_100bf7b0, __CrtIsMemoryBlock
 */
BOOL __cdecl FUN_100bfe20(int param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_14;
  char *local_10;
  uint local_c;
  uint local_8;
  
  if (param_1 == 0) {
    BVar1 = 0;
  }
  else {
    iVar2 = __CrtIsValidPointer((void *)(param_1 + -0x20),0x20,1);
    if (iVar2 == 0) {
      BVar1 = 0;
    }
    else if (DAT_103222cc == 3) {
      local_8 = FUN_100c9fa0(param_1 + -0x20);
      if (local_8 == 0) {
        if ((DAT_10321c20 & 0x8000) == 0) {
          BVar1 = HeapValidate(DAT_103222bc,0,(LPCVOID)(param_1 + -0x20));
        }
        else {
          BVar1 = 1;
        }
      }
      else {
        BVar1 = FUN_100ca000(local_8,param_1 + -0x20);
      }
    }
    else if (DAT_103222cc == 2) {
      local_10 = (char *)FUN_100cbfc0((undefined *)(param_1 + -0x20),&local_14,&local_c);
      if (local_10 == (char *)0x0) {
        if ((DAT_10321c20 & 0x8000) == 0) {
          BVar1 = HeapValidate(DAT_103222bc,0,(LPCVOID)(param_1 + -0x20));
        }
        else {
          BVar1 = 1;
        }
      }
      else if (*local_10 == '\0') {
        BVar1 = 0;
      }
      else {
        BVar1 = 1;
      }
    }
    else {
      BVar1 = HeapValidate(DAT_103222bc,0,(LPCVOID)(param_1 + -0x20));
    }
  }
  return BVar1;
}

/* 100c0056  FUN_100c0056  (11 bytes)
 * undefined FUN_100c0056(void)
 * called by: __CrtIsMemoryBlock
 */
void FUN_100c0056(void)

{
  FUN_100c4300(9);
  return;
}

/* 100c0061  FUN_100c0061  (20 bytes)
 * undefined4 FUN_100c0061(void)
 * called by: __CrtIsMemoryBlock
 */
undefined4 FUN_100c0061(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return *(undefined4 *)(unaff_EBP + -0x20);
}

/* 100c0080  FUN_100c0080  (28 bytes)
 * undefined4 FUN_100c0080(undefined4 param_1)
 */
undefined4 __cdecl FUN_100c0080(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_103237a4;
  DAT_103237a4 = param_1;
  return uVar1;
}

/* 100c00a0  FUN_100c00a0  (392 bytes)
 * undefined FUN_100c00a0(undefined4 * param_1)
 * called by: FUN_100c07a0
 */
void FUN_100c00a0(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *local_24;
  int local_20;
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10279408;
  pcStack_10 = FUN_100c9368;
  pvStack_14 = ExceptionList;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &pvStack_14;
    FUN_100c4260(9);
    local_8 = 0;
    *param_1 = DAT_10321c88;
    for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
      param_1[local_20 + 6] = 0;
      param_1[local_20 + 1] = 0;
    }
    local_24 = DAT_10321c88;
    do {
      if (local_24 == (undefined4 *)0x0) {
        param_1[0xb] = DAT_10321c90;
        param_1[0xc] = DAT_10321c84;
        local_8 = 0xffffffff;
        FUN_100c0228();
        FUN_100c0233();
        return;
      }
      if ((local_24[5] & 0xffff) < 5) {
        param_1[(local_24[5] & 0xffff) + 1] = param_1[(local_24[5] & 0xffff) + 1] + 1;
        param_1[(local_24[5] & 0xffff) + 6] = param_1[(local_24[5] & 0xffff) + 6] + local_24[4];
      }
      else {
        iVar2 = FUN_100c32e0(0,0,0,0,(byte_conflict *)"Bad memory block found at 0x%08X.\n");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      local_24 = (undefined4 *)*local_24;
    } while( true );
  }
  ExceptionList = &pvStack_14;
  iVar2 = FUN_100c32e0(0,0,0,0,"%s");
  if (iVar2 == 1) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_100c0233();
  return;
}

/* 100c0228  FUN_100c0228  (11 bytes)
 * undefined FUN_100c0228(void)
 * called by: FUN_100c00a0
 */
void FUN_100c0228(void)

{
  FUN_100c4300(9);
  return;
}

/* 100c0233  FUN_100c0233  (17 bytes)
 * undefined FUN_100c0233(void)
 * called by: FUN_100c00a0
 */
void FUN_100c0233(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return;
}

/* 100c0250  FUN_100c0250  (291 bytes)
 * undefined4 FUN_100c0250(undefined4 * param_1, int param_2, int param_3)
 */
undefined4 __cdecl FUN_100c0250(undefined4 *param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_c;
  int local_8;
  
  local_c = 0;
  if (((param_1 == (undefined4 *)0x0) || (param_2 == 0)) || (param_3 == 0)) {
    iVar2 = FUN_100c32e0(0,0,0,0,"%s");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    local_c = 0;
  }
  else {
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      param_1[local_8 + 6] =
           *(int *)(param_3 + 0x18 + local_8 * 4) - *(int *)(param_2 + 0x18 + local_8 * 4);
      param_1[local_8 + 1] =
           *(int *)(param_3 + 4 + local_8 * 4) - *(int *)(param_2 + 4 + local_8 * 4);
      if (((param_1[local_8 + 6] != 0) || (param_1[local_8 + 1] != 0)) &&
         ((local_8 != 0 && ((local_8 != 2 || ((DAT_1028b3e4 & 0x10) != 0)))))) {
        local_c = 1;
      }
    }
    param_1[0xb] = *(int *)(param_3 + 0x2c) - *(int *)(param_2 + 0x2c);
    param_1[0xc] = *(int *)(param_3 + 0x30) - *(int *)(param_2 + 0x30);
    *param_1 = 0;
  }
  return local_c;
}

/* 100c0380  FUN_100c0380  (689 bytes)
 * undefined FUN_100c0380(undefined4 * param_1)
 * called by: FUN_100c07a0
 */
void FUN_100c0380(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *local_24;
  undefined4 *local_20;
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10279520;
  pcStack_10 = FUN_100c9368;
  pvStack_14 = ExceptionList;
  local_24 = (undefined4 *)0x0;
  ExceptionList = &pvStack_14;
  FUN_100c4260(9);
  local_8 = 0;
  iVar2 = FUN_100c32e0(0,0,0,0,"%s");
  if (iVar2 == 1) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 != (undefined4 *)0x0) {
    local_24 = (undefined4 *)*param_1;
  }
  local_20 = DAT_10321c88;
  do {
    if ((local_20 == (undefined4 *)0x0) || (local_20 == local_24)) {
      local_8 = 0xffffffff;
      FUN_100c0631();
      FUN_100c063c();
      return;
    }
    if ((((local_20[5] & 0xffff) != 3) && ((local_20[5] & 0xffff) != 0)) &&
       (((local_20[5] & 0xffff) != 2 || ((DAT_1028b3e4 & 0x10) != 0)))) {
      if (local_20[2] != 0) {
        iVar2 = __CrtIsValidPointer((void *)local_20[2],1,0);
        if (iVar2 == 0) {
          iVar2 = FUN_100c32e0(0,0,0,0,(byte_conflict *)"#File Error#(%d) : ");
          if (iVar2 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        else {
          iVar2 = FUN_100c32e0(0,0,0,0,(byte_conflict *)"%hs(%d) : ");
          if (iVar2 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
      }
      iVar2 = FUN_100c32e0(0,0,0,0,(byte_conflict *)"{%ld} ");
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((local_20[5] & 0xffff) == 4) {
        iVar2 = FUN_100c32e0(0,0,0,0,(byte_conflict *)
                                     "client block at 0x%08X, subtype %x, %u bytes long.\n");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (DAT_103237a4 == (code *)0x0) {
          FUN_100c0680((int)local_20);
        }
        else {
          (*DAT_103237a4)(local_20 + 8,local_20[4]);
        }
      }
      else if (local_20[5] == 1) {
        iVar2 = FUN_100c32e0(0,0,0,0,(byte_conflict *)"normal block at 0x%08X, %u bytes long.\n");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FUN_100c0680((int)local_20);
      }
      else if ((local_20[5] & 0xffff) == 2) {
        iVar2 = FUN_100c32e0(0,0,0,0,(byte_conflict *)
                                     "crt block at 0x%08X, subtype %x, %u bytes long.\n");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FUN_100c0680((int)local_20);
      }
    }
    local_20 = (undefined4 *)*local_20;
  } while( true );
}

/* 100c0631  FUN_100c0631  (11 bytes)
 * undefined FUN_100c0631(void)
 * called by: FUN_100c0380
 */
void FUN_100c0631(void)

{
  FUN_100c4300(9);
  return;
}

/* 100c063c  FUN_100c063c  (55 bytes)
 * undefined FUN_100c063c(void)
 * called by: FUN_100c0380
 */
void FUN_100c063c(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = FUN_100c32e0(0,0,0,0,"%s");
  if (iVar2 != 1) {
    ExceptionList = *(void **)(unaff_EBP + -0x10);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

/* 100c0680  FUN_100c0680  (276 bytes)
 * undefined FUN_100c0680(int param_1)
 * called by: FUN_100c0380
 */
void __cdecl FUN_100c0680(int param_1)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  uint local_5c;
  int local_58;
  int local_50;
  byte local_4c [20];
  undefined1 local_38 [52];
  
  local_50 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x10) < 0x10) {
      local_58 = *(int *)(param_1 + 0x10);
    }
    else {
      local_58 = 0x10;
    }
    if (local_58 <= local_50) break;
    bVar1 = *(byte *)(param_1 + local_50 + 0x20);
    if (DAT_1028b63c < 2) {
      local_5c = *(ushort *)(PTR_DAT_1028b430 + (uint)bVar1 * 2) & 0x157;
    }
    else {
      local_5c = FUN_100c1760((uint)bVar1,0x157);
    }
    if (local_5c == 0) {
      bVar1 = 0x20;
    }
    local_4c[local_50] = bVar1;
    FUN_100bb6e0(local_38 + local_50 * 3,(byte_conflict *)"%.2X ");
    local_50 = local_50 + 1;
  }
  local_4c[local_50] = 0;
  iVar3 = FUN_100c32e0(0,0,0,0,(byte_conflict *)" Data: <%s> %s\n");
  if (iVar3 == 1) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

/* 100c07a0  FUN_100c07a0  (116 bytes)
 * undefined4 FUN_100c07a0(void)
 * called by: FUN_100bbce0, FUN_100c1e30
 */
undefined4 FUN_100c07a0(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_38 [2];
  int local_30;
  int local_2c;
  int local_24;
  
  FUN_100c00a0(local_38);
  if (((local_24 == 0) && (local_30 == 0)) && (((DAT_1028b3e4 & 0x10) == 0 || (local_2c == 0)))) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_100c32e0(0,0,0,0,"%s");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    FUN_100c0380((undefined4 *)0x0);
    uVar3 = 1;
  }
  return uVar3;
}

/* 100c0820  FUN_100c0820  (197 bytes)
 * undefined FUN_100c0820(int param_1)
 */
void __cdecl FUN_100c0820(int param_1)

{
  code *pcVar1;
  int iVar2;
  int local_8;
  
  if (param_1 != 0) {
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      iVar2 = FUN_100c32e0(0,0,0,0,(byte_conflict *)"%ld bytes in %ld %hs Blocks.\n");
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar2 = FUN_100c32e0(0,0,0,0,(byte_conflict *)"Largest number used: %ld bytes.\n");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar2 = FUN_100c32e0(0,0,0,0,(byte_conflict *)"Total allocations: %ld bytes.\n");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

/* 100c0930  FUN_100c0930  (564 bytes)
 * undefined FUN_100c0930(undefined1 * param_1, uint param_2, uint param_3, undefined * param_4)
 * called by: FUN_10048fa0
 */
void __cdecl FUN_100c0930(undefined1 *param_1,uint param_2,uint param_3,undefined *param_4)

{
  int iVar1;
  undefined1 *local_110;
  int aiStack_10c [30];
  undefined1 *local_94;
  undefined4 auStack_90 [30];
  undefined1 *local_18;
  int local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  if ((param_2 < 2) || (param_3 == 0)) {
    return;
  }
  local_14 = 0;
  local_10 = param_1;
  local_110 = param_1 + param_3 * (param_2 - 1);
LAB_100c096e:
  local_8 = (uint)((int)local_110 - (int)local_10) / param_3 + 1;
  if (8 < local_8) {
    local_c = local_10 + (local_8 >> 1) * param_3;
    swap(local_c,local_10,param_3);
    local_18 = local_10;
    local_94 = local_110 + param_3;
LAB_100c09e2:
    local_18 = local_18 + param_3;
    if (local_18 <= local_110) goto code_r0x100c09f6;
    goto LAB_100c0a08;
  }
  shortsort(local_10,local_110,param_3,param_4);
  goto LAB_100c0b2f;
code_r0x100c09f6:
  iVar1 = (*(code *)param_4)(local_18,local_10);
  if (iVar1 < 1) goto LAB_100c09e2;
LAB_100c0a08:
  do {
    local_94 = local_94 + -param_3;
    if (local_94 <= local_10) break;
    iVar1 = (*(code *)param_4)(local_94,local_10);
  } while (-1 < iVar1);
  if (local_18 <= local_94) {
    swap(local_18,local_94,param_3);
    goto LAB_100c09e2;
  }
  swap(local_10,local_94,param_3);
  if ((int)(local_94 + (-1 - (int)local_10)) < (int)local_110 - (int)local_18) {
    if (local_18 < local_110) {
      auStack_90[local_14] = local_18;
      aiStack_10c[local_14] = (int)local_110;
      local_14 = local_14 + 1;
    }
    if (local_10 + param_3 < local_94) {
      local_110 = local_94 + -param_3;
      goto LAB_100c096e;
    }
  }
  else {
    if (local_10 + param_3 < local_94) {
      auStack_90[local_14] = local_10;
      aiStack_10c[local_14] = (int)local_94 - param_3;
      local_14 = local_14 + 1;
    }
    if (local_18 < local_110) {
      local_10 = local_18;
      goto LAB_100c096e;
    }
  }
LAB_100c0b2f:
  local_14 = local_14 + -1;
  if (local_14 < 0) {
    return;
  }
  local_10 = (undefined1 *)auStack_90[local_14];
  local_110 = (undefined1 *)aiStack_10c[local_14];
  goto LAB_100c096e;
}

/* 100c0c30  FUN_100c0c30  (255 bytes)
 * int FUN_100c0c30(byte.conflict * param_1)
 * called by: FUN_100c0d30, FUN_100d46a0, FUN_100d7800
 */
int __cdecl FUN_100c0c30(byte_conflict *param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint local_18;
  uint local_14;
  int local_c;
  uint local_8;
  
  while( true ) {
    if (DAT_1028b63c < 2) {
      local_14 = *(ushort *)(PTR_DAT_1028b430 + (uint)*param_1 * 2) & 8;
    }
    else {
      local_14 = FUN_100c1760((uint)*param_1,8);
    }
    if (local_14 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar2 = (uint)*param_1;
  if ((uVar2 == 0x2d) || (pbVar1 = param_1 + 1, local_8 = uVar2, uVar2 == 0x2b)) {
    local_8 = (uint)param_1[1];
    pbVar1 = param_1 + 2;
  }
  param_1 = pbVar1;
  local_c = 0;
  while( true ) {
    if (DAT_1028b63c < 2) {
      local_18 = *(ushort *)(PTR_DAT_1028b430 + local_8 * 2) & 4;
    }
    else {
      local_18 = FUN_100c1760(local_8,4);
    }
    if (local_18 == 0) break;
    local_c = local_c * 10 + -0x30 + local_8;
    local_8 = (uint)*param_1;
    param_1 = param_1 + 1;
  }
  if (uVar2 == 0x2d) {
    local_c = -local_c;
  }
  return local_c;
}

/* 100c0d30  FUN_100c0d30  (17 bytes)
 * undefined FUN_100c0d30(byte.conflict * param_1)
 * called by: FUN_10049270, FUN_1004a230, FUN_1004ba60, FUN_1004ff80, FUN_10050070, FUN_10050bb0, FUN_1005ed90, FUN_10061590, FUN_1007b780, FUN_10092940, FUN_100a16e0, FUN_100aa190
 */
void __cdecl FUN_100c0d30(byte_conflict *param_1)

{
  FUN_100c0c30(param_1);
  return;
}

/* 100c0d50  FUN_100c0d50  (297 bytes)
 * undefined8 FUN_100c0d50(byte.conflict * param_1)
 */
undefined8 __cdecl FUN_100c0d50(byte_conflict *param_1)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  uint local_1c;
  uint local_18;
  undefined8 local_10;
  uint local_8;
  
  while( true ) {
    if (DAT_1028b63c < 2) {
      local_18 = *(ushort *)(PTR_DAT_1028b430 + (uint)*param_1 * 2) & 8;
    }
    else {
      local_18 = FUN_100c1760((uint)*param_1,8);
    }
    if (local_18 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar2 = (uint)*param_1;
  if ((uVar2 == 0x2d) || (pbVar1 = param_1 + 1, local_8 = uVar2, uVar2 == 0x2b)) {
    local_8 = (uint)param_1[1];
    pbVar1 = param_1 + 2;
  }
  param_1 = pbVar1;
  local_10 = 0;
  while( true ) {
    if (DAT_1028b63c < 2) {
      local_1c = *(ushort *)(PTR_DAT_1028b430 + local_8 * 2) & 4;
    }
    else {
      local_1c = FUN_100c1760(local_8,4);
    }
    if (local_1c == 0) break;
    local_10 = __allmul((uint)local_10,local_10._4_4_,10,0);
    local_10 = local_10 + (int)(local_8 - 0x30);
    local_8 = (uint)*param_1;
    param_1 = param_1 + 1;
  }
  if (uVar2 == 0x2d) {
    bVar3 = (uint)local_10 != 0;
    local_10._0_4_ = -(uint)local_10;
    local_10._4_4_ = -(local_10._4_4_ + (uint)bVar3);
  }
  return CONCAT44(local_10._4_4_,(uint)local_10);
}

/* 100c0e80  FUN_100c0e80  (65 bytes)
 * uint FUN_100c0e80(int param_1)
 */
uint __cdecl FUN_100c0e80(int param_1)

{
  uint local_8;
  
  if (DAT_1028b63c < 2) {
    local_8 = *(ushort *)(PTR_DAT_1028b430 + param_1 * 2) & 0x103;
  }
  else {
    local_8 = FUN_100c1760(param_1,0x103);
  }
  return local_8;
}

/* 100c0ed0  FUN_100c0ed0  (60 bytes)
 * uint FUN_100c0ed0(int param_1)
 */
uint __cdecl FUN_100c0ed0(int param_1)

{
  uint local_8;
  
  if (DAT_1028b63c < 2) {
    local_8 = *(ushort *)(PTR_DAT_1028b430 + param_1 * 2) & 1;
  }
  else {
    local_8 = FUN_100c1760(param_1,1);
  }
  return local_8;
}

/* 100c0f10  FUN_100c0f10  (60 bytes)
 * uint FUN_100c0f10(int param_1)
 */
uint __cdecl FUN_100c0f10(int param_1)

{
  uint local_8;
  
  if (DAT_1028b63c < 2) {
    local_8 = *(ushort *)(PTR_DAT_1028b430 + param_1 * 2) & 2;
  }
  else {
    local_8 = FUN_100c1760(param_1,2);
  }
  return local_8;
}

/* 100c0f50  FUN_100c0f50  (60 bytes)
 * uint FUN_100c0f50(int param_1)
 */
uint __cdecl FUN_100c0f50(int param_1)

{
  uint local_8;
  
  if (DAT_1028b63c < 2) {
    local_8 = *(ushort *)(PTR_DAT_1028b430 + param_1 * 2) & 4;
  }
  else {
    local_8 = FUN_100c1760(param_1,4);
  }
  return local_8;
}

/* 100c0f90  FUN_100c0f90  (65 bytes)
 * uint FUN_100c0f90(int param_1)
 */
uint __cdecl FUN_100c0f90(int param_1)

{
  uint local_8;
  
  if (DAT_1028b63c < 2) {
    local_8 = *(ushort *)(PTR_DAT_1028b430 + param_1 * 2) & 0x80;
  }
  else {
    local_8 = FUN_100c1760(param_1,0x80);
  }
  return local_8;
}

/* 100c0fe0  FUN_100c0fe0  (60 bytes)
 * uint FUN_100c0fe0(int param_1)
 * called by: FUN_100a67b0, FUN_100cf450, __whiteout
 */
uint __cdecl FUN_100c0fe0(int param_1)

{
  uint local_8;
  
  if (DAT_1028b63c < 2) {
    local_8 = *(ushort *)(PTR_DAT_1028b430 + param_1 * 2) & 8;
  }
  else {
    local_8 = FUN_100c1760(param_1,8);
  }
  return local_8;
}

/* 100c1020  FUN_100c1020  (60 bytes)
 * uint FUN_100c1020(int param_1)
 */
uint __cdecl FUN_100c1020(int param_1)

{
  uint local_8;
  
  if (DAT_1028b63c < 2) {
    local_8 = *(ushort *)(PTR_DAT_1028b430 + param_1 * 2) & 0x10;
  }
  else {
    local_8 = FUN_100c1760(param_1,0x10);
  }
  return local_8;
}

/* 100c1060  FUN_100c1060  (65 bytes)
 * uint FUN_100c1060(int param_1)
 * called by: FUN_1004fae0
 */
uint __cdecl FUN_100c1060(int param_1)

{
  uint local_8;
  
  if (DAT_1028b63c < 2) {
    local_8 = *(ushort *)(PTR_DAT_1028b430 + param_1 * 2) & 0x107;
  }
  else {
    local_8 = FUN_100c1760(param_1,0x107);
  }
  return local_8;
}

/* 100c10b0  FUN_100c10b0  (65 bytes)
 * uint FUN_100c10b0(int param_1)
 */
uint __cdecl FUN_100c10b0(int param_1)

{
  uint local_8;
  
  if (DAT_1028b63c < 2) {
    local_8 = *(ushort *)(PTR_DAT_1028b430 + param_1 * 2) & 0x157;
  }
  else {
    local_8 = FUN_100c1760(param_1,0x157);
  }
  return local_8;
}

/* 100c1100  FUN_100c1100  (65 bytes)
 * uint FUN_100c1100(int param_1)
 */
uint __cdecl FUN_100c1100(int param_1)

{
  uint local_8;
  
  if (DAT_1028b63c < 2) {
    local_8 = *(ushort *)(PTR_DAT_1028b430 + param_1 * 2) & 0x117;
  }
  else {
    local_8 = FUN_100c1760(param_1,0x117);
  }
  return local_8;
}

/* 100c1150  FUN_100c1150  (60 bytes)
 * uint FUN_100c1150(int param_1)
 */
uint __cdecl FUN_100c1150(int param_1)

{
  uint local_8;
  
  if (DAT_1028b63c < 2) {
    local_8 = *(ushort *)(PTR_DAT_1028b430 + param_1 * 2) & 0x20;
  }
  else {
    local_8 = FUN_100c1760(param_1,0x20);
  }
  return local_8;
}

/* 100c1190  FUN_100c1190  (16 bytes)
 * bool FUN_100c1190(uint param_1)
 */
bool __cdecl FUN_100c1190(uint param_1)

{
  return param_1 < 0x80;
}

/* 100c11a0  FUN_100c11a0  (11 bytes)
 * uint FUN_100c11a0(uint param_1)
 */
uint __cdecl FUN_100c11a0(uint param_1)

{
  return param_1 & 0x7f;
}

/* 100c11b0  FUN_100c11b0  (95 bytes)
 * undefined4 FUN_100c11b0(int param_1)
 */
undefined4 __cdecl FUN_100c11b0(int param_1)

{
  undefined4 local_c;
  uint local_8;
  
  if (DAT_1028b63c < 2) {
    local_8 = *(ushort *)(PTR_DAT_1028b430 + param_1 * 2) & 0x103;
  }
  else {
    local_8 = FUN_100c1760(param_1,0x103);
  }
  if ((local_8 == 0) && (param_1 != 0x5f)) {
    local_c = 0;
  }
  else {
    local_c = 1;
  }
  return local_c;
}

/* 100c1210  FUN_100c1210  (95 bytes)
 * undefined4 FUN_100c1210(int param_1)
 */
undefined4 __cdecl FUN_100c1210(int param_1)

{
  undefined4 local_c;
  uint local_8;
  
  if (DAT_1028b63c < 2) {
    local_8 = *(ushort *)(PTR_DAT_1028b430 + param_1 * 2) & 0x107;
  }
  else {
    local_8 = FUN_100c1760(param_1,0x107);
  }
  if ((local_8 == 0) && (param_1 != 0x5f)) {
    local_c = 0;
  }
  else {
    local_c = 1;
  }
  return local_c;
}

/* 100c1289  FUN_100c1289  (476 bytes)
 * undefined1[10] FUN_100c1289(undefined4 param_1, int param_2, uint param_3, int param_4, uint param_5)
 * called by: FUN_10052980, FUN_100538d0
 */
/* decompilation failed: 
Low-level Error: Overlapping input varnodes */

/* 100c1465  FUN_100c1465  (40 bytes)
 * undefined FUN_100c1465(void)
 * called by: FUN_100c1289
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c1465(void)

{
  float10 in_ST0;
  
  if (ROUND(in_ST0) == in_ST0) {
    return;
  }
  return;
}

/* 100c1490  FUN_100c1490  (20 bytes)
 * undefined FUN_100c1490(void)
 */
void FUN_100c1490(void)

{
  float10 in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_100c4748(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_100c14ad(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  return;
}

/* 100c14a4  FUN_100c14a4  (9 bytes)
 * uint FUN_100c14a4(int param_1, uint param_2)
 * called by: FUN_10057ba0, FUN_100626c0
 */
uint __thiscall FUN_100c14a4(void *this,int param_1,uint param_2)

{
  uint uVar1;
  uint extraout_EAX;
  undefined1 in_ZF;
  ushort in_FPUControlWord;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar2;
  undefined4 unaff_retaddr;
  
  uVar1 = __fload_withFB(this,(int)&param_1);
  if ((bool)in_ZF) {
    if (((uVar1 & 0xfffff) == 0) && (param_1 == 0)) {
LAB_100c152f:
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_100c46ec();
    }
    if (DAT_10321c14 == 0) {
      __startOneArgErrorHandling(&DAT_1028b420,0xd,in_FPUControlWord,unaff_retaddr,param_1,param_2);
      return extraout_EAX;
    }
  }
  else {
    fVar2 = extraout_ST0;
    if (in_FPUControlWord != 0x27f) {
      uVar1 = FUN_100c46d5();
      fVar2 = extraout_ST0_00;
    }
    if (uVar1 < 0x3ff00000) {
      fpatan(SQRT(((float10)1 - fVar2) * ((float10)1 + fVar2)),fVar2);
    }
    else {
      if ((0x3ff00000 < uVar1) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) goto LAB_100c152f;
      uVar1 = 0;
    }
    if (DAT_10321c14 == 0) {
      uVar1 = __math_exit(&DAT_1028b420,0xd,unaff_retaddr,param_1,param_2);
      return uVar1;
    }
  }
  return uVar1;
}

/* 100c14ad  FUN_100c14ad  (174 bytes)
 * undefined FUN_100c14ad(int param_1, uint param_2)
 * called by: FUN_100c1490
 */
void __cdecl FUN_100c14ad(int param_1,uint param_2)

{
  uint in_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  float10 in_ST0;
  float10 extraout_ST0;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (param_1 != 0)) {
      FUN_100c46ec();
    }
LAB_100c153c:
    if (DAT_10321c14 == 0) {
      __startOneArgErrorHandling(&DAT_1028b420,0xd,in_FPUControlWord,unaff_retaddr,param_1,param_2);
      return;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      in_EAX = FUN_100c46d5();
      in_ST0 = extraout_ST0;
    }
    if (in_EAX < 0x3ff00000) {
      fpatan(SQRT(((float10)1 - in_ST0) * ((float10)1 + in_ST0)),in_ST0);
    }
    else if ((0x3ff00000 < in_EAX) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) goto LAB_100c153c;
    if (DAT_10321c14 == 0) {
      __math_exit(&DAT_1028b420,0xd,unaff_retaddr,param_1,param_2);
      return;
    }
  }
  return;
}

/* 100c1560  FUN_100c1560  (10 bytes)
 * undefined FUN_100c1560(uint param_1, int param_2, uint param_3, int param_4)
 * called by: FUN_10058320, FUN_10066300, FUN_1007d6c0, FUN_10098040
 */
void FUN_100c1560(uint param_1,int param_2,uint param_3,int param_4)

{
  __ctrandisp2(param_1,param_2,param_3,param_4);
  return;
}

/* 100c1580  FUN_100c1580  (11 bytes)
 * int FUN_100c1580(int param_1)
 */
int __cdecl FUN_100c1580(int param_1)

{
  return param_1 + -0x20;
}

/* 100c1590  FUN_100c1590  (147 bytes)
 * uint FUN_100c1590(uint param_1)
 * called by: FUN_10058610, FUN_100d4fa0
 */
uint __cdecl FUN_100c1590(uint param_1)

{
  bool bVar1;
  
  if (DAT_10321d5c == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      param_1 = param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement(&DAT_103222b8);
    bVar1 = DAT_103222a8 == 0;
    if (!bVar1) {
      InterlockedDecrement(&DAT_103222b8);
      FUN_100c4260(0x13);
    }
    param_1 = FUN_100c1630(param_1);
    if (bVar1) {
      InterlockedDecrement(&DAT_103222b8);
    }
    else {
      FUN_100c4300(0x13);
    }
  }
  return param_1;
}

/* 100c1630  FUN_100c1630  (299 bytes)
 * uint FUN_100c1630(uint param_1)
 * called by: FUN_100c1590
 */
uint __cdecl FUN_100c1630(uint param_1)

{
  int iVar1;
  uint local_14;
  uint local_10;
  char local_c;
  char local_b;
  undefined1 local_a;
  int local_8;
  
  if (DAT_10321d5c == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      param_1 = param_1 - 0x20;
    }
  }
  else {
    if ((int)param_1 < 0x100) {
      if (DAT_1028b63c < 2) {
        local_14 = *(ushort *)(PTR_DAT_1028b430 + param_1 * 2) & 2;
      }
      else {
        local_14 = FUN_100c1760(param_1,2);
      }
      if (local_14 == 0) {
        return param_1;
      }
    }
    if ((*(ushort *)(PTR_DAT_1028b430 + ((int)param_1 >> 8 & 0xffU) * 2) & 0x8000) == 0) {
      local_c = (char)param_1;
      local_b = '\0';
      local_8 = 1;
    }
    else {
      local_c = (char)(param_1 >> 8);
      local_b = (char)param_1;
      local_a = 0;
      local_8 = 2;
    }
    iVar1 = FUN_100cdf30(DAT_10321d5c,0x200,&local_c,local_8,(LPWSTR)&local_10,3,0,1);
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        param_1 = local_10 & 0xff;
      }
      else {
        param_1 = local_10 & 0xff | (local_10 >> 8 & 0xff) << 8;
      }
    }
  }
  return param_1;
}

/* 100c1760  FUN_100c1760  (183 bytes)
 * uint FUN_100c1760(int param_1, uint param_2)
 * called by: FUN_10058610, FUN_100bda90, FUN_100c0680, FUN_100c0c30, FUN_100c0d50, FUN_100c0e80, FUN_100c0ed0, FUN_100c0f10, FUN_100c0f50, FUN_100c0f90, FUN_100c0fe0, FUN_100c1020, ... (26 total)
 */
uint __cdecl FUN_100c1760(int param_1,uint param_2)

{
  uint uVar1;
  BOOL BVar2;
  CHAR local_10;
  CHAR local_f;
  undefined1 local_e;
  int local_c;
  uint local_8;
  
  if (param_1 + 1U < 0x101) {
    uVar1 = *(ushort *)(PTR_DAT_1028b430 + param_1 * 2) & param_2;
  }
  else {
    if ((*(ushort *)(PTR_DAT_1028b430 + (param_1 >> 8 & 0xffU) * 2) & 0x8000) == 0) {
      local_10 = (CHAR)param_1;
      local_f = '\0';
      local_c = 1;
    }
    else {
      local_10 = (CHAR)((uint)param_1 >> 8);
      local_f = (CHAR)param_1;
      local_e = 0;
      local_c = 2;
    }
    BVar2 = FUN_100ce290(1,&local_10,local_c,(LPWORD)&local_8,0,0,1);
    if (BVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = local_8 & 0xffff & param_2;
    }
  }
  return uVar1;
}

/* 100c1820  FUN_100c1820  (243 bytes)
 * float10 FUN_100c1820(uint param_1, uint param_2)
 * called by: FUN_1005ea50, FUN_1005f190
 */
float10 __cdecl FUN_100c1820(uint param_1,uint param_2)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  uVar2 = FUN_100cf390();
  if ((param_2._2_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = FUN_100cf190(param_1,param_2);
    if (iVar3 == 1) {
      FUN_100cf390();
      fVar4 = (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    }
    else if (iVar3 == 2) {
      FUN_100cf390();
      fVar4 = -(float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    }
    else if (iVar3 == 3) {
      fVar4 = FUN_100ce450(0x15,param_1,param_2);
    }
    else {
      dVar1 = (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) + 1.0;
      fVar4 = FUN_100ce520(8,0x15,param_1,param_2,SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20),
                           uVar2);
    }
  }
  else {
    FUN_100cf390();
    fVar4 = (float10)ABS((double)CONCAT44(param_2,param_1));
  }
  return fVar4;
}

/* 100c1920  FUN_100c1920  (133 bytes)
 * uint * FUN_100c1920(uint * param_1, char * param_2)
 * called by: FUN_10060890, FUN_10061120, FUN_100ccb40
 */
uint * __cdecl FUN_100c1920(uint *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  uint *puVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  uint *puVar10;
  
  cVar3 = *param_2;
  if (cVar3 == '\0') {
    return param_1;
  }
  if (param_2[1] == '\0') {
    while (((uint)param_1 & 3) != 0) {
      uVar5 = *param_1;
      if ((char)uVar5 == cVar3) {
        return param_1;
      }
      param_1 = (uint *)((int)param_1 + 1);
      if ((char)uVar5 == '\0') {
        return (uint *)0x0;
      }
    }
    while( true ) {
      while( true ) {
        uVar5 = *param_1;
        uVar9 = uVar5 ^ CONCAT22(CONCAT11(cVar3,cVar3),CONCAT11(cVar3,cVar3));
        uVar7 = uVar5 ^ 0xffffffff ^ uVar5 + 0x7efefeff;
        puVar10 = param_1 + 1;
        if (((uVar9 ^ 0xffffffff ^ uVar9 + 0x7efefeff) & 0x81010100) != 0) break;
        param_1 = puVar10;
        if ((uVar7 & 0x81010100) != 0) {
          if ((uVar7 & 0x1010100) != 0) {
            return (uint *)0x0;
          }
          if ((uVar5 + 0x7efefeff & 0x80000000) == 0) {
            return (uint *)0x0;
          }
        }
      }
      uVar5 = *param_1;
      if ((char)uVar5 == cVar3) {
        return param_1;
      }
      if ((char)uVar5 == '\0') {
        return (uint *)0x0;
      }
      cVar6 = (char)(uVar5 >> 8);
      if (cVar6 == cVar3) {
        return (uint *)((int)param_1 + 1);
      }
      if (cVar6 == '\0') {
        return (uint *)0x0;
      }
      cVar6 = (char)(uVar5 >> 0x10);
      if (cVar6 == cVar3) {
        return (uint *)((int)param_1 + 2);
      }
      if (cVar6 == '\0') break;
      cVar6 = (char)(uVar5 >> 0x18);
      if (cVar6 == cVar3) {
        return (uint *)((int)param_1 + 3);
      }
      param_1 = puVar10;
      if (cVar6 == '\0') {
        return (uint *)0x0;
      }
    }
    return (uint *)0x0;
  }
  do {
    cVar6 = (char)*param_1;
    do {
      while (puVar10 = param_1, param_1 = (uint *)((int)puVar10 + 1), cVar6 != cVar3) {
        if (cVar6 == '\0') {
          return (uint *)0x0;
        }
        cVar6 = *(char *)param_1;
      }
      cVar6 = *(char *)param_1;
      pcVar8 = param_2;
      puVar4 = puVar10;
    } while (cVar6 != param_2[1]);
    do {
      if (pcVar8[2] == '\0') {
        return puVar10;
      }
      if (*(char *)((int)puVar4 + 2) != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') {
        return puVar10;
      }
      pcVar2 = (char *)((int)puVar4 + 3);
      pcVar8 = pcVar8 + 2;
      puVar4 = (uint *)((int)puVar4 + 2);
    } while (*pcVar1 == *pcVar2);
  } while( true );
}

/* 100c19a0  FUN_100c19a0  (183 bytes)
 * int FUN_100c19a0(char * param_1, byte.conflict * param_2)
 * called by: FUN_1008d7b0, FUN_1009c980, FUN_100a26e0
 */
int __cdecl FUN_100c19a0(char *param_1,byte_conflict *param_2)

{
  code *pcVar1;
  int iVar2;
  char *local_24;
  size_t local_20;
  char *local_1c;
  undefined4 local_18;
  
  if ((param_1 == (char *)0x0) &&
     (iVar2 = FUN_100c32e0(2,0x102795c8,0x42,0,(byte_conflict *)"string != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if ((param_2 == (byte_conflict *)0x0) &&
     (iVar2 = FUN_100c32e0(2,0x102795c8,0x43,0,(byte_conflict *)"format != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  local_18 = 0x49;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = _strlen(param_1);
  iVar2 = FUN_100cf450((int *)&local_24,param_2,(undefined4 *)&stack0x0000000c);
  return iVar2;
}

/* 100c1a60  FUN_100c1a60  (243 bytes)
 * int FUN_100c1a60(undefined1 * param_1, int param_2, byte.conflict * param_3, undefined4 * param_4)
 * called by: FUN_10098840, FUN_100c32e0
 */
int __cdecl FUN_100c1a60(undefined1 *param_1,int param_2,byte_conflict *param_3,undefined4 *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  if ((param_1 == (undefined1 *)0x0) &&
     (iVar2 = FUN_100c32e0(2,0x10278c3c,0x5a,0,(byte_conflict *)"string != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if ((param_3 == (byte_conflict *)0x0) &&
     (iVar2 = FUN_100c32e0(2,0x10278c3c,0x5b,0,(byte_conflict *)"format != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = param_2;
  iVar2 = FUN_100c2330((int *)&local_24,param_3,param_4);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_100c20b0(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar2;
}

/* 100c1bd1  FUN_100c1bd1  (28 bytes)
 * undefined FUN_100c1bd1(void)
 * called by: `eh_vector_constructor_iterator'
 */
void FUN_100c1bd1(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    FUN_100c1cb0(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                 *(int *)(unaff_EBP + -0x1c),*(undefined **)(unaff_EBP + 0x18));
  }
  return;
}

/* 100c1bed  FUN_100c1bed  (19 bytes)
 * undefined FUN_100c1bed(void)
 * called by: `eh_vector_constructor_iterator'
 */
void FUN_100c1bed(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return;
}

/* 100c1c00  FUN_100c1c00  (117 bytes)
 * undefined FUN_100c1c00(undefined4 param_1, undefined4 param_2, int param_3, undefined * param_4)
 * called by: FUN_1009e7b0, FUN_100a2750, FUN_100a27d0, Unwind@100e5e4f, Unwind@100e5e79, Unwind@100e5e94
 */
void FUN_100c1c00(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_102795e8;
  pcStack_10 = FUN_100c9368;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*(code *)param_4)();
  }
  local_8 = 0xffffffff;
  FUN_100c1c75();
  FUN_100c1c91();
  return;
}

/* 100c1c75  FUN_100c1c75  (28 bytes)
 * undefined FUN_100c1c75(void)
 * called by: FUN_100c1c00
 */
void FUN_100c1c75(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    FUN_100c1cb0(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                 *(int *)(unaff_EBP + 0x10),*(undefined **)(unaff_EBP + 0x14));
  }
  return;
}

/* 100c1c91  FUN_100c1c91  (19 bytes)
 * undefined FUN_100c1c91(void)
 * called by: FUN_100c1c00
 */
void FUN_100c1c91(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return;
}

/* 100c1cb0  FUN_100c1cb0  (105 bytes)
 * undefined FUN_100c1cb0(undefined4 param_1, undefined4 param_2, int param_3, undefined * param_4)
 * called by: FUN_100c1bd1, FUN_100c1c75
 */
void FUN_100c1cb0(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_102795f8;
  pcStack_10 = FUN_100c9368;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  while (param_3 = param_3 + -1, -1 < param_3) {
    (*(code *)param_4)();
  }
  ExceptionList = local_14;
  return;
}

/* 100c1d06  FUN_100c1d06  (13 bytes)
 * undefined FUN_100c1d06()
 */
void FUN_100c1d06(void)

{
  int unaff_EBP;
  
  ArrayUnwindFilter(*(_EXCEPTION_POINTERS **)(unaff_EBP + -0x14));
  return;
}

/* 100c1d70  FUN_100c1d70  (188 bytes)
 * uint * FUN_100c1d70(uint * param_1, char param_2)
 * called by: FUN_100af6c0, FUN_100b3eb0, FUN_100ccb40, FUN_100dc560
 */
uint * __cdecl FUN_100c1d70(uint *param_1,char param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  while (((uint)param_1 & 3) != 0) {
    uVar1 = *param_1;
    if ((char)uVar1 == param_2) {
      return param_1;
    }
    param_1 = (uint *)((int)param_1 + 1);
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *param_1;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
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
    if ((char)uVar1 == param_2) {
      return param_1;
    }
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 1);
    }
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 3);
    }
    param_1 = puVar5;
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
  }
  return (uint *)0x0;
}

/* 100c1e30  FUN_100c1e30  (313 bytes)
 * undefined4 FUN_100c1e30(undefined4 param_1, int param_2)
 * called by: entry
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100c1e30(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 1) {
    DAT_10321c20 = GetVersion();
    iVar1 = FUN_100ccd70(1);
    if (iVar1 == 0) {
      return 0;
    }
    _DAT_10321c2c = DAT_10321c20 >> 8 & 0xff;
    DAT_10321c28 = DAT_10321c20 & 0xff;
    _DAT_10321c24 = DAT_10321c28 * 0x100 + _DAT_10321c2c;
    DAT_10321c20 = DAT_10321c20 >> 0x10;
    iVar1 = FUN_100c5500();
    if (iVar1 == 0) {
      FUN_100cce00();
      return 0;
    }
    DAT_10323790 = GetCommandLineA();
    DAT_10321c98 = FUN_100d0fb0();
    FUN_100c6060();
    FUN_100d0aa0();
    FUN_100d0950();
    FUN_100bbc20();
    DAT_10321c94 = DAT_10321c94 + 1;
  }
  else if (param_2 == 0) {
    if (DAT_10321c94 < 1) {
      return 0;
    }
    DAT_10321c94 = DAT_10321c94 + -1;
    if (DAT_10321c58 == 0) {
      FUN_100bbca0();
    }
    uVar2 = FUN_100bfcf0(-1);
    if ((uVar2 & 0x20) != 0) {
      FUN_100c07a0();
    }
    __ioterm();
    FUN_100c5590();
    FUN_100cce00();
  }
  else if (param_2 == 3) {
    FUN_100c5680((LPVOID)0x0);
  }
  return 1;
}

/* 100c20b0  FUN_100c20b0  (628 bytes)
 * uint FUN_100c20b0(uint param_1, int * param_2)
 * called by: FUN_100bb6e0, FUN_100bbe40, FUN_100bd300, FUN_100bd440, FUN_100c1a60, FUN_100c3060
 */
uint __cdecl FUN_100c20b0(uint param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined *local_18;
  uint local_10;
  uint local_8;
  
  if ((param_2 == (int *)0x0) &&
     (iVar3 = FUN_100c32e0(2,0x10279644,0x69,0,(byte_conflict *)"str != NULL"), iVar3 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  piVar2 = param_2;
  uVar4 = param_2[4];
  if (((param_2[3] & 0x82U) == 0) || ((param_2[3] & 0x40U) != 0)) {
    param_2[3] = param_2[3] | 0x20;
    uVar4 = 0xffffffff;
  }
  else {
    if ((param_2[3] & 1U) != 0) {
      param_2[1] = 0;
      if ((param_2[3] & 0x10U) == 0) {
        param_2[3] = param_2[3] | 0x20;
        return 0xffffffff;
      }
      *param_2 = param_2[2];
      param_2[3] = param_2[3] & 0xfffffffe;
    }
    param_2[3] = param_2[3] | 2;
    param_2[3] = param_2[3] & 0xffffffef;
    param_2[1] = 0;
    local_10 = 0;
    if (((param_2[3] & 0x10cU) == 0) &&
       (((param_2 != (int *)&DAT_1028b7c8 && (param_2 != (int *)&DAT_1028b7e8)) ||
        (iVar3 = __isatty(uVar4), iVar3 == 0)))) {
      FUN_100d1440(piVar2);
    }
    if ((piVar2[3] & 0x108U) == 0) {
      local_8 = 1;
      local_10 = FUN_100c7160(uVar4,(char *)&param_1,1);
    }
    else {
      if ((*piVar2 - piVar2[2] < 0) &&
         (iVar3 = FUN_100c32e0(2,0x10279644,0xa0,0,
                               (byte_conflict *)
                               "(\"inconsistent IOB fields\", stream->_ptr - stream->_base >= 0)"),
         iVar3 == 1)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      local_8 = *piVar2 - piVar2[2];
      *piVar2 = piVar2[2] + 1;
      piVar2[1] = piVar2[6] + -1;
      if ((int)local_8 < 1) {
        if (uVar4 == 0xffffffff) {
          local_18 = &DAT_1028bb90;
        }
        else {
          local_18 = (undefined *)((&DAT_10322300)[(int)uVar4 >> 5] + (uVar4 & 0x1f) * 0x24);
        }
        if ((local_18[4] & 0x20) != 0) {
          FUN_100c6430(uVar4,0,2);
        }
      }
      else {
        local_10 = FUN_100c7160(uVar4,(char *)piVar2[2],local_8);
      }
      *(undefined1 *)piVar2[2] = (undefined1)param_1;
    }
    if (local_10 == local_8) {
      uVar4 = param_1 & 0xff;
    }
    else {
      piVar2[3] = piVar2[3] | 0x20;
      uVar4 = 0xffffffff;
    }
  }
  return uVar4;
}

/* 100c2330  FUN_100c2330  (3108 bytes)
 * int FUN_100c2330(int * param_1, byte.conflict * param_2, undefined4 * param_3)
 * called by: FUN_100bb6e0, FUN_100bbe40, FUN_100bd300, FUN_100bdbb0, FUN_100c1a60
 */
int __cdecl FUN_100c2330(int *param_1,byte_conflict *param_2,undefined4 *param_3)

{
  byte bVar1;
  short sVar2;
  code *pcVar3;
  byte_conflict *pbVar4;
  byte_conflict *pbVar5;
  undefined4 uVar6;
  uint uVar7;
  size_t sVar8;
  int iVar9;
  short *psVar10;
  bool bVar11;
  undefined8 uVar12;
  int local_2a8;
  uint local_294;
  CHAR local_28c [4];
  size_t local_288;
  short *local_284;
  int local_280;
  undefined8 local_27c;
  int local_274;
  undefined8 local_270;
  undefined4 local_268;
  undefined4 local_264;
  int *local_260;
  int local_25c;
  short *local_258;
  short *local_254;
  short *local_250;
  undefined2 local_24c;
  int local_248;
  char local_244;
  char local_243;
  int local_240;
  uint local_23c;
  int local_238;
  int local_234;
  int local_230;
  short local_22c [255];
  undefined2 uStack_2d;
  undefined3 uStack_2b;
  size_t local_28;
  short *local_24;
  int local_20;
  int local_1c;
  undefined2 local_18;
  int local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  local_28 = 0;
  local_230 = 0;
  local_1c = 0;
  pbVar5 = param_2;
  do {
    param_2 = pbVar5;
    bVar1 = *param_2;
    stack0xffffffd4 = CONCAT31(uStack_2b,bVar1);
    pbVar5 = param_2 + 1;
    if ((bVar1 == 0) || (local_230 < 0)) {
      return local_230;
    }
    if (((char)bVar1 < ' ') || ('x' < (char)bVar1)) {
      local_294 = 0;
    }
    else {
      local_294 = (int)"(\"inconsistent IOB fields\", stream->_ptr - stream->_base >= 0)"
                       [(char)bVar1 + 0x2c] & 0xf;
    }
    local_10 = local_294;
    local_1c = (int)(char)(&DAT_10279650)[local_294 * 8 + local_1c] >> 4;
    switch(local_1c) {
    case 0:
switchD_100c23e9_caseD_0:
      local_20 = 0;
      pbVar4 = pbVar5;
      if ((*(ushort *)(PTR_DAT_1028b430 + (uint)bVar1 * 2) & 0x8000) != 0) {
        FUN_100c3060((int)(char)bVar1,param_1,&local_230);
        stack0xffffffd4 = CONCAT31(uStack_2b,*pbVar5);
        pbVar4 = param_2 + 2;
        if ((*pbVar5 == '\0') &&
           (iVar9 = FUN_100c32e0(2,0x102796c4,0x186,0,(byte_conflict *)"ch != _T(\'\\0\')"),
           iVar9 == 1)) {
          pcVar3 = (code *)swi(3);
          iVar9 = (*pcVar3)();
          return iVar9;
        }
      }
      param_2 = pbVar4;
      FUN_100c3060((int)uStack_2d._1_1_,param_1,&local_230);
      pbVar5 = param_2;
      break;
    case 1:
      local_c = 0;
      local_240 = 0;
      local_248 = 0;
      local_14 = 0;
      local_8 = 0;
      local_238 = -1;
      local_20 = 0;
      break;
    case 2:
      switch(bVar1) {
      case 0x20:
        local_8 = local_8 | 2;
        break;
      case 0x23:
        local_8 = local_8 | 0x80;
        break;
      case 0x2b:
        local_8 = local_8 | 1;
        break;
      case 0x2d:
        local_8 = local_8 | 4;
        break;
      case 0x30:
        local_8 = local_8 | 8;
      }
      break;
    case 3:
      if (bVar1 == 0x2a) {
        local_248 = FUN_100c3170((int *)&param_3);
        if (local_248 < 0) {
          local_8 = local_8 | 4;
          local_248 = -local_248;
        }
      }
      else {
        local_248 = local_248 * 10 + -0x30 + (int)(char)bVar1;
      }
      break;
    case 4:
      local_238 = 0;
      break;
    case 5:
      if (bVar1 == 0x2a) {
        local_238 = FUN_100c3170((int *)&param_3);
        if (local_238 < 0) {
          local_238 = -1;
        }
      }
      else {
        local_238 = local_238 * 10 + -0x30 + (int)(char)bVar1;
      }
      break;
    case 6:
      switch(bVar1) {
      case 0x49:
        if ((*pbVar5 != '6') || (param_2[2] != '4')) {
          local_1c = 0;
          goto switchD_100c23e9_caseD_0;
        }
        local_8 = local_8 | 0x8000;
        pbVar5 = param_2 + 3;
        break;
      case 0x68:
        local_8 = local_8 | 0x20;
        break;
      case 0x6c:
        local_8 = local_8 | 0x10;
        break;
      case 0x77:
        local_8 = local_8 | 0x800;
      }
      param_2 = pbVar5;
      pbVar5 = param_2;
      break;
    case 7:
      psVar10 = local_24;
      switch(bVar1) {
      case 0x43:
        if ((local_8 & 0x830) == 0) {
          local_8 = local_8 | 0x800;
        }
      case 99:
        if ((local_8 & 0x810) == 0) {
          uVar6 = FUN_100c3170((int *)&param_3);
          local_24c._0_1_ = (undefined1)uVar6;
          local_22c[0]._0_1_ = (undefined1)local_24c;
          local_28 = 1;
          local_24c = (short)uVar6;
        }
        else {
          local_18 = FUN_100c31b0((int *)&param_3);
          local_28 = FUN_100d1550((LPSTR)local_22c,local_18);
          if ((int)local_28 < 0) {
            local_240 = 1;
          }
        }
        psVar10 = local_22c;
        break;
      case 0x45:
      case 0x47:
        local_c = 1;
        stack0xffffffd4 = CONCAT31(uStack_2b,bVar1 + 0x20);
      case 0x65:
      case 0x66:
      case 0x67:
        local_8 = local_8 | 0x40;
        local_24 = local_22c;
        if (local_238 < 0) {
          local_238 = 6;
        }
        else if ((local_238 == 0) && (uStack_2d._1_1_ == 'g')) {
          local_238 = 1;
        }
        local_268 = *param_3;
        local_264 = param_3[1];
        param_3 = param_3 + 2;
        (*(code *)PTR___fptrap_1028b684)(&local_268,local_24,(int)uStack_2d._1_1_,local_238,local_c)
        ;
        if (((local_8 & 0x80) != 0) && (local_238 == 0)) {
          (*(code *)PTR___fptrap_1028b690)(local_24);
        }
        if ((uStack_2d._1_1_ == 'g') && ((local_8 & 0x80) == 0)) {
          (*(code *)PTR___fptrap_1028b688)(local_24);
        }
        if ((char)*local_24 == '-') {
          local_8 = local_8 | 0x100;
          local_24 = (short *)((int)local_24 + 1);
        }
        local_28 = _strlen((char *)local_24);
        psVar10 = local_24;
        break;
      case 0x53:
        if ((local_8 & 0x830) == 0) {
          local_8 = local_8 | 0x800;
        }
      case 0x73:
        if (local_238 == -1) {
          local_2a8 = 0x7fffffff;
        }
        else {
          local_2a8 = local_238;
        }
        local_25c = local_2a8;
        local_24 = (short *)FUN_100c3170((int *)&param_3);
        if ((local_8 & 0x810) == 0) {
          if (local_24 == (short *)0x0) {
            local_24 = (short *)PTR_DAT_1028b654;
          }
          for (local_254 = local_24; (local_25c != 0 && ((char)*local_254 != '\0'));
              local_254 = (short *)((int)local_254 + 1)) {
            local_25c = local_25c + -1;
          }
          local_28 = (int)local_254 - (int)local_24;
          local_25c = local_25c + -1;
          psVar10 = local_24;
        }
        else {
          if (local_24 == (short *)0x0) {
            local_24 = (short *)PTR_DAT_1028b658;
          }
          local_20 = 1;
          for (local_258 = local_24; (local_25c != 0 && (*local_258 != 0));
              local_258 = local_258 + 1) {
            local_25c = local_25c + -1;
          }
          local_28 = (int)local_258 - (int)local_24 >> 1;
          local_25c = local_25c + -1;
          psVar10 = local_24;
        }
        break;
      case 0x5a:
        local_250 = (short *)FUN_100c3170((int *)&param_3);
        if ((local_250 == (short *)0x0) || (*(int *)(local_250 + 2) == 0)) {
          local_24 = (short *)PTR_DAT_1028b654;
          local_28 = _strlen(PTR_DAT_1028b654);
          psVar10 = local_24;
        }
        else if ((local_8 & 0x800) == 0) {
          local_20 = 0;
          local_28 = (size_t)*local_250;
          psVar10 = *(short **)(local_250 + 2);
        }
        else {
          local_28 = (uint)(int)*local_250 >> 1;
          local_20 = 1;
          psVar10 = *(short **)(local_250 + 2);
        }
        break;
      case 100:
      case 0x69:
        local_8 = local_8 | 0x40;
        local_23c = 10;
        goto LAB_100c2af5;
      case 0x6e:
        local_260 = (int *)FUN_100c3170((int *)&param_3);
        if ((local_8 & 0x20) == 0) {
          *local_260 = local_230;
        }
        else {
          *(undefined2 *)local_260 = (undefined2)local_230;
        }
        local_240 = 1;
        psVar10 = local_24;
        break;
      case 0x6f:
        local_23c = 8;
        if ((local_8 & 0x80) != 0) {
          local_8 = local_8 | 0x200;
        }
        goto LAB_100c2af5;
      case 0x70:
        local_238 = 8;
      case 0x58:
        local_234 = 7;
        goto LAB_100c2a9f;
      case 0x75:
        local_23c = 10;
        goto LAB_100c2af5;
      case 0x78:
        local_234 = 0x27;
LAB_100c2a9f:
        local_23c = 0x10;
        if ((local_8 & 0x80) != 0) {
          local_244 = '0';
          local_243 = (char)local_234 + 'Q';
          local_14 = 2;
        }
LAB_100c2af5:
        if ((local_8 & 0x8000) == 0) {
          if ((local_8 & 0x20) == 0) {
            if ((local_8 & 0x40) == 0) {
              uVar7 = FUN_100c3170((int *)&param_3);
              local_27c = (ulonglong)uVar7;
            }
            else {
              iVar9 = FUN_100c3170((int *)&param_3);
              local_27c = (ulonglong)iVar9;
            }
          }
          else if ((local_8 & 0x40) == 0) {
            uVar7 = FUN_100c3170((int *)&param_3);
            local_27c = (ulonglong)(uVar7 & 0xffff);
          }
          else {
            uVar6 = FUN_100c3170((int *)&param_3);
            local_27c = (ulonglong)(int)(short)uVar6;
          }
        }
        else {
          local_27c = FUN_100c3190((int *)&param_3);
        }
        if ((((local_8 & 0x40) == 0) || (0 < local_27c._4_4_)) || (-1 < (longlong)local_27c)) {
          local_270 = local_27c;
        }
        else {
          local_270 = CONCAT44(-(local_27c._4_4_ + (uint)((int)local_27c != 0)),-(int)local_27c);
          local_8 = local_8 | 0x100;
        }
        if ((local_8 & 0x8000) == 0) {
          local_270 = local_270 & 0xffffffff;
        }
        if (local_238 < 0) {
          local_238 = 1;
        }
        else {
          local_8 = local_8 & 0xfffffff7;
        }
        if ((uint)local_270 == 0 && local_270._4_4_ == 0) {
          local_14 = 0;
        }
        local_24 = &uStack_2d;
        while( true ) {
          iVar9 = local_238 + -1;
          if ((local_238 < 1) && ((uint)local_270 == 0 && local_270._4_4_ == 0)) break;
          local_238 = iVar9;
          uVar12 = __aullrem((uint)local_270,local_270._4_4_,local_23c,(int)local_23c >> 0x1f);
          local_274 = (int)uVar12 + 0x30;
          local_270 = __aulldiv((uint)local_270,local_270._4_4_,local_23c,(int)local_23c >> 0x1f);
          if (0x39 < local_274) {
            local_274 = local_274 + local_234;
          }
          *(char *)local_24 = (char)local_274;
          local_24 = (short *)((int)local_24 + -1);
        }
        local_28 = (int)&uStack_2d - (int)local_24;
        psVar10 = (short *)((int)local_24 + 1);
        local_238 = iVar9;
        if (((local_8 & 0x200) != 0) && ((*(char *)psVar10 != '0' || (local_28 == 0)))) {
          *(char *)local_24 = '0';
          local_28 = local_28 + 1;
          psVar10 = local_24;
        }
      }
      local_24 = psVar10;
      if (local_240 == 0) {
        if ((local_8 & 0x40) != 0) {
          if ((local_8 & 0x100) == 0) {
            if ((local_8 & 1) == 0) {
              if ((local_8 & 2) != 0) {
                local_244 = ' ';
                local_14 = 1;
              }
            }
            else {
              local_244 = '+';
              local_14 = 1;
            }
          }
          else {
            local_244 = '-';
            local_14 = 1;
          }
        }
        local_280 = (local_248 - local_28) - local_14;
        if ((local_8 & 0xc) == 0) {
          FUN_100c30e0(0x20,local_280,param_1,&local_230);
        }
        FUN_100c3120(&local_244,local_14,param_1,&local_230);
        if (((local_8 & 8) != 0) && ((local_8 & 4) == 0)) {
          FUN_100c30e0(0x30,local_280,param_1,&local_230);
        }
        if ((local_20 == 0) || ((int)local_28 < 1)) {
          FUN_100c3120((char *)local_24,local_28,param_1,&local_230);
        }
        else {
          local_284 = local_24;
          local_288 = local_28;
          while (sVar8 = local_288 - 1, bVar11 = local_288 != 0, local_288 = sVar8, bVar11) {
            sVar2 = *local_284;
            local_284 = local_284 + 1;
            iVar9 = FUN_100d1550(local_28c,sVar2);
            if (iVar9 < 1) break;
            FUN_100c3120(local_28c,iVar9,param_1,&local_230);
          }
        }
        if ((local_8 & 4) != 0) {
          FUN_100c30e0(0x20,local_280,param_1,&local_230);
        }
      }
    }
  } while( true );
}

/* 100c3060  FUN_100c3060  (119 bytes)
 * undefined FUN_100c3060(uint param_1, int * param_2, int * param_3)
 * called by: FUN_100c2330, FUN_100c30e0, FUN_100c3120
 */
void __cdecl FUN_100c3060(uint param_1,int *param_2,int *param_3)

{
  uint local_8;
  
  param_2[1] = param_2[1] + -1;
  if (param_2[1] < 0) {
    local_8 = FUN_100c20b0(param_1,param_2);
  }
  else {
    *(undefined1 *)*param_2 = (undefined1)param_1;
    local_8 = param_1 & 0xff;
    *param_2 = *param_2 + 1;
  }
  if (local_8 == 0xffffffff) {
    *param_3 = -1;
  }
  else {
    *param_3 = *param_3 + 1;
  }
  return;
}

/* 100c30e0  FUN_100c30e0  (53 bytes)
 * undefined FUN_100c30e0(uint param_1, int param_2, int * param_3, int * param_4)
 * called by: FUN_100c2330
 */
void __cdecl FUN_100c30e0(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    FUN_100c3060(param_1,param_3,param_4);
    param_2 = param_2 + -1;
  } while (*param_4 != -1);
  return;
}

/* 100c3120  FUN_100c3120  (74 bytes)
 * undefined FUN_100c3120(char * param_1, int param_2, int * param_3, int * param_4)
 * called by: FUN_100c2330
 */
void __cdecl FUN_100c3120(char *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_100c3060((int)cVar1,param_3,param_4);
    param_2 = param_2 + -1;
  } while (*param_4 != -1);
  return;
}

/* 100c3170  FUN_100c3170  (26 bytes)
 * undefined4 FUN_100c3170(int * param_1)
 * called by: FUN_100c2330
 */
undefined4 __cdecl FUN_100c3170(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined4 *)(*param_1 + -4);
}

/* 100c3190  FUN_100c3190  (31 bytes)
 * undefined8 FUN_100c3190(int * param_1)
 * called by: FUN_100c2330
 */
undefined8 __cdecl FUN_100c3190(int *param_1)

{
  *param_1 = *param_1 + 8;
  return *(undefined8 *)(*param_1 + -8);
}

/* 100c31b0  FUN_100c31b0  (27 bytes)
 * undefined2 FUN_100c31b0(int * param_1)
 * called by: FUN_100c2330
 */
undefined2 __cdecl FUN_100c31b0(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined2 *)(*param_1 + -4);
}

/* 100c31d0  FUN_100c31d0  (11 bytes)
 * undefined FUN_100c31d0(void)
 * called by: FUN_100c32e0, FUN_100c3670
 */
void FUN_100c31d0(void)

{
  DebugBreak();
  return;
}

/* 100c31e0  FUN_100c31e0  (87 bytes)
 * undefined4 FUN_100c31e0(int param_1, uint param_2)
 */
undefined4 __cdecl FUN_100c31e0(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (2 < param_1)) {
    uVar1 = 0xffffffff;
  }
  else if (param_2 == 0xffffffff) {
    uVar1 = *(undefined4 *)(&DAT_1028b660 + param_1 * 4);
  }
  else if ((param_2 & 0xfffffff8) == 0) {
    uVar1 = *(undefined4 *)(&DAT_1028b660 + param_1 * 4);
    *(uint *)(&DAT_1028b660 + param_1 * 4) = param_2;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* 100c32c0  FUN_100c32c0  (28 bytes)
 * undefined4 FUN_100c32c0(undefined4 param_1)
 */
undefined4 __cdecl FUN_100c32c0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_10323784;
  DAT_10323784 = param_1;
  return uVar1;
}

/* 100c32e0  FUN_100c32e0  (912 bytes)
 * undefined4 FUN_100c32e0(int param_1, int param_2, int param_3, undefined4 param_4, byte.conflict * param_5)
 * called by: FUN_100bb6e0, FUN_100bbb10, FUN_100bbe40, FUN_100bc9d0, FUN_100bca60, FUN_100bcb20, FUN_100bcb90, FUN_100bce30, FUN_100bcea0, FUN_100bd1e0, FUN_100bd300, FUN_100bdbb0, ... (45 total)
 */
undefined4 __cdecl
FUN_100c32e0(int param_1,int param_2,int param_3,undefined4 param_4,byte_conflict *param_5)

{
  bool bVar1;
  LONG LVar2;
  size_t nNumberOfBytesToWrite;
  undefined3 extraout_var;
  int iVar3;
  undefined4 *puVar4;
  uint *local_302c;
  char local_3028 [20];
  DWORD local_3014;
  HMODULE local_3010;
  undefined1 local_300c;
  undefined4 local_300b;
  undefined1 local_200c;
  undefined4 local_200b;
  undefined4 local_100c;
  undefined4 *local_1008;
  undefined1 local_1004;
  undefined4 local_1003;
  undefined4 uStackY_24;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  
  FUN_100bdb10();
  local_300c = 0;
  puVar4 = &local_300b;
  for (iVar3 = 0x3ff; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  local_200c = '\0';
  puVar4 = &local_200b;
  for (iVar3 = 0x3ff; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  local_1004 = 0;
  puVar4 = &local_1003;
  for (iVar3 = 0x3ff; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  local_1008 = (undefined4 *)&stack0x00000018;
  if ((param_1 < 0) || (2 < param_1)) {
    local_100c = 0xffffffff;
  }
  else if ((param_1 == 2) && (LVar2 = InterlockedIncrement((LONG *)&DAT_1028b65c), 0 < LVar2)) {
    if ((DAT_10321ca8 == (FARPROC)0x0) &&
       ((local_3010 = LoadLibraryA("user32.dll"), local_3010 == (HMODULE)0x0 ||
        (DAT_10321ca8 = GetProcAddress(local_3010,"wsprintfA"), DAT_10321ca8 == (FARPROC)0x0)))) {
      local_100c = 0xffffffff;
    }
    else {
      (*DAT_10321ca8)();
      OutputDebugStringA(&local_200c);
      InterlockedDecrement((LONG *)&DAT_1028b65c);
      FUN_100c31d0();
      local_100c = 0xffffffff;
    }
  }
  else {
    if ((param_5 != (byte_conflict *)0x0) &&
       (iVar3 = FUN_100c1a60(&local_1004,0xfed,param_5,local_1008), iVar3 < 0)) {
      FUN_100bba20((uint *)&local_1004,(uint *)"_CrtDbgReport: String too long or IO Error");
    }
    if (param_1 == 2) {
      if (param_5 == (byte_conflict *)0x0) {
        local_302c = (uint *)0x10278e00;
      }
      else {
        local_302c = (uint *)0x10279714;
      }
      FUN_100bba20((uint *)&local_300c,local_302c);
    }
    FUN_100bba30((uint *)&local_300c,(uint *)&local_1004);
    if (param_1 == 2) {
      if ((uRam1028b668 & 1) != 0) {
        FUN_100bba30((uint *)&local_300c,(uint *)&DAT_10279710);
      }
      FUN_100bba30((uint *)&local_300c,(uint *)&DAT_1026e6d0);
    }
    if (param_2 == 0) {
      FUN_100bba20((uint *)&local_200c,(uint *)&local_300c);
    }
    else {
      uStackY_24 = 0x100c34f5;
      iVar3 = FUN_100bd300(&local_200c,0x1000,(byte_conflict *)"%s(%d) : %s");
      if (iVar3 < 0) {
        FUN_100bba20((uint *)&local_200c,(uint *)"_CrtDbgReport: String too long or IO Error");
      }
    }
    if ((DAT_10323784 == (code *)0x0) || (iVar3 = (*DAT_10323784)(), iVar3 == 0)) {
      if (((*(uint *)(&DAT_1028b660 + param_1 * 4) & 1) != 0) &&
         (*(int *)(&DAT_1028b66c + param_1 * 4) != -1)) {
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = &local_3014;
        nNumberOfBytesToWrite = _strlen(&local_200c);
        WriteFile(*(HANDLE *)(&DAT_1028b66c + param_1 * 4),&local_200c,nNumberOfBytesToWrite,
                  lpNumberOfBytesWritten,lpOverlapped);
      }
      if ((*(uint *)(&DAT_1028b660 + param_1 * 4) & 2) != 0) {
        OutputDebugStringA(&local_200c);
      }
      if ((*(uint *)(&DAT_1028b660 + param_1 * 4) & 4) == 0) {
        if (param_1 == 2) {
          InterlockedDecrement((LONG *)&DAT_1028b65c);
        }
        local_100c = 0;
      }
      else {
        if (param_3 != 0) {
          __itoa(param_3,local_3028,10);
        }
        bVar1 = FUN_100c3670();
        local_100c = CONCAT31(extraout_var,bVar1);
        if (param_1 == 2) {
          InterlockedDecrement((LONG *)&DAT_1028b65c);
        }
      }
    }
    else if (param_1 == 2) {
      InterlockedDecrement((LONG *)&DAT_1028b65c);
    }
  }
  return local_100c;
}

/* 100c3670  FUN_100c3670  (780 bytes)
 * bool FUN_100c3670(void)
 * called by: FUN_100c32e0
 */
bool FUN_100c3670(void)

{
  int iVar1;
  DWORD DVar2;
  size_t sVar3;
  char *in_stack_00000010;
  int in_stack_00000014;
  uint local_1110 [1024];
  int local_110;
  uint local_10c [50];
  undefined4 uStackY_44;
  uint *_Str;
  
  FUN_100bdb10();
  if ((in_stack_00000014 == 0) &&
     (iVar1 = FUN_100c32e0(2,0x102798a8,0x1da,0,(byte_conflict *)"szUserMessage != NULL"),
     iVar1 == 1)) {
    FUN_100c31d0();
  }
  DVar2 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_10c,0x104);
  if (DVar2 == 0) {
    FUN_100bba20(local_10c,(uint *)"<program name unknown>");
  }
  _Str = local_10c;
  sVar3 = _strlen((char *)_Str);
  if (0x40 < sVar3) {
    _strlen((char *)_Str);
    _strncpy((char *)0x3,"...",3);
  }
  if ((in_stack_00000010 != (char *)0x0) && (sVar3 = _strlen(in_stack_00000010), 0x40 < sVar3)) {
    sVar3 = _strlen(in_stack_00000010);
    _strncpy(in_stack_00000010 + (sVar3 - 0x40),"...",3);
  }
  uStackY_44 = 0x100c3912;
  iVar1 = FUN_100bd300((undefined1 *)local_1110,0x1000,
                       (byte_conflict *)
                       "Debug %s!\n\nProgram: %s%s%s%s%s%s%s%s%s%s%s\n\n(Press Retry to debug the application)"
                      );
  if (iVar1 < 0) {
    FUN_100bba20(local_1110,(uint *)"_CrtDbgReport: String too long or IO Error");
  }
  local_110 = FUN_100c7a20(local_1110,"Microsoft Visual C++ Debug Library",0x12012);
  if (local_110 == 3) {
    FUN_100c7760(0x16);
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  return local_110 == 4;
}

/* 100c39a0  FUN_100c39a0  (94 bytes)
 * undefined4 FUN_100c39a0(void)
 * called by: __ms_p5_mp_test_fdiv
 */
/* WARNING: Removing unreachable block (ram,0x100c39e4) */

undefined4 FUN_100c39a0(void)

{
  return 0;
}

/* 100c3a50  FUN_100c3a50  (168 bytes)
 * undefined FUN_100c3a50(char * param_1)
 */
void __cdecl FUN_100c3a50(char *param_1)

{
  char cVar1;
  uint uVar2;
  uint local_10;
  char local_c;
  
  uVar2 = FUN_100d1c10((int)*param_1);
  if (uVar2 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_1028b63c < 2) {
        local_10 = *(ushort *)(PTR_DAT_1028b430 + *param_1 * 2) & 4;
      }
      else {
        local_10 = FUN_100c1760((int)*param_1,4);
      }
    } while (local_10 != 0);
  }
  local_c = *param_1;
  *param_1 = DAT_1028b640;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = local_c;
    local_c = cVar1;
  } while (*param_1 != '\0');
  return;
}

/* 100c3c60  FUN_100c3c60  (118 bytes)
 * undefined1 * FUN_100c3c60(undefined4 * param_1, undefined1 * param_2, int param_3, int param_4)
 * called by: __cfltcvt
 */
undefined1 * __cdecl FUN_100c3c60(undefined4 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint local_30 [6];
  int local_18 [4];
  int *local_8;
  
  local_8 = local_18;
  FUN_100d26c0(*param_1,param_1[1],local_18,local_30);
  FUN_100d25c0(param_2 + (uint)(0 < param_3) + (uint)(*local_8 == 0x2d),param_3 + 1,(int)local_8);
  FUN_100c3ce0(param_2,param_3,param_4,local_8,'\0');
  return param_2;
}

/* 100c3ce0  FUN_100c3ce0  (358 bytes)
 * undefined1 * FUN_100c3ce0(undefined1 * param_1, int param_2, int param_3, int * param_4, char param_5)
 * called by: FUN_100c3c60, FUN_100c4000
 */
undefined1 * __cdecl
FUN_100c3ce0(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  uint *puVar1;
  int local_c;
  undefined1 *local_8;
  
  if (param_5 != '\0') {
    __shift(param_1 + (*param_4 == 0x2d),(uint)(0 < param_2));
  }
  local_8 = param_1;
  if (*param_4 == 0x2d) {
    *param_1 = 0x2d;
    local_8 = param_1 + 1;
  }
  if (0 < param_2) {
    *local_8 = local_8[1];
    local_8 = local_8 + 1;
    *local_8 = DAT_1028b640;
  }
  puVar1 = FUN_100bba20((uint *)(local_8 + (uint)(param_5 == '\0') + param_2),(uint *)"e+000");
  if (param_3 != 0) {
    *(undefined1 *)puVar1 = 0x45;
  }
  if (*(char *)param_4[3] != '0') {
    local_c = param_4[1] + -1;
    if (local_c < 0) {
      local_c = -local_c;
      *(undefined1 *)((int)puVar1 + 1) = 0x2d;
    }
    if (99 < local_c) {
      *(char *)((int)puVar1 + 2) = *(char *)((int)puVar1 + 2) + (char)(local_c / 100);
      local_c = local_c % 100;
    }
    if (9 < local_c) {
      *(char *)((int)puVar1 + 3) = *(char *)((int)puVar1 + 3) + (char)(local_c / 10);
      local_c = local_c % 10;
    }
    *(char *)(puVar1 + 1) = (char)puVar1[1] + (char)local_c;
  }
  return param_1;
}

/* 100c3e50  FUN_100c3e50  (106 bytes)
 * char * FUN_100c3e50(undefined4 * param_1, char * param_2, size_t param_3)
 * called by: __cfltcvt
 */
char * __cdecl FUN_100c3e50(undefined4 *param_1,char *param_2,size_t param_3)

{
  uint local_30 [6];
  int local_18 [4];
  int *local_8;
  
  local_8 = local_18;
  FUN_100d26c0(*param_1,param_1[1],local_18,local_30);
  FUN_100d25c0(param_2 + (*local_8 == 0x2d),param_3 + local_8[1],(int)local_8);
  FUN_100c3ec0(param_2,param_3,local_8,'\0');
  return param_2;
}

/* 100c3ec0  FUN_100c3ec0  (317 bytes)
 * char * FUN_100c3ec0(char * param_1, size_t param_2, int * param_3, char param_4)
 * called by: FUN_100c3e50, FUN_100c4000
 */
char * __cdecl FUN_100c3ec0(char *param_1,size_t param_2,int *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  size_t local_14;
  char *local_8;
  
  iVar1 = param_3[1];
  if ((param_4 != '\0') && (iVar2 = *param_3, iVar1 - 1U == param_2)) {
    param_1[(iVar1 - 1U) + (uint)(iVar2 == 0x2d)] = '0';
    (param_1 + (iVar1 - 1U) + (uint)(iVar2 == 0x2d))[1] = '\0';
  }
  local_8 = param_1;
  if (*param_3 == 0x2d) {
    *param_1 = '-';
    local_8 = param_1 + 1;
  }
  if (param_3[1] < 1) {
    __shift(local_8,1);
    *local_8 = '0';
    local_8 = local_8 + 1;
  }
  else {
    local_8 = local_8 + param_3[1];
  }
  if (0 < (int)param_2) {
    __shift(local_8,1);
    *local_8 = DAT_1028b640;
    if (param_3[1] < 0) {
      if (param_4 == '\0') {
        if ((int)param_2 < -param_3[1]) {
          local_14 = param_2;
        }
        else {
          local_14 = -param_3[1];
        }
        param_2 = local_14;
      }
      else {
        param_2 = -param_3[1];
      }
      __shift(local_8 + 1,param_2);
      _memset(local_8 + 1,0x30,param_2);
    }
  }
  return param_1;
}

/* 100c4000  FUN_100c4000  (229 bytes)
 * undefined FUN_100c4000(undefined4 * param_1, char * param_2, size_t param_3, int param_4)
 * called by: __cfltcvt
 */
void __cdecl FUN_100c4000(undefined4 *param_1,char *param_2,size_t param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  uint local_30 [6];
  int local_18;
  int local_14;
  char *local_8;
  
  FUN_100d26c0(*param_1,param_1[1],&local_18,local_30);
  iVar2 = local_14 + -1;
  local_8 = param_2 + (local_18 == 0x2d);
  FUN_100d25c0(local_8,param_3,(int)&local_18);
  if ((local_14 + -1 < -4) || ((int)param_3 <= local_14 + -1)) {
    FUN_100c3ce0(param_2,param_3,param_4,&local_18,'\x01');
  }
  else {
    pcVar1 = local_8;
    if (iVar2 < local_14 + -1) {
      do {
        local_8 = pcVar1;
        pcVar1 = local_8 + 1;
      } while (*local_8 != '\0');
      local_8[-1] = '\0';
      local_8 = local_8 + 1;
    }
    FUN_100c3ec0(param_2,param_3,&local_18,'\x01');
  }
  return;
}

/* 100c4180  FUN_100c4180  (55 bytes)
 * undefined FUN_100c4180(void)
 * called by: FUN_100c5500
 */
void FUN_100c4180(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1028b6e0);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1028b6d0);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1028b6c0);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1028b6a0);
  return;
}

/* 100c41c0  FUN_100c41c0  (159 bytes)
 * undefined FUN_100c41c0(void)
 * called by: FUN_100c5590
 */
void FUN_100c41c0(void)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 0x30; local_8 = local_8 + 1) {
    if ((((*(int *)(&DAT_1028b69c + local_8 * 4) != 0) && (local_8 != 0x11)) && (local_8 != 0xd)) &&
       ((local_8 != 9 && (local_8 != 1)))) {
      DeleteCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_1028b69c + local_8 * 4));
      __free_dbg(*(void **)(&DAT_1028b69c + local_8 * 4),2);
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1028b6c0);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1028b6d0);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1028b6e0);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1028b6a0);
  return;
}

/* 100c4260  FUN_100c4260  (151 bytes)
 * undefined FUN_100c4260(int param_1)
 * called by: FID_conflict:__realloc_dbg, FUN_100bb890, FUN_100bbb10, FUN_100bbdd0, FUN_100be630, FUN_100bf600, FUN_100bf7b0, FUN_100bf940, FUN_100bfd20, FUN_100c00a0, FUN_100c0380, FUN_100c1590, ... (46 total)
 */
void __cdecl FUN_100c4260(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (*(int *)(&DAT_1028b69c + param_1 * 4) == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)__malloc_dbg(0x18,2,0x10279908,0xe1);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_100c4260(0x11);
    if (*(int *)(&DAT_1028b69c + param_1 * 4) == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *(LPCRITICAL_SECTION *)(&DAT_1028b69c + param_1 * 4) = lpCriticalSection;
    }
    else {
      __free_dbg(lpCriticalSection,2);
    }
    FUN_100c4300(0x11);
  }
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_1028b69c + param_1 * 4));
  return;
}

/* 100c4300  FUN_100c4300  (22 bytes)
 * undefined FUN_100c4300(int param_1)
 * called by: FUN_100bb890, FUN_100bbb10, FUN_100bbde0, FUN_100be68d, FUN_100beb33, FUN_100bf113, FUN_100bf1d2, FUN_100bf771, FUN_100bf86d, FUN_100bfcb5, FUN_100bfdad, FUN_100c0056, ... (52 total)
 */
void __cdecl FUN_100c4300(int param_1)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_1028b69c + param_1 * 4));
  return;
}

/* 100c4320  FUN_100c4320  (26 bytes)
 * undefined FUN_100c4320(LPCSTR param_1)
 */
void __cdecl FUN_100c4320(LPCSTR param_1)

{
  FatalAppExitA(0,param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(0xff);
}

/* 100c4340  FUN_100c4340  (123 bytes)
 * undefined FUN_100c4340(undefined * param_1)
 * called by: FUN_100bb890, FUN_100bf1f0, FUN_100c9830
 */
void FUN_100c4340(undefined *param_1)

{
  int iStack_2c;
  byte_conflict *pbStack_28;
  uint uStack_24;
  uint *local_20;
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10279910;
  pcStack_10 = FUN_100c9368;
  pvStack_14 = ExceptionList;
  if (param_1 != (undefined *)0x0) {
    if (DAT_103222cc == 3) {
      ExceptionList = &pvStack_14;
      FUN_100c4260(9);
      local_8 = 0;
      local_20 = (uint *)FUN_100c9fa0((int)param_1);
      if (local_20 != (uint *)0x0) {
        FUN_100ca060(local_20,(int)param_1);
      }
      local_8 = 0xffffffff;
      FUN_100c43bb();
      FUN_100c43c6();
      return;
    }
    if (DAT_103222cc == 2) {
      ExceptionList = &pvStack_14;
      FUN_100c4260(9);
      local_8 = 1;
      pbStack_28 = (byte_conflict *)FUN_100cbfc0(param_1,&iStack_2c,&uStack_24);
      if (pbStack_28 != (byte_conflict *)0x0) {
        FUN_100cc050(iStack_2c,uStack_24,pbStack_28);
      }
      local_8 = 0xffffffff;
      FUN_100c443d();
      FUN_100c4448();
      return;
    }
    ExceptionList = &pvStack_14;
    HeapFree(DAT_103222bc,0,param_1);
  }
  ExceptionList = pvStack_14;
  return;
}

/* 100c43bb  FUN_100c43bb  (11 bytes)
 * undefined FUN_100c43bb(void)
 * called by: FUN_100c4340
 */
void FUN_100c43bb(void)

{
  FUN_100c4300(9);
  return;
}

/* 100c43c6  FUN_100c43c6  (30 bytes)
 * undefined FUN_100c43c6(void)
 * called by: FUN_100c4340
 */
void FUN_100c43c6(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    HeapFree(DAT_103222bc,0,*(LPVOID *)(unaff_EBP + 8));
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return;
}

/* 100c443d  FUN_100c443d  (11 bytes)
 * undefined FUN_100c443d(void)
 */
void FUN_100c443d(void)

{
  FUN_100c4300(9);
  return;
}

/* 100c4448  FUN_100c4448  (43 bytes)
 * undefined FUN_100c4448(void)
 */
void FUN_100c4448(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x24) == 0) {
    HeapFree(DAT_103222bc,0,*(LPVOID *)(unaff_EBP + 8));
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return;
}

/* 100c4594  FUN_100c4594  (7 bytes)
 * undefined FUN_100c4594()
 */
float10 FUN_100c4594(void)

{
  return (float10)0;
}

/* 100c45cd  FUN_100c45cd  (42 bytes)
 * undefined FUN_100c45cd()
 */
float10 FUN_100c45cd(void)

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

/* 100c45f7  FUN_100c45f7  (63 bytes)
 * undefined FUN_100c45f7()
 */
float10 FUN_100c45f7(void)

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
      goto LAB_100c4633;
    }
  }
  *(undefined1 *)(unaff_EBP + -0x90) = 1;
LAB_100c4633:
  return fVar2 + in_ST1;
}

/* 100c4636  FUN_100c4636  (29 bytes)
 * undefined FUN_100c4636()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unkbyte10 FUN_100c4636(void)

{
  int unaff_EBP;
  unkbyte10 Var1;
  
  Var1 = _DAT_1028b760;
  if (*(char *)(unaff_EBP + -0x90) < '\x01') {
    *(undefined1 *)(unaff_EBP + -0x90) = 1;
  }
  return Var1;
}

/* 100c4653  FUN_100c4653  (7 bytes)
 * undefined FUN_100c4653(void)
 * called by: FUN_100cd4c2
 */
void FUN_100c4653(void)

{
  return;
}

/* 100c4660  FUN_100c4660  (23 bytes)
 * float10 FUN_100c4660(undefined4 param_1, undefined4 param_2, undefined2 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
 * called by: FUN_100c1289, FUN_100c47a9
 */
float10 __fastcall
FUN_100c4660(char *param_1,uint param_2,undefined2 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float10 in_ST0;
  _exception local_24;
  
  local_24.arg2._0_4_ = param_7;
  local_24.arg2._4_4_ = param_8;
  local_24.retval = (double)in_ST0;
  local_24.arg1._0_4_ = param_5;
  local_24.arg1._4_4_ = param_6;
  local_24.name = param_1;
  FUN_100d28c0(param_2,&local_24,&param_3);
  return (float10)local_24.retval;
}

/* 100c46c0  FUN_100c46c0  (21 bytes)
 * undefined1[10] FUN_100c46c0(void)
 * called by: FUN_100c1289
 */
undefined1  [10] FUN_100c46c0(void)

{
  float10 in_ST0;
  float10 fVar1;
  undefined1 auVar2 [10];
  
  fVar1 = (float10)f2xm1(-(ROUND(in_ST0) - in_ST0));
  auVar2 = (undefined1  [10])fscale((float10)1 + fVar1,ROUND(in_ST0));
  return auVar2;
}

/* 100c46d5  FUN_100c46d5  (23 bytes)
 * undefined FUN_100c46d5(void)
 * called by: FUN_100bbfed, FUN_100c1289, FUN_100c14ad
 */
void FUN_100c46d5(void)

{
  return;
}

/* 100c46ec  FUN_100c46ec  (25 bytes)
 * undefined4 FUN_100c46ec(void)
 * called by: FUN_100bbfed, FUN_100be28d, FUN_100be33d, FUN_100c14ad
 */
undefined4 FUN_100c46ec(void)

{
  uint in_EAX;
  
  if ((in_EAX & 0x80000) != 0) {
    return 7;
  }
  return 1;
}

/* 100c4748  FUN_100c4748  (22 bytes)
 * uint FUN_100c4748(undefined4 param_1, uint param_2)
 * called by: FUN_100bbfd0, FUN_100be270, FUN_100be320, FUN_100c1490
 */
uint __cdecl FUN_100c4748(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return param_2 & 0x7ff00000;
  }
  return param_2;
}

/* 100c475e  FUN_100c475e  (13 bytes)
 * undefined FUN_100c475e(void)
 * called by: FUN_100c1289
 */
void FUN_100c475e(void)

{
  return;
}

/* 100c47a9  FUN_100c47a9  (163 bytes)
 * undefined FUN_100c47a9(undefined4 param_1, uint param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 * called by: FUN_100c1289
 */
void __fastcall
FUN_100c47a9(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
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
    FUN_100c4660(param_1,0x1d,unaff_retaddr,param_3,param_4,param_5,param_6,param_7);
    return;
  }
  __startOneArgErrorHandling(param_1,param_2,unaff_retaddr,param_3,param_4,param_5);
  return;
}

/* 100c4850  FUN_100c4850  (239 bytes)
 * undefined4 FUN_100c4850(EHExceptionRecord * param_1, EHRegistrationNode * param_2, _CONTEXT * param_3, void * param_4, _s_FuncInfo * param_5, int param_6, EHRegistrationNode * param_7, char param_8)
 * called by: FID_conflict:___CxxFrameHandler3, FUN_100bc6b0, FUN_100bc7c0
 */
undefined4 __cdecl
FUN_100c4850(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
            _s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7,char param_8)

{
  undefined4 uVar1;
  
  if (param_5->magicNumber_and_bbtFlags == 0x19930520) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_100c5860();
  }
  if ((*(uint *)(param_1 + 4) & 0x66) == 0) {
    if (param_5->nTryBlocks != 0) {
      if (((*(int *)param_1 == -0x1f928c9d) && (0x19930520 < *(uint *)(param_1 + 0x14))) &&
         (*(code **)(*(int *)(param_1 + 0x1c) + 8) != (code *)0x0)) {
        uVar1 = (**(code **)(*(int *)(param_1 + 0x1c) + 8))
                          (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar1);
        return uVar1;
      }
      FUN_100c4940(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
    }
  }
  else if ((param_5->maxState != 0) && (param_6 == 0)) {
    FUN_100c4dc0((int)param_2,param_4,(int)param_5,-1);
  }
  return 1;
}

/* 100c4940  FUN_100c4940  (672 bytes)
 * undefined FUN_100c4940(EHExceptionRecord * param_1, EHRegistrationNode * param_2, _CONTEXT * param_3, void * param_4, _s_FuncInfo * param_5, char param_6, int param_7, EHRegistrationNode * param_8)
 * called by: FUN_100c4850
 */
void __cdecl
FUN_100c4940(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
            _s_FuncInfo *param_5,char param_6,int param_7,EHRegistrationNode *param_8)

{
  bool bVar1;
  DWORD *pDVar2;
  undefined3 extraout_var;
  int iVar3;
  int local_28;
  int local_24;
  _s_HandlerType *local_20;
  undefined4 *local_1c;
  uint local_18;
  _s_TryBlockMapEntry *local_14;
  uint local_10;
  uchar local_c;
  int local_8;
  
  local_c = '\0';
  local_8 = *(int *)(param_2 + 8);
  if ((local_8 < -1) || (param_5->maxState <= local_8)) {
    FUN_100c5860();
  }
  if ((((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
      (*(int *)(param_1 + 0x14) == 0x19930520)) && (*(int *)(param_1 + 0x1c) == 0)) {
    pDVar2 = FUN_100c55e0();
    if (pDVar2[0x1b] == 0) {
      return;
    }
    pDVar2 = FUN_100c55e0();
    param_1 = (EHExceptionRecord *)pDVar2[0x1b];
    pDVar2 = FUN_100c55e0();
    param_3 = (_CONTEXT *)pDVar2[0x1c];
    local_c = '\x01';
    bVar1 = FUN_100d2ae0(param_1,1);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      FUN_100c5860();
    }
    if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
       ((*(int *)(param_1 + 0x14) == 0x19930520 && (*(int *)(param_1 + 0x1c) == 0)))) {
      FUN_100c5860();
    }
  }
  if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
     (*(int *)(param_1 + 0x14) == 0x19930520)) {
    local_14 = (_s_TryBlockMapEntry *)FUN_100bc850((int)param_5,param_7,local_8,&local_18,&local_10)
    ;
    for (; local_18 < local_10; local_18 = local_18 + 1) {
      if ((local_14->tryLow <= local_8) && (local_8 <= local_14->tryHigh)) {
        local_20 = local_14->pHandlerArray;
        for (local_28 = local_14->nCatches; 0 < local_28; local_28 = local_28 + -1) {
          local_1c = *(undefined4 **)(*(int *)(param_1 + 0x1c) + 0xc);
          for (local_24 = **(int **)(*(int *)(param_1 + 0x1c) + 0xc); local_1c = local_1c + 1,
              0 < local_24; local_24 = local_24 + -1) {
            iVar3 = FUN_100c4d00(&local_20->adjectives,(uint *)*local_1c,*(uint **)(param_1 + 0x1c))
            ;
            if (iVar3 != 0) {
              CatchIt(param_1,param_2,param_3,param_4,param_5,local_20,(_s_CatchableType *)*local_1c
                      ,local_14,param_7,param_8,local_c);
              goto LAB_100c4a82;
            }
          }
          local_20 = local_20 + 1;
        }
      }
LAB_100c4a82:
      local_14 = local_14 + 1;
    }
    if (param_6 != '\0') {
      ___DestructExceptionObject((int)param_1);
    }
  }
  else if (param_6 == '\0') {
    FUN_100c4be0(param_1,param_2,param_3,param_4,param_5,local_8,param_7,param_8);
  }
  else {
    FUN_100c57b0();
  }
  return;
}

/* 100c4be0  FUN_100c4be0  (277 bytes)
 * undefined FUN_100c4be0(EHExceptionRecord * param_1, EHRegistrationNode * param_2, _CONTEXT * param_3, void * param_4, _s_FuncInfo * param_5, int param_6, int param_7, EHRegistrationNode * param_8)
 * called by: FUN_100c4940
 */
void __cdecl
FUN_100c4be0(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
            _s_FuncInfo *param_5,int param_6,int param_7,EHRegistrationNode *param_8)

{
  DWORD *pDVar1;
  int iVar2;
  uint local_10;
  _s_TryBlockMapEntry *local_c;
  uint local_8;
  
  pDVar1 = FUN_100c55e0();
  if ((pDVar1[0x1a] == 0) ||
     (iVar2 = FUN_100bc6f0((undefined4 *)param_1,param_2,param_3,param_4,param_5,param_7,param_8),
     iVar2 == 0)) {
    local_c = (_s_TryBlockMapEntry *)FUN_100bc850((int)param_5,param_7,param_6,&local_10,&local_8);
    for (; local_10 < local_8; local_10 = local_10 + 1) {
      if (((local_c->tryLow <= param_6) && (param_6 <= local_c->tryHigh)) &&
         ((local_c->pHandlerArray[local_c->nCatches + -1].pType == (TypeDescriptor *)0x0 ||
          (*(char *)&local_c->pHandlerArray[local_c->nCatches + -1].pType[1].pVFTable == '\0')))) {
        CatchIt(param_1,param_2,param_3,param_4,param_5,
                local_c->pHandlerArray + local_c->nCatches + -1,(_s_CatchableType *)0x0,local_c,
                param_7,param_8,'\x01');
      }
      local_c = local_c + 1;
    }
  }
  return;
}

/* 100c4d00  FUN_100c4d00  (182 bytes)
 * undefined4 FUN_100c4d00(uint * param_1, uint * param_2, uint * param_3)
 * called by: FUN_100c4940
 */
undefined4 __cdecl FUN_100c4d00(uint *param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  undefined4 local_8;
  
  if ((param_1[1] == 0) || (*(char *)(param_1[1] + 8) == '\0')) {
    local_8 = 1;
  }
  else if ((param_1[1] == param_2[1]) ||
          (iVar1 = _strcmp((char *)(param_1[1] + 8),(char *)(param_2[1] + 8)), iVar1 == 0)) {
    if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
        (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
       (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) {
      local_8 = 1;
    }
    else {
      local_8 = 0;
    }
  }
  else {
    local_8 = 0;
  }
  return local_8;
}

/* 100c4dc0  FUN_100c4dc0  (224 bytes)
 * undefined FUN_100c4dc0(int param_1, undefined4 param_2, int param_3, int param_4)
 * called by: CatchIt, FUN_100c4850, ___CxxLongjmpUnwind@4
 */
void __cdecl FUN_100c4dc0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int local_20;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10279978;
  pcStack_10 = FUN_100c9368;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  for (local_20 = *(int *)(param_1 + 8); local_8 = 0xffffffff, local_20 != param_4;
      local_20 = *(int *)(*(int *)(param_3 + 8) + local_20 * 8)) {
    if ((local_20 < 0) || (*(int *)(param_3 + 4) <= local_20)) {
      FUN_100c5860();
    }
    local_8 = 0;
    if (*(int *)(*(int *)(param_3 + 8) + 4 + local_20 * 8) != 0) {
      __CallSettingFrame_12(*(undefined4 *)(*(int *)(param_3 + 8) + 4 + local_20 * 8),param_1,0x103)
      ;
    }
  }
  if (local_20 != param_4) {
    FUN_100c5860();
  }
  *(int *)(param_1 + 8) = local_20;
  ExceptionList = local_14;
  return;
}

/* 100c4e59  FUN_100c4e59  (13 bytes)
 * undefined FUN_100c4e59()
 */
void FUN_100c4e59(void)

{
  int unaff_EBP;
  
  ArrayUnwindFilter(*(_EXCEPTION_POINTERS **)(unaff_EBP + -0x14));
  return;
}

/* 100c4fb0  FUN_100c4fb0  (172 bytes)
 * undefined FUN_100c4fb0(DWORD param_1, undefined4 param_2, DWORD param_3, undefined4 param_4, undefined4 param_5, int param_6, int param_7)
 * called by: CatchIt
 */
void FUN_100c4fb0(DWORD param_1,undefined4 param_2,DWORD param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,int param_7)

{
  DWORD *pDVar1;
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10279988;
  pcStack_10 = FUN_100c9368;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_100c55e0();
  FUN_100c55e0();
  pDVar1 = FUN_100c55e0();
  pDVar1[0x1b] = param_1;
  pDVar1 = FUN_100c55e0();
  pDVar1[0x1c] = param_3;
  local_8 = 1;
  FUN_100bc640(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_100c508d();
  FUN_100c50eb();
  return;
}

/* 100c504e  FUN_100c504e  (13 bytes)
 * undefined FUN_100c504e()
 */
void FUN_100c504e(void)

{
  int unaff_EBP;
  
  FUN_100c5100(*(int **)(unaff_EBP + -0x14));
  return;
}

/* 100c505b  FUN_100c505b  (36 bytes)
 * undefined FUN_100c505b()
 */
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

undefined4 FUN_100c505b(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(iVar1 + -4) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(int *)(iVar1 + -8) = unaff_EBP + -0x10;
  *(undefined4 *)(iVar1 + -0xc) = 0x100c5077;
  __local_unwind2(*(int *)(iVar1 + -8),*(int *)(iVar1 + -4));
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return *(undefined4 *)(unaff_EBP + -0x30);
}

/* 100c508d  FUN_100c508d  (94 bytes)
 * undefined FUN_100c508d(void)
 * called by: FUN_100c4fb0
 */
void FUN_100c508d(void)

{
  DWORD *pDVar1;
  int unaff_EBP;
  
  *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + -4) = *(undefined4 *)(unaff_EBP + -0x28);
  pDVar1 = FUN_100c55e0();
  pDVar1[0x1b] = *(DWORD *)(unaff_EBP + -0x1c);
  pDVar1 = FUN_100c55e0();
  pDVar1[0x1c] = *(DWORD *)(unaff_EBP + -0x20);
  if ((((**(int **)(unaff_EBP + 8) == -0x1f928c9d) &&
       (*(int *)(*(int *)(unaff_EBP + 8) + 0x10) == 3)) &&
      (*(int *)(*(int *)(unaff_EBP + 8) + 0x14) == 0x19930520)) &&
     ((*(int *)(unaff_EBP + -0x24) == 0 && (*(int *)(unaff_EBP + -0x2c) != 0)))) {
    __abnormal_termination();
    ___DestructExceptionObject(*(int *)(unaff_EBP + 8));
  }
  return;
}

/* 100c50eb  FUN_100c50eb  (20 bytes)
 * undefined4 FUN_100c50eb(void)
 * called by: FUN_100c4fb0
 */
undefined4 FUN_100c50eb(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return *(undefined4 *)(unaff_EBP + -0x2c);
}

/* 100c5100  FUN_100c5100  (66 bytes)
 * undefined4 FUN_100c5100(int * param_1)
 * called by: FUN_100c504e
 */
undefined4 __cdecl FUN_100c5100(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)*param_1;
  if ((((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) &&
     (piVar1[7] == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

/* 100c5150  FUN_100c5150  (621 bytes)
 * undefined FUN_100c5150(int param_1, int param_2, uint * param_3, uint * param_4)
 * called by: CatchIt
 */
void __cdecl FUN_100c5150(int param_1,int param_2,uint *param_3,uint *param_4)

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
  uint uVar5;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_102799a0;
  pcStack_10 = FUN_100c9368;
  local_14 = ExceptionList;
  if (((param_3[1] != 0) && (*(char *)(param_3[1] + 8) != '\0')) && (param_3[2] != 0)) {
    piVar1 = (int *)(param_2 + 0xc + param_3[2]);
    local_8 = 0;
    if ((*param_3 & 8) == 0) {
      if ((*param_4 & 1) == 0) {
        if (param_4[6] == 0) {
          ExceptionList = &local_14;
          bVar2 = FUN_100d2ae0(*(void **)(param_1 + 0x18),1);
          if ((CONCAT31(extraout_var_03,bVar2) == 0) ||
             (bVar2 = FUN_100d2b10(piVar1,1), CONCAT31(extraout_var_04,bVar2) == 0)) {
            FUN_100c5860();
          }
          else {
            uVar5 = param_4[5];
            puVar4 = (undefined4 *)
                     FID_conflict____AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 2));
            FUN_100bdc80(piVar1,puVar4,uVar5);
          }
        }
        else {
          ExceptionList = &local_14;
          bVar2 = FUN_100d2ae0(*(void **)(param_1 + 0x18),1);
          if (((CONCAT31(extraout_var_05,bVar2) == 0) ||
              (bVar2 = FUN_100d2b10(piVar1,1), CONCAT31(extraout_var_06,bVar2) == 0)) ||
             (iVar3 = _ValidateExecute((_func_int *)param_4[6]), iVar3 == 0)) {
            FUN_100c5860();
          }
          else if ((*param_4 & 4) == 0) {
            FID_conflict____AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 2));
            FUN_100bc550(piVar1,(undefined *)param_4[6]);
          }
          else {
            FID_conflict____AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 2));
            FUN_100bc560(piVar1,(undefined *)param_4[6]);
          }
        }
      }
      else {
        ExceptionList = &local_14;
        bVar2 = FUN_100d2ae0(*(void **)(param_1 + 0x18),1);
        if ((CONCAT31(extraout_var_01,bVar2) == 0) ||
           (bVar2 = FUN_100d2b10(piVar1,1), CONCAT31(extraout_var_02,bVar2) == 0)) {
          FUN_100c5860();
        }
        else {
          FUN_100bdc80(piVar1,*(undefined4 **)(param_1 + 0x18),param_4[5]);
          if ((param_4[5] == 4) && (*piVar1 != 0)) {
            iVar3 = FID_conflict____AdjustPointer(*piVar1,(int *)(param_4 + 2));
            *piVar1 = iVar3;
          }
        }
      }
    }
    else {
      ExceptionList = &local_14;
      bVar2 = FUN_100d2ae0(*(void **)(param_1 + 0x18),1);
      if ((CONCAT31(extraout_var,bVar2) == 0) ||
         (bVar2 = FUN_100d2b10(piVar1,1), CONCAT31(extraout_var_00,bVar2) == 0)) {
        FUN_100c5860();
      }
      else {
        *piVar1 = *(int *)(param_1 + 0x18);
        iVar3 = FID_conflict____AdjustPointer(*piVar1,(int *)(param_4 + 2));
        *piVar1 = iVar3;
      }
    }
  }
  ExceptionList = local_14;
  return;
}

/* 100c53ac  FUN_100c53ac  (6 bytes)
 * undefined FUN_100c53ac()
 */
undefined4 FUN_100c53ac(void)

{
  return 1;
}

/* 100c542e  FUN_100c542e  (15 bytes)
 * undefined FUN_100c542e()
 */
bool FUN_100c542e(void)

{
  int unaff_EBP;
  
  return (*(uint *)(unaff_EBP + 0xc) & 0xff) != 0;
}

/* 100c5500  FUN_100c5500  (130 bytes)
 * undefined4 FUN_100c5500(void)
 * called by: FUN_100c1e30
 */
undefined4 FUN_100c5500(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_100c4180();
  DAT_1028b7a0 = TlsAlloc();
  if (((DAT_1028b7a0 != 0xffffffff) &&
      (lpTlsValue = (DWORD *)__calloc_dbg(1,0x74,2,"tidtable.c",0x61), lpTlsValue != (DWORD *)0x0))
     && (BVar1 = TlsSetValue(DAT_1028b7a0,lpTlsValue), BVar1 != 0)) {
    FUN_100c55c0((int)lpTlsValue);
    DVar2 = GetCurrentThreadId();
    *lpTlsValue = DVar2;
    lpTlsValue[1] = 0xffffffff;
    return 1;
  }
  return 0;
}

/* 100c5590  FUN_100c5590  (41 bytes)
 * undefined FUN_100c5590(void)
 * called by: FUN_100c1e30
 */
void FUN_100c5590(void)

{
  FUN_100c41c0();
  if (DAT_1028b7a0 != 0xffffffff) {
    TlsFree(DAT_1028b7a0);
    DAT_1028b7a0 = 0xffffffff;
  }
  return;
}

/* 100c55c0  FUN_100c55c0  (25 bytes)
 * undefined FUN_100c55c0(int param_1)
 * called by: FUN_100c5500, FUN_100c55e0
 */
void __cdecl FUN_100c55c0(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_1028e150;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}

/* 100c55e0  FUN_100c55e0  (152 bytes)
 * DWORD * FUN_100c55e0(void)
 * called by: FUN_100bc6f0, FUN_100be3d0, FUN_100c4940, FUN_100c4be0, FUN_100c4fb0, FUN_100c508d, FUN_100c57b0, FUN_100c5840, FUN_100c6040, FUN_100c6050, FUN_100c7490, FUN_100c7760, ... (16 total)
 */
DWORD * FUN_100c55e0(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *local_8;
  
  dwErrCode = GetLastError();
  local_8 = TlsGetValue(DAT_1028b7a0);
  if (local_8 == (DWORD *)0x0) {
    local_8 = (DWORD *)__calloc_dbg(1,0x74,2,"tidtable.c",0xe7);
    if (local_8 != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1028b7a0,local_8);
      if (BVar1 != 0) {
        FUN_100c55c0((int)local_8);
        DVar2 = GetCurrentThreadId();
        *local_8 = DVar2;
        local_8[1] = 0xffffffff;
        goto LAB_100c5667;
      }
    }
    __amsg_exit(0x10);
  }
LAB_100c5667:
  SetLastError(dwErrCode);
  return local_8;
}

/* 100c5680  FUN_100c5680  (263 bytes)
 * undefined FUN_100c5680(LPVOID param_1)
 * called by: FUN_100c1e30
 */
void __cdecl FUN_100c5680(LPVOID param_1)

{
  if (DAT_1028b7a0 != 0xffffffff) {
    if (param_1 == (LPVOID)0x0) {
      param_1 = TlsGetValue(DAT_1028b7a0);
    }
    if (param_1 != (LPVOID)0x0) {
      if (*(int *)((int)param_1 + 0x24) != 0) {
        __free_dbg(*(void **)((int)param_1 + 0x24),2);
      }
      if (*(int *)((int)param_1 + 0x28) != 0) {
        __free_dbg(*(void **)((int)param_1 + 0x28),2);
      }
      if (*(int *)((int)param_1 + 0x30) != 0) {
        __free_dbg(*(void **)((int)param_1 + 0x30),2);
      }
      if (*(int *)((int)param_1 + 0x38) != 0) {
        __free_dbg(*(void **)((int)param_1 + 0x38),2);
      }
      if (*(int *)((int)param_1 + 0x40) != 0) {
        __free_dbg(*(void **)((int)param_1 + 0x40),2);
      }
      if (*(int *)((int)param_1 + 0x44) != 0) {
        __free_dbg(*(void **)((int)param_1 + 0x44),2);
      }
      if (*(undefined **)((int)param_1 + 0x50) != &DAT_1028e150) {
        __free_dbg(*(void **)((int)param_1 + 0x50),2);
      }
      __free_dbg(param_1,2);
    }
    TlsSetValue(DAT_1028b7a0,(LPVOID)0x0);
  }
  return;
}

/* 100c5790  FUN_100c5790  (11 bytes)
 * undefined FUN_100c5790(void)
 */
void FUN_100c5790(void)

{
  GetCurrentThreadId();
  return;
}

/* 100c57a0  FUN_100c57a0  (11 bytes)
 * undefined FUN_100c57a0(void)
 */
void FUN_100c57a0(void)

{
  GetCurrentThread();
  return;
}

/* 100c57b0  FUN_100c57b0  (92 bytes)
 * undefined FUN_100c57b0(void)
 * called by: ArrayUnwindFilter, FUN_100c4940, FUN_100c5840, FUN_100c5860, FUN_100c58ca, FUN_100d2a40
 */
void FUN_100c57b0(void)

{
  DWORD *pDVar1;
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_102799c8;
  pcStack_10 = FUN_100c9368;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  pDVar1 = FUN_100c55e0();
  if (pDVar1[0x18] != 0) {
    local_8 = 1;
    pDVar1 = FUN_100c55e0();
    (*(code *)pDVar1[0x18])();
  }
  local_8 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  _abort();
}

/* 100c5800  FUN_100c5800  (6 bytes)
 * undefined FUN_100c5800()
 */
undefined4 FUN_100c5800(void)

{
  return 1;
}

/* 100c5840  FUN_100c5840  (29 bytes)
 * undefined FUN_100c5840(void)
 */
void FUN_100c5840(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100c55e0();
  if (pDVar1[0x19] != 0) {
    pDVar1 = FUN_100c55e0();
    (*(code *)pDVar1[0x19])();
  }
  FUN_100c57b0();
  return;
}

/* 100c5860  FUN_100c5860  (90 bytes)
 * undefined FUN_100c5860(void)
 * called by: FUN_100bc850, FUN_100c4850, FUN_100c4940, FUN_100c4dc0, FUN_100c5150
 */
void FUN_100c5860(void)

{
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_102799e0;
  pcStack_10 = FUN_100c9368;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (PTR_FUN_1028b7a4 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*(code *)PTR_FUN_1028b7a4)();
  }
  local_8 = 0xffffffff;
  FUN_100c58ca();
  FUN_100c58d0();
  return;
}

/* 100c58ac  FUN_100c58ac  (6 bytes)
 * undefined FUN_100c58ac()
 */
undefined4 FUN_100c58ac(void)

{
  return 1;
}

/* 100c58ca  FUN_100c58ca  (6 bytes)
 * undefined FUN_100c58ca(void)
 * called by: FUN_100c5860
 */
void FUN_100c58ca(void)

{
  FUN_100c57b0();
  return;
}

/* 100c58d0  FUN_100c58d0  (17 bytes)
 * undefined FUN_100c58d0(void)
 * called by: FUN_100c5860
 */
void FUN_100c58d0(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return;
}

/* 100c58f0  FUN_100c58f0  (300 bytes)
 * undefined FUN_100c58f0(void)
 */
void FUN_100c58f0(void)

{
  uint local_8;
  
  if (DAT_10323780 == 0) {
    DAT_10323780 = 0x200;
  }
  else if (DAT_10323780 < 0x14) {
    DAT_10323780 = 0x14;
  }
  DAT_10322440 = __calloc_dbg(DAT_10323780,4,2,"_file.c",0x83);
  if (DAT_10322440 == (undefined1 *)0x0) {
    DAT_10323780 = 0x14;
    DAT_10322440 = __calloc_dbg(0x14,4,2,"_file.c",0x86);
    if (DAT_10322440 == (undefined1 *)0x0) {
      __amsg_exit(0x1a);
    }
  }
  for (local_8 = 0; (int)local_8 < 0x14; local_8 = local_8 + 1) {
    *(undefined ***)(DAT_10322440 + local_8 * 4) = &PTR_DAT_1028b7a8 + local_8 * 8;
  }
  for (local_8 = 0; (int)local_8 < 3; local_8 = local_8 + 1) {
    if ((*(int *)((&DAT_10322300)[(int)local_8 >> 5] + (local_8 & 0x1f) * 0x24) == -1) ||
       (*(int *)((&DAT_10322300)[(int)local_8 >> 5] + (local_8 & 0x1f) * 0x24) == 0)) {
      *(undefined4 *)(&DAT_1028b7b8 + local_8 * 0x20) = 0xffffffff;
    }
  }
  return;
}

/* 100c5a20  FUN_100c5a20  (26 bytes)
 * undefined FUN_100c5a20(void)
 */
void FUN_100c5a20(void)

{
  FUN_100c5e50();
  if (DAT_10321c54 != '\0') {
    FUN_100d2d90();
  }
  return;
}

/* 100c5a40  FUN_100c5a40  (61 bytes)
 * undefined FUN_100c5a40(undefined * * param_1)
 * called by: FUN_100bc9d0, FUN_100bcb20, FUN_100bce30, FUN_100bcfd0, FUN_100bd400, FUN_100bdbb0, FUN_100c5cf0, FUN_100c7dd0, FUN_100d7e60
 */
void __cdecl FUN_100c5a40(undefined **param_1)

{
  if ((param_1 < &PTR_DAT_1028b7a8) || (&DAT_1028ba08 < param_1)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  else {
    FUN_100c4260(((int)(param_1 + -0x40a2dea) >> 5) + 0x1c);
  }
  return;
}

/* 100c5a80  FUN_100c5a80  (41 bytes)
 * undefined FUN_100c5a80(int param_1, int param_2)
 * called by: FUN_100c5e60, FUN_100c6fe0
 */
void __cdecl FUN_100c5a80(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_100c4260(param_1 + 0x1c);
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  }
  return;
}

/* 100c5ab0  FUN_100c5ab0  (61 bytes)
 * undefined FUN_100c5ab0(undefined * * param_1)
 * called by: FUN_100bc9d0, FUN_100bcb20, FUN_100bce30, FUN_100bcfd0, FUN_100bd1e0, FUN_100bd400, FUN_100bdbb0, FUN_100c5cf0, FUN_100c7dd0, FUN_100d7e60
 */
void __cdecl FUN_100c5ab0(undefined **param_1)

{
  if ((param_1 < &PTR_DAT_1028b7a8) || (&DAT_1028ba08 < param_1)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  else {
    FUN_100c4300(((int)(param_1 + -0x40a2dea) >> 5) + 0x1c);
  }
  return;
}

/* 100c5af0  FUN_100c5af0  (41 bytes)
 * undefined FUN_100c5af0(int param_1, int param_2)
 * called by: FUN_100c5e60, FUN_100c6fe0
 */
void __cdecl FUN_100c5af0(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_100c4300(param_1 + 0x1c);
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  }
  return;
}

