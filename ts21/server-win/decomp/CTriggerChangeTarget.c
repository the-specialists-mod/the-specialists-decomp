/* mp.dll - CTriggerChangeTarget (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1003c2d0  CTriggerChangeTarget::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CTriggerChangeTarget::Save(CBaseDelay *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseDelay::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CTriggerChangeTarget_10097b88,(int)param_1,
                     0x10097668,1);
  return;
}

/* 1003c300  CTriggerChangeTarget::Restore  (48 bytes)
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
            (param_2,(byte_conflict *)s_CTriggerChangeTarget_10097b88,(int)param_1,0x10097668,1);
  return;
}

/* 1003c330  CTriggerChangeTarget::KeyValue  (74 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CTriggerChangeTarget::KeyValue(CTriggerChangeTarget *this,int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  iVar1 = 0xf;
  bVar4 = true;
  pcVar2 = *(char **)(param_1 + 4);
  pcVar3 = s_m_iszNewTarget_100977e4;
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
  CBaseDelay::KeyValue((CBaseDelay *)this,param_1);
  return;
}

/* 1003c380  CTriggerChangeTarget::Spawn  (1 bytes)
 * undefined Spawn()
 */
void CTriggerChangeTarget::Spawn(void)

{
  return;
}

/* 1003c390  CTriggerChangeTarget::Use  (80 bytes)
 * undefined Use()
 */
void __fastcall CTriggerChangeTarget::Use(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_10066c80(0,s_targetname_100915e4,
                               gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1c8));
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(piVar1[1] + 0x1c8) = *(undefined4 *)(param_1 + 0x5c);
    iVar2 = (**(code **)(*piVar1 + 0x50))();
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 8) = 0;
    }
  }
  return;
}

/* 1003d550  CTriggerChangeTarget::ObjectCaps  (3 bytes)
 * undefined ObjectCaps()
 */
undefined4 CTriggerChangeTarget::ObjectCaps(void)

{
  return 0;
}

