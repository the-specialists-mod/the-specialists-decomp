/* mp.dll - CFuncTankControls (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1001e2b0  CFuncTankControls::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CFuncTankControls::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CFuncTankControls_100939e0,(int)param_1,0x100936c8,1
                    );
  return;
}

/* 1001e2e0  CFuncTankControls::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CFuncTankControls::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields
            (param_2,(byte_conflict *)s_CFuncTankControls_100939e0,(int)param_1,0x100936c8,1);
  return;
}

/* 1001e310  CFuncTankControls::ObjectCaps  (6 bytes)
 * undefined ObjectCaps()
 */
undefined4 CFuncTankControls::ObjectCaps(void)

{
  return 8;
}

/* 1001e320  CFuncTankControls::Use  (26 bytes)
 * undefined Use()
 */
void __fastcall CFuncTankControls::Use(int param_1)

{
  if (*(int **)(param_1 + 0x54) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1001e331. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x54) + 0xc0))();
    return;
  }
  return;
}

/* 1001e340  CFuncTankControls::Think  (173 bytes)
 * undefined Think(int param_1)
 */
void __fastcall CFuncTankControls::Think(int param_1)

{
  int iVar1;
  edict_t *pEdictStartSearchAfter;
  char *pcStack00000008;
  
  pEdictStartSearchAfter = (edict_t *)0x0;
  do {
    pEdictStartSearchAfter =
         (*g_engfuncs.pfnFindEntityByString)
                   (pEdictStartSearchAfter,s_targetname_100915e4,
                    gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1c8));
    if (pEdictStartSearchAfter == (edict_t *)0x0) goto LAB_1001e3ba;
    iVar1 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter);
    if (iVar1 == 0) break;
    iVar1 = _strncmp(gpGlobals->pStringBase + (pEdictStartSearchAfter->v).classname,
                     s_func_tank_10093a00,9);
  } while (iVar1 != 0);
  if (pEdictStartSearchAfter != (edict_t *)0x0) {
    iVar1 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter);
    if (iVar1 != 0) {
      *(void **)(param_1 + 0x54) = pEdictStartSearchAfter->pvPrivateData;
      return;
    }
  }
LAB_1001e3ba:
  pcStack00000008 = gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1c8);
  (*g_engfuncs.pfnAlertMessage)(at_console,s_No_tank__s_100939f4);
  return;
}

/* 1001e3f0  CFuncTankControls::Spawn  (146 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CFuncTankControls::Spawn(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 1;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x80;
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  FUN_10067970();
  FUN_100679a0();
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.3;
  return;
}

