/* ts_i386.so - CXenHull (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000f62bc  CXenHull::CreateHull  (258 bytes)
 * CXenHull * CreateHull(int * param_1, undefined4 param_2, undefined4 param_3, float * param_4)
 */
/* CXenHull::CreateHull(CBaseEntity *, Vector const &, Vector const &, Vector const &) */

CXenHull * CXenHull::CreateHull(int *param_1,undefined4 param_2,undefined4 param_3,float *param_4)

{
  int iVar1;
  CXenHull *pCVar2;
  float local_2c;
  float local_28;
  float local_24;
  
  pCVar2 = GetClassPtr<CXenHull>(0);
  iVar1 = *param_1;
  local_2c = *(float *)(iVar1 + 8) + *param_4;
  local_28 = *(float *)(iVar1 + 0xc) + param_4[1];
  local_24 = *(float *)(iVar1 + 0x10) + param_4[2];
  UTIL_SetOrigin((int)pCVar2->pev,&local_2c);
  (*g_engfuncs.pfnSetModel)
            (pCVar2->pev->pContainingEntity,gpGlobals->pStringBase + *(int *)(*param_1 + 0xb8));
  pCVar2->pev->solid = 2;
  pCVar2->pev->classname = (int)"xen_hull" - (int)gpGlobals->pStringBase;
  pCVar2->pev->movetype = 0;
  pCVar2->pev->owner = *(edict_t **)(*param_1 + 0x208);
  UTIL_SetSize((int)pCVar2->pev,param_2,param_3);
  pCVar2->pev->renderamt = 0.0;
  pCVar2->pev->rendermode = 2;
  return pCVar2;
}

/* 000f72ac  CXenHull::Classify  (6 bytes)
 * undefined4 Classify(void)
 */
/* CXenHull::Classify(void) */

undefined4 CXenHull::Classify(void)

{
  return 99;
}

