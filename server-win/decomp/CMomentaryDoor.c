/* mp.dll - CMomentaryDoor (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100183f0  CMomentaryDoor::Save  (48 bytes)
 * undefined Save()
 */
void __thiscall CMomentaryDoor::Save(CBaseToggle *param_1,CSave *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Save(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_2,(byte_conflict *)s_CMomentaryDoor_1009da9c,(int)param_1,0x1009d6d0,1);
  return;
}

/* 10018420  CMomentaryDoor::Restore  (48 bytes)
 * undefined Restore()
 */
void __thiscall CMomentaryDoor::Restore(CBaseToggle *param_1,CRestore *param_2)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Restore(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields
            (param_2,(byte_conflict *)s_CMomentaryDoor_1009da9c,(int)param_1,&DAT_1009d6d0,1);
  return;
}

/* 10018450  CMomentaryDoor::Spawn  (429 bytes)
 * undefined Spawn(int * param_1)
 */
void __fastcall CMomentaryDoor::Spawn(int *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  
  SetMovedir(param_1[1]);
  *(undefined4 *)(param_1[1] + 0x10c) = 4;
  *(undefined4 *)(param_1[1] + 0x108) = 7;
  UTIL_SetOrigin(param_1[1],param_1[1] + 8);
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(param_1[1] + 0x208),gpGlobals->pStringBase + *(int *)(param_1[1] + 0xb8))
  ;
  if (*(float *)(param_1[1] + 0x1f8) == 0.0) {
    *(undefined4 *)(param_1[1] + 0x1f8) = 0x42c80000;
  }
  if (*(float *)(param_1[1] + 0x1e0) == 0.0) {
    *(undefined4 *)(param_1[1] + 0x1e0) = 0x40000000;
  }
  iVar5 = param_1[1];
  pfVar1 = (float *)(param_1 + 0x23);
  *pfVar1 = *(float *)(iVar5 + 8);
  param_1[0x24] = *(int *)(iVar5 + 0xc);
  pfVar2 = (float *)(param_1 + 0x26);
  param_1[0x25] = *(int *)(iVar5 + 0x10);
  fVar6 = (ABS((*(float *)(iVar5 + 0xf4) - 2.0) * *(float *)(iVar5 + 0x44)) +
          ABS((*(float *)(iVar5 + 0xf8) - 2.0) * *(float *)(iVar5 + 0x48)) +
          ABS((*(float *)(iVar5 + 0xfc) - 2.0) * *(float *)(iVar5 + 0x4c))) - (float)param_1[0x20];
  fVar3 = *(float *)(iVar5 + 0x48);
  fVar4 = *(float *)(iVar5 + 0x4c);
  *pfVar2 = fVar6 * *(float *)(iVar5 + 0x44) + *pfVar1;
  param_1[0x27] = (int)(fVar6 * fVar3 + (float)param_1[0x24]);
  param_1[0x28] = (int)(fVar6 * fVar4 + (float)param_1[0x25]);
  if ((*(byte *)(iVar5 + 0x1a0) & 1) != 0) {
    UTIL_SetOrigin(iVar5,pfVar2);
    *pfVar2 = *pfVar1;
    iVar5 = param_1[1];
    param_1[0x27] = param_1[0x24];
    param_1[0x28] = param_1[0x25];
    *pfVar1 = *(float *)(iVar5 + 8);
    param_1[0x24] = *(int *)(iVar5 + 0xc);
    param_1[0x25] = *(int *)(iVar5 + 0x10);
  }
  param_1[5] = 0;
  (**(code **)(*param_1 + 0x20))();
  return;
}

/* 10018600  CMomentaryDoor::Precache  (314 bytes)
 * undefined Precache(int param_1)
 */
void __fastcall CMomentaryDoor::Precache(int param_1)

{
  int iVar1;
  char *szValue;
  
  switch(*(undefined1 *)(param_1 + 0xf0)) {
  case 0:
    iVar1 = (*g_engfuncs.pfnAllocString)(s_common_null_wav_1009bfb8);
    *(int *)(*(int *)(param_1 + 4) + 0x1ec) = iVar1;
    return;
  case 1:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove1_wav_1009da68);
    iVar1 = (*g_engfuncs.pfnAllocString)(s_doors_doormove1_wav_1009da68);
    *(int *)(*(int *)(param_1 + 4) + 0x1ec) = iVar1;
    return;
  case 2:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove2_wav_1009da54);
    szValue = s_doors_doormove2_wav_1009da54;
    break;
  case 3:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove3_wav_1009da40);
    iVar1 = (*g_engfuncs.pfnAllocString)(s_doors_doormove3_wav_1009da40);
    *(int *)(*(int *)(param_1 + 4) + 0x1ec) = iVar1;
    return;
  case 4:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove4_wav_1009da2c);
    szValue = s_doors_doormove4_wav_1009da2c;
    break;
  case 5:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove5_wav_1009da18);
    iVar1 = (*g_engfuncs.pfnAllocString)(s_doors_doormove5_wav_1009da18);
    *(int *)(*(int *)(param_1 + 4) + 0x1ec) = iVar1;
    return;
  case 6:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove6_wav_1009da04);
    szValue = s_doors_doormove6_wav_1009da04;
    break;
  case 7:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove7_wav_1009d9f0);
    iVar1 = (*g_engfuncs.pfnAllocString)(s_doors_doormove7_wav_1009d9f0);
    *(int *)(*(int *)(param_1 + 4) + 0x1ec) = iVar1;
    return;
  case 8:
    (*g_engfuncs.pfnPrecacheSound)(s_doors_doormove8_wav_1009d9dc);
    szValue = s_doors_doormove8_wav_1009d9dc;
    break;
  default:
    iVar1 = (*g_engfuncs.pfnAllocString)(s_common_null_wav_1009bfb8);
    *(int *)(*(int *)(param_1 + 4) + 0x1ec) = iVar1;
    return;
  }
  iVar1 = (*g_engfuncs.pfnAllocString)(szValue);
  *(int *)(*(int *)(param_1 + 4) + 0x1ec) = iVar1;
  return;
}

/* 10018760  CMomentaryDoor::KeyValue  (249 bytes)
 * undefined KeyValue()
 */
void __thiscall CMomentaryDoor::KeyValue(CBaseToggle *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  CBaseToggle *pCVar5;
  char *pcVar7;
  bool bVar8;
  longlong lVar9;
  undefined3 uVar6;
  
  pbVar4 = *(byte **)(param_2 + 4);
  pcVar7 = s_movesnd_1009d75c;
  pbVar2 = pbVar4;
  pCVar5 = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)pCVar5 >> 8);
    pCVar5 = (CBaseToggle *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10018798:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1001879d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    pCVar5 = (CBaseToggle *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10018798;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001879d:
  if (iVar3 == 0) {
    atof(pCVar5,*(byte_conflict **)(param_2 + 8));
    lVar9 = __ftol();
    param_1[0xf0] = SUB81(lVar9,0);
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_stopsnd_1009d754;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100187f1:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_100187f6;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100187f1;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100187f6:
  if (iVar3 == 0) {
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar7 = s_healthvalue_1009d748;
  do {
    bVar1 = *pbVar4;
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10018833:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10018838;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10018833;
    pbVar4 = pbVar4 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10018838:
  if (iVar3 == 0) {
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  CBaseToggle::KeyValue(param_1,param_2);
  return;
}

/* 10018860  CMomentaryDoor::Use  (496 bytes)
 * undefined Use()
 */
void __thiscall
CMomentaryDoor::Use(CBaseToggle *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                   float param_5)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  Vector VStack_60;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  Vector VStack_48;
  Vector VStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  Vector VStack_18;
  Vector VStack_c;
  
  if (param_4 == 2) {
    if (1.0 < param_5) {
      param_5 = 1.0;
    }
    fStack_54 = *(float *)(param_1 + 0x98) - *(float *)(param_1 + 0x8c);
    fStack_50 = *(float *)(param_1 + 0x9c) - *(float *)(param_1 + 0x90);
    fStack_4c = *(float *)(param_1 + 0xa0) - *(float *)(param_1 + 0x94);
    Vector::Vector(&VStack_48,&fStack_54);
    fVar4 = VStack_48.x * param_5;
    fVar3 = 2.554629e-29;
    puVar2 = (undefined4 *)
             Vector::Vector(&VStack_c,fVar4,VStack_48.y * param_5,VStack_48.z * param_5);
    Vector::Vector(&VStack_18,puVar2);
    Vector::Vector(&VStack_3c,&VStack_18.x);
    fStack_30 = VStack_3c.x + *(float *)(param_1 + 0x8c);
    fStack_2c = VStack_3c.y + *(float *)(param_1 + 0x90);
    fStack_28 = VStack_3c.z + *(float *)(param_1 + 0x94);
    Vector::Vector(&VStack_60,&fStack_30);
    fStack_24 = VStack_60.x;
    iVar1 = *(int *)(param_1 + 4);
    fStack_20 = VStack_60.y;
    fStack_1c = VStack_60.z;
    fStack_30 = VStack_60.x - *(float *)(iVar1 + 8);
    fStack_2c = VStack_60.y - *(float *)(iVar1 + 0xc);
    fStack_28 = VStack_60.z - *(float *)(iVar1 + 0x10);
    fVar5 = 2.554676e-29;
    Vector::Vector(&VStack_60,&fStack_30);
    fVar6 = SQRT(VStack_60.x * VStack_60.x + VStack_60.y * VStack_60.y + VStack_60.z * VStack_60.z)
            * 10.0;
    if (fVar6 != 0.0) {
      iVar1 = *(int *)(param_1 + 4);
      if ((*(float *)(iVar1 + 0x104) < *(float *)(iVar1 + 0x100)) ||
         (*(float *)(iVar1 + 0x104) == 0.0)) {
        fVar5 = 1.4013e-43;
        fVar4 = 0.0;
        fVar3 = 0.8;
        EMIT_SOUND_DYN(*(void **)(iVar1 + 0x208),*(void **)(iVar1 + 0x208),6,
                       gpGlobals->pStringBase + *(int *)(iVar1 + 0x1ec),0x3f800000,0x3f4ccccd,0);
      }
      Vector::Vector((Vector *)&stack0xffffff88,&fStack_24);
      CBaseToggle::LinearMove(param_1,fVar3,fVar4,fVar5,fVar6);
    }
  }
  return;
}

