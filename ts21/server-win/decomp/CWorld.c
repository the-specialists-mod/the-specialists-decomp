/* mp.dll - CWorld (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1006c530  CWorld::Spawn  (62 bytes)
 * undefined Spawn()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall CWorld::Spawn(int *param_1)

{
  float10 fVar1;
  
  DAT_1009f4a4 = 0;
  fVar1 = (float10)(*g_engfuncs.pfnCVarGetFloat)(s_mp_theonemode_10093e24);
  _DAT_102e00fc = (float)fVar1;
  (**(code **)(*param_1 + 0x10))();
  fVar1 = (float10)(*g_engfuncs.pfnCVarGetFloat)(s_sv_cheats_1009b470);
  _DAT_102e0100 = (float)fVar1;
  return;
}

/* 1006c570  CWorld::Precache  (953 bytes)
 * undefined Precache()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall CWorld::Precache(int param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  float fVar4;
  
  _DAT_100b1d9c = 0;
  (*g_engfuncs.pfnCVarSetString)(s_sv_gravity_100940c8,&DAT_1009b6c0);
  (*g_engfuncs.pfnCVarSetString)(s_sv_stepsize_1009b6b0,&DAT_1009b6bc);
  (*g_engfuncs.pfnCVarSetString)(s_room_type_1009b6a4,&DAT_10094014);
  if (DAT_1009f494 != (undefined4 *)0x0) {
    FUN_1006eb82((undefined *)DAT_1009f494);
  }
  DAT_1009f494 = InstallGameRules();
  DAT_100ac548 = (int *)GetClassPtr<CSoundEnt>(0);
  (**(code **)(*DAT_100ac548 + 0xc))();
  if (DAT_100ac548 == (int *)0x0) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s___COULD_NOT_CREATE_SOUNDENT___1009b684);
  }
  FUN_1006c930();
  SENTENCEG_Init();
  FUN_10036580();
  W_Precache();
  ClientPrecache();
  TSPrecache();
  (*g_engfuncs.pfnPrecacheSound)(s_common_null_wav_10090f10);
  (*g_engfuncs.pfnPrecacheSound)(s_items_suitchargeok1_wav_100941b0);
  (*g_engfuncs.pfnPrecacheSound)(s_items_gunpickup2_wav_10094490);
  (*g_engfuncs.pfnPrecacheSound)(s_common_bodydrop3_wav_1009b66c);
  (*g_engfuncs.pfnPrecacheSound)(s_common_bodydrop4_wav_1009b654);
  (*g_engfuncs.pfnCVarGetFloat)(s_sv_language_1009b648);
  lVar3 = __ftol();
  DAT_1009f4b8 = (int)lVar3;
  if (DAT_1009f4b8 == 1) {
    (*g_engfuncs.pfnPrecacheModel)(s_models_germangibs_mdl_1009251c);
  }
  else {
    (*g_engfuncs.pfnPrecacheModel)(s_models_hgibs_mdl_10092508);
    (*g_engfuncs.pfnPrecacheModel)(s_models_agibs_mdl_10092534);
  }
  (*g_engfuncs.pfnLightStyle)(0,&DAT_10094568);
  (*g_engfuncs.pfnLightStyle)(1,s_mmnmmommommnonmmonqnmmo_1009b630);
  (*g_engfuncs.pfnLightStyle)(2,s_abcdefghijklmnopqrstuvwxyzyxwvut_1009b5fc);
  (*g_engfuncs.pfnLightStyle)(3,s_mmmmmaaaaammmmmaaaaaabcdefgabcde_1009b5d8);
  (*g_engfuncs.pfnLightStyle)(4,s_mamamamamama_1009b5c8);
  (*g_engfuncs.pfnLightStyle)(5,s_jklmnopqrstuvwxyzyxwvutsrqponmlk_1009b5a4);
  (*g_engfuncs.pfnLightStyle)(6,s_nmonqnmomnmomomno_1009b590);
  (*g_engfuncs.pfnLightStyle)(7,s_mmmaaaabcdefgmmmmaaaammmaamm_1009b570);
  (*g_engfuncs.pfnLightStyle)(8,s_mmmaaammmaaammmabcdefaaaammmmabc_1009b544);
  (*g_engfuncs.pfnLightStyle)(9,s_aaaaaaaazzzzzzzz_1009b530);
  (*g_engfuncs.pfnLightStyle)(10,s_mmamammmmammamamaaamammma_1009b514);
  (*g_engfuncs.pfnLightStyle)(0xb,s_abcdefghijklmnopqrrqponmlkjihgfe_1009b4ec);
  (*g_engfuncs.pfnLightStyle)(0xc,s_mmnnmmnnnmmnn_1009b4dc);
  (*g_engfuncs.pfnLightStyle)(0x3f,&DAT_1009456c);
  uVar2 = 0;
  do {
    iVar1 = (*g_engfuncs.pfnDecalIndex)(*(char **)((int)&PTR_s__shot1_1009b0b0 + uVar2));
    *(int *)((int)&DAT_1009b0b4 + uVar2) = iVar1;
    uVar2 = uVar2 + 8;
  } while (uVar2 < 0x150);
  FUN_10023200();
  iVar1 = FUN_10023230();
  if (iVar1 == 0) {
    FUN_10023220();
  }
  else {
    iVar1 = FUN_10023210();
    if (iVar1 == 0) {
      (*g_engfuncs.pfnAlertMessage)(at_console,(char *)0x1);
      FUN_10023220();
    }
    else {
      (*g_engfuncs.pfnAlertMessage)(at_console,(char *)0x1);
    }
  }
  if (*(float *)(*(int *)(param_1 + 4) + 0x1f8) <= 0.0) {
    fVar4 = 4096.0;
  }
  else {
    fVar4 = *(float *)(*(int *)(param_1 + 4) + 0x1f8);
  }
  (*g_engfuncs.pfnCVarSetFloat)(s_sv_zmax_1009b4a4,fVar4);
  if (*(int *)(*(int *)(param_1 + 4) + 0x1d0) != 0) {
    (*g_engfuncs.pfnAlertMessage)(at_aiconsole,s_Chapter_title___s_1009b490);
    iVar1 = CBaseEntity::Create(0x1009b484,&DAT_1009f4a8,&DAT_1009f4a8,0);
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
  (*g_engfuncs.pfnCVarSetFloat)(s_v_dark_1009b47c,fVar4);
  _DAT_1009f49c = ((int)*(char *)(*(int *)(param_1 + 4) + 0x1a0) & 2U) >> 1;
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 4) != 0) {
    (*g_engfuncs.pfnCVarSetFloat)(s_mp_defaultteam_10093f34,1.0);
    return;
  }
  (*g_engfuncs.pfnCVarSetFloat)(s_mp_defaultteam_10093f34,0.0);
  return;
}

/* 1006c9a0  CWorld::KeyValue  (641 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CWorld::KeyValue(CWorld *this,int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  void *this_00;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  float10 fVar7;
  
  pcVar4 = *(char **)(param_1 + 4);
  iVar1 = 8;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_skyname_1009b744;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    (*g_engfuncs.pfnCVarSetString)(s_sv_skyname_1009b738,*(char **)(param_1 + 8));
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = &DAT_00000007;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_sounds_10090ee8;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    iVar1 = FUN_1006e1dd(puVar2,*(byte_conflict **)(param_1 + 8));
    gpGlobals->cdAudioTrack = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = (undefined1 *)0xb;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_WaveHeight_10092648;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    fVar7 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    this->pev->scale = (float)(fVar7 * (float10)0.125);
    *(undefined4 *)(param_1 + 0xc) = 1;
    (*g_engfuncs.pfnCVarSetFloat)(s_sv_wateramp_1009b72c,this->pev->scale);
    return;
  }
  puVar2 = &DAT_00000009;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_MaxRange_1009b720;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    fVar7 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    this->pev->speed = (float)fVar7;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar1 = 0xd;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_chaptertitle_1009b710;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    this->pev->netname = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = &DAT_0000000a;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_startdark_1009b704;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    iVar1 = FUN_1006e1dd(puVar2,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)(param_1 + 0xc) = 1;
    if (iVar1 != 0) {
      this->pev->spawnflags = this->pev->spawnflags | 1;
      return;
    }
  }
  else {
    puVar2 = &DAT_00000008;
    bVar6 = true;
    pcVar3 = pcVar4;
    pcVar5 = s_newunit_1009b6fc;
    do {
      if (puVar2 == (undefined1 *)0x0) break;
      puVar2 = puVar2 + -1;
      bVar6 = *pcVar3 == *pcVar5;
      pcVar3 = pcVar3 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      iVar1 = FUN_1006e1dd(puVar2,*(byte_conflict **)(param_1 + 8));
      if (iVar1 != 0) {
        (*g_engfuncs.pfnCVarSetFloat)(s_sv_newunit_1009b6f0,1.0);
      }
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    puVar2 = &DAT_0000000a;
    bVar6 = true;
    pcVar3 = pcVar4;
    pcVar5 = s_gametitle_1009b6e4;
    do {
      if (puVar2 == (undefined1 *)0x0) break;
      puVar2 = puVar2 + -1;
      bVar6 = *pcVar3 == *pcVar5;
      pcVar3 = pcVar3 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      iVar1 = FUN_1006e1dd(puVar2,*(byte_conflict **)(param_1 + 8));
      if (iVar1 != 0) {
        this->pev->spawnflags = this->pev->spawnflags | 2;
      }
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    iVar1 = 9;
    bVar6 = true;
    pcVar3 = pcVar4;
    pcVar5 = s_mapteams_1009b6d8;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar6 = *pcVar3 == *pcVar5;
      pcVar3 = pcVar3 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
      this->pev->team = iVar1;
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    this_00 = (void *)0xc;
    bVar6 = true;
    pcVar3 = s_defaultteam_1009b6cc;
    do {
      if (this_00 == (void *)0x0) break;
      this_00 = (void *)((int)this_00 + -1);
      bVar6 = *pcVar4 == *pcVar3;
      pcVar4 = pcVar4 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar6);
    if (bVar6) {
      iVar1 = FUN_1006e1dd(this_00,*(byte_conflict **)(param_1 + 8));
      if (iVar1 != 0) {
        this->pev->spawnflags = this->pev->spawnflags | 4;
      }
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

