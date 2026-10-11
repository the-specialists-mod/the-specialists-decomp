/* mp.dll - CBotStateTeamRounds (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1006ed00  CBotStateTeamRounds::Think  (960 bytes)
 * undefined Think()
 */
/* mode 2 strategy: roam goal = opposite team spawn points */

void __thiscall CBotStateTeamRounds::Think(int param_1,int *param_2,CBotBrain *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  byte_conflict *pbVar4;
  undefined3 extraout_var;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  char *pcVar10;
  float10 fVar11;
  undefined4 uVar12;
  char acStack_c0 [32];
  char acStack_a0 [32];
  int aiStack_80 [32];
  
  if (gpGlobals->time < *(float *)(param_1 + 4)) {
    return;
  }
  fVar11 = (float10)(**(code **)(*param_2 + 8))();
  if ((float10)1.0 <= (float10)0.1 / fVar11) {
    fVar11 = (float10)1.0;
  }
  else {
    fVar11 = (float10)(**(code **)(*param_2 + 8))();
    fVar11 = (float10)0.1 / fVar11;
  }
  *(float *)(param_1 + 4) = (float)((float10)gpGlobals->time + fVar11);
  iVar3 = (**(code **)(*param_2 + 0xac))();
  if ((iVar3 == 0) || (*(int *)(param_2[1] + 0x244) != 0)) {
    bVar2 = BotArmamentEmpty((int)param_2);
    if (CONCAT31(extraout_var,bVar2) == 0) {
      uVar12 = 0x100;
    }
    else {
      uVar12 = 0x10;
    }
    CBotBrain::SetModules(param_3,uVar12);
    CBotBrain::EnableModules(param_3,0x400);
    return;
  }
  CBotBrain::EnableModules(param_3,0x40);
  CBotBrain::EnableModules(param_3,0x400);
  cVar1 = CBotBrain::NumVisibleEnemies((int)param_3);
  if (cVar1 != '\0') {
    CBotBrain::EnableModules(param_3,4);
    CBotBrain::DisableModules(param_3,0x80);
    return;
  }
  if (((*(float *)(param_3 + 0x1a0c) != DAT_100ae498) ||
      (*(float *)(param_3 + 0x1a10) != DAT_100ae49c)) ||
     (*(float *)(param_3 + 0x1a14) != DAT_100ae4a0)) {
    *(float *)(param_3 + 0x1928) = *(float *)(param_3 + 0x1a0c);
    *(undefined4 *)(param_3 + 0x192c) = *(undefined4 *)(param_3 + 0x1a10);
    *(undefined4 *)(param_3 + 0x1930) = *(undefined4 *)(param_3 + 0x1a14);
    *(float *)(param_3 + 0x1a0c) = DAT_100ae498;
    *(float *)(param_3 + 0x1a10) = DAT_100ae49c;
    *(float *)(param_3 + 0x1a14) = DAT_100ae4a0;
    CBotBrain::EnableModules(param_3,1);
    CBotBrain::EnableModules(param_3,0x80);
    return;
  }
  if (((*(float *)(param_3 + 0x1928) != DAT_100ae498) ||
      (*(float *)(param_3 + 0x192c) != DAT_100ae49c)) ||
     ((*(float *)(param_3 + 0x1930) != DAT_100ae4a0 || (gpGlobals->time <= *(float *)(param_1 + 8)))
     )) {
    param_3[0x193c] = (CBotBrain)0x1;
    CBotBrain::EnableModules(param_3,0x80);
    return;
  }
  iVar7 = 0;
  pbVar4 = (byte_conflict *)(**(code **)(*param_2 + 200))();
  iVar3 = CTSGameRules::GetTeamIndex((CTSGameRules *)&TSGameRules,pbVar4);
  if (iVar3 == 1) {
    uVar5 = 0xffffffff;
    pcVar9 = &TSGameRules_team0_spawnClass;
    do {
      pcVar10 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar9 = pcVar10 + -uVar5;
    pcVar10 = acStack_c0;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    pcVar9 = &TSGameRules_team0_fallbackClass;
  }
  else {
    uVar5 = 0xffffffff;
    pcVar9 = &DAT_100c0b3c;
    do {
      pcVar10 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar9 = pcVar10 + -uVar5;
    pcVar10 = acStack_c0;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    pcVar9 = &DAT_100c0b5c;
  }
  uVar5 = 0xffffffff;
  do {
    pcVar10 = pcVar9;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar9 = pcVar10 + -uVar5;
  pcVar10 = acStack_a0;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar10 = pcVar10 + 1;
  }
  iVar3 = UTIL_FindEntityByClassname(0,acStack_c0);
  if (iVar3 != 0) {
    piVar8 = aiStack_80;
    do {
      if (0x1f < iVar7) break;
      *piVar8 = iVar3;
      iVar7 = iVar7 + 1;
      piVar8 = piVar8 + 1;
      iVar3 = UTIL_FindEntityByClassname(iVar3,acStack_c0);
    } while (iVar3 != 0);
    if (iVar7 != 0) goto LAB_1006efc2;
  }
  iVar3 = UTIL_FindEntityByClassname(iVar3,acStack_a0);
  if (iVar3 != 0) {
    piVar8 = aiStack_80 + iVar7;
    do {
      if (0x1f < iVar7) break;
      *piVar8 = iVar3;
      iVar7 = iVar7 + 1;
      piVar8 = piVar8 + 1;
      iVar3 = UTIL_FindEntityByClassname(iVar3,acStack_a0);
    } while (iVar3 != 0);
    if (iVar7 != 0) {
LAB_1006efc2:
      iVar3 = (*g_engfuncs.pfnRandomLong)(0,iVar7 + -1);
      iVar3 = *(int *)(aiStack_80[iVar3] + 4);
      *(undefined4 *)(param_3 + 0x1928) = *(undefined4 *)(iVar3 + 8);
      *(undefined4 *)(param_3 + 0x192c) = *(undefined4 *)(iVar3 + 0xc);
      *(undefined4 *)(param_3 + 0x1930) = *(undefined4 *)(iVar3 + 0x10);
      CBotBrain::EnableModules(param_3,1);
      *(float *)(param_1 + 8) = gpGlobals->time + 3.0;
      param_3[0x193c] = (CBotBrain)0x0;
      CBotBrain::EnableModules(param_3,0x80);
      return;
    }
  }
  *(float *)(param_1 + 8) = gpGlobals->time + 3.0;
  param_3[0x193c] = (CBotBrain)0x0;
  CBotBrain::EnableModules(param_3,0x80);
  return;
}

