/* mp.dll - CItemSecurity (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10021860  CItemSecurity::Spawn  (40 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CItemSecurity::Spawn(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  (*g_engfuncs.pfnSetModel)(*(edict_t **)(param_1[1] + 0x208),s_models_w_security_mdl_100944d8);
  CItem::Spawn((int)param_1);
  return;
}

/* 10021890  CItemSecurity::Precache  (13 bytes)
 * undefined Precache()
 */
void CItemSecurity::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)(s_models_w_security_mdl_100944d8);
  return;
}

/* 100218a0  CItemSecurity::MyTouch  (25 bytes)
 * undefined MyTouch()
 */
undefined4 CItemSecurity::MyTouch(int param_1)

{
  *(int *)(param_1 + 0x794) = *(int *)(param_1 + 0x794) + 1;
  return 1;
}

