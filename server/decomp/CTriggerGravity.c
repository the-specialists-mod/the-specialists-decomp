/* ts_i386.so - CTriggerGravity (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000e9788  CTriggerGravity::Spawn  (57 bytes)
 * undefined Spawn(void)
 */
/* CTriggerGravity::Spawn(void) */

void __thiscall CTriggerGravity::Spawn(CTriggerGravity *this)

{
  CBaseTrigger::InitTrigger((CBaseTrigger *)this);
  *(undefined4 *)&this->field_0x14 = 0xffff0000;
  *(code **)&this->field_0x18 = GravityTouch;
  return;
}

/* 000e97c4  CTriggerGravity::GravityTouch  (50 bytes)
 * undefined GravityTouch(int * param_1)
 */
/* CTriggerGravity::GravityTouch(CBaseEntity *) */

void __thiscall CTriggerGravity::GravityTouch(CTriggerGravity *this,int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1[0x18] + 200))(param_1);
  if (iVar1 != 0) {
    *(float *)(*param_1 + 0x11c) = this->pev->gravity;
  }
  return;
}

