/* mp.dll - CTSStunt (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1005d600  CTSStunt::GoRoll  (612 bytes)
 * undefined4 GoRoll(int param_1)
 * called by: CBasePlayer::Duck, CBasePlayer::PostThink
 */
undefined4 __fastcall CTSStunt::GoRoll(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined3 extraout_var;
  int iVar5;
  void *this;
  float10 fVar6;
  float local_c;
  float local_8;
  float local_4;
  
  if (((*(uint *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x1a4) & 0x200) == 0) &&
     (*(float *)(param_1 + 0x10) < gpGlobals->time)) {
    DAT_100cbef0 = 0;
    return 0;
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 4);
  fVar1 = *(float *)(iVar5 + 0x24);
  fVar2 = *(float *)(iVar5 + 0x20);
  DAT_100cbef0 = 80.0 <= SQRT(fVar2 * fVar2 + fVar1 * fVar1) &&
                 gpGlobals->time <= *(float *)(param_1 + 0x10);
  if ((*(uint *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x250) & 0xb0c30) != 0) {
    DAT_100cbef0 = false;
  }
  if (gpGlobals->time < *(float *)(param_1 + 8)) {
    DAT_100cbef0 = false;
  }
  bVar4 = FUN_1002b380(*(int *)(param_1 + 0x40));
  if (CONCAT31(extraout_var,bVar4) == 0) {
    if (DAT_100cbef0 != '\0') {
      iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 4);
      fVar1 = *(float *)(iVar5 + 0x20);
      local_4 = SQRT(*(float *)(iVar5 + 0x28) * *(float *)(iVar5 + 0x28) +
                     *(float *)(iVar5 + 0x24) * *(float *)(iVar5 + 0x24) + fVar1 * fVar1);
      if (local_4 == 0.0) {
        local_c = 0.0;
        local_8 = 0.0;
        local_4 = 1.0;
      }
      else {
        local_4 = 1.0 / local_4;
        local_c = local_4 * *(float *)(iVar5 + 0x20);
        local_8 = local_4 * *(float *)(iVar5 + 0x24);
        local_4 = local_4 * *(float *)(iVar5 + 0x28);
      }
      *(float *)(param_1 + 0x24) = local_c;
      *(float *)(param_1 + 0x28) = local_8;
      *(float *)(param_1 + 0x2c) = local_4;
      iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 4);
      *(uint *)(iVar5 + 0x250) = *(uint *)(iVar5 + 0x250) & 0xfff7ffff;
      iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 4);
      *(uint *)(iVar5 + 0x250) = *(uint *)(iVar5 + 0x250) | 0x40000;
      iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 4);
      *(uint *)(iVar5 + 0x250) = *(uint *)(iVar5 + 0x250) | 4;
      iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 4);
      *(uint *)(iVar5 + 0x250) = *(uint *)(iVar5 + 0x250) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x120) = 0x3e99999a;
      iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 4);
      *(undefined4 *)(iVar5 + 0x174) = DAT_1009f4a8;
      *(undefined4 *)(iVar5 + 0x178) = DAT_1009f4ac;
      *(undefined4 *)(iVar5 + 0x17c) = DAT_1009f4b0;
      fVar6 = (float10)FUN_100551c0(*(int *)(param_1 + 0x40));
      *(float *)(param_1 + 8) = (float)(fVar6 * (float10)0.75 + (float10)gpGlobals->time);
      CTSAnimation::Animate
                ((CTSAnimation *)(*(int **)(param_1 + 0x40) + 0x9d),*(int **)(param_1 + 0x40),0x2f);
      uVar3 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x208);
      iVar5 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
      EMIT_SOUND_DYN(this,uVar3,4,s_player_land_wav_100994c4,0x3f800000,0x3f4ccccd,0,iVar5 + 0x5f);
      *(undefined4 *)(param_1 + 0x10) = 0;
      return 1;
    }
  }
  else {
    DAT_100cbef0 = '\0';
  }
  *(float *)(param_1 + 0x10) = gpGlobals->time + 0.3;
  return 0;
}

