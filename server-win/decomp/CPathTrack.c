/* mp.dll - CPathTrack (10 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1002d2d0  CPathTrack::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CPathTrack::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CPathTrack_100a00c0,(int)param_1,0x100a0018,5);
  return;
}

/* 1002d300  CPathTrack::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CPathTrack::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CPathTrack_100a00c0,(int)param_1,&DAT_100a0018,5);
  return;
}

/* 1002d340  CPathTrack::KeyValue  (111 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CPathTrack::KeyValue(CPathTrack *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  pcVar4 = s_altpath_100a00cc;
  pbVar2 = *(byte **)(param_1 + 4);
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_1002d37a:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_1002d37f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_1002d37a;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002d37f:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x58 = iVar3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 1002d3b0  CPathTrack::Use  (156 bytes)
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

/* 1002d450  CPathTrack::Link  (218 bytes)
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
                       ((edict_t *)0x0,s_targetname_1009c68c,gpGlobals->pStringBase + iVar2);
    if (peVar1 != (edict_t *)0x0) {
      iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar1);
      if (iVar2 != 0) {
        pvVar3 = (void *)FUN_1002dcb0((int)peVar1);
        *(void **)(param_1 + 0x5c) = pvVar3;
        if (pvVar3 != (void *)0x0) {
          FUN_1002d760(pvVar3,param_1);
        }
        goto LAB_1002d4d6;
      }
    }
    (*g_engfuncs.pfnAlertMessage)(at_console,s_Dead_end_link__s_100a00d4);
  }
LAB_1002d4d6:
  if (*(int *)(param_1 + 0x58) != 0) {
    peVar1 = (*g_engfuncs.pfnFindEntityByString)
                       ((edict_t *)0x0,s_targetname_1009c68c,
                        gpGlobals->pStringBase + *(int *)(param_1 + 0x58));
    if (peVar1 != (edict_t *)0x0) {
      uStack0000000c = 0x1002d508;
      iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar1);
      if (iVar2 != 0) {
        pvVar3 = (void *)FUN_1002dcb0((int)peVar1);
        *(void **)(param_1 + 100) = pvVar3;
        if (pvVar3 != (void *)0x0) {
          FUN_1002d760(pvVar3,param_1);
        }
      }
    }
  }
  return;
}

/* 1002d530  CPathTrack::Spawn  (102 bytes)
 * undefined Spawn()
 */
void __fastcall CPathTrack::Spawn(int param_1)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_18 = 0x41000000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 1;
  uStack_14 = 0x41000000;
  uStack_10 = 0x41000000;
  uStack_c = 0xc1000000;
  uStack_8 = 0xc1000000;
  uStack_4 = 0xc1000000;
  UTIL_SetSize(*(int *)(param_1 + 4),&uStack_c,&uStack_18);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}

/* 1002d5a0  CPathTrack::Activate  (19 bytes)
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

/* 1002d720  CPathTrack::GetNext  (30 bytes)
 * int GetNext(int param_1)
 * called by: CFuncTrackAuto::UpdateAutoTargets, CFuncTrackAuto::Use, CFuncTrackTrain::DeadEnd, CFuncTrackTrain::NearestPath, CPathTrack::LookAhead, CPathTrack::Nearest
 */
int __fastcall CPathTrack::GetNext(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 100);
  if (((iVar2 == 0) || (uVar1 = *(uint *)(*(int *)(param_1 + 4) + 0x1a0), (uVar1 & 0x8000) == 0)) ||
     ((uVar1 & 4) != 0)) {
    iVar2 = *(int *)(param_1 + 0x5c);
  }
  return iVar2;
}

/* 1002d7d0  CPathTrack::LookAhead  (1009 bytes)
 * int LookAhead(float * param_1, float param_2, int param_3)
 * called by: CFuncTrackTrain::Find, CFuncTrackTrain::Next
 */
int __thiscall CPathTrack::LookAhead(CPathTrack *this,float *param_1,float param_2,int param_3)

{
  entvars_t *peVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float local_24;
  float local_20;
  float local_1c;
  Vector local_18;
  Vector local_c;
  
  local_1c = param_1[2];
  local_24 = *param_1;
  fVar5 = param_1[1];
  fVar6 = param_2;
  if (param_2 < 0.0) {
    param_2 = -param_2;
    local_20 = fVar5;
    do {
      if (param_2 <= 0.0) {
        *param_1 = local_24;
        param_1[1] = fVar5;
        param_1[2] = local_1c;
        return (int)this;
      }
      peVar1 = this->pev;
      local_18.x = peVar1->origin[0] - local_24;
      local_18.y = peVar1->origin[1] - local_20;
      local_18.z = peVar1->origin[2] - local_1c;
      fVar6 = SQRT(local_18.x * local_18.x + local_18.y * local_18.y + local_18.z * local_18.z);
      if (fVar6 == 0.0) {
        iVar4 = param_3;
        iVar3 = FUN_1002d740((int)this);
        iVar4 = FUN_1002d5c0(iVar3,iVar4);
        if (iVar4 == 0) {
          if (param_3 != 0) {
            return 0;
          }
          iVar4 = GetNext((int)this);
          FUN_1002d5f0(iVar4,(int)this,param_1,param_2);
          return 0;
        }
      }
      else {
        if (param_2 < fVar6) {
          fVar6 = param_2 / fVar6;
          local_c.x = local_18.x * fVar6;
          local_c.y = local_18.y * fVar6;
          local_18.x = local_c.x + local_24;
          local_18.y = local_c.y + local_20;
          local_18.z = fVar6 * local_18.z + local_1c;
          Vector::Vector(&local_c,&local_18.x);
          *param_1 = local_c.x;
          param_1[1] = local_c.y;
          param_1[2] = local_c.z;
          return (int)this;
        }
        local_24 = peVar1->origin[0];
        fVar5 = peVar1->origin[1];
        local_1c = peVar1->origin[2];
        param_2 = param_2 - fVar6;
        *param_1 = local_24;
        param_1[1] = fVar5;
        param_1[2] = local_1c;
        iVar4 = param_3;
        iVar3 = FUN_1002d740((int)this);
        iVar4 = FUN_1002d5c0(iVar3,iVar4);
        local_20 = fVar5;
        if (iVar4 == 0) {
          return 0;
        }
      }
      this = (CPathTrack *)FUN_1002d740((int)this);
    } while( true );
  }
  while( true ) {
    if (fVar6 <= 0.0) {
      *param_1 = local_24;
      param_1[1] = fVar5;
      param_1[2] = local_1c;
      return (int)this;
    }
    iVar4 = param_3;
    iVar3 = GetNext((int)this);
    iVar4 = FUN_1002d5c0(iVar3,iVar4);
    if (iVar4 == 0) {
      if (param_3 == 0) {
        iVar4 = FUN_1002d740((int)this);
        FUN_1002d5f0(iVar4,(int)this,param_1,fVar6);
      }
      return 0;
    }
    iVar4 = GetNext((int)this);
    iVar4 = *(int *)(iVar4 + 4);
    local_c.x = *(float *)(iVar4 + 8) - local_24;
    local_c.y = *(float *)(iVar4 + 0xc) - fVar5;
    local_c.z = *(float *)(iVar4 + 0x10) - local_1c;
    Vector::Vector(&local_18,&local_c.x);
    fVar2 = SQRT(local_18.x * local_18.x + local_18.y * local_18.y + local_18.z * local_18.z);
    if (fVar2 == 0.0) {
      iVar4 = param_3;
      iVar3 = GetNext((int)this);
      iVar3 = GetNext(iVar3);
      iVar4 = FUN_1002d5c0(iVar3,iVar4);
      if (iVar4 == 0) {
        if (fVar6 != param_2) {
          return (int)this;
        }
        return 0;
      }
    }
    if (fVar6 < fVar2) break;
    iVar4 = GetNext((int)this);
    iVar4 = *(int *)(iVar4 + 4);
    local_24 = *(float *)(iVar4 + 8);
    fVar5 = *(float *)(iVar4 + 0xc);
    local_1c = *(float *)(iVar4 + 0x10);
    this = (CPathTrack *)GetNext((int)this);
    *param_1 = local_24;
    param_1[1] = fVar5;
    param_1[2] = local_1c;
    fVar6 = fVar6 - fVar2;
  }
  fVar6 = fVar6 / fVar2;
  local_c.x = local_18.x * fVar6;
  local_c.y = local_18.y * fVar6;
  local_18.x = local_c.x + local_24;
  local_18.y = local_c.y + fVar5;
  local_18.z = fVar6 * local_18.z + local_1c;
  Vector::Vector(&local_c,&local_18.x);
  *param_1 = local_c.x;
  param_1[1] = local_c.y;
  param_1[2] = local_c.z;
  return (int)this;
}

/* 1002dbd0  CPathTrack::Nearest  (209 bytes)
 * int Nearest(float param_1, float param_2)
 * called by: CFuncTrackChange::Find, CFuncTrackChange::HitBottom, CFuncTrackChange::HitTop
 */
int __thiscall CPathTrack::Nearest(CPathTrack *this,float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  CPathTrack *pCVar3;
  CPathTrack *pCVar4;
  int iVar5;
  float local_10;
  
  fVar1 = param_1 - this->pev->origin[0];
  fVar2 = param_2 - this->pev->origin[1];
  local_10 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  pCVar3 = (CPathTrack *)GetNext((int)this);
  iVar5 = 0;
  pCVar4 = this;
  for (; (pCVar3 != (CPathTrack *)0x0 && (pCVar3 != this));
      pCVar3 = (CPathTrack *)GetNext((int)pCVar3)) {
    iVar5 = iVar5 + 1;
    if (9999 < iVar5) {
      (*g_engfuncs.pfnAlertMessage)
                (at_error,s_Bad_sequence_of_path_tracks_from_100a00e8,
                 gpGlobals->pStringBase + this->pev->targetname);
      return 0;
    }
    fVar1 = param_1 - pCVar3->pev->origin[0];
    fVar2 = param_2 - pCVar3->pev->origin[1];
    fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
    if (fVar1 < local_10) {
      pCVar4 = pCVar3;
      local_10 = fVar1;
    }
  }
  return (int)pCVar4;
}

