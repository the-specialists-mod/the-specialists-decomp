/* mp.dll - CTriggerEndSection (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10042f40  CTriggerEndSection::EndSectionUse  (80 bytes)
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
  
                    /* 0x42f40  41
                       ?EndSectionUse@CTriggerEndSection@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  if ((param_1 != (CBaseEntity *)0x0) &&
     (iVar1 = (**(code **)(*(int *)param_1 + 0xc4))(), iVar1 == 0)) {
    return;
  }
  *(undefined4 *)&this->field_0x18 = 0;
  iVar1 = this->pev->message;
  if (iVar1 != 0) {
    (*g_engfuncs.pfnEndSection)(gpGlobals->pStringBase + iVar1);
  }
  UTIL_Remove((int *)this);
  return;
}

/* 10042f90  CTriggerEndSection::Spawn  (74 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CTriggerEndSection::Spawn(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*g_pGameRules + 0x18))();
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

/* 10042fe0  CTriggerEndSection::EndSectionTouch  (76 bytes)
 * void EndSectionTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CTriggerEndSection::EndSectionTouch(class CBaseEntity *) */

void __thiscall CTriggerEndSection::EndSectionTouch(CTriggerEndSection *this,CBaseEntity *param_1)

{
  int iVar1;
  
                    /* 0x42fe0  40  ?EndSectionTouch@CTriggerEndSection@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = (**(code **)(*(int *)param_1 + 0xc4))();
  if (iVar1 != 0) {
    *(undefined4 *)&this->field_0x14 = 0;
    iVar1 = this->pev->message;
    if (iVar1 != 0) {
      (*g_engfuncs.pfnEndSection)(gpGlobals->pStringBase + iVar1);
    }
    UTIL_Remove((int *)this);
  }
  return;
}

/* 10043030  CTriggerEndSection::KeyValue  (118 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CTriggerEndSection::KeyValue(CTriggerEndSection *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  pcVar4 = s_section_100a2e28;
  pbVar2 = *(byte **)(param_1 + 4);
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_1004306a:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_1004306f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_1004306a;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1004306f:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    this->pev->message = iVar3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CBaseTrigger::KeyValue((CBaseTrigger *)this,param_1);
  return;
}

