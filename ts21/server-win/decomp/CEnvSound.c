/* mp.dll - CEnvSound (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10035650  CEnvSound::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CEnvSound::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CEnvSound_10096df4,(int)param_1,0x10096ce8,2);
  return;
}

/* 10035680  CEnvSound::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CEnvSound::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CEnvSound_10096df4,(int)param_1,0x10096ce8,2);
  return;
}

/* 100356b0  CEnvSound::KeyValue  (99 bytes)
 * undefined KeyValue(int param_1)
 */
void __thiscall CEnvSound::KeyValue(CEnvSound *this,int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  float10 fVar6;
  
  iVar1 = 7;
  bVar5 = true;
  pcVar3 = *(char **)(param_1 + 4);
  pcVar4 = s_radius_10092f0c;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    fVar6 = FUN_1006e0fb(*(undefined1 **)(param_1 + 8),*(undefined1 **)(param_1 + 8));
    *(float *)&this->field_0x54 = (float)fVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  puVar2 = &DAT_00000009;
  bVar5 = true;
  pcVar3 = *(char **)(param_1 + 4);
  pcVar4 = s_roomtype_10096e00;
  do {
    if (puVar2 == (undefined1 *)0x0) break;
    puVar2 = puVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    fVar6 = FUN_1006e0fb(puVar2,*(byte_conflict **)(param_1 + 8));
    *(float *)&this->field_0x58 = (float)fVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  return;
}

/* 10035840  CEnvSound::Think  (396 bytes)
 * undefined Think()
 */
void __thiscall CEnvSound::Think(int param_1,undefined4 param_2,float param_3)

{
  entvars_t *peVar1;
  edict_t *pEdict;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  pEdict = (*g_engfuncs.pfnFindClientInPVS)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
  if (pEdict == (edict_t *)0x0) {
LAB_1003590e:
    *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.75;
    return;
  }
  iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict);
  if (iVar2 == 0) goto LAB_1003590e;
  peVar1 = &pEdict->v;
  iVar2 = GetClassPtr<CBasePlayer>((int)peVar1);
  if (*(edict_t **)(iVar2 + 0x778) != (edict_t *)0x0) {
    iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(iVar2 + 0x778));
    if ((iVar3 != 0) && (*(int *)(iVar2 + 0x778) == *(int *)(*(int *)(param_1 + 4) + 0x208))) {
      if ((*(float *)(iVar2 + 0x77c) == 0.0) || (*(float *)(iVar2 + 0x780) == 0.0))
      goto LAB_1003590e;
      iVar3 = FEnvSoundInRange(*(int *)(param_1 + 4),peVar1,&param_3);
      if (iVar3 == 0) {
        *(undefined4 *)(iVar2 + 0x780) = 0;
        *(undefined4 *)(iVar2 + 0x77c) = 0;
        goto LAB_1003590e;
      }
      *(float *)(iVar2 + 0x780) = param_3;
      goto LAB_100359af;
    }
  }
  iVar3 = FEnvSoundInRange(*(int *)(param_1 + 4),peVar1,&param_3);
  if ((iVar3 != 0) && ((param_3 < *(float *)(iVar2 + 0x780) || (*(float *)(iVar2 + 0x780) == 0.0))))
  {
    *(undefined4 *)(iVar2 + 0x778) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
    *(undefined4 *)(iVar2 + 0x77c) = *(undefined4 *)(param_1 + 0x58);
    *(float *)(iVar2 + 0x780) = param_3;
    (*g_engfuncs.pfnMessageBegin)(1,0x25,(float *)0x0,pEdict);
    lVar4 = __ftol();
    (*g_engfuncs.pfnWriteShort)((int)(short)lVar4);
    param_3 = 2.5904284e-29;
    (*g_engfuncs.pfnMessageEnd)();
  }
LAB_100359af:
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.25;
  return;
}

/* 100359d0  CEnvSound::Spawn  (37 bytes)
 * undefined Spawn()
 */
void __fastcall CEnvSound::Spawn(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)(*g_engfuncs.pfnRandomFloat)(0.0,0.5);
  *(float *)(*(int *)(param_1 + 4) + 0x104) = (float)(fVar1 + (float10)gpGlobals->time);
  return;
}

