/* mp.dll - CWorld (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1007b480  CWorld::Spawn  (36 bytes)
 * undefined Spawn()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall CWorld::Spawn(int *param_1)

{
  float10 fVar1;
  
  g_fGameOver = 0;
  (**(code **)(*param_1 + 0x20))();
  fVar1 = (float10)(*g_engfuncs.pfnCVarGetFloat)(s_sv_cheats_100a7bc4);
  _g_flWeaponCheat = (float)fVar1;
  return;
}

/* 1007b4b0  CWorld::Precache  (951 bytes)
 * undefined Precache()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall CWorld::Precache(int param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  float fVar4;
  
  _DAT_100c62dc = 0;
  (*g_engfuncs.pfnCVarSetString)(s_sv_gravity_1009f3a0,&DAT_100a7e14);
  (*g_engfuncs.pfnCVarSetString)(s_sv_stepsize_100a7e04,&DAT_100a7e10);
  (*g_engfuncs.pfnCVarSetString)(s_room_type_100a7df8,&DAT_1009f1d8);
  if (g_pGameRules != (undefined4 *)0x0) {
    FUN_1007dd7f(g_pGameRules);
  }
  g_pGameRules = InstallGameRules();
  DAT_100c0540 = (int *)GetClassPtr<CSoundEnt>(0);
  (**(code **)(*DAT_100c0540 + 0x1c))();
  if (DAT_100c0540 == (int *)0x0) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s___COULD_NOT_CREATE_SOUNDENT___100a7dd8);
  }
  FUN_1007b870();
  SENTENCEG_Init();
  TEXTURETYPE_Init();
  W_Precache();
  ClientPrecache();
  TSPrecache();
  (*g_engfuncs.pfnPrecacheSound)(s_common_null_wav_1009bfb8);
  (*g_engfuncs.pfnPrecacheSound)(s_items_suitchargeok1_wav_1009f4d0);
  (*g_engfuncs.pfnPrecacheSound)(s_items_gunpickup2_wav_1009f7a0);
  (*g_engfuncs.pfnPrecacheSound)(s_common_bodydrop3_wav_100a7dc0);
  (*g_engfuncs.pfnPrecacheSound)(s_common_bodydrop4_wav_100a7da8);
  (*g_engfuncs.pfnCVarGetFloat)(s_sv_language_100a7d9c);
  lVar3 = __ftol();
  DAT_100ae4a8 = (int)lVar3;
  if (DAT_100ae4a8 == 1) {
    (*g_engfuncs.pfnPrecacheModel)(s_models_germangibs_mdl_1009d600);
  }
  else {
    (*g_engfuncs.pfnPrecacheModel)(s_models_hgibs_mdl_1009d5ec);
    (*g_engfuncs.pfnPrecacheModel)(s_models_agibs_mdl_1009d618);
  }
  (*g_engfuncs.pfnLightStyle)(0,&DAT_1009f854);
  (*g_engfuncs.pfnLightStyle)(1,s_mmnmmommommnonmmonqnmmo_100a7d84);
  (*g_engfuncs.pfnLightStyle)(2,s_abcdefghijklmnopqrstuvwxyzyxwvut_100a7d50);
  (*g_engfuncs.pfnLightStyle)(3,s_mmmmmaaaaammmmmaaaaaabcdefgabcde_100a7d2c);
  (*g_engfuncs.pfnLightStyle)(4,s_mamamamamama_100a7d1c);
  (*g_engfuncs.pfnLightStyle)(5,s_jklmnopqrstuvwxyzyxwvutsrqponmlk_100a7cf8);
  (*g_engfuncs.pfnLightStyle)(6,s_nmonqnmomnmomomno_100a7ce4);
  (*g_engfuncs.pfnLightStyle)(7,s_mmmaaaabcdefgmmmmaaaammmaamm_100a7cc4);
  (*g_engfuncs.pfnLightStyle)(8,s_mmmaaammmaaammmabcdefaaaammmmabc_100a7c98);
  (*g_engfuncs.pfnLightStyle)(9,s_aaaaaaaazzzzzzzz_100a7c84);
  (*g_engfuncs.pfnLightStyle)(10,s_mmamammmmammamamaaamammma_100a7c68);
  (*g_engfuncs.pfnLightStyle)(0xb,s_abcdefghijklmnopqrrqponmlkjihgfe_100a7c40);
  (*g_engfuncs.pfnLightStyle)(0xc,s_mmnnmmnnnmmnn_100a7c30);
  (*g_engfuncs.pfnLightStyle)(0x3f,&DAT_1009f858);
  piVar2 = &DAT_100a7804;
  do {
    iVar1 = (*g_engfuncs.pfnDecalIndex)((char *)piVar2[-1]);
    *piVar2 = iVar1;
    piVar2 = piVar2 + 2;
  } while ((int)piVar2 < 0x100a7954);
  CBaseEntity::SUB_DoNothing((CBaseEntity *)&DAT_100ae740);
  iVar1 = FUN_1002b3a0();
  if (iVar1 == 0) {
    CBaseMonster::ShouldFadeOnDeath();
  }
  else {
    iVar1 = FUN_1002b3a0();
    if (iVar1 == 0) {
      (*g_engfuncs.pfnAlertMessage)(at_console,(char *)0x1);
      CBaseMonster::ShouldFadeOnDeath();
    }
    else {
      (*g_engfuncs.pfnAlertMessage)(at_console,(char *)0x1);
    }
  }
  fVar4 = *(float *)(*(int *)(param_1 + 4) + 0x1f8);
  if (fVar4 <= 0.0) {
    fVar4 = 4096.0;
  }
  (*g_engfuncs.pfnCVarSetFloat)(s_sv_zmax_100a7bf8,fVar4);
  if (*(int *)(*(int *)(param_1 + 4) + 0x1d0) != 0) {
    (*g_engfuncs.pfnAlertMessage)(at_aiconsole,s_Chapter_title___s_100a7be4);
    iVar1 = CBaseEntity::Create(0x100a7bd8,&DAT_100ae498,&DAT_100ae498,0);
    if (iVar1 != 0) {
      *(code **)(iVar1 + 0x10) = CBaseEntity::SUB_CallUseToggle;
      *(undefined4 *)(*(int *)(iVar1 + 4) + 0x1d4) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1d0);
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x1d0) = 0;
      *(float *)(*(int *)(iVar1 + 4) + 0x104) = gpGlobals->time + 0.3;
      *(undefined4 *)(*(int *)(iVar1 + 4) + 0x1a0) = 1;
    }
  }
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 1) == 0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = 1.0;
  }
  (*g_engfuncs.pfnCVarSetFloat)(s_v_dark_100a7bd0,fVar4);
  _DAT_100ae488 = ((int)*(char *)(*(int *)(param_1 + 4) + 0x1a0) & 2U) >> 1;
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 4) == 0) {
    (*g_engfuncs.pfnCVarSetFloat)(s_mp_defaultteam_1009f0e8,0.0);
    return;
  }
  (*g_engfuncs.pfnCVarSetFloat)(s_mp_defaultteam_1009f0e8,1.0);
  return;
}

/* 1007b8e0  CWorld::KeyValue  (1187 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CWorld::KeyValue(CWorld *this,int param_1)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  CWorld *this_00;
  uint uVar7;
  uint uVar8;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  float10 fVar13;
  undefined3 uVar9;
  
  pbVar6 = *(byte **)(param_1 + 4);
  pcVar10 = s_skyname_100a7eb0;
  pbVar4 = pbVar6;
  this_00 = this;
  do {
    bVar3 = *pbVar4;
    uVar9 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CWorld *)CONCAT31(uVar9,bVar3);
    bVar12 = bVar3 < (byte)*pcVar10;
    if (bVar3 != *pcVar10) {
LAB_1007b918:
      iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_1007b91d;
    }
    if (bVar3 == 0) break;
    bVar3 = pbVar4[1];
    this_00 = (CWorld *)CONCAT31(uVar9,bVar3);
    bVar12 = bVar3 < (byte)pcVar10[1];
    if (bVar3 != pcVar10[1]) goto LAB_1007b918;
    pbVar4 = pbVar4 + 2;
    pcVar10 = pcVar10 + 2;
  } while (bVar3 != 0);
  iVar5 = 0;
LAB_1007b91d:
  if (iVar5 == 0) {
    (*g_engfuncs.pfnCVarSetString)(s_sv_skyname_100a7ea4,*(char **)(param_1 + 8));
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar10 = s_sounds_1009bf90;
  pbVar4 = pbVar6;
  do {
    bVar3 = *pbVar4;
    uVar9 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CWorld *)CONCAT31(uVar9,bVar3);
    bVar12 = bVar3 < (byte)*pcVar10;
    if (bVar3 != *pcVar10) {
LAB_1007b96c:
      iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_1007b971;
    }
    if (bVar3 == 0) break;
    bVar3 = pbVar4[1];
    this_00 = (CWorld *)CONCAT31(uVar9,bVar3);
    bVar12 = bVar3 < (byte)pcVar10[1];
    if (bVar3 != pcVar10[1]) goto LAB_1007b96c;
    pbVar4 = pbVar4 + 2;
    pcVar10 = pcVar10 + 2;
  } while (bVar3 != 0);
  iVar5 = 0;
LAB_1007b971:
  if (iVar5 == 0) {
    iVar5 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
    gpGlobals->cdAudioTrack = iVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar10 = s_WaveHeight_1009d73c;
  pbVar4 = pbVar6;
  do {
    bVar3 = *pbVar4;
    uVar9 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CWorld *)CONCAT31(uVar9,bVar3);
    bVar12 = bVar3 < (byte)*pcVar10;
    if (bVar3 != *pcVar10) {
LAB_1007b9c6:
      iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_1007b9cb;
    }
    if (bVar3 == 0) break;
    bVar3 = pbVar4[1];
    this_00 = (CWorld *)CONCAT31(uVar9,bVar3);
    bVar12 = bVar3 < (byte)pcVar10[1];
    if (bVar3 != pcVar10[1]) goto LAB_1007b9c6;
    pbVar4 = pbVar4 + 2;
    pcVar10 = pcVar10 + 2;
  } while (bVar3 != 0);
  iVar5 = 0;
LAB_1007b9cb:
  if (iVar5 == 0) {
    fVar13 = atof((undefined *)this_00,*(byte_conflict **)(param_1 + 8));
    this->pev->scale = (float)(fVar13 * (float10)0.125);
    *(undefined4 *)(param_1 + 0xc) = 1;
    (*g_engfuncs.pfnCVarSetFloat)(s_sv_wateramp_100a7e98,this->pev->scale);
    return;
  }
  pcVar10 = s_MaxRange_100a7e8c;
  pbVar4 = pbVar6;
  do {
    bVar3 = *pbVar4;
    uVar9 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CWorld *)CONCAT31(uVar9,bVar3);
    bVar12 = bVar3 < (byte)*pcVar10;
    if (bVar3 != *pcVar10) {
LAB_1007ba38:
      iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_1007ba3d;
    }
    if (bVar3 == 0) break;
    bVar3 = pbVar4[1];
    this_00 = (CWorld *)CONCAT31(uVar9,bVar3);
    bVar12 = bVar3 < (byte)pcVar10[1];
    if (bVar3 != pcVar10[1]) goto LAB_1007ba38;
    pbVar4 = pbVar4 + 2;
    pcVar10 = pcVar10 + 2;
  } while (bVar3 != 0);
  iVar5 = 0;
LAB_1007ba3d:
  if (iVar5 == 0) {
    fVar13 = atof((undefined *)this_00,*(byte_conflict **)(param_1 + 8));
    this->pev->speed = (float)fVar13;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar10 = s_chaptertitle_100a7e7c;
  pbVar4 = pbVar6;
  do {
    bVar3 = *pbVar4;
    uVar9 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CWorld *)CONCAT31(uVar9,bVar3);
    bVar12 = bVar3 < (byte)*pcVar10;
    if (bVar3 != *pcVar10) {
LAB_1007ba8f:
      iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_1007ba94;
    }
    if (bVar3 == 0) break;
    bVar3 = pbVar4[1];
    this_00 = (CWorld *)CONCAT31(uVar9,bVar3);
    bVar12 = bVar3 < (byte)pcVar10[1];
    if (bVar3 != pcVar10[1]) goto LAB_1007ba8f;
    pbVar4 = pbVar4 + 2;
    pcVar10 = pcVar10 + 2;
  } while (bVar3 != 0);
  iVar5 = 0;
LAB_1007ba94:
  if (iVar5 == 0) {
    iVar5 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    this->pev->netname = iVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar10 = s_startdark_100a7e70;
  pbVar4 = pbVar6;
  do {
    bVar3 = *pbVar4;
    uVar9 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CWorld *)CONCAT31(uVar9,bVar3);
    bVar12 = bVar3 < (byte)*pcVar10;
    if (bVar3 != *pcVar10) {
LAB_1007bae7:
      iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_1007baec;
    }
    if (bVar3 == 0) break;
    bVar3 = pbVar4[1];
    this_00 = (CWorld *)CONCAT31(uVar9,bVar3);
    bVar12 = bVar3 < (byte)pcVar10[1];
    if (bVar3 != pcVar10[1]) goto LAB_1007bae7;
    pbVar4 = pbVar4 + 2;
    pcVar10 = pcVar10 + 2;
  } while (bVar3 != 0);
  iVar5 = 0;
LAB_1007baec:
  if (iVar5 == 0) {
    iVar5 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)(param_1 + 0xc) = 1;
    if (iVar5 != 0) {
      this->pev->spawnflags = this->pev->spawnflags | 1;
      return;
    }
  }
  else {
    pcVar10 = s_newunit_100a7e68;
    pbVar4 = pbVar6;
    do {
      bVar3 = *pbVar4;
      uVar9 = (undefined3)((uint)this_00 >> 8);
      this_00 = (CWorld *)CONCAT31(uVar9,bVar3);
      bVar12 = bVar3 < (byte)*pcVar10;
      if (bVar3 != *pcVar10) {
LAB_1007bb4f:
        iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_1007bb54;
      }
      if (bVar3 == 0) break;
      bVar3 = pbVar4[1];
      this_00 = (CWorld *)CONCAT31(uVar9,bVar3);
      bVar12 = bVar3 < (byte)pcVar10[1];
      if (bVar3 != pcVar10[1]) goto LAB_1007bb4f;
      pbVar4 = pbVar4 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar3 != 0);
    iVar5 = 0;
LAB_1007bb54:
    if (iVar5 == 0) {
      iVar5 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
      if (iVar5 != 0) {
        (*g_engfuncs.pfnCVarSetFloat)(s_sv_newunit_100a7e5c,1.0);
      }
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    pcVar10 = s_gametitle_100a7e50;
    pbVar4 = pbVar6;
    do {
      bVar3 = *pbVar4;
      uVar9 = (undefined3)((uint)this_00 >> 8);
      this_00 = (CWorld *)CONCAT31(uVar9,bVar3);
      bVar12 = bVar3 < (byte)*pcVar10;
      if (bVar3 != *pcVar10) {
LAB_1007bbb4:
        iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_1007bbb9;
      }
      if (bVar3 == 0) break;
      bVar3 = pbVar4[1];
      this_00 = (CWorld *)CONCAT31(uVar9,bVar3);
      bVar12 = bVar3 < (byte)pcVar10[1];
      if (bVar3 != pcVar10[1]) goto LAB_1007bbb4;
      pbVar4 = pbVar4 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar3 != 0);
    iVar5 = 0;
LAB_1007bbb9:
    if (iVar5 == 0) {
      iVar5 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
      if (iVar5 != 0) {
        piVar1 = &this->pev->spawnflags;
        *piVar1 = *piVar1 | 2;
      }
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    pcVar10 = s_mapteams_100a7e44;
    pbVar4 = pbVar6;
    do {
      bVar3 = *pbVar4;
      uVar9 = (undefined3)((uint)this_00 >> 8);
      this_00 = (CWorld *)CONCAT31(uVar9,bVar3);
      bVar12 = bVar3 < (byte)*pcVar10;
      if (bVar3 != *pcVar10) {
LAB_1007bc10:
        iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_1007bc15;
      }
      if (bVar3 == 0) break;
      bVar3 = pbVar4[1];
      this_00 = (CWorld *)CONCAT31(uVar9,bVar3);
      bVar12 = bVar3 < (byte)pcVar10[1];
      if (bVar3 != pcVar10[1]) goto LAB_1007bc10;
      pbVar4 = pbVar4 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar3 != 0);
    iVar5 = 0;
LAB_1007bc15:
    if (iVar5 == 0) {
      iVar5 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
      this->pev->team = iVar5;
      iVar5 = this->pev->team;
      if (iVar5 != 0) {
        CTSGameRules::SetTeamList((CTSGameRules *)&TSGameRules,gpGlobals->pStringBase + iVar5);
      }
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    pcVar10 = s_defaultteam_100a7e38;
    pbVar4 = pbVar6;
    do {
      bVar3 = *pbVar4;
      uVar9 = (undefined3)((uint)this_00 >> 8);
      this_00 = (CWorld *)CONCAT31(uVar9,bVar3);
      bVar12 = bVar3 < (byte)*pcVar10;
      if (bVar3 != *pcVar10) {
LAB_1007bc8e:
        iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_1007bc93;
      }
      if (bVar3 == 0) break;
      bVar3 = pbVar4[1];
      this_00 = (CWorld *)CONCAT31(uVar9,bVar3);
      bVar12 = bVar3 < (byte)pcVar10[1];
      if (bVar3 != pcVar10[1]) goto LAB_1007bc8e;
      pbVar4 = pbVar4 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar3 != 0);
    iVar5 = 0;
LAB_1007bc93:
    if (iVar5 == 0) {
      iVar5 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
      if (iVar5 != 0) {
        piVar1 = &this->pev->spawnflags;
        *piVar1 = *piVar1 | 4;
      }
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    pcVar10 = s_gamemode_100a7e2c;
    pbVar4 = pbVar6;
    do {
      bVar3 = *pbVar4;
      uVar9 = (undefined3)((uint)this_00 >> 8);
      this_00 = (CWorld *)CONCAT31(uVar9,bVar3);
      bVar12 = bVar3 < (byte)*pcVar10;
      if (bVar3 != *pcVar10) {
LAB_1007bcea:
        iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_1007bcef;
      }
      if (bVar3 == 0) break;
      bVar3 = pbVar4[1];
      this_00 = (CWorld *)CONCAT31(uVar9,bVar3);
      bVar12 = bVar3 < (byte)pcVar10[1];
      if (bVar3 != pcVar10[1]) goto LAB_1007bcea;
      pbVar4 = pbVar4 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar3 != 0);
    iVar5 = 0;
LAB_1007bcef:
    if (iVar5 == 0) {
      DAT_102efbbc = atoi(this_00,*(byte_conflict **)(param_1 + 8));
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    pcVar10 = s_teammodels_100a7e20;
    do {
      bVar3 = *pbVar6;
      bVar12 = bVar3 < (byte)*pcVar10;
      if (bVar3 != *pcVar10) {
LAB_1007bd3d:
        iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_1007bd42;
      }
      if (bVar3 == 0) break;
      bVar3 = pbVar6[1];
      bVar12 = bVar3 < (byte)pcVar10[1];
      if (bVar3 != pcVar10[1]) goto LAB_1007bd3d;
      pbVar6 = pbVar6 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar3 != 0);
    iVar5 = 0;
LAB_1007bd42:
    if (iVar5 == 0) {
      uVar7 = 0xffffffff;
      pcVar10 = *(char **)(param_1 + 8);
      do {
        pcVar11 = pcVar10;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar11 = pcVar10 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar2 != '\0');
      uVar7 = ~uVar7;
      pcVar10 = pcVar11 + -uVar7;
      pcVar11 = (char *)&DAT_102ef3bc;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

