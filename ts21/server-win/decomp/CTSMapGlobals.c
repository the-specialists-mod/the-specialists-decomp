/* mp.dll - CTSMapGlobals (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10042030  CTSMapGlobals::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CTSMapGlobals::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CTSMapGlobals_100981ec,(int)param_1,0x10098060,2);
  return;
}

/* 10042060  CTSMapGlobals::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CTSMapGlobals::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CTSMapGlobals_100981ec,(int)param_1,0x10098060,2);
  return;
}

/* 10042090  CTSMapGlobals::KeyValue  (121 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CTSMapGlobals::KeyValue(CTSMapGlobals *this,int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  pvVar2 = (void *)0xe;
  bVar5 = true;
  pcVar3 = *(char **)(param_1 + 4);
  pcVar4 = s_playerrespawn_1009820c;
  do {
    if (pvVar2 == (void *)0x0) break;
    pvVar2 = (void *)((int)pvVar2 + -1);
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    uVar1 = FUN_1006e1dd(pvVar2,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x54 = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pvVar2 = (void *)0xe;
  bVar5 = true;
  pcVar3 = *(char **)(param_1 + 4);
  pcVar4 = s_playeratatime_100981fc;
  do {
    if (pvVar2 == (void *)0x0) break;
    pvVar2 = (void *)((int)pvVar2 + -1);
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    uVar1 = FUN_1006e1dd(pvVar2,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x58 = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 10042110  CTSMapGlobals::Spawn  (126 bytes)
 * undefined Spawn()
 */
void __fastcall CTSMapGlobals::Spawn(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  FUN_100679a0();
  FUN_10067970();
  param_1[5] = 0;
  param_1[4] = 0;
  *(float *)(param_1[1] + 0x104) = gpGlobals->time + 10.0;
  return;
}

/* 100421b0  CTSMapGlobals::Precache  (1 bytes)
 * undefined Precache()
 */
void CTSMapGlobals::Precache(void)

{
  return;
}

/* 100421c0  CTSMapGlobals::WaitThink  (23 bytes)
 * void WaitThink(void)
 */
/* public: void __thiscall CTSMapGlobals::WaitThink(void) */

void __thiscall CTSMapGlobals::WaitThink(CTSMapGlobals *this)

{
                    /* 0x421c0  130  ?WaitThink@CTSMapGlobals@@QAEXXZ */
  this->pev->nextthink = gpGlobals->time + 10.0;
  return;
}

