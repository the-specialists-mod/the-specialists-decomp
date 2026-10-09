/* ts_i386.so - CTSObjective (8 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 0008c210  CTSObjective::Save  (79 bytes)
 * undefined4 Save(CSave * param_1)
 */
/* CTSObjective::Save(CSave &) */

undefined4 __thiscall CTSObjective::Save(CTSObjective *this,CSave *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CSave::WriteFields(param_1,"CTSObjective",(int)this,(int *)m_SaveData,1);
  }
  return uVar2;
}

/* 0008c260  CTSObjective::Restore  (79 bytes)
 * undefined4 Restore(CRestore * param_1)
 */
/* CTSObjective::Restore(CRestore &) */

undefined4 __thiscall CTSObjective::Restore(CTSObjective *this,CRestore *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CRestore::ReadFields(param_1,"CTSObjective",(int)this,(int)m_SaveData,1);
  }
  return uVar2;
}

/* 0008c2b0  CTSObjective::KeyValue  (92 bytes)
 * undefined KeyValue(int param_1)
 */
/* CTSObjective::KeyValue(KeyValueData_s *) */

void __thiscall CTSObjective::KeyValue(CTSObjective *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(*(char **)(param_1 + 4),"attackerteam");
  if (iVar1 == 0) {
    uVar2 = __strtol_internal(*(undefined4 *)(param_1 + 8),0,10,0);
    *(undefined4 *)&this[1].field_0x4 = uVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

/* 0008c310  CTSObjective::Freeze  (52 bytes)
 * undefined Freeze(byte.conflict param_1)
 */
/* CTSObjective::Freeze(bool) */

void __thiscall CTSObjective::Freeze(CTSObjective *this,byte_conflict param_1)

{
  *(byte *)&this[1].pev = param_1 ^ 1;
  CTSGameRules::ShowObjectiveOnHud((CTSGameRules *)&TSGameRules,(int)this,param_1 ^ 1);
  return;
}

/* 0008c344  CTSObjective::CanInteract  (69 bytes)
 * undefined CanInteract(int param_1)
 */
/* CTSObjective::CanInteract(CBasePlayer *) */

void __thiscall CTSObjective::CanInteract(CTSObjective *this,int param_1)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)(**(code **)(*(int *)(param_1 + 0x60) + 0xd0))(param_1);
  iVar2 = CTSGameRules::GetTeamIndex((CTSGameRules *)&TSGameRules,pcVar1);
  CanInteract(this,iVar2);
  return;
}

/* 0008c38c  CTSObjective::CanInteract  (29 bytes)
 * bool CanInteract(int param_1)
 */
/* CTSObjective::CanInteract(int) */

bool __thiscall CTSObjective::CanInteract(CTSObjective *this,int param_1)

{
  if (*(int *)&this[1].field_0x4 == -1) {
    return true;
  }
  return *(int *)&this[1].field_0x4 == param_1;
}

/* 0008e6e0  CTSObjective::IsObjective  (3 bytes)
 * undefined1 IsObjective(void)
 */
/* CTSObjective::IsObjective(void) */

undefined1 CTSObjective::IsObjective(void)

{
  return 1;
}

/* 0008e6e4  CTSObjective::EnableObjective  (12 bytes)
 * undefined EnableObjective(CTSObjective * this, CTSObjective param_2)
 */
/* CTSObjective::EnableObjective(bool) */

void __thiscall CTSObjective::EnableObjective(void *this,undefined1 param_2)

{
  *(undefined1 *)((int)this + 100) = param_2;
  return;
}

