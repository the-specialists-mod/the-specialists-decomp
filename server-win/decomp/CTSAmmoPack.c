/* mp.dll - CTSAmmoPack (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10074c30  CTSAmmoPack::CreateAmmoPack  (137 bytes)
 * int * CreateAmmoPack(int param_1, int * param_2)
 * called by: FUN_10062560
 */
int * __cdecl CTSAmmoPack::CreateAmmoPack(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)GetClassPtr<CTSAmmoPack>(0);
  if (piVar1 != (int *)0x0) {
    *(int *)piVar1[1] = (int)s_AmmoPack_100a6350 - (int)gpGlobals->pStringBase;
    if (param_2 == (int *)0x0) {
      piVar3 = piVar1 + 0x15;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar3 = 0;
        piVar3 = piVar3 + 1;
      }
    }
    else {
      piVar3 = piVar1 + 0x15;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar3 = *param_2;
        param_2 = param_2 + 1;
        piVar3 = piVar3 + 1;
      }
    }
    (**(code **)(*piVar1 + 0x1c))();
    if (param_1 != 0) {
      *(undefined4 *)(piVar1[1] + 0x198) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
    }
    return piVar1;
  }
  UTIL_ClientPrintAll(3,s_WARNING_cannot_create_ammopack__100a635c,0,0,0,0);
  return (int *)0x0;
}

/* 10074cc0  CTSAmmoPack::Spawn  (299 bytes)
 * undefined Spawn()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall CTSAmmoPack::Spawn(int *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*param_1 + 0x20))();
  (*g_engfuncs.pfnSetModel)(*(edict_t **)(param_1[1] + 0x208),s_models_ammopack_mdl_100a5f28);
  *(undefined4 *)(param_1[1] + 0x108) = 6;
  *(undefined4 *)(param_1[1] + 0x10c) = 2;
  UTIL_SetOrigin(param_1[1],param_1[1] + 8);
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  uStack_4 = 0;
  UTIL_SetSize(param_1[1],&uStack_c,&uStack_18);
  if (60.0 <= _DAT_1009ee1c) {
    fVar2 = 60.0;
  }
  else {
    fVar2 = _DAT_1009ee1c;
    if (_DAT_1009ee1c <= 5.0) {
      fVar2 = 5.0;
    }
  }
  fVar1 = gpGlobals->time;
  param_1[5] = 0;
  param_1[4] = (int)Fall;
  param_1[0x25] = (int)(fVar2 + fVar1);
  *(float *)(param_1[1] + 0x104) = gpGlobals->time + 0.1;
  *(undefined4 *)(param_1[1] + 0x250) = 0;
  *(uint *)(param_1[1] + 0x250) = *(uint *)(param_1[1] + 0x250) | 2;
  *(undefined4 *)(param_1[1] + 0x1bc) = 0;
  *(undefined4 *)(param_1[1] + 0x198) = 0;
  return;
}

/* 10074df0  CTSAmmoPack::Fall  (88 bytes)
 * void Fall(void)
 */
/* public: void __thiscall CTSAmmoPack::Fall(void) */

void __thiscall CTSAmmoPack::Fall(CTSAmmoPack *this)

{
                    /* 0x74df0  44  ?Fall@CTSAmmoPack@@QAEXXZ */
  this->pev->nextthink = gpGlobals->time + 0.1;
  if ((this->pev->flags & 0x200U) != 0) {
    this->pev->angles[0] = 0.0;
    this->pev->angles[2] = 0.0;
    OnGround((int)this);
  }
  if (*(float *)&this->field_0x94 < gpGlobals->time) {
    UTIL_Remove((int *)this);
  }
  return;
}

/* 10074e50  CTSAmmoPack::WaitThink  (50 bytes)
 * void WaitThink(void)
 */
/* public: void __thiscall CTSAmmoPack::WaitThink(void) */

void __thiscall CTSAmmoPack::WaitThink(CTSAmmoPack *this)

{
                    /* 0x74e50  131  ?WaitThink@CTSAmmoPack@@QAEXXZ */
  this->pev->nextthink = gpGlobals->time + 0.1;
  if (*(float *)&this->field_0x94 < gpGlobals->time) {
    UTIL_Remove((int *)this);
  }
  return;
}

/* 10074e90  CTSAmmoPack::OnGround  (134 bytes)
 * undefined OnGround(int param_1)
 * called by: CTSAmmoPack::Fall
 */
void __fastcall CTSAmmoPack::OnGround(int param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x198) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 1;
  UTIL_SetOrigin(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + 8);
  local_18 = 0x41800000;
  local_14 = 0x41800000;
  local_10 = 0x41800000;
  local_c = 0xc1800000;
  local_8 = 0xc1800000;
  local_4 = 0;
  UTIL_SetSize(*(int *)(param_1 + 4),&local_c,&local_18);
  *(code **)(param_1 + 0x14) = WaitTouch;
  *(code **)(param_1 + 0x10) = WaitThink;
  return;
}

/* 10074f20  CTSAmmoPack::WaitTouch  (300 bytes)
 * void WaitTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CTSAmmoPack::WaitTouch(class CBaseEntity *) */

void __thiscall CTSAmmoPack::WaitTouch(CTSAmmoPack *this,CBaseEntity *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  
                    /* 0x74f20  150  ?WaitTouch@CTSAmmoPack@@QAEXPAVCBaseEntity@@@Z */
  iVar2 = (**(code **)(*(int *)param_1 + 0xc0))();
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*(int *)param_1 + 0xac))();
    if (((iVar2 != 0) && (*(int *)(param_1 + 0x9fc) != 0)) &&
       (*(int *)(*(int *)(param_1 + 0x9fc) + 0x78) == 0x10)) {
      bVar1 = false;
      iVar2 = 0;
      piVar4 = (int *)&this->field_0x54;
      do {
        if (*piVar4 != 0) {
          iVar3 = CTSGun::AddAmmo(*(CTSGun **)(param_1 + 0x9fc),(byte_conflict)iVar2,*piVar4);
          if (iVar3 != 0) {
            bVar1 = true;
            *piVar4 = 0;
          }
        }
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar2 < 0x10);
      if (bVar1) {
        EMIT_SOUND_DYN(*(void **)(*(int *)(param_1 + 4) + 0x208),
                       *(void **)(*(int *)(param_1 + 4) + 0x208),3,s_items_9mmclip1_wav_100a5460,
                       0x3f800000,0x3f4ccccd,0);
      }
      if ((0.0 < this->pev->armorvalue) &&
         (((*(byte *)(*(int *)(param_1 + 4) + 0x180) & 0x20) != 0 ||
          (*(float *)(*(int *)(param_1 + 4) + 0x1bc) != 0.0)))) {
        lVar5 = __ftol();
        CBasePlayer::TakeArmor((CBasePlayer *)param_1,(int)lVar5);
        this->pev->armorvalue = 0.0;
      }
      if (this->pev->armorvalue == 0.0) {
        UTIL_Remove((int *)this);
      }
    }
  }
  return;
}

