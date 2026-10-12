/* mp.dll - CGenericCycler (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10020620  CGenericCycler::Spawn  (83 bytes)
 * undefined Spawn(void * param_1)
 */
void __fastcall CGenericCycler::Spawn(void *param_1)

{
  undefined1 auStack_1c [12];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = 0x41800000;
  local_c = 0x41800000;
  local_8 = 0x42900000;
  FUN_1000c5f0(auStack_1c,0xc1800000,0xc1800000,0);
  CCycler::GenericCyclerSpawn
            (param_1,gpGlobals->pStringBase + *(int *)(*(int *)((int)param_1 + 4) + 0xb8));
  return;
}

