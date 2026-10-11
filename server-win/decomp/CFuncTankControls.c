/* mp.dll - CFuncTankControls (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10022770  CFuncTankControls::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CFuncTankControls::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CFuncTankControls_1009eae8,(int)param_1,0x1009e7d0,1
                    );
  return;
}

/* 100227a0  CFuncTankControls::Restore  (48 bytes)
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
            (param_2,(byte_conflict *)s_CFuncTankControls_1009eae8,(int)param_1,&DAT_1009e7d0,1);
  return;
}

/* 100227d0  CFuncTankControls::ObjectCaps  (6 bytes)
 * undefined ObjectCaps()
 */
undefined4 CFuncTankControls::ObjectCaps(void)

{
  return 8;
}

/* 100227e0  CFuncTankControls::Use  (38 bytes)
 * undefined Use()
 */
void __thiscall
CFuncTankControls::Use
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  if (*(int **)(param_1 + 0x54) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x54) + 0xd8))(param_2,param_3,param_4,param_5);
  }
  return;
}

/* 10022810  CFuncTankControls::Think  (173 bytes)
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
                   (pEdictStartSearchAfter,s_targetname_1009c68c,
                    gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1c8));
    if (pEdictStartSearchAfter == (edict_t *)0x0) goto LAB_1002288a;
    iVar1 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter);
    if (iVar1 == 0) break;
    iVar1 = _strncmp(gpGlobals->pStringBase + (pEdictStartSearchAfter->v).classname,
                     s_func_tank_1009eb08,9);
  } while (iVar1 != 0);
  if (pEdictStartSearchAfter != (edict_t *)0x0) {
    iVar1 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter);
    if (iVar1 != 0) {
      *(void **)(param_1 + 0x54) = pEdictStartSearchAfter->pvPrivateData;
      return;
    }
  }
LAB_1002288a:
  pcStack00000008 = gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1c8);
  (*g_engfuncs.pfnAlertMessage)(at_console,s_No_tank__s_1009eafc);
  return;
}

/* 100228c0  CFuncTankControls::Spawn  (146 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CFuncTankControls::Spawn(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 1;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x80;
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  iVar1 = *(int *)(param_1 + 4);
  UTIL_SetSize(iVar1,iVar1 + 0xdc,iVar1 + 0xe8);
  UTIL_SetOrigin(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + 8);
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.3;
  return;
}

