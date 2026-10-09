/* ts_i386.so - CTriggerChangeTarget (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000e981c  CTriggerChangeTarget::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CTriggerChangeTarget::Save(CSave &) */

undefined4 __thiscall CTriggerChangeTarget::Save(CTriggerChangeTarget *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseDelay::Save((CBaseDelay *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CTriggerChangeTarget",(int)this,(int *)m_SaveData,1);
  }
  return uVar2;
}

/* 000e986c  CTriggerChangeTarget::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CTriggerChangeTarget::Restore(CRestore &) */

undefined4 __thiscall CTriggerChangeTarget::Restore(CTriggerChangeTarget *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseDelay::Restore((CBaseDelay *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CTriggerChangeTarget",(int)this,(int)m_SaveData,1);
  }
  return uVar2;
}

/* 000e98bc  CTriggerChangeTarget::KeyValue  (95 bytes)
 * undefined KeyValue(int param_1)
 */
/* CTriggerChangeTarget::KeyValue(KeyValueData_s *) */

void __thiscall CTriggerChangeTarget::KeyValue(CTriggerChangeTarget *this,int param_1)

{
  int iVar1;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"m_iszNewTarget");
  if (iVar1 == 0) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x6c = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    CBaseDelay::KeyValue((CBaseDelay *)this,param_1);
  }
  return;
}

/* 000e9920  CTriggerChangeTarget::Spawn  (1 bytes)
 * undefined Spawn(void)
 */
/* CTriggerChangeTarget::Spawn(void) */

void CTriggerChangeTarget::Spawn(void)

{
  return;
}

/* 000e9924  CTriggerChangeTarget::Use  (111 bytes)
 * undefined Use(int * param_1)
 */
/* CTriggerChangeTarget::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CTriggerChangeTarget::Use(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)UTIL_FindEntityByString
                            ((int *)0x0,"targetname",
                             gpGlobals->pStringBase + *(int *)(*param_1 + 0x1c8));
  if (piVar1 != (int *)0x0) {
    *(int *)(*piVar1 + 0x1c8) = param_1[0x1b];
    iVar2 = (**(code **)(piVar1[0x18] + 0x70))(piVar1);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 4) = 0;
    }
  }
  return;
}

/* 000ebb28  CTriggerChangeTarget::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CTriggerChangeTarget::ObjectCaps(void) */

undefined4 CTriggerChangeTarget::ObjectCaps(void)

{
  return 0;
}

