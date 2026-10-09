/* ts_i386.so - CTriggerEndSection (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000e9560  CTriggerEndSection::EndSectionUse  (131 bytes)
 * undefined EndSectionUse(int * param_1, int param_2)
 */
/* CTriggerEndSection::EndSectionUse(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CTriggerEndSection::EndSectionUse(int *param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 != 0) &&
     (iVar1 = (**(code **)(*(int *)(param_2 + 0x60) + 0xcc))(param_2), iVar1 == 0)) {
    return;
  }
  param_1[7] = 0;
  param_1[8] = 0;
  if (*(int *)(*param_1 + 0x1d4) != 0) {
    (*g_engfuncs.pfnEndSection)(gpGlobals->pStringBase + *(int *)(*param_1 + 0x1d4));
  }
  UTIL_Remove(param_1);
  return;
}

/* 000e95e4  CTriggerEndSection::Spawn  (148 bytes)
 * undefined Spawn(void)
 */
/* CTriggerEndSection::Spawn(void) */

void __thiscall CTriggerEndSection::Spawn(CTriggerEndSection *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(*g_pGameRules + 0x20))(g_pGameRules);
  if (iVar1 == 0) {
    CBaseTrigger::InitTrigger((CBaseTrigger *)this);
    *(undefined4 *)&this->field_0x1c = 0xffff0000;
    *(code **)&this->field_0x20 = EndSectionUse;
    if ((((byte)this->pev->spawnflags ^ 1) & 1) != 0) {
      *(undefined4 *)&this->field_0x14 = 0xffff0000;
      *(code **)&this->field_0x18 = EndSectionTouch;
    }
  }
  else {
    (*g_engfuncs.pfnRemoveEntity)(this->pev->pContainingEntity);
  }
  return;
}

/* 000e967c  CTriggerEndSection::EndSectionTouch  (127 bytes)
 * undefined EndSectionTouch(int param_1)
 */
/* CTriggerEndSection::EndSectionTouch(CBaseEntity *) */

void __thiscall CTriggerEndSection::EndSectionTouch(CTriggerEndSection *this,int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x60) + 0xcc))(param_1);
  if (iVar1 != 0) {
    *(undefined4 *)&this->field_0x14 = 0;
    *(undefined4 *)&this->field_0x18 = 0;
    if (this->pev->message != 0) {
      (*g_engfuncs.pfnEndSection)(gpGlobals->pStringBase + this->pev->message);
    }
    UTIL_Remove((int *)this);
  }
  return;
}

/* 000e96fc  CTriggerEndSection::KeyValue  (100 bytes)
 * undefined KeyValue(int param_1)
 */
/* CTriggerEndSection::KeyValue(KeyValueData_s *) */

void __thiscall CTriggerEndSection::KeyValue(CTriggerEndSection *this,int param_1)

{
  int iVar1;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"section");
  if (iVar1 == 0) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    this->pev->message = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    CBaseTrigger::KeyValue((CBaseTrigger *)this,param_1);
  }
  return;
}

