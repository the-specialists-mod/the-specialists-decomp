/* ts_i386.so - CPathTrack (15 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000d10a4  CPathTrack::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CPathTrack::Save(CSave &) */

undefined4 __thiscall CPathTrack::Save(CPathTrack *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CPathTrack",(int)this,(int *)m_SaveData,5);
  }
  return uVar2;
}

/* 000d10f4  CPathTrack::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CPathTrack::Restore(CRestore &) */

undefined4 __thiscall CPathTrack::Restore(CPathTrack *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CPathTrack",(int)this,(int)m_SaveData,5);
  }
  return uVar2;
}

/* 000d1168  CPathTrack::KeyValue  (96 bytes)
 * undefined KeyValue(int param_1)
 */
/* CPathTrack::KeyValue(KeyValueData_s *) */

void __thiscall CPathTrack::KeyValue(CPathTrack *this,int param_1)

{
  int iVar1;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"altpath");
  if (iVar1 == 0) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x68 = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

/* 000d11cc  CPathTrack::Use  (162 bytes)
 * undefined Use(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 */
/* CPathTrack::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CPathTrack::Use(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_1[0x1d] == 0) {
    uVar2 = (*(byte *)(*param_1 + 0x1a0) ^ 1) & 1;
    iVar1 = CBaseEntity::ShouldToggle(param_1,param_4,uVar2);
    if (iVar1 != 0) {
      if (uVar2 == 0) {
        *(uint *)(*param_1 + 0x1a0) = *(uint *)(*param_1 + 0x1a0) & 0xfffffffe;
      }
      else {
        *(uint *)(*param_1 + 0x1a0) = *(uint *)(*param_1 + 0x1a0) | 1;
      }
    }
  }
  else {
    uVar2 = (*(uint *)(*param_1 + 0x1a0) >> 0xf ^ 1) & 1;
    iVar1 = CBaseEntity::ShouldToggle(param_1,param_4,uVar2);
    if (iVar1 != 0) {
      if (uVar2 == 0) {
        *(uint *)(*param_1 + 0x1a0) = *(uint *)(*param_1 + 0x1a0) & 0xffff7fff;
      }
      else {
        *(uint *)(*param_1 + 0x1a0) = *(uint *)(*param_1 + 0x1a0) | 0x8000;
      }
    }
  }
  return;
}

/* 000d1274  CPathTrack::Link  (343 bytes)
 * undefined Link(void)
 */
/* CPathTrack::Link(void) */

void __thiscall CPathTrack::Link(CPathTrack *this)

{
  bool bVar1;
  edict_t *peVar2;
  int iVar3;
  
  iVar3 = this->pev->target;
  if (iVar3 != 0) {
    peVar2 = (*g_engfuncs.pfnFindEntityByString)
                       ((edict_t *)0x0,"targetname",gpGlobals->pStringBase + iVar3);
    bVar1 = false;
    if ((peVar2 == (edict_t *)0x0) ||
       (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar2), iVar3 == 0)) {
      bVar1 = true;
    }
    if (bVar1) {
      (*g_engfuncs.pfnAlertMessage)
                (at_console,"Dead end link %s\n",gpGlobals->pStringBase + this->pev->target);
    }
    else {
      iVar3 = Instance((int)peVar2);
      *(int *)&this->field_0x6c = iVar3;
      if (iVar3 != 0) {
        SetPrevious(*(CPathTrack **)&this->field_0x6c,(int *)this);
      }
    }
  }
  if (*(int *)&this->field_0x68 != 0) {
    peVar2 = (*g_engfuncs.pfnFindEntityByString)
                       ((edict_t *)0x0,"targetname",
                        gpGlobals->pStringBase + *(int *)&this->field_0x68);
    bVar1 = false;
    if ((peVar2 == (edict_t *)0x0) ||
       (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar2), iVar3 == 0)) {
      bVar1 = true;
    }
    if (!bVar1) {
      iVar3 = Instance((int)peVar2);
      *(int *)&this->field_0x74 = iVar3;
      if (iVar3 != 0) {
        SetPrevious(*(CPathTrack **)&this->field_0x74,(int *)this);
      }
    }
  }
  return;
}

/* 000d13d0  CPathTrack::Spawn  (106 bytes)
 * undefined Spawn(void)
 */
/* CPathTrack::Spawn(void) */

void __thiscall CPathTrack::Spawn(CPathTrack *this)

{
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  this->pev->solid = 1;
  local_1c = 0x41000000;
  local_2c = 0xc1000000;
  local_28 = local_2c;
  local_24 = local_2c;
  local_18 = local_1c;
  local_14 = local_1c;
  UTIL_SetSize((int)this->pev,&local_2c,&local_1c);
  *(undefined4 *)&this->field_0x6c = 0;
  *(undefined4 *)&this->field_0x70 = 0;
  return;
}

/* 000d143c  CPathTrack::Activate  (48 bytes)
 * undefined Activate(void)
 */
/* CPathTrack::Activate(void) */

void __thiscall CPathTrack::Activate(CPathTrack *this)

{
  if (this->pev->targetname != 0) {
    Link(this);
  }
  return;
}

/* 000d146c  CPathTrack::ValidPath  (35 bytes)
 * int * ValidPath(undefined4 this, int * param_2, int param_3)
 */
/* CPathTrack::ValidPath(CPathTrack *, int) */

int * __thiscall CPathTrack::ValidPath(undefined4 this,int *param_2,int param_3)

{
  if ((param_2 != (int *)0x0) && ((param_3 == 0 || ((*(byte *)(*param_2 + 0x1a0) & 1) == 0)))) {
    return param_2;
  }
  return (int *)0x0;
}

/* 000d1490  CPathTrack::Project  (316 bytes)
 * undefined Project(undefined4 this, int * param_2, int * param_3, float * param_4, float param_5)
 */
/* CPathTrack::Project(CPathTrack *, CPathTrack *, Vector *, float) */

void __thiscall
CPathTrack::Project(undefined4 this,int *param_2,int *param_3,float *param_4,float param_5)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float local_3c [4];
  float local_2c [7];
  
  if ((param_2 != (int *)0x0) && (param_3 != (int *)0x0)) {
    iVar3 = *param_3;
    iVar1 = *param_2;
    local_2c[0] = *(float *)(iVar3 + 8) - *(float *)(iVar1 + 8);
    local_2c[1] = *(float *)(iVar3 + 0xc) - *(float *)(iVar1 + 0xc);
    local_2c[2] = *(float *)(iVar3 + 0x10) - *(float *)(iVar1 + 0x10);
    fVar2 = SQRT(local_2c[2] * local_2c[2] + local_2c[1] * local_2c[1] + local_2c[0] * local_2c[0]);
    if (fVar2 == 0.0) {
      local_3c[0] = 0.0;
      local_3c[1] = 0.0;
      local_3c[2] = 1.0;
    }
    else {
      fVar2 = 1.0 / fVar2;
      local_3c[0] = fVar2 * local_2c[0];
      local_3c[1] = fVar2 * local_2c[1];
      local_3c[2] = fVar2 * local_2c[2];
    }
    pfVar4 = local_3c;
    pfVar5 = local_2c;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
    iVar3 = *param_3;
    local_3c[0] = *(float *)(iVar3 + 8) + param_5 * local_2c[0];
    local_3c[1] = *(float *)(iVar3 + 0xc) + param_5 * local_2c[1];
    local_3c[2] = *(float *)(iVar3 + 0x10) + param_5 * local_2c[2];
    pfVar4 = local_3c;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_4 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      param_4 = param_4 + 1;
    }
  }
  return;
}

/* 000d15d0  CPathTrack::GetNext  (38 bytes)
 * undefined4 GetNext(void)
 */
/* CPathTrack::GetNext(void) */

undefined4 __thiscall CPathTrack::GetNext(CPathTrack *this)

{
  if ((*(int *)&this->field_0x74 != 0) && ((this->pev->spawnflags & 0x8004U) == 0x8000)) {
    return *(undefined4 *)&this->field_0x74;
  }
  return *(undefined4 *)&this->field_0x6c;
}

/* 000d15f8  CPathTrack::GetPrevious  (38 bytes)
 * undefined4 GetPrevious(void)
 */
/* CPathTrack::GetPrevious(void) */

undefined4 __thiscall CPathTrack::GetPrevious(CPathTrack *this)

{
  if ((*(int *)&this->field_0x74 != 0) && ((this->pev->spawnflags & 0x8004U) == 0x8004)) {
    return *(undefined4 *)&this->field_0x74;
  }
  return *(undefined4 *)&this->field_0x70;
}

/* 000d1620  CPathTrack::SetPrevious  (79 bytes)
 * undefined SetPrevious(int * param_1)
 */
/* CPathTrack::SetPrevious(CPathTrack *) */

void __thiscall CPathTrack::SetPrevious(CPathTrack *this,int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = strcmp(gpGlobals->pStringBase + *(int *)(*param_1 + 0x1cc),
                   gpGlobals->pStringBase + *(int *)&this->field_0x68);
    if (iVar1 != 0) {
      *(int **)&this->field_0x70 = param_1;
    }
  }
  return;
}

/* 000d1670  CPathTrack::LookAhead  (1057 bytes)
 * CPathTrack * LookAhead(float * param_1, float param_2, int param_3)
 */
/* CPathTrack::LookAhead(Vector *, float, int) */

CPathTrack * __thiscall
CPathTrack::LookAhead(CPathTrack *this,float *param_1,float param_2,int param_3)

{
  entvars_t *peVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  CPathTrack *this_00;
  CPathTrack *this_01;
  int iVar5;
  vec_t *pvVar6;
  float *pfVar7;
  float *pfVar8;
  float local_6c;
  float local_68;
  float local_64;
  float local_5c;
  float local_58;
  float local_54;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_2c [7];
  
  fVar3 = param_2;
  local_2c[0] = *param_1;
  local_2c[1] = param_1[1];
  local_2c[2] = param_1[2];
  this_00 = this;
  if (param_2 < 0.0) {
    param_2 = -param_2;
    while (0.0 < param_2) {
      peVar1 = this_00->pev;
      local_3c = peVar1->origin[0] - local_2c[0];
      local_38 = peVar1->origin[1] - local_2c[1];
      local_34 = peVar1->origin[2] - local_2c[2];
      local_40 = SQRT(local_34 * local_34 + local_38 * local_38 + local_3c * local_3c);
      if (local_40 == 0.0) {
        iVar5 = param_3;
        piVar4 = (int *)GetPrevious(this_00);
        piVar4 = ValidPath(this,piVar4,iVar5);
        if (piVar4 == (int *)0x0) {
          if (param_3 != 0) {
            return (CPathTrack *)0x0;
          }
          piVar4 = (int *)GetNext(this_00);
          goto LAB_000d194b;
        }
      }
      else {
        if (param_2 < local_40) {
          local_40 = param_2 / local_40;
          local_6c = local_40 * local_3c;
          local_68 = local_40 * local_38;
          local_64 = local_40 * local_34;
          pfVar7 = &local_5c;
          local_5c = local_2c[0] + local_40 * local_3c;
          local_58 = local_2c[1] + local_40 * local_38;
          local_54 = local_2c[2] + local_40 * local_34;
          goto LAB_000d1a81;
        }
        param_2 = param_2 - local_40;
        pvVar6 = this_00->pev->origin;
        pfVar7 = local_2c;
        for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pfVar7 = *pvVar6;
          pvVar6 = pvVar6 + 1;
          pfVar7 = pfVar7 + 1;
        }
        pfVar7 = local_2c;
        pfVar8 = param_1;
        for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pfVar8 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          pfVar8 = pfVar8 + 1;
        }
        iVar5 = param_3;
        piVar4 = (int *)GetPrevious(this_00);
        piVar4 = ValidPath(this,piVar4,iVar5);
        if (piVar4 == (int *)0x0) {
          return (CPathTrack *)0x0;
        }
      }
      this_00 = (CPathTrack *)GetPrevious(this_00);
    }
  }
  else {
    while (0.0 < param_2) {
      iVar5 = param_3;
      piVar4 = (int *)GetNext(this_00);
      piVar4 = ValidPath(this,piVar4,iVar5);
      if (piVar4 == (int *)0x0) {
        if (param_3 == 0) {
          piVar4 = (int *)GetPrevious(this_00);
LAB_000d194b:
          Project(this,piVar4,(int *)this_00,param_1,param_2);
        }
        return (CPathTrack *)0x0;
      }
      piVar4 = (int *)GetNext(this_00);
      iVar5 = *piVar4;
      local_3c = *(float *)(iVar5 + 8) - local_2c[0];
      local_38 = *(float *)(iVar5 + 0xc) - local_2c[1];
      local_34 = *(float *)(iVar5 + 0x10) - local_2c[2];
      fVar2 = SQRT(local_34 * local_34 + local_38 * local_38 + local_3c * local_3c);
      if (fVar2 == 0.0) {
        iVar5 = param_3;
        this_01 = (CPathTrack *)GetNext(this_00);
        piVar4 = (int *)GetNext(this_01);
        piVar4 = ValidPath(this,piVar4,iVar5);
        if (piVar4 == (int *)0x0) {
          return (CPathTrack *)((param_2 == fVar3) - 1 & (uint)this_00);
        }
      }
      if (param_2 < fVar2) {
        fVar2 = param_2 / fVar2;
        local_5c = fVar2 * local_3c;
        local_58 = fVar2 * local_38;
        local_54 = fVar2 * local_34;
        pfVar7 = &local_6c;
        local_6c = local_2c[0] + fVar2 * local_3c;
        local_68 = local_2c[1] + fVar2 * local_38;
        local_64 = local_2c[2] + fVar2 * local_34;
        goto LAB_000d1a81;
      }
      param_2 = param_2 - fVar2;
      piVar4 = (int *)GetNext(this_00);
      pfVar7 = (float *)(*piVar4 + 8);
      pfVar8 = local_2c;
      for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar8 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        pfVar8 = pfVar8 + 1;
      }
      this_00 = (CPathTrack *)GetNext(this_00);
      pfVar7 = local_2c;
      pfVar8 = param_1;
      for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar8 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        pfVar8 = pfVar8 + 1;
      }
    }
  }
  pfVar7 = local_2c;
LAB_000d1a81:
  for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *param_1 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    param_1 = param_1 + 1;
  }
  return this_00;
}

/* 000d1a9c  CPathTrack::Nearest  (402 bytes)
 * CPathTrack * Nearest(float * param_1)
 */
/* CPathTrack::Nearest(Vector) */

CPathTrack * __thiscall CPathTrack::Nearest(CPathTrack *this,float *param_1)

{
  entvars_t *peVar1;
  float fVar2;
  CPathTrack *this_00;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  CPathTrack *local_4c;
  float local_48;
  int local_44;
  float local_3c [4];
  float local_2c [7];
  
  peVar1 = this->pev;
  local_3c[0] = *param_1 - peVar1->origin[0];
  local_3c[1] = param_1[1] - peVar1->origin[1];
  local_3c[2] = param_1[2] - peVar1->origin[2];
  pfVar4 = local_3c;
  pfVar5 = local_2c;
  for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  }
  local_2c[2] = 0.0;
  local_48 = SQRT(local_2c[1] * local_2c[1] + local_2c[0] * local_2c[0]);
  local_4c = this;
  this_00 = (CPathTrack *)GetNext(this);
  local_44 = 0;
  if ((this_00 != (CPathTrack *)0x0) && (this_00 != this)) {
    while (local_44 = local_44 + 1, local_44 < 10000) {
      peVar1 = this_00->pev;
      local_3c[0] = *param_1 - peVar1->origin[0];
      local_3c[1] = param_1[1] - peVar1->origin[1];
      local_3c[2] = param_1[2] - peVar1->origin[2];
      pfVar4 = local_3c;
      pfVar5 = local_2c;
      for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar5 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar5 = pfVar5 + 1;
      }
      local_2c[2] = 0.0;
      fVar2 = SQRT(local_2c[1] * local_2c[1] + local_2c[0] * local_2c[0]);
      if (fVar2 < local_48) {
        local_4c = this_00;
        local_48 = fVar2;
      }
      this_00 = (CPathTrack *)GetNext(this_00);
      if (this_00 == (CPathTrack *)0x0) {
        return local_4c;
      }
      if (this_00 == this) {
        return local_4c;
      }
    }
    (*g_engfuncs.pfnAlertMessage)
              (at_error,"Bad sequence of path_tracks from %s",
               gpGlobals->pStringBase + this->pev->targetname);
    this = (CPathTrack *)0x0;
  }
  return this;
}

/* 000d1c30  CPathTrack::Instance  (100 bytes)
 * undefined4 Instance(int param_1)
 */
/* CPathTrack::Instance(edict_s *) */

undefined4 CPathTrack::Instance(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(gpGlobals->pStringBase + *(int *)(param_1 + 0x80U & (param_1 == 0) - 1),
                 "path_track");
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

