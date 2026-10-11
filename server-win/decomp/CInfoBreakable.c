/* mp.dll - CInfoBreakable (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1004c150  CInfoBreakable::RespawnThink  (53 bytes)
 * void RespawnThink(void)
 * called by: CTSGameRules::RespawnEntities
 */
/* public: void __thiscall CInfoBreakable::RespawnThink(void) */

void __thiscall CInfoBreakable::RespawnThink(CInfoBreakable *this)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  
                    /* 0x4c150  89  ?RespawnThink@CInfoBreakable@@QAEXXZ */
  *(undefined4 *)&this->field_0x10 = 0;
  bVar1 = FUN_1000e440((uint *)&this->field_0x54);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    uVar2 = EHANDLE::Get((uint *)&this->field_0x54);
    if (uVar2 != 0) {
      (**(code **)**(undefined4 **)(uVar2 + 0x7c))(0);
      return;
    }
    (*(code *)*puRam00000000)(0);
  }
  return;
}

