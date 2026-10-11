/* mp.dll - CBaseTrigger (9 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10040d40  CBaseTrigger::InitTrigger  (170 bytes)
 * undefined InitTrigger(int param_1)
 * called by: CChangeLevel::Spawn, CTriggerCDAudio::Spawn, CTriggerEndSection::Spawn, CTriggerGravity::Spawn, CTriggerHurt::Spawn, CTriggerMonsterJump::Spawn, CTriggerMultiple::Spawn, CTriggerPush::Spawn, CTriggerSave::Spawn, CTriggerTeleport::Spawn
 */
void __fastcall CBaseTrigger::InitTrigger(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (((*(float *)(iVar1 + 0x50) != DAT_100ae498) || (*(float *)(iVar1 + 0x54) != DAT_100ae49c)) ||
     (*(float *)(iVar1 + 0x58) != DAT_100ae4a0)) {
    SetMovedir(iVar1);
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 1;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  fVar2 = (float10)(*g_engfuncs.pfnCVarGetFloat)(s_showtriggers_1009bf70);
  if (fVar2 == (float10)0.0) {
    *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x80;
  }
  return;
}

/* 10040df0  CBaseTrigger::KeyValue  (288 bytes)
 * undefined KeyValue(int param_1)
 * called by: CChangeLevel::KeyValue, CLadder::KeyValue, CTriggerEndSection::KeyValue
 */
void __thiscall CBaseTrigger::KeyValue(CBaseTrigger *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  CBaseTrigger *this_00;
  char *pcVar7;
  bool bVar8;
  float10 fVar9;
  longlong lVar10;
  undefined3 uVar6;
  
  pbVar4 = *(byte **)(param_1 + 4);
  pcVar7 = s_damage_1009de68;
  pbVar2 = pbVar4;
  this_00 = this;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CBaseTrigger *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10040e28:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10040e2d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CBaseTrigger *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10040e28;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10040e2d:
  if (iVar3 == 0) {
    fVar9 = atof((undefined *)this_00,*(byte_conflict **)(param_1 + 8));
    this->pev->dmg = (float)fVar9;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_count_100a2ba4;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CBaseTrigger *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10040e7f:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10040e84;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CBaseTrigger *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10040e7f;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10040e84:
  if (iVar3 == 0) {
    atof((undefined *)this_00,*(byte_conflict **)(param_1 + 8));
    lVar10 = __ftol();
    *(int *)&this->field_0xbc = (int)lVar10;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar7 = s_damagetype_100a2b98;
  do {
    bVar1 = *pbVar4;
    uVar6 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CBaseTrigger *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10040ed8:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10040edd;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    this_00 = (CBaseTrigger *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10040ed8;
    pbVar4 = pbVar4 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10040edd:
  if (iVar3 == 0) {
    uVar5 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0xe8 = uVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CBaseToggle::KeyValue((CBaseToggle *)this,param_1);
  return;
}

/* 10041690  CBaseTrigger::ToggleUse  (88 bytes)
 * void ToggleUse(CBaseEntity * param_1, CBaseEntity * param_2, USE_TYPE param_3, float param_4)
 */
/* public: void __thiscall CBaseTrigger::ToggleUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CBaseTrigger::ToggleUse
          (CBaseTrigger *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
          float param_4)

{
  entvars_t *peVar1;
  
                    /* 0x41690  120  ?ToggleUse@CBaseTrigger@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z
                        */
  peVar1 = this->pev;
  if (peVar1->solid == 0) {
    peVar1->solid = 1;
    gpGlobals->force_retouch = gpGlobals->force_retouch + 1.0;
    UTIL_SetOrigin((int)this->pev,this->pev->origin);
    return;
  }
  peVar1->solid = 0;
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  return;
}

/* 100416f0  CBaseTrigger::HurtTouch  (503 bytes)
 * void HurtTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CBaseTrigger::HurtTouch(class CBaseEntity *) */

void __thiscall CBaseTrigger::HurtTouch(CBaseTrigger *this,CBaseEntity *param_1)

{
  int *piVar1;
  entvars_t *peVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  
                    /* 0x416f0  59  ?HurtTouch@CBaseTrigger@@QAEXPAVCBaseEntity@@@Z */
  if (*(float *)(*(int *)(param_1 + 4) + 0x16c) == 0.0) {
    return;
  }
  if (((this->pev->spawnflags & 0x20) != 0) &&
     (iVar5 = (**(code **)(*(int *)param_1 + 0xc0))(), iVar5 == 0)) {
    return;
  }
  if (((this->pev->spawnflags & 8) != 0) &&
     (iVar5 = (**(code **)(*(int *)param_1 + 0xc0))(), iVar5 != 0)) {
    return;
  }
  iVar5 = (**(code **)(*g_pGameRules + 0x14))();
  peVar2 = this->pev;
  if (iVar5 == 0) {
    if ((gpGlobals->time < peVar2->dmgtime) && (gpGlobals->time != peVar2->pain_finished)) {
      return;
    }
  }
  else if (peVar2->dmgtime <= gpGlobals->time) {
    peVar2->impulse = 0;
    iVar5 = (**(code **)(*(int *)param_1 + 0xc0))();
    if (iVar5 != 0) {
      iVar5 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
      piVar1 = &this->pev->impulse;
      *piVar1 = *piVar1 | 1 << ((char)iVar5 - 1U & 0x1f);
    }
  }
  else if (gpGlobals->time != peVar2->pain_finished) {
    iVar5 = (**(code **)(*(int *)param_1 + 0xc0))();
    if (iVar5 == 0) {
      return;
    }
    iVar5 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
    uVar6 = 1 << ((char)iVar5 - 1U & 0x1f);
    uVar3 = this->pev->impulse;
    if ((uVar6 & uVar3) != 0) {
      return;
    }
    this->pev->impulse = uVar3 | uVar6;
  }
  peVar2 = this->pev;
  fVar4 = peVar2->dmg * 0.5;
  if (0.0 <= fVar4) {
    (**(code **)(*(int *)param_1 + 0x50))(peVar2,peVar2,fVar4,*(undefined4 *)&this->field_0xe8);
  }
  else {
    (**(code **)(*(int *)param_1 + 0x54))(-fVar4);
  }
  this->pev->pain_finished = gpGlobals->time;
  this->pev->dmgtime = gpGlobals->time + 0.5;
  if (this->pev->target != 0) {
    if (((this->pev->spawnflags & 0x10) != 0) &&
       (iVar5 = (**(code **)(*(int *)param_1 + 0xc0))(), iVar5 == 0)) {
      return;
    }
    CBaseDelay::SUB_UseTargets((CBaseDelay *)this,(int *)param_1,3,0);
    if ((this->pev->spawnflags & 1) != 0) {
      this->pev->target = 0;
    }
  }
  return;
}

/* 10041950  CBaseTrigger::MultiTouch  (147 bytes)
 * void MultiTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CBaseTrigger::MultiTouch(class CBaseEntity *) */

void __thiscall CBaseTrigger::MultiTouch(CBaseTrigger *this,CBaseEntity *param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  
                    /* 0x41950  72  ?MultiTouch@CBaseTrigger@@QAEXPAVCBaseEntity@@@Z */
  uVar2 = (*(int **)(param_1 + 4))[0x69];
  if ((((uVar2 & 8) == 0) || ((this->pev->spawnflags & 2) != 0)) &&
     (((uVar2 & 0x20) == 0 || ((this->pev->spawnflags & 1) == 0)))) {
    if ((this->pev->spawnflags & 4) == 0) {
      return;
    }
    pcVar5 = s_func_pushable_100a2bf0;
    pbVar3 = (byte *)(gpGlobals->pStringBase + **(int **)(param_1 + 4));
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_100419cb:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_100419d0;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_100419cb;
      pbVar3 = pbVar3 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_100419d0:
    if (iVar4 != 0) {
      return;
    }
  }
  ActivateMultiTrigger(this,(int *)param_1);
  return;
}

/* 100419f0  CBaseTrigger::ActivateMultiTrigger  (489 bytes)
 * undefined ActivateMultiTrigger(int * param_1)
 * called by: CBaseTrigger::CounterUse, CBaseTrigger::MultiTouch
 */
/* WARNING: Removing unreachable block (ram,0x10041a83) */

void __thiscall CBaseTrigger::ActivateMultiTrigger(CBaseTrigger *this,int *param_1)

{
  byte bVar1;
  edict_t *peVar2;
  void *this_00;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  char *pcVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (gpGlobals->time < this->pev->nextthink) {
    return;
  }
  iVar3 = UTIL_IsMasterTriggered(*(int *)&this->field_0xec,param_1);
  if (iVar3 == 0) {
    return;
  }
  pcVar6 = s_trigger_secret_100a2c00;
  pbVar4 = (byte *)(gpGlobals->pStringBase + this->pev->classname);
  do {
    bVar1 = *pbVar4;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_10041a6a:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_10041a6f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_10041a6a;
    pbVar4 = pbVar4 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10041a6f:
  if (iVar3 == 0) {
    peVar2 = this->pev->enemy;
    if (peVar2 == (edict_t *)0x0) {
      return;
    }
    pcVar6 = s_player_1009c678;
    pbVar4 = (byte *)(gpGlobals->pStringBase + (peVar2->v).classname);
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_10041abd:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_10041ac2;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_10041abd;
      pbVar4 = pbVar4 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_10041ac2:
    if (iVar3 != 0) {
      return;
    }
    gpGlobals->found_secrets = gpGlobals->found_secrets + 1.0;
  }
  this_00 = (void *)this->pev->noise;
  if (this_00 != (void *)0x0) {
    EMIT_SOUND_DYN(this_00,this->pev->pContainingEntity,2,gpGlobals->pStringBase + (int)this_00,
                   0x3f800000,0x3f4ccccd,0);
  }
  EHANDLE::operator=((EHANDLE *)&this->field_0xc4,(int)param_1);
  uVar9 = 0;
  uVar8 = 3;
  piVar5 = (int *)EHANDLE::operator->((uint *)&this->field_0xc4);
  CBaseDelay::SUB_UseTargets((CBaseDelay *)this,piVar5,uVar8,uVar9);
  if ((this->pev->message != 0) && (iVar3 = (**(code **)(*param_1 + 0xc0))(), iVar3 != 0)) {
    UTIL_ShowMessage(gpGlobals->pStringBase + this->pev->message,param_1);
  }
  if (*(float *)&this->field_0x7c <= 0.0) {
    *(undefined4 *)&this->field_0x14 = 0;
    this->pev->nextthink = gpGlobals->time + 0.1;
    *(code **)&this->field_0x10 = CBaseEntity::SUB_Remove;
    return;
  }
  *(code **)&this->field_0x10 = MultiWaitOver;
  this->pev->nextthink = *(float *)&this->field_0x7c + gpGlobals->time;
  return;
}

/* 10041be0  CBaseTrigger::MultiWaitOver  (8 bytes)
 * void MultiWaitOver(void)
 */
/* public: void __thiscall CBaseTrigger::MultiWaitOver(void) */

void __thiscall CBaseTrigger::MultiWaitOver(CBaseTrigger *this)

{
                    /* 0x41be0  73  ?MultiWaitOver@CBaseTrigger@@QAEXXZ */
  *(undefined4 *)&this->field_0x10 = 0;
  return;
}

/* 10041bf0  CBaseTrigger::CounterUse  (305 bytes)
 * void CounterUse(CBaseEntity * param_1, CBaseEntity * param_2, USE_TYPE param_3, float param_4)
 */
/* public: void __thiscall CBaseTrigger::CounterUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CBaseTrigger::CounterUse
          (CBaseTrigger *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
          float param_4)

{
  undefined1 *this_00;
  byte bVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  char *pcVar5;
  bool bVar6;
  
                    /* 0x41bf0  27  ?CounterUse@CBaseTrigger@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z
                        */
  this_00 = &this->field_0xc4;
  *(int *)&this->field_0xbc = *(int *)&this->field_0xbc + -1;
  EHANDLE::operator=((EHANDLE *)this_00,(int)param_1);
  if (-1 < *(int *)&this->field_0xbc) {
    iVar2 = EHANDLE::operator->((uint *)this_00);
    pcVar5 = s_player_1009c678;
    pbVar4 = (byte *)(gpGlobals->pStringBase + **(int **)(iVar2 + 4));
    do {
      bVar1 = *pbVar4;
      bVar6 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_10041c6a:
        iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_10041c6f;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar6 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_10041c6a;
      pbVar4 = pbVar4 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_10041c6f:
    if ((iVar2 == 0) && ((this->pev->spawnflags & 1) == 0)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    iVar2 = *(int *)&this->field_0xbc;
    if (iVar2 == 0) {
      if (bVar6) {
        (*g_engfuncs.pfnAlertMessage)(at_console,s_Sequence_completed__100a2c10);
      }
      piVar3 = (int *)EHANDLE::operator->((uint *)this_00);
      ActivateMultiTrigger(this,piVar3);
    }
    else if (bVar6) {
      if (iVar2 == 1) {
        (*g_engfuncs.pfnAlertMessage)(at_console,s_Only_1_more_to_go____100a2c24);
        return;
      }
      if (iVar2 != 2) {
        if (iVar2 != 3) {
          (*g_engfuncs.pfnAlertMessage)(at_console,s_There_are_more_to_go____100a2c6c);
          return;
        }
        (*g_engfuncs.pfnAlertMessage)(at_console,s_Only_3_more_to_go____100a2c54);
        return;
      }
      (*g_engfuncs.pfnAlertMessage)(at_console,s_Only_2_more_to_go____100a2c3c);
      return;
    }
  }
  return;
}

/* 10042cd0  CBaseTrigger::TeleportTouch  (400 bytes)
 * void TeleportTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CBaseTrigger::TeleportTouch(class CBaseEntity *) */

void __thiscall CBaseTrigger::TeleportTouch(CBaseTrigger *this,CBaseEntity *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  edict_t *pEdict;
  vec_t *pvVar4;
  vec_t vStack_c;
  vec_t vStack_8;
  float fStack_4;
  
                    /* 0x42cd0  117  ?TeleportTouch@CBaseTrigger@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = *(int *)(param_1 + 4);
  if ((((((*(byte *)(iVar1 + 0x1a4) & 0x28) != 0) &&
        (iVar3 = UTIL_IsMasterTriggered(*(int *)&this->field_0xec,param_1), iVar3 != 0)) &&
       ((uVar2 = this->pev->spawnflags, (uVar2 & 1) != 0 || ((*(byte *)(iVar1 + 0x1a4) & 0x20) == 0)
        ))) && ((((uVar2 & 2) == 0 || (iVar3 = (**(code **)(*(int *)param_1 + 0xc0))(), iVar3 == 0))
                && (pEdict = (*g_engfuncs.pfnFindEntityByString)
                                       ((edict_t *)0x0,s_targetname_1009c68c,
                                        gpGlobals->pStringBase + this->pev->target),
                   pEdict != (edict_t *)0x0)))) &&
     (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict), iVar3 != 0)) {
    vStack_c = (pEdict->v).origin[0];
    vStack_8 = (pEdict->v).origin[1];
    fStack_4 = (pEdict->v).origin[2];
    iVar3 = (**(code **)(*(int *)param_1 + 0xc0))();
    if (iVar3 != 0) {
      fStack_4 = fStack_4 - *(float *)(*(int *)(param_1 + 4) + 0xe4);
    }
    fStack_4 = fStack_4 + 1.0;
    *(uint *)(iVar1 + 0x1a4) = *(uint *)(iVar1 + 0x1a4) & 0xfffffdff;
    UTIL_SetOrigin(iVar1,&vStack_c);
    pvVar4 = (pEdict->v).angles;
    *(vec_t *)(iVar1 + 0x50) = *pvVar4;
    *(vec_t *)(iVar1 + 0x54) = (pEdict->v).angles[1];
    *(vec_t *)(iVar1 + 0x58) = (pEdict->v).angles[2];
    iVar3 = (**(code **)(*(int *)param_1 + 0xc0))();
    if (iVar3 != 0) {
      *(vec_t *)(iVar1 + 0x74) = *pvVar4;
      *(vec_t *)(iVar1 + 0x78) = (pEdict->v).angles[1];
      *(vec_t *)(iVar1 + 0x7c) = (pEdict->v).angles[2];
    }
    *(undefined4 *)(iVar1 + 0xa0) = 1;
    *(undefined4 *)(iVar1 + 0x2c) = DAT_100ae498;
    *(undefined4 *)(iVar1 + 0x30) = DAT_100ae49c;
    *(undefined4 *)(iVar1 + 0x34) = DAT_100ae4a0;
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x2c);
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(iVar1 + 0x30);
    *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(iVar1 + 0x34);
  }
  return;
}

