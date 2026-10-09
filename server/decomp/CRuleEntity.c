/* ts_i386.so - CRuleEntity (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000cc2b4  CRuleEntity::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CRuleEntity::Save(CSave &) */

undefined4 __thiscall CRuleEntity::Save(CRuleEntity *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CRuleEntity",(int)this,(int *)m_SaveData,1);
  }
  return uVar2;
}

/* 000cc304  CRuleEntity::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CRuleEntity::Restore(CRestore &) */

undefined4 __thiscall CRuleEntity::Restore(CRuleEntity *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CRuleEntity",(int)this,(int)m_SaveData,1);
  }
  return uVar2;
}

/* 000cc354  CRuleEntity::Spawn  (41 bytes)
 * undefined Spawn(void)
 */
/* CRuleEntity::Spawn(void) */

void __thiscall CRuleEntity::Spawn(CRuleEntity *this)

{
  this->pev->solid = 0;
  this->pev->movetype = 0;
  this->pev->effects = 0x80;
  return;
}

/* 000cc380  CRuleEntity::KeyValue  (96 bytes)
 * undefined KeyValue(int param_1)
 */
/* CRuleEntity::KeyValue(KeyValueData_s *) */

void __thiscall CRuleEntity::KeyValue(CRuleEntity *this,int param_1)

{
  int iVar1;
  entvars_t *peVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"master");
  if (iVar1 == 0) {
    peVar2 = (entvars_t *)(*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    this[1].pev = peVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

/* 000cc3e4  CRuleEntity::CanFireForActivator  (68 bytes)
 * bool CanFireForActivator(undefined4 param_1)
 */
/* CRuleEntity::CanFireForActivator(CBaseEntity *) */

bool __thiscall CRuleEntity::CanFireForActivator(CRuleEntity *this,undefined4 param_1)

{
  int iVar1;
  bool bVar2;
  
  if (this[1].pev == (entvars_t *)0x0) {
    bVar2 = true;
  }
  else {
    iVar1 = UTIL_IsMasterTriggered((int)this[1].pev,param_1);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}

/* 000cdf70  CRuleEntity::SetMaster  (12 bytes)
 * undefined SetMaster(undefined4 param_1)
 */
/* CRuleEntity::SetMaster(int) */

void __thiscall CRuleEntity::SetMaster(CRuleEntity *this,entvars_t *param_1)

{
  this[1].pev = param_1;
  return;
}

