/* mp.dll - CTSGroundAmmo (8 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1005d700  CTSGroundAmmo::WaitThink  (23 bytes)
 * void WaitThink(void)
 */
/* public: void __thiscall CTSGroundAmmo::WaitThink(void) */

void __thiscall CTSGroundAmmo::WaitThink(CTSGroundAmmo *this)

{
                    /* 0x5d700  135  ?WaitThink@CTSGroundAmmo@@QAEXXZ
                       0x5d700  136  ?WaitThink@CTSGroundWeapon@@QAEXXZ */
  this->pev->nextthink = gpGlobals->time + 1.0;
  return;
}

/* 10063910  CTSGroundAmmo::Use  (3 bytes)
 * undefined Use(void)
 * called by: CTSStunt::CheckForBreakables, FUN_10063920, FUN_10063eb0
 */
void CTSGroundAmmo::Use(void)

{
  return;
}

/* 100753f0  CTSGroundAmmo::PutOnWall  (916 bytes)
 * undefined PutOnWall(int param_1)
 * called by: CTSGroundAmmo::Fall
 */
void __fastcall CTSGroundAmmo::PutOnWall(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  edict_t *peVar5;
  Vector *this;
  float10 fVar6;
  float10 fVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_d0;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  int local_a8;
  Vector local_a4;
  Vector local_98;
  Vector local_8c;
  Vector local_80;
  float local_74;
  float local_70;
  float local_6c;
  Vector local_68;
  Vector local_5c;
  undefined1 local_50 [16];
  float local_40;
  float local_3c;
  float fStack_38;
  float fStack_34;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  edict_t *local_20;
  Vector local_18;
  Vector local_c;
  
  local_c4 = DAT_100ae4a0;
  local_c0 = DAT_100ae498;
  local_bc = DAT_100ae49c;
  local_b8 = DAT_100ae4a0;
  local_b4 = DAT_100ae498;
  local_b0 = DAT_100ae49c;
  local_ac = DAT_100ae4a0;
  local_d0 = 9999;
  local_a8 = 0;
  do {
    iVar3 = local_a8;
    fVar6 = (float10)fcos((float10)local_a8 * (float10)0.017453292519943295);
    fVar9 = (float)fVar6;
    fVar6 = (float10)fsin((float10)local_a8 * (float10)0.017453292519943295);
    fVar7 = SQRT((float10)fVar9 * (float10)fVar9 +
                 fVar6 * fVar6 + (float10)local_c4 * (float10)local_c4);
    if (fVar7 == (float10)0.0) {
      fVar11 = 1.0;
      fVar10 = 0.0;
      fVar9 = 0.0;
      this = &local_18;
    }
    else {
      fVar7 = (float10)1.0 / fVar7;
      fVar11 = (float)((float10)local_c4 * fVar7);
      fVar10 = (float)(fVar7 * fVar6);
      this = &local_5c;
      fVar9 = (float)(fVar7 * (float10)fVar9);
    }
    puVar4 = (undefined4 *)Vector::Vector(this,fVar9,fVar10,fVar11);
    Vector::Vector(&local_a4,puVar4);
    local_74 = local_a4.x * 1024.0;
    local_70 = local_a4.y * 1024.0;
    local_c4 = local_a4.z;
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
    local_6c = local_a4.z * 1024.0;
    Vector::Vector(&local_68,&local_74);
    iVar2 = *(int *)(param_1 + 4);
    local_8c.x = local_68.x + *(float *)(iVar2 + 8);
    local_8c.y = local_68.y + *(float *)(iVar2 + 0xc);
    local_8c.z = local_68.z + *(float *)(iVar2 + 0x10);
    Vector::Vector(&local_c,&local_8c.x);
    UTIL_TraceLine(*(int *)(param_1 + 4) + 8,&local_c,1,uVar1,local_50);
    if ((local_40 < 1.0) &&
       ((((peVar5 = local_20, local_20 == (edict_t *)0x0 &&
          (peVar5 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar5 == (edict_t *)0x0)) ||
         (peVar5->pvPrivateData == (void *)0x0)) ||
        ((iVar2 = *(int *)((int)peVar5->pvPrivateData + 4), *(int *)(iVar2 + 0x16c) != 0x3f800000 &&
         ((*(byte *)(iVar2 + 0x118) & 0x80) == 0)))))) {
      iVar2 = *(int *)(param_1 + 4);
      local_98.x = *(float *)(iVar2 + 8) - local_3c;
      local_98.y = *(float *)(iVar2 + 0xc) - fStack_38;
      local_98.z = *(float *)(iVar2 + 0x10) - fStack_34;
      Vector::Vector(&local_80,&local_98.x);
      if (SQRT(local_80.x * local_80.x + local_80.y * local_80.y + local_80.z * local_80.z) <
          (float)local_d0) {
        lVar8 = __ftol();
        local_d0 = (int)lVar8;
        local_c0 = fStack_2c;
        local_bc = fStack_28;
        local_b8 = fStack_24;
        local_b4 = local_3c;
        local_b0 = fStack_38;
        local_ac = fStack_34;
      }
    }
    local_a8 = iVar3 + 0x2d;
  } while (local_a8 < 0x168);
  if (0x270e < local_d0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x58) = 0x42b40000;
    return;
  }
  puVar4 = (undefined4 *)
           Vector::Vector(&local_5c,local_c0 + local_c0,local_bc + local_bc,local_b8 + local_b8);
  Vector::Vector(&local_98,puVar4);
  puVar4 = (undefined4 *)
           Vector::Vector(&local_18,local_98.x + local_b4,local_b0 + local_98.y,
                          local_ac + local_98.z);
  Vector::Vector(&local_8c,puVar4);
  iVar3 = *(int *)(param_1 + 4);
  *(float *)(iVar3 + 8) = local_8c.x;
  *(float *)(iVar3 + 0xc) = local_8c.y;
  *(float *)(iVar3 + 0x10) = local_8c.z;
  puVar4 = (undefined4 *)UTIL_VecToAngles(&local_5c.x,&local_c0);
  iVar3 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar3 + 0x50) = *puVar4;
  *(undefined4 *)(iVar3 + 0x54) = puVar4[1];
  *(undefined4 *)(iVar3 + 0x58) = puVar4[2];
  *(float *)(*(int *)(param_1 + 4) + 0x50) = *(float *)(*(int *)(param_1 + 4) + 0x50) + 90.0;
  return;
}

/* 10075790  CTSGroundAmmo::Fall  (206 bytes)
 * void Fall(void)
 * called by: CTSGameRules::RespawnEntities
 */
/* public: void __thiscall CTSGroundAmmo::Fall(void) */

void __thiscall CTSGroundAmmo::Fall(CTSGroundAmmo *this)

{
  entvars_t *peVar1;
  entvars_t *extraout_ECX;
  entvars_t *this_00;
  void *this_01;
  
                    /* 0x75790  46  ?Fall@CTSGroundAmmo@@QAEXXZ
                       0x75790  47  ?Fall@CTSGroundWeapon@@QAEXXZ */
  this_00 = this->pev;
  this_00->nextthink = gpGlobals->time + 0.5;
  peVar1 = this->pev;
  if ((peVar1->spawnflags & 0x10) != 0) {
    if (this->field_0x54 == '\0') {
      PutOnWall((int)this);
      this_00 = extraout_ECX;
    }
    EMIT_SOUND_DYN(this_00,this->pev->pContainingEntity,6,s_items_weapondrop1_wav_100a5b30,
                   0x3f800000,0x3f4ccccd,0);
    (*this->vtable[0x43])();
    this->field_0x54 = 1;
    return;
  }
  this_01 = (void *)peVar1->flags;
  if ((((uint)this_01 & 0x200) != 0) ||
     (this_01 = (void *)CONCAT31((int3)((uint)this_01 >> 8),this->field_0x54),
     this->field_0x54 != '\0')) {
    EMIT_SOUND_DYN(this_01,peVar1->pContainingEntity,6,s_items_weapondrop1_wav_100a5b30,0x3f800000,
                   0x3f4ccccd,0);
    this->pev->angles[0] = 0.0;
    this->pev->angles[2] = 0.0;
    (*this->vtable[0x43])();
    this->field_0x54 = 1;
  }
  return;
}

/* 10075c20  CTSGroundAmmo::KeyValue  (180 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CTSGroundAmmo::KeyValue(CTSGroundAmmo *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  CTSGroundAmmo *this_00;
  void *this_01;
  void *this_02;
  char *pcVar8;
  bool bVar9;
  undefined3 uVar7;
  
  pcVar8 = s_wduration_100a63a4;
  pbVar2 = *(byte **)(param_1 + 4);
  this_00 = this;
  do {
    bVar1 = *pbVar2;
    uVar7 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CTSGroundAmmo *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10075c58:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10075c5d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CTSGroundAmmo *)CONCAT31(uVar7,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10075c58;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10075c5d:
  if (iVar3 == 0) {
    uVar4 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x98 = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar3 = _strncmp((char *)*(byte **)(param_1 + 4),&DAT_100a6404,4);
  if (iVar3 == 0) {
    this_01 = (void *)(*(int *)(param_1 + 4) + 4);
    iVar3 = atoi(this_01,this_01);
    iVar5 = atoi(this_02,*(byte_conflict **)(param_1 + 8));
    puVar6 = get_ammo_info(iVar3);
    *(int *)(&this->field_0x58 + iVar3 * 4) = iVar5 * puVar6[4];
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 10075ce0  CTSGroundAmmo::Spawn  (235 bytes)
 * undefined Spawn(int * param_1)
 * called by: CTSBigPistolAmmo::Spawn, CTSRifleAmmo::Spawn, CTSSMGAmmo::Spawn, CTSShotgunAmmo::Spawn, CTSSniperAmmo::Spawn
 */
void __fastcall CTSGroundAmmo::Spawn(int *param_1)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*param_1 + 0x20))();
  (*g_engfuncs.pfnSetModel)(*(edict_t **)(param_1[1] + 0x208),s_models_ammopack_mdl_100a5f28);
  iVar1 = param_1[1];
  if ((*(byte *)(iVar1 + 0x1a0) & 0x10) == 0) {
    *(undefined4 *)(iVar1 + 0x108) = 6;
  }
  else {
    *(undefined4 *)(iVar1 + 0x108) = 5;
  }
  *(undefined4 *)(param_1[1] + 0x10c) = 2;
  UTIL_SetOrigin(param_1[1],param_1[1] + 8);
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  uStack_4 = 0;
  UTIL_SetSize(param_1[1],&uStack_c,&uStack_18);
  param_1[4] = (int)Fall;
  param_1[5] = 0;
  *(float *)(param_1[1] + 0x104) = gpGlobals->time + 0.1;
  *(undefined4 *)(param_1[1] + 0x250) = 0;
  *(uint *)(param_1[1] + 0x250) = *(uint *)(param_1[1] + 0x250) | 2;
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

/* 10075dd0  CTSGroundAmmo::OnGround  (170 bytes)
 * undefined OnGround()
 */
void __fastcall CTSGroundAmmo::OnGround(int param_1)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 5;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 1;
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) & 0xffffff7f;
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 2;
  UTIL_SetOrigin(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + 8);
  uStack_18 = 0x40800000;
  uStack_14 = 0x40800000;
  uStack_10 = 0x40800000;
  uStack_c = 0xc0800000;
  uStack_8 = 0xc0800000;
  uStack_4 = 0xc0800000;
  UTIL_SetSize(*(int *)(param_1 + 4),&uStack_c,&uStack_18);
  *(code **)(param_1 + 0x14) = WaitTouch;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

/* 10075e80  CTSGroundAmmo::WaitTouch  (343 bytes)
 * void WaitTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CTSGroundAmmo::WaitTouch(class CBaseEntity *) */

void __thiscall CTSGroundAmmo::WaitTouch(CTSGroundAmmo *this,CBaseEntity *param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
                    /* 0x75e80  153  ?WaitTouch@CTSGroundAmmo@@QAEXPAVCBaseEntity@@@Z */
  if ((this->pev->effects & 0x80) != 0) {
    return;
  }
  iVar3 = (**(code **)(*(int *)param_1 + 0xc0))();
  if (iVar3 == 0) {
    return;
  }
  iVar3 = (**(code **)(*(int *)param_1 + 0xac))();
  if (iVar3 == 0) {
    return;
  }
  iVar3 = 0;
  if (*(int *)(param_1 + 0x9fc) == 0) {
    return;
  }
  if (*(int *)(*(int *)(param_1 + 0x9fc) + 0x78) != 0x10) {
    return;
  }
  bVar2 = false;
  piVar5 = (int *)&this->field_0x58;
  do {
    if ((*piVar5 != 0) &&
       (iVar4 = CTSGun::AddAmmo(*(CTSGun **)(param_1 + 0x9fc),(byte_conflict)iVar3,*piVar5),
       iVar4 != 0)) {
      bVar2 = true;
    }
    iVar3 = iVar3 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar3 < 0x10);
  if (!bVar2) {
    return;
  }
  EMIT_SOUND_DYN(*(void **)(param_1 + 4),*(undefined4 *)((int)*(void **)(param_1 + 4) + 0x208),3,
                 s_items_9mmclip1_wav_100a5460,0x3f800000,0x3f4ccccd,0);
  *(undefined4 *)&this->field_0x14 = 0;
  this->pev->effects = this->pev->effects | 0x80;
  param_1 = *(CBaseEntity **)&this->field_0x98;
  if (((int)param_1 < 1) && ((TSGameRules == '\x03' || (TSGameRules == '\x02')))) {
    *(undefined4 *)&this->field_0x10 = 0;
    return;
  }
  *(code **)&this->field_0x10 = Fall;
  if ((int)param_1 < 1) {
    fVar1 = 60.0;
    goto LAB_10075fc1;
  }
  if ((int)param_1 < 0xb4) {
    if ((int)param_1 < 2) {
      param_1 = (CBaseEntity *)0x1;
    }
    else if (0xb3 < (int)param_1) goto LAB_10075fab;
  }
  else {
LAB_10075fab:
    param_1 = (CBaseEntity *)0xb4;
  }
  fVar1 = (float)(int)param_1;
LAB_10075fc1:
  this->pev->nextthink = fVar1 + gpGlobals->time;
  return;
}

