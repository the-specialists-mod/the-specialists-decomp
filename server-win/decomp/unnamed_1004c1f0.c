/* mp.dll - unnamed_1004c1f0 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1004c1f0  FUN_1004c1f0  (10 bytes)
 * undefined FUN_1004c1f0(void)
 * called by: FUN_1004c1e0
 */
void FUN_1004c1f0(void)

{
  FUN_1004d070(0x100c0a48);
  return;
}

/* 1004c200  FUN_1004c200  (12 bytes)
 * undefined FUN_1004c200(void)
 * called by: FUN_1004c1e0
 */
void FUN_1004c200(void)

{
  FUN_1007dd3e(0x1004c210);
  return;
}

/* 1004c210  FUN_1004c210  (26 bytes)
 * undefined FUN_1004c210()
 */
void FUN_1004c210(void)

{
  CBulletManager::Reset((undefined4 *)&DAT_100c22ac);
  return;
}

/* 1004c230  FUN_1004c230  (14 bytes)
 * uint FUN_1004c230(int param_1)
 * called by: CTSGun::WeaponIdle, FUN_100552a0, FUN_100556a0, FUN_10055a10, FUN_10055f30, FUN_10056d80, FUN_10057210
 */
uint __cdecl FUN_1004c230(int param_1)

{
  return *(uint *)(param_1 + 0x710) & 2;
}

/* 1004c250  FUN_1004c250  (14 bytes)
 * uint FUN_1004c250(int param_1)
 * called by: CTSGun::PrimaryAttack, CTSGun::SecondaryAttack, CTSGun::VKickback, FUN_10053ee0
 */
uint __cdecl FUN_1004c250(int param_1)

{
  return *(uint *)(param_1 + 0x710) & 0x10;
}

/* 1004c260  FUN_1004c260  (283 bytes)
 * undefined FUN_1004c260(int param_1, int param_2)
 * called by: CBasePlayer::Killed, CHalfLifeTeamplay::ChangePlayerTeam, CTSGameRules::InitHUD
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1004c260(int param_1,int param_2)

{
  float fVar1;
  
  if (TSGameRules == '\x03') {
    fVar1 = (float)param_2 + gpGlobals->time;
  }
  else {
    if (((TSGameRules != '\x02') && (DAT_102efbc4 != 0)) && (TSGameRules == '\0')) {
      fVar1 = _DAT_1009eeac;
      if (_DAT_1009eeac <= 1.0) {
        fVar1 = 1.0;
      }
      if (fVar1 <= (float)(int)*(char *)(param_1 + 0x7a6)) {
        *(undefined4 *)(param_1 + 0x75c) = 0xbf800000;
      }
      else {
        fVar1 = _DAT_100c0a50 - gpGlobals->time;
        if ((float)param_2 <= fVar1) {
          fVar1 = (float)param_2;
        }
        *(float *)(param_1 + 0x75c) = fVar1 + gpGlobals->time;
        fVar1 = _DAT_100c0a50 - gpGlobals->time;
        if (10.0 <= fVar1) {
          fVar1 = 10.0;
        }
        *(float *)(param_1 + 0x7a8) = fVar1 + gpGlobals->time;
      }
      goto LAB_1004c358;
    }
    fVar1 = (float)param_2 + gpGlobals->time;
  }
  *(float *)(param_1 + 0x75c) = fVar1;
LAB_1004c358:
  if (*(float *)(param_1 + 0x75c) < 0.0) {
    *(undefined1 *)(param_1 + 0x738) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 0x738) = 0xb;
  return;
}

/* 1004c380  FUN_1004c380  (283 bytes)
 * int FUN_1004c380(int * param_1)
 * called by: CBasePlayer::Restore, FUN_10026910
 */
int __cdecl FUN_1004c380(int *param_1)

{
  char cVar1;
  int iVar2;
  byte_conflict *pbVar3;
  edict_t *peVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char acStack_40 [32];
  char acStack_20 [32];
  
  iVar2 = (**(code **)(*g_pGameRules + 0x1c))();
  if (iVar2 == 0) {
    peVar4 = (edict_t *)FUN_1004c4a0(s_info_player_deathmatch_100a23fc,param_1,(char *)0x0);
  }
  else {
    acStack_40[0] = '\0';
    pbVar3 = (byte_conflict *)(**(code **)(*param_1 + 200))();
    iVar2 = CTSGameRules::GetTeamIndex((CTSGameRules *)&TSGameRules,pbVar3);
    if (iVar2 < 0) {
      uVar5 = 0xffffffff;
      pcVar7 = s_info_player_deathmatch_100a23fc;
      do {
        pcVar8 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar7 = pcVar8 + -uVar5;
      pcVar8 = acStack_20;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
    }
    else {
      uVar5 = 0xffffffff;
      pcVar7 = &TSGameRules_team0_spawnClass + iVar2 * 0x8c;
      do {
        pcVar8 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar7 = pcVar8 + -uVar5;
      pcVar8 = acStack_20;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      uVar5 = 0xffffffff;
      pcVar7 = &TSGameRules_team0_fallbackClass + iVar2 * 0x8c;
      do {
        pcVar8 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar7 = pcVar8 + -uVar5;
      pcVar8 = acStack_40;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
    }
    peVar4 = (edict_t *)FUN_1004c4a0(acStack_20,param_1,acStack_40);
  }
  if ((peVar4 != (edict_t *)0x0) &&
     (iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar4), iVar2 != 0)) {
    return (int)peVar4;
  }
  peVar4 = (*g_engfuncs.pfnPEntityOfEntIndex)(0);
  return (int)peVar4;
}

/* 1004c4a0  FUN_1004c4a0  (1056 bytes)
 * undefined4 FUN_1004c4a0(char * param_1, int * param_2, char * param_3)
 * called by: FUN_1004c380
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1004c4a0(char *param_1,int *param_2,char *param_3)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  edict_t *peVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  char *pcVar14;
  int iVar15;
  char *pcVar16;
  entvars_t *peVar17;
  longlong lVar18;
  int iVar19;
  int local_178;
  int local_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_160;
  float fStack_15c;
  char local_158 [32];
  int local_138 [32];
  undefined1 auStack_b8 [16];
  float fStack_a8;
  int local_80 [32];
  
  uVar11 = 0xffffffff;
  pcVar14 = param_1;
  do {
    pcVar16 = pcVar14;
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    pcVar16 = pcVar14 + 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar16;
  } while (cVar1 != '\0');
  uVar11 = ~uVar11;
  pcVar14 = pcVar16 + -uVar11;
  pcVar16 = local_158;
  for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar16 = *(undefined4 *)pcVar14;
    pcVar14 = pcVar14 + 4;
    pcVar16 = pcVar16 + 4;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pcVar16 = *pcVar14;
    pcVar14 = pcVar14 + 1;
    pcVar16 = pcVar16 + 1;
  }
  if ((param_3 != (char *)0x0) && (iVar7 = UTIL_FindEntityByClassname(0,param_1), iVar7 == 0)) {
    uVar11 = 0xffffffff;
    do {
      pcVar14 = param_3;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar14 = param_3 + 1;
      cVar1 = *param_3;
      param_3 = pcVar14;
    } while (cVar1 != '\0');
    uVar11 = ~uVar11;
    pcVar14 = pcVar14 + -uVar11;
    pcVar16 = local_158;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar16 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar16 = pcVar16 + 1;
    }
  }
  iVar13 = 0;
  piVar8 = local_80;
  for (iVar7 = 0x20; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar8 = 0;
    piVar8 = piVar8 + 1;
  }
  piVar8 = local_138;
  for (iVar7 = 0x20; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar8 = 0;
    piVar8 = piVar8 + 1;
  }
  local_178 = 0;
  piVar8 = (int *)UTIL_FindEntityByClassname(0,local_158);
  if (piVar8 != (int *)0x0) {
    local_174 = -4;
    do {
      iVar7 = (**(code **)(*piVar8 + 100))(param_2);
      if (iVar7 != 0) {
        bVar5 = true;
        bVar6 = false;
        iVar7 = 0x1000;
        for (piVar9 = (int *)UTIL_FindEntityByClassname(0,s_player_1009c678); piVar9 != (int *)0x0;
            piVar9 = (int *)UTIL_FindEntityByClassname((int)piVar9,s_player_1009c678)) {
          if ((((piVar9 != param_2) && (iVar13 = (**(code **)(*piVar9 + 0xc0))(), iVar13 != 0)) &&
              (iVar13 = (**(code **)(*piVar9 + 0xac))(), iVar13 != 0)) &&
             (iVar13 = piVar9[1], (*(byte *)(iVar13 + 0x118) & 0x80) == 0)) {
            if (bVar5) {
              fStack_170 = *(float *)(iVar13 + 0x174) + *(float *)(iVar13 + 8);
              fStack_16c = *(float *)(iVar13 + 0x178) + *(float *)(iVar13 + 0xc);
              fStack_168 = *(float *)(iVar13 + 0x17c) + *(float *)(iVar13 + 0x10);
              fStack_160 = fStack_16c;
              fStack_15c = fStack_168;
              FUN_10076f70(piVar8[1] + 8,&fStack_170,1,1,*(undefined4 *)(piVar8[1] + 0x208),
                           auStack_b8);
              if (fStack_a8 == 1.0) {
                iVar13 = (**(code **)(*g_pGameRules + 0xc4))(param_2,piVar9);
                if (iVar13 == 1) {
                  iVar13 = piVar8[1];
                  iVar15 = piVar9[1];
                  fVar2 = *(float *)(iVar13 + 8) - *(float *)(iVar15 + 8);
                  fVar4 = *(float *)(iVar13 + 0xc) - *(float *)(iVar15 + 0xc);
                  fVar3 = *(float *)(iVar13 + 0x10) - *(float *)(iVar15 + 0x10);
                  if (128.0 <= SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3)) {
                    bVar6 = true;
                  }
                  else {
                    bVar5 = false;
                  }
                }
                else {
                  bVar5 = false;
                }
              }
            }
            lVar18 = __ftol();
            if ((int)lVar18 < iVar7) {
              iVar7 = (int)lVar18;
            }
          }
        }
        iVar13 = local_178 + 1;
        *(int **)((int)local_80 + local_174 + 4) = piVar8;
        iVar15 = local_174 + 4;
        if (bVar6) {
          if (!bVar5) goto LAB_1004c753;
          iVar19 = 0x2000;
          iVar7 = 0x1801;
LAB_1004c734:
          iVar7 = (*g_engfuncs.pfnRandomLong)(iVar7,iVar19);
          *(int *)((int)local_138 + local_174 + 4) = iVar7;
        }
        else {
          if (bVar5) {
            iVar19 = 0x1800;
            iVar7 = 0x1001;
            goto LAB_1004c734;
          }
LAB_1004c753:
          *(int *)((int)local_138 + local_174 + 4) = iVar7;
        }
        local_178 = iVar13;
        local_174 = iVar15;
        if (0x7b < iVar15) break;
      }
      piVar8 = (int *)UTIL_FindEntityByClassname((int)piVar8,local_158);
    } while (piVar8 != (int *)0x0);
    if (0 < iVar13) {
      iVar7 = 0;
      iVar19 = 0;
      iVar15 = 0;
      if (0 < iVar13) {
        piVar8 = local_138;
        do {
          if (iVar7 < *piVar8) {
            iVar7 = *piVar8;
            iVar15 = iVar19;
          }
          iVar19 = iVar19 + 1;
          piVar8 = piVar8 + 1;
        } while (iVar19 < iVar13);
      }
      iVar7 = local_80[iVar15];
      if (local_138[iVar15] < 0x80) {
        for (piVar8 = (int *)FUN_10076410(0,*(int *)(iVar7 + 4) + 8,0x43000000);
            piVar8 != (int *)0x0;
            piVar8 = (int *)FUN_10076410((int)piVar8,*(int *)(iVar7 + 4) + 8,0x43000000)) {
          iVar13 = (**(code **)(*piVar8 + 0xc0))();
          if (((iVar13 != 0) && (piVar8 != param_2)) &&
             ((iVar13 = (**(code **)(*piVar8 + 0xac))(), iVar13 != 0 &&
              ((*(byte *)(piVar8[1] + 0x118) & 0x80) == 0)))) {
            peVar10 = (*g_engfuncs.pfnPEntityOfEntIndex)(0);
            if (peVar10 == (edict_t *)0x0) {
              peVar17 = (entvars_t *)0x0;
            }
            else {
              peVar17 = &peVar10->v;
            }
            peVar10 = (*g_engfuncs.pfnPEntityOfEntIndex)(0);
            if (peVar10 != (edict_t *)0x0) {
              peVar10 = (edict_t *)&peVar10->v;
            }
            (**(code **)(*piVar8 + 0x50))(peVar10,peVar17,0x43960000,0x1000);
          }
        }
      }
      _DAT_100c62dc = iVar7;
      return *(undefined4 *)(*(int *)(iVar7 + 4) + 0x208);
    }
  }
  iVar7 = UTIL_FindEntityByClassname(0,s_info_player_deathmatch_100a23fc);
  if ((iVar7 == 0) &&
     (iVar7 = UTIL_FindEntityByClassname(0,s_info_player_start_100a36d0), iVar7 == 0)) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(iVar7 + 4) + 0x208);
}

/* 1004c8c0  FUN_1004c8c0  (224 bytes)
 * undefined4 FUN_1004c8c0(undefined4 param_1, undefined4 param_2)
 * called by: InstallGameRules
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1004c8c0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char local_40 [64];
  
  DAT_102efbc0 = 0;
  DAT_102efbc4 = 0;
  if (DAT_102efbbc < 1) {
    local_40[0] = '\0';
    _strncpy(local_40,gpGlobals->pStringBase + gpGlobals->mapname,3);
    if (_DAT_1009ee34 == 0.0) {
      if (_DAT_1009ee7c != 0.0) {
        DAT_102efbbc = 0;
        DAT_102efbc4 = 1;
        return 0;
      }
      uVar1 = 1;
      if (_DAT_1009eb7c == 0.0) {
        uVar1 = param_2;
      }
      DAT_102efbbc = 0;
      return uVar1;
    }
  }
  else {
    if (DAT_102efbbc == 2) {
      DAT_102efbbc = 0;
      return 1;
    }
    if (DAT_102efbbc == 3) {
      DAT_102efbc0 = 0;
      DAT_102efbbc = 0;
      DAT_102efbc4 = 1;
      return 0;
    }
    if (DAT_102efbbc != 4) {
      DAT_102efbbc = 0;
      return 0;
    }
  }
  DAT_102efbbc = 0;
  DAT_102efbc0 = 1;
  return 1;
}

/* 1004cc30  FUN_1004cc30  (309 bytes)
 * undefined2 FUN_1004cc30(void * param_1, int * param_2)
 * called by: CTSStunt::CheckForBreakables, FUN_10056740
 */
undefined2 __cdecl FUN_1004cc30(void *param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ushort uVar5;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar3 = (**(code **)(*param_2 + 0xc0))();
  uVar5 = 0;
  if (iVar3 != 0) {
    fVar1 = (float)param_2[0x1e7];
    uVar5 = (ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 | (ushort)(fVar1 == 0.0) << 0xe;
    if (fVar1 >= 0.0 && (fVar1 == 0.0) == 0) {
      fVar1 = (float)param_2[0x1d8];
      uVar5 = (ushort)(fVar1 < 0.1) << 8 | (ushort)NAN(fVar1) << 10 | (ushort)(fVar1 == 0.1) << 0xe;
      if (fVar1 >= 0.1 && (fVar1 == 0.1) == 0) {
        iVar3 = param_2[1];
        iVar2 = *(int *)((int)param_1 + 4);
        fStack_c = (*(float *)(iVar3 + 8) + *(float *)(iVar2 + 8)) * 0.5;
        fStack_8 = (*(float *)(iVar3 + 0xc) + *(float *)(iVar2 + 0xc)) * 0.5;
        fStack_4 = (*(float *)(iVar3 + 0x10) + *(float *)(iVar2 + 0x10)) * 0.5 + 20.0;
        UTIL_Sparks(&fStack_c);
        EMIT_SOUND_DYN(*(void **)((int)param_1 + 4),
                       *(undefined4 *)((int)*(void **)((int)param_1 + 4) + 0x208),4,
                       s_weapons_knife_knife_hit_wav_100a36e4,0x3f800000,0x3f4ccccd,0);
        *(undefined4 *)((int)param_1 + 0x78c) = 0;
        *(undefined4 *)((int)param_1 + 0x118) = 0x3f400000;
        param_2[0x46] = 0x3eb33333;
        uVar4 = FUN_10063dd0(param_1,33.0);
        return (short)CONCAT31((int3)((uint)uVar4 >> 8),1);
      }
    }
  }
  return uVar5;
}

/* 1004cd70  FUN_1004cd70  (323 bytes)
 * undefined2 FUN_1004cd70(void * param_1, int * param_2)
 * called by: CTSStunt::CheckForBreakables, FUN_10057210
 */
undefined2 __cdecl FUN_1004cd70(void *param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ushort uVar5;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar3 = (**(code **)(*param_2 + 0xc0))();
  if (iVar3 == 0) {
    return 0;
  }
  if ((float)param_2[0x1e6] <= 0.0) {
    fVar1 = (float)param_2[0x1e7];
    uVar5 = (ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 | (ushort)(fVar1 == 0.0) << 0xe;
    if (fVar1 >= 0.0 && (fVar1 == 0.0) == 0) {
      fVar1 = (float)param_2[0x1d8];
      uVar5 = (ushort)(fVar1 < 0.1) << 8 | (ushort)NAN(fVar1) << 10 | (ushort)(fVar1 == 0.1) << 0xe;
      if (fVar1 >= 0.1 && (fVar1 == 0.1) == 0) goto LAB_1004cdcd;
    }
    return uVar5;
  }
LAB_1004cdcd:
  iVar3 = param_2[1];
  iVar2 = *(int *)((int)param_1 + 4);
  fStack_c = (*(float *)(iVar3 + 8) + *(float *)(iVar2 + 8)) * 0.5;
  fStack_8 = (*(float *)(iVar3 + 0xc) + *(float *)(iVar2 + 0xc)) * 0.5;
  fStack_4 = (*(float *)(iVar3 + 0x10) + *(float *)(iVar2 + 0x10)) * 0.5 + 20.0;
  UTIL_Sparks(&fStack_c);
  EMIT_SOUND_DYN(*(void **)((int)param_1 + 4),
                 *(undefined4 *)((int)*(void **)((int)param_1 + 4) + 0x208),4,
                 s_weapons_knife_knife_hit_wav_100a36e4,0x3f800000,0x3f4ccccd,0);
  *(undefined4 *)((int)param_1 + 0x78c) = 0;
  *(undefined4 *)((int)param_1 + 0x118) = 0x3f000000;
  param_2[0x46] = 0x3e800000;
  uVar4 = FUN_10063dd0(param_1,33.0);
  return (short)CONCAT31((int3)((uint)uVar4 >> 8),1);
}

/* 1004cec0  FUN_1004cec0  (403 bytes)
 * undefined4 FUN_1004cec0(int * param_1, int * param_2)
 * called by: CTSStunt::CheckForBreakables, FUN_10063920, FUN_10063eb0
 */
undefined4 __cdecl FUN_1004cec0(int *param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined2 uVar8;
  uint uVar6;
  undefined2 extraout_var;
  undefined4 uVar7;
  int *piVar9;
  Vector VStack_18;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar5 = (**(code **)(*param_2 + 0xc0))();
  uVar6 = 0;
  if (iVar5 == 0) goto LAB_1004d04a;
  fVar1 = (float)param_2[0x1e5];
  uVar8 = (undefined2)((uint)iVar5 >> 0x10);
  uVar6 = CONCAT22(uVar8,(ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                         (ushort)(fVar1 == 0.0) << 0xe);
  piVar9 = param_2;
  if (fVar1 < 0.0 || (fVar1 == 0.0) != 0) {
    fVar1 = (float)param_1[0x1e5];
    uVar6 = CONCAT22(uVar8,(ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                           (ushort)(fVar1 == 0.0) << 0xe);
    if ((fVar1 < 0.0 || (fVar1 == 0.0) != 0) ||
       (uVar6 = CONCAT31((int3)(uVar6 >> 8),(char)param_2[0x1e4]), (char)param_2[0x1e4] != '\0'))
    goto LAB_1004d04a;
    fVar1 = (float)param_2[0x1e2];
    uVar6 = CONCAT22(uVar8,(ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                           (ushort)(fVar1 == 0.0) << 0xe);
    piVar9 = param_1;
    param_1 = param_2;
    if (fVar1 < 0.0 || (fVar1 == 0.0) != 0) goto LAB_1004d04a;
  }
  if (piVar9 != (int *)0x0) {
    iVar5 = param_1[1];
    iVar2 = piVar9[1];
    fVar1 = *(float *)(iVar5 + 8) - *(float *)(iVar2 + 8);
    VStack_18.y = *(float *)(iVar5 + 0xc) - *(float *)(iVar2 + 0xc);
    fVar4 = *(float *)(iVar5 + 0x10) - *(float *)(iVar2 + 0x10);
    fVar3 = SQRT(fVar1 * fVar1 + VStack_18.y * VStack_18.y + fVar4 * fVar4);
    if (fVar3 != 0.0) {
      fVar3 = 1.0 / fVar3;
      fStack_c = fVar3 * fVar1;
      fStack_8 = VStack_18.y * fVar3;
      fStack_4 = fVar4 * fVar3;
      Vector::Vector(&VStack_18,&fStack_c);
    }
    UTIL_MakeVectors(piVar9[1] + 0x74);
    fVar1 = (float)param_2[0x1d8];
    uVar6 = CONCAT22(extraout_var,
                     (ushort)(fVar1 < 0.1) << 8 | (ushort)NAN(fVar1) << 10 |
                     (ushort)(fVar1 == 0.1) << 0xe);
    if (fVar1 >= 0.1) {
      EMIT_SOUND_DYN(*(void **)(param_1[1] + 0x208),*(void **)(param_1[1] + 0x208),4,
                     s_player_kungfuhit_wav_100a3700,0x3f800000,0x3f4ccccd,0);
      piVar9[0x1e3] = 0;
      param_1[0x1e3] = 0;
      param_1[0x46] = 0x3f000000;
      piVar9[0x46] = 0x3e800000;
      uVar7 = FUN_10063dd0(param_1,33.0);
      return CONCAT31((int3)((uint)uVar7 >> 8),1);
    }
  }
LAB_1004d04a:
  return uVar6 & 0xffffff00;
}

/* 1004d060  FUN_1004d060  (11 bytes)
 * undefined1 FUN_1004d060(int param_1)
 * called by: CBasePlayer::DropWeapon, CTSBriefcase::CaptureTouch, CTSTrigger::WaitTouch
 */
undefined1 __cdecl FUN_1004d060(int param_1)

{
  return *(undefined1 *)(param_1 + 0x7bc);
}

/* 1004d070  FUN_1004d070  (18 bytes)
 * int FUN_1004d070(int param_1)
 * called by: FUN_1004c1f0
 */
int __fastcall FUN_1004d070(int param_1)

{
  FUN_10047080((undefined4 *)(param_1 + 0x1864));
  return param_1;
}

/* 1004da70  FUN_1004da70  (63 bytes)
 * int FUN_1004da70(char * param_1)
 * called by: CHalfLifeTeamplay::RecountTeams, CHalfLifeTeamplay::Think
 */
int __fastcall FUN_1004da70(char *param_1)

{
  undefined4 in_EAX;
  int iVar1;
  uint3 uVar2;
  
  uVar2 = (uint3)((uint)in_EAX >> 8);
  if (*param_1 != '\x01') {
    return (uint)uVar2 << 8;
  }
  if (param_1[0x5891] == '\0') {
    iVar1 = UTIL_FindEntityByClassname(0,s_ts_briefcase_100a3f68);
    param_1[0x5891] = '\x01';
    uVar2 = (uint3)((uint)iVar1 >> 8);
    param_1[0x5890] = iVar1 != 0;
  }
  return CONCAT31(uVar2,param_1[0x5890]);
}

/* 1004dd20  FUN_1004dd20  (261 bytes)
 * undefined FUN_1004dd20(void)
 * called by: CHalfLifeTeamplay::CHalfLifeTeamplay
 */
void FUN_1004dd20(void)

{
  char cVar1;
  char *pcVar2;
  CTSGameRules *this;
  int iVar3;
  uint uVar4;
  uint uVar5;
  CTSGameRules *pCVar6;
  char *pcVar7;
  int iVar8;
  CTSGameRules *pCVar9;
  undefined4 *puVar10;
  char *pcVar11;
  char *in_stack_0000100c;
  
  FUN_1007e2e0();
  iVar8 = 4;
  pCVar6 = this + 0x38;
  do {
    iVar8 = iVar8 + -1;
    pCVar9 = pCVar6;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pCVar9 = 0;
      pCVar9 = pCVar9 + 4;
    }
    pCVar6 = pCVar6 + 0x8c;
  } while (iVar8 != 0);
  uVar4 = 0xffffffff;
  do {
    pcVar2 = in_stack_0000100c;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar2 = in_stack_0000100c + 1;
    cVar1 = *in_stack_0000100c;
    in_stack_0000100c = pcVar2;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar2 = pcVar2 + -uVar4;
  pcVar7 = &stack0x00000808;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar7 = pcVar7 + 1;
  }
  pcVar2 = (char *)FUN_1007e23b(&stack0x00000808,&DAT_100a3fd0);
  iVar3 = 0;
  puVar10 = (undefined4 *)&stack0x00000008;
  for (iVar8 = 0x200; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  if (pcVar2 != (char *)0x0) {
    pcVar7 = &stack0x00000008;
    do {
      if ((*pcVar2 == '\0') || (3 < iVar3)) break;
      uVar4 = 0xffffffff;
      iVar3 = iVar3 + 1;
      do {
        pcVar11 = pcVar2;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar11 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar11;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar2 = pcVar11 + -uVar4;
      pcVar11 = pcVar7;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar11 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar11 = pcVar11 + 1;
      }
      pcVar2 = (char *)FUN_1007e23b((byte_conflict *)0x0,&DAT_100a3fd0);
      pcVar7 = pcVar7 + 0x200;
    } while (pcVar2 != (char *)0x0);
  }
  iVar8 = 0;
  pcVar2 = &stack0x00000008;
  do {
    if (pcVar2 != (char *)0x0) {
      CTSGameRules::SetTeamModelList(this,iVar8,pcVar2);
    }
    iVar8 = iVar8 + 1;
    pcVar2 = pcVar2 + 0x200;
  } while (iVar8 < 4);
  return;
}

/* 1004e950  FUN_1004e950  (147 bytes)
 * undefined FUN_1004e950(float param_1, float param_2)
 * called by: cmd_globalslow
 */
void __thiscall FUN_1004e950(void *this,float param_1,float param_2)

{
  float fVar1;
  
  if (param_1 != *(float *)((int)this + 0x564)) {
    if (param_1 == 0.0) {
      *(undefined4 *)((int)this + 0x560) = 0;
      return;
    }
    FUN_1004e9f0(this,0.0,'\0');
    fVar1 = gpGlobals->time;
    *(float *)((int)this + 0x564) = param_1;
    *(float *)((int)this + 0x56c) = fVar1;
    *(undefined4 *)((int)this + 0x560) = 0x3f800000;
    if (param_2 != 0.0) {
      *(float *)((int)this + 0x568) = param_2 + gpGlobals->time;
      return;
    }
    *(undefined4 *)((int)this + 0x568) = 0;
  }
  return;
}

/* 1004e9f0  FUN_1004e9f0  (558 bytes)
 * undefined FUN_1004e9f0(float param_1, char param_2)
 * called by: CTSGameRules::Think, CTSSlowMotion::WaitThink, FUN_100494b0, FUN_1004e950
 */
void __thiscall FUN_1004e9f0(void *this,float param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((*(float *)((int)this + 0x56c) <= gpGlobals->time) || (param_1 == 0.0)) {
    iVar3 = 1;
    *(float *)((int)this + 0x56c) = gpGlobals->time + 0.5;
    if (0 < gpGlobals->maxClients) {
      do {
        piVar1 = (int *)UTIL_PlayerByIndex(iVar3);
        if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0xc0))(), iVar2 != 0)) {
          iVar2 = (**(code **)(*piVar1 + 0x10))();
          if (iVar2 == 0) {
            (**(code **)(*piVar1 + 0xc))(param_1,0);
            *(bool *)((int)piVar1 + 0x161) = param_2 != '\0';
          }
          if (param_1 == 0.0) {
            (**(code **)(*piVar1 + 0xc))(0x3f800000,0);
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 <= gpGlobals->maxClients);
    }
    piVar1 = (int *)UTIL_FindEntityByClassname(0,s_grenade_100a315c);
    while (((piVar1 != (int *)0x0 && (*(edict_t **)(piVar1[1] + 0x208) != (edict_t *)0x0)) &&
           (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(piVar1[1] + 0x208)),
           iVar3 != 0))) {
      iVar3 = (**(code **)(*piVar1 + 0x10))();
      if (iVar3 == 0) {
        (**(code **)(*piVar1 + 0xc))(param_1,0);
      }
      if (param_1 == 0.0) {
        (**(code **)(*piVar1 + 0xc))(0x3f800000,0);
      }
      piVar1 = (int *)UTIL_FindEntityByClassname((int)piVar1,s_grenade_100a315c);
    }
    piVar1 = (int *)UTIL_FindEntityByClassname(0,&DAT_1009d568);
    while (((piVar1 != (int *)0x0 && (*(edict_t **)(piVar1[1] + 0x208) != (edict_t *)0x0)) &&
           (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(piVar1[1] + 0x208)),
           iVar3 != 0))) {
      iVar3 = (**(code **)(*piVar1 + 0x10))();
      if (iVar3 == 0) {
        (**(code **)(*piVar1 + 0xc))(param_1,0);
      }
      if (param_1 == 0.0) {
        (**(code **)(*piVar1 + 0xc))(0x3f800000,0);
      }
      piVar1 = (int *)UTIL_FindEntityByClassname((int)piVar1,&DAT_1009d568);
    }
    piVar1 = (int *)UTIL_FindEntityByClassname(0,s_WorldGun_1009d570);
    while (((piVar1 != (int *)0x0 && (*(edict_t **)(piVar1[1] + 0x208) != (edict_t *)0x0)) &&
           (iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(piVar1[1] + 0x208)),
           iVar3 != 0))) {
      iVar3 = (**(code **)(*piVar1 + 0x10))();
      if (iVar3 == 0) {
        (**(code **)(*piVar1 + 0xc))(param_1,0);
      }
      if (param_1 == 0.0) {
        (**(code **)(*piVar1 + 0xc))(0x3f800000,0);
      }
      piVar1 = (int *)UTIL_FindEntityByClassname((int)piVar1,s_WorldGun_1009d570);
    }
  }
  return;
}

/* 1004ec20  FUN_1004ec20  (113 bytes)
 * undefined1 * FUN_1004ec20(int param_1)
 * called by: CHalfLifeTeamplay::ChangePlayerTeam, CHalfLifeTeamplay::ClientUserInfoChanged
 */
undefined1 * __thiscall FUN_1004ec20(void *this,int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = CTSGameRules::GetTeamIndex(this,(byte_conflict *)(param_1 + 0xb34));
  if (iVar1 != -1) {
    iVar4 = 3;
    iVar3 = 0;
    pcVar2 = (char *)(iVar1 * 0x8c + 0x38 + (int)this);
    do {
      if (*pcVar2 != '\0') {
        iVar3 = iVar3 + 1;
      }
      pcVar2 = pcVar2 + 0x10;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (iVar3 != 0) {
      iVar3 = (*g_engfuncs.pfnRandomLong)(0,iVar3 + -1);
      *(int *)(param_1 + 0x744) = iVar3;
      return (undefined1 *)(iVar3 * 0x10 + iVar1 * 0x8c + 0x38 + (int)this);
    }
  }
  return &DAT_100a9398;
}

/* 1004f150  FUN_1004f150  (71 bytes)
 * int FUN_1004f150(void)
 * called by: CTSBriefcase::CaptureTouch, CTSFlag::PlayerTakeFlag, CTSGameRules::TeamWin
 */
int FUN_1004f150(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 1;
  iVar4 = 0;
  if (0 < gpGlobals->maxClients) {
    do {
      piVar1 = (int *)UTIL_PlayerByIndex(iVar3);
      if (piVar1 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar1 + 0xc0))();
        if (iVar2 != 0) {
          iVar4 = iVar4 + 1;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= gpGlobals->maxClients);
  }
  return iVar4;
}

/* 1004fa60  FUN_1004fa60  (113 bytes)
 * uint FUN_1004fa60(int param_1, undefined4 * param_2)
 * called by: CTSObjectivePointer::Use
 */
uint __thiscall FUN_1004fa60(void *this,int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = FUN_1004fc40(this,param_1);
  if (0x7fffffff < uVar2) {
    if (0x1f < *(int *)((int)this + 0x2d0)) {
      return 0xffffffff;
    }
    *(int *)((int)this + *(int *)((int)this + 0x2d0) * 0x14 + 0x2d4) = param_1;
    puVar1 = (undefined4 *)((int)this + *(int *)((int)this + 0x2d0) * 0x14 + 0x2d8);
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
    uVar2 = *(uint *)((int)this + 0x2d0);
    *(uint *)((int)this + 0x2d0) = uVar2 + 1;
  }
  return uVar2;
}

/* 1004fae0  FUN_1004fae0  (284 bytes)
 * undefined FUN_1004fae0(int param_1, int * param_2)
 * called by: CTSObjectivePointer::Use, FUN_1004fc00
 */
void __thiscall FUN_1004fae0(void *this,int param_1,int *param_2)

{
  undefined4 *puVar1;
  byte_conflict *pbVar2;
  int iVar3;
  float *pfVar4;
  char local_40 [4];
  undefined1 auStack_3c [16];
  char acStack_2c [43];
  undefined1 uStack_1;
  
  if (((param_2 != (int *)0x0) && (param_1 < *(int *)((int)this + 0x2d0))) && (-1 < param_1)) {
    local_40[0] = '\0';
    puVar1 = (undefined4 *)((int)this + param_1 * 0x14 + 0x2d4);
    pbVar2 = (byte_conflict *)(**(code **)(*param_2 + 200))();
    iVar3 = CTSGameRules::GetTeamIndex(this,pbVar2);
    if ((-1 < iVar3) && (puVar1[iVar3 + 1] != 0)) {
      _strncpy(local_40,gpGlobals->pStringBase + puVar1[iVar3 + 1],0x40);
      uStack_1 = 0;
    }
    (*g_engfuncs.pfnMessageBegin)(1,DAT_100d97ac,(float *)0x0,*(edict_t **)(param_2[1] + 0x208));
    pfVar4 = (float *)(**(code **)(*(int *)*puVar1 + 0xf0))(auStack_3c);
    (*g_engfuncs.pfnWriteCoord)(*pfVar4);
    iVar3 = (**(code **)(*(int *)*puVar1 + 0xf0))(auStack_3c);
    (*g_engfuncs.pfnWriteCoord)(*(float *)(iVar3 + 4));
    iVar3 = (**(code **)(*(int *)*puVar1 + 0xf0))(auStack_3c);
    (*g_engfuncs.pfnWriteCoord)(*(float *)(iVar3 + 8));
    (*g_engfuncs.pfnWriteByte)(param_1);
    (*g_engfuncs.pfnWriteString)(acStack_2c);
    (*g_engfuncs.pfnMessageEnd)();
  }
  return;
}

/* 1004fc00  FUN_1004fc00  (51 bytes)
 * undefined FUN_1004fc00(int * param_1)
 * called by: CHalfLifeTeamplay::ChangePlayerTeam, CTSGameRules::InitHUD
 */
void __thiscall FUN_1004fc00(void *this,int *param_1)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (iVar1 = 0, 0 < *(int *)((int)this + 0x2d0))) {
    do {
      FUN_1004fae0(this,iVar1,param_1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)((int)this + 0x2d0));
  }
  return;
}

/* 1004fc40  FUN_1004fc40  (42 bytes)
 * int FUN_1004fc40(int param_1)
 * called by: CTSGameRules::ShowObjectiveOnHud, FUN_1004fa60
 */
int __thiscall FUN_1004fc40(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x2d0)) {
    piVar2 = (int *)((int)this + 0x2d4);
    do {
      if (*piVar2 == param_1) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 5;
    } while (iVar1 < *(int *)((int)this + 0x2d0));
  }
  return -1;
}

/* 10052e90  FUN_10052e90  (8 bytes)
 * undefined FUN_10052e90()
 */
void __fastcall FUN_10052e90(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10052e92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10c))();
  return;
}

/* 10052ea0  FUN_10052ea0  (8 bytes)
 * undefined FUN_10052ea0()
 */
void __fastcall FUN_10052ea0(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10052ea2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))();
  return;
}

/* 10052fc0  FUN_10052fc0  (102 bytes)
 * undefined FUN_10052fc0(void)
 * called by: compile_weapons_info
 */
void FUN_10052fc0(void)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int local_4;
  
  iVar3 = 0;
  pfVar2 = (float *)&DAT_100c6734;
  do {
    local_4 = 1;
    if (0x100c6737 < (int)pfVar2) {
      local_4 = iVar3;
    }
    fVar1 = 1.0 / SQRT((float)local_4 * 0.1);
    *pfVar2 = fVar1;
    if (1.0 < fVar1) {
      *pfVar2 = 1.0;
    }
    if (*pfVar2 < 0.0) {
      *pfVar2 = 0.0;
    }
    pfVar2 = pfVar2 + 1;
    iVar3 = iVar3 + 1;
  } while ((int)pfVar2 < 0x100d0374);
  return;
}

/* 10053030  FUN_10053030  (37 bytes)
 * float10 FUN_10053030(int param_1)
 * called by: CBasePlayer::ShootBulletsPlayer, FUN_10047280
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_10053030(int param_1)

{
  if (param_1 < 0) {
    return (float10)DAT_100c6734;
  }
  if (9999 < param_1) {
    return (float10)_DAT_100d0370;
  }
  return (float10)(&DAT_100c6734)[param_1];
}

/* 100537f0  FUN_100537f0  (42 bytes)
 * undefined FUN_100537f0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * called by: FUN_10053820
 */
void __cdecl
FUN_100537f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 *puVar1;
  
  puVar1 = get_weapon_info(param_1);
  puVar1[10] = param_2;
  puVar1[0xc] = param_3;
  puVar1[0xd] = param_4;
  puVar1[7] = param_5;
  return;
}

/* 10053820  FUN_10053820  (850 bytes)
 * undefined FUN_10053820(void)
 * called by: compile_weapons_info
 */
void FUN_10053820(void)

{
  FUN_100537f0(1,0x3c23d70a,0x400ccccd,0x3bd4fdf4,0x41c00000);
  FUN_100537f0(9,0x3c23d70a,0x40800000,0,0x42040000);
  FUN_100537f0(10,0x3ca3d70a,0x40800000,0,0x42040000);
  FUN_100537f0(0xc,0x3ba3d70a,0x40f00000,0x3c4ccccd,0x42440000);
  FUN_100537f0(0xe,0x3b23d70a,0x3fc00000,0x3c23d70a,0x41b80000);
  FUN_100537f0(0x1e,0x3ba3d70a,0x3fc00000,0x3c23d70a,0x41b80000);
  FUN_100537f0(2,0x3c23d70a,0x40200000,0,0x41d80000);
  FUN_100537f0(8,0x3ca3d70a,0x40200000,0,0x41d80000);
  FUN_100537f0(0x15,0x3bf5c28f,0x40b00000,0,0x42200000);
  FUN_100537f0(0x16,0x3c23d70a,0x40a00000,0x3c4ccccd,0x421c0000);
  FUN_100537f0(0x1c,0x3ba3d70a,0x3eb33333,0x3c03126f,0x41700000);
  FUN_100537f0(0x1f,0x3b23d70a,0x41500000,0,0x42be0000);
  FUN_100537f0(0x24,0x3a83126f,0x40f00000,0,0x42c80000);
  FUN_100537f0(3,0x3ca3d70a,0x3fe00000,0x3bd4fdf4,0x41a00000);
  FUN_100537f0(0x10,0x3d23d70a,0x3fe00000,0x3bd4fdf4,0x41a00000);
  FUN_100537f0(6,0x3ba3d70a,0x3fa00000,0x3ba3d70a,0x41980000);
  FUN_100537f0(7,0x3ca3d70a,0x40100000,0x3b449ba6,0x41b80000);
  FUN_100537f0(0x11,0x3ccccccd,0x3f000000,0x3ac49ba6,0x41800000);
  FUN_100537f0(0x25,0x3d4ccccd,0x3f000000,0x3b449ba6,0x41800000);
  FUN_100537f0(0x13,0x3ba3d70a,0x3f800000,0x3bd4fdf4,0x41800000);
  FUN_100537f0(0x17,0x3c75c28f,0x40400000,0,0x41f80000);
  FUN_100537f0(5,0x3ba3d70a,0x40700000,0x3b83126f,0x42040000);
  FUN_100537f0(0x12,0x3a83126f,0x41200000,0x3dcccccd,0x43390000);
  FUN_100537f0(0xd,0x3b23d70a,0x40b00000,0x38d1b717,0x421c0000);
  FUN_100537f0(0xf,0x3ba3d70a,0x40000000,0x3c23d70a,0x41e80000);
  FUN_100537f0(0x1b,0x3ac49ba6,0x40800000,0x3ba3d70a,0x42200000);
  FUN_100537f0(4,0x3d0f5c29,0x41500000,0,0x41400000);
  FUN_100537f0(0x14,0x3d4ccccd,0x41200000,0,0x41400000);
  FUN_100537f0(0x21,0x3d8f5c29,0x41200000,0,0x41a80000);
  FUN_100537f0(0x1a,0x3d3851ec,0x41080000,0,0x41800000);
  FUN_100537f0(0xb,0x3d851eb8,0x40800000,0,0x40e00000);
  FUN_100537f0(0x20,0x3c75c28f,0x3fc00000,0x3ba3d70a,0x42040000);
  return;
}

/* 10053ea0  FUN_10053ea0  (28 bytes)
 * bool FUN_10053ea0(int param_1)
 * called by: CTSGun::GetActiveItems, FUN_100542f0, FUN_100544e0
 */
bool __cdecl FUN_10053ea0(int param_1)

{
  return (&DAT_100d0768)[param_1 * 0x3dc] == '\x04';
}

/* 10053ec0  FUN_10053ec0  (28 bytes)
 * bool FUN_10053ec0(int param_1)
 * called by: CTSGun::GetActiveItems, FUN_100544e0
 */
bool __cdecl FUN_10053ec0(int param_1)

{
  return (&DAT_100d0768)[param_1 * 0x3dc] == '\x05';
}

/* 10053ee0  FUN_10053ee0  (286 bytes)
 * undefined FUN_10053ee0(float * param_1, float param_2, float param_3)
 * called by: FUN_10055a10, FUN_10055f30
 */
void __thiscall FUN_10053ee0(void *this,float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float10 fVar4;
  
  fVar1 = param_3;
  if (param_3 != 0.0) {
    *param_1 = *param_1 * 0.875;
  }
  if (0.0 < param_2) {
    param_3 = 2.0;
    uVar3 = FUN_1004c250(*(int *)((int)this + 0x70));
    if (uVar3 != 0) {
      param_3 = 1.0;
    }
    if (fVar1 != 0.0) {
      param_3 = param_3 * 0.775;
    }
    fVar1 = gpGlobals->time;
    fVar2 = fVar1 - *(float *)((int)this + 0x9d8);
    if (fVar2 < 0.001) {
      *(undefined4 *)((int)this + 0x9dc) = 0;
      *(float *)((int)this + 0x9d8) = fVar1;
      return;
    }
    *param_1 = *(float *)(*(int *)((int)this + 0x70) + 0x764) + *param_1;
    fVar4 = (float10)(**(code **)(**(int **)((int)this + 0x70) + 8))();
    fVar4 = fVar4 * (float10)fVar2;
    if ((float10)1.0 <= fVar4) {
      fVar4 = (float10)0.5;
      *(undefined4 *)((int)this + 0x9dc) = 0;
    }
    fVar4 = ((float10)1.0 - fVar4) * (float10)param_3 * (float10)param_2 +
            (float10)*(float *)(*(int *)((int)this + 0x70) + 0x764);
    if ((float10)0.1 <= fVar4) {
      fVar4 = (float10)0.1;
    }
    *(float *)(*(int *)((int)this + 0x70) + 0x764) = (float)fVar4;
    *(float *)((int)this + 0x9d8) = fVar1;
  }
  return;
}

/* 10054190  FUN_10054190  (101 bytes)
 * undefined FUN_10054190(int param_1)
 * called by: CBasePlayer::StartObserver, CTSGun::Spawn
 */
void __fastcall FUN_10054190(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x104);
  for (iVar1 = 0x214; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0xc4);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0x96a) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x96c);
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x9a4) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x9a8);
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined4 *)(param_1 + 0x9f8) = 0;
  return;
}

/* 100542f0  FUN_100542f0  (236 bytes)
 * undefined4 FUN_100542f0(uint param_1)
 * called by: FUN_100622f0
 */
undefined4 __thiscall FUN_100542f0(void *this,uint param_1)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0xbc);
  if (iVar3 == 0) {
    return 0;
  }
  if ((*(uint *)(*(int *)((int)this + 0xc0) + 0xe0) & param_1) == 0) {
    return 0;
  }
  if ((*(uint *)(*(int *)((int)this + 0xc0) + 0xe4) & param_1) != 0) {
    return 0;
  }
  if ((param_1 & *(uint *)(iVar3 + 0x10)) != 0) {
    return 0;
  }
  *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) | param_1;
  bVar2 = FUN_10053ea0(*(int *)((int)this + 0xb8));
  if (bVar2) {
    iVar3 = *(int *)(*(int *)((int)this + 0xc0) + 0xcc);
    *(uint *)((int)this + iVar3 * 0x38 + 0x114) =
         *(uint *)((int)this + iVar3 * 0x38 + 0x114) | param_1;
  }
  else {
    iVar3 = *(int *)(*(int *)((int)this + 0xc0) + 200);
    if ((iVar3 != -1) && (*(char *)((int)this + iVar3 * 0x38 + 0x104) != '\0')) {
      puVar1 = (uint *)((int)this + iVar3 * 0x38 + 0x114);
      *puVar1 = *puVar1 | param_1;
    }
  }
  iVar3 = *(int *)((int)this + 0xb8);
  *(undefined4 *)((int)this + 0xb8) = 0;
  iVar3 = CTSGun::SelectWeapon(this,iVar3);
  if (iVar3 != 0) {
    (**(code **)(*(int *)this + 0x120))();
  }
  return 1;
}

/* 100544e0  FUN_100544e0  (1002 bytes)
 * undefined4 FUN_100544e0(int param_1, undefined4 * param_2, uint param_3)
 * called by: CBasePlayer::PickUpWeapon
 */
undefined4 __thiscall FUN_100544e0(void *this,int param_1,undefined4 *param_2,uint param_3)

{
  char *pcVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  short sVar8;
  char *pcVar9;
  
  if (((-1 < param_1) && (param_1 < 0x26)) &&
     (iVar4 = param_1 * 0x3dc, *(char *)(&global_weapon_info + param_1 * 0xf7) != '\0')) {
    sVar8 = (short)param_1;
    if (*(char *)((int)this + param_1 * 0x38 + 0x104) == '\0') {
      iVar4 = *(int *)(&DAT_100d04e8 + iVar4);
      if ((iVar4 == -1) ||
         ((*(char *)(&global_weapon_info + iVar4 * 0xf7) != '\0' &&
          (*(char *)((int)this + iVar4 * 0x38 + 0x104) == '\0')))) goto LAB_100545c5;
    }
    else if ((&DAT_100d04fc)[iVar4] == '\0') {
      iVar5 = *(int *)(&DAT_100d04e8 + iVar4);
      if (((iVar5 != -1) && (*(char *)(&global_weapon_info + iVar5 * 0xf7) != '\0')) &&
         (*(char *)((int)this + iVar5 * 0x38 + 0x104) == '\0')) {
        sVar8 = *(short *)(&DAT_100d04e8 + iVar4);
        goto LAB_100545c5;
      }
    }
    else if (*(int *)((int)this + param_1 * 0x38 + 0x108) < *(int *)(&DAT_100d0444 + iVar4)) {
LAB_100545c5:
      iVar5 = (int)sVar8;
      pcVar1 = (char *)((int)this + iVar5 * 0x38 + 0x104);
      iVar4 = iVar5 * 0x3dc;
      if (((&DAT_100d04fc)[iVar5 * 0x3dc] != '\0') && (*pcVar1 != '\0')) {
        *(int *)(pcVar1 + 4) = *(int *)(pcVar1 + 4) + 1;
        return 1;
      }
      if (param_2 != (undefined4 *)0x0) {
        pcVar9 = pcVar1;
        for (iVar6 = 0xe; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined4 *)pcVar9 = *param_2;
          param_2 = param_2 + 1;
          pcVar9 = pcVar9 + 4;
        }
        *pcVar1 = '\x01';
        pcVar1[8] = '\0';
        pcVar1[9] = '\0';
        pcVar1[10] = '\0';
        pcVar1[0xb] = '\0';
        pcVar1[0xc] = '\0';
        pcVar1[0xd] = '\0';
        pcVar1[0xe] = '\0';
        pcVar1[0xf] = '\0';
        bVar3 = FUN_10053ea0(iVar5);
        if (bVar3) {
          *(int *)(pcVar1 + 4) =
               *(int *)(pcVar1 + 4) +
               *(int *)((int)this + *(int *)(&DAT_100d04ec + iVar4) * 0x38 + 0x108);
          iVar5 = *(int *)((int)this + *(int *)(&DAT_100d04ec + iVar4) * 0x38 + 0x108);
          *(int *)(pcVar1 + 0x1c) = iVar5;
          *(int *)(pcVar1 + 0x20) = *(int *)(pcVar1 + 4) - iVar5;
          uVar7 = *(uint *)(pcVar1 + 0x10) |
                  *(uint *)((int)this + *(int *)(&DAT_100d04ec + iVar4) * 0x38 + 0x114) | param_3;
          *(uint *)(pcVar1 + 0x10) = uVar7;
          *(uint *)((int)this + *(int *)(&DAT_100d04ec + iVar4) * 0x38 + 0x114) = uVar7;
          uVar7 = *(uint *)(pcVar1 + 0x14) |
                  *(uint *)((int)this + (*(int *)(&DAT_100d04ec + iVar4) + 5) * 0x38);
          *(uint *)(pcVar1 + 0x14) = uVar7;
          *(uint *)((int)this + (*(int *)(&DAT_100d04ec + iVar4) + 5) * 0x38) = uVar7;
          uVar7 = *(uint *)(&DAT_100d042c + iVar4);
          if ((uVar7 & 1) == 0) {
            if ((uVar7 & 8) == 0) {
              if ((uVar7 & 4) == 0) {
                pcVar1[2] = '\x01';
              }
              else {
                pcVar1[2] = '\x02';
              }
            }
            else {
              pcVar1[2] = '\x03';
            }
          }
          else {
            pcVar1[2] = '\0';
          }
        }
        *(uint *)(pcVar1 + 0x10) = *(uint *)(pcVar1 + 0x10) & *(uint *)(&DAT_100d0500 + iVar4);
        return 1;
      }
      *pcVar1 = '\x01';
      pcVar1[1] = (&DAT_100d0428)[iVar4];
      pcVar1[0xc] = '\0';
      pcVar1[0xd] = '\0';
      pcVar1[0xe] = '\0';
      pcVar1[0xf] = '\0';
      uVar7 = *(uint *)(&DAT_100d042c + iVar4);
      if ((uVar7 & 1) == 0) {
        if ((uVar7 & 8) == 0) {
          if ((uVar7 & 4) == 0) {
            pcVar1[2] = '\x01';
          }
          else {
            pcVar1[2] = '\x02';
          }
        }
        else {
          pcVar1[2] = '\x03';
        }
      }
      else {
        pcVar1[2] = '\0';
      }
      bVar3 = FUN_10053ea0(iVar5);
      if (bVar3) {
        *(undefined4 *)(pcVar1 + 0x1c) =
             *(undefined4 *)((int)this + *(int *)(&DAT_100d04ec + iVar4) * 0x38 + 0x108);
        iVar5 = (&DAT_100d0424)[*(int *)(&DAT_100d04ec + iVar4) * 0xf7];
        *(int *)(pcVar1 + 0x20) = iVar5;
        *(int *)(pcVar1 + 4) = *(int *)(pcVar1 + 0x1c) + iVar5;
        uVar7 = *(uint *)(pcVar1 + 0x10) |
                *(uint *)((int)this + *(int *)(&DAT_100d04ec + iVar4) * 0x38 + 0x114) | param_3;
        *(uint *)(pcVar1 + 0x10) = uVar7;
        *(uint *)((int)this + *(int *)(&DAT_100d04ec + iVar4) * 0x38 + 0x114) = uVar7;
        uVar7 = *(uint *)(pcVar1 + 0x14) |
                *(uint *)((int)this + (*(int *)(&DAT_100d04ec + iVar4) + 5) * 0x38);
        *(uint *)(pcVar1 + 0x14) = uVar7;
        *(uint *)((int)this + (*(int *)(&DAT_100d04ec + iVar4) + 5) * 0x38) = uVar7;
      }
      else {
        bVar3 = FUN_10053ec0(iVar5);
        if (bVar3) {
          *(int *)(pcVar1 + 0x1c) = (int)(&DAT_100d0424)[iVar5 * 0xf7] / 2;
          *(int *)(pcVar1 + 0x20) = (int)(&DAT_100d0424)[iVar5 * 0xf7] / 2;
          *(undefined4 *)(pcVar1 + 4) = (&DAT_100d0424)[iVar5 * 0xf7];
          *(uint *)(pcVar1 + 0x10) = *(uint *)(&DAT_100d0504 + iVar4) | param_3;
        }
        else {
          *(undefined4 *)(pcVar1 + 4) = (&DAT_100d0424)[iVar5 * 0xf7];
          *(uint *)(pcVar1 + 0x10) = *(uint *)(&DAT_100d0504 + iVar4) | param_3;
        }
        pcVar1[0x14] = '\0';
        pcVar1[0x15] = '\0';
        pcVar1[0x16] = '\0';
        pcVar1[0x17] = '\0';
      }
      uVar7 = *(uint *)(pcVar1 + 0x10);
      pcVar1[0x18] = '\0';
      pcVar1[0x19] = '\0';
      pcVar1[0x1a] = '\0';
      pcVar1[0x1b] = '\0';
      pcVar1[0x24] = '\0';
      pcVar1[8] = '\0';
      pcVar1[9] = '\0';
      pcVar1[10] = '\0';
      pcVar1[0xb] = '\0';
      *(int *)(pcVar1 + 0x28) = iVar4 + 0x100d0672;
      uVar2 = *(uint *)(&DAT_100d0500 + iVar4);
      *(uint *)(pcVar1 + 0x10) = uVar7 & uVar2;
      if ((uVar7 & uVar2 & 2) != 0) {
        *(uint *)(pcVar1 + 0x14) = *(uint *)(pcVar1 + 0x14) | 2;
      }
      if ((pcVar1[0x10] & 4U) != 0) {
        *(uint *)(pcVar1 + 0x14) = *(uint *)(pcVar1 + 0x14) | 4;
      }
      return 1;
    }
  }
  return 0;
}

/* 10054eb0  FUN_10054eb0  (47 bytes)
 * undefined FUN_10054eb0(int param_1)
 * called by: CTSGun::SecondaryAttack
 */
void __thiscall FUN_10054eb0(void *this,int param_1)

{
  *(float *)(*(int *)(*(int *)((int)this + 0x70) + 4) + 0x214) = (float)param_1;
  if (*(int *)(*(int *)((int)this + 0xc0) + 0x3c) < 0x28) {
    *(undefined4 *)(*(int *)(*(int *)((int)this + 0x70) + 4) + 0xbc) = 0;
  }
  return;
}

/* 10054ee0  FUN_10054ee0  (70 bytes)
 * undefined FUN_10054ee0(int param_1)
 * called by: CTSGun::AlternateAttack, CTSGun::HolsterWeapon, CTSGun::Reload, CTSGun::SecondaryAttack, FUN_100579e0
 */
void __fastcall FUN_10054ee0(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x214) = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x70) + 4);
  if ((*(int *)(iVar1 + 0xbc) == 0) && (*(int *)(param_1 + 0xc0) != 0)) {
    *(int *)(iVar1 + 0xbc) = (*(int *)(param_1 + 0xc0) - (int)gpGlobals->pStringBase) + 0x132;
  }
  return;
}

/* 10055230  FUN_10055230  (110 bytes)
 * undefined FUN_10055230(int param_1)
 * called by: FUN_100552a0, FUN_10055f30
 */
void __fastcall FUN_10055230(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0xb8) != 0x24) {
    (*g_engfuncs.pfnPlaybackEvent)
              (1,*(edict_t **)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x208),
               *(ushort *)(param_1 + 0x958),0.0,(float *)&DAT_100ae498,(float *)&DAT_100ae498,0.0,
               0.0,0,0,0,0);
    fVar1 = FUN_10076120();
    *(float *)(param_1 + 0x90) = (float)(fVar1 + (float10)0.1);
    *(float *)(param_1 + 0x8c) = (float)(fVar1 + (float10)0.1);
    fVar1 = FUN_10076120();
    *(float *)(param_1 + 0x98) = (float)(fVar1 + (float10)0.5);
  }
  return;
}

/* 100552a0  FUN_100552a0  (284 bytes)
 * undefined FUN_100552a0(void * param_1)
 * called by: CTSGun::PrimaryAttack, CTSGun::SecondaryAttack, CTSGun::WeaponIdle
 */
void __fastcall FUN_100552a0(void *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (*(int *)((int)param_1 + 0xbc) != 0) {
    if (*(int *)(*(int *)(*(int *)((int)param_1 + 0x70) + 4) + 0x1c0) == 3) {
      FUN_10055230((int)param_1);
      return;
    }
    uVar3 = FUN_1004c230(*(int *)((int)param_1 + 0x70));
    if (((uVar3 == 0) && (iVar2 = *(int *)((int)param_1 + 0xbc), *(int *)(iVar2 + 4) < 1)) &&
       ((*(char *)(iVar2 + 0x24) == '\0' ||
        ((*(char *)(iVar2 + 2) != '\x03' ||
         (*(char *)(*(int *)((int)param_1 + 0xc0) + 0x348) != '\x01')))))) {
      FUN_10055230((int)param_1);
      return;
    }
    DAT_100c631c = -1;
    UTIL_MakeVectors(*(int *)(*(int *)((int)param_1 + 0x70) + 4) + 0x74);
    cVar1 = *(char *)(*(int *)((int)param_1 + 0xc0) + 0x348);
    if ((cVar1 != '\x04') && (cVar1 != '\x05')) {
      if (cVar1 != '\x01') {
        FUN_10055a10(param_1);
        DAT_100c631c = 0;
        CTSAnimation::Animate
                  ((CTSAnimation *)(*(int **)((int)param_1 + 0x70) + 0x9e),
                   *(int **)((int)param_1 + 0x70),0);
        return;
      }
      FUN_100556a0(param_1);
      DAT_100c631c = 0;
      CTSAnimation::Animate
                ((CTSAnimation *)(*(int **)((int)param_1 + 0x70) + 0x9e),
                 *(int **)((int)param_1 + 0x70),0);
      return;
    }
    uVar4 = FUN_10055f30(param_1);
    if ((char)uVar4 != '\0') {
      DAT_100c631c = (*(char *)(*(int *)((int)param_1 + 0xbc) + 0x24) != '\0') + 8;
    }
    if (-1 < DAT_100c631c) {
      CTSAnimation::Animate
                ((CTSAnimation *)(*(int **)((int)param_1 + 0x70) + 0x9e),
                 *(int **)((int)param_1 + 0x70),DAT_100c631c);
    }
  }
  return;
}

/* 10055670  FUN_10055670  (1 bytes)
 * undefined FUN_10055670()
 */
void FUN_10055670(void)

{
  return;
}

/* 10055680  FUN_10055680  (1 bytes)
 * undefined FUN_10055680()
 */
void FUN_10055680(void)

{
  return;
}

/* 10055690  FUN_10055690  (1 bytes)
 * undefined FUN_10055690()
 */
void FUN_10055690(void)

{
  return;
}

/* 100556a0  FUN_100556a0  (825 bytes)
 * undefined FUN_100556a0(void * param_1)
 * called by: FUN_100552a0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100556a0(void *param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  float10 fVar5;
  float in_stack_ffffffa0;
  float fVar6;
  undefined *puVar7;
  edict_t *pInvoker;
  ushort eventindex;
  float in_stack_ffffffac;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  Vector VStack_1c;
  float afStack_10 [4];
  
  if ((DAT_100c6384 & 1) == 0) {
    DAT_100c6384 = DAT_100c6384 | 1;
    FUN_1007dd3e(0x10055a00);
  }
  if ((DAT_100c6384 & 2) == 0) {
    DAT_100c6384 = DAT_100c6384 | 2;
    FUN_1007dd3e(0x100559f0);
  }
  if ((DAT_100c6384 & 4) == 0) {
    DAT_100c6384 = DAT_100c6384 | 4;
    FUN_1007dd3e(0x100559e0);
  }
  iVar15 = *(int *)((int)param_1 + 0xbc);
  if (*(int *)(iVar15 + 8) != 0) {
    *(undefined4 *)(iVar15 + 8) = 2;
    return;
  }
  if ((*(char *)(iVar15 + 2) != '\x03') || (DAT_100c630d = '\x01', *(char *)(iVar15 + 0x24) == '\0')
     ) {
    DAT_100c630d = '\0';
  }
  if (*(char *)(*(int *)((int)param_1 + 0xbc) + 2) == '\x01') {
    _DAT_100c672c = 0.15;
  }
  else {
    _DAT_100c672c = *(float *)(*(int *)((int)param_1 + 0xc0) + 0x18);
  }
  fVar5 = FUN_10076120();
  *(float *)((int)param_1 + 0x8c) = (float)(fVar5 + (float10)_DAT_100c672c);
  fVar5 = FUN_10076120();
  *(float *)((int)param_1 + 0x98) = (float)(fVar5 + (float10)2.0);
  uVar3 = FUN_1004c230(*(int *)((int)param_1 + 0x70));
  if ((uVar3 == 0) && (*(int *)(*(int *)((int)param_1 + 0xbc) + 4) < 1)) {
    if (DAT_100c630d == '\0') {
      return;
    }
  }
  else if ((DAT_100c630d == '\0') &&
          (uVar3 = FUN_1004c230(*(int *)((int)param_1 + 0x70)), uVar3 == 0)) {
    piVar1 = (int *)(*(int *)((int)param_1 + 0xbc) + 4);
    *piVar1 = *piVar1 + -1;
  }
  puVar4 = (undefined4 *)(**(code **)(**(int **)((int)param_1 + 0x70) + 0x160))();
  _DAT_100c6300 = *puVar4;
  _DAT_100c6304 = puVar4[1];
  _DAT_100c6308 = puVar4[2];
  _DAT_100c6328 = gpGlobals->v_forward[0];
  _DAT_100c632c = gpGlobals->v_forward[1];
  _DAT_100c6330 = gpGlobals->v_forward[2];
  if (DAT_100c630d == '\0') {
    iVar15 = *(int *)((int)param_1 + 0xc0);
    fVar11 = *(float *)(iVar15 + 0x28);
    iVar14 = *(int *)(*(int *)((int)param_1 + 0x70) + 0x7d8);
    uVar3 = (uint)*(byte *)(iVar15 + 8);
    iVar13 = *(int *)(iVar15 + 0x20);
    fVar12 = *(float *)(iVar15 + 0x1c);
    fVar9 = fVar11;
    fVar10 = fVar11;
    puVar4 = (undefined4 *)Vector::Vector(&VStack_1c,fVar11,fVar11,fVar11);
    fVar8 = 2.629777e-29;
    Vector::Vector((Vector *)&stack0xffffffb8,puVar4);
    puVar7 = &DAT_100c6328;
    fVar6 = 2.6297815e-29;
    Vector::Vector((Vector *)&stack0xffffffac,(undefined4 *)&DAT_100c6328);
    Vector::Vector((Vector *)&stack0xffffffa0,(undefined4 *)&DAT_100c6300);
    puVar4 = (undefined4 *)
             CBasePlayer::ShootBulletsPlayer
                       (*(CBasePlayer **)((int)param_1 + 0x70),afStack_10,
                        *(byte_conflict *)(*(int *)((int)param_1 + 0xc0) + 0x24),in_stack_ffffffa0,
                        fVar6,(float)puVar7,in_stack_ffffffac,fVar8,(float)puVar4,fVar11,fVar9,
                        fVar10,fVar12,iVar13,uVar3,iVar14);
    _DAT_100c6378 = *puVar4;
    _DAT_100c637c = puVar4[1];
    _DAT_100c6380 = puVar4[2];
    iVar15 = *(int *)((int)param_1 + 0xc0);
    if (*(char *)(iVar15 + 0x38) != '\0') {
      fVar11 = 1.0;
      if ((*(byte *)(iVar15 + 0xc) & 3) != 0) {
        if (*(char *)(*(int *)((int)param_1 + 0xbc) + 2) == '\x01') {
          fVar11 = 1.0;
        }
        else {
          fVar11 = 0.35;
        }
      }
      CTSGun::VKickback(param_1,fVar11 * *(float *)(iVar15 + 0x30),(uint)*(byte *)(iVar15 + 0x348),
                        '\0');
    }
    if (DAT_100c630d == '\0') {
      fVar11 = *(float *)(*(int *)((int)param_1 + 0xc0) + 0x28);
      iVar15 = *(int *)(*(int *)((int)param_1 + 0x70) + 0x7d8);
      cVar2 = *(char *)(*(int *)((int)param_1 + 0xbc) + 2);
      iVar14 = *(int *)(*(int *)((int)param_1 + 0xbc) + 0x10);
      iVar13 = *(int *)((int)param_1 + 0xb8);
      eventindex = *(ushort *)((int)param_1 + 0x954);
      pInvoker = *(edict_t **)(*(int *)(*(int *)((int)param_1 + 0x70) + 4) + 0x208);
      goto LAB_100559b6;
    }
  }
  iVar15 = 0;
  cVar2 = *(char *)(*(int *)((int)param_1 + 0xbc) + 2);
  iVar14 = *(int *)(*(int *)((int)param_1 + 0xbc) + 0x10);
  iVar13 = *(int *)((int)param_1 + 0xb8);
  eventindex = *(ushort *)((int)param_1 + 0x95a);
  fVar11 = 0.0;
  pInvoker = *(edict_t **)(*(int *)(*(int *)((int)param_1 + 0x70) + 4) + 0x208);
LAB_100559b6:
  (*g_engfuncs.pfnPlaybackEvent)
            (1,pInvoker,eventindex,0.0,(float *)&DAT_100ae498,(float *)&DAT_100ae498,fVar11,fVar11,
             iVar13,iVar14,(uint)(cVar2 == '\x03'),iVar15);
  *(bool *)(*(int *)((int)param_1 + 0xbc) + 0x24) =
       *(char *)(*(int *)((int)param_1 + 0xbc) + 0x24) == '\0';
  return;
}

/* 100559e0  FUN_100559e0  (1 bytes)
 * undefined FUN_100559e0()
 */
void FUN_100559e0(void)

{
  return;
}

/* 100559f0  FUN_100559f0  (1 bytes)
 * undefined FUN_100559f0()
 */
void FUN_100559f0(void)

{
  return;
}

/* 10055a00  FUN_10055a00  (1 bytes)
 * undefined FUN_10055a00()
 */
void FUN_10055a00(void)

{
  return;
}

/* 10055a10  FUN_10055a10  (1256 bytes)
 * undefined FUN_10055a10(void * param_1)
 * called by: FUN_100552a0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10055a10(void *param_1)

{
  undefined4 *puVar1;
  float fVar2;
  uint uVar3;
  bool bVar4;
  float10 fVar5;
  float fStack00000010;
  float in_stack_ffffff9c;
  float fVar6;
  undefined *puVar7;
  float in_stack_ffffffa8;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  Vector VStack_1c;
  float afStack_10 [2];
  undefined4 uStack_8;
  
  if ((DAT_100c62e4 & 0x100) == 0) {
    DAT_100c62e4 = DAT_100c62e4 | 0x100;
    FUN_1007dd3e(0x10055f20);
  }
  if ((DAT_100c62e4 & 0x200) == 0) {
    DAT_100c62e4 = DAT_100c62e4 | 0x200;
    FUN_1007dd3e(0x10055f10);
  }
  if ((DAT_100c62e4 & 0x400) == 0) {
    DAT_100c62e4 = DAT_100c62e4 | 0x400;
    _DAT_100c62e8 = DAT_100ae498;
    _DAT_100c62ec = DAT_100ae49c;
    _DAT_100c62f0 = DAT_100ae4a0;
    FUN_1007dd3e(0x10055f00);
  }
  puVar1 = (undefined4 *)(**(code **)(**(int **)((int)param_1 + 0x70) + 0x160))();
  _DAT_100c6310 = *puVar1;
  _DAT_100c6314 = puVar1[1];
  _DAT_100c6318 = puVar1[2];
  _DAT_100c6338 = gpGlobals->v_forward[0];
  _DAT_100c633c = gpGlobals->v_forward[1];
  _DAT_100c6340 = gpGlobals->v_forward[2];
  DAT_100c62f4 = *(float *)(*(int *)((int)param_1 + 0xc0) + 0x28);
  if (*(int *)((int)param_1 + 0xb8) == 0x12) {
    iVar13 = *(int *)(*(int *)((int)param_1 + 0x70) + 4);
    if (35.0 < SQRT(*(float *)(iVar13 + 0x28) * *(float *)(iVar13 + 0x28) +
                    *(float *)(iVar13 + 0x24) * *(float *)(iVar13 + 0x24) +
                    *(float *)(iVar13 + 0x20) * *(float *)(iVar13 + 0x20))) {
      *(undefined4 *)(*(int *)((int)param_1 + 0x70) + 0x764) = 0x3e99999a;
    }
  }
  if ((*(int *)((int)param_1 + 0xb8) != 0x20) ||
     (iVar13 = *(int *)(*(int *)((int)param_1 + 0x70) + 4),
     SQRT(*(float *)(iVar13 + 0x28) * *(float *)(iVar13 + 0x28) +
          *(float *)(iVar13 + 0x24) * *(float *)(iVar13 + 0x24) +
          *(float *)(iVar13 + 0x20) * *(float *)(iVar13 + 0x20)) <= 175.0)) {
    iVar13 = *(int *)((int)param_1 + 0xc0);
    if (*(char *)(iVar13 + 0x2c) != '\0') {
      if (((*(byte *)(*(int *)((int)param_1 + 0xbc) + 0x10) & 1) == 0) ||
         ((*(byte *)(iVar13 + 0xe4) & 1) != 0)) {
        fVar2 = 0.0;
      }
      else {
        fVar2 = 1.4013e-45;
      }
      fVar9 = *(float *)(iVar13 + 0x34);
      goto LAB_10055be7;
    }
  }
  else {
    if (((*(byte *)(*(int *)((int)param_1 + 0xbc) + 0x10) & 1) == 0) ||
       ((*(byte *)(*(int *)((int)param_1 + 0xc0) + 0xe4) & 1) != 0)) {
      fVar2 = 0.0;
    }
    else {
      fVar2 = 1.4013e-45;
    }
    fVar9 = *(float *)(*(int *)((int)param_1 + 0xc0) + 0x34) * 5.0;
LAB_10055be7:
    FUN_10053ee0(param_1,&DAT_100c62f4,fVar9,fVar2);
  }
  iVar13 = *(int *)((int)param_1 + 0xc0);
  if (((*(byte *)(*(int *)((int)param_1 + 0xbc) + 0x10) & 1) == 0) ||
     ((*(byte *)(iVar13 + 0xe4) & 1) != 0)) {
    fVar2 = 1.0;
  }
  else {
    fVar2 = 0.775;
  }
  fVar2 = fVar2 * *(float *)(iVar13 + 0x1c);
  iVar14 = *(int *)(*(int *)((int)param_1 + 0x70) + 0x7d8);
  uVar3 = (uint)*(byte *)(iVar13 + 8);
  iVar13 = *(int *)(iVar13 + 0x20);
  fVar9 = DAT_100c62f4;
  fVar10 = DAT_100c62f4;
  fVar11 = DAT_100c62f4;
  puVar1 = (undefined4 *)Vector::Vector(&VStack_1c,DAT_100c62f4,DAT_100c62f4,DAT_100c62f4);
  fVar8 = 2.6300776e-29;
  Vector::Vector((Vector *)&stack0xffffffb4,puVar1);
  puVar7 = &DAT_100c6338;
  fVar6 = 2.630082e-29;
  Vector::Vector((Vector *)&stack0xffffffa8,(undefined4 *)&DAT_100c6338);
  Vector::Vector((Vector *)&stack0xffffff9c,(undefined4 *)&DAT_100c6310);
  puVar1 = (undefined4 *)
           CBasePlayer::ShootBulletsPlayer
                     (*(CBasePlayer **)((int)param_1 + 0x70),afStack_10,
                      *(byte_conflict *)(*(int *)((int)param_1 + 0xc0) + 0x24),in_stack_ffffff9c,
                      fVar6,(float)puVar7,in_stack_ffffffa8,fVar8,(float)puVar1,fVar9,fVar10,fVar11,
                      fVar2,iVar13,uVar3,iVar14);
  _DAT_100c62e8 = *puVar1;
  _DAT_100c62ec = puVar1[1];
  _DAT_100c62f0 = puVar1[2];
  iVar13 = *(int *)((int)param_1 + 0xc0);
  if (((*(byte *)(iVar13 + 0x348) == 7) || (*(int *)((int)param_1 + 0xb8) == 0x1f)) ||
     (*(int *)((int)param_1 + 0xb8) == 0x21)) {
    if (((*(byte *)(*(int *)((int)param_1 + 0xbc) + 0x10) & 1) == 0) ||
       ((*(byte *)(iVar13 + 0xe4) & 1) != 0)) {
      cVar12 = '\0';
    }
    else {
      cVar12 = '\x01';
    }
    fVar2 = *(float *)(iVar13 + 0x30);
  }
  else {
    if (*(char *)(iVar13 + 0x38) == '\0') goto LAB_10055d36;
    if (((*(byte *)(*(int *)((int)param_1 + 0xbc) + 0x10) & 1) == 0) ||
       ((*(byte *)(iVar13 + 0xe4) & 1) != 0)) {
      fVar2 = *(float *)(iVar13 + 0x30);
      cVar12 = '\0';
    }
    else {
      fVar2 = *(float *)(iVar13 + 0x30);
      cVar12 = '\x01';
    }
  }
  CTSGun::VKickback(param_1,fVar2,(uint)*(byte *)(iVar13 + 0x348),cVar12);
LAB_10055d36:
  uVar3 = FUN_1004c230(*(int *)((int)param_1 + 0x70));
  if (uVar3 == 0) {
    *(int *)(*(int *)((int)param_1 + 0xbc) + 4) = *(int *)(*(int *)((int)param_1 + 0xbc) + 4) + -1;
    iVar13 = *(int *)(*(int *)((int)param_1 + 0xc0) + 200);
    if (iVar13 != -1) {
      *(int *)((int)param_1 + iVar13 * 0x38 + 0x108) =
           *(int *)((int)param_1 + iVar13 * 0x38 + 0x108) + -1;
      *(undefined4 *)((int)param_1 + *(int *)(*(int *)((int)param_1 + 0xc0) + 200) * 0x38 + 0x120) =
           *(undefined4 *)(*(int *)((int)param_1 + 0xbc) + 4);
      iVar13 = *(int *)(*(int *)((int)param_1 + 0xc0) + 200);
      if (*(int *)((int)param_1 + iVar13 * 0x38 + 0x108) < 0) {
        *(undefined4 *)((int)param_1 + iVar13 * 0x38 + 0x108) = 0;
      }
    }
  }
  bVar4 = *(int *)(*(int *)((int)param_1 + 0xbc) + 4) == 0;
  DAT_100c62e4 = CONCAT31(DAT_100c62e4._1_3_,bVar4);
  (*g_engfuncs.pfnPlaybackEvent)
            (1,*(edict_t **)(*(int *)(*(int *)((int)param_1 + 0x70) + 4) + 0x208),
             *(ushort *)((int)param_1 + 0x954),0.0,(float *)&DAT_100ae498,(float *)&DAT_100ae498,
             DAT_100c62f4,DAT_100c62f4,*(int *)((int)param_1 + 0xb8),
             *(int *)(*(int *)((int)param_1 + 0xbc) + 0x10),(uint)bVar4,
             *(int *)(*(int *)((int)param_1 + 0x70) + 0x7d8));
  cVar12 = *(char *)(*(int *)((int)param_1 + 0xbc) + 2);
  if (cVar12 == '\x02') {
    if (*(int *)(*(int *)((int)param_1 + 0xbc) + 8) == 1) {
      _DAT_100c62e0 = 0.2;
    }
    else {
      _DAT_100c62e0 = 0.03;
    }
  }
  else if ((cVar12 == '\x01') && ((*(byte *)(*(int *)((int)param_1 + 0xc0) + 0xc) & 1) != 0)) {
    _DAT_100c62e0 = 0.1;
  }
  else {
    _DAT_100c62e0 = *(float *)(*(int *)((int)param_1 + 0xc0) + 0x18);
  }
  fVar5 = FUN_10076120();
  fStack00000010 = 2.0;
  *(float *)((int)param_1 + 0x8c) = (float)(fVar5 + (float10)_DAT_100c62e0);
  if ((*(int *)((int)param_1 + 0xb8) == 0x24) && (*(int *)(*(int *)((int)param_1 + 0xbc) + 4) < 1))
  {
    uStack_8 = 0x10055ed2;
    uVar3 = FUN_1004c230(*(int *)((int)param_1 + 0x70));
    if (uVar3 == 0) {
      fStack00000010 = 0.5;
    }
  }
  fVar5 = FUN_10076120();
  *(float *)((int)param_1 + 0x98) = (float)(fVar5 + (float10)fStack00000010);
  return;
}

/* 10055f00  FUN_10055f00  (1 bytes)
 * undefined FUN_10055f00()
 */
void FUN_10055f00(void)

{
  return;
}

/* 10055f10  FUN_10055f10  (1 bytes)
 * undefined FUN_10055f10()
 */
void FUN_10055f10(void)

{
  return;
}

/* 10055f20  FUN_10055f20  (1 bytes)
 * undefined FUN_10055f20()
 */
void FUN_10055f20(void)

{
  return;
}

/* 10055f30  FUN_10055f30  (1799 bytes)
 * undefined4 FUN_10055f30(void * param_1)
 * called by: FUN_100552a0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10055f30(void *param_1)

{
  ushort eventindex;
  bool bVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 extraout_EAX;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  char cVar11;
  bool bVar12;
  float10 fVar13;
  float10 fVar14;
  byte_conflict bVar15;
  float in_stack_ffffff88;
  float in_stack_ffffff8c;
  float fVar16;
  undefined *puVar17;
  undefined *in_stack_ffffff94;
  float in_stack_ffffff98;
  float fVar18;
  float fVar19;
  float local_20;
  float local_1c;
  float fStack_18;
  undefined1 auStack_14 [20];
  
  if ((DAT_100c6718 & 1) == 0) {
    DAT_100c6718 = DAT_100c6718 | 1;
    FUN_1007dd3e(0x10056660);
  }
  if ((DAT_100c6718 & 2) == 0) {
    DAT_100c6718 = DAT_100c6718 | 2;
    FUN_1007dd3e(0x10056650);
  }
  if ((DAT_100c6718 & 4) == 0) {
    DAT_100c6718 = DAT_100c6718 | 4;
    FUN_1007dd3e(0x10056640);
  }
  iVar3 = *(int *)((int)param_1 + 0xbc);
  cVar11 = *(char *)(iVar3 + 2);
  if ((cVar11 == '\x05') || (cVar11 == '\x04')) {
    bVar12 = true;
    if (cVar11 == '\x05') {
      uVar2 = *(uint *)(*(int *)(*(int *)((int)param_1 + 0x70) + 4) + 0x180);
      if ((uVar2 & 1) != 0) goto joined_r0x10055fca;
      goto LAB_10055fde;
    }
    uVar2 = *(uint *)(*(int *)((int)param_1 + 0x70) + 0x800);
    if ((uVar2 & 1) == 0) goto LAB_10055fde;
joined_r0x10055fca:
    if ((uVar2 & 0x800) == 0) goto LAB_10055fde;
LAB_10055fe7:
    bVar1 = true;
  }
  else {
    bVar12 = false;
LAB_10055fde:
    bVar1 = false;
    if (cVar11 == '\0') goto LAB_10055fe7;
  }
  if ((!bVar12) || (bVar1)) {
    *(bool *)(iVar3 + 0x24) = *(char *)(iVar3 + 0x24) == '\0';
    if (*(int *)(*(int *)((int)param_1 + 0xbc) + 0x20) < 1) {
      bVar1 = false;
      *(undefined1 *)(*(int *)((int)param_1 + 0xbc) + 0x24) = 1;
    }
    if (*(int *)(*(int *)((int)param_1 + 0xbc) + 0x1c) < 1) {
      bVar1 = false;
      *(undefined1 *)(*(int *)((int)param_1 + 0xbc) + 0x24) = 0;
    }
  }
  else {
    if ((*(byte *)(*(int *)(*(int *)((int)param_1 + 0x70) + 4) + 0x180) & 1) != 0) {
      if (*(int *)(iVar3 + 0x20) < 1) goto LAB_10056036;
      *(undefined1 *)(iVar3 + 0x24) = 0;
    }
    if ((*(uint *)(*(int *)(*(int *)((int)param_1 + 0x70) + 4) + 0x180) & 0x800) != 0) {
      if (*(int *)(*(int *)((int)param_1 + 0xbc) + 0x1c) < 1) {
LAB_10056036:
        uVar2 = FUN_10055230((int)param_1);
        return uVar2 & 0xffffff00;
      }
      *(undefined1 *)(*(int *)((int)param_1 + 0xbc) + 0x24) = 1;
    }
  }
  uVar2 = FUN_1004c230(*(int *)((int)param_1 + 0x70));
  if (uVar2 != 0) goto LAB_10056136;
  iVar3 = *(int *)((int)param_1 + 0xbc);
  if (bVar1) {
    *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + -2;
    *(int *)(*(int *)((int)param_1 + 0xbc) + 0x1c) =
         *(int *)(*(int *)((int)param_1 + 0xbc) + 0x1c) + -1;
    iVar3 = *(int *)((int)param_1 + 0xbc);
LAB_100560bc:
    *(int *)(iVar3 + 0x20) = *(int *)(iVar3 + 0x20) + -1;
  }
  else {
    *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + -1;
    iVar3 = *(int *)((int)param_1 + 0xbc);
    if (*(char *)(iVar3 + 0x24) == '\0') goto LAB_100560bc;
    *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + -1;
  }
  if (*(int *)(*(int *)((int)param_1 + 0xbc) + 4) < 0) {
    *(undefined4 *)(*(int *)((int)param_1 + 0xbc) + 4) = 0;
  }
  if (*(int *)(*(int *)((int)param_1 + 0xbc) + 0x1c) < 0) {
    *(undefined4 *)(*(int *)((int)param_1 + 0xbc) + 0x1c) = 0;
  }
  if (*(int *)(*(int *)((int)param_1 + 0xbc) + 0x20) < 0) {
    *(undefined4 *)(*(int *)((int)param_1 + 0xbc) + 0x20) = 0;
  }
  if (*(char *)(*(int *)((int)param_1 + 0xc0) + 0x348) == '\x04') {
    *(undefined4 *)((int)param_1 + *(int *)(*(int *)((int)param_1 + 0xc0) + 0xcc) * 0x38 + 0x108) =
         *(undefined4 *)(*(int *)((int)param_1 + 0xbc) + 0x1c);
  }
LAB_10056136:
  cVar11 = '\0';
  DAT_100c6344 = *(float *)(*(int *)((int)param_1 + 0xc0) + 0x28);
  iVar3 = *(int *)((int)param_1 + 0xc0);
  if (*(char *)(iVar3 + 0x2c) != '\0') {
    if (((*(byte *)(*(int *)((int)param_1 + 0xbc) + 0x10) & 1) == 0) ||
       ((*(byte *)(iVar3 + 0xe4) & 1) != 0)) {
      fVar7 = 0.0;
    }
    else {
      fVar7 = 1.4013e-45;
    }
    if (bVar1) {
      fVar19 = 2.0;
    }
    else {
      fVar19 = 1.0;
    }
    FUN_10053ee0(param_1,&DAT_100c6344,fVar19 * *(float *)(iVar3 + 0x34),fVar7);
  }
  if (((*(byte *)(*(int *)((int)param_1 + 0xbc) + 0x10) & 1) == 0) ||
     ((*(byte *)(*(int *)((int)param_1 + 0xc0) + 0xe4) & 1) != 0)) {
    fVar7 = 1.0;
  }
  else {
    fVar7 = 0.775;
  }
  DAT_100d96c8 = fVar7 * *(float *)(*(int *)((int)param_1 + 0xc0) + 0x1c);
  if (bVar1) {
    _DAT_100c6708 = gpGlobals->v_forward[0];
    _DAT_100c670c = gpGlobals->v_forward[1];
    _DAT_100c6710 = gpGlobals->v_forward[2];
    fVar9 = (float)((-(uint)(*(char *)(*(int *)((int)param_1 + 0xbc) + 0x24) != '\0') & 0xfffffff6)
                   + 5);
    fVar19 = (float)(int)fVar9;
    fVar7 = gpGlobals->v_right[0];
    local_20 = fVar19 * gpGlobals->v_right[1];
    local_1c = fVar19 * gpGlobals->v_right[2];
    pfVar4 = (float *)(**(code **)(**(int **)((int)param_1 + 0x70) + 0x160))();
    _DAT_100c6368 = fVar9 + *pfVar4;
    _DAT_100c636c = fVar19 * fVar7 + pfVar4[1];
    _DAT_100c6370 = local_20 + pfVar4[2];
    iVar3 = *(int *)(*(int *)((int)param_1 + 0x70) + 0x7d8);
    uVar2 = (uint)*(byte *)(*(int *)((int)param_1 + 0xc0) + 8);
    iVar10 = *(int *)(*(int *)((int)param_1 + 0xc0) + 0x20);
    fVar7 = DAT_100c6344;
    fVar19 = DAT_100c6344;
    fVar9 = DAT_100c6344;
    fVar8 = DAT_100d96c8;
    local_20 = _DAT_100c6370;
    fStack_18 = _DAT_100c636c;
    auStack_14._0_4_ = _DAT_100c6370;
    puVar5 = (undefined4 *)
             Vector::Vector((Vector *)(auStack_14 + 4),DAT_100c6344,DAT_100c6344,DAT_100c6344);
    fVar18 = 2.6305696e-29;
    Vector::Vector((Vector *)&stack0xffffffa4,puVar5);
    in_stack_ffffff94 = &DAT_100c6708;
    fVar16 = 2.630574e-29;
    Vector::Vector((Vector *)&stack0xffffff98,(undefined4 *)&DAT_100c6708);
    uVar6 = Vector::Vector((Vector *)&stack0xffffff8c,(undefined4 *)&DAT_100c6368);
    bVar15 = *(byte_conflict *)(*(int *)((int)param_1 + 0xc0) + 0x24);
    in_stack_ffffff88 = (float)CONCAT31((int3)((uint)uVar6 >> 8),bVar15);
    puVar5 = (undefined4 *)
             CBasePlayer::ShootBulletsPlayer
                       (*(CBasePlayer **)((int)param_1 + 0x70),&local_1c,bVar15,in_stack_ffffff8c,
                        fVar16,(float)in_stack_ffffff94,in_stack_ffffff98,fVar18,(float)puVar5,fVar7
                        ,fVar19,fVar9,fVar8,iVar10,uVar2,iVar3);
    _DAT_100c6720 = *puVar5;
    _DAT_100c6724 = puVar5[1];
    _DAT_100c6728 = puVar5[2];
    fVar8 = (float)((-(uint)(*(char *)(*(int *)((int)param_1 + 0xbc) + 0x24) != '\0') & 10) - 5);
    fVar9 = (float)(int)fVar8;
    fVar7 = gpGlobals->v_right[0];
    fVar19 = gpGlobals->v_right[1];
    local_20 = fVar9 * gpGlobals->v_right[2];
    pfVar4 = (float *)(**(code **)(**(int **)((int)param_1 + 0x70) + 0x160))();
    _DAT_100c6368 = fVar8 + *pfVar4;
    _DAT_100c636c = fVar9 * fVar7 + pfVar4[1];
    _DAT_100c6370 = fVar9 * fVar19 + pfVar4[2];
    uVar2 = (uint)*(byte *)(*(int *)((int)param_1 + 0xc0) + 8);
    iVar10 = *(int *)(*(int *)((int)param_1 + 0x70) + 0x7d8) + 0x21;
    iVar3 = *(int *)(*(int *)((int)param_1 + 0xc0) + 0x20);
    fVar7 = DAT_100c6344;
    fVar19 = DAT_100c6344;
    fVar9 = DAT_100c6344;
    fVar8 = DAT_100d96c8;
    local_1c = _DAT_100c636c;
    fStack_18 = _DAT_100c6370;
    puVar5 = (undefined4 *)
             Vector::Vector((Vector *)auStack_14,DAT_100c6344,DAT_100c6344,DAT_100c6344);
    fVar18 = 2.630655e-29;
    Vector::Vector((Vector *)&stack0xffffffa0,puVar5);
    puVar17 = &DAT_100c6708;
    fVar16 = 2.6306596e-29;
    Vector::Vector((Vector *)&stack0xffffff94,(undefined4 *)&DAT_100c6708);
    Vector::Vector((Vector *)&stack0xffffff88,(undefined4 *)&DAT_100c6368);
    bVar15 = *(byte_conflict *)(*(int *)((int)param_1 + 0xc0) + 0x24);
  }
  else {
    _DAT_100c6708 = gpGlobals->v_forward[0];
    _DAT_100c670c = gpGlobals->v_forward[1];
    _DAT_100c6710 = gpGlobals->v_forward[2];
    pfVar4 = (float *)(**(code **)(**(int **)((int)param_1 + 0x70) + 0x160))();
    _DAT_100c6368 = *pfVar4;
    _DAT_100c636c = pfVar4[1];
    _DAT_100c6370 = pfVar4[2];
    iVar10 = *(int *)(*(int *)((int)param_1 + 0x70) + 0x7d8);
    uVar2 = (uint)*(byte *)(*(int *)((int)param_1 + 0xc0) + 8);
    iVar3 = *(int *)(*(int *)((int)param_1 + 0xc0) + 0x20);
    fVar7 = DAT_100c6344;
    fVar19 = DAT_100c6344;
    fVar9 = DAT_100c6344;
    fVar8 = DAT_100d96c8;
    puVar5 = (undefined4 *)
             Vector::Vector((Vector *)auStack_14,DAT_100c6344,DAT_100c6344,DAT_100c6344);
    fVar18 = 2.6307087e-29;
    Vector::Vector((Vector *)&stack0xffffffa0,puVar5);
    puVar17 = &DAT_100c6708;
    fVar16 = 2.6307132e-29;
    Vector::Vector((Vector *)&stack0xffffff94,(undefined4 *)&DAT_100c6708);
    Vector::Vector((Vector *)&stack0xffffff88,(undefined4 *)&DAT_100c6368);
    bVar15 = *(byte_conflict *)(*(int *)((int)param_1 + 0xc0) + 0x24);
  }
  puVar5 = (undefined4 *)
           CBasePlayer::ShootBulletsPlayer
                     (*(CBasePlayer **)((int)param_1 + 0x70),&local_20,bVar15,in_stack_ffffff88,
                      fVar16,(float)puVar17,(float)in_stack_ffffff94,fVar18,(float)puVar5,fVar7,
                      fVar19,fVar9,fVar8,iVar3,uVar2,iVar10);
  _DAT_100c6720 = *puVar5;
  _DAT_100c6724 = puVar5[1];
  _DAT_100c6728 = puVar5[2];
  iVar3 = *(int *)((int)param_1 + 0xc0);
  if (*(char *)(iVar3 + 0x38) != '\0') {
    if (((*(byte *)(*(int *)((int)param_1 + 0xbc) + 0x10) & 1) != 0) &&
       ((*(byte *)(iVar3 + 0xe4) & 1) == 0)) {
      cVar11 = '\x01';
    }
    if (bVar1) {
      fVar7 = 2.0;
    }
    else {
      fVar7 = 1.0;
    }
    CTSGun::VKickback(param_1,fVar7 * *(float *)(iVar3 + 0x30),(uint)*(byte *)(iVar3 + 0x348),cVar11
                     );
  }
  bVar12 = *(char *)(*(int *)((int)param_1 + 0xbc) + 0x24) != '\0';
  DAT_100c6320 = CONCAT31((int3)((uint)DAT_100c6320 >> 8),bVar12);
  if (bVar1) {
    eventindex = *(ushort *)((int)param_1 + 0x95e);
  }
  else {
    eventindex = *(ushort *)((int)param_1 + 0x954);
  }
  (*g_engfuncs.pfnPlaybackEvent)
            (1,*(edict_t **)(*(int *)(*(int *)((int)param_1 + 0x70) + 4) + 0x208),eventindex,0.0,
             (float *)&DAT_100ae498,(float *)&DAT_100ae498,DAT_100c6344,DAT_100c6344,
             *(int *)((int)param_1 + 0xb8),*(int *)(*(int *)((int)param_1 + 0xbc) + 0x10),
             (uint)bVar12,*(int *)(*(int *)((int)param_1 + 0x70) + 0x7d8));
  cVar11 = *(char *)(*(int *)((int)param_1 + 0xbc) + 2);
  if (cVar11 == '\x02') {
    if (*(int *)(*(int *)((int)param_1 + 0xbc) + 8) == 1) {
      _DAT_100c6730 = 0.2;
    }
    else {
      _DAT_100c6730 = 0.03;
    }
  }
  else if ((cVar11 == '\x01') || (cVar11 == '\x04')) {
    _DAT_100c6730 = 0.1;
  }
  else {
    _DAT_100c6730 = *(float *)(*(int *)((int)param_1 + 0xc0) + 0x18);
  }
  fStack_18 = 2.6308233e-29;
  fVar13 = FUN_10076120();
  fVar14 = (float10)_DAT_100c6730;
  *(float *)((int)param_1 + 0x90) = (float)(fVar13 + fVar14);
  *(float *)((int)param_1 + 0x8c) = (float)(fVar13 + fVar14);
  fStack_18 = 2.6308302e-29;
  fVar14 = FUN_10076120();
  *(float *)((int)param_1 + 0x98) = (float)(fVar14 + (float10)2.0);
  return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
}

/* 10056640  FUN_10056640  (1 bytes)
 * undefined FUN_10056640()
 */
void FUN_10056640(void)

{
  return;
}

/* 10056650  FUN_10056650  (1 bytes)
 * undefined FUN_10056650()
 */
void FUN_10056650(void)

{
  return;
}

/* 10056660  FUN_10056660  (1 bytes)
 * undefined FUN_10056660()
 */
void FUN_10056660(void)

{
  return;
}

/* 10056670  FUN_10056670  (200 bytes)
 * undefined FUN_10056670(int * param_1)
 * called by: CTSGun::PrimaryAttack, CTSGun::SecondaryAttack
 */
void __fastcall FUN_10056670(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = param_1[0x2f];
  if (((iVar1 != 0) && (*(int *)(iVar1 + 8) == 0)) && (0 < *(int *)(iVar1 + 4))) {
    if (*(int *)(iVar1 + 0x28) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)*(short *)(*(int *)(iVar1 + 0x28) + 0x26);
    }
    (**(code **)(*param_1 + 0x16c))(iVar1,1,0);
    (*g_engfuncs.pfnPlaybackEvent)
              (1,*(edict_t **)(*(int *)(param_1[0x1c] + 4) + 0x208),*(ushort *)(param_1 + 0x25a),0.0
               ,(float *)&DAT_100ae498,(float *)&DAT_100ae498,0.0,0.0,0x13,0,0,0);
    *(undefined4 *)(param_1[0x2f] + 8) = 1;
    fVar2 = FUN_10076120();
    param_1[0x24] = (int)(float)(fVar2 + (float10)0.7);
    param_1[0x23] = (int)(float)(fVar2 + (float10)0.7);
    fVar2 = FUN_10076120();
    param_1[0x26] = (int)(float)(fVar2 + (float10)0.7);
    param_1[0x27f] = (int)(gpGlobals->time + 5.0);
  }
  return;
}

/* 10056740  FUN_10056740  (1595 bytes)
 * undefined FUN_10056740(int param_1)
 * called by: CTSGun::PrimaryAttack
 */
void __fastcall FUN_10056740(int param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined2 uVar5;
  float fVar6;
  float *pfVar7;
  Vector *this;
  undefined4 *puVar8;
  int iVar9;
  void *this_00;
  float fVar10;
  int *piVar11;
  float10 fVar12;
  undefined4 local_78;
  float local_74;
  float local_70;
  int iStack_6c;
  Vector local_68;
  undefined4 uStack_5c;
  undefined1 auStack_58 [12];
  float afStack_4c [3];
  float afStack_40 [7];
  float fStack_24;
  edict_t *peStack_4;
  
  if (*(int *)(param_1 + 0xbc) == 0) {
    return;
  }
  UTIL_MakeVectors(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x74);
  iVar9 = *(int *)(*(int *)(param_1 + 0x70) + 4);
  uVar2 = *(uint *)(iVar9 + 0x250);
  local_78 = SQRT(*(float *)(iVar9 + 0x28) * *(float *)(iVar9 + 0x28) +
                  *(float *)(iVar9 + 0x24) * *(float *)(iVar9 + 0x24) +
                  *(float *)(iVar9 + 0x20) * *(float *)(iVar9 + 0x20));
  if (local_78 <= 100.0) {
    bVar4 = (*(byte *)(iVar9 + 0x180) & 0x10 | 0x20) >> 4;
  }
  else {
    fVar10 = *(float *)(iVar9 + 0x20);
    fVar10 = SQRT(*(float *)(iVar9 + 0x28) * *(float *)(iVar9 + 0x28) +
                  *(float *)(iVar9 + 0x24) * *(float *)(iVar9 + 0x24) + fVar10 * fVar10);
    if (fVar10 == 0.0) {
      local_68.x = 0.0;
      local_68.y = 0.0;
      local_68.z = 1.0;
    }
    else {
      fVar10 = 1.0 / fVar10;
      puVar8 = (undefined4 *)
               Vector::Vector((Vector *)(auStack_58 + 8),fVar10 * *(float *)(iVar9 + 0x20),
                              fVar10 * *(float *)(iVar9 + 0x24),fVar10 * *(float *)(iVar9 + 0x28));
      Vector::Vector(&local_68,puVar8);
    }
    if (local_68.x * gpGlobals->v_forward[0] +
        local_68.y * gpGlobals->v_forward[1] + local_68.z * gpGlobals->v_forward[2] <= -0.5) {
      bVar4 = 3;
    }
    else {
      bVar4 = 2;
    }
  }
  local_70 = 7.00649e-44;
  if ((uVar2 & 0x70c30) == 0) {
    if (bVar4 == 3) {
      local_78 = -75.0;
      local_70 = 7.70714e-44;
      local_74 = 1.0;
      fVar6 = 4.90454e-44;
      fVar10 = 2.10195e-44;
    }
    else {
      iVar9 = *(int *)(*(int *)(param_1 + 0x70) + 4);
      if ((*(uint *)(iVar9 + 0x1a4) & 0x200) == 0) {
        local_78 = local_78 * 0.15384616;
        fVar10 = 2.38221e-44;
        if ((55.0 < local_78) || (35.0 <= local_78)) {
          if (local_78 <= 55.0) {
            local_74 = 1.1;
            fVar6 = 5.04467e-44;
          }
          else {
            local_78 = 55.0;
            local_74 = 1.1;
            fVar6 = 5.04467e-44;
          }
        }
        else {
          local_78 = 35.0;
          local_74 = 1.1;
          fVar6 = 5.04467e-44;
        }
      }
      else if (((*(byte *)(iVar9 + 0x180) & 4) == 0) &&
              ((*(uint *)(*(int *)(param_1 + 4) + 0x1a4) & 0x4000) == 0)) {
        local_78 = 45.0;
        local_74 = 0.7;
        if ((*(int *)(param_1 + 0x9f4) < 1) || (2 < *(int *)(param_1 + 0x9f4))) {
          iVar9 = (*g_engfuncs.pfnRandomLong)(1,2);
          *(int *)(param_1 + 0x9f4) = iVar9;
        }
        if (*(int *)(param_1 + 0x9f4) == 1) {
          *(undefined4 *)(param_1 + 0x9f4) = 2;
          fVar6 = 4.62428e-44;
          fVar10 = 2.38221e-44;
        }
        else {
          fVar6 = local_68.y;
          fVar10 = local_68.y;
          if (*(int *)(param_1 + 0x9f4) == 2) {
            *(undefined4 *)(param_1 + 0x9f4) = 1;
            fVar6 = 4.76441e-44;
            fVar10 = 2.24208e-44;
          }
        }
      }
      else {
        local_68.x = 0.0;
        local_68.y = 0.0;
        *(uint *)(iVar9 + 0x250) = *(uint *)(iVar9 + 0x250) | 4;
        local_68.z = 16.0;
        local_78 = 65.0;
        iVar9 = *(int *)(*(int *)(param_1 + 0x70) + 4);
        local_74 = 0.9;
        *(uint *)(iVar9 + 0x250) = *(uint *)(iVar9 + 0x250) | 1;
        iVar9 = *(int *)(*(int *)(param_1 + 0x70) + 4);
        *(undefined4 *)(iVar9 + 0x174) = 0;
        *(undefined4 *)(iVar9 + 0x178) = 0;
        *(undefined4 *)(iVar9 + 0x17c) = 0x41800000;
        *(undefined4 *)(*(int *)(param_1 + 0x70) + 0x4e0) = 0x40000000;
        fVar6 = 5.1848e-44;
        fVar10 = 2.38221e-44;
      }
    }
  }
  else {
    local_78 = 35.0;
    local_70 = 4.90454e-44;
    local_74 = 1.0;
    fVar6 = -NAN;
    fVar10 = 2.38221e-44;
  }
  CTSAnimation::Animate
            ((CTSAnimation *)(*(int **)(param_1 + 0x70) + 0x9e),*(int **)(param_1 + 0x70),(int)fVar6
            );
  fVar12 = FUN_10063e60(*(int *)(param_1 + 0x70));
  pfVar7 = (float *)(**(code **)(**(int **)(param_1 + 0x70) + 0x160))();
  auStack_58._0_4_ = *pfVar7;
  auStack_58._4_4_ = pfVar7[1];
  auStack_58._8_4_ = pfVar7[2];
  local_68.x = -NAN;
  if (0.0 <= local_74) {
    local_68.x = 1.4013e-45;
  }
  fVar6 = (float)(int)local_68.x;
  pfVar7 = afStack_4c;
  this = (Vector *)Vector::operator*((Vector *)gpGlobals->v_forward,&local_68.y,(float)iStack_6c);
  pfVar7 = (float *)Vector::operator*(this,pfVar7,fVar6);
  puVar8 = (undefined4 *)Vector::operator+((Vector *)auStack_58,afStack_40,pfVar7);
  Vector::Vector((Vector *)&stack0xffffff64,puVar8);
  Vector::Vector((Vector *)&stack0xffffff58,(undefined4 *)auStack_58);
  FUN_100637d0(*(void **)(param_1 + 0x70));
  if (fStack_24 < 1.0) {
    if ((peStack_4 == (edict_t *)0x0) &&
       (peStack_4 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peStack_4 == (edict_t *)0x0)) {
      piVar11 = (int *)0x0;
    }
    else {
      piVar11 = peStack_4->pvPrivateData;
    }
    iVar9 = (**(code **)(*piVar11 + 0xac))();
    if ((iVar9 != 0) && ((*(byte *)(piVar11[1] + 0x118) & 0x80) == 0)) {
      uVar5 = FUN_1004cc30(*(void **)(param_1 + 0x70),piVar11);
      if ((char)uVar5 == '\0') {
        FUN_100796a0();
        iVar9 = *piVar11;
        Vector::Vector((Vector *)&stack0xffffff64,gpGlobals->v_forward);
        (**(code **)(iVar9 + 0x4c))();
        uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x70) + 4);
        FUN_100796c0(uVar3,uVar3);
        iVar9 = (**(code **)(*piVar11 + 0xc0))();
        if (iVar9 != 0) {
          *(undefined4 *)(*(int *)(param_1 + 0xbc) + 8) = 1;
          *(undefined4 *)(*(int *)(param_1 + 4) + 0x114) = 1;
          uVar3 = *(undefined4 *)(piVar11[1] + 0x208);
          (*g_engfuncs.pfnRandomLong)(0,0x1f);
          EMIT_SOUND_DYN(this_00,uVar3,4,s_weapons_katana_hit_body_wav_100a45a0,0x3f800000,
                         0x3f4ccccd,0);
        }
      }
      if (piVar11 != (int *)0x0) goto LAB_10056ccd;
    }
  }
  *(undefined4 *)(*(int *)(param_1 + 0x70) + 0x788) = 0x3e800000;
  *(float *)(*(int *)(param_1 + 0x70) + 0x78c) = local_74;
  *(undefined1 *)(*(int *)(param_1 + 0x70) + 0x790) = 2;
LAB_10056ccd:
  if ((local_78._3_1_ != '\0') &&
     ((*(byte *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x250) & 1) == 0)) {
    *(float *)(*(int *)(param_1 + 0x70) + 0x4c8) = (float)(fVar12 * (float10)local_70) * 0.9;
    puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x250);
    *puVar1 = *puVar1 | 1;
  }
  (*g_engfuncs.pfnPlaybackEvent)
            (1,*(edict_t **)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x208),
             *(ushort *)(param_1 + 0x964),0.0,(float *)&DAT_100ae498,(float *)&DAT_100ae498,0.0,0.0,
             (int)fVar10,*(int *)(*(int *)(param_1 + 0xbc) + 8),0,0);
  uStack_5c = 0x10056d45;
  fVar12 = FUN_10076120();
  *(float *)(param_1 + 0x90) = (float)(fVar12 + (float10)afStack_40[0]);
  *(float *)(param_1 + 0x8c) = (float)(fVar12 + (float10)afStack_40[0]);
  uStack_5c = 0x10056d5a;
  fVar12 = FUN_10076120();
  *(float *)(param_1 + 0x98) = (float)(fVar12 + (float10)3.0);
  *(float *)(*(int *)(param_1 + 0x70) + 0x4e4) = afStack_40[0];
  return;
}

/* 10056d80  FUN_10056d80  (1167 bytes)
 * undefined FUN_10056d80(void * param_1)
 * called by: CTSGun::SecondaryAttack
 */
void __fastcall FUN_10056d80(void *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  Vector *this;
  void *this_00;
  float10 fVar5;
  float in_stack_fffffec4;
  float fVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  Vector local_114;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  Vector local_e0;
  Vector local_d4;
  float local_c8;
  float local_c4;
  float local_c0;
  Vector local_bc;
  float local_b0;
  float local_ac;
  float local_a8;
  vec_t local_a4;
  vec_t local_a0;
  vec_t local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  Vector local_8c;
  vec_t local_80;
  vec_t local_7c;
  vec_t local_78;
  Vector local_74;
  float local_68;
  float local_64;
  float local_60;
  Vector local_5c;
  Vector local_50;
  Vector local_44;
  undefined1 local_38 [20];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*(int *)((int)param_1 + 0xbc) != 0) {
    local_108 = *(float *)(*(int *)((int)param_1 + 0xc0) + 0x28);
    fVar5 = FUN_10076120();
    *(float *)((int)param_1 + 0x90) = (float)(fVar5 + (float10)local_108);
    *(float *)((int)param_1 + 0x8c) = (float)(fVar5 + (float10)local_108);
    fVar5 = FUN_10076120();
    *(float *)((int)param_1 + 0x98) = (float)(fVar5 + (float10)3.0);
    UTIL_MakeVectors(*(int *)(*(int *)((int)param_1 + 0x70) + 4) + 0x74);
    local_a4 = gpGlobals->v_right[0];
    local_a0 = gpGlobals->v_right[1];
    local_9c = gpGlobals->v_right[2];
    uVar1 = *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x70) + 4) + 0x208);
    Vector::Vector(&local_bc,&local_a4);
    local_c8 = gpGlobals->v_forward[0] * 32.0;
    local_c4 = gpGlobals->v_forward[1] * 32.0;
    local_c0 = gpGlobals->v_forward[2] * 32.0;
    Vector::Vector(&local_8c,&local_c8);
    iVar10 = *(int *)(*(int *)((int)param_1 + 0x70) + 4);
    local_ec = *(float *)(iVar10 + 0x174) + *(float *)(iVar10 + 8);
    local_e8 = *(float *)(iVar10 + 0x178) + *(float *)(iVar10 + 0xc);
    local_e4 = *(float *)(iVar10 + 0x17c) + *(float *)(iVar10 + 0x10);
    Vector::Vector(&local_d4,&local_ec);
    local_68 = local_8c.x + local_d4.x;
    local_64 = local_8c.y + local_d4.y;
    local_60 = local_8c.z + local_d4.z;
    Vector::Vector(&local_74,&local_68);
    local_104 = local_bc.x + local_74.x;
    local_100 = local_bc.y + local_74.y;
    local_fc = local_bc.z + local_74.z;
    Vector::Vector(&local_5c,&local_104);
    local_80 = gpGlobals->v_right[0];
    local_7c = gpGlobals->v_right[1];
    local_78 = gpGlobals->v_right[2];
    Vector::Vector(&local_e0,&local_80);
    iVar10 = *(int *)(*(int *)((int)param_1 + 0x70) + 4);
    local_f8 = *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0x174);
    local_f4 = *(float *)(iVar10 + 0x178) + *(float *)(iVar10 + 0xc);
    local_f0 = *(float *)(iVar10 + 0x17c) + *(float *)(iVar10 + 0x10);
    Vector::Vector(&local_114,&local_f8);
    puVar2 = (undefined4 *)
             Vector::Vector(&local_50,local_e0.x + local_114.x,local_e0.y + local_114.y,
                            local_e0.z + local_114.z);
    Vector::Vector(&local_44,puVar2);
    UTIL_TraceLine(&local_44,&local_5c,0,uVar1,local_38);
    local_98 = local_24;
    local_94 = local_20;
    local_90 = local_1c;
    fVar11 = gpGlobals->v_forward[0] * 1000.0;
    fVar8 = 2.6316123e-29;
    puVar2 = (undefined4 *)
             Vector::Vector(&local_50,fVar11,gpGlobals->v_forward[1] * 1000.0,
                            gpGlobals->v_forward[2] * 1000.0);
    fVar9 = 2.6316154e-29;
    Vector::Vector(&local_114,puVar2);
    local_b0 = local_114.x;
    local_ac = local_114.y;
    local_a8 = local_114.z;
    pfVar7 = &local_b0;
    iVar10 = *(int *)(*(int *)((int)param_1 + 0xc0) + 0x20);
    fVar6 = 2.63163e-29;
    Vector::Vector((Vector *)&stack0xfffffed0,pfVar7);
    Vector::Vector((Vector *)&stack0xfffffec4,&local_98);
    piVar3 = CTSKnife::CreateKnife
                       (*(int **)((int)param_1 + 0x70),(int)in_stack_fffffec4,(int)fVar6,(int)pfVar7
                        ,fVar8,fVar11,fVar9,iVar10);
    if (piVar3 != (int *)0x0) {
      iVar10 = piVar3[1];
      fVar5 = Vector::Length((float *)(iVar10 + 0x20));
      if (fVar5 == (float10)0.0) {
        fVar11 = 1.0;
        fVar6 = 0.0;
        fVar8 = 0.0;
        this = &local_50;
      }
      else {
        fVar5 = (float10)1.0 / fVar5;
        fVar11 = (float)(fVar5 * (float10)*(float *)(iVar10 + 0x28));
        fVar6 = (float)(fVar5 * (float10)*(float *)(iVar10 + 0x24));
        this = &local_44;
        fVar8 = (float)(fVar5 * (float10)*(float *)(iVar10 + 0x20));
      }
      puVar2 = (undefined4 *)Vector::Vector(this,fVar8,fVar6,fVar11);
      Vector::Vector(&local_114,puVar2);
      puVar2 = (undefined4 *)UTIL_VecToAngles(&local_5c.x,&local_114);
      iVar10 = piVar3[1];
      *(undefined4 *)(iVar10 + 0x50) = *puVar2;
      *(undefined4 *)(iVar10 + 0x54) = puVar2[1];
      *(undefined4 *)(iVar10 + 0x58) = puVar2[2];
      *(undefined4 *)(piVar3[1] + 0x58) = 0x42b40000;
      *(undefined4 *)(piVar3[1] + 0x5c) = 0xc42f0000;
    }
    piVar3 = *(int **)((int)param_1 + 0x70);
    if (((*(uint *)(piVar3[1] + 0x250) & 0x30c30) == 0) &&
       ((*(uint *)(piVar3[1] + 0x1a4) & 0x200) != 0)) {
      CTSAnimation::Animate((CTSAnimation *)(piVar3 + 0x9e),piVar3,0x20);
    }
    uVar1 = *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x70) + 4) + 0x208);
    (*g_engfuncs.pfnRandomLong)(0,0x1f);
    EMIT_SOUND_DYN(this_00,uVar1,4,s_weapons_katana_miss_wav_100a45bc,0x3f800000,0x3f4ccccd,0);
    uVar4 = FUN_1004c230(*(int *)((int)param_1 + 0x70));
    if (uVar4 == 0) {
      *(uint *)(*(int *)((int)param_1 + 0x70) + 0x534) =
           *(int *)(*(int *)((int)param_1 + 0x70) + 0x534) +
           (uint)*(byte *)(*(int *)((int)param_1 + 0xc0) + 0xd0);
      fVar5 = GetSpeedBySlots(*(int *)((int)param_1 + 0x70));
      CBasePlayer::SetPlayerSpeed(*(CBasePlayer **)((int)param_1 + 0x70),(float)fVar5);
      CTSGun::DropWeapon(param_1,*(int *)((int)param_1 + 0xb8),'\x01');
    }
  }
  return;
}

/* 10057210  FUN_10057210  (1876 bytes)
 * undefined FUN_10057210(int * param_1)
 * called by: CTSGun::PrimaryAttack, CTSGun::SecondaryAttack
 */
void __fastcall FUN_10057210(int *param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  int iVar3;
  float *pfVar4;
  undefined4 *puVar5;
  uint uVar6;
  void *this;
  void *this_00;
  int *piVar7;
  bool bVar8;
  float10 fVar9;
  float in_stack_ffffff5c;
  float fVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  Vector local_64;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [20];
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  edict_t *peStack_4;
  
  if (param_1[0x2f] == 0) {
    return;
  }
  bVar8 = (*(uint *)(*(int *)(param_1[0x1c] + 4) + 0x250) & 0x70c30) != 0;
  local_78 = *(float *)(param_1[0x30] + 0x18);
  if (bVar8) {
    local_78 = local_78 * 1.5;
  }
  fVar9 = FUN_10076120();
  param_1[0x24] = (int)(float)(fVar9 + (float10)local_78);
  param_1[0x23] = (int)(float)(fVar9 + (float10)local_78);
  fVar9 = FUN_10076120();
  param_1[0x26] = (int)(float)(fVar9 + (float10)3.0);
  *(float *)(param_1[0x1c] + 0x4e4) = local_78;
  UTIL_MakeVectors(*(int *)(param_1[0x1c] + 4) + 0x74);
  if (*(char *)(param_1[0x2f] + 0x24) != '\0') {
    iVar3 = *(int *)(param_1[0x1c] + 4);
    fVar13 = *(float *)(iVar3 + 0x208);
    local_70 = gpGlobals->v_forward[1] * 32.0;
    local_6c = gpGlobals->v_forward[2] * 32.0;
    local_44 = *(float *)(iVar3 + 8) + *(float *)(iVar3 + 0x174) + gpGlobals->v_forward[0] * 32.0 +
               gpGlobals->v_right[0];
    local_40 = *(float *)(iVar3 + 0x178) + *(float *)(iVar3 + 0xc) + local_70 +
               gpGlobals->v_right[1];
    local_3c = *(float *)(iVar3 + 0x17c) + *(float *)(iVar3 + 0x10) + local_6c +
               gpGlobals->v_right[2];
    local_58 = gpGlobals->v_right[1];
    local_54 = gpGlobals->v_right[2];
    iVar3 = *(int *)(param_1[0x1c] + 4);
    local_50 = *(float *)(iVar3 + 8) + *(float *)(iVar3 + 0x174) + gpGlobals->v_right[0];
    local_64.x = *(float *)(iVar3 + 0x178) + *(float *)(iVar3 + 0xc) + local_58;
    local_64.y = *(float *)(iVar3 + 0x17c) + *(float *)(iVar3 + 0x10) + local_54;
    fVar12 = 0.0;
    pfVar4 = &local_44;
    local_4c = local_64.x;
    local_48 = local_64.y;
    UTIL_TraceLine(&local_50,pfVar4,0,fVar13,local_38);
    local_54 = (float)local_1c;
    local_64.z = local_24;
    local_58 = (float)local_20;
    local_74 = gpGlobals->v_forward[0] * 1900.0;
    local_70 = gpGlobals->v_forward[1] * 1900.0;
    if (*(int *)(param_1[0x30] + 0x20) == 6) {
      local_3c = gpGlobals->v_forward[2];
    }
    else {
      local_3c = gpGlobals->v_forward[2];
    }
    local_3c = local_3c * 1900.0;
    iVar3 = *(int *)(param_1[0x30] + 0x20);
    pfVar11 = &local_74;
    fVar10 = 2.6321378e-29;
    local_6c = local_3c;
    local_68 = local_74;
    local_64.x = local_70;
    local_64.y = local_3c;
    local_40 = local_70;
    Vector::Vector((Vector *)&stack0xffffff68,pfVar11);
    Vector::Vector((Vector *)&stack0xffffff5c,&local_64.z);
    piVar7 = CTSKnife::CreateKnife
                       ((int *)param_1[0x1c],(int)in_stack_ffffff5c,(int)fVar10,(int)pfVar11,pfVar4,
                        fVar12,fVar13,iVar3);
    if (piVar7 != (int *)0x0) {
      iVar3 = piVar7[1];
      fVar13 = *(float *)(iVar3 + 0x20);
      local_64.y = SQRT(*(float *)(iVar3 + 0x28) * *(float *)(iVar3 + 0x28) +
                        *(float *)(iVar3 + 0x24) * *(float *)(iVar3 + 0x24) + fVar13 * fVar13);
      if (local_64.y == 0.0) {
        local_68 = 0.0;
        local_64.x = 0.0;
        local_64.y = 1.0;
      }
      else {
        local_64.y = 1.0 / local_64.y;
        local_68 = local_64.y * *(float *)(iVar3 + 0x20);
        local_64.x = local_64.y * *(float *)(iVar3 + 0x24);
        local_64.y = local_64.y * *(float *)(iVar3 + 0x28);
        local_40 = local_64.x;
        local_3c = local_64.y;
      }
      puVar5 = (undefined4 *)UTIL_VecToAngles(&local_44,&local_68);
      iVar3 = piVar7[1];
      *(undefined4 *)(iVar3 + 0x50) = *puVar5;
      *(undefined4 *)(iVar3 + 0x54) = puVar5[1];
      *(undefined4 *)(iVar3 + 0x58) = puVar5[2];
      *(undefined4 *)(piVar7[1] + 0x58) = 0x42b40000;
      if (*(int *)(param_1[0x30] + 0x20) == 6) {
        *(undefined4 *)(piVar7[1] + 0x5c) = 0xc4a28000;
      }
      else {
        *(undefined4 *)(piVar7[1] + 0x5c) = 0xc4a28000;
      }
    }
    piVar7 = (int *)param_1[0x1c];
    if (((*(uint *)(piVar7[1] + 0x250) & 0x30c30) == 0) &&
       ((*(uint *)(piVar7[1] + 0x1a4) & 0x200) != 0)) {
      CTSAnimation::Animate((CTSAnimation *)(piVar7 + 0x9e),piVar7,0x20);
    }
    uVar1 = *(undefined4 *)(*(int *)(param_1[0x1c] + 4) + 0x208);
    (*g_engfuncs.pfnRandomLong)(0,0x1f);
    EMIT_SOUND_DYN(this_00,uVar1,4,s_weapons_knife_knife_miss_wav_100a45d4,0x3f800000,0x3f4ccccd,0);
    uVar6 = FUN_1004c230(param_1[0x1c]);
    if (uVar6 == 0) {
      *(uint *)(param_1[0x1c] + 0x534) =
           *(int *)(param_1[0x1c] + 0x534) + (uint)*(byte *)(param_1[0x30] + 0xd0);
      fVar9 = GetSpeedBySlots(param_1[0x1c]);
      CBasePlayer::SetPlayerSpeed((CBasePlayer *)param_1[0x1c],(float)fVar9);
      *(int *)(param_1[0x2f] + 4) = *(int *)(param_1[0x2f] + 4) + -1;
    }
    if (*(int *)(param_1[0x2f] + 4) < 1) {
      CTSGun::DropWeapon((CTSGun *)param_1,param_1[0x2e],'\x01');
      return;
    }
    (**(code **)(*param_1 + 0x16c))();
    (*g_engfuncs.pfnPlaybackEvent)
              (1,*(edict_t **)(*(int *)(param_1[0x1c] + 4) + 0x208),
               *(ushort *)((int)param_1 + 0x966),0.0,(float *)&DAT_100ae498,(float *)&DAT_100ae498,
               0.0,0.0,param_1[0x2e],*(int *)(param_1[0x2f] + 0x10),0,0);
    local_64.y = 2.632301e-29;
    fVar9 = FUN_10076120();
    param_1[0x26] = (int)(float)(fVar9 + (float10)2.0);
    return;
  }
  iVar3 = (*g_engfuncs.pfnRandomLong)(0,2);
  if ((!bVar8) && (piVar7 = (int *)param_1[0x1c], (*(uint *)(piVar7[1] + 0x1a4) & 0x200) != 0)) {
    CTSAnimation::Animate((CTSAnimation *)(piVar7 + 0x9e),piVar7,iVar3 + 0x1d);
  }
  local_70 = *(float *)(param_1[0x30] + 0x1c);
  if (bVar8) {
    local_70 = local_70 * 0.6666667;
  }
  fVar9 = FUN_10063e60(param_1[0x1c]);
  local_70 = (float)(fVar9 * (float10)local_70);
  pfVar4 = (float *)(**(code **)(*(int *)param_1[0x1c] + 0x160))();
  local_64.x = *pfVar4;
  local_64.y = pfVar4[1];
  local_64.z = pfVar4[2];
  pfVar4 = (float *)Vector::operator*((Vector *)gpGlobals->v_forward,&local_40,35.0);
  puVar5 = (undefined4 *)Vector::operator+(&local_64,&local_4c,pfVar4);
  Vector::Vector((Vector *)&stack0xffffff68,puVar5);
  Vector::Vector((Vector *)&stack0xffffff5c,&local_64.x);
  FUN_100637d0((void *)param_1[0x1c]);
  if (local_24 < 1.0) {
    if ((peStack_4 == (edict_t *)0x0) &&
       (peStack_4 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peStack_4 == (edict_t *)0x0)) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = peStack_4->pvPrivateData;
    }
    iVar3 = (**(code **)(*piVar7 + 0xac))();
    if ((iVar3 != 0) && ((*(byte *)(piVar7[1] + 0x118) & 0x80) == 0)) {
      uVar2 = FUN_1004cd70((void *)param_1[0x1c],piVar7);
      if ((char)uVar2 == '\0') {
        FUN_100796a0();
        iVar3 = *piVar7;
        Vector::Vector((Vector *)&stack0xffffff68,gpGlobals->v_forward);
        (**(code **)(iVar3 + 0x4c))();
        FUN_100796c0(*(undefined4 *)(param_1[0x1c] + 4),*(undefined4 *)(param_1[0x1c] + 4));
        iVar3 = (**(code **)(*piVar7 + 0xc0))();
        if (iVar3 != 0) {
          *(undefined4 *)(param_1[0x2f] + 8) = 1;
          *(undefined4 *)(param_1[1] + 0x114) = 1;
          uVar1 = *(undefined4 *)(piVar7[1] + 0x208);
          (*g_engfuncs.pfnRandomLong)(0,0x1f);
          EMIT_SOUND_DYN(this,uVar1,4,s_weapons_knife_knife_hitbody_wav_100a43e4,0x3f800000,
                         0x3f4ccccd,0);
        }
      }
      if (piVar7 != (int *)0x0) goto LAB_100574ca;
    }
  }
  *(float *)(param_1[0x1c] + 0x788) = *(float *)(param_1[0x30] + 0x18) * 0.25;
  *(float *)(param_1[0x1c] + 0x78c) = local_74;
  *(undefined1 *)(param_1[0x1c] + 0x790) = 1;
LAB_100574ca:
  (*g_engfuncs.pfnPlaybackEvent)
            (1,*(edict_t **)(*(int *)(param_1[0x1c] + 4) + 0x208),*(ushort *)((int)param_1 + 0x962),
             0.0,(float *)&DAT_100ae498,(float *)&DAT_100ae498,0.0,0.0,param_1[0x2e],
             *(int *)(param_1[0x2f] + 8),0,0);
  return;
}

/* 10057970  FUN_10057970  (108 bytes)
 * undefined4 FUN_10057970(int param_1, undefined4 param_2, float param_3)
 * called by: CTSGun::Reload
 */
undefined4 __thiscall FUN_10057970(void *this,int param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  iVar1 = *(int *)((int)this + 0xbc);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = *(int *)((int)this + (uint)*(byte *)(*(int *)((int)this + 0xc0) + 8) * 4 + 0xc4);
  if (iVar2 < 1) {
    return 0;
  }
  iVar3 = param_1 - *(int *)(iVar1 + 4);
  if (iVar2 <= iVar3) {
    iVar3 = iVar2;
  }
  if (iVar3 < 1) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 0xc) = 1;
  fVar4 = FUN_10076120();
  *(float *)(*(int *)((int)this + 0x70) + 0x118) = (float)(fVar4 + (float10)param_3);
  return 1;
}

/* 100579e0  FUN_100579e0  (616 bytes)
 * undefined FUN_100579e0(int param_1)
 * called by: CTSGun::Reload
 */
void __fastcall FUN_100579e0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  
  iVar1 = *(int *)(param_1 + 0xbc);
  iVar2 = *(int *)(iVar1 + 8);
  if (iVar2 == 0) {
    if ((0 < *(int *)(param_1 + 0xc4 + (uint)*(byte *)(*(int *)(param_1 + 0xc0) + 8) * 4)) &&
       (*(int *)(iVar1 + 4) < *(int *)(*(int *)(param_1 + 0xc0) + 4))) {
      FUN_10054ee0(param_1);
      iVar1 = *(int *)(*(int *)(param_1 + 0x70) + 4);
      if (*(int *)(iVar1 + 0xbc) == 0) {
        *(int *)(iVar1 + 0xbc) = (*(int *)(param_1 + 0xc0) - (int)gpGlobals->pStringBase) + 0x132;
      }
      *(undefined4 *)(*(int *)(param_1 + 0xbc) + 8) = 1;
      (*g_engfuncs.pfnPlaybackEvent)
                (1,*(edict_t **)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x208),
                 *(ushort *)(param_1 + 0x960),0.0,(float *)&DAT_100ae498,(float *)&DAT_100ae498,8.0,
                 0.0,*(int *)(param_1 + 0xb8),*(int *)(*(int *)(param_1 + 0xbc) + 0x10),0,0);
      fVar4 = FUN_10076120();
      *(float *)(*(int *)(param_1 + 0x70) + 0x118) = (float)(fVar4 + (float10)0.3);
      fVar4 = FUN_10076120();
      *(float *)(param_1 + 0x98) = (float)(fVar4 + (float10)0.3);
      fVar4 = FUN_10076120();
      *(float *)(param_1 + 0x8c) = (float)(fVar4 + (float10)0.3);
      fVar4 = FUN_10076120();
      *(float *)(param_1 + 0x90) = (float)(fVar4 + (float10)0.3);
      return;
    }
  }
  else if (iVar2 == 1) {
    fVar4 = FUN_10076120();
    if ((float10)*(float *)(param_1 + 0x98) <= fVar4) {
      uVar3 = (uint)*(byte *)(*(int *)(param_1 + 0xc0) + 8);
      iVar1 = *(int *)(param_1 + 0xc4 + uVar3 * 4);
      if ((0 < iVar1) &&
         (*(int *)(*(int *)(param_1 + 0xbc) + 4) < *(int *)(*(int *)(param_1 + 0xc0) + 4))) {
        *(int *)(param_1 + 0xc4 + uVar3 * 4) = iVar1 + -1;
        *(int *)(*(int *)(param_1 + 0xbc) + 4) = *(int *)(*(int *)(param_1 + 0xbc) + 4) + 1;
        (*g_engfuncs.pfnPlaybackEvent)
                  (1,*(edict_t **)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x208),
                   *(ushort *)(param_1 + 0x960),0.0,(float *)&DAT_100ae498,(float *)&DAT_100ae498,
                   9.0,0.0,*(int *)(param_1 + 0xb8),*(int *)(*(int *)(param_1 + 0xbc) + 0x10),0,0);
        fVar4 = FUN_10076120();
        *(float *)(param_1 + 0x98) =
             (float)(fVar4 + (float10)*(float *)(*(int *)(param_1 + 0xc0) + 0x14));
        return;
      }
      *(undefined4 *)(*(int *)(param_1 + 0xbc) + 8) = 2;
      return;
    }
  }
  else if (iVar2 == 2) {
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0xbc) + 0x24) = 0;
    (*g_engfuncs.pfnPlaybackEvent)
              (1,*(edict_t **)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x208),
               *(ushort *)(param_1 + 0x960),0.0,(float *)&DAT_100ae498,(float *)&DAT_100ae498,10.0,
               0.0,*(int *)(param_1 + 0xb8),*(int *)(*(int *)(param_1 + 0xbc) + 0x10),0,0);
    fVar4 = FUN_10076120();
    *(float *)(*(int *)(param_1 + 0x70) + 0x118) = (float)(fVar4 + (float10)0.3);
    fVar4 = FUN_10076120();
    *(float *)(param_1 + 0x98) = (float)(fVar4 + (float10)3.0);
  }
  return;
}

/* 10058970  FUN_10058970  (74 bytes)
 * undefined FUN_10058970(int * param_1)
 * called by: CTSGun::WeaponIdle
 */
void __fastcall FUN_10058970(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  fVar3 = FUN_10076120();
  if ((float10)(float)param_1[0x26] <= fVar3) {
    fVar3 = FUN_10076120();
    iVar1 = *param_1;
    uVar5 = 0;
    uVar4 = 0;
    param_1[0x26] = (int)(float)(fVar3 + (float10)3.0);
    puVar2 = get_weapon_info(0);
    (**(code **)(iVar1 + 0x16c))((int)*(short *)((int)puVar2 + 0x252),uVar4,uVar5);
  }
  return;
}

/* 100589c0  FUN_100589c0  (358 bytes)
 * undefined FUN_100589c0(int param_1)
 * called by: CTSGun::Reload
 */
void __fastcall FUN_100589c0(int param_1)

{
  char cVar1;
  int iVar2;
  int iparam2;
  float10 fVar3;
  
  iVar2 = *(int *)(param_1 + 0x70);
  fVar3 = FUN_10076120();
  if ((float10)*(float *)(iVar2 + 0x118) <= fVar3) {
    fVar3 = FUN_10076120();
    if ((float10)*(float *)(param_1 + 0x8c) <= fVar3) {
      fVar3 = FUN_10076120();
      if ((float10)*(float *)(param_1 + 0x90) <= fVar3) {
        fVar3 = FUN_10076120();
        if ((((float10)*(float *)(param_1 + 0x94) <= fVar3) &&
            (iVar2 = *(int *)(param_1 + 0x70),
            (*(uint *)(*(int *)(iVar2 + 4) + 0x250) & 0x70c30) == 0)) &&
           (0.01 <= *(float *)(iVar2 + 0x760))) {
          iparam2 = 0;
          if (*(int *)(param_1 + 0xbc) == 0) {
            iparam2 = 1;
            *(undefined4 *)(iVar2 + 0x794) = 0x3f000000;
          }
          else if (*(int *)(param_1 + 0xc0) != 0) {
            cVar1 = *(char *)(*(int *)(param_1 + 0xc0) + 0x348);
            if (cVar1 == '\n') {
              *(undefined4 *)(iVar2 + 0x79c) = 0x3f000000;
            }
            else if (cVar1 == '\x03') {
              *(undefined4 *)(iVar2 + 0x798) = 0x3f000000;
            }
            iparam2 = 0x12;
          }
          (*g_engfuncs.pfnPlaybackEvent)
                    (1,*(edict_t **)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x208),
                     *(ushort *)(param_1 + 0x95c),0.0,(float *)&DAT_100ae498,(float *)&DAT_100ae498,
                     (float)*(int *)(param_1 + 0xb8),0.0,0,iparam2,0,0);
          CTSAnimation::Animate
                    ((CTSAnimation *)(*(int **)(param_1 + 0x70) + 0x9e),*(int **)(param_1 + 0x70),
                     0x26);
          FUN_10063dd0(*(void **)(param_1 + 0x70),33.0);
          fVar3 = FUN_10076120();
          *(float *)(param_1 + 0x90) = (float)(fVar3 + (float10)0.5);
          *(float *)(param_1 + 0x8c) = (float)(fVar3 + (float10)0.5);
          fVar3 = FUN_10076120();
          *(float *)(param_1 + 0x98) = (float)(fVar3 + (float10)3.0);
        }
      }
    }
  }
  return;
}

/* 10058b30  FUN_10058b30  (2726 bytes)
 * undefined FUN_10058b30(int param_1)
 * called by: CTSGun::PrimaryAttack, CTSGun::SecondaryAttack
 */
void __fastcall FUN_10058b30(int param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  Vector *this;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  float10 fVar10;
  float fStack_e0;
  float fVar11;
  char cStack_91;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  int iStack_84;
  int in_stack_ffffff84;
  float local_5c;
  float local_58;
  Vector local_54;
  float local_48 [4];
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar9 = 0;
  iVar8 = *(int *)(param_1 + 0x70);
  local_5c = 0.6;
  iVar6 = *(int *)(iVar8 + 4);
  uVar1 = *(uint *)(iVar6 + 0x250);
  local_54.x = SQRT(*(float *)(iVar6 + 0x28) * *(float *)(iVar6 + 0x28) +
                    *(float *)(iVar6 + 0x24) * *(float *)(iVar6 + 0x24) +
                    *(float *)(iVar6 + 0x20) * *(float *)(iVar6 + 0x20));
  fVar10 = FUN_10076120();
  if (fVar10 < (float10)*(float *)(iVar8 + 0x118)) {
    return;
  }
  fVar10 = FUN_10076120();
  if (fVar10 < (float10)*(float *)(param_1 + 0x8c)) {
    return;
  }
  fVar10 = FUN_10076120();
  if (fVar10 < (float10)*(float *)(param_1 + 0x90)) {
    return;
  }
  iVar8 = *(int *)(param_1 + 0x70);
  local_58 = 0.0;
  local_2c = *(undefined4 *)(*(int *)(iVar8 + 4) + 0x78);
  local_28 = *(undefined4 *)(*(int *)(iVar8 + 4) + 0x7c);
  local_30 = 0;
  if (local_54.x <= 100.0) {
    iVar6 = *(int *)(iVar8 + 4);
    local_54.y = (float)(uint)(byte)((*(byte *)(iVar6 + 0x180) & 0x10 | 0x20) >> 4);
  }
  else {
    in_stack_ffffff84 = 0x10058c0c;
    UTIL_MakeVectors(&local_30);
    iVar8 = *(int *)(param_1 + 0x70);
    iVar6 = *(int *)(iVar8 + 4);
    fVar2 = SQRT(*(float *)(iVar6 + 0x28) * *(float *)(iVar6 + 0x28) +
                 *(float *)(iVar6 + 0x24) * *(float *)(iVar6 + 0x24) +
                 *(float *)(iVar6 + 0x20) * *(float *)(iVar6 + 0x20));
    if (fVar2 == 0.0) {
      fVar3 = 0.0;
      fVar11 = 0.0;
      fVar2 = 1.0;
    }
    else {
      fVar2 = 1.0 / fVar2;
      fVar3 = fVar2 * *(float *)(iVar6 + 0x20);
      fVar11 = fVar2 * *(float *)(iVar6 + 0x24);
      fVar2 = fVar2 * *(float *)(iVar6 + 0x28);
      local_38 = fVar11;
      local_34 = fVar2;
    }
    local_58 = fVar3 * gpGlobals->v_forward[0] +
               fVar11 * gpGlobals->v_forward[1] + fVar2 * gpGlobals->v_forward[2];
    if (local_58 <= -0.5) {
      local_54.y = 4.2039e-45;
    }
    else {
      local_54.y = 2.8026e-45;
    }
  }
  if ((uVar1 & 0x50c30) == 0) {
    uVar1 = *(uint *)(iVar6 + 0x180);
    if ((uVar1 & 1) != 0) {
      local_54.y = 2.8026e-45;
      local_54.z = 1.4013e-45;
      if ((*(uint *)(iVar6 + 0x1a4) & 0x200) == 0) {
        uVar9 = 0x18;
        iVar8 = 5;
        local_5c = 0.5;
      }
      else {
        if ((*(int *)(param_1 + 0x9ec) < 3) &&
           (((uVar1 & 4) == 0 || ((*(uint *)(iVar6 + 0x1a4) & 0x4000) != 0)))) {
          if ((*(byte *)(iVar8 + 0x800) & 1) == 0) {
            iVar8 = 3;
            *(int *)(param_1 + 0x9ec) = *(int *)(param_1 + 0x9ec) + 1;
            uVar9 = 0x16;
            local_5c = 0.25;
            local_54.x = 4.90454e-44;
          }
          else {
            local_5c = 0.35;
            *(undefined4 *)(param_1 + 0x9ec) = 0;
            uVar9 = 0x17;
            iVar8 = 4;
            local_54.x = 4.90454e-44;
          }
          goto LAB_100592c7;
        }
        uVar9 = 0x19;
        iVar8 = 0xb;
        local_5c = 0.65;
      }
      goto LAB_10058e06;
    }
    if ((uVar1 & 0x800) == 0) goto LAB_1005958e;
    uVar7 = *(uint *)(iVar6 + 0x1a4) & 0x200;
    if ((uVar7 != 0) &&
       (((uVar1 & 4) != 0 || ((*(uint *)(*(int *)(param_1 + 4) + 0x1a4) & 0x4000) != 0)))) {
      local_48[0] = 0.0;
      local_48[1] = 0.0;
      *(uint *)(iVar6 + 0x250) = *(uint *)(iVar6 + 0x250) | 4;
      local_48[2] = 16.0;
      iVar6 = *(int *)(*(int *)(param_1 + 0x70) + 4);
      local_54.z = 2.8026e-45;
      uVar9 = 0x14;
      iVar8 = 6;
      *(uint *)(iVar6 + 0x250) = *(uint *)(iVar6 + 0x250) | 1;
      local_54.x = 6.30584e-44;
      local_5c = 1.0;
      iVar6 = *(int *)(*(int *)(param_1 + 0x70) + 4);
      local_54.y = 2.8026e-45;
      *(undefined4 *)(iVar6 + 0x174) = 0;
      *(undefined4 *)(iVar6 + 0x178) = 0;
      *(undefined4 *)(iVar6 + 0x17c) = 0x41800000;
      *(undefined4 *)(*(int *)(param_1 + 0x70) + 0x4e0) = 0x40000000;
      goto LAB_100592c7;
    }
    if (local_54.y == 4.2039e-45) {
      local_54.z = 4.2039e-45;
      uVar9 = 0x11;
      iVar8 = 7;
      local_54.x = 7.70714e-44;
      if (uVar7 == 0) {
        local_5c = 1.35;
      }
      else {
        local_5c = 1.0;
      }
      goto LAB_100592c7;
    }
    local_54.z = 2.8026e-45;
    if (uVar7 != 0) {
LAB_100591ad:
      if (((*(uint *)(iVar8 + 0x800) & 0x800) != 0) || (2 < *(int *)(param_1 + 0x9f0))) {
        iVar8 = *(int *)(param_1 + 0x9f4);
        local_54.x = 6.30584e-44;
        local_5c = 0.5;
        *(undefined4 *)(param_1 + 0x9f0) = 0;
        if (iVar8 == 0xf) {
switchD_100592ae_caseD_2:
          uVar9 = 10;
        }
        else if (iVar8 == 10) {
switchD_100592ae_caseD_0:
          uVar9 = 0xe;
        }
        else if (iVar8 == 0xe) {
switchD_100592ae_caseD_1:
          uVar9 = 0xd;
        }
        else {
          if (iVar8 != 0xd) {
            in_stack_ffffff84 = 0;
            iVar8 = (*g_engfuncs.pfnRandomLong)(0,3);
            switch(iVar8) {
            case 0:
              goto switchD_100592ae_caseD_0;
            case 1:
              goto switchD_100592ae_caseD_1;
            case 2:
              goto switchD_100592ae_caseD_2;
            case 3:
              break;
            default:
              goto switchD_100592ae_default;
            }
          }
          uVar9 = 0xf;
        }
switchD_100592ae_default:
        iVar8 = 10;
        goto LAB_100592c7;
      }
      *(int *)(param_1 + 0x9f0) = *(int *)(param_1 + 0x9f0) + 1;
      local_54.x = 6.30584e-44;
      local_5c = 0.3;
      if (*(int *)(param_1 + 0x9f4) == 0xb) {
        uVar9 = 0xc;
        iVar8 = 9;
        goto LAB_100592c7;
      }
      if (*(int *)(param_1 + 0x9f4) == 0xc) {
LAB_10059235:
        uVar9 = 0xb;
      }
      else {
        in_stack_ffffff84 = 0;
        iVar8 = (*g_engfuncs.pfnRandomLong)(0,1);
        if (iVar8 == 0) goto LAB_10059235;
        if (iVar8 == 1) {
          uVar9 = 0xc;
          iVar8 = 9;
          goto LAB_100592c7;
        }
      }
      iVar8 = 9;
      goto LAB_100592c7;
    }
    if (((local_54.x <= 270.0) || ((uVar1 & 4) == 0)) || (local_58 <= 0.5)) {
      if (local_54.x <= 200.0) goto LAB_100591ad;
      *(undefined4 *)(param_1 + 0x9f0) = 0;
      iVar8 = *(int *)(param_1 + 0x9f4);
      local_54.x = 6.30584e-44;
      local_5c = 0.75;
      if (iVar8 == 0xf) {
LAB_100591a3:
        uVar9 = 0x13;
      }
      else if (iVar8 == 0x13) {
LAB_10059164:
        uVar9 = 0x12;
      }
      else if (iVar8 == 0x12) {
        uVar9 = 0xf;
      }
      else {
        in_stack_ffffff84 = 0;
        iVar8 = (*g_engfuncs.pfnRandomLong)(0,2);
        if (iVar8 == 0) goto LAB_100591a3;
        if (iVar8 == 1) goto LAB_10059164;
        if (iVar8 == 2) {
          uVar9 = 0xf;
        }
      }
      goto switchD_100592ae_default;
    }
    *(undefined4 *)(param_1 + 0x9f0) = 0;
    local_48[0] = 0.0;
    local_48[1] = 0.0;
    local_48[2] = 16.0;
    local_54.x = 6.30584e-44;
    *(uint *)(*(int *)(iVar8 + 4) + 0x250) = *(uint *)(*(int *)(iVar8 + 4) + 0x250) | 4;
    local_5c = 1.0;
    iVar6 = *(int *)(*(int *)(param_1 + 0x70) + 4);
    uVar9 = 0x10;
    iVar8 = 8;
    *(undefined4 *)(iVar6 + 0x174) = 0;
    *(undefined4 *)(iVar6 + 0x178) = 0;
    *(undefined4 *)(iVar6 + 0x17c) = 0x41800000;
    *(undefined4 *)(*(int *)(param_1 + 0x70) + 0x4e0) = 0x40000000;
  }
  else {
    uVar9 = 0xffffffff;
    iVar8 = 4;
    local_5c = 0.55;
LAB_10058e06:
    local_54.z = 1.4013e-45;
    local_54.y = 2.8026e-45;
    *(undefined4 *)(param_1 + 0x9ec) = 0;
    local_54.x = 4.90454e-44;
LAB_100592c7:
    iVar6 = *(int *)(*(int *)(param_1 + 0x70) + 4);
    uVar1 = *(uint *)(iVar6 + 0x250);
    if ((uVar1 & 0x20000) != 0) {
      *(uint *)(iVar6 + 0x250) = uVar1 & 0xfffdffff;
      iVar6 = *(int *)(*(int *)(param_1 + 0x70) + 4);
      *(uint *)(iVar6 + 0x250) = *(uint *)(iVar6 + 0x250) & 0xfffffffb;
      iVar6 = *(int *)(*(int *)(param_1 + 0x70) + 4);
      if ((*(uint *)(iVar6 + 0x1a4) & 0x4000) == 0) {
        local_2c = 0x41e00000;
        *(undefined4 *)(iVar6 + 0x174) = 0;
        *(undefined4 *)(iVar6 + 0x178) = 0;
        *(undefined4 *)(iVar6 + 0x17c) = 0x41e00000;
      }
      else {
        local_2c = 0x41800000;
        *(undefined4 *)(iVar6 + 0x174) = 0;
        *(undefined4 *)(iVar6 + 0x178) = 0;
        *(undefined4 *)(iVar6 + 0x17c) = 0x41800000;
      }
      local_30 = 0;
      local_34 = 0.0;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x120) = 0x3f800000;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x11c) = 0x3f800000;
    }
  }
  *(undefined4 *)(param_1 + 0x9f4) = uVar9;
  FUN_10063e60(*(int *)(param_1 + 0x70));
  KungFu(*(int *)(param_1 + 0x70));
  fVar2 = local_48[0];
  if (local_48[0] == 4.2039e-45) {
    iVar6 = *(int *)(*(int *)(param_1 + 0x70) + 4);
    local_48[2] = *(float *)(iVar6 + 0x74);
    local_48[3] = *(float *)(iVar6 + 0x78);
    local_38 = 0.0;
  }
  else {
    iVar6 = *(int *)(*(int *)(param_1 + 0x70) + 4);
    local_48[2] = *(float *)(iVar6 + 0x74);
    local_48[3] = *(float *)(iVar6 + 0x78);
    local_38 = *(float *)(iVar6 + 0x7c);
  }
  UTIL_MakeVectors(local_48 + 2);
  pfVar4 = (float *)(**(code **)(**(int **)(param_1 + 0x70) + 0x160))();
  local_54.x = *pfVar4;
  local_54.y = pfVar4[1];
  local_54.z = pfVar4[2];
  Vector::Vector((Vector *)&stack0xffffff34,gpGlobals->v_forward);
  pfVar4 = (float *)&stack0xffffff94;
  fVar11 = (float)(int)((-(uint)(fVar2 != 4.2039e-45) & 2) - 1);
  fStack_e0 = 2.634415e-29;
  this = (Vector *)Vector::operator*((Vector *)gpGlobals->v_forward,local_48,(float)iStack_84);
  pfVar4 = (float *)Vector::operator*(this,pfVar4,fVar11);
  puVar5 = (undefined4 *)Vector::operator+(&local_54,local_48 + 3,pfVar4);
  fStack_e0 = 2.6344266e-29;
  Vector::Vector((Vector *)&stack0xffffff28,puVar5);
  Vector::Vector((Vector *)&stack0xffffff1c,&local_54.x);
  iVar6 = FUN_10063920(*(void **)(param_1 + 0x70));
  if ((iVar6 == 0) && (0.001 < fStack_88)) {
    *(float *)(*(int *)(param_1 + 0x70) + 0x788) = fStack_88;
    if (fVar2 == 4.2039e-45) {
      fStack_90 = -fStack_90;
    }
    *(float *)(*(int *)(param_1 + 0x70) + 0x78c) = fStack_90;
    *(undefined1 *)(*(int *)(param_1 + 0x70) + 0x790) = 0;
  }
  if ((cStack_91 != '\0') &&
     ((*(byte *)(*(int *)((int)*(void **)(param_1 + 0x70) + 4) + 0x250) & 1) == 0)) {
    FUN_10063570(*(void **)(param_1 + 0x70),fStack_8c * 0.75);
  }
  (*g_engfuncs.pfnPlaybackEvent)
            (1,*(edict_t **)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x208),
             *(ushort *)(param_1 + 0x95c),0.0,(float *)&DAT_100ae498,(float *)&DAT_100ae498,0.0,0.0,
             in_stack_ffffff84,iVar8,0,0);
LAB_1005958e:
  fVar10 = FUN_10076120();
  *(float *)(param_1 + 0x90) = (float)(fVar10 + (float10)local_5c);
  *(float *)(param_1 + 0x8c) = (float)(fVar10 + (float10)local_5c);
  fVar10 = FUN_10076120();
  *(float *)(param_1 + 0x98) = (float)(fVar10 + (float10)2.0);
  *(undefined4 *)(*(int *)(param_1 + 0x70) + 0x794) = 0;
  *(float *)(*(int *)(param_1 + 0x70) + 0x4e4) = local_5c;
  return;
}

/* 10059650  FUN_10059650  (100 bytes)
 * undefined4 FUN_10059650(int param_1, uint param_2)
 * called by: FUN_10062470
 */
undefined4 __cdecl FUN_10059650(int param_1,uint param_2)

{
  char cVar1;
  undefined3 uVar2;
  
  if ((0 < param_1) && (param_1 < 0x26)) {
    if (param_2 == 0) {
      return CONCAT31((int3)((uint)param_1 >> 8),1);
    }
    cVar1 = GetWeaponType(param_1);
    param_1 = (int)cVar1 - 1;
    uVar2 = (undefined3)((uint)param_1 >> 8);
    switch(param_1) {
    case 0:
      if ((param_2 & 0x10) == 0) {
        return CONCAT31(uVar2,1);
      }
      break;
    case 2:
      if ((param_2 & 1) == 0) {
        return CONCAT31(uVar2,1);
      }
      break;
    case 5:
    case 6:
      if ((param_2 & 8) == 0) {
        return CONCAT31(uVar2,1);
      }
      break;
    case 7:
      if ((param_2 & 2) == 0) {
        return CONCAT31(uVar2,1);
      }
      break;
    case 8:
      if ((param_2 & 4) == 0) {
        return CONCAT31(uVar2,1);
      }
    }
  }
  return param_1 & 0xffffff00;
}

/* 10059810  FUN_10059810  (112 bytes)
 * undefined FUN_10059810()
 */
void FUN_10059810(CBasePlayer *param_1)

{
  int *piVar1;
  
  piVar1 = &param_1->pev->weapons;
  *piVar1 = *piVar1 | 0x80000000;
  piVar1 = (int *)UTIL_FindEntityByClassname(0,s_game_player_equip_100a45f4);
  if (piVar1 != (int *)0x0) {
    do {
      (**(code **)(*piVar1 + 0xd4))(param_1);
      piVar1 = (int *)UTIL_FindEntityByClassname((int)piVar1,s_game_player_equip_100a45f4);
    } while (piVar1 != (int *)0x0);
    return;
  }
  CBasePlayer::GiveNamedItem(param_1,0x100a4494);
  FUN_10062090(param_1);
  *(undefined4 *)&param_1->field_0x528 = *(undefined4 *)&param_1->field_0x52c;
  return;
}

/* 1005b350  FUN_1005b350  (71 bytes)
 * undefined4 FUN_1005b350(int param_1)
 */
undefined4 FUN_1005b350(int param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  undefined3 extraout_var;
  
  bVar3 = CBasePlayer::IsOnLadder(param_1);
  if ((CONCAT31(extraout_var,bVar3) == 0) &&
     (fVar1 = *(float *)(*(int *)(param_1 + 4) + 0x24),
     fVar2 = *(float *)(*(int *)(param_1 + 4) + 0x20), SQRT(fVar1 * fVar1 + fVar2 * fVar2) <= 220.0)
     ) {
    return 0;
  }
  return 1;
}

/* 1005c340  FUN_1005c340  (110 bytes)
 * undefined FUN_1005c340(int param_1)
 * called by: CTSBomb::KeyValue, CTSHack::KeyValue, CTSTeamEscape::KeyValue
 */
void __thiscall FUN_1005c340(void *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  void *this_00;
  char *pcVar6;
  bool bVar7;
  undefined3 uVar5;
  
  pcVar6 = s_attackerteam_100a3548;
  pbVar2 = *(byte **)(param_1 + 4);
  this_00 = this;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)this_00 >> 8);
    this_00 = (void *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1005c37a:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_1005c37f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (void *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1005c37a;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1005c37f:
  if (iVar3 == 0) {
    uVar4 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)((int)this + 0x58) = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 1005c3d0  FUN_1005c3d0  (38 bytes)
 * undefined FUN_1005c3d0(int * param_1)
 * called by: CBasePlayer::CheckForWires, CTSBomb::Use, CTSHack::Use, CTSTeamEscape::WaitTouch
 */
void __thiscall FUN_1005c3d0(void *this,int *param_1)

{
  byte_conflict *pbVar1;
  int iVar2;
  
  pbVar1 = (byte_conflict *)(**(code **)(*param_1 + 200))();
  iVar2 = CTSGameRules::GetTeamIndex((CTSGameRules *)&TSGameRules,pbVar1);
  FUN_1005c400(this,iVar2);
  return;
}

/* 1005c400  FUN_1005c400  (23 bytes)
 * undefined4 FUN_1005c400(int param_1)
 * called by: FUN_1005c3d0
 */
undefined4 __thiscall FUN_1005c400(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x58);
  if (iVar1 == -1) {
    return 0xffffff01;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == param_1);
}

/* 1005d720  FUN_1005d720  (50 bytes)
 * bool FUN_1005d720(int * param_1)
 * called by: CTSBriefcase::CaptureTouch
 */
bool __thiscall FUN_1005d720(void *this,int *param_1)

{
  byte_conflict *pbVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x58) == -1) {
    return true;
  }
  pbVar1 = (byte_conflict *)(**(code **)(*param_1 + 200))();
  iVar2 = CTSGameRules::GetTeamIndex((CTSGameRules *)&TSGameRules,pbVar1);
  return *(int *)((int)this + 0x58) == iVar2;
}

/* 10060710  FUN_10060710  (35 bytes)
 * undefined FUN_10060710(int param_1)
 * called by: CBasePlayer::PostThink
 */
void __cdecl FUN_10060710(int param_1)

{
  if (0.0 < *(float *)(param_1 + 0x160)) {
    *(undefined4 *)(param_1 + 0xb4) = DAT_100ae48c;
  }
  return;
}

/* 10062090  FUN_10062090  (107 bytes)
 * undefined FUN_10062090(void * param_1)
 * called by: FUN_10059810
 */
void __fastcall FUN_10062090(void *param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0x20;
  puVar2 = (uint *)((int)param_1 + 0x580);
  do {
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((char)puVar2[2] == '\0') {
        FUN_10062470(param_1,uVar1,puVar2[1]);
      }
      else {
        FUN_100622f0(param_1,uVar1);
      }
    }
    puVar2 = puVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar1 = 0;
  piVar4 = (int *)((int)param_1 + 0x540);
  do {
    if ((0 < *piVar4) && (iVar3 = 0, 0 < *piVar4)) {
      do {
        CBasePlayer::BuyAmmo(param_1,uVar1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *piVar4);
    }
    uVar1 = uVar1 + 1;
    piVar4 = piVar4 + 1;
  } while ((int)uVar1 < 0x10);
  return;
}

/* 100622f0  FUN_100622f0  (384 bytes)
 * undefined FUN_100622f0(uint param_1)
 * called by: FUN_10062090
 */
void __thiscall FUN_100622f0(void *this,uint param_1)

{
  void *this_00;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  this_00 = *(void **)((int)this + 0x9fc);
  iVar2 = CBaseMonster::ShouldFadeOnDeath();
  if (iVar2 != 0) {
    iVar3 = *(int *)((int)this + 0x52c);
  }
  if ((param_1 & 0x10) == 0) {
    if ((param_1 & 0x20) == 0) {
      if ((this_00 != (void *)0x0) && (*(int *)((int)this_00 + 0x78) == 0x10)) {
        iVar2 = CBaseMonster::ShouldFadeOnDeath();
        if (iVar2 != 0) {
          if ((param_1 & 1) != 0) {
            iVar3 = iVar3 + -900;
          }
          if ((param_1 & 2) != 0) {
            iVar3 = iVar3 + -800;
          }
          if ((param_1 & 4) != 0) {
            iVar3 = iVar3 + -500;
          }
          if ((param_1 & 8) != 0) {
            iVar3 = iVar3 + -0x708;
          }
        }
        if (-1 < iVar3) {
          iVar2 = FUN_100542f0(this_00,param_1);
          if (iVar2 != 0) {
            iVar2 = CBaseMonster::ShouldFadeOnDeath();
            if (iVar2 != 0) {
              *(int *)((int)this + 0x52c) = iVar3;
            }
          }
        }
      }
    }
    else if ((TSGameRules != '\0') && (TSGameRules != '\x01')) {
      iVar2 = CBaseMonster::ShouldFadeOnDeath();
      if (iVar2 != 0) {
        iVar3 = iVar3 + -700;
      }
      uVar1 = *(uint *)(*(int *)((int)this + 4) + 0x250);
      if (((uVar1 & 0x200) == 0) && (-1 < iVar3)) {
        *(uint *)(*(int *)((int)this + 4) + 0x250) = uVar1 | 0x200;
        iVar2 = CBaseMonster::ShouldFadeOnDeath();
        if (iVar2 != 0) {
          *(int *)((int)this + 0x52c) = iVar3;
        }
        *(uint *)((int)this + 0x704) = *(uint *)((int)this + 0x704) | 0x20;
        EMIT_SOUND_DYN(*(void **)((int)this + 4),
                       *(undefined4 *)((int)*(void **)((int)this + 4) + 0x208),3,
                       s_weapons_items_wav_100a544c,0x3f800000,0x3f4ccccd,0);
        return;
      }
    }
  }
  else {
    iVar2 = CBaseMonster::ShouldFadeOnDeath();
    if (iVar2 != 0) {
      iVar3 = iVar3 + -0x76c;
    }
    if ((*(float *)(*(int *)((int)this + 4) + 0x1bc) < 100.0) && (-1 < iVar3)) {
      CBasePlayer::TakeArmor(this,100);
      iVar2 = CBaseMonster::ShouldFadeOnDeath();
      if (iVar2 != 0) {
        *(int *)((int)this + 0x52c) = iVar3;
        return;
      }
    }
  }
  return;
}

/* 10062470  FUN_10062470  (238 bytes)
 * undefined FUN_10062470(int param_1, uint param_2)
 * called by: FUN_10062090
 */
void __thiscall FUN_10062470(void *this,int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  if (((*(int *)((int)this + 0x9fc) != 0) && (*(int *)(*(int *)((int)this + 0x9fc) + 0x78) == 0x10))
     && (uVar1 = FUN_10059650(param_1,DAT_100c62b8), (char)uVar1 == '\0')) {
    if ((TSGameRules == '\0') || (TSGameRules == '\x01')) {
      if (param_1 == 0x18) {
        return;
      }
    }
    else if (param_1 == 0x18) {
      if (1 < *(byte *)((int)this + 0x700)) {
        return;
      }
      *(byte *)((int)this + 0x700) = *(byte *)((int)this + 0x700) + 1;
    }
    iVar2 = CBaseMonster::ShouldFadeOnDeath();
    if (iVar2 != 0) {
      puVar3 = get_weapon_info(param_1);
      iVar4 = *(int *)((int)this + 0x52c) - puVar3[0x36];
    }
    iVar2 = CBaseMonster::ShouldFadeOnDeath();
    if (iVar2 != 0) {
      if ((param_2 & 1) != 0) {
        iVar4 = iVar4 + -900;
      }
      if ((param_2 & 2) != 0) {
        iVar4 = iVar4 + -800;
      }
      if ((param_2 & 4) != 0) {
        iVar4 = iVar4 + -500;
      }
      if ((param_2 & 8) != 0) {
        iVar4 = iVar4 + -0x708;
      }
    }
    if (((-1 < iVar4) &&
        (iVar2 = CBasePlayer::PickUpWeapon(this,param_1,(undefined4 *)0x0,param_2,'\x01','\x01'),
        iVar2 != 0)) && (iVar2 = CBaseMonster::ShouldFadeOnDeath(), iVar2 != 0)) {
      *(int *)((int)this + 0x52c) = iVar4;
    }
  }
  return;
}

/* 10062560  FUN_10062560  (435 bytes)
 * undefined FUN_10062560(int param_1)
 * called by: CBasePlayer::Killed
 */
void __fastcall FUN_10062560(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_14;
  float fStack_10;
  float fStack_8;
  float fStack_4;
  
  iVar4 = *(int *)(param_1 + 0x9fc);
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x78) == 0x10)) {
    bVar1 = false;
    iVar2 = 0;
    piVar3 = (int *)(iVar4 + 0xc4);
    do {
      if (bVar1) goto LAB_100625a7;
      if (0 < *piVar3) {
        bVar1 = true;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < 0x10);
    if (bVar1) {
LAB_100625a7:
      iVar2 = (*g_engfuncs.pfnRandomLong)(-100,100);
      fStack_30 = (float)iVar2;
      iVar2 = (*g_engfuncs.pfnRandomLong)(-100,100);
      fStack_2c = (float)iVar2;
      uStack_28 = 0;
      UTIL_MakeVectors(&fStack_30);
      __ftol();
      piVar3 = CTSAmmoPack::CreateAmmoPack(param_1,(int *)(iVar4 + 0xc4));
      fStack_14 = gpGlobals->v_right[1] * 8.0;
      iVar4 = piVar3[1];
      fStack_10 = gpGlobals->v_right[2] * 8.0;
      iVar2 = *(int *)(param_1 + 4);
      fStack_20 = gpGlobals->v_forward[1] * 8.0 + *(float *)(iVar2 + 0xc);
      fStack_1c = gpGlobals->v_forward[2] * 8.0 + *(float *)(iVar2 + 0x10);
      fStack_8 = fStack_20 + fStack_14;
      fStack_4 = fStack_1c + fStack_10;
      *(float *)(iVar4 + 8) =
           gpGlobals->v_forward[0] * 8.0 + *(float *)(iVar2 + 8) + gpGlobals->v_right[0] * 8.0;
      *(float *)(iVar4 + 0xc) = fStack_8;
      *(float *)(iVar4 + 0x10) = fStack_4;
      iVar4 = piVar3[1];
      *(undefined4 *)(iVar4 + 0x50) = DAT_100ae498;
      *(undefined4 *)(iVar4 + 0x54) = DAT_100ae49c;
      *(undefined4 *)(iVar4 + 0x58) = DAT_100ae4a0;
      iVar4 = (*g_engfuncs.pfnRandomLong)(-300,300);
      *(float *)(piVar3[1] + 0x60) = (float)iVar4;
      iVar4 = (*g_engfuncs.pfnRandomLong)(-300,300);
      *(float *)(piVar3[1] + 100) = (float)iVar4;
    }
  }
  return;
}

/* 10063570  FUN_10063570  (30 bytes)
 * undefined FUN_10063570(undefined4 param_1)
 * called by: FUN_10058b30
 */
void __thiscall FUN_10063570(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x4c8) = param_1;
  *(uint *)(*(int *)((int)this + 4) + 0x250) = *(uint *)(*(int *)((int)this + 4) + 0x250) | 1;
  return;
}

/* 10063590  FUN_10063590  (573 bytes)
 * undefined FUN_10063590(float * param_1, undefined4 * param_2, int param_3, undefined4 param_4, undefined4 param_5)
 * called by: FUN_100637d0
 */
void __cdecl
FUN_10063590(float *param_1,undefined4 *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *local_90;
  int *local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  int local_70;
  float local_6c;
  int local_68;
  int local_64;
  float local_60;
  float local_5c;
  float local_58;
  int local_54 [2];
  float *local_4c;
  int local_48;
  float local_40;
  float local_3c;
  undefined4 local_38 [4];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  local_54[0] = param_3;
  local_54[1] = param_4;
  local_6c = 1e+06;
  local_40 = ((float)param_2[6] - param_1[1]) + ((float)param_2[6] - param_1[1]);
  local_3c = ((float)param_2[7] - param_1[2]) + ((float)param_2[7] - param_1[2]);
  local_88 = ((float)param_2[5] - *param_1) + ((float)param_2[5] - *param_1) + *param_1;
  local_84 = local_40 + param_1[1];
  local_80 = local_3c + param_1[2];
  local_7c = local_88;
  local_78 = local_84;
  local_74 = local_80;
  local_5c = local_84;
  local_58 = local_80;
  UTIL_TraceLine(param_1,&local_88,0,param_5,local_38);
  if (1.0 <= local_28) {
    local_90 = local_54;
    local_68 = 2;
    do {
      local_8c = local_54;
      local_70 = 2;
      local_4c = (float *)*local_90;
      do {
        piVar3 = local_54;
        local_64 = 2;
        local_48 = *local_8c;
        do {
          local_60 = local_88 + *local_4c;
          local_5c = local_84 + *(float *)(local_48 + 4);
          local_58 = local_80 + *(float *)(*piVar3 + 8);
          UTIL_TraceLine(param_1,&local_60,0,param_5,local_38);
          if ((local_28 < 1.0) &&
             (fVar1 = SQRT((local_24 - *param_1) * (local_24 - *param_1) +
                           (local_20 - param_1[1]) * (local_20 - param_1[1]) +
                           (local_1c - param_1[2]) * (local_1c - param_1[2])), fVar1 < local_6c)) {
            puVar4 = local_38;
            puVar5 = param_2;
            for (iVar2 = 0xe; local_6c = fVar1, iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar5 = puVar5 + 1;
            }
          }
          piVar3 = piVar3 + 1;
          local_64 = local_64 + -1;
        } while (local_64 != 0);
        local_8c = local_8c + 1;
        local_70 = local_70 + -1;
      } while (local_70 != 0);
      local_90 = local_90 + 1;
      local_68 = local_68 + -1;
    } while (local_68 != 0);
    return;
  }
  puVar4 = local_38;
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_2 = *puVar4;
    puVar4 = puVar4 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

/* 100637d0  FUN_100637d0  (319 bytes)
 * undefined FUN_100637d0(void)
 * called by: FUN_10056740, FUN_10057210, FUN_10063920, FUN_10063eb0
 */
void __thiscall FUN_100637d0(void *this)

{
  edict_t *peVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *in_stack_0000001c;
  int in_stack_00000020;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  UTIL_TraceLine(&stack0x00000004,&stack0x00000010,0,
                 *(undefined4 *)(*(int *)((int)this + 4) + 0x208),in_stack_0000001c);
  if ((float)in_stack_0000001c[4] < 1.0) {
    return;
  }
  FUN_10076fe0(&stack0x00000004,&stack0x00000010,0,in_stack_00000020,
               *(undefined4 *)(*(int *)((int)this + 4) + 0x208),in_stack_0000001c);
  if ((float)in_stack_0000001c[4] < 1.0) {
    peVar1 = (edict_t *)in_stack_0000001c[0xc];
    if ((((peVar1 != (edict_t *)0x0) ||
         (peVar1 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar1 != (edict_t *)0x0)) &&
        (peVar1->pvPrivateData != (int *)0x0)) &&
       (iVar2 = (**(code **)(*(int *)peVar1->pvPrivateData + 0xb0))(), iVar2 == 0)) {
      return;
    }
    if (in_stack_00000020 == 3) {
      uStack_30 = 0x41800000;
      uStack_2c = 0x41800000;
      uStack_28 = 0x41900000;
      puVar4 = &uStack_30;
      uStack_18 = 0xc1800000;
      uStack_14 = 0xc1800000;
      uStack_10 = 0xc1900000;
      puVar3 = &uStack_18;
    }
    else {
      uStack_24 = 0x41800000;
      uStack_20 = 0x41800000;
      uStack_1c = 0x42100000;
      puVar4 = &uStack_24;
      uStack_c = 0xc1800000;
      uStack_8 = 0xc1800000;
      uStack_4 = 0xc2100000;
      puVar3 = &uStack_c;
    }
    FUN_10063590((float *)&stack0x00000004,in_stack_0000001c,(int)puVar3,puVar4,
                 *(undefined4 *)(*(int *)((int)this + 4) + 0x208));
    return;
  }
  return;
}

/* 10063920  FUN_10063920  (1189 bytes)
 * undefined4 FUN_10063920(void)
 * called by: FUN_10058b30, FUN_1006a740
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10063920(void *this)

{
  float fVar1;
  float fVar2;
  entvars_t *peVar3;
  edict_t *peVar4;
  void **ppvVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  void *this_00;
  CBasePlayer *this_01;
  edict_t *unaff_retaddr;
  undefined4 in_stack_0000001c;
  int in_stack_00000030;
  float in_stack_00000034;
  CBasePlayer *pCStack00000038;
  char cStack0000003c;
  char in_stack_00000040;
  char in_stack_00000044;
  char cStack00000048;
  float in_stack_0000004c;
  float fStack_60;
  float fVar9;
  float fStack_58;
  Vector aVStack_3c [2];
  float fStack_20;
  
  if (in_stack_00000030 != -1) {
    CTSAnimation::Animate((CTSAnimation *)((int)this + 0x278),this,in_stack_00000030);
  }
  pCStack00000038 = (CBasePlayer *)(*g_engfuncs.pfnRandomLong)(10,0x50);
  if ((float)(int)pCStack00000038 < in_stack_00000034) {
    (*g_engfuncs.pfnMessageBegin)
              (4,DAT_100d97d8,(float *)(*(int *)((int)this + 4) + 8),(edict_t *)0x0);
    iVar6 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)((int)this + 4) + 0x208));
    (*g_engfuncs.pfnWriteByte)(iVar6);
    iVar6 = 2;
    if (in_stack_0000004c <= 50.0) {
      iVar6 = 1;
    }
    fStack_60 = 2.6471332e-29;
    (*g_engfuncs.pfnWriteByte)(iVar6);
    (*g_engfuncs.pfnMessageEnd)();
  }
  Vector::Vector((Vector *)&stack0xffffff7c,(undefined4 *)&stack0x00000018);
  Vector::Vector((Vector *)&stack0xffffff70,(undefined4 *)&stack0x0000000c);
  FUN_100637d0(this);
  if (1.0 <= fStack_20) {
    return 0;
  }
  if ((unaff_retaddr == (edict_t *)0x0) &&
     (unaff_retaddr = (*g_engfuncs.pfnPEntityOfEntOffset)(0), unaff_retaddr == (edict_t *)0x0)) {
    this_01 = (CBasePlayer *)0x0;
  }
  else {
    this_01 = unaff_retaddr->pvPrivateData;
  }
  if (this_01 != (CBasePlayer *)0x0) {
    peVar3 = this_01->pev;
    if (peVar3->takedamage == 0.0) {
      return 0;
    }
    if ((peVar3->flags & 0x2000000U) == 0) {
      if ((peVar3->effects & 0x80) != 0) {
        return 0;
      }
      pCStack00000038 = this_01;
      iVar6 = (*this_01->vtable[0x30])();
      if (iVar6 == 0) {
        if (in_stack_00000040 != '\0') {
          return 0;
        }
      }
      else if (((cStack00000048 != '\0') || (_DAT_1009ebc4 == 0.0)) &&
              (iVar6 = (**(code **)(*g_pGameRules + 0xc4))(), iVar6 == 1)) {
        return 0;
      }
      iVar6 = (*this_01->vtable[0x30])();
      fVar1 = in_stack_00000034;
      if (iVar6 != 0) {
        uVar7 = FUN_1004cec0(this,(int *)this_01);
        if ((char)uVar7 != '\0') {
          return 0;
        }
        if ((cStack0000003c != '\0') && (*(float *)&this_01->field_0x708 < gpGlobals->time)) {
          CBasePlayer::DropWeapon(this_01,0xfffffffe,fVar1);
        }
        if ((in_stack_00000044 != '\0') && (30.0 < in_stack_00000034)) {
          iVar6 = *(int *)((int)this + 4);
          peVar3 = this_01->pev;
          _cStack00000048 =
               SQRT(*(float *)(iVar6 + 0x28) * *(float *)(iVar6 + 0x28) +
                    *(float *)(iVar6 + 0x24) * *(float *)(iVar6 + 0x24) +
                    *(float *)(iVar6 + 0x20) * *(float *)(iVar6 + 0x20));
          fVar1 = peVar3->origin[0] - *(float *)(iVar6 + 8);
          fVar9 = peVar3->origin[1] - *(float *)(iVar6 + 0xc);
          fStack_58 = peVar3->origin[2] - *(float *)(iVar6 + 0x10);
          fVar2 = SQRT(fVar1 * fVar1 + fVar9 * fVar9 + fStack_58 * fStack_58);
          if (fVar2 == 0.0) {
            fStack_60 = 0.0;
            fVar9 = 0.0;
            fStack_58 = 1.0;
          }
          else {
            fVar2 = 1.0 / fVar2;
            puVar8 = (undefined4 *)
                     Vector::Vector(aVStack_3c,fVar1 * fVar2,fVar9 * fVar2,fStack_58 * fVar2);
            Vector::Vector((Vector *)&fStack_60,puVar8);
          }
          peVar3 = this_01->pev;
          fVar1 = peVar3->velocity[1];
          fVar2 = peVar3->velocity[2];
          peVar3->velocity[0] = fStack_60 * _cStack00000048 + peVar3->velocity[0];
          peVar3->velocity[1] = fVar9 * _cStack00000048 + fVar1;
          peVar3->velocity[2] = fStack_58 * _cStack00000048 + fVar2;
          this_01->pev->velocity[2] = 235.0;
        }
        peVar4 = this_01->pev->pContainingEntity;
        (*g_engfuncs.pfnRandomLong)(0,0x1f);
        EMIT_SOUND_DYN(this_00,peVar4,4,s_player_kungfuhit_wav_100a3700,0x3f800000,0x3f4ccccd,0);
        if (((*(int *)((int)this + 0x9fc) != 0) && (20.0 < _cStack0000003c)) &&
           (*(int *)(*(int *)((int)this + 0x9fc) + 0xb8) == 0)) {
          FUN_100148b0((void *)(*(int *)((int)this + 4) + 8),&aVStack_3c[0].z,this_01->pev->origin);
          CTSGroundAmmo::Use();
        }
      }
      DAT_100da9d8 = 1;
      FUN_100796a0();
      ppvVar5 = this_01->vtable;
      Vector::Vector((Vector *)&stack0xffffff7c,(undefined4 *)&stack0x00000024);
      (*ppvVar5[0x13])();
      FUN_100796c0(*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 4));
      DAT_100da9d8 = 0;
      return in_stack_0000001c;
    }
    return 0;
  }
  return 0;
}

/* 10063dd0  FUN_10063dd0  (133 bytes)
 * undefined FUN_10063dd0(float param_1)
 * called by: FUN_1004cc30, FUN_1004cd70, FUN_1004cec0, FUN_100589c0, FUN_1006a740, FUN_1006aa30
 */
void __thiscall FUN_10063dd0(void *this,float param_1)

{
  float fVar1;
  longlong lVar2;
  undefined4 uStack0000000c;
  
  fVar1 = *(float *)((int)this + 0x760) - param_1;
  if (0.01 <= fVar1) {
    if (-0.001 <= fVar1) {
      *(float *)((int)this + 0x760) = fVar1;
    }
    else {
      *(undefined4 *)((int)this + 0x760) = 0;
    }
  }
  else {
    *(undefined4 *)((int)this + 0x760) = 0;
    *(undefined4 *)((int)this + 0x118) = 0x3fc00000;
  }
  (*g_engfuncs.pfnMessageBegin)
            (1,DAT_100d9760,(float *)0x0,*(edict_t **)(*(int *)((int)this + 4) + 0x208));
  lVar2 = __ftol();
  (*g_engfuncs.pfnWriteChar)((int)lVar2);
  uStack0000000c = 0x10063e51;
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 10063e60  FUN_10063e60  (69 bytes)
 * float10 FUN_10063e60(int param_1)
 * called by: FUN_10056740, FUN_10057210, FUN_10058b30
 */
float10 __fastcall FUN_10063e60(int param_1)

{
  if (*(float *)(param_1 + 0x760) < 0.0) {
    return ((float10)0.0 * (float10)0.5 + (float10)50.0) * (float10)0.01;
  }
  return ((float10)*(float *)(param_1 + 0x760) * (float10)0.5 + (float10)50.0) * (float10)0.01;
}

/* 10063eb0  FUN_10063eb0  (1013 bytes)
 * int * FUN_10063eb0(void)
 * called by: CTSGun::AlternateAttack
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_10063eb0(void *this)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  void **ppvVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  void *this_00;
  CBasePlayer *pCVar13;
  CBasePlayer *this_01;
  float in_stack_00000030;
  char in_stack_00000038;
  char in_stack_0000003c;
  char in_stack_00000040;
  char in_stack_00000044;
  CBasePlayer *pCStack_6c;
  Vector VStack_64;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  CBasePlayer *pCStack_48;
  float fStack_44;
  Vector aVStack_40 [2];
  float local_28;
  edict_t *local_8;
  
  CTSAnimation::Animate((CTSAnimation *)((int)this + 0x278),this,(int)in_stack_00000030);
  Vector::Vector((Vector *)&stack0xffffff60,(undefined4 *)&stack0x00000010);
  Vector::Vector((Vector *)&stack0xffffff54,(undefined4 *)&stack0x00000004);
  FUN_100637d0(this);
  if (1.0 <= local_28) {
    return (int *)0x0;
  }
  if ((local_8 == (edict_t *)0x0) &&
     (local_8 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), local_8 == (edict_t *)0x0)) {
    this_01 = (CBasePlayer *)0x0;
  }
  else {
    this_01 = local_8->pvPrivateData;
  }
  if (this_01 == (CBasePlayer *)0x0) {
    return (int *)0x0;
  }
  peVar1 = this_01->pev;
  if (peVar1->takedamage == 0.0) {
    return (int *)0x0;
  }
  if ((peVar1->flags & 0x2000000U) == 0) {
    if ((peVar1->effects & 0x80) != 0) {
      return (int *)0x0;
    }
    iVar10 = (*this_01->vtable[0x30])();
    if (iVar10 == 0) {
      if (in_stack_0000003c != '\0') {
        return (int *)0x0;
      }
    }
    else if (((in_stack_00000044 != '\0') || (_DAT_1009ebc4 == 0.0)) &&
            (iVar10 = (**(code **)(*g_pGameRules + 0xc4))(), iVar10 == 1)) {
      return (int *)0x0;
    }
    bVar9 = true;
    iVar10 = (*this_01->vtable[0x30])();
    pCVar13 = this_01;
    if (iVar10 != 0) {
      uVar11 = FUN_1004cec0(this,(int *)this_01);
      if ((char)uVar11 == '\0') {
        if ((in_stack_00000038 != '\0') && (*(float *)&this_01->field_0x708 < gpGlobals->time)) {
          CBasePlayer::DropWeapon(this_01,0xfffffffe,in_stack_00000030);
        }
        if ((in_stack_00000040 != '\0') && (30.0 < in_stack_00000030)) {
          iVar10 = *(int *)((int)this + 4);
          peVar1 = this_01->pev;
          fVar4 = SQRT(*(float *)(iVar10 + 0x28) * *(float *)(iVar10 + 0x28) +
                       *(float *)(iVar10 + 0x24) * *(float *)(iVar10 + 0x24) +
                       *(float *)(iVar10 + 0x20) * *(float *)(iVar10 + 0x20));
          fVar5 = peVar1->origin[0] - *(float *)(iVar10 + 8);
          fVar8 = peVar1->origin[1] - *(float *)(iVar10 + 0xc);
          fVar7 = peVar1->origin[2] - *(float *)(iVar10 + 0x10);
          fVar6 = SQRT(fVar5 * fVar5 + fVar8 * fVar8 + fVar7 * fVar7);
          if (fVar6 == 0.0) {
            puVar12 = &uStack_58;
            uStack_58 = 0;
            uStack_54 = 0;
            uStack_50 = 0x3f800000;
          }
          else {
            fVar6 = 1.0 / fVar6;
            puVar12 = (undefined4 *)
                      Vector::Vector(aVStack_40,fVar5 * fVar6,fVar8 * fVar6,fVar7 * fVar6);
          }
          Vector::Vector(&VStack_64,puVar12);
          peVar1 = this_01->pev;
          pCStack_6c = (CBasePlayer *)(VStack_64.y * fVar4 + peVar1->velocity[1]);
          fStack_44 = VStack_64.z * fVar4 + peVar1->velocity[2];
          peVar1->velocity[0] = VStack_64.x * fVar4 + peVar1->velocity[0];
          peVar1->velocity[1] = (vec_t)pCStack_6c;
          peVar1->velocity[2] = fStack_44;
          this_01->pev->velocity[2] = 235.0;
          pCStack_48 = pCStack_6c;
        }
        peVar2 = this_01->pev->pContainingEntity;
        (*g_engfuncs.pfnRandomLong)(0,0x1f);
        EMIT_SOUND_DYN(this_00,peVar2,4,s_player_kungfuhit_wav_100a3700,0x3f800000,0x3f4ccccd,0);
      }
      else {
        bVar9 = false;
        pCStack_6c = this_01;
      }
      FUN_100148b0((void *)(*(int *)((int)this + 4) + 8),&aVStack_40[0].x,this_01->pev->origin);
      CTSGroundAmmo::Use();
      pCVar13 = pCStack_6c;
      if (!bVar9) {
        return (int *)pCStack_6c;
      }
    }
    DAT_100da9d9 = 1;
    FUN_100796a0();
    ppvVar3 = this_01->vtable;
    Vector::Vector((Vector *)&stack0xffffff64,(undefined4 *)&stack0x00000020);
    (*ppvVar3[0x13])();
    FUN_100796c0(*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 4));
    DAT_100da9d9 = 0;
    return (int *)pCVar13;
  }
  return (int *)0x0;
}

/* 100642b0  FUN_100642b0  (189 bytes)
 * undefined FUN_100642b0(int * param_1)
 * called by: CBasePlayer::UpdatePowerUpState
 */
void __fastcall FUN_100642b0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  (**(code **)(*param_1 + 0xc))(0x3f800000,0);
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  *(undefined1 *)((int)param_1 + 0x161) = 0;
  iVar2 = 1;
  if (0 < gpGlobals->maxClients) {
    piVar3 = param_1 + 0x5d;
    do {
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        if ((float)piVar1[0x5a] == 0.0) {
          (**(code **)(*piVar1 + 0xc))(0x3f800000,0);
          *(undefined1 *)(*piVar3 + 0x161) = 0;
        }
        *piVar3 = 0;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 <= gpGlobals->maxClients);
  }
  iVar2 = 0;
  if ('\0' < (char)param_1[0x9d]) {
    piVar3 = param_1 + 0x7d;
    do {
      if ((int *)*piVar3 != (int *)0x0) {
        (**(code **)(*(int *)*piVar3 + 0xc))(0x3f800000,0);
        *piVar3 = 0;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < (char)param_1[0x9d]);
  }
  *(undefined1 *)(param_1 + 0x9d) = 0;
  return;
}

/* 10064a00  FUN_10064a00  (551 bytes)
 * undefined FUN_10064a00(void)
 * called by: FUN_10065090
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10064a00(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  undefined1 local_44 [68];
  
  if ((-60.0 <= *(float *)(DAT_100b3720 + 0x44)) && (*(float *)(DAT_100b3720 + 0x44) <= 60.0)) {
    DAT_100d99bc = *(float *)(DAT_100b3720 + 0x44) < -30.0;
    DAT_100d985c = *(int *)(DAT_100b3720 + 0xbc);
    *(undefined4 *)(DAT_100b3720 + 0xbc) = 2;
    _DAT_100d97ec = *(float *)(DAT_100b3720 + 0x38);
    _DAT_100d97f0 = *(float *)(DAT_100b3720 + 0x3c);
    _DAT_100d97f4 =
         (float)(-(DAT_100d99bc != '\0') & 0x28) + *(float *)(DAT_100b3720 + 0x88) +
         *(float *)(DAT_100b3720 + 0x40);
    _DAT_100d9860 = *(float *)(DAT_100b3720 + 0x14) * 64.0 + _DAT_100d97ec;
    _DAT_100d9864 = *(float *)(DAT_100b3720 + 0x18) * 64.0 + _DAT_100d97f0;
    _DAT_100d9868 = _DAT_100d97f4;
    puVar1 = (undefined4 *)
             (**(code **)(DAT_100b3720 + 0x4f580))
                       (local_44,&DAT_100d97ec,&DAT_100d9860,0,0xffffffff);
    puVar3 = &DAT_100d9890;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    if (_DAT_100d98a0 == 1.0) {
      _DAT_100d97f4 =
           *(float *)(DAT_100b3720 + 0x4f4fc + DAT_100d985c * 0xc) + *(float *)(DAT_100b3720 + 0x40)
      ;
      _DAT_100d9860 = *(float *)(DAT_100b3720 + 0x14) * 32.0 + _DAT_100d97ec;
      _DAT_100d9864 = *(float *)(DAT_100b3720 + 0x18) * 32.0 + _DAT_100d97f0;
      _DAT_100d9868 = _DAT_100d97f4;
      *(undefined4 *)(DAT_100b3720 + 0xbc) = 2;
      puVar1 = (undefined4 *)
               (**(code **)(DAT_100b3720 + 0x4f580))
                         (local_44,&DAT_100d97ec,&DAT_100d9860,0,0xffffffff);
      puVar3 = &DAT_100d9890;
      for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar3 = puVar3 + 1;
      }
      if ((_DAT_100d98a0 != 1.0) &&
         (fVar4 = FUN_10036450((float *)(DAT_100b3720 + 0x5c)),
         fVar4 < (float10)*(float *)(DAT_100b3720 + 500) * (float10)0.5)) {
        *(undefined4 *)(DAT_100b3720 + 0xe0) = 0xffffffff;
        *(float *)(DAT_100b3720 + 100) =
             *(float *)(DAT_100b3720 + 0x10) * 16.0 * 100.0 + *(float *)(DAT_100b3720 + 100);
        FUN_10037840();
      }
    }
    *(int *)(DAT_100b3720 + 0xbc) = DAT_100d985c;
    FUN_10039160(1);
    FUN_10038730();
  }
  return;
}

/* 10064c30  FUN_10064c30  (425 bytes)
 * undefined FUN_10064c30(void)
 * called by: FUN_10065090
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10064c30(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 local_44 [68];
  
  iVar5 = DAT_100b3720;
  DAT_100d97f8 = *(undefined4 *)(DAT_100b3720 + 0x38);
  DAT_100d97fc = *(undefined4 *)(DAT_100b3720 + 0x3c);
  _DAT_100d9800 = *(undefined4 *)(DAT_100b3720 + 0x40);
  if (*(int *)(DAT_100b3720 + 0xe0) != -1) {
    iVar3 = 0;
    do {
      iVar1 = iVar3 * 4;
      iVar2 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      _DAT_100d97e8 = iVar3;
      *(float *)(&DAT_100d97f4 + iVar3 * 4) =
           (*(float *)(iVar5 + 0x4f500 + iVar1) - *(float *)(iVar5 + 0x4f4f4 + iVar2)) +
           *(float *)(&DAT_100d97f4 + iVar3 * 4);
    } while (iVar3 < 3);
  }
  puVar4 = (undefined4 *)
           (**(code **)(iVar5 + 0x4f580))(local_44,&DAT_100d97f8,&DAT_100d97f8,0,0xffffffff);
  iVar5 = DAT_100b3720;
  puVar6 = &DAT_100d98e8;
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  if ((*(byte *)(iVar5 + 0x45476) & 4) != 0) {
    *(undefined4 *)(iVar5 + 0xbc) = 1;
    *(undefined4 *)(DAT_100b3720 + 0x88) = 0x41800000;
    *(uint *)(DAT_100b3720 + 0x208) = *(uint *)(DAT_100b3720 + 0x208) & 0xfffffff7;
    return;
  }
  if (DAT_100d98ec != 0) {
    *(undefined4 *)(iVar5 + 0xbc) = 1;
    *(uint *)(DAT_100b3720 + 0xb8) = *(uint *)(DAT_100b3720 + 0xb8) | 0x4000;
    return;
  }
  *(undefined4 *)(iVar5 + 0xbc) = 0;
  puVar4 = (undefined4 *)
           (**(code **)(DAT_100b3720 + 0x4f580))(local_44,&DAT_100d97f8,&DAT_100d97f8,0,0xffffffff);
  puVar6 = &DAT_100d98e8;
  for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  if (DAT_100d98ec != 0) {
    *(undefined4 *)(DAT_100b3720 + 0xbc) = 1;
    return;
  }
  *(undefined4 *)(DAT_100b3720 + 0x88) = 0x41e00000;
  *(undefined4 *)(DAT_100b3720 + 0x38) = DAT_100d97f8;
  *(undefined4 *)(DAT_100b3720 + 0x3c) = DAT_100d97fc;
  *(undefined4 *)(DAT_100b3720 + 0x40) = _DAT_100d9800;
  FUN_10039160(1);
  FUN_10038730();
  *(uint *)(DAT_100b3720 + 0x208) = *(uint *)(DAT_100b3720 + 0x208) & 0xfffffff7;
  return;
}

/* 10064de0  FUN_10064de0  (127 bytes)
 * undefined FUN_10064de0(void)
 * called by: FUN_10065090
 */
void FUN_10064de0(void)

{
  if (*(int *)(DAT_100b3720 + 0xbc) != 1) {
    *(undefined4 *)(DAT_100b3720 + 0xbc) = 1;
    *(uint *)(DAT_100b3720 + 0xb8) = *(uint *)(DAT_100b3720 + 0xb8) | 0x4000;
    if (*(int *)(DAT_100b3720 + 0xe0) != -1) {
      DAT_100d99c4 = 0;
      do {
        *(float *)(DAT_100b3720 + 0x38 + DAT_100d99c4 * 4) =
             *(float *)(DAT_100b3720 + 0x38 + DAT_100d99c4 * 4) -
             (*(float *)(DAT_100b3720 + 0x4f500 + DAT_100d99c4 * 4) -
             *(float *)(DAT_100b3720 + 0x4f4f4 + DAT_100d99c4 * 4));
        DAT_100d99c4 = DAT_100d99c4 + 1;
      } while (DAT_100d99c4 < 3);
      FUN_10039160(1);
      FUN_10038730();
      return;
    }
  }
  return;
}

/* 10064e60  FUN_10064e60  (136 bytes)
 * undefined FUN_10064e60(void)
 * called by: FUN_10065090
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10064e60(void)

{
  CBaseEntity *this;
  
  *(undefined4 *)(DAT_100b3720 + 0xe0) = 0xffffffff;
  if ((*(uint *)(DAT_100b3720 + 0x208) & 0x1000) != 0) {
    _DAT_100d9878 = 210.0;
    DAT_100d98e4 = 0;
    do {
      *(float *)(DAT_100b3720 + 0x5c + DAT_100d98e4 * 4) =
           -(_DAT_100d9878 * *(float *)(DAT_100b3720 + 0x14 + DAT_100d98e4 * 4));
      DAT_100d98e4 = DAT_100d98e4 + 1;
    } while (DAT_100d98e4 < 2);
    *(undefined4 *)(DAT_100b3720 + 100) = 0x436ca4a8;
    *(uint *)(DAT_100b3720 + 0x208) = *(uint *)(DAT_100b3720 + 0x208) & 0xffffefff;
  }
  FUN_10037840();
  CBaseEntity::SUB_DoNothing(this);
  return;
}

/* 10064ef0  FUN_10064ef0  (72 bytes)
 * undefined FUN_10064ef0(void)
 * called by: FUN_10065090
 */
void FUN_10064ef0(void)

{
  CBaseEntity *this;
  
  *(undefined4 *)(DAT_100b3720 + 0xe0) = 0xffffffff;
  if ((*(uint *)(DAT_100b3720 + 0x208) & 0x8000) != 0) {
    *(undefined4 *)(DAT_100b3720 + 100) = 0x43a754fe;
    *(uint *)(DAT_100b3720 + 0x208) = *(uint *)(DAT_100b3720 + 0x208) & 0xffff7fff;
  }
  FUN_10037840();
  CBaseEntity::SUB_DoNothing(this);
  return;
}

/* 10064f40  FUN_10064f40  (325 bytes)
 * undefined FUN_10064f40(void)
 * called by: FUN_10065090
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10064f40(void)

{
  uint uVar1;
  CBaseEntity *this;
  
  if ((*(uint *)(DAT_100b3720 + 0x208) & 0x100) == 0) {
    if ((*(uint *)(DAT_100b3720 + 0x208) & 0x40) == 0) {
      _DAT_100d988c = 100;
      DAT_100d9808 = 10;
      uVar1 = *(uint *)(DAT_100b3720 + 0x208) & 0xffffff7f;
    }
    else {
      _DAT_100d988c = 0x5a;
      DAT_100d9808 = 0x32;
      uVar1 = *(uint *)(DAT_100b3720 + 0x208) & 0xffffffbf;
    }
  }
  else {
    _DAT_100d988c = 0x5a;
    DAT_100d9808 = 0x19;
    uVar1 = *(uint *)(DAT_100b3720 + 0x208) & 0xfffffeff;
  }
  *(uint *)(DAT_100b3720 + 0x208) = uVar1;
  _DAT_100d98d8 = *(float *)(DAT_100b3720 + 0x5c);
  _DAT_100d98dc = *(float *)(DAT_100b3720 + 0x60);
  _DAT_100d98e0 = *(undefined4 *)(DAT_100b3720 + 100);
  FUN_10036480((float *)&DAT_100d98d8);
  if ((*(uint *)(DAT_100b3720 + 0x208) & 0x800000) != 0) {
    FUN_100364d0((float *)(DAT_100b3720 + 0x14),3.0,(float *)&DAT_100d98d8);
  }
  *(float *)(DAT_100b3720 + 0x5c) =
       (float)_DAT_100d988c * _DAT_100d98d8 + *(float *)(DAT_100b3720 + 0x5c);
  *(float *)(DAT_100b3720 + 0x60) =
       (float)_DAT_100d988c * _DAT_100d98dc + *(float *)(DAT_100b3720 + 0x60);
  *(float *)(DAT_100b3720 + 100) = SQRT((float)(DAT_100d9808 * 0x640));
  *(undefined4 *)(DAT_100b3720 + 0xe0) = 0xffffffff;
  *(uint *)(DAT_100b3720 + 0x208) = *(uint *)(DAT_100b3720 + 0x208) & 0xff7fffff;
  FUN_10037840();
  CBaseEntity::SUB_DoNothing(this);
  return;
}

/* 10065090  FUN_10065090  (279 bytes)
 * undefined FUN_10065090(void)
 * called by: PM_PlayerMove
 */
void FUN_10065090(void)

{
  if (((*(byte *)(DAT_100b3720 + 0x45476) & 2) != 0) && (*(int *)(DAT_100b3720 + 0xe0) == -1)) {
    FUN_10064a00();
  }
  if ((*(byte *)(DAT_100b3720 + 0x208) & 1) != 0) {
    *(float *)(DAT_100b3720 + 0x45468) = *(float *)(DAT_100b3720 + 0x45468) * 0.5;
    *(float *)(DAT_100b3720 + 0x4546c) = *(float *)(DAT_100b3720 + 0x4546c) * 0.5;
    *(float *)(DAT_100b3720 + 0x45470) = *(float *)(DAT_100b3720 + 0x45470) * 0.5;
  }
  if ((*(byte *)(DAT_100b3720 + 0x208) & 0x20) != 0) {
    *(undefined4 *)(DAT_100b3720 + 0x45468) = 0;
    *(float *)(DAT_100b3720 + 0x4546c) = *(float *)(DAT_100b3720 + 0x4546c) * 0.3;
    *(float *)(DAT_100b3720 + 0x45470) = *(float *)(DAT_100b3720 + 0x45470) * 0.3;
  }
  if ((*(uint *)(DAT_100b3720 + 0x208) & 0x1c0) != 0) {
    FUN_10064f40();
  }
  if ((*(uint *)(DAT_100b3720 + 0x208) & 0x7000) != 0) {
    FUN_10064e60();
  }
  if ((*(uint *)(DAT_100b3720 + 0x208) & 0x8000) != 0) {
    FUN_10064ef0();
  }
  if ((*(byte *)(DAT_100b3720 + 0x208) & 4) != 0) {
    FUN_10064de0();
  }
  if ((*(byte *)(DAT_100b3720 + 0x208) & 8) != 0) {
    FUN_10064c30();
    return;
  }
  return;
}

/* 100651b0  FUN_100651b0  (731 bytes)
 * undefined FUN_100651b0(void)
 * called by: PM_PlayerMove
 */
void FUN_100651b0(void)

{
  undefined4 uVar1;
  byte_conflict *pbVar2;
  int iVar3;
  void *this;
  undefined4 uVar4;
  
  if (*(int *)(DAT_100b3720 + 0xd0) != 0) {
    *(uint *)(DAT_100b3720 + 200) = *(uint *)(DAT_100b3720 + 200) | 2;
    return;
  }
  if ((*(uint *)(DAT_100b3720 + 0x208) & 0x34) != 0) {
    return;
  }
  if ((*(uint *)(DAT_100b3720 + 0x208) & 0x30c00) != 0) {
    return;
  }
  if (*(float *)(DAT_100b3720 + 0xcc) != 0.0) {
    *(float *)(DAT_100b3720 + 0xcc) =
         *(float *)(DAT_100b3720 + 0xcc) - (float)*(byte *)(DAT_100b3720 + 0x4545a);
    if (0.0 <= *(float *)(DAT_100b3720 + 0xcc)) {
      return;
    }
    *(undefined4 *)(DAT_100b3720 + 0xcc) = 0;
    return;
  }
  if (1 < *(int *)(DAT_100b3720 + 0xe4)) {
    *(undefined4 *)(DAT_100b3720 + 0xe0) = 0xffffffff;
    if (*(int *)(DAT_100b3720 + 0xe8) == -3) {
      *(undefined4 *)(DAT_100b3720 + 100) = 0x42c80000;
    }
    else if (*(int *)(DAT_100b3720 + 0xe8) == -4) {
      *(undefined4 *)(DAT_100b3720 + 100) = 0x42a00000;
    }
    else {
      *(undefined4 *)(DAT_100b3720 + 100) = 0x42480000;
    }
    if (0.0 < *(float *)(DAT_100b3720 + 0xac)) {
      return;
    }
    *(undefined4 *)(DAT_100b3720 + 0xac) = 0x447a0000;
    uVar1 = (**(code **)(DAT_100b3720 + 0x4f588))(0,3);
    switch(uVar1) {
    case 0:
      (**(code **)(DAT_100b3720 + 0x4f5b4))
                (4,s_player_pl_wade1_wav_1009d15c,0x3f800000,0x3f4ccccd,0,100);
      return;
    case 1:
      (**(code **)(DAT_100b3720 + 0x4f5b4))
                (4,s_player_pl_wade2_wav_1009d148,0x3f800000,0x3f4ccccd,0,100);
      return;
    case 2:
      (**(code **)(DAT_100b3720 + 0x4f5b4))
                (4,s_player_pl_wade3_wav_1009d134,0x3f800000,0x3f4ccccd,0,100);
      return;
    case 3:
      (**(code **)(DAT_100b3720 + 0x4f5b4))
                (4,s_player_pl_wade4_wav_1009d120,0x3f800000,0x3f4ccccd,0,100);
      return;
    default:
      return;
    }
  }
  if (*(int *)(DAT_100b3720 + 0xe0) == -1) {
    *(uint *)(DAT_100b3720 + 200) = *(uint *)(DAT_100b3720 + 200) | 2;
    return;
  }
  if ((*(byte *)(DAT_100b3720 + 200) & 2) != 0) {
    return;
  }
  *(undefined4 *)(DAT_100b3720 + 0xe0) = 0xffffffff;
  FUN_10039d50();
  uVar4 = 0x3f800000;
  uVar1 = FUN_100370b0(*(undefined1 *)(DAT_100b3720 + 0x1f0));
  FUN_10036930(uVar1,uVar4);
  pbVar2 = (byte_conflict *)
           (**(code **)(DAT_100b3720 + 0x4f554))(DAT_100b3720 + 0x4f3f0,&DAT_1009ce1c);
  iVar3 = atoi(this,pbVar2);
  DAT_100d9888 = (uint)(iVar3 == 1);
  if ((((*(int *)(DAT_100b3720 + 0x90) == 0) && ((*(uint *)(DAT_100b3720 + 0xb8) & 0x4000) == 0)) ||
      (iVar3 != 1)) ||
     (((*(byte *)(DAT_100b3720 + 0x45476) & 4) == 0 || (*(float *)(DAT_100b3720 + 0x8c) <= 0.0)))) {
    DAT_100d9888 = 0;
  }
  else {
    *(undefined4 *)(DAT_100b3720 + 100) = 0x43c80000;
    *(uint *)(DAT_100b3720 + 0x208) = *(uint *)(DAT_100b3720 + 0x208) | 0x200000;
    if (DAT_100d9888 != 0) goto LAB_10065478;
  }
  *(undefined4 *)(DAT_100b3720 + 100) = 0x436ca4a8;
LAB_10065478:
  FUN_10037840();
  *(uint *)(DAT_100b3720 + 200) = *(uint *)(DAT_100b3720 + 200) | 2;
  return;
}

/* 100654a0  FUN_100654a0  (766 bytes)
 * undefined FUN_100654a0(void)
 * called by: PM_PlayerMove
 */
void FUN_100654a0(void)

{
  float fVar1;
  int iVar2;
  float fVar3;
  int *piVar4;
  float10 fVar5;
  float local_c;
  float local_8;
  float local_4;
  
  fVar3 = SQRT((float)DAT_100b3720[0x1151c] * (float)DAT_100b3720[0x1151c] +
               (float)DAT_100b3720[0x1151a] * (float)DAT_100b3720[0x1151a] +
               (float)DAT_100b3720[0x1151b] * (float)DAT_100b3720[0x1151b]);
  fVar1 = (float)DAT_100b3720[0x7e];
  if (fVar1 != 0.0) {
    if ((float)DAT_100b3720[0x7d] <= fVar1) {
      fVar1 = (float)DAT_100b3720[0x7d];
    }
    DAT_100b3720[0x7d] = (int)fVar1;
  }
  if (((fVar3 != 0.0) && ((float)DAT_100b3720[0x7d] < fVar3)) &&
     (fVar3 = (float)DAT_100b3720[0x7d] / fVar3, 0 < DAT_100b3720[0x7f])) {
    DAT_100b3720[0x1151a] = (int)(fVar3 * (float)DAT_100b3720[0x1151a]);
    DAT_100b3720[0x1151b] = (int)(fVar3 * (float)DAT_100b3720[0x1151b]);
    DAT_100b3720[0x1151c] = (int)(fVar3 * (float)DAT_100b3720[0x1151c]);
  }
  if ((((DAT_100b3720[0x2e] & 0x1001000U) != 0) || (DAT_100b3720[0x34] != 0)) ||
     (((DAT_100b3720[0x82] & 0x10U) != 0 || ((DAT_100b3720[0x82] & 0x10c00U) != 0)))) {
    DAT_100b3720[0x1151a] = 0;
    DAT_100b3720[0x1151b] = 0;
    DAT_100b3720[0x1151c] = 0;
  }
  if ((DAT_100b3720[0x82] & 0x100000U) != 0) {
    DAT_100b3720[0x1151a] = (int)((float)DAT_100b3720[0x1151a] * 0.5);
    DAT_100b3720[0x1151b] = (int)((float)DAT_100b3720[0x1151b] * 0.25);
    DAT_100b3720[0x1151c] = (int)((float)DAT_100b3720[0x1151c] * 0.25);
    if ((*(byte *)((int)DAT_100b3720 + 0x45476) & 2) == 0) {
      DAT_100b3720[0x30] = 0x3f800000;
    }
    else if (0.0 <= (float)DAT_100b3720[0x19]) {
      DAT_100b3720[0x30] = 0x3e99999a;
    }
    else {
      DAT_100b3720[0x30] = 0x3f400000;
    }
  }
  FUN_1003a370((float *)(DAT_100b3720 + 0x28));
  if ((DAT_100b3720[0x34] == 0) && ((*(byte *)(DAT_100b3720 + 0x82) & 2) == 0)) {
    local_c = (float)DAT_100b3720[0x11517] + (float)DAT_100b3720[0x28];
    local_8 = (float)DAT_100b3720[0x11518] + (float)DAT_100b3720[0x29];
    local_4 = (float)DAT_100b3720[0x11519] + (float)DAT_100b3720[0x2a];
    fVar5 = FUN_1003a2d0(&local_c,(float *)(DAT_100b3720 + 0x17),
                         *(float *)(DAT_100b3720[0x13d3c] + 100),
                         *(float *)(DAT_100b3720[0x13d3c] + 0x68));
    DAT_100b3720[0x13] = (int)(float)(fVar5 * (float10)4.0);
    DAT_100b3720[0x11] = (int)local_c;
    DAT_100b3720[0x12] = (int)local_8;
    piVar4 = DAT_100b3720;
    iVar2 = *DAT_100b3720;
    if ((-1 < iVar2) && (iVar2 < 0x20)) {
      *(int *)(&DAT_100d993c + iVar2 * 4) = DAT_100b3720[0x12];
    }
  }
  else {
    iVar2 = *DAT_100b3720;
    piVar4 = DAT_100b3720;
    if ((-1 < iVar2) && (iVar2 < 0x20)) {
      DAT_100b3720[0x12] = *(int *)(&DAT_100d993c + iVar2 * 4);
      piVar4 = DAT_100b3720;
    }
  }
  if (piVar4[0x34] != 0) {
    piVar4[0x22] = -0x3f000000;
    piVar4 = DAT_100b3720;
  }
  if (180.0 < (float)piVar4[0x12]) {
    piVar4[0x12] = (int)((float)piVar4[0x12] - 360.0);
  }
  return;
}

/* 100657a0  FUN_100657a0  (603 bytes)
 * undefined FUN_100657a0(void)
 * called by: PM_PlayerMove
 */
void FUN_100657a0(void)

{
  ushort uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  
  uVar1 = *(ushort *)(DAT_100b3720 + 0x45476);
  uVar2 = *(uint *)(DAT_100b3720 + 200);
  if ((uVar1 & 4) == 0) {
    uVar6 = uVar2 & 0xfffffffb;
  }
  else {
    uVar6 = uVar2 | 4;
  }
  *(uint *)(DAT_100b3720 + 200) = uVar6;
  if (((*(uint *)(DAT_100b3720 + 0x208) & 0x3c) == 0) &&
     ((*(uint *)(DAT_100b3720 + 0x208) & 0x30c00) == 0)) {
    if ((*(int *)(DAT_100b3720 + 0x204) == 0) && (*(int *)(DAT_100b3720 + 0xd0) == 0)) {
      if ((*(uint *)(DAT_100b3720 + 0xb8) & 0x4000) != 0) {
        *(float *)(DAT_100b3720 + 0x45468) = *(float *)(DAT_100b3720 + 0x45468) * 0.333;
        *(float *)(DAT_100b3720 + 0x4546c) = *(float *)(DAT_100b3720 + 0x4546c) * 0.333;
        *(float *)(DAT_100b3720 + 0x45470) = *(float *)(DAT_100b3720 + 0x45470) * 0.333;
      }
      uVar5 = *(ushort *)(DAT_100b3720 + 0x45476) & 4;
      if (((uVar5 != 0) || (*(int *)(DAT_100b3720 + 0x90) != 0)) ||
         ((*(uint *)(DAT_100b3720 + 0xb8) & 0x4000) != 0)) {
        if (uVar5 == 0) goto LAB_100659e8;
        if ((((uVar2 ^ uVar1) & (uint)uVar1 & 4) != 0) &&
           ((*(uint *)(DAT_100b3720 + 0xb8) & 0x4000) == 0)) {
          *(undefined4 *)(DAT_100b3720 + 0x8c) = 0x447a0000;
          *(undefined4 *)(DAT_100b3720 + 0x90) = 1;
        }
        fVar3 = *(float *)(DAT_100b3720 + 0x8c) * 0.001;
        fVar4 = 1.0 - fVar3;
        if (fVar4 < 0.0) {
          fVar4 = 0.0;
        }
        if (*(int *)(DAT_100b3720 + 0x90) != 0) {
          if ((0.6 < fVar3) && (*(int *)(DAT_100b3720 + 0xe0) != -1)) {
            fVar9 = FUN_10039140(fVar4,2.5);
            *(float *)(DAT_100b3720 + 0x88) =
                 (float)(fVar9 * (float10)-2.0 + ((float10)1.0 - fVar9) * (float10)28.0);
            return;
          }
          *(undefined4 *)(DAT_100b3720 + 0xbc) = 1;
          *(undefined4 *)(DAT_100b3720 + 0x88) = 0x41800000;
          *(uint *)(DAT_100b3720 + 0xb8) = *(uint *)(DAT_100b3720 + 0xb8) | 0x4000;
          *(undefined4 *)(DAT_100b3720 + 0x90) = 0;
          if (*(int *)(DAT_100b3720 + 0xe0) != -1) {
            iVar7 = 0x38;
            do {
              iVar8 = iVar7 + 4;
              *(float *)(iVar7 + DAT_100b3720) =
                   *(float *)(iVar7 + DAT_100b3720) -
                   (*(float *)(iVar7 + 0x4f4c8 + DAT_100b3720) -
                   *(float *)(iVar7 + 0x4f4bc + DAT_100b3720));
              iVar7 = iVar8;
            } while (iVar8 < 0x44);
            FUN_10039160(1);
            FUN_10038730();
            return;
          }
        }
      }
    }
    else if ((*(uint *)(DAT_100b3720 + 0xb8) & 0x4000) != 0) {
LAB_100659e8:
      FUN_10039200();
      return;
    }
  }
  return;
}

/* 10065a00  FUN_10065a00  (1333 bytes)
 * undefined FUN_10065a00(void)
 * called by: PM_PlayerMove
 */
void FUN_10065a00(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  float10 fVar10;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  float local_a4 [4];
  float local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88 [4];
  float fStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float fStack_60;
  undefined1 auStack_44 [68];
  
  local_e4 = *(float *)(DAT_100b3720 + 0x45468);
  if (local_e4 < 0.0) {
    local_e4 = local_e4 * 0.8;
  }
  local_a4[3] = *(float *)(DAT_100b3720 + 0x4546c);
  *(undefined4 *)(DAT_100b3720 + 0x1c) = 0;
  *(undefined4 *)(DAT_100b3720 + 0x28) = 0;
  FUN_10036480((float *)(DAT_100b3720 + 0x14));
  FUN_10036480((float *)(DAT_100b3720 + 0x20));
  pfVar4 = (float *)(DAT_100b3720 + 0x14);
  iVar8 = 2;
  pfVar6 = local_a4;
  do {
    pfVar1 = pfVar4 + 3;
    fVar2 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    iVar8 = iVar8 + -1;
    *pfVar6 = local_e4 * fVar2 + local_a4[3] * *pfVar1;
    pfVar6 = pfVar6 + 1;
  } while (iVar8 != 0);
  local_a4[2] = 0.0;
  local_94 = local_a4[0];
  local_90 = local_a4[1];
  local_8c = 0;
  fVar10 = (float10)FUN_10036480(&local_94);
  local_e4 = (float)fVar10;
  if (*(float *)(DAT_100b3720 + 500) < local_e4) {
    FUN_100364d0(local_a4,*(float *)(DAT_100b3720 + 500) / local_e4,local_a4);
    local_e4 = *(float *)(DAT_100b3720 + 500);
  }
  *(undefined4 *)(DAT_100b3720 + 100) = 0;
  FUN_10037dc0(&local_94,local_e4,*(float *)(*(int *)(DAT_100b3720 + 0x4f4f0) + 0x10));
  *(undefined4 *)(DAT_100b3720 + 100) = 0;
  *(float *)(DAT_100b3720 + 0x5c) =
       *(float *)(DAT_100b3720 + 0x74) + *(float *)(DAT_100b3720 + 0x5c);
  *(float *)(DAT_100b3720 + 0x60) =
       *(float *)(DAT_100b3720 + 0x78) + *(float *)(DAT_100b3720 + 0x60);
  *(float *)(DAT_100b3720 + 100) = *(float *)(DAT_100b3720 + 0x7c) + *(float *)(DAT_100b3720 + 100);
  fVar10 = FUN_10036450((float *)(DAT_100b3720 + 0x5c));
  if ((float10)1.0 <= fVar10) {
    iVar8 = *(int *)(DAT_100b3720 + 0xe0);
    local_e0 = *(float *)(DAT_100b3720 + 0x5c) * *(float *)(DAT_100b3720 + 0x10) +
               *(float *)(DAT_100b3720 + 0x38);
    local_dc = *(float *)(DAT_100b3720 + 0x60) * *(float *)(DAT_100b3720 + 0x10) +
               *(float *)(DAT_100b3720 + 0x3c);
    local_d8 = *(float *)(DAT_100b3720 + 0x40);
    piVar5 = (int *)(**(code **)(DAT_100b3720 + 0x4f580))
                              (local_88,(float *)(DAT_100b3720 + 0x38),&local_e0,0,0xffffffff);
    piVar9 = local_88;
    for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar9 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar9 = piVar9 + 1;
    }
    if (fStack_78 == 1.0) {
      *(undefined4 *)(DAT_100b3720 + 0x38) = uStack_74;
      *(undefined4 *)(DAT_100b3720 + 0x3c) = uStack_70;
      *(undefined4 *)(DAT_100b3720 + 0x40) = uStack_6c;
      return;
    }
    if (((iVar8 == -1) && (*(int *)(DAT_100b3720 + 0xe4) == 0)) ||
       (*(float *)(DAT_100b3720 + 0xcc) != 0.0)) {
      return;
    }
    fStack_d4 = *(float *)(DAT_100b3720 + 0x38);
    fStack_d0 = *(float *)(DAT_100b3720 + 0x3c);
    uStack_cc = *(undefined4 *)(DAT_100b3720 + 0x40);
    uStack_b0 = *(undefined4 *)(DAT_100b3720 + 0x5c);
    uStack_ac = *(undefined4 *)(DAT_100b3720 + 0x60);
    uStack_a8 = *(undefined4 *)(DAT_100b3720 + 100);
    FUN_100378a0();
    fStack_c8 = *(float *)(DAT_100b3720 + 0x38);
    fStack_c4 = *(float *)(DAT_100b3720 + 0x3c);
    uStack_c0 = *(undefined4 *)(DAT_100b3720 + 0x40);
    uStack_bc = *(undefined4 *)(DAT_100b3720 + 0x5c);
    uStack_b8 = *(undefined4 *)(DAT_100b3720 + 0x60);
    uStack_b4 = *(undefined4 *)(DAT_100b3720 + 100);
    *(float *)(DAT_100b3720 + 0x38) = fStack_d4;
    *(float *)(DAT_100b3720 + 0x3c) = fStack_d0;
    *(undefined4 *)(DAT_100b3720 + 0x40) = uStack_cc;
    *(undefined4 *)(DAT_100b3720 + 0x5c) = uStack_b0;
    *(undefined4 *)(DAT_100b3720 + 0x60) = uStack_ac;
    *(undefined4 *)(DAT_100b3720 + 100) = uStack_a8;
    local_e0 = *(float *)(DAT_100b3720 + 0x38);
    local_dc = *(float *)(DAT_100b3720 + 0x3c);
    local_d8 = *(float *)(DAT_100b3720 + 0x40) + *(float *)(*(int *)(DAT_100b3720 + 0x4f4f0) + 0x30)
    ;
    piVar5 = (int *)(**(code **)(DAT_100b3720 + 0x4f580))
                              (auStack_44,DAT_100b3720 + 0x38,&local_e0,0,0xffffffff);
    piVar9 = local_88;
    for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar9 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar9 = piVar9 + 1;
    }
    if ((local_88[1] == 0) && (local_88[0] == 0)) {
      *(undefined4 *)(DAT_100b3720 + 0x38) = uStack_74;
      *(undefined4 *)(DAT_100b3720 + 0x3c) = uStack_70;
      *(undefined4 *)(DAT_100b3720 + 0x40) = uStack_6c;
    }
    FUN_100378a0();
    local_e0 = *(float *)(DAT_100b3720 + 0x38);
    local_dc = *(float *)(DAT_100b3720 + 0x3c);
    local_d8 = *(float *)(DAT_100b3720 + 0x40) - *(float *)(*(int *)(DAT_100b3720 + 0x4f4f0) + 0x30)
    ;
    piVar5 = (int *)(**(code **)(DAT_100b3720 + 0x4f580))
                              (auStack_44,DAT_100b3720 + 0x38,&local_e0,0,0xffffffff);
    piVar9 = local_88;
    for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar9 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar9 = piVar9 + 1;
    }
    if (0.7 <= fStack_60) {
      if ((local_88[1] == 0) && (local_88[0] == 0)) {
        *(undefined4 *)(DAT_100b3720 + 0x38) = uStack_74;
        *(undefined4 *)(DAT_100b3720 + 0x3c) = uStack_70;
        *(undefined4 *)(DAT_100b3720 + 0x40) = uStack_6c;
      }
      *(undefined4 *)(DAT_100b3720 + 0x2c) = *(undefined4 *)(DAT_100b3720 + 0x38);
      *(undefined4 *)(DAT_100b3720 + 0x30) = *(undefined4 *)(DAT_100b3720 + 0x3c);
      *(undefined4 *)(DAT_100b3720 + 0x34) = *(undefined4 *)(DAT_100b3720 + 0x40);
      fVar3 = *(float *)(DAT_100b3720 + 0x30) - fStack_d0;
      fVar2 = *(float *)(DAT_100b3720 + 0x2c) - fStack_d4;
      if ((fStack_c4 - fStack_d0) * (fStack_c4 - fStack_d0) +
          (fStack_c8 - fStack_d4) * (fStack_c8 - fStack_d4) <= fVar3 * fVar3 + fVar2 * fVar2) {
        *(undefined4 *)(DAT_100b3720 + 100) = uStack_b4;
        return;
      }
    }
    *(float *)(DAT_100b3720 + 0x38) = fStack_c8;
    *(float *)(DAT_100b3720 + 0x3c) = fStack_c4;
    *(undefined4 *)(DAT_100b3720 + 0x40) = uStack_c0;
    *(undefined4 *)(DAT_100b3720 + 0x5c) = uStack_bc;
    *(undefined4 *)(DAT_100b3720 + 0x60) = uStack_b8;
    *(undefined4 *)(DAT_100b3720 + 100) = uStack_b4;
    return;
  }
  *(undefined4 *)(DAT_100b3720 + 0x5c) = 0;
  *(undefined4 *)(DAT_100b3720 + 0x60) = 0;
  *(undefined4 *)(DAT_100b3720 + 100) = 0;
  return;
}

/* 10065f40  FUN_10065f40  (935 bytes)
 * float * FUN_10065f40(float * param_1, float * param_2)
 * called by: FUN_10066370
 */
float * __cdecl FUN_10065f40(float *param_1,float *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  Vector local_100;
  int iStack_f4;
  Vector VStack_f0;
  Vector VStack_e4;
  Vector VStack_d8;
  int iStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  Vector VStack_bc;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  Vector VStack_a4;
  Vector VStack_98;
  undefined1 auStack_8c [16];
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  Vector VStack_54;
  Vector VStack_48;
  Vector VStack_3c;
  Vector VStack_30;
  Vector VStack_24;
  Vector VStack_18;
  Vector VStack_c;
  
  local_100.x = 0.0;
  local_100.y = 0.0;
  local_100.z = 0.0;
  iVar1 = (*g_engfuncs.pfnRandomLong)(0,0x10);
  iVar5 = 1;
  iVar1 = iVar1 * 0x16;
  do {
    iStack_f4 = iVar1;
    iStack_cc = (*g_engfuncs.pfnRandomLong)(0x80,0x400);
    fVar6 = (float10)fcos((float10)iStack_f4 * (float10)0.017453292519943295);
    local_100.x = (float)fVar6;
    fVar6 = (float10)fsin((float10)iStack_f4 * (float10)0.017453292519943295);
    local_100.y = (float)fVar6;
    fVar6 = Vector::Length(&local_100.x);
    if (fVar6 == (float10)0.0) {
      puVar2 = &uStack_b0;
      uStack_b0 = 0;
      uStack_ac = 0;
      uStack_a8 = 0x3f800000;
    }
    else {
      fVar6 = (float10)1.0 / fVar6;
      puVar2 = (undefined4 *)
               Vector::Vector(&VStack_c,(float)(fVar6 * (float10)local_100.x),
                              (float)(fVar6 * (float10)local_100.y),
                              (float)((float10)local_100.z * fVar6));
    }
    Vector::Vector(&VStack_f0,puVar2);
    fStack_c0 = (float)iStack_cc;
    fStack_c8 = VStack_f0.x * fStack_c0;
    local_100.x = VStack_f0.x;
    local_100.y = VStack_f0.y;
    fStack_c4 = VStack_f0.y * fStack_c0;
    local_100.z = VStack_f0.z;
    fStack_c0 = VStack_f0.z * fStack_c0;
    Vector::Vector(&VStack_bc,&fStack_c8);
    puVar2 = (undefined4 *)
             Vector::Vector(&VStack_24,VStack_bc.x + *param_2,VStack_bc.y + param_2[1],
                            VStack_bc.z + param_2[2]);
    Vector::Vector(&VStack_54,puVar2);
    UTIL_TraceLine(param_2,&VStack_54,1,0,auStack_8c);
    if (1.0 <= fStack_7c) {
      puVar2 = (undefined4 *)
               Vector::Vector(&VStack_a4,local_100.x * 64.0,local_100.y * 64.0,local_100.z * 64.0);
      Vector::Vector(&VStack_d8,puVar2);
      puVar2 = (undefined4 *)
               Vector::Vector(&VStack_98,fStack_78 - VStack_d8.x,fStack_74 - VStack_d8.y,
                              fStack_70 - VStack_d8.z);
      Vector::Vector(&VStack_48,puVar2);
      iVar3 = FUN_10077360(&VStack_48);
      if (iVar3 != -2) {
        pfVar4 = (float *)Vector::operator*(&local_100,&VStack_98.x,64.0);
        param_2 = (float *)FUN_100148b0(&fStack_78,&VStack_a4.x,pfVar4);
        break;
      }
    }
    else {
      puVar2 = (undefined4 *)
               Vector::Vector(&VStack_18,local_100.x * 64.0,local_100.y * 64.0,local_100.z * 64.0);
      Vector::Vector(&VStack_e4,puVar2);
      puVar2 = (undefined4 *)
               Vector::Vector(&VStack_30,fStack_78 - VStack_e4.x,fStack_74 - VStack_e4.y,
                              fStack_70 - VStack_e4.z);
      Vector::Vector(&VStack_3c,puVar2);
      iVar3 = FUN_10077360(&VStack_3c);
      if (iVar3 != -2) {
        puVar2 = (undefined4 *)
                 Vector::Vector(&VStack_98,local_100.x * 64.0,local_100.y * 64.0,local_100.z * 64.0)
        ;
        Vector::Vector(&VStack_d8,puVar2);
        puVar2 = (undefined4 *)
                 Vector::Vector(&VStack_a4,fStack_78 - VStack_d8.x,fStack_74 - VStack_d8.y,
                                fStack_70 - VStack_d8.z);
        Vector::Vector(&VStack_e4,puVar2);
        *param_1 = VStack_e4.x;
        param_1[1] = VStack_e4.y;
        param_1[2] = VStack_e4.z;
        return param_1;
      }
    }
    iVar1 = iVar1 + 0x16;
    iVar5 = iVar5 + 1;
    iStack_f4 = iVar1;
  } while (iVar5 < 0x11);
  Vector::Vector((Vector *)param_1,param_2);
  return param_1;
}

/* 100662f0  FUN_100662f0  (114 bytes)
 * uint FUN_100662f0(uint param_1)
 * called by: CTSGameRules::Think, CTSPowerUp::SetupPowerUp
 */
uint FUN_100662f0(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint local_24 [9];
  
  puVar3 = local_24;
  puVar4 = local_24;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar5 = 0;
  iVar2 = 0;
  do {
    uVar1 = 1 << ((byte)iVar2 & 0x1f);
    if (((param_1 & uVar1) != 0) &&
       (((DAT_100c62cd == '\0' || ((uVar1 & 0x100) == 0)) && ((uVar1 & 0x80) == 0)))) {
      *puVar3 = uVar1;
      iVar5 = iVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 9);
  if (iVar5 != 0) {
    iVar2 = (*g_engfuncs.pfnRandomLong)(0,iVar5 + -1);
    return local_24[iVar2];
  }
  return 0;
}

/* 10066370  FUN_10066370  (451 bytes)
 * undefined4 FUN_10066370(uint param_1)
 * called by: CTSGameRules::Think
 */
undefined4 FUN_10066370(uint param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  int lHigh;
  bool bVar14;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float afStack_d0 [3];
  char local_c4 [64];
  int local_84 [32];
  undefined4 uStack_4;
  
  uVar8 = 0xffffffff;
  pcVar12 = s_info_player_deathmatch_100a23fc;
  do {
    pcVar13 = pcVar12;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar13 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar13;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pcVar12 = pcVar13 + -uVar8;
  pcVar13 = local_c4;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar13 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar13 = pcVar13 + 1;
  }
  lHigh = 0;
  iVar4 = UTIL_FindEntityByClassname(0,local_c4);
  if (iVar4 != 0) {
    piVar7 = local_84;
    do {
      if (0x1f < lHigh) break;
      *piVar7 = iVar4;
      lHigh = lHigh + 1;
      piVar7 = piVar7 + 1;
      iVar4 = UTIL_FindEntityByClassname(iVar4,local_c4);
    } while (iVar4 != 0);
    if (lHigh != 0) {
      do {
        lHigh = lHigh + -1;
        if (lHigh < 0) {
          return 0;
        }
        iVar4 = (*g_engfuncs.pfnRandomLong)(0,lHigh);
        pfVar5 = FUN_10065f40(afStack_d0,(float *)(*(int *)(local_84[iVar4] + 4) + 8));
        fStack_dc = *pfVar5;
        fStack_d8 = pfVar5[1];
        fStack_d4 = pfVar5[2];
        bVar3 = true;
        iVar6 = FUN_10076410(0,&fStack_dc,0x43000000);
        if (iVar6 == 0) {
LAB_100664f5:
          piVar7 = CTSPowerUp::CreatePowerUp(param_1,-1);
          iVar4 = piVar7[1];
          *(float *)(iVar4 + 8) = fStack_dc;
          *(float *)(iVar4 + 0xc) = fStack_d8;
          *(float *)(iVar4 + 0x10) = fStack_d4;
          return 1;
        }
        do {
          if (!bVar3) goto LAB_100664af;
          pcVar12 = s_ts_powerup_100a3f20;
          pbVar10 = (byte *)(gpGlobals->pStringBase + **(int **)(iVar6 + 4));
          do {
            bVar2 = *pbVar10;
            bVar14 = bVar2 < (byte)*pcVar12;
            if (bVar2 != *pcVar12) {
LAB_10066487:
              iVar11 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
              goto LAB_1006648c;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar10[1];
            bVar14 = bVar2 < (byte)pcVar12[1];
            if (bVar2 != pcVar12[1]) goto LAB_10066487;
            pbVar10 = pbVar10 + 2;
            pcVar12 = pcVar12 + 2;
          } while (bVar2 != 0);
          iVar11 = 0;
LAB_1006648c:
          if (iVar11 == 0) {
            bVar3 = false;
          }
          iVar6 = FUN_10076410(iVar6,&fStack_dc,0x43000000);
        } while (iVar6 != 0);
        if (bVar3) goto LAB_100664f5;
LAB_100664af:
        uStack_4 = 0;
        if (iVar4 < 0x1f) {
          piVar7 = local_84 + iVar4;
          iVar4 = 0x1f - iVar4;
          do {
            *piVar7 = piVar7[1];
            piVar7 = piVar7 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      } while (!bVar3);
    }
  }
  return 0;
}

/* 10067080  FUN_10067080  (94 bytes)
 * float10 FUN_10067080(float param_1, char param_2)
 * called by: FUN_10047280
 */
float10 __cdecl FUN_10067080(float param_1,char param_2)

{
  float10 fVar1;
  
  if (param_2 == '\0') {
    fVar1 = (float10)1.0;
  }
  else {
    fVar1 = (float10)10.0;
  }
  if (param_1 < 0.99) {
    fVar1 = ((float10)1.0 - (float10)param_1 * (float10)param_1) * fVar1;
    if (fVar1 < (float10)1.0) {
      fVar1 = (float10)1.0;
    }
    return (float10)param_1 / fVar1;
  }
  return (float10)1.0;
}

/* 100670f0  FUN_100670f0  (41 bytes)
 * undefined FUN_100670f0()
 */
undefined4 * FUN_100670f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_100d99d0;
  for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_100da1d0;
  for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return &DAT_100d99d0;
}

/* 10067120  FUN_10067120  (64 bytes)
 * int FUN_10067120(int * param_1)
 * called by: CTSParticle::Spawn
 */
int __thiscall FUN_10067120(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 != (int *)0x0) {
    iVar1 = 0;
    piVar2 = (int *)((int)this + 0x800);
    do {
      if (*piVar2 == 0) {
        *(int **)((int)this + iVar1 * 4 + 0x800) = param_1;
        *(undefined1 *)(param_1 + 1) = 1;
        param_1[2] = 0;
        *param_1 = iVar1;
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < 0x200);
  }
  return -1;
}

/* 10067160  FUN_10067160  (22 bytes)
 * undefined FUN_10067160(undefined4 * param_1)
 * called by: pfnServerDeactivate
 */
void __fastcall FUN_10067160(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0x200;
  do {
    param_1[0x200] = 0;
    *param_1 = 0;
    param_1 = param_1 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

/* 10067fe0  FUN_10067fe0  (326 bytes)
 * undefined FUN_10067fe0(char param_1)
 * called by: CBasePlayer::Observer_HandleButtons, CBasePlayer::Observer_Idle, FUN_10068270
 */
void __thiscall FUN_10067fe0(void *this,char param_1)

{
  edict_t *pEdict;
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)((int)this + 0x748) == 0) {
    pEdict = *(edict_t **)(*(int *)((int)this + 4) + 0x208);
  }
  else {
    pEdict = *(edict_t **)(*(int *)(*(int *)((int)this + 0x748) + 4) + 0x208);
  }
  iVar1 = (*g_engfuncs.pfnIndexOfEdict)(pEdict);
  *(undefined4 *)((int)this + 0x748) = 0;
  iVar4 = iVar1;
  while( true ) {
    iVar4 = iVar4 + (-(uint)(param_1 != '\0') & 0xfffffffe) + 1;
    if (gpGlobals->maxClients < iVar4) {
      iVar4 = 1;
    }
    else if (iVar4 < 1) {
      iVar4 = gpGlobals->maxClients;
    }
    piVar2 = (int *)UTIL_PlayerByIndex(iVar4);
    if (((((piVar2 != (int *)0x0) && (piVar2 != this)) && (*(int *)(piVar2[1] + 0x244) == 0)) &&
        (((*(byte *)(piVar2[1] + 0x118) & 0x80) == 0 &&
         (iVar3 = (**(code **)(*piVar2 + 0xac))(), iVar3 != 0)))) &&
       ((((TSGameRules != '\x03' && ((TSGameRules != '\x02' && (DAT_102efbc4 == 0)))) ||
         (*(float *)((int)this + 0x75c) < 0.0)) ||
        (iVar3 = (**(code **)(*g_pGameRules + 0xc4))(this,piVar2), iVar3 == 1)))) break;
    if (iVar4 == iVar1) {
LAB_100680d3:
      if (*(int *)((int)this + 0x748) == 0) {
        FUN_10068270(this,3);
        return;
      }
      iVar4 = (*g_engfuncs.pfnIndexOfEdict)
                        (*(edict_t **)(*(int *)(*(int *)((int)this + 0x748) + 4) + 0x208));
      *(int *)(*(int *)((int)this + 4) + 0x248) = iVar4;
      UTIL_SetOrigin(*(int *)((int)this + 4),*(int *)(*(int *)((int)this + 0x748) + 4) + 8);
      return;
    }
  }
  *(int **)((int)this + 0x748) = piVar2;
  goto LAB_100680d3;
}

/* 10068270  FUN_10068270  (405 bytes)
 * undefined FUN_10068270(int param_1)
 * called by: CBasePlayer::Observer_HandleButtons, CBasePlayer::StartObserver, FUN_10067fe0
 */
void __thiscall FUN_10068270(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (param_1 == *(int *)(iVar1 + 0x244)) {
    return;
  }
  do {
    *(undefined4 *)(iVar1 + 0x174) = DAT_100ae498;
    *(undefined4 *)(iVar1 + 0x178) = DAT_100ae49c;
    *(undefined4 *)(iVar1 + 0x17c) = DAT_100ae4a0;
    *(undefined4 *)(*(int *)((int)this + 4) + 0xbc) = 0;
    if (param_1 == 3) {
      *(undefined4 *)(*(int *)((int)this + 4) + 0x244) = 3;
      *(undefined4 *)(*(int *)((int)this + 4) + 0x248) = 0;
      (*g_engfuncs.pfnSetClientMaxspeed)(*(edict_t **)(*(int *)((int)this + 4) + 0x208),420.0);
      return;
    }
    if (param_1 == 5) {
      if ((*(int *)((int)this + 0x748) != 0) ||
         (FUN_10067fe0(this,'\0'), *(int *)((int)this + 0x748) != 0)) {
        *(undefined4 *)(*(int *)((int)this + 4) + 0x244) = 5;
LAB_100683df:
        iVar1 = (*g_engfuncs.pfnIndexOfEdict)
                          (*(edict_t **)(*(int *)(*(int *)((int)this + 0x748) + 4) + 0x208));
        *(int *)(*(int *)((int)this + 4) + 0x248) = iVar1;
        return;
      }
    }
    else if (param_1 == 1) {
      if ((*(int *)((int)this + 0x748) != 0) ||
         (FUN_10067fe0(this,'\0'), *(int *)((int)this + 0x748) != 0)) {
        *(undefined4 *)(*(int *)((int)this + 4) + 0x244) = 1;
        iVar1 = (*g_engfuncs.pfnIndexOfEdict)
                          (*(edict_t **)(*(int *)(*(int *)((int)this + 0x748) + 4) + 0x208));
        *(int *)(*(int *)((int)this + 4) + 0x248) = iVar1;
        return;
      }
    }
    else {
      if (param_1 != 2) {
        return;
      }
      if ((*(int *)((int)this + 0x748) != 0) ||
         (FUN_10067fe0(this,'\0'), *(int *)((int)this + 0x748) != 0)) {
        *(undefined4 *)(*(int *)((int)this + 4) + 0x244) = 2;
        goto LAB_100683df;
      }
    }
    iVar1 = *(int *)((int)this + 4);
    param_1 = 3;
    if (*(int *)(iVar1 + 0x244) == 3) {
      return;
    }
  } while( true );
}

/* 10068410  FUN_10068410  (48 bytes)
 * undefined FUN_10068410(undefined4 param_1)
 * called by: CBasePlayer::TSInit
 */
void __thiscall FUN_10068410(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x40) = param_1;
  return;
}

/* 100688f0  FUN_100688f0  (58 bytes)
 * bool FUN_100688f0(int param_1)
 * called by: FUN_10068dc0, FUN_10068fb0, FUN_10069480, FUN_1006aa30
 */
bool __fastcall FUN_100688f0(int param_1)

{
  int iVar1;
  
  if (*(char *)(*(int *)(param_1 + 0x40) + 0x7a5) != '\0') {
    return true;
  }
  iVar1 = CBaseMonster::ShouldFadeOnDeath();
  return (0x51 - *(int *)(*(int *)(param_1 + 0x40) + 0x534)) - iVar1 < 0x2a;
}

/* 10068930  FUN_10068930  (58 bytes)
 * bool FUN_10068930(int param_1)
 * called by: FUN_10068dc0, FUN_10069480
 */
bool __fastcall FUN_10068930(int param_1)

{
  int iVar1;
  
  if (*(char *)(*(int *)(param_1 + 0x40) + 0x7a5) != '\0') {
    return true;
  }
  iVar1 = CBaseMonster::ShouldFadeOnDeath();
  return (0x51 - *(int *)(*(int *)(param_1 + 0x40) + 0x534)) - iVar1 < 0x34;
}

/* 10068970  FUN_10068970  (58 bytes)
 * bool FUN_10068970(int param_1)
 * called by: FUN_10069480, FUN_1006aa30
 */
bool __fastcall FUN_10068970(int param_1)

{
  int iVar1;
  
  if (*(char *)(*(int *)(param_1 + 0x40) + 0x7a5) != '\0') {
    return true;
  }
  iVar1 = CBaseMonster::ShouldFadeOnDeath();
  return (0x51 - *(int *)(*(int *)(param_1 + 0x40) + 0x534)) - iVar1 < 0x3e;
}

/* 100689b0  FUN_100689b0  (455 bytes)
 * undefined FUN_100689b0(undefined4 * param_1)
 * called by: FUN_10069310
 */
void __fastcall FUN_100689b0(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  void *this;
  float10 fVar6;
  longlong lVar7;
  undefined4 uStack00000014;
  
  fVar6 = (float10)(**(code **)(*(int *)param_1[0x10] + 8))();
  if (fVar6 <= (float10)0.99) {
    UTIL_MakeVectors(*(int *)(param_1[0x10] + 4) + 0x74);
    fVar1 = gpGlobals->v_forward[0];
    fVar2 = gpGlobals->v_forward[1];
    fVar3 = gpGlobals->v_forward[2];
    *(undefined1 *)(param_1 + 0xb) = 1;
    param_1[8] = -fVar1;
    *param_1 = 0x3f0ccccd;
    param_1[9] = -fVar2;
    param_1[10] = -fVar3;
    param_1[0xd] = gpGlobals->time + 0.55;
    (*g_engfuncs.pfnMessageBegin)
              (1,DAT_100d9788,(float *)0x0,*(edict_t **)(*(int *)(param_1[0x10] + 4) + 0x208));
    lVar7 = __ftol();
    (*g_engfuncs.pfnWriteByte)((int)lVar7);
    (*g_engfuncs.pfnMessageEnd)();
    *(uint *)(*(int *)(param_1[0x10] + 4) + 0x250) =
         *(uint *)(*(int *)(param_1[0x10] + 4) + 0x250) | 4;
    *(uint *)(*(int *)(param_1[0x10] + 4) + 0x250) =
         *(uint *)(*(int *)(param_1[0x10] + 4) + 0x250) | 0x20;
    *(undefined4 *)(param_1[0x10] + 0x28c) = 3;
    param_1[0xc] = 0x3f0ccccd;
    iVar5 = *(int *)(param_1[0x10] + 4);
    *(undefined4 *)(iVar5 + 0x174) = DAT_100ae498;
    *(undefined4 *)(iVar5 + 0x178) = DAT_100ae49c;
    *(undefined4 *)(iVar5 + 0x17c) = DAT_100ae4a0;
    CTSAnimation::Animate((CTSAnimation *)((int *)param_1[0x10] + 0x9e),(int *)param_1[0x10],0x36);
    uVar4 = *(undefined4 *)(*(int *)(param_1[0x10] + 4) + 0x208);
    (*g_engfuncs.pfnRandomLong)(0,0x1f);
    EMIT_SOUND_DYN(this,uVar4,4,s_player_land_wav_100a595c,0x3f800000,0x3f4ccccd,0);
    (*g_engfuncs.pfnMessageBegin)
              (4,DAT_100d97d8,(float *)(*(int *)(param_1[0x10] + 4) + 8),(edict_t *)0x0);
    iVar5 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)(param_1[0x10] + 4) + 0x208));
    (*g_engfuncs.pfnWriteByte)(iVar5);
    (*g_engfuncs.pfnWriteByte)(2);
    uStack00000014 = 0x10068b71;
    (*g_engfuncs.pfnMessageEnd)();
  }
  return;
}

/* 10068b80  FUN_10068b80  (571 bytes)
 * undefined FUN_10068b80(float * param_1)
 * called by: FUN_10069310, FUN_10069910
 */
void __fastcall FUN_10068b80(float *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  void *this;
  longlong lVar5;
  int iStack00000004;
  float in_stack_00000008;
  undefined4 uStack00000014;
  
  UTIL_MakeVectors(*(int *)((int)param_1[0x10] + 4) + 0x74);
  fVar1 = gpGlobals->v_forward[1];
  fVar2 = gpGlobals->v_forward[2];
  param_1[8] = -gpGlobals->v_forward[0];
  param_1[9] = -fVar1;
  param_1[10] = -fVar2;
  *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
       *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xffefffff;
  *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
       *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) | 4;
  *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
       *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) | 0x1000;
  *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
       *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) | 0x10000;
  *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
       *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xfffdffff;
  iVar4 = *(int *)((int)param_1[0x10] + 4);
  *(undefined4 *)(iVar4 + 0x174) = DAT_100ae498;
  *(undefined4 *)(iVar4 + 0x178) = DAT_100ae49c;
  *(undefined4 *)(iVar4 + 0x17c) = DAT_100ae4a0;
  CTSAnimation::Animate((CTSAnimation *)((int *)param_1[0x10] + 0x9e),(int *)param_1[0x10],0x37);
  *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x11c) = 0x3f400000;
  fVar1 = param_1[0xe] + 0.35;
  param_1[0xe] = fVar1;
  if (fVar1 <= 0.5) {
    fVar1 = 0.5;
  }
  *param_1 = fVar1;
  (*g_engfuncs.pfnMessageBegin)
            (1,DAT_100d9788,(float *)0x0,*(edict_t **)(*(int *)((int)param_1[0x10] + 4) + 0x208));
  lVar5 = __ftol();
  (*g_engfuncs.pfnWriteByte)((int)lVar5);
  (*g_engfuncs.pfnMessageEnd)();
  uVar3 = *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x208);
  (*g_engfuncs.pfnRandomLong)(0,0x1f);
  EMIT_SOUND_DYN(this,uVar3,4,s_player_airwheel_wav_100a5948,0x3f800000,0x3f4ccccd,0);
  (**(code **)(*(int *)param_1[0x10] + 8))();
  iStack00000004 = (*g_engfuncs.pfnRandomLong)(0,10);
  if (5.0 < (float)iStack00000004 + in_stack_00000008) {
    (*g_engfuncs.pfnMessageBegin)
              (4,DAT_100d97d8,(float *)(*(int *)((int)param_1[0x10] + 4) + 8),(edict_t *)0x0);
    iVar4 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)((int)param_1[0x10] + 4) + 0x208));
    (*g_engfuncs.pfnWriteByte)(iVar4);
    (*g_engfuncs.pfnWriteByte)(2);
    uStack00000014 = 0x10068db5;
    (*g_engfuncs.pfnMessageEnd)();
  }
  return;
}

/* 10068dc0  FUN_10068dc0  (496 bytes)
 * undefined FUN_10068dc0(undefined4 * param_1)
 * called by: FUN_10069310
 */
void __fastcall FUN_10068dc0(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  void *this;
  longlong lVar6;
  
  UTIL_MakeVectors(*(int *)(param_1[0x10] + 4) + 0x74);
  fVar1 = gpGlobals->v_forward[1];
  fVar2 = gpGlobals->v_forward[2];
  param_1[8] = -gpGlobals->v_forward[0];
  param_1[9] = -fVar1;
  param_1[10] = -fVar2;
  *(uint *)(*(int *)(param_1[0x10] + 4) + 0x250) =
       *(uint *)(*(int *)(param_1[0x10] + 4) + 0x250) & 0xffefffff;
  *(uint *)(*(int *)(param_1[0x10] + 4) + 0x250) =
       *(uint *)(*(int *)(param_1[0x10] + 4) + 0x250) | 4;
  *(uint *)(*(int *)(param_1[0x10] + 4) + 0x250) =
       *(uint *)(*(int *)(param_1[0x10] + 4) + 0x250) | 0x8000;
  *(uint *)(*(int *)(param_1[0x10] + 4) + 0x250) =
       *(uint *)(*(int *)(param_1[0x10] + 4) + 0x250) | 0x20000;
  *(uint *)(*(int *)(param_1[0x10] + 4) + 0x250) =
       *(uint *)(*(int *)(param_1[0x10] + 4) + 0x250) & 0xfffeffff;
  iVar4 = *(int *)(param_1[0x10] + 4);
  *(undefined4 *)(iVar4 + 0x174) = DAT_100ae498;
  *(undefined4 *)(iVar4 + 0x178) = DAT_100ae49c;
  *(undefined4 *)(iVar4 + 0x17c) = DAT_100ae4a0;
  CTSAnimation::Animate((CTSAnimation *)((int *)param_1[0x10] + 0x9e),(int *)param_1[0x10],0x38);
  *(undefined4 *)(*(int *)(param_1[0x10] + 4) + 0x11c) = 0x3f800000;
  bVar5 = FUN_100688f0((int)param_1);
  if (CONCAT31(extraout_var,bVar5) == 0) {
    bVar5 = FUN_10068930((int)param_1);
    if (CONCAT31(extraout_var_00,bVar5) == 0) {
      fVar1 = (float)param_1[0xe] + 0.75;
    }
    else {
      fVar1 = (float)param_1[0xe] + 0.5;
    }
  }
  else {
    fVar1 = (float)param_1[0xe] + 0.3;
  }
  param_1[0xe] = fVar1;
  if ((float)param_1[0xe] <= 0.5) {
    uVar3 = 0x3f000000;
  }
  else {
    uVar3 = param_1[0xe];
  }
  *param_1 = uVar3;
  (*g_engfuncs.pfnMessageBegin)
            (1,DAT_100d9788,(float *)0x0,*(edict_t **)(*(int *)(param_1[0x10] + 4) + 0x208));
  lVar6 = __ftol();
  (*g_engfuncs.pfnWriteByte)((int)lVar6);
  (*g_engfuncs.pfnMessageEnd)();
  uVar3 = *(undefined4 *)(*(int *)(param_1[0x10] + 4) + 0x208);
  (*g_engfuncs.pfnRandomLong)(0,0x1f);
  EMIT_SOUND_DYN(this,uVar3,4,s_player_airwheel_wav_100a5948,0x3f800000,0x3f4ccccd,0);
  param_1[0xf] = param_1[0xf] + 1;
  return;
}

/* 10068fb0  FUN_10068fb0  (249 bytes)
 * undefined4 FUN_10068fb0(int param_1)
 * called by: FUN_10069310, FUN_10069910
 */
undefined4 __fastcall FUN_10068fb0(int param_1)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  undefined3 extraout_var;
  undefined2 extraout_var_00;
  undefined4 uVar4;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  undefined1 local_38 [16];
  float local_28;
  float local_c;
  
  bVar3 = FUN_100688f0(param_1);
  uVar4 = 0;
  if (CONCAT31(extraout_var,bVar3) != 0) {
    UTIL_MakeVectors(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x74);
    iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 4);
    local_50 = gpGlobals->v_forward[0] * 48.0 + *(float *)(iVar2 + 8);
    local_4c = gpGlobals->v_forward[1] * 48.0 + *(float *)(iVar2 + 0xc);
    local_48 = gpGlobals->v_forward[2] * 48.0 + *(float *)(iVar2 + 0x10);
    local_40 = local_4c;
    local_3c = local_48;
    UTIL_TraceLine(*(int *)(*(int *)(param_1 + 0x40) + 4) + 8,&local_50,1,
                   *(undefined4 *)(iVar2 + 0x208),local_38);
    uVar4 = CONCAT22(extraout_var_00,
                     (ushort)(local_28 < 1.0) << 8 | (ushort)NAN(local_28) << 10 |
                     (ushort)(local_28 == 1.0) << 0xe);
    if (local_28 < 1.0) {
      uVar4 = CONCAT22(extraout_var_00,
                       (ushort)(local_c < 0.5) << 8 | (ushort)NAN(local_c) << 10 |
                       (ushort)(local_c == 0.5) << 0xe);
      if (local_c < 0.5) {
        uVar4 = CONCAT22(extraout_var_00,
                         (ushort)(local_c < -0.5) << 8 | (ushort)NAN(local_c) << 10 |
                         (ushort)(local_c == -0.5) << 0xe);
        if (local_c >= -0.5 && (local_c == -0.5) == 0) {
          iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 4);
          fVar1 = *(float *)(iVar2 + 0x28);
          uVar4 = CONCAT22((short)((uint)iVar2 >> 0x10),
                           (ushort)(fVar1 < -370.0) << 8 | (ushort)NAN(fVar1) << 10 |
                           (ushort)(fVar1 == -370.0) << 0xe);
          if (fVar1 >= -370.0 && (fVar1 == -370.0) == 0) {
            return CONCAT31((int3)((uint)uVar4 >> 8),1);
          }
        }
      }
    }
  }
  return uVar4;
}

/* 100690b0  FUN_100690b0  (251 bytes)
 * uint FUN_100690b0(int param_1)
 * called by: FUN_10069310, FUN_10069910
 */
uint __fastcall FUN_100690b0(int param_1)

{
  float fVar1;
  int iVar2;
  undefined2 extraout_var;
  uint uVar3;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  undefined1 local_38 [16];
  float local_28;
  float local_c;
  
  uVar3 = *(uint *)(*(int *)(param_1 + 0x40) + 4);
  if ((*(uint *)(uVar3 + 0x1a4) & 0x200) == 0) {
    UTIL_MakeVectors(uVar3 + 0x74);
    iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 4);
    local_50 = *(float *)(iVar2 + 8) - gpGlobals->v_forward[0] * 48.0;
    local_4c = *(float *)(iVar2 + 0xc) - gpGlobals->v_forward[1] * 48.0;
    local_48 = *(float *)(iVar2 + 0x10) - gpGlobals->v_forward[2] * 48.0;
    local_40 = local_4c;
    local_3c = local_48;
    UTIL_TraceLine(*(int *)(*(int *)(param_1 + 0x40) + 4) + 8,&local_50,1,
                   *(undefined4 *)(iVar2 + 0x208),local_38);
    uVar3 = CONCAT22(extraout_var,
                     (ushort)(local_28 < 1.0) << 8 | (ushort)NAN(local_28) << 10 |
                     (ushort)(local_28 == 1.0) << 0xe);
    if (local_28 < 1.0) {
      uVar3 = CONCAT22(extraout_var,
                       (ushort)(local_c < 0.5) << 8 | (ushort)NAN(local_c) << 10 |
                       (ushort)(local_c == 0.5) << 0xe);
      if (local_c < 0.5) {
        uVar3 = CONCAT22(extraout_var,
                         (ushort)(local_c < -0.5) << 8 | (ushort)NAN(local_c) << 10 |
                         (ushort)(local_c == -0.5) << 0xe);
        if (local_c >= -0.5 && (local_c == -0.5) == 0) {
          iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 4);
          fVar1 = *(float *)(iVar2 + 0x28);
          uVar3 = CONCAT22((short)((uint)iVar2 >> 0x10),
                           (ushort)(fVar1 < -370.0) << 8 | (ushort)NAN(fVar1) << 10 |
                           (ushort)(fVar1 == -370.0) << 0xe);
          if (fVar1 >= -370.0 && (fVar1 == -370.0) == 0) {
            return CONCAT31((int3)(uVar3 >> 8),1);
          }
        }
      }
    }
  }
  return uVar3 & 0xffffff00;
}

/* 100691b0  FUN_100691b0  (349 bytes)
 * uint FUN_100691b0(int param_1)
 * called by: FUN_10069310
 */
uint __fastcall FUN_100691b0(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined2 extraout_var;
  uint uVar5;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  undefined1 local_38 [16];
  float local_28;
  float fStack_c;
  edict_t *local_8;
  
  uVar5 = *(uint *)(param_1 + 0x40);
  piVar1 = (int *)(uVar5 + 4);
  if ((*(uint *)(*piVar1 + 0x250) & 0x20000) == 0) {
    if ((*(byte *)(uVar5 + 0x800) & 2) == 0) goto LAB_100691ee;
    fVar2 = *(float *)(param_1 + 0x14);
    fVar3 = gpGlobals->time;
    uVar5 = CONCAT22((short)(uVar5 >> 0x10),
                     (ushort)(fVar2 < fVar3) << 8 | (ushort)(NAN(fVar2) || NAN(fVar3)) << 10 |
                     (ushort)(fVar2 == fVar3) << 0xe);
    if (fVar2 < fVar3) {
      *(float *)(param_1 + 0x14) = gpGlobals->time + 0.3;
      goto LAB_100691ee;
    }
  }
  UTIL_MakeVectors(*piVar1 + 0x74);
  iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 4);
  local_50 = gpGlobals->v_forward[0] * 54.0 + *(float *)(iVar4 + 8);
  local_4c = gpGlobals->v_forward[1] * 54.0 + *(float *)(iVar4 + 0xc);
  local_48 = gpGlobals->v_forward[2] * 54.0 + *(float *)(iVar4 + 0x10);
  local_40 = local_4c;
  local_3c = local_48;
  UTIL_TraceLine(*(int *)(*(int *)(param_1 + 0x40) + 4) + 8,&local_50,0,
                 *(undefined4 *)(iVar4 + 0x208),local_38);
  uVar5 = CONCAT22(extraout_var,
                   (ushort)(local_28 < 1.0) << 8 | (ushort)NAN(local_28) << 10 |
                   (ushort)(local_28 == 1.0) << 0xe);
  if (local_28 >= 1.0) goto LAB_100691ee;
  if (local_8 == (edict_t *)0x0) {
    local_8 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    if (local_8 != (edict_t *)0x0) goto LAB_100692a9;
  }
  else {
LAB_100692a9:
    if (local_8->pvPrivateData != (int *)0x0) {
      uVar5 = (**(code **)(*(int *)local_8->pvPrivateData + 0xc0))();
      if (uVar5 != 0) goto LAB_100691ee;
    }
  }
  uVar5 = (uint)(ushort)((ushort)(fStack_c < 0.5) << 8 | (ushort)NAN(fStack_c) << 10 |
                        (ushort)(fStack_c == 0.5) << 0xe);
  if (fStack_c < 0.5) {
    uVar5 = (uint)(ushort)((ushort)(fStack_c < -0.5) << 8 | (ushort)NAN(fStack_c) << 10 |
                          (ushort)(fStack_c == -0.5) << 0xe);
    if (fStack_c >= -0.5 && (fStack_c == -0.5) == 0) {
      fVar2 = *(float *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x28);
      uVar5 = CONCAT22((short)((uint)*(int *)(param_1 + 0x40) >> 0x10),
                       (ushort)(fVar2 < -370.0) << 8 | (ushort)NAN(fVar2) << 10 |
                       (ushort)(fVar2 == -370.0) << 0xe);
      if (fVar2 >= -370.0 && (fVar2 == -370.0) == 0) {
        return CONCAT31((int3)(uVar5 >> 8),1);
      }
    }
  }
LAB_100691ee:
  return uVar5 & 0xffffff00;
}

/* 10069310  FUN_10069310  (356 bytes)
 * undefined FUN_10069310(float * param_1)
 * called by: CTSStunt::Play
 */
void __fastcall FUN_10069310(float *param_1)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  float10 fVar8;
  
  if (0.0 < *param_1) {
    return;
  }
  if (0.0 < param_1[1]) {
    return;
  }
  if ((*(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xc30) != 0) {
    return;
  }
  *(undefined4 *)((int)param_1[0x10] + 0x788) = 0;
  *(undefined4 *)((int)param_1[0x10] + 0x78c) = 0;
  *(undefined1 *)((int)param_1[0x10] + 0x790) = 0;
  if ((*(byte *)(*(int *)((int)param_1[0x10] + 4) + 0x180) & 2) == 0) {
    if ((*(uint *)((int)param_1[0x10] + 0x800) & 0x4000) != 0) {
      uVar7 = FUN_10068fb0((int)param_1);
      if ((char)uVar7 != '\0') {
        FUN_10068b80(param_1);
        return;
      }
      uVar6 = FUN_100690b0((int)param_1);
      if ((char)uVar6 != '\0') {
        puVar1 = (uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250);
        *puVar1 = *puVar1 | 0x800000;
        goto LAB_100693ce;
      }
    }
  }
  else {
    uVar6 = FUN_100691b0((int)param_1);
    if ((char)uVar6 != '\0') {
      FUN_10068dc0(param_1);
      return;
    }
  }
  piVar4 = (int *)param_1[0x10];
  if ((piVar4[0x200] & 0x4000U) == 0) {
    return;
  }
  iVar5 = piVar4[1];
  if ((*(uint *)(iVar5 + 0x250) & 0x130000) != 0) {
    return;
  }
  if ((*(uint *)(iVar5 + 0x1a4) & 0x200) == 0) {
    if (*(float *)(iVar5 + 0x28) < -680.0) {
      return;
    }
    fVar2 = gpGlobals->time;
    fVar3 = (float)piVar4[0x2dd];
    fVar8 = (float10)(**(code **)(*piVar4 + 8))();
    if ((float10)0.7 / fVar8 < (float10)(fVar2 - fVar3)) {
      return;
    }
  }
  fVar2 = *(float *)(*(int *)((int)param_1[0x10] + 4) + 0x24);
  fVar3 = *(float *)(*(int *)((int)param_1[0x10] + 4) + 0x20);
  if (SQRT(fVar2 * fVar2 + fVar3 * fVar3) < 80.0) {
    FUN_100689b0(param_1);
    return;
  }
LAB_100693ce:
  FUN_10069480(param_1);
  return;
}

/* 10069480  FUN_10069480  (893 bytes)
 * undefined FUN_10069480(float * param_1)
 * called by: FUN_10069310, FUN_10069910
 */
void __fastcall FUN_10069480(float *param_1)

{
  undefined4 uVar1;
  globalvars_t *pgVar2;
  bool bVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar4;
  void *this;
  float10 fVar5;
  longlong lVar6;
  float unaff_retaddr;
  float fStack00000004;
  float fStack00000008;
  float fStack0000000c;
  
  if (*(float *)(*(int *)((int)param_1[0x10] + 4) + 0x74) < -10.0) {
    bVar3 = FUN_100688f0((int)param_1);
    if (CONCAT31(extraout_var,bVar3) != 0) {
      *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
           *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) | 0x40;
      *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x11c) = 0x3f400000;
      goto LAB_1006956b;
    }
  }
  if (10.0 < *(float *)(*(int *)((int)param_1[0x10] + 4) + 0x74)) {
LAB_10069509:
    *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
         *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) | 0x80;
    bVar3 = FUN_10068970((int)param_1);
    if (CONCAT31(extraout_var_01,bVar3) == 0) {
      *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x120) = 0x3f666666;
      *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x11c) = 0x3f800000;
      goto LAB_1006956b;
    }
    *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x120) = 0x3e800000;
  }
  else {
    bVar3 = FUN_10068930((int)param_1);
    if (CONCAT31(extraout_var_00,bVar3) == 0) goto LAB_10069509;
    *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
         *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) | 0x100;
  }
  *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x11c) = 0x3f400000;
LAB_1006956b:
  *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
       *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xffefffff;
  *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
       *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xffff7fff;
  *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
       *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xfffdffff;
  *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
       *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) & 0xfffeffff;
  *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
       *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) | 4;
  *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
       *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) | 0x10;
  iVar4 = *(int *)((int)param_1[0x10] + 4);
  *(undefined4 *)(iVar4 + 0x174) = DAT_100ae498;
  *(undefined4 *)(iVar4 + 0x178) = DAT_100ae49c;
  *(undefined4 *)(iVar4 + 0x17c) = DAT_100ae4a0;
  CTSAnimation::Animate((CTSAnimation *)((int *)param_1[0x10] + 0x9e),(int *)param_1[0x10],0x28);
  fVar5 = FUN_10076120();
  *param_1 = (float)fVar5;
  (*g_engfuncs.pfnMessageBegin)
            (1,DAT_100d9788,(float *)0x0,*(edict_t **)(*(int *)((int)param_1[0x10] + 4) + 0x208));
  lVar6 = __ftol();
  (*g_engfuncs.pfnWriteByte)((int)lVar6);
  (*g_engfuncs.pfnMessageEnd)();
  (**(code **)(*(int *)param_1[0x10] + 8))();
  iVar4 = (*g_engfuncs.pfnRandomLong)(0,10);
  if (8.0 < (float)iVar4 + unaff_retaddr) {
    (*g_engfuncs.pfnMessageBegin)
              (4,DAT_100d97d8,(float *)(*(int *)((int)param_1[0x10] + 4) + 8),(edict_t *)0x0);
    iVar4 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)((int)param_1[0x10] + 4) + 0x208));
    (*g_engfuncs.pfnWriteByte)(iVar4);
    (*g_engfuncs.pfnWriteByte)(2);
    (*g_engfuncs.pfnMessageEnd)();
  }
  iVar4 = *(int *)((int)param_1[0x10] + 4);
  if ((*(uint *)(iVar4 + 0x250) & 0x800000) == 0) {
    fStack0000000c =
         SQRT(*(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28) +
              *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
              *(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20));
    if (fStack0000000c == 0.0) {
      fStack00000004 = 0.0;
      fStack00000008 = 0.0;
      fStack0000000c = 1.0;
    }
    else {
      fStack0000000c = 1.0 / fStack0000000c;
      fStack00000004 = fStack0000000c * *(float *)(iVar4 + 0x20);
      fStack00000008 = fStack0000000c * *(float *)(iVar4 + 0x24);
      fStack0000000c = fStack0000000c * *(float *)(iVar4 + 0x28);
    }
    param_1[8] = fStack00000004;
    param_1[9] = fStack00000008;
    param_1[10] = fStack0000000c;
  }
  else {
    UTIL_MakeVectors(iVar4 + 0x74);
    pgVar2 = gpGlobals;
    param_1[8] = gpGlobals->v_forward[0];
    param_1[9] = pgVar2->v_forward[1];
    param_1[10] = pgVar2->v_forward[2];
  }
  uVar1 = *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x208);
  (*g_engfuncs.pfnRandomLong)(0,0x1f);
  EMIT_SOUND_DYN(this,uVar1,4,s_player_dive_wav_100a596c,0x3f800000,0x3f4ccccd,0);
  return;
}

/* 10069800  FUN_10069800  (271 bytes)
 * undefined FUN_10069800(float * param_1)
 * called by: CTSStunt::Play
 */
void __fastcall FUN_10069800(float *param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *this;
  longlong lVar3;
  
  iVar1 = *(int *)((int)param_1[0x10] + 4);
  if ((*(uint *)(iVar1 + 0x1a4) & 0x200) != 0) {
    if ((*(uint *)(iVar1 + 0x250) & 0x10000) != 0) {
      *(uint *)(iVar1 + 0x250) = *(uint *)(iVar1 + 0x250) & 0xfffeffff;
      *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x120) = 0x3f000000;
      iVar1 = *(int *)((int)param_1[0x10] + 4);
      *(undefined4 *)(iVar1 + 0x174) = DAT_100ae498;
      *(undefined4 *)(iVar1 + 0x178) = DAT_100ae49c;
      *(undefined4 *)(iVar1 + 0x17c) = DAT_100ae4a0;
      param_1[1] = 0.2625;
      if (*param_1 < 0.01) {
        *param_1 = 0.0;
        (*g_engfuncs.pfnMessageBegin)
                  (1,DAT_100d9788,(float *)0x0,
                   *(edict_t **)(*(int *)((int)param_1[0x10] + 4) + 0x208));
        lVar3 = __ftol();
        (*g_engfuncs.pfnWriteByte)((int)lVar3);
        (*g_engfuncs.pfnMessageEnd)();
      }
    }
    *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x11c) = 0x3f800000;
    uVar2 = *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x208);
    (*g_engfuncs.pfnRandomLong)(0,0x1f);
    EMIT_SOUND_DYN(this,uVar2,4,s_player_land_wav_100a595c,0x3f800000,0x3f4ccccd,0);
  }
  return;
}

/* 10069910  FUN_10069910  (345 bytes)
 * undefined FUN_10069910(float * param_1)
 * called by: CTSStunt::Play
 */
void __fastcall FUN_10069910(float *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  void *this;
  longlong lVar4;
  
  iVar1 = *(int *)((int)param_1[0x10] + 4);
  if ((*(uint *)(iVar1 + 0x1a4) & 0x200) != 0) {
    if ((*(uint *)(iVar1 + 0x250) & 0x20000) != 0) {
      *(uint *)(iVar1 + 0x250) = *(uint *)(iVar1 + 0x250) & 0xfffdffff;
      *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x120) = 0x3f000000;
      iVar1 = *(int *)((int)param_1[0x10] + 4);
      *(undefined4 *)(iVar1 + 0x174) = DAT_100ae498;
      *(undefined4 *)(iVar1 + 0x178) = DAT_100ae49c;
      *(undefined4 *)(iVar1 + 0x17c) = DAT_100ae4a0;
      param_1[1] = 0.2625;
      if (*param_1 < 0.01) {
        *param_1 = 0.0;
        (*g_engfuncs.pfnMessageBegin)
                  (1,DAT_100d9788,(float *)0x0,
                   *(edict_t **)(*(int *)((int)param_1[0x10] + 4) + 0x208));
        lVar4 = __ftol();
        (*g_engfuncs.pfnWriteByte)((int)lVar4);
        (*g_engfuncs.pfnMessageEnd)();
      }
    }
    *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x11c) = 0x3f800000;
    uVar2 = *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x208);
    (*g_engfuncs.pfnRandomLong)(0,0x1f);
    EMIT_SOUND_DYN(this,uVar2,4,s_player_land_wav_100a595c,0x3f800000,0x3f4ccccd,0);
    return;
  }
  if ((*(uint *)((int)param_1[0x10] + 0x800) & 0x4000) != 0) {
    uVar2 = FUN_10068fb0((int)param_1);
    if ((char)uVar2 != '\0') {
      FUN_10068b80(param_1);
      return;
    }
    uVar3 = FUN_100690b0((int)param_1);
    if ((char)uVar3 != '\0') {
      *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
           *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) | 0x800000;
      FUN_10069480(param_1);
    }
  }
  return;
}

/* 10069a70  FUN_10069a70  (27 bytes)
 * undefined FUN_10069a70(int param_1)
 * called by: CTSStunt::Play
 */
void __fastcall FUN_10069a70(int param_1)

{
  FUN_10069df0(param_1);
  CTSAnimation::Animate
            ((CTSAnimation *)(*(int **)(param_1 + 0x40) + 0x9e),*(int **)(param_1 + 0x40),2);
  return;
}

/* 10069a90  FUN_10069a90  (436 bytes)
 * undefined FUN_10069a90(int param_1)
 * called by: CTSStunt::Play
 */
void __fastcall FUN_10069a90(int param_1)

{
  float *pfVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  void *this;
  undefined4 *puVar5;
  float in_stack_ffffffc0;
  float fVar6;
  float in_stack_ffffffcc;
  float in_stack_ffffffd0;
  float in_stack_ffffffd4;
  float fVar7;
  float fVar8;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 4);
  if ((*(uint *)(iVar4 + 0x1a4) & 0x200) != 0) {
    uVar2 = *(uint *)(iVar4 + 0x250);
    if ((uVar2 & 0x400) == 0) {
      pfVar1 = (float *)(param_1 + 0x20);
      *(uint *)(iVar4 + 0x250) = uVar2 & 0xfffff7ff;
      fVar8 = 0.3;
      fVar7 = 0.6;
      iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 4);
      *(uint *)(iVar4 + 0x250) = *(uint *)(iVar4 + 0x250) | 0x20;
      iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 4);
      *(undefined4 *)(iVar4 + 0x174) = DAT_100ae498;
      *(undefined4 *)(iVar4 + 0x178) = DAT_100ae49c;
      *(undefined4 *)(iVar4 + 0x17c) = DAT_100ae4a0;
      *pfVar1 = *pfVar1 * -1.0;
      *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) * -1.0;
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) * -1.0;
      puVar5 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x74);
      fVar6 = 2.654684e-29;
      Vector::Vector((Vector *)&stack0xffffffcc,puVar5);
      Vector::Vector((Vector *)&stack0xffffffc0,pfVar1);
      iVar4 = FUN_10044510(in_stack_ffffffc0,fVar6,(float)puVar5,in_stack_ffffffcc,in_stack_ffffffd0
                           ,in_stack_ffffffd4,fVar7,fVar8);
      if (iVar4 == 2) {
        *(undefined1 *)(param_1 + 0x2c) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0x2c) = 1;
      }
      *(int *)(*(int *)(param_1 + 0x40) + 0x28c) = iVar4;
    }
    else {
      *(uint *)(iVar4 + 0x250) = uVar2 & 0xfffffbff;
      iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 4);
      *(uint *)(iVar4 + 0x250) = *(uint *)(iVar4 + 0x250) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x120) = 0x3e800000;
      iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 4);
      *(undefined4 *)(iVar4 + 0x174) = DAT_100ae498;
      *(undefined4 *)(iVar4 + 0x178) = DAT_100ae49c;
      *(undefined4 *)(iVar4 + 0x17c) = DAT_100ae4a0;
      *(undefined4 *)(param_1 + 4) = 0x3ec00000;
    }
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x11c) = 0x3f800000;
    uVar3 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x208);
    (*g_engfuncs.pfnRandomLong)(0,0x1f);
    EMIT_SOUND_DYN(this,uVar3,4,s_player_land_wav_100a595c,0x3f800000,0x3f4ccccd,0);
  }
  return;
}

/* 10069c50  FUN_10069c50  (409 bytes)
 * undefined FUN_10069c50(int param_1)
 * called by: CTSStunt::Play
 */
void __fastcall FUN_10069c50(int param_1)

{
  int *piVar1;
  uint uVar2;
  globalvars_t *pgVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 4);
  if ((*(uint *)(iVar4 + 0x1a4) & 0x200) == 0) {
    return;
  }
  if ((*(byte *)(iVar4 + 0x180) & 0x10) != 0) {
    *(undefined4 *)(iVar4 + 0x120) = 0x3f800000;
  }
  piVar1 = *(int **)(param_1 + 0x40);
  iVar4 = piVar1[1];
  uVar2 = *(uint *)(iVar4 + 0x180);
  if (((uVar2 & 0x4006) != 0) && (*(float *)(param_1 + 0x30) < 0.01)) {
    *(uint *)(iVar4 + 0x250) = *(uint *)(iVar4 + 0x250) | 1;
    iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 4);
    *(uint *)(iVar4 + 0x250) = *(uint *)(iVar4 + 0x250) & 0xffffffdf;
    iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 4);
    *(undefined4 *)(iVar4 + 0x174) = 0;
    *(undefined4 *)(iVar4 + 0x178) = 0;
    *(undefined4 *)(iVar4 + 0x17c) = 0x41e00000;
    *(undefined4 *)(param_1 + 4) = 0x3f400000;
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x68) = 1;
    CTSAnimation::Animate
              ((CTSAnimation *)(*(int **)(param_1 + 0x40) + 0x9e),*(int **)(param_1 + 0x40),0x29);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x120) = 0x3f800000;
    return;
  }
  if (((uVar2 & 0x200) == 0) || (0.01 <= *(float *)(param_1 + 0x30))) {
    if (((uVar2 & 0x400) == 0) || (0.01 <= *(float *)(param_1 + 0x30))) {
      CTSAnimation::Animate((CTSAnimation *)(piVar1 + 0x9e),piVar1,3);
      return;
    }
    iVar4 = 0x2b;
  }
  else {
    iVar4 = 0x2a;
  }
  CTSAnimation::Animate((CTSAnimation *)(piVar1 + 0x9e),piVar1,iVar4);
  UTIL_MakeVectors(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x74);
  pgVar3 = gpGlobals;
  *(vec_t *)(param_1 + 0x20) = gpGlobals->v_forward[0];
  *(vec_t *)(param_1 + 0x24) = pgVar3->v_forward[1];
  *(vec_t *)(param_1 + 0x28) = pgVar3->v_forward[2];
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x120) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x28c) = 2;
  return;
}

/* 10069df0  FUN_10069df0  (411 bytes)
 * undefined FUN_10069df0(int param_1)
 * called by: FUN_10069a70
 */
void __fastcall FUN_10069df0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  void *this;
  undefined4 *puVar4;
  float in_stack_ffffffdc;
  float fVar5;
  float in_stack_ffffffe8;
  float in_stack_ffffffec;
  float in_stack_fffffff0;
  float fVar6;
  float fVar7;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 4);
  if (((*(uint *)(iVar3 + 0x1a4) & 0x200) != 0) &&
     (uVar1 = *(uint *)(iVar3 + 0x250), (uVar1 & 0x10) != 0)) {
    if ((*(uint *)(iVar3 + 0x180) & 0x4006) == 0) {
      fVar7 = 0.3;
      *(uint *)(iVar3 + 0x250) = uVar1 & 0xffffffef;
      fVar6 = 0.6;
      iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 4);
      *(uint *)(iVar3 + 0x250) = *(uint *)(iVar3 + 0x250) | 0x20;
      iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 4);
      *(undefined4 *)(iVar3 + 0x174) = DAT_100ae498;
      *(undefined4 *)(iVar3 + 0x178) = DAT_100ae49c;
      *(undefined4 *)(iVar3 + 0x17c) = DAT_100ae4a0;
      puVar4 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x74);
      fVar5 = 2.654937e-29;
      Vector::Vector((Vector *)&stack0xffffffe8,puVar4);
      Vector::Vector((Vector *)&stack0xffffffdc,(undefined4 *)(param_1 + 0x20));
      iVar3 = FUN_10044510(in_stack_ffffffdc,fVar5,(float)puVar4,in_stack_ffffffe8,in_stack_ffffffec
                           ,in_stack_fffffff0,fVar6,fVar7);
      if (iVar3 == 2) {
        *(undefined1 *)(param_1 + 0x2c) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0x2c) = 1;
      }
      *(int *)(*(int *)(param_1 + 0x40) + 0x28c) = iVar3;
    }
    else {
      *(uint *)(iVar3 + 0x250) = uVar1 & 0xffffffef;
      iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 4);
      *(uint *)(iVar3 + 0x250) = *(uint *)(iVar3 + 0x250) | 0x40000;
      iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 4);
      *(uint *)(iVar3 + 0x250) = *(uint *)(iVar3 + 0x250) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x120) = 0x3f000000;
      iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 4);
      *(undefined4 *)(iVar3 + 0x174) = DAT_100ae498;
      *(undefined4 *)(iVar3 + 0x178) = DAT_100ae49c;
      *(undefined4 *)(iVar3 + 0x17c) = DAT_100ae4a0;
      *(undefined4 *)(param_1 + 4) = 0x3f100000;
      CTSAnimation::Animate
                ((CTSAnimation *)(*(int **)(param_1 + 0x40) + 0x9e),*(int **)(param_1 + 0x40),0x2e);
    }
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x11c) = 0x3f800000;
    uVar2 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x208);
    (*g_engfuncs.pfnRandomLong)(0,0x1f);
    EMIT_SOUND_DYN(this,uVar2,4,s_player_land_wav_100a595c,0x3f800000,0x3f4ccccd,0);
  }
  return;
}

/* 1006a740  FUN_1006a740  (752 bytes)
 * undefined4 FUN_1006a740(int param_1)
 * called by: CBasePlayer::Jump
 */
undefined4 __fastcall FUN_1006a740(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  float *pfVar4;
  undefined3 extraout_var;
  undefined4 *puVar5;
  int iVar6;
  void *this;
  float10 fVar7;
  float fStack_74;
  float fStack_6c;
  Vector VStack_60;
  undefined4 uStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  float fVar8;
  Vector VStack_28;
  float afStack_1c [3];
  float afStack_10 [4];
  
  if (*(float *)(param_1 + 4) <= 0.0) {
    iVar6 = *(int *)(*(int *)(param_1 + 0x40) + 4);
    if (((((*(uint *)(iVar6 + 0x250) & 0x30c30) == 0) && ((*(uint *)(iVar6 + 0x1a4) & 0x4000) == 0))
        && (*(float *)(param_1 + 8) <= 0.0)) &&
       (((iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x9fc), iVar1 == 0 ||
         (*(int *)(iVar1 + 0x78) != 0x10)) || (*(int *)(iVar1 + 0xbc) != 0)))) {
      UTIL_MakeVectors(iVar6 + 0x74);
      pfVar4 = (float *)(**(code **)(**(int **)(param_1 + 0x40) + 0x160))();
      VStack_28.x = *pfVar4;
      VStack_28.y = pfVar4[1];
      VStack_28.z = pfVar4[2];
      iVar6 = *(int *)(*(int *)(param_1 + 0x40) + 4);
      if ((20.0 < SQRT(*(float *)(iVar6 + 0x28) * *(float *)(iVar6 + 0x28) +
                       *(float *)(iVar6 + 0x24) * *(float *)(iVar6 + 0x24) +
                       *(float *)(iVar6 + 0x20) * *(float *)(iVar6 + 0x20)) * 0.06666667) ||
         (10.0 <= SQRT(*(float *)(iVar6 + 0x28) * *(float *)(iVar6 + 0x28) +
                       *(float *)(iVar6 + 0x24) * *(float *)(iVar6 + 0x24) +
                       *(float *)(iVar6 + 0x20) * *(float *)(iVar6 + 0x20)) * 0.06666667)) {
        if (SQRT(*(float *)(iVar6 + 0x28) * *(float *)(iVar6 + 0x28) +
                 *(float *)(iVar6 + 0x24) * *(float *)(iVar6 + 0x24) +
                 *(float *)(iVar6 + 0x20) * *(float *)(iVar6 + 0x20)) * 0.06666667 <= 20.0) {
          fVar8 = SQRT(*(float *)(iVar6 + 0x28) * *(float *)(iVar6 + 0x28) +
                       *(float *)(iVar6 + 0x24) * *(float *)(iVar6 + 0x24) +
                       *(float *)(iVar6 + 0x20) * *(float *)(iVar6 + 0x20)) * 0.06666667;
        }
        else {
          fVar8 = 20.0;
        }
      }
      else {
        fVar8 = 10.0;
      }
      uVar3 = KungFu(*(int *)(param_1 + 0x40));
      if (CONCAT31(extraout_var,uVar3) == 0) {
        fStack_50 = 1.0;
      }
      else {
        fStack_50 = 2.0;
      }
      fStack_50 = fStack_50 * fVar8;
      uStack_4c = 0xffffffff;
      *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x794) = 0;
      uStack_54 = 3;
      Vector::Vector(&VStack_60,gpGlobals->v_forward);
      fStack_6c = 2.6557163e-29;
      pfVar4 = (float *)Vector::operator*((Vector *)gpGlobals->v_forward,afStack_1c,48.0);
      fStack_6c = 2.6557208e-29;
      puVar5 = (undefined4 *)Vector::operator+(&VStack_28,afStack_10,pfVar4);
      fStack_74 = 2.655724e-29;
      Vector::Vector((Vector *)&fStack_6c,puVar5);
      Vector::Vector((Vector *)&stack0xffffff88,&VStack_28.x);
      iVar6 = FUN_10063920(*(void **)(param_1 + 0x40));
      if (iVar6 != 0) {
        iVar6 = (*g_engfuncs.pfnRandomLong)(0,2);
        if (iVar6 == 1) {
          iVar6 = 0xe;
        }
        else if (iVar6 == 2) {
          iVar6 = 0xd;
        }
        else {
          iVar6 = 10;
        }
        *(undefined4 *)(param_1 + 8) = 0x3f333333;
        CTSAnimation::Animate
                  ((CTSAnimation *)(*(int **)(param_1 + 0x40) + 0x9e),*(int **)(param_1 + 0x40),
                   iVar6);
        iVar6 = *(int *)(param_1 + 0x40);
        fVar7 = FUN_10076120();
        if ((float10)*(float *)(iVar6 + 0x118) < fVar7) {
          fVar7 = FUN_10076120();
          *(float *)(*(int *)(param_1 + 0x40) + 0x118) = (float)(fVar7 + (float10)0.35);
        }
        uVar2 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x208);
        (*g_engfuncs.pfnRandomLong)(0,0x1f);
        uStack_4c = 0x1006aa05;
        EMIT_SOUND_DYN(this,uVar2,4,s_player_closecombat_wav_100a597c,0x3f800000,0x3f4ccccd,0);
        FUN_10063dd0(*(void **)(param_1 + 0x40),VStack_28.z * 1.5);
        return 1;
      }
    }
  }
  return 0;
}

/* 1006aa30  FUN_1006aa30  (1425 bytes)
 * undefined4 FUN_1006aa30(float * param_1)
 * called by: CBasePlayer::Jump
 */
undefined4 __fastcall FUN_1006aa30(float *param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined3 extraout_var;
  undefined4 *puVar8;
  int iVar9;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  void *this;
  void *this_00;
  int iVar10;
  float10 fVar11;
  longlong lVar12;
  float in_stack_ffffffa8;
  float fVar13;
  float in_stack_ffffffb4;
  float in_stack_ffffffb8;
  float in_stack_ffffffbc;
  float fVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  double in_stack_ffffffdc;
  float fStack_1c;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar10 = *(int *)((int)param_1[0x10] + 4);
  fVar17 = SQRT(*(float *)(iVar10 + 0x24) * *(float *)(iVar10 + 0x24) +
                *(float *)(iVar10 + 0x20) * *(float *)(iVar10 + 0x20));
  fVar13 = *param_1;
  fVar14 = param_1[4];
  fVar16 = gpGlobals->time;
  uVar3 = *(uint *)(iVar10 + 0x250);
  fVar1 = param_1[1];
  bVar6 = CBasePlayer::IsOnLadder((int)param_1[0x10]);
  fVar2 = param_1[2];
  piVar4 = (int *)param_1[0x10];
  if ((*(uint *)(piVar4[1] + 0x1a4) & 0x200) == 0) {
    in_stack_ffffffdc = (double)(gpGlobals->time - (float)piVar4[0x2dd]);
    fVar11 = (float10)(**(code **)(*piVar4 + 8))();
    if ((float10)0.7 / fVar11 < (float10)in_stack_ffffffdc) goto LAB_1006afa7;
  }
  if (fVar2 <= 0.0 &&
      (CONCAT31(extraout_var,bVar6) == 0 &&
      (fVar1 <= 0.0 && ((uVar3 & 0x130c30) == 0 && (fVar16 <= fVar14 && fVar13 <= 0.0))))) {
    iVar10 = *(int *)((int)param_1[0x10] + 4);
    if (80.0 <= fVar17) {
      fVar13 = SQRT(*(float *)(iVar10 + 0x28) * *(float *)(iVar10 + 0x28) +
                    *(float *)(iVar10 + 0x24) * *(float *)(iVar10 + 0x24) +
                    *(float *)(iVar10 + 0x20) * *(float *)(iVar10 + 0x20));
      if (fVar13 == 0.0) {
        pfVar15 = (float *)&stack0xffffffe8;
      }
      else {
        fVar13 = 1.0 / fVar13;
        pfVar15 = &fStack_c;
        fStack_c = fVar13 * *(float *)(iVar10 + 0x20);
        fStack_8 = fVar13 * *(float *)(iVar10 + 0x24);
        fStack_4 = fVar13 * *(float *)(iVar10 + 0x28);
      }
      Vector::Vector((Vector *)&stack0xffffffdc,pfVar15);
      fVar16 = 0.3;
      fVar14 = 0.6;
      param_1[8] = SUB84(in_stack_ffffffdc,0);
      param_1[9] = (float)((ulonglong)in_stack_ffffffdc >> 0x20);
      param_1[10] = fStack_1c;
      puVar8 = (undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x74);
      fVar13 = 2.6559468e-29;
      Vector::Vector((Vector *)&stack0xffffffb4,puVar8);
      Vector::Vector((Vector *)&stack0xffffffa8,param_1 + 8);
      iVar10 = FUN_10044510(in_stack_ffffffa8,fVar13,(float)puVar8,in_stack_ffffffb4,
                            in_stack_ffffffb8,in_stack_ffffffbc,fVar14,fVar16);
    }
    else {
      UTIL_MakeVectors(iVar10 + 0x74);
      iVar10 = 3;
      fVar13 = gpGlobals->v_forward[1];
      fStack_1c = -gpGlobals->v_forward[2];
      param_1[8] = -gpGlobals->v_forward[0];
      param_1[9] = -fVar13;
      param_1[10] = fStack_1c;
    }
    (**(code **)(*(int *)param_1[0x10] + 8))();
    iVar9 = (*g_engfuncs.pfnRandomLong)(0,10);
    if (7.0 < (float)iVar9 + fStack_1c) {
      (*g_engfuncs.pfnMessageBegin)
                (4,DAT_100d97d8,(float *)(*(int *)((int)param_1[0x10] + 4) + 8),(edict_t *)0x0);
      iVar9 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)((int)param_1[0x10] + 4) + 0x208))
      ;
      (*g_engfuncs.pfnWriteByte)(iVar9);
      (*g_engfuncs.pfnWriteByte)(2);
      (*g_engfuncs.pfnMessageEnd)();
    }
    bVar6 = FUN_100688f0((int)param_1);
    if ((CONCAT31(extraout_var_00,bVar6) != 0) &&
       ((iVar10 == 3 || (*(float *)(*(int *)((int)param_1[0x10] + 4) + 0x74) < -10.0)))) {
      *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
           *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) | 4;
      *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
           *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) | 0x400;
      iVar9 = *(int *)((int)param_1[0x10] + 4);
      *(undefined4 *)(iVar9 + 0x174) = DAT_100ae498;
      *(undefined4 *)(iVar9 + 0x178) = DAT_100ae49c;
      *(undefined4 *)(iVar9 + 0x17c) = DAT_100ae4a0;
      CTSAnimation::Animate((CTSAnimation *)((int *)param_1[0x10] + 0x9e),(int *)param_1[0x10],0x31)
      ;
      *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
           *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) | 0x100;
      *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x11c) = 0x3f400000;
      fVar11 = FUN_10076120();
      *param_1 = (float)fVar11;
      (*g_engfuncs.pfnMessageBegin)
                (1,DAT_100d9788,(float *)0x0,*(edict_t **)(*(int *)((int)param_1[0x10] + 4) + 0x208)
                );
      lVar12 = __ftol();
      (*g_engfuncs.pfnWriteByte)((int)lVar12);
      (*g_engfuncs.pfnMessageEnd)();
      uVar5 = *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x208);
      (*g_engfuncs.pfnRandomLong)(0,0x1f);
      EMIT_SOUND_DYN(this,uVar5,4,s_player_airwheel_wav_100a5948,0x3f800000,0x3f4ccccd,0);
      param_1[4] = 0.0;
      if (iVar10 == 3) {
        FUN_10063dd0((void *)param_1[0x10],22.5);
        uVar7 = KungFu((int)param_1[0x10]);
        if (CONCAT31(extraout_var_01,uVar7) == 0) {
          fVar11 = (float10)1.0;
        }
        else {
          fVar11 = (float10)2.0;
        }
        *(undefined4 *)((int)param_1[0x10] + 0x788) = 0x3e99999a;
        *(float *)((int)param_1[0x10] + 0x78c) = (float)(fVar11 * (float10)15.0);
        *(undefined1 *)((int)param_1[0x10] + 0x790) = 0;
        *(undefined4 *)((int)param_1[0x10] + 0x794) = 0;
      }
      return 1;
    }
    bVar6 = FUN_10068970((int)param_1);
    if ((CONCAT31(extraout_var_02,bVar6) != 0) && (iVar10 != 3)) {
      *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
           *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) | 4;
      *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
           *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) | 0x800;
      iVar9 = *(int *)((int)param_1[0x10] + 4);
      *(undefined4 *)(iVar9 + 0x174) = DAT_100ae498;
      *(undefined4 *)(iVar9 + 0x178) = DAT_100ae49c;
      *(undefined4 *)(iVar9 + 0x17c) = DAT_100ae4a0;
      CTSAnimation::Animate((CTSAnimation *)((int *)param_1[0x10] + 0x9e),(int *)param_1[0x10],0x32)
      ;
      *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) =
           *(uint *)(*(int *)((int)param_1[0x10] + 4) + 0x250) | 0x80;
      *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x11c) = 0x3f400000;
      if (iVar10 == 2) {
        *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x120) = 0x3e800000;
      }
      fVar11 = FUN_10076120();
      *param_1 = (float)fVar11;
      (*g_engfuncs.pfnMessageBegin)
                (1,DAT_100d9788,(float *)0x0,*(edict_t **)(*(int *)((int)param_1[0x10] + 4) + 0x208)
                );
      lVar12 = __ftol();
      (*g_engfuncs.pfnWriteByte)((int)lVar12);
      (*g_engfuncs.pfnMessageEnd)();
      uVar5 = *(undefined4 *)(*(int *)((int)param_1[0x10] + 4) + 0x208);
      (*g_engfuncs.pfnRandomLong)(0,0x1f);
      EMIT_SOUND_DYN(this_00,uVar5,4,s_player_airwheel_wav_100a5948,0x3f800000,0x3f4ccccd,0);
      param_1[4] = 0.0;
      return 1;
    }
  }
LAB_1006afa7:
  param_1[4] = gpGlobals->time + 0.3;
  return 0;
}

/* 100728d0  FUN_100728d0  (134 bytes)
 * undefined FUN_100728d0(int param_1)
 * called by: CTSFlag::Fall
 */
void __fastcall FUN_100728d0(int param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x198) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 1;
  UTIL_SetOrigin(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + 8);
  local_18 = 0x41800000;
  local_14 = 0x41800000;
  local_10 = 0x42400000;
  local_c = 0xc1800000;
  local_8 = 0xc1800000;
  local_4 = 0;
  UTIL_SetSize(*(int *)(param_1 + 4),&local_c,&local_18);
  *(code **)(param_1 + 0x14) = CTSFlag::WaitTouch;
  *(code **)(param_1 + 0x10) = FUN_10052e90;
  return;
}

/* 10072bd0  FUN_10072bd0  (36 bytes)
 * int FUN_10072bd0(int * param_1, int param_2, int param_3)
 * called by: CBasePlayer::SlowMotionFlow, RemoveEntityFromSlowedArray
 */
int __cdecl FUN_10072bd0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      if (*param_1 == param_3) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 1;
    } while (iVar1 < param_2);
  }
  return -1;
}

/* 10073270  FUN_10073270  (207 bytes)
 * int FUN_10073270(byte.conflict * param_1, char param_2)
 * called by: CTSTeamEscape::WaitTouch
 */
int __cdecl FUN_10073270(byte_conflict *param_1,char param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  byte_conflict *pbVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  bool bVar11;
  
  iVar8 = 0;
  pbVar9 = &DAT_100a9398;
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar11 = bVar1 < *pbVar9;
    if (bVar1 != *pbVar9) {
LAB_100732a7:
      iVar3 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_100732ac;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar11 = bVar1 < pbVar9[1];
    if (bVar1 != pbVar9[1]) goto LAB_100732a7;
    pbVar2 = pbVar2 + 2;
    pbVar9 = pbVar9 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100732ac:
  iVar10 = 1;
  if (0 < gpGlobals->maxClients) {
    do {
      piVar4 = (int *)UTIL_PlayerByIndex(iVar10);
      if (piVar4 != (int *)0x0) {
        iVar5 = (**(code **)(*piVar4 + 0xc0))();
        if (iVar5 != 0) {
          if (iVar3 != 0) {
            pbVar6 = (byte_conflict *)(**(code **)(*piVar4 + 200))();
            uVar7 = FUN_100887b0(param_1,param_1,pbVar6);
            if (uVar7 != 0) goto LAB_1007332a;
          }
          if (param_2 != '\0') {
            iVar5 = (**(code **)(*piVar4 + 0xac))();
            if ((iVar5 == 0) && ((float)piVar4[0x1d7] < 0.0)) goto LAB_1007332a;
          }
          iVar8 = iVar8 + 1;
        }
      }
LAB_1007332a:
      iVar10 = iVar10 + 1;
    } while (iVar10 <= gpGlobals->maxClients);
  }
  return iVar8;
}

/* 10074a00  FUN_10074a00  (134 bytes)
 * undefined FUN_10074a00(int param_1)
 * called by: CTSWorldGun::Fall
 */
void __fastcall FUN_10074a00(int param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x198) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 1;
  UTIL_SetOrigin(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + 8);
  local_18 = 0x40800000;
  local_14 = 0x40800000;
  local_10 = 0x40800000;
  local_c = 0xc0800000;
  local_8 = 0xc0800000;
  local_4 = 0;
  UTIL_SetSize(*(int *)(param_1 + 4),&local_c,&local_18);
  *(code **)(param_1 + 0x14) = CTSWorldGun::WaitTouch;
  *(code **)(param_1 + 0x10) = FUN_10052e90;
  return;
}

/* 10076120  FUN_10076120  (7 bytes)
 * float10 FUN_10076120(void)
 * called by: CBasePlayer::PostThink, CBasePlayer::Restore, CBasePlayer::Spawn, CBasePlayer::TSInit, CBasePlayerWeapon::DefaultDeploy, CBasePlayerWeapon::ItemPostFrame, CTSGun::AlternateAttack, CTSGun::GrenadeIdle, CTSGun::HolsterWeapon, CTSGun::Reload, CTSGun::SecondaryAttack, CTSGun::StopReload, ... (31 total)
 */
float10 FUN_10076120(void)

{
  return (float10)0.0;
}

/* 10076130  FUN_10076130  (53 bytes)
 * uint FUN_10076130(void)
 * called by: FUN_10076190
 */
uint FUN_10076130(void)

{
  DAT_102eeb64 = DAT_102eeb64 * 0x10dcd + 1 +
                 *(int *)(&DAT_100a6410 + (DAT_102eeb64 * 0x10dcd & 0xff) * 4);
  return DAT_102eeb64 & 0xfffffff;
}

/* 10076170  FUN_10076170  (23 bytes)
 * undefined FUN_10076170(uint param_1)
 * called by: FUN_10076190
 */
void __cdecl FUN_10076170(uint param_1)

{
  DAT_102eeb64 = *(undefined4 *)(&DAT_100a6410 + (param_1 & 0xff) * 4);
  return;
}

/* 10076190  FUN_10076190  (116 bytes)
 * float10 FUN_10076190(int param_1, float param_2, int param_3)
 * called by: CBasePlayer::ShootBulletsPlayer
 */
float10 __cdecl FUN_10076190(int param_1,float param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  
  FUN_10076170(param_3 + (int)param_2 + param_1);
  FUN_10076130();
  FUN_10076130();
  lVar2 = __ftol();
  if ((int)lVar2 == 0) {
    return (float10)param_2;
  }
  uVar1 = FUN_10076130();
  return (float10)(uVar1 & 0xffff) * (float10)1.52587890625e-05 * (float10)(int)lVar2 +
         (float10)param_2;
}

/* 10076210  FUN_10076210  (31 bytes)
 * undefined FUN_10076210(undefined4 param_1, undefined4 param_2)
 * called by: pfnAddToFullPack, pfnCmdStart
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10076210(int param_1,int param_2)

{
  _DAT_102eeb68 = param_1;
  DAT_102eeb6c = param_2;
  (*g_engfuncs.pfnSetGroupMask)(param_1,param_2);
  return;
}

/* 10076230  FUN_10076230  (24 bytes)
 * undefined FUN_10076230(void)
 * called by: pfnAddToFullPack, pfnCmdEnd
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10076230(void)

{
  _DAT_102eeb68 = 0;
  DAT_102eeb6c = 0;
  (*g_engfuncs.pfnSetGroupMask)(0,0);
  return;
}

/* 10076410  FUN_10076410  (71 bytes)
 * undefined4 FUN_10076410(int param_1, undefined4 param_2, undefined4 param_3)
 * called by: CBasePlayer::CheckForWires, CBasePlayer::CutWire, CBasePlayer::PlayerUse, CFuncTrackTrain::NearestPath, FUN_100145f0, FUN_1004c4a0, FUN_10066370, TSExplosion
 */
void * __cdecl FUN_10076410(int param_1,float *param_2,float param_3)

{
  edict_t *peVar1;
  int iVar2;
  
  if (param_1 == 0) {
    peVar1 = (edict_t *)0x0;
  }
  else {
    peVar1 = *(edict_t **)(*(int *)(param_1 + 4) + 0x208);
  }
  peVar1 = (*g_engfuncs.pfnFindEntityInSphere)(peVar1,param_2,param_3);
  if (peVar1 != (edict_t *)0x0) {
    iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar1);
    if (iVar2 != 0) {
      return peVar1->pvPrivateData;
    }
  }
  return (void *)0;
}

/* 10076540  FUN_10076540  (44 bytes)
 * undefined FUN_10076540(float * param_1)
 * called by: CEnvLight::Spawn, CFuncTankGun::Fire, CFuncTankLaser::Fire, CFuncTankMortar::Fire
 */
void __cdecl FUN_10076540(float *param_1)

{
  float local_c;
  float local_8;
  float local_4;
  
  local_8 = param_1[1];
  local_4 = param_1[2];
  local_c = -*param_1;
  (*g_engfuncs.pfnMakeVectors)(&local_c);
  return;
}

/* 10076570  FUN_10076570  (141 bytes)
 * undefined FUN_10076570(undefined4 param_1, int param_2)
 * called by: CFuncTrackChange::UpdateTrain
 */
void __cdecl FUN_10076570(float *param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
  
  (*g_engfuncs.pfnMakeVectors)(param_1);
  pfVar1 = (float *)(param_2 + 0x40);
  fVar2 = *(float *)(param_2 + 0x2c);
  *pfVar1 = *(float *)(param_2 + 0x40) * -1.0;
  *(float *)(param_2 + 0x44) = *(float *)(param_2 + 0x44) * -1.0;
  *(float *)(param_2 + 0x48) = *(float *)(param_2 + 0x48) * -1.0;
  *(float *)(param_2 + 0x2c) = *pfVar1;
  *pfVar1 = fVar2;
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_2 + 0x34) = uVar3;
  uVar3 = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_2 + 0x38) = uVar3;
  return;
}

/* 10076860  FUN_10076860  (33 bytes)
 * int FUN_10076860(void)
 * called by: FUN_10076890, FUN_10076a90, UTIL_ScreenShake
 */
int FUN_10076860(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = __ftol();
  iVar1 = (int)lVar2;
  if (iVar1 < 0) {
    return 0;
  }
  if (0xffff < iVar1) {
    iVar1 = 0xffff;
  }
  return iVar1;
}

/* 10076890  FUN_10076890  (101 bytes)
 * undefined FUN_10076890(undefined2 * param_1)
 * called by: UTIL_ScreenFade, UTIL_ScreenFadeAll
 */
void __cdecl FUN_10076890(undefined2 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 in_stack_00000014;
  undefined2 in_stack_00000018;
  
  iVar1 = FUN_10076860();
  *param_1 = (short)iVar1;
  iVar1 = FUN_10076860();
  param_1[1] = (short)iVar1;
  lVar2 = __ftol();
  *(char *)(param_1 + 3) = (char)lVar2;
  lVar2 = __ftol();
  *(char *)((int)param_1 + 7) = (char)lVar2;
  lVar2 = __ftol();
  *(char *)(param_1 + 4) = (char)lVar2;
  *(undefined1 *)((int)param_1 + 9) = in_stack_00000014;
  param_1[2] = in_stack_00000018;
  return;
}

/* 10076900  FUN_10076900  (220 bytes)
 * undefined FUN_10076900(int param_1, int * param_2)
 * called by: UTIL_ScreenFade, UTIL_ScreenFadeAll
 */
void __cdecl FUN_10076900(int param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  ushort *in_stack_00000014;
  float fStack00000018;
  float fStack0000001c;
  undefined4 uStack00000020;
  
  if (param_2 != (int *)0x0) {
    iVar1 = (**(code **)(*param_2 + 0xc4))();
    if (iVar1 != 0) {
      (*g_engfuncs.pfnMessageBegin)(1,DAT_100d97d4,(float *)0x0,*(edict_t **)(param_2[1] + 0x208));
      fStack00000018 = (float)*in_stack_00000014;
      (**(code **)(*param_2 + 8))();
      lVar2 = __ftol();
      (*g_engfuncs.pfnWriteShort)((int)lVar2);
      fStack0000001c = (float)in_stack_00000014[1];
      (**(code **)(*param_2 + 8))();
      lVar2 = __ftol();
      (*g_engfuncs.pfnWriteShort)((int)lVar2);
      (*g_engfuncs.pfnWriteShort)((int)(short)in_stack_00000014[2]);
      (*g_engfuncs.pfnWriteByte)((uint)(byte)in_stack_00000014[3]);
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)((int)in_stack_00000014 + 7));
      (*g_engfuncs.pfnWriteByte)((uint)(byte)in_stack_00000014[4]);
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)((int)in_stack_00000014 + 9));
      uStack00000020 = 0x100769d9;
      (*g_engfuncs.pfnMessageEnd)();
    }
  }
  return;
}

/* 10076a90  FUN_10076a90  (471 bytes)
 * undefined FUN_10076a90(int * param_1, undefined4 * param_2, char * param_3)
 * called by: CGameText::Use, FUN_10076ca0
 */
void __cdecl FUN_10076a90(int *param_1,undefined4 *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int in_stack_0000001c;
  undefined1 uStack00000053;
  char *in_stack_00000060;
  char acStack_1ac [428];
  
  if (param_1 != (int *)0x0) {
    iVar2 = (**(code **)(*param_1 + 0xc4))();
    if (iVar2 != 0) {
      (*g_engfuncs.pfnMessageBegin)(1,0x17,(float *)0x0,*(edict_t **)(param_1[1] + 0x208));
      (*g_engfuncs.pfnWriteByte)(0x1d);
      (*g_engfuncs.pfnWriteByte)(*(uint *)(in_stack_0000001c + 0x24) & 0xff);
      iVar2 = FUN_10076c70();
      (*g_engfuncs.pfnWriteShort)((int)(short)iVar2);
      iVar2 = FUN_10076c70();
      (*g_engfuncs.pfnWriteShort)((int)(short)iVar2);
      (*g_engfuncs.pfnWriteByte)(*(int *)(in_stack_0000001c + 8));
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)(in_stack_0000001c + 0xc));
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)(in_stack_0000001c + 0xd));
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)(in_stack_0000001c + 0xe));
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)(in_stack_0000001c + 0xf));
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)(in_stack_0000001c + 0x10));
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)(in_stack_0000001c + 0x11));
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)(in_stack_0000001c + 0x12));
      (*g_engfuncs.pfnWriteByte)((uint)*(byte *)(in_stack_0000001c + 0x13));
      uVar3 = FUN_10076860();
      (*g_engfuncs.pfnWriteShort)(uVar3 & 0xffff);
      uVar3 = FUN_10076860();
      (*g_engfuncs.pfnWriteShort)(uVar3 & 0xffff);
      uVar3 = FUN_10076860();
      (*g_engfuncs.pfnWriteShort)(uVar3 & 0xffff);
      if (*(int *)(in_stack_0000001c + 8) == 2) {
        uVar3 = FUN_10076860();
        (*g_engfuncs.pfnWriteShort)(uVar3 & 0xffff);
      }
      uVar3 = 0xffffffff;
      pcVar4 = in_stack_00000060;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (~uVar3 - 1 < 0x200) {
        (*g_engfuncs.pfnWriteString)(in_stack_00000060);
        (*g_engfuncs.pfnMessageEnd)();
        return;
      }
      _strncpy(acStack_1ac,in_stack_00000060,0x1ff);
      uStack00000053 = 0;
      (*g_engfuncs.pfnWriteString)(acStack_1ac);
      (*g_engfuncs.pfnMessageEnd)();
    }
  }
  return;
}

/* 10076c70  FUN_10076c70  (39 bytes)
 * int FUN_10076c70(void)
 * called by: FUN_10076a90
 */
int FUN_10076c70(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = __ftol();
  iVar1 = (int)lVar2;
  if (0x7fff < iVar1) {
    return 0x7fff;
  }
  if (iVar1 < -0x8000) {
    iVar1 = -0x8000;
  }
  return iVar1;
}

/* 10076ca0  FUN_10076ca0  (72 bytes)
 * undefined FUN_10076ca0(undefined4 * param_1, char * param_2)
 * called by: CGameText::Use
 */
void __cdecl FUN_10076ca0(undefined4 *param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 1;
  if (0 < gpGlobals->maxClients) {
    do {
      piVar1 = (int *)UTIL_PlayerByIndex(iVar2);
      if (piVar1 != (int *)0x0) {
        FUN_10076a90(piVar1,param_1,param_2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= gpGlobals->maxClients);
  }
  return;
}

/* 10076e00  FUN_10076e00  (90 bytes)
 * undefined FUN_10076e00(undefined4 param_1, int * param_2)
 * called by: CHalfLifeMultiplay::ClientUserInfoChanged, CHalfLifeTeamplay::ClientUserInfoChanged, CHalfLifeTeamplay::InitHUD
 */
void __cdecl FUN_10076e00(char *param_1,int *param_2)

{
  int iVar1;
  undefined4 uStack00000014;
  char *in_stack_0000001c;
  
  iVar1 = (**(code **)(*param_2 + 0xc4))();
  if (iVar1 != 0) {
    (*g_engfuncs.pfnMessageBegin)(1,gmsgSayText,(float *)0x0,*(edict_t **)(param_2[1] + 0x208));
    iVar1 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_2[1] + 0x208));
    (*g_engfuncs.pfnWriteByte)(iVar1);
    (*g_engfuncs.pfnWriteString)(in_stack_0000001c);
    uStack00000014 = 0x10076e58;
    (*g_engfuncs.pfnMessageEnd)();
  }
  return;
}

/* 10076e60  FUN_10076e60  (65 bytes)
 * undefined FUN_10076e60(undefined4 param_1, int param_2)
 * called by: CHalfLifeTeamplay::ClientUserInfoChanged
 */
void FUN_10076e60(char *param_1,int param_2)

{
  int iValue;
  int in_stack_00000018;
  char *in_stack_0000001c;
  
  (*g_engfuncs.pfnMessageBegin)(2,gmsgSayText,(float *)0x0,(edict_t *)0x0);
  iValue = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)(in_stack_00000018 + 4) + 0x208));
  (*g_engfuncs.pfnWriteByte)(iValue);
  (*g_engfuncs.pfnWriteString)(in_stack_0000001c);
                    /* WARNING: Could not recover jumptable at 0x10076e9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 10076eb0  FUN_10076eb0  (29 bytes)
 * undefined * FUN_10076eb0(void)
 * called by: CHalfLifeMultiplay::Think, FUN_1002c670
 */
undefined * FUN_10076eb0(void)

{
  sprintf(&DAT_102eeb54,&DAT_1009ccf4);
  return &DAT_102eeb54;
}

/* 10076f70  FUN_10076f70  (59 bytes)
 * undefined FUN_10076f70(undefined4 param_1, undefined4 param_2, int param_3, int param_4, undefined4 param_5, undefined4 param_6)
 * called by: CBaseEntity::FVisible, CBasePlayer::SlowMotionFlow, CTSSlowMotionPoint::WaitThink, CTSStunt::GoRoll, FUN_1004c4a0
 */
void __cdecl
FUN_10076f70(float *param_1,float *param_2,int param_3,int param_4,edict_t *param_5,
            TraceResult *param_6)

{
  (*g_engfuncs.pfnTraceLine)
            (param_1,param_2,-(uint)(param_4 != 0) & 0x100 | (uint)(param_3 == 1),param_5,param_6);
  return;
}

/* 10076fe0  FUN_10076fe0  (48 bytes)
 * undefined FUN_10076fe0(undefined4 param_1, undefined4 param_2, int param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * called by: CBaseMonster::GetDeathActivity, CTSStunt::CheckForBreakables, FUN_100637d0
 */
void __cdecl
FUN_10076fe0(float *param_1,float *param_2,int param_3,int param_4,edict_t *param_5,
            TraceResult *param_6)

{
  (*g_engfuncs.pfnTraceHull)(param_1,param_2,SUB14(param_3 == 1,0),param_4,param_5,param_6);
  return;
}

/* 10077040  FUN_10077040  (207 bytes)
 * undefined FUN_10077040(undefined4 * param_1)
 * called by: CTSFlag::BounceTouch, CTSKnife::BounceTouch, CTSShrapnel::BounceTouch, CTSWorldGun::BounceTouch
 */
void __cdecl FUN_10077040(undefined4 *param_1)

{
  edict_t *peVar1;
  float fVar2;
  vec_t vVar3;
  vec_t vVar4;
  vec_t vVar5;
  int iVar6;
  vec_t vVar7;
  vec_t vVar8;
  vec_t vVar9;
  globalvars_t *pgVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  pgVar10 = gpGlobals;
  lVar11 = __ftol();
  lVar12 = __ftol();
  lVar13 = __ftol();
  lVar14 = __ftol();
  peVar1 = pgVar10->trace_ent;
  fVar2 = pgVar10->trace_plane_dist;
  vVar3 = pgVar10->trace_endpos[0];
  vVar4 = pgVar10->trace_endpos[1];
  vVar5 = pgVar10->trace_endpos[2];
  iVar6 = pgVar10->trace_hitgroup;
  vVar7 = pgVar10->trace_plane_normal[0];
  vVar8 = pgVar10->trace_plane_normal[1];
  vVar9 = pgVar10->trace_plane_normal[2];
  param_1[4] = pgVar10->trace_fraction;
  param_1[3] = (int)lVar14;
  *param_1 = (int)lVar11;
  param_1[1] = (int)lVar12;
  param_1[2] = (int)lVar13;
  param_1[5] = vVar3;
  param_1[6] = vVar4;
  param_1[7] = vVar5;
  param_1[8] = fVar2;
  param_1[9] = vVar7;
  param_1[10] = vVar8;
  param_1[0xb] = vVar9;
  param_1[0xd] = iVar6;
  param_1[0xc] = peVar1;
  return;
}

/* 10077150  FUN_10077150  (61 bytes)
 * float10 FUN_10077150(float param_1, float param_2, float param_3)
 * called by: FUN_10043a70
 */
float10 __cdecl FUN_10077150(float param_1,float param_2,float param_3)

{
  if (param_3 < param_1 - param_2) {
    return (float10)param_2 + (float10)param_3;
  }
  if (param_1 - param_2 < -param_3) {
    return (float10)param_2 - (float10)param_3;
  }
  return (float10)param_1;
}

