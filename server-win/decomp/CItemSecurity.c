/* mp.dll - CItemSecurity (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10029810  CItemSecurity::Spawn  (41 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CItemSecurity::Spawn(int *param_1)

{
  (**(code **)(*param_1 + 0x20))();
  (*g_engfuncs.pfnSetModel)(*(edict_t **)(param_1[1] + 0x208),s_models_w_security_mdl_1009f7e8);
  CItem::Spawn(param_1);
  return;
}

/* 10029840  CItemSecurity::Precache  (13 bytes)
 * undefined Precache()
 */
void CItemSecurity::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)(s_models_w_security_mdl_1009f7e8);
  return;
}

/* 10029850  CItemSecurity::MyTouch  (25 bytes)
 * undefined MyTouch()
 */
undefined4 CItemSecurity::MyTouch(int param_1)

{
  *(int *)(param_1 + 0x824) = *(int *)(param_1 + 0x824) + 1;
  return 1;
}

