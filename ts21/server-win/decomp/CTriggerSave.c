/* mp.dll - CTriggerSave (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1003c080  CTriggerSave::Spawn  (55 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CTriggerSave::Spawn(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_1009f494 + 0x1c))();
  if (iVar1 != 0) {
    (*g_engfuncs.pfnRemoveEntity)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
    return;
  }
  CBaseTrigger::InitTrigger(param_1);
  *(code **)(param_1 + 0x14) = SaveTouch;
  return;
}

/* 1003c0c0  CTriggerSave::SaveTouch  (74 bytes)
 * void SaveTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CTriggerSave::SaveTouch(class CBaseEntity *) */

void __thiscall CTriggerSave::SaveTouch(CTriggerSave *this,CBaseEntity *param_1)

{
  int iVar1;
  
                    /* 0x3c0c0  93  ?SaveTouch@CTriggerSave@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = UTIL_IsMasterTriggered(*(int *)&this->field_0xec,param_1);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*(int *)param_1 + 0xa8))();
    if (iVar1 != 0) {
      *(undefined4 *)&this->field_0x14 = 0;
      UTIL_Remove((int)this);
      (*g_engfuncs.pfnServerCommand)(s_autosave_10097b74);
    }
  }
  return;
}

