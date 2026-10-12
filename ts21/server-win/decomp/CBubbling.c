/* mp.dll - CBubbling (8 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10015e40  CBubbling::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CBubbling::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CBubbling_10092d0c,(int)param_1,0x100929b8,3);
  return;
}

/* 10015e70  CBubbling::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CBubbling::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CBubbling_10092d0c,(int)param_1,0x100929b8,3);
  return;
}

/* 10015ea0  CBubbling::Spawn  (261 bytes)
 * undefined Spawn()
 */
void __fastcall CBubbling::Spawn(int *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uStack_4;
  
  (**(code **)(*param_1 + 0x10))();
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(param_1[1] + 0x208),gpGlobals->pStringBase + *(int *)(param_1[1] + 0xb8))
  ;
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x14c) = 0;
  *(undefined4 *)(param_1[1] + 0x148) = 2;
  iVar1 = param_1[1];
  lVar2 = __ftol();
  *(float *)(iVar1 + 0x150) = (float)((int)(uint)lVar2 >> 8);
  *(float *)(param_1[1] + 0x154) = (float)((uint)lVar2 & 0xff);
  uStack_4 = (uint)(*(float *)(param_1[1] + 0x1f8) < 0.0);
  *(float *)(param_1[1] + 0x158) = (float)uStack_4;
  if ((*(byte *)(param_1[1] + 0x1a0) & 1) == 0) {
    param_1[4] = (int)FizzThink;
    *(float *)(param_1[1] + 0x104) = gpGlobals->time + 2.0;
    param_1[0x18] = 1;
    return;
  }
  param_1[0x18] = 0;
  return;
}

/* 10015fb0  CBubbling::Precache  (22 bytes)
 * undefined Precache()
 */
void __fastcall CBubbling::Precache(int param_1)

{
  int iVar1;
  
  iVar1 = (*g_engfuncs.pfnPrecacheModel)(s_sprites_bubble_spr_10092d18);
  *(int *)(param_1 + 0x5c) = iVar1;
  return;
}

/* 10015fd0  CBubbling::Use  (92 bytes)
 * undefined Use(undefined4 param_1, undefined4 param_2, int param_3)
 */
void __thiscall CBubbling::Use(CBubbling *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = CBaseEntity::ShouldToggle(param_3,*(int *)&this->field_0x60);
  if (iVar1 != 0) {
    *(uint *)&this->field_0x60 = (uint)(*(int *)&this->field_0x60 == 0);
  }
  if (*(int *)&this->field_0x60 != 0) {
    *(code **)&this->field_0x10 = FizzThink;
    this->pev->nextthink = gpGlobals->time + 0.1;
    return;
  }
  *(undefined4 *)&this->field_0x10 = 0;
  this->pev->nextthink = 0.0;
  return;
}

/* 10016030  CBubbling::KeyValue  (182 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CBubbling::KeyValue(CBubbling *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  
  pcVar5 = *(char **)(param_1 + 4);
  puVar3 = &DAT_00000008;
  bVar7 = true;
  pcVar4 = pcVar5;
  pcVar6 = s_density_10092d40;
  do {
    if (puVar3 == (undefined1 *)0x0) break;
    puVar3 = puVar3 + -1;
    bVar7 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    uVar1 = FUN_1006e1dd(puVar3,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x54 = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar3 = &DAT_0000000a;
  bVar7 = true;
  pcVar4 = pcVar5;
  pcVar6 = s_frequency_10092d34;
  do {
    if (puVar3 == (undefined1 *)0x0) break;
    puVar3 = puVar3 + -1;
    bVar7 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    uVar1 = FUN_1006e1dd(puVar3,*(byte_conflict **)(param_1 + 8));
    *(undefined4 *)&this->field_0x58 = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar3 = &DAT_00000008;
  bVar7 = true;
  pcVar4 = s_current_10092d2c;
  do {
    if (puVar3 == (undefined1 *)0x0) break;
    puVar3 = puVar3 + -1;
    bVar7 = *pcVar5 == *pcVar4;
    pcVar5 = pcVar5 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar7);
  if (bVar7) {
    iVar2 = FUN_1006e1dd(puVar3,*(byte_conflict **)(param_1 + 8));
    this->pev->speed = (float)iVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 100160f0  CBubbling::FizzThink  (176 bytes)
 * void FizzThink(void)
 */
/* public: void __thiscall CBubbling::FizzThink(void) */

void __thiscall CBubbling::FizzThink(CBubbling *this)

{
  float *pOrigin;
  int iVar1;
  undefined4 uStack0000000c;
  float local_c [3];
  
                    /* 0x160f0  50  ?FizzThink@CBubbling@@QAEXXZ */
  pOrigin = (float *)VecBModelOrigin(local_c,(int)this->pev);
  (*g_engfuncs.pfnMessageBegin)(5,0x17,pOrigin,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(0x69);
  iVar1 = (*g_engfuncs.pfnIndexOfEdict)(this->pev->pContainingEntity);
  (*g_engfuncs.pfnWriteShort)((int)(short)iVar1);
  (*g_engfuncs.pfnWriteShort)((int)*(short *)&this->field_0x5c);
  (*g_engfuncs.pfnWriteByte)(*(int *)&this->field_0x54);
  uStack0000000c = 0x10016151;
  (*g_engfuncs.pfnMessageEnd)();
  if (0x13 < *(int *)&this->field_0x58) {
    this->pev->nextthink = gpGlobals->time + 0.5;
    return;
  }
  this->pev->nextthink = (gpGlobals->time + 2.5) - (float)*(int *)&this->field_0x58 * 0.1;
  return;
}

/* 1001a250  CBubbling::ObjectCaps  (3 bytes)
 * undefined ObjectCaps()
 */
undefined4 CBubbling::ObjectCaps(void)

{
  return 0;
}

