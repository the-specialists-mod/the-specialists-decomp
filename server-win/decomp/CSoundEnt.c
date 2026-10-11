/* mp.dll - CSoundEnt (8 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1003dc30  CSoundEnt::Spawn  (46 bytes)
 * undefined Spawn(int param_1)
 */
void __fastcall CSoundEnt::Spawn(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  Initialize(param_1);
  *(float *)(*(int *)(param_1 + 4) + 0x104) = gpGlobals->time + 1.0;
  return;
}

/* 1003dc60  CSoundEnt::Think  (172 bytes)
 * undefined Think()
 */
void __fastcall CSoundEnt::Think(CSoundEnt *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  param_1->pev->nextthink = gpGlobals->time + 0.3;
  iVar1 = -1;
  iVar2 = *(int *)&param_1->field_0x58;
  while (iVar2 != -1) {
    if ((gpGlobals->time < *(float *)(&param_1->field_0x78 + iVar2 * 0x20)) ||
       (*(int *)(&param_1->field_0x78 + iVar2 * 0x20) == -0x40800000)) {
      iVar1 = iVar2;
      iVar2 = *(int *)(&param_1->field_0x7c + iVar2 * 0x20);
    }
    else {
      iVar3 = *(int *)(&param_1->field_0x7c + iVar2 * 0x20);
      FreeSound(iVar2,iVar1);
      iVar2 = iVar3;
    }
  }
  if (*(int *)&param_1->field_0x60 != 0) {
    iVar1 = ISoundsInList(param_1,2);
    iVar1 = iVar1 - *(int *)&param_1->field_0x5c;
    iVar2 = ISoundsInList(param_1,1);
    iVar3 = ISoundsInList(param_1,2);
    (*g_engfuncs.pfnAlertMessage)(at_aiconsole,s_Soundlist___d____d___d__100a22d0,iVar3,iVar2,iVar1)
    ;
    iVar1 = ISoundsInList(param_1,2);
    *(int *)&param_1->field_0x5c = iVar1;
  }
  return;
}

/* 1003dd10  CSoundEnt::FreeSound  (83 bytes)
 * undefined FreeSound(int param_1, int param_2)
 * called by: CSoundEnt::Think
 */
void __cdecl CSoundEnt::FreeSound(int param_1,int param_2)

{
  if (DAT_100c0540 != 0) {
    if (param_2 == -1) {
      *(undefined4 *)(DAT_100c0540 + 0x58) = *(undefined4 *)(param_1 * 0x20 + 0x7c + DAT_100c0540);
    }
    else {
      *(undefined4 *)(param_2 * 0x20 + 0x7c + DAT_100c0540) =
           *(undefined4 *)(param_1 * 0x20 + 0x7c + DAT_100c0540);
    }
    *(undefined4 *)(param_1 * 0x20 + 0x7c + DAT_100c0540) = *(undefined4 *)(DAT_100c0540 + 0x54);
    *(int *)(DAT_100c0540 + 0x54) = param_1;
  }
  return;
}

/* 1003dd70  CSoundEnt::IAllocSound  (55 bytes)
 * int IAllocSound(int param_1)
 * called by: CSoundEnt::Initialize, CSoundEnt::InsertSound
 */
int __fastcall CSoundEnt::IAllocSound(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 == -1) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_Free_Sound_List_is_full__100a22ec);
    return -1;
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 * 0x20 + 0x7c + param_1);
  *(undefined4 *)(iVar1 * 0x20 + 0x7c + param_1) = *(undefined4 *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = iVar1;
  return iVar1;
}

/* 1003ddb0  CSoundEnt::InsertSound  (123 bytes)
 * undefined InsertSound(undefined4 param_1, undefined4 * param_2, undefined4 param_3, float param_4)
 * called by: CBasePlayer::PostThink, CGib::WaitTillLand
 */
void __cdecl
CSoundEnt::InsertSound(undefined4 param_1,undefined4 *param_2,undefined4 param_3,float param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_100c0540 != 0) {
    iVar2 = IAllocSound(DAT_100c0540);
    if (iVar2 == -1) {
      (*g_engfuncs.pfnAlertMessage)(at_console,s_Could_not_AllocSound___for_Inser_100a2308);
      return;
    }
    iVar2 = iVar2 * 0x20;
    puVar1 = (undefined4 *)(iVar2 + 100 + DAT_100c0540);
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    *(undefined4 *)(iVar2 + 0x70 + DAT_100c0540) = param_1;
    *(undefined4 *)(iVar2 + 0x74 + DAT_100c0540) = param_3;
    *(float *)(iVar2 + 0x78 + DAT_100c0540) = param_4 + gpGlobals->time;
  }
  return;
}

/* 1003de30  CSoundEnt::Initialize  (185 bytes)
 * undefined Initialize(int param_1)
 * called by: CSoundEnt::Spawn
 */
void __fastcall CSoundEnt::Initialize(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float10 extraout_ST0;
  
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  piVar3 = (int *)(param_1 + 0x7c);
  do {
    CSound::Clear(piVar3 + -6);
    iVar2 = iVar2 + 1;
    *piVar3 = iVar2;
    piVar3 = piVar3 + 8;
  } while (iVar2 < 0x40);
  *(undefined4 *)(iVar2 * 0x20 + 0x5c + param_1) = 0xffffffff;
  iVar2 = 0;
  if (0 < gpGlobals->maxClients) {
    do {
      iVar1 = IAllocSound(DAT_100c0540);
      if (iVar1 == -1) {
        (*g_engfuncs.pfnAlertMessage)(at_console,s_Could_not_AllocSound___for_Clien_100a2338);
        return;
      }
      iVar2 = iVar2 + 1;
      *(undefined4 *)(iVar1 * 0x20 + 0x78 + DAT_100c0540) = 0xbf800000;
    } while (iVar2 < gpGlobals->maxClients);
  }
  (*g_engfuncs.pfnCVarGetFloat)(s_displaysoundlist_1009f1dc);
  if (extraout_ST0 != (float10)1.0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x60) = 1;
  return;
}

/* 1003def0  CSoundEnt::ISoundsInList  (77 bytes)
 * int ISoundsInList(int param_1)
 * called by: CSoundEnt::Think
 */
int __thiscall CSoundEnt::ISoundsInList(CSoundEnt *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 1) {
    param_1 = *(int *)&this->field_0x54;
  }
  else if (param_1 == 2) {
    param_1 = *(int *)&this->field_0x58;
  }
  else {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_Unknown_Sound_List_Type__100a236c);
  }
  if (param_1 == -1) {
    return 0;
  }
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    param_1 = *(int *)(&this->field_0x7c + param_1 * 0x20);
  } while (param_1 != -1);
  return iVar1;
}

/* 1003df40  CSoundEnt::SoundPointerForIndex  (72 bytes)
 * int SoundPointerForIndex(int param_1)
 * called by: CBasePlayer::Killed, CBasePlayer::UpdatePlayerSound
 */
int __cdecl CSoundEnt::SoundPointerForIndex(int param_1)

{
  if (DAT_100c0540 == 0) {
    return 0;
  }
  if (0x3f < param_1) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_SoundPointerForIndex_____Index_t_100a23b0);
    return 0;
  }
  if (param_1 < 0) {
    (*g_engfuncs.pfnAlertMessage)(at_console,s_SoundPointerForIndex_____Index_<_100a2388);
    return 0;
  }
  return param_1 * 0x20 + 100 + DAT_100c0540;
}

