/* mp.dll - EHANDLE (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1000c1e0  EHANDLE::operator=  (48 bytes)
 * undefined operator=(int param_1)
 * called by: CBaseButton::ButtonTouch, CBaseButton::ButtonUse, CBaseButton::TakeDamage, CBaseDoor::DoorTouch, CBaseDoor::Use, CBasePlayer::Killed, CBasePlayer::PlayerUse, CBasePlayer::PostThink, CBasePlayer::PreThink, CBasePlayer::StartObserver, CBaseTrigger::ActivateMultiTrigger, CBaseTrigger::CounterUse, ... (22 total)
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

