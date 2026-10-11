/* mp.dll - CGameRules (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10026aa0  CGameRules::RefreshSkillData  (56 bytes)
 * undefined RefreshSkillData(void)
 * called by: FUN_1002bb20, FUN_1003abc0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CGameRules::RefreshSkillData(void)

{
  longlong lVar1;
  
  (*g_engfuncs.pfnCVarGetFloat)(s_skill_1009f40c);
  lVar1 = __ftol();
  _DAT_100b3738 = (int)lVar1;
  DAT_100ae4b0 = _DAT_100b3738;
  if (_DAT_100b3738 < 1) {
    _DAT_100b3738 = 1;
    return;
  }
  if (3 < _DAT_100b3738) {
    _DAT_100b3738 = 3;
  }
  return;
}

/* 1003ad20  CGameRules::GetGameDescription  (6 bytes)
 * undefined GetGameDescription()
 */
char * CGameRules::GetGameDescription(void)

{
  return s_The_Specialists_100a14bc;
}

