/* ts_i386.so - CGameRules (21 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000c5dd8  CGameRules::CanHaveAmmo  (80 bytes)
 * undefined4 CanHaveAmmo(undefined4 this, CBasePlayer * param_2, char * param_3, int param_4)
 */
/* CGameRules::CanHaveAmmo(CBasePlayer *, char const *, int) */

undefined4 __thiscall
CGameRules::CanHaveAmmo(undefined4 this,CBasePlayer *param_2,char *param_3,int param_4)

{
  int iVar1;
  
  if (((param_3 != (char *)0x0) && (iVar1 = CBasePlayer::GetAmmoIndex(param_3), -1 < iVar1)) &&
     (iVar1 = CBasePlayer::AmmoInventory(param_2,iVar1), iVar1 < param_4)) {
    return 1;
  }
  return 0;
}

/* 000c5e2c  CGameRules::GetPlayerSpawnSpot  (282 bytes)
 * int GetPlayerSpawnSpot(undefined4 this, int * param_2)
 */
/* CGameRules::GetPlayerSpawnSpot(CBasePlayer *) */

int __thiscall CGameRules::GetPlayerSpawnSpot(undefined4 this,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float *pfVar7;
  undefined4 *puVar8;
  float local_2c [7];
  
  iVar1 = EntSelectSpawnPoint(param_2);
  uVar4 = (iVar1 == 0) - 1 & iVar1 + 0x80U;
  local_2c[0] = *(float *)(uVar4 + 8) + 0.0;
  local_2c[1] = *(float *)(uVar4 + 0xc) + 0.0;
  local_2c[2] = *(float *)(uVar4 + 0x10) + 1.0;
  pfVar5 = local_2c;
  pfVar7 = (float *)(*param_2 + 8);
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar7 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar7 = pfVar7 + 1;
  }
  puVar6 = &g_vecZero;
  puVar8 = (undefined4 *)(*param_2 + 0x74);
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar6 = &g_vecZero;
  puVar8 = (undefined4 *)(*param_2 + 0x20);
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  iVar2 = *param_2;
  puVar6 = (undefined4 *)(((iVar1 == 0) - 1 & iVar1 + 0x80U) + 0x50);
  puVar8 = (undefined4 *)(iVar2 + 0x50);
  for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar6 = (undefined4 *)(*param_2 + 0x50);
  puVar8 = (undefined4 *)(iVar2 + 0x74);
  for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar6 = &g_vecZero;
  puVar8 = (undefined4 *)(*param_2 + 0x68);
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)(*param_2 + 0xa0) = 1;
  return iVar1;
}

/* 000c5f48  CGameRules::CanHavePlayerItem  (141 bytes)
 * undefined4 CanHavePlayerItem(CBasePlayer * param_1, undefined4 * param_2)
 */
/* CGameRules::CanHavePlayerItem(CBasePlayer *, CBasePlayerItem *) */

undefined4 __thiscall
CGameRules::CanHavePlayerItem(CGameRules *this,CBasePlayer *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1->pev->deadflag == 0) {
    if ((&DAT_001a5b48)[param_2[0x22] * 0xb] == 0) {
LAB_000c5fb0:
      iVar1 = CBasePlayer::HasPlayerItem(param_1,param_2);
      if (iVar1 != 0) goto LAB_000c5fc1;
    }
    else {
      iVar1 = (**(code **)(*(int *)this + 0xa4))
                        (this,param_1,(&DAT_001a5b48)[param_2[0x22] * 0xb],
                         (&DAT_001a5b4c)[param_2[0x22] * 0xb]);
      if (iVar1 == 0) goto LAB_000c5fb0;
    }
    uVar2 = 1;
  }
  else {
LAB_000c5fc1:
    uVar2 = 0;
  }
  return uVar2;
}

/* 000c5fd8  CGameRules::RefreshSkillData  (116 bytes)
 * undefined RefreshSkillData(void)
 */
/* CGameRules::RefreshSkillData(void) */

void CGameRules::RefreshSkillData(void)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)(*g_engfuncs.pfnCVarGetFloat)("skill");
  gSkillData = (int)ROUND(lVar1);
  g_iSkillLevel = gSkillData;
  if (gSkillData < 1) {
    gSkillData = 1;
  }
  else if (3 < gSkillData) {
    gSkillData = 3;
  }
  return;
}

/* 000c62a4  CGameRules::IsTeamplay  (6 bytes)
 * undefined4 IsTeamplay(void)
 */
/* CGameRules::IsTeamplay(void) */

undefined4 CGameRules::IsTeamplay(void)

{
  return 0;
}

/* 000c62ac  CGameRules::GetGameDescription  (21 bytes)
 * char * GetGameDescription(void)
 */
/* CGameRules::GetGameDescription(void) */

char * CGameRules::GetGameDescription(void)

{
  return "The Specialists";
}

/* 000c62c4  CGameRules::UpdateGameMode  (1 bytes)
 * undefined UpdateGameMode(void)
 */
/* CGameRules::UpdateGameMode(CBasePlayer *) */

void CGameRules::UpdateGameMode(void)

{
  return;
}

/* 000c62c8  CGameRules::FPlayerCanTakeDamage  (6 bytes)
 * undefined4 FPlayerCanTakeDamage(void)
 */
/* CGameRules::FPlayerCanTakeDamage(CBasePlayer *, CBaseEntity *) */

undefined4 CGameRules::FPlayerCanTakeDamage(void)

{
  return 1;
}

/* 000c62d0  CGameRules::ShouldAutoAim  (6 bytes)
 * undefined4 ShouldAutoAim(void)
 */
/* CGameRules::ShouldAutoAim(CBasePlayer *, edict_s *) */

undefined4 CGameRules::ShouldAutoAim(void)

{
  return 1;
}

/* 000c62d8  CGameRules::AllowAutoTargetCrosshair  (6 bytes)
 * undefined4 AllowAutoTargetCrosshair(void)
 */
/* CGameRules::AllowAutoTargetCrosshair(void) */

undefined4 CGameRules::AllowAutoTargetCrosshair(void)

{
  return 1;
}

/* 000c62e0  CGameRules::ClientCommand  (6 bytes)
 * undefined4 ClientCommand(void)
 */
/* CGameRules::ClientCommand(CBasePlayer *, char const *) */

undefined4 CGameRules::ClientCommand(void)

{
  return 0;
}

/* 000c62e8  CGameRules::ClientUserInfoChanged  (1 bytes)
 * undefined ClientUserInfoChanged(void)
 */
/* CGameRules::ClientUserInfoChanged(CBasePlayer *, char *) */

void CGameRules::ClientUserInfoChanged(void)

{
  return;
}

/* 000c62ec  CGameRules::FlHEVChargerRechargeTime  (21 bytes)
 * longdouble FlHEVChargerRechargeTime(void)
 */
/* CGameRules::FlHEVChargerRechargeTime(void) */

longdouble CGameRules::FlHEVChargerRechargeTime(void)

{
  return (longdouble)0.0;
}

/* 000c6304  CGameRules::GetTeamIndex  (6 bytes)
 * undefined4 GetTeamIndex(void)
 */
/* CGameRules::GetTeamIndex(char const *) */

undefined4 CGameRules::GetTeamIndex(void)

{
  return 0xffffffff;
}

/* 000c630c  CGameRules::GetIndexedTeamName  (21 bytes)
 * undefined1 * GetIndexedTeamName(void)
 */
/* CGameRules::GetIndexedTeamName(int) */

undefined1 * CGameRules::GetIndexedTeamName(void)

{
  return &DAT_00106657;
}

/* 000c6324  CGameRules::IsValidTeam  (6 bytes)
 * undefined4 IsValidTeam(void)
 */
/* CGameRules::IsValidTeam(char const *) */

undefined4 CGameRules::IsValidTeam(void)

{
  return 1;
}

/* 000c632c  CGameRules::ChangePlayerTeam  (1 bytes)
 * undefined ChangePlayerTeam(void)
 */
/* CGameRules::ChangePlayerTeam(CBasePlayer *, char const *, int, int) */

void CGameRules::ChangePlayerTeam(void)

{
  return;
}

/* 000c6330  CGameRules::SetDefaultPlayerTeam  (21 bytes)
 * undefined1 * SetDefaultPlayerTeam(void)
 */
/* CGameRules::SetDefaultPlayerTeam(CBasePlayer *) */

undefined1 * CGameRules::SetDefaultPlayerTeam(void)

{
  return &DAT_00106657;
}

/* 000c6348  CGameRules::PlayTextureSounds  (6 bytes)
 * undefined4 PlayTextureSounds(void)
 */
/* CGameRules::PlayTextureSounds(void) */

undefined4 CGameRules::PlayTextureSounds(void)

{
  return 1;
}

/* 000c6350  CGameRules::PlayFootstepSounds  (6 bytes)
 * undefined4 PlayFootstepSounds(void)
 */
/* CGameRules::PlayFootstepSounds(CBasePlayer *, float) */

undefined4 CGameRules::PlayFootstepSounds(void)

{
  return 1;
}

/* 000c6358  CGameRules::EndMultiplayerGame  (1 bytes)
 * undefined EndMultiplayerGame(void)
 */
/* CGameRules::EndMultiplayerGame(void) */

void CGameRules::EndMultiplayerGame(void)

{
  return;
}

