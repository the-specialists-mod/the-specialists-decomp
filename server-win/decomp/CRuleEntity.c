/* mp.dll - CRuleEntity (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10029e50  CRuleEntity::Save  (48 bytes)
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
  CSave::WriteFields(param_1,(byte_conflict *)s_CRuleEntity_1009f97c,(int)this,0x1009f8d0,1);
  return;
}

/* 10029e80  CRuleEntity::Restore  (48 bytes)
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
  CRestore::ReadFields(param_1,(byte_conflict *)s_CRuleEntity_1009f97c,(int)this,&DAT_1009f8d0,1);
  return;
}

/* 10029eb0  CRuleEntity::Spawn  (34 bytes)
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

/* 10029ee0  CRuleEntity::KeyValue  (111 bytes)
 * undefined KeyValue(int param_1)
 * called by: CGamePlayerEquip::KeyValue, CGamePlayerZone::KeyValue, CGameScore::KeyValue, CGameTeamMaster::KeyValue, CGameText::KeyValue
 */
void __thiscall CRuleEntity::KeyValue(CRuleEntity *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  pcVar4 = s_master_1009e980;
  pbVar2 = *(byte **)(param_1 + 4);
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_10029f1a:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_10029f1f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_10029f1a;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10029f1f:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    *(int *)(this + 0x54) = iVar3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 10029f50  CRuleEntity::CanFireForActivator  (38 bytes)
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

