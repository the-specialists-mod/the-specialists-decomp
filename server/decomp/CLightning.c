/* ts_i386.so - CLightning (15 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000b94e0  CLightning::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CLightning::Save(CSave &) */

undefined4 __thiscall CLightning::Save(CLightning *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CLightning",(int)this,(int *)m_SaveData,0xd);
  }
  return uVar2;
}

/* 000b9530  CLightning::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CLightning::Restore(CRestore &) */

undefined4 __thiscall CLightning::Restore(CLightning *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CLightning",(int)this,(int)m_SaveData,0xd);
  }
  return uVar2;
}

/* 000b9580  CLightning::Spawn  (422 bytes)
 * undefined Spawn(void)
 */
/* CLightning::Spawn(void) */

void __thiscall CLightning::Spawn(CLightning *this)

{
  entvars_t *peVar1;
  bool bVar2;
  
  if (*(int *)&this->field_0x8c != 0) {
    this->pev->solid = 0;
    (*this->vtable[10])(this);
    this->pev->dmgtime = gpGlobals->time;
    if ((*(float *)&this->field_0x70 != 0.0) || (bVar2 = true, (this->pev->spawnflags & 8) != 0)) {
      bVar2 = false;
    }
    if (bVar2) {
      *(undefined4 *)&this->field_0xc = 0;
      *(undefined4 *)&this->field_0x10 = 0;
      if (0.0 < this->pev->dmg) {
        *(undefined4 *)&this->field_0xc = 0xffff0000;
        *(code **)&this->field_0x10 = DamageThink;
        this->pev->nextthink = gpGlobals->time + 0.1;
      }
      peVar1 = this->pev;
      if (peVar1->targetname != 0) {
        if ((((byte)peVar1->spawnflags ^ 1) & 1) == 0) {
          *(undefined4 *)&this->field_0x64 = 1;
        }
        else {
          peVar1->effects = 0x80;
          *(undefined4 *)&this->field_0x64 = 0;
          this->pev->nextthink = 0.0;
        }
        *(undefined4 *)&this->field_0x1c = 0xffff0000;
        *(code **)&this->field_0x20 = ToggleUse;
      }
    }
    else {
      *(undefined4 *)&this->field_0x64 = 0;
      if (this->pev->targetname != 0) {
        *(undefined4 *)&this->field_0x1c = 0xffff0000;
        *(code **)&this->field_0x20 = StrikeUse;
      }
      if ((this->pev->targetname == 0) || ((this->pev->spawnflags & 1) != 0)) {
        *(undefined4 *)&this->field_0xc = 0xffff0000;
        *(code **)&this->field_0x10 = StrikeThink;
        this->pev->nextthink = gpGlobals->time + 1.0;
      }
    }
    return;
  }
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = CBaseEntity::SUB_Remove;
  return;
}

/* 000b972c  CLightning::Precache  (73 bytes)
 * undefined Precache(void)
 */
/* CLightning::Precache(void) */

void __thiscall CLightning::Precache(CLightning *this)

{
  int iVar1;
  
  iVar1 = (*g_engfuncs.pfnPrecacheModel)(gpGlobals->pStringBase + *(int *)&this->field_0x8c);
  *(int *)&this->field_0x88 = iVar1;
  CBeam::Precache((CBeam *)this);
  return;
}

/* 000b9778  CLightning::Activate  (78 bytes)
 * undefined Activate(void)
 */
/* CLightning::Activate(void) */

void __thiscall CLightning::Activate(CLightning *this)

{
  bool bVar1;
  
  if ((*(float *)&this->field_0x70 != 0.0) || (bVar1 = true, (this->pev->spawnflags & 8) != 0)) {
    bVar1 = false;
  }
  if (bVar1) {
    BeamUpdateVars(this);
  }
  return;
}

/* 000b97c8  CLightning::KeyValue  (677 bytes)
 * undefined KeyValue(int param_1)
 */
/* CLightning::KeyValue(KeyValueData_s *) */

void __thiscall CLightning::KeyValue(CLightning *this,int param_1)

{
  entvars_t *peVar1;
  int iVar2;
  undefined4 uVar3;
  longdouble lVar4;
  
  iVar2 = strcmp(*(char **)(param_1 + 4),"LightningStart");
  if (iVar2 == 0) {
    iVar2 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)&this->field_0x68 = iVar2;
  }
  else {
    iVar2 = strcmp(*(char **)(param_1 + 4),"LightningEnd");
    if (iVar2 == 0) {
      iVar2 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
      *(int *)&this->field_0x6c = iVar2;
    }
    else {
      iVar2 = strcmp(*(char **)(param_1 + 4),"life");
      if (iVar2 == 0) {
        lVar4 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
        *(float *)&this->field_0x70 = (float)lVar4;
        *(undefined4 *)(param_1 + 0xc) = 1;
        return;
      }
      iVar2 = strcmp(*(char **)(param_1 + 4),"BoltWidth");
      if (iVar2 == 0) {
        uVar3 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
        *(undefined4 *)&this->field_0x74 = uVar3;
        *(undefined4 *)(param_1 + 0xc) = 1;
        return;
      }
      iVar2 = strcmp(*(char **)(param_1 + 4),"NoiseAmplitude");
      if (iVar2 == 0) {
        uVar3 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
        *(undefined4 *)&this->field_0x78 = uVar3;
        *(undefined4 *)(param_1 + 0xc) = 1;
        return;
      }
      iVar2 = strcmp(*(char **)(param_1 + 4),"TextureScroll");
      if (iVar2 == 0) {
        uVar3 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
        *(undefined4 *)&this->field_0x80 = uVar3;
        *(undefined4 *)(param_1 + 0xc) = 1;
        return;
      }
      iVar2 = strcmp(*(char **)(param_1 + 4),"StrikeTime");
      if (iVar2 == 0) {
        lVar4 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
        *(float *)&this->field_0x84 = (float)lVar4;
        *(undefined4 *)(param_1 + 0xc) = 1;
        return;
      }
      iVar2 = strcmp(*(char **)(param_1 + 4),"texture");
      if (iVar2 != 0) {
        iVar2 = strcmp(*(char **)(param_1 + 4),"framestart");
        if (iVar2 == 0) {
          uVar3 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
          *(undefined4 *)&this->field_0x90 = uVar3;
          *(undefined4 *)(param_1 + 0xc) = 1;
          return;
        }
        iVar2 = strcmp(*(char **)(param_1 + 4),"Radius");
        if (iVar2 == 0) {
          lVar4 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
          *(float *)&this->field_0x94 = (float)lVar4;
          *(undefined4 *)(param_1 + 0xc) = 1;
          return;
        }
        iVar2 = strcmp(*(char **)(param_1 + 4),"damage");
        if (iVar2 == 0) {
          peVar1 = this->pev;
          lVar4 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
          peVar1->dmg = (float)lVar4;
          *(undefined4 *)(param_1 + 0xc) = 1;
          return;
        }
        *(undefined4 *)(param_1 + 0xc) = 0;
        return;
      }
      iVar2 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
      *(int *)&this->field_0x8c = iVar2;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}

/* 000b9a80  CLightning::ToggleUse  (194 bytes)
 * undefined ToggleUse(CBeam * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 */
/* CLightning::ToggleUse(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CLightning::ToggleUse(CBeam *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar2 = CBaseEntity::ShouldToggle(param_1,param_4,(int)param_1[1].pev);
  if (iVar2 != 0) {
    if (param_1[1].pev == (entvars_t *)0x0) {
      param_1[1].pev = (entvars_t *)0x1;
      piVar1 = &param_1->pev->effects;
      *piVar1 = *piVar1 & 0xffffff7f;
      puVar3 = (undefined4 *)CBeam::GetEndPos(param_1);
      puVar4 = (undefined4 *)CBeam::GetStartPos(param_1);
      CBeam::DoSparks(param_1,puVar4,puVar3);
      if (0.0 < param_1->pev->dmg) {
        param_1->pev->nextthink = gpGlobals->time;
        param_1->pev->dmgtime = gpGlobals->time;
      }
    }
    else {
      param_1[1].pev = (entvars_t *)0x0;
      piVar1 = &param_1->pev->effects;
      *piVar1 = *piVar1 | 0x80;
      param_1->pev->nextthink = 0.0;
    }
  }
  return;
}

/* 000b9b44  CLightning::StrikeUse  (149 bytes)
 * undefined StrikeUse(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 */
/* CLightning::StrikeUse(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CLightning::StrikeUse(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = CBaseEntity::ShouldToggle(param_1,param_4,param_1[0x19]);
  if (iVar1 != 0) {
    if (param_1[0x19] == 0) {
      param_1[3] = -0x10000;
      param_1[4] = (int)StrikeThink;
      *(float *)(*param_1 + 0x104) = gpGlobals->time + 0.1;
    }
    else {
      param_1[0x19] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
    }
    if ((*(byte *)(*param_1 + 0x1a0) & 2) == 0) {
      param_1[7] = 0;
      param_1[8] = 0;
    }
  }
  return;
}

/* 000b9c78  CLightning::StrikeThink  (1335 bytes)
 * undefined StrikeThink(void)
 */
/* CLightning::StrikeThink(void) */

void __thiscall CLightning::StrikeThink(CLightning *this)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined2 in_FPUControlWord;
  longdouble extraout_ST0;
  int *local_70;
  undefined1 local_6c [72];
  int local_24;
  undefined2 local_20;
  undefined2 uStack_1e;
  
  if (*(float *)&this->field_0x70 != 0.0) {
    if ((this->pev->spawnflags & 4) == 0) {
      this->pev->nextthink =
           gpGlobals->time + *(float *)&this->field_0x70 + *(float *)&this->field_0x84;
    }
    else {
      (*g_engfuncs.pfnRandomFloat)(0.0,*(float *)&this->field_0x84);
      this->pev->nextthink =
           (float)((longdouble)gpGlobals->time + (longdouble)*(float *)&this->field_0x70 +
                  extraout_ST0);
    }
  }
  *(undefined4 *)&this->field_0x64 = 1;
  if (*(int *)&this->field_0x6c == 0) {
    if (*(int *)&this->field_0x68 == 0) {
      RandomArea(this);
    }
    else {
      piVar1 = CBeam::RandomTargetname(this,gpGlobals->pStringBase + *(int *)&this->field_0x68);
      if (piVar1 == (int *)0x0) {
        (*g_engfuncs.pfnAlertMessage)
                  (at_console,"env_beam: unknown entity \"%s\"\n",
                   gpGlobals->pStringBase + *(int *)&this->field_0x68);
      }
      else {
        RandomPoint(this,(float *)(*piVar1 + 8));
      }
    }
  }
  else {
    local_70 = CBeam::RandomTargetname(this,gpGlobals->pStringBase + *(int *)&this->field_0x68);
    piVar1 = CBeam::RandomTargetname(this,gpGlobals->pStringBase + *(int *)&this->field_0x6c);
    if (((local_70 != (int *)0x0) && (piVar1 != (int *)0x0)) &&
       (((iVar2 = IsPointEntity(local_70), iVar2 == 0 && (iVar2 = IsPointEntity(piVar1), iVar2 == 0)
         ) || ((this->pev->spawnflags & 8) == 0)))) {
      (*g_engfuncs.pfnMessageBegin)(0,0x17,(float *)0x0,(edict_t *)0x0);
      iVar2 = IsPointEntity(local_70);
      if ((iVar2 == 0) && (iVar2 = IsPointEntity(piVar1), iVar2 == 0)) {
        if ((this->pev->spawnflags & 8) == 0) {
          iVar2 = 8;
        }
        else {
          iVar2 = 0x18;
        }
        (*g_engfuncs.pfnWriteByte)(iVar2);
        iVar2 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*local_70 + 0x208));
        (*g_engfuncs.pfnWriteShort)(iVar2);
        iVar2 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*piVar1 + 0x208));
        (*g_engfuncs.pfnWriteShort)(iVar2);
      }
      else {
        iVar2 = IsPointEntity(piVar1);
        piVar3 = piVar1;
        if (iVar2 == 0) {
          piVar3 = local_70;
          local_70 = piVar1;
        }
        iVar2 = IsPointEntity(local_70);
        piVar1 = piVar3;
        if (iVar2 == 0) {
          (*g_engfuncs.pfnWriteByte)(1);
          iVar2 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*local_70 + 0x208));
          (*g_engfuncs.pfnWriteShort)(iVar2);
          (*g_engfuncs.pfnWriteCoord)(*(float *)(*piVar3 + 8));
          (*g_engfuncs.pfnWriteCoord)(*(float *)(*piVar3 + 0xc));
          (*g_engfuncs.pfnWriteCoord)(*(float *)(*piVar3 + 0x10));
        }
        else {
          (*g_engfuncs.pfnWriteByte)(0);
          (*g_engfuncs.pfnWriteCoord)(*(float *)(*local_70 + 8));
          (*g_engfuncs.pfnWriteCoord)(*(float *)(*local_70 + 0xc));
          (*g_engfuncs.pfnWriteCoord)(*(float *)(*local_70 + 0x10));
          (*g_engfuncs.pfnWriteCoord)(*(float *)(*piVar3 + 8));
          (*g_engfuncs.pfnWriteCoord)(*(float *)(*piVar3 + 0xc));
          (*g_engfuncs.pfnWriteCoord)(*(float *)(*piVar3 + 0x10));
        }
      }
      (*g_engfuncs.pfnWriteShort)(*(int *)&this->field_0x88);
      (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0x90);
      local_24 = (int)ROUND(this->pev->framerate);
      (*g_engfuncs.pfnWriteByte)(local_24);
      local_24 = (int)ROUND(*(float *)&this->field_0x70 * 10.0);
      (*g_engfuncs.pfnWriteByte)(local_24);
      (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0x74);
      (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0x78);
      local_24 = (int)ROUND(this->pev->rendercolor[0]);
      (*g_engfuncs.pfnWriteByte)(local_24);
      local_24 = (int)ROUND(this->pev->rendercolor[1]);
      (*g_engfuncs.pfnWriteByte)(local_24);
      local_24 = (int)ROUND(this->pev->rendercolor[2]);
      (*g_engfuncs.pfnWriteByte)(local_24);
      _local_20 = CONCAT22(uStack_1e,in_FPUControlWord);
      local_24 = (int)ROUND(this->pev->renderamt);
      (*g_engfuncs.pfnWriteByte)(local_24);
      (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0x80);
      (*g_engfuncs.pfnMessageEnd)();
      CBeam::DoSparks((CBeam *)this,(undefined4 *)(*local_70 + 8),(undefined4 *)(*piVar1 + 8));
      if (0.0 < this->pev->dmg) {
        UTIL_TraceLine(*local_70 + 8,*piVar1 + 8,0,0,local_6c);
        this->pev->dmgtime = gpGlobals->time - 1.0;
        CBeam::BeamDamage((CBeam *)this,(int)local_6c);
      }
    }
  }
  return;
}

/* 000ba36c  CLightning::DamageThink  (100 bytes)
 * undefined DamageThink(void)
 */
/* CLightning::DamageThink(void) */

void __thiscall CLightning::DamageThink(CLightning *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_5c [80];
  
  puVar5 = auStack_5c;
  this->pev->nextthink = gpGlobals->time + 0.1;
  uVar4 = 0;
  iVar3 = 0;
  iVar1 = CBeam::GetEndPos((CBeam *)this);
  iVar2 = CBeam::GetStartPos((CBeam *)this);
  UTIL_TraceLine(iVar2,iVar1,iVar3,uVar4,puVar5);
  CBeam::BeamDamage((CBeam *)this,(int)auStack_5c);
  return;
}

/* 000ba3d0  CLightning::Zap  (547 bytes)
 * undefined Zap(undefined4 * param_1, undefined4 * param_2)
 */
/* CLightning::Zap(Vector const &, Vector const &) */

void __thiscall CLightning::Zap(CLightning *this,undefined4 *param_1,undefined4 *param_2)

{
  (*g_engfuncs.pfnMessageBegin)(0,0x17,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnWriteCoord)((float)*param_1);
  (*g_engfuncs.pfnWriteCoord)((float)param_1[1]);
  (*g_engfuncs.pfnWriteCoord)((float)param_1[2]);
  (*g_engfuncs.pfnWriteCoord)((float)*param_2);
  (*g_engfuncs.pfnWriteCoord)((float)param_2[1]);
  (*g_engfuncs.pfnWriteCoord)((float)param_2[2]);
  (*g_engfuncs.pfnWriteShort)(*(int *)&this->field_0x88);
  (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0x90);
  (*g_engfuncs.pfnWriteByte)((int)ROUND(this->pev->framerate));
  (*g_engfuncs.pfnWriteByte)((int)ROUND(*(float *)&this->field_0x70 * 10.0));
  (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0x74);
  (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0x78);
  (*g_engfuncs.pfnWriteByte)((int)ROUND(this->pev->rendercolor[0]));
  (*g_engfuncs.pfnWriteByte)((int)ROUND(this->pev->rendercolor[1]));
  (*g_engfuncs.pfnWriteByte)((int)ROUND(this->pev->rendercolor[2]));
  (*g_engfuncs.pfnWriteByte)((int)ROUND(this->pev->renderamt));
  (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0x80);
  (*g_engfuncs.pfnMessageEnd)();
  CBeam::DoSparks((CBeam *)this,param_1,param_2);
  return;
}

/* 000ba5f4  CLightning::RandomArea  (1293 bytes)
 * undefined RandomArea(void)
 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* CLightning::RandomArea(void) */

void __thiscall CLightning::RandomArea(CLightning *this)

{
  float fVar1;
  float fVar2;
  entvars_t *peVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  longdouble extraout_ST0;
  longdouble extraout_ST0_00;
  longdouble extraout_ST0_01;
  longdouble extraout_ST0_02;
  longdouble extraout_ST0_03;
  longdouble extraout_ST0_04;
  int local_100;
  undefined1 local_ec [16];
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_ac [4];
  undefined1 local_9c [16];
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_50;
  float local_4c [4];
  float local_3c [4];
  vec_t local_2c;
  vec_t local_28;
  vec_t local_24;
  
  local_100 = 0;
  do {
    peVar3 = this->pev;
    local_2c = peVar3->origin[0];
    local_28 = peVar3->origin[1];
    local_24 = peVar3->origin[2];
    (*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
    fVar1 = (float)extraout_ST0;
    (*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
    fVar2 = (float)extraout_ST0_00;
    (*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
    local_3c[0] = fVar1;
    local_3c[1] = fVar2;
    local_3c[2] = (float)extraout_ST0_01;
    local_50 = (float)SQRT(extraout_ST0_01 * (longdouble)local_3c[2] +
                           (longdouble)fVar2 * (longdouble)fVar2 +
                           (longdouble)fVar1 * (longdouble)fVar1);
    if (local_50 == 0.0) {
      local_4c[0] = 0.0;
      local_4c[1] = 0.0;
      local_4c[2] = 1.0;
    }
    else {
      fVar4 = 1.0 / local_50;
      local_4c[0] = fVar4 * fVar1;
      local_4c[1] = fVar4 * fVar2;
      local_4c[2] = fVar4 * local_3c[2];
    }
    pfVar6 = local_4c;
    pfVar7 = local_3c;
    for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar7 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar7 = pfVar7 + 1;
    }
    local_ac[2] = *(float *)&this->field_0x94;
    local_ac[0] = local_ac[2] * local_3c[0];
    local_ac[1] = local_ac[2] * local_3c[1];
    local_ac[2] = local_ac[2] * local_3c[2];
    local_4c[0] = local_2c + local_ac[0];
    local_4c[1] = local_28 + local_ac[1];
    local_4c[2] = local_24 + local_ac[2];
    UTIL_TraceLine(&local_2c,local_4c,1,this->pev->pContainingEntity,local_9c);
    if (local_8c != 1.0) {
      do {
        (*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
        (*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
        (*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
        local_4c[0] = (float)extraout_ST0_02;
        local_4c[1] = (float)extraout_ST0_03;
        local_4c[2] = (float)extraout_ST0_04;
        pfVar6 = local_4c;
        pfVar7 = local_ac;
        for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pfVar7 = *pfVar6;
          pfVar6 = pfVar6 + 1;
          pfVar7 = pfVar7 + 1;
        }
      } while (0.0 < local_3c[2] * local_ac[2] +
                     local_3c[1] * local_ac[1] + local_3c[0] * local_ac[0]);
      local_50 = SQRT(local_ac[2] * local_ac[2] +
                      local_ac[1] * local_ac[1] + local_ac[0] * local_ac[0]);
      if (local_50 == 0.0) {
        local_4c[0] = 0.0;
        local_4c[1] = 0.0;
        local_4c[2] = 1.0;
      }
      else {
        fVar1 = 1.0 / local_50;
        local_4c[0] = fVar1 * local_ac[0];
        local_4c[1] = fVar1 * local_ac[1];
        local_4c[2] = fVar1 * local_ac[2];
      }
      pfVar6 = local_4c;
      pfVar7 = local_ac;
      for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar7 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        pfVar7 = pfVar7 + 1;
      }
      fVar1 = *(float *)&this->field_0x94;
      local_4c[0] = local_2c + fVar1 * local_ac[0];
      local_4c[1] = local_28 + fVar1 * local_ac[1];
      local_4c[2] = local_24 + fVar1 * local_ac[2];
      UTIL_TraceLine(&local_2c,local_4c,1,this->pev->pContainingEntity,local_ec);
      if (local_dc != 1.0) {
        local_50 = SQRT((local_80 - local_d0) * (local_80 - local_d0) +
                        (local_84 - local_d4) * (local_84 - local_d4) +
                        (local_88 - local_d8) * (local_88 - local_d8));
        if ((*(float *)&this->field_0x94 * 0.1 <= local_50) &&
           (UTIL_TraceLine(&local_88,&local_d8,1,this->pev->pContainingEntity,local_ec),
           local_dc == 1.0)) {
          Zap(this,&local_88,&local_d8);
          return;
        }
      }
    }
    local_100 = local_100 + 1;
    if (9 < local_100) {
      return;
    }
  } while( true );
}

/* 000bab04  CLightning::RandomPoint  (665 bytes)
 * undefined RandomPoint(float * param_1)
 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* CLightning::RandomPoint(Vector &) */

void __thiscall CLightning::RandomPoint(CLightning *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  longdouble extraout_ST0;
  longdouble extraout_ST0_00;
  longdouble extraout_ST0_01;
  int local_a0;
  undefined1 local_8c [16];
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_40;
  float local_3c [4];
  float local_2c [7];
  
  local_a0 = 0;
  while( true ) {
    (*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
    fVar1 = (float)extraout_ST0;
    (*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
    fVar2 = (float)extraout_ST0_00;
    (*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
    local_2c[0] = fVar1;
    local_2c[1] = fVar2;
    local_2c[2] = (float)extraout_ST0_01;
    local_40 = (float)SQRT(extraout_ST0_01 * (longdouble)local_2c[2] +
                           (longdouble)fVar2 * (longdouble)fVar2 +
                           (longdouble)fVar1 * (longdouble)fVar1);
    if (local_40 == 0.0) {
      local_3c[0] = 0.0;
      local_3c[1] = 0.0;
      local_3c[2] = 1.0;
    }
    else {
      fVar3 = 1.0 / local_40;
      local_3c[0] = fVar3 * fVar1;
      local_3c[1] = fVar3 * fVar2;
      local_3c[2] = fVar3 * local_2c[2];
    }
    pfVar5 = local_3c;
    pfVar6 = local_2c;
    for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar6 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar6 = pfVar6 + 1;
    }
    fVar1 = *(float *)&this->field_0x94;
    local_3c[0] = *param_1 + fVar1 * local_2c[0];
    local_3c[1] = param_1[1] + fVar1 * local_2c[1];
    local_3c[2] = param_1[2] + fVar1 * local_2c[2];
    UTIL_TraceLine(param_1,local_3c,1,this->pev->pContainingEntity,local_8c);
    local_40 = SQRT((local_70 - param_1[2]) * (local_70 - param_1[2]) +
                    (local_74 - param_1[1]) * (local_74 - param_1[1]) +
                    (local_78 - *param_1) * (local_78 - *param_1));
    if ((*(float *)&this->field_0x94 * 0.1 <= local_40) && (local_7c != 1.0)) break;
    local_a0 = local_a0 + 1;
    if (9 < local_a0) {
      return;
    }
  }
  Zap(this,param_1,&local_78);
  return;
}

/* 000bada4  CLightning::BeamUpdateVars  (661 bytes)
 * undefined BeamUpdateVars(void)
 */
/* CLightning::BeamUpdateVars(void) */

void __thiscall CLightning::BeamUpdateVars(CLightning *this)

{
  edict_t *peVar1;
  edict_t *peVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  entvars_t *peVar7;
  vec_t *pvVar8;
  vec_t *pvVar9;
  edict_t *local_20;
  edict_t *local_18;
  uint local_14;
  
  local_18 = (*g_engfuncs.pfnFindEntityByString)
                       ((edict_t *)0x0,"targetname",
                        gpGlobals->pStringBase + *(int *)&this->field_0x68);
  peVar1 = (*g_engfuncs.pfnFindEntityByString)
                     ((edict_t *)0x0,"targetname",gpGlobals->pStringBase + *(int *)&this->field_0x6c
                     );
  peVar2 = local_18;
  if (local_18 == (edict_t *)0x0) {
    peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
  }
  piVar6 = (int *)0x0;
  if (peVar2 != (edict_t *)0x0) {
    piVar6 = peVar2->pvPrivateData;
  }
  iVar3 = IsPointEntity(piVar6);
  peVar2 = peVar1;
  if (peVar1 == (edict_t *)0x0) {
    peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
  }
  piVar6 = (int *)0x0;
  if (peVar2 != (edict_t *)0x0) {
    piVar6 = peVar2->pvPrivateData;
  }
  iVar4 = IsPointEntity(piVar6);
  this->pev->skin = 0;
  this->pev->sequence = 0;
  this->pev->rendermode = 0;
  piVar6 = &this->pev->flags;
  *piVar6 = *piVar6 | 0x20000000;
  this->pev->model = *(string_t *)&this->field_0x8c;
  this->pev->modelindex = *(int *)&this->field_0x88;
  local_14 = 2;
  local_20 = peVar1;
  if ((iVar3 != 0) || (iVar4 != 0)) {
    if (iVar3 == 0) {
      iVar4 = 0;
      local_20 = local_18;
      local_18 = peVar1;
    }
    local_14 = (uint)(iVar4 == 0);
  }
  this->pev->rendermode = this->pev->rendermode & 0xf0U | local_14;
  if ((local_14 < 2) || (local_14 == 3)) {
    pvVar8 = (local_18->v).origin;
    pvVar9 = this->pev->origin;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pvVar9 = *pvVar8;
      pvVar8 = pvVar8 + 1;
      pvVar9 = pvVar9 + 1;
    }
    if ((local_14 == 0) || (local_14 == 3)) {
      pvVar8 = (local_20->v).origin;
      pvVar9 = this->pev->angles;
      for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pvVar9 = *pvVar8;
        pvVar8 = pvVar8 + 1;
        pvVar9 = pvVar9 + 1;
      }
      goto LAB_000bafbb;
    }
    uVar5 = (*g_engfuncs.pfnIndexOfEdict)(local_20);
  }
  else {
    uVar5 = (*g_engfuncs.pfnIndexOfEdict)(local_18);
    CBeam::SetStartEntity((CBeam *)this,uVar5);
    uVar5 = (*g_engfuncs.pfnIndexOfEdict)(local_20);
  }
  CBeam::SetEndEntity((CBeam *)this,uVar5);
LAB_000bafbb:
  CBeam::RelinkBeam((CBeam *)this);
  this->pev->scale = (float)*(int *)&this->field_0x74;
  this->pev->body = *(int *)&this->field_0x78;
  this->pev->frame = (float)*(int *)&this->field_0x90;
  this->pev->animtime = (float)*(int *)&this->field_0x80;
  peVar7 = this->pev;
  if ((char)peVar7->spawnflags < '\0') {
    uVar5 = peVar7->rendermode & 0xfU | 0x40;
  }
  else {
    peVar7 = this->pev;
    if ((peVar7->spawnflags & 0x100) == 0) {
      return;
    }
    uVar5 = peVar7->rendermode & 0xfU | 0x80;
  }
  peVar7->rendermode = uVar5;
  return;
}

/* 000bf2b8  CLightning::ServerSide  (58 bytes)
 * undefined4 ServerSide(void)
 */
/* CLightning::ServerSide(void) */

undefined4 __thiscall CLightning::ServerSide(CLightning *this)

{
  undefined4 uVar1;
  
  if ((*(float *)&this->field_0x70 == 0.0) && ((this->pev->spawnflags & 8) == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

