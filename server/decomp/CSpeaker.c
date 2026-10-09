/* ts_i386.so - CSpeaker (8 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000e18e8  CSpeaker::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CSpeaker::Save(CSave &) */

undefined4 __thiscall CSpeaker::Save(CSpeaker *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CSpeaker",(int)this,(int *)m_SaveData,1);
  }
  return uVar2;
}

/* 000e1938  CSpeaker::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CSpeaker::Restore(CRestore &) */

undefined4 __thiscall CSpeaker::Restore(CSpeaker *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CSpeaker",(int)this,(int)m_SaveData,1);
  }
  return uVar2;
}

/* 000e1988  CSpeaker::Spawn  (270 bytes)
 * undefined Spawn(void)
 */
/* CSpeaker::Spawn(void) */

void __thiscall CSpeaker::Spawn(CSpeaker *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar2 = this->pev->message;
  if (*(int *)&this->field_0x64 == 0) {
    if (iVar2 != 0) {
      iVar3 = -1;
      pcVar4 = gpGlobals->pStringBase + iVar2;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (iVar3 != -2) goto LAB_000e1a34;
    }
    (*g_engfuncs.pfnAlertMessage)
              (at_error,"SPEAKER with no Level/Sentence! at: %f, %f, %f\n",
               (double)this->pev->origin[0],(double)this->pev->origin[1],
               (double)this->pev->origin[2]);
    this->pev->nextthink = gpGlobals->time + 0.1;
    *(undefined4 *)&this->field_0xc = 0xffff0000;
    *(code **)&this->field_0x10 = CBaseEntity::SUB_Remove;
  }
  else {
LAB_000e1a34:
    this->pev->solid = 0;
    this->pev->movetype = 0;
    *(undefined4 *)&this->field_0xc = 0xffff0000;
    *(code **)&this->field_0x10 = SpeakerThink;
    this->pev->nextthink = 0.0;
    *(undefined4 *)&this->field_0x1c = 0xffff0000;
    *(code **)&this->field_0x20 = ToggleUse;
    (*this->vtable[10])(this);
  }
  return;
}

/* 000e1a98  CSpeaker::Precache  (91 bytes)
 * undefined Precache(void)
 */
/* CSpeaker::Precache(void) */

void __thiscall CSpeaker::Precache(CSpeaker *this)

{
  longdouble lVar1;
  
  if ((((byte)this->pev->spawnflags ^ 1) & 1) != 0) {
    lVar1 = (longdouble)(*g_engfuncs.pfnRandomFloat)(5.0,15.0);
    this->pev->nextthink = (float)(lVar1 + (longdouble)gpGlobals->time);
  }
  return;
}

/* 000e1af4  CSpeaker::SpeakerThink  (472 bytes)
 * undefined SpeakerThink(void)
 */
/* CSpeaker::SpeakerThink(void) */

void __thiscall CSpeaker::SpeakerThink(CSpeaker *this)

{
  float fVar1;
  uint uVar2;
  char *unaff_ESI;
  longdouble extraout_ST0;
  longdouble extraout_ST0_00;
  
  fVar1 = this->pev->health * 0.1;
  if (CTalkMonster::g_talkWaitTime < gpGlobals->time) {
    if (*(int *)&this->field_0x64 == 0) {
      unaff_ESI = gpGlobals->pStringBase + this->pev->message;
    }
    else {
      switch(*(undefined4 *)&this->field_0x64) {
      case 1:
        unaff_ESI = "C1A0_";
        break;
      case 2:
        unaff_ESI = "C1A1_";
        break;
      case 3:
        unaff_ESI = "C1A2_";
        break;
      case 4:
        unaff_ESI = "C1A3_";
        break;
      case 5:
        unaff_ESI = "C1A4_";
        break;
      case 6:
        unaff_ESI = "C2A1_";
        break;
      case 7:
        unaff_ESI = "C2A2_";
        break;
      case 8:
        unaff_ESI = "C2A3_";
        break;
      case 9:
        unaff_ESI = "C2A4_";
        break;
      case 10:
        unaff_ESI = "C2A5_";
        break;
      case 0xb:
        unaff_ESI = "C3A1_";
        break;
      case 0xc:
        unaff_ESI = "C3A2_";
      }
    }
    if (*unaff_ESI == '!') {
      UTIL_EmitAmbientSound
                (this->pev->pContainingEntity,this->pev->origin,unaff_ESI,fVar1,0x3e99999a,0,100);
      this->pev->nextthink = 0.0;
    }
    else {
      uVar2 = SENTENCEG_PlayRndSz((int)this->pev->pContainingEntity,unaff_ESI,fVar1,0x3e99999a,0,100
                                 );
      if ((int)uVar2 < 0) {
        (*g_engfuncs.pfnAlertMessage)
                  (at_console,"Level Design Error!\nSPEAKER has bad sentence group name: %s\n",
                   unaff_ESI);
      }
      (*g_engfuncs.pfnRandomFloat)(15.0,135.0);
      this->pev->nextthink = (float)(extraout_ST0_00 + (longdouble)gpGlobals->time);
      CTalkMonster::g_talkWaitTime = gpGlobals->time + 5.0;
    }
  }
  else {
    (*g_engfuncs.pfnRandomFloat)(5.0,10.0);
    this->pev->nextthink = (float)(extraout_ST0 + (longdouble)CTalkMonster::g_talkWaitTime);
  }
  return;
}

/* 000e1cfc  CSpeaker::ToggleUse  (137 bytes)
 * undefined ToggleUse(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 */
/* CSpeaker::ToggleUse(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CSpeaker::ToggleUse(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  
  fVar1 = *(float *)(*param_1 + 0x104);
  if ((param_4 == 3) || (((fVar1 <= 0.0 || (param_4 != 1)) && ((0.0 < fVar1 || (param_4 != 0)))))) {
    if ((param_4 == 1) || ((param_4 != 0 && (fVar1 <= 0.0)))) {
      *(float *)(*param_1 + 0x104) = gpGlobals->time + 0.1;
    }
    else {
      *(undefined4 *)(*param_1 + 0x104) = 0;
    }
  }
  return;
}

/* 000e1d88  CSpeaker::KeyValue  (92 bytes)
 * undefined KeyValue(int param_1)
 */
/* CSpeaker::KeyValue(KeyValueData_s *) */

void __thiscall CSpeaker::KeyValue(CSpeaker *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"preset");
  if (iVar1 == 0) {
    uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
    *(undefined4 *)&this->field_0x64 = uVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

/* 000e2060  CSpeaker::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CSpeaker::ObjectCaps(void) */

undefined4 CSpeaker::ObjectCaps(void)

{
  return 0;
}

