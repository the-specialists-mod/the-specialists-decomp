/* mp.dll - CVoiceGameMgr (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10069c20  CVoiceGameMgr::Init  (140 bytes)
 * undefined4 Init(undefined4 param_1, int param_2)
 * called by: CHalfLifeMultiplay::CHalfLifeMultiplay
 */
undefined4 __thiscall CVoiceGameMgr::Init(CVoiceGameMgr *this,undefined4 param_1,int param_2)

{
  int iVar1;
  cvar_t *pcVar2;
  
  *(undefined4 *)(this + 0x10) = param_1;
  if (0x20 < param_2) {
    param_2 = 0x20;
  }
  *(int *)(this + 0x14) = param_2;
  (*g_engfuncs.pfnPrecacheModel)(s_sprites_voiceicon_spr_1009ab54);
  iVar1 = (*g_engfuncs.pfnRegUserMsg)(s_VoiceMask_1009ab48,8);
  *(int *)(this + 8) = iVar1;
  iVar1 = (*g_engfuncs.pfnRegUserMsg)(s_ReqState_1009ab3c,0);
  *(int *)(this + 0xc) = iVar1;
  pcVar2 = (*g_engfuncs.pfnCVarGetPointer)(s_voice_serverdebug_1009ab28);
  if (pcVar2 == (cvar_t *)0x0) {
    (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_voice_serverdebug_1009aaf4);
  }
  pcVar2 = (*g_engfuncs.pfnCVarGetPointer)(s_sv_alltalk_1009ab1c);
  if (pcVar2 == (cvar_t *)0x0) {
    pcVar2 = (cvar_t *)(*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_sv_alltalk_1009ab08);
  }
  return CONCAT31((int3)((uint)pcVar2 >> 8),1);
}

/* 10069d70  CVoiceGameMgr::ClientCommand  (437 bytes)
 * undefined4 ClientCommand(int param_1, byte.conflict * param_2)
 * called by: FUN_10023950, FUN_10038870
 */
undefined4 __thiscall
CVoiceGameMgr::ClientCommand(CVoiceGameMgr *this,int param_1,byte_conflict *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  byte_conflict *pbVar6;
  void *this_00;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this_01;
  void *this_02;
  void *this_03;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  CVoiceGameMgr *unaff_retaddr;
  byte_conflict *in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  iVar1 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
  pbVar6 = in_stack_0000000c;
  iVar1 = iVar1 + -1;
  if ((iVar1 < 0) || (*(int *)(this + 0x14) <= iVar1)) {
    uVar5 = FUN_10069f30();
    return CONCAT31((int3)((uint)uVar5 >> 8),1);
  }
  uVar2 = FUN_1007e860(this_00,in_stack_0000000c,&DAT_1009ac54);
  this_01 = extraout_ECX;
  if ((uVar2 == 0) && (iVar3 = (*g_engfuncs.pfnCmd_Argc)(), this_01 = extraout_ECX_00, 1 < iVar3)) {
    iVar9 = 1;
    iVar3 = (*g_engfuncs.pfnCmd_Argc)();
    if (1 < iVar3) {
      puVar8 = &DAT_102df8b8 + iVar1;
      do {
        pbVar6 = (byte_conflict *)&stack0x0000000c;
        in_stack_0000000c = (byte_conflict *)0x0;
        pcVar4 = (*g_engfuncs.pfnCmd_Argv)(iVar9);
        FUN_1006ea8e(pcVar4,pbVar6);
        if (iVar9 < 2) {
          FUN_10069f30();
          *puVar8 = in_stack_00000010;
        }
        else {
          FUN_10069f30();
        }
        iVar9 = iVar9 + 1;
        puVar8 = puVar8 + 1;
        iVar1 = (*g_engfuncs.pfnCmd_Argc)();
        this = unaff_retaddr;
      } while (iVar9 < iVar1);
    }
    uVar5 = FUN_10069f90((int)this);
    return CONCAT31((int3)((uint)uVar5 >> 8),1);
  }
  uVar2 = FUN_1007e860(this_01,pbVar6,(byte_conflict *)s_VModEnable_1009abdc);
  if ((uVar2 == 0) && (uVar2 = (*g_engfuncs.pfnCmd_Argc)(), 1 < (int)uVar2)) {
    pbVar6 = (byte_conflict *)(*g_engfuncs.pfnCmd_Argv)(1);
    FUN_1006e1dd(this_02,pbVar6);
    FUN_10069f30();
    pbVar6 = (byte_conflict *)(*g_engfuncs.pfnCmd_Argv)(1);
    iVar3 = FUN_1006e1dd(this_03,pbVar6);
    iVar9 = iVar1 >> 5;
    if (iVar3 == 0) {
      uVar2 = 1 << ((byte)iVar1 & 0x1f);
      uVar7 = (&DAT_102df8b0)[iVar9] & ~uVar2;
    }
    else {
      uVar2 = 1 << ((byte)iVar1 & 0x1f);
      uVar7 = (&DAT_102df8b0)[iVar9] | uVar2;
    }
    (&DAT_102df8b0)[iVar9] = uVar7;
    (&DAT_102df9b8)[iVar9] = (&DAT_102df9b8)[iVar9] & ~uVar2;
    uVar5 = FUN_10069f90((int)this);
    return CONCAT31((int3)((uint)uVar5 >> 8),1);
  }
  return uVar2 & 0xffffff00;
}

