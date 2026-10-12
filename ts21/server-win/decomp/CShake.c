/* mp.dll - CShake (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100197f0  CShake::Spawn  (57 bytes)
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

/* 10019830  CShake::KeyValue  (239 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CShake::KeyValue(CShake *this,int param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  float10 fVar6;
  
  pcVar3 = *(char **)(param_1 + 4);
  puVar1 = &DAT_0000000a;
  bVar5 = true;
  pcVar2 = pcVar3;
  pcVar4 = s_amplitude_10092f20;
  do {
    if (puVar1 == (undefined1 *)0x0) break;
    puVar1 = puVar1 + -1;
    bVar5 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    fVar6 = FUN_1006e0fb(puVar1,*(byte_conflict **)(param_1 + 8));
    this->pev->scale = (float)fVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar1 = &DAT_0000000a;
  bVar5 = true;
  pcVar2 = pcVar3;
  pcVar4 = s_frequency_10092d34;
  do {
    if (puVar1 == (undefined1 *)0x0) break;
    puVar1 = puVar1 + -1;
    bVar5 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    fVar6 = FUN_1006e0fb(puVar1,*(byte_conflict **)(param_1 + 8));
    this->pev->dmg_save = (float)fVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar1 = &DAT_00000009;
  bVar5 = true;
  pcVar2 = pcVar3;
  pcVar4 = s_duration_10092f14;
  do {
    if (puVar1 == (undefined1 *)0x0) break;
    puVar1 = puVar1 + -1;
    bVar5 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    fVar6 = FUN_1006e0fb(puVar1,*(byte_conflict **)(param_1 + 8));
    this->pev->dmg_take = (float)fVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar1 = &DAT_00000007;
  bVar5 = true;
  pcVar2 = s_radius_10092f0c;
  do {
    if (puVar1 == (undefined1 *)0x0) break;
    puVar1 = puVar1 + -1;
    bVar5 = *pcVar3 == *pcVar2;
    pcVar3 = pcVar3 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar5);
  if (bVar5) {
    fVar6 = FUN_1006e0fb(puVar1,*(byte_conflict **)(param_1 + 8));
    this->pev->dmg = (float)fVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 10019920  CShake::Use  (60 bytes)
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

