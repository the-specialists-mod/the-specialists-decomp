/* mp.dll - unnamed_100245a0 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100245a0  FUN_100245a0  (7 bytes)
 * undefined FUN_100245a0()
 */
float10 FUN_100245a0(void)

{
  return (float10)30.0;
}

/* 100245b0  FUN_100245b0  (8 bytes)
 * undefined FUN_100245b0()
 */
undefined4 FUN_100245b0(void)

{
  return 8;
}

/* 100245c0  FUN_100245c0  (8 bytes)
 * undefined FUN_100245c0()
 */
undefined4 FUN_100245c0(void)

{
  return 0xb;
}

/* 100245d0  FUN_100245d0  (75 bytes)
 * int FUN_100245d0(int * param_1)
 */
int __thiscall FUN_100245d0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1001e9e0(param_1);
  iVar2 = (**(code **)(*(int *)this + 0x18))();
  if ((iVar2 != 0) && (*(int *)(iVar1 + 0x248) != 0)) {
    FireTargets((int)(gpGlobals->pStringBase + *(int *)(iVar1 + 0x248)),param_1,param_1,3,0);
  }
  return iVar1;
}

/* 10024620  FUN_10024620  (5 bytes)
 * undefined FUN_10024620()
 */
undefined4 FUN_10024620(void)

{
  return 0;
}

/* 10024630  FUN_10024630  (28 bytes)
 * undefined FUN_10024630()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10024630(void)

{
  if (_DAT_10093ae0 != 0.0) {
    return 1;
  }
  return 0;
}

/* 10024650  FUN_10024650  (28 bytes)
 * undefined FUN_10024650()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10024650(void)

{
  if (_DAT_10093b58 != 0.0) {
    return 1;
  }
  return 0;
}

/* 10024670  FUN_10024670  (172 bytes)
 * undefined FUN_10024670()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10024670(int param_1)

{
  char *szValue;
  longlong lVar1;
  
  if (DAT_1009f4a4 == 0) {
    (*g_engfuncs.pfnMessageBegin)(2,0x1e,(float *)0x0,(edict_t *)0x0);
    (*g_engfuncs.pfnMessageEnd)();
    (*g_engfuncs.pfnCVarGetFloat)(s_mp_chattime_10093f14);
    lVar1 = __ftol();
    if ((int)lVar1 < 10) {
      (*g_engfuncs.pfnCVarSetString)(s_mp_chattime_10093f14,&DAT_10093f10);
    }
    else if (0x78 < (int)lVar1) {
      szValue = FUN_100676f0();
      (*g_engfuncs.pfnCVarSetString)(s_mp_chattime_10093f14,szValue);
    }
    lVar1 = __ftol();
    *(float *)(param_1 + 4) = (float)(int)lVar1 + gpGlobals->time;
    _DAT_1009fe70 = gpGlobals->time;
    DAT_1009f4a4 = 1;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

/* 10024720  FUN_10024720  (64 bytes)
 * undefined FUN_10024720(int * param_1)
 * called by: CHalfLifeMultiplay::ChangeLevel
 */
void __cdecl FUN_10024720(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*puVar1;
    while (puVar3 != puVar1) {
      puVar2 = (undefined4 *)*puVar3;
      FUN_1006eb82((undefined *)puVar3);
      puVar3 = puVar2;
    }
    FUN_1006eb82((undefined *)*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

/* 10024760  FUN_10024760  (213 bytes)
 * char * FUN_10024760(char * param_1)
 * called by: ReloadMapCycleFile
 */
char * __cdecl FUN_10024760(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = 0;
  DAT_1009f870 = 0;
  if (param_1 != (char *)0x0) {
    cVar2 = *param_1;
    while( true ) {
      while (' ' < cVar2) {
        if (cVar2 != '/') {
          if (cVar2 == '\"') {
            param_1 = param_1 + 1;
            while( true ) {
              cVar2 = *param_1;
              param_1 = param_1 + 1;
              if ((cVar2 == '\"') || (cVar2 == '\0')) break;
              (&DAT_1009f870)[iVar3] = cVar2;
              iVar3 = iVar3 + 1;
            }
            goto LAB_1002481c;
          }
          if ((((cVar2 == '{') || (cVar2 == '}')) || (cVar2 == ')')) ||
             (((cVar2 == '(' || (cVar2 == '\'')) || (cVar2 == ',')))) {
            DAT_1009f871 = 0;
            DAT_1009f870 = cVar2;
            return param_1 + 1;
          }
          goto LAB_100247ee;
        }
        if (param_1[1] != '/') goto LAB_100247ee;
        cVar2 = *param_1;
        while ((cVar2 != '\0' && (cVar2 != '\n'))) {
          pcVar1 = param_1 + 1;
          param_1 = param_1 + 1;
          cVar2 = *pcVar1;
        }
      }
      if (cVar2 == '\0') break;
      cVar2 = param_1[1];
      param_1 = param_1 + 1;
    }
  }
  return (char *)0x0;
LAB_100247ee:
  param_1 = param_1 + 1;
  (&DAT_1009f870)[iVar3] = cVar2;
  iVar3 = iVar3 + 1;
  cVar2 = *param_1;
  if ((cVar2 == '{') || (cVar2 == '}')) {
LAB_1002481c:
    (&DAT_1009f870)[iVar3] = 0;
    return param_1;
  }
  if ((cVar2 == ')') || ((((cVar2 == '(' || (cVar2 == '\'')) || (cVar2 == ',')) || (cVar2 < '!'))))
  goto LAB_1002481c;
  goto LAB_100247ee;
}

/* 10024840  FUN_10024840  (67 bytes)
 * undefined4 FUN_10024840(char * param_1)
 * called by: ReloadMapCycleFile
 */
undefined4 __thiscall FUN_10024840(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  void *extraout_ECX;
  
  cVar1 = *param_1;
  while( true ) {
    if ((cVar1 == '\0') || (*param_1 == '\n')) {
      return 0;
    }
    uVar2 = FUN_1006e7fb(this,(int)*param_1);
    if ((uVar2 == 0) || (uVar2 = FUN_1006e84b((void *)(int)*param_1,(int)*param_1), uVar2 != 0))
    break;
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
    this = extraout_ECX;
  }
  return 1;
}

/* 10024b20  FUN_10024b20  (58 bytes)
 * int FUN_10024b20(void)
 * called by: CHalfLifeMultiplay::ChangeLevel
 */
int FUN_10024b20(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 1;
  iVar3 = 0;
  if (0 < gpGlobals->maxClients) {
    do {
      iVar1 = UTIL_PlayerByIndex(iVar2);
      if (iVar1 != 0) {
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= gpGlobals->maxClients);
  }
  return iVar3;
}

/* 10024b60  FUN_10024b60  (251 bytes)
 * undefined FUN_10024b60(char * param_1, char * param_2)
 * called by: CHalfLifeMultiplay::ChangeLevel
 */
void __cdecl FUN_10024b60(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char local_400 [512];
  char local_200 [512];
  
  if (*param_1 == '\\') {
    param_1 = param_1 + 1;
  }
  do {
    pcVar2 = local_200;
    cVar1 = *param_1;
    while (cVar1 != '\\') {
      if (cVar1 == '\0') {
        return;
      }
      *pcVar2 = cVar1;
      pcVar7 = param_1 + 1;
      pcVar2 = pcVar2 + 1;
      param_1 = param_1 + 1;
      cVar1 = *pcVar7;
    }
    cVar1 = param_1[1];
    *pcVar2 = '\0';
    pcVar2 = local_400;
    while ((cVar1 != '\\' && (cVar1 != '\0'))) {
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
      cVar1 = param_1[2];
      param_1 = param_1 + 1;
    }
    *pcVar2 = '\0';
    uVar3 = 0xffffffff;
    pcVar2 = local_200;
    do {
      pcVar7 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar4 = -1;
    pcVar2 = param_2;
    do {
      pcVar6 = pcVar2;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar6 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar6;
    } while (cVar1 != '\0');
    pcVar2 = pcVar7 + -uVar3;
    pcVar7 = pcVar6 + -1;
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar7 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar7 = pcVar7 + 1;
    }
    iVar4 = -1;
    pcVar2 = local_400;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (iVar4 != -2) {
      iVar4 = -1;
      pcVar2 = param_2;
      do {
        pcVar7 = pcVar2;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar7 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar7;
      } while (cVar1 != '\0');
      uVar3 = 0xffffffff;
      *(undefined2 *)(pcVar7 + -1) = DAT_10094c08;
      pcVar2 = local_400;
      do {
        pcVar7 = pcVar2;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar7 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar7;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      iVar4 = -1;
      pcVar2 = param_2;
      do {
        pcVar6 = pcVar2;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar6 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar6;
      } while (cVar1 != '\0');
      pcVar2 = pcVar7 + -uVar3;
      pcVar7 = pcVar6 + -1;
      for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar7 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar7 = pcVar7 + 1;
      }
    }
    iVar4 = -1;
    pcVar2 = param_2;
    do {
      pcVar7 = pcVar2;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar7;
    } while (cVar1 != '\0');
    *(undefined2 *)(pcVar7 + -1) = DAT_10091bd0;
    if (param_1[1] == '\0') {
      return;
    }
    param_1 = param_1 + 2;
  } while( true );
}

/* 10025010  FUN_10025010  (3 bytes)
 * undefined FUN_10025010()
 */
undefined4 FUN_10025010(void)

{
  return 0;
}

/* 10025020  FUN_10025020  (6 bytes)
 * undefined FUN_10025020()
 */
undefined * FUN_10025020(void)

{
  return &DAT_10094cb4;
}

/* 10025030  FUN_10025030  (8 bytes)
 * undefined FUN_10025030()
 */
undefined4 FUN_10025030(void)

{
  return 1;
}

/* 10025040  FUN_10025040  (6 bytes)
 * undefined FUN_10025040()
 */
undefined4 FUN_10025040(void)

{
  return 0xffffffff;
}

/* 10025050  FUN_10025050  (8 bytes)
 * undefined FUN_10025050()
 */
undefined1 * FUN_10025050(void)

{
  return &DAT_1009f428;
}

/* 10025060  FUN_10025060  (8 bytes)
 * undefined FUN_10025060()
 */
undefined4 FUN_10025060(void)

{
  return 1;
}

/* 10025070  FUN_10025070  (3 bytes)
 * undefined FUN_10025070()
 */
void FUN_10025070(void)

{
  return;
}

/* 10025080  FUN_10025080  (8 bytes)
 * undefined FUN_10025080()
 */
undefined1 * FUN_10025080(void)

{
  return &DAT_1009f428;
}

/* 10025090  FUN_10025090  (8 bytes)
 * undefined FUN_10025090()
 */
undefined1 * FUN_10025090(void)

{
  return &DAT_1009f428;
}

/* 100250a0  FUN_100250a0  (3 bytes)
 * undefined FUN_100250a0()
 */
undefined4 FUN_100250a0(void)

{
  return 0;
}

/* 100250b0  FUN_100250b0  (8 bytes)
 * undefined FUN_100250b0()
 */
void __fastcall FUN_100250b0(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100250b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf8))();
  return;
}

/* 100250c0  FUN_100250c0  (32 bytes)
 * undefined FUN_100250c0()
 */
undefined4 * __thiscall FUN_100250c0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_10084b38;
  if ((param_2 & 1) != 0) {
    FUN_1006eb82((undefined *)param_1);
  }
  return param_1;
}

/* 10025480  FUN_10025480  (33 bytes)
 * int FUN_10025480(int param_1, int param_2)
 * called by: CFuncTrackTrain::DeadEnd, CPathTrack::LookAhead
 */
int FUN_10025480(int param_1,int param_2)

{
  if ((param_1 == 0) || ((param_2 != 0 && ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 1) != 0)))) {
    param_1 = 0;
  }
  return param_1;
}

/* 100254b0  FUN_100254b0  (239 bytes)
 * undefined FUN_100254b0(int param_1, int param_2, float * param_3, float param_4)
 * called by: CPathTrack::LookAhead
 */
void FUN_100254b0(int param_1,int param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float local_10;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar3 = *(int *)(param_1 + 4);
    iVar4 = *(int *)(param_2 + 4);
    fVar5 = *(float *)(iVar4 + 8) - *(float *)(iVar3 + 8);
    fVar6 = *(float *)(iVar4 + 0xc) - *(float *)(iVar3 + 0xc);
    local_10 = *(float *)(iVar4 + 0x10) - *(float *)(iVar3 + 0x10);
    fVar1 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + local_10 * local_10);
    if (fVar1 == 0.0) {
      fVar5 = 0.0;
      fVar6 = 0.0;
      local_10 = 1.0;
    }
    else {
      fVar1 = 1.0 / fVar1;
      fVar5 = fVar5 * fVar1;
      fVar6 = fVar1 * fVar6;
      local_10 = local_10 * fVar1;
    }
    fVar1 = *(float *)(iVar4 + 0xc);
    fVar2 = *(float *)(iVar4 + 0x10);
    *param_3 = fVar5 * param_4 + *(float *)(iVar4 + 8);
    param_3[1] = fVar6 * param_4 + fVar1;
    param_3[2] = local_10 * param_4 + fVar2;
  }
  return;
}

/* 100255c0  FUN_100255c0  (29 bytes)
 * int FUN_100255c0(int param_1)
 * called by: CFuncTrackTrain::DeadEnd, CPathTrack::LookAhead
 */
int __fastcall FUN_100255c0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 100);
  if (((iVar2 == 0) || (uVar1 = *(uint *)(*(int *)(param_1 + 4) + 0x1a0), -1 < (char)(uVar1 >> 8)))
     || ((uVar1 & 4) == 0)) {
    iVar2 = *(int *)(param_1 + 0x60);
  }
  return iVar2;
}

/* 100255e0  FUN_100255e0  (100 bytes)
 * undefined FUN_100255e0(int param_1)
 * called by: CPathTrack::Link
 */
void __thiscall FUN_100255e0(void *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  if (param_1 != 0) {
    pbVar4 = (byte *)(gpGlobals->pStringBase + *(int *)((int)this + 0x58));
    pbVar2 = (byte *)(gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0x1cc));
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_10025631:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_10025636;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_10025631;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_10025636:
    if (iVar3 != 0) {
      *(int *)((int)this + 0x60) = param_1;
    }
  }
  return;
}

/* 10025af0  FUN_10025af0  (65 bytes)
 * undefined4 FUN_10025af0(int param_1)
 * called by: CFuncTrackChange::Find, CFuncTrackTrain::Find, CPathTrack::Link
 */
undefined4 __cdecl FUN_10025af0(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(param_1 + 0x80);
  }
  iVar2 = 0xb;
  bVar5 = true;
  pcVar3 = gpGlobals->pStringBase + *piVar1;
  pcVar4 = s_path_track_10094dbc;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if ((bVar5) && (param_1 != 0)) {
    return *(undefined4 *)(param_1 + 0x7c);
  }
  return 0;
}

/* 10026240  FUN_10026240  (363 bytes)
 * undefined FUN_10026240(int param_1)
 * called by: CFuncPlat::Spawn, CFuncTrackChange::Spawn
 */
void __fastcall FUN_10026240(int param_1)

{
  int iVar1;
  float fVar2;
  
  if (*(float *)(param_1 + 0x88) == 0.0) {
    *(undefined4 *)(param_1 + 0x88) = 0x42a00000;
  }
  if (*(float *)(param_1 + 0x84) == 0.0) {
    *(undefined4 *)(param_1 + 0x84) = 0x41200000;
  }
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x50) = DAT_1009f4a8;
  *(undefined4 *)(iVar1 + 0x54) = DAT_1009f4ac;
  *(undefined4 *)(iVar1 + 0x58) = DAT_1009f4b0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 4;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 7;
  FUN_100679a0();
  FUN_10067970();
  (*g_engfuncs.pfnSetModel)
            (*(edict_t **)(*(int *)(param_1 + 4) + 0x208),
             gpGlobals->pStringBase + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(iVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar1 + 0x10);
  if (*(float *)(param_1 + 0xc0) == 0.0) {
    fVar2 = (*(float *)(iVar1 + 0x10) - *(float *)(iVar1 + 0xfc)) + 8.0;
  }
  else {
    fVar2 = *(float *)(iVar1 + 0x10) - *(float *)(param_1 + 0xc0);
  }
  *(float *)(param_1 + 0xa0) = fVar2;
  if (*(float *)(iVar1 + 0x1f8) == 0.0) {
    *(undefined4 *)(iVar1 + 0x1f8) = 0x43160000;
  }
  if (*(float *)(param_1 + 0xf4) == 0.0) {
    *(undefined4 *)(param_1 + 0xf4) = 0x3f59999a;
  }
  return;
}

/* 10026460  FUN_10026460  (314 bytes)
 * undefined FUN_10026460(int param_1)
 * called by: PlatSpawnInsideTrigger
 */
void __thiscall FUN_10026460(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  *(int *)((int)this + 0x54) = param_1;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x10c) = 1;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x108) = 0;
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)((int)this + 4);
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
  FUN_10067970();
  return;
}

/* 100265a0  FUN_100265a0  (114 bytes)
 * undefined FUN_100265a0()
 */
void __thiscall FUN_100265a0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  iVar2 = 7;
  bVar5 = true;
  pcVar3 = gpGlobals->pStringBase + *(int *)param_2[1];
  pcVar4 = s_player_100915d0;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    iVar2 = (**(code **)(*param_2 + 0x94))();
    if (iVar2 != 0) {
      piVar1 = *(int **)(param_1 + 0x54);
      if (piVar1[0x1c] == 1) {
        (**(code **)(*piVar1 + 0xf8))();
        return;
      }
      if (piVar1[0x1c] == 0) {
        *(float *)(piVar1[1] + 0x104) = *(float *)(piVar1[1] + 0x100) + 1.0;
      }
    }
  }
  return;
}

/* 10027c00  FUN_10027c00  (328 bytes)
 * undefined FUN_10027c00(int param_1)
 * called by: CFuncTrackTrain::Find, CFuncTrackTrain::Next
 */
void __fastcall FUN_10027c00(int param_1)

{
  byte bVar1;
  int iVar2;
  void *this;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iparam2;
  int bparam1;
  int bparam2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (*(int *)(iVar2 + 0x1e8) != 0) {
    lVar4 = __ftol();
    uVar3 = (int)(uint)lVar4 >> 0x1f;
    if (*(int *)(param_1 + 0x84) == 0) {
      EMIT_SOUND_DYN((void *)((int)((((uint)lVar4 ^ uVar3) - uVar3) * 0x8c) / 1000 + 0x3c),
                     *(undefined4 *)(iVar2 + 0x208),3,s_plats_ttrain_start1_wav_100953cc,
                     *(undefined4 *)(param_1 + 0x8c),0x3f4ccccd,0,100);
      iVar2 = *(int *)(param_1 + 4);
      lVar4 = __ftol();
      this = *(void **)(iVar2 + 0x208);
      EMIT_SOUND_DYN(this,this,6,gpGlobals->pStringBase + *(int *)(iVar2 + 0x1e8),
                     *(undefined4 *)(param_1 + 0x8c),0x3f4ccccd,0,(int)lVar4);
      *(undefined4 *)(param_1 + 0x84) = 1;
      return;
    }
    bparam2 = 0;
    bparam1 = 0;
    iparam2 = 0;
    lVar4 = __ftol();
    bVar1 = *(byte *)(param_1 + 0x88);
    lVar5 = __ftol();
    (*g_engfuncs.pfnPlaybackEvent)
              (10,*(edict_t **)(iVar2 + 0x208),*(ushort *)(param_1 + 0x98),0.0,
               (float *)&DAT_1009f4a8,(float *)&DAT_1009f4a8,0.0,0.0,
               ((ushort)lVar4 & 0x3f | (bVar1 & 7) << 6) << 6 | (uint)lVar5 & 0x3f,iparam2,bparam1,
               bparam2);
  }
  return;
}

/* 100282c0  FUN_100282c0  (44 bytes)
 * undefined FUN_100282c0(float * param_1)
 * called by: CFuncTrackTrain::Next
 */
void __cdecl FUN_100282c0(float *param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_100282f0(*param_1);
  *param_1 = (float)fVar1;
  fVar1 = (float10)FUN_100282f0(param_1[1]);
  param_1[1] = (float)fVar1;
  fVar1 = (float10)FUN_100282f0(param_1[2]);
  param_1[2] = (float)fVar1;
  return;
}

/* 100282f0  FUN_100282f0  (73 bytes)
 * undefined FUN_100282f0(float param_1)
 * called by: FUN_100282c0
 */
void __cdecl FUN_100282f0(float param_1)

{
  for (; param_1 < 0.0; param_1 = param_1 + 360.0) {
  }
  for (; 360.0 < param_1; param_1 = param_1 - 360.0) {
  }
  return;
}

/* 10028470  FUN_10028470  (162 bytes)
 * undefined FUN_10028470(int param_1)
 * called by: CFuncTrainControls::Find
 */
void __thiscall FUN_10028470(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar3 = *(int *)((int)this + 4);
  fVar4 = *(float *)(param_1 + 8) - *(float *)(iVar3 + 0x14);
  fVar5 = *(float *)(param_1 + 0xc) - *(float *)(iVar3 + 0x18);
  fVar6 = *(float *)(param_1 + 0x10) - *(float *)(iVar3 + 0x1c);
  fVar1 = *(float *)(param_1 + 0xe0);
  fVar2 = *(float *)(param_1 + 0xe4);
  *(float *)((int)this + 0x6c) = fVar4 + *(float *)(param_1 + 0xdc);
  *(float *)((int)this + 0x70) = fVar5 + fVar1;
  *(float *)((int)this + 0x74) = fVar6 + fVar2;
  fVar1 = *(float *)(param_1 + 0xec);
  fVar2 = *(float *)(param_1 + 0xf0);
  *(float *)((int)this + 0x78) = fVar4 + *(float *)(param_1 + 0xe8);
  *(float *)((int)this + 0x7c) = fVar5 + fVar1;
  *(float *)((int)this + 0x80) = fVar6 + fVar2;
  return;
}

/* 10028a00  FUN_10028a00  (65 bytes)
 * undefined4 FUN_10028a00(int param_1)
 * called by: CFuncTrackChange::Find, CFuncTrainControls::Find
 */
undefined4 __cdecl FUN_10028a00(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(param_1 + 0x80);
  }
  iVar2 = 0x10;
  bVar5 = true;
  pcVar3 = gpGlobals->pStringBase + *piVar1;
  pcVar4 = s_func_tracktrain_100954c8;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if ((bVar5) && (param_1 != 0)) {
    return *(undefined4 *)(param_1 + 0x7c);
  }
  return 0;
}

/* 1002a060  FUN_1002a060  (76 bytes)
 * undefined FUN_1002a060(int param_1)
 * called by: PlatSpawnInsideTrigger
 */
void __cdecl FUN_1002a060(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x58), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &PTR_BreakableRespawn_10084f60;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1002a0b0  FUN_1002a0b0  (6 bytes)
 * undefined FUN_1002a0b0()
 */
undefined4 FUN_1002a0b0(void)

{
  return 0x80000000;
}

/* 1002a3d0  FUN_1002a3d0  (9 bytes)
 * undefined FUN_1002a3d0(undefined4 * param_1)
 * called by: GetClassPtr<CFuncTrackAuto>
 */
void __fastcall FUN_1002a3d0(undefined4 *param_1)

{
  *param_1 = &PTR_BreakableRespawn_10085788;
  return;
}

/* 1002aa20  FUN_1002aa20  (87 bytes)
 * undefined4 FUN_1002aa20(int param_1, int param_2)
 * called by: CBasePlayer::PlayerUse, CBasePlayer::PreThink
 */
undefined4 __cdecl FUN_1002aa20(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 < 0) {
    return 5;
  }
  if (param_1 == 0) {
    return 1;
  }
  if ((float)param_1 / (float)param_2 < 0.33) {
    return 2;
  }
  uVar1 = 3;
  if (0.66 <= (float)param_1 / (float)param_2) {
    uVar1 = 4;
  }
  return uVar1;
}

/* 1002ad70  FUN_1002ad70  (262 bytes)
 * undefined FUN_1002ad70(int param_1)
 * called by: CBasePlayer::PlayerDeathThink, CBasePlayer::StartObserver, CHalfLifeMultiplay::ClientDisconnected, CStripWeapons::Use
 */
void __thiscall FUN_1002ad70(void *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uStack00000008;
  int local_4;
  
  if (*(int *)((int)this + 0x968) != 0) {
    CBasePlayer::ResetAutoaim((int)this);
    (**(code **)(**(int **)((int)this + 0x968) + 0x10c))(0);
    *(undefined4 *)((int)this + 0x968) = 0;
  }
  *(undefined4 *)((int)this + 0x970) = 0;
  piVar3 = (int *)((int)this + 0x950);
  local_4 = 6;
  do {
    iVar2 = *piVar3;
    *(int *)((int)this + 0x968) = iVar2;
    while (iVar2 != 0) {
      iVar2 = (*(int **)((int)this + 0x968))[0x1d];
      (**(code **)(**(int **)((int)this + 0x968) + 0x11c))();
      *(int *)((int)this + 0x968) = iVar2;
    }
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  *(undefined4 *)((int)this + 0x968) = 0;
  *(undefined4 *)(*(int *)((int)this + 4) + 0xbc) = 0;
  *(undefined4 *)(*(int *)((int)this + 4) + 0xc0) = 0;
  if (param_1 == 0) {
    puVar1 = (uint *)(*(int *)((int)this + 4) + 0x168);
    *puVar1 = *puVar1 & 0x80000000;
  }
  else {
    *(undefined4 *)(*(int *)((int)this + 4) + 0x168) = 0;
  }
  puVar4 = (undefined4 *)((int)this + 0x978);
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  (**(code **)(*(int *)this + 0x148))();
  (*g_engfuncs.pfnMessageBegin)
            (1,DAT_100cbbcc,(float *)0x0,*(edict_t **)(*(int *)((int)this + 4) + 0x208));
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnWriteByte)(0);
  uStack00000008 = 0x1002ae6f;
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 1002af60  FUN_1002af60  (1029 bytes)
 * undefined FUN_1002af60(int * param_1)
 * called by: CBasePlayer::PreThink
 */
void __fastcall FUN_1002af60(int *param_1)

{
  uint uVar1;
  int iVar2;
  edict_t *peVar3;
  void *pvVar4;
  void *extraout_ECX;
  void *pvVar5;
  entvars_t *peVar6;
  longlong lVar7;
  char *pcVar8;
  undefined4 uVar9;
  
  pvVar4 = (void *)param_1[1];
  if (*(int *)((int)pvVar4 + 0x108) == 8) {
    return;
  }
  if (*(float *)((int)pvVar4 + 0x160) < 0.0) {
    return;
  }
  if (*(int *)((int)pvVar4 + 0x1c0) == 3) {
    uVar1 = param_1[0x3f];
    *(undefined1 *)(param_1 + 0x41) = 0;
    param_1[0x3f] = uVar1 & 0xfff7ffff;
    if (gpGlobals->time <= *(float *)((int)pvVar4 + 0x1fc)) {
      param_1[0x3f] = uVar1 & 0xfff7bfff;
    }
    else if (*(float *)((int)pvVar4 + 0x200) < gpGlobals->time) {
      *(float *)((int)pvVar4 + 0x1e0) = *(float *)((int)pvVar4 + 0x1e0) + 1.0;
      if (5.0 < *(float *)(param_1[1] + 0x1e0)) {
        *(undefined4 *)(param_1[1] + 0x1e0) = 0x40a00000;
      }
      peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
      if (peVar3 == (edict_t *)0x0) {
        peVar6 = (entvars_t *)0x0;
      }
      else {
        peVar6 = &peVar3->v;
      }
      peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
      if (peVar3 != (edict_t *)0x0) {
        peVar3 = (edict_t *)&peVar3->v;
      }
      (**(code **)(*param_1 + 0x38))(peVar3,peVar6,*(undefined4 *)(param_1[1] + 0x1e0),0x4000);
      *(float *)(param_1[1] + 0x200) = gpGlobals->time + 1.0;
      lVar7 = __ftol();
      param_1[0x240] = (int)lVar7;
    }
  }
  else {
    if (gpGlobals->time <= *(float *)((int)pvVar4 + 0x1fc)) {
      if (*(float *)((int)pvVar4 + 0x1fc) < gpGlobals->time + 9.0) {
        pvVar4 = *(void **)((int)pvVar4 + 0x208);
        pcVar8 = s_player_pl_wade2_wav_10091ff8;
        pvVar5 = pvVar4;
        goto LAB_1002afff;
      }
    }
    else {
      pcVar8 = s_player_pl_wade1_wav_1009200c;
      pvVar5 = *(void **)((int)pvVar4 + 0x208);
LAB_1002afff:
      EMIT_SOUND_DYN(pvVar4,pvVar5,2,pcVar8,0x3f800000,0x3f4ccccd,0,100);
    }
    *(float *)(param_1[1] + 0x1fc) = gpGlobals->time + 12.0;
    *(undefined4 *)(param_1[1] + 0x1e0) = 0x40000000;
    if (param_1[0x241] < param_1[0x240]) {
      *(undefined1 *)(param_1 + 0x41) = 0;
      param_1[0x3f] = param_1[0x3f] & 0xffffbfffU | 0x80000;
    }
  }
  iVar2 = param_1[1];
  if (*(int *)(iVar2 + 0x1c0) == 0) {
    if ((*(uint *)(iVar2 + 0x1a4) & 0x10) == 0) {
      return;
    }
    *(uint *)(iVar2 + 0x1a4) = *(uint *)(iVar2 + 0x1a4) & 0xffffffef;
    return;
  }
  lVar7 = __ftol();
  iVar2 = (*g_engfuncs.pfnRandomLong)(0,0x1f);
  if ((iVar2 != 0) || (iVar2 = (*g_engfuncs.pfnRandomLong)(0,0xb), iVar2 < (int)lVar7))
  goto switchD_1002b1d5_default;
  iVar2 = (*g_engfuncs.pfnRandomLong)(0,3);
  switch(iVar2) {
  case 0:
    pcVar8 = s_player_pl_swim1_wav_100920bc;
    goto LAB_1002b246;
  case 1:
    pvVar4 = *(void **)(param_1[1] + 0x208);
    pcVar8 = s_player_pl_swim2_wav_100920a8;
    pvVar5 = extraout_ECX;
    break;
  case 2:
    pvVar5 = (void *)param_1[1];
    pvVar4 = *(void **)((int)pvVar5 + 0x208);
    pcVar8 = s_player_pl_swim3_wav_10092094;
    break;
  case 3:
    pcVar8 = s_player_pl_swim4_wav_10092080;
LAB_1002b246:
    pvVar5 = *(void **)(param_1[1] + 0x208);
    pvVar4 = pvVar5;
    break;
  default:
    goto switchD_1002b1d5_default;
  }
  EMIT_SOUND_DYN(pvVar5,pvVar4,4,pcVar8,0x3f4ccccd,0x3f4ccccd,0,100);
switchD_1002b1d5_default:
  iVar2 = param_1[1];
  if (*(int *)(iVar2 + 0x1c4) == -5) {
    if (gpGlobals->time <= *(float *)(iVar2 + 0x1e4)) goto LAB_1002b33f;
    peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    if (peVar3 == (edict_t *)0x0) {
      peVar6 = (entvars_t *)0x0;
    }
    else {
      peVar6 = &peVar3->v;
    }
    peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    if (peVar3 == (edict_t *)0x0) {
      peVar3 = (edict_t *)0x0;
    }
    else {
      peVar3 = (edict_t *)&peVar3->v;
    }
    uVar9 = 8;
    iVar2 = *(int *)(param_1[1] + 0x1c0) * 10;
  }
  else {
    if (*(int *)(iVar2 + 0x1c4) != -4) goto LAB_1002b33f;
    *(float *)(iVar2 + 0x1e4) = gpGlobals->time + 1.0;
    peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    if (peVar3 == (edict_t *)0x0) {
      peVar6 = (entvars_t *)0x0;
    }
    else {
      peVar6 = &peVar3->v;
    }
    peVar3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    if (peVar3 != (edict_t *)0x0) {
      peVar3 = (edict_t *)&peVar3->v;
    }
    uVar9 = 0x100000;
    iVar2 = *(int *)(param_1[1] + 0x1c0) << 2;
  }
  (**(code **)(*param_1 + 0x38))(peVar3,peVar6,(float)iVar2,uVar9);
LAB_1002b33f:
  uVar1 = *(uint *)(param_1[1] + 0x1a4);
  if ((uVar1 & 0x10) == 0) {
    *(uint *)(param_1[1] + 0x1a4) = uVar1 | 0x10;
    *(undefined4 *)(param_1[1] + 0x1e4) = 0;
  }
  return;
}

/* 1002b380  FUN_1002b380  (18 bytes)
 * bool FUN_1002b380(int param_1)
 * called by: CBasePlayer::PreThink, CTSAnimation::Animate, CTSStunt::GoRoll, FUN_100500f0, FUN_1005acf0, FUN_1005d0e0, FUN_10061b70, pfnClientCommand
 */
bool __fastcall FUN_1002b380(int param_1)

{
  return *(int *)(*(int *)(param_1 + 4) + 0x108) == 5;
}

/* 1002c530  FUN_1002c530  (263 bytes)
 * undefined FUN_1002c530(byte.conflict * param_1)
 * called by: pfnClientCommand
 */
void __thiscall FUN_1002c530(void *this,byte_conflict *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  byte_conflict *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  int local_4;
  
  pbVar3 = param_1;
  if (param_1 != (byte_conflict *)0x0) {
    param_1 = (byte_conflict *)((int)this + 0x950);
    local_4 = 0;
    piVar7 = (int *)0x0;
    do {
      piVar8 = *(int **)param_1;
      if (piVar8 == (int *)0x0) {
LAB_1002c5bb:
        piVar8 = piVar7;
        if (piVar8 != (int *)0x0) goto LAB_1002c5dc;
      }
      else if (piVar8 != (int *)0x0) {
        do {
          pbVar4 = (byte *)(gpGlobals->pStringBase + *(int *)piVar8[1]);
          pbVar6 = pbVar3;
          do {
            bVar1 = *pbVar4;
            bVar9 = bVar1 < *pbVar6;
            if (bVar1 != *pbVar6) {
LAB_1002c5a1:
              iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_1002c5a6;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar9 = bVar1 < pbVar6[1];
            if (bVar1 != pbVar6[1]) goto LAB_1002c5a1;
            pbVar4 = pbVar4 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_1002c5a6:
          piVar7 = piVar8;
          if (iVar5 == 0) goto LAB_1002c5bb;
          piVar8 = (int *)piVar8[0x1d];
        } while (piVar8 != (int *)0x0);
      }
      local_4 = local_4 + 1;
      param_1 = param_1 + 4;
      piVar7 = piVar8;
    } while (local_4 < 6);
    if (piVar8 != (int *)0x0) {
LAB_1002c5dc:
      if (piVar8 != *(int **)((int)this + 0x968)) {
        CBasePlayer::ResetAutoaim((int)this);
        if (*(int **)((int)this + 0x968) != (int *)0x0) {
          (**(code **)(**(int **)((int)this + 0x968) + 0x10c))(0);
        }
        uVar2 = *(undefined4 *)((int)this + 0x968);
        *(int **)((int)this + 0x968) = piVar8;
        *(undefined4 *)((int)this + 0x970) = uVar2;
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 0x104))();
          (**(code **)(**(int **)((int)this + 0x968) + 0x110))();
        }
      }
    }
  }
  return;
}

/* 1002c640  FUN_1002c640  (111 bytes)
 * undefined FUN_1002c640(int param_1)
 */
void __fastcall FUN_1002c640(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x970) == 0) {
    return;
  }
  if ((*(int **)(param_1 + 0x968) != (int *)0x0) &&
     (iVar3 = (**(code **)(**(int **)(param_1 + 0x968) + 0x108))(), iVar3 == 0)) {
    return;
  }
  CBasePlayer::ResetAutoaim(param_1);
  if (*(int **)(param_1 + 0x968) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x968) + 0x10c))(0);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x968);
  piVar2 = *(int **)(param_1 + 0x970);
  *(int **)(param_1 + 0x968) = piVar2;
  *(undefined4 *)(param_1 + 0x970) = uVar1;
  (**(code **)(*piVar2 + 0x104))();
                    /* WARNING: Could not recover jumptable at 0x1002c6a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x968) + 0x110))();
  return;
}

/* 1002c6b0  FUN_1002c6b0  (31 bytes)
 * undefined4 FUN_1002c6b0(int param_1)
 * called by: CBasePlayer::PlayerDeathThink
 */
undefined4 __fastcall FUN_1002c6b0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x950);
  do {
    if (*piVar2 != 0) {
      return 1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 6);
  return 0;
}

/* 1002c700  FUN_1002c700  (184 bytes)
 * undefined FUN_1002c700(int param_1)
 * called by: CBasePlayer::ImpulseCommands
 */
void __thiscall FUN_1002c700(void *this,int param_1)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  void *this_00;
  
  iVar3 = *(int *)((int)this + 4);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  fVar2 = *(float *)(param_1 + 0x10);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(iVar3 + 0xc) = uVar1;
  *(float *)(iVar3 + 0x10) = fVar2 + 32.0;
  iVar3 = *(int *)((int)this + 4);
  *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x198) = *(undefined4 *)(param_1 + 0x208);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x130) = 0;
  *(float *)(*(int *)((int)this + 4) + 0x104) = gpGlobals->time + 0.1;
  this_00 = *(void **)(*(int *)((int)this + 4) + 0x208);
  EMIT_SOUND_DYN(this_00,this_00,2,s_player_sprayer_wav_100923d4,0x3f800000,0x3f4ccccd,0,100);
  return;
}

/* 1002c7c0  FUN_1002c7c0  (318 bytes)
 * undefined FUN_1002c7c0()
 */
void __fastcall FUN_1002c7c0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_38 [56];
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x198);
  if ((iVar2 == 0) || (iVar2 = *(int *)(iVar2 + 0x7c), iVar2 == 0)) {
    iVar2 = -1;
  }
  else {
    iVar2 = FUN_1002e390(iVar2);
  }
  iVar3 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)(param_1 + 4) + 0x198));
  FUN_10066df0();
  FUN_10067850();
  if (iVar2 == -1) {
    FUN_10067ef0((int)auStack_38,10);
    UTIL_Remove(param_1);
  }
  else {
    iVar5 = 1;
    lVar4 = __ftol();
    FUN_10067ff0((int)auStack_38,iVar3,(int)lVar4,iVar5);
    iVar3 = *(int *)(param_1 + 4);
    fVar1 = *(float *)(iVar3 + 0x130);
    *(float *)(iVar3 + 0x130) = *(float *)(iVar3 + 0x130) + 1.0;
    if ((float)(iVar2 + -1) <= fVar1) {
      UTIL_Remove(param_1);
    }
  }
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.1;
  return;
}

/* 1002c900  FUN_1002c900  (140 bytes)
 * undefined FUN_1002c900(int param_1)
 * called by: CBasePlayer::CheatImpulseCommands
 */
void __thiscall FUN_1002c900(void *this,int param_1)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  fVar2 = *(float *)(param_1 + 0x10);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(iVar3 + 0xc) = uVar1;
  *(float *)(iVar3 + 0x10) = fVar2 + 32.0;
  iVar3 = *(int *)((int)this + 4);
  *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x198) = *(undefined4 *)(param_1 + 0x208);
  *(code **)((int)this + 0x10) = FUN_1002c990;
  *(float *)(*(int *)((int)this + 4) + 0x104) = gpGlobals->time + 0.1;
  return;
}

/* 1002c990  FUN_1002c990  (184 bytes)
 * undefined FUN_1002c990()
 */
void __fastcall FUN_1002c990(int param_1)

{
  undefined1 auStack_38 [56];
  
  if (DAT_1009f4b8 != 1) {
    FUN_10066df0();
    FUN_10067850();
    FUN_10067ea0((int)auStack_38,0xf7);
  }
  *(code **)(param_1 + 0x10) = CBaseEntity::SUB_Remove;
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.1;
  return;
}

/* 1002caf0  FUN_1002caf0  (273 bytes)
 * undefined4 FUN_1002caf0(void)
 * called by: CBasePlayer::CheatImpulseCommands
 */
void * FUN_1002caf0(void)

{
  int iVar1;
  float fStack_28;
  edict_t *peStack_8;
  
  FUN_10066df0();
  FUN_10067850();
  if (((fStack_28 != 1.0) && (peStack_8 != (edict_t *)0x0)) &&
     (iVar1 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peStack_8), iVar1 != 0)) {
    if ((peStack_8 == (edict_t *)0x0) &&
       (peStack_8 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), peStack_8 == (edict_t *)0x0)) {
      return (void *)0;
    }
    return peStack_8->pvPrivateData;
  }
  return (void *)0;
}

/* 1002cc10  FUN_1002cc10  (13 bytes)
 * uint FUN_1002cc10(int param_1)
 * called by: CBasePlayer::UpdateClientData
 */
uint __fastcall FUN_1002cc10(int param_1)

{
  return *(uint *)(*(int *)(param_1 + 4) + 0x118) & 8;
}

/* 1002cc20  FUN_1002cc20  (164 bytes)
 * undefined FUN_1002cc20(int param_1)
 */
void __fastcall FUN_1002cc20(int param_1)

{
  void *this;
  int iVar1;
  undefined4 uStack00000010;
  
  iVar1 = (**(code **)(*DAT_1009f494 + 0xc))();
  if ((iVar1 != 0) && (*(int *)(*(int *)(param_1 + 4) + 0x168) < 0)) {
    this = *(void **)(*(int *)(param_1 + 4) + 0x208);
    EMIT_SOUND_DYN(this,this,1,s_items_flashlight1_wav_10091f28,0x3f800000,0x3f4ccccd,0,100);
    *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 8;
    (*g_engfuncs.pfnMessageBegin)
              (1,DAT_100cbbb8,(float *)0x0,*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
    (*g_engfuncs.pfnWriteByte)(1);
    (*g_engfuncs.pfnWriteByte)(*(int *)(param_1 + 0x768));
    uStack00000010 = 0x1002ccaf;
    (*g_engfuncs.pfnMessageEnd)();
    *(float *)(param_1 + 0x764) = gpGlobals->time + 1.2;
  }
  return;
}

/* 1002ccd0  FUN_1002ccd0  (135 bytes)
 * undefined FUN_1002ccd0(int param_1)
 * called by: CBasePlayer::UpdateClientData
 */
void __fastcall FUN_1002ccd0(int param_1)

{
  void *this;
  undefined4 uStack00000010;
  
  this = *(void **)(*(int *)(param_1 + 4) + 0x208);
  EMIT_SOUND_DYN(this,this,1,s_items_flashlight1_wav_10091f28,0x3f800000,0x3f4ccccd,0,100);
  *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) & 0xfffffff7;
  (*g_engfuncs.pfnMessageBegin)
            (1,DAT_100cbbb8,(float *)0x0,*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnWriteByte)(*(int *)(param_1 + 0x768));
  uStack00000010 = 0x1002cd42;
  (*g_engfuncs.pfnMessageEnd)();
  *(float *)(param_1 + 0x764) = gpGlobals->time + 0.2;
  return;
}

/* 1002d810  FUN_1002d810  (40 bytes)
 * undefined FUN_1002d810(int param_1)
 * called by: CBasePlayer::PreThink
 */
void __fastcall FUN_1002d810(int param_1)

{
  if ((*(float *)(param_1 + 0x118) <= 0.0) && (*(int **)(param_1 + 0x968) != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1002d831. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x968) + 0x114))();
    return;
  }
  return;
}

/* 1002d840  FUN_1002d840  (129 bytes)
 * undefined FUN_1002d840(int * param_1)
 * called by: CBasePlayer::PostThink
 */
void __fastcall FUN_1002d840(int *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = FUN_1000c210((uint *)(param_1 + 0x247));
  if ((CONCAT31(extraout_var,bVar1) == 0) &&
     (((((float)param_1[0x46] <= 0.0 || (param_1[0x25a] == 0)) ||
       (iVar2 = *(int *)(param_1[0x25a] + 0xbc), iVar2 == 0)) ||
      (((*(byte *)(param_1[1] + 0x180) & 0x40) != 0 && (*(int *)(iVar2 + 0xc) == 1)))))) {
    (**(code **)(*param_1 + 0x14c))();
    if ((int *)param_1[0x25a] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x25a] + 0x118))();
      iVar2 = (*g_engfuncs.pfnRandomLong)(0,32000);
      param_1[0x1d2] = iVar2;
    }
  }
  return;
}

/* 1002d8d0  FUN_1002d8d0  (24 bytes)
 * undefined4 FUN_1002d8d0(int param_1)
 * called by: CBasePlayer::TabulateAmmo, FUN_1001e9a0
 */
undefined4 __thiscall FUN_1002d8d0(void *this,int param_1)

{
  if (param_1 == -1) {
    return 0xffffffff;
  }
  return *(undefined4 *)((int)this + param_1 * 4 + 0x978);
}

/* 1002d8f0  FUN_1002d8f0  (57 bytes)
 * int FUN_1002d8f0(byte.conflict * param_1)
 * called by: CBasePlayer::GiveAmmo, CBasePlayer::TabulateAmmo, CBasePlayerWeapon::AddToPlayer, FUN_1001e9a0
 */
int __thiscall FUN_1002d8f0(void *this,byte_conflict *param_1)

{
  uint uVar1;
  void *extraout_ECX;
  int iVar2;
  
  if (param_1 != (byte_conflict *)0x0) {
    iVar2 = 1;
    do {
      if ((byte_conflict *)(&DAT_102dfa60)[iVar2 * 2] != (byte_conflict *)0x0) {
        uVar1 = FUN_1007e860(this,param_1,(byte_conflict *)(&DAT_102dfa60)[iVar2 * 2]);
        this = extraout_ECX;
        if (uVar1 == 0) {
          return iVar2;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x20);
  }
  return -1;
}

/* 1002d9c0  FUN_1002d9c0  (41 bytes)
 * undefined FUN_1002d9c0(int param_1)
 * called by: CTriggerCamera::FollowTarget, CTriggerCamera::Use
 */
void __thiscall FUN_1002d9c0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (param_1 == 0) {
    *(uint *)(iVar1 + 0x1a4) = *(uint *)(iVar1 + 0x1a4) | 0x1000;
    return;
  }
  *(uint *)(iVar1 + 0x1a4) = *(uint *)(iVar1 + 0x1a4) & 0xffffefff;
  return;
}

/* 1002e360  FUN_1002e360  (35 bytes)
 * undefined FUN_1002e360(int param_1)
 * called by: FUN_1005d8c0, pfnClientPutInServer, pfnPlayerCustomization
 */
void __thiscall FUN_1002e360(void *this,int param_1)

{
  if ((0 < param_1) && (param_1 < 8)) {
    *(int *)((int)this + 0xa98) = param_1;
    return;
  }
  *(undefined4 *)((int)this + 0xa98) = 0xffffffff;
  return;
}

/* 1002e390  FUN_1002e390  (7 bytes)
 * undefined4 FUN_1002e390(int param_1)
 * called by: FUN_1002c7c0
 */
undefined4 __fastcall FUN_1002e390(int param_1)

{
  return *(undefined4 *)(param_1 + 0xa98);
}

/* 1002e680  FUN_1002e680  (132 bytes)
 * undefined4 FUN_1002e680(int * param_1)
 * called by: FUN_1001eaf0, FUN_1006b080
 */
undefined4 __thiscall FUN_1002e680(void *this,int *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  iVar2 = (**(code **)(*param_1 + 0x138))();
  iVar2 = *(int *)((int)this + iVar2 * 4 + 0x950);
  if (iVar2 != 0) {
    do {
      pbVar3 = (byte *)(gpGlobals->pStringBase + **(int **)(iVar2 + 4));
      pbVar5 = (byte *)(gpGlobals->pStringBase + *(int *)param_1[1]);
      do {
        bVar1 = *pbVar3;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_1002e6df:
          iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_1002e6e4;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_1002e6df;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_1002e6e4:
      if (iVar4 == 0) {
        return 1;
      }
      iVar2 = *(int *)(iVar2 + 0x74);
    } while (iVar2 != 0);
  }
  return 0;
}

/* 1002e7b0  FUN_1002e7b0  (80 bytes)
 * undefined4 FUN_1002e7b0(int * param_1)
 * called by: CBasePlayer::AddPlayerItem, FUN_10023d60
 */
undefined4 __thiscall FUN_1002e7b0(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x100))();
  if (iVar1 == 0) {
    return 0;
  }
  CBasePlayer::ResetAutoaim((int)this);
  if (*(int **)((int)this + 0x968) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x968) + 0x10c))(0);
  }
  *(int **)((int)this + 0x968) = param_1;
  (**(code **)(*param_1 + 0x104))();
  return 1;
}

/* 1002ed80  FUN_1002ed80  (76 bytes)
 * undefined FUN_1002ed80(int param_1)
 * called by: CBasePlayer::ImpulseCommands
 */
void __cdecl FUN_1002ed80(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &PTR_BreakableRespawn_100858c8;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1002edd0  FUN_1002edd0  (6 bytes)
 * undefined FUN_1002edd0()
 */
undefined4 FUN_1002edd0(void)

{
  return 0x80000000;
}

/* 1002ede0  FUN_1002ede0  (76 bytes)
 * undefined FUN_1002ede0(int param_1)
 * called by: CBasePlayer::CheatImpulseCommands
 */
void __cdecl FUN_1002ede0(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x54), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &PTR_BreakableRespawn_100859b8;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1002f540  FUN_1002f540  (247 bytes)
 * undefined FUN_1002f540(float * param_1, float * param_2, float * param_3, float * param_4)
 * called by: FUN_100323f0, FUN_10032b00, FUN_10033a80, PM_PlayerMove
 */
void __cdecl FUN_1002f540(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar6 = (float10)fsin((float10)param_1[1] * (float10)0.017453292519943295);
  fVar1 = (float)fVar6;
  fVar6 = (float10)fcos((float10)param_1[1] * (float10)0.017453292519943295);
  fVar7 = (float10)fsin((float10)*param_1 * (float10)0.017453292519943295);
  fVar2 = (float)fVar7;
  fVar7 = (float10)fcos((float10)*param_1 * (float10)0.017453292519943295);
  fVar3 = (float)fVar7;
  fVar7 = (float10)fsin((float10)param_1[2] * (float10)0.017453292519943295);
  fVar4 = (float)fVar7;
  fVar7 = (float10)fcos((float10)param_1[2] * (float10)0.017453292519943295);
  fVar5 = (float)fVar7;
  if (param_2 != (float *)0x0) {
    *param_2 = (float)((float10)fVar3 * fVar6);
    param_2[1] = fVar3 * fVar1;
    param_2[2] = -fVar2;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = (float)((float10)fVar5 * (float10)fVar1 - (float10)fVar4 * (float10)fVar2 * fVar6);
    param_3[1] = (float)(((float10)fVar5 * fVar6 + (float10)fVar4 * (float10)fVar2 * (float10)fVar1)
                        * (float10)-1.0);
    param_3[2] = fVar4 * fVar3 * -1.0;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = (float)((float10)fVar4 * (float10)fVar1 + (float10)fVar5 * (float10)fVar2 * fVar6);
    param_4[1] = (float)((float10)fVar5 * (float10)fVar2 * (float10)fVar1 - (float10)fVar4 * fVar6);
    param_4[2] = fVar5 * fVar3;
    return;
  }
  return;
}

/* 1002f8e0  FUN_1002f8e0  (67 bytes)
 * undefined FUN_1002f8e0(int param_1)
 * called by: FUN_1002f930
 */
void __cdecl FUN_1002f8e0(int param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    fVar1 = *(float *)(param_1 + iVar2 * 4);
    if (*(float *)(param_1 + iVar2 * 4) <= 180.0) {
      if (fVar1 < -180.0) {
        fVar1 = *(float *)(param_1 + iVar2 * 4) + 360.0;
        goto LAB_1002f919;
      }
    }
    else {
      fVar1 = fVar1 - 360.0;
LAB_1002f919:
      *(float *)(param_1 + iVar2 * 4) = fVar1;
    }
    iVar2 = iVar2 + 1;
    if (2 < iVar2) {
      return;
    }
  } while( true );
}

/* 1002f930  FUN_1002f930  (123 bytes)
 * undefined FUN_1002f930(int param_1, float * param_2, int param_3, float param_4)
 */
void __cdecl FUN_1002f930(int param_1,float *param_2,int param_3,float param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_1002f8e0(param_1);
  FUN_1002f8e0((int)param_2);
  iVar5 = param_1 - (int)param_2;
  iVar3 = param_3 - (int)param_2;
  iVar4 = 3;
  do {
    fVar1 = *(float *)(iVar5 + (int)param_2);
    fVar2 = *param_2 - fVar1;
    if (fVar2 <= 180.0) {
      if (fVar2 < -180.0) {
        fVar2 = fVar2 + 360.0;
      }
    }
    else {
      fVar2 = fVar2 - 360.0;
    }
    param_2 = param_2 + 1;
    iVar4 = iVar4 + -1;
    *(float *)(iVar3 + -4 + (int)param_2) = fVar2 * param_4 + fVar1;
  } while (iVar4 != 0);
  FUN_1002f8e0(param_3);
  return;
}

/* 1002faa0  FUN_1002faa0  (45 bytes)
 * undefined4 FUN_1002faa0(int param_1, float * param_2)
 * called by: PM_PlayerMove
 */
undefined4 __cdecl FUN_1002faa0(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = param_1 - (int)param_2;
  do {
    if (*(float *)(iVar2 + (int)param_2) != *param_2) {
      return 0;
    }
    iVar1 = iVar1 + 1;
    param_2 = param_2 + 1;
  } while (iVar1 < 3);
  return 1;
}

/* 1002fad0  FUN_1002fad0  (49 bytes)
 * undefined FUN_1002fad0(float * param_1, float param_2, float * param_3, float * param_4)
 * called by: FUN_10031910, FUN_10031d80, FUN_100323f0, FUN_100324c0, FUN_10032b00, FUN_10033560, PM_PlayerMove
 */
void __cdecl FUN_1002fad0(float *param_1,float param_2,float *param_3,float *param_4)

{
  *param_4 = param_2 * *param_3 + *param_1;
  param_4[1] = param_2 * param_3[1] + param_1[1];
  param_4[2] = param_2 * param_3[2] + param_1[2];
  return;
}

/* 1002fbb0  FUN_1002fbb0  (59 bytes)
 * undefined FUN_1002fbb0(float * param_1, float * param_2, float * param_3)
 * called by: FUN_10031150, FUN_10032b00
 */
void __cdecl FUN_1002fbb0(float *param_1,float *param_2,float *param_3)

{
  *param_3 = param_2[2] * param_1[1] - param_1[2] * param_2[1];
  param_3[1] = param_1[2] * *param_2 - *param_1 * param_2[2];
  param_3[2] = *param_1 * param_2[1] - *param_2 * param_1[1];
  return;
}

/* 1002fbf0  FUN_1002fbf0  (32 bytes)
 * float10 FUN_1002fbf0(int param_1)
 * called by: FUN_10030220, FUN_10030b00, FUN_100324c0, FUN_100334f0, FUN_10057d10, FUN_10057d70, FUN_10058fd0
 */
float10 __cdecl FUN_1002fbf0(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)0.0;
  iVar1 = 0;
  do {
    fVar3 = (float10)*(float *)(param_1 + iVar1 * 4);
    iVar1 = iVar1 + 1;
    fVar2 = fVar3 * fVar3 + fVar2;
  } while (iVar1 < 3);
  return SQRT(fVar2);
}

/* 1002fc10  FUN_1002fc10  (78 bytes)
 * undefined FUN_1002fc10(float * param_1)
 * called by: FUN_10031910, FUN_10031c20, FUN_100324c0, FUN_10032b00, FUN_10033560, FUN_10033b10, FUN_100582d0, FUN_10058680, FUN_10058fd0, PM_PlayerMove
 */
void __cdecl FUN_1002fc10(float *param_1)

{
  float fVar1;
  
  fVar1 = SQRT(param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1);
  if (fVar1 != 0.0) {
    fVar1 = 1.0 / fVar1;
    *param_1 = fVar1 * *param_1;
    param_1[1] = fVar1 * param_1[1];
    param_1[2] = fVar1 * param_1[2];
  }
  return;
}

/* 1002fc80  FUN_1002fc80  (37 bytes)
 * undefined FUN_1002fc80(float * param_1, float param_2, float * param_3)
 * called by: FUN_10031150, FUN_10031910, FUN_10031c20, FUN_100324c0, FUN_10032b00, FUN_100334f0, FUN_10033b10, FUN_10058fd0, PM_PlayerMove
 */
void __cdecl FUN_1002fc80(float *param_1,float param_2,float *param_3)

{
  *param_3 = param_2 * *param_1;
  param_3[1] = param_2 * param_1[1];
  param_3[2] = param_2 * param_1[2];
  return;
}

/* 1002fe40  FUN_1002fe40  (120 bytes)
 * undefined FUN_1002fe40(int param_1, int param_2)
 * called by: FUN_1002fec0
 */
void __cdecl FUN_1002fe40(int param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char local_10 [16];
  
  pcVar5 = &DAT_100a0328 + param_1 * 0xd;
  pcVar3 = pcVar5;
  do {
    cVar1 = *pcVar3;
    pcVar3[(int)(local_10 + -(int)pcVar5)] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar2 = (&DAT_100a1d28)[param_1];
  pcVar3 = &DAT_100a0328 + param_2 * 0xd;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4[(int)pcVar5 - (int)pcVar3] = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  (&DAT_100a1d28)[param_1] = (&DAT_100a1d28)[param_2];
  pcVar5 = local_10;
  do {
    cVar1 = *pcVar5;
    pcVar5[(int)pcVar3 - (int)local_10] = cVar1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  (&DAT_100a1d28)[param_2] = uVar2;
  return;
}

/* 1002fec0  FUN_1002fec0  (101 bytes)
 * undefined FUN_1002fec0(void * param_1)
 * called by: FUN_1002ff30
 */
void __fastcall FUN_1002fec0(void *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *extraout_ECX;
  void *extraout_ECX_00;
  byte_conflict *pbVar4;
  int iVar5;
  int iVar6;
  byte_conflict *local_4;
  
  if (0 < DAT_100a1f30) {
    local_4 = &DAT_100a0328;
    iVar3 = DAT_100a1f30;
    iVar6 = 0;
    do {
      iVar1 = iVar6 + 1;
      iVar5 = iVar1;
      pbVar4 = local_4;
      if (iVar1 < iVar3) {
        do {
          uVar2 = FUN_1007e860(param_1,local_4,pbVar4 + 0xd);
          param_1 = extraout_ECX;
          if (0 < (int)uVar2) {
            FUN_1002fe40(iVar6,iVar5);
            param_1 = extraout_ECX_00;
          }
          iVar5 = iVar5 + 1;
          iVar3 = DAT_100a1f30;
          pbVar4 = pbVar4 + 0xd;
        } while (iVar5 < DAT_100a1f30);
      }
      local_4 = local_4 + 0xd;
      iVar6 = iVar1;
    } while (iVar1 < iVar3);
  }
  return;
}

/* 1002ff30  FUN_1002ff30  (655 bytes)
 * undefined FUN_1002ff30(void)
 * called by: pfnPM_Init
 */
void FUN_1002ff30(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined *extraout_ECX;
  undefined *extraout_ECX_00;
  undefined *extraout_ECX_01;
  undefined *extraout_ECX_02;
  undefined *puVar6;
  undefined *extraout_ECX_03;
  undefined *puVar7;
  char *pcVar8;
  undefined *extraout_ECX_04;
  void *extraout_ECX_05;
  int iVar9;
  char *pcVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 uStack_20c;
  int iStack_208;
  undefined4 uStack_204;
  char local_200 [512];
  
  if (DAT_100a1f38 == 0) {
    puVar12 = (undefined4 *)&DAT_100a0328;
    for (iVar5 = 0x680; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    puVar12 = (undefined4 *)&DAT_100a1d28;
    for (iVar5 = 0x80; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    pcVar8 = local_200;
    for (iVar5 = 0x80; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
      pcVar8 = pcVar8 + 4;
    }
    DAT_100a1f30 = 0;
    uVar2 = (**(code **)(DAT_100a1f2c + 0x4f5a0))(s_sound_materials_txt_100960f0);
    uStack_204 = uVar2;
    iVar5 = (**(code **)(DAT_100a1f2c + 0x4f5a4))(s_sound_materials_txt_100960f0,5,0);
    if (iVar5 != 0) {
      uStack_20c = 0;
      iStack_208 = iVar5;
      iVar3 = (**(code **)(DAT_100a1f2c + 0x4f5ac))(iVar5,uVar2,&uStack_20c,local_200,0x1ff);
      puVar6 = extraout_ECX;
      while ((iVar3 != 0 && (DAT_100a1f30 < 0x200))) {
        iVar3 = 0;
        puVar7 = PTR_DAT_1009b9b8;
        cVar1 = local_200[0];
        while (PTR_DAT_1009b9b8 = puVar7, cVar1 != '\0') {
          if (DAT_1009bbc4 < 2) {
            uVar4 = (byte)puVar7[local_200[iVar3] * 2] & 8;
          }
          else {
            uVar4 = FUN_1006f09e(puVar6,(int)local_200[iVar3],8);
            puVar7 = extraout_ECX_00;
          }
          puVar6 = puVar7;
          if (uVar4 == 0) break;
          iVar9 = iVar3 + 1;
          iVar3 = iVar3 + 1;
          puVar7 = PTR_DAT_1009b9b8;
          cVar1 = local_200[iVar9];
        }
        cVar1 = local_200[iVar3];
        if ((cVar1 != '\0') && (cVar1 != '/')) {
          if (DAT_1009bbc4 < 2) {
            uVar4 = *(ushort *)(PTR_DAT_1009b9b8 + cVar1 * 2) & 0x103;
          }
          else {
            uVar4 = FUN_1006f09e(puVar6,(int)cVar1,0x103);
          }
          if (uVar4 != 0) {
            uVar4 = FUN_1006ef63((int)local_200[iVar3]);
            iVar9 = DAT_100a1f30;
            (&DAT_100a1d28)[DAT_100a1f30] = (char)uVar4;
            cVar1 = local_200[iVar3 + 1];
            puVar6 = extraout_ECX_01;
            puVar7 = PTR_DAT_1009b9b8;
            while (iVar11 = iVar3 + 1, PTR_DAT_1009b9b8 = puVar7, cVar1 != '\0') {
              if (DAT_1009bbc4 < 2) {
                uVar4 = (byte)puVar7[cVar1 * 2] & 8;
              }
              else {
                uVar4 = FUN_1006f09e(puVar6,(int)cVar1,8);
                puVar7 = extraout_ECX_02;
              }
              puVar6 = puVar7;
              iVar9 = DAT_100a1f30;
              if (uVar4 == 0) break;
              cVar1 = local_200[iVar3 + 2];
              puVar7 = PTR_DAT_1009b9b8;
              iVar3 = iVar11;
            }
            cVar1 = local_200[iVar11];
            pcVar8 = local_200 + iVar11;
            puVar7 = PTR_DAT_1009b9b8;
            if (cVar1 != '\0') {
              while (PTR_DAT_1009b9b8 = puVar7, cVar1 != '\0') {
                if (DAT_1009bbc4 < 2) {
                  uVar4 = (byte)puVar7[local_200[iVar11] * 2] & 8;
                }
                else {
                  uVar4 = FUN_1006f09e(puVar6,(int)local_200[iVar11],8);
                  puVar7 = extraout_ECX_03;
                }
                iVar9 = DAT_100a1f30;
                if (uVar4 != 0) break;
                iVar5 = iVar11 + 1;
                iVar11 = iVar11 + 1;
                puVar6 = puVar7;
                puVar7 = PTR_DAT_1009b9b8;
                cVar1 = local_200[iVar5];
              }
              iVar5 = iStack_208;
              if (local_200[iVar11] != '\0') {
                if (iVar3 + 0xd <= iVar11) {
                  iVar11 = iVar3 + 0xd;
                }
                local_200[iVar11] = '\0';
                pcVar10 = &DAT_100a0328 + iVar9 * 0xd;
                DAT_100a1f30 = DAT_100a1f30 + 1;
                do {
                  cVar1 = *pcVar8;
                  pcVar8 = pcVar8 + 1;
                  *pcVar10 = cVar1;
                  pcVar10 = pcVar10 + 1;
                } while (cVar1 != '\0');
              }
            }
          }
        }
        iVar3 = (**(code **)(DAT_100a1f2c + 0x4f5ac))(iVar5,uStack_204,&uStack_20c,local_200,0x1ff);
        puVar6 = extraout_ECX_04;
      }
      (**(code **)(DAT_100a1f2c + 0x4f5a8))(iVar5);
      FUN_1002fec0(extraout_ECX_05);
      DAT_100a1f38 = 1;
    }
  }
  return;
}

/* 10030220  FUN_10030220  (1733 bytes)
 * undefined FUN_10030220(undefined4 param_1, undefined4 param_2)
 * called by: FUN_10030b00, FUN_100337d0, FUN_10058680
 */
void __cdecl FUN_10030220(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  float10 fVar4;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  *(uint *)(DAT_100a1f2c + 0x98) = (uint)(*(int *)(DAT_100a1f2c + 0x98) == 0);
  if (*(int *)(DAT_100a1f2c + 0x4f5b0) != 0) {
    iVar2 = (**(code **)(DAT_100a1f2c + 0x4f588))(0,1);
    uVar1 = iVar2 + *(int *)(DAT_100a1f2c + 0x98) * 2;
    if (((*(uint *)(DAT_100a1f2c + 0x208) & 1) == 0) &&
       ((*(uint *)(DAT_100a1f2c + 0x208) & 0x200) == 0)) {
      uStack_c = *(undefined4 *)(DAT_100a1f2c + 0x5c);
      uStack_8 = *(undefined4 *)(DAT_100a1f2c + 0x60);
      uStack_4 = 0;
      if ((*(int *)(DAT_100a1f2c + 8) == 0) ||
         ((DAT_100a1f34 != 0 ||
          (fVar4 = FUN_1002fbf0((int)&uStack_c), fVar4 < (float10)220.0 == (fVar4 == (float10)220.0)
          )))) {
        switch(param_1) {
        case 1:
          switch(uVar1) {
          case 0:
            (**(code **)(DAT_100a1f2c + 0x4f5b4))
                      (4,s_player_pl_metal1_wav_100922dc,param_2,0x3fa00000,0,100);
            return;
          case 1:
            (**(code **)(DAT_100a1f2c + 0x4f5b4))
                      (4,s_player_pl_metal3_wav_100922ac,param_2,0x3fa00000,0,100);
            return;
          case 2:
            (**(code **)(DAT_100a1f2c + 0x4f5b4))
                      (4,s_player_pl_metal2_wav_100922c4,param_2,0x3fa00000,0,100);
            return;
          case 3:
            (**(code **)(DAT_100a1f2c + 0x4f5b4))
                      (4,s_player_pl_metal4_wav_10092294,param_2,0x3fa00000,0,100);
            return;
          }
          break;
        case 2:
          switch(uVar1) {
          case 0:
            (**(code **)(DAT_100a1f2c + 0x4f5b4))
                      (4,s_player_pl_dirt1_wav_10092280,param_2,0x3fa00000,0,100);
            return;
          case 1:
            (**(code **)(DAT_100a1f2c + 0x4f5b4))
                      (4,s_player_pl_dirt3_wav_10092258,param_2,0x3fa00000,0,100);
            return;
          case 2:
            (**(code **)(DAT_100a1f2c + 0x4f5b4))
                      (4,s_player_pl_dirt2_wav_1009226c,param_2,0x3fa00000,0,100);
            return;
          case 3:
            (**(code **)(DAT_100a1f2c + 0x4f5b4))
                      (4,s_player_pl_dirt4_wav_10092244,param_2,0x3fa00000,0,100);
            return;
          }
          break;
        case 3:
          switch(uVar1) {
          case 0:
            (**(code **)(DAT_100a1f2c + 0x4f5b4))
                      (4,s_player_pl_duct1_wav_10092230,param_2,0x3fa00000,0,100);
            return;
          case 1:
            (**(code **)(DAT_100a1f2c + 0x4f5b4))
                      (4,s_player_pl_duct3_wav_10092208,param_2,0x3fa00000,0,100);
            return;
          case 2:
            (**(code **)(DAT_100a1f2c + 0x4f5b4))
                      (4,s_player_pl_duct2_wav_1009221c,param_2,0x3fa00000,0,100);
            return;
          case 3:
            (**(code **)(DAT_100a1f2c + 0x4f5b4))
                      (4,s_player_pl_duct4_wav_100921f4,param_2,0x3fa00000,0,100);
            return;
          }
          break;
        case 4:
          switch(uVar1) {
          case 0:
            (**(code **)(DAT_100a1f2c + 0x4f5b4))
                      (4,s_player_pl_grate1_wav_100921dc,param_2,0x3fa00000,0,100);
            return;
          case 1:
            (**(code **)(DAT_100a1f2c + 0x4f5b4))
                      (4,s_player_pl_grate3_wav_100921ac,param_2,0x3fa00000,0,100);
            return;
          case 2:
            (**(code **)(DAT_100a1f2c + 0x4f5b4))
                      (4,s_player_pl_grate2_wav_100921c4,param_2,0x3fa00000,0,100);
            return;
          case 3:
            (**(code **)(DAT_100a1f2c + 0x4f5b4))
                      (4,s_player_pl_grate4_wav_10092194,param_2,0x3fa00000,0,100);
            return;
          }
          break;
        case 5:
          iVar2 = (**(code **)(DAT_100a1f2c + 0x4f588))(0,4);
          if ((iVar2 == 0) || (uVar1 < 5)) {
            switch(uVar1) {
            case 0:
              (**(code **)(DAT_100a1f2c + 0x4f5b4))
                        (4,s_player_pl_tile1_wav_10092120,param_2,0x3fa00000,0,100);
              return;
            case 1:
              (**(code **)(DAT_100a1f2c + 0x4f5b4))
                        (4,s_player_pl_tile3_wav_100920f8,param_2,0x3fa00000,0,100);
              return;
            case 2:
              (**(code **)(DAT_100a1f2c + 0x4f5b4))
                        (4,s_player_pl_tile2_wav_1009210c,param_2,0x3fa00000,0,100);
              return;
            case 3:
              (**(code **)(DAT_100a1f2c + 0x4f5b4))
                        (4,s_player_pl_tile4_wav_100920e4,param_2,0x3fa00000,0,100);
              return;
            default:
              (**(code **)(DAT_100a1f2c + 0x4f5b4))
                        (4,s_player_pl_tile5_wav_100920d0,param_2,0x3fa00000,0,100);
              return;
            }
          }
          break;
        case 6:
          switch(uVar1) {
          case 0:
            (**(code **)(DAT_100a1f2c + 0x4f5b4))
                      (4,s_player_pl_slosh1_wav_1009217c,param_2,0x3fa00000,0,100);
            return;
          case 1:
            (**(code **)(DAT_100a1f2c + 0x4f5b4))
                      (4,s_player_pl_slosh3_wav_1009214c,param_2,0x3fa00000,0,100);
            return;
          case 2:
            (**(code **)(DAT_100a1f2c + 0x4f5b4))
                      (4,s_player_pl_slosh2_wav_10092164,param_2,0x3fa00000,0,100);
            return;
          case 3:
            (**(code **)(DAT_100a1f2c + 0x4f5b4))
                      (4,s_player_pl_slosh4_wav_10092134,param_2,0x3fa00000,0,100);
            return;
          }
          break;
        case 7:
          if (DAT_100a1f3c == 0) {
            DAT_100a1f3c = 1;
            return;
          }
          bVar3 = DAT_100a1f3c == 3;
          DAT_100a1f3c = DAT_100a1f3c + 1;
          if (bVar3) {
            DAT_100a1f3c = 0;
          }
          switch(uVar1) {
          case 0:
            (**(code **)(DAT_100a1f2c + 0x4f5b4))
                      (4,s_player_pl_wade1_wav_1009200c,param_2,0x3fa00000,0,100);
            return;
          case 1:
            (**(code **)(DAT_100a1f2c + 0x4f5b4))
                      (4,s_player_pl_wade2_wav_10091ff8,param_2,0x3fa00000,0,100);
            return;
          case 2:
            (**(code **)(DAT_100a1f2c + 0x4f5b4))
                      (4,s_player_pl_wade3_wav_10091fe4,param_2,0x3fa00000,0,100);
            return;
          case 3:
            (**(code **)(DAT_100a1f2c + 0x4f5b4))
                      (4,s_player_pl_wade4_wav_10091fd0,param_2,0x3fa00000,0,100);
            return;
          }
          break;
        case 8:
          switch(uVar1) {
          case 0:
            (**(code **)(DAT_100a1f2c + 0x4f5b4))
                      (4,s_player_pl_ladder1_wav_10092068,param_2,0x3fa00000,0,100);
            return;
          case 1:
            (**(code **)(DAT_100a1f2c + 0x4f5b4))
                      (4,s_player_pl_ladder3_wav_10092038,param_2,0x3fa00000,0,100);
            return;
          case 2:
            (**(code **)(DAT_100a1f2c + 0x4f5b4))
                      (4,s_player_pl_ladder2_wav_10092050,param_2,0x3fa00000,0,100);
            return;
          case 3:
            (**(code **)(DAT_100a1f2c + 0x4f5b4))
                      (4,s_player_pl_ladder4_wav_10092020,param_2,0x3fa00000,0,100);
            return;
          }
          break;
        default:
          switch(uVar1) {
          case 0:
            (**(code **)(DAT_100a1f2c + 0x4f5b4))
                      (4,s_player_pl_step1_wav_10092390,param_2,0x3fa00000,0,100);
            return;
          case 1:
            (**(code **)(DAT_100a1f2c + 0x4f5b4))
                      (4,s_player_pl_step3_wav_10092368,param_2,0x3fa00000,0,100);
            return;
          case 2:
            (**(code **)(DAT_100a1f2c + 0x4f5b4))
                      (4,s_player_pl_step2_wav_1009237c,param_2,0x3fa00000,0,100);
            return;
          case 3:
            (**(code **)(DAT_100a1f2c + 0x4f5b4))
                      (4,s_player_pl_step4_wav_10092354,param_2,0x3fa00000,0,100);
          }
        }
      }
    }
  }
  return;
}

/* 100309a0  FUN_100309a0  (67 bytes)
 * undefined4 FUN_100309a0(undefined1 param_1)
 * called by: FUN_10030b00, FUN_100337d0, FUN_10058680
 */
undefined4 __cdecl FUN_100309a0(undefined1 param_1)

{
  switch(param_1) {
  case 0x44:
    return 2;
  default:
    return 0;
  case 0x47:
    return 4;
  case 0x4d:
    return 1;
  case 0x53:
    return 6;
  case 0x54:
    return 5;
  case 0x56:
    return 3;
  }
}

/* 10030a20  FUN_10030a20  (221 bytes)
 * undefined FUN_10030a20(void)
 * called by: FUN_10030b00
 */
void FUN_10030a20(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = *(undefined4 *)(DAT_100a1f2c + 0x38);
  local_8 = *(undefined4 *)(DAT_100a1f2c + 0x3c);
  local_4 = *(undefined4 *)(DAT_100a1f2c + 0x40);
  local_18 = *(undefined4 *)(DAT_100a1f2c + 0x38);
  local_14 = *(undefined4 *)(DAT_100a1f2c + 0x3c);
  local_10 = *(float *)(DAT_100a1f2c + 0x40) - 64.0;
  *(undefined1 *)(DAT_100a1f2c + 0xf0) = 0;
  *(undefined1 *)(DAT_100a1f2c + 0x1f0) = 0x43;
  pcVar2 = (char *)(**(code **)(DAT_100a1f2c + 0x4f5b8))
                             (*(undefined4 *)(DAT_100a1f2c + 0xe0),&local_c,&local_18);
  if (pcVar2 != (char *)0x0) {
    if ((*pcVar2 == '-') || (*pcVar2 == '+')) {
      pcVar2 = pcVar2 + 2;
    }
    cVar1 = *pcVar2;
    if ((((cVar1 == '{') || (cVar1 == '!')) || (cVar1 == '~')) || (cVar1 == ' ')) {
      pcVar2 = pcVar2 + 1;
    }
    pcVar3 = (char *)(DAT_100a1f2c + 0xf0);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    *(undefined1 *)(DAT_100a1f2c + 0xfc) = 0;
    cVar1 = pfnPM_FindTextureType((char *)(DAT_100a1f2c + 0xf0));
    *(char *)(DAT_100a1f2c + 0x1f0) = cVar1;
  }
  return;
}

/* 10030b00  FUN_10030b00  (779 bytes)
 * undefined FUN_10030b00(void)
 * called by: FUN_100337d0, PM_PlayerMove
 */
void FUN_10030b00(void)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined1 extraout_DL;
  undefined4 uVar5;
  bool bVar6;
  float10 fVar7;
  float10 fVar8;
  longlong lVar9;
  float local_28;
  float local_20;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  float local_4;
  
  if (0 < *(int *)(DAT_100a1f2c + 0x94)) {
    return;
  }
  if ((*(uint *)(DAT_100a1f2c + 0xb8) & 0x1000) != 0) {
    return;
  }
  FUN_10030a20();
  fVar7 = FUN_1002fbf0(DAT_100a1f2c + 0x5c);
  bVar6 = *(int *)(DAT_100a1f2c + 0xdc) == 5;
  if (((*(uint *)(DAT_100a1f2c + 0xb8) & 0x4000) != 0) || (bVar6)) {
    local_28 = 60.0;
    local_20 = 80.0;
    if (bVar6) goto LAB_10030ba3;
  }
  else {
    local_28 = 120.0;
    local_20 = 210.0;
  }
  if (*(int *)(DAT_100a1f2c + 0xe0) == -1) {
    return;
  }
LAB_10030ba3:
  fVar8 = FUN_1002fbf0(DAT_100a1f2c + 0x5c);
  if (((float10)0.0 < fVar8) && ((local_28 <= (float)fVar7 || (*(int *)(DAT_100a1f2c + 0x94) == 0)))
     ) {
    bVar1 = (float)fVar7 < local_20;
    local_18 = *(undefined4 *)(DAT_100a1f2c + 0x38);
    local_14 = *(undefined4 *)(DAT_100a1f2c + 0x3c);
    local_c = *(undefined4 *)(DAT_100a1f2c + 0x38);
    local_8 = *(undefined4 *)(DAT_100a1f2c + 0x3c);
    fVar2 = *(float *)(DAT_100a1f2c + 0x4f52c + *(int *)(DAT_100a1f2c + 0xbc) * 0xc) -
            *(float *)(DAT_100a1f2c + 0x4f4fc + *(int *)(DAT_100a1f2c + 0xbc) * 0xc);
    local_10 = *(float *)(DAT_100a1f2c + 0x40) - fVar2 * 0.3;
    local_4 = *(float *)(DAT_100a1f2c + 0x40) - fVar2 * 0.5;
    if (bVar6) {
      uVar5 = 8;
      local_28 = 0.35;
      *(undefined4 *)(DAT_100a1f2c + 0x94) = 0x15e;
    }
    else {
      iVar3 = (**(code **)(DAT_100a1f2c + 0x4f574))(&local_18,0);
      if (iVar3 == -3) {
        uVar5 = 7;
        local_28 = 0.65;
        *(undefined4 *)(DAT_100a1f2c + 0x94) = 600;
      }
      else {
        iVar4 = (**(code **)(DAT_100a1f2c + 0x4f574))(&local_c,0);
        iVar3 = DAT_100a1f2c;
        if (iVar4 == -3) {
          uVar5 = 6;
          if (bVar1) {
            local_28 = 0.2;
          }
          else {
            local_28 = 0.5;
          }
          *(uint *)(DAT_100a1f2c + 0x94) = (-(uint)bVar1 & 100) + 300;
        }
        else {
          uVar5 = FUN_100309a0(*(undefined1 *)(DAT_100a1f2c + 0x1f0));
          switch(extraout_DL) {
          case 0x44:
            if (bVar1) {
              local_28 = 0.25;
            }
            else {
              local_28 = 0.55;
            }
            break;
          default:
            if (bVar1) {
              local_28 = 0.2;
            }
            else {
              local_28 = 0.5;
            }
            break;
          case 0x56:
            if (bVar1) {
              local_28 = 0.4;
            }
            else {
              local_28 = 0.7;
            }
          }
          *(uint *)(iVar3 + 0x94) = (-(uint)bVar1 & 100) + 300;
        }
      }
    }
    iVar3 = DAT_100a1f2c;
    lVar9 = __ftol();
    *(int *)(iVar3 + 0x94) = (int)lVar9;
    iVar3 = DAT_100a1f2c;
    if (*(float *)(DAT_100a1f2c + 0x20c) != 0.0) {
      lVar9 = __ftol();
      *(int *)(iVar3 + 0x94) = (int)lVar9;
    }
    if ((*(uint *)(DAT_100a1f2c + 0xb8) & 0x4000) != 0) {
      local_28 = local_28 * 0.35;
    }
    FUN_10030220(uVar5,local_28);
  }
  return;
}

/* 10030fc0  FUN_10030fc0  (163 bytes)
 * byte.conflict FUN_10030fc0(float * param_1, float * param_2, float * param_3, float param_4)
 * called by: FUN_10031150, PM_PlayerMove
 */
byte_conflict __cdecl FUN_10030fc0(float *param_1,float *param_2,float *param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  byte bVar10;
  int iVar11;
  
  bVar10 = 0.0 < param_2[2];
  if (param_2[2] == 0.0) {
    bVar10 = bVar10 | 2;
  }
  iVar11 = 3;
  fVar2 = param_1[1];
  fVar3 = param_2[1];
  fVar4 = param_1[2];
  fVar5 = param_2[2];
  fVar6 = *param_1;
  fVar7 = *param_2;
  iVar9 = (int)param_2 - (int)param_3;
  do {
    pfVar1 = (float *)(iVar9 + (int)param_3);
    fVar8 = *(float *)((int)pfVar1 + ((int)param_1 - (int)param_2)) -
            (fVar6 * fVar7 + fVar4 * fVar5 + fVar2 * fVar3) * param_4 * *pfVar1;
    *param_3 = fVar8;
    if ((-0.1 < fVar8) && (fVar8 < 0.1)) {
      *param_3 = 0.0;
    }
    param_3 = param_3 + 1;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  return bVar10;
}

/* 10031070  FUN_10031070  (121 bytes)
 * undefined FUN_10031070(void)
 * called by: PM_PlayerMove
 */
void FUN_10031070(void)

{
  float fVar1;
  
  if (*(float *)(DAT_100a1f2c + 0xcc) == 0.0) {
    if (*(float *)(DAT_100a1f2c + 0xc0) == 0.0) {
      fVar1 = 1.0;
    }
    else {
      fVar1 = *(float *)(DAT_100a1f2c + 0xc0);
    }
    *(float *)(DAT_100a1f2c + 100) =
         *(float *)(DAT_100a1f2c + 100) -
         fVar1 * **(float **)(DAT_100a1f2c + 0x4f4f0) * *(float *)(DAT_100a1f2c + 0x10) * 0.5;
    *(float *)(DAT_100a1f2c + 100) =
         *(float *)(DAT_100a1f2c + 0x7c) * *(float *)(DAT_100a1f2c + 0x10) +
         *(float *)(DAT_100a1f2c + 100);
    *(undefined4 *)(DAT_100a1f2c + 0x7c) = 0;
    PM_CheckVelocity();
    return;
  }
  return;
}

/* 100310f0  FUN_100310f0  (93 bytes)
 * undefined FUN_100310f0(void)
 * called by: FUN_10057d70, FUN_100581d0, FUN_10058270, FUN_100582d0, FUN_10058680, PM_PlayerMove
 */
void FUN_100310f0(void)

{
  float fVar1;
  
  if (*(float *)(DAT_100a1f2c + 0xcc) == 0.0) {
    if (*(float *)(DAT_100a1f2c + 0xc0) == 0.0) {
      fVar1 = 1.0;
    }
    else {
      fVar1 = *(float *)(DAT_100a1f2c + 0xc0);
    }
    *(float *)(DAT_100a1f2c + 100) =
         *(float *)(DAT_100a1f2c + 100) -
         **(float **)(DAT_100a1f2c + 0x4f4f0) * *(float *)(DAT_100a1f2c + 0x10) * fVar1 * 0.5;
    PM_CheckVelocity();
    return;
  }
  return;
}

/* 10031150  FUN_10031150  (1182 bytes)
 * uint FUN_10031150(void)
 * called by: FUN_10031910, FUN_10031c20, FUN_10058fd0, PM_PlayerMove
 */
uint FUN_10031150(void)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int *piVar8;
  int aiStackY_168 [12];
  undefined4 uStackY_138;
  undefined1 *puStackY_134;
  uint local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  int local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  int aiStack_d0 [4];
  float fStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float afStack_90 [4];
  float afStack_80 [15];
  undefined1 local_44 [68];
  
  iVar7 = 0;
  local_108 = *(float *)(DAT_100a1f2c + 0x5c);
  local_104 = *(float *)(DAT_100a1f2c + 0x60);
  local_100 = *(float *)(DAT_100a1f2c + 100);
  local_10c = *(float *)(DAT_100a1f2c + 0x10);
  local_110 = 0;
  local_fc = 0.0;
  local_ec = 0;
  local_e8 = local_108;
  local_e4 = local_104;
  local_e0 = local_100;
  while( true ) {
    if (((*(float *)(DAT_100a1f2c + 0x5c) == 0.0) && (*(float *)(DAT_100a1f2c + 0x60) == 0.0)) &&
       (*(float *)(DAT_100a1f2c + 100) == 0.0)) goto LAB_100315a8;
    iVar2 = 0;
    pfVar4 = (float *)(DAT_100a1f2c + 0x38);
    do {
      iVar2 = iVar2 + 1;
      afStack_90[iVar2] = local_10c * pfVar4[9] + *pfVar4;
      pfVar4 = pfVar4 + 1;
    } while (iVar2 < 3);
    puStackY_134 = local_44;
    uStackY_138 = 0x10031206;
    piVar3 = (int *)(**(code **)(DAT_100a1f2c + 0x4f580))();
    piVar8 = aiStack_d0;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar8 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar8 = piVar8 + 1;
    }
    local_fc = fStack_c0 + local_fc;
    if (aiStack_d0[0] != 0) {
      *(undefined4 *)(DAT_100a1f2c + 0x5c) = DAT_1009fe84;
      *(undefined4 *)(DAT_100a1f2c + 0x60) = DAT_1009fe88;
      *(undefined4 *)(DAT_100a1f2c + 100) = DAT_1009fe8c;
      return 4;
    }
    iVar2 = iVar7;
    if (0.0 < fStack_c0) {
      *(undefined4 *)(DAT_100a1f2c + 0x38) = uStack_bc;
      *(undefined4 *)(DAT_100a1f2c + 0x3c) = uStack_b8;
      *(undefined4 *)(DAT_100a1f2c + 0x40) = uStack_b4;
      local_108 = *(float *)(DAT_100a1f2c + 0x5c);
      local_104 = *(float *)(DAT_100a1f2c + 0x60);
      local_100 = *(float *)(DAT_100a1f2c + 100);
      iVar2 = 0;
    }
    if (fStack_c0 == 1.0) goto LAB_100315a8;
    piVar3 = aiStack_d0;
    piVar8 = aiStackY_168;
    for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar8 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar8 = piVar8 + 1;
    }
    PM_AddToTouched();
    iVar5 = DAT_100a1f2c;
    if (0.7 < fStack_a8) {
      local_110 = local_110 | 1;
    }
    if (fStack_a8 == 0.0) {
      local_110 = local_110 | 2;
    }
    local_10c = local_10c - fStack_c0 * local_10c;
    if (4 < iVar2) break;
    iVar7 = iVar2 + 1;
    afStack_80[iVar2 * 3] = fStack_b0;
    afStack_80[iVar2 * 3 + 1] = fStack_ac;
    afStack_80[iVar2 * 3 + 2] = fStack_a8;
    if ((*(int *)(DAT_100a1f2c + 0xdc) != 3) ||
       ((*(int *)(DAT_100a1f2c + 0xe0) != -1 && (*(int *)(DAT_100a1f2c + 0xc4) == 0x3f800000)))) {
      iVar2 = 0;
      if (0 < iVar7) {
        pfVar4 = afStack_80;
        do {
          puStackY_134 = (undefined1 *)0x10031448;
          FUN_10030fc0(&local_108,pfVar4,(float *)(DAT_100a1f2c + 0x5c),1.0);
          iVar5 = 0;
          pfVar6 = afStack_80 + 1;
          do {
            if ((iVar5 != iVar2) &&
               (*(float *)(DAT_100a1f2c + 0x60) * *pfVar6 +
                pfVar6[-1] * *(float *)(DAT_100a1f2c + 0x5c) +
                pfVar6[1] * *(float *)(DAT_100a1f2c + 100) < 0.0)) break;
            iVar5 = iVar5 + 1;
            pfVar6 = pfVar6 + 3;
          } while (iVar5 < iVar7);
          if (iVar5 == iVar7) break;
          iVar2 = iVar2 + 1;
          pfVar4 = pfVar4 + 3;
        } while (iVar2 < iVar7);
      }
      if (iVar2 == iVar7) {
        if (iVar7 == 2) {
          FUN_1002fbb0(afStack_80,afStack_80 + 3,&fStack_dc);
          FUN_1002fc80(&fStack_dc,
                       fStack_dc * *(float *)(DAT_100a1f2c + 0x5c) +
                       fStack_d8 * *(float *)(DAT_100a1f2c + 0x60) +
                       fStack_d4 * *(float *)(DAT_100a1f2c + 100),(float *)(DAT_100a1f2c + 0x5c));
          goto LAB_100314f6;
        }
      }
      else {
LAB_100314f6:
        fVar1 = local_e8 * *(float *)(DAT_100a1f2c + 0x5c) +
                local_e4 * *(float *)(DAT_100a1f2c + 0x60) +
                local_e0 * *(float *)(DAT_100a1f2c + 100);
        if (fVar1 < 0.0 == (fVar1 == 0.0)) goto LAB_1003151c;
      }
      *(undefined4 *)(DAT_100a1f2c + 0x5c) = DAT_1009fe84;
      goto LAB_10031584;
    }
    if (0 < iVar7) {
      pfVar4 = afStack_80;
      iVar2 = iVar7;
      do {
        if (pfVar4[2] <= 0.7) {
          puStackY_134 = (undefined1 *)0x100313df;
          FUN_10030fc0(&local_108,pfVar4,&fStack_f8,(1.0 - *(float *)(iVar5 + 0xc4)) * 0.01 + 1.0);
        }
        else {
          puStackY_134 = (undefined1 *)0x10031399;
          FUN_10030fc0(&local_108,pfVar4,&fStack_f8,1.0);
          local_108 = fStack_f8;
          local_104 = fStack_f4;
          local_100 = fStack_f0;
        }
        pfVar4 = pfVar4 + 3;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(float *)(iVar5 + 0x5c) = fStack_f8;
    local_108 = fStack_f8;
    *(float *)(DAT_100a1f2c + 0x60) = fStack_f4;
    local_104 = fStack_f4;
    *(float *)(DAT_100a1f2c + 100) = fStack_f0;
    local_100 = fStack_f0;
LAB_1003151c:
    local_ec = local_ec + 1;
    if (3 < local_ec) {
LAB_100315a8:
      if (local_fc == 0.0) {
        *(undefined4 *)(DAT_100a1f2c + 0x5c) = DAT_1009fe84;
        *(undefined4 *)(DAT_100a1f2c + 0x60) = DAT_1009fe88;
        *(undefined4 *)(DAT_100a1f2c + 100) = DAT_1009fe8c;
      }
      return local_110;
    }
  }
  *(undefined4 *)(DAT_100a1f2c + 0x5c) = DAT_1009fe84;
LAB_10031584:
  *(undefined4 *)(DAT_100a1f2c + 0x60) = DAT_1009fe88;
  *(undefined4 *)(DAT_100a1f2c + 100) = DAT_1009fe8c;
  goto LAB_100315a8;
}

/* 100315f0  FUN_100315f0  (189 bytes)
 * undefined FUN_100315f0(float * param_1, float param_2, float param_3)
 * called by: FUN_10058fd0
 */
void __cdecl FUN_100315f0(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  if (((*(int *)(DAT_100a1f2c + 0xd0) == 0) && (*(float *)(DAT_100a1f2c + 0xcc) == 0.0)) &&
     (fVar1 = param_2 - (*(float *)(DAT_100a1f2c + 0x5c) * *param_1 +
                        *(float *)(DAT_100a1f2c + 0x60) * param_1[1] +
                        *(float *)(DAT_100a1f2c + 100) * param_1[2]), fVar1 < 0.0 == (fVar1 == 0.0))
     ) {
    fVar2 = *(float *)(DAT_100a1f2c + 0xc4) * *(float *)(DAT_100a1f2c + 0x10) * param_2 * param_3;
    if (((*(byte *)(DAT_100a1f2c + 0x208) & 0x20) == 0) &&
       ((*(uint *)(DAT_100a1f2c + 0xb8) & 0x4000) == 0)) {
      fVar2 = fVar2 * 0.7;
    }
    if (fVar1 < fVar2) {
      fVar2 = fVar1;
    }
    iVar3 = 0x5c;
    do {
      iVar4 = iVar3 + 4;
      *(float *)(iVar3 + DAT_100a1f2c) =
           fVar2 * *(float *)((int)param_1 + iVar3 + -0x5c) + *(float *)(iVar3 + DAT_100a1f2c);
      iVar3 = iVar4;
    } while (iVar4 < 0x68);
  }
  return;
}

/* 100316b0  FUN_100316b0  (416 bytes)
 * undefined FUN_100316b0(void)
 * called by: PM_PlayerMove
 */
void FUN_100316b0(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined4 auStack_88 [4];
  float fStack_78;
  undefined1 local_44 [68];
  
  iVar5 = DAT_100a1f2c;
  if (*(float *)(DAT_100a1f2c + 0xcc) == 0.0) {
    pfVar1 = (float *)(DAT_100a1f2c + 0x5c);
    fVar3 = SQRT(*(float *)(DAT_100a1f2c + 100) * *(float *)(DAT_100a1f2c + 100) +
                 *(float *)(DAT_100a1f2c + 0x60) * *(float *)(DAT_100a1f2c + 0x60) +
                 *(float *)(DAT_100a1f2c + 0x5c) * *(float *)(DAT_100a1f2c + 0x5c));
    if (0.1 <= fVar3) {
      fVar2 = 0.0;
      if (*(int *)(DAT_100a1f2c + 0xe0) != -1) {
        local_a0 = (1.0 / fVar3) * *pfVar1 * 16.0 + *(float *)(DAT_100a1f2c + 0x38);
        local_9c = (1.0 / fVar3) * *(float *)(DAT_100a1f2c + 0x60) * 16.0 +
                   *(float *)(DAT_100a1f2c + 0x3c);
        local_8c = *(float *)(DAT_100a1f2c + 0x4f4fc + *(int *)(DAT_100a1f2c + 0xbc) * 0xc) +
                   *(float *)(DAT_100a1f2c + 0x40);
        local_98 = local_8c - 34.0;
        local_94 = local_a0;
        local_90 = local_9c;
        puVar6 = (undefined4 *)
                 (**(code **)(DAT_100a1f2c + 0x4f580))(local_44,&local_94,&local_a0,0,0xffffffff);
        puVar8 = auStack_88;
        for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        iVar7 = *(int *)(DAT_100a1f2c + 0x4f4f0);
        if (fStack_78 == 1.0) {
          fVar2 = *(float *)(iVar7 + 0x20) * *(float *)(iVar7 + 0x1c);
        }
        else {
          fVar2 = *(float *)(iVar7 + 0x1c);
        }
        fVar4 = fVar3;
        if (fVar3 < *(float *)(iVar7 + 4)) {
          fVar4 = *(float *)(iVar7 + 4);
        }
        fVar2 = fVar4 * *(float *)(DAT_100a1f2c + 0x10) *
                fVar2 * *(float *)(DAT_100a1f2c + 0xc4) * 0.75;
      }
      fVar2 = fVar3 - fVar2;
      if (fVar2 < 0.0) {
        fVar2 = 0.0;
      }
      fVar2 = fVar2 / fVar3;
      fVar3 = *(float *)(iVar5 + 0x60);
      fVar4 = *(float *)(iVar5 + 100);
      *(float *)(DAT_100a1f2c + 0x5c) = fVar2 * *pfVar1;
      *(float *)(DAT_100a1f2c + 0x60) = fVar2 * fVar3;
      *(float *)(DAT_100a1f2c + 100) = fVar2 * fVar4;
    }
  }
  return;
}

/* 10031850  FUN_10031850  (192 bytes)
 * undefined FUN_10031850(float * param_1, float param_2, float param_3)
 * called by: FUN_10031c20
 */
void __cdecl FUN_10031850(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  if ((*(int *)(DAT_100a1f2c + 0xd0) == 0) && (*(float *)(DAT_100a1f2c + 0xcc) == 0.0)) {
    fVar1 = param_2;
    if (30.0 < param_2) {
      fVar1 = 30.0;
    }
    fVar1 = fVar1 - (*(float *)(DAT_100a1f2c + 0x5c) * *param_1 +
                    *(float *)(DAT_100a1f2c + 0x60) * param_1[1] +
                    *(float *)(DAT_100a1f2c + 100) * param_1[2]);
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      fVar2 = *(float *)(DAT_100a1f2c + 0xc4) * *(float *)(DAT_100a1f2c + 0x10) * param_2 * param_3;
      if (fVar1 < fVar2) {
        fVar2 = fVar1;
      }
      iVar3 = 0x5c;
      do {
        iVar4 = iVar3 + 4;
        *(float *)(iVar3 + DAT_100a1f2c) =
             fVar2 * *(float *)((int)param_1 + iVar3 + -0x5c) + *(float *)(iVar3 + DAT_100a1f2c);
        iVar3 = iVar4;
      } while (iVar4 < 0x68);
    }
  }
  return;
}

/* 10031910  FUN_10031910  (770 bytes)
 * undefined FUN_10031910(void)
 * called by: PM_PlayerMove
 */
void FUN_10031910(void)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  int *piVar7;
  float10 fVar8;
  float10 fVar9;
  float afStackY_120 [9];
  undefined4 uStackY_fc;
  undefined1 *puStackY_f8;
  float *pfStackY_f4;
  float *pfStackY_f0;
  undefined4 uStackY_ec;
  undefined4 uStackY_e8;
  float local_cc;
  float local_c8 [4];
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  float local_94;
  undefined4 local_90;
  float local_8c;
  int aiStack_88 [5];
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_44 [68];
  
  iVar3 = 0;
  pfVar6 = (float *)(DAT_100a1f2c + 0x20);
  do {
    pfVar1 = pfVar6 + -3;
    fVar2 = *pfVar6;
    iVar3 = iVar3 + 1;
    pfVar6 = pfVar6 + 1;
    local_c8[iVar3] =
         *(float *)(DAT_100a1f2c + 0x4546c) * fVar2 + *pfVar1 * *(float *)(DAT_100a1f2c + 0x45468);
  } while (iVar3 < 3);
  if (((*(float *)(DAT_100a1f2c + 0x45468) == 0.0) && (*(float *)(DAT_100a1f2c + 0x4546c) == 0.0))
     && (*(float *)(DAT_100a1f2c + 0x45470) == 0.0)) {
    local_c8[3] = local_c8[3] - 60.0;
  }
  else {
    local_c8[3] = local_c8[3] + *(float *)(DAT_100a1f2c + 0x45470);
  }
  local_94 = local_c8[1];
  local_90 = local_c8[2];
  local_8c = local_c8[3];
  fVar8 = (float10)FUN_1002fc10(&local_94);
  if ((float10)*(float *)(DAT_100a1f2c + 500) < fVar8) {
    FUN_1002fc80(local_c8 + 1,(float)((float10)*(float *)(DAT_100a1f2c + 500) / fVar8),local_c8 + 1)
    ;
    fVar8 = (float10)*(float *)(DAT_100a1f2c + 500);
  }
  local_c8[0] = (float)(fVar8 * (float10)0.8);
  *(float *)(DAT_100a1f2c + 0x5c) =
       *(float *)(DAT_100a1f2c + 0x74) + *(float *)(DAT_100a1f2c + 0x5c);
  *(float *)(DAT_100a1f2c + 0x60) =
       *(float *)(DAT_100a1f2c + 0x78) + *(float *)(DAT_100a1f2c + 0x60);
  *(float *)(DAT_100a1f2c + 100) = *(float *)(DAT_100a1f2c + 0x7c) + *(float *)(DAT_100a1f2c + 100);
  local_a0 = *(float *)(DAT_100a1f2c + 0x5c);
  local_9c = *(undefined4 *)(DAT_100a1f2c + 0x60);
  local_98 = *(undefined4 *)(DAT_100a1f2c + 100);
  fVar8 = (float10)FUN_1002fc10(&local_a0);
  if (fVar8 == (float10)0.0) {
    local_cc = 0.0;
  }
  else {
    fVar9 = fVar8 - (float10)*(float *)(*(int *)(DAT_100a1f2c + 0x4f4f0) + 0x1c) *
                    (float10)*(float *)(DAT_100a1f2c + 0xc4) *
                    (float10)*(float *)(DAT_100a1f2c + 0x10) * fVar8;
    local_cc = (float)fVar9;
    if (fVar9 < (float10)0.0) {
      local_cc = 0.0;
    }
    FUN_1002fc80((float *)(DAT_100a1f2c + 0x5c),(float)((float10)local_cc / fVar8),
                 (float *)(DAT_100a1f2c + 0x5c));
  }
  if (0.1 <= local_c8[0]) {
    local_cc = local_c8[0] - local_cc;
    if (0.0 < local_cc) {
      FUN_1002fc10(local_c8 + 1);
      fVar2 = *(float *)(*(int *)(DAT_100a1f2c + 0x4f4f0) + 0x10) * *(float *)(DAT_100a1f2c + 0xc4)
              * *(float *)(DAT_100a1f2c + 0x10) * local_c8[0];
      if (local_cc < fVar2) {
        fVar2 = local_cc;
      }
      iVar3 = 0x5c;
      do {
        iVar4 = iVar3 + 4;
        *(float *)(iVar3 + DAT_100a1f2c) =
             fVar2 * *(float *)((int)afStackY_120 + iVar3) + *(float *)(iVar3 + DAT_100a1f2c);
        iVar3 = iVar4;
      } while (iVar4 < 0x68);
    }
    uStackY_e8 = 0x10031b68;
    FUN_1002fad0((float *)(DAT_100a1f2c + 0x38),*(float *)(DAT_100a1f2c + 0x10),
                 (float *)(DAT_100a1f2c + 0x5c),&local_b8);
    local_ac = local_b8;
    local_a8 = local_b4;
    uStackY_e8 = 0xffffffff;
    pfStackY_f0 = &local_b8;
    uStackY_ec = 0;
    pfStackY_f4 = &local_ac;
    puStackY_f8 = local_44;
    local_a4 = local_b0 + *(float *)(*(int *)(DAT_100a1f2c + 0x4f4f0) + 0x30) + 1.0;
    uStackY_fc = 0x10031bb8;
    piVar5 = (int *)(**(code **)(DAT_100a1f2c + 0x4f580))();
    piVar7 = aiStack_88;
    for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar7 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar7 = piVar7 + 1;
    }
    if ((aiStack_88[1] != 0) || (aiStack_88[0] != 0)) {
      FUN_10031150();
      return;
    }
    *(undefined4 *)(DAT_100a1f2c + 0x38) = uStack_74;
    *(undefined4 *)(DAT_100a1f2c + 0x3c) = uStack_70;
    *(undefined4 *)(DAT_100a1f2c + 0x40) = uStack_6c;
  }
  return;
}

/* 10031c20  FUN_10031c20  (320 bytes)
 * undefined FUN_10031c20(void)
 * called by: PM_PlayerMove
 */
void FUN_10031c20(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  float local_20;
  float local_1c [5];
  undefined4 local_8;
  undefined4 local_4;
  
  local_1c[0] = *(float *)(DAT_100a1f2c + 0x45468);
  fVar3 = *(float *)(DAT_100a1f2c + 0x4546c);
  *(undefined4 *)(DAT_100a1f2c + 0x1c) = 0;
  *(undefined4 *)(DAT_100a1f2c + 0x28) = 0;
  FUN_1002fc10((float *)(DAT_100a1f2c + 0x14));
  FUN_1002fc10((float *)(DAT_100a1f2c + 0x20));
  iVar4 = 0;
  pfVar5 = (float *)(DAT_100a1f2c + 0x14);
  do {
    pfVar1 = pfVar5 + 3;
    fVar2 = *pfVar5;
    iVar4 = iVar4 + 1;
    pfVar5 = pfVar5 + 1;
    local_1c[iVar4] = local_1c[0] * fVar2 + fVar3 * *pfVar1;
  } while (iVar4 < 2);
  local_1c[3] = 0.0;
  local_1c[4] = local_1c[1];
  local_8 = local_1c[2];
  local_4 = 0;
  fVar6 = (float10)FUN_1002fc10(local_1c + 4);
  local_20 = (float)fVar6;
  if (*(float *)(DAT_100a1f2c + 500) < local_20) {
    FUN_1002fc80(local_1c + 1,*(float *)(DAT_100a1f2c + 500) / local_20,local_1c + 1);
    local_20 = *(float *)(DAT_100a1f2c + 500);
  }
  FUN_10031850(local_1c + 4,local_20,*(float *)(*(int *)(DAT_100a1f2c + 0x4f4f0) + 0x14));
  *(float *)(DAT_100a1f2c + 0x5c) =
       *(float *)(DAT_100a1f2c + 0x74) + *(float *)(DAT_100a1f2c + 0x5c);
  *(float *)(DAT_100a1f2c + 0x60) =
       *(float *)(DAT_100a1f2c + 0x78) + *(float *)(DAT_100a1f2c + 0x60);
  *(float *)(DAT_100a1f2c + 100) = *(float *)(DAT_100a1f2c + 0x7c) + *(float *)(DAT_100a1f2c + 100);
  FUN_10031150();
  return;
}

/* 10031d60  FUN_10031d60  (19 bytes)
 * bool FUN_10031d60(void)
 * called by: PM_PlayerMove
 */
bool FUN_10031d60(void)

{
  return 1 < *(int *)(DAT_100a1f2c + 0xe4);
}

/* 10031d80  FUN_10031d80  (445 bytes)
 * bool FUN_10031d80(void)
 * called by: FUN_10031f40, PM_PlayerMove
 */
bool FUN_10031d80(void)

{
  int iVar1;
  int local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = (*(float *)(DAT_100a1f2c + (*(int *)(DAT_100a1f2c + 0xbc) * 3 + 0x13d49) * 4) +
            *(float *)(DAT_100a1f2c + (*(int *)(DAT_100a1f2c + 0xbc) * 3 + 0x13d3d) * 4)) * 0.5 +
            *(float *)(DAT_100a1f2c + 0x38);
  local_8 = (*(float *)(DAT_100a1f2c + 0x4f528 + *(int *)(DAT_100a1f2c + 0xbc) * 0xc) +
            *(float *)(DAT_100a1f2c + 0x4f4f8 + *(int *)(DAT_100a1f2c + 0xbc) * 0xc)) * 0.5 +
            *(float *)(DAT_100a1f2c + 0x3c);
  local_4 = *(float *)(DAT_100a1f2c + 0x4f4fc + *(int *)(DAT_100a1f2c + 0xbc) * 0xc) +
            *(float *)(DAT_100a1f2c + 0x40) + 1.0;
  *(undefined4 *)(DAT_100a1f2c + 0xe4) = 0;
  *(undefined4 *)(DAT_100a1f2c + 0xe8) = 0xffffffff;
  iVar1 = (**(code **)(DAT_100a1f2c + 0x4f574))(&local_c,&local_10);
  if ((iVar1 < -2) && (-0xf < iVar1)) {
    *(int *)(DAT_100a1f2c + 0xe8) = iVar1;
    *(undefined4 *)(DAT_100a1f2c + 0xe4) = 1;
    local_4 = (*(float *)(DAT_100a1f2c + 0x4f52c + *(int *)(DAT_100a1f2c + 0xbc) * 0xc) +
              *(float *)(DAT_100a1f2c + 0x4f4fc + *(int *)(DAT_100a1f2c + 0xbc) * 0xc)) * 0.5 +
              *(float *)(DAT_100a1f2c + 0x40);
    iVar1 = (**(code **)(DAT_100a1f2c + 0x4f574))(&local_c,0);
    if ((iVar1 < -2) && (-0xf < iVar1)) {
      *(undefined4 *)(DAT_100a1f2c + 0xe4) = 2;
      local_4 = *(float *)(DAT_100a1f2c + 0x88) + *(float *)(DAT_100a1f2c + 0x40);
      iVar1 = (**(code **)(DAT_100a1f2c + 0x4f574))(&local_c,0);
      if ((iVar1 < -2) && (-0xf < iVar1)) {
        *(undefined4 *)(DAT_100a1f2c + 0xe4) = 3;
      }
    }
    if ((local_10 < -8) && (-0xf < local_10)) {
      FUN_1002fad0((float *)(DAT_100a1f2c + 0x74),(float)*(int *)(DAT_100a1f2c + 0xe4) * 50.0,
                   (float *)(&DAT_100960a8 + (local_10 * 3 + 0x1b) * -4),
                   (float *)(DAT_100a1f2c + 0x74));
    }
  }
  return 1 < *(int *)(DAT_100a1f2c + 0xe4);
}

/* 10031f40  FUN_10031f40  (305 bytes)
 * undefined FUN_10031f40(void)
 * called by: FUN_100329a0, FUN_10057d70, FUN_10057fa0, FUN_10058150, FUN_10058d70, PM_PlayerMove
 */
void FUN_10031f40(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int aiStack_e4 [12];
  undefined4 uStack_b4;
  undefined1 *puStack_b0;
  int iStack_ac;
  undefined4 *puStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 local_94;
  undefined4 local_90;
  float local_8c;
  int aiStack_88 [5];
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float fStack_60;
  int iStack_58;
  undefined1 local_44 [68];
  
  iStack_a0 = 0x10031f4d;
  FUN_10031d80();
  local_94 = *(undefined4 *)(DAT_100a1f2c + 0x38);
  iStack_ac = DAT_100a1f2c + 0x38;
  local_90 = *(undefined4 *)(DAT_100a1f2c + 0x3c);
  local_8c = *(float *)(DAT_100a1f2c + 0x40) - 2.0;
  if (180.0 < *(float *)(DAT_100a1f2c + 100)) {
    *(undefined4 *)(DAT_100a1f2c + 0xe0) = 0xffffffff;
    return;
  }
  iStack_a0 = 0xffffffff;
  puStack_a8 = &local_94;
  uStack_a4 = 0;
  puStack_b0 = local_44;
  uStack_b4 = 0x10031fab;
  piVar1 = (int *)(**(code **)(DAT_100a1f2c + 0x4f580))();
  piVar3 = aiStack_88;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *piVar1;
    piVar1 = piVar1 + 1;
    piVar3 = piVar3 + 1;
  }
  if (0.7 <= fStack_60) {
    *(int *)(DAT_100a1f2c + 0xe0) = iStack_58;
  }
  else {
    *(undefined4 *)(DAT_100a1f2c + 0xe0) = 0xffffffff;
  }
  if (*(int *)(DAT_100a1f2c + 0xe0) != -1) {
    *(undefined4 *)(DAT_100a1f2c + 0xcc) = 0;
    if (((*(int *)(DAT_100a1f2c + 0xe4) < 2) && (aiStack_88[1] == 0)) && (aiStack_88[0] == 0)) {
      *(undefined4 *)(DAT_100a1f2c + 0x38) = uStack_74;
      *(undefined4 *)(DAT_100a1f2c + 0x3c) = uStack_70;
      *(undefined4 *)(DAT_100a1f2c + 0x40) = uStack_6c;
    }
  }
  if (0 < iStack_58) {
    iStack_a0 = DAT_100a1f2c + 0x5c;
    piVar1 = aiStack_88;
    piVar3 = aiStack_e4;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *piVar1;
      piVar1 = piVar1 + 1;
      piVar3 = piVar3 + 1;
    }
    PM_AddToTouched();
  }
  return;
}

/* 10032080  FUN_10032080  (77 bytes)
 * undefined FUN_10032080(int param_1, int param_2, undefined4 * param_3)
 * called by: FUN_100320f0
 */
void __cdecl FUN_10032080(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 + param_1 * 2;
  iVar2 = *(int *)(&DAT_100a0218 + iVar1 * 4);
  *(int *)(&DAT_100a0218 + iVar1 * 4) = iVar2 + 1;
  iVar2 = iVar2 % 0x36;
  *param_3 = (&DAT_1009fe90)[iVar2 * 3];
  param_3[1] = (&DAT_1009fe94)[iVar2 * 3];
  param_3[2] = (&DAT_1009fe98)[iVar2 * 3];
  return;
}

/* 100320d0  FUN_100320d0  (23 bytes)
 * undefined FUN_100320d0(int param_1, int param_2)
 * called by: FUN_100320f0
 */
void __cdecl FUN_100320d0(int param_1,int param_2)

{
  *(undefined4 *)(&DAT_100a0218 + (param_2 + param_1 * 2) * 4) = 0;
  return;
}

/* 100320f0  FUN_100320f0  (760 bytes)
 * undefined4 FUN_100320f0(void)
 * called by: PM_PlayerMove
 */
undefined4 FUN_100320f0(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  float10 fVar7;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined1 local_44 [68];
  
  iVar3 = (*(code *)DAT_100a1f2c[0x13d57])(DAT_100a1f2c + 0xe,local_44);
  piVar6 = DAT_100a1f2c;
  if (iVar3 == -1) {
    FUN_100320d0(*DAT_100a1f2c,DAT_100a1f2c[1]);
    return 0;
  }
  fStack_54 = (float)DAT_100a1f2c[0x10];
  fStack_5c = (float)DAT_100a1f2c[0xe];
  fStack_58 = (float)DAT_100a1f2c[0xf];
  if ((DAT_100a1f2c[1] == 0) && ((iVar3 == 0 || (DAT_100a1f2c[iVar3 * 0x38 + 0xa0] != 0)))) {
    iVar5 = 0;
    FUN_100320d0(*DAT_100a1f2c,0);
    do {
      FUN_10032080(*piVar6,piVar6[1],&fStack_50);
      fStack_68 = fStack_50 + fStack_5c;
      fStack_64 = fStack_4c + fStack_58;
      fStack_60 = fStack_48 + fStack_54;
      iVar4 = (*(code *)piVar6[0x13d57])(&fStack_68,local_44);
      piVar6 = DAT_100a1f2c;
      if (iVar4 == -1) {
        FUN_100320d0(*DAT_100a1f2c,DAT_100a1f2c[1]);
        piVar6[0xe] = (int)fStack_68;
        goto LAB_100323c6;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x36);
  }
  iVar5 = DAT_100a1f2c[1];
  fVar7 = (float10)(*(code *)DAT_100a1f2c[0x13d5b])();
  piVar6 = DAT_100a1f2c;
  iVar5 = (uint)(iVar5 == 0) + *DAT_100a1f2c * 2;
  if (fVar7 - (float10)0.05 < (float10)*(float *)(&DAT_100a0118 + iVar5 * 4) !=
      (fVar7 - (float10)0.05 == (float10)*(float *)(&DAT_100a0118 + iVar5 * 4))) {
    return 1;
  }
  *(float *)(&DAT_100a0118 + iVar5 * 4) = (float)fVar7;
  (*(code *)piVar6[0x13d5c])(iVar3,local_44);
  piVar6 = DAT_100a1f2c;
  iVar3 = FUN_10032080(*DAT_100a1f2c,DAT_100a1f2c[1],&fStack_50);
  fStack_68 = fStack_50 + fStack_5c;
  fStack_64 = fStack_4c + fStack_58;
  fStack_60 = fStack_48 + fStack_54;
  iVar5 = (*(code *)piVar6[0x13d57])(&fStack_68,0);
  piVar6 = DAT_100a1f2c;
  if (iVar5 != -1) {
    if (((*(byte *)((int)DAT_100a1f2c + 0x45476) & 7) != 0) &&
       (DAT_100a1f2c[iVar5 * 0x38 + 0x9c] != 0)) {
      fStack_74 = 0.0;
      do {
        fVar1 = fStack_74 + fStack_54;
        fStack_78 = -8.0;
        do {
          fVar2 = fStack_78 + fStack_5c;
          fStack_7c = -8.0;
          do {
            fStack_64 = fStack_7c + fStack_58;
            fStack_68 = fVar2;
            fStack_60 = fVar1;
            iVar3 = (*(code *)DAT_100a1f2c[0x13d57])(&fStack_68,0);
            if (iVar3 == -1) {
              DAT_100a1f2c[0xe] = (int)fStack_68;
              goto LAB_100323c6;
            }
            fStack_7c = fStack_7c + 8.0;
          } while (fStack_7c < 8.0 != (fStack_7c == 8.0));
          fStack_78 = fStack_78 + 8.0;
        } while (fStack_78 < 8.0 != (fStack_78 == 8.0));
        fStack_74 = fStack_74 + 18.0;
      } while (fStack_74 < 72.0 != (fStack_74 == 72.0));
    }
    return 1;
  }
  FUN_100320d0(*DAT_100a1f2c,DAT_100a1f2c[1]);
  if (0x1a < iVar3) {
    piVar6[0xe] = (int)fStack_68;
LAB_100323c6:
    DAT_100a1f2c[0xf] = (int)fStack_64;
    DAT_100a1f2c[0x10] = (int)fStack_60;
  }
  return 0;
}

/* 100323f0  FUN_100323f0  (200 bytes)
 * undefined FUN_100323f0(float * param_1, int param_2, float * param_3, float * param_4)
 * called by: FUN_100324c0
 */
void __cdecl FUN_100323f0(float *param_1,int param_2,float *param_3,float *param_4)

{
  int iVar1;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c [3];
  
  iVar1 = param_2 * 0xe0 + 0x250 + DAT_100a1f2c;
  FUN_1002f540(param_1,local_c,(float *)0x0,(float *)0x0);
  local_18 = *(float *)(iVar1 + 0x24);
  local_14 = *(float *)(iVar1 + 0x28);
  local_10 = *(float *)(iVar1 + 0x2c) + 35.0;
  FUN_1002fad0(param_3,90.0,local_c,&local_24);
  local_24 = local_18 - local_24;
  local_20 = local_14 - local_20;
  local_1c = local_10 - local_1c;
  iVar1 = (**(code **)(DAT_100a1f2c + 0x4f584))(&local_18,&local_24,0,2,param_2);
  FUN_1002fad0((float *)(iVar1 + 0x14),4.0,(float *)(iVar1 + 0x20),param_4);
  return;
}

/* 100324c0  FUN_100324c0  (1051 bytes)
 * undefined FUN_100324c0(void)
 * called by: PM_PlayerMove
 */
void FUN_100324c0(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  float10 fVar10;
  float10 fVar11;
  float afStackY_8c [10];
  undefined4 uStackY_64;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30 [3];
  float local_24;
  undefined4 local_20;
  float local_1c [4];
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(int *)(DAT_100a1f2c + 0x1fc) == 3) || (*(int *)(DAT_100a1f2c + 0x200) == 0)) {
    fVar10 = FUN_1002fbf0(DAT_100a1f2c + 0x5c);
    if ((float10)1.0 <= fVar10) {
      iVar8 = *(int *)(DAT_100a1f2c + 0x4f4f0);
      fVar11 = fVar10;
      if (fVar10 < (float10)*(float *)(iVar8 + 4)) {
        fVar11 = (float10)*(float *)(iVar8 + 4);
      }
      fVar11 = fVar10 - fVar11 * (float10)*(float *)(DAT_100a1f2c + 0x10) *
                        (float10)*(float *)(iVar8 + 0x1c) * (float10)1.5;
      if (fVar11 < (float10)0.0) {
        fVar11 = (float10)0.0;
      }
      FUN_1002fc80((float *)(DAT_100a1f2c + 0x5c),(float)(fVar11 / fVar10),
                   (float *)(DAT_100a1f2c + 0x5c));
    }
    else {
      *(float *)(DAT_100a1f2c + 0x5c) = DAT_1009fe84;
      *(undefined4 *)(DAT_100a1f2c + 0x60) = DAT_1009fe88;
      *(undefined4 *)(DAT_100a1f2c + 100) = DAT_1009fe8c;
    }
    fVar3 = *(float *)(DAT_100a1f2c + 0x45468);
    fVar4 = *(float *)(DAT_100a1f2c + 0x4546c);
    FUN_1002fc10((float *)(DAT_100a1f2c + 0x14));
    FUN_1002fc10((float *)(DAT_100a1f2c + 0x20));
    iVar8 = 0;
    pfVar6 = (float *)(DAT_100a1f2c + 0x14);
    do {
      pfVar1 = pfVar6 + 3;
      fVar2 = *pfVar6;
      iVar8 = iVar8 + 1;
      pfVar6 = pfVar6 + 1;
      local_1c[iVar8] = fVar3 * fVar2 + fVar4 * *pfVar1;
    } while (iVar8 < 3);
    local_30[2] = local_1c[3] + *(float *)(DAT_100a1f2c + 0x45470);
    local_30[0] = local_1c[1];
    local_30[1] = local_1c[2];
    local_1c[3] = local_30[2];
    fVar10 = (float10)FUN_1002fc10(local_30);
    iVar8 = *(int *)(DAT_100a1f2c + 0x4f4f0);
    if ((float10)*(float *)(iVar8 + 0xc) < fVar10) {
      FUN_1002fc80(local_1c + 1,(float)((float10)*(float *)(iVar8 + 0xc) / fVar10),local_1c + 1);
      iVar8 = *(int *)(DAT_100a1f2c + 0x4f4f0);
      fVar10 = (float10)*(float *)(iVar8 + 0xc);
    }
    fVar11 = fVar10 - ((float10)local_30[0] * (float10)*(float *)(DAT_100a1f2c + 0x5c) +
                      (float10)local_30[1] * (float10)*(float *)(DAT_100a1f2c + 0x60) +
                      (float10)local_30[2] * (float10)*(float *)(DAT_100a1f2c + 100));
    if (fVar11 < (float10)0.0 == (fVar11 == (float10)0.0)) {
      fVar10 = (float10)*(float *)(iVar8 + 0x10) * (float10)*(float *)(DAT_100a1f2c + 0x10) * fVar10
      ;
      if ((float10)(float)fVar11 < fVar10) {
        fVar10 = (float10)(float)fVar11;
      }
      iVar8 = 0x5c;
      do {
        iVar5 = iVar8 + 4;
        *(float *)(iVar8 + DAT_100a1f2c) =
             (float)(fVar10 * (float10)*(float *)((int)afStackY_8c + iVar8) +
                    (float10)*(float *)(iVar8 + DAT_100a1f2c));
        iVar8 = iVar5;
      } while (iVar5 < 0x68);
      uStackY_64 = 0x100328c8;
      FUN_1002fad0((float *)(DAT_100a1f2c + 0x38),*(float *)(DAT_100a1f2c + 0x10),
                   (float *)(DAT_100a1f2c + 0x5c),(float *)(DAT_100a1f2c + 0x38));
      return;
    }
  }
  else {
    iVar8 = *(int *)(DAT_100a1f2c + 0x24c);
    iVar5 = 0;
    if (0 < iVar8) {
      piVar9 = (int *)(DAT_100a1f2c + 0x2a0);
      do {
        if (*piVar9 == *(int *)(DAT_100a1f2c + 0x200)) break;
        iVar5 = iVar5 + 1;
        piVar9 = piVar9 + 0x38;
      } while (iVar5 < iVar8);
    }
    if (iVar5 != iVar8) {
      local_c = DAT_1009fe84;
      local_8 = DAT_1009fe88;
      local_4 = DAT_1009fe8c;
      iVar8 = *(int *)(DAT_100a1f2c + 0x1fc);
      if ((iVar8 == 4) && (*(int *)(DAT_100a1f2c + 0x204) != 0)) {
        iVar7 = 0;
        if (0 < *(int *)(DAT_100a1f2c + 0x24c)) {
          piVar9 = (int *)(DAT_100a1f2c + 0x2a0);
          do {
            if (*piVar9 == *(int *)(DAT_100a1f2c + 0x204)) break;
            iVar7 = iVar7 + 1;
            piVar9 = piVar9 + 0x38;
          } while (iVar7 < *(int *)(DAT_100a1f2c + 0x24c));
        }
      }
      if (iVar8 == 1) {
        iVar8 = iVar5 * 0xe0 + DAT_100a1f2c;
        local_38 = *(undefined4 *)(iVar8 + 0x2a8);
        local_3c = 10.0 - *(float *)(iVar8 + 0x2a4);
        local_34 = *(undefined4 *)(iVar8 + 0x2ac);
      }
      else if (iVar8 == 5) {
        iVar8 = iVar5 * 0xe0 + DAT_100a1f2c;
        local_38 = *(undefined4 *)(iVar8 + 0x2a8);
        local_3c = *(float *)(iVar8 + 0x2a4) * -2.0;
        local_34 = *(undefined4 *)(iVar8 + 0x2ac);
      }
      else if (iVar8 != 4) {
        local_3c = *(float *)(DAT_100a1f2c + 0x44);
        local_38 = *(undefined4 *)(DAT_100a1f2c + 0x48);
        local_34 = *(undefined4 *)(DAT_100a1f2c + 0x4c);
      }
      if (*(int *)(DAT_100a1f2c + 0x1fc) == 5) {
        iVar8 = iVar5 * 0xe0 + DAT_100a1f2c;
        local_24 = *(float *)(iVar5 * 0xe0 + 0x274 + DAT_100a1f2c);
        local_20 = *(undefined4 *)(iVar8 + 0x278);
        local_1c[0] = *(float *)(iVar8 + 0x27c);
      }
      else {
        uStackY_64 = 0x10032651;
        FUN_100323f0(&local_3c,iVar5,&local_c,&local_24);
      }
      *(float *)(DAT_100a1f2c + 0x38) = local_24;
      *(undefined4 *)(DAT_100a1f2c + 0x3c) = local_20;
      *(float *)(DAT_100a1f2c + 0x40) = local_1c[0];
      *(float *)(DAT_100a1f2c + 0x44) = local_3c;
      *(undefined4 *)(DAT_100a1f2c + 0x48) = local_38;
      *(undefined4 *)(DAT_100a1f2c + 0x4c) = local_34;
      *(float *)(DAT_100a1f2c + 0x5c) = DAT_1009fe84;
      *(undefined4 *)(DAT_100a1f2c + 0x60) = DAT_1009fe88;
      *(undefined4 *)(DAT_100a1f2c + 100) = DAT_1009fe8c;
      return;
    }
  }
  return;
}

/* 100328e0  FUN_100328e0  (31 bytes)
 * float10 FUN_100328e0(float param_1, float param_2)
 * called by: FUN_10058d70
 */
float10 __cdecl FUN_100328e0(float param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_1 * (float10)param_2;
  fVar2 = fVar1 * fVar1 * fVar1;
  return (float10)3.0 * fVar1 * fVar1 - (fVar2 + fVar2);
}

/* 10032900  FUN_10032900  (156 bytes)
 * undefined FUN_10032900(int param_1)
 * called by: FUN_10057d70, FUN_10057fa0, FUN_10058150, FUN_10058d70
 */
void __cdecl FUN_10032900(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (**(code **)(DAT_100a1f2c + 0x4f55c))(DAT_100a1f2c + 0x38,0);
  if (iVar4 != -1) {
    iVar4 = 0;
    uVar1 = *(undefined4 *)(DAT_100a1f2c + 0x38);
    uVar2 = *(undefined4 *)(DAT_100a1f2c + 0x3c);
    uVar3 = *(undefined4 *)(DAT_100a1f2c + 0x40);
    do {
      *(float *)(DAT_100a1f2c + 0x40) = (float)param_1 + *(float *)(DAT_100a1f2c + 0x40);
      iVar5 = (**(code **)(DAT_100a1f2c + 0x4f55c))(DAT_100a1f2c + 0x38,0);
      if (iVar5 == -1) {
        return;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x24);
    *(undefined4 *)(DAT_100a1f2c + 0x38) = uVar1;
    *(undefined4 *)(DAT_100a1f2c + 0x3c) = uVar2;
    *(undefined4 *)(DAT_100a1f2c + 0x40) = uVar3;
  }
  return;
}

/* 100329a0  FUN_100329a0  (347 bytes)
 * undefined FUN_100329a0(void)
 * called by: FUN_10058d70
 */
void FUN_100329a0(void)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  float local_94 [3];
  float fStack_88;
  int iStack_84;
  undefined1 local_44 [68];
  
  local_94[0] = *(float *)(DAT_100a1f2c + 0x38);
  local_94[1] = (float)*(undefined4 *)(DAT_100a1f2c + 0x3c);
  local_94[2] = (float)*(undefined4 *)(DAT_100a1f2c + 0x40);
  if (*(int *)(DAT_100a1f2c + 0xe0) != -1) {
    pfVar3 = (float *)(DAT_100a1f2c + 0x4f4f4);
    iVar4 = 0;
    do {
      pfVar5 = pfVar3 + 3;
      fVar1 = *pfVar3;
      iVar2 = iVar4 + 1;
      pfVar3 = pfVar3 + 1;
      (&fStack_88)[iVar4 + -3] = (*pfVar5 - fVar1) + (&fStack_88)[iVar4 + -3];
      iVar4 = iVar2;
    } while (iVar2 < 3);
  }
  pfVar3 = (float *)(**(code **)(DAT_100a1f2c + 0x4f580))(local_44,local_94,local_94,0,0xffffffff);
  pfVar5 = &fStack_88;
  for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar5 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar5 = pfVar5 + 1;
  }
  if (iStack_84 == 0) {
    *(undefined4 *)(DAT_100a1f2c + 0xbc) = 0;
    pfVar3 = (float *)(**(code **)(DAT_100a1f2c + 0x4f580))(local_44,local_94,local_94,0,0xffffffff)
    ;
    pfVar5 = &fStack_88;
    for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar5 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pfVar5 = pfVar5 + 1;
    }
    if (iStack_84 == 0) {
      *(uint *)(DAT_100a1f2c + 0xb8) = *(uint *)(DAT_100a1f2c + 0xb8) & 0xffffbfff;
      *(undefined4 *)(DAT_100a1f2c + 0x90) = 0;
      *(undefined4 *)(DAT_100a1f2c + 0x88) = 0x41e00000;
      *(undefined4 *)(DAT_100a1f2c + 0x8c) = 0;
      *(float *)(DAT_100a1f2c + 0x38) = local_94[0];
      *(float *)(DAT_100a1f2c + 0x3c) = local_94[1];
      *(float *)(DAT_100a1f2c + 0x40) = local_94[2];
      FUN_10031f40();
      return;
    }
    *(undefined4 *)(DAT_100a1f2c + 0xbc) = 1;
  }
  return;
}

/* 10032b00  FUN_10032b00  (876 bytes)
 * undefined FUN_10032b00(int param_1)
 * called by: PM_PlayerMove
 */
void __cdecl FUN_10032b00(int param_1)

{
  ushort uVar1;
  float fVar2;
  int iVar3;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  float fStack_9c;
  float afStack_98 [4];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float local_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float afStack_5c [3];
  undefined1 auStack_50 [16];
  float fStack_40;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float afStack_18 [3];
  float afStack_c [3];
  
  if (*(int *)(DAT_100a1f2c + 0xdc) != 8) {
    (**(code **)(DAT_100a1f2c + 0x4f594))(*(undefined4 *)(param_1 + 0x30),&local_74,afStack_98 + 3);
    fStack_b0 = afStack_98[3] + local_74;
    fStack_ac = fStack_88 + fStack_70;
    fStack_a8 = fStack_84 + fStack_6c;
    FUN_1002fc80(&fStack_b0,0.5,&fStack_b0);
    *(undefined4 *)(DAT_100a1f2c + 0xdc) = 5;
    uStack_a4 = *(undefined4 *)(DAT_100a1f2c + 0x38);
    uStack_a0 = *(undefined4 *)(DAT_100a1f2c + 0x3c);
    fStack_9c = (*(float *)(DAT_100a1f2c + 0x4f4fc + *(int *)(DAT_100a1f2c + 0xbc) * 0xc) - 1.0) +
                *(float *)(DAT_100a1f2c + 0x40);
    iVar3 = (**(code **)(DAT_100a1f2c + 0x4f574))(&uStack_a4,0);
    *(undefined4 *)(DAT_100a1f2c + 0xc0) = 0;
    (**(code **)(DAT_100a1f2c + 0x4f59c))(param_1,DAT_100a1f2c + 0x38,&fStack_b0,auStack_50);
    if (fStack_40 != 1.0) {
      fStack_c0 = 0.0;
      fStack_c4 = 0.0;
      FUN_1002f540((float *)(DAT_100a1f2c + 0x44),afStack_c,afStack_18,(float *)0x0);
      uVar1 = *(ushort *)(DAT_100a1f2c + 0x45476);
      if ((uVar1 & 0x10) != 0) {
        fStack_c0 = -200.0;
      }
      if ((uVar1 & 8) != 0) {
        fStack_c0 = fStack_c0 + 200.0;
      }
      if ((uVar1 & 0x200) != 0) {
        fStack_c4 = -200.0;
      }
      if ((uVar1 & 0x400) != 0) {
        fStack_c4 = fStack_c4 + 200.0;
      }
      if ((uVar1 & 2) != 0) {
        *(undefined4 *)(DAT_100a1f2c + 0xdc) = 3;
        FUN_1002fc80(&fStack_30,270.0,(float *)(DAT_100a1f2c + 0x5c));
        return;
      }
      if ((fStack_c0 == 0.0) && (fStack_c4 == 0.0)) {
        *(undefined4 *)(DAT_100a1f2c + 0x5c) = 0;
        *(undefined4 *)(DAT_100a1f2c + 0x60) = 0;
        *(undefined4 *)(DAT_100a1f2c + 100) = 0;
        return;
      }
      FUN_1002fc80(afStack_c,fStack_c0,&fStack_bc);
      FUN_1002fad0(&fStack_bc,fStack_c4,afStack_18,&fStack_bc);
      afStack_98[0] = 0.0;
      afStack_98[1] = 0.0;
      afStack_98[2] = 1.0;
      FUN_1002fbb0(afStack_98,&fStack_30,afStack_5c);
      FUN_1002fc10(afStack_5c);
      fVar2 = fStack_30 * fStack_bc + fStack_2c * fStack_b8 + fStack_28 * fStack_b4;
      FUN_1002fc80(&fStack_30,fVar2,&fStack_80);
      fStack_68 = fStack_bc - fStack_80;
      fStack_64 = fStack_b8 - fStack_7c;
      fStack_60 = fStack_b4 - fStack_78;
      FUN_1002fbb0(&fStack_30,afStack_5c,afStack_98);
      FUN_1002fad0(&fStack_68,-fVar2,afStack_98,(float *)(DAT_100a1f2c + 0x5c));
      if ((iVar3 == -2) && (0.0 < fVar2)) {
        FUN_1002fad0((float *)(DAT_100a1f2c + 0x5c),200.0,&fStack_30,(float *)(DAT_100a1f2c + 0x5c))
        ;
      }
    }
  }
  return;
}

/* 10032e70  FUN_10032e70  (197 bytes)
 * int FUN_10032e70(void)
 * called by: PM_PlayerMove
 */
int FUN_10032e70(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar4 = 0;
  if (0 < *(int *)(DAT_100a1f2c + 0x20f50)) {
    iVar5 = 0;
    iVar3 = DAT_100a1f2c;
    do {
      iVar2 = *(int *)(iVar5 + 0x20f84 + iVar3);
      iVar1 = iVar5 + 0x20f54 + iVar3;
      if (((iVar2 != 0) &&
          (iVar2 = (**(code **)(iVar3 + 0x4f590))(iVar2), iVar3 = DAT_100a1f2c, iVar2 == 0)) &&
         (*(int *)(iVar1 + 100) == -0x10)) {
        iVar3 = (**(code **)(DAT_100a1f2c + 0x4f598))(iVar1,&fStack_c);
        fStack_c = *(float *)(DAT_100a1f2c + 0x38) - fStack_c;
        fStack_8 = *(float *)(DAT_100a1f2c + 0x3c) - fStack_8;
        fStack_4 = *(float *)(DAT_100a1f2c + 0x40) - fStack_4;
        iVar2 = (**(code **)(DAT_100a1f2c + 0x4f57c))(iVar3,*(undefined4 *)(iVar3 + 8),&fStack_c);
        iVar3 = DAT_100a1f2c;
        if (iVar2 != -1) {
          return iVar1;
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0xe0;
    } while (iVar4 < *(int *)(iVar3 + 0x20f50));
  }
  return 0;
}

/* 10032f40  FUN_10032f40  (181 bytes)
 * undefined FUN_10032f40(void)
 * called by: PM_PlayerMove
 */
void FUN_10032f40(void)

{
  if (10000.0 < *(float *)(DAT_100a1f2c + 0xcc)) {
    *(undefined4 *)(DAT_100a1f2c + 0xcc) = 0x461c4000;
  }
  if (*(float *)(DAT_100a1f2c + 0xcc) != 0.0) {
    *(float *)(DAT_100a1f2c + 0xcc) =
         *(float *)(DAT_100a1f2c + 0xcc) - (float)*(byte *)(DAT_100a1f2c + 0x4545a);
    if ((*(float *)(DAT_100a1f2c + 0xcc) < 0.0) || (*(int *)(DAT_100a1f2c + 0xe4) == 0)) {
      *(undefined4 *)(DAT_100a1f2c + 0xcc) = 0;
      *(uint *)(DAT_100a1f2c + 0xb8) = *(uint *)(DAT_100a1f2c + 0xb8) & 0xfffff7ff;
    }
    *(undefined4 *)(DAT_100a1f2c + 0x5c) = *(undefined4 *)(DAT_100a1f2c + 0x68);
    *(undefined4 *)(DAT_100a1f2c + 0x60) = *(undefined4 *)(DAT_100a1f2c + 0x6c);
  }
  return;
}

/* 10033000  FUN_10033000  (95 bytes)
 * undefined FUN_10033000(void)
 * called by: PM_PlayerMove
 */
void FUN_10033000(void)

{
  float fVar1;
  
  if (*(float *)(DAT_100a1f2c + 0xc0) == 0.0) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = *(float *)(DAT_100a1f2c + 0xc0);
  }
  *(float *)(DAT_100a1f2c + 100) =
       *(float *)(DAT_100a1f2c + 100) -
       **(float **)(DAT_100a1f2c + 0x4f4f0) * *(float *)(DAT_100a1f2c + 0x10) * fVar1;
  *(float *)(DAT_100a1f2c + 100) =
       *(float *)(DAT_100a1f2c + 0x7c) * *(float *)(DAT_100a1f2c + 0x10) +
       *(float *)(DAT_100a1f2c + 100);
  *(undefined4 *)(DAT_100a1f2c + 0x7c) = 0;
  PM_CheckVelocity();
  return;
}

/* 10033060  FUN_10033060  (215 bytes)
 * undefined FUN_10033060(int * param_1, float * param_2)
 * called by: PM_PlayerMove
 */
void __cdecl FUN_10033060(int *param_1,float *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int aiStack_e4 [12];
  undefined4 uStack_b4;
  undefined1 *puStack_b0;
  int iStack_ac;
  float *pfStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  float local_94;
  float local_90;
  float local_8c;
  int aiStack_88 [4];
  float fStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_44 [68];
  
  local_94 = *param_2 + *(float *)(DAT_100a1f2c + 0x38);
  iStack_ac = DAT_100a1f2c + 0x38;
  iStack_a0 = 0xffffffff;
  uStack_a4 = 0;
  local_90 = *(float *)(DAT_100a1f2c + 0x3c) + param_2[1];
  local_8c = *(float *)(DAT_100a1f2c + 0x40) + param_2[2];
  pfStack_a8 = &local_94;
  puStack_b0 = local_44;
  uStack_b4 = 0x100330a9;
  piVar1 = (int *)(**(code **)(DAT_100a1f2c + 0x4f580))();
  piVar3 = aiStack_88;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *piVar1;
    piVar1 = piVar1 + 1;
    piVar3 = piVar3 + 1;
  }
  *(undefined4 *)(DAT_100a1f2c + 0x38) = uStack_74;
  *(undefined4 *)(DAT_100a1f2c + 0x3c) = uStack_70;
  *(undefined4 *)(DAT_100a1f2c + 0x40) = uStack_6c;
  if ((fStack_78 < 1.0) && (aiStack_88[0] == 0)) {
    iStack_a0 = DAT_100a1f2c + 0x5c;
    piVar1 = aiStack_88;
    piVar3 = aiStack_e4;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *piVar1;
      piVar1 = piVar1 + 1;
      piVar3 = piVar3 + 1;
    }
    PM_AddToTouched();
  }
  piVar1 = aiStack_88;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *piVar1;
    piVar1 = piVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

/* 100334f0  FUN_100334f0  (97 bytes)
 * undefined FUN_100334f0(void)
 * called by: FUN_10058680
 */
void FUN_100334f0(void)

{
  float fVar1;
  float10 fVar2;
  
  fVar1 = *(float *)(DAT_100a1f2c + 500) * 1.7;
  if ((fVar1 < 0.0 == (fVar1 == 0.0)) &&
     (fVar2 = FUN_1002fbf0(DAT_100a1f2c + 0x5c), fVar2 < (float10)fVar1 == (fVar2 == (float10)fVar1)
     )) {
    FUN_1002fc80((float *)(DAT_100a1f2c + 0x5c),(float)(((float10)fVar1 / fVar2) * (float10)0.65),
                 (float *)(DAT_100a1f2c + 0x5c));
    return;
  }
  return;
}

/* 10033560  FUN_10033560  (610 bytes)
 * undefined FUN_10033560(void)
 * called by: PM_PlayerMove
 */
void FUN_10033560(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;
  float local_bc;
  undefined4 local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94 [3];
  undefined4 auStack_88 [4];
  float fStack_78;
  float afStack_68 [2];
  float fStack_60;
  undefined1 local_44 [68];
  
  if ((*(float *)(DAT_100a1f2c + 0xcc) == 0.0) && (-180.0 <= *(float *)(DAT_100a1f2c + 100))) {
    local_a4 = *(float *)(DAT_100a1f2c + 0x5c);
    local_a0 = *(float *)(DAT_100a1f2c + 0x60);
    local_9c = 0.0;
    fVar5 = (float10)FUN_1002fc10(&local_a4);
    local_98 = (float)fVar5;
    local_b0 = *(float *)(DAT_100a1f2c + 0x14);
    local_ac = *(float *)(DAT_100a1f2c + 0x18);
    local_a8 = 0.0;
    FUN_1002fc10(&local_b0);
    if ((local_98 == 0.0) ||
       (0.0 <= local_b0 * local_a4 + local_ac * local_a0 + local_a8 * local_9c)) {
      local_bc = *(float *)(DAT_100a1f2c + 0x38);
      local_b8 = *(undefined4 *)(DAT_100a1f2c + 0x3c);
      local_b4 = *(float *)(DAT_100a1f2c + 0x40) + 8.0;
      FUN_1002fad0(&local_bc,24.0,&local_b0,local_94);
      iVar1 = *(int *)(DAT_100a1f2c + 0xbc);
      *(undefined4 *)(DAT_100a1f2c + 0xbc) = 2;
      puVar2 = (undefined4 *)
               (**(code **)(DAT_100a1f2c + 0x4f580))(local_44,&local_bc,local_94,0,0xffffffff);
      puVar4 = auStack_88;
      for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      if ((fStack_78 < 1.0) && (ABS(fStack_60) < 0.1)) {
        local_b4 = (*(float *)(DAT_100a1f2c + 0x4f52c + iVar1 * 0xc) - 8.0) + local_b4;
        FUN_1002fad0(&local_bc,24.0,&local_b0,local_94);
        FUN_1002fad0((float *)&DAT_1009fe84,-50.0,afStack_68,(float *)(DAT_100a1f2c + 0x68));
        puVar2 = (undefined4 *)
                 (**(code **)(DAT_100a1f2c + 0x4f580))(local_44,&local_bc,local_94,0,0xffffffff);
        puVar4 = auStack_88;
        for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar4 = puVar4 + 1;
        }
        if (fStack_78 == 1.0) {
          *(undefined4 *)(DAT_100a1f2c + 0xcc) = 0x44fa0000;
          *(undefined4 *)(DAT_100a1f2c + 100) = 0x43610000;
          *(uint *)(DAT_100a1f2c + 200) = *(uint *)(DAT_100a1f2c + 200) | 2;
          *(uint *)(DAT_100a1f2c + 0xb8) = *(uint *)(DAT_100a1f2c + 0xb8) | 0x800;
        }
      }
      *(int *)(DAT_100a1f2c + 0xbc) = iVar1;
    }
  }
  return;
}

/* 100337d0  FUN_100337d0  (438 bytes)
 * undefined FUN_100337d0(void)
 * called by: PM_PlayerMove
 */
void FUN_100337d0(void)

{
  byte_conflict *pbVar1;
  int iVar2;
  undefined4 uVar3;
  void *this;
  float local_4;
  
  if (*(int *)(DAT_100a1f2c + 0xe0) != -1) {
    if ((*(int *)(DAT_100a1f2c + 0xd0) == 0) && (350.0 <= *(float *)(DAT_100a1f2c + 0x9c))) {
      local_4 = 0.5;
      if (*(int *)(DAT_100a1f2c + 0xe4) < 1) {
        if (*(float *)(DAT_100a1f2c + 0x9c) <= 680.0) {
          if (*(float *)(DAT_100a1f2c + 0x9c) <= 340.0) {
            if (*(float *)(DAT_100a1f2c + 0x9c) < 200.0) {
              local_4 = 0.0;
            }
          }
          else {
            pbVar1 = (byte_conflict *)
                     (**(code **)(DAT_100a1f2c + 0x4f554))(DAT_100a1f2c + 0x4f3f0,&DAT_100961a8);
            iVar2 = FUN_1006e1dd(this,pbVar1);
            if (iVar2 == 1) {
              (**(code **)(DAT_100a1f2c + 0x4f5b4))
                        (2,s_player_pl_fallpain3_wav_100923a4,0x3f800000,0x3f4ccccd,0,100);
            }
            local_4 = 0.85;
          }
        }
        else {
          (**(code **)(DAT_100a1f2c + 0x4f5b4))
                    (2,s_player_pl_fallpain3_wav_100923a4,0x3f800000,0x3f4ccccd,0,100);
          local_4 = 1.0;
        }
      }
      if (0.0 < local_4) {
        *(undefined4 *)(DAT_100a1f2c + 0x94) = 0;
        FUN_10030b00();
        uVar3 = FUN_100309a0(*(undefined1 *)(DAT_100a1f2c + 0x1f0));
        FUN_10030220(uVar3,local_4);
        *(float *)(DAT_100a1f2c + 0xa8) = *(float *)(DAT_100a1f2c + 0x9c) * 0.013;
        if (8.0 < *(float *)(DAT_100a1f2c + 0xa0)) {
          *(undefined4 *)(DAT_100a1f2c + 0xa0) = 0x41000000;
        }
      }
    }
    if (*(int *)(DAT_100a1f2c + 0xe0) != -1) {
      *(undefined4 *)(DAT_100a1f2c + 0x9c) = 0;
    }
  }
  return;
}

/* 10033a80  FUN_10033a80  (137 bytes)
 * float10 FUN_10033a80(float * param_1, float * param_2, float param_3, float param_4)
 * called by: FUN_10058a60
 */
float10 __cdecl FUN_10033a80(float *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float10 fVar2;
  float local_24;
  float local_20;
  float local_1c;
  float local_18 [3];
  float local_c [3];
  
  FUN_1002f540(param_1,local_c,&local_24,local_18);
  param_1 = (float *)0xffffffff;
  fVar1 = local_24 * *param_2 + local_20 * param_2[1] + local_1c * param_2[2];
  if (0.0 <= fVar1) {
    param_1 = (float *)0x1;
  }
  fVar2 = ABS((float10)fVar1);
  if (fVar2 < (float10)param_4) {
    return (fVar2 / (float10)param_4) * (float10)param_3 * (float10)(int)param_1;
  }
  return (float10)(int)param_1 * (float10)param_3;
}

/* 10033b10  FUN_10033b10  (121 bytes)
 * undefined FUN_10033b10(float * param_1)
 * called by: FUN_10058a60
 */
void __cdecl FUN_10033b10(float *param_1)

{
  float fVar1;
  float10 fVar2;
  
  fVar2 = (float10)FUN_1002fc10(param_1);
  if (*(float *)(DAT_100a1f2c + 0x20c) == 0.0) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = *(float *)(DAT_100a1f2c + 0x20c);
  }
  fVar1 = (float)fVar2 - ((float)fVar2 * 0.5 + 10.0) * *(float *)(DAT_100a1f2c + 0x10) * fVar1;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  FUN_1002fc80(param_1,fVar1,param_1);
  return;
}

/* 10033b90  FUN_10033b90  (241 bytes)
 * undefined FUN_10033b90(void)
 * called by: PM_PlayerMove
 */
void FUN_10033b90(void)

{
  if (0 < *(int *)(DAT_100a1f2c + 0x94)) {
    *(uint *)(DAT_100a1f2c + 0x94) =
         *(int *)(DAT_100a1f2c + 0x94) - (uint)*(byte *)(DAT_100a1f2c + 0x4545a);
    if (*(int *)(DAT_100a1f2c + 0x94) < 0) {
      *(undefined4 *)(DAT_100a1f2c + 0x94) = 0;
    }
  }
  if (0.0 < *(float *)(DAT_100a1f2c + 0x8c)) {
    *(float *)(DAT_100a1f2c + 0x8c) =
         *(float *)(DAT_100a1f2c + 0x8c) - (float)*(byte *)(DAT_100a1f2c + 0x4545a);
    if (*(float *)(DAT_100a1f2c + 0x8c) < 0.0) {
      *(undefined4 *)(DAT_100a1f2c + 0x8c) = 0;
    }
  }
  if (0.0 < *(float *)(DAT_100a1f2c + 0xac)) {
    *(float *)(DAT_100a1f2c + 0xac) =
         *(float *)(DAT_100a1f2c + 0xac) - (float)*(byte *)(DAT_100a1f2c + 0x4545a);
    if (*(float *)(DAT_100a1f2c + 0xac) < 0.0) {
      *(undefined4 *)(DAT_100a1f2c + 0xac) = 0;
    }
  }
  return;
}

/* 100340d0  FUN_100340d0  (528 bytes)
 * undefined FUN_100340d0(void)
 * called by: pfnPM_Init
 */
void FUN_100340d0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  float local_c [3];
  
  fVar1 = -0.125;
  puVar6 = &DAT_1009fe90;
  for (iVar4 = 0xa2; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  iVar9 = 0;
  iVar4 = 0;
  puVar6 = &DAT_1009fe94;
  do {
    puVar6[1] = fVar1;
    fVar1 = fVar1 + 0.125;
    puVar6[-1] = 0;
    *puVar6 = 0;
    iVar4 = iVar4 + 1;
    puVar6 = puVar6 + 3;
  } while (fVar1 < 0.125 != (fVar1 == 0.125));
  fVar1 = -0.125;
  pfVar8 = (float *)(&DAT_1009fe94 + iVar4 * 3);
  do {
    *pfVar8 = fVar1;
    fVar1 = fVar1 + 0.125;
    pfVar8[-1] = 0.0;
    pfVar8[1] = 0.0;
    iVar4 = iVar4 + 1;
    pfVar8 = pfVar8 + 3;
  } while (fVar1 < 0.125 != (fVar1 == 0.125));
  fVar1 = -0.125;
  puVar6 = &DAT_1009fe94 + iVar4 * 3;
  do {
    puVar6[-1] = fVar1;
    fVar1 = fVar1 + 0.125;
    *puVar6 = 0;
    puVar6[1] = 0;
    iVar4 = iVar4 + 1;
    puVar6 = puVar6 + 3;
  } while (fVar1 < 0.125 != (fVar1 == 0.125));
  fVar1 = -0.125;
  do {
    fVar2 = -0.125;
    do {
      fVar3 = -0.125;
      pfVar8 = (float *)(&DAT_1009fe94 + iVar4 * 3);
      do {
        iVar5 = iVar4;
        iVar4 = iVar5 + 1;
        pfVar8[-1] = fVar1;
        *pfVar8 = fVar2;
        pfVar8[1] = fVar3;
        fVar3 = fVar3 + 0.25;
        pfVar8 = pfVar8 + 3;
      } while (fVar3 < 0.125 != (fVar3 == 0.125));
      fVar2 = fVar2 + 0.25;
    } while (fVar2 < 0.125 != (fVar2 == 0.125));
    fVar1 = fVar1 + 0.25;
  } while (fVar1 < 0.125 != (fVar1 == 0.125));
  iVar7 = 0;
  local_c[0] = 0.0;
  local_c[1] = 1.0;
  local_c[2] = 6.0;
  puVar6 = &DAT_1009fe94 + iVar4 * 3;
  iVar5 = iVar5 + 4;
  do {
    puVar6[1] = local_c[iVar7];
    puVar6[-1] = 0;
    *puVar6 = 0;
    puVar6 = puVar6 + 3;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 3);
  fVar1 = -2.0;
  pfVar8 = (float *)(&DAT_1009fe94 + iVar5 * 3);
  do {
    *pfVar8 = fVar1;
    fVar1 = fVar1 + 2.0;
    pfVar8[-1] = 0.0;
    pfVar8[1] = 0.0;
    iVar5 = iVar5 + 1;
    pfVar8 = pfVar8 + 3;
  } while (fVar1 < 2.0 != (fVar1 == 2.0));
  fVar1 = -2.0;
  puVar6 = &DAT_1009fe94 + iVar5 * 3;
  do {
    puVar6[-1] = fVar1;
    fVar1 = fVar1 + 2.0;
    *puVar6 = 0;
    puVar6[1] = 0;
    iVar5 = iVar5 + 1;
    puVar6 = puVar6 + 3;
  } while (fVar1 < 2.0 != (fVar1 == 2.0));
  do {
    fVar1 = local_c[iVar9];
    fVar2 = -2.0;
    do {
      fVar3 = -2.0;
      pfVar8 = (float *)(&DAT_1009fe94 + iVar5 * 3);
      do {
        iVar5 = iVar5 + 1;
        pfVar8[-1] = fVar2;
        *pfVar8 = fVar3;
        pfVar8[1] = fVar1;
        pfVar8 = pfVar8 + 3;
        fVar3 = fVar3 + 2.0;
      } while (fVar3 < 2.0 != (fVar3 == 2.0));
      fVar2 = fVar2 + 2.0;
    } while (fVar2 < 2.0 != (fVar2 == 2.0));
    iVar9 = iVar9 + 1;
  } while (iVar9 < 3);
  return;
}

/* 100343a0  FUN_100343a0  (18 bytes)
 * undefined4 * FUN_100343a0(undefined4 * param_1)
 * called by: InstallGameRules
 */
undefined4 * __fastcall FUN_100343a0(undefined4 *param_1)

{
  *param_1 = &PTR_RefreshSkillData_10085f58;
  CGameRules::RefreshSkillData();
  return param_1;
}

/* 100343c0  FUN_100343c0  (1 bytes)
 * undefined FUN_100343c0()
 */
void FUN_100343c0(void)

{
  return;
}

/* 100343d0  FUN_100343d0  (3 bytes)
 * undefined FUN_100343d0()
 */
undefined4 FUN_100343d0(void)

{
  return 0;
}

/* 100343e0  FUN_100343e0  (3 bytes)
 * undefined FUN_100343e0()
 */
undefined4 FUN_100343e0(void)

{
  return 0;
}

/* 100343f0  FUN_100343f0  (3 bytes)
 * undefined FUN_100343f0()
 */
undefined4 FUN_100343f0(void)

{
  return 0;
}

/* 10034400  FUN_10034400  (39 bytes)
 * undefined FUN_10034400()
 */
bool FUN_10034400(int param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x968) == (int *)0x0) {
    return true;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x968) + 0x108))();
  return iVar1 != 0;
}

/* 10034430  FUN_10034430  (5 bytes)
 * undefined FUN_10034430()
 */
undefined4 FUN_10034430(void)

{
  return 0;
}

/* 10034440  FUN_10034440  (8 bytes)
 * undefined FUN_10034440()
 */
undefined4 FUN_10034440(void)

{
  return 1;
}

/* 10034450  FUN_10034450  (3 bytes)
 * undefined FUN_10034450()
 */
void FUN_10034450(void)

{
  return;
}

/* 10034460  FUN_10034460  (3 bytes)
 * undefined FUN_10034460()
 */
void FUN_10034460(void)

{
  return;
}

/* 10034470  FUN_10034470  (31 bytes)
 * undefined FUN_10034470()
 */
float10 FUN_10034470(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)*(float *)(param_1 + 0x784) - (float10)680.0;
  *(float *)(param_1 + 0x784) = (float)fVar1;
  return fVar1 * (float10)0.22522523;
}

/* 10034490  FUN_10034490  (3 bytes)
 * undefined FUN_10034490()
 */
void FUN_10034490(void)

{
  return;
}

/* 100344a0  FUN_100344a0  (15 bytes)
 * undefined FUN_100344a0()
 */
bool FUN_100344a0(void)

{
  return DAT_1009f4c0 == 1;
}

/* 100344b0  FUN_100344b0  (3 bytes)
 * undefined FUN_100344b0()
 */
void FUN_100344b0(void)

{
  return;
}

/* 100344c0  FUN_100344c0  (8 bytes)
 * undefined FUN_100344c0()
 */
undefined4 FUN_100344c0(void)

{
  return 1;
}

/* 100344d0  FUN_100344d0  (10 bytes)
 * undefined FUN_100344d0()
 */
float10 FUN_100344d0(void)

{
  return (float10)gpGlobals->time;
}

/* 100344e0  FUN_100344e0  (8 bytes)
 * undefined FUN_100344e0()
 */
undefined4 FUN_100344e0(void)

{
  return 1;
}

/* 100344f0  FUN_100344f0  (3 bytes)
 * undefined FUN_100344f0()
 */
void FUN_100344f0(void)

{
  return;
}

/* 10034500  FUN_10034500  (3 bytes)
 * undefined FUN_10034500()
 */
void FUN_10034500(void)

{
  return;
}

/* 10034510  FUN_10034510  (3 bytes)
 * undefined FUN_10034510()
 */
void FUN_10034510(void)

{
  return;
}

/* 10034520  FUN_10034520  (9 bytes)
 * undefined FUN_10034520()
 */
float10 FUN_10034520(void)

{
  return (float10)-1.0;
}

/* 10034530  FUN_10034530  (9 bytes)
 * undefined FUN_10034530()
 */
float10 FUN_10034530(void)

{
  return (float10)0.0;
}

/* 10034540  FUN_10034540  (33 bytes)
 * undefined FUN_10034540()
 */
void FUN_10034540(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 4);
  *param_1 = *(undefined4 *)(iVar1 + 8);
  param_1[1] = *(undefined4 *)(iVar1 + 0xc);
  param_1[2] = *(undefined4 *)(iVar1 + 0x10);
  return;
}

/* 10034570  FUN_10034570  (8 bytes)
 * undefined FUN_10034570()
 */
undefined4 FUN_10034570(void)

{
  return 2;
}

/* 10034580  FUN_10034580  (8 bytes)
 * undefined FUN_10034580()
 */
undefined4 FUN_10034580(void)

{
  return 1;
}

/* 10034590  FUN_10034590  (3 bytes)
 * undefined FUN_10034590()
 */
void FUN_10034590(void)

{
  return;
}

/* 100345a0  FUN_100345a0  (8 bytes)
 * undefined FUN_100345a0()
 */
undefined4 FUN_100345a0(void)

{
  return 6;
}

/* 100345b0  FUN_100345b0  (9 bytes)
 * undefined FUN_100345b0()
 */
float10 FUN_100345b0(void)

{
  return (float10)-1.0;
}

/* 100345c0  FUN_100345c0  (33 bytes)
 * undefined FUN_100345c0()
 */
void FUN_100345c0(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 4);
  *param_1 = *(undefined4 *)(iVar1 + 8);
  param_1[1] = *(undefined4 *)(iVar1 + 0xc);
  param_1[2] = *(undefined4 *)(iVar1 + 0x10);
  return;
}

/* 100345f0  FUN_100345f0  (8 bytes)
 * undefined FUN_100345f0()
 */
undefined4 FUN_100345f0(void)

{
  return 1;
}

/* 10034600  FUN_10034600  (3 bytes)
 * undefined FUN_10034600()
 */
void FUN_10034600(void)

{
  return;
}

/* 10034610  FUN_10034610  (8 bytes)
 * undefined FUN_10034610()
 */
undefined4 FUN_10034610(void)

{
  return 4;
}

/* 10034620  FUN_10034620  (9 bytes)
 * undefined FUN_10034620()
 */
float10 FUN_10034620(void)

{
  return (float10)-1.0;
}

/* 10034630  FUN_10034630  (33 bytes)
 * undefined FUN_10034630()
 */
void FUN_10034630(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 4);
  *param_1 = *(undefined4 *)(iVar1 + 8);
  param_1[1] = *(undefined4 *)(iVar1 + 0xc);
  param_1[2] = *(undefined4 *)(iVar1 + 0x10);
  return;
}

