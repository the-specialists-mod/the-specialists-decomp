/* mp.dll - CTSParticle (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10048770  CTSParticle::KeyValue  (53 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CTSParticle::KeyValue(CTSParticle *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = CTSSharedEmitter::ParticleKeyValue
                    ((CTSSharedEmitter *)&DAT_100d99d0,(int)&this->field_0x58,
                     *(byte_conflict **)(param_1 + 4),*(byte_conflict **)(param_1 + 8));
  if ((char)uVar1 != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 10048990  CTSParticle::Spawn  (109 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CTSParticle::Spawn(int *param_1)

{
  int iVar1;
  
  *(int *)param_1[1] = (int)s_ts_particle_100a33c4 - (int)gpGlobals->pStringBase;
  FUN_10048860((int)param_1);
  iVar1 = FUN_10067120(&DAT_100d99d0,param_1 + 0x16);
  param_1[0x15] = iVar1;
  if (iVar1 == -1) {
    (*g_engfuncs.pfnAlertMessage)(at_error,s_Too_many_particles__Particle_lim_100a338c,0x200);
    UTIL_Remove(param_1);
  }
  if ((char)param_1[0x6c] != '\0') {
    (*g_engfuncs.pfnPrecacheSound)((char *)(param_1 + 0x6c));
  }
  return;
}

