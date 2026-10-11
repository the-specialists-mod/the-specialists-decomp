/* mp.dll - CWeaponBox (10 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1007a7c0  CWeaponBox::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CWeaponBox::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CWeaponBox_100a7774,(int)param_1,0x100a7488,4);
  return;
}

/* 1007a7f0  CWeaponBox::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CWeaponBox::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CWeaponBox_100a7774,(int)param_1,&DAT_100a7488,4);
  return;
}

/* 1007a820  CWeaponBox::Precache  (13 bytes)
 * undefined Precache()
 */
void CWeaponBox::Precache(void)

{
  (*g_engfuncs.pfnPrecacheModel)(s_models_w_weaponbox_mdl_100a7780);
  return;
}

/* 1007a830  CWeaponBox::KeyValue  (98 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CWeaponBox::KeyValue(CWeaponBox *this,int param_1)

{
  int iVar1;
  int unaff_EDI;
  
  if (*(int *)&this->field_0x16c < 0x20) {
    atoi(this,*(byte_conflict **)(param_1 + 8));
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 4));
    PackAmmo(this,iVar1,unaff_EDI);
    *(int *)&this->field_0x16c = *(int *)&this->field_0x16c + 1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  (*g_engfuncs.pfnAlertMessage)(at_console,s_WeaponBox_too_full__only__d_ammo_100a7798,0x20);
  return;
}

/* 1007a8a0  CWeaponBox::Spawn  (79 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CWeaponBox::Spawn(int *param_1)

{
  (**(code **)(*param_1 + 0x20))();
  *(undefined4 *)(param_1[1] + 0x108) = 6;
  *(undefined4 *)(param_1[1] + 0x10c) = 1;
  UTIL_SetSize(param_1[1],&DAT_100ae498,&DAT_100ae498);
  (*g_engfuncs.pfnSetModel)(*(edict_t **)(param_1[1] + 0x208),s_models_w_weaponbox_mdl_100a7780);
  return;
}

/* 1007a8f0  CWeaponBox::Kill  (74 bytes)
 * void Kill(void)
 */
/* public: void __thiscall CWeaponBox::Kill(void) */

void __thiscall CWeaponBox::Kill(CWeaponBox *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
                    /* 0x7a8f0  63  ?Kill@CWeaponBox@@QAEXXZ */
  piVar2 = (int *)&this->field_0x54;
  iVar3 = 6;
  do {
    for (iVar1 = *piVar2; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x74)) {
      *(code **)(iVar1 + 0x10) = CBaseEntity::SUB_Remove;
      *(float *)(*(int *)(iVar1 + 4) + 0x104) = gpGlobals->time + 0.1;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  UTIL_Remove((int *)this);
  return;
}

/* 1007a940  CWeaponBox::Touch  (276 bytes)
 * undefined Touch()
 */
void __thiscall CWeaponBox::Touch(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  if ((((*(uint *)(param_1[1] + 0x1a4) & 0x200) != 0) &&
      (iVar2 = (**(code **)(*param_2 + 0xc0))(), iVar2 != 0)) &&
     (iVar2 = (**(code **)(*param_2 + 0xac))(), iVar2 != 0)) {
    piVar5 = param_1 + 0x1b;
    iVar2 = 0x20;
    do {
      if (*piVar5 != 0) {
        iVar4 = *param_2;
        uVar3 = MaxAmmoCarry(*piVar5);
        (**(code **)(iVar4 + 0x84))(piVar5[0x20],gpGlobals->pStringBase + *piVar5,uVar3);
        *piVar5 = 0;
        piVar5[0x20] = 0;
      }
      piVar5 = piVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    piVar5 = param_1 + 0x15;
    iVar2 = 6;
    do {
      iVar4 = *piVar5;
      while (iVar4 != 0) {
        piVar1 = (int *)*piVar5;
        *piVar5 = piVar1[0x1d];
        iVar4 = (**(code **)(*param_2 + 0x7c))(piVar1);
        if (iVar4 != 0) {
          (**(code **)(*piVar1 + 0x140))(param_2);
        }
        iVar4 = *piVar5;
      }
      piVar5 = piVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    EMIT_SOUND_DYN((void *)param_2[1],*(undefined4 *)(param_2[1] + 0x208),3,
                   s_items_gunpickup2_wav_1009f7a0,0x3f800000,0x3f4ccccd,0);
    param_1[5] = 0;
    UTIL_Remove(param_1);
  }
  return;
}

/* 1007aa60  CWeaponBox::PackAmmo  (92 bytes)
 * undefined4 PackAmmo(int param_1, int param_2)
 * called by: CWeaponBox::KeyValue
 */
undefined4 __thiscall CWeaponBox::PackAmmo(CWeaponBox *this,int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_NULL_String_in_PackAmmo__100a77c8);
  }
  else {
    iVar1 = MaxAmmoCarry(param_1);
    if ((iVar1 != -1) && (0 < param_2)) {
      GiveAmmo(this,param_2,(byte_conflict *)(gpGlobals->pStringBase + param_1),iVar1,(int *)0x0);
      return 1;
    }
  }
  return 0;
}

/* 1007aac0  CWeaponBox::GiveAmmo  (211 bytes)
 * int GiveAmmo(int param_1, byte.conflict * param_2, int param_3, int * param_4)
 * called by: CWeaponBox::PackAmmo
 */
int __thiscall
CWeaponBox::GiveAmmo(CWeaponBox *this,int param_1,byte_conflict *param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 1;
  piVar4 = (int *)&this->field_0x70;
  do {
    if (*piVar4 == 0) {
      if (iVar3 < 0x20) {
        if (param_4 != (int *)0x0) {
          *param_4 = iVar3;
        }
        *(int *)(&this->field_0x6c + iVar3 * 4) = (int)param_2 - (int)gpGlobals->pStringBase;
        *(int *)(&this->field_0xec + iVar3 * 4) = param_1;
        return iVar3;
      }
      break;
    }
    uVar1 = FUN_100887b0(gpGlobals,param_2,(byte_conflict *)(gpGlobals->pStringBase + *piVar4));
    if (uVar1 == 0) {
      if (param_4 != (int *)0x0) {
        *param_4 = iVar3;
      }
      iVar2 = param_3 - *(int *)(&this->field_0xec + iVar3 * 4);
      if (param_1 < iVar2) {
        iVar2 = param_1;
      }
      if ((param_1 != 0) && (iVar2 < 1)) {
        return -1;
      }
      *(int *)(&this->field_0xec + iVar3 * 4) = *(int *)(&this->field_0xec + iVar3 * 4) + iVar2;
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar3 < 0x20);
  (*g_engfuncs.pfnAlertMessage)(at_console,s_out_of_named_ammo_slots_100a77e4);
  return iVar3;
}

/* 1007aba0  CWeaponBox::SetObjectCollisionBox  (173 bytes)
 * undefined SetObjectCollisionBox()
 */
void __fastcall CWeaponBox::SetObjectCollisionBox(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(float *)(iVar1 + 0xc4) = *(float *)(iVar1 + 8) - 16.0;
  *(float *)(iVar1 + 200) = *(float *)(iVar1 + 0xc) - 16.0;
  *(undefined4 *)(iVar1 + 0xcc) = *(undefined4 *)(iVar1 + 0x10);
  iVar1 = *(int *)(param_1 + 4);
  *(float *)(iVar1 + 0xd0) = *(float *)(iVar1 + 8) + 16.0;
  *(float *)(iVar1 + 0xd4) = *(float *)(iVar1 + 0xc) + 16.0;
  *(float *)(iVar1 + 0xd8) = *(float *)(iVar1 + 0x10) + 16.0;
  return;
}

