/* mp.dll - CGenericCycler (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10027c80  CGenericCycler::Spawn  (118 bytes)
 * undefined Spawn()
 */
void __fastcall CGenericCycler::Spawn(CCycler *param_1)

{
  undefined4 *puVar1;
  Vector VStack_18;
  Vector VStack_c;
  
  Vector::Vector(&VStack_18,0x41800000,0x41800000,0x42900000);
  puVar1 = (undefined4 *)Vector::Vector(&VStack_c,0xc1800000,0xc1800000,0);
  Vector::Vector((Vector *)&stack0xffffffcc,puVar1);
  CCycler::GenericCyclerSpawn
            (param_1,gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  return;
}

