/* ts_i386.so - CFuncTrackChange (20 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000d5ce4  CFuncTrackChange::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CFuncTrackChange::Save(CSave &) */

undefined4 __thiscall CFuncTrackChange::Save(CFuncTrackChange *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CFuncPlatRot::Save((CFuncPlatRot *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CFuncTrackChange",(int)this,(int *)m_SaveData,9);
  }
  return uVar2;
}

/* 000d5d34  CFuncTrackChange::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CFuncTrackChange::Restore(CRestore &) */

undefined4 __thiscall CFuncTrackChange::Restore(CFuncTrackChange *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CFuncPlatRot::Restore((CFuncPlatRot *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CFuncTrackChange",(int)this,(int)m_SaveData,9);
  }
  return uVar2;
}

/* 000d5d84  CFuncTrackChange::Spawn  (271 bytes)
 * undefined Spawn(void)
 */
/* CFuncTrackChange::Spawn(void) */

void __thiscall CFuncTrackChange::Spawn(CFuncTrackChange *this)

{
  int iVar1;
  vec_t *pvVar2;
  vec_t *pvVar3;
  
  CFuncPlat::Setup((CFuncPlat *)this);
  if ((this->pev->spawnflags & 0x10) != 0) {
    *(vec_t *)&this->field_0xb0 = this->pev->origin[2];
  }
  CFuncPlatRot::SetupRotation((CFuncPlatRot *)this);
  if ((this->pev->spawnflags & 8) == 0) {
    UTIL_SetOrigin((int)this->pev,&this->field_0x9c);
    *(undefined4 *)&this->field_0x80 = 0;
    pvVar2 = (vec_t *)&this->field_0x114;
    pvVar3 = this->pev->angles;
    for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pvVar3 = *pvVar2;
      pvVar2 = pvVar2 + 1;
      pvVar3 = pvVar3 + 1;
    }
    *(undefined4 *)&this->field_0x148 = 1;
  }
  else {
    UTIL_SetOrigin((int)this->pev,&this->field_0xa8);
    *(undefined4 *)&this->field_0x80 = 1;
    pvVar2 = (vec_t *)&this->field_0x120;
    pvVar3 = this->pev->angles;
    for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pvVar3 = *pvVar2;
      pvVar2 = pvVar2 + 1;
      pvVar3 = pvVar3 + 1;
    }
    *(undefined4 *)&this->field_0x148 = 0;
  }
  *(undefined4 *)&this->field_0x14c = 1;
  this->pev->nextthink = this->pev->ltime + 2.0;
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = CFuncTrainControls::Find;
  (*this->vtable[10])(this);
  return;
}

/* 000d5e94  CFuncTrackChange::Precache  (54 bytes)
 * undefined Precache(void)
 */
/* CFuncTrackChange::Precache(void) */

void __thiscall CFuncTrackChange::Precache(CFuncTrackChange *this)

{
  (*g_engfuncs.pfnPrecacheSound)("buttons/button11.wav");
  CFuncPlat::Precache((CFuncPlat *)this);
  return;
}

/* 000d5ecc  CFuncTrackChange::Touch  (1 bytes)
 * undefined Touch(void)
 */
/* CFuncTrackChange::Touch(CBaseEntity *) */

void CFuncTrackChange::Touch(void)

{
  return;
}

/* 000d5ed0  CFuncTrackChange::KeyValue  (217 bytes)
 * undefined KeyValue(int param_1)
 */
/* CFuncTrackChange::KeyValue(KeyValueData_s *) */

void __thiscall CFuncTrackChange::KeyValue(CFuncTrackChange *this,int param_1)

{
  int iVar1;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"train");
  if (iVar1 == 0) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x140 = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"toptrack");
    if (iVar1 == 0) {
      iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
      *(int *)&this->field_0x138 = iVar1;
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      iVar1 = strcmp(*(char **)(param_1 + 4),"bottomtrack");
      if (iVar1 == 0) {
        iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
        *(int *)&this->field_0x13c = iVar1;
        *(undefined4 *)(param_1 + 0xc) = 1;
      }
      else {
        CFuncPlat::KeyValue((CFuncPlat *)this,param_1);
      }
    }
  }
  return;
}

/* 000d5fb0  CFuncTrackChange::OverrideReset  (66 bytes)
 * undefined OverrideReset(void)
 */
/* CFuncTrackChange::OverrideReset(void) */

void __thiscall CFuncTrackChange::OverrideReset(CFuncTrackChange *this)

{
  this->pev->nextthink = this->pev->ltime + 1.0;
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = Find;
  return;
}

/* 000d5ff4  CFuncTrackChange::Find  (828 bytes)
 * undefined Find(void)
 */
/* CFuncTrackChange::Find(void) */

void __thiscall CFuncTrackChange::Find(CFuncTrackChange *this)

{
  entvars_t *peVar1;
  bool bVar2;
  edict_t *peVar3;
  int iVar4;
  undefined4 uVar5;
  CPathTrack *pCVar6;
  char *pcVar7;
  char *szFmt;
  float local_3c;
  float local_38;
  float local_34;
  float local_2c;
  float local_28;
  float local_24;
  
  peVar3 = (*g_engfuncs.pfnFindEntityByString)
                     ((edict_t *)0x0,"targetname",
                      gpGlobals->pStringBase + *(int *)&this->field_0x138);
  bVar2 = false;
  if ((peVar3 == (edict_t *)0x0) ||
     (iVar4 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar3), iVar4 == 0)) {
    bVar2 = true;
  }
  if (bVar2) {
    pcVar7 = gpGlobals->pStringBase + *(int *)&this->field_0x138;
    szFmt = "Can\'t find top track for track change! %s\n";
  }
  else {
    uVar5 = CPathTrack::Instance((int)peVar3);
    *(undefined4 *)&this->field_0x12c = uVar5;
    peVar3 = (*g_engfuncs.pfnFindEntityByString)
                       ((edict_t *)0x0,"targetname",
                        gpGlobals->pStringBase + *(int *)&this->field_0x13c);
    bVar2 = false;
    if ((peVar3 == (edict_t *)0x0) ||
       (iVar4 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar3), iVar4 == 0)) {
      bVar2 = true;
    }
    if (!bVar2) {
      uVar5 = CPathTrack::Instance((int)peVar3);
      *(undefined4 *)&this->field_0x130 = uVar5;
      peVar3 = (*g_engfuncs.pfnFindEntityByString)
                         ((edict_t *)0x0,"targetname",
                          gpGlobals->pStringBase + *(int *)&this->field_0x140);
      bVar2 = false;
      if ((peVar3 == (edict_t *)0x0) ||
         (iVar4 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar3), iVar4 == 0)) {
        bVar2 = true;
      }
      if (!bVar2) {
        peVar3 = (*g_engfuncs.pfnFindEntityByString)
                           ((edict_t *)0x0,"targetname",
                            gpGlobals->pStringBase + *(int *)&this->field_0x140);
        iVar4 = CFuncTrackTrain::Instance((int)peVar3);
        *(int *)&this->field_0x134 = iVar4;
        if (iVar4 == 0) {
          (*g_engfuncs.pfnAlertMessage)
                    (at_error,"Can\'t find train for track change! %s\n",
                     gpGlobals->pStringBase + *(int *)&this->field_0x140);
          return;
        }
        peVar1 = this->pev;
        local_3c = (peVar1->absmin[0] + peVar1->absmax[0]) * 0.5;
        local_38 = (peVar1->absmin[1] + peVar1->absmax[1]) * 0.5;
        local_34 = (peVar1->absmin[2] + peVar1->absmax[2]) * 0.5;
        local_2c = local_3c;
        local_28 = local_38;
        local_24 = local_34;
        pCVar6 = CPathTrack::Nearest(*(CPathTrack **)&this->field_0x130,&local_3c);
        *(CPathTrack **)&this->field_0x130 = pCVar6;
        local_3c = local_2c;
        local_38 = local_28;
        local_34 = local_24;
        pCVar6 = CPathTrack::Nearest(*(CPathTrack **)&this->field_0x12c,&local_3c);
        *(CPathTrack **)&this->field_0x12c = pCVar6;
        (*this->vtable[0x4b])(this,*(undefined4 *)&this->field_0x80);
        *(undefined4 *)&this->field_0xc = 0;
        *(undefined4 *)&this->field_0x10 = 0;
        return;
      }
      (*g_engfuncs.pfnAlertMessage)
                (at_error,"Can\'t find train for track change! %s\n",
                 gpGlobals->pStringBase + *(int *)&this->field_0x140);
      (*g_engfuncs.pfnFindEntityByString)
                ((edict_t *)0x0,"targetname",gpGlobals->pStringBase + *(int *)&this->field_0x140);
      return;
    }
    pcVar7 = gpGlobals->pStringBase + *(int *)&this->field_0x13c;
    szFmt = "Can\'t find bottom track for track change! %s\n";
  }
  (*g_engfuncs.pfnAlertMessage)(at_error,szFmt,pcVar7);
  return;
}

/* 000d6338  CFuncTrackChange::EvaluateTrain  (280 bytes)
 * undefined1 EvaluateTrain(int param_1)
 */
/* CFuncTrackChange::EvaluateTrain(CPathTrack *) */

undefined1 __thiscall CFuncTrackChange::EvaluateTrain(CFuncTrackChange *this,int param_1)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  
  if (((param_1 == 0) || (*(int *)&this->field_0x134 == 0)) ||
     (((*(int *)(*(int *)&this->field_0x134 + 100) != param_1 &&
       ((*(int *)(param_1 + 0x70) == 0 ||
        (*(int *)(*(int *)&this->field_0x134 + 100) != *(int *)(param_1 + 0x70))))) &&
      ((*(int *)(param_1 + 0x6c) == 0 ||
       (*(int *)(*(int *)&this->field_0x134 + 100) != *(int *)(param_1 + 0x6c))))))) {
    uVar3 = 0;
  }
  else if (*(float *)(**(int **)&this->field_0x134 + 0x1f8) == 0.0) {
    fVar1 = this->pev->origin[0] - *(float *)(**(int **)&this->field_0x134 + 8);
    fVar2 = this->pev->origin[1] - *(float *)(**(int **)&this->field_0x134 + 0xc);
    fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
    if (*(float *)(*(int *)&this->field_0x134 + 0x68) <= fVar1) {
      uVar3 = fVar1 <= *(float *)(*(int *)&this->field_0x134 + 0x68) + 150.0;
    }
    else {
      uVar3 = 2;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

/* 000d6458  CFuncTrackChange::UpdateTrain  (569 bytes)
 * undefined UpdateTrain(float * param_1)
 */
/* CFuncTrackChange::UpdateTrain(Vector &) */

void __thiscall CFuncTrackChange::UpdateTrain(CFuncTrackChange *this,float *param_1)

{
  entvars_t *peVar1;
  float fVar2;
  int iVar3;
  vec_t *pvVar4;
  undefined4 *puVar5;
  vec_t *pvVar6;
  undefined4 *puVar7;
  undefined4 local_5c [4];
  undefined4 local_4c [4];
  float local_3c;
  float local_38;
  float local_34;
  float local_2c;
  float local_28;
  float local_24;
  
  fVar2 = this->pev->nextthink - this->pev->ltime;
  pvVar4 = this->pev->velocity;
  pvVar6 = (vec_t *)(**(int **)&this->field_0x134 + 0x20);
  for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pvVar6 = *pvVar4;
    pvVar4 = pvVar4 + 1;
    pvVar6 = pvVar6 + 1;
  }
  pvVar4 = this->pev->avelocity;
  pvVar6 = (vec_t *)(**(int **)&this->field_0x134 + 0x5c);
  for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pvVar6 = *pvVar4;
    pvVar4 = pvVar4 + 1;
    pvVar6 = pvVar6 + 1;
  }
  CFuncTrackTrain::NextThink
            (*(CFuncTrackTrain **)&this->field_0x134,
             fVar2 + *(float *)(**(int **)&this->field_0x134 + 0x100),0);
  if (0.0 < fVar2) {
    iVar3 = **(int **)&this->field_0x134;
    peVar1 = this->pev;
    local_2c = *(float *)(iVar3 + 8) - peVar1->origin[0];
    local_28 = *(float *)(iVar3 + 0xc) - peVar1->origin[1];
    local_24 = *(float *)(iVar3 + 0x10) - peVar1->origin[2];
    peVar1 = this->pev;
    local_3c = *param_1 - peVar1->angles[0];
    local_38 = param_1[1] - peVar1->angles[1];
    local_34 = param_1[2] - peVar1->angles[2];
    UTIL_MakeInvVectors(&local_3c,(int)gpGlobals);
    puVar5 = local_5c;
    puVar7 = local_4c;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    puVar5 = local_5c;
    puVar7 = (undefined4 *)(**(int **)&this->field_0x134 + 0x20);
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return;
}

/* 000d6694  CFuncTrackChange::GoDown  (270 bytes)
 * undefined GoDown(void)
 */
/* CFuncTrackChange::GoDown(void) */

void __thiscall CFuncTrackChange::GoDown(CFuncTrackChange *this)

{
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int *)&this->field_0x144 != 1) {
    (*this->vtable[0x4b])(this,3);
    if ((this->pev->spawnflags & 0x10) == 0) {
      CFuncPlat::GoDown((CFuncPlat *)this);
      *(undefined4 *)&this->field_0xdc = 0xffff0000;
      *(code **)&this->field_0xe0 = CFuncPlat::CallHitBottom;
      CFuncPlatRot::RotMove
                ((CFuncPlatRot *)this,(float *)&this->field_0x120,
                 this->pev->nextthink - this->pev->ltime);
    }
    else {
      *(undefined4 *)&this->field_0xdc = 0xffff0000;
      *(code **)&this->field_0xe0 = CFuncPlat::CallHitBottom;
      *(undefined4 *)&this->field_0x80 = 3;
      local_1c = *(float *)&this->field_0x120;
      local_18 = *(undefined4 *)&this->field_0x124;
      local_14 = *(undefined4 *)&this->field_0x128;
      CBaseToggle::AngularMove((CBaseToggle *)this,&local_1c,this->pev->speed);
    }
    if (*(int *)&this->field_0x144 == 2) {
      UpdateTrain(this,(float *)&this->field_0x120);
      *(undefined4 *)(*(int *)&this->field_0x134 + 100) = 0;
    }
  }
  return;
}

/* 000d67a4  CFuncTrackChange::GoUp  (270 bytes)
 * undefined GoUp(void)
 */
/* CFuncTrackChange::GoUp(void) */

void __thiscall CFuncTrackChange::GoUp(CFuncTrackChange *this)

{
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int *)&this->field_0x144 != 1) {
    (*this->vtable[0x4b])(this,2);
    if ((this->pev->spawnflags & 0x10) == 0) {
      CFuncPlat::GoUp((CFuncPlat *)this);
      *(undefined4 *)&this->field_0xdc = 0xffff0000;
      *(code **)&this->field_0xe0 = CFuncPlat::CallHitTop;
      CFuncPlatRot::RotMove
                ((CFuncPlatRot *)this,(float *)&this->field_0x114,
                 this->pev->nextthink - this->pev->ltime);
    }
    else {
      *(undefined4 *)&this->field_0x80 = 2;
      *(undefined4 *)&this->field_0xdc = 0xffff0000;
      *(code **)&this->field_0xe0 = CFuncPlat::CallHitTop;
      local_1c = *(float *)&this->field_0x114;
      local_18 = *(undefined4 *)&this->field_0x118;
      local_14 = *(undefined4 *)&this->field_0x11c;
      CBaseToggle::AngularMove((CBaseToggle *)this,&local_1c,this->pev->speed);
    }
    if (*(int *)&this->field_0x144 == 2) {
      UpdateTrain(this,(float *)&this->field_0x114);
      *(undefined4 *)(*(int *)&this->field_0x134 + 100) = 0;
    }
  }
  return;
}

/* 000d68b4  CFuncTrackChange::UpdateAutoTargets  (99 bytes)
 * undefined UpdateAutoTargets(int param_1)
 */
/* CFuncTrackChange::UpdateAutoTargets(int) */

void __thiscall CFuncTrackChange::UpdateAutoTargets(CFuncTrackChange *this,int param_1)

{
  uint *puVar1;
  
  if ((*(int *)&this->field_0x12c != 0) && (*(int *)&this->field_0x130 != 0)) {
    if (param_1 == 0) {
      puVar1 = (uint *)(**(int **)&this->field_0x12c + 0x1a0);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    else {
      puVar1 = (uint *)(**(int **)&this->field_0x12c + 0x1a0);
      *puVar1 = *puVar1 | 1;
    }
    if (param_1 == 1) {
      puVar1 = (uint *)(**(int **)&this->field_0x130 + 0x1a0);
      *puVar1 = *puVar1 & 0xfffffffe;
      return;
    }
    puVar1 = (uint *)(**(int **)&this->field_0x130 + 0x1a0);
    *puVar1 = *puVar1 | 1;
  }
  return;
}

/* 000d6918  CFuncTrackChange::Use  (213 bytes)
 * undefined Use(CFuncTrackChange * param_1)
 */
/* CFuncTrackChange::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CFuncTrackChange::Use(CFuncTrackChange *param_1)

{
  undefined1 uVar1;
  undefined3 extraout_var;
  int iVar2;
  
  if (1 < *(uint *)&param_1->field_0x80) {
    return;
  }
  if (*(int *)&param_1->field_0x80 == 0) {
    iVar2 = *(int *)&param_1->field_0x12c;
  }
  else {
    if (*(int *)&param_1->field_0x80 != 1) {
      *(undefined4 *)&param_1->field_0x144 = 1;
      goto LAB_000d697e;
    }
    iVar2 = *(int *)&param_1->field_0x130;
  }
  uVar1 = EvaluateTrain(param_1,iVar2);
  *(uint *)&param_1->field_0x144 = CONCAT31(extraout_var,uVar1);
LAB_000d697e:
  if (*(int *)&param_1->field_0x144 == 1) {
    EMIT_SOUND_DYN((int)param_1->pev->pContainingEntity,2,"buttons/button11.wav",0x3f800000,
                   0x3f4ccccd,0,100,0.5);
  }
  else {
    *(undefined4 *)&param_1->field_0x14c = 0;
    if (*(int *)&param_1->field_0x80 == 0) {
      (*param_1->vtable[0x48])(param_1);
    }
    else {
      (*param_1->vtable[0x47])(param_1);
    }
  }
  return;
}

/* 000d69f4  CFuncTrackChange::HitBottom  (163 bytes)
 * undefined HitBottom(void)
 */
/* CFuncTrackChange::HitBottom(void) */

void __thiscall CFuncTrackChange::HitBottom(CFuncTrackChange *this)

{
  int *piVar1;
  int iVar2;
  CPathTrack *pCVar3;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  CFuncPlatRot::HitBottom((CFuncPlatRot *)this);
  if (*(int *)&this->field_0x144 == 2) {
    piVar1 = *(int **)&this->field_0x134;
    iVar2 = *piVar1;
    local_2c = *(float *)(iVar2 + 8);
    local_28 = *(undefined4 *)(iVar2 + 0xc);
    local_24 = *(undefined4 *)(iVar2 + 0x10);
    pCVar3 = CPathTrack::Nearest(*(CPathTrack **)&this->field_0x130,&local_2c);
    piVar1[0x19] = (int)pCVar3;
  }
  *(undefined4 *)&this->field_0xc = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  this->pev->nextthink = -1.0;
  (*this->vtable[0x4b])(this,*(undefined4 *)&this->field_0x80);
  *(undefined4 *)&this->field_0x14c = 1;
  return;
}

/* 000d6a98  CFuncTrackChange::HitTop  (163 bytes)
 * undefined HitTop(void)
 */
/* CFuncTrackChange::HitTop(void) */

void __thiscall CFuncTrackChange::HitTop(CFuncTrackChange *this)

{
  int *piVar1;
  int iVar2;
  CPathTrack *pCVar3;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  CFuncPlatRot::HitTop((CFuncPlatRot *)this);
  if (*(int *)&this->field_0x144 == 2) {
    piVar1 = *(int **)&this->field_0x134;
    iVar2 = *piVar1;
    local_2c = *(float *)(iVar2 + 8);
    local_28 = *(undefined4 *)(iVar2 + 0xc);
    local_24 = *(undefined4 *)(iVar2 + 0x10);
    pCVar3 = CPathTrack::Nearest(*(CPathTrack **)&this->field_0x12c,&local_2c);
    piVar1[0x19] = (int)pCVar3;
  }
  *(undefined4 *)&this->field_0xc = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  this->pev->nextthink = -1.0;
  (*this->vtable[0x4b])(this,*(undefined4 *)&this->field_0x80);
  *(undefined4 *)&this->field_0x14c = 1;
  return;
}

/* 000d7cb0  CFuncTrackChange::IsTogglePlat  (6 bytes)
 * undefined4 IsTogglePlat(void)
 */
/* CFuncTrackChange::IsTogglePlat(void) */

undefined4 CFuncTrackChange::IsTogglePlat(void)

{
  return 1;
}

/* 000d7cb8  CFuncTrackChange::DisableUse  (15 bytes)
 * undefined DisableUse(void)
 */
/* CFuncTrackChange::DisableUse(void) */

void __thiscall CFuncTrackChange::DisableUse(CFuncTrackChange *this)

{
  *(undefined4 *)&this->field_0x14c = 0;
  return;
}

/* 000d7cc8  CFuncTrackChange::EnableUse  (15 bytes)
 * undefined EnableUse(void)
 */
/* CFuncTrackChange::EnableUse(void) */

void __thiscall CFuncTrackChange::EnableUse(CFuncTrackChange *this)

{
  *(undefined4 *)&this->field_0x14c = 1;
  return;
}

/* 000d7cd8  CFuncTrackChange::UseEnabled  (11 bytes)
 * undefined4 UseEnabled(void)
 */
/* CFuncTrackChange::UseEnabled(void) */

undefined4 __thiscall CFuncTrackChange::UseEnabled(CFuncTrackChange *this)

{
  return *(undefined4 *)&this->field_0x14c;
}

