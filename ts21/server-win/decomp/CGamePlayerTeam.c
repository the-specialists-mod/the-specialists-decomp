/* mp.dll - CGamePlayerTeam (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10022d90  CGamePlayerTeam::TargetTeamName  (95 bytes)
 * undefined4 TargetTeamName(undefined4 param_1)
 * called by: CGamePlayerTeam::Use
 */
undefined4 CGamePlayerTeam::TargetTeamName(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  piVar1 = (int *)UTIL_FindEntityByTargetname(0,param_1);
  do {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    iVar3 = 0x11;
    bVar6 = true;
    pcVar4 = gpGlobals->pStringBase + *(int *)piVar1[1];
    pcVar5 = s_game_team_master_10094744;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *pcVar4 == *pcVar5;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      uVar2 = (**(code **)(*piVar1 + 0xb0))();
      return uVar2;
    }
    piVar1 = (int *)UTIL_FindEntityByTargetname((int)piVar1,param_1);
  } while( true );
}

/* 10022df0  CGamePlayerTeam::Use  (136 bytes)
 * undefined Use()
 */
void __thiscall CGamePlayerTeam::Use(CRuleEntity *param_1,int *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = CRuleEntity::CanFireForActivator(param_1,param_2);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = (**(code **)(*param_2 + 0xa8))();
    if (iVar2 != 0) {
      iVar2 = TargetTeamName(gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1c8));
      if (iVar2 != 0) {
        (**(code **)(*DAT_1009f494 + 0xd8))
                  (param_2,iVar2,*(uint *)(*(int *)(param_1 + 4) + 0x1a0) >> 1 & 1,
                   *(uint *)(*(int *)(param_1 + 4) + 0x1a0) >> 2 & 1);
      }
    }
    if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 1) != 0) {
      UTIL_Remove((int)param_1);
    }
  }
  return;
}

