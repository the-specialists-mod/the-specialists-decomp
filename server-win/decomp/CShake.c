/* mp.dll - CShake (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1001cae0  CShake::Spawn  (57 bytes)
 * undefined Spawn()
 */
void __fastcall CShake::Spawn(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x118) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x130) = 0;
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 1) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x1e0) = 0;
  }
  return;
}

/* 1001cb20  CShake::KeyValue  (375 bytes)
 * undefined KeyValue()
 */
void __thiscall CShake::KeyValue(undefined *param_1,int param_2)

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
  pcVar7 = s_amplitude_1009e018;
  pbVar2 = pbVar4;
  puVar5 = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)puVar5 >> 8);
    puVar5 = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1001cb58:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1001cb5d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    puVar5 = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1001cb58;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001cb5d:
  if (iVar3 == 0) {
    fVar9 = atof(puVar5,*(byte_conflict **)(param_2 + 8));
    *(float *)(*(int *)(param_1 + 4) + 0x144) = (float)fVar9;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_frequency_1009de2c;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)puVar5 >> 8);
    puVar5 = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1001cbaf:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1001cbb4;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    puVar5 = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1001cbaf;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001cbb4:
  if (iVar3 == 0) {
    fVar9 = atof(puVar5,*(byte_conflict **)(param_2 + 8));
    *(float *)(*(int *)(param_1 + 4) + 0x1dc) = (float)fVar9;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_duration_1009e00c;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)puVar5 >> 8);
    puVar5 = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1001cc06:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1001cc0b;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    puVar5 = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1001cc06;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001cc0b:
  if (iVar3 == 0) {
    fVar9 = atof(puVar5,*(byte_conflict **)(param_2 + 8));
    *(float *)(*(int *)(param_1 + 4) + 0x1d8) = (float)fVar9;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_radius_1009e004;
  do {
    bVar1 = *pbVar4;
    uVar6 = (undefined3)((uint)puVar5 >> 8);
    puVar5 = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1001cc5d:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1001cc62;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    puVar5 = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1001cc5d;
    pbVar4 = pbVar4 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001cc62:
  if (iVar3 == 0) {
    fVar9 = atof(puVar5,*(byte_conflict **)(param_2 + 8));
    *(float *)(*(int *)(param_1 + 4) + 0x1e0) = (float)fVar9;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

/* 1001cca0  CShake::Use  (58 bytes)
 * undefined Use()
 */
void __fastcall CShake::Use(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  UTIL_ScreenShake((float *)(iVar1 + 8),*(float *)(iVar1 + 0x144),*(undefined4 *)(iVar1 + 0x1dc),
                   *(undefined4 *)(iVar1 + 0x1d8),*(float *)(iVar1 + 0x1e0));
  return;
}

