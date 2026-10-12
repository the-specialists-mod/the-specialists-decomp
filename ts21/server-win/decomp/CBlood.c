/* mp.dll - CBlood (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10019450  CBlood::Spawn  (49 bytes)
 * undefined Spawn()
 */
void __fastcall CBlood::Spawn(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x118) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x130) = 0;
  SetMovedir(*(int *)(param_1 + 4));
  return;
}

/* 10019490  CBlood::KeyValue  (167 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CBlood::KeyValue(CBlood *this,int param_1)

{
  int iVar1;
  void *this_00;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  float10 fVar5;
  
  this_00 = (void *)0x6;
  bVar4 = true;
  pcVar2 = *(char **)(param_1 + 4);
  pcVar3 = s_color_10092f04;
  do {
    if (this_00 == (void *)0x0) break;
    this_00 = (void *)((int)this_00 + -1);
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    iVar1 = FUN_1006e1dd(this_00,*(byte_conflict **)(param_1 + 8));
    if (iVar1 != 1) {
      this->pev->impulse = 0xf7;
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    this->pev->impulse = 0xc3;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  iVar1 = 7;
  bVar4 = true;
  pcVar2 = *(char **)(param_1 + 4);
  pcVar3 = s_amount_10092efc;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    fVar5 = FUN_1006e0fb(*(undefined1 **)(param_1 + 8),*(undefined1 **)(param_1 + 8));
    this->pev->dmg = (float)fVar5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 10019680  CBlood::Use  (348 bytes)
 * undefined Use()
 */
void __thiscall CBlood::Use(void *param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float afStack_44 [2];
  float fStack_3c;
  undefined1 auStack_38 [16];
  float fStack_28;
  
  iVar5 = *(int *)(*(int *)((int)param_1 + 4) + 0x184);
  if ((*(byte *)(*(int *)((int)param_1 + 4) + 0x1a0) & 2) == 0) {
    lVar6 = __ftol();
    iVar2 = (int)lVar6;
    pfVar3 = FUN_10019540(param_1,afStack_44);
    puVar4 = (undefined4 *)FUN_10019580(param_1,&fStack_50,param_2);
    FUN_10067d50(puVar4,pfVar3,iVar5,iVar2);
  }
  else {
    if (iVar5 == 0xf7) {
      iVar5 = 0x46;
    }
    lVar6 = __ftol();
    iVar2 = (int)lVar6;
    pfVar3 = FUN_10019540(param_1,afStack_44);
    puVar4 = (undefined4 *)FUN_10019580(param_1,&fStack_50,param_2);
    FUN_10067ca0(puVar4,pfVar3,iVar5,iVar2);
  }
  if ((*(byte *)(*(int *)((int)param_1 + 4) + 0x1a0) & 8) != 0) {
    FUN_10019540(param_1,&fStack_5c);
    FUN_10019580(param_1,&fStack_68,param_2);
    fVar1 = *(float *)(*(int *)((int)param_1 + 4) + 0x1e0);
    fStack_3c = fStack_54 * fVar1 + fStack_54 * fVar1;
    fStack_50 = fStack_5c * fVar1 + fStack_5c * fVar1 + fStack_68;
    fStack_4c = fStack_64 + fStack_58 * fVar1 + fStack_58 * fVar1;
    fStack_48 = fStack_60 + fStack_3c;
    FUN_10067850();
    if (fStack_28 != 1.0) {
      FUN_10067ea0((int)auStack_38,*(int *)(*(int *)((int)param_1 + 4) + 0x184));
    }
  }
  return;
}

