/* mp.dll - CTriggerGravity (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100430c0  CTriggerGravity::Spawn  (17 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CTriggerGravity::Spawn(int param_1)

{
  CBaseTrigger::InitTrigger(param_1);
  *(code **)(param_1 + 0x14) = GravityTouch;
  return;
}

/* 100430e0  CTriggerGravity::GravityTouch  (45 bytes)
 * void GravityTouch(CBaseEntity * param_1)
 */
/* public: void __thiscall CTriggerGravity::GravityTouch(class CBaseEntity *) */

void __thiscall CTriggerGravity::GravityTouch(CTriggerGravity *this,CBaseEntity *param_1)

{
  int iVar1;
  
                    /* 0x430e0  58  ?GravityTouch@CTriggerGravity@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = (**(code **)(*(int *)param_1 + 0xc0))();
  if (iVar1 != 0) {
    *(float *)(*(int *)(param_1 + 4) + 0x11c) = this->pev->gravity;
  }
  return;
}

