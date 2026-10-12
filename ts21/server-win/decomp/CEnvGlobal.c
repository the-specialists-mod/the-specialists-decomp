/* mp.dll - CEnvGlobal (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100091d0  CEnvGlobal::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CEnvGlobal::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CEnvGlobal_10091214,(int)param_1,0x10090fa0,3);
  return;
}

/* 10009200  CEnvGlobal::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CEnvGlobal::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CEnvGlobal_10091214,(int)param_1,0x10090fa0,3);
  return;
}

/* 10009240  CEnvGlobal::KeyValue  (155 bytes)
 * undefined KeyValue()
 */
void __thiscall CEnvGlobal::KeyValue(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *this;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  pcVar4 = *(char **)(param_2 + 4);
  iVar2 = 0xc;
  bVar6 = true;
  *(undefined4 *)(param_2 + 0xc) = 1;
  pcVar3 = pcVar4;
  pcVar5 = s_globalstate_1009123c;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    iVar2 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)(param_1 + 0x54) = iVar2;
    return;
  }
  iVar2 = 0xc;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_triggermode_10091230;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    uVar1 = FUN_1006e1dd(*(void **)(param_2 + 8),*(void **)(param_2 + 8));
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    return;
  }
  this = (void *)0xd;
  bVar6 = true;
  pcVar3 = s_initialstate_10091220;
  do {
    if (this == (void *)0x0) break;
    this = (void *)((int)this + -1);
    bVar6 = *pcVar4 == *pcVar3;
    pcVar4 = pcVar4 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar6);
  if (bVar6) {
    uVar1 = FUN_1006e1dd(this,*(byte_conflict **)(param_2 + 8));
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    return;
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

/* 100092e0  CEnvGlobal::Spawn  (88 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CEnvGlobal::Spawn(int param_1)

{
  byte_conflict *pbVar1;
  
  if (*(int *)(param_1 + 0x54) == 0) {
    (*g_engfuncs.pfnRemoveEntity)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
    return;
  }
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 1) != 0) {
    pbVar1 = FUN_1006c140(&DAT_102e00f4,*(int *)(param_1 + 0x54));
    if (pbVar1 == (byte_conflict *)0x0) {
      FUN_1006c200(&DAT_102e00f4,*(int *)(param_1 + 0x54),gpGlobals->mapname,
                   *(int *)(param_1 + 0x5c));
    }
  }
  return;
}

/* 10009340  CEnvGlobal::Use  (125 bytes)
 * undefined Use(int param_1)
 */
void __fastcall CEnvGlobal::Use(int param_1)

{
  int iVar1;
  int iVar2;
  byte_conflict *pbVar3;
  
  iVar2 = FUN_1006c2a0(&DAT_102e00f4,*(int *)(param_1 + 0x54));
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
LAB_1000937b:
    iVar2 = 0;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        iVar2 = 2;
        goto LAB_1000937d;
      }
      if (iVar2 == 1) goto LAB_1000937b;
      if (iVar2 != 0) goto LAB_1000937d;
    }
    iVar2 = 1;
  }
LAB_1000937d:
  pbVar3 = FUN_1006c140(&DAT_102e00f4,*(int *)(param_1 + 0x54));
  if (pbVar3 == (byte_conflict *)0x0) {
    FUN_1006c200(&DAT_102e00f4,*(int *)(param_1 + 0x54),gpGlobals->mapname,iVar2);
    return;
  }
  FUN_1006c270(&DAT_102e00f4,*(int *)(param_1 + 0x54),iVar2);
  return;
}

