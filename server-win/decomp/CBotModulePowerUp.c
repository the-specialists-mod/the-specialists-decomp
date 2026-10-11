/* mp.dll - CBotModulePowerUp (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1006e280  CBotModulePowerUp::Think  (167 bytes)
 * undefined Think()
 */
/* bit 0x200 (vtable 0x10094c10): UsePowerUp when one is held and none active; clear bit when active
    */

void __thiscall CBotModulePowerUp::Think(int param_1,int *param_2,CBotBrain *param_3)

{
  float10 fVar1;
  
  if (*(float *)(param_1 + 4) <= gpGlobals->time) {
    fVar1 = (float10)(**(code **)(*param_2 + 8))();
    if ((float10)3.0 <= ((float10)0.5 / fVar1) / (float10)*(float *)(param_3 + 0x1a74)) {
      fVar1 = (float10)3.0;
    }
    else {
      fVar1 = (float10)(**(code **)(*param_2 + 8))();
      fVar1 = ((float10)0.5 / fVar1) / (float10)*(float *)(param_3 + 0x1a74);
    }
    *(float *)(param_1 + 4) = (float)((float10)gpGlobals->time + fVar1);
    if ((param_2[0x1c5] != 0) && (param_2[0x1c4] == 0)) {
      CBasePlayer::UsePowerUp(param_2);
    }
    if (param_2[0x1c4] != 0) {
      CBotBrain::DisableModules(param_3,0x200);
      *(undefined1 *)(param_1 + 8) = 0;
    }
  }
  return;
}

