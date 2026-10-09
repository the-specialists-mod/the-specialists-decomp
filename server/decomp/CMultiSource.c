/* ts_i386.so - CMultiSource (8 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000a785c  CMultiSource::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CMultiSource::Save(CSave &) */

undefined4 __thiscall CMultiSource::Save(CMultiSource *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CMultiSource",(int)this,(int *)m_SaveData,4);
  }
  return uVar2;
}

/* 000a78ac  CMultiSource::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CMultiSource::Restore(CRestore &) */

undefined4 __thiscall CMultiSource::Restore(CMultiSource *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CMultiSource",(int)this,(int)m_SaveData,4);
  }
  return uVar2;
}

/* 000a7920  CMultiSource::KeyValue  (258 bytes)
 * undefined KeyValue(int param_1)
 */
/* CMultiSource::KeyValue(KeyValueData_s *) */

void __thiscall CMultiSource::KeyValue(CMultiSource *this,int param_1)

{
  int iVar1;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"style");
  if ((((iVar1 != 0) && (iVar1 = strcmp(*(char **)(param_1 + 4),"height"), iVar1 != 0)) &&
      (iVar1 = strcmp(*(char **)(param_1 + 4),"killtarget"), iVar1 != 0)) &&
     (((iVar1 = strcmp(*(char **)(param_1 + 4),"value1"), iVar1 != 0 &&
       (iVar1 = strcmp(*(char **)(param_1 + 4),"value2"), iVar1 != 0)) &&
      (iVar1 = strcmp(*(char **)(param_1 + 4),"value3"), iVar1 != 0)))) {
    iVar1 = strcmp(*(char **)(param_1 + 4),"globalstate");
    if (iVar1 == 0) {
      iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
      *(int *)&this->field_0x1e8 = iVar1;
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}

/* 000a7a28  CMultiSource::Spawn  (103 bytes)
 * undefined Spawn(void)
 */
/* CMultiSource::Spawn(void) */

void __thiscall CMultiSource::Spawn(CMultiSource *this)

{
  int *piVar1;
  
  this->pev->solid = 0;
  this->pev->movetype = 0;
  this->pev->nextthink = gpGlobals->time + 0.1;
  piVar1 = &this->pev->spawnflags;
  *piVar1 = *piVar1 | 1;
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = Register;
  return;
}

/* 000a7a90  CMultiSource::Use  (243 bytes)
 * undefined Use(CBaseEntity * param_1, undefined4 param_2, undefined4 * param_3)
 */
/* CMultiSource::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CMultiSource::Use(CBaseEntity *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  CBaseEntity *pCVar3;
  int iVar4;
  
  iVar4 = 0;
  pCVar3 = param_1 + 1;
  do {
    if (*(int *)&param_1[4].field_0x54 <= iVar4) break;
    iVar4 = iVar4 + 1;
    puVar1 = (undefined4 *)_((EHANDLE *)pCVar3);
    pCVar3 = (CBaseEntity *)&pCVar3->field_0x8;
  } while (puVar1 != param_3);
  if (*(int *)&param_1[4].field_0x54 < iVar4) {
    (*g_engfuncs.pfnAlertMessage)
              (at_console,"MultiSrc:Used by non member %s.\n",
               gpGlobals->pStringBase + *(int *)*param_3);
  }
  else {
    *(uint *)(&param_1[3].field_0x34 + iVar4 * 4) =
         *(uint *)(&param_1[3].field_0x34 + iVar4 * 4) ^ 1;
    iVar4 = (*param_1->vtable[0x1b])(param_1,param_2);
    if (iVar4 != 0) {
      (*g_engfuncs.pfnAlertMessage)
                (at_aiconsole,"Multisource %s enabled (%d inputs)\n",
                 gpGlobals->pStringBase + param_1->pev->targetname,
                 *(undefined4 *)&param_1[4].field_0x54);
      uVar2 = 3;
      if (*(int *)&param_1[4].field_0x58 != 0) {
        uVar2 = 1;
      }
      CBaseEntity::SUB_UseTargets(param_1,0,uVar2,0);
    }
  }
  return;
}

/* 000a7b84  CMultiSource::IsTriggered  (152 bytes)
 * undefined4 IsTriggered(int * param_1)
 */
/* CMultiSource::IsTriggered(CBaseEntity *) */

undefined4 CMultiSource::IsTriggered(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((*(byte *)(*param_1 + 0x1a0) & 1) == 0) {
    if ((0 < param_1[0x79]) && (param_1[0x59] != 0)) {
      piVar1 = param_1 + 0x59;
      do {
        piVar1 = piVar1 + 1;
        iVar2 = iVar2 + 1;
        if (param_1[0x79] <= iVar2) break;
      } while (*piVar1 != 0);
    }
    if ((iVar2 == param_1[0x79]) &&
       ((param_1[0x7a] == 0 ||
        (iVar2 = CGlobalState::EntityGetState((CGlobalState *)&gGlobalState,param_1[0x7a]),
        iVar2 == 1)))) {
      return 1;
    }
  }
  return 0;
}

/* 000a7c20  CMultiSource::Register  (521 bytes)
 * undefined Register(void)
 */
/* CMultiSource::Register(void) */

void __thiscall CMultiSource::Register(CMultiSource *this)

{
  bool bVar1;
  char *pszValue;
  edict_t *peVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  edict_t *peVar6;
  
  *(undefined4 *)&this->field_0x1e4 = 0;
  puVar5 = (undefined4 *)&this->field_0x64;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = CBaseEntity::SUB_DoNothing;
  pszValue = gpGlobals->pStringBase + this->pev->targetname;
  peVar6 = (edict_t *)0x0;
  while( true ) {
    peVar6 = (*g_engfuncs.pfnFindEntityByString)(peVar6,"target",pszValue);
    bVar1 = false;
    if ((peVar6 == (edict_t *)0x0) ||
       (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar6), iVar3 == 0)) {
      bVar1 = true;
    }
    if ((bVar1) || (0x1f < *(int *)&this->field_0x1e4)) break;
    peVar2 = peVar6;
    if (peVar6 == (edict_t *)0x0) {
      peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    }
    piVar4 = (int *)0x0;
    if (peVar2 != (edict_t *)0x0) {
      piVar4 = peVar2->pvPrivateData;
    }
    if (piVar4 != (int *)0x0) {
      iVar3 = *(int *)&this->field_0x1e4;
      *(int *)&this->field_0x1e4 = *(int *)&this->field_0x1e4 + 1;
      EHANDLE::operator=((EHANDLE *)(&this->field_0x64 + iVar3 * 8),piVar4);
    }
    pszValue = gpGlobals->pStringBase + this->pev->targetname;
  }
  peVar6 = (edict_t *)0x0;
  while( true ) {
    peVar6 = (*g_engfuncs.pfnFindEntityByString)(peVar6,"classname","multi_manager");
    bVar1 = false;
    if ((peVar6 == (edict_t *)0x0) ||
       (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar6), iVar3 == 0)) {
      bVar1 = true;
    }
    if ((bVar1) || (0x1f < *(int *)&this->field_0x1e4)) break;
    peVar2 = peVar6;
    if (peVar6 == (edict_t *)0x0) {
      peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    }
    piVar4 = (int *)0x0;
    if (peVar2 != (edict_t *)0x0) {
      piVar4 = peVar2->pvPrivateData;
    }
    if ((piVar4 != (int *)0x0) &&
       (iVar3 = (**(code **)(piVar4[0x18] + 0xc0))(piVar4,this->pev->targetname), iVar3 != 0)) {
      iVar3 = *(int *)&this->field_0x1e4;
      *(int *)&this->field_0x1e4 = *(int *)&this->field_0x1e4 + 1;
      EHANDLE::operator=((EHANDLE *)(&this->field_0x64 + iVar3 * 8),piVar4);
    }
  }
  piVar4 = &this->pev->spawnflags;
  *piVar4 = *piVar4 & 0xfffffffe;
  return;
}

/* 000aa858  CMultiSource::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CMultiSource::ObjectCaps(void) */

undefined4 CMultiSource::ObjectCaps(void)

{
  return 0x80;
}

