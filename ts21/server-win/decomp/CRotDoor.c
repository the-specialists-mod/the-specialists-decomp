/* mp.dll - CRotDoor (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10015400  CRotDoor::BreakableRespawn  (161 bytes)
 * undefined BreakableRespawn()
 */
void __thiscall CRotDoor::BreakableRespawn(int *param_1,char param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if (((*(int *)(iVar1 + 0x170) == 2) || (*(int *)(iVar1 + 0x118) == 0x80)) || (param_2 != '\0')) {
    *(undefined4 *)(iVar1 + 0x170) = 0;
    *(undefined4 *)(param_1[1] + 0x118) = 0;
    iVar1 = param_1[1];
    *(int *)(iVar1 + 0x50) = param_1[0x44];
    *(int *)(iVar1 + 0x54) = param_1[0x45];
    *(int *)(iVar1 + 0x58) = param_1[0x46];
    iVar1 = param_1[1];
    *(undefined4 *)(iVar1 + 0x5c) = DAT_1009f4a8;
    *(undefined4 *)(iVar1 + 0x60) = DAT_1009f4ac;
    *(undefined4 *)(iVar1 + 100) = DAT_1009f4b0;
    iVar1 = param_1[1];
    *(undefined4 *)(iVar1 + 0x20) = DAT_1009f4a8;
    *(undefined4 *)(iVar1 + 0x24) = DAT_1009f4ac;
    *(undefined4 *)(iVar1 + 0x28) = DAT_1009f4b0;
    param_1[5] = 0;
    param_1[4] = 0;
    (**(code **)(*param_1 + 0xc))();
  }
  return;
}

/* 100154b0  CRotDoor::Spawn  (668 bytes)
 * undefined Spawn()
 */
void __fastcall CRotDoor::Spawn(int *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  
  iVar8 = param_1[1];
  param_1[0x41] = *(int *)(iVar8 + 8);
  param_1[0x42] = *(int *)(iVar8 + 0xc);
  param_1[0x43] = *(int *)(iVar8 + 0x10);
  param_1[0x44] = *(int *)(iVar8 + 0x50);
  param_1[0x45] = *(int *)(iVar8 + 0x54);
  param_1[0x46] = *(int *)(iVar8 + 0x58);
  *(undefined1 *)(param_1 + 0x47) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  if ((float)param_1[0x3e] <= 0.0) {
    *(undefined4 *)(iVar8 + 0x16c) = 0;
  }
  else {
    *(undefined4 *)(iVar8 + 0x16c) = 0x3f800000;
  }
  (**(code **)(*param_1 + 0x10))();
  CBaseToggle::AxisDir(param_1[1]);
  iVar8 = param_1[1];
  if ((*(byte *)(iVar8 + 0x1a0) & 2) != 0) {
    *(float *)(iVar8 + 0x44) = *(float *)(iVar8 + 0x44) * -1.0;
    *(float *)(iVar8 + 0x48) = *(float *)(iVar8 + 0x48) * -1.0;
    *(float *)(iVar8 + 0x4c) = *(float *)(iVar8 + 0x4c) * -1.0;
  }
  iVar8 = param_1[1];
  pfVar1 = (float *)(param_1 + 0x29);
  fVar3 = (float)param_1[0x1e];
  *pfVar1 = *(float *)(iVar8 + 0x50);
  param_1[0x2a] = *(int *)(iVar8 + 0x54);
  pfVar2 = (float *)(param_1 + 0x2c);
  param_1[0x2b] = *(int *)(iVar8 + 0x58);
  fVar4 = *(float *)(iVar8 + 0x48);
  fVar5 = *(float *)(iVar8 + 0x4c);
  fVar6 = *(float *)(iVar8 + 0x54);
  fVar7 = *(float *)(iVar8 + 0x58);
  *pfVar2 = fVar3 * *(float *)(iVar8 + 0x44) + *(float *)(iVar8 + 0x50);
  param_1[0x2d] = (int)(fVar3 * fVar4 + fVar6);
  param_1[0x2e] = (int)(fVar3 * fVar5 + fVar7);
  if ((*(byte *)(iVar8 + 0x1a0) & 8) == 0) {
    *(undefined4 *)(iVar8 + 0x10c) = 4;
  }
  else {
    *(undefined4 *)(iVar8 + 0x10c) = 0;
  }
  *(undefined4 *)(param_1[1] + 0x108) = 7;
  FUN_100679a0();
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(param_1[1] + 0x208),gpGlobals->pStringBase + *(int *)(param_1[1] + 0xb8))
  ;
  if (*(float *)(param_1[1] + 0x1f8) == 0.0) {
    *(undefined4 *)(param_1[1] + 0x1f8) = 0x42c80000;
  }
  iVar8 = param_1[1];
  if ((*(byte *)(iVar8 + 0x1a0) & 1) != 0) {
    *(float *)(iVar8 + 0x50) = *pfVar2;
    *(int *)(iVar8 + 0x54) = param_1[0x2d];
    *(int *)(iVar8 + 0x58) = param_1[0x2e];
    *pfVar2 = *pfVar1;
    param_1[0x2d] = param_1[0x2a];
    *pfVar1 = *pfVar1;
    param_1[0x2e] = param_1[0x2b];
    param_1[0x2a] = param_1[0x2a];
    param_1[0x2b] = param_1[0x2b];
    iVar8 = param_1[1];
    *(float *)(iVar8 + 0x44) = *(float *)(iVar8 + 0x44) * -1.0;
    *(float *)(iVar8 + 0x48) = *(float *)(iVar8 + 0x48) * -1.0;
    *(float *)(iVar8 + 0x4c) = *(float *)(iVar8 + 0x4c) * -1.0;
  }
  param_1[0x1c] = 1;
  if ((*(uint *)(param_1[1] + 0x1a0) & 0x100) != 0) {
    param_1[5] = 0;
    return;
  }
  param_1[5] = (int)CBaseDoor::DoorTouch;
  return;
}

/* 10015750  CRotDoor::SetToggleState  (105 bytes)
 * undefined SetToggleState()
 */
void __thiscall CRotDoor::SetToggleState(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = *(int *)(param_1 + 4);
    *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(param_1 + 0xb0);
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0xb4);
    *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
    FUN_100679a0();
    return;
  }
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_1 + 0xac);
  FUN_100679a0();
  return;
}

