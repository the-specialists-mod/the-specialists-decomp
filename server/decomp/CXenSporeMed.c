/* ts_i386.so - CXenSporeMed (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000f64c8  CXenSporeMed::Spawn  (118 bytes)
 * undefined Spawn(void)
 */
/* CXenSporeMed::Spawn(void) */

void __thiscall CXenSporeMed::Spawn(CXenSporeMed *this)

{
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  this->pev->skin = 1;
  CXenSpore::Spawn((CXenSpore *)this);
  local_1c = 0x42200000;
  local_14 = 0x42f00000;
  local_2c = 0xc2200000;
  local_24 = 0;
  local_28 = local_2c;
  local_18 = local_1c;
  UTIL_SetSize((int)this->pev,&local_2c,&local_1c);
  return;
}

