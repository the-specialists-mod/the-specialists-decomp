/* mp.dll - CEnvSound (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1003bdd0  CEnvSound::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CEnvSound::Save(CBaseEntity *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CEnvSound_100a20ac,(int)param_1,0x100a1fa0,2);
  return;
}

/* 1003be00  CEnvSound::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CEnvSound::Restore(CBaseEntity *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseEntity::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_2,(byte_conflict *)s_CEnvSound_100a20ac,(int)param_1,&DAT_100a1fa0,2);
  return;
}

/* 1003be30  CEnvSound::KeyValue  (165 bytes)
 * undefined KeyValue()
 */
void __thiscall CEnvSound::KeyValue(undefined *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined *puVar4;
  undefined *extraout_ECX;
  char *pcVar6;
  bool bVar7;
  float10 fVar8;
  undefined3 uVar5;
  
  pcVar6 = s_radius_1009e004;
  pbVar2 = *(byte **)(param_2 + 4);
  puVar4 = param_1;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)puVar4 >> 8);
    puVar4 = (undefined *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1003be65:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_1003be6a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    puVar4 = (undefined *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1003be65;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1003be6a:
  if (iVar3 == 0) {
    fVar8 = atof(puVar4,*(byte_conflict **)(param_2 + 8));
    *(float *)(param_1 + 0x54) = (float)fVar8;
    *(undefined4 *)(param_2 + 0xc) = 1;
    puVar4 = extraout_ECX;
  }
  pbVar2 = *(byte **)(param_2 + 4);
  pcVar6 = s_roomtype_100a20b8;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)puVar4 >> 8);
    puVar4 = (undefined *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1003beb0:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_1003beb5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    puVar4 = (undefined *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1003beb0;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1003beb5:
  if (iVar3 == 0) {
    fVar8 = atof(puVar4,*(byte_conflict **)(param_2 + 8));
    *(float *)(param_1 + 0x58) = (float)fVar8;
    *(undefined4 *)(param_2 + 0xc) = 1;
  }
  return;
}

/* 1003c030  CEnvSound::Think  (396 bytes)
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
LAB_1003c0fe:
    *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.75;
    return;
  }
  iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict);
  if (iVar2 == 0) goto LAB_1003c0fe;
  peVar1 = &pEdict->v;
  iVar2 = GetClassPtr<CBasePlayer>((int)peVar1);
  if (*(edict_t **)(iVar2 + 0x808) != (edict_t *)0x0) {
    iVar3 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(iVar2 + 0x808));
    if ((iVar3 != 0) && (*(int *)(iVar2 + 0x808) == *(int *)(*(int *)(param_1 + 4) + 0x208))) {
      if ((*(float *)(iVar2 + 0x80c) == 0.0) || (*(float *)(iVar2 + 0x810) == 0.0))
      goto LAB_1003c0fe;
      iVar3 = FEnvSoundInRange(*(int *)(param_1 + 4),(int)peVar1,&param_3);
      if (iVar3 == 0) {
        *(undefined4 *)(iVar2 + 0x810) = 0;
        *(undefined4 *)(iVar2 + 0x80c) = 0;
        goto LAB_1003c0fe;
      }
      *(float *)(iVar2 + 0x810) = param_3;
      goto LAB_1003c19f;
    }
  }
  iVar3 = FEnvSoundInRange(*(int *)(param_1 + 4),(int)peVar1,&param_3);
  if ((iVar3 != 0) && ((param_3 < *(float *)(iVar2 + 0x810) || (*(float *)(iVar2 + 0x810) == 0.0))))
  {
    *(undefined4 *)(iVar2 + 0x808) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
    *(undefined4 *)(iVar2 + 0x80c) = *(undefined4 *)(param_1 + 0x58);
    *(float *)(iVar2 + 0x810) = param_3;
    (*g_engfuncs.pfnMessageBegin)(1,0x25,(float *)0x0,pEdict);
    lVar4 = __ftol();
    (*g_engfuncs.pfnWriteShort)((int)(short)lVar4);
    param_3 = 2.5984355e-29;
    (*g_engfuncs.pfnMessageEnd)();
  }
LAB_1003c19f:
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.25;
  return;
}

/* 1003c1c0  CEnvSound::Spawn  (37 bytes)
 * undefined Spawn()
 */
void __fastcall CEnvSound::Spawn(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)(*g_engfuncs.pfnRandomFloat)(0.0,0.5);
  *(float *)(*(int *)(param_1 + 4) + 0x104) = (float)(fVar1 + (float10)gpGlobals->time);
  return;
}

