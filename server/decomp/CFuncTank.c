/* ts_i386.so - CFuncTank (27 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000c20e8  CFuncTank::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CFuncTank::Save(CSave &) */

undefined4 __thiscall CFuncTank::Save(CFuncTank *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CFuncTank",(int)this,(int *)m_SaveData,0x1a);
  }
  return uVar2;
}

/* 000c2138  CFuncTank::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CFuncTank::Restore(CRestore &) */

undefined4 __thiscall CFuncTank::Restore(CFuncTank *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CFuncTank",(int)this,(int)m_SaveData,0x1a);
  }
  return uVar2;
}

/* 000c2188  CFuncTank::Spawn  (520 bytes)
 * undefined Spawn(void)
 */
/* CFuncTank::Spawn(void) */

void __thiscall CFuncTank::Spawn(CFuncTank *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  entvars_t *peVar4;
  int iVar5;
  float *pfVar6;
  vec_t *pvVar7;
  float *pfVar8;
  vec_t *pvVar9;
  float local_6c;
  float local_68;
  float local_64;
  float local_5c;
  float local_58;
  float local_54;
  float local_4c;
  float local_48;
  float local_44;
  float local_3c [11];
  
  (*this->vtable[10])(this);
  this->pev->movetype = 7;
  this->pev->solid = 4;
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  peVar4 = this->pev;
  *(vec_t *)&this[1].field_0x14 = peVar4->angles[1];
  *(vec_t *)&this[1].field_0x24 = peVar4->angles[0];
  if ((peVar4->spawnflags & 1) != 0) {
    peVar4->nextthink = peVar4->ltime + 1.0;
  }
  (*g_engfuncs.pfnAngleVectors)(this->pev->angles,&local_4c,&local_5c,&local_6c);
  peVar4 = this->pev;
  fVar1 = *(float *)&this[1].field_0x4c;
  fVar2 = *(float *)&this[1].field_0x50;
  fVar3 = *(float *)&this[1].field_0x54;
  local_3c[0] = peVar4->origin[0] + fVar1 * local_4c + fVar2 * local_5c + fVar3 * local_6c;
  local_3c[1] = peVar4->origin[1] + fVar1 * local_48 + fVar2 * local_58 + fVar3 * local_68;
  local_3c[2] = peVar4->origin[2] + fVar1 * local_44 + fVar2 * local_54 + fVar3 * local_64;
  pfVar6 = local_3c;
  pfVar8 = (float *)&this[2].field_0x8;
  for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar8 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar8 = pfVar8 + 1;
  }
  if (*(float *)&this[1].field_0x38 <= 0.0) {
    *(undefined4 *)&this[1].field_0x38 = 0x3f800000;
  }
  if (5 < *(uint *)&this[2].field_0x14) {
    *(undefined4 *)&this[2].field_0x14 = 0;
  }
  pvVar7 = this->pev->origin;
  pvVar9 = this->pev->oldorigin;
  for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pvVar9 = *pvVar7;
    pvVar7 = pvVar7 + 1;
    pvVar9 = pvVar9 + 1;
  }
  return;
}

/* 000c2390  CFuncTank::Precache  (162 bytes)
 * undefined Precache(void)
 */
/* CFuncTank::Precache(void) */

void __thiscall CFuncTank::Precache(CFuncTank *this)

{
  if (*(int *)&this[1].field_0x5c != 0) {
    (*g_engfuncs.pfnPrecacheModel)(gpGlobals->pStringBase + *(int *)&this[1].field_0x5c);
  }
  if (this[1].vtable != (void **)0x0) {
    (*g_engfuncs.pfnPrecacheModel)(gpGlobals->pStringBase + (int)this[1].vtable);
  }
  if (this->pev->noise != 0) {
    (*g_engfuncs.pfnPrecacheSound)(gpGlobals->pStringBase + this->pev->noise);
  }
  return;
}

/* 000c2434  CFuncTank::KeyValue  (1293 bytes)
 * undefined KeyValue(int param_1)
 */
/* CFuncTank::KeyValue(KeyValueData_s *) */

void __thiscall CFuncTank::KeyValue(CFuncTank *this,int param_1)

{
  int iVar1;
  void **ppvVar2;
  entvars_t *peVar3;
  undefined4 uVar4;
  longdouble lVar5;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"yawrate");
  if (iVar1 == 0) {
    lVar5 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
    *(float *)&this[1].field_0x18 = (float)lVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"yawrange");
    if (iVar1 == 0) {
      lVar5 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
      *(float *)&this[1].field_0x1c = (float)lVar5;
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      iVar1 = strcmp(*(char **)(param_1 + 4),"yawtolerance");
      if (iVar1 == 0) {
        lVar5 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
        *(float *)&this[1].field_0x20 = (float)lVar5;
        *(undefined4 *)(param_1 + 0xc) = 1;
      }
      else {
        iVar1 = strcmp(*(char **)(param_1 + 4),"pitchrange");
        if (iVar1 == 0) {
          lVar5 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
          *(float *)&this[1].field_0x2c = (float)lVar5;
          *(undefined4 *)(param_1 + 0xc) = 1;
        }
        else {
          iVar1 = strcmp(*(char **)(param_1 + 4),"pitchrate");
          if (iVar1 == 0) {
            lVar5 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
            *(float *)&this[1].field_0x28 = (float)lVar5;
            *(undefined4 *)(param_1 + 0xc) = 1;
          }
          else {
            iVar1 = strcmp(*(char **)(param_1 + 4),"pitchtolerance");
            if (iVar1 == 0) {
              lVar5 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
              *(float *)&this[1].field_0x30 = (float)lVar5;
              *(undefined4 *)(param_1 + 0xc) = 1;
            }
            else {
              iVar1 = strcmp(*(char **)(param_1 + 4),"firerate");
              if (iVar1 == 0) {
                lVar5 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
                *(float *)&this[1].field_0x38 = (float)lVar5;
                *(undefined4 *)(param_1 + 0xc) = 1;
              }
              else {
                iVar1 = strcmp(*(char **)(param_1 + 4),"barrel");
                if (iVar1 == 0) {
                  lVar5 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
                  *(float *)&this[1].field_0x4c = (float)lVar5;
                  *(undefined4 *)(param_1 + 0xc) = 1;
                }
                else {
                  iVar1 = strcmp(*(char **)(param_1 + 4),"barrely");
                  if (iVar1 == 0) {
                    lVar5 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
                    *(float *)&this[1].field_0x50 = (float)lVar5;
                    *(undefined4 *)(param_1 + 0xc) = 1;
                  }
                  else {
                    iVar1 = strcmp(*(char **)(param_1 + 4),"barrelz");
                    if (iVar1 == 0) {
                      lVar5 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
                      *(float *)&this[1].field_0x54 = (float)lVar5;
                      *(undefined4 *)(param_1 + 0xc) = 1;
                    }
                    else {
                      iVar1 = strcmp(*(char **)(param_1 + 4),"spritescale");
                      if (iVar1 == 0) {
                        lVar5 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
                        *(float *)&this[1].field_0x58 = (float)lVar5;
                        *(undefined4 *)(param_1 + 0xc) = 1;
                      }
                      else {
                        iVar1 = strcmp(*(char **)(param_1 + 4),"spritesmoke");
                        if (iVar1 == 0) {
                          iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
                          *(int *)&this[1].field_0x5c = iVar1;
                        }
                        else {
                          iVar1 = strcmp(*(char **)(param_1 + 4),"spriteflash");
                          if (iVar1 == 0) {
                            ppvVar2 = (void **)(*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8))
                            ;
                            this[1].vtable = ppvVar2;
                          }
                          else {
                            iVar1 = strcmp(*(char **)(param_1 + 4),"rotatesound");
                            if (iVar1 == 0) {
                              iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
                              this->pev->noise = iVar1;
                            }
                            else {
                              iVar1 = strcmp(*(char **)(param_1 + 4),"persistence");
                              if (iVar1 == 0) {
                                lVar5 = (longdouble)
                                        __strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
                                *(float *)&this[1].field_0x40 = (float)lVar5;
                                *(undefined4 *)(param_1 + 0xc) = 1;
                                return;
                              }
                              iVar1 = strcmp(*(char **)(param_1 + 4),"bullet");
                              if (iVar1 == 0) {
                                peVar3 = (entvars_t *)
                                         __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
                                this[2].pev = peVar3;
                                *(undefined4 *)(param_1 + 0xc) = 1;
                                return;
                              }
                              iVar1 = strcmp(*(char **)(param_1 + 4),"bullet_damage");
                              if (iVar1 == 0) {
                                uVar4 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
                                *(undefined4 *)&this[2].field_0x4 = uVar4;
                                *(undefined4 *)(param_1 + 0xc) = 1;
                                return;
                              }
                              iVar1 = strcmp(*(char **)(param_1 + 4),"firespread");
                              if (iVar1 == 0) {
                                uVar4 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
                                *(undefined4 *)&this[2].field_0x14 = uVar4;
                                *(undefined4 *)(param_1 + 0xc) = 1;
                                return;
                              }
                              iVar1 = strcmp(*(char **)(param_1 + 4),"minRange");
                              if (iVar1 == 0) {
                                lVar5 = (longdouble)
                                        __strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
                                *(float *)&this[1].field_0x44 = (float)lVar5;
                                *(undefined4 *)(param_1 + 0xc) = 1;
                                return;
                              }
                              iVar1 = strcmp(*(char **)(param_1 + 4),"maxRange");
                              if (iVar1 == 0) {
                                lVar5 = (longdouble)
                                        __strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
                                *(float *)&this[1].field_0x48 = (float)lVar5;
                                *(undefined4 *)(param_1 + 0xc) = 1;
                                return;
                              }
                              iVar1 = strcmp(*(char **)(param_1 + 4),"master");
                              if (iVar1 != 0) {
                                *(undefined4 *)(param_1 + 0xc) = 0;
                                return;
                              }
                              iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
                              *(int *)&this[2].field_0x18 = iVar1;
                            }
                          }
                        }
                        *(undefined4 *)(param_1 + 0xc) = 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

/* 000c2970  CFuncTank::OnControls  (177 bytes)
 * bool OnControls(int param_1)
 */
/* CFuncTank::OnControls(entvars_s *) */

bool __thiscall CFuncTank::OnControls(CFuncTank *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  
  if ((this->pev->spawnflags & 0x20) == 0) {
    bVar4 = false;
  }
  else {
    fVar1 = *(float *)&this[1].field_0x8 - *(float *)(param_1 + 8);
    fVar3 = *(float *)&this[1].field_0xc - *(float *)(param_1 + 0xc);
    fVar2 = *(float *)&this[1].field_0x10 - *(float *)(param_1 + 0x10);
    bVar4 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1) < 30.0;
  }
  return bVar4;
}

/* 000c2a24  CFuncTank::StartControl  (247 bytes)
 * undefined4 StartControl(int param_1)
 */
/* CFuncTank::StartControl(CBasePlayer *) */

undefined4 __thiscall CFuncTank::StartControl(CFuncTank *this,int param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar2 = 0;
  if (this[1].pev == (entvars_t *)0x0) {
    if ((*(int *)&this[2].field_0x18 != 0) &&
       (iVar3 = UTIL_IsMasterTriggered(*(int *)&this[2].field_0x18,param_1), iVar3 == 0)) {
      return 0;
    }
    (*g_engfuncs.pfnAlertMessage)(at_console,"using TANK!\n");
    this[1].pev = (entvars_t *)param_1;
    if (*(int *)(param_1 + 0xa10) != 0) {
      (**(code **)(*(int *)(*(int *)(param_1 + 0xa10) + 0x60) + 0x130))
                (this[1].pev[3].flTimeStepSound,0);
      *(undefined4 *)((this[1].pev)->classname + 0xc0) = 0;
      *(undefined4 *)((this[1].pev)->classname + 0xbc) = 0;
    }
    pfVar1 = &this[1].pev[3].air_finished;
    *pfVar1 = (float)((uint)*pfVar1 | 1);
    puVar4 = (undefined4 *)((this[1].pev)->classname + 8);
    puVar5 = (undefined4 *)&this[1].field_0x8;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    this->pev->nextthink = this->pev->ltime + 0.1;
    uVar2 = 1;
  }
  return uVar2;
}

/* 000c2b1c  CFuncTank::StopControl  (152 bytes)
 * undefined StopControl(void)
 */
/* CFuncTank::StopControl(void) */

void __thiscall CFuncTank::StopControl(CFuncTank *this)

{
  float *pfVar1;
  int iVar2;
  entvars_t *peVar3;
  
  if (this[1].pev != (entvars_t *)0x0) {
    if (this[1].pev[3].flTimeStepSound != 0) {
      iVar2 = this[1].pev[3].flTimeStepSound;
      (**(code **)(*(int *)(iVar2 + 0x60) + 0x128))(iVar2);
    }
    (*g_engfuncs.pfnAlertMessage)(at_console,"stopped using TANK\n");
    pfVar1 = &this[1].pev[3].air_finished;
    *pfVar1 = (float)((uint)*pfVar1 & 0xfffffffe);
    this->pev->nextthink = 0.0;
    this[1].pev = (entvars_t *)0x0;
    peVar3 = this->pev;
    if ((peVar3->spawnflags & 1) != 0) {
      peVar3->nextthink = peVar3->ltime + 1.0;
    }
  }
  return;
}

/* 000c2bb4  CFuncTank::ControllerPostFrame  (514 bytes)
 * undefined ControllerPostFrame(void)
 */
/* CFuncTank::ControllerPostFrame(void) */

void __thiscall CFuncTank::ControllerPostFrame(CFuncTank *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  entvars_t *peVar4;
  int iVar5;
  float local_7c;
  float local_78;
  float local_74;
  float local_6c;
  float local_68;
  float local_64;
  float local_5c;
  float local_58;
  float local_54;
  float local_4c;
  float local_48;
  float local_44;
  float local_2c [7];
  
  if ((*(float *)&this[1].field_0x4 <= gpGlobals->time) &&
     ((*(byte *)((this[1].pev)->classname + 0x180) & 1) != 0)) {
    (*g_engfuncs.pfnAngleVectors)(this->pev->angles,local_2c,(float *)0x0,(float *)0x0);
    *(float *)&this[1].field_0x34 = (gpGlobals->time - 1.0 / *(float *)&this[1].field_0x38) - 0.01;
    (*g_engfuncs.pfnAngleVectors)(this->pev->angles,&local_5c,&local_6c,&local_7c);
    peVar4 = this->pev;
    fVar1 = *(float *)&this[1].field_0x4c;
    fVar2 = *(float *)&this[1].field_0x50;
    fVar3 = *(float *)&this[1].field_0x54;
    local_4c = peVar4->origin[0] + fVar1 * local_5c + fVar2 * local_6c + fVar3 * local_7c;
    local_48 = fVar3 * local_78 + peVar4->origin[1] + fVar1 * local_58 + fVar2 * local_68;
    local_44 = peVar4->origin[2] + fVar1 * local_54 + fVar2 * local_64 + fVar3 * local_74;
    (*this->vtable[0x45])(this,&local_4c,local_2c,(this[1].pev)->classname);
    if (this[1].pev != (entvars_t *)0x0) {
      iVar5 = (**(code **)((int)(this[1].pev)->avelocity[1] + 200))(this[1].pev);
      if (iVar5 != 0) {
        this[1].pev[3].origin[1] = 1.4013e-42;
      }
    }
    *(float *)&this[1].field_0x4 = 1.0 / *(float *)&this[1].field_0x38 + gpGlobals->time;
  }
  return;
}

/* 000c2db8  CFuncTank::Use  (298 bytes)
 * undefined Use(int param_1, undefined4 param_2, int param_3, float param_4)
 */
/* CFuncTank::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void __thiscall
CFuncTank::Use(CFuncTank *this,int param_1,undefined4 param_2,int param_3,float param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  if ((this->pev->spawnflags & 0x20) == 0) {
    iVar3 = CBaseEntity::ShouldToggle(this,param_3,(uint)((this->pev->spawnflags & 1) != 0));
    if (iVar3 != 0) {
      uVar2 = this->pev->spawnflags;
      if ((uVar2 & 1) == 0) {
        piVar1 = &this->pev->spawnflags;
        *piVar1 = *piVar1 | 1;
        this->pev->nextthink = this->pev->ltime + 0.1;
        *(undefined4 *)&this[1].field_0x34 = 0;
      }
      else {
        this->pev->spawnflags = uVar2 & 0xfffffffe;
        *(undefined4 *)&this[1].field_0x34 = 0;
        StopRotSound(this);
      }
    }
  }
  else {
    iVar3 = (**(code **)(*(int *)(param_1 + 0x60) + 0x4c))(param_1);
    if (iVar3 == 2) {
      if ((param_4 == 2.0) && (param_3 == 2)) {
        ControllerPostFrame(this);
      }
      else if ((this[1].pev == (entvars_t *)0x0) && (param_3 != 0)) {
        EHANDLE::operator=((EHANDLE *)(param_1 + 0x9c4),(int *)this);
        StartControl(this,param_1);
      }
      else {
        StopControl(this);
      }
    }
  }
  return;
}

/* 000c2eec  CFuncTank::FindTarget  (5 bytes)
 * undefined4 FindTarget(undefined4 this, undefined4 param_2)
 */
/* CFuncTank::FindTarget(edict_s *) */

undefined4 __thiscall CFuncTank::FindTarget(undefined4 this,undefined4 param_2)

{
  return param_2;
}

/* 000c2ef4  CFuncTank::InRange  (83 bytes)
 * undefined4 InRange(float param_1)
 */
/* CFuncTank::InRange(float) */

undefined4 __thiscall CFuncTank::InRange(CFuncTank *this,float param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < *(float *)&this[1].field_0x44) ||
     ((0.0 < *(float *)&this[1].field_0x48 && (*(float *)&this[1].field_0x48 < param_1)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

/* 000c2f48  CFuncTank::Think  (129 bytes)
 * undefined Think(void)
 */
/* CFuncTank::Think(void) */

void __thiscall CFuncTank::Think(CFuncTank *this)

{
  int iVar1;
  vec_t *pvVar2;
  vec_t *pvVar3;
  
  pvVar2 = (vec_t *)&g_vecZero;
  pvVar3 = this->pev->avelocity;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pvVar3 = *pvVar2;
    pvVar2 = pvVar2 + 1;
    pvVar3 = pvVar3 + 1;
  }
  TrackTarget(this);
  if ((1.0 < ABS(this->pev->avelocity[0])) || (1.0 < ABS(this->pev->avelocity[1]))) {
    StartRotSound(this);
  }
  else {
    StopRotSound(this);
  }
  return;
}

/* 000c2fcc  CFuncTank::TrackTarget  (2338 bytes)
 * undefined TrackTarget(void)
 */
/* CFuncTank::TrackTarget(void) */

void __thiscall CFuncTank::TrackTarget(CFuncTank *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  entvars_t *peVar5;
  void **ppvVar6;
  code *pcVar7;
  bool bVar8;
  edict_t *peVar9;
  int iVar10;
  undefined1 *puVar11;
  float *pfVar12;
  undefined4 *puVar13;
  void *pvVar14;
  float *pfVar15;
  undefined4 *puVar16;
  longdouble lVar17;
  undefined1 local_17c [36];
  float local_158;
  edict_t *local_154;
  undefined4 local_150;
  float local_13c [8];
  float local_11c;
  float local_118;
  float local_114;
  float local_10c;
  float local_108;
  float local_104;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_bc [8];
  float local_9c [4];
  float local_8c [8];
  undefined4 local_6c;
  undefined1 local_5c [16];
  float local_4c;
  edict_t *local_2c;
  
  puVar11 = local_17c;
  peVar9 = (*g_engfuncs.pfnFindClientInPVS)(this->pev->pContainingEntity);
  local_150 = 0;
  if (this[1].pev == (entvars_t *)0x0) {
    peVar5 = this->pev;
    if ((peVar5->spawnflags & 1) == 0) {
      return;
    }
    peVar5->nextthink = peVar5->ltime + 0.1;
    bVar8 = false;
    if ((peVar9 == (edict_t *)0x0) ||
       (iVar10 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar9), iVar10 == 0)) {
      bVar8 = true;
    }
    if (bVar8) {
      peVar5 = this->pev;
      if ((peVar5->spawnflags & 1) == 0) {
        return;
      }
      peVar5->nextthink = peVar5->ltime + 2.0;
      return;
    }
    local_154 = (edict_t *)FindTarget(this,peVar9);
    if (local_154 == (edict_t *)0x0) {
      return;
    }
    (*g_engfuncs.pfnAngleVectors)(this->pev->angles,&local_cc,&local_dc,&local_ec);
    peVar5 = this->pev;
    fVar2 = *(float *)&this[1].field_0x4c;
    local_11c = fVar2 * local_cc;
    local_118 = fVar2 * local_c8;
    local_114 = fVar2 * local_c4;
    local_10c = peVar5->origin[0] + fVar2 * local_cc;
    local_108 = peVar5->origin[1] + fVar2 * local_c8;
    local_104 = peVar5->origin[2] + fVar2 * local_c4;
    fVar2 = *(float *)&this[1].field_0x50;
    local_13c[4] = fVar2 * local_dc;
    local_13c[5] = fVar2 * local_d8;
    local_13c[6] = fVar2 * local_d4;
    local_fc = local_10c + fVar2 * local_dc;
    local_f8 = local_108 + fVar2 * local_d8;
    local_f4 = local_104 + fVar2 * local_d4;
    fVar2 = *(float *)&this[1].field_0x54;
    local_13c[0] = fVar2 * local_ec;
    local_13c[1] = fVar2 * local_e8;
    local_13c[2] = fVar2 * local_e4;
    local_bc[0] = local_fc + fVar2 * local_ec;
    local_bc[1] = local_f8 + fVar2 * local_e8;
    local_bc[2] = local_f4 + fVar2 * local_e4;
    pfVar12 = local_bc;
    pfVar15 = local_9c;
    for (iVar10 = 3; iVar10 != 0; iVar10 = iVar10 + -1) {
      *pfVar15 = *pfVar12;
      pfVar12 = pfVar12 + 1;
      pfVar15 = pfVar15 + 1;
    }
    local_13c[0] = (local_154->v).origin[0] + (local_154->v).view_ofs[0];
    local_13c[1] = (local_154->v).origin[1] + (local_154->v).view_ofs[1];
    local_13c[2] = (local_154->v).origin[2] + (local_154->v).view_ofs[2];
    pfVar12 = local_13c;
    pfVar15 = local_8c;
    for (iVar10 = 3; iVar10 != 0; iVar10 = iVar10 + -1) {
      *pfVar15 = *pfVar12;
      pfVar12 = pfVar12 + 1;
      pfVar15 = pfVar15 + 1;
    }
    local_13c[0] = local_8c[0] - local_9c[0];
    local_13c[1] = local_8c[1] - local_9c[1];
    local_13c[2] = local_8c[2] - local_9c[2];
    local_158 = SQRT(local_13c[2] * local_13c[2] +
                     local_13c[1] * local_13c[1] + local_13c[0] * local_13c[0]);
    iVar10 = InRange(this,local_158);
    if (iVar10 == 0) {
      return;
    }
    UTIL_TraceLine(local_9c,local_8c,0,this->pev->pContainingEntity,local_5c);
    if ((local_4c == 1.0) || (puVar11 = local_17c, local_2c == local_154)) {
      peVar9 = local_154;
      if (local_154 == (edict_t *)0x0) {
        peVar9 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
      }
      pvVar14 = (void *)0x0;
      if (peVar9 != (edict_t *)0x0) {
        pvVar14 = peVar9->pvPrivateData;
      }
      iVar10 = InRange(this,local_158);
      puVar11 = local_17c;
      if (((iVar10 != 0) && (puVar11 = local_17c, pvVar14 != (void *)0x0)) &&
         (iVar10 = (**(code **)(*(int *)((int)pvVar14 + 0x60) + 0xb4))(pvVar14), puVar11 = local_17c
         , iVar10 != 0)) {
        local_150 = 1;
        (*this->vtable[0x46])(local_13c,this,pvVar14);
        pfVar12 = local_13c;
        pfVar15 = local_13c + 3;
        for (iVar10 = 3; iVar10 != 0; iVar10 = iVar10 + -1) {
          *pfVar15 = *pfVar12;
          pfVar12 = pfVar12 + 1;
          pfVar15 = pfVar15 + 1;
        }
        pfVar12 = local_13c + 3;
        pfVar15 = (float *)&this[2].field_0x8;
        for (iVar10 = 3; iVar10 != 0; iVar10 = iVar10 + -1) {
          *pfVar15 = *pfVar12;
          pfVar12 = pfVar12 + 1;
          pfVar15 = pfVar15 + 1;
        }
        puVar11 = &stack0xfffffe80;
      }
    }
    peVar5 = this->pev;
    *(undefined1 **)(puVar11 + 8) = puVar11 + 0x40;
    fVar2 = *(float *)&this[2].field_0xc;
    fVar3 = peVar5->origin[1];
    fVar4 = *(float *)&this[2].field_0x10;
    fVar1 = peVar5->origin[2];
    *(float *)(puVar11 + 0x40) = *(float *)&this[2].field_0x8 - peVar5->origin[0];
    *(float *)(puVar11 + 0x44) = fVar2 - fVar3;
    *(float *)(puVar11 + 0x48) = fVar4 - fVar1;
    puVar13 = (undefined4 *)(puVar11 + 0x40);
    puVar16 = (undefined4 *)(puVar11 + 0x100);
    for (iVar10 = 3; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar16 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar16 = puVar16 + 1;
    }
    *(undefined1 **)(puVar11 + -0xc) = puVar11 + 0x100;
    *(undefined4 *)(puVar11 + -0x10) = *(undefined4 *)(puVar11 + 8);
    *(undefined4 *)(puVar11 + -0x14) = 0xc341b;
    UTIL_VecToAngles(*(undefined4 **)(puVar11 + -0x10),*(undefined4 *)(puVar11 + -0xc));
    puVar13 = *(undefined4 **)(puVar11 + 8);
    puVar16 = (undefined4 *)(puVar11 + 0x110);
    for (iVar10 = 3; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar16 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar16 = puVar16 + 1;
    }
    *(float *)(puVar11 + 0xdc) =
         SQRT(*(float *)(puVar11 + 0x108) * *(float *)(puVar11 + 0x108) +
              *(float *)(puVar11 + 0x104) * *(float *)(puVar11 + 0x104) +
              *(float *)(puVar11 + 0x100) * *(float *)(puVar11 + 0x100));
    *(undefined4 *)(puVar11 + -8) = *(undefined4 *)(puVar11 + 0xdc);
    *(undefined1 **)(puVar11 + -0xc) = puVar11 + 0x110;
    *(CFuncTank **)(puVar11 + -0x10) = this;
    *(undefined4 *)(puVar11 + -0x14) = 0xc3474;
    AdjustAnglesForBarrel
              (*(CFuncTank **)(puVar11 + -0x10),*(float **)(puVar11 + -0xc),*(float *)(puVar11 + -8)
              );
  }
  else {
    puVar13 = (undefined4 *)((this[1].pev)->classname + 0x74);
    puVar16 = &local_6c;
    for (iVar10 = 3; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar16 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar16 = puVar16 + 1;
    }
    local_6c._3_1_ = local_6c._3_1_ ^ 0x80;
    this->pev->nextthink = this->pev->ltime + 0.05;
  }
  puVar11[0x113] = puVar11[0x113] ^ 0x80;
  *(undefined4 *)(puVar11 + -0xc) = *(undefined4 *)&this[1].field_0x14;
  *(undefined4 *)(puVar11 + -0x10) = *(undefined4 *)(puVar11 + 0x114);
  *(undefined4 *)(puVar11 + -0x14) = 0xc3491;
  lVar17 = UTIL_AngleDistance(*(float *)(puVar11 + -0x10),*(float *)(puVar11 + -0xc));
  *(float *)(puVar11 + 0x114) = (float)(lVar17 + (longdouble)*(float *)&this[1].field_0x14);
  *(undefined4 *)(puVar11 + -0xc) = *(undefined4 *)&this[1].field_0x24;
  *(undefined4 *)(puVar11 + -0x10) = *(undefined4 *)(puVar11 + 0x110);
  *(undefined4 *)(puVar11 + -0x14) = 0xc34b0;
  lVar17 = UTIL_AngleDistance(*(float *)(puVar11 + -0x10),*(float *)(puVar11 + -0xc));
  *(float *)(puVar11 + 0x110) = (float)(lVar17 + (longdouble)*(float *)&this[1].field_0x24);
  fVar2 = *(float *)&this[1].field_0x14 + *(float *)&this[1].field_0x1c;
  if ((fVar2 < *(float *)(puVar11 + 0x114)) ||
     (fVar2 = *(float *)&this[1].field_0x14 - *(float *)&this[1].field_0x1c,
     *(float *)(puVar11 + 0x114) < fVar2)) {
    *(float *)(puVar11 + 0x114) = fVar2;
    *(undefined4 *)(puVar11 + 0x2c) = 0;
  }
  if (*(int *)(puVar11 + 0x2c) != 0) {
    *(float *)&this[1].field_0x3c = gpGlobals->time;
  }
  *(vec_t *)(puVar11 + -0xc) = this->pev->angles[1];
  *(undefined4 *)(puVar11 + -0x10) = *(undefined4 *)(puVar11 + 0x114);
  *(undefined4 *)(puVar11 + -0x14) = 0xc352d;
  lVar17 = UTIL_AngleDistance(*(float *)(puVar11 + -0x10),*(float *)(puVar11 + -0xc));
  *(float *)(puVar11 + 0x1c) = (float)lVar17;
  this->pev->avelocity[1] = (float)(lVar17 * (longdouble)10.0);
  if (this->pev->avelocity[1] <= *(float *)&this[1].field_0x18) {
    peVar5 = this->pev;
    *(undefined4 *)(puVar11 + 0xc) = *(undefined4 *)&this[1].field_0x18;
    if (peVar5->avelocity[1] < -*(float *)(puVar11 + 0xc)) {
      peVar5->avelocity[1] = -*(float *)(puVar11 + 0xc);
    }
  }
  else {
    this->pev->avelocity[1] = *(vec_t *)&this[1].field_0x18;
  }
  fVar2 = *(float *)&this[1].field_0x24 + *(float *)&this[1].field_0x2c;
  if ((fVar2 < *(float *)(puVar11 + 0x110)) ||
     (fVar2 = *(float *)&this[1].field_0x24 - *(float *)&this[1].field_0x2c,
     *(float *)(puVar11 + 0x110) < fVar2)) {
    *(float *)(puVar11 + 0x110) = fVar2;
  }
  *(vec_t *)(puVar11 + -0xc) = this->pev->angles[0];
  *(undefined4 *)(puVar11 + -0x10) = *(undefined4 *)(puVar11 + 0x110);
  *(undefined4 *)(puVar11 + -0x14) = 0xc35cd;
  lVar17 = UTIL_AngleDistance(*(float *)(puVar11 + -0x10),*(float *)(puVar11 + -0xc));
  this->pev->avelocity[0] = (float)(lVar17 * (longdouble)10.0);
  if (this->pev->avelocity[0] <= *(float *)&this[1].field_0x28) {
    peVar5 = this->pev;
    *(undefined4 *)(puVar11 + 0xc) = *(undefined4 *)&this[1].field_0x28;
    if (peVar5->avelocity[0] < -*(float *)(puVar11 + 0xc)) {
      peVar5->avelocity[0] = -*(float *)(puVar11 + 0xc);
    }
  }
  else {
    this->pev->avelocity[0] = *(vec_t *)&this[1].field_0x28;
  }
  if (this[1].pev != (entvars_t *)0x0) {
    return;
  }
  if ((*(float *)&this[1].field_0x40 <= gpGlobals->time - *(float *)&this[1].field_0x3c) ||
     ((((longdouble)*(float *)&this[1].field_0x30 <= ABS(lVar17) ||
       (*(float *)&this[1].field_0x20 <= ABS(*(float *)(puVar11 + 0x1c)))) &&
      ((this->pev->spawnflags & 0x10) == 0)))) goto LAB_000c38d9;
  bVar8 = false;
  peVar5 = this->pev;
  *(undefined4 *)(puVar11 + -4) = 0;
  *(undefined4 *)(puVar11 + -8) = 0;
  *(undefined1 **)(puVar11 + -0xc) = puVar11 + 0x40;
  *(vec_t **)(puVar11 + -0x10) = peVar5->angles;
  *(undefined4 *)(puVar11 + -0x14) = 0xc36a1;
  (*g_engfuncs.pfnAngleVectors)
            (*(float **)(puVar11 + -0x10),*(float **)(puVar11 + -0xc),*(float **)(puVar11 + -8),
             *(float **)(puVar11 + -4));
  if ((this->pev->spawnflags & 0x10) == 0) {
LAB_000c376d:
    bVar8 = true;
  }
  else {
    *(float *)(puVar11 + 0xdc) =
         SQRT(*(float *)(puVar11 + 0x108) * *(float *)(puVar11 + 0x108) +
              *(float *)(puVar11 + 0x104) * *(float *)(puVar11 + 0x104) +
              *(float *)(puVar11 + 0x100) * *(float *)(puVar11 + 0x100));
    fVar2 = *(float *)(puVar11 + 0xdc);
    peVar9 = this->pev->pContainingEntity;
    *(float *)(puVar11 + 0x60) = fVar2 * *(float *)(puVar11 + 0x40);
    *(float *)(puVar11 + 100) = fVar2 * *(float *)(puVar11 + 0x44);
    *(float *)(puVar11 + 0x68) = fVar2 * *(float *)(puVar11 + 0x48);
    *(float *)(puVar11 + 0x50) = *(float *)(puVar11 + 0xe0) + *(float *)(puVar11 + 0x60);
    *(float *)(puVar11 + 0x54) = *(float *)(puVar11 + 0xe4) + *(float *)(puVar11 + 100);
    *(float *)(puVar11 + 0x58) = *(float *)(puVar11 + 0xe8) + *(float *)(puVar11 + 0x68);
    *(undefined1 **)(puVar11 + -0x10) = puVar11 + 0x120;
    *(edict_t **)(puVar11 + -0x14) = peVar9;
    *(undefined4 *)(puVar11 + -0x18) = 0;
    *(undefined1 **)(puVar11 + -0x1c) = puVar11 + 0x50;
    *(undefined1 **)(puVar11 + -0x20) = puVar11 + 0xe0;
    *(undefined4 *)(puVar11 + -0x24) = 0xc375d;
    UTIL_TraceLine(*(undefined4 *)(puVar11 + -0x20),*(undefined4 *)(puVar11 + -0x1c),
                   *(int *)(puVar11 + -0x18),*(undefined4 *)(puVar11 + -0x14),
                   *(undefined4 *)(puVar11 + -0x10));
    if (*(int *)(puVar11 + 0x150) == *(int *)(puVar11 + 0x28)) goto LAB_000c376d;
  }
  if (bVar8) {
    peVar5 = this->pev;
    *(undefined1 **)(puVar11 + -4) = puVar11 + 0x80;
    *(undefined1 **)(puVar11 + -8) = puVar11 + 0x70;
    *(undefined1 **)(puVar11 + -0xc) = puVar11 + 0x60;
    *(vec_t **)(puVar11 + -0x10) = peVar5->angles;
    *(undefined4 *)(puVar11 + -0x14) = 0xc379c;
    (*g_engfuncs.pfnAngleVectors)
              (*(float **)(puVar11 + -0x10),*(float **)(puVar11 + -0xc),*(float **)(puVar11 + -8),
               *(float **)(puVar11 + -4));
    peVar5 = this->pev;
    fVar2 = *(float *)&this[1].field_0x4c;
    *(float *)(puVar11 + 0xb0) = fVar2 * *(float *)(puVar11 + 0x60);
    *(float *)(puVar11 + 0xb4) = fVar2 * *(float *)(puVar11 + 100);
    *(float *)(puVar11 + 0xb8) = fVar2 * *(float *)(puVar11 + 0x68);
    fVar3 = peVar5->origin[0];
    fVar4 = peVar5->origin[1];
    fVar1 = peVar5->origin[2] + fVar2 * *(float *)(puVar11 + 0x68);
    *(float *)(puVar11 + 0xa0) = fVar3 + *(float *)(puVar11 + 0xb0);
    *(float *)(puVar11 + 0xa4) = fVar4 + *(float *)(puVar11 + 0xb4);
    *(float *)(puVar11 + 0xa8) = fVar1;
    fVar2 = *(float *)&this[1].field_0x50;
    *(float *)(puVar11 + 0xc0) = fVar2 * *(float *)(puVar11 + 0x70);
    *(float *)(puVar11 + 0xc4) = fVar2 * *(float *)(puVar11 + 0x74);
    *(float *)(puVar11 + 200) = fVar2 * *(float *)(puVar11 + 0x78);
    fVar3 = fVar3 + *(float *)(puVar11 + 0xb0) + *(float *)(puVar11 + 0xc0);
    fVar4 = fVar4 + *(float *)(puVar11 + 0xb4) + *(float *)(puVar11 + 0xc4);
    fVar1 = fVar1 + fVar2 * *(float *)(puVar11 + 0x78);
    *(float *)(puVar11 + 0x90) = fVar3;
    *(float *)(puVar11 + 0x94) = fVar4;
    *(float *)(puVar11 + 0x98) = fVar1;
    fVar2 = *(float *)&this[1].field_0x54;
    *(float *)(puVar11 + 0x30) = fVar2 * *(float *)(puVar11 + 0x80);
    *(float *)(puVar11 + 0x34) = fVar2 * *(float *)(puVar11 + 0x84);
    *(float *)(puVar11 + 0x38) = fVar2 * *(float *)(puVar11 + 0x88);
    *(float *)(puVar11 + 0x50) = fVar3 + *(float *)(puVar11 + 0x30);
    *(float *)(puVar11 + 0x54) = fVar4 + *(float *)(puVar11 + 0x34);
    *(float *)(puVar11 + 0x58) = fVar1 + fVar2 * *(float *)(puVar11 + 0x88);
    ppvVar6 = this->vtable;
    *(entvars_t **)(puVar11 + -4) = this->pev;
    *(undefined1 **)(puVar11 + -8) = puVar11 + 0x40;
    *(undefined1 **)(puVar11 + -0xc) = puVar11 + 0x50;
    *(CFuncTank **)(puVar11 + -0x10) = this;
    pcVar7 = ppvVar6[0x45];
    *(undefined4 *)(puVar11 + -0x14) = 0xc38d2;
    (*pcVar7)();
    return;
  }
LAB_000c38d9:
  *(undefined4 *)&this[1].field_0x34 = 0;
  return;
}

/* 000c38f4  CFuncTank::AdjustAnglesForBarrel  (221 bytes)
 * undefined AdjustAnglesForBarrel(float * param_1, float param_2)
 */
/* CFuncTank::AdjustAnglesForBarrel(Vector &, float) */

void __thiscall CFuncTank::AdjustAnglesForBarrel(CFuncTank *this,float *param_1,float param_2)

{
  longdouble lVar1;
  longdouble lVar2;
  
  if ((*(float *)&this[1].field_0x50 != 0.0) || (*(float *)&this[1].field_0x54 != 0.0)) {
    lVar1 = (longdouble)param_2 - (longdouble)*(float *)&this[1].field_0x54;
    lVar1 = lVar1 * lVar1;
    if (*(float *)&this[1].field_0x50 != 0.0) {
      lVar2 = (longdouble)*(float *)&this[1].field_0x50;
      lVar2 = (longdouble)fpatan(lVar2,SQRT(lVar1 - lVar2 * lVar2));
      param_1[1] = (float)((longdouble)(double)lVar2 * (longdouble)57.29577951308232 +
                          (longdouble)param_1[1]);
    }
    if (*(float *)&this[1].field_0x54 != 0.0) {
      lVar2 = (longdouble)*(float *)&this[1].field_0x54;
      lVar1 = (longdouble)fpatan(-lVar2,SQRT(lVar1 - lVar2 * lVar2));
      *param_1 = (float)((longdouble)(double)lVar1 * (longdouble)57.29577951308232 +
                        (longdouble)*param_1);
    }
  }
  return;
}

/* 000c39d4  CFuncTank::Fire  (684 bytes)
 * undefined Fire(CBaseEntity * param_1, undefined4 * param_2)
 */
/* CFuncTank::Fire(Vector const &, Vector const &, entvars_s *) */

void CFuncTank::Fire(CBaseEntity *param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CSprite *pCVar4;
  longdouble lVar5;
  
  if (*(float *)&param_1[1].field_0x34 != 0.0) {
    if (*(int *)&param_1[1].field_0x5c != 0) {
      pCVar4 = CSprite::SpriteCreate
                         ((int)(gpGlobals->pStringBase + *(int *)&param_1[1].field_0x5c),param_2,1);
      lVar5 = (longdouble)(*g_engfuncs.pfnRandomFloat)(15.0,20.0);
      *(undefined4 *)&pCVar4->field_0xc = 0xffff0000;
      *(code **)&pCVar4->field_0x10 = CSprite::AnimateUntilDead;
      pCVar4->pev->framerate = (float)lVar5;
      pCVar4->pev->dmgtime =
           (float)((longdouble)*(float *)&pCVar4->field_0x68 / lVar5 + (longdouble)gpGlobals->time);
      pCVar4->pev->nextthink = gpGlobals->time;
      fVar1 = param_1->pev->rendercolor[0];
      fVar2 = param_1->pev->rendercolor[1];
      fVar3 = param_1->pev->rendercolor[2];
      pCVar4->pev->rendermode = 4;
      pCVar4->pev->rendercolor[0] = (float)(int)ROUND(fVar1);
      pCVar4->pev->rendercolor[1] = (float)(int)ROUND(fVar2);
      pCVar4->pev->rendercolor[2] = (float)(int)ROUND(fVar3);
      pCVar4->pev->renderamt = 255.0;
      pCVar4->pev->renderfx = 0;
      lVar5 = (longdouble)(*g_engfuncs.pfnRandomFloat)(40.0,80.0);
      pCVar4->pev->velocity[2] = (float)lVar5;
      pCVar4->pev->scale = *(float *)&param_1[1].field_0x58;
    }
    if (param_1[1].vtable != (void **)0x0) {
      pCVar4 = CSprite::SpriteCreate
                         ((int)(gpGlobals->pStringBase + (int)param_1[1].vtable),param_2,1);
      *(undefined4 *)&pCVar4->field_0xc = 0xffff0000;
      *(code **)&pCVar4->field_0x10 = CSprite::AnimateUntilDead;
      pCVar4->pev->framerate = 60.0;
      pCVar4->pev->dmgtime = *(float *)&pCVar4->field_0x68 / 60.0 + gpGlobals->time;
      pCVar4->pev->nextthink = gpGlobals->time;
      pCVar4->pev->rendermode = 5;
      pCVar4->pev->rendercolor[0] = 255.0;
      pCVar4->pev->rendercolor[1] = 255.0;
      pCVar4->pev->rendercolor[2] = 255.0;
      pCVar4->pev->renderamt = 255.0;
      pCVar4->pev->renderfx = 0xe;
      pCVar4->pev->scale = *(float *)&param_1[1].field_0x58;
      pCVar4->pev->nextthink = pCVar4->pev->nextthink + 0.1;
    }
    CBaseEntity::SUB_UseTargets(param_1,param_1,3,0);
  }
  *(float *)&param_1[1].field_0x34 = gpGlobals->time;
  return;
}

/* 000c3c80  CFuncTank::TankTrace  (479 bytes)
 * undefined TankTrace(float * param_1, float * param_2, float * param_3, undefined4 param_4)
 */
/* CFuncTank::TankTrace(Vector const &, Vector const &, Vector const &, TraceResult &) */

void __thiscall
CFuncTank::TankTrace
          (CFuncTank *this,float *param_1,float *param_2,float *param_3,undefined4 param_4)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  longdouble lVar4;
  longdouble lVar5;
  longdouble lVar6;
  longdouble lVar7;
  float local_5c [4];
  float local_4c [4];
  float local_3c;
  float local_38;
  float local_34;
  float local_2c;
  float local_28;
  float local_24;
  
  do {
    lVar4 = (longdouble)(*g_engfuncs.pfnRandomFloat)(-0.5,0.5);
    lVar5 = (longdouble)(*g_engfuncs.pfnRandomFloat)(-0.5,0.5);
    lVar6 = (longdouble)(*g_engfuncs.pfnRandomFloat)(-0.5,0.5);
    lVar7 = (longdouble)(*g_engfuncs.pfnRandomFloat)(-0.5,0.5);
    lVar7 = (longdouble)(float)lVar6 + lVar7;
    lVar6 = (longdouble)(float)(lVar5 + (longdouble)(float)lVar4);
  } while ((longdouble)1.0 < lVar7 * lVar7 + lVar6 * lVar6);
  lVar4 = (longdouble)(float)(lVar5 + (longdouble)(float)lVar4) * (longdouble)*param_3;
  lVar7 = lVar7 * (longdouble)param_3[1];
  lVar5 = lVar7 * (longdouble)gpGlobals->v_up[2];
  local_5c[0] = (float)(lVar7 * (longdouble)gpGlobals->v_up[0]);
  local_5c[1] = (float)(lVar7 * (longdouble)gpGlobals->v_up[1]);
  local_5c[2] = (float)lVar5;
  local_2c = *param_2 + (float)(lVar4 * (longdouble)gpGlobals->v_right[0]) + local_5c[0];
  local_28 = param_2[1] + (float)(lVar4 * (longdouble)gpGlobals->v_right[1]) + local_5c[1];
  local_24 = (float)((longdouble)param_2[2] + lVar4 * (longdouble)gpGlobals->v_right[2] + lVar5);
  local_3c = local_2c * 4096.0;
  local_38 = local_28 * 4096.0;
  local_34 = local_24 * 4096.0;
  local_4c[0] = *param_1 + local_3c;
  local_4c[1] = param_1[1] + local_38;
  local_4c[2] = param_1[2] + local_34;
  pfVar2 = local_4c;
  pfVar3 = local_5c;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  UTIL_TraceLine(param_1,local_5c,0,this->pev->pContainingEntity,param_4);
  return;
}

/* 000c3e60  CFuncTank::StartRotSound  (117 bytes)
 * undefined StartRotSound(void)
 */
/* CFuncTank::StartRotSound(void) */

void __thiscall CFuncTank::StartRotSound(CFuncTank *this)

{
  entvars_t *peVar1;
  
  peVar1 = this->pev;
  if ((peVar1->noise != 0) && (-1 < (short)peVar1->spawnflags)) {
    peVar1->spawnflags = peVar1->spawnflags | 0x8000;
    EMIT_SOUND_DYN((int)this->pev->pContainingEntity,6,gpGlobals->pStringBase + this->pev->noise,
                   0x3f59999a,0x3f4ccccd,0,100,0.5);
  }
  return;
}

/* 000c3ed8  CFuncTank::StopRotSound  (101 bytes)
 * undefined StopRotSound(void)
 */
/* CFuncTank::StopRotSound(void) */

void __thiscall CFuncTank::StopRotSound(CFuncTank *this)

{
  int *piVar1;
  entvars_t *peVar2;
  
  peVar2 = this->pev;
  if ((short)peVar2->spawnflags < 0) {
    EMIT_SOUND_DYN((int)peVar2->pContainingEntity,6,gpGlobals->pStringBase + peVar2->noise,0,0,0x20,
                   100,0.5);
  }
  piVar1 = &this->pev->spawnflags;
  *piVar1 = *piVar1 & 0xffff7fff;
  return;
}

/* 000c4e74  CFuncTank::global.constructors.keyed.to.m_SaveData  (19 bytes)
 * undefined global.constructors.keyed.to.m_SaveData(void)
 */
/* global constructors keyed to CFuncTank::m_SaveData */

void CFuncTank::global_constructors_keyed_to_m_SaveData(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

/* 000c5194  CFuncTank::UpdateTargetPosition  (42 bytes)
 * undefined4 UpdateTargetPosition(undefined4 param_1, int * param_2, int param_3)
 */
/* CFuncTank::UpdateTargetPosition(CBaseEntity *) */

undefined4 CFuncTank::UpdateTargetPosition(undefined4 param_1,int *param_2,int param_3)

{
  (**(code **)(*(int *)(param_3 + 0x60) + 0x104))(param_1,param_3,*param_2 + 8);
  return param_1;
}

/* 000c51c0  CFuncTank::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CFuncTank::ObjectCaps(void) */

undefined4 CFuncTank::ObjectCaps(void)

{
  return 0;
}

/* 000c51c8  CFuncTank::IsActive  (22 bytes)
 * bool IsActive(void)
 */
/* CFuncTank::IsActive(void) */

bool __thiscall CFuncTank::IsActive(CFuncTank *this)

{
  return (this->pev->spawnflags & 1) != 0;
}

/* 000c51e0  CFuncTank::TankActivate  (64 bytes)
 * undefined TankActivate(void)
 */
/* CFuncTank::TankActivate(void) */

void __thiscall CFuncTank::TankActivate(CFuncTank *this)

{
  int *piVar1;
  
  piVar1 = &this->pev->spawnflags;
  *piVar1 = *piVar1 | 1;
  this->pev->nextthink = this->pev->ltime + 0.1;
  *(undefined4 *)&this[1].field_0x34 = 0;
  return;
}

/* 000c5220  CFuncTank::TankDeactivate  (53 bytes)
 * undefined TankDeactivate(void)
 */
/* CFuncTank::TankDeactivate(void) */

void __thiscall CFuncTank::TankDeactivate(CFuncTank *this)

{
  int *piVar1;
  
  piVar1 = &this->pev->spawnflags;
  *piVar1 = *piVar1 & 0xfffffffe;
  *(undefined4 *)&this[1].field_0x34 = 0;
  StopRotSound(this);
  return;
}

/* 000c5258  CFuncTank::CanFire  (58 bytes)
 * bool CanFire(void)
 */
/* CFuncTank::CanFire(void) */

bool __thiscall CFuncTank::CanFire(CFuncTank *this)

{
  return gpGlobals->time - *(float *)&this[1].field_0x3c < *(float *)&this[1].field_0x40;
}

/* 000c5294  CFuncTank::BarrelPosition  (290 bytes)
 * float * BarrelPosition(float * param_1, int * param_2)
 */
/* CFuncTank::BarrelPosition(void) */

float * CFuncTank::BarrelPosition(float *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float local_4c;
  float local_48;
  float local_44;
  float local_3c;
  float local_38;
  float local_34;
  float local_2c;
  float local_28;
  float local_24;
  
  (*g_engfuncs.pfnAngleVectors)((float *)(*param_2 + 0x50),&local_2c,&local_3c,&local_4c);
  iVar6 = *param_2;
  fVar1 = (float)param_2[0x2c];
  fVar2 = *(float *)(iVar6 + 0xc);
  fVar3 = *(float *)(iVar6 + 0x10);
  fVar4 = (float)param_2[0x2d];
  fVar5 = (float)param_2[0x2e];
  *param_1 = *(float *)(iVar6 + 8) + fVar1 * local_2c + fVar4 * local_3c + fVar5 * local_4c;
  param_1[1] = fVar2 + fVar1 * local_28 + fVar4 * local_38 + fVar5 * local_48;
  param_1[2] = fVar3 + fVar1 * local_24 + fVar4 * local_34 + fVar5 * local_44;
  return param_1;
}

