/* mp.dll - CTargetCDAudio (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10041190  CTargetCDAudio::KeyValue  (116 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CTargetCDAudio::KeyValue(CTargetCDAudio *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  CTargetCDAudio *pCVar4;
  char *pcVar6;
  bool bVar7;
  float10 fVar8;
  undefined3 uVar5;
  
  pcVar6 = s_radius_1009e004;
  pbVar2 = *(byte **)(param_1 + 4);
  pCVar4 = this;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)pCVar4 >> 8);
    pCVar4 = (CTargetCDAudio *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_100411ca:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_100411cf;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    pCVar4 = (CTargetCDAudio *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_100411ca;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100411cf:
  if (iVar3 == 0) {
    fVar8 = atof((undefined *)pCVar4,*(byte_conflict **)(param_1 + 8));
    this->pev->scale = (float)fVar8;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 10041210  CTargetCDAudio::Spawn  (62 bytes)
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

/* 10041250  CTargetCDAudio::Use  (8 bytes)
 * undefined Use()
 */
void __fastcall CTargetCDAudio::Use(int *param_1)

{
  FUN_100412e0(param_1);
  return;
}

/* 10041260  CTargetCDAudio::Think  (117 bytes)
 * undefined Think(int * param_1)
 */
void __fastcall CTargetCDAudio::Think(int *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  edict_t *peVar5;
  
  peVar5 = (*g_engfuncs.pfnPEntityOfEntIndex)(1);
  if (peVar5 != (edict_t *)0x0) {
    *(float *)(param_1[1] + 0x104) = gpGlobals->time + 0.5;
    iVar1 = param_1[1];
    fVar2 = (peVar5->v).origin[0] - *(float *)(iVar1 + 8);
    fVar3 = (peVar5->v).origin[1] - *(float *)(iVar1 + 0xc);
    fVar4 = (peVar5->v).origin[2] - *(float *)(iVar1 + 0x10);
    if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4) <= *(float *)(iVar1 + 0x144)) {
      FUN_100412e0(param_1);
    }
  }
  return;
}

