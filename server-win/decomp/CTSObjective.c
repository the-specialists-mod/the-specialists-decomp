/* mp.dll - CTSObjective (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1005c2e0  CTSObjective::Save  (48 bytes)
 * undefined Save(void * param_1)
 * called by: CTSBomb::Save, CTSHack::Save, CTSTeamEscape::Save
 */
void __thiscall CTSObjective::Save(CTSObjective *this,void *param_1)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_1,(byte_conflict *)s_CTSObjective_100a4fc0,(int)this,0x100a4cd0,1);
  return;
}

/* 1005c310  CTSObjective::Restore  (48 bytes)
 * undefined Restore(void * param_1)
 * called by: CTSBomb::Restore, CTSHack::Restore, CTSTeamEscape::Restore
 */
void __thiscall CTSObjective::Restore(CTSObjective *this,void *param_1)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_1,(byte_conflict *)s_CTSObjective_100a4fc0,(int)this,&DAT_100a4cd0,1);
  return;
}

/* 1005c3b0  CTSObjective::Freeze  (27 bytes)
 * undefined Freeze()
 */
void __thiscall CTSObjective::Freeze(int param_1,char param_2)

{
  *(bool *)(param_1 + 0x54) = param_2 == '\0';
  CTSGameRules::ShowObjectiveOnHud((CTSGameRules *)&TSGameRules,param_1,param_2 == '\0');
  return;
}

