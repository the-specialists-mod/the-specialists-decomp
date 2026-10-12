/* client.dll - unnamed_10039860 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10039860  FUN_10039860  (39 bytes)
 * ActionSignal * FUN_10039860(ActionSignal * param_1)
 */
ActionSignal * __fastcall FUN_10039860(ActionSignal *param_1)

{
  vgui::ActionSignal::ActionSignal(param_1);
  *(undefined ***)param_1 = &PTR_thunk_FUN_10039890_1026d8f4;
  return param_1;
}

/* 10039890  FUN_10039890  (32 bytes)
 * undefined FUN_10039890(void)
 * called by: thunk_FUN_10039890
 */
void FUN_10039890(void)

{
  thunk_FUN_100b0010(DAT_102e15e0);
  return;
}

/* 100398c0  FUN_100398c0  (83 bytes)
 * Label * FUN_100398c0(Label * param_1)
 */
Label * __fastcall FUN_100398c0(Label *param_1)

{
  vgui::Label::Label(param_1,"");
  vgui::ScrollBar::ScrollBar((ScrollBar *)(param_1 + 0xd0),0,0,0,0,false);
  vgui::Slider::Slider((Slider *)(param_1 + 0x1a8),0,0,10,10,false);
  return param_1;
}

/* 10039930  FUN_10039930  (510 bytes)
 * undefined FUN_10039930(int * param_1, undefined4 param_2, undefined4 param_3)
 */
void FUN_10039930(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_10 [4];
  int local_c;
  int *local_8;
  
  (**(code **)(*param_1 + 0xc))(&local_c,local_10);
  (**(code **)(*local_8 + 0x40))(param_1);
  (**(code **)(*local_8 + 0x20c))(1);
  (**(code **)(*local_8 + 0x21c))(0);
  (**(code **)(*local_8 + 300))(0,0,0,0xff);
  (**(code **)(*local_8 + 0x120))(0xff,0xff,0xff,0);
  (**(code **)*local_8)(0x28,param_3);
  (**(code **)(*local_8 + 8))(local_c / 2 + -0x28,0x14);
  (**(code **)(*local_8 + 0x200))(local_8,param_2);
  (**(code **)(*local_8 + 0x24))(1);
  (**(code **)(local_8[0x6a] + 0x214))(10);
  (**(code **)(local_8[0x6a] + 0x218))(1);
  (**(code **)local_8[0x34])(local_c / 2 + 0x28,param_3);
  (**(code **)(local_8[0x34] + 8))(local_c / 2 + -0x50,0x14);
  (**(code **)(local_8[0x34] + 0x224))(local_8 + 0x6a);
  (**(code **)(local_8[0x34] + 0x40))(param_1);
  (**(code **)(local_8[0x34] + 0x208))(0,100);
  (**(code **)(local_8[0x34] + 0x120))(0xff,0xff,0xff,0);
  (**(code **)(local_8[0x34] + 300))(0xff,0xff,0xff,0);
  return;
}

/* 10039bb0  FUN_10039bb0  (55 bytes)
 * float10 FUN_10039bb0(int param_1)
 */
float10 __fastcall FUN_10039bb0(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0xd0) + 0x200))();
  return (float10)iVar1 / (float10)100.0;
}

/* 10039c00  FUN_10039c00  (60 bytes)
 * undefined FUN_10039c00(int param_1)
 */
void __fastcall FUN_10039c00(int param_1)

{
  longlong lVar1;
  
  lVar1 = __ftol();
  (**(code **)(*(int *)(param_1 + 0xd0) + 0x1fc))((int)lVar1);
  return;
}

/* 10039c50  FUN_10039c50  (296 bytes)
 * undefined4 * FUN_10039c50(undefined4 * param_1)
 */
undefined4 * __fastcall FUN_10039c50(undefined4 *param_1)

{
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e574f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  thunk_FUN_1003a500(param_1,0x96,0,0,0,0,0);
  thunk_FUN_10039dd0(param_1 + 0x35);
  vgui::Label::Label((Label *)(param_1 + 0x38),"");
  thunk_FUN_100398c0((Label *)(param_1 + 0x6d));
  thunk_FUN_100398c0((Label *)(param_1 + 0x116));
  thunk_FUN_10098400((Panel *)(param_1 + 0x1bf));
  local_8 = 0;
  vgui::Button::Button((Button *)(param_1 + 600),"",0,0);
  *param_1 = &PTR_setPos_1026d90c;
  param_1[0x35] = &PTR_thunk_FUN_1003a410_1026d900;
  param_1[0x6c] = 0;
  (**(code **)(param_1[600] + 0x240))(&DAT_102d6398);
  (**(code **)(param_1[0x38] + 300))(0xff,0xff,0xff,200);
  ExceptionList = local_10;
  return param_1;
}

/* 10039dd0  FUN_10039dd0  (31 bytes)
 * undefined4 * FUN_10039dd0(undefined4 * param_1)
 */
undefined4 * __fastcall FUN_10039dd0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1026db8c;
  return param_1;
}

/* 10039e00  FUN_10039e00  (55 bytes)
 * undefined FUN_10039e00(undefined4 * param_1)
 */
void __fastcall FUN_10039e00(undefined4 *param_1)

{
  *param_1 = &PTR_setPos_1026d90c;
  param_1[0x35] = &PTR_thunk_FUN_1003a410_1026d900;
  thunk_FUN_10098620(param_1 + 0x1bf);
  return;
}

/* 10039e50  FUN_10039e50  (943 bytes)
 * undefined FUN_10039e50(int * param_1)
 * called by: thunk_FUN_10039e50
 */
void __fastcall FUN_10039e50(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  int *local_60;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  if (DAT_102d6df0 == '\0') {
    DAT_102d6df0 = '\x01';
    param_1[0x36] = DAT_102e1234;
    param_1[0x37] = DAT_102e1238;
    param_1[0x6c] = DAT_102e15b4;
    local_8 = param_1;
    (**(code **)param_1[0x6c])();
    (**(code **)*local_8)((DAT_102e1234 - local_8[0x36]) / 2,(DAT_102e1238 - local_8[0x37]) / 2);
    (**(code **)(*local_8 + 8))(local_8[0x36],local_8[0x37]);
    local_c = 0x28;
    uVar4 = 0x28;
    puVar1 = thunk_FUN_10068750("#Mic_Volume");
    thunk_FUN_10039930(local_8,puVar1,uVar4);
    (**(code **)(local_8[0x6c] + 0xc))(0);
    thunk_FUN_10039c00((int)(local_8 + 0x6d));
    iVar2 = thunk_FUN_1003a710(local_8 + 0x6d);
    local_c = iVar2;
    puVar1 = thunk_FUN_10068750("#Speaker_Volume");
    thunk_FUN_10039930(local_8,puVar1,iVar2);
    (**(code **)(local_8[0x6c] + 0xc))(1);
    thunk_FUN_10039c00((int)(local_8 + 0x116));
    local_c = thunk_FUN_1003a710(local_8 + 0x116);
    (**(code **)(local_8[0x1bf] + 0x40))(local_8);
    thunk_FUN_10098660(local_8 + 0x1bf,"gfx/vgui/checked.tga","gfx/vgui/unchecked.tga");
    thunk_FUN_10098840(local_8 + 0x1bf,(byte_conflict *)"Enable Voice In This Mod");
    (**(code **)local_8[0x1bf])(0x28,local_c);
    thunk_FUN_100987d0(local_8 + 0x1bf,0);
    fVar3 = (float10)(*DAT_102e1494)("voice_modenable");
    thunk_FUN_10098990(local_8 + 0x1bf,fVar3 != (float10)0.0);
    if (local_8 == (int *)0x0) {
      local_60 = (int *)0x0;
    }
    else {
      local_60 = local_8 + 0x35;
    }
    thunk_FUN_10098930(local_8 + 0x1bf,local_60);
    puVar1 = thunk_FUN_10068750("#Menu_OK");
    (**(code **)(local_8[600] + 0x200))(local_8 + 600,puVar1);
    (**(code **)(local_8[600] + 0xc))(&local_10,&local_14);
    (**(code **)local_8[600])((local_8[0x36] - local_10) / 2,(local_8[0x37] - local_14) + -3);
    (**(code **)(local_8[600] + 0x40))(local_8);
    (**(code **)(local_8[0x38] + 300))(0,0,0,0xff);
    (**(code **)(local_8[0x38] + 0x120))(0xff,0xff,0xff,0);
    puVar1 = thunk_FUN_10068750("#Voice_Properties");
    (**(code **)(local_8[0x38] + 0x200))(local_8 + 0x38,puVar1);
    (**(code **)(local_8[0x38] + 0xc))(&local_18,local_1c);
    (**(code **)local_8[0x38])((local_8[0x36] - local_18) / 2,5);
    (**(code **)(local_8[0x38] + 0x40))(local_8);
    thunk_FUN_1003a620(local_8);
  }
  return;
}

/* 1003a2f0  FUN_1003a2f0  (46 bytes)
 * undefined FUN_1003a2f0(int * param_1)
 * called by: thunk_FUN_1003a2f0
 */
void __fastcall FUN_1003a2f0(int *param_1)

{
  (**(code **)(param_1[0x6c] + 4))();
  DAT_102d6df0 = 0;
  thunk_FUN_1003a660(param_1);
  return;
}

/* 1003a330  FUN_1003a330  (176 bytes)
 * undefined FUN_1003a330(int * param_1)
 * called by: thunk_FUN_1003a330
 */
void __fastcall FUN_1003a330(int *param_1)

{
  float10 fVar1;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  local_8 = param_1;
  thunk_FUN_1003a480(param_1);
  (**(code **)(*local_8 + 0xc))(&local_c,&local_10);
  (**(code **)(*local_8 + 0x178))(0x80,0x80,0x80,1);
  (**(code **)(*local_8 + 0x184))(0,0,local_c,local_10);
  fVar1 = thunk_FUN_10039bb0((int)(local_8 + 0x6d));
  (**(code **)(local_8[0x6c] + 8))(0,(float)fVar1);
  fVar1 = thunk_FUN_10039bb0((int)(local_8 + 0x116));
  (**(code **)(local_8[0x6c] + 8))(1,(float)fVar1);
  return;
}

/* 1003a410  FUN_1003a410  (81 bytes)
 * undefined FUN_1003a410(int param_1)
 * called by: thunk_FUN_1003a410
 */
void __thiscall FUN_1003a410(void *this,int param_1)

{
  char cVar1;
  
  if (param_1 == (int)this + 0x628) {
    cVar1 = thunk_FUN_10098960(param_1);
    if (cVar1 == '\0') {
      (*DAT_102e14a8)("voice_modenable 0");
    }
    else {
      (*DAT_102e14a8)("voice_modenable 1");
    }
  }
  return;
}

/* 1003a480  FUN_1003a480  (93 bytes)
 * undefined FUN_1003a480(int * param_1)
 */
void __fastcall FUN_1003a480(int *param_1)

{
  if (param_1[0x2f] != 0) {
    (**(code **)(*param_1 + 0x178))(0,0,0,param_1[0x2f]);
    (**(code **)(*param_1 + 0x180))(0,0,param_1[3],param_1[4]);
  }
  return;
}

/* 1003a500  FUN_1003a500  (81 bytes)
 * undefined4 * FUN_1003a500(undefined4 param_1, undefined4 param_2, int param_3, int param_4, int param_5, int param_6)
 */
undefined4 * __thiscall
FUN_1003a500(void *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  thunk_FUN_1003a570(this,param_1,param_3,param_4,param_5,param_6);
  *(undefined ***)this = &PTR_setPos_1026dc54;
  thunk_FUN_1003a5d0((int)this);
  *(undefined4 *)((int)this + 200) = param_2;
  return this;
}

/* 1003a570  FUN_1003a570  (69 bytes)
 * Panel * FUN_1003a570(undefined4 param_1, int param_2, int param_3, int param_4, int param_5)
 */
Panel * __thiscall
FUN_1003a570(void *this,undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  vgui::Panel::Panel(this,param_2,param_3,param_4,param_5);
  *(undefined ***)this = &PTR_setPos_1026ded4;
  *(undefined4 *)((int)this + 0xbc) = param_1;
  return this;
}

/* 1003a5d0  FUN_1003a5d0  (58 bytes)
 * undefined FUN_1003a5d0(int param_1)
 */
void __fastcall FUN_1003a5d0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  return;
}

/* 1003a620  FUN_1003a620  (47 bytes)
 * undefined FUN_1003a620(int * param_1)
 */
void __fastcall FUN_1003a620(int *param_1)

{
  (**(code **)(*param_1 + 0x24))(1);
  param_1[0x34] = DAT_102da3ec;
  return;
}

/* 1003a660  FUN_1003a660  (78 bytes)
 * undefined FUN_1003a660(int * param_1)
 */
void __fastcall FUN_1003a660(int *param_1)

{
  (**(code **)(*param_1 + 0x24))(0);
  param_1[0x33] = 0;
  if (param_1[0x32] != 0) {
    (**(code **)(*DAT_102e15e0 + 0x4c))(param_1);
  }
  return;
}

/* 1003a6d0  FUN_1003a6d0  (23 bytes)
 * undefined1 FUN_1003a6d0(void)
 * called by: thunk_FUN_1003a6d0
 */
undefined1 FUN_1003a6d0(void)

{
  return 0;
}

/* 1003a6f0  FUN_1003a6f0  (21 bytes)
 * undefined FUN_1003a6f0(void)
 * called by: thunk_FUN_1003a6f0
 */
void FUN_1003a6f0(void)

{
  return;
}

/* 1003a710  FUN_1003a710  (49 bytes)
 * int FUN_1003a710(int * param_1)
 */
int __cdecl FUN_1003a710(int *param_1)

{
  int local_14;
  undefined1 local_10 [4];
  int local_c;
  undefined1 local_8 [4];
  
  (**(code **)(*param_1 + 0x14))(local_8,&local_c,local_10,&local_14);
  return local_c + local_14;
}

/* 1003a750  FUN_1003a750  (90 bytes)
 * undefined FUN_1003a750(int param_1)
 */
void __fastcall FUN_1003a750(int param_1)

{
  undefined4 local_c;
  
  for (local_c = 0; local_c < 0x20; local_c = local_c + 1) {
    if (*(int *)(param_1 + 0x9c + local_c * 0x148) != 0) {
      thunk_FUN_1003a8c0(param_1 + local_c * 0x148);
    }
  }
  return;
}

/* 1003a7c0  FUN_1003a7c0  (44 bytes)
 * undefined4 FUN_1003a7c0(int param_1)
 */
undefined4 __thiscall FUN_1003a7c0(void *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)((int)this + param_1 * 4 + 0x2990);
  }
  return uVar1;
}

/* 1003a800  FUN_1003a800  (153 bytes)
 * undefined4 FUN_1003a800(int param_1)
 */
undefined4 __thiscall FUN_1003a800(void *this,int param_1)

{
  int iVar1;
  undefined4 local_4c;
  
  if (param_1 == 0) {
    local_4c = 0;
  }
  else if (*(int *)(param_1 + 0x88) == -1) {
    local_4c = 1;
  }
  else if ((((*(int *)(param_1 + 0x80) == -1) || (0 < *(int *)(param_1 + 0xa0))) ||
           (iVar1 = thunk_FUN_1003a7c0(this,*(int *)(param_1 + 0x80)), iVar1 != 0)) ||
          ((iVar1 = thunk_FUN_1003a7c0(this,*(int *)(param_1 + 0x84)), iVar1 != 0 ||
           ((*(uint *)(param_1 + 0x98) & 1) != 0)))) {
    local_4c = 1;
  }
  else {
    local_4c = 0;
  }
  return local_4c;
}

/* 1003a8c0  FUN_1003a8c0  (1828 bytes)
 * undefined FUN_1003a8c0(int param_1)
 */
void FUN_1003a8c0(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  int local_dc;
  undefined1 local_90 [128];
  int local_10;
  int local_c [2];
  
  if (DAT_102e1234 < 0x280) {
    local_10 = 0x140;
  }
  else {
    local_10 = 0x280;
  }
  if (param_1 != 0) {
    _memset((void *)(param_1 + 0xac),0,0x10);
    _memset((void *)(param_1 + 0xc0),0,0x10);
    _memset((void *)(param_1 + 0xd4),0,0x10);
    _memset((void *)(param_1 + 0xe8),0,0x10);
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xe4) = 0;
    FUN_100bb6e0(local_90,(byte_conflict *)"sprites/%s.txt");
    pcVar1 = (char *)(*DAT_102e1480)(local_90,local_c);
    if (pcVar1 != (char *)0x0) {
      pcVar2 = thunk_FUN_1003d250(pcVar1,"crosshair",local_10,local_c[0]);
      if (pcVar2 == (char *)0x0) {
        *(undefined4 *)(param_1 + 0xf8) = 0;
      }
      else {
        FUN_100bb6e0(local_90,(byte_conflict *)"sprites/%s.spr");
        uVar3 = (*DAT_102e1458)(local_90);
        *(undefined4 *)(param_1 + 0xf8) = uVar3;
        *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(pcVar2 + 0x88);
        *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(pcVar2 + 0x8c);
        *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(pcVar2 + 0x90);
        *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(pcVar2 + 0x94);
      }
      pcVar2 = thunk_FUN_1003d250(pcVar1,"autoaim",local_10,local_c[0]);
      if (pcVar2 == (char *)0x0) {
        *(undefined4 *)(param_1 + 0x10c) = 0;
      }
      else {
        FUN_100bb6e0(local_90,(byte_conflict *)"sprites/%s.spr");
        uVar3 = (*DAT_102e1458)(local_90);
        *(undefined4 *)(param_1 + 0x10c) = uVar3;
        *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(pcVar2 + 0x88);
        *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(pcVar2 + 0x8c);
        *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(pcVar2 + 0x90);
        *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(pcVar2 + 0x94);
      }
      pcVar2 = thunk_FUN_1003d250(pcVar1,"zoom",local_10,local_c[0]);
      if (pcVar2 == (char *)0x0) {
        *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0xf8);
        *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0xfc);
        *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0x100);
        *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0x104);
        *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x108);
      }
      else {
        FUN_100bb6e0(local_90,(byte_conflict *)"sprites/%s.spr");
        uVar3 = (*DAT_102e1458)(local_90);
        *(undefined4 *)(param_1 + 0x120) = uVar3;
        *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(pcVar2 + 0x88);
        *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(pcVar2 + 0x8c);
        *(undefined4 *)(param_1 + 300) = *(undefined4 *)(pcVar2 + 0x90);
        *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(pcVar2 + 0x94);
      }
      pcVar2 = thunk_FUN_1003d250(pcVar1,"zoom_autoaim",local_10,local_c[0]);
      if (pcVar2 == (char *)0x0) {
        *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x120);
        *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0x124);
        *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x128);
        *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 300);
        *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x130);
      }
      else {
        FUN_100bb6e0(local_90,(byte_conflict *)"sprites/%s.spr");
        uVar3 = (*DAT_102e1458)(local_90);
        *(undefined4 *)(param_1 + 0x134) = uVar3;
        *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(pcVar2 + 0x88);
        *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(pcVar2 + 0x8c);
        *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(pcVar2 + 0x90);
        *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(pcVar2 + 0x94);
      }
      pcVar2 = thunk_FUN_1003d250(pcVar1,"weapon",local_10,local_c[0]);
      if (pcVar2 == (char *)0x0) {
        *(undefined4 *)(param_1 + 0xbc) = 0;
      }
      else {
        FUN_100bb6e0(local_90,(byte_conflict *)"sprites/%s.spr");
        uVar3 = (*DAT_102e1458)(local_90);
        *(undefined4 *)(param_1 + 0xbc) = uVar3;
        *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(pcVar2 + 0x88);
        *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(pcVar2 + 0x8c);
        *(undefined4 *)(param_1 + 200) = *(undefined4 *)(pcVar2 + 0x90);
        *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(pcVar2 + 0x94);
        if (*(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4) < DAT_102da398) {
          local_dc = DAT_102da398;
        }
        else {
          local_dc = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4);
        }
        DAT_102da398 = local_dc;
      }
      pcVar2 = thunk_FUN_1003d250(pcVar1,"weapon_s",local_10,local_c[0]);
      if (pcVar2 == (char *)0x0) {
        *(undefined4 *)(param_1 + 0xa8) = 0;
      }
      else {
        FUN_100bb6e0(local_90,(byte_conflict *)"sprites/%s.spr");
        uVar3 = (*DAT_102e1458)(local_90);
        *(undefined4 *)(param_1 + 0xa8) = uVar3;
        *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(pcVar2 + 0x88);
        *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(pcVar2 + 0x8c);
        *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(pcVar2 + 0x90);
        *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(pcVar2 + 0x94);
      }
      pcVar2 = thunk_FUN_1003d250(pcVar1,"ammo",local_10,local_c[0]);
      if (pcVar2 == (char *)0x0) {
        *(undefined4 *)(param_1 + 0xd0) = 0;
      }
      else {
        FUN_100bb6e0(local_90,(byte_conflict *)"sprites/%s.spr");
        uVar3 = (*DAT_102e1458)(local_90);
        *(undefined4 *)(param_1 + 0xd0) = uVar3;
        *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(pcVar2 + 0x88);
        *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(pcVar2 + 0x8c);
        *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(pcVar2 + 0x90);
        *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(pcVar2 + 0x94);
        if (*(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4) < DAT_102da398) {
          local_dc = DAT_102da398;
        }
        else {
          local_dc = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4);
        }
        DAT_102da398 = local_dc;
      }
      pcVar1 = thunk_FUN_1003d250(pcVar1,"ammo2",local_10,local_c[0]);
      if (pcVar1 == (char *)0x0) {
        *(undefined4 *)(param_1 + 0xe4) = 0;
      }
      else {
        FUN_100bb6e0(local_90,(byte_conflict *)"sprites/%s.spr");
        uVar3 = (*DAT_102e1458)(local_90);
        *(undefined4 *)(param_1 + 0xe4) = uVar3;
        *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(pcVar1 + 0x88);
        *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(pcVar1 + 0x8c);
        *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(pcVar1 + 0x90);
        *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(pcVar1 + 0x94);
        if (*(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4) < DAT_102da398) {
          local_dc = DAT_102da398;
        }
        else {
          local_dc = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4);
        }
        DAT_102da398 = local_dc;
      }
    }
  }
  return;
}

/* 1003b1b0  FUN_1003b1b0  (144 bytes)
 * undefined4 FUN_1003b1b0(int param_1)
 */
undefined4 __thiscall FUN_1003b1b0(void *this,int param_1)

{
  int iVar1;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (4 < local_10) {
      return 0;
    }
    if ((*(int *)((int)this + local_10 * 4 + param_1 * 0x18 + 0x2900) != 0) &&
       (iVar1 = thunk_FUN_1003a800(this,*(int *)((int)this + local_10 * 4 + param_1 * 0x18 + 0x2900)
                                  ), iVar1 != 0)) break;
    local_10 = local_10 + 1;
  }
  return *(undefined4 *)((int)this + local_10 * 4 + param_1 * 0x18 + 0x2900);
}

/* 1003b270  FUN_1003b270  (104 bytes)
 * int FUN_1003b270(int param_1, int param_2)
 */
int FUN_1003b270(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 < 5) && (param_1 < 5)) {
    iVar1 = *(int *)(&DAT_102d990c + param_2 * 4 + param_1 * 0x18);
    if ((iVar1 == 0) || (iVar2 = thunk_FUN_1003a800(&DAT_102d7008,iVar1), iVar2 == 0)) {
      iVar1 = thunk_FUN_1003b270(param_1,param_2 + 1);
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

/* 1003b300  FUN_1003b300  (38 bytes)
 * undefined FUN_1003b300(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_1003b300
 */
void __cdecl FUN_1003b300(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_1003bf90(&DAT_102da444,param_1,param_2,param_3);
  return;
}

/* 1003b330  FUN_1003b330  (38 bytes)
 * undefined FUN_1003b330(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_1003b330
 */
void __cdecl FUN_1003b330(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_1003c310(param_1,param_2,param_3);
  return;
}

/* 1003b360  FUN_1003b360  (38 bytes)
 * undefined FUN_1003b360(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_1003b360
 */
void __cdecl FUN_1003b360(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_1003bce0(param_1,param_2,param_3);
  return;
}

/* 1003b390  FUN_1003b390  (38 bytes)
 * undefined FUN_1003b390(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_1003b390
 */
void __cdecl FUN_1003b390(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_1003bd50(param_1,param_2,param_3);
  return;
}

/* 1003b3c0  FUN_1003b3c0  (38 bytes)
 * undefined FUN_1003b3c0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_1003b3c0
 */
void __cdecl FUN_1003b3c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_1003bdc0(param_1,param_2,param_3);
  return;
}

/* 1003b3f0  FUN_1003b3f0  (38 bytes)
 * undefined FUN_1003b3f0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_1003b3f0
 */
void __cdecl FUN_1003b3f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_1003be80(&DAT_102da444,param_1,param_2,param_3);
  return;
}

/* 1003b420  FUN_1003b420  (38 bytes)
 * undefined FUN_1003b420(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_1003b420
 */
void __cdecl FUN_1003b420(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_1003be20(param_1,param_2,param_3);
  return;
}

/* 1003b450  FUN_1003b450  (29 bytes)
 * undefined FUN_1003b450(void)
 * called by: thunk_FUN_1003b450
 */
void FUN_1003b450(void)

{
  thunk_FUN_1003c5d0();
  return;
}

/* 1003b480  FUN_1003b480  (276 bytes)
 * undefined4 FUN_1003b480(int * param_1)
 * called by: thunk_FUN_1003b480
 */
undefined4 __fastcall FUN_1003b480(int *param_1)

{
  thunk_FUN_10046ec0(&DAT_102da3c8,(int)param_1);
  (*DAT_102e14a0)("CurWeapon",thunk_FUN_1003b300);
  (*DAT_102e14a0)("WeaponList",thunk_FUN_1003b330);
  (*DAT_102e14a0)("AmmoPickup",thunk_FUN_1003b390);
  (*DAT_102e14a0)("WeapPickup",thunk_FUN_1003b3c0);
  (*DAT_102e14a0)("ItemPickup",thunk_FUN_1003b420);
  (*DAT_102e14a0)("HideWeapon",thunk_FUN_1003b3f0);
  (*DAT_102e14a0)("AmmoX",thunk_FUN_1003b360);
  (*DAT_102e149c)("cancelselect",thunk_FUN_1003b450);
  (**(code **)(*param_1 + 0x14))();
  thunk_FUN_1003d2e0("hud_drawhistory_time",&DAT_1026e1e4,0);
  thunk_FUN_1003d2e0("hud_fastswitch",&DAT_1026d374,1);
  param_1[4] = param_1[4] | 1;
  thunk_FUN_1003d390(&DAT_102d7008);
  thunk_FUN_1003d5f0(&DAT_102da2d8);
  return 1;
}

/* 1003b5e0  FUN_1003b5e0  (84 bytes)
 * undefined FUN_1003b5e0(int param_1)
 * called by: thunk_FUN_1003b5e0
 */
void __fastcall FUN_1003b5e0(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  DAT_102d9a50 = 0;
  DAT_102da41c = 0;
  thunk_FUN_1003d3d0(0x102d7008);
  thunk_FUN_1003d620(&DAT_102da2d8);
  return;
}

/* 1003b650  FUN_1003b650  (362 bytes)
 * undefined4 FUN_1003b650(int param_1)
 * called by: thunk_FUN_1003b650
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_1003b650(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_4c;
  
  iVar1 = thunk_FUN_10046590(&DAT_102da3c8,"bucket1");
  *(int *)(param_1 + 0x20) = iVar1;
  iVar1 = thunk_FUN_10046590(&DAT_102da3c8,"selection");
  *(int *)(param_1 + 0x24) = iVar1;
  _DAT_102d9a40 = thunk_FUN_1003d1d0(&DAT_102da3c8,*(int *)(param_1 + 0x20));
  iVar1 = thunk_FUN_1003d220(&DAT_102da3c8,*(int *)(param_1 + 0x20));
  piVar2 = (int *)thunk_FUN_1003d220(&DAT_102da3c8,*(int *)(param_1 + 0x20));
  DAT_102d9a48 = *(int *)(iVar1 + 4) - *piVar2;
  iVar1 = thunk_FUN_1003d220(&DAT_102da3c8,*(int *)(param_1 + 0x20));
  iVar3 = thunk_FUN_1003d220(&DAT_102da3c8,*(int *)(param_1 + 0x20));
  DAT_102d9a54 = *(int *)(iVar1 + 0xc) - *(int *)(iVar3 + 8);
  iVar1 = thunk_FUN_1003d220(&DAT_102da3c8,*(int *)(param_1 + 0x20));
  iVar3 = thunk_FUN_1003d220(&DAT_102da3c8,*(int *)(param_1 + 0x20));
  if (*(int *)(iVar1 + 0xc) - *(int *)(iVar3 + 8) < DAT_102da398) {
    local_4c = DAT_102da398;
  }
  else {
    iVar1 = thunk_FUN_1003d220(&DAT_102da3c8,*(int *)(param_1 + 0x20));
    iVar3 = thunk_FUN_1003d220(&DAT_102da3c8,*(int *)(param_1 + 0x20));
    local_4c = *(int *)(iVar1 + 0xc) - *(int *)(iVar3 + 8);
  }
  DAT_102da398 = local_4c;
  thunk_FUN_1003a750(0x102d7008);
  if (DAT_102e1234 < 0x280) {
    DAT_102d9a4c = 10;
    DAT_102d9a1c = 2;
  }
  else {
    DAT_102d9a4c = 0x14;
    DAT_102d9a1c = 4;
  }
  return 1;
}

/* 1003b820  FUN_1003b820  (24 bytes)
 * undefined FUN_1003b820(void)
 * called by: thunk_FUN_1003b820
 */
void FUN_1003b820(void)

{
  return;
}

/* 1003b950  FUN_1003b950  (234 bytes)
 * int FUN_1003b950(int param_1, undefined4 * param_2)
 */
int __thiscall FUN_1003b950(void *this,int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0x1f < local_c) {
      return 0;
    }
    if (*(int *)((int)this + local_c * 0x148 + 0x80) == param_1) break;
    if (*(int *)((int)this + local_c * 0x148 + 0x84) == param_1) {
      puVar1 = (undefined4 *)((int)this + local_c * 0x148 + 0xe8);
      *param_2 = *puVar1;
      param_2[1] = puVar1[1];
      param_2[2] = puVar1[2];
      param_2[3] = puVar1[3];
      return (int)this + local_c * 0x148 + 0xe4;
    }
    local_c = local_c + 1;
  }
  puVar1 = (undefined4 *)((int)this + local_c * 0x148 + 0xd4);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  param_2[3] = puVar1[3];
  return (int)this + local_c * 0x148 + 0xd0;
}

/* 1003ba80  FUN_1003ba80  (479 bytes)
 * undefined FUN_1003ba80(int param_1, int param_2, int param_3)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1003ba80(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  float10 fVar2;
  uint local_c;
  
  if (((DAT_102da978 == 0) || (param_2 != 0)) || (param_3 != 1)) {
    if (((param_1 < 6) && (DAT_102e1448 == 0)) &&
       (((DAT_102da41c & 5) == 0 &&
        (((DAT_102e1444 & 0x80000000) != 0 && ((DAT_102e1444 & 0x7fffffff) != 0)))))) {
      local_c = 0;
      fVar2 = (float10)thunk_FUN_1000cd40("hud_fastswitch");
      if ((DAT_102d9a50 == 0) || ((DAT_102d9a50 == 1 || (param_1 != *(int *)(DAT_102d9a50 + 0x90))))
         ) {
        thunk_FUN_1003d310("common/wpn_hudon.wav",0x3f800000);
        local_c = thunk_FUN_1003b1b0(this,param_1);
        if ((local_c != 0) &&
           ((fVar2 != (float10)0.0 &&
            (iVar1 = thunk_FUN_1003b270(*(int *)(local_c + 0x90),*(int *)(local_c + 0x94)),
            iVar1 == 0)))) {
          (*DAT_102e14a4)(local_c);
          _DAT_102d9a58 = *(undefined4 *)(local_c + 0x9c);
          return;
        }
      }
      else {
        thunk_FUN_1003d310("common/wpn_moveselect.wav",0x3f800000);
        if (DAT_102d9a50 != 0) {
          local_c = thunk_FUN_1003b270(*(int *)(DAT_102d9a50 + 0x90),*(int *)(DAT_102d9a50 + 0x94));
        }
        if (local_c == 0) {
          local_c = thunk_FUN_1003b1b0(this,param_1);
        }
      }
      if (local_c == 0) {
        DAT_102d9a50 = (uint)(fVar2 == (float10)0.0);
      }
      else {
        DAT_102d9a50 = local_c;
      }
    }
  }
  else {
    thunk_FUN_10054740(&DAT_102da964,param_1 + 1);
  }
  return;
}

/* 1003bce0  FUN_1003bce0  (85 bytes)
 * undefined4 FUN_1003bce0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 FUN_1003bce0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar1 = thunk_FUN_10056300();
  uVar2 = thunk_FUN_10056300();
  iVar3 = FUN_100bdb80(uVar2);
  thunk_FUN_1003d5c0(&DAT_102d7008,uVar1,iVar3);
  return 1;
}

/* 1003bd50  FUN_1003bd50  (87 bytes)
 * undefined4 FUN_1003bd50(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 FUN_1003bd50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar1 = thunk_FUN_10056300();
  uVar2 = thunk_FUN_10056300();
  iVar3 = FUN_100bdb80(uVar2);
  thunk_FUN_1003da40(&DAT_102da2d8,1,uVar1,iVar3);
  return 1;
}

/* 1003bdc0  FUN_1003bdc0  (68 bytes)
 * undefined4 FUN_1003bdc0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 FUN_1003bdc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar1 = thunk_FUN_10056300();
  thunk_FUN_1003da40(&DAT_102da2d8,2,uVar1,0);
  return 1;
}

/* 1003be20  FUN_1003be20  (68 bytes)
 * undefined4 FUN_1003be20(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 FUN_1003be20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  
  thunk_FUN_10056240(param_3,param_2);
  pcVar1 = thunk_FUN_10056560();
  thunk_FUN_1003db50(&DAT_102da2d8,3,pcVar1,0);
  return 1;
}

/* 1003be80  FUN_1003be80  (218 bytes)
 * undefined4 FUN_1003be80(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_1003be80(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  thunk_FUN_10056240(param_3,param_2);
  DAT_102da41c = thunk_FUN_10056300();
  if ((DAT_102da41c & 5) == 0) {
    if (*(int *)((int)this + 0x1c) != 0) {
      iVar1 = *(int *)((int)this + 0x1c);
      (*DAT_102e148c)(*(undefined4 *)(*(int *)((int)this + 0x1c) + 0xf8),
                      *(undefined4 *)(iVar1 + 0xfc),*(undefined4 *)(iVar1 + 0x100),
                      *(undefined4 *)(iVar1 + 0x104),*(undefined4 *)(iVar1 + 0x108),0xff,0xff,0xff);
    }
  }
  else {
    DAT_102d9a50 = 0;
    (*DAT_102e148c)(0,DAT_102d9a20,DAT_102d9a24,DAT_102d9a28,DAT_102d9a2c,0,0,0);
  }
  return 1;
}

/* 1003bf90  FUN_1003bf90  (713 bytes)
 * undefined4 FUN_1003bf90(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_1003bf90(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar1 = thunk_FUN_10056300();
  iVar2 = thunk_FUN_10056290();
  iVar3 = thunk_FUN_10056290();
  if (iVar2 < 1) {
    (*DAT_102e148c)(0,DAT_102d9a30,DAT_102d9a34,DAT_102d9a38,DAT_102d9a3c,0,0,0);
    uVar4 = 0;
  }
  else if ((iVar2 == -1) && (iVar3 == -1)) {
    DAT_102e1448 = 1;
    DAT_102d9a50 = 0;
    uVar4 = 1;
  }
  else {
    DAT_102e1448 = 0;
    iVar2 = thunk_FUN_1003d440(&DAT_102d7008,iVar2);
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      if (iVar3 < -1) {
        iVar3 = FUN_100bdb80(iVar3);
        *(int *)(iVar2 + 0xa0) = iVar3;
      }
      else {
        *(int *)(iVar2 + 0xa0) = iVar3;
      }
      if (uVar1 == 0) {
        uVar4 = 1;
      }
      else {
        *(int *)((int)this + 0x1c) = iVar2;
        if ((DAT_102da41c & 5) == 0) {
          if (DAT_102da420 < 0x5a) {
            if (((int)uVar1 < 2) || (*(int *)(*(int *)((int)this + 0x1c) + 0x134) == 0)) {
              iVar2 = *(int *)((int)this + 0x1c);
              (*DAT_102e148c)(*(undefined4 *)(*(int *)((int)this + 0x1c) + 0x120),
                              *(undefined4 *)(iVar2 + 0x124),*(undefined4 *)(iVar2 + 0x128),
                              *(undefined4 *)(iVar2 + 300),*(undefined4 *)(iVar2 + 0x130),0xff,0xff,
                              0xff);
            }
            else {
              iVar2 = *(int *)((int)this + 0x1c);
              (*DAT_102e148c)(*(undefined4 *)(*(int *)((int)this + 0x1c) + 0x134),
                              *(undefined4 *)(iVar2 + 0x138),*(undefined4 *)(iVar2 + 0x13c),
                              *(undefined4 *)(iVar2 + 0x140),*(undefined4 *)(iVar2 + 0x144),0xff,
                              0xff,0xff);
            }
          }
          else if (((int)uVar1 < 2) || (*(int *)(*(int *)((int)this + 0x1c) + 0x10c) == 0)) {
            iVar2 = *(int *)((int)this + 0x1c);
            (*DAT_102e148c)(*(undefined4 *)(*(int *)((int)this + 0x1c) + 0xf8),
                            *(undefined4 *)(iVar2 + 0xfc),*(undefined4 *)(iVar2 + 0x100),
                            *(undefined4 *)(iVar2 + 0x104),*(undefined4 *)(iVar2 + 0x108),0xff,0xff,
                            0xff);
          }
          else {
            iVar2 = *(int *)((int)this + 0x1c);
            (*DAT_102e148c)(*(undefined4 *)(*(int *)((int)this + 0x1c) + 0x10c),
                            *(undefined4 *)(iVar2 + 0x110),*(undefined4 *)(iVar2 + 0x114),
                            *(undefined4 *)(iVar2 + 0x118),*(undefined4 *)(iVar2 + 0x11c),0xff,0xff,
                            0xff);
          }
        }
        *(undefined4 *)((int)this + 0x14) = 0x43480000;
        *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}

/* 1003c310  FUN_1003c310  (225 bytes)
 * undefined4 FUN_1003c310(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 FUN_1003c310(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  uint local_150 [32];
  int local_d0;
  int local_cc;
  uint local_c8;
  uint local_c4;
  int local_c0;
  int local_bc;
  uint local_b8;
  int local_b4;
  undefined4 local_b0;
  
  thunk_FUN_10056240(param_3,param_2);
  puVar1 = (uint *)thunk_FUN_10056560();
  FUN_100bba20(local_150,puVar1);
  local_d0 = thunk_FUN_10056290();
  local_c8 = thunk_FUN_10056300();
  if (local_c8 == 0xff) {
    local_c8 = 0xffffffff;
  }
  local_cc = thunk_FUN_10056290();
  local_c4 = thunk_FUN_10056300();
  if (local_c4 == 0xff) {
    local_c4 = 0xffffffff;
  }
  local_c0 = thunk_FUN_10056290();
  local_bc = thunk_FUN_10056290();
  local_b4 = thunk_FUN_10056290();
  local_b8 = thunk_FUN_10056300();
  local_b0 = 0;
  thunk_FUN_1003d470(&DAT_102d7008,local_150);
  return 1;
}

/* 1003c430  FUN_1003c430  (74 bytes)
 * undefined FUN_1003c430(int param_1)
 */
void FUN_1003c430(int param_1)

{
  uint uVar1;
  
  if ((DAT_102e15e0 == (void *)0x0) ||
     (uVar1 = thunk_FUN_100b1700(DAT_102e15e0,param_1), (uVar1 & 0xff) == 0)) {
    thunk_FUN_1003ba80(&DAT_102d7008,param_1,0,1);
  }
  return;
}

/* 1003c490  FUN_1003c490  (26 bytes)
 * undefined FUN_1003c490(void)
 */
void FUN_1003c490(void)

{
  thunk_FUN_1003c430(0);
  return;
}

/* 1003c4b0  FUN_1003c4b0  (26 bytes)
 * undefined FUN_1003c4b0(void)
 */
void FUN_1003c4b0(void)

{
  thunk_FUN_1003c430(1);
  return;
}

/* 1003c4d0  FUN_1003c4d0  (26 bytes)
 * undefined FUN_1003c4d0(void)
 */
void FUN_1003c4d0(void)

{
  thunk_FUN_1003c430(2);
  return;
}

/* 1003c4f0  FUN_1003c4f0  (26 bytes)
 * undefined FUN_1003c4f0(void)
 */
void FUN_1003c4f0(void)

{
  thunk_FUN_1003c430(3);
  return;
}

/* 1003c510  FUN_1003c510  (26 bytes)
 * undefined FUN_1003c510(void)
 */
void FUN_1003c510(void)

{
  thunk_FUN_1003c430(4);
  return;
}

/* 1003c530  FUN_1003c530  (26 bytes)
 * undefined FUN_1003c530(void)
 */
void FUN_1003c530(void)

{
  thunk_FUN_1003c430(5);
  return;
}

/* 1003c550  FUN_1003c550  (26 bytes)
 * undefined FUN_1003c550(void)
 */
void FUN_1003c550(void)

{
  thunk_FUN_1003c430(6);
  return;
}

/* 1003c570  FUN_1003c570  (26 bytes)
 * undefined FUN_1003c570(void)
 */
void FUN_1003c570(void)

{
  thunk_FUN_1003c430(7);
  return;
}

/* 1003c590  FUN_1003c590  (26 bytes)
 * undefined FUN_1003c590(void)
 */
void FUN_1003c590(void)

{
  thunk_FUN_1003c430(8);
  return;
}

/* 1003c5b0  FUN_1003c5b0  (26 bytes)
 * undefined FUN_1003c5b0(void)
 */
void FUN_1003c5b0(void)

{
  thunk_FUN_1003c430(9);
  return;
}

/* 1003c5d0  FUN_1003c5d0  (79 bytes)
 * undefined FUN_1003c5d0(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003c5d0(void)

{
  if (DAT_102d9a50 == 0) {
    (*DAT_102e14a8)("escape");
  }
  else {
    _DAT_102d9a44 = DAT_102d9a50;
    DAT_102d9a50 = 0;
    thunk_FUN_1003d310("common/wpn_hudoff.wav",0x3f800000);
  }
  return;
}

/* 1003c640  FUN_1003c640  (269 bytes)
 * undefined FUN_1003c640(int param_1)
 */
void __cdecl FUN_1003c640(int param_1)

{
  int iVar1;
  int iVar2;
  int local_10;
  int local_c;
  int local_8;
  
  if ((DAT_102e1448 == 0) && ((DAT_102da41c & 5) == 0)) {
    if ((DAT_102d9a50 == 0) || (DAT_102d9a50 == 1)) {
      DAT_102d9a50 = *(int *)(param_1 + 0x1c);
    }
    local_8 = 0;
    local_c = 0;
    if (DAT_102d9a50 != 0) {
      local_8 = *(int *)(DAT_102d9a50 + 0x94) + 1;
      local_c = *(int *)(DAT_102d9a50 + 0x90);
    }
    for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
      for (; local_c < 5; local_c = local_c + 1) {
        for (; local_8 < 5; local_8 = local_8 + 1) {
          iVar1 = thunk_FUN_1003d580(&DAT_102d7008,local_c,local_8);
          if ((iVar1 != 0) && (iVar2 = thunk_FUN_1003a800(&DAT_102d7008,iVar1), iVar2 != 0)) {
            DAT_102d9a50 = iVar1;
            return;
          }
        }
        local_8 = 0;
      }
      local_c = 0;
    }
    DAT_102d9a50 = 0;
  }
  return;
}

/* 1003c790  FUN_1003c790  (269 bytes)
 * undefined FUN_1003c790(int param_1)
 */
void __cdecl FUN_1003c790(int param_1)

{
  int iVar1;
  int iVar2;
  int local_10;
  int local_c;
  int local_8;
  
  if ((DAT_102e1448 == 0) && ((DAT_102da41c & 5) == 0)) {
    if ((DAT_102d9a50 == 0) || (DAT_102d9a50 == 1)) {
      DAT_102d9a50 = *(int *)(param_1 + 0x1c);
    }
    local_8 = 4;
    local_c = 4;
    if (DAT_102d9a50 != 0) {
      local_8 = *(int *)(DAT_102d9a50 + 0x94) + -1;
      local_c = *(int *)(DAT_102d9a50 + 0x90);
    }
    for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
      for (; -1 < local_c; local_c = local_c + -1) {
        for (; -1 < local_8; local_8 = local_8 + -1) {
          iVar1 = thunk_FUN_1003d580(&DAT_102d7008,local_c,local_8);
          if ((iVar1 != 0) && (iVar2 = thunk_FUN_1003a800(&DAT_102d7008,iVar1), iVar2 != 0)) {
            DAT_102d9a50 = iVar1;
            return;
          }
        }
        local_8 = 4;
      }
      local_c = 4;
    }
    DAT_102d9a50 = 0;
  }
  return;
}

/* 1003c8e0  FUN_1003c8e0  (29 bytes)
 * undefined4 FUN_1003c8e0(void)
 * called by: thunk_FUN_1003c8e0
 */
undefined4 FUN_1003c8e0(void)

{
  return 1;
}

/* 1003c910  FUN_1003c910  (265 bytes)
 * int FUN_1003c910(int param_1, undefined4 param_2, int param_3, undefined4 param_4, float param_5)
 */
int __cdecl
FUN_1003c910(int param_1,undefined4 param_2,int param_3,undefined4 param_4,float param_5)

{
  longlong lVar1;
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  if (param_5 < 0.0) {
    param_5 = 0.0;
  }
  if (1.0 < param_5) {
    param_5 = 1.0;
  }
  if (param_5 != 0.0) {
    lVar1 = __ftol();
    local_14 = (int)lVar1;
    if (local_14 < 1) {
      local_14 = 1;
    }
    thunk_FUN_1003d340(&local_8,&local_c,&local_10,0xa000);
    (*DAT_102e1484)(param_1,param_2,local_14,param_4,local_8,local_c,local_10,0xff);
    param_1 = param_1 + local_14;
    param_3 = param_3 - local_14;
  }
  thunk_FUN_1003d340(&local_8,&local_c,&local_10,0xffa000);
  (*DAT_102e1484)(param_1,param_2,param_3,param_4,local_8,local_c,local_10,0x80);
  return param_1 + param_3;
}

/* 1003ca60  FUN_1003ca60  (228 bytes)
 * undefined FUN_1003ca60(int param_1, int param_2, undefined4 param_3, int param_4, undefined4 param_5)
 */
void __cdecl FUN_1003ca60(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x80) != -1)) &&
     (iVar1 = thunk_FUN_1003a7c0(&DAT_102d7008,*(int *)(param_1 + 0x80)), iVar1 != 0)) {
    iVar1 = thunk_FUN_1003a7c0(&DAT_102d7008,*(int *)(param_1 + 0x80));
    iVar1 = thunk_FUN_1003c910(param_2,param_3,param_4,param_5,
                               (float)iVar1 / (float)*(int *)(param_1 + 0x88));
    if (*(int *)(param_1 + 0x84) != -1) {
      iVar2 = thunk_FUN_1003a7c0(&DAT_102d7008,*(int *)(param_1 + 0x84));
      thunk_FUN_1003c910(iVar1 + 5,param_3,param_4,param_5,
                         (float)iVar2 / (float)*(int *)(param_1 + 0x8c));
    }
  }
  return;
}

/* 1003cb80  FUN_1003cb80  (1286 bytes)
 * undefined4 FUN_1003cb80(int param_1)
 */
undefined4 __fastcall FUN_1003cb80(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int local_40;
  int local_3c;
  int local_38;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  if (DAT_102d9a50 == 0) {
    uVar1 = 0;
  }
  else {
    if (DAT_102d9a50 == 1) {
      local_28 = -1;
    }
    else {
      local_28 = *(int *)(DAT_102d9a50 + 0x90);
    }
    local_18 = 10;
    local_8 = param_1;
    if ((0 < local_28) && (iVar2 = thunk_FUN_1003b1b0(&DAT_102d7008,local_28), iVar2 == 0)) {
      DAT_102d9a50 = 1;
      local_28 = -1;
    }
    for (local_24 = 0; local_24 < 5; local_24 = local_24 + 1) {
      thunk_FUN_1003d340(&local_c,&local_10,&local_14,0xffa000);
      thunk_FUN_10047e90(&local_c,&local_10,&local_14);
      uVar4 = local_c;
      uVar5 = local_10;
      uVar6 = local_14;
      uVar1 = thunk_FUN_1003d1d0(&DAT_102da3c8,*(int *)(local_8 + 0x20) + local_24);
      (*DAT_102e1468)(uVar1,uVar4,uVar5,uVar6);
      if (local_24 == local_28) {
        iVar2 = thunk_FUN_1003b1b0(&DAT_102d7008,local_28);
        if (iVar2 == 0) {
          local_2c = DAT_102d9a48;
        }
        else {
          local_2c = *(int *)(iVar2 + 0xb0) - *(int *)(iVar2 + 0xac);
        }
      }
      else {
        local_2c = DAT_102d9a48;
      }
      iVar2 = thunk_FUN_1003d220(&DAT_102da3c8,*(int *)(local_8 + 0x20) + local_24);
      (*DAT_102e1474)(0,local_18,10,iVar2);
      local_18 = local_18 + 5 + local_2c;
    }
    local_18 = 10;
    for (local_24 = 0; local_24 < 5; local_24 = local_24 + 1) {
      local_1c = DAT_102d9a54 + 10;
      if (local_24 == local_28) {
        iVar2 = thunk_FUN_1003b1b0(&DAT_102d7008,local_24);
        local_38 = DAT_102d9a48;
        if (iVar2 != 0) {
          local_38 = *(int *)(iVar2 + 0xb0) - *(int *)(iVar2 + 0xac);
        }
        for (local_3c = 0; local_3c < 5; local_3c = local_3c + 1) {
          iVar2 = thunk_FUN_1003d580(&DAT_102d7008,local_24,local_3c);
          if ((iVar2 != 0) && (*(int *)(iVar2 + 0x9c) != 0)) {
            thunk_FUN_1003d340(&local_c,&local_10,&local_14,0xffa000);
            if (DAT_102d9a50 == iVar2) {
              (*DAT_102e1468)(*(undefined4 *)(iVar2 + 0xa8),local_c,local_10,local_14);
              (*DAT_102e1474)(0,local_18,local_1c,iVar2 + 0xac);
              uVar4 = local_c;
              uVar5 = local_10;
              uVar6 = local_14;
              uVar1 = thunk_FUN_1003d1d0(&DAT_102da3c8,*(int *)(local_8 + 0x24));
              (*DAT_102e1468)(uVar1,uVar4,uVar5,uVar6);
              iVar3 = thunk_FUN_1003d220(&DAT_102da3c8,*(int *)(local_8 + 0x24));
              (*DAT_102e1474)(0,local_18,local_1c,iVar3);
            }
            else {
              iVar3 = thunk_FUN_1003a800(&DAT_102d7008,iVar2);
              if (iVar3 == 0) {
                thunk_FUN_1003d340(&local_c,&local_10,&local_14,0xff1010);
                thunk_FUN_10047e90(&local_c,&local_10,&local_14);
              }
              else {
                thunk_FUN_10047e90(&local_c,&local_10,&local_14);
              }
              (*DAT_102e1468)(*(undefined4 *)(iVar2 + 0xbc),local_c,local_10,local_14);
              (*DAT_102e1474)(0,local_18,local_1c,iVar2 + 0xc0);
            }
            thunk_FUN_1003ca60(iVar2,local_18 + DAT_102d9a4c / 2,local_1c,DAT_102d9a4c,DAT_102d9a1c)
            ;
            local_1c = local_1c + 5 + (*(int *)(iVar2 + 0xb8) - *(int *)(iVar2 + 0xb4));
          }
        }
        local_18 = local_18 + 5 + local_38;
      }
      else {
        thunk_FUN_1003d340(&local_c,&local_10,&local_14,0xffa000);
        for (local_40 = 0; local_40 < 5; local_40 = local_40 + 1) {
          iVar2 = thunk_FUN_1003d580(&DAT_102d7008,local_24,local_40);
          if ((iVar2 != 0) && (*(int *)(iVar2 + 0x9c) != 0)) {
            iVar2 = thunk_FUN_1003a800(&DAT_102d7008,iVar2);
            if (iVar2 == 0) {
              thunk_FUN_1003d340(&local_c,&local_10,&local_14,0xff1010);
              local_20 = 0x60;
            }
            else {
              thunk_FUN_1003d340(&local_c,&local_10,&local_14,0xffa000);
              local_20 = 0x80;
            }
            (*DAT_102e1484)(local_18,local_1c,DAT_102d9a48,DAT_102d9a54,local_c,local_10,local_14,
                            local_20);
            local_1c = local_1c + 5 + DAT_102d9a54;
          }
        }
        local_18 = local_18 + 5 + DAT_102d9a48;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}

/* 1003d1d0  FUN_1003d1d0  (54 bytes)
 * undefined4 FUN_1003d1d0(int param_1)
 */
undefined4 __thiscall FUN_1003d1d0(void *this,int param_1)

{
  undefined4 local_4c;
  
  if (param_1 < 0) {
    local_4c = 0;
  }
  else {
    local_4c = *(undefined4 *)(*(int *)((int)this + 0x6c) + param_1 * 4);
  }
  return local_4c;
}

/* 1003d220  FUN_1003d220  (33 bytes)
 * int FUN_1003d220(int param_1)
 */
int __thiscall FUN_1003d220(void *this,int param_1)

{
  return param_1 * 0x10 + *(int *)((int)this + 0x70);
}

/* 1003d250  FUN_1003d250  (108 bytes)
 * char * FUN_1003d250(char * param_1, char * param_2, int param_3, int param_4)
 */
char * __cdecl FUN_1003d250(char *param_1,char *param_2,int param_3,int param_4)

{
  int iVar1;
  char *local_c;
  int local_8;
  
  if (param_1 != (char *)0x0) {
    local_8 = param_4;
    local_c = param_1;
    while (local_8 != 0) {
      iVar1 = _strcmp(param_2,local_c);
      if ((iVar1 == 0) && (*(int *)(local_c + 0x84) == param_3)) {
        return local_c;
      }
      local_c = local_c + 0x98;
      local_8 = local_8 + -1;
    }
  }
  return (char *)0x0;
}

/* 1003d2e0  FUN_1003d2e0  (37 bytes)
 * undefined FUN_1003d2e0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
void __cdecl FUN_1003d2e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*DAT_102e1490)(param_1,param_2,param_3);
  return;
}

/* 1003d310  FUN_1003d310  (33 bytes)
 * undefined FUN_1003d310(undefined4 param_1, undefined4 param_2)
 */
void __cdecl FUN_1003d310(undefined4 param_1,undefined4 param_2)

{
  (*DAT_102e14b0)(param_1,param_2);
  return;
}

/* 1003d340  FUN_1003d340  (61 bytes)
 * undefined FUN_1003d340(uint * param_1, uint * param_2, uint * param_3, uint param_4)
 */
void __cdecl FUN_1003d340(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  *param_1 = (param_4 & 0xff0000) >> 0x10;
  *param_2 = (param_4 & 0xff00) >> 8;
  *param_3 = param_4 & 0xff;
  return;
}

/* 1003d390  FUN_1003d390  (46 bytes)
 * undefined FUN_1003d390(void * param_1)
 */
void __fastcall FUN_1003d390(void *param_1)

{
  _memset(param_1,0,0x2900);
  thunk_FUN_1003d3d0((int)param_1);
  return;
}

/* 1003d3d0  FUN_1003d3d0  (80 bytes)
 * undefined FUN_1003d3d0(int param_1)
 */
void __fastcall FUN_1003d3d0(int param_1)

{
  *(undefined4 *)(param_1 + 0x2a10) = 0;
  _memset((void *)(param_1 + 0x2900),0,0x90);
  _memset((void *)(param_1 + 0x2990),0,0x80);
  return;
}

/* 1003d440  FUN_1003d440  (35 bytes)
 * int FUN_1003d440(int param_1)
 */
int __thiscall FUN_1003d440(void *this,int param_1)

{
  return (int)(param_1 * 0x148 + (int)this);
}

/* 1003d470  FUN_1003d470  (80 bytes)
 * undefined FUN_1003d470(undefined4 * param_1)
 */
void __thiscall FUN_1003d470(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = param_1;
  puVar3 = (undefined4 *)((int)this + param_1[0x27] * 0x148);
  for (iVar1 = 0x52; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  thunk_FUN_1003a8c0((int)((int)this + param_1[0x27] * 0x148));
  return;
}

/* 1003d4e0  FUN_1003d4e0  (58 bytes)
 * undefined FUN_1003d4e0(int param_1)
 */
void __thiscall FUN_1003d4e0(void *this,int param_1)

{
  *(int *)((int)this + *(int *)(param_1 + 0x94) * 4 + *(int *)(param_1 + 0x90) * 0x18 + 0x2900) =
       param_1;
  return;
}

/* 1003d530  FUN_1003d530  (59 bytes)
 * undefined FUN_1003d530(int param_1)
 */
void __thiscall FUN_1003d530(void *this,int param_1)

{
  *(undefined4 *)
   ((int)this + *(int *)(param_1 + 0x94) * 4 + *(int *)(param_1 + 0x90) * 0x18 + 0x2900) = 0;
  return;
}

/* 1003d580  FUN_1003d580  (43 bytes)
 * undefined4 FUN_1003d580(int param_1, int param_2)
 */
undefined4 __thiscall FUN_1003d580(void *this,int param_1,int param_2)

{
  return *(undefined4 *)((int)this + param_2 * 4 + param_1 * 0x18 + 0x2900);
}

/* 1003d5c0  FUN_1003d5c0  (37 bytes)
 * undefined FUN_1003d5c0(int param_1, undefined4 param_2)
 */
void __thiscall FUN_1003d5c0(void *this,int param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + param_1 * 4 + 0x2990) = param_2;
  return;
}

/* 1003d5f0  FUN_1003d5f0  (27 bytes)
 * undefined FUN_1003d5f0(void * param_1)
 */
void __fastcall FUN_1003d5f0(void *param_1)

{
  thunk_FUN_1003d620(param_1);
  return;
}

/* 1003d620  FUN_1003d620  (38 bytes)
 * undefined FUN_1003d620(void * param_1)
 */
void __fastcall FUN_1003d620(void *param_1)

{
  _memset(param_1,0,0xc0);
  return;
}

/* 1003d650  FUN_1003d650  (38 bytes)
 * undefined FUN_1003d650(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_1003d650
 */
void __cdecl FUN_1003d650(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_1003d930(&DAT_102da988,param_1,param_2,param_3);
  return;
}

/* 1003d680  FUN_1003d680  (38 bytes)
 * undefined FUN_1003d680(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_1003d680
 */
void __cdecl FUN_1003d680(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_1003d8e0(&DAT_102da988,param_1,param_2,param_3);
  return;
}

/* 1003d6b0  FUN_1003d6b0  (137 bytes)
 * undefined4 FUN_1003d6b0(int * param_1)
 * called by: thunk_FUN_1003d6b0
 */
undefined4 __fastcall FUN_1003d6b0(int *param_1)

{
  int local_c;
  
  (*DAT_102e14a0)("SecAmmoVal",thunk_FUN_1003d650);
  (*DAT_102e14a0)("SecAmmoIcon",thunk_FUN_1003d680);
  thunk_FUN_10046ec0(&DAT_102da3c8,(int)param_1);
  param_1[5] = 0;
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    param_1[local_c + 6] = -1;
  }
  (**(code **)(*param_1 + 0x14))();
  return 1;
}

/* 1003d760  FUN_1003d760  (29 bytes)
 * undefined FUN_1003d760(int param_1)
 * called by: thunk_FUN_1003d760
 */
void __fastcall FUN_1003d760(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}

/* 1003d790  FUN_1003d790  (24 bytes)
 * undefined4 FUN_1003d790(void)
 * called by: thunk_FUN_1003d790
 */
undefined4 FUN_1003d790(void)

{
  return 1;
}

/* 1003d7b0  FUN_1003d7b0  (31 bytes)
 * undefined4 FUN_1003d7b0(void)
 * called by: thunk_FUN_1003d7b0
 */
undefined4 FUN_1003d7b0(void)

{
  return 1;
}

/* 1003d8e0  FUN_1003d8e0  (64 bytes)
 * undefined4 FUN_1003d8e0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_1003d8e0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  
  thunk_FUN_10056240(param_3,param_2);
  pcVar1 = thunk_FUN_10056560();
  iVar2 = thunk_FUN_10046590(&DAT_102da3c8,pcVar1);
  *(int *)((int)this + 0x14) = iVar2;
  return 1;
}

/* 1003d930  FUN_1003d930  (217 bytes)
 * undefined4 FUN_1003d930(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_1003d930(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int local_58;
  int local_14;
  int local_10;
  
  thunk_FUN_10056240(param_3,param_2);
  uVar1 = thunk_FUN_10056300();
  if ((-1 < (int)uVar1) && ((int)uVar1 < 4)) {
    uVar2 = thunk_FUN_10056300();
    *(uint *)((int)this + uVar1 * 4 + 0x18) = uVar2;
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
    local_10 = 0;
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      if (*(int *)((int)this + local_14 * 4 + 0x18) < 0) {
        local_58 = 0;
      }
      else {
        local_58 = *(int *)((int)this + local_14 * 4 + 0x18);
      }
      local_10 = local_10 + local_58;
    }
    if (local_10 == 0) {
      *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) & 0xfffffffe;
    }
    else {
      *(undefined4 *)((int)this + 0x28) = 0x43480000;
    }
  }
  return 1;
}

/* 1003da40  FUN_1003da40  (212 bytes)
 * undefined FUN_1003da40(int param_1, int param_2, int param_3)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1003da40(void *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  
  if ((param_1 != 1) || (param_3 != 0)) {
    if ((DAT_102e1238 + -100 <
         (DAT_102da398 + 5) * *(int *)((int)this + 0xc4) + 0x20 + DAT_102da398 * 2) ||
       (0xb < *(int *)((int)this + 0xc4))) {
      *(undefined4 *)((int)this + 0xc4) = 0;
    }
    piVar1 = (int *)((int)this + *(int *)((int)this + 0xc4) * 0x10);
    *(int *)((int)this + 0xc4) = *(int *)((int)this + 0xc4) + 1;
    thunk_FUN_1000cd40("hud_drawhistory_time");
    lVar2 = __ftol();
    _DAT_1028986c = (int)lVar2;
    *piVar1 = param_1;
    piVar1[3] = param_2;
    piVar1[2] = param_3;
    piVar1[1] = (int)((float)_DAT_1028986c + DAT_102da3ec);
  }
  return;
}

/* 1003db50  FUN_1003db50  (231 bytes)
 * undefined FUN_1003db50(int param_1, char * param_2, undefined4 param_3)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1003db50(void *this,int param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (param_1 == 3) {
    if ((DAT_102e1238 + -100 <
         (DAT_102da398 + 5) * *(int *)((int)this + 0xc4) + 0x20 + DAT_102da398 * 2) ||
       (0xb < *(int *)((int)this + 0xc4))) {
      *(undefined4 *)((int)this + 0xc4) = 0;
    }
    puVar2 = (undefined4 *)((int)this + *(int *)((int)this + 0xc4) * 0x10);
    *(int *)((int)this + 0xc4) = *(int *)((int)this + 0xc4) + 1;
    iVar1 = thunk_FUN_10046590(&DAT_102da3c8,param_2);
    if (iVar1 != -1) {
      puVar2[3] = iVar1;
      *puVar2 = 3;
      puVar2[2] = param_3;
      thunk_FUN_1000cd40("hud_drawhistory_time");
      lVar3 = __ftol();
      _DAT_1028986c = (int)lVar3;
      puVar2[1] = (float)_DAT_1028986c + DAT_102da3ec;
    }
  }
  return;
}

/* 1003dc70  FUN_1003dc70  (75 bytes)
 * undefined FUN_1003dc70(int param_1)
 */
void __fastcall FUN_1003dc70(int param_1)

{
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0xb < local_c) {
      *(undefined4 *)(param_1 + 0xc4) = 0;
      return;
    }
    if (*(int *)(param_1 + local_c * 0x10) != 0) break;
    local_c = local_c + 1;
  }
  return;
}

/* 1003dcd0  FUN_1003dcd0  (1245 bytes)
 * undefined4 FUN_1003dcd0(float param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_1003dcd0(void *this,float param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float local_c0;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  int local_54;
  int local_50;
  float local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  float local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int *local_20;
  undefined4 local_1c [4];
  int local_c;
  void *local_8;
  
  local_c = 0;
  local_8 = this;
  do {
    if (0xb < local_c) {
      return 1;
    }
    if (*(int *)((int)local_8 + local_c * 0x10) != 0) {
      if ((float)_DAT_1028986c + DAT_102da3ec <= *(float *)((int)local_8 + local_c * 0x10 + 4)) {
        local_c0 = (float)_DAT_1028986c + DAT_102da3ec;
      }
      else {
        local_c0 = *(float *)((int)local_8 + local_c * 0x10 + 4);
      }
      *(float *)((int)local_8 + local_c * 0x10 + 4) = local_c0;
      fVar1 = *(float *)((int)local_8 + local_c * 0x10 + 4);
      if (fVar1 < param_1 == (fVar1 == param_1)) {
        if (*(int *)((int)local_8 + local_c * 0x10) == 1) {
          local_20 = (int *)thunk_FUN_1003b950(&DAT_102d7008,
                                               *(int *)((int)local_8 + local_c * 0x10 + 0xc),
                                               local_1c);
          thunk_FUN_1003d340(&local_24,&local_28,&local_2c,0xffa000);
          local_30 = (*(float *)((int)local_8 + local_c * 0x10 + 4) - param_1) * 80.0;
          __ftol();
          thunk_FUN_10047e90(&local_24,&local_28,&local_2c);
          local_34 = DAT_102e1238 - ((DAT_102da398 + 5) * local_c + 0x20 + DAT_102da398 * 2);
          local_38 = DAT_102e1234 + -0x18;
          if ((local_20 != (int *)0x0) && (*local_20 != 0)) {
            (*DAT_102e1468)(*local_20,local_24,local_28,local_2c);
            (*DAT_102e1474)(0,local_38,local_34,local_1c);
          }
          thunk_FUN_10047fb0(local_38 + -10,local_34,local_38 + -100,
                             *(undefined4 *)((int)local_8 + local_c * 0x10 + 8),local_24,local_28,
                             local_2c);
        }
        else if (*(int *)((int)local_8 + local_c * 0x10) == 2) {
          local_3c = thunk_FUN_1003d440(&DAT_102d7008,*(int *)((int)local_8 + local_c * 0x10 + 0xc))
          ;
          if (local_3c == 0) {
            return 1;
          }
          thunk_FUN_1003d340(&local_40,&local_44,&local_48,0xffa000);
          iVar2 = thunk_FUN_1003a800(&DAT_102d7008,local_3c);
          if (iVar2 == 0) {
            thunk_FUN_1003d340(&local_40,&local_44,&local_48,0xff1010);
          }
          local_4c = (*(float *)((int)local_8 + local_c * 0x10 + 4) - param_1) * 80.0;
          __ftol();
          thunk_FUN_10047e90(&local_40,&local_44,&local_48);
          local_50 = DAT_102e1238 - ((DAT_102da398 + 5) * local_c + 0x20 + DAT_102da398 * 2);
          local_54 = DAT_102e1234 - (*(int *)(local_3c + 0xc4) - *(int *)(local_3c + 0xc0));
          (*DAT_102e1468)(*(undefined4 *)(local_3c + 0xbc),local_40,local_44,local_48);
          (*DAT_102e1474)(0,local_54,local_50,local_3c + 0xc0);
        }
        else if ((*(int *)((int)local_8 + local_c * 0x10) == 3) &&
                (*(int *)((int)local_8 + local_c * 0x10 + 0xc) != 0)) {
          piVar3 = (int *)thunk_FUN_1003d220(&DAT_102da3c8,
                                             *(int *)((int)local_8 + local_c * 0x10 + 0xc));
          local_70 = *piVar3;
          local_6c = piVar3[1];
          local_68 = piVar3[2];
          local_64 = piVar3[3];
          thunk_FUN_1003d340(&local_58,&local_5c,&local_60,0xffa000);
          __ftol();
          thunk_FUN_10047e90(&local_58,&local_5c,&local_60);
          iVar2 = DAT_102e1238 - ((DAT_102da398 + 5) * local_c + 0x20 + DAT_102da398 * 2);
          iVar5 = DAT_102e1234 - (local_6c - local_70);
          uVar6 = local_58;
          uVar7 = local_5c;
          uVar8 = local_60;
          uVar4 = thunk_FUN_1003d1d0(&DAT_102da3c8,*(int *)((int)local_8 + local_c * 0x10 + 0xc));
          (*DAT_102e1468)(uVar4,uVar6,uVar7,uVar8);
          (*DAT_102e1474)(0,iVar5 + -10,iVar2,&local_70);
        }
      }
      else {
        _memset((void *)((int)local_8 + local_c * 0x10),0,0x10);
        thunk_FUN_1003dc70((int)local_8);
      }
    }
    local_c = local_c + 1;
  } while( true );
}

/* 1003e2f0  FUN_1003e2f0  (38 bytes)
 * undefined FUN_1003e2f0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * called by: thunk_FUN_1003e2f0
 */
void __cdecl FUN_1003e2f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_1003e450(&DAT_102da584,param_1,param_2,param_3);
  return;
}

/* 1003e320  FUN_1003e320  (87 bytes)
 * undefined4 FUN_1003e320(int param_1)
 * called by: thunk_FUN_1003e320
 */
undefined4 __fastcall FUN_1003e320(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  (*DAT_102e14a0)("Battery",thunk_FUN_1003e2f0);
  thunk_FUN_10046ec0(&DAT_102da3c8,param_1);
  return 1;
}

/* 1003e390  FUN_1003e390  (154 bytes)
 * undefined4 FUN_1003e390(int param_1)
 * called by: thunk_FUN_1003e390
 */
undefined4 __fastcall FUN_1003e390(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = thunk_FUN_10046590(&DAT_102da3c8,"suit_empty");
  iVar2 = thunk_FUN_10046590(&DAT_102da3c8,"suit_full");
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  iVar1 = thunk_FUN_1003d220(&DAT_102da3c8,iVar1);
  *(int *)(param_1 + 0x1c) = iVar1;
  iVar1 = thunk_FUN_1003d220(&DAT_102da3c8,iVar2);
  *(int *)(param_1 + 0x20) = iVar1;
  *(int *)(param_1 + 0x2c) =
       *(int *)(*(int *)(param_1 + 0x20) + 0xc) - *(int *)(*(int *)(param_1 + 0x1c) + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
  return 1;
}

/* 1003e450  FUN_1003e450  (95 bytes)
 * undefined4 FUN_1003e450(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 */
undefined4 __thiscall
FUN_1003e450(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  thunk_FUN_10056240(param_3,param_2);
  iVar1 = thunk_FUN_10056370();
  if (iVar1 != *(int *)((int)this + 0x24)) {
    *(undefined4 *)((int)this + 0x28) = 0x42c80000;
    *(int *)((int)this + 0x24) = iVar1;
  }
  return 1;
}

/* 1003e4d0  FUN_1003e4d0  (26 bytes)
 * undefined4 FUN_1003e4d0(void)
 * called by: thunk_FUN_1003e4d0
 */
undefined4 FUN_1003e4d0(void)

{
  return 1;
}

/* 1003e4f0  FUN_1003e4f0  (26 bytes)
 * undefined FUN_1003e4f0(void)
 */
void FUN_1003e4f0(void)

{
  FUN_1003e510();
  FUN_1003e530();
  return;
}

/* 1003e510  FUN_1003e510  (26 bytes)
 * undefined FUN_1003e510(void)
 * called by: FUN_1003e4f0
 */
void FUN_1003e510(void)

{
  thunk_FUN_1003e990((undefined4 *)&DAT_102da3c8);
  return;
}

/* 1003e530  FUN_1003e530  (29 bytes)
 * undefined FUN_1003e530(void)
 * called by: FUN_1003e4f0
 */
void FUN_1003e530(void)

{
  FUN_100bc490(0x1003e560);
  return;
}

/* 1003e560  FUN_1003e560  (26 bytes)
 * undefined FUN_1003e560(void)
 */
void FUN_1003e560(void)

{
  thunk_FUN_10046320((int *)&DAT_102da3c8);
  return;
}

/* 1003e580  FUN_1003e580  (239 bytes)
 * int FUN_1003e580(int hullnumber, float * mins, float * maxs)
 */
int __cdecl FUN_1003e580(int hullnumber,float *mins,float *maxs)

{
  float *pfVar1;
  undefined1 local_50 [12];
  undefined1 local_44 [12];
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  undefined1 local_14 [12];
  int local_8;
  
  local_8 = 0;
  if (hullnumber == 0) {
    pfVar1 = thunk_FUN_10008000(local_14,-0x10,-0x10,-0x24);
    thunk_FUN_10008500(pfVar1);
    pfVar1 = thunk_FUN_10008000(local_20,0x10,0x10,0x24);
    thunk_FUN_10008500(pfVar1);
    local_8 = 1;
  }
  else if (hullnumber == 1) {
    pfVar1 = thunk_FUN_10008000(local_2c,-0x10,-0x10,-0x12);
    thunk_FUN_10008500(pfVar1);
    pfVar1 = thunk_FUN_10008000(local_38,0x10,0x10,0x12);
    thunk_FUN_10008500(pfVar1);
    local_8 = 1;
  }
  else if (hullnumber == 2) {
    pfVar1 = thunk_FUN_10008000(local_44,0,0,0);
    thunk_FUN_10008500(pfVar1);
    pfVar1 = thunk_FUN_10008000(local_50,0,0,0);
    thunk_FUN_10008500(pfVar1);
    local_8 = 1;
  }
  return local_8;
}

/* 1003e6b0  FUN_1003e6b0  (35 bytes)
 * int FUN_1003e6b0(netadr_s * net_from, char * args, char * buffer, int * size)
 */
int FUN_1003e6b0(netadr_s *net_from,char *args,char *buffer,int *size)

{
  *size = 0;
  return 0;
}

/* 1003e6e0  FUN_1003e6e0  (28 bytes)
 * void FUN_1003e6e0(playermove_s * ppmove)
 */
void __cdecl FUN_1003e6e0(playermove_s *ppmove)

{
  thunk_FUN_100602f0(ppmove);
  return;
}

/* 1003e710  FUN_1003e710  (28 bytes)
 * char FUN_1003e710(char * name)
 */
char __cdecl FUN_1003e710(char *name)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_10058b50((byte_conflict *)name);
  return (char)uVar1;
}

/* 1003e740  FUN_1003e740  (32 bytes)
 * void FUN_1003e740(playermove_s * ppmove, int server)
 */
void __cdecl FUN_1003e740(playermove_s *ppmove,int server)

{
  thunk_FUN_100601a0((int)ppmove,server);
  return;
}

/* 1003e770  FUN_1003e770  (73 bytes)
 * int FUN_1003e770(cl_enginefunc_t * pEnginefuncs, int iVersion)
 */
int __cdecl FUN_1003e770(cl_enginefunc_t *pEnginefuncs,int iVersion)

{
  int iVar1;
  cl_enginefunc_t *pcVar2;
  undefined4 *puVar3;
  
  pcVar2 = pEnginefuncs;
  puVar3 = &DAT_102e1458;
  for (iVar1 = 0x62; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = pcVar2->pfnSPR_Load;
    pcVar2 = (cl_enginefunc_t *)&pcVar2->pfnSPR_Frames;
    puVar3 = puVar3 + 1;
  }
  if (iVersion == 7) {
    FUN_100bc090(&DAT_102e1458,&pEnginefuncs->pfnSPR_Load,0x188);
    thunk_FUN_10043230();
  }
  return (uint)(iVersion == 7);
}

/* 1003e7d0  FUN_1003e7d0  (36 bytes)
 * int FUN_1003e7d0(void)
 */
int FUN_1003e7d0(void)

{
  thunk_FUN_10046610(&DAT_102da3c8);
  thunk_FUN_1009fa00();
  return 1;
}

/* 1003e800  FUN_1003e800  (41 bytes)
 * void FUN_1003e800(void)
 */
void FUN_1003e800(void)

{
  thunk_FUN_10051b80();
  thunk_FUN_10045d50();
  thunk_FUN_100a1600();
  return;
}

/* 1003e840  FUN_1003e840  (39 bytes)
 * int FUN_1003e840(float flTime, int intermission)
 */
int __cdecl FUN_1003e840(float flTime,int intermission)

{
  thunk_FUN_10047b70(&DAT_102da3c8,flTime,intermission);
  return 1;
}

/* 1003e870  FUN_1003e870  (39 bytes)
 * int FUN_1003e870(client_data_t * cdata, float flTime)
 */
int __cdecl FUN_1003e870(client_data_t *cdata,float flTime)

{
  int iVar1;
  
  thunk_FUN_100535b0();
  iVar1 = thunk_FUN_1004e060(&DAT_102da3c8,(int)cdata);
  return iVar1;
}

/* 1003e8a0  FUN_1003e8a0  (31 bytes)
 * void FUN_1003e8a0(void)
 */
void FUN_1003e8a0(void)

{
  thunk_FUN_10046610(&DAT_102da3c8);
  return;
}

/* 1003e8d0  FUN_1003e8d0  (52 bytes)
 * void FUN_1003e8d0(double time)
 */
void __cdecl FUN_1003e8d0(double time)

{
  undefined *this;
  
  thunk_FUN_1004a090(time._0_4_,time._4_4_);
  this = thunk_FUN_100361a0();
  thunk_FUN_10037360(this,time);
  return;
}

/* 1003e920  FUN_1003e920  (36 bytes)
 * void FUN_1003e920(int entindex, qboolean bTalking)
 */
void __cdecl FUN_1003e920(int entindex,qboolean bTalking)

{
  undefined *this;
  
  this = thunk_FUN_100361a0();
  thunk_FUN_10037980(this,entindex,bTalking);
  return;
}

/* 1003e950  FUN_1003e950  (42 bytes)
 * void FUN_1003e950(int iSize, void * pbuf)
 */
void __cdecl FUN_1003e950(int iSize,void *pbuf)

{
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  thunk_FUN_1004af10(&DAT_102daaa0,(char)iSize,pbuf,in_stack_0000000c,in_stack_00000010);
  return;
}

/* 1003e990  FUN_1003e990  (403 bytes)
 * undefined4 * FUN_1003e990(undefined4 * param_1)
 */
undefined4 * __fastcall FUN_1003e990(undefined4 *param_1)

{
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e584d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[4] = 0;
  thunk_FUN_10007fe0(param_1 + 0xe);
  thunk_FUN_10007fe0(param_1 + 0x11);
  thunk_FUN_1003eb90(param_1 + 0x1f);
  local_8 = 0;
  thunk_FUN_1003ebf0(param_1 + 0x29);
  local_8._0_1_ = 1;
  thunk_FUN_1003ec50(param_1 + 0x69);
  local_8._0_1_ = 2;
  thunk_FUN_1003ecb0(param_1 + 0x6f);
  local_8._0_1_ = 3;
  thunk_FUN_1003ed10(param_1 + 0x7b);
  local_8._0_1_ = 4;
  thunk_FUN_1003ed70(param_1 + 0x82);
  local_8._0_1_ = 5;
  thunk_FUN_1003edd0(param_1 + 0x92);
  local_8._0_1_ = 6;
  thunk_FUN_1003ee30(param_1 + 0xcc);
  local_8._0_1_ = 7;
  thunk_FUN_1003ee90(param_1 + 0x15c);
  local_8._0_1_ = 8;
  thunk_FUN_1003eef0(param_1 + 0x162);
  local_8._0_1_ = 9;
  thunk_FUN_1003ef50(param_1 + 0x167);
  local_8._0_1_ = 10;
  thunk_FUN_1003efb0(param_1 + 0x170);
  local_8._0_1_ = 0xb;
  thunk_FUN_1003f010(param_1 + 0x17b);
  local_8._0_1_ = 0xc;
  thunk_FUN_1003f070(param_1 + 0x180);
  local_8._0_1_ = 0xd;
  thunk_FUN_1003f0d0(param_1 + 0x1b6);
  local_8._0_1_ = 0xe;
  thunk_FUN_1003f1c0(param_1 + 0x4e2);
  local_8 = CONCAT31(local_8._1_3_,0xf);
  thunk_FUN_1003f290(param_1 + 0x17a1);
  ExceptionList = local_10;
  return param_1;
}

/* 1003eb90  FUN_1003eb90  (39 bytes)
 * undefined4 * FUN_1003eb90(undefined4 * param_1)
 */
undefined4 * __fastcall FUN_1003eb90(undefined4 *param_1)

{
  thunk_FUN_100393d0(param_1);
  *param_1 = &PTR_thunk_FUN_1003f320_1026e340;
  return param_1;
}

/* 1003ebc0  FUN_1003ebc0  (27 bytes)
 * undefined FUN_1003ebc0(undefined4 * param_1)
 */
void __fastcall FUN_1003ebc0(undefined4 *param_1)

{
  thunk_FUN_10037840(param_1);
  return;
}

/* 1003ebf0  FUN_1003ebf0  (39 bytes)
 * undefined4 * FUN_1003ebf0(undefined4 * param_1)
 */
undefined4 * __fastcall FUN_1003ebf0(undefined4 *param_1)

{
  thunk_FUN_100393d0(param_1);
  *param_1 = &PTR_thunk_FUN_1003f370_1026e368;
  return param_1;
}

/* 1003ec20  FUN_1003ec20  (27 bytes)
 * undefined FUN_1003ec20(undefined4 * param_1)
 */
void __fastcall FUN_1003ec20(undefined4 *param_1)

{
  thunk_FUN_10037840(param_1);
  return;
}

/* 1003ec50  FUN_1003ec50  (39 bytes)
 * undefined4 * FUN_1003ec50(undefined4 * param_1)
 */
undefined4 * __fastcall FUN_1003ec50(undefined4 *param_1)

{
  thunk_FUN_100393d0(param_1);
  *param_1 = &PTR_thunk_FUN_1003f3c0_1026e390;
  return param_1;
}

/* 1003ec80  FUN_1003ec80  (27 bytes)
 * undefined FUN_1003ec80(undefined4 * param_1)
 */
void __fastcall FUN_1003ec80(undefined4 *param_1)

{
  thunk_FUN_10037840(param_1);
  return;
}

/* 1003ecb0  FUN_1003ecb0  (39 bytes)
 * undefined4 * FUN_1003ecb0(undefined4 * param_1)
 */
undefined4 * __fastcall FUN_1003ecb0(undefined4 *param_1)

{
  thunk_FUN_100393d0(param_1);
  *param_1 = &PTR_thunk_FUN_1003f410_1026e3b8;
  return param_1;
}

/* 1003ece0  FUN_1003ece0  (27 bytes)
 * undefined FUN_1003ece0(undefined4 * param_1)
 */
void __fastcall FUN_1003ece0(undefined4 *param_1)

{
  thunk_FUN_10037840(param_1);
  return;
}

/* 1003ed10  FUN_1003ed10  (39 bytes)
 * undefined4 * FUN_1003ed10(undefined4 * param_1)
 */
undefined4 * __fastcall FUN_1003ed10(undefined4 *param_1)

{
  thunk_FUN_100393d0(param_1);
  *param_1 = &PTR_thunk_FUN_1003f460_1026e3e0;
  return param_1;
}

/* 1003ed40  FUN_1003ed40  (27 bytes)
 * undefined FUN_1003ed40(undefined4 * param_1)
 */
void __fastcall FUN_1003ed40(undefined4 *param_1)

{
  thunk_FUN_10037840(param_1);
  return;
}

/* 1003ed70  FUN_1003ed70  (39 bytes)
 * undefined4 * FUN_1003ed70(undefined4 * param_1)
 */
undefined4 * __fastcall FUN_1003ed70(undefined4 *param_1)

{
  thunk_FUN_100393d0(param_1);
  *param_1 = &PTR_thunk_FUN_1003f4b0_1026e408;
  return param_1;
}

/* 1003eda0  FUN_1003eda0  (27 bytes)
 * undefined FUN_1003eda0(undefined4 * param_1)
 */
void __fastcall FUN_1003eda0(undefined4 *param_1)

{
  thunk_FUN_10037840(param_1);
  return;
}

/* 1003edd0  FUN_1003edd0  (39 bytes)
 * undefined4 * FUN_1003edd0(undefined4 * param_1)
 */
undefined4 * __fastcall FUN_1003edd0(undefined4 *param_1)

{
  thunk_FUN_100393d0(param_1);
  *param_1 = &PTR_thunk_FUN_1003f500_1026e430;
  return param_1;
}

/* 1003ee00  FUN_1003ee00  (27 bytes)
 * undefined FUN_1003ee00(undefined4 * param_1)
 */
void __fastcall FUN_1003ee00(undefined4 *param_1)

{
  thunk_FUN_10037840(param_1);
  return;
}

/* 1003ee30  FUN_1003ee30  (39 bytes)
 * undefined4 * FUN_1003ee30(undefined4 * param_1)
 */
undefined4 * __fastcall FUN_1003ee30(undefined4 *param_1)

{
  thunk_FUN_100393d0(param_1);
  *param_1 = &PTR_thunk_FUN_1003f550_1026e458;
  return param_1;
}

/* 1003ee60  FUN_1003ee60  (27 bytes)
 * undefined FUN_1003ee60(undefined4 * param_1)
 */
void __fastcall FUN_1003ee60(undefined4 *param_1)

{
  thunk_FUN_10037840(param_1);
  return;
}

/* 1003ee90  FUN_1003ee90  (39 bytes)
 * undefined4 * FUN_1003ee90(undefined4 * param_1)
 */
undefined4 * __fastcall FUN_1003ee90(undefined4 *param_1)

{
  thunk_FUN_100393d0(param_1);
  *param_1 = &PTR_thunk_FUN_1003f5a0_1026e480;
  return param_1;
}

/* 1003eec0  FUN_1003eec0  (27 bytes)
 * undefined FUN_1003eec0(undefined4 * param_1)
 */
void __fastcall FUN_1003eec0(undefined4 *param_1)

{
  thunk_FUN_10037840(param_1);
  return;
}

/* 1003eef0  FUN_1003eef0  (39 bytes)
 * undefined4 * FUN_1003eef0(undefined4 * param_1)
 */
undefined4 * __fastcall FUN_1003eef0(undefined4 *param_1)

{
  thunk_FUN_100393d0(param_1);
  *param_1 = &PTR_thunk_FUN_1003f5f0_1026e4a8;
  return param_1;
}

/* 1003ef20  FUN_1003ef20  (27 bytes)
 * undefined FUN_1003ef20(undefined4 * param_1)
 */
void __fastcall FUN_1003ef20(undefined4 *param_1)

{
  thunk_FUN_10037840(param_1);
  return;
}

/* 1003ef50  FUN_1003ef50  (39 bytes)
 * undefined4 * FUN_1003ef50(undefined4 * param_1)
 */
undefined4 * __fastcall FUN_1003ef50(undefined4 *param_1)

{
  thunk_FUN_100393d0(param_1);
  *param_1 = &PTR_thunk_FUN_1003f640_1026e4d0;
  return param_1;
}

/* 1003ef80  FUN_1003ef80  (27 bytes)
 * undefined FUN_1003ef80(undefined4 * param_1)
 */
void __fastcall FUN_1003ef80(undefined4 *param_1)

{
  thunk_FUN_10037840(param_1);
  return;
}

/* 1003efb0  FUN_1003efb0  (39 bytes)
 * undefined4 * FUN_1003efb0(undefined4 * param_1)
 */
undefined4 * __fastcall FUN_1003efb0(undefined4 *param_1)

{
  thunk_FUN_100393d0(param_1);
  *param_1 = &PTR_thunk_FUN_1003f690_1026e4f8;
  return param_1;
}

/* 1003efe0  FUN_1003efe0  (27 bytes)
 * undefined FUN_1003efe0(undefined4 * param_1)
 */
void __fastcall FUN_1003efe0(undefined4 *param_1)

{
  thunk_FUN_10037840(param_1);
  return;
}

/* 1003f010  FUN_1003f010  (39 bytes)
 * undefined4 * FUN_1003f010(undefined4 * param_1)
 */
undefined4 * __fastcall FUN_1003f010(undefined4 *param_1)

{
  thunk_FUN_100393d0(param_1);
  *param_1 = &PTR_thunk_FUN_1003f6e0_1026e520;
  return param_1;
}

/* 1003f040  FUN_1003f040  (27 bytes)
 * undefined FUN_1003f040(undefined4 * param_1)
 */
void __fastcall FUN_1003f040(undefined4 *param_1)

{
  thunk_FUN_10037840(param_1);
  return;
}

/* 1003f070  FUN_1003f070  (39 bytes)
 * undefined4 * FUN_1003f070(undefined4 * param_1)
 */
undefined4 * __fastcall FUN_1003f070(undefined4 *param_1)

{
  thunk_FUN_100393d0(param_1);
  *param_1 = &PTR_thunk_FUN_1003f730_1026e548;
  return param_1;
}

/* 1003f0a0  FUN_1003f0a0  (27 bytes)
 * undefined FUN_1003f0a0(undefined4 * param_1)
 */
void __fastcall FUN_1003f0a0(undefined4 *param_1)

{
  thunk_FUN_10037840(param_1);
  return;
}

/* 1003f0d0  FUN_1003f0d0  (146 bytes)
 * undefined4 * FUN_1003f0d0(undefined4 * param_1)
 */
undefined4 * __fastcall FUN_1003f0d0(undefined4 *param_1)

{
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e58a9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  thunk_FUN_100393d0(param_1);
  local_8 = 0;
  thunk_FUN_1003f7d0(param_1 + 8);
  thunk_FUN_10007fe0(param_1 + 0x256);
  thunk_FUN_10007fe0(param_1 + 0x259);
  thunk_FUN_1000cb80(param_1 + 0x25d,0xc,0x40,thunk_FUN_10007fe0);
  *param_1 = &PTR_thunk_FUN_1003f780_1026e570;
  ExceptionList = local_10;
  return param_1;
}

/* 1003f190  FUN_1003f190  (27 bytes)
 * undefined FUN_1003f190(undefined4 * param_1)
 */
void __fastcall FUN_1003f190(undefined4 *param_1)

{
  thunk_FUN_10037840(param_1);
  return;
}

/* 1003f1c0  FUN_1003f1c0  (117 bytes)
 * undefined4 * FUN_1003f1c0(undefined4 * param_1)
 */
undefined4 * __fastcall FUN_1003f1c0(undefined4 *param_1)

{
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e58c9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  thunk_FUN_100393d0(param_1);
  local_8 = 0;
  thunk_FUN_10007fe0(param_1 + 7);
  thunk_FUN_10007fe0(param_1 + 10);
  thunk_FUN_10007fe0(param_1 + 0xe);
  *param_1 = &PTR_thunk_FUN_1003f800_1026e598;
  ExceptionList = local_10;
  return param_1;
}

