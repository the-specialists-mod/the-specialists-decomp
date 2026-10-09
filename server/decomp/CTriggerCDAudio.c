/* ts_i386.so - CTriggerCDAudio (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000e6bb0  CTriggerCDAudio::Touch  (60 bytes)
 * undefined Touch(int param_1)
 */
/* CTriggerCDAudio::Touch(CBaseEntity *) */

void __thiscall CTriggerCDAudio::Touch(CTriggerCDAudio *this,int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x60) + 200))(param_1);
  if (iVar1 != 0) {
    PlayTrack(this);
  }
  return;
}

/* 000e6bec  CTriggerCDAudio::Spawn  (33 bytes)
 * undefined Spawn(void)
 */
/* CTriggerCDAudio::Spawn(void) */

void __thiscall CTriggerCDAudio::Spawn(CTriggerCDAudio *this)

{
  CBaseTrigger::InitTrigger((CBaseTrigger *)this);
  return;
}

/* 000e6c10  CTriggerCDAudio::Use  (33 bytes)
 * undefined Use(CTriggerCDAudio * param_1)
 */
/* CTriggerCDAudio::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CTriggerCDAudio::Use(CTriggerCDAudio *param_1)

{
  PlayTrack(param_1);
  return;
}

/* 000e6cd8  CTriggerCDAudio::PlayTrack  (99 bytes)
 * undefined PlayTrack(void)
 */
/* CTriggerCDAudio::PlayTrack(void) */

void __thiscall CTriggerCDAudio::PlayTrack(CTriggerCDAudio *this)

{
  PlayCDTrack((int)ROUND(this->pev->health));
  *(undefined4 *)&this->field_0x14 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  UTIL_Remove((int *)this);
  return;
}

