/* ts_i386.so - CVoiceGameMgr (8 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 000f73c8  CVoiceGameMgr::CVoiceGameMgr  (49 bytes)
 * undefined CVoiceGameMgr(void)
 */
/* CVoiceGameMgr::CVoiceGameMgr(void) */

void __thiscall CVoiceGameMgr::CVoiceGameMgr(CVoiceGameMgr *this)

{
  *(undefined1 **)(this + 0x18) = CVoiceGameMgr_virtual_table;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}

/* 000f73fc  CVoiceGameMgr::~CVoiceGameMgr  (58 bytes)
 * undefined ~CVoiceGameMgr(uint param_1)
 */
/* CVoiceGameMgr::~CVoiceGameMgr(void) */

void __thiscall CVoiceGameMgr::~CVoiceGameMgr(CVoiceGameMgr *this,uint param_1)

{
  *(undefined1 **)(this + 0x18) = CVoiceGameMgr_virtual_table;
  if ((param_1 & 1) != 0) {
    __builtin_delete(this);
  }
  return;
}

/* 000f7438  CVoiceGameMgr::Init  (197 bytes)
 * undefined4 Init(undefined4 param_1, int param_2)
 */
/* CVoiceGameMgr::Init(IVoiceGameMgrHelper *, int) */

undefined4 __thiscall CVoiceGameMgr::Init(CVoiceGameMgr *this,undefined4 param_1,int param_2)

{
  int iVar1;
  cvar_t *pcVar2;
  
  *(undefined4 *)(this + 8) = param_1;
  if (0x20 < param_2) {
    param_2 = 0x20;
  }
  *(int *)(this + 0xc) = param_2;
  (*g_engfuncs.pfnPrecacheModel)("sprites/voiceicon.spr");
  iVar1 = (*g_engfuncs.pfnRegUserMsg)("VoiceMask",8);
  *(int *)this = iVar1;
  iVar1 = (*g_engfuncs.pfnRegUserMsg)("ReqState",0);
  *(int *)(this + 4) = iVar1;
  pcVar2 = (*g_engfuncs.pfnCVarGetPointer)("voice_serverdebug");
  if (pcVar2 == (cvar_t *)0x0) {
    (*g_engfuncs.pfnCVarRegister)((cvar_t *)voice_serverdebug);
  }
  pcVar2 = (*g_engfuncs.pfnCVarGetPointer)("sv_alltalk");
  if (pcVar2 == (cvar_t *)0x0) {
    pcVar2 = (cvar_t *)(*g_engfuncs.pfnCVarRegister)((cvar_t *)sv_alltalk);
  }
  return CONCAT31((int3)((uint)pcVar2 >> 8),1);
}

/* 000f7500  CVoiceGameMgr::SetHelper  (12 bytes)
 * undefined SetHelper(undefined4 param_1)
 */
/* CVoiceGameMgr::SetHelper(IVoiceGameMgrHelper *) */

void __thiscall CVoiceGameMgr::SetHelper(CVoiceGameMgr *this,undefined4 param_1)

{
  *(undefined4 *)(this + 8) = param_1;
  return;
}

/* 000f750c  CVoiceGameMgr::Update  (60 bytes)
 * undefined Update(double param_1)
 */
/* CVoiceGameMgr::Update(double) */

void __thiscall CVoiceGameMgr::Update(CVoiceGameMgr *this,double param_1)

{
  double dVar1;
  
  dVar1 = *(double *)(this + 0x10);
  *(double *)(this + 0x10) = param_1 + dVar1;
  if (0.3 <= param_1 + dVar1) {
    UpdateMasks(this);
  }
  return;
}

/* 000f7548  CVoiceGameMgr::ClientConnected  (441 bytes)
 * undefined ClientConnected(undefined4 this, undefined4 param_2)
 */
/* WARNING: Removing unreachable block (ram,0x000f76ca) */
/* WARNING: Removing unreachable block (ram,0x000f762c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* CVoiceGameMgr::ClientConnected(edict_s *) */

void __thiscall CVoiceGameMgr::ClientConnected(undefined4 this,edict_t *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*g_engfuncs.pfnIndexOfEdict)(param_2);
  iVar1 = iVar1 + -1;
  if ((-1 < iVar1) && (iVar1 < 0x20)) {
    (&g_bWantModEnable)[iVar1 >> 5] = (&g_bWantModEnable)[iVar1 >> 5] | 1 << ((byte)iVar1 & 0x1f);
    iVar2 = 0;
    while( true ) {
      if (0x1f < iVar2) {
        iVar2 = 0;
        while( true ) {
          if (0x1f < iVar2) {
            return;
          }
          if ((iVar2 < 0) || (0x1f < iVar2)) break;
          (&g_SentBanMasks)[iVar1 + (iVar2 >> 5)] =
               (&g_SentBanMasks)[iVar1 + (iVar2 >> 5)] & ~(1 << ((byte)iVar2 & 0x1f));
          iVar2 = iVar2 + 1;
        }
                    /* WARNING: Subroutine does not return */
        __assert_fail("i >= 0 && i < GetNumBits()","../game_shared/bitvec.h",0x85,
                      "CBitVecAccessor CBitVec<NUM_BITS>::operator[] (int) [with int NUM_BITS = 32]"
                     );
      }
      if ((iVar2 < 0) || (0x1f < iVar2)) break;
      (&g_SentGameRulesMasks)[iVar1 + (iVar2 >> 5)] =
           (&g_SentGameRulesMasks)[iVar1 + (iVar2 >> 5)] & ~(1 << ((byte)iVar2 & 0x1f));
      iVar2 = iVar2 + 1;
    }
                    /* WARNING: Subroutine does not return */
    __assert_fail("i >= 0 && i < GetNumBits()","../game_shared/bitvec.h",0x85,
                  "CBitVecAccessor CBitVec<NUM_BITS>::operator[] (int) [with int NUM_BITS = 32]");
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("i >= 0 && i < GetNumBits()","../game_shared/bitvec.h",0x85,
                "CBitVecAccessor CBitVec<NUM_BITS>::operator[] (int) [with int NUM_BITS = 32]");
}

/* 000f770c  CVoiceGameMgr::ClientCommand  (667 bytes)
 * undefined4 ClientCommand(int * param_1, char * param_2)
 */
/* CVoiceGameMgr::ClientCommand(CBasePlayer *, char const *) */

undefined4 __thiscall CVoiceGameMgr::ClientCommand(CVoiceGameMgr *this,int *param_1,char *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *__s;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 local_18 [2];
  
  iVar2 = (*g_engfuncs.pfnIndexOfEdict)(*(edict_t **)(*param_1 + 0x208));
  iVar2 = iVar2 + -1;
  if ((iVar2 < 0) || (*(int *)(this + 0xc) <= iVar2)) {
    uVar3 = VoiceServerDebug("CVoiceGameMgr::ClientCommand: cmd %s from invalid client (%d)\n",
                             param_2,iVar2);
  }
  else {
    iVar4 = strcasecmp(param_2,"vban");
    if ((iVar4 == 0) && (iVar4 = (*g_engfuncs.pfnCmd_Argc)(), 1 < iVar4)) {
      for (iVar4 = 1; iVar5 = (*g_engfuncs.pfnCmd_Argc)(), iVar4 < iVar5; iVar4 = iVar4 + 1) {
        local_18[0] = 0;
        puVar8 = local_18;
        pcVar7 = "%x";
        __s = (*g_engfuncs.pfnCmd_Argv)(iVar4);
        sscanf(__s,pcVar7,puVar8);
        if (iVar4 < 2) {
          VoiceServerDebug("CVoiceGameMgr::ClientCommand: vban (0x%x) from %d\n",local_18[0],iVar2);
          if (iVar4 != 1) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("i >= 0 && i < NUM_DWORDS","../game_shared/bitvec.h",0xad,
                          "void CBitVec<NUM_BITS>::SetDWord (int, long unsigned int) [with int NUM_BITS = 32]"
                         );
          }
          (&g_BanMasks)[iVar2] = local_18[0];
        }
        else {
          VoiceServerDebug("CVoiceGameMgr::ClientCommand: invalid index (%d)\n",iVar4);
        }
      }
    }
    else {
      uVar6 = strcasecmp(param_2,"VModEnable");
      if ((uVar6 != 0) || (uVar6 = (*g_engfuncs.pfnCmd_Argc)(), (int)uVar6 < 2)) {
        return uVar6 & 0xffffff00;
      }
      pcVar7 = (*g_engfuncs.pfnCmd_Argv)(1);
      iVar4 = __strtol_internal(pcVar7,0,10,0);
      VoiceServerDebug("CVoiceGameMgr::ClientCommand: VModEnable (%d)\n",(uint)(iVar4 != 0));
      if ((iVar2 < 0) || (0x1f < iVar2)) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("i >= 0 && i < GetNumBits()","../game_shared/bitvec.h",0x85,
                      "CBitVecAccessor CBitVec<NUM_BITS>::operator[] (int) [with int NUM_BITS = 32]"
                     );
      }
      pcVar7 = (*g_engfuncs.pfnCmd_Argv)(1);
      iVar4 = __strtol_internal(pcVar7,0,10,0);
      iVar5 = iVar2 >> 5;
      bVar1 = (byte)iVar2;
      if (iVar4 == 0) {
        (&g_PlayerModEnable)[iVar5] =
             (&g_PlayerModEnable)[iVar5] &
             (-2 << (bVar1 & 0x1f) | 0xfffffffeU >> 0x20 - (bVar1 & 0x1f));
      }
      else {
        (&g_PlayerModEnable)[iVar5] = (&g_PlayerModEnable)[iVar5] | 1 << (bVar1 & 0x1f);
      }
      if ((iVar2 < 0) || (0x1f < iVar2)) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("i >= 0 && i < GetNumBits()","../game_shared/bitvec.h",0x85,
                      "CBitVecAccessor CBitVec<NUM_BITS>::operator[] (int) [with int NUM_BITS = 32]"
                     );
      }
      (&g_bWantModEnable)[iVar5] =
           (&g_bWantModEnable)[iVar5] &
           (-2 << (bVar1 & 0x1f) | 0xfffffffeU >> 0x20 - (bVar1 & 0x1f));
    }
    uVar3 = UpdateMasks(this);
  }
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

/* 000f79bc  CVoiceGameMgr::UpdateMasks  (1091 bytes)
 * undefined UpdateMasks(void)
 */
/* WARNING: Removing unreachable block (ram,0x000f7cc6) */
/* CVoiceGameMgr::UpdateMasks(void) */

void __thiscall CVoiceGameMgr::UpdateMasks(CVoiceGameMgr *this)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longdouble extraout_ST0;
  int local_68;
  byte local_5d;
  int local_4c;
  uint local_20;
  undefined4 *local_1c;
  int local_18;
  
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  (*g_engfuncs.pfnCVarGetFloat)("sv_alltalk");
  local_4c = 0;
  if (0 < *(int *)(this + 0xc)) {
    local_68 = 0;
    do {
      piVar2 = (int *)UTIL_PlayerByIndex(local_4c + 1);
      if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(piVar2[0x18] + 200))(piVar2), iVar3 != 0))
      {
        if ((local_4c < 0) || (0x1f < local_4c)) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("i >= 0 && i < GetNumBits()","../game_shared/bitvec.h",0x85,
                        "CBitVecAccessor CBitVec<NUM_BITS>::operator[] (int) [with int NUM_BITS = 32]"
                       );
        }
        local_1c = &g_bWantModEnable;
        local_18 = local_4c;
        if ((1 << ((byte)local_4c & 0x1f) & (&g_bWantModEnable)[local_4c >> 5]) != 0) {
          (*g_engfuncs.pfnMessageBegin)
                    (1,*(int *)(this + 4),(float *)0x0,*(edict_t **)(*piVar2 + 0x208));
          (*g_engfuncs.pfnMessageEnd)();
        }
        local_20 = 0;
        if ((local_4c < 0) || (0x1f < local_4c)) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("i >= 0 && i < GetNumBits()","../game_shared/bitvec.h",0x85,
                        "CBitVecAccessor CBitVec<NUM_BITS>::operator[] (int) [with int NUM_BITS = 32]"
                       );
        }
        if (((1 << ((byte)local_4c & 0x1f) & (&g_PlayerModEnable)[local_4c >> 5]) != 0) &&
           (iVar3 = 0, 0 < *(int *)(this + 0xc))) {
          do {
            iVar4 = UTIL_PlayerByIndex(iVar3 + 1);
            if (((iVar4 != 0) &&
                (iVar5 = (**(code **)(*(int *)(iVar4 + 0x60) + 200))(iVar4), iVar5 != 0)) &&
               ((extraout_ST0 != (longdouble)0.0 ||
                (cVar1 = (**(code **)(**(int **)(this + 8) + 0xc))
                                   (*(undefined4 *)(this + 8),piVar2,iVar4), cVar1 != '\0')))) {
              if ((iVar3 < 0) || (0x1f < iVar3)) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("i >= 0 && i < GetNumBits()","../game_shared/bitvec.h",0x85,
                              "CBitVecAccessor CBitVec<NUM_BITS>::operator[] (int) [with int NUM_BITS = 32]"
                             );
              }
              (&local_20)[iVar3 >> 5] = (&local_20)[iVar3 >> 5] | 1 << ((byte)iVar3 & 0x1f);
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(this + 0xc));
        }
        if ((local_20 != *(uint *)((int)&g_SentGameRulesMasks + local_68)) ||
           (*(int *)((int)&g_BanMasks + local_68) != *(int *)((int)&g_SentBanMasks + local_68))) {
          *(uint *)((int)&g_SentGameRulesMasks + local_68) = local_20;
          *(undefined4 *)((int)&g_SentBanMasks + local_68) =
               *(undefined4 *)((int)&g_BanMasks + local_68);
          (*g_engfuncs.pfnMessageBegin)(1,*(int *)this,(float *)0x0,*(edict_t **)(*piVar2 + 0x208));
          (*g_engfuncs.pfnWriteLong)(local_20);
          (*g_engfuncs.pfnWriteLong)(*(int *)((int)&g_BanMasks + local_68));
          (*g_engfuncs.pfnMessageEnd)();
        }
        iVar3 = 0;
        if (0 < *(int *)(this + 0xc)) {
          do {
            local_5d = 0;
            if ((iVar3 < 0) || (0x1f < iVar3)) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("i >= 0 && i < GetNumBits()","../game_shared/bitvec.h",0x85,
                            "CBitVecAccessor CBitVec<NUM_BITS>::operator[] (int) [with int NUM_BITS = 32]"
                           );
            }
            if ((1 << ((byte)iVar3 & 0x1f) & (&local_20)[iVar3 >> 5]) != 0) {
              if ((iVar3 < 0) || (0x1f < iVar3)) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("i >= 0 && i < GetNumBits()","../game_shared/bitvec.h",0x85,
                              "CBitVecAccessor CBitVec<NUM_BITS>::operator[] (int) [with int NUM_BITS = 32]"
                             );
              }
              if ((1 << ((byte)iVar3 & 0x1f) &
                  *(uint *)((int)&g_BanMasks + (iVar3 >> 5) * 4 + local_68)) == 0) {
                local_5d = 1;
              }
            }
            iVar3 = iVar3 + 1;
            (*g_engfuncs.pfnVoice_SetClientListening)(local_4c + 1,iVar3,(uint)local_5d);
          } while (iVar3 < *(int *)(this + 0xc));
        }
      }
      local_68 = local_68 + 4;
      local_4c = local_4c + 1;
    } while (local_4c < *(int *)(this + 0xc));
  }
  return;
}

