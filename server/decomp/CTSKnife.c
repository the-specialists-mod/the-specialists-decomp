/* ts_i386.so - CTSKnife (9 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 0007d9e4  CTSKnife::CreateKnife  (283 bytes)
 * CTSKnife * CreateKnife(int * param_1, undefined4 * param_2, undefined4 * param_3, undefined4 param_4)
 */
/* CTSKnife::CreateKnife(CBasePlayer *, Vector, Vector, int) */

CTSKnife *
CTSKnife::CreateKnife(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  void **ppvVar1;
  CTSKnife *pCVar2;
  CTSKnife *pCVar3;
  int iVar4;
  vec_t *pvVar5;
  vec_t *pvVar6;
  undefined4 *puVar7;
  longdouble lVar8;
  
  pCVar2 = GetClassPtr<CTSKnife>(0);
  pCVar3 = (CTSKnife *)0x0;
  if (pCVar2 != (CTSKnife *)0x0) {
    *(undefined4 *)&pCVar2->field_0xa0 = param_4;
    (*pCVar2->vtable[9])(pCVar2);
    pCVar2->pev->classname = (int)&DAT_001077e5 - (int)gpGlobals->pStringBase;
    *(undefined4 *)&pCVar2->field_0x8c = *(undefined4 *)(*param_1 + 0x208);
    pvVar5 = (vec_t *)param_2;
    pvVar6 = pCVar2->pev->origin;
    for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pvVar6 = *pvVar5;
      pvVar5 = pvVar5 + 1;
      pvVar6 = pvVar6 + 1;
    }
    pvVar6 = pCVar2->pev->origin;
    UTIL_SetOrigin((int)pCVar2->pev,pvVar6);
    pvVar5 = pCVar2->pev->velocity;
    for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pvVar5 = (vec_t)*param_3;
      param_3 = param_3 + 1;
      pvVar5 = pvVar5 + 1;
    }
    puVar7 = (undefined4 *)&pCVar2->field_0x94;
    for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *param_2;
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 1;
    }
    pCVar2->field_0x92 = 0;
    pCVar3 = pCVar2;
    if ((float)param_1[0x60] == 0.0) {
      ppvVar1 = pCVar2->vtable;
      lVar8 = (longdouble)(**(code **)(param_1[0x18] + 0x10))(param_1,pvVar6,0);
      (*ppvVar1[5])(pCVar2,(float)lVar8);
    }
    else {
      (*pCVar2->vtable[5])(pCVar2,param_1[0x60],0);
    }
  }
  return pCVar3;
}

/* 0007db04  CTSKnife::GetDescription  (77 bytes)
 * undefined1 * GetDescription(void)
 */
/* CTSKnife::GetDescription(void) */

undefined1 * __thiscall CTSKnife::GetDescription(CTSKnife *this)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = *(int *)&this->field_0xa0;
  if (iVar1 == 7) {
    pcVar2 = "Throwing Seal Knife";
  }
  else {
    if (iVar1 < 8) {
      if (iVar1 == 6) {
        return "Throwing Combat Knife";
      }
    }
    else if (iVar1 == 8) {
      return "Throwing Katana";
    }
    pcVar2 = "";
  }
  return pcVar2;
}

/* 0007db54  CTSKnife::Spawn  (400 bytes)
 * undefined Spawn(void)
 */
/* CTSKnife::Spawn(void) */

void __thiscall CTSKnife::Spawn(CTSKnife *this)

{
  int *piVar1;
  undefined2 extraout_var;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  CTSPhysicObject::Spawn((CTSPhysicObject *)this);
  if (*(int *)&this->field_0xa0 == 8) {
    (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,"models/w_katana.mdl");
    this->pev->gravity = 0.85;
  }
  else if (*(int *)&this->field_0xa0 == 6) {
    (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,"models/w_knife.mdl");
    this->pev->gravity = 0.75;
  }
  else {
    (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,"models/w_sealknife.mdl");
    this->pev->gravity = 0.3;
  }
  this->pev->friction = 0.8;
  this->pev->movetype = 10;
  this->pev->solid = 2;
  local_2c = 0;
  local_28 = local_2c;
  local_24 = local_2c;
  local_1c = local_2c;
  local_18 = local_2c;
  local_14 = local_2c;
  UTIL_SetSize((int)this->pev,&local_2c,&local_1c);
  *(undefined4 *)&this->field_0xc = 0x460000;
  *(uint *)&this->field_0x10 = CONCAT22(extraout_var,0x60);
  *(undefined4 *)&this->field_0x14 = 0x490000;
  *(uint *)&this->field_0x18 = CONCAT22(extraout_var,0x60);
  this->pev->nextthink = gpGlobals->time;
  this->pev->fuser1 = 1.0;
  *(float *)&this->field_0x88 = gpGlobals->time + 30.0;
  this->field_0x90 = 1;
  this->field_0x91 = 0;
  this->pev->iuser4 = 0;
  piVar1 = &this->pev->iuser4;
  *piVar1 = *piVar1 | 1;
  return;
}

/* 0007dce8  CTSKnife::WaitTouch  (185 bytes)
 * undefined WaitTouch(int * param_1)
 */
/* CTSKnife::WaitTouch(CBaseEntity *) */

void CTSKnife::WaitTouch(int *param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float local_2c [7];
  
  iVar2 = *param_1;
  if ((*(byte *)(iVar2 + 0x1a5) & 2) != 0) {
    local_2c[0] = *(float *)(iVar2 + 0x20) * 0.5;
    local_2c[1] = *(float *)(iVar2 + 0x24) * 0.5;
    local_2c[2] = *(float *)(iVar2 + 0x28) * 0.5;
    pfVar3 = local_2c;
    pfVar5 = (float *)(iVar2 + 0x20);
    for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar5 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pfVar5 = pfVar5 + 1;
    }
    iVar2 = *param_1;
    if (SQRT(*(float *)(iVar2 + 0x28) * *(float *)(iVar2 + 0x28) +
             *(float *)(iVar2 + 0x24) * *(float *)(iVar2 + 0x24) +
             *(float *)(iVar2 + 0x20) * *(float *)(iVar2 + 0x20)) < 32.0) {
      *(undefined4 *)(*param_1 + 0x50) = 0;
      *(undefined4 *)(*param_1 + 0x58) = 0;
      puVar4 = &g_vecZero;
      puVar6 = (undefined4 *)(*param_1 + 0x20);
      for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
    }
  }
  return;
}

/* 0007dda4  CTSKnife::Use  (287 bytes)
 * undefined Use(int * param_1, CBasePlayer * param_2)
 */
/* CTSKnife::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CTSKnife::Use(int *param_1,CBasePlayer *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined3 extraout_var;
  uint uVar3;
  
  if (((((char)param_1[0x24] == '\0') && (iVar2 = (*param_2->vtable[0x32])(param_2), iVar2 != 0)) &&
      (iVar2 = (*param_2->vtable[0x2d])(param_2), iVar2 != 0)) && (-1 < (char)param_2->pev->effects)
     ) {
    if ((*(char *)((int)param_1 + 0x91) != '\0') &&
       (uVar1 = KungFu((int)param_2), CONCAT31(extraout_var,uVar1) == 0)) {
      return;
    }
    iVar2 = 1;
    if (gpGlobals->time < (float)param_1[0x22]) {
      if (param_1[0x28] == 8) {
        uVar3 = 0x22;
      }
      else if (param_1[0x28] == 6) {
        uVar3 = 0x19;
      }
      else {
        uVar3 = 0x23;
      }
      iVar2 = CBasePlayer::PickUpWeapon(param_2,uVar3,(undefined4 *)0x0,0,'\0','\0');
    }
    if (iVar2 != 0) {
      param_1[0x22] = (int)gpGlobals->time;
      RemoveEntityFromSlowedArray((int)param_1);
      UTIL_Remove(param_1);
    }
  }
  return;
}

/* 0007decc  CTSKnife::BounceTouch  (2896 bytes)
 * undefined BounceTouch(int * param_1)
 */
/* CTSKnife::BounceTouch(CBaseEntity *) */

void __thiscall CTSKnife::BounceTouch(CTSKnife *this,int *param_1)

{
  edict_t *peVar1;
  undefined1 *puVar2;
  entvars_t *peVar3;
  char *pcVar4;
  entvars_t *peVar5;
  vec_t *pvVar6;
  float *pfVar7;
  vec_t *pvVar8;
  float *pfVar9;
  undefined2 in_FPUControlWord;
  longdouble lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float local_bc [6];
  int local_a4;
  undefined2 local_a0;
  undefined2 uStack_9e;
  float local_9c [4];
  float local_8c;
  float local_88;
  float fStack_84;
  int local_7c [5];
  float local_68;
  float local_64;
  float fStack_60;
  float local_4c [4];
  float local_3c [7];
  float local_20;
  
  this->pev->nextthink = gpGlobals->time + 0.1;
  if (*(int *)(*param_1 + 0x208) == *(int *)&this->field_0x8c) {
    return;
  }
  if (*(char *)(*param_1 + 0x118) < '\0') {
    return;
  }
  peVar5 = this->pev;
  local_20 = SQRT(peVar5->velocity[2] * peVar5->velocity[2] +
                  peVar5->velocity[1] * peVar5->velocity[1] +
                  peVar5->velocity[0] * peVar5->velocity[0]);
  if (local_20 < 700.0) {
    this->field_0x90 = 0;
  }
  peVar5 = this->pev;
  local_3c[0] = *(float *)&this->field_0x94 - peVar5->origin[0];
  local_3c[1] = *(float *)&this->field_0x98 - peVar5->origin[1];
  local_3c[2] = *(float *)&this->field_0x9c - peVar5->origin[2];
  if (*(int *)&this->field_0xa0 == 8) {
    fVar15 = 150.0;
  }
  else if (*(int *)&this->field_0xa0 == 6) {
    fVar15 = 100.0;
  }
  else {
    fVar15 = 50.0;
  }
  if ((g_flWeaponCheat != 0.0) &&
     (lVar10 = (longdouble)(*g_engfuncs.pfnCVarGetFloat)("dmgreport"), (longdouble)1.0 < lVar10)) {
    iVar14 = 0;
    iVar13 = 0;
    iVar12 = 0;
    iVar11 = 0;
    puVar2 = UTIL_VarArgs("(debug)%f\n",(double)fVar15);
    UTIL_ClientPrintAll(3,puVar2,iVar11,iVar12,iVar13,iVar14);
  }
  this->field_0x91 = 0;
  if ((*(float *)(*param_1 + 0x16c) != 0.0) &&
     (iVar11 = (**(code **)(param_1[0x18] + 200))(param_1), iVar11 != 0)) {
    if (*(int *)&this->field_0x8c == 0) {
      peVar5 = (entvars_t *)0x0;
    }
    else {
      peVar5 = (entvars_t *)
               (*(int *)&this->field_0x8c + 0x80U & (*(int *)&this->field_0x8c == 0) - 1);
    }
    UTIL_GetGlobalTrace(local_7c);
    ClearMultiDamage();
    peVar3 = this->pev;
    local_20 = SQRT(peVar3->velocity[2] * peVar3->velocity[2] +
                    peVar3->velocity[1] * peVar3->velocity[1] +
                    peVar3->velocity[0] * peVar3->velocity[0]);
    if (local_20 == 0.0) {
      local_3c[2] = 1.0;
      local_3c[0] = 0.0;
      local_3c[1] = 0.0;
    }
    else {
      local_3c[2] = 1.0 / local_20;
      local_3c[0] = local_3c[2] * peVar3->velocity[0];
      local_3c[1] = local_3c[2] * peVar3->velocity[1];
      local_3c[2] = local_3c[2] * peVar3->velocity[2];
    }
    peVar3 = peVar5;
    if (peVar5 == (entvars_t *)0x0) {
      peVar3 = this->pev;
    }
    (**(code **)(param_1[0x18] + 0x54))(param_1,peVar3,fVar15,local_3c,local_7c,0x8001000);
    if (peVar5 == (entvars_t *)0x0) {
      peVar5 = this->pev;
    }
    ApplyMultiDamage(this->pev,peVar5);
    peVar5 = this->pev;
    local_8c = -peVar5->velocity[0];
    local_88 = -peVar5->velocity[1];
    fStack_84 = -peVar5->velocity[2];
    local_3c[0] = -peVar5->velocity[0] * 0.25;
    local_3c[1] = -peVar5->velocity[1] * 0.25;
    local_3c[2] = -peVar5->velocity[2] * 0.25;
    pfVar7 = local_3c;
    pvVar6 = peVar5->velocity;
    for (iVar11 = 3; iVar11 != 0; iVar11 = iVar11 + -1) {
      *pvVar6 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pvVar6 = pvVar6 + 1;
    }
    peVar5 = this->pev;
    pcVar4 = "weapons/knife/knife_hitbody.wav";
    goto LAB_0007e985;
  }
  if (*(int *)&this->field_0xa0 == 8) {
    this->field_0x91 = 1;
  }
  iVar11 = strcmp(gpGlobals->pStringBase + *(int *)*param_1,"worldspawn");
  if (iVar11 == 0) {
    UTIL_GetGlobalTrace((int *)&local_8c);
    peVar5 = this->pev;
    if (100.0 <= SQRT(peVar5->velocity[2] * peVar5->velocity[2] +
                      peVar5->velocity[1] * peVar5->velocity[1] +
                      peVar5->velocity[0] * peVar5->velocity[0])) {
      local_9c[0] = 0.0;
      local_9c[1] = 0.0;
      local_9c[2] = 1.0;
      peVar5 = this->pev;
      local_20 = SQRT(peVar5->velocity[2] * peVar5->velocity[2] +
                      peVar5->velocity[1] * peVar5->velocity[1] +
                      peVar5->velocity[0] * peVar5->velocity[0]);
      if (local_20 == 0.0) {
        local_4c[0] = 0.0;
        local_4c[2] = 1.0;
        local_4c[1] = local_4c[0];
      }
      else {
        local_4c[2] = 1.0 / local_20;
        local_4c[0] = local_4c[2] * peVar5->velocity[0];
        local_4c[1] = local_4c[2] * peVar5->velocity[1];
        local_4c[2] = local_4c[2] * peVar5->velocity[2];
      }
      if ((-(fStack_60 * local_4c[2] + local_64 * local_4c[1] + local_68 * local_4c[0]) < 0.4) &&
         (fStack_60 <= 0.98)) {
        iVar11 = UTIL_PointContents(this->pev->origin);
        if (iVar11 != -3) {
          UTIL_Sparks(this->pev->origin);
        }
        peVar1 = this->pev->pContainingEntity;
        fVar15 = 0.5;
        lVar10 = (longdouble)(*g_engfuncs.pfnRandomFloat)(0.0,10.0);
        _local_a0 = CONCAT22(uStack_9e,in_FPUControlWord);
        local_a4 = (int)ROUND(lVar10 + (longdouble)100.0);
        EMIT_SOUND_DYN((int)peVar1,4,"weapons/knife/knife_hit.wav",0x3f800000,0x3f4ccccd,0,local_a4,
                       fVar15);
        peVar5 = this->pev;
        local_4c[0] = peVar5->velocity[0] / 2.0;
        local_4c[1] = peVar5->velocity[1] / 2.0;
        local_4c[2] = peVar5->velocity[2] / 2.0;
        pfVar7 = local_4c;
        pvVar6 = peVar5->velocity;
        for (iVar11 = 3; iVar11 != 0; iVar11 = iVar11 + -1) {
          *pvVar6 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          pvVar6 = pvVar6 + 1;
        }
        return;
      }
      peVar5 = this->pev;
      local_20 = SQRT(peVar5->velocity[2] * peVar5->velocity[2] +
                      peVar5->velocity[1] * peVar5->velocity[1] +
                      peVar5->velocity[0] * peVar5->velocity[0]);
      if (local_20 == 0.0) {
        local_4c[2] = 1.0;
        local_4c[0] = 0.0;
        local_4c[1] = 0.0;
      }
      else {
        local_4c[2] = 1.0 / local_20;
        local_4c[0] = local_4c[2] * peVar5->velocity[0];
        local_4c[1] = local_4c[2] * peVar5->velocity[1];
        local_4c[2] = local_4c[2] * peVar5->velocity[2];
      }
      peVar5 = this->pev;
      local_bc[0] = local_4c[0] * 6.0;
      local_bc[1] = local_4c[1] * 6.0;
      local_bc[2] = local_4c[2] * 6.0;
      local_3c[0] = peVar5->origin[0] - local_bc[0];
      local_3c[1] = peVar5->origin[1] - local_bc[1];
      local_3c[2] = peVar5->origin[2] - local_bc[2];
      UTIL_SetOrigin((int)this->pev,local_3c);
      UTIL_VecToAngles(local_bc,local_4c);
      peVar5 = this->pev;
      pfVar7 = local_bc;
      pfVar9 = local_3c;
      for (iVar11 = 3; iVar11 != 0; iVar11 = iVar11 + -1) {
        *pfVar9 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        pfVar9 = pfVar9 + 1;
      }
      pfVar7 = local_3c;
      pvVar6 = peVar5->angles;
      for (iVar11 = 3; iVar11 != 0; iVar11 = iVar11 + -1) {
        *pvVar6 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        pvVar6 = pvVar6 + 1;
      }
      this->pev->angles[2] = 90.0;
      this->pev->solid = 0;
      this->pev->movetype = 5;
      local_bc[0] = 0.0;
      local_bc[1] = 0.0;
      local_bc[2] = 0.0;
      pfVar7 = local_bc;
      pvVar6 = this->pev->velocity;
      for (iVar11 = 3; iVar11 != 0; iVar11 = iVar11 + -1) {
        *pvVar6 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        pvVar6 = pvVar6 + 1;
      }
      pfVar7 = (float *)&g_vecZero;
      pvVar6 = this->pev->avelocity;
      goto LAB_0007e941;
    }
    peVar5 = this->pev;
    local_20 = SQRT(peVar5->velocity[2] * peVar5->velocity[2] +
                    peVar5->velocity[1] * peVar5->velocity[1] +
                    peVar5->velocity[0] * peVar5->velocity[0]);
    if (local_20 == 0.0) {
      local_4c[2] = 1.0;
      local_4c[0] = 0.0;
      local_4c[1] = 0.0;
    }
    else {
      local_4c[2] = 1.0 / local_20;
      local_4c[0] = local_4c[2] * peVar5->velocity[0];
      local_4c[1] = local_4c[2] * peVar5->velocity[1];
      local_4c[2] = local_4c[2] * peVar5->velocity[2];
    }
    peVar5 = this->pev;
    local_9c[0] = local_4c[0] * 6.0;
    local_9c[1] = local_4c[1] * 6.0;
    local_9c[2] = local_4c[2] * 6.0;
    local_3c[0] = peVar5->origin[0] - local_9c[0];
    local_3c[1] = peVar5->origin[1] - local_9c[1];
    local_3c[2] = peVar5->origin[2] - local_9c[2];
    UTIL_SetOrigin((int)this->pev,local_3c);
    UTIL_VecToAngles(local_9c,local_4c);
    peVar5 = this->pev;
    pfVar7 = local_9c;
    pfVar9 = local_3c;
    for (iVar11 = 3; iVar11 != 0; iVar11 = iVar11 + -1) {
      *pfVar9 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar9 = pfVar9 + 1;
    }
    pfVar7 = local_3c;
    pvVar6 = peVar5->angles;
    for (iVar11 = 3; iVar11 != 0; iVar11 = iVar11 + -1) {
      *pvVar6 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pvVar6 = pvVar6 + 1;
    }
    this->pev->angles[2] = 90.0;
    this->pev->solid = 0;
    this->pev->movetype = 5;
    local_9c[0] = 0.0;
    local_9c[1] = 0.0;
    local_9c[2] = 0.0;
    pfVar7 = local_9c;
    pvVar6 = this->pev->velocity;
    for (iVar11 = 3; iVar11 != 0; iVar11 = iVar11 + -1) {
      *pvVar6 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pvVar6 = pvVar6 + 1;
    }
    pvVar6 = (vec_t *)&g_vecZero;
    pvVar8 = this->pev->avelocity;
    for (iVar11 = 3; iVar11 != 0; iVar11 = iVar11 + -1) {
      *pvVar8 = *pvVar6;
      pvVar6 = pvVar6 + 1;
      pvVar8 = pvVar8 + 1;
    }
    peVar1 = this->pev->pContainingEntity;
    fVar15 = 0.5;
    lVar10 = (longdouble)(*g_engfuncs.pfnRandomFloat)(-10.0,0.0);
    _local_a0 = CONCAT22(uStack_9e,in_FPUControlWord);
    local_a4 = (int)ROUND(lVar10 + (longdouble)100.0);
    EMIT_SOUND_DYN((int)peVar1,4,"weapons/knife/knife_hit.wav",0x3f800000,0x3f4ccccd,0,local_a4,
                   fVar15);
  }
  else {
    iVar11 = strcmp(gpGlobals->pStringBase + *(int *)*param_1,"knife");
    if (iVar11 == 0) {
      return;
    }
    peVar5 = this->pev;
    pvVar6 = peVar5->velocity;
    local_9c[0] = -peVar5->velocity[0];
    local_9c[1] = -peVar5->velocity[1];
    local_9c[2] = -peVar5->velocity[2];
    pfVar7 = local_bc;
    local_bc[0] = -peVar5->velocity[0] * 0.25;
    local_bc[1] = -peVar5->velocity[1] * 0.25;
    local_bc[2] = -peVar5->velocity[2] * 0.25;
LAB_0007e941:
    for (iVar11 = 3; iVar11 != 0; iVar11 = iVar11 + -1) {
      *pvVar6 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pvVar6 = pvVar6 + 1;
    }
  }
  iVar11 = UTIL_PointContents(this->pev->origin);
  if (iVar11 != -3) {
    UTIL_Sparks(this->pev->origin);
  }
  peVar5 = this->pev;
  pcVar4 = "weapons/knife/knife_hit.wav";
LAB_0007e985:
  EMIT_SOUND_DYN((int)peVar5->pContainingEntity,4,pcVar4,0x3f800000,0x3f4ccccd,0,100,0.5);
  *(undefined4 *)&this->field_0x14 = 0xffff0000;
  *(code **)&this->field_0x18 = WaitTouch;
  *(undefined4 *)&this->field_0xc = 0x460000;
  *(uint *)&this->field_0x10 = CONCAT22((short)((uint)this >> 0x10),0x60);
  this->field_0x90 = 0;
  this->pev->nextthink = gpGlobals->time + 0.1;
  this->pev->gravity = 0.75;
  *(float *)&this->field_0x88 = gpGlobals->time + 10.0;
  return;
}

/* 0007ea30  CTSKnife::WaitThink  (798 bytes)
 * undefined WaitThink(void)
 */
/* CTSKnife::WaitThink(void) */

void __thiscall CTSKnife::WaitThink(CTSKnife *this)

{
  entvars_t *peVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float local_8c;
  float local_88;
  float local_84;
  float local_7c;
  float local_78;
  float local_74;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_5c [16];
  float local_4c;
  edict_t *local_2c;
  float local_10;
  
  this->pev->nextthink = gpGlobals->time + 0.1;
  if ((*(float *)&this->field_0x88 == 0.0) || (gpGlobals->time <= *(float *)&this->field_0x88)) {
    peVar1 = this->pev;
    local_10 = SQRT(peVar1->velocity[2] * peVar1->velocity[2] +
                    peVar1->velocity[1] * peVar1->velocity[1] +
                    peVar1->velocity[0] * peVar1->velocity[0]);
    if (64.0 < local_10) {
      peVar1 = this->pev;
      local_10 = SQRT(peVar1->velocity[2] * peVar1->velocity[2] +
                      peVar1->velocity[1] * peVar1->velocity[1] +
                      peVar1->velocity[0] * peVar1->velocity[0]);
      if (local_10 == 0.0) {
        local_84 = 1.0;
        local_8c = 0.0;
        local_88 = 0.0;
      }
      else {
        local_84 = 1.0 / local_10;
        local_8c = local_84 * peVar1->velocity[0];
        local_88 = local_84 * peVar1->velocity[1];
        local_84 = local_84 * peVar1->velocity[2];
      }
      local_7c = local_8c * 64.0;
      local_78 = local_88 * 64.0;
      local_74 = local_84 * 64.0;
      local_6c = peVar1->origin[0] + local_7c;
      local_68 = peVar1->origin[1] + local_78;
      local_64 = peVar1->origin[2] + local_74;
      UTIL_TraceLine(this->pev->origin,&local_6c,0,peVar1->pContainingEntity,local_5c);
      if (local_4c < 1.0) {
        if (local_2c == (edict_t *)0x0) {
          local_2c = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
        }
        piVar4 = (int *)0x0;
        if (local_2c != (edict_t *)0x0) {
          piVar4 = local_2c->pvPrivateData;
        }
        iVar3 = (**(code **)(piVar4[0x18] + 200))(piVar4);
        if (iVar3 == 0) {
          peVar1 = this->pev;
          local_10 = SQRT(peVar1->velocity[2] * peVar1->velocity[2] +
                          peVar1->velocity[1] * peVar1->velocity[1] +
                          peVar1->velocity[0] * peVar1->velocity[0]);
          fVar2 = local_10 * 0.1;
          if (*(float *)(*piVar4 + 0x160) <= fVar2) {
            ClearMultiDamage();
            peVar1 = this->pev;
            local_10 = SQRT(peVar1->velocity[2] * peVar1->velocity[2] +
                            peVar1->velocity[1] * peVar1->velocity[1] +
                            peVar1->velocity[0] * peVar1->velocity[0]);
            if (local_10 == 0.0) {
              local_74 = 1.0;
              local_7c = 0.0;
              local_78 = 0.0;
            }
            else {
              local_74 = 1.0 / local_10;
              local_7c = local_74 * peVar1->velocity[0];
              local_78 = local_74 * peVar1->velocity[1];
              local_74 = local_74 * peVar1->velocity[2];
            }
            local_8c = local_7c * 64.0;
            local_88 = local_78 * 64.0;
            local_84 = local_74 * 64.0;
            (**(code **)(piVar4[0x18] + 0x54))(piVar4,this->pev,fVar2,&local_8c,local_5c,0x8001000);
            ApplyMultiDamage(this->pev,this->pev);
          }
        }
      }
    }
    if (this->pev->movetype != 5) {
      CTSPhysicObject::WaitThink((CTSPhysicObject *)this);
    }
  }
  else {
    RemoveEntityFromSlowedArray((int)this);
    UTIL_Remove((int *)this);
  }
  return;
}

/* 0007ed54  CTSKnife::ShouldCollide  (6 bytes)
 * undefined4 ShouldCollide(void)
 */
/* CTSKnife::ShouldCollide(CBaseEntity *) */

undefined4 CTSKnife::ShouldCollide(void)

{
  return 1;
}

/* 0007f04c  CTSKnife::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CTSKnife::ObjectCaps(void) */

undefined4 CTSKnife::ObjectCaps(void)

{
  return 0x10;
}

