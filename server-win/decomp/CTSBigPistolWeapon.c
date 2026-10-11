/* mp.dll - CTSBigPistolWeapon (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100288b0  CTSBigPistolWeapon::GetWeapon  (98 bytes)
 * undefined GetWeapon(int * param_1)
 */
/* Identical-code folding: also CTSBigPistolWeapon::GetWeapon, CTSKnifeWeapon::GetWeapon,
   CTSRifleWeapon::GetWeapon, CTSSMGWeapon::GetWeapon, CTSShotgunWeapon::GetWeapon */

void __thiscall CTSBigPistolWeapon::GetWeapon(CTSBigPistolWeapon *this,int *param_1)

{
  edict_t *e;
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if ((this->pev->effects & 0x80) == 0) {
    CTSGroundWeapon::GetWeapon((CTSGroundWeapon *)this,param_1);
    if ((this->pev->effects & 0x80) != 0) {
      uVar1 = (*this->vtable[0x45])();
      *(undefined4 *)&this->field_0x94 = uVar1;
    }
    e = this->pev->pContainingEntity;
    puVar2 = get_weapon_info(*(int *)&this->field_0x94);
    (*g_engfuncs.pfnSetModel)(e,(char *)((int)puVar2 + 0x1f2));
  }
  return;
}

/* 100289c0  CTSBigPistolWeapon::RandomBigPistol  (39 bytes)
 * undefined RandomBigPistol()
 */
undefined4 CTSBigPistolWeapon::RandomBigPistol(void)

{
  int iVar1;
  
  iVar1 = (*g_engfuncs.pfnRandomLong)(1,3);
  if (iVar1 == 2) {
    return 0x1f;
  }
  if (iVar1 != 3) {
    return 0xc;
  }
  return 0x24;
}

/* 10028a10  CTSBigPistolWeapon::Spawn  (26 bytes)
 * undefined Spawn(int * param_1)
 */
/* Identical-code folding: also CTSBigPistolWeapon::Spawn, CTSKnifeWeapon::Spawn,
   CTSRifleWeapon::Spawn, CTSSMGWeapon::Spawn, CTSShotgunWeapon::Spawn */

void __fastcall CTSBigPistolWeapon::Spawn(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x114))();
  param_1[0x25] = iVar1;
  CTSGroundWeapon::Spawn(param_1);
  return;
}

