/* mp.dll - CGameTeamSet (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1002a7f0  CGameTeamSet::Use  (75 bytes)
 * undefined Use()
 */
void __thiscall CGameTeamSet::Use(CRuleEntity *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  
  bVar1 = CRuleEntity::CanFireForActivator(param_1,param_2);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 2) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xbf800000;
    }
    CBaseEntity::SUB_UseTargets((CBaseEntity *)param_1,param_2,2,uVar2);
    if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 1) != 0) {
      UTIL_Remove((int *)param_1);
    }
  }
  return;
}

