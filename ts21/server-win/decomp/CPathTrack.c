/* mp.dll - CPathTrack (10 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100251b0  CPathTrack::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CPathTrack::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CPathTrack_10094d70,(int)param_1,0x10094cc8,5);
  return;
}

/* 100251e0  CPathTrack::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CPathTrack::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CPathTrack_10094d70,(int)param_1,0x10094cc8,5);
  return;
}

/* 10025220  CPathTrack::KeyValue  (73 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CPathTrack::KeyValue(CPathTrack *this,int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  iVar1 = 8;
  bVar4 = true;
  pcVar2 = *(char **)(param_1 + 4);
  pcVar3 = s_altpath_10094d7c;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x58 = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 10025270  CPathTrack::Use  (156 bytes)
 * undefined Use(undefined4 param_1, undefined4 param_2, int param_3)
 */
void __thiscall CPathTrack::Use(CPathTrack *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  entvars_t *peVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)&this->field_0x64 == 0) {
    uVar3 = ~this->pev->spawnflags & 1;
    iVar2 = CBaseEntity::ShouldToggle(param_3,uVar3);
    if (iVar2 != 0) {
      peVar1 = this->pev;
      if (uVar3 != 0) {
        peVar1->spawnflags = peVar1->spawnflags | 1;
        return;
      }
      peVar1->spawnflags = peVar1->spawnflags & 0xfffffffe;
    }
  }
  else {
    uVar3 = (uint)~this->pev->spawnflags >> 0xf & 1;
    iVar2 = CBaseEntity::ShouldToggle(param_3,uVar3);
    if (iVar2 != 0) {
      peVar1 = this->pev;
      if (uVar3 != 0) {
        peVar1->spawnflags = peVar1->spawnflags | 0x8000;
        return;
      }
      peVar1->spawnflags = peVar1->spawnflags & 0xffff7fff;
      return;
    }
  }
  return;
}

/* 10025310  CPathTrack::Link  (218 bytes)
 * undefined Link(int param_1)
 * called by: CPathTrack::Activate
 */
void __fastcall CPathTrack::Link(int param_1)

{
  edict_t *peVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uStack0000000c;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x1c8);
  if (iVar2 != 0) {
    peVar1 = (*g_engfuncs.pfnFindEntityByString)
                       ((edict_t *)0x0,s_targetname_100915e4,gpGlobals->pStringBase + iVar2);
    if (peVar1 != (edict_t *)0x0) {
      iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar1);
      if (iVar2 != 0) {
        pvVar3 = (void *)FUN_10025af0((int)peVar1);
        *(void **)(param_1 + 0x5c) = pvVar3;
        if (pvVar3 != (void *)0x0) {
          FUN_100255e0(pvVar3,param_1);
        }
        goto LAB_10025396;
      }
    }
    (*g_engfuncs.pfnAlertMessage)(at_console,s_Dead_end_link__s_10094d84);
  }
LAB_10025396:
  if (*(int *)(param_1 + 0x58) != 0) {
    peVar1 = (*g_engfuncs.pfnFindEntityByString)
                       ((edict_t *)0x0,s_targetname_100915e4,
                        gpGlobals->pStringBase + *(int *)(param_1 + 0x58));
    if (peVar1 != (edict_t *)0x0) {
      uStack0000000c = 0x100253c8;
      iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar1);
      if (iVar2 != 0) {
        pvVar3 = (void *)FUN_10025af0((int)peVar1);
        *(void **)(param_1 + 100) = pvVar3;
        if (pvVar3 != (void *)0x0) {
          FUN_100255e0(pvVar3,param_1);
        }
      }
    }
  }
  return;
}

/* 100253f0  CPathTrack::Spawn  (102 bytes)
 * undefined Spawn()
 */
void __fastcall CPathTrack::Spawn(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 1;
  FUN_10067970();
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}

/* 10025460  CPathTrack::Activate  (19 bytes)
 * undefined Activate()
 */
void __fastcall CPathTrack::Activate(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 4) + 0x1cc) != 0) {
    Link(param_1);
    return;
  }
  return;
}

/* 100255a0  CPathTrack::GetNext  (29 bytes)
 * int GetNext(int param_1)
 * called by: CFuncTrackAuto::UpdateAutoTargets, CFuncTrackAuto::Use, CFuncTrackTrain::DeadEnd, CFuncTrackTrain::NearestPath, CPathTrack::LookAhead, CPathTrack::Nearest
 */
int __fastcall CPathTrack::GetNext(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 100);
  if (((iVar2 == 0) || (uVar1 = *(uint *)(*(int *)(param_1 + 4) + 0x1a0), -1 < (char)(uVar1 >> 8)))
     || ((uVar1 & 4) != 0)) {
    iVar2 = *(int *)(param_1 + 0x5c);
  }
  return iVar2;
}

/* 10025650  CPathTrack::LookAhead  (967 bytes)
 * int LookAhead(float * param_1, float param_2, int param_3)
 * called by: CFuncTrackTrain::Find, CFuncTrackTrain::Next
 */
int __thiscall CPathTrack::LookAhead(CPathTrack *this,float *param_1,float param_2,int param_3)

{
  entvars_t *peVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int extraout_ECX;
  float fVar8;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar9;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 fVar10;
  float10 extraout_ST1;
  float local_24;
  float local_20;
  float local_1c;
  
  local_24 = *param_1;
  local_20 = param_1[1];
  local_1c = param_1[2];
  if (param_2 < 0.0) {
    param_2 = -param_2;
    fVar8 = local_20;
    do {
      if (param_2 <= 0.0) {
        *param_1 = local_24;
        param_1[1] = fVar8;
        param_1[2] = local_1c;
        return (int)this;
      }
      peVar1 = this->pev;
      fVar2 = peVar1->origin[0] - local_24;
      fVar3 = peVar1->origin[1] - local_20;
      fVar4 = peVar1->origin[2] - local_1c;
      fVar5 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4);
      if (fVar5 == 0.0) {
        iVar7 = param_3;
        iVar6 = FUN_100255c0((int)this);
        iVar7 = FUN_10025480(iVar6,iVar7);
        if (iVar7 == 0) {
          if (param_3 != 0) {
            return 0;
          }
          iVar7 = GetNext((int)this);
          FUN_100254b0(iVar7,(int)this,param_1,param_2);
          return 0;
        }
      }
      else {
        if (param_2 < fVar5) {
          fVar5 = param_2 / fVar5;
          *param_1 = fVar2 * fVar5 + local_24;
          param_1[1] = fVar3 * fVar5 + local_20;
          param_1[2] = fVar4 * fVar5 + local_1c;
          return (int)this;
        }
        local_24 = peVar1->origin[0];
        fVar8 = peVar1->origin[1];
        local_1c = peVar1->origin[2];
        param_2 = param_2 - fVar5;
        *param_1 = local_24;
        param_1[1] = fVar8;
        param_1[2] = local_1c;
        iVar7 = param_3;
        iVar6 = FUN_100255c0((int)this);
        iVar7 = FUN_10025480(iVar6,iVar7);
        local_20 = fVar8;
        if (iVar7 == 0) {
          return 0;
        }
      }
      this = (CPathTrack *)FUN_100255c0((int)this);
    } while( true );
  }
  if (0.0 < param_2) {
    do {
      iVar7 = param_3;
      iVar6 = GetNext((int)this);
      iVar7 = FUN_10025480(iVar6,iVar7);
      if (iVar7 == 0) {
        fVar8 = (float)extraout_ST0;
        if (param_3 != 0) {
          return 0;
        }
        iVar7 = FUN_100255c0((int)this);
        FUN_100254b0(iVar7,(int)this,param_1,fVar8);
        return 0;
      }
      iVar7 = GetNext((int)this);
      iVar7 = *(int *)(iVar7 + 4);
      fVar2 = *(float *)(iVar7 + 8) - local_24;
      fVar3 = *(float *)(iVar7 + 0xc) - local_20;
      fVar9 = (float10)*(float *)(iVar7 + 0x10) - (float10)local_1c;
      fVar8 = (float)fVar9;
      fVar9 = SQRT((float10)fVar2 * (float10)fVar2 +
                   (float10)fVar3 * (float10)fVar3 + fVar9 * (float10)fVar8);
      fVar10 = extraout_ST0_00;
      if (fVar9 == (float10)0.0) {
        iVar7 = param_3;
        iVar6 = GetNext(extraout_ECX);
        iVar6 = GetNext(iVar6);
        iVar7 = FUN_10025480(iVar6,iVar7);
        fVar9 = extraout_ST0_01;
        fVar10 = extraout_ST1;
        if (iVar7 == 0) {
          if (extraout_ST1 != (float10)param_2) {
            return (int)this;
          }
          return 0;
        }
      }
      if (fVar10 < fVar9) {
        fVar10 = fVar10 / fVar9;
        *param_1 = (float)((float10)fVar2 * fVar10 + (float10)local_24);
        param_1[1] = (float)((float10)fVar3 * fVar10) + local_20;
        param_1[2] = (float)((float10)fVar8 * fVar10) + local_1c;
        return (int)this;
      }
      iVar7 = GetNext((int)this);
      iVar7 = *(int *)(iVar7 + 4);
      local_24 = *(float *)(iVar7 + 8);
      local_20 = *(float *)(iVar7 + 0xc);
      local_1c = *(float *)(iVar7 + 0x10);
      this = (CPathTrack *)GetNext((int)this);
      *param_1 = local_24;
      param_1[1] = local_20;
      param_1[2] = local_1c;
    } while ((float10)0.0 < extraout_ST0_02);
  }
  *param_1 = local_24;
  param_1[1] = local_20;
  param_1[2] = local_1c;
  return (int)this;
}

/* 10025a20  CPathTrack::Nearest  (195 bytes)
 * int Nearest(float param_1, float param_2)
 * called by: CFuncTrackChange::Find, CFuncTrackChange::HitBottom, CFuncTrackChange::HitTop
 */
int __thiscall CPathTrack::Nearest(CPathTrack *this,float param_1,float param_2)

{
  entvars_t *peVar1;
  float fVar2;
  float fVar3;
  CPathTrack *pCVar4;
  int iVar5;
  CPathTrack *pCVar6;
  float local_4;
  
  peVar1 = this->pev;
  fVar2 = param_1 - peVar1->origin[0];
  fVar3 = param_2 - peVar1->origin[1];
  local_4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  pCVar4 = (CPathTrack *)GetNext((int)this);
  iVar5 = 0;
  pCVar6 = this;
  for (; (pCVar4 != (CPathTrack *)0x0 && (pCVar4 != this));
      pCVar4 = (CPathTrack *)GetNext((int)pCVar4)) {
    iVar5 = iVar5 + 1;
    if (9999 < iVar5) {
      (*g_engfuncs.pfnAlertMessage)
                (at_error,s_Bad_sequence_of_path_tracks_from_10094d98,
                 gpGlobals->pStringBase + peVar1->targetname);
      return 0;
    }
    fVar2 = param_1 - pCVar4->pev->origin[0];
    fVar3 = param_2 - pCVar4->pev->origin[1];
    fVar2 = SQRT(fVar2 * fVar2 + fVar3 * fVar3);
    if (fVar2 < local_4) {
      pCVar6 = pCVar4;
      local_4 = fVar2;
    }
  }
  return (int)pCVar6;
}

