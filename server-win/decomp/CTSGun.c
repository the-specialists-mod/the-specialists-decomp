/* mp.dll - CTSGun (23 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10054000  CTSGun::VKickback  (247 bytes)
 * undefined VKickback(float param_1, int param_2, char param_3)
 * called by: FUN_100556a0, FUN_10055a10, FUN_10055f30
 */
/* shared: punchangle recoil only for FL_FAKECLIENT owners */

void __thiscall CTSGun::VKickback(CTSGun *this,float param_1,int param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  float local_4;
  
  local_4 = param_1 * 0.85;
  if (param_2 == 8) {
    param_1 = local_4 * 0.35;
  }
  else if ((param_2 == 4) || (param_2 == 5)) {
    param_1 = local_4 * 0.15;
  }
  else if (param_2 == 1) {
    param_1 = local_4 * -0.25;
  }
  else if ((param_2 == 6) || (param_2 == 7)) {
    param_1 = local_4 * -0.3;
  }
  else if (param_2 == 9) {
    param_1 = local_4 * -0.35;
  }
  else {
    param_1 = 0.0;
  }
  if (param_3 != '\0') {
    local_4 = local_4 * 0.775;
    param_1 = param_1 * 0.775;
  }
  uVar2 = FUN_1004c250(*(int *)&this->field_0x70);
  if (uVar2 != 0) {
    local_4 = local_4 * 0.6666667;
    param_1 = param_1 * 0.6666667;
  }
  iVar1 = *(int *)(*(int *)&this->field_0x70 + 4);
  if ((*(uint *)(iVar1 + 0x1a4) & 0x2000) != 0) {
    *(float *)(iVar1 + 0x68) = *(float *)(iVar1 + 0x68) - local_4;
    iVar1 = *(int *)(*(int *)&this->field_0x70 + 4);
    *(float *)(iVar1 + 0x6c) = param_1 + *(float *)(iVar1 + 0x6c);
  }
  return;
}

/* 10054110  CTSGun::Spawn  (116 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CTSGun::Spawn(int *param_1)

{
  FUN_10054190((int)param_1);
  *(int *)param_1[1] = (int)s_weapon_tsgun_100a4494 - (int)gpGlobals->pStringBase;
  (**(code **)(*param_1 + 0x20))();
  (*g_engfuncs.pfnSetModel)(*(edict_t **)(param_1[1] + 0x208),s_models_w_glock18_mdl_1009a778);
  param_1[0x29] = 1;
  param_1[0x2d] = 1;
  param_1[0x1e] = 0x10;
  param_1[0x2e] = 0;
  param_1[0x275] = 0;
  param_1[0x276] = 0;
  FUN_10079d30((int)param_1);
  return;
}

/* 10054200  CTSGun::Precache  (231 bytes)
 * undefined Precache()
 */
void __fastcall CTSGun::Precache(int param_1)

{
  ushort uVar1;
  
  uVar1 = (*g_engfuncs.pfnPrecacheEvent)(1,s_events_fire_sc_100a4564);
  *(ushort *)(param_1 + 0x954) = uVar1;
  uVar1 = (*g_engfuncs.pfnPrecacheEvent)(1,s_events_coldcock_sc_100a4550);
  *(ushort *)(param_1 + 0x956) = uVar1;
  uVar1 = (*g_engfuncs.pfnPrecacheEvent)(1,s_events_firelinked_sc_100a4538);
  *(ushort *)(param_1 + 0x95e) = uVar1;
  uVar1 = (*g_engfuncs.pfnPrecacheEvent)(1,s_events_empty_sc_100a4528);
  *(ushort *)(param_1 + 0x958) = uVar1;
  uVar1 = (*g_engfuncs.pfnPrecacheEvent)(1,s_events_pump_sc_100a4518);
  *(ushort *)(param_1 + 0x95a) = uVar1;
  uVar1 = (*g_engfuncs.pfnPrecacheEvent)(1,s_events_closecombat_sc_100a4500);
  *(ushort *)(param_1 + 0x95c) = uVar1;
  uVar1 = (*g_engfuncs.pfnPrecacheEvent)(1,s_events_reload_sc_100a44ec);
  *(ushort *)(param_1 + 0x960) = uVar1;
  uVar1 = (*g_engfuncs.pfnPrecacheEvent)(1,s_events_knife_sc_100a44dc);
  *(ushort *)(param_1 + 0x962) = uVar1;
  uVar1 = (*g_engfuncs.pfnPrecacheEvent)(1,s_events_katana_sc_100a44c8);
  *(ushort *)(param_1 + 0x964) = uVar1;
  uVar1 = (*g_engfuncs.pfnPrecacheEvent)(1,s_events_draw_sc_100a44b8);
  *(ushort *)(param_1 + 0x966) = uVar1;
  uVar1 = (*g_engfuncs.pfnPrecacheEvent)(1,s_events_grenade_sc_100a44a4);
  *(ushort *)(param_1 + 0x968) = uVar1;
  return;
}

/* 100543e0  CTSGun::AddAmmo  (98 bytes)
 * undefined4 AddAmmo(byte.conflict param_1, int param_2)
 * called by: CBasePlayer::BuyAmmo, CTSAmmoPack::WaitTouch, CTSGroundAmmo::WaitTouch, CTSGroundWeapon::GetWeapon
 */
undefined4 __thiscall CTSGun::AddAmmo(CTSGun *this,byte_conflict param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((param_1 < 0x10) && (0 < param_2)) {
    uVar1 = (uint)param_1;
    if (*(int *)(&this->field_0xc4 + uVar1 * 4) < *(int *)(&DAT_100c6394 + uVar1 * 0x38)) {
      iVar2 = *(int *)(&this->field_0xc4 + uVar1 * 4) + param_2;
      *(int *)(&this->field_0xc4 + uVar1 * 4) = iVar2;
      if (*(int *)(&DAT_100c6394 + uVar1 * 0x38) < iVar2) {
        *(int *)(&this->field_0xc4 + uVar1 * 4) = *(int *)(&DAT_100c6394 + uVar1 * 0x38);
      }
      return 1;
    }
  }
  return 0;
}

/* 10054450  CTSGun::DropWeapon  (134 bytes)
 * undefined4 DropWeapon(int param_1, char param_2)
 * called by: CBasePlayer::DropWeapon, CTSGun::GrenadeIdle, FUN_10056d80, FUN_10057210
 */
/* .so 0x8094c (inferred from call graph) */

undefined4 __thiscall CTSGun::DropWeapon(CTSGun *this,int param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (((param_1 < 1) || (0x25 < param_1)) || ((&this->field_0x104)[param_1 * 0x38] == '\0')) {
    return 0;
  }
  puVar2 = (undefined4 *)(&this->field_0x104 + param_1 * 0x38);
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if ((*(int **)&this->field_0x70 != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)&this->field_0x70 + 0xac))(), iVar1 == 0)) {
    return 0;
  }
  if (param_1 == *(int *)&this->field_0xb8) {
    if (param_2 != '\0') {
      GetBetterWeapon(this,param_1);
      return 1;
    }
    HolsterWeapon((int *)this);
  }
  return 1;
}

/* 100548d0  CTSGun::GetBetterWeapon  (81 bytes)
 * undefined GetBetterWeapon(int param_1)
 * called by: CBotModuleAttack::FireWeapon, CTSGun::DropWeapon
 */
/* .so 0x80f40; g_iWeaponPriority scan, SelectWeapon, vt[72] */

void __thiscall CTSGun::GetBetterWeapon(CTSGun *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = &g_iWeaponPriority;
  do {
    iVar1 = *piVar2;
    if (((&this->field_0x104)[iVar1 * 0x38] != '\0') && (param_1 != iVar1)) break;
    piVar2 = piVar2 + 1;
  } while ((int)piVar2 < 0x100d041c);
  iVar1 = SelectWeapon(this,iVar1);
  if (iVar1 != 0) {
    (*this->vtable[0x48])();
  }
  return;
}

/* 10054930  CTSGun::SelectWeapon  (102 bytes)
 * undefined4 SelectWeapon(int param_1)
 * called by: CBasePlayer::DropWeapon, CBasePlayer::PickUpWeapon, CTSGun::GetBetterWeapon, FUN_100542f0, pfnClientCommand
 */
/* .so 0x80fb8; identical body */

undefined4 __thiscall CTSGun::SelectWeapon(CTSGun *this,int param_1)

{
  if ((((param_1 != *(int *)&this->field_0xb8) && (-1 < param_1)) && (param_1 < 0x26)) &&
     ((((&this->field_0x104)[param_1 * 0x38] != '\0' &&
       (*(char *)(&global_weapon_info + param_1 * 0xf7) != '\0')) || (param_1 == 0)))) {
    HolsterWeapon((int *)this);
    *(int *)&this->field_0xb8 = param_1;
    return 1;
  }
  return 0;
}

/* 100549a0  CTSGun::Deploy  (397 bytes)
 * undefined4 Deploy(int * param_1)
 */
undefined4 __fastcall CTSGun::Deploy(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[0x2e];
  if (iVar3 == 0) {
    HolsterWeapon(param_1);
    return 1;
  }
  param_1[0x274] = 0;
  param_1[0x2f] = (int)(param_1 + iVar3 * 0xe + 0x41);
  param_1[0x30] = (int)(&global_weapon_info + iVar3 * 0xf7);
  (param_1 + iVar3 * 0xe + 0x41)[10] = iVar3 * 0x3dc + 0x100d0672;
  iVar3 = GetBodyByItems(param_1[0x2e],*(uint *)(param_1[0x2f] + 0x10));
  *(int *)(param_1[0x2f] + 0x18) = iVar3;
  *(undefined4 *)(param_1[1] + 0x114) = *(undefined4 *)(param_1[0x2f] + 0x18);
  *(undefined4 *)(param_1[0x2f] + 8) = 0;
  *(undefined1 *)(param_1[0x2f] + 0x2c) = 0;
  iVar3 = *(int *)(param_1[0x2f] + 0x28);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)*(short *)(iVar3 + 4);
  }
  iVar2 = param_1[0x30];
  iVar4 = iVar2 + 0x1b2;
  if ((*(byte *)(param_1[0x2f] + 0x10) & 1) == 0) {
    iVar4 = iVar2 + 0x172;
  }
  CBasePlayerWeapon::DefaultDeploy
            ((CBasePlayerWeapon *)param_1,iVar2 + 0x132,iVar4,iVar3,(char *)(iVar2 + 0x232),0,
             *(undefined4 *)(param_1[1] + 0x114));
  (*g_engfuncs.pfnPlaybackEvent)
            (1,*(edict_t **)(*(int *)(param_1[0x1c] + 4) + 0x208),*(ushort *)((int)param_1 + 0x966),
             0.0,(float *)&DAT_100ae498,(float *)&DAT_100ae498,0.0,0.0,param_1[0x2e],
             *(int *)(param_1[0x2f] + 0x10),0,0);
  CTSAnimation::Animate((CTSAnimation *)((int *)param_1[0x1c] + 0x9e),(int *)param_1[0x1c],0x34);
  cVar1 = *(char *)(param_1[0x1c] + 0x486 + param_1[0x2e]);
  if ('\0' < cVar1) {
    *(char *)(param_1[0x2f] + 2) = cVar1 + -1;
    return 1;
  }
  *(char *)(param_1[0x1c] + 0x486 + param_1[0x2e]) = *(char *)(param_1[0x2f] + 2) + '\x01';
  return 1;
}

/* 10054b30  CTSGun::GetActiveItems  (65 bytes)
 * uint GetActiveItems(int param_1)
 * called by: CBasePlayer::UpdateClientData
 */
uint __fastcall CTSGun::GetActiveItems(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  if (*(int *)(param_1 + 0xbc) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(*(int *)(param_1 + 0xbc) + 0x14);
  bVar2 = FUN_10053ea0(*(int *)(param_1 + 0xb8));
  if ((!bVar2) && (bVar2 = FUN_10053ec0(*(int *)(param_1 + 0xb8)), !bVar2)) {
    return uVar1;
  }
  return uVar1 | 0x40;
}

/* 10054b80  CTSGun::StopReload  (86 bytes)
 * undefined StopReload(int param_1)
 * called by: CTSGun::AlternateAttack, CTSGun::MultiplyClips
 */
void __fastcall CTSGun::StopReload(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(param_1 + 0xbc);
  if (((iVar1 != 0) && (*(int *)(param_1 + 0xc0) != 0)) && (*(int *)(iVar1 + 0xc) != 0)) {
    *(undefined4 *)(iVar1 + 0xc) = 0;
    if (*(char *)(*(int *)(param_1 + 0xc0) + 0x348) == '\x01') {
      *(undefined4 *)(*(int *)(param_1 + 0xbc) + 8) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0xbc) + 0x24) = 0;
    }
    fVar2 = FUN_10076120();
    *(float *)(param_1 + 0x98) = (float)fVar2;
    *(float *)(*(int *)(param_1 + 0x70) + 0x118) = (float)fVar2;
  }
  return;
}

/* 10054be0  CTSGun::MultiplyClips  (409 bytes)
 * uint MultiplyClips(int param_1)
 * called by: PlayerAddPowerUp, pfnClientCommand
 */
uint __fastcall CTSGun::MultiplyClips(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  float10 fVar7;
  longlong lVar8;
  
  uVar6 = 0;
  if (((*(int *)(param_1 + 0xbc) == 0) || (uVar6 = *(uint *)(param_1 + 0xc0), uVar6 == 0)) ||
     (*(int *)(param_1 + 0xb8) == 0x18)) {
    return uVar6 & 0xffffff00;
  }
  StopReload(param_1);
  iVar4 = *(int *)(param_1 + 0xc0);
  if (*(char *)(iVar4 + 0xdc) != '\0') {
    bVar1 = *(byte *)(iVar4 + 0xd0);
    iVar3 = (uint)bVar1 * (*(int *)(iVar4 + 0x24) * 2 - *(int *)(*(int *)(param_1 + 0xbc) + 4));
    iVar4 = *(int *)(*(int *)(param_1 + 0x70) + 0x534);
    if (iVar4 <= iVar3) {
      iVar3 = iVar4;
    }
    *(int *)(*(int *)(param_1 + 0x70) + 0x534) = iVar4 - iVar3;
    fVar7 = GetSpeedBySlots(*(int *)(param_1 + 0x70));
    CBasePlayer::SetPlayerSpeed(*(CBasePlayer **)(param_1 + 0x70),(float)fVar7);
    iVar4 = *(int *)(*(int *)(param_1 + 0xbc) + 4) + iVar3 / (int)(uint)bVar1;
    *(int *)(*(int *)(param_1 + 0xbc) + 4) = iVar4;
    return CONCAT31((int3)((uint)iVar4 >> 8),1);
  }
  *(int *)(*(int *)(param_1 + 0xbc) + 4) = *(int *)(iVar4 + 4) << 1;
  iVar4 = *(int *)(*(int *)(param_1 + 0xc0) + 200);
  if (iVar4 != -1) {
    lVar8 = __ftol();
    *(int *)(param_1 + 0x108 + iVar4 * 0x38) = (int)lVar8;
    uVar5 = *(undefined4 *)(*(int *)(param_1 + 0xbc) + 4);
    *(undefined4 *)(param_1 + 0x120 + *(int *)(*(int *)(param_1 + 0xc0) + 200) * 0x38) = uVar5;
    return CONCAT31((int3)((uint)uVar5 >> 8),1);
  }
  cVar2 = *(char *)(*(int *)(param_1 + 0xc0) + 0x348);
  if ((cVar2 == '\x04') || (uVar5 = 0xffffffff, cVar2 == '\x05')) {
    iVar4 = *(int *)(param_1 + 0xbc);
    lVar8 = __ftol();
    *(int *)(iVar4 + 0x1c) = (int)lVar8;
    iVar4 = *(int *)(param_1 + 0xbc);
    lVar8 = __ftol();
    uVar5 = (undefined4)lVar8;
    *(undefined4 *)(iVar4 + 0x20) = uVar5;
    iVar4 = *(int *)(*(int *)(param_1 + 0xc0) + 0xcc);
    if (iVar4 != -1) {
      lVar8 = __ftol();
      uVar5 = (undefined4)lVar8;
      *(undefined4 *)(param_1 + 0x108 + iVar4 * 0x38) = uVar5;
    }
  }
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}

/* 10054d80  CTSGun::SwitchItems  (200 bytes)
 * undefined SwitchItems(int param_1)
 * called by: pfnClientCommand
 */
/* .so 0x8155c; ClientCommand "useitems" */

void __fastcall CTSGun::SwitchItems(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  void *this;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar2 = *(int *)(param_1 + 0xbc);
  if (iVar2 == 0) {
    return;
  }
  uVar4 = *(uint *)(iVar2 + 0x10);
  if (((uVar4 & 2) == 0) || ((uVar4 & 4) == 0)) {
    if ((uVar4 & 2) != 0) {
      uVar4 = *(uint *)(iVar2 + 0x14);
      if ((uVar4 & 2) != 0) {
        *(undefined4 *)(iVar2 + 0x14) = 0;
        goto LAB_10054df1;
      }
      goto LAB_10054dc8;
    }
    if ((uVar4 & 4) == 0) {
      *(undefined4 *)(iVar2 + 0x14) = 0;
      return;
    }
    if ((*(uint *)(iVar2 + 0x14) & 4) != 0) {
      *(undefined4 *)(iVar2 + 0x14) = 0;
      goto LAB_10054df1;
    }
    uVar4 = *(uint *)(iVar2 + 0x14) | 4;
  }
  else {
    uVar4 = *(uint *)(iVar2 + 0x14);
    if (((uVar4 & 2) != 0) && ((uVar4 & 4) != 0)) {
      *(undefined4 *)(iVar2 + 0x14) = 0;
      goto LAB_10054df1;
    }
    if ((uVar4 & 2) != 0) {
      *(uint *)(iVar2 + 0x14) = uVar4 | 4;
      puVar1 = (uint *)(*(int *)(param_1 + 0xbc) + 0x14);
      *puVar1 = *puVar1 & 0xfffffffd;
      goto LAB_10054df1;
    }
LAB_10054dc8:
    uVar4 = uVar4 | 2;
  }
  *(uint *)(iVar2 + 0x14) = uVar4;
LAB_10054df1:
  uVar3 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x208);
  (*g_engfuncs.pfnRandomLong)(0,3);
  uVar7 = 0;
  uVar6 = 0x3fa00000;
  fVar5 = (float10)(*g_engfuncs.pfnRandomFloat)(0.92,1.0);
  EMIT_SOUND_DYN(this,uVar3,3,s_weapons_switch_wav_100a4574,(float)fVar5,uVar6,uVar7);
  return;
}

/* 10054e50  CTSGun::SwitchFireMode  (95 bytes)
 * undefined SwitchFireMode(int param_1)
 * called by: pfnClientCommand
 */
/* .so 0x8169c; ClientCommand "firemode" */

void __fastcall CTSGun::SwitchFireMode(int param_1)

{
  bool bVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xbc) != 0) {
    iVar2 = *(byte *)(*(int *)(param_1 + 0xbc) + 2) + 1;
    bVar1 = false;
    do {
      if ((*(uint *)(*(int *)(param_1 + 0xc0) + 0xc) & 1 << ((byte)iVar2 & 0x1f)) != 0) {
        *(byte *)(*(int *)(param_1 + 0xbc) + 2) = (byte)iVar2;
        bVar1 = true;
      }
      iVar2 = iVar2 + 1;
      if (5 < iVar2) {
        iVar2 = 0;
      }
    } while (!bVar1);
    *(char *)(*(int *)(param_1 + 0xb8) + 0x486 + *(int *)(param_1 + 0x70)) =
         *(char *)(*(int *)(param_1 + 0xbc) + 2) + '\x01';
  }
  return;
}

/* 10054f30  CTSGun::SecondaryAttack  (467 bytes)
 * undefined SecondaryAttack()
 */
void __fastcall CTSGun::SecondaryAttack(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  
  iVar4 = param_1[0x2f];
  if (iVar4 == 0) {
    FUN_10058b30((int)param_1);
    return;
  }
  iVar2 = param_1[0x30];
  cVar1 = *(char *)(iVar2 + 0x348);
  if (cVar1 == '\x02') {
    *(undefined1 *)(iVar4 + 0x24) = 1;
    FUN_10056670(param_1);
    return;
  }
  if (cVar1 == '\x03') {
    *(undefined1 *)(iVar4 + 0x24) = 1;
    FUN_10057210(param_1);
    return;
  }
  if (cVar1 == '\n') {
    FUN_10056d80(param_1);
    return;
  }
  if (cVar1 == '\v') {
    return;
  }
  if (*(char *)(iVar4 + 2) == '\x04') {
    if (((*(uint *)(param_1[0x1c] + 0x800) & 0x800) == 0) &&
       (uVar3 = FUN_1004c250(param_1[0x1c]), uVar3 == 0)) {
      return;
    }
    FUN_100552a0(param_1);
    return;
  }
  if (*(char *)(iVar4 + 2) == '\x05') {
    FUN_100552a0(param_1);
    return;
  }
  if ((*(byte *)(iVar4 + 0x10) & 8) == 0) {
    if (*(char *)(iVar4 + 0x2c) == '\0') {
      if (*(short *)(iVar2 + 0x28c) != -1) {
        *(undefined1 *)(iVar4 + 0x2c) = 1;
        if (*(int *)(param_1[0x2f] + 0x28) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (int)*(short *)(*(int *)(param_1[0x2f] + 0x28) + 0xe);
        }
        (**(code **)(*param_1 + 0x16c))(iVar4,1,*(undefined4 *)(param_1[1] + 0x114));
        *(int *)(param_1[0x2f] + 0x28) = param_1[0x30] + 0x28c;
      }
    }
    else if (*(short *)(iVar2 + 0x28c) != -1) {
      *(undefined1 *)(iVar4 + 0x2c) = 0;
      if (*(int *)(param_1[0x2f] + 0x28) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (int)*(short *)(*(int *)(param_1[0x2f] + 0x28) + 0xe);
      }
      (**(code **)(*param_1 + 0x16c))(iVar4,1,*(undefined4 *)(param_1[1] + 0x114));
      *(int *)(param_1[0x2f] + 0x28) = param_1[0x30] + 0x252;
    }
  }
  else {
    if (*(float *)(*(int *)(param_1[0x1c] + 4) + 0x214) == 0.0) {
      iVar4 = *(int *)(iVar2 + 0x3c);
      if (iVar4 == 0) goto LAB_100550de;
    }
    else {
      iVar4 = *(int *)(iVar2 + 0x40);
      if ((iVar4 == 0) || ((float)iVar4 == *(float *)(*(int *)(param_1[0x1c] + 4) + 0x214))) {
        FUN_10054ee0((int)param_1);
        goto LAB_100550de;
      }
    }
    FUN_10054eb0(param_1,iVar4);
  }
LAB_100550de:
  fVar5 = FUN_10076120();
  param_1[0x24] = (int)(float)(fVar5 + (float10)0.3);
  fVar5 = FUN_10076120();
  param_1[0x26] = (int)(float)(fVar5 + (float10)1.0);
  return;
}

/* 10055110  CTSGun::PrimaryAttack  (245 bytes)
 * undefined PrimaryAttack(int * param_1)
 */
void __fastcall CTSGun::PrimaryAttack(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_1[0x2f];
  if (iVar2 == 0) {
    FUN_10058b30((int)param_1);
    return;
  }
  cVar1 = *(char *)(param_1[0x30] + 0x348);
  if (cVar1 == '\x02') {
    *(undefined1 *)(iVar2 + 0x24) = 0;
    FUN_10056670(param_1);
    return;
  }
  if (cVar1 == '\x03') {
    *(undefined1 *)(iVar2 + 0x24) = 0;
    FUN_10057210(param_1);
    return;
  }
  if (cVar1 == '\n') {
    FUN_10056740((int)param_1);
    return;
  }
  if (cVar1 == '\v') {
    if ((*(byte *)(param_1[0x1c] + 0x800) & 1) != 0) {
      *(undefined1 *)(iVar2 + 0x24) = 0;
      FUN_10057210(param_1);
      return;
    }
  }
  else {
    cVar1 = *(char *)(iVar2 + 2);
    if ((cVar1 == '\x01') || (cVar1 == '\x04')) {
      if (((*(byte *)(param_1[0x1c] + 0x800) & 1) == 0) &&
         (uVar3 = FUN_1004c250(param_1[0x1c]), uVar3 == 0)) {
        return;
      }
    }
    else if ((cVar1 != '\0') && (cVar1 != '\x05')) {
      if (cVar1 != '\x02') {
        if (cVar1 != '\x03') {
          return;
        }
        if ((*(byte *)(*(int *)(param_1[0x1c] + 4) + 0x180) & 1) == 0) {
          return;
        }
        FUN_100552a0(param_1);
        return;
      }
      if ((*(byte *)(param_1[0x1c] + 0x800) & 1) == 0) {
        return;
      }
      if (*(int *)(iVar2 + 8) != 0) {
        return;
      }
      *(uint *)(iVar2 + 8) = (param_1[0x2e] != 0x17) + 2;
      return;
    }
    FUN_100552a0(param_1);
  }
  return;
}

/* 10055210  CTSGun::AlternateAttack  (709 bytes)
 * undefined AlternateAttack()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall CTSGun::AlternateAttack(CTSGun *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  float *pfVar6;
  int *piVar7;
  void *this;
  float10 fVar8;
  float fStack_68;
  float fStack_60;
  float afStack_1c [3];
  float afStack_10 [4];
  
  if ((*(int *)&param_1->field_0xbc != 0) && (0 < *(int *)(*(int *)&param_1->field_0xc0 + 0x10))) {
    if ((DAT_100c630c & 1) == 0) {
      DAT_100c630c = DAT_100c630c | 1;
      FUN_1007dd3e(0x10055690);
    }
    if ((DAT_100c630c & 2) == 0) {
      DAT_100c630c = DAT_100c630c | 2;
      FUN_1007dd3e(0x10055680);
    }
    if ((DAT_100c630c & 4) == 0) {
      DAT_100c630c = DAT_100c630c | 4;
      FUN_1007dd3e(0x10055670);
    }
    if ((*(int *)&param_1->field_0xbc != 0) &&
       (puVar5 = get_weapon_info(*(int *)&param_1->field_0xb8), puVar5[4] != 0)) {
      iVar1 = *(int *)(*(int *)&param_1->field_0x70 + 4);
      uVar2 = *(uint *)(iVar1 + 0x250);
      UTIL_MakeVectors(iVar1 + 0x74);
      if (*(int *)&param_1->field_0xc0 != 0) {
        if (*(char *)(*(int *)&param_1->field_0xc0 + 0x348) == '\x02') {
          GrenadeIdle(param_1,1.4013e-45);
        }
        StopReload((int)param_1);
      }
      _DAT_100c6714 = 0.725;
      if ((uVar2 & 0x70c30) != 0) {
        _DAT_100c6714 = 1.0875001;
      }
      FUN_10054ee0((int)param_1);
      fVar8 = FUN_10076120();
      fVar8 = fVar8 + (float10)_DAT_100c6714;
      *(float *)&param_1->field_0x94 = (float)fVar8;
      *(float *)&param_1->field_0x90 = (float)fVar8;
      *(float *)&param_1->field_0x8c = (float)fVar8;
      *(float *)(*(int *)&param_1->field_0x70 + 0x118) = (float)fVar8;
      fVar8 = FUN_10076120();
      *(float *)&param_1->field_0x98 = (float)(fVar8 + (float10)2.0);
      puVar5 = (undefined4 *)(**(code **)(**(int **)&param_1->field_0x70 + 0x160))();
      _DAT_100d0378 = *puVar5;
      _DAT_100d037c = puVar5[1];
      _DAT_100d0380 = puVar5[2];
      _DAT_100c6348 = gpGlobals->v_forward[0];
      _DAT_100c634c = gpGlobals->v_forward[1];
      _DAT_100c6350 = gpGlobals->v_forward[2];
      Vector::Vector((Vector *)&stack0xffffffac,gpGlobals->v_forward);
      fStack_60 = 2.6295555e-29;
      pfVar6 = (float *)Vector::operator*((Vector *)gpGlobals->v_forward,afStack_1c,35.0);
      fStack_60 = 2.6295603e-29;
      puVar5 = (undefined4 *)Vector::operator+((Vector *)&DAT_100d0378,afStack_10,pfVar6);
      fStack_68 = 2.6295636e-29;
      Vector::Vector((Vector *)&fStack_60,puVar5);
      Vector::Vector((Vector *)&stack0xffffff94,(undefined4 *)&DAT_100d0378);
      piVar7 = FUN_10063eb0(*(void **)&param_1->field_0x70);
      if (piVar7 != (int *)0x0) {
        uVar3 = *(undefined4 *)(*(int *)(*(int *)&param_1->field_0x70 + 4) + 0x208);
        (*g_engfuncs.pfnRandomLong)(0,0x1f);
        EMIT_SOUND_DYN(this,uVar3,4,s_player_kevlarhit_wav_100a4588,0x3f800000,0x3f4ccccd,0);
      }
      pcVar4 = *(char **)&param_1->field_0xbc;
      if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
        fStack_60 = 2.629616e-29;
        (*g_engfuncs.pfnPlaybackEvent)
                  (1,*(edict_t **)(*(int *)(*(int *)&param_1->field_0x70 + 4) + 0x208),
                   *(ushort *)&param_1->field_0x956,0.0,(float *)&DAT_100ae498,
                   (float *)&DAT_100ae498,DAT_100c6358,DAT_100c635c,*(int *)&param_1->field_0xb8,
                   *(int *)(pcVar4 + 0x10),0,0);
      }
    }
    return;
  }
  return;
}

/* 10057c50  CTSGun::Reload  (295 bytes)
 * undefined Reload(void * param_1)
 */
void __fastcall CTSGun::Reload(void *param_1)

{
  char cVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  float10 fVar5;
  
  iVar4 = *(int *)((int)param_1 + 0xbc);
  if (iVar4 == 0) {
    FUN_100589c0((int)param_1);
    return;
  }
  iVar2 = *(int *)((int)param_1 + 0xc0);
  cVar1 = *(char *)(iVar2 + 0x348);
  if (cVar1 == '\x02') {
    return;
  }
  if (cVar1 == '\x03') {
    FUN_100589c0((int)param_1);
    return;
  }
  if (cVar1 == '\n') {
    FUN_100589c0((int)param_1);
    return;
  }
  if (cVar1 == '\x01') {
    FUN_100579e0((int)param_1);
    return;
  }
  if (*(int *)((int)param_1 + (uint)*(byte *)(iVar2 + 8) * 4 + 0xc4) < 1) {
    return;
  }
  if (*(int *)(iVar4 + 8) != 0) {
    return;
  }
  if ((*(int *)((int)param_1 + 0xb8) == 0x21) && (0 < *(int *)(iVar4 + 4))) {
    if (*(int *)(iVar4 + 0x28) != 0) {
      sVar3 = *(short *)(*(int *)(iVar4 + 0x28) + 0x10);
      goto LAB_10057cf0;
    }
  }
  else if (*(int *)(iVar4 + 0x28) != 0) {
    sVar3 = *(short *)(*(int *)(iVar4 + 0x28) + 2);
    goto LAB_10057cf0;
  }
  sVar3 = 0;
LAB_10057cf0:
  iVar4 = FUN_10057970(param_1,*(int *)(iVar2 + 4),(int)sVar3,*(float *)(iVar2 + 0x14));
  if (iVar4 != 0) {
    fVar5 = FUN_10076120();
    *(float *)((int)param_1 + 0x98) = (float)(fVar5 + (float10)5.0);
    FUN_10054ee0((int)param_1);
    (*g_engfuncs.pfnPlaybackEvent)
              (1,*(edict_t **)(*(int *)(*(int *)((int)param_1 + 0x70) + 4) + 0x208),
               *(ushort *)((int)param_1 + 0x960),0.0,(float *)&DAT_100ae498,(float *)&DAT_100ae498,
               0.0,0.0,*(int *)((int)param_1 + 0xb8),*(int *)(*(int *)((int)param_1 + 0xbc) + 0x10),
               0,0);
    CTSAnimation::Animate
              ((CTSAnimation *)(*(int **)((int)param_1 + 0x70) + 0x9e),
               *(int **)((int)param_1 + 0x70),0x33);
  }
  return;
}

/* 10057d80  CTSGun::GrenadeIdle  (1252 bytes)
 * undefined GrenadeIdle(float param_1)
 * called by: CBasePlayer::DropWeapon, CTSGun::AlternateAttack, CTSGun::HolsterWeapon, CTSGun::WeaponIdle
 */
void __thiscall CTSGun::GrenadeIdle(CTSGun *this,float param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  float10 fVar5;
  Vector VStack_60;
  float local_54;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar3 = param_1;
  iVar1 = *(int *)&this->field_0xbc;
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(iVar1 + 8) == 1) {
    iVar1 = *(int *)(*(int *)&this->field_0x70 + 4);
    if (((*(uint *)(iVar1 + 0x180) & 0x801) != 0) && (param_1 == 0.0)) {
      return;
    }
    local_38 = *(undefined4 *)(iVar1 + 0x78);
    local_34 = *(undefined4 *)(iVar1 + 0x7c);
    if (0.0 <= *(float *)(iVar1 + 0x74)) {
      fVar2 = 1.1111112;
    }
    else {
      fVar2 = 0.8888889;
    }
    local_3c = *(float *)(iVar1 + 0x74) * fVar2 - 10.0;
    param_1 = (90.0 - local_3c) * 7.0;
    if (750.0 < param_1) {
      param_1 = 750.0;
    }
    UTIL_MakeVectors(&local_3c);
    if (*(char *)(*(int *)&this->field_0xbc + 0x24) == '\0') {
      iVar1 = *(int *)(*(int *)&this->field_0x70 + 4);
      local_24 = *(float *)(iVar1 + 0x174) + *(float *)(iVar1 + 8) + gpGlobals->v_forward[0] * 16.0;
      local_20 = *(float *)(iVar1 + 0x178) + *(float *)(iVar1 + 0xc) +
                 gpGlobals->v_forward[1] * 16.0;
      local_1c = *(float *)(iVar1 + 0x17c) + *(float *)(iVar1 + 0x10) +
                 gpGlobals->v_forward[2] * 16.0;
      iVar1 = *(int *)(*(int *)&this->field_0x70 + 4);
      local_8 = param_1 * gpGlobals->v_forward[1];
      local_4 = param_1 * gpGlobals->v_forward[2];
      local_18 = param_1 * gpGlobals->v_forward[0] + *(float *)(iVar1 + 0x20);
      local_14 = local_8 + *(float *)(iVar1 + 0x24);
      local_10 = local_4 + *(float *)(iVar1 + 0x28);
    }
    else {
      iVar1 = *(int *)(*(int *)&this->field_0x70 + 4);
      local_24 = gpGlobals->v_forward[0] * 16.0 + *(float *)(iVar1 + 8);
      local_20 = gpGlobals->v_forward[1] * 16.0 + *(float *)(iVar1 + 0xc);
      local_1c = gpGlobals->v_forward[2] * 16.0 + *(float *)(iVar1 + 0x10);
      fVar2 = param_1 * 0.6666667;
      local_c = fVar2 * gpGlobals->v_forward[0];
      iVar1 = *(int *)(*(int *)&this->field_0x70 + 4);
      local_18 = local_c + *(float *)(iVar1 + 0x20);
      local_14 = fVar2 * gpGlobals->v_forward[1] + *(float *)(iVar1 + 0x24);
      local_10 = fVar2 * gpGlobals->v_forward[2] + *(float *)(iVar1 + 0x28);
      local_8 = local_14;
      local_4 = local_10;
    }
    local_30 = local_18;
    local_2c = local_14;
    local_28 = local_10;
    if (*(int *)(*(int *)&this->field_0xc0 + 0x20) == 4) {
      local_54 = local_18;
      Vector::Vector(&VStack_60,&local_24);
      piVar4 = CM61Grenade::CreateGrenade(*(int **)&this->field_0x70,0x40400000);
      if (piVar4 != (int *)0x0) {
        if (*(char *)(*(int *)&this->field_0xbc + 0x24) == '\0') {
          *(undefined4 *)(piVar4[1] + 0x5c) = 0x43480000;
        }
        else {
          *(undefined4 *)(piVar4[1] + 0x120) = 0x3ecccccd;
          *(undefined4 *)(piVar4[1] + 0x60) = 0x44160000;
          *(undefined4 *)(piVar4[1] + 0x5c) = 0xc2c80000;
        }
      }
    }
    iVar1 = *(int *)(*(int *)&this->field_0xbc + 0x28);
    if (iVar1 == 0) {
      local_54 = 0.0;
    }
    else {
      local_54 = (float)(int)*(short *)(iVar1 + ((*(char *)(*(int *)&this->field_0xbc + 0x24) !=
                                                 '\0') + 0x14) * 2);
    }
    VStack_60.z = 2.6328865e-29;
    (*this->vtable[0x5b])();
    (*g_engfuncs.pfnPlaybackEvent)
              (1,*(edict_t **)(*(int *)(*(int *)&this->field_0x70 + 4) + 0x208),
               *(ushort *)&this->field_0x968,0.0,(float *)&DAT_100ae498,(float *)&DAT_100ae498,0.0,
               0.0,(*(char *)(*(int *)&this->field_0xbc + 0x24) != '\0') + 0x14,0,0,0);
    local_54 = 2.632914e-29;
    CTSAnimation::Animate
              ((CTSAnimation *)(*(int **)&this->field_0x70 + 0x9e),*(int **)&this->field_0x70,0x35);
    fVar5 = FUN_10076120();
    *(float *)&this->field_0x90 = (float)(fVar5 + (float10)0.5);
    *(float *)&this->field_0x8c = (float)(fVar5 + (float10)0.5);
    fVar5 = FUN_10076120();
    *(float *)&this->field_0x98 = (float)(fVar5 + (float10)0.5);
    if (*(int *)(*(int *)&this->field_0xbc + 4) == 1) {
      *(undefined4 *)(*(int *)(*(int *)&this->field_0x70 + 4) + 0xc0) = 0;
    }
    if (fVar3 == 0.0) {
      *(undefined4 *)(*(int *)&this->field_0xbc + 8) = 2;
    }
    else {
      *(undefined4 *)(*(int *)&this->field_0xbc + 8) = 0;
    }
    *(int *)(*(int *)&this->field_0xbc + 4) = *(int *)(*(int *)&this->field_0xbc + 4) + -1;
    if (fVar3 == 0.0) {
      return;
    }
  }
  else {
    if (*(int *)(iVar1 + 8) != 2) {
      fVar5 = FUN_10076120();
      *(float *)&this->field_0x98 = (float)(fVar5 + (float10)3.0);
      return;
    }
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  *(uint *)(*(int *)&this->field_0x70 + 0x534) =
       *(int *)(*(int *)&this->field_0x70 + 0x534) +
       (uint)*(byte *)(*(int *)&this->field_0xc0 + 0xd0);
  fVar5 = GetSpeedBySlots(*(int *)&this->field_0x70);
  CBasePlayer::SetPlayerSpeed(*(CBasePlayer **)&this->field_0x70,(float)fVar5);
  if (*(int *)(*(int *)&this->field_0xbc + 4) < 1) {
    local_54 = 2.6330047e-29;
    DropWeapon(this,*(int *)&this->field_0xb8,'\x01');
    return;
  }
  iVar1 = *(int *)(*(int *)&this->field_0xbc + 0x28);
  if (iVar1 == 0) {
    local_54 = 0.0;
  }
  else {
    local_54 = (float)(int)*(short *)(iVar1 + 4);
  }
  VStack_60.z = 2.632992e-29;
  (*this->vtable[0x5b])();
  VStack_60.z = 2.6329936e-29;
  fVar5 = FUN_10076120();
  *(float *)&this->field_0x98 = (float)(fVar5 + (float10)2.0);
  return;
}

/* 10058270  CTSGun::WeaponIdle  (335 bytes)
 * undefined WeaponIdle(int * param_1)
 */
void __fastcall CTSGun::WeaponIdle(int *param_1)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = param_1[0x2f];
  if (iVar2 == 0) {
    FUN_10058970(param_1);
    return;
  }
  param_1[0x29] = *(int *)(iVar2 + 4);
  if (*(char *)(iVar2 + 0x2c) == '\0') {
    *(int *)(iVar2 + 0x28) = param_1[0x30] + 0x252;
  }
  else {
    *(int *)(iVar2 + 0x28) = param_1[0x30] + 0x28c;
  }
  if ((*(char *)(param_1[0x30] + 0x348) == '\x01') && (*(int *)(param_1[0x2f] + 8) != 0)) {
    (**(code **)(*param_1 + 0x180))();
    return;
  }
  iVar2 = param_1[0x2f];
  if ((*(char *)(iVar2 + 2) == '\x02') && ((float)param_1[0x23] <= 0.0)) {
    if (*(int *)(iVar2 + 8) < 1) {
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    else {
      FUN_100552a0(param_1);
      *(int *)(param_1[0x2f] + 8) = *(int *)(param_1[0x2f] + 8) + -1;
    }
  }
  fVar3 = FUN_10076120();
  if ((float10)(float)param_1[0x26] <= fVar3) {
    if (*(char *)(param_1[0x30] + 0x348) == '\x02') {
      GrenadeIdle((CTSGun *)param_1,0.0);
      return;
    }
    uVar1 = FUN_1004c230(param_1[0x1c]);
    if ((uVar1 == 0) && (*(int *)(param_1[0x2f] + 4) < 1)) {
      (**(code **)(*param_1 + 0x180))();
      return;
    }
    if (*(int *)(param_1[0x2f] + 4) != 0) {
      fVar3 = FUN_10076120();
      param_1[0x26] = (int)(float)(fVar3 + (float10)3.0);
      if (*(short **)(param_1[0x2f] + 0x28) == (short *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (int)**(short **)(param_1[0x2f] + 0x28);
      }
      (**(code **)(*param_1 + 0x16c))(iVar2,0,*(undefined4 *)(param_1[1] + 0x114));
    }
  }
  return;
}

/* 100583c0  CTSGun::Holster  (8 bytes)
 * undefined Holster()
 */
void __fastcall CTSGun::Holster(int *param_1)

{
  HolsterWeapon(param_1);
  return;
}

/* 100583d0  CTSGun::HolsterWeapon  (468 bytes)
 * undefined HolsterWeapon(int * param_1)
 * called by: CBasePlayer::DropWeapon, CBasePlayer::StartObserver, CTSGun::Deploy, CTSGun::DropWeapon, CTSGun::Holster, CTSGun::SelectWeapon
 */
void __fastcall CTSGun::HolsterWeapon(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  *(int **)(param_1[0x1c] + 0xa04) = param_1;
  *(undefined4 *)(*(int *)(param_1[0x1c] + 4) + 0xbc) = 0;
  *(undefined4 *)(*(int *)(param_1[0x1c] + 4) + 0xc0) = 0;
  FUN_10054ee0((int)param_1);
  uVar4 = 0xffffffff;
  pcVar6 = &DAT_100a9398;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)(param_1[0x1c] + 0xb44);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = &DAT_100a9398;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)(param_1[0x1c] + 0x464);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  fVar8 = FUN_10076120();
  *(float *)(param_1[0x1c] + 0x118) = (float)(fVar8 + (float10)0.5);
  fVar8 = FUN_10076120();
  iVar2 = param_1[0x1c];
  param_1[0x26] = (int)(float)(fVar8 + (float10)3.0);
  if ((*(float *)(iVar2 + 0x788) != 0.0) && (*(char *)(iVar2 + 0x790) != '\0')) {
    *(undefined4 *)(iVar2 + 0x788) = 0;
    *(undefined4 *)(param_1[0x1c] + 0x78c) = 0;
    *(undefined1 *)(param_1[0x1c] + 0x790) = 0;
  }
  if (((int *)param_1[0x1c] != (int *)0x0) &&
     (iVar2 = (**(code **)(*(int *)param_1[0x1c] + 0xac))(), iVar2 == 0)) {
    return;
  }
  if ((param_1[0x2f] != 0) && (param_1[0x30] != 0)) {
    if (*(char *)(param_1[0x30] + 0x348) == '\x02') {
      GrenadeIdle((CTSGun *)param_1,1.4013e-45);
    }
    else {
      *(undefined4 *)(param_1[0x2f] + 0xc) = 0;
      *(undefined4 *)(param_1[0x2f] + 8) = 0;
    }
  }
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  puVar3 = get_weapon_info(0);
  uVar10 = 0;
  uVar9 = 0;
  *(int *)(*(int *)(param_1[0x1c] + 4) + 0xbc) = (int)puVar3 + (0x132 - (int)gpGlobals->pStringBase)
  ;
  iVar2 = *param_1;
  puVar3 = get_weapon_info(0);
  (**(code **)(iVar2 + 0x16c))((int)*(short *)((int)puVar3 + 0x256),uVar9,uVar10);
  (*g_engfuncs.pfnPlaybackEvent)
            (1,*(edict_t **)(*(int *)(param_1[0x1c] + 4) + 0x208),*(ushort *)((int)param_1 + 0x966),
             0.0,(float *)&DAT_100ae498,(float *)&DAT_100ae498,0.0,0.0,param_1[0x2e],0,0,0);
  param_1[0x27c] = 0;
  param_1[0x27b] = 0;
  param_1[0x27d] = 0;
  return;
}

/* 100585b0  CTSGun::UpdateClientData  (839 bytes)
 * undefined UpdateClientData()
 */
undefined4 __thiscall CTSGun::UpdateClientData(int param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined4 in_stack_00000020;
  
  if (gpGlobals->time < *(float *)(param_1 + 0x9d0)) {
    return 0;
  }
  bVar1 = false;
  iVar4 = 0x25;
  pbVar6 = (byte *)(param_1 + 0x91c);
  *(float *)(param_1 + 0x9d0) = gpGlobals->time + 0.1;
  do {
    if (*(byte *)(iVar4 + 0x9a8 + param_1) != *pbVar6) {
      *(byte *)(iVar4 + 0x9a8 + param_1) = *pbVar6;
      (*g_engfuncs.pfnMessageBegin)
                (1,DAT_100d9780,(float *)0x0,*(edict_t **)(*(int *)(param_2 + 4) + 0x208));
      (*g_engfuncs.pfnWriteByte)(iVar4);
      (*g_engfuncs.pfnWriteByte)((uint)*pbVar6);
      (*g_engfuncs.pfnWriteByte)(*(int *)(pbVar6 + 4));
      (*g_engfuncs.pfnMessageEnd)();
    }
    iVar4 = iVar4 + -1;
    pbVar6 = pbVar6 + -0x38;
  } while (-1 < iVar4);
  puVar2 = *(undefined4 **)(param_1 + 0xbc);
  if (puVar2 != (undefined4 *)0x0) {
    if (*(uint *)(param_1 + 0xb8) != (uint)*(byte *)(param_1 + 0x96a)) {
      *(char *)(param_1 + 0x96a) = (char)*(uint *)(param_1 + 0xb8);
      puVar5 = puVar2;
      puVar7 = (undefined4 *)(param_1 + 0x96c);
      for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      bVar1 = true;
      *(undefined4 *)(param_1 + 0x9a4) =
           *(undefined4 *)(param_1 + 0xc4 + (uint)*(byte *)(*(int *)(param_1 + 0xc0) + 8) * 4);
    }
    iVar4 = *(int *)(param_1 + 0xc0);
    if (*(int *)(param_1 + 0x9a4) == *(int *)(param_1 + 0xc4 + (uint)*(byte *)(iVar4 + 8) * 4)) {
      if (!bVar1) {
        return 1;
      }
    }
    else {
      puVar5 = (undefined4 *)(param_1 + 0x96c);
      for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      *(undefined4 *)(param_1 + 0x9a4) =
           *(undefined4 *)(param_1 + 0xc4 + (uint)*(byte *)(iVar4 + 8) * 4);
    }
    (*g_engfuncs.pfnMessageBegin)
              (1,DAT_100d9764,(float *)0x0,*(edict_t **)(*(int *)(param_2 + 4) + 0x208));
    (*g_engfuncs.pfnWriteByte)(*(int *)(param_1 + 0xb8));
    (*g_engfuncs.pfnWriteByte)(*(int *)(param_1 + 0x970));
    (*g_engfuncs.pfnWriteShort)(*(int *)(param_1 + 0x9a4));
    (*g_engfuncs.pfnWriteByte)((uint)*(byte *)(param_1 + 0x96e));
    (*g_engfuncs.pfnWriteByte)(*(int *)(param_1 + 0x97c));
    (*g_engfuncs.pfnMessageEnd)();
    if (in_stack_00000020._3_1_ != '\0') {
      puVar2 = get_weapon_info(*(int *)(param_1 + 0xb8));
      iVar4 = puVar2[0x32];
      if ((iVar4 != -1) &&
         (iVar3 = param_1 + iVar4 * 0x38, *(char *)(param_1 + 0x104 + iVar4 * 0x38) != '\0')) {
        (*g_engfuncs.pfnMessageBegin)
                  (1,DAT_100d9780,(float *)0x0,*(edict_t **)(*(int *)(param_2 + 4) + 0x208));
        (*g_engfuncs.pfnWriteByte)(iVar4);
        (*g_engfuncs.pfnWriteByte)((uint)*(byte *)(iVar3 + 0x104));
        (*g_engfuncs.pfnWriteByte)(*(int *)(iVar3 + 0x108));
        (*g_engfuncs.pfnMessageEnd)();
      }
      puVar2 = get_weapon_info(*(int *)(param_1 + 0xb8));
      iVar4 = puVar2[0x33];
      if (((iVar4 != -1) && (iVar4 != *(int *)(param_1 + 0xb8))) &&
         (iVar3 = param_1 + iVar4 * 0x38, *(char *)(param_1 + 0x104 + iVar4 * 0x38) != '\0')) {
        (*g_engfuncs.pfnMessageBegin)
                  (1,DAT_100d9780,(float *)0x0,*(edict_t **)(*(int *)(param_2 + 4) + 0x208));
        (*g_engfuncs.pfnWriteByte)(iVar4);
        (*g_engfuncs.pfnWriteByte)((uint)*(byte *)(iVar3 + 0x104));
        (*g_engfuncs.pfnWriteByte)(*(int *)(iVar3 + 0x108));
        (*g_engfuncs.pfnMessageEnd)();
      }
      *(undefined4 *)(param_1 + 0x970) = *(undefined4 *)(*(int *)(param_1 + 0xbc) + 4);
    }
    return 1;
  }
  if (*(uint *)(param_1 + 0xb8) != (uint)*(byte *)(param_1 + 0x96a)) {
    *(char *)(param_1 + 0x96a) = (char)*(uint *)(param_1 + 0xb8);
    (*g_engfuncs.pfnMessageBegin)
              (1,DAT_100d9764,(float *)0x0,*(edict_t **)(*(int *)(param_2 + 4) + 0x208));
    (*g_engfuncs.pfnWriteByte)(*(int *)(param_1 + 0xb8));
    lVar8 = __ftol();
    (*g_engfuncs.pfnWriteByte)((int)lVar8);
    (*g_engfuncs.pfnWriteShort)(0);
    (*g_engfuncs.pfnWriteByte)(0);
    (*g_engfuncs.pfnWriteByte)(0);
    (*g_engfuncs.pfnMessageEnd)();
  }
  return 0;
}

/* 10058900  CTSGun::GetItemInfo  (99 bytes)
 * undefined GetItemInfo()
 */
undefined4 __thiscall CTSGun::GetItemInfo(int param_1,undefined4 *param_2)

{
  param_2[6] = gpGlobals->pStringBase + **(int **)(param_1 + 4);
  param_2[3] = 0xffffffff;
  param_2[5] = 0xffffffff;
  param_2[7] = 0xffffffff;
  param_2[2] = 0;
  param_2[4] = 0;
  *param_2 = 1;
  param_2[1] = 2;
  param_2[9] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0x10;
  param_2[8] = 0x10;
  param_2[10] = 1;
  return 1;
}

