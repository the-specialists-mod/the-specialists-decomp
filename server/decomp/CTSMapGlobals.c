/* ts_i386.so - CTSMapGlobals (7 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 00072488  CTSMapGlobals::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CTSMapGlobals::Save(CSave &) */

undefined4 __thiscall CTSMapGlobals::Save(CTSMapGlobals *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CTSMapGlobals",(int)this,(int *)m_SaveData,2);
  }
  return uVar2;
}

/* 000724d8  CTSMapGlobals::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CTSMapGlobals::Restore(CRestore &) */

undefined4 __thiscall CTSMapGlobals::Restore(CTSMapGlobals *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CTSMapGlobals",(int)this,(int)m_SaveData,2);
  }
  return uVar2;
}

/* 00072528  CTSMapGlobals::KeyValue  (12 bytes)
 * undefined KeyValue(undefined4 this, int param_2)
 */
/* CTSMapGlobals::KeyValue(KeyValueData_s *) */

void __thiscall CTSMapGlobals::KeyValue(undefined4 this,int param_2)

{
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

/* 00072534  CTSMapGlobals::Spawn  (264 bytes)
 * undefined Spawn(void)
 */
/* CTSMapGlobals::Spawn(void) */

void __thiscall CTSMapGlobals::Spawn(CTSMapGlobals *this)

{
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  (*this->vtable[10])(this);
  this->pev->movetype = 0;
  this->pev->solid = 0;
  UTIL_SetOrigin((int)this->pev,this->pev->origin);
  local_2c = 0;
  local_28 = local_2c;
  local_24 = local_2c;
  local_1c = local_2c;
  local_18 = local_2c;
  local_14 = local_2c;
  UTIL_SetSize((int)this->pev,&local_2c,&local_1c);
  *(undefined4 *)&this->field_0x14 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  *(undefined4 *)&this->field_0xc = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  this->pev->nextthink = gpGlobals->time + 10.0;
  DAT_001781b0 = ((byte)((uint)this->pev->spawnflags >> 5) ^ 1) & 1;
  DAT_0017da25 = (byte)((uint)this->pev->spawnflags >> 6) & 1;
  DAT_0017da10 = get_weapon_restriction(this);
  DAT_0017da0c = DAT_0017da10;
  DAT_0017da15 = 0;
  DAT_0017da14 = 0;
  return;
}

/* 0007263c  CTSMapGlobals::get_weapon_restriction  (40 bytes)
 * uint get_weapon_restriction(void)
 */
/* CTSMapGlobals::get_weapon_restriction(void) */

uint __thiscall CTSMapGlobals::get_weapon_restriction(CTSMapGlobals *this)

{
  uint uVar1;
  
  uVar1 = InitWeaponRestriction();
  return uVar1 ^ this->pev->spawnflags;
}

/* 00072664  CTSMapGlobals::Precache  (1 bytes)
 * undefined Precache(void)
 */
/* CTSMapGlobals::Precache(void) */

void CTSMapGlobals::Precache(void)

{
  return;
}

/* 00072668  CTSMapGlobals::WaitThink  (49 bytes)
 * undefined WaitThink(void)
 */
/* CTSMapGlobals::WaitThink(void) */

void __thiscall CTSMapGlobals::WaitThink(CTSMapGlobals *this)

{
  this->pev->nextthink = gpGlobals->time + 10.0;
  return;
}

