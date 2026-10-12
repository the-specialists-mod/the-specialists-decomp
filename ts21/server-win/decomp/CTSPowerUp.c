/* mp.dll - CTSPowerUp (12 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10021940  CTSPowerUp::Precache  (13 bytes)
 * undefined Precache()
 */
void CTSPowerUp::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)(s_models_w_longjump_mdl_100944f0);
  return;
}

/* 10059bb0  CTSPowerUp::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CTSPowerUp::Save(CBaseAnimating *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseAnimating::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CTSPowerUp_10099464,(int)param_1,0x10099428,2);
  return;
}

/* 10059be0  CTSPowerUp::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CTSPowerUp::Restore(CBaseAnimating *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseAnimating::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CTSPowerUp_10099464,(int)param_1,0x10099428,2);
  return;
}

/* 10059c10  CTSPowerUp::KeyValue  (125 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CTSPowerUp::KeyValue(CTSPowerUp *this,int param_1)

{
  undefined4 uVar1;
  undefined1 *this_00;
  void *this_01;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  this_00 = &DAT_00000009;
  bVar4 = true;
  pcVar2 = *(char **)(param_1 + 4);
  pcVar3 = s_pwuptype_10099470;
  do {
    if (this_00 == (undefined1 *)0x0) break;
    this_00 = this_00 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    uVar1 = FUN_1006e1dd(this_00,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x74 = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  this_01 = (void *)0xd;
  bVar4 = true;
  pcVar2 = *(char **)(param_1 + 4);
  pcVar3 = s_pwupduration_10099448;
  do {
    if (this_01 == (void *)0x0) break;
    this_01 = (void *)((int)this_01 + -1);
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    uVar1 = FUN_1006e1dd(this_01,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x84 = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CBaseDelay::KeyValue((CBaseDelay *)this,param_1);
  return;
}

/* 10059c90  CTSPowerUp::CreatePowerUp  (75 bytes)
 * int * CreatePowerUp(uint param_1, int param_2)
 * called by: CBasePlayer::Killed, CTSPowerUp::WaitTouch, FUN_100568e0, FUN_10059840
 */
int * __cdecl CTSPowerUp::CreatePowerUp(uint param_1,int param_2)

{
  CTSPowerUp *this;
  
  this = (CTSPowerUp *)GetClassPtr<CTSPowerUp>(0);
  if (this == (CTSPowerUp *)0x0) {
    UTIL_ClientPrintAll(3,s_WARNING_cannot_create_powerup__1009947c,0,0,0,0);
    return (int *)0x0;
  }
  (*this->vtable[3])();
  SetupPowerUp(this,param_1,param_2,60.0,0);
  return (int *)this;
}

/* 10059ce0  CTSPowerUp::SetupPowerUp  (391 bytes)
 * undefined SetupPowerUp(uint param_1, int param_2, float param_3, undefined1 param_4)
 * called by: CTSPowerUp::CreatePowerUp, CTSPowerUp::Spawn, CTSPowerUp::WaitTouch
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
CTSPowerUp::SetupPowerUp(CTSPowerUp *this,uint param_1,int param_2,float param_3,undefined1 param_4)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  
  *(undefined4 *)&this->field_0x80 = 0;
  if ((int)param_1 < 1) {
    if (_DAT_10093d38 == 0.0) {
      iVar3 = 8;
    }
    else {
      iVar3 = 7;
    }
    iVar3 = (*g_engfuncs.pfnRandomLong)(0,iVar3);
    this->field_0x71 = 1;
    *(int *)&this->field_0x74 = 1 << ((byte)iVar3 & 0x1f);
  }
  else if ((_DAT_10093d38 == 0.0) || ((param_1 & 0x100) == 0)) {
    *(uint *)&this->field_0x74 = param_1;
    this->field_0x71 = 0;
  }
  else {
    iVar3 = (*g_engfuncs.pfnRandomLong)(0,7);
    this->field_0x71 = 0;
    *(int *)&this->field_0x74 = 1 << ((byte)iVar3 & 0x1f);
  }
  uVar2 = *(uint *)&this->field_0x74;
  if ((uVar2 & 1) == 0) {
    if ((uVar2 & 2) == 0) {
      if ((uVar2 & 4) == 0) {
        if ((uVar2 & 8) == 0) {
          if ((uVar2 & 0x10) == 0) {
            if ((uVar2 & 0x20) == 0) {
              if ((uVar2 & 0x40) == 0) {
                if ((char)uVar2 < '\0') {
                  this->pev->body = 7;
                }
                else if ((uVar2 & 0x100) != 0) {
                  this->pev->body = 8;
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
            *(undefined4 *)&this->field_0x80 = 5;
          }
        }
        else {
          this->pev->body = 9;
          *(undefined4 *)&this->field_0x80 = 3;
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
    *(undefined4 *)&this->field_0x80 = 5;
  }
  if (0 < param_2) {
    *(int *)&this->field_0x80 = param_2;
  }
  fVar1 = gpGlobals->time;
  *(undefined4 *)&this->field_0x7c = 0x42c80000;
  this->field_0x70 = param_4;
  *(float *)&this->field_0x78 = param_3 + fVar1;
  return;
}

/* 10059e70  CTSPowerUp::Spawn  (282 bytes)
 * undefined Spawn()
 */
void __fastcall CTSPowerUp::Spawn(CTSPowerUp *param_1)

{
  (*param_1->vtable[4])();
  param_1->pev->classname = (int)s_ts_powerup_10098278 - (int)gpGlobals->pStringBase;
  (*g_engfuncs.pfnSetModel)(param_1->pev->pContainingEntity,s_models_powerup_mdl_1009949c);
  param_1->pev->movetype = 6;
  param_1->pev->solid = 2;
  param_1->pev->renderamt = 255.0;
  param_1->pev->rendermode = 1;
  param_1->pev->rendercolor[0] = 0.0;
  param_1->pev->rendercolor[1] = 0.0;
  param_1->pev->rendercolor[2] = 0.0;
  param_1->pev->renderfx = 0xe;
  FUN_100679a0();
  FUN_10067970();
  *(undefined4 *)&param_1->field_0x14 = 0;
  *(code **)&param_1->field_0x10 = Fall;
  param_1->pev->nextthink = gpGlobals->time + 0.1;
  CBaseAnimating::ResetSequenceInfo((int)param_1);
  param_1->pev->framerate = 1.0;
  SetupPowerUp(param_1,*(uint *)&param_1->field_0x74,-1,0.0,1);
  return;
}

/* 10059f90  CTSPowerUp::Fall  (151 bytes)
 * void Fall(void)
 * called by: CTSGameRules::RespawnEntities
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CTSPowerUp::Fall(void) */

void __thiscall CTSPowerUp::Fall(CTSPowerUp *this)

{
                    /* 0x59f90  44  ?Fall@CTSPowerUp@@QAEXXZ */
  if (((_DAT_10093c20 == 1.0) || (DAT_100ac8c0 == '\x03')) || (DAT_100ac8c0 == '\x02')) {
    this->pev->nextthink = gpGlobals->time + 5.0;
    this->pev->effects = 0x80;
  }
  else {
    this->pev->nextthink = gpGlobals->time + 0.1;
    if ((this->pev->flags & 0x200U) != 0) {
      OnGround((int)this);
    }
    if ((this->field_0x70 == '\0') && (*(float *)&this->field_0x78 < gpGlobals->time)) {
      UTIL_Remove((int)this);
      return;
    }
  }
  return;
}

/* 1005a030  CTSPowerUp::OnGround  (157 bytes)
 * undefined OnGround(int param_1)
 * called by: CTSPowerUp::Fall
 */
void __fastcall CTSPowerUp::OnGround(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 1;
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) & 0xffffff7f;
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 2;
  FUN_100679a0();
  FUN_10067970();
  *(code **)(param_1 + 0x14) = WaitTouch;
  *(code **)(param_1 + 0x10) = WaitThink;
  return;
}

/* 1005a0d0  CTSPowerUp::Precache  (13 bytes)
 * undefined Precache()
 */
void CTSPowerUp::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)(s_models_powerup_mdl_1009949c);
  return;
}

/* 1005a0e0  CTSPowerUp::WaitThink  (119 bytes)
 * void WaitThink(void)
 */
/* public: void __thiscall CTSPowerUp::WaitThink(void) */

void __thiscall CTSPowerUp::WaitThink(CTSPowerUp *this)

{
  float fVar1;
  
                    /* 0x5a0e0  132  ?WaitThink@CTSPowerUp@@QAEXXZ */
  CBaseAnimating::StudioFrameAdvance((int)this,0.0);
  this->pev->nextthink = gpGlobals->time + 1.0;
  if (this->field_0x70 == '\0') {
    if (*(float *)&this->field_0x78 < gpGlobals->time) {
      UTIL_Remove((int)this);
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

/* 1005a160  CTSPowerUp::WaitTouch  (504 bytes)
 * void WaitTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CTSPowerUp::WaitTouch(class CBaseEntity *) */

void __thiscall CTSPowerUp::WaitTouch(CTSPowerUp *this,CBaseEntity *param_1)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  CBaseEntity *pCVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  
                    /* 0x5a160  144  ?WaitTouch@CTSPowerUp@@QAEXPAVCBaseEntity@@@Z */
  pCVar6 = param_1;
  iVar7 = (**(code **)(*(int *)param_1 + 0xa8))();
  if (iVar7 == 0) {
    return;
  }
  iVar7 = (**(code **)(*(int *)param_1 + 0x94))();
  if (iVar7 == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x6a0);
  if ((((uVar1 == 0) ||
       ((((uVar1 == 1 && (*(int *)&this->field_0x74 == 1)) && (*(int *)(param_1 + 0x6a8) < 5)) ||
        ((*(byte *)(*(int *)(param_1 + 4) + 0x180) & 0x20) != 0)))) &&
      (*(int *)(param_1 + 0x69c) == 0)) || ((*(uint *)&this->field_0x74 & 0x1e4) != 0)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (((*(byte *)(*(int *)(param_1 + 4) + 0x180) & 0x20) == 0) || (uVar1 == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (uVar1 == 1) {
    if ((bVar4) && (4 < *(int *)(param_1 + 0x6a8))) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
  }
  if (!bVar5) {
    return;
  }
  uVar9 = 0;
  if (bVar4) {
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
    UTIL_Remove((int)this);
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
    fVar3 = 60.0;
    goto LAB_1005a2d4;
  }
  if ((int)param_1 < 0xb4) {
    if ((int)param_1 < 0xb) {
      param_1 = (CBaseEntity *)&DAT_0000000a;
    }
    else if (0xb3 < (int)param_1) goto LAB_1005a2be;
  }
  else {
LAB_1005a2be:
    param_1 = (CBaseEntity *)0xb4;
  }
  fVar3 = (float)(int)param_1;
LAB_1005a2d4:
  this->pev->nextthink = fVar3 + gpGlobals->time;
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

