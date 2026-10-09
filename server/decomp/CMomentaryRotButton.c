/* ts_i386.so - CMomentaryRotButton (14 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000a948c  CMomentaryRotButton::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CMomentaryRotButton::Save(CSave &) */

undefined4 __thiscall CMomentaryRotButton::Save(CMomentaryRotButton *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseToggle::Save((CBaseToggle *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CMomentaryRotButton",(int)this,(int *)m_SaveData,6);
  }
  return uVar2;
}

/* 000a94dc  CMomentaryRotButton::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CMomentaryRotButton::Restore(CRestore &) */

undefined4 __thiscall CMomentaryRotButton::Restore(CMomentaryRotButton *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseToggle::Restore((CBaseToggle *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CMomentaryRotButton",(int)this,(int)m_SaveData,6);
  }
  return uVar2;
}

/* 000a9550  CMomentaryRotButton::Spawn  (517 bytes)
 * undefined Spawn(void)
 */
/* CMomentaryRotButton::Spawn(void) */

void __thiscall CMomentaryRotButton::Spawn(CMomentaryRotButton *this)

{
  entvars_t *peVar1;
  char *s;
  int iVar2;
  vec_t *pvVar3;
  float *pfVar4;
  float *pfVar5;
  vec_t *pvVar6;
  undefined4 *puVar7;
  float local_3c [4];
  float local_2c [7];
  
  CBaseToggle::AxisDir((int)this->pev);
  if (this->pev->speed == 0.0) {
    this->pev->speed = 100.0;
  }
  if (0.0 <= *(float *)&this->field_0x88) {
    pvVar3 = this->pev->angles;
    pvVar6 = (vec_t *)&this->field_0x110;
    for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pvVar6 = *pvVar3;
      pvVar3 = pvVar3 + 1;
      pvVar6 = pvVar6 + 1;
    }
    peVar1 = this->pev;
    local_2c[2] = *(float *)&this->field_0x88;
    local_2c[0] = local_2c[2] * peVar1->movedir[0];
    local_2c[1] = local_2c[2] * peVar1->movedir[1];
    local_2c[2] = local_2c[2] * peVar1->movedir[2];
    local_3c[0] = peVar1->angles[0] + local_2c[0];
    local_3c[1] = peVar1->angles[1] + local_2c[1];
    local_3c[2] = peVar1->angles[2] + local_2c[2];
    pfVar4 = local_3c;
    puVar7 = (undefined4 *)&this->field_0x11c;
    for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      puVar7 = puVar7 + 1;
    }
    *(undefined4 *)&this->field_0x108 = 0xffffffff;
  }
  else {
    peVar1 = this->pev;
    local_3c[2] = *(float *)&this->field_0x88;
    local_3c[0] = local_3c[2] * peVar1->movedir[0];
    local_3c[1] = local_3c[2] * peVar1->movedir[1];
    local_3c[2] = local_3c[2] * peVar1->movedir[2];
    local_2c[0] = peVar1->angles[0] + local_3c[0];
    local_2c[1] = peVar1->angles[1] + local_3c[1];
    local_2c[2] = peVar1->angles[2] + local_3c[2];
    pfVar4 = local_2c;
    pfVar5 = (float *)&this->field_0x110;
    for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
    pvVar3 = this->pev->angles;
    pvVar6 = (vec_t *)&this->field_0x11c;
    for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pvVar6 = *pvVar3;
      pvVar3 = pvVar3 + 1;
      pvVar6 = pvVar6 + 1;
    }
    *(undefined4 *)&this->field_0x108 = 1;
    this->field_0x8b = this->field_0x8b ^ 0x80;
  }
  if ((this->pev->spawnflags & 1) == 0) {
    this->pev->solid = 0;
  }
  else {
    this->pev->solid = 4;
  }
  this->pev->movetype = 7;
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  s = ButtonSound(*(undefined4 *)&this->field_0x128);
  (*g_engfuncs.pfnPrecacheSound)(s);
  iVar2 = (*g_engfuncs.pfnAllocString)(s);
  this->pev->noise = iVar2;
  *(undefined4 *)&this->field_0x104 = 0;
  return;
}

/* 000a9758  CMomentaryRotButton::KeyValue  (161 bytes)
 * undefined KeyValue(int param_1)
 */
/* CMomentaryRotButton::KeyValue(KeyValueData_s *) */

void __thiscall CMomentaryRotButton::KeyValue(CMomentaryRotButton *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  longdouble lVar3;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"returnspeed");
  if (iVar1 == 0) {
    lVar3 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
    *(float *)&this->field_0x10c = (float)lVar3;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"sounds");
    if (iVar1 == 0) {
      uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
      *(undefined4 *)&this->field_0x128 = uVar2;
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      CBaseToggle::KeyValue((CBaseToggle *)this,param_1);
    }
  }
  return;
}

/* 000a97fc  CMomentaryRotButton::PlaySound  (83 bytes)
 * undefined PlaySound(void)
 */
/* CMomentaryRotButton::PlaySound(void) */

void __thiscall CMomentaryRotButton::PlaySound(CMomentaryRotButton *this)

{
  EMIT_SOUND_DYN((int)this->pev->pContainingEntity,2,gpGlobals->pStringBase + this->pev->noise,
                 0x3f800000,0x3f4ccccd,0,100,0.5);
  return;
}

/* 000a9850  CMomentaryRotButton::Use  (106 bytes)
 * undefined Use(CMomentaryRotButton * param_1)
 */
/* CMomentaryRotButton::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CMomentaryRotButton::Use(CMomentaryRotButton *param_1)

{
  longdouble lVar1;
  
  lVar1 = CBaseToggle::AxisDelta
                    ((byte_conflict)param_1->pev->spawnflags,param_1->pev->angles,
                     (float *)&param_1->field_0x110);
  param_1->pev->ideal_yaw = (float)(lVar1 / (longdouble)*(float *)&param_1->field_0x88);
  UpdateAllButtons(param_1,param_1->pev->ideal_yaw,1);
  UpdateTarget(param_1,param_1->pev->ideal_yaw);
  return;
}

/* 000a98bc  CMomentaryRotButton::UpdateAllButtons  (256 bytes)
 * undefined UpdateAllButtons(float param_1, int param_2)
 */
/* CMomentaryRotButton::UpdateAllButtons(float, int) */

void __thiscall
CMomentaryRotButton::UpdateAllButtons(CMomentaryRotButton *this,float param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  CMomentaryRotButton *this_00;
  edict_t *pEdictStartSearchAfter;
  
  pEdictStartSearchAfter = (edict_t *)0x0;
  do {
    pEdictStartSearchAfter =
         (*g_engfuncs.pfnFindEntityByString)
                   (pEdictStartSearchAfter,"target",gpGlobals->pStringBase + this->pev->target);
    bVar1 = false;
    if (pEdictStartSearchAfter == (edict_t *)0x0) {
LAB_000a9924:
      bVar1 = true;
    }
    else {
      iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter);
      if (iVar2 == 0) goto LAB_000a9924;
    }
    if (bVar1) {
      return;
    }
    iVar2 = strcmp(gpGlobals->pStringBase +
                   *(int *)((uint)&pEdictStartSearchAfter->v &
                           (pEdictStartSearchAfter == (edict_t *)0x0) - 1),"momentary_rot_button");
    if (iVar2 == 0) {
      this_00 = (CMomentaryRotButton *)0x0;
      if (pEdictStartSearchAfter != (edict_t *)0x0) {
        this_00 = pEdictStartSearchAfter->pvPrivateData;
      }
      if (this_00 != (CMomentaryRotButton *)0x0) {
        if (param_2 == 0) {
          UpdateSelfReturn(this_00,param_1);
        }
        else {
          UpdateSelf(this_00,param_1);
        }
      }
    }
  } while( true );
}

/* 000a99c0  CMomentaryRotButton::UpdateSelf  (378 bytes)
 * undefined UpdateSelf(float param_1)
 */
/* CMomentaryRotButton::UpdateSelf(float) */

void __thiscall CMomentaryRotButton::UpdateSelf(CMomentaryRotButton *this,float param_1)

{
  entvars_t *peVar1;
  float fVar2;
  int iVar3;
  vec_t *pvVar4;
  float *pfVar5;
  vec_t *pvVar6;
  bool bVar7;
  float local_3c [11];
  
  bVar7 = *(int *)&this->field_0x104 == 0;
  if (bVar7) {
    *(int *)&this->field_0x108 = -*(int *)&this->field_0x108;
  }
  *(undefined4 *)&this->field_0x104 = 1;
  this->pev->nextthink = this->pev->ltime + 0.1;
  if ((*(int *)&this->field_0x108 < 1) || (param_1 < 1.0)) {
    if ((-1 < *(int *)&this->field_0x108) || (0.0 < param_1)) {
      if (bVar7) {
        PlaySound(this);
      }
      peVar1 = this->pev;
      if (peVar1->ltime <= peVar1->nextthink) {
        this->pev->nextthink = this->pev->nextthink + 0.1;
      }
      else {
        peVar1->nextthink = peVar1->ltime + 0.1;
      }
      peVar1 = this->pev;
      fVar2 = (float)*(int *)&this->field_0x108 * peVar1->speed;
      local_3c[0] = fVar2 * peVar1->movedir[0];
      local_3c[1] = fVar2 * peVar1->movedir[1];
      local_3c[2] = fVar2 * peVar1->movedir[2];
      pfVar5 = local_3c;
      pvVar4 = peVar1->avelocity;
      for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pvVar4 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        pvVar4 = pvVar4 + 1;
      }
      *(undefined4 *)&this->field_0xc = 0xffff0000;
      *(code **)&this->field_0x10 = Off;
      return;
    }
    pvVar4 = (vec_t *)&g_vecZero;
    pvVar6 = this->pev->avelocity;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pvVar6 = *pvVar4;
      pvVar4 = pvVar4 + 1;
      pvVar6 = pvVar6 + 1;
    }
    peVar1 = this->pev;
    pvVar4 = (vec_t *)&this->field_0x110;
  }
  else {
    pvVar4 = (vec_t *)&g_vecZero;
    pvVar6 = this->pev->avelocity;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pvVar6 = *pvVar4;
      pvVar4 = pvVar4 + 1;
      pvVar6 = pvVar6 + 1;
    }
    peVar1 = this->pev;
    pvVar4 = (vec_t *)&this->field_0x11c;
  }
  pvVar6 = peVar1->angles;
  for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pvVar6 = *pvVar4;
    pvVar4 = pvVar4 + 1;
    pvVar6 = pvVar6 + 1;
  }
  return;
}

/* 000a9b3c  CMomentaryRotButton::UpdateTarget  (212 bytes)
 * undefined UpdateTarget(undefined4 param_1)
 */
/* CMomentaryRotButton::UpdateTarget(float) */

void __thiscall CMomentaryRotButton::UpdateTarget(CMomentaryRotButton *this,undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  edict_t *peVar3;
  void *pvVar4;
  edict_t *pEdictStartSearchAfter;
  
  if (this->pev->target != 0) {
    pEdictStartSearchAfter = (edict_t *)0x0;
LAB_000a9b70:
    pEdictStartSearchAfter =
         (*g_engfuncs.pfnFindEntityByString)
                   (pEdictStartSearchAfter,"targetname",gpGlobals->pStringBase + this->pev->target);
    bVar1 = false;
    if (pEdictStartSearchAfter == (edict_t *)0x0) {
LAB_000a9bb8:
      bVar1 = true;
    }
    else {
      iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter);
      if (iVar2 == 0) goto LAB_000a9bb8;
    }
    if (!bVar1) {
      peVar3 = pEdictStartSearchAfter;
      if (pEdictStartSearchAfter == (edict_t *)0x0) {
        peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
      }
      pvVar4 = (void *)0x0;
      if (peVar3 != (edict_t *)0x0) {
        pvVar4 = peVar3->pvPrivateData;
      }
      if (pvVar4 != (void *)0x0) {
        (**(code **)(*(int *)((int)pvVar4 + 0x60) + 0xe0))(pvVar4,this,this,2,param_1);
      }
      goto LAB_000a9b70;
    }
  }
  return;
}

/* 000a9c10  CMomentaryRotButton::Off  (155 bytes)
 * undefined Off(void)
 */
/* CMomentaryRotButton::Off(void) */

void __thiscall CMomentaryRotButton::Off(CMomentaryRotButton *this)

{
  entvars_t *peVar1;
  int iVar2;
  vec_t *pvVar3;
  vec_t *pvVar4;
  
  pvVar3 = (vec_t *)&g_vecZero;
  pvVar4 = this->pev->avelocity;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pvVar4 = *pvVar3;
    pvVar3 = pvVar3 + 1;
    pvVar4 = pvVar4 + 1;
  }
  *(undefined4 *)&this->field_0x104 = 0;
  peVar1 = this->pev;
  if (((peVar1->spawnflags & 0x10) == 0) || (*(float *)&this->field_0x10c <= 0.0)) {
    *(undefined4 *)&this->field_0xc = 0;
    *(undefined4 *)&this->field_0x10 = 0;
  }
  else {
    *(undefined4 *)&this->field_0xc = 0xffff0000;
    *(code **)&this->field_0x10 = Return;
    peVar1->nextthink = peVar1->ltime + 0.1;
    *(undefined4 *)&this->field_0x108 = 0xffffffff;
  }
  return;
}

/* 000a9cb0  CMomentaryRotButton::Return  (116 bytes)
 * undefined Return(void)
 */
/* CMomentaryRotButton::Return(void) */

void __thiscall CMomentaryRotButton::Return(CMomentaryRotButton *this)

{
  float fVar1;
  longdouble lVar2;
  
  lVar2 = CBaseToggle::AxisDelta
                    ((byte_conflict)this->pev->spawnflags,this->pev->angles,
                     (float *)&this->field_0x110);
  fVar1 = (float)(lVar2 / (longdouble)*(float *)&this->field_0x88);
  UpdateAllButtons(this,fVar1,0);
  if (0.0 < fVar1) {
    UpdateTarget(this,fVar1);
  }
  return;
}

/* 000a9d24  CMomentaryRotButton::UpdateSelfReturn  (190 bytes)
 * undefined UpdateSelfReturn(float param_1)
 */
/* CMomentaryRotButton::UpdateSelfReturn(float) */

void __thiscall CMomentaryRotButton::UpdateSelfReturn(CMomentaryRotButton *this,float param_1)

{
  entvars_t *peVar1;
  float fVar2;
  int iVar3;
  vec_t *pvVar4;
  float *pfVar5;
  vec_t *pvVar6;
  float local_1c [4];
  
  if (0.0 < param_1) {
    peVar1 = this->pev;
    fVar2 = -*(float *)&this->field_0x10c;
    local_1c[0] = fVar2 * peVar1->movedir[0];
    local_1c[1] = fVar2 * peVar1->movedir[1];
    local_1c[2] = fVar2 * peVar1->movedir[2];
    pfVar5 = local_1c;
    pvVar4 = peVar1->avelocity;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pvVar4 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pvVar4 = pvVar4 + 1;
    }
    this->pev->nextthink = this->pev->ltime + 0.1;
  }
  else {
    pvVar4 = (vec_t *)&g_vecZero;
    pvVar6 = this->pev->avelocity;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pvVar6 = *pvVar4;
      pvVar4 = pvVar4 + 1;
      pvVar6 = pvVar6 + 1;
    }
    pvVar4 = (vec_t *)&this->field_0x110;
    pvVar6 = this->pev->angles;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pvVar6 = *pvVar4;
      pvVar4 = pvVar4 + 1;
      pvVar6 = pvVar6 + 1;
    }
    this->pev->nextthink = -1.0;
    *(undefined4 *)&this->field_0xc = 0;
    *(undefined4 *)&this->field_0x10 = 0;
  }
  return;
}

/* 000aa9b4  CMomentaryRotButton::ObjectCaps  (30 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CMomentaryRotButton::ObjectCaps(void) */

undefined4 __thiscall CMomentaryRotButton::ObjectCaps(CMomentaryRotButton *this)

{
  if ((this->pev->spawnflags & 1) != 0) {
    return 0;
  }
  return 0x10;
}

/* 000aa9d8  CMomentaryRotButton::Instance  (17 bytes)
 * undefined4 Instance(int param_1)
 */
/* CMomentaryRotButton::Instance(edict_s *) */

undefined4 CMomentaryRotButton::Instance(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x7c);
  }
  return uVar1;
}

