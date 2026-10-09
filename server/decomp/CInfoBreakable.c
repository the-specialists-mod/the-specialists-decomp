/* ts_i386.so - CInfoBreakable (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 00075da0  CInfoBreakable::RespawnThink  (100 bytes)
 * undefined RespawnThink(void)
 */
/* CInfoBreakable::RespawnThink(void) */

void __thiscall CInfoBreakable::RespawnThink(CInfoBreakable *this)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  int iVar3;
  
  *(undefined4 *)&this->field_0xc = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  bVar1 = int((EHANDLE *)&this->field_0x64);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    uVar2 = EHANDLE::Get((EHANDLE *)&this->field_0x64);
    iVar3 = 0;
    if (uVar2 != 0) {
      iVar3 = *(int *)(uVar2 + 0x7c);
    }
    (**(code **)(*(int *)(iVar3 + 0x60) + 8))(iVar3,0);
  }
  return;
}

