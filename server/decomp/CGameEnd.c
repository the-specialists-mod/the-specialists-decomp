/* ts_i386.so - CGameEnd (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000cc668  CGameEnd::Use  (67 bytes)
 * undefined Use(CRuleEntity * param_1, undefined4 param_2)
 */
/* CGameEnd::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CGameEnd::Use(CRuleEntity *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = CRuleEntity::CanFireForActivator(param_1,param_2);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    (**(code **)(*g_pGameRules + 0xf0))(g_pGameRules);
  }
  return;
}

