/* mp.dll - CItemAntidote (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100217a0  CItemAntidote::Spawn  (40 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CItemAntidote::Spawn(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  (*g_engfuncs.pfnSetModel)(*(edict_t **)(param_1[1] + 0x208),s_models_w_antidote_mdl_100944b4);
  CItem::Spawn((int)param_1);
  return;
}

/* 100217d0  CItemAntidote::Precache  (13 bytes)
 * undefined Precache()
 */
void CItemAntidote::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)(s_models_w_antidote_mdl_100944b4);
  return;
}

/* 100217e0  CItemAntidote::MyTouch  (43 bytes)
 * undefined4 MyTouch(void * param_1)
 */
undefined4 CItemAntidote::MyTouch(void *param_1)

{
  CBasePlayer::SetSuitUpdate(param_1,(byte_conflict *)s__HEV_DET4_100944cc,0,0x3c);
  *(int *)((int)param_1 + 0x790) = *(int *)((int)param_1 + 0x790) + 1;
  return 1;
}

