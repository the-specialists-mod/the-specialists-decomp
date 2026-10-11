/* mp.dll - CTriggerRelay (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100406f0  CTriggerRelay::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CTriggerRelay::Save(CBaseDelay *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseDelay::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CTriggerRelay_100a2b78,(int)param_1,0x100a2878,1);
  return;
}

/* 10040720  CTriggerRelay::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CTriggerRelay::Restore(CBaseDelay *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseDelay::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields
            (param_2,(byte_conflict *)s_CTriggerRelay_100a2b78,(int)param_1,&DAT_100a2878,1);
  return;
}

/* 10040750  CTriggerRelay::KeyValue  (156 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CTriggerRelay::KeyValue(CTriggerRelay *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  CTriggerRelay *this_00;
  char *pcVar5;
  bool bVar6;
  undefined3 uVar4;
  
  pcVar5 = s_triggerstate_1009f9d4;
  pbVar2 = *(byte **)(param_1 + 4);
  this_00 = this;
  do {
    bVar1 = *pbVar2;
    uVar4 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CTriggerRelay *)CONCAT31(uVar4,bVar1);
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1004078a:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1004078f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CTriggerRelay *)CONCAT31(uVar4,bVar1);
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1004078a;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1004078f:
  if (iVar3 != 0) {
    CBaseDelay::KeyValue((CBaseDelay *)this,param_1);
    return;
  }
  iVar3 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
  if (iVar3 != 0) {
    if (iVar3 != 2) {
      *(undefined4 *)&this->field_0x5c = 1;
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    *(undefined4 *)&this->field_0x5c = 3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)&this->field_0x5c = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}

/* 100407f0  CTriggerRelay::Use  (40 bytes)
 * undefined Use(int * param_1)
 */
void __fastcall CTriggerRelay::Use(int *param_1)

{
  CBaseDelay::SUB_UseTargets((CBaseDelay *)param_1,param_1,param_1[0x17],0);
  if ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0) {
    UTIL_Remove(param_1);
  }
  return;
}

