/* ts_i386.so - CTSShrapnel (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 0007bf9c  CTSShrapnel::Create  (257 bytes)
 * CTSShrapnel * Create(int param_1, undefined4 * param_2, float * param_3)
 */
/* CTSShrapnel::Create(entvars_s *, Vector, Vector) */

CTSShrapnel * CTSShrapnel::Create(int param_1,undefined4 *param_2,float *param_3)

{
  CTSShrapnel *pCVar1;
  CTSShrapnel *pCVar2;
  int iVar3;
  vec_t *pvVar4;
  vec_t *pvVar5;
  undefined4 *puVar6;
  float local_2c [7];
  
  pCVar1 = GetClassPtr<CTSShrapnel>(0);
  pCVar2 = (CTSShrapnel *)0x0;
  if (pCVar1 != (CTSShrapnel *)0x0) {
    (*pCVar1->vtable[9])(pCVar1);
    pCVar1->pev->classname = (int)"shrapnel" - (int)gpGlobals->pStringBase;
    *(int *)&pCVar1->field_0x8c = param_1;
    pvVar4 = (vec_t *)param_2;
    pvVar5 = pCVar1->pev->origin;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pvVar5 = *pvVar4;
      pvVar4 = pvVar4 + 1;
      pvVar5 = pvVar5 + 1;
    }
    local_2c[0] = *param_3 + *(float *)(param_1 + 0x20);
    local_2c[1] = param_3[1] + *(float *)(param_1 + 0x24);
    local_2c[2] = param_3[2] + *(float *)(param_1 + 0x28);
    pvVar4 = local_2c;
    pvVar5 = pCVar1->pev->velocity;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pvVar5 = *pvVar4;
      pvVar4 = pvVar4 + 1;
      pvVar5 = pvVar5 + 1;
    }
    puVar6 = (undefined4 *)&pCVar1->field_0x90;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *param_2;
      param_2 = param_2 + 1;
      puVar6 = puVar6 + 1;
    }
    iVar3 = (*g_engfuncs.pfnRandomLong)(0,2);
    pCVar1->pev->body = iVar3;
    (*pCVar1->vtable[5])(pCVar1,*(undefined4 *)(param_1 + 0x254),0);
    pCVar2 = pCVar1;
  }
  return pCVar2;
}

/* 0007c0a0  CTSShrapnel::Spawn  (295 bytes)
 * undefined Spawn(void)
 */
/* CTSShrapnel::Spawn(void) */

void __thiscall CTSShrapnel::Spawn(CTSShrapnel *this)

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
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,"models/shrapnel.mdl");
  this->pev->gravity = 1.0;
  this->pev->friction = 1.0;
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
  this->pev->iuser4 = 0;
  piVar1 = &this->pev->iuser4;
  *piVar1 = *piVar1 | 4;
  piVar1 = &this->pev->effects;
  *piVar1 = *piVar1 | 0x80;
  return;
}

/* 0007c1c8  CTSShrapnel::Precache  (53 bytes)
 * undefined Precache(void)
 */
/* CTSShrapnel::Precache(void) */

void CTSShrapnel::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)("models/shrapnel.mdl");
  (*g_engfuncs.pfnPrecacheSound)("weapons/knife/knife_hit.wav");
  return;
}

/* 0007c200  CTSShrapnel::BounceTouch  (1134 bytes)
 * undefined BounceTouch(int * param_1)
 */
/* CTSShrapnel::BounceTouch(CBaseEntity *) */

void __thiscall CTSShrapnel::BounceTouch(CTSShrapnel *this,int *param_1)

{
  edict_t *peVar1;
  globalvars_t *pgVar2;
  int iVar3;
  entvars_t *peVar4;
  undefined2 extraout_var;
  undefined2 uVar5;
  entvars_t *peVar6;
  float *pfVar7;
  vec_t *pvVar8;
  float *pfVar9;
  vec_t *pvVar10;
  float fVar11;
  float local_8c [7];
  float local_70;
  float local_6c [4];
  float local_5c [19];
  
  if (-1 < *(char *)(*param_1 + 0x118)) {
    if ((*(float *)(*param_1 + 0x16c) == 0.0) ||
       (iVar3 = (**(code **)(param_1[0x18] + 200))(param_1), iVar3 == 0)) {
      pgVar2 = gpGlobals;
      iVar3 = strcmp(gpGlobals->pStringBase + *(int *)*param_1,"worldspawn");
      if ((iVar3 == 0) ||
         (iVar3 = strcmp(pgVar2->pStringBase + *(int *)*param_1,"func_wall"), iVar3 == 0)) {
        peVar6 = this->pev;
        local_70 = SQRT(peVar6->velocity[2] * peVar6->velocity[2] +
                        peVar6->velocity[1] * peVar6->velocity[1] +
                        peVar6->velocity[0] * peVar6->velocity[0]);
        if (local_70 == 0.0) {
          local_8c[2] = 1.0;
          local_8c[0] = 0.0;
          local_8c[1] = 0.0;
        }
        else {
          local_8c[2] = 1.0 / local_70;
          local_8c[0] = local_8c[2] * peVar6->velocity[0];
          local_8c[1] = local_8c[2] * peVar6->velocity[1];
          local_8c[2] = local_8c[2] * peVar6->velocity[2];
        }
        peVar6 = this->pev;
        local_5c[0] = local_8c[0] * 6.0;
        local_5c[1] = local_8c[1] * 6.0;
        local_5c[2] = local_8c[2] * 6.0;
        local_6c[0] = peVar6->origin[0] - local_5c[0];
        local_6c[1] = peVar6->origin[1] - local_5c[1];
        local_6c[2] = peVar6->origin[2] - local_5c[2];
        UTIL_SetOrigin((int)this->pev,local_6c);
        UTIL_VecToAngles(local_6c,local_8c);
        peVar6 = this->pev;
        pfVar7 = local_6c;
        pfVar9 = local_5c;
        for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar9 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          pfVar9 = pfVar9 + 1;
        }
        pfVar7 = local_5c;
        pvVar8 = peVar6->angles;
        for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pvVar8 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          pvVar8 = pvVar8 + 1;
        }
        this->pev->angles[2] = 90.0;
        this->pev->solid = 0;
        this->pev->movetype = 5;
        pvVar8 = (vec_t *)&g_vecZero;
        pvVar10 = this->pev->velocity;
        for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pvVar10 = *pvVar8;
          pvVar8 = pvVar8 + 1;
          pvVar10 = pvVar10 + 1;
        }
        pvVar8 = (vec_t *)&g_vecZero;
        pvVar10 = this->pev->avelocity;
        for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pvVar10 = *pvVar8;
          pvVar8 = pvVar8 + 1;
          pvVar10 = pvVar10 + 1;
        }
      }
      else {
        peVar6 = this->pev;
        local_6c[0] = -peVar6->velocity[0];
        local_6c[1] = -peVar6->velocity[1];
        local_6c[2] = -peVar6->velocity[2];
        local_8c[0] = -peVar6->velocity[0] * 0.25;
        local_8c[1] = -peVar6->velocity[1] * 0.25;
        local_8c[2] = -peVar6->velocity[2] * 0.25;
        pfVar7 = local_8c;
        pvVar8 = peVar6->velocity;
        for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pvVar8 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          pvVar8 = pvVar8 + 1;
        }
      }
      peVar1 = this->pev->pContainingEntity;
      fVar11 = 0.5;
      iVar3 = (*g_engfuncs.pfnRandomLong)(0x14,0x1e);
      EMIT_SOUND_DYN((int)peVar1,4,"weapons/knife/knife_hit.wav",0x3f800000,0x3f4ccccd,0,iVar3 + 100
                     ,fVar11);
      uVar5 = extraout_var;
    }
    else {
      peVar6 = (entvars_t *)0x0;
      if (*(int *)&this->field_0x8c != 0) {
        peVar6 = *(entvars_t **)&this->field_0x8c;
      }
      UTIL_GetGlobalTrace((int *)local_5c);
      ClearMultiDamage();
      peVar4 = this->pev;
      local_70 = SQRT(peVar4->velocity[2] * peVar4->velocity[2] +
                      peVar4->velocity[1] * peVar4->velocity[1] +
                      peVar4->velocity[0] * peVar4->velocity[0]);
      if (local_70 == 0.0) {
        local_6c[2] = 1.0;
        local_6c[0] = 0.0;
        local_6c[1] = 0.0;
      }
      else {
        local_6c[2] = 1.0 / local_70;
        local_6c[0] = local_6c[2] * peVar4->velocity[0];
        local_6c[1] = local_6c[2] * peVar4->velocity[1];
        local_6c[2] = local_6c[2] * peVar4->velocity[2];
      }
      peVar4 = peVar6;
      if (peVar6 == (entvars_t *)0x0) {
        peVar4 = this->pev;
      }
      (**(code **)(param_1[0x18] + 0x54))(param_1,peVar4,0x42c80000,local_6c,local_5c,0x1004);
      if (peVar6 == (entvars_t *)0x0) {
        peVar6 = this->pev;
      }
      ApplyMultiDamage(this->pev,peVar6);
      peVar6 = this->pev;
      local_8c[0] = -peVar6->velocity[0];
      local_8c[1] = -peVar6->velocity[1];
      local_8c[2] = -peVar6->velocity[2];
      local_6c[0] = -peVar6->velocity[0] * 0.25;
      local_6c[1] = -peVar6->velocity[1] * 0.25;
      local_6c[2] = -peVar6->velocity[2] * 0.25;
      pfVar7 = local_6c;
      pvVar8 = peVar6->velocity;
      for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pvVar8 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        pvVar8 = pvVar8 + 1;
      }
      uVar5 = 0;
    }
    *(undefined4 *)&this->field_0xc = 0x460000;
    *(uint *)&this->field_0x10 = CONCAT22(uVar5,0x60);
    *(float *)&this->field_0x88 = gpGlobals->time + 10.0;
  }
  return;
}

/* 0007c678  CTSShrapnel::WaitThink  (464 bytes)
 * undefined WaitThink(void)
 */
/* CTSShrapnel::WaitThink(void) */

void __thiscall CTSShrapnel::WaitThink(CTSShrapnel *this)

{
  entvars_t *peVar1;
  entvars_t *peVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  vec_t *pvVar6;
  float local_4c;
  float local_48;
  float local_44;
  float local_3c [7];
  float local_20;
  
  this->pev->nextthink = gpGlobals->time + 0.1;
  peVar1 = this->pev;
  if (SQRT(peVar1->velocity[2] * peVar1->velocity[2] +
           peVar1->velocity[1] * peVar1->velocity[1] + peVar1->velocity[0] * peVar1->velocity[0]) <=
      100.0) {
    peVar1 = this->pev;
    local_20 = SQRT(peVar1->velocity[2] * peVar1->velocity[2] +
                    peVar1->velocity[1] * peVar1->velocity[1] +
                    peVar1->velocity[0] * peVar1->velocity[0]);
    if ((local_20 < 100.0) && (this->pev->movetype != 5)) {
      UTIL_Remove((int *)this);
    }
  }
  else {
    peVar1 = this->pev;
    local_44 = SQRT(peVar1->velocity[2] * peVar1->velocity[2] +
                    peVar1->velocity[1] * peVar1->velocity[1] +
                    peVar1->velocity[0] * peVar1->velocity[0]);
    if (local_44 == 0.0) {
      local_44 = 1.0;
      local_4c = 0.0;
      local_48 = 0.0;
    }
    else {
      local_44 = 1.0 / local_44;
      local_4c = local_44 * peVar1->velocity[0];
      local_48 = local_44 * peVar1->velocity[1];
      local_44 = local_44 * peVar1->velocity[2];
    }
    peVar2 = this->pev;
    local_20 = SQRT(peVar2->velocity[2] * peVar2->velocity[2] +
                    peVar2->velocity[1] * peVar2->velocity[1] +
                    peVar2->velocity[0] * peVar2->velocity[0]);
    fVar3 = local_20 - 1.0;
    local_3c[0] = fVar3 * local_4c;
    local_3c[1] = fVar3 * local_48;
    local_3c[2] = fVar3 * local_44;
    pfVar5 = local_3c;
    pvVar6 = peVar1->velocity;
    for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pvVar6 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pvVar6 = pvVar6 + 1;
    }
  }
  if ((*(float *)&this->field_0x88 == 0.0) || (gpGlobals->time <= *(float *)&this->field_0x88)) {
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

/* 0007f09c  CTSShrapnel::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CTSShrapnel::ObjectCaps(void) */

undefined4 CTSShrapnel::ObjectCaps(void)

{
  return 0x10;
}

