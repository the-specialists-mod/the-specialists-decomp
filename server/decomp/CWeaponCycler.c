/* ts_i386.so - CWeaponCycler (7 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000c7c78  CWeaponCycler::Spawn  (242 bytes)
 * undefined Spawn(void)
 */
/* CWeaponCycler::Spawn(void) */

void __thiscall CWeaponCycler::Spawn(CWeaponCycler *this)

{
  entvars_t *peVar1;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  this->pev->solid = 3;
  this->pev->movetype = 0;
  (*g_engfuncs.pfnPrecacheModel)(gpGlobals->pStringBase + this->pev->model);
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  peVar1 = this->pev;
  *(string_t *)&this->field_0xc8 = peVar1->model;
  *(int *)&this->field_0xcc = peVar1->modelindex;
  UTIL_SetOrigin((int)this->pev,peVar1->origin);
  local_2c = 0x41800000;
  local_3c = 0xc1800000;
  local_34 = 0;
  local_38 = local_3c;
  local_28 = local_2c;
  local_24 = local_2c;
  UTIL_SetSize((int)this->pev,&local_3c,&local_2c);
  *(undefined4 *)&this->field_0x14 = 0xffff0000;
  *(code **)&this->field_0x18 = CBasePlayerItem::DefaultTouch;
  return;
}

/* 000c7d6c  CWeaponCycler::Deploy  (103 bytes)
 * undefined4 Deploy(void)
 */
/* CWeaponCycler::Deploy(void) */

undefined4 __thiscall CWeaponCycler::Deploy(CWeaponCycler *this)

{
  longdouble lVar1;
  
  *(undefined4 *)(**(int **)&this->field_0x80 + 0xbc) = *(undefined4 *)&this->field_0xc8;
  lVar1 = UTIL_WeaponTimeBase();
  *(float *)(*(int *)&this->field_0x80 + 300) = (float)((longdouble)1.0 + lVar1);
  (*this->vtable[0x5d])(this,0,1,0);
  *(undefined4 *)&this->field_0xb4 = 0;
  return 1;
}

/* 000c7dd4  CWeaponCycler::Holster  (52 bytes)
 * undefined Holster(int param_1)
 */
/* CWeaponCycler::Holster(int) */

void CWeaponCycler::Holster(int param_1)

{
  longdouble lVar1;
  
  lVar1 = UTIL_WeaponTimeBase();
  *(float *)(*(int *)(param_1 + 0x80) + 300) = (float)((longdouble)0.5 + lVar1);
  return;
}

/* 000c7e08  CWeaponCycler::PrimaryAttack  (71 bytes)
 * undefined PrimaryAttack(void)
 */
/* CWeaponCycler::PrimaryAttack(void) */

void __thiscall CWeaponCycler::PrimaryAttack(CWeaponCycler *this)

{
  (*this->vtable[0x5d])(this,this->pev->sequence,1,0);
  *(float *)&this->field_0x9c = gpGlobals->time + 0.3;
  return;
}

/* 000c7e50  CWeaponCycler::SecondaryAttack  (205 bytes)
 * undefined SecondaryAttack(void)
 */
/* CWeaponCycler::SecondaryAttack(void) */

void __thiscall CWeaponCycler::SecondaryAttack(CWeaponCycler *this)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  float local_18;
  float local_14 [2];
  
  iVar2 = this->pev->sequence;
  uVar1 = iVar2 + 1;
  uVar3 = uVar1;
  if ((int)uVar1 < 0) {
    uVar3 = iVar2 + 8;
  }
  this->pev->sequence = uVar1 - (uVar3 & 0xfffffff8);
  this->pev->modelindex = *(int *)&this->field_0xcc;
  pvVar4 = (*g_engfuncs.pfnGetModelPtr)(this->pev->pContainingEntity);
  GetSequenceInfo((int)pvVar4,(int)pvVar4,(int)this->pev,&local_18,local_14);
  this->pev->modelindex = 0;
  if (local_18 == 0.0) {
    this->pev->sequence = 0;
  }
  (*this->vtable[0x5d])(this,this->pev->sequence,1,0);
  *(float *)&this->field_0xa0 = gpGlobals->time + 0.3;
  return;
}

/* 000c8838  CWeaponCycler::iItemSlot  (6 bytes)
 * undefined4 iItemSlot(void)
 */
/* CWeaponCycler::iItemSlot(void) */

undefined4 CWeaponCycler::iItemSlot(void)

{
  return 1;
}

/* 000c8840  CWeaponCycler::GetItemInfo  (6 bytes)
 * undefined4 GetItemInfo(void)
 */
/* CWeaponCycler::GetItemInfo(ItemInfo *) */

undefined4 CWeaponCycler::GetItemInfo(void)

{
  return 0;
}

