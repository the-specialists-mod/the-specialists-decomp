/* mp.dll - CSpeaker (7 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1003d6b0  CSpeaker::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CSpeaker::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CSpeaker_100a21f4,(int)param_1,0x100a1fc0,1);
  return;
}

/* 1003d6e0  CSpeaker::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CSpeaker::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CSpeaker_100a21f4,(int)param_1,&DAT_100a1fc0,1);
  return;
}

/* 1003d710  CSpeaker::Spawn  (191 bytes)
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
      if (iVar3 != -2) goto LAB_1003d791;
    }
    (*g_engfuncs.pfnAlertMessage)
              (at_error,s_SPEAKER_with_no_Level_Sentence__a_100a2200,(double)*(float *)(iVar2 + 8),
               (double)*(float *)(iVar2 + 0xc),(double)*(float *)(iVar2 + 0x10));
    *(float *)(param_1[1] + 0x104) = gpGlobals->time + 0.1;
    param_1[4] = (int)CBaseEntity::SUB_Remove;
    return;
  }
LAB_1003d791:
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  param_1[4] = (int)SpeakerThink;
  *(undefined4 *)(param_1[1] + 0x104) = 0;
  param_1[6] = (int)ToggleUse;
  (**(code **)(*param_1 + 0x20))();
  return;
}

/* 1003d7d0  CSpeaker::Precache  (53 bytes)
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

/* 1003d810  CSpeaker::SpeakerThink  (373 bytes)
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
  
                    /* 0x3d810  106  ?SpeakerThink@CSpeaker@@QAEXXZ */
  peVar1 = this->pev;
  pbVar2 = (byte_conflict *)(peVar1->health * 0.1);
  if (gpGlobals->time <= _DAT_100ae750) {
    (*g_engfuncs.pfnRandomFloat)(5.0,10.0);
    this->pev->nextthink = (float)(extraout_ST0 + (float10)_DAT_100ae750);
    return;
  }
  if (*(int *)&this->field_0x54 == 0) {
    pbVar4 = (byte_conflict *)(gpGlobals->pStringBase + peVar1->message);
  }
  else {
    pbVar4 = pbVar2;
    switch(*(int *)&this->field_0x54) {
    case 1:
      pbVar4 = (byte_conflict *)s_C1A0__100a22c8;
      break;
    case 2:
      pbVar4 = (byte_conflict *)s_C1A1__100a22c0;
      break;
    case 3:
      pbVar4 = (byte_conflict *)s_C1A2__100a22b8;
      break;
    case 4:
      pbVar4 = (byte_conflict *)s_C1A3__100a22b0;
      break;
    case 5:
      pbVar4 = (byte_conflict *)s_C1A4__100a22a8;
      break;
    case 6:
      pbVar4 = (byte_conflict *)s_C2A1__100a22a0;
      break;
    case 7:
      pbVar4 = (byte_conflict *)s_C2A2__100a2298;
      break;
    case 8:
      pbVar4 = (byte_conflict *)s_C2A3__100a2290;
      break;
    case 9:
      pbVar4 = (byte_conflict *)s_C2A4__100a2288;
      break;
    case 10:
      pbVar4 = (byte_conflict *)s_C2A5__100a2280;
      break;
    case 0xb:
      pbVar4 = (byte_conflict *)s_C3A1__100a2278;
      break;
    case 0xc:
      pbVar4 = (byte_conflict *)s_C3A2__100a2270;
    }
  }
  if (*pbVar4 != '!') {
    uVar3 = SENTENCEG_PlayRndSz(peVar1->pContainingEntity,pbVar4,pbVar2,0x3e99999a,0);
    if ((int)uVar3 < 0) {
      (*g_engfuncs.pfnAlertMessage)(at_console,s_Level_Design_Error__SPEAKER_has_b_100a2230,pbVar4);
    }
    (*g_engfuncs.pfnRandomFloat)(15.0,135.0);
    this->pev->nextthink = (float)(extraout_ST0_00 + (float10)gpGlobals->time);
    _DAT_100ae750 = gpGlobals->time + 5.0;
    return;
  }
  UTIL_EmitAmbientSound(peVar1->pContainingEntity,peVar1->origin,(char *)pbVar4,pbVar2,0x3e99999a,0)
  ;
  this->pev->nextthink = 0.0;
  return;
}

/* 1003d9c0  CSpeaker::ToggleUse  (135 bytes)
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
  
                    /* 0x3d9c0  122  ?ToggleUse@CSpeaker@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  peVar1 = this->pev;
  bVar2 = peVar1->nextthink <= 0.0;
  if (param_3 != 3) {
    if (bVar2) {
      if (param_3 == 0) {
        return;
      }
    }
    else if (param_3 == 1) {
      return;
    }
  }
  if (param_3 == 1) {
    peVar1->nextthink = gpGlobals->time + 0.1;
    return;
  }
  if (param_3 == 0) {
    peVar1->nextthink = 0.0;
    return;
  }
  if (bVar2) {
    peVar1->nextthink = gpGlobals->time + 0.1;
    return;
  }
  peVar1->nextthink = 0.0;
  return;
}

/* 1003da50  CSpeaker::KeyValue  (110 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CSpeaker::KeyValue(CSpeaker *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  CSpeaker *this_00;
  char *pcVar6;
  bool bVar7;
  undefined3 uVar5;
  
  pcVar6 = s_preset_100a20a4;
  pbVar2 = *(byte **)(param_1 + 4);
  this_00 = this;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CSpeaker *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1003da8a:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_1003da8f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CSpeaker *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1003da8a;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1003da8f:
  if (iVar3 == 0) {
    uVar4 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x54 = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

