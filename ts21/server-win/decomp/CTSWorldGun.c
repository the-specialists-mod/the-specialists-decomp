/* mp.dll - CTSWorldGun (11 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10065040  CTSWorldGun::CreateWeapon  (175 bytes)
 * int * CreateWeapon(int param_1, undefined1 param_2, int * param_3)
 * called by: CBasePlayer::ThrowWeapon
 */
int * __cdecl CTSWorldGun::CreateWeapon(int param_1,undefined1 param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar2 = (int *)GetClassPtr<CTSWorldGun>(0);
  if (piVar2 == (int *)0x0) {
    UTIL_ClientPrintAll(3,s_WARNING_cannot_create_weapon__10099c00,0,0,0,0);
    return (int *)0x0;
  }
  *(int *)piVar2[1] = (int)s_WorldGun_100983b8 - (int)gpGlobals->pStringBase;
  iVar1 = *piVar2;
  *(undefined1 *)(piVar2 + 0x1e) = param_2;
  piVar4 = piVar2 + 0x1f;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = *param_3;
    param_3 = param_3 + 1;
    piVar4 = piVar4 + 1;
  }
  (**(code **)(iVar1 + 0xc))();
  *(undefined4 *)(piVar2[1] + 0x198) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
  if (*(float *)(param_1 + 0x168) != 0.0) {
    *(undefined4 *)(piVar2[1] + 0x254) = *(undefined4 *)(param_1 + 0x168);
    return piVar2;
  }
  *(undefined4 *)(piVar2[1] + 0x254) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x254);
  return piVar2;
}

/* 100650f0  CTSWorldGun::Spawn  (365 bytes)
 * undefined Spawn()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall CTSWorldGun::Spawn(int *param_1)

{
  float fVar1;
  edict_t *e;
  float fVar2;
  undefined4 *puVar3;
  
  FUN_10046a10((int)param_1);
  (**(code **)(*param_1 + 0x10))();
  e = *(edict_t **)(param_1[1] + 0x208);
  puVar3 = get_weapon_info((uint)*(byte *)(param_1 + 0x1e));
  (*g_engfuncs.pfnSetModel)(e,(char *)((int)puVar3 + 0x1ea));
  *(undefined4 *)(param_1[1] + 0x108) = 10;
  *(undefined4 *)(param_1[1] + 0x10c) = 2;
  *(undefined4 *)(param_1[1] + 0x11c) = 0x3f333333;
  *(undefined4 *)(param_1[1] + 0x120) = 0x3f4ccccd;
  FUN_100679a0();
  FUN_10067970();
  if (60.0 <= _DAT_10093c98) {
    fVar2 = 60.0;
  }
  else {
    fVar2 = _DAT_10093c98;
    if (_DAT_10093c98 <= 5.0) {
      fVar2 = 5.0;
    }
  }
  fVar1 = gpGlobals->time;
  param_1[5] = (int)BounceTouch;
  param_1[4] = (int)Fall;
  param_1[0x2b] = (int)(fVar2 + fVar1);
  *(float *)(param_1[1] + 0x104) = gpGlobals->time + 0.1;
  *(undefined4 *)(param_1[1] + 0x250) = 0;
  *(uint *)(param_1[1] + 0x250) = *(uint *)(param_1[1] + 0x250) | 1;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  param_1[0x2d] = (int)(gpGlobals->time + 0.5);
  return;
}

/* 10065260  CTSWorldGun::Precache  (1 bytes)
 * undefined Precache()
 */
void CTSWorldGun::Precache(void)

{
  return;
}

/* 10065270  CTSWorldGun::BounceTouch  (721 bytes)
 * void BounceTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CTSWorldGun::BounceTouch(class CBaseEntity *) */

void __thiscall CTSWorldGun::BounceTouch(CTSWorldGun *this,CBaseEntity *param_1)

{
  float fVar1;
  float fVar2;
  entvars_t *peVar3;
  edict_t *peVar4;
  int *piVar5;
  vec_t *pvVar6;
  undefined4 *puVar7;
  void *this_00;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  int *in_stack_0000000c;
  float local_44;
  float local_40;
  undefined4 local_38 [2];
  undefined4 auStack_30 [7];
  float local_14;
  float local_10;
  float local_c;
  
                    /* 0x65270  11  ?BounceTouch@CTSWorldGun@@QAEXPAVCBaseEntity@@@Z */
  this->pev->velocity[2] = this->pev->velocity[2] * 0.3;
  peVar3 = this->pev;
  bVar11 = peVar3->fuser1 == 0.0;
  if ((peVar3->flags & 0x200U) == 0) {
    if (bVar11) {
      fVar1 = 1.0;
    }
    else {
      fVar1 = peVar3->fuser1;
    }
    if (fVar1 * 18.0 <
        SQRT(peVar3->velocity[2] * peVar3->velocity[2] +
             peVar3->velocity[1] * peVar3->velocity[1] + peVar3->velocity[0] * peVar3->velocity[0]))
    {
      FUN_100678a0(local_38);
      if ((this->field_0xb0 != '\0') && (0.98 < (local_10 + local_14) * 0.0 + local_c)) {
        this->field_0xb0 = 1;
        peVar4 = this->pev->pContainingEntity;
        iVar8 = (*g_engfuncs.pfnRandomLong)(0,10);
        EMIT_SOUND_DYN(this_00,peVar4,6,s_items_weapondrop1_wav_10099c20,0x3f800000,0x3f4ccccd,0,
                       iVar8 + 100);
      }
    }
  }
  else {
    if (bVar11) {
      fVar1 = 1.0;
    }
    else {
      fVar1 = peVar3->fuser1;
    }
    pvVar6 = peVar3->velocity;
    if (SQRT(peVar3->velocity[0] * peVar3->velocity[0] + peVar3->velocity[1] * peVar3->velocity[1])
        <= fVar1 * 40.0) {
      fVar1 = peVar3->velocity[1];
      fVar2 = peVar3->velocity[2];
      *pvVar6 = *pvVar6 * 0.7;
      peVar3->velocity[1] = fVar1 * 0.7;
      peVar3->velocity[2] = fVar2 * 0.7;
      peVar3 = this->pev;
      pvVar6 = peVar3->avelocity;
      local_44 = *pvVar6 * 0.7;
      local_40 = peVar3->avelocity[1] * 0.7;
      fVar1 = peVar3->avelocity[2] * 0.7;
    }
    else {
      fVar1 = peVar3->velocity[1];
      fVar2 = peVar3->velocity[2];
      *pvVar6 = *pvVar6 * 0.9;
      peVar3->velocity[1] = fVar1 * 0.9;
      peVar3->velocity[2] = fVar2 * 0.9;
      peVar3 = this->pev;
      pvVar6 = peVar3->avelocity;
      local_44 = *pvVar6 * 0.9;
      local_40 = peVar3->avelocity[1] * 0.9;
      fVar1 = peVar3->avelocity[2] * 0.9;
    }
    *pvVar6 = local_44;
    pvVar6[1] = local_40;
    pvVar6[2] = fVar1;
    this->pev->angles[2] = 0.0;
  }
  piVar5 = (int *)in_stack_0000000c[1];
  iVar8 = 0xf;
  bVar11 = true;
  pcVar9 = gpGlobals->pStringBase + *piVar5;
  pcVar10 = s_func_breakable_10096ee4;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    bVar11 = *pcVar9 == *pcVar10;
    pcVar9 = pcVar9 + 1;
    pcVar10 = pcVar10 + 1;
  } while (bVar11);
  if ((bVar11) &&
     (puVar7 = get_weapon_info((uint)(byte)this->field_0x78),
     (float)piVar5[0x58] <= (float)(*(byte *)((int)puVar7 + 0xca) + 0x32))) {
    FUN_1006a2f0();
    iVar8 = *in_stack_0000000c;
    FUN_100678a0(auStack_30);
    FUN_1000a540(&stack0xffffff9c,this->pev->velocity);
    (**(code **)(iVar8 + 0x34))(this->pev,0x42480000);
    FUN_1006a310(this->pev,this->pev);
  }
  return;
}

/* 10065550  CTSWorldGun::Fall  (237 bytes)
 * void Fall(void)
 */
/* public: void __thiscall CTSWorldGun::Fall(void) */

void __thiscall CTSWorldGun::Fall(CTSWorldGun *this)

{
  float fVar1;
  entvars_t *this_00;
  
                    /* 0x65550  45  ?Fall@CTSWorldGun@@QAEXXZ */
  this->pev->nextthink = gpGlobals->time + 0.1;
  this_00 = this->pev;
  if ((this_00->flags & 0x200U) != 0) {
    if (this_00->fuser1 == 0.0) {
      fVar1 = 1.0;
    }
    else {
      fVar1 = this_00->fuser1;
    }
    if (SQRT(this_00->velocity[2] * this_00->velocity[2] +
             this_00->velocity[1] * this_00->velocity[1] +
             this_00->velocity[0] * this_00->velocity[0]) < fVar1 * 3.0) {
      EMIT_SOUND_DYN(this_00,this_00->pContainingEntity,6,s_items_weapondrop1_wav_10099c20,
                     0x3f800000,0x3f4ccccd,0,100);
      this->pev->angles[0] = 0.0;
      this->pev->angles[2] = 0.0;
      FUN_10065680((int)this);
    }
  }
  if (*(float *)&this->field_0xac < gpGlobals->time) {
    RemoveEntityFromSlowedArray((int)this);
    UTIL_Remove((int)this);
    return;
  }
  CTSPhysicObject::WaitThink((CTSPhysicObject *)this);
  return;
}

/* 10065640  CTSWorldGun::WaitThink  (63 bytes)
 * void WaitThink(void)
 */
/* public: virtual void __thiscall CTSWorldGun::WaitThink(void) */

void __thiscall CTSWorldGun::WaitThink(CTSWorldGun *this)

{
                    /* 0x65640  138  ?WaitThink@CTSWorldGun@@UAEXXZ */
  this->pev->nextthink = gpGlobals->time + 0.1;
  if (*(float *)&this->field_0xac < gpGlobals->time) {
    RemoveEntityFromSlowedArray((int)this);
    UTIL_Remove((int)this);
  }
  return;
}

/* 10065710  CTSWorldGun::Use  (35 bytes)
 * undefined Use()
 */
void __thiscall CTSWorldGun::Use(CTSWorldGun *param_1,int *param_2)

{
  if (*(float *)&param_1->field_0xb4 < gpGlobals->time) {
    GetWeapon(param_1,param_2);
  }
  return;
}

/* 10065740  CTSWorldGun::GetWeapon  (105 bytes)
 * undefined GetWeapon(int * param_1)
 * called by: CTSWorldGun::Use, CTSWorldGun::WaitTouch
 */
void __thiscall CTSWorldGun::GetWeapon(CTSWorldGun *this,int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xa8))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x94))();
    if (((iVar1 != 0) && ((*(byte *)(param_1[1] + 0x118) & 0x80) == 0)) &&
       ((this->pev->effects & 0x80) == 0)) {
      iVar1 = CBasePlayer::PickUpWeapon
                        ((CBasePlayer *)param_1,(uint)(byte)this->field_0x78,
                         (undefined4 *)&this->field_0x7c,0,'\x01');
      if (iVar1 != 0) {
        RemoveEntityFromSlowedArray((int)this);
        UTIL_Remove((int)this);
      }
    }
  }
  return;
}

/* 100657b0  CTSWorldGun::WaitTouch  (28 bytes)
 * void WaitTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CTSWorldGun::WaitTouch(class CBaseEntity *) */

void __thiscall CTSWorldGun::WaitTouch(CTSWorldGun *this,CBaseEntity *param_1)

{
                    /* 0x657b0  148  ?WaitTouch@CTSWorldGun@@QAEXPAVCBaseEntity@@@Z */
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x180) & 0x20) != 0) {
    GetWeapon(this,(int *)param_1);
    return;
  }
  return;
}

/* 10066550  CTSWorldGun::ObjectCaps  (6 bytes)
 * undefined ObjectCaps()
 */
undefined4 CTSWorldGun::ObjectCaps(void)

{
  return 0x10;
}

/* 10066560  CTSWorldGun::CanUsedTroughWalls  (3 bytes)
 * undefined CanUsedTroughWalls()
 */
undefined1 CTSWorldGun::CanUsedTroughWalls(void)

{
  return 0;
}

