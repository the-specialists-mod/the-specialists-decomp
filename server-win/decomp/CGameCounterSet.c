/* mp.dll - CGameCounterSet (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1002ad60  CGameCounterSet::Use  (64 bytes)
 * undefined Use()
 */
void __thiscall CGameCounterSet::Use(CRuleEntity *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = CRuleEntity::CanFireForActivator(param_1,param_2);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    CBaseEntity::SUB_UseTargets
              ((CBaseEntity *)param_1,param_2,2,*(undefined4 *)(*(int *)(param_1 + 4) + 0x164));
    if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 1) != 0) {
      UTIL_Remove((int *)param_1);
    }
  }
  return;
}

