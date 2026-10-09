/* ts_i386.so - CFrictionModifier (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000e5aac  CFrictionModifier::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CFrictionModifier::Save(CSave &) */

undefined4 __thiscall CFrictionModifier::Save(CFrictionModifier *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CFrictionModifier",(int)this,(int *)m_SaveData,1);
  }
  return uVar2;
}

/* 000e5afc  CFrictionModifier::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CFrictionModifier::Restore(CRestore &) */

undefined4 __thiscall CFrictionModifier::Restore(CFrictionModifier *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CFrictionModifier",(int)this,(int)m_SaveData,1);
  }
  return uVar2;
}

/* 000e5b4c  CFrictionModifier::Spawn  (113 bytes)
 * undefined Spawn(void)
 */
/* CFrictionModifier::Spawn(void) */

void __thiscall CFrictionModifier::Spawn(CFrictionModifier *this)

{
  this->pev->solid = 1;
  (*g_engfuncs.pfnSetModel)(this->pev->pContainingEntity,gpGlobals->pStringBase + this->pev->model);
  this->pev->movetype = 0;
  *(undefined4 *)&this->field_0x14 = 0xffff0000;
  *(code **)&this->field_0x18 = ChangeFriction;
  return;
}

/* 000e5bc0  CFrictionModifier::ChangeFriction  (34 bytes)
 * undefined ChangeFriction(int * param_1)
 */
/* CFrictionModifier::ChangeFriction(CBaseEntity *) */

void __thiscall CFrictionModifier::ChangeFriction(CFrictionModifier *this,int *param_1)

{
  if (1 < *(int *)(*param_1 + 0x108) - 10U) {
    *(undefined4 *)(*param_1 + 0x120) = *(undefined4 *)&this->field_0x64;
  }
  return;
}

/* 000e5be4  CFrictionModifier::KeyValue  (99 bytes)
 * undefined KeyValue(int param_1)
 */
/* CFrictionModifier::KeyValue(KeyValueData_s *) */

void __thiscall CFrictionModifier::KeyValue(CFrictionModifier *this,int param_1)

{
  int iVar1;
  longdouble lVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"modifier");
  if (iVar1 == 0) {
    lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
    *(float *)&this->field_0x64 = (float)(lVar2 * (longdouble)0.01);
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

/* 000eb4dc  CFrictionModifier::ObjectCaps  (6 bytes)
 * undefined4 ObjectCaps(void)
 */
/* CFrictionModifier::ObjectCaps(void) */

undefined4 CFrictionModifier::ObjectCaps(void)

{
  return 0;
}

