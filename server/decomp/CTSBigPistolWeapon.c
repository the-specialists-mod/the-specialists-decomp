/* ts_i386.so - CTSBigPistolWeapon (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000c9c98  CTSBigPistolWeapon::Spawn  (54 bytes)
 * undefined Spawn(void)
 */
/* CTSBigPistolWeapon::Spawn(void) */

void __thiscall CTSBigPistolWeapon::Spawn(CTSBigPistolWeapon *this)

{
  undefined4 uVar1;
  
  uVar1 = (*this->vtable[0x47])(this);
  *(undefined4 *)&this->field_0xa4 = uVar1;
  CTSGroundWeapon::Spawn((CTSGroundWeapon *)this);
  return;
}

/* 000c9cd0  CTSBigPistolWeapon::GetWeapon  (138 bytes)
 * undefined GetWeapon(CBasePlayer * param_1)
 */
/* CTSBigPistolWeapon::GetWeapon(CBaseEntity *) */

void __thiscall CTSBigPistolWeapon::GetWeapon(CTSBigPistolWeapon *this,CBasePlayer *param_1)

{
  edict_t *e;
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (-1 < (char)this->pev->effects) {
    CTSGroundWeapon::GetWeapon((CTSGroundWeapon *)this,param_1);
    if ((char)this->pev->effects < '\0') {
      uVar1 = (*this->vtable[0x47])(this);
      *(undefined4 *)&this->field_0xa4 = uVar1;
    }
    e = this->pev->pContainingEntity;
    puVar2 = get_weapon_info(*(uint *)&this->field_0xa4);
    (*g_engfuncs.pfnSetModel)(e,(char *)((int)puVar2 + 0x1f2));
  }
  return;
}

/* 000c9d5c  CTSBigPistolWeapon::RandomBigPistol  (77 bytes)
 * undefined4 RandomBigPistol(void)
 */
/* CTSBigPistolWeapon::RandomBigPistol(void) */

undefined4 CTSBigPistolWeapon::RandomBigPistol(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*g_engfuncs.pfnRandomLong)(1,3);
  if (iVar1 == 2) {
    uVar2 = 0x1f;
  }
  else if ((iVar1 < 3) || (iVar1 != 3)) {
    uVar2 = 0xc;
  }
  else {
    uVar2 = 0x24;
  }
  return uVar2;
}

