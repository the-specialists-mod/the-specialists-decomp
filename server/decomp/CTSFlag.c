/* ts_i386.so - CTSFlag (15 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 0009d874  CTSFlag::CreateFlag  (257 bytes)
 * CTSFlag * CreateFlag(int * param_1, undefined4 * param_2)
 */
/* CTSFlag::CreateFlag(CBasePlayer *, s_flag_status *) */

CTSFlag * CTSFlag::CreateFlag(int *param_1,undefined4 *param_2)

{
  void **ppvVar1;
  CTSFlag *pCVar2;
  int iVar3;
  undefined4 *puVar4;
  longdouble lVar5;
  undefined4 uVar6;
  
  pCVar2 = GetClassPtr<CTSFlag>(0);
  if (pCVar2 == (CTSFlag *)0x0) {
    UTIL_ClientPrintAll(3,"WARNING:cannot create flag!\n",0,0,0,0);
    pCVar2 = (CTSFlag *)0x0;
  }
  else {
    puVar4 = (undefined4 *)&pCVar2->field_0x90;
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *param_2;
      param_2 = param_2 + 1;
      puVar4 = puVar4 + 1;
    }
    (*pCVar2->vtable[9])(pCVar2);
    *(int **)&pCVar2->field_0x8c = param_1;
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
  }
  return pCVar2;
}

/* 0009d978  CTSFlag::Spawn  (536 bytes)
 * undefined Spawn(void)
 */
/* CTSFlag::Spawn(void) */

void __thiscall CTSFlag::Spawn(CTSFlag *this)

{
  int *piVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  CTSPhysicObject::Spawn((CTSPhysicObject *)this);
  (*this->vtable[10])(this);
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,"models/briefcase.mdl");
  this->pev->movetype = 10;
  this->pev->solid = 2;
  this->pev->gravity = 0.7;
  this->pev->friction = 0.8;
  this->pev->classname = (int)"ts_flag" - (int)gpGlobals->pStringBase;
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  local_2c = 0;
  local_28 = local_2c;
  local_24 = local_2c;
  local_1c = local_2c;
  local_18 = local_2c;
  local_14 = local_2c;
  UTIL_SetSize((int)this->pev,&local_2c,&local_1c);
  *(float *)&this->field_0x88 = gpGlobals->time + 20.0;
  *(undefined4 *)&this->field_0x8c = 0;
  *(undefined4 *)&this->field_0x14 = 0xffff0000;
  *(code **)&this->field_0x18 = BounceTouch;
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = Fall;
  this->pev->nextthink = gpGlobals->time + 0.1;
  this->pev->iuser4 = 0;
  piVar1 = &this->pev->iuser4;
  *piVar1 = *piVar1 | 2;
  this->pev->renderamt = 5.0;
  this->pev->renderfx = 0x13;
  if (*(int *)&this->field_0x9c == 0) {
    this->pev->rendercolor[0] = 125.0;
    this->pev->rendercolor[1] = 165.0;
    this->pev->rendercolor[2] = 210.0;
  }
  else if (*(int *)&this->field_0x9c == 1) {
    this->pev->rendercolor[0] = 200.0;
    this->pev->rendercolor[1] = 90.0;
    this->pev->rendercolor[2] = 70.0;
  }
  else if (*(int *)&this->field_0x9c == 2) {
    this->pev->rendercolor[0] = 225.0;
    this->pev->rendercolor[1] = 205.0;
    this->pev->rendercolor[2] = 45.0;
  }
  else {
    this->pev->rendercolor[0] = 145.0;
    this->pev->rendercolor[1] = 215.0;
    this->pev->rendercolor[2] = 140.0;
  }
  this->field_0xac = 0;
  return;
}

/* 0009db94  CTSFlag::Precache  (39 bytes)
 * undefined Precache(void)
 */
/* CTSFlag::Precache(void) */

void CTSFlag::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)("models/briefcase.mdl");
  return;
}

/* 0009dbbc  CTSFlag::BounceTouch  (608 bytes)
 * undefined BounceTouch(int * param_1)
 */
/* CTSFlag::BounceTouch(CBaseEntity *) */

void CTSFlag::BounceTouch(int *param_1)

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
      if (0.98 < fStack_50) {
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

/* 0009de24  CTSFlag::Destroy  (51 bytes)
 * undefined Destroy(void)
 */
/* CTSFlag::Destroy(void) */

void __thiscall CTSFlag::Destroy(CTSFlag *this)

{
  this->field_0xac = 1;
  RemoveEntityFromSlowedArray((int)this);
  UTIL_Remove((int *)this);
  return;
}

/* 0009de58  CTSFlag::RespawnFlag  (182 bytes)
 * undefined RespawnFlag(void)
 */
/* CTSFlag::RespawnFlag(void) */

void __thiscall CTSFlag::RespawnFlag(CTSFlag *this)

{
  int *piVar1;
  char *pcVar2;
  
  piVar1 = (int *)_((EHANDLE *)&this->field_0xa4);
  if (piVar1 != (int *)0x0) {
    piVar1[3] = -0x10000;
    piVar1[4] = (int)CTSBriefcase::FlagFall;
    *(float *)(*piVar1 + 0x104) = gpGlobals->time + 1.0;
    if (*(uint *)&this->field_0x9c < 4) {
      pcVar2 = UTIL_VarArgs("%s briefcase returned",&DAT_001781c8 + *(int *)&this->field_0x9c * 0x8c
                           );
      TSHudMessageAll(0,0xff,0,4,0x1e,pcVar2);
    }
  }
  Destroy(this);
  return;
}

/* 0009df10  CTSFlag::Fall  (676 bytes)
 * undefined Fall(void)
 */
/* CTSFlag::Fall(void) */

void __thiscall CTSFlag::Fall(CTSFlag *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  entvars_t *peVar4;
  int iVar5;
  int *piVar6;
  longdouble lVar7;
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
    lVar7 = (longdouble)(*this->vtable[4])(this);
    if ((longdouble)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < lVar7 * (longdouble)3.0) {
      EMIT_SOUND_DYN((int)this->pev->pContainingEntity,6,"items/weapondrop1.wav",0x3f800000,
                     0x3f4ccccd,0,100,0.5);
      this->pev->angles[0] = 0.0;
      this->pev->angles[2] = 0.0;
      OnGround(this);
    }
  }
  if ((*(float *)&this->field_0x88 == 0.0) || (gpGlobals->time <= *(float *)&this->field_0x88)) {
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
      piVar6 = (int *)0x0;
      if (local_3c != (edict_t *)0x0) {
        piVar6 = local_3c->pvPrivateData;
      }
      iVar5 = (**(code **)(piVar6[0x18] + 200))(piVar6);
      if (iVar5 == 0) {
        peVar4 = this->pev;
        local_20 = SQRT(peVar4->velocity[2] * peVar4->velocity[2] +
                        peVar4->velocity[1] * peVar4->velocity[1] +
                        peVar4->velocity[0] * peVar4->velocity[0]);
        if (*(float *)(*piVar6 + 0x160) <= local_20 * 30.0) {
          ClearMultiDamage();
          peVar4 = this->pev;
          local_8c = peVar4->velocity[0];
          local_88 = peVar4->velocity[1];
          local_84 = peVar4->velocity[2];
          peVar4 = this->pev;
          local_20 = SQRT(peVar4->velocity[2] * peVar4->velocity[2] +
                          peVar4->velocity[1] * peVar4->velocity[1] +
                          peVar4->velocity[0] * peVar4->velocity[0]);
          (**(code **)(piVar6[0x18] + 0x54))
                    (piVar6,this->pev,local_20 * 30.0 * 0.001,&local_8c,local_6c,0x1080);
          ApplyMultiDamage(this->pev,this->pev);
        }
      }
    }
    CTSPhysicObject::WaitThink((CTSPhysicObject *)this);
  }
  else {
    RespawnFlag(this);
  }
  return;
}

/* 0009e1b8  CTSFlag::WaitThink  (97 bytes)
 * undefined WaitThink(void)
 */
/* CTSFlag::WaitThink(void) */

void __thiscall CTSFlag::WaitThink(CTSFlag *this)

{
  this->pev->nextthink = gpGlobals->time + 0.1;
  if ((*(float *)&this->field_0x88 != 0.0) && (*(float *)&this->field_0x88 < gpGlobals->time)) {
    RespawnFlag(this);
  }
  return;
}

/* 0009e21c  CTSFlag::OnGround  (184 bytes)
 * undefined OnGround(void)
 */
/* CTSFlag::OnGround(void) */

void __thiscall CTSFlag::OnGround(CTSFlag *this)

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
  local_1c = 0x41800000;
  local_14 = 0x42400000;
  local_2c = 0xc1800000;
  local_24 = 0;
  local_28 = local_2c;
  local_18 = local_1c;
  UTIL_SetSize((int)this->pev,&local_2c,&local_1c);
  *(undefined4 *)&this->field_0x14 = 0xffff0000;
  *(code **)&this->field_0x18 = WaitTouch;
  *(undefined4 *)&this->field_0xc = 0x460000;
  *(uint *)&this->field_0x10 = CONCAT22(extraout_var,0x60);
  return;
}

/* 0009e2d4  CTSFlag::CanInteract  (89 bytes)
 * bool CanInteract(int param_1)
 */
/* CTSFlag::CanInteract(CBasePlayer *) */

bool __thiscall CTSFlag::CanInteract(CTSFlag *this,int param_1)

{
  char *pcVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = true;
  if (*(int *)&this->field_0x9c != -1) {
    pcVar1 = (char *)(**(code **)(*(int *)(param_1 + 0x60) + 0xd0))(param_1);
    iVar2 = CTSGameRules::GetTeamIndex((CTSGameRules *)&TSGameRules,pcVar1);
    bVar3 = *(int *)&this->field_0x9c == iVar2;
  }
  return bVar3;
}

/* 0009e330  CTSFlag::PlayerTakeFlag  (681 bytes)
 * undefined PlayerTakeFlag(CBasePlayer * param_1)
 */
/* CTSFlag::PlayerTakeFlag(CBaseEntity *) */

void __thiscall CTSFlag::PlayerTakeFlag(CTSFlag *this,CBasePlayer *param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  
  if ((((this->field_0xac == '\0') && (iVar1 = (*param_1->vtable[0x32])(param_1), iVar1 != 0)) &&
      (iVar1 = (*param_1->vtable[0x2d])(param_1), iVar1 != 0)) && (-1 < (char)param_1->pev->effects)
     ) {
    pcVar2 = (char *)(*param_1->vtable[0x34])(param_1);
    iVar1 = CTSGameRules::GetTeamIndex((CTSGameRules *)&TSGameRules,pcVar2);
    if ((*(int *)&this->field_0x9c == -1) || (*(int *)&this->field_0x9c != iVar1)) {
      uVar4 = CBasePlayer::TakeFlag(param_1,(undefined4 *)&this->field_0x90);
      if ((char)uVar4 != '\0') {
        iVar1 = _((EHANDLE *)&this->field_0xa4);
        if ((*(int *)&this->field_0x8c == 0) && (iVar1 != 0)) {
          *(undefined1 *)(iVar1 + 100) = 0;
        }
        Destroy(this);
      }
    }
    else {
      piVar3 = (int *)_((EHANDLE *)&this->field_0xa4);
      if ((*(int *)&this->field_0x8c != 0) && (piVar3 != (int *)0x0)) {
        piVar3[3] = -0x10000;
        piVar3[4] = (int)CTSBriefcase::FlagFall;
        *(float *)(*piVar3 + 0x104) = gpGlobals->time + 1.0;
        Destroy(this);
        EMIT_SOUND_DYN((int)param_1->pev->pContainingEntity,3,"items/gunpickup2.wav",0x3f800000,
                       0x3f4ccccd,0,100,0.5);
        iVar1 = CTSGameRules::CountPlayers();
        if (1 < iVar1) {
          param_1->pev->frags = param_1->pev->frags + 5.0;
          pcVar2 = UTIL_VarArgs("%s returned the briefcase! %i #TS_Frg",
                                gpGlobals->pStringBase + param_1->pev->netname,5);
          TSHudMessageAll(0,0xff,0,4,0x1e,pcVar2);
          (*g_engfuncs.pfnMessageBegin)(2,gmsgScoreInfo,(float *)0x0,(edict_t *)0x0);
          iVar1 = (*g_engfuncs.pfnIndexOfEdict)(param_1->pev->pContainingEntity);
          (*g_engfuncs.pfnWriteByte)(iVar1);
          (*g_engfuncs.pfnWriteShort)((int)ROUND(param_1->pev->frags));
          (*g_engfuncs.pfnWriteShort)(*(int *)&param_1->field_0xb30);
          (*g_engfuncs.pfnWriteShort)(0);
          iVar1 = (**(code **)(*g_pGameRules + 0xd0))(g_pGameRules,&param_1->field_0xb48);
          (*g_engfuncs.pfnWriteShort)(iVar1 + 1);
          (*g_engfuncs.pfnMessageEnd)();
        }
      }
    }
  }
  return;
}

/* 0009e5dc  CTSFlag::Use  (37 bytes)
 * undefined Use(CTSFlag * param_1, CBasePlayer * param_2)
 */
/* CTSFlag::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CTSFlag::Use(CTSFlag *param_1,CBasePlayer *param_2)

{
  PlayerTakeFlag(param_1,param_2);
  return;
}

/* 0009e604  CTSFlag::WaitTouch  (37 bytes)
 * undefined WaitTouch(CBasePlayer * param_1)
 */
/* CTSFlag::WaitTouch(CBaseEntity *) */

void __thiscall CTSFlag::WaitTouch(CTSFlag *this,CBasePlayer *param_1)

{
  PlayerTakeFlag(this,param_1);
  return;
}

/* 0009e704  CTSFlag::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CTSFlag::ObjectCaps(void) */

undefined4 CTSFlag::ObjectCaps(void)

{
  return 0x10;
}

/* 0009e70c  CTSFlag::CanUsedTroughWalls  (3 bytes)
 * undefined1 CanUsedTroughWalls(void)
 */
/* CTSFlag::CanUsedTroughWalls(void) */

undefined1 CTSFlag::CanUsedTroughWalls(void)

{
  return 0;
}

