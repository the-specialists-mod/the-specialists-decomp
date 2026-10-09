/* ts_i386.so - CGameCounterSet (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000cd418  CGameCounterSet::Use  (87 bytes)
 * undefined Use(CRuleEntity * param_1, undefined4 param_2)
 */
/* CGameCounterSet::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CGameCounterSet::Use(CRuleEntity *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = CRuleEntity::CanFireForActivator(param_1,param_2);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    CBaseEntity::SUB_UseTargets((CBaseEntity *)param_1,param_2,2,param_1->pev->frags);
    if ((param_1->pev->spawnflags & 1) != 0) {
      UTIL_Remove((int *)param_1);
    }
  }
  return;
}

/* 000ce56c  CGameCounterSet::RemoveOnFire  (22 bytes)
 * bool RemoveOnFire(void)
 */
/* CGameCounterSet::RemoveOnFire(void) */

bool __thiscall CGameCounterSet::RemoveOnFire(CGameCounterSet *this)

{
  return (this->pev->spawnflags & 1) != 0;
}

