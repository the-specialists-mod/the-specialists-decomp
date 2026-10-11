/* mp.dll - CBotStateDM (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1006e900  CBotStateDM::Think  (1019 bytes)
 * undefined Think(int * param_1, void * param_2)
 */
/* mode 0/1 strategy: combat/look bits, roam goal hill/powerup/spawnpoint */

void __thiscall CBotStateDM::Think(CBotStateDM *this,int *param_1,void *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  float *pfVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined3 extraout_var;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  char *pcVar14;
  float10 fVar15;
  undefined4 uVar16;
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [12];
  char acStack_20 [32];
  
  if (gpGlobals->time < *(float *)(this + 4)) {
    return;
  }
  fVar15 = (float10)(**(code **)(*param_1 + 8))();
  if ((float10)1.0 <= (float10)0.1 / fVar15) {
    fVar15 = (float10)1.0;
  }
  else {
    fVar15 = (float10)(**(code **)(*param_1 + 8))();
    fVar15 = (float10)0.1 / fVar15;
  }
  *(float *)(this + 4) = (float)((float10)gpGlobals->time + fVar15);
  iVar6 = (**(code **)(*param_1 + 0xac))();
  if ((iVar6 == 0) || (*(int *)(param_1[1] + 0x244) != 0)) {
    bVar5 = BotArmamentEmpty((int)param_1);
    if (CONCAT31(extraout_var,bVar5) == 0) {
      uVar16 = 0x100;
    }
    else {
      uVar16 = 0x10;
    }
    CBotBrain::SetModules(param_2,uVar16);
    CBotBrain::EnableModules(param_2,0x400);
    return;
  }
  CBotBrain::EnableModules(param_2,0x40);
  CBotBrain::EnableModules(param_2,0x400);
  cVar4 = CBotBrain::NumVisibleEnemies((int)param_2);
  if (cVar4 != '\0') {
    CBotBrain::EnableModules(param_2,4);
    CBotBrain::DisableModules(param_2,0x80);
    return;
  }
  if (((*(float *)((int)param_2 + 0x1a0c) == DAT_100ae498) &&
      (*(float *)((int)param_2 + 0x1a10) == DAT_100ae49c)) &&
     (*(float *)((int)param_2 + 0x1a14) == DAT_100ae4a0)) {
    if (((*(float *)((int)param_2 + 0x1928) == DAT_100ae498) &&
        (*(float *)((int)param_2 + 0x192c) == DAT_100ae49c)) &&
       ((*(float *)((int)param_2 + 0x1930) == DAT_100ae4a0 &&
        (*(float *)(this + 8) < gpGlobals->time)))) {
      iVar6 = (*g_engfuncs.pfnRandomLong)(0,4);
      if (iVar6 == 0) {
        piVar7 = (int *)TSFoundRandomEntity(s_ts_dmhill_100a35ec);
        if (piVar7 == (int *)0x0) goto LAB_1006ebba;
        pfVar8 = (float *)(**(code **)(*piVar7 + 0xf0))(auStack_38);
        iVar6 = param_1[1];
        fVar1 = *(float *)(iVar6 + 8) - *pfVar8;
        fVar2 = *(float *)(iVar6 + 0xc) - pfVar8[1];
        fVar3 = *(float *)(iVar6 + 0x10) - pfVar8[2];
        if (64.0 < SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3)) {
          puVar9 = (undefined4 *)(**(code **)(*piVar7 + 0xf0))(auStack_2c);
          *(undefined4 *)((int)param_2 + 0x1928) = *puVar9;
          *(undefined4 *)((int)param_2 + 0x192c) = puVar9[1];
          *(undefined4 *)((int)param_2 + 0x1930) = puVar9[2];
          CBotBrain::EnableModules(param_2,1);
        }
LAB_1006eb9d:
        fVar1 = gpGlobals->time;
      }
      else if ((iVar6 == 2) && (iVar6 = TSFoundRandomEntity(s_ts_powerup_100a3f20), iVar6 != 0)) {
        iVar6 = *(int *)(iVar6 + 4);
        *(undefined4 *)((int)param_2 + 0x1928) = *(undefined4 *)(iVar6 + 8);
        *(undefined4 *)((int)param_2 + 0x192c) = *(undefined4 *)(iVar6 + 0xc);
        *(undefined4 *)((int)param_2 + 0x1930) = *(undefined4 *)(iVar6 + 0x10);
        CBotBrain::EnableModules(param_2,1);
        fVar1 = gpGlobals->time;
      }
      else {
LAB_1006ebba:
        iVar6 = (**(code **)(*g_pGameRules + 0x1c))();
        if (iVar6 == 0) {
          uVar11 = 0xffffffff;
          pcVar13 = s_info_player_deathmatch_100a23fc;
          do {
            pcVar14 = pcVar13;
            if (uVar11 == 0) break;
            uVar11 = uVar11 - 1;
            pcVar14 = pcVar13 + 1;
            cVar4 = *pcVar13;
            pcVar13 = pcVar14;
          } while (cVar4 != '\0');
          uVar11 = ~uVar11;
          pcVar13 = pcVar14 + -uVar11;
          pcVar14 = acStack_20;
          for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
            pcVar13 = pcVar13 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *pcVar14 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            pcVar14 = pcVar14 + 1;
          }
        }
        else {
          iVar6 = CTSGameRules::GetTeamsNum(0x100c0a48);
          iVar6 = (*g_engfuncs.pfnRandomLong)(0,iVar6 + -1);
          uVar11 = 0xffffffff;
          pcVar13 = &TSGameRules_team0_spawnClass + iVar6 * 0x8c;
          do {
            pcVar14 = pcVar13;
            if (uVar11 == 0) break;
            uVar11 = uVar11 - 1;
            pcVar14 = pcVar13 + 1;
            cVar4 = *pcVar13;
            pcVar13 = pcVar14;
          } while (cVar4 != '\0');
          uVar11 = ~uVar11;
          pcVar13 = pcVar14 + -uVar11;
          pcVar14 = acStack_20;
          for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
            pcVar13 = pcVar13 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *pcVar14 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            pcVar14 = pcVar14 + 1;
          }
          iVar10 = UTIL_FindEntityByClassname(0,acStack_20);
          if (iVar10 == 0) {
            uVar11 = 0xffffffff;
            pcVar13 = &TSGameRules_team0_fallbackClass + iVar6 * 0x8c;
            do {
              pcVar14 = pcVar13;
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              pcVar14 = pcVar13 + 1;
              cVar4 = *pcVar13;
              pcVar13 = pcVar14;
            } while (cVar4 != '\0');
            uVar11 = ~uVar11;
            pcVar13 = pcVar14 + -uVar11;
            pcVar14 = acStack_20;
            for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
              pcVar13 = pcVar13 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
              *pcVar14 = *pcVar13;
              pcVar13 = pcVar13 + 1;
              pcVar14 = pcVar14 + 1;
            }
          }
        }
        iVar6 = TSFoundRandomEntity(acStack_20);
        if (iVar6 == 0) goto LAB_1006eb9d;
        iVar6 = *(int *)(iVar6 + 4);
        *(undefined4 *)((int)param_2 + 0x1928) = *(undefined4 *)(iVar6 + 8);
        *(undefined4 *)((int)param_2 + 0x192c) = *(undefined4 *)(iVar6 + 0xc);
        *(undefined4 *)((int)param_2 + 0x1930) = *(undefined4 *)(iVar6 + 0x10);
        CBotBrain::EnableModules(param_2,1);
        fVar1 = gpGlobals->time;
      }
      *(float *)(this + 8) = fVar1 + 3.0;
      *(undefined1 *)((int)param_2 + 0x193c) = 0;
      goto LAB_1006ea44;
    }
  }
  else {
    *(float *)((int)param_2 + 0x1928) = *(float *)((int)param_2 + 0x1a0c);
    *(undefined4 *)((int)param_2 + 0x192c) = *(undefined4 *)((int)param_2 + 0x1a10);
    *(undefined4 *)((int)param_2 + 0x1930) = *(undefined4 *)((int)param_2 + 0x1a14);
    *(float *)((int)param_2 + 0x1a0c) = DAT_100ae498;
    *(float *)((int)param_2 + 0x1a10) = DAT_100ae49c;
    *(float *)((int)param_2 + 0x1a14) = DAT_100ae4a0;
    CBotBrain::EnableModules(param_2,1);
  }
  *(undefined1 *)((int)param_2 + 0x193c) = 1;
LAB_1006ea44:
  CBotBrain::EnableModules(param_2,0x80);
  return;
}

