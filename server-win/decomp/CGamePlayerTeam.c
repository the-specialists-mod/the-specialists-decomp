/* mp.dll - CGamePlayerTeam (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1002af10  CGamePlayerTeam::TargetTeamName  (140 bytes)
 * undefined4 TargetTeamName(undefined4 param_1)
 * called by: CGamePlayerTeam::Use
 */
undefined4 CGamePlayerTeam::TargetTeamName(undefined4 param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  char *pcVar6;
  bool bVar7;
  
  piVar2 = (int *)UTIL_FindEntityByTargetname(0,param_1);
  do {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    pcVar6 = s_game_team_master_1009fa2c;
    pbVar4 = (byte *)(gpGlobals->pStringBase + *(int *)piVar2[1]);
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_1002af69:
        iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_1002af6e;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_1002af69;
      pbVar4 = pbVar4 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_1002af6e:
    if (iVar5 == 0) {
      uVar3 = (**(code **)(*piVar2 + 200))();
      return uVar3;
    }
    piVar2 = (int *)UTIL_FindEntityByTargetname((int)piVar2,param_1);
  } while( true );
}

/* 1002afa0  CGamePlayerTeam::Use  (136 bytes)
 * undefined Use()
 */
void __thiscall CGamePlayerTeam::Use(CRuleEntity *param_1,int *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = CRuleEntity::CanFireForActivator(param_1,param_2);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = (**(code **)(*param_2 + 0xc0))();
    if (iVar2 != 0) {
      iVar2 = TargetTeamName(gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1c8));
      if (iVar2 != 0) {
        (**(code **)(*g_pGameRules + 0xd4))
                  (param_2,iVar2,*(uint *)(*(int *)(param_1 + 4) + 0x1a0) >> 1 & 1,
                   *(uint *)(*(int *)(param_1 + 4) + 0x1a0) >> 2 & 1);
      }
    }
    if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 1) != 0) {
      UTIL_Remove((int *)param_1);
    }
  }
  return;
}

