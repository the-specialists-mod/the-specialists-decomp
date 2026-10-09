/* client.dll - unnamed_10075708 (80 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10075708  FUN_10075708  (90 bytes)
 * undefined4 FUN_10075708(int param_1, uint param_2)
 * called by: FUN_10075835
 */
undefined4 __cdecl FUN_10075708(int param_1,uint param_2)

{
  undefined4 uStack_8;
  
  if (param_2 == 0x7ff00000) {
    if (param_1 == 0) {
      return 1;
    }
  }
  else if ((param_2 == 0xfff00000) && (param_1 == 0)) {
    return 2;
  }
  if ((param_2._2_2_ & 0x7ff8) == 0x7ff8) {
    uStack_8 = 3;
  }
  else {
    if (((param_2._2_2_ & 0x7ff8) != 0x7ff0) || (((param_2 & 0x7ffff) == 0 && (param_1 == 0)))) {
      return 0;
    }
    uStack_8 = 4;
  }
  return uStack_8;
}

/* 10075762  FUN_10075762  (193 bytes)
 * float10 FUN_10075762(uint param_1, uint param_2, int * param_3)
 * called by: FUN_10076a2e
 */
float10 __cdecl FUN_10075762(uint param_1,uint param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  float10 fVar5;
  undefined8 local_c;
  
  if ((double)CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))) ==
      0.0) {
    iVar4 = 0;
    local_c = 0.0;
  }
  else if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
    iVar4 = -0x3fd;
    if (0.0 <= (double)CONCAT17(param_2._3_1_,
                                CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1)))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    while ((param_2._2_1_ & 0x10) == 0) {
      iVar2 = CONCAT13(param_2._3_1_,CONCAT12(param_2._2_1_,(ushort)param_2)) << 1;
      param_2._0_2_ = (ushort)iVar2;
      param_2._2_1_ = (byte)((uint)iVar2 >> 0x10);
      param_2._3_1_ = (byte)((uint)iVar2 >> 0x18);
      if ((param_1 & 0x80000000) != 0) {
        param_2._0_2_ = (ushort)param_2 | 1;
      }
      param_1 = param_1 << 1;
      iVar4 = iVar4 + -1;
    }
    uVar1 = CONCAT11(param_2._3_1_,param_2._2_1_) & 0xffef;
    param_2._2_1_ = (byte)uVar1;
    param_2._3_1_ = (byte)(uVar1 >> 8);
    if (bVar3) {
      param_2._3_1_ = param_2._3_1_ | 0x80;
    }
    fVar5 = FUN_100756df(CONCAT17(param_2._3_1_,
                                  CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))),0);
    local_c = (double)fVar5;
  }
  else {
    fVar5 = FUN_100756df(CONCAT17(param_2._3_1_,
                                  CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))),0);
    local_c = (double)fVar5;
    iVar4 = (short)((ushort)(param_2 >> 0x14) & 0x7ff) + -0x3fe;
  }
  *param_3 = iVar4;
  return (float10)local_c;
}

/* 10075835  FUN_10075835  (146 bytes)
 * int FUN_10075835(int param_1, uint param_2)
 * called by: FUN_10072bdc
 */
int __cdecl FUN_10075835(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2._2_2_ & 0x7ff0) == 0x7ff0) {
    iVar1 = FUN_10075708(param_1,(uint)(CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)
                                                ) >> 0x20));
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        iVar1 = 4;
      }
      else if (iVar1 == 3) {
        iVar1 = 2;
      }
      else {
        iVar1 = 1;
      }
      return iVar1;
    }
    return 0x200;
  }
  if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
    return (-(uint)((param_2 & 0x80000000) != 0) & 0xffffff90) + 0x80;
  }
  if ((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) == 0.0) {
    return (-(uint)((param_2 & 0x80000000) != 0) & 0xffffffe0) + 0x40;
  }
  return (-(uint)((param_2 & 0x80000000) != 0) & 0xffffff08) + 0x100;
}

/* 100758d0  FUN_100758d0  (62 bytes)
 * int FUN_100758d0(byte.conflict * param_1, byte.conflict * param_2)
 */
int __cdecl FUN_100758d0(byte_conflict *param_1,byte_conflict *param_2)

{
  byte bVar1;
  int iVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *param_2;
    if (bVar1 == 0) break;
    param_2 = param_2 + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  iVar2 = -1;
  do {
    iVar2 = iVar2 + 1;
    bVar1 = *param_1;
    if (bVar1 == 0) {
      return iVar2;
    }
    param_1 = param_1 + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return iVar2;
}

/* 10075910  FUN_10075910  (58 bytes)
 * byte.conflict * FUN_10075910(byte.conflict * param_1, byte.conflict * param_2)
 */
byte_conflict * __cdecl FUN_10075910(byte_conflict *param_1,byte_conflict *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *param_2;
    if (bVar1 == 0) break;
    param_2 = param_2 + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = param_1;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (byte_conflict *)0x0;
    }
    param_1 = pbVar2 + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return pbVar2;
}

/* 1007594a  FUN_1007594a  (429 bytes)
 * undefined4 FUN_1007594a(int param_1)
 * called by: FUN_10075d22
 */
undefined4 __cdecl FUN_1007594a(int param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  BYTE *pBVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  _cpinfo local_1c;
  uint local_8;
  
  FUN_1006dcfb(0x19);
  CodePage = FUN_10075af7(param_1);
  if (CodePage != DAT_1019215c) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_10098168;
LAB_10075987:
      if (*pUVar5 != CodePage) goto code_r0x1007598b;
      local_8 = 0;
      puVar15 = &DAT_10192280;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x10098178);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_10098160)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_10192280 + uVar8 + 1);
              *pbVar2 = *pbVar2 | bVar4;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= bVar3);
          }
          pbVar11 = pbVar11 + 2;
          bVar3 = *pbVar11;
        }
        local_8 = local_8 + 1;
        pbVar13 = pbVar13 + 8;
      } while (local_8 < 4);
      DAT_1019216c = 1;
      DAT_1019215c = CodePage;
      DAT_10192384 = FUN_10075b41(CodePage);
      DAT_10192160 = *(undefined4 *)(iVar12 + 0x1009816c);
      DAT_10192164 = *(undefined4 *)(iVar12 + 0x10098170);
      DAT_10192168 = *(undefined4 *)(iVar12 + 0x10098174);
      goto LAB_10075adb;
    }
    goto LAB_10075ad6;
  }
  goto LAB_10075971;
code_r0x1007598b:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x10098257 < (int)pUVar5) goto code_r0x10075996;
  goto LAB_10075987;
code_r0x10075996:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_10192384 = 0;
    puVar15 = &DAT_10192280;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      DAT_1019216c = 0;
      DAT_1019215c = CodePage;
    }
    else {
      DAT_1019215c = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_10192280 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_10192280 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_10192384 = FUN_10075b41(CodePage);
      DAT_1019216c = 1;
    }
    DAT_10192160 = 0;
    DAT_10192164 = 0;
    DAT_10192168 = 0;
  }
  else {
    if (DAT_10192110 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_10075ae8;
    }
LAB_10075ad6:
    FUN_10075b74();
  }
LAB_10075adb:
  FUN_10075b9d();
LAB_10075971:
  uVar14 = 0;
LAB_10075ae8:
  FUN_1006dd5c(0x19);
  return uVar14;
}

/* 10075af7  FUN_10075af7  (74 bytes)
 * int FUN_10075af7(int param_1)
 * called by: FUN_1007594a
 */
int __cdecl FUN_10075af7(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_10192110 = 1;
                    /* WARNING: Could not recover jumptable at 0x10075b11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_10192110 = 1;
                    /* WARNING: Could not recover jumptable at 0x10075b26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_10191ecc;
  }
  DAT_10192110 = (uint)bVar2;
  return param_1;
}

/* 10075b41  FUN_10075b41  (51 bytes)
 * undefined4 FUN_10075b41(int param_1)
 * called by: FUN_1007594a
 */
undefined4 __cdecl FUN_10075b41(int param_1)

{
  if (param_1 == 0x3a4) {
    return 0x411;
  }
  if (param_1 == 0x3a8) {
    return 0x804;
  }
  if (param_1 == 0x3b5) {
    return 0x412;
  }
  if (param_1 != 0x3b6) {
    return 0;
  }
  return 0x404;
}

/* 10075b74  FUN_10075b74  (41 bytes)
 * undefined FUN_10075b74(void)
 * called by: FUN_1007594a
 */
void FUN_10075b74(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10192280;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_1019215c = 0;
  DAT_1019216c = 0;
  DAT_10192384 = 0;
  DAT_10192160 = 0;
  DAT_10192164 = 0;
  DAT_10192168 = 0;
  return;
}

/* 10075b9d  FUN_10075b9d  (389 bytes)
 * undefined FUN_10075b9d(void)
 * called by: FUN_1007594a
 */
void FUN_10075b9d(void)

{
  byte *pbVar1;
  BOOL BVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  undefined1 uVar8;
  BYTE *pBVar9;
  CHAR *pCVar10;
  WORD local_518 [256];
  WCHAR local_318 [128];
  WCHAR local_218 [128];
  CHAR local_118 [256];
  _cpinfo local_18;
  
  BVar2 = GetCPInfo(DAT_1019215c,&local_18);
  if (BVar2 == 1) {
    uVar3 = 0;
    do {
      local_118[uVar3] = (CHAR)uVar3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
    local_118[0] = ' ';
    if (local_18.LeadByte[0] != 0) {
      pBVar9 = local_18.LeadByte + 1;
      do {
        uVar3 = (uint)local_18.LeadByte[0];
        if (uVar3 <= *pBVar9) {
          uVar5 = (*pBVar9 - uVar3) + 1;
          uVar6 = uVar5 >> 2;
          pCVar10 = local_118 + uVar3;
          while (uVar6 != 0) {
            uVar6 = uVar6 - 1;
            builtin_memcpy(pCVar10,"    ",4);
            pCVar10 = pCVar10 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pCVar10 = ' ';
            pCVar10 = pCVar10 + 1;
          }
        }
        local_18.LeadByte[0] = pBVar9[1];
        pBVar9 = pBVar9 + 2;
      } while (local_18.LeadByte[0] != 0);
    }
    FUN_10072e90(1,local_118,0x100,local_518,DAT_1019215c,DAT_10192384,0);
    FUN_10072c41(DAT_10192384,0x100,local_118,0x100,local_218,0x100,DAT_1019215c,0);
    FUN_10072c41(DAT_10192384,0x200,local_118,0x100,local_318,0x100,DAT_1019215c,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_10192280 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_10075ca9;
        }
        (&DAT_10192180)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10192280 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_10075ca9:
        (&DAT_10192180)[uVar3] = uVar8;
      }
      uVar3 = uVar3 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar3 < 0x100);
  }
  else {
    uVar3 = 0;
    do {
      if ((uVar3 < 0x41) || (0x5a < uVar3)) {
        if ((0x60 < uVar3) && (uVar3 < 0x7b)) {
          pbVar1 = (byte *)((int)&DAT_10192280 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_10075cf3;
        }
        (&DAT_10192180)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10192280 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_10075cf3:
        (&DAT_10192180)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}

/* 10075d22  FUN_10075d22  (28 bytes)
 * undefined FUN_10075d22(void)
 * called by: FUN_100730bc, FUN_10073175
 */
void FUN_10075d22(void)

{
  if (DAT_101934f0 == 0) {
    FUN_1007594a(-3);
    DAT_101934f0 = 1;
  }
  return;
}

/* 10075d3e  FUN_10075d3e  (137 bytes)
 * int FUN_10075d3e(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_10073533
 */
int __cdecl FUN_10075d3e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_10192114 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_10192114 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_10192114 != (FARPROC)0x0) {
        DAT_10192118 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_1019211c = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_10075d8d;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_10075d8d:
    if (DAT_10192118 != (FARPROC)0x0) {
      iVar1 = (*DAT_10192118)();
      if ((iVar1 != 0) && (DAT_1019211c != (FARPROC)0x0)) {
        iVar1 = (*DAT_1019211c)(iVar1);
      }
    }
    iVar1 = (*DAT_10192114)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}

/* 10075dc7  FUN_10075dc7  (386 bytes)
 * undefined4 FUN_10075dc7(DWORD * param_1)
 * called by: FUN_100742ee
 */
undefined4 __cdecl FUN_10075dc7(DWORD *param_1)

{
  bool bVar1;
  DWORD *pDVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined4 *puVar7;
  DWORD local_10;
  DWORD local_c;
  
  bVar1 = false;
  if (param_1 == (DWORD *)0x2) {
    puVar7 = &DAT_10192120;
    pcVar6 = DAT_10192120;
LAB_10075e4d:
    bVar1 = true;
    FUN_1006dcfb(1);
    pDVar2 = param_1;
  }
  else {
    if (((param_1 != (DWORD *)0x4) && (param_1 != (DWORD *)0x8)) && (param_1 != (DWORD *)0xb)) {
      if (param_1 == (DWORD *)0xf) {
        puVar7 = &DAT_1019212c;
        pcVar6 = DAT_1019212c;
      }
      else if (param_1 == (DWORD *)0x15) {
        puVar7 = &DAT_10192124;
        pcVar6 = DAT_10192124;
      }
      else {
        if (param_1 != (DWORD *)0x16) {
          return 0xffffffff;
        }
        puVar7 = &DAT_10192128;
        pcVar6 = DAT_10192128;
      }
      goto LAB_10075e4d;
    }
    pDVar2 = FUN_1006e7e1();
    uVar3 = FUN_10075f49((int)param_1,pDVar2[0x14]);
    puVar7 = (undefined4 *)(uVar3 + 8);
    pcVar6 = (code *)*puVar7;
  }
  if (pcVar6 == (code *)0x1) {
    if (!bVar1) {
      return 0;
    }
    FUN_1006dd5c(1);
    return 0;
  }
  if (pcVar6 == (code *)0x0) {
    if (bVar1) {
      FUN_1006dd5c(1);
    }
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (((param_1 == (DWORD *)0x8) || (param_1 == (DWORD *)0xb)) || (param_1 == (DWORD *)0x4)) {
    local_c = pDVar2[0x15];
    pDVar2[0x15] = 0;
    if (param_1 == (DWORD *)0x8) {
      local_10 = pDVar2[0x16];
      pDVar2[0x16] = 0x8c;
      goto LAB_10075ec1;
    }
  }
  else {
LAB_10075ec1:
    if (param_1 == (DWORD *)0x8) {
      if (DAT_10097ff8 < DAT_10097ffc + DAT_10097ff8) {
        iVar4 = DAT_10097ff8 * 0xc;
        iVar5 = DAT_10097ff8;
        do {
          iVar4 = iVar4 + 0xc;
          *(undefined4 *)((pDVar2[0x14] - 4) + iVar4) = 0;
          iVar5 = iVar5 + 1;
        } while (iVar5 < DAT_10097ffc + DAT_10097ff8);
      }
      goto LAB_10075eff;
    }
  }
  *puVar7 = 0;
LAB_10075eff:
  if (bVar1) {
    FUN_1006dd5c(1);
  }
  if (param_1 == (DWORD *)0x8) {
    (*pcVar6)(8,pDVar2[0x16]);
  }
  else {
    (*pcVar6)(param_1);
    if ((param_1 != (DWORD *)0xb) && (param_1 != (DWORD *)0x4)) {
      return 0;
    }
  }
  pDVar2[0x15] = local_c;
  if (param_1 == (DWORD *)0x8) {
    pDVar2[0x16] = local_10;
  }
  return 0;
}

/* 10075f49  FUN_10075f49  (61 bytes)
 * uint FUN_10075f49(int param_1, uint param_2)
 * called by: FUN_10075dc7
 */
uint __cdecl FUN_10075f49(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_2;
  if (*(int *)(param_2 + 4) != param_1) {
    uVar3 = param_2;
    do {
      uVar2 = uVar3 + 0xc;
      if (param_2 + DAT_10098004 * 0xc <= uVar2) break;
      piVar1 = (int *)(uVar3 + 0x10);
      uVar3 = uVar2;
    } while (*piVar1 != param_1);
  }
  if ((param_2 + DAT_10098004 * 0xc <= uVar2) || (*(int *)(uVar2 + 4) != param_1)) {
    uVar2 = 0;
  }
  return uVar2;
}

/* 10075f86  FUN_10075f86  (33 bytes)
 * undefined4 FUN_10075f86(uint param_1, uint param_2, uint * param_3)
 * called by: FUN_10073b8e, FUN_100764df, ___add_12
 */
undefined4 __cdecl FUN_10075f86(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = param_1 + param_2;
  if ((uVar1 < param_1) || (uVar1 < param_2)) {
    uVar2 = 1;
  }
  *param_3 = uVar1;
  return uVar2;
}

/* 10076005  FUN_10076005  (46 bytes)
 * undefined FUN_10076005(uint * param_1)
 * called by: FUN_10076060, FUN_10076127, FUN_100764df
 */
void __cdecl FUN_10076005(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1 * 2;
  param_1[1] = uVar2 * 2 | uVar1 >> 0x1f;
  param_1[2] = param_1[2] << 1 | uVar2 >> 0x1f;
  return;
}

/* 10076033  FUN_10076033  (45 bytes)
 * undefined FUN_10076033(uint * param_1)
 * called by: FUN_10076127, FUN_100764df
 */
void __cdecl FUN_10076033(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}

/* 10076060  FUN_10076060  (199 bytes)
 * undefined FUN_10076060(char * param_1, int param_2, uint * param_3)
 * called by: FUN_100749c9
 */
void __cdecl FUN_10076060(char *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  puVar1 = param_3;
  local_8 = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (param_2 != 0) {
    param_3 = (uint *)param_2;
    do {
      local_14 = *puVar1;
      local_10 = puVar1[1];
      local_c = puVar1[2];
      FUN_10076005(puVar1);
      FUN_10076005(puVar1);
      ___add_12(puVar1,&local_14);
      FUN_10076005(puVar1);
      local_10 = 0;
      local_c = 0;
      local_14 = (uint)*param_1;
      ___add_12(puVar1,&local_14);
      param_1 = param_1 + 1;
      param_3 = (uint *)((int)param_3 + -1);
    } while (param_3 != (uint *)0x0);
  }
  while (puVar1[2] == 0) {
    puVar1[2] = puVar1[1] >> 0x10;
    local_8 = local_8 + 0xfff0;
    puVar1[1] = *puVar1 >> 0x10 | puVar1[1] << 0x10;
    *puVar1 = *puVar1 << 0x10;
  }
  while ((puVar1[2] & 0x8000) == 0) {
    FUN_10076005(puVar1);
    local_8 = local_8 + 0xffff;
  }
  *(undefined2 *)((int)puVar1 + 10) = (undefined2)local_8;
  return;
}

/* 10076127  FUN_10076127  (659 bytes)
 * undefined4 FUN_10076127(uint param_1, uint param_2, uint param_3, int param_4, byte.conflict param_5, short * param_6)
 * called by: FUN_10073fa8
 */
undefined4 __cdecl
FUN_10076127(uint param_1,uint param_2,uint param_3,int param_4,byte_conflict param_5,short *param_6
            )

{
  short *psVar1;
  uint uVar2;
  short *psVar3;
  char cVar4;
  uint uVar5;
  short *psVar6;
  short *psVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined2 local_14;
  undefined4 local_12;
  undefined4 local_e;
  undefined1 local_a;
  char cStack_9;
  undefined4 local_8;
  
  psVar3 = param_6;
  uVar5 = param_3 & 0x7fff;
  local_20 = 0xcc;
  local_1f = 0xcc;
  local_1e = 0xcc;
  local_1d = 0xcc;
  local_1c = 0xcc;
  local_1b = 0xcc;
  local_1a = 0xcc;
  local_19 = 0xcc;
  local_18 = 0xcc;
  local_17 = 0xcc;
  local_16 = 0xfb;
  local_15 = 0x3f;
  local_8 = 1;
  if ((param_3 & 0x8000) == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((((short)uVar5 != 0) || (param_2 != 0)) || (param_1 != 0)) {
    if ((short)uVar5 == 0x7fff) {
      *param_6 = 1;
      if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
        if (((param_3 & 0x8000) == 0) || (param_2 != 0xc0000000)) {
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_1007621c;
          pcVar11 = "1#INF";
        }
        else {
          if (param_1 != 0) {
LAB_1007621c:
            pcVar11 = "1#QNAN";
            goto LAB_10076221;
          }
          pcVar11 = "1#IND";
        }
        FUN_100740c0((uint *)(param_6 + 2),(uint *)pcVar11);
        *(undefined1 *)((int)psVar3 + 3) = 5;
      }
      else {
        pcVar11 = "1#SNAN";
LAB_10076221:
        FUN_100740c0((uint *)(param_6 + 2),(uint *)pcVar11);
        *(undefined1 *)((int)psVar3 + 3) = 6;
      }
      return 0;
    }
    local_14 = 0;
    local_a = (undefined1)uVar5;
    cStack_9 = (char)(uVar5 >> 8);
    sVar8 = (short)(((uVar5 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar5 * 0x4d10 >>
                   0x10);
    local_e = param_2;
    local_12 = param_1;
    FUN_100766ff((int *)&local_14,-(int)sVar8,1);
    if (0x3ffe < CONCAT11(cStack_9,local_a)) {
      sVar8 = sVar8 + 1;
      FUN_100764df((int *)&local_14,(int *)&local_20);
    }
    *psVar3 = sVar8;
    iVar10 = param_4;
    if (((param_5 & 1) == 0) || (iVar10 = param_4 + sVar8, 0 < param_4 + sVar8)) {
      if (0x15 < iVar10) {
        iVar10 = 0x15;
      }
      iVar9 = CONCAT11(cStack_9,local_a) - 0x3ffe;
      local_a = 0;
      cStack_9 = '\0';
      param_6 = (short *)0x8;
      do {
        FUN_10076005((uint *)&local_14);
        param_6 = (short *)((int)param_6 + -1);
      } while (param_6 != (short *)0x0);
      if (iVar9 < 0) {
        param_6 = (short *)0x0;
        for (uVar5 = -iVar9 & 0xff; uVar5 != 0; uVar5 = uVar5 - 1) {
          FUN_10076033((uint *)&local_14);
        }
      }
      param_4 = iVar10 + 1;
      psVar6 = psVar3 + 2;
      param_6 = psVar6;
      uVar5 = local_12;
      uVar2 = local_e;
      if (0 < param_4) {
        do {
          local_e._2_2_ = (undefined2)(uVar2 >> 0x10);
          local_e._0_2_ = (undefined2)uVar2;
          local_12._2_2_ = (undefined2)(uVar5 >> 0x10);
          local_12._0_2_ = (undefined2)uVar5;
          param_1 = CONCAT22((undefined2)local_12,local_14);
          param_2 = CONCAT22((undefined2)local_e,local_12._2_2_);
          param_3 = CONCAT13(cStack_9,CONCAT12(local_a,local_e._2_2_));
          local_12 = uVar5;
          local_e = uVar2;
          FUN_10076005((uint *)&local_14);
          FUN_10076005((uint *)&local_14);
          ___add_12((uint *)&local_14,&param_1);
          FUN_10076005((uint *)&local_14);
          cVar4 = cStack_9;
          cStack_9 = '\0';
          psVar6 = (short *)((int)param_6 + 1);
          param_4 = param_4 + -1;
          *(char *)param_6 = cVar4 + '0';
          param_6 = psVar6;
          uVar5 = local_12;
          uVar2 = local_e;
        } while (param_4 != 0);
      }
      psVar7 = psVar6 + -1;
      psVar1 = psVar3 + 2;
      if ('4' < *(char *)((int)psVar6 + -1)) {
        for (; psVar1 <= psVar7; psVar7 = (short *)((int)psVar7 + -1)) {
          if ((char)*psVar7 != '9') {
            if (psVar1 <= psVar7) goto LAB_10076379;
            break;
          }
          *(char *)psVar7 = '0';
        }
        psVar7 = (short *)((int)psVar7 + 1);
        *psVar3 = *psVar3 + 1;
LAB_10076379:
        *(char *)psVar7 = (char)*psVar7 + '\x01';
LAB_1007637b:
        cVar4 = ((char)psVar7 - (char)psVar3) + -3;
        *(char *)((int)psVar3 + 3) = cVar4;
        *(undefined1 *)(cVar4 + 4 + (int)psVar3) = 0;
        return local_8;
      }
      for (; psVar1 <= psVar7; psVar7 = (short *)((int)psVar7 + -1)) {
        if ((char)*psVar7 != '0') {
          if (psVar1 <= psVar7) goto LAB_1007637b;
          break;
        }
      }
      *psVar3 = 0;
      *(undefined1 *)(psVar3 + 1) = 0x20;
      *(undefined1 *)((int)psVar3 + 3) = 1;
      *(char *)psVar1 = '0';
      goto LAB_100763b1;
    }
  }
  *psVar3 = 0;
  *(undefined1 *)(psVar3 + 1) = 0x20;
  *(undefined1 *)((int)psVar3 + 3) = 1;
  *(undefined1 *)(psVar3 + 2) = 0x30;
LAB_100763b1:
  *(undefined1 *)((int)psVar3 + 5) = 0;
  return 1;
}

/* 100763ba  FUN_100763ba  (293 bytes)
 * int FUN_100763ba(uint param_1, int param_2)
 * called by: FUN_100746fa
 */
int __cdecl FUN_100763ba(uint param_1,int param_2)

{
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  DWORD *pDVar6;
  HANDLE hFile;
  BOOL BVar7;
  int iVar8;
  uint uVar9;
  char local_1008 [4064];
  undefined4 uStackY_28;
  
  FUN_1006b970();
  iVar8 = 0;
  DVar1 = FUN_1006f03b(param_1,0,1);
  if ((DVar1 == 0xffffffff) || (DVar2 = FUN_1006f03b(param_1,0,2), DVar2 == 0xffffffff)) {
    iVar8 = -1;
  }
  else {
    uVar9 = param_2 - DVar2;
    if ((int)uVar9 < 1) {
      if ((int)uVar9 < 0) {
        FUN_1006f03b(param_1,param_2,0);
        hFile = (HANDLE)FUN_100745a4(param_1);
        BVar7 = SetEndOfFile(hFile);
        iVar8 = (BVar7 != 0) - 1;
        if (iVar8 == -1) {
          pDVar6 = FUN_1006edb4();
          *pDVar6 = 0xd;
          DVar2 = GetLastError();
          pDVar6 = FUN_1006edbd();
          *pDVar6 = DVar2;
        }
      }
    }
    else {
      _memset(local_1008,0,0x1000);
      uStackY_28 = 0x10076427;
      iVar3 = FUN_10076f61(param_1,0x8000);
      do {
        uVar4 = 0x1000;
        if ((int)uVar9 < 0x1000) {
          uVar4 = uVar9;
        }
        iVar5 = FUN_1006f9a2(param_1,local_1008,uVar4);
        if (iVar5 == -1) {
          pDVar6 = FUN_1006edbd();
          if (*pDVar6 == 5) {
            pDVar6 = FUN_1006edb4();
            *pDVar6 = 0xd;
          }
          iVar8 = -1;
          break;
        }
        uVar9 = uVar9 - iVar5;
      } while (0 < (int)uVar9);
      FUN_10076f61(param_1,iVar3);
    }
    FUN_1006f03b(param_1,DVar1,0);
  }
  return iVar8;
}

/* 100764df  FUN_100764df  (544 bytes)
 * undefined FUN_100764df(int * param_1, int * param_2)
 * called by: FUN_10076127, FUN_100766ff
 */
void __cdecl FUN_100764df(int *param_1,int *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  ushort uVar9;
  uint uVar10;
  ushort uVar11;
  byte local_28;
  undefined1 uStack_27;
  undefined2 uStack_26;
  short local_24;
  undefined2 uStack_22;
  undefined2 local_20;
  undefined1 uStack_1e;
  byte bStack_1d;
  int *local_1c;
  int local_18;
  int local_14;
  ushort *local_10;
  ushort *local_c;
  short *local_8;
  
  piVar5 = param_2;
  piVar4 = param_1;
  local_18 = 0;
  local_28 = 0;
  uStack_27 = 0;
  uStack_26 = 0;
  local_24 = 0;
  uStack_22 = 0;
  local_20 = 0;
  uStack_1e = 0;
  bStack_1d = 0;
  uVar7 = *(ushort *)((int)param_1 + 10) & 0x7fff;
  uVar10 = *(ushort *)((int)param_2 + 10) & 0x7fff;
  uVar11 = (*(ushort *)((int)param_2 + 10) ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
  uVar6 = (ushort)uVar7;
  piVar1 = (int *)(uVar10 + uVar7);
  if (((uVar6 < 0x7fff) && (uVar9 = (ushort)uVar10, uVar9 < 0x7fff)) && ((ushort)piVar1 < 0xbffe)) {
    if ((ushort)piVar1 < 0x3fc0) {
LAB_10076582:
      piVar4[2] = 0;
      piVar4[1] = 0;
      *piVar4 = 0;
      return;
    }
    if (((uVar6 != 0) || (piVar1 = (int *)((int)piVar1 + 1), (param_1[2] & 0x7fffffffU) != 0)) ||
       ((uVar6 = 0, param_1[1] != 0 || (*param_1 != 0)))) {
      param_1 = piVar1;
      if (((uVar9 == 0) && (param_1 = (int *)((int)param_1 + 1), (param_2[2] & 0x7fffffffU) == 0))
         && ((param_2[1] == 0 && (*param_2 == 0)))) goto LAB_10076582;
      local_14 = 0;
      local_8 = &local_24;
      param_2 = (int *)0x5;
      do {
        if (0 < (int)param_2) {
          local_c = (ushort *)(local_14 * 2 + (int)piVar4);
          local_10 = (ushort *)(piVar5 + 2);
          local_1c = param_2;
          do {
            iVar8 = FUN_10075f86(*(uint *)(local_8 + -2),(uint)*local_c * (uint)*local_10,
                                 (uint *)(local_8 + -2));
            if (iVar8 != 0) {
              *local_8 = *local_8 + 1;
            }
            local_c = local_c + 1;
            local_10 = local_10 + -1;
            local_1c = (int *)((int)local_1c + -1);
          } while (local_1c != (int *)0x0);
        }
        local_8 = local_8 + 1;
        local_14 = local_14 + 1;
        param_2 = (int *)((int)param_2 + -1);
      } while (0 < (int)param_2);
      param_1 = (int *)((int)param_1 + 0xc002);
      if ((short)(ushort)param_1 < 1) {
LAB_10076636:
        param_1._0_2_ = (ushort)param_1 - 1;
        if ((short)(ushort)param_1 < 0) {
          iVar8 = -(int)(short)(ushort)param_1;
          param_1._0_2_ = (ushort)param_1 + (short)iVar8;
          do {
            if ((local_28 & 1) != 0) {
              local_18 = local_18 + 1;
            }
            FUN_10076033((uint *)&local_28);
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          if (local_18 != 0) {
            local_28 = local_28 | 1;
          }
        }
      }
      else {
        do {
          if ((bStack_1d & 0x80) != 0) break;
          FUN_10076005((uint *)&local_28);
          param_1 = (int *)((int)param_1 + 0xffff);
        } while (0 < (short)(ushort)param_1);
        if ((short)(ushort)param_1 < 1) goto LAB_10076636;
      }
      if ((0x8000 < CONCAT11(uStack_27,local_28)) ||
         (sVar2 = CONCAT11(bStack_1d,uStack_1e), iVar3 = CONCAT22(local_20,uStack_22),
         iVar8 = CONCAT22(local_24,uStack_26),
         (CONCAT22(uStack_26,CONCAT11(uStack_27,local_28)) & 0x1ffff) == 0x18000)) {
        if (CONCAT22(local_24,uStack_26) == -1) {
          iVar8 = 0;
          if (CONCAT22(local_20,uStack_22) == -1) {
            if (CONCAT11(bStack_1d,uStack_1e) == -1) {
              param_1._0_2_ = (ushort)param_1 + 1;
              sVar2 = -0x8000;
              iVar3 = 0;
              iVar8 = 0;
            }
            else {
              sVar2 = CONCAT11(bStack_1d,uStack_1e) + 1;
              iVar3 = 0;
              iVar8 = 0;
            }
          }
          else {
            sVar2 = CONCAT11(bStack_1d,uStack_1e);
            iVar3 = CONCAT22(local_20,uStack_22) + 1;
          }
        }
        else {
          iVar8 = CONCAT22(local_24,uStack_26) + 1;
          sVar2 = CONCAT11(bStack_1d,uStack_1e);
          iVar3 = CONCAT22(local_20,uStack_22);
        }
      }
      local_24 = (short)((uint)iVar8 >> 0x10);
      uStack_26 = (undefined2)iVar8;
      local_20 = (undefined2)((uint)iVar3 >> 0x10);
      uStack_22 = (undefined2)iVar3;
      bStack_1d = (byte)((ushort)sVar2 >> 8);
      uStack_1e = (undefined1)sVar2;
      if (0x7ffe < (ushort)param_1) goto LAB_100766df;
      uVar6 = (ushort)param_1 | uVar11;
      *(undefined2 *)piVar4 = uStack_26;
      *(uint *)((int)piVar4 + 2) = CONCAT22(uStack_22,local_24);
      *(uint *)((int)piVar4 + 6) = CONCAT13(bStack_1d,CONCAT12(uStack_1e,local_20));
    }
    *(ushort *)((int)piVar4 + 10) = uVar6;
  }
  else {
LAB_100766df:
    piVar4[1] = 0;
    *piVar4 = 0;
    piVar4[2] = (-(uint)(uVar11 != 0) & 0x80000000) + 0x7fff8000;
  }
  return;
}

/* 100766ff  FUN_100766ff  (124 bytes)
 * undefined FUN_100766ff(int * param_1, uint param_2, int param_3)
 * called by: FUN_100749c9, FUN_10076127
 */
void __cdecl FUN_100766ff(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 uStack_a;
  undefined *puStack_8;
  
  ppuVar3 = &PTR_s_November_100983e0;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      ppuVar3 = (undefined **)0x10098540;
    }
    if (param_3 == 0) {
      *(undefined2 *)param_1 = 0;
    }
    while (param_2 != 0) {
      ppuVar3 = ppuVar3 + 0x15;
      uVar1 = (int)param_2 >> 3;
      uVar2 = param_2 & 7;
      param_2 = uVar1;
      if (uVar2 != 0) {
        ppuVar4 = ppuVar3 + uVar2 * 3;
        if (0x7fff < *(ushort *)(ppuVar3 + uVar2 * 3)) {
          local_10 = SUB42(*ppuVar4,0);
          local_e._0_2_ = (undefined2)((uint)*ppuVar4 >> 0x10);
          local_e._2_2_ = SUB42(ppuVar4[1],0);
          uStack_a = (undefined2)((uint)ppuVar4[1] >> 0x10);
          puStack_8 = ppuVar4[2];
          local_e = CONCAT22(local_e._2_2_,(undefined2)local_e) + -1;
          ppuVar4 = (undefined **)&local_10;
        }
        FUN_100764df(param_1,(int *)ppuVar4);
      }
    }
  }
  return;
}

/* 1007677b  FUN_1007677b  (691 bytes)
 * undefined FUN_1007677b(uint * param_1, uint * param_2, uint param_3, uint param_4, undefined8 * param_5, undefined8 * param_6)
 * called by: FUN_10074e9a
 */
void __cdecl
FUN_1007677b(uint *param_1,uint *param_2,uint param_3,uint param_4,undefined8 *param_5,
            undefined8 *param_6)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  uVar3 = param_3;
  puVar1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_3 & 0x10) != 0) {
    param_3 = 0xc000008f;
    param_1[1] = param_1[1] | 1;
  }
  if ((uVar3 & 2) != 0) {
    param_3 = 0xc0000093;
    param_1[1] = param_1[1] | 2;
  }
  if ((uVar3 & 1) != 0) {
    param_3 = 0xc0000091;
    param_1[1] = param_1[1] | 4;
  }
  if ((uVar3 & 4) != 0) {
    param_3 = 0xc000008e;
    param_1[1] = param_1[1] | 8;
  }
  if ((uVar3 & 8) != 0) {
    param_3 = 0xc0000090;
    param_1[1] = param_1[1] | 0x10;
  }
  param_1[2] = (~*param_2 & 1) << 4 | param_1[2] & 0xffffffef;
  param_1[2] = (~*param_2 & 4) << 1 | param_1[2] & 0xfffffff7;
  param_1[2] = ~*param_2 >> 1 & 4 | param_1[2] & 0xfffffffb;
  param_1[2] = ~*param_2 >> 3 & 2 | param_1[2] & 0xfffffffd;
  param_1[2] = ~*param_2 >> 5 & 1 | param_1[2] & 0xfffffffe;
  uVar3 = FUN_10076c70();
  puVar2 = param_6;
  if ((uVar3 & 1) != 0) {
    param_1[3] = param_1[3] | 0x10;
  }
  if ((uVar3 & 4) != 0) {
    param_1[3] = param_1[3] | 8;
  }
  if ((uVar3 & 8) != 0) {
    param_1[3] = param_1[3] | 4;
  }
  if ((uVar3 & 0x10) != 0) {
    param_1[3] = param_1[3] | 2;
  }
  if ((uVar3 & 0x20) != 0) {
    param_1[3] = param_1[3] | 1;
  }
  uVar3 = *puVar1 & 0xc00;
  if (uVar3 == 0) {
    *param_1 = *param_1 & 0xfffffffc;
  }
  else {
    if (uVar3 == 0x400) {
      uVar3 = *param_1 & 0xfffffffd | 1;
    }
    else {
      if (uVar3 != 0x800) {
        if (uVar3 == 0xc00) {
          *param_1 = *param_1 | 3;
        }
        goto LAB_100768f0;
      }
      uVar3 = *param_1 & 0xfffffffe | 2;
    }
    *param_1 = uVar3;
  }
LAB_100768f0:
  uVar3 = *puVar1 & 0x300;
  if (uVar3 == 0) {
    uVar3 = *param_1 & 0xffffffeb | 8;
LAB_10076926:
    *param_1 = uVar3;
  }
  else {
    if (uVar3 == 0x200) {
      uVar3 = *param_1 & 0xffffffe7 | 4;
      goto LAB_10076926;
    }
    if (uVar3 == 0x300) {
      *param_1 = *param_1 & 0xffffffe3;
    }
  }
  *param_1 = (param_4 & 0xfff) << 5 | *param_1 & 0xfffe001f;
  param_1[8] = param_1[8] | 1;
  param_1[8] = param_1[8] & 0xffffffe3 | 2;
  *(undefined8 *)(param_1 + 4) = *param_5;
  param_1[0x14] = param_1[0x14] | 1;
  param_1[0x14] = param_1[0x14] & 0xffffffe3 | 2;
  *(undefined8 *)(param_1 + 0x10) = *param_6;
  FUN_10076c7e();
  RaiseException(param_3,0,1,(ULONG_PTR *)&param_1);
  if ((param_1[2] & 0x10) != 0) {
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  if ((param_1[2] & 8) != 0) {
    *puVar1 = *puVar1 & 0xfffffffb;
  }
  if ((param_1[2] & 4) != 0) {
    *puVar1 = *puVar1 & 0xfffffff7;
  }
  if ((param_1[2] & 2) != 0) {
    *puVar1 = *puVar1 & 0xffffffef;
  }
  if ((param_1[2] & 1) != 0) {
    *puVar1 = *puVar1 & 0xffffffdf;
  }
  uVar3 = *param_1 & 3;
  if (uVar3 == 0) {
    *puVar1 = *puVar1 & 0xfffff3ff;
  }
  else {
    if (uVar3 == 1) {
      uVar3 = *puVar1 & 0xfffff7ff | 0x400;
    }
    else {
      if (uVar3 != 2) {
        if (uVar3 == 3) {
          *(byte *)((int)puVar1 + 1) = *(byte *)((int)puVar1 + 1) | 0xc;
        }
        goto LAB_100769fb;
      }
      uVar3 = *puVar1 & 0xfffffbff | 0x800;
    }
    *puVar1 = uVar3;
  }
LAB_100769fb:
  uVar3 = *param_1 >> 2 & 7;
  if (uVar3 == 0) {
    uVar3 = *puVar1 & 0xfffff3ff | 0x300;
  }
  else {
    if (uVar3 != 1) {
      if (uVar3 == 2) {
        *puVar1 = *puVar1 & 0xfffff3ff;
      }
      goto LAB_10076a24;
    }
    uVar3 = *puVar1 & 0xfffff3ff | 0x200;
  }
  *puVar1 = uVar3;
LAB_10076a24:
  *puVar2 = *(undefined8 *)(param_1 + 0x10);
  return;
}

/* 10076a2e  FUN_10076a2e  (535 bytes)
 * bool FUN_10076a2e(uint param_1, double * param_2, uint param_3)
 * called by: FUN_10074e9a
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl FUN_10076a2e(uint param_1,double *param_2,uint param_3)

{
  double dVar1;
  bool bVar2;
  uint uVar3;
  bool bVar4;
  float10 fVar5;
  undefined8 local_10;
  int local_8;
  
  uVar3 = param_1 & 0x1f;
  bVar2 = true;
  if (((param_1 & 8) != 0) && ((param_3 & 1) != 0)) {
    FUN_10076cb0();
    uVar3 = param_1 & 0x17;
    goto LAB_10076c23;
  }
  if (((param_1 & 4) != 0) && ((param_3 & 4) != 0)) {
    FUN_10076cb0();
    uVar3 = param_1 & 0x1b;
    goto LAB_10076c23;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
    if (((param_1 & 2) != 0) && ((param_3 & 0x10) != 0)) {
      bVar4 = (param_1 & 0x10) != 0;
      dVar1 = *param_2;
      if (dVar1 != 0.0) {
        fVar5 = FUN_10075762(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20),&local_8);
        local_8 = local_8 + -0x600;
        if (local_8 < -0x432) {
          local_10 = 0.0;
          bVar4 = bVar2;
        }
        else {
          local_10 = (double)(ulonglong)
                             (SUB87((double)fVar5,0) & 0xfffffffffffff | 0x10000000000000);
          if (local_8 < -0x3fd) {
            local_8 = -0x3fd - local_8;
            do {
              if ((((ulonglong)local_10 & 1) != 0) && (!bVar4)) {
                bVar4 = bVar2;
              }
              uVar3 = (uint)local_10 >> 1;
              if (((ulonglong)local_10 & 0x100000000) != 0) {
                local_10._3_1_ = (byte)((ulonglong)local_10 >> 0x18) >> 1;
                local_10._0_3_ = (undefined3)uVar3;
                local_10._0_4_ = CONCAT13(local_10._3_1_,(undefined3)local_10) | 0x80000000;
                uVar3 = (uint)local_10;
              }
              local_10._0_4_ = uVar3;
              local_10 = (double)CONCAT44(local_10._4_4_ >> 1,(uint)local_10);
              local_8 = local_8 + -1;
            } while (local_8 != 0);
          }
          if ((double)fVar5 < 0.0) {
            local_10 = -local_10;
          }
        }
        *param_2 = local_10;
        bVar2 = bVar4;
      }
      if (bVar2) {
        FUN_10076cb0();
      }
      uVar3 = param_1 & 0x1d;
    }
    goto LAB_10076c23;
  }
  FUN_10076cb0();
  uVar3 = param_3 & 0xc00;
  dVar1 = _DAT_10098130;
  if (uVar3 == 0) {
    if (*param_2 <= 0.0) {
      dVar1 = -_DAT_10098130;
    }
LAB_10076b43:
    *param_2 = dVar1;
  }
  else {
    if (uVar3 == 0x400) {
      dVar1 = _DAT_10098140;
      if (*param_2 <= 0.0) {
        dVar1 = -_DAT_10098130;
      }
      goto LAB_10076b43;
    }
    if (uVar3 == 0x800) {
      if (*param_2 <= 0.0) {
        dVar1 = -_DAT_10098140;
      }
      goto LAB_10076b43;
    }
    if (uVar3 == 0xc00) {
      dVar1 = _DAT_10098140;
      if (*param_2 <= 0.0) {
        dVar1 = -_DAT_10098140;
      }
      goto LAB_10076b43;
    }
  }
  uVar3 = param_1 & 0x1e;
LAB_10076c23:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_10076cb0();
    uVar3 = uVar3 & 0xffffffef;
  }
  return uVar3 == 0;
}

/* 10076c45  FUN_10076c45  (40 bytes)
 * undefined FUN_10076c45(int param_1)
 * called by: FUN_10074e9a
 */
void __cdecl FUN_10076c45(int param_1)

{
  DWORD *pDVar1;
  
  if (param_1 == 1) {
    pDVar1 = FUN_1006edb4();
    *pDVar1 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    pDVar1 = FUN_1006edb4();
    *pDVar1 = 0x22;
    return;
  }
  return;
}

/* 10076c6d  FUN_10076c6d  (3 bytes)
 * undefined4 FUN_10076c6d(void)
 * called by: FUN_10074e9a
 */
undefined4 FUN_10076c6d(void)

{
  return 0;
}

/* 10076c70  FUN_10076c70  (14 bytes)
 * int FUN_10076c70(void)
 * called by: FUN_1007677b
 */
int FUN_10076c70(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}

/* 10076c7e  FUN_10076c7e  (15 bytes)
 * int FUN_10076c7e(void)
 * called by: FUN_1007677b
 */
int FUN_10076c7e(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}

/* 10076c8d  FUN_10076c8d  (35 bytes)
 * int FUN_10076c8d(void)
 * called by: FUN_10074e9a
 */
int FUN_10076c8d(void)

{
  short in_FPUControlWord;
  
  return (int)in_FPUControlWord;
}

/* 10076cb0  FUN_10076cb0  (86 bytes)
 * undefined FUN_10076cb0(void)
 * called by: FUN_10076a2e
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10076cb0(void)

{
  return;
}

/* 10076d06  FUN_10076d06  (125 bytes)
 * int FUN_10076d06(uchar * param_1)
 * called by: FUN_1007514b
 */
int __cdecl FUN_10076d06(uchar *param_1)

{
  int iVar1;
  size_t _MaxCount;
  size_t sVar2;
  int *piVar3;
  
  if (((DAT_101934ec != 0) &&
      ((DAT_10191ddc != (int *)0x0 ||
       (((DAT_10191de4 != 0 && (iVar1 = FUN_10077001(), iVar1 == 0)) && (DAT_10191ddc != (int *)0x0)
        ))))) && (piVar3 = DAT_10191ddc, param_1 != (uchar *)0x0)) {
    _MaxCount = _strlen((char *)param_1);
    for (; (char *)*piVar3 != (char *)0x0; piVar3 = piVar3 + 1) {
      sVar2 = _strlen((char *)*piVar3);
      if (((_MaxCount < sVar2) && (((uchar *)*piVar3)[_MaxCount] == '=')) &&
         (iVar1 = __mbsnbicoll((uchar *)*piVar3,param_1,_MaxCount), iVar1 == 0)) {
        return *piVar3 + 1 + _MaxCount;
      }
    }
  }
  return 0;
}

/* 10076d90  FUN_10076d90  (208 bytes)
 * uint FUN_10076d90(byte.conflict * param_1, byte.conflict * param_2)
 * called by: FUN_10021f60, FUN_10022280, FUN_100224c0, FUN_10023720, FUN_1002a030, FUN_1002f210, FUN_1002f330, FUN_10031890, FUN_1003a3c0, FUN_1003a5d0, FUN_1003a820, FUN_1003ab40, ... (22 total)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_10076d90(void *this,byte_conflict *param_1,byte_conflict *param_2)

{
  byte_conflict bVar1;
  byte_conflict bVar2;
  bool bVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  void *extraout_ECX;
  void *this_00;
  void *extraout_ECX_00;
  uint uVar10;
  uint uVar11;
  uint uVar9;
  
  iVar4 = _DAT_1019238c;
  if (DAT_10191ebc == 0) {
    bVar7 = 0xff;
    do {
      do {
        cVar8 = '\0';
        if (bVar7 == 0) goto LAB_10076dde;
        bVar7 = *param_2;
        param_2 = param_2 + 1;
        bVar6 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar6 == bVar7);
      bVar5 = bVar7 + 0xbf + (-((byte)(bVar7 + 0xbf) < 0x1a) & 0x20U) + 0x41;
      bVar6 = bVar6 + 0xbf;
      bVar7 = bVar6 + (-(bVar6 < 0x1a) & 0x20U) + 0x41;
    } while (bVar7 == bVar5);
    cVar8 = (bVar7 < bVar5) * -2 + '\x01';
LAB_10076dde:
    uVar9 = (uint)cVar8;
  }
  else {
    LOCK();
    _DAT_1019238c = _DAT_1019238c + 1;
    UNLOCK();
    bVar3 = 0 < DAT_10192388;
    if (bVar3) {
      LOCK();
      UNLOCK();
      _DAT_1019238c = iVar4;
      FUN_1006dcfb(0x13);
      this = extraout_ECX;
    }
    uVar11 = (uint)bVar3;
    uVar9 = 0xff;
    uVar10 = 0;
    do {
      do {
        if ((char)uVar9 == '\0') goto LAB_10076e3f;
        bVar1 = *param_2;
        uVar9 = CONCAT31((int3)(uVar9 >> 8),bVar1);
        param_2 = param_2 + 1;
        bVar2 = *param_1;
        uVar10 = CONCAT31((int3)(uVar10 >> 8),bVar2);
        param_1 = param_1 + 1;
      } while (bVar1 == bVar2);
      uVar10 = FUN_10073a7a(this,uVar10);
      uVar9 = FUN_10073a7a(this_00,uVar9);
      this = extraout_ECX_00;
    } while ((byte)uVar10 == (byte)uVar9);
    uVar10 = (uint)((byte)uVar10 < (byte)uVar9);
    uVar9 = (1 - uVar10) - (uint)(uVar10 != 0);
LAB_10076e3f:
    if (uVar11 == 0) {
      LOCK();
      _DAT_1019238c = _DAT_1019238c + -1;
      UNLOCK();
    }
    else {
      FUN_1006dd5c(0x13);
    }
  }
  return uVar9;
}

/* 10076e60  FUN_10076e60  (257 bytes)
 * undefined4 FUN_10076e60(byte.conflict * param_1, char * param_2, void * param_3)
 * called by: FUN_1002a340, FUN_10068ef0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10076e60(byte_conflict *param_1,char *param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  void *this;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  
  iVar2 = _DAT_1019238c;
  uVar6 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_10191ebc == 0) {
      do {
        bVar3 = *param_1;
        cVar1 = *param_2;
        uVar4 = CONCAT11(bVar3,cVar1);
        if (bVar3 == 0) break;
        uVar4 = CONCAT11(bVar3,cVar1);
        uVar7 = (uint)uVar4;
        if (cVar1 == '\0') break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar7 = (uint)CONCAT11(bVar3 + 0x20,cVar1);
        }
        uVar4 = (ushort)uVar7;
        bVar3 = (byte)uVar7;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar4 = (ushort)CONCAT31((int3)(uVar7 >> 8),bVar3 + 0x20);
        }
        bVar3 = (byte)(uVar4 >> 8);
        bVar8 = bVar3 < (byte)uVar4;
        if (bVar3 != (byte)uVar4) goto LAB_10076ebf;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_10076ebf:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_1019238c = _DAT_1019238c + 1;
      UNLOCK();
      bVar8 = 0 < DAT_10192388;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_1019238c = iVar2;
        FUN_1006dcfb(0x13);
      }
      uVar9 = (uint)bVar8;
      uVar5 = 0;
      uVar7 = 0;
      do {
        uVar5 = CONCAT31((int3)(uVar5 >> 8),*param_1);
        uVar7 = CONCAT31((int3)(uVar7 >> 8),*param_2);
        if ((uVar5 == 0) || (uVar7 == 0)) break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        uVar7 = FUN_10073a7a(param_3,uVar7);
        uVar5 = FUN_10073a7a(this,uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_10076f35;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_10076f35:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_1019238c = _DAT_1019238c + -1;
        UNLOCK();
      }
      else {
        FUN_1006dd5c(0x13);
      }
    }
  }
  return uVar6;
}

/* 10076f61  FUN_10076f61  (97 bytes)
 * int FUN_10076f61(uint param_1, int param_2)
 * called by: FUN_100763ba
 */
int __cdecl FUN_10076f61(uint param_1,int param_2)

{
  byte bVar1;
  DWORD *pDVar2;
  byte bVar3;
  
  bVar1 = *(byte *)((&DAT_101923c0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
  if (param_2 == 0x8000) {
    bVar3 = bVar1 & 0x7f;
  }
  else {
    if (param_2 != 0x4000) {
      pDVar2 = FUN_1006edb4();
      *pDVar2 = 0x16;
      return -1;
    }
    bVar3 = bVar1 | 0x80;
  }
  *(byte *)((&DAT_101923c0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = bVar3;
  return (-(uint)((bVar1 & 0x80) != 0) & 0xffffc000) + 0x8000;
}

/* 10077001  FUN_10077001  (110 bytes)
 * undefined4 FUN_10077001(void)
 * called by: FUN_10076d06, FUN_100772ec
 */
undefined4 FUN_10077001(void)

{
  LPCWSTR lpWideCharStr;
  size_t _Size;
  uint *lpMultiByteStr;
  int iVar1;
  undefined4 *puVar2;
  
  lpWideCharStr = (LPCWSTR)*DAT_10191de4;
  puVar2 = DAT_10191de4;
  while( true ) {
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return 0;
    }
    _Size = WideCharToMultiByte(1,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (((_Size == 0) || (lpMultiByteStr = _malloc(_Size), lpMultiByteStr == (uint *)0x0)) ||
       (iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*puVar2,-1,(LPSTR)lpMultiByteStr,_Size,(LPCSTR)0x0,
                                    (LPBOOL)0x0), iVar1 == 0)) break;
    FUN_100772ec(lpMultiByteStr,0);
    lpWideCharStr = (LPCWSTR)puVar2[1];
    puVar2 = puVar2 + 1;
  }
  return 0xffffffff;
}

/* 1007706f  FUN_1007706f  (597 bytes)
 * int FUN_1007706f(LCID param_1, DWORD param_2, byte.conflict * param_3, int param_4, byte.conflict * param_5, int param_6, UINT param_7)
 * called by: __mbsnbicoll
 */
int __cdecl
FUN_1007706f(LCID param_1,DWORD param_2,byte_conflict *param_3,int param_4,byte_conflict *param_5,
            int param_6,UINT param_7)

{
  undefined1 *puVar1;
  int iVar2;
  BOOL BVar3;
  BYTE *pBVar4;
  int iVar5;
  _cpinfo local_40;
  undefined1 *local_2c;
  PCNZWCH local_28;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10082620;
  pcStack_10 = FUN_10072fe4;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffb0;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffb0;
  if (DAT_10192150 == 0) {
    ExceptionList = &local_14;
    iVar2 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar2 == 0) {
      iVar2 = CompareStringA(0,0,"",1,"",1);
      if (iVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10192150 = 2;
      puVar1 = local_1c;
    }
    else {
      DAT_10192150 = 1;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  if (0 < param_4) {
    param_4 = FUN_10072e65((char *)param_3,param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_10072e65((char *)param_5,param_6);
  }
  if (DAT_10192150 == 2) {
    iVar2 = CompareStringA(param_1,param_2,(PCNZCH)param_3,param_4,(PCNZCH)param_5,param_6);
    ExceptionList = local_14;
    return iVar2;
  }
  if (DAT_10192150 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_10191ecc;
    }
    if ((param_4 == 0) || (param_6 == 0)) {
      if (param_4 == param_6) {
        ExceptionList = local_14;
        return 2;
      }
      if (1 < param_6) {
        ExceptionList = local_14;
        return 1;
      }
      if (1 < param_4) {
        ExceptionList = local_14;
        return 3;
      }
      BVar3 = GetCPInfo(param_7,&local_40);
      if (BVar3 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      if (0 < param_4) {
        if (local_40.MaxCharSize < 2) {
          ExceptionList = local_14;
          return 3;
        }
        pBVar4 = local_40.LeadByte;
        while( true ) {
          if (local_40.LeadByte[0] == 0) {
            ExceptionList = local_14;
            return 3;
          }
          if (pBVar4[1] == 0) break;
          if ((*pBVar4 <= *param_3) && (*param_3 <= pBVar4[1])) {
            ExceptionList = local_14;
            return 2;
          }
          pBVar4 = pBVar4 + 2;
          local_40.LeadByte[0] = *pBVar4;
        }
        ExceptionList = local_14;
        return 3;
      }
      if (0 < param_6) {
        if (local_40.MaxCharSize < 2) {
          ExceptionList = local_14;
          return 1;
        }
        pBVar4 = local_40.LeadByte;
        while( true ) {
          if (local_40.LeadByte[0] == 0) {
            ExceptionList = local_14;
            return 1;
          }
          if (pBVar4[1] == 0) break;
          if ((*pBVar4 <= *param_5) && (*param_5 <= pBVar4[1])) {
            ExceptionList = local_14;
            return 2;
          }
          pBVar4 = pBVar4 + 2;
          local_40.LeadByte[0] = *pBVar4;
        }
        ExceptionList = local_14;
        return 1;
      }
    }
    local_20 = MultiByteToWideChar(param_7,9,(LPCSTR)param_3,param_4,(LPWSTR)0x0,0);
    if (local_20 != 0) {
      local_8 = 0;
      FUN_1006b970();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x50) &&
         (local_28 = (PCNZWCH)&stack0xffffffb0, local_1c = &stack0xffffffb0,
         iVar2 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,param_4,(LPWSTR)&stack0xffffffb0,
                                     local_20), iVar2 != 0)) {
        iVar2 = MultiByteToWideChar(param_7,9,(LPCSTR)param_5,param_6,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          local_8 = 1;
          local_24 = iVar2;
          FUN_1006b970();
          local_8 = 0xffffffff;
          if ((&stack0x00000000 != (undefined1 *)0x50) &&
             (local_2c = &stack0xffffffb0, local_1c = &stack0xffffffb0,
             iVar5 = MultiByteToWideChar(param_7,1,(LPCSTR)param_5,param_6,(LPWSTR)&stack0xffffffb0,
                                         iVar2), iVar5 != 0)) {
            iVar2 = CompareStringW(param_1,param_2,local_28,local_20,(PCNZWCH)&stack0xffffffb0,iVar2
                                  );
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

/* 10077226  FUN_10077226  (4 bytes)
 * undefined FUN_10077226()
 */
undefined4 FUN_10077226(void)

{
  return 1;
}

/* 10077295  FUN_10077295  (4 bytes)
 * undefined FUN_10077295()
 */
undefined4 FUN_10077295(void)

{
  return 1;
}

/* 100772ec  FUN_100772ec  (391 bytes)
 * undefined4 FUN_100772ec(uint * param_1, int param_2)
 * called by: FUN_10077001
 */
undefined4 __cdecl FUN_100772ec(uint *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  uint *lpName;
  undefined1 *puVar5;
  int *piVar6;
  bool bVar7;
  
  if (param_1 == (uint *)0x0) {
    return 0xffffffff;
  }
  puVar1 = FUN_10077532(param_1,0x3d);
  if (puVar1 == (uint *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == puVar1) {
    return 0xffffffff;
  }
  bVar7 = *(char *)((int)puVar1 + 1) == '\0';
  if (DAT_10191ddc == DAT_10191de0) {
    DAT_10191ddc = FUN_100774cb(DAT_10191ddc);
  }
  if (DAT_10191ddc == (int *)0x0) {
    if ((param_2 == 0) || (DAT_10191de4 == (undefined4 *)0x0)) {
      if (bVar7) {
        return 0;
      }
      DAT_10191ddc = _malloc(4);
      if (DAT_10191ddc == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_10191ddc = 0;
      if (DAT_10191de4 == (undefined4 *)0x0) {
        DAT_10191de4 = _malloc(4);
        if (DAT_10191de4 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_10191de4 = 0;
      }
    }
    else {
      iVar2 = FUN_10077001();
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
  }
  piVar3 = DAT_10191ddc;
  iVar2 = FUN_10077473((uchar *)param_1,(int)puVar1 - (int)param_1);
  if ((iVar2 < 0) || (*piVar3 == 0)) {
    if (bVar7) {
      return 0;
    }
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    piVar3 = FUN_1006dd71(piVar3,(uint *)(iVar2 * 4 + 8));
    if (piVar3 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar3[iVar2] = (int)param_1;
    piVar3[iVar2 + 1] = 0;
  }
  else {
    if (!bVar7) {
      piVar3[iVar2] = (int)param_1;
      goto LAB_10077420;
    }
    piVar6 = piVar3 + iVar2;
    FUN_1006c158((LPVOID)piVar3[iVar2]);
    for (; *piVar6 != 0; piVar6 = piVar6 + 1) {
      iVar2 = iVar2 + 1;
      *piVar6 = piVar6[1];
    }
    piVar3 = FUN_1006dd71(piVar3,(uint *)(iVar2 << 2));
    if (piVar3 == (int *)0x0) goto LAB_10077420;
  }
  DAT_10191ddc = piVar3;
LAB_10077420:
  if (param_2 != 0) {
    sVar4 = _strlen((char *)param_1);
    lpName = _malloc(sVar4 + 2);
    if (lpName != (uint *)0x0) {
      FUN_100740c0(lpName,param_1);
      puVar5 = (undefined1 *)(((int)lpName - (int)param_1) + (int)puVar1);
      *puVar5 = 0;
      SetEnvironmentVariableA((LPCSTR)lpName,(LPCSTR)(~-(uint)bVar7 & (uint)(puVar5 + 1)));
      FUN_1006c158(lpName);
    }
  }
  return 0;
}

/* 10077473  FUN_10077473  (88 bytes)
 * int FUN_10077473(uchar * param_1, size_t param_2)
 * called by: FUN_100772ec
 */
int __cdecl FUN_10077473(uchar *param_1,size_t param_2)

{
  uchar *_Str2;
  int iVar1;
  int *piVar2;
  
  _Str2 = (uchar *)*DAT_10191ddc;
  piVar2 = DAT_10191ddc;
  while( true ) {
    if (_Str2 == (uchar *)0x0) {
      return -((int)piVar2 - (int)DAT_10191ddc >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,_Str2,param_2);
    if ((iVar1 == 0) &&
       ((*(char *)(*piVar2 + param_2) == '=' || (*(char *)(*piVar2 + param_2) == '\0')))) break;
    _Str2 = (uchar *)piVar2[1];
    piVar2 = piVar2 + 1;
  }
  return (int)piVar2 - (int)DAT_10191ddc >> 2;
}

/* 100774cb  FUN_100774cb  (103 bytes)
 * undefined4 * FUN_100774cb(int * param_1)
 * called by: FUN_100772ec
 */
undefined4 * __cdecl FUN_100774cb(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    piVar2 = param_1;
    while (iVar1 != 0) {
      piVar2 = piVar2 + 1;
      iVar5 = iVar5 + 1;
      iVar1 = *piVar2;
    }
    puVar3 = _malloc(iVar5 * 4 + 4);
    if (puVar3 == (undefined4 *)0x0) {
      __amsg_exit(9);
    }
    puVar4 = (uint *)*param_1;
    puVar6 = puVar3;
    while (puVar4 != (uint *)0x0) {
      param_1 = param_1 + 1;
      puVar4 = FUN_100775c9(puVar4);
      *puVar6 = puVar4;
      puVar6 = puVar6 + 1;
      puVar4 = (uint *)*param_1;
    }
    *puVar6 = 0;
    return puVar3;
  }
  return (undefined4 *)0x0;
}

/* 10077532  FUN_10077532  (151 bytes)
 * uint * FUN_10077532(uint * param_1, uint param_2)
 * called by: FUN_100772ec
 */
uint * __cdecl FUN_10077532(uint *param_1,uint param_2)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  
  if (DAT_1019216c == 0) {
    puVar2 = FUN_1006cc40(param_1,(char)param_2);
  }
  else {
    FUN_1006dcfb(0x19);
    while( true ) {
      bVar1 = (byte)*param_1;
      uVar3 = (uint)bVar1;
      if (bVar1 == 0) break;
      if ((*(byte *)((int)&DAT_10192280 + uVar3 + 1) & 4) == 0) {
        puVar2 = param_1;
        if (param_2 == uVar3) break;
      }
      else {
        puVar2 = (uint *)((int)param_1 + 1);
        if (*(byte *)((int)param_1 + 1) == 0) {
          FUN_1006dd5c(0x19);
          return (uint *)0x0;
        }
        if (param_2 == CONCAT11(bVar1,*(byte *)((int)param_1 + 1))) {
          FUN_1006dd5c(0x19);
          return param_1;
        }
      }
      param_1 = (uint *)((int)puVar2 + 1);
    }
    FUN_1006dd5c(0x19);
    puVar2 = (uint *)(~-(uint)(param_2 != uVar3) & (uint)param_1);
  }
  return puVar2;
}

/* 100775c9  FUN_100775c9  (43 bytes)
 * uint * FUN_100775c9(uint * param_1)
 * called by: FUN_100774cb
 */
uint * __cdecl FUN_100775c9(uint *param_1)

{
  size_t sVar1;
  uint *puVar2;
  
  if (param_1 != (uint *)0x0) {
    sVar1 = _strlen((char *)param_1);
    puVar2 = _malloc(sVar1 + 1);
    if (puVar2 != (uint *)0x0) {
      puVar2 = FUN_100740c0(puVar2,param_1);
      return puVar2;
    }
  }
  return (uint *)0x0;
}

/* 10077606  FUN_10077606  (308 bytes)
 * uint * FUN_10077606(uint * param_1)
 * called by: FUN_100175c0
 */
uint * __cdecl FUN_10077606(uint *param_1)

{
  char cVar1;
  size_t _Size;
  int iVar2;
  uint *puVar3;
  bool bVar4;
  LPWSTR local_c;
  
  local_c = (LPWSTR)0x0;
  if (DAT_10191ebc == 0) {
    cVar1 = (char)*param_1;
    puVar3 = param_1;
    while (cVar1 != '\0') {
      cVar1 = (char)*puVar3;
      if (('`' < cVar1) && (cVar1 < '{')) {
        *(char *)puVar3 = cVar1 + -0x20;
      }
      puVar3 = (uint *)((int)puVar3 + 1);
      cVar1 = *(char *)puVar3;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_1019238c);
    bVar4 = DAT_10192388 == 0;
    if (!bVar4) {
      InterlockedDecrement((LONG *)&DAT_1019238c);
      FUN_1006dcfb(0x13);
    }
    if (DAT_10191ebc == 0) {
      if (bVar4) {
        InterlockedDecrement((LONG *)&DAT_1019238c);
      }
      else {
        FUN_1006dd5c(0x13);
      }
      cVar1 = (char)*param_1;
      puVar3 = param_1;
      while (cVar1 != '\0') {
        cVar1 = (char)*puVar3;
        if (('`' < cVar1) && (cVar1 < '{')) {
          *(char *)puVar3 = cVar1 + -0x20;
        }
        puVar3 = (uint *)((int)puVar3 + 1);
        cVar1 = *(char *)puVar3;
      }
    }
    else {
      _Size = FUN_10072c41(DAT_10191ebc,0x200,(char *)param_1,-1,(LPWSTR)0x0,0,0,1);
      if (((_Size != 0) && (local_c = _malloc(_Size), local_c != (LPWSTR)0x0)) &&
         (iVar2 = FUN_10072c41(DAT_10191ebc,0x200,(char *)param_1,-1,local_c,_Size,0,1), iVar2 != 0)
         ) {
        FUN_100740c0(param_1,(uint *)local_c);
      }
      if (bVar4) {
        InterlockedDecrement((LONG *)&DAT_1019238c);
      }
      else {
        FUN_1006dd5c(0x13);
      }
      FUN_1006c158(local_c);
    }
  }
  return param_1;
}

/* 1007774b  FUN_1007774b  (10 bytes)
 * undefined FUN_1007774b()
 */
void FUN_1007774b(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 1007776b  FUN_1007776b  (10 bytes)
 * undefined FUN_1007776b()
 */
void FUN_1007776b(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 1007778b  FUN_1007778b  (10 bytes)
 * undefined FUN_1007778b()
 */
void FUN_1007778b(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 100777ab  FUN_100777ab  (10 bytes)
 * undefined FUN_100777ab()
 */
void FUN_100777ab(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 10077802  FUN_10077802  (10 bytes)
 * undefined FUN_10077802()
 */
void FUN_10077802(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 10077818  FUN_10077818  (10 bytes)
 * undefined FUN_10077818()
 */
void FUN_10077818(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 10077846  FUN_10077846  (10 bytes)
 * undefined FUN_10077846()
 */
void FUN_10077846(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 1007787c  FUN_1007787c  (10 bytes)
 * undefined FUN_1007787c()
 */
void FUN_1007787c(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 1007789e  FUN_1007789e  (10 bytes)
 * undefined FUN_1007789e()
 */
void FUN_1007789e(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 10077995  FUN_10077995  (10 bytes)
 * undefined FUN_10077995()
 */
void FUN_10077995(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 10077a8b  FUN_10077a8b  (10 bytes)
 * undefined FUN_10077a8b()
 */
void FUN_10077a8b(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 10077aab  FUN_10077aab  (10 bytes)
 * undefined FUN_10077aab()
 */
void FUN_10077aab(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 10077b4c  FUN_10077b4c  (10 bytes)
 * undefined FUN_10077b4c()
 */
void FUN_10077b4c(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 10077ba2  FUN_10077ba2  (10 bytes)
 * undefined FUN_10077ba2()
 */
void FUN_10077ba2(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 10077bbb  FUN_10077bbb  (10 bytes)
 * undefined FUN_10077bbb()
 */
void FUN_10077bbb(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 10077bdb  FUN_10077bdb  (10 bytes)
 * undefined FUN_10077bdb()
 */
void FUN_10077bdb(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 10077bfb  FUN_10077bfb  (10 bytes)
 * undefined FUN_10077bfb()
 */
void FUN_10077bfb(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 10077c1b  FUN_10077c1b  (10 bytes)
 * undefined FUN_10077c1b()
 */
void FUN_10077c1b(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 10077c72  FUN_10077c72  (10 bytes)
 * undefined FUN_10077c72()
 */
void FUN_10077c72(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 10077c9c  FUN_10077c9c  (10 bytes)
 * undefined FUN_10077c9c()
 */
void FUN_10077c9c(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 10077d2b  FUN_10077d2b  (10 bytes)
 * undefined FUN_10077d2b()
 */
void FUN_10077d2b(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 10077d61  FUN_10077d61  (10 bytes)
 * undefined FUN_10077d61()
 */
void FUN_10077d61(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 10077df4  FUN_10077df4  (10 bytes)
 * undefined FUN_10077df4()
 */
void FUN_10077df4(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 10077e16  FUN_10077e16  (10 bytes)
 * undefined FUN_10077e16()
 */
void FUN_10077e16(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 10077e2e  FUN_10077e2e  (10 bytes)
 * undefined FUN_10077e2e()
 */
void FUN_10077e2e(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 10077e4b  FUN_10077e4b  (10 bytes)
 * undefined FUN_10077e4b()
 */
void FUN_10077e4b(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 10077e8c  FUN_10077e8c  (10 bytes)
 * undefined FUN_10077e8c()
 */
void FUN_10077e8c(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 10077eae  FUN_10077eae  (10 bytes)
 * undefined FUN_10077eae()
 */
void FUN_10077eae(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 10078072  FUN_10078072  (10 bytes)
 * undefined FUN_10078072()
 */
void FUN_10078072(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 1007808b  FUN_1007808b  (10 bytes)
 * undefined FUN_1007808b()
 */
void FUN_1007808b(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 100780ab  FUN_100780ab  (10 bytes)
 * undefined FUN_100780ab()
 */
void FUN_100780ab(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 100780cb  FUN_100780cb  (10 bytes)
 * undefined FUN_100780cb()
 */
void FUN_100780cb(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 100780eb  FUN_100780eb  (10 bytes)
 * undefined FUN_100780eb()
 */
void FUN_100780eb(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 10078121  FUN_10078121  (10 bytes)
 * undefined FUN_10078121()
 */
void FUN_10078121(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 100781ae  FUN_100781ae  (10 bytes)
 * undefined FUN_100781ae()
 */
void FUN_100781ae(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

/* 100781cb  FUN_100781cb  (10 bytes)
 * undefined FUN_100781cb()
 */
void FUN_100781cb(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006b035(param_1,param_2,param_3,param_4);
  return;
}

