/* mp.dll - CBasePlatTrain (6 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10025c80  CBasePlatTrain::Save  (48 bytes)
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
  CSave::WriteFields(param_1,(byte_conflict *)s_CBasePlatTrain_100950ec,(int)this,0x10094dc8,3);
  return;
}

/* 10025cb0  CBasePlatTrain::Restore  (48 bytes)
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
  CRestore::ReadFields(param_1,(byte_conflict *)s_CBasePlatTrain_100950ec,(int)this,0x10094dc8,3);
  return;
}

/* 10025ce0  CBasePlatTrain::KeyValue  (385 bytes)
 * undefined KeyValue(int param_1)
 * called by: CFuncPlat::KeyValue, CFuncTrain::KeyValue
 */
void __thiscall CBasePlatTrain::KeyValue(CBasePlatTrain *this,int param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  float10 fVar6;
  longlong lVar7;
  
  pcVar3 = *(char **)(param_1 + 4);
  puVar1 = (undefined1 *)0x4;
  bVar5 = true;
  pcVar2 = pcVar3;
  pcVar4 = &DAT_10093440;
  do {
    if (puVar1 == (undefined1 *)0x0) break;
    puVar1 = puVar1 + -1;
    bVar5 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    fVar6 = FUN_1006e0fb(puVar1,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0x80) = (float)fVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar1 = (undefined1 *)0x5;
  bVar5 = true;
  pcVar2 = pcVar3;
  pcVar4 = &DAT_10094d68;
  do {
    if (puVar1 == (undefined1 *)0x0) break;
    puVar1 = puVar1 + -1;
    bVar5 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    fVar6 = FUN_1006e0fb(puVar1,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0x7c) = (float)fVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar1 = &DAT_00000007;
  bVar5 = true;
  pcVar2 = pcVar3;
  pcVar4 = s_height_1009127c;
  do {
    if (puVar1 == (undefined1 *)0x0) break;
    puVar1 = puVar1 + -1;
    bVar5 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    fVar6 = FUN_1006e0fb(puVar1,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0xc0) = (float)fVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar1 = &DAT_00000009;
  bVar5 = true;
  pcVar2 = pcVar3;
  pcVar4 = s_rotation_10095104;
  do {
    if (puVar1 == (undefined1 *)0x0) break;
    puVar1 = puVar1 + -1;
    bVar5 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    fVar6 = FUN_1006e0fb(puVar1,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0xdc) = (float)fVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar1 = &DAT_00000008;
  bVar5 = true;
  pcVar2 = pcVar3;
  pcVar4 = s_movesnd_10092668;
  do {
    if (puVar1 == (undefined1 *)0x0) break;
    puVar1 = puVar1 + -1;
    bVar5 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    FUN_1006e0fb(puVar1,*(byte_conflict **)(param_1 + 8));
    lVar7 = __ftol();
    this[0xf0] = SUB81(lVar7,0);
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar1 = &DAT_00000008;
  bVar5 = true;
  pcVar2 = pcVar3;
  pcVar4 = s_stopsnd_10092660;
  do {
    if (puVar1 == (undefined1 *)0x0) break;
    puVar1 = puVar1 + -1;
    bVar5 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    FUN_1006e0fb(puVar1,*(byte_conflict **)(param_1 + 8));
    lVar7 = __ftol();
    this[0xf1] = SUB81(lVar7,0);
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  puVar1 = &DAT_00000007;
  bVar5 = true;
  pcVar2 = s_volume_100950fc;
  do {
    if (puVar1 == (undefined1 *)0x0) break;
    puVar1 = puVar1 + -1;
    bVar5 = *pcVar3 == *pcVar2;
    pcVar3 = pcVar3 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar5);
  if (bVar5) {
    fVar6 = FUN_1006e0fb(puVar1,*(byte_conflict **)(param_1 + 8));
    *(float *)(this + 0xf4) = (float)fVar6;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  CBaseToggle::KeyValue((CBaseToggle *)this,param_1);
  return;
}

/* 10025e70  CBasePlatTrain::Precache  (577 bytes)
 * undefined Precache(int param_1)
 * called by: CFuncPlat::Precache, CFuncTrain::Precache
 */
void __fastcall CBasePlatTrain::Precache(int param_1)

{
  char *pcVar1;
  
  switch(*(undefined1 *)(param_1 + 0xf0)) {
  default:
    pcVar1 = s_common_null_wav_10090f10;
    break;
  case 1:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_bigmove1_wav_100952bc);
    pcVar1 = s_plats_bigmove1_wav_100952bc;
    break;
  case 2:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_bigmove2_wav_100952a8);
    pcVar1 = s_plats_bigmove2_wav_100952a8;
    break;
  case 3:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_elevmove1_wav_10095294);
    pcVar1 = s_plats_elevmove1_wav_10095294;
    break;
  case 4:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_elevmove2_wav_10095280);
    pcVar1 = s_plats_elevmove2_wav_10095280;
    break;
  case 5:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_elevmove3_wav_1009526c);
    pcVar1 = s_plats_elevmove3_wav_1009526c;
    break;
  case 6:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_freightmove1_wav_10095254);
    pcVar1 = s_plats_freightmove1_wav_10095254;
    break;
  case 7:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_freightmove2_wav_1009523c);
    pcVar1 = s_plats_freightmove2_wav_1009523c;
    break;
  case 8:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_heavymove1_wav_10095224);
    pcVar1 = s_plats_heavymove1_wav_10095224;
    break;
  case 9:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_rackmove1_wav_10095210);
    pcVar1 = s_plats_rackmove1_wav_10095210;
    break;
  case 10:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_railmove1_wav_100951fc);
    pcVar1 = s_plats_railmove1_wav_100951fc;
    break;
  case 0xb:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_squeekmove1_wav_100951e4);
    pcVar1 = s_plats_squeekmove1_wav_100951e4;
    break;
  case 0xc:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_talkmove1_wav_100951d0);
    pcVar1 = s_plats_talkmove1_wav_100951d0;
    break;
  case 0xd:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_talkmove2_wav_100951bc);
    pcVar1 = s_plats_talkmove2_wav_100951bc;
  }
  *(int *)(*(int *)(param_1 + 4) + 0x1e8) = (int)pcVar1 - (int)gpGlobals->pStringBase;
  switch(*(undefined1 *)(param_1 + 0xf1)) {
  default:
    pcVar1 = s_common_null_wav_10090f10;
    break;
  case 1:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_bigstop1_wav_100951a8);
    pcVar1 = s_plats_bigstop1_wav_100951a8;
    break;
  case 2:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_bigstop2_wav_10095194);
    pcVar1 = s_plats_bigstop2_wav_10095194;
    break;
  case 3:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_freightstop1_wav_1009517c);
    pcVar1 = s_plats_freightstop1_wav_1009517c;
    break;
  case 4:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_heavystop2_wav_10095164);
    pcVar1 = s_plats_heavystop2_wav_10095164;
    break;
  case 5:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_rackstop1_wav_10095150);
    pcVar1 = s_plats_rackstop1_wav_10095150;
    break;
  case 6:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_railstop1_wav_1009513c);
    pcVar1 = s_plats_railstop1_wav_1009513c;
    break;
  case 7:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_squeekstop1_wav_10095124);
    pcVar1 = s_plats_squeekstop1_wav_10095124;
    break;
  case 8:
    (*g_engfuncs.pfnPrecacheSound)(s_plats_talkstop1_wav_10095110);
    pcVar1 = s_plats_talkstop1_wav_10095110;
  }
  *(int *)(*(int *)(param_1 + 4) + 0x1ec) = (int)pcVar1 - (int)gpGlobals->pStringBase;
  return;
}

/* 1002a040  CBasePlatTrain::ObjectCaps  (3 bytes)
 * undefined ObjectCaps()
 */
undefined4 CBasePlatTrain::ObjectCaps(void)

{
  return 0;
}

/* 1002a050  CBasePlatTrain::IsTogglePlat  (13 bytes)
 * undefined IsTogglePlat()
 */
uint __fastcall CBasePlatTrain::IsTogglePlat(int param_1)

{
  return *(uint *)(*(int *)(param_1 + 4) + 0x1a0) & 1;
}

