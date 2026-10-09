/* ts_i386.so - unnamed_00066320 (35 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 00066320  FUN_00066320  (12 bytes)
 * undefined FUN_00066320()
 * called by: FUN_00066a06, FUN_00067406, FUN_00067806, FUN_00067e06, FUN_00068006, FUN_00068906, FUN_00068e06, FUN_00069b06, FUN_00069e06, FUN_0006a006, FUN_0006a806
 */
void FUN_00066320(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}

/* 00066a06  FUN_00066a06  (10 bytes)
 * undefined FUN_00066a06()
 */
void FUN_00066a06(void)

{
  FUN_00066320();
  return;
}

/* 00067406  FUN_00067406  (10 bytes)
 * undefined FUN_00067406()
 */
void FUN_00067406(void)

{
  FUN_00066320();
  return;
}

/* 00067806  FUN_00067806  (10 bytes)
 * undefined FUN_00067806()
 */
void FUN_00067806(void)

{
  FUN_00066320();
  return;
}

/* 00067e06  FUN_00067e06  (10 bytes)
 * undefined FUN_00067e06()
 */
void FUN_00067e06(void)

{
  FUN_00066320();
  return;
}

/* 00068006  FUN_00068006  (10 bytes)
 * undefined FUN_00068006()
 */
void FUN_00068006(void)

{
  FUN_00066320();
  return;
}

/* 00068906  FUN_00068906  (10 bytes)
 * undefined FUN_00068906()
 */
void FUN_00068906(void)

{
  FUN_00066320();
  return;
}

/* 00068e06  FUN_00068e06  (10 bytes)
 * undefined FUN_00068e06()
 */
void FUN_00068e06(void)

{
  FUN_00066320();
  return;
}

/* 00069b06  FUN_00069b06  (10 bytes)
 * undefined FUN_00069b06()
 */
void FUN_00069b06(void)

{
  FUN_00066320();
  return;
}

/* 00069e06  FUN_00069e06  (10 bytes)
 * undefined FUN_00069e06()
 */
void FUN_00069e06(void)

{
  FUN_00066320();
  return;
}

/* 0006a006  FUN_0006a006  (10 bytes)
 * undefined FUN_0006a006()
 */
void FUN_0006a006(void)

{
  FUN_00066320();
  return;
}

/* 0006a806  FUN_0006a806  (10 bytes)
 * undefined FUN_0006a806()
 */
void FUN_0006a806(void)

{
  FUN_00066320();
  return;
}

/* 000ab019  FUN_000ab019  (67 bytes)
 * undefined FUN_000ab019()
 */
void FUN_000ab019(void)

{
  int unaff_retaddr;
  
  CSaveRestoreBuffer::~CSaveRestoreBuffer((CSaveRestoreBuffer *)&stack0x00000008,0);
  __rethrow(*(int *)(unaff_retaddr + 0xcc04f));
  terminate();
  return;
}

/* 000ab521  FUN_000ab521  (250 bytes)
 * undefined FUN_000ab521()
 */
void FUN_000ab521(void)

{
  int unaff_retaddr;
  
  CSaveRestoreBuffer::~CSaveRestoreBuffer((CSaveRestoreBuffer *)&stack0x00000030,0);
  __rethrow(*(int *)(unaff_retaddr + 0xcbb4b));
  __rethrow((int)&LRTH193);
  __rethrow((int)&LRTH193);
  CSaveRestoreBuffer::~CSaveRestoreBuffer((CSaveRestoreBuffer *)&stack0x00000034,0);
  __rethrow((int)&LRTH187);
  __rethrow((int)&LRTH187);
  __rethrow((int)&LRTH187);
  __rethrow((int)&LRTH187);
  terminate();
  return;
}

/* 000ab6ad  FUN_000ab6ad  (59 bytes)
 * undefined FUN_000ab6ad()
 */
void FUN_000ab6ad(int param_1,int param_2)

{
  int iVar1;
  int unaff_retaddr;
  CSaveRestoreBuffer aCStack_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined **ppuStack_1c;
  undefined4 uVar2;
  char *pcStack_4;
  
  uVar2 = 0;
  CSaveRestoreBuffer::~CSaveRestoreBuffer((CSaveRestoreBuffer *)&param_2,0);
  __rethrow(*(int *)(unaff_retaddr + 0xcb9c7));
  terminate();
  iVar1 = param_2;
  ppuStack_1c = &__DT_PLTGOT;
  CSaveRestoreBuffer::CSaveRestoreBuffer(aCStack_38,uVar2);
  uStack_34 = 0;
  uStack_30 = 1;
  CRestore::ReadFields((CRestore *)aCStack_38,pcStack_4,unaff_retaddr,param_1,iVar1);
  CSaveRestoreBuffer::~CSaveRestoreBuffer(aCStack_38,0);
  return;
}

/* 000ab74d  FUN_000ab74d  (59 bytes)
 * undefined FUN_000ab74d()
 */
void FUN_000ab74d(void)

{
  int iVar1;
  int unaff_retaddr;
  int iVar2;
  
  iVar2 = 0;
  CSaveRestoreBuffer::~CSaveRestoreBuffer((CSaveRestoreBuffer *)&stack0x00000000,0);
  __rethrow(*(int *)(unaff_retaddr + 0xcb92b));
  terminate();
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x7c);
  }
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x60) + 0x40))(iVar1);
  }
  return;
}

/* 000e8c5d  FUN_000e8c5d  (70 bytes)
 * undefined FUN_000e8c5d()
 */
void FUN_000e8c5d(void)

{
  int unaff_retaddr;
  
  CSaveRestoreBuffer::~CSaveRestoreBuffer((CSaveRestoreBuffer *)&stack0x0000002c,0);
  __rethrow(*(int *)(unaff_retaddr + 0x8e42f));
  terminate();
  return;
}

/* 000f4331  FUN_000f4331  (59 bytes)
 * undefined FUN_000f4331()
 */
void FUN_000f4331(void)

{
  int unaff_retaddr;
  CSaveRestoreBuffer aCStack_28 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined **ppuStack_14;
  undefined4 uVar1;
  
  uVar1 = 0;
  CSaveRestoreBuffer::~CSaveRestoreBuffer((CSaveRestoreBuffer *)&stack0x00000000,0);
  __rethrow(*(int *)(unaff_retaddr + 0x82d5f));
  terminate();
  ppuStack_14 = &__DT_PLTGOT;
  CSaveRestoreBuffer::CSaveRestoreBuffer(aCStack_28,uVar1);
  uStack_24 = 0;
  uStack_20 = 1;
  CGlobalState::Restore((CGlobalState *)&gGlobalState,(CRestore *)aCStack_28);
  CSaveRestoreBuffer::~CSaveRestoreBuffer(aCStack_28,0);
  return;
}

/* 000f43c1  FUN_000f43c1  (59 bytes)
 * undefined FUN_000f43c1()
 */
void FUN_000f43c1(void)

{
  int unaff_retaddr;
  
  CSaveRestoreBuffer::~CSaveRestoreBuffer((CSaveRestoreBuffer *)&stack0x00000000,0);
  __rethrow(*(int *)(unaff_retaddr + 0x82cd3));
  terminate();
  CGlobalState::ClearStates((CGlobalState *)&gGlobalState);
  gInitHUD = 1;
  return;
}

/* 001032ac  FUN_001032ac  (228 bytes)
 * undefined FUN_001032ac()
 */
undefined4 __regparm3 FUN_001032ac(undefined4 param_1,int param_2,undefined4 param_3)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  char cVar10;
  undefined3 uVar12;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char cVar13;
  byte bVar14;
  byte bVar15;
  undefined2 uVar16;
  char *unaff_EBX;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  int *unaff_EDI;
  byte in_CF;
  byte in_AF;
  byte bVar11;
  
  bVar14 = (byte)((uint)param_3 >> 8);
  cVar13 = (char)param_3;
  bVar6 = (byte)param_1;
  bVar2 = 9 < (bVar6 & 0xf) | in_AF;
  uVar12 = (undefined3)((uint)param_1 >> 8);
  cVar4 = bVar6 + bVar2 * '\x06' + (0x99 < bVar6 | in_CF) * '`';
  pcVar8 = (char *)(CONCAT31(uVar12,cVar4) + -0x6ffff8d6);
  cVar10 = (char)((uint)param_1 >> 8);
  *pcVar8 = *pcVar8 + cVar10;
  bVar5 = cVar4 - (char)*unaff_EDI;
  cVar4 = (char)((uint)unaff_EBX >> 8);
  *(char *)((int)unaff_EDI + 0x2a) = *(char *)((int)unaff_EDI + 0x2a) + cVar4;
  pcVar8 = (char *)(param_2 + 7 + unaff_EBP);
  *pcVar8 = *pcVar8 + bVar14;
  pcVar8 = (char *)(CONCAT31(uVar12,bVar5) + 0x2a);
  bVar15 = (byte)param_2;
  *pcVar8 = *pcVar8 + bVar15;
  bVar11 = cVar10 + cVar4;
  iVar7 = CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar11,bVar5));
  *unaff_EDI = *unaff_EDI - iVar7;
  pbVar1 = (byte *)(unaff_EBX + -0x64fff8d9);
  bVar6 = *pbVar1;
  *pbVar1 = *pbVar1 + (byte)unaff_EBX;
  bVar2 = 9 < (bVar5 & 0xf) | bVar2;
  uVar12 = (undefined3)((uint)iVar7 >> 8);
  bVar5 = bVar5 + bVar2 * '\x06' + (0x99 < bVar5 || CARRY1(bVar6,(byte)unaff_EBX)) * '`' + bVar15;
  pcVar8 = (char *)CONCAT31(uVar12,bVar5);
  *unaff_EDI = *unaff_EDI - (int)pcVar8;
  pcVar8[0x70000728] = pcVar8[0x70000728] + bVar11;
  *(byte *)unaff_EDI = (char)*unaff_EDI - bVar5;
  pcVar8[0x50000729] = pcVar8[0x50000729] + bVar15;
  *unaff_EDI = *unaff_EDI - (int)pcVar8;
  *unaff_EBX = *unaff_EBX + bVar14;
  *unaff_EDI = *unaff_EDI - (int)pcVar8;
  *pcVar8 = *pcVar8 + bVar5;
  *unaff_EDI = *unaff_EDI - (int)pcVar8;
  pbVar1 = (byte *)(pcVar8 + -0x5ffff8d9);
  bVar6 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar11;
  bVar2 = 9 < (bVar5 & 0xf) | bVar2;
  bVar5 = bVar5 + bVar2 * '\x06' + (0x99 < bVar5 || CARRY1(bVar6,bVar11)) * '`';
  pbVar1 = (byte *)(CONCAT31(uVar12,bVar5) + -0x5ffff8d9);
  bVar6 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar11;
  bVar2 = 9 < (bVar5 & 0xf) | bVar2;
  bVar5 = bVar5 + bVar2 * '\x06' + (0x99 < bVar5 || CARRY1(bVar6,bVar11)) * '`';
  pbVar1 = (byte *)(CONCAT31(uVar12,bVar5) + -0x5ffff8d9);
  bVar6 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar11;
  bVar2 = 9 < (bVar5 & 0xf) | bVar2;
  bVar5 = bVar5 + bVar2 * '\x06' + (0x99 < bVar5 || CARRY1(bVar6,bVar11)) * '`';
  pbVar1 = (byte *)(CONCAT31(uVar12,bVar5) + -0x5ffff8d9);
  bVar6 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar11;
  bVar2 = 9 < (bVar5 & 0xf) | bVar2;
  bVar5 = bVar5 + bVar2 * '\x06' + (0x99 < bVar5 || CARRY1(bVar6,bVar11)) * '`';
  pbVar1 = (byte *)(CONCAT31(uVar12,bVar5) + -0x5ffff8d9);
  bVar6 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar11;
  bVar2 = 9 < (bVar5 & 0xf) | bVar2;
  bVar5 = bVar5 + bVar2 * '\x06' + (0x99 < bVar5 || CARRY1(bVar6,bVar11)) * '`';
  pbVar1 = (byte *)(CONCAT31(uVar12,bVar5) + -0x5ffff8d9);
  bVar6 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar11;
  bVar2 = 9 < (bVar5 & 0xf) | bVar2;
  bVar5 = bVar5 + bVar2 * '\x06' + (0x99 < bVar5 || CARRY1(bVar6,bVar11)) * '`';
  pbVar1 = (byte *)(CONCAT31(uVar12,bVar5) + -0x5ffff8d9);
  bVar6 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar11;
  bVar2 = 9 < (bVar5 & 0xf) | bVar2;
  bVar5 = bVar5 + bVar2 * '\x06' + (0x99 < bVar5 || CARRY1(bVar6,bVar11)) * '`';
  pbVar1 = (byte *)(CONCAT31(uVar12,bVar5) + -0x5ffff8d9);
  bVar6 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar11;
  bVar2 = 9 < (bVar5 & 0xf) | bVar2;
  bVar5 = bVar5 + bVar2 * '\x06' + (0x99 < bVar5 || CARRY1(bVar6,bVar11)) * '`';
  pbVar1 = (byte *)(CONCAT31(uVar12,bVar5) + -0x5ffff8d9);
  bVar6 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar11;
  bVar2 = 9 < (bVar5 & 0xf) | bVar2;
  bVar5 = bVar5 + bVar2 * '\x06' + (0x99 < bVar5 || CARRY1(bVar6,bVar11)) * '`';
  pbVar1 = (byte *)(CONCAT31(uVar12,bVar5) + -0x5ffff8d9);
  bVar6 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar11;
  bVar2 = 9 < (bVar5 & 0xf) | bVar2;
  bVar5 = bVar5 + bVar2 * '\x06' + (0x99 < bVar5 || CARRY1(bVar6,bVar11)) * '`';
  pbVar1 = (byte *)(CONCAT31(uVar12,bVar5) + -0x5ffff8d9);
  bVar6 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar11;
  bVar2 = 9 < (bVar5 & 0xf) | bVar2;
  bVar5 = bVar5 + bVar2 * '\x06' + (0x99 < bVar5 || CARRY1(bVar6,bVar11)) * '`';
  pbVar1 = (byte *)(CONCAT31(uVar12,bVar5) + -0x5ffff8d9);
  bVar6 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar11;
  bVar2 = 9 < (bVar5 & 0xf) | bVar2;
  bVar5 = bVar5 + bVar2 * '\x06' + (0x99 < bVar5 || CARRY1(bVar6,bVar11)) * '`';
  pbVar1 = (byte *)(CONCAT31(uVar12,bVar5) + -0x5ffff8d9);
  bVar6 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar11;
  bVar2 = 9 < (bVar5 & 0xf) | bVar2;
  bVar5 = bVar5 + bVar2 * '\x06' + (0x99 < bVar5 || CARRY1(bVar6,bVar11)) * '`';
  pbVar1 = (byte *)(CONCAT31(uVar12,bVar5) + -0x5ffff8d9);
  bVar6 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar11;
  bVar2 = 9 < (bVar5 & 0xf) | bVar2;
  bVar6 = bVar5 + bVar2 * '\x06' + (0x99 < bVar5 || CARRY1(bVar6,bVar11)) * '`';
  pcVar8 = (char *)(CONCAT31(uVar12,bVar6) + 0x4d000727);
  *pcVar8 = *pcVar8 + bVar11;
  *(byte *)unaff_EDI = (char)*unaff_EDI - bVar6;
  *(char *)unaff_EDI = (char)*unaff_EDI + cVar13;
  *(byte *)unaff_EDI = (char)*unaff_EDI - bVar6;
  bVar5 = (byte)((uint)param_2 >> 8);
  uVar16 = (undefined2)((uint)param_2 >> 0x10);
  cVar4 = bVar6 + (9 < (bVar6 & 0xf) | bVar2) * '\x06' +
          (0x99 < bVar6 || CARRY1(bVar5,bVar14)) * '`';
  pcVar9 = (char *)CONCAT31(uVar12,cVar4);
  pcVar8 = (char *)(unaff_EBP + -0x74ffd98c);
  *pcVar8 = *pcVar8 + cVar13;
  if (*pcVar8 == '\0') {
    *(undefined4 *)CONCAT22(uVar16,CONCAT11(bVar5 + bVar14,bVar15)) = *unaff_ESI;
    *(undefined4 **)(unaff_EBP + 8) = unaff_ESI + 1;
  }
  else {
    piVar3 = (int *)CONCAT22(uVar16,(ushort)bVar15);
    *pcVar9 = *pcVar9 + cVar4;
    unaff_EBX[-0x49f0f783] = unaff_EBX[-0x49f0f783] + cVar13;
    *piVar3 = (int)(pcVar9 + *piVar3);
    *(char **)(unaff_EBP + 8) = (char *)((int)unaff_EDI + 1);
  }
  return *(undefined4 *)(unaff_EBP + 8);
}

/* 00103394  FUN_00103394  (16 bytes)
 * undefined FUN_00103394()
 */
undefined4 __regparm3 FUN_00103394(undefined4 param_1,int *param_2,ushort *param_3)

{
  int unaff_EBP;
  
  *param_2 = *param_2 + (uint)*param_3;
  *(ushort **)(unaff_EBP + 8) = param_3 + 1;
  return *(undefined4 *)(unaff_EBP + 8);
}

/* 001033b0  FUN_001033b0  (10 bytes)
 * undefined FUN_001033b0()
 */
undefined4 __regparm3 FUN_001033b0(undefined4 param_1,undefined4 *param_2)

{
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  *param_2 = param_1;
  *(undefined4 *)(unaff_EBP + 8) = unaff_ESI;
  return *(undefined4 *)(unaff_EBP + 8);
}

/* 001033dc  FUN_001033dc  (56 bytes)
 * undefined FUN_001033dc()
 */
undefined4 FUN_001033dc(void)

{
  int iVar1;
  uint uVar2;
  byte_conflict *pbVar3;
  int iVar4;
  int unaff_EBP;
  int unaff_ESI;
  byte_conflict *unaff_EDI;
  uint *unaff_retaddr;
  
  pbVar3 = decode_uleb128(unaff_EDI,unaff_retaddr);
  iVar1 = *(int *)(unaff_EBP + 0xc);
  uVar2 = *(uint *)(unaff_EBP + -0x14);
  *(byte_conflict **)(unaff_EBP + 8) = pbVar3;
  if (uVar2 != *(ushort *)(iVar1 + 0x58)) {
    iVar4 = *(int *)(unaff_ESI + 0xc) * *(int *)(unaff_EBP + -0x10);
    *(int *)(unaff_EBP + -0x10) = iVar4;
    *(undefined1 *)(uVar2 + 0x5c + iVar1) = 1;
    *(int *)(iVar1 + 0x10 + uVar2 * 4) = iVar4;
  }
  return *(undefined4 *)(unaff_EBP + 8);
}

/* 00103414  FUN_00103414  (41 bytes)
 * undefined FUN_00103414()
 */
undefined4 FUN_00103414(void)

{
  byte_conflict *pbVar1;
  int unaff_EBP;
  
  pbVar1 = decode_uleb128(*(byte_conflict **)(unaff_EBP + 8),(uint *)(unaff_EBP + -0x14));
  *(byte_conflict **)(unaff_EBP + 8) = pbVar1;
  *(undefined1 *)(*(int *)(unaff_EBP + -0x14) + 0x5c + *(int *)(unaff_EBP + 0xc)) = 0;
  return *(undefined4 *)(unaff_EBP + 8);
}

/* 00103440  FUN_00103440  (63 bytes)
 * undefined FUN_00103440()
 */
undefined4 FUN_00103440(void)

{
  int iVar1;
  int iVar2;
  byte_conflict *pbVar3;
  int unaff_EBP;
  
  pbVar3 = decode_uleb128(*(byte_conflict **)(unaff_EBP + 8),(uint *)(unaff_EBP + -0x14));
  *(byte_conflict **)(unaff_EBP + 8) = pbVar3;
  pbVar3 = decode_uleb128(*(byte_conflict **)(unaff_EBP + 8),(uint *)(unaff_EBP + -0x18));
  iVar1 = *(int *)(unaff_EBP + -0x14);
  iVar2 = *(int *)(unaff_EBP + 0xc);
  *(byte_conflict **)(unaff_EBP + 8) = pbVar3;
  *(undefined1 *)(iVar1 + 0x5c + iVar2) = 2;
  *(undefined4 *)(iVar2 + 0x10 + iVar1 * 4) = *(undefined4 *)(unaff_EBP + -0x18);
  return *(undefined4 *)(unaff_EBP + 8);
}

/* 00103480  FUN_00103480  (61 bytes)
 * undefined FUN_00103480()
 */
undefined4 FUN_00103480(void)

{
  int iVar1;
  byte_conflict *pbVar2;
  int unaff_EBP;
  
  pbVar2 = decode_uleb128(*(byte_conflict **)(unaff_EBP + 8),(uint *)(unaff_EBP + -0x14));
  *(byte_conflict **)(unaff_EBP + 8) = pbVar2;
  pbVar2 = decode_uleb128(*(byte_conflict **)(unaff_EBP + 8),(uint *)(unaff_EBP + -0x10));
  iVar1 = *(int *)(unaff_EBP + 0xc);
  *(byte_conflict **)(unaff_EBP + 8) = pbVar2;
  *(short *)(iVar1 + 0x58) = (short)*(undefined4 *)(unaff_EBP + -0x14);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(unaff_EBP + -0x10);
  return *(undefined4 *)(unaff_EBP + 8);
}

/* 001034c0  FUN_001034c0  (37 bytes)
 * undefined FUN_001034c0()
 */
undefined4 FUN_001034c0(void)

{
  byte_conflict *pbVar1;
  int unaff_EBP;
  
  pbVar1 = decode_uleb128(*(byte_conflict **)(unaff_EBP + 8),(uint *)(unaff_EBP + -0x14));
  *(byte_conflict **)(unaff_EBP + 8) = pbVar1;
  *(short *)(*(int *)(unaff_EBP + 0xc) + 0x58) = (short)*(undefined4 *)(unaff_EBP + -0x14);
  return *(undefined4 *)(unaff_EBP + 8);
}

/* 00103514  FUN_00103514  (91 bytes)
 * undefined FUN_00103514()
 */
undefined4 __regparm3 FUN_00103514(undefined4 param_1,undefined2 param_2,int param_3)

{
  undefined1 uVar1;
  byte_conflict *pbVar2;
  int unaff_EBP;
  byte_conflict *pbVar3;
  
  uVar1 = in(param_2);
  *(byte *)(unaff_EBP + 0x41c6f045) = *(byte *)(unaff_EBP + 0x41c6f045) | (byte)param_3;
  *(undefined2 *)(param_3 + 0x58) = 0;
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 0x70) = 0;
  pbVar2 = decode_uleb128(*(byte_conflict **)(unaff_EBP + 8),
                          (uint *)CONCAT31((int3)((uint)param_1 >> 8),uVar1));
  *(byte_conflict **)(unaff_EBP + 8) = pbVar2;
  pbVar3 = pbVar2 + *(int *)(unaff_EBP + -0x10);
  while (pbVar2 < pbVar3) {
    pbVar2 = decode_stack_op(*(byte_conflict **)(unaff_EBP + 8),*(int *)(unaff_EBP + 0xc));
    *(byte_conflict **)(unaff_EBP + 8) = pbVar2;
  }
  return *(undefined4 *)(unaff_EBP + 8);
}

/* 00103574  FUN_00103574  (39 bytes)
 * undefined FUN_00103574()
 */
/* WARNING: Control flow encountered bad instruction data */

undefined4 __regparm3 FUN_00103574(undefined4 param_1)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 unaff_EBX;
  int unaff_EBP;
  undefined4 *puVar4;
  char in_SF;
  char in_OF;
  
  if (in_OF == in_SF) {
    sVar1 = (short)(char)((uint)unaff_EBX >> 8);
    puVar2 = (undefined4 *)
             CONCAT22((short)((uint)param_1 >> 0x10),
                      CONCAT11((char)((short)param_1 % sVar1),(char)((short)param_1 / sVar1)));
    *(undefined4 **)(unaff_EBP + -0x1c) = puVar2;
    puVar4 = *(undefined4 **)(unaff_EBP + 0xc);
    for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar2 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 0x78) = *(undefined4 *)(unaff_EBP + -0x1c);
    return *(undefined4 *)(unaff_EBP + 8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

/* 001035a4  FUN_001035a4  (31 bytes)
 * undefined FUN_001035a4()
 */
undefined4 __regparm3 FUN_001035a4(undefined4 *param_1)

{
  undefined4 *__ptr;
  int iVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  
  __ptr = (undefined4 *)param_1[0x1e];
  puVar2 = __ptr;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  free(__ptr);
  return *(undefined4 *)(unaff_EBP + 8);
}

/* 001035c4  FUN_001035c4  (61 bytes)
 * undefined FUN_001035c4()
 */
undefined4 __regparm3 FUN_001035c4(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar5;
  int unaff_EBP;
  char in_CF;
  char *pcVar4;
  
  cVar3 = in(param_2);
  pcVar4 = (char *)CONCAT31((int3)((uint)param_1 >> 8),cVar3);
  *pcVar4 = *pcVar4 + cVar3 + in_CF;
  *pcVar4 = *pcVar4 + cVar3;
  iVar1 = *(int *)(unaff_EBP + 0xd);
  uVar5 = 0x10;
  do {
    *(undefined1 *)(iVar1 + 0x5c + uVar5) = 1;
    iVar2 = *(int *)(unaff_EBP + -0x13);
    *(int *)(*(int *)(unaff_EBP + 0xd) + 0x10 + iVar2 * 4) = iVar2 * 4 + -0x40;
    uVar5 = iVar2 + 1;
    *(uint *)(unaff_EBP + -0x13) = uVar5;
  } while (uVar5 < 0x20);
  return *(undefined4 *)(unaff_EBP + 9);
}

/* 00103604  FUN_00103604  (30 bytes)
 * undefined FUN_00103604()
 */
undefined4 FUN_00103604(void)

{
  byte_conflict *pbVar1;
  byte_conflict *in_ECX;
  int unaff_EBP;
  
  pbVar1 = decode_uleb128(in_ECX,(uint *)(unaff_EBP + -0x10));
  *(byte_conflict **)(unaff_EBP + 8) = pbVar1;
  *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 0xc) = *(undefined4 *)(unaff_EBP + -0x10);
  return *(undefined4 *)(unaff_EBP + 8);
}

/* 00103624  FUN_00103624  (69 bytes)
 * undefined FUN_00103624()
 */
undefined4 __regparm3 FUN_00103624(undefined4 param_1,byte_conflict *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  byte_conflict *pbVar4;
  int iVar5;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  
  *(byte *)(unaff_EBX + 0x458d08ec) = *(byte *)(unaff_EBX + 0x458d08ec) | (byte)param_1;
  uVar3 = in((short)param_2);
  pbVar4 = decode_uleb128(param_2,(uint *)CONCAT31((int3)((uint)param_1 >> 8),uVar3));
  *(byte_conflict **)(unaff_EBP + 8) = pbVar4;
  pbVar4 = decode_uleb128(*(byte_conflict **)(unaff_EBP + 8),(uint *)(unaff_EBP + -0x10));
  iVar1 = *(int *)(unaff_EBP + 0xc);
  *(byte_conflict **)(unaff_EBP + 8) = pbVar4;
  iVar5 = *(int *)(unaff_ESI + 0xc) * *(int *)(unaff_EBP + -0x10);
  iVar2 = *(int *)(unaff_EBP + -0x14);
  *(int *)(unaff_EBP + -0x10) = iVar5;
  *(undefined1 *)(iVar2 + 0x5c + iVar1) = 1;
  *(int *)(iVar1 + 0x10 + iVar2 * 4) = -iVar5;
  return *(undefined4 *)(unaff_EBP + 8);
}

/* 00103675  FUN_00103675  (11 bytes)
 * undefined FUN_00103675()
 */
undefined4 FUN_00103675(void)

{
  int unaff_EBP;
  
  return *(undefined4 *)(unaff_EBP + 8);
}

/* 00104b32  FUN_00104b32  (46 bytes)
 * undefined FUN_00104b32()
 */
/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void FUN_00104b32(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = bad_alloc_type_info_function();
  *(undefined4 **)(unaff_EBP + -0x2c) = puVar1;
  __check_eh_spec(1,unaff_EBP + -0x2c);
  terminate();
  return;
}

