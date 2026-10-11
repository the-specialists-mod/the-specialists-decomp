/* mp.dll - CItemAntidote (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10029750  CItemAntidote::Spawn  (41 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CItemAntidote::Spawn(int *param_1)

{
  (**(code **)(*param_1 + 0x20))();
  (*g_engfuncs.pfnSetModel)(*(edict_t **)(param_1[1] + 0x208),s_models_w_antidote_mdl_1009f7c4);
  CItem::Spawn(param_1);
  return;
}

/* 10029780  CItemAntidote::Precache  (13 bytes)
 * undefined Precache()
 */
void CItemAntidote::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)(s_models_w_antidote_mdl_1009f7c4);
  return;
}

/* 10029790  CItemAntidote::MyTouch  (43 bytes)
 * undefined4 MyTouch(void * param_1)
 */
undefined4 CItemAntidote::MyTouch(void *param_1)

{
  CBasePlayer::SetSuitUpdate(param_1,(byte_conflict *)s__HEV_DET4_1009f7dc,0,0x3c);
  *(int *)((int)param_1 + 0x820) = *(int *)((int)param_1 + 0x820) + 1;
  return 1;
}

