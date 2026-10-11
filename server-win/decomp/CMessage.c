/* mp.dll - CMessage (4 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1001cf90  CMessage::Spawn  (131 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CMessage::Spawn(int *param_1)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0x20))();
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  iVar1 = param_1[1];
  iVar2 = *(int *)(iVar1 + 0x184);
  if (iVar2 == 1) {
    *(undefined4 *)(iVar1 + 0x1f8) = 0x3fa00000;
  }
  else if (iVar2 == 2) {
    *(undefined4 *)(iVar1 + 0x1f8) = 0x3f4ccccd;
  }
  else if (iVar2 == 3) {
    *(undefined4 *)(iVar1 + 0x1f8) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x1f8) = 0x40000000;
  }
  *(undefined4 *)(param_1[1] + 0x184) = 0;
  if (*(float *)(param_1[1] + 0x144) <= 0.0) {
    *(undefined4 *)(param_1[1] + 0x144) = 0x3f800000;
  }
  return;
}

/* 1001d020  CMessage::Precache  (36 bytes)
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

/* 1001d050  CMessage::KeyValue  (295 bytes)
 * undefined KeyValue()
 */
void __thiscall CMessage::KeyValue(undefined *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined *this;
  char *pcVar7;
  bool bVar8;
  float10 fVar9;
  undefined3 uVar6;
  
  pbVar4 = *(byte **)(param_2 + 4);
  pcVar7 = s_messagesound_1009e054;
  pbVar2 = pbVar4;
  this = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1001d088:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1001d08d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1001d088;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001d08d:
  if (iVar3 == 0) {
    iVar3 = (*g_engfuncs.pfnAllocString)(*(char **)(param_2 + 8));
    *(int *)(*(int *)(param_1 + 4) + 0x1e8) = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_messagevolume_1009e044;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1001d0e0:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1001d0e5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1001d0e0;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001d0e5:
  if (iVar3 == 0) {
    fVar9 = atof(this,*(byte_conflict **)(param_2 + 8));
    *(float *)(*(int *)(param_1 + 4) + 0x144) = (float)(fVar9 * (float10)0.1);
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_messageattenuation_1009e030;
  do {
    bVar1 = *pbVar4;
    uVar6 = (undefined3)((uint)this >> 8);
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1001d13d:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1001d142;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    this = (undefined *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1001d13d;
    pbVar4 = pbVar4 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001d142:
  if (iVar3 == 0) {
    uVar5 = atoi(this,*(byte_conflict **)(param_2 + 8));
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x184) = uVar5;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

/* 1001d180  CMessage::Use  (254 bytes)
 * undefined Use(int * param_1)
 */
void __thiscall CMessage::Use(CMessage *this,int *param_1)

{
  entvars_t *peVar1;
  void *this_00;
  int iVar2;
  edict_t *peVar3;
  
  if ((this->pev->spawnflags & 2) == 0) {
    if ((param_1 == (int *)0x0) || (iVar2 = (**(code **)(*param_1 + 0xc0))(), iVar2 == 0)) {
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
                   peVar1->scale,peVar1->speed,0);
  }
  if ((this->pev->spawnflags & 1) != 0) {
    UTIL_Remove((int *)this);
  }
  CBaseEntity::SUB_UseTargets((CBaseEntity *)this,this,3,0);
  return;
}

