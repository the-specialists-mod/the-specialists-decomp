/* mp.dll - CVipEscape (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10051b30  CVipEscape::Spawn  (117 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CVipEscape::Spawn(int *param_1)

{
  *(undefined4 *)(param_1[1] + 0x118) = 0x80;
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x1a4) = 0;
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  *(int *)param_1[1] = (int)s_func_vip_safetyzone_1009910c - (int)gpGlobals->pStringBase;
  (**(code **)(*param_1 + 0x10))();
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(param_1[1] + 0x208),gpGlobals->pStringBase + *(int *)(param_1[1] + 0xb8))
  ;
  return;
}

