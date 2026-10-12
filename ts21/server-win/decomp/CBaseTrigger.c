/* mp.dll - CBaseTrigger (10 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1003a240  CBaseTrigger::InitTrigger  (170 bytes)
 * undefined InitTrigger(int param_1)
 * called by: CChangeLevel::Spawn, CTriggerCDAudio::Spawn, CTriggerEndSection::Spawn, CTriggerGravity::Spawn, CTriggerHurt::Spawn, CTriggerMonsterJump::Spawn, CTriggerMultiple::Spawn, CTriggerPush::Spawn, CTriggerSave::Spawn, CTriggerTeleport::Spawn
 */
void __fastcall CBaseTrigger::InitTrigger(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (((*(float *)(iVar1 + 0x50) != DAT_1009f4a8) || (*(float *)(iVar1 + 0x54) != DAT_1009f4ac)) ||
     (*(float *)(iVar1 + 0x58) != DAT_1009f4b0)) {
    SetMovedir(iVar1);
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 1;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  fVar2 = (float10)(*g_engfuncs.pfnCVarGetFloat)(s_showtriggers_10090ec8);
  if (fVar2 == (float10)0.0) {
    *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x80;
  }
  return;
}

/* 1003a2f0  CBaseTrigger::KeyValue  (186 bytes)
 * undefined KeyValue(int param_1)
 * called by: CChangeLevel::KeyValue, CLadder::KeyValue, CTriggerEndSection::KeyValue, CTriggerPush::KeyValue
 */
void __thiscall CBaseTrigger::KeyValue(CBaseTrigger *this,int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  void *this_00;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  float10 fVar7;
  longlong lVar8;
  
  pcVar4 = *(char **)(param_1 + 4);
  puVar2 = &DAT_00000007;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_damage_10092d70;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    fVar7 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    this->pev->dmg = (float)fVar7;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = (undefined1 *)0x6;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_count_100978f4;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    lVar8 = __ftol();
    *(int *)&this->field_0xbc = (int)lVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  this_00 = (void *)0xb;
  bVar6 = true;
  pcVar3 = s_damagetype_100978e8;
  do {
    if (this_00 == (void *)0x0) break;
    this_00 = (void *)((int)this_00 + -1);
    bVar6 = *pcVar4 == *pcVar3;
    pcVar4 = pcVar4 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar6);
  if (bVar6) {
    uVar1 = FUN_1006e1dd(this_00,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0xe8 = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CBaseToggle::KeyValue((CBaseToggle *)this,param_1);
  return;
}

/* 1003aa40  CBaseTrigger::ToggleUse  (88 bytes)
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
  
                    /* 0x3aa40  113  ?ToggleUse@CBaseTrigger@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z
                        */
  peVar1 = this->pev;
  if (peVar1->solid == 0) {
    peVar1->solid = 1;
    gpGlobals->force_retouch = gpGlobals->force_retouch + 1.0;
    FUN_100679a0();
    return;
  }
  peVar1->solid = 0;
  FUN_100679a0();
  return;
}

/* 1003aaa0  CBaseTrigger::HurtTouch  (507 bytes)
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
  
                    /* 0x3aaa0  55  ?HurtTouch@CBaseTrigger@@QAEXPAVCBaseEntity@@@Z */
  if (*(float *)(*(int *)(param_1 + 4) + 0x16c) == 0.0) {
    return;
  }
  if (((this->pev->spawnflags & 0x20) != 0) &&
     (iVar5 = (**(code **)(*(int *)param_1 + 0xa8))(), iVar5 == 0)) {
    return;
  }
  if (((this->pev->spawnflags & 8) != 0) &&
     (iVar5 = (**(code **)(*(int *)param_1 + 0xa8))(), iVar5 != 0)) {
    return;
  }
  iVar5 = (**(code **)(*DAT_1009f494 + 0x18))();
  peVar2 = this->pev;
  if (iVar5 == 0) {
    if ((gpGlobals->time < peVar2->dmgtime) && (gpGlobals->time != peVar2->pain_finished)) {
      return;
    }
  }
  else if (peVar2->dmgtime <= gpGlobals->time) {
    peVar2->impulse = 0;
    iVar5 = (**(code **)(*(int *)param_1 + 0xa8))();
    if (iVar5 != 0) {
      iVar5 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
      piVar1 = &this->pev->impulse;
      *piVar1 = *piVar1 | 1 << ((char)iVar5 - 1U & 0x1f);
    }
  }
  else if (gpGlobals->time != peVar2->pain_finished) {
    iVar5 = (**(code **)(*(int *)param_1 + 0xa8))();
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
    (**(code **)(*(int *)param_1 + 0x38))(peVar2,peVar2,fVar4,*(undefined4 *)&this->field_0xe8);
  }
  else {
    (**(code **)(*(int *)param_1 + 0x3c))(-fVar4);
  }
  this->pev->pain_finished = gpGlobals->time;
  this->pev->dmgtime = gpGlobals->time + 0.5;
  if (this->pev->target != 0) {
    if (((this->pev->spawnflags & 0x10) != 0) &&
       (iVar5 = (**(code **)(*(int *)param_1 + 0xa8))(), iVar5 == 0)) {
      return;
    }
    CBaseDelay::SUB_UseTargets((CBaseDelay *)this,(int *)param_1,3,0);
    if ((this->pev->spawnflags & 1) != 0) {
      this->pev->target = 0;
    }
  }
  return;
}

/* 1003ad00  CBaseTrigger::MultiTouch  (107 bytes)
 * void MultiTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CBaseTrigger::MultiTouch(class CBaseEntity *) */

void __thiscall CBaseTrigger::MultiTouch(CBaseTrigger *this,CBaseEntity *param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
                    /* 0x3ad00  67  ?MultiTouch@CBaseTrigger@@QAEXPAVCBaseEntity@@@Z */
  uVar1 = (*(int **)(param_1 + 4))[0x69];
  if ((((uVar1 & 8) == 0) || ((this->pev->spawnflags & 2) != 0)) &&
     (((uVar1 & 0x20) == 0 || ((this->pev->spawnflags & 1) == 0)))) {
    if ((this->pev->spawnflags & 4) == 0) {
      return;
    }
    iVar2 = 0xe;
    bVar5 = true;
    pcVar3 = gpGlobals->pStringBase + **(int **)(param_1 + 4);
    pcVar4 = s_func_pushable_10097940;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) {
      return;
    }
  }
  ActivateMultiTrigger(this,(int *)param_1);
  return;
}

/* 1003ad70  CBaseTrigger::ActivateMultiTrigger  (413 bytes)
 * float * ActivateMultiTrigger(int * param_1)
 * called by: CBaseTrigger::CounterUse, CBaseTrigger::MultiTouch
 */
float * __thiscall CBaseTrigger::ActivateMultiTrigger(CBaseTrigger *this,int *param_1)

{
  float fVar1;
  float fVar2;
  edict_t *peVar3;
  void *this_00;
  entvars_t *peVar4;
  int iVar5;
  int *piVar6;
  globalvars_t *pgVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  fVar1 = this->pev->nextthink;
  fVar2 = gpGlobals->time;
  peVar4 = (entvars_t *)
           (uint)(ushort)((ushort)(fVar1 < fVar2) << 8 | (ushort)(fVar1 == fVar2) << 0xe);
  if (fVar1 < fVar2 || (fVar1 == fVar2) != 0) {
    iVar5 = UTIL_IsMasterTriggered(*(int *)&this->field_0xec,param_1);
    peVar4 = (entvars_t *)0x0;
    if (iVar5 != 0) {
      iVar5 = 0xf;
      bVar10 = true;
      pcVar8 = gpGlobals->pStringBase + this->pev->classname;
      pcVar9 = s_trigger_secret_10097950;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar10 = *pcVar8 == *pcVar9;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      } while (bVar10);
      if (bVar10) {
        peVar3 = this->pev->enemy;
        if (peVar3 == (edict_t *)0x0) {
          return (float *)0x0;
        }
        iVar5 = 7;
        bVar10 = true;
        pcVar8 = gpGlobals->pStringBase + (peVar3->v).classname;
        pcVar9 = s_player_100915d0;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar10 = *pcVar8 == *pcVar9;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        } while (bVar10);
        if (!bVar10) {
          return (float *)&peVar3->v;
        }
        gpGlobals->found_secrets = gpGlobals->found_secrets + 1.0;
      }
      this_00 = (void *)this->pev->noise;
      if (this_00 != (void *)0x0) {
        EMIT_SOUND_DYN(this_00,this->pev->pContainingEntity,2,gpGlobals->pStringBase + (int)this_00,
                       0x3f800000,0x3f4ccccd,0,100);
      }
      EHANDLE::operator=((EHANDLE *)&this->field_0xc4,(int)param_1);
      uVar12 = 0;
      uVar11 = 3;
      piVar6 = (int *)FUN_1000c1d0((uint *)&this->field_0xc4);
      CBaseDelay::SUB_UseTargets((CBaseDelay *)this,piVar6,uVar11,uVar12);
      if ((this->pev->message != 0) && (iVar5 = (**(code **)(*param_1 + 0xa8))(), iVar5 != 0)) {
        UTIL_ShowMessage(gpGlobals->pStringBase + this->pev->message,param_1);
      }
      if (0.0 < *(float *)&this->field_0x7c) {
        *(code **)&this->field_0x10 = MultiWaitOver;
        pgVar7 = gpGlobals;
        this->pev->nextthink = *(float *)&this->field_0x7c + gpGlobals->time;
        return &pgVar7->time;
      }
      *(undefined4 *)&this->field_0x14 = 0;
      peVar4 = this->pev;
      peVar4->nextthink = gpGlobals->time + 0.1;
      *(code **)&this->field_0x10 = CBaseEntity::SUB_Remove;
    }
  }
  return (float *)peVar4;
}

/* 1003af10  CBaseTrigger::MultiWaitOver  (8 bytes)
 * void MultiWaitOver(void)
 */
/* public: void __thiscall CBaseTrigger::MultiWaitOver(void) */

void __thiscall CBaseTrigger::MultiWaitOver(CBaseTrigger *this)

{
                    /* 0x3af10  68  ?MultiWaitOver@CBaseTrigger@@QAEXXZ */
  *(undefined4 *)&this->field_0x10 = 0;
  return;
}

/* 1003af20  CBaseTrigger::CounterUse  (267 bytes)
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
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
                    /* 0x3af20  25  ?CounterUse@CBaseTrigger@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z
                        */
  this_00 = &this->field_0xc4;
  *(int *)&this->field_0xbc = *(int *)&this->field_0xbc + -1;
  EHANDLE::operator=((EHANDLE *)this_00,(int)param_1);
  if (-1 < *(int *)&this->field_0xbc) {
    iVar1 = FUN_1000c220((uint *)this_00);
    iVar3 = 7;
    bVar6 = true;
    pcVar4 = gpGlobals->pStringBase + **(int **)(iVar1 + 4);
    pcVar5 = s_player_100915d0;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *pcVar4 == *pcVar5;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if ((bVar6) && ((this->pev->spawnflags & 1) == 0)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    iVar1 = *(int *)&this->field_0xbc;
    if (iVar1 == 0) {
      if (bVar6) {
        (*g_engfuncs.pfnAlertMessage)(at_console,s_Sequence_completed__10097960);
      }
      piVar2 = (int *)FUN_1000c1d0((uint *)this_00);
      ActivateMultiTrigger(this,piVar2);
    }
    else if (bVar6) {
      if (iVar1 == 1) {
        (*g_engfuncs.pfnAlertMessage)(at_console,s_Only_1_more_to_go____10097974);
        return;
      }
      if (iVar1 != 2) {
        if (iVar1 != 3) {
          (*g_engfuncs.pfnAlertMessage)(at_console,s_There_are_more_to_go____100979bc);
          return;
        }
        (*g_engfuncs.pfnAlertMessage)(at_console,s_Only_3_more_to_go____100979a4);
        return;
      }
      (*g_engfuncs.pfnAlertMessage)(at_console,s_Only_2_more_to_go____1009798c);
      return;
    }
  }
  return;
}

/* 1003bab0  CBaseTrigger::ObjectCaps  (3 bytes)
 * undefined ObjectCaps()
 */
undefined4 CBaseTrigger::ObjectCaps(void)

{
  return 0;
}

/* 1003bea0  CBaseTrigger::TeleportTouch  (394 bytes)
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
  
                    /* 0x3bea0  110  ?TeleportTouch@CBaseTrigger@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = *(int *)(param_1 + 4);
  if ((((((*(byte *)(iVar1 + 0x1a4) & 0x28) != 0) &&
        (iVar3 = UTIL_IsMasterTriggered(*(int *)&this->field_0xec,param_1), iVar3 != 0)) &&
       ((uVar2 = this->pev->spawnflags, (uVar2 & 1) != 0 || ((*(byte *)(iVar1 + 0x1a4) & 0x20) == 0)
        ))) && ((((uVar2 & 2) == 0 || (iVar3 = (**(code **)(*(int *)param_1 + 0xa8))(), iVar3 == 0))
                && (pEdict = (*g_engfuncs.pfnFindEntityByString)
                                       ((edict_t *)0x0,s_targetname_100915e4,
                                        gpGlobals->pStringBase + this->pev->target),
                   pEdict != (edict_t *)0x0)))) &&
     (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict), iVar3 != 0)) {
    (**(code **)(*(int *)param_1 + 0xa8))();
    *(uint *)(iVar1 + 0x1a4) = *(uint *)(iVar1 + 0x1a4) & 0xfffffdff;
    FUN_100679a0();
    pvVar4 = (pEdict->v).angles;
    *(vec_t *)(iVar1 + 0x50) = *pvVar4;
    *(vec_t *)(iVar1 + 0x54) = (pEdict->v).angles[1];
    *(vec_t *)(iVar1 + 0x58) = (pEdict->v).angles[2];
    iVar3 = (**(code **)(*(int *)param_1 + 0xa8))();
    if (iVar3 != 0) {
      *(vec_t *)(iVar1 + 0x74) = *pvVar4;
      *(vec_t *)(iVar1 + 0x78) = (pEdict->v).angles[1];
      *(vec_t *)(iVar1 + 0x7c) = (pEdict->v).angles[2];
    }
    *(undefined4 *)(iVar1 + 0xa0) = 1;
    *(undefined4 *)(iVar1 + 0x2c) = DAT_1009f4a8;
    *(undefined4 *)(iVar1 + 0x30) = DAT_1009f4ac;
    *(undefined4 *)(iVar1 + 0x34) = DAT_1009f4b0;
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x2c);
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(iVar1 + 0x30);
    *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(iVar1 + 0x34);
  }
  return;
}

