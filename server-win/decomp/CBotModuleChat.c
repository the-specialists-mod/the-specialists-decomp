/* mp.dll - CBotModuleChat (1 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1006e330  CBotModuleChat::Think  (381 bytes)
 * undefined Think()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* module bit 0x400: bottalk, emits queued/freetime line, re-arms 60..180*clamp(skill,.5,1) s */

void __thiscall CBotModuleChat::Think(int param_1,undefined4 param_2,CBotBrain *param_3)

{
  float fVar1;
  byte bVar2;
  byte_conflict *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  float10 fVar8;
  byte abStack_80 [128];
  
  if ((_DAT_1009ee04 != 0.0) &&
     ((*(float *)(param_1 + 4) <= gpGlobals->time || (param_3[0x1984] != (CBotBrain)0x0)))) {
    if ((*(float *)(param_3 + 0x1a74) <= 0.5) || (*(float *)(param_3 + 0x1a74) < 1.0)) {
      if (*(float *)(param_3 + 0x1a74) <= 0.5) {
        fVar1 = 0.5;
      }
      else {
        fVar1 = *(float *)(param_3 + 0x1a74);
      }
    }
    else {
      fVar1 = 1.0;
    }
    fVar8 = (float10)(*g_engfuncs.pfnRandomFloat)(60.0,180.0);
    *(float *)(param_1 + 4) = (float)(fVar8 * (float10)fVar1 + (float10)gpGlobals->time);
    pbVar3 = (byte_conflict *)BotSayLine(*(undefined4 *)(param_3 + 0x1980),param_3 + 0x193d);
    sprintf(abStack_80,pbVar3);
    pbVar6 = &DAT_100a9398;
    pbVar4 = abStack_80;
    do {
      bVar2 = *pbVar4;
      bVar7 = bVar2 < *pbVar6;
      if (bVar2 != *pbVar6) {
LAB_1006e457:
        iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_1006e45c;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      bVar7 = bVar2 < pbVar6[1];
      if (bVar2 != pbVar6[1]) goto LAB_1006e457;
      pbVar4 = pbVar4 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar2 != 0);
    iVar5 = 0;
LAB_1006e45c:
    if (iVar5 != 0) {
      BotSay(param_2,abStack_80);
    }
    CBotBrain::DisableModules(param_3,0x400);
    if (*(int *)(param_3 + 0x1980) != 1) {
      *(undefined4 *)(param_3 + 0x1980) = 1;
    }
    param_3[0x193d] = (CBotBrain)0x0;
    param_3[0x1984] = (CBotBrain)0x0;
  }
  return;
}

