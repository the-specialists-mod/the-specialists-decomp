/* mp.dll - CBaseDMStart (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1003e1c0  CBaseDMStart::KeyValue  (117 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CBaseDMStart::KeyValue(CBaseDMStart *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  pcVar4 = s_master_1009e980;
  pbVar2 = *(byte **)(param_1 + 4);
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_1003e1fa:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_1003e1ff;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_1003e1fa;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1003e1ff:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    this->pev->netname = iVar3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 1003e240  CBaseDMStart::IsTriggered  (26 bytes)
 * undefined IsTriggered()
 */
void __thiscall CBaseDMStart::IsTriggered(int param_1,undefined4 param_2)

{
  UTIL_IsMasterTriggered(*(int *)(*(int *)(param_1 + 4) + 0x1d0),param_2);
  return;
}

