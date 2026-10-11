/* mp.dll - CTSTimer (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1004ad50  CTSTimer::KeyValue  (110 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CTSTimer::KeyValue(CTSTimer *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  CTSTimer *this_00;
  char *pcVar6;
  bool bVar7;
  undefined3 uVar5;
  
  pcVar6 = s_duration_1009e00c;
  pbVar2 = *(byte **)(param_1 + 4);
  this_00 = this;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CTSTimer *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1004ad8a:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_1004ad8f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this_00 = (CTSTimer *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1004ad8a;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1004ad8f:
  if (iVar3 == 0) {
    uVar4 = atoi(this_00,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x54 = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 1004adc0  CTSTimer::Spawn  (95 bytes)
 * undefined Spawn()
 */
void __fastcall CTSTimer::Spawn(int param_1)

{
  **(int **)(param_1 + 4) = (int)s_ts_timer_100a367c - (int)gpGlobals->pStringBase;
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x80;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 5;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  }
  ToggleTimer(param_1);
  return;
}

/* 1004ae20  CTSTimer::ToggleTimer  (69 bytes)
 * undefined ToggleTimer(int param_1)
 * called by: CTSTimer::Spawn, CTSTimer::Use
 */
void __fastcall CTSTimer::ToggleTimer(int param_1)

{
  bool bVar1;
  
  if (*(int *)(param_1 + 0x54) < 1) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0x58) = 0;
    return;
  }
  bVar1 = *(char *)(param_1 + 0x58) == '\0';
  *(bool *)(param_1 + 0x58) = bVar1;
  if (bVar1) {
    *(code **)(param_1 + 0x10) = WaitThink;
    *(float *)(*(int *)(param_1 + 4) + 0x104) = (float)*(int *)(param_1 + 0x54) + gpGlobals->time;
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

/* 1004ae70  CTSTimer::WaitThink  (132 bytes)
 * void WaitThink(void)
 */
/* public: void __thiscall CTSTimer::WaitThink(void) */

void __thiscall CTSTimer::WaitThink(CTSTimer *this)

{
  int iVar1;
  
                    /* 0x4ae70  146  ?WaitThink@CTSTimer@@QAEXXZ */
  iVar1 = this->pev->target;
  if (iVar1 != 0) {
    FireTargets((int)(gpGlobals->pStringBase + iVar1),this,this,3,0);
  }
  iVar1 = this->pev->message;
  if (iVar1 != 0) {
    TSHudMessageAll(0,0xff,0,1,0x1e,gpGlobals->pStringBase + iVar1);
  }
  if ((this->pev->spawnflags & 1) != 0) {
    *(undefined4 *)&this->field_0x10 = 0;
  }
  this->pev->nextthink = (float)*(int *)&this->field_0x54 + gpGlobals->time;
  return;
}

/* 1004af00  CTSTimer::Use  (8 bytes)
 * undefined Use()
 */
void __fastcall CTSTimer::Use(int param_1)

{
  ToggleTimer(param_1);
  return;
}

