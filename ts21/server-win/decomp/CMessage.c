/* mp.dll - CMessage (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10019b10  CMessage::Spawn  (131 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CMessage::Spawn(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  (**(code **)(*param_1 + 0x10))();
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  iVar2 = param_1[1];
  iVar3 = *(int *)(iVar2 + 0x184);
  if (iVar3 == 1) {
    *(undefined4 *)(iVar2 + 0x1f8) = 0x3fa00000;
  }
  else if (iVar3 == 2) {
    *(undefined4 *)(iVar2 + 0x1f8) = 0x3f4ccccd;
  }
  else if (iVar3 == 3) {
    *(undefined4 *)(iVar2 + 0x1f8) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x1f8) = 0x40000000;
  }
  *(undefined4 *)(param_1[1] + 0x184) = 0;
  fVar1 = *(float *)(param_1[1] + 0x144);
  if (fVar1 < 0.0 != (fVar1 == 0.0)) {
    *(undefined4 *)(param_1[1] + 0x144) = 0x3f800000;
  }
  return;
}

/* 10019ba0  CMessage::Precache  (36 bytes)
 * undefined Precache()
 */
void __fastcall CMessage::Precache(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x1e8);
  if (iVar1 != 0) {
    (*g_engfuncs.pfnPrecacheSound)(gpGlobals->pStringBase + iVar1);
  }
  return;
}

/* 10019bd0  CMessage::KeyValue  (193 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CMessage::KeyValue(CMessage *this,int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  void *this_00;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  float10 fVar7;
  
  pcVar4 = *(char **)(param_1 + 4);
  iVar1 = 0xd;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_messagesound_10092f5c;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    iVar1 = (*g_engfuncs.pfnAllocString)(*(char **)(param_1 + 8));
    this->pev->noise = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar2 = (undefined1 *)0xe;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = s_messagevolume_10092f4c;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    fVar7 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    this->pev->scale = (float)(fVar7 * (float10)0.1);
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  this_00 = (void *)0x13;
  bVar6 = true;
  pcVar3 = s_messageattenuation_10092f38;
  do {
    if (this_00 == (void *)0x0) break;
    this_00 = (void *)((int)this_00 + -1);
    bVar6 = *pcVar4 == *pcVar3;
    pcVar4 = pcVar4 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar6);
  if (bVar6) {
    iVar1 = FUN_1006e1dd(this_00,*(byte_conflict **)(param_1 + 8));
    this->pev->impulse = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

/* 10019ca0  CMessage::Use  (251 bytes)
 * undefined Use(int * param_1)
 */
void __thiscall CMessage::Use(CMessage *this,int *param_1)

{
  entvars_t *peVar1;
  void *this_00;
  int iVar2;
  edict_t *peVar3;
  
  if ((this->pev->spawnflags & 2) == 0) {
    if ((param_1 == (int *)0x0) || (iVar2 = (**(code **)(*param_1 + 0xa8))(), iVar2 == 0)) {
      peVar3 = (*g_engfuncs.pfnPEntityOfEntIndex)(1);
      if ((peVar3 == (edict_t *)0x0) &&
         (peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar3 == (edict_t *)0x0)) {
        param_1 = (int *)0x0;
      }
      else {
        param_1 = peVar3->pvPrivateData;
      }
    }
    if (param_1 != (int *)0x0) {
      UTIL_ShowMessage(gpGlobals->pStringBase + this->pev->message,param_1);
    }
  }
  else {
    UTIL_ShowMessageAll(gpGlobals->pStringBase + this->pev->message);
  }
  peVar1 = this->pev;
  this_00 = (void *)peVar1->noise;
  if (this_00 != (void *)0x0) {
    EMIT_SOUND_DYN(this_00,peVar1->pContainingEntity,4,gpGlobals->pStringBase + (int)this_00,
                   peVar1->scale,peVar1->speed,0,100);
  }
  if ((this->pev->spawnflags & 1) != 0) {
    UTIL_Remove((int)this);
  }
  CBaseEntity::SUB_UseTargets((CBaseEntity *)this,this,3,0);
  return;
}

