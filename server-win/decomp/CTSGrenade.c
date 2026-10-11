/* mp.dll - CTSGrenade (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10050420  CTSGrenade::Precache  (48 bytes)
 * undefined Precache(void)
 * called by: CM61Grenade::Spawn
 */
void CTSGrenade::Precache(void)

{
  (*g_engfuncs.pfnPrecacheSound)(s_weapons_grenbounce1_wav_100a4364);
  (*g_engfuncs.pfnPrecacheSound)(s_weapons_grenbounce2_wav_100a434c);
  (*g_engfuncs.pfnPrecacheSound)(s_weapons_grenbounce3_wav_100a4334);
  (*g_engfuncs.pfnPrecacheSound)(s_weapons_grenbounce4_wav_100a431c);
  return;
}

/* 10050450  CTSGrenade::BounceTouch  (419 bytes)
 * void BounceTouch(CBaseEntity * param_1)
 * called by: CM61Grenade::BounceTouch
 */
/* public: virtual void __thiscall CTSGrenade::BounceTouch(class CBaseEntity *) */

void __thiscall CTSGrenade::BounceTouch(CTSGrenade *this,CBaseEntity *param_1)

{
  int iVar1;
  void *this_00;
  char *pcVar2;
  float local_18;
  float local_14;
  float local_10;
  Vector local_c;
  
                    /* 0x50450  9  ?BounceTouch@CTSGrenade@@UAEXPAVCBaseEntity@@@Z */
  iVar1 = *(int *)(this + 4);
  if ((*(uint *)(iVar1 + 0x1a4) & 0x200) == 0) {
    iVar1 = (*g_engfuncs.pfnRandomLong)(0,3);
    switch(iVar1) {
    case 0:
      pcVar2 = s_weapons_grenbounce1_wav_100a4364;
      break;
    case 1:
      EMIT_SOUND_DYN(this_00,*(undefined4 *)(*(int *)(this + 4) + 0x208),2,
                     s_weapons_grenbounce2_wav_100a434c,0x3e800000,0x3f4ccccd,0);
      return;
    case 2:
      EMIT_SOUND_DYN(*(void **)(this + 4),*(undefined4 *)((int)*(void **)(this + 4) + 0x208),2,
                     s_weapons_grenbounce3_wav_100a4334,0x3e800000,0x3f4ccccd,0);
      return;
    case 3:
      pcVar2 = s_weapons_grenbounce4_wav_100a431c;
      break;
    default:
      goto switchD_10050539_default;
    }
    EMIT_SOUND_DYN(*(void **)(*(int *)(this + 4) + 0x208),*(void **)(*(int *)(this + 4) + 0x208),2,
                   pcVar2,0x3e800000,0x3f4ccccd,0);
  }
  else {
    local_18 = *(float *)(iVar1 + 0x20) * 0.8;
    local_14 = *(float *)(iVar1 + 0x24) * 0.8;
    local_10 = *(float *)(iVar1 + 0x28) * 0.8;
    Vector::Vector(&local_c,&local_18);
    iVar1 = *(int *)(this + 4);
    *(float *)(iVar1 + 0x20) = local_c.x;
    *(float *)(iVar1 + 0x24) = local_c.y;
    *(float *)(iVar1 + 0x28) = local_c.z;
    iVar1 = *(int *)(this + 4);
    if (SQRT(*(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28) +
             *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
             *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20)) < 32.0) {
      *(undefined4 *)(iVar1 + 0x50) = 0;
      *(undefined4 *)(*(int *)(this + 4) + 0x58) = 0;
      iVar1 = *(int *)(this + 4);
      *(undefined4 *)(iVar1 + 0x20) = DAT_100ae498;
      *(undefined4 *)(iVar1 + 0x24) = DAT_100ae49c;
      *(undefined4 *)(iVar1 + 0x28) = DAT_100ae4a0;
      return;
    }
  }
switchD_10050539_default:
  return;
}

