/* ts_i386.so - CTSGrenade (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 0007bdd8  CTSGrenade::Precache  (78 bytes)
 * undefined Precache(void)
 */
/* CTSGrenade::Precache(void) */

void CTSGrenade::Precache(void)

{
  (*g_engfuncs.pfnPrecacheSound)("weapons/grenbounce1.wav");
  (*g_engfuncs.pfnPrecacheSound)("weapons/grenbounce2.wav");
  (*g_engfuncs.pfnPrecacheSound)("weapons/grenbounce3.wav");
  (*g_engfuncs.pfnPrecacheSound)("weapons/grenbounce4.wav");
  return;
}

/* 0007be28  CTSGrenade::BounceTouch  (315 bytes)
 * undefined BounceTouch(int * param_1)
 */
/* CTSGrenade::BounceTouch(CBaseEntity *) */

void CTSGrenade::BounceTouch(int *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  undefined4 *puVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float local_2c [7];
  
  iVar3 = *param_1;
  if ((*(byte *)(iVar3 + 0x1a5) & 2) == 0) {
    iVar3 = (*g_engfuncs.pfnRandomLong)(0,3);
    switch(iVar3) {
    case 0:
      iVar3 = *param_1;
      pcVar1 = "weapons/grenbounce1.wav";
      break;
    case 1:
      iVar3 = *param_1;
      pcVar1 = "weapons/grenbounce2.wav";
      break;
    case 2:
      iVar3 = *param_1;
      pcVar1 = "weapons/grenbounce3.wav";
      break;
    case 3:
      iVar3 = *param_1;
      pcVar1 = "weapons/grenbounce4.wav";
      break;
    default:
      goto switchD_0007bf0a_default;
    }
    EMIT_SOUND_DYN(*(int *)(iVar3 + 0x208),2,pcVar1,0x3e800000,0x3f4ccccd,0,100,0.5);
  }
  else {
    local_2c[0] = *(float *)(iVar3 + 0x20) * 0.8;
    local_2c[1] = *(float *)(iVar3 + 0x24) * 0.8;
    local_2c[2] = *(float *)(iVar3 + 0x28) * 0.8;
    pfVar4 = local_2c;
    pfVar6 = (float *)(iVar3 + 0x20);
    for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar6 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar6 = pfVar6 + 1;
    }
    iVar3 = *param_1;
    if (SQRT(*(float *)(iVar3 + 0x28) * *(float *)(iVar3 + 0x28) +
             *(float *)(iVar3 + 0x24) * *(float *)(iVar3 + 0x24) +
             *(float *)(iVar3 + 0x20) * *(float *)(iVar3 + 0x20)) < 32.0) {
      *(undefined4 *)(*param_1 + 0x50) = 0;
      *(undefined4 *)(*param_1 + 0x58) = 0;
      puVar5 = &g_vecZero;
      puVar7 = (undefined4 *)(*param_1 + 0x20);
      for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
    }
  }
switchD_0007bf0a_default:
  return;
}

