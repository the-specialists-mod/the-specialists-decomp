/* mp.dll - CTSGroundWeapon (9 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1005dd00  CTSGroundWeapon::ObjectCaps  (6 bytes)
 * undefined ObjectCaps()
 */
/* Identical-code folding: also CM61Grenade::ObjectCaps, CPushable::ObjectCaps,
   CRecharge::ObjectCaps, CTSBomb::ObjectCaps, CTSFlag::ObjectCaps, CTSGroundAmmo::ObjectCaps,
   CTSGroundWeapon::ObjectCaps, CTSHack::ObjectCaps, CTSKnife::ObjectCaps, CTSShrapnel::ObjectCaps,
   CTSTeamEscape::ObjectCaps, CTSWorldGun::ObjectCaps, CWallHealth::ObjectCaps */

undefined4 CTSGroundWeapon::ObjectCaps(void)

{
  return 0x10;
}

/* 10075060  CTSGroundWeapon::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CTSGroundWeapon::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CTSGroundWeapon_100a6380,(int)param_1,0x100a62e8,3);
  return;
}

/* 10075090  CTSGroundWeapon::Restore  (48 bytes)
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
            (param_2,(byte_conflict *)s_CTSGroundWeapon_100a6380,(int)param_1,&DAT_100a62e8,3);
  return;
}

/* 100750c0  CTSGroundWeapon::KeyValue  (452 bytes)
 * undefined KeyValue()
 */
void __thiscall CTSGroundWeapon::KeyValue(void *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  void *this;
  char *pcVar7;
  bool bVar8;
  undefined3 uVar6;
  
  pbVar5 = *(byte **)(param_2 + 4);
  pcVar7 = s_tsweaponid_100a6324;
  pbVar2 = pbVar5;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100750f8:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_100750fd;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100750f8;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100750fd:
  if (iVar3 == 0) {
    uVar4 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 0x94) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_wduration_100a63a4;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1007514c:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10075151;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1007514c;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10075151:
  if (iVar3 == 0) {
    uVar4 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 0x90) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_wextraclip_100a6398;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100751a0:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_100751a5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100751a0;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100751a5:
  if (iVar3 == 0) {
    uVar4 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 0x98) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_buyable_100a6390;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100751f4:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_100751f9;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100751f4;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100751f9:
  if (iVar3 == 0) {
    iVar3 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(bool *)((int)param_1 + 0xa0) = iVar3 != 0;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_attackerteam_100a3548;
  do {
    bVar1 = *pbVar5;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1007524d:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10075252;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    this = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1007524d;
    pbVar5 = pbVar5 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10075252:
  if (iVar3 == 0) {
    uVar4 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 0x9c) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

/* 10075290  CTSGroundWeapon::Spawn  (339 bytes)
 * undefined Spawn(int * param_1)
 * called by: CTSBigPistolWeapon::Spawn, CTSGrenadeWeapon::Spawn, CTSKatanaWeapon::Spawn, CTSMGWeapon::Spawn, CTSSniperWeapon::Spawn
 */
void __fastcall CTSGroundWeapon::Spawn(int *param_1)

{
  edict_t *e;
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*param_1 + 0x20))();
  pcVar2 = (char *)get_weapon_info(param_1[0x25]);
  if (*pcVar2 == '\0') {
    param_1[4] = (int)CBaseEntity::SUB_Remove;
    *(float *)(param_1[1] + 0x104) = gpGlobals->time + 0.1;
    return;
  }
  if ((*(int *)(pcVar2 + 0xcc) != -1) && (pcVar2[0x348] == '\x04')) {
    param_1[0x25] = *(int *)(pcVar2 + 0xcc);
  }
  e = *(edict_t **)(param_1[1] + 0x208);
  puVar3 = get_weapon_info(param_1[0x25]);
  (*g_engfuncs.pfnSetModel)(e,(char *)((int)puVar3 + 0x1f2));
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
  param_1[5] = 0;
  param_1[4] = (int)CTSGroundAmmo::Fall;
  *(float *)(param_1[1] + 0x104) = gpGlobals->time + 0.1;
  *(undefined4 *)(param_1[1] + 0x250) = 0;
  *(uint *)(param_1[1] + 0x250) = *(uint *)(param_1[1] + 0x250) | 2;
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

/* 10075860  CTSGroundWeapon::OnGround  (139 bytes)
 * undefined OnGround()
 */
void __fastcall CTSGroundWeapon::OnGround(int param_1)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 1;
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) & 0xffffff7f;
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

/* 100758f0  CTSGroundWeapon::Use  (16 bytes)
 * undefined Use()
 */
void __thiscall CTSGroundWeapon::Use(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x110))(param_2);
  return;
}

/* 10075900  CTSGroundWeapon::GetWeapon  (750 bytes)
 * undefined GetWeapon(int * param_1)
 * called by: CTSBigPistolWeapon::GetWeapon
 */
void __thiscall CTSGroundWeapon::GetWeapon(CTSGroundWeapon *this,int *param_1)

{
  uint uVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  byte_conflict *pbVar6;
  undefined4 *puVar7;
  char *pcVar8;
  
  piVar3 = param_1;
  iVar4 = (**(code **)(*param_1 + 0xc0))();
  if (iVar4 == 0) {
    return;
  }
  iVar4 = (**(code **)(*param_1 + 0xac))();
  if (iVar4 == 0) {
    return;
  }
  if ((*(byte *)(param_1[1] + 0x118) & 0x80) != 0) {
    return;
  }
  if ((this->pev->effects & 0x80) != 0) {
    return;
  }
  iVar4 = 0;
  *(uint *)&this->field_0x98 =
       *(uint *)&this->field_0x98 & ((int)*(uint *)&this->field_0x98 < 1) - 1;
  uVar1 = this->pev->spawnflags;
  iVar5 = CBaseMonster::ShouldFadeOnDeath();
  if ((iVar5 != 0) && (this->field_0xa0 != '\0')) {
    if (((TSGameRules == '\x03') || (TSGameRules == '\x02')) && (*(int *)&this->field_0x9c != -1)) {
      pbVar6 = (byte_conflict *)(**(code **)(*param_1 + 200))();
      iVar4 = CTSGameRules::GetTeamIndex((CTSGameRules *)&TSGameRules,pbVar6);
      if (*(int *)&this->field_0x9c != iVar4) {
        iVar4 = param_1[1];
        pcVar8 = s_Your_team_cannot_buy_this_weapon_100a63e0;
        goto LAB_10075a42;
      }
    }
    puVar7 = get_weapon_info(*(int *)&this->field_0x94);
    iVar4 = puVar7[0x36];
    if ((uVar1 & 1) != 0) {
      iVar4 = iVar4 + 900;
    }
    if ((uVar1 & 2) != 0) {
      iVar4 = iVar4 + 800;
    }
    if ((uVar1 & 4) != 0) {
      iVar4 = iVar4 + 500;
    }
    if ((uVar1 & 8) != 0) {
      iVar4 = iVar4 + 0x708;
    }
    puVar7 = get_weapon_info(*(int *)&this->field_0x94);
    puVar7 = get_ammo_info((uint)*(byte *)(puVar7 + 2));
    iVar4 = iVar4 + puVar7[1] * *(int *)&this->field_0x98;
    if (param_1[0x14b] < iVar4) {
      iVar4 = param_1[1];
      pcVar8 = s_You_don_t_have_enough_money_for_t_100a63b0;
LAB_10075a42:
      TSHudMessageOne(0,0,0,0x10,0x1e,pcVar8,iVar4);
      return;
    }
  }
  iVar5 = CBasePlayer::PickUpWeapon
                    ((CBasePlayer *)param_1,*(int *)&this->field_0x94,(undefined4 *)0x0,uVar1,
                     *(int *)&this->field_0x94 != 0x1d,'\0');
  if (iVar5 == 0) {
    return;
  }
  CBasePlayer::GiveCash((CBasePlayer *)param_1,-iVar4);
  *(undefined4 *)&this->field_0x14 = 0;
  this->pev->effects = this->pev->effects | 0x80;
  param_1 = *(int **)&this->field_0x90;
  if (((int)param_1 < 1) && ((TSGameRules == '\x03' || (TSGameRules == '\x02')))) {
    *(undefined4 *)&this->field_0x10 = 0;
    goto LAB_10075b10;
  }
  *(code **)&this->field_0x10 = CTSGroundAmmo::Fall;
  if ((int)param_1 < 1) {
    fVar2 = 60.0;
  }
  else {
    if ((int)param_1 < 0xb4) {
      if ((int)param_1 < 2) {
        param_1 = (int *)0x1;
      }
      else if (0xb3 < (int)param_1) goto LAB_10075ae9;
    }
    else {
LAB_10075ae9:
      param_1 = (int *)0xb4;
    }
    fVar2 = (float)(int)param_1;
  }
  this->pev->nextthink = fVar2 + gpGlobals->time;
LAB_10075b10:
  if ((*(int *)&this->field_0x98 != 0) &&
     (puVar7 = get_weapon_info(*(int *)&this->field_0x94),
     *(int *)(piVar3[0x27f] + 0xc4 + (uint)*(byte *)(puVar7 + 2) * 4) < 1)) {
    iVar4 = *(int *)&this->field_0x98;
    puVar7 = get_weapon_info(*(int *)&this->field_0x94);
    iVar4 = CTSGun::AddAmmo((CTSGun *)piVar3[0x27f],*(byte_conflict *)(puVar7 + 2),iVar4);
    if (iVar4 != 0) {
      EMIT_SOUND_DYN((void *)piVar3[1],*(undefined4 *)(piVar3[1] + 0x208),3,
                     s_items_9mmclip1_wav_100a5460,0x3f800000,0x3f4ccccd,0);
    }
  }
  iVar4 = this->pev->message;
  if (iVar4 != 0) {
    TSHudMessageOne(0,0,0,8,0x1e,gpGlobals->pStringBase + iVar4,piVar3[1]);
  }
  iVar4 = this->pev->target;
  if (iVar4 != 0) {
    FireTargets((int)(gpGlobals->pStringBase + iVar4),this,this,3,0);
  }
  return;
}

/* 10075bf0  CTSGroundWeapon::WaitTouch  (25 bytes)
 * void WaitTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CTSGroundWeapon::WaitTouch(class CBaseEntity *) */

void __thiscall CTSGroundWeapon::WaitTouch(CTSGroundWeapon *this,CBaseEntity *param_1)

{
                    /* 0x75bf0  154  ?WaitTouch@CTSGroundWeapon@@QAEXPAVCBaseEntity@@@Z */
  if (*(int *)&this->field_0x94 == 0x1d) {
    (*this->vtable[0x44])(param_1);
  }
  return;
}

