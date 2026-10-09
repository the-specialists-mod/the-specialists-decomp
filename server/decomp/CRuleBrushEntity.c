/* ts_i386.so - CRuleBrushEntity (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000cc468  CRuleBrushEntity::Spawn  (76 bytes)
 * undefined Spawn(void)
 */
/* CRuleBrushEntity::Spawn(void) */

void __thiscall CRuleBrushEntity::Spawn(CRuleBrushEntity *this)

{
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  CRuleEntity::Spawn((CRuleEntity *)this);
  return;
}

