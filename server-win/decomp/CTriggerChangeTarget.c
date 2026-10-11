/* mp.dll - CTriggerChangeTarget (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10043120  CTriggerChangeTarget::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CTriggerChangeTarget::Save(CBaseDelay *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseDelay::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CTriggerChangeTarget_100a2e30,(int)param_1,
                     0x100a2918,1);
  return;
}

/* 10043150  CTriggerChangeTarget::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CTriggerChangeTarget::Restore(CBaseDelay *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseDelay::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields
            (param_2,(byte_conflict *)s_CTriggerChangeTarget_100a2e30,(int)param_1,&DAT_100a2918,1);
  return;
}

/* 10043180  CTriggerChangeTarget::KeyValue  (112 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CTriggerChangeTarget::KeyValue(CTriggerChangeTarget *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  pcVar4 = s_m_iszNewTarget_100a2a94;
  pbVar2 = *(byte **)(param_1 + 4);
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_100431ba:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_100431bf;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_100431ba;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100431bf:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x5c = iVar3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CBaseDelay::KeyValue((CBaseDelay *)this,param_1);
  return;
}

/* 10043200  CTriggerChangeTarget::Use  (80 bytes)
 * undefined Use()
 */
void __fastcall CTriggerChangeTarget::Use(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)UTIL_FindEntityByString
                            (0,s_targetname_1009c68c,
                             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1c8));
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(piVar1[1] + 0x1c8) = *(undefined4 *)(param_1 + 0x5c);
    iVar2 = (**(code **)(*piVar1 + 0x68))();
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 8) = 0;
    }
  }
  return;
}

