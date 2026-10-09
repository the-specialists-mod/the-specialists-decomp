/* ts_i386.so - CCyclerProbe (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000c752c  CCyclerProbe::Spawn  (168 bytes)
 * undefined Spawn(void)
 */
/* CCyclerProbe::Spawn(void) */

void __thiscall CCyclerProbe::Spawn(CCyclerProbe *this)

{
  entvars_t *peVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  vec_t *pvVar5;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_2c [7];
  
  peVar1 = this->pev;
  fVar2 = 16.0;
  local_2c[0] = peVar1->origin[0] + 0.0;
  local_2c[1] = peVar1->origin[1] + 0.0;
  local_2c[2] = peVar1->origin[2] + 16.0;
  pfVar4 = local_2c;
  pvVar5 = peVar1->origin;
  for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pvVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pvVar5 = pvVar5 + 1;
  }
  local_3c = 0xc1800000;
  local_38 = local_3c;
  local_34 = local_3c;
  local_2c[0] = fVar2;
  local_2c[1] = fVar2;
  local_2c[2] = fVar2;
  CCycler::GenericCyclerSpawn((CCycler *)this,"models/prdroid.mdl",&local_3c,local_2c);
  return;
}

