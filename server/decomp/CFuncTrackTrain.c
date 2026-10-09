/* ts_i386.so - CFuncTrackTrain (20 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000d3eec  CFuncTrackTrain::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CFuncTrackTrain::Save(CSave &) */

undefined4 __thiscall CFuncTrackTrain::Save(CFuncTrackTrain *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CFuncTrackTrain",(int)this,(int *)m_SaveData,0xc);
  }
  return uVar2;
}

/* 000d3f3c  CFuncTrackTrain::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CFuncTrackTrain::Restore(CRestore &) */

undefined4 __thiscall CFuncTrackTrain::Restore(CFuncTrackTrain *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CFuncTrackTrain",(int)this,(int)m_SaveData,0xc);
  }
  return uVar2;
}

/* 000d3fb0  CFuncTrackTrain::KeyValue  (412 bytes)
 * int KeyValue(int param_1)
 */
/* CFuncTrackTrain::KeyValue(KeyValueData_s *) */

int __thiscall CFuncTrackTrain::KeyValue(CFuncTrackTrain *this,int param_1)

{
  int iVar1;
  longdouble extraout_ST0;
  longdouble extraout_ST0_00;
  longdouble extraout_ST0_01;
  longdouble extraout_ST0_02;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"wheels");
  if (iVar1 == 0) {
    iVar1 = __strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
    *(float *)&this->field_0x68 = (float)extraout_ST0;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"height");
    if (iVar1 == 0) {
      iVar1 = __strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
      *(float *)&this->field_0x6c = (float)extraout_ST0_00;
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      iVar1 = strcmp(*(char **)(param_1 + 4),"startspeed");
      if (iVar1 == 0) {
        iVar1 = __strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
        *(float *)&this->field_0x78 = (float)extraout_ST0_01;
        *(undefined4 *)(param_1 + 0xc) = 1;
      }
      else {
        iVar1 = strcmp(*(char **)(param_1 + 4),"sounds");
        if (iVar1 == 0) {
          iVar1 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
          *(int *)&this->field_0x98 = iVar1;
          *(undefined4 *)(param_1 + 0xc) = 1;
        }
        else {
          iVar1 = strcmp(*(char **)(param_1 + 4),"volume");
          if (iVar1 == 0) {
            iVar1 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
            *(float *)&this->field_0x9c = (float)iVar1;
            *(float *)&this->field_0x9c = *(float *)&this->field_0x9c * 0.1;
            *(undefined4 *)(param_1 + 0xc) = 1;
          }
          else {
            iVar1 = strcmp(*(char **)(param_1 + 4),"bank");
            if (iVar1 == 0) {
              iVar1 = __strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
              *(float *)&this->field_0xa0 = (float)extraout_ST0_02;
              *(undefined4 *)(param_1 + 0xc) = 1;
            }
            else {
              *(undefined4 *)(param_1 + 0xc) = 0;
            }
          }
        }
      }
    }
  }
  return iVar1;
}

/* 000d4154  CFuncTrackTrain::NextThink  (50 bytes)
 * undefined NextThink(undefined4 param_1, int param_2)
 */
/* CFuncTrackTrain::NextThink(float, int) */

void __thiscall CFuncTrackTrain::NextThink(CFuncTrackTrain *this,float param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 == 0) {
    piVar1 = &this->pev->flags;
    *piVar1 = *piVar1 & 0xffdfffff;
  }
  else {
    piVar1 = &this->pev->flags;
    *piVar1 = *piVar1 | 0x200000;
  }
  this->pev->nextthink = param_1;
  return;
}

/* 000d418c  CFuncTrackTrain::Blocked  (491 bytes)
 * undefined Blocked(int * param_1)
 */
/* CFuncTrackTrain::Blocked(CBaseEntity *) */

void __thiscall CFuncTrackTrain::Blocked(CFuncTrackTrain *this,int *param_1)

{
  float fVar1;
  int iVar2;
  entvars_t *peVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float local_4c;
  float local_48;
  float local_44;
  float local_3c [7];
  float local_20;
  
  iVar2 = *param_1;
  if (((*(byte *)(iVar2 + 0x1a5) & 2) == 0) ||
     (peVar3 = (entvars_t *)(*(int *)(iVar2 + 0x19c) + 0x80U & (*(int *)(iVar2 + 0x19c) == 0) - 1),
     peVar3 != this->pev)) {
    peVar3 = this->pev;
    local_4c = *(float *)(iVar2 + 8) - peVar3->origin[0];
    local_48 = *(float *)(iVar2 + 0xc) - peVar3->origin[1];
    fVar1 = *(float *)(iVar2 + 0x10) - peVar3->origin[2];
    local_20 = SQRT(fVar1 * fVar1 + local_48 * local_48 + local_4c * local_4c);
    if (local_20 == 0.0) {
      local_44 = 1.0;
      local_4c = 0.0;
      local_48 = 0.0;
    }
    else {
      local_44 = 1.0 / local_20;
      local_4c = local_44 * local_4c;
      local_48 = local_44 * local_48;
      local_44 = local_44 * fVar1;
    }
    fVar1 = this->pev->dmg;
    local_3c[0] = fVar1 * local_4c;
    local_3c[1] = fVar1 * local_48;
    local_3c[2] = fVar1 * local_44;
    pfVar5 = local_3c;
    pfVar6 = (float *)(iVar2 + 0x20);
    for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar6 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar6 = pfVar6 + 1;
    }
    (*g_engfuncs.pfnAlertMessage)
              (at_aiconsole,"TRAIN(%s): Blocked by %s (dmg:%.2f)\n",
               gpGlobals->pStringBase + this->pev->targetname,
               gpGlobals->pStringBase + *(int *)*param_1,(double)this->pev->dmg);
    if (0.0 < this->pev->dmg) {
      peVar3 = this->pev;
      (**(code **)(param_1[0x18] + 0x58))(param_1,peVar3,peVar3,peVar3->dmg,1);
    }
  }
  else {
    fVar1 = ABS(peVar3->speed);
    if (50.0 < fVar1) {
      fVar1 = 50.0;
    }
    if (*(float *)(iVar2 + 0x28) == 0.0) {
      *(float *)(iVar2 + 0x28) = fVar1 + *(float *)(iVar2 + 0x28);
    }
  }
  return;
}

/* 000d437c  CFuncTrackTrain::Use  (514 bytes)
 * undefined Use(undefined4 param_1, undefined4 param_2, int param_3, float param_4)
 */
/* CFuncTrackTrain::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void __thiscall
CFuncTrackTrain::Use
          (CFuncTrackTrain *this,undefined4 param_1,undefined4 param_2,int param_3,float param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  vec_t *pvVar4;
  vec_t *pvVar5;
  uint local_20;
  
  if (param_3 == 2) {
    fVar2 = param_4 * 0.25 +
            (float)((int)ROUND(this->pev->speed * 4.0) / (int)ROUND(*(float *)&this->field_0x70)) *
            0.25;
    fVar1 = 1.0;
    if ((fVar2 <= 1.0) && (fVar1 = fVar2, fVar2 < -1.0)) {
      fVar1 = -1.0;
    }
    if (((this->pev->spawnflags & 4) != 0) && (fVar1 < 0.0)) {
      fVar1 = 0.0;
    }
    this->pev->speed = fVar1 * *(float *)&this->field_0x70;
    Next(this);
    (*g_engfuncs.pfnAlertMessage)
              (at_aiconsole,"TRAIN(%s), speed to %.2f\n",
               gpGlobals->pStringBase + this->pev->targetname,(double)this->pev->speed);
  }
  else {
    local_20 = (uint)(this->pev->speed != 0.0);
    iVar3 = CBaseEntity::ShouldToggle(this,param_3,local_20);
    if (iVar3 != 0) {
      if (this->pev->speed == 0.0) {
        this->pev->speed = *(float *)&this->field_0x70 * *(float *)&this->field_0x74;
        Next(this);
      }
      else {
        this->pev->speed = 0.0;
        pvVar4 = (vec_t *)&g_vecZero;
        pvVar5 = this->pev->velocity;
        for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pvVar5 = *pvVar4;
          pvVar4 = pvVar4 + 1;
          pvVar5 = pvVar5 + 1;
        }
        pvVar4 = (vec_t *)&g_vecZero;
        pvVar5 = this->pev->avelocity;
        for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pvVar5 = *pvVar4;
          pvVar4 = pvVar4 + 1;
          pvVar5 = pvVar5 + 1;
        }
        StopSound(this);
        *(undefined4 *)&this->field_0xc = 0;
        *(undefined4 *)&this->field_0x10 = 0;
      }
    }
  }
  return;
}

/* 000d4610  CFuncTrackTrain::StopSound  (170 bytes)
 * undefined StopSound(void)
 */
/* CFuncTrackTrain::StopSound(void) */

void __thiscall CFuncTrackTrain::StopSound(CFuncTrackTrain *this)

{
  if ((*(int *)&this->field_0x94 != 0) && (this->pev->noise != 0)) {
    (*g_engfuncs.pfnPlaybackEvent)
              (10,this->pev->pContainingEntity,*(ushort *)&this->field_0xa8,0.0,(float *)&g_vecZero,
               (float *)&g_vecZero,0.0,0.0,(*(ushort *)&this->field_0x98 & 7) << 0xc,0,1,0);
    EMIT_SOUND_DYN((int)this->pev->pContainingEntity,3,"plats/ttrain_brake1.wav",
                   *(undefined4 *)&this->field_0x9c,0x3f4ccccd,0,100,0.5);
  }
  *(undefined4 *)&this->field_0x94 = 0;
  return;
}

/* 000d46bc  CFuncTrackTrain::UpdateSound  (477 bytes)
 * undefined UpdateSound(void)
 */
/* CFuncTrackTrain::UpdateSound(void) */

void __thiscall CFuncTrackTrain::UpdateSound(CFuncTrackTrain *this)

{
  int iVar1;
  
  if (this->pev->noise != 0) {
    iVar1 = (int)ROUND(this->pev->speed);
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    iVar1 = (iVar1 * 0x8c) / 1000 + 0x3c;
    if (*(int *)&this->field_0x94 == 0) {
      EMIT_SOUND_DYN((int)this->pev->pContainingEntity,3,"plats/ttrain_start1.wav",
                     *(undefined4 *)&this->field_0x9c,0x3f4ccccd,0,100,0.5);
      EMIT_SOUND_DYN((int)this->pev->pContainingEntity,6,gpGlobals->pStringBase + this->pev->noise,
                     *(undefined4 *)&this->field_0x9c,0x3f4ccccd,0,(int)ROUND((float)iVar1),0.5);
      *(undefined4 *)&this->field_0x94 = 1;
    }
    else {
      (*g_engfuncs.pfnPlaybackEvent)
                (10,this->pev->pContainingEntity,*(ushort *)&this->field_0xa8,0.0,
                 (float *)&g_vecZero,(float *)&g_vecZero,0.0,0.0,
                 (*(ushort *)&this->field_0x98 & 7) << 0xc |
                 ((int)ROUND((double)iVar1 * 0.1) & 0x3fU) << 6 |
                 (int)ROUND(*(float *)&this->field_0x9c * 40.0) & 0x3fU,0,0,0);
    }
  }
  return;
}

/* 000d489c  CFuncTrackTrain::Next  (1567 bytes)
 * undefined Next(void)
 */
/* CFuncTrackTrain::Next(void) */

void __thiscall CFuncTrackTrain::Next(CFuncTrackTrain *this)

{
  int *piVar1;
  CPathTrack *pCVar2;
  float fVar3;
  entvars_t *peVar4;
  int iVar5;
  CPathTrack *pCVar6;
  vec_t *pvVar7;
  float *pfVar8;
  vec_t *pvVar9;
  longdouble lVar10;
  vec_t vVar11;
  float fVar12;
  vec_t vVar13;
  float local_80;
  float local_7c [4];
  float local_6c [4];
  float local_5c;
  float local_58;
  float local_54;
  float local_4c [7];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  local_80 = 0.5;
  if (this->pev->speed == 0.0) {
    (*g_engfuncs.pfnAlertMessage)
              (at_aiconsole,"TRAIN(%s): Speed is 0\n",gpGlobals->pStringBase + this->pev->targetname
              );
LAB_000d493e:
    StopSound(this);
    return;
  }
  if (*(int *)&this->field_0x64 == 0) {
    (*g_engfuncs.pfnAlertMessage)
              (at_aiconsole,"TRAIN(%s): Lost path\n",gpGlobals->pStringBase + this->pev->targetname)
    ;
    goto LAB_000d493e;
  }
  UpdateSound(this);
  peVar4 = this->pev;
  local_2c = peVar4->origin[0];
  local_28 = peVar4->origin[1];
  local_24 = peVar4->origin[2] - *(float *)&this->field_0x6c;
  local_30 = this->pev->speed * 0.1;
  pCVar2 = CPathTrack::LookAhead(*(CPathTrack **)&this->field_0x64,&local_2c,local_30,1);
  local_24 = local_24 + *(float *)&this->field_0x6c;
  peVar4 = this->pev;
  local_5c = local_2c - peVar4->origin[0];
  local_58 = local_28 - peVar4->origin[1];
  local_54 = local_24 - peVar4->origin[2];
  local_4c[0] = local_5c * 10.0;
  local_4c[1] = local_58 * 10.0;
  local_4c[2] = local_54 * 10.0;
  pfVar8 = local_4c;
  pvVar7 = peVar4->velocity;
  for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pvVar7 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pvVar7 = pvVar7 + 1;
  }
  peVar4 = this->pev;
  local_5c = peVar4->origin[0];
  local_58 = peVar4->origin[1];
  local_54 = peVar4->origin[2] - *(float *)&this->field_0x6c;
  if (*(float *)&this->field_0x68 <= 0.0) {
    fVar3 = 100.0;
  }
  else {
    fVar3 = *(float *)&this->field_0x68;
  }
  CPathTrack::LookAhead(*(CPathTrack **)&this->field_0x64,&local_5c,fVar3,0);
  local_54 = local_54 + *(float *)&this->field_0x6c;
  peVar4 = this->pev;
  local_4c[0] = local_5c - peVar4->origin[0];
  local_4c[1] = local_58 - peVar4->origin[1];
  local_4c[2] = local_54 - peVar4->origin[2];
  UTIL_VecToAngles(local_6c,local_4c);
  local_6c[1] = local_6c[1] + 180.0;
  FixupAngles(local_6c);
  FixupAngles(this->pev->angles);
  if ((pCVar2 == (CPathTrack *)0x0) || ((local_4c[0] == 0.0 && (local_4c[1] == 0.0)))) {
    pvVar7 = this->pev->angles;
    pfVar8 = local_6c;
    for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar8 = *pvVar7;
      pvVar7 = pvVar7 + 1;
      pfVar8 = pfVar8 + 1;
    }
  }
  if ((((byte)this->pev->spawnflags ^ 1) & 1) == 0) {
    fVar3 = 0.0;
  }
  else {
    lVar10 = UTIL_AngleDistance(local_6c[0],this->pev->angles[0]);
    fVar3 = (float)lVar10;
  }
  lVar10 = UTIL_AngleDistance(local_6c[1],this->pev->angles[1]);
  this->pev->avelocity[1] = (float)(lVar10 * (longdouble)10.0);
  this->pev->avelocity[0] = (float)((longdouble)fVar3 * (longdouble)10.0);
  if (*(float *)&this->field_0xa0 == 0.0) goto LAB_000d4c62;
  if (-5.0 <= this->pev->avelocity[1]) {
    if (5.0 < this->pev->avelocity[1]) {
      vVar13 = this->pev->angles[2];
      fVar12 = *(float *)&this->field_0xa0 + *(float *)&this->field_0xa0;
      vVar11 = this->pev->angles[2];
      fVar3 = *(float *)&this->field_0xa0;
      goto LAB_000d4c0b;
    }
    vVar13 = this->pev->angles[2];
    lVar10 = UTIL_ApproachAngle(0.0,this->pev->angles[2],*(float *)&this->field_0xa0 * 4.0);
    lVar10 = UTIL_AngleDistance((float)lVar10,vVar13);
    peVar4 = this->pev;
    lVar10 = lVar10 * (longdouble)4.0;
  }
  else {
    vVar13 = this->pev->angles[2];
    fVar12 = *(float *)&this->field_0xa0 + *(float *)&this->field_0xa0;
    vVar11 = this->pev->angles[2];
    fVar3 = -*(float *)&this->field_0xa0;
LAB_000d4c0b:
    lVar10 = UTIL_ApproachAngle(fVar3,vVar11,fVar12);
    lVar10 = UTIL_AngleDistance((float)lVar10,vVar13);
    peVar4 = this->pev;
  }
  peVar4->avelocity[2] = (float)lVar10;
LAB_000d4c62:
  if (pCVar2 == (CPathTrack *)0x0) {
    StopSound(this);
    peVar4 = this->pev;
    local_7c[0] = local_2c - peVar4->origin[0];
    local_7c[1] = local_28 - peVar4->origin[1];
    local_7c[2] = local_24 - peVar4->origin[2];
    pfVar8 = local_7c;
    pvVar7 = peVar4->velocity;
    for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pvVar7 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pvVar7 = pvVar7 + 1;
    }
    pvVar7 = (vec_t *)&g_vecZero;
    pvVar9 = this->pev->avelocity;
    for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pvVar9 = *pvVar7;
      pvVar7 = pvVar7 + 1;
      pvVar9 = pvVar9 + 1;
    }
    peVar4 = this->pev;
    local_30 = SQRT(peVar4->velocity[2] * peVar4->velocity[2] +
                    peVar4->velocity[1] * peVar4->velocity[1] +
                    peVar4->velocity[0] * peVar4->velocity[0]);
    *(float *)&this->field_0xa4 = this->pev->speed;
    this->pev->speed = 0.0;
    if (local_30 <= 0.0) {
      DeadEnd(this);
      return;
    }
    local_80 = local_30 / *(float *)&this->field_0xa4;
    peVar4 = this->pev;
    local_7c[2] = *(float *)&this->field_0xa4 / local_30;
    local_7c[0] = local_7c[2] * peVar4->velocity[0];
    local_7c[1] = local_7c[2] * peVar4->velocity[1];
    local_7c[2] = local_7c[2] * peVar4->velocity[2];
    pfVar8 = local_7c;
    pvVar7 = peVar4->velocity;
    for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pvVar7 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pvVar7 = pvVar7 + 1;
    }
    *(undefined4 *)&this->field_0xc = 0xffff0000;
    *(code **)&this->field_0x10 = DeadEnd;
    iVar5 = 0;
  }
  else {
    if (pCVar2 != *(CPathTrack **)&this->field_0x64) {
      pCVar6 = pCVar2;
      if (this->pev->speed < 0.0) {
        pCVar6 = *(CPathTrack **)&this->field_0x64;
      }
      *(CPathTrack **)&this->field_0x64 = pCVar2;
      if (pCVar6->pev->message != 0) {
        FireTargets((int)(gpGlobals->pStringBase + pCVar6->pev->message),this,this,3,0);
        if ((pCVar6->pev->spawnflags & 2) != 0) {
          pCVar6->pev->message = 0;
        }
      }
      if ((pCVar6->pev->spawnflags & 8) != 0) {
        piVar1 = &this->pev->spawnflags;
        *piVar1 = *piVar1 | 2;
      }
      if (((this->pev->spawnflags & 2) != 0) && (pCVar6->pev->speed != 0.0)) {
        this->pev->speed = pCVar6->pev->speed;
        (*g_engfuncs.pfnAlertMessage)
                  (at_aiconsole,"TrackTrain %s speed to %4.2f\n",
                   gpGlobals->pStringBase + this->pev->targetname,(double)this->pev->speed);
      }
    }
    *(undefined4 *)&this->field_0xc = 0xffff0000;
    *(code **)&this->field_0x10 = Next;
    iVar5 = 1;
  }
  NextThink(this,local_80 + this->pev->ltime,iVar5);
  return;
}

/* 000d4ec8  CFuncTrackTrain::DeadEnd  (368 bytes)
 * undefined DeadEnd(void)
 */
/* CFuncTrackTrain::DeadEnd(void) */

void __thiscall CFuncTrackTrain::DeadEnd(CFuncTrackTrain *this)

{
  int *piVar1;
  CPathTrack *pCVar2;
  CPathTrack *this_00;
  vec_t *pvVar3;
  vec_t *pvVar4;
  int iVar5;
  
  this_00 = *(CPathTrack **)&this->field_0x64;
  (*g_engfuncs.pfnAlertMessage)
            (at_aiconsole,"TRAIN(%s): Dead end ",gpGlobals->pStringBase + this->pev->targetname);
  if (this_00 != (CPathTrack *)0x0) {
    pCVar2 = this_00;
    if (0.0 <= *(float *)&this->field_0xa4) {
      do {
        this_00 = pCVar2;
        iVar5 = 1;
        piVar1 = (int *)CPathTrack::GetNext(this_00);
        pCVar2 = (CPathTrack *)CPathTrack::ValidPath(this_00,piVar1,iVar5);
      } while (pCVar2 != (CPathTrack *)0x0);
    }
    else {
      do {
        this_00 = pCVar2;
        iVar5 = 1;
        piVar1 = (int *)CPathTrack::GetPrevious(this_00);
        pCVar2 = (CPathTrack *)CPathTrack::ValidPath(this_00,piVar1,iVar5);
      } while (pCVar2 != (CPathTrack *)0x0);
    }
  }
  pvVar3 = (vec_t *)&g_vecZero;
  pvVar4 = this->pev->velocity;
  for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pvVar4 = *pvVar3;
    pvVar3 = pvVar3 + 1;
    pvVar4 = pvVar4 + 1;
  }
  pvVar3 = (vec_t *)&g_vecZero;
  pvVar4 = this->pev->avelocity;
  for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pvVar4 = *pvVar3;
    pvVar3 = pvVar3 + 1;
    pvVar4 = pvVar4 + 1;
  }
  if (this_00 == (CPathTrack *)0x0) {
    (*g_engfuncs.pfnAlertMessage)(at_aiconsole,"\n");
  }
  else {
    (*g_engfuncs.pfnAlertMessage)
              (at_aiconsole,"at %s\n",gpGlobals->pStringBase + this_00->pev->targetname);
    if (this_00->pev->netname != 0) {
      FireTargets((int)(gpGlobals->pStringBase + this_00->pev->netname),this,this,3,0);
    }
  }
  return;
}

/* 000d503c  CFuncTrackTrain::SetControls  (194 bytes)
 * undefined SetControls(int param_1)
 */
/* CFuncTrackTrain::SetControls(entvars_s *) */

void __thiscall CFuncTrackTrain::SetControls(CFuncTrackTrain *this,int param_1)

{
  entvars_t *peVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float local_2c [4];
  float local_1c;
  float local_18;
  float local_14;
  
  peVar1 = this->pev;
  local_1c = *(float *)(param_1 + 8) - peVar1->oldorigin[0];
  local_18 = *(float *)(param_1 + 0xc) - peVar1->oldorigin[1];
  local_14 = *(float *)(param_1 + 0x10) - peVar1->oldorigin[2];
  local_2c[0] = *(float *)(param_1 + 0xdc) + local_1c;
  local_2c[1] = *(float *)(param_1 + 0xe0) + local_18;
  local_2c[2] = *(float *)(param_1 + 0xe4) + local_14;
  pfVar3 = local_2c;
  pfVar4 = (float *)&this->field_0x7c;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar4 = pfVar4 + 1;
  }
  local_2c[0] = *(float *)(param_1 + 0xe8) + local_1c;
  local_2c[1] = *(float *)(param_1 + 0xec) + local_18;
  local_2c[2] = *(float *)(param_1 + 0xf0) + local_14;
  pfVar3 = local_2c;
  pfVar4 = (float *)&this->field_0x88;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar4 = pfVar4 + 1;
  }
  return;
}

/* 000d5100  CFuncTrackTrain::OnControls  (308 bytes)
 * undefined4 OnControls(int param_1)
 */
/* CFuncTrackTrain::OnControls(entvars_s *) */

undefined4 __thiscall CFuncTrackTrain::OnControls(CFuncTrackTrain *this,int param_1)

{
  entvars_t *peVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  peVar1 = this->pev;
  fVar2 = *(float *)(param_1 + 8) - peVar1->origin[0];
  fVar3 = *(float *)(param_1 + 0xc) - peVar1->origin[1];
  fVar4 = *(float *)(param_1 + 0x10) - peVar1->origin[2];
  if ((this->pev->spawnflags & 2) == 0) {
    UTIL_MakeVectors(this->pev->angles);
    fVar6 = fVar4 * gpGlobals->v_forward[2] +
            fVar3 * gpGlobals->v_forward[1] + fVar2 * gpGlobals->v_forward[0];
    fVar5 = -(fVar4 * gpGlobals->v_right[2] +
             fVar3 * gpGlobals->v_right[1] + fVar2 * gpGlobals->v_right[0]);
    fVar2 = fVar4 * gpGlobals->v_up[2] + fVar3 * gpGlobals->v_up[1] + fVar2 * gpGlobals->v_up[0];
    if ((((*(float *)&this->field_0x7c <= fVar6) && (*(float *)&this->field_0x80 <= fVar5)) &&
        (*(float *)&this->field_0x84 <= fVar2)) &&
       (((fVar6 <= *(float *)&this->field_0x88 && (fVar5 <= *(float *)&this->field_0x8c)) &&
        (fVar2 <= *(float *)&this->field_0x90)))) {
      return 1;
    }
  }
  return 0;
}

/* 000d5234  CFuncTrackTrain::Find  (471 bytes)
 * undefined Find(void)
 */
/* CFuncTrackTrain::Find(void) */

void __thiscall CFuncTrackTrain::Find(CFuncTrackTrain *this)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  int *piVar3;
  int iVar4;
  vec_t *pvVar5;
  vec_t *pvVar6;
  vec_t avStack_6c [4];
  float local_5c;
  float local_58;
  float local_54;
  vec_t local_4c [4];
  float local_3c;
  float local_38;
  float local_34;
  float local_2c;
  float local_28;
  float local_24;
  
  peVar2 = (*g_engfuncs.pfnFindEntityByString)
                     ((edict_t *)0x0,"targetname",gpGlobals->pStringBase + this->pev->target);
  piVar3 = (int *)CPathTrack::Instance((int)peVar2);
  *(int **)&this->field_0x64 = piVar3;
  if (piVar3 != (int *)0x0) {
    piVar3 = (int *)*piVar3;
    iVar4 = strcmp(gpGlobals->pStringBase + *piVar3,"path_track");
    if (iVar4 == 0) {
      local_3c = (float)piVar3[2];
      local_38 = (float)piVar3[3];
      local_24 = (float)piVar3[4] + *(float *)&this->field_0x6c;
      local_34 = local_24 - *(float *)&this->field_0x6c;
      local_2c = local_3c;
      local_28 = local_38;
      CPathTrack::LookAhead
                (*(CPathTrack **)&this->field_0x64,&local_3c,*(float *)&this->field_0x68,0);
      local_34 = local_34 + *(float *)&this->field_0x6c;
      local_5c = local_3c - local_2c;
      local_58 = local_38 - local_28;
      local_54 = local_34 - local_24;
      UTIL_VecToAngles(local_4c,&local_5c);
      peVar1 = this->pev;
      pvVar5 = local_4c;
      pvVar6 = avStack_6c;
      for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pvVar6 = *pvVar5;
        pvVar5 = pvVar5 + 1;
        pvVar6 = pvVar6 + 1;
      }
      pvVar5 = avStack_6c;
      pvVar6 = peVar1->angles;
      for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pvVar6 = *pvVar5;
        pvVar5 = pvVar5 + 1;
        pvVar6 = pvVar6 + 1;
      }
      this->pev->angles[1] = this->pev->angles[1] + 180.0;
      if ((this->pev->spawnflags & 1) != 0) {
        this->pev->angles[0] = 0.0;
      }
      UTIL_SetOrigin((int)this->pev,&local_2c);
      NextThink(this,this->pev->ltime + 0.1,0);
      *(undefined4 *)&this->field_0xc = 0xffff0000;
      *(code **)&this->field_0x10 = Next;
      this->pev->speed = *(float *)&this->field_0x78;
      UpdateSound(this);
    }
    else {
      (*g_engfuncs.pfnAlertMessage)(at_error,"func_track_train must be on a path of path_track\n");
      *(undefined4 *)&this->field_0x64 = 0;
    }
  }
  return;
}

/* 000d5410  CFuncTrackTrain::NearestPath  (646 bytes)
 * undefined NearestPath(void)
 */
/* CFuncTrackTrain::NearestPath(void) */

void __thiscall CFuncTrackTrain::NearestPath(CFuncTrackTrain *this)

{
  entvars_t *peVar1;
  entvars_t *peVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  CPathTrack *pCVar10;
  float local_54;
  CPathTrack *local_50;
  
  pCVar10 = (CPathTrack *)0x0;
  local_50 = (CPathTrack *)0x0;
  local_54 = 1024.0;
  while (pCVar10 = (CPathTrack *)
                   UTIL_FindEntityInSphere((int *)pCVar10,this->pev->origin,0x44800000),
        pCVar10 != (CPathTrack *)0x0) {
    if (((pCVar10->pev->flags & 0x28U) == 0) &&
       (iVar9 = strcmp(gpGlobals->pStringBase + pCVar10->pev->classname,"path_track"), iVar9 == 0))
    {
      peVar1 = this->pev;
      peVar2 = pCVar10->pev;
      fVar3 = peVar1->origin[0] - peVar2->origin[0];
      fVar5 = peVar1->origin[1] - peVar2->origin[1];
      fVar4 = peVar1->origin[2] - peVar2->origin[2];
      fVar3 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3);
      if (fVar3 < local_54) {
        local_54 = fVar3;
        local_50 = pCVar10;
      }
    }
  }
  if (local_50 == (CPathTrack *)0x0) {
    (*g_engfuncs.pfnAlertMessage)(at_console,"Can\'t find a nearby track !!!\n");
    *(undefined4 *)&this->field_0xc = 0;
    *(undefined4 *)&this->field_0x10 = 0;
  }
  else {
    (*g_engfuncs.pfnAlertMessage)
              (at_aiconsole,"TRAIN: %s, Nearest track is %s\n",
               gpGlobals->pStringBase + this->pev->targetname,
               gpGlobals->pStringBase + local_50->pev->targetname);
    pCVar10 = (CPathTrack *)CPathTrack::GetNext(local_50);
    if (pCVar10 != (CPathTrack *)0x0) {
      peVar1 = this->pev;
      peVar2 = pCVar10->pev;
      fVar3 = peVar1->origin[0] - peVar2->origin[0];
      fVar5 = peVar1->origin[1] - peVar2->origin[1];
      fVar4 = peVar1->origin[2] - peVar2->origin[2];
      peVar1 = this->pev;
      peVar2 = local_50->pev;
      fVar6 = peVar1->origin[0] - peVar2->origin[0];
      fVar8 = peVar1->origin[1] - peVar2->origin[1];
      fVar7 = peVar1->origin[2] - peVar2->origin[2];
      if (SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3) <
          SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6)) {
        local_50 = pCVar10;
      }
    }
    *(CPathTrack **)&this->field_0x64 = local_50;
    if (this->pev->speed != 0.0) {
      NextThink(this,this->pev->ltime + 0.1,0);
      *(undefined4 *)&this->field_0xc = 0xffff0000;
      *(code **)&this->field_0x10 = Next;
    }
  }
  return;
}

/* 000d569c  CFuncTrackTrain::OverrideReset  (88 bytes)
 * undefined OverrideReset(void)
 */
/* CFuncTrackTrain::OverrideReset(void) */

void __thiscall CFuncTrackTrain::OverrideReset(CFuncTrackTrain *this)

{
  NextThink(this,this->pev->ltime + 0.1,0);
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = NearestPath;
  return;
}

/* 000d56f4  CFuncTrackTrain::Instance  (100 bytes)
 * undefined4 Instance(int param_1)
 */
/* CFuncTrackTrain::Instance(edict_s *) */

undefined4 CFuncTrackTrain::Instance(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(gpGlobals->pStringBase + *(int *)(param_1 + 0x80U & (param_1 == 0) - 1),
                 "func_tracktrain");
  if (iVar1 == 0) {
    uVar2 = 0;
    if (param_1 != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x7c);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

/* 000d575c  CFuncTrackTrain::Spawn  (520 bytes)
 * undefined Spawn(void)
 */
/* CFuncTrackTrain::Spawn(void) */

void __thiscall CFuncTrackTrain::Spawn(CFuncTrackTrain *this)

{
  int iVar1;
  vec_t *pvVar2;
  vec_t *pvVar3;
  
  if (this->pev->speed == 0.0) {
    *(undefined4 *)&this->field_0x70 = 0x42c80000;
  }
  else {
    *(float *)&this->field_0x70 = this->pev->speed;
  }
  this->pev->speed = 0.0;
  pvVar2 = (vec_t *)&g_vecZero;
  pvVar3 = this->pev->velocity;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar3 = *pvVar2;
    pvVar2 = pvVar2 + 1;
    pvVar3 = pvVar3 + 1;
  }
  pvVar2 = (vec_t *)&g_vecZero;
  pvVar3 = this->pev->avelocity;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar3 = *pvVar2;
    pvVar2 = pvVar2 + 1;
    pvVar3 = pvVar3 + 1;
  }
  this->pev->impulse = (int)ROUND(*(float *)&this->field_0x70);
  *(undefined4 *)&this->field_0x74 = 0x3f800000;
  if (this->pev->target == 0) {
    (*g_engfuncs.pfnAlertMessage)(at_console,"FuncTrain with no target");
  }
  if ((this->pev->spawnflags & 8) == 0) {
    this->pev->solid = 4;
  }
  else {
    this->pev->solid = 0;
  }
  this->pev->movetype = 7;
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  UTIL_SetSize((int)this->pev,this->pev->mins,this->pev->maxs);
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  pvVar2 = this->pev->origin;
  pvVar3 = this->pev->oldorigin;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar3 = *pvVar2;
    pvVar2 = pvVar2 + 1;
    pvVar3 = pvVar3 + 1;
  }
  pvVar2 = this->pev->mins;
  pvVar3 = (vec_t *)&this->field_0x7c;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar3 = *pvVar2;
    pvVar2 = pvVar2 + 1;
    pvVar3 = pvVar3 + 1;
  }
  pvVar2 = this->pev->maxs;
  pvVar3 = (vec_t *)&this->field_0x88;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar3 = *pvVar2;
    pvVar2 = pvVar2 + 1;
    pvVar3 = pvVar3 + 1;
  }
  *(float *)&this->field_0x90 = *(float *)&this->field_0x90 + 72.0;
  NextThink(this,this->pev->ltime + 0.1,0);
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = Find;
  (*this->vtable[10])(this);
  return;
}

/* 000d5968  CFuncTrackTrain::Precache  (282 bytes)
 * undefined Precache(void)
 */
/* CFuncTrackTrain::Precache(void) */

void __thiscall CFuncTrackTrain::Precache(CFuncTrackTrain *this)

{
  ushort uVar1;
  char *s;
  
  if (*(float *)&this->field_0x9c == 0.0) {
    *(undefined4 *)&this->field_0x9c = 0x3f800000;
  }
  switch(*(undefined4 *)&this->field_0x98) {
  case 1:
    s = "plats/ttrain1.wav";
    break;
  case 2:
    s = "plats/ttrain2.wav";
    break;
  case 3:
    s = "plats/ttrain3.wav";
    break;
  case 4:
    s = "plats/ttrain4.wav";
    break;
  case 5:
    s = "plats/ttrain6.wav";
    break;
  case 6:
    s = "plats/ttrain7.wav";
    break;
  default:
    this->pev->noise = 0;
    goto LAB_000d5a70;
  }
  (*g_engfuncs.pfnPrecacheSound)(s);
  this->pev->noise = (int)s - (int)gpGlobals->pStringBase;
LAB_000d5a70:
  (*g_engfuncs.pfnPrecacheSound)("plats/ttrain_brake1.wav");
  (*g_engfuncs.pfnPrecacheSound)("plats/ttrain_start1.wav");
  uVar1 = (*g_engfuncs.pfnPrecacheEvent)(1,"events/train.sc");
  *(ushort *)&this->field_0xa8 = uVar1;
  return;
}

/* 000d79ec  CFuncTrackTrain::SetTrack  (73 bytes)
 * undefined SetTrack(CPathTrack * param_1)
 */
/* CFuncTrackTrain::SetTrack(CPathTrack *) */

void __thiscall CFuncTrackTrain::SetTrack(CFuncTrackTrain *this,CPathTrack *param_1)

{
  entvars_t *peVar1;
  CPathTrack *pCVar2;
  vec_t local_1c;
  vec_t local_18;
  vec_t local_14;
  
  peVar1 = this->pev;
  local_1c = peVar1->origin[0];
  local_18 = peVar1->origin[1];
  local_14 = peVar1->origin[2];
  pCVar2 = CPathTrack::Nearest(param_1,&local_1c);
  *(CPathTrack **)&this->field_0x64 = pCVar2;
  return;
}

/* 000d7a38  CFuncTrackTrain::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CFuncTrackTrain::ObjectCaps(void) */

undefined4 CFuncTrackTrain::ObjectCaps(void)

{
  return 0x40;
}

