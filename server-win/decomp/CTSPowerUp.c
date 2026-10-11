/* mp.dll - CTSPowerUp (11 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10066720  CTSPowerUp::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CTSPowerUp::Save(CBaseAnimating *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseAnimating::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CTSPowerUp_100a54d4,(int)param_1,0x100a5498,2);
  return;
}

/* 10066750  CTSPowerUp::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CTSPowerUp::Restore(CBaseAnimating *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseAnimating::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CTSPowerUp_100a54d4,(int)param_1,&DAT_100a5498,2);
  return;
}

/* 10066780  CTSPowerUp::KeyValue  (277 bytes)
 * undefined KeyValue()
 */
void __thiscall CTSPowerUp::KeyValue(CBaseDelay *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  CBaseDelay *this;
  char *pcVar7;
  bool bVar8;
  float10 fVar9;
  undefined3 uVar6;
  
  pbVar5 = *(byte **)(param_2 + 4);
  pcVar7 = s_pwuptype_100a54ec;
  pbVar2 = pbVar5;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (CBaseDelay *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100667b8:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_100667bd;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (CBaseDelay *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100667b8;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100667bd:
  if (iVar3 == 0) {
    uVar4 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(undefined4 *)&param_1[1].field_0x18 = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_pwupduration_100a54b8;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (CBaseDelay *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10066809:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1006680e;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (CBaseDelay *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10066809;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1006680e:
  if (iVar3 == 0) {
    uVar4 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(undefined4 *)&param_1[1].field_0x28 = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_pwupmult_100a54e0;
  do {
    bVar1 = *pbVar5;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (CBaseDelay *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1006685d:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10066862;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    this = (CBaseDelay *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1006685d;
    pbVar5 = pbVar5 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10066862:
  if (iVar3 == 0) {
    fVar9 = atof((undefined *)this,*(byte_conflict **)(param_2 + 8));
    *(float *)&param_1[1].field_0x2c = (float)fVar9;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  CBaseDelay::KeyValue(param_1,param_2);
  return;
}

/* 100668a0  CTSPowerUp::CreatePowerUp  (75 bytes)
 * int * CreatePowerUp(uint param_1, int param_2)
 * called by: CBasePlayer::DropWeapon, CBasePlayer::UpdatePowerUpState, CTSPowerUp::WaitTouch, FUN_10066370
 */
int * __cdecl CTSPowerUp::CreatePowerUp(uint param_1,int param_2)

{
  CTSPowerUp *this;
  
  this = (CTSPowerUp *)GetClassPtr<CTSPowerUp>(0);
  if (this == (CTSPowerUp *)0x0) {
    UTIL_ClientPrintAll(3,s_WARNING_cannot_create_powerup__100a54f8,0,0,0,0);
    return (int *)0x0;
  }
  (*this->vtable[7])();
  SetupPowerUp(this,param_1,param_2,60.0,0);
  return (int *)this;
}

/* 100668f0  CTSPowerUp::SetupPowerUp  (396 bytes)
 * undefined SetupPowerUp(uint param_1, int param_2, float param_3, undefined1 param_4)
 * called by: CTSPowerUp::CreatePowerUp, CTSPowerUp::Spawn, CTSPowerUp::WaitTouch
 */
void __thiscall
CTSPowerUp::SetupPowerUp(CTSPowerUp *this,uint param_1,int param_2,float param_3,undefined1 param_4)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  
  *(undefined4 *)&this->field_0x80 = 0;
  if ((int)param_1 < 1) {
    uVar2 = FUN_100662f0(this->pev->spawnflags);
    *(uint *)&this->field_0x74 = uVar2;
    if (uVar2 == 0) {
      uVar2 = FUN_100662f0(0x1ff);
      *(uint *)&this->field_0x74 = uVar2;
    }
    this->field_0x71 = 1;
  }
  else {
    if (((DAT_100c62cd != '\0') && ((param_1 & 0x100) != 0)) || ((param_1 & 0x80) != 0)) {
      param_1 = FUN_100662f0(0x1ff);
    }
    *(uint *)&this->field_0x74 = param_1;
    this->field_0x71 = 0;
  }
  uVar2 = *(uint *)&this->field_0x74;
  if ((uVar2 & 1) == 0) {
    if ((uVar2 & 2) == 0) {
      if ((uVar2 & 4) == 0) {
        if ((uVar2 & 8) == 0) {
          if ((uVar2 & 0x10) == 0) {
            if ((uVar2 & 0x20) == 0) {
              if ((uVar2 & 0x40) == 0) {
                if ((uVar2 & 0x80) == 0) {
                  if ((uVar2 & 0x100) != 0) {
                    this->pev->body = 8;
                  }
                }
                else {
                  this->pev->body = 7;
                }
              }
              else {
                this->pev->body = 6;
              }
            }
            else {
              this->pev->body = 5;
            }
          }
          else {
            this->pev->body = 1;
            *(undefined4 *)&this->field_0x80 = 3;
          }
        }
        else {
          this->pev->body = 9;
          *(undefined4 *)&this->field_0x80 = 2;
        }
      }
      else {
        this->pev->body = 0;
      }
    }
    else {
      this->pev->body = 2;
      *(undefined4 *)&this->field_0x80 = 3;
    }
  }
  else {
    this->pev->body = 4;
    *(undefined4 *)&this->field_0x80 = 3;
  }
  if (param_2 < 1) {
    lVar3 = __ftol();
    param_2 = (int)lVar3;
  }
  *(int *)&this->field_0x80 = param_2;
  fVar1 = gpGlobals->time;
  *(undefined4 *)&this->field_0x7c = 0x42c80000;
  this->field_0x70 = param_4;
  *(float *)&this->field_0x78 = param_3 + fVar1;
  return;
}

/* 10066a80  CTSPowerUp::Spawn  (323 bytes)
 * undefined Spawn(int * param_1)
 * called by: CTSSuperJump::Spawn
 */
void __fastcall CTSPowerUp::Spawn(int *param_1)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*param_1 + 0x20))();
  if (DAT_100c0a49 == -1) {
    DAT_100c0a49 = '\0';
  }
  *(int *)param_1[1] = (int)s_ts_powerup_100a3f20 - (int)gpGlobals->pStringBase;
  (*g_engfuncs.pfnSetModel)(*(edict_t **)(param_1[1] + 0x208),s_models_powerup_mdl_100a5518);
  *(undefined4 *)(param_1[1] + 0x108) = 6;
  *(undefined4 *)(param_1[1] + 0x10c) = 2;
  *(undefined4 *)(param_1[1] + 0x14c) = 0x437f0000;
  *(undefined4 *)(param_1[1] + 0x148) = 1;
  *(undefined4 *)(param_1[1] + 0x150) = 0;
  *(undefined4 *)(param_1[1] + 0x154) = 0;
  *(undefined4 *)(param_1[1] + 0x158) = 0;
  *(undefined4 *)(param_1[1] + 0x15c) = 0xe;
  UTIL_SetOrigin(param_1[1],param_1[1] + 8);
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  uStack_4 = 0;
  UTIL_SetSize(param_1[1],&uStack_c,&uStack_18);
  param_1[5] = 0;
  param_1[4] = (int)Fall;
  *(float *)(param_1[1] + 0x104) = gpGlobals->time + 0.1;
  CBaseAnimating::ResetSequenceInfo((int)param_1);
  *(undefined4 *)(param_1[1] + 0x138) = 0x3f800000;
  SetupPowerUp((CTSPowerUp *)param_1,param_1[0x1d],-1,0.0,1);
  return;
}

/* 10066bd0  CTSPowerUp::Fall  (151 bytes)
 * void Fall(void)
 * called by: CTSGameRules::RespawnEntities
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CTSPowerUp::Fall(void) */

void __thiscall CTSPowerUp::Fall(CTSPowerUp *this)

{
                    /* 0x66bd0  48  ?Fall@CTSPowerUp@@QAEXXZ */
  if (((_DAT_1009ed8c == 1.0) || (TSGameRules == '\x03')) || (TSGameRules == '\x02')) {
    this->pev->nextthink = gpGlobals->time + 5.0;
    this->pev->effects = 0x80;
  }
  else {
    this->pev->nextthink = gpGlobals->time + 0.1;
    if ((this->pev->flags & 0x200U) != 0) {
      OnGround((int)this);
    }
    if ((this->field_0x70 == '\0') && (*(float *)&this->field_0x78 < gpGlobals->time)) {
      UTIL_Remove((int *)this);
      return;
    }
  }
  return;
}

/* 10066c70  CTSPowerUp::OnGround  (157 bytes)
 * undefined OnGround(int param_1)
 * called by: CTSPowerUp::Fall
 */
void __fastcall CTSPowerUp::OnGround(int param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 1;
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) & 0xffffff7f;
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 2;
  UTIL_SetOrigin(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + 8);
  local_18 = 0x41800000;
  local_14 = 0x41800000;
  local_10 = 0x42800000;
  local_c = 0xc1800000;
  local_8 = 0xc1800000;
  local_4 = 0;
  UTIL_SetSize(*(int *)(param_1 + 4),&local_c,&local_18);
  *(code **)(param_1 + 0x14) = WaitTouch;
  *(code **)(param_1 + 0x10) = WaitThink;
  return;
}

/* 10066d10  CTSPowerUp::Precache  (13 bytes)
 * undefined Precache()
 */
void CTSPowerUp::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)(s_models_powerup_mdl_100a5518);
  return;
}

/* 10066d20  CTSPowerUp::WaitThink  (119 bytes)
 * void WaitThink(void)
 */
/* public: void __thiscall CTSPowerUp::WaitThink(void) */

void __thiscall CTSPowerUp::WaitThink(CTSPowerUp *this)

{
  float fVar1;
  
                    /* 0x66d20  141  ?WaitThink@CTSPowerUp@@QAEXXZ */
  CBaseAnimating::StudioFrameAdvance((int)this,0.0);
  this->pev->nextthink = gpGlobals->time + 1.0;
  if (this->field_0x70 == '\0') {
    if (*(float *)&this->field_0x78 < gpGlobals->time) {
      UTIL_Remove((int *)this);
      return;
    }
    fVar1 = (*(float *)&this->field_0x78 - gpGlobals->time) * 0.033333335 * 255.0;
    if (255.0 <= fVar1) {
      fVar1 = 255.0;
    }
    this->pev->renderamt = fVar1;
  }
  return;
}

/* 10066da0  CTSPowerUp::WaitTouch  (508 bytes)
 * void WaitTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CTSPowerUp::WaitTouch(class CBaseEntity *) */

void __thiscall CTSPowerUp::WaitTouch(CTSPowerUp *this,CBaseEntity *param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  bool bVar5;
  CBaseEntity *pCVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  
                    /* 0x66da0  156  ?WaitTouch@CTSPowerUp@@QAEXPAVCBaseEntity@@@Z */
  pCVar6 = param_1;
  iVar7 = (**(code **)(*(int *)param_1 + 0xc0))();
  if (iVar7 == 0) {
    return;
  }
  iVar7 = (**(code **)(*(int *)param_1 + 0xac))();
  if (iVar7 == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x714);
  bVar3 = true;
  if ((((uVar1 != 0) &&
       ((((uVar1 != 1 || (*(int *)&this->field_0x74 != 1)) || (2 < *(int *)(param_1 + 0x71c))) &&
        ((*(byte *)(*(int *)(param_1 + 4) + 0x180) & 0x20) == 0)))) ||
      (*(int *)(param_1 + 0x710) != 0)) && ((*(uint *)&this->field_0x74 & 0x1e6) == 0)) {
    bVar3 = false;
  }
  if ((((*(byte *)(*(int *)(param_1 + 4) + 0x180) & 0x20) == 0) || (uVar1 == 0)) ||
     ((*(uint *)&this->field_0x74 & 0x1e6) != 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (uVar1 == 1) {
    if ((bVar5) && (2 < *(int *)(param_1 + 0x71c))) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
  }
  if (!bVar3) {
    return;
  }
  uVar9 = 0;
  if (bVar5) {
    uVar9 = uVar1;
  }
  iVar7 = PlayerAddPowerUp(param_1,*(uint *)&this->field_0x74,(int)this);
  if (iVar7 == 0) {
    return;
  }
  if (uVar9 != 0) {
    piVar8 = CreatePowerUp(uVar9,-1);
    iVar7 = *(int *)(param_1 + 4);
    iVar2 = piVar8[1];
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar7 + 8);
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar7 + 0xc);
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar7 + 0x10);
  }
  if (this->field_0x70 == '\0') {
    UTIL_Remove((int *)this);
    return;
  }
  if (this->field_0x71 != '\0') {
    SetupPowerUp(this,0,-1,0.0,1);
  }
  *(undefined4 *)&this->field_0x14 = 0;
  this->pev->effects = this->pev->effects | 0x80;
  param_1 = *(CBaseEntity **)&this->field_0x84;
  *(code **)&this->field_0x10 = Fall;
  if ((int)param_1 < 1) {
    fVar4 = 60.0;
    goto LAB_10066f1a;
  }
  if ((int)param_1 < 0xb4) {
    if ((int)param_1 < 0xb) {
      param_1 = (CBaseEntity *)0xa;
    }
    else if (0xb3 < (int)param_1) goto LAB_10066f04;
  }
  else {
LAB_10066f04:
    param_1 = (CBaseEntity *)0xb4;
  }
  fVar4 = (float)(int)param_1;
LAB_10066f1a:
  this->pev->nextthink = fVar4 + gpGlobals->time;
  iVar7 = this->pev->message;
  if (iVar7 != 0) {
    TSHudMessageOne(0,0,0,1,0x1e,gpGlobals->pStringBase + iVar7,*(int *)(pCVar6 + 4));
  }
  iVar7 = this->pev->target;
  if (iVar7 == 0) {
    return;
  }
  FireTargets((int)(gpGlobals->pStringBase + iVar7),this,this,3,0);
  return;
}

