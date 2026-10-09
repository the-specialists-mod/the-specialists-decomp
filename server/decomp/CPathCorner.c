/* ts_i386.so - CPathCorner (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000d0fa0  CPathCorner::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CPathCorner::Save(CSave &) */

undefined4 __thiscall CPathCorner::Save(CPathCorner *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CPathCorner",(int)this,(int *)m_SaveData,1);
  }
  return uVar2;
}

/* 000d0ff0  CPathCorner::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CPathCorner::Restore(CRestore &) */

undefined4 __thiscall CPathCorner::Restore(CPathCorner *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CPathCorner",(int)this,(int)m_SaveData,1);
  }
  return uVar2;
}

/* 000d1040  CPathCorner::KeyValue  (93 bytes)
 * undefined KeyValue(int param_1)
 */
/* CPathCorner::KeyValue(KeyValueData_s *) */

void __thiscall CPathCorner::KeyValue(CPathCorner *this,int param_1)

{
  int iVar1;
  longdouble lVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"wait");
  if (iVar1 == 0) {
    lVar2 = (longdouble)__strtod_internal(*(undefined4 *)(param_1 + 8),0,0);
    *(float *)&this->field_0x64 = (float)lVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

/* 000d10a0  CPathCorner::Spawn  (1 bytes)
 * undefined Spawn(void)
 */
/* CPathCorner::Spawn(void) */

void CPathCorner::Spawn(void)

{
  return;
}

/* 000d1e40  CPathCorner::GetDelay  (8 bytes)
 * longdouble GetDelay(CPathCorner * this)
 */
/* CPathCorner::GetDelay(void) */

longdouble __thiscall CPathCorner::GetDelay(CPathCorner *this)

{
  return (longdouble)*(float *)&this->field_0x64;
}

