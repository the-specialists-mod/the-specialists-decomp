/* mp.dll - CBaseDMStart (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10037850  CBaseDMStart::KeyValue  (79 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CBaseDMStart::KeyValue(CBaseDMStart *this,int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  iVar1 = 7;
  bVar4 = true;
  pcVar2 = *(char **)(param_1 + 4);
  pcVar3 = s_master_10093878;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    this->pev->netname = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 100378a0  CBaseDMStart::IsTriggered  (26 bytes)
 * undefined IsTriggered()
 */
void __thiscall CBaseDMStart::IsTriggered(int param_1,undefined4 param_2)

{
  UTIL_IsMasterTriggered(*(int *)(*(int *)(param_1 + 4) + 0x1d0),param_2);
  return;
}

