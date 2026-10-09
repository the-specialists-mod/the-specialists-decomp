/* ts_i386.so - CGameTeamMaster (8 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000ccae8  CGameTeamMaster::KeyValue  (174 bytes)
 * undefined KeyValue(int param_1)
 */
/* CGameTeamMaster::KeyValue(KeyValueData_s *) */

void __thiscall CGameTeamMaster::KeyValue(CGameTeamMaster *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"teamindex");
  if (iVar1 == 0) {
    uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
    *(undefined4 *)&this->field_0x68 = uVar2;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"triggerstate");
    if (iVar1 != 0) {
      CRuleEntity::KeyValue((CRuleEntity *)this,param_1);
      return;
    }
    iVar1 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
    if (iVar1 == 0) {
      *(undefined4 *)&this->field_0x6c = 0;
    }
    else if (iVar1 == 2) {
      *(undefined4 *)&this->field_0x6c = 3;
    }
    else {
      *(undefined4 *)&this->field_0x6c = 1;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}

/* 000ccba8  CGameTeamMaster::Use  (194 bytes)
 * undefined Use(int param_1, undefined4 param_2, int param_3, float param_4)
 */
/* CGameTeamMaster::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void __thiscall
CGameTeamMaster::Use(CGameTeamMaster *this,int param_1,undefined4 param_2,int param_3,float param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  int iVar3;
  
  bVar1 = CRuleEntity::CanFireForActivator((CRuleEntity *)this,param_1);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    if (param_3 == 2) {
      if (param_4 < 0.0) {
        *(undefined4 *)&this->field_0x68 = 0xffffffff;
      }
      else {
        iVar3 = *g_pGameRules;
        uVar2 = (**(code **)(*(int *)(param_1 + 0x60) + 0xd0))(param_1);
        uVar2 = (**(code **)(iVar3 + 0xd0))(g_pGameRules,uVar2);
        *(undefined4 *)&this->field_0x68 = uVar2;
      }
    }
    else {
      iVar3 = TeamMatch(this,param_1);
      if ((iVar3 != 0) &&
         (CBaseEntity::SUB_UseTargets
                    ((CBaseEntity *)this,param_1,*(undefined4 *)&this->field_0x6c,param_4),
         (this->pev->spawnflags & 1) != 0)) {
        UTIL_Remove((int *)this);
      }
    }
  }
  return;
}

/* 000ccc6c  CGameTeamMaster::IsTriggered  (37 bytes)
 * undefined IsTriggered(int param_1)
 */
/* CGameTeamMaster::IsTriggered(CBaseEntity *) */

void __thiscall CGameTeamMaster::IsTriggered(CGameTeamMaster *this,int param_1)

{
  TeamMatch(this,param_1);
  return;
}

/* 000ccc94  CGameTeamMaster::TeamID  (63 bytes)
 * undefined1 * TeamID(void)
 */
/* CGameTeamMaster::TeamID(void) */

undefined1 * __thiscall CGameTeamMaster::TeamID(CGameTeamMaster *this)

{
  undefined1 *puVar1;
  
  puVar1 = &DAT_00106657;
  if (-1 < *(int *)&this->field_0x68) {
    puVar1 = (undefined1 *)
             (**(code **)(*g_pGameRules + 0xd4))(g_pGameRules,*(undefined4 *)&this->field_0x68);
  }
  return puVar1;
}

/* 000cccd4  CGameTeamMaster::TeamMatch  (102 bytes)
 * undefined4 TeamMatch(int param_1)
 */
/* CGameTeamMaster::TeamMatch(CBaseEntity *) */

undefined4 __thiscall CGameTeamMaster::TeamMatch(CGameTeamMaster *this,int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  char *pcVar3;
  
  if ((*(int *)&this->field_0x68 < 0) && ((this->pev->spawnflags & 2) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    if (param_1 != 0) {
      pcVar2 = (char *)(*this->vtable[0x34])(this);
      pcVar3 = (char *)(**(code **)(*(int *)(param_1 + 0x60) + 0xd0))(param_1);
      uVar1 = UTIL_TeamsMatch(pcVar3,pcVar2);
    }
  }
  return uVar1;
}

/* 000ce208  CGameTeamMaster::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CGameTeamMaster::ObjectCaps(void) */

undefined4 CGameTeamMaster::ObjectCaps(void)

{
  return 0x82;
}

/* 000ce210  CGameTeamMaster::RemoveOnFire  (22 bytes)
 * bool RemoveOnFire(void)
 */
/* CGameTeamMaster::RemoveOnFire(void) */

bool __thiscall CGameTeamMaster::RemoveOnFire(CGameTeamMaster *this)

{
  return (this->pev->spawnflags & 1) != 0;
}

/* 000ce228  CGameTeamMaster::AnyTeam  (18 bytes)
 * uint AnyTeam(void)
 */
/* CGameTeamMaster::AnyTeam(void) */

uint __thiscall CGameTeamMaster::AnyTeam(CGameTeamMaster *this)

{
  return (uint)this->pev->spawnflags >> 1 & 1;
}

