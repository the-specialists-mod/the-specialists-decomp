/* ts_i386.so - CTSSlowMotion (11 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 00070cd4  CTSSlowMotion::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CTSSlowMotion::Save(CSave &) */

undefined4 __thiscall CTSSlowMotion::Save(CTSSlowMotion *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CTSSlowMotion",(int)this,(int *)m_SaveData,2);
  }
  return uVar2;
}

/* 00070d24  CTSSlowMotion::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CTSSlowMotion::Restore(CRestore &) */

undefined4 __thiscall CTSSlowMotion::Restore(CTSSlowMotion *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CTSSlowMotion",(int)this,(int)m_SaveData,2);
  }
  return uVar2;
}

/* 00070d74  CTSSlowMotion::KeyValue  (156 bytes)
 * undefined KeyValue(int param_1)
 */
/* CTSSlowMotion::KeyValue(KeyValueData_s *) */

void __thiscall CTSSlowMotion::KeyValue(CTSSlowMotion *this,int param_1)

{
  int iVar1;
  longdouble lVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"duration");
  if (iVar1 == 0) {
    lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
    *(float *)&this->field_0xf8 = (float)lVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"slowamt");
    if (iVar1 == 0) {
      lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
      *(float *)&this->field_0xfc = (float)lVar2;
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  return;
}

/* 00070e14  CTSSlowMotion::Spawn  (454 bytes)
 * undefined Spawn(void)
 */
/* CTSSlowMotion::Spawn(void) */

void __thiscall CTSSlowMotion::Spawn(CTSSlowMotion *this)

{
  int *piVar1;
  entvars_t *peVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 *puVar7;
  
  this->pev->classname = (int)"ts_slowmotion" - (int)gpGlobals->pStringBase;
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  UTIL_SetSize((int)this->pev,this->pev->mins,this->pev->maxs);
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  piVar1 = &this->pev->effects;
  *piVar1 = *piVar1 | 0x80;
  this->pev->solid = 1;
  this->pev->movetype = 5;
  *(undefined4 *)&this->field_0x14 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = WaitThink;
  *(undefined4 *)&this->field_0x68 = 0;
  this->field_0x64 = 0;
  this->pev->nextthink = gpGlobals->time + 0.5;
  *(float *)&this->field_0x6c = gpGlobals->time + 0.5;
  puVar7 = (undefined4 *)&this->field_0x70;
  for (iVar6 = 0x21; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  peVar2 = this->pev;
  fVar3 = peVar2->absmax[0] - peVar2->absmin[0];
  fVar5 = peVar2->absmax[1] - peVar2->absmin[1];
  fVar4 = peVar2->absmax[2] - peVar2->absmin[2];
  *(int *)&this->field_0xf4 = (int)ROUND(SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3) * 0.5);
  peVar2 = this->pev;
  *(uint *)&this->field_0x100 = (uint)((peVar2->spawnflags & 2) != 0);
  this->field_0x104 = (peVar2->spawnflags & 4) != 0;
  if ((peVar2->spawnflags & 1) != 0) {
    ActivateSlow(this);
  }
  return;
}

/* 00070fdc  CTSSlowMotion::WaitTouch  (153 bytes)
 * undefined WaitTouch(int * param_1)
 */
/* CTSSlowMotion::WaitTouch(CBaseEntity *) */

void __thiscall CTSSlowMotion::WaitTouch(CTSSlowMotion *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((*(float *)&this->field_0x68 != 0.0) || (this->field_0x64 != '\0')) {
    iVar1 = (**(code **)(param_1[0x18] + 200))(param_1);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(param_1[0x18] + 0x18))(param_1);
      if (iVar1 == 0) {
        (**(code **)(param_1[0x18] + 0x14))(param_1,*(undefined4 *)&this->field_0xfc,0);
        *(bool *)((int)param_1 + 0x175) = this->field_0x104 != '\0';
        uVar2 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*param_1 + 0x208));
        if (uVar2 < 0x21) {
          *(int **)(&this->field_0x70 + uVar2 * 4) = param_1;
        }
      }
    }
  }
  return;
}

/* 00071078  CTSSlowMotion::DeactivateSlow  (271 bytes)
 * undefined DeactivateSlow(void)
 */
/* CTSSlowMotion::DeactivateSlow(void) */

void __thiscall CTSSlowMotion::DeactivateSlow(CTSSlowMotion *this)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *local_18;
  int local_14;
  
  *(undefined4 *)&this->field_0x68 = 0;
  if (*(int *)&this->field_0x100 == 0) {
    local_14 = 0;
    piVar2 = (int *)&this->field_0x70;
    puVar3 = piVar2;
    piVar4 = piVar2;
    local_18 = piVar2;
    do {
      if (*piVar4 != 0) {
        (**(code **)(*(int *)(*piVar2 + 0x60) + 0x14))(*puVar3,0x3f800000,0);
        *local_18 = 0;
      }
      if (piVar4[1] != 0) {
        (**(code **)(*(int *)(piVar2[1] + 0x60) + 0x14))(puVar3[1],0x3f800000,0);
        local_18[1] = 0;
      }
      if (piVar4[2] != 0) {
        (**(code **)(*(int *)(piVar2[2] + 0x60) + 0x14))(puVar3[2],0x3f800000,0);
        local_18[2] = 0;
      }
      local_18 = local_18 + 3;
      puVar3 = puVar3 + 3;
      piVar2 = piVar2 + 3;
      piVar4 = piVar4 + 3;
      local_14 = local_14 + 3;
    } while (local_14 < 0x21);
  }
  else {
    CTSGameRules::GlobalSlowMotion2((CTSGameRules *)&TSGameRules,0.0,'\0');
  }
  puVar3 = (undefined4 *)&this->field_0x70;
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  return;
}

/* 0007118c  CTSSlowMotion::CheckPlayersDistance  (278 bytes)
 * undefined CheckPlayersDistance(void)
 */
/* CTSSlowMotion::CheckPlayersDistance(void) */

void __thiscall CTSSlowMotion::CheckPlayersDistance(CTSSlowMotion *this)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  void **ppvVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int aiStack_64 [8];
  float local_44 [13];
  
  local_44[0] = 0.0;
  aiStack_64[7] = 0x70;
  piVar7 = aiStack_64 + 6;
  do {
    piVar8 = piVar7;
    if (*(int *)((int)&this->pev + piVar7[1]) != 0) {
      iVar6 = *(int *)(*(int *)((int)&this->pev + piVar7[1]) + 0x60);
      piVar7[-4] = *(int *)((int)&this->pev + piVar7[1]);
      pcVar3 = *(code **)(iVar6 + 0x18);
      piVar7[-5] = 0x711d5;
      iVar6 = (*pcVar3)();
      if (iVar6 != 0) {
        iVar6 = **(int **)((int)&this->pev + piVar7[1]);
        ppvVar4 = this->vtable;
        piVar7[-3] = (int)this;
        piVar7[-4] = (int)(piVar7 + 4);
        pcVar3 = ppvVar4[0x3e];
        piVar7[-5] = 0x711ff;
        (*pcVar3)();
        piVar8 = piVar7 + -1;
        fVar1 = *(float *)(iVar6 + 8);
        fVar2 = *(float *)(iVar6 + 0xc);
        fVar5 = *(float *)(iVar6 + 0x10) - (float)piVar7[5];
        piVar7[7] = (int)(fVar1 - (float)piVar7[3]);
        piVar7[8] = (int)(fVar2 - (float)piVar7[4]);
        piVar7[9] = (int)fVar5;
        piVar7[2] = (int)SQRT(fVar5 * fVar5 +
                              (fVar2 - (float)piVar7[4]) * (float)piVar7[8] +
                              (fVar1 - (float)piVar7[3]) * (float)piVar7[7]);
        if ((float)*(int *)&this->field_0xf4 < (float)piVar7[2]) {
          iVar6 = *(int *)(*(int *)((int)&this->pev + *piVar7) + 0x60);
          piVar7[-3] = 0;
          piVar7[-4] = 0x3f800000;
          piVar7[-5] = *(undefined4 *)((int)&this->pev + *piVar7);
          pcVar3 = *(code **)(iVar6 + 0x14);
          piVar7[-6] = 0x71277;
          (*pcVar3)();
          *(undefined4 *)((int)&this->pev + *piVar7) = 0;
          piVar8 = piVar7 + -1;
        }
      }
    }
    *(int *)((int)piVar8 + 4) = *(int *)((int)piVar8 + 4) + 4;
    *(int *)((int)piVar8 + 8) = *(int *)((int)piVar8 + 8) + 1;
    piVar7 = piVar8;
  } while (*(int *)((int)piVar8 + 8) < 0x21);
  return;
}

/* 000712a4  CTSSlowMotion::WaitThink  (218 bytes)
 * undefined WaitThink(void)
 */
/* CTSSlowMotion::WaitThink(void) */

void __thiscall CTSSlowMotion::WaitThink(CTSSlowMotion *this)

{
  this->pev->nextthink = gpGlobals->time + 0.5;
  if (this->field_0x64 != '\0') {
    if (*(int *)&this->field_0x100 == 0) {
      CheckPlayersDistance(this);
    }
    else {
      CTSGameRules::GlobalSlowMotion2
                ((CTSGameRules *)&TSGameRules,*(float *)&this->field_0xfc,this->field_0x104);
    }
  }
  if (*(float *)&this->field_0x68 != 0.0) {
    if (gpGlobals->time <= *(float *)&this->field_0x68) {
      if (*(int *)&this->field_0x100 == 0) {
        CheckPlayersDistance(this);
      }
      else {
        CTSGameRules::GlobalSlowMotion2
                  ((CTSGameRules *)&TSGameRules,*(float *)&this->field_0xfc,this->field_0x104);
      }
    }
    else {
      *(undefined4 *)&this->field_0x14 = 0;
      *(undefined4 *)&this->field_0x18 = 0;
      DeactivateSlow(this);
    }
  }
  return;
}

/* 00071384  CTSSlowMotion::ActivateSlow  (126 bytes)
 * undefined ActivateSlow(void)
 */
/* CTSSlowMotion::ActivateSlow(void) */

void __thiscall CTSSlowMotion::ActivateSlow(CTSSlowMotion *this)

{
  if (0.0 < *(float *)&this->field_0xf8) {
    *(float *)&this->field_0x68 = gpGlobals->time + *(float *)&this->field_0xf8;
  }
  else {
    *(undefined4 *)&this->field_0x68 = 0;
    this->field_0x64 = this->field_0x64 ^ 1;
    if (this->field_0x64 == '\0') {
      DeactivateSlow(this);
    }
  }
  if (*(int *)&this->field_0x100 == 0) {
    *(undefined4 *)&this->field_0x14 = 0xffff0000;
    *(code **)&this->field_0x18 = WaitTouch;
  }
  return;
}

/* 00071404  CTSSlowMotion::Use  (176 bytes)
 * undefined Use(CTSSlowMotion * param_1)
 */
/* CTSSlowMotion::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CTSSlowMotion::Use(CTSSlowMotion *param_1)

{
  ActivateSlow(param_1);
  if (*(int *)&param_1->field_0x100 == 0) {
    *(undefined4 *)&param_1->field_0x14 = 0xffff0000;
    *(code **)&param_1->field_0x18 = WaitTouch;
  }
  if (param_1->pev->message != 0) {
    TSHudMessageAll(0,0xff,0,8,0x1e,gpGlobals->pStringBase + param_1->pev->message);
  }
  if (param_1->pev->target != 0) {
    FireTargets((int)(gpGlobals->pStringBase + param_1->pev->target),param_1,param_1,3,0);
  }
  return;
}

/* 00073b70  CTSSlowMotion::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CTSSlowMotion::ObjectCaps(void) */

undefined4 CTSSlowMotion::ObjectCaps(void)

{
  return 0;
}

