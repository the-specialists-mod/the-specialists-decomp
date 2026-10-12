/* mp.dll - CFuncTrackChange (17 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10028e90  CFuncTrackChange::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CFuncTrackChange::Save(CFuncPlatRot *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CFuncPlatRot::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CFuncTrackChange_10095570,(int)param_1,0x10094f28,9)
  ;
  return;
}

/* 10028ec0  CFuncTrackChange::Restore  (48 bytes)
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
            (param_2,(byte_conflict *)s_CFuncTrackChange_10095570,(int)param_1,0x10094f28,9);
  return;
}

/* 10028ef0  CFuncTrackChange::Spawn  (218 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CFuncTrackChange::Spawn(int *param_1)

{
  int iVar1;
  
  FUN_10026240((int)param_1);
  if ((*(byte *)(param_1[1] + 0x1a0) & 0x10) != 0) {
    param_1[0x28] = *(int *)(param_1[1] + 0x10);
  }
  CFuncPlatRot::SetupRotation((int)param_1);
  if ((*(byte *)(param_1[1] + 0x1a0) & 8) == 0) {
    FUN_100679a0();
    iVar1 = param_1[1];
    param_1[0x1c] = 0;
    *(int *)(iVar1 + 0x50) = param_1[0x40];
    *(int *)(iVar1 + 0x54) = param_1[0x41];
    *(int *)(iVar1 + 0x58) = param_1[0x42];
    param_1[0x4d] = 1;
  }
  else {
    FUN_100679a0();
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
                    /* WARNING: Could not recover jumptable at 0x10028fc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}

/* 10028fd0  CFuncTrackChange::Precache  (25 bytes)
 * undefined Precache()
 */
void __fastcall CFuncTrackChange::Precache(int *param_1)

{
  (*g_engfuncs.pfnPrecacheSound)(s_buttons_button11_wav_10091500);
  CFuncPlat::Precache(param_1);
  return;
}

/* 10028ff0  CFuncTrackChange::Touch  (3 bytes)
 * undefined Touch()
 */
void CFuncTrackChange::Touch(void)

{
  return;
}

/* 10029000  CFuncTrackChange::KeyValue  (181 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CFuncTrackChange::KeyValue(CFuncTrackChange *this,int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  pcVar3 = *(char **)(param_1 + 4);
  iVar1 = 6;
  bVar5 = true;
  pcVar2 = pcVar3;
  pcVar4 = s_train_1009559c;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar5 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x12c = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar1 = 9;
  bVar5 = true;
  pcVar2 = pcVar3;
  pcVar4 = s_toptrack_10095590;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar5 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x124 = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar1 = 0xc;
  bVar5 = true;
  pcVar2 = s_bottomtrack_10095584;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar5 = *pcVar3 == *pcVar2;
    pcVar3 = pcVar3 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar5);
  if (bVar5) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x128 = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CFuncPlat::KeyValue((CFuncPlat *)this,param_1);
  return;
}

/* 100290c0  CFuncTrackChange::OverrideReset  (29 bytes)
 * undefined OverrideReset()
 */
void __fastcall CFuncTrackChange::OverrideReset(int param_1)

{
  *(float *)(*(int *)(param_1 + 4) + 0x104) = *(float *)(*(int *)(param_1 + 4) + 0x100) + 1.0;
  *(code **)(param_1 + 0x10) = Find;
  return;
}

/* 100290e0  CFuncTrackChange::Find  (662 bytes)
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
  float fStack00000038;
  
                    /* 0x290e0  47  ?Find@CFuncTrackChange@@QAEXXZ */
  peVar2 = (*g_engfuncs.pfnFindEntityByString)
                     ((edict_t *)0x0,s_targetname_100915e4,
                      gpGlobals->pStringBase + *(int *)&this->field_0x124);
  if (peVar2 != (edict_t *)0x0) {
    iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar2);
    if (iVar3 != 0) {
      uVar4 = FUN_10025af0((int)peVar2);
      *(undefined4 *)&this->field_0x118 = uVar4;
      peVar2 = (*g_engfuncs.pfnFindEntityByString)
                         ((edict_t *)0x0,s_targetname_100915e4,
                          gpGlobals->pStringBase + *(int *)&this->field_0x128);
      if (peVar2 != (edict_t *)0x0) {
        iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar2);
        if (iVar3 != 0) {
          uVar4 = FUN_10025af0((int)peVar2);
          *(undefined4 *)&this->field_0x11c = uVar4;
          peVar2 = (*g_engfuncs.pfnFindEntityByString)
                             ((edict_t *)0x0,s_targetname_100915e4,
                              gpGlobals->pStringBase + *(int *)&this->field_0x12c);
          if (peVar2 != (edict_t *)0x0) {
            iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar2);
            if (iVar3 != 0) {
              peVar2 = (*g_engfuncs.pfnFindEntityByString)
                                 ((edict_t *)0x0,s_targetname_100915e4,
                                  gpGlobals->pStringBase + *(int *)&this->field_0x12c);
              iVar3 = FUN_10028a00((int)peVar2);
              *(int *)&this->field_0x120 = iVar3;
              if (iVar3 == 0) {
                pcStack00000018 = gpGlobals->pStringBase + *(int *)&this->field_0x12c;
                (*g_engfuncs.pfnAlertMessage)(at_error,s_Can_t_find_train_for_track_chang_10095600);
                return;
              }
              peVar1 = this->pev;
              fStack00000038 = peVar1->absmax[2] + peVar1->absmin[2];
              fStack00000024 = (peVar1->absmax[0] + peVar1->absmin[0]) * 0.5;
              fStack00000028 = (peVar1->absmax[1] + peVar1->absmin[1]) * 0.5;
              pcStack00000018 = (char *)(fStack00000038 * 0.5);
              fStack0000002c = (float)pcStack00000018;
              iVar3 = CPathTrack::Nearest(*(CPathTrack **)&this->field_0x11c,fStack00000024,
                                          fStack00000028);
              *(int *)&this->field_0x11c = iVar3;
              pcStack00000018 = (char *)fStack0000002c;
              iVar3 = CPathTrack::Nearest(*(CPathTrack **)&this->field_0x118,fStack00000024,
                                          fStack00000028);
              pcStack00000018 = *(char **)&this->field_0x70;
              *(int *)&this->field_0x118 = iVar3;
              (*this->vtable[0x42])();
              *(undefined4 *)&this->field_0x10 = 0;
              return;
            }
          }
          (*g_engfuncs.pfnAlertMessage)(at_error,s_Can_t_find_train_for_track_chang_10095600);
          (*g_engfuncs.pfnFindEntityByString)
                    ((edict_t *)0x0,s_targetname_100915e4,
                     gpGlobals->pStringBase + *(int *)&this->field_0x12c);
          return;
        }
      }
      (*g_engfuncs.pfnAlertMessage)
                (at_error,s_Can_t_find_bottom_track_for_trac_100955d0,
                 gpGlobals->pStringBase + *(int *)&this->field_0x128);
      return;
    }
  }
  (*g_engfuncs.pfnAlertMessage)
            (at_error,s_Can_t_find_top_track_for_track_c_100955a4,
             gpGlobals->pStringBase + *(int *)&this->field_0x124);
  return;
}

/* 10029380  CFuncTrackChange::EvaluateTrain  (183 bytes)
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

/* 10029440  CFuncTrackChange::UpdateTrain  (446 bytes)
 * undefined UpdateTrain(float * param_1)
 * called by: CFuncTrackChange::GoDown, CFuncTrackChange::GoUp
 */
void __thiscall CFuncTrackChange::UpdateTrain(CFuncTrackChange *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  entvars_t *peVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float10 fVar15;
  float local_24;
  float local_20;
  float local_1c;
  
  peVar9 = this->pev;
  fVar11 = peVar9->nextthink - peVar9->ltime;
  iVar10 = *(int *)(*(int *)&this->field_0x120 + 4);
  *(vec_t *)(iVar10 + 0x20) = peVar9->velocity[0];
  *(vec_t *)(iVar10 + 0x24) = peVar9->velocity[1];
  *(vec_t *)(iVar10 + 0x28) = peVar9->velocity[2];
  peVar9 = this->pev;
  iVar10 = *(int *)(*(int *)&this->field_0x120 + 4);
  *(vec_t *)(iVar10 + 0x5c) = peVar9->avelocity[0];
  *(vec_t *)(iVar10 + 0x60) = peVar9->avelocity[1];
  *(vec_t *)(iVar10 + 100) = peVar9->avelocity[2];
  fVar15 = (float10)CFuncTrackTrain::NextThink
                              (*(CFuncTrackTrain **)&this->field_0x120,
                               fVar11 + (*(CFuncTrackTrain **)&this->field_0x120)->pev->ltime,0);
  if (fVar15 < (float10)0.0 == (fVar15 == (float10)0.0)) {
    peVar9 = this->pev;
    iVar10 = *(int *)(*(int *)&this->field_0x120 + 4);
    fVar12 = *(float *)(iVar10 + 8) - peVar9->origin[0];
    fVar13 = *(float *)(iVar10 + 0xc) - peVar9->origin[1];
    fVar14 = *(float *)(iVar10 + 0x10) - peVar9->origin[2];
    local_1c = param_1[2] - peVar9->angles[2];
    local_20 = param_1[1] - peVar9->angles[1];
    local_24 = *param_1 - peVar9->angles[0];
    UTIL_MakeInvVectors(&local_24,(int)gpGlobals);
    fVar1 = gpGlobals->v_right[2];
    fVar2 = gpGlobals->v_right[1];
    fVar3 = gpGlobals->v_right[0];
    fVar4 = gpGlobals->v_up[2];
    fVar5 = gpGlobals->v_up[1];
    fVar6 = gpGlobals->v_up[0];
    fVar11 = 1.0 / fVar11;
    peVar9 = this->pev;
    iVar10 = *(int *)(*(int *)&this->field_0x120 + 4);
    fVar7 = peVar9->velocity[1];
    fVar8 = peVar9->velocity[2];
    *(float *)(iVar10 + 0x20) =
         ((fVar12 * gpGlobals->v_forward[0] +
          fVar13 * gpGlobals->v_forward[1] + fVar14 * gpGlobals->v_forward[2]) - fVar12) * fVar11 +
         peVar9->velocity[0];
    *(float *)(iVar10 + 0x24) =
         ((fVar12 * fVar3 + fVar13 * fVar2 + fVar14 * fVar1) - fVar13) * fVar11 + fVar7;
    *(float *)(iVar10 + 0x28) =
         ((fVar12 * fVar6 + fVar13 * fVar5 + fVar14 * fVar4) - fVar14) * fVar11 + fVar8;
  }
  return;
}

/* 10029600  CFuncTrackChange::GoDown  (172 bytes)
 * void GoDown(void)
 */
/* public: virtual void __thiscall CFuncTrackChange::GoDown(void) */

void __thiscall CFuncTrackChange::GoDown(CFuncTrackChange *this)

{
  float in_stack_ffffffe4;
  float in_stack_ffffffe8;
  float in_stack_ffffffec;
  float fVar1;
  
                    /* 0x29600  52  ?GoDown@CFuncTrackChange@@UAEXXZ */
  if (*(int *)&this->field_0x130 != 1) {
    (*this->vtable[0x42])();
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
      FUN_1000a540(&stack0xffffffe4,(undefined4 *)&this->field_0x10c);
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

/* 100296b0  CFuncTrackChange::GoUp  (172 bytes)
 * void GoUp(void)
 */
/* public: virtual void __thiscall CFuncTrackChange::GoUp(void) */

void __thiscall CFuncTrackChange::GoUp(CFuncTrackChange *this)

{
  float in_stack_ffffffe4;
  float in_stack_ffffffe8;
  float in_stack_ffffffec;
  float fVar1;
  
                    /* 0x296b0  53  ?GoUp@CFuncTrackChange@@UAEXXZ */
  if (*(int *)&this->field_0x130 != 1) {
    (*this->vtable[0x42])();
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
      FUN_1000a540(&stack0xffffffe4,(undefined4 *)&this->field_0x100);
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

/* 10029760  CFuncTrackChange::UpdateAutoTargets  (98 bytes)
 * undefined UpdateAutoTargets()
 */
void __thiscall CFuncTrackChange::UpdateAutoTargets(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x118) != 0) && (*(int *)(param_1 + 0x11c) != 0)) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x118) + 4);
    if (param_2 == 0) {
      *(uint *)(iVar2 + 0x1a0) = *(uint *)(iVar2 + 0x1a0) & 0xfffffffe;
    }
    else {
      *(uint *)(iVar2 + 0x1a0) = *(uint *)(iVar2 + 0x1a0) | 1;
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

/* 100297d0  CFuncTrackChange::Use  (166 bytes)
 * undefined Use()
 */
/* WARNING: Removing unreachable block (ram,0x10029812) */

void __fastcall CFuncTrackChange::Use(CFuncTrackChange *param_1)

{
  int iVar1;
  int iVar2;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *piVar3;
  
  iVar1 = *(int *)&param_1->field_0x70;
  if (iVar1 == 0) {
    iVar2 = EvaluateTrain(param_1,*(int *)&param_1->field_0x118);
    extraout_ECX[0x4c] = iVar2;
    piVar3 = extraout_ECX;
  }
  else {
    if (iVar1 != 1) {
      return;
    }
    iVar2 = EvaluateTrain(param_1,*(int *)&param_1->field_0x11c);
    extraout_ECX_00[0x4c] = iVar2;
    piVar3 = extraout_ECX_00;
  }
  if (piVar3[0x4c] != 1) {
    piVar3[0x4e] = 0;
    if (iVar1 != 0) {
      (**(code **)(*piVar3 + 0xf8))();
      return;
    }
    (**(code **)(*piVar3 + 0xfc))();
    return;
  }
  EMIT_SOUND_DYN(*(void **)(piVar3[1] + 0x208),*(void **)(piVar3[1] + 0x208),2,
                 s_buttons_button11_wav_10091500,0x3f800000,0x3f4ccccd,0,100);
  return;
}

/* 10029880  CFuncTrackChange::HitBottom  (114 bytes)
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
  (**(code **)(*param_1 + 0x108))(param_1[0x1c]);
  param_1[0x4e] = 1;
  return;
}

/* 10029900  CFuncTrackChange::HitTop  (114 bytes)
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
  (**(code **)(*param_1 + 0x108))(param_1[0x1c]);
  param_1[0x4e] = 1;
  return;
}

/* 1002a270  CFuncTrackChange::IsTogglePlat  (6 bytes)
 * undefined IsTogglePlat()
 */
undefined4 CFuncTrackChange::IsTogglePlat(void)

{
  return 1;
}

