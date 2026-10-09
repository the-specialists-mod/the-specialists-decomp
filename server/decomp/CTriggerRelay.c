/* ts_i386.so - CTriggerRelay (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000e5ea0  CTriggerRelay::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CTriggerRelay::Save(CSave &) */

undefined4 __thiscall CTriggerRelay::Save(CTriggerRelay *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseDelay::Save((CBaseDelay *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CTriggerRelay",(int)this,(int *)m_SaveData,1);
  }
  return uVar2;
}

/* 000e5ef0  CTriggerRelay::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CTriggerRelay::Restore(CRestore &) */

undefined4 __thiscall CTriggerRelay::Restore(CTriggerRelay *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseDelay::Restore((CBaseDelay *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CTriggerRelay",(int)this,(int)m_SaveData,1);
  }
  return uVar2;
}

/* 000e5f40  CTriggerRelay::KeyValue  (127 bytes)
 * undefined KeyValue(int param_1)
 */
/* CTriggerRelay::KeyValue(KeyValueData_s *) */

void __thiscall CTriggerRelay::KeyValue(CTriggerRelay *this,int param_1)

{
  int iVar1;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"triggerstate");
  if (iVar1 == 0) {
    iVar1 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
    if (iVar1 == 0) {
      *(undefined4 *)&this->field_0x6c = 0;
    }
    else if (iVar1 == 2) {
      *(undefined4 *)&this->field_0x6c = 3;
    }
    else {
      *(undefined4 *)&this->field_0x6c = 1;
    }
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    CBaseDelay::KeyValue((CBaseDelay *)this,param_1);
  }
  return;
}

/* 000e5fc8  CTriggerRelay::Spawn  (1 bytes)
 * undefined Spawn(void)
 */
/* CTriggerRelay::Spawn(void) */

void CTriggerRelay::Spawn(void)

{
  return;
}

/* 000e5fcc  CTriggerRelay::Use  (65 bytes)
 * undefined Use(CBaseDelay * param_1)
 */
/* CTriggerRelay::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CTriggerRelay::Use(CBaseDelay *param_1)

{
  CBaseDelay::SUB_UseTargets(param_1,(int *)param_1,param_1[1].pev,0);
  if ((param_1->pev->spawnflags & 1) != 0) {
    UTIL_Remove((int *)param_1);
  }
  return;
}

/* 000eb57c  CTriggerRelay::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CTriggerRelay::ObjectCaps(void) */

undefined4 CTriggerRelay::ObjectCaps(void)

{
  return 0;
}

