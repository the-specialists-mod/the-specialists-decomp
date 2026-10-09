/* ts_i386.so - CTSWorldGun (13 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000a07ec  CTSWorldGun::CreateWeapon  (357 bytes)
 * CTSWorldGun * CreateWeapon(int * param_1, int param_2, undefined4 * param_3)
 */
/* CTSWorldGun::CreateWeapon(CBasePlayer *, tsweapon_t, s_weapon_status *) */

CTSWorldGun * CTSWorldGun::CreateWeapon(int *param_1,int param_2,undefined4 *param_3)

{
  void **ppvVar1;
  CTSWorldGun *pCVar2;
  int iVar3;
  undefined4 *puVar4;
  longdouble lVar5;
  undefined4 uVar6;
  
  pCVar2 = GetClassPtr<CTSWorldGun>(0);
  if (pCVar2 == (CTSWorldGun *)0x0) {
    UTIL_ClientPrintAll(3,"WARNING:cannot create weapon!\n",0,0,0,0);
    pCVar2 = (CTSWorldGun *)0x0;
  }
  else {
    pCVar2->pev->classname = (string_t)("11CTSWorldGun" + (5 - (int)gpGlobals->pStringBase));
    *(int *)&pCVar2->field_0x88 = param_2;
    puVar4 = (undefined4 *)&pCVar2->field_0x8c;
    for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *param_3;
      param_3 = param_3 + 1;
      puVar4 = puVar4 + 1;
    }
    (*pCVar2->vtable[9])(pCVar2);
    if (param_1 == (int *)0x0) {
      pCVar2->pev->owner = (edict_t *)0x0;
      pCVar2->pev->fuser1 = 1.0;
    }
    else {
      pCVar2->pev->owner = *(edict_t **)(*param_1 + 0x208);
      if ((float)param_1[0x60] == 0.0) {
        ppvVar1 = pCVar2->vtable;
        uVar6 = 0;
        lVar5 = (longdouble)(**(code **)(param_1[0x18] + 0x10))(param_1);
        (*ppvVar1[5])(pCVar2,(float)lVar5,uVar6);
      }
      else {
        (*pCVar2->vtable[5])(pCVar2,param_1[0x60],0);
      }
    }
    if (param_2 == 0x1d) {
      pCVar2->pev->renderamt = 5.0;
      pCVar2->pev->renderfx = 0x13;
      pCVar2->pev->rendercolor[0] = 200.0;
      pCVar2->pev->rendercolor[1] = 200.0;
      pCVar2->pev->rendercolor[2] = 200.0;
    }
  }
  return pCVar2;
}

/* 000a0954  CTSWorldGun::Spawn  (430 bytes)
 * undefined Spawn(void)
 */
/* CTSWorldGun::Spawn(void) */

void __thiscall CTSWorldGun::Spawn(CTSWorldGun *this)

{
  int *piVar1;
  float fVar2;
  edict_t *e;
  undefined4 *puVar3;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  CTSPhysicObject::Spawn((CTSPhysicObject *)this);
  (*this->vtable[10])(this);
  e = this->pev->pContainingEntity;
  puVar3 = get_weapon_info(*(uint *)&this->field_0x88);
  (*g_engfuncs.pfnSetModel)(e,(char *)((int)puVar3 + 0x1f2));
  this->pev->movetype = 10;
  this->pev->solid = 2;
  this->pev->gravity = 0.7;
  this->pev->friction = 0.8;
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  local_3c = 0;
  local_38 = local_3c;
  local_34 = local_3c;
  local_2c = local_3c;
  local_28 = local_3c;
  local_24 = local_3c;
  UTIL_SetSize((int)this->pev,&local_3c,&local_2c);
  if (*(int *)&this->field_0x88 == 0x1d) {
    fVar2 = gpGlobals->time + 30.0;
  }
  else {
    fVar2 = (float)weaponstay_time._12_4_;
    if (60.0 < (float)weaponstay_time._12_4_) {
      fVar2 = 60.0;
    }
    if (fVar2 < 5.0) {
      fVar2 = 5.0;
    }
    fVar2 = fVar2 + gpGlobals->time;
  }
  *(float *)&this->field_0xc4 = fVar2;
  *(undefined4 *)&this->field_0x14 = 0xffff0000;
  *(code **)&this->field_0x18 = BounceTouch;
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = Fall;
  this->pev->nextthink = gpGlobals->time + 0.1;
  this->pev->iuser4 = 0;
  piVar1 = &this->pev->iuser4;
  *piVar1 = *piVar1 | 2;
  this->field_0xc8 = 1;
  *(float *)&this->field_0xcc = gpGlobals->time + 0.5;
  this->field_0xd4 = 0;
  return;
}

/* 000a0b08  CTSWorldGun::Precache  (1 bytes)
 * undefined Precache(void)
 */
/* CTSWorldGun::Precache(void) */

void CTSWorldGun::Precache(void)

{
  return;
}

/* 000a0b0c  CTSWorldGun::BounceTouch  (624 bytes)
 * undefined BounceTouch(int * param_1)
 */
/* CTSWorldGun::BounceTouch(CBaseEntity *) */

void CTSWorldGun::BounceTouch(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  longdouble lVar8;
  float fVar9;
  int local_7c [11];
  float fStack_50;
  float local_3c [7];
  float local_20;
  
  *(float *)(*param_1 + 0x28) = *(float *)(*param_1 + 0x28) * 0.3;
  if ((*(byte *)(*param_1 + 0x1a5) & 2) == 0) {
    iVar3 = *param_1;
    fVar9 = *(float *)(iVar3 + 0x20);
    fVar2 = *(float *)(iVar3 + 0x24);
    fVar1 = *(float *)(iVar3 + 0x28);
    lVar8 = (longdouble)(**(code **)(param_1[0x18] + 0x10))(param_1);
    if (lVar8 * (longdouble)18.0 < (longdouble)SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar9 * fVar9))
    {
      UTIL_GetGlobalTrace(local_7c);
      local_3c[0] = 0.0;
      local_3c[1] = 0.0;
      local_3c[2] = 1.0;
      if (((char)param_1[0x32] != '\0') && (0.98 < fStack_50)) {
        *(undefined1 *)(param_1 + 0x32) = 1;
        iVar3 = *(int *)(*param_1 + 0x208);
        fVar9 = 0.5;
        iVar4 = (*g_engfuncs.pfnRandomLong)(0,10);
        EMIT_SOUND_DYN(iVar3,6,"items/weapondrop1.wav",0x3f800000,0x3f4ccccd,0,iVar4 + 100,fVar9);
      }
    }
  }
  else {
    lVar8 = (longdouble)(**(code **)(param_1[0x18] + 0x10))(param_1);
    fVar9 = *(float *)(*param_1 + 0x20);
    fVar2 = *(float *)(*param_1 + 0x24);
    local_20 = SQRT(fVar2 * fVar2 + fVar9 * fVar9);
    if ((longdouble)local_20 <= lVar8 * (longdouble)40.0) {
      iVar3 = *param_1;
      pfVar6 = local_3c;
      local_3c[0] = *(float *)(iVar3 + 0x20) * 0.7;
      local_3c[1] = *(float *)(iVar3 + 0x24) * 0.7;
      local_3c[2] = *(float *)(iVar3 + 0x28) * 0.7;
      pfVar5 = pfVar6;
      pfVar7 = (float *)(iVar3 + 0x20);
      for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar7 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        pfVar7 = pfVar7 + 1;
      }
      pfVar5 = (float *)(*param_1 + 0x5c);
      iVar3 = 3;
    }
    else {
      pfVar6 = local_3c;
      pfVar5 = (float *)(*param_1 + 0x20);
      for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar5 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        pfVar5 = pfVar5 + 1;
      }
      iVar3 = 3;
      pfVar6 = local_3c;
      pfVar5 = (float *)(*param_1 + 0x5c);
    }
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar5 = pfVar5 + 1;
    }
    *(undefined4 *)(*param_1 + 0x58) = 0;
  }
  return;
}

/* 000a0d84  CTSWorldGun::Fall  (709 bytes)
 * undefined Fall(void)
 */
/* CTSWorldGun::Fall(void) */

void __thiscall CTSWorldGun::Fall(CTSWorldGun *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  entvars_t *peVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  longdouble lVar8;
  float local_8c;
  float local_88;
  float local_84;
  float local_7c;
  float local_78;
  float local_74;
  undefined1 local_6c [16];
  float local_5c;
  edict_t *local_3c;
  float local_20;
  
  this->pev->nextthink = gpGlobals->time + 0.1;
  peVar4 = this->pev;
  if ((peVar4->flags & 0x200) != 0) {
    fVar1 = peVar4->velocity[0];
    fVar2 = peVar4->velocity[1];
    fVar3 = peVar4->velocity[2];
    lVar8 = (longdouble)(*this->vtable[4])(this);
    if ((longdouble)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < lVar8 * (longdouble)3.0) {
      EMIT_SOUND_DYN((int)this->pev->pContainingEntity,6,"items/weapondrop1.wav",0x3f800000,
                     0x3f4ccccd,0,100,0.5);
      this->pev->angles[0] = 0.0;
      this->pev->angles[2] = 0.0;
      OnGround(this);
    }
  }
  if (gpGlobals->time <= *(float *)&this->field_0xc4) {
    peVar4 = this->pev;
    local_8c = peVar4->velocity[0] * 0.1;
    local_88 = peVar4->velocity[1] * 0.1;
    local_84 = peVar4->velocity[2] * 0.1;
    local_7c = peVar4->origin[0] + local_8c;
    local_78 = peVar4->origin[1] + local_88;
    local_74 = peVar4->origin[2] + local_84;
    UTIL_TraceLine(this->pev->origin,&local_7c,0,peVar4->pContainingEntity,local_6c);
    if (local_5c < 1.0) {
      if (local_3c == (edict_t *)0x0) {
        local_3c = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
      }
      piVar7 = (int *)0x0;
      if (local_3c != (edict_t *)0x0) {
        piVar7 = local_3c->pvPrivateData;
      }
      iVar5 = (**(code **)(piVar7[0x18] + 200))(piVar7);
      if (iVar5 == 0) {
        iVar5 = *piVar7;
        puVar6 = get_weapon_info(*(uint *)&this->field_0x88);
        peVar4 = this->pev;
        local_20 = SQRT(peVar4->velocity[2] * peVar4->velocity[2] +
                        peVar4->velocity[1] * peVar4->velocity[1] +
                        peVar4->velocity[0] * peVar4->velocity[0]);
        if (*(float *)(iVar5 + 0x160) <= local_20 * (float)*(byte *)(puVar6 + 0x34)) {
          ClearMultiDamage();
          peVar4 = this->pev;
          local_8c = peVar4->velocity[0];
          local_88 = peVar4->velocity[1];
          local_84 = peVar4->velocity[2];
          puVar6 = get_weapon_info(*(uint *)&this->field_0x88);
          peVar4 = this->pev;
          local_20 = SQRT(peVar4->velocity[2] * peVar4->velocity[2] +
                          peVar4->velocity[1] * peVar4->velocity[1] +
                          peVar4->velocity[0] * peVar4->velocity[0]);
          (**(code **)(piVar7[0x18] + 0x54))
                    (piVar7,this->pev,local_20 * (float)*(byte *)(puVar6 + 0x34) * 0.001,&local_8c,
                     local_6c,0x1080);
          ApplyMultiDamage(this->pev,this->pev);
        }
      }
    }
    CTSPhysicObject::WaitThink((CTSPhysicObject *)this);
  }
  else {
    RemoveEntityFromSlowedArray((int)this);
    UTIL_Remove((int *)this);
  }
  return;
}

/* 000a104c  CTSWorldGun::WaitThink  (86 bytes)
 * undefined WaitThink(void)
 */
/* CTSWorldGun::WaitThink(void) */

void __thiscall CTSWorldGun::WaitThink(CTSWorldGun *this)

{
  this->pev->nextthink = gpGlobals->time + 0.1;
  if (*(float *)&this->field_0xc4 < gpGlobals->time) {
    RemoveEntityFromSlowedArray((int)this);
    UTIL_Remove((int *)this);
  }
  return;
}

/* 000a10a4  CTSWorldGun::OnGround  (178 bytes)
 * undefined OnGround(void)
 */
/* CTSWorldGun::OnGround(void) */

void __thiscall CTSWorldGun::OnGround(CTSWorldGun *this)

{
  undefined2 extraout_var;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  this->pev->owner = (edict_t *)0x0;
  this->pev->solid = 1;
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  local_1c = 0x40800000;
  local_2c = 0xc0800000;
  local_24 = 0;
  local_28 = local_2c;
  local_18 = local_1c;
  local_14 = local_1c;
  UTIL_SetSize((int)this->pev,&local_2c,&local_1c);
  *(undefined4 *)&this->field_0x14 = 0xffff0000;
  *(code **)&this->field_0x18 = WaitTouch;
  *(undefined4 *)&this->field_0xc = 0x460000;
  *(uint *)&this->field_0x10 = CONCAT22(extraout_var,0x60);
  return;
}

/* 000a1158  CTSWorldGun::Use  (64 bytes)
 * undefined Use(CTSWorldGun * param_1, CBasePlayer * param_2)
 */
/* CTSWorldGun::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CTSWorldGun::Use(CTSWorldGun *param_1,CBasePlayer *param_2)

{
  if (*(float *)&param_1->field_0xcc < gpGlobals->time) {
    GetWeapon(param_1,param_2);
  }
  return;
}

/* 000a1198  CTSWorldGun::GetWeapon  (183 bytes)
 * undefined GetWeapon(CBasePlayer * param_1)
 */
/* CTSWorldGun::GetWeapon(CBaseEntity *) */

void __thiscall CTSWorldGun::GetWeapon(CTSWorldGun *this,CBasePlayer *param_1)

{
  int iVar1;
  
  if (this->field_0xd4 == '\0') {
    iVar1 = (*param_1->vtable[0x32])(param_1);
    if (iVar1 != 0) {
      iVar1 = (*param_1->vtable[0x2d])(param_1);
      if (((iVar1 != 0) && (-1 < (char)param_1->pev->effects)) && (-1 < (char)this->pev->effects)) {
        iVar1 = CBasePlayer::PickUpWeapon
                          (param_1,*(uint *)&this->field_0x88,(undefined4 *)&this->field_0x8c,0,
                           *(int *)&this->field_0x88 != 0x1d,'\0');
        if (iVar1 != 0) {
          this->field_0xd4 = 1;
          RemoveEntityFromSlowedArray((int)this);
          UTIL_Remove((int *)this);
        }
      }
    }
  }
  return;
}

/* 000a1250  CTSWorldGun::WaitTouch  (62 bytes)
 * undefined WaitTouch(CBasePlayer * param_1)
 */
/* CTSWorldGun::WaitTouch(CBaseEntity *) */

void __thiscall CTSWorldGun::WaitTouch(CTSWorldGun *this,CBasePlayer *param_1)

{
  if ((*(int *)&this->field_0x88 == 0x1d) || ((param_1->pev->button & 0x20) != 0)) {
    GetWeapon(this,param_1);
  }
  return;
}

/* 000a1290  CTSWorldGun::ShouldCollide  (128 bytes)
 * bool ShouldCollide(undefined4 this, undefined4 * param_2)
 */
/* CTSWorldGun::ShouldCollide(CBaseEntity *) */

bool __thiscall CTSWorldGun::ShouldCollide(undefined4 this,undefined4 *param_2)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  bool bVar5;
  
  bVar4 = CARRY4((uint)gpGlobals->pStringBase,*(uint *)*param_2);
  pbVar3 = (byte *)(gpGlobals->pStringBase + *(uint *)*param_2);
  bVar5 = pbVar3 == (byte *)0x0;
  iVar1 = 9;
  pbVar2 = (byte *)0x10a74b;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pbVar2 < *pbVar3;
    bVar5 = *pbVar2 == *pbVar3;
    pbVar2 = pbVar2 + 1;
    pbVar3 = pbVar3 + 1;
  } while (bVar5);
  if ((!bVar4 && !bVar5) == bVar4) {
    bVar4 = false;
  }
  else {
    bVar4 = CARRY4((uint)gpGlobals->pStringBase,*(uint *)*param_2);
    pbVar3 = (byte *)(gpGlobals->pStringBase + *(uint *)*param_2);
    bVar5 = pbVar3 == (byte *)0x0;
    iVar1 = 6;
    pbVar2 = &DAT_001077e5;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *pbVar2 < *pbVar3;
      bVar5 = *pbVar2 == *pbVar3;
      pbVar2 = pbVar2 + 1;
      pbVar3 = pbVar3 + 1;
    } while (bVar5);
    bVar4 = (!bVar4 && !bVar5) != bVar4;
  }
  return bVar4;
}

/* 000a3404  CTSWorldGun::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CTSWorldGun::ObjectCaps(void) */

undefined4 CTSWorldGun::ObjectCaps(void)

{
  return 0x10;
}

/* 000a340c  CTSWorldGun::CanUsedTroughWalls  (3 bytes)
 * undefined1 CanUsedTroughWalls(void)
 */
/* CTSWorldGun::CanUsedTroughWalls(void) */

undefined1 CTSWorldGun::CanUsedTroughWalls(void)

{
  return 0;
}

