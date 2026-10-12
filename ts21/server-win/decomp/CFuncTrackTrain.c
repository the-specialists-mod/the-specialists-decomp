/* mp.dll - CFuncTrackTrain (16 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10027620  CFuncTrackTrain::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CFuncTrackTrain::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CFuncTrackTrain_10095344,(int)param_1,0x10094e68,0xc
                    );
  return;
}

/* 10027650  CFuncTrackTrain::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CFuncTrackTrain::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields
            (param_2,(byte_conflict *)s_CFuncTrackTrain_10095344,(int)param_1,0x10094e68,0xc);
  return;
}

/* 10027690  CFuncTrackTrain::KeyValue  (332 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CFuncTrackTrain::KeyValue(CFuncTrackTrain *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  float10 fVar8;
  
  pcVar5 = *(char **)(param_1 + 4);
  puVar3 = &DAT_00000007;
  bVar7 = true;
  pcVar4 = pcVar5;
  pcVar6 = s_wheels_10095368;
  do {
    if (puVar3 == (undefined1 *)0x0) break;
    puVar3 = puVar3 + -1;
    bVar7 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    fVar8 = FUN_1006e0fb(puVar3,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x58 = (float)fVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar3 = &DAT_00000007;
  bVar7 = true;
  pcVar4 = pcVar5;
  pcVar6 = s_height_1009127c;
  do {
    if (puVar3 == (undefined1 *)0x0) break;
    puVar3 = puVar3 + -1;
    bVar7 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    fVar8 = FUN_1006e0fb(puVar3,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x5c = (float)fVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar3 = (undefined1 *)0xb;
  bVar7 = true;
  pcVar4 = pcVar5;
  pcVar6 = s_startspeed_1009535c;
  do {
    if (puVar3 == (undefined1 *)0x0) break;
    puVar3 = puVar3 + -1;
    bVar7 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    fVar8 = FUN_1006e0fb(puVar3,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x68 = (float)fVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar3 = &DAT_00000007;
  bVar7 = true;
  pcVar4 = pcVar5;
  pcVar6 = s_sounds_10090ee8;
  do {
    if (puVar3 == (undefined1 *)0x0) break;
    puVar3 = puVar3 + -1;
    bVar7 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    uVar1 = FUN_1006e1dd(puVar3,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x88 = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar3 = &DAT_00000007;
  bVar7 = true;
  pcVar4 = pcVar5;
  pcVar6 = s_volume_100950fc;
  do {
    if (puVar3 == (undefined1 *)0x0) break;
    puVar3 = puVar3 + -1;
    bVar7 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    iVar2 = FUN_1006e1dd(puVar3,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x8c = (float)iVar2 * 0.1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar3 = (undefined1 *)0x5;
  bVar7 = true;
  pcVar4 = &DAT_10095354;
  do {
    if (puVar3 == (undefined1 *)0x0) break;
    puVar3 = puVar3 + -1;
    bVar7 = *pcVar5 == *pcVar4;
    pcVar5 = pcVar5 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar7);
  if (bVar7) {
    fVar8 = FUN_1006e0fb(puVar3,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x90 = (float)fVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 100277e0  CFuncTrackTrain::NextThink  (53 bytes)
 * undefined NextThink(undefined4 param_1, int param_2)
 * called by: CFuncTrackChange::UpdateTrain, CFuncTrackTrain::Find, CFuncTrackTrain::NearestPath, CFuncTrackTrain::Next, CFuncTrackTrain::OverrideReset, CFuncTrackTrain::Spawn
 */
void __thiscall CFuncTrackTrain::NextThink(CFuncTrackTrain *this,float param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = this->pev->flags;
  if (param_2 == 0) {
    uVar1 = uVar1 & 0xffdfffff;
  }
  else {
    uVar1 = uVar1 | 0x200000;
  }
  this->pev->flags = uVar1;
  this->pev->nextthink = param_1;
  return;
}

/* 10027820  CFuncTrackTrain::Blocked  (426 bytes)
 * undefined Blocked()
 */
void __thiscall CFuncTrackTrain::Blocked(int param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fStack_4;
  
  iVar1 = param_2[1];
  if ((*(uint *)(iVar1 + 0x1a4) & 0x200) != 0) {
    if (*(int *)(iVar1 + 0x19c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iVar1 + 0x19c) + 0x80;
    }
    if (iVar5 == *(int *)(param_1 + 4)) {
      fVar3 = ABS(*(float *)(*(int *)(param_1 + 4) + 0x1f8));
      if (50.0 < fVar3) {
        fVar3 = 50.0;
      }
      if (*(float *)(iVar1 + 0x28) != 0.0) {
        return;
      }
      *(float *)(iVar1 + 0x28) = fVar3 + *(float *)(iVar1 + 0x28);
      return;
    }
  }
  iVar5 = *(int *)(param_1 + 4);
  fVar3 = *(float *)(iVar1 + 8) - *(float *)(iVar5 + 8);
  fVar4 = *(float *)(iVar1 + 0xc) - *(float *)(iVar5 + 0xc);
  fStack_4 = *(float *)(iVar1 + 0x10) - *(float *)(iVar5 + 0x10);
  fVar2 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fStack_4 * fStack_4);
  if (fVar2 == 0.0) {
    fVar3 = 0.0;
    fVar4 = 0.0;
    fStack_4 = 1.0;
  }
  else {
    fVar2 = 1.0 / fVar2;
    fVar3 = fVar3 * fVar2;
    fVar4 = fVar2 * fVar4;
    fStack_4 = fStack_4 * fVar2;
  }
  fVar2 = *(float *)(iVar5 + 0x1e0);
  *(float *)(iVar1 + 0x20) = fVar3 * fVar2;
  *(float *)(iVar1 + 0x24) = fVar4 * fVar2;
  *(float *)(iVar1 + 0x28) = fStack_4 * fVar2;
  (*g_engfuncs.pfnAlertMessage)
            (at_aiconsole,s_TRAIN__s___Blocked_by__s__dmg____10095370,
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1cc),
             gpGlobals->pStringBase + *(int *)param_2[1],
             (double)*(float *)(*(int *)(param_1 + 4) + 0x1e0));
  iVar1 = *(int *)(param_1 + 4);
  if (*(float *)(iVar1 + 0x1e0) < 0.0 != (*(float *)(iVar1 + 0x1e0) == 0.0)) {
    return;
  }
  (**(code **)(*param_2 + 0x38))(iVar1,iVar1,*(undefined4 *)(iVar1 + 0x1e0),1);
  return;
}

/* 100279d0  CFuncTrackTrain::Use  (402 bytes)
 * undefined Use(undefined4 param_1, undefined4 param_2, int param_3, float param_4)
 */
void __thiscall
CFuncTrackTrain::Use
          (CFuncTrackTrain *this,undefined4 param_1,undefined4 param_2,int param_3,float param_4)

{
  entvars_t *peVar1;
  float fVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (param_3 == 2) {
    peVar1 = this->pev;
    uVar4 = __ftol();
    lVar5 = __ftol();
    fVar2 = ((float)(int)((longlong)
                          ((ulonglong)(uint)((int)uVar4 >> 0x1f) << 0x20 | uVar4 & 0xffffffff) /
                         (longlong)(int)lVar5) + param_4) * 0.25;
    if (fVar2 <= 1.0) {
      if (fVar2 < -1.0) {
        fVar2 = -1.0;
      }
    }
    else {
      fVar2 = 1.0;
    }
    if (((peVar1->spawnflags & 4) != 0) && (fVar2 < 0.0)) {
      fVar2 = 0.0;
    }
    peVar1->speed = fVar2 * *(float *)&this->field_0x60;
    Next(this);
    (*g_engfuncs.pfnAlertMessage)
              (at_aiconsole,s_TRAIN__s___speed_to___2f_10095398,
               gpGlobals->pStringBase + this->pev->targetname,(double)this->pev->speed);
  }
  else {
    iVar3 = CBaseEntity::ShouldToggle(param_3,(uint)(this->pev->speed != 0.0));
    if (iVar3 != 0) {
      peVar1 = this->pev;
      if (peVar1->speed == 0.0) {
        peVar1->speed = *(float *)&this->field_0x64 * *(float *)&this->field_0x60;
        Next(this);
        return;
      }
      peVar1->speed = 0.0;
      peVar1 = this->pev;
      peVar1->velocity[0] = DAT_1009f4a8;
      peVar1->velocity[1] = DAT_1009f4ac;
      peVar1->velocity[2] = DAT_1009f4b0;
      peVar1 = this->pev;
      peVar1->avelocity[0] = DAT_1009f4a8;
      peVar1->avelocity[1] = DAT_1009f4ac;
      peVar1->avelocity[2] = DAT_1009f4b0;
      StopSound((int)this);
      *(undefined4 *)&this->field_0x10 = 0;
      return;
    }
  }
  return;
}

/* 10027b70  CFuncTrackTrain::StopSound  (143 bytes)
 * undefined StopSound(int param_1)
 * called by: CFuncTrackTrain::Next, CFuncTrackTrain::Use
 */
void __fastcall CFuncTrackTrain::StopSound(int param_1)

{
  if ((*(int *)(param_1 + 0x84) != 0) && (*(int *)(*(int *)(param_1 + 4) + 0x1e8) != 0)) {
    (*g_engfuncs.pfnPlaybackEvent)
              (10,*(edict_t **)(*(int *)(param_1 + 4) + 0x208),*(ushort *)(param_1 + 0x98),0.0,
               (float *)&DAT_1009f4a8,(float *)&DAT_1009f4a8,0.0,0.0,
               (*(byte *)(param_1 + 0x88) & 7) << 0xc,0,1,0);
    EMIT_SOUND_DYN(*(void **)(param_1 + 0x8c),*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),3,
                   s_plats_ttrain_brake1_wav_100953b4,*(void **)(param_1 + 0x8c),0x3f4ccccd,0,100);
  }
  *(undefined4 *)(param_1 + 0x84) = 0;
  return;
}

/* 10027d50  CFuncTrackTrain::Next  (1391 bytes)
 * void Next(void)
 * called by: CFuncTrackTrain::Use
 */
/* public: void __thiscall CFuncTrackTrain::Next(void) */

void __thiscall CFuncTrackTrain::Next(CFuncTrackTrain *this)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  entvars_t *peVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  char *szFmt;
  float fVar9;
  vec_t vVar10;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  vec_t local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_4;
  
                    /* 0x27d50  70  ?Next@CFuncTrackTrain@@QAEXXZ */
  peVar4 = this->pev;
  if (peVar4->speed == 0.0) {
    pcVar5 = gpGlobals->pStringBase + peVar4->targetname;
    szFmt = s_TRAIN__s___Speed_is_0_1009541c;
  }
  else {
    if (*(int *)&this->field_0x54 != 0) {
      FUN_10027c00((int)this);
      peVar4 = this->pev;
      local_48 = peVar4->origin[0];
      local_44 = peVar4->origin[1];
      local_40 = peVar4->origin[2] - *(float *)&this->field_0x5c;
      iVar6 = CPathTrack::LookAhead
                        (*(CPathTrack **)&this->field_0x54,&local_48,peVar4->speed * 0.1,1);
      local_40 = local_40 + *(float *)&this->field_0x5c;
      peVar4 = this->pev;
      local_4 = local_40 - peVar4->origin[2];
      local_24 = (local_48 - peVar4->origin[0]) * 10.0;
      local_20 = (local_44 - peVar4->origin[1]) * 10.0;
      peVar4->velocity[0] = local_24;
      local_1c = local_4 * 10.0;
      peVar4->velocity[1] = local_20;
      peVar4->velocity[2] = local_1c;
      peVar4 = this->pev;
      local_3c = peVar4->origin[0];
      local_38 = peVar4->origin[1];
      local_34 = peVar4->origin[2] - *(float *)&this->field_0x5c;
      if (*(float *)&this->field_0x58 <= 0.0) {
        fVar9 = 100.0;
      }
      else {
        fVar9 = *(float *)&this->field_0x58;
      }
      CPathTrack::LookAhead(*(CPathTrack **)&this->field_0x54,&local_3c,fVar9,0);
      local_34 = local_34 + *(float *)&this->field_0x5c;
      peVar4 = this->pev;
      local_10 = local_34 - peVar4->origin[2];
      local_14 = local_38 - peVar4->origin[1];
      local_18 = local_3c - peVar4->origin[0];
      UTIL_VecToAngles(&local_30,&local_18);
      local_2c = local_2c + 180.0;
      FUN_100282c0(&local_30);
      FUN_100282c0(this->pev->angles);
      if ((iVar6 == 0) || ((local_18 == 0.0 && (local_14 == 0.0)))) {
        peVar4 = this->pev;
        local_30 = peVar4->angles[0];
        local_2c = peVar4->angles[1];
        local_28 = peVar4->angles[2];
      }
      if ((this->pev->spawnflags & 1) == 0) {
        fVar8 = FUN_10067af0(local_30,this->pev->angles[0]);
        local_4c = (float)fVar8;
      }
      else {
        local_4c = 0.0;
      }
      fVar8 = FUN_10067af0(local_2c,this->pev->angles[1]);
      this->pev->avelocity[1] = (float)(fVar8 * (float10)10.0);
      this->pev->avelocity[0] = local_4c * 10.0;
      if (*(float *)&this->field_0x90 != 0.0) {
        peVar4 = this->pev;
        if (-5.0 <= peVar4->avelocity[1]) {
          fVar9 = *(float *)&this->field_0x90;
          vVar10 = peVar4->angles[2];
          if (peVar4->avelocity[1] <= 5.0) {
            fVar8 = FUN_10067a50(0.0,peVar4->angles[2],fVar9 * 4.0);
            fVar8 = FUN_10067af0((float)fVar8,vVar10);
            fVar8 = fVar8 * (float10)4.0;
          }
          else {
            fVar8 = FUN_10067a50(*(float *)&this->field_0x90,vVar10,fVar9 + fVar9);
            fVar8 = FUN_10067af0((float)fVar8,vVar10);
          }
          this->pev->avelocity[2] = (float)fVar8;
        }
        else {
          vVar10 = peVar4->angles[2];
          fVar8 = FUN_10067a50(-*(float *)&this->field_0x90,vVar10,
                               *(float *)&this->field_0x90 + *(float *)&this->field_0x90);
          fVar8 = FUN_10067af0((float)fVar8,vVar10);
          this->pev->avelocity[2] = (float)fVar8;
        }
      }
      if (iVar6 == 0) {
        StopSound((int)this);
        peVar4 = this->pev;
        local_24 = local_48 - peVar4->origin[0];
        local_20 = local_44 - peVar4->origin[1];
        local_1c = local_40 - peVar4->origin[2];
        peVar4->velocity[0] = local_24;
        peVar4->velocity[1] = local_20;
        peVar4->velocity[2] = local_1c;
        peVar4 = this->pev;
        peVar4->avelocity[0] = DAT_1009f4a8;
        peVar4->avelocity[1] = DAT_1009f4ac;
        peVar4->avelocity[2] = DAT_1009f4b0;
        peVar4 = this->pev;
        fVar9 = peVar4->velocity[2];
        fVar2 = peVar4->velocity[1];
        fVar3 = peVar4->velocity[0];
        *(float *)&this->field_0x94 = peVar4->speed;
        peVar4->speed = 0.0;
        fVar9 = SQRT(fVar9 * fVar9 + fVar2 * fVar2 + fVar3 * fVar3);
        if (fVar9 <= 0.0) {
          DeadEnd(this);
          return;
        }
        fVar2 = *(float *)&this->field_0x94;
        peVar4 = this->pev;
        local_1c = *(float *)&this->field_0x94 / fVar9;
        local_24 = local_1c * peVar4->velocity[0];
        local_20 = local_1c * peVar4->velocity[1];
        local_1c = local_1c * peVar4->velocity[2];
        peVar4->velocity[0] = local_24;
        peVar4->velocity[1] = local_20;
        peVar4->velocity[2] = local_1c;
        *(code **)&this->field_0x10 = DeadEnd;
        NextThink(this,fVar9 / fVar2 + this->pev->ltime,0);
        return;
      }
      if (iVar6 != *(int *)&this->field_0x54) {
        iVar7 = *(int *)&this->field_0x54;
        if (0.0 <= this->pev->speed) {
          iVar7 = iVar6;
        }
        *(int *)&this->field_0x54 = iVar6;
        iVar6 = *(int *)(*(int *)(iVar7 + 4) + 0x1d4);
        if (iVar6 != 0) {
          FireTargets((int)(gpGlobals->pStringBase + iVar6),this,this,3,0);
          if ((*(byte *)(*(int *)(iVar7 + 4) + 0x1a0) & 2) != 0) {
            *(undefined4 *)(*(int *)(iVar7 + 4) + 0x1d4) = 0;
          }
        }
        if ((*(byte *)(*(int *)(iVar7 + 4) + 0x1a0) & 8) != 0) {
          piVar1 = &this->pev->spawnflags;
          *piVar1 = *piVar1 | 2;
        }
        if (((this->pev->spawnflags & 2) != 0) && (*(float *)(*(int *)(iVar7 + 4) + 0x1f8) != 0.0))
        {
          this->pev->speed = *(float *)(*(int *)(iVar7 + 4) + 0x1f8);
          (*g_engfuncs.pfnAlertMessage)
                    (at_aiconsole,s_TrackTrain__s_speed_to__4_2f_100953e4,
                     gpGlobals->pStringBase + this->pev->targetname,(double)this->pev->speed);
        }
      }
      *(code **)&this->field_0x10 = Next;
      NextThink(this,this->pev->ltime + 0.5,1);
      return;
    }
    pcVar5 = gpGlobals->pStringBase + peVar4->targetname;
    szFmt = s_TRAIN__s___Lost_path_10095404;
  }
  (*g_engfuncs.pfnAlertMessage)(at_aiconsole,szFmt,pcVar5);
  StopSound((int)this);
  return;
}

/* 10028340  CFuncTrackTrain::DeadEnd  (290 bytes)
 * void DeadEnd(void)
 * called by: CFuncTrackTrain::Next
 */
/* public: void __thiscall CFuncTrackTrain::DeadEnd(void) */

void __thiscall CFuncTrackTrain::DeadEnd(CFuncTrackTrain *this)

{
  entvars_t *peVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
                    /* 0x28340  27  ?DeadEnd@CFuncTrackTrain@@QAEXXZ */
  iVar3 = *(int *)&this->field_0x54;
  (*g_engfuncs.pfnAlertMessage)
            (at_aiconsole,s_TRAIN__s___Dead_end_1009543c,
             gpGlobals->pStringBase + this->pev->targetname);
  if (iVar3 != 0) {
    iVar2 = iVar3;
    if (0.0 <= *(float *)&this->field_0x94) {
      do {
        iVar3 = iVar2;
        iVar4 = 1;
        iVar2 = CPathTrack::GetNext(iVar3);
        iVar2 = FUN_10025480(iVar2,iVar4);
      } while (iVar2 != 0);
    }
    else {
      do {
        iVar3 = iVar2;
        iVar4 = 1;
        iVar2 = FUN_100255c0(iVar3);
        iVar2 = FUN_10025480(iVar2,iVar4);
      } while (iVar2 != 0);
    }
  }
  peVar1 = this->pev;
  peVar1->velocity[0] = DAT_1009f4a8;
  peVar1->velocity[1] = DAT_1009f4ac;
  peVar1->velocity[2] = DAT_1009f4b0;
  peVar1 = this->pev;
  peVar1->avelocity[0] = DAT_1009f4a8;
  peVar1->avelocity[1] = DAT_1009f4ac;
  peVar1->avelocity[2] = DAT_1009f4b0;
  if (iVar3 == 0) {
    (*g_engfuncs.pfnAlertMessage)(at_aiconsole,(char *)&DAT_10091bd0);
  }
  else {
    (*g_engfuncs.pfnAlertMessage)
              (at_aiconsole,s_at__s_10095434,
               gpGlobals->pStringBase + *(int *)(*(int *)(iVar3 + 4) + 0x1cc));
    iVar3 = *(int *)(*(int *)(iVar3 + 4) + 0x1d0);
    if (iVar3 != 0) {
      FireTargets((int)(gpGlobals->pStringBase + iVar3),this,this,3,0);
      return;
    }
  }
  return;
}

/* 10028520  CFuncTrackTrain::OnControls  (276 bytes)
 * undefined OnControls()
 */
undefined4 __thiscall CFuncTrackTrain::OnControls(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = *(int *)(param_1 + 4);
  fVar2 = *(float *)(param_2 + 8) - *(float *)(iVar1 + 8);
  fVar3 = *(float *)(param_2 + 0xc) - *(float *)(iVar1 + 0xc);
  fVar4 = *(float *)(param_2 + 0x10) - *(float *)(iVar1 + 0x10);
  if ((*(byte *)(iVar1 + 0x1a0) & 2) == 0) {
    FUN_10066df0();
    fVar5 = fVar2 * gpGlobals->v_forward[0] +
            fVar3 * gpGlobals->v_forward[1] + fVar4 * gpGlobals->v_forward[2];
    fVar6 = -(fVar2 * gpGlobals->v_right[0] +
             fVar3 * gpGlobals->v_right[1] + fVar4 * gpGlobals->v_right[2]);
    fVar2 = fVar2 * gpGlobals->v_up[0] + fVar3 * gpGlobals->v_up[1] + fVar4 * gpGlobals->v_up[2];
    if ((((*(float *)(param_1 + 0x6c) <= fVar5) && (*(float *)(param_1 + 0x70) <= fVar6)) &&
        (*(float *)(param_1 + 0x74) <= fVar2)) &&
       (((fVar5 < *(float *)(param_1 + 0x78) != (fVar5 == *(float *)(param_1 + 0x78)) &&
         (fVar6 < *(float *)(param_1 + 0x7c) != (fVar6 == *(float *)(param_1 + 0x7c)))) &&
        (fVar2 < *(float *)(param_1 + 0x80) != (fVar2 == *(float *)(param_1 + 0x80)))))) {
      return 1;
    }
  }
  return 0;
}

/* 10028640  CFuncTrackTrain::Find  (390 bytes)
 * void Find(void)
 */
/* public: void __thiscall CFuncTrackTrain::Find(void) */

void __thiscall CFuncTrackTrain::Find(CFuncTrackTrain *this)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  CPathTrack *this_00;
  vec_t *pvVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
                    /* 0x28640  48  ?Find@CFuncTrackTrain@@QAEXXZ */
  peVar2 = (*g_engfuncs.pfnFindEntityByString)
                     ((edict_t *)0x0,s_targetname_100915e4,
                      gpGlobals->pStringBase + this->pev->target);
  this_00 = (CPathTrack *)FUN_10025af0((int)peVar2);
  *(CPathTrack **)&this->field_0x54 = this_00;
  if (this_00 != (CPathTrack *)0x0) {
    peVar1 = this_00->pev;
    iVar4 = 0xb;
    bVar7 = true;
    pcVar5 = gpGlobals->pStringBase + peVar1->classname;
    pcVar6 = s_path_track_10094dbc;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar7 = *pcVar5 == *pcVar6;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (!bVar7) {
      (*g_engfuncs.pfnAlertMessage)(at_error,s_func_track_train_must_be_on_a_pa_10095454);
      *(undefined4 *)&this->field_0x54 = 0;
      return;
    }
    fStack_24 = peVar1->origin[0];
    fStack_20 = peVar1->origin[1];
    fStack_10 = peVar1->origin[2] + *(float *)&this->field_0x5c;
    fStack_1c = fStack_10 - *(float *)&this->field_0x5c;
    fStack_18 = fStack_24;
    fStack_14 = fStack_20;
    CPathTrack::LookAhead(this_00,&fStack_24,*(float *)&this->field_0x58,0);
    fStack_1c = fStack_1c + *(float *)&this->field_0x5c;
    fStack_c = fStack_24 - fStack_18;
    fStack_8 = fStack_20 - fStack_14;
    fStack_4 = fStack_1c - fStack_10;
    pvVar3 = (vec_t *)UTIL_VecToAngles((undefined4 *)&stack0x00000000,&fStack_c);
    peVar1 = this->pev;
    peVar1->angles[0] = *pvVar3;
    peVar1->angles[1] = pvVar3[1];
    peVar1->angles[2] = pvVar3[2];
    this->pev->angles[1] = this->pev->angles[1] + 180.0;
    if ((this->pev->spawnflags & 1) != 0) {
      this->pev->angles[0] = 0.0;
    }
    FUN_100679a0();
    NextThink(this,this->pev->ltime + 0.1,0);
    *(code **)&this->field_0x10 = Next;
    this->pev->speed = *(float *)&this->field_0x68;
    FUN_10027c00((int)this);
  }
  return;
}

/* 100287d0  CFuncTrackTrain::NearestPath  (512 bytes)
 * void NearestPath(void)
 */
/* public: void __thiscall CFuncTrackTrain::NearestPath(void) */

void __thiscall CFuncTrackTrain::NearestPath(CFuncTrackTrain *this)

{
  int *piVar1;
  entvars_t *peVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  bool bVar13;
  int local_14;
  float local_10;
  
                    /* 0x287d0  69  ?NearestPath@CFuncTrackTrain@@QAEXXZ */
  local_14 = 0;
  local_10 = 1024.0;
  iVar9 = FUN_10066c30(0,this->pev->origin,0x44800000);
  if (iVar9 != 0) {
    do {
      piVar1 = *(int **)(iVar9 + 4);
      if ((*(byte *)(piVar1 + 0x69) & 0x28) == 0) {
        iVar10 = 0xb;
        bVar13 = true;
        pcVar11 = gpGlobals->pStringBase + *piVar1;
        pcVar12 = s_path_track_10094dbc;
        do {
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          bVar13 = *pcVar11 == *pcVar12;
          pcVar11 = pcVar11 + 1;
          pcVar12 = pcVar12 + 1;
        } while (bVar13);
        if (bVar13) {
          peVar2 = this->pev;
          fVar3 = peVar2->origin[0] - (float)piVar1[2];
          fVar5 = peVar2->origin[1] - (float)piVar1[3];
          fVar4 = peVar2->origin[2] - (float)piVar1[4];
          fVar3 = SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4);
          if (fVar3 < local_10) {
            local_14 = iVar9;
            local_10 = fVar3;
          }
        }
      }
      iVar9 = FUN_10066c30(iVar9,this->pev->origin,0x44800000);
    } while (iVar9 != 0);
    if (local_14 != 0) {
      (*g_engfuncs.pfnAlertMessage)
                (at_aiconsole,s_TRAIN___s__Nearest_track_is__s_10095488,
                 gpGlobals->pStringBase + this->pev->targetname,
                 gpGlobals->pStringBase + *(int *)(*(int *)(local_14 + 4) + 0x1cc));
      iVar9 = CPathTrack::GetNext(local_14);
      if (iVar9 != 0) {
        iVar10 = *(int *)(iVar9 + 4);
        peVar2 = this->pev;
        fVar3 = peVar2->origin[0] - *(float *)(iVar10 + 8);
        fVar5 = peVar2->origin[1] - *(float *)(iVar10 + 0xc);
        fVar4 = peVar2->origin[2] - *(float *)(iVar10 + 0x10);
        iVar10 = *(int *)(local_14 + 4);
        fVar6 = peVar2->origin[0] - *(float *)(iVar10 + 8);
        fVar7 = peVar2->origin[1] - *(float *)(iVar10 + 0xc);
        fVar8 = peVar2->origin[2] - *(float *)(iVar10 + 0x10);
        if (SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4) <
            SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8)) {
          local_14 = iVar9;
        }
      }
      *(int *)&this->field_0x54 = local_14;
      if (this->pev->speed != 0.0) {
        NextThink(this,this->pev->ltime + 0.1,0);
        *(code **)&this->field_0x10 = Next;
      }
      return;
    }
  }
  (*g_engfuncs.pfnAlertMessage)(at_console,s_Can_t_find_a_nearby_track_____100954a8);
  *(undefined4 *)&this->field_0x10 = 0;
  return;
}

/* 100289d0  CFuncTrackTrain::OverrideReset  (38 bytes)
 * undefined OverrideReset(void * param_1)
 */
void __fastcall CFuncTrackTrain::OverrideReset(void *param_1)

{
  NextThink(param_1,*(float *)(*(int *)((int)param_1 + 4) + 0x100) + 0.1,0);
  *(code **)((int)param_1 + 0x10) = NearestPath;
  return;
}

/* 10028a50  CFuncTrackTrain::Spawn  (432 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CFuncTrackTrain::Spawn(int *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = param_1[1];
  if (*(float *)(iVar1 + 0x1f8) == 0.0) {
    param_1[0x18] = 0x42c80000;
  }
  else {
    param_1[0x18] = *(int *)(iVar1 + 0x1f8);
  }
  *(undefined4 *)(iVar1 + 0x1f8) = 0;
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 0x20) = DAT_1009f4a8;
  *(undefined4 *)(iVar1 + 0x24) = DAT_1009f4ac;
  *(undefined4 *)(iVar1 + 0x28) = DAT_1009f4b0;
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 0x5c) = DAT_1009f4a8;
  *(undefined4 *)(iVar1 + 0x60) = DAT_1009f4ac;
  *(undefined4 *)(iVar1 + 100) = DAT_1009f4b0;
  lVar2 = __ftol();
  *(int *)(param_1[1] + 0x184) = (int)lVar2;
  param_1[0x19] = 0x3f800000;
  if (*(int *)(param_1[1] + 0x1c8) == 0) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_FuncTrain_with_no_target_10095328);
  }
  iVar1 = param_1[1];
  if ((*(byte *)(iVar1 + 0x1a0) & 8) == 0) {
    *(undefined4 *)(iVar1 + 0x10c) = 4;
  }
  else {
    *(undefined4 *)(iVar1 + 0x10c) = 0;
  }
  *(undefined4 *)(param_1[1] + 0x108) = 7;
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(param_1[1] + 0x208),gpGlobals->pStringBase + *(int *)(param_1[1] + 0xb8))
  ;
  FUN_10067970();
  FUN_100679a0();
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x10);
  iVar1 = param_1[1];
  param_1[0x1b] = *(int *)(iVar1 + 0xdc);
  param_1[0x1c] = *(int *)(iVar1 + 0xe0);
  param_1[0x1d] = *(int *)(iVar1 + 0xe4);
  param_1[0x1e] = *(int *)(iVar1 + 0xe8);
  param_1[0x1f] = *(int *)(iVar1 + 0xec);
  param_1[0x20] = *(int *)(iVar1 + 0xf0);
  param_1[0x20] = (int)((float)param_1[0x20] + 72.0);
  NextThink((CFuncTrackTrain *)param_1,*(float *)(iVar1 + 0x100) + 0.1,0);
  param_1[4] = (int)Find;
                    /* WARNING: Could not recover jumptable at 0x10028bfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}

/* 10028c00  CFuncTrackTrain::Precache  (249 bytes)
 * undefined Precache()
 */
void __fastcall CFuncTrackTrain::Precache(int param_1)

{
  ushort uVar1;
  char *pcVar2;
  
  if (*(float *)(param_1 + 0x8c) == 0.0) {
    *(undefined4 *)(param_1 + 0x8c) = 0x3f800000;
  }
  switch(*(undefined4 *)(param_1 + 0x88)) {
  case 1:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_ttrain1_wav_1009554c);
    pcVar2 = s_plats_ttrain1_wav_1009554c;
    break;
  case 2:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_ttrain2_wav_10095538);
    pcVar2 = s_plats_ttrain2_wav_10095538;
    break;
  case 3:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_ttrain3_wav_10095524);
    pcVar2 = s_plats_ttrain3_wav_10095524;
    break;
  case 4:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_ttrain4_wav_10095510);
    pcVar2 = s_plats_ttrain4_wav_10095510;
    break;
  case 5:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_ttrain6_wav_100954fc);
    pcVar2 = s_plats_ttrain6_wav_100954fc;
    break;
  case 6:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_ttrain7_wav_100954e8);
    pcVar2 = s_plats_ttrain7_wav_100954e8;
    break;
  default:
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x1e8) = 0;
    goto LAB_10028cca;
  }
  *(int *)(*(int *)(param_1 + 4) + 0x1e8) = (int)pcVar2 - (int)gpGlobals->pStringBase;
LAB_10028cca:
  (*g_engfuncs.pfnPrecacheSound)(s_plats_ttrain_brake1_wav_100953b4);
  (*g_engfuncs.pfnPrecacheSound)(s_plats_ttrain_start1_wav_100953cc);
  uVar1 = (*g_engfuncs.pfnPrecacheEvent)(1,s_events_train_sc_100954d8);
  *(ushort *)(param_1 + 0x98) = uVar1;
  return;
}

/* 1002a1b0  CFuncTrackTrain::ObjectCaps  (6 bytes)
 * undefined ObjectCaps()
 */
undefined4 CFuncTrackTrain::ObjectCaps(void)

{
  return 0x40;
}

