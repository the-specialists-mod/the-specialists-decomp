/* mp.dll - CVoiceGameMgr (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10078fc0  CVoiceGameMgr::Init  (140 bytes)
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
  (*g_engfuncs.pfnPrecacheModel)(s_sprites_voiceicon_spr_100a72d4);
  iVar1 = (*g_engfuncs.pfnRegUserMsg)(s_VoiceMask_100a72c8,8);
  *(int *)(this + 8) = iVar1;
  iVar1 = (*g_engfuncs.pfnRegUserMsg)(s_ReqState_100a72bc,0);
  *(int *)(this + 0xc) = iVar1;
  pcVar2 = (*g_engfuncs.pfnCVarGetPointer)(s_voice_serverdebug_100a72a8);
  if (pcVar2 == (cvar_t *)0x0) {
    (*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_voice_serverdebug_100a7270);
  }
  pcVar2 = (*g_engfuncs.pfnCVarGetPointer)(s_sv_alltalk_100a729c);
  if (pcVar2 == (cvar_t *)0x0) {
    pcVar2 = (cvar_t *)(*g_engfuncs.pfnCVarRegister)((cvar_t *)&PTR_s_sv_alltalk_100a7288);
  }
  return CONCAT31((int3)((uint)pcVar2 >> 8),1);
}

/* 10079100  CVoiceGameMgr::ClientCommand  (459 bytes)
 * undefined4 ClientCommand(int param_1, byte.conflict * param_2)
 * called by: FUN_1002ba80
 */
undefined4 __thiscall
CVoiceGameMgr::ClientCommand(CVoiceGameMgr *this,int param_1,byte_conflict *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  byte_conflict *pbVar7;
  void *this_00;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this_01;
  void *this_02;
  void *this_03;
  undefined4 *puVar8;
  int iVar9;
  CVoiceGameMgr *unaff_retaddr;
  byte_conflict *in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  iVar2 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
  pbVar7 = in_stack_0000000c;
  iVar2 = iVar2 + -1;
  if ((iVar2 < 0) || (*(int *)(this + 0x14) <= iVar2)) {
    uVar6 = FUN_100792d0();
    return CONCAT31((int3)((uint)uVar6 >> 8),1);
  }
  uVar3 = FUN_100887b0(this_00,in_stack_0000000c,&DAT_100a73d4);
  this_01 = extraout_ECX;
  if ((uVar3 == 0) && (iVar4 = (*g_engfuncs.pfnCmd_Argc)(), this_01 = extraout_ECX_00, 1 < iVar4)) {
    iVar9 = 1;
    iVar4 = (*g_engfuncs.pfnCmd_Argc)();
    if (1 < iVar4) {
      puVar8 = &DAT_102eeb74 + iVar2;
      do {
        pbVar7 = (byte_conflict *)&stack0x0000000c;
        in_stack_0000000c = (byte_conflict *)0x0;
        pcVar5 = (*g_engfuncs.pfnCmd_Argv)(iVar9);
        sscanf(pcVar5,pbVar7);
        if (iVar9 < 2) {
          FUN_100792d0();
          *puVar8 = in_stack_00000010;
        }
        else {
          FUN_100792d0();
        }
        iVar9 = iVar9 + 1;
        puVar8 = puVar8 + 1;
        iVar2 = (*g_engfuncs.pfnCmd_Argc)();
        this = unaff_retaddr;
      } while (iVar9 < iVar2);
    }
    uVar6 = FUN_10079330((int)this);
    return CONCAT31((int3)((uint)uVar6 >> 8),1);
  }
  uVar3 = FUN_100887b0(this_01,pbVar7,(byte_conflict *)s_VModEnable_100a735c);
  if ((uVar3 == 0) && (uVar3 = (*g_engfuncs.pfnCmd_Argc)(), 1 < (int)uVar3)) {
    pbVar7 = (byte_conflict *)(*g_engfuncs.pfnCmd_Argv)(1);
    atoi(this_02,pbVar7);
    FUN_100792d0();
    pbVar7 = (byte_conflict *)(*g_engfuncs.pfnCmd_Argv)(1);
    iVar4 = atoi(this_03,pbVar7);
    iVar9 = iVar2 >> 5;
    bVar1 = (byte)iVar2;
    if (iVar4 == 0) {
      uVar3 = (&DAT_102eeb70)[iVar9] & ~(1 << (bVar1 & 0x1f));
    }
    else {
      uVar3 = (&DAT_102eeb70)[iVar9] | 1 << (bVar1 & 0x1f);
    }
    (&DAT_102eeb70)[iVar9] = uVar3;
    (&DAT_102eec74)[iVar9] = (&DAT_102eec74)[iVar9] & ~(1 << (bVar1 & 0x1f));
    uVar6 = FUN_10079330((int)this);
    return CONCAT31((int3)((uint)uVar6 >> 8),1);
  }
  return uVar3 & 0xffffff00;
}

