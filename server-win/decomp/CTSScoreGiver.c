/* mp.dll - CTSScoreGiver (3 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1005c1e0  CTSScoreGiver::KeyValue  (13 bytes)
 * undefined KeyValue()
 */
void __thiscall CTSScoreGiver::KeyValue(CTSWinGiver *param_1,int param_2)

{
  CTSWinGiver::KeyValue(param_1,param_2);
  return;
}

/* 1005c1f0  CTSScoreGiver::Spawn  (102 bytes)
 * undefined Spawn()
 */
void __fastcall CTSScoreGiver::Spawn(int *param_1)

{
  *(int *)param_1[1] = (int)s_ts_scoregiver_100a4fb0 - (int)gpGlobals->pStringBase;
  *(undefined4 *)(param_1[1] + 0x118) = 0x80;
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x1a4) = 0;
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(float *)(param_1[1] + 0x104) = gpGlobals->time + 10.0;
  (**(code **)(*param_1 + 0x34))();
  return;
}

/* 1005c260  CTSScoreGiver::Use  (118 bytes)
 * undefined Use(int param_1)
 */
void __fastcall CTSScoreGiver::Use(int param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  
  iVar2 = *(int *)(param_1 + 0x54) + 1;
  *(int *)(param_1 + 0x54) = iVar2;
  if (*(int *)(param_1 + 0x68) <= iVar2) {
    cVar4 = '\x01';
    uVar1 = CONCAT31((int3)((uint)*(int *)(param_1 + 0x68) >> 8),
                     *(undefined1 *)(*(int *)(param_1 + 4) + 0x1a0)) & 0xffffff01;
    lVar3 = __ftol();
    CTSGameRules::TeamWin
              ((CTSGameRules *)&TSGameRules,*(int *)(param_1 + 100),(int)lVar3,uVar1,cVar4);
    iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x1d4);
    if (iVar2 != 0) {
      TSHudMessageAll(0,0xff,0,8,0x1e,gpGlobals->pStringBase + iVar2);
    }
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}

