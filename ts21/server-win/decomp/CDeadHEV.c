/* mp.dll - CDeadHEV (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1002e800  CDeadHEV::KeyValue  (76 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CDeadHEV::KeyValue(CDeadHEV *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  iVar2 = 5;
  bVar5 = true;
  pcVar3 = *(char **)(param_1 + 4);
  pcVar4 = &DAT_10095ff0;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    uVar1 = FUN_1006e1dd(*(void **)(param_1 + 8),*(void **)(param_1 + 8));
    *(undefined4 *)&this->field_0x150 = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CBaseMonster::KeyValue((CBaseMonster *)this,param_1);
  return;
}

/* 1002e860  CDeadHEV::Spawn  (208 bytes)
 * undefined Spawn()
 */
void __fastcall CDeadHEV::Spawn(CBaseAnimating *param_1)

{
  undefined4 uVar1;
  
  (*g_engfuncs.pfnPrecacheModel)(s_models_player_mdl_10091af4);
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),s_models_player_mdl_10091af4);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x118) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0xb0) = 0x41000000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x128) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x114) = 1;
  *(undefined4 *)(param_1 + 0x130) = 0xf7;
  uVar1 = CBaseAnimating::LookupSequence
                    (param_1,(&PTR_s_deadback_100958a0)[*(int *)(param_1 + 0x150)]);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x128) = uVar1;
  if (*(int *)(*(int *)(param_1 + 4) + 0x128) == -1) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_Dead_hevsuit_with_bad_pose_10095ff8);
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x128) = 0;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x118) = 1;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x160) = 0x41000000;
                    /* WARNING: Could not recover jumptable at 0x1002e92a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)param_1 + 0x120))();
  return;
}

/* 1002ee80  CDeadHEV::Classify  (6 bytes)
 * undefined Classify()
 */
undefined4 CDeadHEV::Classify(void)

{
  return 4;
}

