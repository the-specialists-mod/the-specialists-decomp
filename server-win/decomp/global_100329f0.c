/* mp.dll - global_100329f0 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100329f0  GetClassPtr<CGunTarget>  (79 bytes)
 * undefined GetClassPtr<CGunTarget>(int param_1)
 * called by: func_guntarget
 */
void __cdecl GetClassPtr<CGunTarget>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x154),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CGunTarget::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10032a70  LinkUserMessages  (1190 bytes)
 * undefined LinkUserMessages(void)
 * called by: CBasePlayer::Precache, pfnServerActivate
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LinkUserMessages(void)

{
  if (DAT_100d96d8 == 0) {
    DAT_100d96d8 = (*g_engfuncs.pfnRegUserMsg)(s_SelAmmo_100a110c,4);
    DAT_100d96f0 = (*g_engfuncs.pfnRegUserMsg)(s_CurWeapon_100a1100,3);
    DAT_100d9754 = (*g_engfuncs.pfnRegUserMsg)(s_Geiger_100a10f8,1);
    _DAT_100d96f4 = (*g_engfuncs.pfnRegUserMsg)(s_Health_100a10f0,1);
    _DAT_100d96f8 = (*g_engfuncs.pfnRegUserMsg)(s_Damage_100a10e8,0xc);
    _DAT_100d96fc = (*g_engfuncs.pfnRegUserMsg)(s_Battery_100a10e0,2);
    DAT_100d9700 = (*g_engfuncs.pfnRegUserMsg)(s_Train_100a10d8,1);
    DAT_100d9710 = (*g_engfuncs.pfnRegUserMsg)(s_HudText_100a10d0,-1);
    gmsgSayText = (*g_engfuncs.pfnRegUserMsg)(s_SayText_100a10c8,-1);
    DAT_100d9748 = (*g_engfuncs.pfnRegUserMsg)(s_TextMsg_100a10c0,-1);
    _DAT_100d9708 = (*g_engfuncs.pfnRegUserMsg)(s_WeaponList_100a10b4,-1);
    DAT_100d96e4 = (*g_engfuncs.pfnRegUserMsg)(s_ResetHUD_100a10a8,1);
    DAT_100d96e8 = (*g_engfuncs.pfnRegUserMsg)(s_InitHUD_100a10a0,0);
    _DAT_100d96ec = (*g_engfuncs.pfnRegUserMsg)(s_GameTitle_100a1094,1);
    DAT_100d9714 = (*g_engfuncs.pfnRegUserMsg)(s_DeathMsg_100a1088,-1);
    DAT_100d9718 = (*g_engfuncs.pfnRegUserMsg)(s_ScoreInfo_100a107c,9);
    DAT_100d971c = (*g_engfuncs.pfnRegUserMsg)(s_TeamInfo_100a1070,-1);
    DAT_100d9720 = (*g_engfuncs.pfnRegUserMsg)(s_TeamScore_100a1064,-1);
    DAT_100d9724 = (*g_engfuncs.pfnRegUserMsg)(s_GameMode_100a1058,1);
    DAT_100d9728 = (*g_engfuncs.pfnRegUserMsg)(&DAT_100a1050,-1);
    DAT_100d972c = (*g_engfuncs.pfnRegUserMsg)(s_ServerName_100a1044,-1);
    DAT_100d9730 = (*g_engfuncs.pfnRegUserMsg)(s_AmmoPickup_100a1038,2);
    _DAT_100d9734 = (*g_engfuncs.pfnRegUserMsg)(s_WeapPickup_100a102c,1);
    DAT_100d9738 = (*g_engfuncs.pfnRegUserMsg)(s_ItemPickup_100a1020,-1);
    DAT_100d973c = (*g_engfuncs.pfnRegUserMsg)(s_HideWeapon_100a1014,1);
    DAT_100d974c = (*g_engfuncs.pfnRegUserMsg)(s_SetFOV_100a100c,1);
    _DAT_100d9750 = (*g_engfuncs.pfnRegUserMsg)(s_ShowMenu_100a1000,-1);
    DAT_100d96d0 = (*g_engfuncs.pfnRegUserMsg)(s_ScreenShake_100a0ff4,6);
    _DAT_100d96d4 = (*g_engfuncs.pfnRegUserMsg)(s_ScreenFade_100a0fe8,10);
    DAT_100d97d4 = (*g_engfuncs.pfnRegUserMsg)(s_TSFade_100a0fe0,-1);
    _DAT_100d970c = (*g_engfuncs.pfnRegUserMsg)(s_AmmoX_100a0fd8,2);
    DAT_100d9758 = (*g_engfuncs.pfnRegUserMsg)(s_TeamNames_100a0fcc,-1);
    DAT_100d975c = (*g_engfuncs.pfnRegUserMsg)(s_VGUIMenu_100a0fc0,1);
    DAT_100d9764 = (*g_engfuncs.pfnRegUserMsg)(s_WeaponInfo_100a0fb4,6);
    _DAT_100d9768 = (*g_engfuncs.pfnRegUserMsg)(s_ClipInfo_100a0fa8,1);
    DAT_100d9780 = (*g_engfuncs.pfnRegUserMsg)(s_WStatus_100a0fa0,3);
    DAT_100d9784 = (*g_engfuncs.pfnRegUserMsg)(s_ActItems_100a0f94,2);
    DAT_100d9760 = (*g_engfuncs.pfnRegUserMsg)(s_KFuPower_100a0f88,1);
    DAT_100d976c = (*g_engfuncs.pfnRegUserMsg)(s_TSHealth_100a0f7c,1);
    DAT_100d9770 = (*g_engfuncs.pfnRegUserMsg)(s_TSArmor_100a0f74,1);
    DAT_100d9774 = (*g_engfuncs.pfnRegUserMsg)(s_TSState_100a0f6c,1);
    DAT_100d9778 = (*g_engfuncs.pfnRegUserMsg)(s_TSCash_100a0f64,2);
    DAT_100d977c = (*g_engfuncs.pfnRegUserMsg)(s_TSSpace_100a0f5c,1);
    DAT_100d9788 = (*g_engfuncs.pfnRegUserMsg)(s_NextStunt_100a0f50,1);
    DAT_100d978c = (*g_engfuncs.pfnRegUserMsg)(&DAT_100a0f48,3);
    DAT_100d9790 = (*g_engfuncs.pfnRegUserMsg)(s_PwUpTime_100a0f3c,1);
    DAT_100d9794 = (*g_engfuncs.pfnRegUserMsg)(s_RoundTime_100a0f30,2);
    DAT_100d97ac = (*g_engfuncs.pfnRegUserMsg)(s_Objective_100a0f24,-1);
    DAT_100d97b0 = (*g_engfuncs.pfnRegUserMsg)(s_ShowObj_100a0f1c,2);
    DAT_100d97b4 = (*g_engfuncs.pfnRegUserMsg)(s_Wires_100a0f14,3);
    DAT_100d97bc = (*g_engfuncs.pfnRegUserMsg)(s_SrvSett_100a0f0c,3);
    DAT_100d97c0 = (*g_engfuncs.pfnRegUserMsg)(s_TSPAward_100a0f00,2);
    DAT_100d97c4 = (*g_engfuncs.pfnRegUserMsg)(s_TSBTime_100a0ef8,1);
    DAT_100d97c8 = (*g_engfuncs.pfnRegUserMsg)(s_TSHVoice_100a0eec,1);
    DAT_100d97cc = (*g_engfuncs.pfnRegUserMsg)(s_TSFlag_100a0ee4,4);
    DAT_100d97d0 = (*g_engfuncs.pfnRegUserMsg)(s_CustomWP_100a0ed8,-1);
    DAT_100d979c = (*g_engfuncs.pfnRegUserMsg)(s_Spectator_100a0ecc,2);
    DAT_100d97d8 = (*g_engfuncs.pfnRegUserMsg)(s_TSMBlur_100a0ec4,2);
    DAT_100d97a0 = (*g_engfuncs.pfnRegUserMsg)(s_TSMessage_100a0eb8,-1);
    DAT_100d97a4 = (*g_engfuncs.pfnRegUserMsg)(s_TSSlowMo_100a0eac,2);
    DAT_100d9798 = (*g_engfuncs.pfnRegUserMsg)(s_PTakeDam_100a0ea0,0xd);
    DAT_100d97a8 = (*g_engfuncs.pfnRegUserMsg)(s_TSFrags_100a0e98,-1);
    gmsgPlInfo = (*g_engfuncs.pfnRegUserMsg)(s_PlInfo_100a0e90,3);
    DAT_100d97dc = (*g_engfuncs.pfnRegUserMsg)(s_TSPSys_100a0e88,-1);
  }
  return;
}

/* 10032f20  player  (12 bytes)
 * undefined player(int param_1)
 */
void __cdecl player(int param_1)

{
                    /* 0x32f20  280  player */
  GetClassPtr<CBasePlayer>(param_1);
  return;
}

/* 10032f30  TrainSpeed  (87 bytes)
 * undefined4 TrainSpeed(int param_1, int param_2)
 * called by: CBasePlayer::PlayerUse, CBasePlayer::PreThink
 */
/* .so 0xd8660; PreThink m_iTrain */

undefined4 __cdecl TrainSpeed(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 < 0) {
    return 5;
  }
  if (param_1 == 0) {
    return 1;
  }
  if ((float)param_1 / (float)param_2 < 0.33) {
    return 2;
  }
  uVar1 = 3;
  if (0.66 <= (float)param_1 / (float)param_2) {
    uVar1 = 4;
  }
  return uVar1;
}

/* 10035ad0  monster_hevsuit_dead  (12 bytes)
 * undefined monster_hevsuit_dead(int param_1)
 */
void __cdecl monster_hevsuit_dead(int param_1)

{
                    /* 0x35ad0  275  monster_hevsuit_dead */
  GetClassPtr<CDeadHEV>(param_1);
  return;
}

/* 10035bc0  player_weaponstrip  (12 bytes)
 * undefined player_weaponstrip(int param_1)
 */
void __cdecl player_weaponstrip(int param_1)

{
                    /* 0x35bc0  282  player_weaponstrip */
  GetClassPtr<CStripWeapons>(param_1);
  return;
}

/* 10035c30  player_loadsaved  (12 bytes)
 * undefined player_loadsaved(int param_1)
 */
void __cdecl player_loadsaved(int param_1)

{
                    /* 0x35c30  281  player_loadsaved */
  GetClassPtr<CRevertSaved>(param_1);
  return;
}

/* 100360a0  info_intermission  (12 bytes)
 * undefined info_intermission(int param_1)
 */
void __cdecl info_intermission(int param_1)

{
                    /* 0x360a0  249  info_intermission */
  GetClassPtr<CInfoIntermission>(param_1);
  return;
}

/* 10036150  GetClassPtr<CDeadHEV>  (79 bytes)
 * undefined GetClassPtr<CDeadHEV>(int param_1)
 * called by: monster_hevsuit_dead
 */
void __cdecl GetClassPtr<CDeadHEV>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x154),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CDeadHEV::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100361b0  GetClassPtr<CStripWeapons>  (76 bytes)
 * undefined GetClassPtr<CStripWeapons>(int param_1)
 * called by: player_weaponstrip
 */
void __cdecl GetClassPtr<CStripWeapons>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CStripWeapons::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10036200  GetClassPtr<CRevertSaved>  (76 bytes)
 * undefined GetClassPtr<CRevertSaved>(int param_1)
 * called by: player_loadsaved
 */
void __cdecl GetClassPtr<CRevertSaved>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x5c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CRevertSaved::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10036250  GetClassPtr<CInfoIntermission>  (76 bytes)
 * undefined GetClassPtr<CInfoIntermission>(int param_1)
 * called by: info_intermission
 */
void __cdecl GetClassPtr<CInfoIntermission>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CInfoIntermission::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100368d0  pfnPM_FindTextureType  (95 bytes)
 * char pfnPM_FindTextureType(char * name)
 * called by: FUN_10037130
 */
char __cdecl pfnPM_FindTextureType(char *name)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = DAT_100b3724 + -1;
  iVar2 = 0;
  if (-1 < iVar4) {
    do {
      iVar3 = (iVar4 + iVar2) / 2;
      iVar1 = FUN_10088880((byte_conflict *)name,(char *)(&DAT_100af31c + iVar3 * 4),(void *)0xf);
      if (iVar1 == 0) {
        return (&DAT_100b331c)[iVar3];
      }
      if (iVar1 < 1) {
        if (iVar1 < 0) {
          iVar4 = iVar3 + -1;
        }
      }
      else {
        iVar2 = iVar3 + 1;
      }
    } while (iVar2 <= iVar4);
  }
  return 'C';
}

/* 10037580  PM_AddToTouched  (160 bytes)
 * undefined4 PM_AddToTouched(void)
 * called by: FUN_100378a0, FUN_10038730, FUN_100398c0
 */
undefined4 PM_AddToTouched(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int in_stack_00000034;
  undefined4 uStack00000038;
  undefined4 uStack0000003c;
  undefined4 uStack00000040;
  undefined4 *in_stack_00000048;
  
  iVar1 = 0;
  iVar2 = *(int *)(DAT_100b3720 + 0x4548c);
  if (0 < iVar2) {
    piVar3 = (int *)(DAT_100b3720 + 0x454c0);
    do {
      if (*piVar3 == in_stack_00000034) break;
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 0x11;
    } while (iVar1 < iVar2);
  }
  if (iVar1 != iVar2) {
    return 0;
  }
  uStack00000038 = *in_stack_00000048;
  uStack0000003c = in_stack_00000048[1];
  uStack00000040 = in_stack_00000048[2];
  if (599 < iVar2) {
    (**(code **)(DAT_100b3720 + 0x4f564))(s_Too_many_entities_were_touched__100a13e0);
  }
  puVar4 = (undefined4 *)(DAT_100b3720 + 0x45490 + *(int *)(DAT_100b3720 + 0x4548c) * 0x44);
  for (iVar2 = 0x11; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), iVar2 != 0;
      iVar2 = iVar2 + -1) {
    *puVar4 = *(undefined4 *)register0x00000010;
    puVar4 = puVar4 + 1;
  }
  *(int *)(DAT_100b3720 + 0x4548c) = *(int *)(DAT_100b3720 + 0x4548c) + 1;
  return 1;
}

/* 10037620  PM_CheckVelocity  (248 bytes)
 * undefined PM_CheckVelocity(void)
 * called by: FUN_100377c0, FUN_10037840, FUN_10039860, FUN_10039990, PM_PlayerMove
 */
void PM_CheckVelocity(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0x5c;
  fVar1 = *(float *)(*(int *)(DAT_100b3720 + 0x4f4f0) + 0x34);
  iVar2 = DAT_100b3720;
  do {
    if ((*(uint *)(iVar3 + iVar2) & DAT_100a1380) == DAT_100a1380) {
      (**(code **)(iVar2 + 0x4f568))(s_PM_Got_a_NaN_velocity__i_100a1468,iVar4);
      *(undefined4 *)(iVar3 + DAT_100b3720) = 0;
      iVar2 = DAT_100b3720;
    }
    if ((*(uint *)(iVar3 + -0x24 + iVar2) & DAT_100a1380) == DAT_100a1380) {
      (**(code **)(iVar2 + 0x4f568))(s_PM_Got_a_NaN_origin_on__i_100a144c,iVar4);
      *(undefined4 *)(iVar3 + -0x24 + DAT_100b3720) = 0;
      iVar2 = DAT_100b3720;
    }
    if (*(float *)(iVar3 + iVar2) <= fVar1) {
      if (*(float *)(iVar3 + iVar2) < -fVar1) {
        (**(code **)(iVar2 + 0x4f564))(s_PM_Got_a_velocity_too_low_on__i_100a1404,iVar4);
        *(float *)(iVar3 + DAT_100b3720) = -fVar1;
        iVar2 = DAT_100b3720;
      }
    }
    else {
      (**(code **)(iVar2 + 0x4f564))(s_PM_Got_a_velocity_too_high_on__i_100a1428,iVar4);
      *(float *)(iVar3 + DAT_100b3720) = fVar1;
      iVar2 = DAT_100b3720;
    }
    iVar3 = iVar3 + 4;
    iVar4 = iVar4 + 1;
  } while (iVar3 < 0x68);
  return;
}

/* 1003a4e0  PM_PlayerMove  (1016 bytes)
 * undefined PM_PlayerMove(undefined4 param_1)
 * called by: pfnPM_Move
 */
void __cdecl PM_PlayerMove(undefined4 param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar4;
  
  iVar4 = 0;
  *(undefined4 *)(DAT_100b3720 + 4) = param_1;
  FUN_100654a0();
  *(undefined4 *)(DAT_100b3720 + 0x4548c) = 0;
  *(float *)(DAT_100b3720 + 0x10) = (float)*(byte *)(DAT_100b3720 + 0x4545a) * 0.001;
  if (0.1 <= *(float *)(DAT_100b3720 + 0x20c)) {
    fVar1 = *(float *)(DAT_100b3720 + 0x20c);
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)(DAT_100b3720 + 0x10) = fVar1 * *(float *)(DAT_100b3720 + 0x10);
  FUN_1003a3f0();
  FUN_100362a0((float *)(DAT_100b3720 + 0x44),(float *)(DAT_100b3720 + 0x14),
               (float *)(DAT_100b3720 + 0x20),(float *)(DAT_100b3720 + 0x2c));
  if ((*(int *)(DAT_100b3720 + 0xd8) == 0) && (*(int *)(DAT_100b3720 + 0x1fc) < 1)) {
    if (((*(int *)(DAT_100b3720 + 0xdc) == 8) || (*(int *)(DAT_100b3720 + 0xdc) == 0)) ||
       (iVar3 = FUN_100388d0(), iVar3 == 0)) {
      FUN_10038730();
      *(undefined4 *)(DAT_100b3720 + 0xec) = *(undefined4 *)(DAT_100b3720 + 0xe4);
      if (*(int *)(DAT_100b3720 + 0xe0) == -1) {
        *(float *)(DAT_100b3720 + 0x9c) = -*(float *)(DAT_100b3720 + 100);
      }
      DAT_100b3728 = 0;
      if (((*(int *)(DAT_100b3720 + 0xd0) == 0) &&
          ((*(uint *)(DAT_100b3720 + 0xb8) & 0x1000000) == 0)) &&
         (iVar4 = FUN_100396d0(), iVar4 != 0)) {
        DAT_100b3728 = 1;
      }
      FUN_10065090();
      FUN_10037230();
      FUN_100657a0();
      if ((*(int *)(DAT_100b3720 + 0xd0) == 0) &&
         ((*(uint *)(DAT_100b3720 + 0xb8) & 0x1000000) == 0)) {
        if (iVar4 == 0) {
          if ((*(int *)(DAT_100b3720 + 0xdc) != 3) && (*(int *)(DAT_100b3720 + 0xdc) != 8)) {
            *(undefined4 *)(DAT_100b3720 + 0xdc) = 3;
          }
        }
        else {
          FUN_10039360(iVar4);
        }
      }
      switch(*(undefined4 *)(DAT_100b3720 + 0xdc)) {
      case 0:
        break;
      default:
        (**(code **)(DAT_100b3720 + 0x4f564))
                  (s_Bogus_pmove_player_movetype__i_o_100a1488,*(undefined4 *)(DAT_100b3720 + 0xdc),
                   *(undefined4 *)(DAT_100b3720 + 4));
        return;
      case 3:
        bVar2 = FUN_10038550();
        if (CONCAT31(extraout_var,bVar2) == 0) {
          FUN_100377c0();
        }
        if (*(float *)(DAT_100b3720 + 0xcc) != 0.0) {
          FUN_100397a0();
          FUN_100378a0();
          FUN_10038570();
          return;
        }
        if (1 < *(int *)(DAT_100b3720 + 0xe4)) {
          if (*(int *)(DAT_100b3720 + 0xe4) == 2) {
            FUN_10039dc0();
          }
          if ((*(float *)(DAT_100b3720 + 100) < 0.0) && (*(float *)(DAT_100b3720 + 0xcc) != 0.0)) {
            *(undefined4 *)(DAT_100b3720 + 0xcc) = 0;
          }
          if ((*(byte *)(DAT_100b3720 + 0x45476) & 2) == 0) {
            *(uint *)(DAT_100b3720 + 200) = *(uint *)(DAT_100b3720 + 200) & 0xfffffffd;
          }
          else {
            FUN_100651b0();
          }
          FUN_10038100();
          *(float *)(DAT_100b3720 + 0x5c) =
               *(float *)(DAT_100b3720 + 0x5c) - *(float *)(DAT_100b3720 + 0x74);
          *(float *)(DAT_100b3720 + 0x60) =
               *(float *)(DAT_100b3720 + 0x60) - *(float *)(DAT_100b3720 + 0x78);
          *(float *)(DAT_100b3720 + 100) =
               *(float *)(DAT_100b3720 + 100) - *(float *)(DAT_100b3720 + 0x7c);
          FUN_10038730();
          FUN_1003a1e0();
          return;
        }
        if ((*(byte *)(DAT_100b3720 + 0x45476) & 2) == 0) {
          *(uint *)(DAT_100b3720 + 200) = *(uint *)(DAT_100b3720 + 200) & 0xfffffffd;
        }
        else if (iVar4 == 0) {
          FUN_100651b0();
        }
        if (*(int *)(DAT_100b3720 + 0xe0) != -1) {
          *(undefined4 *)(DAT_100b3720 + 100) = 0;
          FUN_10037ea0();
        }
        PM_CheckVelocity();
        if (*(int *)(DAT_100b3720 + 0xe0) == -1) {
          FUN_10038410();
        }
        else {
          FUN_10065a00();
        }
        FUN_10038730();
        *(float *)(DAT_100b3720 + 0x5c) =
             *(float *)(DAT_100b3720 + 0x5c) - *(float *)(DAT_100b3720 + 0x74);
        *(float *)(DAT_100b3720 + 0x60) =
             *(float *)(DAT_100b3720 + 0x60) - *(float *)(DAT_100b3720 + 0x78);
        *(float *)(DAT_100b3720 + 100) =
             *(float *)(DAT_100b3720 + 100) - *(float *)(DAT_100b3720 + 0x7c);
        PM_CheckVelocity();
        bVar2 = FUN_10038550();
        if (CONCAT31(extraout_var_00,bVar2) == 0) {
          FUN_10037840();
        }
        if (*(int *)(DAT_100b3720 + 0xe0) != -1) {
          *(undefined4 *)(DAT_100b3720 + 100) = 0;
        }
        FUN_1003a030();
        FUN_1003a1e0();
        return;
      case 5:
        FUN_10038570();
        if ((*(byte *)(DAT_100b3720 + 0x45476) & 2) == 0) {
          *(uint *)(DAT_100b3720 + 200) = *(uint *)(DAT_100b3720 + 200) & 0xfffffffd;
        }
        else if (iVar4 == 0) {
          FUN_100651b0();
        }
        *(float *)(DAT_100b3720 + 0x5c) =
             *(float *)(DAT_100b3720 + 0x74) + *(float *)(DAT_100b3720 + 0x5c);
        *(float *)(DAT_100b3720 + 0x60) =
             *(float *)(DAT_100b3720 + 0x78) + *(float *)(DAT_100b3720 + 0x60);
        *(float *)(DAT_100b3720 + 100) =
             *(float *)(DAT_100b3720 + 0x7c) + *(float *)(DAT_100b3720 + 100);
        FUN_100378a0();
        *(float *)(DAT_100b3720 + 0x5c) =
             *(float *)(DAT_100b3720 + 0x5c) - *(float *)(DAT_100b3720 + 0x74);
        *(float *)(DAT_100b3720 + 0x60) =
             *(float *)(DAT_100b3720 + 0x60) - *(float *)(DAT_100b3720 + 0x78);
        *(float *)(DAT_100b3720 + 100) =
             *(float *)(DAT_100b3720 + 100) - *(float *)(DAT_100b3720 + 0x7c);
        return;
      case 6:
      case 10:
        FUN_10039990();
        return;
      case 8:
        FUN_10039ca0();
        return;
      }
    }
  }
  else {
    FUN_10038d20();
    FUN_10038730();
  }
  return;
}

/* 1003ab30  pfnPM_Move  (97 bytes)
 * void pfnPM_Move(playermove_s * ppmove, qboolean server)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnPM_Move(playermove_s *ppmove,qboolean server)

{
  uint uVar1;
  
  DAT_100b3720 = ppmove;
  PM_PlayerMove((uint)(server != 0));
  if (DAT_100b3720->onground == -1) {
    uVar1 = DAT_100b3720->flags & 0xfffffdff;
  }
  else {
    uVar1 = DAT_100b3720->flags | 0x200;
  }
  DAT_100b3720->flags = uVar1;
  if ((DAT_100b3720->multiplayer == 0) && (DAT_100b3720->movetype == 3)) {
    DAT_100b3720->friction = 1.0;
  }
  return;
}

/* 1003aba0  pfnPM_Init  (30 bytes)
 * void pfnPM_Init(playermove_s * ppmove)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void pfnPM_Init(playermove_s *ppmove)

{
  DAT_100b3720 = ppmove;
  FUN_1003a910();
  FUN_10036630();
  _DAT_100b371c = 1;
  return;
}

/* 1003ad70  ambient_generic  (12 bytes)
 * undefined ambient_generic(int param_1)
 */
void __cdecl ambient_generic(int param_1)

{
                    /* 0x3ad70  169  ambient_generic */
  GetClassPtr<CAmbientGeneric>(param_1);
  return;
}

/* 1003bdc0  env_sound  (12 bytes)
 * undefined env_sound(int param_1)
 */
void __cdecl env_sound(int param_1)

{
                    /* 0x3bdc0  201  env_sound */
  GetClassPtr<CEnvSound>(param_1);
  return;
}

/* 1003bee0  FEnvSoundInRange  (331 bytes)
 * undefined4 FEnvSoundInRange(int param_1, int param_2, float * param_3)
 * called by: CEnvSound::Think
 */
undefined4 __cdecl FEnvSoundInRange(int param_1,int param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  Vector local_50;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [8];
  int local_30;
  int local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  iVar2 = GetClassPtr<CEnvSound>(param_1);
  local_5c = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 8);
  local_58 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0xc);
  local_54 = *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0x10);
  Vector::Vector(&local_50,&local_5c);
  local_60 = local_50.z;
  local_64 = local_50.y;
  local_44 = *(float *)(param_2 + 8) + *(float *)(param_2 + 0x174);
  local_50.y = *(float *)(param_2 + 0xc) + *(float *)(param_2 + 0x178);
  local_68 = local_50.x;
  local_50.z = *(float *)(param_2 + 0x10) + *(float *)(param_2 + 0x17c);
  local_40 = local_50.y;
  local_3c = local_50.z;
  UTIL_TraceLine(&local_68,&local_44,1,*(undefined4 *)(param_1 + 0x208),local_38);
  if (((local_30 != 0) && (local_2c != 0)) || (local_28 != 1.0)) {
    return 0;
  }
  fVar1 = SQRT((local_24 - local_68) * (local_24 - local_68) +
               (local_20 - local_64) * (local_20 - local_64) +
               (local_1c - local_60) * (local_1c - local_60));
  if (*(float *)(iVar2 + 0x54) < fVar1) {
    return 0;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = fVar1;
    return 1;
  }
  return 1;
}

/* 1003c260  USENTENCEG_PickSequential  (274 bytes)
 * uint USENTENCEG_PickSequential(uint param_1, char * param_2, int param_3, int param_4)
 * called by: SENTENCEG_PlaySequentialSz
 */
uint __cdecl USENTENCEG_PickSequential(uint param_1,char *param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char local_8 [8];
  
  if (DAT_100c0530 == 0) {
    return 0xffffffff;
  }
  if ((int)param_1 < 0) {
    return 0xffffffff;
  }
  iVar5 = param_1 * 0xd;
  iVar2 = param_1 * 0xd;
  param_1 = (uint)*(byte *)(&DAT_100b38a0 + iVar2);
  if (*(byte *)(&DAT_100b38a0 + iVar2) == 0) {
    return 0xffffffff;
  }
  if ((int)param_1 <= param_3) {
    param_3 = param_1 - 1;
  }
  uVar3 = 0xffffffff;
  pcVar6 = (char *)&DAT_100a1160;
  do {
    pcVar7 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar6 = pcVar7 + -uVar3;
  pcVar7 = param_2;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar6 = (char *)(&DAT_100b3890 + iVar5);
  do {
    pcVar7 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar5 = -1;
  pcVar6 = param_2;
  do {
    pcVar8 = pcVar6;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  pcVar6 = pcVar7 + -uVar3;
  pcVar7 = pcVar8 + -1;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  sprintf(local_8,&DAT_1009ccf4);
  uVar3 = 0xffffffff;
  pcVar6 = local_8;
  do {
    pcVar7 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar5 = -1;
  do {
    pcVar6 = param_2;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar6 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar6;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -uVar3;
  pcVar6 = pcVar6 + -1;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar6 = pcVar6 + 1;
  }
  if ((int)param_1 <= param_3) {
    return ~-(uint)(param_4 != 0) & param_1;
  }
  return param_3 + 1;
}

/* 1003c380  USENTENCEG_Pick  (307 bytes)
 * uint USENTENCEG_Pick(uint param_1, char * param_2)
 * called by: SENTENCEG_PlayRndI, SENTENCEG_PlayRndSz
 */
uint __cdecl USENTENCEG_Pick(uint param_1,char *param_2)

{
  undefined *puVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char local_8 [8];
  
  if (DAT_100c0530 == 0) {
    return 0xffffffff;
  }
  if ((int)param_1 < 0) {
    return 0xffffffff;
  }
  bVar3 = *(byte *)(&DAT_100b38a0 + param_1 * 0xd);
  iVar7 = param_1 * 0xd;
  puVar1 = &DAT_100b38a4 + param_1 * 0x34;
  do {
    bVar4 = 0;
    param_1 = 0;
    if (bVar3 != 0) {
      do {
        if (puVar1[param_1] != -1) {
          bVar3 = puVar1[param_1];
          puVar1[param_1] = 0xff;
          uVar5 = 0xffffffff;
          pcVar8 = (char *)&DAT_100a1160;
          goto code_r0x1003c428;
        }
        bVar4 = bVar4 + 1;
        param_1 = (uint)bVar4;
      } while (bVar4 < bVar3);
    }
    FUN_1003c1f0((int)puVar1,(uint)bVar3);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar9;
    if (cVar2 == '\0') break;
code_r0x1003c428:
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
  }
  uVar5 = ~uVar5;
  pcVar8 = pcVar9 + -uVar5;
  pcVar9 = param_2;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar8 = (char *)(&DAT_100b3890 + iVar7);
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5;
  iVar7 = -1;
  pcVar8 = param_2;
  do {
    pcVar10 = pcVar8;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar10 = pcVar8 + 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar2 != '\0');
  pcVar8 = pcVar9 + -uVar5;
  pcVar9 = pcVar10 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  sprintf(local_8,&DAT_1009ccf4);
  uVar5 = 0xffffffff;
  pcVar8 = local_8;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5;
  iVar7 = -1;
  do {
    pcVar8 = param_2;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar8 = param_2 + 1;
    cVar2 = *param_2;
    param_2 = pcVar8;
  } while (cVar2 != '\0');
  pcVar9 = pcVar9 + -uVar5;
  pcVar8 = pcVar8 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar8 = pcVar8 + 1;
  }
  return (uint)bVar3;
}

/* 1003c4c0  SENTENCEG_GetIndex  (114 bytes)
 * int SENTENCEG_GetIndex(byte.conflict * param_1)
 * called by: CBasePlayer::SetSuitUpdate, SENTENCEG_PlayRndSz, SENTENCEG_PlaySequentialSz
 */
int __cdecl SENTENCEG_GetIndex(byte_conflict *param_1)

{
  int *piVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  if (((DAT_100c0530 != 0) && (param_1 != (byte_conflict *)0x0)) && (iVar5 = 0, DAT_100b38a0 != 0))
  {
    puVar7 = &DAT_100b38a0;
    do {
      pbVar6 = (byte *)(puVar7 + -4);
      pbVar3 = param_1;
      do {
        bVar2 = *pbVar3;
        bVar8 = bVar2 < *pbVar6;
        if (bVar2 != *pbVar6) {
LAB_1003c50f:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_1003c514;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar3[1];
        bVar8 = bVar2 < pbVar6[1];
        if (bVar2 != pbVar6[1]) goto LAB_1003c50f;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_1003c514:
      if (iVar4 == 0) {
        return iVar5;
      }
      piVar1 = puVar7 + 0xd;
      puVar7 = puVar7 + 0xd;
      iVar5 = iVar5 + 1;
    } while (*piVar1 != 0);
  }
  return -1;
}

/* 1003c540  SENTENCEG_PlayRndI  (109 bytes)
 * uint SENTENCEG_PlayRndI(undefined4 param_1, uint param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * called by: EMIT_GROUPID_SUIT
 */
uint __cdecl
SENTENCEG_PlayRndI(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  uint uVar1;
  char local_40 [64];
  
  if (DAT_100c0530 == 0) {
    return 0xffffffff;
  }
  local_40[0] = '\0';
  uVar1 = USENTENCEG_Pick(param_2,local_40);
  if ((0 < (int)uVar1) && (&stack0x00000000 != (undefined1 *)0x40)) {
    EMIT_SOUND_DYN(local_40,param_1,2,local_40,param_3,param_4,param_5);
  }
  return uVar1;
}

/* 1003c5b0  SENTENCEG_PlayRndSz  (148 bytes)
 * uint SENTENCEG_PlayRndSz(void * param_1, byte.conflict * param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * called by: CSpeaker::SpeakerThink
 */
uint __cdecl
SENTENCEG_PlayRndSz(void *param_1,byte_conflict *param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
  uint uVar1;
  char local_40 [64];
  
  if (DAT_100c0530 == 0) {
    return 0xffffffff;
  }
  local_40[0] = '\0';
  uVar1 = SENTENCEG_GetIndex(param_2);
  if ((int)uVar1 < 0) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_No_such_sentence_group__s_100a20c4,param_2);
    return 0xffffffff;
  }
  uVar1 = USENTENCEG_Pick(uVar1,local_40);
  if ((-1 < (int)uVar1) && (local_40[0] != '\0')) {
    EMIT_SOUND_DYN(param_1,param_1,2,local_40,param_3,param_4,param_5);
  }
  return uVar1;
}

/* 1003c650  SENTENCEG_PlaySequentialSz  (139 bytes)
 * uint SENTENCEG_PlaySequentialSz(void * param_1, byte.conflict * param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, int param_7, int param_8)
 * called by: PlayLockSounds
 */
uint __cdecl
SENTENCEG_PlaySequentialSz
          (void *param_1,byte_conflict *param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,int param_7,int param_8)

{
  uint uVar1;
  char local_40 [64];
  
  if (DAT_100c0530 == 0) {
    return 0xffffffff;
  }
  local_40[0] = '\0';
  uVar1 = SENTENCEG_GetIndex(param_2);
  if ((int)uVar1 < 0) {
    return 0xffffffff;
  }
  uVar1 = USENTENCEG_PickSequential(uVar1,local_40,param_7,param_8);
  if ((-1 < (int)uVar1) && (local_40[0] != '\0')) {
    EMIT_SOUND_DYN(param_1,param_1,2,local_40,param_3,param_4,param_5);
  }
  return uVar1;
}

/* 1003c6e0  SENTENCEG_Init  (775 bytes)
 * undefined SENTENCEG_Init(void)
 * called by: CWorld::Precache
 */
/* WARNING: Type propagation algorithm not settling */

void SENTENCEG_Init(void)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  void *extraout_ECX;
  uint uVar9;
  void *extraout_ECX_00;
  void *pvVar10;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  int *piVar14;
  bool bVar15;
  char *szFmt;
  int *local_24c;
  byte_conflict *local_248;
  int iStack_244;
  int local_240;
  byte *pbStack_23c;
  byte abStack_238 [56];
  undefined4 local_200;
  char acStack_1f9 [505];
  
  if (DAT_100c0530 == 0) {
    DAT_100c0534 = 0;
    puVar5 = &DAT_100b6130;
    for (iVar8 = 0x1800; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    puVar5 = &DAT_100b3890;
    for (iVar8 = 0xa28; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    puVar5 = &local_200;
    for (iVar8 = 0x80; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    piVar14 = &local_240;
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar14 = 0;
      piVar14 = piVar14 + 1;
    }
    local_248 = (byte_conflict *)0x0;
    local_248 = (*g_engfuncs.pfnLoadFileForMe)(s_sound_sentences_txt_100a2158,(int *)&local_24c);
    if (local_248 != (byte_conflict *)0x0) {
      puVar5 = FUN_1003cc80((int)local_248,iStack_244,&local_240,
                            (undefined4 *)((int)acStack_1f9 + 1),0x1ff);
      if (puVar5 != (undefined4 *)0x0) {
        local_24c = (int *)&DAT_100b386c;
        pvVar10 = extraout_ECX;
LAB_1003c783:
        iVar8 = 0;
        cVar2 = acStack_1f9[1];
        while ((cVar2 != '\0' && (cVar2 == ' '))) {
          uVar4 = iVar8 + 2;
          iVar8 = iVar8 + 1;
          cVar2 = acStack_1f9[uVar4];
        }
        cVar2 = acStack_1f9[iVar8 + 1];
        pbVar7 = (byte *)(acStack_1f9 + iVar8 + 1);
        pbStack_23c = pbVar7;
        if (((cVar2 != '\0') && (cVar2 != '/')) &&
           (uVar6 = FUN_1007da70(pvVar10,(int)cVar2), uVar6 != 0)) {
          bVar3 = *pbVar7;
          iVar11 = iVar8;
          while ((bVar3 != 0 && (bVar3 != 0x20))) {
            uVar4 = iVar11 + 2;
            iVar11 = iVar11 + 1;
            bVar3 = acStack_1f9[uVar4];
          }
          if (acStack_1f9[iVar11 + 1] == '\0') goto LAB_1003c953;
          if (DAT_100c0534 < 0x601) {
            uVar6 = 0xffffffff;
            acStack_1f9[iVar11 + 1] = 0;
            pbVar13 = pbVar7;
            do {
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              bVar3 = *pbVar13;
              pbVar13 = pbVar13 + 1;
            } while (bVar3 != 0);
            if (0xf < ~uVar6 - 1) {
              (*g_engfuncs.pfnAlertMessage)
                        (at_warning,s_Sentence__s_longer_than__d_lette_100a2134,pbVar7,0xf);
            }
            iVar12 = DAT_100c0534 * 4;
            DAT_100c0534 = DAT_100c0534 + 1;
            uVar6 = 0xffffffff;
            do {
              pbVar13 = pbVar7;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pbVar13 = pbVar7 + 1;
              bVar3 = *pbVar7;
              pbVar7 = pbVar13;
            } while (bVar3 != 0);
            uVar6 = ~uVar6;
            pbVar7 = pbVar13 + -uVar6;
            pbVar13 = (byte *)(&DAT_100b6130 + iVar12);
            for (uVar9 = uVar6 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pbVar13 = *(undefined4 *)pbVar7;
              pbVar7 = pbVar7 + 4;
              pbVar13 = pbVar13 + 4;
            }
            iVar12 = iVar11 + -1;
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pbVar13 = *pbVar7;
              pbVar7 = pbVar7 + 1;
              pbVar13 = pbVar13 + 1;
            }
            if ((iVar8 < iVar12) &&
               (uVar6 = FUN_1007da9e((void *)(int)acStack_1f9[iVar11],(int)acStack_1f9[iVar11]),
               pvVar10 = extraout_ECX_00, uVar6 != 0)) {
              do {
                uVar6 = FUN_1007da9e(pvVar10,(int)acStack_1f9[iVar12 + 1]);
                if (uVar6 == 0) {
                  if (iVar8 < iVar12) {
                    acStack_1f9[iVar12 + 2] = 0;
                    pbVar7 = abStack_238;
                    pbVar13 = pbStack_23c;
                    goto LAB_1003c8b1;
                  }
                  break;
                }
                iVar12 = iVar12 + -1;
                pvVar10 = extraout_ECX_01;
              } while (iVar8 < iVar12);
            }
            goto LAB_1003c953;
          }
          szFmt = s_Too_many_sentences_in_sentences__100a210c;
          goto LAB_1003c98a;
        }
        goto LAB_1003c953;
      }
LAB_1003c995:
      (*g_engfuncs.pfnFreeFile)(local_248);
      DAT_100c0530 = 1;
      if (DAT_100b38a0 != 0) {
        piVar14 = &DAT_100b38a0;
        do {
          if (0x100b613f < (int)piVar14) {
            return;
          }
          FUN_1003c1f0((int)(piVar14 + 1),*piVar14);
          piVar1 = piVar14 + 0xd;
          piVar14 = piVar14 + 0xd;
        } while (*piVar1 != 0);
      }
    }
  }
  return;
  while( true ) {
    bVar3 = pbVar7[1];
    bVar15 = bVar3 < pbVar13[1];
    if (bVar3 != pbVar13[1]) goto LAB_1003c8d9;
    pbVar7 = pbVar7 + 2;
    pbVar13 = pbVar13 + 2;
    if (bVar3 == 0) break;
LAB_1003c8b1:
    bVar3 = *pbVar7;
    bVar15 = bVar3 < *pbVar13;
    if (bVar3 != *pbVar13) {
LAB_1003c8d9:
      iVar8 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
      goto LAB_1003c8de;
    }
    if (bVar3 == 0) break;
  }
  iVar8 = 0;
LAB_1003c8de:
  if (iVar8 == 0) {
    if (0x100b389f < (int)local_24c) {
      *local_24c = *local_24c + 1;
    }
  }
  else {
    piVar14 = local_24c + 0xd;
    if (0x100b613f < (int)piVar14) {
      szFmt = s_Too_many_sentence_groups_in_sent_100a20e0;
      local_24c = piVar14;
LAB_1003c98a:
      (*g_engfuncs.pfnAlertMessage)(at_error,szFmt);
      goto LAB_1003c995;
    }
    uVar6 = 0xffffffff;
    pbVar7 = pbStack_23c;
    do {
      pbVar13 = pbVar7;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pbVar13 = pbVar7 + 1;
      bVar3 = *pbVar7;
      pbVar7 = pbVar13;
    } while (bVar3 != 0);
    uVar6 = ~uVar6;
    pbVar7 = pbVar13 + -uVar6;
    pbVar13 = (byte *)(local_24c + 9);
    for (uVar9 = uVar6 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(int *)pbVar13 = *(int *)pbVar7;
      pbVar7 = pbVar7 + 4;
      pbVar13 = pbVar13 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar13 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      pbVar13 = pbVar13 + 1;
    }
    uVar6 = 0xffffffff;
    pbVar7 = pbStack_23c;
    do {
      pbVar13 = pbVar7;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pbVar13 = pbVar7 + 1;
      bVar3 = *pbVar7;
      pbVar7 = pbVar13;
    } while (bVar3 != 0);
    uVar6 = ~uVar6;
    *piVar14 = 1;
    pbVar7 = pbVar13 + -uVar6;
    pbVar13 = abStack_238;
    for (uVar9 = uVar6 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pbVar13 = *(undefined4 *)pbVar7;
      pbVar7 = pbVar7 + 4;
      pbVar13 = pbVar13 + 4;
    }
    for (uVar6 = uVar6 & 3; local_24c = piVar14, uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar13 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      pbVar13 = pbVar13 + 1;
    }
  }
LAB_1003c953:
  puVar5 = FUN_1003cc80((int)local_248,iStack_244,&local_240,(undefined4 *)((int)acStack_1f9 + 1),
                        0x1ff);
  pvVar10 = extraout_ECX_02;
  if (puVar5 == (undefined4 *)0x0) goto LAB_1003c995;
  goto LAB_1003c783;
}

/* 1003c9f0  SENTENCEG_Lookup  (179 bytes)
 * int SENTENCEG_Lookup(int param_1, char * param_2)
 * called by: CBasePlayer::SetSuitUpdate, EMIT_SOUND_DYN, UTIL_EmitAmbientSound
 */
int __thiscall SENTENCEG_Lookup(void *this,int param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  void *extraout_ECX;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte_conflict *pbVar6;
  char *pcVar7;
  char *pcVar8;
  char local_8 [8];
  
  iVar5 = 0;
  if (0 < DAT_100c0534) {
    pbVar6 = (byte_conflict *)&DAT_100b6130;
    do {
      uVar2 = FUN_100887b0(this,pbVar6,(byte_conflict *)(param_1 + 1));
      if (uVar2 == 0) {
        if (param_2 == (char *)0x0) {
          return iVar5;
        }
        uVar2 = 0xffffffff;
        pcVar7 = (char *)&DAT_100a1160;
        goto code_r0x1003ca46;
      }
      iVar5 = iVar5 + 1;
      pbVar6 = pbVar6 + 0x10;
      this = extraout_ECX;
    } while (iVar5 < DAT_100c0534);
  }
  return -1;
  while( true ) {
    uVar2 = uVar2 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
    if (cVar1 == '\0') break;
code_r0x1003ca46:
    pcVar8 = pcVar7;
    if (uVar2 == 0) break;
  }
  uVar2 = ~uVar2;
  pcVar7 = pcVar8 + -uVar2;
  pcVar8 = param_2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  sprintf(local_8,&DAT_1009ccf4);
  uVar2 = 0xffffffff;
  pcVar7 = local_8;
  do {
    pcVar8 = pcVar7;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar4 = -1;
  do {
    pcVar7 = param_2;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar7 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar7;
  } while (cVar1 != '\0');
  pcVar8 = pcVar8 + -uVar2;
  pcVar7 = pcVar7 + -1;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar7 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return iVar5;
}

/* 1003cab0  EMIT_SOUND_DYN  (216 bytes)
 * undefined EMIT_SOUND_DYN(undefined4 param_1, undefined4 param_2, char * param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * called by: CBaseButton::ButtonActivate, CBaseButton::ButtonTouch, CBaseButton::ButtonUse, CBaseButton::TakeDamage, CBaseDoor::DoorGoDown, CBaseDoor::DoorGoUp, CBaseDoor::DoorHitBottom, CBaseDoor::DoorHitTop, CBaseDoor::TraceAttack, CBaseMonster::GibMonster, CBaseMonster::Killed, CBasePlayer::BuyAmmo, ... (112 total)
 */
void __thiscall
EMIT_SOUND_DYN(void *this,edict_t *param_1,int param_2,char *param_3,float param_4,float param_5,
              int param_6)

{
  int iVar1;
  longlong lVar2;
  char local_20 [32];
  
  if ((param_3 != (char *)0x0) && (*param_3 == '!')) {
    iVar1 = SENTENCEG_Lookup(this,(int)param_3,local_20);
    if (-1 < iVar1) {
      lVar2 = __ftol();
      (*g_engfuncs.pfnEmitSound)(param_1,param_2,local_20,param_4,param_5,param_6,(int)lVar2);
      return;
    }
    (*g_engfuncs.pfnAlertMessage)(at_aiconsole,s_Unable_to_find__s_in_sentences_t_100a216c,param_3);
    return;
  }
  lVar2 = __ftol();
  (*g_engfuncs.pfnEmitSound)(param_1,param_2,param_3,param_4,param_5,param_6,(int)lVar2);
  return;
}

/* 1003cb90  EMIT_SOUND_SUIT  (115 bytes)
 * undefined EMIT_SOUND_SUIT(undefined4 param_1, void * param_2)
 * called by: CBasePlayer::CheckSuitUpdate, CItemSuit::MyTouch
 */
void __cdecl EMIT_SOUND_SUIT(undefined4 param_1,void *param_2)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = (float10)(*g_engfuncs.pfnCVarGetFloat)(s_suitvolume_100a2190);
  iVar1 = (*g_engfuncs.pfnRandomLong)(0,1);
  if (iVar1 != 0) {
    (*g_engfuncs.pfnRandomLong)(0,6);
  }
  if (0.05 < (float)fVar2) {
    EMIT_SOUND_DYN(param_2,param_1,6,param_2,(float)fVar2,0x3f4ccccd,0);
  }
  return;
}

/* 1003cc10  EMIT_GROUPID_SUIT  (108 bytes)
 * undefined EMIT_GROUPID_SUIT(undefined4 param_1, uint param_2)
 * called by: CBasePlayer::CheckSuitUpdate
 */
void __cdecl EMIT_GROUPID_SUIT(undefined4 param_1,uint param_2)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = (float10)(*g_engfuncs.pfnCVarGetFloat)(s_suitvolume_100a2190);
  iVar1 = (*g_engfuncs.pfnRandomLong)(0,1);
  if (iVar1 != 0) {
    (*g_engfuncs.pfnRandomLong)(0,6);
  }
  if (0.05 < (float)fVar2) {
    SENTENCEG_PlayRndI(param_1,param_2,(float)fVar2,0x3f4ccccd,0);
  }
  return;
}

/* 1003cd20  TEXTURETYPE_LoadStandardMaterials  (437 bytes)
 * undefined4 TEXTURETYPE_LoadStandardMaterials(void)
 * called by: TEXTURETYPE_Init
 */
undefined4 TEXTURETYPE_LoadStandardMaterials(void)

{
  char cVar1;
  int iVar2;
  byte_conflict *buffer;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *pvVar7;
  void *extraout_ECX_02;
  uint uVar8;
  void *extraout_ECX_03;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  int local_20c;
  int local_208;
  byte_conflict *pbStack_204;
  char local_200 [512];
  
  local_20c = 0;
  pcVar10 = local_200;
  for (iVar6 = 0x80; iVar6 != 0; iVar6 = iVar6 + -1) {
    pcVar10[0] = '\0';
    pcVar10[1] = '\0';
    pcVar10[2] = '\0';
    pcVar10[3] = '\0';
    pcVar10 = pcVar10 + 4;
  }
  buffer = (*g_engfuncs.pfnLoadFileForMe)(s_sound_materials_txt_100a13cc,&local_208);
  if (buffer == (byte_conflict *)0x0) {
    return 0;
  }
  pbStack_204 = buffer;
  puVar3 = FUN_1003cc80((int)buffer,local_208,&local_20c,(undefined4 *)local_200,0x1ff);
  pvVar7 = extraout_ECX;
  do {
    if ((puVar3 == (undefined4 *)0x0) || (0x3ff < (int)DAT_100c053c)) {
      uVar5 = (*g_engfuncs.pfnFreeFile)(buffer);
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
    iVar6 = 0;
    cVar1 = local_200[0];
    while ((cVar1 != '\0' &&
           (uVar4 = FUN_1007dac6((void *)(int)local_200[iVar6],(int)local_200[iVar6]),
           pvVar7 = extraout_ECX_00, uVar4 != 0))) {
      cVar1 = local_200[iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    cVar1 = local_200[iVar6];
    if (((cVar1 != '\0') && (cVar1 != '/')) && (uVar4 = FUN_1007da70(pvVar7,(int)cVar1), uVar4 != 0)
       ) {
      uVar4 = FUN_1007e08b((int)local_200[iVar6]);
      pvVar7 = DAT_100c053c;
      *(char *)((int)DAT_100c053c + 0x100c0130) = (char)uVar4;
      cVar1 = local_200[iVar6 + 1];
      while ((iVar9 = iVar6 + 1, cVar1 != '\0' &&
             (uVar4 = FUN_1007dac6(pvVar7,(int)cVar1), pvVar7 = extraout_ECX_01, uVar4 != 0))) {
        cVar1 = local_200[iVar6 + 2];
        iVar6 = iVar9;
      }
      if (local_200[iVar6 + 1] != '\0') {
        do {
          uVar4 = FUN_1007dac6(pvVar7,(int)local_200[iVar9]);
          if (uVar4 != 0) break;
          iVar2 = iVar9 + 1;
          iVar9 = iVar9 + 1;
          pvVar7 = extraout_ECX_02;
        } while (local_200[iVar2] != '\0');
        buffer = pbStack_204;
        if (local_200[iVar9] != '\0') {
          if (iVar6 + 0x10 <= iVar9) {
            iVar9 = iVar6 + 0x10;
          }
          uVar4 = 0xffffffff;
          local_200[iVar9] = '\0';
          iVar9 = (int)DAT_100c053c * 4;
          DAT_100c053c = (void *)((int)DAT_100c053c + 1);
          pcVar10 = local_200 + iVar6 + 1;
          do {
            pcVar11 = pcVar10;
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            pcVar11 = pcVar10 + 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar11;
          } while (cVar1 != '\0');
          uVar4 = ~uVar4;
          pcVar10 = pcVar11 + -uVar4;
          pcVar11 = (char *)(&DAT_100bc130 + iVar9);
          for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *pcVar11 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar11 = pcVar11 + 1;
          }
        }
      }
    }
    puVar3 = FUN_1003cc80((int)buffer,local_208,&local_20c,(undefined4 *)local_200,0x1ff);
    pvVar7 = extraout_ECX_03;
  } while( true );
}

/* 1003cee0  TEXTURETYPE_LoadMapMaterials  (476 bytes)
 * undefined4 TEXTURETYPE_LoadMapMaterials(void)
 * called by: TEXTURETYPE_Init
 */
undefined4 TEXTURETYPE_LoadMapMaterials(void)

{
  char cVar1;
  int iVar2;
  byte_conflict *buffer;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *pvVar7;
  void *extraout_ECX_02;
  uint uVar8;
  void *extraout_ECX_03;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  int local_270;
  byte_conflict *pbStack_26c;
  int local_268;
  char local_264 [512];
  char local_64 [100];
  
  pcVar10 = local_264;
  for (iVar6 = 0x80; iVar6 != 0; iVar6 = iVar6 + -1) {
    pcVar10[0] = '\0';
    pcVar10[1] = '\0';
    pcVar10[2] = '\0';
    pcVar10[3] = '\0';
    pcVar10 = pcVar10 + 4;
  }
  local_268 = 0;
  sprintf(local_64,(byte_conflict *)s_sound__s_materials_txt_100a219c);
  buffer = (*g_engfuncs.pfnLoadFileForMe)(local_64,&local_270);
  if (buffer == (byte_conflict *)0x0) {
    return 0;
  }
  pbStack_26c = buffer;
  puVar3 = FUN_1003cc80((int)buffer,local_270,&local_268,(undefined4 *)local_264,0x1ff);
  pvVar7 = extraout_ECX;
  do {
    if ((puVar3 == (undefined4 *)0x0) || (0x3ff < (int)DAT_100c053c)) {
      uVar5 = (*g_engfuncs.pfnFreeFile)(buffer);
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
    iVar6 = 0;
    cVar1 = local_264[0];
    while ((cVar1 != '\0' &&
           (uVar4 = FUN_1007dac6(pvVar7,(int)local_264[iVar6]), pvVar7 = extraout_ECX_00, uVar4 != 0
           ))) {
      cVar1 = local_264[iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    cVar1 = local_264[iVar6];
    if (((cVar1 != '\0') && (cVar1 != '/')) && (uVar4 = FUN_1007da70(pvVar7,(int)cVar1), uVar4 != 0)
       ) {
      uVar4 = FUN_1007e08b((int)local_264[iVar6]);
      pvVar7 = DAT_100c053c;
      *(char *)((int)DAT_100c053c + 0x100c0130) = (char)uVar4;
      cVar1 = local_264[iVar6 + 1];
      while ((iVar9 = iVar6 + 1, cVar1 != '\0' &&
             (uVar4 = FUN_1007dac6(pvVar7,(int)cVar1), pvVar7 = extraout_ECX_01, uVar4 != 0))) {
        cVar1 = local_264[iVar6 + 2];
        iVar6 = iVar9;
      }
      if (local_264[iVar6 + 1] != '\0') {
        do {
          uVar4 = FUN_1007dac6(pvVar7,(int)local_264[iVar9]);
          if (uVar4 != 0) break;
          iVar2 = iVar9 + 1;
          iVar9 = iVar9 + 1;
          pvVar7 = extraout_ECX_02;
        } while (local_264[iVar2] != '\0');
        buffer = pbStack_26c;
        if (local_264[iVar9] != '\0') {
          if (iVar6 + 0x10 <= iVar9) {
            iVar9 = iVar6 + 0x10;
          }
          uVar4 = 0xffffffff;
          local_264[iVar9] = '\0';
          iVar9 = (int)DAT_100c053c * 4;
          DAT_100c053c = (void *)((int)DAT_100c053c + 1);
          pcVar10 = local_264 + iVar6 + 1;
          do {
            pcVar11 = pcVar10;
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            pcVar11 = pcVar10 + 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar11;
          } while (cVar1 != '\0');
          uVar4 = ~uVar4;
          pcVar10 = pcVar11 + -uVar4;
          pcVar11 = (char *)(&DAT_100bc130 + iVar9);
          for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *pcVar11 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar11 = pcVar11 + 1;
          }
        }
      }
    }
    puVar3 = FUN_1003cc80((int)buffer,local_270,&local_268,(undefined4 *)local_264,0x1ff);
    pvVar7 = extraout_ECX_03;
  } while( true );
}

/* 1003d0c0  TEXTURETYPE_Init  (81 bytes)
 * undefined TEXTURETYPE_Init(void)
 * called by: CWorld::Precache
 */
void TEXTURETYPE_Init(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (DAT_100c0538 == 0) {
    puVar4 = &DAT_100bc130;
    for (iVar3 = 0x1000; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    puVar4 = &DAT_100c0130;
    for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    DAT_100c053c = 0;
    uVar1 = TEXTURETYPE_LoadStandardMaterials();
    uVar2 = TEXTURETYPE_LoadMapMaterials();
    DAT_100c0538 = uVar2 & 0xff | uVar1 & 0xff;
  }
  return;
}

/* 1003d120  TEXTURETYPE_Find  (68 bytes)
 * undefined1 TEXTURETYPE_Find(byte.conflict * param_1)
 * called by: TEXTURETYPE_PlaySound
 */
undefined1 __cdecl TEXTURETYPE_Find(byte_conflict *param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < DAT_100c053c) {
    pcVar2 = (char *)&DAT_100bc130;
    do {
      iVar1 = FUN_10088880(param_1,pcVar2,(void *)0xf);
      if (iVar1 == 0) {
        return *(undefined1 *)((int)&DAT_100c0130 + iVar3);
      }
      iVar3 = iVar3 + 1;
      pcVar2 = pcVar2 + 0x10;
    } while (iVar3 < DAT_100c053c);
  }
  return 0x43;
}

/* 1003d170  TEXTURETYPE_PlaySound  (1254 bytes)
 * float10 TEXTURETYPE_PlaySound(int param_1, float param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, float param_8)
 * called by: CTSStunt::GoRoll, FUN_10014f00
 */
float10 __cdecl
TEXTURETYPE_PlaySound
          (int param_1,float param_2,undefined4 param_3,undefined4 param_4,float param_5,
          undefined4 param_6,undefined4 param_7,float param_8)

{
  byte bVar1;
  char cVar2;
  edict_t *peVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  byte_conflict *pbVar10;
  char *pcVar11;
  undefined4 *puVar12;
  char *pcVar13;
  byte_conflict *pbVar14;
  bool bVar15;
  float10 fVar16;
  float fVar17;
  float *v1;
  undefined4 uVar18;
  undefined4 uVar19;
  float *v2;
  undefined4 local_6c;
  float fStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  char *apcStack_50 [4];
  byte_conflict abStack_40 [15];
  undefined1 uStack_31;
  
  peVar3 = *(edict_t **)(param_1 + 0x30);
  local_6c = 0x3f4ccccd;
  if ((peVar3 == (edict_t *)0x0) &&
     (peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar3 == (edict_t *)0x0)) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = peVar3->pvPrivateData;
  }
  cVar2 = '\0';
  if (((piVar9 == (int *)0x0) || (iVar4 = (**(code **)(*piVar9 + 0x44))(), iVar4 == 0)) ||
     (iVar4 = (**(code **)(*piVar9 + 0x44))(), iVar4 == 1)) {
    fStack_5c = param_2;
    uStack_58 = param_3;
    uStack_54 = param_4;
    fStack_68 = param_5;
    uStack_64 = param_6;
    uStack_60 = param_7;
    if (piVar9 == (int *)0x0) {
      v2 = &fStack_68;
      v1 = &fStack_5c;
      peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    }
    else {
      v2 = &fStack_68;
      peVar3 = *(edict_t **)(piVar9[1] + 0x208);
      v1 = &fStack_5c;
    }
    pcVar11 = (*g_engfuncs.pfnTraceTexture)(peVar3,v1,v2);
    if (pcVar11 != (char *)0x0) {
      if ((*pcVar11 == '-') || (*pcVar11 == '+')) {
        pcVar11 = pcVar11 + 2;
      }
      cVar2 = *pcVar11;
      if (((cVar2 == '{') || (cVar2 == '!')) || ((cVar2 == '~' || (cVar2 == ' ')))) {
        pcVar11 = pcVar11 + 1;
      }
      uVar7 = 0xffffffff;
      do {
        pcVar13 = pcVar11;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar13 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar2 != '\0');
      uVar7 = ~uVar7;
      pbVar10 = (byte_conflict *)(pcVar13 + -uVar7);
      pbVar14 = abStack_40;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pbVar14 = *(undefined4 *)pbVar10;
        pbVar10 = pbVar10 + 4;
        pbVar14 = pbVar14 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pbVar14 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        pbVar14 = pbVar14 + 1;
      }
      uStack_31 = 0;
      cVar2 = TEXTURETYPE_Find(abStack_40);
    }
  }
  else {
    cVar2 = 'F';
  }
  switch(cVar2) {
  case 'D':
    param_8 = 0.9;
    param_2 = 0.1;
    apcStack_50[0] = s_player_pl_dirt1_wav_1009d3d0;
    apcStack_50[1] = s_player_pl_dirt2_wav_1009d3bc;
    apcStack_50[2] = s_player_pl_dirt3_wav_1009d3a8;
    iVar4 = 3;
    break;
  default:
    param_8 = 0.9;
    param_2 = 0.6;
    apcStack_50[0] = s_player_pl_step1_wav_1009d480;
    apcStack_50[1] = s_player_pl_step2_wav_1009d46c;
    goto LAB_1003d4cf;
  case 'F':
    if (param_8 == 7.00649e-45) {
      return (float10)0.0;
    }
    param_8 = 1.0;
    param_2 = 0.2;
    apcStack_50[0] = s_weapons_bullet_hit1_wav_100a21dc;
    apcStack_50[1] = s_weapons_bullet_hit2_wav_100a21c4;
    local_6c = 0x3f800000;
    goto LAB_1003d4cf;
  case 'G':
    param_8 = 0.9;
    param_2 = 0.5;
    apcStack_50[0] = s_player_pl_grate1_wav_1009d32c;
    apcStack_50[1] = s_player_pl_grate4_wav_1009d2e4;
    goto LAB_1003d4cf;
  case 'M':
    param_8 = 0.9;
    param_2 = 0.3;
    apcStack_50[0] = s_player_pl_metal1_wav_1009d42c;
    apcStack_50[1] = s_player_pl_metal2_wav_1009d414;
    goto LAB_1003d4cf;
  case 'P':
  case 'Y':
    param_8 = 0.8;
    param_2 = 0.2;
    apcStack_50[0] = s_debris_glass1_wav_1009d0b8;
    apcStack_50[1] = s_debris_glass2_wav_1009d0a4;
    apcStack_50[2] = s_debris_glass3_wav_1009d090;
    iVar4 = 3;
    break;
  case 'S':
    param_8 = 0.9;
    param_2 = 0.0;
    apcStack_50[0] = s_player_pl_slosh1_wav_1009d2cc;
    apcStack_50[1] = s_player_pl_slosh3_wav_1009d29c;
    apcStack_50[2] = s_player_pl_slosh2_wav_1009d2b4;
    apcStack_50[3] = s_player_pl_slosh4_wav_1009d284;
    iVar4 = 4;
    break;
  case 'T':
    param_8 = 0.8;
    param_2 = 0.2;
    apcStack_50[0] = s_player_pl_tile1_wav_1009d270;
    apcStack_50[1] = s_player_pl_tile3_wav_1009d248;
    apcStack_50[2] = s_player_pl_tile2_wav_1009d25c;
    apcStack_50[3] = s_player_pl_tile4_wav_1009d234;
    iVar4 = 4;
    break;
  case 'V':
    param_8 = 0.5;
    param_2 = 0.3;
    apcStack_50[0] = s_player_pl_duct1_wav_1009d380;
    apcStack_50[1] = s_player_pl_duct1_wav_1009d380;
LAB_1003d4cf:
    iVar4 = 2;
    break;
  case 'W':
    param_8 = 0.9;
    param_2 = 0.2;
    apcStack_50[0] = s_debris_wood1_wav_1009d10c;
    apcStack_50[1] = s_debris_wood2_wav_1009d0f8;
    apcStack_50[2] = s_debris_wood3_wav_1009d0e4;
    iVar4 = 3;
  }
  if (piVar9 != (int *)0x0) {
    pcVar11 = s_func_breakable_100a21b4;
    pbVar5 = (byte *)(gpGlobals->pStringBase + *(int *)piVar9[1]);
    do {
      bVar1 = *pbVar5;
      bVar15 = bVar1 < (byte)*pcVar11;
      if (bVar1 != *pcVar11) {
LAB_1003d514:
        iVar6 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_1003d519;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar15 = bVar1 < (byte)pcVar11[1];
      if (bVar1 != pcVar11[1]) goto LAB_1003d514;
      pbVar5 = pbVar5 + 2;
      pcVar11 = pcVar11 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_1003d519:
    if (iVar6 == 0) {
      param_8 = param_8 * 0.6666667;
      param_2 = param_2 * 0.5;
      goto LAB_1003d5f7;
    }
  }
  if (((cVar2 == 'P') && (*(float *)(param_1 + 0x10) != 1.0)) &&
     (iVar6 = (*g_engfuncs.pfnRandomLong)(0,1), iVar6 != 0)) {
    puVar12 = (undefined4 *)(param_1 + 0x14);
    UTIL_Sparks(puVar12);
    fVar16 = (float10)(*g_engfuncs.pfnRandomFloat)(0.7,1.0);
    fVar17 = (float)fVar16;
    iVar6 = (*g_engfuncs.pfnRandomLong)(0,1);
    if (iVar6 == 0) {
      pcVar11 = s_buttons_spark5_wav_1009c424;
    }
    else {
      if (iVar6 != 1) goto LAB_1003d5f7;
      pcVar11 = s_buttons_spark6_wav_1009c410;
    }
    uVar18 = 0;
    uVar19 = 0x3f4ccccd;
    peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    UTIL_EmitAmbientSound(peVar3,puVar12,pcVar11,fVar17,uVar19,uVar18);
  }
LAB_1003d5f7:
  peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
  (*g_engfuncs.pfnRandomLong)(0,0xf);
  uVar19 = 0;
  iVar4 = (*g_engfuncs.pfnRandomLong)(0,iVar4 + -1);
  UTIL_EmitAmbientSound
            (peVar3,(undefined4 *)(param_1 + 0x14),apcStack_50[iVar4],param_8,local_6c,uVar19);
  return (float10)param_2;
}

/* 1003d6a0  speaker  (12 bytes)
 * undefined speaker(int param_1)
 */
void __cdecl speaker(int param_1)

{
                    /* 0x3d6a0  286  speaker */
  GetClassPtr<CSpeaker>(param_1);
  return;
}

/* 1003dac0  GetClassPtr<CAmbientGeneric>  (79 bytes)
 * undefined GetClassPtr<CAmbientGeneric>(int param_1)
 * called by: ambient_generic
 */
void __cdecl GetClassPtr<CAmbientGeneric>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xc4), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CAmbientGeneric::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1003db10  GetClassPtr<CEnvSound>  (76 bytes)
 * undefined GetClassPtr<CEnvSound>(int param_1)
 * called by: FEnvSoundInRange, env_sound
 */
void __cdecl GetClassPtr<CEnvSound>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x5c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CEnvSound::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1003db60  GetClassPtr<CSpeaker>  (76 bytes)
 * undefined GetClassPtr<CSpeaker>(int param_1)
 * called by: speaker
 */
void __cdecl GetClassPtr<CSpeaker>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x58), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CSpeaker::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1003dbb0  soundent  (12 bytes)
 * undefined soundent(int param_1)
 */
void __cdecl soundent(int param_1)

{
                    /* 0x3dbb0  284  soundent */
  GetClassPtr<CSoundEnt>(param_1);
  return;
}

/* 1003dfa0  GetClassPtr<CSoundEnt>  (79 bytes)
 * undefined GetClassPtr<CSoundEnt>(int param_1)
 * called by: CWorld::Precache, soundent
 */
void __cdecl GetClassPtr<CSoundEnt>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x864),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CSoundEnt::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1003e1a0  info_null  (12 bytes)
 * undefined info_null(int param_1)
 */
void __cdecl info_null(int param_1)

{
                    /* 0x3e1a0  251  info_null */
  GetClassPtr<CNullEntity>(param_1);
  return;
}

/* 1003e1b0  info_player_deathmatch  (12 bytes)
 * undefined info_player_deathmatch(int param_1)
 */
void __cdecl info_player_deathmatch(int param_1)

{
                    /* 0x3e1b0  252  info_player_deathmatch
                       0x3e1b0  253  info_player_start
                       0x3e1b0  254  info_player_team1
                       0x3e1b0  255  info_player_team2
                       0x3e1b0  256  info_player_team3
                       0x3e1b0  257  info_player_team4 */
  GetClassPtr<CBaseDMStart>(param_1);
  return;
}

/* 1003e4a0  FireTargets  (164 bytes)
 * undefined FireTargets(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * called by: CBaseDelay::SUB_UseTargets, CBaseDoor::DoorHitBottom, CBaseDoor::DoorHitTop, CBaseEntity::SUB_UseTargets, CBasePlayer::UpdateClientData, CBreakable::BreakableRespawn, CFuncPlat::HitBottom, CFuncPlat::HitTop, CFuncTrackTrain::DeadEnd, CFuncTrackTrain::Next, CFuncTrain::Wait, CGamePlayerZone::Use, ... (36 total)
 */
void __cdecl
FireTargets(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  edict_t *pEdictStartSearchAfter;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  pEdictStartSearchAfter = (edict_t *)0x0;
  if (param_1 != 0) {
    (*g_engfuncs.pfnAlertMessage)(at_aiconsole,s_Firing____s__100a2704,param_1);
    while (pEdictStartSearchAfter =
                (*g_engfuncs.pfnFindEntityByString)
                          (pEdictStartSearchAfter,s_targetname_1009c68c,(char *)param_1),
          pEdictStartSearchAfter != (edict_t *)0x0) {
      iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter);
      if (iVar2 == 0) {
        return;
      }
      piVar1 = pEdictStartSearchAfter->pvPrivateData;
      if ((piVar1 != (int *)0x0) && ((((int *)piVar1[1])[0x69] & 0x40000000U) == 0)) {
        (*g_engfuncs.pfnAlertMessage)
                  (at_aiconsole,s_Found___s__firing___s__100a26ec,
                   gpGlobals->pStringBase + *(int *)piVar1[1],param_1);
        (**(code **)(*piVar1 + 0xd8))(in_stack_00000018,in_stack_0000001c,in_stack_00000020,param_5)
        ;
      }
    }
  }
  return;
}

/* 1003e550  DelayedUse  (12 bytes)
 * undefined DelayedUse(int param_1)
 */
void __cdecl DelayedUse(int param_1)

{
                    /* 0x3e550  162  DelayedUse */
  GetClassPtr<CBaseDelay>(param_1);
  return;
}

/* 1003e720  SetMovedir  (258 bytes)
 * undefined SetMovedir(int param_1)
 * called by: CBaseButton::Spawn, CBaseDoor::Spawn, CBaseTrigger::InitTrigger, CBlood::Spawn, CFuncConveyor::Spawn, CGibShooter::Spawn, CMomentaryDoor::Spawn, CTriggerMonsterJump::Spawn
 */
void __cdecl SetMovedir(int param_1)

{
  float *pfVar1;
  globalvars_t *pgVar2;
  
  pfVar1 = (float *)(param_1 + 0x50);
  if (((*(float *)(param_1 + 0x50) == 0.0) && (*(int *)(param_1 + 0x54) == -0x40800000)) &&
     (*(float *)(param_1 + 0x58) == 0.0)) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  }
  else if (((*pfVar1 == 0.0) && (*(int *)(param_1 + 0x54) == -0x40000000)) &&
          (*(float *)(param_1 + 0x58) == 0.0)) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0xbf800000;
  }
  else {
    UTIL_MakeVectors(pfVar1);
    pgVar2 = gpGlobals;
    *(vec_t *)(param_1 + 0x44) = gpGlobals->v_forward[0];
    *(vec_t *)(param_1 + 0x48) = pgVar2->v_forward[1];
    *(vec_t *)(param_1 + 0x4c) = pgVar2->v_forward[2];
  }
  *pfVar1 = DAT_100ae498;
  *(undefined4 *)(param_1 + 0x54) = DAT_100ae49c;
  *(undefined4 *)(param_1 + 0x58) = DAT_100ae4a0;
  return;
}

/* 1003ee10  GetClassPtr<CNullEntity>  (76 bytes)
 * undefined GetClassPtr<CNullEntity>(int param_1)
 * called by: info_null
 */
void __cdecl GetClassPtr<CNullEntity>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CNullEntity::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1003ee60  GetClassPtr<CBaseDMStart>  (76 bytes)
 * undefined GetClassPtr<CBaseDMStart>(int param_1)
 * called by: info_player_deathmatch
 */
void __cdecl GetClassPtr<CBaseDMStart>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CBaseDMStart::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1003eeb0  GetClassPtr<CBaseDelay>  (76 bytes)
 * undefined GetClassPtr<CBaseDelay>(int param_1)
 * called by: CBaseDelay::SUB_UseTargets, CBreakable::BreakableRespawn, CTSPlayerAmount::ClientConnect, DelayedUse, FUN_1004ac20
 */
void __cdecl GetClassPtr<CBaseDelay>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x5c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CBaseDelay::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1003fdd0  pfnAllowLagCompensation  (6 bytes)
 * int pfnAllowLagCompensation(void)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pfnAllowLagCompensation(void)

{
  return 1;
}

/* 100403a0  func_friction  (12 bytes)
 * undefined func_friction(int param_1)
 */
void __cdecl func_friction(int param_1)

{
                    /* 0x403a0  210  func_friction */
  GetClassPtr<CFrictionModifier>(param_1);
  return;
}

/* 10040510  trigger_auto  (12 bytes)
 * undefined trigger_auto(int param_1)
 */
void __cdecl trigger_auto(int param_1)

{
                    /* 0x40510  290  trigger_auto */
  GetClassPtr<CAutoTrigger>(param_1);
  return;
}

/* 100406e0  trigger_relay  (12 bytes)
 * undefined trigger_relay(int param_1)
 */
void __cdecl trigger_relay(int param_1)

{
                    /* 0x406e0  304  trigger_relay */
  GetClassPtr<CTriggerRelay>(param_1);
  return;
}

/* 10040820  multi_manager  (12 bytes)
 * undefined multi_manager(int param_1)
 */
void __cdecl multi_manager(int param_1)

{
                    /* 0x40820  276  multi_manager */
  GetClassPtr<CMultiManager>(param_1);
  return;
}

/* 10040c40  env_render  (12 bytes)
 * undefined env_render(int param_1)
 */
void __cdecl env_render(int param_1)

{
                    /* 0x40c40  198  env_render */
  GetClassPtr<CRenderFxManager>(param_1);
  return;
}

/* 10040d30  trigger  (12 bytes)
 * undefined trigger(int param_1)
 */
void __cdecl trigger(int param_1)

{
                    /* 0x40d30  289  trigger */
  GetClassPtr<CBaseTrigger>(param_1);
  return;
}

/* 10040f10  trigger_hurt  (12 bytes)
 * undefined trigger_hurt(int param_1)
 */
void __cdecl trigger_hurt(int param_1)

{
                    /* 0x40f10  299  trigger_hurt */
  GetClassPtr<CTriggerHurt>(param_1);
  return;
}

/* 10040f20  trigger_monsterjump  (12 bytes)
 * undefined trigger_monsterjump(int param_1)
 */
void __cdecl trigger_monsterjump(int param_1)

{
                    /* 0x40f20  300  trigger_monsterjump */
  GetClassPtr<CTriggerMonsterJump>(param_1);
  return;
}

/* 10041080  trigger_cdaudio  (12 bytes)
 * undefined trigger_cdaudio(int param_1)
 */
void __cdecl trigger_cdaudio(int param_1)

{
                    /* 0x41080  293  trigger_cdaudio */
  GetClassPtr<CTriggerCDAudio>(param_1);
  return;
}

/* 100410d0  PlayCDTrack  (117 bytes)
 * undefined PlayCDTrack(int param_1)
 * called by: FUN_10041150, FUN_100412e0
 */
void __cdecl PlayCDTrack(int param_1)

{
  edict_t *pEdict;
  int in_stack_00000008;
  char *pcVar1;
  char *pcVar2;
  char acStack_3c [60];
  
  pEdict = (*g_engfuncs.pfnPEntityOfEntIndex)(1);
  if (pEdict != (edict_t *)0x0) {
    if ((-2 < in_stack_00000008) && (in_stack_00000008 < 0x1f)) {
      if (in_stack_00000008 == -1) {
        (*g_engfuncs.pfnClientCommand)(pEdict,s_cd_pause_100a2be4);
        return;
      }
      pcVar1 = acStack_3c;
      pcVar2 = s_cd_play__3d_100a2bd4;
      sprintf(pcVar1,(byte_conflict *)s_cd_play__3d_100a2bd4);
      (*g_engfuncs.pfnClientCommand)(pEdict,acStack_3c,pcVar1,pcVar2,in_stack_00000008);
      return;
    }
    (*g_engfuncs.pfnAlertMessage)(at_console,s_TriggerCDAudio___Track__d_out_of_100a2bac);
  }
  return;
}

/* 10041180  target_cdaudio  (12 bytes)
 * undefined target_cdaudio(int param_1)
 */
void __cdecl target_cdaudio(int param_1)

{
                    /* 0x41180  287  target_cdaudio */
  GetClassPtr<CTargetCDAudio>(param_1);
  return;
}

/* 100418f0  trigger_multiple  (12 bytes)
 * undefined trigger_multiple(int param_1)
 */
void __cdecl trigger_multiple(int param_1)

{
                    /* 0x418f0  301  trigger_multiple */
  GetClassPtr<CTriggerMultiple>(param_1);
  return;
}

/* 10041930  trigger_once  (12 bytes)
 * undefined trigger_once(int param_1)
 */
void __cdecl trigger_once(int param_1)

{
                    /* 0x41930  302  trigger_once */
  GetClassPtr<CTriggerOnce>(param_1);
  return;
}

/* 10041d30  trigger_counter  (12 bytes)
 * undefined trigger_counter(int param_1)
 */
void __cdecl trigger_counter(int param_1)

{
                    /* 0x41d30  296  trigger_counter */
  GetClassPtr<CTriggerCounter>(param_1);
  return;
}

/* 10041d70  trigger_transition  (12 bytes)
 * undefined trigger_transition(int param_1)
 */
void __cdecl trigger_transition(int param_1)

{
                    /* 0x41d70  306  trigger_transition */
  GetClassPtr<CTriggerVolume>(param_1);
  return;
}

/* 10041de0  fireanddie  (12 bytes)
 * undefined fireanddie(int param_1)
 */
void __cdecl fireanddie(int param_1)

{
                    /* 0x41de0  204  fireanddie */
  GetClassPtr<CFireAndDie>(param_1);
  return;
}

/* 10041e50  trigger_changelevel  (12 bytes)
 * undefined trigger_changelevel(int param_1)
 */
void __cdecl trigger_changelevel(int param_1)

{
                    /* 0x41e50  294  trigger_changelevel */
  GetClassPtr<CChangeLevel>(param_1);
  return;
}

/* 100425c0  BuildChangeList  (19 bytes)
 * undefined BuildChangeList(void)
 * called by: pfnParmsChangeLevel
 */
void BuildChangeList(void)

{
  CChangeLevel::ChangeList();
  return;
}

/* 10042990  func_ladder  (12 bytes)
 * undefined func_ladder(int param_1)
 */
void __cdecl func_ladder(int param_1)

{
                    /* 0x42990  214  func_ladder */
  GetClassPtr<CLadder>(param_1);
  return;
}

/* 10042a60  trigger_push  (12 bytes)
 * undefined trigger_push(int param_1)
 */
void __cdecl trigger_push(int param_1)

{
                    /* 0x42a60  303  trigger_push */
  GetClassPtr<CTriggerPush>(param_1);
  return;
}

/* 10042e60  trigger_teleport  (12 bytes)
 * undefined trigger_teleport(int param_1)
 */
void __cdecl trigger_teleport(int param_1)

{
                    /* 0x42e60  305  trigger_teleport */
  GetClassPtr<CTriggerTeleport>(param_1);
  return;
}

/* 10042e90  trigger_autosave  (12 bytes)
 * undefined trigger_autosave(int param_1)
 */
void __cdecl trigger_autosave(int param_1)

{
                    /* 0x42e90  291  trigger_autosave */
  GetClassPtr<CTriggerSave>(param_1);
  return;
}

/* 10042f30  trigger_endsection  (12 bytes)
 * undefined trigger_endsection(int param_1)
 */
void __cdecl trigger_endsection(int param_1)

{
                    /* 0x42f30  297  trigger_endsection */
  GetClassPtr<CTriggerEndSection>(param_1);
  return;
}

/* 100430b0  trigger_gravity  (12 bytes)
 * undefined trigger_gravity(int param_1)
 */
void __cdecl trigger_gravity(int param_1)

{
                    /* 0x430b0  298  trigger_gravity */
  GetClassPtr<CTriggerGravity>(param_1);
  return;
}

/* 10043110  trigger_changetarget  (12 bytes)
 * undefined trigger_changetarget(int param_1)
 */
void __cdecl trigger_changetarget(int param_1)

{
                    /* 0x43110  295  trigger_changetarget */
  GetClassPtr<CTriggerChangeTarget>(param_1);
  return;
}

/* 10043250  trigger_camera  (12 bytes)
 * undefined trigger_camera(int param_1)
 */
void __cdecl trigger_camera(int param_1)

{
                    /* 0x43250  292  trigger_camera */
  GetClassPtr<CTriggerCamera>(param_1);
  return;
}

/* 10043d80  GetClassPtr<CFrictionModifier>  (76 bytes)
 * undefined GetClassPtr<CFrictionModifier>(int param_1)
 * called by: func_friction
 */
void __cdecl GetClassPtr<CFrictionModifier>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x58), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CFrictionModifier::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10043dd0  GetClassPtr<CAutoTrigger>  (76 bytes)
 * undefined GetClassPtr<CAutoTrigger>(int param_1)
 * called by: trigger_auto
 */
void __cdecl GetClassPtr<CAutoTrigger>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,100), peVar1 = (entvars_t *)param_1,
        puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CAutoTrigger::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10043e20  GetClassPtr<CTriggerRelay>  (76 bytes)
 * undefined GetClassPtr<CTriggerRelay>(int param_1)
 * called by: trigger_relay
 */
void __cdecl GetClassPtr<CTriggerRelay>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x60), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTriggerRelay::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10043e70  GetClassPtr<CMultiManager>  (79 bytes)
 * undefined GetClassPtr<CMultiManager>(int param_1)
 * called by: CMultiManager::Clone, multi_manager
 */
void __cdecl GetClassPtr<CMultiManager>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x17c),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CMultiManager::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10043ec0  GetClassPtr<CRenderFxManager>  (76 bytes)
 * undefined GetClassPtr<CRenderFxManager>(int param_1)
 * called by: env_render
 */
void __cdecl GetClassPtr<CRenderFxManager>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CRenderFxManager::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10043f10  GetClassPtr<CBaseTrigger>  (79 bytes)
 * undefined GetClassPtr<CBaseTrigger>(int param_1)
 * called by: trigger
 */
void __cdecl GetClassPtr<CBaseTrigger>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xf0), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CBaseTrigger::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10043f60  GetClassPtr<CTriggerHurt>  (79 bytes)
 * undefined GetClassPtr<CTriggerHurt>(int param_1)
 * called by: trigger_hurt
 */
void __cdecl GetClassPtr<CTriggerHurt>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xf0), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTriggerHurt::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10043fb0  GetClassPtr<CTriggerMonsterJump>  (79 bytes)
 * undefined GetClassPtr<CTriggerMonsterJump>(int param_1)
 * called by: trigger_monsterjump
 */
void __cdecl GetClassPtr<CTriggerMonsterJump>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xf0), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTriggerMonsterJump::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10044000  GetClassPtr<CTriggerCDAudio>  (79 bytes)
 * undefined GetClassPtr<CTriggerCDAudio>(int param_1)
 * called by: trigger_cdaudio
 */
void __cdecl GetClassPtr<CTriggerCDAudio>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xf0), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTriggerCDAudio::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10044050  GetClassPtr<CTargetCDAudio>  (76 bytes)
 * undefined GetClassPtr<CTargetCDAudio>(int param_1)
 * called by: target_cdaudio
 */
void __cdecl GetClassPtr<CTargetCDAudio>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTargetCDAudio::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100440a0  GetClassPtr<CTriggerMultiple>  (79 bytes)
 * undefined GetClassPtr<CTriggerMultiple>(int param_1)
 * called by: trigger_multiple
 */
void __cdecl GetClassPtr<CTriggerMultiple>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xf0), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTriggerMultiple::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100440f0  GetClassPtr<CTriggerOnce>  (79 bytes)
 * undefined GetClassPtr<CTriggerOnce>(int param_1)
 * called by: trigger_once
 */
void __cdecl GetClassPtr<CTriggerOnce>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xf0), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTriggerOnce::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10044140  GetClassPtr<CTriggerCounter>  (79 bytes)
 * undefined GetClassPtr<CTriggerCounter>(int param_1)
 * called by: trigger_counter
 */
void __cdecl GetClassPtr<CTriggerCounter>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xf0), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTriggerCounter::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10044190  GetClassPtr<CTriggerVolume>  (76 bytes)
 * undefined GetClassPtr<CTriggerVolume>(int param_1)
 * called by: trigger_transition
 */
void __cdecl GetClassPtr<CTriggerVolume>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTriggerVolume::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100441e0  GetClassPtr<CFireAndDie>  (76 bytes)
 * undefined GetClassPtr<CFireAndDie>(int param_1)
 * called by: CChangeLevel::ChangeLevelNow, fireanddie
 */
void __cdecl GetClassPtr<CFireAndDie>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x5c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CFireAndDie::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10044240  GetClassPtr<CChangeLevel>  (79 bytes)
 * undefined GetClassPtr<CChangeLevel>(int param_1)
 * called by: trigger_changelevel
 */
void __cdecl GetClassPtr<CChangeLevel>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x138),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CChangeLevel::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10044290  GetClassPtr<CLadder>  (79 bytes)
 * undefined GetClassPtr<CLadder>(int param_1)
 * called by: func_ladder
 */
void __cdecl GetClassPtr<CLadder>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xf0), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CLadder::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100442e0  GetClassPtr<CTriggerPush>  (79 bytes)
 * undefined GetClassPtr<CTriggerPush>(int param_1)
 * called by: trigger_push
 */
void __cdecl GetClassPtr<CTriggerPush>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xf0), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTriggerPush::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10044330  GetClassPtr<CTriggerTeleport>  (79 bytes)
 * undefined GetClassPtr<CTriggerTeleport>(int param_1)
 * called by: trigger_teleport
 */
void __cdecl GetClassPtr<CTriggerTeleport>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xf0), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTriggerTeleport::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10044380  GetClassPtr<CTriggerSave>  (79 bytes)
 * undefined GetClassPtr<CTriggerSave>(int param_1)
 * called by: trigger_autosave
 */
void __cdecl GetClassPtr<CTriggerSave>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xf0), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTriggerSave::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100443d0  GetClassPtr<CTriggerEndSection>  (79 bytes)
 * undefined GetClassPtr<CTriggerEndSection>(int param_1)
 * called by: trigger_endsection
 */
void __cdecl GetClassPtr<CTriggerEndSection>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xf0), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTriggerEndSection::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10044420  GetClassPtr<CTriggerGravity>  (79 bytes)
 * undefined GetClassPtr<CTriggerGravity>(int param_1)
 * called by: trigger_gravity
 */
void __cdecl GetClassPtr<CTriggerGravity>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xf0), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTriggerGravity::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10044470  GetClassPtr<CTriggerChangeTarget>  (76 bytes)
 * undefined GetClassPtr<CTriggerChangeTarget>(int param_1)
 * called by: trigger_changetarget
 */
void __cdecl GetClassPtr<CTriggerChangeTarget>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x60), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTriggerChangeTarget::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100444c0  GetClassPtr<CTriggerCamera>  (79 bytes)
 * undefined GetClassPtr<CTriggerCamera>(int param_1)
 * called by: trigger_camera
 */
void __cdecl GetClassPtr<CTriggerCamera>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x98), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTriggerCamera::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100483d0  deadcorpse  (12 bytes)
 * undefined deadcorpse(int param_1)
 */
void __cdecl deadcorpse(int param_1)

{
                    /* 0x483d0  184  deadcorpse */
  GetClassPtr<CTSDeadCorpse>(param_1);
  return;
}

/* 100486a0  GetClassPtr<CTSDeadCorpse>  (76 bytes)
 * undefined GetClassPtr<CTSDeadCorpse>(int param_1)
 * called by: deadcorpse
 */
void __cdecl GetClassPtr<CTSDeadCorpse>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x5c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSDeadCorpse::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 100486f0  ts_emitter  (12 bytes)
 * undefined ts_emitter(int param_1)
 */
void __cdecl ts_emitter(int param_1)

{
                    /* 0x486f0  311  ts_emitter */
  GetClassPtr<CTSEmitter>(param_1);
  return;
}

/* 10048700  ts_particle  (12 bytes)
 * undefined ts_particle(int param_1)
 */
void __cdecl ts_particle(int param_1)

{
                    /* 0x48700  321  ts_particle */
  GetClassPtr<CTSParticle>(param_1);
  return;
}

/* 10048710  ts_wind  (12 bytes)
 * undefined ts_wind(int param_1)
 */
void __cdecl ts_wind(int param_1)

{
                    /* 0x48710  331  ts_wind */
  GetClassPtr<CTSWind>(param_1);
  return;
}

/* 10048720  ts_fog  (12 bytes)
 * undefined ts_fog(int param_1)
 */
void __cdecl ts_fog(int param_1)

{
                    /* 0x48720  313  ts_fog */
  GetClassPtr<CTSFog>(param_1);
  return;
}

/* 10048c40  GetClassPtr<CTSEmitter>  (79 bytes)
 * undefined GetClassPtr<CTSEmitter>(int param_1)
 * called by: ts_emitter
 */
void __cdecl GetClassPtr<CTSEmitter>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x104),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSEmitter::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10048c90  GetClassPtr<CTSParticle>  (79 bytes)
 * undefined GetClassPtr<CTSParticle>(int param_1)
 * called by: ts_particle
 */
void __cdecl GetClassPtr<CTSParticle>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x214),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSParticle::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10048ce0  GetClassPtr<CTSWind>  (76 bytes)
 * undefined GetClassPtr<CTSWind>(int param_1)
 * called by: ts_wind
 */
void __cdecl GetClassPtr<CTSWind>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x60), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSWind::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10048d30  GetClassPtr<CTSFog>  (76 bytes)
 * undefined GetClassPtr<CTSFog>(int param_1)
 * called by: ts_fog
 */
void __cdecl GetClassPtr<CTSFog>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSFog::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10048d80  ts_trigger  (12 bytes)
 * undefined ts_trigger(int param_1)
 */
void __cdecl ts_trigger(int param_1)

{
                    /* 0x48d80  330  ts_trigger */
  GetClassPtr<CTSTrigger>(param_1);
  return;
}

/* 10049180  ts_slowmotion  (12 bytes)
 * undefined ts_slowmotion(int param_1)
 */
void __cdecl ts_slowmotion(int param_1)

{
                    /* 0x49180  326  ts_slowmotion */
  GetClassPtr<CTSSlowMotion>(param_1);
  return;
}

/* 10049740  ts_slowmotionpoint  (12 bytes)
 * undefined ts_slowmotionpoint(int param_1)
 */
void __cdecl ts_slowmotionpoint(int param_1)

{
                    /* 0x49740  327  ts_slowmotionpoint */
  GetClassPtr<CTSSlowMotionPoint>(param_1);
  return;
}

/* 10049a80  ts_dmhill  (12 bytes)
 * undefined ts_dmhill(int param_1)
 */
void __cdecl ts_dmhill(int param_1)

{
                    /* 0x49a80  310  ts_dmhill */
  GetClassPtr<CTSDMHill>(param_1);
  return;
}

/* 1004a3b0  ts_model  (12 bytes)
 * undefined ts_model(int param_1)
 */
void __cdecl ts_model(int param_1)

{
                    /* 0x4a3b0  318  ts_model */
  GetClassPtr<CTSModel>(param_1);
  return;
}

/* 1004a510  ts_mapglobals  (12 bytes)
 * undefined ts_mapglobals(int param_1)
 */
void __cdecl ts_mapglobals(int param_1)

{
                    /* 0x4a510  317  ts_mapglobals */
  GetClassPtr<CTSMapGlobals>(param_1);
  return;
}

/* 1004a6a0  ts_sellzone  (12 bytes)
 * undefined ts_sellzone(int param_1)
 */
void __cdecl ts_sellzone(int param_1)

{
                    /* 0x4a6a0  325  ts_sellzone */
  GetClassPtr<CTSSellZone>(param_1);
  return;
}

/* 1004a960  ts_playeramount  (12 bytes)
 * undefined ts_playeramount(int param_1)
 */
void __cdecl ts_playeramount(int param_1)

{
                    /* 0x4a960  322  ts_playeramount */
  GetClassPtr<CTSPlayerAmount>(param_1);
  return;
}

/* 1004ad40  ts_timer  (12 bytes)
 * undefined ts_timer(int param_1)
 */
void __cdecl ts_timer(int param_1)

{
                    /* 0x4ad40  329  ts_timer */
  GetClassPtr<CTSTimer>(param_1);
  return;
}

/* 1004af10  ts_customtarget  (12 bytes)
 * undefined ts_customtarget(int param_1)
 */
void __cdecl ts_customtarget(int param_1)

{
                    /* 0x4af10  309  ts_customtarget */
  GetClassPtr<CTSCustomTarget>(param_1);
  return;
}

/* 1004b290  GetClassPtr<CTSTrigger>  (79 bytes)
 * undefined GetClassPtr<CTSTrigger>(int param_1)
 * called by: ts_trigger
 */
void __cdecl GetClassPtr<CTSTrigger>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xfc), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSTrigger::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1004b2e0  GetClassPtr<CTSSlowMotion>  (79 bytes)
 * undefined GetClassPtr<CTSSlowMotion>(int param_1)
 * called by: ts_slowmotion
 */
void __cdecl GetClassPtr<CTSSlowMotion>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xf8), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSSlowMotion::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1004b330  GetClassPtr<CTSSlowMotionPoint>  (79 bytes)
 * undefined GetClassPtr<CTSSlowMotionPoint>(int param_1)
 * called by: CTSSlowMotionPoint::CreateSlowMotionPoint, ts_slowmotionpoint
 */
void __cdecl GetClassPtr<CTSSlowMotionPoint>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xe8), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSSlowMotionPoint::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1004b380  GetClassPtr<CTSDMHill>  (76 bytes)
 * undefined GetClassPtr<CTSDMHill>(int param_1)
 * called by: ts_dmhill
 */
void __cdecl GetClassPtr<CTSDMHill>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x70), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSDMHill::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1004b3d0  GetClassPtr<CTSModel>  (79 bytes)
 * undefined GetClassPtr<CTSModel>(int param_1)
 * called by: ts_model
 */
void __cdecl GetClassPtr<CTSModel>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0xf0), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSModel::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1004b420  GetClassPtr<CTSMapGlobals>  (76 bytes)
 * undefined GetClassPtr<CTSMapGlobals>(int param_1)
 * called by: ts_mapglobals
 */
void __cdecl GetClassPtr<CTSMapGlobals>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x5c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSMapGlobals::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1004b470  GetClassPtr<CTSSellZone>  (76 bytes)
 * undefined GetClassPtr<CTSSellZone>(int param_1)
 * called by: ts_sellzone
 */
void __cdecl GetClassPtr<CTSSellZone>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x58), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSSellZone::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1004b4c0  GetClassPtr<CTSPlayerAmount>  (79 bytes)
 * undefined GetClassPtr<CTSPlayerAmount>(int param_1)
 * called by: ts_playeramount
 */
void __cdecl GetClassPtr<CTSPlayerAmount>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,300), peVar1 = (entvars_t *)param_1,
        puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSPlayerAmount::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1004b510  GetClassPtr<CTSTimer>  (83 bytes)
 * undefined GetClassPtr<CTSTimer>(int param_1)
 * called by: ts_timer
 */
void __cdecl GetClassPtr<CTSTimer>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x5c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSTimer::vftable;
    puVar3[0x15] = 0;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1004b570  GetClassPtr<CTSCustomTarget>  (122 bytes)
 * undefined GetClassPtr<CTSCustomTarget>(int param_1)
 * called by: ts_customtarget
 */
void __cdecl GetClassPtr<CTSCustomTarget>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (param_1 == 0) {
    peVar2 = (*g_engfuncs.pfnCreateEntity)();
    if (peVar2 == (edict_t *)0x0) {
      param_1 = 0;
    }
    else {
      param_1 = (int)&peVar2->v;
    }
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x868),
        peVar1 = (entvars_t *)param_1, puVar3 != (undefined4 *)0x0)) {
    puVar3[0x219] = 0;
    puVar3[0x218] = 0;
    puVar3[0x215] = 0;
    *puVar3 = &CTSCustomTarget::vftable;
    puVar5 = puVar3 + 0x15;
    for (iVar4 = 0x200; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1004c140  info_breakable  (12 bytes)
 * undefined info_breakable(int param_1)
 */
void __cdecl info_breakable(int param_1)

{
                    /* 0x4c140  248  info_breakable */
  GetClassPtr<CInfoBreakable>(param_1);
  return;
}

/* 1004c190  GetClassPtr<CInfoBreakable>  (76 bytes)
 * undefined GetClassPtr<CInfoBreakable>(int param_1)
 * called by: info_breakable
 */
void __cdecl GetClassPtr<CInfoBreakable>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x5c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CInfoBreakable::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1004c240  KungFu  (13 bytes)
 * undefined1 KungFu(int param_1)
 * called by: CTSKnife::Use, FUN_10058b30, FUN_1006a740, FUN_1006aa30
 */
undefined1 __cdecl KungFu(int param_1)

{
  return *(undefined1 *)(param_1 + 0x73a);
}

/* 1004c9a0  TSHudMessageOne  (201 bytes)
 * undefined TSHudMessageOne(undefined1 param_1, undefined1 param_2, undefined1 param_3, undefined4 param_4, undefined4 param_5, char * param_6, int param_7)
 * called by: CBasePlayer::PreThink, CBasePlayer::UsePowerUp, CTSGameRules::InitHUD, CTSGroundWeapon::GetWeapon, CTSPowerUp::WaitTouch, InformClientsOnWeaponsParams, pfnClientCommand
 */
void __cdecl
TSHudMessageOne(undefined1 param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5,
               char *param_6,int param_7)

{
  uint in_stack_00000024;
  int in_stack_0000002c;
  int in_stack_00000034;
  char local_80 [32];
  undefined4 uStack_60;
  char acStack_5c [91];
  undefined1 local_1;
  
  if ((param_7 != 0) && (*param_6 != '\0')) {
    _strncpy(local_80,param_6,0x80);
    local_1 = 0;
    (*g_engfuncs.pfnMessageBegin)(1,DAT_100d97a0,(float *)0x0,*(edict_t **)(param_7 + 0x208));
    (*g_engfuncs.pfnWriteByte)(param_5 & 0xff);
    (*g_engfuncs.pfnWriteByte)(param_7 & 0xff);
    (*g_engfuncs.pfnWriteByte)(in_stack_00000024 & 0xff);
    (*g_engfuncs.pfnWriteByte)(in_stack_0000002c);
    (*g_engfuncs.pfnWriteByte)(in_stack_00000034);
    (*g_engfuncs.pfnWriteString)(acStack_5c);
    uStack_60 = 0x1004ca61;
    (*g_engfuncs.pfnMessageEnd)();
  }
  return;
}

/* 1004ca70  TSHudMessageAll  (176 bytes)
 * undefined TSHudMessageAll(undefined1 param_1, undefined1 param_2, undefined1 param_3, undefined4 param_4, undefined4 param_5, char * param_6)
 * called by: CBasePlayer::TakeFlag, CHalfLifeMultiplay::PlayerKilled, CTSBomb::CutWire, CTSBomb::Use, CTSBriefcase::CaptureTouch, CTSCustomTarget::Use, CTSDMHill::WaitTouch, CTSFlag::PlayerTakeFlag, CTSFlag::RespawnFlag, CTSGameRules::CheckDeads, CTSGameRules::ResetRestartRound, CTSGameRules::RestartRound, ... (25 total)
 */
void __cdecl
TSHudMessageAll(undefined1 param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5,
               char *param_6)

{
  uint in_stack_0000001c;
  uint in_stack_00000024;
  int in_stack_0000002c;
  int in_stack_00000034;
  char local_80 [36];
  char acStack_5c [91];
  undefined1 local_1;
  
  if (*param_6 != '\0') {
    _strncpy(local_80,param_6,0x80);
    local_1 = 0;
    (*g_engfuncs.pfnMessageBegin)(2,DAT_100d97a0,(float *)0x0,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(param_5 & 0xff);
    (*g_engfuncs.pfnWriteByte)(in_stack_0000001c & 0xff);
    (*g_engfuncs.pfnWriteByte)(in_stack_00000024 & 0xff);
    (*g_engfuncs.pfnWriteByte)(in_stack_0000002c);
    (*g_engfuncs.pfnWriteByte)(in_stack_00000034);
    (*g_engfuncs.pfnWriteString)(acStack_5c);
    acStack_5c[0] = '\x19';
    acStack_5c[1] = -0x35;
    acStack_5c[2] = '\x04';
    acStack_5c[3] = '\x10';
    (*g_engfuncs.pfnMessageEnd)();
  }
  return;
}

/* 1004cb20  InitWeaponRestriction  (6 bytes)
 * undefined4 InitWeaponRestriction(void)
 * called by: CTSGameRules::Init, CTSMapGlobals::get_weapon_restriction, WeaponRestrictionByID, cmd_weaponrestriction
 */
undefined4 InitWeaponRestriction(void)

{
  return 0x1f;
}

/* 1004cb30  WeaponRestrictionByID  (43 bytes)
 * undefined4 WeaponRestrictionByID(undefined4 param_1)
 * called by: cmd_weaponrestriction
 */
undefined4 __cdecl WeaponRestrictionByID(undefined4 param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 1:
    return 0;
  case 2:
    return 1;
  case 3:
    return 3;
  case 4:
    return 0x13;
  default:
    uVar1 = InitWeaponRestriction();
    return uVar1;
  }
}

/* 1004cb70  DoSpectacularNess  (98 bytes)
 * ulonglong DoSpectacularNess(void)
 * called by: CHalfLifeMultiplay::PlayerKilled, TSExplosion
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* .so 0x76b48; RandomLong(0,100) <= clamp(spectacularness) */

ulonglong DoSpectacularNess(void)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (*g_engfuncs.pfnRandomLong)(0,100);
  uVar2 = __ftol();
  if ((int)uVar2 != 0) {
    return CONCAT44((int)(uVar2 >> 0x20),(uint)(iVar1 <= (int)uVar2));
  }
  return uVar2;
}

/* 1004cbe0  GetSpeedBySlots  (79 bytes)
 * float10 GetSpeedBySlots(int param_1)
 * called by: CBasePlayer::DropFlag, CBasePlayer::DropWeapon, CBasePlayer::PickUpWeapon, CBasePlayer::TakeArmor, CBasePlayer::TakeFlag, CTSGun::GrenadeIdle, CTSGun::MultiplyClips, FUN_10056d80, FUN_10057210
 */
float10 __cdecl GetSpeedBySlots(int param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x7a5) != '\0') {
    return (float10)330.0;
  }
  if (0x50 < *(int *)(param_1 + 0x534)) {
    return (float10)330.0;
  }
  lVar1 = __ftol();
  return (float10)(int)lVar1;
}

/* 1004f1a0  CalcMiniminVotants  (20 bytes)
 * int CalcMiniminVotants(int param_1)
 * called by: CTSGameRules::CheckVotes, CTSGameRules::PlayerVote
 */
int __cdecl CalcMiniminVotants(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 / 2;
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  return iVar1;
}

/* 10050610  shrapnel  (12 bytes)
 * undefined shrapnel(int param_1)
 */
void __cdecl shrapnel(int param_1)

{
                    /* 0x50610  283  shrapnel */
  GetClassPtr<CTSShrapnel>(param_1);
  return;
}

/* 10050dd0  m61_grenade  (12 bytes)
 * undefined m61_grenade(int param_1)
 */
void __cdecl m61_grenade(int param_1)

{
                    /* 0x50dd0  272  m61_grenade */
  GetClassPtr<CM61Grenade>(param_1);
  return;
}

/* 10051450  TSExplosion  (2017 bytes)
 * undefined TSExplosion(float param_1, float param_2, float param_3, int param_4, int param_5, float param_6, undefined4 param_7, float param_8, float param_9)
 * called by: CBreakable::Die, CM61Grenade::WaitThink, CTSBomb::WaitThink
 */
void __cdecl
TSExplosion(float param_1,float param_2,float param_3,int param_4,int param_5,float param_6,
           float param_7,float param_8,float param_9)

{
  byte bVar1;
  float fVar2;
  int *piVar3;
  uint uVar4;
  float fVar5;
  int *piVar6;
  int iVar7;
  void *pvVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  char *pcVar11;
  bool bVar12;
  longlong lVar13;
  ulonglong uVar14;
  float in_stack_00000030;
  float in_stack_00000034;
  float in_stack_00000038;
  float in_stack_0000003c;
  float in_stack_00000040;
  float in_stack_00000044;
  float in_stack_0000004c;
  float in_stack_00000050;
  float in_stack_fffffecc;
  float fVar15;
  float *pfVar16;
  float fVar17;
  float *pfVar18;
  float fVar19;
  undefined4 uVar20;
  undefined1 uVar21;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  Vector VStack_dc;
  Vector VStack_d0;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_98;
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [4];
  int iStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int iStack_18;
  float fStack_4;
  
  param_3 = param_3 + 1.0;
  UTIL_ScreenShake(&param_1,param_6,0x42a00000,0x3f800000,param_9 + param_9);
  (*g_engfuncs.pfnMessageBegin)(2,DAT_100d97a8,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteCoord)((float)param_5);
  (*g_engfuncs.pfnWriteCoord)(param_7);
  (*g_engfuncs.pfnWriteCoord)(param_9);
  lVar13 = __ftol();
  (*g_engfuncs.pfnWriteCoord)((float)(int)lVar13);
  (*g_engfuncs.pfnWriteCoord)(0.0);
  (*g_engfuncs.pfnWriteCoord)(0.0);
  pfVar16 = (float *)0x1;
  fVar15 = 2.6246e-29;
  (*g_engfuncs.pfnWriteByte)(1);
  (*g_engfuncs.pfnMessageEnd)();
  fVar17 = in_stack_0000003c;
  fStack_b8 = in_stack_00000044 / (in_stack_00000050 - in_stack_0000004c);
  fVar19 = in_stack_00000040;
  if (in_stack_00000040 == 0.0) {
    fVar19 = in_stack_0000003c;
  }
  piVar6 = (int *)FUN_10076410(0,&stack0x00000030,in_stack_00000050);
  do {
    if (piVar6 == (int *)0x0) {
      uVar14 = DoSpectacularNess();
      if ((int)uVar14 != 0) {
        uVar21 = 0;
        uVar20 = 0;
        fVar19 = 1.0;
        fVar17 = 0.25;
        Vector::Vector((Vector *)&stack0xfffffecc,&stack0x00000030);
        CTSSlowMotionPoint::CreateSlowMotionPoint
                  (in_stack_fffffecc,fVar15,pfVar16,fVar17,fVar19,uVar20,uVar21);
      }
      return;
    }
    fVar2 = (float)piVar6[1];
    if (fVar17 != fVar2) {
      if ((*(float *)((int)fVar2 + 0x16c) != 0.0) && (*(int *)((int)fVar2 + 0x170) != 2)) {
        iVar7 = (**(code **)(*piVar6 + 0xac))();
        if ((iVar7 != 0) && (iVar7 = (**(code **)(*piVar6 + 0xc0))(), iVar7 != 0)) {
          uStack_90 = 0x435e0000;
          uStack_8c = 0x43630000;
          uStack_88 = 0x433d0000;
          in_stack_fffffecc = 2.624668e-29;
          UTIL_ScreenFade(piVar6);
        }
        pfVar16 = (float *)(**(code **)(*piVar6 + 0xf0))();
        fStack_100 = *pfVar16;
        fStack_fc = pfVar16[1];
        fStack_f8 = pfVar16[2] + 1.0;
        UTIL_TraceLine(&stack0x00000030,&fStack_100,0,*(undefined4 *)((int)fVar17 + 0x208),
                       auStack_48);
        fStack_a8 = in_stack_00000030 - fStack_100;
        fStack_a4 = in_stack_00000034 - fStack_fc;
        fStack_a0 = in_stack_00000038 - fStack_f8;
        Vector::Vector(&VStack_d0,&fStack_a8);
        fVar15 = SQRT(VStack_d0.x * VStack_d0.x +
                      VStack_d0.y * VStack_d0.y + VStack_d0.z * VStack_d0.z);
        if (in_stack_0000004c < fVar15) {
          fStack_104 = in_stack_00000044 - (fVar15 - in_stack_0000004c) * fStack_b8;
          if (fStack_104 <= 0.0) {
            fStack_104 = 0.0;
          }
        }
        else {
          fStack_104 = in_stack_00000044;
        }
        if ((fStack_38 == 1.0) || (iStack_18 == *(int *)(piVar6[1] + 0x208))) {
          FUN_100796a0();
          iVar7 = *piVar6;
          pfVar18 = &fStack_4;
          pfVar16 = &param_2;
          pvVar8 = (void *)FUN_100148b0(&fStack_100,pfVar16,&stack0x00000030);
          puVar9 = (undefined4 *)FUN_100148f0(pvVar8,pfVar18);
          Vector::Vector((Vector *)&stack0xfffffed4,puVar9);
        }
        else {
          fStack_f0 = fStack_30;
          fStack_f4 = fStack_34;
          fStack_ec = fStack_2c;
          if (iStack_44 != 0) {
            fStack_f4 = in_stack_00000030;
            fStack_f0 = in_stack_00000034;
            fStack_ec = in_stack_00000038;
          }
          pfVar16 = &fStack_100;
          fVar15 = 2.6247918e-29;
          UTIL_TraceLine(pfVar16,&stack0x00000030,0,*(int *)(piVar6[1] + 0x208),auStack_48);
          if ((fStack_38 == 1.0) ||
             (fVar2 = SQRT((fStack_34 - fStack_f4) * (fStack_34 - fStack_f4) +
                           (fStack_30 - fStack_f0) * (fStack_30 - fStack_f0) +
                           (fStack_2c - fStack_ec) * (fStack_2c - fStack_ec)), fStack_104 <= fVar2))
          goto LAB_100518e1;
          FUN_100796a0();
          iVar7 = *piVar6;
          pfVar18 = &param_8;
          pfVar16 = (float *)&param_5;
          pvVar8 = (void *)FUN_100148b0(&fStack_100,pfVar16,&stack0x00000030);
          puVar9 = (undefined4 *)FUN_100148f0(pvVar8,pfVar18);
          Vector::Vector((Vector *)&stack0xfffffed4,puVar9);
          fStack_104 = fStack_104 - fVar2;
        }
        in_stack_fffffecc = fVar19;
        (**(code **)(iVar7 + 0x4c))();
        FUN_100796c0(fVar17,fVar19);
        fVar15 = fStack_104;
      }
LAB_100518e1:
      piVar3 = (int *)piVar6[1];
      pcVar11 = s_WorldGun_1009d570;
      pbVar10 = (byte *)(gpGlobals->pStringBase + *piVar3);
      do {
        bVar1 = *pbVar10;
        bVar12 = bVar1 < (byte)*pcVar11;
        if (bVar1 != *pcVar11) {
LAB_1005191e:
          iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_10051923;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar10[1];
        bVar12 = bVar1 < (byte)pcVar11[1];
        if (bVar1 != pcVar11[1]) goto LAB_1005191e;
        pbVar10 = pbVar10 + 2;
        pcVar11 = pcVar11 + 2;
      } while (bVar1 != 0);
      iVar7 = 0;
LAB_10051923:
      fVar17 = in_stack_0000003c;
      if (iVar7 == 0) {
        UTIL_SetOrigin((int)piVar3,piVar3 + 2);
        pfVar16 = (float *)piVar6[1];
        uStack_60 = 0;
        uStack_5c = 0;
        uStack_58 = 0;
        uStack_54 = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        fVar15 = 2.6249318e-29;
        UTIL_SetSize((int)pfVar16,&uStack_54,&uStack_60);
        piVar6[5] = (int)CTSWorldGun::BounceTouch;
        piVar6[4] = (int)CTSWorldGun::Fall;
        *(float *)(piVar6[1] + 0x104) = gpGlobals->time + 0.1;
        *(undefined4 *)(piVar6[1] + 0x108) = 10;
        *(undefined4 *)(piVar6[1] + 0x10c) = 2;
        *(undefined4 *)(piVar6[1] + 0x11c) = 0x3f333333;
        *(undefined4 *)(piVar6[1] + 0x120) = 0x3f4ccccd;
        iVar7 = piVar6[1];
        fVar17 = *(float *)(iVar7 + 8) - fStack_e8;
        fStack_68 = *(float *)(iVar7 + 0xc) - fStack_e4;
        fVar2 = *(float *)(iVar7 + 0x10) - fStack_e0;
        fVar5 = SQRT(fVar17 * fVar17 + fStack_68 * fStack_68 + fVar2 * fVar2);
        if (fVar5 == 0.0) {
          VStack_dc.x = 0.0;
          VStack_dc.y = 0.0;
          VStack_dc.z = 1.0;
        }
        else {
          fStack_7c = 1.0 / fVar5;
          fStack_84 = fStack_7c * fVar17;
          fStack_80 = fStack_68 * fStack_7c;
          fStack_7c = fVar2 * fStack_7c;
          Vector::Vector(&VStack_dc,&fStack_84);
        }
        fVar5 = in_stack_00000050 - fVar5;
        fStack_c4 = VStack_dc.x * fVar5;
        fStack_c0 = VStack_dc.y * fVar5;
        fStack_bc = VStack_dc.z * fVar5;
        puVar9 = get_weapon_info(piVar6[0x1e]);
        iVar7 = piVar6[1];
        fVar17 = (float)*(byte *)(puVar9 + 0x34);
        fStack_78 = fStack_c4 / fVar17;
        fStack_74 = fStack_c0 / fVar17;
        fStack_b4 = fStack_78 * 10.0;
        fStack_b0 = fStack_74 * 10.0;
        fStack_ac = (fStack_bc / fVar17) * 10.0;
        *(float *)(iVar7 + 0x20) = fStack_b4;
        *(float *)(iVar7 + 0x24) = fStack_b0;
        *(float *)(iVar7 + 0x28) = fStack_ac;
        uVar4 = *(uint *)(piVar6[1] + 0x1a4);
        if ((uVar4 & 0x200) != 0) {
          *(uint *)(piVar6[1] + 0x1a4) = uVar4 & 0xfffffdff;
          *(float *)(piVar6[1] + 0x28) = ABS(*(float *)(piVar6[1] + 0x28)) + 50.0;
        }
        fStack_98 = fStack_b0;
        fStack_94 = fStack_ac;
        fStack_100 = (float)(*g_engfuncs.pfnRandomLong)(-300,300);
        *(float *)(piVar6[1] + 0x60) = (float)(int)fStack_100;
        fStack_f8 = (float)(*g_engfuncs.pfnRandomLong)(-300,300);
        *(float *)(piVar6[1] + 100) = (float)(int)fStack_f8;
        fVar17 = in_stack_0000003c;
      }
    }
    piVar6 = (int *)FUN_10076410((int)piVar6,&stack0x00000030,in_stack_00000050);
  } while( true );
}

/* 10051c40  knife  (12 bytes)
 * undefined knife(int param_1)
 */
void __cdecl knife(int param_1)

{
                    /* 0x51c40  268  knife */
  GetClassPtr<CTSKnife>(param_1);
  return;
}

/* 10052da0  GetClassPtr<CTSShrapnel>  (79 bytes)
 * undefined GetClassPtr<CTSShrapnel>(int param_1)
 * called by: shrapnel
 */
void __cdecl GetClassPtr<CTSShrapnel>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x8c), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSShrapnel::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10052df0  GetClassPtr<CM61Grenade>  (79 bytes)
 * undefined GetClassPtr<CM61Grenade>(int param_1)
 * called by: CM61Grenade::CreateGrenade, m61_grenade
 */
void __cdecl GetClassPtr<CM61Grenade>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x84), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CM61Grenade::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10052e40  GetClassPtr<CTSKnife>  (79 bytes)
 * undefined GetClassPtr<CTSKnife>(int param_1)
 * called by: CTSKnife::CreateKnife, knife
 */
void __cdecl GetClassPtr<CTSKnife>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x94), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CTSKnife::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 10052eb0  GetBodyByItems  (170 bytes)
 * int GetBodyByItems(int param_1, uint param_2)
 * called by: CTSGun::Deploy
 */
int __cdecl GetBodyByItems(int param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((param_2 & 1) != 0) {
    iVar2 = (int)*(short *)(&DAT_100d0548 + param_1 * 0x3dc);
  }
  if ((((param_2 & 2) == 0) || ((param_2 & 4) == 0)) ||
     (sVar1 = *(short *)(&DAT_100d0550 + param_1 * 0x3dc), sVar1 == -1)) {
    if ((param_2 & 2) != 0) {
      iVar2 = iVar2 + *(short *)(&DAT_100d054a + param_1 * 0x3dc);
    }
    if ((param_2 & 4) == 0) goto LAB_10052f35;
    sVar1 = *(short *)(&DAT_100d054c + param_1 * 0x3dc);
  }
  iVar2 = iVar2 + sVar1;
LAB_10052f35:
  if ((param_2 & 8) == 0) {
    if (param_1 == 0x24) {
      iVar2 = iVar2 + 1;
    }
    return iVar2;
  }
  return iVar2 + *(short *)(&DAT_100d054e + param_1 * 0x3dc);
}

