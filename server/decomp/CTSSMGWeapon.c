/* ts_i386.so - CTSSMGWeapon (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000c98e0  CTSSMGWeapon::Spawn  (54 bytes)
 * undefined Spawn(void)
 */
/* CTSSMGWeapon::Spawn(void) */

void __thiscall CTSSMGWeapon::Spawn(CTSSMGWeapon *this)

{
  undefined4 uVar1;
  
  uVar1 = (*this->vtable[0x47])(this);
  *(undefined4 *)&this->field_0xa4 = uVar1;
  CTSGroundWeapon::Spawn((CTSGroundWeapon *)this);
  return;
}

/* 000c9918  CTSSMGWeapon::GetWeapon  (138 bytes)
 * undefined GetWeapon(CBasePlayer * param_1)
 */
/* CTSSMGWeapon::GetWeapon(CBaseEntity *) */

void __thiscall CTSSMGWeapon::GetWeapon(CTSSMGWeapon *this,CBasePlayer *param_1)

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

/* 000c99a4  CTSSMGWeapon::RandomSMG  (104 bytes)
 * undefined4 RandomSMG(void)
 */
/* CTSSMGWeapon::RandomSMG(void) */

undefined4 CTSSMGWeapon::RandomSMG(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*g_engfuncs.pfnRandomLong)(1,6);
  switch(iVar1) {
  default:
    uVar2 = 0x17;
    break;
  case 2:
    uVar2 = 7;
    break;
  case 3:
    uVar2 = 6;
    break;
  case 4:
    uVar2 = 0x13;
    break;
  case 5:
    uVar2 = 0x11;
    break;
  case 6:
    uVar2 = 3;
  }
  return uVar2;
}

