/* ts_i386.so - CTSShotgunWeapon (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000c9574  CTSShotgunWeapon::Spawn  (54 bytes)
 * undefined Spawn(void)
 */
/* CTSShotgunWeapon::Spawn(void) */

void __thiscall CTSShotgunWeapon::Spawn(CTSShotgunWeapon *this)

{
  undefined4 uVar1;
  
  uVar1 = (*this->vtable[0x47])(this);
  *(undefined4 *)&this->field_0xa4 = uVar1;
  CTSGroundWeapon::Spawn((CTSGroundWeapon *)this);
  return;
}

/* 000c95ac  CTSShotgunWeapon::GetWeapon  (138 bytes)
 * undefined GetWeapon(CBasePlayer * param_1)
 */
/* CTSShotgunWeapon::GetWeapon(CBaseEntity *) */

void __thiscall CTSShotgunWeapon::GetWeapon(CTSShotgunWeapon *this,CBasePlayer *param_1)

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

/* 000c9638  CTSShotgunWeapon::RandomShotgun  (97 bytes)
 * undefined4 RandomShotgun(void)
 */
/* CTSShotgunWeapon::RandomShotgun(void) */

undefined4 CTSShotgunWeapon::RandomShotgun(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*g_engfuncs.pfnRandomLong)(1,5);
  switch(iVar1) {
  default:
    uVar2 = 4;
    break;
  case 2:
    uVar2 = 0x1a;
    break;
  case 3:
    uVar2 = 0x21;
    break;
  case 4:
    uVar2 = 0x14;
    break;
  case 5:
    uVar2 = 0xb;
  }
  return uVar2;
}

