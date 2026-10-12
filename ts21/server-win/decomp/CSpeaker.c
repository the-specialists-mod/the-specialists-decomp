/* mp.dll - CSpeaker (8 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10036ca0  CSpeaker::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CSpeaker::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CSpeaker_10096f24,(int)param_1,0x10096d08,1);
  return;
}

/* 10036cd0  CSpeaker::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CSpeaker::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CSpeaker_10096f24,(int)param_1,0x10096d08,1);
  return;
}

/* 10036d00  CSpeaker::Spawn  (186 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CSpeaker::Spawn(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  if (param_1[0x15] == 0) {
    iVar2 = param_1[1];
    if (*(int *)(iVar2 + 0x1d4) != 0) {
      iVar3 = -1;
      pcVar4 = gpGlobals->pStringBase + *(int *)(iVar2 + 0x1d4);
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (iVar3 != -2) goto LAB_10036d7d;
    }
    (*g_engfuncs.pfnAlertMessage)
              (at_error,s_SPEAKER_with_no_Level_Sentence__a_10096f30,(double)*(float *)(iVar2 + 8),
               (double)*(float *)(iVar2 + 0xc),(double)*(float *)(iVar2 + 0x10));
    *(float *)(param_1[1] + 0x104) = gpGlobals->time + 0.1;
    param_1[4] = (int)CBaseEntity::SUB_Remove;
    return;
  }
LAB_10036d7d:
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  param_1[4] = (int)SpeakerThink;
  *(undefined4 *)(param_1[1] + 0x104) = 0;
  param_1[6] = (int)ToggleUse;
                    /* WARNING: Could not recover jumptable at 0x10036db7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}

/* 10036dc0  CSpeaker::Precache  (53 bytes)
 * undefined Precache(int param_1)
 */
void __fastcall CSpeaker::Precache(int param_1)

{
  float10 fVar1;
  
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 1) == 0) {
    fVar1 = (float10)(*g_engfuncs.pfnRandomFloat)(5.0,15.0);
    *(float *)(*(int *)(param_1 + 4) + 0x104) = (float)(fVar1 + (float10)gpGlobals->time);
  }
  return;
}

/* 10036e00  CSpeaker::SpeakerThink  (365 bytes)
 * void SpeakerThink(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CSpeaker::SpeakerThink(void) */

void __thiscall CSpeaker::SpeakerThink(CSpeaker *this)

{
  entvars_t *peVar1;
  byte_conflict *pbVar2;
  uint uVar3;
  byte_conflict *pbVar4;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
                    /* 0x36e00  99  ?SpeakerThink@CSpeaker@@QAEXXZ */
  peVar1 = this->pev;
  pbVar2 = (byte_conflict *)(peVar1->health * 0.1);
  if (gpGlobals->time < _DAT_1009f75c != (gpGlobals->time == _DAT_1009f75c)) {
    (*g_engfuncs.pfnRandomFloat)(5.0,10.0);
    this->pev->nextthink = (float)(extraout_ST0 + (float10)_DAT_1009f75c);
    return;
  }
  if (*(int *)&this->field_0x54 == 0) {
    pbVar4 = (byte_conflict *)(gpGlobals->pStringBase + peVar1->message);
  }
  else {
    pbVar4 = pbVar2;
    switch(*(int *)&this->field_0x54) {
    case 1:
      pbVar4 = (byte_conflict *)s_C1A0__10096ff8;
      break;
    case 2:
      pbVar4 = (byte_conflict *)s_C1A1__10096ff0;
      break;
    case 3:
      pbVar4 = (byte_conflict *)s_C1A2__10096fe8;
      break;
    case 4:
      pbVar4 = (byte_conflict *)s_C1A3__10096fe0;
      break;
    case 5:
      pbVar4 = (byte_conflict *)s_C1A4__10096fd8;
      break;
    case 6:
      pbVar4 = (byte_conflict *)s_C2A1__10096fd0;
      break;
    case 7:
      pbVar4 = (byte_conflict *)s_C2A2__10096fc8;
      break;
    case 8:
      pbVar4 = (byte_conflict *)s_C2A3__10096fc0;
      break;
    case 9:
      pbVar4 = (byte_conflict *)s_C2A4__10096fb8;
      break;
    case 10:
      pbVar4 = (byte_conflict *)s_C2A5__10096fb0;
      break;
    case 0xb:
      pbVar4 = (byte_conflict *)s_C3A1__10096fa8;
      break;
    case 0xc:
      pbVar4 = (byte_conflict *)s_C3A2__10096fa0;
    }
  }
  if (*pbVar4 != '!') {
    uVar3 = SENTENCEG_PlayRndSz(peVar1->pContainingEntity,pbVar4,pbVar2,0x3e99999a,0,100);
    if ((int)uVar3 < 0) {
      (*g_engfuncs.pfnAlertMessage)(at_console,s_Level_Design_Error__SPEAKER_has_b_10096f60,pbVar4);
    }
    (*g_engfuncs.pfnRandomFloat)(15.0,135.0);
    this->pev->nextthink = (float)(extraout_ST0_00 + (float10)gpGlobals->time);
    _DAT_1009f75c = gpGlobals->time + 5.0;
    return;
  }
  UTIL_EmitAmbientSound
            (peVar1->pContainingEntity,peVar1->origin,(char *)pbVar4,pbVar2,0x3e99999a,0,100);
  this->pev->nextthink = 0.0;
  return;
}

/* 10036fa0  CSpeaker::ToggleUse  (135 bytes)
 * void ToggleUse(CBaseEntity * param_1, CBaseEntity * param_2, USE_TYPE param_3, float param_4)
 */
/* public: void __thiscall CSpeaker::ToggleUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CSpeaker::ToggleUse(CSpeaker *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
                   float param_4)

{
  entvars_t *peVar1;
  bool bVar2;
  
                    /* 0x36fa0  115  ?ToggleUse@CSpeaker@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  peVar1 = this->pev;
  bVar2 = 0.0 < peVar1->nextthink;
  if (param_3 != 3) {
    if (bVar2) {
      if (param_3 == 1) {
        return;
      }
      goto LAB_10036fd3;
    }
    if (param_3 == 0) {
      return;
    }
  }
  if (param_3 == 1) {
    peVar1->nextthink = gpGlobals->time + 0.1;
    return;
  }
LAB_10036fd3:
  if (param_3 == 0) {
    peVar1->nextthink = 0.0;
    return;
  }
  if (!bVar2) {
    peVar1->nextthink = gpGlobals->time + 0.1;
    return;
  }
  peVar1->nextthink = 0.0;
  return;
}

/* 10037030  CSpeaker::KeyValue  (72 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CSpeaker::KeyValue(CSpeaker *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  iVar2 = 7;
  bVar5 = true;
  pcVar3 = *(char **)(param_1 + 4);
  pcVar4 = s_preset_10096dec;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    uVar1 = FUN_1006e1dd(*(void **)(param_1 + 8),*(void **)(param_1 + 8));
    *(undefined4 *)&this->field_0x54 = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 10037180  CSpeaker::ObjectCaps  (3 bytes)
 * undefined ObjectCaps()
 */
undefined4 CSpeaker::ObjectCaps(void)

{
  return 0;
}

