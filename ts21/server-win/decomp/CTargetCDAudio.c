/* mp.dll - CTargetCDAudio (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1003a610  CTargetCDAudio::KeyValue  (78 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CTargetCDAudio::KeyValue(CTargetCDAudio *this,int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  float10 fVar5;
  
  iVar1 = 7;
  bVar4 = true;
  pcVar2 = *(char **)(param_1 + 4);
  pcVar3 = s_radius_10092f0c;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    fVar5 = FUN_1006e0fb(*(undefined1 **)(param_1 + 8),*(undefined1 **)(param_1 + 8));
    this->pev->scale = (float)fVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 1003a660  CTargetCDAudio::Spawn  (64 bytes)
 * undefined Spawn()
 */
void __fastcall CTargetCDAudio::Spawn(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  if (0.0 < *(float *)(*(int *)(param_1 + 4) + 0x144)) {
    *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 1.0;
  }
  return;
}

/* 1003a6a0  CTargetCDAudio::Use  (8 bytes)
 * undefined Use()
 */
void __fastcall CTargetCDAudio::Use(int param_1)

{
  FUN_1003a730(param_1);
  return;
}

/* 1003a6b0  CTargetCDAudio::Think  (118 bytes)
 * undefined Think()
 */
void __fastcall CTargetCDAudio::Think(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  edict_t *peVar5;
  
  peVar5 = (*g_engfuncs.pfnPEntityOfEntIndex)(1);
  if (peVar5 != (edict_t *)0x0) {
    *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.5;
    iVar1 = *(int *)(param_1 + 4);
    fVar2 = (peVar5->v).origin[0] - *(float *)(iVar1 + 8);
    fVar3 = (peVar5->v).origin[1] - *(float *)(iVar1 + 0xc);
    fVar4 = (peVar5->v).origin[2] - *(float *)(iVar1 + 0x10);
    fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4);
    if (fVar2 < *(float *)(iVar1 + 0x144) != (fVar2 == *(float *)(iVar1 + 0x144))) {
      FUN_1003a730(param_1);
      return;
    }
  }
  return;
}

