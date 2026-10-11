/* mp.dll - EHANDLE (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1000e3f0  EHANDLE::Get  (28 bytes)
 * uint Get(uint * param_1)
 * called by: CBaseDoor::Spawn, CBreakable::Spawn, CInfoBreakable::RespawnThink, CRotDoor::Spawn, EHANDLE::operator->, FUN_1000e440
 */
/* edict if serialnumber matches */

uint __fastcall EHANDLE::Get(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    return ~-(uint)(*(uint *)(uVar1 + 4) != param_1[1]) & uVar1;
  }
  return 0;
}

/* 1000e410  EHANDLE::operator=  (48 bytes)
 * undefined operator=(int param_1)
 * called by: CBaseButton::ButtonTouch, CBaseButton::ButtonUse, CBaseButton::TakeDamage, CBaseDoor::DoorTouch, CBaseDoor::Spawn, CBaseDoor::Use, CBasePlayer::Killed, CBasePlayer::PickUpWeapon, CBasePlayer::PlayerUse, CBasePlayer::PostThink, CBasePlayer::PreThink, CBasePlayer::StartObserver, ... (31 total)
 */
void __thiscall EHANDLE::operator=(EHANDLE *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x208);
    *(int *)this = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(this + 4) = *(undefined4 *)(iVar1 + 4);
      return;
    }
  }
  return;
}

/* 1000e450  EHANDLE::operator->  (16 bytes)
 * undefined4 operator->(uint * param_1)
 * called by: CBaseButton::ButtonActivate, CBaseButton::ButtonBackHome, CBaseButton::ButtonTouch, CBaseButton::TakeDamage, CBaseButton::TriggerAndWait, CBaseDoor::BreakableRespawn, CBaseDoor::DoorActivate, CBaseDoor::DoorGoUp, CBaseDoor::DoorHitBottom, CBaseDoor::DoorHitTop, CBaseDoor::TraceAttack, CBaseMonster::Look, ... (33 total)
 */
/* .so 0xab8e0; GET_PRIVATE(Get()) */

undefined4 __fastcall EHANDLE::operator->(uint *param_1)

{
  uint uVar1;
  
  uVar1 = Get(param_1);
  if (uVar1 != 0) {
    return *(undefined4 *)(uVar1 + 0x7c);
  }
  return 0;
}

