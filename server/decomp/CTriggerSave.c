/* ts_i386.so - CTriggerSave (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000e945c  CTriggerSave::Spawn  (106 bytes)
 * undefined Spawn(void)
 */
/* CTriggerSave::Spawn(void) */

void __thiscall CTriggerSave::Spawn(CTriggerSave *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(*g_pGameRules + 0x20))(g_pGameRules);
  if (iVar1 == 0) {
    CBaseTrigger::InitTrigger((CBaseTrigger *)this);
    *(undefined4 *)&this->field_0x14 = 0xffff0000;
    *(code **)&this->field_0x18 = SaveTouch;
  }
  else {
    (*g_engfuncs.pfnRemoveEntity)(this->pev->pContainingEntity);
  }
  return;
}

/* 000e94c8  CTriggerSave::SaveTouch  (116 bytes)
 * undefined SaveTouch(int param_1)
 */
/* CTriggerSave::SaveTouch(CBaseEntity *) */

void __thiscall CTriggerSave::SaveTouch(CTriggerSave *this,int param_1)

{
  int iVar1;
  
  iVar1 = UTIL_IsMasterTriggered(*(int *)&this->field_0x100,param_1);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x60) + 200))(param_1);
    if (iVar1 != 0) {
      *(undefined4 *)&this->field_0x14 = 0;
      *(undefined4 *)&this->field_0x18 = 0;
      UTIL_Remove((int *)this);
      (*g_engfuncs.pfnServerCommand)("autosave\n");
    }
  }
  return;
}

