/* ts_i386.so - CRulePointEntity (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000cc42c  CRulePointEntity::Spawn  (60 bytes)
 * undefined Spawn(void)
 */
/* CRulePointEntity::Spawn(void) */

void __thiscall CRulePointEntity::Spawn(CRulePointEntity *this)

{
  CRuleEntity::Spawn((CRuleEntity *)this);
  this->pev->frame = 0.0;
  this->pev->model = 0;
  return;
}

