/* mp.dll - CTSAmmoPack (7 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100657e0  CTSAmmoPack::CreateAmmoPack  (93 bytes)
 * int * CreateAmmoPack(int * param_1)
 * called by: FUN_10055ef0
 */
int * __cdecl CTSAmmoPack::CreateAmmoPack(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar2 = (int *)GetClassPtr<CTSAmmoPack>(0);
  if (piVar2 == (int *)0x0) {
    UTIL_ClientPrintAll(3,s_WARNING_cannot_create_ammopack__10099c44,0,0,0,0);
    return (int *)0x0;
  }
  *(int *)piVar2[1] = (int)s_AmmoPack_10099c38 - (int)gpGlobals->pStringBase;
  iVar1 = *piVar2;
  piVar4 = piVar2 + 0x15;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = *param_1;
    param_1 = param_1 + 1;
    piVar4 = piVar4 + 1;
  }
  (**(code **)(iVar1 + 0xc))();
  return piVar2;
}

/* 10065840  CTSAmmoPack::Spawn  (282 bytes)
 * undefined Spawn()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall CTSAmmoPack::Spawn(int *param_1)

{
  float fVar1;
  float fVar2;
  
  (**(code **)(*param_1 + 0x10))();
  (*g_engfuncs.pfnSetModel)(*(edict_t **)(param_1[1] + 0x208),s_models_ammopack_mdl_100997b0);
  *(undefined4 *)(param_1[1] + 0x108) = 6;
  *(undefined4 *)(param_1[1] + 0x10c) = 2;
  FUN_100679a0();
  FUN_10067970();
  if (60.0 <= _DAT_10093c98) {
    fVar2 = 60.0;
  }
  else {
    fVar2 = _DAT_10093c98;
    if (_DAT_10093c98 <= 5.0) {
      fVar2 = 5.0;
    }
  }
  fVar1 = gpGlobals->time;
  param_1[4] = (int)Fall;
  param_1[5] = 0;
  param_1[0x25] = (int)(fVar2 + fVar1);
  *(float *)(param_1[1] + 0x104) = gpGlobals->time + 0.1;
  *(undefined4 *)(param_1[1] + 0x250) = 0;
  *(uint *)(param_1[1] + 0x250) = *(uint *)(param_1[1] + 0x250) | 1;
  return;
}

/* 10065960  CTSAmmoPack::Precache  (1 bytes)
 * undefined Precache()
 */
void CTSAmmoPack::Precache(void)

{
  return;
}

/* 10065970  CTSAmmoPack::Fall  (88 bytes)
 * void Fall(void)
 */
/* public: void __thiscall CTSAmmoPack::Fall(void) */

void __thiscall CTSAmmoPack::Fall(CTSAmmoPack *this)

{
                    /* 0x65970  42  ?Fall@CTSAmmoPack@@QAEXXZ */
  this->pev->nextthink = gpGlobals->time + 0.1;
  if ((this->pev->flags & 0x200U) != 0) {
    this->pev->angles[0] = 0.0;
    this->pev->angles[2] = 0.0;
    OnGround((int)this);
  }
  if (*(float *)&this->field_0x94 < gpGlobals->time) {
    UTIL_Remove((int)this);
  }
  return;
}

/* 100659d0  CTSAmmoPack::WaitThink  (50 bytes)
 * void WaitThink(void)
 */
/* public: void __thiscall CTSAmmoPack::WaitThink(void) */

void __thiscall CTSAmmoPack::WaitThink(CTSAmmoPack *this)

{
                    /* 0x659d0  124  ?WaitThink@CTSAmmoPack@@QAEXXZ */
  this->pev->nextthink = gpGlobals->time + 0.1;
  if (*(float *)&this->field_0x94 < gpGlobals->time) {
    UTIL_Remove((int)this);
  }
  return;
}

/* 10065a10  CTSAmmoPack::OnGround  (121 bytes)
 * undefined OnGround(int param_1)
 * called by: CTSAmmoPack::Fall
 */
void __fastcall CTSAmmoPack::OnGround(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 1;
  FUN_100679a0();
  FUN_10067970();
  *(code **)(param_1 + 0x14) = WaitTouch;
  *(code **)(param_1 + 0x10) = WaitThink;
  return;
}

/* 10065a90  CTSAmmoPack::WaitTouch  (168 bytes)
 * void WaitTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CTSAmmoPack::WaitTouch(class CBaseEntity *) */

void __thiscall CTSAmmoPack::WaitTouch(CTSAmmoPack *this,CBaseEntity *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
                    /* 0x65a90  140  ?WaitTouch@CTSAmmoPack@@QAEXPAVCBaseEntity@@@Z */
  iVar2 = (**(code **)(*(int *)param_1 + 0xa8))();
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*(int *)param_1 + 0x94))();
    if (((iVar2 != 0) && (*(int *)(param_1 + 0x968) != 0)) &&
       (*(int *)(*(int *)(param_1 + 0x968) + 0x78) == 0x10)) {
      bVar1 = false;
      iVar2 = 0;
      piVar4 = (int *)&this->field_0x54;
      do {
        if (*piVar4 != 0) {
          iVar3 = FUN_10049f40(*(void **)(param_1 + 0x968),(byte_conflict)iVar2,*piVar4);
          if (iVar3 != 0) {
            bVar1 = true;
          }
        }
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar2 < 0x10);
      if (bVar1) {
        EMIT_SOUND_DYN(*(void **)(*(int *)(param_1 + 4) + 0x208),
                       *(void **)(*(int *)(param_1 + 4) + 0x208),3,s_items_9mmclip1_wav_100993c8,
                       0x3f800000,0x3f4ccccd,0,100);
        UTIL_Remove((int)this);
      }
    }
  }
  return;
}

