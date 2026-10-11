/* mp.dll - CShower (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1001dc80  CShower::Spawn  (373 bytes)
 * undefined Spawn()
 */
void __fastcall CShower::Spawn(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  iVar3 = *(int *)(param_1 + 4);
  fVar5 = (float10)(*g_engfuncs.pfnRandomFloat)(200.0,300.0);
  fVar1 = *(float *)(iVar3 + 0x54);
  iVar4 = *(int *)(param_1 + 4);
  fVar2 = *(float *)(iVar3 + 0x58);
  *(float *)(iVar4 + 0x20) = (float)(fVar5 * (float10)*(float *)(iVar3 + 0x50));
  *(float *)(iVar4 + 0x24) = (float)(fVar5 * (float10)fVar1);
  *(float *)(iVar4 + 0x28) = (float)(fVar5 * (float10)fVar2);
  iVar3 = *(int *)(param_1 + 4);
  fVar5 = (float10)(*g_engfuncs.pfnRandomFloat)(-100.0,100.0);
  *(float *)(iVar3 + 0x20) = (float)(fVar5 + (float10)*(float *)(iVar3 + 0x20));
  iVar3 = *(int *)(param_1 + 4);
  fVar5 = (float10)(*g_engfuncs.pfnRandomFloat)(-100.0,100.0);
  *(float *)(iVar3 + 0x24) = (float)(fVar5 + (float10)*(float *)(iVar3 + 0x24));
  iVar3 = *(int *)(param_1 + 4);
  if (*(float *)(iVar3 + 0x28) < 0.0) {
    fVar1 = *(float *)(iVar3 + 0x28) - 200.0;
  }
  else {
    fVar1 = *(float *)(iVar3 + 0x28) + 200.0;
  }
  *(float *)(iVar3 + 0x28) = fVar1;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 10;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x11c) = 0x3f000000;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.1;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),s_models_grenade_mdl_1009e0f0);
  UTIL_SetSize(*(int *)(param_1 + 4),&DAT_100ae498,&DAT_100ae498);
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x80;
  fVar5 = (float10)(*g_engfuncs.pfnRandomFloat)(0.5,1.5);
  *(float *)(*(int *)(param_1 + 4) + 0x1f8) = (float)fVar5;
  iVar3 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar3 + 0x50) = DAT_100ae498;
  *(undefined4 *)(iVar3 + 0x54) = DAT_100ae49c;
  *(undefined4 *)(iVar3 + 0x58) = DAT_100ae4a0;
  return;
}

/* 1001de00  CShower::Think  (130 bytes)
 * undefined Think(int * param_1)
 */
void __fastcall CShower::Think(int *param_1)

{
  UTIL_Sparks((undefined4 *)(param_1[1] + 8));
  *(float *)(param_1[1] + 0x1f8) = *(float *)(param_1[1] + 0x1f8) - 0.1;
  if (0.0 < *(float *)(param_1[1] + 0x1f8)) {
    *(float *)(param_1[1] + 0x104) = gpGlobals->time + 0.1;
    *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) & 0xfffffdff;
    return;
  }
  UTIL_Remove(param_1);
  *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) & 0xfffffdff;
  return;
}

/* 1001de90  CShower::Touch  (224 bytes)
 * undefined Touch()
 */
void __fastcall CShower::Touch(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((*(uint *)(iVar1 + 0x1a4) & 0x200) == 0) {
    fVar2 = *(float *)(iVar1 + 0x28) * 0.6;
    *(float *)(iVar1 + 0x20) = *(float *)(iVar1 + 0x20) * 0.6;
    *(float *)(iVar1 + 0x24) = *(float *)(iVar1 + 0x24) * 0.6;
  }
  else {
    fVar2 = *(float *)(iVar1 + 0x28) * 0.1;
    *(float *)(iVar1 + 0x20) = *(float *)(iVar1 + 0x20) * 0.1;
    *(float *)(iVar1 + 0x24) = *(float *)(iVar1 + 0x24) * 0.1;
  }
  *(float *)(iVar1 + 0x28) = fVar2;
  iVar1 = *(int *)(param_1 + 4);
  if (*(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
      *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20) < 10.0) {
    *(undefined4 *)(iVar1 + 0x1f8) = 0;
  }
  return;
}

