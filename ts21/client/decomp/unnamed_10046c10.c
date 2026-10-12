/* client.dll - unnamed_10046c10 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 10046c10  FUN_10046c10  (48 bytes)
 * undefined4 FUN_10046c10(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 */
undefined4 __cdecl
FUN_10046c10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  thunk_FUN_10056240(param_4,param_3);
  uVar1 = thunk_FUN_10056300();
  *(uint *)(param_1 + 8) = uVar1;
  return 1;
}

/* 10046c50  FUN_10046c50  (277 bytes)
 * undefined FUN_10046c50(char * param_1, char * param_2)
 */
void __cdecl FUN_10046c50(char *param_1,char *param_2)

{
  size_t sVar1;
  size_t local_10;
  size_t local_c;
  
  local_c = _strlen(param_1);
  local_10 = local_c;
  do {
    sVar1 = local_10;
    local_10 = sVar1 - 1;
    if (((local_10 == 0) || (param_1[local_10] == '.')) || (param_1[local_10] == '/')) break;
  } while (param_1[local_10] != '\\');
  if (param_1[local_10] == '.') {
    local_10 = sVar1 - 2;
  }
  else {
    local_10 = local_c - 1;
  }
  do {
    sVar1 = local_c;
    local_c = sVar1 - 1;
    if (((int)local_c < 0) || (param_1[local_c] == '/')) break;
  } while (param_1[local_c] != '\\');
  if ((param_1[local_c] != '/') && (param_1[local_c] != '\\')) {
    local_c = 0;
    sVar1 = local_c;
  }
  local_c = sVar1;
  sVar1 = (local_10 - local_c) + 1;
  _strncpy(param_2,param_1 + local_c,sVar1);
  param_2[sVar1] = '\0';
  return;
}

/* 10046db0  FUN_10046db0  (95 bytes)
 * undefined4 FUN_10046db0(byte.conflict * param_1)
 */
undefined4 __cdecl FUN_10046db0(byte_conflict *param_1)

{
  uint uVar1;
  byte_conflict local_408 [1024];
  char *local_8;
  
  local_8 = (char *)(*DAT_102e1574)();
  if ((local_8 != (char *)0x0) && (*local_8 != '\0')) {
    thunk_FUN_10046c50(local_8,(char *)local_408);
    uVar1 = FUN_100db540(local_408,param_1);
    if (uVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

/* 10046e30  FUN_10046e30  (105 bytes)
 * float10 FUN_10046e30(void)
 */
float10 FUN_10046e30(void)

{
  int iVar1;
  float local_6c [25];
  undefined4 local_8;
  
  iVar1 = (*(code *)*DAT_102e15ac)();
  if (iVar1 != 0) {
    local_6c[0] = DAT_102e7f1c;
    local_8 = 4;
    thunk_FUN_10040c90(1,4,local_6c);
  }
  iVar1 = (*(code *)DAT_102e15ac[1])();
  if (iVar1 != 0) {
    DAT_102e7f1c = DAT_102e3138;
  }
  return (float10)DAT_102e7f1c;
}

/* 10046ec0  FUN_10046ec0  (129 bytes)
 * undefined FUN_10046ec0(int param_1)
 */
void __thiscall FUN_10046ec0(void *this,int param_1)

{
  int *_Dst;
  int local_10;
  
  if ((param_1 != 0) && (_Dst = _malloc(8), _Dst != (int *)0x0)) {
    _memset(_Dst,0,8);
    *_Dst = param_1;
    if (*(int *)this == 0) {
      *(int **)this = _Dst;
    }
    else {
      for (local_10 = *(int *)this; *(int *)(local_10 + 4) != 0; local_10 = *(int *)(local_10 + 4))
      {
      }
      *(int **)(local_10 + 4) = _Dst;
    }
  }
  return;
}

/* 10046f70  FUN_10046f70  (25 bytes)
 * float10 FUN_10046f70(int param_1)
 */
float10 __fastcall FUN_10046f70(int param_1)

{
  return (float10)*(float *)(param_1 + 0x18);
}

/* 10046f90  FUN_10046f90  (28 bytes)
 * undefined FUN_10046f90(undefined4 * param_1)
 */
void __fastcall FUN_10046f90(undefined4 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10046fc0_1026e8bc;
  return;
}

/* 10046fc0  FUN_10046fc0  (54 bytes)
 * undefined4 * FUN_10046fc0(uint param_1)
 * called by: thunk_FUN_10046fc0
 */
undefined4 * __thiscall FUN_10046fc0(void *this,uint param_1)

{
  thunk_FUN_10046f90(this);
  if ((param_1 & 1) != 0) {
    FUN_100bbb10(this);
  }
  return this;
}

/* 10047010  FUN_10047010  (362 bytes)
 * Panel * FUN_10047010(Panel * param_1)
 */
Panel * __thiscall FUN_10047010(void *this,Panel *param_1)

{
  vgui::Panel::Panel(this,param_1);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined2 *)((int)this + 200) = *(undefined2 *)(param_1 + 200);
  *(undefined4 *)((int)this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)((int)this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)((int)this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)((int)this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)((int)this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)((int)this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)((int)this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)((int)this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)((int)this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(Panel *)((int)this + 0xf0) = param_1[0xf0];
  *(Panel *)((int)this + 0xf1) = param_1[0xf1];
  *(Panel *)((int)this + 0xf2) = param_1[0xf2];
  *(undefined4 *)((int)this + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)((int)this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)((int)this + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  *(Panel *)((int)this + 0x100) = param_1[0x100];
  *(undefined ***)this = &vgui::TablePanel::_vftable_;
  return this;
}

/* 100471e0  FUN_100471e0  (471 bytes)
 * Panel * FUN_100471e0(Panel * param_1)
 */
Panel * __thiscall FUN_100471e0(void *this,Panel *param_1)

{
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  vgui::Panel::operator=(this,param_1);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  for (local_c = 0; local_c < 2; local_c = local_c + 1) {
    *(Panel *)((int)this + local_c + 200) = param_1[local_c + 200];
  }
  *(undefined4 *)((int)this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)((int)this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    *(undefined4 *)((int)this + local_10 * 4 + 0xd4) =
         *(undefined4 *)(param_1 + local_10 * 4 + 0xd4);
  }
  for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
    *(undefined4 *)((int)this + local_14 * 4 + 0xdc) =
         *(undefined4 *)(param_1 + local_14 * 4 + 0xdc);
  }
  for (local_18 = 0; local_18 < 2; local_18 = local_18 + 1) {
    *(undefined4 *)((int)this + local_18 * 4 + 0xe4) =
         *(undefined4 *)(param_1 + local_18 * 4 + 0xe4);
  }
  *(undefined4 *)((int)this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(Panel *)((int)this + 0xf0) = param_1[0xf0];
  *(Panel *)((int)this + 0xf1) = param_1[0xf1];
  *(Panel *)((int)this + 0xf2) = param_1[0xf2];
  *(undefined4 *)((int)this + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  for (local_1c = 0; local_1c < 2; local_1c = local_1c + 1) {
    *(undefined4 *)((int)this + local_1c * 4 + 0xf8) =
         *(undefined4 *)(param_1 + local_1c * 4 + 0xf8);
  }
  *(Panel *)((int)this + 0x100) = param_1[0x100];
  return this;
}

/* 10047430  FUN_10047430  (252 bytes)
 * Panel * FUN_10047430(Panel * param_1)
 */
Panel * __thiscall FUN_10047430(void *this,Panel *param_1)

{
  vgui::Panel::Panel(this,param_1);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)((int)this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)((int)this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)((int)this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)((int)this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)((int)this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)((int)this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)((int)this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)((int)this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(Panel *)((int)this + 0xe8) = param_1[0xe8];
  *(undefined4 *)((int)this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)((int)this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)((int)this + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined ***)this = &vgui::HeaderPanel::_vftable_;
  return this;
}

/* 10047570  FUN_10047570  (243 bytes)
 * Panel * FUN_10047570(Panel * param_1)
 */
Panel * __thiscall FUN_10047570(void *this,Panel *param_1)

{
  vgui::Panel::operator=(this,param_1);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)((int)this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)((int)this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)((int)this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)((int)this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)((int)this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)((int)this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)((int)this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)((int)this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(Panel *)((int)this + 0xe8) = param_1[0xe8];
  *(undefined4 *)((int)this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)((int)this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)((int)this + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  return this;
}

/* 100476a0  FUN_100476a0  (189 bytes)
 * Panel * FUN_100476a0(Panel * param_1)
 */
Panel * __thiscall FUN_100476a0(void *this,Panel *param_1)

{
  vgui::Panel::Panel(this,param_1);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)((int)this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)((int)this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)((int)this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)((int)this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)((int)this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)((int)this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)((int)this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)((int)this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined ***)this = &vgui::TextGrid::_vftable_;
  return this;
}

/* 10047790  FUN_10047790  (262 bytes)
 * Panel * FUN_10047790(Panel * param_1)
 */
Panel * __thiscall FUN_10047790(void *this,Panel *param_1)

{
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  vgui::Panel::operator=(this,param_1);
  for (local_c = 0; local_c < 2; local_c = local_c + 1) {
    *(undefined4 *)((int)this + local_c * 4 + 0xbc) = *(undefined4 *)(param_1 + local_c * 4 + 0xbc);
  }
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    *(undefined4 *)((int)this + local_10 * 4 + 0xc4) =
         *(undefined4 *)(param_1 + local_10 * 4 + 0xc4);
  }
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    *(undefined4 *)((int)this + local_14 * 4 + 0xd0) =
         *(undefined4 *)(param_1 + local_14 * 4 + 0xd0);
  }
  *(undefined4 *)((int)this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  for (local_18 = 0; local_18 < 2; local_18 = local_18 + 1) {
    *(undefined4 *)((int)this + local_18 * 4 + 0xe0) =
         *(undefined4 *)(param_1 + local_18 * 4 + 0xe0);
  }
  return this;
}

/* 100478e0  FUN_100478e0  (91 bytes)
 * undefined4 FUN_100478e0(undefined4 * param_1)
 */
undefined4 __cdecl FUN_100478e0(undefined4 *param_1)

{
  int *local_8;
  
  for (local_8 = (int *)*param_1; local_8 != (int *)0x0; local_8 = (int *)local_8[1]) {
    if (*local_8 != 0) {
      (**(code **)(*(int *)*local_8 + 0x14))();
    }
  }
  param_1[6] = 0;
  param_1[7] = 0;
  return 1;
}

/* 10047960  FUN_10047960  (86 bytes)
 * undefined FUN_10047960(undefined4 * param_1)
 */
void __cdecl FUN_10047960(undefined4 *param_1)

{
  int *local_8;
  
  for (local_8 = (int *)*param_1; local_8 != (int *)0x0; local_8 = (int *)local_8[1]) {
    if (*local_8 != 0) {
      (**(code **)(*(int *)*local_8 + 0x18))();
    }
  }
  DAT_1028fca8 = 0;
  DAT_1028fcac = 0;
  return;
}

/* 100479d0  FUN_100479d0  (48 bytes)
 * undefined4 FUN_100479d0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 */
undefined4 __cdecl
FUN_100479d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  thunk_FUN_10056240(param_4,param_3);
  uVar1 = thunk_FUN_10056300();
  *(uint *)(param_1 + 0x5c) = uVar1;
  return 1;
}

/* 10047a10  FUN_10047a10  (158 bytes)
 * undefined4 FUN_10047a10(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 */
undefined4 __cdecl
FUN_10047a10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  float10 fVar2;
  int local_1c;
  undefined1 local_18 [12];
  uint local_c;
  uint local_8;
  
  thunk_FUN_10007fe0(local_18);
  thunk_FUN_10056240(param_4,param_3);
  local_8 = thunk_FUN_10056300();
  local_c = thunk_FUN_10056300();
  for (local_1c = 0; local_1c < 3; local_1c = local_1c + 1) {
    fVar2 = (float10)thunk_FUN_100565f0();
    iVar1 = thunk_FUN_10008500(local_18);
    *(float *)(iVar1 + local_1c * 4) = (float)fVar2;
  }
  return 1;
}

/* 10047ae0  FUN_10047ae0  (109 bytes)
 * undefined4 FUN_10047ae0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 */
undefined4 __cdecl
FUN_10047ae0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  thunk_FUN_10056240(param_4,param_3);
  uVar1 = thunk_FUN_10056300();
  *(uint *)(param_1 + 0x1c) = uVar1;
  if (*(int *)(param_1 + 0x1c) == 0) {
    thunk_FUN_10061320((void *)(param_1 + 0x600),(byte_conflict *)"dmg_concuss");
  }
  else {
    thunk_FUN_10061120((void *)(param_1 + 0x600),(uint *)"dmg_concuss",0xff,0xa0,0);
  }
  return 1;
}

/* 10047b70  FUN_10047b70  (631 bytes)
 * undefined4 FUN_10047b70(float param_1, int param_2)
 */
undefined4 __thiscall FUN_10047b70(void *this,float param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  longlong lVar5;
  ulonglong uVar6;
  int *local_c;
  
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((int)this + 0x24);
  *(float *)((int)this + 0x24) = param_1;
  *(double *)((int)this + 0x30) =
       (double)(*(float *)((int)this + 0x24) - *(float *)((int)this + 0x28));
  if (*(double *)((int)this + 0x30) < 0.0) {
    *(undefined4 *)((int)this + 0x30) = 0;
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  if (DAT_102e15e0 != (void *)0x0) {
    if ((*(int *)((int)this + 0x7084) == 0) || (param_2 != 0)) {
      if ((*(int *)((int)this + 0x7084) == 0) && (param_2 != 0)) {
        thunk_FUN_100aedd0(DAT_102e15e0);
        thunk_FUN_100b0010((int)DAT_102e15e0);
        thunk_FUN_100aee40((int)DAT_102e15e0);
        fVar4 = (float10)thunk_FUN_1000cd40("hud_takesshots");
        if (fVar4 != (float10)0.0) {
          lVar5 = __ftol();
          DAT_102e7f24 = (int)lVar5;
        }
      }
    }
    else {
      *(undefined4 *)((int)this + 0x7084) = 0;
      thunk_FUN_100aedd0(DAT_102e15e0);
      thunk_FUN_100aeee0((int)DAT_102e15e0);
    }
  }
  if ((DAT_102e7f24 != 0) && ((float)DAT_102e7f24 < param_1)) {
    (*DAT_102e14a8)("snapshot\n");
    DAT_102e7f24 = 0;
  }
  *(int *)((int)this + 0x7084) = param_2;
  for (local_c = *(int **)this; local_c != (int *)0x0; local_c = (int *)local_c[1]) {
    if (param_2 == 0) {
      if (((*(uint *)(*local_c + 0x10) & 1) != 0) && ((*(uint *)((int)this + 0x54) & 4) == 0)) {
        (**(code **)(*(int *)*local_c + 0xc))(param_1);
      }
    }
    else if ((*(uint *)(*local_c + 0x10) & 2) != 0) {
      (**(code **)(*(int *)*local_c + 0xc))(param_1);
    }
  }
  if (*(int *)((int)this + 8) != 0) {
    if (*(int *)((int)this + 4) == 0) {
      uVar1 = thunk_FUN_10098390("sprites/%d_logo.spr");
      *(undefined4 *)((int)this + 4) = uVar1;
    }
    (*DAT_102e1468)(*(undefined4 *)((int)this + 4),0xfa,0xfa,0xfa);
    iVar2 = thunk_FUN_10045330(*(undefined4 *)((int)this + 4),0);
    iVar2 = DAT_102e1234 - iVar2;
    iVar3 = thunk_FUN_10045300(*(undefined4 *)((int)this + 4),0);
    uVar6 = __ftol();
    (*DAT_102e1474)(*(int *)(&DAT_1028a130 +
                            (int)((longlong)
                                  ((ulonglong)(uint)((int)uVar6 >> 0x1f) << 0x20 |
                                  uVar6 & 0xffffffff) % 0x38) * 4) + -1,iVar2,iVar3 / 2,0);
  }
  return 1;
}

/* 10047e90  FUN_10047e90  (82 bytes)
 * undefined FUN_10047e90(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
 */
void __cdecl FUN_10047e90(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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

/* 10047f00  FUN_10047f00  (134 bytes)
 * int FUN_10047f00(int param_1, undefined4 param_2, int param_3, char * param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 */
int FUN_10047f00(int param_1,undefined4 param_2,int param_3,char *param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  short sVar1;
  
  while (((*param_4 != '\0' && (*param_4 != '\n')) &&
         (sVar1 = *(short *)(&DAT_102e1244 + *param_4 * 2), param_1 + sVar1 <= param_3))) {
    thunk_FUN_10048180(param_1,param_2,(int)*param_4,param_5,param_6,param_7);
    param_4 = param_4 + 1;
    param_1 = param_1 + sVar1;
  }
  return param_1;
}

/* 10047fb0  FUN_10047fb0  (78 bytes)
 * undefined FUN_10047fb0(int param_1, undefined4 param_2, int param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 */
void FUN_10047fb0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  char local_28 [36];
  
  FUN_100bb6e0(local_28,"%d");
  thunk_FUN_10048020(param_1,param_2,param_3,local_28,param_5,param_6,param_7);
  return;
}

/* 10048020  FUN_10048020  (162 bytes)
 * int FUN_10048020(int param_1, undefined4 param_2, int param_3, char * param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 */
int FUN_10048020(int param_1,undefined4 param_2,int param_3,char *param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  char *local_c;
  
  for (local_c = param_4; *local_c != '\0'; local_c = local_c + 1) {
  }
  while ((local_c = local_c + -1, local_c != param_4 + -1 &&
         (iVar1 = param_1 - *(short *)(&DAT_102e1244 + *local_c * 2), param_3 <= iVar1))) {
    thunk_FUN_10048180(iVar1,param_2,(int)*local_c,param_5,param_6,param_7);
    param_1 = iVar1;
  }
  return param_1;
}

/* 100480f0  FUN_100480f0  (113 bytes)
 * undefined4 FUN_100480f0(int param_1, uint param_2)
 */
undefined4 FUN_100480f0(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_2 & 4) == 0) {
    if ((param_2 & 2) == 0) {
      if (param_1 < 1) {
        if ((param_2 & 1) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = 1;
        }
      }
      else if (param_1 < 10) {
        uVar1 = 1;
      }
      else if (param_1 < 100) {
        uVar1 = 2;
      }
      else {
        uVar1 = 3;
      }
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}

/* 10048180  FUN_10048180  (49 bytes)
 * undefined FUN_10048180(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 */
void __cdecl
FUN_10048180(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  (*DAT_102e14c0)(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

/* 100481c0  FUN_100481c0  (40 bytes)
 * undefined FUN_100481c0(int * param_1)
 * called by: thunk_FUN_100481c0
 */
void __cdecl FUN_100481c0(int *param_1)

{
  if (DAT_102e802c != (void *)0x0) {
    thunk_FUN_10048300(DAT_102e802c,param_1);
  }
  return;
}

/* 10048200  FUN_10048200  (40 bytes)
 * undefined FUN_10048200(int * param_1)
 * called by: thunk_FUN_10048200
 */
void __cdecl FUN_10048200(int *param_1)

{
  if (DAT_102e802c != (void *)0x0) {
    thunk_FUN_10048410(DAT_102e802c,param_1);
  }
  return;
}

/* 10048240  FUN_10048240  (40 bytes)
 * undefined FUN_10048240(int * param_1)
 * called by: thunk_FUN_10048240
 */
void __cdecl FUN_10048240(int *param_1)

{
  if (DAT_102e802c != 0) {
    thunk_FUN_10048620(param_1);
  }
  return;
}

/* 10048280  FUN_10048280  (40 bytes)
 * undefined FUN_10048280(int * param_1)
 * called by: thunk_FUN_10048280
 */
void __cdecl FUN_10048280(int *param_1)

{
  if (DAT_102e802c != 0) {
    thunk_FUN_100486a0(param_1);
  }
  return;
}

/* 100482c0  FUN_100482c0  (40 bytes)
 * undefined FUN_100482c0(int * param_1)
 * called by: thunk_FUN_100482c0
 */
void __cdecl FUN_100482c0(int *param_1)

{
  if (DAT_102e802c != 0) {
    thunk_FUN_10048710(param_1);
  }
  return;
}

/* 10048300  FUN_10048300  (212 bytes)
 * undefined FUN_10048300(int * param_1)
 */
void __thiscall FUN_10048300(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_c;
  
  if ((*param_1 == 0) && (param_1[2] == 0)) {
    if (param_1[10] != 0) {
      for (local_c = (undefined4 *)param_1[10]; local_c != (undefined4 *)0x0;
          local_c = (undefined4 *)*local_c) {
        puVar1 = operator_new(0x1c);
        puVar1[6] = 0xffffffff;
        iVar2 = 5;
        puVar3 = local_c;
        puVar4 = puVar1;
        while( true ) {
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          *puVar4 = *puVar3;
        }
        *puVar1 = *(undefined4 *)((int)this + 0x410);
        *(undefined4 **)((int)this + 0x410) = puVar1;
      }
    }
    (*DAT_102e14f8)("got list\n");
    *(undefined4 *)((int)this + 0x424) = 1;
    *(undefined4 *)((int)this + 0x420) = 0;
  }
  return;
}

/* 10048410  FUN_10048410  (415 bytes)
 * undefined FUN_10048410(int * param_1)
 */
void __thiscall FUN_10048410(void *this,int *param_1)

{
  size_t sVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  undefined1 local_38 [32];
  uint local_18;
  int *local_14;
  undefined4 *local_10;
  uint *local_c;
  void *local_8;
  
  local_8 = this;
  local_10 = thunk_FUN_10048c30(param_1[1],*(undefined4 **)((int)this + 0x414));
  if (local_10 != (undefined4 *)0x0) {
    thunk_FUN_10048c80((undefined4 *)((int)local_8 + 0x414),local_10);
    *(int *)((int)local_8 + 0x420) = *(int *)((int)local_8 + 0x420) + -1;
  }
  if (((*param_1 == 0) && (param_1[2] == 4)) && (param_1[10] != 0)) {
    local_c = (uint *)param_1[10];
    sVar1 = _strlen((char *)local_c);
    local_18 = sVar1 + 0x65;
    __ftol();
    FUN_100bb6e0(local_38,"%i");
    local_14 = operator_new(0x20);
    piVar5 = param_1 + 3;
    piVar6 = local_14;
    for (iVar4 = 5; piVar6 = piVar6 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + 1;
    }
    pvVar2 = operator_new(local_18);
    local_14[6] = (int)pvVar2;
    lVar7 = __ftol();
    local_14[7] = (int)lVar7;
    FUN_100bba20((uint *)local_14[6],local_c);
    uVar3 = (**(code **)(DAT_102e15b0 + 0x14))(param_1 + 3,local_18);
    (**(code **)(DAT_102e15b0 + 0x28))(local_14[6],"address",uVar3);
    (**(code **)(DAT_102e15b0 + 0x28))(local_14[6],&DAT_1026f2f0,local_38,local_18);
    thunk_FUN_10048860(local_8,(undefined4 *)((int)local_8 + 0x418),local_14);
  }
  return;
}

/* 10048620  FUN_10048620  (101 bytes)
 * undefined FUN_10048620(int * param_1)
 */
void FUN_10048620(int *param_1)

{
  undefined1 local_28 [36];
  
  if ((*param_1 == 0) && (param_1[2] == 1)) {
    FUN_100bb6e0(local_28,"%.2f");
    (*DAT_102e14f8)("ping == %s\n",local_28);
  }
  return;
}

/* 100486a0  FUN_100486a0  (84 bytes)
 * undefined FUN_100486a0(int * param_1)
 */
void FUN_100486a0(int *param_1)

{
  if (((*param_1 == 0) && (param_1[2] == 2)) && (param_1[10] != 0)) {
    (*DAT_102e14f8)("rules %s\n",param_1[10]);
  }
  return;
}

/* 10048710  FUN_10048710  (84 bytes)
 * undefined FUN_10048710(int * param_1)
 */
void FUN_10048710(int *param_1)

{
  if (((*param_1 == 0) && (param_1[2] == 3)) && (param_1[10] != 0)) {
    (*DAT_102e14f8)("players %s\n",param_1[10]);
  }
  return;
}

/* 10048780  FUN_10048780  (169 bytes)
 * undefined4 FUN_10048780(int param_1, int param_2)
 */
undefined4 FUN_10048780(int param_1,int param_2)

{
  undefined4 uVar1;
  byte_conflict *pbVar2;
  byte_conflict *pbVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x1c) < *(int *)(param_2 + 0x1c)) {
    uVar1 = 1;
  }
  else {
    if (((*(int *)(param_1 + 0x1c) == *(int *)(param_2 + 0x1c)) && (*(int *)(param_1 + 0x18) != 0))
       && (*(int *)(param_2 + 0x18) != 0)) {
      pbVar2 = (byte_conflict *)
               (**(code **)(DAT_102e15b0 + 0x20))(*(undefined4 *)(param_1 + 0x18),"hostname");
      pbVar3 = (byte_conflict *)
               (**(code **)(DAT_102e15b0 + 0x20))(*(undefined4 *)(param_2 + 0x18),"hostname");
      if (((pbVar2 != (byte_conflict *)0x0) && (pbVar3 != (byte_conflict *)0x0)) &&
         (uVar4 = FUN_100db540(pbVar2,pbVar3), (int)uVar4 < 0)) {
        return 1;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

/* 10048860  FUN_10048860  (211 bytes)
 * undefined FUN_10048860(undefined4 * param_1, undefined4 * param_2)
 */
void __thiscall FUN_10048860(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int *local_c;
  
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    *(int *)((int)this + 0x41c) = *(int *)((int)this + 0x41c) + 1;
    local_c = (int *)*param_1;
    if (local_c == (int *)0x0) {
      *param_2 = 0;
      *param_1 = param_2;
    }
    else {
      iVar1 = thunk_FUN_10048780((int)param_2,(int)local_c);
      if (iVar1 == 0) {
        for (; *local_c != 0; local_c = (int *)*local_c) {
          iVar1 = thunk_FUN_10048780((int)param_2,*local_c);
          if (iVar1 != 0) {
            *param_2 = *(undefined4 *)*local_c;
            *local_c = (int)param_2;
            return;
          }
        }
        *param_2 = 0;
        *local_c = (int)param_2;
      }
      else {
        *param_2 = *param_1;
        *param_1 = param_2;
      }
    }
  }
  return;
}

/* 10048970  FUN_10048970  (167 bytes)
 * undefined FUN_10048970(double param_1)
 */
void __thiscall FUN_10048970(void *this,double param_1)

{
  int iVar1;
  
  *(double *)((int)this + 0x428) = param_1 + *(double *)((int)this + 0x428);
  if ((*(int *)((int)this + 0x400) != 0) && (*(int *)((int)this + 0x424) != 0)) {
    thunk_FUN_10048a40((int)this);
    iVar1 = thunk_FUN_10048bb0((int)this);
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

/* 10048a40  FUN_10048a40  (294 bytes)
 * undefined FUN_10048a40(int param_1)
 */
void __fastcall FUN_10048a40(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((((*(int *)(param_1 + 0x400) != 0) && (*(int *)(param_1 + 0x404) == 0)) &&
      (*(int *)(param_1 + 0x424) != 0)) &&
     ((*(int *)(param_1 + 0x420) < 0x15 && (*(int *)(param_1 + 0x410) != 0)))) {
    do {
      puVar1 = *(undefined4 **)(param_1 + 0x410);
      if (puVar1 == (undefined4 *)0x0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x410) = **(undefined4 **)(param_1 + 0x410);
      puVar1[6] = DAT_102e8028;
      iVar2 = DAT_102e8028;
      DAT_102e8028 = DAT_102e8028 + 1;
      (**(code **)(DAT_102e15b0 + 8))(iVar2,4,0,0,0x40000000,puVar1 + 1,thunk_FUN_10048200);
      *(int *)(param_1 + 0x420) = *(int *)(param_1 + 0x420) + 1;
      *puVar1 = *(undefined4 *)(param_1 + 0x414);
      *(undefined4 **)(param_1 + 0x414) = puVar1;
    } while (*(int *)(param_1 + 0x420) < 0x15);
  }
  return;
}

/* 10048bb0  FUN_10048bb0  (103 bytes)
 * int FUN_10048bb0(int param_1)
 */
int __fastcall FUN_10048bb0(int param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = 0;
  for (local_10 = *(undefined4 **)(param_1 + 0x410); local_10 != (undefined4 *)0x0;
      local_10 = (undefined4 *)*local_10) {
    local_c = local_c + 1;
  }
  for (local_10 = *(undefined4 **)(param_1 + 0x414); local_10 != (undefined4 *)0x0;
      local_10 = (undefined4 *)*local_10) {
    local_c = local_c + 1;
  }
  return local_c;
}

/* 10048c30  FUN_10048c30  (61 bytes)
 * undefined4 * FUN_10048c30(int param_1, undefined4 * param_2)
 */
undefined4 * FUN_10048c30(int param_1,undefined4 *param_2)

{
  undefined4 *local_c;
  
  local_c = param_2;
  while( true ) {
    if (local_c == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    if (param_1 == local_c[6]) break;
    local_c = (undefined4 *)*local_c;
  }
  return local_c;
}

/* 10048c80  FUN_10048c80  (96 bytes)
 * undefined FUN_10048c80(undefined4 * param_1, undefined4 * param_2)
 */
void FUN_10048c80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 local_14;
  undefined4 local_c;
  
  local_14 = (undefined4 *)0x0;
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*param_1;
    while (local_c = puVar1, local_c != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*local_c;
      if (local_c != param_2) {
        *local_c = local_14;
        local_14 = local_c;
      }
    }
    *param_1 = local_14;
  }
  return;
}

/* 10048d00  FUN_10048d00  (86 bytes)
 * undefined FUN_10048d00(undefined4 * param_1)
 */
void FUN_10048d00(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 local_c;
  
  if (param_1 != (undefined4 *)0x0) {
    local_c = (undefined4 *)*param_1;
    while (local_c != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*local_c;
      FUN_100bbb10(local_c);
      local_c = puVar1;
    }
    *param_1 = 0;
  }
  return;
}

/* 10048d70  FUN_10048d70  (107 bytes)
 * undefined FUN_10048d70(undefined4 * param_1)
 */
void FUN_10048d70(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *local_c;
  
  if (param_1 != (undefined4 *)0x0) {
    local_c = (undefined4 *)*param_1;
    while (local_c != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*local_c;
      FUN_100bbb10((void *)local_c[6]);
      FUN_100bbb10(local_c);
      local_c = puVar1;
    }
    *param_1 = 0;
  }
  return;
}

/* 10048e00  FUN_10048e00  (188 bytes)
 * uint FUN_10048e00(int param_1, int param_2, undefined4 param_3, uint param_4)
 */
uint __cdecl FUN_10048e00(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  byte_conflict *pbVar3;
  byte_conflict *pbVar4;
  float10 fVar5;
  
  pbVar3 = (byte_conflict *)
           (**(code **)(DAT_102e15b0 + 0x20))(*(undefined4 *)(param_1 + 0x18),param_3);
  pbVar4 = (byte_conflict *)
           (**(code **)(DAT_102e15b0 + 0x20))(*(undefined4 *)(param_2 + 0x18),param_3);
  fVar5 = FUN_100bda90(pbVar3);
  fVar1 = (float)fVar5;
  fVar5 = FUN_100bda90(pbVar4);
  fVar2 = (float)fVar5;
  if ((fVar1 == 0.0) || (fVar2 == 0.0)) {
    param_4 = FUN_100db540(pbVar3,pbVar4);
  }
  else if (fVar1 <= fVar2) {
    if (fVar2 <= fVar1) {
      param_4 = 0;
    }
    else {
      param_4 = -param_4;
    }
  }
  return param_4;
}

/* 10048ef0  FUN_10048ef0  (78 bytes)
 * uint FUN_10048ef0(int param_1, int param_2, undefined4 param_3)
 */
uint FUN_10048ef0(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = thunk_FUN_10048e00(param_1,param_2,param_3,1);
  }
  return uVar1;
}

/* 10048f60  FUN_10048f60  (50 bytes)
 * undefined FUN_10048f60(int * param_1, int * param_2)
 * called by: thunk_FUN_10048f60
 */
void __cdecl FUN_10048f60(int *param_1,int *param_2)

{
  thunk_FUN_10048ef0(*param_1,*param_2,&DAT_102e7f28);
  return;
}

/* 10048fa0  FUN_10048fa0  (338 bytes)
 * undefined FUN_10048fa0(uint * param_1)
 */
void __thiscall FUN_10048fa0(void *this,uint *param_1)

{
  undefined4 *_Dst;
  uint local_14;
  int local_10;
  undefined4 *local_c;
  
  if (*(int *)((int)this + 0x418) != 0) {
    FUN_100bba20((uint *)&DAT_102e7f28,param_1);
    local_14 = 0;
    for (local_c = *(undefined4 **)((int)this + 0x418); local_c != (undefined4 *)0x0;
        local_c = (undefined4 *)*local_c) {
      local_14 = local_14 + 1;
    }
    _Dst = operator_new(local_14 << 2);
    _memset(_Dst,0,local_14 << 2);
    local_c = *(undefined4 **)((int)this + 0x418);
    local_10 = 0;
    for (; local_c != (undefined4 *)0x0; local_c = (undefined4 *)*local_c) {
      _Dst[local_10] = local_c;
      local_10 = local_10 + 1;
    }
    FUN_100c0930((undefined1 *)_Dst,local_14,4,thunk_FUN_10048f60);
    *(undefined4 *)((int)this + 0x418) = *_Dst;
    for (local_10 = 0; local_10 < (int)(local_14 - 1); local_10 = local_10 + 1) {
      *(undefined4 *)_Dst[local_10] = _Dst[local_10 + 1];
    }
    *(undefined4 *)_Dst[local_14 - 1] = 0;
    FUN_100bbb10(_Dst);
  }
  return;
}

/* 10049150  FUN_10049150  (80 bytes)
 * undefined4 * FUN_10049150(int param_1)
 */
undefined4 * __thiscall FUN_10049150(void *this,int param_1)

{
  undefined4 *local_10;
  int local_c;
  
  local_c = 0;
  local_10 = *(undefined4 **)((int)this + 0x418);
  while( true ) {
    if (local_10 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    if (local_c == param_1) break;
    local_c = local_c + 1;
    local_10 = (undefined4 *)*local_10;
  }
  return local_10;
}

/* 100491c0  FUN_100491c0  (52 bytes)
 * undefined4 FUN_100491c0(int param_1)
 */
undefined4 __thiscall FUN_100491c0(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = thunk_FUN_10049150(this,param_1);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = puVar1[6];
  }
  return uVar2;
}

/* 10049210  FUN_10049210  (66 bytes)
 * undefined FUN_10049210(int param_1)
 */
void __fastcall FUN_10049210(int param_1)

{
  *(undefined4 *)(param_1 + 0x400) = 0;
  *(undefined4 *)(param_1 + 0x424) = 0;
  *(undefined4 *)(param_1 + 0x404) = 1;
  (**(code **)(DAT_102e15b0 + 0x10))();
  return;
}

/* 10049270  FUN_10049270  (949 bytes)
 * bool FUN_10049270(int param_1, int * param_2, int param_3)
 */
bool FUN_10049270(int param_1,int *param_2,int param_3)

{
  uint *puVar1;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 local_378 [256];
  int local_278;
  char local_271;
  int local_270;
  int local_26c;
  undefined1 local_268 [64];
  undefined4 local_228 [5];
  uint *local_214;
  uint *local_210;
  uint local_20c [64];
  uint local_10c [64];
  int local_c;
  byte_conflict *local_8;
  
  local_210 = (uint *)0x0;
  local_214 = (uint *)0x0;
  local_270 = 0;
  FUN_100bba20(local_10c,(uint *)"half-life.east.won.net");
  FUN_100bba20(local_20c,(uint *)"woncomm.lst");
  local_c = (*DAT_102e1514)("-comm",&local_214);
  if ((local_c != 0) && (local_214 != (uint *)0x0)) {
    FUN_100bba20(local_20c,local_214);
  }
  local_210 = (uint *)(*DAT_102e1594)(local_20c,5,0);
  puVar1 = local_210;
  if (local_210 != (uint *)0x0) {
LAB_10049336:
    local_214 = puVar1;
    if (local_270 < param_1) {
      local_214 = (uint *)(*DAT_102e1598)(local_214,local_8);
      sVar2 = _strlen((char *)local_8);
      if (sVar2 == 0) goto LAB_10049580;
      local_271 = '\x01';
      uVar3 = FUN_100db540(local_8,(byte_conflict *)"Master");
      if (uVar3 == 0) {
        local_278 = 0x6982;
        local_271 = '\0';
      }
      local_214 = (uint *)(*DAT_102e1598)(local_214,local_8);
      sVar2 = _strlen((char *)local_8);
      if ((sVar2 == 0) || (uVar3 = FUN_100db540(local_8,"{"), uVar3 != 0)) goto LAB_10049580;
      while (puVar1 = local_214, local_270 < param_1) {
        local_214 = (uint *)(*DAT_102e1598)(local_214,local_8);
        sVar2 = _strlen((char *)local_8);
        puVar1 = local_214;
        if ((sVar2 == 0) || (uVar3 = FUN_100db540(local_8,"}"), puVar1 = local_214, uVar3 == 0))
        break;
        FUN_100bb6e0(local_378,"%s");
        local_214 = (uint *)(*DAT_102e1598)(local_214,local_8);
        sVar2 = _strlen((char *)local_8);
        puVar1 = local_214;
        if ((sVar2 == 0) || (uVar3 = FUN_100db540(local_8,":"), puVar1 = local_214, uVar3 != 0))
        break;
        local_214 = (uint *)(*DAT_102e1598)(local_214,local_8);
        sVar2 = _strlen((char *)local_8);
        puVar1 = local_214;
        if (sVar2 == 0) break;
        local_26c = FUN_100c0d30(local_8);
        if (local_26c == 0) {
          local_26c = local_278;
        }
        FUN_100bb6e0(local_268,(byte_conflict *)"%s:%i");
        iVar4 = (**(code **)(DAT_102e15b0 + 0x1c))(local_268,local_228);
        if (iVar4 == 0) {
          local_271 = '\x01';
        }
        if (local_271 == '\0') {
          puVar5 = local_228;
          puVar6 = (undefined4 *)(param_3 + local_270 * 0x14);
          for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          local_270 = local_270 + 1;
        }
      }
      goto LAB_10049336;
    }
  }
LAB_10049580:
  if (local_270 == 0) {
    FUN_100bb6e0((undefined1 *)local_10c,(byte_conflict *)"half-life.east.won.net");
    iVar4 = (**(code **)(DAT_102e15b0 + 0x1c))(local_10c,local_228);
    if (iVar4 != 0) {
      puVar5 = local_228;
      puVar6 = (undefined4 *)(param_3 + local_270 * 0x14);
      for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      local_270 = local_270 + 1;
    }
  }
  *param_2 = local_270;
  if (local_210 != (uint *)0x0) {
    (*DAT_102e159c)(local_210);
  }
  return 0 < local_270;
}

/* 10049720  FUN_10049720  (260 bytes)
 * undefined FUN_10049720(int param_1)
 */
void __fastcall FUN_10049720(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined1 local_20 [20];
  int local_c;
  int local_8;
  
  *(undefined4 *)(param_1 + 0x400) = 1;
  *(undefined4 *)(param_1 + 0x404) = 0;
  *(undefined4 *)(param_1 + 0x408) = *(undefined4 *)(param_1 + 0x428);
  *(undefined4 *)(param_1 + 0x40c) = *(undefined4 *)(param_1 + 0x42c);
  local_c = 0;
  local_8 = param_1;
  bVar2 = thunk_FUN_10049270(1,&local_c,(int)local_20);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    (*DAT_102e14fc)("SendRequest:  Unable to read master server addresses\n");
  }
  else {
    thunk_FUN_10048d00((undefined4 *)(local_8 + 0x414));
    thunk_FUN_10048d00((undefined4 *)(local_8 + 0x410));
    thunk_FUN_10048d70((undefined4 *)(local_8 + 0x418));
    *(undefined4 *)(local_8 + 0x41c) = 0;
    (*(code *)*DAT_102e15b0)();
    (*(code *)DAT_102e15b0[4])();
    iVar1 = DAT_102e8028;
    DAT_102e8028 = DAT_102e8028 + 1;
    (*(code *)DAT_102e15b0[2])(iVar1,0,0,0,0x40140000,local_20,thunk_FUN_100481c0);
  }
  return;
}

/* 10049870  FUN_10049870  (328 bytes)
 * undefined FUN_10049870(int param_1)
 */
void __thiscall FUN_10049870(void *this,int param_1)

{
  int iVar1;
  undefined4 local_1c [4];
  undefined2 local_a;
  void *local_8;
  
  *(undefined4 *)((int)this + 0x400) = 1;
  *(undefined4 *)((int)this + 0x404) = 0;
  *(undefined4 *)((int)this + 0x408) = *(undefined4 *)((int)this + 0x428);
  *(undefined4 *)((int)this + 0x40c) = *(undefined4 *)((int)this + 0x42c);
  local_8 = this;
  _memset(local_1c,0,0x14);
  if (param_1 != 0) {
    thunk_FUN_10048d00((undefined4 *)((int)local_8 + 0x414));
    thunk_FUN_10048d00((undefined4 *)((int)local_8 + 0x410));
    thunk_FUN_10048d70((undefined4 *)((int)local_8 + 0x418));
    *(undefined4 *)((int)local_8 + 0x41c) = 0;
  }
  local_a = Ordinal_9(0x6987);
  (*(code *)*DAT_102e15b0)();
  if (param_1 != 0) {
    (*(code *)DAT_102e15b0[4])();
  }
  iVar1 = DAT_102e8028;
  local_1c[0] = 2;
  DAT_102e8028 = DAT_102e8028 + 1;
  (*(code *)DAT_102e15b0[2])(iVar1,4,1,0,0x40140000,local_1c,thunk_FUN_10048200);
  iVar1 = DAT_102e8028;
  local_1c[0] = 5;
  DAT_102e8028 = DAT_102e8028 + 1;
  (*(code *)DAT_102e15b0[2])(iVar1,4,1,0,0x40140000,local_1c,thunk_FUN_10048200);
  return;
}

/* 10049a10  FUN_10049a10  (112 bytes)
 * undefined FUN_10049a10(int param_1)
 */
void __thiscall FUN_10049a10(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = thunk_FUN_10049150(this,param_1);
  if (puVar2 != (undefined4 *)0x0) {
    (*(code *)*DAT_102e15b0)();
    iVar1 = DAT_102e8028;
    DAT_102e8028 = DAT_102e8028 + 1;
    (*(code *)DAT_102e15b0[2])(iVar1,1,0,0,0x40140000,puVar2 + 1,thunk_FUN_10048240);
  }
  return;
}

/* 10049aa0  FUN_10049aa0  (112 bytes)
 * undefined FUN_10049aa0(int param_1)
 */
void __thiscall FUN_10049aa0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = thunk_FUN_10049150(this,param_1);
  if (puVar2 != (undefined4 *)0x0) {
    (*(code *)*DAT_102e15b0)();
    iVar1 = DAT_102e8028;
    DAT_102e8028 = DAT_102e8028 + 1;
    (*(code *)DAT_102e15b0[2])(iVar1,2,0,0,0x40140000,puVar2 + 1,thunk_FUN_10048280);
  }
  return;
}

/* 10049b30  FUN_10049b30  (112 bytes)
 * undefined FUN_10049b30(int param_1)
 */
void __thiscall FUN_10049b30(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = thunk_FUN_10049150(this,param_1);
  if (puVar2 != (undefined4 *)0x0) {
    (*(code *)*DAT_102e15b0)();
    iVar1 = DAT_102e8028;
    DAT_102e8028 = DAT_102e8028 + 1;
    (*(code *)DAT_102e15b0[2])(iVar1,3,0,0,0x40140000,puVar2 + 1,thunk_FUN_100482c0);
  }
  return;
}

/* 10049bc0  FUN_10049bc0  (36 bytes)
 * bool FUN_10049bc0(int param_1)
 */
bool __fastcall FUN_10049bc0(int param_1)

{
  return *(int *)(param_1 + 0x400) != 0;
}

/* 10049bf0  FUN_10049bf0  (28 bytes)
 * undefined4 FUN_10049bf0(int param_1)
 */
undefined4 __fastcall FUN_10049bf0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x41c);
}

/* 10049c20  FUN_10049c20  (198 bytes)
 * int FUN_10049c20(int param_1)
 */
int __fastcall FUN_10049c20(int param_1)

{
  *(undefined4 *)(param_1 + 0x400) = 0;
  *(undefined4 *)(param_1 + 0x408) = 0;
  *(undefined4 *)(param_1 + 0x40c) = 0;
  *(undefined4 *)(param_1 + 0x404) = 0;
  *(undefined4 *)(param_1 + 0x410) = 0;
  *(undefined4 *)(param_1 + 0x418) = 0;
  *(undefined4 *)(param_1 + 0x414) = 0;
  *(undefined4 *)(param_1 + 0x424) = 0;
  *(undefined4 *)(param_1 + 0x420) = 0;
  *(undefined4 *)(param_1 + 0x428) = 0;
  *(undefined4 *)(param_1 + 0x42c) = 0;
  *(undefined4 *)(param_1 + 0x430) = 0;
  *(undefined4 *)(param_1 + 0x434) = 0;
  *(undefined4 *)(param_1 + 0x438) = 0;
  return param_1;
}

/* 10049d20  FUN_10049d20  (230 bytes)
 * undefined FUN_10049d20(int param_1)
 */
void __fastcall FUN_10049d20(int param_1)

{
  thunk_FUN_10048d00((undefined4 *)(param_1 + 0x414));
  thunk_FUN_10048d00((undefined4 *)(param_1 + 0x410));
  thunk_FUN_10048d70((undefined4 *)(param_1 + 0x418));
  *(undefined4 *)(param_1 + 0x41c) = 0;
  if (*(int *)(param_1 + 0x430) != 0) {
    FUN_100bbb10(*(void **)(param_1 + 0x430));
    *(undefined4 *)(param_1 + 0x430) = 0;
  }
  if (*(int *)(param_1 + 0x434) != 0) {
    FUN_100bbb10(*(void **)(param_1 + 0x434));
    *(undefined4 *)(param_1 + 0x434) = 0;
  }
  if (*(int *)(param_1 + 0x438) != 0) {
    FUN_100bbb10(*(void **)(param_1 + 0x438));
    *(undefined4 *)(param_1 + 0x438) = 0;
  }
  return;
}

/* 10049e40  FUN_10049e40  (40 bytes)
 * undefined4 FUN_10049e40(void)
 */
undefined4 FUN_10049e40(void)

{
  undefined4 uVar1;
  
  if (DAT_102e802c == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = thunk_FUN_10049bf0(DAT_102e802c);
  }
  return uVar1;
}

/* 10049e80  FUN_10049e80  (40 bytes)
 * bool FUN_10049e80(void)
 */
bool FUN_10049e80(void)

{
  bool bVar1;
  
  if (DAT_102e802c == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = thunk_FUN_10049bc0(DAT_102e802c);
  }
  return bVar1;
}

/* 10049ec0  FUN_10049ec0  (44 bytes)
 * undefined4 FUN_10049ec0(int param_1)
 */
undefined4 __cdecl FUN_10049ec0(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_102e802c == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = thunk_FUN_100491c0(DAT_102e802c,param_1);
  }
  return uVar1;
}

/* 10049f00  FUN_10049f00  (40 bytes)
 * undefined FUN_10049f00(uint * param_1)
 */
void __cdecl FUN_10049f00(uint *param_1)

{
  if (DAT_102e802c != (void *)0x0) {
    thunk_FUN_10048fa0(DAT_102e802c,param_1);
  }
  return;
}

/* 10049f40  FUN_10049f40  (77 bytes)
 * undefined FUN_10049f40(void)
 */
void FUN_10049f40(void)

{
  if (DAT_102e802c != (void *)0x0) {
    if (DAT_102e802c != (void *)0x0) {
      thunk_FUN_10049fa0(DAT_102e802c,1);
    }
    DAT_102e802c = (void *)0x0;
  }
  return;
}

/* 10049fa0  FUN_10049fa0  (54 bytes)
 * void * FUN_10049fa0(uint param_1)
 */
void * __thiscall FUN_10049fa0(void *this,uint param_1)

{
  thunk_FUN_10049d20((int)this);
  if ((param_1 & 1) != 0) {
    FUN_100bbb10(this);
  }
  return this;
}

/* 10049ff0  FUN_10049ff0  (123 bytes)
 * undefined FUN_10049ff0(void)
 */
void FUN_10049ff0(void)

{
  void *pvVar1;
  int local_5c;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e5a5b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  thunk_FUN_10049f40();
  pvVar1 = operator_new(0x440);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_5c = 0;
  }
  else {
    local_5c = thunk_FUN_10049c20((int)pvVar1);
  }
  DAT_102e802c = local_5c;
  ExceptionList = local_10;
  return;
}

/* 1004a090  FUN_1004a090  (44 bytes)
 * undefined FUN_1004a090(undefined4 param_1, undefined4 param_2)
 */
void __cdecl FUN_1004a090(undefined4 param_1,undefined4 param_2)

{
  if (DAT_102e802c != (void *)0x0) {
    thunk_FUN_10048970(DAT_102e802c,(double)CONCAT44(param_2,param_1));
  }
  return;
}

/* 1004a0d0  FUN_1004a0d0  (36 bytes)
 * undefined FUN_1004a0d0(void)
 */
void FUN_1004a0d0(void)

{
  if (DAT_102e802c != 0) {
    thunk_FUN_10049210(DAT_102e802c);
  }
  return;
}

/* 1004a100  FUN_1004a100  (36 bytes)
 * undefined FUN_1004a100(void)
 */
void FUN_1004a100(void)

{
  if (DAT_102e802c != 0) {
    thunk_FUN_10049720(DAT_102e802c);
  }
  return;
}

/* 1004a130  FUN_1004a130  (40 bytes)
 * undefined FUN_1004a130(int param_1)
 */
void __cdecl FUN_1004a130(int param_1)

{
  if (DAT_102e802c != (void *)0x0) {
    thunk_FUN_10049870(DAT_102e802c,param_1);
  }
  return;
}

/* 1004a170  FUN_1004a170  (40 bytes)
 * undefined FUN_1004a170(int param_1)
 */
void __cdecl FUN_1004a170(int param_1)

{
  if (DAT_102e802c != (void *)0x0) {
    thunk_FUN_10049a10(DAT_102e802c,param_1);
  }
  return;
}

/* 1004a1b0  FUN_1004a1b0  (40 bytes)
 * undefined FUN_1004a1b0(int param_1)
 */
void __cdecl FUN_1004a1b0(int param_1)

{
  if (DAT_102e802c != (void *)0x0) {
    thunk_FUN_10049aa0(DAT_102e802c,param_1);
  }
  return;
}

/* 1004a1f0  FUN_1004a1f0  (40 bytes)
 * undefined FUN_1004a1f0(int param_1)
 */
void __cdecl FUN_1004a1f0(int param_1)

{
  if (DAT_102e802c != (void *)0x0) {
    thunk_FUN_10049b30(DAT_102e802c,param_1);
  }
  return;
}

/* 1004a230  FUN_1004a230  (102 bytes)
 * undefined FUN_1004a230(void)
 * called by: thunk_FUN_1004a230
 */
void FUN_1004a230(void)

{
  int iVar1;
  byte_conflict *pbVar2;
  int iVar3;
  
  iVar1 = (*DAT_102e15b8)();
  if (iVar1 == 0) {
    (*DAT_102e14f8)("specmode only in HLTV mode available.\n");
  }
  else {
    iVar1 = (*DAT_102e14f0)();
    if (iVar1 < 2) {
      (*DAT_102e14f8)("usage:  specmode < modenumber >\n");
    }
    else {
      iVar3 = 0;
      pbVar2 = (byte_conflict *)(*DAT_102e14f4)(1);
      iVar1 = FUN_100c0d30(pbVar2);
      thunk_FUN_1004b530(&DAT_102daaa0,iVar1,iVar3);
    }
  }
  return;
}

/* 1004a2b0  FUN_1004a2b0  (220 bytes)
 * undefined4 FUN_1004a2b0(int param_1)
 * called by: thunk_FUN_1004a2b0
 */
undefined4 __fastcall FUN_1004a2b0(int param_1)

{
  undefined4 uVar1;
  
  thunk_FUN_10046ec0(&DAT_102da3c8,param_1);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  *(undefined4 *)(param_1 + 0xc9c) = 0;
  *(undefined4 *)(param_1 + 0x950) = 0;
  *(undefined4 *)(param_1 + 0xca0) = 0;
  *(undefined4 *)(param_1 + 0xca4) = 0;
  _memset((void *)(param_1 + 0x20),0,300);
  _memset((void *)(param_1 + 0x150),0,0x800);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar1 = (*DAT_102e1490)("cl_drawnames",&DAT_1026d38c,1);
  *(undefined4 *)(param_1 + 0x970) = uVar1;
  (*DAT_102e149c)("specmode",thunk_FUN_1004a230);
  return 1;
}

/* 1004a3d0  FUN_1004a3d0  (242 bytes)
 * undefined FUN_1004a3d0(int param_1, uint * param_2)
 */
void __cdecl FUN_1004a3d0(int param_1,uint *param_2)

{
  float10 fVar1;
  int local_90;
  uint local_8c [32];
  uint *local_c;
  uint *local_8;
  
  FUN_100bba20(local_8c,param_2);
  local_8 = local_8c;
  for (local_90 = 0; local_90 < 3; local_90 = local_90 + 1) {
    local_c = local_8;
    fVar1 = FUN_100bda90((byte_conflict *)local_8);
    *(float *)(param_1 + local_90 * 4) = (float)fVar1;
    for (; ((char)*local_8 != '\0' && ((char)*local_8 != ' ')); local_8 = (uint *)((int)local_8 + 1)
        ) {
    }
    if ((char)*local_8 == '\0') break;
    local_8 = (uint *)((int)local_8 + 1);
  }
  if (local_90 < 2) {
    while (local_90 = local_90 + 1, local_90 < 3) {
      *(undefined4 *)(param_1 + local_90 * 4) = 0;
    }
  }
  return;
}

/* 1004a500  FUN_1004a500  (562 bytes)
 * undefined FUN_1004a500(void)
 */
void FUN_1004a500(void)

{
  int iVar1;
  uint local_520 [256];
  undefined4 local_120;
  uint local_11c [64];
  char *local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_18 = (*DAT_102e152c)(0);
  if (local_18 != 0) {
    local_1c = (char *)(*DAT_102e1598)(*(undefined4 *)(*(int *)(local_18 + 0xb94) + 0x180),local_520
                                      );
    while ((*local_1c != '\0' && ((char)local_520[0] != '}'))) {
      if ((char)local_520[0] != '{') {
        return;
      }
      while (local_1c = (char *)(*DAT_102e1598)(local_1c,local_520), (char)local_520[0] != '}') {
        if (local_1c == (char *)0x0) {
          return;
        }
        FUN_100bba20(local_11c,local_520);
        for (local_120 = _strlen((char *)local_11c);
            (local_120 != 0 && (*(char *)((int)local_11c + (local_120 - 1)) == ' '));
            local_120 = local_120 - 1) {
          *(undefined1 *)((int)local_11c + (local_120 - 1)) = 0;
        }
        local_1c = (char *)(*DAT_102e1598)(local_1c,local_520);
        if (local_1c == (char *)0x0) {
          return;
        }
        if ((char)local_520[0] == '}') {
          return;
        }
        iVar1 = _strcmp((char *)local_11c,"classname");
        if ((iVar1 == 0) && (iVar1 = _strcmp((char *)local_520,"info_player_start"), iVar1 == 0))
        break;
        iVar1 = _strcmp((char *)local_11c,"origin");
        if (iVar1 == 0) {
          thunk_FUN_1004a3d0((int)&local_14,local_520);
        }
      }
      local_1c = (char *)(*DAT_102e1598)(local_1c,local_520);
    }
  }
  DAT_10321ff8 = local_c;
  DAT_10321ff4 = local_10;
  DAT_10321ff0 = local_14;
  DAT_10321fd4 = 1;
  DAT_10321010 = 1;
  DAT_10320f70 = local_c;
  DAT_10320f6c = local_10;
  DAT_10320f68 = local_14;
  return;
}

/* 1004a7c0  FUN_1004a7c0  (208 bytes)
 * undefined4 FUN_1004a7c0(int param_1)
 * called by: thunk_FUN_1004a7c0
 */
undefined4 __fastcall FUN_1004a7c0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*DAT_102e1458)("sprites/iplayer.spr");
  *(undefined4 *)(param_1 + 0xc7c) = uVar1;
  uVar1 = (*DAT_102e1458)("sprites/iplayerblue.spr");
  *(undefined4 *)(param_1 + 0xc74) = uVar1;
  uVar1 = (*DAT_102e1458)("sprites/iplayerred.spr");
  *(undefined4 *)(param_1 + 0xc78) = uVar1;
  uVar1 = (*DAT_102e1458)("sprites/iplayerdead.spr");
  *(undefined4 *)(param_1 + 0xc84) = uVar1;
  uVar1 = (*DAT_102e1458)("sprites/tile.spr");
  *(undefined4 *)(param_1 + 0xc8c) = uVar1;
  uVar1 = (*DAT_102e1458)("sprites/laserbeam.spr");
  *(undefined4 *)(param_1 + 0xc90) = uVar1;
  uVar1 = (*DAT_102e1458)("sprites/camera.spr");
  *(undefined4 *)(param_1 + 0xc80) = uVar1;
  uVar1 = (*DAT_102e1458)("sprites/crosshairs.spr");
  *(undefined4 *)(param_1 + 0xc94) = uVar1;
  return 1;
}

/* 1004a8d0  FUN_1004a8d0  (1279 bytes)
 * undefined4 FUN_1004a8d0(void)
 * called by: thunk_FUN_1004a8d0
 */
undefined4 FUN_1004a8d0(void)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  size_t sVar8;
  longlong lVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  char *pcVar13;
  int local_128;
  undefined1 local_124 [12];
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  char local_10c [256];
  int local_c;
  int local_8;
  
  iVar2 = (*DAT_102e15b8)();
  if (iVar2 == 1) {
    if ((*(float *)(local_8 + 0xca0) != 0.0) && (*(int *)(local_8 + 0x14) != 3)) {
      *(float *)(local_8 + 0x954) = *(float *)(local_8 + 0x954) + *(float *)(local_8 + 0xca0);
      if (3.0 < *(float *)(local_8 + 0x954)) {
        *(undefined4 *)(local_8 + 0x954) = 0x40400000;
      }
      if (*(float *)(local_8 + 0x954) < 0.5) {
        *(undefined4 *)(local_8 + 0x954) = 0x3f000000;
      }
    }
    if ((*(float *)(local_8 + 0xca4) != 0.0) && (*(int *)(local_8 + 0x14) != 3)) {
      thunk_FUN_10007fe0(local_124);
      uVar12 = 0;
      uVar3 = thunk_FUN_10008500(local_124);
      uVar10 = 0;
      uVar4 = thunk_FUN_10008500(local_8 + 0x964);
      (*DAT_102e14b8)(uVar4,uVar10,uVar3,uVar12);
      pfVar5 = (float *)thunk_FUN_10008500(local_124);
      thunk_FUN_100981d0(pfVar5);
      pfVar5 = (float *)thunk_FUN_10008500(local_124);
      fVar11 = *(float *)(local_8 + 0xca4);
      pfVar6 = (float *)thunk_FUN_10008500(local_124);
      thunk_FUN_100982e0(pfVar6,fVar11,pfVar5);
      pfVar5 = (float *)thunk_FUN_10008500(local_8 + 0x958);
      pfVar6 = (float *)thunk_FUN_10008500(local_124);
      fVar11 = *pfVar5;
      fVar1 = *pfVar6;
      pfVar5 = (float *)thunk_FUN_10008500(local_8 + 0x958);
      *pfVar5 = fVar11 + fVar1;
      iVar2 = thunk_FUN_10008500(local_8 + 0x958);
      iVar7 = thunk_FUN_10008500(local_124);
      fVar11 = *(float *)(iVar2 + 4);
      fVar1 = *(float *)(iVar7 + 4);
      iVar2 = thunk_FUN_10008500(local_8 + 0x958);
      *(float *)(iVar2 + 4) = fVar11 + fVar1;
      iVar2 = thunk_FUN_10008500(local_8 + 0x958);
      iVar7 = thunk_FUN_10008500(local_124);
      fVar11 = *(float *)(iVar2 + 8);
      fVar1 = *(float *)(iVar7 + 8);
      iVar2 = thunk_FUN_10008500(local_8 + 0x958);
      *(float *)(iVar2 + 8) = fVar11 + fVar1;
    }
    if ((*(int *)(local_8 + 0x14) == 5) && (*(float *)(*(int *)(local_8 + 0x970) + 0xc) != 0.0)) {
      thunk_FUN_100b1100(DAT_102e15e0);
      for (local_128 = 0; local_128 < 0x40; local_128 = local_128 + 1) {
        iVar2 = thunk_FUN_10008500(local_8 + 0x974 + local_128 * 0xc);
        if ((0.0 <= *(float *)(iVar2 + 8)) &&
           ((((*(int *)(local_8 + 0x18) == 0 ||
              (pfVar5 = (float *)thunk_FUN_10008500(local_8 + 0x974 + local_128 * 0xc),
              *pfVar5 <= ((float)DAT_102e1234 / 640.0) * (float)*(int *)(local_8 + 0x13c))) ||
             (iVar2 = thunk_FUN_10008500(local_8 + 0x974 + local_128 * 0xc),
             *(float *)(iVar2 + 4) <=
             ((float)DAT_102e1238 / 480.0) * (float)*(int *)(local_8 + 0x140))) ||
            ((pfVar5 = (float *)thunk_FUN_10008500(local_8 + 0x974 + local_128 * 0xc),
             ((float)DAT_102e1234 / 640.0) *
             (float)(*(int *)(local_8 + 0x13c) + *(int *)(local_8 + 0x148)) <= *pfVar5 ||
             (iVar2 = thunk_FUN_10008500(local_8 + 0x974 + local_128 * 0xc),
             ((float)DAT_102e1238 / 480.0) *
             (float)(*(int *)(local_8 + 0x140) + *(int *)(local_8 + 0x144)) <= *(float *)(iVar2 + 4)
             )))))) {
          if (*(short *)(&DAT_1031fa08 + (local_128 + 1) * 0x1a) == 1) {
            local_110 = 0x3ecccccd;
            local_114 = 0x3ecccccd;
            local_118 = 0x3f800000;
          }
          else if (*(short *)(&DAT_1031fa08 + (local_128 + 1) * 0x1a) == 2) {
            local_110 = 0x3f800000;
            local_114 = 0x3ecccccd;
            local_118 = 0x3ecccccd;
          }
          else {
            local_110 = 0x3f4ccccd;
            local_114 = 0x3f4ccccd;
            local_118 = 0x3f4ccccd;
          }
          FUN_100bb6e0(local_10c,"%s");
          sVar8 = _strlen(local_10c);
          local_c = sVar8 * 3;
          (*DAT_102e14c8)(local_110,local_114,local_118);
          pcVar13 = local_10c;
          thunk_FUN_10008500(local_8 + 0x974 + local_128 * 0xc);
          lVar9 = __ftol();
          uVar3 = (undefined4)lVar9;
          thunk_FUN_10008500(local_8 + 0x974 + local_128 * 0xc);
          lVar9 = __ftol();
          thunk_FUN_10040bd0((int)lVar9,uVar3,pcVar13);
        }
      }
    }
  }
  return 1;
}

/* 1004af10  FUN_1004af10  (300 bytes)
 * undefined FUN_1004af10(char param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 */
void __thiscall
FUN_1004af10(void *this,char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == '\0') {
    DAT_10320530 = 0;
    DAT_10320644 = 0;
    DAT_10321fd4 = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0xcac) = 0;
    *(undefined4 *)((int)this + 0xca8) = 0;
    *(undefined4 *)((int)this + 0x950) = 0;
    *(undefined4 *)((int)this + 0xc9c) = 0;
    _memset((void *)((int)this + 0x150),0,0x800);
    thunk_FUN_1004b530(this,2,0);
    thunk_FUN_1004ba60((int)this);
    thunk_FUN_1004c350((int)this);
    thunk_FUN_1004a500();
  }
  else if (param_1 == '\x02') {
    if (DAT_10320638 == 4) {
      DAT_10320640 = param_2;
      *(undefined4 *)((int)this + 0x950) = param_2;
      DAT_1032063c = param_3;
    }
    *(undefined4 *)((int)this + 0xca8) = param_2;
    *(undefined4 *)((int)this + 0xcac) = param_3;
    DAT_10321fd8 = param_4;
  }
  else {
    (*DAT_102e14fc)("CHudSpectator::DirectorEvent: unknown director command.\n");
  }
  return;
}

/* 1004b090  FUN_1004b090  (292 bytes)
 * undefined FUN_1004b090(char param_1)
 */
void __thiscall FUN_1004b090(void *this,char param_1)

{
  char cVar1;
  int *piVar2;
  int local_10;
  int local_c;
  
  if (*(int *)((int)this + 0x950) == 0) {
    local_c = 1;
  }
  else {
    local_c = *(int *)((int)this + 0x950);
  }
  *(undefined4 *)((int)this + 0x950) = 0;
  local_10 = local_c;
  thunk_FUN_100b1100(DAT_102e15e0);
  while( true ) {
    local_10 = local_10 + (-(uint)(param_1 != '\0') & 0xfffffffe) + 1;
    if (0x40 < local_10) {
      local_10 = 1;
    }
    if (local_10 < 1) {
      local_10 = 0x40;
    }
    piVar2 = (int *)(*DAT_102e152c)(local_10);
    cVar1 = thunk_FUN_1004b9e0(piVar2);
    if (cVar1 != '\0') break;
    if (local_10 == local_c) {
LAB_1004b14c:
      if (*(int *)((int)this + 0x950) == 0) {
        (*DAT_102e14f8)("No observer targets.\n");
      }
      else {
        if (*(int *)((int)this + 0x14) != 3) {
          DAT_10320640 = *(undefined4 *)((int)this + 0x950);
          DAT_1032063c = 0;
        }
        (*DAT_102e14f8)("Now Tracking %s\n",
                        *(undefined4 *)(&DAT_1031f3e0 + *(int *)((int)this + 0x950) * 0x14));
      }
      return;
    }
  }
  *(int *)((int)this + 0x950) = local_10;
  goto LAB_1004b14c;
}

/* 1004b200  FUN_1004b200  (554 bytes)
 * undefined FUN_1004b200(uint param_1)
 */
void __thiscall FUN_1004b200(void *this,uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  float10 fVar4;
  int local_18;
  int local_14;
  
  fVar4 = (float10)(*DAT_102e1530)();
  local_14 = *(int *)((int)this + 0x14);
  local_18 = *(int *)((int)this + 0x18);
  if ((*(float *)((int)this + 0xc9c) <= (float)fVar4) && (iVar1 = (*DAT_102e15b8)(), iVar1 == 1)) {
    if (((param_1 & 2) != 0) && (local_14 = local_14 + 1, 5 < local_14)) {
      local_14 = 2;
    }
    if (((param_1 & 4) != 0) && (local_18 = local_18 + 1, 3 < local_18)) {
      local_18 = 0;
    }
    if ((param_1 & 0x801) != 0) {
      DAT_10320638 = 2;
      thunk_FUN_1004b090(this,(param_1 & 0x800) != 0);
      if ((*(int *)((int)this + 0x14) == 3) && (*(int *)((int)this + 0x950) != 0)) {
        iVar1 = (*DAT_102e152c)(*(undefined4 *)((int)this + 0x950));
        puVar2 = (undefined4 *)thunk_FUN_10008500(iVar1 + 0xb48);
        DAT_10321ff0 = *puVar2;
        iVar3 = thunk_FUN_10008500(iVar1 + 0xb48);
        DAT_10321ff4 = *(undefined4 *)(iVar3 + 4);
        iVar3 = thunk_FUN_10008500(iVar1 + 0xb48);
        DAT_10321ff8 = *(undefined4 *)(iVar3 + 8);
        puVar2 = (undefined4 *)thunk_FUN_10008500(iVar1 + 0xb54);
        DAT_10321fe0 = *puVar2;
        iVar3 = thunk_FUN_10008500(iVar1 + 0xb54);
        DAT_10321fe4 = *(undefined4 *)(iVar3 + 4);
        iVar1 = thunk_FUN_10008500(iVar1 + 0xb54);
        DAT_10321fe8 = *(undefined4 *)(iVar1 + 8);
        (*DAT_102e14e4)(&DAT_10321fe0);
        DAT_10321fd4 = 1;
      }
    }
    if ((param_1 & 8) != 0) {
      *(undefined4 *)((int)this + 0xca0) = 0x3c23d70a;
    }
    if ((param_1 & 0x10) != 0) {
      *(undefined4 *)((int)this + 0xca0) = 0xbc23d70a;
    }
    if ((param_1 & 0x200) != 0) {
      *(undefined4 *)((int)this + 0xca4) = 0xc1400000;
    }
    if ((param_1 & 0x400) != 0) {
      *(undefined4 *)((int)this + 0xca4) = 0x41400000;
    }
    if ((local_14 != *(int *)((int)this + 0x14)) || (local_18 != *(int *)((int)this + 0x18))) {
      thunk_FUN_1004b530(this,local_14,local_18);
    }
    *(float *)((int)this + 0xc9c) = (float)((float10)(double)fVar4 + (float10)0.2);
  }
  return;
}

/* 1004b4c0  FUN_1004b4c0  (82 bytes)
 * undefined FUN_1004b4c0(uint param_1)
 */
void __thiscall FUN_1004b4c0(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = (*DAT_102e15b8)();
  if (iVar1 == 1) {
    if ((param_1 & 0x18) != 0) {
      *(undefined4 *)((int)this + 0xca0) = 0;
    }
    if ((param_1 & 0x600) != 0) {
      *(undefined4 *)((int)this + 0xca4) = 0;
    }
  }
  return;
}

/* 1004b530  FUN_1004b530  (933 bytes)
 * undefined FUN_1004b530(int param_1, int param_2)
 */
void __thiscall FUN_1004b530(void *this,int param_1,int param_2)

{
  char cVar1;
  size_t sVar2;
  int *piVar3;
  char *pcVar4;
  char local_28 [32];
  void *local_8;
  
  local_8 = this;
  if ((param_1 < 1) || (5 < param_1)) {
    (*DAT_102e14f8)("Invalid spectator mode.\n");
  }
  else {
    if (param_2 != *(int *)((int)this + 0x18)) {
      *(int *)((int)this + 0x18) = param_2;
      FUN_100bb6e0(local_28,(byte_conflict *)"%c#Spec_Mode_Inset%d");
      pcVar4 = local_28;
      sVar2 = _strlen(local_28);
      thunk_FUN_100688f0(0,sVar2 + 1,pcVar4);
    }
    if (param_1 != *(int *)((int)local_8 + 0x14)) {
      switch(param_1) {
      case 2:
        DAT_10320638 = 4;
        break;
      case 3:
        DAT_10320638 = 3;
        if (*(int *)((int)local_8 + 0x14) == 2) {
          DAT_10321ff0 = DAT_10320f68;
          DAT_10321ff4 = DAT_10320f6c;
          DAT_10321ff8 = DAT_10320f70;
          DAT_10321fe0 = DAT_10320730;
          DAT_10321fe4 = DAT_10320734;
          DAT_10321fe8 = DAT_10320738;
          (*DAT_102e14e4)(&DAT_10321fe0);
          DAT_10321fd4 = 1;
        }
        if (*(int *)((int)local_8 + 0x14) == 4) {
          thunk_FUN_100b9510(*(int *)((int)local_8 + 0x950),&DAT_10321ff0,(float *)&DAT_10321fe0);
          (*DAT_102e14e4)(&DAT_10321fe0);
          DAT_10321fd4 = 1;
        }
        *(undefined4 *)((int)local_8 + 0x950) = 0;
        DAT_10320640 = 0;
        DAT_1032063c = 0;
        break;
      case 4:
        DAT_10320638 = 5;
        break;
      case 5:
        DAT_10320638 = 4;
        *(undefined4 *)((int)local_8 + 0x954) = *(undefined4 *)((int)local_8 + 0x2c);
        *(undefined4 *)((int)local_8 + 0x958) = *(undefined4 *)((int)local_8 + 0x20);
        *(undefined4 *)((int)local_8 + 0x95c) = *(undefined4 *)((int)local_8 + 0x24);
        *(undefined4 *)((int)local_8 + 0x960) = *(undefined4 *)((int)local_8 + 0x28);
      }
      *(int *)((int)local_8 + 0x14) = param_1;
      FUN_100bb6e0(local_28,(byte_conflict *)"%c#Spec_Mode%d");
      pcVar4 = local_28;
      sVar2 = _strlen(local_28);
      thunk_FUN_100688f0(0,sVar2 + 1,pcVar4);
      if ((DAT_10320638 == 4) && (*(int *)((int)local_8 + 0x950) == 0)) {
        piVar3 = (int *)(*DAT_102e152c)(*(undefined4 *)((int)local_8 + 0xca8));
        cVar1 = thunk_FUN_1004b9e0(piVar3);
        if (cVar1 != '\0') {
          *(undefined4 *)((int)local_8 + 0x950) = *(undefined4 *)((int)local_8 + 0xca8);
          DAT_10320640 = *(undefined4 *)((int)local_8 + 0x950);
          DAT_1032063c = *(undefined4 *)((int)local_8 + 0xcac);
        }
      }
      if ((*(int *)((int)local_8 + 0x14) == 3) || (*(int *)((int)local_8 + 0x14) == 4)) {
        DAT_102e8064 = 0x18;
        DAT_102e806c = 0;
        DAT_102e8068 = 0x30;
        DAT_102e8070 = 0x18;
        (*DAT_102e148c)(*(undefined4 *)((int)local_8 + 0xc94),0x18,0x30,0,0x18,0xff,0xff,0xff);
      }
      else {
        _memset(&DAT_102e8064,0,0x10);
        (*DAT_102e148c)(0,DAT_102e8064,DAT_102e8068,DAT_102e806c,DAT_102e8070,0,0,0);
      }
    }
    if ((*(int *)((int)local_8 + 0x14) != 5) &&
       ((*(int *)((int)local_8 + 0x18) == 1 || (*(int *)((int)local_8 + 0x18) == 2)))) {
      thunk_FUN_1004b530(local_8,*(int *)((int)local_8 + 0x14),3);
    }
    if ((*(int *)((int)local_8 + 0x14) == 5) && (*(int *)((int)local_8 + 0x18) == 3)) {
      thunk_FUN_1004b530(local_8,*(int *)((int)local_8 + 0x14),0);
    }
    thunk_FUN_100af0c0(DAT_102e15e0);
  }
  return;
}

/* 1004b9e0  FUN_1004b9e0  (97 bytes)
 * undefined1 FUN_1004b9e0(int * param_1)
 */
undefined1 FUN_1004b9e0(int *param_1)

{
  int *piVar1;
  
  if ((((param_1 != (int *)0x0) && (param_1[1] != 0)) && (*(short *)((int)param_1 + 0x2ea) != 0)) &&
     ((piVar1 = (int *)(*DAT_102e1524)(), param_1 != piVar1 &&
      (*(int *)(&DAT_1031f3e0 + *param_1 * 0x14) != 0)))) {
    return 1;
  }
  return 0;
}

/* 1004ba60  FUN_1004ba60  (1828 bytes)
 * uint FUN_1004ba60(int param_1)
 */
uint __fastcall FUN_1004ba60(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  undefined4 uVar5;
  float *pfVar6;
  float10 fVar7;
  longlong lVar8;
  int local_610;
  uint local_608 [255];
  undefined1 auStack_20c [4];
  uint local_208 [64];
  undefined1 local_108 [256];
  int local_8;
  
  local_8 = param_1;
  _memset((void *)(param_1 + 0x20),0,300);
  *(undefined4 *)(local_8 + 0x13c) = 4;
  *(undefined4 *)(local_8 + 0x140) = 4;
  *(undefined4 *)(local_8 + 0x144) = 0xb4;
  *(undefined4 *)(local_8 + 0x148) = 0xf0;
  puVar1 = (undefined4 *)thunk_FUN_10008500(local_8 + 0x20);
  *puVar1 = 0;
  iVar2 = thunk_FUN_10008500(local_8 + 0x20);
  *(undefined4 *)(iVar2 + 4) = 0;
  iVar2 = thunk_FUN_10008500(local_8 + 0x20);
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(local_8 + 0x2c) = 0x3f800000;
  *(undefined4 *)(local_8 + 0x30) = 0;
  *(undefined4 *)(local_8 + 0x34) = 0;
  iVar2 = (*DAT_102e1580)();
  FUN_100bba20(local_208,(uint *)(iVar2 + 5));
  sVar3 = _strlen((char *)local_208);
  auStack_20c[sVar3] = 0;
  FUN_100bb6e0(local_108,(byte_conflict *)"overviews/%s.txt");
  local_610 = (*DAT_102e1594)(local_108,5,0);
  if (local_610 == 0) {
    uVar4 = (*DAT_102e14f8)("Couldn\'t open file %s. Using default values for overiew mode.\n",
                            local_108);
    uVar4 = uVar4 & 0xffffff00;
  }
  else {
    while (local_610 = (*DAT_102e1598)(local_610,local_608), local_610 != 0) {
      uVar4 = FUN_100db540((byte_conflict *)local_608,(byte_conflict *)"global");
      if (uVar4 == 0) {
        uVar5 = (*DAT_102e1598)(local_610,local_608);
        uVar4 = FUN_100db540((byte_conflict *)local_608,"{");
        if (uVar4 != 0) {
          uVar4 = (*DAT_102e14f8)("Error parsing overview file %s. (expected { )\n",local_108);
          return uVar4 & 0xffffff00;
        }
        local_610 = (*DAT_102e1598)(uVar5,local_608);
        while (uVar4 = FUN_100db540((byte_conflict *)local_608,"}"), uVar4 != 0) {
          uVar4 = FUN_100db540((byte_conflict *)local_608,"zoom");
          if (uVar4 == 0) {
            local_610 = (*DAT_102e1598)(local_610,local_608);
            fVar7 = FUN_100bda90((byte_conflict *)local_608);
            *(float *)(local_8 + 0x2c) = (float)fVar7;
          }
          else {
            uVar4 = FUN_100db540((byte_conflict *)local_608,(byte_conflict *)"origin");
            if (uVar4 == 0) {
              uVar5 = (*DAT_102e1598)(local_610,local_608);
              fVar7 = FUN_100bda90((byte_conflict *)local_608);
              pfVar6 = (float *)thunk_FUN_10008500(local_8 + 0x20);
              *pfVar6 = (float)fVar7;
              uVar5 = (*DAT_102e1598)(uVar5,local_608);
              fVar7 = FUN_100bda90((byte_conflict *)local_608);
              iVar2 = thunk_FUN_10008500(local_8 + 0x20);
              *(float *)(iVar2 + 4) = (float)fVar7;
              local_610 = (*DAT_102e1598)(uVar5,local_608);
              fVar7 = FUN_100bda90((byte_conflict *)local_608);
              iVar2 = thunk_FUN_10008500(local_8 + 0x20);
              *(float *)(iVar2 + 8) = (float)fVar7;
            }
            else {
              uVar4 = FUN_100db540((byte_conflict *)local_608,(byte_conflict *)"rotated");
              if (uVar4 == 0) {
                local_610 = (*DAT_102e1598)(local_610,local_608);
                uVar5 = FUN_100c0d30((byte_conflict *)local_608);
                *(undefined4 *)(local_8 + 0x138) = uVar5;
              }
              else {
                uVar4 = FUN_100db540((byte_conflict *)local_608,(byte_conflict *)"inset");
                if (uVar4 != 0) {
                  uVar4 = (*DAT_102e14f8)("Error parsing overview file %s. (%s unkown)\n",local_108,
                                          local_608);
                  return uVar4 & 0xffffff00;
                }
                uVar5 = (*DAT_102e1598)(local_610,local_608);
                FUN_100bda90((byte_conflict *)local_608);
                lVar8 = __ftol();
                *(int *)(local_8 + 0x13c) = (int)lVar8;
                uVar5 = (*DAT_102e1598)(uVar5,local_608);
                FUN_100bda90((byte_conflict *)local_608);
                lVar8 = __ftol();
                *(int *)(local_8 + 0x140) = (int)lVar8;
                uVar5 = (*DAT_102e1598)(uVar5,local_608);
                FUN_100bda90((byte_conflict *)local_608);
                lVar8 = __ftol();
                *(int *)(local_8 + 0x148) = (int)lVar8;
                local_610 = (*DAT_102e1598)(uVar5,local_608);
                FUN_100bda90((byte_conflict *)local_608);
                lVar8 = __ftol();
                *(int *)(local_8 + 0x144) = (int)lVar8;
              }
            }
          }
          local_610 = (*DAT_102e1598)(local_610,local_608);
        }
      }
      else {
        uVar4 = FUN_100db540((byte_conflict *)local_608,(byte_conflict *)"layer");
        if (uVar4 == 0) {
          if (*(int *)(local_8 + 0x30) == 1) {
            uVar4 = (*DAT_102e14f8)("Error parsing overview file %s. ( too many layers )\n",
                                    local_108);
            return uVar4 & 0xffffff00;
          }
          uVar5 = (*DAT_102e1598)(local_610,local_608);
          uVar4 = FUN_100db540((byte_conflict *)local_608,"{");
          if (uVar4 != 0) {
            uVar4 = (*DAT_102e14f8)("Error parsing overview file %s. (expected { )\n",local_108);
            return uVar4 & 0xffffff00;
          }
          local_610 = (*DAT_102e1598)(uVar5,local_608);
          while (uVar4 = FUN_100db540((byte_conflict *)local_608,"}"), uVar4 != 0) {
            uVar4 = FUN_100db540((byte_conflict *)local_608,(byte_conflict *)"image");
            if (uVar4 == 0) {
              local_610 = (*DAT_102e1598)(local_610,local_608);
              FUN_100bba20((uint *)(local_8 + 0x38 + *(int *)(local_8 + 0x30) * 0xff),local_608);
            }
            else {
              uVar4 = FUN_100db540((byte_conflict *)local_608,(byte_conflict *)"height");
              if (uVar4 != 0) {
                uVar4 = (*DAT_102e14f8)("Error parsing overview file %s. (%s unkown)\n",local_108,
                                        local_608);
                return uVar4 & 0xffffff00;
              }
              local_610 = (*DAT_102e1598)(local_610,local_608);
              fVar7 = FUN_100bda90((byte_conflict *)local_608);
              *(float *)(local_8 + 0x34 + *(int *)(local_8 + 0x30) * 4) = (float)fVar7;
            }
            local_610 = (*DAT_102e1598)(local_610,local_608);
          }
          *(int *)(local_8 + 0x30) = *(int *)(local_8 + 0x30) + 1;
        }
      }
    }
    *(undefined4 *)(local_8 + 0x954) = *(undefined4 *)(local_8 + 0x2c);
    *(undefined4 *)(local_8 + 0x958) = *(undefined4 *)(local_8 + 0x20);
    *(undefined4 *)(local_8 + 0x95c) = *(undefined4 *)(local_8 + 0x24);
    *(undefined4 *)(local_8 + 0x960) = *(undefined4 *)(local_8 + 0x28);
    uVar4 = CONCAT31((int3)((uint)*(undefined4 *)(local_8 + 0x28) >> 8),1);
  }
  return uVar4;
}

/* 1004c350  FUN_1004c350  (68 bytes)
 * undefined FUN_1004c350(int param_1)
 */
void __fastcall FUN_1004c350(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x30) < 1) {
    *(undefined4 *)(param_1 + 0xc98) = 0;
  }
  else {
    uVar1 = (*DAT_102e15bc)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0xc98) = uVar1;
  }
  return;
}

/* 1004c3b0  FUN_1004c3b0  (1200 bytes)
 * undefined FUN_1004c3b0(int param_1)
 */
void __fastcall FUN_1004c3b0(int param_1)

{
  double dVar1;
  undefined4 uVar2;
  bool bVar3;
  longlong lVar4;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  bVar3 = *(int *)(param_1 + 0xc98) == 0;
  uVar2 = (*DAT_102e1550)();
  if (bVar3) {
    local_38 = 8;
    local_3c = 6;
  }
  else {
    dVar1 = (double)(*(int *)(*(int *)(param_1 + 0xc98) + 0x48) / 0xc);
    FUN_100bbfe4((void *)0xc,SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
    lVar4 = __ftol();
    local_38 = (int)lVar4 << 2;
    local_3c = (int)lVar4 * 3;
  }
  thunk_FUN_10008500(param_1 + 0x20);
  thunk_FUN_10008500(param_1 + 0x20);
  thunk_FUN_10008500(param_1 + 0x964);
  (**(code **)(DAT_102e15a0 + 4))(2);
  (**(code **)(DAT_102e15a0 + 0x28))(1);
  (**(code **)(DAT_102e15a0 + 0x10))(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  local_40 = 0;
  if (*(int *)(param_1 + 0x138) == 0) {
    for (local_2c = 0; local_2c < local_3c; local_2c = local_2c + 1) {
      for (local_30 = 0; local_30 < local_38; local_30 = local_30 + 1) {
        if (bVar3) {
          (**(code **)(DAT_102e15a0 + 0x2c))(uVar2,0);
        }
        else {
          (**(code **)(DAT_102e15a0 + 0x2c))(*(undefined4 *)(param_1 + 0xc98),local_40);
        }
        (**(code **)(DAT_102e15a0 + 8))(2);
        (**(code **)(DAT_102e15a0 + 0x18))(0,0);
        (**(code **)(DAT_102e15a0 + 0x20))();
        (**(code **)(DAT_102e15a0 + 0x18))(0,0x3f800000);
        (**(code **)(DAT_102e15a0 + 0x20))();
        (**(code **)(DAT_102e15a0 + 0x18))(0x3f800000,0x3f800000);
        (**(code **)(DAT_102e15a0 + 0x20))();
        (**(code **)(DAT_102e15a0 + 0x18))(0x3f800000,0);
        (**(code **)(DAT_102e15a0 + 0x20))();
        (**(code **)(DAT_102e15a0 + 0xc))();
        local_40 = local_40 + 1;
      }
    }
  }
  else {
    for (local_30 = 0; local_30 < local_3c; local_30 = local_30 + 1) {
      for (local_2c = 0; local_2c < local_38; local_2c = local_2c + 1) {
        if (bVar3) {
          (**(code **)(DAT_102e15a0 + 0x2c))(uVar2,0);
        }
        else {
          (**(code **)(DAT_102e15a0 + 0x2c))(*(undefined4 *)(param_1 + 0xc98),local_40);
        }
        (**(code **)(DAT_102e15a0 + 8))(2);
        (**(code **)(DAT_102e15a0 + 0x18))(0,0);
        (**(code **)(DAT_102e15a0 + 0x20))();
        (**(code **)(DAT_102e15a0 + 0x18))(0x3f800000,0);
        (**(code **)(DAT_102e15a0 + 0x20))();
        (**(code **)(DAT_102e15a0 + 0x18))(0x3f800000,0x3f800000);
        (**(code **)(DAT_102e15a0 + 0x20))();
        (**(code **)(DAT_102e15a0 + 0x18))(0,0x3f800000);
        (**(code **)(DAT_102e15a0 + 0x20))();
        (**(code **)(DAT_102e15a0 + 0xc))();
        local_40 = local_40 + 1;
      }
    }
  }
  return;
}

/* 1004c990  FUN_1004c990  (349 bytes)
 * undefined FUN_1004c990(float * param_1)
 */
void FUN_1004c990(float *param_1)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float *pfVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined1 local_20 [12];
  undefined1 local_14 [12];
  int local_8;
  
  thunk_FUN_10007fe0(local_14);
  thunk_FUN_10007fe0(local_20);
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_8 + 0x958);
  puVar3 = (undefined4 *)thunk_FUN_10008500(local_20);
  *puVar3 = *puVar2;
  iVar4 = thunk_FUN_10008500(local_8 + 0x958);
  iVar5 = thunk_FUN_10008500(local_20);
  *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar4 + 4);
  iVar4 = thunk_FUN_10008500(local_8 + 0x958);
  pfVar6 = (float *)thunk_FUN_10008500(local_8 + 0x964);
  fVar11 = *pfVar6;
  fVar1 = *(float *)(iVar4 + 8);
  iVar4 = thunk_FUN_10008500(local_20);
  *(float *)(iVar4 + 8) = ((90.0 - fVar11) / 90.0) * fVar1;
  uVar12 = 0;
  uVar10 = 0;
  uVar7 = thunk_FUN_10008500(local_14);
  uVar8 = thunk_FUN_10008500(local_8 + 0x964);
  (*DAT_102e14b8)(uVar8,uVar7,uVar10,uVar12);
  pfVar6 = (float *)thunk_FUN_10008500(local_14);
  thunk_FUN_100981d0(pfVar6);
  pfVar6 = (float *)thunk_FUN_10008500(local_14);
  fVar11 = -(4096.0 / *(float *)(local_8 + 0x954));
  pfVar9 = (float *)thunk_FUN_10008500(local_14);
  thunk_FUN_100982e0(pfVar9,fVar11,pfVar6);
  pfVar6 = (float *)thunk_FUN_10008500(local_20);
  pfVar9 = (float *)thunk_FUN_10008500(local_14);
  *param_1 = *pfVar6 + *pfVar9;
  iVar4 = thunk_FUN_10008500(local_20);
  iVar5 = thunk_FUN_10008500(local_14);
  param_1[1] = *(float *)(iVar4 + 4) + *(float *)(iVar5 + 4);
  iVar4 = thunk_FUN_10008500(local_20);
  iVar5 = thunk_FUN_10008500(local_14);
  param_1[2] = *(float *)(iVar4 + 8) + *(float *)(iVar5 + 8);
  return;
}

/* 1004cb50  FUN_1004cb50  (3626 bytes)
 * undefined FUN_1004cb50(void)
 */
void FUN_1004cb50(void)

{
  float *pfVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  void *pvVar11;
  void *extraout_ECX;
  void *this;
  void *this_00;
  float10 fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float local_d8 [12];
  int *local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined1 local_88 [12];
  undefined1 local_7c [12];
  undefined1 local_70 [12];
  undefined1 local_64 [12];
  undefined1 local_58 [12];
  undefined1 local_4c [12];
  undefined1 local_40 [12];
  undefined1 local_34 [12];
  undefined1 local_28 [12];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  thunk_FUN_10007fe0(local_28);
  thunk_FUN_10007fe0(local_34);
  thunk_FUN_10007fe0(local_40);
  thunk_FUN_10007fe0(local_4c);
  thunk_FUN_10007fe0(local_58);
  thunk_FUN_10007fe0(local_64);
  thunk_FUN_10007fe0(local_70);
  thunk_FUN_10007fe0(local_7c);
  thunk_FUN_10007fe0(local_88);
  local_a4 = 4.0;
  pfVar1 = (float *)thunk_FUN_10008500(local_8 + 0x964);
  fVar16 = (90.0 - *pfVar1) / 90.0;
  local_94 = fVar16 * *(float *)(local_8 + 0x34);
  thunk_FUN_1003d340(&local_10,&local_14,&local_18,0xffa000);
  local_98 = (float)(int)local_10 / 255.0;
  local_9c = (float)(int)local_14 / 255.0;
  local_a0 = (float)(int)local_18 / 255.0;
  (**(code **)(DAT_102e15a0 + 0x28))(1);
  for (local_c = 0; local_c < 0x40; local_c = local_c + 1) {
    iVar2 = thunk_FUN_10008500(local_8 + 0x974 + local_c * 0xc);
    *(undefined4 *)(iVar2 + 8) = 0xbf800000;
  }
  for (local_c = 0; local_c < 0x80; local_c = local_c + 1) {
    if (*(int *)(local_8 + 0x150 + local_c * 0x10) != 0) {
      local_1c = (*DAT_102e1550)(*(undefined4 *)(local_8 + 0x150 + local_c * 0x10));
      local_a8 = *(int **)(local_8 + 0x154 + local_c * 0x10);
      (**(code **)(DAT_102e15a0 + 0x2c))(local_1c,0);
      (**(code **)(DAT_102e15a0 + 4))(2);
      uVar15 = 0;
      uVar3 = thunk_FUN_10008500(local_64);
      uVar4 = thunk_FUN_10008500(local_4c);
      uVar5 = thunk_FUN_10008500(local_a8 + 0x2d5);
      (*DAT_102e14b8)(uVar5,uVar4,uVar3,uVar15);
      puVar6 = (undefined4 *)thunk_FUN_10008500(local_a8 + 0x2d2);
      puVar7 = (undefined4 *)thunk_FUN_10008500(local_28);
      *puVar7 = *puVar6;
      iVar2 = thunk_FUN_10008500(local_a8 + 0x2d2);
      iVar8 = thunk_FUN_10008500(local_28);
      *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(iVar2 + 4);
      iVar2 = thunk_FUN_10008500(local_a8 + 0x2d2);
      iVar8 = thunk_FUN_10008500(local_28);
      *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar2 + 8);
      (**(code **)(DAT_102e15a0 + 8))(2);
      (**(code **)(DAT_102e15a0 + 0x10))(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
      (**(code **)(DAT_102e15a0 + 0x18))(0x3f800000,0);
      pfVar1 = (float *)thunk_FUN_10008500(local_34);
      pfVar9 = (float *)thunk_FUN_10008500(local_64);
      fVar13 = local_a4 * 16.0;
      pfVar10 = (float *)thunk_FUN_10008500(local_28);
      thunk_FUN_10098330(pfVar10,fVar13,pfVar9,pfVar1);
      pfVar1 = (float *)thunk_FUN_10008500(local_34);
      pfVar9 = (float *)thunk_FUN_10008500(local_4c);
      fVar13 = local_a4 * 16.0;
      pfVar10 = (float *)thunk_FUN_10008500(local_34);
      thunk_FUN_10098330(pfVar10,fVar13,pfVar9,pfVar1);
      iVar2 = thunk_FUN_10008500(local_34);
      *(float *)(iVar2 + 8) = fVar16 * *(float *)(iVar2 + 8);
      uVar3 = thunk_FUN_10008500(local_34);
      (**(code **)(DAT_102e15a0 + 0x1c))(uVar3);
      (**(code **)(DAT_102e15a0 + 0x18))(0,0);
      pfVar1 = (float *)thunk_FUN_10008500(local_34);
      pfVar9 = (float *)thunk_FUN_10008500(local_64);
      fVar13 = local_a4 * 16.0;
      pfVar10 = (float *)thunk_FUN_10008500(local_28);
      thunk_FUN_10098330(pfVar10,fVar13,pfVar9,pfVar1);
      pfVar1 = (float *)thunk_FUN_10008500(local_34);
      pfVar9 = (float *)thunk_FUN_10008500(local_4c);
      fVar13 = local_a4 * -16.0;
      pfVar10 = (float *)thunk_FUN_10008500(local_34);
      thunk_FUN_10098330(pfVar10,fVar13,pfVar9,pfVar1);
      iVar2 = thunk_FUN_10008500(local_34);
      *(float *)(iVar2 + 8) = fVar16 * *(float *)(iVar2 + 8);
      uVar3 = thunk_FUN_10008500(local_34);
      (**(code **)(DAT_102e15a0 + 0x1c))(uVar3);
      (**(code **)(DAT_102e15a0 + 0x18))(0,0x3f800000);
      pfVar1 = (float *)thunk_FUN_10008500(local_34);
      pfVar9 = (float *)thunk_FUN_10008500(local_64);
      fVar13 = local_a4 * -16.0;
      pfVar10 = (float *)thunk_FUN_10008500(local_28);
      thunk_FUN_10098330(pfVar10,fVar13,pfVar9,pfVar1);
      pfVar1 = (float *)thunk_FUN_10008500(local_34);
      pfVar9 = (float *)thunk_FUN_10008500(local_4c);
      fVar13 = local_a4 * -16.0;
      pfVar10 = (float *)thunk_FUN_10008500(local_34);
      thunk_FUN_10098330(pfVar10,fVar13,pfVar9,pfVar1);
      iVar2 = thunk_FUN_10008500(local_34);
      *(float *)(iVar2 + 8) = fVar16 * *(float *)(iVar2 + 8);
      uVar3 = thunk_FUN_10008500(local_34);
      (**(code **)(DAT_102e15a0 + 0x1c))(uVar3);
      (**(code **)(DAT_102e15a0 + 0x18))(0x3f800000,0x3f800000);
      pfVar1 = (float *)thunk_FUN_10008500(local_34);
      pfVar9 = (float *)thunk_FUN_10008500(local_64);
      fVar13 = local_a4 * -16.0;
      pfVar10 = (float *)thunk_FUN_10008500(local_28);
      thunk_FUN_10098330(pfVar10,fVar13,pfVar9,pfVar1);
      pfVar1 = (float *)thunk_FUN_10008500(local_34);
      pfVar9 = (float *)thunk_FUN_10008500(local_4c);
      fVar13 = local_a4 * 16.0;
      pfVar10 = (float *)thunk_FUN_10008500(local_34);
      thunk_FUN_10098330(pfVar10,fVar13,pfVar9,pfVar1);
      iVar2 = thunk_FUN_10008500(local_34);
      *(float *)(iVar2 + 8) = fVar16 * *(float *)(iVar2 + 8);
      uVar3 = thunk_FUN_10008500(local_34);
      (**(code **)(DAT_102e15a0 + 0x1c))(uVar3);
      (**(code **)(DAT_102e15a0 + 0xc))();
      if (local_a8[1] != 0) {
        iVar2 = thunk_FUN_10008500(local_28);
        *(float *)(iVar2 + 8) = fVar16 * *(float *)(iVar2 + 8);
        (**(code **)(DAT_102e15a0 + 4))(5);
        local_1c = (*DAT_102e1550)(*(undefined4 *)(local_8 + 0xc90));
        (**(code **)(DAT_102e15a0 + 0x2c))(local_1c,0);
        (**(code **)(DAT_102e15a0 + 0x10))(local_98,local_9c,local_a0,0x3e99999a);
        (**(code **)(DAT_102e15a0 + 8))(2);
        (**(code **)(DAT_102e15a0 + 0x18))(0x3f800000,0);
        iVar2 = thunk_FUN_10008500(local_28);
        fVar13 = *(float *)(iVar2 + 8) - fVar16;
        iVar2 = thunk_FUN_10008500(local_28);
        fVar14 = *(float *)(iVar2 + 4) + 4.0;
        pfVar1 = (float *)thunk_FUN_10008500(local_28);
        (**(code **)(DAT_102e15a0 + 0x20))(*pfVar1 + 4.0,fVar14,fVar13);
        (**(code **)(DAT_102e15a0 + 0x18))(0,0);
        iVar2 = thunk_FUN_10008500(local_28);
        fVar13 = *(float *)(iVar2 + 8) - fVar16;
        iVar2 = thunk_FUN_10008500(local_28);
        fVar14 = *(float *)(iVar2 + 4) - 4.0;
        pfVar1 = (float *)thunk_FUN_10008500(local_28);
        (**(code **)(DAT_102e15a0 + 0x20))(*pfVar1 - 4.0,fVar14,fVar13);
        (**(code **)(DAT_102e15a0 + 0x18))(0,0x3f800000);
        fVar14 = local_94;
        iVar2 = thunk_FUN_10008500(local_28);
        fVar13 = *(float *)(iVar2 + 4) - 4.0;
        pfVar1 = (float *)thunk_FUN_10008500(local_28);
        (**(code **)(DAT_102e15a0 + 0x20))(*pfVar1 - 4.0,fVar13,fVar14);
        (**(code **)(DAT_102e15a0 + 0x18))(0x3f800000,0x3f800000);
        fVar14 = local_94;
        iVar2 = thunk_FUN_10008500(local_28);
        fVar13 = *(float *)(iVar2 + 4) + 4.0;
        pfVar1 = (float *)thunk_FUN_10008500(local_28);
        (**(code **)(DAT_102e15a0 + 0x20))(*pfVar1 + 4.0,fVar13,fVar14);
        (**(code **)(DAT_102e15a0 + 0xc))();
        (**(code **)(DAT_102e15a0 + 8))(2);
        (**(code **)(DAT_102e15a0 + 0x18))(0x3f800000,0);
        iVar2 = thunk_FUN_10008500(local_28);
        fVar13 = *(float *)(iVar2 + 8) - fVar16;
        iVar2 = thunk_FUN_10008500(local_28);
        fVar14 = *(float *)(iVar2 + 4) + 4.0;
        pfVar1 = (float *)thunk_FUN_10008500(local_28);
        (**(code **)(DAT_102e15a0 + 0x20))(*pfVar1 - 4.0,fVar14,fVar13);
        (**(code **)(DAT_102e15a0 + 0x18))(0,0);
        iVar2 = thunk_FUN_10008500(local_28);
        fVar13 = *(float *)(iVar2 + 8) - fVar16;
        iVar2 = thunk_FUN_10008500(local_28);
        fVar14 = *(float *)(iVar2 + 4) - 4.0;
        pfVar1 = (float *)thunk_FUN_10008500(local_28);
        (**(code **)(DAT_102e15a0 + 0x20))(*pfVar1 + 4.0,fVar14,fVar13);
        (**(code **)(DAT_102e15a0 + 0x18))(0,0x3f800000);
        fVar14 = local_94;
        iVar2 = thunk_FUN_10008500(local_28);
        fVar13 = *(float *)(iVar2 + 4) - 4.0;
        pfVar1 = (float *)thunk_FUN_10008500(local_28);
        (**(code **)(DAT_102e15a0 + 0x20))(*pfVar1 + 4.0,fVar13,fVar14);
        (**(code **)(DAT_102e15a0 + 0x18))(0x3f800000,0x3f800000);
        fVar14 = local_94;
        iVar2 = thunk_FUN_10008500(local_28);
        fVar13 = *(float *)(iVar2 + 4) + 4.0;
        pfVar1 = (float *)thunk_FUN_10008500(local_28);
        (**(code **)(DAT_102e15a0 + 0x20))(*pfVar1 - 4.0,fVar13,fVar14);
        (**(code **)(DAT_102e15a0 + 0xc))();
        uVar3 = thunk_FUN_10008500(local_7c);
        uVar4 = thunk_FUN_10008500(local_28);
        iVar2 = (**(code **)(DAT_102e15a0 + 0x30))(uVar4,uVar3);
        if (iVar2 == 0) {
          pfVar1 = (float *)thunk_FUN_10008500(local_7c);
          fVar13 = *pfVar1;
          fVar14 = (float)DAT_102e1234;
          pfVar1 = (float *)thunk_FUN_10008500(local_7c);
          *pfVar1 = (fVar13 + 1.0) * fVar14 * 0.5;
          iVar2 = thunk_FUN_10008500(local_7c);
          fVar13 = *(float *)(iVar2 + 4);
          fVar14 = (float)DAT_102e1238;
          iVar2 = thunk_FUN_10008500(local_7c);
          *(float *)(iVar2 + 4) = (1.0 - fVar13) * fVar14 * 0.5;
          iVar2 = thunk_FUN_10008500(local_7c);
          *(undefined4 *)(iVar2 + 8) = 0;
          pfVar1 = (float *)thunk_FUN_10008500(local_28);
          *pfVar1 = *pfVar1 + 32.0;
          iVar2 = thunk_FUN_10008500(local_28);
          *(float *)(iVar2 + 4) = *(float *)(iVar2 + 4) + 32.0;
          uVar3 = thunk_FUN_10008500(local_88);
          uVar4 = thunk_FUN_10008500(local_28);
          (**(code **)(DAT_102e15a0 + 0x30))(uVar4,uVar3);
          pfVar1 = (float *)thunk_FUN_10008500(local_88);
          fVar13 = *pfVar1;
          fVar14 = (float)DAT_102e1234;
          pfVar1 = (float *)thunk_FUN_10008500(local_88);
          *pfVar1 = (fVar13 + 1.0) * fVar14 * 0.5;
          iVar2 = thunk_FUN_10008500(local_88);
          fVar13 = *(float *)(iVar2 + 4);
          fVar14 = (float)DAT_102e1238;
          iVar2 = thunk_FUN_10008500(local_88);
          *(float *)(iVar2 + 4) = (1.0 - fVar13) * fVar14 * 0.5;
          iVar2 = thunk_FUN_10008500(local_88);
          *(undefined4 *)(iVar2 + 8) = 0;
          pfVar1 = (float *)thunk_FUN_10008500(local_88);
          pfVar9 = (float *)thunk_FUN_10008500(local_7c);
          fVar13 = *pfVar1;
          fVar14 = *pfVar9;
          pfVar1 = (float *)thunk_FUN_10008500(local_88);
          *pfVar1 = fVar13 - fVar14;
          iVar2 = thunk_FUN_10008500(local_88);
          iVar8 = thunk_FUN_10008500(local_7c);
          fVar13 = *(float *)(iVar2 + 4);
          fVar14 = *(float *)(iVar8 + 4);
          iVar2 = thunk_FUN_10008500(local_88);
          *(float *)(iVar2 + 4) = fVar13 - fVar14;
          iVar2 = thunk_FUN_10008500(local_88);
          iVar8 = thunk_FUN_10008500(local_7c);
          fVar13 = *(float *)(iVar2 + 8);
          fVar14 = *(float *)(iVar8 + 8);
          iVar2 = thunk_FUN_10008500(local_88);
          *(float *)(iVar2 + 8) = fVar13 - fVar14;
          iVar8 = *local_a8 + -1;
          puVar6 = (undefined4 *)thunk_FUN_10008500(local_7c);
          puVar7 = (undefined4 *)thunk_FUN_10008500(local_8 + 0x974 + iVar8 * 0xc);
          *puVar7 = *puVar6;
          iVar2 = thunk_FUN_10008500(local_7c);
          pvVar11 = (void *)thunk_FUN_10008500(local_88);
          fVar12 = thunk_FUN_10097fc0(extraout_ECX,pvVar11);
          fVar13 = *(float *)(iVar2 + 4);
          iVar2 = thunk_FUN_10008500(local_8 + 0x974 + iVar8 * 0xc);
          *(float *)(iVar2 + 4) = (float)(fVar12 + (float10)fVar13);
          iVar2 = thunk_FUN_10008500(local_8 + 0x974 + iVar8 * 0xc);
          *(undefined4 *)(iVar2 + 8) = 0x3f800000;
        }
      }
    }
  }
  if (*(int *)(local_8 + 0x18) != 0) {
    if ((*(int *)(local_8 + 0x18) == 2) || (*(int *)(local_8 + 0x14) == 4)) {
      thunk_FUN_100b9510(*(int *)(local_8 + 0x950),&DAT_10320f68,(float *)&DAT_10320730);
    }
    local_8c = DAT_10320f68;
    local_90 = DAT_10320f6c;
    local_94 = DAT_10320f70;
    local_1c = (*DAT_102e1550)(*(undefined4 *)(local_8 + 0xc80));
    (**(code **)(DAT_102e15a0 + 4))(5);
    (**(code **)(DAT_102e15a0 + 0x2c))(local_1c,0);
    (**(code **)(DAT_102e15a0 + 0x10))(local_98,local_9c,local_a0,0x3f800000);
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = thunk_FUN_10008500(local_40);
    (*DAT_102e14b8)(&DAT_10320730,uVar3,uVar4,uVar5);
    pfVar1 = (float *)thunk_FUN_10008500(local_40);
    fVar13 = 512.0;
    pfVar9 = (float *)thunk_FUN_10008500(local_40);
    thunk_FUN_100982e0(pfVar9,fVar13,pfVar1);
    puVar6 = (undefined4 *)thunk_FUN_10008500(local_88);
    *puVar6 = 0;
    iVar2 = thunk_FUN_10008500(local_88);
    *(undefined4 *)(iVar2 + 4) = 0x42340000;
    iVar2 = thunk_FUN_10008500(local_88);
    *(undefined4 *)(iVar2 + 8) = 0;
    pfVar1 = local_d8;
    pfVar9 = (float *)thunk_FUN_10008500(local_88);
    thunk_FUN_10061ee0(this,pfVar9,pfVar1);
    pfVar9 = (float *)thunk_FUN_10008500(local_4c);
    pfVar1 = local_d8;
    pfVar10 = (float *)thunk_FUN_10008500(local_40);
    thunk_FUN_100621a0(pfVar10,pfVar1,pfVar9);
    iVar2 = thunk_FUN_10008500(local_88);
    *(undefined4 *)(iVar2 + 4) = 0xc2340000;
    pfVar1 = local_d8;
    pfVar9 = (float *)thunk_FUN_10008500(local_88);
    thunk_FUN_10061ee0(this_00,pfVar9,pfVar1);
    pfVar9 = (float *)thunk_FUN_10008500(local_58);
    pfVar1 = local_d8;
    pfVar10 = (float *)thunk_FUN_10008500(local_40);
    thunk_FUN_100621a0(pfVar10,pfVar1,pfVar9);
    (**(code **)(DAT_102e15a0 + 8))(0);
    (**(code **)(DAT_102e15a0 + 0x18))(0,0);
    iVar2 = thunk_FUN_10008500(local_4c);
    fVar13 = (local_94 + *(float *)(iVar2 + 8)) * fVar16;
    iVar2 = thunk_FUN_10008500(local_4c);
    fVar14 = local_90 + *(float *)(iVar2 + 4);
    pfVar1 = (float *)thunk_FUN_10008500(local_4c);
    (**(code **)(DAT_102e15a0 + 0x20))(local_8c + *pfVar1,fVar14,fVar13);
    (**(code **)(DAT_102e15a0 + 0x18))(0,0x3f800000);
    (**(code **)(DAT_102e15a0 + 0x20))(local_8c,local_90,local_94 * fVar16);
    (**(code **)(DAT_102e15a0 + 0x18))(0x3f800000,0x3f800000);
    iVar2 = thunk_FUN_10008500(local_58);
    fVar16 = (local_94 + *(float *)(iVar2 + 8)) * fVar16;
    iVar2 = thunk_FUN_10008500(local_58);
    fVar13 = local_90 + *(float *)(iVar2 + 4);
    pfVar1 = (float *)thunk_FUN_10008500(local_58);
    (**(code **)(DAT_102e15a0 + 0x20))(local_8c + *pfVar1,fVar13,fVar16);
    (**(code **)(DAT_102e15a0 + 0xc))();
  }
  return;
}

/* 1004dd10  FUN_1004dd10  (96 bytes)
 * undefined FUN_1004dd10(int param_1)
 */
void __fastcall FUN_1004dd10(int param_1)

{
  int iVar1;
  
  iVar1 = (*DAT_102e15b8)();
  if (((iVar1 == 1) && ((*(int *)(param_1 + 0x1c) != 0 || (*(int *)(param_1 + 0x14) == 5)))) &&
     ((*(int *)(param_1 + 0x1c) != 1 || (*(int *)(param_1 + 0x18) == 3)))) {
    thunk_FUN_1004c3b0(param_1);
    thunk_FUN_1004cb50();
    thunk_FUN_1004dd90(param_1);
  }
  return;
}

/* 1004dd90  FUN_1004dd90  (112 bytes)
 * undefined FUN_1004dd90(int param_1)
 */
void __fastcall FUN_1004dd90(int param_1)

{
  float10 fVar1;
  undefined4 local_14;
  
  fVar1 = (float10)(*DAT_102e1530)();
  for (local_14 = 0; local_14 < 0x80; local_14 = local_14 + 1) {
    if (*(double *)(param_1 + 0x158 + local_14 * 0x10) < (double)fVar1) {
      _memset((void *)(param_1 + 0x150 + local_14 * 0x10),0,0x10);
    }
  }
  return;
}

/* 1004de20  FUN_1004de20  (200 bytes)
 * uint FUN_1004de20(int param_1, int * param_2)
 */
uint __thiscall FUN_1004de20(void *this,int param_1,int *param_2)

{
  uint in_EAX;
  uint3 uVar2;
  uint uVar1;
  float10 fVar3;
  undefined4 local_c;
  
  if (param_2 == (int *)0x0) {
    uVar1 = in_EAX & 0xffffff00;
  }
  else if (param_1 == 1) {
    if (*(short *)((int)param_2 + 0x2ea) == 0) {
      uVar1 = (uint)param_2 & 0xffffff00;
    }
    else {
      if (*(short *)(&DAT_1031fa08 + *param_2 * 0x1a) == 1) {
        local_c = *(undefined4 *)((int)this + 0xc74);
      }
      else if (*(short *)(&DAT_1031fa08 + *param_2 * 0x1a) == 2) {
        local_c = *(undefined4 *)((int)this + 0xc78);
      }
      else {
        local_c = *(undefined4 *)((int)this + 0xc7c);
      }
      fVar3 = (float10)(*DAT_102e1530)();
      uVar1 = thunk_FUN_1004dfa0(this,local_c,param_2,SUB84((double)(fVar3 + (float10)-1.0),0),
                                 (int)((ulonglong)(double)(fVar3 + (float10)-1.0) >> 0x20));
    }
  }
  else {
    uVar2 = (uint3)(in_EAX >> 8);
    if (param_1 == 0) {
      uVar1 = (uint)uVar2 << 8;
    }
    else {
      uVar1 = (uint)uVar2 << 8;
    }
  }
  return uVar1;
}

/* 1004df20  FUN_1004df20  (92 bytes)
 * undefined FUN_1004df20(void * param_1)
 */
void __fastcall FUN_1004df20(void *param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = (*DAT_102e152c)();
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
    fVar2 = (float10)(*DAT_102e1530)();
    thunk_FUN_1004dfa0(param_1,*(undefined4 *)((int)param_1 + 0xc84),iVar1,
                       SUB84((double)(fVar2 + (float10)2.0),0),
                       (int)((ulonglong)(double)(fVar2 + (float10)2.0) >> 0x20));
  }
  return;
}

/* 1004dfa0  FUN_1004dfa0  (142 bytes)
 * uint FUN_1004dfa0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 */
uint __thiscall
FUN_1004dfa0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint in_EAX;
  int iVar1;
  uint local_c;
  
  local_c = 0;
  while( true ) {
    if (0x7f < (int)local_c) {
      return in_EAX & 0xffffff00;
    }
    if (*(int *)((int)this + local_c * 0x10 + 0x154) == 0) break;
    in_EAX = local_c + 1;
    local_c = in_EAX;
  }
  *(undefined4 *)((int)this + local_c * 0x10 + 0x154) = param_2;
  *(undefined4 *)((int)this + local_c * 0x10 + 0x150) = param_1;
  iVar1 = local_c * 0x10;
  *(undefined4 *)((int)this + iVar1 + 0x158) = param_3;
  *(undefined4 *)((int)this + iVar1 + 0x15c) = param_4;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

/* 1004e060  FUN_1004e060  (181 bytes)
 * undefined4 FUN_1004e060(int param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_1004e060(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0xc;
  puVar1 = (undefined4 *)thunk_FUN_10008500(param_1);
  puVar2 = (undefined4 *)thunk_FUN_10008500((int)this + 0x38);
  FUN_100bc090(puVar2,puVar1,uVar3);
  uVar3 = 0xc;
  puVar1 = (undefined4 *)thunk_FUN_10008500(param_1 + 0xc);
  puVar2 = (undefined4 *)thunk_FUN_10008500((int)this + 0x44);
  FUN_100bc090(puVar2,puVar1,uVar3);
  uVar3 = thunk_FUN_10051730(0);
  *(uint *)((int)this + 0x50) = uVar3;
  *(undefined4 *)((int)this + 0x707c) = *(undefined4 *)(param_1 + 0x18);
  _DAT_102e8078 = *(undefined4 *)(param_1 + 0x1c);
  thunk_FUN_10084aa0(this);
  *(float *)(param_1 + 0x1c) = (float)*(int *)((int)this + 0x58);
  DAT_10320f80 = (float)*(int *)((int)this + 0x1c);
  thunk_FUN_100519e0(*(uint *)((int)this + 0x50));
  return 1;
}

/* 1004e150  FUN_1004e150  (21 bytes)
 * undefined FUN_1004e150(void)
 */
void FUN_1004e150(void)

{
  FUN_1004e170();
  return;
}

/* 1004e170  FUN_1004e170  (26 bytes)
 * undefined FUN_1004e170(void)
 * called by: FUN_1004e150
 */
void FUN_1004e170(void)

{
  thunk_FUN_10007fe0(&DAT_102e80bc);
  return;
}

/* 1004e190  FUN_1004e190  (287 bytes)
 * float10 FUN_1004e190(float param_1, float param_2)
 */
float10 __cdecl FUN_1004e190(float param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 != param_2) {
    lVar2 = __ftol();
    iVar1 = FUN_100bdb80((int)lVar2);
    if (180.0 < (double)iVar1) {
      if (param_2 <= param_1) {
        param_1 = param_1 - 360.0;
      }
      else {
        param_1 = param_1 + 360.0;
      }
    }
    if (param_2 <= param_1) {
      if (param_1 <= param_2 + 1.0) {
        param_1 = param_2;
      }
      else {
        param_1 = param_1 - (param_1 - param_2) / 4.0;
      }
    }
    else if (param_2 - 1.0 <= param_1) {
      param_1 = param_2;
    }
    else {
      param_1 = (param_2 - param_1) / 4.0 + param_1;
    }
  }
  if (0.0 <= param_1) {
    if (360.0 <= param_1) {
      param_1 = param_1 - 360.0;
    }
  }
  else {
    param_1 = param_1 + 360.0;
  }
  return (float10)param_1;
}

/* 1004e300  FUN_1004e300  (2639 bytes)
 * void FUN_1004e300(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004e300(void)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  float *pfVar8;
  float10 fVar9;
  longlong lVar10;
  float fVar11;
  undefined1 local_f0 [12];
  float local_e4;
  undefined1 local_e0 [12];
  float local_d4;
  undefined1 local_d0 [132];
  undefined1 local_4c [12];
  undefined1 local_40 [12];
  undefined1 local_34 [12];
  undefined1 local_28 [12];
  undefined1 local_1c [12];
  undefined1 local_10 [12];
  
  thunk_FUN_10007fe0(local_10);
  thunk_FUN_10007fe0(local_1c);
  thunk_FUN_10007fe0(local_28);
  thunk_FUN_10007fe0(local_34);
  thunk_FUN_10007fe0(local_40);
  thunk_FUN_10007fe0(local_4c);
  thunk_FUN_1004eff0((int)local_d0);
  thunk_FUN_10007fe0(local_e0);
  thunk_FUN_10007fe0(local_f0);
  lVar10 = __ftol();
  if ((int)lVar10 == 1) {
    thunk_FUN_1008f090();
  }
  else if ((int)lVar10 == 2) {
    thunk_FUN_1004f300();
  }
  if (DAT_102e8118 != 0) {
    puVar2 = (undefined4 *)thunk_FUN_10008500(local_e0);
    *puVar2 = *(undefined4 *)(DAT_102e80f4 + 0xc);
    iVar3 = thunk_FUN_10008500(local_e0);
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(DAT_102e80a0 + 0xc);
    local_d4 = *(float *)(DAT_102e80ac + 0xc);
    if ((DAT_102e8088 != 0) && (GetCursorPos((LPPOINT)&DAT_102e80b0), DAT_102e80f0 == 0)) {
      iVar3 = (*DAT_102e14d8)();
      if (iVar3 < DAT_102e80b0) {
        iVar3 = thunk_FUN_10008500(local_e0);
        if (*(float *)(iVar3 + 4) < *(float *)(DAT_102e80b8 + 0xc)) {
          iVar3 = thunk_FUN_10008500(local_e0);
          iVar4 = (*DAT_102e14d8)();
          *(float *)(iVar3 + 4) = (float)((DAT_102e80b0 - iVar4) / 2) * 0.5 + *(float *)(iVar3 + 4);
        }
        iVar3 = thunk_FUN_10008500(local_e0);
        if (*(float *)(DAT_102e80b8 + 0xc) < *(float *)(iVar3 + 4)) {
          iVar3 = thunk_FUN_10008500(local_e0);
          *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(DAT_102e80b8 + 0xc);
        }
      }
      else {
        iVar3 = (*DAT_102e14d8)();
        if (DAT_102e80b0 < iVar3) {
          iVar3 = thunk_FUN_10008500(local_e0);
          if (*(float *)(DAT_102e807c + 0xc) < *(float *)(iVar3 + 4)) {
            iVar3 = thunk_FUN_10008500(local_e0);
            iVar4 = (*DAT_102e14d8)();
            *(float *)(iVar3 + 4) =
                 *(float *)(iVar3 + 4) - (float)((iVar4 - DAT_102e80b0) / 2) * 0.5;
          }
          iVar3 = thunk_FUN_10008500(local_e0);
          if (*(float *)(iVar3 + 4) < *(float *)(DAT_102e807c + 0xc)) {
            iVar3 = thunk_FUN_10008500(local_e0);
            *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(DAT_102e807c + 0xc);
          }
        }
      }
      iVar3 = (*DAT_102e14dc)();
      if (iVar3 < DAT_102e80b4) {
        pfVar5 = (float *)thunk_FUN_10008500(local_e0);
        if (*pfVar5 < *(float *)(DAT_102e80c8 + 0xc)) {
          pfVar5 = (float *)thunk_FUN_10008500(local_e0);
          iVar3 = (*DAT_102e14dc)();
          *pfVar5 = (float)((DAT_102e80b4 - iVar3) / 2) * 0.5 + *pfVar5;
        }
        pfVar5 = (float *)thunk_FUN_10008500(local_e0);
        if (*(float *)(DAT_102e80c8 + 0xc) < *pfVar5) {
          puVar2 = (undefined4 *)thunk_FUN_10008500(local_e0);
          *puVar2 = *(undefined4 *)(DAT_102e80c8 + 0xc);
        }
      }
      else {
        iVar3 = (*DAT_102e14dc)();
        if (DAT_102e80b4 < iVar3) {
          pfVar5 = (float *)thunk_FUN_10008500(local_e0);
          if (*(float *)(DAT_102e80a8 + 0xc) < *pfVar5) {
            pfVar5 = (float *)thunk_FUN_10008500(local_e0);
            iVar3 = (*DAT_102e14dc)();
            *pfVar5 = *pfVar5 - (float)((iVar3 - DAT_102e80b4) / 2) * 0.5;
          }
          pfVar5 = (float *)thunk_FUN_10008500(local_e0);
          if (*pfVar5 < *(float *)(DAT_102e80a8 + 0xc)) {
            puVar2 = (undefined4 *)thunk_FUN_10008500(local_e0);
            *puVar2 = *(undefined4 *)(DAT_102e80a8 + 0xc);
          }
        }
      }
      fVar9 = thunk_FUN_10046f70(0x102da3c8);
      local_e4 = (float)fVar9;
      if (fVar9 == (float10)0.0) {
        _DAT_102e8090 = DAT_102e80b0;
        _DAT_102e808c = DAT_102e80b4;
      }
      else {
        lVar10 = __ftol();
        _DAT_102e8090 = (int)lVar10;
        lVar10 = __ftol();
        _DAT_102e808c = (int)lVar10;
      }
      iVar3 = (*DAT_102e14dc)();
      iVar4 = (*DAT_102e14d8)();
      SetCursorPos(iVar4,iVar3);
    }
    fVar9 = thunk_FUN_10050cd0(0x102e80d8);
    if (fVar9 == (float10)0.0) {
      fVar9 = thunk_FUN_10050cd0(0x102e80fc);
      if (fVar9 != (float10)0.0) {
        pfVar5 = (float *)thunk_FUN_10008500(local_e0);
        *pfVar5 = *pfVar5 - 2.5;
      }
    }
    else {
      pfVar5 = (float *)thunk_FUN_10008500(local_e0);
      *pfVar5 = *pfVar5 + 2.5;
    }
    fVar9 = thunk_FUN_10050cd0(0x102e8094);
    if (fVar9 == (float10)0.0) {
      fVar9 = thunk_FUN_10050cd0(0x102e80e4);
      if (fVar9 != (float10)0.0) {
        iVar3 = thunk_FUN_10008500(local_e0);
        *(float *)(iVar3 + 4) = *(float *)(iVar3 + 4) + 2.5;
      }
    }
    else {
      iVar3 = thunk_FUN_10008500(local_e0);
      *(float *)(iVar3 + 4) = *(float *)(iVar3 + 4) - 2.5;
    }
    fVar9 = thunk_FUN_10050cd0(0x102e8108);
    if (fVar9 == (float10)0.0) {
      fVar9 = thunk_FUN_10050cd0(0x102e80cc);
      if (fVar9 != (float10)0.0) {
        local_d4 = local_d4 + 1.0;
      }
    }
    else {
      local_d4 = local_d4 - 1.0;
      if (local_d4 < 30.0) {
        puVar2 = (undefined4 *)thunk_FUN_10008500(local_e0);
        *puVar2 = 0;
        iVar3 = thunk_FUN_10008500(local_e0);
        *(undefined4 *)(iVar3 + 4) = 0;
        local_d4 = 30.0;
      }
    }
    if (DAT_102e80f0 != 0) {
      iVar3 = (*DAT_102e14dc)();
      if (iVar3 < DAT_102e80b4) {
        if (local_d4 < *(float *)(DAT_102e80a4 + 0xc)) {
          iVar3 = (*DAT_102e14dc)();
          local_d4 = (float)((DAT_102e80b4 - iVar3) / 2) * 1.0 + local_d4;
        }
        if (*(float *)(DAT_102e80a4 + 0xc) < local_d4) {
          local_d4 = *(float *)(DAT_102e80a4 + 0xc);
        }
      }
      else {
        iVar3 = (*DAT_102e14dc)();
        if (DAT_102e80b4 < iVar3) {
          if (*(float *)(DAT_102e8114 + 0xc) < local_d4) {
            iVar3 = (*DAT_102e14dc)();
            local_d4 = local_d4 - (float)((iVar3 - DAT_102e80b4) / 2) * 1.0;
          }
          if (local_d4 < *(float *)(DAT_102e8114 + 0xc)) {
            local_d4 = *(float *)(DAT_102e8114 + 0xc);
          }
        }
      }
      thunk_FUN_10046f70(0x102da3c8);
      lVar10 = __ftol();
      _DAT_102e8090 = (int)lVar10;
      thunk_FUN_10046f70(0x102da3c8);
      lVar10 = __ftol();
      _DAT_102e808c = (int)lVar10;
      iVar3 = (*DAT_102e14dc)();
      iVar4 = (*DAT_102e14d8)();
      SetCursorPos(iVar4,iVar3);
    }
    puVar2 = (undefined4 *)thunk_FUN_10008500(local_e0);
    *(undefined4 *)(DAT_102e80f4 + 0xc) = *puVar2;
    iVar3 = thunk_FUN_10008500(local_e0);
    *(undefined4 *)(DAT_102e80a0 + 0xc) = *(undefined4 *)(iVar3 + 4);
    *(float *)(DAT_102e80ac + 0xc) = local_d4;
    puVar2 = (undefined4 *)thunk_FUN_10008500(&DAT_102e80bc);
    puVar6 = (undefined4 *)thunk_FUN_10008500(local_e0);
    *puVar6 = *puVar2;
    iVar3 = thunk_FUN_10008500(&DAT_102e80bc);
    iVar4 = thunk_FUN_10008500(local_e0);
    *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar3 + 4);
    iVar3 = thunk_FUN_10008500(&DAT_102e80bc);
    iVar4 = thunk_FUN_10008500(local_e0);
    *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar3 + 8);
    uVar7 = thunk_FUN_10008500(local_f0);
    (*DAT_102e14e0)(uVar7);
    if (*(float *)(DAT_102e8084 + 0xc) == 0.0) {
      iVar3 = thunk_FUN_10008500(local_e0);
      iVar4 = thunk_FUN_10008500(local_f0);
      if (*(float *)(iVar3 + 4) - *(float *)(iVar4 + 4) != *(float *)(DAT_102e80a0 + 0xc)) {
        iVar3 = thunk_FUN_10008500(local_f0);
        fVar11 = *(float *)(DAT_102e80a0 + 0xc) + *(float *)(iVar3 + 4);
        iVar3 = thunk_FUN_10008500(local_e0);
        fVar9 = thunk_FUN_1004e190(*(float *)(iVar3 + 4),fVar11);
        iVar3 = thunk_FUN_10008500(local_e0);
        *(float *)(iVar3 + 4) = (float)fVar9;
      }
      pfVar5 = (float *)thunk_FUN_10008500(local_e0);
      pfVar8 = (float *)thunk_FUN_10008500(local_f0);
      if (*pfVar5 - *pfVar8 != *(float *)(DAT_102e80f4 + 0xc)) {
        pfVar5 = (float *)thunk_FUN_10008500(local_f0);
        fVar11 = *(float *)(DAT_102e80f4 + 0xc) + *pfVar5;
        pfVar5 = (float *)thunk_FUN_10008500(local_e0);
        fVar9 = thunk_FUN_1004e190(*pfVar5,fVar11);
        pfVar5 = (float *)thunk_FUN_10008500(local_e0);
        *pfVar5 = (float)fVar9;
      }
      thunk_FUN_10008500(local_e0);
      lVar10 = __ftol();
      iVar3 = FUN_100bdb80((int)lVar10);
      if (2.0 <= (double)iVar3) {
        iVar3 = thunk_FUN_10008500(local_e0);
        iVar4 = thunk_FUN_10008500(local_e0);
        *(float *)(iVar3 + 8) =
             (*(float *)(DAT_102e80ac + 0xc) - *(float *)(iVar4 + 8)) / 4.0 + *(float *)(iVar3 + 8);
      }
      else {
        iVar3 = thunk_FUN_10008500(local_e0);
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(DAT_102e80ac + 0xc);
      }
    }
    else {
      iVar3 = thunk_FUN_10008500(local_f0);
      fVar11 = *(float *)(DAT_102e80a0 + 0xc);
      fVar1 = *(float *)(iVar3 + 4);
      iVar3 = thunk_FUN_10008500(local_e0);
      *(float *)(iVar3 + 4) = fVar11 + fVar1;
      pfVar5 = (float *)thunk_FUN_10008500(local_f0);
      fVar11 = *(float *)(DAT_102e80f4 + 0xc);
      fVar1 = *pfVar5;
      pfVar5 = (float *)thunk_FUN_10008500(local_e0);
      *pfVar5 = fVar11 + fVar1;
      iVar3 = thunk_FUN_10008500(local_e0);
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(DAT_102e80ac + 0xc);
    }
    puVar2 = (undefined4 *)thunk_FUN_10008500(local_e0);
    puVar6 = (undefined4 *)thunk_FUN_10008500(&DAT_102e80bc);
    *puVar6 = *puVar2;
    iVar3 = thunk_FUN_10008500(local_e0);
    iVar4 = thunk_FUN_10008500(&DAT_102e80bc);
    *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar3 + 4);
    iVar3 = thunk_FUN_10008500(&DAT_102e80bc);
    *(float *)(iVar3 + 8) = local_d4;
  }
  return;
}

/* 1004eff0  FUN_1004eff0  (74 bytes)
 * int FUN_1004eff0(int param_1)
 */
int __fastcall FUN_1004eff0(int param_1)

{
  thunk_FUN_10007fe0(param_1);
  thunk_FUN_10007fe0(param_1 + 0xc);
  thunk_FUN_10007fe0(param_1 + 0x20);
  thunk_FUN_10007fe0(param_1 + 0x2c);
  thunk_FUN_1004f050(param_1 + 0x40);
  return param_1;
}

/* 1004f050  FUN_1004f050  (44 bytes)
 * int FUN_1004f050(int param_1)
 */
int __fastcall FUN_1004f050(int param_1)

{
  thunk_FUN_10007fe0(param_1 + 0x14);
  thunk_FUN_1004f090(param_1 + 0x20);
  return param_1;
}

/* 1004f090  FUN_1004f090  (30 bytes)
 * undefined4 FUN_1004f090(undefined4 param_1)
 */
undefined4 __fastcall FUN_1004f090(undefined4 param_1)

{
  thunk_FUN_10007fe0(param_1);
  return param_1;
}

/* 1004f0c0  FUN_1004f0c0  (29 bytes)
 * undefined FUN_1004f0c0(void)
 * called by: thunk_FUN_1004f0c0
 */
void FUN_1004f0c0(void)

{
  thunk_FUN_1004ff80((int *)&DAT_102e80d8);
  return;
}

/* 1004f0f0  FUN_1004f0f0  (29 bytes)
 * undefined FUN_1004f0f0(void)
 * called by: thunk_FUN_1004f0f0
 */
void FUN_1004f0f0(void)

{
  thunk_FUN_10050070((int *)&DAT_102e80d8);
  return;
}

/* 1004f120  FUN_1004f120  (29 bytes)
 * undefined FUN_1004f120(void)
 * called by: thunk_FUN_1004f120
 */
void FUN_1004f120(void)

{
  thunk_FUN_1004ff80((int *)&DAT_102e80fc);
  return;
}

/* 1004f150  FUN_1004f150  (29 bytes)
 * undefined FUN_1004f150(void)
 * called by: thunk_FUN_1004f150
 */
void FUN_1004f150(void)

{
  thunk_FUN_10050070((int *)&DAT_102e80fc);
  return;
}

/* 1004f180  FUN_1004f180  (29 bytes)
 * undefined FUN_1004f180(void)
 * called by: thunk_FUN_1004f180
 */
void FUN_1004f180(void)

{
  thunk_FUN_1004ff80((int *)&DAT_102e8094);
  return;
}

/* 1004f1b0  FUN_1004f1b0  (29 bytes)
 * undefined FUN_1004f1b0(void)
 * called by: thunk_FUN_1004f1b0
 */
void FUN_1004f1b0(void)

{
  thunk_FUN_10050070((int *)&DAT_102e8094);
  return;
}

/* 1004f1e0  FUN_1004f1e0  (29 bytes)
 * undefined FUN_1004f1e0(void)
 * called by: thunk_FUN_1004f1e0
 */
void FUN_1004f1e0(void)

{
  thunk_FUN_1004ff80((int *)&DAT_102e80e4);
  return;
}

/* 1004f210  FUN_1004f210  (29 bytes)
 * undefined FUN_1004f210(void)
 * called by: thunk_FUN_1004f210
 */
void FUN_1004f210(void)

{
  thunk_FUN_10050070((int *)&DAT_102e80e4);
  return;
}

/* 1004f240  FUN_1004f240  (29 bytes)
 * undefined FUN_1004f240(void)
 * called by: thunk_FUN_1004f240
 */
void FUN_1004f240(void)

{
  thunk_FUN_1004ff80((int *)&DAT_102e8108);
  return;
}

/* 1004f270  FUN_1004f270  (29 bytes)
 * undefined FUN_1004f270(void)
 * called by: thunk_FUN_1004f270
 */
void FUN_1004f270(void)

{
  thunk_FUN_10050070((int *)&DAT_102e8108);
  return;
}

/* 1004f2a0  FUN_1004f2a0  (29 bytes)
 * undefined FUN_1004f2a0(void)
 * called by: thunk_FUN_1004f2a0
 */
void FUN_1004f2a0(void)

{
  thunk_FUN_1004ff80((int *)&DAT_102e80cc);
  return;
}

/* 1004f2d0  FUN_1004f2d0  (29 bytes)
 * undefined FUN_1004f2d0(void)
 * called by: thunk_FUN_1004f2d0
 */
void FUN_1004f2d0(void)

{
  thunk_FUN_10050070((int *)&DAT_102e80cc);
  return;
}

/* 1004f300  FUN_1004f300  (42 bytes)
 * undefined FUN_1004f300(void)
 */
void FUN_1004f300(void)

{
  DAT_102e8118 = 0;
  (*DAT_102e14ec)("cam_command",0);
  return;
}

/* 1004f340  FUN_1004f340  (65 bytes)
 * undefined FUN_1004f340(void)
 * called by: thunk_FUN_1004f340
 */
void FUN_1004f340(void)

{
  uint local_48;
  
  local_48 = (uint)(*(float *)(DAT_102e8084 + 0xc) == 0.0);
  *(float *)(DAT_102e8084 + 0xc) = (float)local_48;
  return;
}

/* 1004f3a0  FUN_1004f3a0  (689 bytes)
 * undefined FUN_1004f3a0(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004f3a0(void)

{
  (*DAT_102e149c)("+campitchup",thunk_FUN_1004f0c0);
  (*DAT_102e149c)("-campitchup",thunk_FUN_1004f0f0);
  (*DAT_102e149c)("+campitchdown",thunk_FUN_1004f120);
  (*DAT_102e149c)("-campitchdown",thunk_FUN_1004f150);
  (*DAT_102e149c)("+camyawleft",thunk_FUN_1004f180);
  (*DAT_102e149c)("-camyawleft",thunk_FUN_1004f1b0);
  (*DAT_102e149c)("+camyawright",thunk_FUN_1004f1e0);
  (*DAT_102e149c)("-camyawright",thunk_FUN_1004f210);
  (*DAT_102e149c)("+camin",thunk_FUN_1004f240);
  (*DAT_102e149c)("-camin",thunk_FUN_1004f270);
  (*DAT_102e149c)("+camout",thunk_FUN_1004f2a0);
  (*DAT_102e149c)("-camout",thunk_FUN_1004f2d0);
  (*DAT_102e149c)("thirdperson",thunk_FUN_1008f090);
  (*DAT_102e149c)("firstperson",thunk_FUN_1004f300);
  (*DAT_102e149c)("+cammousemove",thunk_FUN_1004f850);
  (*DAT_102e149c)("-cammousemove",thunk_FUN_1004f930);
  (*DAT_102e149c)("+camdistance",thunk_FUN_1004f960);
  (*DAT_102e149c)("-camdistance",thunk_FUN_1004fa40);
  (*DAT_102e149c)("snapto",thunk_FUN_1004f340);
  DAT_102e80f8 = (*DAT_102e1490)("cam_command",&DAT_1026d374,0);
  DAT_102e8084 = (*DAT_102e1490)("cam_snapto",&DAT_1026d374,0);
  DAT_102e80a0 = (*DAT_102e1490)("cam_idealyaw",&DAT_1026d374,0);
  DAT_102e80f4 = (*DAT_102e1490)("cam_idealpitch",&DAT_1026d374,0);
  DAT_102e80ac = (*DAT_102e1490)("cam_idealdist",&DAT_1026f860,0);
  _DAT_102e8080 = (*DAT_102e1490)("cam_contain",&DAT_1026d374,0);
  DAT_102e80c8 = (*DAT_102e1490)("c_maxpitch",&DAT_1026f838,0);
  DAT_102e80a8 = (*DAT_102e1490)("c_minpitch",&DAT_1026f824,0);
  DAT_102e80b8 = (*DAT_102e1490)("c_maxyaw","135.0",0);
  DAT_102e807c = (*DAT_102e1490)("c_minyaw","-135.0",0);
  DAT_102e80a4 = (*DAT_102e1490)("c_maxdistance","200.0",0);
  DAT_102e8114 = (*DAT_102e1490)("c_mindistance",&DAT_1026f7cc,0);
  return;
}

/* 1004f700  FUN_1004f700  (257 bytes)
 * undefined FUN_1004f700(void)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004f700(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 local_10 [12];
  
  thunk_FUN_10007fe0(local_10);
  uVar1 = thunk_FUN_10008500(local_10);
  (*DAT_102e14e0)(uVar1);
  _DAT_102e80e0 = 0;
  _DAT_102e8104 = 0;
  _DAT_102e809c = 0;
  _DAT_102e80ec = 0;
  _DAT_102e8110 = 0;
  _DAT_102e80d4 = 0;
  DAT_102e8118 = 0;
  *(undefined4 *)(DAT_102e80f8 + 0xc) = 0;
  DAT_102e8088 = 0;
  *(undefined4 *)(DAT_102e8084 + 0xc) = 0;
  DAT_102e80f0 = 0;
  puVar2 = (undefined4 *)thunk_FUN_10008500(&DAT_102e80bc);
  *puVar2 = 0;
  iVar3 = thunk_FUN_10008500(&DAT_102e80bc);
  *(undefined4 *)(iVar3 + 4) = 0;
  iVar3 = thunk_FUN_10008500(&DAT_102e80bc);
  *(undefined4 *)(iVar3 + 8) = 0x41f00000;
  puVar2 = (undefined4 *)thunk_FUN_10008500(local_10);
  *(undefined4 *)(DAT_102e80f4 + 0xc) = *puVar2;
  iVar3 = thunk_FUN_10008500(local_10);
  *(undefined4 *)(DAT_102e80a0 + 0xc) = *(undefined4 *)(iVar3 + 4);
  *(undefined4 *)(DAT_102e80ac + 0xc) = 0x41f00000;
  return;
}

/* 1004f850  FUN_1004f850  (177 bytes)
 * undefined FUN_1004f850(void)
 * called by: thunk_FUN_1004f850
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004f850(void)

{
  float10 fVar1;
  longlong lVar2;
  
  if (DAT_102e8118 == 0) {
    DAT_102e8088 = 0;
    DAT_102e811c = 0;
  }
  else if (DAT_102e8088 == 0) {
    DAT_102e8088 = 1;
    DAT_102e811c = 1;
    GetCursorPos((LPPOINT)&DAT_102e80b0);
    fVar1 = thunk_FUN_10046f70(0x102da3c8);
    if (fVar1 == (float10)0.0) {
      _DAT_102e8090 = DAT_102e80b0;
      _DAT_102e808c = DAT_102e80b4;
    }
    else {
      lVar2 = __ftol();
      _DAT_102e8090 = (undefined4)lVar2;
      lVar2 = __ftol();
      _DAT_102e808c = (undefined4)lVar2;
    }
  }
  return;
}

/* 1004f930  FUN_1004f930  (36 bytes)
 * undefined FUN_1004f930(void)
 * called by: thunk_FUN_1004f930
 */
void FUN_1004f930(void)

{
  DAT_102e8088 = 0;
  DAT_102e811c = 0;
  return;
}

/* 1004f960  FUN_1004f960  (171 bytes)
 * undefined FUN_1004f960(void)
 * called by: thunk_FUN_1004f960
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004f960(void)

{
  longlong lVar1;
  
  if (DAT_102e8118 == 0) {
    DAT_102e80f0 = 0;
    DAT_102e8088 = 0;
    DAT_102e811c = 0;
  }
  else if (DAT_102e80f0 == 0) {
    DAT_102e80f0 = 1;
    DAT_102e8088 = 1;
    DAT_102e811c = 1;
    GetCursorPos((LPPOINT)&DAT_102e80b0);
    thunk_FUN_10046f70(0x102da3c8);
    lVar1 = __ftol();
    _DAT_102e8090 = (undefined4)lVar1;
    thunk_FUN_10046f70(0x102da3c8);
    lVar1 = __ftol();
    _DAT_102e808c = (undefined4)lVar1;
  }
  return;
}

/* 1004fa40  FUN_1004fa40  (46 bytes)
 * undefined FUN_1004fa40(void)
 * called by: thunk_FUN_1004fa40
 */
void FUN_1004fa40(void)

{
  DAT_102e80f0 = 0;
  DAT_102e8088 = 0;
  DAT_102e811c = 0;
  return;
}

/* 1004fa80  FUN_1004fa80  (71 bytes)
 * void FUN_1004fa80(float * ofs)
 */
void __cdecl FUN_1004fa80(float *ofs)

{
  float *pfVar1;
  int iVar2;
  
  pfVar1 = (float *)thunk_FUN_10008500(&DAT_102e80bc);
  *ofs = *pfVar1;
  iVar2 = thunk_FUN_10008500(&DAT_102e80bc);
  ofs[1] = *(float *)(iVar2 + 4);
  iVar2 = thunk_FUN_10008500(&DAT_102e80bc);
  ofs[2] = *(float *)(iVar2 + 8);
  return;
}

/* 1004fae0  FUN_1004fae0  (577 bytes)
 * undefined4 FUN_1004fae0(char * param_1, undefined4 * param_2)
 */
undefined4 __cdecl FUN_1004fae0(char *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  size_t sVar3;
  uint *puVar4;
  char *local_1054;
  char *local_1050;
  uint *local_104c;
  char *local_1048;
  char local_1044;
  char local_1043 [63];
  uint local_1004 [1018];
  undefined4 uStackY_1c;
  
  FUN_100bdb10();
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    *param_2 = 0;
    local_1048 = param_1;
    local_104c = local_1004;
    while (*local_1048 != '\0') {
      if (*local_1048 == '+') {
        for (local_1050 = &local_1044;
            (*local_1048 != '\0' &&
            (((uVar2 = FUN_100c1060((int)*local_1048), uVar2 != 0 || (local_1050 == &local_1044)) &&
             ((int)local_1050 - (int)&local_1044 < 0x3f)))); local_1050 = local_1050 + 1) {
          *local_1050 = *local_1048;
          local_1048 = local_1048 + 1;
        }
        *local_1050 = '\0';
        local_1054 = (char *)0x0;
        sVar3 = _strlen(local_1043);
        if (sVar3 != 0) {
          local_1054 = (char *)(*DAT_102e157c)();
        }
        if (local_1054 == (char *)0x0) {
          local_1050 = &local_1044;
        }
        else {
          *(char *)local_104c = '[';
          local_104c = (uint *)((int)local_104c + 1);
          local_1050 = local_1054;
        }
        for (; *local_1050 != '\0'; local_1050 = local_1050 + 1) {
          *(char *)local_104c = *local_1050;
          local_104c = (uint *)((int)local_104c + 1);
        }
        if (local_1054 != (char *)0x0) {
          *(char *)local_104c = ']';
          local_104c = (uint *)((int)local_104c + 1);
        }
      }
      else {
        *(char *)local_104c = *local_1048;
        local_104c = (uint *)((int)local_104c + 1);
        local_1048 = local_1048 + 1;
      }
    }
    *(char *)local_104c = '\0';
    sVar3 = _strlen((char *)local_1004);
    puVar4 = _malloc(sVar3 + 1);
    uStackY_1c = 0x1004fd07;
    FUN_100bba20(puVar4,local_1004);
    *param_2 = puVar4;
    uVar1 = 1;
  }
  return uVar1;
}

/* 1004fdc0  FUN_1004fdc0  (73 bytes)
 * void * FUN_1004fdc0(char * name)
 */
void * __cdecl FUN_1004fdc0(char *name)

{
  uint uVar1;
  undefined4 *local_8;
  
  local_8 = DAT_102e8304;
  while( true ) {
    if (local_8 == (undefined4 *)0x0) {
      return (void *)0x0;
    }
    uVar1 = FUN_100db540((byte_conflict *)name,(byte_conflict *)(local_8 + 2));
    if (uVar1 == 0) break;
    local_8 = (undefined4 *)*local_8;
  }
  return (void *)local_8[1];
}

/* 1004fe20  FUN_1004fe20  (115 bytes)
 * undefined FUN_1004fe20(uint * param_1, undefined4 param_2)
 */
void __cdecl FUN_1004fe20(uint *param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 *_Dst;
  
  pvVar1 = KB_Find((char *)param_1);
  if (pvVar1 == (void *)0x0) {
    _Dst = _malloc(0x28);
    _memset(_Dst,0,0x28);
    FUN_100bba20(_Dst + 2,param_1);
    _Dst[1] = param_2;
    *_Dst = DAT_102e8304;
    DAT_102e8304 = _Dst;
  }
  return;
}

/* 1004feb0  FUN_1004feb0  (80 bytes)
 * undefined FUN_1004feb0(void)
 */
void FUN_1004feb0(void)

{
  DAT_102e8304 = 0;
  thunk_FUN_1004fe20((uint *)"in_graph",&DAT_102e815c);
  thunk_FUN_1004fe20((uint *)"in_mlook",&DAT_102e81e4);
  thunk_FUN_1004fe20((uint *)"in_jlook",&DAT_102e8270);
  return;
}

/* 1004ff20  FUN_1004ff20  (68 bytes)
 * undefined FUN_1004ff20(void)
 */
void FUN_1004ff20(void)

{
  undefined4 *puVar1;
  undefined4 local_8;
  
  local_8 = DAT_102e8304;
  while (local_8 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*local_8;
    FUN_100bf140(local_8);
    local_8 = puVar1;
  }
  DAT_102e8304 = (undefined4 *)0x0;
  return;
}

/* 1004ff80  FUN_1004ff80  (188 bytes)
 * undefined FUN_1004ff80(int * param_1)
 */
void __cdecl FUN_1004ff80(int *param_1)

{
  byte_conflict *pbVar1;
  int local_8;
  
  pbVar1 = (byte_conflict *)(*DAT_102e14f4)(1);
  if (*pbVar1 == '\0') {
    local_8 = -1;
  }
  else {
    local_8 = FUN_100c0d30(pbVar1);
  }
  if ((local_8 != *param_1) && (local_8 != param_1[1])) {
    if (*param_1 == 0) {
      *param_1 = local_8;
    }
    else {
      if (param_1[1] != 0) {
        (*DAT_102e14fc)("Three keys down for a button \'%c\' \'%c\' \'%c\'!\n",*param_1,param_1[1],
                        pbVar1);
        return;
      }
      param_1[1] = local_8;
    }
    if ((param_1[2] & 1U) == 0) {
      param_1[2] = param_1[2] | 3;
    }
  }
  return;
}

/* 10050070  FUN_10050070  (198 bytes)
 * undefined FUN_10050070(int * param_1)
 */
void __cdecl FUN_10050070(int *param_1)

{
  byte_conflict *pbVar1;
  int iVar2;
  
  pbVar1 = (byte_conflict *)(*DAT_102e14f4)(1);
  if (*pbVar1 == '\0') {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[2] = 4;
  }
  else {
    iVar2 = FUN_100c0d30(pbVar1);
    if (*param_1 == iVar2) {
      *param_1 = 0;
    }
    else {
      if (param_1[1] != iVar2) {
        return;
      }
      param_1[1] = 0;
    }
    if (((*param_1 == 0) && (param_1[1] == 0)) && ((param_1[2] & 1U) != 0)) {
      param_1[2] = param_1[2] & 0xfffffffe;
      param_1[2] = param_1[2] | 4;
    }
  }
  return;
}

/* 10050170  FUN_10050170  (55 bytes)
 * int FUN_10050170(int eventcode, int keynum, char * pszCurrentBinding)
 */
int __cdecl FUN_10050170(int eventcode,int keynum,char *pszCurrentBinding)

{
  int iVar1;
  
  if (DAT_102e15e0 == (void *)0x0) {
    iVar1 = 1;
  }
  else {
    iVar1 = thunk_FUN_100b1760(DAT_102e15e0,eventcode,keynum,pszCurrentBinding);
  }
  return iVar1;
}

/* 100501c0  FUN_100501c0  (29 bytes)
 * undefined FUN_100501c0(void)
 * called by: thunk_FUN_100501c0
 */
void FUN_100501c0(void)

{
  thunk_FUN_1004ff80((int *)&DAT_102e82a0);
  return;
}

/* 100501f0  FUN_100501f0  (29 bytes)
 * undefined FUN_100501f0(void)
 * called by: thunk_FUN_100501f0
 */
void FUN_100501f0(void)

{
  thunk_FUN_10050070((int *)&DAT_102e82a0);
  return;
}

/* 10050220  FUN_10050220  (29 bytes)
 * undefined FUN_10050220(void)
 * called by: thunk_FUN_10050220
 */
void FUN_10050220(void)

{
  thunk_FUN_1004ff80((int *)&DAT_102e82f4);
  return;
}

/* 10050250  FUN_10050250  (29 bytes)
 * undefined FUN_10050250(void)
 * called by: thunk_FUN_10050250
 */
void FUN_10050250(void)

{
  thunk_FUN_10050070((int *)&DAT_102e82f4);
  return;
}

/* 10050280  FUN_10050280  (29 bytes)
 * undefined FUN_10050280(void)
 * called by: thunk_FUN_10050280
 */
void FUN_10050280(void)

{
  thunk_FUN_1004ff80((int *)&DAT_102e8270);
  return;
}

/* 100502b0  FUN_100502b0  (29 bytes)
 * undefined FUN_100502b0(void)
 * called by: thunk_FUN_100502b0
 */
void FUN_100502b0(void)

{
  thunk_FUN_10050070((int *)&DAT_102e8270);
  return;
}

/* 100502e0  FUN_100502e0  (29 bytes)
 * undefined FUN_100502e0(void)
 * called by: thunk_FUN_100502e0
 */
void FUN_100502e0(void)

{
  thunk_FUN_1004ff80((int *)&DAT_102e81e4);
  return;
}

/* 10050310  FUN_10050310  (29 bytes)
 * undefined FUN_10050310(void)
 * called by: thunk_FUN_10050310
 */
void FUN_10050310(void)

{
  thunk_FUN_1004ff80((int *)&DAT_102e818c);
  return;
}

/* 10050340  FUN_10050340  (29 bytes)
 * undefined FUN_10050340(void)
 * called by: thunk_FUN_10050340
 */
void FUN_10050340(void)

{
  thunk_FUN_10050070((int *)&DAT_102e818c);
  return;
}

/* 10050370  FUN_10050370  (29 bytes)
 * undefined FUN_10050370(void)
 * called by: thunk_FUN_10050370
 */
void FUN_10050370(void)

{
  thunk_FUN_1004ff80((int *)&DAT_102e81a8);
  return;
}

/* 100503a0  FUN_100503a0  (29 bytes)
 * undefined FUN_100503a0(void)
 * called by: thunk_FUN_100503a0
 */
void FUN_100503a0(void)

{
  thunk_FUN_10050070((int *)&DAT_102e81a8);
  return;
}

/* 100503d0  FUN_100503d0  (29 bytes)
 * undefined FUN_100503d0(void)
 * called by: thunk_FUN_100503d0
 */
void FUN_100503d0(void)

{
  thunk_FUN_1004ff80((int *)&DAT_102e8214);
  return;
}

/* 10050400  FUN_10050400  (29 bytes)
 * undefined FUN_10050400(void)
 * called by: thunk_FUN_10050400
 */
void FUN_10050400(void)

{
  thunk_FUN_10050070((int *)&DAT_102e8214);
  return;
}

/* 10050430  FUN_10050430  (29 bytes)
 * undefined FUN_10050430(void)
 * called by: thunk_FUN_10050430
 */
void FUN_10050430(void)

{
  thunk_FUN_1004ff80((int *)&DAT_102e8220);
  return;
}

/* 10050460  FUN_10050460  (29 bytes)
 * undefined FUN_10050460(void)
 * called by: thunk_FUN_10050460
 */
void FUN_10050460(void)

{
  thunk_FUN_10050070((int *)&DAT_102e8220);
  return;
}

