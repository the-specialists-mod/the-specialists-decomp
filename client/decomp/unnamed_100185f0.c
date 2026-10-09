/* client.dll - unnamed_100185f0 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 100185f0  FUN_100185f0  (385 bytes)
 * undefined FUN_100185f0(int param_1)
 * called by: FUN_10017ea0, FUN_100185d0
 */
void __thiscall FUN_100185f0(void *this,int param_1)

{
  int *piVar1;
  char playerID [16];
  bool bVar2;
  qboolean qVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  int iVar6;
  undefined4 unaff_ESI;
  float10 fVar7;
  int unaff_retaddr;
  char cStack00000018;
  undefined1 local_10 [14];
  char cStack_2;
  char cStack_1;
  
  iVar6 = param_1;
  piVar1 = *(int **)((int)this + param_1 * 4 + 0x17758);
  if ((piVar1 != (int *)0x0) &&
     (playerID._4_4_ = unaff_ESI, playerID._0_4_ = local_10, playerID._8_4_ = unaff_EBP,
     playerID._12_4_ = unaff_EBX, qVar3 = (*gEngfuncs.GetPlayerUniqueID)(param_1 + 1,playerID),
     qVar3 != 0)) {
    fVar7 = (float10)FUN_1006b9aa(extraout_ECX);
    cStack00000018 = fVar7 < (float10)0.3;
    bVar5 = (byte)iVar6 & 0x1f;
    iVar6 = iVar6 >> 5;
    cStack_1 = (1 << bVar5 & *(uint *)((int)this + iVar6 * 4 + 0x24)) != 0;
    bVar2 = FUN_10018cc0(this,unaff_retaddr);
    cStack_2 = !bVar2;
    bVar2 = FUN_100173a0((void *)((int)this + 0x177f8),&param_1);
    if (cStack_2 != '\0') {
      (**(code **)(*piVar1 + 0x1fc))(0);
      return;
    }
    if (bVar2) {
      (**(code **)(*piVar1 + 0x1fc))(*(undefined4 *)((int)this + 0x17754));
      return;
    }
    if (cStack_1 != '\0') {
      if (cStack00000018 == '\0') {
        uVar4 = *(undefined4 *)((int)this + 0x17748);
      }
      else {
        uVar4 = *(undefined4 *)((int)this + 0x1774c);
      }
      (**(code **)(*piVar1 + 0x1fc))(uVar4);
      (**(code **)(*piVar1 + 0x120))(0xff,0xaa,0,1);
      return;
    }
    if ((1 << bVar5 & *(uint *)((int)this + iVar6 * 4 + 0x2c)) == 0) {
      (**(code **)(*piVar1 + 0x1fc))(*(undefined4 *)((int)this + 0x17740));
      (**(code **)(*piVar1 + 0x120))(100,100,100,1);
      return;
    }
    (**(code **)(*piVar1 + 0x1fc))(*(undefined4 *)((int)this + 0x17744));
  }
  return;
}

/* 10018780  FUN_10018780  (166 bytes)
 * undefined FUN_10018780(undefined4 param_1, undefined4 param_2)
 */
void __thiscall FUN_10018780(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  char acStack_100 [256];
  
  FUN_100299b0(param_2,param_1);
  iVar1 = FUN_10029aa0();
  *(int *)((int)this + 0x28) = iVar1;
  iVar1 = FUN_10029aa0();
  *(int *)((int)this + 0x30) = iVar1;
  fVar3 = (float10)(*gEngfuncs.pfnGetCvarFloat)(s_voice_clientdebug_10092be0);
  if (fVar3 != (float10)0.0) {
    (*gEngfuncs.pfnConsolePrint)(s_CVoiceStatus__HandleVoiceMaskMsg_10092e7c);
    FUN_1006ac7a(acStack_100,(byte_conflict *)s___m_AudiblePlayers__d_____lu_10092e58);
    (*gEngfuncs.pfnConsolePrint)(acStack_100);
    FUN_1006ac7a(acStack_100,(byte_conflict *)s___m_ServerBannedPlayers__d_____l_10092e30);
    (*gEngfuncs.pfnConsolePrint)(acStack_100);
  }
  uVar2 = FUN_10029a10();
  *(uint *)((int)this + 0x1c) = uVar2;
  return;
}

/* 10018830  FUN_10018830  (57 bytes)
 * undefined FUN_10018830(void * param_1)
 */
void __fastcall FUN_10018830(void *param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)(*gEngfuncs.pfnGetCvarFloat)(s_voice_clientdebug_10092be0);
  if (fVar1 != (float10)0.0) {
    (*gEngfuncs.pfnConsolePrint)(s_CVoiceStatus__HandleReqStateMsg_10092ea0);
  }
  FUN_10018360(param_1,'\x01');
  return;
}

/* 10018870  FUN_10018870  (29 bytes)
 * undefined FUN_10018870(int param_1)
 */
void __fastcall FUN_10018870(int param_1)

{
  if (*(char *)(param_1 + 0x177d8) == '\0') {
    *(undefined1 *)(param_1 + 0x177d8) = 1;
                    /* WARNING: Could not recover jumptable at 0x10018889. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x17734) + 8))();
    return;
  }
  return;
}

/* 10018890  FUN_10018890  (18 bytes)
 * undefined FUN_10018890(int param_1)
 * called by: FUN_10063760
 */
void __fastcall FUN_10018890(int param_1)

{
  *(undefined1 *)(param_1 + 0x177d8) = 0;
                    /* WARNING: Could not recover jumptable at 0x1001889f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x17734) + 8))();
  return;
}

/* 100188b0  FUN_100188b0  (7 bytes)
 * undefined1 FUN_100188b0(int param_1)
 * called by: CL_CreateMove, FUN_1005db70, FUN_10064790, IN_MouseEvent
 */
undefined1 __fastcall FUN_100188b0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x177d8);
}

/* 100188c0  FUN_100188c0  (46 bytes)
 * int FUN_100188c0(int param_1)
 * called by: FUN_100180c0, FUN_100188f0
 */
int __thiscall FUN_100188c0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)((int)this + 0x19008);
  do {
    if (*piVar2 == param_1) {
      return iVar1 * 0x10 + 0x18ffc + (int)this;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 4;
  } while (iVar1 < 7);
  return 0;
}

/* 100188f0  FUN_100188f0  (8 bytes)
 * undefined FUN_100188f0(void * param_1)
 * called by: FUN_100180c0
 */
void __fastcall FUN_100188f0(void *param_1)

{
  FUN_100188c0(param_1,-1);
  return;
}

/* 10018900  FUN_10018900  (650 bytes)
 * undefined FUN_10018900(int param_1)
 * called by: FUN_100180c0
 */
void __fastcall FUN_10018900(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBX;
  int iVar3;
  int unaff_EBP;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined1 *puVar10;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined1 local_c [4];
  int local_8;
  int local_4;
  
  local_10 = DAT_100d590c / 2;
  local_14 = 8;
  local_18 = 8;
  local_8 = param_1;
  if (*(int **)(param_1 + 0x177e4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x177e4) + 8))(&local_14,&local_18);
  }
  piVar4 = (int *)(param_1 + 0x19004);
  local_4 = 7;
  do {
    if ((piVar4[1] == -1) || ((int *)piVar4[-2] == (int *)0x0)) {
      if ((int *)*piVar4 != (int *)0x0) {
        (**(code **)(*(int *)*piVar4 + 0x24))(0);
      }
      if ((int *)piVar4[-1] != (int *)0x0) {
        (**(code **)(*(int *)piVar4[-1] + 0x24))(0);
      }
      if ((int *)piVar4[-2] != (int *)0x0) {
        (**(code **)(*(int *)piVar4[-2] + 0x24))(0);
      }
    }
    else {
      puVar10 = local_c;
      piVar9 = &local_1c;
      (**(code **)(*(int *)piVar4[-2] + 0x214))(piVar9);
      iVar1 = (DAT_100d5908 * 2) / 3;
      if (iVar1 < unaff_EBP) {
        unaff_EBP = iVar1;
      }
      iVar1 = unaff_EBP + 6 + local_1c;
      iVar3 = unaff_EBX;
      if (unaff_EBX < local_14) {
        iVar3 = local_14;
      }
      iVar3 = iVar3 + 4;
      iVar5 = (DAT_100d5908 - iVar1) + -8;
      iVar8 = local_18;
      (**(code **)(*(int *)piVar4[-1] + 0x10))(iVar5,local_18,iVar1,iVar3);
      iVar7 = unaff_EBP;
      (**(code **)(*(int *)piVar4[-2] + 0x10))(2,(iVar3 - unaff_EBP) / 2,piVar9,unaff_EBP);
      iVar1 = iVar5 + 4;
      if ((int *)*piVar4 == (int *)0x0) {
        (**(code **)(iRam00000000 + 0x24))(0);
      }
      else {
        (**(code **)(*(int *)*piVar4 + 0x1fc))(*(undefined4 *)(puVar10 + 0x177e4));
        (**(code **)(*(int *)*piVar4 + 0x24))(1);
        (**(code **)(*(int *)*piVar4 + 0x10))(iVar1,(iVar3 - iVar8) / 2,iVar5,iVar7);
      }
      local_10 = local_10 + 2 + iVar3;
      param_1 = local_8;
    }
    piVar4 = piVar4 + 4;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  if ((((*(int *)(param_1 + 0x177e8) == 0) || (*(int *)(param_1 + 0x177ec) == 0)) ||
      (*(int **)(param_1 + 0x177f0) == (int *)0x0)) ||
     ((*(char *)(param_1 + 0x177f4) == '\0' && (*(char *)(param_1 + 0x177f5) == '\0')))) {
    (**(code **)(**(int **)(param_1 + 0x177f0) + 0x24))(0);
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x177f0) + 0x40))(**(undefined4 **)(param_1 + 0x20));
  (**(code **)(**(int **)(param_1 + 0x177f0) + 0x24))(1);
  if (*(char *)(param_1 + 0x177f5) != '\0') {
    fVar6 = (float10)(*gEngfuncs.pfnGetCvarFloat)(s_voice_clientdebug_10092be0);
    if (fVar6 != (float10)0.0) {
      uVar2 = *(undefined4 *)(param_1 + 0x177ec);
      iVar1 = **(int **)(param_1 + 0x177f0);
      goto LAB_10018b25;
    }
  }
  uVar2 = *(undefined4 *)(param_1 + 0x177e8);
  iVar1 = **(int **)(param_1 + 0x177f0);
LAB_10018b25:
  (**(code **)(iVar1 + 0x1fc))(uVar2);
  (**(code **)(**(int **)(param_1 + 0x177e8) + 8))(&local_10,&local_14);
  iVar3 = DAT_100d5908 - local_18;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x17734) + 0xc))();
  (**(code **)**(undefined4 **)(param_1 + 0x177f0))(iVar3 + -10,iVar1 - local_1c);
  return;
}

/* 10018b90  FUN_10018b90  (229 bytes)
 * undefined FUN_10018b90(int param_1)
 * called by: FUN_100177e0, FUN_10017af0
 */
void __fastcall FUN_10018b90(int param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_1006ad4c(*(LPVOID *)(param_1 + 0x177e8));
  *(undefined4 *)(param_1 + 0x177e8) = 0;
  FUN_1006ad4c(*(LPVOID *)(param_1 + 0x177ec));
  *(undefined4 *)(param_1 + 0x177ec) = 0;
  FUN_1006ad4c(*(LPVOID *)(param_1 + 0x177e4));
  *(undefined4 *)(param_1 + 0x177e4) = 0;
  FUN_1006ad4c(*(LPVOID *)(param_1 + 0x17740));
  *(undefined4 *)(param_1 + 0x17740) = 0;
  FUN_1006ad4c(*(LPVOID *)(param_1 + 0x17744));
  *(undefined4 *)(param_1 + 0x17744) = 0;
  FUN_1006ad4c(*(LPVOID *)(param_1 + 0x17748));
  *(undefined4 *)(param_1 + 0x17748) = 0;
  FUN_1006ad4c(*(LPVOID *)(param_1 + 0x1774c));
  *(undefined4 *)(param_1 + 0x1774c) = 0;
  FUN_1006ad4c(*(LPVOID *)(param_1 + 0x17750));
  *(undefined4 *)(param_1 + 0x17750) = 0;
  FUN_1006ad4c(*(LPVOID *)(param_1 + 0x17754));
  *(undefined4 *)(param_1 + 0x17754) = 0;
  piVar1 = (int *)(param_1 + 0x17758);
  iVar2 = 0x20;
  do {
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 0x1fc))(0);
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(int **)(param_1 + 0x177f0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x177f0) + 0x1fc))(0);
  }
  return;
}

/* 10018c80  FUN_10018c80  (61 bytes)
 * bool FUN_10018c80(undefined4 param_1)
 * called by: FUN_1002ed00
 */
bool __thiscall FUN_10018c80(void *this,int param_1)

{
  char playerID [16];
  bool bVar1;
  qboolean qVar2;
  undefined4 unaff_ESI;
  undefined8 in_stack_fffffff0;
  
  playerID._4_4_ = unaff_ESI;
  playerID._0_4_ = &stack0xfffffff0;
  playerID._8_8_ = in_stack_fffffff0;
  qVar2 = (*gEngfuncs.GetPlayerUniqueID)(param_1,playerID);
  if (qVar2 == 0) {
    return false;
  }
  bVar1 = FUN_100173a0((void *)((int)this + 0x177f8),&param_1);
  return bVar1;
}

/* 10018cc0  FUN_10018cc0  (41 bytes)
 * bool FUN_10018cc0(int param_1)
 * called by: FUN_100185f0, FUN_1005e870
 */
bool __thiscall FUN_10018cc0(void *this,int param_1)

{
  return (1 << ((byte)(param_1 + -1) & 0x1f) & *(uint *)((int)this + (param_1 + -1 >> 5) * 4 + 0x28)
         ) != 0;
}

/* 10018cf0  FUN_10018cf0  (281 bytes)
 * undefined FUN_10018cf0(int param_1)
 */
void __thiscall FUN_10018cf0(void *this,int param_1)

{
  char playerID [16];
  bool bVar1;
  qboolean qVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  int in_stack_0000000c;
  undefined8 in_stack_fffffef0;
  undefined4 in_stack_fffffef8;
  int iStack_e8;
  int aiStack_e4 [3];
  char acStack_d8 [216];
  
  (*gEngfuncs.pfnGetCvarFloat)(s_voice_clientdebug_10092be0);
  if (extraout_ST0 != (float10)0.0) {
    (*gEngfuncs.pfnConsolePrint)(s_CVoiceStatus__SetPlayerBlockedSt_10092f34);
  }
  playerID[4] = (char)in_stack_fffffef0;
  playerID[5] = (char)((ulonglong)in_stack_fffffef0 >> 8);
  playerID[6] = (char)((ulonglong)in_stack_fffffef0 >> 0x10);
  playerID[7] = (char)((ulonglong)in_stack_fffffef0 >> 0x18);
  playerID[8] = (char)((ulonglong)in_stack_fffffef0 >> 0x20);
  playerID[9] = (char)((ulonglong)in_stack_fffffef0 >> 0x28);
  playerID[10] = (char)((ulonglong)in_stack_fffffef0 >> 0x30);
  playerID[0xb] = (char)((ulonglong)in_stack_fffffef0 >> 0x38);
  playerID._0_4_ = &stack0xfffffef8;
  playerID[0xc] = (char)in_stack_fffffef8;
  playerID[0xd] = (char)((uint)in_stack_fffffef8 >> 8);
  playerID[0xe] = (char)((uint)in_stack_fffffef8 >> 0x10);
  playerID[0xf] = (char)((uint)in_stack_fffffef8 >> 0x18);
  qVar2 = (*gEngfuncs.GetPlayerUniqueID)(in_stack_0000000c,playerID);
  if (qVar2 != 0) {
    (*gEngfuncs.pfnGetCvarFloat)(s_voice_clientdebug_10092be0);
    if (extraout_ST0_00 != (float10)0.0) {
      (*gEngfuncs.pfnConsolePrint)(s_CVoiceStatus__SetPlayerBlockedSt_10092f08);
    }
    if ((*(uint *)((int)this + (in_stack_0000000c + -1 >> 5) * 4 + 0x28) &
        1 << ((byte)(in_stack_0000000c + -1) & 0x1f)) != 0) {
      (*gEngfuncs.pfnGetCvarFloat)(s_voice_clientdebug_10092be0);
      if (extraout_ST0_01 != (float10)0.0) {
        FUN_100173a0((void *)((int)this + 0x177f8),&iStack_e8);
        FUN_1006ac7a(acStack_d8,(byte_conflict *)s_CVoiceStatus__SetPlayerBlockedSt_10092ec4);
        (*gEngfuncs.pfnConsolePrint)(acStack_d8);
      }
      bVar1 = FUN_100173a0((void *)((int)this + 0x177f8),aiStack_e4);
      FUN_100173c0((void *)((int)this + 0x177f8),aiStack_e4,!bVar1);
      FUN_10018360(this,'\0');
    }
  }
  return;
}

/* 10018f50  FUN_10018f50  (10 bytes)
 * undefined FUN_10018f50(void)
 */
void FUN_10018f50(void)

{
  FUN_100191b0((Panel *)&DAT_100cc3a0);
  return;
}

/* 10018f60  FUN_10018f60  (12 bytes)
 * undefined FUN_10018f60(void)
 */
void FUN_10018f60(void)

{
  FUN_1006af63(0x10018f70);
  return;
}

/* 10018fb0  FUN_10018fb0  (59 bytes)
 * Label * FUN_10018fb0(Label * param_1)
 * called by: FUN_100191b0
 */
Label * __fastcall FUN_10018fb0(Label *param_1)

{
  vgui::Label::Label(param_1,s_);
  vgui::ScrollBar::ScrollBar((ScrollBar *)(param_1 + 0xd0),0,0,0,0,false);
  vgui::Slider::Slider((Slider *)(param_1 + 0x1a8),0,0,10,10,false);
  return param_1;
}

/* 10018ff0  FUN_10018ff0  (352 bytes)
 * undefined FUN_10018ff0(int * param_1)
 */
void __thiscall FUN_10018ff0(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  void *local_4;
  
  piVar1 = param_1;
  local_4 = this;
  (**(code **)(*param_1 + 0xc))(&param_1,&local_4);
  (**(code **)(*(int *)this + 0x40))(piVar1);
  (**(code **)(*(int *)this + 0x20c))(1);
  iVar7 = 0;
  (**(code **)(*(int *)this + 0x21c))(0);
  iVar6 = 0;
  (**(code **)(*(int *)this + 300))(0,0,0,0xff);
  uVar5 = 0;
  (**(code **)(*(int *)this + 0x120))(0xff,0xff,0xff,0);
  iVar4 = iVar7;
  (*(code *)**(undefined4 **)this)(0x28,iVar7);
  iVar3 = 0x14;
  (**(code **)(*(int *)this + 8))(iVar6 / 2 + -0x28,0x14);
  (**(code **)(*(int *)this + 0x200))(this,uVar5);
  (**(code **)(*(int *)this + 0x24))(1);
  (**(code **)(*(int *)((int)this + 0x1a8) + 0x214))(10);
  (**(code **)(*(int *)((int)this + 0x1a8) + 0x218))(1);
  piVar2 = (int *)((int)this + 0xd0);
  (*(code *)**(undefined4 **)((int)this + 0xd0))(iVar4 / 2 + 0x28,iVar7);
  (**(code **)(*piVar2 + 8))(iVar3 / 2 + -0x50,0x14);
  (**(code **)(*piVar2 + 0x224))((int *)((int)this + 0x1a8));
  (**(code **)(*piVar2 + 0x40))(piVar1);
  (**(code **)(*piVar2 + 0x208))(0,100);
  (**(code **)(*piVar2 + 0x120))(0xff,0xff,0xff,0);
  (**(code **)(*piVar2 + 300))(0xff,0xff,0xff,0);
  return;
}

/* 10019150  FUN_10019150  (35 bytes)
 * float10 FUN_10019150(int param_1)
 */
float10 __fastcall FUN_10019150(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0xd0) + 0x200))(param_1);
  return (float10)iVar1 * (float10)0.01;
}

/* 10019180  FUN_10019180  (39 bytes)
 * undefined FUN_10019180(int param_1)
 */
void __fastcall FUN_10019180(int param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0xd0);
  lVar2 = __ftol();
  (**(code **)(iVar1 + 0x1fc))((int)lVar2);
  return;
}

/* 100191b0  FUN_100191b0  (256 bytes)
 * Panel * FUN_100191b0(Panel * param_1)
 * called by: FUN_10018f50
 */
Panel * __fastcall FUN_100191b0(Panel *param_1)

{
  void *unaff_EDI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1007789e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  vgui::Panel::Panel(param_1,0,0,0,0);
  *(undefined4 *)(param_1 + 0xbc) = 0x96;
  *(undefined ***)param_1 = &PTR_setPos_1007c8d0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined ***)(param_1 + 0xd4) = &PTR_LAB_1007c8cc;
  vgui::Label::Label((Label *)(param_1 + 0xe0),s_);
  FUN_10018fb0((Label *)(param_1 + 0x1b4));
  FUN_10018fb0((Label *)(param_1 + 0x458));
  FUN_100584a0(param_1 + 0x6fc);
  local_4 = 0;
  vgui::Button::Button((Button *)(param_1 + 0x960),s_,0,0);
  *(undefined ***)param_1 = &PTR_setPos_1007c6bc;
  *(undefined ***)(param_1 + 0xd4) = &PTR_LAB_1007c6b8;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  (**(code **)(*(int *)(param_1 + 0x960) + 0x240))(&DAT_100cc398);
  (**(code **)(*(int *)(param_1 + 0xe0) + 300))(0xff,0xff,0xff,200);
  ExceptionList = unaff_EDI;
  return param_1;
}

/* 10019590  FUN_10019590  (62 bytes)
 * undefined FUN_10019590(int * param_1)
 */
void __fastcall FUN_10019590(int *param_1)

{
  (**(code **)(param_1[0x6c] + 4))();
  DAT_100ccdf0 = 0;
  (**(code **)(*param_1 + 0x24))(0);
  param_1[0x33] = 0;
  if (param_1[0x32] != 0) {
    (**(code **)(*DAT_100d5cb0 + 0x4c))(param_1);
  }
  return;
}

/* 100196d0  FUN_100196d0  (52 bytes)
 * undefined FUN_100196d0(int * param_1)
 */
void __fastcall FUN_100196d0(int *param_1)

{
  if (param_1[0x2f] != 0) {
    (**(code **)(*param_1 + 0x178))(0,0,0,param_1[0x2f]);
    (**(code **)(*param_1 + 0x180))(0,0,param_1[3],param_1[4]);
  }
  return;
}

/* 10019730  FUN_10019730  (24 bytes)
 * undefined FUN_10019730(int * param_1)
 */
void __fastcall FUN_10019730(int *param_1)

{
  (**(code **)(*param_1 + 0x24))(1);
  param_1[0x34] = DAT_100cf944;
  return;
}

/* 10019750  FUN_10019750  (44 bytes)
 * undefined FUN_10019750(int * param_1)
 */
void __fastcall FUN_10019750(int *param_1)

{
  (**(code **)(*param_1 + 0x24))(0);
  param_1[0x33] = 0;
  if (param_1[0x32] != 0) {
    (**(code **)(*DAT_100d5cb0 + 0x4c))(param_1);
  }
  return;
}

/* 10019790  FUN_10019790  (43 bytes)
 * undefined FUN_10019790(int param_1)
 * called by: FUN_10019f40
 */
void __fastcall FUN_10019790(int param_1)

{
  int iVar1;
  
  iVar1 = 0x20;
  do {
    if (*(int *)(param_1 + 0x9c) != 0) {
      FUN_100197c0(param_1);
    }
    param_1 = param_1 + 0x148;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

/* 100197c0  FUN_100197c0  (1323 bytes)
 * undefined FUN_100197c0(int param_1)
 * called by: FUN_10019790, FUN_1001a3d0
 */
void FUN_100197c0(int param_1)

{
  int iVar1;
  client_sprite_t *pcVar2;
  byte_conflict *pbVar3;
  HSPRITE HVar4;
  int iVar5;
  int local_88;
  int local_84;
  char local_80 [128];
  
  iVar1 = ((0x27f < DAT_100d5908) - 1 & 0xfffffec0) + 0x280;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xe4) = 0;
    local_84 = iVar1;
    FUN_1006ac7a(local_80,(byte_conflict *)s_sprites__s_txt_1009305c);
    pcVar2 = (*gEngfuncs.pfnSPR_GetList)(local_80,&local_88);
    if (pcVar2 != (client_sprite_t *)0x0) {
      pbVar3 = FUN_1001a520((byte_conflict *)pcVar2,(byte_conflict *)s_crosshair_10093050,iVar1,
                            local_88);
      if (pbVar3 == (byte_conflict *)0x0) {
        *(undefined4 *)(param_1 + 0xf8) = 0;
      }
      else {
        FUN_1006ac7a(local_80,(byte_conflict *)s_sprites__s_spr_10093040);
        HVar4 = (*gEngfuncs.pfnSPR_Load)(local_80);
        *(HSPRITE *)(param_1 + 0xf8) = HVar4;
        *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(pbVar3 + 0x88);
        *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(pbVar3 + 0x8c);
        *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(pbVar3 + 0x90);
        *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(pbVar3 + 0x94);
      }
      pbVar3 = FUN_1001a520((byte_conflict *)pcVar2,(byte_conflict *)s_autoaim_10093038,local_84,
                            local_88);
      if (pbVar3 == (byte_conflict *)0x0) {
        *(undefined4 *)(param_1 + 0x10c) = 0;
      }
      else {
        FUN_1006ac7a(local_80,(byte_conflict *)s_sprites__s_spr_10093040);
        HVar4 = (*gEngfuncs.pfnSPR_Load)(local_80);
        *(HSPRITE *)(param_1 + 0x10c) = HVar4;
        *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(pbVar3 + 0x88);
        *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(pbVar3 + 0x8c);
        *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(pbVar3 + 0x90);
        *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(pbVar3 + 0x94);
      }
      pbVar3 = FUN_1001a520((byte_conflict *)pcVar2,&DAT_10093030,local_84,local_88);
      if (pbVar3 == (byte_conflict *)0x0) {
        *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0xf8);
        *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0xfc);
        *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0x100);
        *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0x104);
        *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x108);
      }
      else {
        FUN_1006ac7a(local_80,(byte_conflict *)s_sprites__s_spr_10093040);
        HVar4 = (*gEngfuncs.pfnSPR_Load)(local_80);
        *(HSPRITE *)(param_1 + 0x120) = HVar4;
        *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(pbVar3 + 0x88);
        *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(pbVar3 + 0x8c);
        *(undefined4 *)(param_1 + 300) = *(undefined4 *)(pbVar3 + 0x90);
        *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(pbVar3 + 0x94);
      }
      pbVar3 = FUN_1001a520((byte_conflict *)pcVar2,(byte_conflict *)s_zoom_autoaim_10093020,
                            local_84,local_88);
      if (pbVar3 == (byte_conflict *)0x0) {
        *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x120);
        *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0x124);
        *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x128);
        *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 300);
        *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x130);
      }
      else {
        FUN_1006ac7a(local_80,(byte_conflict *)s_sprites__s_spr_10093040);
        HVar4 = (*gEngfuncs.pfnSPR_Load)(local_80);
        *(HSPRITE *)(param_1 + 0x134) = HVar4;
        *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(pbVar3 + 0x88);
        *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(pbVar3 + 0x8c);
        *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(pbVar3 + 0x90);
        *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(pbVar3 + 0x94);
      }
      iVar1 = local_84;
      pbVar3 = FUN_1001a520((byte_conflict *)pcVar2,(byte_conflict *)s_weapon_10093018,local_84,
                            local_88);
      if (pbVar3 == (byte_conflict *)0x0) {
        *(undefined4 *)(param_1 + 0xbc) = 0;
      }
      else {
        FUN_1006ac7a(local_80,(byte_conflict *)s_sprites__s_spr_10093040);
        HVar4 = (*gEngfuncs.pfnSPR_Load)(local_80);
        *(HSPRITE *)(param_1 + 0xbc) = HVar4;
        *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(pbVar3 + 0x88);
        *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(pbVar3 + 0x8c);
        *(undefined4 *)(param_1 + 200) = *(undefined4 *)(pbVar3 + 0x90);
        *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(pbVar3 + 0x94);
        iVar5 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4);
        if (DAT_100cf910 <= iVar5) {
          DAT_100cf910 = iVar5;
        }
      }
      pbVar3 = FUN_1001a520((byte_conflict *)pcVar2,(byte_conflict *)s_weapon_s_1009300c,iVar1,
                            local_88);
      if (pbVar3 == (byte_conflict *)0x0) {
        *(undefined4 *)(param_1 + 0xa8) = 0;
      }
      else {
        FUN_1006ac7a(local_80,(byte_conflict *)s_sprites__s_spr_10093040);
        HVar4 = (*gEngfuncs.pfnSPR_Load)(local_80);
        *(HSPRITE *)(param_1 + 0xa8) = HVar4;
        *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(pbVar3 + 0x88);
        *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(pbVar3 + 0x8c);
        *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(pbVar3 + 0x90);
        *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(pbVar3 + 0x94);
      }
      pbVar3 = FUN_1001a520((byte_conflict *)pcVar2,&DAT_10093004,iVar1,local_88);
      if (pbVar3 == (byte_conflict *)0x0) {
        *(undefined4 *)(param_1 + 0xd0) = 0;
      }
      else {
        FUN_1006ac7a(local_80,(byte_conflict *)s_sprites__s_spr_10093040);
        HVar4 = (*gEngfuncs.pfnSPR_Load)(local_80);
        *(HSPRITE *)(param_1 + 0xd0) = HVar4;
        *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(pbVar3 + 0x88);
        *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(pbVar3 + 0x8c);
        *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(pbVar3 + 0x90);
        *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(pbVar3 + 0x94);
        iVar5 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4);
        if (DAT_100cf910 <= iVar5) {
          DAT_100cf910 = iVar5;
        }
      }
      pbVar3 = FUN_1001a520((byte_conflict *)pcVar2,(byte_conflict *)s_ammo2_10092ffc,iVar1,local_88
                           );
      if (pbVar3 == (byte_conflict *)0x0) {
        *(undefined4 *)(param_1 + 0xe4) = 0;
      }
      else {
        FUN_1006ac7a(local_80,(byte_conflict *)s_sprites__s_spr_10093040);
        HVar4 = (*gEngfuncs.pfnSPR_Load)(local_80);
        *(HSPRITE *)(param_1 + 0xe4) = HVar4;
        *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(pbVar3 + 0x88);
        *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(pbVar3 + 0x8c);
        *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(pbVar3 + 0x90);
        *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(pbVar3 + 0x94);
        iVar1 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4);
        if (DAT_100cf910 <= iVar1) {
          DAT_100cf910 = iVar1;
          return;
        }
      }
    }
  }
  return;
}

/* 10019de0  FUN_10019de0  (263 bytes)
 * undefined4 FUN_10019de0(int * param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10019de0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_10020a40(&DAT_100cf920,(int)param_1);
  (*gEngfuncs.pfnHookUserMsg)(s_CurWeapon_100930ec,(pfnUserMsgHook)&LAB_10019cf0);
  (*gEngfuncs.pfnHookUserMsg)(s_WeaponList_100930e0,(pfnUserMsgHook)&LAB_10019d10);
  (*gEngfuncs.pfnHookUserMsg)(s_AmmoPickup_100930d4,(pfnUserMsgHook)&LAB_10019d50);
  (*gEngfuncs.pfnHookUserMsg)(s_WeapPickup_100930c8,(pfnUserMsgHook)&LAB_10019d70);
  (*gEngfuncs.pfnHookUserMsg)(s_ItemPickup_100930bc,(pfnUserMsgHook)&LAB_10019db0);
  (*gEngfuncs.pfnHookUserMsg)(s_HideWeapon_100930b0,(pfnUserMsgHook)&LAB_10019d90);
  (*gEngfuncs.pfnHookUserMsg)(s_AmmoX_100930a8,(pfnUserMsgHook)&LAB_10019d30);
  (*gEngfuncs.pfnAddCommand)(s_cancelselect_10093098,(function *)&LAB_10019dd0);
  (**(code **)(*param_1 + 0x14))();
  (*gEngfuncs.pfnRegisterVariable)(s_hud_drawhistory_time_1009307c,&DAT_10093094,0);
  (*gEngfuncs.pfnRegisterVariable)(s_hud_fastswitch_1009306c,&DAT_10092bf4,1);
  param_1[4] = param_1[4] | 1;
  puVar2 = &DAT_100ccdf8;
  for (iVar1 = 0xa40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  _DAT_100cf808 = 0;
  puVar2 = &DAT_100cf6f8;
  for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_100cf788;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_100cf850;
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return 1;
}

/* 10019f40  FUN_10019f40  (229 bytes)
 * undefined4 FUN_10019f40(int param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10019f40(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_10020670(&DAT_100cf920,s_bucket1_10093104);
  *(int *)(param_1 + 0x20) = iVar1;
  iVar1 = FUN_10020670(&DAT_100cf920,s_selection_100930f8);
  *(int *)(param_1 + 0x24) = iVar1;
  if (*(int *)(param_1 + 0x20) < 0) {
    _DAT_100cf830 = 0;
  }
  else {
    _DAT_100cf830 = *(undefined4 *)(DAT_100cf98c + *(int *)(param_1 + 0x20) * 4);
  }
  piVar2 = (int *)(*(int *)(param_1 + 0x20) * 0x10 + DAT_100cf990);
  _DAT_100cf838 = piVar2[1] - *piVar2;
  iVar1 = *(int *)(param_1 + 0x20) * 0x10 + DAT_100cf990;
  _DAT_100cf844 = *(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8);
  iVar1 = *(int *)(param_1 + 0x20) * 0x10 + DAT_100cf990;
  iVar1 = *(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8);
  if (DAT_100cf910 <= iVar1) {
    DAT_100cf910 = iVar1;
  }
  FUN_10019790(0x100ccdf8);
  if (0x27f < DAT_100d5908) {
    _DAT_100cf83c = 0x14;
    _DAT_100cf80c = 4;
    return 1;
  }
  _DAT_100cf83c = 10;
  _DAT_100cf80c = 2;
  return 1;
}

/* 1001a030  FUN_1001a030  (52 bytes)
 * undefined4 FUN_1001a030(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 FUN_1001a030(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  uVar2 = FUN_10029a10();
  (&DAT_100cf788)[uVar1] = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
  return 1;
}

/* 1001a070  FUN_1001a070  (59 bytes)
 * undefined4 FUN_1001a070(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 FUN_1001a070(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  uVar2 = FUN_10029a10();
  FUN_1001a710(&DAT_100cf850,1,uVar1,(uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f));
  return 1;
}

/* 1001a0b0  FUN_1001a0b0  (46 bytes)
 * undefined4 FUN_1001a0b0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 FUN_1001a0b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  FUN_1001a710(&DAT_100cf850,2,uVar1,0);
  return 1;
}

/* 1001a0e0  FUN_1001a0e0  (46 bytes)
 * undefined4 FUN_1001a0e0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 FUN_1001a0e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  
  FUN_100299b0(param_3,param_2);
  pcVar1 = FUN_10029b00();
  FUN_1001a7b0(&DAT_100cf850,3,pcVar1,0);
  return 1;
}

/* 1001a110  FUN_1001a110  (189 bytes)
 * undefined4 FUN_1001a110(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_1001a110(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  wrect_t rc;
  
  FUN_100299b0(param_3,param_2);
  _DAT_100cf974 = FUN_10029a10();
  if ((_DAT_100cf974 & 5) != 0) {
    DAT_100cf840 = 0;
    rc.right = DAT_100cf814;
    rc.left = DAT_100cf810;
    rc.top = DAT_100cf818;
    rc.bottom = DAT_100cf81c;
    (*gEngfuncs.pfnSetCrosshair)(0,rc,0,0,0);
    return 1;
  }
  iVar1 = *(int *)((int)this + 0x1c);
  if (iVar1 != 0) {
    (*gEngfuncs.pfnSetCrosshair)
              (*(HSPRITE *)(iVar1 + 0xf8),*(wrect_t *)(iVar1 + 0xfc),0xff,0xff,0xff);
  }
  return 1;
}

/* 1001a1d0  FUN_1001a1d0  (506 bytes)
 * undefined4 FUN_1001a1d0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_1001a1d0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  wrect_t rc;
  wrect_t rc_00;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  HSPRITE hspr;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  FUN_100299b0(param_3,param_2);
  uVar3 = FUN_10029a10();
  iVar4 = FUN_100299d0();
  uVar5 = FUN_100299d0();
  if (iVar4 < 1) {
    rc.right = DAT_100cf824;
    rc.left = DAT_100cf820;
    rc.top = DAT_100cf828;
    rc.bottom = DAT_100cf82c;
    (*gEngfuncs.pfnSetCrosshair)(0,rc,0,0,0);
    return 0;
  }
  if ((iVar4 == -1) && (uVar5 == 0xffffffff)) {
    _DAT_100d5b1c = 1;
    DAT_100cf840 = 0;
    return 1;
  }
  _DAT_100d5b1c = 0;
  iVar1 = iVar4 * 0x148;
  if (&DAT_100ccdf8 + iVar4 * 0x52 == (undefined4 *)0x0) {
    return 0;
  }
  if ((int)uVar5 < -1) {
    uVar5 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
  }
  *(uint *)(&DAT_100cce98 + iVar1) = uVar5;
  if (uVar3 == 0) {
    return 1;
  }
  *(undefined4 **)((int)this + 0x1c) = &DAT_100ccdf8 + iVar4 * 0x52;
  if ((DAT_100cf974 & 5) != 0) goto LAB_1001a3af;
  if (DAT_100cf978 < 0x5a) {
    if (((int)uVar3 >= 2) && (hspr = *(HSPRITE *)(&DAT_100ccf2c + iVar1), hspr != 0)) {
      puVar2 = &DAT_100ccf30;
      goto LAB_1001a352;
    }
    uVar7 = *(undefined4 *)(&DAT_100ccf1c + iVar1);
    uVar8 = *(undefined4 *)(&DAT_100ccf20 + iVar1);
    uVar9 = *(undefined4 *)(&DAT_100ccf24 + iVar1);
    iVar4 = *(int *)(&DAT_100ccf28 + iVar1);
    hspr = *(HSPRITE *)(&DAT_100ccf18 + iVar1);
  }
  else if (((int)uVar3 < 2) || (hspr = *(HSPRITE *)(&DAT_100ccf04 + iVar1), hspr == 0)) {
    uVar7 = *(undefined4 *)(&DAT_100ccef4 + iVar1);
    uVar8 = *(undefined4 *)(&DAT_100ccef8 + iVar1);
    uVar9 = *(undefined4 *)(&DAT_100ccefc + iVar1);
    iVar4 = *(int *)(&DAT_100ccf00 + iVar1);
    hspr = *(HSPRITE *)(&DAT_100ccef0 + iVar1);
  }
  else {
    puVar2 = &DAT_100ccf08;
LAB_1001a352:
    puVar6 = (undefined4 *)(puVar2 + iVar1);
    uVar7 = *puVar6;
    uVar8 = puVar6[1];
    uVar9 = puVar6[2];
    iVar4 = puVar6[3];
  }
  rc_00.right = uVar8;
  rc_00.left = uVar7;
  rc_00.top = uVar9;
  rc_00.bottom = iVar4;
  (*gEngfuncs.pfnSetCrosshair)(hspr,rc_00,0xff,0xff,0xff);
LAB_1001a3af:
  *(undefined4 *)((int)this + 0x14) = 0x43480000;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return 1;
}

/* 1001a3d0  FUN_1001a3d0  (270 bytes)
 * undefined4 FUN_1001a3d0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 FUN_1001a3d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char local_148 [128];
  int local_c8;
  int local_c4;
  uint local_c0;
  uint local_bc;
  int local_b8;
  int local_b4;
  uint local_b0;
  int local_ac;
  undefined4 local_a8;
  
  FUN_100299b0(param_3,param_2);
  pcVar2 = FUN_10029b00();
  uVar4 = 0xffffffff;
  do {
    pcVar7 = pcVar2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar2 = pcVar7 + -uVar4;
  pcVar7 = local_148;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar7 = pcVar7 + 1;
  }
  local_c8 = FUN_100299d0();
  local_c0 = FUN_10029a10();
  if (local_c0 == 0xff) {
    local_c0 = 0xffffffff;
  }
  local_c4 = FUN_100299d0();
  local_bc = FUN_10029a10();
  if (local_bc == 0xff) {
    local_bc = 0xffffffff;
  }
  local_b8 = FUN_100299d0();
  local_b4 = FUN_100299d0();
  iVar3 = FUN_100299d0();
  local_ac = iVar3;
  local_b0 = FUN_10029a10();
  local_a8 = 0;
  pcVar2 = local_148;
  puVar8 = &DAT_100ccdf8 + iVar3 * 0x52;
  for (iVar6 = 0x52; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar8 = puVar8 + 1;
  }
  FUN_100197c0((int)(&DAT_100ccdf8 + iVar3 * 0x52));
  return 1;
}

/* 1001a4e0  FUN_1001a4e0  (57 bytes)
 * undefined FUN_1001a4e0(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001a4e0(void)

{
  if (DAT_100cf840 != 0) {
    _DAT_100cf834 = DAT_100cf840;
    DAT_100cf840 = 0;
    (*gEngfuncs.pfnPlaySoundByName)(s_common_wpn_hudoff_wav_10093114,1.0);
    return;
  }
  (*gEngfuncs.pfnClientCmd)(s_escape_1009310c);
  return;
}

/* 1001a520  FUN_1001a520  (119 bytes)
 * byte.conflict * FUN_1001a520(byte.conflict * param_1, byte.conflict * param_2, int param_3, int param_4)
 * called by: FUN_100197c0
 */
byte_conflict * __cdecl
FUN_1001a520(byte_conflict *param_1,byte_conflict *param_2,int param_3,int param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  if (param_1 != (byte_conflict *)0x0) {
    while (param_4 != 0) {
      param_4 = param_4 + -1;
      pbVar2 = param_2;
      pbVar4 = param_1;
      do {
        bVar1 = *pbVar2;
        bVar5 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_1001a565:
          iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
          goto LAB_1001a56a;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar5 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_1001a565;
        pbVar2 = pbVar2 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_1001a56a:
      if ((iVar3 == 0) && (*(int *)(param_1 + 0x84) == param_3)) {
        return param_1;
      }
      param_1 = param_1 + 0x98;
    }
  }
  return (byte_conflict *)0x0;
}

/* 1001a650  FUN_1001a650  (49 bytes)
 * undefined4 FUN_1001a650(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_1001a650(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  
  FUN_100299b0(param_3,param_2);
  pcVar1 = FUN_10029b00();
  iVar2 = FUN_10020670(&DAT_100cf920,pcVar1);
  *(int *)((int)this + 0x14) = iVar2;
  return 1;
}

/* 1001a690  FUN_1001a690  (128 bytes)
 * undefined4 FUN_1001a690(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_1001a690(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  if ((-1 < (int)uVar1) && ((int)uVar1 < 4)) {
    uVar2 = FUN_10029a10();
    *(uint *)((int)this + uVar1 * 4 + 0x18) = uVar2;
    uVar1 = *(uint *)((int)this + 0x10);
    iVar5 = 0;
    *(uint *)((int)this + 0x10) = uVar1 | 1;
    puVar3 = (uint *)((int)this + 0x18);
    iVar4 = 4;
    do {
      uVar2 = *puVar3;
      puVar3 = puVar3 + 1;
      iVar5 = iVar5 + (uVar2 & ((int)uVar2 < 0) - 1);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (iVar5 == 0) {
      *(uint *)((int)this + 0x10) = uVar1 & 0xfffffffe;
      return 1;
    }
    *(undefined4 *)((int)this + 0x28) = 0x43480000;
  }
  return 1;
}

/* 1001a710  FUN_1001a710  (147 bytes)
 * undefined FUN_1001a710(int param_1, int param_2, int param_3)
 * called by: FUN_1001a070, FUN_1001a0b0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1001a710(void *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  
  if ((param_1 != 1) || (param_3 != 0)) {
    if ((DAT_100d590c + -100 <
         (DAT_100cf910 + 5) * *(int *)((int)this + 0xc4) + 0x20 + DAT_100cf910 * 2) ||
       (0xb < *(int *)((int)this + 0xc4))) {
      *(undefined4 *)((int)this + 0xc4) = 0;
    }
    piVar1 = (int *)(*(int *)((int)this + 0xc4) * 0x10 + (int)this);
    *(int *)((int)this + 0xc4) = *(int *)((int)this + 0xc4) + 1;
    (*gEngfuncs.pfnGetCvarFloat)(s_hud_drawhistory_time_1009307c);
    lVar2 = __ftol();
    _DAT_10093144 = (int)lVar2;
    *piVar1 = param_1;
    piVar1[3] = param_2;
    piVar1[2] = param_3;
    piVar1[1] = (int)((float)_DAT_10093144 + DAT_100cf944);
  }
  return;
}

/* 1001a7b0  FUN_1001a7b0  (163 bytes)
 * undefined FUN_1001a7b0(int param_1, char * param_2, undefined4 param_3)
 * called by: FUN_1001a0e0
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1001a7b0(void *this,int param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (param_1 == 3) {
    if ((DAT_100d590c + -100 <
         (DAT_100cf910 + 5) * *(int *)((int)this + 0xc4) + 0x20 + DAT_100cf910 * 2) ||
       (0xb < *(int *)((int)this + 0xc4))) {
      *(undefined4 *)((int)this + 0xc4) = 0;
    }
    puVar2 = (undefined4 *)(*(int *)((int)this + 0xc4) * 0x10 + (int)this);
    *(int *)((int)this + 0xc4) = *(int *)((int)this + 0xc4) + 1;
    iVar1 = FUN_10020670(&DAT_100cf920,param_2);
    if (iVar1 != -1) {
      puVar2[3] = iVar1;
      *puVar2 = 3;
      puVar2[2] = param_3;
      (*gEngfuncs.pfnGetCvarFloat)(s_hud_drawhistory_time_1009307c);
      lVar3 = __ftol();
      _DAT_10093144 = (int)lVar3;
      puVar2[1] = (float)_DAT_10093144 + DAT_100cf944;
    }
  }
  return;
}

/* 1001a880  FUN_1001a880  (51 bytes)
 * undefined4 FUN_1001a880(int param_1)
 */
undefined4 __fastcall FUN_1001a880(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  (*gEngfuncs.pfnHookUserMsg)(s_Battery_10093148,(pfnUserMsgHook)&LAB_1001a860);
  FUN_10020a40(&DAT_100cf920,param_1);
  return 1;
}

/* 1001a8c0  FUN_1001a8c0  (96 bytes)
 * undefined4 FUN_1001a8c0(int param_1)
 */
undefined4 __fastcall FUN_1001a8c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_10020670(&DAT_100cf920,s_suit_empty_1009315c);
  iVar2 = FUN_10020670(&DAT_100cf920,s_suit_full_10093150);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  iVar3 = iVar1 * 0x10 + DAT_100cf990;
  *(int *)(param_1 + 0x1c) = iVar3;
  iVar1 = iVar2 * 0x10 + DAT_100cf990;
  *(int *)(param_1 + 0x20) = iVar1;
  iVar1 = *(int *)(iVar1 + 0xc);
  iVar2 = *(int *)(iVar3 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(int *)(param_1 + 0x2c) = iVar1 - iVar2;
  return 1;
}

/* 1001a920  FUN_1001a920  (59 bytes)
 * undefined4 FUN_1001a920(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_1001a920(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  FUN_100299b0(param_3,param_2);
  iVar1 = FUN_10029a50();
  if (iVar1 != *(int *)((int)this + 0x24)) {
    *(undefined4 *)((int)this + 0x28) = 0x42c80000;
    *(int *)((int)this + 0x24) = iVar1;
  }
  return 1;
}

/* 1001a970  FUN_1001a970  (10 bytes)
 * undefined FUN_1001a970(void)
 */
void FUN_1001a970(void)

{
  FUN_1001ab80((undefined4 *)&DAT_100cf920);
  return;
}

/* 1001a980  FUN_1001a980  (12 bytes)
 * undefined FUN_1001a980(void)
 */
void FUN_1001a980(void)

{
  FUN_1006af63(0x1001a990);
  return;
}

/* 1001ab80  FUN_1001ab80  (273 bytes)
 * undefined4 * FUN_1001ab80(undefined4 * param_1)
 * called by: FUN_1001a970
 */
undefined4 * __fastcall FUN_1001ab80(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_10077995;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[4] = 0;
  param_1[0x1f] = &PTR_FUN_1007cc88;
  param_1[0x29] = &PTR_FUN_1007cc6c;
  param_1[0x69] = &PTR_FUN_1007cc50;
  param_1[0x6f] = &PTR_FUN_1007cc34;
  param_1[0x7b] = &PTR_FUN_1007cc18;
  param_1[0x82] = &PTR_FUN_1007cbfc;
  param_1[0x92] = &PTR_FUN_1007cbe0;
  param_1[0xcc] = &PTR_FUN_1007cbc4;
  param_1[0x15c] = &PTR_FUN_1007cba8;
  param_1[0x162] = &PTR_FUN_1007cb8c;
  param_1[0x167] = &PTR_FUN_1007cb70;
  param_1[0x170] = &PTR_FUN_1007cb54;
  param_1[0x17b] = &PTR_FUN_1007cb38;
  param_1[0x180] = &PTR_FUN_1007cb1c;
  param_1[0x1b6] = &PTR_LAB_1007c608;
  local_4 = 0xe;
  uStack_3 = 0;
  FUN_100025e0(param_1 + 0x411,0xc,0x40,&LAB_10017e90);
  param_1[0x1b6] = &PTR_FUN_1007cb00;
  param_1[0x4e0] = &PTR_FUN_1007cae4;
  _local_4 = CONCAT31(uStack_3,0x10);
  FUN_1001acb0(param_1 + 0x12ab);
  ExceptionList = local_c;
  return param_1;
}

/* 1001aca0  FUN_1001aca0  (7 bytes)
 * undefined FUN_1001aca0(undefined4 * param_1)
 * called by: FUN_1001acc0, Unwind@10077810, Unwind@10077830, Unwind@100778b0, Unwind@100778bb, Unwind@100778c9, Unwind@100778d7, Unwind@100778e5, Unwind@100778f3, Unwind@10077901, Unwind@1007790f, Unwind@1007791d, ... (37 total)
 */
void __fastcall FUN_1001aca0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_1007c608;
  return;
}

/* 1001acb0  FUN_1001acb0  (9 bytes)
 * undefined FUN_1001acb0(undefined4 * param_1)
 * called by: FUN_1001ab80
 */
void __fastcall FUN_1001acb0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1007cca4;
  return;
}

/* 1001acc0  FUN_1001acc0  (30 bytes)
 * undefined4 * FUN_1001acc0(byte.conflict param_1)
 */
undefined4 * __thiscall FUN_1001acc0(void *this,byte_conflict param_1)

{
  FUN_1001aca0(this);
  if ((param_1 & 1) != 0) {
    FUN_1006ad4c(this);
  }
  return this;
}

/* 1001ace0  FUN_1001ace0  (42 bytes)
 * undefined FUN_1001ace0(undefined4 param_1, undefined4 param_2, int param_3)
 * called by: FUN_10003830
 */
void __cdecl FUN_1001ace0(int param_1,int param_2,int param_3)

{
  if ((DAT_100d5cbc != 0) || (param_3 != 0)) {
    DAT_100d5cb8 = param_1;
    (*gEngfuncs.pfnWeaponAnim)(param_1,param_2);
  }
  return;
}

/* 1001ad10  FUN_1001ad10  (6 bytes)
 * undefined4 FUN_1001ad10(void)
 * called by: FUN_10003830
 */
undefined4 FUN_1001ad10(void)

{
  return DAT_100d5cb8;
}

/* 1001ad20  FUN_1001ad20  (42 bytes)
 * undefined FUN_1001ad20(undefined4 param_1, undefined4 param_2)
 * called by: FUN_10003640
 */
void __cdecl FUN_1001ad20(char *param_1,float param_2)

{
  if ((DAT_100d5cbc != 0) && (DAT_100d5cc0 != 0)) {
    (*gEngfuncs.pfnPlaySoundByNameAtLocation)(param_1,param_2,(float *)(DAT_100d5cc0 + 0x10));
  }
  return;
}

/* 1001adf0  FUN_1001adf0  (7 bytes)
 * float10 FUN_1001adf0(void)
 * called by: FUN_100088e0, FUN_10008ac0, FUN_10008e50, FUN_100091e0, FUN_100096f0, FUN_10009e30, FUN_10009ee0, FUN_1000a1f0, FUN_1000a270, FUN_1000a450, FUN_1000a4c0, FUN_1000a720, ... (19 total)
 */
float10 FUN_1001adf0(void)

{
  return (float10)0.0;
}

/* 1001ae00  FUN_1001ae00  (53 bytes)
 * uint FUN_1001ae00(void)
 * called by: FUN_1001ae60, FUN_1001aea0
 */
uint FUN_1001ae00(void)

{
  DAT_100d5cc4 = DAT_100d5cc4 * 0x10dcd + 1 +
                 *(int *)(&DAT_10093168 + (DAT_100d5cc4 * 0x10dcd & 0xff) * 4);
  return DAT_100d5cc4 & 0xfffffff;
}

/* 1001ae40  FUN_1001ae40  (23 bytes)
 * undefined FUN_1001ae40(uint param_1)
 * called by: FUN_1001ae60, FUN_1001aea0
 */
void __cdecl FUN_1001ae40(uint param_1)

{
  DAT_100d5cc4 = *(undefined4 *)(&DAT_10093168 + (param_1 & 0xff) * 4);
  return;
}

/* 1001ae60  FUN_1001ae60  (58 bytes)
 * int FUN_1001ae60(int param_1, int param_2, int param_3)
 * called by: FUN_10051270
 */
int __cdecl FUN_1001ae60(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  FUN_1001ae40(param_1 + param_2 + param_3);
  if (param_3 - param_2 == 0) {
    return param_2;
  }
  uVar1 = FUN_1001ae00();
  return uVar1 % ((param_3 - param_2) + 1U) + param_2;
}

/* 1001aea0  FUN_1001aea0  (98 bytes)
 * float10 FUN_1001aea0(int param_1, float param_2, float param_3)
 * called by: FUN_1000ba00, FUN_100450c0, FUN_10051270
 */
float10 __cdecl FUN_1001aea0(int param_1,float param_2,float param_3)

{
  uint uVar1;
  
  FUN_1001ae40((int)param_3 + (int)param_2 + param_1);
  FUN_1001ae00();
  FUN_1001ae00();
  if (param_3 - param_2 == 0.0) {
    return (float10)param_2;
  }
  uVar1 = FUN_1001ae00();
  return (float10)(uVar1 & 0xffff) * (float10)1.52587890625e-05 * (float10)(param_3 - param_2) +
         (float10)param_2;
}

/* 1001af40  FUN_1001af40  (72 bytes)
 * undefined4 * FUN_1001af40(int param_1)
 * called by: FUN_1001b360, FUN_1002ed00, FUN_1002f480
 */
undefined4 * __cdecl FUN_1001af40(int param_1)

{
  cl_entity_s *pcVar1;
  
  pcVar1 = (*gEngfuncs.GetLocalPlayer)();
  if (param_1 != pcVar1->index) {
    switch((&DAT_101901fc)[param_1 * 0x10]) {
    case 1:
      return (undefined4 *)&DAT_10093578;
    case 2:
      return (undefined4 *)&DAT_10093584;
    case 3:
      return &DAT_1009359c;
    case 4:
      return (undefined4 *)&DAT_10093590;
    default:
      return (undefined4 *)0x0;
    }
  }
  return (undefined4 *)&DAT_100935a8;
}

/* 1001b000  FUN_1001b000  (28 bytes)
 * undefined4 FUN_1001b000(int param_1)
 */
undefined4 __fastcall FUN_1001b000(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10020670(&DAT_100cf920,s_d_skull_100935dc);
  *(int *)(param_1 + 0x14) = iVar1;
  return 1;
}

/* 1001b047  FUN_1001b047  (790 bytes)
 * undefined4 FUN_1001b047(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1001b047(void)

{
  float fVar1;
  float *pfVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int g;
  int iVar6;
  int iVar7;
  int y;
  char *string;
  int iVar8;
  longlong lVar9;
  char *string_00;
  char *pcStack00000004;
  undefined4 *puStack00000008;
  char *pcStack0000000c;
  HSPRITE HStack00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  float in_stack_0000003c;
  
  iVar7 = 0;
  pcStack0000000c = &DAT_100d5d08;
  string_00 = &DAT_100d5d64;
  pcStack00000004 = (char *)&DAT_100d5cc8;
  y = 0x14;
  puStack00000008 = (undefined4 *)&DAT_100d5d84;
  do {
    string = pcStack0000000c;
    puVar3 = puStack00000008;
    iVar8 = DAT_100d5cb0;
    if (*(int *)((int)&DAT_100d5d48 + iVar7) == 0) {
      return 1;
    }
    if (in_stack_0000003c <= *(float *)((int)&DAT_100d5d58 + iVar7)) {
      fVar1 = (float)_DAT_10093574 + DAT_100cf944;
      if (*(float *)((int)&DAT_100d5d58 + iVar7) < fVar1) {
        fVar1 = *(float *)((int)&DAT_100d5d58 + iVar7);
      }
      *(float *)((int)&DAT_100d5d58 + iVar7) = fVar1;
      if ((iVar8 != 0) && (uVar4 = FUN_10064240(iVar8), (char)uVar4 != '\0')) {
        iVar8 = *(int *)((int)&DAT_100d5d48 + iVar7);
        if (iVar8 == -1) {
          iVar8 = *(int *)(in_stack_00000014 + 0x14);
        }
        if (*string_00 == '\0') {
          (*gEngfuncs.pfnDrawConsoleStringLen)(string,&stack0x00000018,(int *)&stack0x00000028);
          iVar5 = ((*(int *)(iVar8 * 0x10 + DAT_100cf990) -
                   *(int *)(iVar8 * 0x10 + DAT_100cf990 + 4)) - in_stack_00000018) + -5 +
                  DAT_100d5908;
        }
        else {
          (*gEngfuncs.pfnDrawConsoleStringLen)(string,&stack0x00000020,(int *)&stack0x0000002c);
          (*gEngfuncs.pfnDrawConsoleStringLen)(string_00,&stack0x0000001c,(int *)&stack0x00000030);
          iVar5 = ((DAT_100d5908 - in_stack_0000001c) - in_stack_00000020) + -10;
        }
        if (*(int *)((int)&DAT_100d5d4c + iVar7) == 0) {
          (*gEngfuncs.pfnDrawConsoleStringLen)
                    (pcStack00000004,&stack0x00000024,(int *)&stack0x00000034);
          pfVar2 = *(float **)((int)&DAT_100d5d5c + iVar7);
          iVar6 = -5 - in_stack_00000024;
          if (pfVar2 != (float *)0x0) {
            (*gEngfuncs.pfnDrawSetTextColor)(*pfVar2,pfVar2[1],pfVar2[2]);
          }
          iVar5 = (*gEngfuncs.pfnDrawConsoleString)(iVar5 + iVar6,y,pcStack00000004);
          iVar5 = iVar5 + 5;
        }
        if (*string_00 == '\0') {
          if (iVar8 < 0) {
            HStack00000010 = 0;
          }
          else {
            HStack00000010 = *(HSPRITE *)(DAT_100cf98c + iVar8 * 4);
          }
          lVar9 = __ftol();
          iVar6 = (int)lVar9;
          lVar9 = __ftol();
          g = (int)lVar9;
          lVar9 = __ftol();
          (*gEngfuncs.pfnSPR_Set)(HStack00000010,(int)lVar9,g,iVar6);
          iVar8 = iVar8 * 0x10;
          (*gEngfuncs.pfnSPR_DrawAdditive)(0,iVar5,y,(wrect_t *)(iVar8 + DAT_100cf990));
          iVar5 = iVar5 + (*(int *)(iVar8 + 4 + DAT_100cf990) - *(int *)(iVar8 + DAT_100cf990));
        }
        else {
          (*gEngfuncs.pfnDrawSetTextColor)(1.0,0.5,0.2);
          iVar5 = (*gEngfuncs.pfnDrawConsoleString)(iVar5,y,string_00);
          iVar5 = iVar5 + 5;
        }
        string = pcStack0000000c;
        if (*(int *)((int)&DAT_100d5d54 + iVar7) == 0) {
          pfVar2 = *(float **)((int)&DAT_100d5d60 + iVar7);
          if (pfVar2 != (float *)0x0) {
            (*gEngfuncs.pfnDrawSetTextColor)(*pfVar2,pfVar2[1],pfVar2[2]);
          }
          (*gEngfuncs.pfnDrawConsoleString)(iVar5,y,pcStack0000000c);
          string = pcStack0000000c;
        }
      }
    }
    else {
      FUN_1006ba20((undefined4 *)pcStack00000004,puStack00000008,0x2f0 - iVar7);
      puStack00000008 = puVar3 + -0x2f;
      string_00 = string_00 + -0xbc;
      pcStack00000004 = pcStack00000004 + -0xbc;
      y = y + -0x14;
      iVar7 = iVar7 + -0xbc;
      string = string + -0xbc;
    }
    y = y + 0x14;
    iVar7 = iVar7 + 0xbc;
    puStack00000008 = puStack00000008 + 0x2f;
    pcStack00000004 = pcStack00000004 + 0xbc;
    string_00 = string_00 + 0xbc;
    pcStack0000000c = string + 0xbc;
  } while (y < 100);
  return 1;
}

/* 1001b360  FUN_1001b360  (1267 bytes)
 * undefined4 FUN_1001b360(undefined4 param_1, undefined4 param_2, char * param_3)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_1001b360(void *this,undefined4 param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  char *pcVar17;
  bool bVar18;
  longlong lVar19;
  size_t _Count;
  byte local_20 [32];
  
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  FUN_100299b0(param_3,param_2);
  uVar3 = FUN_10029a10();
  uVar4 = FUN_10029a10();
  uVar11 = 0xffffffff;
  pcVar5 = &DAT_10093678;
  do {
    pcVar17 = pcVar5;
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    pcVar17 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar17;
  } while (cVar1 != '\0');
  uVar11 = ~uVar11;
  _Count = 0x20;
  pbVar9 = (byte *)(pcVar17 + -uVar11);
  pbVar15 = local_20;
  for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pbVar15 = *(undefined4 *)pbVar9;
    pbVar9 = pbVar9 + 4;
    pbVar15 = pbVar15 + 4;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pbVar15 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    pbVar15 = pbVar15 + 1;
  }
  pcVar5 = FUN_10029b00();
  _strncat((char *)local_20,pcVar5,_Count);
  if (DAT_100d5cb0 != (void *)0x0) {
    FUN_10065230(DAT_100d5cb0,uVar3,uVar4);
  }
  FUN_10024a60(&DAT_100cfff8);
  iVar13 = 0;
  piVar6 = &DAT_100d5d48;
  do {
    if (*piVar6 == 0) break;
    piVar6 = piVar6 + 0x2f;
    iVar13 = iVar13 + 1;
  } while ((int)piVar6 < 0x100d6038);
  if (iVar13 == 4) {
    FUN_1006ba20(&DAT_100d5cc8,(undefined4 *)&DAT_100d5d84,0x2f0);
    iVar13 = 3;
  }
  if (DAT_100d5cb0 != (void *)0x0) {
    FUN_10064880((int)DAT_100d5cb0);
  }
  pcVar5 = *(char **)(&DAT_1018fbd8 + uVar3 * 0x14);
  if (pcVar5 == (char *)0x0) {
    param_3 = (char *)(&DAT_100d5cc8 + iVar13 * 0x2f);
    *param_3 = '\0';
  }
  else {
    puVar7 = FUN_1001af40(uVar3);
    (&DAT_100d5d5c)[iVar13 * 0x2f] = puVar7;
    param_3 = (char *)(&DAT_100d5cc8 + iVar13 * 0x2f);
    _strncpy(param_3,pcVar5,0x20);
    *(undefined1 *)(iVar13 * 0xbc + 0x100d5ce7) = 0;
  }
  iVar10 = iVar13 * 0xbc;
  if (((char)uVar4 == -1) ||
     (pcVar5 = *(char **)(&DAT_1018fbd8 + uVar4 * 0x14), pcVar5 == (char *)0x0)) {
    (&DAT_100d5d08)[iVar10] = 0;
  }
  else {
    puVar7 = FUN_1001af40(uVar4);
    (&DAT_100d5d60)[iVar13 * 0x2f] = puVar7;
    _strncpy(&DAT_100d5d08 + iVar10,pcVar5,0x20);
    *(undefined1 *)(iVar10 + 0x100d5d27) = 0;
  }
  pbVar9 = &DAT_100d5d08 + iVar10;
  if ((char)uVar4 == -1) {
    uVar3 = 0xffffffff;
    (&DAT_100d5d54)[iVar13 * 0x2f] = 1;
    pbVar15 = local_20 + 2;
    do {
      pbVar14 = pbVar15;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pbVar14 = pbVar15 + 1;
      bVar2 = *pbVar15;
      pbVar15 = pbVar14;
    } while (bVar2 != 0);
    uVar3 = ~uVar3;
    pbVar15 = pbVar14 + -uVar3;
    pbVar14 = pbVar9;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pbVar14 = *(undefined4 *)pbVar15;
      pbVar15 = pbVar15 + 4;
      pbVar14 = pbVar14 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pbVar14 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      pbVar14 = pbVar14 + 1;
    }
  }
  else {
    if ((uVar3 == uVar4) || (uVar3 == 0)) {
      (&DAT_100d5d4c)[iVar13 * 0x2f] = 1;
    }
    pcVar5 = s_d_teammate_1009366c;
    pbVar15 = local_20;
    do {
      bVar2 = *pbVar15;
      bVar18 = bVar2 < (byte)*pcVar5;
      if (bVar2 != *pcVar5) {
LAB_1001b55a:
        iVar8 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
        goto LAB_1001b55f;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar15[1];
      bVar18 = bVar2 < (byte)pcVar5[1];
      if (bVar2 != pcVar5[1]) goto LAB_1001b55a;
      pbVar15 = pbVar15 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar2 != 0);
    iVar8 = 0;
LAB_1001b55f:
    if (iVar8 == 0) {
      (&DAT_100d5d50)[iVar13 * 0x2f] = 1;
    }
  }
  uVar3 = 0xffffffff;
  pbVar15 = &DAT_100d5d64 + iVar10;
  pbVar14 = local_20;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    bVar2 = *pbVar14;
    pbVar14 = pbVar14 + 1;
  } while (bVar2 != 0);
  (&DAT_100d5d48)[iVar13 * 0x2f] = 0xffffffff;
  *pbVar15 = 0;
  if (2 < ~uVar3 - 1) {
    uVar3 = 0xffffffff;
    pbVar14 = local_20 + 2;
    do {
      pbVar16 = pbVar14;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pbVar16 = pbVar14 + 1;
      bVar2 = *pbVar14;
      pbVar14 = pbVar16;
    } while (bVar2 != 0);
    uVar3 = ~uVar3;
    pbVar14 = pbVar16 + -uVar3;
    pbVar16 = pbVar15;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pbVar16 = *(undefined4 *)pbVar14;
      pbVar14 = pbVar14 + 4;
      pbVar16 = pbVar16 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pbVar16 = *pbVar14;
      pbVar14 = pbVar14 + 1;
      pbVar16 = pbVar16 + 1;
    }
  }
  (*gEngfuncs.pfnGetCvarFloat)(s__hud_deathnotice_time_100935b3 + 1);
  lVar19 = __ftol();
  _DAT_10093574 = (int)lVar19;
  (&DAT_100d5d58)[iVar13 * 0x2f] = (float)_DAT_10093574 + DAT_100cf944;
  if ((&DAT_100d5d54)[iVar13 * 0x2f] != 0) {
    (*gEngfuncs.pfnConsolePrint)(param_3);
    (*gEngfuncs.pfnConsolePrint)(s_killed_a_10093660);
    (*gEngfuncs.pfnConsolePrint)((char *)pbVar9);
    (*gEngfuncs.pfnConsolePrint)(&DAT_1009365c);
    *pbVar15 = 0;
    return 1;
  }
  if ((&DAT_100d5d4c)[iVar13 * 0x2f] == 0) {
    if ((&DAT_100d5d50)[iVar13 * 0x2f] == 0) {
      (*gEngfuncs.pfnConsolePrint)(param_3);
      (*gEngfuncs.pfnConsolePrint)(s_killed_10093618);
      (*gEngfuncs.pfnConsolePrint)((char *)pbVar9);
    }
    else {
      (*gEngfuncs.pfnConsolePrint)(param_3);
      (*gEngfuncs.pfnConsolePrint)(s_killed_his_teammate_10093624);
      (*gEngfuncs.pfnConsolePrint)((char *)pbVar9);
      *pbVar15 = 0;
    }
  }
  else {
    (*gEngfuncs.pfnConsolePrint)((char *)pbVar9);
    pbVar14 = &DAT_10093654;
    pbVar9 = local_20;
    do {
      bVar2 = *pbVar9;
      bVar18 = bVar2 < *pbVar14;
      if (bVar2 != *pbVar14) {
LAB_1001b66c:
        iVar10 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
        goto LAB_1001b671;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar9[1];
      bVar18 = bVar2 < pbVar14[1];
      if (bVar2 != pbVar14[1]) goto LAB_1001b66c;
      pbVar9 = pbVar9 + 2;
      pbVar14 = pbVar14 + 2;
    } while (bVar2 != 0);
    iVar10 = 0;
LAB_1001b671:
    if (iVar10 == 0) {
      (*gEngfuncs.pfnConsolePrint)(s_died_1009364c);
      *pbVar15 = 0;
    }
    else {
      (*gEngfuncs.pfnConsolePrint)(s_killed_self_1009363c);
      *pbVar15 = 0;
    }
  }
  if (((&stack0x00000000 != (undefined1 *)0x20) && (local_20[0] != 0)) && ('\r' < (char)local_20[0])
     ) {
    pbVar15 = &DAT_10093654;
    pbVar9 = local_20;
    do {
      bVar2 = *pbVar9;
      bVar18 = bVar2 < *pbVar15;
      if (bVar2 != *pbVar15) {
LAB_1001b743:
        iVar10 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
        goto LAB_1001b748;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar9[1];
      bVar18 = bVar2 < pbVar15[1];
      if (bVar2 != pbVar15[1]) goto LAB_1001b743;
      pbVar9 = pbVar9 + 2;
      pbVar15 = pbVar15 + 2;
    } while (bVar2 != 0);
    iVar10 = 0;
LAB_1001b748:
    if ((iVar10 != 0) && ((&DAT_100d5d50)[iVar13 * 0x2f] == 0)) {
      (*gEngfuncs.pfnConsolePrint)(s_with_10093610);
      pbVar15 = &DAT_10093608;
      pbVar9 = local_20;
      do {
        pbVar9 = pbVar9 + 2;
        bVar2 = *pbVar9;
        bVar18 = bVar2 < *pbVar15;
        if (bVar2 != *pbVar15) {
LAB_1001b79d:
          iVar13 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
          goto LAB_1001b7a2;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar9[1];
        bVar18 = bVar2 < pbVar15[1];
        if (bVar2 != pbVar15[1]) goto LAB_1001b79d;
        pbVar15 = pbVar15 + 2;
      } while (bVar2 != 0);
      iVar13 = 0;
LAB_1001b7a2:
      if (iVar13 == 0) {
        uVar3 = 0xffffffff;
        pcVar5 = s_d_gluon_gun_100935fc;
        do {
          pcVar17 = pcVar5;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar17 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar17;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        pbVar9 = (byte *)(pcVar17 + -uVar3);
        pbVar15 = local_20;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pbVar15 = *(undefined4 *)pbVar9;
          pbVar9 = pbVar9 + 4;
          pbVar15 = pbVar15 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pbVar15 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          pbVar15 = pbVar15 + 1;
        }
      }
      pcVar5 = s_gauss_100935f4;
      pbVar9 = local_20;
      do {
        pbVar9 = pbVar9 + 2;
        bVar2 = *pbVar9;
        bVar18 = bVar2 < (byte)*pcVar5;
        if (bVar2 != *pcVar5) {
LAB_1001b7fb:
          iVar13 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
          goto LAB_1001b800;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar9[1];
        bVar18 = bVar2 < (byte)pcVar5[1];
        if (bVar2 != pcVar5[1]) goto LAB_1001b7fb;
        pcVar5 = pcVar5 + 2;
      } while (bVar2 != 0);
      iVar13 = 0;
LAB_1001b800:
      if (iVar13 == 0) {
        uVar3 = 0xffffffff;
        pcVar5 = s_d_tau_cannon_100935e4;
        do {
          pcVar17 = pcVar5;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar17 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar17;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        pbVar9 = (byte *)(pcVar17 + -uVar3);
        pbVar15 = local_20;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pbVar15 = *(undefined4 *)pbVar9;
          pbVar9 = pbVar9 + 4;
          pbVar15 = pbVar15 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pbVar15 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          pbVar15 = pbVar15 + 1;
        }
      }
      (*gEngfuncs.pfnConsolePrint)((char *)(local_20 + 2));
    }
  }
  (*gEngfuncs.pfnConsolePrint)(&DAT_1009365c);
  return 1;
}

/* 1001b860  FUN_1001b860  (87 bytes)
 * undefined FUN_1001b860(void)
 * called by: FUN_10003830, FUN_100209f0, FUN_1004fe00
 */
void FUN_1001b860(void)

{
  uint uVar1;
  undefined4 *puVar2;
  uint in_stack_00008008;
  undefined4 *in_stack_0000800c;
  
  FUN_1006b970();
  puVar2 = (undefined4 *)register0x00000010;
  for (uVar1 = in_stack_00008008 >> 2; puVar2 = puVar2 + 1, uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *in_stack_0000800c;
    in_stack_0000800c = in_stack_0000800c + 1;
  }
  for (uVar1 = in_stack_00008008 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)in_stack_0000800c;
    in_stack_0000800c = (undefined4 *)((int)in_stack_0000800c + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  (*(gEngfuncs.pDemoAPI)->WriteBuffer)(in_stack_00008008 + 4,&stack0x00000000);
  return;
}

/* 1001bcd0  FUN_1001bcd0  (15 bytes)
 * undefined FUN_1001bcd0(void)
 * called by: HUD_CreateEntities
 */
void FUN_1001bcd0(void)

{
  FUN_10034e80();
  FUN_10029780(0x100dff48);
  return;
}

/* 1001c5a0  FUN_1001c5a0  (31 bytes)
 * undefined4 FUN_1001c5a0(int param_1)
 * called by: FUN_1001c620
 */
undefined4 __cdecl FUN_1001c5a0(int param_1)

{
  int iVar1;
  
  if (0 < param_1) {
    iVar1 = (*gEngfuncs.GetMaxClients)();
    if (param_1 <= iVar1) {
      return 1;
    }
  }
  return 0;
}

/* 1001c5c0  FUN_1001c5c0  (31 bytes)
 * undefined4 FUN_1001c5c0(int param_1)
 * called by: FUN_1001c5e0, FUN_1001c620, FUN_100425b0, FUN_10042630
 */
undefined4 __cdecl FUN_1001c5c0(int param_1)

{
  if ((DAT_10190b18 == 5) && (DAT_10190b20 == param_1)) {
    return 1;
  }
  return 0;
}

/* 1001c5e0  FUN_1001c5e0  (49 bytes)
 * undefined4 FUN_1001c5e0(int param_1)
 * called by: FUN_1001c620, FUN_1003dfa0, FUN_1003f090, FUN_10040c20
 */
undefined4 __cdecl FUN_1001c5e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(gEngfuncs.pEventAPI)->EV_IsLocal)(param_1 + -1);
  if (iVar1 == 0) {
    uVar2 = FUN_1001c5c0(param_1);
    if ((char)uVar2 == '\0') {
      return 0;
    }
  }
  return 1;
}

/* 1001c620  FUN_1001c620  (258 bytes)
 * undefined FUN_1001c620(int param_1, float * param_2, float * param_3)
 * called by: FUN_1003dfa0, FUN_1003f090, FUN_10040c20
 */
void __cdecl FUN_1001c620(int param_1,float *param_2,float *param_3)

{
  int idx;
  int iVar1;
  undefined4 uVar2;
  cl_entity_s *pcVar3;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_c [3];
  
  local_30 = 0.0;
  idx = *(int *)(param_1 + 4);
  local_2c = 0.0;
  local_28 = 28.0;
  iVar1 = FUN_1001c5a0(idx);
  if (iVar1 != 0) {
    iVar1 = FUN_1001c5e0(idx);
    if (iVar1 != 0) {
      uVar2 = FUN_1001c5c0(idx);
      if ((char)uVar2 == '\0') {
        (*(gEngfuncs.pEventAPI)->EV_LocalPlayerViewheight)(&local_30);
        goto LAB_1001c6fc;
      }
    }
    FUN_10068e20(idx,param_2,local_c);
    local_24 = *param_2;
    local_20 = param_2[1];
    local_1c = param_2[2];
    pcVar3 = (*gEngfuncs.GetEntityByIndex)(idx);
    local_30 = local_24 - pcVar3->origin[0];
    local_2c = local_20 - pcVar3->origin[1];
    local_28 = local_1c - pcVar3->origin[2];
  }
LAB_1001c6fc:
  *param_2 = local_30 + *param_3;
  param_2[1] = local_2c + param_3[1];
  param_2[2] = local_28 + param_3[2];
  return;
}

/* 1001c780  FUN_1001c780  (177 bytes)
 * undefined4 FUN_1001c780(int param_1)
 */
undefined4 __fastcall FUN_1001c780(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  iVar1 = FUN_10020670(&DAT_100cf920,s_flash_empty_100936e0);
  iVar2 = FUN_10020670(&DAT_100cf920,s_flash_full_100936d4);
  iVar3 = FUN_10020670(&DAT_100cf920,s_flash_beam_100936c8);
  if (iVar1 < 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(DAT_100cf98c + iVar1 * 4);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  if (iVar2 < 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(DAT_100cf98c + iVar2 * 4);
  }
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  if (iVar3 < 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(DAT_100cf98c + iVar3 * 4);
  }
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  *(int *)(param_1 + 0x20) = iVar1 * 0x10 + DAT_100cf990;
  piVar5 = (int *)(iVar2 * 0x10 + DAT_100cf990);
  *(int **)(param_1 + 0x24) = piVar5;
  *(int *)(param_1 + 0x28) = iVar3 * 0x10 + DAT_100cf990;
  *(int *)(param_1 + 0x3c) = piVar5[1] - *piVar5;
  return 1;
}

/* 1001c850  FUN_1001c850  (41 bytes)
 * undefined FUN_1001c850(undefined4 param_1)
 */
void __fastcall FUN_1001c850(undefined4 param_1)

{
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  DAT_100db0a0 = local_1;
  DAT_100db0a4 = operator_new(0xc);
  *(void **)DAT_100db0a4 = DAT_100db0a4;
  *(void **)((int)DAT_100db0a4 + 4) = DAT_100db0a4;
  DAT_100db0a8 = 0;
  return;
}

/* 1001c880  FUN_1001c880  (12 bytes)
 * undefined FUN_1001c880(void)
 */
void FUN_1001c880(void)

{
  FUN_1006af63(0x1001c890);
  return;
}

/* 1001c900  FUN_1001c900  (41 bytes)
 * undefined FUN_1001c900(undefined4 param_1)
 */
void __fastcall FUN_1001c900(undefined4 param_1)

{
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  DAT_100d6090 = local_1;
  DAT_100d6094 = operator_new(0xc);
  *(void **)DAT_100d6094 = DAT_100d6094;
  *(void **)((int)DAT_100d6094 + 4) = DAT_100d6094;
  DAT_100d6098 = 0;
  return;
}

/* 1001c930  FUN_1001c930  (12 bytes)
 * undefined FUN_1001c930(void)
 */
void FUN_1001c930(void)

{
  FUN_1006af63(0x1001c940);
  return;
}

/* 1001c9a0  FUN_1001c9a0  (142 bytes)
 * undefined FUN_1001c9a0(float * param_1, float * param_2, float * param_3, float * param_4)
 * called by: FUN_1001d170, FUN_1001d620, FUN_1001e450, FUN_1001e930
 */
void __cdecl FUN_1001c9a0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_1001ca30(param_3,&local_24,&local_c,&local_18);
  fVar1 = *param_1;
  fVar2 = param_1[2];
  fVar3 = param_1[1];
  fVar4 = param_2[1];
  fVar5 = *param_1;
  fVar6 = param_1[2];
  fVar7 = param_1[1];
  fVar8 = param_2[2];
  *param_4 = local_c * param_1[1] + local_18 * param_1[2] + local_24 * *param_1 + *param_2;
  param_4[2] = local_4 * fVar7 + local_10 * fVar6 + local_1c * fVar5 + fVar8;
  param_4[1] = local_8 * fVar3 + local_14 * fVar2 + local_20 * fVar1 + fVar4;
  return;
}

/* 1001ca30  FUN_1001ca30  (235 bytes)
 * undefined FUN_1001ca30(float * param_1, float * param_2, float * param_3, float * param_4)
 * called by: FUN_1001c9a0, FUN_1001cb20
 */
void __cdecl FUN_1001ca30(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar6 = (float10)fsin((float10)param_1[1] * (float10)0.017453292);
  fVar1 = (float)fVar6;
  fVar6 = (float10)fcos((float10)param_1[1] * (float10)0.017453292);
  fVar7 = (float10)fsin((float10)*param_1 * (float10)0.017453292);
  fVar2 = (float)fVar7;
  fVar7 = (float10)fcos((float10)*param_1 * (float10)0.017453292);
  fVar3 = (float)fVar7;
  fVar7 = (float10)fsin((float10)param_1[2] * (float10)0.017453292);
  fVar4 = (float)fVar7;
  fVar7 = (float10)fcos((float10)param_1[2] * (float10)0.017453292);
  fVar5 = (float)fVar7;
  if (param_2 != (float *)0x0) {
    *param_2 = (float)((float10)fVar3 * fVar6);
    param_2[1] = fVar3 * fVar1;
    param_2[2] = -fVar2;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = (float)((float10)fVar4 * (float10)fVar2 * fVar6 - (float10)fVar5 * (float10)fVar1);
    param_3[1] = (float)((float10)fVar5 * fVar6 + (float10)fVar4 * (float10)fVar2 * (float10)fVar1);
    param_3[2] = fVar4 * fVar3;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = (float)((float10)fVar4 * (float10)fVar1 + (float10)fVar5 * (float10)fVar2 * fVar6);
    param_4[1] = (float)((float10)fVar5 * (float10)fVar2 * (float10)fVar1 - (float10)fVar4 * fVar6);
    param_4[2] = fVar5 * fVar3;
    return;
  }
  return;
}

/* 1001cb20  FUN_1001cb20  (164 bytes)
 * undefined FUN_1001cb20(float * param_1, float * param_2, float * param_3, float * param_4)
 * called by: FUN_1001d170, FUN_1001d620, FUN_1001e450, FUN_1001e930
 */
void __cdecl FUN_1001cb20(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = *param_1 - *param_2;
  fVar2 = param_1[1] - param_2[1];
  fVar3 = param_1[2] - param_2[2];
  FUN_1001ca30(param_3,&local_24,&local_18,&local_c);
  *param_4 = local_24 * fVar1 + local_20 * fVar2 + local_1c * fVar3;
  param_4[1] = local_18 * fVar1 + local_14 * fVar2 + local_10 * fVar3;
  param_4[2] = local_c * fVar1 + local_8 * fVar2 + local_4 * fVar3;
  return;
}

/* 1001cbd0  FUN_1001cbd0  (32 bytes)
 * uint FUN_1001cbd0(void)
 * called by: FUN_1001cbf0
 */
uint FUN_1001cbd0(void)

{
  if (DAT_100db0b8 == 0) {
    return 0xffffffff;
  }
  return (uint)(*(int *)(*(int *)(DAT_100db0b8 + 0xa4) + 0x20) == 0);
}

/* 1001cbf0  FUN_1001cbf0  (107 bytes)
 * undefined FUN_1001cbf0(float * param_1, float * param_2, int param_3)
 * called by: FUN_1001cbf0
 */
void __cdecl FUN_1001cbf0(float *param_1,float *param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = FUN_1001cbd0();
  if (uVar1 == 0) {
    PTR_FUN_100936ec = FUN_1001dfd0;
    FUN_1001dfd0(param_1,param_2,param_3);
    return;
  }
  if (uVar1 != 1) {
    FUN_1001cd50(param_1,param_2,param_3);
    (*(code *)PTR_FUN_100936ec)(param_1,param_2,param_3);
    return;
  }
  PTR_FUN_100936ec = FUN_1001cd50;
  FUN_1001cd50(param_1,param_2,param_3);
  return;
}

/* 1001cd10  FUN_1001cd10  (63 bytes)
 * undefined FUN_1001cd10(int param_1, undefined4 * param_2)
 */
void __cdecl FUN_1001cd10(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = *(int *)(*(int *)(DAT_100db0b8 + 0x7c) + 0x24 + param_1 * 0x40) * 0xd + iVar2;
    iVar2 = iVar2 + 1;
    *param_2 = *(undefined4 *)(*(int *)(DAT_100db0b8 + 0xa4) + 8 + iVar1 * 4);
    param_2 = param_2 + 1;
  } while (iVar2 < 6);
  return;
}

/* 1001cd50  FUN_1001cd50  (128 bytes)
 * undefined FUN_1001cd50(float * param_1, float * param_2, int param_3)
 * called by: FUN_1001cbf0
 */
void __cdecl FUN_1001cd50(float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_2;
  fVar2 = *param_1;
  fVar3 = param_2[1];
  fVar4 = param_1[1];
  fVar5 = param_2[2];
  fVar6 = param_1[2];
  *(undefined4 *)(param_3 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_3 + 0x30) = 0;
  *(float *)(param_3 + 0x14) = *param_2;
  *(float *)(param_3 + 0x18) = param_2[1];
  *(float *)(param_3 + 0x1c) = param_2[2];
  if (DAT_100db0b8 != 0) {
    FUN_1001cdd0(param_1,param_2,0,*(int **)(DAT_100db0b8 + 0xa4),param_3,
                 SQRT((fVar1 - fVar2) * (fVar1 - fVar2) +
                      (fVar3 - fVar4) * (fVar3 - fVar4) + (fVar5 - fVar6) * (fVar5 - fVar6)));
    return;
  }
  return;
}

/* 1001cdd0  FUN_1001cdd0  (162 bytes)
 * uint FUN_1001cdd0(float * param_1, float * param_2, undefined4 param_3, int * param_4, int param_5, float param_6)
 * called by: FUN_1001cd50, FUN_1001d170, FUN_1001d620
 */
uint __cdecl
FUN_1001cdd0(float *param_1,float *param_2,undefined4 param_3,int *param_4,int param_5,float param_6
            )

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  
  DAT_100db0bc = 1;
  uVar4 = FUN_1001ce80(param_1,param_2,param_4,param_5,(float *)0x0,0);
  if ((char)uVar4 != '\0') {
    *(undefined4 *)(param_5 + 0x30) = param_3;
    fVar1 = *(float *)(param_5 + 0x14) - *param_1;
    fVar3 = *(float *)(param_5 + 0x18) - param_1[1];
    fVar2 = *(float *)(param_5 + 0x1c) - param_1[2];
    if (param_6 == 0.0) {
      *(undefined4 *)(param_5 + 0x10) = 0;
    }
    else {
      *(float *)(param_5 + 0x10) = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2) / param_6;
    }
    *param_2 = *(float *)(param_5 + 0x14);
    fVar1 = *(float *)(param_5 + 0x18);
    param_2[1] = fVar1;
    param_2[2] = *(float *)(param_5 + 0x1c);
    return CONCAT31((int3)((uint)fVar1 >> 8),1);
  }
  return uVar4 & 0xffffff00;
}

/* 1001ce80  FUN_1001ce80  (752 bytes)
 * undefined4 FUN_1001ce80(float * param_1, float * param_2, int * param_3, int param_4, float * param_5, undefined4 param_6)
 * called by: FUN_1001cdd0, FUN_1001ce80
 */
undefined4 __cdecl
FUN_1001ce80(float *param_1,float *param_2,int *param_3,int param_4,float *param_5,
            undefined4 param_6)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined4 uVar5;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  uVar1 = *param_3;
  while (-1 < (int)uVar1) {
    pfVar4 = (float *)param_3[9];
    fVar2 = (param_1[1] * pfVar4[1] + *param_1 * *pfVar4 + param_1[2] * pfVar4[2]) - pfVar4[3];
    fVar3 = (*param_2 * *pfVar4 + pfVar4[1] * param_2[1] + pfVar4[2] * param_2[2]) - pfVar4[3];
    if ((fVar2 == 0.0) && (fVar3 == 0.0)) {
      pfVar4 = (float *)FUN_1001ce80(param_1,param_2,(int *)param_3[10],param_4,param_5,param_6);
      if ((char)pfVar4 != '\0') goto LAB_1001d02e;
      param_3 = (int *)param_3[0xb];
    }
    else if ((fVar2 < 0.0) || (fVar3 < 0.0)) {
      if ((0.0 < fVar2) || (0.0 < fVar3)) {
        local_18 = *param_2 - *param_1;
        local_14 = param_2[1] - param_1[1];
        local_10 = param_2[2] - param_1[2];
        FUN_1001e3f0(&local_18);
        pfVar4 = (float *)param_3[9];
        fVar3 = (pfVar4[3] - (param_1[1] * pfVar4[1] + *param_1 * *pfVar4 + param_1[2] * pfVar4[2]))
                / (local_18 * *pfVar4 + local_14 * pfVar4[1] + local_10 * pfVar4[2]);
        local_c = fVar3 * local_18 + *param_1;
        local_8 = fVar3 * local_14 + param_1[1];
        local_4 = fVar3 * local_10 + param_1[2];
        if (fVar2 <= 0.0) {
          uVar5 = FUN_1001ce80(param_1,&local_c,(int *)param_3[0xb],param_4,param_5,param_6);
          if ((char)uVar5 != '\0') {
            return CONCAT31((int3)((uint)uVar5 >> 8),1);
          }
          uVar5 = FUN_1001ce80(&local_c,param_2,(int *)param_3[10],param_4,(float *)param_3[9],0);
          return uVar5;
        }
        uVar5 = FUN_1001ce80(param_1,&local_c,(int *)param_3[10],param_4,param_5,param_6);
        if ((char)uVar5 != '\0') {
          return CONCAT31((int3)((uint)uVar5 >> 8),1);
        }
        uVar5 = FUN_1001ce80(&local_c,param_2,(int *)param_3[0xb],param_4,(float *)param_3[9],1);
        return uVar5;
      }
      param_3 = (int *)param_3[0xb];
    }
    else {
      param_3 = (int *)param_3[10];
    }
    uVar1 = *param_3;
  }
  if (DAT_100db0bc != '\0') {
    *(uint *)(param_4 + 4) = (uint)(*param_3 == 0xfffffffe);
    DAT_100db0bc = '\0';
  }
  uVar1 = *param_3;
  if (-2 < (int)uVar1) {
    return uVar1 & 0xffffff00;
  }
  *(uint *)(param_4 + 8) = (uint)(uVar1 == 0xffffffff);
  *(uint *)(param_4 + 0xc) = (uint)(*param_3 == 0xfffffffd);
  *(float *)(param_4 + 0x14) = *param_1;
  *(float *)(param_4 + 0x18) = param_1[1];
  *(float *)(param_4 + 0x1c) = param_1[2];
  *(undefined4 *)(param_4 + 0x30) = 0;
  if (param_5 == (float *)0x0) {
    *(undefined4 *)(param_4 + 0x20) = 0;
    *(undefined4 *)(param_4 + 0x24) = 0;
    *(undefined4 *)(param_4 + 0x28) = 0;
    *(undefined4 *)(param_4 + 0x2c) = 0;
    return 1;
  }
  if ((char)param_6 != '\0') {
    *(float *)(param_4 + 0x20) = *param_5;
    *(float *)(param_4 + 0x24) = param_5[1];
    *(float *)(param_4 + 0x28) = param_5[2];
    *(float *)(param_4 + 0x2c) = param_5[3];
    return CONCAT31((int3)((uint)param_5 >> 8),1);
  }
  *(float *)(param_4 + 0x20) = -*param_5;
  *(float *)(param_4 + 0x24) = -param_5[1];
  *(float *)(param_4 + 0x28) = -param_5[2];
  *(float *)(param_4 + 0x2c) = -param_5[3];
  pfVar4 = param_5;
LAB_1001d02e:
  return CONCAT31((int3)((uint)pfVar4 >> 8),1);
}

/* 1001d170  FUN_1001d170  (1187 bytes)
 * undefined FUN_1001d170(float * param_1, float * param_2, int param_3, int param_4)
 */
void __cdecl FUN_1001d170(float *param_1,float *param_2,int param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  short sVar10;
  int *piVar11;
  int iVar12;
  float *pfVar13;
  uint uVar14;
  int iVar15;
  float *pfVar16;
  float local_48;
  float local_44;
  float local_40;
  int *local_3c;
  float local_24;
  float local_20;
  float local_1c;
  float local_18 [6];
  
  pfVar13 = param_2;
  fVar4 = *param_2;
  fVar5 = *param_1;
  fVar6 = param_2[1];
  fVar7 = param_1[1];
  fVar8 = param_2[2];
  fVar9 = param_1[2];
  *(undefined4 *)(param_4 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_4 + 0x30) = 0;
  *(float *)(param_4 + 0x14) = *param_2;
  *(float *)(param_4 + 0x18) = param_2[1];
  *(float *)(param_4 + 0x1c) = param_2[2];
  fVar4 = SQRT((fVar4 - fVar5) * (fVar4 - fVar5) +
               (fVar6 - fVar7) * (fVar6 - fVar7) + (fVar8 - fVar9) * (fVar8 - fVar9));
  if (DAT_100db0b8 != 0) {
    FUN_1001cdd0(param_1,param_2,0,*(int **)(DAT_100db0b8 + 0xa4),param_4,fVar4);
    local_24 = *param_2 - *param_1;
    local_3c = (int *)*DAT_100db0a4;
    local_20 = param_2[1] - param_1[1];
    local_1c = param_2[2] - param_1[2];
    if (local_3c != DAT_100db0a4) {
      do {
        piVar11 = (int *)local_3c[2];
        iVar12 = *piVar11;
        if (iVar12 != param_3) {
          pfVar1 = (float *)(piVar11 + 0x2d2);
          iVar15 = iVar12 * 0x14;
          pfVar2 = (float *)(piVar11 + 0x2d5);
          fVar5 = *(float *)(&DAT_100d60b0 + iVar15);
          sVar10 = *(short *)(&DAT_100d60a0 + iVar15);
          fVar6 = SQRT(local_24 * local_24 + local_20 * local_20 + local_1c * local_1c);
          fVar7 = ((local_24 * *(float *)(&DAT_100d60a4 + iVar15) +
                   local_20 * *(float *)(&DAT_100d60a8 + iVar15) +
                   local_1c * *(float *)(&DAT_100d60ac + iVar15)) -
                  (local_1c * param_1[2] + local_24 * *param_1 + local_20 * param_1[1])) / fVar6;
          if ((fVar7 <= fVar6 + fVar5) && (-fVar5 <= fVar7)) {
            if (0.0 <= fVar7) {
              if (fVar7 <= fVar6) {
                fVar9 = *(float *)(&DAT_100d60a4 + iVar15) - ((fVar7 * local_24) / fVar6 + *param_1)
                ;
                fVar8 = *(float *)(&DAT_100d60a8 + iVar15) -
                        ((fVar7 * local_20) / fVar6 + param_1[1]);
                fVar6 = *(float *)(&DAT_100d60ac + iVar15) -
                        ((fVar7 * local_1c) / fVar6 + param_1[2]);
              }
              else {
                fVar9 = *(float *)(&DAT_100d60a4 + iVar15) - *pfVar13;
                fVar8 = *(float *)(&DAT_100d60a8 + iVar15) - pfVar13[1];
                fVar6 = *(float *)(&DAT_100d60ac + iVar15) - pfVar13[2];
              }
            }
            else {
              fVar9 = *(float *)(&DAT_100d60a4 + iVar15) - *param_1;
              fVar8 = *(float *)(&DAT_100d60a8 + iVar15) - param_1[1];
              fVar6 = *(float *)(&DAT_100d60ac + iVar15) - param_1[2];
            }
            if (SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar6 * fVar6) <= fVar5) {
              FUN_1001cb20(param_1,pfVar1,pfVar2,local_18 + 3);
              FUN_1001cb20(pfVar13,pfVar1,pfVar2,local_18);
              local_40 = 0.0;
              local_44 = 1.0;
              piVar11 = (int *)(*(int *)(DAT_100db0b8 + 0xa4) +
                               *(int *)(*(int *)(DAT_100db0b8 + 0x7c) + 0x24 + sVar10 * 0x40) * 0x34
                               );
              pfVar16 = (float *)(piVar11 + 2);
              param_2 = (float *)0x0;
              iVar15 = (int)local_18 + -(int)pfVar16;
              iVar3 = (int)local_18 + -(int)pfVar16 + 0xc;
              do {
                if (*(float *)(iVar15 + (int)pfVar16) <= *(float *)(iVar3 + (int)pfVar16)) {
                  if ((pfVar16[3] < *(float *)(iVar15 + (int)pfVar16)) ||
                     (*(float *)(iVar3 + (int)pfVar16) < *pfVar16)) goto LAB_1001d5f3;
                  fVar5 = *(float *)(iVar15 + (int)pfVar16) - *(float *)(iVar3 + (int)pfVar16);
                  if (*(float *)(iVar3 + (int)pfVar16) <= pfVar16[3]) {
                    local_48 = 0.0;
                  }
                  else {
                    local_48 = (pfVar16[3] - *(float *)(iVar3 + (int)pfVar16)) / fVar5;
                  }
                  if (*pfVar16 <= *(float *)(iVar15 + (int)pfVar16)) goto LAB_1001d4ee;
                  fVar5 = (*pfVar16 - *(float *)(iVar3 + (int)pfVar16)) / fVar5;
                }
                else {
                  if ((pfVar16[3] < *(float *)(iVar3 + (int)pfVar16)) ||
                     (*(float *)(iVar15 + (int)pfVar16) < *pfVar16)) goto LAB_1001d5f3;
                  fVar5 = *(float *)(iVar15 + (int)pfVar16) - *(float *)(iVar3 + (int)pfVar16);
                  if (*pfVar16 <= *(float *)(iVar3 + (int)pfVar16)) {
                    local_48 = 0.0;
                  }
                  else {
                    local_48 = (*pfVar16 - *(float *)(iVar3 + (int)pfVar16)) / fVar5;
                  }
                  if (*(float *)(iVar15 + (int)pfVar16) <= pfVar16[3]) {
LAB_1001d4ee:
                    fVar5 = 1.0;
                  }
                  else {
                    fVar5 = (pfVar16[3] - *(float *)(iVar3 + (int)pfVar16)) / fVar5;
                  }
                }
                if (local_40 < local_48) {
                  local_40 = local_48;
                }
                if (fVar5 < local_44) {
                  local_44 = fVar5;
                }
                if (local_44 < local_40) goto LAB_1001d5f3;
                pfVar16 = pfVar16 + 1;
                param_2 = (float *)((int)param_2 + 1);
              } while ((int)param_2 < 3);
              uVar14 = FUN_1001cdd0(local_18 + 3,local_18,iVar12,piVar11,param_4,fVar4);
              if ((char)uVar14 != '\0') {
                pfVar16 = (float *)(param_4 + 0x14);
                FUN_1001c9a0(pfVar16,pfVar1,pfVar2,pfVar16);
                FUN_1001c9a0((float *)(param_4 + 0x20),(float *)&DAT_100db0c4,pfVar2,
                             (float *)(param_4 + 0x20));
                *pfVar13 = *pfVar16;
                pfVar13[1] = *(float *)(param_4 + 0x18);
                local_1c = *(float *)(param_4 + 0x1c);
                pfVar13[2] = local_1c;
                local_24 = *pfVar13 - *param_1;
                local_20 = pfVar13[1] - param_1[1];
                local_1c = local_1c - param_1[2];
              }
            }
          }
        }
LAB_1001d5f3:
        local_3c = (int *)*local_3c;
      } while (local_3c != DAT_100db0a4);
    }
  }
  return;
}

/* 1001d620  FUN_1001d620  (1839 bytes)
 * undefined FUN_1001d620(float * param_1, float * param_2, int param_3, int param_4)
 */
void __cdecl FUN_1001d620(float *param_1,float *param_2,int param_3,int param_4)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  short sVar9;
  int *piVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  undefined2 uVar14;
  uint uVar15;
  float *pfVar16;
  int iVar17;
  float *pfVar18;
  float local_5c;
  float local_54;
  float local_50;
  float local_3c;
  float local_38;
  float local_34;
  float local_30 [12];
  
  pfVar13 = param_2;
  pfVar12 = param_1;
  fVar3 = *param_2;
  fVar4 = *param_1;
  fVar5 = param_2[1];
  fVar6 = param_1[1];
  fVar7 = param_2[2];
  fVar8 = param_1[2];
  *(undefined4 *)(param_4 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_4 + 0x30) = 0;
  *(float *)(param_4 + 0x14) = *param_2;
  *(float *)(param_4 + 0x18) = param_2[1];
  *(float *)(param_4 + 0x1c) = param_2[2];
  fVar3 = SQRT((fVar3 - fVar4) * (fVar3 - fVar4) +
               (fVar5 - fVar6) * (fVar5 - fVar6) + (fVar7 - fVar8) * (fVar7 - fVar8));
  if (DAT_100db0b8 != 0) {
    FUN_1001cdd0(param_1,param_2,0,*(int **)(DAT_100db0b8 + 0xa4),param_4,fVar3);
    local_3c = *param_2 - *param_1;
    local_38 = param_2[1] - param_1[1];
    local_34 = param_2[2] - param_1[2];
    param_1 = (float *)*DAT_100db0a4;
    if ((float *)*DAT_100db0a4 != DAT_100db0a4) {
      do {
        piVar10 = (int *)param_1[2];
        iVar11 = *piVar10;
        if (iVar11 != param_3) {
          pfVar1 = (float *)(piVar10 + 0x2d2);
          iVar17 = iVar11 * 0x14;
          pfVar18 = (float *)(piVar10 + 0x2d5);
          fVar4 = *(float *)(&DAT_100d60b0 + iVar17);
          sVar9 = *(short *)(&DAT_100d60a0 + iVar17);
          fVar5 = SQRT(local_3c * local_3c + local_38 * local_38 + local_34 * local_34);
          fVar6 = ((local_38 * *(float *)(&DAT_100d60a8 + iVar17) +
                   local_34 * *(float *)(&DAT_100d60ac + iVar17) +
                   local_3c * *(float *)(&DAT_100d60a4 + iVar17)) -
                  (local_34 * pfVar12[2] + local_3c * *pfVar12 + local_38 * pfVar12[1])) / fVar5;
          if ((fVar6 <= fVar5 + fVar4) && (-fVar4 <= fVar6)) {
            if (0.0 <= fVar6) {
              if (fVar6 <= fVar5) {
                fVar8 = *(float *)(&DAT_100d60a4 + iVar17) - ((fVar6 * local_3c) / fVar5 + *pfVar12)
                ;
                fVar7 = *(float *)(&DAT_100d60a8 + iVar17) -
                        ((fVar6 * local_38) / fVar5 + pfVar12[1]);
                fVar5 = *(float *)(&DAT_100d60ac + iVar17) -
                        ((fVar6 * local_34) / fVar5 + pfVar12[2]);
              }
              else {
                fVar8 = *(float *)(&DAT_100d60a4 + iVar17) - *pfVar13;
                fVar7 = *(float *)(&DAT_100d60a8 + iVar17) - pfVar13[1];
                fVar5 = *(float *)(&DAT_100d60ac + iVar17) - pfVar13[2];
              }
            }
            else {
              fVar8 = *(float *)(&DAT_100d60a4 + iVar17) - *pfVar12;
              fVar7 = *(float *)(&DAT_100d60a8 + iVar17) - pfVar12[1];
              fVar5 = *(float *)(&DAT_100d60ac + iVar17) - pfVar12[2];
            }
            if (SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar5 * fVar5) <= fVar4) {
              FUN_1001cb20(pfVar12,pfVar1,pfVar18,local_30 + 3);
              FUN_1001cb20(pfVar13,pfVar1,pfVar18,local_30);
              local_50 = 0.0;
              local_54 = 1.0;
              piVar10 = (int *)(*(int *)(DAT_100db0b8 + 0xa4) +
                               *(int *)(*(int *)(DAT_100db0b8 + 0x7c) + 0x24 + sVar9 * 0x40) * 0x34)
              ;
              pfVar16 = (float *)(piVar10 + 2);
              param_2 = (float *)0x0;
              iVar17 = (int)local_30 + -(int)pfVar16;
              iVar2 = (int)local_30 + -(int)pfVar16 + 0xc;
              do {
                if (*(float *)(iVar17 + (int)pfVar16) <= *(float *)(iVar2 + (int)pfVar16)) {
                  if ((pfVar16[3] < *(float *)(iVar17 + (int)pfVar16)) ||
                     (*(float *)(iVar2 + (int)pfVar16) < *pfVar16)) goto LAB_1001daa8;
                  fVar4 = *(float *)(iVar17 + (int)pfVar16) - *(float *)(iVar2 + (int)pfVar16);
                  if (*(float *)(iVar2 + (int)pfVar16) <= pfVar16[3]) {
                    local_5c = 0.0;
                  }
                  else {
                    local_5c = (pfVar16[3] - *(float *)(iVar2 + (int)pfVar16)) / fVar4;
                  }
                  if (*pfVar16 <= *(float *)(iVar17 + (int)pfVar16)) goto LAB_1001d9a7;
                  fVar4 = (*pfVar16 - *(float *)(iVar2 + (int)pfVar16)) / fVar4;
                }
                else {
                  if ((pfVar16[3] < *(float *)(iVar2 + (int)pfVar16)) ||
                     (*(float *)(iVar17 + (int)pfVar16) < *pfVar16)) goto LAB_1001daa8;
                  fVar4 = *(float *)(iVar17 + (int)pfVar16) - *(float *)(iVar2 + (int)pfVar16);
                  if (*pfVar16 <= *(float *)(iVar2 + (int)pfVar16)) {
                    local_5c = 0.0;
                  }
                  else {
                    local_5c = (*pfVar16 - *(float *)(iVar2 + (int)pfVar16)) / fVar4;
                  }
                  if (*(float *)(iVar17 + (int)pfVar16) <= pfVar16[3]) {
LAB_1001d9a7:
                    fVar4 = 1.0;
                  }
                  else {
                    fVar4 = (pfVar16[3] - *(float *)(iVar2 + (int)pfVar16)) / fVar4;
                  }
                }
                if (local_50 < local_5c) {
                  local_50 = local_5c;
                }
                if (fVar4 < local_54) {
                  local_54 = fVar4;
                }
                if (local_54 < local_50) goto LAB_1001daa8;
                pfVar16 = pfVar16 + 1;
                param_2 = (float *)((int)param_2 + 1);
              } while ((int)param_2 < 3);
              uVar15 = FUN_1001cdd0(local_30 + 3,local_30,iVar11,piVar10,param_4,fVar3);
              if ((char)uVar15 != '\0') {
                pfVar16 = (float *)(param_4 + 0x14);
                FUN_1001c9a0(pfVar16,pfVar1,pfVar18,pfVar16);
                FUN_1001c9a0((float *)(param_4 + 0x20),(float *)&DAT_100db0c4,pfVar18,
                             (float *)(param_4 + 0x20));
                *pfVar13 = *pfVar16;
                pfVar13[1] = *(float *)(param_4 + 0x18);
                local_34 = *(float *)(param_4 + 0x1c);
                pfVar13[2] = local_34;
                local_3c = *pfVar13 - *pfVar12;
                local_38 = pfVar13[1] - pfVar12[1];
                local_34 = local_34 - pfVar12[2];
              }
            }
          }
        }
LAB_1001daa8:
        param_1 = (float *)*param_1;
      } while (param_1 != DAT_100db0a4);
    }
    param_1 = (float *)*DAT_100d6094;
    if (param_1 != DAT_100d6094) {
      do {
        piVar10 = (int *)param_1[2];
        iVar11 = *piVar10;
        if (iVar11 != param_3) {
          pfVar1 = (float *)(piVar10 + 0x2d2);
          pfVar16 = (float *)(piVar10 + 0xcb);
          pfVar18 = local_30 + 6;
          iVar17 = 6;
          do {
            fVar3 = *pfVar16;
            pfVar16 = pfVar16 + 1;
            *pfVar18 = fVar3;
            pfVar18 = pfVar18 + 1;
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
          iVar17 = iVar11 * 0x14;
          fVar3 = *(float *)(&DAT_100d60b0 + iVar17);
          fVar4 = SQRT(local_3c * local_3c + local_38 * local_38 + local_34 * local_34);
          fVar5 = ((local_3c * *(float *)(&DAT_100d60a4 + iVar17) +
                   local_38 * *(float *)(&DAT_100d60a8 + iVar17) +
                   local_34 * *(float *)(&DAT_100d60ac + iVar17)) -
                  (local_34 * pfVar12[2] + local_3c * *pfVar12 + local_38 * pfVar12[1])) / fVar4;
          if ((fVar5 <= fVar4 + fVar3) && (-fVar3 <= fVar5)) {
            if (0.0 <= fVar5) {
              if (fVar5 <= fVar4) {
                fVar7 = *(float *)(&DAT_100d60a4 + iVar17) - ((fVar5 * local_3c) / fVar4 + *pfVar12)
                ;
                fVar6 = *(float *)(&DAT_100d60a8 + iVar17) -
                        ((fVar5 * local_38) / fVar4 + pfVar12[1]);
                fVar4 = *(float *)(&DAT_100d60ac + iVar17) -
                        ((fVar5 * local_34) / fVar4 + pfVar12[2]);
              }
              else {
                fVar7 = *(float *)(&DAT_100d60a4 + iVar17) - *pfVar13;
                fVar6 = *(float *)(&DAT_100d60a8 + iVar17) - pfVar13[1];
                fVar4 = *(float *)(&DAT_100d60ac + iVar17) - pfVar13[2];
              }
            }
            else {
              fVar7 = *(float *)(&DAT_100d60a4 + iVar17) - *pfVar12;
              fVar6 = *(float *)(&DAT_100d60a8 + iVar17) - pfVar12[1];
              fVar4 = *(float *)(&DAT_100d60ac + iVar17) - pfVar12[2];
            }
            if (SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4) <= fVar3) {
              FUN_1001cb20(pfVar12,pfVar1,(float *)&DAT_100db0c4,local_30);
              FUN_1001cb20(pfVar13,pfVar1,(float *)&DAT_100db0c4,local_30 + 3);
              uVar14 = FUN_1001dd50(local_30,local_30 + 3,iVar11,param_4,local_30 + 6);
              if ((char)uVar14 != '\0') {
                pfVar18 = (float *)(param_4 + 0x14);
                FUN_1001c9a0(pfVar18,pfVar1,(float *)&DAT_100db0c4,pfVar18);
                FUN_1001c9a0((float *)(param_4 + 0x20),(float *)&DAT_100db0c4,(float *)&DAT_100db0c4
                             ,(float *)(param_4 + 0x20));
                *pfVar13 = *pfVar18;
                pfVar13[1] = *(float *)(param_4 + 0x18);
                local_34 = *(float *)(param_4 + 0x1c);
                pfVar13[2] = local_34;
                local_3c = *pfVar13 - *pfVar12;
                local_38 = pfVar13[1] - pfVar12[1];
                local_34 = local_34 - pfVar12[2];
              }
            }
          }
        }
        param_1 = (float *)*param_1;
      } while (param_1 != DAT_100d6094);
    }
  }
  return;
}

/* 1001dd50  FUN_1001dd50  (546 bytes)
 * undefined2 FUN_1001dd50(float * param_1, float * param_2, undefined4 param_3, int param_4, float * param_5)
 * called by: FUN_1001d620
 */
undefined2 __cdecl
FUN_1001dd50(float *param_1,float *param_2,undefined4 param_3,int param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *local_c;
  float local_8;
  int local_4;
  
  iVar6 = 0;
  iVar7 = (int)param_2 - (int)param_5;
  local_c = (float *)0x0;
  local_8 = 1.0;
  local_4 = 0;
  iVar5 = (int)param_1 - (int)param_5;
  pfVar4 = param_5;
  do {
    if (*(float *)(iVar7 + (int)pfVar4) <= *(float *)(iVar5 + (int)pfVar4)) {
      fVar1 = *(float *)(iVar7 + (int)pfVar4);
      fVar2 = pfVar4[3];
      if (fVar1 >= fVar2 && (fVar1 == fVar2) == 0) {
        return (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
               (ushort)(fVar1 == fVar2) << 0xe;
      }
      fVar1 = *(float *)(iVar5 + (int)pfVar4);
      fVar2 = *pfVar4;
      if (fVar1 < fVar2) {
        return (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
               (ushort)(fVar1 == fVar2) << 0xe;
      }
      fVar1 = *(float *)(iVar7 + (int)pfVar4) - *(float *)(iVar5 + (int)pfVar4);
      if (*(float *)(iVar5 + (int)pfVar4) <= pfVar4[3]) {
        param_5 = (float *)0x0;
      }
      else {
        param_5 = (float *)((pfVar4[3] - *(float *)(iVar5 + (int)pfVar4)) / fVar1);
      }
      if (*pfVar4 <= *(float *)(iVar7 + (int)pfVar4)) goto LAB_1001de4c;
      fVar1 = (*pfVar4 - *(float *)(iVar5 + (int)pfVar4)) / fVar1;
    }
    else {
      fVar1 = *(float *)(iVar5 + (int)pfVar4);
      fVar2 = pfVar4[3];
      if (fVar1 >= fVar2 && (fVar1 == fVar2) == 0) {
        return (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
               (ushort)(fVar1 == fVar2) << 0xe;
      }
      fVar1 = *(float *)(iVar7 + (int)pfVar4);
      fVar2 = *pfVar4;
      if (fVar1 < fVar2) {
        return (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
               (ushort)(fVar1 == fVar2) << 0xe;
      }
      fVar1 = *(float *)(iVar7 + (int)pfVar4) - *(float *)(iVar5 + (int)pfVar4);
      if (*pfVar4 <= *(float *)(iVar5 + (int)pfVar4)) {
        param_5 = (float *)0x0;
      }
      else {
        param_5 = (float *)((*pfVar4 - *(float *)(iVar5 + (int)pfVar4)) / fVar1);
      }
      if (*(float *)(iVar7 + (int)pfVar4) <= pfVar4[3]) {
LAB_1001de4c:
        fVar1 = 1.0;
      }
      else {
        fVar1 = (pfVar4[3] - *(float *)(iVar5 + (int)pfVar4)) / fVar1;
      }
    }
    if ((float)local_c < (float)param_5) {
      local_c = param_5;
      if (*(float *)(iVar7 + (int)pfVar4) <= *(float *)(iVar5 + (int)pfVar4)) {
        iVar3 = 3;
      }
      else {
        iVar3 = 0;
      }
      local_4 = iVar3 + 1 + iVar6;
    }
    if (fVar1 < local_8) {
      local_8 = fVar1;
    }
    if (local_8 < (float)local_c) {
      return (ushort)(local_8 < (float)local_c) << 8 |
             (ushort)(NAN(local_8) || NAN((float)local_c)) << 10 |
             (ushort)(local_8 == (float)local_c) << 0xe;
    }
    pfVar4 = pfVar4 + 1;
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      if (&stack0x00000000 != (undefined1 *)0xffffffec) {
        param_5 = local_c;
      }
      if (local_4 == 0) {
        local_4 = -1;
      }
      *(float **)(param_4 + 0x10) = param_5;
      *(undefined4 *)(param_4 + 0x30) = param_3;
      fVar1 = (*param_2 - *param_1) * (float)param_5 + *param_1;
      *param_2 = fVar1;
      *(float *)(param_4 + 0x14) = fVar1;
      fVar1 = (param_2[1] - param_1[1]) * (float)param_5 + param_1[1];
      param_2[1] = fVar1;
      *(float *)(param_4 + 0x18) = fVar1;
      fVar1 = (param_2[2] - param_1[2]) * (float)param_5 + param_1[2];
      param_2[2] = fVar1;
      *(float *)(param_4 + 0x1c) = fVar1;
      *(undefined4 *)(param_4 + 0x20) = 0;
      *(undefined4 *)(param_4 + 0x24) = 0;
      *(undefined4 *)(param_4 + 0x28) = 0;
      if (local_4 < 4) {
        if (local_4 < 1) {
          *(undefined4 *)(param_4 + 0x28) = 0x3f800000;
        }
        else {
          *(undefined4 *)(param_4 + 0x1c + local_4 * 4) = 0xbf800000;
        }
      }
      else {
        *(undefined4 *)(param_4 + 0x10 + local_4 * 4) = 0x3f800000;
      }
      *(float *)(param_4 + 0x2c) =
           *(float *)(param_4 + 0x14) * *(float *)(param_4 + 0x20) +
           *(float *)(param_4 + 0x24) * *(float *)(param_4 + 0x18) +
           *(float *)(param_4 + 0x1c) * *(float *)(param_4 + 0x28);
      return (short)CONCAT31((int3)((uint)param_4 >> 8),1);
    }
  } while( true );
}

/* 1001df80  FUN_1001df80  (68 bytes)
 * undefined FUN_1001df80(int param_1, float * param_2)
 */
void __cdecl FUN_1001df80(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 + *(int *)(*(int *)(DAT_100db0b8 + 0x7c) + 0x24 + param_1 * 0x40) * 0x14;
    iVar2 = iVar2 + 1;
    *param_2 = (float)(int)*(short *)(*(int *)(DAT_100db0b8 + 0xa4) + 8 + iVar1 * 2);
    param_2 = param_2 + 1;
  } while (iVar2 < 6);
  return;
}

/* 1001dfd0  FUN_1001dfd0  (128 bytes)
 * undefined FUN_1001dfd0(float * param_1, float * param_2, int param_3)
 * called by: FUN_1001cbf0
 */
void __cdecl FUN_1001dfd0(float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_2;
  fVar2 = *param_1;
  fVar3 = param_2[1];
  fVar4 = param_1[1];
  fVar5 = param_2[2];
  fVar6 = param_1[2];
  *(undefined4 *)(param_3 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_3 + 0x30) = 0;
  *(float *)(param_3 + 0x14) = *param_2;
  *(float *)(param_3 + 0x18) = param_2[1];
  *(float *)(param_3 + 0x1c) = param_2[2];
  if (DAT_100db0b8 != 0) {
    FUN_1001e050(param_1,param_2,0,*(int **)(DAT_100db0b8 + 0xa4),param_3,
                 SQRT((fVar1 - fVar2) * (fVar1 - fVar2) +
                      (fVar3 - fVar4) * (fVar3 - fVar4) + (fVar5 - fVar6) * (fVar5 - fVar6)));
    return;
  }
  return;
}

/* 1001e050  FUN_1001e050  (162 bytes)
 * uint FUN_1001e050(float * param_1, float * param_2, undefined4 param_3, int * param_4, int param_5, float param_6)
 * called by: FUN_1001dfd0, FUN_1001e450, FUN_1001e930
 */
uint __cdecl
FUN_1001e050(float *param_1,float *param_2,undefined4 param_3,int *param_4,int param_5,float param_6
            )

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  
  DAT_100db0bc = 1;
  uVar4 = FUN_1001e100(param_1,param_2,param_4,param_5,(float *)0x0,0);
  if ((char)uVar4 != '\0') {
    *(undefined4 *)(param_5 + 0x30) = param_3;
    fVar1 = *(float *)(param_5 + 0x14) - *param_1;
    fVar3 = *(float *)(param_5 + 0x18) - param_1[1];
    fVar2 = *(float *)(param_5 + 0x1c) - param_1[2];
    if (param_6 == 0.0) {
      *(undefined4 *)(param_5 + 0x10) = 0;
    }
    else {
      *(float *)(param_5 + 0x10) = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2) / param_6;
    }
    *param_2 = *(float *)(param_5 + 0x14);
    fVar1 = *(float *)(param_5 + 0x18);
    param_2[1] = fVar1;
    param_2[2] = *(float *)(param_5 + 0x1c);
    return CONCAT31((int3)((uint)fVar1 >> 8),1);
  }
  return uVar4 & 0xffffff00;
}

/* 1001e100  FUN_1001e100  (752 bytes)
 * undefined4 FUN_1001e100(float * param_1, float * param_2, int * param_3, int param_4, float * param_5, undefined4 param_6)
 * called by: FUN_1001e050, FUN_1001e100
 */
undefined4 __cdecl
FUN_1001e100(float *param_1,float *param_2,int *param_3,int param_4,float *param_5,
            undefined4 param_6)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined4 uVar5;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  uVar1 = *param_3;
  while (-1 < (int)uVar1) {
    pfVar4 = (float *)param_3[6];
    fVar2 = (param_1[1] * pfVar4[1] + *param_1 * *pfVar4 + param_1[2] * pfVar4[2]) - pfVar4[3];
    fVar3 = (*param_2 * *pfVar4 + pfVar4[1] * param_2[1] + pfVar4[2] * param_2[2]) - pfVar4[3];
    if ((fVar2 == 0.0) && (fVar3 == 0.0)) {
      pfVar4 = (float *)FUN_1001e100(param_1,param_2,(int *)param_3[7],param_4,param_5,param_6);
      if ((char)pfVar4 != '\0') goto LAB_1001e2ae;
      param_3 = (int *)param_3[8];
    }
    else if ((fVar2 < 0.0) || (fVar3 < 0.0)) {
      if ((0.0 < fVar2) || (0.0 < fVar3)) {
        local_18 = *param_2 - *param_1;
        local_14 = param_2[1] - param_1[1];
        local_10 = param_2[2] - param_1[2];
        FUN_1001e3f0(&local_18);
        pfVar4 = (float *)param_3[6];
        fVar3 = (pfVar4[3] - (param_1[1] * pfVar4[1] + *param_1 * *pfVar4 + param_1[2] * pfVar4[2]))
                / (local_18 * *pfVar4 + local_14 * pfVar4[1] + local_10 * pfVar4[2]);
        local_c = fVar3 * local_18 + *param_1;
        local_8 = fVar3 * local_14 + param_1[1];
        local_4 = fVar3 * local_10 + param_1[2];
        if (fVar2 <= 0.0) {
          uVar5 = FUN_1001e100(param_1,&local_c,(int *)param_3[8],param_4,param_5,param_6);
          if ((char)uVar5 != '\0') {
            return CONCAT31((int3)((uint)uVar5 >> 8),1);
          }
          uVar5 = FUN_1001e100(&local_c,param_2,(int *)param_3[7],param_4,(float *)param_3[6],0);
          return uVar5;
        }
        uVar5 = FUN_1001e100(param_1,&local_c,(int *)param_3[7],param_4,param_5,param_6);
        if ((char)uVar5 != '\0') {
          return CONCAT31((int3)((uint)uVar5 >> 8),1);
        }
        uVar5 = FUN_1001e100(&local_c,param_2,(int *)param_3[8],param_4,(float *)param_3[6],1);
        return uVar5;
      }
      param_3 = (int *)param_3[8];
    }
    else {
      param_3 = (int *)param_3[7];
    }
    uVar1 = *param_3;
  }
  if (DAT_100db0bc != '\0') {
    *(uint *)(param_4 + 4) = (uint)(*param_3 == 0xfffffffe);
    DAT_100db0bc = '\0';
  }
  uVar1 = *param_3;
  if (-2 < (int)uVar1) {
    return uVar1 & 0xffffff00;
  }
  *(uint *)(param_4 + 8) = (uint)(uVar1 == 0xffffffff);
  *(uint *)(param_4 + 0xc) = (uint)(*param_3 == 0xfffffffd);
  *(float *)(param_4 + 0x14) = *param_1;
  *(float *)(param_4 + 0x18) = param_1[1];
  *(float *)(param_4 + 0x1c) = param_1[2];
  *(undefined4 *)(param_4 + 0x30) = 0;
  if (param_5 == (float *)0x0) {
    *(undefined4 *)(param_4 + 0x20) = 0;
    *(undefined4 *)(param_4 + 0x24) = 0;
    *(undefined4 *)(param_4 + 0x28) = 0;
    *(undefined4 *)(param_4 + 0x2c) = 0;
    return 1;
  }
  if ((char)param_6 != '\0') {
    *(float *)(param_4 + 0x20) = *param_5;
    *(float *)(param_4 + 0x24) = param_5[1];
    *(float *)(param_4 + 0x28) = param_5[2];
    *(float *)(param_4 + 0x2c) = param_5[3];
    return CONCAT31((int3)((uint)param_5 >> 8),1);
  }
  *(float *)(param_4 + 0x20) = -*param_5;
  *(float *)(param_4 + 0x24) = -param_5[1];
  *(float *)(param_4 + 0x28) = -param_5[2];
  *(float *)(param_4 + 0x2c) = -param_5[3];
  pfVar4 = param_5;
LAB_1001e2ae:
  return CONCAT31((int3)((uint)pfVar4 >> 8),1);
}

/* 1001e3f0  FUN_1001e3f0  (91 bytes)
 * float10 FUN_1001e3f0(float * param_1)
 * called by: FUN_1001ce80, FUN_1001e100
 */
float10 __cdecl FUN_1001e3f0(float *param_1)

{
  float10 fVar1;
  
  fVar1 = SQRT((float10)param_1[2] * (float10)param_1[2] +
               (float10)param_1[1] * (float10)param_1[1] + (float10)*param_1 * (float10)*param_1);
  if (fVar1 == (float10)0.0) {
    param_1[2] = 0.0;
    param_1[1] = 0.0;
    *param_1 = 0.0;
    return (float10)0.0;
  }
  *param_1 = (float)((float10)*param_1 / fVar1);
  param_1[1] = (float)((float10)param_1[1] / fVar1);
  param_1[2] = (float)((float10)param_1[2] / fVar1);
  return fVar1;
}

/* 1001e450  FUN_1001e450  (1245 bytes)
 * undefined FUN_1001e450(float * param_1, float * param_2, int param_3, int param_4)
 */
void __cdecl FUN_1001e450(float *param_1,float *param_2,int param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  short sVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  float local_44;
  float local_40;
  float local_3c;
  int *local_38;
  float local_24;
  float local_20;
  float local_1c;
  float local_18 [6];
  
  fVar3 = *param_2;
  fVar4 = *param_1;
  fVar5 = param_2[1];
  fVar6 = param_1[1];
  fVar7 = param_2[2];
  fVar8 = param_1[2];
  *(undefined4 *)(param_4 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_4 + 0x30) = 0;
  *(float *)(param_4 + 0x14) = *param_2;
  *(float *)(param_4 + 0x18) = param_2[1];
  *(float *)(param_4 + 0x1c) = param_2[2];
  fVar3 = SQRT((fVar3 - fVar4) * (fVar3 - fVar4) +
               (fVar5 - fVar6) * (fVar5 - fVar6) + (fVar7 - fVar8) * (fVar7 - fVar8));
  if (DAT_100db0b8 != 0) {
    FUN_1001e050(param_1,param_2,0,*(int **)(DAT_100db0b8 + 0xa4),param_4,fVar3);
    local_24 = *param_2 - *param_1;
    local_38 = (int *)*DAT_100db0a4;
    local_20 = param_2[1] - param_1[1];
    local_1c = param_2[2] - param_1[2];
    if (local_38 != DAT_100db0a4) {
      do {
        piVar10 = (int *)local_38[2];
        iVar11 = *piVar10;
        if (iVar11 != param_3) {
          pfVar1 = (float *)(piVar10 + 0x2d2);
          iVar13 = iVar11 * 0x14;
          pfVar2 = (float *)(piVar10 + 0x2d5);
          fVar4 = *(float *)(&DAT_100d60b0 + iVar13);
          sVar9 = *(short *)(&DAT_100d60a0 + iVar13);
          fVar5 = SQRT(local_24 * local_24 + local_20 * local_20 + local_1c * local_1c);
          fVar6 = ((local_24 * *(float *)(&DAT_100d60a4 + iVar13) +
                   local_20 * *(float *)(&DAT_100d60a8 + iVar13) +
                   local_1c * *(float *)(&DAT_100d60ac + iVar13)) -
                  (local_1c * param_1[2] + local_24 * *param_1 + local_20 * param_1[1])) / fVar5;
          if ((fVar6 <= fVar5 + fVar4) && (-fVar4 <= fVar6)) {
            if (0.0 <= fVar6) {
              if (fVar6 <= fVar5) {
                fVar8 = *(float *)(&DAT_100d60a4 + iVar13) - ((fVar6 * local_24) / fVar5 + *param_1)
                ;
                fVar7 = *(float *)(&DAT_100d60a8 + iVar13) -
                        ((fVar6 * local_20) / fVar5 + param_1[1]);
                fVar5 = *(float *)(&DAT_100d60ac + iVar13) -
                        ((fVar6 * local_1c) / fVar5 + param_1[2]);
              }
              else {
                fVar8 = *(float *)(&DAT_100d60a4 + iVar13) - *param_2;
                fVar7 = *(float *)(&DAT_100d60a8 + iVar13) - param_2[1];
                fVar5 = *(float *)(&DAT_100d60ac + iVar13) - param_2[2];
              }
            }
            else {
              fVar8 = *(float *)(&DAT_100d60a4 + iVar13) - *param_1;
              fVar7 = *(float *)(&DAT_100d60a8 + iVar13) - param_1[1];
              fVar5 = *(float *)(&DAT_100d60ac + iVar13) - param_1[2];
            }
            if (SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar5 * fVar5) <= fVar4) {
              FUN_1001cb20(param_1,pfVar1,pfVar2,local_18);
              FUN_1001cb20(param_2,pfVar1,pfVar2,local_18 + 3);
              local_3c = 0.0;
              local_40 = 1.0;
              iVar15 = 0;
              piVar10 = (int *)(*(int *)(DAT_100db0b8 + 0xa4) +
                               *(int *)(*(int *)(DAT_100db0b8 + 0x7c) + 0x24 + sVar9 * 0x40) * 0x28)
              ;
              piVar14 = piVar10 + 2;
              iVar13 = 0;
              do {
                if (*(float *)((int)local_18 + iVar15 + 0xc) <= *(float *)((int)local_18 + iVar15))
                {
                  fVar4 = (float)(int)*(short *)((int)piVar14 + 6);
                  if ((fVar4 < *(float *)((int)local_18 + iVar15 + 0xc)) ||
                     (fVar5 = (float)(int)(short)*piVar14,
                     *(float *)((int)local_18 + iVar15) < fVar5)) goto LAB_1001e90d;
                  fVar6 = *(float *)((int)local_18 + iVar15 + 0xc) -
                          *(float *)((int)local_18 + iVar15);
                  if (*(float *)((int)local_18 + iVar15) <= fVar4) {
                    local_44 = 0.0;
                  }
                  else {
                    local_44 = (fVar4 - *(float *)((int)local_18 + iVar15)) / fVar6;
                  }
                  if (fVar5 <= *(float *)((int)local_18 + iVar15 + 0xc)) goto LAB_1001e81d;
                  fVar6 = (fVar5 - *(float *)((int)local_18 + iVar15)) / fVar6;
                }
                else {
                  fVar4 = (float)(int)*(short *)((int)piVar14 + 6);
                  if ((fVar4 < *(float *)((int)local_18 + iVar15)) ||
                     (fVar5 = (float)(int)(short)*piVar14,
                     *(float *)((int)local_18 + iVar15 + 0xc) < fVar5)) goto LAB_1001e90d;
                  fVar6 = *(float *)((int)local_18 + iVar15 + 0xc) -
                          *(float *)((int)local_18 + iVar15);
                  if (fVar5 <= *(float *)((int)local_18 + iVar15)) {
                    local_44 = 0.0;
                  }
                  else {
                    local_44 = (fVar5 - *(float *)((int)local_18 + iVar15)) / fVar6;
                  }
                  if (*(float *)((int)local_18 + iVar15 + 0xc) <= fVar4) {
LAB_1001e81d:
                    fVar6 = 1.0;
                  }
                  else {
                    fVar6 = (fVar4 - *(float *)((int)local_18 + iVar15)) / fVar6;
                  }
                }
                if (local_3c < local_44) {
                  local_3c = local_44;
                }
                if (fVar6 < local_40) {
                  local_40 = fVar6;
                }
                if (local_40 < local_3c) goto LAB_1001e90d;
                piVar14 = (int *)((int)piVar14 + 2);
                iVar15 = iVar15 + 4;
                iVar13 = iVar13 + 1;
              } while (iVar13 < 3);
              uVar12 = FUN_1001e050(local_18,local_18 + 3,iVar11,piVar10,param_4,fVar3);
              if ((char)uVar12 != '\0') {
                FUN_1001c9a0((float *)(param_4 + 0x14),pfVar1,pfVar2,(float *)(param_4 + 0x14));
                FUN_1001c9a0((float *)(param_4 + 0x20),(float *)&DAT_100db0d0,pfVar2,
                             (float *)(param_4 + 0x20));
                *param_2 = *(float *)(param_4 + 0x14);
                param_2[1] = *(float *)(param_4 + 0x18);
                local_1c = *(float *)(param_4 + 0x1c);
                param_2[2] = local_1c;
                local_24 = *param_2 - *param_1;
                local_20 = param_2[1] - param_1[1];
                local_1c = local_1c - param_1[2];
              }
            }
          }
        }
LAB_1001e90d:
        local_38 = (int *)*local_38;
      } while (local_38 != DAT_100db0a4);
    }
  }
  return;
}

/* 1001e930  FUN_1001e930  (1908 bytes)
 * undefined FUN_1001e930(float * param_1, float * param_2, int param_3, int param_4)
 */
void __cdecl FUN_1001e930(float *param_1,float *param_2,int param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  int *piVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  undefined2 uVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  float *pfVar18;
  float *pfVar19;
  longlong lVar20;
  float local_4c;
  float local_48;
  float local_44;
  float local_30;
  float local_2c;
  float local_28;
  float local_24 [3];
  float local_18 [6];
  
  pfVar12 = param_2;
  pfVar11 = param_1;
  fVar2 = *param_2;
  fVar3 = *param_1;
  fVar4 = param_2[1];
  fVar5 = param_1[1];
  fVar6 = param_2[2];
  fVar7 = param_1[2];
  *(undefined4 *)(param_4 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_4 + 0x30) = 0;
  *(float *)(param_4 + 0x14) = *param_2;
  *(float *)(param_4 + 0x18) = param_2[1];
  *(float *)(param_4 + 0x1c) = param_2[2];
  fVar2 = SQRT((fVar2 - fVar3) * (fVar2 - fVar3) +
               (fVar4 - fVar5) * (fVar4 - fVar5) + (fVar6 - fVar7) * (fVar6 - fVar7));
  if (DAT_100db0b8 != 0) {
    FUN_1001e050(param_1,param_2,0,*(int **)(DAT_100db0b8 + 0xa4),param_4,fVar2);
    local_30 = *param_2 - *param_1;
    local_2c = param_2[1] - param_1[1];
    local_28 = param_2[2] - param_1[2];
    param_1 = (float *)*DAT_100db0a4;
    if ((float *)*DAT_100db0a4 != DAT_100db0a4) {
      do {
        piVar9 = (int *)param_1[2];
        iVar10 = *piVar9;
        if (iVar10 != param_3) {
          pfVar1 = (float *)(piVar9 + 0x2d2);
          iVar15 = iVar10 * 0x14;
          pfVar19 = (float *)(piVar9 + 0x2d5);
          fVar3 = *(float *)(&DAT_100d60b0 + iVar15);
          sVar8 = *(short *)(&DAT_100d60a0 + iVar15);
          fVar4 = SQRT(local_30 * local_30 + local_2c * local_2c + local_28 * local_28);
          fVar5 = ((local_2c * *(float *)(&DAT_100d60a8 + iVar15) +
                   local_28 * *(float *)(&DAT_100d60ac + iVar15) +
                   local_30 * *(float *)(&DAT_100d60a4 + iVar15)) -
                  (local_28 * pfVar11[2] + local_30 * *pfVar11 + local_2c * pfVar11[1])) / fVar4;
          if ((fVar5 <= fVar4 + fVar3) && (-fVar3 <= fVar5)) {
            if (0.0 <= fVar5) {
              if (fVar5 <= fVar4) {
                fVar7 = *(float *)(&DAT_100d60a4 + iVar15) - ((fVar5 * local_30) / fVar4 + *pfVar11)
                ;
                fVar6 = *(float *)(&DAT_100d60a8 + iVar15) -
                        ((fVar5 * local_2c) / fVar4 + pfVar11[1]);
                fVar4 = *(float *)(&DAT_100d60ac + iVar15) -
                        ((fVar5 * local_28) / fVar4 + pfVar11[2]);
              }
              else {
                fVar7 = *(float *)(&DAT_100d60a4 + iVar15) - *param_2;
                fVar6 = *(float *)(&DAT_100d60a8 + iVar15) - param_2[1];
                fVar4 = *(float *)(&DAT_100d60ac + iVar15) - param_2[2];
              }
            }
            else {
              fVar7 = *(float *)(&DAT_100d60a4 + iVar15) - *pfVar11;
              fVar6 = *(float *)(&DAT_100d60a8 + iVar15) - pfVar11[1];
              fVar4 = *(float *)(&DAT_100d60ac + iVar15) - pfVar11[2];
            }
            if (SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4) <= fVar3) {
              FUN_1001cb20(pfVar11,pfVar1,pfVar19,local_24);
              FUN_1001cb20(param_2,pfVar1,pfVar19,local_18);
              local_44 = 0.0;
              local_48 = 1.0;
              iVar17 = 0;
              piVar9 = (int *)(*(int *)(DAT_100db0b8 + 0xa4) +
                              *(int *)(*(int *)(DAT_100db0b8 + 0x7c) + 0x24 + sVar8 * 0x40) * 0x28);
              piVar16 = piVar9 + 2;
              iVar15 = 0;
              do {
                if (*(float *)((int)local_18 + iVar17) <= *(float *)((int)local_24 + iVar17)) {
                  fVar3 = (float)(int)*(short *)((int)piVar16 + 6);
                  if ((fVar3 < *(float *)((int)local_18 + iVar17)) ||
                     (fVar4 = (float)(int)(short)*piVar16,
                     *(float *)((int)local_24 + iVar17) < fVar4)) goto LAB_1001edfa;
                  fVar5 = *(float *)((int)local_18 + iVar17) - *(float *)((int)local_24 + iVar17);
                  if (*(float *)((int)local_24 + iVar17) <= fVar3) {
                    local_4c = 0.0;
                  }
                  else {
                    local_4c = (fVar3 - *(float *)((int)local_24 + iVar17)) / fVar5;
                  }
                  if (fVar4 <= *(float *)((int)local_18 + iVar17)) goto LAB_1001ecfd;
                  fVar5 = (fVar4 - *(float *)((int)local_24 + iVar17)) / fVar5;
                }
                else {
                  fVar3 = (float)(int)*(short *)((int)piVar16 + 6);
                  if ((fVar3 < *(float *)((int)local_24 + iVar17)) ||
                     (fVar4 = (float)(int)(short)*piVar16,
                     *(float *)((int)local_18 + iVar17) < fVar4)) goto LAB_1001edfa;
                  fVar5 = *(float *)((int)local_18 + iVar17) - *(float *)((int)local_24 + iVar17);
                  if (fVar4 <= *(float *)((int)local_24 + iVar17)) {
                    local_4c = 0.0;
                  }
                  else {
                    local_4c = (fVar4 - *(float *)((int)local_24 + iVar17)) / fVar5;
                  }
                  if (*(float *)((int)local_18 + iVar17) <= fVar3) {
LAB_1001ecfd:
                    fVar5 = 1.0;
                  }
                  else {
                    fVar5 = (fVar3 - *(float *)((int)local_24 + iVar17)) / fVar5;
                  }
                }
                if (local_44 < local_4c) {
                  local_44 = local_4c;
                }
                if (fVar5 < local_48) {
                  local_48 = fVar5;
                }
                if (local_48 < local_44) goto LAB_1001edfa;
                piVar16 = (int *)((int)piVar16 + 2);
                iVar17 = iVar17 + 4;
                iVar15 = iVar15 + 1;
              } while (iVar15 < 3);
              uVar14 = FUN_1001e050(local_24,local_18,iVar10,piVar9,param_4,fVar2);
              if ((char)uVar14 != '\0') {
                pfVar18 = (float *)(param_4 + 0x14);
                FUN_1001c9a0(pfVar18,pfVar1,pfVar19,pfVar18);
                FUN_1001c9a0((float *)(param_4 + 0x20),(float *)&DAT_100db0d0,pfVar19,
                             (float *)(param_4 + 0x20));
                *param_2 = *pfVar18;
                param_2[1] = *(float *)(param_4 + 0x18);
                local_28 = *(float *)(param_4 + 0x1c);
                param_2[2] = local_28;
                local_30 = *param_2 - *pfVar11;
                local_2c = param_2[1] - pfVar11[1];
                local_28 = local_28 - pfVar11[2];
              }
            }
          }
        }
LAB_1001edfa:
        param_1 = (float *)*param_1;
      } while (param_1 != DAT_100db0a4);
    }
    param_1 = (float *)*DAT_100d6094;
    if (param_1 != DAT_100d6094) {
      do {
        iVar10 = *(int *)param_1[2];
        if (iVar10 != param_3) {
          pfVar1 = (float *)((int *)param_1[2] + 0x2d2);
          pfVar19 = local_18;
          param_2 = (float *)0x6;
          do {
            lVar20 = __ftol();
            *(short *)pfVar19 = (short)lVar20;
            pfVar19 = (float *)((int)pfVar19 + 2);
            param_2 = (float *)((int)param_2 + -1);
          } while (param_2 != (float *)0x0);
          iVar15 = iVar10 * 0x14;
          fVar2 = *(float *)(&DAT_100d60b0 + iVar15);
          fVar3 = SQRT(local_30 * local_30 + local_2c * local_2c + local_28 * local_28);
          fVar4 = ((local_30 * *(float *)(&DAT_100d60a4 + iVar15) +
                   local_2c * *(float *)(&DAT_100d60a8 + iVar15) +
                   local_28 * *(float *)(&DAT_100d60ac + iVar15)) -
                  (local_28 * pfVar11[2] + local_30 * *pfVar11 + local_2c * pfVar11[1])) / fVar3;
          if ((fVar4 <= fVar3 + fVar2) && (-fVar2 <= fVar4)) {
            if (0.0 <= fVar4) {
              if (fVar4 <= fVar3) {
                fVar6 = *(float *)(&DAT_100d60a4 + iVar15) - ((fVar4 * local_30) / fVar3 + *pfVar11)
                ;
                fVar5 = *(float *)(&DAT_100d60a8 + iVar15) -
                        ((fVar4 * local_2c) / fVar3 + pfVar11[1]);
                fVar3 = *(float *)(&DAT_100d60ac + iVar15) -
                        ((fVar4 * local_28) / fVar3 + pfVar11[2]);
              }
              else {
                fVar6 = *(float *)(&DAT_100d60a4 + iVar15) - *pfVar12;
                fVar5 = *(float *)(&DAT_100d60a8 + iVar15) - pfVar12[1];
                fVar3 = *(float *)(&DAT_100d60ac + iVar15) - pfVar12[2];
              }
            }
            else {
              fVar6 = *(float *)(&DAT_100d60a4 + iVar15) - *pfVar11;
              fVar5 = *(float *)(&DAT_100d60a8 + iVar15) - pfVar11[1];
              fVar3 = *(float *)(&DAT_100d60ac + iVar15) - pfVar11[2];
            }
            if (SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3) <= fVar2) {
              FUN_1001cb20(pfVar11,pfVar1,(float *)&DAT_100db0d0,local_18 + 3);
              FUN_1001cb20(pfVar12,pfVar1,(float *)&DAT_100db0d0,local_24);
              uVar13 = FUN_1001f0b0(local_18 + 3,local_24,iVar10,param_4,(short *)local_18);
              if ((char)uVar13 != '\0') {
                pfVar19 = (float *)(param_4 + 0x14);
                FUN_1001c9a0(pfVar19,pfVar1,(float *)&DAT_100db0d0,pfVar19);
                FUN_1001c9a0((float *)(param_4 + 0x20),(float *)&DAT_100db0d0,(float *)&DAT_100db0d0
                             ,(float *)(param_4 + 0x20));
                *pfVar12 = *pfVar19;
                pfVar12[1] = *(float *)(param_4 + 0x18);
                local_28 = *(float *)(param_4 + 0x1c);
                pfVar12[2] = local_28;
                local_30 = *pfVar12 - *pfVar11;
                local_2c = pfVar12[1] - pfVar11[1];
                local_28 = local_28 - pfVar11[2];
              }
            }
          }
        }
        param_1 = (float *)*param_1;
      } while (param_1 != DAT_100d6094);
    }
  }
  return;
}

/* 1001f0b0  FUN_1001f0b0  (620 bytes)
 * undefined2 FUN_1001f0b0(float * param_1, float * param_2, undefined4 param_3, int param_4, short * param_5)
 * called by: FUN_1001e930
 */
undefined2 __cdecl
FUN_1001f0b0(float *param_1,float *param_2,undefined4 param_3,int param_4,short *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  float *local_c;
  float local_8;
  int local_4;
  
  pfVar4 = param_1;
  iVar8 = 0;
  local_c = (float *)0x0;
  local_8 = 1.0;
  local_4 = 0;
  iVar7 = (int)param_2 - (int)param_1;
  pfVar6 = param_1;
  psVar9 = param_5;
  do {
    iVar5 = (int)psVar9[3];
    if (*(float *)(iVar7 + (int)pfVar6) <= *pfVar6) {
      fVar2 = (float)iVar5;
      fVar1 = *(float *)(iVar7 + (int)pfVar6);
      if (fVar1 >= fVar2 && (fVar1 == fVar2) == 0) {
        return (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
               (ushort)(fVar1 == fVar2) << 0xe;
      }
      fVar3 = (float)(int)*psVar9;
      fVar1 = *pfVar6;
      if (fVar3 >= fVar1 && (fVar3 == fVar1) == 0) {
        return (ushort)(fVar3 < fVar1) << 8 | (ushort)(NAN(fVar3) || NAN(fVar1)) << 10 |
               (ushort)(fVar3 == fVar1) << 0xe;
      }
      fVar1 = *(float *)(iVar7 + (int)pfVar6) - *pfVar6;
      if (*pfVar6 <= fVar2) {
        param_1 = (float *)0x0;
      }
      else {
        param_1 = (float *)((fVar2 - *pfVar6) / fVar1);
      }
      if (fVar3 <= *(float *)(iVar7 + (int)pfVar6)) goto LAB_1001f1f0;
      fVar1 = (fVar3 - *pfVar6) / fVar1;
    }
    else {
      fVar2 = (float)iVar5;
      fVar1 = *pfVar6;
      if (fVar1 >= fVar2 && (fVar1 == fVar2) == 0) {
        return (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
               (ushort)(fVar1 == fVar2) << 0xe;
      }
      fVar3 = (float)(int)*psVar9;
      fVar1 = *(float *)(iVar7 + (int)pfVar6);
      if (fVar1 < fVar3) {
        return (ushort)(fVar1 < fVar3) << 8 | (ushort)(NAN(fVar1) || NAN(fVar3)) << 10 |
               (ushort)(fVar1 == fVar3) << 0xe;
      }
      fVar1 = *(float *)(iVar7 + (int)pfVar6) - *pfVar6;
      if (fVar3 <= *pfVar6) {
        param_1 = (float *)0x0;
      }
      else {
        param_1 = (float *)((fVar3 - *pfVar6) / fVar1);
      }
      if (*(float *)(iVar7 + (int)pfVar6) <= fVar2) {
LAB_1001f1f0:
        fVar1 = 1.0;
      }
      else {
        fVar1 = (fVar2 - *pfVar6) / fVar1;
      }
    }
    param_5 = (short *)(float)iVar5;
    if ((float)local_c < (float)param_1) {
      local_c = param_1;
      if (*(float *)(iVar7 + (int)pfVar6) <= *pfVar6) {
        iVar5 = 3;
      }
      else {
        iVar5 = 0;
      }
      local_4 = iVar5 + 1 + iVar8;
    }
    if (fVar1 < local_8) {
      local_8 = fVar1;
    }
    if (local_8 < (float)local_c) {
      return (ushort)(local_8 < (float)local_c) << 8 |
             (ushort)(NAN(local_8) || NAN((float)local_c)) << 10 |
             (ushort)(local_8 == (float)local_c) << 0xe;
    }
    psVar9 = psVar9 + 1;
    pfVar6 = pfVar6 + 1;
    iVar8 = iVar8 + 1;
    if (2 < iVar8) {
      if (&stack0x00000000 != (undefined1 *)0xffffffec) {
        param_5 = (short *)local_c;
      }
      if (local_4 == 0) {
        local_4 = -1;
      }
      *(short **)(param_4 + 0x10) = param_5;
      *(undefined4 *)(param_4 + 0x30) = param_3;
      fVar1 = (*param_2 - *pfVar4) * (float)param_5 + *pfVar4;
      *param_2 = fVar1;
      *(float *)(param_4 + 0x14) = fVar1;
      fVar1 = (param_2[1] - pfVar4[1]) * (float)param_5 + pfVar4[1];
      param_2[1] = fVar1;
      *(float *)(param_4 + 0x18) = fVar1;
      fVar1 = (param_2[2] - pfVar4[2]) * (float)param_5 + pfVar4[2];
      param_2[2] = fVar1;
      *(float *)(param_4 + 0x1c) = fVar1;
      *(undefined4 *)(param_4 + 0x20) = 0;
      *(undefined4 *)(param_4 + 0x24) = 0;
      *(undefined4 *)(param_4 + 0x28) = 0;
      if (local_4 < 4) {
        if (local_4 < 1) {
          *(undefined4 *)(param_4 + 0x28) = 0x3f800000;
        }
        else {
          *(undefined4 *)(param_4 + 0x1c + local_4 * 4) = 0xbf800000;
        }
      }
      else {
        *(undefined4 *)(param_4 + 0x10 + local_4 * 4) = 0x3f800000;
      }
      *(float *)(param_4 + 0x2c) =
           *(float *)(param_4 + 0x14) * *(float *)(param_4 + 0x20) +
           *(float *)(param_4 + 0x24) * *(float *)(param_4 + 0x18) +
           *(float *)(param_4 + 0x1c) * *(float *)(param_4 + 0x28);
      return (short)CONCAT31((int3)((uint)param_4 >> 8),1);
    }
  } while( true );
}

/* 1001f330  FUN_1001f330  (10 bytes)
 * undefined FUN_1001f330(void)
 */
void FUN_1001f330(void)

{
  FUN_1001f370((undefined4 *)&DAT_100db0e0);
  return;
}

/* 1001f340  FUN_1001f340  (12 bytes)
 * undefined FUN_1001f340(void)
 */
void FUN_1001f340(void)

{
  FUN_1006af63(0x1001f350);
  return;
}

/* 1001f370  FUN_1001f370  (18 bytes)
 * undefined4 * FUN_1001f370(undefined4 * param_1)
 * called by: FUN_1001f330
 */
undefined4 * __fastcall FUN_1001f370(undefined4 *param_1)

{
  FUN_100300b0(param_1);
  *param_1 = &PTR_FUN_1007cd04;
  return param_1;
}

/* 1001f390  FUN_1001f390  (30 bytes)
 * undefined4 * FUN_1001f390(byte.conflict param_1)
 */
undefined4 * __thiscall FUN_1001f390(void *this,byte_conflict param_1)

{
  thunk_FUN_10030130(this);
  if ((param_1 & 1) != 0) {
    FUN_1006ad4c(this);
  }
  return this;
}

/* 1001f3e0  FUN_1001f3e0  (10 bytes)
 * undefined FUN_1001f3e0(void)
 * called by: HUD_GetStudioModelInterface
 */
void FUN_1001f3e0(void)

{
  FUN_10030030(0x100db0e0);
  return;
}

/* 1001f4a0  FUN_1001f4a0  (49 bytes)
 * undefined FUN_1001f4a0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
void __thiscall FUN_1001f4a0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  *(uint *)((int)this + 0x14) = uVar1 << 2;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return;
}

/* 1001f780  FUN_1001f780  (105 bytes)
 * undefined4 FUN_1001f780(int param_1)
 */
undefined4 __fastcall FUN_1001f780(int param_1)

{
  int iVar1;
  int *piVar2;
  
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = FUN_10020670(&DAT_100cf920,s_dmg_bio_10093770);
  *(int *)(param_1 + 0x18) = iVar1 + 1;
  iVar1 = FUN_10020670(&DAT_100cf920,s_cross_10093768);
  *(int *)(param_1 + 0x1c) = iVar1;
  piVar2 = (int *)(*(int *)(param_1 + 0x18) * 0x10 + DAT_100cf990);
  DAT_100df190 = piVar2[1] - *piVar2;
  iVar1 = *(int *)(param_1 + 0x18) * 0x10 + DAT_100cf990;
  DAT_100df194 = *(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8);
  return 1;
}

/* 1001f7f0  FUN_1001f7f0  (61 bytes)
 * undefined4 FUN_1001f7f0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_1001f7f0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  if (uVar1 != *(uint *)((int)this + 0x14)) {
    *(undefined4 *)((int)this + 0x30) = 0x42c80000;
    *(uint *)((int)this + 0x14) = uVar1;
  }
  return 1;
}

/* 1001f830  FUN_1001f830  (151 bytes)
 * undefined4 FUN_1001f830(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_1001f830(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  float local_c [3];
  
  FUN_100299b0(param_3,param_2);
  uVar1 = FUN_10029a10();
  uVar2 = FUN_10029a10();
  uVar3 = FUN_10029aa0();
  pfVar4 = local_c;
  iVar5 = 3;
  do {
    fVar6 = FUN_10029b60();
    *pfVar4 = (float)fVar6;
    pfVar4 = pfVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_1001fb90(this,DAT_100cf944,uVar3);
  if ((0 < (int)uVar2) || (0 < (int)uVar1)) {
    FUN_1001f8e0(this,local_c[0],local_c[1],local_c[2]);
  }
  return 1;
}

/* 1001f8e0  FUN_1001f8e0  (653 bytes)
 * undefined FUN_1001f8e0(float param_1, float param_2, float param_3)
 * called by: FUN_1001f830
 */
void __thiscall FUN_1001f8e0(void *this,float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  float local_c [3];
  
  if (((param_1 == 0.0) && (param_2 == 0.0)) && (param_3 == 0.0)) {
    *(undefined4 *)((int)this + 0x28) = 0;
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    return;
  }
  local_48 = DAT_100cf958;
  fVar1 = param_1 - DAT_100cf958;
  local_44 = DAT_100cf95c;
  local_40 = DAT_100cf960;
  param_2 = param_2 - DAT_100cf95c;
  local_3c = DAT_100cf964;
  local_38 = DAT_100cf968;
  local_34 = DAT_100cf96c;
  param_3 = param_3 - DAT_100cf960;
  fVar3 = SQRT(fVar1 * fVar1 + param_2 * param_2 + param_3 * param_3);
  if (fVar3 == 0.0) {
    puVar4 = (undefined4 *)FUN_1001fb70(local_24,0,0,1);
  }
  else {
    fVar2 = 1.0 / fVar3;
    puVar4 = (undefined4 *)FUN_10009190(local_18,fVar2 * fVar1,param_2 * fVar2,param_3 * fVar2);
  }
  FUN_10002610(&param_1,puVar4);
  (*gEngfuncs.pfnAngleVectors)(&local_3c,&local_30,&local_48,local_c);
  fVar2 = param_1 * local_48 + local_40 * param_3 + local_44 * param_2;
  fVar1 = param_1 * local_30 + fStack_28 * param_3 + fStack_2c * param_2;
  if (50.0 < fVar3) {
    if (fVar1 <= 0.0) {
      fVar1 = -fVar1;
      if (0.3 < fVar1) {
        if (fVar1 < *(float *)((int)this + 0x24)) {
          fVar1 = *(float *)((int)this + 0x24);
        }
        *(float *)((int)this + 0x24) = fVar1;
      }
    }
    else if (0.3 < fVar1) {
      if (*(float *)((int)this + 0x20) <= fVar1) {
        *(float *)((int)this + 0x20) = fVar1;
      }
      else {
        *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 0x20);
      }
    }
    if (fVar2 <= 0.0) {
      fVar2 = -fVar2;
      if (0.3 < fVar2) {
        if (fVar2 < *(float *)((int)this + 0x28)) {
          fVar2 = *(float *)((int)this + 0x28);
        }
        *(float *)((int)this + 0x28) = fVar2;
        return;
      }
    }
    else if (0.3 < fVar2) {
      if (*(float *)((int)this + 0x2c) <= fVar2) {
        *(float *)((int)this + 0x2c) = fVar2;
        return;
      }
      *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((int)this + 0x2c);
      return;
    }
    return;
  }
  *(undefined4 *)((int)this + 0x28) = 0x3f800000;
  *(undefined4 *)((int)this + 0x2c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x24) = 0x3f800000;
  *(undefined4 *)((int)this + 0x20) = 0x3f800000;
  return;
}

/* 1001fb70  FUN_1001fb70  (25 bytes)
 * undefined FUN_1001fb70(int param_1, int param_2, int param_3)
 * called by: FUN_1001f8e0, FUN_1003bb00, FUN_1003f090, FUN_100481b0, FUN_10050080, FUN_10051270, FUN_10052720, FUN_10052c80, FUN_10057790
 */
void __thiscall FUN_1001fb70(void *this,int param_1,int param_2,int param_3)

{
  *(float *)this = (float)param_1;
  *(float *)((int)this + 4) = (float)param_2;
  *(float *)((int)this + 8) = (float)param_3;
  return;
}

/* 1001fb90  FUN_1001fb90  (214 bytes)
 * undefined FUN_1001fb90(float param_1, uint param_2)
 * called by: FUN_1001f830
 */
void __thiscall FUN_1001fb90(void *this,float param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  
  uVar1 = *(uint *)((int)this + 0xfc);
  iVar6 = 0;
  puVar5 = &DAT_10093728;
  pfVar8 = (float *)((int)this + 0x40);
  do {
    if (((*(uint *)((int)this + 0xfc) & *puVar5) != 0) &&
       (pfVar8[-1] = param_1 + 2.0, *pfVar8 == 0.0)) {
      *pfVar8 = param_1;
    }
    if ((*puVar5 & ~uVar1 & param_2) != 0) {
      pfVar8[1] = (float)((int)(DAT_100df194 + (DAT_100df194 >> 0x1f & 7U)) >> 3);
      iVar3 = DAT_100df190;
      iVar2 = DAT_100d590c;
      pfVar8[-1] = param_1 + 2.0;
      iVar7 = 0;
      pfVar8[2] = (float)(iVar2 + iVar3 * -2);
      piVar4 = (int *)((int)this + 0x48);
      do {
        if ((iVar7 != iVar6) && (*piVar4 != 0)) {
          *piVar4 = *piVar4 - DAT_100df190;
        }
        iVar7 = iVar7 + 1;
        piVar4 = piVar4 + 4;
      } while (iVar7 < 0xc);
    }
    puVar5 = puVar5 + 1;
    iVar6 = iVar6 + 1;
    pfVar8 = pfVar8 + 4;
  } while ((int)puVar5 < 0x10093758);
  *(uint *)((int)this + 0xfc) = *(uint *)((int)this + 0xfc) | param_2;
  return;
}

/* 1001fc80  FUN_1001fc80  (10 bytes)
 * undefined FUN_1001fc80(void)
 */
void FUN_1001fc80(void)

{
  FUN_1001fcc0((undefined4 *)&DAT_100df198);
  return;
}

/* 1001fc90  FUN_1001fc90  (12 bytes)
 * undefined FUN_1001fc90(void)
 */
void FUN_1001fc90(void)

{
  FUN_1006af63(0x1001fca0);
  return;
}

/* 1001fcb0  FUN_1001fcb0  (7 bytes)
 * undefined FUN_1001fcb0(undefined4 * param_1)
 * called by: FUN_1001fd90
 */
void __fastcall FUN_1001fcb0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_1007cd88;
  return;
}

/* 1001fcc0  FUN_1001fcc0  (9 bytes)
 * undefined FUN_1001fcc0(undefined4 * param_1)
 * called by: FUN_1001fc80
 */
void __fastcall FUN_1001fcc0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1007cd9c;
  return;
}

/* 1001fd90  FUN_1001fd90  (30 bytes)
 * undefined4 * FUN_1001fd90(byte.conflict param_1)
 */
undefined4 * __thiscall FUN_1001fd90(void *this,byte_conflict param_1)

{
  FUN_1001fcb0(this);
  if ((param_1 & 1) != 0) {
    FUN_1006ad4c(this);
  }
  return this;
}

/* 1001fe90  FUN_1001fe90  (16 bytes)
 * undefined FUN_1001fe90(void)
 */
void FUN_1001fe90(void)

{
  if (DAT_100d5cb0 != (void *)0x0) {
    FUN_100637a0(DAT_100d5cb0);
    return;
  }
  return;
}

/* 10020170  FUN_10020170  (1048 bytes)
 * undefined FUN_10020170(int * param_1)
 * called by: HUD_Init
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10020170(int *param_1)

{
  cvar_s *pcVar1;
  LPVOID pvVar2;
  int *piVar3;
  char acStack_10 [16];
  
  (*gEngfuncs.pfnHookUserMsg)(&DAT_10093960,(pfnUserMsgHook)&LAB_1001fdb0);
  (*gEngfuncs.pfnHookUserMsg)(s_ResetHUD_10093954,(pfnUserMsgHook)&LAB_1001fdd0);
  (*gEngfuncs.pfnHookUserMsg)(s_GameMode_10093948,(pfnUserMsgHook)&LAB_1001fe60);
  (*gEngfuncs.pfnHookUserMsg)(s_InitHUD_10093940,(pfnUserMsgHook)&LAB_1001fdf0);
  (*gEngfuncs.pfnHookUserMsg)(s_SetFOV_10093938,(pfnUserMsgHook)&LAB_1001fe20);
  (*gEngfuncs.pfnHookUserMsg)(s_Concuss_10093930,(pfnUserMsgHook)&LAB_1001fe40);
  (*gEngfuncs.pfnAddCommand)(s__commandmenu_10093920,(function *)&LAB_1001fe80);
  (*gEngfuncs.pfnAddCommand)(s__commandmenu_10093910,(function *)&LAB_1001fea0);
  (*gEngfuncs.pfnAddCommand)(s_ForceCloseCommandMenu_100938f8,(function *)&LAB_1001feb0);
  (*gEngfuncs.pfnAddCommand)(s_special_100938f0,FUN_1001fe90);
  (*gEngfuncs.pfnAddCommand)(s_togglebrowser_100938e0,(function *)&LAB_1001fec0);
  (*gEngfuncs.pfnHookUserMsg)(s_ValClass_100938d4,(pfnUserMsgHook)&LAB_1001fed0);
  (*gEngfuncs.pfnHookUserMsg)(s_TeamNames_100938c8,(pfnUserMsgHook)&LAB_1001ff00);
  (*gEngfuncs.pfnHookUserMsg)(s_Feign_100938c0,(pfnUserMsgHook)&LAB_1001ff30);
  (*gEngfuncs.pfnHookUserMsg)(s_Detpack_100938b8,(pfnUserMsgHook)&LAB_1001ff60);
  (*gEngfuncs.pfnHookUserMsg)(&DAT_100938b0,(pfnUserMsgHook)&LAB_1001ffc0);
  (*gEngfuncs.pfnHookUserMsg)(s_BuildSt_100938a8,(pfnUserMsgHook)&LAB_1001fff0);
  (*gEngfuncs.pfnHookUserMsg)(s_RandomPC_1009389c,(pfnUserMsgHook)&LAB_10020020);
  (*gEngfuncs.pfnHookUserMsg)(s_ServerName_10093890,(pfnUserMsgHook)&LAB_10020050);
  (*gEngfuncs.pfnHookUserMsg)(s_ScoreInfo_10093884,(pfnUserMsgHook)&LAB_10020080);
  (*gEngfuncs.pfnHookUserMsg)(s_TeamScore_10093878,(pfnUserMsgHook)&LAB_100200b0);
  (*gEngfuncs.pfnHookUserMsg)(s_TeamInfo_1009386c,(pfnUserMsgHook)&LAB_100200e0);
  (*gEngfuncs.pfnHookUserMsg)(s_Spectator_10093860,(pfnUserMsgHook)&LAB_10020110);
  (*gEngfuncs.pfnHookUserMsg)(s_AllowSpec_10093854,(pfnUserMsgHook)&LAB_10020140);
  (*gEngfuncs.pfnHookUserMsg)(s_VGUIMenu_10093848,(pfnUserMsgHook)&LAB_1001ff90);
  (*gEngfuncs.pfnRegisterVariable)(s_hud_classautokill_10093834,&DAT_10092c08,3);
  (*gEngfuncs.pfnRegisterVariable)(s_hud_takesshots_10093824,&DAT_10092bf4,1);
  DAT_100987ac = (*gEngfuncs.pfnRegisterVariable)(s_r_paintball_10093818,&DAT_10092bf4,1);
  param_1[2] = 0;
  param_1[0x16] = 0;
  (*gEngfuncs.pfnRegisterVariable)(s_zoom_sensitivity_ratio_100937fc,&DAT_10093814,0);
  _DAT_100df19c = (*gEngfuncs.pfnRegisterVariable)(s_gl_fog_100937f4,&DAT_10092bf4,1);
  (*gEngfuncs.pfnRegisterVariable)(s_gl_fog_start_100937e4,&DAT_10092bf4,0);
  (*gEngfuncs.pfnRegisterVariable)(s_gl_fog_end_100937d0,&DAT_100937dc,0);
  (*gEngfuncs.pfnRegisterVariable)(s_gl_fog_red_100937c0,&DAT_100937cc,0);
  (*gEngfuncs.pfnRegisterVariable)(s_gl_fog_green_100937b0,&DAT_100937cc,0);
  (*gEngfuncs.pfnRegisterVariable)(s_gl_fog_blue_100937a4,&DAT_100937cc,0);
  FUN_1006ac7a(acStack_10,&DAT_100937a0);
  pcVar1 = (*gEngfuncs.pfnRegisterVariable)(s_default_fov_10093794,acStack_10,0);
  param_1[0x1e] = (int)pcVar1;
  pcVar1->value = 80.0;
  pcVar1 = (*gEngfuncs.pfnRegisterVariable)(s_hud_capturemouse_10093780,&DAT_10092c08,1);
  param_1[0x19] = (int)pcVar1;
  DAT_100df1a0 = (*gEngfuncs.pfnGetCvarPointer)(s_cl_lw_10093778);
  pvVar2 = (LPVOID)*param_1;
  param_1[3] = 0;
  if (pvVar2 != (LPVOID)0x0) {
    do {
      *param_1 = *(int *)((int)pvVar2 + 4);
      FUN_1006c158(pvVar2);
      pvVar2 = (LPVOID)*param_1;
    } while (pvVar2 != (LPVOID)0x0);
    *param_1 = 0;
  }
  param_1[9] = 0x3f800000;
  (**(code **)(param_1[0x1f] + 4))();
  (**(code **)(param_1[0x29] + 4))();
  (**(code **)(param_1[0x69] + 4))();
  (**(code **)(param_1[0x7b] + 4))();
  (**(code **)(param_1[0x6f] + 4))();
  (**(code **)(param_1[0x82] + 4))();
  (**(code **)(param_1[0x92] + 4))();
  (**(code **)(param_1[0xcc] + 4))();
  (**(code **)(param_1[0x15c] + 4))();
  (**(code **)(param_1[0x170] + 4))();
  (**(code **)(param_1[0x17b] + 4))();
  (**(code **)(param_1[0x180] + 4))();
  piVar3 = (int *)FUN_10017570();
  (**(code **)(*piVar3 + 0x1c))(&DAT_100df198,&DAT_100d5cb0);
  (**(code **)(param_1[0x1b6] + 4))();
  (**(code **)(param_1[0x4e0] + 4))();
  (**(code **)(param_1[0x12ab] + 4))();
  (**(code **)(param_1[0x162] + 4))();
  (**(code **)(param_1[0x167] + 4))();
  FUN_10022b80();
  FUN_100219a0(param_1);
  return;
}

/* 10020590  FUN_10020590  (220 bytes)
 * undefined FUN_10020590(int * param_1)
 */
void __fastcall FUN_10020590(int *param_1)

{
  LPVOID pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10077a8b;
  local_c = ExceptionList;
  local_4 = 0x10;
  ExceptionList = &local_c;
  FUN_1006ad4c((LPVOID)param_1[0x1b]);
  FUN_1006ad4c((LPVOID)param_1[0x1c]);
  FUN_1006ad4c((LPVOID)param_1[0x1d]);
  pvVar1 = (LPVOID)*param_1;
  if (pvVar1 != (LPVOID)0x0) {
    do {
      *param_1 = *(int *)((int)pvVar1 + 4);
      FUN_1006c158(pvVar1);
      pvVar1 = (LPVOID)*param_1;
    } while (pvVar1 != (LPVOID)0x0);
    *param_1 = 0;
  }
  FUN_10022b50();
  param_1[0x12ab] = (int)&PTR_LAB_1007c608;
  param_1[0x4e0] = (int)&PTR_LAB_1007c608;
  param_1[0x1b6] = (int)&PTR_LAB_1007c608;
  param_1[0x180] = (int)&PTR_LAB_1007c608;
  param_1[0x17b] = (int)&PTR_LAB_1007c608;
  param_1[0x170] = (int)&PTR_LAB_1007c608;
  param_1[0x167] = (int)&PTR_LAB_1007c608;
  param_1[0x162] = (int)&PTR_LAB_1007c608;
  param_1[0x15c] = (int)&PTR_LAB_1007c608;
  param_1[0xcc] = (int)&PTR_LAB_1007c608;
  param_1[0x92] = (int)&PTR_LAB_1007c608;
  param_1[0x82] = (int)&PTR_LAB_1007c608;
  param_1[0x7b] = (int)&PTR_LAB_1007c608;
  param_1[0x6f] = (int)&PTR_LAB_1007c608;
  param_1[0x69] = (int)&PTR_LAB_1007c608;
  param_1[0x29] = (int)&PTR_LAB_1007c608;
  param_1[0x1f] = (int)&PTR_LAB_1007c608;
  ExceptionList = local_c;
  return;
}

/* 10020670  FUN_10020670  (74 bytes)
 * int FUN_10020670(char * param_1)
 * called by: FUN_10019f40, FUN_1001a650, FUN_1001a7b0, FUN_1001a8c0, FUN_1001b000, FUN_1001c780, FUN_1001f780, FUN_100206c0, FUN_10028940, FUN_1002f210
 */
int __thiscall FUN_10020670(void *this,char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x10)) {
    iVar3 = 0;
    do {
      iVar1 = _strncmp(param_1,(char *)(iVar3 + *(int *)((int)this + 0x74)),0x18);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x18;
    } while (iVar2 < *(int *)((int)this + 0x10));
  }
  return -1;
}

/* 100206c0  FUN_100206c0  (767 bytes)
 * undefined FUN_100206c0(void * param_1)
 * called by: HUD_Reset, HUD_VidInit
 */
void __fastcall FUN_100206c0(void *param_1)

{
  client_sprite_t *pcVar1;
  void *pvVar2;
  HSPRITE HVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  char *_Source;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  char acStack_100 [256];
  
  ((SCREENINFO *)((int)param_1 + 0x5fe4))->iSize = 0x214;
  (*gEngfuncs.pfnGetScreenInfo)((SCREENINFO *)((int)param_1 + 0x5fe4));
  iVar8 = 0;
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  if (DAT_100d5908 < 0x280) {
    *(undefined4 *)((int)param_1 + 0x60) = 0x140;
  }
  else {
    *(undefined4 *)((int)param_1 + 0x60) = 0x280;
  }
  if (*(int *)((int)param_1 + 0xc) == 0) {
    pcVar1 = (*gEngfuncs.pfnSPR_GetList)(s_sprites_hud_txt_10093974,(int *)((int)param_1 + 0x14));
    *(client_sprite_t **)((int)param_1 + 0xc) = pcVar1;
    if (pcVar1 != (client_sprite_t *)0x0) {
      iVar6 = *(int *)((int)param_1 + 0x14);
      *(undefined4 *)((int)param_1 + 0x10) = 0;
      if (0 < iVar6) {
        piVar5 = &pcVar1->iRes;
        do {
          if (*piVar5 == *(int *)((int)param_1 + 0x60)) {
            *(int *)((int)param_1 + 0x10) = *(int *)((int)param_1 + 0x10) + 1;
          }
          piVar5 = piVar5 + 0x26;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      pvVar2 = operator_new(*(int *)((int)param_1 + 0x10) << 2);
      *(void **)((int)param_1 + 0x6c) = pvVar2;
      pvVar2 = operator_new(*(int *)((int)param_1 + 0x10) << 4);
      *(void **)((int)param_1 + 0x70) = pvVar2;
      pvVar2 = operator_new(*(int *)((int)param_1 + 0x10) * 0x18);
      _Source = *(char **)((int)param_1 + 0xc);
      *(void **)((int)param_1 + 0x74) = pvVar2;
      iStack_104 = 0;
      if (0 < *(int *)((int)param_1 + 0x14)) {
        iStack_10c = 0;
        iStack_108 = 0;
        pcVar9 = _Source + 0x40;
        do {
          if (*(int *)(pcVar9 + 0x44) == *(int *)((int)param_1 + 0x60)) {
            FUN_1006ac7a(acStack_100,(byte_conflict *)s_sprites__s_spr_10093040);
            HVar3 = (*gEngfuncs.pfnSPR_Load)(acStack_100);
            *(HSPRITE *)(*(int *)((int)param_1 + 0x6c) + iVar8) = HVar3;
            puVar4 = (undefined4 *)(iStack_108 + *(int *)((int)param_1 + 0x70));
            *puVar4 = *(undefined4 *)(pcVar9 + 0x48);
            puVar4[1] = *(undefined4 *)(pcVar9 + 0x4c);
            puVar4[2] = *(undefined4 *)(pcVar9 + 0x50);
            puVar4[3] = *(undefined4 *)(pcVar9 + 0x54);
            _strncpy((char *)(iStack_10c + *(int *)((int)param_1 + 0x74)),_Source,0x18);
            iVar8 = iVar8 + 4;
            iStack_108 = iStack_108 + 0x10;
            iStack_10c = iStack_10c + 0x18;
          }
          _Source = _Source + 0x98;
          pcVar9 = pcVar9 + 0x98;
          iStack_104 = iStack_104 + 1;
        } while (iStack_104 < *(int *)((int)param_1 + 0x14));
      }
    }
  }
  else if (0 < *(int *)((int)param_1 + 0x14)) {
    iVar7 = 0;
    iVar6 = *(int *)((int)param_1 + 0xc) + 0x40;
    do {
      if (*(int *)(iVar6 + 0x44) == *(int *)((int)param_1 + 0x60)) {
        FUN_1006ac7a(acStack_100,(byte_conflict *)s_sprites__s_spr_10093040);
        HVar3 = (*gEngfuncs.pfnSPR_Load)(acStack_100);
        *(HSPRITE *)(*(int *)((int)param_1 + 0x6c) + iVar7) = HVar3;
        iVar7 = iVar7 + 4;
      }
      iVar6 = iVar6 + 0x98;
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)((int)param_1 + 0x14));
  }
  iVar8 = FUN_10020670(param_1,s_number_0_10093968);
  *(int *)((int)param_1 + 0x6204) = iVar8;
  iVar8 = iVar8 * 0x10 + *(int *)((int)param_1 + 0x70);
  *(int *)((int)param_1 + 0x68) = *(int *)(iVar8 + 0xc) - *(int *)(iVar8 + 8);
  DAT_100963e8 = 0x3f800000;
  (**(code **)(*(int *)((int)param_1 + 0x7c) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0xa4) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x1a4) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x1ec) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x1bc) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x208) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x248) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x330) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x570) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x588) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x59c) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x5c0) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x5ec) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x600) + 8))();
  piVar5 = (int *)FUN_10017570();
  (**(code **)(*piVar5 + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x6d8) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x1380) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x4aac) + 8))();
  return;
}

/* 100209c0  FUN_100209c0  (36 bytes)
 * undefined4 FUN_100209c0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 */
undefined4 __cdecl
FUN_100209c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  FUN_100299b0(param_4,param_3);
  uVar1 = FUN_10029a10();
  *(uint *)(param_1 + 8) = uVar1;
  return 1;
}

/* 100209f0  FUN_100209f0  (79 bytes)
 * float10 FUN_100209f0(void)
 * called by: FUN_10049760
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_100209f0(void)

{
  int iVar1;
  
  iVar1 = (*(gEngfuncs.pDemoAPI)->IsRecording)();
  if (iVar1 != 0) {
    FUN_1001b860();
  }
  iVar1 = (*(gEngfuncs.pDemoAPI)->IsPlayingback)();
  if (iVar1 != 0) {
    DAT_100df1a4 = _DAT_100d6074;
    return (float10)_DAT_100d6074;
  }
  return (float10)DAT_100df1a4;
}

/* 10020a40  FUN_10020a40  (74 bytes)
 * undefined FUN_10020a40(int param_1)
 * called by: FUN_10019de0, FUN_1001a880, FUN_10022c70, FUN_100285a0, FUN_1002ea50, FUN_1002f3c0
 */
void __thiscall FUN_10020a40(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_1 != 0) && (piVar3 = _malloc(8), piVar3 != (int *)0x0)) {
    *piVar3 = 0;
    piVar3[1] = 0;
    *piVar3 = param_1;
    iVar1 = *(int *)this;
    if (iVar1 == 0) {
      *(int **)this = piVar3;
      return;
    }
    for (iVar2 = *(int *)(iVar1 + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      iVar1 = iVar2;
    }
    *(int **)(iVar1 + 4) = piVar3;
  }
  return;
}

/* 10020a90  FUN_10020a90  (4 bytes)
 * float10 FUN_10020a90(int param_1)
 * called by: CAM_Think, FUN_100274d0
 */
float10 __fastcall FUN_10020a90(int param_1)

{
  return (float10)*(float *)(param_1 + 0x18);
}

/* 100219a0  FUN_100219a0  (52 bytes)
 * undefined4 FUN_100219a0(undefined4 * param_1)
 * called by: FUN_10020170
 */
undefined4 __cdecl FUN_100219a0(undefined4 *param_1)

{
  int *piVar1;
  
  for (piVar1 = (int *)*param_1; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 0x14))();
    }
  }
  param_1[6] = 0;
  param_1[7] = 0;
  return 1;
}

/* 100219e0  FUN_100219e0  (47 bytes)
 * undefined FUN_100219e0(undefined4 * param_1)
 */
void __cdecl FUN_100219e0(undefined4 *param_1)

{
  int *piVar1;
  
  for (piVar1 = (int *)*param_1; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 0x18))();
    }
  }
  DAT_10098700 = 0;
  DAT_10098704 = 0;
  return;
}

/* 10021a10  FUN_10021a10  (36 bytes)
 * undefined4 FUN_10021a10(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 */
undefined4 __cdecl
FUN_10021a10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  FUN_100299b0(param_4,param_3);
  uVar1 = FUN_10029a10();
  *(uint *)(param_1 + 0x5c) = uVar1;
  return 1;
}

/* 10021a40  FUN_10021a40  (90 bytes)
 * undefined4 FUN_10021a40(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 */
undefined4 __cdecl
FUN_10021a40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  FUN_100299b0(param_4,param_3);
  uVar1 = FUN_10029a10();
  *(uint *)(param_1 + 0x1c) = uVar1;
  if (uVar1 != 0) {
    FUN_1002f210((void *)(param_1 + 0x600),(byte_conflict *)s_dmg_concuss_10093984,0xff,0xa0,0);
    return 1;
  }
  FUN_1002f330((void *)(param_1 + 0x600),(byte_conflict *)s_dmg_concuss_10093984);
  return 1;
}

/* 10021aa0  FUN_10021aa0  (445 bytes)
 * undefined4 FUN_10021aa0(float param_1, int param_2)
 * called by: HUD_Redraw
 */
undefined4 __thiscall FUN_10021aa0(void *this,float param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  longlong lVar8;
  ulonglong uVar9;
  wrect_t *prc;
  
  uVar4 = *(undefined4 *)((int)this + 0x24);
  *(float *)((int)this + 0x24) = param_1;
  *(undefined4 *)((int)this + 0x28) = uVar4;
  fVar3 = param_1 - *(float *)((int)this + 0x28);
  *(double *)((int)this + 0x30) = (double)fVar3;
  if (fVar3 < 0.0) {
    *(undefined4 *)((int)this + 0x30) = 0;
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  if (DAT_100d5cb0 == (void *)0x0) goto LAB_10021b62;
  if (*(int *)((int)this + 0x6200) != 0) {
    if (param_2 == 0) {
      *(undefined4 *)((int)this + 0x6200) = 0;
      FUN_100636d0(DAT_100d5cb0);
      FUN_10063760((int)DAT_100d5cb0);
      goto LAB_10021b62;
    }
    if (*(int *)((int)this + 0x6200) != 0) goto LAB_10021b62;
  }
  if (param_2 != 0) {
    FUN_100636d0(DAT_100d5cb0);
    FUN_100641e0((int)DAT_100d5cb0);
    FUN_10063710((int)DAT_100d5cb0);
    fVar7 = (float10)(*gEngfuncs.pfnGetCvarFloat)(s_hud_takesshots_10093824);
    if (fVar7 != (float10)0.0) {
      lVar8 = __ftol();
      DAT_100df1a8 = (int)lVar8;
    }
  }
LAB_10021b62:
  if ((DAT_100df1a8 != 0) && ((float)DAT_100df1a8 < param_1)) {
    (*gEngfuncs.pfnClientCmd)(s_snapshot_10093a84);
    DAT_100df1a8 = 0;
  }
  piVar1 = *(int **)this;
  *(int *)((int)this + 0x6200) = param_2;
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    piVar2 = (int *)*piVar1;
    if (param_2 == 0) {
      if (((*(byte *)(piVar2 + 4) & 1) != 0) && ((*(byte *)((int)this + 0x54) & 4) == 0)) {
        (**(code **)(*piVar2 + 0xc))(param_1);
      }
    }
    else if ((*(byte *)(piVar2 + 4) & 2) != 0) {
      (**(code **)(*piVar2 + 0xc))(param_1);
    }
  }
  if (*(int *)((int)this + 8) != 0) {
    if (*(int *)((int)this + 4) == 0) {
      uVar4 = FUN_10058450((byte_conflict *)s_sprites__d_logo_spr_10093a70);
      *(undefined4 *)((int)this + 4) = uVar4;
    }
    (*gEngfuncs.pfnSPR_Set)(*(HSPRITE *)((int)this + 4),0xfa,0xfa,0xfa);
    iVar5 = (*gEngfuncs.pfnSPR_Width)(*(HSPRITE *)((int)this + 4),0);
    iVar5 = DAT_100d5908 - iVar5;
    iVar6 = (*gEngfuncs.pfnSPR_Height)(*(HSPRITE *)((int)this + 4),0);
    prc = (wrect_t *)0x0;
    iVar6 = iVar6 / 2;
    uVar9 = __ftol();
    (*gEngfuncs.pfnSPR_DrawAdditive)
              (*(int *)(&DAT_10093990 +
                       (int)((longlong)
                             ((ulonglong)(uint)((int)uVar9 >> 0x1f) << 0x20 | uVar9 & 0xffffffff) %
                            0x38) * 4) + -1,iVar5,iVar6,prc);
  }
  return 1;
}

/* 10021c60  FUN_10021c60  (60 bytes)
 * undefined FUN_10021c60(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
 * called by: FUN_1004e030
 */
void __cdecl FUN_10021c60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  
  lVar1 = __ftol();
  *param_1 = (int)lVar1;
  lVar1 = __ftol();
  *param_2 = (int)lVar1;
  lVar1 = __ftol();
  *param_3 = (int)lVar1;
  return;
}

/* 10021ca0  FUN_10021ca0  (60 bytes)
 * int FUN_10021ca0(int param_1, int param_2, char * param_3)
 * called by: FUN_1004b0e0, FUN_1004b520
 */
int FUN_10021ca0(int param_1,int param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = *param_3;
  iVar2 = param_1;
  while (((cVar1 != '\0' && (cVar1 != '\n')) &&
         (iVar3 = (int)cVar1, *(short *)(&DAT_100d5918 + iVar3 * 2) + iVar2 <= param_2))) {
    param_3 = param_3 + 1;
    cVar1 = *param_3;
    iVar2 = *(short *)(&DAT_100d5918 + iVar3 * 2) + iVar2;
  }
  return iVar2 - param_1;
}

/* 10021ce0  FUN_10021ce0  (103 bytes)
 * int FUN_10021ce0(int param_1, undefined4 param_2, int param_3, char * param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 * called by: FUN_10011a60, FUN_10036af0, FUN_10038180, FUN_10049fc0, FUN_1004a130, FUN_1004a2e0, FUN_1004a3e0, FUN_1004acc0, FUN_1004af40, FUN_1004b0e0, FUN_1004d700, FUN_1004d7e0, ... (15 total)
 */
int FUN_10021ce0(int param_1,int param_2,int param_3,char *param_4,int param_5,int param_6,
                int param_7)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *param_4;
  if (cVar1 != '\0') {
    while (cVar1 != '\n') {
      iVar2 = *(short *)(&DAT_100d5918 + cVar1 * 2) + param_1;
      if (param_3 < iVar2) {
        return param_1;
      }
      (*gEngfuncs.pfnDrawCharacter)(param_1,param_2,(int)cVar1,param_5,param_6,param_7);
      cVar1 = param_4[1];
      param_4 = param_4 + 1;
      param_1 = iVar2;
      if (cVar1 == '\0') {
        return iVar2;
      }
    }
  }
  return param_1;
}

/* 10021d90  FUN_10021d90  (120 bytes)
 * undefined FUN_10021d90(int * param_1)
 */
void __thiscall FUN_10021d90(void *this,int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((*param_1 == 0) && (param_1[2] == 0)) {
    for (puVar1 = (undefined4 *)param_1[10]; puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      puVar2 = operator_new(0x1c);
      iVar3 = 5;
      puVar2[6] = 0xffffffff;
      puVar4 = puVar1;
      puVar5 = puVar2;
      while( true ) {
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        *puVar5 = *puVar4;
      }
      *puVar2 = *(undefined4 *)((int)this + 0x410);
      *(undefined4 **)((int)this + 0x410) = puVar2;
    }
    (*gEngfuncs.Con_Printf)(s_got_list_10093a94);
    *(undefined4 *)((int)this + 0x424) = 1;
    *(undefined4 *)((int)this + 0x420) = 0;
  }
  return;
}

/* 10021e10  FUN_10021e10  (323 bytes)
 * undefined FUN_10021e10(int * param_1)
 */
void __thiscall FUN_10021e10(void *this,int *param_1)

{
  _func_711 **pp_Var1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int unaff_EBP;
  netadr_s *pnVar11;
  char *pcVar12;
  longlong lVar13;
  void *unaff_retaddr;
  char acStack_c [12];
  
  puVar3 = FUN_100221c0(param_1[1],*(undefined4 **)((int)this + 0x414));
  if (puVar3 != (undefined4 *)0x0) {
    FUN_100221e0((undefined4 *)((int)this + 0x414),puVar3);
    *(int *)((int)this + 0x420) = *(int *)((int)this + 0x420) + -1;
  }
  if ((*param_1 == 0) && (param_1[2] == 4)) {
    pcVar6 = (char *)param_1[10];
    if (pcVar6 != (char *)0x0) {
      uVar7 = 0xffffffff;
      pcVar5 = pcVar6;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      __ftol();
      FUN_1006ac7a(&stack0xffffffe0,&DAT_100937a0);
      puVar4 = operator_new(0x20);
      pnVar11 = (netadr_s *)(param_1 + 3);
      puVar3 = puVar4;
      for (iVar8 = 5; puVar3 = puVar3 + 1, iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar3 = *(undefined4 *)pnVar11;
        pnVar11 = (netadr_s *)&pnVar11->field2_0x4;
      }
      pcVar5 = operator_new(~uVar7 + 100);
      puVar4[6] = pcVar5;
      lVar13 = __ftol();
      puVar4[7] = (int)lVar13;
      uVar9 = 0xffffffff;
      do {
        pcVar12 = pcVar6;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar12 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar12;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar6 = pcVar12 + -uVar9;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar5 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar5 = pcVar5 + 1;
      }
      pp_Var1 = &(gEngfuncs.pNetAPI)->SetValueForKey;
      pcVar6 = (*(gEngfuncs.pNetAPI)->AdrToString)((netadr_s *)(param_1 + 3));
      (**pp_Var1)((char *)puVar4[6],s_address_10093aa8,pcVar6,unaff_EBP);
      (*(gEngfuncs.pNetAPI)->SetValueForKey)((char *)puVar4[6],&DAT_10093aa0,acStack_c,~uVar7 + 100)
      ;
      FUN_10021fe0(unaff_retaddr,(undefined4 *)((int)unaff_retaddr + 0x418),puVar4);
    }
  }
  return;
}

/* 10021f60  FUN_10021f60  (122 bytes)
 * undefined4 FUN_10021f60(int param_1, int param_2)
 * called by: FUN_10021fe0
 */
undefined4 FUN_10021f60(int param_1,int param_2)

{
  byte_conflict *pbVar1;
  byte_conflict *pbVar2;
  uint uVar3;
  void *this;
  
  if (*(int *)(param_1 + 0x1c) < *(int *)(param_2 + 0x1c)) {
    return 1;
  }
  if (((*(int *)(param_1 + 0x1c) == *(int *)(param_2 + 0x1c)) &&
      (*(char **)(param_1 + 0x18) != (char *)0x0)) && (*(int *)(param_2 + 0x18) != 0)) {
    pbVar1 = (byte_conflict *)
             (*(gEngfuncs.pNetAPI)->ValueForKey)(*(char **)(param_1 + 0x18),s_hostname_10093ab0);
    pbVar2 = (byte_conflict *)
             (*(gEngfuncs.pNetAPI)->ValueForKey)(*(char **)(param_2 + 0x18),s_hostname_10093ab0);
    if ((pbVar1 != (byte_conflict *)0x0) && (pbVar2 != (byte_conflict *)0x0)) {
      uVar3 = FUN_10076d90(this,pbVar1,pbVar2);
      if ((int)uVar3 < 0) {
        return 1;
      }
    }
  }
  return 0;
}

/* 10021fe0  FUN_10021fe0  (139 bytes)
 * undefined FUN_10021fe0(undefined4 * param_1, undefined4 * param_2)
 * called by: FUN_10021e10
 */
void __thiscall FUN_10021fe0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    *(int *)((int)this + 0x41c) = *(int *)((int)this + 0x41c) + 1;
    piVar1 = (int *)*param_1;
    if (piVar1 == (int *)0x0) {
      *param_2 = 0;
      *param_1 = param_2;
      return;
    }
    iVar2 = FUN_10021f60((int)param_2,(int)piVar1);
    if (iVar2 != 0) {
      *param_2 = *param_1;
      *param_1 = param_2;
      return;
    }
    iVar2 = *piVar1;
    while (iVar2 != 0) {
      iVar2 = FUN_10021f60((int)param_2,iVar2);
      if (iVar2 != 0) {
        *param_2 = *(undefined4 *)*piVar1;
        *piVar1 = (int)param_2;
        return;
      }
      piVar1 = (int *)*piVar1;
      iVar2 = *piVar1;
    }
    *param_2 = 0;
    *piVar1 = (int)param_2;
  }
  return;
}

/* 10022070  FUN_10022070  (95 bytes)
 * undefined FUN_10022070(double param_1)
 * called by: FUN_10022bb0
 */
void __thiscall FUN_10022070(void *this,double param_1)

{
  int iVar1;
  
  *(double *)((int)this + 0x428) = param_1 + *(double *)((int)this + 0x428);
  if ((*(int *)((int)this + 0x400) != 0) && (*(int *)((int)this + 0x424) != 0)) {
    FUN_100220d0((int)this);
    iVar1 = FUN_10022190((int)this);
    if (iVar1 < 1) {
      *(undefined4 *)((int)this + 0x408) = 0;
      *(undefined4 *)((int)this + 0x40c) = 0;
      *(undefined4 *)((int)this + 0x400) = 0;
      *(undefined4 *)((int)this + 0x404) = 0;
      *(undefined4 *)((int)this + 0x424) = 0;
      *(undefined4 *)((int)this + 0x420) = 0;
    }
  }
  return;
}

/* 100220d0  FUN_100220d0  (178 bytes)
 * undefined FUN_100220d0(int param_1)
 * called by: FUN_10022070
 */
void __fastcall FUN_100220d0(int param_1)

{
  undefined4 *puVar1;
  int context;
  net_api_response_func_t unaff_EDI;
  
  if ((((*(int *)(param_1 + 0x400) != 0) && (*(int *)(param_1 + 0x404) == 0)) &&
      (*(int *)(param_1 + 0x424) != 0)) &&
     ((*(int *)(param_1 + 0x420) < 0x15 && (*(int *)(param_1 + 0x410) != 0)))) {
    do {
      puVar1 = *(undefined4 **)(param_1 + 0x410);
      if (puVar1 == (undefined4 *)0x0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x410) = *puVar1;
      puVar1[6] = DAT_100df2ac;
      context = DAT_100df2ac;
      DAT_100df2ac = DAT_100df2ac + 1;
      (*(gEngfuncs.pNetAPI)->SendRequest)
                (context,4,0,(double)CONCAT44(puVar1 + 1,0x40000000),(netadr_s *)&LAB_10021d70,
                 unaff_EDI);
      *(int *)(param_1 + 0x420) = *(int *)(param_1 + 0x420) + 1;
      *puVar1 = *(undefined4 *)(param_1 + 0x414);
      *(undefined4 **)(param_1 + 0x414) = puVar1;
    } while (*(int *)(param_1 + 0x420) < 0x15);
  }
  return;
}

/* 10022190  FUN_10022190  (37 bytes)
 * int FUN_10022190(int param_1)
 * called by: FUN_10022070
 */
int __fastcall FUN_10022190(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  for (puVar1 = *(undefined4 **)(param_1 + 0x410); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    iVar2 = iVar2 + 1;
  }
  for (puVar1 = *(undefined4 **)(param_1 + 0x414); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

/* 100221c0  FUN_100221c0  (28 bytes)
 * undefined4 * FUN_100221c0(int param_1, undefined4 * param_2)
 * called by: FUN_10021e10
 */
undefined4 * FUN_100221c0(int param_1,undefined4 *param_2)

{
  while( true ) {
    if (param_2 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    if (param_1 == param_2[6]) break;
    param_2 = (undefined4 *)*param_2;
  }
  return param_2;
}

/* 100221e0  FUN_100221e0  (45 bytes)
 * undefined FUN_100221e0(undefined4 * param_1, undefined4 * param_2)
 * called by: FUN_10021e10
 */
void FUN_100221e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
    puVar1 = (undefined4 *)*param_1;
    while (puVar3 = puVar1, puVar3 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar3;
      if (puVar3 != param_2) {
        *puVar3 = puVar2;
        puVar2 = puVar3;
      }
    }
    *param_1 = puVar2;
  }
  return;
}

/* 10022210  FUN_10022210  (44 bytes)
 * undefined FUN_10022210(undefined4 * param_1)
 * called by: FUN_100227f0, FUN_100228d0, FUN_10022a60
 */
void FUN_10022210(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*param_1;
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar2;
      FUN_1006ad4c(puVar2);
      puVar2 = puVar1;
    }
    *param_1 = 0;
  }
  return;
}

/* 10022240  FUN_10022240  (55 bytes)
 * undefined FUN_10022240(undefined4 * param_1)
 * called by: FUN_100227f0, FUN_100228d0, FUN_10022a60
 */
void FUN_10022240(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*param_1;
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar2;
      FUN_1006ad4c((LPVOID)puVar2[6]);
      FUN_1006ad4c(puVar2);
      puVar2 = puVar1;
    }
    *param_1 = 0;
  }
  return;
}

/* 10022280  FUN_10022280  (167 bytes)
 * uint FUN_10022280(int param_1, int param_2, undefined4 param_3, uint param_4)
 * called by: FUN_10022330
 */
uint __cdecl FUN_10022280(int param_1,int param_2,char *param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  byte_conflict *pbVar3;
  byte_conflict *pbVar4;
  uint uVar5;
  undefined *extraout_ECX;
  undefined *extraout_ECX_00;
  void *this;
  float10 fVar6;
  
  pbVar3 = (byte_conflict *)(*(gEngfuncs.pNetAPI)->ValueForKey)(*(char **)(param_1 + 0x18),param_3);
  pbVar4 = (byte_conflict *)(*(gEngfuncs.pNetAPI)->ValueForKey)(*(char **)(param_2 + 0x18),param_3);
  fVar6 = FUN_1006b918(extraout_ECX,pbVar3);
  fVar1 = (float)fVar6;
  fVar6 = FUN_1006b918(extraout_ECX_00,pbVar4);
  fVar2 = (float)fVar6;
  if ((fVar1 == 0.0) || (fVar2 == 0.0)) {
    uVar5 = FUN_10076d90(this,pbVar3,pbVar4);
    return uVar5;
  }
  if (fVar2 < fVar1) {
    return param_4;
  }
  if (fVar1 < fVar2) {
    return -param_4;
  }
  return 0;
}

/* 10022330  FUN_10022330  (41 bytes)
 * uint FUN_10022330(int param_1, int param_2, undefined4 param_3)
 */
uint FUN_10022330(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = FUN_10022280(param_1,param_2,param_3,1);
    return uVar1;
  }
  return 0;
}

/* 10022380  FUN_10022380  (219 bytes)
 * undefined FUN_10022380(char * param_1)
 * called by: FUN_10022b30
 */
void __thiscall FUN_10022380(void *this,char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  
  if (*(int *)((int)this + 0x418) != 0) {
    uVar5 = 0xffffffff;
    puVar8 = (undefined4 *)0x0;
    do {
      pcVar9 = param_1;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar9 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar9;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar9 = pcVar9 + -uVar5;
    pcVar10 = (char *)&DAT_100df1ac;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    for (puVar2 = *(undefined4 **)((int)this + 0x418); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    piVar3 = operator_new((int)puVar8 * 4);
    piVar4 = piVar3;
    for (uVar5 = (uint)puVar8 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
    }
    for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined1 *)piVar4 = 0;
      piVar4 = (int *)((int)piVar4 + 1);
    }
    piVar4 = piVar3;
    for (puVar2 = *(undefined4 **)((int)this + 0x418); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      *piVar4 = (int)puVar2;
      piVar4 = piVar4 + 1;
    }
    FUN_1006c264(piVar3,puVar8,4,&LAB_10022360);
    iVar7 = (int)puVar8 + -1;
    *(int *)((int)this + 0x418) = *piVar3;
    piVar4 = piVar3;
    if (0 < iVar7) {
      do {
        iVar7 = iVar7 + -1;
        *(int *)*piVar4 = piVar4[1];
        piVar4 = piVar4 + 1;
      } while (iVar7 != 0);
    }
    *(undefined4 *)piVar3[(int)puVar8 + -1] = 0;
    FUN_1006ad4c(piVar3);
  }
  return;
}

/* 10022460  FUN_10022460  (32 bytes)
 * undefined4 * FUN_10022460(int param_1)
 * called by: FUN_10022480
 */
undefined4 * __thiscall FUN_10022460(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)((int)this + 0x418);
  iVar2 = 0;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    if (iVar2 == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
    iVar2 = iVar2 + 1;
  }
  return puVar1;
}

/* 10022480  FUN_10022480  (25 bytes)
 * undefined4 FUN_10022480(int param_1)
 * called by: FUN_10022b10
 */
undefined4 __thiscall FUN_10022480(void *this,int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_10022460(this,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    return puVar1[6];
  }
  return 0;
}

/* 100224a0  FUN_100224a0  (32 bytes)
 * undefined FUN_100224a0(int param_1)
 * called by: FUN_10022bd0
 */
void __fastcall FUN_100224a0(int param_1)

{
  *(undefined4 *)(param_1 + 0x404) = 1;
  *(undefined4 *)(param_1 + 0x400) = 0;
  *(undefined4 *)(param_1 + 0x424) = 0;
                    /* WARNING: Could not recover jumptable at 0x100224bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(gEngfuncs.pNetAPI)->CancelAllRequests)();
  return;
}

/* 100224c0  FUN_100224c0  (814 bytes)
 * bool FUN_100224c0(int param_1, int * param_2, undefined4 * param_3)
 * called by: FUN_100227f0
 */
bool __thiscall FUN_100224c0(void *this,int param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  byte_conflict bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  byte_conflict *pbVar9;
  netadr_s *pnVar10;
  char *pcVar11;
  byte_conflict *pbVar12;
  undefined4 *puVar13;
  bool bStack_365;
  byte_conflict *local_364;
  int local_360;
  byte_conflict *pbStack_35c;
  undefined4 uStack_358;
  netadr_s nStack_354;
  char acStack_340 [64];
  byte_conflict local_300 [256];
  char local_200 [256];
  undefined1 auStack_100 [256];
  
  uVar4 = 0xffffffff;
  iVar6 = 0;
  pcVar8 = s_half_life_east_won_net_10093aec;
  do {
    pcVar11 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar11 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar11;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  local_364 = (byte_conflict *)0x0;
  pcVar8 = pcVar11 + -uVar4;
  pcVar11 = local_200;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar11 = pcVar11 + 4;
  }
  local_360 = 0;
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar11 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar11 = pcVar11 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar8 = s_woncomm_lst_10093ae0;
  do {
    pcVar11 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar11 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar11;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pbVar9 = (byte_conflict *)(pcVar11 + -uVar4);
  pbVar12 = local_300;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pbVar12 = *(undefined4 *)pbVar9;
    pbVar9 = pbVar9 + 4;
    pbVar12 = pbVar12 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pbVar12 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    pbVar12 = pbVar12 + 1;
  }
  iVar3 = (*gEngfuncs.CheckParm)(s__comm_10093ad8,(char **)&local_364);
  if ((iVar3 != 0) && (local_364 != (byte_conflict *)0x0)) {
    uVar4 = 0xffffffff;
    pbVar9 = local_364;
    do {
      pbVar12 = pbVar9;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pbVar12 = pbVar9 + 1;
      bVar2 = *pbVar9;
      pbVar9 = pbVar12;
    } while (bVar2 != '\0');
    uVar4 = ~uVar4;
    pbVar9 = pbVar12 + -uVar4;
    pbVar12 = local_300;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar12 = *(undefined4 *)pbVar9;
      pbVar9 = pbVar9 + 4;
      pbVar12 = pbVar12 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pbVar12 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      pbVar12 = pbVar12 + 1;
    }
  }
  pbStack_35c = (*gEngfuncs.COM_LoadFile)((char *)local_300,5,(int *)0x0);
  if ((pbStack_35c != (byte_conflict *)0x0) && (local_364 = pbStack_35c, 0 < param_1)) {
LAB_1002259e:
    local_364 = (byte_conflict *)(*gEngfuncs.COM_ParseFile)((char *)local_364,this);
    uVar4 = 0xffffffff;
    pcVar8 = this;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    if ((void *)(~uVar4 - 1) != (void *)0x0) {
      uVar4 = FUN_10076d90((void *)(~uVar4 - 1),this,(byte_conflict *)s_Master_10093ad0);
      if (uVar4 == 0) {
        uStack_358 = 0x6982;
      }
      bStack_365 = uVar4 != 0;
      local_364 = (byte_conflict *)(*gEngfuncs.COM_ParseFile)((char *)local_364,this);
      uVar4 = 0xffffffff;
      pcVar8 = this;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      if ((((void *)(~uVar4 - 1) != (void *)0x0) &&
          (uVar4 = FUN_10076d90((void *)(~uVar4 - 1),this,&DAT_10093acc), uVar4 == 0)) &&
         (iVar6 < param_1)) {
        puVar7 = param_3 + iVar6 * 5;
        do {
          local_364 = (byte_conflict *)(*gEngfuncs.COM_ParseFile)((char *)local_364,this);
          uVar4 = 0xffffffff;
          pcVar8 = this;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          if (((void *)(~uVar4 - 1) == (void *)0x0) ||
             (uVar4 = FUN_10076d90((void *)(~uVar4 - 1),this,&DAT_10093ac8), uVar4 == 0))
          goto LAB_1002275d;
          FUN_1006ac7a(auStack_100,&DAT_10093568);
          local_364 = (byte_conflict *)(*gEngfuncs.COM_ParseFile)((char *)local_364,this);
          uVar4 = 0xffffffff;
          pcVar8 = this;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          if (((void *)(~uVar4 - 1) == (void *)0x0) ||
             (uVar4 = FUN_10076d90((void *)(~uVar4 - 1),this,&DAT_10093ac4), uVar4 != 0))
          goto LAB_1002275d;
          local_364 = (byte_conflict *)(*gEngfuncs.COM_ParseFile)((char *)local_364,this);
          uVar4 = 0xffffffff;
          pcVar8 = this;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          if ((void *)(~uVar4 - 1) == (void *)0x0) goto LAB_1002275d;
          FUN_1006c042((void *)(~uVar4 - 1),this);
          FUN_1006ac7a(acStack_340,(byte_conflict *)s__s__i_10093abc);
          iVar6 = (*(gEngfuncs.pNetAPI)->StringToAdr)(acStack_340,&nStack_354);
          if (iVar6 == 0) {
            bStack_365 = true;
          }
          else if (!bStack_365) {
            pnVar10 = &nStack_354;
            puVar13 = puVar7;
            for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar13 = *(undefined4 *)pnVar10;
              pnVar10 = (netadr_s *)&pnVar10->field2_0x4;
              puVar13 = puVar13 + 1;
            }
            local_360 = local_360 + 1;
            puVar7 = puVar7 + 5;
          }
          iVar6 = local_360;
          if (param_1 <= local_360) break;
        } while( true );
      }
    }
    goto LAB_1002276b;
  }
LAB_10022773:
  pbVar9 = pbStack_35c;
  FUN_1006ac7a(local_200,(byte_conflict *)s_half_life_east_won_net_10093aec);
  iVar3 = (*(gEngfuncs.pNetAPI)->StringToAdr)(local_200,&nStack_354);
  if (iVar3 != 0) {
    local_360 = 1;
    iVar6 = 1;
    pnVar10 = &nStack_354;
    for (iVar3 = 5; pbVar9 = pbStack_35c, iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_3 = *(undefined4 *)pnVar10;
      pnVar10 = (netadr_s *)&pnVar10->field2_0x4;
      param_3 = param_3 + 1;
    }
  }
LAB_100227c3:
  *param_2 = iVar6;
  if (pbVar9 != (byte_conflict *)0x0) {
    (*gEngfuncs.COM_FreeFile)(pbVar9);
  }
  return 0 < iVar6;
LAB_1002275d:
  iVar6 = local_360;
  if (param_1 <= local_360) goto LAB_1002276b;
  goto LAB_1002259e;
LAB_1002276b:
  pbVar9 = pbStack_35c;
  if (iVar6 != 0) goto LAB_100227c3;
  goto LAB_10022773;
}

/* 100227f0  FUN_100227f0  (221 bytes)
 * undefined FUN_100227f0(void * param_1)
 * called by: FUN_10022be0
 */
void __fastcall FUN_100227f0(void *param_1)

{
  int context;
  bool bVar1;
  undefined3 extraout_var;
  net_api_response_func_t unaff_ESI;
  int local_18;
  undefined4 local_14 [5];
  
  local_18 = 0;
  *(undefined4 *)((int)param_1 + 0x408) = *(undefined4 *)((int)param_1 + 0x428);
  *(undefined4 *)((int)param_1 + 0x40c) = *(undefined4 *)((int)param_1 + 0x42c);
  *(undefined4 *)((int)param_1 + 0x400) = 1;
  *(undefined4 *)((int)param_1 + 0x404) = 0;
  bVar1 = FUN_100224c0(param_1,1,&local_18,local_14);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    (*gEngfuncs.Con_DPrintf)(s_SendRequest__Unable_to_read_mast_10093b04);
    return;
  }
  FUN_10022210((undefined4 *)((int)param_1 + 0x414));
  FUN_10022210((undefined4 *)((int)param_1 + 0x410));
  FUN_10022240((undefined4 *)((int)param_1 + 0x418));
  *(undefined4 *)((int)param_1 + 0x41c) = 0;
  (*(gEngfuncs.pNetAPI)->InitNetworking)();
  (*(gEngfuncs.pNetAPI)->CancelAllRequests)();
  context = DAT_100df2ac;
  DAT_100df2ac = DAT_100df2ac + 1;
  (*(gEngfuncs.pNetAPI)->SendRequest)
            (context,0,0,(double)CONCAT44(local_14,0x40140000),(netadr_s *)&LAB_10021d50,unaff_ESI);
  return;
}

/* 100228d0  FUN_100228d0  (278 bytes)
 * undefined FUN_100228d0(int param_1)
 * called by: FUN_10022bf0
 */
void __thiscall FUN_100228d0(void *this,int param_1)

{
  int iVar1;
  undefined4 uStack00000008;
  net_api_response_func_t response;
  
  response = (net_api_response_func_t)0x0;
  *(undefined4 *)((int)this + 0x408) = *(undefined4 *)((int)this + 0x428);
  *(undefined4 *)((int)this + 0x400) = 1;
  *(undefined4 *)((int)this + 0x404) = 0;
  *(undefined4 *)((int)this + 0x40c) = *(undefined4 *)((int)this + 0x42c);
  if (param_1 != 0) {
    FUN_10022210((undefined4 *)((int)this + 0x414));
    FUN_10022210((undefined4 *)((int)this + 0x410));
    FUN_10022240((undefined4 *)((int)this + 0x418));
    *(undefined4 *)((int)this + 0x41c) = 0;
  }
  Ordinal_9(0x6987);
  (*(gEngfuncs.pNetAPI)->InitNetworking)();
  if (param_1 != 0) {
    (*(gEngfuncs.pNetAPI)->CancelAllRequests)();
  }
  iVar1 = DAT_100df2ac;
  DAT_100df2ac = DAT_100df2ac + 1;
  (*(gEngfuncs.pNetAPI)->SendRequest)
            (iVar1,4,1,(double)CONCAT44(&stack0xffffffe8,0x40140000),(netadr_s *)&LAB_10021d70,
             (net_api_response_func_t)0x2);
  iVar1 = DAT_100df2ac;
  DAT_100df2ac = DAT_100df2ac + 1;
  uStack00000008 = 5;
  (*(gEngfuncs.pNetAPI)->SendRequest)
            (iVar1,4,1,(double)CONCAT44(&stack0x00000008,0x40140000),(netadr_s *)&LAB_10021d70,
             response);
  return;
}

/* 100229f0  FUN_100229f0  (14 bytes)
 * bool FUN_100229f0(int param_1)
 * called by: FUN_10022af0
 */
bool __fastcall FUN_100229f0(int param_1)

{
  return *(int *)(param_1 + 0x400) != 0;
}

/* 10022a00  FUN_10022a00  (89 bytes)
 * undefined FUN_10022a00(int param_1)
 * called by: FUN_10022b80
 */
void __fastcall FUN_10022a00(int param_1)

{
  *(undefined4 *)(param_1 + 0x408) = 0;
  *(undefined4 *)(param_1 + 0x428) = 0;
  *(undefined4 *)(param_1 + 0x400) = 0;
  *(undefined4 *)(param_1 + 0x40c) = 0;
  *(undefined4 *)(param_1 + 0x404) = 0;
  *(undefined4 *)(param_1 + 0x410) = 0;
  *(undefined4 *)(param_1 + 0x418) = 0;
  *(undefined4 *)(param_1 + 0x414) = 0;
  *(undefined4 *)(param_1 + 0x424) = 0;
  *(undefined4 *)(param_1 + 0x420) = 0;
  *(undefined4 *)(param_1 + 0x42c) = 0;
  *(undefined4 *)(param_1 + 0x430) = 0;
  *(undefined4 *)(param_1 + 0x434) = 0;
  *(undefined4 *)(param_1 + 0x438) = 0;
  return;
}

/* 10022a60  FUN_10022a60  (130 bytes)
 * undefined FUN_10022a60(int param_1)
 * called by: FUN_10022b50
 */
void __fastcall FUN_10022a60(int param_1)

{
  FUN_10022210((undefined4 *)(param_1 + 0x414));
  FUN_10022210((undefined4 *)(param_1 + 0x410));
  FUN_10022240((undefined4 *)(param_1 + 0x418));
  *(undefined4 *)(param_1 + 0x41c) = 0;
  if (*(LPVOID *)(param_1 + 0x430) != (LPVOID)0x0) {
    FUN_1006ad4c(*(LPVOID *)(param_1 + 0x430));
    *(undefined4 *)(param_1 + 0x430) = 0;
  }
  if (*(LPVOID *)(param_1 + 0x434) != (LPVOID)0x0) {
    FUN_1006ad4c(*(LPVOID *)(param_1 + 0x434));
    *(undefined4 *)(param_1 + 0x434) = 0;
  }
  if (*(LPVOID *)(param_1 + 0x438) != (LPVOID)0x0) {
    FUN_1006ad4c(*(LPVOID *)(param_1 + 0x438));
    *(undefined4 *)(param_1 + 0x438) = 0;
  }
  return;
}

