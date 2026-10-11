/* mp.dll - CBasePlatTrain (5 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1002ddd0  CBasePlatTrain::Save  (48 bytes)
 * undefined Save(void * param_1)
 * called by: CFuncPlat::Save, CFuncTrain::Save
 */
void __thiscall CBasePlatTrain::Save(CBasePlatTrain *this,void *param_1)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Save((CBaseToggle *)this,param_1);
  if (iVar1 == 0) {
    return;
  }
  CSave::WriteFields(param_1,(byte_conflict *)s_CBasePlatTrain_100a043c,(int)this,0x100a0118,3);
  return;
}

/* 1002de00  CBasePlatTrain::Restore  (48 bytes)
 * undefined Restore(void * param_1)
 * called by: CFuncPlat::Restore, CFuncTrain::Restore
 */
void __thiscall CBasePlatTrain::Restore(CBasePlatTrain *this,void *param_1)

{
  int iVar1;
  
  iVar1 = CBaseToggle::Restore((CBaseToggle *)this,param_1);
  if (iVar1 == 0) {
    return;
  }
  CRestore::ReadFields(param_1,(byte_conflict *)s_CBasePlatTrain_100a043c,(int)this,&DAT_100a0118,3)
  ;
  return;
}

/* 1002de30  CBasePlatTrain::KeyValue  (623 bytes)
 * undefined KeyValue(int param_1)
 * called by: CFuncPlat::KeyValue, CFuncTrain::KeyValue
 */
void __thiscall CBasePlatTrain::KeyValue(CBasePlatTrain *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  CBasePlatTrain *pCVar5;
  byte *pbVar7;
  char *pcVar8;
  bool bVar9;
  float10 fVar10;
  longlong lVar11;
  undefined3 uVar6;
  
  pbVar4 = *(byte **)(param_1 + 4);
  pbVar7 = &DAT_1009e538;
  pbVar2 = pbVar4;
  pCVar5 = this;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)pCVar5 >> 8);
    pCVar5 = (CBasePlatTrain *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_1002de68:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1002de6d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    pCVar5 = (CBasePlatTrain *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_1002de68;
    pbVar2 = pbVar2 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002de6d:
  if (iVar3 == 0) {
    fVar10 = atof(pCVar5,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0x80) = (float)fVar10;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pbVar7 = &DAT_100a00b8;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)pCVar5 >> 8);
    pCVar5 = (CBasePlatTrain *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_1002debc:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1002dec1;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    pCVar5 = (CBasePlatTrain *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_1002debc;
    pbVar2 = pbVar2 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002dec1:
  if (iVar3 == 0) {
    fVar10 = atof(pCVar5,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0x7c) = (float)fVar10;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = s_height_1009c324;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)pCVar5 >> 8);
    pCVar5 = (CBasePlatTrain *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_1002df0d:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1002df12;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    pCVar5 = (CBasePlatTrain *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_1002df0d;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002df12:
  if (iVar3 == 0) {
    fVar10 = atof(pCVar5,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0xc0) = (float)fVar10;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = s_rotation_100a0454;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)pCVar5 >> 8);
    pCVar5 = (CBasePlatTrain *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_1002df61:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1002df66;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    pCVar5 = (CBasePlatTrain *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_1002df61;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002df66:
  if (iVar3 == 0) {
    fVar10 = atof(pCVar5,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0xdc) = (float)fVar10;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = s_movesnd_1009d75c;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)pCVar5 >> 8);
    pCVar5 = (CBasePlatTrain *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_1002dfb5:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1002dfba;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    pCVar5 = (CBasePlatTrain *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_1002dfb5;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002dfba:
  if (iVar3 == 0) {
    atof(pCVar5,*(byte_conflict **)(param_1 + 8));
    lVar11 = __ftol();
    this[0xf0] = SUB81(lVar11,0);
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = s_stopsnd_1009d754;
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)pCVar5 >> 8);
    pCVar5 = (CBasePlatTrain *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_1002e00e:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1002e013;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    pCVar5 = (CBasePlatTrain *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_1002e00e;
    pbVar2 = pbVar2 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002e013:
  if (iVar3 == 0) {
    atof(pCVar5,*(byte_conflict **)(param_1 + 8));
    lVar11 = __ftol();
    this[0xf1] = SUB81(lVar11,0);
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  pcVar8 = s_volume_100a044c;
  do {
    bVar1 = *pbVar4;
    uVar6 = (undefined3)((uint)pCVar5 >> 8);
    pCVar5 = (CBasePlatTrain *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_1002e067:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1002e06c;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    pCVar5 = (CBasePlatTrain *)CONCAT31(uVar6,bVar1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_1002e067;
    pbVar4 = pbVar4 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002e06c:
  if (iVar3 == 0) {
    fVar10 = atof(pCVar5,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0xf4) = (float)fVar10;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CBaseToggle::KeyValue((CBaseToggle *)this,param_1);
  return;
}

/* 1002e0a0  CBasePlatTrain::Precache  (577 bytes)
 * undefined Precache(int param_1)
 * called by: CFuncPlat::Precache, CFuncTrain::Precache
 */
void __fastcall CBasePlatTrain::Precache(int param_1)

{
  char *pcVar1;
  
  switch(*(undefined1 *)(param_1 + 0xf0)) {
  default:
    pcVar1 = s_common_null_wav_1009bfb8;
    break;
  case 1:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_bigmove1_wav_100a060c);
    pcVar1 = s_plats_bigmove1_wav_100a060c;
    break;
  case 2:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_bigmove2_wav_100a05f8);
    pcVar1 = s_plats_bigmove2_wav_100a05f8;
    break;
  case 3:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_elevmove1_wav_100a05e4);
    pcVar1 = s_plats_elevmove1_wav_100a05e4;
    break;
  case 4:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_elevmove2_wav_100a05d0);
    pcVar1 = s_plats_elevmove2_wav_100a05d0;
    break;
  case 5:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_elevmove3_wav_100a05bc);
    pcVar1 = s_plats_elevmove3_wav_100a05bc;
    break;
  case 6:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_freightmove1_wav_100a05a4);
    pcVar1 = s_plats_freightmove1_wav_100a05a4;
    break;
  case 7:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_freightmove2_wav_100a058c);
    pcVar1 = s_plats_freightmove2_wav_100a058c;
    break;
  case 8:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_heavymove1_wav_100a0574);
    pcVar1 = s_plats_heavymove1_wav_100a0574;
    break;
  case 9:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_rackmove1_wav_100a0560);
    pcVar1 = s_plats_rackmove1_wav_100a0560;
    break;
  case 10:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_railmove1_wav_100a054c);
    pcVar1 = s_plats_railmove1_wav_100a054c;
    break;
  case 0xb:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_squeekmove1_wav_100a0534);
    pcVar1 = s_plats_squeekmove1_wav_100a0534;
    break;
  case 0xc:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_talkmove1_wav_100a0520);
    pcVar1 = s_plats_talkmove1_wav_100a0520;
    break;
  case 0xd:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_talkmove2_wav_100a050c);
    pcVar1 = s_plats_talkmove2_wav_100a050c;
  }
  *(int *)(*(int *)(param_1 + 4) + 0x1e8) = (int)pcVar1 - (int)gpGlobals->pStringBase;
  switch(*(undefined1 *)(param_1 + 0xf1)) {
  default:
    pcVar1 = s_common_null_wav_1009bfb8;
    break;
  case 1:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_bigstop1_wav_100a04f8);
    pcVar1 = s_plats_bigstop1_wav_100a04f8;
    break;
  case 2:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_bigstop2_wav_100a04e4);
    pcVar1 = s_plats_bigstop2_wav_100a04e4;
    break;
  case 3:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_freightstop1_wav_100a04cc);
    pcVar1 = s_plats_freightstop1_wav_100a04cc;
    break;
  case 4:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_heavystop2_wav_100a04b4);
    pcVar1 = s_plats_heavystop2_wav_100a04b4;
    break;
  case 5:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_rackstop1_wav_100a04a0);
    pcVar1 = s_plats_rackstop1_wav_100a04a0;
    break;
  case 6:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_railstop1_wav_100a048c);
    pcVar1 = s_plats_railstop1_wav_100a048c;
    break;
  case 7:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_squeekstop1_wav_100a0474);
    pcVar1 = s_plats_squeekstop1_wav_100a0474;
    break;
  case 8:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_talkstop1_wav_100a0460);
    pcVar1 = s_plats_talkstop1_wav_100a0460;
  }
  *(int *)(*(int *)(param_1 + 4) + 0x1ec) = (int)pcVar1 - (int)gpGlobals->pStringBase;
  return;
}

/* 10032740  CBasePlatTrain::IsTogglePlat  (13 bytes)
 * undefined IsTogglePlat()
 */
uint __fastcall CBasePlatTrain::IsTogglePlat(int param_1)

{
  return *(uint *)(*(int *)(param_1 + 4) + 0x1a0) & 1;
}

