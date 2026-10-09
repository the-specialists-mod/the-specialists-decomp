/* ts_i386.so - CGibShooter (8 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000bc100  CGibShooter::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CGibShooter::Save(CSave &) */

undefined4 __thiscall CGibShooter::Save(CGibShooter *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseDelay::Save((CBaseDelay *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CGibShooter",(int)this,(int *)m_SaveData,7);
  }
  return uVar2;
}

/* 000bc150  CGibShooter::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CGibShooter::Restore(CRestore &) */

undefined4 __thiscall CGibShooter::Restore(CGibShooter *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseDelay::Restore((CBaseDelay *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CGibShooter",(int)this,(int)m_SaveData,7);
  }
  return uVar2;
}

/* 000bc1c4  CGibShooter::Precache  (79 bytes)
 * undefined Precache(void)
 */
/* CGibShooter::Precache(void) */

void __thiscall CGibShooter::Precache(CGibShooter *this)

{
  int iVar1;
  char *s;
  
  if (g_Language == 1) {
    s = "models/germanygibs.mdl";
  }
  else {
    s = "models/hgibs.mdl";
  }
  iVar1 = (*g_engfuncs.pfnPrecacheModel)(s);
  *(int *)&this->field_0x78 = iVar1;
  return;
}

/* 000bc218  CGibShooter::KeyValue  (280 bytes)
 * undefined KeyValue(int param_1)
 */
/* CGibShooter::KeyValue(KeyValueData_s *) */

void __thiscall CGibShooter::KeyValue(CGibShooter *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  longdouble lVar3;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"m_iGibs");
  if (iVar1 == 0) {
    uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
    *(undefined4 *)&this->field_0x70 = uVar2;
    *(undefined4 *)&this->field_0x6c = uVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"m_flVelocity");
    if (iVar1 == 0) {
      lVar3 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
      *(float *)&this->field_0x7c = (float)lVar3;
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      iVar1 = strcmp(*(char **)(param_1 + 4),"m_flVariance");
      if (iVar1 == 0) {
        lVar3 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
        *(float *)&this->field_0x80 = (float)lVar3;
        *(undefined4 *)(param_1 + 0xc) = 1;
      }
      else {
        iVar1 = strcmp(*(char **)(param_1 + 4),"m_flGibLife");
        if (iVar1 == 0) {
          lVar3 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
          *(float *)&this->field_0x84 = (float)lVar3;
          *(undefined4 *)(param_1 + 0xc) = 1;
        }
        else {
          CBaseDelay::KeyValue((CBaseDelay *)this,param_1);
        }
      }
    }
  }
  return;
}

/* 000bc338  CGibShooter::Use  (58 bytes)
 * undefined Use(int * param_1)
 */
/* CGibShooter::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CGibShooter::Use(int *param_1)

{
  param_1[3] = -0x10000;
  param_1[4] = (int)ShootThink;
  *(float *)(*param_1 + 0x104) = gpGlobals->time;
  return;
}

/* 000bc374  CGibShooter::Spawn  (149 bytes)
 * undefined Spawn(void)
 */
/* CGibShooter::Spawn(void) */

void __thiscall CGibShooter::Spawn(CGibShooter *this)

{
  int iVar1;
  
  (*this->vtable[10])(this);
  this->pev->solid = 0;
  this->pev->effects = 0x80;
  if (*(float *)&this->field_0x64 == 0.0) {
    *(undefined4 *)&this->field_0x64 = 0x3dcccccd;
  }
  if (*(float *)&this->field_0x84 == 0.0) {
    *(undefined4 *)&this->field_0x84 = 0x41c80000;
  }
  SetMovedir((int)this->pev);
  iVar1 = (*g_engfuncs.pfnModelFrames)(*(int *)&this->field_0x78);
  this->pev->body = iVar1;
  return;
}

/* 000bc40c  CGibShooter::CreateGib  (184 bytes)
 * CGib * CreateGib(void)
 */
/* CGibShooter::CreateGib(void) */

CGib * __thiscall CGibShooter::CreateGib(CGibShooter *this)

{
  CGib *this_00;
  int iVar1;
  longdouble extraout_ST0;
  
  (*g_engfuncs.pfnCVarGetFloat)("violence_hgibs");
  if (extraout_ST0 == (longdouble)0.0) {
    this_00 = (CGib *)0x0;
  }
  else {
    this_00 = GetClassPtr<CGib>(0);
    CGib::Spawn(this_00,"models/hgibs.mdl");
    *(undefined4 *)&this_00->field_0x64 = 0xf7;
    if (this->pev->body < 2) {
      (*g_engfuncs.pfnAlertMessage)(at_aiconsole,"GibShooter Body is <= 1!\n");
    }
    iVar1 = (*g_engfuncs.pfnRandomLong)(1,this->pev->body + -1);
    this_00->pev->body = iVar1;
  }
  return this_00;
}

/* 000bc4c4  CGibShooter::ShootThink  (1091 bytes)
 * undefined ShootThink(void)
 */
/* CGibShooter::ShootThink(void) */

void __thiscall CGibShooter::ShootThink(CGibShooter *this)

{
  float fVar1;
  float fVar2;
  globalvars_t *pgVar3;
  globalvars_t *pgVar4;
  int *piVar5;
  int iVar6;
  entvars_t *peVar7;
  vec_t *pvVar8;
  float *pfVar9;
  vec_t *pvVar10;
  float *pfVar11;
  longdouble lVar12;
  float local_5c [4];
  float local_4c;
  float local_48;
  float local_44;
  float local_3c [4];
  float local_2c [7];
  
  this->pev->nextthink = gpGlobals->time + *(float *)&this->field_0x64;
  pgVar3 = gpGlobals;
  pvVar8 = this->pev->movedir;
  pfVar9 = local_2c;
  for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar9 = *pvVar8;
    pvVar8 = pvVar8 + 1;
    pfVar9 = pfVar9 + 1;
  }
  lVar12 = (longdouble)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
  pgVar4 = gpGlobals;
  local_5c[0] = (float)(lVar12 * (longdouble)pgVar3->v_right[0]);
  local_5c[1] = (float)(lVar12 * (longdouble)pgVar3->v_right[1]);
  local_5c[2] = (float)(lVar12 * (longdouble)pgVar3->v_right[2]);
  local_44 = *(float *)&this->field_0x80;
  local_4c = local_44 * local_5c[0];
  local_48 = local_44 * local_5c[1];
  local_44 = local_44 * local_5c[2];
  local_3c[0] = local_2c[0] + local_4c;
  local_3c[1] = local_2c[1] + local_48;
  local_3c[2] = local_2c[2] + local_44;
  pfVar9 = local_3c;
  pfVar11 = local_2c;
  for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar11 = *pfVar9;
    pfVar9 = pfVar9 + 1;
    pfVar11 = pfVar11 + 1;
  }
  lVar12 = (longdouble)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
  pgVar3 = gpGlobals;
  local_3c[0] = (float)(lVar12 * (longdouble)pgVar4->v_forward[0]);
  local_3c[1] = (float)(lVar12 * (longdouble)pgVar4->v_forward[1]);
  local_3c[2] = (float)(lVar12 * (longdouble)pgVar4->v_forward[2]);
  local_44 = *(float *)&this->field_0x80;
  local_4c = local_44 * local_3c[0];
  local_48 = local_44 * local_3c[1];
  local_44 = local_44 * local_3c[2];
  local_5c[0] = local_2c[0] + local_4c;
  local_5c[1] = local_2c[1] + local_48;
  local_5c[2] = local_2c[2] + local_44;
  pfVar9 = local_5c;
  pfVar11 = local_2c;
  for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar11 = *pfVar9;
    pfVar9 = pfVar9 + 1;
    pfVar11 = pfVar11 + 1;
  }
  lVar12 = (longdouble)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
  local_3c[0] = (float)(lVar12 * (longdouble)pgVar3->v_up[0]);
  local_3c[1] = (float)(lVar12 * (longdouble)pgVar3->v_up[1]);
  local_3c[2] = (float)(lVar12 * (longdouble)pgVar3->v_up[2]);
  fVar1 = *(float *)&this->field_0x80;
  local_4c = fVar1 * local_3c[0];
  local_48 = fVar1 * local_3c[1];
  local_44 = fVar1 * local_3c[2];
  pfVar9 = local_5c;
  pfVar11 = local_2c;
  for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar11 = *pfVar9;
    pfVar9 = pfVar9 + 1;
    pfVar11 = pfVar11 + 1;
  }
  fVar1 = SQRT(local_2c[2] * local_2c[2] + local_2c[1] * local_2c[1] + local_2c[0] * local_2c[0]);
  if (fVar1 == 0.0) {
    local_5c[0] = 0.0;
    local_5c[1] = 0.0;
    local_5c[2] = 1.0;
  }
  else {
    fVar1 = 1.0 / fVar1;
    local_5c[0] = fVar1 * local_2c[0];
    local_5c[1] = fVar1 * local_2c[1];
    local_5c[2] = fVar1 * local_2c[2];
  }
  pfVar9 = local_5c;
  pfVar11 = local_2c;
  for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar11 = *pfVar9;
    pfVar9 = pfVar9 + 1;
    pfVar11 = pfVar11 + 1;
  }
  piVar5 = (int *)(*this->vtable[0x45])(this);
  if (piVar5 != (int *)0x0) {
    pvVar8 = this->pev->origin;
    pvVar10 = (vec_t *)(*piVar5 + 8);
    for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pvVar10 = *pvVar8;
      pvVar8 = pvVar8 + 1;
      pvVar10 = pvVar10 + 1;
    }
    fVar1 = *(float *)&this->field_0x7c;
    local_5c[0] = fVar1 * local_2c[0];
    local_5c[1] = fVar1 * local_2c[1];
    local_5c[2] = fVar1 * local_2c[2];
    pfVar9 = local_5c;
    pfVar11 = (float *)(*piVar5 + 0x20);
    for (iVar6 = 3; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar11 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      pfVar11 = pfVar11 + 1;
    }
    lVar12 = (longdouble)(*g_engfuncs.pfnRandomFloat)(100.0,200.0);
    *(float *)(*piVar5 + 0x5c) = (float)lVar12;
    lVar12 = (longdouble)(*g_engfuncs.pfnRandomFloat)(100.0,300.0);
    *(float *)(*piVar5 + 0x60) = (float)lVar12;
    fVar1 = *(float *)(*piVar5 + 0x104);
    fVar2 = gpGlobals->time;
    lVar12 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.95,1.05);
    piVar5[0x1c] = (int)(float)(lVar12 * (longdouble)*(float *)&this->field_0x84);
    if ((float)piVar5[0x1c] < fVar1 - fVar2) {
      *(float *)(*piVar5 + 0x104) = gpGlobals->time + (float)piVar5[0x1c];
      piVar5[0x1c] = 0;
    }
  }
  *(int *)&this->field_0x6c = *(int *)&this->field_0x6c + -1;
  if (*(int *)&this->field_0x6c < 1) {
    peVar7 = this->pev;
    if ((peVar7->spawnflags & 1) == 0) {
      *(undefined4 *)&this->field_0xc = 0xffff0000;
      *(code **)&this->field_0x10 = CBaseEntity::SUB_Remove;
      peVar7 = this->pev;
    }
    else {
      *(undefined4 *)&this->field_0x6c = *(undefined4 *)&this->field_0x70;
      *(undefined4 *)&this->field_0xc = 0;
      *(undefined4 *)&this->field_0x10 = 0;
    }
    peVar7->nextthink = gpGlobals->time;
  }
  return;
}

