/* mp.dll - CGamePlayerEquip (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10022c40  CGamePlayerEquip::KeyValue  (146 bytes)
 * undefined KeyValue()
 */
void __thiscall CGamePlayerEquip::KeyValue(CRuleEntity *param_1,int param_2)

{
  CRuleEntity *pCVar1;
  int iVar2;
  void *this;
  int iVar3;
  char acStack_80 [128];
  
  CRuleEntity::KeyValue(param_1,param_2);
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar3 = 0;
    pCVar1 = param_1 + 0x58;
    while (*(int *)pCVar1 != 0) {
      iVar3 = iVar3 + 1;
      pCVar1 = pCVar1 + 4;
      if (0x1f < iVar3) {
        return;
      }
    }
    FUN_100688f0(*(char **)(param_2 + 4),acStack_80);
    iVar2 = (*g_engfuncs.pfnAllocString)(acStack_80);
    *(int *)(param_1 + iVar3 * 4 + 0x58) = iVar2;
    iVar2 = FUN_1006e1dd(this,*(byte_conflict **)(param_2 + 8));
    *(int *)(param_1 + iVar3 * 4 + 0xd8) = iVar2;
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    *(int *)(param_1 + iVar3 * 4 + 0xd8) = iVar2;
    *(undefined4 *)(param_2 + 0xc) = 1;
  }
  return;
}

/* 10022ce0  CGamePlayerEquip::Touch  (43 bytes)
 * undefined Touch()
 */
void __thiscall CGamePlayerEquip::Touch(CRuleEntity *param_1,int *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = CRuleEntity::CanFireForActivator(param_1,param_2);
  if ((CONCAT31(extraout_var,bVar1) != 0) && ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 1) == 0))
  {
    FUN_10022d10(param_1,param_2);
  }
  return;
}

/* 10022d70  CGamePlayerEquip::Use  (13 bytes)
 * undefined Use()
 */
void __thiscall CGamePlayerEquip::Use(void *param_1,int *param_2)

{
  FUN_10022d10(param_1,param_2);
  return;
}

