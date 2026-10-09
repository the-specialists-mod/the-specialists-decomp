/* ts_i386.so - CTSGroundWeapon (14 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000a1950  CTSGroundWeapon::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CTSGroundWeapon::Save(CSave &) */

undefined4 __thiscall CTSGroundWeapon::Save(CTSGroundWeapon *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CTSGroundWeapon",(int)this,(int *)m_SaveData,3);
  }
  return uVar2;
}

/* 000a19a0  CTSGroundWeapon::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CTSGroundWeapon::Restore(CRestore &) */

undefined4 __thiscall CTSGroundWeapon::Restore(CTSGroundWeapon *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CTSGroundWeapon",(int)this,(int)m_SaveData,3);
  }
  return uVar2;
}

/* 000a19f0  CTSGroundWeapon::KeyValue  (331 bytes)
 * undefined KeyValue(int param_1)
 */
/* CTSGroundWeapon::KeyValue(KeyValueData_s *) */

void __thiscall CTSGroundWeapon::KeyValue(CTSGroundWeapon *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"tsweaponid");
  if (iVar1 == 0) {
    uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
    *(undefined4 *)&this->field_0xa4 = uVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 4),"wduration");
    if (iVar1 == 0) {
      uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
      *(undefined4 *)&this->field_0xa0 = uVar2;
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      iVar1 = strcmp(*(char **)(param_1 + 4),"wextraclip");
      if (iVar1 == 0) {
        uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
        *(undefined4 *)&this->field_0xa8 = uVar2;
        *(undefined4 *)(param_1 + 0xc) = 1;
      }
      else {
        iVar1 = strcmp(*(char **)(param_1 + 4),"buyable");
        if (iVar1 == 0) {
          iVar1 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
          this->field_0xb0 = iVar1 != 0;
          *(undefined4 *)(param_1 + 0xc) = 1;
        }
        else {
          iVar1 = strcmp(*(char **)(param_1 + 4),"attackerteam");
          if (iVar1 == 0) {
            uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
            *(undefined4 *)&this->field_0xac = uVar2;
            *(undefined4 *)(param_1 + 0xc) = 1;
          }
          else {
            *(undefined4 *)(param_1 + 0xc) = 0;
          }
        }
      }
    }
  }
  return;
}

/* 000a1b40  CTSGroundWeapon::Spawn  (398 bytes)
 * undefined Spawn(void)
 */
/* CTSGroundWeapon::Spawn(void) */

void __thiscall CTSGroundWeapon::Spawn(CTSGroundWeapon *this)

{
  int *piVar1;
  edict_t *e;
  char cVar2;
  char cVar3;
  char cVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  (*this->vtable[10])(this);
  pcVar5 = (char *)get_weapon_info(*(uint *)&this->field_0xa4);
  if (*pcVar5 == '\0') {
    *(undefined4 *)&this->field_0xc = 0xffff0000;
    *(code **)&this->field_0x10 = CBaseEntity::SUB_Remove;
    this->pev->nextthink = gpGlobals->time + 0.1;
  }
  else {
    if ((*(int *)(pcVar5 + 0xcc) != -1) && (pcVar5[0x348] == '\x04')) {
      cVar2 = pcVar5[0xcd];
      cVar3 = pcVar5[0xce];
      cVar4 = pcVar5[0xcf];
      this->field_0xa4 = pcVar5[0xcc];
      this->field_0xa5 = cVar2;
      this->field_0xa6 = cVar3;
      this->field_0xa7 = cVar4;
    }
    e = this->pev->pContainingEntity;
    puVar6 = get_weapon_info(*(uint *)&this->field_0xa4);
    (*g_engfuncs.pfnSetModel)(e,(char *)((int)puVar6 + 0x1f2));
    if ((this->pev->spawnflags & 0x10) == 0) {
      this->pev->movetype = 6;
    }
    else {
      this->pev->movetype = 5;
    }
    this->pev->solid = 2;
    UTIL_SetOrigin((int)this->pev,this->pev->origin);
    local_4c = 0;
    local_48 = local_4c;
    local_44 = local_4c;
    local_3c = local_4c;
    local_38 = local_4c;
    local_34 = local_4c;
    UTIL_SetSize((int)this->pev,&local_4c,&local_3c);
    *(undefined4 *)&this->field_0x14 = 0;
    *(undefined4 *)&this->field_0x18 = 0;
    *(undefined4 *)&this->field_0xc = 0xffff0000;
    *(code **)&this->field_0x10 = Fall;
    this->pev->nextthink = gpGlobals->time + 0.1;
    this->pev->iuser4 = 0;
    piVar1 = &this->pev->iuser4;
    *piVar1 = *piVar1 | 2;
    this->field_0x64 = 0;
  }
  return;
}

/* 000a1cd4  CTSGroundWeapon::Precache  (1 bytes)
 * undefined Precache(void)
 */
/* CTSGroundWeapon::Precache(void) */

void CTSGroundWeapon::Precache(void)

{
  return;
}

/* 000a1cd8  CTSGroundWeapon::PutOnWall  (1139 bytes)
 * undefined PutOnWall(void)
 */
/* CTSGroundWeapon::PutOnWall(void) */

void __thiscall CTSGroundWeapon::PutOnWall(CTSGroundWeapon *this)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  float *pfVar6;
  vec_t *pvVar7;
  undefined2 in_FPUControlWord;
  longdouble lVar8;
  int local_10c;
  int local_d8;
  int local_d0;
  float local_cc [4];
  float local_bc [7];
  float local_a0;
  float local_9c [4];
  float local_8c [7];
  undefined4 local_70;
  float local_6c [4];
  undefined1 local_5c [16];
  float local_4c;
  float local_48 [4];
  float local_38 [3];
  edict_t *local_2c;
  
  local_d0 = 9999;
  local_9c[0] = g_vecZero;
  local_9c[1] = DAT_00190ef0;
  local_9c[2] = DAT_00190ef4;
  local_70 = CONCAT22(local_70._2_2_,in_FPUControlWord);
  local_d8 = 0;
  local_10c = 0;
  local_8c[0] = local_9c[0];
  local_8c[1] = local_9c[1];
  local_8c[2] = local_9c[2];
  local_6c[2] = local_9c[2];
  do {
    lVar8 = (longdouble)fcos((longdouble)0.017453292519943295 * (longdouble)local_10c);
    local_6c[0] = (float)lVar8;
    lVar8 = (longdouble)fsin((longdouble)0.017453292519943295 * (longdouble)local_10c);
    local_6c[1] = (float)lVar8;
    local_a0 = SQRT(local_6c[2] * local_6c[2] +
                    local_6c[1] * local_6c[1] + local_6c[0] * local_6c[0]);
    pfVar5 = local_bc;
    pfVar6 = local_6c;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar6 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar6 = pfVar6 + 1;
    }
    peVar1 = this->pev;
    local_cc[0] = local_6c[0] * 1024.0;
    local_cc[1] = local_6c[1] * 1024.0;
    local_cc[2] = local_6c[2] * 1024.0;
    local_bc[0] = peVar1->origin[0] + local_cc[0];
    local_bc[1] = peVar1->origin[1] + local_cc[1];
    local_bc[2] = peVar1->origin[2] + local_cc[2];
    UTIL_TraceLine(this->pev->origin,local_bc,1,peVar1->pContainingEntity,local_5c);
    if (local_4c < 1.0) {
      peVar2 = local_2c;
      if (local_2c == (edict_t *)0x0) {
        peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
      }
      piVar4 = (int *)0x0;
      if (peVar2 != (edict_t *)0x0) {
        piVar4 = peVar2->pvPrivateData;
      }
      if ((piVar4 == (int *)0x0) ||
         ((*(float *)(*piVar4 + 0x16c) != 1.0 && (-1 < *(char *)(*piVar4 + 0x118))))) {
        peVar1 = this->pev;
        local_cc[0] = peVar1->origin[0] - local_48[0];
        local_cc[1] = peVar1->origin[1] - local_48[1];
        local_cc[2] = peVar1->origin[2] - local_48[2];
        local_a0 = SQRT(local_cc[2] * local_cc[2] +
                        local_cc[1] * local_cc[1] + local_cc[0] * local_cc[0]);
        if (local_a0 < (float)local_d0) {
          local_70 = CONCAT22(local_70._2_2_,in_FPUControlWord);
          local_d0 = (int)ROUND(local_a0);
          pfVar5 = local_38;
          pfVar6 = local_8c;
          for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar6 = *pfVar5;
            pfVar5 = pfVar5 + 1;
            pfVar6 = pfVar6 + 1;
          }
          pfVar5 = local_48;
          pfVar6 = local_9c;
          for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar6 = *pfVar5;
            pfVar5 = pfVar5 + 1;
            pfVar6 = pfVar6 + 1;
          }
        }
      }
    }
    local_10c = local_10c + 0x2d;
    local_d8 = local_d8 + 1;
  } while (local_d8 < 8);
  if (local_d0 < 9999) {
    local_bc[0] = local_8c[0] * 2.0;
    local_bc[1] = local_8c[1] * 2.0;
    local_bc[2] = local_8c[2] * 2.0;
    local_cc[0] = local_9c[0] + local_8c[0] * 2.0;
    local_cc[1] = local_9c[1] + local_8c[1] * 2.0;
    local_cc[2] = local_9c[2] + local_8c[2] * 2.0;
    pfVar5 = local_cc;
    pvVar7 = this->pev->origin;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pvVar7 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pvVar7 = pvVar7 + 1;
    }
    UTIL_VecToAngles(local_cc,local_8c);
    peVar1 = this->pev;
    pfVar5 = local_cc;
    pfVar6 = local_bc;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar6 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar6 = pfVar6 + 1;
    }
    pfVar5 = local_bc;
    pvVar7 = peVar1->angles;
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pvVar7 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pvVar7 = pvVar7 + 1;
    }
    this->pev->angles[0] = this->pev->angles[0] + 90.0;
  }
  else {
    this->pev->angles[2] = 90.0;
  }
  return;
}

/* 000a2150  CTSGroundWeapon::Fall  (228 bytes)
 * undefined Fall(void)
 */
/* CTSGroundWeapon::Fall(void) */

void __thiscall CTSGroundWeapon::Fall(CTSGroundWeapon *this)

{
  this->pev->nextthink = gpGlobals->time + 0.5;
  if ((this->pev->spawnflags & 0x10) == 0) {
    if (((this->pev->flags & 0x200) == 0) && (this->field_0x64 == '\0')) {
      return;
    }
    EMIT_SOUND_DYN((int)this->pev->pContainingEntity,6,"items/weapondrop1.wav",0x3f800000,0x3f4ccccd
                   ,0,100,0.5);
    this->pev->angles[0] = 0.0;
    this->pev->angles[2] = 0.0;
  }
  else {
    if (this->field_0x64 == '\0') {
      PutOnWall(this);
    }
    EMIT_SOUND_DYN((int)this->pev->pContainingEntity,6,"items/weapondrop1.wav",0x3f800000,0x3f4ccccd
                   ,0,100,0.5);
  }
  (*this->vtable[0x45])(this);
  this->field_0x64 = 1;
  return;
}

/* 000a2238  CTSGroundWeapon::WaitThink  (49 bytes)
 * undefined WaitThink(void)
 */
/* CTSGroundWeapon::WaitThink(void) */

void __thiscall CTSGroundWeapon::WaitThink(CTSGroundWeapon *this)

{
  this->pev->nextthink = gpGlobals->time + 1.0;
  return;
}

/* 000a226c  CTSGroundWeapon::OnGround  (158 bytes)
 * undefined OnGround(void)
 */
/* CTSGroundWeapon::OnGround(void) */

void __thiscall CTSGroundWeapon::OnGround(CTSGroundWeapon *this)

{
  int *piVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  this->pev->solid = 1;
  piVar1 = &this->pev->effects;
  *piVar1 = *piVar1 & 0xffffff7f;
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  local_1c = 0x40800000;
  local_2c = 0xc0800000;
  local_28 = local_2c;
  local_24 = local_2c;
  local_18 = local_1c;
  local_14 = local_1c;
  UTIL_SetSize((int)this->pev,&local_2c,&local_1c);
  *(undefined4 *)&this->field_0x14 = 0xffff0000;
  *(code **)&this->field_0x18 = WaitTouch;
  *(undefined4 *)&this->field_0xc = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  return;
}

/* 000a230c  CTSGroundWeapon::Use  (25 bytes)
 * undefined Use(int param_1, undefined4 param_2)
 */
/* CTSGroundWeapon::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CTSGroundWeapon::Use(int param_1,undefined4 param_2)

{
  (**(code **)(*(int *)(param_1 + 0x60) + 0x118))(param_1,param_2);
  return;
}

/* 000a2328  CTSGroundWeapon::GetWeapon  (926 bytes)
 * undefined GetWeapon(CBasePlayer * param_1)
 */
/* CTSGroundWeapon::GetWeapon(CBaseEntity *) */

void __thiscall CTSGroundWeapon::GetWeapon(CTSGroundWeapon *this,CBasePlayer *param_1)

{
  int *piVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  
  iVar4 = (*param_1->vtable[0x32])(param_1);
  if ((((iVar4 != 0) && (iVar4 = (*param_1->vtable[0x2d])(param_1), iVar4 != 0)) &&
      (-1 < (char)param_1->pev->effects)) && (-1 < (char)this->pev->effects)) {
    *(uint *)&this->field_0xa8 =
         *(uint *)&this->field_0xa8 & 0xffffffffU - ((int)*(uint *)&this->field_0xa8 >> 0x1f);
    iVar4 = 0;
    uVar3 = this->pev->spawnflags;
    iVar5 = CashBased();
    if ((iVar5 != 0) && (this->field_0xb0 != '\0')) {
      if (((byte)(TSGameRules - 2U) < 2) && (*(int *)&this->field_0xac != -1)) {
        pcVar6 = (char *)(*param_1->vtable[0x34])(param_1);
        iVar4 = CTSGameRules::GetTeamIndex((CTSGameRules *)&TSGameRules,pcVar6);
        if (*(int *)&this->field_0xac != iVar4) {
          TSHudMessageOne(0,0,0,0x10,0x1e,"Your team cannot buy this weapon.",(int)param_1->pev);
          return;
        }
      }
      puVar7 = get_weapon_info(*(uint *)&this->field_0xa4);
      iVar4 = puVar7[0x36];
      if ((uVar3 & 1) != 0) {
        iVar4 = iVar4 + 900;
      }
      if ((uVar3 & 2) != 0) {
        iVar4 = iVar4 + 800;
      }
      if ((uVar3 & 4) != 0) {
        iVar4 = iVar4 + 500;
      }
      if ((uVar3 & 8) != 0) {
        iVar4 = iVar4 + 0x708;
      }
      puVar7 = get_weapon_info(*(uint *)&this->field_0xa4);
      puVar7 = get_ammo_info((uint)*(byte *)(puVar7 + 2));
      iVar4 = iVar4 + puVar7[1] * *(int *)&this->field_0xa8;
      if (*(int *)&param_1->field_0x540 < iVar4) {
        TSHudMessageOne(0,0,0,0x10,0x1e,"You don\'t have enough money for that weapon.",
                        (int)param_1->pev);
        return;
      }
    }
    iVar5 = CBasePlayer::PickUpWeapon
                      (param_1,*(uint *)&this->field_0xa4,(undefined4 *)0x0,uVar3,
                       *(int *)&this->field_0xa4 != 0x1d,'\0');
    if (iVar5 != 0) {
      CBasePlayer::GiveCash(param_1,-iVar4);
      *(undefined4 *)&this->field_0x14 = 0;
      *(undefined4 *)&this->field_0x18 = 0;
      piVar1 = &this->pev->effects;
      *piVar1 = *piVar1 | 0x80;
      if ((*(int *)&this->field_0xa0 < 1) && ((byte)(TSGameRules - 2U) < 2)) {
        *(undefined4 *)&this->field_0xc = 0;
        *(undefined4 *)&this->field_0x10 = 0;
      }
      else {
        *(undefined4 *)&this->field_0xc = 0xffff0000;
        *(code **)&this->field_0x10 = Fall;
        fVar2 = gpGlobals->time;
        if (*(int *)&this->field_0xa0 < 1) {
          fVar2 = fVar2 + 60.0;
        }
        else if (*(int *)&this->field_0xa0 < 2) {
          fVar2 = fVar2 + 1.0;
        }
        else {
          iVar4 = *(int *)&this->field_0xa0;
          if (0xb4 < iVar4) {
            iVar4 = 0xb4;
          }
          fVar2 = fVar2 + (float)iVar4;
        }
        this->pev->nextthink = fVar2;
      }
      if ((*(int *)&this->field_0xa8 != 0) &&
         (iVar4 = *(int *)&param_1->field_0xa10,
         puVar7 = get_weapon_info(*(uint *)&this->field_0xa4),
         *(int *)(iVar4 + 0xd4 + (uint)*(byte *)(puVar7 + 2) * 4) < 1)) {
        iVar4 = *(int *)&this->field_0xa8;
        puVar7 = get_weapon_info(*(uint *)&this->field_0xa4);
        iVar4 = CTSGun::AddAmmo(*(CTSGun **)&param_1->field_0xa10,*(byte_conflict *)(puVar7 + 2),
                                iVar4);
        if (iVar4 != 0) {
          EMIT_SOUND_DYN((int)param_1->pev->pContainingEntity,3,"items/9mmclip1.wav",0x3f800000,
                         0x3f4ccccd,0,100,0.5);
        }
      }
      if (this->pev->message != 0) {
        TSHudMessageOne(0,0,0,8,0x1e,gpGlobals->pStringBase + this->pev->message,(int)param_1->pev);
      }
      if (this->pev->target != 0) {
        FireTargets((int)(gpGlobals->pStringBase + this->pev->target),this,this,3,0);
      }
    }
  }
  return;
}

/* 000a26cc  CTSGroundWeapon::WaitTouch  (40 bytes)
 * undefined WaitTouch(undefined4 param_1)
 */
/* CTSGroundWeapon::WaitTouch(CBaseEntity *) */

void __thiscall CTSGroundWeapon::WaitTouch(CTSGroundWeapon *this,undefined4 param_1)

{
  if (*(int *)&this->field_0xa4 == 0x1d) {
    (*this->vtable[0x46])(this,param_1);
  }
  return;
}

/* 000a34a0  CTSGroundWeapon::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CTSGroundWeapon::ObjectCaps(void) */

undefined4 CTSGroundWeapon::ObjectCaps(void)

{
  return 0x10;
}

/* 000a34a8  CTSGroundWeapon::CanUsedTroughWalls  (3 bytes)
 * undefined1 CanUsedTroughWalls(void)
 */
/* CTSGroundWeapon::CanUsedTroughWalls(void) */

undefined1 CTSGroundWeapon::CanUsedTroughWalls(void)

{
  return 0;
}

