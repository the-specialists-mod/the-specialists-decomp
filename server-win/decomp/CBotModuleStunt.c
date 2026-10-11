/* mp.dll - CBotModuleStunt (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1006e130  CBotModuleStunt::Think  (333 bytes)
 * undefined Think()
 */
/* bit 8 (vtable 0x10094c18): dive (IN_ALT1) 75% or double-jump flip 25%, get up from prone, then
   clear bit 8 */

void __thiscall CBotModuleStunt::Think(int param_1,int *param_2,CBotBrain *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  if (*(float *)(param_1 + 4) <= gpGlobals->time) {
    fVar4 = (float10)(**(code **)(*param_2 + 8))();
    if ((float10)1.0 <= ((float10)0.5 / fVar4) / (float10)*(float *)(param_3 + 0x1a74)) {
      fVar4 = (float10)1.0;
    }
    else {
      fVar4 = (float10)(**(code **)(*param_2 + 8))();
      fVar4 = ((float10)0.5 / fVar4) / (float10)*(float *)(param_3 + 0x1a74);
    }
    *(float *)(param_1 + 4) = (float)((float10)gpGlobals->time + fVar4);
    if (*(char *)(param_1 + 8) == '\0') {
      iVar3 = (*g_engfuncs.pfnRandomLong)(0,100);
      *(undefined1 *)(param_1 + 9) = 0;
      *(char *)(param_1 + 8) = (iVar3 < 0x1a) + '\x01';
    }
    uVar2 = *(uint *)(param_2[1] + 0x250);
    if ((uVar2 & 0xc30) == 0) {
      cVar1 = *(char *)(param_1 + 8);
      if (cVar1 == '\x01') {
        CBotBrain::PressButtons(param_3,0x4000,0.1);
        return;
      }
      if (cVar1 == '\x02') {
        if (((*(uint *)(param_2[1] + 0x1a4) & 0x200) == 0) && (*(char *)(param_1 + 9) != '\0')) {
          CBotBrain::PressButtons(param_3,2,0.1);
          return;
        }
        CBotBrain::PressButtons(param_3,2,0.1);
        *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
        *(float *)(param_1 + 4) = gpGlobals->time + 0.2;
        return;
      }
      if (cVar1 == '\x04') {
        *(undefined1 *)(param_1 + 8) = 0;
        CBotBrain::DisableModules(param_3,8);
        return;
      }
    }
    else if (((uVar2 & 0x10) == 0) && ((uVar2 & 0x20) != 0)) {
      CBotBrain::PressButtons(param_3,2,0.1);
      *(undefined1 *)(param_1 + 8) = 4;
    }
  }
  return;
}

