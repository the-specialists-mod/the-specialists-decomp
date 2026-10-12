/* mp.dll - CRuleEntity (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10021f50  CRuleEntity::Save  (48 bytes)
 * undefined Save(void * param_1)
 * called by: CGamePlayerZone::Save, CGameText::Save
 */
void __thiscall CRuleEntity::Save(CRuleEntity *this,void *param_1)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_1,(byte_conflict *)s_CRuleEntity_10094694,(int)this,0x100945e8,1);
  return;
}

/* 10021f80  CRuleEntity::Restore  (48 bytes)
 * undefined Restore(void * param_1)
 * called by: CGamePlayerZone::Restore, CGameText::Restore
 */
void __thiscall CRuleEntity::Restore(CRuleEntity *this,void *param_1)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore((CBaseEntity *)this,param_1);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_1,(byte_conflict *)s_CRuleEntity_10094694,(int)this,0x100945e8,1);
  return;
}

/* 10021fb0  CRuleEntity::Spawn  (34 bytes)
 * undefined Spawn(int param_1)
 * called by: CRuleBrushEntity::Spawn, CRulePointEntity::Spawn
 */
void __fastcall CRuleEntity::Spawn(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x118) = 0x80;
  return;
}

/* 10021fe0  CRuleEntity::KeyValue  (73 bytes)
 * undefined KeyValue(int param_1)
 * called by: CGamePlayerEquip::KeyValue, CGamePlayerZone::KeyValue, CGameScore::KeyValue, CGameTeamMaster::KeyValue, CGameText::KeyValue
 */
void __thiscall CRuleEntity::KeyValue(CRuleEntity *this,int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  iVar1 = 7;
  bVar4 = true;
  pcVar2 = *(char **)(param_1 + 4);
  pcVar3 = s_master_10093878;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)(this + 0x54) = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 10022030  CRuleEntity::CanFireForActivator  (38 bytes)
 * bool CanFireForActivator(undefined4 param_1)
 * called by: CGameCounter::Use, CGameCounterSet::Use, CGameEnd::Use, CGamePlayerEquip::Touch, CGamePlayerHurt::Use, CGamePlayerTeam::Use, CGamePlayerZone::Use, CGameScore::Use, CGameTeamMaster::Use, CGameTeamSet::Use, CGameText::Use
 */
bool __thiscall CRuleEntity::CanFireForActivator(CRuleEntity *this,undefined4 param_1)

{
  int iVar1;
  
  if (*(int *)(this + 0x54) != 0) {
    iVar1 = UTIL_IsMasterTriggered(*(int *)(this + 0x54),param_1);
    return iVar1 != 0;
  }
  return true;
}

