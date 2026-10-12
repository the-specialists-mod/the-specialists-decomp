/* mp.dll - CTSSuperJump (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10021910  CTSSuperJump::Spawn  (40 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CTSSuperJump::Spawn(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  (*g_engfuncs.pfnSetModel)(*(edict_t **)(param_1[1] + 0x208),s_models_w_longjump_mdl_100944f0);
  CItem::Spawn((int)param_1);
  return;
}

