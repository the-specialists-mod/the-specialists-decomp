/* mp.dll - CRevertSaved (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1002e9b0  CRevertSaved::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CRevertSaved::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CRevertSaved_10096014,(int)param_1,0x100958b0,2);
  return;
}

/* 1002e9e0  CRevertSaved::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CRevertSaved::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CRevertSaved_10096014,(int)param_1,0x100958b0,2);
  return;
}

/* 1002ea10  CRevertSaved::KeyValue  (227 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CRevertSaved::KeyValue(CRevertSaved *this,int param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  float10 fVar6;
  
  pcVar3 = *(char **)(param_1 + 4);
  puVar1 = &DAT_00000009;
  bVar5 = true;
  pcVar2 = pcVar3;
  pcVar4 = s_duration_10092f14;
  do {
    if (puVar1 == (undefined1 *)0x0) break;
    puVar1 = puVar1 + -1;
    bVar5 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    fVar6 = FUN_1006e0fb(puVar1,*(byte_conflict **)(param_1 + 8));
    this->pev->dmg_take = (float)fVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar1 = &DAT_00000009;
  bVar5 = true;
  pcVar2 = pcVar3;
  pcVar4 = s_holdtime_10092f2c;
  do {
    if (puVar1 == (undefined1 *)0x0) break;
    puVar1 = puVar1 + -1;
    bVar5 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    fVar6 = FUN_1006e0fb(puVar1,*(byte_conflict **)(param_1 + 8));
    this->pev->dmg_save = (float)fVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar1 = (undefined1 *)0xc;
  bVar5 = true;
  pcVar2 = pcVar3;
  pcVar4 = s_messagetime_10096030;
  do {
    if (puVar1 == (undefined1 *)0x0) break;
    puVar1 = puVar1 + -1;
    bVar5 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    fVar6 = FUN_1006e0fb(puVar1,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x54 = (float)fVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar1 = &DAT_00000009;
  bVar5 = true;
  pcVar2 = s_loadtime_10096024;
  do {
    if (puVar1 == (undefined1 *)0x0) break;
    puVar1 = puVar1 + -1;
    bVar5 = *pcVar3 == *pcVar2;
    pcVar3 = pcVar3 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar5);
  if (bVar5) {
    fVar6 = FUN_1006e0fb(puVar1,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x58 = (float)fVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 1002eb00  CRevertSaved::Use  (89 bytes)
 * undefined Use(int param_1)
 */
void __fastcall CRevertSaved::Use(int param_1)

{
  __ftol();
  UTIL_ScreenFadeAll();
  *(float *)(*(int *)(param_1 + 4) + 0x104) = *(float *)(param_1 + 0x54) + gpGlobals->time;
  *(code **)(param_1 + 0x10) = MessageThink;
  return;
}

/* 1002eb60  CRevertSaved::MessageThink  (89 bytes)
 * void MessageThink(void)
 */
/* public: void __thiscall CRevertSaved::MessageThink(void) */

void __thiscall CRevertSaved::MessageThink(CRevertSaved *this)

{
  float fVar1;
  
                    /* 0x2eb60  66  ?MessageThink@CRevertSaved@@QAEXXZ */
  UTIL_ShowMessageAll(gpGlobals->pStringBase + this->pev->message);
  fVar1 = *(float *)&this->field_0x58 - *(float *)&this->field_0x54;
  if (0.0 < fVar1) {
    this->pev->nextthink = fVar1 + gpGlobals->time;
    *(code **)&this->field_0x10 = LoadThink;
    return;
  }
  LoadThink(this);
  return;
}

/* 1002ebc0  CRevertSaved::LoadThink  (34 bytes)
 * void LoadThink(void)
 * called by: CRevertSaved::MessageThink
 */
/* public: void __thiscall CRevertSaved::LoadThink(void) */

void __thiscall CRevertSaved::LoadThink(CRevertSaved *this)

{
                    /* 0x2ebc0  60  ?LoadThink@CRevertSaved@@QAEXXZ */
  if (gpGlobals->deathmatch == 0.0) {
    (*g_engfuncs.pfnServerCommand)(s_reload_10091b20);
  }
  return;
}

