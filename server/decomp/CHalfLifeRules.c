/* ts_i386.so - CHalfLifeRules (40 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000de6fc  CHalfLifeRules::CHalfLifeRules  (50 bytes)
 * undefined CHalfLifeRules(void)
 */
/* CHalfLifeRules::CHalfLifeRules(void) */

void __thiscall CHalfLifeRules::CHalfLifeRules(CHalfLifeRules *this)

{
  *(undefined1 **)this = CGameRules_virtual_table;
  *(undefined1 **)this = CHalfLifeRules_virtual_table;
  CGameRules::RefreshSkillData();
  return;
}

/* 000de730  CHalfLifeRules::Think  (1 bytes)
 * undefined Think(void)
 */
/* CHalfLifeRules::Think(void) */

void CHalfLifeRules::Think(void)

{
  return;
}

/* 000de734  CHalfLifeRules::IsMultiplayer  (6 bytes)
 * undefined4 IsMultiplayer(void)
 */
/* CHalfLifeRules::IsMultiplayer(void) */

undefined4 CHalfLifeRules::IsMultiplayer(void)

{
  return 0;
}

/* 000de73c  CHalfLifeRules::IsDeathmatch  (6 bytes)
 * undefined4 IsDeathmatch(void)
 */
/* CHalfLifeRules::IsDeathmatch(void) */

undefined4 CHalfLifeRules::IsDeathmatch(void)

{
  return 0;
}

/* 000de744  CHalfLifeRules::IsCoOp  (6 bytes)
 * undefined4 IsCoOp(void)
 */
/* CHalfLifeRules::IsCoOp(void) */

undefined4 CHalfLifeRules::IsCoOp(void)

{
  return 0;
}

/* 000de74c  CHalfLifeRules::FShouldSwitchWeapon  (61 bytes)
 * bool FShouldSwitchWeapon(undefined4 param_1, int param_2)
 */
/* CHalfLifeRules::FShouldSwitchWeapon(CBasePlayer *, CBasePlayerItem *) */

bool CHalfLifeRules::FShouldSwitchWeapon(undefined4 param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  if (*(int *)(param_2 + 0xa10) == 0) {
    bVar2 = true;
  }
  else {
    iVar1 = (**(code **)(*(int *)(*(int *)(param_2 + 0xa10) + 0x60) + 300))
                      (*(int *)(param_2 + 0xa10));
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}

/* 000de78c  CHalfLifeRules::GetNextBestWeapon  (6 bytes)
 * undefined4 GetNextBestWeapon(void)
 */
/* CHalfLifeRules::GetNextBestWeapon(CBasePlayer *, CBasePlayerItem *) */

undefined4 CHalfLifeRules::GetNextBestWeapon(void)

{
  return 0;
}

/* 000de794  CHalfLifeRules::ClientConnected  (6 bytes)
 * undefined4 ClientConnected(void)
 */
/* CHalfLifeRules::ClientConnected(edict_s *, char const *, char const *, char *) */

undefined4 CHalfLifeRules::ClientConnected(void)

{
  return 1;
}

/* 000de79c  CHalfLifeRules::InitHUD  (1 bytes)
 * undefined InitHUD(void)
 */
/* CHalfLifeRules::InitHUD(CBasePlayer *) */

void CHalfLifeRules::InitHUD(void)

{
  return;
}

/* 000de7a0  CHalfLifeRules::ClientDisconnected  (1 bytes)
 * undefined ClientDisconnected(void)
 */
/* CHalfLifeRules::ClientDisconnected(edict_s *) */

void CHalfLifeRules::ClientDisconnected(void)

{
  return;
}

/* 000de7a4  CHalfLifeRules::FlPlayerFallDamage  (49 bytes)
 * longdouble FlPlayerFallDamage(undefined4 this, int param_2)
 */
/* CHalfLifeRules::FlPlayerFallDamage(CBasePlayer *) */

longdouble __thiscall CHalfLifeRules::FlPlayerFallDamage(undefined4 this,int param_2)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)*(float *)(param_2 + 0x828) - (longdouble)680.0;
  *(float *)(param_2 + 0x828) = (float)lVar1;
  return lVar1 * (longdouble)100.0 * (longdouble)0.0022522523;
}

/* 000de7d8  CHalfLifeRules::PlayerSpawn  (1 bytes)
 * undefined PlayerSpawn(void)
 */
/* CHalfLifeRules::PlayerSpawn(CBasePlayer *) */

void CHalfLifeRules::PlayerSpawn(void)

{
  return;
}

/* 000de7dc  CHalfLifeRules::AllowAutoTargetCrosshair  (32 bytes)
 * bool AllowAutoTargetCrosshair(void)
 */
/* CHalfLifeRules::AllowAutoTargetCrosshair(void) */

bool CHalfLifeRules::AllowAutoTargetCrosshair(void)

{
  return g_iSkillLevel == 1;
}

/* 000de7fc  CHalfLifeRules::PlayerThink  (1 bytes)
 * undefined PlayerThink(void)
 */
/* CHalfLifeRules::PlayerThink(CBasePlayer *) */

void CHalfLifeRules::PlayerThink(void)

{
  return;
}

/* 000de800  CHalfLifeRules::FPlayerCanRespawn  (6 bytes)
 * undefined4 FPlayerCanRespawn(void)
 */
/* CHalfLifeRules::FPlayerCanRespawn(CBasePlayer *) */

undefined4 CHalfLifeRules::FPlayerCanRespawn(void)

{
  return 1;
}

/* 000de808  CHalfLifeRules::FlPlayerSpawnTime  (25 bytes)
 * longdouble FlPlayerSpawnTime(void)
 */
/* CHalfLifeRules::FlPlayerSpawnTime(CBasePlayer *) */

longdouble CHalfLifeRules::FlPlayerSpawnTime(void)

{
  return (longdouble)gpGlobals->time;
}

/* 000de824  CHalfLifeRules::IPointsForKill  (6 bytes)
 * undefined4 IPointsForKill(void)
 */
/* CHalfLifeRules::IPointsForKill(CBasePlayer *, CBasePlayer *) */

undefined4 CHalfLifeRules::IPointsForKill(void)

{
  return 1;
}

/* 000de82c  CHalfLifeRules::PlayerKilled  (1 bytes)
 * undefined PlayerKilled(void)
 */
/* CHalfLifeRules::PlayerKilled(CBasePlayer *, entvars_s *, entvars_s *) */

void CHalfLifeRules::PlayerKilled(void)

{
  return;
}

/* 000de830  CHalfLifeRules::DeathNotice  (1 bytes)
 * undefined DeathNotice(void)
 */
/* CHalfLifeRules::DeathNotice(CBasePlayer *, entvars_s *, entvars_s *, char *) */

void CHalfLifeRules::DeathNotice(void)

{
  return;
}

/* 000de834  CHalfLifeRules::PlayerGotWeapon  (1 bytes)
 * undefined PlayerGotWeapon(void)
 */
/* CHalfLifeRules::PlayerGotWeapon(CBasePlayer *, CBasePlayerItem *) */

void CHalfLifeRules::PlayerGotWeapon(void)

{
  return;
}

/* 000de838  CHalfLifeRules::FlWeaponRespawnTime  (21 bytes)
 * longdouble FlWeaponRespawnTime(void)
 */
/* CHalfLifeRules::FlWeaponRespawnTime(CBasePlayerItem *) */

longdouble CHalfLifeRules::FlWeaponRespawnTime(void)

{
  return (longdouble)-1.0;
}

/* 000de850  CHalfLifeRules::FlWeaponTryRespawn  (21 bytes)
 * longdouble FlWeaponTryRespawn(void)
 */
/* CHalfLifeRules::FlWeaponTryRespawn(CBasePlayerItem *) */

longdouble CHalfLifeRules::FlWeaponTryRespawn(void)

{
  return (longdouble)0.0;
}

/* 000de868  CHalfLifeRules::VecWeaponRespawnSpot  (33 bytes)
 * undefined VecWeaponRespawnSpot(undefined4 * param_1, undefined4 param_2, int * param_3)
 */
/* CHalfLifeRules::VecWeaponRespawnSpot(CBasePlayerItem *) */

void CHalfLifeRules::VecWeaponRespawnSpot(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_3;
  *param_1 = *(undefined4 *)(iVar1 + 8);
  param_1[1] = *(undefined4 *)(iVar1 + 0xc);
  param_1[2] = *(undefined4 *)(iVar1 + 0x10);
  return;
}

/* 000de88c  CHalfLifeRules::WeaponShouldRespawn  (6 bytes)
 * undefined4 WeaponShouldRespawn(void)
 */
/* CHalfLifeRules::WeaponShouldRespawn(CBasePlayerItem *) */

undefined4 CHalfLifeRules::WeaponShouldRespawn(void)

{
  return 2;
}

/* 000de894  CHalfLifeRules::CanHaveItem  (6 bytes)
 * undefined4 CanHaveItem(void)
 */
/* CHalfLifeRules::CanHaveItem(CBasePlayer *, CItem *) */

undefined4 CHalfLifeRules::CanHaveItem(void)

{
  return 1;
}

/* 000de89c  CHalfLifeRules::PlayerGotItem  (1 bytes)
 * undefined PlayerGotItem(void)
 */
/* CHalfLifeRules::PlayerGotItem(CBasePlayer *, CItem *) */

void CHalfLifeRules::PlayerGotItem(void)

{
  return;
}

/* 000de8a0  CHalfLifeRules::ItemShouldRespawn  (6 bytes)
 * undefined4 ItemShouldRespawn(void)
 */
/* CHalfLifeRules::ItemShouldRespawn(CItem *) */

undefined4 CHalfLifeRules::ItemShouldRespawn(void)

{
  return 6;
}

/* 000de8a8  CHalfLifeRules::FlItemRespawnTime  (21 bytes)
 * longdouble FlItemRespawnTime(void)
 */
/* CHalfLifeRules::FlItemRespawnTime(CItem *) */

longdouble CHalfLifeRules::FlItemRespawnTime(void)

{
  return (longdouble)-1.0;
}

/* 000de8c0  CHalfLifeRules::VecItemRespawnSpot  (33 bytes)
 * undefined VecItemRespawnSpot(undefined4 * param_1, undefined4 param_2, int * param_3)
 */
/* CHalfLifeRules::VecItemRespawnSpot(CItem *) */

void CHalfLifeRules::VecItemRespawnSpot(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_3;
  *param_1 = *(undefined4 *)(iVar1 + 8);
  param_1[1] = *(undefined4 *)(iVar1 + 0xc);
  param_1[2] = *(undefined4 *)(iVar1 + 0x10);
  return;
}

/* 000de8e4  CHalfLifeRules::IsAllowedToSpawn  (6 bytes)
 * undefined4 IsAllowedToSpawn(void)
 */
/* CHalfLifeRules::IsAllowedToSpawn(CBaseEntity *) */

undefined4 CHalfLifeRules::IsAllowedToSpawn(void)

{
  return 1;
}

/* 000de8ec  CHalfLifeRules::PlayerGotAmmo  (1 bytes)
 * undefined PlayerGotAmmo(void)
 */
/* CHalfLifeRules::PlayerGotAmmo(CBasePlayer *, char *, int) */

void CHalfLifeRules::PlayerGotAmmo(void)

{
  return;
}

/* 000de8f0  CHalfLifeRules::AmmoShouldRespawn  (6 bytes)
 * undefined4 AmmoShouldRespawn(void)
 */
/* CHalfLifeRules::AmmoShouldRespawn(CBasePlayerAmmo *) */

undefined4 CHalfLifeRules::AmmoShouldRespawn(void)

{
  return 4;
}

/* 000de8f8  CHalfLifeRules::FlAmmoRespawnTime  (21 bytes)
 * longdouble FlAmmoRespawnTime(void)
 */
/* CHalfLifeRules::FlAmmoRespawnTime(CBasePlayerAmmo *) */

longdouble CHalfLifeRules::FlAmmoRespawnTime(void)

{
  return (longdouble)-1.0;
}

/* 000de910  CHalfLifeRules::VecAmmoRespawnSpot  (33 bytes)
 * undefined VecAmmoRespawnSpot(undefined4 * param_1, undefined4 param_2, int * param_3)
 */
/* CHalfLifeRules::VecAmmoRespawnSpot(CBasePlayerAmmo *) */

void CHalfLifeRules::VecAmmoRespawnSpot(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_3;
  *param_1 = *(undefined4 *)(iVar1 + 8);
  param_1[1] = *(undefined4 *)(iVar1 + 0xc);
  param_1[2] = *(undefined4 *)(iVar1 + 0x10);
  return;
}

/* 000de934  CHalfLifeRules::FlHealthChargerRechargeTime  (21 bytes)
 * longdouble FlHealthChargerRechargeTime(void)
 */
/* CHalfLifeRules::FlHealthChargerRechargeTime(void) */

longdouble CHalfLifeRules::FlHealthChargerRechargeTime(void)

{
  return (longdouble)0.0;
}

/* 000de94c  CHalfLifeRules::DeadPlayerWeapons  (6 bytes)
 * undefined4 DeadPlayerWeapons(void)
 */
/* CHalfLifeRules::DeadPlayerWeapons(CBasePlayer *) */

undefined4 CHalfLifeRules::DeadPlayerWeapons(void)

{
  return 9;
}

/* 000de954  CHalfLifeRules::DeadPlayerAmmo  (6 bytes)
 * undefined4 DeadPlayerAmmo(void)
 */
/* CHalfLifeRules::DeadPlayerAmmo(CBasePlayer *) */

undefined4 CHalfLifeRules::DeadPlayerAmmo(void)

{
  return 0xc;
}

/* 000de95c  CHalfLifeRules::PlayerRelationship  (6 bytes)
 * undefined4 PlayerRelationship(void)
 */
/* CHalfLifeRules::PlayerRelationship(CBaseEntity *, CBaseEntity *) */

undefined4 CHalfLifeRules::PlayerRelationship(void)

{
  return 0;
}

/* 000de964  CHalfLifeRules::FAllowMonsters  (6 bytes)
 * undefined4 FAllowMonsters(void)
 */
/* CHalfLifeRules::FAllowMonsters(void) */

undefined4 CHalfLifeRules::FAllowMonsters(void)

{
  return 1;
}

/* 000de9b4  CHalfLifeRules::GetTeamID  (21 bytes)
 * undefined1 * GetTeamID(void)
 */
/* CHalfLifeRules::GetTeamID(CBaseEntity *) */

undefined1 * CHalfLifeRules::GetTeamID(void)

{
  return &DAT_00106657;
}

