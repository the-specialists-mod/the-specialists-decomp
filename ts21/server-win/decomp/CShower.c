/* mp.dll - CShower (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1001a7c0  CShower::Spawn  (357 bytes)
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
  iVar4 = *(int *)(param_1 + 4);
  fVar1 = *(float *)(iVar3 + 0x54);
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
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),s_models_grenade_mdl_10092ff8);
  FUN_10067970();
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x80;
  fVar5 = (float10)(*g_engfuncs.pfnRandomFloat)(0.5,1.5);
  *(float *)(*(int *)(param_1 + 4) + 0x1f8) = (float)fVar5;
  iVar3 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar3 + 0x50) = DAT_1009f4a8;
  *(undefined4 *)(iVar3 + 0x54) = DAT_1009f4ac;
  *(undefined4 *)(iVar3 + 0x58) = DAT_1009f4b0;
  return;
}

/* 1001a930  CShower::Think  (132 bytes)
 * undefined Think(int param_1)
 */
void __fastcall CShower::Think(int param_1)

{
  UTIL_Sparks((undefined4 *)(*(int *)(param_1 + 4) + 8));
  *(float *)(*(int *)(param_1 + 4) + 0x1f8) = *(float *)(*(int *)(param_1 + 4) + 0x1f8) - 0.1;
  if (0.0 < *(float *)(*(int *)(param_1 + 4) + 0x1f8)) {
    *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.1;
    *(uint *)(*(int *)(param_1 + 4) + 0x1a4) = *(uint *)(*(int *)(param_1 + 4) + 0x1a4) & 0xfffffdff
    ;
    return;
  }
  UTIL_Remove(param_1);
  *(uint *)(*(int *)(param_1 + 4) + 0x1a4) = *(uint *)(*(int *)(param_1 + 4) + 0x1a4) & 0xfffffdff;
  return;
}

/* 1001a9c0  CShower::Touch  (164 bytes)
 * undefined Touch()
 */
void __fastcall CShower::Touch(int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(param_1 + 4);
  uStack_c = *(float *)(iVar1 + 0x20);
  if ((*(uint *)(iVar1 + 0x1a4) & 0x200) == 0) {
    uStack_c = uStack_c * 0.6;
    uStack_8 = *(float *)(iVar1 + 0x24) * 0.6;
    fVar2 = *(float *)(iVar1 + 0x28) * 0.6;
  }
  else {
    uStack_c = uStack_c * 0.1;
    uStack_8 = *(float *)(iVar1 + 0x24) * 0.1;
    fVar2 = *(float *)(iVar1 + 0x28) * 0.1;
  }
  *(float *)(iVar1 + 0x20) = uStack_c;
  *(float *)(iVar1 + 0x24) = uStack_8;
  *(float *)(iVar1 + 0x28) = fVar2;
  iVar1 = *(int *)(param_1 + 4);
  if (*(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
      *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20) < 10.0) {
    *(undefined4 *)(iVar1 + 0x1f8) = 0;
  }
  return;
}

/* 1001aff0  CShower::ObjectCaps  (6 bytes)
 * undefined ObjectCaps()
 */
undefined4 CShower::ObjectCaps(void)

{
  return 0x80000000;
}

