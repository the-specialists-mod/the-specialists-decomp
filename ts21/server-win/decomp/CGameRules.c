/* mp.dll - CGameRules (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1001eb60  CGameRules::RefreshSkillData  (56 bytes)
 * undefined RefreshSkillData(void)
 * called by: FUN_100239c0, FUN_100343a0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CGameRules::RefreshSkillData(void)

{
  longlong lVar1;
  
  (*g_engfuncs.pfnCVarGetFloat)(s_skill_100940ec);
  lVar1 = __ftol();
  _DAT_100a1f40 = (int)lVar1;
  DAT_1009f4c0 = _DAT_100a1f40;
  if (_DAT_100a1f40 < 1) {
    _DAT_100a1f40 = 1;
    return;
  }
  if (3 < _DAT_100a1f40) {
    _DAT_100a1f40 = 3;
  }
  return;
}

