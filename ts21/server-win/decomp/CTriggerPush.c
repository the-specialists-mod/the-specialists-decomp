/* mp.dll - CTriggerPush (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1003bc90  CTriggerPush::Spawn  (147 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CTriggerPush::Spawn(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (((*(float *)(iVar1 + 0x50) == DAT_1009f4a8) && (*(float *)(iVar1 + 0x54) == DAT_1009f4ac)) &&
     (*(float *)(iVar1 + 0x58) == DAT_1009f4b0)) {
    *(undefined4 *)(iVar1 + 0x54) = 0x43b40000;
  }
  CBaseTrigger::InitTrigger(param_1);
  if (*(float *)(*(int *)(param_1 + 4) + 0x1f8) == 0.0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x1f8) = 0x42c80000;
  }
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 2) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  }
  *(code **)(param_1 + 0x18) = CBaseTrigger::ToggleUse;
  FUN_100679a0();
  return;
}

/* 1003bd30  CTriggerPush::Touch  (329 bytes)
 * undefined Touch()
 */
void __thiscall CTriggerPush::Touch(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar2 = *(int *)(param_2 + 4);
  switch(*(undefined4 *)(iVar2 + 0x108)) {
  case 0:
  case 7:
  case 8:
  case 0xc:
    break;
  default:
    if ((*(int *)(iVar2 + 0x10c) != 0) && (*(int *)(iVar2 + 0x10c) != 4)) {
      iVar3 = *(int *)(param_1 + 4);
      fVar5 = *(float *)(iVar3 + 0x1f8);
      fVar6 = fVar5 * *(float *)(iVar3 + 0x44);
      if ((*(byte *)(iVar3 + 0x1a0) & 1) != 0) {
        fVar4 = *(float *)(iVar3 + 0x48);
        fVar1 = *(float *)(iVar3 + 0x4c);
        *(float *)(iVar2 + 0x20) = fVar6 + *(float *)(iVar2 + 0x20);
        *(float *)(iVar2 + 0x24) = fVar5 * fVar4 + *(float *)(iVar2 + 0x24);
        *(float *)(iVar2 + 0x28) = fVar5 * fVar1 + *(float *)(iVar2 + 0x28);
        if (0.0 < *(float *)(iVar2 + 0x28)) {
          *(uint *)(iVar2 + 0x1a4) = *(uint *)(iVar2 + 0x1a4) & 0xfffffdff;
        }
        UTIL_Remove(param_1);
        return;
      }
      fVar4 = fVar5 * *(float *)(iVar3 + 0x48);
      fVar5 = fVar5 * *(float *)(iVar3 + 0x4c);
      if ((*(uint *)(iVar2 + 0x1a4) & 0x400000) != 0) {
        fVar6 = fVar6 + *(float *)(iVar2 + 0x2c);
        fVar4 = fVar4 + *(float *)(iVar2 + 0x30);
        fVar5 = fVar5 + *(float *)(iVar2 + 0x34);
      }
      *(uint *)(iVar2 + 0x1a4) = *(uint *)(iVar2 + 0x1a4) | 0x400000;
      *(float *)(iVar2 + 0x2c) = fVar6;
      *(float *)(iVar2 + 0x30) = fVar4;
      *(float *)(iVar2 + 0x34) = fVar5;
    }
  }
  return;
}

