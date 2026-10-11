/* mp.dll - CCyclerProbe (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10027110  CCyclerProbe::Spawn  (171 bytes)
 * undefined Spawn()
 */
void __fastcall CCyclerProbe::Spawn(CCycler *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  Vector VStack_18;
  Vector VStack_c;
  
  iVar1 = *(int *)(param_1 + 4);
  VStack_18.x = *(float *)(iVar1 + 8);
  VStack_18.y = *(float *)(iVar1 + 0xc);
  VStack_18.z = *(float *)(iVar1 + 0x10) + 16.0;
  *(float *)(iVar1 + 8) = VStack_18.x;
  *(float *)(iVar1 + 0xc) = VStack_18.y;
  *(float *)(iVar1 + 0x10) = VStack_18.z;
  VStack_c.y = VStack_18.y;
  VStack_c.z = VStack_18.z;
  Vector::Vector(&VStack_c,0x41800000,0x41800000,0x41800000);
  puVar2 = (undefined4 *)Vector::Vector(&VStack_18,0xc1800000,0xc1800000,0xc1800000);
  Vector::Vector((Vector *)&stack0xffffffcc,puVar2);
  CCycler::GenericCyclerSpawn(param_1,s_models_prdroid_mdl_1009f58c);
  return;
}

