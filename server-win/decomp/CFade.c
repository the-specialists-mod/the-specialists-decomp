/* mp.dll - CFade (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1001ccf0  CFade::Spawn  (128 bytes)
 * undefined Spawn()
 */
void __fastcall CFade::Spawn(int param_1)

{
  int iVar1;
  
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  iVar1 = *(int *)(param_1 + 4);
  UTIL_SetSize(iVar1,iVar1 + 0xdc,iVar1 + 0xe8);
  UTIL_SetOrigin(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + 8);
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x80;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 5;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

/* 1001cd70  CFade::KeyValue  (201 bytes)
 * undefined KeyValue()
 */
void __thiscall CFade::KeyValue(undefined *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  undefined *puVar5;
  char *pcVar7;
  bool bVar8;
  float10 fVar9;
  undefined3 uVar6;
  
  pbVar4 = *(byte **)(param_2 + 4);
  pcVar7 = s_duration_1009e00c;
  pbVar2 = pbVar4;
  puVar5 = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)puVar5 >> 8);
    puVar5 = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1001cda8:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1001cdad;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    puVar5 = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1001cda8;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001cdad:
  if (iVar3 == 0) {
    fVar9 = atof(puVar5,*(byte_conflict **)(param_2 + 8));
    *(float *)(*(int *)(param_1 + 4) + 0x1d8) = (float)fVar9;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_holdtime_1009e024;
  do {
    bVar1 = *pbVar4;
    uVar6 = (undefined3)((uint)puVar5 >> 8);
    puVar5 = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1001cdff:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1001ce04;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    puVar5 = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1001cdff;
    pbVar4 = pbVar4 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001ce04:
  if (iVar3 == 0) {
    fVar9 = atof(puVar5,*(byte_conflict **)(param_2 + 8));
    *(float *)(*(int *)(param_1 + 4) + 0x1dc) = (float)fVar9;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

/* 1001ce40  CFade::Use  (312 bytes)
 * undefined Use()
 */
void __thiscall CFade::Use(CBaseEntity *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iStack_84;
  int aiStack_80 [32];
  
  iVar1 = *(int *)(param_1 + 4);
  if ((*(uint *)(iVar1 + 0x1a0) & 8) == 0) {
    if ((*(uint *)(iVar1 + 0x1a0) & 4) == 0) {
      __ftol();
      UTIL_ScreenFadeAll();
    }
    else {
      iVar1 = (**(code **)(*param_2 + 0xc4))();
      if (iVar1 != 0) {
        __ftol();
        UTIL_ScreenFade(param_2);
      }
    }
  }
  else {
    iStack_84 = UTIL_EntitiesInBox(aiStack_80,0x20,(float *)(iVar1 + 0xc4),(float *)(iVar1 + 0xd0),8
                                  );
    if (0 < iStack_84) {
      piVar2 = aiStack_80;
      do {
        __ftol();
        UTIL_ScreenFade((int *)*piVar2);
        piVar2 = piVar2 + 1;
        iStack_84 = iStack_84 + -1;
      } while (iStack_84 != 0);
    }
  }
  CBaseEntity::SUB_UseTargets(param_1,param_1,3,0);
  return;
}

