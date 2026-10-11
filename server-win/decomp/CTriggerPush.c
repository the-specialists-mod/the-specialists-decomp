/* mp.dll - CTriggerPush (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10042a80  CTriggerPush::Spawn  (147 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CTriggerPush::Spawn(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (((*(float *)(iVar1 + 0x50) == DAT_100ae498) && (*(float *)(iVar1 + 0x54) == DAT_100ae49c)) &&
     (*(float *)(iVar1 + 0x58) == DAT_100ae4a0)) {
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
  UTIL_SetOrigin(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + 8);
  return;
}

/* 10042b20  CTriggerPush::Touch  (406 bytes)
 * undefined Touch()
 */
void __thiscall CTriggerPush::Touch(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  Vector VStack_18;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar1 = *(int *)(param_2 + 4);
  switch(*(undefined4 *)(iVar1 + 0x108)) {
  case 0:
  case 7:
  case 8:
  case 0xc:
    break;
  default:
    if ((*(int *)(iVar1 + 0x10c) != 0) && (*(int *)(iVar1 + 0x10c) != 4)) {
      iVar2 = param_1[1];
      fStack_4 = *(float *)(iVar2 + 0x1f8);
      fStack_c = fStack_4 * *(float *)(iVar2 + 0x44);
      if ((*(byte *)(iVar2 + 0x1a0) & 1) != 0) {
        fStack_8 = fStack_4 * *(float *)(iVar2 + 0x48);
        fStack_4 = fStack_4 * *(float *)(iVar2 + 0x4c);
        Vector::Vector(&VStack_18,&fStack_c);
        VStack_18.x = VStack_18.x + *(float *)(iVar1 + 0x20);
        VStack_18.y = VStack_18.y + *(float *)(iVar1 + 0x24);
        VStack_18.z = VStack_18.z + *(float *)(iVar1 + 0x28);
        *(float *)(iVar1 + 0x20) = VStack_18.x;
        *(float *)(iVar1 + 0x24) = VStack_18.y;
        *(float *)(iVar1 + 0x28) = VStack_18.z;
        if (0.0 < *(float *)(iVar1 + 0x28)) {
          *(uint *)(iVar1 + 0x1a4) = *(uint *)(iVar1 + 0x1a4) & 0xfffffdff;
        }
        fStack_8 = VStack_18.y;
        fStack_4 = VStack_18.z;
        UTIL_Remove(param_1);
        return;
      }
      fStack_8 = fStack_4 * *(float *)(iVar2 + 0x48);
      fStack_4 = fStack_4 * *(float *)(iVar2 + 0x4c);
      Vector::Vector(&VStack_18,&fStack_c);
      if ((*(uint *)(iVar1 + 0x1a4) & 0x400000) != 0) {
        VStack_18.x = VStack_18.x + *(float *)(iVar1 + 0x2c);
        VStack_18.y = VStack_18.y + *(float *)(iVar1 + 0x30);
        VStack_18.z = VStack_18.z + *(float *)(iVar1 + 0x34);
      }
      *(float *)(iVar1 + 0x2c) = VStack_18.x;
      *(uint *)(iVar1 + 0x1a4) = *(uint *)(iVar1 + 0x1a4) | 0x400000;
      *(float *)(iVar1 + 0x30) = VStack_18.y;
      *(float *)(iVar1 + 0x34) = VStack_18.z;
    }
  }
  return;
}

