/* mp.dll - CTSMapGlobals (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1004a520  CTSMapGlobals::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CTSMapGlobals::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CTSMapGlobals_100a3634,(int)param_1,0x100a34b0,2);
  return;
}

/* 1004a550  CTSMapGlobals::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CTSMapGlobals::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields
            (param_2,(byte_conflict *)s_CTSMapGlobals_100a3634,(int)param_1,&DAT_100a34b0,2);
  return;
}

/* 1004a580  CTSMapGlobals::KeyValue  (14 bytes)
 * undefined KeyValue()
 */
void CTSMapGlobals::KeyValue(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 1004a590  CTSMapGlobals::Spawn  (199 bytes)
 * undefined Spawn()
 */
void __fastcall CTSMapGlobals::Spawn(int *param_1)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*param_1 + 0x20))();
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  UTIL_SetOrigin(param_1[1],param_1[1] + 8);
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  uStack_4 = 0;
  UTIL_SetSize(param_1[1],&uStack_c,&uStack_18);
  param_1[5] = 0;
  param_1[4] = 0;
  *(float *)(param_1[1] + 0x104) = gpGlobals->time + 10.0;
  DAT_100c0a58 = ~(byte)(*(uint *)(param_1[1] + 0x1a0) >> 5) & 1;
  DAT_100c62cd = (byte)(*(uint *)(param_1[1] + 0x1a0) >> 6) & 1;
  DAT_100c62b8 = get_weapon_restriction((int)param_1);
  DAT_100c62bd = 0;
  DAT_100c62bc = 0;
  DAT_100c62b4 = DAT_100c62b8;
  return;
}

/* 1004a660  CTSMapGlobals::get_weapon_restriction  (23 bytes)
 * uint get_weapon_restriction(int param_1)
 * called by: CTSMapGlobals::Spawn
 */
uint __fastcall CTSMapGlobals::get_weapon_restriction(int param_1)

{
  uint uVar1;
  
  uVar1 = InitWeaponRestriction();
  return *(uint *)(*(int *)(param_1 + 4) + 0x1a0) ^ uVar1;
}

/* 1004a680  CTSMapGlobals::WaitThink  (23 bytes)
 * void WaitThink(void)
 */
/* public: void __thiscall CTSMapGlobals::WaitThink(void) */

void __thiscall CTSMapGlobals::WaitThink(CTSMapGlobals *this)

{
                    /* 0x4a680  139  ?WaitThink@CTSMapGlobals@@QAEXXZ */
  this->pev->nextthink = gpGlobals->time + 10.0;
  return;
}

