/* mp.dll - CTSModel (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1004a3c0  CTSModel::Spawn  (325 bytes)
 * undefined Spawn()
 */
void __fastcall CTSModel::Spawn(int *param_1)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*param_1 + 0x20))();
  *(int *)param_1[1] = (int)s_ts_model_100a3628 - (int)gpGlobals->pStringBase;
  iVar1 = *(int *)(param_1[1] + 0xb8);
  if (iVar1 != 0) {
    (*g_engfuncs.pfnPrecacheModel)(gpGlobals->pStringBase + iVar1);
    (*g_engfuncs.pfnSetModel)
              (*(edict_t **)(param_1[1] + 0x208),
               gpGlobals->pStringBase + *(int *)(param_1[1] + 0xb8));
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_c = 0;
    uStack_8 = 0;
    uStack_4 = 0;
    UTIL_SetSize(param_1[1],&uStack_c,&uStack_18);
    UTIL_SetOrigin(param_1[1],param_1[1] + 8);
    CBaseAnimating::InitBoneControllers((int)param_1);
    *(undefined4 *)(param_1[1] + 0x10c) = 3;
    *(undefined4 *)(param_1[1] + 0x108) = 0;
    *(undefined4 *)(param_1[1] + 0x16c) = 0;
    *(undefined4 *)(param_1[1] + 0x118) = 0;
    *(undefined4 *)(param_1[1] + 0x160) = 0x3f800000;
    *(undefined4 *)(param_1[1] + 0xb0) = 0x40a00000;
    *(undefined4 *)(param_1[1] + 0xac) = *(undefined4 *)(param_1[1] + 0x54);
    param_1[0x17] = 0x42960000;
    param_1[0x18] = 0;
    *(float *)(param_1[1] + 0x104) = *(float *)(param_1[1] + 0x104) + 1.0;
    CBaseAnimating::ResetSequenceInfo((int)param_1);
    return;
  }
  (*g_engfuncs.pfnRemoveEntity)(*(edict_t **)(param_1[1] + 0x208));
  return;
}

