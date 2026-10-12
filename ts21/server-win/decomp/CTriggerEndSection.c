/* mp.dll - CTriggerEndSection (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1003c120  CTriggerEndSection::EndSectionUse  (80 bytes)
 * void EndSectionUse(CBaseEntity * param_1, CBaseEntity * param_2, USE_TYPE param_3, float param_4)
 */
/* public: void __thiscall CTriggerEndSection::EndSectionUse(class CBaseEntity *,class CBaseEntity
   *,enum USE_TYPE,float) */

void __thiscall
CTriggerEndSection::EndSectionUse
          (CTriggerEndSection *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
          float param_4)

{
  int iVar1;
  
                    /* 0x3c120  39
                       ?EndSectionUse@CTriggerEndSection@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  if ((param_1 != (CBaseEntity *)0x0) &&
     (iVar1 = (**(code **)(*(int *)param_1 + 0xac))(), iVar1 == 0)) {
    return;
  }
  *(undefined4 *)&this->field_0x18 = 0;
  iVar1 = this->pev->message;
  if (iVar1 != 0) {
    (*g_engfuncs.pfnEndSection)(gpGlobals->pStringBase + iVar1);
  }
  UTIL_Remove((int)this);
  return;
}

/* 1003c170  CTriggerEndSection::Spawn  (74 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CTriggerEndSection::Spawn(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_1009f494 + 0x1c))();
  if (iVar1 != 0) {
    (*g_engfuncs.pfnRemoveEntity)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
    return;
  }
  CBaseTrigger::InitTrigger(param_1);
  *(code **)(param_1 + 0x18) = EndSectionUse;
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 1) == 0) {
    *(code **)(param_1 + 0x14) = EndSectionTouch;
  }
  return;
}

/* 1003c1c0  CTriggerEndSection::EndSectionTouch  (76 bytes)
 * void EndSectionTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CTriggerEndSection::EndSectionTouch(class CBaseEntity *) */

void __thiscall CTriggerEndSection::EndSectionTouch(CTriggerEndSection *this,CBaseEntity *param_1)

{
  int iVar1;
  
                    /* 0x3c1c0  38  ?EndSectionTouch@CTriggerEndSection@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = (**(code **)(*(int *)param_1 + 0xac))();
  if (iVar1 != 0) {
    *(undefined4 *)&this->field_0x14 = 0;
    iVar1 = this->pev->message;
    if (iVar1 != 0) {
      (*g_engfuncs.pfnEndSection)(gpGlobals->pStringBase + iVar1);
    }
    UTIL_Remove((int)this);
  }
  return;
}

/* 1003c210  CTriggerEndSection::KeyValue  (80 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CTriggerEndSection::KeyValue(CTriggerEndSection *this,int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  iVar1 = 8;
  bVar4 = true;
  pcVar2 = *(char **)(param_1 + 4);
  pcVar3 = s_section_10097b80;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    this->pev->message = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CBaseTrigger::KeyValue((CBaseTrigger *)this,param_1);
  return;
}

