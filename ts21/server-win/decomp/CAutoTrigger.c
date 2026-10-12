/* mp.dll - CAutoTrigger (7 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10039a80  CAutoTrigger::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CAutoTrigger::Save(CBaseDelay *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseDelay::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CAutoTrigger_100978b8,(int)param_1,0x100975a8,2);
  return;
}

/* 10039ab0  CAutoTrigger::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CAutoTrigger::Restore(CBaseDelay *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseDelay::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CAutoTrigger_100978b8,(int)param_1,0x100975a8,2);
  return;
}

/* 10039ae0  CAutoTrigger::KeyValue  (168 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CAutoTrigger::KeyValue(CAutoTrigger *this,int param_1)

{
  int iVar1;
  void *this_00;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  iVar1 = 0xc;
  bVar4 = true;
  pcVar2 = *(char **)(param_1 + 4);
  pcVar3 = s_globalstate_1009123c;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x5c = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  this_00 = (void *)0xd;
  bVar4 = true;
  pcVar2 = *(char **)(param_1 + 4);
  pcVar3 = s_triggerstate_100946ec;
  do {
    if (this_00 == (void *)0x0) break;
    this_00 = (void *)((int)this_00 + -1);
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (!bVar4) {
    CBaseDelay::KeyValue((CBaseDelay *)this,param_1);
    return;
  }
  iVar1 = FUN_1006e1dd(this_00,*(byte_conflict **)(param_1 + 8));
  if (iVar1 != 0) {
    if (iVar1 != 2) {
      *(undefined4 *)&this->field_0x60 = 1;
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    *(undefined4 *)&this->field_0x60 = 3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)&this->field_0x60 = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}

/* 10039b90  CAutoTrigger::Spawn  (5 bytes)
 * undefined Spawn()
 */
void __fastcall CAutoTrigger::Spawn(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10039b92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}

/* 10039ba0  CAutoTrigger::Precache  (23 bytes)
 * undefined Precache()
 */
void __fastcall CAutoTrigger::Precache(int param_1)

{
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.1;
  return;
}

/* 10039bc0  CAutoTrigger::Think  (63 bytes)
 * undefined Think(void * param_1)
 */
void __fastcall CAutoTrigger::Think(void *param_1)

{
  int iVar1;
  
  if ((*(int *)((int)param_1 + 0x5c) != 0) &&
     (iVar1 = FUN_1006c2a0(&DAT_102e00f4,*(int *)((int)param_1 + 0x5c)), iVar1 != 1)) {
    return;
  }
  CBaseDelay::SUB_UseTargets(param_1,param_1,*(undefined4 *)((int)param_1 + 0x60),0);
  if ((*(byte *)(*(int *)((int)param_1 + 4) + 0x1a0) & 1) != 0) {
    UTIL_Remove((int)param_1);
  }
  return;
}

/* 1003ce80  CAutoTrigger::ObjectCaps  (3 bytes)
 * undefined ObjectCaps()
 */
undefined4 CAutoTrigger::ObjectCaps(void)

{
  return 0;
}

