/* ts_i386.so - CGameTeamSet (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000ccd64  CGameTeamSet::Use  (99 bytes)
 * undefined Use(CRuleEntity * param_1, undefined4 param_2)
 */
/* CGameTeamSet::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CGameTeamSet::Use(CRuleEntity *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  
  bVar1 = CRuleEntity::CanFireForActivator(param_1,param_2);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    if ((param_1->pev->spawnflags & 2) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xbf800000;
    }
    CBaseEntity::SUB_UseTargets((CBaseEntity *)param_1,param_2,2,uVar2);
    if ((param_1->pev->spawnflags & 1) != 0) {
      UTIL_Remove((int *)param_1);
    }
  }
  return;
}

/* 000ce284  CGameTeamSet::RemoveOnFire  (22 bytes)
 * bool RemoveOnFire(void)
 */
/* CGameTeamSet::RemoveOnFire(void) */

bool __thiscall CGameTeamSet::RemoveOnFire(CGameTeamSet *this)

{
  return (this->pev->spawnflags & 1) != 0;
}

/* 000ce29c  CGameTeamSet::ShouldClearTeam  (18 bytes)
 * uint ShouldClearTeam(void)
 */
/* CGameTeamSet::ShouldClearTeam(void) */

uint __thiscall CGameTeamSet::ShouldClearTeam(CGameTeamSet *this)

{
  return (uint)this->pev->spawnflags >> 1 & 1;
}

