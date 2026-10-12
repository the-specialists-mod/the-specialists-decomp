/* mp.dll - unnamed_1007a939 (121 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1007a939  FUN_1007a939  (581 bytes)
 * undefined4 FUN_1007a939(void)
 */
undefined4 FUN_1007a939(void)

{
  BYTE *pBVar1;
  LPWORD pWVar2;
  byte bVar3;
  int iVar4;
  undefined2 *puVar5;
  BOOL BVar6;
  BYTE *pBVar7;
  uint uVar8;
  LPCWSTR pWVar9;
  undefined4 uVar10;
  _cpinfo local_28;
  undefined2 *local_14;
  undefined2 *local_10;
  LPCWSTR local_c;
  LPCSTR local_8;
  
  uVar10 = 0;
  local_8 = (LPCSTR)0x0;
  local_c = (LPCWSTR)0x0;
  if (DAT_102e0214 == 0) {
    PTR_DAT_1009b9b8 = &DAT_1009b9c2;
    PTR_DAT_1009b9bc = &DAT_1009b9c2;
    FUN_1006f7f9((undefined *)DAT_102e0368);
    FUN_1006f7f9((undefined *)DAT_102e036c);
    DAT_102e0368 = (undefined2 *)0x0;
    DAT_102e036c = (undefined2 *)0x0;
    return 0;
  }
  if ((DAT_102e0224 != 0) ||
     (iVar4 = FUN_1007e3bc(0,(uint)DAT_102e037c,0x1004,(char *)&DAT_102e0224), iVar4 == 0)) {
    puVar5 = _malloc(0x202);
    local_14 = puVar5;
    local_10 = _malloc(0x202);
    local_8 = _malloc(0x101);
    local_c = _malloc(0x202);
    if ((puVar5 != (undefined2 *)0x0) &&
       (((local_10 != (undefined2 *)0x0 && (local_8 != (LPCSTR)0x0)) && (local_c != (LPCWSTR)0x0))))
    {
      iVar4 = 0;
      do {
        local_8[iVar4] = (CHAR)iVar4;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x100);
      BVar6 = GetCPInfo(DAT_102e0224,&local_28);
      if ((BVar6 != 0) && (local_28.MaxCharSize < 3)) {
        DAT_1009bbc4 = local_28.MaxCharSize & 0xffff;
        if ((1 < DAT_1009bbc4) && (local_28.LeadByte[0] != '\0')) {
          pBVar7 = local_28.LeadByte + 1;
          do {
            bVar3 = *pBVar7;
            if (bVar3 == 0) break;
            for (uVar8 = (uint)pBVar7[-1]; (int)uVar8 <= (int)(uint)bVar3; uVar8 = uVar8 + 1) {
              local_8[uVar8] = '\0';
              bVar3 = *pBVar7;
            }
            pBVar1 = pBVar7 + 1;
            pBVar7 = pBVar7 + 2;
          } while (*pBVar1 != 0);
        }
        BVar6 = FUN_100747c7(1,local_8,0x100,puVar5 + 1,0,0,0);
        if (BVar6 != 0) {
          *puVar5 = 0;
          iVar4 = 0;
          pWVar9 = local_c;
          do {
            *pWVar9 = (WCHAR)iVar4;
            pWVar9 = pWVar9 + 1;
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0x100);
          pWVar2 = local_10 + 1;
          BVar6 = FUN_1007e4fa(1,local_c,0x100,pWVar2,0,0);
          if (BVar6 != 0) {
            *local_10 = 0;
            if ((1 < (int)DAT_1009bbc4) && (local_28.LeadByte[0] != '\0')) {
              pBVar7 = local_28.LeadByte + 1;
              do {
                if (*pBVar7 == 0) break;
                uVar8 = (uint)pBVar7[-1];
                if (uVar8 <= *pBVar7) {
                  puVar5 = local_14 + uVar8 + 1;
                  do {
                    *puVar5 = 0x8000;
                    uVar8 = uVar8 + 1;
                    puVar5 = puVar5 + 1;
                  } while ((int)uVar8 <= (int)(uint)*pBVar7);
                }
                pBVar1 = pBVar7 + 1;
                pBVar7 = pBVar7 + 2;
              } while (*pBVar1 != 0);
            }
            PTR_DAT_1009b9b8 = (undefined *)(local_14 + 1);
            PTR_DAT_1009b9bc = (undefined *)pWVar2;
            if (DAT_102e0368 != (undefined2 *)0x0) {
              FUN_1006f7f9((undefined *)DAT_102e0368);
            }
            DAT_102e0368 = local_14;
            if (DAT_102e036c != (undefined2 *)0x0) {
              FUN_1006f7f9((undefined *)DAT_102e036c);
            }
            DAT_102e036c = local_10;
            goto LAB_1007ab17;
          }
        }
      }
    }
  }
  FUN_1006f7f9((undefined *)local_14);
  FUN_1006f7f9((undefined *)local_10);
  uVar10 = 1;
LAB_1007ab17:
  FUN_1006f7f9(local_8);
  FUN_1006f7f9((undefined *)local_c);
  return uVar10;
}

/* 1007ab7e  FUN_1007ab7e  (3 bytes)
 * undefined FUN_1007ab7e()
 */
undefined4 FUN_1007ab7e(void)

{
  return 0;
}

/* 1007ab90  FUN_1007ab90  (62 bytes)
 * int FUN_1007ab90(byte.conflict * param_1, byte.conflict * param_2)
 * called by: FUN_10073eff, FUN_10074459
 */
int __cdecl FUN_1007ab90(byte_conflict *param_1,byte_conflict *param_2)

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

/* 1007abd0  FUN_1007abd0  (58 bytes)
 * byte.conflict * FUN_1007abd0(byte.conflict * param_1, byte.conflict * param_2)
 * called by: FUN_10073eff
 */
byte_conflict * __cdecl FUN_1007abd0(byte_conflict *param_1,byte_conflict *param_2)

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

/* 1007ac0a  FUN_1007ac0a  (381 bytes)
 * undefined4 FUN_1007ac0a(char * param_1, undefined2 * param_2, int param_3)
 * called by: FUN_10074319
 */
undefined4 __thiscall FUN_1007ac0a(void *this,char *param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  void *extraout_ECX;
  void *extraout_ECX_00;
  
  if (DAT_102e03b4 == (code *)0x0) {
    iVar1 = FUN_1007b33b();
    this = extraout_ECX;
    if (iVar1 == 0) {
      DAT_102e03b4 = FUN_1007b371;
    }
    else {
      DAT_102e03b4 = GetLocaleInfoA_exref;
    }
  }
  if (param_1 != (char *)0x0) {
    DAT_102e03a4 = param_1;
    if (*param_1 != '\0') {
      FUN_1007ad87(this,0x1009eb60,0x40,(byte_conflict *)&DAT_102e03a4);
      this = extraout_ECX_00;
    }
    DAT_102e03a8 = param_1 + 0x40;
    if ((DAT_102e03a8 != (char *)0x0) && (*DAT_102e03a8 != '\0')) {
      FUN_1007ad87(this,0x1009eaa8,0x16,(byte_conflict *)&DAT_102e03a8);
    }
    DAT_102e03ac = 0;
    if ((DAT_102e03a4 != (char *)0x0) && (*DAT_102e03a4 != '\0')) {
      if ((DAT_102e03a8 == (char *)0x0) || (*DAT_102e03a8 == '\0')) {
        FUN_1007b06a();
      }
      else {
        FUN_1007addf();
      }
      goto LAB_1007acc7;
    }
    if ((DAT_102e03a8 != (char *)0x0) && (*DAT_102e03a8 != '\0')) {
      FUN_1007b17d();
      goto LAB_1007acc7;
    }
  }
  FUN_1007b23a();
LAB_1007acc7:
  if ((((DAT_102e03ac == 0) || (uVar2 = FUN_1007b254((byte_conflict *)(param_1 + 0x80)), uVar2 == 0)
       ) || (BVar3 = IsValidCodePage(uVar2 & 0xffff), BVar3 == 0)) ||
     (BVar3 = IsValidLocale(DAT_102e0394,1), BVar3 == 0)) {
    return 0;
  }
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = (undefined2)DAT_102e0394;
    param_2[1] = (undefined2)DAT_102e03b0;
    param_2[2] = (short)uVar2;
  }
  if (param_3 != 0) {
    iVar1 = (*DAT_102e03b4)(DAT_102e0394,0x1001,param_3,0x40);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = (*DAT_102e03b4)(DAT_102e03b0,0x1002,param_3 + 0x40,0x40);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_1007e6bf(uVar2,(char *)(param_3 + 0x80),10);
  }
  return 1;
}

/* 1007ad87  FUN_1007ad87  (88 bytes)
 * undefined FUN_1007ad87(int param_1, int param_2, byte.conflict * param_3)
 * called by: FUN_1007ac0a
 */
void __thiscall FUN_1007ad87(void *this,int param_1,int param_2,byte_conflict *param_3)

{
  byte_conflict *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  uVar2 = 1;
  if (-1 < param_2) {
    do {
      if (uVar2 == 0) {
        return;
      }
      iVar4 = (param_2 + iVar3) / 2;
      pbVar1 = *(byte_conflict **)(param_1 + iVar4 * 8);
      uVar2 = FUN_1007e860(this,*(byte_conflict **)param_3,pbVar1);
      this = pbVar1;
      if (uVar2 == 0) {
        *(int *)param_3 = param_1 + iVar4 * 8 + 4;
        this = param_3;
      }
      else if ((int)uVar2 < 0) {
        param_2 = iVar4 + -1;
      }
      else {
        iVar3 = iVar4 + 1;
      }
    } while (iVar3 <= param_2);
  }
  return;
}

/* 1007addf  FUN_1007addf  (135 bytes)
 * undefined FUN_1007addf(void)
 * called by: FUN_1007ac0a
 */
void FUN_1007addf(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_102e03a4);
  DAT_102e03a0 = (uint)(sVar1 == 3);
  sVar1 = _strlen(DAT_102e03a8);
  DAT_102e0398 = (uint)(sVar1 == 3);
  DAT_102e0394 = 0;
  if (DAT_102e03a0 == 0) {
    DAT_102e039c = FUN_1007b490(DAT_102e03a4);
  }
  else {
    DAT_102e039c = 2;
  }
  EnumSystemLocalesA(FUN_1007ae66,1);
  if ((((DAT_102e03ac & 0x100) == 0) || ((DAT_102e03ac & 0x200) == 0)) || ((DAT_102e03ac & 7) == 0))
  {
    DAT_102e03ac = 0;
  }
  return;
}

/* 1007ae66  FUN_1007ae66  (516 bytes)
 * uint FUN_1007ae66(char * param_1)
 */
uint FUN_1007ae66(char *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  void *this;
  void *this_00;
  void *this_01;
  byte_conflict local_7c [120];
  
  iVar1 = FUN_1007b457(param_1);
  iVar2 = (*DAT_102e03b4)(iVar1,(-(uint)(DAT_102e0398 != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_102e03ac = 0;
    return 1;
  }
  uVar3 = FUN_1007e860(this,DAT_102e03a8,local_7c);
  if (uVar3 == 0) {
    iVar2 = (*DAT_102e03b4)(iVar1,(-(uint)(DAT_102e03a0 != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
    if (iVar2 == 0) {
      DAT_102e03ac = 0;
      return 1;
    }
    uVar3 = FUN_1007e860(this_00,DAT_102e03a4,local_7c);
    if (uVar3 == 0) {
      DAT_102e03ac = DAT_102e03ac | 0x304;
      DAT_102e03b0 = iVar1;
LAB_1007af0c:
      DAT_102e0394 = iVar1;
    }
    else if ((DAT_102e03ac & 2) == 0) {
      if ((DAT_102e039c == (void *)0x0) ||
         (iVar2 = FUN_1007e930(DAT_102e03a4,(char *)local_7c,DAT_102e039c), iVar2 != 0)) {
        if (((DAT_102e03ac & 1) == 0) && (iVar2 = FUN_1007b2ba((short)iVar1), iVar2 != 0)) {
          DAT_102e03ac = DAT_102e03ac | 1;
          DAT_102e03b0 = iVar1;
        }
      }
      else {
        DAT_102e03ac = DAT_102e03ac | 2;
        DAT_102e03b0 = iVar1;
        pvVar4 = (void *)_strlen((char *)DAT_102e03a4);
        if (pvVar4 == DAT_102e039c) goto LAB_1007af0c;
      }
    }
  }
  if ((DAT_102e03ac & 0x300) == 0x300) goto LAB_1007b056;
  iVar2 = (*DAT_102e03b4)(iVar1,(-(uint)(DAT_102e03a0 != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_102e03ac = 0;
    return 1;
  }
  uVar3 = FUN_1007e860(this_01,DAT_102e03a4,local_7c);
  if (uVar3 == 0) {
    DAT_102e03ac = DAT_102e03ac | 0x200;
    if (((DAT_102e03a0 == 0) && (DAT_102e039c != (void *)0x0)) &&
       (pvVar4 = (void *)_strlen((char *)DAT_102e03a4), pvVar4 == DAT_102e039c)) {
      iVar2 = 1;
      goto LAB_1007b035;
    }
  }
  else {
    if (((DAT_102e03a0 != 0) || (DAT_102e039c == (void *)0x0)) ||
       (iVar2 = FUN_1007e930(DAT_102e03a4,(char *)local_7c,DAT_102e039c), iVar2 != 0))
    goto LAB_1007b056;
    iVar2 = 0;
LAB_1007b035:
    iVar2 = FUN_1007b2d9(iVar1,iVar2);
    if (iVar2 == 0) goto LAB_1007b056;
  }
  DAT_102e03ac = DAT_102e03ac | 0x100;
  if (DAT_102e0394 == 0) {
    DAT_102e0394 = iVar1;
  }
LAB_1007b056:
  return ~DAT_102e03ac >> 2 & 1;
}

/* 1007b06a  FUN_1007b06a  (86 bytes)
 * undefined FUN_1007b06a(void)
 * called by: FUN_1007ac0a
 */
void FUN_1007b06a(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_102e03a4);
  DAT_102e03a0 = (uint)(sVar1 == 3);
  if (sVar1 == 3) {
    DAT_102e039c = 2;
  }
  else {
    DAT_102e039c = FUN_1007b490(DAT_102e03a4);
  }
  EnumSystemLocalesA(FUN_1007b0c0,1);
  if ((DAT_102e03ac & 4) == 0) {
    DAT_102e03ac = 0;
  }
  return;
}

/* 1007b0c0  FUN_1007b0c0  (189 bytes)
 * uint FUN_1007b0c0(char * param_1)
 */
uint FUN_1007b0c0(char *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *this;
  byte_conflict local_7c [120];
  
  iVar1 = FUN_1007b457(param_1);
  iVar2 = (*DAT_102e03b4)(iVar1,(-(uint)(DAT_102e03a0 != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_102e03ac = 0;
    return 1;
  }
  uVar3 = FUN_1007e860(this,DAT_102e03a4,local_7c);
  if (uVar3 == 0) {
    if (DAT_102e03a0 == 0) {
      iVar2 = 1;
      goto LAB_1007b14c;
    }
  }
  else {
    if (((DAT_102e03a0 != 0) || (DAT_102e039c == (void *)0x0)) ||
       (iVar2 = FUN_1007e930(DAT_102e03a4,(char *)local_7c,DAT_102e039c), iVar2 != 0))
    goto LAB_1007b16b;
    iVar2 = 0;
LAB_1007b14c:
    iVar2 = FUN_1007b2d9(iVar1,iVar2);
    if (iVar2 == 0) goto LAB_1007b16b;
  }
  DAT_102e03ac = DAT_102e03ac | 4;
  DAT_102e0394 = iVar1;
  DAT_102e03b0 = iVar1;
LAB_1007b16b:
  return ~DAT_102e03ac >> 2 & 1;
}

/* 1007b17d  FUN_1007b17d  (55 bytes)
 * undefined FUN_1007b17d(void)
 * called by: FUN_1007ac0a
 */
void FUN_1007b17d(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_102e03a8);
  DAT_102e0398 = (uint)(sVar1 == 3);
  EnumSystemLocalesA(FUN_1007b1b4,1);
  if ((DAT_102e03ac & 4) == 0) {
    DAT_102e03ac = 0;
  }
  return;
}

/* 1007b1b4  FUN_1007b1b4  (134 bytes)
 * uint FUN_1007b1b4(char * param_1)
 */
uint FUN_1007b1b4(char *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *this;
  byte_conflict local_7c [120];
  
  iVar1 = FUN_1007b457(param_1);
  iVar2 = (*DAT_102e03b4)(iVar1,(-(uint)(DAT_102e0398 != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_102e03ac = 0;
    uVar3 = 1;
  }
  else {
    uVar3 = FUN_1007e860(this,DAT_102e03a8,local_7c);
    if (uVar3 == 0) {
      iVar2 = FUN_1007b2ba((short)iVar1);
      if (iVar2 != 0) {
        DAT_102e03ac = DAT_102e03ac | 4;
        DAT_102e0394 = iVar1;
        DAT_102e03b0 = iVar1;
      }
    }
    uVar3 = ~DAT_102e03ac >> 2 & 1;
  }
  return uVar3;
}

/* 1007b23a  FUN_1007b23a  (26 bytes)
 * undefined FUN_1007b23a(void)
 * called by: FUN_1007ac0a
 */
void FUN_1007b23a(void)

{
  DAT_102e03ac._0_2_ = (ushort)DAT_102e03ac | 0x104;
  DAT_102e03b0 = GetUserDefaultLCID();
  DAT_102e0394 = DAT_102e03b0;
  return;
}

/* 1007b254  FUN_1007b254  (102 bytes)
 * undefined FUN_1007b254(byte.conflict * param_1)
 * called by: FUN_1007ac0a
 */
void __cdecl FUN_1007b254(byte_conflict *param_1)

{
  int iVar1;
  undefined *extraout_ECX;
  undefined4 uVar2;
  undefined *this;
  byte_conflict local_c [8];
  
  if (((param_1 == (byte_conflict *)0x0) || (*param_1 == '\0')) ||
     (iVar1 = _strcmp((char *)param_1,"ACP"), iVar1 == 0)) {
    uVar2 = 0x1004;
  }
  else {
    this = &DAT_1008aec4;
    iVar1 = _strcmp((char *)param_1,"OCP");
    if (iVar1 != 0) goto LAB_1007b2b0;
    uVar2 = 0xb;
  }
  iVar1 = (*DAT_102e03b4)(DAT_102e03b0,uVar2,local_c,8);
  if (iVar1 == 0) {
    return;
  }
  param_1 = local_c;
  this = extraout_ECX;
LAB_1007b2b0:
  FUN_1006e152(this,param_1);
  return;
}

/* 1007b2ba  FUN_1007b2ba  (31 bytes)
 * undefined4 FUN_1007b2ba(short param_1)
 * called by: FUN_1007ae66, FUN_1007b1b4
 */
undefined4 __cdecl FUN_1007b2ba(short param_1)

{
  short *psVar1;
  
  psVar1 = &DAT_1009ea94;
  do {
    if (param_1 == *psVar1) {
      return 0;
    }
    psVar1 = psVar1 + 1;
  } while ((int)psVar1 < 0x1009eaa8);
  return 1;
}

/* 1007b2d9  FUN_1007b2d9  (98 bytes)
 * undefined4 FUN_1007b2d9(int param_1, int param_2)
 * called by: FUN_1007ae66, FUN_1007b0c0
 */
undefined4 __cdecl FUN_1007b2d9(int param_1,int param_2)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  char local_7c [120];
  
  iVar1 = (*DAT_102e03b4)((ushort)param_1 & 0x3ff | 0x400,1,local_7c,0x78);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_1007b457(local_7c);
  if ((param_1 != iVar1) && (param_2 != 0)) {
    sVar2 = FUN_1007b490(DAT_102e03a4);
    sVar3 = _strlen(DAT_102e03a4);
    if (sVar2 == sVar3) {
      return 0;
    }
  }
  return 1;
}

/* 1007b33b  FUN_1007b33b  (54 bytes)
 * undefined4 FUN_1007b33b(void)
 * called by: FUN_1007ac0a
 */
undefined4 FUN_1007b33b(void)

{
  BOOL BVar1;
  _OSVERSIONINFOA local_98;
  
  local_98.dwOSVersionInfoSize = 0x94;
  BVar1 = GetVersionExA(&local_98);
  if ((BVar1 != 0) && (local_98.dwPlatformId == 2)) {
    return 1;
  }
  return 0;
}

/* 1007b371  FUN_1007b371  (230 bytes)
 * int FUN_1007b371(uint param_1, LCTYPE param_2, char * param_3, int param_4)
 */
int FUN_1007b371(uint param_1,LCTYPE param_2,char *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *_Source;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0x1a;
  do {
    iVar2 = (iVar3 + iVar4) / 2;
    uVar1 = *(uint *)(iVar2 * 0x2c + 0x1009e5f0);
    if (param_1 == uVar1) {
      if (param_2 == 1) {
        _Source = &DAT_1009e5f4 + iVar2 * 0x2c;
      }
      else if (param_2 == 3) {
        _Source = &DAT_1009e600 + iVar2 * 0x2c;
      }
      else if (param_2 == 7) {
        _Source = &DAT_1009e608 + iVar2 * 0x2c;
      }
      else if (param_2 == 0xb) {
        _Source = &DAT_1009e60c + iVar2 * 0x2c;
      }
      else if (param_2 == 0x1001) {
        _Source = *(char **)(iVar2 * 0x2c + 0x1009e5fc);
      }
      else if (param_2 == 0x1002) {
        _Source = *(char **)(iVar2 * 0x2c + 0x1009e604);
      }
      else {
        if (param_2 != 0x1004) break;
        _Source = &DAT_1009e614 + iVar2 * 0x2c;
      }
      if ((_Source != (char *)0x0) && (0 < param_4)) {
        _strncpy(param_3,_Source,param_4 - 1);
        param_3[param_4 + -1] = '\0';
        return 1;
      }
      break;
    }
    if (param_1 < uVar1) {
      iVar3 = iVar2 + -1;
    }
    else {
      iVar4 = iVar2 + 1;
    }
  } while (iVar4 <= iVar3);
  iVar3 = GetLocaleInfoA(param_1,param_2,param_3,param_4);
  return iVar3;
}

/* 1007b457  FUN_1007b457  (57 bytes)
 * int FUN_1007b457(char * param_1)
 * called by: FUN_1007ae66, FUN_1007b0c0, FUN_1007b1b4, FUN_1007b2d9
 */
int __cdecl FUN_1007b457(char *param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = 0;
  while( true ) {
    cVar2 = *param_1;
    param_1 = param_1 + 1;
    if (cVar2 == '\0') break;
    if ((cVar2 < 'a') || ('f' < cVar2)) {
      if (('@' < cVar2) && (cVar2 < 'G')) {
        cVar2 = cVar2 + -7;
      }
    }
    else {
      cVar2 = cVar2 + -0x27;
    }
    iVar1 = (iVar1 + 0xffffffd) * 0x10 + (int)cVar2;
  }
  return iVar1;
}

/* 1007b490  FUN_1007b490  (33 bytes)
 * int FUN_1007b490(char * param_1)
 * called by: FUN_1007addf, FUN_1007b06a, FUN_1007b2d9
 */
int __cdecl FUN_1007b490(char *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    if (((cVar1 < 'A') || ('Z' < cVar1)) && ((cVar1 < 'a' || ('z' < cVar1)))) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

/* 1007b532  FUN_1007b532  (291 bytes)
 * uint FUN_1007b532(void)
 * called by: FUN_1007b792, FUN_1007b964
 */
uint FUN_1007b532(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int local_8;
  int local_4;
  
  uVar4 = 0xffffffff;
  FUN_10073e71(0x12);
  local_8 = 0;
  local_4 = 0;
  piVar3 = &DAT_102e0700;
  while (puVar2 = (undefined4 *)*piVar3, puVar1 = puVar2, puVar2 != (undefined4 *)0x0) {
    for (; puVar2 < puVar1 + 0x120; puVar2 = puVar2 + 9) {
      if ((*(byte *)(puVar2 + 1) & 1) == 0) {
        if (puVar2[2] == 0) {
          FUN_10073e71(0x11);
          if (puVar2[2] == 0) {
            InitializeCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
            puVar2[2] = puVar2[2] + 1;
          }
          FUN_10073ed2(0x11);
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
        if ((*(byte *)(puVar2 + 1) & 1) == 0) {
          *puVar2 = 0xffffffff;
          uVar4 = ((int)puVar2 - *piVar3) / 0x24 + local_4;
          if (uVar4 != 0xffffffff) goto LAB_1007b644;
          break;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
      }
      puVar1 = (undefined4 *)*piVar3;
    }
    local_4 = local_4 + 0x20;
    piVar3 = piVar3 + 1;
    local_8 = local_8 + 1;
    if (0x102e07ff < (int)piVar3) goto LAB_1007b644;
  }
  puVar2 = _malloc(0x480);
  if (puVar2 != (undefined4 *)0x0) {
    DAT_102e0800 = DAT_102e0800 + 0x20;
    (&DAT_102e0700)[local_8] = puVar2;
    puVar1 = puVar2;
    for (; puVar2 < puVar1 + 0x120; puVar2 = puVar2 + 9) {
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar2 = 0xffffffff;
      puVar2[2] = 0;
      *(undefined1 *)((int)puVar2 + 5) = 10;
      puVar1 = (undefined4 *)(&DAT_102e0700)[local_8];
    }
    uVar4 = local_8 << 5;
    FUN_1007b839(uVar4);
  }
LAB_1007b644:
  FUN_10073ed2(0x12);
  return uVar4;
}

/* 1007b655  FUN_1007b655  (124 bytes)
 * undefined4 FUN_1007b655(uint param_1, HANDLE param_2)
 * called by: FUN_1007b792, FUN_1007b964
 */
undefined4 __cdecl FUN_1007b655(uint param_1,HANDLE param_2)

{
  DWORD *pDVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if (param_1 < DAT_102e0800) {
    iVar2 = (param_1 & 0x1f) * 0x24;
    if (*(int *)((&DAT_102e0700)[(int)param_1 >> 5] + iVar2) == -1) {
      if (DAT_102e0158 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1007b6ae;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_1007b6ae:
      *(HANDLE *)((&DAT_102e0700)[(int)param_1 >> 5] + iVar2) = param_2;
      return 0;
    }
  }
  pDVar1 = FUN_100757d8();
  *pDVar1 = 9;
  pDVar1 = FUN_100757e1();
  *pDVar1 = 0;
  return 0xffffffff;
}

/* 1007b6d1  FUN_1007b6d1  (127 bytes)
 * undefined4 FUN_1007b6d1(uint param_1)
 * called by: FUN_10074acd
 */
undefined4 __cdecl FUN_1007b6d1(uint param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_102e0800) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_102e0700)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_102e0158 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1007b72d;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_1007b72d:
      *(undefined4 *)((&DAT_102e0700)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_100757d8();
  *pDVar2 = 9;
  pDVar2 = FUN_100757e1();
  *pDVar2 = 0;
  return 0xffffffff;
}

/* 1007b750  FUN_1007b750  (66 bytes)
 * undefined4 FUN_1007b750(uint param_1)
 * called by: FUN_10074acd, FUN_1007584f, FUN_1007b8ba, FUN_1007ea8a
 */
undefined4 __cdecl FUN_1007b750(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_102e0800) &&
     ((*(byte *)((&DAT_102e0700)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_102e0700)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_100757d8();
  *pDVar1 = 9;
  pDVar1 = FUN_100757e1();
  *pDVar1 = 0;
  return 0xffffffff;
}

/* 1007b792  FUN_1007b792  (167 bytes)
 * uint FUN_1007b792(HANDLE param_1, uint param_2)
 */
uint __cdecl FUN_1007b792(HANDLE param_1,uint param_2)

{
  DWORD DVar1;
  uint uVar2;
  DWORD *pDVar3;
  byte bVar4;
  
  bVar4 = 0;
  if ((param_2 & 8) != 0) {
    bVar4 = 0x20;
  }
  if ((param_2 & 0x4000) != 0) {
    bVar4 = bVar4 | 0x80;
  }
  if ((param_2 & 0x80) != 0) {
    bVar4 = bVar4 | 0x10;
  }
  DVar1 = GetFileType(param_1);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    FUN_10075765(DVar1);
  }
  else {
    if (DVar1 == 2) {
      bVar4 = bVar4 | 0x40;
    }
    else if (DVar1 == 3) {
      bVar4 = bVar4 | 8;
    }
    uVar2 = FUN_1007b532();
    if (uVar2 != 0xffffffff) {
      FUN_1007b655(uVar2,param_1);
      *(byte *)((&DAT_102e0700)[(int)uVar2 >> 5] + 4 + (uVar2 & 0x1f) * 0x24) = bVar4 | 1;
      FUN_1007b898(uVar2);
      return uVar2;
    }
    pDVar3 = FUN_100757d8();
    *pDVar3 = 0x18;
    pDVar3 = FUN_100757e1();
    *pDVar3 = 0;
  }
  return 0xffffffff;
}

/* 1007b839  FUN_1007b839  (95 bytes)
 * undefined FUN_1007b839(uint param_1)
 * called by: FUN_10074a70, FUN_10074ff5, FUN_10075575, FUN_100757ea, FUN_1007b532, FUN_1007b8ba, FUN_1007ea31, FUN_1007f3b8
 */
void __cdecl FUN_1007b839(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_102e0700)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_10073e71(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_10073ed2(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_102e0700)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}

/* 1007b898  FUN_1007b898  (34 bytes)
 * undefined FUN_1007b898(uint param_1)
 * called by: FUN_10074a70, FUN_10074ff5, FUN_10075575, FUN_100757ea, FUN_1007b792, FUN_1007b8ba, FUN_1007b964, FUN_1007ea31, FUN_1007f3b8
 */
void __cdecl FUN_1007b898(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_102e0700)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}

/* 1007b8ba  FUN_1007b8ba  (147 bytes)
 * undefined4 FUN_1007b8ba(uint param_1)
 * called by: FUN_10074baa
 */
undefined4 __cdecl FUN_1007b8ba(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_102e0800 <= param_1) {
LAB_1007b93b:
    pDVar3 = FUN_100757d8();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_102e0700)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_1007b93b;
  FUN_1007b839(param_1);
  if ((*(byte *)((&DAT_102e0700)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_1007b750(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_1007b930;
    pDVar3 = FUN_100757e1();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_100757d8();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_1007b930:
  FUN_1007b898(param_1);
  return uVar5;
}

/* 1007b964  FUN_1007b964  (719 bytes)
 * uint FUN_1007b964(LPCSTR param_1, uint param_2, uint param_3, uint param_4)
 * called by: FUN_10074dbd
 */
uint __cdecl FUN_1007b964(LPCSTR param_1,uint param_2,uint param_3,uint param_4)

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
  if (((param_2 & 0x8000) == 0) && (((param_2 & 0x4000) != 0 || (DAT_102e03f0 != 0x8000)))) {
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
    if (uVar2 != 2) goto LAB_1007ba68;
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
    if (param_3 != 0x40) goto LAB_1007ba68;
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
      if (uVar2 == 0x200) goto LAB_1007ba82;
      if (uVar2 != 0x300) goto LAB_1007ba68;
      local_c = 2;
    }
  }
  else {
    if (uVar2 != 0x500) {
      if (uVar2 == 0x600) {
LAB_1007ba82:
        local_c = 5;
        goto LAB_1007ba92;
      }
      if (uVar2 != 0x700) {
LAB_1007ba68:
        pDVar4 = FUN_100757d8();
        *pDVar4 = 0x16;
        pDVar4 = FUN_100757e1();
        *pDVar4 = 0;
        return 0xffffffff;
      }
    }
    local_c = 1;
  }
LAB_1007ba92:
  uVar2 = 0x80;
  if (((param_2 & 0x100) != 0) && ((~DAT_102e015c & param_4 & 0x80) == 0)) {
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
  uVar3 = FUN_1007b532();
  if (uVar3 == 0xffffffff) {
    pDVar4 = FUN_100757d8();
    *pDVar4 = 0x18;
    pDVar4 = FUN_100757e1();
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
      FUN_1007b655(uVar3,hFile);
      iVar7 = (uVar3 & 0x1f) * 0x24;
      param_1._3_1_ = local_5 & 0x48;
      *(byte *)((&DAT_102e0700)[(int)uVar3 >> 5] + 4 + iVar7) = local_5 | 1;
      if ((((local_5 & 0x48) == 0) && ((local_5 & 0x80) != 0)) && ((param_2 & 2) != 0)) {
        local_14 = FUN_1007584f(uVar3,-1,2);
        if (local_14 == 0xffffffff) {
          pDVar4 = FUN_100757e1();
          if (*pDVar4 == 0x83) goto LAB_1007bc0c;
        }
        else {
          param_3 = param_3 & 0xffffff;
          iVar6 = FUN_1007505a(uVar3,(char *)((int)&param_3 + 3),(char *)0x1);
          if ((((iVar6 != 0) || (param_3._3_1_ != '\x1a')) ||
              (iVar6 = FUN_1007ea8a(uVar3,local_14), iVar6 != -1)) &&
             (DVar5 = FUN_1007584f(uVar3,0,0), DVar5 != 0xffffffff)) goto LAB_1007bc0c;
        }
        FUN_10074a70(uVar3);
        uVar2 = 0xffffffff;
      }
      else {
LAB_1007bc0c:
        uVar2 = uVar3;
        if ((param_1._3_1_ == 0) && ((param_2 & 8) != 0)) {
          pbVar1 = (byte *)((&DAT_102e0700)[(int)uVar3 >> 5] + 4 + iVar7);
          *pbVar1 = *pbVar1 | 0x20;
        }
      }
      goto LAB_1007bc25;
    }
    CloseHandle(hFile);
  }
  DVar5 = GetLastError();
  FUN_10075765(DVar5);
  uVar2 = 0xffffffff;
LAB_1007bc25:
  FUN_1007b898(uVar3);
  return uVar2;
}

/* 1007bc33  FUN_1007bc33  (23 bytes)
 * undefined FUN_1007bc33(byte.conflict * param_1, int * param_2, undefined1 * param_3)
 * called by: FUN_10075ab7
 */
void __thiscall FUN_1007bc33(void *this,byte_conflict *param_1,int *param_2,undefined1 *param_3)

{
  FUN_1007bc4a(this,param_1,param_2,param_3,0);
  return;
}

/* 1007bc4a  FUN_1007bc4a  (517 bytes)
 * undefined1 * FUN_1007bc4a(byte.conflict * param_1, int * param_2, undefined1 * param_3, uint param_4)
 * called by: FUN_1007bc33
 */
undefined1 * __thiscall
FUN_1007bc4a(void *this,byte_conflict *param_1,int *param_2,undefined1 *param_3,uint param_4)

{
  byte *pbVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  DWORD *pDVar6;
  byte bVar7;
  undefined1 *puVar8;
  undefined1 *local_c;
  byte *local_8;
  
  local_c = (undefined1 *)0x0;
  bVar7 = *param_1;
  pbVar1 = param_1;
  while( true ) {
    local_8 = pbVar1 + 1;
    if (DAT_1009bbc4 < 2) {
      uVar3 = (byte)PTR_DAT_1009b9b8[(uint)bVar7 * 2] & 8;
      this = PTR_DAT_1009b9b8;
    }
    else {
      puVar8 = &DAT_00000008;
      uVar3 = FUN_1006f09e(this,(uint)bVar7,8);
      this = puVar8;
    }
    if (uVar3 == 0) break;
    bVar7 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar7 == 0x2d) {
    param_4 = param_4 | 2;
LAB_1007bca5:
    bVar7 = *local_8;
    local_8 = pbVar1 + 2;
  }
  else if (bVar7 == 0x2b) goto LAB_1007bca5;
  if ((((int)param_3 < 0) || (param_3 == (undefined1 *)0x1)) || (0x24 < (int)param_3)) {
    if (param_2 != (int *)0x0) {
      *param_2 = (int)param_1;
    }
    return (undefined1 *)0x0;
  }
  puVar8 = (undefined1 *)0x10;
  if (param_3 == (undefined1 *)0x0) {
    if (bVar7 != 0x30) {
      param_3 = &DAT_0000000a;
      goto LAB_1007bd0f;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = &DAT_00000008;
      goto LAB_1007bd0f;
    }
    param_3 = (undefined1 *)0x10;
  }
  if (((param_3 == (undefined1 *)0x10) && (bVar7 == 0x30)) &&
     ((*local_8 == 0x78 || (*local_8 == 0x58)))) {
    bVar7 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_1007bd0f:
  puVar4 = (undefined1 *)(0xffffffff / ZEXT48(param_3));
  do {
    uVar3 = (uint)bVar7;
    if (DAT_1009bbc4 < 2) {
      uVar5 = (byte)PTR_DAT_1009b9b8[uVar3 * 2] & 4;
    }
    else {
      puVar2 = (undefined1 *)0x4;
      uVar5 = FUN_1006f09e(puVar8,uVar3,4);
      puVar8 = puVar2;
    }
    if (uVar5 == 0) {
      if (DAT_1009bbc4 < 2) {
        uVar3 = *(ushort *)(PTR_DAT_1009b9b8 + uVar3 * 2) & 0x103;
      }
      else {
        uVar3 = FUN_1006f09e(puVar8,uVar3,0x103);
      }
      if (uVar3 == 0) {
LAB_1007bdbb:
        local_8 = local_8 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (int *)0x0) {
            local_8 = param_1;
          }
          local_c = (undefined1 *)0x0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && ((undefined1 *)0x80000000 < local_c)) ||
                  (((param_4 & 2) == 0 && ((undefined1 *)0x7fffffff < local_c)))))))) {
          pDVar6 = FUN_100757d8();
          *pDVar6 = 0x22;
          if ((param_4 & 1) == 0) {
            local_c = (undefined1 *)(((param_4 & 2) != 0) + 0x7fffffff);
          }
          else {
            local_c = (undefined1 *)0xffffffff;
          }
        }
        if (param_2 != (int *)0x0) {
          *param_2 = (int)local_8;
        }
        if ((param_4 & 2) == 0) {
          return local_c;
        }
        return (undefined1 *)-(int)local_c;
      }
      uVar3 = FUN_1006ef63((int)(char)bVar7);
      puVar8 = (undefined1 *)(uVar3 - 0x37);
    }
    else {
      puVar8 = (undefined1 *)((char)bVar7 + -0x30);
    }
    if (param_3 <= puVar8) goto LAB_1007bdbb;
    if ((local_c < puVar4) ||
       ((local_c == puVar4 && (puVar8 <= (undefined1 *)(0xffffffff % ZEXT48(param_3)))))) {
      local_c = puVar8 + (int)local_c * (int)param_3;
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
    }
    bVar7 = *local_8;
    local_8 = local_8 + 1;
  } while( true );
}

/* 1007be66  FUN_1007be66  (429 bytes)
 * undefined4 FUN_1007be66(int param_1)
 * called by: FUN_1007c24e
 */
undefined4 __cdecl FUN_1007be66(int param_1)

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
  
  FUN_10073e71(0x19);
  CodePage = FUN_1007c013(param_1);
  if (CodePage != DAT_102e04c8) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_1009ed70;
LAB_1007bea3:
      if (*pUVar5 != CodePage) goto code_r0x1007bea7;
      local_8 = 0;
      puVar15 = &DAT_102e05e0;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x1009ed80);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_1009ed68)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_102e05e0 + uVar8 + 1);
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
      DAT_102e04dc = 1;
      DAT_102e04c8 = CodePage;
      DAT_102e06e4 = FUN_1007c05d(CodePage);
      DAT_102e04d0 = *(undefined4 *)(iVar12 + 0x1009ed74);
      DAT_102e04d4 = *(undefined4 *)(iVar12 + 0x1009ed78);
      DAT_102e04d8 = *(undefined4 *)(iVar12 + 0x1009ed7c);
      goto LAB_1007bff7;
    }
    goto LAB_1007bff2;
  }
  goto LAB_1007be8d;
code_r0x1007bea7:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x1009ee5f < (int)pUVar5) goto code_r0x1007beb2;
  goto LAB_1007bea3;
code_r0x1007beb2:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_102e06e4 = 0;
    puVar15 = &DAT_102e05e0;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      DAT_102e04dc = 0;
      DAT_102e04c8 = CodePage;
    }
    else {
      DAT_102e04c8 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_102e05e0 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_102e05e0 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_102e06e4 = FUN_1007c05d(CodePage);
      DAT_102e04dc = 1;
    }
    DAT_102e04d0 = 0;
    DAT_102e04d4 = 0;
    DAT_102e04d8 = 0;
  }
  else {
    if (DAT_102e03bc == 0) {
      uVar14 = 0xffffffff;
      goto LAB_1007c004;
    }
LAB_1007bff2:
    FUN_1007c090();
  }
LAB_1007bff7:
  FUN_1007c0b9();
LAB_1007be8d:
  uVar14 = 0;
LAB_1007c004:
  FUN_10073ed2(0x19);
  return uVar14;
}

/* 1007c013  FUN_1007c013  (74 bytes)
 * int FUN_1007c013(int param_1)
 * called by: FUN_1007be66
 */
int __cdecl FUN_1007c013(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_102e03bc = 1;
                    /* WARNING: Could not recover jumptable at 0x1007c02d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_102e03bc = 1;
                    /* WARNING: Could not recover jumptable at 0x1007c042. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_102e0224;
  }
  DAT_102e03bc = (uint)bVar2;
  return param_1;
}

/* 1007c05d  FUN_1007c05d  (51 bytes)
 * undefined4 FUN_1007c05d(int param_1)
 * called by: FUN_1007be66
 */
undefined4 __cdecl FUN_1007c05d(int param_1)

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

/* 1007c090  FUN_1007c090  (41 bytes)
 * undefined FUN_1007c090(void)
 * called by: FUN_1007be66
 */
void FUN_1007c090(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_102e05e0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_102e04c8 = 0;
  DAT_102e04dc = 0;
  DAT_102e06e4 = 0;
  DAT_102e04d0 = 0;
  DAT_102e04d4 = 0;
  DAT_102e04d8 = 0;
  return;
}

/* 1007c0b9  FUN_1007c0b9  (389 bytes)
 * undefined FUN_1007c0b9(void)
 * called by: FUN_1007be66
 */
void FUN_1007c0b9(void)

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
  
  BVar2 = GetCPInfo(DAT_102e04c8,&local_18);
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
    FUN_100747c7(1,local_118,0x100,local_518,DAT_102e04c8,DAT_102e06e4,0);
    FUN_10074578(DAT_102e06e4,0x100,local_118,0x100,local_218,0x100,DAT_102e04c8,0);
    FUN_10074578(DAT_102e06e4,0x200,local_118,0x100,local_318,0x100,DAT_102e04c8,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_102e05e0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_1007c1c5;
        }
        (&DAT_102e04e0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_102e05e0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_1007c1c5:
        (&DAT_102e04e0)[uVar3] = uVar8;
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
          pbVar1 = (byte *)((int)&DAT_102e05e0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_1007c20f;
        }
        (&DAT_102e04e0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_102e05e0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_1007c20f:
        (&DAT_102e04e0)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}

/* 1007c24e  FUN_1007c24e  (28 bytes)
 * undefined FUN_1007c24e(void)
 * called by: FUN_100778c0, FUN_10077979
 */
void FUN_1007c24e(void)

{
  if (DAT_102e1850 == 0) {
    FUN_1007be66(-3);
    DAT_102e1850 = 1;
  }
  return;
}

/* 1007c26a  FUN_1007c26a  (137 bytes)
 * int FUN_1007c26a(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: FUN_10077d31
 */
int __cdecl FUN_1007c26a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_102e03c0 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_102e03c0 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_102e03c0 != (FARPROC)0x0) {
        DAT_102e03c4 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_102e03c8 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_1007c2b9;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_1007c2b9:
    if (DAT_102e03c4 != (FARPROC)0x0) {
      iVar1 = (*DAT_102e03c4)();
      if ((iVar1 != 0) && (DAT_102e03c8 != (FARPROC)0x0)) {
        iVar1 = (*DAT_102e03c8)(iVar1);
      }
    }
    iVar1 = (*DAT_102e03c0)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}

/* 1007c2f3  FUN_1007c2f3  (386 bytes)
 * int FUN_1007c2f3(int param_1, int param_2)
 */
int __cdecl FUN_1007c2f3(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  DWORD *pDVar5;
  undefined4 *puVar6;
  uint uVar7;
  BOOL BVar8;
  DWORD DVar9;
  
  if ((param_2 != 4) && (param_2 != 3)) {
    if ((param_1 == 2) || (((param_1 == 0x15 || (param_1 == 0x16)) || (param_1 == 0xf)))) {
      FUN_10073e71(1);
      if (((param_1 == 2) || (param_1 == 0x15)) && (DAT_102e03dc == 0)) {
        BVar8 = SetConsoleCtrlHandler(FUN_1007c475,1);
        if (BVar8 != 1) {
          DVar9 = GetLastError();
          pDVar5 = FUN_100757e1();
          *pDVar5 = DVar9;
          FUN_10073ed2(1);
          goto LAB_1007c429;
        }
        DAT_102e03dc = 1;
      }
      iVar4 = DAT_102e03d8;
      iVar3 = DAT_102e03d4;
      iVar2 = DAT_102e03d0;
      iVar1 = DAT_102e03cc;
      if (param_1 == 2) {
        DAT_102e03cc = param_2;
        param_2 = iVar1;
      }
      else if (param_1 == 0xf) {
        DAT_102e03d8 = param_2;
        param_2 = iVar4;
      }
      else if (param_1 == 0x15) {
        DAT_102e03d0 = param_2;
        param_2 = iVar2;
      }
      else if (param_1 == 0x16) {
        DAT_102e03d4 = param_2;
        param_2 = iVar3;
      }
      FUN_10073ed2(1);
      return param_2;
    }
    if (((param_1 == 8) || (param_1 == 4)) || (param_1 == 0xb)) {
      pDVar5 = FUN_10070951();
      if ((undefined *)pDVar5[0x14] == &DAT_1009e530) {
        puVar6 = _malloc(DAT_1009e5b0);
        pDVar5[0x14] = (DWORD)puVar6;
        if (puVar6 == (undefined4 *)0x0) goto LAB_1007c429;
        FUN_10075240(puVar6,(undefined4 *)&DAT_1009e530,DAT_1009e5b0);
      }
      uVar7 = FUN_1007c659(param_1,pDVar5[0x14]);
      if (uVar7 != 0) {
        iVar1 = *(int *)(uVar7 + 8);
        do {
          if (*(int *)(uVar7 + 4) != param_1) {
            return iVar1;
          }
          *(int *)(uVar7 + 8) = param_2;
          uVar7 = uVar7 + 0xc;
        } while (uVar7 < pDVar5[0x14] + DAT_1009e5b4 * 0xc);
        return iVar1;
      }
    }
  }
LAB_1007c429:
  pDVar5 = FUN_100757d8();
  *pDVar5 = 0x16;
  return -1;
}

/* 1007c475  FUN_1007c475  (98 bytes)
 * undefined FUN_1007c475()
 */
undefined4 FUN_1007c475(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  uVar2 = 1;
  FUN_10073e71(1);
  if (param_1 == 0) {
    puVar1 = &DAT_102e03cc;
    uVar4 = 2;
    pcVar3 = DAT_102e03cc;
  }
  else {
    puVar1 = &DAT_102e03d0;
    uVar4 = 0x15;
    pcVar3 = DAT_102e03d0;
  }
  if (pcVar3 == (code *)0x0) {
    FUN_10073ed2(1);
    uVar2 = 0;
  }
  else if (pcVar3 == (code *)0x1) {
    FUN_10073ed2(1);
  }
  else {
    *puVar1 = 0;
    FUN_10073ed2(1);
    (*pcVar3)(uVar4);
  }
  return uVar2;
}

/* 1007c4d7  FUN_1007c4d7  (386 bytes)
 * undefined4 FUN_1007c4d7(DWORD * param_1)
 * called by: FUN_100793fc
 */
undefined4 __cdecl FUN_1007c4d7(DWORD *param_1)

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
    puVar7 = &DAT_102e03cc;
    pcVar6 = DAT_102e03cc;
LAB_1007c55d:
    bVar1 = true;
    FUN_10073e71(1);
    pDVar2 = param_1;
  }
  else {
    if (((param_1 != (DWORD *)0x4) && (param_1 != (DWORD *)&DAT_00000008)) &&
       (param_1 != (DWORD *)0xb)) {
      if (param_1 == (DWORD *)0xf) {
        puVar7 = &DAT_102e03d8;
        pcVar6 = DAT_102e03d8;
      }
      else if (param_1 == (DWORD *)0x15) {
        puVar7 = &DAT_102e03d0;
        pcVar6 = DAT_102e03d0;
      }
      else {
        if (param_1 != (DWORD *)0x16) {
          return 0xffffffff;
        }
        puVar7 = &DAT_102e03d4;
        pcVar6 = DAT_102e03d4;
      }
      goto LAB_1007c55d;
    }
    pDVar2 = FUN_10070951();
    uVar3 = FUN_1007c659((int)param_1,pDVar2[0x14]);
    puVar7 = (undefined4 *)(uVar3 + 8);
    pcVar6 = (code *)*puVar7;
  }
  if (pcVar6 == (code *)0x1) {
    if (!bVar1) {
      return 0;
    }
    FUN_10073ed2(1);
    return 0;
  }
  if (pcVar6 == (code *)0x0) {
    if (bVar1) {
      FUN_10073ed2(1);
    }
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (((param_1 == (DWORD *)&DAT_00000008) || (param_1 == (DWORD *)0xb)) ||
     (param_1 == (DWORD *)0x4)) {
    local_c = pDVar2[0x15];
    pDVar2[0x15] = 0;
    if (param_1 == (DWORD *)&DAT_00000008) {
      local_10 = pDVar2[0x16];
      pDVar2[0x16] = 0x8c;
      goto LAB_1007c5d1;
    }
  }
  else {
LAB_1007c5d1:
    if (param_1 == (DWORD *)&DAT_00000008) {
      if (DAT_1009e5a8 < DAT_1009e5ac + DAT_1009e5a8) {
        iVar4 = DAT_1009e5a8 * 0xc;
        iVar5 = DAT_1009e5a8;
        do {
          iVar4 = iVar4 + 0xc;
          *(undefined4 *)((pDVar2[0x14] - 4) + iVar4) = 0;
          iVar5 = iVar5 + 1;
        } while (iVar5 < DAT_1009e5ac + DAT_1009e5a8);
      }
      goto LAB_1007c60f;
    }
  }
  *puVar7 = 0;
LAB_1007c60f:
  if (bVar1) {
    FUN_10073ed2(1);
  }
  if (param_1 == (DWORD *)&DAT_00000008) {
    (*pcVar6)(8,pDVar2[0x16]);
  }
  else {
    (*pcVar6)(param_1);
    if ((param_1 != (DWORD *)0xb) && (param_1 != (DWORD *)0x4)) {
      return 0;
    }
  }
  pDVar2[0x15] = local_c;
  if (param_1 == (DWORD *)&DAT_00000008) {
    pDVar2[0x16] = local_10;
  }
  return 0;
}

/* 1007c659  FUN_1007c659  (61 bytes)
 * uint FUN_1007c659(int param_1, uint param_2)
 * called by: FUN_1007c2f3, FUN_1007c4d7
 */
uint __cdecl FUN_1007c659(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_2;
  if (*(int *)(param_2 + 4) != param_1) {
    uVar3 = param_2;
    do {
      uVar2 = uVar3 + 0xc;
      if (param_2 + DAT_1009e5b4 * 0xc <= uVar2) break;
      piVar1 = (int *)(uVar3 + 0x10);
      uVar3 = uVar2;
    } while (*piVar1 != param_1);
  }
  if ((param_2 + DAT_1009e5b4 * 0xc <= uVar2) || (*(int *)(uVar2 + 4) != param_1)) {
    uVar2 = 0;
  }
  return uVar2;
}

/* 1007c6a8  FUN_1007c6a8  (33 bytes)
 * undefined4 FUN_1007c6a8(uint param_1, uint param_2, uint * param_3)
 * called by: FUN_1007822d, FUN_1007cadc, ___add_12
 */
undefined4 __cdecl FUN_1007c6a8(uint param_1,uint param_2,uint *param_3)

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

/* 1007c727  FUN_1007c727  (46 bytes)
 * undefined FUN_1007c727(uint * param_1)
 * called by: FUN_1007c782, FUN_1007c849, FUN_1007cadc
 */
void __cdecl FUN_1007c727(uint *param_1)

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

/* 1007c755  FUN_1007c755  (45 bytes)
 * undefined FUN_1007c755(uint * param_1)
 * called by: FUN_1007c849, FUN_1007cadc
 */
void __cdecl FUN_1007c755(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}

/* 1007c782  FUN_1007c782  (199 bytes)
 * undefined FUN_1007c782(char * param_1, int param_2, uint * param_3)
 * called by: FUN_10078c3e
 */
void __cdecl FUN_1007c782(char *param_1,int param_2,uint *param_3)

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
      FUN_1007c727(puVar1);
      FUN_1007c727(puVar1);
      ___add_12(puVar1,&local_14);
      FUN_1007c727(puVar1);
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
    FUN_1007c727(puVar1);
    local_8 = local_8 + 0xffff;
  }
  *(undefined2 *)((int)puVar1 + 10) = (undefined2)local_8;
  return;
}

/* 1007c849  FUN_1007c849  (659 bytes)
 * undefined4 FUN_1007c849(uint param_1, uint param_2, uint param_3, int param_4, byte.conflict param_5, short * param_6)
 * called by: FUN_100786ef
 */
undefined4 __cdecl
FUN_1007c849(uint param_1,uint param_2,uint param_3,int param_4,byte_conflict param_5,short *param_6
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
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_1007c93e;
          pcVar11 = "1#INF";
        }
        else {
          if (param_1 != 0) {
LAB_1007c93e:
            pcVar11 = "1#QNAN";
            goto LAB_1007c943;
          }
          pcVar11 = "1#IND";
        }
        FUN_10078810((uint *)(param_6 + 2),(uint *)pcVar11);
        *(undefined1 *)((int)psVar3 + 3) = 5;
      }
      else {
        pcVar11 = "1#SNAN";
LAB_1007c943:
        FUN_10078810((uint *)(param_6 + 2),(uint *)pcVar11);
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
    FUN_1007ccfc((int *)&local_14,-(int)sVar8,1);
    if (0x3ffe < CONCAT11(cStack_9,local_a)) {
      sVar8 = sVar8 + 1;
      FUN_1007cadc((int *)&local_14,(int *)&local_20);
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
      param_6 = (short *)&DAT_00000008;
      do {
        FUN_1007c727((uint *)&local_14);
        param_6 = (short *)((int)param_6 + -1);
      } while (param_6 != (short *)0x0);
      if (iVar9 < 0) {
        param_6 = (short *)0x0;
        for (uVar5 = -iVar9 & 0xff; uVar5 != 0; uVar5 = uVar5 - 1) {
          FUN_1007c755((uint *)&local_14);
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
          FUN_1007c727((uint *)&local_14);
          FUN_1007c727((uint *)&local_14);
          ___add_12((uint *)&local_14,&param_1);
          FUN_1007c727((uint *)&local_14);
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
            if (psVar1 <= psVar7) goto LAB_1007ca9b;
            break;
          }
          *(char *)psVar7 = '0';
        }
        psVar7 = (short *)((int)psVar7 + 1);
        *psVar3 = *psVar3 + 1;
LAB_1007ca9b:
        *(char *)psVar7 = (char)*psVar7 + '\x01';
LAB_1007ca9d:
        cVar4 = ((char)psVar7 - (char)psVar3) + -3;
        *(char *)((int)psVar3 + 3) = cVar4;
        *(undefined1 *)(cVar4 + 4 + (int)psVar3) = 0;
        return local_8;
      }
      for (; psVar1 <= psVar7; psVar7 = (short *)((int)psVar7 + -1)) {
        if ((char)*psVar7 != '0') {
          if (psVar1 <= psVar7) goto LAB_1007ca9d;
          break;
        }
      }
      *psVar3 = 0;
      *(undefined1 *)(psVar3 + 1) = 0x20;
      *(undefined1 *)((int)psVar3 + 3) = 1;
      *(char *)psVar1 = '0';
      goto LAB_1007cad3;
    }
  }
  *psVar3 = 0;
  *(undefined1 *)(psVar3 + 1) = 0x20;
  *(undefined1 *)((int)psVar3 + 3) = 1;
  *(undefined1 *)(psVar3 + 2) = 0x30;
LAB_1007cad3:
  *(undefined1 *)((int)psVar3 + 5) = 0;
  return 1;
}

/* 1007cadc  FUN_1007cadc  (544 bytes)
 * undefined FUN_1007cadc(int * param_1, int * param_2)
 * called by: FUN_1007c849, FUN_1007ccfc
 */
void __cdecl FUN_1007cadc(int *param_1,int *param_2)

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
LAB_1007cb7f:
      piVar4[2] = 0;
      piVar4[1] = 0;
      *piVar4 = 0;
      return;
    }
    if (((uVar6 != 0) || (piVar1 = (int *)((int)piVar1 + 1), (param_1[2] & 0x7fffffffU) != 0)) ||
       ((uVar6 = 0, param_1[1] != 0 || (*param_1 != 0)))) {
      param_1 = piVar1;
      if (((uVar9 == 0) && (param_1 = (int *)((int)param_1 + 1), (param_2[2] & 0x7fffffffU) == 0))
         && ((param_2[1] == 0 && (*param_2 == 0)))) goto LAB_1007cb7f;
      local_14 = 0;
      local_8 = &local_24;
      param_2 = (int *)0x5;
      do {
        if (0 < (int)param_2) {
          local_c = (ushort *)(local_14 * 2 + (int)piVar4);
          local_10 = (ushort *)(piVar5 + 2);
          local_1c = param_2;
          do {
            iVar8 = FUN_1007c6a8(*(uint *)(local_8 + -2),(uint)*local_c * (uint)*local_10,
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
LAB_1007cc33:
        param_1._0_2_ = (ushort)param_1 - 1;
        if ((short)(ushort)param_1 < 0) {
          iVar8 = -(int)(short)(ushort)param_1;
          param_1._0_2_ = (ushort)param_1 + (short)iVar8;
          do {
            if ((local_28 & 1) != 0) {
              local_18 = local_18 + 1;
            }
            FUN_1007c755((uint *)&local_28);
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
          FUN_1007c727((uint *)&local_28);
          param_1 = (int *)((int)param_1 + 0xffff);
        } while (0 < (short)(ushort)param_1);
        if ((short)(ushort)param_1 < 1) goto LAB_1007cc33;
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
      if (0x7ffe < (ushort)param_1) goto LAB_1007ccdc;
      uVar6 = (ushort)param_1 | uVar11;
      *(undefined2 *)piVar4 = uStack_26;
      *(uint *)((int)piVar4 + 2) = CONCAT22(uStack_22,local_24);
      *(uint *)((int)piVar4 + 6) = CONCAT13(bStack_1d,CONCAT12(uStack_1e,local_20));
    }
    *(ushort *)((int)piVar4 + 10) = uVar6;
  }
  else {
LAB_1007ccdc:
    piVar4[1] = 0;
    *piVar4 = 0;
    piVar4[2] = (-(uint)(uVar11 != 0) & 0x80000000) + 0x7fff8000;
  }
  return;
}

/* 1007ccfc  FUN_1007ccfc  (124 bytes)
 * undefined FUN_1007ccfc(int * param_1, uint param_2, int param_3)
 * called by: FUN_10078c3e, FUN_1007c849
 */
void __cdecl FUN_1007ccfc(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 uStack_a;
  undefined *puStack_8;
  
  ppuVar3 = &PTR_DAT_1009eff0;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      ppuVar3 = (undefined **)0x1009f150;
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
        FUN_1007cadc(param_1,(int *)ppuVar4);
      }
    }
  }
  return;
}

/* 1007cd78  FUN_1007cd78  (84 bytes)
 * float10 FUN_1007cd78(int param_1, double param_2)
 * called by: FUN_10079afc
 */
float10 __cdecl FUN_1007cd78(int param_1,double param_2)

{
  DWORD *pDVar1;
  float10 fVar2;
  
  if (DAT_1009ef38 == 0) {
    fVar2 = FUN_1007d433(1,param_1);
    return fVar2;
  }
  pDVar1 = FUN_100757d8();
  *pDVar1 = 0x21;
  FUN_1007d555();
  return (float10)param_2;
}

/* 1007cdcc  FUN_1007cdcc  (96 bytes)
 * float10 FUN_1007cdcc(int param_1, double param_2, double param_3)
 * called by: FUN_10079be3, FUN_1007d5ce
 */
float10 __cdecl FUN_1007cdcc(int param_1,double param_2,double param_3)

{
  DWORD *pDVar1;
  float10 fVar2;
  
  if (DAT_1009ef38 == 0) {
    fVar2 = FUN_1007d433(1,param_1);
    return fVar2;
  }
  pDVar1 = FUN_100757d8();
  *pDVar1 = 0x21;
  FUN_1007d555();
  return (float10)(param_2 + param_3);
}

/* 1007ce2c  FUN_1007ce2c  (152 bytes)
 * float10 FUN_1007ce2c(uint param_1, uint param_2, undefined8 param_3, double param_4, uint param_5)
 * called by: FUN_10079afc
 */
float10 __cdecl
FUN_1007ce2c(uint param_1,uint param_2,undefined8 param_3,double param_4,uint param_5)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  float10 fVar3;
  uint local_5c [14];
  uint local_24;
  
  bVar1 = FUN_1007d21c(param_1,&param_4,param_5);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_24 = local_24 & 0xfffffffe;
    FUN_1007cf69(local_5c,&param_5,param_1,param_2,&param_3,&param_4);
  }
  iVar2 = FUN_1007d508((byte_conflict)param_1);
  if ((DAT_1009ef38 == 0) && (iVar2 != 0)) {
    fVar3 = FUN_1007d433(iVar2,param_2);
    return fVar3;
  }
  FUN_1007d4bb(iVar2);
  FUN_1007d555();
  return (float10)param_4;
}

/* 1007cec4  FUN_1007cec4  (165 bytes)
 * float10 FUN_1007cec4(uint param_1, uint param_2, undefined8 param_3, undefined8 param_4, double param_5, uint param_6)
 * called by: FUN_10079be3, FUN_1007d5ce
 */
float10 __cdecl
FUN_1007cec4(uint param_1,uint param_2,undefined8 param_3,undefined8 param_4,double param_5,
            uint param_6)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  float10 fVar3;
  uint local_5c [10];
  undefined8 local_34;
  uint local_24;
  
  bVar1 = FUN_1007d21c(param_1,&param_5,param_6);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_24 = local_24 & 0xffffffe3 | 3;
    local_34 = param_4;
    FUN_1007cf69(local_5c,&param_6,param_1,param_2,&param_3,&param_5);
  }
  iVar2 = FUN_1007d508((byte_conflict)param_1);
  if ((DAT_1009ef38 == 0) && (iVar2 != 0)) {
    fVar3 = FUN_1007d433(iVar2,param_2);
    return fVar3;
  }
  FUN_1007d4bb(iVar2);
  FUN_1007d555();
  return (float10)param_5;
}

/* 1007cf69  FUN_1007cf69  (691 bytes)
 * undefined FUN_1007cf69(uint * param_1, uint * param_2, uint param_3, uint param_4, undefined8 * param_5, undefined8 * param_6)
 * called by: FUN_10079816, FUN_1007ce2c, FUN_1007cec4
 */
void __cdecl
FUN_1007cf69(uint *param_1,uint *param_2,uint param_3,uint param_4,undefined8 *param_5,
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
  uVar3 = FUN_1007d538();
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
        goto LAB_1007d0de;
      }
      uVar3 = *param_1 & 0xfffffffe | 2;
    }
    *param_1 = uVar3;
  }
LAB_1007d0de:
  uVar3 = *puVar1 & 0x300;
  if (uVar3 == 0) {
    uVar3 = *param_1 & 0xffffffeb | 8;
LAB_1007d114:
    *param_1 = uVar3;
  }
  else {
    if (uVar3 == 0x200) {
      uVar3 = *param_1 & 0xffffffe7 | 4;
      goto LAB_1007d114;
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
  FUN_1007d546();
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
        goto LAB_1007d1e9;
      }
      uVar3 = *puVar1 & 0xfffffbff | 0x800;
    }
    *puVar1 = uVar3;
  }
LAB_1007d1e9:
  uVar3 = *param_1 >> 2 & 7;
  if (uVar3 == 0) {
    uVar3 = *puVar1 & 0xfffff3ff | 0x300;
  }
  else {
    if (uVar3 != 1) {
      if (uVar3 == 2) {
        *puVar1 = *puVar1 & 0xfffff3ff;
      }
      goto LAB_1007d212;
    }
    uVar3 = *puVar1 & 0xfffff3ff | 0x200;
  }
  *puVar1 = uVar3;
LAB_1007d212:
  *puVar2 = *(undefined8 *)(param_1 + 0x10);
  return;
}

/* 1007d21c  FUN_1007d21c  (535 bytes)
 * bool FUN_1007d21c(uint param_1, double * param_2, uint param_3)
 * called by: FUN_10079816, FUN_1007ce2c, FUN_1007cec4
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl FUN_1007d21c(uint param_1,double *param_2,uint param_3)

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
    FUN_1007d578();
    uVar3 = param_1 & 0x17;
    goto LAB_1007d411;
  }
  if (((param_1 & 4) != 0) && ((param_3 & 4) != 0)) {
    FUN_1007d578();
    uVar3 = param_1 & 0x1b;
    goto LAB_1007d411;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
    if (((param_1 & 2) != 0) && ((param_3 & 0x10) != 0)) {
      bVar4 = (param_1 & 0x10) != 0;
      dVar1 = *param_2;
      if (dVar1 != 0.0) {
        fVar5 = FUN_100799cd(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20),&local_8);
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
        FUN_1007d578();
      }
      uVar3 = param_1 & 0x1d;
    }
    goto LAB_1007d411;
  }
  FUN_1007d578();
  uVar3 = param_3 & 0xc00;
  dVar1 = _DAT_1009e5c0;
  if (uVar3 == 0) {
    if (*param_2 <= 0.0) {
      dVar1 = -_DAT_1009e5c0;
    }
LAB_1007d331:
    *param_2 = dVar1;
  }
  else {
    if (uVar3 == 0x400) {
      dVar1 = _DAT_1009e5d0;
      if (*param_2 <= 0.0) {
        dVar1 = -_DAT_1009e5c0;
      }
      goto LAB_1007d331;
    }
    if (uVar3 == 0x800) {
      if (*param_2 <= 0.0) {
        dVar1 = -_DAT_1009e5d0;
      }
      goto LAB_1007d331;
    }
    if (uVar3 == 0xc00) {
      dVar1 = _DAT_1009e5d0;
      if (*param_2 <= 0.0) {
        dVar1 = -_DAT_1009e5d0;
      }
      goto LAB_1007d331;
    }
  }
  uVar3 = param_1 & 0x1e;
LAB_1007d411:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_1007d578();
    uVar3 = uVar3 & 0xffffffef;
  }
  return uVar3 == 0;
}

/* 1007d433  FUN_1007d433  (136 bytes)
 * float10 FUN_1007d433(int param_1, int param_2)
 * called by: FUN_1007cd78, FUN_1007cdcc, FUN_1007ce2c, FUN_1007cec4
 */
float10 __cdecl FUN_1007d433(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  iVar1 = FUN_1007d4e3(param_2);
  if (iVar1 != 0) {
    FUN_1007d555();
    iVar1 = FUN_1007d535();
    if (iVar1 == 0) {
      FUN_1007d4bb(param_1);
    }
    return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
  }
  FUN_1007d555();
  FUN_1007d4bb(param_1);
  return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
}

/* 1007d4bb  FUN_1007d4bb  (40 bytes)
 * undefined FUN_1007d4bb(int param_1)
 * called by: FUN_10079816, FUN_1007ce2c, FUN_1007cec4, FUN_1007d433
 */
void __cdecl FUN_1007d4bb(int param_1)

{
  DWORD *pDVar1;
  
  if (param_1 == 1) {
    pDVar1 = FUN_100757d8();
    *pDVar1 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    pDVar1 = FUN_100757d8();
    *pDVar1 = 0x22;
    return;
  }
  return;
}

/* 1007d4e3  FUN_1007d4e3  (37 bytes)
 * undefined4 FUN_1007d4e3(int param_1)
 * called by: FUN_1007d433
 */
undefined4 __cdecl FUN_1007d4e3(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_1009ee60;
  do {
    if (*piVar1 == param_1) {
      return *(undefined4 *)(iVar2 * 8 + 0x1009ee64);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x1009ef38);
  return 0;
}

/* 1007d508  FUN_1007d508  (45 bytes)
 * int FUN_1007d508(byte.conflict param_1)
 * called by: FUN_1007ce2c, FUN_1007cec4
 */
int __cdecl FUN_1007d508(byte_conflict param_1)

{
  undefined4 uStack_4;
  
  if ((param_1 & 0x20) == 0) {
    if ((param_1 & 8) == 0) {
      if ((param_1 & 4) == 0) {
        if ((param_1 & 1) == 0) {
          return (param_1 & 2) << 1;
        }
        uStack_4 = 3;
      }
      else {
        uStack_4 = 2;
      }
    }
    else {
      uStack_4 = 1;
    }
  }
  else {
    uStack_4 = 5;
  }
  return uStack_4;
}

/* 1007d535  FUN_1007d535  (3 bytes)
 * undefined4 FUN_1007d535(void)
 * called by: FUN_10079816, FUN_1007d433
 */
undefined4 FUN_1007d535(void)

{
  return 0;
}

/* 1007d538  FUN_1007d538  (14 bytes)
 * int FUN_1007d538(void)
 * called by: FUN_1007cf69
 */
int FUN_1007d538(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}

/* 1007d546  FUN_1007d546  (15 bytes)
 * int FUN_1007d546(void)
 * called by: FUN_1007cf69
 */
int FUN_1007d546(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}

/* 1007d555  FUN_1007d555  (35 bytes)
 * int FUN_1007d555(void)
 * called by: FUN_10079816, FUN_10079afc, FUN_10079be3, FUN_1007cd78, FUN_1007cdcc, FUN_1007ce2c, FUN_1007cec4, FUN_1007d433, FUN_1007d5ce
 */
int FUN_1007d555(void)

{
  short in_FPUControlWord;
  
  return (int)in_FPUControlWord;
}

/* 1007d578  FUN_1007d578  (86 bytes)
 * undefined FUN_1007d578(void)
 * called by: FUN_1007d21c
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007d578(void)

{
  return;
}

/* 1007d5ce  FUN_1007d5ce  (486 bytes)
 * float10 FUN_1007d5ce(double param_1, int param_2)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_1007d5ce(double param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  double dVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int local_8;
  
  iVar1 = FUN_1007d555();
  uVar5 = (undefined2)iVar1;
  uVar6 = (undefined2)((uint)iVar1 >> 0x10);
  uVar4 = (uint)((ulonglong)param_1 >> 0x20);
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar1 = FUN_10079973(SUB84(param_1,0),uVar4);
    if (0 < iVar1) {
      if (iVar1 < 3) goto LAB_1007d673;
      if (iVar1 == 3) {
        fVar2 = FUN_1007cdcc(0x19,param_1,(double)param_2);
        return fVar2;
      }
    }
    dVar3 = param_1 + 1.0;
    uVar4 = 8;
  }
  else {
    if (param_1 == 0.0) {
LAB_1007d673:
      FUN_1007d555();
      return (float10)param_1;
    }
    fVar2 = FUN_100799cd(SUB84(param_1,0),uVar4,&local_8);
    dVar3 = (double)fVar2;
    local_8 = param_2 + local_8;
    if (local_8 < 0xa01) {
      if (local_8 < 0x401) {
        if (local_8 < -0x9fd) {
          dVar3 = 0.0;
        }
        else {
          if (-0x3fe < local_8) {
            fVar2 = FUN_100798e6(dVar3,(short)local_8);
            FUN_1007d555();
            return (float10)(double)fVar2;
          }
          fVar2 = FUN_100798e6(dVar3,(short)(local_8 + 0x600));
          dVar3 = (double)fVar2;
        }
        uVar4 = 0x12;
        goto LAB_1007d788;
      }
      fVar2 = FUN_100798e6(dVar3,(short)(local_8 + -0x600));
      dVar3 = (double)fVar2;
    }
    else {
      dVar3 = __copysign(_DAT_1009e5c0,dVar3);
    }
    uVar4 = 0x11;
  }
LAB_1007d788:
  fVar2 = FUN_1007cec4(uVar4,0x19,param_1,(double)param_2,dVar3,CONCAT22(uVar6,uVar5));
  return fVar2;
}

/* 1007d7b4  FUN_1007d7b4  (143 bytes)
 * undefined1 * FUN_1007d7b4(void)
 */
undefined1 * FUN_1007d7b4(void)

{
  size_t sVar1;
  size_t sVar2;
  undefined1 *puVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  int local_8;
  
  puVar9 = (undefined4 *)PTR_PTR_1009ef54;
  iVar5 = 0;
  local_8 = 7;
  puVar6 = (undefined4 *)PTR_PTR_1009ef54;
  do {
    sVar1 = _strlen((char *)puVar6[7]);
    sVar2 = _strlen((char *)*puVar6);
    puVar6 = puVar6 + 1;
    local_8 = local_8 + -1;
    iVar5 = sVar2 + iVar5 + 2 + sVar1;
  } while (local_8 != 0);
  puVar3 = _malloc(iVar5 + 1);
  if (puVar3 != (undefined1 *)0x0) {
    iVar5 = 7;
    puVar7 = puVar3;
    do {
      *puVar7 = 0x3a;
      puVar4 = FUN_10078810((uint *)(puVar7 + 1),(uint *)*puVar9);
      sVar1 = _strlen((char *)puVar4);
      puVar7 = (undefined1 *)((int)(puVar7 + 1) + sVar1);
      *puVar7 = 0x3a;
      puVar8 = (uint *)(puVar7 + 1);
      puVar4 = FUN_10078810(puVar8,(uint *)puVar9[7]);
      sVar1 = _strlen((char *)puVar4);
      puVar7 = (undefined1 *)((int)puVar8 + sVar1);
      puVar9 = puVar9 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    *puVar7 = 0;
  }
  return puVar3;
}

/* 1007d843  FUN_1007d843  (149 bytes)
 * undefined1 * FUN_1007d843(void)
 */
undefined1 * FUN_1007d843(void)

{
  undefined *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined1 *puVar4;
  uint *puVar5;
  int iVar6;
  undefined1 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  int local_c;
  int local_8;
  
  puVar1 = PTR_PTR_1009ef54;
  local_8 = 0;
  local_c = 0xc;
  puVar9 = (undefined4 *)(PTR_PTR_1009ef54 + 0x38);
  do {
    sVar2 = _strlen((char *)puVar9[0xc]);
    sVar3 = _strlen((char *)*puVar9);
    puVar9 = puVar9 + 1;
    local_c = local_c + -1;
    local_8 = sVar3 + local_8 + 2 + sVar2;
  } while (local_c != 0);
  puVar4 = _malloc(local_8 + 1);
  if (puVar4 != (undefined1 *)0x0) {
    puVar9 = (undefined4 *)(puVar1 + 0x68);
    iVar6 = 0xc;
    puVar7 = puVar4;
    do {
      *puVar7 = 0x3a;
      puVar5 = FUN_10078810((uint *)(puVar7 + 1),(uint *)puVar9[-0xc]);
      sVar2 = _strlen((char *)puVar5);
      puVar7 = (undefined1 *)((int)(puVar7 + 1) + sVar2);
      *puVar7 = 0x3a;
      puVar8 = (uint *)(puVar7 + 1);
      puVar5 = FUN_10078810(puVar8,(uint *)*puVar9);
      sVar2 = _strlen((char *)puVar5);
      puVar7 = (undefined1 *)((int)puVar8 + sVar2);
      puVar9 = puVar9 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    *puVar7 = 0;
  }
  return puVar4;
}

/* 1007d8d8  FUN_1007d8d8  (562 bytes)
 * undefined4 * FUN_1007d8d8(void)
 */
undefined4 * FUN_1007d8d8(void)

{
  undefined *puVar1;
  size_t sVar2;
  size_t sVar3;
  size_t sVar4;
  size_t sVar5;
  size_t sVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  int iVar10;
  uint *puVar11;
  int local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  puVar1 = PTR_PTR_1009ef54;
  iVar10 = 0;
  local_c = (undefined4 *)PTR_PTR_1009ef54;
  local_10 = (undefined4 *)0x7;
  do {
    sVar2 = _strlen((char *)local_c[7]);
    sVar3 = _strlen((char *)*local_c);
    local_c = local_c + 1;
    local_10 = (undefined4 *)((int)local_10 + -1);
    iVar10 = sVar3 + iVar10 + 2 + sVar2;
  } while (local_10 != (undefined4 *)0x0);
  local_c = (undefined4 *)(puVar1 + 0x38);
  local_10 = (undefined4 *)0xc;
  do {
    sVar2 = _strlen((char *)local_c[0xc]);
    sVar3 = _strlen((char *)*local_c);
    local_c = local_c + 1;
    local_10 = (undefined4 *)((int)local_10 + -1);
    iVar10 = sVar3 + iVar10 + 2 + sVar2;
  } while (local_10 != (undefined4 *)0x0);
  sVar2 = _strlen(*(char **)(puVar1 + 0x98));
  sVar3 = _strlen(*(char **)(puVar1 + 0x9c));
  sVar4 = _strlen(*(char **)(puVar1 + 0xa0));
  sVar5 = _strlen(*(char **)(puVar1 + 0xa4));
  sVar6 = _strlen(*(char **)(puVar1 + 0xa8));
  puVar7 = _malloc(sVar3 + iVar10 + sVar2 + sVar4 + sVar5 + sVar6 + 0xb1);
  if (puVar7 != (undefined4 *)0x0) {
    puVar11 = puVar7 + 0x2b;
    FUN_10075240(puVar7,(undefined4 *)PTR_PTR_1009ef54,0xac);
    local_8 = (undefined4 *)(puVar1 + 0x1c);
    local_14 = 7;
    local_10 = puVar7;
    do {
      *local_10 = puVar11;
      puVar8 = FUN_10078810(puVar11,(uint *)local_8[-7]);
      sVar2 = _strlen((char *)puVar8);
      puVar11 = (uint *)((int)puVar11 + sVar2 + 1);
      *(uint **)(((int)puVar7 - (int)puVar1) + (int)local_8) = puVar11;
      puVar8 = FUN_10078810(puVar11,(uint *)*local_8);
      sVar2 = _strlen((char *)puVar8);
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
      local_14 = local_14 + -1;
      puVar11 = (uint *)((int)puVar11 + sVar2 + 1);
    } while (local_14 != 0);
    local_10 = puVar7 + 0x1a;
    local_14 = 0xc;
    puVar9 = (undefined4 *)(puVar1 + 0x38);
    do {
      *(uint **)((int)puVar9 + ((int)puVar7 - (int)puVar1)) = puVar11;
      puVar8 = FUN_10078810(puVar11,(uint *)*puVar9);
      sVar2 = _strlen((char *)puVar8);
      puVar11 = (uint *)((int)puVar11 + sVar2 + 1);
      *local_10 = puVar11;
      puVar8 = FUN_10078810(puVar11,(uint *)puVar9[0xc]);
      sVar2 = _strlen((char *)puVar8);
      puVar9 = puVar9 + 1;
      local_10 = local_10 + 1;
      local_14 = local_14 + -1;
      puVar11 = (uint *)((int)puVar11 + sVar2 + 1);
    } while (local_14 != 0);
    puVar7[0x26] = puVar11;
    puVar8 = FUN_10078810(puVar11,*(uint **)(puVar1 + 0x98));
    sVar2 = _strlen((char *)puVar8);
    puVar11 = (uint *)((int)puVar11 + sVar2 + 1);
    puVar7[0x27] = puVar11;
    puVar8 = FUN_10078810(puVar11,*(uint **)(puVar1 + 0x9c));
    sVar2 = _strlen((char *)puVar8);
    puVar11 = (uint *)((int)puVar11 + sVar2 + 1);
    puVar7[0x28] = puVar11;
    puVar8 = FUN_10078810(puVar11,*(uint **)(puVar1 + 0xa0));
    sVar2 = _strlen((char *)puVar8);
    puVar11 = (uint *)((int)puVar11 + sVar2 + 1);
    puVar7[0x29] = puVar11;
    puVar8 = FUN_10078810(puVar11,*(uint **)(puVar1 + 0xa4));
    sVar2 = _strlen((char *)puVar8);
    puVar7[0x2a] = sVar2 + 1 + (int)puVar11;
  }
  return puVar7;
}

/* 1007db25  FUN_1007db25  (250 bytes)
 * int FUN_1007db25(byte.conflict * param_1, uint param_2, byte.conflict * param_3, int * param_4, undefined * param_5)
 */
int __cdecl
FUN_1007db25(byte_conflict *param_1,uint param_2,byte_conflict *param_3,int *param_4,
            undefined *param_5)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  uint local_8;
  
  local_8 = param_2;
  InterlockedIncrement(&DAT_102e1848);
  bVar4 = DAT_102e1844 == 0;
  if (!bVar4) {
    InterlockedDecrement(&DAT_102e1848);
    FUN_10073e71(0x13);
  }
  pbVar2 = param_3;
  if (param_5 == (undefined *)0x0) {
    param_5 = PTR_PTR_1009ef54;
  }
  while ((local_8 != 0 && (bVar1 = *pbVar2, bVar1 != 0))) {
    if (bVar1 == 0x25) {
      pbVar3 = pbVar2 + 1;
      bVar1 = *pbVar3;
      if (bVar1 == 0x23) {
        pbVar3 = pbVar2 + 2;
      }
      DAT_102e04c0 = (uint)(bVar1 == 0x23);
      FUN_1007dc1f(*pbVar3,param_4,(byte_conflict *)&param_1,&local_8,(int)param_5);
    }
    else {
      if (((PTR_DAT_1009b9b8[(uint)bVar1 * 2 + 1] & 0x80) != 0) && (1 < local_8)) {
        *param_1 = bVar1;
        param_1 = param_1 + 1;
        pbVar2 = pbVar2 + 1;
        local_8 = local_8 - 1;
      }
      *param_1 = *pbVar2;
      param_1 = param_1 + 1;
      local_8 = local_8 - 1;
      pbVar3 = pbVar2;
    }
    pbVar2 = pbVar3 + 1;
  }
  if (bVar4) {
    InterlockedDecrement(&DAT_102e1848);
  }
  else {
    FUN_10073ed2(0x13);
  }
  if (local_8 == 0) {
    return 0;
  }
  *param_1 = '\0';
  return param_2 - local_8;
}

/* 1007dc1f  FUN_1007dc1f  (1007 bytes)
 * undefined FUN_1007dc1f(char param_1, int * param_2, byte.conflict * param_3, uint * param_4, int param_5)
 * called by: FUN_1007db25, FUN_1007e0ed
 */
void __cdecl
FUN_1007dc1f(char param_1,int *param_2,byte_conflict *param_3,uint *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte_conflict *pbVar4;
  uint uVar5;
  char *pcVar6;
  
  if (param_1 < '[') {
    if (param_1 != 'Z') {
      if ('M' < param_1) {
        if (param_1 == 'S') {
          uVar5 = 2;
          iVar2 = *param_2;
        }
        else {
          if (param_1 == 'U') {
            iVar3 = param_2[6];
          }
          else {
            if (param_1 != 'W') {
              if (param_1 == 'X') {
                DAT_102e04c0 = 0;
                pbVar4 = *(byte_conflict **)(param_5 + 0xa8);
                goto LAB_1007dfa5;
              }
              if (param_1 != 'Y') {
                return;
              }
              uVar5 = 4;
              iVar2 = (param_2[5] / 100 + 0x13) * 100 + param_2[5] % 100;
              goto LAB_1007dd5b;
            }
            if (param_2[6] == 0) {
              iVar3 = 6;
            }
            else {
              iVar3 = param_2[6] + -1;
            }
          }
          iVar1 = param_2[7];
          if (iVar1 < iVar3) {
            iVar2 = 0;
          }
          else {
            iVar2 = iVar1 / 7;
            if (iVar3 <= iVar1 % 7) {
              iVar2 = iVar2 + 1;
            }
          }
          uVar5 = 2;
        }
        goto LAB_1007dd5b;
      }
      if (param_1 == 'M') {
        uVar5 = 2;
        iVar2 = param_2[1];
        goto LAB_1007dd5b;
      }
      if (param_1 == '%') {
        **(undefined1 **)param_3 = 0x25;
        *(int *)param_3 = *(int *)param_3 + 1;
        *param_4 = *param_4 - 1;
        return;
      }
      if (param_1 == 'A') {
        pcVar6 = *(char **)(param_5 + 0x1c + param_2[6] * 4);
        goto LAB_1007e001;
      }
      if (param_1 == 'B') {
        pcVar6 = *(char **)(param_5 + 0x68 + param_2[4] * 4);
        goto LAB_1007e001;
      }
      if (param_1 == 'H') {
        uVar5 = 2;
        iVar2 = param_2[2];
        goto LAB_1007dd5b;
      }
      if (param_1 != 'I') {
        return;
      }
      iVar2 = param_2[2] % 0xc;
      if (iVar2 == 0) {
        iVar2 = 0xc;
      }
LAB_1007dc88:
      uVar5 = 2;
LAB_1007dd5b:
      DAT_102e04c4 = DAT_102e04c0;
      FUN_1007e035(iVar2,uVar5,(int *)param_3,param_4);
      return;
    }
  }
  else {
    if (param_1 < 'n') {
      if (param_1 == 'm') {
        iVar2 = param_2[4];
        uVar5 = 2;
      }
      else {
        if (param_1 == 'a') {
          pcVar6 = *(char **)(param_5 + param_2[6] * 4);
          goto LAB_1007e001;
        }
        if (param_1 == 'b') {
          pcVar6 = *(char **)(param_5 + 0x38 + param_2[4] * 4);
          goto LAB_1007e001;
        }
        if (param_1 == 'c') {
          if (DAT_102e04c0 == 0) {
            pbVar4 = *(byte_conflict **)(param_5 + 0xa0);
          }
          else {
            DAT_102e04c0 = 0;
            pbVar4 = *(byte_conflict **)(param_5 + 0xa4);
          }
          FUN_1007e0ed(pbVar4,(int)param_2,param_3,param_4,param_5);
          if (*param_4 == 0) {
            return;
          }
          **(undefined1 **)param_3 = 0x20;
          *(int *)param_3 = *(int *)param_3 + 1;
          *param_4 = *param_4 - 1;
          pbVar4 = *(byte_conflict **)(param_5 + 0xa8);
          goto LAB_1007dfa5;
        }
        if (param_1 == 'd') {
          uVar5 = 2;
          iVar2 = param_2[3];
          goto LAB_1007dd5b;
        }
        if (param_1 != 'j') {
          return;
        }
        iVar2 = param_2[7];
        uVar5 = 3;
      }
      iVar2 = iVar2 + 1;
      goto LAB_1007dd5b;
    }
    if (param_1 == 'p') {
      if (param_2[2] < 0xc) {
        pcVar6 = *(char **)(param_5 + 0x98);
      }
      else {
        pcVar6 = *(char **)(param_5 + 0x9c);
      }
      goto LAB_1007e001;
    }
    if (param_1 == 'w') {
      uVar5 = 1;
      iVar2 = param_2[6];
      goto LAB_1007dd5b;
    }
    if (param_1 == 'x') {
      if (DAT_102e04c0 == 0) {
        pbVar4 = *(byte_conflict **)(param_5 + 0xa0);
      }
      else {
        DAT_102e04c0 = 0;
        pbVar4 = *(byte_conflict **)(param_5 + 0xa4);
      }
LAB_1007dfa5:
      FUN_1007e0ed(pbVar4,(int)param_2,param_3,param_4,param_5);
      return;
    }
    if (param_1 == 'y') {
      iVar2 = param_2[5] % 100;
      goto LAB_1007dc88;
    }
    if (param_1 != 'z') {
      return;
    }
  }
  FUN_1007ebaf();
  pcVar6 = (&PTR_DAT_1009f398)[param_2[8] != 0];
LAB_1007e001:
  FUN_1007e00e(pcVar6,(int *)param_3,(int *)param_4);
  return;
}

/* 1007e00e  FUN_1007e00e  (39 bytes)
 * undefined FUN_1007e00e(char * param_1, int * param_2, int * param_3)
 * called by: FUN_1007dc1f
 */
void __cdecl FUN_1007e00e(char *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_3;
  for (; (iVar1 != 0 && (*param_1 != '\0')); param_1 = param_1 + 1) {
    *(char *)*param_2 = *param_1;
    *param_2 = *param_2 + 1;
    *param_3 = *param_3 + -1;
    iVar1 = *param_3;
  }
  return;
}

/* 1007e035  FUN_1007e035  (111 bytes)
 * undefined FUN_1007e035(int param_1, uint param_2, int * param_3, uint * param_4)
 * called by: FUN_1007dc1f
 */
void __cdecl FUN_1007e035(int param_1,uint param_2,int *param_3,uint *param_4)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 0;
  if (DAT_102e04c4 == 0) {
    if (param_2 < *param_4) {
      iVar1 = param_2 - 1;
      if (param_2 != 0) {
        do {
          *(char *)(*param_3 + iVar1) = (char)(param_1 % 10) + '0';
          param_1 = param_1 / 10;
          local_8 = local_8 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != -1);
      }
      *param_3 = *param_3 + local_8;
      *param_4 = *param_4 - local_8;
    }
    else {
      *param_4 = 0;
    }
  }
  else {
    FUN_1007e0a4(param_1,param_3,param_4);
  }
  return;
}

/* 1007e0a4  FUN_1007e0a4  (73 bytes)
 * undefined FUN_1007e0a4(int param_1, int * param_2, uint * param_3)
 * called by: FUN_1007e035
 */
void __cdecl FUN_1007e0a4(int param_1,int *param_2,uint *param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_2;
  do {
    if (*param_3 < 2) break;
    *pcVar3 = (char)(param_1 % 10) + '0';
    pcVar3 = pcVar3 + 1;
    param_1 = param_1 / 10;
    *param_3 = *param_3 - 1;
  } while (0 < param_1);
  pcVar2 = (char *)*param_2;
  *param_2 = (int)pcVar3;
  pcVar3 = pcVar3 + -1;
  do {
    cVar1 = *pcVar3;
    *pcVar3 = *pcVar2;
    pcVar3 = pcVar3 + -1;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (pcVar2 < pcVar3);
  return;
}

/* 1007e0ed  FUN_1007e0ed  (719 bytes)
 * undefined FUN_1007e0ed(byte.conflict * param_1, int param_2, byte.conflict * param_3, uint * param_4, int param_5)
 * called by: FUN_1007dc1f
 */
void __cdecl
FUN_1007e0ed(byte_conflict *param_1,int param_2,byte_conflict *param_3,uint *param_4,int param_5)

{
  byte bVar1;
  byte_conflict *pbVar2;
  uint *puVar3;
  uint uVar4;
  byte *pbVar5;
  void *pvVar6;
  void *this;
  char *this_00;
  
  puVar3 = param_4;
  pbVar2 = param_3;
  bVar1 = *param_1;
  do {
    if ((bVar1 == 0) || (*puVar3 == 0)) {
      return;
    }
    DAT_102e04c4 = 0;
    bVar1 = *param_1;
    this = (void *)0x0;
    pbVar5 = param_1 + 1;
    do {
      param_3 = pbVar5;
      pvVar6 = this;
      this = (void *)((int)pvVar6 + 1);
      pbVar5 = param_3 + 1;
    } while (*param_3 == bVar1);
    if ((char)bVar1 < 'e') {
      if (bVar1 == 100) {
        if (pvVar6 == (void *)0x0) {
          DAT_102e04c4 = 1;
        }
        else if (pvVar6 != (void *)0x1) {
          if (pvVar6 == (void *)0x2) {
            param_4._0_1_ = 'a';
          }
          else {
            if (pvVar6 != (void *)0x3) goto LAB_1007e171;
            param_4._0_1_ = 'A';
          }
          goto LAB_1007e3a7;
        }
        param_4._0_1_ = 'd';
        goto LAB_1007e3a7;
      }
      if (bVar1 != 0x27) {
        if (bVar1 != 0x41) {
          if (bVar1 == 0x48) {
            if (pvVar6 == (void *)0x0) {
              DAT_102e04c4 = 1;
            }
            else if (this != (void *)0x2) goto LAB_1007e171;
            param_4._0_1_ = 'H';
            goto LAB_1007e3a7;
          }
          if (bVar1 == 0x4d) {
            if (pvVar6 == (void *)0x0) {
              DAT_102e04c4 = 1;
            }
            else if (pvVar6 != (void *)0x1) {
              if (pvVar6 == (void *)0x2) {
                param_4._0_1_ = 'b';
              }
              else {
                if (pvVar6 != (void *)0x3) goto LAB_1007e171;
                param_4._0_1_ = 'B';
              }
              goto LAB_1007e3a7;
            }
            param_4._0_1_ = 'm';
            goto LAB_1007e3a7;
          }
          if (bVar1 != 0x61) goto LAB_1007e171;
        }
        this_00 = "am/pm";
        uVar4 = FUN_1007e860(this,param_1,(byte_conflict *)"am/pm");
        if (uVar4 == 0) {
          param_3 = param_1 + 5;
        }
        else {
          uVar4 = FUN_1007e860(this_00,param_1,"a/p");
          if (uVar4 == 0) {
            param_3 = param_1 + 3;
          }
        }
        param_4._0_1_ = 'p';
        goto LAB_1007e3a7;
      }
      if (((uint)this & 1) == 0) {
        param_3 = param_1 + (int)this;
      }
      else {
        param_3 = param_1 + (int)this;
        while( true ) {
          bVar1 = *param_3;
          if ((bVar1 == 0) || (*puVar3 == 0)) goto LAB_1007e197;
          if (bVar1 == 0x27) break;
          if (((PTR_DAT_1009b9b8[(uint)bVar1 * 2 + 1] & 0x80) != 0) && (1 < *puVar3)) {
            **(byte **)pbVar2 = bVar1;
            *(int *)pbVar2 = *(int *)pbVar2 + 1;
            param_3 = param_3 + 1;
            *puVar3 = *puVar3 - 1;
          }
          **(byte **)pbVar2 = *param_3;
          *(int *)pbVar2 = *(int *)pbVar2 + 1;
          param_3 = param_3 + 1;
          *puVar3 = *puVar3 - 1;
        }
        param_3 = param_3 + 1;
      }
    }
    else {
      if (bVar1 == 0x68) {
        if (pvVar6 == (void *)0x0) {
          DAT_102e04c4 = 1;
        }
        else if (this != (void *)0x2) goto LAB_1007e171;
        param_4._0_1_ = 'I';
      }
      else if (bVar1 == 0x6d) {
        if (pvVar6 == (void *)0x0) {
          DAT_102e04c4 = 1;
        }
        else if (this != (void *)0x2) goto LAB_1007e171;
        param_4._0_1_ = 'M';
      }
      else if (bVar1 == 0x73) {
        if (pvVar6 == (void *)0x0) {
          DAT_102e04c4 = 1;
        }
        else if (this != (void *)0x2) goto LAB_1007e171;
        param_4._0_1_ = 'S';
      }
      else {
        if (bVar1 == 0x74) {
          if (*(int *)(param_2 + 8) < 0xc) {
            pbVar5 = *(byte **)(param_5 + 0x98);
          }
          else {
            pbVar5 = *(byte **)(param_5 + 0x9c);
          }
          while ((0 < (int)this && (*puVar3 != 0))) {
            if (((PTR_DAT_1009b9b8[(uint)*pbVar5 * 2 + 1] & 0x80) != 0) && (1 < *puVar3)) {
              **(byte **)pbVar2 = *pbVar5;
              *(int *)pbVar2 = *(int *)pbVar2 + 1;
              pbVar5 = pbVar5 + 1;
              *puVar3 = *puVar3 - 1;
            }
            **(byte **)pbVar2 = *pbVar5;
            *(int *)pbVar2 = *(int *)pbVar2 + 1;
            pbVar5 = pbVar5 + 1;
            *puVar3 = *puVar3 - 1;
            this = (void *)((int)this + -1);
          }
          goto LAB_1007e197;
        }
        if (bVar1 != 0x79) {
LAB_1007e171:
          if ((PTR_DAT_1009b9b8[(uint)bVar1 * 2 + 1] & 0x80) != 0) {
            **(byte **)pbVar2 = bVar1;
            *(int *)pbVar2 = *(int *)pbVar2 + 1;
            *puVar3 = *puVar3 - 1;
            param_1 = param_1 + 1;
          }
          **(byte **)pbVar2 = *param_1;
          *(int *)pbVar2 = *(int *)pbVar2 + 1;
          param_3 = param_1 + 1;
          *puVar3 = *puVar3 - 1;
          goto LAB_1007e197;
        }
        if (pvVar6 == (void *)0x1) {
          param_4._0_1_ = 'y';
        }
        else {
          if (pvVar6 != (void *)0x3) goto LAB_1007e171;
          param_4._0_1_ = 'Y';
        }
      }
LAB_1007e3a7:
      FUN_1007dc1f((char)param_4,(int *)param_2,pbVar2,puVar3,param_5);
    }
LAB_1007e197:
    bVar1 = *param_3;
    param_1 = param_3;
  } while( true );
}

/* 1007e3bc  FUN_1007e3bc  (312 bytes)
 * undefined4 FUN_1007e3bc(int param_1, LCID param_2, LCTYPE param_3, char * param_4)
 * called by: FUN_10079fdd, FUN_1007a4bb, FUN_1007a792, FUN_1007a939
 */
undefined4 __cdecl FUN_1007e3bc(int param_1,LCID param_2,LCTYPE param_3,char *param_4)

{
  byte bVar1;
  bool bVar2;
  size_t sVar3;
  DWORD DVar4;
  CHAR *_Source;
  char *_Dest;
  int iVar5;
  uint uVar6;
  void *extraout_ECX;
  undefined *puVar7;
  void *this;
  byte *pbVar8;
  CHAR local_84 [128];
  
  if (param_1 != 1) {
    if (param_1 != 0) {
      return 0xffffffff;
    }
    pbVar8 = &DAT_102e03e0;
    iVar5 = FUN_1007f187(param_2,param_3,(LPWSTR)&DAT_102e03e0,4,0);
    if (iVar5 != 0) {
      *param_4 = '\0';
      this = extraout_ECX;
      while( true ) {
        bVar1 = *pbVar8;
        if (DAT_1009bbc4 < 2) {
          uVar6 = (byte)PTR_DAT_1009b9b8[(uint)bVar1 * 2] & 4;
          puVar7 = PTR_DAT_1009b9b8;
        }
        else {
          puVar7 = (undefined *)0x0;
          uVar6 = FUN_1006f09e(this,(uint)bVar1,4);
        }
        if (uVar6 == 0) break;
        this = (void *)CONCAT31((int3)((uint)puVar7 >> 8),10);
        pbVar8 = pbVar8 + 2;
        *param_4 = *param_4 * '\n' + bVar1 + -0x30;
        if (0x102e03e7 < (int)pbVar8) {
          return 0;
        }
      }
      return 0;
    }
    return 0xffffffff;
  }
  _Source = local_84;
  bVar2 = false;
  sVar3 = FUN_1007f29a(param_2,param_3,local_84,0x80,0);
  if (sVar3 == 0) {
    DVar4 = GetLastError();
    if (DVar4 != 0x7a) {
      return 0xffffffff;
    }
    sVar3 = FUN_1007f29a(param_2,param_3,(LPSTR)0x0,0,0);
    if (sVar3 == 0) {
      return 0xffffffff;
    }
    _Source = _malloc(sVar3);
    if (_Source == (LPSTR)0x0) {
      return 0xffffffff;
    }
    bVar2 = true;
    sVar3 = FUN_1007f29a(param_2,param_3,_Source,sVar3,0);
    if (sVar3 == 0) goto LAB_1007e45a;
  }
  _Dest = _malloc(sVar3);
  *(char **)param_4 = _Dest;
  if (_Dest != (char *)0x0) {
    _strncpy(_Dest,_Source,sVar3);
    if (bVar2) {
      FUN_1006f7f9(_Source);
    }
    return 0;
  }
  if (!bVar2) {
    return 0xffffffff;
  }
LAB_1007e45a:
  FUN_1006f7f9(_Source);
  return 0xffffffff;
}

/* 1007e4fa  FUN_1007e4fa  (423 bytes)
 * BOOL FUN_1007e4fa(DWORD param_1, LPCWSTR param_2, int param_3, LPWORD param_4, UINT param_5, LCID param_6)
 * called by: FUN_1007a939
 */
BOOL __cdecl
FUN_1007e4fa(DWORD param_1,LPCWSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6)

{
  undefined1 *puVar1;
  BOOL BVar2;
  size_t _Size;
  int iVar3;
  WORD local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1008b110;
  pcStack_10 = FUN_100775d8;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc4;
  iVar3 = DAT_102e03ec;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc4;
  if (DAT_102e03ec == 0) {
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
  DAT_102e03ec = iVar3;
  if (DAT_102e03ec != 1) {
    if (DAT_102e03ec == 2) {
      if (param_5 == 0) {
        param_5 = DAT_102e0224;
      }
      _Size = WideCharToMultiByte(param_5,0x220,param_2,param_3,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0
                                 );
      if (_Size != 0) {
        local_8 = 0;
        FUN_1006f1c0();
        local_1c = &stack0xffffffc4;
        _memset(&stack0xffffffc4,0,_Size);
        local_8 = 0xffffffff;
        if (&stack0x00000000 != (undefined1 *)0x3c) {
          iVar3 = WideCharToMultiByte(param_5,0x220,param_2,param_3,&stack0xffffffc4,_Size,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
          if (iVar3 != 0) {
            local_8 = 1;
            FUN_1006f1c0();
            local_8 = 0xffffffff;
            if (&stack0x00000000 != (undefined1 *)0x3c) {
              if (param_6 == 0) {
                param_6 = DAT_102e0214;
              }
              local_1c = &stack0xffffffc4;
              *(short *)(&stack0xffffffc4 + param_3 * 2) = -1;
              local_20[param_3 + -0xf] = 0xffff;
              BVar2 = GetStringTypeA(param_6,param_1,&stack0xffffffc4,_Size,(LPWORD)&stack0xffffffc4
                                    );
              if ((local_20[param_3 + -0xf] != 0xffff) &&
                 (*(short *)(&stack0xffffffc4 + param_3 * 2) == -1)) {
                FUN_10078900((undefined4 *)param_4,(undefined4 *)&stack0xffffffc4,param_3 * 2);
                ExceptionList = local_14;
                return BVar2;
              }
            }
          }
        }
      }
    }
    ExceptionList = local_14;
    return 0;
  }
  BVar2 = GetStringTypeW(param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}

/* 1007e5e6  FUN_1007e5e6  (4 bytes)
 * undefined FUN_1007e5e6()
 */
undefined4 FUN_1007e5e6(void)

{
  return 1;
}

/* 1007e643  FUN_1007e643  (4 bytes)
 * undefined FUN_1007e643()
 */
undefined4 FUN_1007e643(void)

{
  return 1;
}

/* 1007e6bf  FUN_1007e6bf  (45 bytes)
 * char * FUN_1007e6bf(uint param_1, char * param_2, uint param_3)
 * called by: FUN_1007ac0a
 */
char * __cdecl FUN_1007e6bf(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  
  if ((param_3 == 10) && ((int)param_1 < 0)) {
    iVar1 = 1;
    param_3 = 10;
  }
  else {
    iVar1 = 0;
  }
  FUN_1007e6ec(param_1,param_2,param_3,iVar1);
  return param_2;
}

/* 1007e6ec  FUN_1007e6ec  (92 bytes)
 * undefined FUN_1007e6ec(uint param_1, char * param_2, uint param_3, int param_4)
 * called by: FUN_1007e6bf, FUN_1007e748
 */
void __cdecl FUN_1007e6ec(uint param_1,char *param_2,uint param_3,int param_4)

{
  ulonglong uVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  
  pcVar2 = param_2;
  if (param_4 != 0) {
    *param_2 = '-';
    param_2 = param_2 + 1;
    param_1 = -param_1;
    pcVar2 = param_2;
  }
  do {
    pcVar3 = pcVar2;
    uVar1 = (ulonglong)param_1;
    param_1 = param_1 / param_3;
    cVar4 = (char)(uVar1 % (ulonglong)param_3);
    if ((uint)(uVar1 % (ulonglong)param_3) < 10) {
      cVar4 = cVar4 + '0';
    }
    else {
      cVar4 = cVar4 + 'W';
    }
    *pcVar3 = cVar4;
    pcVar2 = pcVar3 + 1;
  } while (param_1 != 0);
  pcVar3[1] = '\0';
  do {
    cVar4 = *pcVar3;
    *pcVar3 = *param_2;
    *param_2 = cVar4;
    pcVar3 = pcVar3 + -1;
    param_2 = param_2 + 1;
  } while (param_2 < pcVar3);
  return;
}

/* 1007e748  FUN_1007e748  (42 bytes)
 * char * FUN_1007e748(uint param_1, char * param_2, uint param_3)
 */
char * __cdecl FUN_1007e748(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_3 == 10) && ((int)param_1 < 0)) {
    iVar1 = 1;
  }
  FUN_1007e6ec(param_1,param_2,param_3,iVar1);
  return param_2;
}

/* 1007e78d  FUN_1007e78d  (49 bytes)
 * char * FUN_1007e78d(int param_1, int param_2, char * param_3, uint param_4)
 */
char * __cdecl FUN_1007e78d(int param_1,int param_2,char *param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (((param_4 == 10) && (param_2 < 1)) && (param_2 < 0)) {
    iVar1 = 1;
  }
  FUN_1007e7be(param_1,param_2,param_3,param_4,iVar1);
  return param_3;
}

/* 1007e7be  FUN_1007e7be  (134 bytes)
 * undefined FUN_1007e7be(int param_1, int param_2, char * param_3, uint param_4, int param_5)
 * called by: FUN_1007e78d, FUN_1007e844
 */
void FUN_1007e7be(int param_1,int param_2,char *param_3,uint param_4,int param_5)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  
  if (param_5 != 0) {
    *param_3 = '-';
    param_3 = param_3 + 1;
    bVar4 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(param_2 + (uint)bVar4);
  }
  lVar6 = CONCAT44(param_2,param_1);
  pcVar1 = param_3;
  do {
    pcVar3 = pcVar1;
    uVar7 = (uint)((ulonglong)lVar6 >> 0x20);
    uVar5 = __aullrem((uint)lVar6,uVar7,param_4,0);
    lVar6 = __aulldiv((uint)lVar6,uVar7,param_4,0);
    if ((uint)uVar5 < 10) {
      cVar2 = (char)uVar5 + '0';
    }
    else {
      cVar2 = (char)uVar5 + 'W';
    }
    *pcVar3 = cVar2;
    pcVar1 = pcVar3 + 1;
  } while (lVar6 != 0);
  pcVar3[1] = '\0';
  do {
    cVar2 = *pcVar3;
    *pcVar3 = *param_3;
    *param_3 = cVar2;
    pcVar3 = pcVar3 + -1;
    param_3 = param_3 + 1;
  } while (param_3 < pcVar3);
  return;
}

/* 1007e844  FUN_1007e844  (27 bytes)
 * char * FUN_1007e844(int param_1, int param_2, char * param_3, uint param_4)
 */
char * __cdecl FUN_1007e844(int param_1,int param_2,char *param_3,uint param_4)

{
  FUN_1007e7be(param_1,param_2,param_3,param_4,0);
  return param_3;
}

/* 1007e860  FUN_1007e860  (208 bytes)
 * uint FUN_1007e860(byte.conflict * param_1, byte.conflict * param_2)
 * called by: CBreakable::KeyValue, CHalfLifeMultiplay::ChangeLevel, CHalfLifeMultiplay::ClientUserInfoChanged, CHalfLifeMultiplay::IsValidTeam, CHalfLifeMultiplay::PlayerKilled, CHalfLifeTeamplay::ClientUserInfoChanged, CTSGameRules::CheckDeads, CTSGameRules::TeamWin, CTSObjectivePointer::Use, CTSTrigger::WaitTouch, CVoiceGameMgr::ClientCommand, CWeaponBox::GiveAmmo, ... (34 total)
 */
uint __thiscall FUN_1007e860(void *this,byte_conflict *param_1,byte_conflict *param_2)

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
  
  iVar4 = DAT_102e1848;
  if (DAT_102e0214 == 0) {
    bVar7 = 0xff;
    do {
      do {
        cVar8 = '\0';
        if (bVar7 == 0) goto LAB_1007e8ae;
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
LAB_1007e8ae:
    uVar9 = (uint)cVar8;
  }
  else {
    LOCK();
    DAT_102e1848 = DAT_102e1848 + 1;
    UNLOCK();
    bVar3 = 0 < DAT_102e1844;
    if (bVar3) {
      LOCK();
      UNLOCK();
      DAT_102e1848 = iVar4;
      FUN_10073e71(0x13);
      this = extraout_ECX;
    }
    uVar11 = (uint)bVar3;
    uVar9 = 0xff;
    uVar10 = 0;
    do {
      do {
        if ((char)uVar9 == '\0') goto LAB_1007e90f;
        bVar1 = *param_2;
        uVar9 = CONCAT31((int3)(uVar9 >> 8),bVar1);
        param_2 = param_2 + 1;
        bVar2 = *param_1;
        uVar10 = CONCAT31((int3)(uVar10 >> 8),bVar2);
        param_1 = param_1 + 1;
      } while (bVar1 == bVar2);
      uVar10 = FUN_10078119(this,uVar10);
      uVar9 = FUN_10078119(this_00,uVar9);
      this = extraout_ECX_00;
    } while ((byte)uVar10 == (byte)uVar9);
    uVar10 = (uint)((byte)uVar10 < (byte)uVar9);
    uVar9 = (1 - uVar10) - (uint)(uVar10 != 0);
LAB_1007e90f:
    if (uVar11 == 0) {
      LOCK();
      DAT_102e1848 = DAT_102e1848 + -1;
      UNLOCK();
    }
    else {
      FUN_10073ed2(0x13);
    }
  }
  return uVar9;
}

/* 1007e930  FUN_1007e930  (257 bytes)
 * undefined4 FUN_1007e930(byte.conflict * param_1, char * param_2, void * param_3)
 * called by: FUN_1007ae66, FUN_1007b0c0, TEXTURETYPE_Find, pfnPM_FindTextureType
 */
undefined4 __cdecl FUN_1007e930(byte_conflict *param_1,char *param_2,void *param_3)

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
  
  iVar2 = DAT_102e1848;
  uVar6 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_102e0214 == 0) {
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
        if (bVar3 != (byte)uVar4) goto LAB_1007e98f;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_1007e98f:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      DAT_102e1848 = DAT_102e1848 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_102e1844;
      if (bVar8) {
        LOCK();
        UNLOCK();
        DAT_102e1848 = iVar2;
        FUN_10073e71(0x13);
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
        uVar7 = FUN_10078119(param_3,uVar7);
        uVar5 = FUN_10078119(this,uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_1007ea05;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_1007ea05:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        DAT_102e1848 = DAT_102e1848 + -1;
        UNLOCK();
      }
      else {
        FUN_10073ed2(0x13);
      }
    }
  }
  return uVar6;
}

/* 1007ea31  FUN_1007ea31  (89 bytes)
 * int FUN_1007ea31(uint param_1, int param_2)
 */
int __cdecl FUN_1007ea31(uint param_1,int param_2)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_102e0800) &&
     ((*(byte *)((&DAT_102e0700)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1007b839(param_1);
    iVar1 = FUN_1007ea8a(param_1,param_2);
    FUN_1007b898(param_1);
    return iVar1;
  }
  pDVar2 = FUN_100757d8();
  *pDVar2 = 9;
  return -1;
}

/* 1007ea8a  FUN_1007ea8a  (293 bytes)
 * int FUN_1007ea8a(uint param_1, int param_2)
 * called by: FUN_1007b964, FUN_1007ea31
 */
int __cdecl FUN_1007ea8a(uint param_1,int param_2)

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
  
  FUN_1006f1c0();
  iVar8 = 0;
  DVar1 = FUN_1007584f(param_1,0,1);
  if ((DVar1 == 0xffffffff) || (DVar2 = FUN_1007584f(param_1,0,2), DVar2 == 0xffffffff)) {
    iVar8 = -1;
  }
  else {
    uVar9 = param_2 - DVar2;
    if ((int)uVar9 < 1) {
      if ((int)uVar9 < 0) {
        FUN_1007584f(param_1,param_2,0);
        hFile = (HANDLE)FUN_1007b750(param_1);
        BVar7 = SetEndOfFile(hFile);
        iVar8 = (BVar7 != 0) - 1;
        if (iVar8 == -1) {
          pDVar6 = FUN_100757d8();
          *pDVar6 = 0xd;
          DVar2 = GetLastError();
          pDVar6 = FUN_100757e1();
          *pDVar6 = DVar2;
        }
      }
    }
    else {
      _memset(local_1008,0,0x1000);
      uStackY_28 = 0x1007eaf7;
      iVar3 = FUN_1007f411(param_1,0x8000);
      do {
        uVar4 = 0x1000;
        if ((int)uVar9 < 0x1000) {
          uVar4 = uVar9;
        }
        iVar5 = FUN_100755da(param_1,local_1008,uVar4);
        if (iVar5 == -1) {
          pDVar6 = FUN_100757e1();
          if (*pDVar6 == 5) {
            pDVar6 = FUN_100757d8();
            *pDVar6 = 0xd;
          }
          iVar8 = -1;
          break;
        }
        uVar9 = uVar9 - iVar5;
      } while (0 < (int)uVar9);
      FUN_1007f411(param_1,iVar3);
    }
    FUN_1007584f(param_1,DVar1,0);
  }
  return iVar8;
}

/* 1007ebaf  FUN_1007ebaf  (46 bytes)
 * undefined FUN_1007ebaf(void)
 * called by: FUN_1007dc1f
 */
void FUN_1007ebaf(void)

{
  if (DAT_102e04b0 == 0) {
    FUN_10073e71(0xb);
    if (DAT_102e04b0 == 0) {
      FUN_1007ebf3();
      DAT_102e04b0 = DAT_102e04b0 + 1;
    }
    FUN_10073ed2(0xb);
  }
  return;
}

/* 1007ebf3  FUN_1007ebf3  (647 bytes)
 * undefined FUN_1007ebf3(void)
 * called by: FUN_1007ebaf
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007ebf3(void)

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
  
  FUN_10073e71(0xc);
  DAT_1009f3b0 = 0xffffffff;
  DAT_1009f3a0 = 0xffffffff;
  DAT_102e03f8 = 0;
  _Str1 = (uint *)FUN_1007f493("TZ");
  if (_Str1 == (uint *)0x0) {
    FUN_10073ed2(0xc);
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_102e0400);
    if (DVar3 == 0xffffffff) {
      return;
    }
    DAT_1009f30c = (void *)(DAT_102e0400 * 0x3c);
    DAT_102e03f8 = 1;
    if (DAT_102e0446 != 0) {
      DAT_1009f30c = (void *)((int)DAT_1009f30c + DAT_102e0454 * 0x3c);
    }
    if ((DAT_102e049a == 0) || (DAT_102e04a8 == 0)) {
      DAT_1009f310 = 0;
      _DAT_1009f314 = 0;
    }
    else {
      DAT_1009f310 = 1;
      _DAT_1009f314 = (DAT_102e04a8 - DAT_102e0454) * 0x3c;
    }
    iVar4 = WideCharToMultiByte(DAT_102e0224,0x220,(LPCWSTR)&DAT_102e0404,-1,PTR_DAT_1009f398,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 == 0) || (local_8 != 0)) {
      *PTR_DAT_1009f398 = 0;
    }
    else {
      PTR_DAT_1009f398[0x3f] = 0;
    }
    iVar4 = WideCharToMultiByte(DAT_102e0224,0x220,(LPCWSTR)&DAT_102e0458,-1,PTR_DAT_1009f39c,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 != 0) && (local_8 == 0)) {
      PTR_DAT_1009f39c[0x3f] = 0;
      return;
    }
LAB_1007ee64:
    *PTR_DAT_1009f39c = 0;
  }
  else {
    if (((char)*_Str1 != '\0') &&
       ((DAT_102e04ac == (uint *)0x0 ||
        (iVar4 = _strcmp((char *)_Str1,(char *)DAT_102e04ac), iVar4 != 0)))) {
      FUN_1006f7f9((undefined *)DAT_102e04ac);
      sVar5 = _strlen((char *)_Str1);
      DAT_102e04ac = _malloc(sVar5 + 1);
      if (DAT_102e04ac != (uint *)0x0) {
        FUN_10078810(DAT_102e04ac,_Str1);
        FUN_10073ed2(0xc);
        _strncpy(PTR_DAT_1009f398,(char *)_Str1,3);
        _Source = (uint *)((int)_Str1 + 3);
        PTR_DAT_1009f398[3] = 0;
        cVar1 = *(char *)_Source;
        if (cVar1 == '-') {
          _Source = _Str1 + 1;
        }
        iVar4 = FUN_1006e152(this,(byte_conflict *)_Source);
        DAT_1009f30c = (void *)(iVar4 * 0xe10);
        for (; (cVar2 = (char)*_Source, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':'))));
            _Source = (uint *)((int)_Source + 1)) {
        }
        if ((char)*_Source == ':') {
          _Source = (uint *)((int)_Source + 1);
          iVar4 = FUN_1006e152(DAT_1009f30c,(byte_conflict *)_Source);
          DAT_1009f30c = (void *)((int)DAT_1009f30c + iVar4 * 0x3c);
          for (; ('/' < (char)*_Source && ((char)*_Source < ':'));
              _Source = (uint *)((int)_Source + 1)) {
          }
          if ((char)*_Source == ':') {
            _Source = (uint *)((int)_Source + 1);
            iVar4 = FUN_1006e152(DAT_1009f30c,(byte_conflict *)_Source);
            DAT_1009f30c = (void *)((int)DAT_1009f30c + iVar4);
            for (; ('/' < (char)*_Source && ((char)*_Source < ':'));
                _Source = (uint *)((int)_Source + 1)) {
            }
          }
        }
        if (cVar1 == '-') {
          DAT_1009f30c = (void *)-(int)DAT_1009f30c;
        }
        DAT_1009f310 = (int)(char)*_Source;
        if (DAT_1009f310 != 0) {
          _strncpy(PTR_DAT_1009f39c,(char *)_Source,3);
          PTR_DAT_1009f39c[3] = 0;
          return;
        }
        goto LAB_1007ee64;
      }
    }
    FUN_10073ed2(0xc);
  }
  return;
}

/* 1007ee9b  FUN_1007ee9b  (428 bytes)
 * bool FUN_1007ee9b(int * param_1)
 */
bool __cdecl FUN_1007ee9b(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (DAT_1009f310 != 0) {
    uVar5 = param_1[5];
    if ((uVar5 != DAT_1009f3a0) || (uVar5 != DAT_1009f3b0)) {
      if (DAT_102e03f8 == 0) {
        FUN_1007f047(1,1,uVar5,4,1,0,0,2,0,0,0);
        FUN_1007f047(0,1,param_1[5],10,5,0,0,2,0,0,0);
      }
      else {
        if (DAT_102e0498 != 0) {
          uVar6 = (uint)DAT_102e049e;
          uVar3 = 0;
          uVar4 = 0;
        }
        else {
          uVar3 = (uint)DAT_102e049c;
          uVar6 = 0;
          uVar4 = (uint)DAT_102e049e;
        }
        FUN_1007f047(1,(uint)(DAT_102e0498 == 0),uVar5,(uint)DAT_102e049a,uVar4,uVar3,uVar6,
                     (uint)DAT_102e04a0,(uint)DAT_102e04a2,(uint)DAT_102e04a4,(uint)DAT_102e04a6);
        if (DAT_102e0444 != 0) {
          uVar6 = (uint)DAT_102e044a;
          uVar3 = 0;
          uVar4 = 0;
          uVar5 = param_1[5];
        }
        else {
          uVar3 = (uint)DAT_102e0448;
          uVar6 = 0;
          uVar4 = (uint)DAT_102e044a;
          uVar5 = param_1[5];
        }
        FUN_1007f047(0,(uint)(DAT_102e0444 == 0),uVar5,(uint)DAT_102e0446,uVar4,uVar3,uVar6,
                     (uint)DAT_102e044c,(uint)DAT_102e044e,(uint)DAT_102e0450,(uint)DAT_102e0452);
      }
    }
    iVar1 = param_1[7];
    if (DAT_1009f3a4 < DAT_1009f3b4) {
      if ((DAT_1009f3a4 <= iVar1) && (iVar1 <= DAT_1009f3b4)) {
        if ((DAT_1009f3a4 < iVar1) && (iVar1 < DAT_1009f3b4)) {
          return true;
        }
LAB_1007f013:
        iVar2 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
        if (iVar1 == DAT_1009f3a4) {
          return DAT_1009f3a8 <= iVar2;
        }
        return iVar2 < DAT_1009f3b8;
      }
    }
    else {
      if (iVar1 < DAT_1009f3b4) {
        return true;
      }
      if (DAT_1009f3a4 < iVar1) {
        return true;
      }
      if ((iVar1 <= DAT_1009f3b4) || (DAT_1009f3a4 <= iVar1)) goto LAB_1007f013;
    }
  }
  return false;
}

/* 1007f047  FUN_1007f047  (320 bytes)
 * undefined FUN_1007f047(int param_1, int param_2, uint param_3, int param_4, int param_5, int param_6, int param_7, int param_8, int param_9, int param_10, int param_11)
 * called by: FUN_1007ee9b
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_1007f047(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 1) {
    if ((param_3 & 3) == 0) {
      iVar1 = (&DAT_1009f3b8)[param_4];
    }
    else {
      iVar1 = *(int *)(&DAT_1009f3ec + param_4 * 4);
    }
    iVar2 = (int)(param_3 * 0x16d + -0x63db + iVar1 + 1 + ((int)(param_3 - 1) >> 2)) % 7;
    if (param_6 < iVar2) {
      iVar1 = iVar1 + 1 + (param_5 * 7 - iVar2) + param_6;
    }
    else {
      iVar1 = iVar1 + -6 + (param_5 * 7 - iVar2) + param_6;
    }
    if (param_5 == 5) {
      if ((param_3 & 3) == 0) {
        iVar2 = *(int *)(&DAT_1009f3bc + param_4 * 4);
      }
      else {
        iVar2 = *(int *)(&DAT_1009f3f0 + param_4 * 4);
      }
      if (iVar2 < iVar1) {
        iVar1 = iVar1 + -7;
      }
    }
  }
  else {
    if ((param_3 & 3) == 0) {
      iVar1 = (&DAT_1009f3b8)[param_4];
    }
    else {
      iVar1 = *(int *)(&DAT_1009f3ec + param_4 * 4);
    }
    iVar1 = iVar1 + param_7;
  }
  if (param_1 == 1) {
    DAT_1009f3a0 = param_3;
    DAT_1009f3a8 = ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000 + param_11;
    DAT_1009f3a4 = iVar1;
  }
  else {
    DAT_1009f3b8 = ((param_8 * 0x3c + param_9) * 0x3c + _DAT_1009f314 + param_10) * 1000 + param_11;
    if (DAT_1009f3b8 < 0) {
      DAT_1009f3b8 = DAT_1009f3b8 + 86400000;
      DAT_1009f3b4 = iVar1 + -1;
    }
    else {
      DAT_1009f3b4 = iVar1;
      if (86399999 < DAT_1009f3b8) {
        DAT_1009f3b8 = DAT_1009f3b8 + -86400000;
        DAT_1009f3b4 = iVar1 + 1;
      }
    }
    DAT_1009f3b0 = param_3;
  }
  return;
}

/* 1007f187  FUN_1007f187  (264 bytes)
 * int FUN_1007f187(LCID param_1, LCTYPE param_2, LPWSTR param_3, int param_4, UINT param_5)
 * called by: FUN_1007e3bc
 */
int __cdecl FUN_1007f187(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1008b170;
  pcStack_10 = FUN_100775d8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_102e04b4 == 0) {
    ExceptionList = &local_14;
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_102e04b4 = 2;
    }
    else {
      DAT_102e04b4 = 1;
    }
  }
  if (DAT_102e04b4 != 1) {
    if (DAT_102e04b4 == 2) {
      if (param_5 == 0) {
        param_5 = DAT_102e0224;
      }
      iVar1 = GetLocaleInfoA(param_1,param_2,(LPSTR)0x0,0);
      if (iVar1 != 0) {
        local_8 = 0;
        FUN_1006f1c0();
        local_8 = 0xffffffff;
        if ((&stack0x00000000 != (undefined1 *)0x34) &&
           (iVar1 = GetLocaleInfoA(param_1,param_2,&stack0xffffffcc,iVar1), iVar1 != 0)) {
          if (param_4 == 0) {
            param_4 = 0;
            param_3 = (LPWSTR)0x0;
          }
          iVar1 = MultiByteToWideChar(param_5,1,&stack0xffffffcc,-1,param_3,param_4);
          ExceptionList = local_14;
          return iVar1;
        }
      }
    }
    ExceptionList = local_14;
    return 0;
  }
  iVar1 = GetLocaleInfoW(param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return iVar1;
}

/* 1007f240  FUN_1007f240  (4 bytes)
 * undefined FUN_1007f240()
 */
undefined4 FUN_1007f240(void)

{
  return 1;
}

/* 1007f29a  FUN_1007f29a  (275 bytes)
 * int FUN_1007f29a(LCID param_1, LCTYPE param_2, LPSTR param_3, int param_4, UINT param_5)
 * called by: FUN_1007e3bc
 */
int __cdecl FUN_1007f29a(LCID param_1,LCTYPE param_2,LPSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1008b180;
  pcStack_10 = FUN_100775d8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_102e04b8 == 0) {
    ExceptionList = &local_14;
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_102e04b8 = 2;
    }
    else {
      DAT_102e04b8 = 1;
    }
  }
  if (DAT_102e04b8 != 2) {
    if (DAT_102e04b8 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_102e0224;
      }
      iVar1 = GetLocaleInfoW(param_1,param_2,(LPWSTR)0x0,0);
      if (iVar1 != 0) {
        local_8 = 0;
        FUN_1006f1c0();
        local_8 = 0xffffffff;
        if ((&stack0x00000000 != (undefined1 *)0x34) &&
           (iVar1 = GetLocaleInfoW(param_1,param_2,(LPWSTR)&stack0xffffffcc,iVar1), iVar1 != 0)) {
          if (param_4 == 0) {
            param_4 = 0;
            param_3 = (LPSTR)0x0;
          }
          iVar1 = WideCharToMultiByte(param_5,0x220,(LPCWSTR)&stack0xffffffcc,-1,param_3,param_4,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
          ExceptionList = local_14;
          return iVar1;
        }
      }
    }
    ExceptionList = local_14;
    return 0;
  }
  iVar1 = GetLocaleInfoA(param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return iVar1;
}

/* 1007f359  FUN_1007f359  (4 bytes)
 * undefined FUN_1007f359()
 */
undefined4 FUN_1007f359(void)

{
  return 1;
}

/* 1007f3b8  FUN_1007f3b8  (89 bytes)
 * int FUN_1007f3b8(uint param_1, int param_2)
 */
int __cdecl FUN_1007f3b8(uint param_1,int param_2)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_102e0800) &&
     ((*(byte *)((&DAT_102e0700)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1007b839(param_1);
    iVar1 = FUN_1007f411(param_1,param_2);
    FUN_1007b898(param_1);
    return iVar1;
  }
  pDVar2 = FUN_100757d8();
  *pDVar2 = 9;
  return -1;
}

/* 1007f411  FUN_1007f411  (97 bytes)
 * int FUN_1007f411(uint param_1, int param_2)
 * called by: FUN_1007ea8a, FUN_1007f3b8
 */
int __cdecl FUN_1007f411(uint param_1,int param_2)

{
  byte bVar1;
  DWORD *pDVar2;
  byte bVar3;
  
  bVar1 = *(byte *)((&DAT_102e0700)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
  if (param_2 == 0x8000) {
    bVar3 = bVar1 & 0x7f;
  }
  else {
    if (param_2 != 0x4000) {
      pDVar2 = FUN_100757d8();
      *pDVar2 = 0x16;
      return -1;
    }
    bVar3 = bVar1 | 0x80;
  }
  *(byte *)((&DAT_102e0700)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = bVar3;
  return (-(uint)((bVar1 & 0x80) != 0) & 0xffffc000) + 0x8000;
}

/* 1007f493  FUN_1007f493  (125 bytes)
 * int FUN_1007f493(uchar * param_1)
 * called by: FUN_1007ebf3
 */
int __cdecl FUN_1007f493(uchar *param_1)

{
  int iVar1;
  size_t _MaxCount;
  size_t sVar2;
  int *piVar3;
  
  if (((DAT_102e184c != 0) &&
      ((DAT_102e017c != (int *)0x0 ||
       (((DAT_102e0184 != 0 && (iVar1 = FUN_1007f54f(), iVar1 == 0)) && (DAT_102e017c != (int *)0x0)
        ))))) && (piVar3 = DAT_102e017c, param_1 != (uchar *)0x0)) {
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

/* 1007f54f  FUN_1007f54f  (110 bytes)
 * undefined4 FUN_1007f54f(void)
 * called by: FUN_1007f493, FUN_1007f865
 */
undefined4 FUN_1007f54f(void)

{
  LPCWSTR lpWideCharStr;
  size_t _Size;
  uint *lpMultiByteStr;
  int iVar1;
  undefined4 *puVar2;
  
  lpWideCharStr = (LPCWSTR)*DAT_102e0184;
  puVar2 = DAT_102e0184;
  while( true ) {
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return 0;
    }
    _Size = WideCharToMultiByte(1,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (((_Size == 0) || (lpMultiByteStr = _malloc(_Size), lpMultiByteStr == (uint *)0x0)) ||
       (iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*puVar2,-1,(LPSTR)lpMultiByteStr,_Size,(LPCSTR)0x0,
                                    (LPBOOL)0x0), iVar1 == 0)) break;
    FUN_1007f865(lpMultiByteStr,0);
    lpWideCharStr = (LPCWSTR)puVar2[1];
    puVar2 = puVar2 + 1;
  }
  return 0xffffffff;
}

/* 1007f5bd  FUN_1007f5bd  (597 bytes)
 * int FUN_1007f5bd(LCID param_1, DWORD param_2, byte.conflict * param_3, int param_4, byte.conflict * param_5, int param_6, UINT param_7)
 * called by: __mbsnbicoll
 */
int __cdecl
FUN_1007f5bd(LCID param_1,DWORD param_2,byte_conflict *param_3,int param_4,byte_conflict *param_5,
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
  puStack_c = &DAT_1008b190;
  pcStack_10 = FUN_100775d8;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffb0;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffb0;
  if (DAT_102e04bc == 0) {
    ExceptionList = &local_14;
    iVar2 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar2 == 0) {
      iVar2 = CompareStringA(0,0,"",1,"",1);
      if (iVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_102e04bc = 2;
      puVar1 = local_1c;
    }
    else {
      DAT_102e04bc = 1;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  if (0 < param_4) {
    param_4 = FUN_1007f83a((char *)param_3,param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_1007f83a((char *)param_5,param_6);
  }
  if (DAT_102e04bc == 2) {
    iVar2 = CompareStringA(param_1,param_2,(PCNZCH)param_3,param_4,(PCNZCH)param_5,param_6);
    ExceptionList = local_14;
    return iVar2;
  }
  if (DAT_102e04bc == 1) {
    if (param_7 == 0) {
      param_7 = DAT_102e0224;
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
      FUN_1006f1c0();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x50) &&
         (local_28 = (PCNZWCH)&stack0xffffffb0, local_1c = &stack0xffffffb0,
         iVar2 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,param_4,(LPWSTR)&stack0xffffffb0,
                                     local_20), iVar2 != 0)) {
        iVar2 = MultiByteToWideChar(param_7,9,(LPCSTR)param_5,param_6,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          local_8 = 1;
          local_24 = iVar2;
          FUN_1006f1c0();
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

/* 1007f774  FUN_1007f774  (4 bytes)
 * undefined FUN_1007f774()
 */
undefined4 FUN_1007f774(void)

{
  return 1;
}

/* 1007f7e3  FUN_1007f7e3  (4 bytes)
 * undefined FUN_1007f7e3()
 */
undefined4 FUN_1007f7e3(void)

{
  return 1;
}

/* 1007f83a  FUN_1007f83a  (43 bytes)
 * int FUN_1007f83a(char * param_1, int param_2)
 * called by: FUN_1007f5bd
 */
int __cdecl FUN_1007f83a(char *param_1,int param_2)

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

/* 1007f865  FUN_1007f865  (391 bytes)
 * undefined4 FUN_1007f865(uint * param_1, int param_2)
 * called by: FUN_1007f54f
 */
undefined4 __cdecl FUN_1007f865(uint *param_1,int param_2)

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
  puVar1 = FUN_1007faab(param_1,0x3d);
  if (puVar1 == (uint *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == puVar1) {
    return 0xffffffff;
  }
  bVar7 = *(char *)((int)puVar1 + 1) == '\0';
  if (DAT_102e017c == DAT_102e0180) {
    DAT_102e017c = FUN_1007fa44(DAT_102e017c);
  }
  if (DAT_102e017c == (int *)0x0) {
    if ((param_2 == 0) || (DAT_102e0184 == (undefined4 *)0x0)) {
      if (bVar7) {
        return 0;
      }
      DAT_102e017c = _malloc(4);
      if (DAT_102e017c == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_102e017c = 0;
      if (DAT_102e0184 == (undefined4 *)0x0) {
        DAT_102e0184 = _malloc(4);
        if (DAT_102e0184 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_102e0184 = 0;
      }
    }
    else {
      iVar2 = FUN_1007f54f();
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
  }
  piVar3 = DAT_102e017c;
  iVar2 = FUN_1007f9ec((uchar *)param_1,(int)puVar1 - (int)param_1);
  if ((iVar2 < 0) || (*piVar3 == 0)) {
    if (bVar7) {
      return 0;
    }
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    piVar3 = (int *)FUN_100739bf((byte_conflict *)piVar3,(uint *)(iVar2 * 4 + 8));
    if (piVar3 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar3[iVar2] = (int)param_1;
    piVar3[iVar2 + 1] = 0;
  }
  else {
    if (!bVar7) {
      piVar3[iVar2] = (int)param_1;
      goto LAB_1007f999;
    }
    piVar6 = piVar3 + iVar2;
    FUN_1006f7f9((undefined *)piVar3[iVar2]);
    for (; *piVar6 != 0; piVar6 = piVar6 + 1) {
      iVar2 = iVar2 + 1;
      *piVar6 = piVar6[1];
    }
    piVar3 = (int *)FUN_100739bf((byte_conflict *)piVar3,(uint *)(iVar2 << 2));
    if (piVar3 == (int *)0x0) goto LAB_1007f999;
  }
  DAT_102e017c = piVar3;
LAB_1007f999:
  if (param_2 != 0) {
    sVar4 = _strlen((char *)param_1);
    lpName = _malloc(sVar4 + 2);
    if (lpName != (uint *)0x0) {
      FUN_10078810(lpName,param_1);
      puVar5 = (undefined1 *)(((int)lpName - (int)param_1) + (int)puVar1);
      *puVar5 = 0;
      SetEnvironmentVariableA((LPCSTR)lpName,(LPCSTR)(~-(uint)bVar7 & (uint)(puVar5 + 1)));
      FUN_1006f7f9((undefined *)lpName);
    }
  }
  return 0;
}

/* 1007f9ec  FUN_1007f9ec  (88 bytes)
 * int FUN_1007f9ec(uchar * param_1, size_t param_2)
 * called by: FUN_1007f865
 */
int __cdecl FUN_1007f9ec(uchar *param_1,size_t param_2)

{
  uchar *_Str2;
  int iVar1;
  int *piVar2;
  
  _Str2 = (uchar *)*DAT_102e017c;
  piVar2 = DAT_102e017c;
  while( true ) {
    if (_Str2 == (uchar *)0x0) {
      return -((int)piVar2 - (int)DAT_102e017c >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,_Str2,param_2);
    if ((iVar1 == 0) &&
       ((*(char *)(*piVar2 + param_2) == '=' || (*(char *)(*piVar2 + param_2) == '\0')))) break;
    _Str2 = (uchar *)piVar2[1];
    piVar2 = piVar2 + 1;
  }
  return (int)piVar2 - (int)DAT_102e017c >> 2;
}

/* 1007fa44  FUN_1007fa44  (103 bytes)
 * undefined4 * FUN_1007fa44(int * param_1)
 * called by: FUN_1007f865
 */
undefined4 * __cdecl FUN_1007fa44(int *param_1)

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
      puVar4 = FUN_1007fb42(puVar4);
      *puVar6 = puVar4;
      puVar6 = puVar6 + 1;
      puVar4 = (uint *)*param_1;
    }
    *puVar6 = 0;
    return puVar3;
  }
  return (undefined4 *)0x0;
}

/* 1007faab  FUN_1007faab  (151 bytes)
 * uint * FUN_1007faab(uint * param_1, uint param_2)
 * called by: FUN_1007f865
 */
uint * __cdecl FUN_1007faab(uint *param_1,uint param_2)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  
  if (DAT_102e04dc == 0) {
    puVar2 = FUN_10071f20(param_1,(char)param_2);
  }
  else {
    FUN_10073e71(0x19);
    while( true ) {
      bVar1 = (byte)*param_1;
      uVar3 = (uint)bVar1;
      if (bVar1 == 0) break;
      if ((*(byte *)((int)&DAT_102e05e0 + uVar3 + 1) & 4) == 0) {
        puVar2 = param_1;
        if (param_2 == uVar3) break;
      }
      else {
        puVar2 = (uint *)((int)param_1 + 1);
        if (*(byte *)((int)param_1 + 1) == 0) {
          FUN_10073ed2(0x19);
          return (uint *)0x0;
        }
        if (param_2 == CONCAT11(bVar1,*(byte *)((int)param_1 + 1))) {
          FUN_10073ed2(0x19);
          return param_1;
        }
      }
      param_1 = (uint *)((int)puVar2 + 1);
    }
    FUN_10073ed2(0x19);
    puVar2 = (uint *)(~-(uint)(param_2 != uVar3) & (uint)param_1);
  }
  return puVar2;
}

/* 1007fb42  FUN_1007fb42  (43 bytes)
 * uint * FUN_1007fb42(uint * param_1)
 * called by: FUN_1007fa44
 */
uint * __cdecl FUN_1007fb42(uint *param_1)

{
  size_t sVar1;
  uint *puVar2;
  
  if (param_1 != (uint *)0x0) {
    sVar1 = _strlen((char *)param_1);
    puVar2 = _malloc(sVar1 + 1);
    if (puVar2 != (uint *)0x0) {
      puVar2 = FUN_10078810(puVar2,param_1);
      return puVar2;
    }
  }
  return (uint *)0x0;
}

/* 1007fd38  FUN_1007fd38  (308 bytes)
 * uint * FUN_1007fd38(uint * param_1)
 * called by: Host_Say
 */
uint * __cdecl FUN_1007fd38(uint *param_1)

{
  char cVar1;
  size_t _Size;
  int iVar2;
  uint *puVar3;
  bool bVar4;
  LPWSTR local_c;
  
  local_c = (LPWSTR)0x0;
  if (DAT_102e0214 == 0) {
    cVar1 = (char)*param_1;
    puVar3 = param_1;
    while (cVar1 != '\0') {
      cVar1 = (char)*puVar3;
      if (('@' < cVar1) && (cVar1 < '[')) {
        *(char *)puVar3 = cVar1 + ' ';
      }
      puVar3 = (uint *)((int)puVar3 + 1);
      cVar1 = *(char *)puVar3;
    }
  }
  else {
    InterlockedIncrement(&DAT_102e1848);
    bVar4 = DAT_102e1844 == 0;
    if (!bVar4) {
      InterlockedDecrement(&DAT_102e1848);
      FUN_10073e71(0x13);
    }
    if (DAT_102e0214 == 0) {
      if (bVar4) {
        InterlockedDecrement(&DAT_102e1848);
      }
      else {
        FUN_10073ed2(0x13);
      }
      cVar1 = (char)*param_1;
      puVar3 = param_1;
      while (cVar1 != '\0') {
        cVar1 = (char)*puVar3;
        if (('@' < cVar1) && (cVar1 < '[')) {
          *(char *)puVar3 = cVar1 + ' ';
        }
        puVar3 = (uint *)((int)puVar3 + 1);
        cVar1 = *(char *)puVar3;
      }
    }
    else {
      _Size = FUN_10074578(DAT_102e0214,0x100,(char *)param_1,-1,(LPWSTR)0x0,0,0,1);
      if (((_Size != 0) && (local_c = _malloc(_Size), local_c != (LPWSTR)0x0)) &&
         (iVar2 = FUN_10074578(DAT_102e0214,0x100,(char *)param_1,-1,local_c,_Size,0,1), iVar2 != 0)
         ) {
        FUN_10078810(param_1,(uint *)local_c);
      }
      if (bVar4) {
        InterlockedDecrement(&DAT_102e1848);
      }
      else {
        FUN_10073ed2(0x13);
      }
      FUN_1006f7f9((undefined *)local_c);
    }
  }
  return param_1;
}

/* 1007fe78  FUN_1007fe78  (10 bytes)
 * undefined FUN_1007fe78()
 */
void FUN_1007fe78(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006e33a(param_1,param_2,param_3,param_4);
  return;
}

/* 1007fea6  FUN_1007fea6  (10 bytes)
 * undefined FUN_1007fea6()
 */
void FUN_1007fea6(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006e33a(param_1,param_2,param_3,param_4);
  return;
}

/* 1007feb8  FUN_1007feb8  (10 bytes)
 * undefined FUN_1007feb8()
 */
void FUN_1007feb8(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006e33a(param_1,param_2,param_3,param_4);
  return;
}

/* 1007fed8  FUN_1007fed8  (10 bytes)
 * undefined FUN_1007fed8()
 */
void FUN_1007fed8(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006e33a(param_1,param_2,param_3,param_4);
  return;
}

/* 1007ff01  FUN_1007ff01  (10 bytes)
 * undefined FUN_1007ff01()
 */
void FUN_1007ff01(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006e33a(param_1,param_2,param_3,param_4);
  return;
}

/* 1007ff3c  FUN_1007ff3c  (10 bytes)
 * undefined FUN_1007ff3c()
 */
void FUN_1007ff3c(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006e33a(param_1,param_2,param_3,param_4);
  return;
}

/* 1007ff61  FUN_1007ff61  (10 bytes)
 * undefined FUN_1007ff61()
 */
void FUN_1007ff61(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006e33a(param_1,param_2,param_3,param_4);
  return;
}

/* 1007ff7b  FUN_1007ff7b  (10 bytes)
 * undefined FUN_1007ff7b()
 */
void FUN_1007ff7b(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006e33a(param_1,param_2,param_3,param_4);
  return;
}

/* 1007ffa1  FUN_1007ffa1  (10 bytes)
 * undefined FUN_1007ffa1()
 */
void FUN_1007ffa1(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006e33a(param_1,param_2,param_3,param_4);
  return;
}

/* 1007ffb8  FUN_1007ffb8  (10 bytes)
 * undefined FUN_1007ffb8()
 */
void FUN_1007ffb8(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006e33a(param_1,param_2,param_3,param_4);
  return;
}

/* 1007ffd8  FUN_1007ffd8  (10 bytes)
 * undefined FUN_1007ffd8()
 */
void FUN_1007ffd8(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  FUN_1006e33a(param_1,param_2,param_3,param_4);
  return;
}

