/* ts_i386.so - CTSDMHill (7 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 00071918  CTSDMHill::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CTSDMHill::Save(CSave &) */

undefined4 __thiscall CTSDMHill::Save(CTSDMHill *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CTSDMHill",(int)this,(int *)m_SaveData,3);
  }
  return uVar2;
}

/* 00071968  CTSDMHill::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CTSDMHill::Restore(CRestore &) */

undefined4 __thiscall CTSDMHill::Restore(CTSDMHill *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CTSDMHill",(int)this,(int)m_SaveData,3);
  }
  return uVar2;
}

/* 000719b8  CTSDMHill::KeyValue  (203 bytes)
 * undefined KeyValue(int param_1)
 */
/* CTSDMHill::KeyValue(KeyValueData_s *) */

void __thiscall CTSDMHill::KeyValue(CTSDMHill *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  longdouble lVar3;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"nextcheck");
  if (iVar1 == 0) {
    lVar3 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
    *(float *)&this->field_0x78 = (float)lVar3;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"fragamt");
    if (iVar1 == 0) {
      uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
      *(undefined4 *)&this->field_0x70 = uVar2;
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      iVar1 = strcmp(*(char **)(param_1 + 4),"fragamtteam");
      if (iVar1 == 0) {
        uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
        *(undefined4 *)&this->field_0x74 = uVar2;
        *(undefined4 *)(param_1 + 0xc) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
    }
  }
  return;
}

/* 00071a8c  CTSDMHill::Spawn  (344 bytes)
 * undefined Spawn(void)
 */
/* CTSDMHill::Spawn(void) */

void __thiscall CTSDMHill::Spawn(CTSDMHill *this)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  
  this->pev->classname = (int)"ts_dmhill" - (int)gpGlobals->pStringBase;
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  UTIL_SetSize((int)this->pev,this->pev->mins,this->pev->maxs);
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  piVar1 = &this->pev->effects;
  *piVar1 = *piVar1 | 0x80;
  this->pev->solid = 1;
  this->pev->movetype = 5;
  iVar3 = (**(code **)(*g_pGameRules + 0x24))(g_pGameRules);
  if ((iVar3 == 0) || (0 < *(int *)&this->field_0x74)) {
    iVar3 = (**(code **)(*g_pGameRules + 0x24))(g_pGameRules);
    if ((iVar3 != 0) || (0 < *(int *)&this->field_0x70)) {
      *(undefined4 *)&this->field_0x14 = 0xffff0000;
      *(code **)&this->field_0x18 = WaitTouch;
      goto LAB_00071b8d;
    }
  }
  *(undefined4 *)&this->field_0x14 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
LAB_00071b8d:
  *(undefined4 *)&this->field_0xc = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  fVar2 = *(float *)&this->field_0x78;
  if (fVar2 < 0.5) {
    fVar2 = 0.5;
  }
  this->pev->nextthink = fVar2 + gpGlobals->time;
  *(float *)&this->field_0x64 = gpGlobals->time + 1.0;
  *(undefined4 *)&this->field_0x6c = 0;
  return;
}

/* 00071be8  CTSDMHill::WaitTouch  (1675 bytes)
 * undefined WaitTouch(int * param_1)
 */
/* CTSDMHill::WaitTouch(CBaseEntity *) */

void __thiscall CTSDMHill::WaitTouch(CTSDMHill *this,int *param_1)

{
  float fVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  CBasePlayer *pCVar6;
  char *pcVar7;
  char *__s1;
  undefined4 uVar8;
  undefined4 local_12c;
  undefined2 local_128;
  
  if (gpGlobals->time < *(float *)&this->field_0x64) {
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
  if (*(int *)&this->field_0x6c == 0) {
    *(int **)&this->field_0x6c = param_1;
    *(undefined4 *)&this->field_0x64 = 0;
    fVar1 = *(float *)&this->field_0x78;
    if (fVar1 < 0.5) {
      fVar1 = 0.5;
    }
    *(float *)&this->field_0x7c = fVar1 + gpGlobals->time;
    fVar1 = *(float *)&this->field_0x78;
    if (fVar1 < 0.5) {
      fVar1 = 0.5;
    }
    *(float *)&this->field_0x68 = fVar1 + gpGlobals->time;
    return;
  }
  if (*(int **)&this->field_0x6c == param_1) {
    fVar1 = *(float *)&this->field_0x78;
    if (fVar1 < 0.5) {
      fVar1 = 0.5;
    }
    if (fVar1 < gpGlobals->time - *(float *)&this->field_0x68) goto LAB_00071d39;
  }
  else {
    iVar4 = (**(code **)(*g_pGameRules + 0xcc))
                      (g_pGameRules,*(undefined4 *)&this->field_0x6c,param_1);
    if (iVar4 != 1) {
LAB_00071d39:
      *(undefined4 *)&this->field_0x6c = 0;
      *(undefined4 *)&this->field_0x64 = 0;
      fVar1 = *(float *)&this->field_0x78;
      if (fVar1 < 0.5) {
        fVar1 = 0.5;
      }
      *(float *)&this->field_0x7c = fVar1 + gpGlobals->time;
      return;
    }
  }
  if (gpGlobals->time <= *(float *)&this->field_0x7c) {
    return;
  }
  if (this->pev->message != 0) {
    iVar4 = (**(code **)(*g_pGameRules + 0x24))(g_pGameRules);
    if (iVar4 == 0) {
      strcpy((char *)&local_12c,gpGlobals->pStringBase + *(int *)(*param_1 + 0x1d0));
    }
    else {
      local_12c = 0x6d616554;
      local_128 = 0x20;
      strcat((char *)&local_12c,(char *)(param_1 + 0x2d2));
    }
    strcat((char *)&local_12c," ");
    strcat((char *)&local_12c,gpGlobals->pStringBase + this->pev->message);
  }
  iVar4 = (**(code **)(*g_pGameRules + 0x24))(g_pGameRules);
  if (iVar4 == 0) {
    *(float *)(*param_1 + 0x164) = (float)*(int *)&this->field_0x70 + *(float *)(*param_1 + 0x164);
    (*g_engfuncs.pfnMessageBegin)(2,gmsgScoreInfo,(float *)0x0,(edict_t *)0x0);
    iVar4 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*param_1 + 0x208));
    (*g_engfuncs.pfnWriteByte)(iVar4);
    (*g_engfuncs.pfnWriteShort)((int)ROUND(*(float *)(*param_1 + 0x164)));
    (*g_engfuncs.pfnWriteShort)(param_1[0x2cc]);
    (*g_engfuncs.pfnWriteShort)(0);
    iVar4 = (**(code **)(*g_pGameRules + 0xd0))(g_pGameRules,param_1 + 0x2d2);
    (*g_engfuncs.pfnWriteShort)(iVar4 + 1);
    (*g_engfuncs.pfnMessageEnd)();
    if (this->pev->message == 0) goto LAB_00072172;
    uVar8 = *(undefined4 *)&this->field_0x70;
    pcVar7 = " ,%i frags for him";
  }
  else {
    for (puVar5 = (uint *)UTIL_FindEntityByClassname((int *)0x0,"player"); puVar5 != (uint *)0x0;
        puVar5 = (uint *)UTIL_FindEntityByClassname((int *)puVar5,"player")) {
      bVar3 = false;
      if ((*(edict_t **)(*puVar5 + 0x208) == (edict_t *)0x0) ||
         (iVar4 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(*puVar5 + 0x208)), iVar4 == 0))
      {
        bVar3 = true;
      }
      if (bVar3) break;
      iVar4 = (**(code **)(puVar5[0x18] + 200))(puVar5);
      if (iVar4 != 0) {
        pCVar6 = GetClassPtr<CBasePlayer>(*puVar5);
        pcVar7 = (char *)(**(code **)(param_1[0x18] + 0xd0))(param_1);
        __s1 = (char *)(*pCVar6->vtable[0x34])(pCVar6);
        iVar4 = strcmp(__s1,pcVar7);
        if (iVar4 == 0) {
          pCVar6->pev->frags = (float)*(int *)&this->field_0x74 + pCVar6->pev->frags;
          (*g_engfuncs.pfnMessageBegin)(2,gmsgScoreInfo,(float *)0x0,(edict_t *)0x0);
          iVar4 = (*g_engfuncs.pfnIndexOfEdict)(pCVar6->pev->pContainingEntity);
          (*g_engfuncs.pfnWriteByte)(iVar4);
          (*g_engfuncs.pfnWriteShort)((int)ROUND(pCVar6->pev->frags));
          (*g_engfuncs.pfnWriteShort)(*(int *)&pCVar6->field_0xb30);
          (*g_engfuncs.pfnWriteShort)(0);
          iVar4 = (**(code **)(*g_pGameRules + 0xd0))(g_pGameRules,&pCVar6->field_0xb48);
          (*g_engfuncs.pfnWriteShort)(iVar4 + 1);
          (*g_engfuncs.pfnMessageEnd)();
        }
      }
    }
    if (this->pev->message == 0) goto LAB_00072172;
    uVar8 = *(undefined4 *)&this->field_0x74;
    pcVar7 = " ,%i frags for they";
  }
  pcVar7 = UTIL_VarArgs(pcVar7,uVar8);
  strcat((char *)&local_12c,pcVar7);
LAB_00072172:
  if (this->pev->message != 0) {
    dVar2 = (double)*(float *)&this->field_0x78;
    if (dVar2 < 0.5) {
      dVar2 = 0.5;
    }
    dVar2 = dVar2 * 10.0;
    if (30.0 < dVar2) {
      dVar2 = 30.0;
    }
    TSHudMessageAll(0,0xff,0,8,(int)ROUND(dVar2),(char *)&local_12c);
  }
  fVar1 = *(float *)&this->field_0x78;
  if (fVar1 < 0.5) {
    fVar1 = 0.5;
  }
  *(float *)&this->field_0x7c = fVar1 + gpGlobals->time;
  if (this->pev->target != 0) {
    FireTargets((int)(gpGlobals->pStringBase + this->pev->target),this,this,3,0);
  }
  *(float *)&this->field_0x68 = gpGlobals->time;
  return;
}

/* 00072280  CTSDMHill::WaitThink  (67 bytes)
 * undefined WaitThink(void)
 */
/* CTSDMHill::WaitThink(void) */

void __thiscall CTSDMHill::WaitThink(CTSDMHill *this)

{
  float fVar1;
  
  fVar1 = *(float *)&this->field_0x78;
  if (fVar1 < 0.5) {
    fVar1 = 0.5;
  }
  this->pev->nextthink = fVar1 + gpGlobals->time;
  return;
}

/* 00073b20  CTSDMHill::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CTSDMHill::ObjectCaps(void) */

undefined4 CTSDMHill::ObjectCaps(void)

{
  return 0;
}

