/* ts_i386.so - CTSGroundAmmo (11 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000a2718  CTSGroundAmmo::KeyValue  (201 bytes)
 * undefined KeyValue(int param_1)
 */
/* CTSGroundAmmo::KeyValue(KeyValueData_s *) */

void __thiscall CTSGroundAmmo::KeyValue(CTSGroundAmmo *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"wduration");
  if (iVar1 == 0) {
    uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
    *(undefined4 *)&this->field_0xa8 = uVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    iVar1 = strncmp(*(char **)(param_1 + 4),"mags",4);
    if (iVar1 == 0) {
      uVar3 = __strtol_internal(*(int *)(param_1 + 4) + 4,0,10,0);
      puVar4 = get_ammo_info(uVar3);
      iVar1 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
      *(int *)(&this->field_0x68 + uVar3 * 4) = iVar1 * puVar4[4];
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  return;
}

/* 000a27e4  CTSGroundAmmo::Spawn  (267 bytes)
 * undefined Spawn(void)
 */
/* CTSGroundAmmo::Spawn(void) */

void __thiscall CTSGroundAmmo::Spawn(CTSGroundAmmo *this)

{
  int *piVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  (*this->vtable[10])(this);
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,"models/ammopack.mdl");
  if ((this->pev->spawnflags & 0x10) == 0) {
    this->pev->movetype = 6;
  }
  else {
    this->pev->movetype = 5;
  }
  this->pev->solid = 2;
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  local_2c = 0;
  local_28 = local_2c;
  local_24 = local_2c;
  local_1c = local_2c;
  local_18 = local_2c;
  local_14 = local_2c;
  UTIL_SetSize((int)this->pev,&local_2c,&local_1c);
  *(undefined4 *)&this->field_0x14 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  *(undefined4 *)&this->field_0xc = 0xffff0000;
  *(code **)&this->field_0x10 = Fall;
  this->pev->nextthink = gpGlobals->time + 0.1;
  this->pev->iuser4 = 0;
  piVar1 = &this->pev->iuser4;
  *piVar1 = *piVar1 | 2;
  this->field_0x64 = 0;
  return;
}

/* 000a28f0  CTSGroundAmmo::Precache  (1 bytes)
 * undefined Precache(void)
 */
/* CTSGroundAmmo::Precache(void) */

void CTSGroundAmmo::Precache(void)

{
  return;
}

/* 000a28f4  CTSGroundAmmo::PutOnWall  (1139 bytes)
 * undefined PutOnWall(void)
 */
/* CTSGroundAmmo::PutOnWall(void) */

void __thiscall CTSGroundAmmo::PutOnWall(CTSGroundAmmo *this)

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

/* 000a2d6c  CTSGroundAmmo::Fall  (228 bytes)
 * undefined Fall(void)
 */
/* CTSGroundAmmo::Fall(void) */

void __thiscall CTSGroundAmmo::Fall(CTSGroundAmmo *this)

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

/* 000a2e54  CTSGroundAmmo::WaitThink  (49 bytes)
 * undefined WaitThink(void)
 */
/* CTSGroundAmmo::WaitThink(void) */

void __thiscall CTSGroundAmmo::WaitThink(CTSGroundAmmo *this)

{
  this->pev->nextthink = gpGlobals->time + 1.0;
  return;
}

/* 000a2e88  CTSGroundAmmo::OnGround  (179 bytes)
 * undefined OnGround(void)
 */
/* CTSGroundAmmo::OnGround(void) */

void __thiscall CTSGroundAmmo::OnGround(CTSGroundAmmo *this)

{
  int *piVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  this->pev->movetype = 5;
  this->pev->solid = 1;
  piVar1 = &this->pev->effects;
  *piVar1 = *piVar1 & 0xffffff7f;
  piVar1 = &this->pev->effects;
  *piVar1 = *piVar1 | 2;
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

/* 000a2f3c  CTSGroundAmmo::Use  (1 bytes)
 * undefined Use(void)
 */
/* CTSGroundAmmo::Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float) */

void CTSGroundAmmo::Use(void)

{
  return;
}

/* 000a2f40  CTSGroundAmmo::WaitTouch  (593 bytes)
 * float * WaitTouch(int * param_1)
 */
/* CTSGroundAmmo::WaitTouch(CBaseEntity *) */

float * __thiscall CTSGroundAmmo::WaitTouch(CTSGroundAmmo *this,int *param_1)

{
  int *piVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  entvars_t *peVar5;
  void ***pppvVar6;
  void ***pppvVar7;
  byte_conflict bVar8;
  int local_1c;
  
  peVar5 = this->pev;
  if (-1 < (char)peVar5->effects) {
    iVar4 = (**(code **)(param_1[0x18] + 200))(param_1);
    peVar5 = (entvars_t *)0x0;
    if (iVar4 != 0) {
      peVar5 = (entvars_t *)(**(code **)(param_1[0x18] + 0xb4))(param_1);
      if (((peVar5 != (entvars_t *)0x0) && (param_1[0x284] != 0)) &&
         (peVar5 = (entvars_t *)param_1[0x284], peVar5->endpos[2] == 2.24208e-44)) {
        bVar3 = false;
        local_1c = 0;
        pppvVar6 = &this->vtable;
        pppvVar7 = pppvVar6;
        do {
          bVar8 = (byte_conflict)local_1c;
          if (pppvVar6[2] != (void **)0x0) {
            iVar4 = CTSGun::AddAmmo((CTSGun *)param_1[0x284],bVar8,(int)pppvVar7[2]);
            if (iVar4 != 0) {
              bVar3 = true;
            }
          }
          if (pppvVar6[3] != (void **)0x0) {
            iVar4 = CTSGun::AddAmmo((CTSGun *)param_1[0x284],bVar8 + '\x01',(int)pppvVar7[3]);
            if (iVar4 != 0) {
              bVar3 = true;
            }
          }
          if (pppvVar6[4] != (void **)0x0) {
            iVar4 = CTSGun::AddAmmo((CTSGun *)param_1[0x284],bVar8 + '\x02',(int)pppvVar7[4]);
            if (iVar4 != 0) {
              bVar3 = true;
            }
          }
          peVar5 = (entvars_t *)(local_1c + 3);
          if (pppvVar6[5] != (void **)0x0) {
            peVar5 = (entvars_t *)
                     CTSGun::AddAmmo((CTSGun *)param_1[0x284],(byte_conflict)peVar5,(int)pppvVar7[5]
                                    );
            if (peVar5 != (entvars_t *)0x0) {
              bVar3 = true;
            }
          }
          pppvVar7 = pppvVar7 + 4;
          pppvVar6 = pppvVar6 + 4;
          local_1c = local_1c + 4;
        } while (local_1c < 0x10);
        if (bVar3) {
          EMIT_SOUND_DYN(*(int *)(*param_1 + 0x208),3,"items/9mmclip1.wav",0x3f800000,0x3f4ccccd,0,
                         100,0.5);
          *(undefined4 *)&this->field_0x14 = 0;
          *(undefined4 *)&this->field_0x18 = 0;
          piVar1 = &this->pev->effects;
          *piVar1 = *piVar1 | 0x80;
          if ((*(int *)&this->field_0xa8 < 1) &&
             (peVar5 = (entvars_t *)(CONCAT31(0x1781,TSGameRules) + -2), (byte)peVar5 < 2)) {
            *(undefined4 *)&this->field_0xc = 0;
            *(undefined4 *)&this->field_0x10 = 0;
          }
          else {
            *(undefined4 *)&this->field_0xc = 0xffff0000;
            *(code **)&this->field_0x10 = Fall;
            fVar2 = gpGlobals->time;
            peVar5 = (entvars_t *)gpGlobals;
            if (*(int *)&this->field_0xa8 < 1) {
              fVar2 = fVar2 + 60.0;
            }
            else if (*(int *)&this->field_0xa8 < 2) {
              fVar2 = fVar2 + 1.0;
            }
            else {
              peVar5 = *(entvars_t **)&this->field_0xa8;
              if (0xb4 < (int)peVar5) {
                peVar5 = (entvars_t *)0xb4;
              }
              fVar2 = fVar2 + (float)(int)peVar5;
            }
            this->pev->nextthink = fVar2;
          }
        }
      }
    }
  }
  return (float *)peVar5;
}

/* 000a34f4  CTSGroundAmmo::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CTSGroundAmmo::ObjectCaps(void) */

undefined4 CTSGroundAmmo::ObjectCaps(void)

{
  return 0x10;
}

/* 000a34fc  CTSGroundAmmo::CanUsedTroughWalls  (3 bytes)
 * undefined1 CanUsedTroughWalls(void)
 */
/* CTSGroundAmmo::CanUsedTroughWalls(void) */

undefined1 CTSGroundAmmo::CanUsedTroughWalls(void)

{
  return 0;
}

