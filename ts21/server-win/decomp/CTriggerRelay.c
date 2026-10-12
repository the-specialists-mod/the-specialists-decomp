/* mp.dll - CTriggerRelay (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10039c10  CTriggerRelay::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CTriggerRelay::Save(CBaseDelay *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseDelay::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CTriggerRelay_100978c8,(int)param_1,0x100975c8,1);
  return;
}

/* 10039c40  CTriggerRelay::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CTriggerRelay::Restore(CBaseDelay *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseDelay::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CTriggerRelay_100978c8,(int)param_1,0x100975c8,1);
  return;
}

/* 10039c70  CTriggerRelay::KeyValue  (118 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CTriggerRelay::KeyValue(CTriggerRelay *this,int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  iVar1 = 0xd;
  bVar4 = true;
  pcVar2 = *(char **)(param_1 + 4);
  pcVar3 = s_triggerstate_100946ec;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (!bVar4) {
    CBaseDelay::KeyValue((CBaseDelay *)this,param_1);
    return;
  }
  iVar1 = FUN_1006e1dd(*(void **)(param_1 + 8),*(void **)(param_1 + 8));
  if (iVar1 != 0) {
    if (iVar1 != 2) {
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

/* 10039cf0  CTriggerRelay::Spawn  (1 bytes)
 * undefined Spawn()
 */
void CTriggerRelay::Spawn(void)

{
  return;
}

/* 10039d00  CTriggerRelay::Use  (40 bytes)
 * undefined Use(void * param_1)
 */
void __fastcall CTriggerRelay::Use(void *param_1)

{
  CBaseDelay::SUB_UseTargets(param_1,param_1,*(undefined4 *)((int)param_1 + 0x5c),0);
  if ((*(byte *)(*(int *)((int)param_1 + 4) + 0x1a0) & 1) != 0) {
    UTIL_Remove((int)param_1);
  }
  return;
}

/* 1003cee0  CTriggerRelay::ObjectCaps  (3 bytes)
 * undefined ObjectCaps()
 */
undefined4 CTriggerRelay::ObjectCaps(void)

{
  return 0;
}

