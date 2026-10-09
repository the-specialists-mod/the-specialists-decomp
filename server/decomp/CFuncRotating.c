/* ts_i386.so - CFuncRotating (13 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000a5634  CFuncRotating::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CFuncRotating::Save(CSave &) */

undefined4 __thiscall CFuncRotating::Save(CFuncRotating *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CFuncRotating",(int)this,(int *)m_SaveData,5);
  }
  return uVar2;
}

/* 000a5684  CFuncRotating::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CFuncRotating::Restore(CRestore &) */

undefined4 __thiscall CFuncRotating::Restore(CFuncRotating *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CFuncRotating",(int)this,(int)m_SaveData,5);
  }
  return uVar2;
}

/* 000a56f8  CFuncRotating::KeyValue  (371 bytes)
 * undefined KeyValue(int param_1)
 */
/* CFuncRotating::KeyValue(KeyValueData_s *) */

void __thiscall CFuncRotating::KeyValue(CFuncRotating *this,int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  vec_t *pvVar5;
  longdouble lVar6;
  float local_2c [8];
  
  iVar2 = strcmp(*(char **)(param_1 + 4),"fanfriction");
  if (iVar2 == 0) {
    lVar6 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
    *(float *)&this->field_0x64 = (float)(lVar6 * (longdouble)0.01);
  }
  else {
    iVar2 = strcmp(*(char **)(param_1 + 4),"Volume");
    if (iVar2 == 0) {
      lVar6 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
      *(float *)&this->field_0x6c = (float)(lVar6 * (longdouble)0.1);
      if (1.0 < *(float *)&this->field_0x6c) {
        *(undefined4 *)&this->field_0x6c = 0x3f800000;
      }
      if (*(float *)&this->field_0x6c < 0.0) {
        *(undefined4 *)&this->field_0x6c = 0;
      }
    }
    else {
      iVar2 = strcmp(*(char **)(param_1 + 4),"spawnorigin");
      if (iVar2 == 0) {
        UTIL_StringToVector(local_2c,*(char **)(param_1 + 8));
        bVar1 = false;
        if (((local_2c[0] == g_vecZero) && (local_2c[1] == DAT_00190ef0)) &&
           (local_2c[2] == DAT_00190ef4)) {
          bVar1 = true;
        }
        if (bVar1) {
          return;
        }
        pfVar4 = local_2c;
        pvVar5 = this->pev->origin;
        for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pvVar5 = *pfVar4;
          pfVar4 = pfVar4 + 1;
          pvVar5 = pvVar5 + 1;
        }
        return;
      }
      iVar2 = strcmp(*(char **)(param_1 + 4),"sounds");
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0xc) = 0;
        return;
      }
      uVar3 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
      *(undefined4 *)&this->field_0x74 = uVar3;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}

/* 000a5874  CFuncRotating::Spawn  (621 bytes)
 * undefined Spawn(void)
 */
/* CFuncRotating::Spawn(void) */

void __thiscall CFuncRotating::Spawn(CFuncRotating *this)

{
  entvars_t *peVar1;
  int iVar2;
  float *pfVar3;
  vec_t *pvVar4;
  float local_2c [7];
  
  *(undefined4 *)&this->field_0x70 = 0x42c60000;
  if (*(float *)&this->field_0x6c == 0.0) {
    *(undefined4 *)&this->field_0x6c = 0x3f800000;
  }
  *(undefined4 *)&this->field_0x68 = 0x3f4ccccd;
  if ((char)this->pev->spawnflags < '\0') {
    *(undefined4 *)&this->field_0x68 = 0x40000000;
  }
  else if ((this->pev->spawnflags & 0x100) == 0) {
    if ((this->pev->spawnflags & 0x200) != 0) {
      *(undefined4 *)&this->field_0x68 = 0x3f4ccccd;
    }
  }
  else {
    *(undefined4 *)&this->field_0x68 = 0x3fa00000;
  }
  if (*(float *)&this->field_0x64 == 0.0) {
    *(undefined4 *)&this->field_0x64 = 0x3f800000;
  }
  if ((this->pev->spawnflags & 4) == 0) {
    if ((this->pev->spawnflags & 8) == 0) {
      local_2c[0] = 0.0;
      local_2c[1] = 1.0;
      local_2c[2] = 0.0;
      pvVar4 = this->pev->movedir;
    }
    else {
      local_2c[0] = 1.0;
      local_2c[1] = 0.0;
      local_2c[2] = 0.0;
      pvVar4 = this->pev->movedir;
    }
  }
  else {
    local_2c[0] = 0.0;
    local_2c[1] = 0.0;
    local_2c[2] = 1.0;
    pvVar4 = this->pev->movedir;
  }
  pfVar3 = local_2c;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pvVar4 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pvVar4 = pvVar4 + 1;
  }
  peVar1 = this->pev;
  if ((peVar1->spawnflags & 2) != 0) {
    local_2c[0] = peVar1->movedir[0] * -1.0;
    local_2c[1] = peVar1->movedir[1] * -1.0;
    local_2c[2] = peVar1->movedir[2] * -1.0;
    pfVar3 = local_2c;
    pvVar4 = peVar1->movedir;
    for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pvVar4 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pvVar4 = pvVar4 + 1;
    }
  }
  if ((this->pev->spawnflags & 0x40) == 0) {
    this->pev->solid = 4;
  }
  else {
    this->pev->solid = 0;
    this->pev->skin = -1;
  }
  this->pev->movetype = 7;
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  *(undefined4 *)&this->field_0x1c = 0xffff0000;
  *(code **)&this->field_0x20 = RotatingUse;
  if (this->pev->speed <= 0.0) {
    this->pev->speed = 0.0;
  }
  peVar1 = this->pev;
  if ((peVar1->spawnflags & 1) != 0) {
    *(undefined4 *)&this->field_0xc = 0xffff0000;
    *(code **)&this->field_0x10 = CBaseEntity::SUB_CallUseToggle;
    peVar1->nextthink = peVar1->ltime + 1.5;
  }
  if ((this->pev->spawnflags & 0x20) != 0) {
    *(undefined4 *)&this->field_0x14 = 0xffff0000;
    *(code **)&this->field_0x18 = HurtTouch;
  }
  (*this->vtable[10])(this);
  return;
}

/* 000a5aec  CFuncRotating::Precache  (496 bytes)
 * undefined Precache(void)
 */
/* CFuncRotating::Precache(void) */

void __thiscall CFuncRotating::Precache(CFuncRotating *this)

{
  char cVar1;
  entvars_t *peVar2;
  bool bVar3;
  int iVar4;
  char *s;
  char *pcVar5;
  
  iVar4 = this->pev->message;
  s = gpGlobals->pStringBase + iVar4;
  if (iVar4 != 0) {
    iVar4 = -1;
    pcVar5 = s;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (iVar4 != -2) {
      (*g_engfuncs.pfnPrecacheSound)(s);
      iVar4 = (*g_engfuncs.pfnAllocString)(s);
      goto LAB_000a5c7e;
    }
  }
  switch(*(undefined4 *)&this->field_0x74) {
  default:
    if (this->pev->message != 0) {
      iVar4 = -1;
      pcVar5 = s;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      if (iVar4 != -2) {
        (*g_engfuncs.pfnPrecacheSound)(s);
        iVar4 = (*g_engfuncs.pfnAllocString)(s);
        break;
      }
    }
    iVar4 = (*g_engfuncs.pfnAllocString)("common/null.wav");
    break;
  case 1:
    (*g_engfuncs.pfnPrecacheSound)("fans/fan1.wav");
    iVar4 = (*g_engfuncs.pfnAllocString)("fans/fan1.wav");
    break;
  case 2:
    (*g_engfuncs.pfnPrecacheSound)("fans/fan2.wav");
    iVar4 = (*g_engfuncs.pfnAllocString)("fans/fan2.wav");
    break;
  case 3:
    (*g_engfuncs.pfnPrecacheSound)("fans/fan3.wav");
    iVar4 = (*g_engfuncs.pfnAllocString)("fans/fan3.wav");
    break;
  case 4:
    (*g_engfuncs.pfnPrecacheSound)("fans/fan4.wav");
    iVar4 = (*g_engfuncs.pfnAllocString)("fans/fan4.wav");
    break;
  case 5:
    (*g_engfuncs.pfnPrecacheSound)("fans/fan5.wav");
    iVar4 = (*g_engfuncs.pfnAllocString)("fans/fan5.wav");
  }
LAB_000a5c7e:
  this->pev->noise3 = iVar4;
  peVar2 = this->pev;
  bVar3 = false;
  if (((peVar2->avelocity[0] == g_vecZero) && (peVar2->avelocity[1] == DAT_00190ef0)) &&
     (peVar2->avelocity[2] == DAT_00190ef4)) {
    bVar3 = true;
  }
  if (!bVar3) {
    *(undefined4 *)&this->field_0xc = 0xffff0000;
    *(code **)&this->field_0x10 = SpinUp;
    this->pev->nextthink = this->pev->ltime + 1.5;
  }
  return;
}

/* 000a5d08  CFuncRotating::HurtTouch  (350 bytes)
 * undefined HurtTouch(int * param_1)
 */
/* CFuncRotating::HurtTouch(CBaseEntity *) */

void __thiscall CFuncRotating::HurtTouch(CFuncRotating *this,int *param_1)

{
  float fVar1;
  int iVar2;
  entvars_t *peVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float local_6c;
  float local_68;
  float fStack_64;
  float local_4c;
  float local_48;
  float fStack_44;
  float local_3c [7];
  float local_20;
  
  iVar2 = *param_1;
  if (*(float *)(iVar2 + 0x16c) != 0.0) {
    peVar3 = this->pev;
    local_20 = SQRT(peVar3->avelocity[2] * peVar3->avelocity[2] +
                    peVar3->avelocity[1] * peVar3->avelocity[1] +
                    peVar3->avelocity[0] * peVar3->avelocity[0]);
    peVar3->dmg = local_20 * 0.1;
    peVar3 = this->pev;
    (**(code **)(param_1[0x18] + 0x58))(param_1,peVar3,peVar3,peVar3->dmg,1);
    VecBModelOrigin(&local_6c,(int)this->pev);
    local_6c = *(float *)(iVar2 + 8) - local_6c;
    local_68 = *(float *)(iVar2 + 0xc) - local_68;
    fStack_64 = *(float *)(iVar2 + 0x10) - fStack_64;
    local_20 = SQRT(fStack_64 * fStack_64 + local_68 * local_68 + local_6c * local_6c);
    if (local_20 == 0.0) {
      fStack_44 = 1.0;
      local_4c = 0.0;
      local_48 = 0.0;
    }
    else {
      local_20 = 1.0 / local_20;
      local_4c = local_20 * local_6c;
      local_48 = local_20 * local_68;
      fStack_44 = local_20 * fStack_64;
    }
    fVar1 = this->pev->dmg;
    local_3c[0] = fVar1 * local_4c;
    local_3c[1] = fVar1 * local_48;
    local_3c[2] = fVar1 * fStack_44;
    pfVar5 = local_3c;
    pfVar6 = (float *)(iVar2 + 0x20);
    for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar6 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar6 = pfVar6 + 1;
    }
  }
  return;
}

/* 000a5e68  CFuncRotating::RampPitchVol  (365 bytes)
 * undefined RampPitchVol(int * param_1)
 */
/* CFuncRotating::RampPitchVol(int) */

void CFuncRotating::RampPitchVol(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  fVar1 = *(float *)(iVar2 + 0x5c);
  if ((*(float *)(iVar2 + 0x5c) == 0.0) &&
     (fVar1 = *(float *)(iVar2 + 100), *(float *)(iVar2 + 0x60) != 0.0)) {
    fVar1 = *(float *)(iVar2 + 0x60);
  }
  iVar2 = (int)ROUND(fVar1);
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (*(float *)(*param_1 + 0x44) == 0.0) {
    if (*(float *)(*param_1 + 0x48) == 0.0) {
      fVar1 = *(float *)(*param_1 + 0x4c);
    }
    else {
      fVar1 = *(float *)(*param_1 + 0x48);
    }
  }
  else {
    fVar1 = *(float *)(*param_1 + 0x44);
  }
  iVar3 = (int)ROUND(fVar1 * *(float *)(*param_1 + 0x1f8));
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  iVar4 = (int)ROUND(((float)iVar2 / (float)iVar3) * 70.0 + 30.0);
  if (iVar4 == 100) {
    iVar4 = 99;
  }
  EMIT_SOUND_DYN(*(int *)(*param_1 + 0x208),6,gpGlobals->pStringBase + *(int *)(*param_1 + 500),
                 ((float)iVar2 / (float)iVar3) * (float)param_1[0x1b],param_1[0x1a],0xc0,iVar4,0.5);
  return;
}

/* 000a5fd8  CFuncRotating::SpinUp  (631 bytes)
 * undefined SpinUp(void)
 */
/* CFuncRotating::SpinUp(void) */

void __thiscall CFuncRotating::SpinUp(CFuncRotating *this)

{
  float fVar1;
  entvars_t *peVar2;
  int iVar3;
  int iVar4;
  vec_t *pvVar5;
  float *pfVar6;
  float local_5c [4];
  float local_4c [8];
  float local_2c [7];
  
  this->pev->nextthink = this->pev->ltime + 0.1;
  peVar2 = this->pev;
  local_5c[2] = peVar2->speed * *(float *)&this->field_0x64;
  local_5c[0] = local_5c[2] * peVar2->movedir[0];
  local_5c[1] = local_5c[2] * peVar2->movedir[1];
  local_5c[2] = local_5c[2] * peVar2->movedir[2];
  local_4c[0] = peVar2->avelocity[0] + local_5c[0];
  local_4c[1] = peVar2->avelocity[1] + local_5c[1];
  local_4c[2] = peVar2->avelocity[2] + local_5c[2];
  pfVar6 = local_4c;
  pvVar5 = peVar2->avelocity;
  for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pvVar5 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pvVar5 = pvVar5 + 1;
  }
  pvVar5 = this->pev->avelocity;
  pfVar6 = local_2c;
  for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar6 = *pvVar5;
    pvVar5 = pvVar5 + 1;
    pfVar6 = pfVar6 + 1;
  }
  iVar4 = (int)ROUND(local_2c[0]);
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  iVar3 = (int)ROUND(this->pev->movedir[0] * this->pev->speed);
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  if (iVar3 <= iVar4) {
    iVar4 = (int)ROUND(local_2c[1]);
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    iVar3 = (int)ROUND(this->pev->movedir[1] * this->pev->speed);
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if (iVar3 <= iVar4) {
      iVar4 = (int)ROUND(local_2c[2]);
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      iVar3 = (int)ROUND(this->pev->movedir[2] * this->pev->speed);
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      if (iVar3 <= iVar4) {
        peVar2 = this->pev;
        fVar1 = peVar2->speed;
        local_5c[0] = fVar1 * peVar2->movedir[0];
        local_5c[1] = fVar1 * peVar2->movedir[1];
        local_5c[2] = fVar1 * peVar2->movedir[2];
        pfVar6 = local_5c;
        pvVar5 = peVar2->avelocity;
        for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pvVar5 = *pfVar6;
          pfVar6 = pfVar6 + 1;
          pvVar5 = pvVar5 + 1;
        }
        EMIT_SOUND_DYN((int)this->pev->pContainingEntity,6,
                       gpGlobals->pStringBase + this->pev->noise3,*(undefined4 *)&this->field_0x6c,
                       *(undefined4 *)&this->field_0x68,0xc0,100,0.5);
        *(undefined4 *)&this->field_0xc = 0xffff0000;
        *(code **)&this->field_0x10 = Rotate;
        Rotate(this);
        return;
      }
    }
  }
  RampPitchVol((int *)this);
  return;
}

/* 000a6254  CFuncRotating::SpinDown  (501 bytes)
 * undefined SpinDown(void)
 */
/* CFuncRotating::SpinDown(void) */

void __thiscall CFuncRotating::SpinDown(CFuncRotating *this)

{
  float fVar1;
  entvars_t *peVar2;
  int iVar3;
  float *pfVar4;
  vec_t *pvVar5;
  vec_t *pvVar6;
  float local_4c [8];
  float local_2c [7];
  
  this->pev->nextthink = this->pev->ltime + 0.1;
  peVar2 = this->pev;
  fVar1 = peVar2->speed * *(float *)&this->field_0x64;
  local_4c[0] = peVar2->avelocity[0] - fVar1 * peVar2->movedir[0];
  local_4c[1] = peVar2->avelocity[1] - fVar1 * peVar2->movedir[1];
  local_4c[2] = peVar2->avelocity[2] - fVar1 * peVar2->movedir[2];
  pfVar4 = local_4c;
  pvVar5 = peVar2->avelocity;
  for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pvVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pvVar5 = pvVar5 + 1;
  }
  pvVar5 = this->pev->avelocity;
  pfVar4 = local_2c;
  for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar4 = *pvVar5;
    pvVar5 = pvVar5 + 1;
    pfVar4 = pfVar4 + 1;
  }
  if (this->pev->movedir[0] == 0.0) {
    if (this->pev->movedir[1] == 0.0) {
      fVar1 = this->pev->movedir[2];
    }
    else {
      fVar1 = this->pev->movedir[1];
    }
  }
  else {
    fVar1 = this->pev->movedir[0];
  }
  if (((((0.0 < fVar1) && (local_2c[0] <= 0.0)) && (local_2c[1] <= 0.0)) && (local_2c[2] <= 0.0)) ||
     (((fVar1 < 0.0 && (0.0 <= local_2c[0])) && ((0.0 <= local_2c[1] && (0.0 <= local_2c[2])))))) {
    pvVar5 = (vec_t *)&g_vecZero;
    pvVar6 = this->pev->avelocity;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pvVar6 = *pvVar5;
      pvVar5 = pvVar5 + 1;
      pvVar6 = pvVar6 + 1;
    }
    EMIT_SOUND_DYN((int)this->pev->pContainingEntity,6,gpGlobals->pStringBase + this->pev->noise3,0,
                   0,0x20,(int)ROUND(*(float *)&this->field_0x70),0.5);
    *(undefined4 *)&this->field_0xc = 0xffff0000;
    *(code **)&this->field_0x10 = Rotate;
    Rotate(this);
  }
  else {
    RampPitchVol((int *)this);
  }
  return;
}

/* 000a644c  CFuncRotating::Rotate  (39 bytes)
 * undefined Rotate(void)
 */
/* CFuncRotating::Rotate(void) */

void __thiscall CFuncRotating::Rotate(CFuncRotating *this)

{
  this->pev->nextthink = this->pev->ltime + 10.0;
  return;
}

/* 000a6474  CFuncRotating::RotatingUse  (489 bytes)
 * undefined RotatingUse(CFuncRotating * param_1)
 */
/* CFuncRotating::RotatingUse(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CFuncRotating::RotatingUse(CFuncRotating *param_1)

{
  float fVar1;
  entvars_t *peVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  vec_t *pvVar6;
  float local_3c [11];
  
  peVar2 = param_1->pev;
  if ((peVar2->spawnflags & 0x10) == 0) {
    peVar2 = param_1->pev;
    if ((peVar2->spawnflags & 0x10) != 0) {
      return;
    }
    bVar3 = false;
    if (((peVar2->avelocity[0] == g_vecZero) && (peVar2->avelocity[1] == DAT_00190ef0)) &&
       (peVar2->avelocity[2] == DAT_00190ef4)) {
      bVar3 = true;
    }
    if (bVar3) {
      EMIT_SOUND_DYN((int)param_1->pev->pContainingEntity,6,
                     gpGlobals->pStringBase + param_1->pev->noise3,
                     *(undefined4 *)&param_1->field_0x6c,*(undefined4 *)&param_1->field_0x68,0,100,
                     0.5);
      peVar2 = param_1->pev;
      fVar1 = peVar2->speed;
      local_3c[0] = fVar1 * peVar2->movedir[0];
      local_3c[1] = fVar1 * peVar2->movedir[1];
      local_3c[2] = fVar1 * peVar2->movedir[2];
      pfVar5 = local_3c;
      pvVar6 = peVar2->avelocity;
      for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pvVar6 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        pvVar6 = pvVar6 + 1;
      }
      *(undefined4 *)&param_1->field_0xc = 0xffff0000;
      *(code **)&param_1->field_0x10 = Rotate;
      Rotate(param_1);
      return;
    }
  }
  else {
    bVar3 = false;
    if (((peVar2->avelocity[0] == g_vecZero) && (peVar2->avelocity[1] == DAT_00190ef0)) &&
       (peVar2->avelocity[2] == DAT_00190ef4)) {
      bVar3 = true;
    }
    if (bVar3) {
      *(undefined4 *)&param_1->field_0xc = 0xffff0000;
      *(code **)&param_1->field_0x10 = SpinUp;
      EMIT_SOUND_DYN((int)param_1->pev->pContainingEntity,6,
                     gpGlobals->pStringBase + param_1->pev->noise3,0x3c23d70a,
                     *(undefined4 *)&param_1->field_0x68,0,0x1e,0.5);
      param_1->pev->nextthink = param_1->pev->ltime + 0.1;
      return;
    }
  }
  *(undefined4 *)&param_1->field_0xc = 0xffff0000;
  *(code **)&param_1->field_0x10 = SpinDown;
  param_1->pev->nextthink = param_1->pev->ltime + 0.1;
  return;
}

/* 000a6660  CFuncRotating::Blocked  (38 bytes)
 * undefined Blocked(int param_1)
 */
/* CFuncRotating::Blocked(CBaseEntity *) */

void __thiscall CFuncRotating::Blocked(CFuncRotating *this,int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x60) + 0x58))(param_1,this->pev,this->pev,this->pev->dmg,1);
  return;
}

/* 000a7538  CFuncRotating::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CFuncRotating::ObjectCaps(void) */

undefined4 CFuncRotating::ObjectCaps(void)

{
  return 0;
}

