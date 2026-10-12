/* mp.dll - unnamed_10034660 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10034660  FUN_10034660  (7 bytes)
 * undefined FUN_10034660()
 */
float10 FUN_10034660(void)

{
  return (float10)0.0;
}

/* 10034670  FUN_10034670  (8 bytes)
 * undefined FUN_10034670()
 */
undefined4 FUN_10034670(void)

{
  return 9;
}

/* 10034680  FUN_10034680  (8 bytes)
 * undefined FUN_10034680()
 */
undefined4 FUN_10034680(void)

{
  return 0xc;
}

/* 10034690  FUN_10034690  (5 bytes)
 * undefined FUN_10034690()
 */
undefined4 FUN_10034690(void)

{
  return 0;
}

/* 100346a0  FUN_100346a0  (6 bytes)
 * undefined FUN_100346a0()
 */
undefined4 FUN_100346a0(void)

{
  return 1;
}

/* 100346b0  FUN_100346b0  (3 bytes)
 * undefined FUN_100346b0()
 */
void FUN_100346b0(void)

{
  return;
}

/* 100346c0  FUN_100346c0  (8 bytes)
 * undefined FUN_100346c0()
 */
undefined4 FUN_100346c0(void)

{
  return 1;
}

/* 100346d0  FUN_100346d0  (5 bytes)
 * undefined FUN_100346d0()
 */
undefined4 FUN_100346d0(void)

{
  return 0;
}

/* 100346e0  FUN_100346e0  (3 bytes)
 * undefined FUN_100346e0()
 */
void FUN_100346e0(void)

{
  return;
}

/* 100346f0  FUN_100346f0  (7 bytes)
 * undefined FUN_100346f0()
 */
float10 FUN_100346f0(void)

{
  return (float10)0.0;
}

/* 10034700  FUN_10034700  (6 bytes)
 * undefined FUN_10034700()
 */
undefined4 FUN_10034700(void)

{
  return 1;
}

/* 10034710  FUN_10034710  (8 bytes)
 * undefined FUN_10034710()
 */
undefined4 FUN_10034710(void)

{
  return 1;
}

/* 10034720  FUN_10034720  (1 bytes)
 * undefined FUN_10034720()
 */
void FUN_10034720(void)

{
  return;
}

/* 10034730  FUN_10034730  (6 bytes)
 * undefined FUN_10034730()
 */
undefined4 FUN_10034730(void)

{
  return 1;
}

/* 10034740  FUN_10034740  (8 bytes)
 * undefined FUN_10034740()
 */
undefined1 * FUN_10034740(void)

{
  return &DAT_1009f428;
}

/* 10035a00  FUN_10035a00  (102 bytes)
 * undefined FUN_10035a00(int param_1, int param_2)
 * called by: SENTENCEG_Init, USENTENCEG_Pick
 */
void __cdecl FUN_10035a00(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_100ac538 != 0) {
    if (0x20 < param_2) {
      param_2 = 0x20;
    }
    iVar2 = 0;
    if (0 < param_2) {
      do {
        *(char *)(iVar2 + param_1) = (char)iVar2;
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_2);
    }
    iVar2 = param_2 * 4;
    if (0 < iVar2) {
      do {
        iVar3 = (*g_engfuncs.pfnRandomLong)(0,param_2 + -1);
        iVar4 = (*g_engfuncs.pfnRandomLong)(0,param_2 + -1);
        uVar1 = *(undefined1 *)(iVar3 + param_1);
        *(undefined1 *)(iVar3 + param_1) = *(undefined1 *)(iVar4 + param_1);
        iVar2 = iVar2 + -1;
        *(undefined1 *)(iVar4 + param_1) = uVar1;
      } while (iVar2 != 0);
    }
  }
  return;
}

/* 100364e0  FUN_100364e0  (145 bytes)
 * undefined4 * FUN_100364e0(int param_1, int param_2, int * param_3, undefined4 * param_4, int param_5)
 * called by: FUN_10036580, SENTENCEG_Init
 */
undefined4 * __cdecl
FUN_100364e0(int param_1,int param_2,int *param_3,undefined4 *param_4,int param_5)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  if (((param_1 != 0) && (param_4 != (undefined4 *)0x0)) && (iVar2 = *param_3, iVar2 < param_2)) {
    if (param_5 + -1 < param_2 - iVar2) {
      param_2 = iVar2 + -1 + param_5;
    }
    bVar8 = false;
    iVar5 = iVar2;
    while ((iVar5 < param_2 && (!bVar8))) {
      pcVar1 = (char *)(iVar5 + param_1);
      iVar5 = iVar5 + 1;
      bVar8 = *pcVar1 == '\n';
    }
    if (iVar5 != iVar2) {
      uVar4 = iVar5 - iVar2;
      puVar6 = (undefined4 *)(iVar2 + param_1);
      puVar7 = param_4;
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      if ((int)uVar4 < param_5) {
        *(undefined1 *)(uVar4 + (int)param_4) = 0;
      }
      *param_3 = iVar5;
      return param_4;
    }
  }
  return (undefined4 *)0x0;
}

/* 10036580  FUN_10036580  (466 bytes)
 * undefined FUN_10036580(void)
 * called by: CWorld::Precache
 */
void FUN_10036580(void)

{
  char cVar1;
  byte_conflict *buffer;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *pvVar5;
  void *extraout_ECX_01;
  void *pvVar6;
  void *extraout_ECX_02;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  int local_20c;
  byte_conflict *pbStack_208;
  int iStack_204;
  char local_200 [512];
  
  if (DAT_100ac540 == 0) {
    DAT_100ac544 = (void *)0x0;
    puVar2 = (undefined4 *)&DAT_100aa938;
    for (iVar4 = 0x680; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    puVar2 = (undefined4 *)&DAT_100ac338;
    for (iVar4 = 0x80; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    pcVar7 = local_200;
    for (iVar4 = 0x80; iVar4 != 0; iVar4 = iVar4 + -1) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7 = pcVar7 + 4;
    }
    buffer = (*g_engfuncs.pfnLoadFileForMe)(s_sound_materials_txt_100960f0,&local_20c);
    if (buffer != (byte_conflict *)0x0) {
      pbStack_208 = buffer;
      puVar2 = FUN_100364e0((int)buffer,local_20c,&iStack_204,(undefined4 *)local_200,0x1ff);
      pvVar5 = extraout_ECX;
      while ((puVar2 != (undefined4 *)0x0 && ((int)DAT_100ac544 < 0x200))) {
        iVar4 = 0;
        cVar1 = local_200[0];
        while ((cVar1 != '\0' &&
               (uVar3 = FUN_1006e7fb((void *)(int)local_200[iVar4],(int)local_200[iVar4]),
               pvVar5 = extraout_ECX_00, uVar3 != 0))) {
          cVar1 = local_200[iVar4 + 1];
          iVar4 = iVar4 + 1;
        }
        cVar1 = local_200[iVar4];
        if (((cVar1 != '\0') && (cVar1 != '/')) &&
           (uVar3 = FUN_1006e728(pvVar5,(int)cVar1), uVar3 != 0)) {
          uVar3 = FUN_1006ef63((int)local_200[iVar4]);
          pvVar5 = DAT_100ac544;
          *(char *)((int)DAT_100ac544 + 0x100ac338) = (char)uVar3;
          cVar1 = local_200[iVar4 + 1];
          pvVar6 = pvVar5;
          while ((iVar9 = iVar4 + 1, cVar1 != '\0' &&
                 (uVar3 = FUN_1006e7fb(pvVar5,(int)cVar1), pvVar6 = DAT_100ac544, uVar3 != 0))) {
            cVar1 = local_200[iVar4 + 2];
            pvVar5 = extraout_ECX_01;
            iVar4 = iVar9;
          }
          cVar1 = local_200[iVar9];
          pcVar7 = local_200 + iVar9;
          if (cVar1 != '\0') {
            while ((cVar1 != '\0' &&
                   (uVar3 = FUN_1006e7fb((void *)(int)local_200[iVar9],(int)local_200[iVar9]),
                   pvVar6 = DAT_100ac544, uVar3 == 0))) {
              cVar1 = local_200[iVar9 + 1];
              iVar9 = iVar9 + 1;
            }
            buffer = pbStack_208;
            if (local_200[iVar9] != '\0') {
              if (iVar4 + 0xd <= iVar9) {
                iVar9 = iVar4 + 0xd;
              }
              local_200[iVar9] = '\0';
              pcVar8 = &DAT_100aa938 + (int)pvVar6 * 0xd;
              DAT_100ac544 = (void *)((int)pvVar6 + 1);
              do {
                cVar1 = *pcVar7;
                pcVar7 = pcVar7 + 1;
                *pcVar8 = cVar1;
                pcVar8 = pcVar8 + 1;
              } while (cVar1 != '\0');
            }
          }
        }
        puVar2 = FUN_100364e0((int)buffer,local_20c,&iStack_204,(undefined4 *)local_200,0x1ff);
        pvVar5 = extraout_ECX_02;
      }
      (*g_engfuncs.pfnFreeFile)(buffer);
      DAT_100ac540 = 1;
    }
  }
  return;
}

/* 100371e0  FUN_100371e0  (44 bytes)
 * undefined FUN_100371e0(undefined4 * param_1)
 * called by: CBasePlayer::Killed
 */
void __fastcall FUN_100371e0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = DAT_1009f4a8;
  param_1[1] = DAT_1009f4ac;
  uVar1 = DAT_1009f4b0;
  param_1[6] = 0xffffffff;
  param_1[2] = uVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

/* 100375d0  FUN_100375d0  (16 bytes)
 * int FUN_100375d0(undefined4 param_1)
 * called by: CBasePlayer::Killed, CBasePlayer::UpdatePlayerSound
 */
int __cdecl FUN_100375d0(edict_t *param_1)

{
  int iVar1;
  
  iVar1 = (*g_engfuncs.pfnIndexOfEdict)(param_1);
  return iVar1 + -1;
}

/* 10037640  FUN_10037640  (41 bytes)
 * undefined FUN_10037640(int param_1)
 * called by: pfnSpectatorConnect
 */
void __fastcall FUN_10037640(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x1a4) = 0x4000000;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 8;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

/* 100378e0  FUN_100378e0  (95 bytes)
 * undefined FUN_100378e0(int param_1)
 * called by: CBaseEntity::SUB_Remove, UTIL_Remove
 */
void __fastcall FUN_100378e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (((*(uint *)(*(int *)(param_1 + 4) + 0x1a4) & 0x10000) != 0) &&
     (iVar1 = 0, iVar2 = DAT_1009f758, 0 < DAT_1009f754)) {
    do {
      if (*(int *)(iVar2 + iVar1 * 4) == *(int *)(param_1 + 4)) {
        *(undefined4 *)(iVar2 + iVar1 * 4) = 0;
        iVar2 = DAT_1009f758;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_1009f754);
  }
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 4);
  if (iVar2 != 0) {
    FUN_1006c270(&DAT_102e00f4,iVar2,2);
  }
  return;
}

/* 100386c0  FUN_100386c0  (6 bytes)
 * undefined FUN_100386c0()
 */
char * FUN_100386c0(void)

{
  return s_TS_Teamplay_10097494;
}

/* 10038870  FUN_10038870  (104 bytes)
 * undefined FUN_10038870()
 */
undefined4 FUN_10038870(int param_1,byte_conflict *param_2)

{
  undefined4 uVar1;
  byte_conflict *pbVar2;
  int iVar3;
  void *this;
  bool bVar4;
  
  uVar1 = CVoiceGameMgr::ClientCommand((CVoiceGameMgr *)&DAT_1009fe50,param_1,param_2);
  if ((char)uVar1 != '\0') {
    return 1;
  }
  iVar3 = 0xb;
  bVar4 = true;
  pbVar2 = (byte_conflict *)s_menuselect_10094af8;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar4 = *param_2 == *pbVar2;
    param_2 = param_2 + 1;
    pbVar2 = pbVar2 + 1;
  } while (bVar4);
  if (!bVar4) {
    return 0;
  }
  iVar3 = (*g_engfuncs.pfnCmd_Argc)();
  if (iVar3 < 2) {
    return 1;
  }
  pbVar2 = (byte_conflict *)(*g_engfuncs.pfnCmd_Argv)(1);
  FUN_1006e1dd(this,pbVar2);
  return 1;
}

/* 100388e0  FUN_100388e0  (55 bytes)
 * undefined FUN_100388e0()
 */
void FUN_100388e0(int param_1)

{
  (*g_engfuncs.pfnMessageBegin)
            (1,DAT_100cbc00,(float *)0x0,*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
  (*g_engfuncs.pfnWriteByte)(DAT_1009f498);
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 10038920  FUN_10038920  (409 bytes)
 * undefined FUN_10038920()
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __thiscall FUN_10038920(int *param_1,int param_2,undefined4 param_3,char *param_4)

{
  edict_t *peVar1;
  int iVar2;
  char *infobuffer;
  char *unaff_EBX;
  char *pcVar3;
  char *unaff_EDI;
  int *in_stack_00000030;
  char *pcVar4;
  
  if ((DAT_100ac8c0 == '\0') || (DAT_100ac8c0 == '\x01')) {
    if (_DAT_102e00fc == 0.0) {
      pcVar3 = (*g_engfuncs.pfnGetInfoKeyBuffer)(*(edict_t **)(*(int *)(param_2 + 4) + 0x208));
      pcVar3 = (*g_engfuncs.pfnInfoKeyValue)(pcVar3,unaff_EDI);
      _strncpy((char *)(param_2 + 0xaa0),pcVar3,0x10);
    }
    else {
      pcVar3 = (char *)(param_2 + 0xaa0);
      if (*(char *)(param_2 + 0x731) == '\0') {
        pcVar4 = s_mp_theothers_10093e00;
      }
      else {
        pcVar4 = s_mp_theone_10093e18;
      }
      pcVar4 = (*g_engfuncs.pfnCVarGetString)(pcVar4);
      _strncpy(pcVar3,pcVar4,(size_t)unaff_EDI);
      peVar1 = *(edict_t **)(*(int *)(param_2 + 4) + 0x208);
      iVar2 = (*g_engfuncs.pfnIndexOfEdict)(peVar1);
      pcVar4 = pcVar3;
      infobuffer = (*g_engfuncs.pfnGetInfoKeyBuffer)(peVar1);
      (*g_engfuncs.pfnSetClientKeyValue)(iVar2,infobuffer,pcVar4,unaff_EBX);
      peVar1 = *(edict_t **)(*(int *)(param_2 + 4) + 0x208);
      iVar2 = (*g_engfuncs.pfnIndexOfEdict)(peVar1);
      pcVar4 = (*g_engfuncs.pfnGetInfoKeyBuffer)(peVar1);
      (*g_engfuncs.pfnSetClientKeyValue)(iVar2,pcVar4,pcVar3,param_4);
      param_1 = in_stack_00000030;
    }
  }
  FUN_10039730(param_1,'\x01');
  pcVar3 = (char *)(param_2 + 0xaa0);
  if ((*(char *)(param_2 + 0xaa0) != '\0') &&
     (iVar2 = (**(code **)(*param_1 + 0xd4))(pcVar3), iVar2 != 0)) {
    if (_DAT_10093b44 == 0.0) {
      return pcVar3;
    }
    _strncpy(pcVar3,(char *)&DAT_100ac550,0x10);
    return pcVar3;
  }
  if (_DAT_10093b44 == 0.0) {
    pcVar4 = (char *)FUN_10039620(param_1);
    _strncpy(pcVar3,pcVar4,0x10);
    return pcVar3;
  }
  _strncpy(pcVar3,(char *)&DAT_100ac550,0x10);
  return pcVar3;
}

/* 10038cb0  FUN_10038cb0  (670 bytes)
 * undefined FUN_10038cb0()
 */
void __thiscall
FUN_10038cb0(int *param_1,CBasePlayer *param_2,undefined4 param_3,edict_t *param_4,int param_5,
            int param_6,undefined4 param_7,char *param_8)

{
  undefined1 *_Dest;
  int iVar1;
  edict_t *peVar2;
  int iVar3;
  char *unaff_EBP;
  char *unaff_ESI;
  char *pcVar4;
  bool bVar5;
  longlong lVar6;
  undefined4 in_stack_00000040;
  int in_stack_00000074;
  
  iVar1 = (*g_engfuncs.pfnIndexOfEdict)(param_2->pev->pContainingEntity);
  pcVar4 = (char *)((-(uint)(param_6 != 0) & 0x1000) + 0x1000);
  if (param_5 != 0) {
    param_1[0x83] = 1;
    param_1[0x84] = 1;
    peVar2 = (*g_engfuncs.pfnPEntityOfEntIndex)(0);
    if (peVar2 != (edict_t *)0x0) {
      peVar2 = (edict_t *)&peVar2->v;
    }
    (*param_2->vtable[0xe])(peVar2,peVar2,0x44610000);
    param_1[0x83] = 0;
    param_1[0x84] = 0;
    unaff_ESI = pcVar4;
  }
  if ((char)param_4->free != '\0') {
    iVar3 = 1;
    bVar5 = true;
    peVar2 = param_4;
    pcVar4 = &DAT_1009f428;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar5 = (char)peVar2->free == *pcVar4;
      peVar2 = (edict_t *)((int)&peVar2->free + 1);
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    peVar2 = param_4;
    if (!bVar5) goto LAB_10038d58;
  }
  peVar2 = (edict_t *)FUN_10039620(param_1);
LAB_10038d58:
  _Dest = &param_2->field_0xaa0;
  _strncpy(_Dest,(char *)peVar2,0x10);
  if ((DAT_1009f498 == 2) || (DAT_1009f498 == 3)) {
    (*g_engfuncs.pfnIndexOfEdict)(param_2->pev->pContainingEntity);
    unaff_ESI = FUN_10045840(&DAT_100ac8c0,(int)param_2);
    pcVar4 = (*g_engfuncs.pfnGetInfoKeyBuffer)(param_4);
  }
  else {
    pcVar4 = _Dest;
    param_8 = (*g_engfuncs.pfnGetInfoKeyBuffer)(param_2->pev->pContainingEntity);
  }
  (*g_engfuncs.pfnSetClientKeyValue)((int)param_8,pcVar4,unaff_ESI,unaff_EBP);
  pcVar4 = (*g_engfuncs.pfnGetInfoKeyBuffer)(param_2->pev->pContainingEntity);
  (*g_engfuncs.pfnSetClientKeyValue)(iVar1,pcVar4,_Dest,(char *)param_4);
  FUN_10039730(param_1,'\0');
  (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbbf8,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(iVar1);
  (*g_engfuncs.pfnWriteString)(_Dest);
  (*g_engfuncs.pfnMessageEnd)();
  (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbbf4,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(iVar1);
  lVar6 = __ftol();
  (*g_engfuncs.pfnWriteShort)((int)lVar6);
  (*g_engfuncs.pfnWriteShort)(*(int *)&param_2->field_0xa88);
  (*g_engfuncs.pfnWriteShort)(0);
  iVar1 = (**(code **)(*DAT_1009f494 + 0xcc))();
  (*g_engfuncs.pfnWriteShort)(iVar1 + 1);
  (*g_engfuncs.pfnMessageEnd)();
  if (in_stack_00000074 == 0) {
    FUN_1000a540(&stack0x00000040,param_2->pev->origin);
    CBasePlayer::StartObserver(param_2);
    FUN_10042d50((int)param_2,5,'\x01');
  }
  lVar6 = __ftol();
  *(int *)&param_2->field_0x4b8 = (int)lVar6;
  FUN_10042c90((int)param_2);
  in_stack_00000040 = 0x10038f0a;
  (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbc34,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(DAT_100ac7d8);
  iVar1 = 0;
  if (0 < DAT_100ac7d8) {
    pcVar4 = (char *)&DAT_100ac550;
    do {
      (*g_engfuncs.pfnWriteString)(pcVar4);
      iVar1 = iVar1 + 1;
      pcVar4 = pcVar4 + 0x10;
    } while (iVar1 < DAT_100ac7d8);
  }
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 100392e0  FUN_100392e0  (216 bytes)
 * undefined FUN_100392e0()
 */
void __thiscall FUN_100392e0(CHalfLifeMultiplay *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x210) == 0) {
    CHalfLifeMultiplay::PlayerKilled(param_1,param_2,param_3);
    iVar1 = GetClassPtr<CBasePlayer>((int)param_3);
    if (*(char *)(iVar1 + 0x731) != '\0') {
      iVar4 = 0;
      iVar5 = 0;
      if (0 < gpGlobals->maxClients) {
        do {
          iVar2 = UTIL_PlayerByIndex(iVar5);
          if (iVar2 != 0) {
            piVar3 = (int *)UTIL_PlayerByIndex(iVar5);
            iVar2 = (**(code **)(*piVar3 + 0xa8))();
            if (iVar2 != 0) {
              iVar4 = iVar4 + 1;
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < gpGlobals->maxClients);
      }
      *(float *)(*(int *)(iVar1 + 4) + 0x160) =
           (float)(iVar4 * 10) + *(float *)(*(int *)(iVar1 + 4) + 0x160);
      if (200.0 < *(float *)(*(int *)(iVar1 + 4) + 0x160)) {
        *(undefined4 *)(*(int *)(iVar1 + 4) + 0x160) = 0x43480000;
      }
    }
    FUN_10039730(param_1,'\0');
  }
  return;
}

/* 100393c0  FUN_100393c0  (6 bytes)
 * undefined FUN_100393c0()
 */
undefined4 FUN_100393c0(void)

{
  return 1;
}

/* 100393d0  FUN_100393d0  (78 bytes)
 * undefined4 FUN_100393d0(int param_1, int param_2)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_100393d0(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    iVar1 = (**(code **)(*(int *)this + 200))(param_1,param_2);
    if (((iVar1 == 1) && (_DAT_10093a90 == 0.0)) && (param_2 != param_1)) {
      return 0;
    }
  }
  uVar2 = FUN_10024260();
  return uVar2;
}

/* 10039420  FUN_10039420  (122 bytes)
 * undefined4 FUN_10039420(byte.conflict * param_1, int * param_2)
 */
undefined4 __thiscall FUN_10039420(void *this,byte_conflict *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  byte_conflict *pbVar4;
  uint uVar5;
  void *this_00;
  
  if ((param_1 != (byte_conflict *)0x0) && (param_2 != (int *)0x0)) {
    iVar1 = (**(code **)(*param_2 + 0xa8))();
    if (iVar1 != 0) {
      pcVar2 = (char *)(**(code **)(*(int *)this + 0xc4))(param_1);
      if (*pcVar2 != '\0') {
        pcVar2 = (char *)(**(code **)(*(int *)this + 0xc4))(param_2);
        if (*pcVar2 != '\0') {
          uVar3 = (**(code **)(*(int *)this + 0xc4))(param_2);
          pbVar4 = (byte_conflict *)(**(code **)(*(int *)this + 0xc4))(param_1,uVar3);
          uVar5 = FUN_1007e860(this_00,pbVar4,param_1);
          if (uVar5 == 0) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

/* 100394a0  FUN_100394a0  (85 bytes)
 * undefined FUN_100394a0()
 */
undefined4 __thiscall FUN_100394a0(int *param_1,undefined4 param_2,edict_t *param_3)

{
  int *piVar1;
  int iVar2;
  
  if ((param_3 == (edict_t *)0x0) &&
     (param_3 = (*g_engfuncs.pfnPEntityOfEntOffset)(0), param_3 == (edict_t *)0x0)) {
    return 1;
  }
  piVar1 = param_3->pvPrivateData;
  if (((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0xa8))(), iVar2 != 0)) &&
     (iVar2 = (**(code **)(*param_1 + 200))(param_2,piVar1), iVar2 == 1)) {
    return 0;
  }
  return 1;
}

/* 10039500  FUN_10039500  (56 bytes)
 * undefined FUN_10039500()
 */
undefined4 __thiscall FUN_10039500(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    return 0;
  }
  if ((param_2 != 0) && (param_2 != param_3)) {
    iVar1 = (**(code **)(*param_1 + 200))(param_2,param_3);
    if (iVar1 == 1) {
      return 0xffffffff;
    }
  }
  return 1;
}

/* 10039540  FUN_10039540  (34 bytes)
 * undefined FUN_10039540()
 */
undefined1 * FUN_10039540(int *param_1)

{
  undefined1 *puVar1;
  
  if ((param_1 != (int *)0x0) && (param_1[1] != 0)) {
    puVar1 = (undefined1 *)(**(code **)(*param_1 + 0xb0))();
    return puVar1;
  }
  return &DAT_1009f428;
}

/* 10039570  FUN_10039570  (76 bytes)
 * int FUN_10039570(byte.conflict * param_1)
 */
int __thiscall FUN_10039570(void *this,byte_conflict *param_1)

{
  uint uVar1;
  void *extraout_ECX;
  int iVar2;
  byte_conflict *pbVar3;
  
  if (((param_1 != (byte_conflict *)0x0) && (*param_1 != '\0')) && (iVar2 = 0, 0 < DAT_100ac7d8)) {
    pbVar3 = (byte_conflict *)&DAT_100ac550;
    do {
      uVar1 = FUN_1007e860(this,pbVar3,param_1);
      if (uVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      pbVar3 = pbVar3 + 0x10;
      this = extraout_ECX;
    } while (iVar2 < DAT_100ac7d8);
  }
  return -1;
}

/* 100395c0  FUN_100395c0  (35 bytes)
 * undefined FUN_100395c0()
 */
undefined4 * FUN_100395c0(int param_1)

{
  if ((-1 < param_1) && (param_1 < DAT_100ac7d8)) {
    return &DAT_100ac550 + param_1 * 4;
  }
  return (undefined4 *)&DAT_1009f428;
}

/* 100395f0  FUN_100395f0  (44 bytes)
 * undefined FUN_100395f0()
 */
bool __thiscall FUN_100395f0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[0x85] == 0) {
    return true;
  }
  iVar1 = (**(code **)(*param_1 + 0xcc))(param_2);
  return iVar1 != -1;
}

/* 10039620  FUN_10039620  (265 bytes)
 * undefined4 * FUN_10039620(int * param_1)
 * called by: FUN_10038920, FUN_10038cb0
 */
undefined4 * __fastcall FUN_10039620(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_80 [32];
  
  iVar6 = 0x20;
  piVar1 = local_80;
  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar1 = 0;
    piVar1 = piVar1 + 1;
  }
  iVar4 = 1;
  if (0 < gpGlobals->maxClients) {
    do {
      piVar1 = (int *)UTIL_PlayerByIndex(iVar4);
      if ((DAT_1009f498 == 2) || (DAT_1009f498 == 3)) {
        if (piVar1 != (int *)0x0) {
          iVar3 = *param_1;
          uVar2 = (**(code **)(*piVar1 + 0xb0))();
          goto LAB_1003968b;
        }
      }
      else if (piVar1 != (int *)0x0) {
        iVar3 = *param_1;
        uVar2 = (**(code **)(*piVar1 + 0xb0))();
LAB_1003968b:
        iVar3 = (**(code **)(iVar3 + 0xcc))(uVar2);
        if (-1 < iVar3) {
          local_80[iVar3] = local_80[iVar3] + 1;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 <= gpGlobals->maxClients);
  }
  puVar7 = (undefined4 *)0x0;
  if ((DAT_1009f498 == 2) || (DAT_1009f498 == 3)) {
    iVar4 = 0;
    if (0 < DAT_100ac7d8) {
      puVar5 = &DAT_100ac550;
      do {
        if (local_80[iVar4] < iVar6) {
          iVar6 = local_80[iVar4];
          puVar7 = puVar5;
        }
        iVar4 = iVar4 + 1;
        puVar5 = puVar5 + 4;
      } while (iVar4 < DAT_100ac7d8);
    }
  }
  else {
    iVar4 = 0;
    if (0 < DAT_100ac7d8) {
      puVar5 = &DAT_100ac550;
      do {
        if (local_80[iVar4] < iVar6) {
          iVar6 = local_80[iVar4];
          puVar7 = puVar5;
        }
        iVar4 = iVar4 + 1;
        puVar5 = puVar5 + 4;
      } while (iVar4 < DAT_100ac7d8);
      return puVar7;
    }
  }
  return puVar7;
}

/* 10039730  FUN_10039730  (506 bytes)
 * undefined FUN_10039730(char param_1)
 * called by: CHalfLifeTeamplay::CHalfLifeTeamplay, CHalfLifeTeamplay::ClientUserInfoChanged, CHalfLifeTeamplay::InitHUD, CTSGameRules::RestartRound, FUN_10038920, FUN_10038cb0, FUN_100392e0
 */
void __thiscall FUN_10039730(void *this,char param_1)

{
  char cVar1;
  globalvars_t *pgVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  int iStack_204;
  
  pcVar3 = (char *)((int)this + 0xc);
  DAT_100ac7d8 = 0;
  iVar4 = -(int)pcVar3;
  do {
    cVar1 = *pcVar3;
    pcVar3[(int)(&stack0xfffffe00 + iVar4)] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = (char *)FUN_1006f113(&stack0xfffffe00,(byte_conflict *)&DAT_10097478);
  while ((pcVar3 != (char *)0x0 && (*pcVar3 != '\0'))) {
    iVar4 = (**(code **)(*(int *)this + 0xcc))(pcVar3);
    if (iVar4 < 0) {
      iVar4 = DAT_100ac7d8 * 0x10 - (int)pcVar3;
      do {
        cVar1 = *pcVar3;
        pcVar3[(int)&DAT_100ac550 + iVar4] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      DAT_100ac7d8 = DAT_100ac7d8 + 1;
    }
    pcVar3 = (char *)FUN_1006f113((byte_conflict *)0x0,(byte_conflict *)&DAT_10097478);
  }
  if (DAT_100ac7d8 < 2) {
    DAT_100ac7d8 = 0;
    *(undefined4 *)((int)this + 0x214) = 0;
  }
  pgVar2 = gpGlobals;
  puVar8 = &DAT_100ac750;
  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  iStack_204 = 1;
  if (0 < pgVar2->maxClients) {
    do {
      piVar5 = (int *)UTIL_PlayerByIndex(iStack_204);
      if ((piVar5 != (int *)0x0) && (iVar4 = (**(code **)(*piVar5 + 0xa8))(), iVar4 != 0)) {
        pcVar3 = (char *)(**(code **)(*piVar5 + 0xb0))();
        iVar6 = (**(code **)(*(int *)this + 0xcc))(pcVar3);
        iVar4 = DAT_100ac7d8;
        if (iVar6 < 0) {
          if (*(int *)((int)this + 0x214) == 0) {
            iVar6 = DAT_100ac7d8 * 4;
            puVar8 = &DAT_100ac750 + DAT_100ac7d8;
            DAT_100ac7d8 = DAT_100ac7d8 + 1;
            *puVar8 = 0;
            _strncpy((char *)(&DAT_100ac550 + iVar6),pcVar3,0x10);
            iVar6 = iVar4;
          }
          if (-1 < iVar6) goto LAB_10039879;
        }
        else {
LAB_10039879:
          lVar9 = __ftol();
          (&DAT_100ac750)[iVar6] = (int)lVar9;
        }
        if (param_1 != '\0') {
          iVar4 = *(int *)this;
          uVar7 = (**(code **)(*piVar5 + 0xb0))();
          iVar4 = (**(code **)(iVar4 + 0xd4))(uVar7);
          if (iVar4 != 0) {
            (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbbf8,(float *)0x0,(edict_t *)0x0);
            iVar4 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(piVar5[1] + 0x208));
            (*g_engfuncs.pfnWriteByte)(iVar4);
            pcVar3 = (char *)(**(code **)(*piVar5 + 0xb0))();
            iStack_204 = 0x100398f7;
            (*g_engfuncs.pfnWriteString)(pcVar3);
            (*g_engfuncs.pfnMessageEnd)();
          }
        }
      }
      iStack_204 = iStack_204 + 1;
    } while (iStack_204 <= gpGlobals->maxClients);
  }
  return;
}

/* 1003a5d0  FUN_1003a5d0  (41 bytes)
 * undefined FUN_1003a5d0(int param_1)
 * called by: CTriggerCDAudio::Touch, CTriggerCDAudio::Use
 */
void __fastcall FUN_1003a5d0(int param_1)

{
  longlong lVar1;
  
  lVar1 = __ftol();
  PlayCDTrack((int)lVar1);
  *(undefined4 *)(param_1 + 0x14) = 0;
  UTIL_Remove(param_1);
  return;
}

/* 1003a730  FUN_1003a730  (34 bytes)
 * undefined FUN_1003a730(int param_1)
 * called by: CTargetCDAudio::Think, CTargetCDAudio::Use
 */
void __fastcall FUN_1003a730(int param_1)

{
  longlong lVar1;
  
  lVar1 = __ftol();
  PlayCDTrack((int)lVar1);
  UTIL_Remove(param_1);
  return;
}

/* 1003b650  FUN_1003b650  (224 bytes)
 * undefined4 FUN_1003b650(byte.conflict * param_1, int param_2, byte.conflict * param_3, char * param_4, int param_5)
 * called by: CChangeLevel::ChangeList
 */
undefined4 __cdecl
FUN_1003b650(byte_conflict *param_1,int param_2,byte_conflict *param_3,char *param_4,int param_5)

{
  byte bVar1;
  byte_conflict bVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  
  if ((((param_1 == (byte_conflict *)0x0) || (param_3 == (byte_conflict *)0x0)) ||
      (param_4 == (char *)0x0)) || (param_5 == 0)) {
    return 0;
  }
  iVar6 = 0;
  pbVar8 = param_1;
  if (0 < param_2) {
    do {
      pbVar4 = pbVar8;
      pbVar7 = param_3;
      if (*(int *)(pbVar8 + 0x40) == param_5) {
        do {
          bVar1 = *pbVar4;
          bVar9 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_1003b6bb:
            iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_1003b6c0;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar9 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_1003b6bb;
          pbVar4 = pbVar4 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_1003b6c0:
        if (iVar5 == 0) {
          return 0;
        }
      }
      iVar6 = iVar6 + 1;
      pbVar8 = pbVar8 + 0x50;
    } while (iVar6 < param_2);
  }
  iVar6 = param_2 * 0x50 - (int)param_3;
  do {
    bVar2 = *param_3;
    param_3[(int)(param_1 + iVar6)] = bVar2;
    param_3 = param_3 + 1;
  } while (bVar2 != '\0');
  iVar6 = (param_2 * 0x50 + 0x20) - (int)param_4;
  do {
    cVar3 = *param_4;
    param_4[(int)(param_1 + iVar6)] = cVar3;
    param_4 = param_4 + 1;
  } while (cVar3 != '\0');
  *(int *)(param_1 + param_2 * 0x50 + 0x40) = param_5;
  *(undefined4 *)(param_1 + param_2 * 0x50 + 0x44) = *(undefined4 *)(param_5 + 0x88);
  *(undefined4 *)(param_1 + param_2 * 0x50 + 0x48) = *(undefined4 *)(param_5 + 0x8c);
  *(undefined4 *)(param_1 + param_2 * 0x50 + 0x4c) = *(undefined4 *)(param_5 + 0x90);
  return 1;
}

/* 1003b740  FUN_1003b740  (188 bytes)
 * undefined4 FUN_1003b740(int * param_1, undefined4 param_2)
 * called by: CChangeLevel::ChangeLevelNow, CChangeLevel::ChangeList
 */
undefined4 __cdecl FUN_1003b740(int *param_1,char *param_2)

{
  void *this;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  edict_t *pEdictStartSearchAfter;
  
  cVar1 = (**(code **)(*param_1 + 0x20))();
  if (cVar1 < '\0') {
    return 1;
  }
  if ((*(int *)(param_1[1] + 0x108) == 0xc) && (iVar2 = *(int *)(param_1[1] + 0x194), iVar2 != 0)) {
    param_1 = *(int **)(iVar2 + 0x7c);
  }
  uVar3 = 1;
  pEdictStartSearchAfter = (edict_t *)0x0;
  do {
    do {
      pEdictStartSearchAfter =
           (*g_engfuncs.pfnFindEntityByString)(pEdictStartSearchAfter,s_targetname_100915e4,param_2)
      ;
      if ((pEdictStartSearchAfter == (edict_t *)0x0) ||
         (iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(pEdictStartSearchAfter), iVar2 == 0)) {
        return uVar3;
      }
      this = pEdictStartSearchAfter->pvPrivateData;
    } while (this == (void *)0x0);
    iVar2 = 0x13;
    bVar6 = true;
    pcVar4 = gpGlobals->pStringBase + **(int **)((int)this + 4);
    pcVar5 = s_trigger_transition_10097b1c;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar6 = *pcVar4 == *pcVar5;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      iVar2 = FUN_1000c9e0(this,(int)param_1);
      if (iVar2 != 0) {
        return 1;
      }
      uVar3 = 0;
    }
  } while( true );
}

/* 1003cb30  FUN_1003cb30  (662 bytes)
 * undefined FUN_1003cb30(int param_1)
 * called by: CTriggerCamera::FollowTarget, CTriggerCamera::Use
 */
void __fastcall FUN_1003cb30(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float10 fVar6;
  undefined4 uStack_24;
  float fStack_20;
  float fStack_1c;
  
  if (*(int *)(param_1 + 0x6c) != 0) {
    fVar2 = *(float *)(param_1 + 0x80) -
            *(float *)(*(int *)(param_1 + 4) + 0x1f8) * gpGlobals->frametime;
    *(float *)(param_1 + 0x80) = fVar2;
    if (fVar2 < 0.0 != (fVar2 == 0.0)) {
      iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x6c) + 4) + 0x1d4);
      if (iVar5 != 0) {
        FireTargets((int)(gpGlobals->pStringBase + iVar5),param_1,param_1,3,0);
        iVar5 = *(int *)(*(int *)(param_1 + 0x6c) + 4);
        if ((*(byte *)(iVar5 + 0x1a0) & 4) != 0) {
          *(undefined4 *)(iVar5 + 0x1d4) = 0;
        }
      }
      iVar5 = (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))();
      *(int *)(param_1 + 0x6c) = iVar5;
      if (iVar5 == 0) {
        iVar5 = *(int *)(param_1 + 4);
        *(undefined4 *)(iVar5 + 0x20) = DAT_1009f4a8;
        *(undefined4 *)(iVar5 + 0x24) = DAT_1009f4ac;
        *(undefined4 *)(iVar5 + 0x28) = DAT_1009f4b0;
      }
      else {
        if (*(float *)(*(int *)(iVar5 + 4) + 0x1f8) != 0.0) {
          *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(*(int *)(iVar5 + 4) + 0x1f8);
        }
        iVar5 = *(int *)(iVar5 + 4);
        iVar1 = *(int *)(param_1 + 4);
        fVar2 = *(float *)(iVar5 + 8) - *(float *)(iVar1 + 8);
        fStack_20 = *(float *)(iVar5 + 0xc) - *(float *)(iVar1 + 0xc);
        fStack_1c = *(float *)(iVar5 + 0x10) - *(float *)(iVar1 + 0x10);
        fVar3 = SQRT(fVar2 * fVar2 + fStack_20 * fStack_20 + fStack_1c * fStack_1c);
        *(float *)(param_1 + 0x80) = fVar3;
        if (fVar3 == 0.0) {
          uStack_24 = 0;
          fStack_20 = 0.0;
          fStack_1c = 1.0;
        }
        else {
          fVar3 = 1.0 / fVar3;
          FUN_1000c5f0(&uStack_24,fVar3 * fVar2,fStack_20 * fVar3,fStack_1c * fVar3);
        }
        iVar5 = *(int *)(param_1 + 4);
        *(undefined4 *)(iVar5 + 0x44) = uStack_24;
        *(float *)(iVar5 + 0x48) = fStack_20;
        *(float *)(iVar5 + 0x4c) = fStack_1c;
        fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x6c) + 0x70))();
        *(float *)(param_1 + 0x7c) = (float)(fVar6 + (float10)gpGlobals->time);
      }
    }
    fVar2 = *(float *)(*(int *)(param_1 + 4) + 0x1f8);
    if (*(float *)(param_1 + 0x7c) <= gpGlobals->time) {
      fVar6 = FUN_10067a10(*(float *)(param_1 + 0x84),fVar2,
                           gpGlobals->frametime * *(float *)(param_1 + 0x8c));
      *(float *)(*(int *)(param_1 + 4) + 0x1f8) = (float)fVar6;
    }
    else {
      fVar6 = FUN_10067a10(0.0,fVar2,gpGlobals->frametime * *(float *)(param_1 + 0x90));
      *(float *)(*(int *)(param_1 + 4) + 0x1f8) = (float)fVar6;
    }
    iVar5 = *(int *)(param_1 + 4);
    fVar3 = gpGlobals->frametime + gpGlobals->frametime;
    fVar4 = 1.0 - fVar3;
    fVar2 = *(float *)(iVar5 + 0x1f8);
    *(float *)(iVar5 + 0x20) =
         fVar2 * *(float *)(iVar5 + 0x44) * fVar3 + fVar4 * *(float *)(iVar5 + 0x20);
    *(float *)(iVar5 + 0x24) =
         fVar2 * *(float *)(iVar5 + 0x48) * fVar3 + fVar4 * *(float *)(iVar5 + 0x24);
    *(float *)(iVar5 + 0x28) =
         fVar2 * *(float *)(iVar5 + 0x4c) * fVar3 + fVar4 * *(float *)(iVar5 + 0x28);
  }
  return;
}

/* 1003d5c0  FUN_1003d5c0  (138 bytes)
 * undefined4 FUN_1003d5c0(float param_1, float param_2, float param_3)
 * called by: CTSAnimation::Animate, FUN_1003ef10, FUN_1003f030, FUN_1005c040, FUN_1005c4e0, FUN_1005d0e0
 */
undefined4 __cdecl FUN_1003d5c0(float param_1,float param_2,float param_3)

{
  float fVar1;
  undefined4 uVar2;
  float in_stack_0000001c;
  float in_stack_00000020;
  
  FUN_10066df0();
  fVar1 = param_1 * gpGlobals->v_right[0] +
          param_2 * gpGlobals->v_right[1] + param_3 * gpGlobals->v_right[2];
  if (fVar1 < -in_stack_0000001c) {
    return 0;
  }
  if (in_stack_0000001c < fVar1) {
    return 1;
  }
  uVar2 = 3;
  if (-in_stack_00000020 <=
      param_1 * gpGlobals->v_forward[0] +
      param_2 * gpGlobals->v_forward[1] + param_3 * gpGlobals->v_forward[2]) {
    uVar2 = 2;
  }
  return uVar2;
}

/* 1003d870  FUN_1003d870  (53 bytes)
 * undefined FUN_1003d870(undefined4 * param_1)
 * called by: CBasePlayer::TSInit
 */
void __fastcall FUN_1003d870(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[4] = 0;
  param_1[0x69] = 0;
  param_1[6] = 1;
  return;
}

/* 1003edc0  FUN_1003edc0  (29 bytes)
 * undefined FUN_1003edc0(float * param_1)
 * called by: CTSAnimation::Animate
 */
void __thiscall FUN_1003edc0(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)((int)this + 8);
  fVar2 = *(float *)((int)this + 4);
  *param_1 = -*(float *)this;
  param_1[1] = -fVar2;
  param_1[2] = -fVar1;
  return;
}

/* 1003ede0  FUN_1003ede0  (23 bytes)
 * undefined FUN_1003ede0(int param_1)
 * called by: CBasePlayer::TakeDamage
 */
void __fastcall FUN_1003ede0(int param_1)

{
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  return;
}

/* 1003ee00  FUN_1003ee00  (76 bytes)
 * undefined FUN_1003ee00(int param_1)
 * called by: CBasePlayer::TakeDamage
 */
void __thiscall FUN_1003ee00(void *this,int param_1)

{
  float10 fVar1;
  
  *(undefined4 *)((int)this + 0x1a4) = 1;
  fVar1 = (float10)FUN_100551c0(param_1);
  *(float *)((int)this + 0x19c) = (float)(fVar1 * (float10)0.15 + (float10)gpGlobals->time);
  fVar1 = (float10)FUN_100551c0(param_1);
  *(float *)((int)this + 0x1a0) = (float)(fVar1 * (float10)3.0 + (float10)gpGlobals->time);
  return;
}

/* 1003ee50  FUN_1003ee50  (187 bytes)
 * undefined FUN_1003ee50(void * param_1)
 * called by: CBasePlayer::TraceAttack
 */
void __thiscall FUN_1003ee50(void *this,void *param_1)

{
  int iVar1;
  float10 fVar2;
  
  if ((((*(int *)((int)this + 0x1a4) != 0) && (gpGlobals->time <= *(float *)((int)this + 0x1a0))) &&
      (*(float *)((int)this + 0x19c) <= gpGlobals->time)) && (*(int *)((int)param_1 + 0x68) == 0)) {
    fVar2 = (float10)FUN_100551c0((int)param_1);
    *(float *)((int)this + 0x19c) = (float)(fVar2 * (float10)0.15 + (float10)gpGlobals->time);
    iVar1 = (*g_engfuncs.pfnRandomLong)(0,2);
    if (iVar1 == 0) {
      CTSAnimation::SetAnim(param_1,(byte_conflict *)s_normal_die1_10097dd0,0x14,0);
    }
    else {
      if (iVar1 == 1) {
        CTSAnimation::SetAnim(param_1,(byte_conflict *)s_normal_die2_10097ddc,0x14,0);
        return;
      }
      if (iVar1 == 2) {
        CTSAnimation::SetAnim(param_1,(byte_conflict *)s_normal_die3_10097de8,0x14,0);
        return;
      }
    }
  }
  return;
}

/* 1003ef10  FUN_1003ef10  (273 bytes)
 * undefined FUN_1003ef10(void * param_1)
 * called by: CTSAnimation::Animate
 */
void __thiscall FUN_1003ef10(void *this,void *param_1)

{
  byte_conflict bVar1;
  char cVar2;
  byte bVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte_conflict *pbVar13;
  byte_conflict *pbVar14;
  bool bVar15;
  float in_stack_ffffff8c;
  float fVar16;
  undefined4 uStack_68;
  byte_conflict local_40 [64];
  
  if (*(char *)((int)param_1 + 0x498) != '\0') {
    puVar4 = (undefined4 *)(*(int *)((int)param_1 + 4) + 0x74);
    fVar16 = 2.6019524e-29;
    FUN_1000a540(&uStack_68,puVar4);
    FUN_1000a540(&stack0xffffff8c,(undefined4 *)((int)param_1 + 0x48c));
    iVar5 = FUN_1003d5c0(in_stack_ffffff8c,fVar16,(float)puVar4);
    if ((iVar5 != *(int *)((int)this + 0x14)) && (iVar5 != 2)) {
      pcVar6 = (char *)(iVar5 * 0x10 + 0x9c + (int)this);
      iVar8 = -(int)pcVar6;
      do {
        cVar2 = *pcVar6;
        pcVar6[(int)(local_40 + iVar8)] = cVar2;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      pbVar12 = (byte *)((int)param_1 + 0xab0);
      pbVar11 = &DAT_1009f428;
      pbVar7 = pbVar12;
      do {
        bVar3 = *pbVar7;
        bVar15 = bVar3 < *pbVar11;
        if (bVar3 != *pbVar11) {
LAB_1003efc2:
          iVar8 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
          goto LAB_1003efc7;
        }
        if (bVar3 == 0) break;
        bVar3 = pbVar7[1];
        bVar15 = bVar3 < pbVar11[1];
        if (bVar3 != pbVar11[1]) goto LAB_1003efc2;
        pbVar7 = pbVar7 + 2;
        pbVar11 = pbVar11 + 2;
      } while (bVar3 != 0);
      iVar8 = 0;
LAB_1003efc7:
      if (iVar8 == 0) {
        pbVar12 = &DAT_1008f320;
      }
      uVar9 = 0xffffffff;
      do {
        pbVar7 = pbVar12;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pbVar7 = pbVar12 + 1;
        bVar3 = *pbVar12;
        pbVar12 = pbVar7;
      } while (bVar3 != 0);
      uVar9 = ~uVar9;
      iVar8 = -1;
      pbVar13 = local_40;
      do {
        pbVar14 = pbVar13;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pbVar14 = pbVar13 + 1;
        bVar1 = *pbVar13;
        pbVar13 = pbVar14;
      } while (bVar1 != '\0');
      pbVar12 = pbVar7 + -uVar9;
      pbVar7 = pbVar14 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pbVar7 = *(undefined4 *)pbVar12;
        pbVar12 = pbVar12 + 4;
        pbVar7 = pbVar7 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pbVar7 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        pbVar7 = pbVar7 + 1;
      }
      uStack_68 = 0x1003f014;
      CTSAnimation::SetAnim(param_1,local_40,0x194,0);
      *(int *)((int)this + 0x14) = iVar5;
    }
  }
  return;
}

/* 1003f030  FUN_1003f030  (239 bytes)
 * undefined FUN_1003f030(void * param_1)
 * called by: CTSAnimation::Animate
 */
void __thiscall FUN_1003f030(void *this,void *param_1)

{
  byte_conflict bVar1;
  byte bVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  byte_conflict *pbVar11;
  byte_conflict *pbVar12;
  bool bVar13;
  int in_stack_00000020;
  byte *in_stack_0000002c;
  float in_stack_ffffff90;
  float fVar14;
  undefined4 *puVar15;
  undefined4 uStack_64;
  byte_conflict local_40 [64];
  
  pbVar10 = &DAT_1009f428;
  pbVar4 = in_stack_0000002c;
  do {
    bVar2 = *pbVar4;
    bVar13 = bVar2 < *pbVar10;
    if (bVar2 != *pbVar10) {
LAB_1003f06c:
      iVar5 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
      goto LAB_1003f071;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar4[1];
    bVar13 = bVar2 < pbVar10[1];
    if (bVar2 != pbVar10[1]) goto LAB_1003f06c;
    pbVar4 = pbVar4 + 2;
    pbVar10 = pbVar10 + 2;
  } while (bVar2 != 0);
  iVar5 = 0;
LAB_1003f071:
  if (iVar5 != 0) {
    puVar15 = (undefined4 *)&stack0x00000014;
    fVar14 = 2.6020523e-29;
    FUN_1000a540(&uStack_64,puVar15);
    FUN_1000a540(&stack0xffffff90,(undefined4 *)&stack0x00000008);
    iVar5 = FUN_1003d5c0(in_stack_ffffff90,fVar14,(float)puVar15);
    if (iVar5 != *(int *)((int)this + 0x14)) {
      pcVar6 = (char *)(iVar5 * 0x10 + in_stack_00000020);
      iVar8 = -(int)pcVar6;
      do {
        cVar3 = *pcVar6;
        pcVar6[(int)(local_40 + iVar8)] = cVar3;
        pcVar6 = pcVar6 + 1;
      } while (cVar3 != '\0');
      uVar7 = 0xffffffff;
      do {
        pbVar4 = in_stack_0000002c;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pbVar4 = in_stack_0000002c + 1;
        bVar2 = *in_stack_0000002c;
        in_stack_0000002c = pbVar4;
      } while (bVar2 != 0);
      uVar7 = ~uVar7;
      iVar8 = -1;
      pbVar11 = local_40;
      do {
        pbVar12 = pbVar11;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pbVar12 = pbVar11 + 1;
        bVar1 = *pbVar11;
        pbVar11 = pbVar12;
      } while (bVar1 != '\0');
      pbVar4 = pbVar4 + -uVar7;
      pbVar10 = pbVar12 + -1;
      for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pbVar10 = *(undefined4 *)pbVar4;
        pbVar4 = pbVar4 + 4;
        pbVar10 = pbVar10 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pbVar10 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        pbVar10 = pbVar10 + 1;
      }
      uStack_64 = 0x1003f112;
      CTSAnimation::SetAnim(param_1,local_40,0x194,0);
      *(int *)((int)this + 0x14) = iVar5;
    }
  }
  return;
}

/* 1003f650  FUN_1003f650  (40 bytes)
 * undefined4 FUN_1003f650(int param_1)
 * called by: CTSAnimation::Animate
 */
undefined4 FUN_1003f650(int param_1)

{
  if (param_1 == 0x39) {
    return 1;
  }
  if ((9 < param_1) && (param_1 < 0x23)) {
    return 1;
  }
  return 0;
}

/* 1003f680  FUN_1003f680  (173 bytes)
 * undefined4 FUN_1003f680(int param_1, int param_2)
 * called by: CTSAnimation::Animate, CTSAnimation::HandleCloseCombat
 */
undefined4 FUN_1003f680(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0x21) {
    if (((*(uint *)(*(int *)(param_2 + 4) + 0x1a4) & 0x4000) != 0) ||
       ((*(byte *)(*(int *)(param_2 + 4) + 0x180) & 4) != 0)) {
      return 0;
    }
  }
  else {
    if (param_1 == 0x20) {
      return 0;
    }
    if (param_1 == 0x1f) {
      return 0;
    }
    if (param_1 == 0x39) {
      return 0;
    }
    if ((((param_1 < 0x16) || (0x17 < param_1)) && ((param_1 < 0x1d || (0x21 < param_1)))) &&
       (param_1 != 0x22)) {
      if (param_1 < 0x19) {
        return 0;
      }
      if (0x1c < param_1) {
        return 0;
      }
    }
  }
  iVar1 = *(int *)(param_2 + 4);
  if (((*(uint *)(iVar1 + 0x1a4) & 0x4000) == 0) &&
     (SQRT(*(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
           *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20)) <= 80.0)) {
    return 0;
  }
  return 1;
}

/* 1003f730  FUN_1003f730  (12 bytes)
 * undefined4 * FUN_1003f730(undefined4 * param_1)
 * called by: FUN_10042be0
 */
undefined4 * __fastcall FUN_1003f730(undefined4 *param_1)

{
  FUN_1003f750(param_1);
  return param_1;
}

/* 1003f750  FUN_1003f750  (28 bytes)
 * undefined FUN_1003f750(undefined4 * param_1)
 * called by: FUN_1003f730, FUN_10042bc0, FUN_10044810
 */
void __fastcall FUN_1003f750(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x1000] = 0;
  param_1[0x1001] = 0;
  return;
}

/* 1003f770  FUN_1003f770  (100 bytes)
 * undefined FUN_1003f770(void * param_1)
 * called by: GameDLLInit
 */
void __fastcall FUN_1003f770(void *param_1)

{
  float *pfVar1;
  int iVar2;
  undefined1 local_38 [56];
  
  *(undefined4 *)((int)param_1 + 0x4000) = 0;
  iVar2 = 0;
  pfVar1 = (float *)((int)param_1 + 0x38);
  do {
    if (pfVar1[-0xe] != 0.0) {
      if (*pfVar1 < gpGlobals->time) {
        FUN_1003f910(param_1,iVar2,(float)local_38);
        *pfVar1 = gpGlobals->time + 0.1;
      }
      *(int *)((int)param_1 + 0x4000) = *(int *)((int)param_1 + 0x4000) + 1;
    }
    iVar2 = iVar2 + 1;
    pfVar1 = pfVar1 + 0x10;
  } while (iVar2 < 0x100);
  return;
}

/* 1003f8f0  FUN_1003f8f0  (25 bytes)
 * undefined FUN_1003f8f0(int param_1)
 * called by: FUN_1003f910
 */
void __thiscall FUN_1003f8f0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 * 0x40 + (int)this);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

/* 1003f910  FUN_1003f910  (1050 bytes)
 * undefined FUN_1003f910(int param_1, float param_2)
 * called by: FUN_1003f770
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1003f910(void *this,int param_1,float param_2)

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 *puVar8;
  int iVar9;
  edict_t *peVar10;
  int iVar11;
  void *unaff_EBX;
  float *unaff_EBP;
  float10 fVar12;
  longlong lVar13;
  float fStack0000000c;
  float *pfStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  float fStack_2c;
  int *local_28;
  int iStack_24;
  int iStack_20;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  piVar3 = (int *)(param_1 * 0x40 + (int)this);
  fStack_48 = 2.602718e-29;
  puVar8 = FUN_100491c0(piVar3[0xb]);
  iVar11 = *piVar3;
  if (*(float *)(iVar11 + 0x168) == 0.0) {
    iVar9 = *(int *)(*(int *)(iVar11 + 4) + 0x254);
  }
  else {
    iVar9 = *(int *)(iVar11 + 0x168);
  }
  piVar3[0xd] = iVar9;
  if ((float)piVar3[0xd] == 0.0) {
    local_10 = 1.0;
  }
  else {
    local_10 = (float)piVar3[0xd];
  }
  if (*(char *)(iVar11 + 0x15d) != '\0') {
    local_10 = local_10 * 0.2;
  }
  fVar6 = (float)(int)puVar8[9];
  pfVar1 = (float *)(piVar3 + 7);
  pfVar2 = (float *)(piVar3 + 1);
  pfStack_50 = &local_c;
  fVar4 = fVar6 * *pfVar1 * 4.0 * local_10;
  fStack_48 = *(float *)(*(int *)(iVar11 + 4) + 0x208);
  fVar5 = fVar6 * (float)piVar3[8] * 4.0 * local_10;
  uStack_4c = 0;
  local_10 = fVar6 * (float)piVar3[9] * 4.0 * local_10;
  local_c = fVar4 + *pfVar2;
  local_8 = fVar5 + (float)piVar3[2];
  local_4 = local_10 + (float)piVar3[3];
  FUN_10067850();
  if (*(float *)((int)param_2 + 0x10) == 1.0) {
    *pfVar2 = fVar4 + *pfVar2;
    piVar3[2] = (int)(fVar5 + (float)piVar3[2]);
    piVar3[3] = (int)(local_10 + (float)piVar3[3]);
    return;
  }
  *pfVar2 = *(float *)((int)param_2 + 0x14);
  piVar3[2] = *(int *)((int)param_2 + 0x18);
  piVar3[3] = *(int *)((int)param_2 + 0x1c);
  peVar10 = *(edict_t **)((int)param_2 + 0x30);
  if (peVar10 == (edict_t *)0x0) {
    fStack_48 = 2.602809e-29;
    peVar10 = (*g_engfuncs.pfnPEntityOfEntOffset)(0);
    if (peVar10 == (edict_t *)0x0) {
      local_28 = (int *)0x0;
      goto LAB_1003fa7c;
    }
  }
  local_28 = peVar10->pvPrivateData;
LAB_1003fa7c:
  if (piVar3[0xf] == 2) {
    lVar13 = __ftol();
    fVar12 = FUN_10049270((int)lVar13);
    fStack0000000c = (float)(fVar12 * (float10)(float)piVar3[10]);
  }
  else {
    lVar13 = __ftol();
    fVar12 = FUN_10049270((int)lVar13);
    fStack0000000c =
         (float)((float10)*(int *)(iStack_24 + 0x1c) * (float10)(float)piVar3[10] * fVar12);
    if ((0.0 < DAT_10093be4) && (_DAT_102e0100 != 0.0)) {
      fStack_2c = DAT_10093be4;
    }
    fStack_48 = 2.6028757e-29;
    (*g_engfuncs.pfnRandomFloat)(0.0,0.05);
  }
  iStack_20 = 0x1002;
  if (piVar3[0xf] == 1) {
    iStack_20 = 0x2001002;
  }
  DAT_100ac81c = piVar3[0xc];
  FUN_1006a2f0();
  iVar11 = *local_28;
  FUN_1000a540(&pfStack_50,pfVar1);
  (**(code **)(iVar11 + 0x34))(*(undefined4 *)(*piVar3 + 4),fStack0000000c * fStack_2c);
  FUN_1006a310(*(undefined4 *)(*piVar3 + 4),*(undefined4 *)(*piVar3 + 4));
  DAT_100ac81c = 0;
  local_10 = local_10 * *(float *)(iStack_20 + 0x18);
  iVar11 = (**(code **)(*local_28 + 0xa8))();
  if (iVar11 != 0) {
    local_10 = local_10 * 0.5;
  }
  if (((piVar3[0xf] != 2) && (piVar3[0xf] != 1)) && (5.0 < local_10)) {
    fVar4 = local_10;
    if (48.0 <= local_10) {
      fVar4 = 48.0;
    }
    fVar6 = fVar4 * *pfVar1 + *unaff_EBP;
    fVar7 = fVar4 * (float)piVar3[8] + unaff_EBP[1];
    fVar4 = fVar4 * (float)piVar3[9] + unaff_EBP[2];
    iVar11 = FUN_10067c90();
    if (iVar11 != -2) {
      piVar3[4] = (int)fVar6;
      *pfVar2 = fVar6;
      piVar3[5] = (int)fVar7;
      piVar3[10] = (int)(local_10 * fStack_48);
      piVar3[2] = (int)fVar7;
      piVar3[6] = (int)fVar4;
      piVar3[0xf] = 2;
      piVar3[3] = (int)fVar4;
      return;
    }
  }
  FUN_1003f8f0(unaff_EBX,(int)fVar5);
  return;
}

/* 10040680  FUN_10040680  (1 bytes)
 * undefined FUN_10040680()
 */
void FUN_10040680(void)

{
  return;
}

/* 10040690  FUN_10040690  (1 bytes)
 * undefined FUN_10040690()
 */
void FUN_10040690(void)

{
  return;
}

/* 100406a0  FUN_100406a0  (1 bytes)
 * undefined FUN_100406a0()
 */
void FUN_100406a0(void)

{
  return;
}

/* 100406b0  FUN_100406b0  (1 bytes)
 * undefined FUN_100406b0()
 */
void FUN_100406b0(void)

{
  return;
}

/* 100406c0  FUN_100406c0  (1 bytes)
 * undefined FUN_100406c0()
 */
void FUN_100406c0(void)

{
  return;
}

/* 100406d0  FUN_100406d0  (1 bytes)
 * undefined FUN_100406d0()
 */
void FUN_100406d0(void)

{
  return;
}

/* 100406f0  FUN_100406f0  (416 bytes)
 * undefined FUN_100406f0(int param_1, float param_2)
 * called by: CBasePlayer::PlayerDeathThink
 */
void __cdecl FUN_100406f0(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 4);
  if (-1 < *(char *)(iVar4 + 0x118)) {
    iVar3 = CBaseEntity::Create(0x10097fe4,(undefined4 *)(iVar4 + 8),(undefined4 *)(iVar4 + 0x50),0)
    ;
    fVar1 = gpGlobals->time;
    iVar4 = *(int *)(iVar3 + 4);
    *(float *)(iVar3 + 0x58) = param_2;
    *(float *)(iVar3 + 0x54) = param_2 + fVar1;
    iVar2 = *(int *)(param_1 + 4);
    *(undefined4 *)(iVar4 + 0x50) = *(undefined4 *)(iVar2 + 0x50);
    *(undefined4 *)(iVar4 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
    *(undefined4 *)(iVar4 + 0x58) = *(undefined4 *)(iVar2 + 0x58);
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0xb8) = *(undefined4 *)(*(int *)(param_1 + 4) + 0xb8);
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0xb4) = *(undefined4 *)(*(int *)(param_1 + 4) + 0xb4);
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0x130) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x130);
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0x1a8) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1a8);
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0x108) = 6;
    iVar4 = *(int *)(param_1 + 4);
    iVar2 = *(int *)(iVar3 + 4);
    *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar4 + 0x20);
    *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar4 + 0x24);
    *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(iVar4 + 0x28);
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0x1a4) = 0;
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0x170) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x170);
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0x148) = 1;
    iVar4 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)(param_1 + 4) + 0x208));
    *(float *)(*(int *)(iVar3 + 4) + 0x150) = (float)iVar4;
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0x15c) = 0x11;
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0x14c) = 0x437f0000;
    *(uint *)(*(int *)(iVar3 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x20;
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0x128) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x128);
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0x134) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x134);
    FUN_100679a0();
    FUN_10067970();
  }
  return;
}

/* 100408c0  FUN_100408c0  (181 bytes)
 * undefined FUN_100408c0()
 */
void __fastcall FUN_100408c0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 0.5;
  if (*(float *)(param_1 + 0x54) < gpGlobals->time) {
    UTIL_Remove(param_1);
    return;
  }
  fVar1 = *(float *)(param_1 + 0x58) * 0.6666667;
  fVar2 = fVar1;
  if (fVar1 <= 1.0) {
    fVar2 = 1.0;
  }
  fVar3 = *(float *)(param_1 + 0x54) - gpGlobals->time;
  if (255.0 <= (fVar3 / fVar2) * 255.0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x14c) = 0x437f0000;
    return;
  }
  if (fVar1 <= 1.0) {
    fVar1 = 1.0;
  }
  *(float *)(*(int *)(param_1 + 4) + 0x14c) = (fVar3 / fVar1) * 255.0;
  return;
}

/* 10041030  FUN_10041030  (101 bytes)
 * undefined FUN_10041030(int param_1)
 * called by: CTSSlowMotion::ActivateSlow, CTSSlowMotion::WaitThink
 */
void __fastcall FUN_10041030(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0xf0) != 0) {
    FUN_100455f0(&DAT_100ac8c0,0.0,'\0');
    puVar2 = (undefined4 *)(param_1 + 0x60);
    for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    return;
  }
  puVar2 = (undefined4 *)(param_1 + 0x60);
  iVar1 = 0x21;
  do {
    if ((void *)*puVar2 != (void *)0x0) {
      FUN_10055220((void *)*puVar2,0.0,0);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puVar2 = (undefined4 *)(param_1 + 0x60);
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

/* 100410a0  FUN_100410a0  (137 bytes)
 * undefined FUN_100410a0(int * param_1)
 * called by: CTSSlowMotion::WaitThink
 */
void __fastcall FUN_100410a0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int *piVar7;
  undefined1 local_c [12];
  
  iVar6 = 0x21;
  piVar7 = param_1 + 0x18;
  do {
    if (*piVar7 != 0) {
      iVar4 = FUN_100551e0(*piVar7);
      if (iVar4 != 0) {
        pfVar5 = (float *)(**(code **)(*param_1 + 0xd4))(local_c);
        iVar4 = *(int *)(*piVar7 + 4);
        fVar1 = *(float *)(iVar4 + 8) - *pfVar5;
        fVar2 = *(float *)(iVar4 + 0xc) - pfVar5[1];
        fVar3 = *(float *)(iVar4 + 0x10) - pfVar5[2];
        if ((float)param_1[0x39] < SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3)) {
          FUN_10055220((void *)*piVar7,0.0,0);
          *piVar7 = 0;
        }
      }
    }
    piVar7 = piVar7 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}

/* 10041420  FUN_10041420  (53 bytes)
 * undefined FUN_10041420(int param_1)
 * called by: CTSSlowMotionPoint::WaitThink
 */
void __fastcall FUN_10041420(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0x21;
  puVar2 = (undefined4 *)(param_1 + 0x54);
  do {
    if ((void *)*puVar2 != (void *)0x0) {
      FUN_10055220((void *)*puVar2,0.0,0);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puVar2 = (undefined4 *)(param_1 + 0x54);
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

/* 10042190  FUN_10042190  (23 bytes)
 * uint FUN_10042190(int param_1)
 * called by: GameDLLInit
 */
uint __fastcall FUN_10042190(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_10043620();
  return *(uint *)(*(int *)(param_1 + 4) + 0x1a0) ^ uVar1;
}

/* 10042b90  FUN_10042b90  (10 bytes)
 * undefined FUN_10042b90()
 */
void FUN_10042b90(void)

{
  FUN_10042ba0();
  FUN_10042bb0();
  return;
}

/* 10042ba0  FUN_10042ba0  (10 bytes)
 * undefined FUN_10042ba0(void)
 * called by: FUN_10042b90
 */
void FUN_10042ba0(void)

{
  FUN_10042be0(0x100ac8c0);
  return;
}

/* 10042bb0  FUN_10042bb0  (12 bytes)
 * undefined FUN_10042bb0(void)
 * called by: FUN_10042b90
 */
void FUN_10042bb0(void)

{
  FUN_1006ee3b(FUN_10042bc0);
  return;
}

/* 10042bc0  FUN_10042bc0  (26 bytes)
 * undefined FUN_10042bc0()
 */
void FUN_10042bc0(void)

{
  FUN_1003f750((undefined4 *)&DAT_100add74);
  return;
}

/* 10042be0  FUN_10042be0  (18 bytes)
 * int FUN_10042be0(int param_1)
 * called by: FUN_10042ba0
 */
int __fastcall FUN_10042be0(int param_1)

{
  FUN_1003f730((undefined4 *)(param_1 + 0x14b4));
  return param_1;
}

/* 10042c10  FUN_10042c10  (14 bytes)
 * uint FUN_10042c10(int param_1)
 * called by: CTSGun::AlternateAttack, FUN_1004b050, FUN_1004b400, FUN_1004b8c0, FUN_1004c090, FUN_1004c6c0
 */
uint __cdecl FUN_10042c10(int param_1)

{
  return *(uint *)(param_1 + 0x69c) & 8;
}

/* 10042c20  FUN_10042c20  (14 bytes)
 * uint FUN_10042c20(int param_1)
 * called by: FUN_1004b050, FUN_1004b400, FUN_1004b8c0, FUN_1004c6c0
 */
uint __cdecl FUN_10042c20(int param_1)

{
  return *(uint *)(param_1 + 0x69c) & 2;
}

/* 10042c30  FUN_10042c30  (13 bytes)
 * undefined1 FUN_10042c30(int param_1)
 * called by: FUN_1004de10, FUN_1005cd00, FUN_1005d0e0
 */
undefined1 __cdecl FUN_10042c30(int param_1)

{
  return *(undefined1 *)(param_1 + 0x6c6);
}

/* 10042c40  FUN_10042c40  (14 bytes)
 * uint FUN_10042c40(int param_1)
 * called by: CTSGun::PrimaryAttack, CTSGun::SecondaryAttack, FUN_10049a50, FUN_1004b050, FUN_1004b400, FUN_1004b8c0, FUN_1004c090, FUN_1004c6c0
 */
uint __cdecl FUN_10042c40(int param_1)

{
  return *(uint *)(param_1 + 0x69c) & 0x10;
}

/* 10042c50  FUN_10042c50  (56 bytes)
 * undefined FUN_10042c50(int param_1, int param_2)
 * called by: FUN_10042d00, pfnClientCommand
 */
void __cdecl FUN_10042c50(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4b8) + param_2;
  *(int *)(param_1 + 0x4b8) = iVar1;
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0x4b8) = 0;
  }
  if (30000 < *(int *)(param_1 + 0x4b8)) {
    *(undefined4 *)(param_1 + 0x4b8) = 30000;
  }
  return;
}

/* 10042c90  FUN_10042c90  (100 bytes)
 * undefined FUN_10042c90(int param_1)
 * called by: CBasePlayer::Killed, CBasePlayer::StartObserver, CBasePlayer::TSInit, FUN_10038cb0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10042c90(int param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  if ((DAT_100ac8c0 == '\x02') || (DAT_100ac8c0 == '\x03')) {
    iVar2 = *(int *)(param_1 + 0x4b8);
    iVar1 = FUN_100458b0(&DAT_100ac8c0,param_1);
    if (iVar2 < iVar1) {
      iVar2 = FUN_100458b0(&DAT_100ac8c0,param_1);
    }
    *(int *)(param_1 + 0x4b8) = iVar2;
  }
  if ((float)*(int *)(param_1 + 0x4b8) < _DAT_10093b80) {
    lVar3 = __ftol();
    *(int *)(param_1 + 0x4b8) = (int)lVar3;
  }
  return;
}

/* 10042d00  FUN_10042d00  (68 bytes)
 * undefined FUN_10042d00(int param_1, int param_2, char param_3)
 * called by: CHalfLifeMultiplay::PlayerKilled
 */
void __cdecl FUN_10042d00(int param_1,int param_2,char param_3)

{
  if (((DAT_100ac8c0 != '\0') && (DAT_100ac8c0 != '\x01')) || (DAT_100aca60 != 0)) {
    if (param_3 != '\0') {
      FUN_10042c50(param_1,param_2);
      return;
    }
    FUN_10042c50(param_1,param_2);
  }
  return;
}

/* 10042d50  FUN_10042d50  (500 bytes)
 * undefined FUN_10042d50(int param_1, int param_2, char param_3)
 * called by: CBasePlayer::Killed, FUN_10038cb0, FUN_100451c0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10042d50(int param_1,int param_2,char param_3)

{
  float fVar1;
  
  if (DAT_100ac8c0 == '\x03') {
    if (DAT_100b1d8c == '\0') {
      fVar1 = (float)param_2 + gpGlobals->time;
LAB_10042f19:
      *(float *)(param_1 + 0x6e8) = fVar1;
      goto LAB_10042f1f;
    }
    if ((DAT_100b1d8c <= *(char *)(param_1 + 0x732)) || (param_3 != '\0')) goto LAB_10042ddb;
LAB_10042d7c:
    fVar1 = _DAT_100ac8c8 - gpGlobals->time;
    if ((float)param_2 <= fVar1) {
      fVar1 = (float)param_2;
    }
    *(float *)(param_1 + 0x6e8) = fVar1 + gpGlobals->time;
    fVar1 = _DAT_100ac8c8 - gpGlobals->time;
    if (25.0 <= fVar1) {
      fVar1 = 25.0;
    }
LAB_10042dce:
    *(float *)(param_1 + 0x734) = fVar1 + gpGlobals->time;
  }
  else {
    if (DAT_100ac8c0 == '\x02') {
      fVar1 = _DAT_10093d24;
      if (_DAT_10093d24 <= 1.0) {
        fVar1 = 1.0;
      }
      if (((float)(int)*(char *)(param_1 + 0x732) < fVar1) && (param_3 == '\0')) {
        fVar1 = _DAT_100ac8c8 - gpGlobals->time;
        if ((float)param_2 <= fVar1) {
          fVar1 = (float)param_2;
        }
        *(float *)(param_1 + 0x6e8) = fVar1 + gpGlobals->time;
        fVar1 = _DAT_100ac8c8 - gpGlobals->time;
        if (25.0 <= fVar1) {
          *(float *)(param_1 + 0x734) = gpGlobals->time + 25.0;
          goto LAB_10042f1f;
        }
        goto LAB_10042dce;
      }
    }
    else {
      if ((_DAT_10093ce8 == 0.0) || (DAT_100ac8c0 != '\0')) {
        fVar1 = (float)param_2 + gpGlobals->time;
        goto LAB_10042f19;
      }
      fVar1 = _DAT_10093d24;
      if (_DAT_10093d24 <= 1.0) {
        fVar1 = 1.0;
      }
      if ((float)(int)*(char *)(param_1 + 0x732) < fVar1) goto LAB_10042d7c;
    }
LAB_10042ddb:
    *(undefined4 *)(param_1 + 0x6e8) = 0xbf800000;
  }
LAB_10042f1f:
  if (*(float *)(param_1 + 0x6e8) < 0.0) {
    *(undefined1 *)(param_1 + 0x6c4) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 0x6c4) = 0xb;
  return;
}

/* 10042f50  FUN_10042f50  (184 bytes)
 * undefined FUN_10042f50(int * param_1)
 * called by: CBasePlayer::Restore, FUN_1001e9e0
 */
void __cdecl FUN_10042f50(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  byte_conflict *pbVar4;
  uint uVar5;
  void *this;
  char acStack_40 [64];
  
  iVar2 = (**(code **)(*DAT_1009f494 + 0x20))();
  if ((iVar2 == 0) || (DAT_100ac8c0 == '\x01')) {
    iVar2 = 0;
    do {
      cVar1 = s_info_player_deathmatch_1009712c[iVar2];
      acStack_40[iVar2] = cVar1;
      iVar2 = iVar2 + 1;
    } while (cVar1 != '\0');
    FUN_10043010(acStack_40,param_1);
    return;
  }
  pcVar3 = s_Mercenary_1009747c;
  if (DAT_100acb90 == 0) {
    pcVar3 = s_Specialists_10097488;
  }
  pbVar4 = (byte_conflict *)(**(code **)(*param_1 + 0xb0))();
  uVar5 = FUN_1007e860(this,pbVar4,(byte_conflict *)pcVar3);
  iVar2 = 0;
  if (uVar5 == 0) {
    do {
      cVar1 = s_info_player_start_1009821c[iVar2];
      acStack_40[iVar2] = cVar1;
      iVar2 = iVar2 + 1;
    } while (cVar1 != '\0');
    FUN_10043010(acStack_40,param_1);
    return;
  }
  iVar2 = 0;
  do {
    cVar1 = s_info_player_deathmatch_1009712c[iVar2];
    acStack_40[iVar2] = cVar1;
    iVar2 = iVar2 + 1;
  } while (cVar1 != '\0');
  FUN_10043010(acStack_40,param_1);
  return;
}

/* 10043010  FUN_10043010  (919 bytes)
 * undefined4 FUN_10043010(undefined4 param_1, int * param_2)
 * called by: FUN_10042f50
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10043010(undefined4 param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  edict_t *peVar9;
  int iVar10;
  int iVar11;
  entvars_t *peVar12;
  longlong lVar13;
  int local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  int local_138 [32];
  undefined1 auStack_b8 [16];
  float fStack_a8;
  int local_80 [32];
  
  piVar6 = local_80;
  for (iVar10 = 0x20; iVar10 != 0; iVar10 = iVar10 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  piVar6 = local_138;
  for (iVar10 = 0x20; iVar10 != 0; iVar10 = iVar10 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  local_148 = 0;
  iVar10 = UTIL_FindEntityByClassname(0,param_1);
  if (iVar10 != 0) {
    do {
      bVar4 = true;
      bVar5 = false;
      iVar11 = 0x1000;
      for (piVar6 = (int *)UTIL_FindEntityByClassname(0,s_player_100915d0); piVar6 != (int *)0x0;
          piVar6 = (int *)UTIL_FindEntityByClassname((int)piVar6,s_player_100915d0)) {
        if ((((piVar6 != param_2) && (iVar7 = (**(code **)(*piVar6 + 0xa8))(), iVar7 != 0)) &&
            (iVar7 = (**(code **)(*piVar6 + 0x94))(), iVar7 != 0)) &&
           (iVar7 = piVar6[1], -1 < *(char *)(iVar7 + 0x118))) {
          if (bVar4) {
            fStack_13c = *(float *)(iVar7 + 0x17c) + *(float *)(iVar7 + 0x10);
            fStack_140 = *(float *)(iVar7 + 0x178) + *(float *)(iVar7 + 0xc);
            fStack_144 = *(float *)(iVar7 + 0x174) + *(float *)(iVar7 + 8);
            FUN_10067810(*(int *)(iVar10 + 4) + 8,&fStack_144,1,1,
                         *(undefined4 *)(*(int *)(iVar10 + 4) + 0x208),auStack_b8);
            if (fStack_a8 == 1.0) {
              iVar7 = (**(code **)(*DAT_1009f494 + 200))(param_2,piVar6);
              if (iVar7 == 1) {
                iVar7 = *(int *)(iVar10 + 4);
                iVar8 = piVar6[1];
                fVar1 = *(float *)(iVar7 + 8) - *(float *)(iVar8 + 8);
                fVar3 = *(float *)(iVar7 + 0xc) - *(float *)(iVar8 + 0xc);
                fVar2 = *(float *)(iVar7 + 0x10) - *(float *)(iVar8 + 0x10);
                if (128.0 <= SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2)) {
                  bVar5 = true;
                }
                else {
                  bVar4 = false;
                }
              }
              else {
                bVar4 = false;
              }
            }
          }
          lVar13 = __ftol();
          if ((int)lVar13 < iVar11) {
            iVar11 = (int)lVar13;
          }
        }
      }
      local_80[local_148] = iVar10;
      iVar7 = local_148 + 1;
      if (bVar5) {
        if (bVar4) {
          iVar11 = (*g_engfuncs.pfnRandomLong)(0x1801,0x2000);
          local_138[local_148] = iVar11;
        }
        else {
LAB_10043239:
          local_138[local_148] = iVar11;
        }
      }
      else {
        if (!bVar4) goto LAB_10043239;
        iVar11 = (*g_engfuncs.pfnRandomLong)(0x1001,0x1800);
        local_138[local_148] = iVar11;
      }
    } while ((iVar7 < 0x20) &&
            (iVar10 = UTIL_FindEntityByClassname(iVar10,param_1), local_148 = iVar7, iVar10 != 0));
    if (0 < iVar7) {
      iVar10 = 0;
      iVar8 = 0;
      iVar11 = 0;
      if (0 < iVar7) {
        do {
          if (iVar10 < local_138[iVar8]) {
            iVar10 = local_138[iVar8];
            iVar11 = iVar8;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar7);
      }
      iVar10 = local_80[iVar11];
      if (local_138[iVar11] < 0x80) {
        for (piVar6 = (int *)FUN_10066c30(0,*(int *)(iVar10 + 4) + 8,0x43000000);
            piVar6 != (int *)0x0;
            piVar6 = (int *)FUN_10066c30((int)piVar6,*(int *)(iVar10 + 4) + 8,0x43000000)) {
          iVar11 = (**(code **)(*piVar6 + 0xa8))();
          if (((iVar11 != 0) && (piVar6 != param_2)) &&
             ((iVar11 = (**(code **)(*piVar6 + 0x94))(), iVar11 != 0 &&
              (-1 < *(char *)(piVar6[1] + 0x118))))) {
            peVar9 = (*g_engfuncs.pfnPEntityOfEntIndex)(0);
            if (peVar9 == (edict_t *)0x0) {
              peVar12 = (entvars_t *)0x0;
            }
            else {
              peVar12 = &peVar9->v;
            }
            peVar9 = (*g_engfuncs.pfnPEntityOfEntIndex)(0);
            if (peVar9 != (edict_t *)0x0) {
              peVar9 = (edict_t *)&peVar9->v;
            }
            (**(code **)(*piVar6 + 0x38))(peVar9,peVar12,0x43960000,0x1000);
          }
        }
      }
      _DAT_100b1d9c = iVar10;
      return *(undefined4 *)(*(int *)(iVar10 + 4) + 0x208);
    }
  }
  iVar10 = UTIL_FindEntityByClassname(0,s_info_player_deathmatch_1009712c);
  if ((iVar10 == 0) &&
     (iVar10 = UTIL_FindEntityByClassname(0,s_info_player_start_1009821c), iVar10 == 0)) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(iVar10 + 4) + 0x208);
}

/* 100433b0  FUN_100433b0  (239 bytes)
 * undefined4 FUN_100433b0(undefined4 param_1, undefined4 param_2)
 * called by: InstallGameRules
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_100433b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  char local_40 [64];
  
  local_40[0] = '\0';
  _strncpy(local_40,gpGlobals->pStringBase + gpGlobals->mapname,3);
  iVar1 = 4;
  bVar4 = true;
  local_40[3] = 0;
  pcVar2 = local_40;
  pcVar3 = &DAT_10098240;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    if (_DAT_102e00fc != 0.0) {
      return 1;
    }
LAB_1004346c:
    if (_DAT_10093a54 != 0.0) {
      return 1;
    }
    return param_2;
  }
  iVar1 = 4;
  bVar4 = true;
  pcVar2 = local_40;
  pcVar3 = &DAT_1009823c;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    return 3;
  }
  iVar1 = 4;
  bVar4 = true;
  pcVar2 = local_40;
  pcVar3 = &DAT_10098238;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (!bVar4) {
    iVar1 = 4;
    bVar4 = true;
    pcVar2 = local_40;
    pcVar3 = &DAT_10098234;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *pcVar2 == *pcVar3;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar4);
    if (!bVar4) {
      iVar1 = 4;
      bVar4 = true;
      pcVar2 = local_40;
      pcVar3 = &DAT_10098230;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar4 = *pcVar2 == *pcVar3;
        pcVar2 = pcVar2 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar4);
      if (!bVar4) goto LAB_1004346c;
    }
  }
  return 2;
}

/* 100435f0  FUN_100435f0  (33 bytes)
 * bool FUN_100435f0(void)
 * called by: FUN_10055a40, FUN_10055c30, FUN_10055e00
 */
bool FUN_100435f0(void)

{
  if ((DAT_100ac8c0 != '\x02') && (DAT_100ac8c0 != '\x03')) {
    return DAT_100aca60 != 0;
  }
  return true;
}

/* 10043620  FUN_10043620  (6 bytes)
 * undefined4 FUN_10043620(void)
 * called by: FUN_10042190, FUN_10043630, FUN_10044810, GameDLLInit
 */
undefined4 FUN_10043620(void)

{
  return 0x1f;
}

/* 10043630  FUN_10043630  (43 bytes)
 * undefined4 FUN_10043630(undefined4 param_1)
 * called by: GameDLLInit
 */
undefined4 __cdecl FUN_10043630(undefined4 param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 1:
    return 0;
  case 2:
    return 1;
  case 3:
    return 3;
  case 4:
    return 0x13;
  default:
    uVar1 = FUN_10043620();
    return uVar1;
  }
}

/* 10043670  FUN_10043670  (100 bytes)
 * ulonglong FUN_10043670(void)
 * called by: CHalfLifeMultiplay::PlayerKilled, TSExplosion
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_10043670(void)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (*g_engfuncs.pfnRandomLong)(0,100);
  uVar2 = __ftol();
  if ((int)uVar2 != 0) {
    return CONCAT44((int)(uVar2 >> 0x20),(uint)(iVar1 <= (int)uVar2));
  }
  return uVar2;
}

/* 100436e0  FUN_100436e0  (62 bytes)
 * float10 FUN_100436e0(int param_1)
 * called by: CBasePlayer::PickUpWeapon, CTSGun::GrenadeIdle, FUN_1004c6c0, FUN_10056080
 */
float10 __cdecl FUN_100436e0(int param_1)

{
  longlong lVar1;
  
  if (0x45 < *(int *)(param_1 + 0x4c0)) {
    return (float10)310.0;
  }
  lVar1 = __ftol();
  return (float10)(int)lVar1;
}

/* 10043720  FUN_10043720  (336 bytes)
 * undefined2 FUN_10043720(int param_1, int * param_2)
 * called by: FUN_1004c090, FUN_1005c680
 */
undefined2 __cdecl FUN_10043720(int param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ushort uVar6;
  float unaff_retaddr;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar4 = (**(code **)(*param_2 + 0xa8))();
  uVar6 = 0;
  if ((iVar4 != 0) &&
     (fVar1 = (float)param_2[0x1cb], fVar2 = gpGlobals->time,
     uVar6 = (ushort)(fVar1 < fVar2) << 8 | (ushort)(fVar1 == fVar2) << 0xe,
     fVar1 >= fVar2 && (fVar1 == fVar2) == 0)) {
    iVar4 = param_2[1];
    iVar3 = *(int *)(param_1 + 4);
    fStack_18 = (*(float *)(iVar4 + 8) + *(float *)(iVar3 + 8)) * 0.5;
    fStack_14 = (*(float *)(iVar4 + 0xc) + *(float *)(iVar3 + 0xc)) * 0.5;
    fStack_4 = (*(float *)(iVar4 + 0x10) + *(float *)(iVar3 + 0x10)) * 0.5;
    fStack_10 = fStack_4 + 20.0;
    fStack_c = fStack_18;
    fStack_8 = fStack_14;
    (*g_engfuncs.pfnMessageBegin)(4,DAT_100cbc84,&fStack_18,(edict_t *)0x0);
    (*g_engfuncs.pfnWriteCoord)(fStack_8);
    (*g_engfuncs.pfnWriteCoord)(unaff_retaddr);
    (*g_engfuncs.pfnWriteCoord)((float)param_2);
    (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)(param_1 + 4) + 0x50));
    (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)(param_1 + 4) + 0x54));
    (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)(param_1 + 4) + 0x58));
    (*g_engfuncs.pfnWriteByte)(2);
    (*g_engfuncs.pfnMessageEnd)();
    uVar5 = EMIT_SOUND_DYN(*(void **)(param_1 + 4),
                           *(undefined4 *)((int)*(void **)(param_1 + 4) + 0x208),4,
                           s_weapons_knife_knife_hit_wav_10098244,0x3f800000,0x3f4ccccd,0,100);
    *(undefined4 *)(param_1 + 0x71c) = 0;
    return (short)CONCAT31((int3)((uint)uVar5 >> 8),1);
  }
  return uVar6;
}

/* 10043870  FUN_10043870  (353 bytes)
 * undefined4 FUN_10043870(int param_1, int * param_2)
 * called by: FUN_1004c6c0, FUN_1005c680
 */
undefined4 __cdecl FUN_10043870(int param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  void *this;
  int iVar4;
  undefined4 uVar5;
  float unaff_retaddr;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar4 = (**(code **)(*param_2 + 0xa8))();
  if (iVar4 == 0) {
    return 0;
  }
  if (((float)param_2[0x1ca] <= gpGlobals->time) &&
     (fVar1 = (float)param_2[0x1cb], fVar2 = gpGlobals->time, fVar1 < fVar2 || (fVar1 == fVar2) != 0
     )) {
    return (uint)(byte)(fVar1 < fVar2 | (byte)((ushort)((ushort)(fVar1 == fVar2) << 0xe) >> 8)) << 8
    ;
  }
  iVar4 = param_2[1];
  iVar3 = *(int *)(param_1 + 4);
  fStack_18 = (*(float *)(iVar4 + 8) + *(float *)(iVar3 + 8)) * 0.5;
  fStack_14 = (*(float *)(iVar4 + 0xc) + *(float *)(iVar3 + 0xc)) * 0.5;
  fStack_4 = (*(float *)(iVar4 + 0x10) + *(float *)(iVar3 + 0x10)) * 0.5;
  fStack_10 = fStack_4 + 20.0;
  fStack_c = fStack_18;
  fStack_8 = fStack_14;
  (*g_engfuncs.pfnMessageBegin)(4,DAT_100cbc84,&fStack_18,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteCoord)(fStack_8);
  (*g_engfuncs.pfnWriteCoord)(unaff_retaddr);
  (*g_engfuncs.pfnWriteCoord)((float)param_2);
  (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)(param_1 + 4) + 0x50));
  (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)(param_1 + 4) + 0x54));
  (*g_engfuncs.pfnWriteCoord)(*(float *)(*(int *)(param_1 + 4) + 0x58));
  (*g_engfuncs.pfnWriteByte)(2);
  (*g_engfuncs.pfnMessageEnd)();
  this = *(void **)(*(int *)(param_1 + 4) + 0x208);
  uVar5 = EMIT_SOUND_DYN(this,this,4,s_weapons_knife_knife_hit_wav_10098244,0x3f800000,0x3f4ccccd,0,
                         100);
  *(undefined4 *)(param_1 + 0x71c) = 0;
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}

/* 100439e0  FUN_100439e0  (728 bytes)
 * undefined4 FUN_100439e0(int * param_1, int * param_2, float param_3, undefined4 param_4)
 * called by: FUN_10056f20, FUN_100572a0, FUN_1005c680
 */
undefined4 __cdecl FUN_100439e0(int *param_1,int *param_2,float param_3,undefined4 param_4)

{
  float fVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  void *this;
  int *piVar7;
  ushort uVar8;
  float10 fVar9;
  longlong lVar10;
  float unaff_retaddr;
  float in_stack_0000001c;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar5 = (**(code **)(*param_2 + 0xa8))();
  uVar6 = 0;
  if (iVar5 == 0) {
LAB_10043cae:
    return uVar6 & 0xffffff00;
  }
  piVar7 = param_2;
  if ((float)param_2[0x1c9] <= gpGlobals->time) {
    uVar3 = (ushort)((float)param_1[0x1c9] < gpGlobals->time);
    uVar4 = (ushort)((float)param_1[0x1c9] == gpGlobals->time);
    uVar8 = uVar3 << 8 | uVar4 << 0xe;
    uVar6 = (uint)uVar8;
    if (((uVar3 != 0 || uVar4 != 0) ||
        (uVar6 = (uint)CONCAT11((char)(uVar8 >> 8),(char)param_2[0x1c8]),
        (char)param_2[0x1c8] != '\0')) ||
       (uVar3 = (ushort)((float)param_2[0x1c6] < gpGlobals->time),
       uVar4 = (ushort)((float)param_2[0x1c6] == gpGlobals->time),
       uVar6 = (uint)(ushort)(uVar3 << 8 | uVar4 << 0xe), piVar7 = param_1, uVar3 != 0 || uVar4 != 0
       )) goto LAB_10043cae;
  }
  iVar5 = param_2[1];
  iVar2 = param_1[1];
  fStack_c = (*(float *)(iVar5 + 8) + *(float *)(iVar2 + 8)) * 0.5;
  fStack_8 = (*(float *)(iVar5 + 0xc) + *(float *)(iVar2 + 0xc)) * 0.5;
  fStack_4 = (*(float *)(iVar5 + 0x10) + *(float *)(iVar2 + 0x10)) * 0.5;
  fStack_10 = fStack_4 + 20.0;
  fVar1 = (float)piVar7[0x1bb];
  (*g_engfuncs.pfnMessageBegin)(4,DAT_100cbc74,(float *)&stack0xffffffe8,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteCoord)(fStack_8);
  (*g_engfuncs.pfnWriteCoord)(unaff_retaddr);
  (*g_engfuncs.pfnWriteCoord)((1.0 - fVar1 * 0.01) * param_3);
  (*g_engfuncs.pfnWriteCoord)(0.0);
  (*g_engfuncs.pfnWriteCoord)(0.0);
  (*g_engfuncs.pfnWriteCoord)(0.0);
  lVar10 = __ftol();
  (*g_engfuncs.pfnWriteByte)((int)lVar10);
  (*g_engfuncs.pfnMessageEnd)();
  DAT_100cbf11 = 1;
  FUN_1006a2f0();
  iVar5 = *piVar7;
  FUN_1000c610((void *)(param_1[1] + 8),&fStack_10,(float *)(param_2[1] + 8));
  (**(code **)(iVar5 + 0x34))();
  FUN_1006a310(param_1[1],param_1[1]);
  DAT_100cbf11 = 0;
  EMIT_SOUND_DYN(this,*(undefined4 *)(param_1[1] + 0x208),4,s_player_kungfuhit_wav_10098260,
                 0x3f800000,0x3f4ccccd,0,100);
  param_2[0x1c7] = 0;
  param_1[0x1c7] = 0;
  CTSAnimation::Animate((CTSAnimation *)(piVar7 + 0x9d),piVar7,0x22);
  fVar9 = (float10)FUN_100551c0((int)piVar7);
  if ((float10)3.0 <= fVar9 * (float10)0.3) {
    fVar9 = (float10)3.0;
  }
  else {
    fVar9 = (float10)FUN_100551c0((int)piVar7);
    fVar9 = fVar9 * (float10)0.3;
  }
  iVar5 = piVar7[0x25a];
  fVar9 = ((float10)(float)piVar7[0x1c9] - (float10)gpGlobals->time) + fVar9;
  piVar7[0x46] = (int)(float)fVar9;
  if ((iVar5 != 0) && (*(int *)(iVar5 + 0x78) == 0x10)) {
    *(float *)(iVar5 + 0x90) = (float)fVar9;
    iVar5 = piVar7[0x25a];
    *(undefined4 *)(iVar5 + 0x8c) = *(undefined4 *)(iVar5 + 0x90);
  }
  if (*(char *)((int)piVar7 + 0x731) == '\0') {
    fVar1 = (float)piVar7[0x1bb];
    piVar7[0x1bb] = (int)(fVar1 - in_stack_0000001c);
    if (fVar1 - in_stack_0000001c < 0.0) {
      piVar7[0x1bb] = 0;
    }
    (*g_engfuncs.pfnMessageBegin)(1,DAT_100cbc3c,(float *)0x0,*(edict_t **)(piVar7[1] + 0x208));
    lVar10 = __ftol();
    (*g_engfuncs.pfnWriteByte)((int)lVar10);
    fStack_8 = 2.6079126e-29;
    iVar5 = (*g_engfuncs.pfnMessageEnd)();
  }
  return CONCAT31((int3)((uint)iVar5 >> 8),1);
}

/* 100445c0  FUN_100445c0  (3 bytes)
 * undefined FUN_100445c0(void)
 * called by: CHalfLifeMultiplay::PlayerKilled
 */
void FUN_100445c0(void)

{
  return;
}

/* 10044810  FUN_10044810  (415 bytes)
 * undefined FUN_10044810(char * param_1)
 * called by: CHalfLifeMultiplay::CHalfLifeMultiplay, CHalfLifeMultiplay::ChangeLevel, CHalfLifeTeamplay::CHalfLifeTeamplay
 */
void __fastcall FUN_10044810(char *param_1)

{
  float fVar1;
  char cVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  
  param_1[1] = -1;
  param_1[0x1b4] = '\0';
  param_1[0x1b5] = '\0';
  param_1[0x1b6] = '\0';
  param_1[0x1b7] = '\0';
  param_1[0x1a8] = '\0';
  param_1[0x1a9] = '\0';
  param_1[0x1aa] = '\0';
  param_1[0x1ab] = '\0';
  param_1[0x1ac] = '\0';
  param_1[0x1ad] = '\0';
  param_1[0x1ae] = '\0';
  param_1[0x1af] = '\0';
  param_1[0x1b0] = '\0';
  param_1[0x1b1] = '\0';
  param_1[0x1b2] = '\0';
  param_1[0x1b3] = '\0';
  param_1[0x1bc] = '\0';
  param_1[0x1bd] = '\0';
  param_1[0x1be] = -0x80;
  param_1[0x1bf] = -0x41;
  param_1[0x1c0] = -1;
  param_1[0x1c1] = -1;
  param_1[0x1c2] = -1;
  param_1[0x1c3] = -1;
  param_1[0x1a4] = -1;
  param_1[0x1a5] = -1;
  param_1[0x1a6] = -1;
  param_1[0x1a7] = -1;
  param_1[0x1a0] = -1;
  param_1[0x1a1] = -1;
  param_1[0x1a2] = -1;
  param_1[0x1a3] = -1;
  pcVar3 = param_1 + 0x1c4;
  for (iVar5 = 0x21; iVar5 != 0; iVar5 = iVar5 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  fVar1 = gpGlobals->time;
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  *(float *)(param_1 + 0x1b8) = fVar1 + 60.0;
  *(float *)(param_1 + 0xc) = gpGlobals->time + 5.0;
  *param_1 = (char)DAT_1009f498;
  pcVar3 = param_1 + 0x15;
  for (iVar5 = 0x18; iVar5 != 0; iVar5 = iVar5 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  pcVar3 = (char *)&DAT_10093df8;
  do {
    cVar2 = *pcVar3;
    (param_1 + -0x10093de3)[(int)pcVar3] = cVar2;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  pcVar3 = &DAT_100982c0;
  do {
    cVar2 = *pcVar3;
    (param_1 + -0x1009827b)[(int)pcVar3] = cVar2;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  param_1[0x80] = '\0';
  param_1[0x81] = '\0';
  param_1[0x82] = '\0';
  param_1[0x83] = '\0';
  lVar6 = __ftol();
  *(int *)(param_1 + 0x7c) = (int)lVar6;
  lVar6 = __ftol();
  *(int *)(param_1 + 0x78) = (int)lVar6;
  param_1[0x84] = '\0';
  param_1[0x85] = '\0';
  param_1[0x86] = '\0';
  param_1[0x87] = '\0';
  param_1[0x88] = '\0';
  param_1[0x89] = '\0';
  param_1[0x8a] = '\0';
  param_1[0x8b] = '\0';
  param_1[0x8c] = '\0';
  param_1[0x8d] = '\0';
  param_1[0x8e] = '\0';
  param_1[0x8f] = '\0';
  param_1[0x90] = '\0';
  param_1[0x91] = '\0';
  param_1[0x92] = '\0';
  param_1[0x93] = '\0';
  FUN_100449b0(param_1);
  param_1[0x2cc] = -1;
  param_1[0x2cd] = -1;
  param_1[0x2ce] = -1;
  param_1[0x2cf] = -1;
  param_1[0x2d0] = '\0';
  param_1[0x2d1] = '\0';
  param_1[0x2d2] = '\0';
  param_1[0x2d3] = '\0';
  FUN_10062b80((undefined4 *)&DAT_100d9068);
  FUN_100639d0((int *)&DAT_100d9068);
  FUN_1005e180();
  pcVar3 = param_1 + 0x2d4;
  for (iVar5 = 0x240; iVar5 != 0; iVar5 = iVar5 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  fVar1 = gpGlobals->time;
  param_1[0x1474] = '\0';
  *(float *)(param_1 + 0xbd4) = fVar1 + 10.0;
  FUN_1003f750((undefined4 *)(param_1 + 0x14b4));
  param_1[0x54bc] = -1;
  uVar4 = FUN_10043620();
  *(undefined4 *)(param_1 + 0x54c0) = uVar4;
  *(undefined4 *)(param_1 + 0x54c4) = uVar4;
  param_1[0x54c8] = -1;
  param_1[0x54c9] = -1;
  param_1[0x54ca] = -1;
  param_1[0x54cb] = -1;
  param_1[0x54ce] = '\0';
  fVar1 = gpGlobals->time;
  param_1[0x54d4] = '\0';
  param_1[0x54d5] = '\0';
  param_1[0x54d6] = '\0';
  param_1[0x54d7] = '\0';
  param_1[0x54d8] = '\0';
  *(float *)(param_1 + 0x54d0) = fVar1 + 10.0;
  return;
}

/* 100449b0  FUN_100449b0  (496 bytes)
 * undefined FUN_100449b0(char * param_1)
 * called by: CTSGameRules::RestartRound, FUN_10044810
 */
void __fastcall FUN_100449b0(char *param_1)

{
  edict_t *peVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  
  if ((*param_1 == '\x03') || (*param_1 == '\x02')) {
    pcVar5 = param_1 + 0x98;
    for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      pcVar5 = pcVar5 + 4;
    }
    param_1[0x94] = '\0';
    param_1[0x95] = '\0';
    param_1[0x96] = '\0';
    param_1[0x97] = '\0';
    param_1[0x19c] = '\0';
    param_1[0x19d] = '\0';
    param_1[0x19e] = '\0';
    param_1[0x19f] = '\0';
    iVar4 = UTIL_FindEntityByClassname(0,s_ts_objective_manager_100982f4);
    while (((iVar4 != 0 &&
            (peVar1 = *(edict_t **)(*(int *)(iVar4 + 4) + 0x208), peVar1 != (edict_t *)0x0)) &&
           (iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar1), iVar2 != 0))) {
      if (*(int *)(param_1 + 0x94) < 0x20) {
        *(int *)(param_1 + *(int *)(param_1 + 0x94) * 4 + 0x98) = iVar4;
        *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
      }
      iVar4 = UTIL_FindEntityByClassname(iVar4,s_ts_objective_manager_100982f4);
    }
    if (*(int *)(param_1 + 0x94) == 0) {
      *param_1 = '\x02';
      DAT_1009f498 = 2;
      return;
    }
    *param_1 = '\x03';
    DAT_1009f498 = 3;
    piVar3 = (int *)UTIL_FindEntityByClassname(iVar4,s_ts_bomb_100982ec);
    while (((piVar3 != (int *)0x0 && (*(edict_t **)(piVar3[1] + 0x208) != (edict_t *)0x0)) &&
           (iVar4 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(piVar3[1] + 0x208)),
           iVar4 != 0))) {
      (**(code **)(*piVar3 + 0xf0))(0);
      piVar3 = (int *)UTIL_FindEntityByClassname((int)piVar3,s_ts_bomb_100982ec);
    }
    piVar3 = (int *)UTIL_FindEntityByClassname((int)piVar3,s_ts_hack_100982e4);
    while (((piVar3 != (int *)0x0 && (*(edict_t **)(piVar3[1] + 0x208) != (edict_t *)0x0)) &&
           (iVar4 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(piVar3[1] + 0x208)),
           iVar4 != 0))) {
      (**(code **)(*piVar3 + 0xf0))(0);
      piVar3 = (int *)UTIL_FindEntityByClassname((int)piVar3,s_ts_hack_100982e4);
    }
    piVar3 = (int *)UTIL_FindEntityByClassname((int)piVar3,s_ts_teamescape_100982d4);
    while (((piVar3 != (int *)0x0 && (*(edict_t **)(piVar3[1] + 0x208) != (edict_t *)0x0)) &&
           (iVar4 = (*g_engfuncs.pfnEntOffsetOfPEntity)(*(edict_t **)(piVar3[1] + 0x208)),
           iVar4 != 0))) {
      (**(code **)(*piVar3 + 0xf0))(0);
      piVar3 = (int *)UTIL_FindEntityByClassname((int)piVar3,s_ts_teamescape_100982d4);
    }
    iVar4 = UTIL_FindEntityByClassname((int)piVar3,s_ts_wingiver_100982c8);
    while (((iVar4 != 0 &&
            (peVar1 = *(edict_t **)(*(int *)(iVar4 + 4) + 0x208), peVar1 != (edict_t *)0x0)) &&
           (iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar1), iVar2 != 0))) {
      FUN_10050c90(iVar4);
      iVar4 = UTIL_FindEntityByClassname(iVar4,s_ts_wingiver_100982c8);
    }
  }
  return;
}

/* 10045150  FUN_10045150  (84 bytes)
 * undefined FUN_10045150(char * param_1)
 * called by: CTSGameRules::RestartRound
 */
void __fastcall FUN_10045150(char *param_1)

{
  int iVar1;
  
  if ((*param_1 == '\x03') || (*param_1 == '\x02')) {
    FUN_10046610((int)param_1);
    param_1[0x19c] = '\0';
    param_1[0x19d] = '\0';
    param_1[0x19e] = '\0';
    param_1[0x19f] = '\0';
    if (*(int *)(param_1 + 0x94) != 0) {
      iVar1 = (*g_engfuncs.pfnRandomLong)(0,*(int *)(param_1 + 0x94) + -1);
      FUN_10050710(*(int *)(param_1 + iVar1 * 4 + 0x98));
      *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + iVar1 * 4 + 0x98);
    }
  }
  return;
}

/* 100451b0  FUN_100451b0  (13 bytes)
 * undefined FUN_100451b0(undefined4 param_1)
 * called by: CHalfLifeTeamplay::CHalfLifeTeamplay
 */
void __thiscall FUN_100451b0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x80) = param_1;
  return;
}

/* 100451c0  FUN_100451c0  (821 bytes)
 * undefined FUN_100451c0(void * param_1)
 * called by: CHalfLifeMultiplay::InitHUD
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100451c0(void *this,void *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 uStack0000000c;
  undefined4 uStack00000034;
  undefined4 in_stack_00000040;
  char cVar6;
  
  if ((_DAT_102e0100 != 0.0) &&
     (TSHudMessageOne(0x2d,0xc3,0x2d,1,100,s_This_server_have_cheats_enabled__10098394,
                      *(int *)((int)param_1 + 4)), 0.0 < DAT_10093be4)) {
    iVar2 = *(int *)((int)param_1 + 4);
    pcVar1 = UTIL_VarArgs((byte_conflict *)s_This_server_have_custom_weapon_d_10098364);
    TSHudMessageOne(0x2d,0xc3,0x2d,1,100,pcVar1,iVar2);
  }
  if (*(char *)((int)this + 0x54d8) != '\0') {
    InformClientsOnWeaponsParams((int)param_1);
  }
  (*g_engfuncs.pfnMessageBegin)
            (1,DAT_100cbc9c,(float *)0x0,*(edict_t **)(*(int *)((int)param_1 + 4) + 0x208));
  (*g_engfuncs.pfnWriteByte)(0);
  (*g_engfuncs.pfnWriteShort)((uint)(_DAT_10093c48 != 0.0));
  (*g_engfuncs.pfnMessageEnd)();
  (*g_engfuncs.pfnMessageBegin)
            (1,DAT_100cbc9c,(float *)0x0,*(edict_t **)(*(int *)((int)param_1 + 4) + 0x208));
  (*g_engfuncs.pfnWriteByte)(1);
  (*g_engfuncs.pfnWriteShort)((uint)(_DAT_10093c5c != 0.0));
  (*g_engfuncs.pfnMessageEnd)();
  uStack0000000c = 0x1004530c;
  (*g_engfuncs.pfnMessageBegin)
            (1,DAT_100cbc9c,(float *)0x0,*(edict_t **)(*(int *)((int)param_1 + 4) + 0x208));
  (*g_engfuncs.pfnWriteByte)(2);
  lVar5 = __ftol();
  (*g_engfuncs.pfnWriteShort)((int)lVar5);
  (*g_engfuncs.pfnMessageEnd)();
  uStack0000000c = 0x10045346;
  (*g_engfuncs.pfnMessageBegin)
            (1,DAT_100cbc9c,(float *)0x0,*(edict_t **)(*(int *)((int)param_1 + 4) + 0x208));
  (*g_engfuncs.pfnWriteByte)(3);
  (*g_engfuncs.pfnWriteShort)(*(int *)((int)this + 0x54c8));
  (*g_engfuncs.pfnMessageEnd)();
  if (*(float *)((int)this + 8) != 0.0) {
    in_stack_00000040 = 0x1004538e;
    (*g_engfuncs.pfnMessageBegin)
              (1,DAT_100cbc70,(float *)0x0,*(edict_t **)(*(int *)((int)param_1 + 4) + 0x208));
    lVar5 = __ftol();
    (*g_engfuncs.pfnWriteByte)((int)lVar5);
    (*g_engfuncs.pfnWriteByte)(0);
    (*g_engfuncs.pfnMessageEnd)();
  }
  uStack00000034 = 0x100453fa;
  FUN_1000a540(&stack0x0000003c,(undefined4 *)(*(int *)((int)param_1 + 4) + 8));
  CBasePlayer::StartObserver(param_1);
  *(undefined1 *)((int)param_1 + 0x732) = 0;
  *(undefined1 *)((int)param_1 + 0x68c) = 0;
  lVar5 = __ftol();
  *(int *)((int)param_1 + 0x4b8) = (int)lVar5;
  *(undefined4 *)((int)param_1 + 0x4b4) = 0;
  *(undefined4 *)((int)param_1 + 0x4b0) = 0;
  *(undefined4 *)((int)param_1 + 0x73c) = 0;
  *(undefined1 *)((int)param_1 + 0x740) = 0;
  *(undefined4 *)((int)param_1 + 0x744) = 0;
  cVar6 = '\0';
  lVar5 = __ftol();
  FUN_10042d50((int)param_1,(int)lVar5,cVar6);
  puVar4 = (undefined4 *)((int)param_1 + 0x41e);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  FUN_10055950((int)param_1);
  if ((DAT_1009f498 == 2) || (DAT_1009f498 == 3)) {
    *(undefined4 *)((int)param_1 + 0x6d0) = 0;
  }
  iVar2 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)((int)param_1 + 4) + 0x208));
  if ((-1 < iVar2) && (iVar2 < 0x20)) {
    puVar4 = (undefined4 *)(&DAT_100acb94 + iVar2 * 0x48);
    for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(int *)(&DAT_100acbd8 + iVar2 * 0x48) = iVar2 + 1;
  }
  return;
}

/* 10045500  FUN_10045500  (147 bytes)
 * undefined FUN_10045500(float param_1, float param_2)
 * called by: GameDLLInit
 */
void __thiscall FUN_10045500(void *this,float param_1,float param_2)

{
  float fVar1;
  
  if (param_1 != *(float *)((int)this + 0x1ac)) {
    if (param_1 == 0.0) {
      *(undefined4 *)((int)this + 0x1a8) = 0;
      return;
    }
    FUN_100455f0(this,0.0,'\0');
    fVar1 = gpGlobals->time;
    *(float *)((int)this + 0x1ac) = param_1;
    *(float *)((int)this + 0x1b4) = fVar1;
    *(undefined4 *)((int)this + 0x1a8) = 0x3f800000;
    if (param_2 != 0.0) {
      *(float *)((int)this + 0x1b0) = param_2 + gpGlobals->time;
      return;
    }
    *(undefined4 *)((int)this + 0x1b0) = 0;
  }
  return;
}

/* 100455f0  FUN_100455f0  (576 bytes)
 * undefined FUN_100455f0(float param_1, char param_2)
 * called by: CTSSlowMotion::WaitThink, FUN_10041030, FUN_10045500, GameDLLInit
 */
void __thiscall FUN_100455f0(void *this,float param_1,char param_2)

{
  edict_t *peVar1;
  int *this_00;
  int iVar2;
  int iVar3;
  
  if ((*(float *)((int)this + 0x1b4) <= gpGlobals->time) || (param_1 == 0.0)) {
    iVar3 = 1;
    *(float *)((int)this + 0x1b4) = gpGlobals->time + 0.5;
    if (0 < gpGlobals->maxClients) {
      do {
        this_00 = (int *)UTIL_PlayerByIndex(iVar3);
        if ((this_00 != (int *)0x0) && (iVar2 = (**(code **)(*this_00 + 0xa8))(), iVar2 != 0)) {
          iVar2 = FUN_100551e0((int)this_00);
          if (iVar2 == 0) {
            FUN_10055220(this_00,param_1,0);
            *(bool *)((int)this_00 + 0x15d) = param_2 != '\0';
          }
          if (param_1 == 0.0) {
            FUN_10055220(this_00,0.0,0);
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 <= gpGlobals->maxClients);
    }
    iVar3 = UTIL_FindEntityByClassname(0,s_grenade_10097ea4);
    while (((iVar3 != 0 &&
            (peVar1 = *(edict_t **)(*(int *)(iVar3 + 4) + 0x208), peVar1 != (edict_t *)0x0)) &&
           (iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar1), iVar2 != 0))) {
      if (*(float *)(*(int *)(iVar3 + 4) + 0x254) == 0.0) {
        *(float *)(*(int *)(iVar3 + 4) + 0x254) = param_1;
      }
      if (param_1 == 0.0) {
        *(undefined4 *)(*(int *)(iVar3 + 4) + 0x254) = 0;
      }
      iVar3 = UTIL_FindEntityByClassname(iVar3,s_grenade_10097ea4);
    }
    iVar3 = UTIL_FindEntityByClassname(0,&DAT_100983c4);
    while (((iVar3 != 0 &&
            (peVar1 = *(edict_t **)(*(int *)(iVar3 + 4) + 0x208), peVar1 != (edict_t *)0x0)) &&
           (iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar1), iVar2 != 0))) {
      if (*(float *)(*(int *)(iVar3 + 4) + 0x254) == 0.0) {
        *(float *)(*(int *)(iVar3 + 4) + 0x254) = param_1;
      }
      if (param_1 == 0.0) {
        *(undefined4 *)(*(int *)(iVar3 + 4) + 0x254) = 0;
      }
      iVar3 = UTIL_FindEntityByClassname(iVar3,&DAT_100983c4);
    }
    iVar3 = UTIL_FindEntityByClassname(0,s_WorldGun_100983b8);
    while (((iVar3 != 0 &&
            (peVar1 = *(edict_t **)(*(int *)(iVar3 + 4) + 0x208), peVar1 != (edict_t *)0x0)) &&
           (iVar2 = (*g_engfuncs.pfnEntOffsetOfPEntity)(peVar1), iVar2 != 0))) {
      if (*(float *)(*(int *)(iVar3 + 4) + 0x254) == 0.0) {
        *(float *)(*(int *)(iVar3 + 4) + 0x254) = param_1;
      }
      if (param_1 == 0.0) {
        *(undefined4 *)(*(int *)(iVar3 + 4) + 0x254) = 0;
      }
      iVar3 = UTIL_FindEntityByClassname(iVar3,s_WorldGun_100983b8);
    }
  }
  return;
}

/* 10045840  FUN_10045840  (110 bytes)
 * char * FUN_10045840(int param_1)
 * called by: CHalfLifeTeamplay::ClientUserInfoChanged, FUN_10038cb0
 */
char * __thiscall FUN_10045840(void *this,int param_1)

{
  uint uVar1;
  void *this_00;
  
  if ((*(char *)this == '\x02') || (*(char *)this == '\x03')) {
    uVar1 = FUN_1007e860(this,(byte_conflict *)(param_1 + 0xaa0),
                         (byte_conflict *)s_Specialists_10097488);
    if (uVar1 == 0) {
      return (char *)(*(int *)(param_1 + 0x6d0) * 0x10 + 0x15 + (int)this);
    }
    uVar1 = FUN_1007e860(this_00,(byte_conflict *)(param_1 + 0xaa0),
                         (byte_conflict *)s_Mercenary_1009747c);
    if (uVar1 == 0) {
      return (char *)(*(int *)(param_1 + 0x6d0) * 0x10 + 0x45 + (int)this);
    }
  }
  return &DAT_1009f428;
}

/* 100458b0  FUN_100458b0  (83 bytes)
 * undefined4 FUN_100458b0(int param_1)
 * called by: CTSGameRules::RestartRound, FUN_10042c90
 */
undefined4 __thiscall FUN_100458b0(void *this,int param_1)

{
  uint uVar1;
  void *this_00;
  
  if ((*(char *)this == '\x02') || (*(char *)this == '\x03')) {
    uVar1 = FUN_1007e860(this,(byte_conflict *)(param_1 + 0xaa0),
                         (byte_conflict *)s_Specialists_10097488);
    if (uVar1 == 0) {
      return *(undefined4 *)((int)this + 0x78);
    }
    uVar1 = FUN_1007e860(this_00,(byte_conflict *)(param_1 + 0xaa0),
                         (byte_conflict *)s_Mercenary_1009747c);
    if (uVar1 == 0) {
      return *(undefined4 *)((int)this + 0x7c);
    }
  }
  return 0;
}

/* 10045910  FUN_10045910  (36 bytes)
 * undefined FUN_10045910(int param_1)
 * called by: CBasePlayer::PreThink, CHalfLifeMultiplay::PlayerKilled, FUN_100648e0
 */
void __fastcall FUN_10045910(int param_1)

{
  if (*(float *)(param_1 + 0xc) == 0.0) {
    *(float *)(param_1 + 0x54d4) = gpGlobals->time + 1.0;
  }
  return;
}

/* 10045d80  FUN_10045d80  (71 bytes)
 * int FUN_10045d80(void)
 * called by: CTSGameRules::TeamWin
 */
int FUN_10045d80(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 1;
  iVar4 = 0;
  if (0 < gpGlobals->maxClients) {
    do {
      piVar1 = (int *)UTIL_PlayerByIndex(iVar3);
      if (piVar1 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar1 + 0xa8))();
        if (iVar2 != 0) {
          iVar4 = iVar4 + 1;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= gpGlobals->maxClients);
  }
  return iVar4;
}

/* 10046610  FUN_10046610  (30 bytes)
 * undefined FUN_10046610(int param_1)
 * called by: FUN_10045150
 */
void __fastcall FUN_10046610(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(param_1 + 0x118) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x11c);
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

/* 10046630  FUN_10046630  (49 bytes)
 * int FUN_10046630(undefined4 param_1)
 * called by: CTSObjectivePointer::Use
 */
int __thiscall FUN_10046630(void *this,undefined4 param_1)

{
  int iVar1;
  
  if (0x1f < *(int *)((int)this + 0x118)) {
    return -1;
  }
  *(undefined4 *)((int)this + *(int *)((int)this + 0x118) * 4 + 0x11c) = param_1;
  iVar1 = *(int *)((int)this + 0x118);
  *(int *)((int)this + 0x118) = iVar1 + 1;
  return iVar1;
}

/* 10046670  FUN_10046670  (31 bytes)
 * int FUN_10046670(int param_1)
 * called by: FUN_10046690
 */
int __thiscall FUN_10046670(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)((int)this + 0x11c);
  do {
    if (*piVar2 == param_1) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 0x20);
  return -1;
}

/* 10046690  FUN_10046690  (67 bytes)
 * undefined FUN_10046690(int param_1)
 * called by: FUN_10050f10
 */
void __thiscall FUN_10046690(void *this,int param_1)

{
  int iValue;
  undefined4 uStack00000008;
  
  iValue = FUN_10046670(this,param_1);
  *(undefined4 *)((int)this + iValue * 4 + 0x11c) = 0;
  (*g_engfuncs.pfnMessageBegin)(2,DAT_100cbc8c,(float *)0x0,(edict_t *)0x0);
  (*g_engfuncs.pfnWriteByte)(iValue);
  uStack00000008 = 0x100466ce;
  (*g_engfuncs.pfnMessageEnd)();
  return;
}

/* 10046a10  FUN_10046a10  (74 bytes)
 * undefined FUN_10046a10(int param_1)
 * called by: CM61Grenade::Spawn, CTSKnife::Spawn, CTSShrapnel::Spawn, CTSWorldGun::Spawn
 */
void __fastcall FUN_10046a10(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x54) = DAT_1009f4a8;
  *(undefined4 *)(param_1 + 0x58) = DAT_1009f4ac;
  *(undefined4 *)(param_1 + 0x5c) = DAT_1009f4b0;
  *(undefined4 *)(param_1 + 0x60) = DAT_1009f4a8;
  *(undefined4 *)(param_1 + 100) = DAT_1009f4ac;
  uVar1 = DAT_1009f4b0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  return;
}

/* 10048fc0  FUN_10048fc0  (8 bytes)
 * undefined FUN_10048fc0()
 */
void __fastcall FUN_10048fc0(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10048fc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xfc))();
  return;
}

/* 10048fd0  FUN_10048fd0  (8 bytes)
 * undefined FUN_10048fd0()
 */
void __fastcall FUN_10048fd0(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10048fd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf0))();
  return;
}

/* 10048ff0  FUN_10048ff0  (253 bytes)
 * undefined FUN_10048ff0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * called by: CTSGun::AlternateAttack, CTSGun::Reload, FUN_1004ab60, FUN_1004b050, FUN_1004b400, FUN_1004b8c0, FUN_1004c090, FUN_1004c6c0, FUN_1004de10
 */
void __cdecl FUN_10048ff0(int param_1,int param_2,edict_t *param_3,undefined4 param_4,float param_5)

{
  int iparam2;
  int bparam2;
  int iVar1;
  float in_stack_00000030;
  float in_stack_00000034;
  int in_stack_00000038;
  int in_stack_0000003c;
  int in_stack_00000040;
  int in_stack_00000044;
  float in_stack_00000048;
  float in_stack_00000064;
  float in_stack_00000068;
  int iStack00000074;
  int iStack00000078;
  
  bparam2 = in_stack_00000044;
  iparam2 = in_stack_0000003c;
  (*g_engfuncs.pfnPlaybackEvent)
            (param_2,param_3,(ushort)param_4,param_5,(float *)&stack0x00000018,
             (float *)&stack0x00000024,in_stack_00000030,in_stack_00000034,in_stack_00000038,
             in_stack_0000003c,in_stack_00000040,in_stack_00000044);
  iStack00000074 =
       (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*(int *)((int)in_stack_00000034 + 4) + 0x208));
  iStack00000078 = 1;
  if (0 < gpGlobals->maxClients) {
    do {
      iVar1 = UTIL_PlayerByIndex(iStack00000078);
      if (((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 4), *(int *)(iVar1 + 0x244) == 5)) &&
         (*(int *)(iVar1 + 0x248) == iStack00000074)) {
        (*g_engfuncs.pfnPlaybackEvent)
                  (in_stack_0000003c,*(edict_t **)(iVar1 + 0x208),(ushort)in_stack_00000044,
                   in_stack_00000048,(float *)&stack0x0000004c,(float *)&stack0x00000058,
                   in_stack_00000064,in_stack_00000068,in_stack_00000038,iparam2,in_stack_00000040,
                   bparam2);
      }
      iStack00000078 = iStack00000078 + 1;
    } while (iStack00000078 <= gpGlobals->maxClients);
  }
  return;
}

/* 100490f0  FUN_100490f0  (153 bytes)
 * int FUN_100490f0(int param_1, uint param_2)
 * called by: CTSGun::Deploy
 */
int __cdecl FUN_100490f0(int param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((param_2 & 1) != 0) {
    iVar2 = (int)*(short *)(&DAT_100bbfc8 + param_1 * 0x3f4);
  }
  if ((((param_2 & 2) == 0) || ((param_2 & 4) == 0)) ||
     (sVar1 = *(short *)(&DAT_100bbfd0 + param_1 * 0x3f4), sVar1 == -1)) {
    if ((param_2 & 2) != 0) {
      iVar2 = iVar2 + *(short *)(&DAT_100bbfca + param_1 * 0x3f4);
    }
    if ((param_2 & 4) == 0) goto LAB_1004916d;
    sVar1 = *(short *)(&DAT_100bbfcc + param_1 * 0x3f4);
  }
  iVar2 = iVar2 + sVar1;
LAB_1004916d:
  if ((param_2 & 8) != 0) {
    iVar2 = iVar2 + *(short *)(&DAT_100bbfce + param_1 * 0x3f4);
  }
  return iVar2;
}

/* 100491c0  FUN_100491c0  (36 bytes)
 * undefined4 * FUN_100491c0(int param_1)
 * called by: CBasePlayer::ShootBulletsPlayer, FUN_1003f910, FUN_10055a40
 */
undefined4 * __cdecl FUN_100491c0(int param_1)

{
  if ((-1 < param_1) && (param_1 < 0x10)) {
    return &DAT_100b1e98 + param_1 * 0xe;
  }
  return &DAT_100b1e98;
}

/* 100491f0  FUN_100491f0  (114 bytes)
 * undefined FUN_100491f0(void)
 * called by: FUN_10049890
 */
void FUN_100491f0(void)

{
  float fVar1;
  int iVar2;
  int local_4;
  
  iVar2 = 0;
  do {
    local_4 = 1;
    if (0 < iVar2) {
      local_4 = iVar2;
    }
    fVar1 = 1.0 / SQRT((float)local_4 * 0.1);
    (&DAT_100b2250)[iVar2] = fVar1;
    if (1.0 < fVar1) {
      (&DAT_100b2250)[iVar2] = 0x3f800000;
    }
    if ((float)(&DAT_100b2250)[iVar2] < 0.0) {
      (&DAT_100b2250)[iVar2] = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 10000);
  return;
}

/* 10049270  FUN_10049270  (37 bytes)
 * float10 FUN_10049270(int param_1)
 * called by: CBasePlayer::ShootBulletsPlayer, FUN_1003f910
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_10049270(int param_1)

{
  if (param_1 < 0) {
    return (float10)DAT_100b2250;
  }
  if (9999 < param_1) {
    return (float10)_DAT_100bbe8c;
  }
  return (float10)(&DAT_100b2250)[param_1];
}

/* 10049890  FUN_10049890  (382 bytes)
 * undefined FUN_10049890(void)
 * called by: W_Precache
 */
void FUN_10049890(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = 0;
  puVar4 = &DAT_100bbea8;
  for (iVar3 = 0x3f40; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  do {
    pcVar1 = &DAT_100986d4 + iVar2;
    (&DAT_100bbeec)[iVar2] = *pcVar1;
    iVar2 = iVar2 + 1;
  } while (*pcVar1 != '\0');
  Write_glock18(&DAT_100bc29c);
  Write_uzi(&DAT_100bca84);
  Write_uzi_akimbo(&DAT_100bfde8);
  Write_benellim3(&DAT_100bce78);
  Write_m4(&DAT_100bd26c);
  Write_mp5sd(&DAT_100bd660);
  Write_mp5k(&DAT_100bda54);
  Write_beretta_akimbo(&DAT_100bde48);
  Write_mk23(&DAT_100be23c);
  Write_mk23akimbo(&DAT_100be630);
  Write_usas12(&DAT_100bea24);
  Write_desert(&DAT_100bee18);
  Write_ak47(&DAT_100bf20c);
  Write_fnh(&DAT_100bf600);
  Write_aug(&DAT_100bf9f4);
  Write_skorpion(&DAT_100c01dc);
  Write_barrett(&DAT_100c05d0);
  Write_pdw(&DAT_100c09c4);
  Write_spas12(&DAT_100c0db8);
  Write_gold(&DAT_100c11ac);
  Write_glock22(&DAT_100c15a0);
  Write_mac10(&DAT_100c1994);
  Write_m61(&DAT_100c1d88);
  FUN_10002e50(&DAT_100c217c);
  Write_mossberg(&DAT_100c2570);
  Write_m16(&DAT_100c2964);
  Write_ruger(&DAT_100c2d58);
  Write_fnhakimbo(&DAT_100c3540);
  Write_bull(&DAT_100c3934);
  Write_m60(&DAT_100c3d28);
  Write_sawedoff(&DAT_100c411c);
  Write_katana(&DAT_100c4510);
  Write_sealknife(&DAT_100c4904);
  compile_ammo_info();
  FUN_100491f0();
  return;
}

/* 10049a10  FUN_10049a10  (26 bytes)
 * bool FUN_10049a10(int param_1)
 * called by: FUN_10049e50, FUN_1004a040, FUN_1004a410, FUN_1004a680
 */
bool __cdecl FUN_10049a10(int param_1)

{
  return (&DAT_100bc208)[param_1 * 0x3f4] == '\x04';
}

/* 10049a30  FUN_10049a30  (26 bytes)
 * bool FUN_10049a30(int param_1)
 * called by: FUN_1004a040, FUN_1004a680
 */
bool __cdecl FUN_10049a30(int param_1)

{
  return (&DAT_100bc208)[param_1 * 0x3f4] == '\x05';
}

/* 10049a50  FUN_10049a50  (286 bytes)
 * undefined FUN_10049a50(float * param_1, float param_2)
 * called by: FUN_1004b400, FUN_1004b8c0
 */
void __thiscall FUN_10049a50(void *this,float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float10 fVar4;
  float local_8;
  
  if (param_2 < 0.0 != (param_2 == 0.0)) {
    return;
  }
  local_8 = 2.0;
  uVar3 = FUN_10042c40(*(int *)((int)this + 0x70));
  if (uVar3 != 0) {
    local_8 = 1.0;
  }
  fVar1 = gpGlobals->time;
  fVar2 = fVar1 - *(float *)((int)this + 0xd94);
  if (0.0 <= fVar2) {
    *param_1 = *(float *)(*(int *)((int)this + 0x70) + 0x6f4) + *param_1;
    fVar4 = (float10)FUN_100551c0(*(int *)((int)this + 0x70));
    fVar4 = (float10)fVar2 / fVar4;
    if (fVar4 < (float10)1.0) {
      if ((float10)1.0 <= fVar4) {
        *(float *)((int)this + 0xd94) = fVar1;
        return;
      }
    }
    else {
      fVar4 = (float10)0.5;
      *(undefined4 *)((int)this + 0xd98) = 0;
    }
    fVar4 = ((float10)1.0 - fVar4) * (float10)local_8 * (float10)param_2 +
            (float10)*(float *)(*(int *)((int)this + 0x70) + 0x6f4);
    if ((float10)0.1 <= fVar4) {
      fVar4 = (float10)0.1;
    }
    *(float *)(*(int *)((int)this + 0x70) + 0x6f4) = (float)fVar4;
    *(float *)((int)this + 0xd94) = fVar1;
    return;
  }
  *(undefined4 *)((int)this + 0xd98) = 0;
  *(float *)((int)this + 0xd94) = fVar1;
  return;
}

/* 10049b80  FUN_10049b80  (280 bytes)
 * undefined FUN_10049b80(float param_1, int param_2, char param_3)
 * called by: FUN_1004b050, FUN_1004b400, FUN_1004b8c0
 */
void __thiscall FUN_10049b80(void *this,float param_1,int param_2,char param_3)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  undefined4 local_8;
  undefined4 uStack_4;
  
  iVar2 = *(int *)(*(int *)((int)this + 0x70) + 0x748);
  if (param_3 == '\0') {
    local_8 = 0;
    uStack_4 = 0x3ff00000;
  }
  else {
    local_8 = 0x9999999a;
    uStack_4 = 0x3fe99999;
  }
  fVar3 = FUN_10066640(iVar2,-0.5,0x3f000000);
  fVar1 = (float)((float10)(double)CONCAT44(uStack_4,local_8) * fVar3);
  FUN_10066640(iVar2 + 1,param_1 * 0.5,(int)param_1);
  fVar3 = FUN_10066640(iVar2 + 2,0.0,0x3f400000);
  if (0.0 <= fVar1) {
    fVar1 = fVar1 + 0.5;
  }
  else {
    fVar1 = fVar1 - 0.5;
  }
  if (((param_2 == 6) || (param_2 == 1)) || (param_2 == 7)) {
    fVar1 = fVar1 - (float)fVar3;
  }
  else if (param_2 == 8) {
    fVar1 = fVar1 + (float)fVar3;
  }
  iVar2 = *(int *)(*(int *)((int)this + 0x70) + 4);
  if ((*(uint *)(iVar2 + 0x1a4) & 0x2000) != 0) {
    *(float *)(iVar2 + 0x68) = *(float *)(iVar2 + 0x68) - param_1;
    iVar2 = *(int *)(*(int *)((int)this + 0x70) + 4);
    *(float *)(iVar2 + 0x6c) = fVar1 * param_1 * 0.65 + *(float *)(iVar2 + 0x6c);
    return;
  }
  return;
}

/* 10049d30  FUN_10049d30  (93 bytes)
 * undefined FUN_10049d30(int param_1)
 * called by: CBasePlayer::StartObserver, CTSGun::Spawn
 */
void __fastcall FUN_10049d30(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x104);
  for (iVar1 = 0x300; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0xc4);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0xd16) = 0;
  puVar2 = (undefined4 *)(param_1 + 0xd18);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0xd48) = 0;
  puVar2 = (undefined4 *)(param_1 + 0xd4c);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

/* 10049e50  FUN_10049e50  (237 bytes)
 * undefined4 FUN_10049e50(uint param_1)
 * called by: FUN_10055c30
 */
undefined4 __thiscall FUN_10049e50(void *this,uint param_1)

{
  uint *puVar1;
  byte bVar2;
  short sVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 0xbc);
  if (iVar5 == 0) {
    return 0;
  }
  if ((*(uint *)(*(int *)((int)this + 0xc0) + 0xd8) & param_1) == 0) {
    return 0;
  }
  if ((*(uint *)(*(int *)((int)this + 0xc0) + 0xdc) & param_1) != 0) {
    return 0;
  }
  if ((param_1 & *(uint *)(iVar5 + 0x10)) != 0) {
    return 0;
  }
  *(uint *)(iVar5 + 0x10) = *(uint *)(iVar5 + 0x10) | param_1;
  bVar4 = FUN_10049a10((uint)*(byte *)((int)this + 0xb8));
  if (bVar4) {
    iVar5 = *(short *)(*(int *)((int)this + 0xc0) + 200) * 0x30;
    *(uint *)(iVar5 + 0x114 + (int)this) = *(uint *)(iVar5 + 0x114 + (int)this) | param_1;
  }
  else {
    sVar3 = *(short *)(*(int *)((int)this + 0xc0) + 0xc6);
    if ((sVar3 != -1) && (iVar5 = sVar3 * 0x30, *(char *)(iVar5 + 0x104 + (int)this) != '\0')) {
      puVar1 = (uint *)((int)this + iVar5 + 0x114);
      *puVar1 = *puVar1 | param_1;
    }
  }
  bVar2 = *(byte *)((int)this + 0xb8);
  *(undefined1 *)((int)this + 0xb8) = 0;
  iVar5 = FUN_1004a4c0(this,(uint)bVar2);
  if (iVar5 != 0) {
    (**(code **)(*(int *)this + 0x104))();
  }
  return 1;
}

/* 10049f40  FUN_10049f40  (98 bytes)
 * undefined4 FUN_10049f40(byte.conflict param_1, int param_2)
 * called by: CTSAmmoPack::WaitTouch, FUN_10055a40, FUN_10066250
 */
undefined4 __thiscall FUN_10049f40(void *this,byte_conflict param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((param_1 < 0x10) && (0 < param_2)) {
    uVar1 = (uint)param_1;
    iVar2 = *(int *)((int)this + uVar1 * 4 + 0xc4);
    if (iVar2 < *(int *)(&DAT_100b1ea4 + uVar1 * 0x38)) {
      iVar2 = iVar2 + param_2;
      *(int *)((int)this + uVar1 * 4 + 0xc4) = iVar2;
      if (*(int *)(&DAT_100b1ea4 + uVar1 * 0x38) < iVar2) {
        *(int *)((int)this + uVar1 * 4 + 0xc4) = *(int *)(&DAT_100b1ea4 + uVar1 * 0x38);
      }
      return 1;
    }
  }
  return 0;
}

/* 10049fb0  FUN_10049fb0  (133 bytes)
 * undefined4 FUN_10049fb0(uint param_1, char param_2)
 * called by: CTSGun::GrenadeIdle, FUN_1004c6c0, FUN_10056080
 */
undefined4 __thiscall FUN_10049fb0(void *this,uint param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((((int)param_1 < 1) || (0x3f < (int)param_1)) ||
     (*(char *)(param_1 * 0x30 + 0x104 + (int)this) == '\0')) {
    return 0;
  }
  puVar2 = (undefined4 *)(param_1 * 0x30 + 0x104 + (int)this);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if ((*(int **)((int)this + 0x70) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)((int)this + 0x70) + 0x94))(), iVar1 == 0)) {
    return 0;
  }
  if (param_1 == *(byte *)((int)this + 0xb8)) {
    if (param_2 != '\0') {
      FUN_1004a410(this,param_1);
      return 1;
    }
    FUN_1004d7a0((int)this);
  }
  return 1;
}

/* 1004a040  FUN_1004a040  (967 bytes)
 * undefined4 FUN_1004a040(int param_1, undefined4 * param_2, uint param_3)
 * called by: CBasePlayer::PickUpWeapon
 */
undefined4 __thiscall FUN_1004a040(void *this,int param_1,undefined4 *param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  char *pcVar10;
  uint uVar11;
  
  if (param_1 < 0) {
    return 0;
  }
  if (0x3f < param_1) {
    return 0;
  }
  iVar7 = param_1 * 0x3f4;
  if (*(char *)(&DAT_100bbea8 + param_1 * 0xfd) == '\0') {
    return 0;
  }
  sVar9 = (short)param_1;
  if (*(char *)((int)this + param_1 * 0x30 + 0x104) == '\0') {
    sVar3 = *(short *)(&DAT_100bbf6e + iVar7);
    if (sVar3 == -1) goto LAB_1004a119;
    if (*(char *)(&DAT_100bbea8 + sVar3 * 0xfd) == '\0') {
      return 0;
    }
    cVar2 = *(char *)(sVar3 * 0x30 + 0x104 + (int)this);
  }
  else {
    if ((&DAT_100bbf7c)[iVar7] != '\0') {
      if (*(int *)(&DAT_100bbecc + iVar7) <= *(int *)((int)this + param_1 * 0x30 + 0x108)) {
        return 0;
      }
      goto LAB_1004a119;
    }
    sVar9 = *(short *)(&DAT_100bbf6e + iVar7);
    if (sVar9 == -1) {
      return 0;
    }
    if (*(char *)(&DAT_100bbea8 + sVar9 * 0xfd) == '\0') {
      return 0;
    }
    cVar2 = *(char *)(sVar9 * 0x30 + 0x104 + (int)this);
  }
  if (cVar2 != '\0') {
    return 0;
  }
LAB_1004a119:
  iVar6 = (int)sVar9;
  pcVar1 = (char *)(iVar6 * 0x30 + 0x104 + (int)this);
  iVar7 = iVar6 * 0x3f4;
  if (((&DAT_100bbf7c)[iVar6 * 0x3f4] != '\0') && (*pcVar1 != '\0')) {
    *(int *)(pcVar1 + 4) = *(int *)(pcVar1 + 4) + 1;
    return 1;
  }
  if (param_2 == (undefined4 *)0x0) {
    *pcVar1 = '\x01';
    pcVar1[1] = (&DAT_100bbeb0)[iVar7];
    pcVar1[0xc] = '\0';
    pcVar1[0xd] = '\0';
    pcVar1[0xe] = '\0';
    pcVar1[0xf] = '\0';
    uVar11 = *(uint *)(&DAT_100bbeb4 + iVar7);
    if ((uVar11 & 1) == 0) {
      if ((uVar11 & 8) == 0) {
        if ((uVar11 & 2) == 0) {
          pcVar1[2] = '\x02';
        }
        else {
          pcVar1[2] = '\x01';
        }
      }
      else {
        pcVar1[2] = '\x03';
      }
    }
    else {
      pcVar1[2] = '\0';
    }
    bVar5 = FUN_10049a10(iVar6);
    if (bVar5) {
      *(undefined4 *)(pcVar1 + 0x1c) =
           *(undefined4 *)(*(short *)(&DAT_100bbf70 + iVar7) * 0x30 + 0x108 + (int)this);
      iVar6 = (&DAT_100bbeac)[*(short *)(&DAT_100bbf70 + iVar7) * 0xfd];
      *(int *)(pcVar1 + 0x20) = iVar6;
      *(int *)(pcVar1 + 4) = *(int *)(pcVar1 + 0x1c) + iVar6;
      uVar11 = *(uint *)(pcVar1 + 0x10) |
               *(uint *)(*(short *)(&DAT_100bbf70 + iVar7) * 0x30 + 0x114 + (int)this) | param_3;
      *(uint *)(pcVar1 + 0x10) = uVar11;
      *(uint *)(*(short *)(&DAT_100bbf70 + iVar7) * 0x30 + 0x114 + (int)this) = uVar11;
      uVar11 = *(uint *)(pcVar1 + 0x14) |
               *(uint *)(*(short *)(&DAT_100bbf70 + iVar7) * 0x30 + 0x118 + (int)this);
      *(uint *)(pcVar1 + 0x14) = uVar11;
      *(uint *)(*(short *)(&DAT_100bbf70 + iVar7) * 0x30 + 0x118 + (int)this) = uVar11;
    }
    else {
      bVar5 = FUN_10049a30(iVar6);
      if (bVar5) {
        *(int *)(pcVar1 + 0x1c) = (int)(&DAT_100bbeac)[iVar6 * 0xfd] / 2;
        *(int *)(pcVar1 + 0x20) = (int)(&DAT_100bbeac)[iVar6 * 0xfd] / 2;
        *(undefined4 *)(pcVar1 + 4) = (&DAT_100bbeac)[iVar6 * 0xfd];
        *(uint *)(pcVar1 + 0x10) = *(uint *)(&DAT_100bbf84 + iVar7) | param_3;
      }
      else {
        *(undefined4 *)(pcVar1 + 4) = (&DAT_100bbeac)[iVar6 * 0xfd];
        *(uint *)(pcVar1 + 0x10) = *(uint *)(&DAT_100bbf84 + iVar7) | param_3;
      }
      pcVar1[0x14] = '\0';
      pcVar1[0x15] = '\0';
      pcVar1[0x16] = '\0';
      pcVar1[0x17] = '\0';
    }
    uVar11 = *(uint *)(pcVar1 + 0x10);
    pcVar1[0x18] = '\0';
    pcVar1[0x19] = '\0';
    pcVar1[0x1a] = '\0';
    pcVar1[0x1b] = '\0';
    pcVar1[0x24] = '\0';
    pcVar1[8] = '\0';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    *(int *)(pcVar1 + 0x28) = iVar7 + 0x100bc112;
    uVar4 = *(uint *)(&DAT_100bbf80 + iVar7);
    *(uint *)(pcVar1 + 0x10) = uVar11 & uVar4;
    if ((uVar11 & uVar4 & 2) != 0) {
      *(uint *)(pcVar1 + 0x14) = *(uint *)(pcVar1 + 0x14) | 2;
    }
    if ((pcVar1[0x10] & 4U) != 0) {
      *(uint *)(pcVar1 + 0x14) = *(uint *)(pcVar1 + 0x14) | 4;
    }
    return 1;
  }
  pcVar10 = pcVar1;
  for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined4 *)pcVar10 = *param_2;
    param_2 = param_2 + 1;
    pcVar10 = pcVar10 + 4;
  }
  *pcVar1 = '\x01';
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  pcVar1[0xc] = '\0';
  pcVar1[0xd] = '\0';
  pcVar1[0xe] = '\0';
  pcVar1[0xf] = '\0';
  bVar5 = FUN_10049a10(iVar6);
  if (bVar5) {
    *(int *)(pcVar1 + 4) =
         *(int *)(pcVar1 + 4) +
         *(int *)(*(short *)(&DAT_100bbf70 + iVar7) * 0x30 + 0x108 + (int)this);
    iVar6 = *(int *)(*(short *)(&DAT_100bbf70 + iVar7) * 0x30 + 0x108 + (int)this);
    *(int *)(pcVar1 + 0x1c) = iVar6;
    *(int *)(pcVar1 + 0x20) = *(int *)(pcVar1 + 4) - iVar6;
    uVar11 = *(uint *)(pcVar1 + 0x10) |
             *(uint *)(*(short *)(&DAT_100bbf70 + iVar7) * 0x30 + 0x114 + (int)this) | param_3;
    *(uint *)(pcVar1 + 0x10) = uVar11;
    *(uint *)(*(short *)(&DAT_100bbf70 + iVar7) * 0x30 + 0x114 + (int)this) = uVar11;
    uVar11 = *(uint *)(pcVar1 + 0x14) |
             *(uint *)(*(short *)(&DAT_100bbf70 + iVar7) * 0x30 + 0x118 + (int)this);
    *(uint *)(pcVar1 + 0x14) = uVar11;
    *(uint *)(*(short *)(&DAT_100bbf70 + iVar7) * 0x30 + 0x118 + (int)this) = uVar11;
    uVar11 = *(uint *)(&DAT_100bbeb4 + iVar7);
    if ((uVar11 & 1) == 0) {
      if ((uVar11 & 8) == 0) {
        if ((uVar11 & 2) == 0) {
          pcVar1[2] = '\x02';
        }
        else {
          pcVar1[2] = '\x01';
        }
      }
      else {
        pcVar1[2] = '\x03';
      }
    }
    else {
      pcVar1[2] = '\0';
    }
  }
  *(uint *)(pcVar1 + 0x10) = *(uint *)(pcVar1 + 0x10) & *(uint *)(&DAT_100bbf80 + iVar7);
  return 1;
}

/* 1004a410  FUN_1004a410  (164 bytes)
 * undefined FUN_1004a410(uint param_1)
 * called by: FUN_10049fb0, FUN_1005ee60
 */
void __thiscall FUN_1004a410(void *this,uint param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *local_c;
  uint local_8;
  
  iVar5 = 0;
  local_c = (char *)((int)this + 0x134);
  local_8 = 0;
  uVar6 = 1;
  do {
    if ((*local_c != '\0') && (param_1 != uVar6)) {
      puVar3 = get_weapon_info(uVar6);
      iVar1 = puVar3[0x34];
      bVar2 = FUN_10049a10(uVar6);
      iVar4 = (bVar2 + 1) * iVar1;
      if (iVar4 - iVar5 != 0 && iVar5 <= iVar4) {
        bVar2 = FUN_10049a10(uVar6);
        iVar5 = (bVar2 + 1) * iVar1;
        local_8 = uVar6;
      }
    }
    uVar6 = uVar6 + 1;
    local_c = local_c + 0x30;
  } while ((int)uVar6 < 0x40);
  iVar5 = FUN_1004a4c0(this,local_8);
  if (iVar5 != 0) {
    (**(code **)(*(int *)this + 0x104))();
  }
  return;
}

/* 1004a4c0  FUN_1004a4c0  (101 bytes)
 * undefined4 FUN_1004a4c0(uint param_1)
 * called by: CBasePlayer::PickUpWeapon, FUN_10049e50, FUN_1004a410, FUN_10056080, pfnClientCommand
 */
undefined4 __thiscall FUN_1004a4c0(void *this,uint param_1)

{
  if ((((param_1 != *(byte *)((int)this + 0xb8)) && (-1 < (int)param_1)) && ((int)param_1 < 0x40))
     && (((*(char *)(param_1 * 0x30 + 0x104 + (int)this) != '\0' &&
          (*(char *)(&DAT_100bbea8 + param_1 * 0xfd) != '\0')) || (param_1 == 0)))) {
    FUN_1004d7a0((int)this);
    *(char *)((int)this + 0xb8) = (char)param_1;
    return 1;
  }
  return 0;
}

/* 1004a680  FUN_1004a680  (60 bytes)
 * uint FUN_1004a680(int param_1)
 * called by: CBasePlayer::UpdateClientData
 */
uint __fastcall FUN_1004a680(int param_1)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  
  if (*(int *)(param_1 + 0xbc) == 0) {
    return 0;
  }
  uVar2 = *(uint *)(*(int *)(param_1 + 0xbc) + 0x14);
  bVar1 = *(byte *)(param_1 + 0xb8);
  bVar3 = FUN_10049a10((uint)bVar1);
  if ((!bVar3) && (bVar3 = FUN_10049a30((uint)bVar1), !bVar3)) {
    return uVar2;
  }
  return uVar2 | 0x40;
}

/* 1004a6c0  FUN_1004a6c0  (195 bytes)
 * undefined FUN_1004a6c0(int param_1)
 * called by: pfnClientCommand
 */
void __fastcall FUN_1004a6c0(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  void *this;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar4 = *(int *)(param_1 + 0xbc);
  if (iVar4 == 0) {
    return;
  }
  uVar3 = *(uint *)(iVar4 + 0x10);
  if (((uVar3 & 2) == 0) || ((uVar3 & 4) == 0)) {
    if ((uVar3 & 2) != 0) {
      uVar3 = *(uint *)(iVar4 + 0x14);
      if ((uVar3 & 2) != 0) {
        *(undefined4 *)(iVar4 + 0x14) = 0;
        goto LAB_1004a731;
      }
      goto LAB_1004a708;
    }
    if ((uVar3 & 4) == 0) {
      *(undefined4 *)(iVar4 + 0x14) = 0;
      return;
    }
    if ((*(uint *)(iVar4 + 0x14) & 4) != 0) {
      *(undefined4 *)(iVar4 + 0x14) = 0;
      goto LAB_1004a731;
    }
    uVar3 = *(uint *)(iVar4 + 0x14) | 4;
  }
  else {
    uVar3 = *(uint *)(iVar4 + 0x14);
    if (((uVar3 & 2) != 0) && ((uVar3 & 4) != 0)) {
      *(undefined4 *)(iVar4 + 0x14) = 0;
      goto LAB_1004a731;
    }
    if ((uVar3 & 2) != 0) {
      *(uint *)(iVar4 + 0x14) = uVar3 | 4;
      puVar1 = (uint *)(*(int *)(param_1 + 0xbc) + 0x14);
      *puVar1 = *puVar1 & 0xfffffffd;
      goto LAB_1004a731;
    }
LAB_1004a708:
    uVar3 = uVar3 | 2;
  }
  *(uint *)(iVar4 + 0x14) = uVar3;
LAB_1004a731:
  uVar2 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x208);
  iVar4 = (*g_engfuncs.pfnRandomLong)(0,3);
  iVar4 = iVar4 + 0x62;
  uVar7 = 0;
  uVar6 = 0x3fa00000;
  fVar5 = (float10)(*g_engfuncs.pfnRandomFloat)(0.92,1.0);
  EMIT_SOUND_DYN(this,uVar2,3,s_weapons_switch_wav_10098798,(float)fVar5,uVar6,uVar7,iVar4);
  return;
}

/* 1004a790  FUN_1004a790  (97 bytes)
 * undefined FUN_1004a790(int param_1)
 * called by: pfnClientCommand
 */
void __fastcall FUN_1004a790(int param_1)

{
  bool bVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xbc) != 0) {
    iVar2 = *(byte *)(*(int *)(param_1 + 0xbc) + 2) + 1;
    bVar1 = false;
    do {
      if ((*(uint *)(*(int *)(param_1 + 0xc0) + 0xc) & 1 << ((byte)iVar2 & 0x1f)) != 0) {
        *(byte *)(*(int *)(param_1 + 0xbc) + 2) = (byte)iVar2;
        bVar1 = true;
      }
      iVar2 = iVar2 + 1;
      if (5 < iVar2) {
        iVar2 = 0;
      }
    } while (!bVar1);
    *(char *)(*(byte *)(param_1 + 0xb8) + 0x41e + *(int *)(param_1 + 0x70)) =
         *(char *)(*(int *)(param_1 + 0xbc) + 2) + '\x01';
  }
  return;
}

/* 1004ab60  FUN_1004ab60  (142 bytes)
 * undefined FUN_1004ab60(int param_1)
 * called by: FUN_1004ac20, FUN_1004b8c0
 */
void __fastcall FUN_1004ab60(int param_1)

{
  undefined2 extraout_var;
  undefined4 uVar1;
  undefined4 uVar2;
  float10 fVar3;
  float10 fVar4;
  undefined4 uVar5;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  undefined1 auStack_30 [12];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_10 = 0;
  uStack_14 = 0;
  uStack_18 = 0;
  uStack_1c = 0;
  uStack_20 = 0;
  uStack_24 = 0;
  uStack_38 = 0x1004ab81;
  FUN_1004abf0(auStack_30,&DAT_1009f4a8);
  FUN_1004abf0(auStack_3c,&DAT_1009f4a8);
  uVar1 = CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0xd08));
  uVar5 = 0;
  uVar2 = FUN_1004ac10(*(int *)(param_1 + 0x70));
  FUN_10048ff0(*(int *)(param_1 + 0x70),1,uVar2,uVar1,uVar5);
  uStack_10 = 0x1004abb9;
  fVar3 = (float10)FUN_100551c0(*(int *)(param_1 + 0x70));
  uStack_10 = 0x1004abc8;
  fVar4 = FUN_10066590();
  fVar4 = fVar4 + (float10)(double)(fVar3 * (float10)0.1);
  *(float *)(param_1 + 0x90) = (float)fVar4;
  *(float *)(param_1 + 0x8c) = (float)fVar4;
  uStack_10 = 0x1004abdd;
  fVar3 = FUN_10066590();
  *(float *)(param_1 + 0x98) = (float)(fVar3 + (float10)0.5);
  return;
}

/* 1004abf0  FUN_1004abf0  (25 bytes)
 * undefined FUN_1004abf0(undefined4 * param_1)
 * called by: CTSGun::AlternateAttack, CTSGun::Reload, FUN_1004ab60, FUN_1004b050, FUN_1004b400, FUN_1004b8c0, FUN_1004c090, FUN_1004c6c0, FUN_1004de10
 */
void __thiscall FUN_1004abf0(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return;
}

/* 1004ac10  FUN_1004ac10  (10 bytes)
 * undefined4 FUN_1004ac10(int param_1)
 * called by: CTSGun::AlternateAttack, CTSGun::Reload, FUN_1004ab60, FUN_1004b050, FUN_1004b400, FUN_1004b8c0, FUN_1004c090, FUN_1004c6c0, FUN_1004de10
 */
undefined4 __fastcall FUN_1004ac10(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
}

/* 1004ac20  FUN_1004ac20  (268 bytes)
 * undefined FUN_1004ac20(void * param_1)
 * called by: CTSGun::PrimaryAttack, CTSGun::SecondaryAttack, CTSGun::WeaponIdle
 */
void __fastcall FUN_1004ac20(void *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)((int)param_1 + 0xbc);
  if (iVar2 != 0) {
    if (*(int *)(*(int *)(*(int *)((int)param_1 + 0x70) + 4) + 0x1c0) == 3) {
      FUN_1004ab60((int)param_1);
      return;
    }
    if ((*(int *)(iVar2 + 4) < 1) &&
       (((*(char *)(iVar2 + 0x24) == '\0' || (*(char *)(iVar2 + 2) != '\x03')) ||
        (*(char *)(*(int *)((int)param_1 + 0xc0) + 0x360) != '\x01')))) {
      FUN_1004ab60((int)param_1);
      return;
    }
    DAT_100b1df8 = -1;
    FUN_10066df0();
    cVar1 = *(char *)(*(int *)((int)param_1 + 0xc0) + 0x360);
    if ((cVar1 != '\x04') && (cVar1 != '\x05')) {
      if (cVar1 != '\x01') {
        FUN_1004b400(param_1);
        DAT_100b1df8 = 0;
        CTSAnimation::Animate
                  ((CTSAnimation *)(*(int **)((int)param_1 + 0x70) + 0x9d),
                   *(int **)((int)param_1 + 0x70),0);
        return;
      }
      FUN_1004b050(param_1);
      DAT_100b1df8 = 0;
      CTSAnimation::Animate
                ((CTSAnimation *)(*(int **)((int)param_1 + 0x70) + 0x9d),
                 *(int **)((int)param_1 + 0x70),0);
      return;
    }
    uVar3 = FUN_1004b8c0(param_1);
    if ((char)uVar3 != '\0') {
      DAT_100b1df8 = (*(char *)(*(int *)((int)param_1 + 0xbc) + 0x24) != '\0') + 8;
    }
    if (-1 < DAT_100b1df8) {
      CTSAnimation::Animate
                ((CTSAnimation *)(*(int **)((int)param_1 + 0x70) + 0x9d),
                 *(int **)((int)param_1 + 0x70),DAT_100b1df8);
    }
  }
  return;
}

/* 1004b020  FUN_1004b020  (1 bytes)
 * undefined FUN_1004b020()
 */
void FUN_1004b020(void)

{
  return;
}

/* 1004b030  FUN_1004b030  (1 bytes)
 * undefined FUN_1004b030()
 */
void FUN_1004b030(void)

{
  return;
}

/* 1004b040  FUN_1004b040  (1 bytes)
 * undefined FUN_1004b040()
 */
void FUN_1004b040(void)

{
  return;
}

/* 1004b050  FUN_1004b050  (887 bytes)
 * undefined FUN_1004b050(void * param_1)
 * called by: FUN_1004ac20
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1004b050(void *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined2 extraout_var;
  undefined4 uVar5;
  uint uVar6;
  undefined2 extraout_var_00;
  int iVar7;
  float10 fVar8;
  float in_stack_ffffffb0;
  undefined4 uVar9;
  float fVar10;
  undefined *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float in_stack_ffffffc8;
  float in_stack_ffffffcc;
  float in_stack_ffffffd0;
  float fVar15;
  int iVar16;
  
  if ((DAT_100b1e8c & 1) == 0) {
    DAT_100b1e8c = DAT_100b1e8c | 1;
    FUN_1006ee3b(FUN_1004b3f0);
  }
  if ((DAT_100b1e8c & 2) == 0) {
    DAT_100b1e8c = DAT_100b1e8c | 2;
    FUN_1006ee3b(FUN_1004b3e0);
  }
  if ((DAT_100b1e8c & 4) == 0) {
    DAT_100b1e8c = DAT_100b1e8c | 4;
    FUN_1006ee3b(FUN_1004b3d0);
  }
  iVar7 = *(int *)((int)param_1 + 0xbc);
  if (*(int *)(iVar7 + 8) != 0) {
    *(undefined4 *)(iVar7 + 8) = 2;
    return;
  }
  if ((*(char *)(iVar7 + 2) != '\x03') || (DAT_100b1ddd = '\x01', *(char *)(iVar7 + 0x24) == '\0'))
  {
    DAT_100b1ddd = '\0';
  }
  if (*(char *)(*(int *)((int)param_1 + 0xbc) + 2) == '\x01') {
    _DAT_100b2244 = 0.1;
  }
  else {
    uVar2 = FUN_10042c40(*(int *)((int)param_1 + 0x70));
    if (uVar2 == 0) {
      _DAT_100b2244 = 1.0;
    }
    else {
      _DAT_100b2244 = 0.5;
    }
    _DAT_100b2244 = *(float *)(*(int *)((int)param_1 + 0xc0) + 0x18) * _DAT_100b2244;
  }
  uVar2 = FUN_10042c10(*(int *)((int)param_1 + 0x70));
  if (uVar2 == 0) {
    fVar8 = (float10)FUN_100551c0(*(int *)((int)param_1 + 0x70));
    fVar8 = fVar8 * (float10)_DAT_100b2244;
  }
  else {
    fVar8 = (float10)_DAT_100b2244 * (float10)6.6666665;
  }
  _DAT_100b2244 = (float)fVar8;
  fVar8 = FUN_10066590();
  *(float *)((int)param_1 + 0x8c) = (float)(fVar8 + (float10)_DAT_100b2244);
  fVar8 = FUN_10066590();
  *(float *)((int)param_1 + 0x98) = (float)(fVar8 + (float10)2.0);
  if (*(int *)(*(int *)((int)param_1 + 0xbc) + 4) < 1) {
    if (DAT_100b1ddd == '\0') {
      return;
    }
  }
  else if ((DAT_100b1ddd == '\0') &&
          (uVar2 = FUN_10042c20(*(int *)((int)param_1 + 0x70)), uVar2 == 0)) {
    piVar1 = (int *)(*(int *)((int)param_1 + 0xbc) + 4);
    *piVar1 = *piVar1 + -1;
  }
  puVar3 = (undefined4 *)(**(code **)(**(int **)((int)param_1 + 0x70) + 0x144))();
  _DAT_100b1dd0 = *puVar3;
  _DAT_100b1dd4 = puVar3[1];
  _DAT_100b1dd8 = puVar3[2];
  _DAT_100b1e00 = gpGlobals->v_forward[0];
  _DAT_100b1e04 = gpGlobals->v_forward[1];
  _DAT_100b1e08 = gpGlobals->v_forward[2];
  if (DAT_100b1ddd == '\0') {
    iVar7 = *(int *)((int)param_1 + 0xc0);
    iVar16 = *(int *)(*(int *)((int)param_1 + 0x70) + 0x748);
    uVar6 = (uint)*(byte *)(iVar7 + 8);
    uVar2 = *(uint *)(iVar7 + 0x20);
    fVar15 = *(float *)(iVar7 + 0x1c);
    fVar12 = *(float *)(iVar7 + 0x28);
    fVar13 = fVar12;
    fVar14 = fVar12;
    FUN_1000c5f0(&stack0xffffffc8,fVar12,fVar12,fVar12);
    puVar11 = &DAT_100b1e00;
    fVar10 = 2.6169834e-29;
    FUN_1000a540(&stack0xffffffbc,(undefined4 *)&DAT_100b1e00);
    FUN_1000a540(&stack0xffffffb0,(undefined4 *)&DAT_100b1dd0);
    puVar3 = (undefined4 *)
             CBasePlayer::ShootBulletsPlayer
                       (*(CBasePlayer **)((int)param_1 + 0x70),(float *)&stack0xfffffff0,
                        *(byte_conflict *)(*(int *)((int)param_1 + 0xc0) + 0x24),in_stack_ffffffb0,
                        fVar10,(float)puVar11,fVar12,fVar13,fVar14,in_stack_ffffffc8,
                        in_stack_ffffffcc,in_stack_ffffffd0,fVar15,uVar2,uVar6,iVar16);
    _DAT_100b1e80 = *puVar3;
    _DAT_100b1e84 = puVar3[1];
    _DAT_100b1e88 = puVar3[2];
    iVar7 = *(int *)((int)param_1 + 0xc0);
    if (*(char *)(iVar7 + 0x38) != '\0') {
      if (*(char *)(*(int *)((int)param_1 + 0xbc) + 2) == '\x01') {
        fVar15 = 1.3;
      }
      else {
        fVar15 = 1.0;
      }
      FUN_10049b80(param_1,fVar15 * *(float *)(iVar7 + 0x30),(uint)*(byte *)(iVar7 + 0x360),'\0');
    }
    if (DAT_100b1ddd == '\0') {
      iVar7 = *(int *)((int)param_1 + 0x70);
      FUN_1004abf0(&stack0xffffffc0,&DAT_1009f4a8);
      FUN_1004abf0(&stack0xffffffb4,&DAT_1009f4a8);
      uVar5 = CONCAT22(extraout_var_00,*(undefined2 *)((int)param_1 + 0xd04));
      goto LAB_1004b39c;
    }
  }
  iVar7 = *(int *)((int)param_1 + 0x70);
  FUN_1004abf0(&stack0xffffffc0,&DAT_1009f4a8);
  FUN_1004abf0(&stack0xffffffb4,&DAT_1009f4a8);
  uVar5 = CONCAT22(extraout_var,*(undefined2 *)((int)param_1 + 0xd0a));
LAB_1004b39c:
  uVar9 = 0;
  uVar4 = FUN_1004ac10(iVar7);
  FUN_10048ff0(iVar7,1,uVar4,uVar5,uVar9);
  *(bool *)(*(int *)((int)param_1 + 0xbc) + 0x24) =
       *(char *)(*(int *)((int)param_1 + 0xbc) + 0x24) == '\0';
  return;
}

/* 1004b3d0  FUN_1004b3d0  (1 bytes)
 * undefined FUN_1004b3d0()
 */
void FUN_1004b3d0(void)

{
  return;
}

/* 1004b3e0  FUN_1004b3e0  (1 bytes)
 * undefined FUN_1004b3e0()
 */
void FUN_1004b3e0(void)

{
  return;
}

/* 1004b3f0  FUN_1004b3f0  (1 bytes)
 * undefined FUN_1004b3f0()
 */
void FUN_1004b3f0(void)

{
  return;
}

/* 1004b400  FUN_1004b400  (1168 bytes)
 * undefined FUN_1004b400(void * param_1)
 * called by: FUN_1004ac20
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1004b400(void *param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined2 extraout_var;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  float10 fVar9;
  float in_stack_ffffffac;
  undefined4 uVar10;
  float fVar11;
  undefined *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float in_stack_ffffffc4;
  float in_stack_ffffffc8;
  float in_stack_ffffffcc;
  float fVar16;
  int iVar17;
  
  if ((DAT_100b1db0 & 0x100) == 0) {
    DAT_100b1db0 = DAT_100b1db0 | 0x100;
    FUN_1006ee3b(FUN_1004b8b0);
  }
  if ((DAT_100b1db0 & 0x200) == 0) {
    DAT_100b1db0 = DAT_100b1db0 | 0x200;
    FUN_1006ee3b(FUN_1004b8a0);
  }
  if ((DAT_100b1db0 & 0x400) == 0) {
    DAT_100b1db0 = DAT_100b1db0 | 0x400;
    _DAT_100b1db4 = DAT_1009f4a8;
    _DAT_100b1db8 = DAT_1009f4ac;
    _DAT_100b1dbc = DAT_1009f4b0;
    FUN_1006ee3b(FUN_1004b890);
  }
  uVar2 = FUN_10042c20(*(int *)((int)param_1 + 0x70));
  if (uVar2 == 0) {
    *(int *)(*(int *)((int)param_1 + 0xbc) + 4) = *(int *)(*(int *)((int)param_1 + 0xbc) + 4) + -1;
    sVar1 = *(short *)(*(int *)((int)param_1 + 0xc0) + 0xc6);
    if (sVar1 != -1) {
      iVar8 = sVar1 * 0x30;
      *(int *)(iVar8 + 0x108 + (int)param_1) = *(int *)(iVar8 + 0x108 + (int)param_1) + -1;
      *(undefined4 *)((*(short *)(*(int *)((int)param_1 + 0xc0) + 0xc6) + 6) * 0x30 + (int)param_1)
           = *(undefined4 *)(*(int *)((int)param_1 + 0xbc) + 4);
      iVar8 = *(short *)(*(int *)((int)param_1 + 0xc0) + 0xc6) * 0x30;
      if (*(int *)(iVar8 + 0x108 + (int)param_1) < 0) {
        *(undefined4 *)(iVar8 + 0x108 + (int)param_1) = 0;
      }
    }
  }
  puVar3 = (undefined4 *)(**(code **)(**(int **)((int)param_1 + 0x70) + 0x144))();
  _DAT_100b1de0 = *puVar3;
  _DAT_100b1de4 = puVar3[1];
  _DAT_100b1de8 = puVar3[2];
  _DAT_100b1e0c = gpGlobals->v_forward[0];
  _DAT_100b1e10 = gpGlobals->v_forward[1];
  _DAT_100b1e14 = gpGlobals->v_forward[2];
  DAT_100b1dc4 = *(float *)(*(int *)((int)param_1 + 0xc0) + 0x28);
  if (((*(byte *)(*(int *)((int)param_1 + 0xbc) + 0x10) & 1) != 0) &&
     ((*(byte *)(*(int *)((int)param_1 + 0xc0) + 0xdc) & 1) == 0)) {
    DAT_100b1dc4 = DAT_100b1dc4 * 1.2;
  }
  if ((*(char *)((int)param_1 + 0xb8) == ' ') || (*(char *)((int)param_1 + 0xb8) == '\x12')) {
    iVar8 = *(int *)(*(int *)((int)param_1 + 0x70) + 4);
    if (80.0 < SQRT(*(float *)(iVar8 + 0x28) * *(float *)(iVar8 + 0x28) +
                    *(float *)(iVar8 + 0x24) * *(float *)(iVar8 + 0x24) +
                    *(float *)(iVar8 + 0x20) * *(float *)(iVar8 + 0x20))) {
      *(undefined4 *)(*(int *)((int)param_1 + 0x70) + 0x6f4) = 0x3dcccccd;
    }
  }
  if (*(char *)(*(int *)((int)param_1 + 0xc0) + 0x2c) != '\0') {
    FUN_10049a50(param_1,&DAT_100b1dc4,*(float *)(*(int *)((int)param_1 + 0xc0) + 0x34));
  }
  if (((*(byte *)(*(int *)((int)param_1 + 0xbc) + 0x10) & 1) == 0) ||
     ((*(byte *)(*(int *)((int)param_1 + 0xc0) + 0xdc) & 1) != 0)) {
    fVar16 = 1.0;
  }
  else {
    fVar16 = 0.8;
  }
  iVar8 = *(int *)((int)param_1 + 0xc0);
  iVar17 = *(int *)(*(int *)((int)param_1 + 0x70) + 0x748);
  uVar6 = (uint)*(byte *)(iVar8 + 8);
  uVar2 = *(uint *)(iVar8 + 0x20);
  fVar16 = fVar16 * *(float *)(iVar8 + 0x1c);
  fVar13 = DAT_100b1dc4;
  fVar14 = DAT_100b1dc4;
  fVar15 = DAT_100b1dc4;
  FUN_1000c5f0(&stack0xffffffc4,DAT_100b1dc4,DAT_100b1dc4,DAT_100b1dc4);
  puVar12 = &DAT_100b1e0c;
  fVar11 = 2.6173036e-29;
  FUN_1000a540(&stack0xffffffb8,(undefined4 *)&DAT_100b1e0c);
  FUN_1000a540(&stack0xffffffac,(undefined4 *)&DAT_100b1de0);
  puVar3 = (undefined4 *)
           CBasePlayer::ShootBulletsPlayer
                     (*(CBasePlayer **)((int)param_1 + 0x70),(float *)&stack0xfffffff0,
                      *(byte_conflict *)(*(int *)((int)param_1 + 0xc0) + 0x24),in_stack_ffffffac,
                      fVar11,(float)puVar12,fVar13,fVar14,fVar15,in_stack_ffffffc4,in_stack_ffffffc8
                      ,in_stack_ffffffcc,fVar16,uVar2,uVar6,iVar17);
  _DAT_100b1db4 = *puVar3;
  _DAT_100b1db8 = puVar3[1];
  _DAT_100b1dbc = puVar3[2];
  iVar8 = *(int *)((int)param_1 + 0xc0);
  if (((*(byte *)(iVar8 + 0x360) == 7) || (*(char *)((int)param_1 + 0xb8) == '\x1f')) ||
     (*(char *)((int)param_1 + 0xb8) == '!')) {
    if (((*(byte *)(*(int *)((int)param_1 + 0xbc) + 0x10) & 1) == 0) ||
       ((*(byte *)(iVar8 + 0xdc) & 1) != 0)) {
      cVar7 = '\0';
    }
    else {
      cVar7 = '\x01';
    }
  }
  else {
    if (*(char *)(iVar8 + 0x38) == '\0') goto LAB_1004b73e;
    if (((*(byte *)(*(int *)((int)param_1 + 0xbc) + 0x10) & 1) == 0) ||
       ((*(byte *)(iVar8 + 0xdc) & 1) != 0)) {
      cVar7 = '\0';
    }
    else {
      cVar7 = '\x01';
    }
  }
  FUN_10049b80(param_1,*(float *)(iVar8 + 0x30),(uint)*(byte *)(iVar8 + 0x360),cVar7);
LAB_1004b73e:
  DAT_100b1db0 = CONCAT31(DAT_100b1db0._1_3_,*(int *)(*(int *)((int)param_1 + 0xbc) + 4) == 0);
  iVar8 = *(int *)((int)param_1 + 0x70);
  FUN_1004abf0(&stack0xffffffbc,&DAT_1009f4a8);
  FUN_1004abf0(&stack0xffffffb0,&DAT_1009f4a8);
  uVar4 = CONCAT22(extraout_var,*(undefined2 *)((int)param_1 + 0xd04));
  uVar10 = 0;
  uVar5 = FUN_1004ac10(iVar8);
  FUN_10048ff0(iVar8,1,uVar5,uVar4,uVar10);
  cVar7 = *(char *)(*(int *)((int)param_1 + 0xbc) + 2);
  if (cVar7 == '\x02') {
    if (*(int *)(*(int *)((int)param_1 + 0xbc) + 8) == 1) {
      _DAT_100b1da0 = 0.2;
    }
    else {
      _DAT_100b1da0 = 0.03;
    }
  }
  else if (cVar7 == '\x01') {
    _DAT_100b1da0 = *(float *)(*(int *)((int)param_1 + 0xc0) + 0x18);
  }
  else {
    uVar2 = FUN_10042c40(*(int *)((int)param_1 + 0x70));
    if (uVar2 == 0) {
      _DAT_100b1da0 = 1.0;
    }
    else {
      _DAT_100b1da0 = 0.5;
    }
    _DAT_100b1da0 = *(float *)(*(int *)((int)param_1 + 0xc0) + 0x18) * _DAT_100b1da0;
  }
  uVar2 = FUN_10042c10(*(int *)((int)param_1 + 0x70));
  if (uVar2 == 0) {
    fVar9 = (float10)FUN_100551c0(*(int *)((int)param_1 + 0x70));
    fVar9 = fVar9 * (float10)_DAT_100b1da0;
  }
  else {
    fVar9 = (float10)_DAT_100b1da0 * (float10)6.6666665;
  }
  _DAT_100b1da0 = (float)fVar9;
  fVar9 = FUN_10066590();
  *(float *)((int)param_1 + 0x8c) = (float)(fVar9 + (float10)_DAT_100b1da0);
  fVar9 = FUN_10066590();
  *(float *)((int)param_1 + 0x98) = (float)(fVar9 + (float10)2.0);
  return;
}

/* 1004b890  FUN_1004b890  (1 bytes)
 * undefined FUN_1004b890()
 */
void FUN_1004b890(void)

{
  return;
}

/* 1004b8a0  FUN_1004b8a0  (1 bytes)
 * undefined FUN_1004b8a0()
 */
void FUN_1004b8a0(void)

{
  return;
}

/* 1004b8b0  FUN_1004b8b0  (1 bytes)
 * undefined FUN_1004b8b0()
 */
void FUN_1004b8b0(void)

{
  return;
}

/* 1004b8c0  FUN_1004b8c0  (1835 bytes)
 * undefined4 FUN_1004b8c0(void * param_1)
 * called by: FUN_1004ac20
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_1004b8c0(void *param_1)

{
  byte_conflict bVar1;
  undefined2 uVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  float *pfVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 extraout_EAX;
  uint uVar10;
  undefined4 extraout_EDX;
  int iVar11;
  undefined4 unaff_EBP;
  undefined4 uVar12;
  float10 fVar13;
  float10 fVar14;
  float in_stack_ffffff88;
  undefined4 uVar15;
  float in_stack_ffffff8c;
  float fVar16;
  undefined *puVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float in_stack_ffffffa0;
  float in_stack_ffffffa4;
  float in_stack_ffffffa8;
  float in_stack_ffffffac;
  float fVar21;
  float local_20;
  float local_1c;
  float local_14;
  float local_10 [4];
  
  if ((DAT_100b222c & 1) == 0) {
    DAT_100b222c = DAT_100b222c | 1;
    FUN_1006ee3b(FUN_1004c010);
  }
  if ((DAT_100b222c & 2) == 0) {
    DAT_100b222c = DAT_100b222c | 2;
    FUN_1006ee3b(FUN_1004c000);
  }
  if ((DAT_100b222c & 4) == 0) {
    DAT_100b222c = DAT_100b222c | 4;
    FUN_1006ee3b(FUN_1004bff0);
  }
  iVar11 = *(int *)((int)param_1 + 0xbc);
  cVar5 = *(char *)(iVar11 + 2);
  if ((cVar5 == '\x05') || (cVar5 == '\x04')) {
    bVar3 = true;
    if (cVar5 == '\x05') {
      uVar6 = *(uint *)(*(int *)(*(int *)((int)param_1 + 0x70) + 4) + 0x180);
    }
    else {
      uVar6 = *(uint *)(*(int *)((int)param_1 + 0x70) + 0x770);
    }
    if (((uVar6 & 1) == 0) || ((uVar6 & 0x800) == 0)) goto LAB_1004b965;
LAB_1004b96e:
    bVar4 = true;
  }
  else {
    bVar3 = false;
LAB_1004b965:
    bVar4 = false;
    if (cVar5 == '\0') goto LAB_1004b96e;
  }
  if ((!bVar3) || (bVar4)) {
    *(bool *)(iVar11 + 0x24) = *(char *)(iVar11 + 0x24) == '\0';
    if (*(int *)(*(int *)((int)param_1 + 0xbc) + 0x20) < 1) {
      bVar4 = false;
      *(undefined1 *)(*(int *)((int)param_1 + 0xbc) + 0x24) = 1;
    }
    if (*(int *)(*(int *)((int)param_1 + 0xbc) + 0x1c) < 1) {
      bVar4 = false;
      *(undefined1 *)(*(int *)((int)param_1 + 0xbc) + 0x24) = 0;
    }
  }
  else {
    if ((*(byte *)(*(int *)(*(int *)((int)param_1 + 0x70) + 4) + 0x180) & 1) != 0) {
      if (*(int *)(iVar11 + 0x20) < 1) goto LAB_1004b9bd;
      *(undefined1 *)(iVar11 + 0x24) = 0;
    }
    if ((*(uint *)(*(int *)(*(int *)((int)param_1 + 0x70) + 4) + 0x180) & 0x800) != 0) {
      if (*(int *)(*(int *)((int)param_1 + 0xbc) + 0x1c) < 1) {
LAB_1004b9bd:
        uVar6 = FUN_1004ab60((int)param_1);
        return uVar6 & 0xffffff00;
      }
      *(undefined1 *)(*(int *)((int)param_1 + 0xbc) + 0x24) = 1;
    }
  }
  uVar6 = FUN_10042c20(*(int *)((int)param_1 + 0x70));
  if (uVar6 != 0) goto LAB_1004babb;
  iVar11 = *(int *)((int)param_1 + 0xbc);
  if (bVar4) {
    *(int *)(iVar11 + 4) = *(int *)(iVar11 + 4) + -2;
    *(int *)(*(int *)((int)param_1 + 0xbc) + 0x1c) =
         *(int *)(*(int *)((int)param_1 + 0xbc) + 0x1c) + -1;
    iVar11 = *(int *)((int)param_1 + 0xbc);
LAB_1004ba43:
    *(int *)(iVar11 + 0x20) = *(int *)(iVar11 + 0x20) + -1;
  }
  else {
    *(int *)(iVar11 + 4) = *(int *)(iVar11 + 4) + -1;
    iVar11 = *(int *)((int)param_1 + 0xbc);
    if (*(char *)(iVar11 + 0x24) == '\0') goto LAB_1004ba43;
    *(int *)(iVar11 + 0x1c) = *(int *)(iVar11 + 0x1c) + -1;
  }
  if (*(int *)(*(int *)((int)param_1 + 0xbc) + 4) < 0) {
    *(undefined4 *)(*(int *)((int)param_1 + 0xbc) + 4) = 0;
  }
  if (*(int *)(*(int *)((int)param_1 + 0xbc) + 0x1c) < 0) {
    *(undefined4 *)(*(int *)((int)param_1 + 0xbc) + 0x1c) = 0;
  }
  if (*(int *)(*(int *)((int)param_1 + 0xbc) + 0x20) < 0) {
    *(undefined4 *)(*(int *)((int)param_1 + 0xbc) + 0x20) = 0;
  }
  if (*(char *)(*(int *)((int)param_1 + 0xc0) + 0x360) == '\x04') {
    *(undefined4 *)(*(short *)(*(int *)((int)param_1 + 0xc0) + 200) * 0x30 + 0x108 + (int)param_1) =
         *(undefined4 *)(*(int *)((int)param_1 + 0xbc) + 0x1c);
  }
LAB_1004babb:
  DAT_100b1e58 = *(float *)(*(int *)((int)param_1 + 0xc0) + 0x28);
  if (((*(byte *)(*(int *)((int)param_1 + 0xbc) + 0x10) & 1) != 0) &&
     ((*(byte *)(*(int *)((int)param_1 + 0xc0) + 0xdc) & 1) == 0)) {
    DAT_100b1e58 = DAT_100b1e58 * 1.2;
  }
  if (*(char *)(*(int *)((int)param_1 + 0xc0) + 0x2c) != '\0') {
    if (bVar4) {
      fVar18 = 2.0;
    }
    else {
      fVar18 = 1.0;
    }
    FUN_10049a50(param_1,&DAT_100b1e58,fVar18 * *(float *)(*(int *)((int)param_1 + 0xc0) + 0x34));
  }
  if (((*(byte *)(*(int *)((int)param_1 + 0xbc) + 0x10) & 1) == 0) ||
     ((*(byte *)(*(int *)((int)param_1 + 0xc0) + 0xdc) & 1) != 0)) {
    fVar18 = 1.0;
  }
  else {
    fVar18 = 0.8;
  }
  DAT_100b1dc8 = *(float *)(*(int *)((int)param_1 + 0xc0) + 0x1c) * fVar18;
  _DAT_100b221c = gpGlobals->v_forward[0];
  _DAT_100b2220 = gpGlobals->v_forward[1];
  _DAT_100b2224 = gpGlobals->v_forward[2];
  if (bVar4) {
    fVar18 = (float)((uint)(*(char *)(*(int *)((int)param_1 + 0xbc) + 0x24) == '\0') * 8 + -4);
    fVar20 = (float)(int)fVar18;
    fVar19 = gpGlobals->v_right[0];
    fVar21 = fVar20 * gpGlobals->v_right[1];
    pfVar7 = (float *)(**(code **)(**(int **)((int)param_1 + 0x70) + 0x144))();
    _DAT_100b1e74 = fVar18 + *pfVar7;
    _DAT_100b1e78 = fVar20 * fVar19 + pfVar7[1];
    _DAT_100b1e7c = fVar21 + pfVar7[2];
    iVar11 = *(int *)(*(int *)((int)param_1 + 0x70) + 0x748);
    uVar10 = (uint)*(byte *)(*(int *)((int)param_1 + 0xc0) + 8);
    uVar6 = *(uint *)(*(int *)((int)param_1 + 0xc0) + 0x20);
    fVar18 = DAT_100b1e58;
    fVar19 = DAT_100b1e58;
    in_stack_ffffffa0 = DAT_100b1e58;
    fVar20 = DAT_100b1dc8;
    local_14 = _DAT_100b1e7c;
    FUN_1000c5f0(&stack0xffffffa4,DAT_100b1e58,DAT_100b1e58,DAT_100b1e58);
    puVar17 = &DAT_100b221c;
    fVar16 = 2.6177493e-29;
    FUN_1000a540(&stack0xffffff98,(undefined4 *)&DAT_100b221c);
    FUN_1000a540(&stack0xffffff8c,(undefined4 *)&DAT_100b1e74);
    bVar1 = *(byte_conflict *)(*(int *)((int)param_1 + 0xc0) + 0x24);
    in_stack_ffffff88 = (float)CONCAT31((int3)((uint)extraout_EDX >> 8),bVar1);
    puVar8 = (undefined4 *)
             CBasePlayer::ShootBulletsPlayer
                       (*(CBasePlayer **)((int)param_1 + 0x70),local_10,bVar1,in_stack_ffffff8c,
                        fVar16,(float)puVar17,fVar18,fVar19,in_stack_ffffffa0,in_stack_ffffffa4,
                        in_stack_ffffffa8,in_stack_ffffffac,fVar20,uVar6,uVar10,iVar11);
    _DAT_100b2234 = *puVar8;
    _DAT_100b2238 = puVar8[1];
    _DAT_100b223c = puVar8[2];
    fVar20 = (float)(int)((uint)(*(char *)(*(int *)((int)param_1 + 0xbc) + 0x24) != '\0') * 8 + -4);
    fVar18 = gpGlobals->v_right[0];
    fVar19 = gpGlobals->v_right[1];
    local_14 = fVar20 * gpGlobals->v_right[2];
    pfVar7 = (float *)(**(code **)(**(int **)((int)param_1 + 0x70) + 0x144))();
    _DAT_100b1e74 = fVar21 + *pfVar7;
    _DAT_100b1e78 = fVar20 * fVar18 + pfVar7[1];
    _DAT_100b1e7c = fVar20 * fVar19 + pfVar7[2];
    iVar11 = *(int *)(*(int *)((int)param_1 + 0x70) + 0x748) + 0x21;
  }
  else {
    fVar19 = (float)(int)((uint)(*(char *)(*(int *)((int)param_1 + 0xbc) + 0x24) != '\0') * 8 + -4);
    fVar18 = gpGlobals->v_right[0];
    local_14 = fVar19 * gpGlobals->v_right[1];
    local_10[0] = fVar19 * gpGlobals->v_right[2];
    pfVar7 = (float *)(**(code **)(**(int **)((int)param_1 + 0x70) + 0x144))();
    _DAT_100b1e74 = local_20 + *pfVar7;
    _DAT_100b1e78 = local_1c + pfVar7[1];
    _DAT_100b1e7c = fVar19 * fVar18 + pfVar7[2];
    iVar11 = *(int *)(*(int *)((int)param_1 + 0x70) + 0x748);
  }
  uVar10 = (uint)*(byte *)(*(int *)((int)param_1 + 0xc0) + 8);
  uVar6 = *(uint *)(*(int *)((int)param_1 + 0xc0) + 0x20);
  fVar18 = DAT_100b1e58;
  fVar19 = DAT_100b1e58;
  fVar20 = DAT_100b1e58;
  fVar21 = DAT_100b1dc8;
  FUN_1000c5f0(&stack0xffffffa0,DAT_100b1e58,DAT_100b1e58,DAT_100b1e58);
  puVar17 = &DAT_100b221c;
  fVar16 = 2.6178717e-29;
  FUN_1000a540(&stack0xffffff94,(undefined4 *)&DAT_100b221c);
  FUN_1000a540(&stack0xffffff88,(undefined4 *)&DAT_100b1e74);
  puVar8 = (undefined4 *)
           CBasePlayer::ShootBulletsPlayer
                     (*(CBasePlayer **)((int)param_1 + 0x70),&local_14,
                      *(byte_conflict *)(*(int *)((int)param_1 + 0xc0) + 0x24),in_stack_ffffff88,
                      fVar16,(float)puVar17,fVar18,fVar19,fVar20,in_stack_ffffffa0,in_stack_ffffffa4
                      ,in_stack_ffffffa8,fVar21,uVar6,uVar10,iVar11);
  _DAT_100b2234 = *puVar8;
  _DAT_100b2238 = puVar8[1];
  _DAT_100b223c = puVar8[2];
  iVar11 = *(int *)((int)param_1 + 0xc0);
  if (*(char *)(iVar11 + 0x38) != '\0') {
    if (((*(byte *)(*(int *)((int)param_1 + 0xbc) + 0x10) & 1) == 0) ||
       ((*(byte *)(iVar11 + 0xdc) & 1) != 0)) {
      cVar5 = '\0';
    }
    else {
      cVar5 = '\x01';
    }
    if (bVar4) {
      fVar18 = 2.0;
    }
    else {
      fVar18 = 1.0;
    }
    FUN_10049b80(param_1,fVar18 * *(float *)(iVar11 + 0x30),(uint)*(byte *)(iVar11 + 0x360),cVar5);
  }
  DAT_100b1dfc = CONCAT31((int3)((uint)DAT_100b1dfc >> 8),
                          *(char *)(*(int *)((int)param_1 + 0xbc) + 0x24) != '\0');
  if (bVar4) {
    uVar2 = *(undefined2 *)((int)param_1 + 0xd0e);
  }
  else {
    uVar2 = *(undefined2 *)((int)param_1 + 0xd04);
  }
  uVar12 = CONCAT22((short)((uint)unaff_EBP >> 0x10),uVar2);
  iVar11 = *(int *)((int)param_1 + 0x70);
  FUN_1004abf0(&stack0xffffff98,&DAT_1009f4a8);
  FUN_1004abf0(&stack0xffffff8c,&DAT_1009f4a8);
  uVar15 = 0;
  uVar9 = FUN_1004ac10(iVar11);
  FUN_10048ff0(iVar11,1,uVar9,uVar12,uVar15);
  cVar5 = *(char *)(*(int *)((int)param_1 + 0xbc) + 2);
  if (cVar5 == '\x02') {
    if (*(int *)(*(int *)((int)param_1 + 0xbc) + 8) == 1) {
      _DAT_100b2248 = 0.2;
    }
    else {
      _DAT_100b2248 = 0.03;
    }
  }
  else if ((cVar5 == '\x01') || (cVar5 == '\x04')) {
    _DAT_100b2248 = 0.1;
  }
  else {
    uVar6 = FUN_10042c40(*(int *)((int)param_1 + 0x70));
    if (uVar6 == 0) {
      _DAT_100b2248 = 1.0;
    }
    else {
      _DAT_100b2248 = 0.5;
    }
    _DAT_100b2248 = *(float *)(*(int *)((int)param_1 + 0xc0) + 0x18) * _DAT_100b2248;
  }
  uVar6 = FUN_10042c10(*(int *)((int)param_1 + 0x70));
  if (uVar6 == 0) {
    fVar13 = (float10)FUN_100551c0(*(int *)((int)param_1 + 0x70));
    fVar13 = fVar13 * (float10)_DAT_100b2248;
  }
  else {
    fVar13 = (float10)_DAT_100b2248 * (float10)6.6666665;
  }
  _DAT_100b2248 = (float)fVar13;
  fVar14 = FUN_10066590();
  fVar13 = (float10)_DAT_100b2248;
  *(float *)((int)param_1 + 0x90) = (float)(fVar14 + fVar13);
  *(float *)((int)param_1 + 0x8c) = (float)(fVar14 + fVar13);
  fVar13 = FUN_10066590();
  *(float *)((int)param_1 + 0x98) = (float)(fVar13 + (float10)2.0);
  return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
}

