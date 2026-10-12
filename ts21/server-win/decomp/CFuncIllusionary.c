/* mp.dll - CFuncIllusionary (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10007540  CFuncIllusionary::KeyValue  (84 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CFuncIllusionary::KeyValue(CFuncIllusionary *this,int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  longlong lVar5;
  
  iVar1 = 5;
  bVar4 = true;
  pcVar2 = *(char **)(param_1 + 4);
  pcVar3 = &DAT_10090ec0;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    FUN_1006e0fb(*(undefined1 **)(param_1 + 8),*(undefined1 **)(param_1 + 8));
    lVar5 = __ftol();
    this->pev->skin = (int)lVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CBaseToggle::KeyValue((CBaseToggle *)this,param_1);
  return;
}

/* 100075a0  CFuncIllusionary::Spawn  (91 bytes)
 * undefined Spawn()
 */
void __fastcall CFuncIllusionary::Spawn(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x50) = DAT_1009f4a8;
  *(undefined4 *)(iVar1 + 0x54) = DAT_1009f4ac;
  *(undefined4 *)(iVar1 + 0x58) = DAT_1009f4b0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  return;
}

/* 10009050  CFuncIllusionary::ObjectCaps  (3 bytes)
 * undefined ObjectCaps()
 */
undefined4 CFuncIllusionary::ObjectCaps(void)

{
  return 0;
}

