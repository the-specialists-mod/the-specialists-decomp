/* mp.dll - CTSFlag (11 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10072000  CTSFlag::CreateFlag  (194 bytes)
 * int * CreateFlag(int * param_1, int * param_2)
 * called by: CBasePlayer::DropFlag, CTSBriefcase::FlagFall
 */
int * __cdecl CTSFlag::CreateFlag(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  
  piVar2 = (int *)GetClassPtr<CTSFlag>(0);
  if (piVar2 == (int *)0x0) {
    UTIL_ClientPrintAll(3,s_WARNING_cannot_create_flag__100a5af8,0,0,0,0);
    return (int *)0x0;
  }
  iVar1 = *piVar2;
  piVar4 = piVar2 + 0x20;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = *param_2;
    param_2 = param_2 + 1;
    piVar4 = piVar4 + 1;
  }
  (**(code **)(iVar1 + 0x1c))();
  piVar2[0x1f] = (int)param_1;
  if (param_1 != (int *)0x0) {
    *(undefined4 *)(piVar2[1] + 0x198) = *(undefined4 *)(param_1[1] + 0x208);
    if ((float)param_1[0x5b] != 0.0) {
      (**(code **)(*piVar2 + 0xc))(param_1[0x5b],0);
      return piVar2;
    }
    iVar1 = *piVar2;
    fVar5 = (float10)(**(code **)(*param_1 + 8))(0);
    (**(code **)(iVar1 + 0xc))((float)fVar5);
    return piVar2;
  }
  *(undefined4 *)(piVar2[1] + 0x198) = 0;
  *(undefined4 *)(piVar2[1] + 0x254) = 0x3f800000;
  return piVar2;
}

/* 100720d0  CTSFlag::Spawn  (529 bytes)
 * undefined Spawn()
 */
void __fastcall CTSFlag::Spawn(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  CTSPhysicObject::Spawn((int)param_1);
  (**(code **)(*param_1 + 0x20))();
  (*g_engfuncs.pfnSetModel)(*(edict_t **)(param_1[1] + 0x208),s_models_briefcase_mdl_100a5b18);
  *(undefined4 *)(param_1[1] + 0x108) = 10;
  *(undefined4 *)(param_1[1] + 0x10c) = 2;
  *(undefined4 *)(param_1[1] + 0x11c) = 0x3f333333;
  *(undefined4 *)(param_1[1] + 0x120) = 0x3f4ccccd;
  *(int *)param_1[1] = (int)s_ts_flag_100a3f18 - (int)gpGlobals->pStringBase;
  UTIL_SetOrigin(param_1[1],param_1[1] + 8);
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  uStack_4 = 0;
  UTIL_SetSize(param_1[1],&uStack_c,&uStack_18);
  fVar1 = gpGlobals->time;
  param_1[0x1f] = 0;
  param_1[5] = (int)BounceTouch;
  param_1[4] = (int)Fall;
  param_1[0x1e] = (int)(fVar1 + 20.0);
  *(float *)(param_1[1] + 0x104) = gpGlobals->time + 0.1;
  *(undefined4 *)(param_1[1] + 0x250) = 0;
  *(uint *)(param_1[1] + 0x250) = *(uint *)(param_1[1] + 0x250) | 2;
  *(undefined4 *)(param_1[1] + 0x14c) = 0x40a00000;
  *(undefined4 *)(param_1[1] + 0x15c) = 0x13;
  iVar2 = param_1[0x23];
  if (iVar2 == 0) {
    *(undefined4 *)(param_1[1] + 0x150) = 0x42fa0000;
    *(undefined4 *)(param_1[1] + 0x154) = 0x43250000;
    *(undefined4 *)(param_1[1] + 0x158) = 0x43520000;
    *(undefined1 *)(param_1 + 0x27) = 0;
    return;
  }
  if (iVar2 == 1) {
    *(undefined4 *)(param_1[1] + 0x150) = 0x43480000;
    *(undefined4 *)(param_1[1] + 0x154) = 0x42b40000;
    *(undefined4 *)(param_1[1] + 0x158) = 0x428c0000;
    *(undefined1 *)(param_1 + 0x27) = 0;
    return;
  }
  if (iVar2 == 2) {
    *(undefined4 *)(param_1[1] + 0x150) = 0x43610000;
    *(undefined4 *)(param_1[1] + 0x154) = 0x434d0000;
    *(undefined4 *)(param_1[1] + 0x158) = 0x42340000;
    *(undefined1 *)(param_1 + 0x27) = 0;
    return;
  }
  *(undefined4 *)(param_1[1] + 0x150) = 0x43110000;
  *(undefined4 *)(param_1[1] + 0x154) = 0x43570000;
  *(undefined4 *)(param_1[1] + 0x158) = 0x430c0000;
  *(undefined1 *)(param_1 + 0x27) = 0;
  return;
}

/* 100722f0  CTSFlag::Precache  (13 bytes)
 * undefined Precache()
 */
void CTSFlag::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)(s_models_briefcase_mdl_100a5b18);
  return;
}

/* 10072300  CTSFlag::BounceTouch  (720 bytes)
 * void BounceTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CTSFlag::BounceTouch(class CBaseEntity *) */

void __thiscall CTSFlag::BounceTouch(CTSFlag *this,CBaseEntity *param_1)

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
  
                    /* 0x72300  8  ?BounceTouch@CTSFlag@@QAEXPAVCBaseEntity@@@Z */
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
      if (0.98 < VStack_4c.z) {
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

/* 100725d0  CTSFlag::Destroy  (27 bytes)
 * undefined Destroy(int * param_1)
 * called by: CTSFlag::PlayerTakeFlag, CTSFlag::RespawnFlag
 */
void __fastcall CTSFlag::Destroy(int *param_1)

{
  *(undefined1 *)(param_1 + 0x27) = 1;
  RemoveEntityFromSlowedArray((int)param_1);
  UTIL_Remove(param_1);
  return;
}

/* 100725f0  CTSFlag::RespawnFlag  (125 bytes)
 * undefined RespawnFlag(int * param_1)
 * called by: CTSFlag::Fall, CTSFlag::WaitThink, CTSGameRules::RespawnEntities
 */
void __fastcall CTSFlag::RespawnFlag(int *param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = EHANDLE::operator->((uint *)(param_1 + 0x25));
  if (iVar1 != 0) {
    *(code **)(iVar1 + 0x10) = CTSBriefcase::FlagFall;
    *(float *)(*(int *)(iVar1 + 4) + 0x104) = gpGlobals->time + 1.0;
    if ((-1 < param_1[0x23]) && (param_1[0x23] < 4)) {
      pcVar2 = UTIL_VarArgs((byte_conflict *)s__s_briefcase_returned_100a5b48);
      TSHudMessageAll(0,0xff,0,4,0x1e,pcVar2);
    }
  }
  Destroy(param_1);
  return;
}

/* 10072670  CTSFlag::Fall  (544 bytes)
 * void Fall(void)
 */
/* public: void __thiscall CTSFlag::Fall(void) */

void __thiscall CTSFlag::Fall(CTSFlag *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  entvars_t *peVar4;
  edict_t *this_00;
  int iVar5;
  int *piVar6;
  float10 fVar7;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [16];
  float fStack_28;
  edict_t *peStack_8;
  
                    /* 0x72670  45  ?Fall@CTSFlag@@QAEXXZ */
  piVar6 = (int *)0x0;
  this->pev->nextthink = gpGlobals->time + 0.1;
  peVar4 = this->pev;
  if ((peVar4->flags & 0x200U) != 0) {
    fVar1 = peVar4->velocity[2];
    fVar2 = peVar4->velocity[1];
    fVar3 = peVar4->velocity[0];
    fVar7 = (float10)(*this->vtable[2])();
    if ((float10)SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3) < fVar7 * (float10)3.0) {
      this_00 = this->pev->pContainingEntity;
      EMIT_SOUND_DYN(this_00,this_00,6,s_items_weapondrop1_wav_100a5b30,0x3f800000,0x3f4ccccd,0);
      this->pev->angles[0] = 0.0;
      this->pev->angles[2] = 0.0;
      FUN_100728d0((int)this);
    }
  }
  if ((*(float *)&this->field_0x78 != 0.0) && (*(float *)&this->field_0x78 < gpGlobals->time)) {
    RespawnFlag((int *)this);
    return;
  }
  peVar4 = this->pev;
  fStack_50 = peVar4->velocity[0] * 0.1 + peVar4->origin[0];
  fStack_4c = peVar4->velocity[1] * 0.1 + peVar4->origin[1];
  fStack_48 = peVar4->velocity[2] * 0.1 + peVar4->origin[2];
  fStack_40 = fStack_4c;
  fStack_3c = fStack_48;
  UTIL_TraceLine(peVar4->origin,&fStack_50,0,peVar4->pContainingEntity,auStack_38);
  if (1.0 <= fStack_28) goto LAB_10072882;
  if (peStack_8 == (edict_t *)0x0) {
    peStack_8 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    if (peStack_8 != (edict_t *)0x0) goto LAB_100727e4;
  }
  else {
LAB_100727e4:
    piVar6 = peStack_8->pvPrivateData;
  }
  iVar5 = (**(code **)(*piVar6 + 0xc0))();
  if ((iVar5 == 0) &&
     (peVar4 = this->pev,
     *(float *)(piVar6[1] + 0x160) <=
     SQRT(peVar4->velocity[2] * peVar4->velocity[2] +
          peVar4->velocity[1] * peVar4->velocity[1] + peVar4->velocity[0] * peVar4->velocity[0]) *
     30.0)) {
    FUN_100796a0();
    iVar5 = *piVar6;
    Vector::Vector((Vector *)&stack0xffffff8c,this->pev->velocity);
    fVar7 = Vector::Length(this->pev->velocity);
    (**(code **)(iVar5 + 0x4c))(this->pev,(float)(fVar7 * (float10)0.03));
    FUN_100796c0(this->pev,this->pev);
  }
LAB_10072882:
  CTSPhysicObject::WaitThink((CTSPhysicObject *)this);
  return;
}

/* 10072890  CTSFlag::WaitThink  (61 bytes)
 * void WaitThink(void)
 */
/* public: virtual void __thiscall CTSFlag::WaitThink(void) */

void __thiscall CTSFlag::WaitThink(CTSFlag *this)

{
                    /* 0x72890  134  ?WaitThink@CTSFlag@@UAEXXZ */
  this->pev->nextthink = gpGlobals->time + 0.1;
  if ((*(float *)&this->field_0x78 != 0.0) && (*(float *)&this->field_0x78 < gpGlobals->time)) {
    RespawnFlag((int *)this);
    return;
  }
  return;
}

/* 10072960  CTSFlag::PlayerTakeFlag  (512 bytes)
 * undefined PlayerTakeFlag(int * param_1)
 * called by: CTSFlag::Use, CTSFlag::WaitTouch
 */
void __thiscall CTSFlag::PlayerTakeFlag(CTSFlag *this,int *param_1)

{
  int iVar1;
  byte_conflict *pbVar2;
  char *pcVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 uStack0000000c;
  int *piStack00000018;
  
  if (this->field_0x9c == '\0') {
    iVar1 = (**(code **)(*param_1 + 0xc0))();
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*param_1 + 0xac))();
      if ((iVar1 != 0) && ((*(byte *)(param_1[1] + 0x118) & 0x80) == 0)) {
        pbVar2 = (byte_conflict *)(**(code **)(*param_1 + 200))();
        iVar1 = CTSGameRules::GetTeamIndex((CTSGameRules *)&TSGameRules,pbVar2);
        if ((*(int *)&this->field_0x8c == -1) || (*(int *)&this->field_0x8c != iVar1)) {
          uVar4 = CBasePlayer::TakeFlag((CBasePlayer *)param_1,(undefined4 *)&this->field_0x80);
          if ((char)uVar4 != '\0') {
            iVar1 = EHANDLE::operator->((uint *)&this->field_0x94);
            if ((*(int *)&this->field_0x7c == 0) && (iVar1 != 0)) {
              *(undefined1 *)(iVar1 + 0x54) = 0;
            }
            Destroy((int *)this);
          }
        }
        else {
          iVar1 = EHANDLE::operator->((uint *)&this->field_0x94);
          if ((*(int *)&this->field_0x7c != 0) && (iVar1 != 0)) {
            *(code **)(iVar1 + 0x10) = CTSBriefcase::FlagFall;
            *(float *)(*(int *)(iVar1 + 4) + 0x104) = gpGlobals->time + 1.0;
            Destroy((int *)this);
            EMIT_SOUND_DYN(*(void **)(param_1[1] + 0x208),*(void **)(param_1[1] + 0x208),3,
                           s_items_gunpickup2_wav_1009f7a0,0x3f800000,0x3f4ccccd,0);
            iVar1 = FUN_1004f150();
            if (1 < iVar1) {
              *(float *)(param_1[1] + 0x164) = *(float *)(param_1[1] + 0x164) + 5.0;
              pcVar3 = UTIL_VarArgs((byte_conflict *)s__s_returned_the_briefcase___i__T_100a5b60);
              TSHudMessageAll(0,0xff,0,4,0x1e,pcVar3);
              (*g_engfuncs.pfnMessageBegin)(2,DAT_100d9718,(float *)0x0,(edict_t *)0x0);
              iVar1 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_1[1] + 0x208));
              (*g_engfuncs.pfnWriteByte)(iVar1);
              lVar5 = __ftol();
              (*g_engfuncs.pfnWriteShort)((int)lVar5);
              uStack0000000c = 0x10072af2;
              (*g_engfuncs.pfnWriteShort)(param_1[0x2c7]);
              uStack0000000c = 0x10072afa;
              (*g_engfuncs.pfnWriteShort)(0);
              piStack00000018 = param_1 + 0x2cd;
              iVar1 = (**(code **)(*g_pGameRules + 200))();
              (*g_engfuncs.pfnWriteShort)(iVar1 + 1);
              piStack00000018 = (int *)0x10072b23;
              (*g_engfuncs.pfnMessageEnd)();
              return;
            }
          }
        }
      }
    }
  }
  return;
}

/* 10072b60  CTSFlag::Use  (13 bytes)
 * undefined Use()
 */
void __thiscall CTSFlag::Use(CTSFlag *param_1,int *param_2)

{
  PlayerTakeFlag(param_1,param_2);
  return;
}

/* 10072b70  CTSFlag::WaitTouch  (13 bytes)
 * void WaitTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CTSFlag::WaitTouch(class CBaseEntity *) */

void __thiscall CTSFlag::WaitTouch(CTSFlag *this,CBaseEntity *param_1)

{
                    /* 0x72b70  152  ?WaitTouch@CTSFlag@@QAEXPAVCBaseEntity@@@Z */
  PlayerTakeFlag(this,(int *)param_1);
  return;
}

