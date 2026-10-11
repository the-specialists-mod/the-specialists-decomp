/* mp.dll - CFuncIllusionary (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10009140  CFuncIllusionary::KeyValue  (122 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CFuncIllusionary::KeyValue(CFuncIllusionary *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  CFuncIllusionary *pCVar4;
  byte *pbVar6;
  bool bVar7;
  longlong lVar8;
  undefined3 uVar5;
  
  pbVar6 = &DAT_1009bf68;
  pbVar2 = *(byte **)(param_1 + 4);
  pCVar4 = this;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)pCVar4 >> 8);
    pCVar4 = (CFuncIllusionary *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_1000917a:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_1000917f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    pCVar4 = (CFuncIllusionary *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_1000917a;
    pbVar2 = pbVar2 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1000917f:
  if (iVar3 == 0) {
    atof((undefined *)pCVar4,*(byte_conflict **)(param_1 + 8));
    lVar8 = __ftol();
    this->pev->skin = (int)lVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CBaseToggle::KeyValue((CBaseToggle *)this,param_1);
  return;
}

/* 100091c0  CFuncIllusionary::Spawn  (91 bytes)
 * undefined Spawn()
 */
void __fastcall CFuncIllusionary::Spawn(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x50) = DAT_100ae498;
  *(undefined4 *)(iVar1 + 0x54) = DAT_100ae49c;
  *(undefined4 *)(iVar1 + 0x58) = DAT_100ae4a0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  return;
}

