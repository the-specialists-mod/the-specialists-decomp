/* ts_i386.so - CM61Grenade (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 0007c874  CM61Grenade::CreateGrenade  (251 bytes)
 * CM61Grenade * CreateGrenade(int * param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4)
 */
/* CM61Grenade::CreateGrenade(CBasePlayer *, float, Vector, Vector) */

CM61Grenade *
CM61Grenade::CreateGrenade(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  void **ppvVar1;
  CM61Grenade *pCVar2;
  CM61Grenade *pCVar3;
  int iVar4;
  vec_t *pvVar5;
  longdouble lVar6;
  
  pCVar2 = GetClassPtr<CM61Grenade>(0);
  pCVar3 = (CM61Grenade *)0x0;
  if (pCVar2 != (CM61Grenade *)0x0) {
    pCVar2->pev->classname = (string_t)("weapon_handgrenade" + (0xb - (int)gpGlobals->pStringBase));
    *(undefined4 *)&pCVar2->field_0x88 = param_2;
    *(undefined4 *)&pCVar2->field_0x90 = *(undefined4 *)(*param_1 + 0x208);
    (*pCVar2->vtable[9])(pCVar2);
    UTIL_SetOrigin((int)pCVar2->pev,param_3);
    pvVar5 = pCVar2->pev->velocity;
    for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pvVar5 = (vec_t)*param_4;
      param_4 = param_4 + 1;
      pvVar5 = pvVar5 + 1;
    }
    pCVar2->pev->owner = *(edict_t **)(*param_1 + 0x208);
    pCVar3 = pCVar2;
    if ((float)param_1[0x60] == 0.0) {
      ppvVar1 = pCVar2->vtable;
      lVar6 = (longdouble)(**(code **)(param_1[0x18] + 0x10))(param_1,param_3,0);
      (*ppvVar1[5])(pCVar2,(float)lVar6);
    }
    else {
      (*pCVar2->vtable[5])(pCVar2,param_1[0x60],0);
    }
  }
  return pCVar3;
}

/* 0007c974  CM61Grenade::Spawn  (282 bytes)
 * undefined Spawn(void)
 */
/* CM61Grenade::Spawn(void) */

void __thiscall CM61Grenade::Spawn(CM61Grenade *this)

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
  CTSGrenade::Precache();
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,"models/w_m61.mdl");
  this->pev->movetype = 10;
  this->pev->solid = 2;
  this->pev->gravity = 0.75;
  this->pev->friction = 0.8;
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
  *(undefined4 *)&this->field_0x8c = 0;
  this->pev->fuser1 = 1.0;
  this->pev->iuser4 = 0;
  piVar1 = &this->pev->iuser4;
  *piVar1 = *piVar1 | 2;
  return;
}

/* 0007ca90  CM61Grenade::BounceTouch  (58 bytes)
 * undefined BounceTouch(int * param_1)
 */
/* CM61Grenade::BounceTouch(CBaseEntity *) */

void __thiscall CM61Grenade::BounceTouch(CM61Grenade *this,int *param_1)

{
  if (*(int *)(*param_1 + 0x208) != *(int *)&this->field_0x90) {
    CTSGrenade::BounceTouch((int *)this);
  }
  return;
}

/* 0007cacc  CM61Grenade::WaitThink  (913 bytes)
 * undefined WaitThink(void)
 */
/* CM61Grenade::WaitThink(void) */

void __thiscall CM61Grenade::WaitThink(CM61Grenade *this)

{
  entvars_t *peVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  longdouble lVar6;
  float local_8c;
  float local_88;
  float local_84;
  undefined1 local_6c [16];
  float local_5c;
  edict_t *local_3c;
  float local_2c;
  float local_28;
  float local_24;
  float local_10;
  
  this->pev->nextthink = gpGlobals->time + 0.1;
  if (*(float *)&this->field_0x8c < *(float *)&this->field_0x88) {
    lVar6 = (longdouble)(*this->vtable[4])(this);
    *(float *)&this->field_0x8c =
         (float)(lVar6 * (longdouble)0.1 + (longdouble)*(float *)&this->field_0x8c);
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
      local_2c = peVar1->origin[0] + local_8c * 64.0;
      local_28 = peVar1->origin[1] + local_88 * 64.0;
      local_24 = peVar1->origin[2] + local_84 * 64.0;
      UTIL_TraceLine(this->pev->origin,&local_2c,0,peVar1->pContainingEntity,local_6c);
      if (local_5c < 1.0) {
        if (local_3c == (edict_t *)0x0) {
          local_3c = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
        }
        piVar4 = (int *)0x0;
        if (local_3c != (edict_t *)0x0) {
          piVar4 = local_3c->pvPrivateData;
        }
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
          local_2c = local_8c * 64.0;
          local_28 = local_88 * 64.0;
          local_24 = local_84 * 64.0;
          (**(code **)(piVar4[0x18] + 0x54))(piVar4,this->pev,fVar2,&local_2c,local_6c,0x1080);
          ApplyMultiDamage(this->pev,this->pev);
        }
      }
    }
    CTSPhysicObject::WaitThink((CTSPhysicObject *)this);
  }
  else {
    iVar3 = (*this->vtable[0x31])(this);
    if (iVar3 != 0) {
      if (*(int *)&this->field_0x90 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(int *)&this->field_0x90 + 0x80U & (*(int *)&this->field_0x90 == 0) - 1;
      }
      peVar1 = this->pev;
      local_2c = peVar1->origin[0];
      local_28 = peVar1->origin[1];
      local_24 = peVar1->origin[2];
      TSExplosion(&local_2c,this->pev,uVar5,110.0,0x1040,300.0,1024.0);
    }
    RemoveEntityFromSlowedArray((int)this);
    UTIL_Remove((int *)this);
  }
  return;
}

/* 0007ce64  CM61Grenade::Use  (436 bytes)
 * undefined Use(int * param_1, int * param_2)
 */
/* CM61Grenade::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CM61Grenade::Use(int *param_1,int *param_2)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float local_5c;
  float local_58;
  float local_54;
  float local_3c [4];
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((*(byte *)(*param_1 + 0x1a5) & 2) != 0) {
    iVar1 = (**(code **)(param_2[0x18] + 200))(param_2);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(param_2[0x18] + 0xb4))(param_2);
      if ((iVar1 != 0) && (iVar1 = *param_2, -1 < *(char *)(iVar1 + 0x118))) {
        local_18 = *(undefined4 *)(iVar1 + 0x78);
        local_14 = *(undefined4 *)(iVar1 + 0x7c);
        local_1c = 0;
        UTIL_MakeVectors(&local_1c);
        local_2c = gpGlobals->v_forward[0] + 0.0;
        local_28 = gpGlobals->v_forward[1] + 0.0;
        local_24 = gpGlobals->v_forward[2] + 0.75;
        iVar1 = *param_2;
        local_54 = SQRT(local_24 * local_24 + local_28 * local_28 + local_2c * local_2c);
        if (local_54 == 0.0) {
          local_54 = 1.0;
          local_5c = 0.0;
          local_58 = 0.0;
        }
        else {
          local_54 = 1.0 / local_54;
          local_5c = local_54 * local_2c;
          local_58 = local_54 * local_28;
          local_54 = local_54 * local_24;
        }
        local_3c[0] = *(float *)(iVar1 + 0x20) + local_5c * 625.0;
        local_3c[1] = *(float *)(iVar1 + 0x24) + local_58 * 625.0;
        local_3c[2] = *(float *)(iVar1 + 0x28) + local_54 * 625.0;
        pfVar2 = local_3c;
        pfVar3 = (float *)(*param_1 + 0x20);
        for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
          *pfVar3 = *pfVar2;
          pfVar2 = pfVar2 + 1;
          pfVar3 = pfVar3 + 1;
        }
      }
    }
  }
  return;
}

/* 0007effc  CM61Grenade::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CM61Grenade::ObjectCaps(void) */

undefined4 CM61Grenade::ObjectCaps(void)

{
  return 0x10;
}

