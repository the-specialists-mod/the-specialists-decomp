/* ts_i386.so - global_000e9414 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000e9414  info_teleport_destination  (33 bytes)
 * undefined info_teleport_destination(uint param_1)
 */
void info_teleport_destination(uint param_1)

{
  GetClassPtr<CPointEntity>(param_1);
  return;
}

/* 000e9438  trigger_autosave  (33 bytes)
 * undefined trigger_autosave(uint param_1)
 */
void trigger_autosave(uint param_1)

{
  GetClassPtr<CTriggerSave>(param_1);
  return;
}

/* 000e953c  trigger_endsection  (33 bytes)
 * undefined trigger_endsection(uint param_1)
 */
void trigger_endsection(uint param_1)

{
  GetClassPtr<CTriggerEndSection>(param_1);
  return;
}

/* 000e9764  trigger_gravity  (33 bytes)
 * undefined trigger_gravity(uint param_1)
 */
void trigger_gravity(uint param_1)

{
  GetClassPtr<CTriggerGravity>(param_1);
  return;
}

/* 000e97f8  trigger_changetarget  (33 bytes)
 * undefined trigger_changetarget(uint param_1)
 */
void trigger_changetarget(uint param_1)

{
  GetClassPtr<CTriggerChangeTarget>(param_1);
  return;
}

/* 000e9994  trigger_camera  (33 bytes)
 * undefined trigger_camera(uint param_1)
 */
void trigger_camera(uint param_1)

{
  GetClassPtr<CTriggerCamera>(param_1);
  return;
}

/* 000ea558  GetClassPtr<CFrictionModifier>  (131 bytes)
 * CFrictionModifier * GetClassPtr<CFrictionModifier>(uint param_1)
 */
/* CFrictionModifier * GetClassPtr<CFrictionModifier>(CFrictionModifier *) */

CFrictionModifier * GetClassPtr<CFrictionModifier>(uint param_1)

{
  edict_t *peVar1;
  CFrictionModifier *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CFrictionModifier *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CFrictionModifier *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x68);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CFrictionModifier_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000ea5dc  GetClassPtr<CAutoTrigger>  (140 bytes)
 * CAutoTrigger * GetClassPtr<CAutoTrigger>(uint param_1)
 */
/* CAutoTrigger * GetClassPtr<CAutoTrigger>(CAutoTrigger *) */

CAutoTrigger * GetClassPtr<CAutoTrigger>(uint param_1)

{
  edict_t *peVar1;
  CAutoTrigger *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CAutoTrigger *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CAutoTrigger *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x74);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CAutoTrigger_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000ea668  GetClassPtr<CTriggerRelay>  (140 bytes)
 * CTriggerRelay * GetClassPtr<CTriggerRelay>(uint param_1)
 */
/* CTriggerRelay * GetClassPtr<CTriggerRelay>(CTriggerRelay *) */

CTriggerRelay * GetClassPtr<CTriggerRelay>(uint param_1)

{
  edict_t *peVar1;
  CTriggerRelay *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTriggerRelay *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTriggerRelay *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x70);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CTriggerRelay_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000ea6f4  GetClassPtr<CMultiManager>  (161 bytes)
 * CMultiManager * GetClassPtr<CMultiManager>(uint param_1)
 */
/* CMultiManager * GetClassPtr<CMultiManager>(CMultiManager *) */

CMultiManager * GetClassPtr<CMultiManager>(uint param_1)

{
  edict_t *peVar1;
  CMultiManager *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CMultiManager *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CMultiManager *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,400);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CMultiManager_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000ea798  GetClassPtr<CRenderFxManager>  (131 bytes)
 * CRenderFxManager * GetClassPtr<CRenderFxManager>(uint param_1)
 */
/* CRenderFxManager * GetClassPtr<CRenderFxManager>(CRenderFxManager *) */

CRenderFxManager * GetClassPtr<CRenderFxManager>(uint param_1)

{
  edict_t *peVar1;
  CRenderFxManager *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CRenderFxManager *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CRenderFxManager *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CRenderFxManager_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000ea81c  GetClassPtr<CBaseTrigger>  (161 bytes)
 * CBaseTrigger * GetClassPtr<CBaseTrigger>(uint param_1)
 */
/* CBaseTrigger * GetClassPtr<CBaseTrigger>(CBaseTrigger *) */

CBaseTrigger * GetClassPtr<CBaseTrigger>(uint param_1)

{
  edict_t *peVar1;
  CBaseTrigger *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CBaseTrigger *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CBaseTrigger *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x104)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CBaseTrigger_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000ea8c0  GetClassPtr<CTriggerHurt>  (170 bytes)
 * CTriggerHurt * GetClassPtr<CTriggerHurt>(uint param_1)
 */
/* CTriggerHurt * GetClassPtr<CTriggerHurt>(CTriggerHurt *) */

CTriggerHurt * GetClassPtr<CTriggerHurt>(uint param_1)

{
  edict_t *peVar1;
  CTriggerHurt *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTriggerHurt *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTriggerHurt *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x104)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CBaseTrigger_virtual_table;
    pCVar2->vtable = (void **)CTriggerHurt_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000ea96c  GetClassPtr<CTriggerMonsterJump>  (170 bytes)
 * CTriggerMonsterJump * GetClassPtr<CTriggerMonsterJump>(uint param_1)
 */
/* CTriggerMonsterJump * GetClassPtr<CTriggerMonsterJump>(CTriggerMonsterJump *) */

CTriggerMonsterJump * GetClassPtr<CTriggerMonsterJump>(uint param_1)

{
  edict_t *peVar1;
  CTriggerMonsterJump *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTriggerMonsterJump *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTriggerMonsterJump *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x104)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CBaseTrigger_virtual_table;
    pCVar2->vtable = (void **)CTriggerMonsterJump_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000eaa18  GetClassPtr<CTriggerCDAudio>  (170 bytes)
 * CTriggerCDAudio * GetClassPtr<CTriggerCDAudio>(uint param_1)
 */
/* CTriggerCDAudio * GetClassPtr<CTriggerCDAudio>(CTriggerCDAudio *) */

CTriggerCDAudio * GetClassPtr<CTriggerCDAudio>(uint param_1)

{
  edict_t *peVar1;
  CTriggerCDAudio *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTriggerCDAudio *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTriggerCDAudio *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x104)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CBaseTrigger_virtual_table;
    pCVar2->vtable = (void **)CTriggerCDAudio_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000eaac4  GetClassPtr<CTargetCDAudio>  (140 bytes)
 * CTargetCDAudio * GetClassPtr<CTargetCDAudio>(uint param_1)
 */
/* CTargetCDAudio * GetClassPtr<CTargetCDAudio>(CTargetCDAudio *) */

CTargetCDAudio * GetClassPtr<CTargetCDAudio>(uint param_1)

{
  edict_t *peVar1;
  CTargetCDAudio *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTargetCDAudio *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTargetCDAudio *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CPointEntity_virtual_table;
    pCVar2->vtable = (void **)CTargetCDAudio_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000eab50  GetClassPtr<CTriggerMultiple>  (170 bytes)
 * CTriggerMultiple * GetClassPtr<CTriggerMultiple>(uint param_1)
 */
/* CTriggerMultiple * GetClassPtr<CTriggerMultiple>(CTriggerMultiple *) */

CTriggerMultiple * GetClassPtr<CTriggerMultiple>(uint param_1)

{
  edict_t *peVar1;
  CTriggerMultiple *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTriggerMultiple *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTriggerMultiple *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x104)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CBaseTrigger_virtual_table;
    pCVar2->vtable = (void **)CTriggerMultiple_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000eabfc  GetClassPtr<CTriggerOnce>  (179 bytes)
 * CTriggerOnce * GetClassPtr<CTriggerOnce>(uint param_1)
 */
/* CTriggerOnce * GetClassPtr<CTriggerOnce>(CTriggerOnce *) */

CTriggerOnce * GetClassPtr<CTriggerOnce>(uint param_1)

{
  edict_t *peVar1;
  CTriggerOnce *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTriggerOnce *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTriggerOnce *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x104)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CBaseTrigger_virtual_table;
    pCVar2->vtable = (void **)CTriggerMultiple_virtual_table;
    pCVar2->vtable = (void **)CTriggerOnce_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000eacb0  GetClassPtr<CTriggerCounter>  (170 bytes)
 * CTriggerCounter * GetClassPtr<CTriggerCounter>(uint param_1)
 */
/* CTriggerCounter * GetClassPtr<CTriggerCounter>(CTriggerCounter *) */

CTriggerCounter * GetClassPtr<CTriggerCounter>(uint param_1)

{
  edict_t *peVar1;
  CTriggerCounter *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTriggerCounter *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTriggerCounter *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x104)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CBaseTrigger_virtual_table;
    pCVar2->vtable = (void **)CTriggerCounter_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000ead5c  GetClassPtr<CTriggerVolume>  (140 bytes)
 * CTriggerVolume * GetClassPtr<CTriggerVolume>(uint param_1)
 */
/* CTriggerVolume * GetClassPtr<CTriggerVolume>(CTriggerVolume *) */

CTriggerVolume * GetClassPtr<CTriggerVolume>(uint param_1)

{
  edict_t *peVar1;
  CTriggerVolume *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTriggerVolume *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTriggerVolume *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,100);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CPointEntity_virtual_table;
    pCVar2->vtable = (void **)CTriggerVolume_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000eade8  GetClassPtr<CFireAndDie>  (140 bytes)
 * CFireAndDie * GetClassPtr<CFireAndDie>(uint param_1)
 */
/* CFireAndDie * GetClassPtr<CFireAndDie>(CFireAndDie *) */

CFireAndDie * GetClassPtr<CFireAndDie>(uint param_1)

{
  edict_t *peVar1;
  CFireAndDie *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CFireAndDie *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CFireAndDie *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x6c);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CFireAndDie_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000eae74  GetClassPtr<CChangeLevel>  (170 bytes)
 * CChangeLevel * GetClassPtr<CChangeLevel>(uint param_1)
 */
/* CChangeLevel * GetClassPtr<CChangeLevel>(CChangeLevel *) */

CChangeLevel * GetClassPtr<CChangeLevel>(uint param_1)

{
  edict_t *peVar1;
  CChangeLevel *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CChangeLevel *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CChangeLevel *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x14c)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CBaseTrigger_virtual_table;
    pCVar2->vtable = (void **)CChangeLevel_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000eaf20  GetClassPtr<CLadder>  (170 bytes)
 * CLadder * GetClassPtr<CLadder>(uint param_1)
 */
/* CLadder * GetClassPtr<CLadder>(CLadder *) */

CLadder * GetClassPtr<CLadder>(uint param_1)

{
  edict_t *peVar1;
  CLadder *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CLadder *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CLadder *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x104)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CBaseTrigger_virtual_table;
    pCVar2->vtable = (void **)CLadder_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000eafcc  GetClassPtr<CTriggerPush>  (170 bytes)
 * CTriggerPush * GetClassPtr<CTriggerPush>(uint param_1)
 */
/* CTriggerPush * GetClassPtr<CTriggerPush>(CTriggerPush *) */

CTriggerPush * GetClassPtr<CTriggerPush>(uint param_1)

{
  edict_t *peVar1;
  CTriggerPush *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTriggerPush *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTriggerPush *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x104)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CBaseTrigger_virtual_table;
    pCVar2->vtable = (void **)CTriggerPush_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000eb078  GetClassPtr<CTriggerTeleport>  (170 bytes)
 * CTriggerTeleport * GetClassPtr<CTriggerTeleport>(uint param_1)
 */
/* CTriggerTeleport * GetClassPtr<CTriggerTeleport>(CTriggerTeleport *) */

CTriggerTeleport * GetClassPtr<CTriggerTeleport>(uint param_1)

{
  edict_t *peVar1;
  CTriggerTeleport *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTriggerTeleport *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTriggerTeleport *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x104)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CBaseTrigger_virtual_table;
    pCVar2->vtable = (void **)CTriggerTeleport_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000eb124  GetClassPtr<CTriggerSave>  (170 bytes)
 * CTriggerSave * GetClassPtr<CTriggerSave>(uint param_1)
 */
/* CTriggerSave * GetClassPtr<CTriggerSave>(CTriggerSave *) */

CTriggerSave * GetClassPtr<CTriggerSave>(uint param_1)

{
  edict_t *peVar1;
  CTriggerSave *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTriggerSave *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTriggerSave *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x104)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CBaseTrigger_virtual_table;
    pCVar2->vtable = (void **)CTriggerSave_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000eb1d0  GetClassPtr<CTriggerEndSection>  (170 bytes)
 * CTriggerEndSection * GetClassPtr<CTriggerEndSection>(uint param_1)
 */
/* CTriggerEndSection * GetClassPtr<CTriggerEndSection>(CTriggerEndSection *) */

CTriggerEndSection * GetClassPtr<CTriggerEndSection>(uint param_1)

{
  edict_t *peVar1;
  CTriggerEndSection *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTriggerEndSection *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTriggerEndSection *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x104)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CBaseTrigger_virtual_table;
    pCVar2->vtable = (void **)CTriggerEndSection_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000eb27c  GetClassPtr<CTriggerGravity>  (170 bytes)
 * CTriggerGravity * GetClassPtr<CTriggerGravity>(uint param_1)
 */
/* CTriggerGravity * GetClassPtr<CTriggerGravity>(CTriggerGravity *) */

CTriggerGravity * GetClassPtr<CTriggerGravity>(uint param_1)

{
  edict_t *peVar1;
  CTriggerGravity *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTriggerGravity *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTriggerGravity *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x104)
    ;
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CBaseAnimating_virtual_table;
    pCVar2->vtable = (void **)CBaseToggle_virtual_table;
    pCVar2->vtable = (void **)CBaseTrigger_virtual_table;
    pCVar2->vtable = (void **)CTriggerGravity_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000eb328  GetClassPtr<CTriggerChangeTarget>  (140 bytes)
 * CTriggerChangeTarget * GetClassPtr<CTriggerChangeTarget>(uint param_1)
 */
/* CTriggerChangeTarget * GetClassPtr<CTriggerChangeTarget>(CTriggerChangeTarget *) */

CTriggerChangeTarget * GetClassPtr<CTriggerChangeTarget>(uint param_1)

{
  edict_t *peVar1;
  CTriggerChangeTarget *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTriggerChangeTarget *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTriggerChangeTarget *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0x70);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CTriggerChangeTarget_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000eb3b4  GetClassPtr<CTriggerCamera>  (143 bytes)
 * CTriggerCamera * GetClassPtr<CTriggerCamera>(uint param_1)
 */
/* CTriggerCamera * GetClassPtr<CTriggerCamera>(CTriggerCamera *) */

CTriggerCamera * GetClassPtr<CTriggerCamera>(uint param_1)

{
  edict_t *peVar1;
  CTriggerCamera *pCVar2;
  
  if (param_1 == 0) {
    peVar1 = (*g_engfuncs.pfnCreateEntity)();
    param_1 = (uint)&peVar1->v & (peVar1 == (edict_t *)0x0) - 1;
  }
  pCVar2 = (CTriggerCamera *)0x0;
  if (((entvars_t *)param_1)->pContainingEntity != (edict_t *)0x0) {
    pCVar2 = ((entvars_t *)param_1)->pContainingEntity->pvPrivateData;
  }
  if (pCVar2 == (CTriggerCamera *)0x0) {
    pCVar2 = (*g_engfuncs.pfnPvAllocEntPrivateData)(((entvars_t *)param_1)->pContainingEntity,0xa8);
    pCVar2->vtable = (void **)CBaseEntity_virtual_table;
    pCVar2->vtable = (void **)CBaseDelay_virtual_table;
    pCVar2->vtable = (void **)CTriggerCamera_virtual_table;
    pCVar2->pev = (entvars_t *)param_1;
  }
  return pCVar2;
}

/* 000eb444  CBaseTrigger_type_info_function  (70 bytes)
 * undefined4 * CBaseTrigger_type_info_function(void)
 */
/* CBaseTrigger type_info function */

undefined4 * CBaseTrigger_type_info_function(void)

{
  if (CBaseTrigger_type_info_node == 0) {
    CBaseToggle_type_info_function();
    __rtti_si(&CBaseTrigger_type_info_node,"12CBaseTrigger",&CBaseToggle_type_info_node);
  }
  return &CBaseTrigger_type_info_node;
}

/* 000eb494  CFrictionModifier_type_info_function  (70 bytes)
 * undefined4 * CFrictionModifier_type_info_function(void)
 */
/* CFrictionModifier type_info function */

undefined4 * CFrictionModifier_type_info_function(void)

{
  if (CFrictionModifier_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CFrictionModifier_type_info_node,"17CFrictionModifier",&CBaseEntity_type_info_node);
  }
  return &CFrictionModifier_type_info_node;
}

/* 000eb4e4  CAutoTrigger_type_info_function  (70 bytes)
 * undefined4 * CAutoTrigger_type_info_function(void)
 */
/* CAutoTrigger type_info function */

undefined4 * CAutoTrigger_type_info_function(void)

{
  if (CAutoTrigger_type_info_node == 0) {
    CBaseDelay_type_info_function();
    __rtti_si(&CAutoTrigger_type_info_node,"12CAutoTrigger",&CBaseDelay_type_info_node);
  }
  return &CAutoTrigger_type_info_node;
}

/* 000eb534  CTriggerRelay_type_info_function  (70 bytes)
 * undefined4 * CTriggerRelay_type_info_function(void)
 */
/* CTriggerRelay type_info function */

undefined4 * CTriggerRelay_type_info_function(void)

{
  if (CTriggerRelay_type_info_node == 0) {
    CBaseDelay_type_info_function();
    __rtti_si(&CTriggerRelay_type_info_node,"13CTriggerRelay",&CBaseDelay_type_info_node);
  }
  return &CTriggerRelay_type_info_node;
}

/* 000eb584  CMultiManager_type_info_function  (70 bytes)
 * undefined4 * CMultiManager_type_info_function(void)
 */
/* CMultiManager type_info function */

undefined4 * CMultiManager_type_info_function(void)

{
  if (CMultiManager_type_info_node == 0) {
    CBaseToggle_type_info_function();
    __rtti_si(&CMultiManager_type_info_node,"13CMultiManager",&CBaseToggle_type_info_node);
  }
  return &CMultiManager_type_info_node;
}

/* 000eb610  CRenderFxManager_type_info_function  (70 bytes)
 * undefined4 * CRenderFxManager_type_info_function(void)
 */
/* CRenderFxManager type_info function */

undefined4 * CRenderFxManager_type_info_function(void)

{
  if (CRenderFxManager_type_info_node == 0) {
    CBaseEntity_type_info_function();
    __rtti_si(&CRenderFxManager_type_info_node,"16CRenderFxManager",&CBaseEntity_type_info_node);
  }
  return &CRenderFxManager_type_info_node;
}

/* 000eb658  CTriggerHurt_type_info_function  (70 bytes)
 * undefined4 * CTriggerHurt_type_info_function(void)
 */
/* CTriggerHurt type_info function */

undefined4 * CTriggerHurt_type_info_function(void)

{
  if (CTriggerHurt_type_info_node == 0) {
    CBaseTrigger_type_info_function();
    __rtti_si(&CTriggerHurt_type_info_node,"12CTriggerHurt",&CBaseTrigger_type_info_node);
  }
  return &CTriggerHurt_type_info_node;
}

/* 000eb6a0  CTriggerMonsterJump_type_info_function  (70 bytes)
 * undefined4 * CTriggerMonsterJump_type_info_function(void)
 */
/* CTriggerMonsterJump type_info function */

undefined4 * CTriggerMonsterJump_type_info_function(void)

{
  if (CTriggerMonsterJump_type_info_node == 0) {
    CBaseTrigger_type_info_function();
    __rtti_si(&CTriggerMonsterJump_type_info_node,"19CTriggerMonsterJump",
              &CBaseTrigger_type_info_node);
  }
  return &CTriggerMonsterJump_type_info_node;
}

/* 000eb6e8  CTriggerCDAudio_type_info_function  (70 bytes)
 * undefined4 * CTriggerCDAudio_type_info_function(void)
 */
/* CTriggerCDAudio type_info function */

undefined4 * CTriggerCDAudio_type_info_function(void)

{
  if (CTriggerCDAudio_type_info_node == 0) {
    CBaseTrigger_type_info_function();
    __rtti_si(&CTriggerCDAudio_type_info_node,"15CTriggerCDAudio",&CBaseTrigger_type_info_node);
  }
  return &CTriggerCDAudio_type_info_node;
}

/* 000eb730  CTargetCDAudio_type_info_function  (70 bytes)
 * undefined4 * CTargetCDAudio_type_info_function(void)
 */
/* CTargetCDAudio type_info function */

undefined4 * CTargetCDAudio_type_info_function(void)

{
  if (CTargetCDAudio_type_info_node == 0) {
    CPointEntity_type_info_function();
    __rtti_si(&CTargetCDAudio_type_info_node,"14CTargetCDAudio",&CPointEntity_type_info_node);
  }
  return &CTargetCDAudio_type_info_node;
}

/* 000eb778  CTriggerMultiple_type_info_function  (70 bytes)
 * undefined4 * CTriggerMultiple_type_info_function(void)
 */
/* CTriggerMultiple type_info function */

undefined4 * CTriggerMultiple_type_info_function(void)

{
  if (CTriggerMultiple_type_info_node == 0) {
    CBaseTrigger_type_info_function();
    __rtti_si(&CTriggerMultiple_type_info_node,"16CTriggerMultiple",&CBaseTrigger_type_info_node);
  }
  return &CTriggerMultiple_type_info_node;
}

/* 000eb7c0  CTriggerOnce_type_info_function  (70 bytes)
 * undefined4 * CTriggerOnce_type_info_function(void)
 */
/* CTriggerOnce type_info function */

undefined4 * CTriggerOnce_type_info_function(void)

{
  if (CTriggerOnce_type_info_node == 0) {
    CTriggerMultiple_type_info_function();
    __rtti_si(&CTriggerOnce_type_info_node,"12CTriggerOnce",&CTriggerMultiple_type_info_node);
  }
  return &CTriggerOnce_type_info_node;
}

/* 000eb808  CTriggerCounter_type_info_function  (70 bytes)
 * undefined4 * CTriggerCounter_type_info_function(void)
 */
/* CTriggerCounter type_info function */

undefined4 * CTriggerCounter_type_info_function(void)

{
  if (CTriggerCounter_type_info_node == 0) {
    CBaseTrigger_type_info_function();
    __rtti_si(&CTriggerCounter_type_info_node,"15CTriggerCounter",&CBaseTrigger_type_info_node);
  }
  return &CTriggerCounter_type_info_node;
}

/* 000eb850  CTriggerVolume_type_info_function  (70 bytes)
 * undefined4 * CTriggerVolume_type_info_function(void)
 */
/* CTriggerVolume type_info function */

undefined4 * CTriggerVolume_type_info_function(void)

{
  if (CTriggerVolume_type_info_node == 0) {
    CPointEntity_type_info_function();
    __rtti_si(&CTriggerVolume_type_info_node,"14CTriggerVolume",&CPointEntity_type_info_node);
  }
  return &CTriggerVolume_type_info_node;
}

/* 000eb898  CFireAndDie_type_info_function  (70 bytes)
 * undefined4 * CFireAndDie_type_info_function(void)
 */
/* CFireAndDie type_info function */

undefined4 * CFireAndDie_type_info_function(void)

{
  if (CFireAndDie_type_info_node == 0) {
    CBaseDelay_type_info_function();
    __rtti_si(&CFireAndDie_type_info_node,"11CFireAndDie",&CBaseDelay_type_info_node);
  }
  return &CFireAndDie_type_info_node;
}

/* 000eb8e8  CChangeLevel_type_info_function  (70 bytes)
 * undefined4 * CChangeLevel_type_info_function(void)
 */
/* CChangeLevel type_info function */

undefined4 * CChangeLevel_type_info_function(void)

{
  if (CChangeLevel_type_info_node == 0) {
    CBaseTrigger_type_info_function();
    __rtti_si(&CChangeLevel_type_info_node,"12CChangeLevel",&CBaseTrigger_type_info_node);
  }
  return &CChangeLevel_type_info_node;
}

/* 000eb930  CLadder_type_info_function  (70 bytes)
 * undefined4 * CLadder_type_info_function(void)
 */
/* CLadder type_info function */

undefined4 * CLadder_type_info_function(void)

{
  if (CLadder_type_info_node == 0) {
    CBaseTrigger_type_info_function();
    __rtti_si(&CLadder_type_info_node,"7CLadder",&CBaseTrigger_type_info_node);
  }
  return &CLadder_type_info_node;
}

/* 000eb978  CTriggerPush_type_info_function  (70 bytes)
 * undefined4 * CTriggerPush_type_info_function(void)
 */
/* CTriggerPush type_info function */

undefined4 * CTriggerPush_type_info_function(void)

{
  if (CTriggerPush_type_info_node == 0) {
    CBaseTrigger_type_info_function();
    __rtti_si(&CTriggerPush_type_info_node,"12CTriggerPush",&CBaseTrigger_type_info_node);
  }
  return &CTriggerPush_type_info_node;
}

/* 000eb9c0  CTriggerTeleport_type_info_function  (70 bytes)
 * undefined4 * CTriggerTeleport_type_info_function(void)
 */
/* CTriggerTeleport type_info function */

undefined4 * CTriggerTeleport_type_info_function(void)

{
  if (CTriggerTeleport_type_info_node == 0) {
    CBaseTrigger_type_info_function();
    __rtti_si(&CTriggerTeleport_type_info_node,"16CTriggerTeleport",&CBaseTrigger_type_info_node);
  }
  return &CTriggerTeleport_type_info_node;
}

/* 000eba08  CTriggerSave_type_info_function  (70 bytes)
 * undefined4 * CTriggerSave_type_info_function(void)
 */
/* CTriggerSave type_info function */

undefined4 * CTriggerSave_type_info_function(void)

{
  if (CTriggerSave_type_info_node == 0) {
    CBaseTrigger_type_info_function();
    __rtti_si(&CTriggerSave_type_info_node,"12CTriggerSave",&CBaseTrigger_type_info_node);
  }
  return &CTriggerSave_type_info_node;
}

/* 000eba50  CTriggerEndSection_type_info_function  (70 bytes)
 * undefined4 * CTriggerEndSection_type_info_function(void)
 */
/* CTriggerEndSection type_info function */

undefined4 * CTriggerEndSection_type_info_function(void)

{
  if (CTriggerEndSection_type_info_node == 0) {
    CBaseTrigger_type_info_function();
    __rtti_si(&CTriggerEndSection_type_info_node,"18CTriggerEndSection",&CBaseTrigger_type_info_node
             );
  }
  return &CTriggerEndSection_type_info_node;
}

/* 000eba98  CTriggerGravity_type_info_function  (70 bytes)
 * undefined4 * CTriggerGravity_type_info_function(void)
 */
/* CTriggerGravity type_info function */

undefined4 * CTriggerGravity_type_info_function(void)

{
  if (CTriggerGravity_type_info_node == 0) {
    CBaseTrigger_type_info_function();
    __rtti_si(&CTriggerGravity_type_info_node,"15CTriggerGravity",&CBaseTrigger_type_info_node);
  }
  return &CTriggerGravity_type_info_node;
}

/* 000ebae0  CTriggerChangeTarget_type_info_function  (70 bytes)
 * undefined4 * CTriggerChangeTarget_type_info_function(void)
 */
/* CTriggerChangeTarget type_info function */

undefined4 * CTriggerChangeTarget_type_info_function(void)

{
  if (CTriggerChangeTarget_type_info_node == 0) {
    CBaseDelay_type_info_function();
    __rtti_si(&CTriggerChangeTarget_type_info_node,"20CTriggerChangeTarget",
              &CBaseDelay_type_info_node);
  }
  return &CTriggerChangeTarget_type_info_node;
}

/* 000ebb30  CTriggerCamera_type_info_function  (70 bytes)
 * undefined4 * CTriggerCamera_type_info_function(void)
 */
/* CTriggerCamera type_info function */

undefined4 * CTriggerCamera_type_info_function(void)

{
  if (CTriggerCamera_type_info_node == 0) {
    CBaseDelay_type_info_function();
    __rtti_si(&CTriggerCamera_type_info_node,"14CTriggerCamera",&CBaseDelay_type_info_node);
  }
  return &CTriggerCamera_type_info_node;
}

/* 000ebb80  UTIL_WeaponTimeBase  (21 bytes)
 * longdouble UTIL_WeaponTimeBase(void)
 */
/* UTIL_WeaponTimeBase(void) */

longdouble UTIL_WeaponTimeBase(void)

{
  return (longdouble)0.0;
}

/* 000ebb98  U_Random  (79 bytes)
 * uint U_Random(void)
 */
/* U_Random(void) */

uint U_Random(void)

{
  glSeed = glSeed * 0x10dcd + *(int *)(seed_table + (glSeed * 0x10dcd & 0xff) * 4) + 1;
  return glSeed & 0xfffffff;
}

/* 000ebbe8  U_Srand  (35 bytes)
 * undefined U_Srand(byte.conflict param_1)
 */
/* U_Srand(unsigned int) */

void U_Srand(byte_conflict param_1)

{
  glSeed = *(undefined4 *)(seed_table + (uint)param_1 * 4);
  return;
}

/* 000ebc0c  UTIL_SharedRandomLong  (72 bytes)
 * int UTIL_SharedRandomLong(char param_1, int param_2, int param_3)
 */
/* UTIL_SharedRandomLong(unsigned int, int, int) */

int UTIL_SharedRandomLong(char param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  U_Srand(param_1 + (char)param_2 + (char)param_3);
  uVar2 = (param_3 - param_2) + 1;
  if (uVar2 != 1) {
    uVar1 = U_Random();
    param_2 = uVar1 % uVar2 + param_2;
  }
  return param_2;
}

/* 000ebc54  UTIL_SharedRandomFloat  (177 bytes)
 * int UTIL_SharedRandomFloat(char param_1, float param_2, float param_3)
 */
/* UTIL_SharedRandomFloat(unsigned int, float, float) */

int UTIL_SharedRandomFloat(char param_1,float param_2,float param_3)

{
  undefined4 local_1c;
  
  U_Srand(SUB41(param_2,0) + param_1 + SUB41(param_3,0));
  U_Random();
  U_Random();
  local_1c = (int)(longlong)ROUND(param_3 - param_2);
  if (local_1c != 0) {
    U_Random();
  }
  return local_1c;
}

/* 000ebd08  UTIL_ParametricRocket  (451 bytes)
 * undefined UTIL_ParametricRocket(int param_1, undefined4 * param_2, undefined4 param_3, undefined4 param_4)
 */
/* UTIL_ParametricRocket(entvars_s *, Vector, Vector, edict_s *) */

void UTIL_ParametricRocket(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_5c [20];
  undefined4 local_48 [14];
  
  puVar8 = (undefined4 *)(param_1 + 0x8c);
  for (iVar7 = 3; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = *param_2;
    param_2 = param_2 + 1;
    puVar8 = puVar8 + 1;
  }
  UTIL_MakeVectors(param_3);
  local_6c = *(float *)(param_1 + 0x8c) + gpGlobals->v_forward[0] * 8192.0;
  local_68 = *(float *)(param_1 + 0x90) + gpGlobals->v_forward[1] * 8192.0;
  local_64 = *(float *)(param_1 + 0x94) + gpGlobals->v_forward[2] * 8192.0;
  UTIL_TraceLine(param_1 + 0x8c,&local_6c,1,param_4,local_5c);
  puVar8 = local_48;
  puVar9 = (undefined4 *)(param_1 + 0x80);
  for (iVar7 = 3; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  fVar2 = *(float *)(param_1 + 0x80) - *(float *)(param_1 + 0x8c);
  fVar4 = *(float *)(param_1 + 0x84) - *(float *)(param_1 + 0x90);
  fVar3 = *(float *)(param_1 + 0x88) - *(float *)(param_1 + 0x94);
  fVar1 = 0.0;
  fVar6 = *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24);
  fVar5 = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28);
  if (0.0 < SQRT(*(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x20) + fVar6 + fVar5)) {
    fVar1 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2) /
            SQRT(*(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x20) + fVar6 + fVar5);
  }
  *(float *)(param_1 + 0x9c) = gpGlobals->time;
  *(float *)(param_1 + 0x98) = fVar1 + gpGlobals->time;
  return;
}

/* 000ebecc  UTIL_SetGroupTrace  (62 bytes)
 * undefined UTIL_SetGroupTrace(undefined4 param_1, undefined4 param_2)
 */
/* UTIL_SetGroupTrace(int, int) */

void UTIL_SetGroupTrace(int param_1,int param_2)

{
  g_groupmask = param_1;
  g_groupop = param_2;
  (*g_engfuncs.pfnSetGroupMask)(param_1,param_2);
  return;
}

/* 000ebf0c  UTIL_UnsetGroupTrace  (64 bytes)
 * undefined UTIL_UnsetGroupTrace(void)
 */
/* UTIL_UnsetGroupTrace(void) */

void UTIL_UnsetGroupTrace(void)

{
  g_groupmask = 0;
  g_groupop = 0;
  (*g_engfuncs.pfnSetGroupMask)(0,0);
  return;
}

/* 000ebff8  UTIL_GetNextBestWeapon  (46 bytes)
 * undefined UTIL_GetNextBestWeapon(undefined4 param_1, undefined4 param_2)
 */
/* UTIL_GetNextBestWeapon(CBasePlayer *, CBasePlayerItem *) */

void UTIL_GetNextBestWeapon(undefined4 param_1,undefined4 param_2)

{
  (**(code **)(*g_pGameRules + 0x18))(g_pGameRules,param_1,param_2);
  return;
}

/* 000ec028  UTIL_AngleMod  (166 bytes)
 * uint UTIL_AngleMod(float param_1)
 */
/* UTIL_AngleMod(float) */

uint UTIL_AngleMod(float param_1)

{
  undefined4 in_EAX;
  uint uVar1;
  
  if (0.0 <= param_1) {
    uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),
                     (ushort)(param_1 < 360.0) << 8 | (ushort)NAN(param_1) << 10 |
                     (ushort)(param_1 == 360.0) << 0xe);
    if (param_1 >= 360.0) {
      uVar1 = (int)ROUND(param_1 * 0.0027777778) * 0x168;
    }
  }
  else {
    uVar1 = (int)ROUND(param_1 * 0.0027777778) * 0x168 + 0x168;
  }
  return uVar1;
}

/* 000ec0d0  UTIL_AngleDiff  (78 bytes)
 * longdouble UTIL_AngleDiff(float param_1, float param_2)
 */
/* UTIL_AngleDiff(float, float) */

longdouble UTIL_AngleDiff(float param_1,float param_2)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)param_1 - (longdouble)param_2;
  if ((longdouble)param_1 <= (longdouble)param_2) {
    if (lVar1 <= (longdouble)-180.0) {
      lVar1 = lVar1 + (longdouble)360.0;
    }
  }
  else if ((longdouble)180.0 <= lVar1) {
    lVar1 = lVar1 - (longdouble)360.0;
  }
  return lVar1;
}

/* 000ec124  UTIL_VecToAngles  (72 bytes)
 * undefined4 * UTIL_VecToAngles(undefined4 * param_1, undefined4 param_2)
 */
/* UTIL_VecToAngles(Vector const &) */

undefined4 * UTIL_VecToAngles(undefined4 *param_1,float *param_2)

{
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  (*g_engfuncs.pfnVecToAngles)(param_2,&local_1c);
  *param_1 = local_1c;
  param_1[1] = local_18;
  param_1[2] = local_14;
  return param_1;
}

/* 000ec16c  UTIL_MoveToOrigin  (77 bytes)
 * undefined UTIL_MoveToOrigin(undefined4 param_1, undefined4 * param_2, undefined4 param_3, undefined4 param_4)
 */
/* UTIL_MoveToOrigin(edict_s *, Vector const &, float, int) */

void UTIL_MoveToOrigin(edict_t *param_1,undefined4 *param_2,float param_3,int param_4)

{
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_2c = (float)*param_2;
  local_28 = param_2[1];
  local_24 = param_2[2];
  (*g_engfuncs.pfnMoveToOrigin)(param_1,&local_2c,param_3,param_4);
  return;
}

/* 000ec1bc  UTIL_EntitiesInBox  (323 bytes)
 * int UTIL_EntitiesInBox(int param_1, int param_2, float * param_3, float * param_4, uint param_5)
 */
/* UTIL_EntitiesInBox(CBaseEntity **, int, Vector const &, Vector const &, int) */

int UTIL_EntitiesInBox(int param_1,int param_2,float *param_3,float *param_4,uint param_5)

{
  edict_t *peVar1;
  edict_t *peVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  
  peVar1 = (*g_engfuncs.pfnPEntityOfEntIndex)(1);
  iVar5 = 0;
  if (peVar1 == (edict_t *)0x0) {
    iVar5 = 0;
  }
  else {
    for (iVar4 = 1; iVar4 < gpGlobals->maxEntities; iVar4 = iVar4 + 1) {
      if ((((peVar1->free == 0) &&
           ((((param_5 == 0 || ((param_5 & (peVar1->v).flags) != 0)) &&
             (*param_3 <= (peVar1->v).absmax[0])) &&
            ((param_3[1] <= (peVar1->v).absmax[1] && (param_3[2] <= (peVar1->v).absmax[2])))))) &&
          ((peVar1->v).absmin[0] <= *param_4)) &&
         (((peVar1->v).absmin[1] <= param_4[1] && ((peVar1->v).absmin[2] <= param_4[2])))) {
        peVar2 = peVar1;
        if (peVar1 == (edict_t *)0x0) {
          peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
        }
        pvVar3 = (void *)0x0;
        if (peVar2 != (edict_t *)0x0) {
          pvVar3 = peVar2->pvPrivateData;
        }
        if (pvVar3 != (void *)0x0) {
          *(void **)(param_1 + iVar5 * 4) = pvVar3;
          iVar5 = iVar5 + 1;
          if (param_2 <= iVar5) {
            return iVar5;
          }
        }
      }
      peVar1 = peVar1 + 1;
    }
  }
  return iVar5;
}

/* 000ec304  UTIL_MonstersInSphere  (309 bytes)
 * int UTIL_MonstersInSphere(int param_1, int param_2, float * param_3, float param_4)
 */
/* UTIL_MonstersInSphere(CBaseEntity **, int, Vector const &, float) */

int UTIL_MonstersInSphere(int param_1,int param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  edict_t *peVar4;
  edict_t *peVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  
  peVar4 = (*g_engfuncs.pfnPEntityOfEntIndex)(1);
  iVar8 = 0;
  fVar1 = param_4 * param_4;
  if (peVar4 == (edict_t *)0x0) {
    iVar8 = 0;
  }
  else {
    for (iVar7 = 1; iVar7 < gpGlobals->maxEntities; iVar7 = iVar7 + 1) {
      if ((((peVar4->free == 0) && (((peVar4->v).flags & 0x28U) != 0)) &&
          (fVar2 = *param_3 - (peVar4->v).origin[0], fVar2 = fVar2 * fVar2, fVar2 <= fVar1)) &&
         ((fVar3 = param_3[1] - (peVar4->v).origin[1], fVar2 = fVar3 * fVar3 + fVar2, fVar2 <= fVar1
          && (fVar3 = param_3[2] - ((peVar4->v).absmin[2] + (peVar4->v).absmax[2]) * 0.5,
             fVar3 * fVar3 + fVar2 <= fVar1)))) {
        peVar5 = peVar4;
        if (peVar4 == (edict_t *)0x0) {
          peVar5 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
        }
        pvVar6 = (void *)0x0;
        if (peVar5 != (edict_t *)0x0) {
          pvVar6 = peVar5->pvPrivateData;
        }
        if (pvVar6 != (void *)0x0) {
          *(void **)(param_1 + iVar8 * 4) = pvVar6;
          iVar8 = iVar8 + 1;
          if (param_2 <= iVar8) {
            return iVar8;
          }
        }
      }
      peVar4 = peVar4 + 1;
    }
  }
  return iVar8;
}

/* 000ec440  UTIL_FindEntityInSphere  (158 bytes)
 * undefined4 UTIL_FindEntityInSphere(int * param_1, undefined4 param_2, undefined4 param_3)
 */
/* UTIL_FindEntityInSphere(CBaseEntity *, Vector const &, float) */

void * UTIL_FindEntityInSphere(int *param_1,float *param_2,float param_3)

{
  bool bVar1;
  edict_t *peVar2;
  int iVar3;
  void *pvVar4;
  
  if (param_1 == (int *)0x0) {
    peVar2 = (edict_t *)0x0;
  }
  else {
    peVar2 = *(edict_t **)(*param_1 + 0x208);
  }
  peVar2 = (*g_engfuncs.pfnFindEntityInSphere)(peVar2,param_2,param_3);
  bVar1 = false;
  if ((peVar2 == (edict_t *)0x0) ||
     (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar2), iVar3 == 0)) {
    bVar1 = true;
  }
  if (bVar1) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (peVar2 == (edict_t *)0x0) {
      peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    }
    pvVar4 = (void *)0x0;
    if (peVar2 != (edict_t *)0x0) {
      pvVar4 = peVar2->pvPrivateData;
    }
  }
  return pvVar4;
}

/* 000ec4e4  UTIL_FindEntityByString  (158 bytes)
 * undefined4 UTIL_FindEntityByString(int * param_1, undefined4 param_2, undefined4 param_3)
 */
/* UTIL_FindEntityByString(CBaseEntity *, char const *, char const *) */

void * UTIL_FindEntityByString(int *param_1,char *param_2,char *param_3)

{
  bool bVar1;
  edict_t *peVar2;
  int iVar3;
  void *pvVar4;
  
  if (param_1 == (int *)0x0) {
    peVar2 = (edict_t *)0x0;
  }
  else {
    peVar2 = *(edict_t **)(*param_1 + 0x208);
  }
  peVar2 = (*g_engfuncs.pfnFindEntityByString)(peVar2,param_2,param_3);
  bVar1 = false;
  if ((peVar2 == (edict_t *)0x0) ||
     (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar2), iVar3 == 0)) {
    bVar1 = true;
  }
  if (bVar1) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (peVar2 == (edict_t *)0x0) {
      peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    }
    pvVar4 = (void *)0x0;
    if (peVar2 != (edict_t *)0x0) {
      pvVar4 = peVar2->pvPrivateData;
    }
  }
  return pvVar4;
}

/* 000ec588  UTIL_FindEntityByClassname  (44 bytes)
 * undefined UTIL_FindEntityByClassname(int * param_1, undefined4 param_2)
 */
/* UTIL_FindEntityByClassname(CBaseEntity *, char const *) */

void UTIL_FindEntityByClassname(int *param_1,undefined4 param_2)

{
  UTIL_FindEntityByString(param_1,"classname",param_2);
  return;
}

/* 000ec5b4  UTIL_FindEntityByTargetname  (44 bytes)
 * undefined UTIL_FindEntityByTargetname(int * param_1, undefined4 param_2)
 */
/* UTIL_FindEntityByTargetname(CBaseEntity *, char const *) */

void UTIL_FindEntityByTargetname(int *param_1,undefined4 param_2)

{
  UTIL_FindEntityByString(param_1,"targetname",param_2);
  return;
}

/* 000ec5e0  UTIL_FindEntityGeneric  (178 bytes)
 * int * UTIL_FindEntityGeneric(undefined4 param_1, float * param_2, float param_3)
 */
/* UTIL_FindEntityGeneric(char const *, Vector &, float) */

int * UTIL_FindEntityGeneric(undefined4 param_1,float *param_2,float param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  piVar7 = (int *)UTIL_FindEntityByTargetname((int *)0x0,param_1);
  if (piVar7 == (int *)0x0) {
    piVar8 = (int *)0x0;
    fVar3 = param_3 * param_3;
    piVar6 = piVar7;
    while (piVar7 = piVar6, fVar2 = fVar3,
          piVar8 = (int *)UTIL_FindEntityByClassname(piVar8,param_1), piVar8 != (int *)0x0) {
      iVar1 = *piVar8;
      fVar3 = *(float *)(iVar1 + 8) - *param_2;
      fVar5 = *(float *)(iVar1 + 0xc) - param_2[1];
      fVar4 = *(float *)(iVar1 + 0x10) - param_2[2];
      fVar3 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3);
      fVar3 = fVar3 * fVar3;
      piVar6 = piVar8;
      if (fVar2 <= fVar3) {
        fVar3 = fVar2;
        piVar6 = piVar7;
      }
    }
  }
  return piVar7;
}

/* 000ec694  UTIL_PlayerByIndex  (85 bytes)
 * int UTIL_PlayerByIndex(int param_1)
 */
/* UTIL_PlayerByIndex(int) */

int UTIL_PlayerByIndex(int param_1)

{
  edict_t *peVar1;
  void *pvVar2;
  
  pvVar2 = (void *)0x0;
  if ((0 < param_1) && (param_1 <= gpGlobals->maxClients)) {
    peVar1 = (*g_engfuncs.pfnPEntityOfEntIndex)(param_1);
    if ((peVar1 != (edict_t *)0x0) && (peVar1->free == 0)) {
      pvVar2 = peVar1->pvPrivateData;
    }
  }
  return (int)pvVar2;
}

/* 000ec6ec  UTIL_MakeVectors  (37 bytes)
 * undefined UTIL_MakeVectors(undefined4 param_1)
 */
/* UTIL_MakeVectors(Vector const &) */

void UTIL_MakeVectors(float *param_1)

{
  (*g_engfuncs.pfnMakeVectors)(param_1);
  return;
}

/* 000ec714  UTIL_MakeAimVectors  (67 bytes)
 * undefined UTIL_MakeAimVectors(uint * param_1)
 */
/* UTIL_MakeAimVectors(Vector const &) */

void UTIL_MakeAimVectors(uint *param_1)

{
  float local_1c;
  uint local_18;
  uint local_14;
  
  local_18 = param_1[1];
  local_14 = param_1[2];
  local_1c = -(float)*param_1;
  (*g_engfuncs.pfnMakeVectors)(&local_1c);
  return;
}

/* 000ec758  UTIL_MakeInvVectors  (143 bytes)
 * undefined UTIL_MakeInvVectors(undefined4 param_1, int param_2)
 */
/* UTIL_MakeInvVectors(Vector const &, globalvars_t *) */

void UTIL_MakeInvVectors(float *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float local_1c [4];
  
  (*g_engfuncs.pfnMakeVectors)(param_1);
  local_1c[0] = *(float *)(param_2 + 0x40) * -1.0;
  local_1c[1] = *(float *)(param_2 + 0x44) * -1.0;
  local_1c[2] = *(float *)(param_2 + 0x48) * -1.0;
  pfVar3 = local_1c;
  puVar4 = (undefined4 *)(param_2 + 0x40);
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_2 + 0x40) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_2 + 0x34) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_2 + 0x38) = uVar1;
  return;
}

/* 000ec7e8  UTIL_EmitAmbientSound  (251 bytes)
 * undefined UTIL_EmitAmbientSound(undefined4 param_1, undefined4 * param_2, char * param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, int param_7)
 */
/* UTIL_EmitAmbientSound(edict_s *, Vector const &, char const *, float, float, int, int) */

void UTIL_EmitAmbientSound
               (edict_t *param_1,undefined4 *param_2,char *param_3,float param_4,float param_5,
               int param_6,int param_7)

{
  int iVar1;
  char *samp;
  char local_4c [32];
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_2c = (float)*param_2;
  local_28 = param_2[1];
  local_24 = param_2[2];
  samp = param_3;
  if ((param_3 != (char *)0x0) && (*param_3 == '!')) {
    samp = local_4c;
    iVar1 = SENTENCEG_Lookup((int)param_3,samp);
    if (iVar1 < 0) {
      return;
    }
  }
  (*g_engfuncs.pfnEmitAmbientSound)
            (param_1,&local_2c,samp,param_4,param_5,param_6,(int)ROUND((float)param_7 * 1.0));
  return;
}

/* 000ec8e8  FixedUnsigned16  (69 bytes)
 * uint FixedUnsigned16(float param_1, float param_2)
 * called by: UTIL_HudMessage, UTIL_ScreenFadeBuild, UTIL_ScreenShake
 */
/* FixedUnsigned16(float, float) */

uint FixedUnsigned16(float param_1,float param_2)

{
  uint uVar1;
  
  uVar1 = (int)ROUND(param_2 * param_1) & 0xffffffffU - ((int)ROUND(param_2 * param_1) >> 0x1f);
  if (0xffff < (int)uVar1) {
    uVar1 = 0xffff;
  }
  return uVar1;
}

/* 000ec930  FixedSigned16  (70 bytes)
 * int FixedSigned16(float param_1, float param_2)
 * called by: UTIL_HudMessage
 */
/* FixedSigned16(float, float) */

int FixedSigned16(float param_1,float param_2)

{
  int iVar1;
  
  iVar1 = (int)ROUND(param_2 * param_1);
  if (0x7fff < iVar1) {
    iVar1 = 0x7fff;
  }
  if (iVar1 < -0x8000) {
    iVar1 = -0x8000;
  }
  return iVar1;
}

/* 000ec978  UTIL_ScreenShake  (491 bytes)
 * undefined UTIL_ScreenShake(float * param_1, float param_2, float param_3, float param_4, float param_5)
 */
/* UTIL_ScreenShake(Vector const &, float, float, float, float) */

void UTIL_ScreenShake(float *param_1,float param_2,float param_3,float param_4,float param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  longdouble lVar11;
  
  uVar6 = FixedUnsigned16(param_4,4096.0);
  uVar7 = FixedUnsigned16(param_3,256.0);
  iVar10 = 1;
  if (0 < gpGlobals->maxClients) {
    do {
      piVar8 = (int *)UTIL_PlayerByIndex(iVar10);
      if ((piVar8 != (int *)0x0) && ((*(byte *)(*piVar8 + 0x1a5) & 2) != 0)) {
        if ((param_5 <= 0.0) ||
           (iVar1 = *piVar8, fVar3 = *param_1 - *(float *)(iVar1 + 8),
           fVar5 = param_1[1] - *(float *)(iVar1 + 0xc),
           fVar4 = param_1[2] - *(float *)(iVar1 + 0x10), fVar2 = 0.0,
           SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3) < param_5)) {
          fVar2 = param_2;
        }
        if (fVar2 != 0.0) {
          uVar9 = FixedUnsigned16(fVar2,4096.0);
          (*g_engfuncs.pfnMessageBegin)(1,gmsgShake,(float *)0x0,*(edict_t **)(*piVar8 + 0x208));
          (*g_engfuncs.pfnWriteShort)(uVar9 & 0xffff);
          lVar11 = (longdouble)(**(code **)(piVar8[0x18] + 0x10))(piVar8);
          (*g_engfuncs.pfnWriteShort)((int)ROUND((longdouble)(uVar6 & 0xffff) / lVar11));
          lVar11 = (longdouble)(**(code **)(piVar8[0x18] + 0x10))(piVar8);
          (*g_engfuncs.pfnWriteShort)((int)ROUND((longdouble)(uVar7 & 0xffff) / lVar11));
          (*g_engfuncs.pfnMessageEnd)();
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 <= gpGlobals->maxClients);
  }
  return;
}

/* 000ecb64  UTIL_ScreenShakeAll  (47 bytes)
 * undefined UTIL_ScreenShakeAll(float * param_1, float param_2, float param_3, float param_4)
 */
/* UTIL_ScreenShakeAll(Vector const &, float, float, float) */

void UTIL_ScreenShakeAll(float *param_1,float param_2,float param_3,float param_4)

{
  UTIL_ScreenShake(param_1,param_2,param_3,param_4,0.0);
  return;
}

/* 000ecb94  UTIL_ScreenFadeBuild  (191 bytes)
 * undefined UTIL_ScreenFadeBuild(undefined2 * param_1, float * param_2, float param_3, float param_4, undefined1 param_5, undefined2 param_6)
 */
/* UTIL_ScreenFadeBuild(ScreenFade &, Vector const &, float, float, int, int) */

void UTIL_ScreenFadeBuild
               (undefined2 *param_1,float *param_2,float param_3,float param_4,undefined1 param_5,
               undefined2 param_6)

{
  uint uVar1;
  
  uVar1 = FixedUnsigned16(param_3,4096.0);
  *param_1 = (short)uVar1;
  uVar1 = FixedUnsigned16(param_4,4096.0);
  param_1[1] = (short)uVar1;
  *(char *)(param_1 + 3) = (char)(int)ROUND(*param_2);
  *(char *)((int)param_1 + 7) = (char)(int)ROUND(param_2[1]);
  *(char *)(param_1 + 4) = (char)(int)ROUND(param_2[2]);
  *(undefined1 *)((int)param_1 + 9) = param_5;
  param_1[2] = param_6;
  return;
}

/* 000ecc54  UTIL_ScreenFadeWrite  (293 bytes)
 * undefined UTIL_ScreenFadeWrite(ushort * param_1, int * param_2)
 */
/* UTIL_ScreenFadeWrite(ScreenFade const &, CBaseEntity *) */

void UTIL_ScreenFadeWrite(ushort *param_1,int *param_2)

{
  int iVar1;
  longdouble lVar2;
  
  if (param_2 != (int *)0x0) {
    iVar1 = (**(code **)(param_2[0x18] + 0xcc))(param_2);
    if (iVar1 != 0) {
      (*g_engfuncs.pfnMessageBegin)(1,gmsgTSFade,(float *)0x0,*(edict_t **)(*param_2 + 0x208));
      lVar2 = (longdouble)(**(code **)(param_2[0x18] + 0x10))(param_2);
      (*g_engfuncs.pfnWriteShort)((int)ROUND((longdouble)*param_1 / lVar2));
      lVar2 = (longdouble)(**(code **)(param_2[0x18] + 0x10))(param_2);
      (*g_engfuncs.pfnWriteShort)((int)ROUND((longdouble)param_1[1] / lVar2));
      (*g_engfuncs.pfnWriteShort)((int)(short)param_1[2]);
      (*g_engfuncs.pfnWriteByte)((uint)(byte)param_1[3]);
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)((int)param_1 + 7));
      (*g_engfuncs.pfnWriteByte)((uint)(byte)param_1[4]);
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)((int)param_1 + 9));
      (*g_engfuncs.pfnMessageEnd)();
    }
  }
  return;
}

/* 000ecd7c  UTIL_ScreenFadeAll  (107 bytes)
 * undefined UTIL_ScreenFadeAll(float * param_1, float param_2, float param_3, undefined1 param_4, undefined2 param_5)
 */
/* UTIL_ScreenFadeAll(Vector const &, float, float, int, int) */

void UTIL_ScreenFadeAll(float *param_1,float param_2,float param_3,undefined1 param_4,
                       undefined2 param_5)

{
  int *piVar1;
  int iVar2;
  ushort local_1c [8];
  
  UTIL_ScreenFadeBuild(local_1c,param_1,param_2,param_3,param_4,param_5);
  for (iVar2 = 1; iVar2 <= gpGlobals->maxClients; iVar2 = iVar2 + 1) {
    piVar1 = (int *)UTIL_PlayerByIndex(iVar2);
    UTIL_ScreenFadeWrite(local_1c,piVar1);
  }
  return;
}

/* 000ecdec  UTIL_ScreenFade  (72 bytes)
 * undefined UTIL_ScreenFade(int * param_1, float * param_2, float param_3, float param_4, undefined1 param_5, undefined2 param_6)
 */
/* UTIL_ScreenFade(CBaseEntity *, Vector const &, float, float, int, int) */

void UTIL_ScreenFade(int *param_1,float *param_2,float param_3,float param_4,undefined1 param_5,
                    undefined2 param_6)

{
  ushort local_1c [8];
  
  UTIL_ScreenFadeBuild(local_1c,param_2,param_3,param_4,param_5,param_6);
  UTIL_ScreenFadeWrite(local_1c,param_1);
  return;
}

/* 000ece34  UTIL_HudMessage  (527 bytes)
 * undefined UTIL_HudMessage(int * param_1, float * param_2, char * param_3)
 */
/* UTIL_HudMessage(CBaseEntity *, hudtextparms_s const &, char const *) */

void UTIL_HudMessage(int *param_1,float *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char local_21c [511];
  undefined1 local_1d;
  
  if ((param_1 != (int *)0x0) && (iVar2 = (**(code **)(param_1[0x18] + 0xcc))(param_1), iVar2 != 0))
  {
    (*g_engfuncs.pfnMessageBegin)(1,0x17,(float *)0x0,*(edict_t **)(*param_1 + 0x208));
    (*g_engfuncs.pfnWriteByte)(0x1d);
    (*g_engfuncs.pfnWriteByte)((uint)*(byte *)(param_2 + 9));
    iVar2 = FixedSigned16(*param_2,8192.0);
    (*g_engfuncs.pfnWriteShort)((int)(short)iVar2);
    iVar2 = FixedSigned16(param_2[1],8192.0);
    (*g_engfuncs.pfnWriteShort)((int)(short)iVar2);
    (*g_engfuncs.pfnWriteByte)((int)param_2[2]);
    (*g_engfuncs.pfnWriteByte)((uint)*(byte *)(param_2 + 3));
    (*g_engfuncs.pfnWriteByte)((uint)*(byte *)((int)param_2 + 0xd));
    (*g_engfuncs.pfnWriteByte)((uint)*(byte *)((int)param_2 + 0xe));
    (*g_engfuncs.pfnWriteByte)((uint)*(byte *)((int)param_2 + 0xf));
    (*g_engfuncs.pfnWriteByte)((uint)*(byte *)(param_2 + 4));
    (*g_engfuncs.pfnWriteByte)((uint)*(byte *)((int)param_2 + 0x11));
    (*g_engfuncs.pfnWriteByte)((uint)*(byte *)((int)param_2 + 0x12));
    (*g_engfuncs.pfnWriteByte)((uint)*(byte *)((int)param_2 + 0x13));
    uVar3 = FixedUnsigned16(param_2[5],256.0);
    (*g_engfuncs.pfnWriteShort)(uVar3 & 0xffff);
    uVar3 = FixedUnsigned16(param_2[6],256.0);
    (*g_engfuncs.pfnWriteShort)(uVar3 & 0xffff);
    uVar3 = FixedUnsigned16(param_2[7],256.0);
    (*g_engfuncs.pfnWriteShort)(uVar3 & 0xffff);
    if (param_2[2] == 2.8026e-45) {
      uVar3 = FixedUnsigned16(param_2[8],256.0);
      (*g_engfuncs.pfnWriteShort)(uVar3 & 0xffff);
    }
    uVar3 = 0xffffffff;
    pcVar4 = param_3;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (0x1ff < ~uVar3 - 1) {
      strncpy(local_21c,param_3,0x1ff);
      local_1d = 0;
      param_3 = local_21c;
    }
    (*g_engfuncs.pfnWriteString)(param_3);
    (*g_engfuncs.pfnMessageEnd)();
  }
  return;
}

/* 000ed044  UTIL_HudMessageAll  (89 bytes)
 * undefined UTIL_HudMessageAll(float * param_1, char * param_2)
 */
/* UTIL_HudMessageAll(hudtextparms_s const &, char const *) */

void UTIL_HudMessageAll(float *param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  
  for (iVar2 = 1; iVar2 <= gpGlobals->maxClients; iVar2 = iVar2 + 1) {
    piVar1 = (int *)UTIL_PlayerByIndex(iVar2);
    if (piVar1 != (int *)0x0) {
      UTIL_HudMessage(piVar1,param_1,param_2);
    }
  }
  return;
}

/* 000ed0a0  UTIL_ClientPrintAll  (202 bytes)
 * undefined UTIL_ClientPrintAll(undefined4 param_1, undefined4 param_2, int param_3, int param_4, int param_5, int param_6)
 */
/* UTIL_ClientPrintAll(int, char const *, char const *, char const *, char const *, char const *) */

void UTIL_ClientPrintAll(int param_1,char *param_2,int param_3,int param_4,int param_5,int param_6)

{
  (*g_engfuncs.pfnMessageBegin)(2,gmsgTextMsg,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(param_1);
  (*g_engfuncs.pfnWriteString)(param_2);
  if (param_3 != 0) {
    (*g_engfuncs.pfnWriteString)((char *)param_3);
  }
  if (param_4 != 0) {
    (*g_engfuncs.pfnWriteString)((char *)param_4);
  }
  if (param_5 != 0) {
    (*g_engfuncs.pfnWriteString)((char *)param_5);
  }
  if (param_6 != 0) {
    (*g_engfuncs.pfnWriteString)((char *)param_6);
  }
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 000ed16c  ClientPrint  (210 bytes)
 * undefined ClientPrint(int param_1, undefined4 param_2, undefined4 param_3, int param_4, int param_5, int param_6, int param_7)
 */
/* ClientPrint(entvars_s *, int, char const *, char const *, char const *, char const *, char const
   *) */

void ClientPrint(int param_1,int param_2,char *param_3,int param_4,int param_5,int param_6,
                int param_7)

{
  (*g_engfuncs.pfnMessageBegin)(1,gmsgTextMsg,(float *)0x0,*(edict_t **)(param_1 + 0x208));
  (*g_engfuncs.pfnWriteByte)(param_2);
  (*g_engfuncs.pfnWriteString)(param_3);
  if (param_4 != 0) {
    (*g_engfuncs.pfnWriteString)((char *)param_4);
  }
  if (param_5 != 0) {
    (*g_engfuncs.pfnWriteString)((char *)param_5);
  }
  if (param_6 != 0) {
    (*g_engfuncs.pfnWriteString)((char *)param_6);
  }
  if (param_7 != 0) {
    (*g_engfuncs.pfnWriteString)((char *)param_7);
  }
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 000ed240  UTIL_SayText  (123 bytes)
 * undefined UTIL_SayText(undefined4 param_1, int * param_2)
 */
/* UTIL_SayText(char const *, CBaseEntity *) */

void UTIL_SayText(char *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_2[0x18] + 0xcc))(param_2);
  if (iVar1 != 0) {
    (*g_engfuncs.pfnMessageBegin)(1,gmsgSayText,(float *)0x0,*(edict_t **)(*param_2 + 0x208));
    iVar1 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*param_2 + 0x208));
    (*g_engfuncs.pfnWriteByte)(iVar1);
    (*g_engfuncs.pfnWriteString)(param_1);
    (*g_engfuncs.pfnMessageEnd)();
  }
  return;
}

/* 000ed2bc  UTIL_SayTextAll  (102 bytes)
 * undefined UTIL_SayTextAll(undefined4 param_1, int * param_2)
 */
/* UTIL_SayTextAll(char const *, CBaseEntity *) */

void UTIL_SayTextAll(char *param_1,int *param_2)

{
  int iValue;
  
  (*g_engfuncs.pfnMessageBegin)(2,gmsgSayText,(float *)0x0,(edict_t *)0x0);
  iValue = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*param_2 + 0x208));
  (*g_engfuncs.pfnWriteByte)(iValue);
  (*g_engfuncs.pfnWriteString)(param_1);
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 000ed324  UTIL_dtos1  (51 bytes)
 * undefined8 * UTIL_dtos1(undefined4 param_1)
 */
/* UTIL_dtos1(int) */

undefined8 * UTIL_dtos1(undefined4 param_1)

{
  sprintf((char *)&buf_1269,"%d",param_1);
  return &buf_1269;
}

/* 000ed358  UTIL_dtos2  (51 bytes)
 * undefined8 * UTIL_dtos2(undefined4 param_1)
 */
/* UTIL_dtos2(int) */

undefined8 * UTIL_dtos2(undefined4 param_1)

{
  sprintf((char *)&buf_1273,"%d",param_1);
  return &buf_1273;
}

/* 000ed38c  UTIL_dtos3  (51 bytes)
 * undefined8 * UTIL_dtos3(undefined4 param_1)
 */
/* UTIL_dtos3(int) */

undefined8 * UTIL_dtos3(undefined4 param_1)

{
  sprintf((char *)&buf_1277,"%d",param_1);
  return &buf_1277;
}

/* 000ed3c0  UTIL_dtos4  (51 bytes)
 * undefined8 * UTIL_dtos4(undefined4 param_1)
 */
/* UTIL_dtos4(int) */

undefined8 * UTIL_dtos4(undefined4 param_1)

{
  sprintf((char *)&buf_1281,"%d",param_1);
  return &buf_1281;
}

/* 000ed3f4  UTIL_ShowMessage  (105 bytes)
 * undefined UTIL_ShowMessage(undefined4 param_1, int * param_2)
 */
/* UTIL_ShowMessage(char const *, CBaseEntity *) */

void UTIL_ShowMessage(char *param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 != (int *)0x0) {
    iVar1 = (**(code **)(param_2[0x18] + 0xcc))(param_2);
    if (iVar1 != 0) {
      (*g_engfuncs.pfnMessageBegin)(1,gmsgHudText,(float *)0x0,*(edict_t **)(*param_2 + 0x208));
      (*g_engfuncs.pfnWriteString)(param_1);
      (*g_engfuncs.pfnMessageEnd)();
    }
  }
  return;
}

/* 000ed460  UTIL_ShowMessageAll  (76 bytes)
 * undefined UTIL_ShowMessageAll(undefined4 param_1)
 */
/* UTIL_ShowMessageAll(char const *) */

void UTIL_ShowMessageAll(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  for (iVar2 = 1; iVar2 <= gpGlobals->maxClients; iVar2 = iVar2 + 1) {
    piVar1 = (int *)UTIL_PlayerByIndex(iVar2);
    if (piVar1 != (int *)0x0) {
      UTIL_ShowMessage(param_1,piVar1);
    }
  }
  return;
}

/* 000ed4b0  UTIL_TraceLine  (79 bytes)
 * undefined UTIL_TraceLine(undefined4 param_1, undefined4 param_2, int param_3, int param_4, undefined4 param_5, undefined4 param_6)
 */
/* UTIL_TraceLine(Vector const &, Vector const &, IGNORE_MONSTERS, IGNORE_GLASS, edict_s *,
   TraceResult *) */

void UTIL_TraceLine(float *param_1,float *param_2,int param_3,int param_4,edict_t *param_5,
                   TraceResult *param_6)

{
  uint fNoMonsters;
  
  fNoMonsters = (uint)(param_3 == 1);
  if (param_4 != 0) {
    fNoMonsters = fNoMonsters | 0x100;
  }
  (*g_engfuncs.pfnTraceLine)(param_1,param_2,fNoMonsters,param_5,param_6);
  return;
}

/* 000ed500  UTIL_TraceLine  (63 bytes)
 * undefined UTIL_TraceLine(undefined4 param_1, undefined4 param_2, int param_3, undefined4 param_4, undefined4 param_5)
 */
/* UTIL_TraceLine(Vector const &, Vector const &, IGNORE_MONSTERS, edict_s *, TraceResult *) */

void UTIL_TraceLine(float *param_1,float *param_2,int param_3,edict_t *param_4,TraceResult *param_5)

{
  (*g_engfuncs.pfnTraceLine)(param_1,param_2,SUB14(param_3 == 1,0),param_4,param_5);
  return;
}

/* 000ed540  UTIL_TraceHull  (70 bytes)
 * undefined UTIL_TraceHull(undefined4 param_1, undefined4 param_2, int param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 */
/* UTIL_TraceHull(Vector const &, Vector const &, IGNORE_MONSTERS, int, edict_s *, TraceResult *) */

void UTIL_TraceHull(float *param_1,float *param_2,int param_3,int param_4,edict_t *param_5,
                   TraceResult *param_6)

{
  (*g_engfuncs.pfnTraceHull)(param_1,param_2,SUB14(param_3 == 1,0),param_4,param_5,param_6);
  return;
}

/* 000ed588  UTIL_TraceModel  (56 bytes)
 * undefined UTIL_TraceModel(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 */
/* UTIL_TraceModel(Vector const &, Vector const &, int, edict_s *, TraceResult *) */

void UTIL_TraceModel(float *param_1,float *param_2,int param_3,edict_t *param_4,TraceResult *param_5
                    )

{
  (*g_engfuncs.pfnTraceModel)(param_1,param_2,param_3,param_4,param_5);
  return;
}

/* 000ed5c0  UTIL_GetGlobalTrace  (364 bytes)
 * undefined UTIL_GetGlobalTrace(int * param_1)
 */
/* UTIL_GetGlobalTrace(void) */

void UTIL_GetGlobalTrace(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  vec_t *pvVar7;
  vec_t *pvVar8;
  vec_t local_48;
  int local_44;
  int local_40;
  float local_3c;
  vec_t local_38;
  int local_34;
  int local_30;
  edict_t *local_2c;
  
  fVar1 = gpGlobals->trace_allsolid;
  fVar2 = gpGlobals->trace_startsolid;
  fVar3 = gpGlobals->trace_inopen;
  fVar4 = gpGlobals->trace_inwater;
  fVar5 = gpGlobals->trace_fraction;
  local_3c = gpGlobals->trace_plane_dist;
  local_2c = gpGlobals->trace_ent;
  pvVar7 = gpGlobals->trace_endpos;
  pvVar8 = &local_48;
  for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pvVar8 = *pvVar7;
    pvVar7 = pvVar7 + 1;
    pvVar8 = pvVar8 + 1;
  }
  pvVar7 = gpGlobals->trace_plane_normal;
  pvVar8 = &local_38;
  for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pvVar8 = *pvVar7;
    pvVar7 = pvVar7 + 1;
    pvVar8 = pvVar8 + 1;
  }
  iVar6 = gpGlobals->trace_hitgroup;
  *param_1 = (int)ROUND(fVar1);
  param_1[1] = (int)ROUND(fVar2);
  param_1[2] = (int)ROUND(fVar3);
  param_1[3] = (int)ROUND(fVar4);
  param_1[4] = (int)fVar5;
  param_1[5] = (int)local_48;
  param_1[6] = local_44;
  param_1[7] = local_40;
  param_1[8] = (int)local_3c;
  param_1[9] = (int)local_38;
  param_1[10] = local_34;
  param_1[0xb] = local_30;
  param_1[0xc] = (int)local_2c;
  param_1[0xd] = iVar6;
  return;
}

/* 000ed72c  UTIL_SetSize  (51 bytes)
 * undefined UTIL_SetSize(int param_1, undefined4 param_2, undefined4 param_3)
 */
/* UTIL_SetSize(entvars_s *, Vector const &, Vector const &) */

void UTIL_SetSize(int param_1,float *param_2,float *param_3)

{
  (*g_engfuncs.pfnSetSize)(*(edict_t **)(param_1 + 0x208),param_2,param_3);
  return;
}

/* 000ed760  UTIL_VecToYaw  (37 bytes)
 * undefined UTIL_VecToYaw(undefined4 param_1)
 */
/* UTIL_VecToYaw(Vector const &) */

void UTIL_VecToYaw(float *param_1)

{
  (*g_engfuncs.pfnVecToYaw)(param_1);
  return;
}

/* 000ed788  UTIL_SetOrigin  (47 bytes)
 * undefined UTIL_SetOrigin(int param_1, undefined4 param_2)
 */
/* UTIL_SetOrigin(entvars_s *, Vector const &) */

void UTIL_SetOrigin(int param_1,float *param_2)

{
  (*g_engfuncs.pfnSetOrigin)(*(edict_t **)(param_1 + 0x208),param_2);
  return;
}

/* 000ed7b8  UTIL_ParticleEffect  (87 bytes)
 * undefined UTIL_ParticleEffect(undefined4 param_1, undefined4 param_2, uint param_3, uint param_4)
 */
/* UTIL_ParticleEffect(Vector const &, Vector const &, unsigned long, unsigned long) */

void UTIL_ParticleEffect(float *param_1,float *param_2,uint param_3,uint param_4)

{
  (*g_engfuncs.pfnParticleEffect)(param_1,param_2,(float)param_3,(float)param_4);
  return;
}

/* 000ed810  UTIL_Approach  (53 bytes)
 * longdouble UTIL_Approach(float param_1, float param_2, float param_3)
 */
/* UTIL_Approach(float, float, float) */

longdouble UTIL_Approach(float param_1,float param_2,float param_3)

{
  longdouble lVar1;
  longdouble lVar2;
  longdouble lVar3;
  
  lVar1 = (longdouble)param_2;
  lVar2 = (longdouble)param_3;
  lVar3 = (longdouble)param_1 - lVar1;
  if (lVar2 < lVar3) {
    return lVar1 + lVar2;
  }
  if (lVar3 < -lVar2) {
    return lVar1 - lVar2;
  }
  return (longdouble)param_1;
}

/* 000ed848  UTIL_ApproachAngle  (170 bytes)
 * longdouble UTIL_ApproachAngle(float param_1, undefined4 param_2, float param_3)
 */
/* UTIL_ApproachAngle(float, float, float) */

longdouble UTIL_ApproachAngle(float param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  longdouble extraout_ST0;
  longdouble extraout_ST0_00;
  longdouble lVar2;
  
  UTIL_AngleMod(param_1);
  fVar1 = (float)extraout_ST0;
  UTIL_AngleMod(fVar1);
  lVar2 = (longdouble)fVar1 - extraout_ST0_00;
  if (param_3 < 0.0) {
    param_3 = -param_3;
  }
  if ((longdouble)-180.0 <= lVar2) {
    if ((longdouble)180.0 < lVar2) {
      lVar2 = lVar2 - (longdouble)360.0;
    }
  }
  else {
    lVar2 = lVar2 + (longdouble)360.0;
  }
  if (lVar2 <= (longdouble)param_3) {
    if (-(longdouble)param_3 <= lVar2) {
      lVar2 = (longdouble)fVar1;
    }
    else {
      lVar2 = extraout_ST0_00 - (longdouble)param_3;
    }
  }
  else {
    lVar2 = extraout_ST0_00 + (longdouble)param_3;
  }
  return lVar2;
}

/* 000ed8f8  UTIL_AngleDistance  (61 bytes)
 * longdouble UTIL_AngleDistance(float param_1, float param_2)
 */
/* UTIL_AngleDistance(float, float) */

longdouble UTIL_AngleDistance(float param_1,float param_2)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)param_1 - (longdouble)param_2;
  if ((longdouble)-180.0 <= lVar1) {
    if ((longdouble)180.0 < lVar1) {
      lVar1 = lVar1 - (longdouble)360.0;
    }
  }
  else {
    lVar1 = lVar1 + (longdouble)360.0;
  }
  return lVar1;
}

/* 000ed938  UTIL_SplineFraction  (45 bytes)
 * longdouble UTIL_SplineFraction(float param_1, float param_2)
 */
/* UTIL_SplineFraction(float, float) */

longdouble UTIL_SplineFraction(float param_1,float param_2)

{
  longdouble lVar1;
  longdouble lVar2;
  
  lVar2 = (longdouble)param_1 * (longdouble)param_2;
  lVar1 = lVar2 * lVar2;
  return lVar1 * (longdouble)3.0 - (lVar1 + lVar1) * lVar2;
}

/* 000ed968  UTIL_VarArgs  (49 bytes)
 * undefined1 * UTIL_VarArgs(char * param_1, ...)
 */
/* UTIL_VarArgs(char *,...) */

undefined1 * UTIL_VarArgs(char *param_1,...)

{
  vsprintf(string_1333,param_1,&stack0x00000008);
  return string_1333;
}

/* 000ed99c  UTIL_GetAimVector  (77 bytes)
 * undefined4 * UTIL_GetAimVector(undefined4 * param_1, undefined4 param_2, undefined4 param_3)
 */
/* UTIL_GetAimVector(edict_s *, float) */

undefined4 * UTIL_GetAimVector(undefined4 *param_1,edict_t *param_2,float param_3)

{
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  (*g_engfuncs.pfnGetAimVector)(param_2,param_3,&local_1c);
  *param_1 = local_1c;
  param_1[1] = local_18;
  param_1[2] = local_14;
  return param_1;
}

/* 000ed9ec  UTIL_IsMasterTriggered  (227 bytes)
 * undefined4 UTIL_IsMasterTriggered(int param_1, undefined4 param_2)
 */
/* UTIL_IsMasterTriggered(int, CBaseEntity *) */

undefined4 UTIL_IsMasterTriggered(int param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  edict_t *pEdict;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  
  if (param_1 != 0) {
    pEdict = (*g_engfuncs.pfnFindEntityByString)
                       ((edict_t *)0x0,"targetname",gpGlobals->pStringBase + param_1);
    bVar1 = false;
    if ((pEdict == (edict_t *)0x0) ||
       (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict), iVar3 == 0)) {
      bVar1 = true;
    }
    if (!bVar1) {
      if (pEdict == (edict_t *)0x0) {
        pEdict = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
      }
      pvVar5 = (void *)0x0;
      if (pEdict != (edict_t *)0x0) {
        pvVar5 = pEdict->pvPrivateData;
      }
      if ((pvVar5 != (void *)0x0) &&
         (cVar2 = (**(code **)(*(int *)((int)pvVar5 + 0x60) + 0x38))(pvVar5), cVar2 < '\0')) {
        uVar4 = (**(code **)(*(int *)((int)pvVar5 + 0x60) + 0x6c))(pvVar5,param_2);
        return uVar4;
      }
    }
    (*g_engfuncs.pfnAlertMessage)(at_console,"Master was null or not a master!\n");
  }
  return 1;
}

/* 000edad0  UTIL_ShouldShowBlood  (104 bytes)
 * undefined4 UTIL_ShouldShowBlood(int param_1)
 */
/* UTIL_ShouldShowBlood(int) */

undefined4 UTIL_ShouldShowBlood(int param_1)

{
  char *szVarName;
  longdouble lVar1;
  
  if (param_1 != -1) {
    if (param_1 == 0xf7) {
      szVarName = "violence_hblood";
    }
    else {
      szVarName = "violence_ablood";
    }
    lVar1 = (longdouble)(*g_engfuncs.pfnCVarGetFloat)(szVarName);
    if (lVar1 != (longdouble)0.0) {
      return 1;
    }
  }
  return 0;
}

/* 000edb40  UTIL_PointContents  (40 bytes)
 * undefined UTIL_PointContents(undefined4 param_1)
 */
/* UTIL_PointContents(Vector const &) */

void UTIL_PointContents(float *param_1)

{
  (*g_engfuncs.pfnPointContents)(param_1);
  return;
}

/* 000edb68  UTIL_BloodStream  (250 bytes)
 * undefined UTIL_BloodStream(undefined4 * param_1, undefined4 * param_2, uint param_3, int param_4)
 */
/* UTIL_BloodStream(Vector const &, Vector const &, int, int) */

void UTIL_BloodStream(undefined4 *param_1,undefined4 *param_2,uint param_3,int param_4)

{
  int iVar1;
  
  iVar1 = UTIL_ShouldShowBlood(param_3);
  if (iVar1 != 0) {
    if (g_Language == 1) {
      param_3 = param_3 & (param_3 == 0xf7) - 1;
    }
    (*g_engfuncs.pfnMessageBegin)(4,0x17,(float *)param_1,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(0x65);
    (*g_engfuncs.pfnWriteCoord)((float)*param_1);
    (*g_engfuncs.pfnWriteCoord)((float)param_1[1]);
    (*g_engfuncs.pfnWriteCoord)((float)param_1[2]);
    (*g_engfuncs.pfnWriteCoord)((float)*param_2);
    (*g_engfuncs.pfnWriteCoord)((float)param_2[1]);
    (*g_engfuncs.pfnWriteCoord)((float)param_2[2]);
    (*g_engfuncs.pfnWriteByte)(param_3);
    if (0xff < param_4) {
      param_4 = 0xff;
    }
    (*g_engfuncs.pfnWriteByte)(param_4);
    (*g_engfuncs.pfnMessageEnd)();
  }
  return;
}

/* 000edc64  UTIL_BloodDrips  (336 bytes)
 * undefined UTIL_BloodDrips(undefined4 * param_1, undefined4 param_2, uint param_3, int param_4)
 */
/* UTIL_BloodDrips(Vector const &, Vector const &, int, int) */

void UTIL_BloodDrips(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  
  iVar1 = UTIL_ShouldShowBlood(param_3);
  if (((iVar1 != 0) && (param_3 != 0xffffffff)) && (param_4 != 0)) {
    if (g_Language == 1) {
      param_3 = param_3 & (param_3 == 0xf7) - 1;
    }
    iVar1 = (**(code **)(*g_pGameRules + 0x1c))(g_pGameRules);
    if (iVar1 != 0) {
      param_4 = param_4 << 1;
    }
    if (0xff < param_4) {
      param_4 = 0xff;
    }
    (*g_engfuncs.pfnMessageBegin)(4,0x17,(float *)param_1,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(0x73);
    (*g_engfuncs.pfnWriteCoord)((float)*param_1);
    (*g_engfuncs.pfnWriteCoord)((float)param_1[1]);
    (*g_engfuncs.pfnWriteCoord)((float)param_1[2]);
    (*g_engfuncs.pfnWriteShort)((int)g_sModelIndexBloodSpray);
    (*g_engfuncs.pfnWriteShort)((int)g_sModelIndexBloodDrop);
    (*g_engfuncs.pfnWriteByte)(param_3);
    iVar1 = param_4 / 10;
    if (iVar1 < 0x10) {
      if (iVar1 < 3) {
        iVar1 = 3;
      }
    }
    else {
      iVar1 = 0x10;
    }
    (*g_engfuncs.pfnWriteByte)(iVar1);
    (*g_engfuncs.pfnMessageEnd)();
  }
  return;
}

/* 000eddb8  UTIL_RandomBloodVector  (125 bytes)
 * float * UTIL_RandomBloodVector(float * param_1)
 */
/* UTIL_RandomBloodVector(void) */

float * UTIL_RandomBloodVector(float *param_1)

{
  longdouble lVar1;
  longdouble lVar2;
  longdouble lVar3;
  
  lVar1 = (longdouble)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
  lVar2 = (longdouble)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
  lVar3 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.0,1.0);
  *param_1 = (float)lVar1;
  param_1[1] = (float)lVar2;
  param_1[2] = (float)lVar3;
  return param_1;
}

/* 000ede38  UTIL_BloodDecalTrace  (113 bytes)
 * undefined UTIL_BloodDecalTrace(int param_1, int param_2)
 */
/* UTIL_BloodDecalTrace(TraceResult *, int) */

void UTIL_BloodDecalTrace(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = UTIL_ShouldShowBlood(param_2);
  if (iVar1 != 0) {
    if (param_2 == 0xf7) {
      iVar1 = (*g_engfuncs.pfnRandomLong)(0,5);
      iVar1 = iVar1 + 0xd;
    }
    else {
      iVar1 = (*g_engfuncs.pfnRandomLong)(0,5);
      iVar1 = iVar1 + 0x13;
    }
    UTIL_DecalTrace(param_1,iVar1);
  }
  return;
}

/* 000edeac  UTIL_DecalTrace  (379 bytes)
 * undefined UTIL_DecalTrace(int param_1, int param_2)
 */
/* WARNING: Removing unreachable block (ram,0x000edf06) */
/* UTIL_DecalTrace(TraceResult *, int) */

void UTIL_DecalTrace(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iValue;
  int local_14;
  
  if (param_2 < 0) {
    return;
  }
  iValue = (&DAT_00123404)[param_2 * 2];
  if (iValue < 0) {
    return;
  }
  if (*(float *)(param_1 + 0x10) == 1.0) {
    return;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    sVar1 = 0;
  }
  else {
    iVar2 = 0;
    if (*(int *)(param_1 + 0x30) != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x30) + 0x7c);
    }
    if ((iVar2 != 0) && (iVar2 = (**(code **)(*(int *)(iVar2 + 0x60) + 0xb8))(iVar2), iVar2 == 0)) {
      return;
    }
    iVar2 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_1 + 0x30));
    sVar1 = (short)iVar2;
  }
  local_14 = 0x68;
  if (sVar1 == 0) {
    local_14 = 0x74;
    if (iValue < 0x100) goto LAB_000edfa2;
    local_14 = 0x75;
  }
  else {
    if (iValue < 0x100) goto LAB_000edfa2;
    local_14 = 0x76;
  }
  iValue = iValue + -0x100;
LAB_000edfa2:
  (*g_engfuncs.pfnMessageBegin)(0,0x17,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(local_14);
  (*g_engfuncs.pfnWriteCoord)(*(float *)(param_1 + 0x14));
  (*g_engfuncs.pfnWriteCoord)(*(float *)(param_1 + 0x18));
  (*g_engfuncs.pfnWriteCoord)(*(float *)(param_1 + 0x1c));
  (*g_engfuncs.pfnWriteByte)(iValue);
  if (sVar1 != 0) {
    (*g_engfuncs.pfnWriteShort)((int)sVar1);
  }
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 000ee028  UTIL_PlayerDecalTrace  (210 bytes)
 * undefined UTIL_PlayerDecalTrace(int param_1, undefined4 param_2, int param_3, int param_4)
 */
/* UTIL_PlayerDecalTrace(TraceResult *, int, int, int) */

void UTIL_PlayerDecalTrace(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (((param_4 != 0) || ((-1 < param_3 && (param_3 = (&DAT_00123404)[param_3 * 2], -1 < param_3))))
     && (*(float *)(param_1 + 0x10) != 1.0)) {
    (*g_engfuncs.pfnMessageBegin)(0,0x17,(float *)0x0,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(0x70);
    (*g_engfuncs.pfnWriteByte)(param_2);
    (*g_engfuncs.pfnWriteCoord)(*(float *)(param_1 + 0x14));
    (*g_engfuncs.pfnWriteCoord)(*(float *)(param_1 + 0x18));
    (*g_engfuncs.pfnWriteCoord)(*(float *)(param_1 + 0x1c));
    iVar1 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_1 + 0x30));
    (*g_engfuncs.pfnWriteShort)((int)(short)iVar1);
    (*g_engfuncs.pfnWriteByte)(param_3);
    (*g_engfuncs.pfnMessageEnd)();
  }
  return;
}

/* 000ee0fc  UTIL_GunshotDecalTrace  (186 bytes)
 * undefined UTIL_GunshotDecalTrace(int param_1, int param_2)
 */
/* UTIL_GunshotDecalTrace(TraceResult *, int) */

void UTIL_GunshotDecalTrace(int param_1,int param_2)

{
  int iValue;
  int iVar1;
  
  if (((-1 < param_2) && (iValue = (&DAT_00123404)[param_2 * 2], -1 < iValue)) &&
     (*(float *)(param_1 + 0x10) != 1.0)) {
    (*g_engfuncs.pfnMessageBegin)(5,0x17,(float *)(param_1 + 0x14),(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(0x6d);
    (*g_engfuncs.pfnWriteCoord)(*(float *)(param_1 + 0x14));
    (*g_engfuncs.pfnWriteCoord)(*(float *)(param_1 + 0x18));
    (*g_engfuncs.pfnWriteCoord)(*(float *)(param_1 + 0x1c));
    iVar1 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_1 + 0x30));
    (*g_engfuncs.pfnWriteShort)((int)(short)iVar1);
    (*g_engfuncs.pfnWriteByte)(iValue);
    (*g_engfuncs.pfnMessageEnd)();
  }
  return;
}

/* 000ee1b8  UTIL_Sparks  (99 bytes)
 * undefined UTIL_Sparks(undefined4 * param_1)
 */
/* UTIL_Sparks(Vector const &) */

void UTIL_Sparks(undefined4 *param_1)

{
  (*g_engfuncs.pfnMessageBegin)(4,0x17,(float *)param_1,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(9);
  (*g_engfuncs.pfnWriteCoord)((float)*param_1);
  (*g_engfuncs.pfnWriteCoord)((float)param_1[1]);
  (*g_engfuncs.pfnWriteCoord)((float)param_1[2]);
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 000ee21c  UTIL_Ricochet  (155 bytes)
 * undefined UTIL_Ricochet(undefined4 * param_1, float param_2)
 */
/* UTIL_Ricochet(Vector const &, float) */

void UTIL_Ricochet(undefined4 *param_1,float param_2)

{
  (*g_engfuncs.pfnMessageBegin)(4,0x17,(float *)param_1,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(0x6f);
  (*g_engfuncs.pfnWriteCoord)((float)*param_1);
  (*g_engfuncs.pfnWriteCoord)((float)param_1[1]);
  (*g_engfuncs.pfnWriteCoord)((float)param_1[2]);
  (*g_engfuncs.pfnWriteByte)((int)ROUND(param_2 * 10.0));
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 000ee2b8  UTIL_TeamsMatch  (90 bytes)
 * undefined4 UTIL_TeamsMatch(char * param_1, char * param_2)
 */
/* UTIL_TeamsMatch(char const *, char const *) */

undefined4 UTIL_TeamsMatch(char *param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*g_pGameRules + 0x24))(g_pGameRules);
  if (iVar1 == 0) {
LAB_000ee302:
    uVar2 = 1;
  }
  else {
    if ((*param_1 != '\0') && (*param_2 != '\0')) {
      iVar1 = strcasecmp(param_1,param_2);
      if (iVar1 == 0) goto LAB_000ee302;
    }
    uVar2 = 0;
  }
  return uVar2;
}

/* 000ee318  UTIL_StringToVector  (227 bytes)
 * undefined UTIL_StringToVector(float * param_1, char * param_2)
 */
/* UTIL_StringToVector(float *, char const *) */

void UTIL_StringToVector(float *param_1,char *param_2)

{
  char *pcVar1;
  uint uVar2;
  longdouble lVar3;
  undefined4 uVar4;
  char local_9c;
  char local_9b [139];
  
  uVar4 = 0xee327;
  pcVar1 = &local_9c;
  strcpy(pcVar1,param_2);
  uVar2 = 0;
  lVar3 = (longdouble)__strtod_internal(pcVar1,0,0,uVar4);
  *param_1 = (float)lVar3;
  if (local_9c != '\0') {
    while ((local_9c != ' ' && (pcVar1 = pcVar1 + 1, *pcVar1 != '\0'))) {
      local_9c = *pcVar1;
    }
  }
  if (*pcVar1 != '\0') {
    pcVar1 = pcVar1 + 1;
    uVar2 = 1;
    lVar3 = (longdouble)__strtod_internal(pcVar1,0,0,uVar4);
    param_1[1] = (float)lVar3;
    for (; (*pcVar1 != '\0' && (*pcVar1 != ' ')); pcVar1 = pcVar1 + 1) {
    }
    if (*pcVar1 != '\0') {
      pcVar1 = pcVar1 + 1;
      uVar2 = 2;
      lVar3 = (longdouble)__strtod_internal(pcVar1,0,0,uVar4);
      param_1[2] = (float)lVar3;
      for (; (*pcVar1 != '\0' && (*pcVar1 != ' ')); pcVar1 = pcVar1 + 1) {
      }
      if (*pcVar1 != '\0') {
        uVar2 = 3;
      }
    }
  }
  if (uVar2 < 2) {
    while (uVar2 = uVar2 + 1, (int)uVar2 < 3) {
      param_1[uVar2] = 0.0;
    }
  }
  return;
}

/* 000ee400  UTIL_StringToIntArray  (456 bytes)
 * undefined UTIL_StringToIntArray(undefined4 * param_1, uint param_2, char * param_3)
 */
/* UTIL_StringToIntArray(int *, int, char const *) */

void UTIL_StringToIntArray(undefined4 *param_1,uint param_2,char *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  char local_9c;
  char local_9b [139];
  
  pcVar3 = &local_9c;
  pcVar4 = &local_9c;
  pcVar6 = &local_9c;
  strcpy(&local_9c,param_3);
  iVar7 = 0;
  if (0 < (int)param_2) {
    uVar1 = param_2 & 3;
    pcVar5 = &local_9c;
    if (0 < (int)param_2) {
      iVar8 = iVar7;
      if (uVar1 == 0) goto LAB_000ee500;
      pcVar5 = &local_9c;
      if (1 < uVar1) {
        if (2 < uVar1) {
          uVar2 = __strtol_internal(&local_9c,0,10,0);
          *param_1 = uVar2;
          pcVar4 = &local_9c;
          if (local_9c != '\0') {
            while ((pcVar3 = pcVar4, local_9c != ' ' && (pcVar3 = pcVar3 + 1, *pcVar3 != '\0'))) {
              local_9c = *pcVar3;
              pcVar4 = pcVar3;
            }
          }
          if (*pcVar3 == '\0') goto LAB_000ee5c0;
          pcVar4 = pcVar3 + 1;
          iVar7 = 1;
        }
        uVar2 = __strtol_internal(pcVar4,0,10,0);
        param_1[iVar7] = uVar2;
        for (; (*pcVar4 != '\0' && (*pcVar4 != ' ')); pcVar4 = pcVar4 + 1) {
        }
        if (*pcVar4 == '\0') goto LAB_000ee5c0;
        pcVar5 = pcVar4 + 1;
        iVar7 = iVar7 + 1;
      }
    }
    uVar2 = __strtol_internal(pcVar5,0,10,0);
    param_1[iVar7] = uVar2;
    for (; (*pcVar5 != '\0' && (*pcVar5 != ' ')); pcVar5 = pcVar5 + 1) {
    }
    while (*pcVar5 != '\0') {
      pcVar6 = pcVar5 + 1;
      iVar7 = iVar7 + 1;
      iVar8 = iVar7;
      if ((int)param_2 <= iVar7) break;
LAB_000ee500:
      uVar2 = __strtol_internal(pcVar6,0,10,0);
      param_1[iVar8] = uVar2;
      for (; (*pcVar6 != '\0' && (*pcVar6 != ' ')); pcVar6 = pcVar6 + 1) {
      }
      iVar7 = iVar8;
      if (*pcVar6 == '\0') break;
      pcVar6 = pcVar6 + 1;
      iVar7 = iVar8 + 1;
      uVar2 = __strtol_internal(pcVar6,0,10,0);
      param_1[iVar7] = uVar2;
      for (; (*pcVar6 != '\0' && (*pcVar6 != ' ')); pcVar6 = pcVar6 + 1) {
      }
      if (*pcVar6 == '\0') break;
      pcVar6 = pcVar6 + 1;
      iVar7 = iVar8 + 2;
      uVar2 = __strtol_internal(pcVar6,0,10,0);
      param_1[iVar7] = uVar2;
      for (; (*pcVar6 != '\0' && (*pcVar6 != ' ')); pcVar6 = pcVar6 + 1) {
      }
      if (*pcVar6 == '\0') break;
      pcVar5 = pcVar6 + 1;
      iVar7 = iVar8 + 3;
      uVar2 = __strtol_internal(pcVar5,0,10,0);
      param_1[iVar7] = uVar2;
      for (; (*pcVar5 != '\0' && (*pcVar5 != ' ')); pcVar5 = pcVar5 + 1) {
      }
    }
  }
LAB_000ee5c0:
  while (iVar7 = iVar7 + 1, iVar7 < (int)param_2) {
    param_1[iVar7] = 0;
  }
  return;
}

/* 000ee5d8  UTIL_ClampVectorToBox  (344 bytes)
 * float * UTIL_ClampVectorToBox(float * param_1, float * param_2, float * param_3)
 */
/* UTIL_ClampVectorToBox(Vector const &, Vector const &) */

float * UTIL_ClampVectorToBox(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float local_1c;
  float local_18;
  float local_14;
  
  local_1c = *param_2;
  local_18 = param_2[1];
  local_14 = param_2[2];
  if (local_1c <= *param_3) {
    if (-*param_3 <= local_1c) {
      local_1c = 0.0;
    }
    else {
      local_1c = local_1c + *param_3;
    }
  }
  else {
    local_1c = local_1c - *param_3;
  }
  if (local_18 <= param_3[1]) {
    if (-param_3[1] <= local_18) {
      local_18 = 0.0;
    }
    else {
      local_18 = local_18 + param_3[1];
    }
  }
  else {
    local_18 = local_18 - param_3[1];
  }
  if (local_14 <= param_3[2]) {
    if (-param_3[2] <= local_14) {
      local_14 = 0.0;
    }
    else {
      local_14 = local_14 + param_3[2];
    }
  }
  else {
    local_14 = local_14 - param_3[2];
  }
  fVar1 = SQRT(local_14 * local_14 + local_18 * local_18 + local_1c * local_1c);
  if (fVar1 == 0.0) {
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 1.0;
  }
  else {
    fVar1 = 1.0 / fVar1;
    *param_1 = fVar1 * local_1c;
    param_1[1] = fVar1 * local_18;
    param_1[2] = fVar1 * local_14;
  }
  return param_1;
}

/* 000ee73c  UTIL_WaterLevel  (188 bytes)
 * longdouble UTIL_WaterLevel(undefined4 * param_1, float param_2, float param_3)
 */
/* UTIL_WaterLevel(Vector const &, float, float) */

longdouble UTIL_WaterLevel(undefined4 *param_1,float param_2,float param_3)

{
  int iVar1;
  longdouble lVar2;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  
  local_1c = *param_1;
  local_18 = param_1[1];
  local_14 = param_2;
  iVar1 = UTIL_PointContents(&local_1c);
  if (iVar1 == -3) {
    local_14 = param_3;
    iVar1 = UTIL_PointContents(&local_1c);
    if (iVar1 == -3) {
      lVar2 = (longdouble)param_3;
    }
    else {
      while (1.0 < param_3 - param_2) {
        local_14 = (param_3 - param_2) * 0.5 + param_2;
        iVar1 = UTIL_PointContents(&local_1c);
        if (iVar1 == -3) {
          param_2 = local_14;
        }
        else {
          param_3 = local_14;
        }
      }
      lVar2 = (longdouble)local_14;
    }
  }
  else {
    lVar2 = (longdouble)param_2;
  }
  return lVar2;
}

/* 000ee7fc  UTIL_Bubbles  (320 bytes)
 * undefined UTIL_Bubbles(float * param_1, float * param_2, undefined4 param_3)
 */
/* UTIL_Bubbles(Vector, Vector, int) */

void UTIL_Bubbles(float *param_1,float *param_2,int param_3)

{
  float fVar1;
  longdouble lVar2;
  float local_2c;
  float local_28;
  float local_24;
  
  local_2c = (*param_1 + *param_2) * 0.5;
  local_28 = (param_1[1] + param_2[1]) * 0.5;
  local_24 = (param_1[2] + param_2[2]) * 0.5;
  lVar2 = UTIL_WaterLevel(&local_2c,local_24,local_24 + 1024.0);
  fVar1 = param_1[2];
  (*g_engfuncs.pfnMessageBegin)(5,0x17,&local_2c,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(0x71);
  (*g_engfuncs.pfnWriteCoord)(*param_1);
  (*g_engfuncs.pfnWriteCoord)(param_1[1]);
  (*g_engfuncs.pfnWriteCoord)(param_1[2]);
  (*g_engfuncs.pfnWriteCoord)(*param_2);
  (*g_engfuncs.pfnWriteCoord)(param_2[1]);
  (*g_engfuncs.pfnWriteCoord)(param_2[2]);
  (*g_engfuncs.pfnWriteCoord)((float)(lVar2 - (longdouble)fVar1));
  (*g_engfuncs.pfnWriteShort)((int)g_sModelIndexBubbles);
  (*g_engfuncs.pfnWriteByte)(param_3);
  (*g_engfuncs.pfnWriteCoord)(8.0);
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 000ee93c  UTIL_BubbleTrail  (339 bytes)
 * undefined UTIL_BubbleTrail(undefined4 * param_1, undefined4 * param_2, int param_3)
 */
/* UTIL_BubbleTrail(Vector, Vector, int) */

void UTIL_BubbleTrail(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  longdouble lVar1;
  float local_14;
  
  lVar1 = UTIL_WaterLevel(param_1,(float)param_1[2],(float)param_1[2] + 256.0);
  local_14 = (float)(lVar1 - (longdouble)(float)param_1[2]);
  if (lVar1 - (longdouble)(float)param_1[2] < (longdouble)8.0) {
    lVar1 = UTIL_WaterLevel(param_2,(float)param_2[2],(float)param_2[2] + 256.0);
    if (lVar1 - (longdouble)(float)param_2[2] < (longdouble)8.0) {
      return;
    }
    local_14 = ((float)(lVar1 - (longdouble)(float)param_2[2]) + (float)param_2[2]) -
               (float)param_1[2];
  }
  if (0xff < param_3) {
    param_3 = 0xff;
  }
  (*g_engfuncs.pfnMessageBegin)(0,0x17,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(0x72);
  (*g_engfuncs.pfnWriteCoord)((float)*param_1);
  (*g_engfuncs.pfnWriteCoord)((float)param_1[1]);
  (*g_engfuncs.pfnWriteCoord)((float)param_1[2]);
  (*g_engfuncs.pfnWriteCoord)((float)*param_2);
  (*g_engfuncs.pfnWriteCoord)((float)param_2[1]);
  (*g_engfuncs.pfnWriteCoord)((float)param_2[2]);
  (*g_engfuncs.pfnWriteCoord)(local_14);
  (*g_engfuncs.pfnWriteShort)((int)g_sModelIndexBubbles);
  (*g_engfuncs.pfnWriteByte)(param_3);
  (*g_engfuncs.pfnWriteCoord)(8.0);
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 000eea90  UTIL_Remove  (57 bytes)
 * undefined UTIL_Remove(int * param_1)
 */
/* UTIL_Remove(CBaseEntity *) */

void UTIL_Remove(int *param_1)

{
  if (param_1 != (int *)0x0) {
    (**(code **)(param_1[0x18] + 0xe8))(param_1);
    *(uint *)(*param_1 + 0x1a4) = *(uint *)(*param_1 + 0x1a4) | 0x40000000;
    *(undefined4 *)(*param_1 + 0x1cc) = 0;
  }
  return;
}

/* 000eeacc  UTIL_IsValidEntity  (34 bytes)
 * undefined4 UTIL_IsValidEntity(int * param_1)
 */
/* UTIL_IsValidEntity(edict_s *) */

undefined4 UTIL_IsValidEntity(int *param_1)

{
  if (((param_1 != (int *)0x0) && (*param_1 == 0)) &&
     ((*(byte *)((int)param_1 + 0x227) & 0x40) == 0)) {
    return 1;
  }
  return 0;
}

/* 000eeaf0  UTIL_PrecacheOther  (218 bytes)
 * undefined UTIL_PrecacheOther(int param_1)
 */
/* UTIL_PrecacheOther(char const *) */

void UTIL_PrecacheOther(int param_1)

{
  bool bVar1;
  edict_t *pEdict;
  int iVar2;
  edict_t *peVar3;
  void *pvVar4;
  
  pEdict = (*g_engfuncs.pfnCreateNamedEntity)(param_1 - (int)gpGlobals->pStringBase);
  bVar1 = false;
  if (pEdict != (edict_t *)0x0) {
    iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict);
    if (iVar2 != 0) goto LAB_000eeb46;
  }
  bVar1 = true;
LAB_000eeb46:
  if (bVar1) {
    (*g_engfuncs.pfnAlertMessage)(at_console,"NULL Ent in UTIL_PrecacheOther\n");
  }
  else {
    peVar3 = *(edict_t **)(((uint)&pEdict->v & (pEdict == (edict_t *)0x0) - 1) + 0x208);
    if (peVar3 == (edict_t *)0x0) {
      peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    }
    pvVar4 = (void *)0x0;
    if (peVar3 != (edict_t *)0x0) {
      pvVar4 = peVar3->pvPrivateData;
    }
    if (pvVar4 != (void *)0x0) {
      (**(code **)(*(int *)((int)pvVar4 + 0x60) + 0x28))(pvVar4);
    }
    (*g_engfuncs.pfnRemoveEntity)(pEdict);
  }
  return;
}

/* 000eebcc  UTIL_LogPrintf  (72 bytes)
 * undefined UTIL_LogPrintf(char * param_1, ...)
 */
/* UTIL_LogPrintf(char *,...) */

void UTIL_LogPrintf(char *param_1,...)

{
  vsprintf(string_1406,param_1,&stack0x00000008);
  (*g_engfuncs.pfnAlertMessage)(at_logged,"%s",string_1406);
  return;
}

/* 000eec14  UTIL_DotPoints  (238 bytes)
 * longdouble UTIL_DotPoints(float * param_1, float * param_2, float * param_3)
 */
/* UTIL_DotPoints(Vector const &, Vector const &, Vector const &) */

longdouble UTIL_DotPoints(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float local_3c;
  float local_38;
  
  local_3c = *param_2 - *param_1;
  fVar1 = param_2[1] - param_1[1];
  local_38 = SQRT(fVar1 * fVar1 + local_3c * local_3c);
  if (local_38 == 0.0) {
    local_3c = 0.0;
    local_38 = 0.0;
  }
  else {
    local_38 = 1.0 / local_38;
    local_3c = local_38 * local_3c;
    local_38 = local_38 * fVar1;
  }
  return (longdouble)local_38 * (longdouble)param_3[1] + (longdouble)local_3c * (longdouble)*param_3
  ;
}

/* 000eed04  UTIL_StripToken  (49 bytes)
 * undefined UTIL_StripToken(char * param_1, int param_2)
 */
/* UTIL_StripToken(char const *, char *) */

void UTIL_StripToken(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*param_1 != '\0') {
    cVar1 = *param_1;
    while (cVar1 != '#') {
      *(char *)(iVar2 + param_2) = param_1[iVar2];
      iVar2 = iVar2 + 1;
      if (param_1[iVar2] == '\0') break;
      cVar1 = param_1[iVar2];
    }
  }
  *(undefined1 *)(iVar2 + param_2) = 0;
  return;
}

/* 000eef34  _rotr  (179 bytes)
 * uint _rotr(uint param_1, uint param_2)
 */
uint _rotr(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (param_2 & 0x1f) - 1;
  if (uVar2 != 0xffffffff) {
    uVar1 = ~uVar2 & 3;
    if (uVar1 != 0) {
      if (uVar1 < 3) {
        if (uVar1 < 2) {
          uVar2 = param_1 & 1;
          param_1 = param_1 >> 1;
          if (uVar2 != 0) {
            param_1 = param_1 | 0x80000000;
          }
          uVar2 = (param_2 & 0x1f) - 2;
        }
        uVar1 = param_1 & 1;
        param_1 = param_1 >> 1;
        if (uVar1 != 0) {
          param_1 = param_1 | 0x80000000;
        }
        uVar2 = uVar2 - 1;
      }
      uVar1 = param_1 & 1;
      param_1 = param_1 >> 1;
      if (uVar1 != 0) {
        param_1 = param_1 | 0x80000000;
      }
      uVar2 = uVar2 - 1;
      if (uVar2 == 0xffffffff) {
        return param_1;
      }
    }
    do {
      uVar1 = param_1 >> 1;
      if ((param_1 & 1) != 0) {
        uVar1 = uVar1 | 0x80000000;
      }
      uVar3 = uVar1 >> 1;
      if ((uVar1 & 1) != 0) {
        uVar3 = uVar3 | 0x80000000;
      }
      uVar1 = uVar3 >> 1;
      if ((uVar3 & 1) != 0) {
        uVar1 = uVar1 | 0x80000000;
      }
      param_1 = uVar1 >> 1;
      if ((uVar1 & 1) != 0) {
        param_1 = param_1 | 0x80000000;
      }
      uVar2 = uVar2 - 4;
    } while (uVar2 != 0xffffffff);
  }
  return param_1;
}

/* 000ef9f0  EntvarsKeyvalue  (254 bytes)
 * undefined EntvarsKeyvalue(int param_1, int param_2)
 */
/* EntvarsKeyvalue(entvars_s *, KeyValueData_s *) */

void EntvarsKeyvalue(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  longdouble lVar4;
  
  uVar3 = 0;
  do {
    iVar1 = strcasecmp((&PTR_s_classname_001227c4)[uVar3 * 4],*(char **)(param_2 + 4));
    if (iVar1 == 0) {
      switch((&gEntvarsDescription)[uVar3 * 4]) {
      case 0:
      case 0xf:
        iVar1 = (&DAT_001227c8)[uVar3 * 4];
        lVar4 = (longdouble)__strtod_internal(*(undefined4 *)(param_2 + 8),0,0);
        *(float *)(iVar1 + param_1) = (float)lVar4;
        break;
      case 1:
      case 0x10:
      case 0x11:
        iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
        *(int *)((&DAT_001227c8)[uVar3 * 4] + param_1) = iVar1;
        break;
      default:
        (*g_engfuncs.pfnAlertMessage)(at_error,"Bad field in entity!!\n");
        break;
      case 7:
      case 8:
        UTIL_StringToVector((float *)(param_1 + (&DAT_001227c8)[uVar3 * 4]),*(char **)(param_2 + 8))
        ;
        break;
      case 10:
        iVar1 = (&DAT_001227c8)[uVar3 * 4];
        uVar2 = __strtol_internal(*(undefined4 *)(param_2 + 8),0,10,0);
        *(undefined4 *)(iVar1 + param_1) = uVar2;
      }
      *(undefined4 *)(param_2 + 0xc) = 1;
      return;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x56);
  return;
}

/* 000f0c0c  MaxAmmoCarry  (253 bytes)
 * undefined4 MaxAmmoCarry(int param_1)
 */
/* MaxAmmoCarry(int) */

undefined4 MaxAmmoCarry(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_14;
  
  local_14 = 0;
  iVar2 = 0x10;
  iVar3 = 0;
  while( true ) {
    if ((*(int *)((int)&DAT_001a5b48 + iVar3) != 0) &&
       (iVar1 = strcmp(gpGlobals->pStringBase + param_1,*(char **)((int)&DAT_001a5b48 + iVar3)),
       iVar1 == 0)) {
      return *(undefined4 *)((int)&DAT_001a5b4c + iVar3);
    }
    if ((*(int *)((int)&CBasePlayerItem::ItemInfoArray + iVar2) != 0) &&
       (iVar1 = strcmp(gpGlobals->pStringBase + param_1,
                       *(char **)((int)&CBasePlayerItem::ItemInfoArray + iVar2)), iVar1 == 0))
    break;
    iVar2 = iVar2 + 0x2c;
    iVar3 = iVar3 + 0x2c;
    local_14 = local_14 + 1;
    if (0x1f < local_14) {
      (*g_engfuncs.pfnAlertMessage)
                (at_console,"MaxAmmoCarry() doesn\'t recognize \'%s\'!\n",
                 gpGlobals->pStringBase + param_1);
      return 0xffffffff;
    }
  }
  return *(undefined4 *)((int)&DAT_001a5b44 + iVar2);
}

/* 000f0d0c  ClearMultiDamage  (41 bytes)
 * undefined ClearMultiDamage(void)
 */
/* ClearMultiDamage(void) */

void ClearMultiDamage(void)

{
  gMultiDamage = 0;
  DAT_0019f254 = 0;
  DAT_0019f258 = 0;
  return;
}

/* 000f0d38  ApplyMultiDamage  (76 bytes)
 * undefined ApplyMultiDamage(undefined4 param_1, undefined4 param_2)
 */
/* ApplyMultiDamage(entvars_s *, entvars_s *) */

void ApplyMultiDamage(undefined4 param_1,undefined4 param_2)

{
  if (gMultiDamage != 0) {
    (**(code **)(*(int *)(gMultiDamage + 0x60) + 0x58))
              (gMultiDamage,param_1,param_2,DAT_0019f254,DAT_0019f258);
    glast_headshot = 0;
  }
  return;
}

/* 000f0d84  AddMultiDamage  (86 bytes)
 * undefined AddMultiDamage(undefined4 param_1, int param_2, float param_3, uint param_4)
 */
/* AddMultiDamage(entvars_s *, CBaseEntity *, float, int) */

void AddMultiDamage(undefined4 param_1,int param_2,float param_3,uint param_4)

{
  if (param_2 != 0) {
    DAT_0019f258 = DAT_0019f258 | param_4;
    if (param_2 != gMultiDamage) {
      ApplyMultiDamage(param_1,param_1);
      gMultiDamage = param_2;
      DAT_0019f254 = 0.0;
    }
    DAT_0019f254 = param_3 + DAT_0019f254;
  }
  return;
}

/* 000f0ddc  SpawnBlood  (82 bytes)
 * undefined SpawnBlood(undefined4 * param_1, uint param_2, float param_3)
 */
/* SpawnBlood(Vector, int, float) */

void SpawnBlood(undefined4 *param_1,uint param_2,float param_3)

{
  UTIL_BloodDrips(param_1,&g_vecAttackDir,param_2,(int)ROUND(param_3));
  return;
}

/* 000f0e30  DamageDecal  (70 bytes)
 * undefined DamageDecal(int param_1, undefined4 param_2)
 */
/* DamageDecal(CBaseEntity *, int) */

void DamageDecal(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    (*g_engfuncs.pfnRandomLong)(0,4);
  }
  else {
    (**(code **)(*(int *)(param_1 + 0x60) + 0x9c))(param_1,param_2);
  }
  return;
}

/* 000f0e7c  DecalGunshot  (298 bytes)
 * undefined DecalGunshot(int param_1, undefined4 param_2)
 */
/* DecalGunshot(TraceResult *, int) */

void DecalGunshot(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  edict_t *peVar3;
  void *pvVar4;
  
  iVar2 = UTIL_IsValidEntity(*(int **)(param_1 + 0x30));
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 0x30);
    if ((*(int *)(((iVar2 == 0) - 1 & iVar2 + 0x80U) + 0x10c) == 4) ||
       (*(int *)(((iVar2 == 0) - 1 & iVar2 + 0x80U) + 0x108) == 0xd)) {
      pvVar4 = (void *)0x0;
      bVar1 = false;
      if ((*(edict_t **)(param_1 + 0x30) == (edict_t *)0x0) ||
         (iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(param_1 + 0x30)), iVar2 == 0)) {
        bVar1 = true;
      }
      if (!bVar1) {
        peVar3 = *(edict_t **)(param_1 + 0x30);
        if (peVar3 == (edict_t *)0x0) {
          peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
        }
        pvVar4 = (void *)0x0;
        if (peVar3 != (edict_t *)0x0) {
          pvVar4 = peVar3->pvPrivateData;
        }
      }
      switch(param_2) {
      default:
        iVar2 = DamageDecal((int)pvVar4,2);
        UTIL_GunshotDecalTrace(param_1,iVar2);
        break;
      case 5:
        iVar2 = DamageDecal((int)pvVar4,0x80);
        UTIL_DecalTrace(param_1,iVar2);
        break;
      case 8:
        iVar2 = DamageDecal((int)pvVar4,2);
        UTIL_GunshotDecalTrace(param_1,iVar2);
      }
    }
  }
  return;
}

/* 000f0fcc  EjectBrass  (196 bytes)
 * undefined EjectBrass(undefined4 * param_1, undefined4 * param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 */
/* EjectBrass(Vector const &, Vector const &, float, int, int) */

void EjectBrass(undefined4 *param_1,undefined4 *param_2,float param_3,int param_4,int param_5)

{
  (*g_engfuncs.pfnMessageBegin)(4,0x17,(float *)param_1,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(0x6a);
  (*g_engfuncs.pfnWriteCoord)((float)*param_1);
  (*g_engfuncs.pfnWriteCoord)((float)param_1[1]);
  (*g_engfuncs.pfnWriteCoord)((float)param_1[2]);
  (*g_engfuncs.pfnWriteCoord)((float)*param_2);
  (*g_engfuncs.pfnWriteCoord)((float)param_2[1]);
  (*g_engfuncs.pfnWriteCoord)((float)param_2[2]);
  (*g_engfuncs.pfnWriteAngle)(param_3);
  (*g_engfuncs.pfnWriteShort)(param_4);
  (*g_engfuncs.pfnWriteByte)(param_5);
  (*g_engfuncs.pfnWriteByte)(0x19);
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 000f1090  AddAmmoNameToAmmoRegistry  (215 bytes)
 * undefined AddAmmoNameToAmmoRegistry(char * param_1)
 */
/* AddAmmoNameToAmmoRegistry(char const *) */

void AddAmmoNameToAmmoRegistry(char *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_14;
  
  local_14 = 0;
  piVar2 = &CBasePlayerItem::AmmoInfoArray;
  piVar3 = piVar2;
  while( true ) {
    if ((*piVar2 != 0) && (iVar1 = strcasecmp((char *)*piVar3,param_1), iVar1 == 0)) {
      return;
    }
    if ((piVar2[2] != 0) && (iVar1 = strcasecmp((char *)piVar3[2],param_1), iVar1 == 0)) {
      return;
    }
    if ((piVar2[4] != 0) && (iVar1 = strcasecmp((char *)piVar3[4],param_1), iVar1 == 0)) {
      return;
    }
    if ((piVar2[6] != 0) && (iVar1 = strcasecmp((char *)piVar3[6],param_1), iVar1 == 0)) break;
    piVar3 = piVar3 + 8;
    piVar2 = piVar2 + 8;
    local_14 = local_14 + 4;
    if (0x1f < local_14) {
      giAmmoIndex = giAmmoIndex + 1;
      if (0x1f < giAmmoIndex) {
        giAmmoIndex = 0;
      }
      iVar1 = giAmmoIndex;
      (&CBasePlayerItem::AmmoInfoArray)[giAmmoIndex * 2] = param_1;
      (&DAT_001a5a24)[iVar1 * 2] = iVar1;
      return;
    }
  }
  return;
}

