/* mp.dll - CBotModuleVision (2 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1006dbf0  CBotModuleVision::Think  (18 bytes)
 * undefined Think()
 */
/* module bit 0x40 wrapper */

void CBotModuleVision::Think(undefined4 param_1,undefined4 param_2)

{
  Scan(param_1,param_2);
  return;
}

/* 1006dc10  CBotModuleVision::Scan  (451 bytes)
 * undefined Scan()
 * called by: CBotModuleVision::Think
 */
/* visible alive players in FOV (0.5) -> enemies[16]/teammates[16] */

void __thiscall CBotModuleVision::Scan(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  float10 fVar8;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 auStack_c [12];
  
  iVar1 = param_3;
  if (*(float *)(param_1 + 4) <= gpGlobals->time) {
    fVar8 = (float10)(**(code **)(*param_2 + 8))();
    if ((float10)0.7 <= ((float10)0.1 / fVar8) / (float10)*(float *)(param_3 + 0x1a74)) {
      fVar8 = (float10)0.7;
    }
    else {
      fVar8 = (float10)(**(code **)(*param_2 + 8))();
      fVar8 = ((float10)0.1 / fVar8) / (float10)*(float *)(param_3 + 0x1a74);
    }
    piVar5 = (int *)(param_3 + 0x1988);
    *(float *)(param_1 + 4) = (float)((float10)gpGlobals->time + fVar8);
    piVar2 = piVar5;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar2 = 0;
      piVar2 = piVar2 + 1;
    }
    puVar7 = (undefined4 *)(param_3 + 0x19c8);
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined1 *)(param_3 + 0x1a08) = 0;
    param_3 = 1;
    if (0 < gpGlobals->maxClients) {
      do {
        piVar2 = (int *)UTIL_PlayerByIndex(param_3);
        if ((((piVar2 != (int *)0x0) && (iVar4 = (**(code **)(*piVar2 + 0xc0))(), iVar4 != 0)) &&
            (iVar4 = (**(code **)(*piVar2 + 0xac))(), iVar4 != 0)) &&
           ((piVar2 != param_2 && ((*(byte *)(piVar2[1] + 0x118) & 0x80) == 0)))) {
          iVar4 = (**(code **)(*piVar2 + 0xf4))(auStack_c);
          uStack_18 = *(undefined4 *)(iVar4 + 4);
          uStack_14 = *(undefined4 *)(iVar4 + 8);
          iVar4 = (**(code **)(*param_2 + 0x148))(&stack0xffffffe4);
          if ((iVar4 != 0) && (iVar4 = (**(code **)(*param_2 + 0x104))(&uStack_18), iVar4 != 0)) {
            iVar4 = 0;
            piVar6 = piVar5;
            do {
              iVar3 = (**(code **)(*g_pGameRules + 0xc4))(param_2,piVar2);
              if (iVar3 == 1) {
                if (piVar6[0x10] == 0) {
                  *(int **)(iVar1 + 0x19c8 + iVar4 * 4) = piVar2;
                  break;
                }
              }
              else if (*piVar6 == 0) {
                piVar5[iVar4] = (int)piVar2;
                *(char *)(iVar1 + 0x1a08) = *(char *)(iVar1 + 0x1a08) + '\x01';
                break;
              }
              iVar4 = iVar4 + 1;
              piVar6 = piVar6 + 1;
            } while (iVar4 < 0x10);
          }
        }
        param_3 = param_3 + 1;
      } while (param_3 <= gpGlobals->maxClients);
    }
  }
  return;
}

