/* ts_i386.so - CTSPistolWeapon (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000c9ae0  CTSPistolWeapon::Spawn  (54 bytes)
 * undefined Spawn(void)
 */
/* CTSPistolWeapon::Spawn(void) */

void __thiscall CTSPistolWeapon::Spawn(CTSPistolWeapon *this)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(this + 0x60) + 0x11c))(this);
  *(undefined4 *)(this + 0xa4) = uVar1;
  CTSGroundWeapon::Spawn((CTSGroundWeapon *)this);
  return;
}

/* 000c9b18  CTSPistolWeapon::GetWeapon  (138 bytes)
 * undefined GetWeapon(CBasePlayer * param_1)
 */
/* CTSPistolWeapon::GetWeapon(CBaseEntity *) */

void __thiscall CTSPistolWeapon::GetWeapon(CTSPistolWeapon *this,CBasePlayer *param_1)

{
  edict_t *e;
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (-1 < *(char *)(*(int *)this + 0x118)) {
    CTSGroundWeapon::GetWeapon((CTSGroundWeapon *)this,param_1);
    if (*(char *)(*(int *)this + 0x118) < '\0') {
      uVar1 = (**(code **)(*(int *)(this + 0x60) + 0x11c))(this);
      *(undefined4 *)(this + 0xa4) = uVar1;
    }
    e = *(edict_t **)(*(int *)this + 0x208);
    puVar2 = get_weapon_info(*(uint *)(this + 0xa4));
    (*g_engfuncs.pfnSetModel)(e,(char *)((int)puVar2 + 0x1f2));
  }
  return;
}

/* 000c9ba4  CTSPistolWeapon::RandomPistol  (111 bytes)
 * undefined4 RandomPistol(void)
 */
/* CTSPistolWeapon::RandomPistol(void) */

undefined4 CTSPistolWeapon::RandomPistol(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*g_engfuncs.pfnRandomLong)(1,7);
  switch(iVar1) {
  default:
    uVar2 = 1;
    break;
  case 2:
    uVar2 = 8;
    break;
  case 3:
    uVar2 = 9;
    break;
  case 4:
    uVar2 = 0xe;
    break;
  case 5:
    uVar2 = 0x15;
    break;
  case 6:
    uVar2 = 0x16;
    break;
  case 7:
    uVar2 = 0x1c;
  }
  return uVar2;
}

