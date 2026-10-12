/* mp.dll - CTSGrenade (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10046d40  CTSGrenade::Precache  (48 bytes)
 * undefined Precache(void)
 * called by: CM61Grenade::Spawn
 */
void CTSGrenade::Precache(void)

{
  (*g_engfuncs.pfnPrecacheSound)(s_weapons_grenbounce1_wav_10098600);
  (*g_engfuncs.pfnPrecacheSound)(s_weapons_grenbounce2_wav_100985e8);
  (*g_engfuncs.pfnPrecacheSound)(s_weapons_grenbounce3_wav_100985d0);
  (*g_engfuncs.pfnPrecacheSound)(s_weapons_grenbounce4_wav_100985b8);
  return;
}

/* 10046d70  CTSGrenade::BounceTouch  (383 bytes)
 * void BounceTouch(CBaseEntity * param_1)
 * called by: CM61Grenade::BounceTouch
 */
/* public: virtual void __thiscall CTSGrenade::BounceTouch(class CBaseEntity *) */

void __thiscall CTSGrenade::BounceTouch(CTSGrenade *this,CBaseEntity *param_1)

{
  int iVar1;
  void *this_00;
  char *pcVar2;
  
                    /* 0x46d70  8  ?BounceTouch@CTSGrenade@@UAEXPAVCBaseEntity@@@Z */
  iVar1 = *(int *)(this + 4);
  if ((*(uint *)(iVar1 + 0x1a4) & 0x200) == 0) {
    iVar1 = (*g_engfuncs.pfnRandomLong)(0,3);
    switch(iVar1) {
    case 0:
      pcVar2 = s_weapons_grenbounce1_wav_10098600;
      break;
    case 1:
      EMIT_SOUND_DYN(*(void **)(this + 4),*(undefined4 *)((int)*(void **)(this + 4) + 0x208),2,
                     s_weapons_grenbounce2_wav_100985e8,0x3e800000,0x3f4ccccd,0,100);
      return;
    case 2:
      EMIT_SOUND_DYN(*(void **)(*(int *)(this + 4) + 0x208),*(void **)(*(int *)(this + 4) + 0x208),2
                     ,s_weapons_grenbounce3_wav_100985d0,0x3e800000,0x3f4ccccd,0,100);
      return;
    case 3:
      pcVar2 = s_weapons_grenbounce4_wav_100985b8;
      break;
    default:
      goto switchD_10046e49_default;
    }
    EMIT_SOUND_DYN(this_00,*(undefined4 *)(*(int *)(this + 4) + 0x208),2,pcVar2,0x3e800000,
                   0x3f4ccccd,0,100);
  }
  else {
    *(float *)(iVar1 + 0x20) = *(float *)(iVar1 + 0x20) * 0.8;
    *(float *)(iVar1 + 0x24) = *(float *)(iVar1 + 0x24) * 0.8;
    *(float *)(iVar1 + 0x28) = *(float *)(iVar1 + 0x28) * 0.8;
    iVar1 = *(int *)(this + 4);
    if (SQRT(*(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28) +
             *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
             *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20)) < 32.0) {
      *(undefined4 *)(iVar1 + 0x50) = 0;
      *(undefined4 *)(*(int *)(this + 4) + 0x58) = 0;
      iVar1 = *(int *)(this + 4);
      *(undefined4 *)(iVar1 + 0x20) = DAT_1009f4a8;
      *(undefined4 *)(iVar1 + 0x24) = DAT_1009f4ac;
      *(undefined4 *)(iVar1 + 0x28) = DAT_1009f4b0;
      return;
    }
  }
switchD_10046e49_default:
  return;
}

