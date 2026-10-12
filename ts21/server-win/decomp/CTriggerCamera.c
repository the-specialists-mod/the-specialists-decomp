/* mp.dll - CTriggerCamera (7 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1003c3f0  CTriggerCamera::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CTriggerCamera::Save(CBaseDelay *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseDelay::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CTriggerCamera_10097ba0,(int)param_1,0x10097678,0xd)
  ;
  return;
}

/* 1003c420  CTriggerCamera::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CTriggerCamera::Restore(CBaseDelay *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseDelay::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields
            (param_2,(byte_conflict *)s_CTriggerCamera_10097ba0,(int)param_1,0x10097678,0xd);
  return;
}

/* 1003c450  CTriggerCamera::Spawn  (117 bytes)
 * undefined Spawn()
 */
void __fastcall CTriggerCamera::Spawn(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 8;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x14c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x148) = 2;
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1f8);
  if (*(float *)(param_1 + 0x8c) == 0.0) {
    *(undefined4 *)(param_1 + 0x8c) = 0x43fa0000;
  }
  if (*(float *)(param_1 + 0x90) == 0.0) {
    *(undefined4 *)(param_1 + 0x90) = 0x43fa0000;
  }
  return;
}

/* 1003c4d0  CTriggerCamera::KeyValue  (223 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CTriggerCamera::KeyValue(CTriggerCamera *this,int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  float10 fVar7;
  
  pcVar4 = *(char **)(param_1 + 4);
  puVar1 = (undefined1 *)0x5;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = &DAT_10094d68;
  do {
    if (puVar1 == (undefined1 *)0x0) break;
    puVar1 = puVar1 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    fVar7 = FUN_1006e0fb(puVar1,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x74 = (float)fVar7;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar2 = 7;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_moveto_10097bd0;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    iVar2 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x70 = iVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar1 = (undefined1 *)0xd;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_acceleration_10097bc0;
  do {
    if (puVar1 == (undefined1 *)0x0) break;
    puVar1 = puVar1 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    fVar7 = FUN_1006e0fb(puVar1,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x8c = (float)fVar7;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar1 = (undefined1 *)0xd;
  bVar6 = true;
  pcVar3 = s_deceleration_10097bb0;
  do {
    if (puVar1 == (undefined1 *)0x0) break;
    puVar1 = puVar1 + -1;
    bVar6 = *pcVar4 == *pcVar3;
    pcVar4 = pcVar4 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar6);
  if (bVar6) {
    fVar7 = FUN_1006e0fb(puVar1,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x90 = (float)fVar7;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CBaseDelay::KeyValue((CBaseDelay *)this,param_1);
  return;
}

/* 1003c5b0  CTriggerCamera::Use  (701 bytes)
 * undefined Use()
 */
void __thiscall CTriggerCamera::Use(int *param_1,int *param_2,undefined4 param_3,int param_4)

{
  EHANDLE *this;
  int *piVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  edict_t *peVar5;
  undefined3 extraout_var;
  float10 fVar6;
  
  iVar4 = CBaseEntity::ShouldToggle(param_4,param_1[0x25]);
  if (iVar4 != 0) {
    iVar4 = param_1[0x25];
    param_1[0x25] = (uint)(iVar4 == 0);
    if ((iVar4 == 0) == 0) {
      param_1[0x1e] = (int)gpGlobals->time;
      return;
    }
    if ((param_2 == (int *)0x0) || (iVar4 = (**(code **)(*param_2 + 0xa8))(), iVar4 == 0)) {
      peVar5 = (*g_engfuncs.pfnPEntityOfEntIndex)(1);
      if ((peVar5 == (edict_t *)0x0) &&
         (peVar5 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar5 == (edict_t *)0x0)) {
        param_2 = (int *)0x0;
      }
      else {
        param_2 = peVar5->pvPrivateData;
      }
    }
    EHANDLE::operator=((EHANDLE *)(param_1 + 0x17),(int)param_2);
    this = (EHANDLE *)(param_1 + 0x19);
    param_1[0x1e] = (int)((float)param_1[0x1d] + gpGlobals->time);
    *(int *)(param_1[1] + 0x1f8) = param_1[0x22];
    param_1[0x21] = param_1[0x22];
    if ((*(byte *)(param_1[1] + 0x1a0) & 2) == 0) {
      iVar4 = (**(code **)(*param_1 + 0xb4))();
      EHANDLE::operator=(this,iVar4);
    }
    else {
      *(undefined4 *)this = *(undefined4 *)(param_1 + 0x17);
      param_1[0x1a] = param_1[0x18];
    }
    bVar3 = FUN_1000c210((uint *)this);
    if (CONCAT31(extraout_var,bVar3) != 0) {
      if ((*(byte *)(param_1[1] + 0x1a0) & 4) != 0) {
        FUN_1002d9c0(param_2,0);
      }
      if (param_1[0x1c] == 0) {
        param_1[0x1b] = 0;
      }
      else {
        peVar5 = (*g_engfuncs.pfnFindEntityByString)
                           ((edict_t *)0x0,s_targetname_100915e4,
                            gpGlobals->pStringBase + param_1[0x1c]);
        if ((peVar5 == (edict_t *)0x0) &&
           (peVar5 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar5 == (edict_t *)0x0)) {
          param_1[0x1b] = 0;
        }
        else {
          param_1[0x1b] = (int)peVar5->pvPrivateData;
        }
      }
      param_1[0x1f] = (int)gpGlobals->time;
      piVar1 = (int *)param_1[0x1b];
      if (piVar1 != (int *)0x0) {
        if (*(float *)(piVar1[1] + 0x1f8) != 0.0) {
          param_1[0x21] = *(int *)(piVar1[1] + 0x1f8);
        }
        fVar6 = (float10)(**(code **)(*piVar1 + 0x70))();
        param_1[0x1f] = (int)(float)(fVar6 + (float10)(float)param_1[0x1f]);
      }
      iVar4 = param_1[1];
      if ((*(byte *)(iVar4 + 0x1a0) & 1) == 0) {
        *(undefined4 *)(iVar4 + 0x20) = 0;
        *(undefined4 *)(iVar4 + 0x24) = 0;
        *(undefined4 *)(iVar4 + 0x28) = 0;
      }
      else {
        FUN_100679a0();
        *(float *)(param_1[1] + 0x50) = -*(float *)(param_2[1] + 0x50);
        *(undefined4 *)(param_1[1] + 0x54) = *(undefined4 *)(param_2[1] + 0x54);
        *(undefined4 *)(param_1[1] + 0x58) = 0;
        iVar4 = param_2[1];
        iVar2 = param_1[1];
        *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar4 + 0x20);
        *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar4 + 0x24);
        *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(iVar4 + 0x28);
      }
      (*g_engfuncs.pfnSetView)(*(edict_t **)(param_2[1] + 0x208),*(edict_t **)(param_1[1] + 0x208));
      (*g_engfuncs.pfnSetModel)
                (*(edict_t **)(param_1[1] + 0x208),
                 gpGlobals->pStringBase + *(int *)(param_2[1] + 0xb8));
      param_1[4] = (int)FollowTarget;
      *(float *)(param_1[1] + 0x104) = gpGlobals->time;
      param_1[0x20] = 0;
      FUN_1003cb30((int)param_1);
    }
  }
  return;
}

/* 1003c870  CTriggerCamera::FollowTarget  (698 bytes)
 * void FollowTarget(void)
 */
/* public: void __thiscall CTriggerCamera::FollowTarget(void) */

void __thiscall CTriggerCamera::FollowTarget(CTriggerCamera *this)

{
  undefined1 *puVar1;
  entvars_t *peVar2;
  edict_t *pViewent;
  float fVar3;
  bool bVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar5;
  int *piVar6;
  void *this_00;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
                    /* 0x3c870  51  ?FollowTarget@CTriggerCamera@@QAEXXZ */
  puVar1 = &this->field_0x5c;
  bVar4 = FUN_1000c210((uint *)puVar1);
  if (CONCAT31(extraout_var,bVar4) != 0) {
    bVar4 = FUN_1000c210((uint *)&this->field_0x64);
    if ((CONCAT31(extraout_var_00,bVar4) != 0) && (gpGlobals->time <= *(float *)&this->field_0x78))
    {
      peVar2 = this->pev;
      iVar5 = FUN_1000c220((uint *)&this->field_0x64);
      iVar5 = *(int *)(iVar5 + 4);
      local_10 = *(float *)(iVar5 + 0x10) - peVar2->origin[2];
      local_14 = *(float *)(iVar5 + 0xc) - peVar2->origin[1];
      local_18 = *(float *)(iVar5 + 8) - peVar2->origin[0];
      UTIL_VecToAngles(&local_c,&local_18);
      peVar2 = this->pev;
      local_c = -local_c;
      if (360.0 < peVar2->angles[1]) {
        peVar2->angles[1] = peVar2->angles[1] - 360.0;
      }
      peVar2 = this->pev;
      if (peVar2->angles[1] < 0.0) {
        peVar2->angles[1] = peVar2->angles[1] + 360.0;
      }
      peVar2 = this->pev;
      fVar3 = local_c - peVar2->angles[0];
      local_8 = local_8 - peVar2->angles[1];
      if (fVar3 < -180.0) {
        fVar3 = fVar3 + 360.0;
      }
      if (180.0 < fVar3) {
        fVar3 = fVar3 - 360.0;
      }
      if (local_8 < -180.0) {
        local_8 = local_8 + 360.0;
      }
      if (180.0 < local_8) {
        local_8 = local_8 - 360.0;
      }
      peVar2->avelocity[0] = fVar3 * gpGlobals->frametime * 40.0;
      this->pev->avelocity[1] = local_8 * gpGlobals->frametime * 40.0;
      peVar2 = this->pev;
      if ((peVar2->spawnflags & 4) == 0) {
        local_18 = peVar2->velocity[0] * 0.8;
        local_14 = peVar2->velocity[1] * 0.8;
        local_10 = peVar2->velocity[2] * 0.8;
        peVar2->velocity[0] = local_18;
        peVar2->velocity[1] = local_14;
        peVar2->velocity[2] = local_10;
        peVar2 = this->pev;
        if (SQRT(peVar2->velocity[2] * peVar2->velocity[2] +
                 peVar2->velocity[1] * peVar2->velocity[1] +
                 peVar2->velocity[0] * peVar2->velocity[0]) < 10.0) {
          peVar2->velocity[0] = DAT_1009f4a8;
          peVar2->velocity[1] = DAT_1009f4ac;
          peVar2->velocity[2] = DAT_1009f4b0;
        }
      }
      this->pev->nextthink = gpGlobals->time;
      FUN_1003cb30((int)this);
      return;
    }
    piVar6 = (int *)FUN_1000c220((uint *)puVar1);
    iVar5 = (**(code **)(*piVar6 + 0x94))();
    if (iVar5 != 0) {
      iVar5 = FUN_1000c220((uint *)puVar1);
      pViewent = *(edict_t **)(*(int *)(iVar5 + 4) + 0x208);
      iVar5 = FUN_1000c220((uint *)puVar1);
      (*g_engfuncs.pfnSetView)(*(edict_t **)(*(int *)(iVar5 + 4) + 0x208),pViewent);
      iVar5 = 1;
      this_00 = (void *)FUN_1000c1d0((uint *)puVar1);
      FUN_1002d9c0(this_00,iVar5);
    }
    CBaseDelay::SUB_UseTargets((CBaseDelay *)this,(int *)this,3,0);
    peVar2 = this->pev;
    peVar2->avelocity[0] = 0.0;
    peVar2->avelocity[1] = 0.0;
    peVar2->avelocity[2] = 0.0;
    *(undefined4 *)&this->field_0x94 = 0;
  }
  return;
}

/* 1003d5b0  CTriggerCamera::ObjectCaps  (3 bytes)
 * undefined ObjectCaps()
 */
undefined4 CTriggerCamera::ObjectCaps(void)

{
  return 0;
}

