/* mp.dll - CTSModel (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10041eb0  CTSModel::Spawn  (342 bytes)
 * undefined Spawn()
 */
void __fastcall CTSModel::Spawn(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x10))();
  *(int *)param_1[1] = (int)s_ts_model_100981e0 - (int)gpGlobals->pStringBase;
  iVar1 = *(int *)(param_1[1] + 0xb8);
  if (iVar1 != 0) {
    (*g_engfuncs.pfnPrecacheModel)(gpGlobals->pStringBase + iVar1);
    (*g_engfuncs.pfnSetModel)
              (*(edict_t **)(param_1[1] + 0x208),
               gpGlobals->pStringBase + *(int *)(param_1[1] + 0xb8));
    FUN_10067970();
    FUN_100679a0();
    FUN_10006430((int)param_1);
    *(undefined4 *)(param_1[1] + 0x10c) = 3;
    *(undefined4 *)(param_1[1] + 0x108) = 0;
    *(undefined4 *)(param_1[1] + 0x16c) = 0;
    *(undefined4 *)(param_1[1] + 0x118) = 0;
    *(undefined4 *)(param_1[1] + 0x160) = 0x3f800000;
    *(undefined4 *)(param_1[1] + 0xb0) = 0x40a00000;
    *(undefined4 *)(param_1[1] + 0xac) = *(undefined4 *)(param_1[1] + 0x54);
    (**(code **)(*param_1 + 0xf4))(0x168);
    param_1[0x17] = 0x42960000;
    param_1[0x18] = 0;
    *(float *)(param_1[1] + 0x104) = *(float *)(param_1[1] + 0x104) + 1.0;
    CBaseAnimating::ResetSequenceInfo((int)param_1);
    return;
  }
  (*g_engfuncs.pfnRemoveEntity)(*(edict_t **)(param_1[1] + 0x208));
  return;
}

/* 10042010  CTSModel::Precache  (1 bytes)
 * undefined Precache()
 */
void CTSModel::Precache(void)

{
  return;
}

