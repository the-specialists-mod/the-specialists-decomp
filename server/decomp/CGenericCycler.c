/* ts_i386.so - CGenericCycler (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000c86ac  CGenericCycler::Spawn  (113 bytes)
 * undefined Spawn(void)
 */
/* CGenericCycler::Spawn(void) */

void __thiscall CGenericCycler::Spawn(CGenericCycler *this)

{
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_1c = 0xc1800000;
  local_14 = 0;
  local_2c = 0x41800000;
  local_24 = 0x42900000;
  local_28 = local_2c;
  local_18 = local_1c;
  CCycler::GenericCyclerSpawn
            ((CCycler *)this,gpGlobals->pStringBase + this->pev->model,&local_1c,&local_2c);
  return;
}

