/* mp.dll - CTriggerMonsterJump (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1003a3d0  CTriggerMonsterJump::Spawn  (98 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CTriggerMonsterJump::Spawn(int param_1)

{
  SetMovedir(*(int *)(param_1 + 4));
  CBaseTrigger::InitTrigger(param_1);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x104) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x1f8) = 0x43480000;
  *(undefined4 *)(param_1 + 0xc0) = 0x43160000;
  if (*(int *)(*(int *)(param_1 + 4) + 0x1cc) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
    FUN_100679a0();
    *(code **)(param_1 + 0x18) = CBaseTrigger::ToggleUse;
  }
  return;
}

/* 1003a440  CTriggerMonsterJump::Think  (41 bytes)
 * undefined Think(int param_1)
 */
void __fastcall CTriggerMonsterJump::Think(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  FUN_100679a0();
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

/* 1003a470  CTriggerMonsterJump::Touch  (142 bytes)
 * undefined Touch()
 */
void __thiscall CTriggerMonsterJump::Touch(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar4 = *(int *)(param_2 + 4);
  uVar5 = *(uint *)(iVar4 + 0x1a4);
  if ((uVar5 & 0x20) != 0) {
    *(float *)(iVar4 + 0x10) = *(float *)(iVar4 + 0x10) + 1.0;
    if ((uVar5 & 0x200) != 0) {
      *(uint *)(iVar4 + 0x1a4) = uVar5 & 0xfffffdff;
    }
    iVar6 = *(int *)(param_1 + 4);
    fVar1 = *(float *)(iVar6 + 0x1f8);
    fVar2 = *(float *)(iVar6 + 0x48);
    fVar3 = *(float *)(iVar6 + 0x4c);
    *(float *)(iVar4 + 0x20) = fVar1 * *(float *)(iVar6 + 0x44);
    *(float *)(iVar4 + 0x24) = fVar1 * fVar2;
    *(float *)(iVar4 + 0x28) = fVar1 * fVar3;
    *(float *)(iVar4 + 0x28) = *(float *)(param_1 + 0xc0) + *(float *)(iVar4 + 0x28);
    *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time;
  }
  return;
}

