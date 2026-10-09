/* ts_i386.so - CTriggerCamera (8 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000e99b8  CTriggerCamera::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CTriggerCamera::Save(CSave &) */

undefined4 __thiscall CTriggerCamera::Save(CTriggerCamera *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseDelay::Save((CBaseDelay *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CTriggerCamera",(int)this,(int *)m_SaveData,0xd);
  }
  return uVar2;
}

/* 000e9a08  CTriggerCamera::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CTriggerCamera::Restore(CRestore &) */

undefined4 __thiscall CTriggerCamera::Restore(CTriggerCamera *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseDelay::Restore((CBaseDelay *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CTriggerCamera",(int)this,(int)m_SaveData,0xd);
  }
  return uVar2;
}

/* 000e9a58  CTriggerCamera::Spawn  (139 bytes)
 * undefined Spawn(void)
 */
/* CTriggerCamera::Spawn(void) */

void __thiscall CTriggerCamera::Spawn(CTriggerCamera *this)

{
  this->pev->movetype = 8;
  this->pev->solid = 0;
  this->pev->renderamt = 0.0;
  this->pev->rendermode = 2;
  *(float *)&this->field_0x98 = this->pev->speed;
  if (*(float *)&this->field_0x9c == 0.0) {
    *(undefined4 *)&this->field_0x9c = 0x43fa0000;
  }
  if (*(float *)&this->field_0xa0 == 0.0) {
    *(undefined4 *)&this->field_0xa0 = 0x43fa0000;
  }
  return;
}

/* 000e9ae4  CTriggerCamera::KeyValue  (284 bytes)
 * undefined KeyValue(int param_1)
 */
/* CTriggerCamera::KeyValue(KeyValueData_s *) */

void __thiscall CTriggerCamera::KeyValue(CTriggerCamera *this,int param_1)

{
  int iVar1;
  longdouble lVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"wait");
  if (iVar1 == 0) {
    lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
    *(float *)&this->field_0x84 = (float)lVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"moveto");
    if (iVar1 == 0) {
      iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
      *(int *)&this->field_0x80 = iVar1;
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      iVar1 = strcmp(*(char **)(param_1 + 4),"acceleration");
      if (iVar1 == 0) {
        lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
        *(float *)&this->field_0x9c = (float)lVar2;
        *(undefined4 *)(param_1 + 0xc) = 1;
      }
      else {
        iVar1 = strcmp(*(char **)(param_1 + 4),"deceleration");
        if (iVar1 == 0) {
          lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
          *(float *)&this->field_0xa0 = (float)lVar2;
          *(undefined4 *)(param_1 + 0xc) = 1;
        }
        else {
          CBaseDelay::KeyValue((CBaseDelay *)this,param_1);
        }
      }
    }
  }
  return;
}

/* 000e9c08  CTriggerCamera::Use  (872 bytes)
 * undefined Use(CTriggerCamera * param_1, CBasePlayer * param_2, undefined4 param_3, int param_4)
 */
/* CTriggerCamera::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CTriggerCamera::Use(CTriggerCamera *param_1,CBasePlayer *param_2,undefined4 param_3,int param_4
                        )

{
  entvars_t *peVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  edict_t *peVar5;
  int *piVar6;
  undefined3 extraout_var;
  void *pvVar7;
  vec_t *pvVar8;
  float *pfVar9;
  vec_t *pvVar10;
  longdouble lVar11;
  float local_2c [7];
  
  iVar3 = CBaseEntity::ShouldToggle(param_1,param_4,*(int *)&param_1->field_0xa4);
  if (iVar3 != 0) {
    uVar4 = (uint)(*(int *)&param_1->field_0xa4 == 0);
    *(uint *)&param_1->field_0xa4 = uVar4;
    if (uVar4 == 0) {
      *(float *)&param_1->field_0x88 = gpGlobals->time;
    }
    else {
      if ((param_2 == (CBasePlayer *)0x0) || (iVar3 = (*param_2->vtable[0x32])(param_2), iVar3 == 0)
         ) {
        peVar5 = (*g_engfuncs.pfnPEntityOfEntIndex)(1);
        if (peVar5 == (edict_t *)0x0) {
          peVar5 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
        }
        param_2 = (CBasePlayer *)0x0;
        if (peVar5 != (edict_t *)0x0) {
          param_2 = peVar5->pvPrivateData;
        }
      }
      EHANDLE::operator=((EHANDLE *)&param_1->field_0x6c,(int *)param_2);
      *(float *)&param_1->field_0x88 = gpGlobals->time + *(float *)&param_1->field_0x84;
      param_1->pev->speed = *(float *)&param_1->field_0x98;
      *(undefined4 *)&param_1->field_0x94 = *(undefined4 *)&param_1->field_0x98;
      if ((param_1->pev->spawnflags & 2) == 0) {
        piVar6 = (int *)(*param_1->vtable[0x35])(param_1);
        EHANDLE::operator=((EHANDLE *)&param_1->field_0x74,piVar6);
      }
      else {
        *(undefined4 *)&param_1->field_0x74 = *(undefined4 *)&param_1->field_0x6c;
        *(undefined4 *)&param_1->field_0x78 = *(undefined4 *)&param_1->field_0x70;
      }
      bVar2 = int((EHANDLE *)&param_1->field_0x74);
      if (CONCAT31(extraout_var,bVar2) != 0) {
        if ((param_1->pev->spawnflags & 4) != 0) {
          CBasePlayer::EnableControl(param_2,0);
        }
        if (*(int *)&param_1->field_0x80 == 0) {
          *(undefined4 *)&param_1->field_0x7c = 0;
        }
        else {
          peVar5 = (*g_engfuncs.pfnFindEntityByString)
                             ((edict_t *)0x0,"targetname",
                              gpGlobals->pStringBase + *(int *)&param_1->field_0x80);
          if (peVar5 == (edict_t *)0x0) {
            peVar5 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
          }
          pvVar7 = (void *)0x0;
          if (peVar5 != (edict_t *)0x0) {
            pvVar7 = peVar5->pvPrivateData;
          }
          *(void **)&param_1->field_0x7c = pvVar7;
        }
        *(float *)&param_1->field_0x8c = gpGlobals->time;
        if (*(int *)&param_1->field_0x7c != 0) {
          if (*(float *)(**(int **)&param_1->field_0x7c + 0x1f8) != 0.0) {
            *(undefined4 *)&param_1->field_0x94 =
                 *(undefined4 *)(**(int **)&param_1->field_0x7c + 0x1f8);
          }
          lVar11 = (longdouble)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0x7c + 0x60) + 0x90))
                             (*(int *)&param_1->field_0x7c);
          *(float *)&param_1->field_0x8c =
               (float)(lVar11 + (longdouble)*(float *)&param_1->field_0x8c);
        }
        if ((param_1->pev->spawnflags & 1) == 0) {
          local_2c[0] = 0.0;
          local_2c[1] = 0.0;
          local_2c[2] = 0.0;
          pfVar9 = local_2c;
          pvVar8 = param_1->pev->velocity;
          for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pvVar8 = *pfVar9;
            pfVar9 = pfVar9 + 1;
            pvVar8 = pvVar8 + 1;
          }
        }
        else {
          peVar1 = param_2->pev;
          local_2c[0] = peVar1->origin[0] + peVar1->view_ofs[0];
          local_2c[1] = peVar1->origin[1] + peVar1->view_ofs[1];
          local_2c[2] = peVar1->origin[2] + peVar1->view_ofs[2];
          UTIL_SetOrigin((int)param_1->pev,local_2c);
          param_1->pev->angles[0] = -param_2->pev->angles[0];
          param_1->pev->angles[1] = param_2->pev->angles[1];
          param_1->pev->angles[2] = 0.0;
          pvVar8 = param_2->pev->velocity;
          pvVar10 = param_1->pev->velocity;
          for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pvVar10 = *pvVar8;
            pvVar8 = pvVar8 + 1;
            pvVar10 = pvVar10 + 1;
          }
        }
        (*g_engfuncs.pfnSetView)(param_2->pev->pContainingEntity,param_1->pev->pContainingEntity);
        (*g_engfuncs.pfnSetModel)
                  (param_1->pev->pContainingEntity,gpGlobals->pStringBase + param_2->pev->model);
        *(undefined4 *)&param_1->field_0xc = 0xffff0000;
        *(code **)&param_1->field_0x10 = FollowTarget;
        param_1->pev->nextthink = gpGlobals->time;
        *(undefined4 *)&param_1->field_0x90 = 0;
        Move(param_1);
      }
    }
  }
  return;
}

/* 000e9f78  CTriggerCamera::FollowTarget  (713 bytes)
 * undefined FollowTarget(void)
 */
/* CTriggerCamera::FollowTarget(void) */

void __thiscall CTriggerCamera::FollowTarget(CTriggerCamera *this)

{
  undefined1 *this_00;
  float fVar1;
  edict_t *pViewent;
  entvars_t *peVar2;
  bool bVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar4;
  int *piVar5;
  CBasePlayer *this_01;
  float *pfVar6;
  vec_t *pvVar7;
  vec_t *pvVar8;
  float local_3c [4];
  float local_2c [7];
  
  bVar3 = int((EHANDLE *)&this->field_0x6c);
  if (CONCAT31(extraout_var,bVar3) != 0) {
    bVar3 = int((EHANDLE *)&this->field_0x74);
    if ((CONCAT31(extraout_var_00,bVar3) == 0) || (*(float *)&this->field_0x88 < gpGlobals->time)) {
      this_00 = &this->field_0x6c;
      iVar4 = EHANDLE::operator->((EHANDLE *)this_00);
      iVar4 = (**(code **)(*(int *)(iVar4 + 0x60) + 0xb4))(iVar4);
      if (iVar4 != 0) {
        piVar5 = (int *)EHANDLE::operator->((EHANDLE *)this_00);
        pViewent = *(edict_t **)(*piVar5 + 0x208);
        piVar5 = (int *)EHANDLE::operator->((EHANDLE *)this_00);
        (*g_engfuncs.pfnSetView)(*(edict_t **)(*piVar5 + 0x208),pViewent);
        iVar4 = 1;
        this_01 = (CBasePlayer *)_((EHANDLE *)this_00);
        CBasePlayer::EnableControl(this_01,iVar4);
      }
      CBaseDelay::SUB_UseTargets((CBaseDelay *)this,(int *)this,3,0);
      local_2c[0] = 0.0;
      local_2c[1] = 0.0;
      local_2c[2] = 0.0;
      pfVar6 = local_2c;
      pvVar7 = this->pev->avelocity;
      for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pvVar7 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        pvVar7 = pvVar7 + 1;
      }
      *(undefined4 *)&this->field_0xa4 = 0;
    }
    else {
      piVar5 = (int *)EHANDLE::operator->((EHANDLE *)&this->field_0x74);
      iVar4 = *piVar5;
      peVar2 = this->pev;
      local_3c[0] = *(float *)(iVar4 + 8) - peVar2->origin[0];
      local_3c[1] = *(float *)(iVar4 + 0xc) - peVar2->origin[1];
      local_3c[2] = *(float *)(iVar4 + 0x10) - peVar2->origin[2];
      UTIL_VecToAngles(local_2c,local_3c);
      local_2c[0] = -local_2c[0];
      fVar1 = this->pev->angles[1];
      if (360.0 < fVar1) {
        this->pev->angles[1] = fVar1 - 360.0;
      }
      peVar2 = this->pev;
      if (peVar2->angles[1] < 0.0) {
        peVar2->angles[1] = peVar2->angles[1] + 360.0;
      }
      fVar1 = local_2c[0] - this->pev->angles[0];
      local_2c[1] = local_2c[1] - this->pev->angles[1];
      if (fVar1 < -180.0) {
        fVar1 = fVar1 + 360.0;
      }
      if (180.0 < fVar1) {
        fVar1 = fVar1 - 360.0;
      }
      if (local_2c[1] < -180.0) {
        local_2c[1] = local_2c[1] + 360.0;
      }
      if (180.0 < local_2c[1]) {
        local_2c[1] = local_2c[1] - 360.0;
      }
      this->pev->avelocity[0] = fVar1 * 40.0 * gpGlobals->frametime;
      this->pev->avelocity[1] = local_2c[1] * 40.0 * gpGlobals->frametime;
      peVar2 = this->pev;
      if ((peVar2->spawnflags & 4) == 0) {
        local_3c[0] = peVar2->velocity[0] * 0.8;
        local_3c[1] = peVar2->velocity[1] * 0.8;
        local_3c[2] = peVar2->velocity[2] * 0.8;
        pfVar6 = local_3c;
        pvVar7 = peVar2->velocity;
        for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pvVar7 = *pfVar6;
          pfVar6 = pfVar6 + 1;
          pvVar7 = pvVar7 + 1;
        }
        peVar2 = this->pev;
        if (SQRT(peVar2->velocity[2] * peVar2->velocity[2] +
                 peVar2->velocity[1] * peVar2->velocity[1] +
                 peVar2->velocity[0] * peVar2->velocity[0]) < 10.0) {
          pvVar7 = (vec_t *)&g_vecZero;
          pvVar8 = this->pev->velocity;
          for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
            *pvVar8 = *pvVar7;
            pvVar7 = pvVar7 + 1;
            pvVar8 = pvVar8 + 1;
          }
        }
      }
      this->pev->nextthink = gpGlobals->time;
      Move(this);
    }
  }
  return;
}

/* 000ea244  CTriggerCamera::Move  (781 bytes)
 * undefined Move(void)
 */
/* CTriggerCamera::Move(void) */

void __thiscall CTriggerCamera::Move(CTriggerCamera *this)

{
  entvars_t *peVar1;
  entvars_t *peVar2;
  int iVar3;
  vec_t *pvVar4;
  float *pfVar5;
  vec_t *pvVar6;
  longdouble lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_4c [7];
  float local_30;
  float local_2c [7];
  
  if (*(int *)&this->field_0x7c != 0) {
    *(float *)&this->field_0x90 =
         *(float *)&this->field_0x90 - this->pev->speed * gpGlobals->frametime;
    if (*(float *)&this->field_0x90 <= 0.0) {
      if (*(int *)(**(int **)&this->field_0x7c + 0x1d4) != 0) {
        FireTargets((int)(gpGlobals->pStringBase + *(int *)(**(int **)&this->field_0x7c + 0x1d4)),
                    this,this,3,0);
        if ((*(byte *)(**(int **)&this->field_0x7c + 0x1a0) & 4) != 0) {
          *(undefined4 *)(**(int **)&this->field_0x7c + 0x1d4) = 0;
        }
      }
      iVar3 = (**(code **)(*(int *)(*(int *)&this->field_0x7c + 0x60) + 0xd4))
                        (*(int *)&this->field_0x7c);
      *(int *)&this->field_0x7c = iVar3;
      if (iVar3 == 0) {
        pvVar4 = (vec_t *)&g_vecZero;
        pvVar6 = this->pev->velocity;
        for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pvVar6 = *pvVar4;
          pvVar4 = pvVar4 + 1;
          pvVar6 = pvVar6 + 1;
        }
      }
      else {
        if (*(float *)(**(int **)&this->field_0x7c + 0x1f8) != 0.0) {
          *(undefined4 *)&this->field_0x94 = *(undefined4 *)(**(int **)&this->field_0x7c + 0x1f8);
        }
        iVar3 = **(int **)&this->field_0x7c;
        peVar1 = this->pev;
        local_2c[0] = *(float *)(iVar3 + 8) - peVar1->origin[0];
        local_2c[1] = *(float *)(iVar3 + 0xc) - peVar1->origin[1];
        local_2c[2] = *(float *)(iVar3 + 0x10) - peVar1->origin[2];
        *(float *)&this->field_0x90 =
             SQRT(local_2c[2] * local_2c[2] + local_2c[1] * local_2c[1] + local_2c[0] * local_2c[0])
        ;
        local_30 = SQRT(local_2c[2] * local_2c[2] +
                        local_2c[1] * local_2c[1] + local_2c[0] * local_2c[0]);
        if (local_30 == 0.0) {
          local_4c[0] = 0.0;
          local_4c[1] = 0.0;
          local_4c[2] = 1.0;
        }
        else {
          fVar9 = 1.0 / local_30;
          local_4c[0] = fVar9 * local_2c[0];
          local_4c[1] = fVar9 * local_2c[1];
          local_4c[2] = fVar9 * local_2c[2];
        }
        pfVar5 = local_4c;
        pvVar4 = this->pev->movedir;
        for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pvVar4 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          pvVar4 = pvVar4 + 1;
        }
        lVar7 = (longdouble)
                (**(code **)(*(int *)(*(int *)&this->field_0x7c + 0x60) + 0x90))
                          (*(int *)&this->field_0x7c);
        *(float *)&this->field_0x8c = (float)(lVar7 + (longdouble)gpGlobals->time);
      }
    }
    if (*(float *)&this->field_0x8c <= gpGlobals->time) {
      fVar10 = *(float *)&this->field_0x9c * gpGlobals->frametime;
      fVar9 = this->pev->speed;
      fVar8 = *(float *)&this->field_0x94;
    }
    else {
      fVar10 = *(float *)&this->field_0xa0 * gpGlobals->frametime;
      fVar9 = this->pev->speed;
      fVar8 = 0.0;
    }
    lVar7 = UTIL_Approach(fVar8,fVar9,fVar10);
    this->pev->speed = (float)lVar7;
    fVar8 = gpGlobals->frametime + gpGlobals->frametime;
    peVar1 = this->pev;
    fVar9 = peVar1->speed;
    local_4c[0] = fVar8 * fVar9 * peVar1->movedir[0];
    local_4c[1] = fVar8 * fVar9 * peVar1->movedir[1];
    local_4c[2] = fVar8 * fVar9 * peVar1->movedir[2];
    peVar2 = this->pev;
    fVar8 = 1.0 - fVar8;
    local_2c[0] = local_4c[0] + fVar8 * peVar2->velocity[0];
    local_2c[1] = fVar8 * peVar2->velocity[1] + local_4c[1];
    local_2c[2] = local_4c[2] + fVar8 * peVar2->velocity[2];
    pfVar5 = local_2c;
    pvVar4 = peVar1->velocity;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pvVar4 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pvVar4 = pvVar4 + 1;
    }
  }
  return;
}

/* 000ebb78  CTriggerCamera::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CTriggerCamera::ObjectCaps(void) */

undefined4 CTriggerCamera::ObjectCaps(void)

{
  return 0;
}

