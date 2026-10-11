/* mp.dll - CItemSuit (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10029480  CItemSuit::Spawn  (41 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CItemSuit::Spawn(int *param_1)

{
  (**(code **)(*param_1 + 0x20))();
  (*g_engfuncs.pfnSetModel)(*(edict_t **)(param_1[1] + 0x208),s_models_w_suit_mdl_1009f760);
  CItem::Spawn(param_1);
  return;
}

/* 100294b0  CItemSuit::Precache  (13 bytes)
 * undefined Precache()
 */
void CItemSuit::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)(s_models_w_suit_mdl_1009f760);
  return;
}

/* 100294c0  CItemSuit::MyTouch  (102 bytes)
 * undefined4 MyTouch(int param_1)
 */
undefined4 __thiscall CItemSuit::MyTouch(CItemSuit *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((*(uint *)(iVar1 + 0x168) & 0x80000000) != 0) {
    return 0;
  }
  if ((this->pev->spawnflags & 1) == 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x208);
    pcVar3 = s__HEV_AAx_1009f774;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x208);
    pcVar3 = s__HEV_A0_1009f780;
  }
  EMIT_SOUND_SUIT(uVar2,pcVar3);
  *(uint *)(*(int *)(param_1 + 4) + 0x168) = *(uint *)(*(int *)(param_1 + 4) + 0x168) | 0x80000000;
  return 1;
}

