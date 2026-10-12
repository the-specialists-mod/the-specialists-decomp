/* mp.dll - global_1006cc80 (65 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1006cc80  GetClassPtr<CCorpse>  (76 bytes)
 * undefined GetClassPtr<CCorpse>(int param_1)
 */
void __cdecl GetClassPtr<CCorpse>(int param_1)

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
    *puVar3 = &CCorpse::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1006cce0  GetClassPtr<CWorld>  (76 bytes)
 * undefined GetClassPtr<CWorld>(int param_1)
 */
void __cdecl GetClassPtr<CWorld>(int param_1)

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
    *puVar3 = &CWorld::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1006dd90  GetClassPtr<CXenPLight>  (76 bytes)
 * undefined GetClassPtr<CXenPLight>(int param_1)
 */
void __cdecl GetClassPtr<CXenPLight>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x78), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CXenPLight::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1006ddf0  GetClassPtr<CXenHair>  (76 bytes)
 * undefined GetClassPtr<CXenHair>(int param_1)
 */
void __cdecl GetClassPtr<CXenHair>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x74), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CXenHair::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1006de40  GetClassPtr<CXenTreeTrigger>  (76 bytes)
 * undefined GetClassPtr<CXenTreeTrigger>(int param_1)
 * called by: CXenTreeTrigger::TriggerCreate
 */
void __cdecl GetClassPtr<CXenTreeTrigger>(int param_1)

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
    *puVar3 = &CXenTreeTrigger::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1006de90  GetClassPtr<CXenTree>  (76 bytes)
 * undefined GetClassPtr<CXenTree>(int param_1)
 */
void __cdecl GetClassPtr<CXenTree>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x78), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CXenTree::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1006df00  GetClassPtr<CXenHull>  (76 bytes)
 * undefined GetClassPtr<CXenHull>(int param_1)
 * called by: CXenHull::CreateHull
 */
void __cdecl GetClassPtr<CXenHull>(int param_1)

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
    *puVar3 = &CXenHull::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1006df60  GetClassPtr<CXenSporeSmall>  (76 bytes)
 * undefined GetClassPtr<CXenSporeSmall>(int param_1)
 */
void __cdecl GetClassPtr<CXenSporeSmall>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x74), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CXenSporeSmall::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1006dfc0  GetClassPtr<CXenSporeMed>  (76 bytes)
 * undefined GetClassPtr<CXenSporeMed>(int param_1)
 */
void __cdecl GetClassPtr<CXenSporeMed>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x74), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CXenSporeMed::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1006e010  GetClassPtr<CXenSporeLarge>  (76 bytes)
 * undefined GetClassPtr<CXenSporeLarge>(int param_1)
 */
void __cdecl GetClassPtr<CXenSporeLarge>(int param_1)

{
  entvars_t *peVar1;
  edict_t *peVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) && (peVar2 = (*g_engfuncs.pfnCreateEntity)(), peVar2 != (edict_t *)0x0)) {
    param_1 = (int)&peVar2->v;
  }
  peVar2 = ((entvars_t *)param_1)->pContainingEntity;
  if (((peVar2 == (edict_t *)0x0) || (peVar1 = iRam00000004, peVar2->pvPrivateData == (void *)0x0))
     && (puVar3 = (*g_engfuncs.pfnPvAllocEntPrivateData)(peVar2,0x74), peVar1 = (entvars_t *)param_1
        , puVar3 != (undefined4 *)0x0)) {
    *puVar3 = &CXenSporeLarge::vftable;
    puVar3[1] = param_1;
    return;
  }
  iRam00000004 = peVar1;
  return;
}

/* 1006e0d4  __ftol  (39 bytes)
 * longlong __ftol(void)
 * called by: CAmbientGeneric::InitModulationParms, CAmbientGeneric::ToggleUse, CBaseAnimating::StudioFrameAdvance, CBaseButton::KeyValue, CBaseDoor::KeyValue, CBaseMonster::BestVisibleEnemy, CBasePlatTrain::KeyValue, CBasePlayer::AddPoints, CBasePlayer::CheckTimeBasedDamage, CBasePlayer::Killed, CBasePlayer::PlayerUse, CBasePlayer::PostThink, ... (138 total)
 */
/* Library Function - Single Match
    __ftol
   
   Library: Visual Studio */

longlong __ftol(void)

{
  float10 in_ST0;
  
  return (longlong)ROUND(in_ST0);
}

/* 1006e5ac  __global_unwind2  (32 bytes)
 * undefined __global_unwind2(PVOID param_1)
 * called by: FUN_100775d8
 */
/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x1006e5c4,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}

/* 1006e5ee  __local_unwind2  (104 bytes)
 * undefined __local_unwind2(int param_1, int param_2)
 * called by: FUN_10070597, FUN_100775d8, FUN_10077695
 */
/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
   Studio 2003 Release */

void __cdecl __local_unwind2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvStack_1c;
  code *pcStack_18;
  undefined4 local_14;
  int iStack_10;
  
  iStack_10 = param_1;
  pcStack_18 = FUN_1006e5cc;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_1006e682();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}

/* 1006e656  __abnormal_termination  (35 bytes)
 * int __abnormal_termination(void)
 * called by: FUN_100705b5
 */
/* Library Function - Single Match
    __abnormal_termination
   
   Library: Visual Studio */

int __cdecl __abnormal_termination(void)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(code **)((int)ExceptionList + 4) == FUN_1006e5cc) &&
     (*(int *)((int)ExceptionList + 8) == *(int *)(*(int *)((int)ExceptionList + 0xc) + 0xc))) {
    iVar1 = 1;
  }
  return iVar1;
}

/* 1006e679  __NLG_Notify1  (9 bytes)
 * undefined __NLG_Notify1(undefined4 param_1)
 * called by: __CallSettingFrame@12
 */
/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_1009b93c = param_1;
  DAT_1009b938 = in_EAX;
  DAT_1009b940 = unaff_EBP;
  return;
}

/* 1006e6f0  _strncmp  (56 bytes)
 * int _strncmp(char * _Str1, char * _Str2, size_t _MaxCount)
 * called by: CFuncTankControls::Think, CTSAnimation::Animate, FUN_1004ede0, FUN_10073eff, FUN_10075ab7, GameDLLInit, Host_Say
 */
/* Library Function - Single Match
    _strncmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar5 = 0;
  sVar3 = _MaxCount;
  pcVar6 = _Str1;
  if (_MaxCount != 0) {
    do {
      if (sVar3 == 0) break;
      sVar3 = sVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar4 = _MaxCount - sVar3;
    do {
      pcVar6 = _Str2;
      pcVar7 = _Str1;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = _Str1 + 1;
      pcVar6 = _Str2 + 1;
      cVar2 = *_Str1;
      cVar1 = *_Str2;
      _Str2 = pcVar6;
      _Str1 = pcVar7;
    } while (cVar1 == cVar2);
    uVar5 = 0;
    if ((byte)pcVar6[-1] <= (byte)pcVar7[-1]) {
      if (pcVar6[-1] == pcVar7[-1]) {
        return 0;
      }
      uVar5 = 0xfffffffe;
    }
    uVar5 = ~uVar5;
  }
  return uVar5;
}

/* 1006e990  _strncpy  (254 bytes)
 * char * _strncpy(char * _Dest, char * _Source, size_t _Count)
 * called by: CHalfLifeMultiplay::SendMOTDToClient, CHalfLifeTeamplay::CHalfLifeTeamplay, CTSObjectivePointer::Use, FUN_10038920, FUN_10038cb0, FUN_10039730, FUN_100433b0, FUN_100672d0, FUN_10073eff, FUN_10074459, FUN_10077d31, FUN_1007b371, ... (19 total)
 */
/* Library Function - Single Match
    _strncpy
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x1006e9ce;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_1006ea0b;
        goto LAB_1006ea79;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x1006ea75:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_1006ea79:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_1006ea0b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x1006ea75;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x1006ea75;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x1006ea75;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x1006e9ce:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_1006ea0b:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}

/* 1006eb8d  operator_new  (14 bytes)
 * void * operator_new(uint param_1)
 * called by: FUN_1005da10, FUN_1005dc30, InstallGameRules, ReloadMapCycleFile
 */
/* Library Function - Single Match
    void * __cdecl operator new(unsigned int)
   
   Library: Visual Studio 2003 Release */

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(param_1,1);
  return pvVar1;
}

/* 1006f220  __fclose_lk  (76 bytes)
 * undefined4 __fclose_lk(FILE * param_1)
 * called by: FUN_1006f1ef
 */
/* Library Function - Single Match
    __fclose_lk
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __fclose_lk(FILE *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_1->_flag & 0x83) != 0) {
    uVar2 = FUN_10074bd8((int *)param_1);
    __freebuf(param_1);
    iVar1 = FUN_10074a70(param_1->_file);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else if (param_1->_tmpfname != (char *)0x0) {
      FUN_1006f7f9(param_1->_tmpfname);
      param_1->_tmpfname = (char *)0x0;
    }
  }
  param_1->_flag = 0;
  return uVar2;
}

/* 1006f9bb  entry  (157 bytes)
 * int entry(undefined4 param_1, int param_2, undefined4 param_3)
 */
int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_102e0148;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_1006fa03;
    if ((DAT_102e1860 != (code *)0x0) &&
       (iVar2 = (*DAT_102e1860)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_1006f8e2(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_1006fa03:
  iVar2 = FUN_10020890();
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_1006f8e2(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_1006f8e2(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_102e1860 != (code *)0x0) {
      iVar2 = (*DAT_102e1860)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}

/* 1006fa58  __amsg_exit  (48 bytes)
 * void __amsg_exit(int param_1)
 * called by: FUN_1006ee4d, FUN_1006ee7c, FUN_10070951, FUN_10073e71, FUN_10074910, FUN_100776b0, FUN_100778c0, FUN_10077979, FUN_1007fa44, __fptrap
 */
/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_102e0154 == 1) || ((DAT_102e0154 == 0 && (DAT_102e0158 == 1)))) {
    FUN_10077cf8();
  }
  FUN_10077d31(param_1);
  (*(code *)PTR___exit_1009bbd0)(0xff);
  return;
}

/* 1006fbc4  __fassign  (62 bytes)
 * void __fassign(int flag, char * argument, char * number)
 */
/* Library Function - Single Match
    __fassign
   
   Library: Visual Studio 2003 Release */

void __cdecl __fassign(int flag,char *argument,char *number)

{
  void *in_ECX;
  void *local_c;
  void *local_8;
  
  if (flag != 0) {
    local_c = in_ECX;
    local_8 = in_ECX;
    FUN_100785f0(in_ECX,(uint *)&local_c,(byte_conflict *)number);
    *(void **)argument = local_c;
    *(void **)(argument + 4) = local_8;
    return;
  }
  FUN_1007864b(in_ECX,(uint *)&number,(byte_conflict *)number);
  *(char **)argument = number;
  return;
}

/* 1006feb4  __cfltcvt  (81 bytes)
 * errno_t __cfltcvt(double * arg, char * buffer, size_t sizeInBytes, int format, int precision, int caps)
 */
/* Library Function - Single Match
    __cfltcvt
   
   Library: Visual Studio 2003 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  char *pcVar1;
  undefined1 *puVar2;
  
  if ((sizeInBytes == 0x65) || (sizeInBytes == 0x45)) {
    puVar2 = FUN_1006fc02(arg,buffer,format,precision);
  }
  else {
    if (sizeInBytes == 0x66) {
      pcVar1 = FUN_1006fd25(arg,buffer,format);
      return (errno_t)pcVar1;
    }
    puVar2 = (undefined1 *)FUN_1006fe21(arg,buffer,format,precision);
  }
  return (errno_t)puVar2;
}

/* 1006ffb0  _strlen  (123 bytes)
 * size_t _strlen(char * _Str)
 * called by: FUN_1006e0fb, FUN_1006ea8e, FUN_1006ff05, FUN_10070c4b, FUN_10073eff, FUN_10074145, FUN_100778c0, FUN_10077d31, FUN_10078678, FUN_1007addf, FUN_1007ae66, FUN_1007b06a, ... (21 total)
 */
/* Library Function - Single Match
    _strlen
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

size_t __cdecl _strlen(char *_Str)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)_Str;
  do {
    if (((uint)puVar2 & 3) == 0) goto LAB_1006ffd0;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10070003:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_1006ffd0:
  do {
    do {
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
    } while (((*puVar3 ^ 0xffffffff ^ *puVar3 + 0x7efefeff) & 0x81010100) == 0);
    uVar1 = *puVar3;
    if ((char)uVar1 == '\0') {
      return (int)puVar3 - (int)_Str;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)((int)puVar3 + (1 - (int)_Str));
    }
    if ((uVar1 & 0xff0000) == 0) {
      return (size_t)((int)puVar3 + (2 - (int)_Str));
    }
  } while ((uVar1 & 0xff000000) != 0);
  goto LAB_10070003;
}

/* 10070030  __allmul  (52 bytes)
 * longlong __allmul(uint param_1, int param_2, uint param_3, int param_4)
 * called by: FUN_10071455
 */
/* Library Function - Single Match
    __allmul
   
   Library: Visual Studio */

longlong __allmul(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}

/* 10070880  __CallSettingFrame@12  (76 bytes)
 * undefined __CallSettingFrame@12(undefined4 param_1, undefined4 param_2, int param_3)
 * called by: FUN_1006e38a, FUN_100703b9
 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Library Function - Single Match
    __CallSettingFrame@12
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __CallSettingFrame_12(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)__NLG_Notify1(param_3);
  (*pcVar1)();
  if (param_3 == 0x100) {
    param_3 = 2;
  }
  __NLG_Notify1(param_3);
  return;
}

/* 10071fe0  __cintrindisp2  (62 bytes)
 * undefined __cintrindisp2(undefined4 param_1, int param_2)
 * called by: FUN_1006eb5a
 */
/* Library Function - Single Match
    __cintrindisp2
   
   Library: Visual Studio */

void __fastcall __cintrindisp2(undefined4 param_1,int param_2)

{
  __trandisp2(param_1,param_2);
  FUN_100720aa();
  return;
}

/* 1007201e  __cintrindisp1  (61 bytes)
 * undefined __cintrindisp1(undefined4 param_1, int param_2)
 */
/* Library Function - Single Match
    __cintrindisp1
   
   Library: Visual Studio */

void __fastcall __cintrindisp1(undefined4 param_1,int param_2)

{
  __trandisp1(param_1,param_2);
  FUN_100720aa();
  return;
}

/* 1007205b  __ctrandisp2  (72 bytes)
 * undefined __ctrandisp2(uint param_1, int param_2, uint param_3, int param_4)
 */
/* Library Function - Single Match
    __ctrandisp2
   
   Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2005, Visual Studio 2008 */

void __cdecl __ctrandisp2(uint param_1,int param_2,uint param_3,int param_4)

{
  undefined4 extraout_ECX;
  int extraout_EDX;
  
  __fload(param_1,param_2);
  __fload(param_3,param_4);
  __trandisp2(extraout_ECX,extraout_EDX);
  FUN_100720a3();
  return;
}

/* 100721db  __ctrandisp1  (51 bytes)
 * undefined __ctrandisp1(uint param_1, int param_2)
 */
/* Library Function - Single Match
    __ctrandisp1
   
   Library: Visual Studio */

void __cdecl __ctrandisp1(uint param_1,int param_2)

{
  undefined4 extraout_ECX;
  int extraout_EDX;
  
  __fload(param_1,param_2);
  __trandisp1(extraout_ECX,extraout_EDX);
  FUN_100720a3();
  return;
}

/* 1007220e  __fload  (60 bytes)
 * float10 __fload(uint param_1, int param_2)
 * called by: __ctrandisp1, __ctrandisp2
 */
/* Library Function - Single Match
    __fload
   
   Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2005, Visual Studio 2008 */

float10 __cdecl __fload(uint param_1,int param_2)

{
  float10 fVar1;
  
  if ((param_2._2_2_ & 0x7ff0) == 0x7ff0) {
    fVar1 = (float10)CONCAT28(param_2._2_2_ | 0x7fff,
                              CONCAT44(param_2 << 0xb | param_1 >> 0x15,param_1));
  }
  else {
    fVar1 = (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
  }
  return fVar1;
}

/* 10072250  __trandisp1  (103 bytes)
 * undefined __trandisp1(undefined4 param_1, int param_2)
 * called by: __cintrindisp1, __ctrandisp1
 */
/* Library Function - Single Match
    __trandisp1
   
   Library: Visual Studio */

void __fastcall __trandisp1(undefined4 param_1,int param_2)

{
  float10 fVar1;
  byte bVar2;
  undefined2 uVar3;
  int unaff_EBP;
  float10 in_ST0;
  
  if (*(char *)(param_2 + 0xe) == '\x05') {
    uVar3 = (undefined2)
            CONCAT31((uint3)((byte)((ushort)*(undefined2 *)(unaff_EBP + -0xa4) >> 8) & 0xfe | 2),
                     0x3f);
  }
  else {
    uVar3 = 0x133f;
  }
  *(undefined2 *)(unaff_EBP + -0xa2) = uVar3;
  fVar1 = (float10)0;
  *(int *)(unaff_EBP + -0x94) = param_2;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)NAN(in_ST0) << 8 | (ushort)(in_ST0 < fVar1) << 9 | (ushort)(in_ST0 != fVar1) << 10 |
       (ushort)(in_ST0 == fVar1) << 0xe;
  *(undefined1 *)(unaff_EBP + -0x90) = 0;
  bVar2 = (char)(*(char *)(unaff_EBP + -0x9f) << 1) >> 1;
                    /* WARNING: Could not recover jumptable at 0x100722b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + (char)(&DAT_1009bc3c)[(byte)((bVar2 & 7) << 1 | (char)bVar2 < '\0')] + 0x10
              ))();
  return;
}

/* 100722b7  __trandisp2  (140 bytes)
 * undefined __trandisp2(undefined4 param_1, int param_2)
 * called by: __cintrindisp2, __ctrandisp2
 */
/* Library Function - Single Match
    __trandisp2
   
   Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2005, Visual Studio 2008 */

void __fastcall __trandisp2(undefined4 param_1,int param_2)

{
  float10 fVar1;
  char cVar2;
  byte bVar3;
  undefined2 uVar4;
  int unaff_EBP;
  float10 in_ST0;
  float10 in_ST1;
  
  if (*(char *)(param_2 + 0xe) == '\x05') {
    uVar4 = (undefined2)
            CONCAT31((uint3)((byte)((ushort)*(undefined2 *)(unaff_EBP + -0xa4) >> 8) & 0xfe | 2),
                     0x3f);
  }
  else {
    uVar4 = 0x133f;
  }
  *(undefined2 *)(unaff_EBP + -0xa2) = uVar4;
  fVar1 = (float10)0;
  *(int *)(unaff_EBP + -0x94) = param_2;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)NAN(in_ST0) << 8 | (ushort)(in_ST0 < fVar1) << 9 | (ushort)(in_ST0 != fVar1) << 10 |
       (ushort)(in_ST0 == fVar1) << 0xe;
  *(undefined1 *)(unaff_EBP + -0x90) = 0;
  fVar1 = (float10)0;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)NAN(in_ST1) << 8 | (ushort)(in_ST1 < fVar1) << 9 | (ushort)(in_ST1 != fVar1) << 10 |
       (ushort)(in_ST1 == fVar1) << 0xe;
  bVar3 = (char)(*(char *)(unaff_EBP + -0x9f) << 1) >> 1;
  cVar2 = (char)(*(char *)(unaff_EBP + -0x9f) << 1) >> 1;
                    /* WARNING: Could not recover jumptable at 0x10072341. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + (char)((&DAT_1009bc3c)[(byte)(cVar2 << 1 | cVar2 < '\0') & 0xf] |
                               (&DAT_1009bc3c)[(byte)((bVar3 & 7) << 1 | (char)bVar3 < '\0')] << 2)
              + 0x10))();
  return;
}

/* 100731ab  _malloc  (18 bytes)
 * void * _malloc(size_t _Size)
 * called by: FUN_1006ee4d, FUN_100739bf, FUN_10073e71, FUN_10074145, FUN_10074260, FUN_10074f2d, FUN_100776b0, FUN_100778c0, FUN_10077979, FUN_10077bc6, FUN_10079413, FUN_1007a4bb, ... (25 total)
 */
/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_102e023c);
  return pvVar1;
}

/* 100731bd  __nh_malloc  (44 bytes)
 * void * __nh_malloc(size_t _Size, int _NhFlag)
 * called by: _malloc, operator_new
 */
/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      pvVar1 = (void *)FUN_100731e9((uint *)_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_10075a6f(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}

/* 10073517  __startOneArgErrorHandling  (60 bytes)
 * float10 __startOneArgErrorHandling(undefined4 param_1, uint param_2, ushort param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * called by: FUN_1006eead, FUN_10073649, __math_exit
 */
/* Library Function - Single Match
    __startOneArgErrorHandling
   
   Library: Visual Studio */

float10 __fastcall
__startOneArgErrorHandling
          (undefined4 param_1,uint param_2,ushort param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  float10 in_ST0;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  double local_c;
  
  local_c = (double)in_ST0;
  local_1c = param_5;
  local_18 = param_6;
  local_20 = param_1;
  FUN_10079816(param_2,&local_24,&param_3);
  return (float10)local_c;
}

/* 100735a5  __fload_withFB  (67 bytes)
 * uint __fload_withFB(undefined4 param_1, int param_2)
 * called by: FUN_1006ebc2
 */
/* Library Function - Single Match
    __fload_withFB
   
   Library: Visual Studio */

uint __fastcall __fload_withFB(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 4) & 0x7ff00000;
  if (uVar1 != 0x7ff00000) {
    return uVar1;
  }
  return *(uint *)(param_2 + 4);
}

/* 1007360b  __math_exit  (42 bytes)
 * undefined __math_exit(undefined4 param_1, uint param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * called by: FUN_1006eead
 */
/* Library Function - Single Match
    __math_exit
   
   Library: Visual Studio */

void __fastcall
__math_exit(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
           )

{
  ushort in_FPUStatusWord;
  ushort unaff_retaddr;
  
  if (((unaff_retaddr != 0x27f) && ((unaff_retaddr & 0x20) != 0)) &&
     ((in_FPUStatusWord & 0x20) != 0)) {
    __startOneArgErrorHandling(param_1,param_2,unaff_retaddr,param_3,param_4,param_5);
    return;
  }
  return;
}

/* 100738bf  __exit  (17 bytes)
 * void __exit(int _Code)
 * called by: FUN_100793fc, FUN_1007c4d7, __amsg_exit
 */
/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_100738ee(_Code,1,0);
  return;
}

/* 10074b50  __freebuf  (43 bytes)
 * void __freebuf(FILE * _File)
 * called by: __fclose_lk
 */
/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2003 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    FUN_1006f7f9(_File->_base);
    *(ushort *)&_File->_flag = (ushort)_File->_flag & 0xfbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}

/* 10075d10  _memset  (88 bytes)
 * void * _memset(void * _Dst, int _Val, size_t _Size)
 * called by: FUN_1006f6bc, FUN_1006fd7a, FUN_10071455, FUN_10074459, FUN_100747c7, FUN_10076da3, FUN_1007709b, FUN_1007e4fa, FUN_1007ea8a
 */
/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  uint *puVar4;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  puVar4 = _Dst;
  if (3 < _Size) {
    uVar2 = -(int)_Dst & 3;
    sVar3 = _Size;
    if (uVar2 != 0) {
      sVar3 = _Size - uVar2;
      do {
        *(undefined1 *)puVar4 = (undefined1)_Val;
        puVar4 = (uint *)((int)puVar4 + 1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar3 & 3;
    uVar2 = sVar3 >> 2;
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar4 = (char)uVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}

/* 10078c35  __fptrap  (9 bytes)
 * void __fptrap(void)
 * called by: FUN_10070c4b, FUN_10071455
 */
/* Library Function - Single Match
    __fptrap
   
   Library: Visual Studio 2003 Release */

void __cdecl __fptrap(void)

{
  __amsg_exit(2);
  return;
}

/* 10079200  _strcmp  (129 bytes)
 * int _strcmp(char * _Str1, char * _Str2)
 * called by: FUN_1007035c, FUN_10073eff, FUN_10074260, FUN_10074319, FUN_1007b254, FUN_1007ebf3
 */
/* Library Function - Single Match
    _strcmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl _strcmp(char *_Str1,char *_Str2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  
  if (((uint)_Str1 & 3) != 0) {
    if (((uint)_Str1 & 1) != 0) {
      bVar4 = *_Str1;
      _Str1 = _Str1 + 1;
      bVar5 = bVar4 < (byte)*_Str2;
      if (bVar4 != *_Str2) goto LAB_10079244;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_10079210;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_10079244;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_10079244;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_10079210:
  while( true ) {
    uVar2 = *(undefined4 *)_Str1;
    bVar4 = (byte)uVar2;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 0x10);
    bVar5 = bVar4 < (byte)_Str2[2];
    if (bVar4 != _Str2[2]) break;
    bVar3 = (byte)((uint)uVar2 >> 0x18);
    if (bVar4 == 0) {
      return 0;
    }
    bVar5 = bVar3 < (byte)_Str2[3];
    if (bVar3 != _Str2[3]) break;
    _Str2 = _Str2 + 4;
    _Str1 = _Str1 + 4;
    if (bVar3 == 0) {
      return 0;
    }
  }
LAB_10079244:
  return (uint)bVar5 * -2 + 1;
}

/* 10079550  __aulldiv  (104 bytes)
 * undefined8 __aulldiv(uint param_1, uint param_2, uint param_3, uint param_4)
 * called by: FUN_10070c4b, FUN_1007e7be
 */
/* Library Function - Single Match
    __aulldiv
   
   Library: Visual Studio */

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}

/* 100795c0  __aullrem  (117 bytes)
 * undefined8 __aullrem(uint param_1, uint param_2, uint param_3, uint param_4)
 * called by: FUN_10070c4b, FUN_1007e7be
 */
/* Library Function - Single Match
    __aullrem
   
   Library: Visual Studio */

undefined8 __aullrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar3 = param_1;
  uVar4 = param_4;
  uVar9 = param_2;
  uVar10 = param_3;
  if (param_4 == 0) {
    iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar7 = 0;
  }
  else {
    do {
      uVar5 = uVar4 >> 1;
      uVar10 = uVar10 >> 1 | (uint)((uVar4 & 1) != 0) << 0x1f;
      uVar8 = uVar9 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar4 = uVar5;
      uVar9 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar3) / (ulonglong)uVar10;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar10 = uVar9 + uVar3;
    if (((CARRY4(uVar9,uVar3)) || (param_2 < uVar10)) || ((param_2 <= uVar10 && (param_1 < uVar4))))
    {
      bVar11 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar10 = (uVar10 - param_4) - (uint)bVar11;
    }
    iVar6 = -(uVar4 - param_1);
    iVar7 = -(uint)(uVar4 - param_1 != 0) - ((uVar10 - param_2) - (uint)(uVar4 < param_1));
  }
  return CONCAT44(iVar7,iVar6);
}

/* 10079760  __allshl  (31 bytes)
 * longlong __allshl(byte.conflict param_1, int param_2)
 * called by: FUN_10071455
 */
/* Library Function - Single Match
    __allshl
   
   Library: Visual Studio */

longlong __fastcall __allshl(byte_conflict param_1,int param_2)

{
  uint in_EAX;
  
  if (0x3f < param_1) {
    return 0;
  }
  if (param_1 < 0x20) {
    return CONCAT44(param_2 << (param_1 & 0x1f) | in_EAX >> 0x20 - (param_1 & 0x1f),
                    in_EAX << (param_1 & 0x1f));
  }
  return (ulonglong)(in_EAX << (param_1 & 0x1f)) << 0x20;
}

/* 10079a8e  __frnd  (18 bytes)
 * float10 __frnd(double param_1)
 * called by: FUN_1007381c
 */
/* Library Function - Single Match
    __frnd
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release,
   Visual Studio 2019 Release */

float10 __cdecl __frnd(double param_1)

{
  return (float10)ROUND(param_1);
}

/* 10079aa0  __copysign  (33 bytes)
 * double __copysign(double _Number, double _Sign)
 * called by: FUN_1007d5ce
 */
/* Library Function - Single Match
    __copysign
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2019 Release */

double __cdecl __copysign(double _Number,double _Sign)

{
  return (double)CONCAT44((_Sign._4_4_ ^ _Number._4_4_) & 0x7fffffff ^ _Sign._4_4_,_Number._0_4_);
}

/* 1007c6c9  ___add_12  (94 bytes)
 * undefined ___add_12(uint * param_1, uint * param_2)
 * called by: FUN_1007c782, FUN_1007c849
 */
/* Library Function - Single Match
    ___add_12
   
   Library: Visual Studio 2003 Release */

void __cdecl ___add_12(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1007c6a8(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_1007c6a8(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_1007c6a8(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_1007c6a8(param_1[2],param_2[2],param_1 + 2);
  return;
}

/* 1007f510  __mbsnbicoll  (63 bytes)
 * int __mbsnbicoll(uchar * _Str1, uchar * _Str2, size_t _MaxCount)
 * called by: FUN_1007f493, FUN_1007f9ec
 */
/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2003 Release */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (_MaxCount == 0) {
    return 0;
  }
  iVar1 = FUN_1007f5bd(DAT_102e06e4,1,_Str1,_MaxCount,_Str2,_MaxCount,DAT_102e04c8);
  if (iVar1 == 0) {
    return 0x7fffffff;
  }
  return iVar1 + -2;
}

/* 1007fe70  Unwind@1007fe70  (8 bytes)
 * undefined Unwind@1007fe70(void)
 */
void Unwind_1007fe70(void)

{
  thunk_FUN_10068950();
  return;
}

/* 1007fe90  Unwind@1007fe90  (11 bytes)
 * undefined Unwind@1007fe90(void)
 */
void Unwind_1007fe90(void)

{
  thunk_FUN_10068950();
  return;
}

/* 1007fe9b  Unwind@1007fe9b  (11 bytes)
 * undefined Unwind@1007fe9b(void)
 */
void Unwind_1007fe9b(void)

{
  thunk_FUN_10068950();
  return;
}

/* 1007feb0  Unwind@1007feb0  (8 bytes)
 * undefined Unwind@1007feb0(void)
 */
void Unwind_1007feb0(void)

{
  thunk_FUN_10068950();
  return;
}

/* 1007fed0  Unwind@1007fed0  (8 bytes)
 * undefined Unwind@1007fed0(void)
 */
void Unwind_1007fed0(void)

{
  thunk_FUN_10068950();
  return;
}

/* 1007fef0  Unwind@1007fef0  (17 bytes)
 * undefined Unwind@1007fef0(void)
 */
void Unwind_1007fef0(void)

{
  int unaff_EBP;
  
  FUN_1000fc40(*(undefined4 *)(unaff_EBP + -0x10),*(int *)(unaff_EBP + 4));
  return;
}

/* 1007ff10  Unwind@1007ff10  (11 bytes)
 * undefined Unwind@1007ff10(void)
 */
void Unwind_1007ff10(void)

{
  int unaff_EBP;
  
  FUN_1006eb82(*(undefined **)(unaff_EBP + -0x10));
  return;
}

/* 1007ff1b  Unwind@1007ff1b  (11 bytes)
 * undefined Unwind@1007ff1b(void)
 */
void Unwind_1007ff1b(void)

{
  int unaff_EBP;
  
  FUN_1006eb82(*(undefined **)(unaff_EBP + -0x10));
  return;
}

/* 1007ff26  Unwind@1007ff26  (11 bytes)
 * undefined Unwind@1007ff26(void)
 */
void Unwind_1007ff26(void)

{
  int unaff_EBP;
  
  FUN_1006eb82(*(undefined **)(unaff_EBP + -0x10));
  return;
}

/* 1007ff31  Unwind@1007ff31  (11 bytes)
 * undefined Unwind@1007ff31(void)
 */
void Unwind_1007ff31(void)

{
  int unaff_EBP;
  
  FUN_1006eb82(*(undefined **)(unaff_EBP + -0x10));
  return;
}

/* 1007ff50  Unwind@1007ff50  (17 bytes)
 * undefined Unwind@1007ff50(void)
 */
void Unwind_1007ff50(void)

{
  int unaff_EBP;
  
  FUN_1000fc40(*(undefined4 *)(unaff_EBP + -0x10),*(int *)(unaff_EBP + 4));
  return;
}

/* 1007ff70  Unwind@1007ff70  (11 bytes)
 * undefined Unwind@1007ff70(void)
 */
void Unwind_1007ff70(void)

{
  thunk_FUN_10068950();
  return;
}

/* 1007ff90  Unwind@1007ff90  (17 bytes)
 * undefined Unwind@1007ff90(void)
 */
void Unwind_1007ff90(void)

{
  int unaff_EBP;
  
  FUN_1000fc40(*(undefined4 *)(unaff_EBP + -0x10),*(int *)(unaff_EBP + 4));
  return;
}

/* 1007ffb0  Unwind@1007ffb0  (8 bytes)
 * undefined Unwind@1007ffb0(void)
 */
void Unwind_1007ffb0(void)

{
  thunk_FUN_10068950();
  return;
}

/* 1007ffd0  Unwind@1007ffd0  (8 bytes)
 * undefined Unwind@1007ffd0(void)
 */
void Unwind_1007ffd0(void)

{
  thunk_FUN_10068950();
  return;
}

