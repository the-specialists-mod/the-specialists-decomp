/* mp.dll - CFuncTrackTrain (16 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1002f9e0  CFuncTrackTrain::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CFuncTrackTrain::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CFuncTrackTrain_100a0694,(int)param_1,0x100a01b8,0xc
                    );
  return;
}

/* 1002fa10  CFuncTrackTrain::Restore  (48 bytes)
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
            (param_2,(byte_conflict *)s_CFuncTrackTrain_100a0694,(int)param_1,&DAT_100a01b8,0xc);
  return;
}

/* 1002fa50  CFuncTrackTrain::KeyValue  (536 bytes)
 * undefined KeyValue()
 */
void __thiscall CFuncTrackTrain::KeyValue(undefined *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined *this;
  char *pcVar7;
  bool bVar8;
  float10 fVar9;
  undefined3 uVar6;
  
  pbVar5 = *(byte **)(param_2 + 4);
  pcVar7 = s_wheels_100a06b8;
  pbVar2 = pbVar5;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1002fa88:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1002fa8d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1002fa88;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002fa8d:
  if (iVar3 == 0) {
    fVar9 = atof(this,*(byte_conflict **)(param_2 + 8));
    *(float *)(param_1 + 0x58) = (float)fVar9;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_height_1009c324;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1002fad9:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1002fade;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1002fad9;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002fade:
  if (iVar3 == 0) {
    fVar9 = atof(this,*(byte_conflict **)(param_2 + 8));
    *(float *)(param_1 + 0x5c) = (float)fVar9;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_startspeed_100a06ac;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1002fb2a:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1002fb2f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1002fb2a;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002fb2f:
  if (iVar3 == 0) {
    fVar9 = atof(this,*(byte_conflict **)(param_2 + 8));
    *(float *)(param_1 + 0x68) = (float)fVar9;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_sounds_1009bf90;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1002fb7b:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1002fb80;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1002fb7b;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002fb80:
  if (iVar3 == 0) {
    uVar4 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(undefined4 *)(param_1 + 0x88) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_volume_100a044c;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1002fbcf:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1002fbd4;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1002fbcf;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002fbd4:
  if (iVar3 == 0) {
    iVar3 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(float *)(param_1 + 0x8c) = (float)iVar3 * 0.1;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pbVar2 = &DAT_100a06a4;
  do {
    bVar1 = *pbVar5;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) {
LAB_1002fc31:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1002fc36;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) goto LAB_1002fc31;
    pbVar5 = pbVar5 + 2;
    pbVar2 = pbVar2 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002fc36:
  if (iVar3 == 0) {
    fVar9 = atof(this,*(byte_conflict **)(param_2 + 8));
    *(float *)(param_1 + 0x90) = (float)fVar9;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

/* 1002fc70  CFuncTrackTrain::NextThink  (53 bytes)
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

/* 1002fcb0  CFuncTrackTrain::Blocked  (458 bytes)
 * undefined Blocked()
 */
void __thiscall CFuncTrackTrain::Blocked(int param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fStack_14;
  float fStack_10;
  
  iVar1 = param_2[1];
  if ((*(uint *)(iVar1 + 0x1a4) & 0x200) != 0) {
    if (*(int *)(iVar1 + 0x19c) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar1 + 0x19c) + 0x80;
    }
    if (iVar4 == *(int *)(param_1 + 4)) {
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
  iVar4 = *(int *)(param_1 + 4);
  fVar3 = *(float *)(iVar1 + 8) - *(float *)(iVar4 + 8);
  fStack_14 = *(float *)(iVar1 + 0xc) - *(float *)(iVar4 + 0xc);
  fStack_10 = *(float *)(iVar1 + 0x10) - *(float *)(iVar4 + 0x10);
  fVar2 = SQRT(fStack_14 * fStack_14 + fVar3 * fVar3 + fStack_10 * fStack_10);
  if (fVar2 == 0.0) {
    fVar3 = 0.0;
    fStack_14 = 0.0;
    fStack_10 = 1.0;
  }
  else {
    fVar2 = 1.0 / fVar2;
    fVar3 = fVar3 * fVar2;
    fStack_14 = fVar2 * fStack_14;
    fStack_10 = fStack_10 * fVar2;
  }
  fVar2 = *(float *)(iVar4 + 0x1e0);
  *(float *)(iVar1 + 0x20) = fVar3 * fVar2;
  *(float *)(iVar1 + 0x24) = fStack_14 * fVar2;
  *(float *)(iVar1 + 0x28) = fStack_10 * fVar2;
  (*g_engfuncs.pfnAlertMessage)
            (at_aiconsole,s_TRAIN__s___Blocked_by__s__dmg____100a06c0,
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1cc),
             gpGlobals->pStringBase + *(int *)param_2[1],
             (double)*(float *)(*(int *)(param_1 + 4) + 0x1e0));
  iVar1 = *(int *)(param_1 + 4);
  if (*(float *)(iVar1 + 0x1e0) <= 0.0) {
    return;
  }
  (**(code **)(*param_2 + 0x50))(iVar1,iVar1,*(float *)(iVar1 + 0x1e0),1);
  return;
}

/* 1002fe80  CFuncTrackTrain::Use  (400 bytes)
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
              (at_aiconsole,s_TRAIN__s___speed_to___2f_100a06e8,
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
      peVar1->velocity[0] = DAT_100ae498;
      peVar1->velocity[1] = DAT_100ae49c;
      peVar1->velocity[2] = DAT_100ae4a0;
      peVar1 = this->pev;
      peVar1->avelocity[0] = DAT_100ae498;
      peVar1->avelocity[1] = DAT_100ae49c;
      peVar1->avelocity[2] = DAT_100ae4a0;
      StopSound((int)this);
      *(undefined4 *)&this->field_0x10 = 0;
      return;
    }
  }
  return;
}

/* 10030010  CFuncTrackTrain::StopSound  (148 bytes)
 * undefined StopSound(int param_1)
 * called by: CFuncTrackTrain::Next, CFuncTrackTrain::Use
 */
void __fastcall CFuncTrackTrain::StopSound(int param_1)

{
  if ((*(int *)(param_1 + 0x84) != 0) && (*(int *)(*(int *)(param_1 + 4) + 0x1e8) != 0)) {
    (*g_engfuncs.pfnPlaybackEvent)
              (10,*(edict_t **)(*(int *)(param_1 + 4) + 0x208),*(ushort *)(param_1 + 0x98),0.0,
               (float *)&DAT_100ae498,(float *)&DAT_100ae498,0.0,0.0,
               (*(byte *)(param_1 + 0x88) & 7) << 0xc,0,1,0);
    EMIT_SOUND_DYN(*(void **)(param_1 + 0x8c),*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),3,
                   s_plats_ttrain_brake1_wav_100a0704,*(void **)(param_1 + 0x8c),0x3f4ccccd,0);
  }
  *(undefined4 *)(param_1 + 0x84) = 0;
  return;
}

/* 10030210  CFuncTrackTrain::Next  (1513 bytes)
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
  float *pfVar7;
  int iVar8;
  float10 fVar9;
  char *szFmt;
  float fVar10;
  vec_t vVar11;
  float local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  vec_t local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  float local_8;
  float local_4;
  
                    /* 0x30210  75  ?Next@CFuncTrackTrain@@QAEXXZ */
  peVar4 = this->pev;
  if (peVar4->speed == 0.0) {
    pcVar5 = gpGlobals->pStringBase + peVar4->targetname;
    szFmt = s_TRAIN__s___Speed_is_0_100a076c;
  }
  else {
    if (*(int *)&this->field_0x54 != 0) {
      FUN_100300b0((int)this);
      peVar4 = this->pev;
      local_48 = peVar4->origin[0];
      local_44 = peVar4->origin[1];
      local_40 = peVar4->origin[2] - *(float *)&this->field_0x5c;
      iVar6 = CPathTrack::LookAhead
                        (*(CPathTrack **)&this->field_0x54,&local_48,peVar4->speed * 0.1,1);
      local_40 = local_40 + *(float *)&this->field_0x5c;
      peVar4 = this->pev;
      local_24 = (local_48 - peVar4->origin[0]) * 10.0;
      local_20 = (local_44 - peVar4->origin[1]) * 10.0;
      local_1c = (local_40 - peVar4->origin[2]) * 10.0;
      peVar4->velocity[0] = local_24;
      peVar4->velocity[1] = local_20;
      peVar4->velocity[2] = local_1c;
      peVar4 = this->pev;
      local_30 = peVar4->origin[0];
      local_2c = peVar4->origin[1];
      local_28 = peVar4->origin[2] - *(float *)&this->field_0x5c;
      fVar10 = *(float *)&this->field_0x58;
      if (fVar10 <= 0.0) {
        fVar10 = 100.0;
      }
      local_8 = local_20;
      local_4 = local_1c;
      CPathTrack::LookAhead(*(CPathTrack **)&this->field_0x54,&local_30,fVar10,0);
      local_28 = local_28 + *(float *)&this->field_0x5c;
      peVar4 = this->pev;
      local_18 = local_30 - peVar4->origin[0];
      local_14 = local_2c - peVar4->origin[1];
      local_10 = local_28 - peVar4->origin[2];
      local_8 = local_14;
      local_4 = local_10;
      pfVar7 = (float *)UTIL_VecToAngles(&local_c,&local_18);
      local_3c = *pfVar7;
      local_34 = pfVar7[2];
      local_38 = pfVar7[1] + 180.0;
      FUN_10030800(&local_3c);
      FUN_10030800(this->pev->angles);
      if ((iVar6 == 0) || ((local_18 == 0.0 && (local_14 == 0.0)))) {
        peVar4 = this->pev;
        local_3c = peVar4->angles[0];
        local_38 = peVar4->angles[1];
        local_34 = peVar4->angles[2];
      }
      if ((this->pev->spawnflags & 1) == 0) {
        fVar9 = FUN_10077230(local_3c,this->pev->angles[0]);
        local_50 = (float)fVar9;
      }
      else {
        local_50 = 0.0;
      }
      fVar9 = FUN_10077230(local_38,this->pev->angles[1]);
      this->pev->avelocity[1] = (float)(fVar9 * (float10)10.0);
      this->pev->avelocity[0] = local_50 * 10.0;
      if (*(float *)&this->field_0x90 != 0.0) {
        peVar4 = this->pev;
        if (-5.0 <= peVar4->avelocity[1]) {
          if (5.0 < peVar4->avelocity[1]) {
            fVar10 = *(float *)&this->field_0x90;
            vVar11 = peVar4->angles[2];
            fVar9 = FUN_10077190(fVar10,vVar11,fVar10 + fVar10);
            fVar9 = FUN_10077230((float)fVar9,vVar11);
            this->pev->avelocity[2] = (float)fVar9;
            goto LAB_100305a0;
          }
          vVar11 = peVar4->angles[2];
          fVar9 = FUN_10077190(0.0,vVar11,*(float *)&this->field_0x90 * 4.0);
          fVar9 = FUN_10077230((float)fVar9,vVar11);
          fVar9 = fVar9 * (float10)4.0;
        }
        else {
          vVar11 = peVar4->angles[2];
          fVar9 = FUN_10077190(-*(float *)&this->field_0x90,vVar11,
                               *(float *)&this->field_0x90 + *(float *)&this->field_0x90);
          fVar9 = FUN_10077230((float)fVar9,vVar11);
        }
        this->pev->avelocity[2] = (float)fVar9;
      }
LAB_100305a0:
      if (iVar6 != 0) {
        if (iVar6 != *(int *)&this->field_0x54) {
          iVar8 = *(int *)&this->field_0x54;
          if (0.0 <= this->pev->speed) {
            iVar8 = iVar6;
          }
          *(int *)&this->field_0x54 = iVar6;
          iVar6 = *(int *)(*(int *)(iVar8 + 4) + 0x1d4);
          if (iVar6 != 0) {
            FireTargets((int)(gpGlobals->pStringBase + iVar6),this,this,3,0);
            if ((*(byte *)(*(int *)(iVar8 + 4) + 0x1a0) & 2) != 0) {
              *(undefined4 *)(*(int *)(iVar8 + 4) + 0x1d4) = 0;
            }
          }
          if ((*(byte *)(*(int *)(iVar8 + 4) + 0x1a0) & 8) != 0) {
            piVar1 = &this->pev->spawnflags;
            *piVar1 = *piVar1 | 2;
          }
          if (((this->pev->spawnflags & 2) != 0) && (*(float *)(*(int *)(iVar8 + 4) + 0x1f8) != 0.0)
             ) {
            this->pev->speed = *(float *)(*(int *)(iVar8 + 4) + 0x1f8);
            (*g_engfuncs.pfnAlertMessage)
                      (at_aiconsole,s_TrackTrain__s_speed_to__4_2f_100a0734,
                       gpGlobals->pStringBase + this->pev->targetname,(double)this->pev->speed);
          }
        }
        *(code **)&this->field_0x10 = Next;
        NextThink(this,this->pev->ltime + 0.5,1);
        return;
      }
      StopSound((int)this);
      peVar4 = this->pev;
      local_24 = local_48 - peVar4->origin[0];
      local_20 = local_44 - peVar4->origin[1];
      local_1c = local_40 - peVar4->origin[2];
      peVar4->velocity[0] = local_24;
      peVar4->velocity[1] = local_20;
      peVar4->velocity[2] = local_1c;
      peVar4 = this->pev;
      peVar4->avelocity[0] = DAT_100ae498;
      peVar4->avelocity[1] = DAT_100ae49c;
      peVar4->avelocity[2] = DAT_100ae4a0;
      peVar4 = this->pev;
      fVar10 = peVar4->velocity[2];
      fVar2 = peVar4->velocity[1];
      fVar3 = peVar4->velocity[0];
      *(float *)&this->field_0x94 = peVar4->speed;
      peVar4->speed = 0.0;
      fVar10 = SQRT(fVar10 * fVar10 + fVar2 * fVar2 + fVar3 * fVar3);
      if (fVar10 <= 0.0) {
        local_8 = local_20;
        local_4 = local_1c;
        DeadEnd(this);
        return;
      }
      fVar2 = *(float *)&this->field_0x94;
      peVar4 = this->pev;
      local_1c = *(float *)&this->field_0x94 / fVar10;
      local_24 = local_1c * peVar4->velocity[0];
      local_20 = local_1c * peVar4->velocity[1];
      local_1c = local_1c * peVar4->velocity[2];
      peVar4->velocity[0] = local_24;
      peVar4->velocity[1] = local_20;
      peVar4->velocity[2] = local_1c;
      *(code **)&this->field_0x10 = DeadEnd;
      local_8 = local_20;
      local_4 = local_1c;
      NextThink(this,fVar10 / fVar2 + this->pev->ltime,0);
      return;
    }
    pcVar5 = gpGlobals->pStringBase + peVar4->targetname;
    szFmt = s_TRAIN__s___Lost_path_100a0754;
  }
  (*g_engfuncs.pfnAlertMessage)(at_aiconsole,szFmt,pcVar5);
  StopSound((int)this);
  return;
}

/* 10030880  CFuncTrackTrain::DeadEnd  (290 bytes)
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
  
                    /* 0x30880  29  ?DeadEnd@CFuncTrackTrain@@QAEXXZ */
  iVar3 = *(int *)&this->field_0x54;
  (*g_engfuncs.pfnAlertMessage)
            (at_aiconsole,s_TRAIN__s___Dead_end_100a078c,
             gpGlobals->pStringBase + this->pev->targetname);
  if (iVar3 != 0) {
    iVar2 = iVar3;
    if (0.0 <= *(float *)&this->field_0x94) {
      do {
        iVar3 = iVar2;
        iVar4 = 1;
        iVar2 = CPathTrack::GetNext(iVar3);
        iVar2 = FUN_1002d5c0(iVar2,iVar4);
      } while (iVar2 != 0);
    }
    else {
      do {
        iVar3 = iVar2;
        iVar4 = 1;
        iVar2 = FUN_1002d740(iVar3);
        iVar2 = FUN_1002d5c0(iVar2,iVar4);
      } while (iVar2 != 0);
    }
  }
  peVar1 = this->pev;
  peVar1->velocity[0] = DAT_100ae498;
  peVar1->velocity[1] = DAT_100ae49c;
  peVar1->velocity[2] = DAT_100ae4a0;
  peVar1 = this->pev;
  peVar1->avelocity[0] = DAT_100ae498;
  peVar1->avelocity[1] = DAT_100ae49c;
  peVar1->avelocity[2] = DAT_100ae4a0;
  if (iVar3 == 0) {
    (*g_engfuncs.pfnAlertMessage)(at_aiconsole,&DAT_1009ccd8);
  }
  else {
    (*g_engfuncs.pfnAlertMessage)
              (at_aiconsole,s_at__s_100a0784,
               gpGlobals->pStringBase + *(int *)(*(int *)(iVar3 + 4) + 0x1cc));
    iVar3 = *(int *)(*(int *)(iVar3 + 4) + 0x1d0);
    if (iVar3 != 0) {
      FireTargets((int)(gpGlobals->pStringBase + iVar3),this,this,3,0);
      return;
    }
  }
  return;
}

/* 10030a80  CFuncTrackTrain::OnControls  (270 bytes)
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
    UTIL_MakeVectors(iVar1 + 0x50);
    fVar5 = fVar2 * gpGlobals->v_forward[0] +
            fVar3 * gpGlobals->v_forward[1] + fVar4 * gpGlobals->v_forward[2];
    fVar6 = -(fVar2 * gpGlobals->v_right[0] +
             fVar3 * gpGlobals->v_right[1] + fVar4 * gpGlobals->v_right[2]);
    fVar2 = fVar2 * gpGlobals->v_up[0] + fVar3 * gpGlobals->v_up[1] + fVar4 * gpGlobals->v_up[2];
    if ((((*(float *)(param_1 + 0x6c) <= fVar5) && (*(float *)(param_1 + 0x70) <= fVar6)) &&
        (*(float *)(param_1 + 0x74) <= fVar2)) &&
       (((fVar5 <= *(float *)(param_1 + 0x78) && (fVar6 <= *(float *)(param_1 + 0x7c))) &&
        (fVar2 <= *(float *)(param_1 + 0x80))))) {
      return 1;
    }
  }
  return 0;
}

/* 10030b90  CFuncTrackTrain::Find  (434 bytes)
 * void Find(void)
 */
/* public: void __thiscall CFuncTrackTrain::Find(void) */

void __thiscall CFuncTrackTrain::Find(CFuncTrackTrain *this)

{
  byte bVar1;
  entvars_t *peVar2;
  edict_t *peVar3;
  CPathTrack *this_00;
  int iVar4;
  vec_t *pvVar5;
  byte *pbVar6;
  char *pcVar7;
  bool bVar8;
  float fStack00000004;
  float fStack00000008;
  vec_t vStack_24;
  float fStack_20;
  float fStack_1c;
  vec_t vStack_18;
  float fStack_14;
  float fStack_10;
  undefined4 uStack_c;
  float fStack_8;
  float fStack_4;
  
                    /* 0x30b90  52  ?Find@CFuncTrackTrain@@QAEXXZ */
  peVar3 = (*g_engfuncs.pfnFindEntityByString)
                     ((edict_t *)0x0,s_targetname_1009c68c,
                      gpGlobals->pStringBase + this->pev->target);
  this_00 = (CPathTrack *)FUN_1002dcb0((int)peVar3);
  *(CPathTrack **)&this->field_0x54 = this_00;
  if (this_00 != (CPathTrack *)0x0) {
    peVar2 = this_00->pev;
    pcVar7 = s_path_track_100a010c;
    pbVar6 = (byte *)(gpGlobals->pStringBase + peVar2->classname);
    do {
      bVar1 = *pbVar6;
      bVar8 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_10030c0e:
        iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_10030c13;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar8 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_10030c0e;
      pbVar6 = pbVar6 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_10030c13:
    if (iVar4 != 0) {
      (*g_engfuncs.pfnAlertMessage)(at_error,s_func_track_train_must_be_on_a_pa_100a07a4);
      *(undefined4 *)&this->field_0x54 = 0;
      return;
    }
    vStack_24 = peVar2->origin[0];
    fStack_20 = peVar2->origin[1];
    fStack_10 = peVar2->origin[2] + *(float *)&this->field_0x5c;
    fStack_1c = fStack_10 - *(float *)&this->field_0x5c;
    vStack_18 = vStack_24;
    fStack_14 = fStack_20;
    CPathTrack::LookAhead(this_00,&vStack_24,*(float *)&this->field_0x58,0);
    fStack_1c = fStack_1c + *(float *)&this->field_0x5c;
    fStack00000004 = fStack_20 - fStack_14;
    fStack00000008 = fStack_1c - fStack_10;
    fStack_8 = fStack00000004;
    fStack_4 = fStack00000008;
    pvVar5 = (vec_t *)UTIL_VecToAngles(&uStack_c,&stack0x00000000);
    peVar2 = this->pev;
    peVar2->angles[0] = *pvVar5;
    peVar2->angles[1] = pvVar5[1];
    peVar2->angles[2] = pvVar5[2];
    this->pev->angles[1] = this->pev->angles[1] + 180.0;
    if ((this->pev->spawnflags & 1) != 0) {
      this->pev->angles[0] = 0.0;
    }
    UTIL_SetOrigin((int)this->pev,&vStack_18);
    NextThink(this,this->pev->ltime + 0.1,0);
    *(code **)&this->field_0x10 = Next;
    this->pev->speed = *(float *)&this->field_0x68;
    FUN_100300b0((int)this);
  }
  return;
}

/* 10030d50  CFuncTrackTrain::NearestPath  (541 bytes)
 * void NearestPath(void)
 */
/* public: void __thiscall CFuncTrackTrain::NearestPath(void) */

void __thiscall CFuncTrackTrain::NearestPath(CFuncTrackTrain *this)

{
  byte bVar1;
  int *piVar2;
  entvars_t *peVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  char *pcVar14;
  bool bVar15;
  int local_14;
  float local_10;
  
                    /* 0x30d50  74  ?NearestPath@CFuncTrackTrain@@QAEXXZ */
  iVar13 = 0;
  local_14 = 0;
  local_10 = 1024.0;
  iVar11 = FUN_10076410(0,this->pev->origin,0x44800000);
  if (iVar11 != 0) {
    do {
      piVar2 = *(int **)(iVar11 + 4);
      iVar4 = local_14;
      fVar5 = local_10;
      if ((*(byte *)(piVar2 + 0x69) & 0x28) == 0) {
        pcVar14 = s_path_track_100a010c;
        pbVar12 = (byte *)(gpGlobals->pStringBase + *piVar2);
        do {
          bVar1 = *pbVar12;
          bVar15 = bVar1 < (byte)*pcVar14;
          if (bVar1 != *pcVar14) {
LAB_10030dcf:
            iVar13 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
            goto LAB_10030dd4;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar12[1];
          bVar15 = bVar1 < (byte)pcVar14[1];
          if (bVar1 != pcVar14[1]) goto LAB_10030dcf;
          pbVar12 = pbVar12 + 2;
          pcVar14 = pcVar14 + 2;
        } while (bVar1 != 0);
        iVar13 = 0;
LAB_10030dd4:
        if (iVar13 == 0) {
          peVar3 = this->pev;
          fVar5 = peVar3->origin[0] - (float)piVar2[2];
          fVar7 = peVar3->origin[1] - (float)piVar2[3];
          fVar6 = peVar3->origin[2] - (float)piVar2[4];
          fVar5 = SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6);
          iVar13 = iVar11;
          iVar4 = iVar11;
          if (fVar5 < local_10) goto LAB_10030e24;
        }
        iVar13 = local_14;
        iVar4 = local_14;
        fVar5 = local_10;
      }
LAB_10030e24:
      local_10 = fVar5;
      local_14 = iVar4;
      iVar11 = FUN_10076410(iVar11,this->pev->origin,0x44800000);
    } while (iVar11 != 0);
    if (iVar13 != 0) {
      (*g_engfuncs.pfnAlertMessage)
                (at_aiconsole,s_TRAIN___s__Nearest_track_is__s_100a07d8,
                 gpGlobals->pStringBase + this->pev->targetname,
                 gpGlobals->pStringBase + *(int *)(*(int *)(iVar13 + 4) + 0x1cc));
      iVar11 = CPathTrack::GetNext(iVar13);
      if (iVar11 != 0) {
        iVar4 = *(int *)(iVar11 + 4);
        peVar3 = this->pev;
        fVar5 = peVar3->origin[0] - *(float *)(iVar4 + 8);
        fVar7 = peVar3->origin[1] - *(float *)(iVar4 + 0xc);
        fVar6 = peVar3->origin[2] - *(float *)(iVar4 + 0x10);
        iVar4 = *(int *)(iVar13 + 4);
        fVar8 = peVar3->origin[0] - *(float *)(iVar4 + 8);
        fVar9 = peVar3->origin[1] - *(float *)(iVar4 + 0xc);
        fVar10 = peVar3->origin[2] - *(float *)(iVar4 + 0x10);
        if (SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6) <
            SQRT(fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10)) {
          iVar13 = iVar11;
        }
      }
      *(int *)&this->field_0x54 = iVar13;
      if (this->pev->speed != 0.0) {
        NextThink(this,this->pev->ltime + 0.1,0);
        *(code **)&this->field_0x10 = Next;
      }
      return;
    }
  }
  (*g_engfuncs.pfnAlertMessage)(at_console,s_Can_t_find_a_nearby_track_____100a07f8);
  *(undefined4 *)&this->field_0x10 = 0;
  return;
}

/* 10030f70  CFuncTrackTrain::OverrideReset  (38 bytes)
 * undefined OverrideReset(void * param_1)
 */
void __fastcall CFuncTrackTrain::OverrideReset(void *param_1)

{
  NextThink(param_1,*(float *)(*(int *)((int)param_1 + 4) + 0x100) + 0.1,0);
  *(code **)((int)param_1 + 0x10) = NearestPath;
  return;
}

/* 10031010  CFuncTrackTrain::Spawn  (433 bytes)
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
  *(undefined4 *)(iVar1 + 0x20) = DAT_100ae498;
  *(undefined4 *)(iVar1 + 0x24) = DAT_100ae49c;
  *(undefined4 *)(iVar1 + 0x28) = DAT_100ae4a0;
  iVar1 = param_1[1];
  *(undefined4 *)(iVar1 + 0x5c) = DAT_100ae498;
  *(undefined4 *)(iVar1 + 0x60) = DAT_100ae49c;
  *(undefined4 *)(iVar1 + 100) = DAT_100ae4a0;
  lVar2 = __ftol();
  *(int *)(param_1[1] + 0x184) = (int)lVar2;
  param_1[0x19] = 0x3f800000;
  if (*(int *)(param_1[1] + 0x1c8) == 0) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_FuncTrain_with_no_target_100a0678);
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
  iVar1 = param_1[1];
  UTIL_SetSize(iVar1,iVar1 + 0xdc,iVar1 + 0xe8);
  UTIL_SetOrigin(param_1[1],param_1[1] + 8);
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
  (**(code **)(*param_1 + 0x20))();
  return;
}

/* 100311d0  CFuncTrackTrain::Precache  (264 bytes)
 * undefined Precache(int param_1)
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
    (*g_engfuncs.pfnPrecacheSound)(s_plats_ttrain1_wav_100a089c);
    pcVar2 = s_plats_ttrain1_wav_100a089c;
    break;
  case 2:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_ttrain2_wav_100a0888);
    pcVar2 = s_plats_ttrain2_wav_100a0888;
    break;
  case 3:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_ttrain3_wav_100a0874);
    pcVar2 = s_plats_ttrain3_wav_100a0874;
    break;
  case 4:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_ttrain4_wav_100a0860);
    pcVar2 = s_plats_ttrain4_wav_100a0860;
    break;
  case 5:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_ttrain6_wav_100a084c);
    pcVar2 = s_plats_ttrain6_wav_100a084c;
    break;
  case 6:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_ttrain7_wav_100a0838);
    pcVar2 = s_plats_ttrain7_wav_100a0838;
    break;
  default:
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x1e8) = 0;
    goto LAB_100312a9;
  }
  *(int *)(*(int *)(param_1 + 4) + 0x1e8) = (int)pcVar2 - (int)gpGlobals->pStringBase;
LAB_100312a9:
  (*g_engfuncs.pfnPrecacheSound)(s_plats_ttrain_brake1_wav_100a0704);
  (*g_engfuncs.pfnPrecacheSound)(s_plats_ttrain_start1_wav_100a071c);
  uVar1 = (*g_engfuncs.pfnPrecacheEvent)(1,s_events_train_sc_100a0828);
  *(ushort *)(param_1 + 0x98) = uVar1;
  return;
}

/* 10032890  CFuncTrackTrain::ObjectCaps  (6 bytes)
 * undefined ObjectCaps()
 */
undefined4 CFuncTrackTrain::ObjectCaps(void)

{
  return 0x40;
}

