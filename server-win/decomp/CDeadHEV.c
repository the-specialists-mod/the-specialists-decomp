/* mp.dll - CDeadHEV (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10035a50  CDeadHEV::KeyValue  (114 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CDeadHEV::KeyValue(CDeadHEV *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  CDeadHEV *this_00;
  byte *pbVar6;
  bool bVar7;
  undefined3 uVar5;
  
  pbVar6 = &DAT_100a12d4;
  pbVar2 = *(byte **)(param_1 + 4);
  this_00 = this;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CDeadHEV *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_10035a8a:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_10035a8f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CDeadHEV *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_10035a8a;
    pbVar2 = pbVar2 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10035a8f:
  if (iVar3 == 0) {
    uVar4 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x150 = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CBaseMonster::KeyValue((CBaseMonster *)this,param_1);
  return;
}

/* 10035ae0  CDeadHEV::Spawn  (209 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CDeadHEV::Spawn(int *param_1)

{
  undefined4 uVar1;
  
  (*g_engfuncs.pfnPrecacheModel)(s_models_player_mdl_1009cc1c);
  (*g_engfuncs.pfnSetModel)(*(edict_t **)(param_1[1] + 0x208),s_models_player_mdl_1009cc1c);
  *(undefined4 *)(param_1[1] + 0x118) = 0;
  *(undefined4 *)(param_1[1] + 0xb0) = 0x41000000;
  *(undefined4 *)(param_1[1] + 0x128) = 0;
  *(undefined4 *)(param_1[1] + 0x114) = 1;
  param_1[0x4c] = 0xf7;
  uVar1 = CBaseAnimating::LookupSequence
                    ((CBaseAnimating *)param_1,(&PTR_s_deadback_100a0bd0)[param_1[0x54]]);
  *(undefined4 *)(param_1[1] + 0x128) = uVar1;
  if (*(int *)(param_1[1] + 0x128) == -1) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_Dead_hevsuit_with_bad_pose_100a12dc);
    *(undefined4 *)(param_1[1] + 0x128) = 0;
    *(undefined4 *)(param_1[1] + 0x118) = 1;
  }
  *(undefined4 *)(param_1[1] + 0x160) = 0x41000000;
  (**(code **)(*param_1 + 0x13c))();
  return;
}

/* 100361a0  CDeadHEV::Classify  (6 bytes)
 * undefined Classify()
 */
undefined4 CDeadHEV::Classify(void)

{
  return 4;
}

