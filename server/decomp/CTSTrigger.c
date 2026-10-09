/* ts_i386.so - CTSTrigger (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 00070890  CTSTrigger::KeyValue  (291 bytes)
 * undefined KeyValue(int param_1)
 */
/* CTSTrigger::KeyValue(KeyValueData_s *) */

void __thiscall CTSTrigger::KeyValue(CTSTrigger *this,int param_1)

{
  int iVar1;
  longdouble lVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"nextcheck");
  if (iVar1 == 0) {
    lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
    *(float *)&this->field_0x10c = (float)lVar2;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"attackerteam");
    if (iVar1 == 0) {
      lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
      *(int *)&this->field_0x108 = (int)ROUND(lVar2);
    }
    else {
      iVar1 = strcmp(*(char **)(param_1 + 4),"allowedteam");
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0xc) = 0;
        return;
      }
      lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
      *(int *)&this->field_0x108 = (int)ROUND(lVar2);
      if ((int)ROUND(lVar2) == 2) {
        *(undefined4 *)&this->field_0x108 = 0xffffffff;
      }
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}

/* 000709b8  CTSTrigger::Spawn  (286 bytes)
 * undefined Spawn(void)
 */
/* CTSTrigger::Spawn(void) */

void __thiscall CTSTrigger::Spawn(CTSTrigger *this)

{
  int *piVar1;
  float fVar2;
  
  this->pev->classname = (int)"ts_trigger" - (int)gpGlobals->pStringBase;
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  UTIL_SetSize((int)this->pev,this->pev->mins,this->pev->maxs);
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  piVar1 = &this->pev->effects;
  *piVar1 = *piVar1 | 0x80;
  this->pev->solid = 1;
  this->pev->movetype = 5;
  *(undefined4 *)&this->field_0x14 = 0xffff0000;
  *(code **)&this->field_0x18 = WaitTouch;
  *(undefined4 *)&this->field_0xc = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  fVar2 = *(float *)&this->field_0x10c;
  if (fVar2 < 0.5) {
    fVar2 = 0.5;
  }
  this->pev->nextthink = fVar2 + gpGlobals->time;
  fVar2 = *(float *)&this->field_0x10c;
  if (fVar2 < 0.5) {
    fVar2 = 0.5;
  }
  *(float *)&this->field_0x104 = fVar2 + gpGlobals->time;
  return;
}

/* 00070ad8  CTSTrigger::WaitTouch  (398 bytes)
 * undefined WaitTouch(int * param_1)
 */
/* CTSTrigger::WaitTouch(CBaseEntity *) */

void __thiscall CTSTrigger::WaitTouch(CTSTrigger *this,int *param_1)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  char local_8c [124];
  
  if (gpGlobals->time < *(float *)&this->field_0x104) {
    return;
  }
  iVar4 = (**(code **)(param_1[0x18] + 200))(param_1);
  if (iVar4 == 0) {
    return;
  }
  iVar4 = (**(code **)(param_1[0x18] + 0xb4))(param_1);
  if (iVar4 == 0) {
    return;
  }
  bVar2 = false;
  if (*(int *)&this->field_0x108 != -1) {
    pcVar5 = (char *)(**(code **)(param_1[0x18] + 0xd0))(param_1);
    iVar4 = CTSGameRules::GetTeamIndex((CTSGameRules *)&TSGameRules,pcVar5);
    if (*(int *)&this->field_0x108 != iVar4) goto LAB_00070b81;
  }
  bVar2 = true;
LAB_00070b81:
  if (((this->pev->spawnflags & 8) != 0) && (cVar3 = HaveFlag((int)param_1), cVar3 == '\0')) {
    return;
  }
  if ((bVar2) && (this->pev->target != 0)) {
    FireTargets((int)(gpGlobals->pStringBase + this->pev->target),this,this,3,0);
  }
  if (this->pev->message != 0) {
    sprintf(local_8c,gpGlobals->pStringBase + this->pev->message,
            gpGlobals->pStringBase + *(int *)(*param_1 + 0x1d0));
    TSHudMessageAll(0,0xff,0,8,0x1e,local_8c);
  }
  fVar1 = *(float *)&this->field_0x10c;
  if (fVar1 < 0.5) {
    fVar1 = 0.5;
  }
  *(float *)&this->field_0x104 = fVar1 + gpGlobals->time;
  return;
}

/* 00070c68  CTSTrigger::WaitThink  (70 bytes)
 * undefined WaitThink(void)
 */
/* CTSTrigger::WaitThink(void) */

void __thiscall CTSTrigger::WaitThink(CTSTrigger *this)

{
  float fVar1;
  
  fVar1 = *(float *)&this->field_0x10c;
  if (fVar1 < 0.5) {
    fVar1 = 0.5;
  }
  this->pev->nextthink = fVar1 + gpGlobals->time;
  return;
}

/* 00073ad0  CTSTrigger::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CTSTrigger::ObjectCaps(void) */

undefined4 CTSTrigger::ObjectCaps(void)

{
  return 0;
}

