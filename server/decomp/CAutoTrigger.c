/* ts_i386.so - CAutoTrigger (7 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000e5c70  CAutoTrigger::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CAutoTrigger::Save(CSave &) */

undefined4 __thiscall CAutoTrigger::Save(CAutoTrigger *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseDelay::Save((CBaseDelay *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CAutoTrigger",(int)this,(int *)m_SaveData,2);
  }
  return uVar2;
}

/* 000e5cc0  CAutoTrigger::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CAutoTrigger::Restore(CRestore &) */

undefined4 __thiscall CAutoTrigger::Restore(CAutoTrigger *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseDelay::Restore((CBaseDelay *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CAutoTrigger",(int)this,(int)m_SaveData,2);
  }
  return uVar2;
}

/* 000e5d10  CAutoTrigger::KeyValue  (182 bytes)
 * undefined KeyValue(int param_1)
 */
/* CAutoTrigger::KeyValue(KeyValueData_s *) */

void __thiscall CAutoTrigger::KeyValue(CAutoTrigger *this,int param_1)

{
  int iVar1;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"globalstate");
  if (iVar1 == 0) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x6c = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"triggerstate");
    if (iVar1 == 0) {
      iVar1 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
      if (iVar1 == 0) {
        *(undefined4 *)&this->field_0x70 = 0;
      }
      else if (iVar1 == 2) {
        *(undefined4 *)&this->field_0x70 = 3;
      }
      else {
        *(undefined4 *)&this->field_0x70 = 1;
      }
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      CBaseDelay::KeyValue((CBaseDelay *)this,param_1);
    }
  }
  return;
}

/* 000e5dd4  CAutoTrigger::Spawn  (18 bytes)
 * undefined Spawn(void)
 */
/* CAutoTrigger::Spawn(void) */

void __thiscall CAutoTrigger::Spawn(CAutoTrigger *this)

{
  (*this->vtable[10])(this);
  return;
}

/* 000e5de8  CAutoTrigger::Precache  (49 bytes)
 * undefined Precache(void)
 */
/* CAutoTrigger::Precache(void) */

void __thiscall CAutoTrigger::Precache(CAutoTrigger *this)

{
  this->pev->nextthink = gpGlobals->time + 0.1;
  return;
}

/* 000e5e1c  CAutoTrigger::Think  (96 bytes)
 * undefined Think(void)
 */
/* CAutoTrigger::Think(void) */

void __thiscall CAutoTrigger::Think(CAutoTrigger *this)

{
  int iVar1;
  
  if ((*(int *)&this->field_0x6c != 0) &&
     (iVar1 = CGlobalState::EntityGetState((CGlobalState *)&gGlobalState,*(int *)&this->field_0x6c),
     iVar1 != 1)) {
    return;
  }
  CBaseDelay::SUB_UseTargets((CBaseDelay *)this,(int *)this,*(undefined4 *)&this->field_0x70,0);
  if ((this->pev->spawnflags & 1) != 0) {
    UTIL_Remove((int *)this);
  }
  return;
}

/* 000eb52c  CAutoTrigger::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CAutoTrigger::ObjectCaps(void) */

undefined4 CAutoTrigger::ObjectCaps(void)

{
  return 0;
}

