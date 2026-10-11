/* mp.dll - CGameEnd (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1002a100  CGameEnd::Use  (31 bytes)
 * undefined Use()
 */
void __thiscall CGameEnd::Use(CRuleEntity *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = CRuleEntity::CanFireForActivator(param_1,param_2);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    (**(code **)(*g_pGameRules + 0xe8))();
  }
  return;
}

