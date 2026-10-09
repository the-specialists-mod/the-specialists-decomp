/* ts_i386.so - CGamePlayerTeam (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000cd764  CGamePlayerTeam::TargetTeamName  (113 bytes)
 * undefined4 TargetTeamName(undefined4 this, undefined4 param_2)
 */
/* CGamePlayerTeam::TargetTeamName(char const *) */

undefined4 __thiscall CGamePlayerTeam::TargetTeamName(undefined4 this,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = (int *)0x0;
  do {
    piVar3 = (int *)UTIL_FindEntityByTargetname(piVar3,param_2);
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    iVar1 = strcmp(gpGlobals->pStringBase + *(int *)*piVar3,"game_team_master");
  } while (iVar1 != 0);
  uVar2 = (**(code **)(piVar3[0x18] + 0xd0))(piVar3);
  return uVar2;
}

/* 000cd7d8  CGamePlayerTeam::Use  (197 bytes)
 * undefined Use(CRuleEntity * param_1, int param_2)
 */
/* CGamePlayerTeam::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CGamePlayerTeam::Use(CRuleEntity *param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  
  bVar2 = CRuleEntity::CanFireForActivator(param_1,param_2);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    iVar3 = (**(code **)(*(int *)(param_2 + 0x60) + 200))(param_2);
    if (iVar3 != 0) {
      iVar3 = TargetTeamName(param_1,gpGlobals->pStringBase + param_1->pev->target);
      if (iVar3 != 0) {
        uVar1 = param_1->pev->spawnflags;
        (**(code **)(*g_pGameRules + 0xdc))
                  (g_pGameRules,param_2,iVar3,uVar1 >> 1 & 1,uVar1 >> 2 & 1);
      }
    }
    if ((param_1->pev->spawnflags & 1) != 0) {
      UTIL_Remove((int *)param_1);
    }
  }
  return;
}

/* 000ce62c  CGamePlayerTeam::RemoveOnFire  (22 bytes)
 * bool RemoveOnFire(void)
 */
/* CGamePlayerTeam::RemoveOnFire(void) */

bool __thiscall CGamePlayerTeam::RemoveOnFire(CGamePlayerTeam *this)

{
  return (this->pev->spawnflags & 1) != 0;
}

/* 000ce644  CGamePlayerTeam::ShouldKillPlayer  (18 bytes)
 * uint ShouldKillPlayer(void)
 */
/* CGamePlayerTeam::ShouldKillPlayer(void) */

uint __thiscall CGamePlayerTeam::ShouldKillPlayer(CGamePlayerTeam *this)

{
  return (uint)this->pev->spawnflags >> 1 & 1;
}

/* 000ce658  CGamePlayerTeam::ShouldGibPlayer  (19 bytes)
 * uint ShouldGibPlayer(void)
 */
/* CGamePlayerTeam::ShouldGibPlayer(void) */

uint __thiscall CGamePlayerTeam::ShouldGibPlayer(CGamePlayerTeam *this)

{
  return (uint)this->pev->spawnflags >> 2 & 1;
}

