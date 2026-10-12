/* mp.dll - CTriggerVolume (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1003b080  CTriggerVolume::Spawn  (83 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CTriggerVolume::Spawn(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  *(undefined4 *)(*(int *)(param_1 + 4) + 0xb8) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0xb4) = 0;
  return;
}

