/* ts_i386.so - CMomentaryDoor (7 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000b7d98  CMomentaryDoor::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CMomentaryDoor::Save(CSave &) */

undefined4 __thiscall CMomentaryDoor::Save(CMomentaryDoor *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseToggle::Save((CBaseToggle *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CMomentaryDoor",(int)this,(int *)m_SaveData,1);
  }
  return uVar2;
}

/* 000b7de8  CMomentaryDoor::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CMomentaryDoor::Restore(CRestore &) */

undefined4 __thiscall CMomentaryDoor::Restore(CMomentaryDoor *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseToggle::Restore((CBaseToggle *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CMomentaryDoor",(int)this,(int)m_SaveData,1);
  }
  return uVar2;
}

/* 000b7e38  CMomentaryDoor::Spawn  (466 bytes)
 * undefined Spawn(void)
 */
/* CMomentaryDoor::Spawn(void) */

void __thiscall CMomentaryDoor::Spawn(CMomentaryDoor *this)

{
  entvars_t *peVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  undefined4 *puVar5;
  vec_t *pvVar6;
  float *pfVar7;
  undefined4 *puVar8;
  vec_t *pvVar9;
  float local_2c [7];
  
  SetMovedir((int)this->pev);
  this->pev->solid = 4;
  this->pev->movetype = 7;
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  if (this->pev->speed == 0.0) {
    this->pev->speed = 100.0;
  }
  if (this->pev->dmg == 0.0) {
    this->pev->dmg = 2.0;
  }
  pvVar6 = this->pev->origin;
  pvVar9 = (vec_t *)&this->field_0x9c;
  for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pvVar9 = *pvVar6;
    pvVar6 = pvVar6 + 1;
    pvVar9 = pvVar9 + 1;
  }
  peVar1 = this->pev;
  fVar2 = (ABS((peVar1->size[2] - 2.0) * peVar1->movedir[2]) +
          ABS((peVar1->size[1] - 2.0) * peVar1->movedir[1]) +
          ABS((peVar1->size[0] - 2.0) * peVar1->movedir[0])) - *(float *)&this->field_0x90;
  local_2c[0] = *(float *)&this->field_0x9c + fVar2 * peVar1->movedir[0];
  local_2c[1] = *(float *)&this->field_0xa0 + fVar2 * peVar1->movedir[1];
  local_2c[2] = *(float *)&this->field_0xa4 + fVar2 * peVar1->movedir[2];
  pfVar4 = local_2c;
  pfVar7 = (float *)&this->field_0xa8;
  for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar7 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar7 = pfVar7 + 1;
  }
  if ((this->pev->spawnflags & 1) != 0) {
    UTIL_SetOrigin((int)this->pev,&this->field_0xa8);
    puVar5 = (undefined4 *)&this->field_0x9c;
    puVar8 = (undefined4 *)&this->field_0xa8;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    pvVar6 = this->pev->origin;
    pvVar9 = (vec_t *)&this->field_0x9c;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pvVar9 = *pvVar6;
      pvVar6 = pvVar6 + 1;
      pvVar9 = pvVar9 + 1;
    }
  }
  *(undefined4 *)&this->field_0x14 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  (*this->vtable[10])(this);
  return;
}

/* 000b800c  CMomentaryDoor::Precache  (346 bytes)
 * undefined Precache(void)
 */
/* CMomentaryDoor::Precache(void) */

void __thiscall CMomentaryDoor::Precache(CMomentaryDoor *this)

{
  int iVar1;
  
  switch(this->field_0x104) {
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
  }
  this->pev->noise1 = iVar1;
  return;
}

/* 000b81a0  CMomentaryDoor::KeyValue  (188 bytes)
 * undefined KeyValue(int param_1)
 */
/* CMomentaryDoor::KeyValue(KeyValueData_s *) */

void __thiscall CMomentaryDoor::KeyValue(CMomentaryDoor *this,int param_1)

{
  int iVar1;
  longdouble lVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"movesnd");
  if (iVar1 == 0) {
    lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
    this->field_0x104 = (char)(short)ROUND(lVar2);
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"stopsnd");
    if ((iVar1 != 0) && (iVar1 = strcmp(*(char **)(param_1 + 4),"healthvalue"), iVar1 != 0)) {
      CBaseToggle::KeyValue((CBaseToggle *)this,param_1);
      return;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}

/* 000b8260  CMomentaryDoor::Use  (434 bytes)
 * undefined Use(undefined4 param_1, undefined4 param_2, int param_3, float param_4)
 */
/* CMomentaryDoor::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void __thiscall
CMomentaryDoor::Use(CMomentaryDoor *this,undefined4 param_1,undefined4 param_2,int param_3,
                   float param_4)

{
  float fVar1;
  entvars_t *peVar2;
  float fVar3;
  float fVar4;
  float local_2c;
  float local_28;
  float local_24;
  float local_1c;
  float local_18;
  float local_14;
  
  if (param_3 == 2) {
    if (1.0 < param_4) {
      param_4 = 1.0;
    }
    local_2c = param_4 * (*(float *)&this->field_0xa8 - *(float *)&this->field_0x9c);
    local_28 = param_4 * (*(float *)&this->field_0xac - *(float *)&this->field_0xa0);
    local_24 = param_4 * (*(float *)&this->field_0xb0 - *(float *)&this->field_0xa4);
    local_1c = *(float *)&this->field_0x9c + local_2c;
    local_18 = *(float *)&this->field_0xa0 + local_28;
    local_14 = *(float *)&this->field_0xa4 + local_24;
    peVar2 = this->pev;
    fVar3 = local_1c - peVar2->origin[0];
    fVar4 = local_18 - peVar2->origin[1];
    fVar1 = local_14 - peVar2->origin[2];
    fVar3 = SQRT(fVar1 * fVar1 + fVar4 * fVar4 + fVar3 * fVar3) * 10.0;
    if (fVar3 != 0.0) {
      fVar1 = this->pev->nextthink;
      if ((fVar1 < this->pev->ltime) || (fVar1 == 0.0)) {
        EMIT_SOUND_DYN((int)this->pev->pContainingEntity,6,
                       gpGlobals->pStringBase + this->pev->noise1,0x3f800000,0x3f4ccccd,0,100,0.5);
      }
      local_2c = local_1c;
      local_28 = local_18;
      local_24 = local_14;
      CBaseToggle::LinearMove((CBaseToggle *)this,&local_2c,fVar3);
    }
  }
  return;
}

/* 000b87f4  CMomentaryDoor::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CMomentaryDoor::ObjectCaps(void) */

undefined4 CMomentaryDoor::ObjectCaps(void)

{
  return 0;
}

