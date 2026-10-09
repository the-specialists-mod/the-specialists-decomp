/* ts_i386.so - CBaseDoor (18 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000b4eb0  CBaseDoor::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CBaseDoor::Save(CSave &) */

undefined4 __thiscall CBaseDoor::Save(CBaseDoor *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseToggle::Save((CBaseToggle *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CBaseDoor",(int)this,(int *)m_SaveData,7);
  }
  return uVar2;
}

/* 000b4f00  CBaseDoor::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CBaseDoor::Restore(CRestore &) */

undefined4 __thiscall CBaseDoor::Restore(CBaseDoor *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseToggle::Restore((CBaseToggle *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CBaseDoor",(int)this,(int)m_SaveData,7);
  }
  return uVar2;
}

/* 000b51a0  CBaseDoor::KeyValue  (1039 bytes)
 * uint KeyValue(int param_1)
 */
/* CBaseDoor::KeyValue(KeyValueData_s *) */

uint __thiscall CBaseDoor::KeyValue(CBaseDoor *this,int param_1)

{
  float fVar1;
  entvars_t *peVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  uint uVar4;
  longdouble lVar5;
  longdouble extraout_ST0;
  
  iVar3 = strcmp(*(char **)(param_1 + 4),"skin");
  if (iVar3 == 0) {
    peVar2 = this->pev;
    lVar5 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
    uVar4 = (uint)ROUND(lVar5);
    peVar2->skin = uVar4;
  }
  else {
    iVar3 = strcmp(*(char **)(param_1 + 4),"movesnd");
    if (iVar3 == 0) {
      lVar5 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
      uVar4 = CONCAT22(extraout_var,(short)ROUND(lVar5));
      this->field_0x13e = (char)(short)ROUND(lVar5);
    }
    else {
      iVar3 = strcmp(*(char **)(param_1 + 4),"stopsnd");
      if (iVar3 == 0) {
        lVar5 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
        uVar4 = CONCAT22(extraout_var_00,(short)ROUND(lVar5));
        this->field_0x13f = (char)(short)ROUND(lVar5);
      }
      else {
        iVar3 = strcmp(*(char **)(param_1 + 4),"healthvalue");
        if (iVar3 == 0) {
          lVar5 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
          uVar4 = CONCAT22(extraout_var_01,(short)ROUND(lVar5));
          this->field_0x13d = (char)(short)ROUND(lVar5);
        }
        else {
          iVar3 = strcmp(*(char **)(param_1 + 4),"locked_sound");
          if (iVar3 == 0) {
            lVar5 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
            uVar4 = CONCAT22(extraout_var_02,(short)ROUND(lVar5));
            this->field_0x164 = (char)(short)ROUND(lVar5);
          }
          else {
            iVar3 = strcmp(*(char **)(param_1 + 4),"locked_sentence");
            if (iVar3 == 0) {
              lVar5 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
              uVar4 = CONCAT22(extraout_var_03,(short)ROUND(lVar5));
              this->field_0x165 = (char)(short)ROUND(lVar5);
            }
            else {
              iVar3 = strcmp(*(char **)(param_1 + 4),"unlocked_sound");
              if (iVar3 == 0) {
                lVar5 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
                uVar4 = CONCAT22(extraout_var_04,(short)ROUND(lVar5));
                this->field_0x166 = (char)(short)ROUND(lVar5);
              }
              else {
                iVar3 = strcmp(*(char **)(param_1 + 4),"unlocked_sentence");
                if (iVar3 == 0) {
                  lVar5 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
                  uVar4 = CONCAT22(extraout_var_05,(short)ROUND(lVar5));
                  this->field_0x167 = (char)(short)ROUND(lVar5);
                }
                else {
                  iVar3 = strcmp(*(char **)(param_1 + 4),"WaveHeight");
                  if (iVar3 == 0) {
                    peVar2 = this->pev;
                    uVar4 = __strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
                    peVar2->scale = (float)(extraout_ST0 * (longdouble)0.125);
                  }
                  else {
                    iVar3 = strcmp(*(char **)(param_1 + 4),"maxdamage");
                    if (iVar3 == 0) {
                      uVar4 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
                      *(float *)&this->field_0x118 = (float)(int)uVar4;
                    }
                    else {
                      iVar3 = strcmp(*(char **)(param_1 + 4),"doormaterial");
                      if (iVar3 == 0) {
                        uVar4 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
                        if (uVar4 < 10) {
                          *(uint *)&this->field_0x11c = uVar4;
                        }
                        else {
                          *(undefined4 *)&this->field_0x11c = 1;
                        }
                      }
                      else {
                        iVar3 = strcmp(*(char **)(param_1 + 4),"respawntime");
                        if (iVar3 != 0) {
                          uVar4 = CBaseToggle::KeyValue((CBaseToggle *)this,param_1);
                          return uVar4;
                        }
                        iVar3 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
                        *(float *)&this->field_0x10c = (float)iVar3;
                        fVar1 = *(float *)&this->field_0x10c;
                        uVar4 = CONCAT22((short)((uint)iVar3 >> 0x10),
                                         (ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                                         (ushort)(fVar1 == 0.0) << 0xe);
                        if (0.0 >= fVar1 && (fVar1 == 0.0) == 0) {
                          *(undefined4 *)&this->field_0x10c = 0;
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
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  return uVar4;
}

/* 000b5604  CBaseDoor::BreakableRespawn  (423 bytes)
 * undefined BreakableRespawn(char param_1)
 */
/* CBaseDoor::BreakableRespawn(bool) */

void __thiscall CBaseDoor::BreakableRespawn(CBaseDoor *this,char param_1)

{
  undefined1 *this_00;
  entvars_t *peVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  int *piVar4;
  vec_t *pvVar5;
  vec_t *pvVar6;
  undefined1 local_40 [4];
  vec_t local_3c;
  vec_t local_38;
  vec_t local_34;
  vec_t local_2c;
  vec_t local_28;
  vec_t local_24;
  
  if (((this->pev->deadflag == 2) || (this->pev->effects == 0x80)) || (param_1 != '\0')) {
    peVar1 = this->pev;
    local_2c = peVar1->absmin[0];
    local_28 = peVar1->absmin[1];
    local_24 = peVar1->absmin[2];
    peVar1 = this->pev;
    local_3c = peVar1->absmax[0];
    local_38 = peVar1->absmax[1];
    local_34 = peVar1->absmax[2];
    iVar3 = UTIL_EntitiesInBox((int)local_40,1,&local_2c,&local_3c,0x2008);
    if (iVar3 == 0) {
      this->pev->deadflag = 0;
      this->pev->effects = 0;
      pvVar5 = (vec_t *)&this->field_0x124;
      pvVar6 = this->pev->origin;
      for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pvVar6 = *pvVar5;
        pvVar5 = pvVar5 + 1;
        pvVar6 = pvVar6 + 1;
      }
      UTIL_SetOrigin((int)this->pev,this->pev->origin);
      pvVar5 = (vec_t *)&this->field_0x130;
      pvVar6 = this->pev->angles;
      for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pvVar6 = *pvVar5;
        pvVar5 = pvVar5 + 1;
        pvVar6 = pvVar6 + 1;
      }
      pvVar5 = (vec_t *)&g_vecZero;
      pvVar6 = this->pev->avelocity;
      for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pvVar6 = *pvVar5;
        pvVar5 = pvVar5 + 1;
        pvVar6 = pvVar6 + 1;
      }
      pvVar5 = (vec_t *)&g_vecZero;
      pvVar6 = this->pev->velocity;
      for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pvVar6 = *pvVar5;
        pvVar5 = pvVar5 + 1;
        pvVar6 = pvVar6 + 1;
      }
      *(undefined4 *)&this->field_0x14 = 0;
      *(undefined4 *)&this->field_0x18 = 0;
      *(undefined4 *)&this->field_0xc = 0;
      *(undefined4 *)&this->field_0x10 = 0;
      (*this->vtable[9])(this);
    }
    else {
      this_00 = &this->field_0x104;
      bVar2 = int((EHANDLE *)this_00);
      if (CONCAT31(extraout_var,bVar2) != 0) {
        piVar4 = (int *)EHANDLE::operator->((EHANDLE *)this_00);
        *(float *)(*piVar4 + 0x104) = gpGlobals->time + 5.0;
        iVar3 = EHANDLE::operator->((EHANDLE *)this_00);
        *(undefined4 *)(iVar3 + 0xc) = 0xffff0000;
        *(code **)(iVar3 + 0x10) = CInfoBreakable::RespawnThink;
      }
    }
  }
  return;
}

/* 000b57ac  CBaseDoor::TraceAttack  (2257 bytes)
 * undefined TraceAttack(int param_1, float param_2, undefined4 param_3, undefined4 param_4, uint param_5)
 */
/* CBaseDoor::TraceAttack(entvars_s *, float, Vector, TraceResult *, int) */

void __thiscall
CBaseDoor::TraceAttack
          (CBaseDoor *this,int param_1,float param_2,undefined4 param_3,undefined4 param_4,
          uint param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined3 extraout_var;
  int *piVar5;
  entvars_t *peVar6;
  float *pfVar7;
  float fVar8;
  float *pfVar9;
  longdouble extraout_ST0;
  char local_9d;
  float local_8c;
  float local_88;
  float local_84;
  float local_7c [4];
  float local_6c;
  float local_68;
  float local_64;
  float local_5c [7];
  float local_40;
  float local_3c [4];
  float local_2c [7];
  
  local_9d = '\0';
  if (gpGlobals->time < *(float *)&this->field_0x114) {
    return;
  }
  if (this->pev->takedamage == 0.0) {
    return;
  }
  if ((param_5 & 0x6000040) == 0) {
    return;
  }
  iVar2 = strcmp(gpGlobals->pStringBase + this->pev->classname,"func_water");
  if (iVar2 == 0) {
    return;
  }
  local_40 = param_2;
  if ((param_5 & 0x40) != 0) {
    local_40 = param_2 + param_2;
  }
  local_40 = *(float *)&this->field_0x110 + local_40;
  *(float *)&this->field_0x110 = local_40;
  if (local_40 < *(float *)&this->field_0x118) {
    return;
  }
  if (this->field_0x13c == '\0') {
    iVar2 = (*g_engfuncs.pfnRandomLong)(0,100);
    if ((param_5 & 0x2000000) == 0) {
      if (0x32 < iVar2) goto LAB_000b58b1;
    }
    else if (0x1e < iVar2) {
LAB_000b58b1:
      if (*(int *)&this->field_0x80 == 1) {
        this->field_0x13c = 1;
        *(float *)&this->field_0x114 = gpGlobals->time + 0.1;
        return;
      }
    }
  }
  iVar3 = (*g_engfuncs.pfnRandomLong)(0,0x1d);
  iVar2 = iVar3 + 0x5f;
  if (iVar3 - 3U < 5) {
    iVar2 = 100;
  }
  (*g_engfuncs.pfnRandomFloat)(0.85,1.0);
  fVar8 = (float)extraout_ST0;
  if ((longdouble)1.0 < extraout_ST0) {
    fVar8 = 1.0;
  }
  switch(*(undefined4 *)&this->field_0x11c) {
  case 0:
    iVar3 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar3 == 0) {
      peVar6 = this->pev;
      pcVar4 = "debris/bustglass1.wav";
LAB_000b59d3:
      EMIT_SOUND_DYN((int)peVar6->pContainingEntity,2,pcVar4,fVar8,0x3f4ccccd,0,iVar2,0.5);
    }
    else if (iVar3 == 1) {
      peVar6 = this->pev;
      pcVar4 = "debris/bustglass2.wav";
      goto LAB_000b59d3;
    }
    local_9d = '\x01';
    break;
  case 1:
    iVar3 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar3 == 0) {
      peVar6 = this->pev;
      pcVar4 = "debris/bustcrate1.wav";
LAB_000b5a47:
      EMIT_SOUND_DYN((int)peVar6->pContainingEntity,2,pcVar4,fVar8,0x3f4ccccd,0,iVar2,0.5);
    }
    else if (iVar3 == 1) {
      peVar6 = this->pev;
      pcVar4 = "debris/bustcrate2.wav";
      goto LAB_000b5a47;
    }
    local_9d = '\b';
    break;
  case 2:
  case 6:
    iVar3 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar3 == 0) {
      peVar6 = this->pev;
      pcVar4 = "debris/bustmetal1.wav";
LAB_000b5abb:
      EMIT_SOUND_DYN((int)peVar6->pContainingEntity,2,pcVar4,fVar8,0x3f4ccccd,0,iVar2,0.5);
    }
    else if (iVar3 == 1) {
      peVar6 = this->pev;
      pcVar4 = "debris/bustmetal2.wav";
      goto LAB_000b5abb;
    }
    local_9d = '\x02';
    break;
  case 3:
    iVar3 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar3 == 0) {
      peVar6 = this->pev;
      pcVar4 = "debris/bustflesh1.wav";
LAB_000b5b2f:
      EMIT_SOUND_DYN((int)peVar6->pContainingEntity,2,pcVar4,fVar8,0x3f4ccccd,0,iVar2,0.5);
    }
    else if (iVar3 == 1) {
      peVar6 = this->pev;
      pcVar4 = "debris/bustflesh2.wav";
      goto LAB_000b5b2f;
    }
    local_9d = '\x04';
    break;
  case 4:
  case 8:
    iVar3 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar3 == 0) {
      peVar6 = this->pev;
      pcVar4 = "debris/bustconcrete1.wav";
LAB_000b5ba3:
      EMIT_SOUND_DYN((int)peVar6->pContainingEntity,2,pcVar4,fVar8,0x3f4ccccd,0,iVar2,0.5);
    }
    else if (iVar3 == 1) {
      peVar6 = this->pev;
      pcVar4 = "debris/bustconcrete2.wav";
      goto LAB_000b5ba3;
    }
    local_9d = '@';
    break;
  case 5:
    EMIT_SOUND_DYN((int)this->pev->pContainingEntity,2,"debris/bustceiling.wav",fVar8,0x3f4ccccd,0,
                   iVar2,0.5);
  }
  peVar6 = this->pev;
  local_7c[0] = peVar6->mins[0] + peVar6->maxs[0];
  local_7c[1] = peVar6->mins[1] + peVar6->maxs[1];
  local_7c[2] = peVar6->mins[2] + peVar6->maxs[2];
  local_6c = local_7c[0] * 0.5;
  local_68 = local_7c[1] * 0.5;
  local_64 = local_7c[2] * 0.5;
  local_5c[0] = peVar6->origin[0] + local_6c;
  local_5c[1] = peVar6->origin[1] + local_68;
  local_5c[2] = peVar6->origin[2] + local_64;
  pfVar7 = local_5c;
  pfVar9 = local_2c;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar9 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    pfVar9 = pfVar9 + 1;
  }
  local_8c = local_2c[0] - *(float *)(param_1 + 8);
  local_88 = local_2c[1] - *(float *)(param_1 + 0xc);
  fVar8 = local_2c[2] - *(float *)(param_1 + 0x10);
  local_40 = SQRT(fVar8 * fVar8 + local_88 * local_88 + local_8c * local_8c);
  if (local_40 == 0.0) {
    local_84 = 1.0;
    local_8c = 0.0;
    local_88 = 0.0;
  }
  else {
    local_84 = 1.0 / local_40;
    local_8c = local_84 * local_8c;
    local_88 = local_84 * local_88;
    local_84 = local_84 * fVar8;
  }
  local_5c[0] = param_2 * local_8c;
  local_5c[1] = param_2 * local_88;
  local_5c[2] = param_2 * local_84;
  local_6c = param_2 * local_8c * 2.0;
  local_68 = param_2 * local_88 * 2.0;
  local_64 = param_2 * local_84 * 2.0;
  if ((param_5 & 0x2000000) == 0) {
    fVar8 = 1.0;
  }
  else {
    fVar8 = 8.0;
  }
  local_7c[0] = fVar8 * local_6c;
  local_7c[1] = fVar8 * local_68;
  local_7c[2] = fVar8 * local_64;
  pfVar7 = local_7c;
  pfVar9 = local_3c;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar9 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    pfVar9 = pfVar9 + 1;
  }
  if (*(int *)&this->field_0x11c == 0) {
    (*g_engfuncs.pfnMessageBegin)(4,gmsgTSCreateDebris,local_2c,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteCoord)(local_2c[0]);
    (*g_engfuncs.pfnWriteCoord)(local_2c[1]);
    (*g_engfuncs.pfnWriteCoord)(local_2c[2]);
    (*g_engfuncs.pfnWriteCoord)(this->pev->size[0]);
    (*g_engfuncs.pfnWriteCoord)(this->pev->size[1]);
    (*g_engfuncs.pfnWriteCoord)(this->pev->size[2]);
    (*g_engfuncs.pfnWriteByte)(0);
    (*g_engfuncs.pfnWriteCoord)(0.0);
    (*g_engfuncs.pfnWriteCoord)(0.0);
    (*g_engfuncs.pfnWriteCoord)(0.0);
    (*g_engfuncs.pfnWriteCoord)(0.0);
    (*g_engfuncs.pfnWriteCoord)(0.0);
    (*g_engfuncs.pfnWriteCoord)(0.0);
    (*g_engfuncs.pfnWriteLong)(0);
    (*g_engfuncs.pfnWriteCoord)(0.0);
  }
  else {
    (*g_engfuncs.pfnMessageBegin)(4,0x17,local_2c,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(0x6c);
    (*g_engfuncs.pfnWriteCoord)(local_2c[0]);
    (*g_engfuncs.pfnWriteCoord)(local_2c[1]);
    (*g_engfuncs.pfnWriteCoord)(local_2c[2]);
    (*g_engfuncs.pfnWriteCoord)(this->pev->size[0]);
    (*g_engfuncs.pfnWriteCoord)(this->pev->size[1]);
    (*g_engfuncs.pfnWriteCoord)(this->pev->size[2]);
    (*g_engfuncs.pfnWriteCoord)(local_3c[0]);
    (*g_engfuncs.pfnWriteCoord)(local_3c[1]);
    (*g_engfuncs.pfnWriteCoord)(local_3c[2]);
    (*g_engfuncs.pfnWriteByte)(10);
    (*g_engfuncs.pfnWriteShort)(*(int *)&this->field_0x120);
    (*g_engfuncs.pfnWriteByte)(0);
    (*g_engfuncs.pfnWriteByte)(0x19);
    (*g_engfuncs.pfnWriteByte)((int)local_9d);
  }
  (*g_engfuncs.pfnMessageEnd)();
  this->pev->solid = 0;
  this->pev->effects = 0x80;
  this->pev->takedamage = 0.0;
  this->pev->deadflag = 2;
  *(undefined4 *)&this->field_0x14 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  *(undefined4 *)&this->field_0xc = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  if (0.0 <= *(float *)&this->field_0x10c) {
    bVar1 = int((EHANDLE *)&this->field_0x104);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      piVar5 = (int *)EHANDLE::operator->((EHANDLE *)&this->field_0x104);
      if (*(float *)&this->field_0x10c == 0.0) {
        fVar8 = 30.0;
      }
      else {
        fVar8 = *(float *)&this->field_0x10c;
      }
      *(float *)(*piVar5 + 0x104) = gpGlobals->time + fVar8;
      iVar2 = EHANDLE::operator->((EHANDLE *)&this->field_0x104);
      *(undefined4 *)(iVar2 + 0xc) = 0xffff0000;
      *(code **)(iVar2 + 0x10) = CInfoBreakable::RespawnThink;
    }
  }
  return;
}

/* 000b60cc  CBaseDoor::Spawn  (817 bytes)
 * undefined Spawn(void)
 */
/* CBaseDoor::Spawn(void) */

void __thiscall CBaseDoor::Spawn(CBaseDoor *this)

{
  entvars_t *peVar1;
  bool bVar2;
  undefined3 extraout_var;
  int *piVar3;
  undefined3 extraout_var_00;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  undefined4 *puVar7;
  vec_t *pvVar8;
  float *pfVar9;
  undefined4 *puVar10;
  vec_t *pvVar11;
  edict_t *peVar12;
  float local_3c;
  float local_38;
  float local_34;
  float local_2c [7];
  
  pvVar8 = this->pev->origin;
  pvVar11 = (vec_t *)&this->field_0x124;
  for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pvVar11 = *pvVar8;
    pvVar8 = pvVar8 + 1;
    pvVar11 = pvVar11 + 1;
  }
  pvVar8 = this->pev->angles;
  pvVar11 = (vec_t *)&this->field_0x130;
  for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pvVar11 = *pvVar8;
    pvVar8 = pvVar8 + 1;
    pvVar11 = pvVar11 + 1;
  }
  this->field_0x13c = 0;
  *(undefined4 *)&this->field_0x110 = 0;
  *(undefined4 *)&this->field_0x114 = 0;
  if (*(float *)&this->field_0x118 <= 0.0) {
    this->pev->takedamage = 0.0;
  }
  else {
    this->pev->takedamage = 1.0;
  }
  (*this->vtable[10])(this);
  SetMovedir((int)this->pev);
  peVar1 = this->pev;
  if (peVar1->skin == 0) {
    if ((peVar1->spawnflags & 8) == 0) {
      this->pev->solid = 4;
    }
    else {
      peVar1->solid = 0;
    }
  }
  else {
    this->pev->solid = 0;
    piVar3 = &this->pev->spawnflags;
    *piVar3 = *piVar3 | 0x80000000;
  }
  this->pev->movetype = 7;
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  if (this->pev->speed == 0.0) {
    this->pev->speed = 100.0;
  }
  pvVar8 = this->pev->origin;
  pvVar11 = (vec_t *)&this->field_0x9c;
  for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pvVar11 = *pvVar8;
    pvVar8 = pvVar8 + 1;
    pvVar11 = pvVar11 + 1;
  }
  peVar1 = this->pev;
  local_34 = (ABS((peVar1->size[2] - 2.0) * peVar1->movedir[2]) +
             ABS((peVar1->size[1] - 2.0) * peVar1->movedir[1]) +
             ABS((peVar1->size[0] - 2.0) * peVar1->movedir[0])) - *(float *)&this->field_0x90;
  local_3c = local_34 * peVar1->movedir[0];
  local_38 = local_34 * peVar1->movedir[1];
  local_34 = local_34 * peVar1->movedir[2];
  local_2c[0] = *(float *)&this->field_0x9c + local_3c;
  local_2c[1] = *(float *)&this->field_0xa0 + local_38;
  local_2c[2] = *(float *)&this->field_0xa4 + local_34;
  pfVar6 = local_2c;
  pfVar9 = (float *)&this->field_0xa8;
  for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar9 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar9 = pfVar9 + 1;
  }
  if ((this->pev->spawnflags & 1) != 0) {
    UTIL_SetOrigin((int)this->pev,&this->field_0xa8);
    puVar7 = (undefined4 *)&this->field_0x9c;
    puVar10 = (undefined4 *)&this->field_0xa8;
    for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar10 = puVar10 + 1;
    }
    pvVar8 = this->pev->origin;
    pvVar11 = (vec_t *)&this->field_0x9c;
    for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pvVar11 = *pvVar8;
      pvVar8 = pvVar8 + 1;
      pvVar11 = pvVar11 + 1;
    }
  }
  *(undefined4 *)&this->field_0x80 = 1;
  if ((this->pev->spawnflags & 0x100) == 0) {
    *(undefined4 *)&this->field_0x14 = 0xffff0000;
    *(code **)&this->field_0x18 = DoorTouch;
  }
  else {
    *(undefined4 *)&this->field_0x14 = 0;
    *(undefined4 *)&this->field_0x18 = 0;
  }
  if (0.0 <= *(float *)&this->field_0x10c) {
    bVar2 = int((EHANDLE *)&this->field_0x104);
    if (CONCAT31(extraout_var,bVar2) == 0) {
      peVar12 = this->pev->pContainingEntity;
      pvVar8 = this->pev->angles;
      VecBModelOrigin(&local_3c,(int)this->pev);
      piVar3 = CBaseEntity::Create((int)g_szInfoBreakable,&local_3c,pvVar8,peVar12);
      EHANDLE::operator=((EHANDLE *)&this->field_0x104,piVar3);
    }
    bVar2 = int((EHANDLE *)&this->field_0x104);
    if (CONCAT31(extraout_var_00,bVar2) != 0) {
      uVar4 = EHANDLE::Get((EHANDLE *)&this->field_0x104);
      iVar5 = 0;
      if (uVar4 != 0) {
        iVar5 = *(int *)(uVar4 + 0x7c);
      }
      EHANDLE::operator=((EHANDLE *)(iVar5 + 100),(int *)this);
    }
  }
  return;
}

/* 000b6404  CBaseDoor::SetToggleState  (63 bytes)
 * undefined SetToggleState(int param_1)
 */
/* CBaseDoor::SetToggleState(int) */

void __thiscall CBaseDoor::SetToggleState(CBaseDoor *this,int param_1)

{
  undefined1 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = &this->field_0xa8;
  }
  else {
    puVar1 = &this->field_0x9c;
  }
  UTIL_SetOrigin((int)this->pev,puVar1);
  return;
}

/* 000b6448  CBaseDoor::Precache  (1599 bytes)
 * undefined Precache(void)
 */
/* CBaseDoor::Precache(void) */

void __thiscall CBaseDoor::Precache(CBaseDoor *this)

{
  int iVar1;
  char *pcVar2;
  
  switch(this->field_0x13e) {
  default:
    iVar1 = (*g_engfuncs.pfnAllocString)("common/null.wav");
    break;
  case 1:
    (*g_engfuncs.pfnPrecacheSound)("doors/doormove1.wav");
    iVar1 = (*g_engfuncs.pfnAllocString)("doors/doormove1.wav");
    break;
  case 2:
    (*g_engfuncs.pfnPrecacheSound)("doors/doormove2.wav");
    iVar1 = (*g_engfuncs.pfnAllocString)("doors/doormove2.wav");
    break;
  case 3:
    (*g_engfuncs.pfnPrecacheSound)("doors/doormove3.wav");
    iVar1 = (*g_engfuncs.pfnAllocString)("doors/doormove3.wav");
    break;
  case 4:
    (*g_engfuncs.pfnPrecacheSound)("doors/doormove4.wav");
    iVar1 = (*g_engfuncs.pfnAllocString)("doors/doormove4.wav");
    break;
  case 5:
    (*g_engfuncs.pfnPrecacheSound)("doors/doormove5.wav");
    iVar1 = (*g_engfuncs.pfnAllocString)("doors/doormove5.wav");
    break;
  case 6:
    (*g_engfuncs.pfnPrecacheSound)("doors/doormove6.wav");
    iVar1 = (*g_engfuncs.pfnAllocString)("doors/doormove6.wav");
    break;
  case 7:
    (*g_engfuncs.pfnPrecacheSound)("doors/doormove7.wav");
    iVar1 = (*g_engfuncs.pfnAllocString)("doors/doormove7.wav");
    break;
  case 8:
    (*g_engfuncs.pfnPrecacheSound)("doors/doormove8.wav");
    iVar1 = (*g_engfuncs.pfnAllocString)("doors/doormove8.wav");
    break;
  case 9:
    (*g_engfuncs.pfnPrecacheSound)("doors/doormove9.wav");
    iVar1 = (*g_engfuncs.pfnAllocString)("doors/doormove9.wav");
    break;
  case 10:
    (*g_engfuncs.pfnPrecacheSound)("doors/doormove10.wav");
    iVar1 = (*g_engfuncs.pfnAllocString)("doors/doormove10.wav");
  }
  this->pev->noise1 = iVar1;
  switch(this->field_0x13f) {
  default:
    iVar1 = (*g_engfuncs.pfnAllocString)("common/null.wav");
    break;
  case 1:
    (*g_engfuncs.pfnPrecacheSound)("doors/doorstop1.wav");
    iVar1 = (*g_engfuncs.pfnAllocString)("doors/doorstop1.wav");
    break;
  case 2:
    (*g_engfuncs.pfnPrecacheSound)("doors/doorstop2.wav");
    iVar1 = (*g_engfuncs.pfnAllocString)("doors/doorstop2.wav");
    break;
  case 3:
    (*g_engfuncs.pfnPrecacheSound)("doors/doorstop3.wav");
    iVar1 = (*g_engfuncs.pfnAllocString)("doors/doorstop3.wav");
    break;
  case 4:
    (*g_engfuncs.pfnPrecacheSound)("doors/doorstop4.wav");
    iVar1 = (*g_engfuncs.pfnAllocString)("doors/doorstop4.wav");
    break;
  case 5:
    (*g_engfuncs.pfnPrecacheSound)("doors/doorstop5.wav");
    iVar1 = (*g_engfuncs.pfnAllocString)("doors/doorstop5.wav");
    break;
  case 6:
    (*g_engfuncs.pfnPrecacheSound)("doors/doorstop6.wav");
    iVar1 = (*g_engfuncs.pfnAllocString)("doors/doorstop6.wav");
    break;
  case 7:
    (*g_engfuncs.pfnPrecacheSound)("doors/doorstop7.wav");
    iVar1 = (*g_engfuncs.pfnAllocString)("doors/doorstop7.wav");
    break;
  case 8:
    (*g_engfuncs.pfnPrecacheSound)("doors/doorstop8.wav");
    iVar1 = (*g_engfuncs.pfnAllocString)("doors/doorstop8.wav");
  }
  this->pev->noise2 = iVar1;
  if (this->field_0x164 != '\0') {
    pcVar2 = ButtonSound((uint)(byte)this->field_0x164);
    (*g_engfuncs.pfnPrecacheSound)(pcVar2);
    iVar1 = (*g_engfuncs.pfnAllocString)(pcVar2);
    *(int *)&this->field_0x140 = iVar1;
  }
  if (this->field_0x166 != '\0') {
    pcVar2 = ButtonSound((uint)(byte)this->field_0x166);
    (*g_engfuncs.pfnPrecacheSound)(pcVar2);
    iVar1 = (*g_engfuncs.pfnAllocString)(pcVar2);
    *(int *)&this->field_0x148 = iVar1;
  }
  switch(this->field_0x165) {
  case 1:
    pcVar2 = "NA";
    break;
  case 2:
    pcVar2 = "ND";
    break;
  case 3:
    pcVar2 = "NF";
    break;
  case 4:
    pcVar2 = "NFIRE";
    break;
  case 5:
    pcVar2 = "NCHEM";
    break;
  case 6:
    pcVar2 = "NRAD";
    break;
  case 7:
    pcVar2 = "NCON";
    break;
  case 8:
    pcVar2 = "NH";
    break;
  case 9:
    pcVar2 = "NG";
    break;
  default:
    *(undefined4 *)&this->field_0x144 = 0;
    goto LAB_000b691a;
  }
  iVar1 = (*g_engfuncs.pfnAllocString)(pcVar2);
  *(int *)&this->field_0x144 = iVar1;
LAB_000b691a:
  switch(this->field_0x167) {
  case 1:
    pcVar2 = "EA";
    break;
  case 2:
    pcVar2 = "ED";
    break;
  case 3:
    pcVar2 = "EF";
    break;
  case 4:
    pcVar2 = "EFIRE";
    break;
  case 5:
    pcVar2 = "ECHEM";
    break;
  case 6:
    pcVar2 = "ERAD";
    break;
  case 7:
    pcVar2 = "ECON";
    break;
  case 8:
    pcVar2 = "EH";
    break;
  default:
    *(undefined4 *)&this->field_0x14c = 0;
    goto LAB_000b6a16;
  }
  iVar1 = (*g_engfuncs.pfnAllocString)(pcVar2);
  *(int *)&this->field_0x14c = iVar1;
LAB_000b6a16:
  if (*(float *)&this->field_0x118 <= 0.0) {
    *(undefined4 *)&this->field_0x120 = 0;
  }
  else {
    switch(*(undefined4 *)&this->field_0x11c) {
    case 0:
    case 7:
      pcVar2 = "models/glassgibs.mdl";
      (*g_engfuncs.pfnPrecacheSound)("debris/bustglass1.wav");
      (*g_engfuncs.pfnPrecacheSound)("debris/bustglass2.wav");
      break;
    default:
      pcVar2 = "models/woodgibs.mdl";
      (*g_engfuncs.pfnPrecacheSound)("debris/bustcrate1.wav");
      (*g_engfuncs.pfnPrecacheSound)("debris/bustcrate2.wav");
      break;
    case 2:
      pcVar2 = "models/metalplategibs.mdl";
      (*g_engfuncs.pfnPrecacheSound)("debris/bustmetal1.wav");
      (*g_engfuncs.pfnPrecacheSound)("debris/bustmetal2.wav");
      break;
    case 4:
      pcVar2 = "models/cindergibs.mdl";
      (*g_engfuncs.pfnPrecacheSound)("debris/bustconcrete1.wav");
      (*g_engfuncs.pfnPrecacheSound)("debris/bustconcrete2.wav");
      break;
    case 5:
      pcVar2 = "models/ceilinggibs.mdl";
      (*g_engfuncs.pfnPrecacheSound)("debris/bustceiling.wav");
      break;
    case 6:
      (*g_engfuncs.pfnPrecacheSound)("buttons/spark5.wav");
      (*g_engfuncs.pfnPrecacheSound)("buttons/spark6.wav");
      pcVar2 = "models/computergibs.mdl";
      (*g_engfuncs.pfnPrecacheSound)("debris/bustmetal1.wav");
      (*g_engfuncs.pfnPrecacheSound)("debris/bustmetal2.wav");
    }
    CBreakable::MaterialSoundPrecache(*(undefined4 *)&this->field_0x11c);
    iVar1 = (*g_engfuncs.pfnPrecacheModel)(pcVar2);
    *(int *)&this->field_0x120 = iVar1;
  }
  return;
}

/* 000b6ba0  CBaseDoor::DoorTouch  (335 bytes)
 * undefined DoorTouch(int * param_1)
 */
/* CBaseDoor::DoorTouch(CBaseEntity *) */

void __thiscall CBaseDoor::DoorTouch(CBaseDoor *this,int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = strcmp(gpGlobals->pStringBase + *(int *)*param_1,"player");
  if (iVar3 == 0) {
    if (*(int *)&this->field_0x100 != 0) {
      iVar3 = UTIL_IsMasterTriggered(*(int *)&this->field_0x100,param_1);
      if (iVar3 == 0) {
        PlayLockSounds((int)this->pev,(int *)&this->field_0x140,1,0);
      }
    }
    if (this->pev->targetname == 0) {
      EHANDLE::operator=((EHANDLE *)&this->field_0xd4,param_1);
      fVar2 = this->pev->speed;
      iVar3 = *param_1;
      if (SQRT(*(float *)(iVar3 + 0x28) * *(float *)(iVar3 + 0x28) +
               *(float *)(iVar3 + 0x24) * *(float *)(iVar3 + 0x24) +
               *(float *)(iVar3 + 0x20) * *(float *)(iVar3 + 0x20)) <= this->pev->speed) {
        fVar1 = this->pev->speed;
      }
      else {
        iVar3 = *param_1;
        fVar1 = SQRT(*(float *)(iVar3 + 0x28) * *(float *)(iVar3 + 0x28) +
                     *(float *)(iVar3 + 0x24) * *(float *)(iVar3 + 0x24) +
                     *(float *)(iVar3 + 0x20) * *(float *)(iVar3 + 0x20));
      }
      this->pev->speed = fVar1;
      iVar3 = DoorActivate(this);
      if (iVar3 != 0) {
        *(undefined4 *)&this->field_0x14 = 0;
        *(undefined4 *)&this->field_0x18 = 0;
      }
      this->pev->speed = fVar2;
    }
    else {
      PlayLockSounds((int)this->pev,(int *)&this->field_0x140,1,0);
    }
  }
  return;
}

/* 000b6cf4  CBaseDoor::Use  (90 bytes)
 * undefined Use(CBaseDoor * param_1, int * param_2)
 */
/* CBaseDoor::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CBaseDoor::Use(CBaseDoor *param_1,int *param_2)

{
  EHANDLE::operator=((EHANDLE *)&param_1->field_0xd4,param_2);
  if ((*(int *)&param_1->field_0x80 == 1) ||
     (((param_1->pev->spawnflags & 0x20) != 0 && (*(int *)&param_1->field_0x80 == 0)))) {
    DoorActivate(param_1);
  }
  return;
}

/* 000b6d50  CBaseDoor::DoorActivate  (258 bytes)
 * undefined4 DoorActivate(void)
 */
/* CBaseDoor::DoorActivate(void) */

undefined4 __thiscall CBaseDoor::DoorActivate(CBaseDoor *this)

{
  undefined1 *this_00;
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined3 extraout_var;
  
  if ((this->field_0x13c == '\0') && (-1 < (char)this->pev->effects)) {
    uVar2 = _((EHANDLE *)&this->field_0xd4);
    iVar3 = UTIL_IsMasterTriggered(*(int *)&this->field_0x100,uVar2);
    if (iVar3 != 0) {
      if (((this->pev->spawnflags & 0x20) == 0) || (*(int *)&this->field_0x80 != 0)) {
        this_00 = &this->field_0xd4;
        bVar1 = int((EHANDLE *)this_00);
        if (CONCAT31(extraout_var,bVar1) != 0) {
          iVar3 = EHANDLE::operator->((EHANDLE *)this_00);
          iVar3 = (**(code **)(*(int *)(iVar3 + 0x60) + 200))(iVar3);
          if (iVar3 != 0) {
            iVar3 = EHANDLE::operator->((EHANDLE *)this_00);
            (**(code **)(*(int *)(iVar3 + 0x60) + 0x5c))(iVar3,(float)(byte)this->field_0x13d,0);
          }
        }
        PlayLockSounds((int)this->pev,(int *)&this->field_0x140,0,0);
        DoorGoUp(this);
      }
      else {
        DoorGoDown(this);
      }
      return 1;
    }
  }
  return 0;
}

/* 000b6e54  CBaseDoor::DoorGoUp  (687 bytes)
 * undefined DoorGoUp(void)
 */
/* CBaseDoor::DoorGoUp(void) */

void __thiscall CBaseDoor::DoorGoUp(CBaseDoor *this)

{
  entvars_t *peVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  int *piVar4;
  float local_64;
  float local_5c;
  float local_58;
  float local_54;
  float local_4c;
  float local_48;
  float local_44;
  float local_3c;
  float local_38;
  float local_34;
  float local_2c;
  float local_28;
  float local_24;
  float local_1c;
  float local_18;
  float local_14;
  
  peVar1 = this->pev;
  if (-1 < peVar1->spawnflags) {
    EMIT_SOUND_DYN((int)peVar1->pContainingEntity,6,gpGlobals->pStringBase + peVar1->noise1,
                   0x3f800000,0x3f4ccccd,0,100,0.5);
  }
  *(undefined4 *)&this->field_0x80 = 2;
  *(undefined4 *)&this->field_0xdc = 0xffff0000;
  *(code **)&this->field_0xe0 = DoorHitTop;
  iVar3 = strcmp(gpGlobals->pStringBase + this->pev->classname,"func_door_rotating");
  if (iVar3 == 0) {
    local_64 = 1.0;
    bVar2 = int((EHANDLE *)&this->field_0xd4);
    if (CONCAT31(extraout_var,bVar2) != 0) {
      piVar4 = (int *)EHANDLE::operator->((EHANDLE *)&this->field_0xd4);
      iVar3 = *piVar4;
      peVar1 = this->pev;
      if (((peVar1->spawnflags & 0x10) == 0) && (peVar1->movedir[1] != 0.0)) {
        local_1c = *(float *)(iVar3 + 8) - peVar1->origin[0];
        local_18 = *(float *)(iVar3 + 0xc) - peVar1->origin[1];
        local_14 = *(float *)(iVar3 + 0x10) - peVar1->origin[2];
        local_44 = SQRT(*(float *)(iVar3 + 0x28) * *(float *)(iVar3 + 0x28) +
                        *(float *)(iVar3 + 0x24) * *(float *)(iVar3 + 0x24) +
                        *(float *)(iVar3 + 0x20) * *(float *)(iVar3 + 0x20));
        if (local_44 == 0.0) {
          local_5c = 0.0;
          local_58 = 0.0;
          local_44 = local_64;
        }
        else {
          local_44 = 1.0 / local_44;
          local_5c = local_44 * *(float *)(iVar3 + 0x20);
          local_58 = local_44 * *(float *)(iVar3 + 0x24);
          local_44 = local_44 * *(float *)(iVar3 + 0x28);
        }
        local_4c = local_5c * 10.0;
        local_48 = local_58 * 10.0;
        local_44 = local_44 * 10.0;
        local_3c = *(float *)(iVar3 + 8) + local_4c;
        local_38 = *(float *)(iVar3 + 0xc) + local_48;
        local_34 = *(float *)(iVar3 + 0x10) + local_44;
        peVar1 = this->pev;
        local_2c = local_3c - peVar1->origin[0];
        local_28 = local_38 - peVar1->origin[1];
        local_24 = local_34 - peVar1->origin[2];
        if (local_1c * local_28 - local_18 * local_2c < 0.0) {
          local_64 = -1.0;
        }
      }
    }
    local_5c = local_64 * *(float *)&this->field_0xc0;
    local_58 = local_64 * *(float *)&this->field_0xc4;
    local_54 = local_64 * *(float *)&this->field_0xc8;
    CBaseToggle::AngularMove((CBaseToggle *)this,&local_5c,this->pev->speed);
  }
  else {
    local_5c = *(float *)&this->field_0xa8;
    local_58 = *(float *)&this->field_0xac;
    local_54 = *(float *)&this->field_0xb0;
    CBaseToggle::LinearMove((CBaseToggle *)this,&local_5c,this->pev->speed);
  }
  return;
}

/* 000b7108  CBaseDoor::DoorHitTop  (376 bytes)
 * undefined DoorHitTop(void)
 */
/* CBaseDoor::DoorHitTop(void) */

void __thiscall CBaseDoor::DoorHitTop(CBaseDoor *this)

{
  entvars_t *peVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  CBaseDoor *pCVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  peVar1 = this->pev;
  if (-1 < peVar1->spawnflags) {
    EMIT_SOUND_DYN((int)peVar1->pContainingEntity,6,gpGlobals->pStringBase + peVar1->noise1,0,0,0x20
                   ,100,0.5);
    EMIT_SOUND_DYN((int)this->pev->pContainingEntity,6,gpGlobals->pStringBase + this->pev->noise2,
                   0x3f800000,0x3f4ccccd,0,100,0.5);
  }
  *(undefined4 *)&this->field_0x80 = 0;
  uVar2 = this->pev->spawnflags;
  if ((uVar2 & 0x20) == 0) {
    this->pev->nextthink = this->pev->ltime + *(float *)&this->field_0x8c;
    *(undefined4 *)&this->field_0xc = 0xffff0000;
    *(code **)&this->field_0x10 = DoorGoDown;
    if (*(float *)&this->field_0x8c == -1.0) {
      this->pev->nextthink = -1.0;
    }
  }
  else if ((uVar2 & 0x100) == 0) {
    *(undefined4 *)&this->field_0x14 = 0xffff0000;
    *(code **)&this->field_0x18 = DoorTouch;
  }
  if ((this->pev->netname != 0) && ((this->pev->spawnflags & 1) != 0)) {
    uVar7 = 0;
    uVar6 = 3;
    pCVar5 = this;
    uVar3 = _((EHANDLE *)&this->field_0xd4);
    FireTargets((int)(gpGlobals->pStringBase + this->pev->netname),uVar3,pCVar5,uVar6,uVar7);
  }
  uVar6 = 0;
  uVar3 = 3;
  piVar4 = (int *)_((EHANDLE *)&this->field_0xd4);
  CBaseDelay::SUB_UseTargets((CBaseDelay *)this,piVar4,uVar3,uVar6);
  return;
}

/* 000b7284  CBaseDoor::DoorGoDown  (278 bytes)
 * undefined DoorGoDown(void)
 */
/* CBaseDoor::DoorGoDown(void) */

void __thiscall CBaseDoor::DoorGoDown(CBaseDoor *this)

{
  entvars_t *peVar1;
  int iVar2;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  peVar1 = this->pev;
  if (-1 < peVar1->spawnflags) {
    EMIT_SOUND_DYN((int)peVar1->pContainingEntity,6,gpGlobals->pStringBase + peVar1->noise1,
                   0x3f800000,0x3f4ccccd,0,100,0.5);
  }
  *(undefined4 *)&this->field_0x80 = 3;
  *(undefined4 *)&this->field_0xdc = 0xffff0000;
  *(code **)&this->field_0xe0 = DoorHitBottom;
  iVar2 = strcmp(gpGlobals->pStringBase + this->pev->classname,"func_door_rotating");
  if (iVar2 == 0) {
    local_1c = *(float *)&this->field_0xb4;
    local_18 = *(undefined4 *)&this->field_0xb8;
    local_14 = *(undefined4 *)&this->field_0xbc;
    CBaseToggle::AngularMove((CBaseToggle *)this,&local_1c,this->pev->speed);
  }
  else {
    local_1c = *(float *)&this->field_0x9c;
    local_18 = *(undefined4 *)&this->field_0xa0;
    local_14 = *(undefined4 *)&this->field_0xa4;
    CBaseToggle::LinearMove((CBaseToggle *)this,&local_1c,this->pev->speed);
  }
  return;
}

/* 000b739c  CBaseDoor::DoorHitBottom  (308 bytes)
 * undefined DoorHitBottom(void)
 */
/* CBaseDoor::DoorHitBottom(void) */

void __thiscall CBaseDoor::DoorHitBottom(CBaseDoor *this)

{
  entvars_t *peVar1;
  int *piVar2;
  CBaseDoor *pCVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  peVar1 = this->pev;
  if (-1 < peVar1->spawnflags) {
    EMIT_SOUND_DYN((int)peVar1->pContainingEntity,6,gpGlobals->pStringBase + peVar1->noise1,0,0,0x20
                   ,100,0.5);
    EMIT_SOUND_DYN((int)this->pev->pContainingEntity,6,gpGlobals->pStringBase + this->pev->noise2,
                   0x3f800000,0x3f4ccccd,0,100,0.5);
  }
  *(undefined4 *)&this->field_0x80 = 1;
  if ((this->pev->spawnflags & 0x100) == 0) {
    *(undefined4 *)&this->field_0x14 = 0xffff0000;
    *(code **)&this->field_0x18 = DoorTouch;
  }
  else {
    *(undefined4 *)&this->field_0x14 = 0;
    *(undefined4 *)&this->field_0x18 = 0;
  }
  uVar6 = 0;
  uVar5 = 3;
  piVar2 = (int *)_((EHANDLE *)&this->field_0xd4);
  CBaseDelay::SUB_UseTargets((CBaseDelay *)this,piVar2,uVar5,uVar6);
  if ((this->pev->netname != 0) && ((((byte)this->pev->spawnflags ^ 1) & 1) != 0)) {
    uVar4 = 0;
    uVar6 = 3;
    pCVar3 = this;
    uVar5 = _((EHANDLE *)&this->field_0xd4);
    FireTargets((int)(gpGlobals->pStringBase + this->pev->netname),uVar5,pCVar3,uVar6,uVar4);
  }
  return;
}

/* 000b74d0  CBaseDoor::Blocked  (828 bytes)
 * undefined Blocked(int param_1)
 */
/* CBaseDoor::Blocked(CBaseEntity *) */

void __thiscall CBaseDoor::Blocked(CBaseDoor *this,int param_1)

{
  entvars_t *peVar1;
  entvars_t *peVar2;
  bool bVar3;
  globalvars_t *pgVar4;
  int iVar5;
  CBaseDoor *this_00;
  vec_t *pvVar6;
  vec_t *pvVar7;
  edict_t *local_14;
  
  local_14 = (edict_t *)0x0;
  if (this->pev->dmg != 0.0) {
    (**(code **)(*(int *)(param_1 + 0x60) + 0x58))(param_1,this->pev,this->pev,this->pev->dmg,1);
  }
  if (0.0 <= *(float *)&this->field_0x8c) {
    if (*(int *)&this->field_0x80 == 3) {
      DoorGoUp(this);
    }
    else {
      DoorGoDown(this);
    }
  }
  if (this->pev->targetname != 0) {
    while( true ) {
      do {
        local_14 = (*g_engfuncs.pfnFindEntityByString)
                             (local_14,"targetname",gpGlobals->pStringBase + this->pev->targetname);
      } while ((entvars_t *)((uint)&local_14->v & (local_14 == (edict_t *)0x0) - 1) == this->pev);
      bVar3 = false;
      if ((local_14 == (edict_t *)0x0) ||
         (iVar5 = (*g_engfuncs.pfnEntOffsetOfPEntity)(local_14), iVar5 == 0)) {
        bVar3 = true;
      }
      pgVar4 = gpGlobals;
      if (bVar3) break;
      iVar5 = strcmp(gpGlobals->pStringBase +
                     *(int *)((local_14 == (edict_t *)0x0) - 1 & (uint)&local_14->v),"func_door");
      if (((iVar5 == 0) ||
          (iVar5 = strcmp(pgVar4->pStringBase +
                          *(int *)((local_14 == (edict_t *)0x0) - 1 & (uint)&local_14->v),
                          "func_door_rotating"), iVar5 == 0)) &&
         (this_00 = GetClassPtr<CBaseDoor>((uint)&local_14->v & (local_14 == (edict_t *)0x0) - 1),
         0.0 <= *(float *)&this_00->field_0x8c)) {
        peVar1 = this_00->pev;
        peVar2 = this->pev;
        bVar3 = false;
        if (((peVar1->velocity[0] == peVar2->velocity[0]) &&
            (peVar1->velocity[1] == peVar2->velocity[1])) &&
           (peVar1->velocity[2] == peVar2->velocity[2])) {
          bVar3 = true;
        }
        if (bVar3) {
          peVar1 = this_00->pev;
          peVar2 = this->pev;
          bVar3 = false;
          if (((peVar1->avelocity[0] == peVar2->velocity[0]) &&
              (peVar1->avelocity[1] == peVar2->velocity[1])) &&
             (peVar1->avelocity[2] == peVar2->velocity[2])) {
            bVar3 = true;
          }
          if (bVar3) {
            iVar5 = strcmp(gpGlobals->pStringBase +
                           *(int *)((uint)&local_14->v & (local_14 == (edict_t *)0x0) - 1),
                           "func_door");
            if (iVar5 == 0) {
              pvVar6 = this->pev->origin;
              pvVar7 = this_00->pev->origin;
              for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
                *pvVar7 = *pvVar6;
                pvVar6 = pvVar6 + 1;
                pvVar7 = pvVar7 + 1;
              }
              pvVar6 = this_00->pev->velocity;
            }
            else {
              pvVar6 = this->pev->angles;
              pvVar7 = this_00->pev->angles;
              for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
                *pvVar7 = *pvVar6;
                pvVar6 = pvVar6 + 1;
                pvVar7 = pvVar7 + 1;
              }
              pvVar6 = this_00->pev->avelocity;
            }
            pvVar7 = (vec_t *)&g_vecZero;
            for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
              *pvVar6 = *pvVar7;
              pvVar7 = pvVar7 + 1;
              pvVar6 = pvVar6 + 1;
            }
          }
        }
        if (*(int *)&this_00->field_0x80 == 3) {
          DoorGoUp(this_00);
        }
        else {
          DoorGoDown(this_00);
        }
      }
    }
  }
  return;
}

/* 000b8684  CBaseDoor::CBaseDoor  (87 bytes)
 * undefined CBaseDoor(void)
 */
/* CBaseDoor::CBaseDoor(void) */

void __thiscall CBaseDoor::CBaseDoor(CBaseDoor *this)

{
  this->vtable = (void **)CBaseEntity_virtual_table;
  this->vtable = (void **)CBaseDelay_virtual_table;
  this->vtable = (void **)CBaseAnimating_virtual_table;
  this->vtable = (void **)CBaseToggle_virtual_table;
  this->vtable = (void **)CBaseDoor_virtual_table;
  EHANDLE::operator=((EHANDLE *)&this->field_0x104,(int *)0x0);
  return;
}

/* 000b86dc  CBaseDoor::ObjectCaps  (25 bytes)
 * int ObjectCaps(void)
 */
/* CBaseDoor::ObjectCaps(void) */

int __thiscall CBaseDoor::ObjectCaps(CBaseDoor *this)

{
  return (uint)((this->pev->spawnflags & 0x100) != 0) << 3;
}

