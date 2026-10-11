/* mp.dll - CTSWorldGun (9 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100741c0  CTSWorldGun::CreateWeapon  (276 bytes)
 * int * CreateWeapon(int * param_1, int param_2, int * param_3)
 * called by: CBasePlayer::ThrowWeapon
 */
int * __cdecl CTSWorldGun::CreateWeapon(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  
  piVar2 = (int *)GetClassPtr<CTSWorldGun>(0);
  if (piVar2 == (int *)0x0) {
    UTIL_ClientPrintAll(3,s_WARNING_cannot_create_weapon__100a6330,0,0,0,0);
    return (int *)0x0;
  }
  *(int *)piVar2[1] = (int)s_WorldGun_1009d570 - (int)gpGlobals->pStringBase;
  iVar1 = *piVar2;
  piVar2[0x1e] = param_2;
  piVar4 = piVar2 + 0x1f;
  for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = *param_3;
    param_3 = param_3 + 1;
    piVar4 = piVar4 + 1;
  }
  (**(code **)(iVar1 + 0x1c))();
  if (param_1 == (int *)0x0) {
    *(undefined4 *)(piVar2[1] + 0x198) = 0;
    *(undefined4 *)(piVar2[1] + 0x254) = 0x3f800000;
  }
  else {
    *(undefined4 *)(piVar2[1] + 0x198) = *(undefined4 *)(param_1[1] + 0x208);
    if ((float)param_1[0x5b] == 0.0) {
      iVar1 = *piVar2;
      fVar5 = (float10)(**(code **)(*param_1 + 8))(0);
      (**(code **)(iVar1 + 0xc))((float)fVar5);
    }
    else {
      (**(code **)(*piVar2 + 0xc))(param_1[0x5b],0);
    }
  }
  if (param_2 == 0x1d) {
    *(undefined4 *)(piVar2[1] + 0x14c) = 0x40a00000;
    *(undefined4 *)(piVar2[1] + 0x15c) = 0x13;
    *(undefined4 *)(piVar2[1] + 0x150) = 0x43480000;
    *(undefined4 *)(piVar2[1] + 0x154) = 0x43480000;
    *(undefined4 *)(piVar2[1] + 0x158) = 0x43480000;
  }
  return piVar2;
}

/* 100742e0  CTSWorldGun::Spawn  (387 bytes)
 * undefined Spawn()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall CTSWorldGun::Spawn(int *param_1)

{
  float fVar1;
  edict_t *e;
  undefined4 *puVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  CTSPhysicObject::Spawn((int)param_1);
  (**(code **)(*param_1 + 0x20))();
  e = *(edict_t **)(param_1[1] + 0x208);
  puVar2 = get_weapon_info(param_1[0x1e]);
  (*g_engfuncs.pfnSetModel)(e,(char *)((int)puVar2 + 0x1f2));
  *(undefined4 *)(param_1[1] + 0x108) = 10;
  *(undefined4 *)(param_1[1] + 0x10c) = 2;
  *(undefined4 *)(param_1[1] + 0x11c) = 0x3f333333;
  *(undefined4 *)(param_1[1] + 0x120) = 0x3f4ccccd;
  UTIL_SetOrigin(param_1[1],param_1[1] + 8);
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  uStack_4 = 0;
  UTIL_SetSize(param_1[1],&uStack_c,&uStack_18);
  if (param_1[0x1e] == 0x1d) {
    fVar1 = gpGlobals->time + 30.0;
  }
  else {
    if (60.0 <= _DAT_1009ee1c) {
      fVar1 = 60.0;
    }
    else {
      fVar1 = _DAT_1009ee1c;
      if (_DAT_1009ee1c <= 5.0) {
        fVar1 = 5.0;
      }
    }
    fVar1 = fVar1 + gpGlobals->time;
  }
  param_1[0x2d] = (int)fVar1;
  param_1[5] = (int)BounceTouch;
  param_1[4] = (int)Fall;
  *(float *)(param_1[1] + 0x104) = gpGlobals->time + 0.1;
  *(undefined4 *)(param_1[1] + 0x250) = 0;
  *(uint *)(param_1[1] + 0x250) = *(uint *)(param_1[1] + 0x250) | 2;
  *(undefined1 *)(param_1 + 0x2e) = 1;
  fVar1 = gpGlobals->time;
  *(undefined1 *)(param_1 + 0x31) = 0;
  param_1[0x2f] = (int)(fVar1 + 0.5);
  return;
}

/* 10074470  CTSWorldGun::BounceTouch  (747 bytes)
 * void BounceTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CTSWorldGun::BounceTouch(class CBaseEntity *) */

void __thiscall CTSWorldGun::BounceTouch(CTSWorldGun *this,CBaseEntity *param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  void *this_00;
  float10 fVar4;
  Vector VStack_8c;
  Vector VStack_80;
  float local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  Vector VStack_5c;
  undefined4 uStack_50;
  Vector VStack_4c;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 auStack_38 [14];
  
                    /* 0x74470  12  ?BounceTouch@CTSWorldGun@@QAEXPAVCBaseEntity@@@Z */
  this->pev->velocity[2] = this->pev->velocity[2] * 0.3;
  peVar1 = this->pev;
  if ((peVar1->flags & 0x200U) == 0) {
    local_74 = SQRT(peVar1->velocity[2] * peVar1->velocity[2] +
                    peVar1->velocity[1] * peVar1->velocity[1] +
                    peVar1->velocity[0] * peVar1->velocity[0]);
    fVar4 = (float10)(*this->vtable[2])();
    if (fVar4 * (float10)18.0 < (float10)local_74) {
      puVar3 = (undefined4 *)FUN_10077040(auStack_38);
      uStack_70 = *puVar3;
      uStack_6c = puVar3[1];
      uStack_68 = puVar3[2];
      uStack_64 = puVar3[3];
      uStack_60 = puVar3[4];
      Vector::Vector(&VStack_5c,puVar3 + 5);
      uStack_50 = puVar3[8];
      Vector::Vector(&VStack_4c,puVar3 + 9);
      uStack_40 = puVar3[0xc];
      uStack_3c = puVar3[0xd];
      if ((this->field_0xb8 != '\0') && (0.98 < VStack_4c.z)) {
        this->field_0xb8 = 1;
        peVar2 = this->pev->pContainingEntity;
        (*g_engfuncs.pfnRandomLong)(0,10);
        EMIT_SOUND_DYN(this_00,peVar2,6,s_items_weapondrop1_wav_100a5b30,0x3f800000,0x3f4ccccd,0);
      }
    }
    return;
  }
  local_74 = SQRT(peVar1->velocity[0] * peVar1->velocity[0] +
                  peVar1->velocity[1] * peVar1->velocity[1]);
  fVar4 = (float10)(*this->vtable[2])();
  peVar1 = this->pev;
  if (fVar4 * (float10)40.0 < (float10)local_74) {
    VStack_80.x = peVar1->velocity[0] * 0.9;
    VStack_80.y = peVar1->velocity[1] * 0.9;
    VStack_80.z = peVar1->velocity[2] * 0.9;
    Vector::Vector(&VStack_8c,&VStack_80.x);
    peVar1 = this->pev;
    peVar1->velocity[0] = VStack_8c.x;
    peVar1->velocity[1] = VStack_8c.y;
    peVar1->velocity[2] = VStack_8c.z;
    peVar1 = this->pev;
    VStack_8c.x = peVar1->avelocity[0] * 0.9;
    VStack_8c.y = peVar1->avelocity[1] * 0.9;
    VStack_8c.z = peVar1->avelocity[2] * 0.9;
    Vector::Vector(&VStack_80,&VStack_8c.x);
    peVar1 = this->pev;
    peVar1->avelocity[0] = VStack_80.x;
    peVar1->avelocity[1] = VStack_80.y;
    peVar1->avelocity[2] = VStack_80.z;
    this->pev->angles[2] = 0.0;
    return;
  }
  VStack_8c.x = peVar1->velocity[0] * 0.7;
  VStack_8c.y = peVar1->velocity[1] * 0.7;
  VStack_8c.z = peVar1->velocity[2] * 0.7;
  Vector::Vector(&VStack_80,&VStack_8c.x);
  peVar1 = this->pev;
  peVar1->velocity[0] = VStack_80.x;
  peVar1->velocity[1] = VStack_80.y;
  peVar1->velocity[2] = VStack_80.z;
  peVar1 = this->pev;
  VStack_8c.x = peVar1->avelocity[0] * 0.7;
  VStack_8c.y = peVar1->avelocity[1] * 0.7;
  VStack_8c.z = peVar1->avelocity[2] * 0.7;
  Vector::Vector(&VStack_80,&VStack_8c.x);
  peVar1 = this->pev;
  peVar1->avelocity[0] = VStack_80.x;
  peVar1->avelocity[1] = VStack_80.y;
  peVar1->avelocity[2] = VStack_80.z;
  this->pev->angles[2] = 0.0;
  return;
}

/* 10074760  CTSWorldGun::Fall  (601 bytes)
 * void Fall(void)
 */
/* public: void __thiscall CTSWorldGun::Fall(void) */

void __thiscall CTSWorldGun::Fall(CTSWorldGun *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  entvars_t *peVar4;
  edict_t *this_00;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  float10 fVar8;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [16];
  float fStack_28;
  edict_t *peStack_8;
  
                    /* 0x74760  49  ?Fall@CTSWorldGun@@QAEXXZ */
  piVar7 = (int *)0x0;
  this->pev->nextthink = gpGlobals->time + 0.1;
  peVar4 = this->pev;
  if ((peVar4->flags & 0x200U) != 0) {
    fVar1 = peVar4->velocity[2];
    fVar2 = peVar4->velocity[1];
    fVar3 = peVar4->velocity[0];
    fVar8 = (float10)(*this->vtable[2])();
    if ((float10)SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3) < fVar8 * (float10)3.0) {
      this_00 = this->pev->pContainingEntity;
      EMIT_SOUND_DYN(this_00,this_00,6,s_items_weapondrop1_wav_100a5b30,0x3f800000,0x3f4ccccd,0);
      this->pev->angles[0] = 0.0;
      this->pev->angles[2] = 0.0;
      FUN_10074a00((int)this);
    }
  }
  if (*(float *)&this->field_0xb4 < gpGlobals->time) {
    RemoveEntityFromSlowedArray((int)this);
    UTIL_Remove((int *)this);
    return;
  }
  peVar4 = this->pev;
  fStack_50 = peVar4->velocity[0] * 0.1 + peVar4->origin[0];
  fStack_4c = peVar4->velocity[1] * 0.1 + peVar4->origin[1];
  fStack_48 = peVar4->velocity[2] * 0.1 + peVar4->origin[2];
  fStack_40 = fStack_4c;
  fStack_3c = fStack_48;
  UTIL_TraceLine(peVar4->origin,&fStack_50,0,peVar4->pContainingEntity,auStack_38);
  if (1.0 <= fStack_28) goto LAB_100749ab;
  if (peStack_8 == (edict_t *)0x0) {
    peStack_8 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    if (peStack_8 != (edict_t *)0x0) goto LAB_100748cf;
  }
  else {
LAB_100748cf:
    piVar7 = peStack_8->pvPrivateData;
  }
  iVar5 = (**(code **)(*piVar7 + 0xc0))();
  if (iVar5 == 0) {
    peVar4 = this->pev;
    iVar5 = piVar7[1];
    fVar1 = peVar4->velocity[2];
    fVar2 = peVar4->velocity[1];
    fVar3 = peVar4->velocity[0];
    puVar6 = get_weapon_info(*(int *)&this->field_0x78);
    if (*(float *)(iVar5 + 0x160) <=
        (float)*(byte *)(puVar6 + 0x34) * SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3)) {
      FUN_100796a0();
      iVar5 = *piVar7;
      Vector::Vector((Vector *)&stack0xffffff88,this->pev->velocity);
      fVar8 = Vector::Length(this->pev->velocity);
      puVar6 = get_weapon_info(*(int *)&this->field_0x78);
      (**(code **)(iVar5 + 0x4c))(this->pev,(float)*(byte *)(puVar6 + 0x34) * (float)fVar8 * 0.001);
      FUN_100796c0(this->pev,this->pev);
    }
  }
LAB_100749ab:
  CTSPhysicObject::WaitThink((CTSPhysicObject *)this);
  return;
}

/* 100749c0  CTSWorldGun::WaitThink  (63 bytes)
 * void WaitThink(void)
 */
/* public: virtual void __thiscall CTSWorldGun::WaitThink(void) */

void __thiscall CTSWorldGun::WaitThink(CTSWorldGun *this)

{
                    /* 0x749c0  148  ?WaitThink@CTSWorldGun@@UAEXXZ */
  this->pev->nextthink = gpGlobals->time + 0.1;
  if (*(float *)&this->field_0xb4 < gpGlobals->time) {
    RemoveEntityFromSlowedArray((int)this);
    UTIL_Remove((int *)this);
  }
  return;
}

/* 10074a90  CTSWorldGun::Use  (33 bytes)
 * undefined Use()
 */
void __thiscall CTSWorldGun::Use(CTSWorldGun *param_1,int *param_2)

{
  if (*(float *)&param_1->field_0xbc < gpGlobals->time) {
    GetWeapon(param_1,param_2);
  }
  return;
}

/* 10074ac0  CTSWorldGun::GetWeapon  (127 bytes)
 * undefined GetWeapon(int * param_1)
 * called by: CTSWorldGun::Use, CTSWorldGun::WaitTouch
 */
void __thiscall CTSWorldGun::GetWeapon(CTSWorldGun *this,int *param_1)

{
  int iVar1;
  
  if (this->field_0xc4 == '\0') {
    iVar1 = (**(code **)(*param_1 + 0xc0))();
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*param_1 + 0xac))();
      if (((iVar1 != 0) && ((*(byte *)(param_1[1] + 0x118) & 0x80) == 0)) &&
         ((this->pev->effects & 0x80) == 0)) {
        iVar1 = CBasePlayer::PickUpWeapon
                          ((CBasePlayer *)param_1,*(int *)&this->field_0x78,
                           (undefined4 *)&this->field_0x7c,0,*(int *)&this->field_0x78 != 0x1d,'\0')
        ;
        if (iVar1 != 0) {
          this->field_0xc4 = 1;
          RemoveEntityFromSlowedArray((int)this);
          UTIL_Remove((int *)this);
        }
      }
    }
  }
  return;
}

/* 10074b40  CTSWorldGun::WaitTouch  (33 bytes)
 * void WaitTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CTSWorldGun::WaitTouch(class CBaseEntity *) */

void __thiscall CTSWorldGun::WaitTouch(CTSWorldGun *this,CBaseEntity *param_1)

{
                    /* 0x74b40  160  ?WaitTouch@CTSWorldGun@@QAEXPAVCBaseEntity@@@Z */
  if ((*(int *)&this->field_0x78 == 0x1d) ||
     ((*(byte *)(*(int *)(param_1 + 4) + 0x180) & 0x20) != 0)) {
    GetWeapon(this,(int *)param_1);
  }
  return;
}

/* 10074b70  CTSWorldGun::ShouldCollide  (168 bytes)
 * undefined ShouldCollide()
 */
bool CTSWorldGun::ShouldCollide(int param_1)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  
  pcVar2 = s_WorldGun_1009d570;
  pbVar5 = (byte *)(gpGlobals->pStringBase + **(int **)(param_1 + 4));
  pbVar4 = pbVar5;
  do {
    bVar1 = *pcVar2;
    bVar6 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_10074bb9:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_10074bbe;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar6 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_10074bb9;
    pcVar2 = pcVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10074bbe:
  if (iVar3 == 0) {
    return false;
  }
  pbVar4 = &DAT_1009d568;
  while( true ) {
    bVar1 = *pbVar4;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) break;
    if (bVar1 == 0) {
      return false;
    }
    bVar1 = pbVar4[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) break;
    pbVar4 = pbVar4 + 2;
    pbVar5 = pbVar5 + 2;
    if (bVar1 == 0) {
      return false;
    }
  }
  return 1 - bVar6 != (uint)(bVar6 != 0);
}

