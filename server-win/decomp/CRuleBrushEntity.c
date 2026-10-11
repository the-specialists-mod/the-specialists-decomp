/* mp.dll - CRuleBrushEntity (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10029fa0  CRuleBrushEntity::Spawn  (54 bytes)
 * undefined Spawn()
 */
void __fastcall CRuleBrushEntity::Spawn(int param_1)

{
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  CRuleEntity::Spawn(param_1);
  return;
}

