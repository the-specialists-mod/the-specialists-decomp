/* mp.dll - CTSGroundWeapon (11 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10065b50  CTSGroundWeapon::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CTSGroundWeapon::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CTSGroundWeapon_10099c68,(int)param_1,0x10099bb8,3);
  return;
}

/* 10065b80  CTSGroundWeapon::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CTSGroundWeapon::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields
            (param_2,(byte_conflict *)s_CTSGroundWeapon_10099c68,(int)param_1,0x10099bb8,3);
  return;
}

/* 10065bb0  CTSGroundWeapon::KeyValue  (177 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CTSGroundWeapon::KeyValue(CTSGroundWeapon *this,int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined1 *this_00;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  pcVar4 = *(char **)(param_1 + 4);
  pvVar2 = (void *)0xb;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_tsweaponid_10099bf4;
  do {
    if (pvVar2 == (void *)0x0) break;
    pvVar2 = (void *)((int)pvVar2 + -1);
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    uVar1 = FUN_1006e1dd(pvVar2,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x8c = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  this_00 = &DAT_0000000a;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_wduration_10099c84;
  do {
    if (this_00 == (undefined1 *)0x0) break;
    this_00 = this_00 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    uVar1 = FUN_1006e1dd(this_00,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x88 = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pvVar2 = (void *)0xb;
  bVar6 = true;
  pcVar3 = s_wextraclip_10099c78;
  do {
    if (pvVar2 == (void *)0x0) break;
    pvVar2 = (void *)((int)pvVar2 + -1);
    bVar6 = *pcVar4 == *pcVar3;
    pcVar4 = pcVar4 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar6);
  if (bVar6) {
    uVar1 = FUN_1006e1dd(pvVar2,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x90 = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 10065c70  CTSGroundWeapon::Spawn  (313 bytes)
 * undefined Spawn()
 */
void __fastcall CTSGroundWeapon::Spawn(int *param_1)

{
  edict_t *e;
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  
  (**(code **)(*param_1 + 0x10))();
  pcVar2 = (char *)get_weapon_info(param_1[0x23]);
  if (*pcVar2 == '\0') {
    param_1[4] = (int)CBaseEntity::SUB_Remove;
    *(float *)(param_1[1] + 0x104) = gpGlobals->time + 0.1;
    return;
  }
  e = *(edict_t **)(param_1[1] + 0x208);
  puVar3 = get_weapon_info(param_1[0x23]);
  (*g_engfuncs.pfnSetModel)(e,(char *)((int)puVar3 + 0x1ea));
  iVar1 = param_1[1];
  if ((*(byte *)(iVar1 + 0x1a0) & 0x10) == 0) {
    *(undefined4 *)(iVar1 + 0x108) = 6;
  }
  else {
    *(undefined4 *)(iVar1 + 0x108) = 5;
  }
  *(undefined4 *)(param_1[1] + 0x10c) = 2;
  FUN_100679a0();
  FUN_10067970();
  param_1[5] = 0;
  param_1[4] = (int)Fall;
  *(float *)(param_1[1] + 0x104) = gpGlobals->time + 0.1;
  *(undefined4 *)(param_1[1] + 0x250) = 0;
  *(uint *)(param_1[1] + 0x250) = *(uint *)(param_1[1] + 0x250) | 2;
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

/* 10065db0  CTSGroundWeapon::Precache  (1 bytes)
 * undefined Precache()
 */
void CTSGroundWeapon::Precache(void)

{
  return;
}

/* 100660b0  CTSGroundWeapon::Fall  (190 bytes)
 * void Fall(void)
 * called by: CTSGameRules::RespawnEntities
 */
/* public: void __thiscall CTSGroundWeapon::Fall(void) */

void __thiscall CTSGroundWeapon::Fall(CTSGroundWeapon *this)

{
  entvars_t *peVar1;
  entvars_t *extraout_ECX;
  entvars_t *this_00;
  
                    /* 0x660b0  43  ?Fall@CTSGroundWeapon@@QAEXXZ */
  this_00 = this->pev;
  this_00->nextthink = gpGlobals->time + 0.5;
  peVar1 = this->pev;
  if ((peVar1->spawnflags & 0x10) != 0) {
    if (this->field_0x54 == '\0') {
      FUN_10065dc0((int)this);
      this_00 = extraout_ECX;
    }
    EMIT_SOUND_DYN(this_00,this->pev->pContainingEntity,6,s_items_weapondrop1_wav_10099c20,
                   0x3f800000,0x3f4ccccd,0,100);
    FUN_10066190((int)this);
    this->field_0x54 = 1;
    return;
  }
  if (((peVar1->flags & 0x200U) != 0) || (this->field_0x54 != '\0')) {
    EMIT_SOUND_DYN(peVar1->pContainingEntity,peVar1->pContainingEntity,6,
                   s_items_weapondrop1_wav_10099c20,0x3f800000,0x3f4ccccd,0,100);
    this->pev->angles[0] = 0.0;
    this->pev->angles[2] = 0.0;
    FUN_10066190((int)this);
    this->field_0x54 = 1;
  }
  return;
}

/* 10066170  CTSGroundWeapon::WaitThink  (23 bytes)
 * void WaitThink(void)
 */
/* public: void __thiscall CTSGroundWeapon::WaitThink(void) */

void __thiscall CTSGroundWeapon::WaitThink(CTSGroundWeapon *this)

{
                    /* 0x66170  127  ?WaitThink@CTSGroundWeapon@@QAEXXZ */
  this->pev->nextthink = gpGlobals->time + 1.0;
  return;
}

/* 10066240  CTSGroundWeapon::Use  (13 bytes)
 * undefined Use()
 */
void __thiscall CTSGroundWeapon::Use(void *param_1,int *param_2)

{
  FUN_10066250(param_1,param_2);
  return;
}

/* 10066440  CTSGroundWeapon::WaitTouch  (28 bytes)
 * void WaitTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CTSGroundWeapon::WaitTouch(class CBaseEntity *) */

void __thiscall CTSGroundWeapon::WaitTouch(CTSGroundWeapon *this,CBaseEntity *param_1)

{
                    /* 0x66440  142  ?WaitTouch@CTSGroundWeapon@@QAEXPAVCBaseEntity@@@Z */
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x180) & 0x20) != 0) {
    FUN_10066250(this,(int *)param_1);
    return;
  }
  return;
}

/* 10066570  CTSGroundWeapon::ObjectCaps  (6 bytes)
 * undefined ObjectCaps()
 */
undefined4 CTSGroundWeapon::ObjectCaps(void)

{
  return 0x10;
}

/* 10066580  CTSGroundWeapon::CanUsedTroughWalls  (3 bytes)
 * undefined CanUsedTroughWalls()
 */
undefined1 CTSGroundWeapon::CanUsedTroughWalls(void)

{
  return 0;
}

