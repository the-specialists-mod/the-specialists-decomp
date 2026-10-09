/* ts_i386.so - CFuncTrainControls (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000d5ad4  CFuncTrainControls::Find  (320 bytes)
 * undefined Find(void)
 */
/* CFuncTrainControls::Find(void) */

void __thiscall CFuncTrainControls::Find(CFuncTrainControls *this)

{
  bool bVar1;
  int iVar2;
  CFuncTrackTrain *this_00;
  edict_t *pEdictStartSearchAfter;
  
  pEdictStartSearchAfter = (edict_t *)0x0;
  do {
    pEdictStartSearchAfter =
         (*g_engfuncs.pfnFindEntityByString)
                   (pEdictStartSearchAfter,"targetname",gpGlobals->pStringBase + this->pev->target);
    bVar1 = false;
    if (pEdictStartSearchAfter == (edict_t *)0x0) {
LAB_000d5b42:
      bVar1 = true;
    }
    else {
      iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter);
      if (iVar2 == 0) goto LAB_000d5b42;
    }
    if (bVar1) break;
    iVar2 = strcmp(gpGlobals->pStringBase +
                   *(int *)((uint)&pEdictStartSearchAfter->v &
                           (pEdictStartSearchAfter == (edict_t *)0x0) - 1),"func_tracktrain");
  } while (iVar2 != 0);
  bVar1 = false;
  if (pEdictStartSearchAfter != (edict_t *)0x0) {
    iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter);
    if (iVar2 != 0) goto LAB_000d5bac;
  }
  bVar1 = true;
LAB_000d5bac:
  if (bVar1) {
    (*g_engfuncs.pfnAlertMessage)
              (at_console,"No train %s\n",gpGlobals->pStringBase + this->pev->target);
  }
  else {
    this_00 = (CFuncTrackTrain *)CFuncTrackTrain::Instance((int)pEdictStartSearchAfter);
    CFuncTrackTrain::SetControls(this_00,(int)this->pev);
    UTIL_Remove((int *)this);
  }
  return;
}

/* 000d5c18  CFuncTrainControls::Spawn  (166 bytes)
 * undefined Spawn(void)
 */
/* CFuncTrainControls::Spawn(void) */

void __thiscall CFuncTrainControls::Spawn(CFuncTrainControls *this)

{
  this->pev->solid = 0;
  this->pev->movetype = 0;
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  UTIL_SetSize((int)this->pev,this->pev->mins,this->pev->maxs);
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = Find;
  this->pev->nextthink = gpGlobals->time;
  return;
}

/* 000d7c60  CFuncTrainControls::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CFuncTrainControls::ObjectCaps(void) */

undefined4 CFuncTrainControls::ObjectCaps(void)

{
  return 0;
}

