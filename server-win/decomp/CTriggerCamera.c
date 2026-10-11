/* mp.dll - CTriggerCamera (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10043260  CTriggerCamera::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CTriggerCamera::Save(CBaseDelay *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseDelay::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CTriggerCamera_100a2e48,(int)param_1,0x100a2928,0xd)
  ;
  return;
}

/* 10043290  CTriggerCamera::Restore  (48 bytes)
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
            (param_2,(byte_conflict *)s_CTriggerCamera_100a2e48,(int)param_1,&DAT_100a2928,0xd);
  return;
}

/* 100432c0  CTriggerCamera::Spawn  (117 bytes)
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

/* 10043340  CTriggerCamera::KeyValue  (359 bytes)
 * undefined KeyValue()
 */
void __thiscall CTriggerCamera::KeyValue(CBaseDelay *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  CBaseDelay *pCVar5;
  byte *pbVar7;
  char *pcVar8;
  bool bVar9;
  float10 fVar10;
  undefined3 uVar6;
  
  pbVar4 = *(byte **)(param_2 + 4);
  pbVar7 = &DAT_100a00b8;
  pbVar2 = pbVar4;
  pCVar5 = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)pCVar5 >> 8);
    pCVar5 = (CBaseDelay *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_10043378:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1004337d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    pCVar5 = (CBaseDelay *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_10043378;
    pbVar2 = pbVar2 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1004337d:
  if (iVar3 == 0) {
    fVar10 = atof((undefined *)pCVar5,*(byte_conflict **)(param_2 + 8));
    *(float *)&param_1[1].field_0x18 = (float)fVar10;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_moveto_100a2e78;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)pCVar5 >> 8);
    pCVar5 = (CBaseDelay *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_100433c9:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_100433ce;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    pCVar5 = (CBaseDelay *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_100433c9;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100433ce:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)&param_1[1].field_0x14 = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_acceleration_100a2e68;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)pCVar5 >> 8);
    pCVar5 = (CBaseDelay *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_1004341b:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10043420;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    pCVar5 = (CBaseDelay *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_1004341b;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10043420:
  if (iVar3 == 0) {
    fVar10 = atof((undefined *)pCVar5,*(byte_conflict **)(param_2 + 8));
    *(float *)&param_1[1].field_0x30 = (float)fVar10;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar8 = s_deceleration_100a2e58;
  do {
    bVar1 = *pbVar4;
    uVar6 = (undefined3)((uint)pCVar5 >> 8);
    pCVar5 = (CBaseDelay *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_1004346f:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10043474;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    pCVar5 = (CBaseDelay *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_1004346f;
    pbVar4 = pbVar4 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10043474:
  if (iVar3 == 0) {
    fVar10 = atof((undefined *)pCVar5,*(byte_conflict **)(param_2 + 8));
    *(float *)&param_1[1].field_0x34 = (float)fVar10;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  CBaseDelay::KeyValue(param_1,param_2);
  return;
}

/* 100434b0  CTriggerCamera::Use  (728 bytes)
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
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar4 = CBaseEntity::ShouldToggle(param_4,param_1[0x25]);
  if (iVar4 != 0) {
    iVar4 = param_1[0x25];
    param_1[0x25] = (uint)(iVar4 == 0);
    if ((iVar4 == 0) == 0) {
      param_1[0x1e] = (int)gpGlobals->time;
      return;
    }
    if ((param_2 == (int *)0x0) || (iVar4 = (**(code **)(*param_2 + 0xc0))(), iVar4 == 0)) {
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
      iVar4 = (**(code **)(*param_1 + 0xcc))();
      EHANDLE::operator=(this,iVar4);
    }
    else {
      *(undefined4 *)this = *(undefined4 *)(param_1 + 0x17);
      param_1[0x1a] = param_1[0x18];
    }
    bVar3 = FUN_1000e440((uint *)this);
    if (CONCAT31(extraout_var,bVar3) != 0) {
      if ((*(byte *)(param_1[1] + 0x1a0) & 4) != 0) {
        FUN_10035870(param_2,0);
      }
      if (param_1[0x1c] == 0) {
        param_1[0x1b] = 0;
      }
      else {
        peVar5 = (*g_engfuncs.pfnFindEntityByString)
                           ((edict_t *)0x0,s_targetname_1009c68c,
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
        fVar6 = (float10)(**(code **)(*piVar1 + 0x88))();
        param_1[0x1f] = (int)(float)(fVar6 + (float10)(float)param_1[0x1f]);
      }
      iVar4 = param_1[1];
      if ((*(byte *)(iVar4 + 0x1a0) & 1) == 0) {
        *(undefined4 *)(iVar4 + 0x20) = 0;
        *(undefined4 *)(iVar4 + 0x24) = 0;
        *(undefined4 *)(iVar4 + 0x28) = 0;
      }
      else {
        iVar2 = param_2[1];
        fStack_c = *(float *)(iVar2 + 0x174) + *(float *)(iVar2 + 8);
        fStack_8 = *(float *)(iVar2 + 0x178) + *(float *)(iVar2 + 0xc);
        fStack_4 = *(float *)(iVar2 + 0x17c) + *(float *)(iVar2 + 0x10);
        UTIL_SetOrigin(iVar4,&fStack_c);
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
      FUN_10043a70((int)param_1);
    }
  }
  return;
}

/* 10043790  CTriggerCamera::FollowTarget  (721 bytes)
 * void FollowTarget(void)
 */
/* public: void __thiscall CTriggerCamera::FollowTarget(void) */

void __thiscall CTriggerCamera::FollowTarget(CTriggerCamera *this)

{
  undefined1 *puVar1;
  float fVar2;
  entvars_t *peVar3;
  edict_t *pViewent;
  float fVar4;
  bool bVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar6;
  float *pfVar7;
  int *piVar8;
  void *this_00;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c [3];
  
                    /* 0x43790  55  ?FollowTarget@CTriggerCamera@@QAEXXZ */
  puVar1 = &this->field_0x5c;
  bVar5 = FUN_1000e440((uint *)puVar1);
  if (CONCAT31(extraout_var,bVar5) != 0) {
    bVar5 = FUN_1000e440((uint *)&this->field_0x64);
    if ((CONCAT31(extraout_var_00,bVar5) != 0) && (gpGlobals->time <= *(float *)&this->field_0x78))
    {
      peVar3 = this->pev;
      iVar6 = EHANDLE::operator->((uint *)&this->field_0x64);
      iVar6 = *(int *)(iVar6 + 4);
      local_18 = *(float *)(iVar6 + 8) - peVar3->origin[0];
      local_14 = *(float *)(iVar6 + 0xc) - peVar3->origin[1];
      local_10 = *(float *)(iVar6 + 0x10) - peVar3->origin[2];
      pfVar7 = (float *)UTIL_VecToAngles(local_c,&local_18);
      fVar2 = *pfVar7;
      peVar3 = this->pev;
      local_14 = pfVar7[1];
      if (360.0 < peVar3->angles[1]) {
        peVar3->angles[1] = peVar3->angles[1] - 360.0;
      }
      peVar3 = this->pev;
      if (peVar3->angles[1] < 0.0) {
        peVar3->angles[1] = peVar3->angles[1] + 360.0;
      }
      peVar3 = this->pev;
      fVar2 = -fVar2 - peVar3->angles[0];
      fVar4 = local_14 - peVar3->angles[1];
      if (fVar2 < -180.0) {
        fVar2 = fVar2 + 360.0;
      }
      if (180.0 < fVar2) {
        fVar2 = fVar2 - 360.0;
      }
      if (fVar4 < -180.0) {
        fVar4 = fVar4 + 360.0;
      }
      if (180.0 < fVar4) {
        fVar4 = fVar4 - 360.0;
      }
      peVar3->avelocity[0] = fVar2 * gpGlobals->frametime * 40.0;
      this->pev->avelocity[1] = fVar4 * gpGlobals->frametime * 40.0;
      peVar3 = this->pev;
      if ((peVar3->spawnflags & 4) == 0) {
        local_14 = peVar3->velocity[1] * 0.8;
        local_10 = peVar3->velocity[2] * 0.8;
        peVar3->velocity[0] = peVar3->velocity[0] * 0.8;
        peVar3->velocity[1] = local_14;
        peVar3->velocity[2] = local_10;
        peVar3 = this->pev;
        if (SQRT(peVar3->velocity[2] * peVar3->velocity[2] +
                 peVar3->velocity[1] * peVar3->velocity[1] +
                 peVar3->velocity[0] * peVar3->velocity[0]) < 10.0) {
          peVar3->velocity[0] = DAT_100ae498;
          peVar3->velocity[1] = DAT_100ae49c;
          peVar3->velocity[2] = DAT_100ae4a0;
        }
      }
      this->pev->nextthink = gpGlobals->time;
      FUN_10043a70((int)this);
      return;
    }
    piVar8 = (int *)EHANDLE::operator->((uint *)puVar1);
    iVar6 = (**(code **)(*piVar8 + 0xac))();
    if (iVar6 != 0) {
      iVar6 = EHANDLE::operator->((uint *)puVar1);
      pViewent = *(edict_t **)(*(int *)(iVar6 + 4) + 0x208);
      iVar6 = EHANDLE::operator->((uint *)puVar1);
      (*g_engfuncs.pfnSetView)(*(edict_t **)(*(int *)(iVar6 + 4) + 0x208),pViewent);
      iVar6 = 1;
      this_00 = (void *)EHANDLE::operator->((uint *)puVar1);
      FUN_10035870(this_00,iVar6);
    }
    CBaseDelay::SUB_UseTargets((CBaseDelay *)this,(int *)this,3,0);
    peVar3 = this->pev;
    peVar3->avelocity[0] = 0.0;
    peVar3->avelocity[1] = 0.0;
    peVar3->avelocity[2] = 0.0;
    *(undefined4 *)&this->field_0x94 = 0;
  }
  return;
}

