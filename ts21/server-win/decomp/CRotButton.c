/* mp.dll - CRotButton (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1000a7a0  CRotButton::Spawn  (506 bytes)
 * undefined Spawn()
 */
void __fastcall CRotButton::Spawn(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char *s;
  int iVar6;
  
  s = ButtonSound(*(undefined4 *)(param_1 + 0x124));
  (*g_engfuncs.pfnPrecacheSound)(s);
  iVar6 = (*g_engfuncs.pfnAllocString)(s);
  *(int *)(*(int *)(param_1 + 4) + 0x1e8) = iVar6;
  CBaseToggle::AxisDir(*(int *)(param_1 + 4));
  iVar6 = *(int *)(param_1 + 4);
  if ((*(byte *)(iVar6 + 0x1a0) & 2) != 0) {
    *(float *)(iVar6 + 0x44) = *(float *)(iVar6 + 0x44) * -1.0;
    *(float *)(iVar6 + 0x48) = *(float *)(iVar6 + 0x48) * -1.0;
    *(float *)(iVar6 + 0x4c) = *(float *)(iVar6 + 0x4c) * -1.0;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 7;
  iVar6 = *(int *)(param_1 + 4);
  if ((*(byte *)(iVar6 + 0x1a0) & 1) == 0) {
    *(undefined4 *)(iVar6 + 0x10c) = 4;
  }
  else {
    *(undefined4 *)(iVar6 + 0x10c) = 0;
  }
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  if (*(float *)(*(int *)(param_1 + 4) + 0x1f8) == 0.0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x1f8) = 0x42200000;
  }
  if (*(float *)(param_1 + 0x7c) == 0.0) {
    *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
  }
  if (0.0 < *(float *)(*(int *)(param_1 + 4) + 0x160)) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x16c) = 0x3f800000;
  }
  iVar6 = *(int *)(param_1 + 4);
  fVar1 = *(float *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x70) = 1;
  *(float *)(param_1 + 0xa4) = *(float *)(iVar6 + 0x50);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(iVar6 + 0x54);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(iVar6 + 0x58);
  fVar2 = *(float *)(iVar6 + 0x48);
  fVar3 = *(float *)(iVar6 + 0x4c);
  fVar4 = *(float *)(iVar6 + 0x54);
  fVar5 = *(float *)(iVar6 + 0x58);
  *(float *)(param_1 + 0xb0) = fVar1 * *(float *)(iVar6 + 0x44) + *(float *)(iVar6 + 0x50);
  *(float *)(param_1 + 0xb4) = fVar1 * fVar2 + fVar4;
  *(float *)(param_1 + 0xb8) = fVar1 * fVar3 + fVar5;
  *(uint *)(param_1 + 0xf0) = (uint)(*(int *)(param_1 + 0x7c) == -0x40800000);
  *(undefined4 *)(param_1 + 0xf4) = 1;
  if ((*(uint *)(iVar6 + 0x1a0) & 0x100) == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(code **)(param_1 + 0x18) = CBaseButton::ButtonUse;
    return;
  }
  *(code **)(param_1 + 0x14) = CBaseButton::ButtonTouch;
  return;
}

