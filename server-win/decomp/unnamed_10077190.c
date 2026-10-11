/* mp.dll - unnamed_10077190 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10077190  FUN_10077190  (147 bytes)
 * float10 FUN_10077190(float param_1, undefined4 param_2, float param_3)
 * called by: CFuncTrackTrain::Next
 */
float10 __cdecl FUN_10077190(float param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = UTIL_AngleMod(param_1);
  fVar1 = (float)fVar2;
  fVar2 = UTIL_AngleMod(fVar1);
  fVar3 = (float10)fVar1 - fVar2;
  if (param_3 < 0.0) {
    param_3 = -param_3;
  }
  if ((float10)-180.0 <= fVar3) {
    if ((float10)180.0 < fVar3) {
      fVar3 = fVar3 - (float10)360.0;
    }
  }
  else {
    fVar3 = fVar3 + (float10)360.0;
  }
  if ((float10)param_3 < fVar3) {
    return fVar2 + (float10)param_3;
  }
  if (fVar3 < -(float10)param_3) {
    return fVar2 - (float10)param_3;
  }
  return (float10)fVar1;
}

/* 10077230  FUN_10077230  (48 bytes)
 * float10 FUN_10077230(float param_1, float param_2)
 * called by: CFuncTrackTrain::Next, FUN_10021260
 */
float10 __cdecl FUN_10077230(float param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)param_1 - (float10)param_2;
  if (fVar1 < (float10)-180.0) {
    return fVar1 + (float10)360.0;
  }
  if ((float10)180.0 < fVar1) {
    fVar1 = fVar1 - (float10)360.0;
  }
  return fVar1;
}

/* 10077360  FUN_10077360  (15 bytes)
 * undefined FUN_10077360(undefined4 param_1)
 * called by: CBasePlayer::ShootBulletsPlayer, CTSKnife::BounceTouch, FUN_100145f0, FUN_10047280, FUN_10065f40, FUN_10077ba0
 */
void __cdecl FUN_10077360(float *param_1)

{
  (*g_engfuncs.pfnPointContents)(param_1);
  return;
}

/* 10077370  FUN_10077370  (174 bytes)
 * undefined FUN_10077370(undefined4 * param_1, undefined4 * param_2, int param_3, int param_4)
 * called by: CBlood::Use
 */
void __cdecl FUN_10077370(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uStack00000024;
  float *in_stack_00000028;
  undefined4 uStack0000002c;
  int in_stack_00000040;
  
  iVar1 = UTIL_ShouldShowBlood(param_3);
  if (iVar1 != 0) {
    if ((DAT_100ae4a8 == 1) && (param_3 == 0xf7)) {
      param_3 = 0;
    }
    (*g_engfuncs.pfnMessageBegin)(4,0x17,(float *)param_1,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(0x65);
    (*g_engfuncs.pfnWriteCoord)((float)*param_1);
    (*g_engfuncs.pfnWriteCoord)((float)param_1[1]);
    (*g_engfuncs.pfnWriteCoord)((float)param_1[2]);
    (*g_engfuncs.pfnWriteCoord)(*in_stack_00000028);
    (*g_engfuncs.pfnWriteCoord)(in_stack_00000028[1]);
    (*g_engfuncs.pfnWriteCoord)(in_stack_00000028[2]);
    (*g_engfuncs.pfnWriteByte)(param_3);
    if (0xfe < in_stack_00000040) {
      in_stack_00000040 = 0xff;
    }
    uStack00000024 = 0x10077413;
    (*g_engfuncs.pfnWriteByte)(in_stack_00000040);
    uStack0000002c = 0x1007741c;
    (*g_engfuncs.pfnMessageEnd)();
  }
  return;
}

/* 10077420  FUN_10077420  (267 bytes)
 * undefined FUN_10077420(undefined4 * param_1, undefined4 param_2, int param_3, int param_4)
 * called by: CBlood::Use, FUN_10079750
 */
void __cdecl FUN_10077420(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uStack0000001c;
  undefined4 uStack00000024;
  
  iVar1 = UTIL_ShouldShowBlood(param_3);
  if (((iVar1 != 0) && (param_3 != -1)) && (param_4 != 0)) {
    if ((DAT_100ae4a8 == 1) && (param_3 == 0xf7)) {
      param_3 = 0;
    }
    iVar1 = (**(code **)(*g_pGameRules + 0x14))();
    if (iVar1 != 0) {
      param_4 = param_4 * 2;
    }
    if (0xff < param_4) {
      param_4 = 0xff;
    }
    (*g_engfuncs.pfnMessageBegin)(4,0x17,(float *)param_1,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(0x73);
    (*g_engfuncs.pfnWriteCoord)((float)*param_1);
    (*g_engfuncs.pfnWriteCoord)((float)param_1[1]);
    (*g_engfuncs.pfnWriteCoord)((float)param_1[2]);
    (*g_engfuncs.pfnWriteShort)((int)DAT_102eed10);
    (*g_engfuncs.pfnWriteShort)((int)DAT_102eecfc);
    (*g_engfuncs.pfnWriteByte)(param_3);
    iVar1 = param_4 / 10;
    if (iVar1 < 3) {
LAB_100774fb:
      uStack0000001c = 0x10077507;
      (*g_engfuncs.pfnWriteByte)(3);
      uStack00000024 = 0x10077510;
      (*g_engfuncs.pfnMessageEnd)();
      return;
    }
    if (iVar1 < 0x10) {
      if (iVar1 < 3) goto LAB_100774fb;
    }
    else {
      iVar1 = 0x10;
    }
    uStack0000001c = 0x1007751f;
    (*g_engfuncs.pfnWriteByte)(iVar1);
    uStack00000024 = 0x10077528;
    (*g_engfuncs.pfnMessageEnd)();
  }
  return;
}

/* 10077530  FUN_10077530  (80 bytes)
 * undefined FUN_10077530(float * param_1)
 * called by: FUN_1001c7c0
 */
void __cdecl FUN_10077530(float *param_1)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
  fVar2 = (float10)(*g_engfuncs.pfnRandomFloat)(-1.0,1.0);
  fVar3 = (float10)(*g_engfuncs.pfnRandomFloat)(0.0,1.0);
  *param_1 = (float)fVar1;
  param_1[1] = (float)fVar2;
  param_1[2] = (float)fVar3;
  return;
}

/* 10077580  FUN_10077580  (80 bytes)
 * undefined FUN_10077580(int param_1, int param_2)
 * called by: CBaseEntity::TraceBleed, CBlood::Use, CGib::BounceGibTouch, CGib::StickyGibTouch, FUN_100349e0
 */
void __cdecl FUN_10077580(int param_1,int param_2)

{
  int iVar1;
  int in_stack_0000000c;
  
  iVar1 = UTIL_ShouldShowBlood(param_2);
  if (iVar1 != 0) {
    if (param_2 == 0xf7) {
      iVar1 = (*g_engfuncs.pfnRandomLong)(0,5);
      FUN_100775d0(in_stack_0000000c,iVar1 + 0xd);
      return;
    }
    iVar1 = (*g_engfuncs.pfnRandomLong)(0,5);
    FUN_100775d0(in_stack_0000000c,iVar1 + 0x13);
  }
  return;
}

/* 100775d0  FUN_100775d0  (262 bytes)
 * undefined FUN_100775d0(int param_1, int param_2)
 * called by: CEnvExplosion::Use, FUN_10014f00, FUN_1001a130, FUN_100347f0, FUN_10077580, FUN_100797b0
 */
/* WARNING: Removing unreachable block (ram,0x1007760f) */

void __cdecl FUN_100775d0(int param_1,int param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iValue;
  undefined4 uStack00000018;
  
  if (param_2 < 0) {
    return;
  }
  iValue = (&DAT_100a7804)[param_2 * 2];
  if (iValue < 0) {
    return;
  }
  if (*(float *)(param_1 + 0x10) == 1.0) {
    return;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    sVar2 = 0;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x30) + 0x7c);
    if ((piVar1 != (int *)0x0) && (iVar3 = (**(code **)(*piVar1 + 0xb0))(), iVar3 == 0)) {
      return;
    }
    iVar3 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_1 + 0x30));
    sVar2 = (short)iVar3;
  }
  iVar3 = 0x68;
  if (sVar2 == 0) {
    iVar3 = 0x74;
    if (iValue < 0x100) goto LAB_1007767c;
    iVar3 = 0x75;
  }
  else {
    if (iValue < 0x100) goto LAB_1007767c;
    iVar3 = 0x76;
  }
  iValue = iValue + -0x100;
LAB_1007767c:
  (*g_engfuncs.pfnMessageBegin)(0,0x17,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(iVar3);
  (*g_engfuncs.pfnWriteCoord)(*(float *)(param_1 + 0x14));
  (*g_engfuncs.pfnWriteCoord)(*(float *)(param_1 + 0x18));
  (*g_engfuncs.pfnWriteCoord)(*(float *)(param_1 + 0x1c));
  (*g_engfuncs.pfnWriteByte)(iValue);
  if (sVar2 != 0) {
    (*g_engfuncs.pfnWriteShort)((int)sVar2);
  }
  uStack00000018 = 0x100776d2;
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 100776e0  FUN_100776e0  (161 bytes)
 * undefined FUN_100776e0(int param_1, undefined4 param_2, int param_3, int param_4)
 * called by: FUN_100347f0
 */
void __cdecl FUN_100776e0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int in_stack_0000001c;
  undefined4 uStack00000024;
  
  if (((param_4 != 0) || ((-1 < param_3 && (param_3 = (&DAT_100a7804)[param_3 * 2], -1 < param_3))))
     && (*(float *)(param_1 + 0x10) != 1.0)) {
    (*g_engfuncs.pfnMessageBegin)(0,0x17,(float *)0x0,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(0x70);
    (*g_engfuncs.pfnWriteByte)(in_stack_0000001c);
    (*g_engfuncs.pfnWriteCoord)(*(float *)(param_1 + 0x14));
    (*g_engfuncs.pfnWriteCoord)(*(float *)(param_1 + 0x18));
    (*g_engfuncs.pfnWriteCoord)(*(float *)(param_1 + 0x1c));
    iVar1 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_1 + 0x30));
    (*g_engfuncs.pfnWriteShort)((int)(short)iVar1);
    (*g_engfuncs.pfnWriteByte)(param_3);
    uStack00000024 = 0x1007777e;
    (*g_engfuncs.pfnMessageEnd)();
  }
  return;
}

/* 10077790  FUN_10077790  (135 bytes)
 * undefined FUN_10077790(int param_1, int param_2)
 * called by: FUN_100797b0
 */
void __cdecl FUN_10077790(int param_1,int param_2)

{
  int iValue;
  int iVar1;
  undefined4 uStack0000001c;
  
  if (((-1 < param_2) && (iValue = (&DAT_100a7804)[param_2 * 2], -1 < iValue)) &&
     (*(float *)(param_1 + 0x10) != 1.0)) {
    (*g_engfuncs.pfnMessageBegin)(5,0x17,(float *)(param_1 + 0x14),(edict_t *)0x0);
    (*g_engfuncs.pfnWriteByte)(0x6d);
    (*g_engfuncs.pfnWriteCoord)(*(float *)(param_1 + 0x14));
    (*g_engfuncs.pfnWriteCoord)(*(float *)(param_1 + 0x18));
    (*g_engfuncs.pfnWriteCoord)(*(float *)(param_1 + 0x1c));
    iVar1 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(param_1 + 0x30));
    (*g_engfuncs.pfnWriteShort)((int)(short)iVar1);
    (*g_engfuncs.pfnWriteByte)(iValue);
    uStack0000001c = 0x10077813;
    (*g_engfuncs.pfnMessageEnd)();
  }
  return;
}

/* 10077870  FUN_10077870  (88 bytes)
 * undefined FUN_10077870(undefined4 * param_1)
 * called by: CBreakable::TraceAttack
 */
void __cdecl FUN_10077870(undefined4 *param_1)

{
  longlong lVar1;
  undefined4 uStack0000001c;
  
  (*g_engfuncs.pfnMessageBegin)(4,0x17,(float *)param_1,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(0x6f);
  (*g_engfuncs.pfnWriteCoord)((float)*param_1);
  (*g_engfuncs.pfnWriteCoord)((float)param_1[1]);
  (*g_engfuncs.pfnWriteCoord)((float)param_1[2]);
  lVar1 = __ftol();
  (*g_engfuncs.pfnWriteByte)((int)lVar1);
  uStack0000001c = 0x100778c6;
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 10077910  FUN_10077910  (152 bytes)
 * undefined FUN_10077910(float * param_1, char * param_2)
 * called by: CFuncRotating::KeyValue, EntvarsKeyvalue
 */
void __cdecl FUN_10077910(float *param_1,char *param_2)

{
  byte_conflict *pbVar1;
  char cVar2;
  byte_conflict bVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *extraout_ECX;
  int iVar7;
  int iVar8;
  char *pcVar9;
  byte_conflict *pbVar10;
  float *pfVar11;
  float10 fVar12;
  byte_conflict local_80;
  byte_conflict local_7f [127];
  
  uVar4 = 0xffffffff;
  do {
    pcVar9 = param_2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar9 = param_2 + 1;
    cVar2 = *param_2;
    param_2 = pcVar9;
  } while (cVar2 != '\0');
  uVar4 = ~uVar4;
  pcVar9 = pcVar9 + -uVar4;
  pbVar10 = &local_80;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pbVar10 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pbVar10 = pbVar10 + 4;
  }
  iVar8 = 0;
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pbVar10 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pbVar10 = pbVar10 + 1;
  }
  pbVar10 = &local_80;
  puVar6 = (undefined *)0x0;
  pfVar11 = param_1;
  do {
    fVar12 = atof(puVar6,pbVar10);
    bVar3 = *pbVar10;
    *pfVar11 = (float)fVar12;
    while ((bVar3 != '\0' && (bVar3 != ' '))) {
      pbVar1 = pbVar10 + 1;
      pbVar10 = pbVar10 + 1;
      bVar3 = *pbVar1;
    }
    if (*pbVar10 == '\0') break;
    pbVar10 = pbVar10 + 1;
    iVar8 = iVar8 + 1;
    pfVar11 = pfVar11 + 1;
    puVar6 = extraout_ECX;
  } while (iVar8 < 3);
  if ((iVar8 < 2) && (iVar8 = iVar8 + 1, iVar8 < 3)) {
    pfVar11 = param_1 + iVar8;
    for (iVar7 = 3 - iVar8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar11 = 0.0;
      pfVar11 = pfVar11 + 1;
    }
  }
  return;
}

/* 100779b0  FUN_100779b0  (157 bytes)
 * undefined FUN_100779b0(undefined4 * param_1, int param_2, char * param_3)
 * called by: CGameText::KeyValue
 */
void __cdecl FUN_100779b0(undefined4 *param_1,int param_2,char *param_3)

{
  byte_conflict *pbVar1;
  char cVar2;
  byte_conflict bVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  void *this;
  void *extraout_ECX;
  int iVar7;
  int iVar8;
  char *pcVar9;
  byte_conflict *pbVar10;
  undefined4 *puVar11;
  byte_conflict local_80;
  byte_conflict local_7f [127];
  
  uVar5 = 0xffffffff;
  do {
    pcVar9 = param_3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = param_3 + 1;
    cVar2 = *param_3;
    param_3 = pcVar9;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5;
  iVar8 = 0;
  pcVar9 = pcVar9 + -uVar5;
  pbVar10 = &local_80;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pbVar10 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pbVar10 = pbVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar10 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pbVar10 = pbVar10 + 1;
  }
  pbVar10 = &local_80;
  if (0 < param_2) {
    this = (void *)0x0;
    puVar11 = param_1;
    do {
      uVar4 = atoi(this,pbVar10);
      *puVar11 = uVar4;
      bVar3 = *pbVar10;
      while ((bVar3 != '\0' && (bVar3 != ' '))) {
        pbVar1 = pbVar10 + 1;
        pbVar10 = pbVar10 + 1;
        bVar3 = *pbVar1;
      }
      if (*pbVar10 == '\0') break;
      pbVar10 = pbVar10 + 1;
      iVar8 = iVar8 + 1;
      puVar11 = puVar11 + 1;
      this = extraout_ECX;
    } while (iVar8 < param_2);
  }
  iVar8 = iVar8 + 1;
  if (iVar8 < param_2) {
    puVar11 = param_1 + iVar8;
    for (iVar7 = param_2 - iVar8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
  }
  return;
}

/* 10077a50  FUN_10077a50  (334 bytes)
 * undefined FUN_10077a50(float * param_1, float * param_2, float * param_3)
 * called by: CBasePlayer::PlayerUse
 */
void __cdecl FUN_10077a50(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float local_18;
  float local_14;
  float local_4;
  
  local_14 = param_2[1];
  fVar1 = param_2[2];
  local_18 = *param_2;
  if (local_18 <= *param_3) {
    if (-*param_3 <= local_18) {
      local_18 = 0.0;
    }
    else {
      local_18 = local_18 + *param_3;
    }
  }
  else {
    local_18 = local_18 - *param_3;
  }
  if (local_14 <= param_3[1]) {
    if (-param_3[1] <= local_14) {
      local_14 = 0.0;
    }
    else {
      local_14 = local_14 + param_3[1];
    }
  }
  else {
    local_14 = local_14 - param_3[1];
  }
  if (fVar1 <= param_3[2]) {
    if (-param_3[2] <= fVar1) {
      fVar1 = 0.0;
    }
    else {
      fVar1 = fVar1 + param_3[2];
    }
  }
  else {
    fVar1 = fVar1 - param_3[2];
  }
  local_4 = SQRT(local_18 * local_18 + local_14 * local_14 + fVar1 * fVar1);
  if (local_4 == 0.0) {
    local_18 = 0.0;
    local_14 = 0.0;
    local_4 = 1.0;
  }
  else {
    local_4 = 1.0 / local_4;
    local_18 = local_4 * local_18;
    local_14 = local_4 * local_14;
    local_4 = local_4 * fVar1;
  }
  *param_1 = local_18;
  param_1[2] = local_4;
  param_1[1] = local_14;
  return;
}

/* 10077ba0  FUN_10077ba0  (190 bytes)
 * float10 FUN_10077ba0(undefined4 * param_1, float param_2, float param_3)
 * called by: FUN_10077c60
 */
float10 __cdecl FUN_10077ba0(undefined4 *param_1,float param_2,float param_3)

{
  float fVar1;
  int iVar2;
  undefined4 local_c;
  undefined4 local_8;
  float local_4;
  
  local_c = *param_1;
  local_8 = param_1[1];
  local_4 = param_2;
  iVar2 = FUN_10077360(&local_c);
  if (iVar2 != -3) {
    return (float10)param_2;
  }
  local_4 = param_3;
  iVar2 = FUN_10077360(&local_c);
  if (iVar2 != -3) {
    fVar1 = param_3 - param_2;
    while (1.0 < fVar1) {
      local_4 = fVar1 * 0.5 + param_2;
      iVar2 = FUN_10077360(&local_c);
      if (iVar2 == -3) {
        param_2 = local_4;
      }
      else {
        param_3 = local_4;
      }
      fVar1 = param_3 - param_2;
    }
    return (float10)local_4;
  }
  return (float10)param_3;
}

/* 10077c60  FUN_10077c60  (288 bytes)
 * undefined FUN_10077c60(undefined4 param_1, undefined4 param_2, float param_3, undefined4 param_4, undefined4 param_5, float param_6, int param_7)
 * called by: CBasePlayer::ShootBulletsPlayer, FUN_10014f00
 */
void __cdecl
FUN_10077c60(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            int param_7)

{
  int iValue;
  float10 fVar1;
  float in_stack_00000020;
  float in_stack_00000028;
  float in_stack_00000030;
  float in_stack_00000038;
  float in_stack_00000040;
  
  fVar1 = FUN_10077ba0(&param_1,param_3,param_3 + 256.0);
  if ((fVar1 - (float10)param_3 < (float10)8.0) &&
     (fVar1 = FUN_10077ba0(&param_4,param_6,param_6 + 256.0),
     fVar1 - (float10)param_6 < (float10)8.0)) {
    return;
  }
  iValue = param_7;
  if (0xff < param_7) {
    iValue = 0xff;
  }
  (*g_engfuncs.pfnMessageBegin)(0,0x17,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(0x72);
  (*g_engfuncs.pfnWriteCoord)(param_6);
  (*g_engfuncs.pfnWriteCoord)(in_stack_00000020);
  (*g_engfuncs.pfnWriteCoord)(in_stack_00000028);
  (*g_engfuncs.pfnWriteCoord)(in_stack_00000030);
  (*g_engfuncs.pfnWriteCoord)(in_stack_00000038);
  (*g_engfuncs.pfnWriteCoord)(in_stack_00000040);
  (*g_engfuncs.pfnWriteCoord)(in_stack_00000028);
  (*g_engfuncs.pfnWriteShort)((int)DAT_102ef3a0);
  (*g_engfuncs.pfnWriteByte)(iValue);
  (*g_engfuncs.pfnWriteCoord)(8.0);
  in_stack_00000030 = 2.6720716e-29;
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 10077dc0  FUN_10077dc0  (34 bytes)
 * undefined4 FUN_10077dc0(int * param_1)
 * called by: FUN_100797b0
 */
undefined4 __cdecl FUN_10077dc0(int *param_1)

{
  if (((param_1 != (int *)0x0) && (*param_1 == 0)) && ((param_1[0x89] & 0x40000000U) == 0)) {
    return 1;
  }
  return 0;
}

/* 10077ea0  FUN_10077ea0  (59 bytes)
 * undefined FUN_10077ea0(char * param_1, undefined1 * param_2)
 * called by: CGamePlayerEquip::KeyValue, CMultiManager::KeyValue
 */
void __cdecl FUN_10077ea0(char *param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    *param_2 = 0;
    return;
  }
  iVar3 = (int)param_2 - (int)param_1;
  do {
    if (cVar1 == '#') break;
    iVar2 = iVar2 + 1;
    param_1[iVar3] = *param_1;
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  param_2[iVar2] = 0;
  return;
}

/* 10077ee0  FUN_10077ee0  (11 bytes)
 * undefined FUN_10077ee0(undefined4 param_1)
 * called by: CChangeLevel::ChangeList, pfnRestore, pfnRestoreGlobalState, pfnSave, pfnSaveGlobalState, pfnSaveReadFields, pfnSaveWriteFields
 */
void __thiscall FUN_10077ee0(void *this,undefined4 param_1)

{
  *(undefined4 *)this = param_1;
  return;
}

/* 10077ef0  FUN_10077ef0  (26 bytes)
 * int FUN_10077ef0(int param_1)
 * called by: CChangeLevel::ChangeList, CSave::WriteFields
 */
int __thiscall FUN_10077ef0(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return -1;
  }
  iVar1 = FUN_10077f10(this,*(int *)(param_1 + 4));
  return iVar1;
}

/* 10077f10  FUN_10077f10  (29 bytes)
 * int FUN_10077f10(int param_1)
 * called by: CSave::WriteFields, FUN_10077ef0
 */
int __thiscall FUN_10077f10(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return -1;
  }
  iVar1 = FUN_10077f50(this,*(int *)(param_1 + 0x208));
  return iVar1;
}

/* 10077f30  FUN_10077f30  (29 bytes)
 * undefined FUN_10077f30(undefined4 param_1)
 * called by: CSave::WriteFields
 */
void __thiscall FUN_10077f30(void *this,int param_1)

{
  edict_t *peVar1;
  
  peVar1 = (*g_engfuncs.pfnPEntityOfEntOffset)(param_1);
  FUN_10077f50(this,(int)peVar1);
  return;
}

/* 10077f50  FUN_10077f50  (49 bytes)
 * int FUN_10077f50(int param_1)
 * called by: CSave::WriteFields, FUN_10077f10, FUN_10077f30
 */
int __thiscall FUN_10077f50(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)this;
  if ((iVar1 != 0) && (param_1 != 0)) {
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 0x20)) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x28) + 4);
      do {
        if (*piVar3 == param_1) {
          return iVar2;
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 6;
      } while (iVar2 < *(int *)(iVar1 + 0x20));
    }
  }
  return -1;
}

/* 10077f90  FUN_10077f90  (52 bytes)
 * int FUN_10077f90(int param_1)
 * called by: FUN_100788e0
 */
int __thiscall FUN_10077f90(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)this;
  if ((iVar1 != 0) && (-1 < param_1)) {
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 0x20)) {
      piVar3 = *(int **)(iVar1 + 0x28);
      do {
        if (*piVar3 == param_1) {
          return piVar3[1];
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 6;
      } while (iVar2 < *(int *)(iVar1 + 0x20));
    }
  }
  return 0;
}

/* 10077fd0  FUN_10077fd0  (66 bytes)
 * undefined4 FUN_10077fd0(int param_1, uint param_2)
 * called by: CChangeLevel::ChangeList
 */
undefined4 __thiscall FUN_10077fd0(void *this,int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  if (((iVar1 != 0) && (-1 < param_1)) && (param_1 <= *(int *)(iVar1 + 0x20))) {
    iVar2 = param_1 * 0x18;
    *(uint *)(*(int *)(iVar1 + 0x28) + 0x10 + iVar2) =
         *(uint *)(*(int *)(iVar1 + 0x28) + 0x10 + iVar2) | param_2;
    return *(undefined4 *)(*(int *)(*(int *)this + 0x28) + 0x10 + iVar2);
  }
  return 0;
}

/* 10078020  FUN_10078020  (37 bytes)
 * undefined FUN_10078020(int param_1)
 * called by: CRestore::ReadFields
 */
void __thiscall FUN_10078020(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) < param_1) {
      param_1 = *(int *)(iVar1 + 8);
    }
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) - param_1;
    *(int *)(*(int *)this + 8) = *(int *)(*(int *)this + 8) - param_1;
  }
  return;
}

/* 10078050  FUN_10078050  (31 bytes)
 * uint FUN_10078050(char * param_1)
 * called by: CSaveRestoreBuffer::TokenHash
 */
uint FUN_10078050(char *param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  
  uVar3 = 0;
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    uVar3 = (uVar3 >> 4 | uVar3 << 0x1c) ^ (int)cVar2;
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  return uVar3;
}

/* 10078150  FUN_10078150  (23 bytes)
 * undefined FUN_10078150(byte.conflict * param_1, uint param_2, undefined4 * param_3)
 * called by: CSave::WriteFields
 */
void __thiscall FUN_10078150(void *this,byte_conflict *param_1,uint param_2,undefined4 *param_3)

{
  CSave::BufferField(this,param_1,param_2,param_3);
  return;
}

/* 10078170  FUN_10078170  (30 bytes)
 * undefined FUN_10078170(byte.conflict * param_1, undefined4 * param_2, int param_3)
 * called by: CSave::WriteFields
 */
void __thiscall FUN_10078170(void *this,byte_conflict *param_1,undefined4 *param_2,int param_3)

{
  CSave::BufferField(this,param_1,param_3 * 4,param_2);
  return;
}

/* 10078190  FUN_10078190  (91 bytes)
 * undefined FUN_10078190(byte.conflict * param_1, float * param_2, float param_3)
 * called by: CSave::WriteFields
 */
void __thiscall FUN_10078190(void *this,byte_conflict *param_1,float *param_2,float param_3)

{
  float fVar1;
  
  fVar1 = param_3;
  CSave::BufferHeader(this,param_1,(int)param_3 * 4);
  if (0 < (int)fVar1) {
    do {
      param_3 = *param_2;
      if (*(int *)this != 0) {
        param_3 = param_3 - *(float *)(*(int *)this + 0x550);
      }
      CSave::BufferData(this,&param_3,4);
      param_2 = param_2 + 1;
      fVar1 = (float)((int)fVar1 + -1);
    } while (fVar1 != 0.0);
  }
  return;
}

/* 100781f0  FUN_100781f0  (137 bytes)
 * undefined FUN_100781f0(byte.conflict * param_1, int * param_2, int param_3)
 * called by: CSave::WriteFields
 */
void __thiscall FUN_100781f0(void *this,byte_conflict *param_1,int *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  
  uVar3 = 0;
  if (0 < param_3) {
    iVar4 = param_3;
    piVar5 = param_2;
    do {
      uVar2 = 0xffffffff;
      pcVar6 = gpGlobals->pStringBase + *piVar5;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      piVar5 = piVar5 + 1;
      iVar4 = iVar4 + -1;
      uVar3 = uVar3 + ~uVar2;
    } while (iVar4 != 0);
  }
  CSave::BufferHeader(this,param_1,uVar3);
  if (0 < param_3) {
    do {
      uVar3 = 0xffffffff;
      pcVar6 = gpGlobals->pStringBase + *param_2;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      CSave::BufferData(this,(undefined4 *)(gpGlobals->pStringBase + *param_2),~uVar3);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

/* 10078280  FUN_10078280  (43 bytes)
 * undefined FUN_10078280(byte.conflict * param_1, undefined4 * param_2, int param_3)
 * called by: CSave::WriteFields
 */
void __thiscall FUN_10078280(void *this,byte_conflict *param_1,undefined4 *param_2,int param_3)

{
  CSave::BufferHeader(this,param_1,param_3 * 0xc);
  CSave::BufferData(this,param_2,param_3 * 0xc);
  return;
}

/* 100782b0  FUN_100782b0  (188 bytes)
 * undefined FUN_100782b0(byte.conflict * param_1, float * param_2, int param_3)
 * called by: CSave::WriteFields
 */
void __thiscall FUN_100782b0(void *this,byte_conflict *param_1,float *param_2,int param_3)

{
  int iVar1;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_8;
  float local_4;
  
  CSave::BufferHeader(this,param_1,param_3 * 0xc);
  if (0 < param_3) {
    do {
      local_24 = *param_2;
      local_20 = param_2[1];
      iVar1 = *(int *)this;
      local_1c = param_2[2];
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x52c) != 0)) {
        local_24 = local_24 - *(float *)(iVar1 + 0x544);
        local_20 = local_20 - *(float *)(iVar1 + 0x548);
        local_1c = local_1c - *(float *)(iVar1 + 0x54c);
        local_18 = local_24;
        local_14 = local_20;
        local_10 = local_1c;
        local_8 = local_20;
        local_4 = local_1c;
      }
      CSave::BufferData(this,&local_24,0xc);
      param_2 = param_2 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

/* 100787c0  FUN_100787c0  (38 bytes)
 * undefined4 FUN_100787c0(int param_1, int param_2)
 * called by: CSave::WriteFields
 */
undefined4 FUN_100787c0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      if (*(char *)(iVar1 + param_1) != '\0') {
        return 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 1;
}

/* 100788e0  FUN_100788e0  (775 bytes)
 * int FUN_100788e0(int param_1, void * param_2, int param_3, int param_4, undefined4 param_5, byte.conflict * param_6, char * param_7)
 * called by: CRestore::ReadFields
 */
int __thiscall
FUN_100788e0(void *this,int param_1,void *param_2,int param_3,int param_4,undefined4 param_5,
            byte_conflict *param_6,char *param_7)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  edict_t *pEdict;
  int iVar6;
  float *pName;
  char *szValue;
  int iVar7;
  float *pfVar8;
  EHANDLE *this_00;
  char *pcVar9;
  float *pfVar10;
  float local_20;
  float local_18;
  float local_14;
  float local_10;
  
  local_18 = 0.0;
  local_10 = 0.0;
  iVar7 = *(int *)this;
  local_20 = 0.0;
  local_14 = 0.0;
  if ((iVar7 != 0) && (local_20 = *(float *)(iVar7 + 0x550), *(int *)(iVar7 + 0x52c) != 0)) {
    local_18 = *(float *)(iVar7 + 0x544);
    local_14 = *(float *)(iVar7 + 0x548);
    local_10 = *(float *)(iVar7 + 0x54c);
  }
  iVar7 = 0;
  if (0 < param_3) {
    do {
      iVar6 = (iVar7 + param_4) % param_3;
      piVar2 = (int *)(iVar6 * 0x10 + (int)param_2);
      uVar3 = FUN_100887b0(param_2,(byte_conflict *)piVar2[1],param_6);
      if (uVar3 == 0) {
        if ((*(int *)((int)this + 4) != 0) && ((*(byte *)((int)piVar2 + 0xe) & 1) != 0)) {
          return iVar6;
        }
        iVar7 = 0;
        if ((short)piVar2[3] < 1) {
          return iVar6;
        }
        goto LAB_100789cf;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_3);
  }
  return -1;
LAB_100789cf:
  iVar4 = *(int *)(&DAT_100a6d70 + *piVar2 * 4) * iVar7;
  pfVar8 = (float *)(piVar2[2] + iVar4 + param_1);
  pName = (float *)(param_7 + iVar4);
  switch(*piVar2) {
  case 0:
    *pfVar8 = *pName;
    break;
  case 1:
  case 0x10:
  case 0x11:
    iVar4 = iVar7;
    szValue = param_7;
    if (0 < iVar7) {
      do {
        cVar1 = *szValue;
        while (cVar1 != '\0') {
          pcVar9 = szValue + 1;
          szValue = szValue + 1;
          cVar1 = *pcVar9;
        }
        szValue = szValue + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = -1;
    pcVar9 = szValue;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    if (iVar4 == -2) {
      *pfVar8 = 0.0;
    }
    else {
      fVar5 = (float)(*g_engfuncs.pfnAllocString)(szValue);
      *pfVar8 = fVar5;
      if ((fVar5 != 0.0) && (*(int *)((int)this + 8) != 0)) {
        if (*(int *)param_4 == 0x10) {
          (*g_engfuncs.pfnPrecacheModel)(gpGlobals->pStringBase + (int)fVar5);
        }
        else if (*(int *)param_4 == 0x11) {
          (*g_engfuncs.pfnPrecacheSound)(gpGlobals->pStringBase + (int)fVar5);
        }
      }
    }
    break;
  case 2:
    pEdict = (edict_t *)FUN_10077f90(this,(int)*pName);
    if (pEdict == (edict_t *)0x0) {
LAB_10078ba2:
      *pfVar8 = 0.0;
    }
    else {
      fVar5 = (float)(*g_engfuncs.pfnEntOffsetOfPEntity)(pEdict);
      *pfVar8 = fVar5;
    }
    break;
  case 3:
    iVar4 = FUN_10077f90(this,(int)*pName);
    if (iVar4 == 0) goto LAB_10078ba2;
    *pfVar8 = *(float *)(iVar4 + 0x7c);
    break;
  case 4:
    this_00 = (EHANDLE *)((int)pfVar8 + (8 - *(int *)(&DAT_100a6d70 + *piVar2 * 4)) * iVar7);
    iVar4 = FUN_10077f90(this,(int)*pName);
    if (iVar4 == 0) {
      EHANDLE::operator=(this_00,0);
    }
    else {
      EHANDLE::operator=(this_00,*(int *)(iVar4 + 0x7c));
    }
    break;
  case 5:
    iVar4 = FUN_10077f90(this,(int)*pName);
    if (iVar4 == 0) goto LAB_10078ba2;
    *pfVar8 = (float)(iVar4 + 0x80);
    break;
  case 6:
    fVar5 = (float)FUN_10077f90(this,(int)*pName);
    *pfVar8 = fVar5;
    break;
  case 7:
    *pfVar8 = *pName;
    pfVar8[1] = pName[1];
    pfVar8[2] = pName[2];
    break;
  case 8:
    *pfVar8 = local_18 + *pName;
    pfVar8[1] = local_14 + pName[1];
    pfVar8[2] = local_10 + pName[2];
    break;
  case 9:
  case 10:
  case 0xc:
    *pfVar8 = *pName;
    break;
  case 0xb:
    iVar4 = -1;
    pfVar10 = pName;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *(char *)pfVar10;
      pfVar10 = (float *)((int)pfVar10 + 1);
    } while (cVar1 != '\0');
    if (iVar4 == -2) goto LAB_10078ba2;
    fVar5 = (float)(*g_engfuncs.pfnFunctionFromName)((char *)pName);
    *pfVar8 = fVar5;
    break;
  case 0xd:
    *(undefined2 *)pfVar8 = *(undefined2 *)pName;
    break;
  case 0xe:
    *(undefined1 *)pfVar8 = *(undefined1 *)pName;
    break;
  case 0xf:
    *pfVar8 = *pName + local_20;
    break;
  default:
    (*g_engfuncs.pfnAlertMessage)(at_error,s_Bad_field_type_100a71c4);
  }
  iVar7 = iVar7 + 1;
  if ((short)piVar2[3] <= iVar7) {
    return iVar6;
  }
  goto LAB_100789cf;
}

/* 10078d80  FUN_10078d80  (55 bytes)
 * undefined FUN_10078d80(ushort * param_1)
 * called by: CRestore::ReadFields
 */
void __thiscall FUN_10078d80(void *this,ushort *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_10078dc0(this);
  *param_1 = (ushort)uVar1;
  uVar1 = FUN_10078dc0(this);
  param_1[1] = (ushort)uVar1;
  uVar2 = FUN_10078e00(this);
  *(undefined4 *)(param_1 + 2) = uVar2;
  FUN_10078e90(this,(uint)*param_1);
  return;
}

/* 10078dc0  FUN_10078dc0  (28 bytes)
 * uint FUN_10078dc0(void * param_1)
 * called by: CRestore::ReadFields, FUN_10078d80
 */
uint __fastcall FUN_10078dc0(void *param_1)

{
  undefined2 extraout_var;
  undefined4 local_4;
  
  local_4 = 0;
  FUN_10078e10(param_1,&local_4,2);
  return CONCAT22(extraout_var,(undefined2)local_4);
}

/* 10078de0  FUN_10078de0  (27 bytes)
 * undefined4 FUN_10078de0(void * param_1)
 * called by: CRestore::ReadFields
 */
undefined4 __fastcall FUN_10078de0(void *param_1)

{
  undefined4 local_4;
  
  local_4 = 0;
  FUN_10078e10(param_1,&local_4,4);
  return local_4;
}

/* 10078e00  FUN_10078e00  (11 bytes)
 * undefined4 FUN_10078e00(int * param_1)
 * called by: FUN_10078d80
 */
undefined4 __fastcall FUN_10078e00(int *param_1)

{
  if (*param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(*param_1 + 4);
}

/* 10078e10  FUN_10078e10  (115 bytes)
 * undefined FUN_10078e10(undefined4 * param_1, uint param_2)
 * called by: FUN_10078dc0, FUN_10078de0, FUN_10078e90
 */
void __thiscall FUN_10078e10(void *this,undefined4 *param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  piVar1 = *(int **)this;
  if (piVar1 != (int *)0x0) {
    if (piVar1[1] - *piVar1 < piVar1[3]) {
      if (piVar1[3] < (int)(piVar1[2] + param_2)) {
        (*g_engfuncs.pfnAlertMessage)(at_error,s_Restore_overflow__100a7258);
        *(undefined4 *)(*(int *)this + 8) = *(undefined4 *)(*(int *)this + 0xc);
        return;
      }
      if (param_1 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)piVar1[1];
        for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *param_1 = *puVar3;
          puVar3 = puVar3 + 1;
          param_1 = param_1 + 1;
        }
        for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined1 *)param_1 = *(undefined1 *)puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
          param_1 = (undefined4 *)((int)param_1 + 1);
        }
      }
      *(uint *)(*(int *)this + 4) = *(int *)(*(int *)this + 4) + param_2;
      *(int *)(*(int *)this + 8) = *(int *)(*(int *)this + 8) + param_2;
    }
  }
  return;
}

/* 10078e90  FUN_10078e90  (15 bytes)
 * undefined FUN_10078e90(uint param_1)
 * called by: FUN_10078d80
 */
void __thiscall FUN_10078e90(void *this,uint param_1)

{
  FUN_10078e10(this,(undefined4 *)0x0,param_1);
  return;
}

/* 10078eb0  FUN_10078eb0  (11 bytes)
 * undefined FUN_10078eb0()
 */
void FUN_10078eb0(void)

{
  DAT_102eeb70 = 0;
  return;
}

/* 10078ed0  FUN_10078ed0  (17 bytes)
 * undefined FUN_10078ed0()
 */
void FUN_10078ed0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_102eeb74;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

/* 10078f00  FUN_10078f00  (17 bytes)
 * undefined FUN_10078f00()
 */
void FUN_10078f00(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_102eebf4;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

/* 10078f30  FUN_10078f30  (17 bytes)
 * undefined FUN_10078f30()
 */
void FUN_10078f30(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_102eec78;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

/* 10078f60  FUN_10078f60  (11 bytes)
 * undefined FUN_10078f60()
 */
void FUN_10078f60(void)

{
  DAT_102eec74 = 0;
  return;
}

/* 10078f70  FUN_10078f70  (20 bytes)
 * undefined FUN_10078f70(undefined4 * param_1)
 * called by: FUN_1002b830
 */
void __fastcall FUN_10078f70(undefined4 *param_1)

{
  param_1[6] = 0;
  *param_1 = &PTR_FUN_10095328;
  param_1[7] = 0;
  param_1[5] = 0;
  return;
}

/* 10078f90  FUN_10078f90  (30 bytes)
 * undefined4 * FUN_10078f90(byte.conflict param_1)
 */
undefined4 * __thiscall FUN_10078f90(void *this,byte_conflict param_1)

{
  FUN_10078fb0(this);
  if ((param_1 & 1) != 0) {
    FUN_1007dd7f(this);
  }
  return this;
}

/* 10078fb0  FUN_10078fb0  (7 bytes)
 * undefined FUN_10078fb0(undefined4 * param_1)
 * called by: FUN_1002b850, FUN_10078f90
 */
void __fastcall FUN_10078fb0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_10095328;
  return;
}

/* 10079050  FUN_10079050  (31 bytes)
 * undefined FUN_10079050(double param_1)
 * called by: CHalfLifeMultiplay::Think, CHalfLifeTeamplay::Think
 */
void __thiscall FUN_10079050(void *this,double param_1)

{
  double dVar1;
  
  dVar1 = param_1 + *(double *)((int)this + 0x18);
  *(double *)((int)this + 0x18) = dVar1;
  if (0.3 <= dVar1) {
    FUN_10079330((int)this);
  }
  return;
}

/* 10079070  FUN_10079070  (144 bytes)
 * undefined FUN_10079070(undefined4 param_1)
 * called by: FUN_1002bf80
 */
void FUN_10079070(edict_t *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (*g_engfuncs.pfnIndexOfEdict)(param_1);
  iVar2 = iVar2 + -1;
  (&DAT_102eec74)[iVar2 >> 5] = (&DAT_102eec74)[iVar2 >> 5] | 1 << ((byte)iVar2 & 0x1f);
  iVar4 = 0;
  do {
    bVar1 = (byte)iVar4;
    iVar3 = iVar4 >> 5;
    iVar4 = iVar4 + 1;
    (&DAT_102eebf4)[iVar2 + iVar3] = (&DAT_102eebf4)[iVar2 + iVar3] & ~(1 << (bVar1 & 0x1f));
  } while (iVar4 < 0x20);
  iVar4 = 0;
  do {
    iVar3 = iVar4 >> 5;
    bVar1 = (byte)iVar4;
    iVar4 = iVar4 + 1;
    (&DAT_102eec78)[iVar2 + iVar3] = (&DAT_102eec78)[iVar2 + iVar3] & ~(1 << (bVar1 & 0x1f));
  } while (iVar4 < 0x20);
  return;
}

/* 100792d0  FUN_100792d0  (88 bytes)
 * undefined FUN_100792d0(void)
 * called by: CVoiceGameMgr::ClientCommand
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100792d0(void)

{
  byte_conflict *in_stack_00001004;
  
  FUN_1007e2e0();
  if (_DAT_100a727c != 0.0) {
    FUN_1007e78c(&stack0x00000000,0x1000,in_stack_00001004,(undefined4 *)&stack0x00001008);
    (*g_engfuncs.pfnAlertMessage)(at_console,&DAT_1009cd14);
  }
  return;
}

/* 10079330  FUN_10079330  (575 bytes)
 * undefined FUN_10079330(int param_1)
 * called by: CVoiceGameMgr::ClientCommand, FUN_10079050
 */
void __fastcall FUN_10079330(int param_1)

{
  int iValue;
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  float10 extraout_ST0;
  uint uStack_10;
  int *piStack_c;
  int iStack_8;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  (*g_engfuncs.pfnCVarGetFloat)(s_sv_alltalk_100a729c);
  iStack_8 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      iVar4 = iStack_8;
      iValue = iStack_8 + 1;
      piStack_c = (int *)UTIL_PlayerByIndex(iValue);
      if ((piStack_c != (int *)0x0) && (iVar2 = (**(code **)(*piStack_c + 0xc0))(), iVar2 != 0)) {
        bVar7 = (byte)iVar4 & 0x1f;
        if (((&DAT_102eec74)[iVar4 >> 5] & 1 << bVar7) != 0) {
          (*g_engfuncs.pfnMessageBegin)
                    (1,*(int *)(param_1 + 0xc),(float *)0x0,*(edict_t **)(piStack_c[1] + 0x208));
          (*g_engfuncs.pfnMessageEnd)();
        }
        uStack_10 = 0;
        if (((1 << bVar7 & (&DAT_102eeb70)[iVar4 >> 5]) != 0) &&
           (iVar2 = 0, 0 < *(int *)(param_1 + 0x14))) {
          do {
            iVar6 = iVar2 + 1;
            piVar3 = (int *)UTIL_PlayerByIndex(iVar6);
            if (((piVar3 != (int *)0x0) && (iVar4 = (**(code **)(*piVar3 + 0xc0))(), iVar4 != 0)) &&
               ((extraout_ST0 != (float10)0.0 ||
                (cVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 4))(piStack_c,piVar3),
                cVar1 != '\0')))) {
              (&uStack_10)[iVar2 >> 5] = (&uStack_10)[iVar2 >> 5] | 1 << ((byte)iVar2 & 0x1f);
            }
            iVar4 = iStack_8;
            iVar2 = iVar6;
          } while (iVar6 < *(int *)(param_1 + 0x14));
        }
        iVar2 = iVar4 * 4;
        uVar5 = FUN_10079570(&uStack_10,(int)(&DAT_102eebf4 + iVar4));
        if ((char)uVar5 == '\0') {
LAB_100794a7:
          (&DAT_102eebf4)[iVar4] = uStack_10;
          (&DAT_102eec78)[iVar4] = (&DAT_102eeb74)[iVar4];
          (*g_engfuncs.pfnMessageBegin)
                    (1,*(int *)(param_1 + 8),(float *)0x0,*(edict_t **)(piStack_c[1] + 0x208));
          (*g_engfuncs.pfnWriteLong)(iValue);
          (*g_engfuncs.pfnWriteLong)((&DAT_102eeb74)[iVar4]);
          uStack_10 = 0x100794f6;
          (*g_engfuncs.pfnMessageEnd)();
        }
        else {
          iVar6 = 0;
          do {
            if (*(int *)((int)&DAT_102eeb74 + iVar2) != *(int *)((int)&DAT_102eec78 + iVar2))
            goto LAB_100794a7;
            iVar6 = iVar6 + 1;
            iVar2 = iVar2 + 4;
          } while (iVar6 < 1);
        }
        iVar2 = 0;
        if (0 < *(int *)(param_1 + 0x14)) {
          do {
            uVar5 = 1 << ((byte)iVar2 & 0x1f);
            if ((*(uint *)(&stack0xffffffe4 + (iVar2 >> 5) * 4) & uVar5) == 0) {
LAB_10079529:
              uStack_10 = uStack_10 & 0xffffff00;
            }
            else {
              uStack_10 = CONCAT31(uStack_10._1_3_,1);
              if ((uVar5 & (&DAT_102eeb74)[(iVar2 >> 5) + iVar4]) != 0) goto LAB_10079529;
            }
            iVar2 = iVar2 + 1;
            (*g_engfuncs.pfnVoice_SetClientListening)((int)piStack_c,iVar2,uStack_10 & 0xff);
          } while (iVar2 < *(int *)(param_1 + 0x14));
        }
      }
      iStack_8 = iValue;
    } while (iValue < *(int *)(param_1 + 0x14));
  }
  return;
}

/* 10079570  FUN_10079570  (44 bytes)
 * uint FUN_10079570(int param_1)
 * called by: FUN_10079330
 */
uint __thiscall FUN_10079570(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1 - (int)this;
  do {
    if (*(int *)this != *(int *)(iVar1 + (int)this)) {
      return (uint)this & 0xffffff00;
    }
    iVar2 = iVar2 + 1;
    this = (void *)((int)this + 4);
  } while (iVar2 < 1);
  return CONCAT31((int3)((uint)this >> 8),1);
}

/* 100796a0  FUN_100796a0  (18 bytes)
 * undefined FUN_100796a0(void)
 * called by: CBasePlayer::ShootBulletsPlayer, CM61Grenade::WaitThink, CTSFlag::Fall, CTSKnife::BounceTouch, CTSKnife::WaitThink, CTSShrapnel::BounceTouch, CTSStunt::CheckForBreakables, CTSWorldGun::Fall, FUN_100145f0, FUN_10014f00, FUN_1001a130, FUN_10047280, ... (17 total)
 */
void FUN_100796a0(void)

{
  DAT_102eed00 = 0;
  DAT_102eed04 = 0;
  DAT_102eed08 = 0;
  return;
}

/* 100796c0  FUN_100796c0  (47 bytes)
 * undefined FUN_100796c0(undefined4 param_1, undefined4 param_2)
 * called by: CBasePlayer::ShootBulletsPlayer, CM61Grenade::WaitThink, CTSFlag::Fall, CTSKnife::BounceTouch, CTSKnife::WaitThink, CTSShrapnel::BounceTouch, CTSStunt::CheckForBreakables, CTSWorldGun::Fall, FUN_100145f0, FUN_10014f00, FUN_1001a130, FUN_10047280, ... (18 total)
 */
void __cdecl FUN_100796c0(undefined4 param_1,undefined4 param_2)

{
  if (DAT_102eed00 != (int *)0x0) {
    (**(code **)(*DAT_102eed00 + 0x50))(param_1,param_2,DAT_102eed04,DAT_102eed08);
    DAT_100da9da = 0;
  }
  return;
}

/* 100796f0  FUN_100796f0  (92 bytes)
 * undefined FUN_100796f0(undefined4 param_1, int param_2, float param_3, uint param_4)
 * called by: CBaseEntity::TraceAttack, CBaseMonster::TraceAttack, CBasePlayer::TraceAttack
 */
void __cdecl FUN_100796f0(undefined4 param_1,int param_2,float param_3,uint param_4)

{
  if (param_2 != 0) {
    DAT_102eed08 = DAT_102eed08 | param_4;
    if (param_2 != DAT_102eed00) {
      FUN_100796c0(param_1,param_1);
      DAT_102eed00 = param_2;
      DAT_102eed04 = param_3 + 0.0;
      return;
    }
    DAT_102eed04 = DAT_102eed04 + param_3;
  }
  return;
}

/* 10079750  FUN_10079750  (34 bytes)
 * undefined FUN_10079750(void)
 * called by: CBaseEntity::TraceAttack, CBaseMonster::TraceAttack
 */
void FUN_10079750(void)

{
  longlong lVar1;
  int in_stack_00000010;
  
  lVar1 = __ftol();
  FUN_10077420((undefined4 *)&stack0x00000004,&DAT_100ae4b8,in_stack_00000010,(int)lVar1);
  return;
}

/* 10079780  FUN_10079780  (35 bytes)
 * undefined FUN_10079780(int * param_1, undefined4 param_2)
 * called by: FUN_100797b0
 */
void __cdecl FUN_10079780(int *param_1,undefined4 param_2)

{
  if (param_1 == (int *)0x0) {
    (*g_engfuncs.pfnRandomLong)(0,4);
    return;
  }
  (**(code **)(*param_1 + 0x94))(param_2);
  return;
}

/* 100797b0  FUN_100797b0  (182 bytes)
 * undefined FUN_100797b0(int param_1, int param_2)
 * called by: FUN_10014f00
 */
void __cdecl FUN_100797b0(int param_1,int param_2)

{
  int iVar1;
  edict_t *peVar2;
  entvars_t *peVar3;
  int *piVar4;
  
  iVar1 = FUN_10077dc0(*(int **)(param_1 + 0x30));
  if (iVar1 != 0) {
    peVar2 = *(edict_t **)(param_1 + 0x30);
    if (peVar2 == (edict_t *)0x0) {
      peVar3 = (entvars_t *)0x0;
    }
    else {
      peVar3 = &peVar2->v;
    }
    if (peVar3->solid != 4) {
      if (peVar2 == (edict_t *)0x0) {
        peVar3 = (entvars_t *)0x0;
      }
      else {
        peVar3 = &peVar2->v;
      }
      if (peVar3->movetype != 0xd) {
        return;
      }
    }
    piVar4 = (int *)0x0;
    if ((peVar2 != (edict_t *)0x0) &&
       (iVar1 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar2), iVar1 != 0)) {
      peVar2 = *(edict_t **)(param_1 + 0x30);
      if ((peVar2 == (edict_t *)0x0) &&
         (peVar2 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peVar2 == (edict_t *)0x0)) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = peVar2->pvPrivateData;
      }
    }
    if (param_2 != 5) {
      iVar1 = FUN_10079780(piVar4,2);
      FUN_10077790(param_1,iVar1);
      return;
    }
    iVar1 = FUN_10079780(piVar4,0x80);
    FUN_100775d0(param_1,iVar1);
  }
  return;
}

/* 10079870  FUN_10079870  (82 bytes)
 * undefined FUN_10079870(byte.conflict * param_1)
 * called by: UTIL_PrecacheOtherWeapon
 */
void __thiscall FUN_10079870(void *this,byte_conflict *param_1)

{
  int iVar1;
  uint uVar2;
  void *extraout_ECX;
  undefined4 *puVar3;
  
  puVar3 = &DAT_102eed18;
  while (((byte_conflict *)*puVar3 == (byte_conflict *)0x0 ||
         (uVar2 = FUN_100887b0(this,(byte_conflict *)*puVar3,param_1), this = extraout_ECX,
         uVar2 != 0))) {
    puVar3 = puVar3 + 2;
    if (0x102eee17 < (int)puVar3) {
      DAT_102ef3a4 = DAT_102ef3a4 + 1;
      if (0x1f < DAT_102ef3a4) {
        DAT_102ef3a4 = 0;
      }
      iVar1 = DAT_102ef3a4;
      (&DAT_102eed18)[DAT_102ef3a4 * 2] = param_1;
      (&DAT_102eed1c)[iVar1 * 2] = iVar1;
      return;
    }
  }
  return;
}

/* 10079d30  FUN_10079d30  (156 bytes)
 * undefined FUN_10079d30(int param_1)
 * called by: CTSGun::Spawn
 */
void __fastcall FUN_10079d30(int param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 6;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 2;
  UTIL_SetOrigin(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + 8);
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  UTIL_SetSize(*(int *)(param_1 + 4),&local_c,&local_18);
  *(code **)(param_1 + 0x14) = CBasePlayerItem::DefaultTouch;
  *(code **)(param_1 + 0x10) = CBasePlayerItem::FallThink;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.1;
  return;
}

/* 10079f40  FUN_10079f40  (30 bytes)
 * undefined FUN_10079f40(int * param_1)
 * called by: CBasePlayer::AddPlayerItem
 */
void __fastcall FUN_10079f40(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*g_pGameRules + 0x78))(param_1);
  if (iVar1 == 1) {
    (**(code **)(*param_1 + 0xe4))();
  }
  return;
}

/* 1007a0d0  FUN_1007a0d0  (55 bytes)
 * undefined4 FUN_1007a0d0(float param_1, float param_2, int param_3)
 * called by: CBasePlayerWeapon::ItemPostFrame
 */
undefined4 __cdecl FUN_1007a0d0(float param_1,float param_2,int param_3)

{
  if (param_3 == 0) {
    if (param_1 <= param_2) {
      return 1;
    }
  }
  else if (param_1 <= 0.0) {
    return 1;
  }
  return 0;
}

/* 1007a130  FUN_1007a130  (15 bytes)
 * undefined4 FUN_1007a130(undefined4 param_1)
 * called by: CBasePlayerWeapon::AddToPlayer
 */
undefined4 __thiscall FUN_1007a130(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x70) = param_1;
  return 1;
}

/* 1007a3b0  FUN_1007a3b0  (189 bytes)
 * bool FUN_1007a3b0(int param_1, undefined4 param_2, int param_3, undefined4 param_4)
 * called by: CBasePlayerWeapon::ExtractAmmo
 */
bool __thiscall
FUN_1007a3b0(void *this,int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  void *this_00;
  int iVar1;
  int iVar2;
  
  if (param_3 < 1) {
    *(undefined4 *)((int)this + 0xa4) = 0xffffffff;
  }
  else if (*(int *)((int)this + 0xa4) == 0) {
    if (param_1 < param_3) {
      param_3 = param_1;
    }
    *(int *)((int)this + 0xa4) = param_3;
    iVar1 = (**(code **)(**(int **)((int)this + 0x70) + 0x84))(param_1 - param_3,param_2,param_4);
    goto LAB_1007a3e3;
  }
  iVar1 = (**(code **)(**(int **)((int)this + 0x70) + 0x84))(param_1,param_2,param_4);
LAB_1007a3e3:
  if (0 < iVar1) {
    *(int *)((int)this + 0x9c) = iVar1;
    iVar2 = FUN_10035970(*(void **)((int)this + 0x70),this);
    if (iVar2 != 0) {
      this_00 = *(void **)(*(int *)((int)this + 4) + 0x208);
      EMIT_SOUND_DYN(this_00,this_00,3,s_items_9mmclip1_wav_100a5460,0x3f800000,0x3f4ccccd,0);
    }
  }
  return 0 < iVar1;
}

/* 1007a470  FUN_1007a470  (98 bytes)
 * bool FUN_1007a470(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: CBasePlayerWeapon::ExtractAmmo
 */
bool __thiscall FUN_1007a470(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  void *this_00;
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)((int)this + 0x70) + 0x84))(param_1,param_2,param_3);
  if (0 < iVar1) {
    *(int *)((int)this + 0xa0) = iVar1;
    this_00 = *(void **)(*(int *)((int)this + 4) + 0x208);
    EMIT_SOUND_DYN(this_00,this_00,3,s_items_9mmclip1_wav_100a5460,0x3f800000,0x3f4ccccd,0);
  }
  return 0 < iVar1;
}

/* 1007acb0  FUN_1007acb0  (10 bytes)
 * undefined FUN_1007acb0()
 */
void FUN_1007acb0(void)

{
  FUN_1007b020((undefined4 *)&DAT_102ef3b0);
  return;
}

/* 1007b020  FUN_1007b020  (12 bytes)
 * undefined4 * FUN_1007b020(undefined4 * param_1)
 * called by: FUN_1007acb0
 */
undefined4 * __fastcall FUN_1007b020(undefined4 *param_1)

{
  FUN_1007b030(param_1);
  return param_1;
}

/* 1007b030  FUN_1007b030  (14 bytes)
 * undefined FUN_1007b030(undefined4 * param_1)
 * called by: FUN_1007b020, FUN_1007b350
 */
void __fastcall FUN_1007b030(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

/* 1007b040  FUN_1007b040  (104 bytes)
 * byte.conflict * FUN_1007b040(int param_1)
 * called by: CEnvGlobal::Spawn, CEnvGlobal::Use, FUN_1007b1a0, FUN_1007b1c0, FUN_1007b1d0, FUN_1007b300
 */
byte_conflict * __thiscall FUN_1007b040(void *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  if (param_1 == 0) {
    return (byte_conflict *)0x0;
  }
  pbVar2 = *(byte **)this;
  do {
    pbVar3 = (byte *)(gpGlobals->pStringBase + param_1);
    pbVar5 = pbVar2;
    if (pbVar2 == (byte *)0x0) {
      return (byte_conflict *)0x0;
    }
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_1007b08f:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_1007b094;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_1007b08f;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_1007b094:
    if (iVar4 == 0) {
      return pbVar2;
    }
    pbVar2 = *(byte **)(pbVar2 + 100);
  } while( true );
}

/* 1007b100  FUN_1007b100  (145 bytes)
 * undefined FUN_1007b100(int param_1, int param_2, int param_3)
 * called by: CEnvGlobal::Spawn, CEnvGlobal::Use, FUN_1007b260, pfnRestore, pfnSpawn
 */
void __thiscall FUN_1007b100(void *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  int *piVar8;
  
  piVar2 = FUN_1007e7dc(0x68,1);
  piVar2[0x19] = *(int *)this;
  *(int **)this = piVar2;
  uVar3 = 0xffffffff;
  pcVar6 = gpGlobals->pStringBase + param_1;
  do {
    pcVar7 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  piVar5 = (int *)(pcVar7 + -uVar3);
  piVar8 = piVar2;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *piVar8 = *piVar5;
    piVar5 = piVar5 + 1;
    piVar8 = piVar8 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)piVar8 = (char)*piVar5;
    piVar5 = (int *)((int)piVar5 + 1);
    piVar8 = (int *)((int)piVar8 + 1);
  }
  uVar3 = 0xffffffff;
  pcVar6 = gpGlobals->pStringBase + param_2;
  do {
    pcVar7 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  piVar5 = (int *)(pcVar7 + -uVar3);
  piVar8 = piVar2 + 0x10;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *piVar8 = *piVar5;
    piVar5 = piVar5 + 1;
    piVar8 = piVar8 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)piVar8 = (char)*piVar5;
    piVar5 = (int *)((int)piVar5 + 1);
    piVar8 = (int *)((int)piVar8 + 1);
  }
  piVar2[0x18] = param_3;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return;
}

/* 1007b1a0  FUN_1007b1a0  (24 bytes)
 * undefined FUN_1007b1a0(int param_1, undefined4 param_2)
 * called by: CBaseEntity::UpdateOnRemove, CEnvGlobal::Use
 */
void __thiscall FUN_1007b1a0(void *this,int param_1,undefined4 param_2)

{
  byte_conflict *pbVar1;
  
  pbVar1 = FUN_1007b040(this,param_1);
  if (pbVar1 != (byte_conflict *)0x0) {
    *(undefined4 *)(pbVar1 + 0x60) = param_2;
  }
  return;
}

/* 1007b1c0  FUN_1007b1c0  (13 bytes)
 * undefined FUN_1007b1c0(int param_1)
 * called by: pfnRestore, pfnSpawn
 */
void __thiscall FUN_1007b1c0(void *this,int param_1)

{
  FUN_1007b040(this,param_1);
  return;
}

/* 1007b1d0  FUN_1007b1d0  (25 bytes)
 * undefined4 FUN_1007b1d0(int param_1)
 * called by: CAutoTrigger::Think, CEnvGlobal::Use, CMultiSource::IsTriggered
 */
undefined4 __thiscall FUN_1007b1d0(void *this,int param_1)

{
  byte_conflict *pbVar1;
  
  pbVar1 = FUN_1007b040(this,param_1);
  if (pbVar1 != (byte_conflict *)0x0) {
    return *(undefined4 *)(pbVar1 + 0x60);
  }
  return 0;
}

/* 1007b1f0  FUN_1007b1f0  (105 bytes)
 * undefined4 FUN_1007b1f0(void * param_1)
 * called by: pfnSaveGlobalState
 */
undefined4 __thiscall FUN_1007b1f0(void *this,void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = CSave::WriteFields(param_1,(byte_conflict *)s_GLOBAL_100a7bbc,(int)this,0x100a7960,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)this;
  iVar3 = 0;
  if (0 < *(int *)((int)this + 4)) {
    do {
      if (iVar1 == 0) {
        return 1;
      }
      iVar2 = CSave::WriteFields(param_1,&DAT_100a7bb4,iVar1,0x100a7970,3);
      if (iVar2 == 0) {
        return 0;
      }
      iVar1 = *(int *)(iVar1 + 100);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 4));
  }
  return 1;
}

/* 1007b260  FUN_1007b260  (150 bytes)
 * undefined4 FUN_1007b260(void * param_1)
 * called by: pfnRestoreGlobalState
 */
undefined4 __thiscall FUN_1007b260(void *this,void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_68 [64];
  undefined1 auStack_28 [32];
  int local_8;
  
  FUN_1007b350(this);
  iVar1 = CRestore::ReadFields(param_1,(byte_conflict *)s_GLOBAL_100a7bbc,(int)this,&DAT_100a7960,1)
  ;
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)((int)this + 4);
  iVar3 = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (0 < iVar1) {
    do {
      iVar2 = CRestore::ReadFields(param_1,&DAT_100a7bb4,(int)local_68,&DAT_100a7970,3);
      if (iVar2 == 0) {
        return 0;
      }
      FUN_1007b100(this,(int)(local_68 + -(int)gpGlobals->pStringBase),
                   (int)(auStack_28 + -(int)gpGlobals->pStringBase),local_8);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 1;
}

/* 1007b300  FUN_1007b300  (71 bytes)
 * undefined FUN_1007b300(int param_1, int param_2)
 * called by: pfnRestore
 */
void __thiscall FUN_1007b300(void *this,int param_1,int param_2)

{
  char cVar1;
  byte_conflict *pbVar2;
  uint uVar3;
  uint uVar4;
  byte_conflict *pbVar5;
  char *pcVar6;
  char *pcVar7;
  
  pbVar2 = FUN_1007b040(this,param_1);
  if (pbVar2 != (byte_conflict *)0x0) {
    uVar3 = 0xffffffff;
    pcVar6 = gpGlobals->pStringBase + param_2;
    do {
      pcVar7 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pbVar5 = (byte_conflict *)(pcVar7 + -uVar3);
    pbVar2 = pbVar2 + 0x40;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pbVar2 = *(undefined4 *)pbVar5;
      pbVar5 = pbVar5 + 4;
      pbVar2 = pbVar2 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pbVar2 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      pbVar2 = pbVar2 + 1;
    }
  }
  return;
}

/* 1007b350  FUN_1007b350  (38 bytes)
 * undefined FUN_1007b350(undefined4 * param_1)
 * called by: FUN_1007b260, pfnResetGlobalState
 */
void __fastcall FUN_1007b350(undefined4 *param_1)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  pvVar2 = (LPVOID)*param_1;
  while (pvVar2 != (LPVOID)0x0) {
    pvVar1 = *(LPVOID *)((int)pvVar2 + 100);
    FUN_1007e869(pvVar2);
    pvVar2 = pvVar1;
  }
  FUN_1007b030(param_1);
  return;
}

/* 1007b870  FUN_1007b870  (104 bytes)
 * undefined FUN_1007b870(void)
 * called by: CWorld::Precache
 */
void FUN_1007b870(void)

{
  edict_t *peVar1;
  int iVar2;
  entvars_t *peVar3;
  int className;
  
  className = (int)s_bodyque_100a7e18 - (int)gpGlobals->pStringBase;
  DAT_102ef3a8 = (*g_engfuncs.pfnCreateNamedEntity)(className);
  if (DAT_102ef3a8 == (edict_t *)0x0) {
    peVar3 = (entvars_t *)0x0;
  }
  else {
    peVar3 = &DAT_102ef3a8->v;
  }
  iVar2 = 3;
  do {
    peVar1 = (*g_engfuncs.pfnCreateNamedEntity)(className);
    peVar3->owner = peVar1;
    if (peVar1 == (edict_t *)0x0) {
      peVar3 = (entvars_t *)0x0;
    }
    else {
      peVar3 = &peVar1->v;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  peVar3->owner = DAT_102ef3a8;
  return;
}

/* 1007c280  FUN_1007c280  (39 bytes)
 * undefined FUN_1007c280(void * param_1)
 * called by: CXenPLight::Think
 */
void __fastcall FUN_1007c280(void *param_1)

{
  int iVar1;
  
  CBaseDelay::SUB_UseTargets(param_1,param_1,1,0);
  if (*(int *)((int)param_1 + 0x74) != 0) {
    iVar1 = *(int *)(*(int *)((int)param_1 + 0x74) + 4);
    *(uint *)(iVar1 + 0x118) = *(uint *)(iVar1 + 0x118) & 0xffffff7f;
  }
  return;
}

/* 1007c2b0  FUN_1007c2b0  (39 bytes)
 * undefined FUN_1007c2b0(void * param_1)
 * called by: CXenPLight::Think
 */
void __fastcall FUN_1007c2b0(void *param_1)

{
  int iVar1;
  
  CBaseDelay::SUB_UseTargets(param_1,param_1,0,0);
  if (*(int *)((int)param_1 + 0x74) != 0) {
    iVar1 = *(int *)(*(int *)((int)param_1 + 0x74) + 4);
    *(uint *)(iVar1 + 0x118) = *(uint *)(iVar1 + 0x118) | 0x80;
  }
  return;
}

/* 1007cca0  FUN_1007cca0  (151 bytes)
 * undefined FUN_1007cca0()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007cca0(void)

{
  DAT_102efbc8 = 0x42b40000;
  DAT_102efbcc = 0xc1c80000;
  _DAT_102efbd0 = 0;
  _DAT_102efbd4 = 0x41c80000;
  DAT_102efbd8 = 0x42960000;
  _DAT_102efbdc = 0;
  _DAT_102efbe0 = 0xc1700000;
  _DAT_102efbe4 = 0xc2c80000;
  _DAT_102efbe8 = 0;
  _DAT_102efbec = 0xc2b40000;
  _DAT_102efbf0 = 0xc20c0000;
  _DAT_102efbf4 = 0;
  _DAT_102efbf8 = 0xc2b40000;
  _DAT_102efbfc = 0x42700000;
  _DAT_102efc00 = 0;
  return;
}

/* 1007d2c0  FUN_1007d2c0  (23 bytes)
 * undefined FUN_1007d2c0(void)
 * called by: FUN_100821e7
 */
void FUN_1007d2c0(void)

{
  void *extraout_ECX;
  
  FUN_1007d2d8();
  DAT_102efc08 = FUN_1007eaaa();
  FUN_1007ea5a(extraout_ECX);
  return;
}

/* 1007d2d7  FUN_1007d2d7  (1 bytes)
 * undefined FUN_1007d2d7()
 */
void FUN_1007d2d7(void)

{
  return;
}

/* 1007d2d8  FUN_1007d2d8  (56 bytes)
 * undefined FUN_1007d2d8(void)
 * called by: FUN_1007d2c0
 */
void FUN_1007d2d8(void)

{
  PTR___fptrap_100a8338 = FUN_1007eb2d;
  PTR___fptrap_100a8334 = __cfltcvt;
  PTR___fptrap_100a833c = __fassign;
  PTR___fptrap_100a8340 = FUN_1007ead3;
  PTR___fptrap_100a8344 = FUN_1007eb7b;
  PTR___fptrap_100a8348 = __cfltcvt;
  return;
}

/* 1007d424  FUN_1007d424  (45 bytes)
 * undefined FUN_1007d424(undefined * UNRECOVERED_JUMPTABLE)
 * called by: FUN_1007f43d
 */
void FUN_1007d424(undefined *UNRECOVERED_JUMPTABLE)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x1007d44f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}

/* 1007d458  FUN_1007d458  (7 bytes)
 * undefined FUN_1007d458(undefined4 param_1, undefined * UNRECOVERED_JUMPTABLE)
 * called by: FUN_1007f5fd, FUN_1007f7c1
 */
void FUN_1007d458(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x1007d45d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}

/* 1007d45f  FUN_1007d45f  (7 bytes)
 * undefined FUN_1007d45f(undefined4 param_1, undefined * UNRECOVERED_JUMPTABLE)
 * called by: FUN_1007f5fd
 */
void FUN_1007d45f(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x1007d464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}

/* 1007d466  FUN_1007d466  (79 bytes)
 * undefined FUN_1007d466(PVOID param_1, PEXCEPTION_RECORD param_2)
 * called by: FUN_1007d61a, FUN_1007f43d
 */
void FUN_1007d466(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x1007d48e,param_2,(PVOID)0x0);
  param_2->ExceptionFlags = param_2->ExceptionFlags & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}

/* 1007d4b5  FUN_1007d4b5  (54 bytes)
 * undefined4 FUN_1007d4b5(PEXCEPTION_RECORD param_1, PVOID param_2, DWORD param_3, undefined4 param_4)
 * called by: FUN_10088c58, FUN_10088c86, FUN_10088c98, FUN_10088cb8, FUN_10088ce1, FUN_10088d01, FUN_10088d21, FUN_10088d41, FUN_10088d61, FUN_10088d9c, FUN_10088dc1, FUN_10088ddb, ... (15 total)
 */
undefined4 __cdecl
FUN_1007d4b5(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  int *in_EAX;
  undefined4 uVar1;
  
  uVar1 = FUN_1007f034(param_1,param_2,param_3,param_4,in_EAX,0,(PVOID)0x0,'\0');
  return uVar1;
}

/* 1007d4eb  FUN_1007d4eb  (84 bytes)
 * undefined4 FUN_1007d4eb(undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4, int param_5)
 * called by: FUN_1007f4b8
 */
undefined4 __cdecl
FUN_1007d4eb(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  void *local_18;
  code *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = param_2;
  local_14 = FUN_1007d53f;
  local_8 = param_4 + 1;
  local_c = param_1;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  uVar1 = __CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_18;
  return uVar1;
}

/* 1007d53f  FUN_1007d53f  (37 bytes)
 * undefined FUN_1007d53f(PEXCEPTION_RECORD param_1, PVOID param_2, DWORD param_3)
 */
void __cdecl FUN_1007d53f(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  FUN_1007f034(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),param_2,'\0');
  return;
}

/* 1007d564  FUN_1007d564  (182 bytes)
 * undefined4 FUN_1007d564(undefined4 * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 * called by: FUN_1007f282
 */
undefined4 __cdecl
FUN_1007d564(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  undefined4 **ppuVar3;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  code *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  int local_8;
  
  local_c = &stack0xfffffffc;
  local_10 = &stack0xffffffbc;
  local_28 = FUN_1007d61a;
  local_24 = param_5;
  local_20 = param_2;
  local_1c = param_6;
  local_18 = param_7;
  local_8 = 0;
  local_14 = 0x1007d5ec;
  local_2c = ExceptionList;
  ExceptionList = &local_2c;
  local_34 = param_1;
  local_30 = param_3;
  ppuVar3 = &local_34;
  uVar2 = *param_1;
  pDVar1 = FUN_1007f921();
  (*(code *)pDVar1[0x1a])(uVar2,ppuVar3);
  if (local_8 != 0) {
    *local_2c = *(undefined4 *)ExceptionList;
  }
  ExceptionList = local_2c;
  return 0;
}

/* 1007d61a  FUN_1007d61a  (114 bytes)
 * undefined4 FUN_1007d61a(PEXCEPTION_RECORD param_1, PVOID param_2, DWORD param_3)
 */
undefined4 __cdecl FUN_1007d61a(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  undefined4 uVar1;
  
  if ((param_1->ExceptionFlags & 0x66) != 0) {
    *(undefined4 *)((int)param_2 + 0x24) = 1;
    return 1;
  }
  FUN_1007f034(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),*(PVOID *)((int)param_2 + 0x14),'\x01');
  if (*(int *)((int)param_2 + 0x24) == 0) {
    FUN_1007d466(param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x1007d684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((int)param_2 + 0x18))();
  return uVar1;
}

/* 1007d68f  FUN_1007d68f  (123 bytes)
 * int FUN_1007d68f(int param_1, int param_2, int param_3, uint * param_4, uint * param_5)
 * called by: FUN_1007f0cf, FUN_1007f282
 */
int __cdecl FUN_1007d68f(int param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + 0x10);
  uVar4 = uVar5;
  uVar3 = uVar5;
  while (uVar2 = uVar4, -1 < param_2) {
    if (uVar5 == 0xffffffff) {
      FUN_1007fa89();
    }
    uVar5 = uVar5 - 1;
    if (((*(int *)(iVar1 + 4 + uVar5 * 0x14) < param_3) &&
        (param_3 <= *(int *)(iVar1 + uVar5 * 0x14 + 8))) || (uVar4 = uVar2, uVar5 == 0xffffffff)) {
      param_2 = param_2 + -1;
      uVar4 = uVar5;
      uVar3 = uVar2;
    }
  }
  uVar5 = uVar5 + 1;
  *param_4 = uVar5;
  *param_5 = uVar3;
  if ((*(uint *)(param_1 + 0xc) < uVar3) || (uVar3 < uVar5)) {
    FUN_1007fa89();
  }
  return iVar1 + uVar5 * 0x14;
}

/* 1007d72c  FUN_1007d72c  (34 bytes)
 * undefined FUN_1007d72c()
 */
undefined4 FUN_1007d72c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((*(uint *)(param_1 + 4) & 6) != 0) {
    *param_4 = param_2;
    uVar1 = 3;
  }
  return uVar1;
}

/* 1007d7e2  FUN_1007d7e2  (24 bytes)
 * undefined FUN_1007d7e2(void)
 * called by: FUN_1008664c, __local_unwind2
 */
void FUN_1007d7e2(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_100a80a8 = *(undefined4 *)(unaff_EBP + 8);
  DAT_100a80a4 = in_EAX;
  DAT_100a80ac = unaff_EBP;
  return;
}

/* 1007da70  FUN_1007da70  (46 bytes)
 * uint FUN_1007da70(int param_1)
 * called by: SENTENCEG_Init, TEXTURETYPE_LoadMapMaterials, TEXTURETYPE_LoadStandardMaterials
 */
uint __thiscall FUN_1007da70(void *this,int param_1)

{
  uint uVar1;
  
  if (1 < DAT_100a8324) {
    uVar1 = FUN_1007e1c6(this,param_1,0x103);
    return uVar1;
  }
  return *(ushort *)(PTR_DAT_100a8118 + param_1 * 2) & 0x103;
}

/* 1007da9e  FUN_1007da9e  (40 bytes)
 * uint FUN_1007da9e(int param_1)
 * called by: SENTENCEG_Init
 */
uint __thiscall FUN_1007da9e(void *this,int param_1)

{
  uint uVar1;
  
  if (1 < DAT_100a8324) {
    uVar1 = FUN_1007e1c6(this,param_1,4);
    return uVar1;
  }
  return (byte)PTR_DAT_100a8118[param_1 * 2] & 4;
}

/* 1007dac6  FUN_1007dac6  (40 bytes)
 * uint FUN_1007dac6(int param_1)
 * called by: CTSGameRules::PlayerVote, FUN_1002c850, FUN_10080401, FUN_10080e8e, Host_Say, TEXTURETYPE_LoadMapMaterials, TEXTURETYPE_LoadStandardMaterials
 */
uint __thiscall FUN_1007dac6(void *this,int param_1)

{
  uint uVar1;
  
  if (1 < DAT_100a8324) {
    uVar1 = FUN_1007e1c6(this,param_1,8);
    return uVar1;
  }
  return (byte)PTR_DAT_100a8118[param_1 * 2] & 8;
}

/* 1007daee  FUN_1007daee  (46 bytes)
 * uint FUN_1007daee(int param_1)
 * called by: FUN_1002c850
 */
uint __thiscall FUN_1007daee(void *this,int param_1)

{
  uint uVar1;
  
  if (1 < DAT_100a8324) {
    uVar1 = FUN_1007e1c6(this,param_1,0x107);
    return uVar1;
  }
  return *(ushort *)(PTR_DAT_100a8118 + param_1 * 2) & 0x107;
}

/* 1007db1c  FUN_1007db1c  (46 bytes)
 * uint FUN_1007db1c(int param_1)
 * called by: CTSGameRules::PlayerVote, Host_Say
 */
uint __thiscall FUN_1007db1c(void *this,int param_1)

{
  uint uVar1;
  
  if (1 < DAT_100a8324) {
    uVar1 = FUN_1007e1c6(this,param_1,0x157);
    return uVar1;
  }
  return *(ushort *)(PTR_DAT_100a8118 + param_1 * 2) & 0x157;
}

/* 1007dc8a  FUN_1007dc8a  (10 bytes)
 * undefined FUN_1007dc8a(undefined4 param_1)
 * called by: CCyclerSprite::Animate, CGlow::Animate, CSprite::Animate
 */
void __fastcall FUN_1007dc8a(undefined4 param_1)

{
  __cintrindisp2(param_1,0x100a80b0);
  return;
}

/* 1007dc94  FUN_1007dc94  (30 bytes)
 * undefined FUN_1007dc94()
 */
float10 FUN_1007dc94(void)

{
  ushort in_FPUStatusWord;
  float10 in_ST0;
  float10 in_ST1;
  float10 extraout_ST1;
  
  do {
    if (DAT_102efc08 == 1) {
      in_ST1 = FUN_10081ddc();
      in_ST0 = extraout_ST1;
    }
    else {
      in_ST1 = in_ST1 - (float10)(unkint10)(in_ST1 / in_ST0) * in_ST0;
    }
  } while ((in_FPUStatusWord & 0x400) != 0);
  return in_ST1;
}

/* 1007dcc0  FUN_1007dcc0  (126 bytes)
 * int FUN_1007dcc0(int param_1)
 * called by: FUN_1007dd3e
 */
int __cdecl FUN_1007dcc0(int param_1)

{
  SIZE_T SVar1;
  int *piVar2;
  
  FUN_100822d9();
  SVar1 = FUN_1008243d(DAT_102f1318);
  if (SVar1 < (uint)((int)DAT_102f1314 + (4 - (int)DAT_102f1318))) {
    SVar1 = FUN_1008243d(DAT_102f1318);
    piVar2 = FUN_10082305(DAT_102f1318,(uint *)(SVar1 + 0x10));
    if (piVar2 == (int *)0x0) {
      param_1 = 0;
      goto LAB_1007dd35;
    }
    DAT_102f1314 = piVar2 + ((int)DAT_102f1314 - (int)DAT_102f1318 >> 2);
    DAT_102f1318 = piVar2;
  }
  *DAT_102f1314 = param_1;
  DAT_102f1314 = DAT_102f1314 + 1;
LAB_1007dd35:
  FUN_100822e2();
  return param_1;
}

/* 1007dd3e  FUN_1007dd3e  (18 bytes)
 * int FUN_1007dd3e(int param_1)
 * called by: CBasePlayer::ShootBulletsPlayer, CTSGun::AlternateAttack, FUN_10022b70, FUN_10022c20, FUN_1002b840, FUN_1002b880, FUN_1004c200, FUN_100556a0, FUN_10055a10, FUN_10055f30
 */
int __cdecl FUN_1007dd3e(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_1007dcc0(param_1);
  return (iVar1 != 0) - 1;
}

/* 1007dd50  FUN_1007dd50  (47 bytes)
 * undefined FUN_1007dd50()
 */
void FUN_1007dd50(void)

{
  DAT_102f1318 = _malloc(0x80);
  if (DAT_102f1318 == (undefined4 *)0x0) {
    __amsg_exit(0x18);
  }
  *DAT_102f1318 = 0;
  DAT_102f1314 = DAT_102f1318;
  return;
}

/* 1007dd7f  FUN_1007dd7f  (11 bytes)
 * undefined FUN_1007dd7f(LPVOID param_1)
 * called by: CWorld::Precache, FUN_10022b80, FUN_10022c30, FUN_1002b960, FUN_1002c720, FUN_1002d1d0, FUN_10078f90, Unwind@10088d70, Unwind@10088d7b, Unwind@10088d86, Unwind@10088d91
 */
void __cdecl FUN_1007dd7f(LPVOID param_1)

{
  FUN_1007e869(param_1);
  return;
}

/* 1007dd90  FUN_1007dd90  (25 bytes)
 * undefined FUN_1007dd90(void)
 * called by: CEnvLight::KeyValue
 */
void FUN_1007dd90(void)

{
  float10 in_ST0;
  float10 in_ST1;
  
  FUN_1007ddb2(SUB84((double)in_ST1,0),(uint)((ulonglong)(double)in_ST1 >> 0x20),
               SUB84((double)in_ST0,0),(uint)((ulonglong)(double)in_ST0 >> 0x20));
  return;
}

/* 1007ddb2  FUN_1007ddb2  (467 bytes)
 * undefined1[10] FUN_1007ddb2(int param_1, uint param_2, int param_3, uint param_4)
 * called by: FUN_1007dd90
 */
/* decompilation failed: 
Low-level Error: Overlapping input varnodes */

/* 1007df85  FUN_1007df85  (40 bytes)
 * undefined FUN_1007df85(void)
 * called by: FUN_1007ddb2
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007df85(void)

{
  float10 in_ST0;
  
  if (ROUND(in_ST0) == in_ST0) {
    return;
  }
  return;
}

/* 1007dfad  FUN_1007dfad  (9 bytes)
 * undefined FUN_1007dfad()
 */
void FUN_1007dfad(void)

{
  __amsg_exit(0x19);
  return;
}

/* 1007dfc0  FUN_1007dfc0  (20 bytes)
 * undefined FUN_1007dfc0(void)
 */
void FUN_1007dfc0(void)

{
  float10 in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_10082788(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_1007dfdd(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  return;
}

/* 1007dfdd  FUN_1007dfdd  (174 bytes)
 * undefined FUN_1007dfdd(int param_1, uint param_2)
 * called by: FUN_1007dfc0
 */
void __cdecl FUN_1007dfdd(int param_1,uint param_2)

{
  uint in_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  float10 in_ST0;
  float10 extraout_ST0;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (param_1 != 0)) {
      FUN_1008272c();
    }
LAB_1007e06c:
    if (DAT_102efc04 == 0) {
      __startOneArgErrorHandling(&DAT_100a8110,0xd,in_FPUControlWord,unaff_retaddr,param_1,param_2);
      return;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      in_EAX = FUN_10082715();
      in_ST0 = extraout_ST0;
    }
    if (in_EAX < 0x3ff00000) {
      fpatan(SQRT(((float10)1 - in_ST0) * ((float10)1 + in_ST0)),in_ST0);
    }
    else if ((0x3ff00000 < in_EAX) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) goto LAB_1007e06c;
    if (DAT_102efc04 == 0) {
      __math_exit(&DAT_100a8110,0xd,unaff_retaddr,param_1,param_2);
      return;
    }
  }
  return;
}

/* 1007e08b  FUN_1007e08b  (111 bytes)
 * uint FUN_1007e08b(uint param_1)
 * called by: FUN_10036630, TEXTURETYPE_LoadMapMaterials, TEXTURETYPE_LoadStandardMaterials
 */
uint __cdecl FUN_1007e08b(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_102efcdc == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_102f1308);
    bVar1 = DAT_102f1304 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_102f1308);
      this = (void *)0x13;
      FUN_10082ab6(0x13);
    }
    param_1 = FUN_1007e0fa(this,param_1);
    if (bVar1) {
      FUN_10082b17(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_102f1308);
    }
  }
  return param_1;
}

/* 1007e0fa  FUN_1007e0fa  (204 bytes)
 * uint FUN_1007e0fa(uint param_1)
 * called by: FUN_1007e08b
 */
uint __thiscall FUN_1007e0fa(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_102efcdc == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar1 = param_1 - 0x20;
    }
  }
  else {
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_100a8324 < 2) {
        uVar2 = (byte)PTR_DAT_100a8118[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_1007e1c6(this,param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_100a8118[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      iVar3 = 1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_10082b2c(DAT_102efcdc,0x200,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        uVar1 = (uint)local_8 & 0xff;
      }
      else {
        uVar1 = (uint)local_8 & 0xffff;
      }
    }
  }
  return uVar1;
}

/* 1007e1c6  FUN_1007e1c6  (117 bytes)
 * uint FUN_1007e1c6(int param_1, uint param_2)
 * called by: FUN_10036630, FUN_1007da70, FUN_1007da9e, FUN_1007dac6, FUN_1007daee, FUN_1007db1c, FUN_1007e0fa, FUN_1007ead3, FUN_10080401, FUN_10080e26, FUN_100855bc, FUN_1008602e, ... (15 total)
 */
uint __thiscall FUN_1007e1c6(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_100a8118 + param_1 * 2);
  }
  else {
    if ((PTR_DAT_100a8118[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_10082d7b(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}

/* 1007e23b  FUN_1007e23b  (164 bytes)
 * uint FUN_1007e23b(byte.conflict * param_1, byte.conflict * param_2)
 * called by: CHalfLifeTeamplay::RecountTeams, CTSGameRules::SetTeamList, CTSGameRules::SetTeamModelList, FUN_1004b090, FUN_1004dd20
 */
uint __cdecl FUN_1007e23b(byte_conflict *param_1,byte_conflict *param_2)

{
  byte bVar1;
  DWORD *pDVar2;
  int iVar3;
  byte *pbVar4;
  byte local_24 [32];
  
  pDVar2 = FUN_1007f921();
  pbVar4 = local_24;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    pbVar4[0] = 0;
    pbVar4[1] = 0;
    pbVar4[2] = 0;
    pbVar4[3] = 0;
    pbVar4 = pbVar4 + 4;
  }
  do {
    bVar1 = *param_2;
    local_24[bVar1 >> 3] = local_24[bVar1 >> 3] | '\x01' << (bVar1 & 7);
    param_2 = param_2 + 1;
  } while (bVar1 != 0);
  if (param_1 == (byte_conflict *)0x0) {
    param_1 = (byte_conflict *)pDVar2[6];
  }
  for (; (bVar1 = *param_1, pbVar4 = param_1, (local_24[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) != 0
         && (bVar1 != 0)); param_1 = param_1 + 1) {
  }
  do {
    bVar1 = *pbVar4;
    if (bVar1 == 0) {
LAB_1007e2ca:
      pDVar2[6] = (DWORD)pbVar4;
      return -(uint)(param_1 != pbVar4) & (uint)param_1;
    }
    if ((local_24[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) != 0) {
      *pbVar4 = 0;
      pbVar4 = pbVar4 + 1;
      goto LAB_1007e2ca;
    }
    pbVar4 = pbVar4 + 1;
  } while( true );
}

/* 1007e2e0  FUN_1007e2e0  (47 bytes)
 * undefined FUN_1007e2e0(void)
 * called by: CChangeLevel::ChangeList, FUN_1004dd20, FUN_100792d0, FUN_10082b2c, FUN_10082d7b, FUN_10088981
 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_1007e2e0(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  puVar1 = &stack0x00000004;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x1000;
  }
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}

/* 1007e3ee  FUN_1007e3ee  (49 bytes)
 * undefined4 * FUN_1007e3ee(LPCSTR param_1, char * param_2, uint param_3)
 * called by: fopen
 */
undefined4 * __cdecl FUN_1007e3ee(LPCSTR param_1,char *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_100834b2();
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar2 = FUN_10083342(param_1,param_2,param_3,puVar1);
  FUN_10082fd2((uint)puVar1);
  return puVar2;
}

/* 1007e461  FUN_1007e461  (232 bytes)
 * uint FUN_1007e461(char * param_1, uint param_2, uint param_3, int * param_4)
 * called by: fread
 */
uint __cdecl FUN_1007e461(char *param_1,uint param_2,uint param_3,int *param_4)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  piVar1 = param_4;
  pcVar6 = (char *)(param_2 * param_3);
  if (pcVar6 == (char *)0x0) {
    param_3 = 0;
  }
  else {
    pcVar5 = param_1;
    param_1 = pcVar6;
    if ((*(ushort *)(param_4 + 3) & 0x10c) == 0) {
      param_4 = (int *)0x1000;
    }
    else {
      param_4 = (int *)param_4[6];
    }
    do {
      if (((*(ushort *)(piVar1 + 3) & 0x10c) == 0) ||
         (pcVar2 = (char *)piVar1[1], pcVar2 == (char *)0x0)) {
        if (param_1 < param_4) {
          uVar4 = FUN_10083266(piVar1);
          if (uVar4 == 0xffffffff) goto LAB_1007e53d;
          *pcVar5 = (char)uVar4;
          param_4 = (int *)piVar1[6];
          pcVar5 = pcVar5 + 1;
          param_1 = param_1 + -1;
        }
        else {
          pcVar2 = param_1;
          if (param_4 != (int *)0x0) {
            pcVar2 = param_1 + -((uint)param_1 % (uint)param_4);
          }
          iVar3 = FUN_1008357a(piVar1[4],pcVar5,pcVar2);
          if (iVar3 == 0) {
            piVar1[3] = piVar1[3] | 0x10;
LAB_1007e53d:
            return (uint)((int)pcVar6 - (int)param_1) / param_2;
          }
          if (iVar3 == -1) {
            piVar1[3] = piVar1[3] | 0x20;
            goto LAB_1007e53d;
          }
          param_1 = param_1 + -iVar3;
          pcVar5 = pcVar5 + iVar3;
        }
      }
      else {
        pcVar7 = param_1;
        if (pcVar2 <= param_1) {
          pcVar7 = pcVar2;
        }
        FUN_100837c0((undefined4 *)pcVar5,(undefined4 *)*piVar1,(uint)pcVar7);
        param_1 = param_1 + -(int)pcVar7;
        piVar1[1] = piVar1[1] - (int)pcVar7;
        *piVar1 = (int)(pcVar7 + *piVar1);
        pcVar5 = pcVar5 + (int)pcVar7;
      }
    } while (param_1 != (char *)0x0);
  }
  return param_3;
}

/* 1007e578  FUN_1007e578  (266 bytes)
 * uint FUN_1007e578(char * param_1, uint param_2, uint param_3, int * param_4)
 * called by: fwrite
 */
uint __cdecl FUN_1007e578(char *param_1,uint param_2,uint param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar1 = param_4;
  piVar6 = (int *)(param_2 * param_3);
  if (piVar6 == (int *)0x0) {
    param_3 = 0;
  }
  else {
    piVar5 = piVar6;
    if ((*(ushort *)(param_4 + 3) & 0x10c) == 0) {
      param_4 = (int *)0x1000;
    }
    else {
      param_4 = (int *)param_4[6];
    }
    do {
      if (((piVar1[3] & 0x108U) == 0) || (piVar7 = (int *)piVar1[1], piVar7 == (int *)0x0)) {
        if (param_4 <= piVar5) {
          if (((piVar1[3] & 0x108U) != 0) && (iVar2 = FUN_1008315d(piVar1), iVar2 != 0)) {
LAB_1007e679:
            return (uint)((int)piVar6 - (int)piVar5) / param_2;
          }
          piVar7 = piVar5;
          if (param_4 != (int *)0x0) {
            piVar7 = (int *)((int)piVar5 - (uint)piVar5 % (uint)param_4);
          }
          piVar3 = (int *)FUN_10083af5(piVar1[4],param_1,(uint)piVar7);
          if ((piVar3 == (int *)0xffffffff) ||
             (piVar5 = (int *)((int)piVar5 - (int)piVar3), piVar3 < piVar7)) {
            piVar1[3] = piVar1[3] | 0x20;
            goto LAB_1007e679;
          }
          goto LAB_1007e630;
        }
        uVar4 = FUN_1007fadf((int)*param_1,piVar1);
        if (uVar4 == 0xffffffff) goto LAB_1007e679;
        param_1 = param_1 + 1;
        param_4 = (int *)piVar1[6];
        piVar5 = (int *)((int)piVar5 - 1);
        if ((int)param_4 < 1) {
          param_4 = (int *)0x1;
        }
      }
      else {
        piVar3 = piVar5;
        if (piVar7 <= piVar5) {
          piVar3 = piVar7;
        }
        FUN_100837c0((undefined4 *)*piVar1,(undefined4 *)param_1,(uint)piVar3);
        piVar1[1] = piVar1[1] - (int)piVar3;
        *piVar1 = *piVar1 + (int)piVar3;
        piVar5 = (int *)((int)piVar5 - (int)piVar3);
LAB_1007e630:
        param_1 = param_1 + (int)piVar3;
      }
    } while (piVar5 != (int *)0x0);
  }
  return param_3;
}

/* 1007e682  FUN_1007e682  (44 bytes)
 * int FUN_1007e682(int * param_1, int param_2, DWORD param_3)
 * called by: save_weapon_value
 */
int __cdecl FUN_1007e682(int *param_1,int param_2,DWORD param_3)

{
  int iVar1;
  
  FUN_10082f80((uint)param_1);
  iVar1 = FUN_1007e6ae(param_1,param_2,param_3);
  FUN_10082fd2((uint)param_1);
  return iVar1;
}

/* 1007e6ae  FUN_1007e6ae  (141 bytes)
 * int FUN_1007e6ae(int * param_1, int param_2, DWORD param_3)
 * called by: FUN_1007e682
 */
int __cdecl FUN_1007e6ae(int *param_1,int param_2,DWORD param_3)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  
  if (((param_1[3] & 0x83U) == 0) || (((param_3 != 0 && (param_3 != 1)) && (param_3 != 2)))) {
    pDVar4 = FUN_10083d58();
    *pDVar4 = 0x16;
    iVar2 = -1;
  }
  else {
    param_1[3] = param_1[3] & 0xffffffef;
    if (param_3 == 1) {
      iVar2 = FUN_10083e42((char *)param_1);
      param_2 = param_2 + iVar2;
      param_3 = 0;
    }
    FUN_1008315d(param_1);
    uVar1 = param_1[3];
    if ((uVar1 & 0x80) == 0) {
      if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
        param_1[6] = 0x200;
      }
    }
    else {
      param_1[3] = uVar1 & 0xfffffffc;
    }
    DVar3 = FUN_10083d6a(param_1[4],param_2,param_3);
    iVar2 = (DVar3 != 0xffffffff) - 1;
  }
  return iVar2;
}

/* 1007e73b  FUN_1007e73b  (81 bytes)
 * int FUN_1007e73b(undefined1 * param_1, byte.conflict * param_2, undefined4 * param_3)
 * called by: UTIL_LogPrintf, UTIL_VarArgs
 */
int __cdecl FUN_1007e73b(undefined1 *param_1,byte_conflict *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_18 = 0x42;
  local_20 = 0x7fffffff;
  iVar1 = FUN_1007fbf7((int *)&local_24,param_2,param_3);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_1007fadf(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar1;
}

/* 1007e78c  FUN_1007e78c  (80 bytes)
 * int FUN_1007e78c(undefined1 * param_1, int param_2, byte.conflict * param_3, undefined4 * param_4)
 * called by: FUN_100792d0
 */
int __cdecl FUN_1007e78c(undefined1 *param_1,int param_2,byte_conflict *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_20 = param_2;
  local_18 = 0x42;
  iVar1 = FUN_1007fbf7((int *)&local_24,param_3,param_4);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_1007fadf(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar1;
}

/* 1007e7dc  FUN_1007e7dc  (141 bytes)
 * int * FUN_1007e7dc(int param_1, int param_2)
 * called by: FUN_1007b100, FUN_1007f89c, FUN_1007f921, FUN_10082ec4
 */
int * __cdecl FUN_1007e7dc(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint *_Size;
  uint *puVar3;
  
  _Size = (uint *)(param_1 * param_2);
  puVar3 = _Size;
  if (_Size < (uint *)0xffffffe1) {
    if (_Size == (uint *)0x0) {
      puVar3 = (uint *)0x1;
    }
    puVar3 = (uint *)((int)puVar3 + 0xfU & 0xfffffff0);
  }
  do {
    if (puVar3 < (uint *)0xffffffe1) {
      if (_Size < DAT_100a8b34 || (int)_Size - (int)DAT_100a8b34 == 0) {
        FUN_10082ab6(9);
        piVar1 = FUN_10084468(_Size);
        FUN_10082b17(9);
        if (piVar1 != (int *)0x0) {
          _memset(piVar1,0,(size_t)_Size);
          return piVar1;
        }
      }
      piVar1 = HeapAlloc(DAT_102f02dc,8,(SIZE_T)puVar3);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
    }
    if (DAT_102efd04 == 0) {
      return (int *)0x0;
    }
    iVar2 = FUN_10084008(puVar3);
  } while (iVar2 != 0);
  return (int *)0x0;
}

/* 1007e869  FUN_1007e869  (72 bytes)
 * undefined FUN_1007e869(LPVOID param_1)
 * called by: FUN_1007b350, FUN_1007dd7f, FUN_1007f988, FUN_10082305, FUN_10082a4a, FUN_10082ab6, FUN_10082f6c, FUN_10084dcf, FUN_10084e23, FUN_10085129, FUN_10088b16, __fclose_lk, ... (13 total)
 */
void __cdecl FUN_1007e869(LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    FUN_10082ab6(9);
    puVar1 = (uint *)FUN_10084112((int)param_1);
    if (puVar1 != (uint *)0x0) {
      FUN_1008413d(puVar1,(uint)param_1);
      FUN_10082b17(9);
      return;
    }
    FUN_10082b17(9);
    HeapFree(DAT_102f02dc,0,param_1);
  }
  return;
}

/* 1007e8b1  FUN_1007e8b1  (217 bytes)
 * undefined4 FUN_1007e8b1(undefined4 param_1, int param_2)
 * called by: entry
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1007e8b1(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_102efc24 = GetVersion();
    iVar1 = FUN_10084023(1);
    if (iVar1 != 0) {
      _DAT_102efc30 = DAT_102efc24 >> 8 & 0xff;
      _DAT_102efc2c = DAT_102efc24 & 0xff;
      DAT_102efc24 = DAT_102efc24 >> 0x10;
      _DAT_102efc28 = _DAT_102efc2c * 0x100 + _DAT_102efc30;
      iVar1 = FUN_1007f89c();
      if (iVar1 != 0) {
        DAT_102f131c = GetCommandLineA();
        DAT_102efc10 = FUN_10085129();
        FUN_10084c13();
        FUN_10084edc();
        FUN_10084e23();
        FUN_100821e7();
        DAT_102efc0c = DAT_102efc0c + 1;
        goto LAB_1007e984;
      }
      FUN_1008405f();
    }
LAB_1007e911:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_102efc0c < 1) goto LAB_1007e911;
      DAT_102efc0c = DAT_102efc0c + -1;
      if (DAT_102efc5c == 0) {
        FUN_10082225();
      }
      FUN_10084dcf();
      FUN_1007f8f0();
      FUN_1008405f();
    }
    else if (param_2 == 3) {
      FUN_1007f988((LPVOID)0x0);
    }
LAB_1007e984:
    uVar2 = 1;
  }
  return uVar2;
}

/* 1007ea5a  FUN_1007ea5a  (18 bytes)
 * undefined FUN_1007ea5a(void * param_1)
 * called by: FUN_1007d2c0
 */
void __fastcall FUN_1007ea5a(void *param_1)

{
  FUN_1008541c(param_1,0x10000,0x30000);
  return;
}

/* 1007ea6c  FUN_1007ea6c  (62 bytes)
 * undefined4 FUN_1007ea6c(void)
 * called by: FUN_1007eaaa
 */
/* WARNING: Removing unreachable block (ram,0x1007eaa1) */

undefined4 FUN_1007ea6c(void)

{
  return 0;
}

/* 1007eaaa  FUN_1007eaaa  (41 bytes)
 * undefined FUN_1007eaaa(void)
 * called by: FUN_1007d2c0
 */
void FUN_1007eaaa(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  FUN_1007ea6c();
  return;
}

/* 1007ead3  FUN_1007ead3  (90 bytes)
 * undefined FUN_1007ead3(char * param_1)
 */
void __cdecl FUN_1007ead3(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined *this;
  uint uVar3;
  undefined *puVar4;
  
  this = (undefined *)(int)*param_1;
  uVar3 = FUN_1008554d((uint)this);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_100a8324 < 2) {
        uVar3 = (byte)PTR_DAT_100a8118[*param_1 * 2] & 4;
        this = PTR_DAT_100a8118;
      }
      else {
        puVar4 = (undefined *)0x4;
        uVar3 = FUN_1007e1c6(this,(int)*param_1,4);
        this = puVar4;
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_100a8328;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}

/* 1007eb2d  FUN_1007eb2d  (78 bytes)
 * undefined FUN_1007eb2d()
 */
void FUN_1007eb2d(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  cVar1 = *param_1;
  while ((cVar1 != '\0' && (cVar1 != DAT_100a8328))) {
    pcVar2 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar1 = *pcVar2;
  }
  if (*param_1 != '\0') {
    do {
      param_1 = param_1 + 1;
      cVar1 = *param_1;
      pcVar2 = param_1;
      if ((cVar1 == '\0') || (cVar1 == 'e')) break;
    } while (cVar1 != 'E');
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + -1;
    } while (*pcVar2 == '0');
    if (*pcVar2 == DAT_100a8328) {
      pcVar2 = pcVar3 + -2;
    }
    do {
      cVar1 = *param_1;
      pcVar2 = pcVar2 + 1;
      param_1 = param_1 + 1;
      *pcVar2 = cVar1;
    } while (cVar1 != '\0');
  }
  return;
}

/* 1007eb7b  FUN_1007eb7b  (24 bytes)
 * undefined FUN_1007eb7b()
 */
undefined4 FUN_1007eb7b(double *param_1)

{
  if (0.0 <= *param_1) {
    return 1;
  }
  return 0;
}

/* 1007ebd1  FUN_1007ebd1  (97 bytes)
 * undefined1 * FUN_1007ebd1(undefined8 * param_1, undefined1 * param_2, int param_3, int param_4)
 * called by: __cfltcvt
 */
undefined1 * __cdecl FUN_1007ebd1(undefined8 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint local_2c [6];
  int local_14 [4];
  
  FUN_10085aea((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),local_14,local_2c);
  FUN_10085a73(param_2 + (uint)(0 < param_3) + (uint)(local_14[0] == 0x2d),param_3 + 1,(int)local_14
              );
  FUN_1007ec32(param_2,param_3,param_4,local_14,'\0');
  return param_2;
}

/* 1007ec32  FUN_1007ec32  (194 bytes)
 * undefined1 * FUN_1007ec32(undefined1 * param_1, int param_2, int param_3, int * param_4, char param_5)
 * called by: FUN_1007ebd1, FUN_1007edf0
 */
undefined1 * __cdecl
FUN_1007ec32(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  
  if (param_5 != '\0') {
    FUN_1007eed4(param_1 + (*param_4 == 0x2d),(uint)(0 < param_2));
  }
  puVar1 = param_1;
  if (*param_4 == 0x2d) {
    *param_1 = 0x2d;
    puVar1 = param_1 + 1;
  }
  puVar2 = puVar1;
  if (0 < param_2) {
    puVar2 = puVar1 + 1;
    *puVar1 = puVar1[1];
    *puVar2 = DAT_100a8328;
  }
  puVar3 = FUN_10085c00((uint *)(puVar2 + param_2 + (uint)(param_5 == '\0')),(uint *)"e+000");
  if (param_3 != 0) {
    *(undefined1 *)puVar3 = 0x45;
  }
  if (*(char *)param_4[3] != '0') {
    iVar4 = param_4[1] + -1;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
      *(undefined1 *)((int)puVar3 + 1) = 0x2d;
    }
    if (99 < iVar4) {
      *(char *)((int)puVar3 + 2) = *(char *)((int)puVar3 + 2) + (char)(iVar4 / 100);
      iVar4 = iVar4 % 100;
    }
    if (9 < iVar4) {
      *(char *)((int)puVar3 + 3) = *(char *)((int)puVar3 + 3) + (char)(iVar4 / 10);
      iVar4 = iVar4 % 10;
    }
    *(char *)(puVar3 + 1) = (char)puVar3[1] + (char)iVar4;
  }
  return param_1;
}

/* 1007ecf4  FUN_1007ecf4  (85 bytes)
 * char * FUN_1007ecf4(undefined8 * param_1, char * param_2, size_t param_3)
 * called by: __cfltcvt
 */
char * __cdecl FUN_1007ecf4(undefined8 *param_1,char *param_2,size_t param_3)

{
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_10085aea((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  FUN_10085a73(param_2 + (local_14 == 0x2d),local_10 + param_3,(int)&local_14);
  FUN_1007ed49(param_2,param_3,&local_14,'\0');
  return param_2;
}

/* 1007ed49  FUN_1007ed49  (167 bytes)
 * char * FUN_1007ed49(char * param_1, size_t param_2, int * param_3, char param_4)
 * called by: FUN_1007ecf4, FUN_1007edf0
 */
char * __cdecl FUN_1007ed49(char *param_1,size_t param_2,int *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  iVar1 = param_3[1];
  if ((param_4 != '\0') && (iVar1 - 1U == param_2)) {
    iVar2 = *param_3;
    param_1[(uint)(iVar2 == 0x2d) + (iVar1 - 1U)] = '0';
    (param_1 + (uint)(iVar2 == 0x2d) + (iVar1 - 1U))[1] = '\0';
  }
  pcVar3 = param_1;
  if (*param_3 == 0x2d) {
    *param_1 = '-';
    pcVar3 = param_1 + 1;
  }
  if (param_3[1] < 1) {
    FUN_1007eed4(pcVar3,1);
    *pcVar3 = '0';
    pcVar3 = pcVar3 + 1;
  }
  else {
    pcVar3 = pcVar3 + param_3[1];
  }
  if (0 < (int)param_2) {
    FUN_1007eed4(pcVar3,1);
    *pcVar3 = DAT_100a8328;
    iVar1 = param_3[1];
    if (iVar1 < 0) {
      if ((param_4 != '\0') || (-iVar1 <= (int)param_2)) {
        param_2 = -iVar1;
      }
      FUN_1007eed4(pcVar3 + 1,param_2);
      _memset(pcVar3 + 1,0x30,param_2);
    }
  }
  return param_1;
}

/* 1007edf0  FUN_1007edf0  (147 bytes)
 * undefined FUN_1007edf0(undefined8 * param_1, char * param_2, size_t param_3, int param_4)
 * called by: __cfltcvt
 */
void __cdecl FUN_1007edf0(undefined8 *param_1,char *param_2,size_t param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_10085aea((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  iVar1 = local_10 + -1;
  FUN_10085a73(param_2 + (local_14 == 0x2d),param_3,(int)&local_14);
  local_10 = local_10 + -1;
  if ((local_10 < -4) || ((int)param_3 <= local_10)) {
    FUN_1007ec32(param_2,param_3,param_4,&local_14,'\x01');
  }
  else {
    pcVar2 = param_2 + (local_14 == 0x2d);
    if (iVar1 < local_10) {
      do {
        pcVar3 = pcVar2;
        pcVar2 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3[-1] = '\0';
    }
    FUN_1007ed49(param_2,param_3,&local_14,'\x01');
  }
  return;
}

/* 1007eed4  FUN_1007eed4  (37 bytes)
 * undefined FUN_1007eed4(char * param_1, int param_2)
 * called by: FUN_1007ec32, FUN_1007ed49
 */
void __cdecl FUN_1007eed4(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_10085cf0((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}

/* 1007eef9  FUN_1007eef9  (127 bytes)
 * undefined FUN_1007eef9(uint * param_1, byte.conflict * param_2)
 * called by: atof
 */
void __thiscall FUN_1007eef9(void *this,uint *param_1,byte_conflict *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ushort local_1c [6];
  uint local_10;
  undefined4 uStack_c;
  int local_8;
  
  uVar3 = 0;
  uVar1 = FUN_1008602e(this,local_1c,&local_8,param_2,0,0,0,0);
  if ((uVar1 & 4) == 0) {
    iVar2 = FUN_100859ed(local_1c,&local_10);
    if (((uVar1 & 2) != 0) || (iVar2 == 1)) {
      uVar3 = 0x80;
    }
    if (((uVar1 & 1) != 0) || (iVar2 == 2)) {
      uVar3 = uVar3 | 0x100;
    }
  }
  else {
    uVar3 = 0x200;
    local_10 = 0;
    uStack_c = 0;
  }
  *param_1 = uVar3;
  *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_c,local_10);
  param_1[1] = local_8 - (int)param_2;
  return;
}

/* 1007f034  FUN_1007f034  (155 bytes)
 * undefined4 FUN_1007f034(PEXCEPTION_RECORD param_1, PVOID param_2, DWORD param_3, undefined4 param_4, int * param_5, int param_6, PVOID param_7, char param_8)
 * called by: FUN_1007d4b5, FUN_1007d53f, FUN_1007d61a
 */
undefined4 __cdecl
FUN_1007f034(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int *param_5,
            int param_6,PVOID param_7,char param_8)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (*param_5 != 0x19930520) {
    FUN_1007fa89();
  }
  if ((param_1->ExceptionFlags & 0x66) == 0) {
    if (param_5[3] != 0) {
      if (((param_1->ExceptionCode == 0xe06d7363) && (0x19930520 < param_1->ExceptionInformation[0])
          ) && (pcVar1 = *(code **)(param_1->ExceptionInformation[2] + 8), pcVar1 != (code *)0x0)) {
        uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        return uVar2;
      }
      FUN_1007f0cf(param_1,param_2,param_3,param_4,(int)param_5,param_8,param_6,param_7);
    }
  }
  else if ((param_5[1] != 0) && (param_6 == 0)) {
    FUN_1007f389((int)param_2,param_4,(int)param_5,-1);
  }
  return 1;
}

/* 1007f0cf  FUN_1007f0cf  (435 bytes)
 * undefined FUN_1007f0cf(PEXCEPTION_RECORD param_1, PVOID param_2, DWORD param_3, undefined4 param_4, int param_5, char param_6, int param_7, PVOID param_8)
 * called by: FUN_1007f034
 */
void __cdecl
FUN_1007f0cf(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            char param_6,int param_7,PVOID param_8)

{
  byte_conflict *pbVar1;
  bool bVar2;
  DWORD *pDVar3;
  undefined3 extraout_var;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_18 = local_18 & 0xffffff00;
  local_14 = *(int *)((int)param_2 + 8);
  if ((local_14 < -1) || (*(int *)(param_5 + 4) <= local_14)) {
    FUN_1007fa89();
  }
  if (param_1->ExceptionCode == 0xe06d7363) {
    if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) &&
       (param_1->ExceptionInformation[2] == 0)) {
      pDVar3 = FUN_1007f921();
      if (pDVar3[0x1b] == 0) {
        return;
      }
      pDVar3 = FUN_1007f921();
      param_1 = (PEXCEPTION_RECORD)pDVar3[0x1b];
      pDVar3 = FUN_1007f921();
      param_3 = pDVar3[0x1c];
      local_18 = CONCAT31(local_18._1_3_,1);
      bVar2 = FUN_10086563(param_1,1);
      if (CONCAT31(extraout_var,bVar2) == 0) {
        FUN_1007fa89();
      }
      if (param_1->ExceptionCode != 0xe06d7363) goto LAB_1007f257;
      if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) &&
         (param_1->ExceptionInformation[2] == 0)) {
        FUN_1007fa89();
      }
    }
    iVar5 = local_14;
    if (((param_1->ExceptionCode == 0xe06d7363) && (param_1->NumberParameters == 3)) &&
       (param_1->ExceptionInformation[0] == 0x19930520)) {
      piVar4 = (int *)FUN_1007d68f(param_5,param_7,local_14,&local_8,&local_1c);
      do {
        if (local_1c <= local_8) {
          if (param_6 == '\0') {
            return;
          }
          FUN_1007f7c1((int)param_1);
          return;
        }
        if ((*piVar4 <= iVar5) && (iVar5 <= piVar4[1])) {
          pbVar1 = (byte_conflict *)piVar4[4];
          for (local_10 = piVar4[3]; iVar5 = local_14, 0 < local_10; local_10 = local_10 + -1) {
            piVar6 = *(int **)(param_1->ExceptionInformation[2] + 0xc);
            for (local_c = *piVar6; 0 < local_c; local_c = local_c + -1) {
              piVar6 = piVar6 + 1;
              iVar5 = FUN_1007f32c(pbVar1,(byte_conflict *)*piVar6,
                                   (uint *)param_1->ExceptionInformation[2]);
              if (iVar5 != 0) {
                FUN_1007f43d(param_1,param_2,param_3,param_4,param_5,pbVar1,(byte_conflict *)*piVar6
                             ,piVar4,param_7,param_8);
                iVar5 = local_14;
                goto LAB_1007f237;
              }
            }
            pbVar1 = pbVar1 + 0x10;
          }
        }
LAB_1007f237:
        local_8 = local_8 + 1;
        piVar4 = piVar4 + 5;
      } while( true );
    }
  }
LAB_1007f257:
  if (param_6 == '\0') {
    FUN_1007f282(param_1,param_2,param_3,param_4,param_5,local_14,param_7,param_8);
    return;
  }
  FUN_1007fa28();
  return;
}

/* 1007f282  FUN_1007f282  (170 bytes)
 * undefined FUN_1007f282(PEXCEPTION_RECORD param_1, PVOID param_2, DWORD param_3, undefined4 param_4, int param_5, int param_6, int param_7, PVOID param_8)
 * called by: FUN_1007f0cf
 */
void __cdecl
FUN_1007f282(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            int param_6,int param_7,PVOID param_8)

{
  DWORD *pDVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint local_c;
  uint local_8;
  
  pDVar1 = FUN_1007f921();
  if ((pDVar1[0x1a] != 0) &&
     (iVar2 = FUN_1007d564(&param_1->ExceptionCode,param_2,param_3,param_4,param_5,param_7,param_8),
     iVar2 != 0)) {
    return;
  }
  piVar3 = (int *)FUN_1007d68f(param_5,param_7,param_6,&local_8,&local_c);
  for (; local_8 < local_c; local_8 = local_8 + 1) {
    if ((*piVar3 <= param_6) && (param_6 <= piVar3[1])) {
      iVar4 = piVar3[3] * 0x10 + piVar3[4];
      iVar2 = *(int *)(iVar4 + -0xc);
      if ((iVar2 == 0) || (*(char *)(iVar2 + 8) == '\0')) {
        FUN_1007f43d(param_1,param_2,param_3,param_4,param_5,(byte_conflict *)(iVar4 + -0x10),
                     (byte_conflict *)0x0,piVar3,param_7,param_8);
      }
    }
    piVar3 = piVar3 + 5;
  }
  return;
}

/* 1007f32c  FUN_1007f32c  (93 bytes)
 * undefined4 FUN_1007f32c(byte.conflict * param_1, byte.conflict * param_2, uint * param_3)
 * called by: FUN_1007f0cf
 */
undefined4 __cdecl FUN_1007f32c(byte_conflict *param_1,byte_conflict *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_1007f383:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_1007f35d:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_1007f383;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_1007f35d;
    }
    uVar2 = 0;
  }
  return uVar2;
}

/* 1007f389  FUN_1007f389  (132 bytes)
 * undefined FUN_1007f389(int param_1, undefined4 param_2, int param_3, int param_4)
 * called by: FUN_1007f034, FUN_1007f43d
 */
void __cdecl FUN_1007f389(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10096018;
  pcStack_10 = FUN_1008664c;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  for (iVar2 = *(int *)(param_1 + 8); local_8 = 0xffffffff, iVar2 != param_4;
      iVar2 = *(int *)(*(int *)(param_3 + 8) + iVar2 * 8)) {
    if ((iVar2 < 0) || (*(int *)(param_3 + 4) <= iVar2)) {
      FUN_1007fa89();
    }
    local_8 = 0;
    iVar1 = *(int *)(*(int *)(param_3 + 8) + 4 + iVar2 * 8);
    if (iVar1 != 0) {
      __CallSettingFrame_12(iVar1,param_1,0x103);
    }
  }
  *(int *)(param_1 + 8) = iVar2;
  ExceptionList = local_14;
  return;
}

/* 1007f3f0  FUN_1007f3f0  (10 bytes)
 * undefined FUN_1007f3f0()
 */
void FUN_1007f3f0(void)

{
  int unaff_EBP;
  
  FUN_1007f427(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}

/* 1007f427  FUN_1007f427  (22 bytes)
 * undefined FUN_1007f427()
 * called by: FUN_1007f3f0
 */
undefined4 FUN_1007f427(undefined4 *param_1)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if (*(int *)*param_1 != -0x1f928c9d) {
    return 0;
  }
  puStack_c = &DAT_10096060;
  pcStack_10 = FUN_1008664c;
  pvStack_14 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_14;
  pDVar1 = FUN_1007f921();
  if (pDVar1[0x18] != 0) {
    uStack_8 = 1;
    pDVar1 = FUN_1007f921();
    (*(code *)pDVar1[0x18])();
  }
  uStack_8 = 0xffffffff;
  uVar2 = FUN_10086724();
  return uVar2;
}

