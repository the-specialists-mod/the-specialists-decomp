/* ts_i386.so - CBaseTrigger (10 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000e67ec  CBaseTrigger::InitTrigger  (207 bytes)
 * undefined InitTrigger(void)
 */
/* CBaseTrigger::InitTrigger(void) */

void __thiscall CBaseTrigger::InitTrigger(CBaseTrigger *this)

{
  int *piVar1;
  entvars_t *peVar2;
  bool bVar3;
  longdouble lVar4;
  
  peVar2 = this->pev;
  bVar3 = false;
  if (((peVar2->angles[0] == g_vecZero) && (peVar2->angles[1] == DAT_00190ef0)) &&
     (peVar2->angles[2] == DAT_00190ef4)) {
    bVar3 = true;
  }
  if (!bVar3) {
    SetMovedir((int)this->pev);
  }
  this->pev->solid = 1;
  this->pev->movetype = 0;
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  lVar4 = (longdouble)(*g_engfuncs.pfnCVarGetFloat)("showtriggers");
  if (lVar4 == (longdouble)0.0) {
    piVar1 = &this->pev->effects;
    *piVar1 = *piVar1 | 0x80;
  }
  return;
}

/* 000e68bc  CBaseTrigger::KeyValue  (257 bytes)
 * undefined KeyValue(int param_1)
 */
/* CBaseTrigger::KeyValue(KeyValueData_s *) */

void __thiscall CBaseTrigger::KeyValue(CBaseTrigger *this,int param_1)

{
  entvars_t *peVar1;
  int iVar2;
  undefined4 uVar3;
  longdouble lVar4;
  
  iVar2 = strcmp(*(char **)(param_1 + 4),"damage");
  if (iVar2 == 0) {
    peVar1 = this->pev;
    lVar4 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
    peVar1->dmg = (float)lVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar2 = strcmp(*(char **)(param_1 + 4),"count");
    if (iVar2 == 0) {
      lVar4 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
      *(int *)&this->field_0xcc = (int)ROUND(lVar4);
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      iVar2 = strcmp(*(char **)(param_1 + 4),"damagetype");
      if (iVar2 == 0) {
        uVar3 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
        *(undefined4 *)&this->field_0xfc = uVar3;
        *(undefined4 *)(param_1 + 0xc) = 1;
      }
      else {
        CBaseToggle::KeyValue((CBaseToggle *)this,param_1);
      }
    }
  }
  return;
}

/* 000e7368  CBaseTrigger::ToggleUse  (96 bytes)
 * undefined ToggleUse(int * param_1)
 */
/* CBaseTrigger::ToggleUse(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CBaseTrigger::ToggleUse(int *param_1)

{
  if (*(int *)(*param_1 + 0x10c) == 0) {
    *(undefined4 *)(*param_1 + 0x10c) = 1;
    gpGlobals->force_retouch = gpGlobals->force_retouch + 1.0;
  }
  else {
    *(undefined4 *)(*param_1 + 0x10c) = 0;
  }
  UTIL_SetOrigin(*param_1,*param_1 + 8);
  return;
}

/* 000e73cc  CBaseTrigger::HurtTouch  (619 bytes)
 * undefined HurtTouch(int * param_1)
 */
/* CBaseTrigger::HurtTouch(CBaseEntity *) */

void __thiscall CBaseTrigger::HurtTouch(CBaseTrigger *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  
  if (*(float *)(*param_1 + 0x16c) == 0.0) {
    return;
  }
  if (((this->pev->spawnflags & 0x20) != 0) &&
     (iVar4 = (**(code **)(param_1[0x18] + 200))(param_1), iVar4 == 0)) {
    return;
  }
  if (((this->pev->spawnflags & 8) != 0) &&
     (iVar4 = (**(code **)(param_1[0x18] + 200))(param_1), iVar4 != 0)) {
    return;
  }
  iVar4 = (**(code **)(*g_pGameRules + 0x1c))(g_pGameRules);
  if (iVar4 == 0) {
    if ((gpGlobals->time < this->pev->dmgtime) && (gpGlobals->time != this->pev->pain_finished)) {
      return;
    }
  }
  else if (this->pev->dmgtime <= gpGlobals->time) {
    this->pev->impulse = 0;
    iVar4 = (**(code **)(param_1[0x18] + 200))(param_1);
    if (iVar4 != 0) {
      iVar4 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*param_1 + 0x208));
      piVar1 = &this->pev->impulse;
      *piVar1 = *piVar1 | 1 << ((char)iVar4 - 1U & 0x1f);
    }
  }
  else if (gpGlobals->time != this->pev->pain_finished) {
    iVar4 = (**(code **)(param_1[0x18] + 200))(param_1);
    if (iVar4 == 0) {
      return;
    }
    iVar4 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*param_1 + 0x208));
    uVar5 = 1 << ((char)iVar4 - 1U & 0x1f);
    uVar2 = this->pev->impulse;
    if ((uVar2 & uVar5) != 0) {
      return;
    }
    this->pev->impulse = uVar2 | uVar5;
  }
  fVar3 = this->pev->dmg * 0.5;
  if (0.0 <= fVar3) {
    (**(code **)(param_1[0x18] + 0x58))
              (param_1,this->pev,this->pev,fVar3,*(undefined4 *)&this->field_0xfc);
  }
  else {
    (**(code **)(param_1[0x18] + 0x5c))(param_1,-fVar3,*(undefined4 *)&this->field_0xfc);
  }
  this->pev->pain_finished = gpGlobals->time;
  this->pev->dmgtime = gpGlobals->time + 0.5;
  if (this->pev->target != 0) {
    if (((this->pev->spawnflags & 0x10) != 0) &&
       (iVar4 = (**(code **)(param_1[0x18] + 200))(param_1), iVar4 == 0)) {
      return;
    }
    CBaseDelay::SUB_UseTargets((CBaseDelay *)this,param_1,3,0);
    if ((this->pev->spawnflags & 1) != 0) {
      this->pev->target = 0;
    }
  }
  return;
}

/* 000e7708  CBaseTrigger::MultiTouch  (132 bytes)
 * undefined MultiTouch(int * param_1)
 */
/* CBaseTrigger::MultiTouch(CBaseEntity *) */

void __thiscall CBaseTrigger::MultiTouch(CBaseTrigger *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  if ((((*(byte *)(piVar1 + 0x69) & 8) == 0) || ((this->pev->spawnflags & 2) != 0)) &&
     (((*(byte *)(piVar1 + 0x69) & 0x20) == 0 || ((this->pev->spawnflags & 1) == 0)))) {
    if ((this->pev->spawnflags & 4) == 0) {
      return;
    }
    iVar2 = strcmp(gpGlobals->pStringBase + *piVar1,"func_pushable");
    if (iVar2 != 0) {
      return;
    }
  }
  ActivateMultiTrigger(this,param_1);
  return;
}

/* 000e778c  CBaseTrigger::ActivateMultiTrigger  (527 bytes)
 * undefined ActivateMultiTrigger(int * param_1)
 */
/* CBaseTrigger::ActivateMultiTrigger(CBaseEntity *) */

void __thiscall CBaseTrigger::ActivateMultiTrigger(CBaseTrigger *this,int *param_1)

{
  edict_t *peVar1;
  globalvars_t *pgVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((this->pev->nextthink <= gpGlobals->time) &&
     (iVar3 = UTIL_IsMasterTriggered(*(int *)&this->field_0x100,param_1), pgVar2 = gpGlobals,
     iVar3 != 0)) {
    iVar3 = strcmp(gpGlobals->pStringBase + this->pev->classname,"trigger_secret");
    if (iVar3 == 0) {
      if (this->pev->enemy == (edict_t *)0x0) {
        return;
      }
      peVar1 = this->pev->enemy;
      iVar3 = strcmp(pgVar2->pStringBase +
                     *(int *)((uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1),"player");
      if (iVar3 != 0) {
        return;
      }
      pgVar2->found_secrets = pgVar2->found_secrets + 1.0;
    }
    iVar3 = this->pev->noise;
    if (iVar3 != 0) {
      EMIT_SOUND_DYN((int)this->pev->pContainingEntity,2,gpGlobals->pStringBase + iVar3,0x3f800000,
                     0x3f4ccccd,0,100,0.5);
    }
    EHANDLE::operator=((EHANDLE *)&this->field_0xd4,param_1);
    uVar6 = 0;
    uVar5 = 3;
    piVar4 = (int *)_((EHANDLE *)&this->field_0xd4);
    CBaseDelay::SUB_UseTargets((CBaseDelay *)this,piVar4,uVar5,uVar6);
    if ((this->pev->message != 0) &&
       (iVar3 = (**(code **)(param_1[0x18] + 200))(param_1), iVar3 != 0)) {
      UTIL_ShowMessage(gpGlobals->pStringBase + this->pev->message,param_1);
    }
    if (*(float *)&this->field_0x8c <= 0.0) {
      *(undefined4 *)&this->field_0x14 = 0;
      *(undefined4 *)&this->field_0x18 = 0;
      this->pev->nextthink = gpGlobals->time + 0.1;
      *(undefined4 *)&this->field_0xc = 0xffff0000;
      *(code **)&this->field_0x10 = CBaseEntity::SUB_Remove;
    }
    else {
      *(undefined4 *)&this->field_0xc = 0xffff0000;
      *(code **)&this->field_0x10 = MultiWaitOver;
      this->pev->nextthink = gpGlobals->time + *(float *)&this->field_0x8c;
    }
  }
  return;
}

/* 000e799c  CBaseTrigger::MultiWaitOver  (19 bytes)
 * undefined MultiWaitOver(void)
 */
/* CBaseTrigger::MultiWaitOver(void) */

void __thiscall CBaseTrigger::MultiWaitOver(CBaseTrigger *this)

{
  *(undefined4 *)&this->field_0xc = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  return;
}

/* 000e79b0  CBaseTrigger::CounterUse  (370 bytes)
 * undefined CounterUse(CBaseTrigger * param_1, int * param_2)
 */
/* CBaseTrigger::CounterUse(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CBaseTrigger::CounterUse(CBaseTrigger *param_1,int *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  *(int *)&param_1->field_0xcc = *(int *)&param_1->field_0xcc + -1;
  EHANDLE::operator=((EHANDLE *)&param_1->field_0xd4,param_2);
  if (-1 < *(int *)&param_1->field_0xcc) {
    bVar1 = false;
    puVar2 = (undefined4 *)EHANDLE::operator->((EHANDLE *)&param_1->field_0xd4);
    iVar3 = strcmp(gpGlobals->pStringBase + *(int *)*puVar2,"player");
    if ((iVar3 == 0) && ((((byte)param_1->pev->spawnflags ^ 1) & 1) != 0)) {
      bVar1 = true;
    }
    if (*(int *)&param_1->field_0xcc == 0) {
      if (bVar1) {
        (*g_engfuncs.pfnAlertMessage)(at_console,"Sequence completed!");
      }
      piVar4 = (int *)_((EHANDLE *)&param_1->field_0xd4);
      ActivateMultiTrigger(param_1,piVar4);
    }
    else if (bVar1) {
      iVar3 = *(int *)&param_1->field_0xcc;
      if (iVar3 == 2) {
        (*g_engfuncs.pfnAlertMessage)(at_console,"Only 2 more to go...");
      }
      else {
        if (iVar3 < 3) {
          if (iVar3 == 1) {
            (*g_engfuncs.pfnAlertMessage)(at_console,"Only 1 more to go...");
            return;
          }
        }
        else if (iVar3 == 3) {
          (*g_engfuncs.pfnAlertMessage)(at_console,"Only 3 more to go...");
          return;
        }
        (*g_engfuncs.pfnAlertMessage)(at_console,"There are more to go...");
      }
    }
  }
  return;
}

/* 000e91c8  CBaseTrigger::TeleportTouch  (490 bytes)
 * undefined TeleportTouch(int * param_1)
 */
/* CBaseTrigger::TeleportTouch(CBaseEntity *) */

void __thiscall CBaseTrigger::TeleportTouch(CBaseTrigger *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  edict_t *pEdict;
  uint uVar4;
  vec_t *pvVar5;
  undefined4 *puVar6;
  vec_t *pvVar7;
  undefined4 *puVar8;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  
  iVar1 = *param_1;
  if ((*(uint *)(iVar1 + 0x1a4) & 0x28) == 0) {
    return;
  }
  iVar3 = UTIL_IsMasterTriggered(*(int *)&this->field_0x100,param_1);
  if (iVar3 == 0) {
    return;
  }
  if (((((byte)this->pev->spawnflags ^ 1) & 1) != 0) && ((*(uint *)(iVar1 + 0x1a4) & 0x20) != 0)) {
    return;
  }
  if (((this->pev->spawnflags & 2) != 0) &&
     (iVar3 = (**(code **)(param_1[0x18] + 200))(param_1), iVar3 != 0)) {
    return;
  }
  pEdict = (*g_engfuncs.pfnFindEntityByString)
                     ((edict_t *)0x0,"targetname",gpGlobals->pStringBase + this->pev->target);
  bVar2 = false;
  if ((pEdict == (edict_t *)0x0) ||
     (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict), iVar3 == 0)) {
    bVar2 = true;
  }
  if (!bVar2) {
    uVar4 = (uint)&pEdict->v & (pEdict == (edict_t *)0x0) - 1;
    local_2c = *(undefined4 *)(uVar4 + 8);
    local_28 = *(undefined4 *)(uVar4 + 0xc);
    local_24 = *(float *)(uVar4 + 0x10);
    iVar3 = (**(code **)(param_1[0x18] + 200))(param_1);
    if (iVar3 != 0) {
      local_24 = local_24 - *(float *)(*param_1 + 0xe4);
    }
    local_24 = local_24 + 1.0;
    *(uint *)(iVar1 + 0x1a4) = *(uint *)(iVar1 + 0x1a4) & 0xfffffdff;
    UTIL_SetOrigin(iVar1,&local_2c);
    pvVar5 = (pEdict->v).angles;
    pvVar7 = (vec_t *)(iVar1 + 0x50);
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pvVar7 = *pvVar5;
      pvVar5 = pvVar5 + 1;
      pvVar7 = pvVar7 + 1;
    }
    iVar3 = (**(code **)(param_1[0x18] + 200))(param_1);
    if (iVar3 != 0) {
      pvVar5 = (pEdict->v).angles;
      pvVar7 = (vec_t *)(iVar1 + 0x74);
      for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pvVar7 = *pvVar5;
        pvVar5 = pvVar5 + 1;
        pvVar7 = pvVar7 + 1;
      }
    }
    *(undefined4 *)(iVar1 + 0xa0) = 1;
    puVar6 = &g_vecZero;
    puVar8 = (undefined4 *)(iVar1 + 0x2c);
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar6 = (undefined4 *)(iVar1 + 0x2c);
    puVar8 = (undefined4 *)(iVar1 + 0x20);
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  return;
}

/* 000eb48c  CBaseTrigger::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CBaseTrigger::ObjectCaps(void) */

undefined4 CBaseTrigger::ObjectCaps(void)

{
  return 0;
}

