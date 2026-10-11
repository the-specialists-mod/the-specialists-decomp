/* mp.dll - CBotStateObjective (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1006f0c0  CBotStateObjective::Think  (503 bytes)
 * undefined Think()
 */
/* mode 3+ strategy: no roam goals */

void __thiscall CBotStateObjective::Think(int param_1,int *param_2,CBotBrain *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  float10 fVar4;
  undefined4 uVar5;
  
  if (*(float *)(param_1 + 4) <= gpGlobals->time) {
    fVar4 = (float10)(**(code **)(*param_2 + 8))();
    if ((float10)1.0 <= (float10)0.1 / fVar4) {
      fVar4 = (float10)1.0;
    }
    else {
      fVar4 = (float10)(**(code **)(*param_2 + 8))();
      fVar4 = (float10)0.1 / fVar4;
    }
    *(float *)(param_1 + 4) = (float)((float10)gpGlobals->time + fVar4);
    iVar3 = (**(code **)(*param_2 + 0xac))();
    if ((iVar3 != 0) && (*(int *)(param_2[1] + 0x244) == 0)) {
      CBotBrain::EnableModules(param_3,0x40);
      CBotBrain::EnableModules(param_3,0x400);
      cVar1 = CBotBrain::NumVisibleEnemies((int)param_3);
      if (cVar1 != '\0') {
        CBotBrain::EnableModules(param_3,4);
        CBotBrain::DisableModules(param_3,0x80);
        return;
      }
      if (((*(float *)(param_3 + 0x1a0c) == DAT_100ae498) &&
          (*(float *)(param_3 + 0x1a10) == DAT_100ae49c)) &&
         (*(float *)(param_3 + 0x1a14) == DAT_100ae4a0)) {
        if (((*(float *)(param_3 + 0x1928) == DAT_100ae498) &&
            (*(float *)(param_3 + 0x192c) == DAT_100ae49c)) &&
           ((*(float *)(param_3 + 0x1930) == DAT_100ae4a0 &&
            (*(float *)(param_1 + 8) < gpGlobals->time)))) {
          *(float *)(param_1 + 8) = gpGlobals->time + 3.0;
          param_3[0x193c] = (CBotBrain)0x0;
          CBotBrain::EnableModules(param_3,0x80);
          return;
        }
        param_3[0x193c] = (CBotBrain)0x1;
        CBotBrain::EnableModules(param_3,0x80);
        return;
      }
      *(float *)(param_3 + 0x1928) = *(float *)(param_3 + 0x1a0c);
      *(undefined4 *)(param_3 + 0x192c) = *(undefined4 *)(param_3 + 0x1a10);
      *(undefined4 *)(param_3 + 0x1930) = *(undefined4 *)(param_3 + 0x1a14);
      *(float *)(param_3 + 0x1a0c) = DAT_100ae498;
      *(float *)(param_3 + 0x1a10) = DAT_100ae49c;
      *(float *)(param_3 + 0x1a14) = DAT_100ae4a0;
      CBotBrain::EnableModules(param_3,1);
      CBotBrain::EnableModules(param_3,0x80);
      return;
    }
    bVar2 = BotArmamentEmpty((int)param_2);
    if (CONCAT31(extraout_var,bVar2) == 0) {
      uVar5 = 0x100;
    }
    else {
      uVar5 = 0x10;
    }
    CBotBrain::SetModules(param_3,uVar5);
    CBotBrain::EnableModules(param_3,0x400);
  }
  return;
}

