/* mp.dll - CTSWinGiver (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10050b50  CTSWinGiver::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CTSWinGiver::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CTSWinGiver_10099044,(int)param_1,0x10098d50,4);
  return;
}

/* 10050b80  CTSWinGiver::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CTSWinGiver::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CTSWinGiver_10099044,(int)param_1,0x10098d50,4);
  return;
}

/* 10050bb0  CTSWinGiver::KeyValue  (215 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CTSWinGiver::KeyValue(CTSWinGiver *this,int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  pcVar4 = *(char **)(param_1 + 4);
  pvVar2 = (void *)0xc;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_victorycash_10099068;
  do {
    if (pvVar2 == (void *)0x0) break;
    pvVar2 = (void *)((int)pvVar2 + -1);
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    uVar1 = FUN_1006e1dd(pvVar2,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x5c = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pvVar2 = (void *)0xb;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_defeatcash_1009905c;
  do {
    if (pvVar2 == (void *)0x0) break;
    pvVar2 = (void *)((int)pvVar2 + -1);
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    uVar1 = FUN_1006e1dd(pvVar2,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x60 = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pvVar2 = (void *)0xb;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_winnerteam_10098e34;
  do {
    if (pvVar2 == (void *)0x0) break;
    pvVar2 = (void *)((int)pvVar2 + -1);
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    uVar1 = FUN_1006e1dd(pvVar2,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x64 = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pvVar2 = (void *)0xc;
  bVar6 = true;
  pcVar3 = s_callsnumber_10099050;
  do {
    if (pvVar2 == (void *)0x0) break;
    pvVar2 = (void *)((int)pvVar2 + -1);
    bVar6 = *pcVar4 == *pcVar3;
    pcVar4 = pcVar4 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar6);
  if (bVar6) {
    uVar1 = FUN_1006e1dd(pvVar2,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x68 = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 10050ca0  CTSWinGiver::Spawn  (101 bytes)
 * undefined Spawn()
 */
void __fastcall CTSWinGiver::Spawn(int param_1)

{
  **(int **)(param_1 + 4) = (int)s_ts_wingiver_100982c8 - (int)gpGlobals->pStringBase;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x118) = 0x80;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x1a4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 10.0;
  FUN_10050c90(param_1);
  return;
}

/* 10050d10  CTSWinGiver::Use  (331 bytes)
 * undefined Use(int param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall CTSWinGiver::Use(int param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x58) == '\0') &&
     (iVar1 = *(int *)(param_1 + 0x54) + 1, *(int *)(param_1 + 0x54) = iVar1,
     *(int *)(param_1 + 0x68) <= iVar1)) {
    if (*(int *)(param_1 + 100) == 0) {
      __ftol();
      __ftol();
      iVar1 = 0;
    }
    else if (*(int *)(param_1 + 100) == 1) {
      __ftol();
      __ftol();
      iVar1 = 1;
    }
    else {
      __ftol();
      __ftol();
      iVar1 = 2;
    }
    CTSGameRules::TeamWin((CTSGameRules *)&DAT_100ac8c0,iVar1);
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x1d4);
    if (iVar1 != 0) {
      TSHudMessageAll(0,0xff,0,1,0x1e,gpGlobals->pStringBase + iVar1);
    }
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  return;
}

