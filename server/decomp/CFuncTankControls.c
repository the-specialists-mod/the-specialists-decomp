/* ts_i386.so - CFuncTankControls (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000c4b28  CFuncTankControls::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CFuncTankControls::Save(CSave &) */

undefined4 __thiscall CFuncTankControls::Save(CFuncTankControls *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CFuncTankControls",(int)this,(int *)m_SaveData,1);
  }
  return uVar2;
}

/* 000c4b78  CFuncTankControls::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CFuncTankControls::Restore(CRestore &) */

undefined4 __thiscall CFuncTankControls::Restore(CFuncTankControls *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CFuncTankControls",(int)this,(int)m_SaveData,1);
  }
  return uVar2;
}

/* 000c4bc8  CFuncTankControls::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CFuncTankControls::ObjectCaps(void) */

undefined4 CFuncTankControls::ObjectCaps(void)

{
  return 8;
}

/* 000c4bd0  CFuncTankControls::Use  (54 bytes)
 * undefined Use(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 */
/* CFuncTankControls::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void __thiscall
CFuncTankControls::Use
          (CFuncTankControls *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4)

{
  if (*(int *)&this->field_0x64 != 0) {
    (**(code **)(*(int *)(*(int *)&this->field_0x64 + 0x60) + 0xe0))
              (*(undefined4 *)&this->field_0x64,param_1,param_2,param_3,param_4);
  }
  return;
}

/* 000c4c08  CFuncTankControls::Think  (312 bytes)
 * undefined Think(void)
 */
/* CFuncTankControls::Think(void) */

void __thiscall CFuncTankControls::Think(CFuncTankControls *this)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  edict_t *pEdictStartSearchAfter;
  
  pEdictStartSearchAfter = (edict_t *)0x0;
  do {
    pEdictStartSearchAfter =
         (*g_engfuncs.pfnFindEntityByString)
                   (pEdictStartSearchAfter,"targetname",gpGlobals->pStringBase + this->pev->target);
    bVar1 = false;
    if (pEdictStartSearchAfter == (edict_t *)0x0) {
LAB_000c4c76:
      bVar1 = true;
    }
    else {
      iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter);
      if (iVar2 == 0) goto LAB_000c4c76;
    }
    if (bVar1) break;
    iVar2 = strncmp(gpGlobals->pStringBase + (pEdictStartSearchAfter->v).classname,"func_tank",9);
  } while (iVar2 != 0);
  bVar1 = false;
  if (pEdictStartSearchAfter != (edict_t *)0x0) {
    iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter);
    if (iVar2 != 0) goto LAB_000c4ccf;
  }
  bVar1 = true;
LAB_000c4ccf:
  if (bVar1) {
    (*g_engfuncs.pfnAlertMessage)
              (at_console,"No tank %s\n",gpGlobals->pStringBase + this->pev->target);
  }
  else {
    if (pEdictStartSearchAfter == (edict_t *)0x0) {
      pEdictStartSearchAfter = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    }
    pvVar3 = (void *)0x0;
    if (pEdictStartSearchAfter != (edict_t *)0x0) {
      pvVar3 = pEdictStartSearchAfter->pvPrivateData;
    }
    *(void **)&this->field_0x64 = pvVar3;
  }
  return;
}

/* 000c4d44  CFuncTankControls::Spawn  (166 bytes)
 * undefined Spawn(void)
 */
/* CFuncTankControls::Spawn(void) */

void __thiscall CFuncTankControls::Spawn(CFuncTankControls *this)

{
  int *piVar1;
  
  this->pev->solid = 1;
  this->pev->movetype = 0;
  piVar1 = &this->pev->effects;
  *piVar1 = *piVar1 | 0x80;
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  UTIL_SetSize((int)this->pev,this->pev->mins,this->pev->maxs);
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  this->pev->nextthink = gpGlobals->time + 0.3;
  return;
}

