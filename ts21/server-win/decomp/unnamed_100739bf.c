/* mp.dll - unnamed_100739bf (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100739bf  FUN_100739bf  (781 bytes)
 * byte.conflict * FUN_100739bf(byte.conflict * param_1, uint * param_2)
 * called by: FUN_1006edbd, FUN_1007f865
 */
byte_conflict * __cdecl FUN_100739bf(byte_conflict *param_1,uint *param_2)

{
  byte_conflict *pbVar1;
  int iVar2;
  uint *puVar3;
  byte *pbVar4;
  int local_3c;
  uint *local_38;
  byte *local_34;
  int *local_30;
  uint *local_2c;
  byte *local_28;
  uint *local_24;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1008a470;
  pcStack_10 = FUN_100775d8;
  local_14 = ExceptionList;
  pbVar4 = (byte *)0x0;
  if (param_1 == (byte_conflict *)0x0) {
    ExceptionList = &local_14;
    pbVar1 = _malloc((size_t)param_2);
  }
  else {
    if (param_2 == (uint *)0x0) {
      ExceptionList = &local_14;
      FUN_1006f7f9(param_1);
    }
    else {
      ExceptionList = &local_14;
      if (DAT_102e0828 == 3) {
        do {
          local_28 = (byte *)0x0;
          if (param_2 < (uint *)0xffffffe1) {
            FUN_10073e71(9);
            local_8 = 0;
            local_2c = (uint *)FUN_10075e82((int)param_1);
            if (local_2c != (uint *)0x0) {
              if (param_2 <= DAT_102e0820) {
                iVar2 = FUN_1007668b(local_2c,(int)param_1,(int)param_2);
                if (iVar2 == 0) {
                  local_28 = (byte *)FUN_100761d6(param_2);
                  if (local_28 != (byte *)0x0) {
                    local_24 = (uint *)(*(int *)(param_1 + -4) - 1);
                    puVar3 = local_24;
                    if (param_2 <= local_24) {
                      puVar3 = param_2;
                    }
                    FUN_10075240((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar3);
                    local_2c = (uint *)FUN_10075e82((int)param_1);
                    FUN_10075ead(local_2c,(int)param_1);
                  }
                }
                else {
                  local_28 = param_1;
                }
              }
              if (local_28 == (byte *)0x0) {
                if (param_2 == (uint *)0x0) {
                  param_2 = (uint *)0x1;
                }
                param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
                local_28 = HeapAlloc(DAT_102e0824,0,(SIZE_T)param_2);
                if (local_28 != (byte *)0x0) {
                  local_24 = (uint *)(*(int *)(param_1 + -4) - 1);
                  puVar3 = local_24;
                  if (param_2 <= local_24) {
                    puVar3 = param_2;
                  }
                  FUN_10075240((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar3);
                  FUN_10075ead(local_2c,(int)param_1);
                }
              }
            }
            local_8 = 0xffffffff;
            FUN_10073b4a();
            if (local_2c == (uint *)0x0) {
              if (param_2 == (uint *)0x0) {
                param_2 = (uint *)0x1;
              }
              param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
              local_28 = HeapReAlloc(DAT_102e0824,0,param_1,(SIZE_T)param_2);
            }
          }
          if (local_28 != (byte *)0x0) {
            ExceptionList = local_14;
            return (byte_conflict *)(int *)local_28;
          }
          if (DAT_102e023c == (byte *)0x0) {
            ExceptionList = local_14;
            return (byte_conflict *)0x0;
          }
          iVar2 = FUN_10075a6f(param_2);
        } while (iVar2 != 0);
      }
      else {
        ExceptionList = &local_14;
        if (DAT_102e0828 == 2) {
          ExceptionList = &local_14;
          if (param_2 < (uint *)0xffffffe1) {
            if (param_2 == (uint *)0x0) {
              param_2 = (uint *)0x10;
              ExceptionList = &local_14;
            }
            else {
              param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
              ExceptionList = &local_14;
            }
          }
          do {
            local_28 = pbVar4;
            if (param_2 < (uint *)0xffffffe1) {
              FUN_10073e71(9);
              local_8 = 1;
              pbVar4 = (byte *)FUN_10076fff(param_1,&local_3c,(uint *)&local_30);
              local_34 = pbVar4;
              if (pbVar4 == (byte *)0x0) {
                local_28 = HeapReAlloc(DAT_102e0824,0,param_1,(SIZE_T)param_2);
              }
              else {
                if (param_2 < DAT_1009e444) {
                  iVar2 = FUN_100773c7(local_3c,local_30,pbVar4,(uint)param_2 >> 4);
                  if (iVar2 == 0) {
                    local_28 = (byte *)FUN_1007709b((uint)param_2 >> 4);
                    if (local_28 != (byte *)0x0) {
                      local_38 = (uint *)((uint)*pbVar4 << 4);
                      puVar3 = local_38;
                      if (param_2 <= local_38) {
                        puVar3 = param_2;
                      }
                      FUN_10075240((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar3);
                      FUN_10077056(local_3c,(int)local_30,pbVar4);
                    }
                  }
                  else {
                    local_28 = param_1;
                  }
                }
                if ((local_28 == (byte *)0x0) &&
                   (local_28 = HeapAlloc(DAT_102e0824,0,(SIZE_T)param_2), local_28 != (byte *)0x0))
                {
                  local_38 = (uint *)((uint)*pbVar4 << 4);
                  puVar3 = local_38;
                  if (param_2 <= local_38) {
                    puVar3 = param_2;
                  }
                  FUN_10075240((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar3);
                  FUN_10077056(local_3c,(int)local_30,pbVar4);
                }
              }
              local_8 = 0xffffffff;
              FUN_10073c98();
            }
            if (local_28 != pbVar4) {
              ExceptionList = local_14;
              return local_28;
            }
            if (DAT_102e023c == pbVar4) {
              ExceptionList = local_14;
              return local_28;
            }
            iVar2 = FUN_10075a6f(param_2);
          } while (iVar2 != 0);
        }
        else {
          do {
            pbVar1 = (byte_conflict *)0x0;
            if (param_2 < (uint *)0xffffffe1) {
              if (param_2 == (uint *)0x0) {
                param_2 = (uint *)0x1;
              }
              param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
              pbVar1 = HeapReAlloc(DAT_102e0824,0,param_1,(SIZE_T)param_2);
            }
            if (pbVar1 != (byte_conflict *)0x0) {
              ExceptionList = local_14;
              return pbVar1;
            }
            if (DAT_102e023c == (byte *)0x0) {
              ExceptionList = local_14;
              return (byte_conflict *)0x0;
            }
            iVar2 = FUN_10075a6f(param_2);
          } while (iVar2 != 0);
        }
      }
    }
    pbVar1 = (byte_conflict *)0x0;
  }
  ExceptionList = local_14;
  return pbVar1;
}

/* 10073b4a  FUN_10073b4a  (9 bytes)
 * undefined FUN_10073b4a(void)
 * called by: FUN_100739bf
 */
void FUN_10073b4a(void)

{
  FUN_10073ed2(9);
  return;
}

/* 10073c98  FUN_10073c98  (11 bytes)
 * undefined FUN_10073c98(void)
 * called by: FUN_100739bf
 */
void FUN_10073c98(void)

{
  FUN_10073ed2(9);
  return;
}

/* 10073cee  FUN_10073cee  (214 bytes)
 * SIZE_T FUN_10073cee(undefined * param_1)
 * called by: FUN_1006edbd
 */
SIZE_T __cdecl FUN_10073cee(undefined *param_1)

{
  byte *pbVar1;
  SIZE_T SVar2;
  undefined4 local_30;
  byte *local_2c;
  uint local_28;
  SIZE_T local_24;
  byte *local_20;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1008a488;
  pcStack_10 = FUN_100775d8;
  local_14 = ExceptionList;
  if (DAT_102e0828 == 3) {
    ExceptionList = &local_14;
    FUN_10073e71(9);
    local_8 = 0;
    local_20 = (byte *)FUN_10075e82((int)param_1);
    if (local_20 != (byte *)0x0) {
      local_24 = *(int *)(param_1 + -4) - 9;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_10073d58();
    pbVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_102e0828 != 2) goto LAB_10073dac;
    ExceptionList = &local_14;
    FUN_10073e71(9);
    local_8 = 1;
    local_2c = (byte *)FUN_10076fff(param_1,&local_30,&local_28);
    if (local_2c != (byte *)0x0) {
      local_24 = (uint)*local_2c << 4;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_10073dd3();
    pbVar1 = local_2c;
  }
  if (pbVar1 != (byte *)0x0) {
    ExceptionList = local_14;
    return SVar2;
  }
LAB_10073dac:
  SVar2 = HeapSize(DAT_102e0824,0,param_1);
  ExceptionList = local_14;
  return SVar2;
}

/* 10073d58  FUN_10073d58  (9 bytes)
 * undefined FUN_10073d58(void)
 * called by: FUN_10073cee
 */
void FUN_10073d58(void)

{
  FUN_10073ed2(9);
  return;
}

/* 10073dd3  FUN_10073dd3  (9 bytes)
 * undefined FUN_10073dd3(void)
 * called by: FUN_10073cee
 */
void FUN_10073dd3(void)

{
  FUN_10073ed2(9);
  return;
}

/* 10073ddc  FUN_10073ddc  (41 bytes)
 * undefined FUN_10073ddc(void)
 * called by: FUN_100708cc
 */
void FUN_10073ddc(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1009be54);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1009be44);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1009be34);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1009be14);
  return;
}

/* 10073e05  FUN_10073e05  (108 bytes)
 * undefined FUN_10073e05(void)
 * called by: FUN_10070920
 */
void FUN_10073e05(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_1009be10;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_1009be54)) && (ppuVar1 != &PTR_DAT_1009be44)) &&
       ((ppuVar1 != &PTR_DAT_1009be34 && (ppuVar1 != &PTR_DAT_1009be14)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_1006f7f9(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x1009bed0);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1009be34);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1009be44);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1009be54);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1009be14);
  return;
}

/* 10073e71  FUN_10073e71  (97 bytes)
 * undefined FUN_10073e71(int param_1)
 * called by: FUN_1006ef63, FUN_1006f6bc, FUN_1006f7f9, FUN_100731e9, FUN_10073993, FUN_100739bf, FUN_10073cee, FUN_10073e71, FUN_10073eff, FUN_100749b8, FUN_100749cc, FUN_100749fb, ... (30 total)
 */
void __cdecl FUN_10073e71(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_1009be10 + param_1;
  if ((&DAT_1009be10)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_10073e71(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_1006f7f9((undefined *)lpCriticalSection);
    }
    FUN_10073ed2(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}

/* 10073ed2  FUN_10073ed2  (21 bytes)
 * undefined FUN_10073ed2(int param_1)
 * called by: FUN_1006ef63, FUN_1006f755, FUN_1006f7de, FUN_1006f863, FUN_1006f8bb, FUN_10073250, FUN_100732af, FUN_1007399c, FUN_10073b4a, FUN_10073c98, FUN_10073d58, FUN_10073dd3, ... (35 total)
 */
void __cdecl FUN_10073ed2(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_1009be10)[param_1]);
  return;
}

/* 10073eff  FUN_10073eff  (582 bytes)
 * uint * FUN_10073eff(int param_1, uint * param_2)
 */
uint * __cdecl FUN_10073eff(int param_1,uint *param_2)

{
  uint *puVar1;
  byte_conflict *pbVar2;
  size_t sVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined4 *puVar8;
  uint local_8c [33];
  size_t local_8;
  
  iVar6 = 0;
  if ((param_1 < 0) || (5 < param_1)) {
    return (uint *)0x0;
  }
  FUN_10073e71(0x13);
  DAT_102e1844 = DAT_102e1844 + 1;
  while (DAT_102e1848 != 0) {
    Sleep(1);
  }
  if (param_1 == 0) {
    local_8 = 1;
    param_1 = 0;
    if (param_2 == (uint *)0x0) {
LAB_10074125:
      puVar1 = FUN_10074260();
    }
    else {
      if ((((char)*param_2 == 'L') && (*(char *)((int)param_2 + 1) == 'C')) &&
         (*(char *)((int)param_2 + 2) == '_')) {
        pbVar2 = FUN_1007abd0((byte_conflict *)param_2,"=;");
        puVar1 = param_2;
        while (((pbVar2 != (byte_conflict *)0x0 &&
                (local_8 = (int)pbVar2 - (int)puVar1, local_8 != 0)) && (*pbVar2 != ';'))) {
          param_2 = (uint *)0x1;
          ppuVar7 = &PTR_s_LC_COLLATE_1009bfec;
          do {
            iVar6 = _strncmp(*ppuVar7,(char *)puVar1,local_8);
            if ((iVar6 == 0) && (sVar3 = _strlen(*ppuVar7), local_8 == sVar3)) break;
            param_2 = (uint *)((int)param_2 + 1);
            ppuVar7 = ppuVar7 + 3;
          } while ((int)ppuVar7 < 0x1009c01d);
          pbVar2 = pbVar2 + 1;
          sVar3 = FUN_1007ab90(pbVar2,(byte_conflict *)&DAT_10097478);
          if ((sVar3 == 0) && (*pbVar2 != ';')) break;
          if ((int)param_2 < 6) {
            _strncpy((char *)local_8c,(char *)pbVar2,sVar3);
            *(undefined1 *)((int)local_8c + sVar3) = 0;
            iVar6 = FUN_10074145((int)param_2,local_8c);
            if (iVar6 != 0) {
              param_1 = param_1 + 1;
            }
          }
          if ((pbVar2[sVar3] == '\0') ||
             (puVar1 = (uint *)(pbVar2 + sVar3 + 1), (byte_conflict)*puVar1 == '\0'))
          goto LAB_1007408f;
          pbVar2 = FUN_1007abd0((byte_conflict *)puVar1,"=;");
        }
        FUN_10073ed2(0x13);
        puVar1 = (uint *)0x0;
        goto LAB_10074134;
      }
      puVar4 = FUN_10074319(param_2,local_8c,(undefined4 *)0x0,(undefined4 *)0x0);
      puVar1 = (uint *)0x0;
      if (puVar4 != (uint *)0x0) {
        puVar8 = &DAT_1009bfe4;
        do {
          if ((undefined **)puVar8 != &DAT_1009bfe4) {
            iVar5 = _strcmp((char *)local_8c,(char *)*puVar8);
            if ((iVar5 == 0) || (iVar5 = FUN_10074145(iVar6,local_8c), iVar5 != 0)) {
              param_1 = param_1 + 1;
            }
            else {
              local_8 = 0;
            }
          }
          puVar8 = puVar8 + 3;
          iVar6 = iVar6 + 1;
        } while ((int)puVar8 < 0x1009c021);
        if (local_8 == 0) {
LAB_1007408f:
          if (param_1 != 0) goto LAB_10074125;
          puVar1 = (uint *)0x0;
        }
        else {
          puVar1 = FUN_10074260();
          FUN_1006f7f9(DAT_1009bfe4);
          DAT_1009bfe4 = (undefined *)0x0;
        }
      }
    }
  }
  else if (param_2 == (uint *)0x0) {
    puVar1 = (uint *)(&DAT_1009bfe4)[param_1 * 3];
  }
  else {
    puVar1 = (uint *)FUN_10074145(param_1,param_2);
  }
  FUN_10073ed2(0x13);
LAB_10074134:
  DAT_102e1844 = DAT_102e1844 + -1;
  return puVar1;
}

/* 10074145  FUN_10074145  (283 bytes)
 * undefined4 FUN_10074145(int param_1, uint * param_2)
 * called by: FUN_10073eff
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10074145(int param_1,uint *param_2)

{
  uint *puVar1;
  undefined *puVar2;
  uint *puVar3;
  size_t sVar4;
  uint *puVar5;
  int iVar6;
  uint local_a8 [33];
  undefined4 local_24 [2];
  undefined4 local_1c;
  uint local_18;
  ushort local_14 [4];
  undefined4 *local_c;
  undefined4 local_8;
  
  puVar3 = FUN_10074319(param_2,local_a8,(undefined4 *)local_14,&local_1c);
  if (puVar3 != (uint *)0x0) {
    sVar4 = _strlen((char *)local_a8);
    puVar3 = _malloc(sVar4 + 1);
    if (puVar3 != (uint *)0x0) {
      puVar1 = (uint *)(&DAT_102e020c + param_1 * 4);
      puVar2 = (undefined *)(&DAT_1009bfe4)[param_1 * 3];
      local_18 = *puVar1;
      local_c = (undefined4 *)(&DAT_102e0370 + param_1 * 6);
      FUN_10075240(local_24,local_c,6);
      local_8 = DAT_102e0224;
      puVar5 = FUN_10078810(puVar3,local_a8);
      (&DAT_1009bfe4)[param_1 * 3] = puVar5;
      *puVar1 = (uint)local_14[0];
      FUN_10075240(local_c,(undefined4 *)local_14,6);
      if (param_1 == 2) {
        DAT_102e0224 = local_1c;
      }
      if (param_1 == 1) {
        _DAT_102e0228 = local_1c;
      }
      iVar6 = (**(code **)(&DAT_1009bfe8 + param_1 * 0xc))();
      if (iVar6 == 0) {
        if (puVar2 != &DAT_1009bed0) {
          FUN_1006f7f9(puVar2);
        }
        return (&DAT_1009bfe4)[param_1 * 3];
      }
      (&DAT_1009bfe4)[param_1 * 3] = puVar2;
      FUN_1006f7f9((undefined *)puVar3);
      *puVar1 = local_18;
      DAT_102e0224 = local_8;
    }
  }
  return 0;
}

/* 10074260  FUN_10074260  (185 bytes)
 * uint * FUN_10074260(void)
 * called by: FUN_10073eff
 */
uint * FUN_10074260(void)

{
  bool bVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  bVar1 = true;
  if (DAT_1009bfe4 == (uint *)0x0) {
    DAT_1009bfe4 = _malloc(0x351);
  }
  *(undefined1 *)DAT_1009bfe4 = 0;
  FUN_10074434(DAT_1009bfe4,3);
  ppuVar3 = &PTR_DAT_1009bff0;
  do {
    FUN_10078820(DAT_1009bfe4,(uint *)&DAT_10097478);
    ppuVar4 = ppuVar3 + 3;
    iVar2 = _strcmp(*ppuVar3,ppuVar3[3]);
    if (iVar2 != 0) {
      bVar1 = false;
    }
    FUN_10074434(DAT_1009bfe4,3);
    ppuVar3 = ppuVar4;
  } while ((int)ppuVar4 < 0x1009c020);
  if (!bVar1) {
    return DAT_1009bfe4;
  }
  FUN_1006f7f9((undefined *)DAT_1009bfe4);
  DAT_1009bfe4 = (uint *)0x0;
  return (uint *)PTR_DAT_1009bffc;
}

/* 10074319  FUN_10074319  (280 bytes)
 * uint * FUN_10074319(uint * param_1, uint * param_2, undefined4 * param_3, undefined4 * param_4)
 * called by: FUN_10073eff, FUN_10074145
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __cdecl FUN_10074319(uint *param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  uint *puVar2;
  uint local_8c [34];
  
  if (param_1 == (uint *)0x0) {
LAB_100743bf:
    puVar2 = (uint *)0x0;
  }
  else {
    if (((char)*param_1 == 'C') && (*(char *)((int)param_1 + 1) == '\0')) {
      *(undefined1 *)((int)param_2 + 1) = 0;
      *(undefined1 *)param_2 = 0x43;
      if (param_3 != (undefined4 *)0x0) {
        *(undefined2 *)param_3 = 0;
        *(undefined2 *)((int)param_3 + 2) = 0;
        *(undefined2 *)(param_3 + 1) = 0;
      }
      if (param_4 == (undefined4 *)0x0) {
        return param_2;
      }
      *param_4 = 0;
      return param_2;
    }
    iVar1 = _strcmp(&DAT_1009bf58,(char *)param_1);
    if ((iVar1 != 0) && (iVar1 = _strcmp(&DAT_1009bed4,(char *)param_1), iVar1 != 0)) {
      puVar2 = param_1;
      iVar1 = FUN_10074459((char *)local_8c,(byte_conflict *)param_1);
      if ((iVar1 != 0) ||
         (iVar1 = FUN_1007ac0a(puVar2,(char *)local_8c,(undefined2 *)&DAT_102e0200,(int)local_8c),
         iVar1 == 0)) goto LAB_100743bf;
      _DAT_102e0208 = (uint)DAT_102e0204;
      FUN_10074525((uint *)&DAT_1009bf58,local_8c);
      if ((char)*param_1 == '\0') {
        param_1 = (uint *)&DAT_1009bf58;
      }
      FUN_10078810((uint *)&DAT_1009bed4,param_1);
    }
    if (param_3 != (undefined4 *)0x0) {
      FUN_10075240(param_3,(undefined4 *)&DAT_102e0200,6);
    }
    if (param_4 != (undefined4 *)0x0) {
      FUN_10075240(param_4,(undefined4 *)&DAT_102e0208,4);
    }
    FUN_10078810(param_2,(uint *)&DAT_1009bf58);
    puVar2 = (uint *)&DAT_1009bf58;
  }
  return puVar2;
}

/* 10074431  FUN_10074431  (3 bytes)
 * undefined FUN_10074431()
 */
undefined4 FUN_10074431(void)

{
  return 0;
}

/* 10074434  FUN_10074434  (37 bytes)
 * undefined FUN_10074434(uint * param_1, int param_2)
 * called by: FUN_10074260, FUN_10074525
 */
void __cdecl FUN_10074434(uint *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (0 < param_2) {
    piVar2 = &param_2;
    iVar3 = param_2;
    do {
      piVar1 = piVar2 + 1;
      piVar2 = piVar2 + 1;
      FUN_10078820(param_1,(uint *)*piVar1);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

/* 10074459  FUN_10074459  (204 bytes)
 * undefined4 FUN_10074459(char * param_1, byte.conflict * param_2)
 * called by: FUN_10074319
 */
undefined4 __cdecl FUN_10074459(char *param_1,byte_conflict *param_2)

{
  byte_conflict bVar1;
  size_t _Count;
  byte_conflict *_Source;
  char *_Dest;
  
  _Source = param_2;
  _memset(param_1,0,0x88);
  if (*param_2 != '\0') {
    if ((*param_2 != '.') || (param_2[1] == '\0')) {
      param_2 = (byte_conflict *)0x0;
      while( true ) {
        _Count = FUN_1007ab90(_Source,"_.,");
        if (_Count == 0) {
          return 0xffffffff;
        }
        bVar1 = _Source[_Count];
        if (param_2 == (byte_conflict *)0x0) {
          if (0x3f < (int)_Count) {
            return 0xffffffff;
          }
          _Dest = param_1;
          if (bVar1 == '.') {
            return 0xffffffff;
          }
        }
        else if (param_2 == (byte_conflict *)0x1) {
          if (0x3f < (int)_Count) {
            return 0xffffffff;
          }
          if (bVar1 == '_') {
            return 0xffffffff;
          }
          _Dest = param_1 + 0x40;
        }
        else {
          if (param_2 != (byte_conflict *)0x2) {
            return 0xffffffff;
          }
          if ((bVar1 != '\0') && (bVar1 != ',')) {
            return 0xffffffff;
          }
          _Dest = param_1 + 0x80;
        }
        _strncpy(_Dest,(char *)_Source,_Count);
        if (bVar1 == ',') {
          return 0;
        }
        if (bVar1 == '\0') break;
        param_2 = param_2 + 1;
        _Source = _Source + _Count + 1;
      }
      return 0;
    }
    FUN_10078810((uint *)(param_1 + 0x80),(uint *)(param_2 + 1));
  }
  return 0;
}

/* 10074525  FUN_10074525  (83 bytes)
 * undefined FUN_10074525(uint * param_1, uint * param_2)
 * called by: FUN_10074319
 */
void __cdecl FUN_10074525(uint *param_1,uint *param_2)

{
  FUN_10078810(param_1,param_2);
  if ((char)param_2[0x10] != '\0') {
    FUN_10074434(param_1,2);
  }
  if ((char)param_2[0x20] != '\0') {
    FUN_10074434(param_1,2);
  }
  return;
}

/* 10074578  FUN_10074578  (511 bytes)
 * int FUN_10074578(LCID param_1, uint param_2, char * param_3, int param_4, LPWSTR param_5, int param_6, UINT param_7, int param_8)
 * called by: FUN_1006efd2, FUN_10078119, FUN_1007c0b9, FUN_1007fd38
 */
int __cdecl
FUN_10074578(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1008a500;
  pcStack_10 = FUN_100775d8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_102e022c == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_102e022c = 2;
    }
    else {
      DAT_102e022c = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_1007479c(param_3,param_4);
  }
  if (DAT_102e022c == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_102e022c == 1) {
    if (param_7 == 0) {
      param_7 = DAT_102e0224;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_1006f1c0();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_1006f1c0();
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

/* 10074688  FUN_10074688  (4 bytes)
 * undefined FUN_10074688()
 */
undefined4 FUN_10074688(void)

{
  return 1;
}

/* 1007473c  FUN_1007473c  (4 bytes)
 * undefined FUN_1007473c()
 */
undefined4 FUN_1007473c(void)

{
  return 1;
}

/* 1007479c  FUN_1007479c  (43 bytes)
 * int FUN_1007479c(char * param_1, int param_2)
 * called by: FUN_10074578
 */
int __cdecl FUN_1007479c(char *param_1,int param_2)

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

/* 100747c7  FUN_100747c7  (318 bytes)
 * BOOL FUN_100747c7(DWORD param_1, LPCSTR param_2, int param_3, LPWORD param_4, UINT param_5, LCID param_6, int param_7)
 * called by: FUN_1006f09e, FUN_1007a939, FUN_1007c0b9
 */
BOOL __cdecl
FUN_100747c7(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_1008a518;
  pcStack_10 = FUN_100775d8;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_102e0230;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_102e0230 == 0) {
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
  DAT_102e0230 = iVar3;
  if (DAT_102e0230 != 2) {
    if (DAT_102e0230 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_102e0224;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_1006f1c0();
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
    param_6 = DAT_102e0214;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}

/* 100748c0  FUN_100748c0  (4 bytes)
 * undefined FUN_100748c0()
 */
undefined4 FUN_100748c0(void)

{
  return 1;
}

/* 10074910  FUN_10074910  (168 bytes)
 * undefined FUN_10074910()
 */
void FUN_10074910(void)

{
  int iVar1;
  undefined **ppuVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = 0x14;
  if (DAT_102e1840 == 0) {
    iVar1 = 0x200;
  }
  else if (0x13 < DAT_102e1840) goto LAB_1007492f;
  DAT_102e1840 = iVar1;
LAB_1007492f:
  DAT_102e082c = FUN_1006f6bc(DAT_102e1840,4);
  if (DAT_102e082c == (int *)0x0) {
    DAT_102e1840 = 0x14;
    DAT_102e082c = FUN_1006f6bc(0x14,4);
    if (DAT_102e082c == (int *)0x0) {
      __amsg_exit(0x1a);
    }
  }
  iVar1 = 0;
  ppuVar2 = &PTR_DAT_1009c028;
  do {
    *(undefined ***)(iVar1 + (int)DAT_102e082c) = ppuVar2;
    ppuVar2 = ppuVar2 + 8;
    iVar1 = iVar1 + 4;
  } while ((int)ppuVar2 < 0x1009c2a8);
  uVar3 = 0;
  puVar4 = &DAT_1009c038;
  do {
    iVar1 = *(int *)((&DAT_102e0700)[(int)uVar3 >> 5] + (uVar3 & 0x1f) * 0x24);
    if ((iVar1 == -1) || (iVar1 == 0)) {
      *puVar4 = 0xffffffff;
    }
    puVar4 = puVar4 + 8;
    uVar3 = uVar3 + 1;
  } while ((int)puVar4 < 0x1009c098);
  return;
}

/* 100749b8  FUN_100749b8  (149 bytes)
 * undefined FUN_100749b8()
 */
int FUN_100749b8(void)

{
  FILE *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_10074c34();
  if (DAT_102e0194 == '\0') {
    return iVar2;
  }
  iVar4 = 0;
  FUN_10073e71(2);
  iVar2 = 3;
  if (3 < DAT_102e1840) {
    do {
      iVar5 = iVar2 * 4;
      pFVar1 = *(FILE **)(iVar5 + DAT_102e082c);
      if (pFVar1 != (FILE *)0x0) {
        if (((pFVar1->_flag & 0x83) != 0) && (iVar3 = FUN_1006f1ef(pFVar1), iVar3 != -1)) {
          iVar4 = iVar4 + 1;
        }
        if (0x13 < iVar2) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar5 + DAT_102e082c) + 0x20));
          FUN_1006f7f9(*(undefined **)(iVar5 + DAT_102e082c));
          *(undefined4 *)(iVar5 + DAT_102e082c) = 0;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_102e1840);
  }
  FUN_10073ed2(2);
  return iVar4;
}

/* 100749cc  FUN_100749cc  (47 bytes)
 * undefined FUN_100749cc(uint param_1)
 * called by: FUN_1006f1ef, FUN_1006f26c, FUN_1006f312, FUN_1006f429, FUN_1006f562, FUN_10074b7b, FUN_100758c2
 */
void __cdecl FUN_100749cc(uint param_1)

{
  if ((0x1009c027 < param_1) && (param_1 < 0x1009c289)) {
    FUN_10073e71(((int)(param_1 + 0xeff63fd8) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}

/* 100749fb  FUN_100749fb  (35 bytes)
 * undefined FUN_100749fb(int param_1, int param_2)
 * called by: FUN_10074c3d, FUN_10074f2d
 */
void __cdecl FUN_100749fb(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10073e71(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}

/* 10074a1e  FUN_10074a1e  (47 bytes)
 * undefined FUN_10074a1e(uint param_1)
 * called by: FUN_1006f1ef, FUN_1006f26c, FUN_1006f2ce, FUN_1006f312, FUN_1006f429, FUN_1006f562, FUN_10074b7b, FUN_100758c2
 */
void __cdecl FUN_10074a1e(uint param_1)

{
  if ((0x1009c027 < param_1) && (param_1 < 0x1009c289)) {
    FUN_10073ed2(((int)(param_1 + 0xeff63fd8) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}

/* 10074a4d  FUN_10074a4d  (35 bytes)
 * undefined FUN_10074a4d(int param_1, int param_2)
 * called by: FUN_10074c3d, FUN_10074f2d
 */
void __cdecl FUN_10074a4d(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10073ed2(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}

/* 10074a70  FUN_10074a70  (93 bytes)
 * undefined4 FUN_10074a70(uint param_1)
 * called by: FUN_1007b964, __fclose_lk
 */
undefined4 __cdecl FUN_10074a70(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_102e0800) &&
     ((*(byte *)((&DAT_102e0700)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1007b839(param_1);
    uVar1 = FUN_10074acd(param_1);
    FUN_1007b898(param_1);
    return uVar1;
  }
  pDVar2 = FUN_100757d8();
  *pDVar2 = 9;
  pDVar2 = FUN_100757e1();
  *pDVar2 = 0;
  return 0xffffffff;
}

/* 10074acd  FUN_10074acd  (131 bytes)
 * undefined4 FUN_10074acd(uint param_1)
 * called by: FUN_10074a70
 */
undefined4 __cdecl FUN_10074acd(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_1007b750(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_1007b750(2);
      iVar2 = FUN_1007b750(1);
      if (iVar2 == iVar1) goto LAB_10074b1b;
    }
    hObject = (HANDLE)FUN_1007b750(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_10074b1d;
    }
  }
LAB_10074b1b:
  DVar4 = 0;
LAB_10074b1d:
  FUN_1007b6d1(param_1);
  *(undefined1 *)((&DAT_102e0700)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_10075765(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

/* 10074b7b  FUN_10074b7b  (47 bytes)
 * int FUN_10074b7b(int * param_1)
 */
int __cdecl FUN_10074b7b(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = FUN_10074c3d(0);
    return iVar1;
  }
  FUN_100749cc((uint)param_1);
  iVar1 = FUN_10074baa(param_1);
  FUN_10074a1e((uint)param_1);
  return iVar1;
}

/* 10074baa  FUN_10074baa  (46 bytes)
 * int FUN_10074baa(int * param_1)
 * called by: FUN_10074b7b, FUN_10074c3d
 */
int __cdecl FUN_10074baa(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10074bd8(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_1007b8ba(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}

/* 10074bd8  FUN_10074bd8  (92 bytes)
 * undefined4 FUN_10074bd8(int * param_1)
 * called by: FUN_1006f458, FUN_1006f58e, FUN_10074baa, __fclose_lk
 */
undefined4 __cdecl FUN_10074bd8(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    uVar3 = *param_1 - param_1[2];
    if (0 < (int)uVar3) {
      uVar1 = FUN_10075575(param_1[4],(char *)param_1[2],uVar3);
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

/* 10074c34  FUN_10074c34  (9 bytes)
 * undefined FUN_10074c34()
 * called by: FUN_100749b8
 */
void FUN_10074c34(void)

{
  FUN_10074c3d(1);
  return;
}

/* 10074c3d  FUN_10074c3d  (164 bytes)
 * int FUN_10074c3d(int param_1)
 * called by: FUN_10074b7b, FUN_10074c34
 */
int __cdecl FUN_10074c3d(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  FUN_10073e71(2);
  iVar4 = 0;
  if (0 < DAT_102e1840) {
    do {
      iVar2 = *(int *)(DAT_102e082c + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_100749fb(iVar4,iVar2);
        piVar1 = *(int **)(DAT_102e082c + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_10074baa(piVar1);
            if (iVar2 != -1) {
              iVar3 = iVar3 + 1;
            }
          }
          else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
            iVar2 = FUN_10074baa(piVar1);
            if (iVar2 == -1) {
              iVar5 = -1;
            }
          }
        }
        FUN_10074a4d(iVar4,*(int *)(DAT_102e082c + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_102e1840);
  }
  FUN_10073ed2(2);
  if (param_1 != 1) {
    iVar3 = iVar5;
  }
  return iVar3;
}

/* 10074ce1  FUN_10074ce1  (220 bytes)
 * uint FUN_10074ce1(undefined4 * param_1)
 * called by: FUN_1006f26c, FUN_1006f341, FUN_10071eb1
 */
uint __cdecl FUN_10074ce1(undefined4 *param_1)

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
        FUN_10079413(param_1);
      }
      else {
        *param_1 = param_1[2];
      }
      iVar3 = FUN_10074ff5(param_1[4],(char *)param_1[2],(char *)param_1[6]);
      param_1[1] = iVar3;
      if ((iVar3 != 0) && (iVar3 != -1)) {
        if ((param_1[3] & 0x82) == 0) {
          uVar2 = param_1[4];
          if (uVar2 == 0xffffffff) {
            puVar4 = &DAT_1009e448;
          }
          else {
            puVar4 = (undefined *)((&DAT_102e0700)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
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

/* 10074dbd  FUN_10074dbd  (368 bytes)
 * undefined4 * FUN_10074dbd(LPCSTR param_1, char * param_2, uint param_3, undefined4 * param_4)
 * called by: FUN_1006f2ce
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl FUN_10074dbd(LPCSTR param_1,char *param_2,uint param_3,undefined4 *param_4)

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
      uVar6 = DAT_102e03b8 | 1;
      goto LAB_10074dfe;
    }
    if (cVar1 != 'w') {
      return (undefined4 *)0x0;
    }
    uVar5 = 0x301;
  }
  uVar6 = DAT_102e03b8 | 2;
LAB_10074dfe:
  bVar2 = true;
LAB_10074e01:
  cVar1 = param_2[1];
  param_2 = param_2 + 1;
  if ((cVar1 == '\0') || (!bVar2)) {
    uVar5 = FUN_1007b964(param_1,uVar5,param_3,0x1a4);
    if ((int)uVar5 < 0) {
      return (undefined4 *)0x0;
    }
    _DAT_102e0234 = _DAT_102e0234 + 1;
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
        goto LAB_10074e01;
      }
    }
    else if (cVar1 == '+') {
      if ((uVar5 & 2) == 0) {
        uVar5 = uVar5 & 0xfffffffe | 2;
        uVar6 = uVar6 & 0xfffffffc | 0x80;
        goto LAB_10074e01;
      }
    }
    else if (cVar1 == 'D') {
      if ((uVar5 & 0x40) == 0) {
        uVar5 = uVar5 | 0x40;
        goto LAB_10074e01;
      }
    }
    else if (cVar1 == 'R') {
      if (!bVar3) {
        bVar3 = true;
        uVar5 = uVar5 | 0x10;
        goto LAB_10074e01;
      }
    }
    else if ((cVar1 == 'S') && (!bVar3)) {
      bVar3 = true;
      uVar5 = uVar5 | 0x20;
      goto LAB_10074e01;
    }
  }
  else {
    if (cVar1 == 'b') {
      if ((uVar5 & 0xc000) != 0) goto LAB_10074ee1;
      uVar5 = uVar5 | 0x8000;
      goto LAB_10074e01;
    }
    if (cVar1 == 'c') {
      if (!bVar4) {
        bVar4 = true;
        uVar6 = uVar6 | 0x4000;
        goto LAB_10074e01;
      }
    }
    else {
      if (cVar1 != 'n') {
        if ((cVar1 != 't') || ((uVar5 & 0xc000) != 0)) goto LAB_10074ee1;
        uVar5 = uVar5 | 0x4000;
        goto LAB_10074e01;
      }
      if (!bVar4) {
        bVar4 = true;
        uVar6 = uVar6 & 0xffffbfff;
        goto LAB_10074e01;
      }
    }
  }
LAB_10074ee1:
  bVar2 = false;
  goto LAB_10074e01;
}

/* 10074f2d  FUN_10074f2d  (200 bytes)
 * undefined4 * FUN_10074f2d(void)
 * called by: FUN_1006f2ce
 */
undefined4 * FUN_10074f2d(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x0;
  FUN_10073e71(2);
  iVar3 = 0;
  if (0 < DAT_102e1840) {
    do {
      iVar1 = *(int *)(DAT_102e082c + iVar3 * 4);
      if (iVar1 == 0) {
        iVar3 = iVar3 * 4;
        pvVar2 = _malloc(0x38);
        *(void **)(iVar3 + DAT_102e082c) = pvVar2;
        if (*(int *)(iVar3 + DAT_102e082c) != 0) {
          InitializeCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_102e082c) + 0x20));
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_102e082c) + 0x20));
          puVar4 = *(undefined4 **)(iVar3 + DAT_102e082c);
LAB_10074fd1:
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
        FUN_100749fb(iVar3,iVar1);
        iVar1 = *(int *)(DAT_102e082c + iVar3 * 4);
        if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
          puVar4 = *(undefined4 **)(DAT_102e082c + iVar3 * 4);
          goto LAB_10074fd1;
        }
        FUN_10074a4d(iVar3,iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_102e1840);
  }
  FUN_10073ed2(2);
  return puVar4;
}

/* 10074ff5  FUN_10074ff5  (101 bytes)
 * int FUN_10074ff5(uint param_1, char * param_2, char * param_3)
 * called by: FUN_1006f341, FUN_10074ce1
 */
int __cdecl FUN_10074ff5(uint param_1,char *param_2,char *param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_102e0800) &&
     ((*(byte *)((&DAT_102e0700)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1007b839(param_1);
    iVar1 = FUN_1007505a(param_1,param_2,param_3);
    FUN_1007b898(param_1);
    return iVar1;
  }
  pDVar2 = FUN_100757d8();
  *pDVar2 = 9;
  pDVar2 = FUN_100757e1();
  *pDVar2 = 0;
  return -1;
}

/* 1007505a  FUN_1007505a  (473 bytes)
 * int FUN_1007505a(uint param_1, char * param_2, char * param_3)
 * called by: FUN_10074ff5, FUN_1007b964
 */
int __cdecl FUN_1007505a(uint param_1,char *param_2,char *param_3)

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
    piVar1 = &DAT_102e0700 + ((int)param_1 >> 5);
    iVar9 = (param_1 & 0x1f) * 0x24;
    bVar4 = *(byte *)((&DAT_102e0700)[(int)param_1 >> 5] + iVar9 + 4);
    if ((bVar4 & 2) == 0) {
      pcVar8 = param_2;
      if (((bVar4 & 0x48) != 0) &&
         (cVar3 = *(char *)((&DAT_102e0700)[(int)param_1 >> 5] + iVar9 + 5), cVar3 != '\n')) {
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
          pDVar7 = FUN_100757d8();
          *pDVar7 = 9;
          pDVar7 = FUN_100757e1();
          *pDVar7 = 5;
        }
        else {
          if (DVar6 == 0x6d) {
            return 0;
          }
          FUN_10075765(DVar6);
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
                goto LAB_100751e5;
              }
              *pcVar8 = '\r';
              pcVar8 = pcVar8 + 1;
              param_3 = param_3 + 1;
            }
            else {
              param_3 = param_3 + 1;
              BVar5 = ReadFile(*(HANDLE *)(*piVar1 + iVar9),&local_5,1,&local_10,(LPOVERLAPPED)0x0);
              if (((BVar5 == 0) && (DVar6 = GetLastError(), DVar6 != 0)) || (local_10 == 0)) {
LAB_100751ff:
                *pcVar8 = '\r';
LAB_10075202:
                pcVar8 = pcVar8 + 1;
              }
              else if ((*(byte *)(*piVar1 + 4 + iVar9) & 0x48) == 0) {
                if ((pcVar8 == param_2) && (local_5 == '\n')) {
LAB_100751e5:
                  *pcVar8 = '\n';
                  goto LAB_10075202;
                }
                FUN_1007584f(param_1,-1,1);
                if (local_5 != '\n') goto LAB_100751ff;
              }
              else {
                if (local_5 == '\n') goto LAB_100751e5;
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

/* 10075240  FUN_10075240  (664 bytes)
 * undefined4 * FUN_10075240(undefined4 * param_1, undefined4 * param_2, uint param_3)
 * called by: FUN_1006f341, FUN_1006f458, FUN_100739bf, FUN_10074145, FUN_10074319, FUN_10077bc6, FUN_1007c2f3, FUN_1007d8d8
 */
undefined4 * __cdecl FUN_10075240(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_100753f7_caseD_2;
        case 3:
          goto switchD_100753f7_caseD_3;
        }
        goto switchD_100753f7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_100753f7_caseD_0;
      case 1:
        goto switchD_100753f7_caseD_1;
      case 2:
        goto switchD_100753f7_caseD_2;
      case 3:
        goto switchD_100753f7_caseD_3;
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
              goto switchD_100753f7_caseD_2;
            case 3:
              goto switchD_100753f7_caseD_3;
            }
            goto switchD_100753f7_caseD_1;
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
              goto switchD_100753f7_caseD_2;
            case 3:
              goto switchD_100753f7_caseD_3;
            }
            goto switchD_100753f7_caseD_1;
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
              goto switchD_100753f7_caseD_2;
            case 3:
              goto switchD_100753f7_caseD_3;
            }
            goto switchD_100753f7_caseD_1;
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
switchD_100753f7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_100753f7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_100753f7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_100753f7_caseD_0:
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
        goto switchD_10075275_caseD_2;
      case 3:
        goto switchD_10075275_caseD_3;
      }
      goto switchD_10075275_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10075275_caseD_0;
    case 1:
      goto switchD_10075275_caseD_1;
    case 2:
      goto switchD_10075275_caseD_2;
    case 3:
      goto switchD_10075275_caseD_3;
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
            goto switchD_10075275_caseD_2;
          case 3:
            goto switchD_10075275_caseD_3;
          }
          goto switchD_10075275_caseD_1;
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
            goto switchD_10075275_caseD_2;
          case 3:
            goto switchD_10075275_caseD_3;
          }
          goto switchD_10075275_caseD_1;
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
            goto switchD_10075275_caseD_2;
          case 3:
            goto switchD_10075275_caseD_3;
          }
          goto switchD_10075275_caseD_1;
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
switchD_10075275_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10075275_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10075275_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10075275_caseD_0:
  return param_1;
}

/* 10075575  FUN_10075575  (101 bytes)
 * int FUN_10075575(uint param_1, char * param_2, uint param_3)
 * called by: FUN_1006f458, FUN_10070b33, FUN_10074bd8
 */
int __cdecl FUN_10075575(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_102e0800) &&
     ((*(byte *)((&DAT_102e0700)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1007b839(param_1);
    iVar1 = FUN_100755da(param_1,param_2,param_3);
    FUN_1007b898(param_1);
    return iVar1;
  }
  pDVar2 = FUN_100757d8();
  *pDVar2 = 9;
  pDVar2 = FUN_100757e1();
  *pDVar2 = 0;
  return -1;
}

/* 100755da  FUN_100755da  (395 bytes)
 * int FUN_100755da(DWORD param_1, char * param_2, uint param_3)
 * called by: FUN_10075575, FUN_1007ea8a
 */
int __cdecl FUN_100755da(DWORD param_1,char *param_2,uint param_3)

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
LAB_100755f3:
    iVar4 = 0;
  }
  else {
    piVar1 = &DAT_102e0700 + ((int)param_1 >> 5);
    iVar4 = (param_1 & 0x1f) * 0x24;
    if ((*(byte *)(*piVar1 + 4 + iVar4) & 0x20) != 0) {
      FUN_1007584f(param_1,0,2);
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
LAB_100756c2:
      if (local_c != 0) {
        return local_c - local_14;
      }
      if (param_1 == 0) goto LAB_10075734;
      if (param_1 == 5) {
        pDVar7 = FUN_100757d8();
        *pDVar7 = 9;
        pDVar7 = FUN_100757e1();
        *pDVar7 = 5;
      }
      else {
        FUN_10075765(param_1);
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
            goto LAB_100756c2;
          }
          local_c = local_c + local_10;
          if (((int)local_10 < (int)pcVar5 - (int)local_418) ||
             (param_3 <= (uint)((int)local_8 - (int)param_2))) goto LAB_100756c2;
        } while( true );
      }
LAB_10075734:
      if (((*(byte *)(*piVar1 + 4 + iVar4) & 0x40) != 0) && (*param_2 == '\x1a')) goto LAB_100755f3;
      pDVar7 = FUN_100757d8();
      *pDVar7 = 0x1c;
      pDVar7 = FUN_100757e1();
      *pDVar7 = 0;
    }
    iVar4 = -1;
  }
  return iVar4;
}

/* 10075765  FUN_10075765  (115 bytes)
 * undefined FUN_10075765(uint param_1)
 * called by: FUN_10074acd, FUN_1007505a, FUN_100755da, FUN_1007584f, FUN_1007b792, FUN_1007b964
 */
void __cdecl FUN_10075765(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_100757e1();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_1009c2b0;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_100757d8();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x1009c2b4);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x1009c418);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_100757d8();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_100757d8();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_100757d8();
  *pDVar1 = 0x16;
  return;
}

/* 100757d8  FUN_100757d8  (9 bytes)
 * DWORD * FUN_100757d8(void)
 * called by: FUN_1006f58e, FUN_10074a70, FUN_10074ff5, FUN_1007505a, FUN_10075575, FUN_100755da, FUN_10075765, FUN_100757ea, FUN_1007584f, FUN_100758e4, FUN_100794d9, FUN_10079692, ... (27 total)
 */
DWORD * FUN_100757d8(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10070951();
  return pDVar1 + 2;
}

/* 100757e1  FUN_100757e1  (9 bytes)
 * DWORD * FUN_100757e1(void)
 * called by: FUN_10074a70, FUN_10074ff5, FUN_1007505a, FUN_10075575, FUN_100755da, FUN_10075765, FUN_100757ea, FUN_1007b655, FUN_1007b6d1, FUN_1007b750, FUN_1007b792, FUN_1007b8ba, ... (15 total)
 */
DWORD * FUN_100757e1(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10070951();
  return pDVar1 + 3;
}

/* 100757ea  FUN_100757ea  (101 bytes)
 * DWORD FUN_100757ea(uint param_1, LONG param_2, DWORD param_3)
 * called by: FUN_1006f58e, FUN_10070b33, FUN_100758e4
 */
DWORD __cdecl FUN_100757ea(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_102e0800) &&
     ((*(byte *)((&DAT_102e0700)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1007b839(param_1);
    DVar1 = FUN_1007584f(param_1,param_2,param_3);
    FUN_1007b898(param_1);
    return DVar1;
  }
  pDVar2 = FUN_100757d8();
  *pDVar2 = 9;
  pDVar2 = FUN_100757e1();
  *pDVar2 = 0;
  return 0xffffffff;
}

/* 1007584f  FUN_1007584f  (115 bytes)
 * DWORD FUN_1007584f(uint param_1, LONG param_2, DWORD param_3)
 * called by: FUN_1007505a, FUN_100755da, FUN_100757ea, FUN_1007b964, FUN_1007ea8a
 */
DWORD __cdecl FUN_1007584f(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  uint uVar4;
  
  hFile = (HANDLE)FUN_1007b750(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_100757d8();
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
      pbVar1 = (byte *)((&DAT_102e0700)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar3;
    }
    FUN_10075765(uVar4);
  }
  return 0xffffffff;
}

/* 100758c2  FUN_100758c2  (34 bytes)
 * int FUN_100758c2(char * param_1)
 */
int __cdecl FUN_100758c2(char *param_1)

{
  int iVar1;
  
  FUN_100749cc((uint)param_1);
  iVar1 = FUN_100758e4(param_1);
  FUN_10074a1e((uint)param_1);
  return iVar1;
}

/* 100758e4  FUN_100758e4  (353 bytes)
 * int FUN_100758e4(char * param_1)
 * called by: FUN_1006f58e, FUN_100758c2
 */
int __cdecl FUN_100758e4(char *param_1)

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
  local_8 = FUN_100757ea(uVar1,0,1);
  if ((int)local_8 < 0) {
LAB_10075972:
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
        pDVar4 = FUN_100757d8();
        *pDVar4 = 0x16;
        goto LAB_10075972;
      }
    }
    else {
      pcVar9 = pcVar7;
      if ((*(byte *)((&DAT_102e0700)[(int)uVar1 >> 5] + 4 + (uVar1 & 0x1f) * 0x24) & 0x80) != 0) {
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
          if ((*(byte *)(iVar10 + 4 + (&DAT_102e0700)[(int)uVar1 >> 5]) & 0x80) != 0) {
            DVar6 = FUN_100757ea(uVar1,0,2);
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
              FUN_100757ea(uVar1,local_8,0);
              pcVar8 = (char *)0x200;
              if ((((char *)0x200 < pcVar5) || ((*(uint *)(param_1 + 0xc) & 8) == 0)) ||
                 ((*(uint *)(param_1 + 0xc) & 0x400) != 0)) {
                pcVar8 = *(char **)(param_1 + 0x18);
              }
              bVar3 = *(byte *)(iVar10 + 4 + (&DAT_102e0700)[(int)uVar1 >> 5]) & 4;
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

/* 10075a6f  FUN_10075a6f  (27 bytes)
 * undefined4 FUN_10075a6f(undefined4 param_1)
 * called by: FUN_1006f6bc, FUN_100739bf, __nh_malloc
 */
undefined4 __cdecl FUN_10075a6f(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_102e0238 != (code *)0x0) {
    iVar1 = (*DAT_102e0238)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* 10075a8a  FUN_10075a8a  (45 bytes)
 * undefined FUN_10075a8a(undefined4 * param_1)
 * called by: FUN_10075ab7, FUN_10075d87
 */
void __cdecl FUN_10075a8a(undefined4 *param_1)

{
  int iVar1;
  HMODULE pHVar2;
  
  *param_1 = 0;
  pHVar2 = GetModuleHandleA((LPCSTR)0x0);
  if (((short)pHVar2->unused == 0x5a4d) && (iVar1 = pHVar2[0xf].unused, iVar1 != 0)) {
    *(undefined1 *)param_1 = *(undefined1 *)((int)&pHVar2[6].unused + iVar1 + 2);
    *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)&pHVar2[6].unused + iVar1 + 3);
  }
  return;
}

/* 10075ab7  FUN_10075ab7  (328 bytes)
 * int FUN_10075ab7(void)
 * called by: FUN_10075bff
 */
int FUN_10075ab7(void)

{
  char cVar1;
  byte_conflict bVar2;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  uint *puVar6;
  byte_conflict *pbVar7;
  char *pcVar8;
  byte_conflict *this;
  byte unaff_BL;
  undefined4 local_1230;
  char local_1a0 [260];
  DWORD local_9c;
  uint local_98;
  DWORD local_8c;
  CHAR aCStackY_18 [4];
  
  FUN_1006f1c0();
  local_9c = 0x94;
  BVar3 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
  if (((BVar3 == 0) || (local_8c != 2)) || (local_98 < 5)) {
    builtin_memcpy(aCStackY_18,"\x11[\a\x10",4);
    DVar4 = GetEnvironmentVariableA("__MSVCRT_HEAP_SELECT",(LPSTR)&local_1230,0x1090);
    if (DVar4 != 0) {
      pcVar8 = (char *)&local_1230;
      while ((char)local_1230 != '\0') {
        cVar1 = *pcVar8;
        if (('`' < cVar1) && (cVar1 < '{')) {
          *pcVar8 = cVar1 + -0x20;
        }
        pcVar8 = pcVar8 + 1;
        local_1230._0_1_ = *pcVar8;
      }
      builtin_memcpy(aCStackY_18,"O[\a\x10",4);
      iVar5 = _strncmp("__GLOBAL_HEAP_SELECTED",(char *)&local_1230,0x16);
      if (iVar5 == 0) {
        puVar6 = &local_1230;
      }
      else {
        builtin_memcpy(aCStackY_18,"q[\a\x10",4);
        GetModuleFileNameA((HMODULE)0x0,local_1a0,0x104);
        pcVar8 = local_1a0;
        while (local_1a0[0] != '\0') {
          cVar1 = *pcVar8;
          if (('`' < cVar1) && (cVar1 < '{')) {
            *pcVar8 = cVar1 + -0x20;
          }
          pcVar8 = pcVar8 + 1;
          local_1a0[0] = *pcVar8;
        }
        puVar6 = FUN_1006ead0(&local_1230,local_1a0);
      }
      if ((puVar6 != (uint *)0x0) && (puVar6 = FUN_10071f20(puVar6,','), puVar6 != (uint *)0x0)) {
        pbVar7 = (byte_conflict *)((int)puVar6 + 1);
        bVar2 = *pbVar7;
        this = pbVar7;
        while (bVar2 != '\0') {
          if (*this == ';') {
            *this = '\0';
          }
          else {
            this = this + 1;
          }
          bVar2 = *this;
        }
        aCStackY_18[0] = -0x29;
        aCStackY_18[1] = '[';
        aCStackY_18[2] = '\a';
        aCStackY_18[3] = '\x10';
        iVar5 = FUN_1007bc33(this,pbVar7,(int *)0x0,&DAT_0000000a);
        if (iVar5 == 2) {
          return 2;
        }
        if (iVar5 == 3) {
          return 3;
        }
        if (iVar5 == 1) {
          return 1;
        }
      }
    }
    FUN_10075a8a((undefined4 *)&stack0xfffffff8);
    iVar5 = 3 - (uint)(unaff_BL < 6);
  }
  else {
    iVar5 = 1;
  }
  return iVar5;
}

/* 10075bff  FUN_10075bff  (93 bytes)
 * undefined4 FUN_10075bff(int param_1)
 * called by: FUN_1006f8e2
 */
undefined4 __cdecl FUN_10075bff(int param_1)

{
  undefined **ppuVar1;
  
  DAT_102e0824 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_102e0824 != (HANDLE)0x0) {
    DAT_102e0828 = FUN_10075ab7();
    if (DAT_102e0828 == 3) {
      ppuVar1 = (undefined **)FUN_10075e3a(0x3f8);
    }
    else {
      if (DAT_102e0828 != 2) {
        return 1;
      }
      ppuVar1 = FUN_10076da3();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_102e0824);
  }
  return 0;
}

/* 10075c5c  FUN_10075c5c  (168 bytes)
 * undefined FUN_10075c5c(void)
 * called by: FUN_1006f8e2
 */
void FUN_10075c5c(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_102e0828 == 3) {
    iVar1 = 0;
    if (0 < DAT_102e0818) {
      puVar2 = (undefined4 *)((int)DAT_102e081c + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_102e0824,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_102e0818);
    }
    HeapFree(DAT_102e0824,0,DAT_102e081c);
  }
  else if (DAT_102e0828 == 2) {
    ppuVar3 = &PTR_LOOP_1009c420;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_1009c420);
  }
  HeapDestroy(DAT_102e0824);
  return;
}

/* 10075d87  FUN_10075d87  (179 bytes)
 * undefined4 FUN_10075d87(uint param_1)
 */
undefined4 __cdecl FUN_10075d87(uint param_1)

{
  int iVar1;
  undefined **ppuVar2;
  uint uVar3;
  
  uVar3 = param_1;
  if (DAT_102e0828 == 3) {
    if (param_1 < 0x3f9) {
      DAT_102e0820 = param_1;
      return 1;
    }
  }
  else if (DAT_102e0828 == 2) {
    uVar3 = param_1 + 0xf & 0xfffffff0;
    if (uVar3 < 0x781) {
      DAT_1009e444 = uVar3;
      return 1;
    }
  }
  else if ((DAT_102e0828 == 1) && (param_1 != 0)) {
    FUN_10075a8a(&param_1);
    if ((byte)param_1 < 6) {
      uVar3 = uVar3 + 0xf & 0xfffffff0;
      if ((uVar3 < 0x781) && (ppuVar2 = FUN_10076da3(), ppuVar2 != (undefined **)0x0)) {
        DAT_1009e444 = uVar3;
        DAT_102e0828 = 2;
        return 1;
      }
    }
    else if ((uVar3 < 0x3f9) && (iVar1 = FUN_10075e3a(uVar3), iVar1 != 0)) {
      DAT_102e0820 = uVar3;
      DAT_102e0828 = 3;
      return 1;
    }
  }
  return 0;
}

/* 10075e3a  FUN_10075e3a  (72 bytes)
 * undefined4 FUN_10075e3a(undefined4 param_1)
 * called by: FUN_10075bff, FUN_10075d87
 */
undefined4 __cdecl FUN_10075e3a(undefined4 param_1)

{
  DAT_102e081c = HeapAlloc(DAT_102e0824,0,0x140);
  if (DAT_102e081c == (LPVOID)0x0) {
    return 0;
  }
  DAT_102e0814 = 0;
  DAT_102e0818 = 0;
  DAT_102e080c = DAT_102e081c;
  DAT_102e0820 = param_1;
  DAT_102e0804 = 0x10;
  return 1;
}

/* 10075e82  FUN_10075e82  (43 bytes)
 * uint FUN_10075e82(int param_1)
 * called by: FUN_1006f7f9, FUN_100739bf, FUN_10073cee
 */
uint __cdecl FUN_10075e82(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_102e081c;
  while( true ) {
    if (DAT_102e081c + DAT_102e0818 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}

/* 10075ead  FUN_10075ead  (809 bytes)
 * undefined FUN_10075ead(uint * param_1, int param_2)
 * called by: FUN_1006f7f9, FUN_100739bf
 */
void __cdecl FUN_10075ead(uint *param_1,int param_2)

{
  char *pcVar1;
  uint *puVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint local_8;
  
  uVar5 = param_1[4];
  puVar12 = (uint *)(param_2 + -4);
  uVar14 = param_2 - param_1[3] >> 0xf;
  piVar3 = (int *)(uVar14 * 0x204 + 0x144 + uVar5);
  uVar13 = *puVar12;
  local_8 = uVar13 - 1;
  if ((local_8 & 1) == 0) {
    uVar6 = *(uint *)(local_8 + (int)puVar12);
    uVar7 = *(uint *)(param_2 + -8);
    if ((uVar6 & 1) == 0) {
      uVar9 = ((int)uVar6 >> 4) - 1;
      if (0x3f < uVar9) {
        uVar9 = 0x3f;
      }
      if (*(int *)((int)puVar12 + uVar13 + 3) == *(int *)((int)puVar12 + uVar13 + 7)) {
        if (uVar9 < 0x20) {
          pcVar1 = (char *)(uVar9 + 4 + uVar5);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 & 0x1f));
          puVar10 = (uint *)(uVar5 + 0x44 + uVar14 * 4);
          *puVar10 = *puVar10 & uVar9;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar9;
          }
        }
        else {
          pcVar1 = (char *)(uVar9 + 4 + uVar5);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 - 0x20 & 0x1f));
          puVar10 = (uint *)(uVar5 + 0xc4 + uVar14 * 4);
          *puVar10 = *puVar10 & uVar9;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar9;
          }
        }
      }
      local_8 = local_8 + uVar6;
      *(undefined4 *)(*(int *)((int)puVar12 + uVar13 + 7) + 4) =
           *(undefined4 *)((int)puVar12 + uVar13 + 3);
      *(undefined4 *)(*(int *)((int)puVar12 + uVar13 + 3) + 8) =
           *(undefined4 *)((int)puVar12 + uVar13 + 7);
    }
    puVar10 = (uint *)(((int)local_8 >> 4) - 1);
    if ((uint *)0x3f < puVar10) {
      puVar10 = (uint *)0x3f;
    }
    puVar11 = param_1;
    if ((uVar7 & 1) == 0) {
      puVar12 = (uint *)((int)puVar12 - uVar7);
      puVar11 = (uint *)(((int)uVar7 >> 4) - 1);
      if ((uint *)0x3f < puVar11) {
        puVar11 = (uint *)0x3f;
      }
      local_8 = local_8 + uVar7;
      puVar10 = (uint *)(((int)local_8 >> 4) - 1);
      if ((uint *)0x3f < puVar10) {
        puVar10 = (uint *)0x3f;
      }
      if (puVar11 != puVar10) {
        if (puVar12[1] == puVar12[2]) {
          if (puVar11 < (uint *)0x20) {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 & 0x1f));
            puVar2 = (uint *)(uVar5 + 0x44 + uVar14 * 4);
            *puVar2 = *puVar2 & uVar13;
            pcVar1 = (char *)((int)puVar11 + uVar5 + 4);
            *pcVar1 = *pcVar1 + -1;
            if (*pcVar1 == '\0') {
              *param_1 = *param_1 & uVar13;
            }
          }
          else {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 - 0x20 & 0x1f));
            puVar2 = (uint *)(uVar5 + 0xc4 + uVar14 * 4);
            *puVar2 = *puVar2 & uVar13;
            pcVar1 = (char *)((int)puVar11 + uVar5 + 4);
            *pcVar1 = *pcVar1 + -1;
            if (*pcVar1 == '\0') {
              param_1[1] = param_1[1] & uVar13;
            }
          }
        }
        *(uint *)(puVar12[2] + 4) = puVar12[1];
        *(uint *)(puVar12[1] + 8) = puVar12[2];
      }
    }
    if (((uVar7 & 1) != 0) || (puVar11 != puVar10)) {
      puVar12[1] = piVar3[(int)puVar10 * 2 + 1];
      puVar12[2] = (uint)(piVar3 + (int)puVar10 * 2);
      (piVar3 + (int)puVar10 * 2)[1] = (int)puVar12;
      *(uint **)(puVar12[1] + 8) = puVar12;
      if (puVar12[1] == puVar12[2]) {
        cVar4 = *(char *)((int)puVar10 + uVar5 + 4);
        *(char *)((int)puVar10 + uVar5 + 4) = cVar4 + '\x01';
        bVar8 = (byte)puVar10;
        if (puVar10 < (uint *)0x20) {
          if (cVar4 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
          }
          puVar10 = (uint *)(uVar5 + 0x44 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 & 0x1f);
        }
        else {
          if (cVar4 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
          }
          puVar10 = (uint *)(uVar5 + 0xc4 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
      }
    }
    *puVar12 = local_8;
    *(uint *)((local_8 - 4) + (int)puVar12) = local_8;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      if (DAT_102e0814 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_102e0808 * 0x8000 + DAT_102e0814[3]),0x8000,0x4000);
        DAT_102e0814[2] = DAT_102e0814[2] | 0x80000000U >> ((byte)DAT_102e0808 & 0x1f);
        *(undefined4 *)(DAT_102e0814[4] + 0xc4 + DAT_102e0808 * 4) = 0;
        *(char *)(DAT_102e0814[4] + 0x43) = *(char *)(DAT_102e0814[4] + 0x43) + -1;
        if (*(char *)(DAT_102e0814[4] + 0x43) == '\0') {
          DAT_102e0814[1] = DAT_102e0814[1] & 0xfffffffe;
        }
        if (DAT_102e0814[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_102e0814[3],0,0x8000);
          HeapFree(DAT_102e0824,0,(LPVOID)DAT_102e0814[4]);
          FUN_10078900(DAT_102e0814,DAT_102e0814 + 5,
                       (DAT_102e0818 * 0x14 - (int)DAT_102e0814) + -0x14 + DAT_102e081c);
          DAT_102e0818 = DAT_102e0818 + -1;
          if (DAT_102e0814 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_102e080c = DAT_102e081c;
        }
      }
      DAT_102e0814 = param_1;
      DAT_102e0808 = uVar14;
    }
  }
  return;
}

/* 100761d6  FUN_100761d6  (777 bytes)
 * int * FUN_100761d6(uint * param_1)
 * called by: FUN_1006f6bc, FUN_100731e9, FUN_100739bf
 */
int * __cdecl FUN_100761d6(uint *param_1)

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
  
  puVar8 = DAT_102e081c + DAT_102e0818 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_102e080c;
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
  puVar11 = DAT_102e081c;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_102e080c && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_102e080c) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_102e081c;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_102e080c && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_102e080c) && (param_1 = FUN_100764df(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_10076590((int)param_1);
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
  DAT_102e080c = param_1;
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
    if (iVar9 == 0) goto LAB_1007649c;
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
LAB_1007649c:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_102e0814)) && (local_8 == DAT_102e0808)) {
    DAT_102e0814 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}

/* 100764df  FUN_100764df  (177 bytes)
 * undefined4 * FUN_100764df(void)
 * called by: FUN_100761d6
 */
undefined4 * FUN_100764df(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_102e0818 == DAT_102e0804) {
    pvVar2 = HeapReAlloc(DAT_102e0824,0,DAT_102e081c,(DAT_102e0804 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_102e0804 = DAT_102e0804 + 0x10;
    DAT_102e081c = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_102e081c + DAT_102e0818 * 0x14);
  pvVar2 = HeapAlloc(DAT_102e0824,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_102e0818 = DAT_102e0818 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_102e0824,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}

/* 10076590  FUN_10076590  (251 bytes)
 * int FUN_10076590(int param_1)
 * called by: FUN_100761d6
 */
int __cdecl FUN_10076590(int param_1)

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

/* 1007668b  FUN_1007668b  (758 bytes)
 * undefined4 FUN_1007668b(uint * param_1, int param_2, int param_3)
 * called by: FUN_100739bf
 */
undefined4 __cdecl FUN_1007668b(uint *param_1,int param_2,int param_3)

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

/* 10076a52  FUN_10076a52  (815 bytes)
 * undefined4 FUN_10076a52(void)
 */
undefined4 FUN_10076a52(void)

{
  LPVOID lp;
  BOOL BVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  int *piVar11;
  bool bVar12;
  int local_140 [64];
  uint *local_40;
  uint *local_3c;
  uint *local_38;
  int local_34;
  uint local_30;
  uint *local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  uint *local_10;
  int local_c;
  int *local_8;
  
  BVar1 = IsBadWritePtr(DAT_102e081c,DAT_102e0818 * 0x14);
  if (BVar1 == 0) {
    local_24 = 0;
    puVar8 = DAT_102e081c;
    if (0 < DAT_102e0818) {
      do {
        lp = (LPVOID)puVar8[4];
        local_3c = puVar8;
        BVar1 = IsBadWritePtr(lp,0x41c4);
        if (BVar1 != 0) {
          return 0xfffffffe;
        }
        local_10 = (uint *)puVar8[3];
        local_30 = 0;
        local_2c = (uint *)((int)lp + 0x144);
        local_18 = puVar8[2];
        puVar9 = (uint *)((int)lp + 0xc4);
        local_1c = 0;
        local_34 = 0;
        do {
          local_28 = 0;
          local_20 = 0;
          local_8 = (int *)0x0;
          bVar12 = -1 < (int)local_18;
          piVar11 = local_140;
          local_40 = puVar9;
          for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar11 = 0;
            piVar11 = piVar11 + 1;
          }
          if (bVar12) {
            BVar1 = IsBadWritePtr(local_10,0x8000);
            if (BVar1 != 0) {
              return 0xfffffffc;
            }
            iVar5 = 0;
            puVar8 = local_10 + 0x3ff;
            do {
              puVar9 = puVar8 + -0x3fc;
              if ((puVar8[-0x3fd] != 0xffffffff) || (*puVar8 != 0xffffffff)) {
                return 0xfffffffb;
              }
              do {
                uVar4 = *puVar9;
                if ((uVar4 & 1) == 0) {
                  iVar3 = ((int)uVar4 >> 4) + -1;
                  if (0x3f < iVar3) {
                    iVar3 = 0x3f;
                  }
                  local_140[iVar3] = local_140[iVar3] + 1;
                  uVar6 = uVar4;
                }
                else {
                  if (0x400 < (int)(uVar4 - 1)) {
                    return 0xfffffffa;
                  }
                  local_8 = (int *)((int)local_8 + 1);
                  uVar6 = uVar4 - 1;
                }
                if ((((int)uVar6 < 0x10) || ((uVar6 & 0xf) != 0)) || (0xff0 < (int)uVar6)) {
                  return 0xfffffff9;
                }
                puVar10 = (uint *)((uVar6 - 4) + (int)puVar9);
                puVar9 = (uint *)(uVar6 + (int)puVar9);
                if (*puVar10 != uVar4) {
                  return 0xfffffff8;
                }
              } while (puVar9 < puVar8);
              if (puVar9 != puVar8) {
                return 0xfffffff8;
              }
              puVar8 = puVar8 + 0x400;
              iVar5 = iVar5 + 1;
            } while (iVar5 < 8);
            if ((int *)*local_2c != local_8) {
              return 0xfffffff7;
            }
            local_c = 0;
            local_8 = local_140;
            puVar10 = local_2c;
            do {
              local_14 = 0;
              puVar8 = (uint *)puVar10[1];
              local_38 = puVar10;
              if ((uint *)puVar10[1] != puVar10) {
                do {
                  puVar9 = puVar8;
                  if (local_14 == *local_8) break;
                  if ((puVar9 < local_10) || (local_10 + 0x2000 <= puVar9)) {
                    return 0xfffffff6;
                  }
                  puVar7 = (uint *)(((uint)puVar9 & 0xfffff000) + 0xc);
                  puVar8 = (uint *)(((uint)puVar9 & 0xfffff000) + 0xffc);
                  if (puVar7 == puVar8) {
                    return 0xfffffff5;
                  }
                  do {
                    if (puVar7 == puVar9) break;
                    puVar7 = (uint *)((int)puVar7 + (*puVar7 & 0xfffffffe));
                  } while (puVar7 != puVar8);
                  if (puVar7 == puVar8) {
                    return 0xfffffff5;
                  }
                  iVar5 = ((int)*puVar9 >> 4) + -1;
                  if (0x3f < iVar5) {
                    iVar5 = 0x3f;
                  }
                  if (iVar5 != local_c) {
                    return 0xfffffff4;
                  }
                  if ((uint *)puVar9[2] != local_38) {
                    return 0xfffffff3;
                  }
                  local_14 = local_14 + 1;
                  puVar8 = (uint *)puVar9[1];
                  local_38 = puVar9;
                } while ((uint *)puVar9[1] != puVar10);
                if (local_14 != 0) {
                  if (local_c < 0x20) {
                    uVar4 = 0x80000000 >> ((byte)local_c & 0x1f);
                    local_28 = local_28 | uVar4;
                    local_30 = local_30 | uVar4;
                  }
                  else {
                    uVar4 = 0x80000000 >> ((byte)local_c - 0x20 & 0x1f);
                    local_20 = local_20 | uVar4;
                    local_1c = local_1c | uVar4;
                  }
                }
              }
              if (((uint *)local_38[1] != puVar10) || (local_14 != *local_8)) {
                return 0xfffffff2;
              }
              if ((uint *)puVar10[2] != local_38) {
                return 0xfffffff1;
              }
              local_c = local_c + 1;
              local_8 = local_8 + 1;
              puVar8 = local_3c;
              puVar9 = local_40;
              puVar10 = puVar10 + 2;
            } while (local_c < 0x40);
          }
          if ((local_28 != puVar9[-0x20]) || (local_20 != *puVar9)) {
            return 0xfffffff0;
          }
          local_10 = local_10 + 0x2000;
          local_2c = local_2c + 0x81;
          local_18 = local_18 << 1;
          local_34 = local_34 + 1;
          puVar9 = puVar9 + 1;
        } while (local_34 < 0x20);
        if ((local_30 != *puVar8) || (local_1c != puVar8[1])) {
          return 0xffffffef;
        }
        puVar8 = puVar8 + 5;
        local_24 = local_24 + 1;
        local_40 = puVar9;
      } while (local_24 < DAT_102e0818);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

/* 10076da3  FUN_10076da3  (324 bytes)
 * undefined * * FUN_10076da3(void)
 * called by: FUN_10075bff, FUN_10075d87, FUN_1007709b
 */
undefined ** FUN_10076da3(void)

{
  bool bVar1;
  int *lpAddress;
  LPVOID pvVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined **lpMem;
  
  if (DAT_1009c430 == -1) {
    lpMem = &PTR_LOOP_1009c420;
  }
  else {
    lpMem = HeapAlloc(DAT_102e0824,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (int *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_1009c420) {
        if (PTR_LOOP_1009c420 == (undefined *)0x0) {
          PTR_LOOP_1009c420 = (undefined *)&PTR_LOOP_1009c420;
        }
        if (PTR_LOOP_1009c424 == (undefined *)0x0) {
          PTR_LOOP_1009c424 = (undefined *)&PTR_LOOP_1009c420;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_1009c420;
        lpMem[1] = PTR_LOOP_1009c424;
        PTR_LOOP_1009c424 = (undefined *)lpMem;
        *(undefined ***)lpMem[1] = lpMem;
      }
      lpMem[5] = (undefined *)(lpAddress + 0x100000);
      ppuVar3 = lpMem + 6;
      lpMem[3] = (undefined *)(lpMem + 0x26);
      lpMem[4] = (undefined *)lpAddress;
      lpMem[2] = (undefined *)ppuVar3;
      iVar4 = 0;
      do {
        bVar1 = 0xf < iVar4;
        iVar4 = iVar4 + 1;
        *ppuVar3 = (undefined *)((bVar1 - 1 & 0xf1) - 1);
        ppuVar3[1] = (undefined *)0xf1;
        ppuVar3 = ppuVar3 + 2;
      } while (iVar4 < 0x400);
      _memset(lpAddress,0,0x10000);
      for (; lpAddress < lpMem[4] + 0x10000; lpAddress = lpAddress + 0x400) {
        *(undefined1 *)(lpAddress + 0x3e) = 0xff;
        *lpAddress = (int)(lpAddress + 2);
        lpAddress[1] = 0xf0;
      }
      return lpMem;
    }
    VirtualFree(lpAddress,0,0x8000);
  }
  if (lpMem != &PTR_LOOP_1009c420) {
    HeapFree(DAT_102e0824,0,lpMem);
  }
  return (undefined **)0x0;
}

/* 10076ee7  FUN_10076ee7  (86 bytes)
 * undefined FUN_10076ee7(undefined * * param_1)
 * called by: FUN_10076f3d
 */
void __cdecl FUN_10076ee7(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_1009e440 == param_1) {
    PTR_LOOP_1009e440 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_1009c420) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_102e0824,0,param_1);
    return;
  }
  DAT_1009c430 = 0xffffffff;
  return;
}

/* 10076f3d  FUN_10076f3d  (194 bytes)
 * undefined FUN_10076f3d(int param_1)
 * called by: FUN_10077056
 */
void __cdecl FUN_10076f3d(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int local_8;
  
  ppuVar4 = (undefined **)PTR_LOOP_1009c424;
  do {
    ppuVar5 = ppuVar4;
    if (ppuVar4[4] != (undefined *)0xffffffff) {
      local_8 = 0;
      ppuVar5 = ppuVar4 + 0x804;
      iVar3 = 0x3ff000;
      do {
        if (*ppuVar5 == (undefined *)0xf0) {
          BVar1 = VirtualFree(ppuVar4[4] + iVar3,0x1000,0x4000);
          if (BVar1 != 0) {
            *ppuVar5 = (undefined *)0xffffffff;
            DAT_102e0240 = DAT_102e0240 + -1;
            if (((undefined **)ppuVar4[3] == (undefined **)0x0) || (ppuVar5 < ppuVar4[3])) {
              ppuVar4[3] = (undefined *)ppuVar5;
            }
            local_8 = local_8 + 1;
            param_1 = param_1 + -1;
            if (param_1 == 0) break;
          }
        }
        iVar3 = iVar3 + -0x1000;
        ppuVar5 = ppuVar5 + -2;
      } while (-1 < iVar3);
      ppuVar5 = (undefined **)ppuVar4[1];
      if ((local_8 != 0) && (ppuVar4[6] == (undefined *)0xffffffff)) {
        ppuVar2 = ppuVar4 + 8;
        iVar3 = 1;
        do {
          if (*ppuVar2 != (undefined *)0xffffffff) break;
          iVar3 = iVar3 + 1;
          ppuVar2 = ppuVar2 + 2;
        } while (iVar3 < 0x400);
        if (iVar3 == 0x400) {
          FUN_10076ee7(ppuVar4);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_LOOP_1009c424) || (ppuVar4 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}

/* 10076fff  FUN_10076fff  (87 bytes)
 * int FUN_10076fff(undefined * param_1, undefined4 * param_2, uint * param_3)
 * called by: FUN_1006f7f9, FUN_100739bf, FUN_10073cee
 */
int __cdecl FUN_10076fff(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_1009c420;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_1009c420) {
      return 0;
    }
  }
  if (((uint)param_1 & 0xf) != 0) {
    return 0;
  }
  if (((uint)param_1 & 0xfff) < 0x100) {
    return 0;
  }
  *param_2 = ppuVar1;
  uVar2 = (uint)param_1 & 0xfffff000;
  *param_3 = uVar2;
  return ((int)(param_1 + (-0x100 - uVar2)) >> 4) + 8 + uVar2;
}

/* 10077056  FUN_10077056  (69 bytes)
 * undefined FUN_10077056(int param_1, int param_2, byte.conflict * param_3)
 * called by: FUN_1006f7f9, FUN_100739bf
 */
void __cdecl FUN_10077056(int param_1,int param_2,byte_conflict *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = '\0';
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_102e0240 = DAT_102e0240 + 1, DAT_102e0240 == 0x20)) {
    FUN_10076f3d(0x10);
  }
  return;
}

/* 1007709b  FUN_1007709b  (520 bytes)
 * int * FUN_1007709b(uint param_1)
 * called by: FUN_1006f6bc, FUN_100731e9, FUN_100739bf
 */
/* WARNING: Type propagation algorithm not settling */

int * __cdecl FUN_1007709b(uint param_1)

{
  uint *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  int *piVar4;
  int *piVar5;
  undefined **ppuVar6;
  int *piVar7;
  uint *puVar8;
  undefined **ppuVar9;
  int local_8;
  
  piVar7 = (int *)PTR_LOOP_1009e440;
  do {
    if (piVar7[4] != -1) {
      puVar8 = (uint *)piVar7[2];
      piVar4 = (int *)(((int)puVar8 + (-0x18 - (int)piVar7) >> 3) * 0x1000 + piVar7[4]);
      if (puVar8 < piVar7 + 0x806) {
        do {
          if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
            piVar5 = (int *)FUN_100772a3(piVar4,*puVar8,param_1);
            if (piVar5 != (int *)0x0) goto LAB_10077166;
            puVar8[1] = param_1;
          }
          puVar8 = puVar8 + 2;
          piVar4 = piVar4 + 0x400;
        } while (puVar8 < piVar7 + 0x806);
      }
      puVar1 = (uint *)piVar7[2];
      piVar4 = (int *)piVar7[4];
      for (puVar8 = (uint *)(piVar7 + 6); puVar8 < puVar1; puVar8 = puVar8 + 2) {
        if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
          piVar5 = (int *)FUN_100772a3(piVar4,*puVar8,param_1);
          if (piVar5 != (int *)0x0) {
LAB_10077166:
            PTR_LOOP_1009e440 = (undefined *)piVar7;
            *puVar8 = *puVar8 - param_1;
            piVar7[2] = (int)puVar8;
            return piVar5;
          }
          puVar8[1] = param_1;
        }
        piVar4 = piVar4 + 0x400;
      }
    }
    piVar7 = (int *)*piVar7;
    if (piVar7 == (int *)PTR_LOOP_1009e440) {
      ppuVar9 = &PTR_LOOP_1009c420;
      while ((ppuVar9[4] == (undefined *)0xffffffff || (ppuVar9[3] == (undefined *)0x0))) {
        ppuVar9 = (undefined **)*ppuVar9;
        if (ppuVar9 == &PTR_LOOP_1009c420) {
          ppuVar9 = FUN_10076da3();
          if (ppuVar9 == (undefined **)0x0) {
            return (int *)0x0;
          }
          piVar7 = (int *)ppuVar9[4];
          *(char *)(piVar7 + 2) = (char)param_1;
          PTR_LOOP_1009e440 = (undefined *)ppuVar9;
          *piVar7 = (int)piVar7 + param_1 + 8;
          piVar7[1] = 0xf0 - param_1;
          ppuVar9[6] = ppuVar9[6] + -(param_1 & 0xff);
          return piVar7 + 0x40;
        }
      }
      ppuVar2 = (undefined **)ppuVar9[3];
      local_8 = 0;
      piVar7 = (int *)(ppuVar9[4] + ((int)ppuVar2 + (-0x18 - (int)ppuVar9) >> 3) * 0x1000);
      puVar3 = *ppuVar2;
      ppuVar6 = ppuVar2;
      for (; (puVar3 == (undefined *)0xffffffff && (local_8 < 0x10)); local_8 = local_8 + 1) {
        ppuVar6 = ppuVar6 + 2;
        puVar3 = *ppuVar6;
      }
      piVar4 = VirtualAlloc(piVar7,local_8 << 0xc,0x1000,4);
      if (piVar4 != piVar7) {
        return (int *)0x0;
      }
      _memset(piVar7,local_8 << 0xc,0);
      ppuVar6 = ppuVar2;
      if (0 < local_8) {
        piVar4 = piVar7 + 1;
        do {
          *(undefined1 *)(piVar4 + 0x3d) = 0xff;
          piVar4[-1] = (int)(piVar4 + 1);
          *piVar4 = 0xf0;
          *ppuVar6 = (undefined *)0xf0;
          ppuVar6[1] = (undefined *)0xf1;
          piVar4 = piVar4 + 0x400;
          ppuVar6 = ppuVar6 + 2;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
      for (; (ppuVar6 < ppuVar9 + 0x806 && (*ppuVar6 != (undefined *)0xffffffff));
          ppuVar6 = ppuVar6 + 2) {
      }
      PTR_LOOP_1009e440 = (undefined *)ppuVar9;
      ppuVar9[3] = (undefined *)(-(uint)(ppuVar6 < ppuVar9 + 0x806) & (uint)ppuVar6);
      *(char *)(piVar7 + 2) = (char)param_1;
      ppuVar9[2] = (undefined *)ppuVar2;
      *ppuVar2 = *ppuVar2 + -param_1;
      piVar7[1] = piVar7[1] - param_1;
      *piVar7 = (int)piVar7 + param_1 + 8;
      return piVar7 + 0x40;
    }
  } while( true );
}

/* 100772a3  FUN_100772a3  (292 bytes)
 * int FUN_100772a3(int * param_1, uint param_2, uint param_3)
 * called by: FUN_1007709b
 */
int __cdecl FUN_100772a3(int *param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  pbVar2 = (byte *)*param_1;
  pbVar1 = (byte *)(param_1 + 0x3e);
  bVar3 = (byte)param_3;
  if ((uint)param_1[1] < param_3) {
    pbVar6 = pbVar2;
    if (pbVar2[param_1[1]] != 0) {
      pbVar6 = pbVar2 + param_1[1];
    }
    while( true ) {
      while( true ) {
        if (pbVar1 <= pbVar6 + param_3) {
          pbVar6 = (byte *)(param_1 + 2);
          while( true ) {
            while( true ) {
              if (pbVar2 <= pbVar6) {
                return 0;
              }
              if (pbVar1 <= pbVar6 + param_3) {
                return 0;
              }
              if (*pbVar6 == 0) break;
              pbVar6 = pbVar6 + *pbVar6;
            }
            uVar5 = 1;
            pbVar4 = pbVar6;
            while (pbVar4 = pbVar4 + 1, *pbVar4 == 0) {
              uVar5 = uVar5 + 1;
            }
            if (param_3 <= uVar5) break;
            param_2 = param_2 - uVar5;
            pbVar6 = pbVar4;
            if (param_2 < param_3) {
              return 0;
            }
          }
          if (pbVar6 + param_3 < pbVar1) {
            *param_1 = (int)(pbVar6 + param_3);
            param_1[1] = uVar5 - param_3;
          }
          else {
            param_1[1] = 0;
            *param_1 = (int)(param_1 + 2);
          }
          *pbVar6 = bVar3;
          pbVar2 = pbVar6 + 8;
          goto LAB_100773b6;
        }
        if (*pbVar6 == 0) break;
        pbVar6 = pbVar6 + *pbVar6;
      }
      uVar5 = 1;
      pbVar4 = pbVar6;
      while (pbVar4 = pbVar4 + 1, *pbVar4 == 0) {
        uVar5 = uVar5 + 1;
      }
      if (param_3 <= uVar5) break;
      if (pbVar6 == pbVar2) {
        param_1[1] = uVar5;
        pbVar6 = pbVar4;
      }
      else {
        param_2 = param_2 - uVar5;
        pbVar6 = pbVar4;
        if (param_2 < param_3) {
          return 0;
        }
      }
    }
    if (pbVar6 + param_3 < pbVar1) {
      *param_1 = (int)(pbVar6 + param_3);
      param_1[1] = uVar5 - param_3;
    }
    else {
      param_1[1] = 0;
      *param_1 = (int)(param_1 + 2);
    }
    *pbVar6 = bVar3;
    pbVar2 = pbVar6 + 8;
  }
  else {
    *pbVar2 = bVar3;
    if (pbVar2 + param_3 < pbVar1) {
      *param_1 = *param_1 + param_3;
      param_1[1] = param_1[1] - param_3;
    }
    else {
      param_1[1] = 0;
      *param_1 = (int)(param_1 + 2);
    }
    pbVar2 = pbVar2 + 8;
  }
LAB_100773b6:
  return (int)pbVar2 * 0x10 + (int)param_1 * -0xf;
}

/* 100773c7  FUN_100773c7  (169 bytes)
 * undefined4 FUN_100773c7(int param_1, int * param_2, byte.conflict * param_3, uint param_4)
 * called by: FUN_100739bf
 */
undefined4 __cdecl FUN_100773c7(int param_1,int *param_2,byte_conflict *param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)*param_3;
  piVar2 = (int *)(param_1 + 0x18 + ((int)param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  if (param_4 < uVar6) {
    *param_3 = (byte_conflict)param_4;
    *piVar2 = *piVar2 + (uVar6 - param_4);
    piVar2[1] = 0xf1;
  }
  else {
    if (param_4 <= uVar6) {
      return 0;
    }
    piVar1 = (int *)(param_3 + param_4);
    if (param_2 + 0x3e < piVar1) {
      return 0;
    }
    for (piVar4 = (int *)(param_3 + uVar6); (piVar4 < piVar1 && ((char)*piVar4 == '\0'));
        piVar4 = (int *)((int)piVar4 + 1)) {
    }
    if (piVar4 != piVar1) {
      return 0;
    }
    *param_3 = (byte_conflict)param_4;
    if ((param_3 <= (int *)*param_2) && ((int *)*param_2 < piVar1)) {
      if (piVar1 < param_2 + 0x3e) {
        iVar5 = 0;
        *param_2 = (int)piVar1;
        cVar3 = (char)*piVar1;
        while (cVar3 == '\0') {
          iVar5 = iVar5 + 1;
          cVar3 = *(char *)((int)piVar1 + iVar5);
        }
        param_2[1] = iVar5;
      }
      else {
        param_2[1] = 0;
        *param_2 = (int)(param_2 + 2);
      }
    }
    *piVar2 = *piVar2 + (uVar6 - param_4);
  }
  return 1;
}

/* 10077470  FUN_10077470  (350 bytes)
 * int FUN_10077470(void)
 */
int FUN_10077470(void)

{
  byte *pbVar1;
  byte bVar2;
  undefined **ppuVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined **local_24;
  int local_20;
  int local_1c;
  undefined *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_20 = 0;
  local_24 = &PTR_LOOP_1009c420;
  do {
    if ((undefined **)PTR_LOOP_1009e440 == local_24) {
      local_20 = local_20 + 1;
    }
    piVar6 = (int *)local_24[4];
    if (piVar6 != (int *)0xffffffff) {
      local_1c = 0;
      local_10 = 0;
      ppuVar3 = local_24 + 6;
      piVar7 = piVar6 + 2;
      do {
        if (*ppuVar3 == (undefined *)0xffffffff) {
          if ((local_10 == 0) && ((undefined **)local_24[3] != ppuVar3)) {
            return -1;
          }
          local_10 = local_10 + 1;
        }
        else {
          if (piVar7 + 0x3c <= (int *)*piVar6) {
            return -2;
          }
          if ((char)piVar7[0x3c] != -1) {
            return -3;
          }
          local_c = 0;
          local_14 = (undefined *)0x0;
          local_8 = 0;
          iVar4 = 0;
          do {
            pbVar1 = (byte *)((int)piVar7 + iVar4);
            if (pbVar1 == (byte *)*piVar6) {
              local_c = local_c + 1;
            }
            if (*pbVar1 == 0) {
              local_14 = local_14 + 1;
              local_8 = local_8 + 1;
              iVar5 = iVar4 + 1;
            }
            else {
              if ((int)ppuVar3[1] <= local_8) {
                return -4;
              }
              if (local_c == 1) {
                if (local_8 < piVar7[-1]) {
                  return -5;
                }
                local_c = 2;
              }
              local_8 = 0;
              bVar2 = *pbVar1;
              iVar5 = iVar4;
              while (iVar5 = iVar5 + 1, iVar5 < (int)((uint)bVar2 + iVar4)) {
                if (*(char *)((int)piVar7 + iVar5) != '\0') {
                  return -6;
                }
                bVar2 = *(byte *)(iVar4 + 8 + (int)piVar6);
              }
            }
            iVar4 = iVar5;
          } while (iVar5 < 0xf0);
          if (local_14 != *ppuVar3) {
            return -7;
          }
          if (local_c == 0) {
            return -8;
          }
        }
        local_1c = local_1c + 1;
        ppuVar3 = ppuVar3 + 2;
        piVar6 = piVar6 + 0x400;
        piVar7 = piVar7 + 0x400;
      } while (local_1c < 0x400);
    }
    local_24 = (undefined **)*local_24;
    if (local_24 == &PTR_LOOP_1009c420) {
      return (-(uint)(local_20 != 0) & 9) - 9;
    }
  } while( true );
}

/* 100775d8  FUN_100775d8  (189 bytes)
 * undefined FUN_100775d8()
 */
undefined4 FUN_100775d8(int param_1,PVOID param_2,undefined4 param_3)

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
          FUN_1006e682();
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

/* 10077695  FUN_10077695  (27 bytes)
 * undefined FUN_10077695(int param_1)
 */
void FUN_10077695(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}

/* 100776b0  FUN_100776b0  (444 bytes)
 * undefined FUN_100776b0(void)
 * called by: FUN_1006f8e2
 */
void FUN_100776b0(void)

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
  DAT_102e0800 = 0x20;
  DAT_102e0700 = puVar2;
  for (; puVar2 < DAT_102e0700 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_102e0800 < (int)UVar8) {
      puVar2 = &DAT_102e0704;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_102e0800;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_102e0800 = DAT_102e0800 + 0x20;
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
      } while ((int)DAT_102e0800 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_102e0700)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_102e0700 + iVar6 * 9;
    if (DAT_102e0700[iVar6 * 9] == -1) {
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
          goto LAB_10077855;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_10077855:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_102e0800);
      return;
    }
  } while( true );
}

/* 1007786c  FUN_1007786c  (84 bytes)
 * undefined FUN_1007786c(void)
 * called by: FUN_1006f8e2
 */
void FUN_1007786c(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_102e0700;
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
      FUN_1006f7f9((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x102e0800);
  return;
}

/* 100778c0  FUN_100778c0  (185 bytes)
 * undefined FUN_100778c0(void)
 * called by: FUN_1006f8e2
 */
void FUN_100778c0(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_102e1850 == 0) {
    FUN_1007c24e();
  }
  iVar5 = 0;
  for (puVar6 = DAT_102e014c; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  DAT_102e017c = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_102e014c;
  puVar6 = DAT_102e014c;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_10078810((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_1006f7f9((undefined *)DAT_102e014c);
  DAT_102e014c = (uint *)0x0;
  *puVar3 = 0;
  DAT_102e184c = 1;
  return;
}

/* 10077979  FUN_10077979  (153 bytes)
 * undefined FUN_10077979(void)
 * called by: FUN_1006f8e2
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10077979(void)

{
  undefined4 *puVar1;
  byte_conflict *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_102e1850 == 0) {
    FUN_1007c24e();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_102e0244,0x104);
  _DAT_102e018c = &DAT_102e0244;
  pbVar2 = &DAT_102e0244;
  if (*DAT_102e185c != '\0') {
    pbVar2 = DAT_102e185c;
  }
  FUN_10077a12(pbVar2,(undefined4 *)0x0,(byte_conflict *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_10077a12(pbVar2,puVar1,(byte_conflict *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_102e0174 = puVar1;
  _DAT_102e0170 = local_8 + -1;
  return;
}

/* 10077a12  FUN_10077a12  (436 bytes)
 * undefined FUN_10077a12(byte.conflict * param_1, undefined4 * param_2, byte.conflict * param_3, int * param_4, int * param_5)
 * called by: FUN_10077979
 */
void __cdecl
FUN_10077a12(byte_conflict *param_1,undefined4 *param_2,byte_conflict *param_3,int *param_4,
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
      if (((*(byte *)((int)&DAT_102e05e0 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_102e05e0 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_10077abd;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_10077abd:
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
          if ((*(byte *)((int)&DAT_102e05e0 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_102e05e0 + bVar1 + 1) & 4) != 0) {
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

/* 10077bc6  FUN_10077bc6  (306 bytes)
 * LPSTR FUN_10077bc6(void)
 * called by: FUN_1006f8e2
 */
LPSTR FUN_10077bc6(void)

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
  if (DAT_102e0348 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_102e0348 = 1;
LAB_10077c1d:
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
        FUN_1006f7f9(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_102e0348 = 2;
  }
  else {
    if (DAT_102e0348 == 1) goto LAB_10077c1d;
    if (DAT_102e0348 != 2) {
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
    FUN_10075240((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}

/* 10077cf8  FUN_10077cf8  (57 bytes)
 * undefined FUN_10077cf8(void)
 * called by: __amsg_exit
 */
void FUN_10077cf8(void)

{
  if ((DAT_102e0154 == 1) || ((DAT_102e0154 == 0 && (DAT_102e0158 == 1)))) {
    FUN_10077d31(0xfc);
    if (DAT_102e034c != (code *)0x0) {
      (*DAT_102e034c)();
    }
    FUN_10077d31(0xff);
  }
  return;
}

/* 10077d31  FUN_10077d31  (339 bytes)
 * undefined FUN_10077d31(DWORD param_1)
 * called by: FUN_10077cf8, FUN_100793fc, __amsg_exit
 */
void __cdecl FUN_10077d31(DWORD param_1)

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
  pDVar2 = &DAT_1009e470;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x1009e500);
  if (param_1 == (&DAT_1009e470)[iVar5 * 2]) {
    if ((DAT_102e0154 == 1) || ((DAT_102e0154 == 0 && (DAT_102e0158 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x1009e474);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_10078810(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_10078810(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10078820(local_a4,_Dest);
      FUN_10078820(local_a4,(uint *)&DAT_1008a808);
      FUN_10078820(local_a4,*(uint **)(iVar5 * 8 + 0x1009e474));
      auStackY_1e3._3_4_ = 0x10077e55;
      FUN_1007c26a(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}

/* 10077eb5  FUN_10077eb5  (19 bytes)
 * undefined FUN_10077eb5(void)
 */
void FUN_10077eb5(void)

{
  byte_conflict in_FPUStatusWord;
  
  FUN_1007806d(in_FPUStatusWord);
  return;
}

/* 10077ec8  FUN_10077ec8  (20 bytes)
 * undefined FUN_10077ec8(void)
 */
void FUN_10077ec8(void)

{
  byte_conflict in_FPUStatusWord;
  
  FUN_1007806d(in_FPUStatusWord);
  return;
}

/* 10077edc  FUN_10077edc  (53 bytes)
 * uint FUN_10077edc(uint param_1, uint param_2)
 * called by: FUN_10077f11
 */
uint __thiscall FUN_10077edc(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_10077f52(local_8);
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_10077fe4(uVar1);
  return uVar1;
}

/* 10077f11  FUN_10077f11  (22 bytes)
 * undefined FUN_10077f11(uint param_1, uint param_2)
 * called by: FUN_1006fa8b
 */
void __thiscall FUN_10077f11(void *this,uint param_1,uint param_2)

{
  FUN_10077edc(this,param_1,param_2 & 0xfff7ffff);
  return;
}

/* 10077f52  FUN_10077f52  (146 bytes)
 * uint FUN_10077f52(uint param_1)
 * called by: FUN_10077edc
 */
uint __cdecl FUN_10077f52(uint param_1)

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

/* 10077fe4  FUN_10077fe4  (137 bytes)
 * uint FUN_10077fe4(uint param_1)
 * called by: FUN_10077edc
 */
uint __cdecl FUN_10077fe4(uint param_1)

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

/* 1007806d  FUN_1007806d  (53 bytes)
 * uint FUN_1007806d(byte.conflict param_1)
 * called by: FUN_10077eb5, FUN_10077ec8
 */
uint __cdecl FUN_1007806d(byte_conflict param_1)

{
  uint uVar1;
  
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
  return uVar1;
}

/* 100780aa  FUN_100780aa  (111 bytes)
 * uint FUN_100780aa(uint param_1)
 * called by: FUN_1006fb04
 */
uint __cdecl FUN_100780aa(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_102e0214 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement(&DAT_102e1848);
    bVar1 = DAT_102e1844 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement(&DAT_102e1848);
      this = (void *)0x13;
      FUN_10073e71(0x13);
    }
    param_1 = FUN_10078119(this,param_1);
    if (bVar1) {
      FUN_10073ed2(0x13);
    }
    else {
      InterlockedDecrement(&DAT_102e1848);
    }
  }
  return param_1;
}

/* 10078119  FUN_10078119  (203 bytes)
 * uint FUN_10078119(uint param_1)
 * called by: FUN_100780aa, FUN_1007e860, FUN_1007e930
 */
uint __thiscall FUN_10078119(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_102e0214 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    iVar3 = 1;
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_1009bbc4 < 2) {
        uVar2 = (byte)PTR_DAT_1009b9b8[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_1006f09e(this,param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_1009b9b8[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_10074578(DAT_102e0214,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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

/* 100781e4  FUN_100781e4  (73 bytes)
 * undefined4 FUN_100781e4(int param_1, int param_2)
 * called by: FUN_10078283
 */
undefined4 __cdecl FUN_100781e4(int param_1,int param_2)

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

/* 1007822d  FUN_1007822d  (86 bytes)
 * undefined FUN_1007822d(int param_1, int param_2)
 * called by: FUN_10078283
 */
void __cdecl FUN_1007822d(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  iVar1 = FUN_1007c6a8(*puVar3,1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f),puVar3);
  iVar2 = param_2 / 0x20 + -1;
  if (-1 < iVar2) {
    puVar3 = (uint *)(param_1 + iVar2 * 4);
    do {
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_1007c6a8(*puVar3,1,puVar3);
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -1;
    } while (-1 < iVar2);
  }
  return;
}

/* 10078283  FUN_10078283  (140 bytes)
 * undefined4 FUN_10078283(int param_1, int param_2)
 * called by: FUN_100783de, FUN_10078576
 */
undefined4 __cdecl FUN_10078283(int param_1,int param_2)

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
     (iVar2 = FUN_100781e4(param_1,param_2 + 1), iVar2 == 0)) {
    local_8 = FUN_1007822d(param_1,param_2 + -1);
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

/* 1007830f  FUN_1007830f  (27 bytes)
 * undefined FUN_1007830f(int param_1, undefined4 * param_2)
 * called by: FUN_100783de
 */
void __cdecl FUN_1007830f(int param_1,undefined4 *param_2)

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

/* 1007832a  FUN_1007832a  (12 bytes)
 * undefined FUN_1007832a(undefined4 * param_1)
 * called by: FUN_100783de
 */
void __cdecl FUN_1007832a(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

/* 10078336  FUN_10078336  (27 bytes)
 * undefined4 FUN_10078336(int * param_1)
 * called by: FUN_100783de
 */
undefined4 __cdecl FUN_10078336(int *param_1)

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

/* 10078351  FUN_10078351  (141 bytes)
 * undefined FUN_10078351(uint * param_1, uint param_2)
 * called by: FUN_100783de
 */
void __cdecl FUN_10078351(uint *param_1,uint param_2)

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

/* 100783de  FUN_100783de  (364 bytes)
 * undefined4 FUN_100783de(ushort * param_1, uint * param_2, int * param_3)
 * called by: FUN_1007854a, FUN_10078560
 */
undefined4 __cdecl FUN_100783de(ushort *param_1,uint *param_2,int *param_3)

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
    iVar2 = FUN_10078336((int *)&local_10);
    if (iVar2 != 0) {
LAB_1007850a:
      uVar5 = 0;
      goto LAB_1007850c;
    }
    FUN_1007832a(&local_10);
  }
  else {
    FUN_1007830f((int)local_1c,&local_10);
    iVar2 = FUN_10078283((int)&local_10,param_3[2]);
    if (iVar2 != 0) {
      iVar4 = uVar3 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar4 < iVar2 - param_3[2]) {
      FUN_1007832a(&local_10);
    }
    else {
      if (iVar2 < iVar4) {
        if (*param_3 <= iVar4) {
          FUN_1007832a(&local_10);
          local_10 = local_10 | 0x80000000;
          FUN_10078351(&local_10,param_3[3]);
          iVar4 = param_3[5] + *param_3;
          uVar5 = 1;
          goto LAB_1007850c;
        }
        local_10 = local_10 & 0x7fffffff;
        iVar4 = param_3[5] + iVar4;
        FUN_10078351(&local_10,param_3[3]);
        goto LAB_1007850a;
      }
      FUN_1007830f((int)&local_10,local_1c);
      FUN_10078351(&local_10,iVar2 - iVar4);
      FUN_10078283((int)&local_10,param_3[2]);
      FUN_10078351(&local_10,param_3[3] + 1);
    }
  }
  iVar4 = 0;
  uVar5 = 2;
LAB_1007850c:
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

/* 1007854a  FUN_1007854a  (22 bytes)
 * undefined FUN_1007854a(ushort * param_1, uint * param_2)
 * called by: FUN_1006ff2a, FUN_100785f0
 */
void __cdecl FUN_1007854a(ushort *param_1,uint *param_2)

{
  FUN_100783de(param_1,param_2,(int *)&DAT_1009e500);
  return;
}

/* 10078560  FUN_10078560  (22 bytes)
 * undefined FUN_10078560(ushort * param_1, uint * param_2)
 * called by: FUN_1007864b
 */
void __cdecl FUN_10078560(ushort *param_1,uint *param_2)

{
  FUN_100783de(param_1,param_2,(int *)&DAT_1009e518);
  return;
}

/* 10078576  FUN_10078576  (122 bytes)
 * undefined4 FUN_10078576(ushort * param_1, undefined4 * param_2)
 * called by: FUN_1007861d, FUN_1007910f
 */
undefined4 __cdecl FUN_10078576(ushort *param_1,undefined4 *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  uVar1 = param_1[5];
  local_14 = *(undefined4 *)(param_1 + 3);
  local_10 = *(undefined4 *)(param_1 + 1);
  local_c = (uint)*param_1 << 0x10;
  uVar3 = uVar1 & 0x7fff;
  iVar2 = FUN_10078283((int)&local_14,0x40);
  if (iVar2 != 0) {
    local_14 = 0x80000000;
    uVar3 = uVar3 + 1;
  }
  if (uVar3 == 0x7fff) {
    local_8 = 1;
  }
  param_2[1] = local_14;
  *(ushort *)(param_2 + 2) = uVar1 & 0x8000 | uVar3;
  *param_2 = local_10;
  return local_8;
}

/* 100785f0  FUN_100785f0  (45 bytes)
 * undefined FUN_100785f0(uint * param_1, byte.conflict * param_2)
 * called by: __fassign
 */
void __thiscall FUN_100785f0(void *this,uint *param_1,byte_conflict *param_2)

{
  ushort local_10 [6];
  
  FUN_10078c3e(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_1007854a(local_10,param_1);
  return;
}

/* 1007861d  FUN_1007861d  (46 bytes)
 * undefined FUN_1007861d(undefined4 * param_1, byte.conflict * param_2)
 */
void __thiscall FUN_1007861d(void *this,undefined4 *param_1,byte_conflict *param_2)

{
  ushort local_10 [6];
  
  FUN_10078c3e(this,local_10,(int *)&param_2,param_2,1,0,0,0);
  FUN_10078576(local_10,param_1);
  return;
}

/* 1007864b  FUN_1007864b  (45 bytes)
 * undefined FUN_1007864b(uint * param_1, byte.conflict * param_2)
 * called by: __fassign
 */
void __thiscall FUN_1007864b(void *this,uint *param_1,byte_conflict *param_2)

{
  ushort local_10 [6];
  
  FUN_10078c3e(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_10078560(local_10,param_1);
  return;
}

/* 10078678  FUN_10078678  (119 bytes)
 * undefined FUN_10078678(char * param_1, int param_2, int param_3)
 * called by: FUN_1006fc02, FUN_1006fd25, FUN_1006fe21
 */
void __cdecl FUN_10078678(char *param_1,int param_2,int param_3)

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
    FUN_10078900((undefined4 *)pcVar1,(undefined4 *)_Str,sVar3 + 1);
  }
  return;
}

/* 100786ef  FUN_100786ef  (92 bytes)
 * int * FUN_100786ef(undefined4 param_1, undefined4 param_2, int * param_3, uint * param_4)
 * called by: FUN_1006fc02, FUN_1006fd25, FUN_1006fe21
 */
int * __cdecl FUN_100786ef(undefined4 param_1,undefined4 param_2,int *param_3,uint *param_4)

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
  FUN_1007874b(&local_10,&param_1);
  iVar3 = FUN_1007c849(local_10,uStack_c,CONCAT22(uVar4,uStack_8),0x11,'\0',&local_2c);
  puVar2 = param_4;
  piVar1 = param_3;
  param_3[2] = iVar3;
  *param_3 = (int)local_2a;
  param_3[1] = (int)local_2c;
  FUN_10078810(param_4,local_28);
  piVar1[3] = (int)puVar2;
  return piVar1;
}

/* 1007874b  FUN_1007874b  (182 bytes)
 * undefined FUN_1007874b(uint * param_1, uint * param_2)
 * called by: FUN_100786ef
 */
void __cdecl FUN_1007874b(uint *param_1,uint *param_2)

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

/* 10078810  FUN_10078810  (7 bytes)
 * uint * FUN_10078810(uint * param_1, uint * param_2)
 * called by: FUN_1006fc63, FUN_10074145, FUN_10074319, FUN_10074459, FUN_10074525, FUN_100778c0, FUN_10077d31, FUN_100786ef, FUN_1007a4bb, FUN_1007c849, FUN_1007d7b4, FUN_1007d843, ... (17 total)
 */
uint * __cdecl FUN_10078810(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_100788f8;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_100788f8:
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

/* 10078820  FUN_10078820  (224 bytes)
 * uint * FUN_10078820(uint * param_1, uint * param_2)
 * called by: FUN_10074260, FUN_10074434, FUN_10077d31
 */
uint * __cdecl FUN_10078820(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_1007883c;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_1007886f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x1007888b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_1007883c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x1007888b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x1007888b;
    }
  }
LAB_1007886f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x1007888b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_100788f8:
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
    if (bVar1 == 0) goto LAB_100788f8;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}

/* 10078900  FUN_10078900  (664 bytes)
 * undefined4 * FUN_10078900(undefined4 * param_1, undefined4 * param_2, uint param_3)
 * called by: FUN_1006ff05, FUN_1007062d, FUN_10075ead, FUN_10078678, FUN_1007e4fa
 */
undefined4 * __cdecl FUN_10078900(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10078ab7_caseD_2;
        case 3:
          goto switchD_10078ab7_caseD_3;
        }
        goto switchD_10078ab7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10078ab7_caseD_0;
      case 1:
        goto switchD_10078ab7_caseD_1;
      case 2:
        goto switchD_10078ab7_caseD_2;
      case 3:
        goto switchD_10078ab7_caseD_3;
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
              goto switchD_10078ab7_caseD_2;
            case 3:
              goto switchD_10078ab7_caseD_3;
            }
            goto switchD_10078ab7_caseD_1;
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
              goto switchD_10078ab7_caseD_2;
            case 3:
              goto switchD_10078ab7_caseD_3;
            }
            goto switchD_10078ab7_caseD_1;
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
              goto switchD_10078ab7_caseD_2;
            case 3:
              goto switchD_10078ab7_caseD_3;
            }
            goto switchD_10078ab7_caseD_1;
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
switchD_10078ab7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10078ab7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10078ab7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10078ab7_caseD_0:
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
        goto switchD_10078935_caseD_2;
      case 3:
        goto switchD_10078935_caseD_3;
      }
      goto switchD_10078935_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10078935_caseD_0;
    case 1:
      goto switchD_10078935_caseD_1;
    case 2:
      goto switchD_10078935_caseD_2;
    case 3:
      goto switchD_10078935_caseD_3;
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
            goto switchD_10078935_caseD_2;
          case 3:
            goto switchD_10078935_caseD_3;
          }
          goto switchD_10078935_caseD_1;
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
            goto switchD_10078935_caseD_2;
          case 3:
            goto switchD_10078935_caseD_3;
          }
          goto switchD_10078935_caseD_1;
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
            goto switchD_10078935_caseD_2;
          case 3:
            goto switchD_10078935_caseD_3;
          }
          goto switchD_10078935_caseD_1;
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
switchD_10078935_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10078935_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10078935_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10078935_caseD_0:
  return param_1;
}

/* 10078c3e  FUN_10078c3e  (1185 bytes)
 * undefined4 FUN_10078c3e(ushort * param_1, int * param_2, byte.conflict * param_3, int param_4, int param_5, int param_6, int param_7)
 * called by: FUN_1006ff2a, FUN_100785f0, FUN_1007861d, FUN_1007864b, FUN_1007910f
 */
undefined4 __thiscall
FUN_10078c3e(void *this,ushort *param_1,int *param_2,byte_conflict *param_3,int param_4,int param_5,
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
LAB_10078c95:
  local_14 = iVar5;
  pbVar7 = pbVar8;
  iVar5 = 1;
  bVar6 = *pbVar7;
  pbVar8 = pbVar7 + 1;
  iVar2 = local_14;
  switch(iVar9) {
  case 0:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) {
LAB_10078cb2:
      local_14 = iVar2;
      iVar9 = 3;
      goto LAB_10078ed7;
    }
    if (bVar6 == DAT_1009bbc8) goto LAB_10078cc1;
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
      if (bVar6 != 0x30) goto LAB_10078fb1;
    }
    goto LAB_10078c95;
  case 1:
    local_14 = 1;
    if (('0' < (char)bVar6) && (iVar2 = iVar5, (char)bVar6 < ':')) goto LAB_10078cb2;
    iVar9 = iVar1;
    if (bVar6 != DAT_1009bbc8) {
      iVar9 = iVar5;
      if ((bVar6 == 0x2b) || (iVar9 = local_14, bVar6 == 0x2d)) goto LAB_10078d46;
      iVar9 = iVar5;
      local_14 = iVar5;
      if (bVar6 != 0x30) goto LAB_10078d1f;
    }
    goto LAB_10078c95;
  case 2:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) goto LAB_10078cb2;
    if (bVar6 == DAT_1009bbc8) {
LAB_10078cc1:
      iVar9 = 5;
      iVar5 = local_14;
    }
    else {
      iVar9 = iVar5;
      pbVar7 = param_3;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_10078fb6;
    }
    goto LAB_10078c95;
  case 3:
    local_14 = iVar5;
    while( true ) {
      if (DAT_1009bbc4 < 2) {
        uVar3 = (byte)PTR_DAT_1009b9b8[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_1009b9b8;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_1006f09e(this,(uint)bVar6,4);
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
    if (bVar6 != DAT_1009bbc8) goto LAB_10078e33;
    goto LAB_10078c95;
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
      if (DAT_1009bbc4 < 2) {
        uVar3 = (byte)PTR_DAT_1009b9b8[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_1009b9b8;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_1006f09e(this,(uint)bVar6,4);
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
LAB_10078e33:
    iVar9 = local_14;
    if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) {
LAB_10078d46:
      local_14 = iVar9;
      iVar9 = 0xb;
      pbVar8 = pbVar8 + -1;
      iVar5 = local_14;
    }
    else {
LAB_10078d1f:
      if (((char)bVar6 < 'D') ||
         (('E' < (char)bVar6 && (((char)bVar6 < 'd' || ('e' < (char)bVar6)))))) goto LAB_10078fb1;
      iVar9 = 6;
      iVar5 = local_14;
    }
    goto LAB_10078c95;
  case 5:
    local_28 = iVar5;
    if (DAT_1009bbc4 < 2) {
      uVar3 = (byte)PTR_DAT_1009b9b8[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_1009b9b8;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_1006f09e(this,(uint)bVar6,4);
      this = pbVar7;
    }
    iVar9 = iVar1;
    pbVar7 = param_3;
    if (uVar3 != 0) goto LAB_10078ed7;
    goto LAB_10078fb6;
  case 6:
    pbVar7 = pbVar7 + -1;
    this = pbVar7;
    param_3 = pbVar7;
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      if (bVar6 == 0x2b) goto LAB_10078f0c;
      if (bVar6 == 0x2d) goto LAB_10078f00;
      if (bVar6 != 0x30) goto LAB_10078fb6;
LAB_10078ea5:
      iVar9 = 8;
      iVar5 = local_14;
      goto LAB_10078c95;
    }
    break;
  case 7:
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      pbVar7 = param_3;
      if (bVar6 == 0x30) goto LAB_10078ea5;
      goto LAB_10078fb6;
    }
    break;
  case 8:
    local_24 = 1;
    while (bVar6 == 0x30) {
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) goto LAB_10078fb1;
    break;
  case 9:
    local_24 = 1;
    pbVar7 = (byte *)0x0;
    goto LAB_10078f37;
  default:
    goto switchD_10078ca1_caseD_a;
  case 0xb:
    if (param_7 != 0) {
      if (bVar6 == 0x2b) {
LAB_10078f0c:
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      else {
        param_3 = pbVar7;
        if (bVar6 != 0x2d) goto LAB_10078fb6;
LAB_10078f00:
        local_1c = -1;
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      goto LAB_10078c95;
    }
    iVar9 = 10;
    pbVar8 = pbVar7;
switchD_10078ca1_caseD_a:
    pbVar7 = pbVar8;
    iVar5 = local_14;
    if (iVar9 != 10) goto LAB_10078c95;
    goto LAB_10078fb6;
  }
  iVar9 = 9;
LAB_10078ed7:
  pbVar8 = pbVar8 + -1;
  iVar5 = local_14;
  goto LAB_10078c95;
LAB_10078f37:
  if (DAT_1009bbc4 < 2) {
    uVar3 = (byte)PTR_DAT_1009b9b8[(uint)bVar6 * 2] & 4;
    this = PTR_DAT_1009b9b8;
  }
  else {
    pbVar10 = (byte *)0x4;
    uVar3 = FUN_1006f09e(this,(uint)bVar6,4);
    this = pbVar10;
  }
  if (uVar3 == 0) goto LAB_10078f81;
  this = (void *)(int)(char)bVar6;
  pbVar7 = (byte *)((int)this + (int)pbVar7 * 10 + -0x30);
  if (0x1450 < (int)pbVar7) goto LAB_10078f79;
  bVar6 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  goto LAB_10078f37;
LAB_10078f79:
  pbVar7 = (byte *)0x1451;
LAB_10078f81:
  while( true ) {
    local_20 = pbVar7;
    if (DAT_1009bbc4 < 2) {
      uVar3 = (byte)PTR_DAT_1009b9b8[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_1009b9b8;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_1006f09e(this,(uint)bVar6,4);
      this = pbVar7;
    }
    if (uVar3 == 0) break;
    bVar6 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar7 = local_20;
  }
LAB_10078fb1:
  pbVar7 = pbVar8 + -1;
LAB_10078fb6:
  *param_2 = (int)pbVar7;
  if (local_14 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte_conflict *)0x0;
    param_3 = (byte_conflict *)0x0;
    local_18 = 4;
    goto LAB_100790c4;
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
    FUN_1007c782(local_60,local_8,(uint *)&local_44);
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
        FUN_1007ccfc((int *)&local_44,(uint)pbVar8,param_4);
        param_3 = (byte_conflict *)CONCAT22(uStack_40,uStack_42);
        goto LAB_10079049;
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
LAB_10079049:
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
LAB_100790c4:
  *(byte_conflict **)(param_1 + 3) = local_3e;
  *(byte_conflict **)(param_1 + 1) = param_3;
  param_1[5] = local_3a | (ushort)local_2c;
  *param_1 = local_44;
  return local_18;
}

/* 1007910f  FUN_1007910f  (60 bytes)
 * uint FUN_1007910f(undefined4 * param_1, int * param_2, byte.conflict * param_3, int param_4)
 */
uint __thiscall
FUN_1007910f(void *this,undefined4 *param_1,int *param_2,byte_conflict *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  ushort local_10 [6];
  
  uVar1 = FUN_10078c3e(this,local_10,param_2,param_3,param_4,0,0,0);
  iVar2 = FUN_10078576(local_10,param_1);
  if (iVar2 == 1) {
    uVar1 = uVar1 | 2;
  }
  return uVar1;
}

/* 1007914b  FUN_1007914b  (70 bytes)
 * int FUN_1007914b(int * param_1)
 */
int FUN_1007914b(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    iVar3 = FUN_10070a64();
    return iVar3;
  }
  if ((DAT_102e0350 != (FARPROC)0x0) &&
     (bVar2 = FUN_100791e7(DAT_102e0350), CONCAT31(extraout_var,bVar2) != 0)) {
    iVar3 = (*DAT_102e0350)(param_1);
    return iVar3;
  }
  return 0;
}

/* 10079191  FUN_10079191  (17 bytes)
 * undefined FUN_10079191()
 */
void FUN_10079191(void)

{
  DAT_102e0350 = SetUnhandledExceptionFilter(FUN_1007914b);
  return;
}

/* 100791a2  FUN_100791a2  (13 bytes)
 * undefined FUN_100791a2()
 */
void FUN_100791a2(void)

{
  SetUnhandledExceptionFilter(DAT_102e0350);
  return;
}

/* 100791af  FUN_100791af  (28 bytes)
 * bool FUN_100791af(void * param_1, UINT_PTR param_2)
 * called by: FUN_100700ff, FUN_1007062d
 */
bool __cdecl FUN_100791af(void *param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadReadPtr(param_1,param_2);
  return BVar1 == 0;
}

/* 100791cb  FUN_100791cb  (28 bytes)
 * bool FUN_100791cb(LPVOID param_1, UINT_PTR param_2)
 * called by: FUN_1007062d
 */
bool __cdecl FUN_100791cb(LPVOID param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_1,param_2);
  return BVar1 == 0;
}

/* 100791e7  FUN_100791e7  (24 bytes)
 * bool FUN_100791e7(FARPROC param_1)
 * called by: FUN_1007062d, FUN_1007914b
 */
bool __cdecl FUN_100791e7(FARPROC param_1)

{
  BOOL BVar1;
  
  BVar1 = IsBadCodePtr(param_1);
  return BVar1 == 0;
}

/* 10079284  FUN_10079284  (318 bytes)
 * LONG FUN_10079284(int param_1, _EXCEPTION_POINTERS * param_2)
 */
LONG __cdecl FUN_10079284(int param_1,_EXCEPTION_POINTERS *param_2)

{
  code *pcVar1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  int *piVar5;
  LONG LVar6;
  int iVar7;
  int iVar8;
  
  pDVar4 = FUN_10070951();
  piVar5 = FUN_100793c2(param_1,(int *)pDVar4[0x14]);
  if ((piVar5 == (int *)0x0) || (pcVar1 = (code *)piVar5[2], pcVar1 == (code *)0x0)) {
    LVar6 = UnhandledExceptionFilter(param_2);
  }
  else if (pcVar1 == (code *)0x5) {
    piVar5[2] = 0;
    LVar6 = 1;
  }
  else {
    if (pcVar1 != (code *)0x1) {
      DVar2 = pDVar4[0x15];
      pDVar4[0x15] = (DWORD)param_2;
      if (piVar5[1] == 8) {
        if (DAT_1009e5a8 < DAT_1009e5ac + DAT_1009e5a8) {
          iVar7 = DAT_1009e5a8 * 0xc;
          iVar8 = DAT_1009e5a8;
          do {
            *(undefined4 *)(iVar7 + 8 + pDVar4[0x14]) = 0;
            iVar8 = iVar8 + 1;
            iVar7 = iVar7 + 0xc;
          } while (iVar8 < DAT_1009e5ac + DAT_1009e5a8);
        }
        iVar7 = *piVar5;
        DVar3 = pDVar4[0x16];
        if (iVar7 == -0x3fffff72) {
          pDVar4[0x16] = 0x83;
        }
        else if (iVar7 == -0x3fffff70) {
          pDVar4[0x16] = 0x81;
        }
        else if (iVar7 == -0x3fffff6f) {
          pDVar4[0x16] = 0x84;
        }
        else if (iVar7 == -0x3fffff6d) {
          pDVar4[0x16] = 0x85;
        }
        else if (iVar7 == -0x3fffff73) {
          pDVar4[0x16] = 0x82;
        }
        else if (iVar7 == -0x3fffff71) {
          pDVar4[0x16] = 0x86;
        }
        else if (iVar7 == -0x3fffff6e) {
          pDVar4[0x16] = 0x8a;
        }
        (*pcVar1)(8,pDVar4[0x16]);
        pDVar4[0x16] = DVar3;
      }
      else {
        piVar5[2] = 0;
        (*pcVar1)(piVar5[1]);
      }
      pDVar4[0x15] = DVar2;
    }
    LVar6 = -1;
  }
  return LVar6;
}

/* 100793c2  FUN_100793c2  (58 bytes)
 * int * FUN_100793c2(int param_1, int * param_2)
 * called by: FUN_10079284
 */
int * __cdecl FUN_100793c2(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_2;
  if (*param_2 != param_1) {
    do {
      piVar1 = piVar1 + 3;
      if (param_2 + DAT_1009e5b4 * 3 <= piVar1) break;
    } while (*piVar1 != param_1);
  }
  if ((param_2 + DAT_1009e5b4 * 3 <= piVar1) || (*piVar1 != param_1)) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}

/* 100793fc  FUN_100793fc  (23 bytes)
 * undefined FUN_100793fc(void)
 * called by: FUN_10070a64
 */
void FUN_100793fc(void)

{
  FUN_10077d31(10);
  FUN_1007c4d7((DWORD *)0x16);
                    /* WARNING: Subroutine does not return */
  __exit(3);
}

/* 10079413  FUN_10079413  (68 bytes)
 * undefined FUN_10079413(undefined4 * param_1)
 * called by: FUN_10070b33, FUN_10074ce1, FUN_100797a8
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10079413(undefined4 *param_1)

{
  void *pvVar1;
  
  _DAT_102e0234 = _DAT_102e0234 + 1;
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

/* 10079457  FUN_10079457  (41 bytes)
 * byte.conflict FUN_10079457(uint param_1)
 * called by: FUN_10070b33
 */
byte_conflict __cdecl FUN_10079457(uint param_1)

{
  if (DAT_102e0800 <= param_1) {
    return '\0';
  }
  return *(byte *)((&DAT_102e0700)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}

/* 10079480  FUN_10079480  (89 bytes)
 * int FUN_10079480(LPSTR param_1, WCHAR param_2)
 * called by: FUN_10070c4b
 */
int __cdecl FUN_10079480(LPSTR param_1,WCHAR param_2)

{
  int iVar1;
  bool bVar2;
  
  InterlockedIncrement(&DAT_102e1848);
  bVar2 = DAT_102e1844 != 0;
  if (bVar2) {
    InterlockedDecrement(&DAT_102e1848);
    FUN_10073e71(0x13);
  }
  iVar1 = FUN_100794d9(param_1,param_2);
  if (bVar2) {
    FUN_10073ed2(0x13);
  }
  else {
    InterlockedDecrement(&DAT_102e1848);
  }
  return iVar1;
}

/* 100794d9  FUN_100794d9  (105 bytes)
 * int FUN_100794d9(LPSTR param_1, WCHAR param_2)
 * called by: FUN_10079480
 */
int __cdecl FUN_100794d9(LPSTR param_1,WCHAR param_2)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  DWORD *pDVar2;
  
  lpMultiByteStr = param_1;
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_102e0214 == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    iVar1 = WideCharToMultiByte(DAT_102e0224,0x220,&param_2,1,lpMultiByteStr,DAT_1009bbc4,
                                (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((iVar1 != 0) && (param_1 == (LPSTR)0x0)) {
      return iVar1;
    }
  }
  pDVar2 = FUN_100757d8();
  *pDVar2 = 0x2a;
  return -1;
}

/* 10079635  FUN_10079635  (93 bytes)
 * uint FUN_10079635(LPWSTR param_1, byte.conflict * param_2, uint param_3)
 * called by: FUN_10071455
 */
uint __cdecl FUN_10079635(LPWSTR param_1,byte_conflict *param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  
  InterlockedIncrement(&DAT_102e1848);
  bVar2 = DAT_102e1844 != 0;
  if (bVar2) {
    InterlockedDecrement(&DAT_102e1848);
    FUN_10073e71(0x13);
  }
  uVar1 = FUN_10079692(param_1,param_2,param_3);
  if (bVar2) {
    FUN_10073ed2(0x13);
  }
  else {
    InterlockedDecrement(&DAT_102e1848);
  }
  return uVar1;
}

/* 10079692  FUN_10079692  (201 bytes)
 * uint FUN_10079692(LPWSTR param_1, byte.conflict * param_2, uint param_3)
 * called by: FUN_10079635
 */
uint __cdecl FUN_10079692(LPWSTR param_1,byte_conflict *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  DWORD *pDVar3;
  
  if ((param_2 != (byte_conflict *)0x0) && (param_3 != 0)) {
    bVar1 = *param_2;
    if (bVar1 != 0) {
      if (DAT_102e0214 == 0) {
        if (param_1 != (LPWSTR)0x0) {
          *param_1 = (ushort)bVar1;
        }
        return 1;
      }
      if ((PTR_DAT_1009b9b8[(uint)bVar1 * 2 + 1] & 0x80) == 0) {
        iVar2 = MultiByteToWideChar(DAT_102e0224,9,(LPCSTR)param_2,1,param_1,
                                    (uint)(param_1 != (LPWSTR)0x0));
        if (iVar2 != 0) {
          return 1;
        }
      }
      else {
        if (1 < (int)DAT_1009bbc4) {
          if ((int)param_3 < (int)DAT_1009bbc4) goto LAB_10079724;
          iVar2 = MultiByteToWideChar(DAT_102e0224,9,(LPCSTR)param_2,DAT_1009bbc4,param_1,
                                      (uint)(param_1 != (LPWSTR)0x0));
          if (iVar2 != 0) {
            return DAT_1009bbc4;
          }
        }
        if ((DAT_1009bbc4 <= param_3) && (param_2[1] != '\0')) {
          return DAT_1009bbc4;
        }
      }
LAB_10079724:
      pDVar3 = FUN_100757d8();
      *pDVar3 = 0x2a;
      return 0xffffffff;
    }
    if (param_1 != (LPWSTR)0x0) {
      *param_1 = L'\0';
    }
  }
  return 0;
}

/* 100797a8  FUN_100797a8  (110 bytes)
 * uint FUN_100797a8(uint param_1, int * param_2)
 * called by: FUN_10071ecb
 */
uint __cdecl FUN_100797a8(uint param_1,int *param_2)

{
  uint uVar1;
  
  if ((param_1 != 0xffffffff) &&
     ((uVar1 = param_2[3], (uVar1 & 1) != 0 || (((uVar1 & 0x80) != 0 && ((uVar1 & 2) == 0)))))) {
    if (param_2[2] == 0) {
      FUN_10079413(param_2);
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

/* 10079816  FUN_10079816  (208 bytes)
 * undefined FUN_10079816(uint param_1, int * param_2, ushort * param_3)
 * called by: FUN_100720aa, __startOneArgErrorHandling
 */
void __cdecl FUN_10079816(uint param_1,int *param_2,ushort *param_3)

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
LAB_1007985b:
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
    if (iVar2 == 5) goto LAB_1007985b;
    if (iVar2 == 7) {
      *param_2 = 1;
      goto LAB_100798b1;
    }
    if (iVar2 != 8) goto LAB_100798b1;
    uVar3 = 0x10;
  }
  bVar1 = FUN_1007d21c(uVar3,(double *)(param_2 + 6),(uint)param_3);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
      local_34 = *(undefined8 *)(param_2 + 4);
      local_24 = local_24 & 0xffffffe3 | 3;
    }
    else {
      local_24 = local_24 & 0xfffffffe;
    }
    FUN_1007cf69(local_5c,(uint *)&param_3,uVar3,param_1,(undefined8 *)(param_2 + 2),
                 (undefined8 *)(param_2 + 6));
  }
LAB_100798b1:
  FUN_1007d555();
  if (((*param_2 != 8) && (DAT_1009ef38 == 0)) && (iVar2 = FUN_1007d535(), iVar2 != 0)) {
    return;
  }
  FUN_1007d4bb(*param_2);
  return;
}

/* 100798e6  FUN_100798e6  (41 bytes)
 * float10 FUN_100798e6(undefined8 param_1, short param_2)
 * called by: FUN_100799cd, FUN_10079be3, FUN_1007d5ce
 */
float10 __cdecl FUN_100798e6(undefined8 param_1,short param_2)

{
  undefined8 local_c;
  
  local_c = (double)CONCAT26((param_2 + 0x3fe) * 0x10 | param_1._6_2_ & 0x800f,(int6)param_1);
  return (float10)local_c;
}

/* 1007994f  FUN_1007994f  (36 bytes)
 * float10 FUN_1007994f(undefined8 param_1, short param_2)
 */
float10 __cdecl FUN_1007994f(undefined8 param_1,short param_2)

{
  undefined8 local_c;
  
  local_c = (double)CONCAT26(param_2 << 4 | param_1._6_2_ & 0x800f,(int6)param_1);
  return (float10)local_c;
}

/* 10079973  FUN_10079973  (90 bytes)
 * undefined4 FUN_10079973(int param_1, uint param_2)
 * called by: FUN_10079afc, FUN_10079eba, FUN_1007d5ce
 */
undefined4 __cdecl FUN_10079973(int param_1,uint param_2)

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

/* 100799cd  FUN_100799cd  (193 bytes)
 * float10 FUN_100799cd(uint param_1, uint param_2, int * param_3)
 * called by: FUN_10079afc, FUN_10079be3, FUN_1007d21c, FUN_1007d5ce
 */
float10 __cdecl FUN_100799cd(uint param_1,uint param_2,int *param_3)

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
    fVar5 = FUN_100798e6(CONCAT17(param_2._3_1_,
                                  CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))),0);
    local_c = (double)fVar5;
  }
  else {
    fVar5 = FUN_100798e6(CONCAT17(param_2._3_1_,
                                  CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))),0);
    local_c = (double)fVar5;
    iVar4 = (short)((ushort)(param_2 >> 0x14) & 0x7ff) + -0x3fe;
  }
  *param_3 = iVar4;
  return (float10)local_c;
}

/* 10079ac1  FUN_10079ac1  (37 bytes)
 * float10 FUN_10079ac1(undefined4 param_1, uint param_2)
 */
float10 __cdecl FUN_10079ac1(undefined4 param_1,uint param_2)

{
  return (float10)(double)(CONCAT44(~param_2,param_1) ^ 0x7fffffff00000000);
}

/* 10079afc  FUN_10079afc  (231 bytes)
 * float10 FUN_10079afc(uint param_1, undefined4 param_2)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_10079afc(uint param_1,undefined4 param_2)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  uint uVar5;
  int local_8;
  
  uVar2 = FUN_1007d555();
  dVar1 = (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
  if ((param_2._2_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = FUN_10079973(param_1,(uint)((ulonglong)dVar1 >> 0x20));
    if (0 < iVar3) {
      if (iVar3 < 3) {
        FUN_1007d555();
        return (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
      }
      if (iVar3 == 3) {
        fVar4 = FUN_1007cd78(0x25,(double)CONCAT44((int)(CONCAT26(param_2._2_2_,
                                                                  CONCAT24((undefined2)param_2,
                                                                           param_1)) >> 0x20),
                                                   param_1));
        return fVar4;
      }
    }
    dVar1 = (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) + 1.0;
    uVar5 = 8;
  }
  else {
    if (dVar1 != 0.0) {
      FUN_100799cd(param_1,(uint)(CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) >>
                                 0x20),&local_8);
      FUN_1007d555();
      return (float10)(local_8 + -1);
    }
    dVar1 = -_DAT_1009e5c0;
    uVar5 = 4;
  }
  fVar4 = FUN_1007ce2c(uVar5,0x25,CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)),
                       dVar1,uVar2);
  return fVar4;
}

/* 10079be3  FUN_10079be3  (661 bytes)
 * float10 FUN_10079be3(int param_1, uint param_2, int param_3, uint param_4)
 */
float10 __cdecl FUN_10079be3(int param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 local_20;
  short local_c [2];
  uint local_8;
  
  local_8 = FUN_1007d555();
  if (((param_2._2_2_ & 0x7ff0) == 0x7ff0) || ((param_4._2_2_ & 0x7ff0) == 0x7ff0)) {
    if ((((param_2._2_2_ & 0x7ff8) == 0x7ff0) && (((param_2 & 0x7ffff) != 0 || (param_1 != 0)))) ||
       (((param_4._2_2_ & 0x7ff8) == 0x7ff0 && (((param_4 & 0x7ffff) != 0 || (param_3 != 0)))))) {
      dVar7 = (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) +
              (double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3));
      uVar6 = CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3));
      uVar5 = CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
      uVar4 = 8;
      goto LAB_10079e3c;
    }
    if (((param_2._2_2_ & 0x7ff8) == 0x7ff8) || ((param_4._2_2_ & 0x7ff8) == 0x7ff8)) {
      fVar3 = FUN_1007cdcc(0x26,(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)
                                                ),
                           (double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)));
      return fVar3;
    }
  }
  if ((double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)) ==
      (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1))) {
    FUN_1007d555();
    return (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
  }
  if ((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) == 0.0) {
    if ((double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)) <=
        (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1))) {
      local_20 = -4.94065645841247e-324;
    }
    else {
      local_20 = 4.94065645841247e-324;
    }
  }
  if (((0.0 < (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1))) &&
      ((double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)) <
       (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)))) ||
     (((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) < 0.0 &&
      ((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) <
       (double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)))))) {
    iVar2 = param_1 + -1;
    local_20 = (double)CONCAT44(param_2,iVar2);
    if (param_1 == 0) {
      iVar1 = param_2 - 1;
LAB_10079d61:
      local_20 = (double)CONCAT44(iVar1,(int)local_20);
    }
  }
  else if (((0.0 < (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1))) &&
           ((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) <
            (double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)))) ||
          (((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) < 0.0 &&
           ((double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)) <
            (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)))))) {
    iVar2 = param_1 + 1;
    local_20 = (double)CONCAT44(param_2,iVar2);
    if (iVar2 == 0) {
      iVar1 = param_2 + 1;
      goto LAB_10079d61;
    }
  }
  else {
    iVar2 = (int)local_20;
  }
  if ((((ulonglong)local_20 & 0x7ff0000000000000) == 0) &&
     ((((ulonglong)local_20 & 0xfffff00000000) != 0 || (iVar2 != 0)))) {
    fVar3 = FUN_100799cd(SUB84(local_20,0),local_20._4_4_,(int *)local_c);
    fVar3 = FUN_100798e6((double)fVar3,local_c[0] + 0x600);
    dVar7 = (double)fVar3;
    uVar6 = CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3));
    uVar5 = CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    uVar4 = 0x12;
  }
  else {
    if (((local_20._4_4_ != 0x7ff00000) || (iVar2 != 0)) &&
       ((local_20._4_4_ != 0xfff00000 || (iVar2 != 0)))) {
      FUN_1007d555();
      return (float10)local_20;
    }
    fVar3 = FUN_100799cd(SUB84(local_20,0),local_20._4_4_,(int *)local_c);
    fVar3 = FUN_100798e6((double)fVar3,local_c[0] + -0x600);
    dVar7 = (double)fVar3;
    uVar6 = CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3));
    uVar5 = CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    uVar4 = 0x11;
  }
LAB_10079e3c:
  fVar3 = FUN_1007cec4(uVar4,0x26,uVar5,uVar6,dVar7,local_8);
  return fVar3;
}

/* 10079eba  FUN_10079eba  (146 bytes)
 * int FUN_10079eba(int param_1, uint param_2)
 * called by: FUN_1007381c
 */
int __cdecl FUN_10079eba(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2._2_2_ & 0x7ff0) == 0x7ff0) {
    iVar1 = FUN_10079973(param_1,(uint)(CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)
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

/* 10079f4c  FUN_10079f4c  (145 bytes)
 * undefined FUN_10079f4c()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10079f4c(void)

{
  int *piVar1;
  uint uVar2;
  
  if (_DAT_102e0220 == 0) {
    PTR_PTR_1009ef54 = (undefined *)&PTR_DAT_1009ef58;
    FUN_1007a32b(_DAT_102e0354);
    FUN_1006f7f9((undefined *)_DAT_102e0354);
    _DAT_102e0354 = (int *)0x0;
    return 0;
  }
  piVar1 = FUN_1006f6bc(1,0xac);
  if (piVar1 != (int *)0x0) {
    uVar2 = FUN_10079fdd((char *)piVar1);
    if (uVar2 == 0) {
      PTR_PTR_1009ef54 = (undefined *)piVar1;
      FUN_1007a32b(_DAT_102e0354);
      FUN_1006f7f9((undefined *)_DAT_102e0354);
      _DAT_102e0354 = piVar1;
      return 0;
    }
    FUN_1007a32b(piVar1);
    FUN_1006f7f9((undefined *)piVar1);
  }
  return 1;
}

/* 10079fdd  FUN_10079fdd  (846 bytes)
 * uint FUN_10079fdd(char * param_1)
 * called by: FUN_10079f4c
 */
uint __cdecl FUN_10079fdd(char *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  
  uVar1 = (uint)DAT_102e038e;
  uVar43 = (uint)DAT_102e0390;
  if (param_1 == (char *)0x0) {
    uVar43 = 0xffffffff;
  }
  else {
    uVar2 = FUN_1007e3bc(1,uVar1,0x31,param_1 + 4);
    uVar3 = FUN_1007e3bc(1,uVar1,0x32,param_1 + 8);
    uVar4 = FUN_1007e3bc(1,uVar1,0x33,param_1 + 0xc);
    uVar5 = FUN_1007e3bc(1,uVar1,0x34,param_1 + 0x10);
    uVar6 = FUN_1007e3bc(1,uVar1,0x35,param_1 + 0x14);
    uVar7 = FUN_1007e3bc(1,uVar1,0x36,param_1 + 0x18);
    uVar8 = FUN_1007e3bc(1,uVar1,0x37,param_1);
    uVar9 = FUN_1007e3bc(1,uVar1,0x2a,param_1 + 0x20);
    uVar10 = FUN_1007e3bc(1,uVar1,0x2b,param_1 + 0x24);
    uVar11 = FUN_1007e3bc(1,uVar1,0x2c,param_1 + 0x28);
    uVar12 = FUN_1007e3bc(1,uVar1,0x2d,param_1 + 0x2c);
    uVar13 = FUN_1007e3bc(1,uVar1,0x2e,param_1 + 0x30);
    uVar14 = FUN_1007e3bc(1,uVar1,0x2f,param_1 + 0x34);
    uVar15 = FUN_1007e3bc(1,uVar1,0x30,param_1 + 0x1c);
    uVar16 = FUN_1007e3bc(1,uVar1,0x44,param_1 + 0x38);
    uVar17 = FUN_1007e3bc(1,uVar1,0x45,param_1 + 0x3c);
    uVar18 = FUN_1007e3bc(1,uVar1,0x46,param_1 + 0x40);
    uVar19 = FUN_1007e3bc(1,uVar1,0x47,param_1 + 0x44);
    uVar20 = FUN_1007e3bc(1,uVar1,0x48,param_1 + 0x48);
    uVar21 = FUN_1007e3bc(1,uVar1,0x49,param_1 + 0x4c);
    uVar22 = FUN_1007e3bc(1,uVar1,0x4a,param_1 + 0x50);
    uVar23 = FUN_1007e3bc(1,uVar1,0x4b,param_1 + 0x54);
    uVar24 = FUN_1007e3bc(1,uVar1,0x4c,param_1 + 0x58);
    uVar25 = FUN_1007e3bc(1,uVar1,0x4d,param_1 + 0x5c);
    uVar26 = FUN_1007e3bc(1,uVar1,0x4e,param_1 + 0x60);
    uVar27 = FUN_1007e3bc(1,uVar1,0x4f,param_1 + 100);
    uVar28 = FUN_1007e3bc(1,uVar1,0x38,param_1 + 0x68);
    uVar29 = FUN_1007e3bc(1,uVar1,0x39,param_1 + 0x6c);
    uVar30 = FUN_1007e3bc(1,uVar1,0x3a,param_1 + 0x70);
    uVar31 = FUN_1007e3bc(1,uVar1,0x3b,param_1 + 0x74);
    uVar32 = FUN_1007e3bc(1,uVar1,0x3c,param_1 + 0x78);
    uVar33 = FUN_1007e3bc(1,uVar1,0x3d,param_1 + 0x7c);
    uVar34 = FUN_1007e3bc(1,uVar1,0x3e,param_1 + 0x80);
    uVar35 = FUN_1007e3bc(1,uVar1,0x3f,param_1 + 0x84);
    uVar36 = FUN_1007e3bc(1,uVar1,0x40,param_1 + 0x88);
    uVar37 = FUN_1007e3bc(1,uVar1,0x41,param_1 + 0x8c);
    uVar38 = FUN_1007e3bc(1,uVar1,0x42,param_1 + 0x90);
    uVar39 = FUN_1007e3bc(1,uVar1,0x43,param_1 + 0x94);
    uVar40 = FUN_1007e3bc(1,uVar1,0x28,param_1 + 0x98);
    uVar1 = FUN_1007e3bc(1,uVar1,0x29,param_1 + 0x9c);
    uVar41 = FUN_1007e3bc(1,uVar43,0x1f,param_1 + 0xa0);
    uVar42 = FUN_1007e3bc(1,uVar43,0x20,param_1 + 0xa4);
    uVar43 = FUN_1007e3bc(1,uVar43,0x1003,param_1 + 0xa8);
    uVar43 = uVar43 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 |
                      uVar11 | uVar12 | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19
                      | uVar20 | uVar21 | uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 |
                      uVar28 | uVar29 | uVar30 | uVar31 | uVar32 | uVar33 | uVar34 | uVar35 | uVar36
                      | uVar37 | uVar38 | uVar39 | uVar40 | uVar1 | uVar41 | uVar42;
  }
  return uVar43;
}

/* 1007a32b  FUN_1007a32b  (400 bytes)
 * undefined FUN_1007a32b(undefined4 * param_1)
 * called by: FUN_10079f4c
 */
void __cdecl FUN_1007a32b(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_1006f7f9((undefined *)param_1[1]);
    FUN_1006f7f9((undefined *)param_1[2]);
    FUN_1006f7f9((undefined *)param_1[3]);
    FUN_1006f7f9((undefined *)param_1[4]);
    FUN_1006f7f9((undefined *)param_1[5]);
    FUN_1006f7f9((undefined *)param_1[6]);
    FUN_1006f7f9((undefined *)*param_1);
    FUN_1006f7f9((undefined *)param_1[8]);
    FUN_1006f7f9((undefined *)param_1[9]);
    FUN_1006f7f9((undefined *)param_1[10]);
    FUN_1006f7f9((undefined *)param_1[0xb]);
    FUN_1006f7f9((undefined *)param_1[0xc]);
    FUN_1006f7f9((undefined *)param_1[0xd]);
    FUN_1006f7f9((undefined *)param_1[7]);
    FUN_1006f7f9((undefined *)param_1[0xe]);
    FUN_1006f7f9((undefined *)param_1[0xf]);
    FUN_1006f7f9((undefined *)param_1[0x10]);
    FUN_1006f7f9((undefined *)param_1[0x11]);
    FUN_1006f7f9((undefined *)param_1[0x12]);
    FUN_1006f7f9((undefined *)param_1[0x13]);
    FUN_1006f7f9((undefined *)param_1[0x14]);
    FUN_1006f7f9((undefined *)param_1[0x15]);
    FUN_1006f7f9((undefined *)param_1[0x16]);
    FUN_1006f7f9((undefined *)param_1[0x17]);
    FUN_1006f7f9((undefined *)param_1[0x18]);
    FUN_1006f7f9((undefined *)param_1[0x19]);
    FUN_1006f7f9((undefined *)param_1[0x1a]);
    FUN_1006f7f9((undefined *)param_1[0x1b]);
    FUN_1006f7f9((undefined *)param_1[0x1c]);
    FUN_1006f7f9((undefined *)param_1[0x1d]);
    FUN_1006f7f9((undefined *)param_1[0x1e]);
    FUN_1006f7f9((undefined *)param_1[0x1f]);
    FUN_1006f7f9((undefined *)param_1[0x20]);
    FUN_1006f7f9((undefined *)param_1[0x21]);
    FUN_1006f7f9((undefined *)param_1[0x22]);
    FUN_1006f7f9((undefined *)param_1[0x23]);
    FUN_1006f7f9((undefined *)param_1[0x24]);
    FUN_1006f7f9((undefined *)param_1[0x25]);
    FUN_1006f7f9((undefined *)param_1[0x26]);
    FUN_1006f7f9((undefined *)param_1[0x27]);
    FUN_1006f7f9((undefined *)param_1[0x28]);
    FUN_1006f7f9((undefined *)param_1[0x29]);
    FUN_1006f7f9((undefined *)param_1[0x2a]);
  }
  return;
}

/* 1007a4bb  FUN_1007a4bb  (469 bytes)
 * undefined FUN_1007a4bb()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1007a4bb(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  
  uVar5 = (uint)DAT_102e038a;
  if (DAT_102e021c == 0) {
    FUN_1006f7f9(DAT_102e0358);
    FUN_1006f7f9(DAT_102e035c);
    FUN_1006f7f9(DAT_102e0360);
    DAT_102e0358 = (undefined *)0x0;
    DAT_102e035c = (undefined *)0x0;
    DAT_102e0360 = (char *)0x0;
    pvVar4 = _malloc(2);
    *(void **)PTR_PTR_1009f040 = pvVar4;
    if (*(uint **)PTR_PTR_1009f040 != (uint *)0x0) {
      FUN_10078810(*(uint **)PTR_PTR_1009f040,(uint *)&DAT_1008a4ec);
      pvVar4 = _malloc(2);
      *(void **)(PTR_PTR_1009f040 + 4) = pvVar4;
      if (*(undefined1 **)(PTR_PTR_1009f040 + 4) != (undefined1 *)0x0) {
        **(undefined1 **)(PTR_PTR_1009f040 + 4) = 0;
        pvVar4 = _malloc(2);
        *(void **)(PTR_PTR_1009f040 + 8) = pvVar4;
        if (*(undefined1 **)(PTR_PTR_1009f040 + 8) != (undefined1 *)0x0) {
          **(undefined1 **)(PTR_PTR_1009f040 + 8) = 0;
          DAT_1009bbc8 = **(undefined1 **)PTR_PTR_1009f040;
          _DAT_1009bbcc = 1;
          return 0;
        }
      }
    }
  }
  else {
    iVar1 = FUN_1007e3bc(1,uVar5,0xe,(char *)&DAT_102e0358);
    iVar2 = FUN_1007e3bc(1,uVar5,0xf,(char *)&DAT_102e035c);
    iVar3 = FUN_1007e3bc(1,uVar5,0x10,(char *)&DAT_102e0360);
    FUN_1007a690(DAT_102e0360);
    if ((iVar1 == 0 && iVar2 == 0) && iVar3 == 0) {
      if (*(undefined **)PTR_PTR_1009f040 != &DAT_1009f008) {
        FUN_1006f7f9(*(undefined **)PTR_PTR_1009f040);
        FUN_1006f7f9(*(undefined **)(PTR_PTR_1009f040 + 4));
        FUN_1006f7f9(*(undefined **)(PTR_PTR_1009f040 + 8));
      }
      *(undefined **)PTR_PTR_1009f040 = DAT_102e0358;
      *(undefined **)(PTR_PTR_1009f040 + 4) = DAT_102e035c;
      *(char **)(PTR_PTR_1009f040 + 8) = DAT_102e0360;
      DAT_1009bbc8 = **(undefined1 **)PTR_PTR_1009f040;
      _DAT_1009bbcc = 1;
      return 0;
    }
    FUN_1006f7f9(DAT_102e0358);
    FUN_1006f7f9(DAT_102e035c);
    FUN_1006f7f9(DAT_102e0360);
    DAT_102e0358 = (undefined *)0x0;
    DAT_102e035c = (undefined *)0x0;
    DAT_102e0360 = (char *)0x0;
  }
  return 0xffffffff;
}

/* 1007a690  FUN_1007a690  (55 bytes)
 * undefined FUN_1007a690(char * param_1)
 * called by: FUN_1007a4bb
 */
void __cdecl FUN_1007a690(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *param_1;
  do {
    if (cVar2 == '\0') {
      return;
    }
    if ((cVar2 < '0') || ('9' < cVar2)) {
      pcVar3 = param_1;
      if (cVar2 != ';') goto LAB_1007a6a7;
      do {
        pcVar1 = pcVar3 + 1;
        *pcVar3 = pcVar3[1];
        pcVar3 = pcVar1;
      } while (*pcVar1 != '\0');
    }
    else {
      *param_1 = cVar2 + -0x30;
LAB_1007a6a7:
      param_1 = param_1 + 1;
    }
    cVar2 = *param_1;
  } while( true );
}

/* 1007a6c7  FUN_1007a6c7  (203 bytes)
 * undefined FUN_1007a6c7()
 */
undefined4 FUN_1007a6c7(void)

{
  int *piVar1;
  uint uVar2;
  
  if (DAT_102e0218 == 0) {
    PTR_DAT_1009f010 = *(undefined **)PTR_PTR_1009f040;
    PTR_DAT_1009f014 = *(undefined **)(PTR_PTR_1009f040 + 4);
    PTR_DAT_1009f018 = *(undefined **)(PTR_PTR_1009f040 + 8);
    PTR_PTR_1009f040 = (undefined *)&PTR_DAT_1009f010;
    FUN_1007a8eb((int)DAT_102e0364);
    FUN_1006f7f9((undefined *)DAT_102e0364);
    DAT_102e0364 = (int *)0x0;
    return 0;
  }
  piVar1 = FUN_1006f6bc(1,0x30);
  if (piVar1 != (int *)0x0) {
    uVar2 = FUN_1007a792((int)piVar1);
    if (uVar2 == 0) {
      *piVar1 = *(int *)PTR_PTR_1009f040;
      piVar1[1] = *(int *)(PTR_PTR_1009f040 + 4);
      piVar1[2] = *(int *)(PTR_PTR_1009f040 + 8);
      PTR_PTR_1009f040 = (undefined *)piVar1;
      FUN_1007a8eb((int)DAT_102e0364);
      FUN_1006f7f9((undefined *)DAT_102e0364);
      DAT_102e0364 = piVar1;
      return 0;
    }
    FUN_1007a8eb((int)piVar1);
    FUN_1006f7f9((undefined *)piVar1);
  }
  return 1;
}

/* 1007a792  FUN_1007a792  (290 bytes)
 * uint FUN_1007a792(int param_1)
 * called by: FUN_1007a6c7
 */
uint __cdecl FUN_1007a792(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar15 = (uint)DAT_102e0384;
  if (param_1 == 0) {
    uVar15 = 0xffffffff;
  }
  else {
    uVar1 = FUN_1007e3bc(1,uVar15,0x15,(char *)(param_1 + 0xc));
    uVar2 = FUN_1007e3bc(1,uVar15,0x14,(char *)(param_1 + 0x10));
    uVar3 = FUN_1007e3bc(1,uVar15,0x16,(char *)(param_1 + 0x14));
    uVar4 = FUN_1007e3bc(1,uVar15,0x17,(char *)(param_1 + 0x18));
    uVar5 = FUN_1007e3bc(1,uVar15,0x18,(char *)(param_1 + 0x1c));
    FUN_1007a8b4(*(char **)(param_1 + 0x1c));
    uVar6 = FUN_1007e3bc(1,uVar15,0x50,(char *)(param_1 + 0x20));
    uVar7 = FUN_1007e3bc(1,uVar15,0x51,(char *)(param_1 + 0x24));
    uVar8 = FUN_1007e3bc(0,uVar15,0x1a,(char *)(param_1 + 0x28));
    uVar9 = FUN_1007e3bc(0,uVar15,0x19,(char *)(param_1 + 0x29));
    uVar10 = FUN_1007e3bc(0,uVar15,0x54,(char *)(param_1 + 0x2a));
    uVar11 = FUN_1007e3bc(0,uVar15,0x55,(char *)(param_1 + 0x2b));
    uVar12 = FUN_1007e3bc(0,uVar15,0x56,(char *)(param_1 + 0x2c));
    uVar13 = FUN_1007e3bc(0,uVar15,0x57,(char *)(param_1 + 0x2d));
    uVar14 = FUN_1007e3bc(0,uVar15,0x52,(char *)(param_1 + 0x2e));
    uVar15 = FUN_1007e3bc(0,uVar15,0x53,(char *)(param_1 + 0x2f));
    uVar15 = uVar15 | uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10
                      | uVar11 | uVar12 | uVar13 | uVar14;
  }
  return uVar15;
}

/* 1007a8b4  FUN_1007a8b4  (55 bytes)
 * undefined FUN_1007a8b4(char * param_1)
 * called by: FUN_1007a792
 */
void __cdecl FUN_1007a8b4(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *param_1;
  do {
    if (cVar2 == '\0') {
      return;
    }
    if ((cVar2 < '0') || ('9' < cVar2)) {
      pcVar3 = param_1;
      if (cVar2 != ';') goto LAB_1007a8cb;
      do {
        pcVar1 = pcVar3 + 1;
        *pcVar3 = pcVar3[1];
        pcVar3 = pcVar1;
      } while (*pcVar1 != '\0');
    }
    else {
      *param_1 = cVar2 + -0x30;
LAB_1007a8cb:
      param_1 = param_1 + 1;
    }
    cVar2 = *param_1;
  } while( true );
}

/* 1007a8eb  FUN_1007a8eb  (78 bytes)
 * undefined FUN_1007a8eb(int param_1)
 * called by: FUN_1007a6c7
 */
void __cdecl FUN_1007a8eb(int param_1)

{
  if ((param_1 != 0) && (*(undefined **)(param_1 + 0xc) != &DAT_102e03e8)) {
    FUN_1006f7f9(*(undefined **)(param_1 + 0xc));
    FUN_1006f7f9(*(undefined **)(param_1 + 0x10));
    FUN_1006f7f9(*(undefined **)(param_1 + 0x14));
    FUN_1006f7f9(*(undefined **)(param_1 + 0x18));
    FUN_1006f7f9(*(undefined **)(param_1 + 0x1c));
    FUN_1006f7f9(*(undefined **)(param_1 + 0x20));
    FUN_1006f7f9(*(undefined **)(param_1 + 0x24));
  }
  return;
}

