/* mp.dll - CFuncTrackChange (15 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10031480  CFuncTrackChange::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CFuncTrackChange::Save(CFuncPlatRot *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CFuncPlatRot::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CFuncTrackChange_100a08c0,(int)param_1,0x100a0278,9)
  ;
  return;
}

/* 100314b0  CFuncTrackChange::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CFuncTrackChange::Restore(CFuncPlatRot *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CFuncPlatRot::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields
            (param_2,(byte_conflict *)s_CFuncTrackChange_100a08c0,(int)param_1,&DAT_100a0278,9);
  return;
}

/* 100314e0  CFuncTrackChange::Spawn  (219 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CFuncTrackChange::Spawn(int *param_1)

{
  int iVar1;
  
  CFuncPlat::Setup((int)param_1);
  if ((*(byte *)(param_1[1] + 0x1a0) & 0x10) != 0) {
    param_1[0x28] = *(int *)(param_1[1] + 0x10);
  }
  CFuncPlatRot::SetupRotation((int)param_1);
  iVar1 = param_1[1];
  if ((*(byte *)(iVar1 + 0x1a0) & 8) == 0) {
    UTIL_SetOrigin(iVar1,param_1 + 0x23);
    iVar1 = param_1[1];
    param_1[0x1c] = 0;
    *(int *)(iVar1 + 0x50) = param_1[0x40];
    *(int *)(iVar1 + 0x54) = param_1[0x41];
    *(int *)(iVar1 + 0x58) = param_1[0x42];
    param_1[0x4d] = 1;
  }
  else {
    UTIL_SetOrigin(iVar1,param_1 + 0x26);
    iVar1 = param_1[1];
    param_1[0x1c] = 1;
    *(int *)(iVar1 + 0x50) = param_1[0x43];
    *(int *)(iVar1 + 0x54) = param_1[0x44];
    *(int *)(iVar1 + 0x58) = param_1[0x45];
    param_1[0x4d] = 0;
  }
  param_1[0x4e] = 1;
  *(float *)(param_1[1] + 0x104) = *(float *)(param_1[1] + 0x100) + 2.0;
  param_1[4] = (int)CFuncTrainControls::Find;
  (**(code **)(*param_1 + 0x20))();
  return;
}

/* 100315c0  CFuncTrackChange::Precache  (26 bytes)
 * undefined Precache(int * param_1)
 */
void __fastcall CFuncTrackChange::Precache(int *param_1)

{
  (*g_engfuncs.pfnPrecacheSound)(s_buttons_button11_wav_1009c5a8);
  CFuncPlat::Precache(param_1);
  return;
}

/* 100315e0  CFuncTrackChange::KeyValue  (283 bytes)
 * undefined KeyValue()
 */
void __thiscall CFuncTrackChange::KeyValue(CFuncPlat *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  bool bVar6;
  
  pbVar4 = *(byte **)(param_2 + 4);
  pcVar5 = s_train_100a08ec;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_10031618:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1003161d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_10031618;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1003161d:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)&param_1[1].field_0x2c = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar5 = s_toptrack_100a08e0;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1003166d:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_10031672;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1003166d;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10031672:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)&param_1[1].field_0x24 = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar5 = s_bottomtrack_100a08d4;
  do {
    bVar1 = *pbVar4;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_100316c2:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_100316c7;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_100316c2;
    pbVar4 = pbVar4 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100316c7:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)&param_1[1].field_0x28 = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  CFuncPlat::KeyValue(param_1,param_2);
  return;
}

/* 10031700  CFuncTrackChange::OverrideReset  (29 bytes)
 * undefined OverrideReset()
 */
void __fastcall CFuncTrackChange::OverrideReset(int param_1)

{
  *(float *)(*(int *)(param_1 + 4) + 0x104) = *(float *)(*(int *)(param_1 + 4) + 0x100) + 1.0;
  *(code **)(param_1 + 0x10) = Find;
  return;
}

/* 10031720  CFuncTrackChange::Find  (670 bytes)
 * void Find(void)
 */
/* public: void __thiscall CFuncTrackChange::Find(void) */

void __thiscall CFuncTrackChange::Find(CFuncTrackChange *this)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcStack00000018;
  float fStack00000024;
  float fStack00000028;
  float fStack0000002c;
  float fStack00000034;
  float fStack00000038;
  
                    /* 0x31720  51  ?Find@CFuncTrackChange@@QAEXXZ */
  peVar2 = (*g_engfuncs.pfnFindEntityByString)
                     ((edict_t *)0x0,s_targetname_1009c68c,
                      gpGlobals->pStringBase + *(int *)&this->field_0x124);
  if (peVar2 != (edict_t *)0x0) {
    iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar2);
    if (iVar3 != 0) {
      uVar4 = FUN_1002dcb0((int)peVar2);
      *(undefined4 *)&this->field_0x118 = uVar4;
      peVar2 = (*g_engfuncs.pfnFindEntityByString)
                         ((edict_t *)0x0,s_targetname_1009c68c,
                          gpGlobals->pStringBase + *(int *)&this->field_0x128);
      if (peVar2 != (edict_t *)0x0) {
        iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar2);
        if (iVar3 != 0) {
          uVar4 = FUN_1002dcb0((int)peVar2);
          *(undefined4 *)&this->field_0x11c = uVar4;
          peVar2 = (*g_engfuncs.pfnFindEntityByString)
                             ((edict_t *)0x0,s_targetname_1009c68c,
                              gpGlobals->pStringBase + *(int *)&this->field_0x12c);
          if (peVar2 != (edict_t *)0x0) {
            iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar2);
            if (iVar3 != 0) {
              peVar2 = (*g_engfuncs.pfnFindEntityByString)
                                 ((edict_t *)0x0,s_targetname_1009c68c,
                                  gpGlobals->pStringBase + *(int *)&this->field_0x12c);
              iVar3 = FUN_10030fa0((int)peVar2);
              *(int *)&this->field_0x120 = iVar3;
              if (iVar3 == 0) {
                pcStack00000018 = gpGlobals->pStringBase + *(int *)&this->field_0x12c;
                (*g_engfuncs.pfnAlertMessage)(at_error,s_Can_t_find_train_for_track_chang_100a0950);
                return;
              }
              peVar1 = this->pev;
              fStack00000034 = peVar1->absmax[1] + peVar1->absmin[1];
              fStack00000038 = peVar1->absmax[2] + peVar1->absmin[2];
              fStack00000024 = (peVar1->absmax[0] + peVar1->absmin[0]) * 0.5;
              fStack00000028 = fStack00000034 * 0.5;
              pcStack00000018 = (char *)(fStack00000038 * 0.5);
              fStack0000002c = (float)pcStack00000018;
              iVar3 = CPathTrack::Nearest(*(CPathTrack **)&this->field_0x11c,fStack00000024,
                                          fStack00000028);
              *(int *)&this->field_0x11c = iVar3;
              pcStack00000018 = (char *)fStack0000002c;
              iVar3 = CPathTrack::Nearest(*(CPathTrack **)&this->field_0x118,fStack00000024,
                                          fStack00000028);
              *(int *)&this->field_0x118 = iVar3;
              pcStack00000018 = *(char **)&this->field_0x70;
              (*this->vtable[0x49])();
              *(undefined4 *)&this->field_0x10 = 0;
              return;
            }
          }
          (*g_engfuncs.pfnAlertMessage)(at_error,s_Can_t_find_train_for_track_chang_100a0950);
          (*g_engfuncs.pfnFindEntityByString)
                    ((edict_t *)0x0,s_targetname_1009c68c,
                     gpGlobals->pStringBase + *(int *)&this->field_0x12c);
          return;
        }
      }
      (*g_engfuncs.pfnAlertMessage)
                (at_error,s_Can_t_find_bottom_track_for_trac_100a0920,
                 gpGlobals->pStringBase + *(int *)&this->field_0x128);
      return;
    }
  }
  (*g_engfuncs.pfnAlertMessage)
            (at_error,s_Can_t_find_top_track_for_track_c_100a08f4,
             gpGlobals->pStringBase + *(int *)&this->field_0x124);
  return;
}

/* 100319c0  CFuncTrackChange::EvaluateTrain  (183 bytes)
 * undefined4 EvaluateTrain(int param_1)
 * called by: CFuncTrackAuto::Use, CFuncTrackChange::Use
 */
undefined4 __thiscall CFuncTrackChange::EvaluateTrain(CFuncTrackChange *this,int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  if (((param_1 != 0) && (iVar1 = *(int *)&this->field_0x120, iVar1 != 0)) &&
     (((iVar2 = *(int *)(iVar1 + 0x54), iVar2 == param_1 ||
       ((*(int *)(param_1 + 0x60) != 0 && (iVar2 == *(int *)(param_1 + 0x60))))) ||
      ((*(int *)(param_1 + 0x5c) != 0 && (iVar2 == *(int *)(param_1 + 0x5c))))))) {
    iVar2 = *(int *)(iVar1 + 4);
    if (*(float *)(iVar2 + 0x1f8) != 0.0) {
      return 1;
    }
    fVar3 = this->pev->origin[0] - *(float *)(iVar2 + 8);
    fVar4 = this->pev->origin[1] - *(float *)(iVar2 + 0xc);
    fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
    if (fVar3 < *(float *)(iVar1 + 0x58)) {
      return 2;
    }
    if (fVar3 <= *(float *)(iVar1 + 0x58) + 150.0) {
      return 1;
    }
  }
  return 0;
}

/* 10031a80  CFuncTrackChange::UpdateTrain  (542 bytes)
 * undefined UpdateTrain(float * param_1)
 * called by: CFuncTrackChange::GoDown, CFuncTrackChange::GoUp
 */
void __thiscall CFuncTrackChange::UpdateTrain(CFuncTrackChange *this,float *param_1)

{
  entvars_t *peVar1;
  int iVar2;
  float fVar3;
  Vector local_30;
  float local_24;
  float local_20;
  float local_1c;
  Vector local_18;
  float local_c;
  float local_8;
  float local_4;
  
  peVar1 = this->pev;
  fVar3 = peVar1->nextthink - peVar1->ltime;
  iVar2 = *(int *)(*(int *)&this->field_0x120 + 4);
  *(vec_t *)(iVar2 + 0x20) = peVar1->velocity[0];
  *(vec_t *)(iVar2 + 0x24) = peVar1->velocity[1];
  *(vec_t *)(iVar2 + 0x28) = peVar1->velocity[2];
  peVar1 = this->pev;
  iVar2 = *(int *)(*(int *)&this->field_0x120 + 4);
  *(vec_t *)(iVar2 + 0x5c) = peVar1->avelocity[0];
  *(vec_t *)(iVar2 + 0x60) = peVar1->avelocity[1];
  *(vec_t *)(iVar2 + 100) = peVar1->avelocity[2];
  CFuncTrackTrain::NextThink
            (*(CFuncTrackTrain **)&this->field_0x120,
             fVar3 + (*(CFuncTrackTrain **)&this->field_0x120)->pev->ltime,0);
  if (0.0 < fVar3) {
    peVar1 = this->pev;
    iVar2 = *(int *)(*(int *)&this->field_0x120 + 4);
    local_24 = *(float *)(iVar2 + 8) - peVar1->origin[0];
    local_20 = *(float *)(iVar2 + 0xc) - peVar1->origin[1];
    local_1c = *(float *)(iVar2 + 0x10) - peVar1->origin[2];
    Vector::Vector(&local_30,&local_24);
    peVar1 = this->pev;
    local_24 = *param_1 - peVar1->angles[0];
    local_20 = param_1[1] - peVar1->angles[1];
    local_1c = param_1[2] - peVar1->angles[2];
    Vector::Vector(&local_18,&local_24);
    local_c = local_18.x;
    local_8 = local_18.y;
    local_4 = local_18.z;
    FUN_10076570(&local_c,(int)gpGlobals);
    peVar1 = this->pev;
    fVar3 = 1.0 / fVar3;
    local_18.y = ((local_30.x * gpGlobals->v_right[0] +
                  local_30.y * gpGlobals->v_right[1] + local_30.z * gpGlobals->v_right[2]) -
                 local_30.y) * fVar3;
    local_18.z = ((local_30.x * gpGlobals->v_up[0] +
                  local_30.y * gpGlobals->v_up[1] + local_30.z * gpGlobals->v_up[2]) - local_30.z) *
                 fVar3;
    local_24 = ((local_30.x * gpGlobals->v_forward[0] +
                local_30.y * gpGlobals->v_forward[1] + local_30.z * gpGlobals->v_forward[2]) -
               local_30.x) * fVar3 + peVar1->velocity[0];
    local_20 = local_18.y + peVar1->velocity[1];
    local_1c = local_18.z + peVar1->velocity[2];
    Vector::Vector(&local_18,&local_24);
    iVar2 = *(int *)(*(int *)&this->field_0x120 + 4);
    *(float *)(iVar2 + 0x20) = local_18.x;
    *(float *)(iVar2 + 0x24) = local_18.y;
    *(float *)(iVar2 + 0x28) = local_18.z;
  }
  return;
}

/* 10031ca0  CFuncTrackChange::GoDown  (172 bytes)
 * void GoDown(void)
 */
/* public: virtual void __thiscall CFuncTrackChange::GoDown(void) */

void __thiscall CFuncTrackChange::GoDown(CFuncTrackChange *this)

{
  float in_stack_ffffffe4;
  float in_stack_ffffffe8;
  float in_stack_ffffffec;
  float fVar1;
  
                    /* 0x31ca0  56  ?GoDown@CFuncTrackChange@@UAEXXZ */
  if (*(int *)&this->field_0x130 != 1) {
    (*this->vtable[0x49])();
    if ((this->pev->spawnflags & 0x10) == 0) {
      CFuncPlat::GoDown(this);
      *(code **)&this->field_0xcc = CFuncPlat::CallHitBottom;
      CFuncPlatRot::RotMove
                ((CFuncPlatRot *)this,(float *)&this->field_0x10c,
                 this->pev->nextthink - this->pev->ltime);
    }
    else {
      *(code **)&this->field_0xcc = CFuncPlat::CallHitBottom;
      *(undefined4 *)&this->field_0x70 = 3;
      fVar1 = this->pev->speed;
      Vector::Vector((Vector *)&stack0xffffffe4,(undefined4 *)&this->field_0x10c);
      CBaseToggle::AngularMove
                ((CBaseToggle *)this,in_stack_ffffffe4,in_stack_ffffffe8,in_stack_ffffffec,fVar1);
    }
    if (*(int *)&this->field_0x130 == 2) {
      UpdateTrain(this,(float *)&this->field_0x10c);
      *(undefined4 *)(*(int *)&this->field_0x120 + 0x54) = 0;
    }
  }
  return;
}

/* 10031d50  CFuncTrackChange::GoUp  (172 bytes)
 * void GoUp(void)
 */
/* public: virtual void __thiscall CFuncTrackChange::GoUp(void) */

void __thiscall CFuncTrackChange::GoUp(CFuncTrackChange *this)

{
  float in_stack_ffffffe4;
  float in_stack_ffffffe8;
  float in_stack_ffffffec;
  float fVar1;
  
                    /* 0x31d50  57  ?GoUp@CFuncTrackChange@@UAEXXZ */
  if (*(int *)&this->field_0x130 != 1) {
    (*this->vtable[0x49])();
    if ((this->pev->spawnflags & 0x10) == 0) {
      CFuncPlat::GoUp(this);
      *(code **)&this->field_0xcc = CFuncPlat::CallHitTop;
      CFuncPlatRot::RotMove
                ((CFuncPlatRot *)this,(float *)&this->field_0x100,
                 this->pev->nextthink - this->pev->ltime);
    }
    else {
      *(undefined4 *)&this->field_0x70 = 2;
      *(code **)&this->field_0xcc = CFuncPlat::CallHitTop;
      fVar1 = this->pev->speed;
      Vector::Vector((Vector *)&stack0xffffffe4,(undefined4 *)&this->field_0x100);
      CBaseToggle::AngularMove
                ((CBaseToggle *)this,in_stack_ffffffe4,in_stack_ffffffe8,in_stack_ffffffec,fVar1);
    }
    if (*(int *)&this->field_0x130 == 2) {
      UpdateTrain(this,(float *)&this->field_0x100);
      *(undefined4 *)(*(int *)&this->field_0x120 + 0x54) = 0;
    }
  }
  return;
}

/* 10031e00  CFuncTrackChange::UpdateAutoTargets  (101 bytes)
 * undefined UpdateAutoTargets()
 */
void __thiscall CFuncTrackChange::UpdateAutoTargets(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x118);
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x11c) != 0)) {
    if (param_2 == 0) {
      puVar1 = (uint *)(*(int *)(iVar2 + 4) + 0x1a0);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    else {
      *(uint *)(*(int *)(iVar2 + 4) + 0x1a0) = *(uint *)(*(int *)(iVar2 + 4) + 0x1a0) | 1;
      if (param_2 == 1) {
        puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x11c) + 4) + 0x1a0);
        *puVar1 = *puVar1 & 0xfffffffe;
        return;
      }
    }
    puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x11c) + 4) + 0x1a0);
    *puVar1 = *puVar1 | 1;
  }
  return;
}

/* 10031e70  CFuncTrackChange::Use  (184 bytes)
 * undefined Use(int * param_1)
 */
/* WARNING: Removing unreachable block (ram,0x10031eb8) */

void __fastcall CFuncTrackChange::Use(int *param_1)

{
  int iVar1;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this;
  
  if (param_1[0x1c] == 0) {
    iVar1 = EvaluateTrain((CFuncTrackChange *)param_1,param_1[0x46]);
    param_1[0x4c] = iVar1;
    this = extraout_ECX;
  }
  else {
    if (param_1[0x1c] != 1) {
      return;
    }
    iVar1 = EvaluateTrain((CFuncTrackChange *)param_1,param_1[0x47]);
    param_1[0x4c] = iVar1;
    this = extraout_ECX_00;
  }
  if (param_1[0x4c] != 1) {
    param_1[0x4e] = 0;
    if (param_1[0x1c] != 0) {
      (**(code **)(*param_1 + 0x114))();
      return;
    }
    (**(code **)(*param_1 + 0x118))();
    return;
  }
  EMIT_SOUND_DYN(this,*(undefined4 *)(param_1[1] + 0x208),2,s_buttons_button11_wav_1009c5a8,
                 0x3f800000,0x3f4ccccd,0);
  return;
}

/* 10031f30  CFuncTrackChange::HitBottom  (114 bytes)
 * undefined HitBottom(int * param_1)
 */
void __fastcall CFuncTrackChange::HitBottom(int *param_1)

{
  int iVar1;
  int iVar2;
  
  CFuncPlatRot::HitBottom((int)param_1);
  if (param_1[0x4c] == 2) {
    iVar1 = param_1[0x48];
    iVar2 = *(int *)(iVar1 + 4);
    iVar2 = CPathTrack::Nearest((CPathTrack *)param_1[0x47],*(float *)(iVar2 + 8),
                                *(float *)(iVar2 + 0xc));
    *(int *)(iVar1 + 0x54) = iVar2;
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1[1] + 0x104) = 0xbf800000;
  (**(code **)(*param_1 + 0x124))(param_1[0x1c]);
  param_1[0x4e] = 1;
  return;
}

/* 10031fb0  CFuncTrackChange::HitTop  (114 bytes)
 * undefined HitTop(int * param_1)
 */
void __fastcall CFuncTrackChange::HitTop(int *param_1)

{
  int iVar1;
  int iVar2;
  
  CFuncPlatRot::HitTop(param_1);
  if (param_1[0x4c] == 2) {
    iVar1 = param_1[0x48];
    iVar2 = *(int *)(iVar1 + 4);
    iVar2 = CPathTrack::Nearest((CPathTrack *)param_1[0x46],*(float *)(iVar2 + 8),
                                *(float *)(iVar2 + 0xc));
    *(int *)(iVar1 + 0x54) = iVar2;
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1[1] + 0x104) = 0xbf800000;
  (**(code **)(*param_1 + 0x124))(param_1[0x1c]);
  param_1[0x4e] = 1;
  return;
}

