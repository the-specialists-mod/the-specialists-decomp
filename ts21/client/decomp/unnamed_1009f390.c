/* client.dll - unnamed_1009f390 (150 functions). Ghidra decompiler output; see functions.tsv for the index. */

/* 1009f390  FUN_1009f390  (27 bytes)
 * undefined FUN_1009f390(Panel * param_1)
 * called by: thunk_FUN_1009f390
 */
void __fastcall FUN_1009f390(Panel *param_1)

{
  vgui::Panel::paintBackground(param_1);
  return;
}

/* 1009f3c0  FUN_1009f3c0  (109 bytes)
 * undefined FUN_1009f3c0(int param_1, char param_2, undefined4 param_3, undefined2 param_4, undefined2 param_5, undefined2 param_6, undefined2 param_7)
 */
void __thiscall
FUN_1009f3c0(void *this,int param_1,char param_2,undefined4 param_3,undefined2 param_4,
            undefined2 param_5,undefined2 param_6,undefined2 param_7)

{
  int iVar1;
  
  iVar1 = thunk_FUN_1009f4e0(this,0,param_1);
  *(char *)(iVar1 + 4) = param_2;
  if (param_2 != '\0') {
    *(undefined4 *)(iVar1 + 0x10) = param_3;
    *(undefined2 *)(iVar1 + 6) = param_4;
    *(undefined2 *)(iVar1 + 8) = param_5;
    *(undefined2 *)(iVar1 + 10) = param_6;
    *(undefined2 *)(iVar1 + 0xc) = param_7;
  }
  return;
}

/* 1009f450  FUN_1009f450  (107 bytes)
 * undefined FUN_1009f450(int param_1)
 */
void __fastcall FUN_1009f450(int param_1)

{
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xbc) = 0;
  return;
}

/* 1009f4e0  FUN_1009f4e0  (133 bytes)
 * int FUN_1009f4e0(int param_1, int param_2)
 */
int __thiscall FUN_1009f4e0(void *this,int param_1,int param_2)

{
  int iVar1;
  
  if ((((param_1 < 0) || (*(int *)((int)this + 0xc0) <= param_1)) || (param_2 < 0)) ||
     (*(int *)((int)this + 0xc4) <= param_2)) {
    FUN_100bd710((uint *)"!\"CGrid::GridEntry: invalid location specified\"",
                 (uint *)
                 "c:\\program files\\steam\\steamapps\\jorge12185@hotmail.com\\half-life\\ts-dev\\src\\game_shared\\vgui_grid.cpp"
                 ,DAT_1028a818 + 1);
    iVar1 = 0;
  }
  else {
    iVar1 = (param_2 * *(int *)((int)this + 0xc0) + param_1) * 0x14 + *(int *)((int)this + 0xe0);
  }
  return iVar1;
}

/* 1009f590  FUN_1009f590  (162 bytes)
 * undefined FUN_1009f590(int param_1)
 */
void __thiscall FUN_1009f590(void *this,int param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = *(int *)((int)this + 200);
  if (param_1 != 0) {
    local_c = local_c + *(int *)(*(int *)((int)this + 0xd8) + -4 + param_1 * 4) +
                        *(int *)(*(int *)((int)this + 0xd0) + -4 + param_1 * 4);
  }
  for (local_10 = param_1; local_10 < *(int *)((int)this + 0xc0); local_10 = local_10 + 1) {
    *(int *)(*(int *)((int)this + 0xd8) + local_10 * 4) = local_c;
    local_c = local_c + *(int *)(*(int *)((int)this + 0xd0) + local_10 * 4) +
                        *(int *)((int)this + 200);
  }
  return;
}

/* 1009f660  FUN_1009f660  (144 bytes)
 * undefined FUN_1009f660(int param_1)
 */
void __thiscall FUN_1009f660(void *this,int param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = *(int *)((int)this + 0xcc);
  if (param_1 != 0) {
    local_c = local_c + *(int *)(*(int *)((int)this + 0xdc) + -4 + param_1 * 4);
  }
  for (local_10 = param_1; local_10 < *(int *)((int)this + 0xc4); local_10 = local_10 + 1) {
    *(int *)(*(int *)((int)this + 0xdc) + local_10 * 4) = local_c;
    local_c = local_c + *(int *)(*(int *)((int)this + 0xd4) + local_10 * 4) +
                        *(int *)((int)this + 0xcc);
  }
  return;
}

/* 1009f720  FUN_1009f720  (192 bytes)
 * undefined4 FUN_1009f720(undefined4 param_1, undefined4 param_2, int * param_3, int * param_4)
 */
uint __thiscall
FUN_1009f720(void *this,undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  int local_10;
  int local_c;
  
  *param_3 = -1;
  *param_4 = -1;
  local_c = 0;
  do {
    if (*(int *)((int)this + 0xc0) <= local_c) {
      return (uint)this & 0xffffff00;
    }
    for (local_10 = 0; local_10 < *(int *)((int)this + 0xc4); local_10 = local_10 + 1) {
      piVar2 = (int *)thunk_FUN_1009f4e0(this,local_c,local_10);
      if (((int *)*piVar2 != (int *)0x0) &&
         (cVar1 = (**(code **)(*(int *)*piVar2 + 0x80))(param_1,param_2), cVar1 != '\0')) {
        *param_4 = local_c;
        *param_3 = local_10;
        return CONCAT31((int3)((uint)param_3 >> 8),1);
      }
    }
    local_c = local_c + 1;
  } while( true );
}

/* 1009f810  FUN_1009f810  (332 bytes)
 * undefined FUN_1009f810(int * param_1, int * param_2, int param_3)
 */
void __cdecl FUN_1009f810(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  (**(code **)(*param_2 + 0xc))(&local_8,&local_c);
  (**(code **)(*param_1 + 0xc))(&local_10,&local_14);
  iVar1 = (local_8 - local_10) / 2;
  iVar2 = (local_c - local_14) / 2;
  if (param_3 == 3) {
    (**(code **)*param_1)(0,iVar2);
  }
  else if (param_3 == 0) {
    (**(code **)*param_1)(0,0);
  }
  else if (param_3 == 1) {
    (**(code **)*param_1)(iVar1,0);
  }
  else if (param_3 == 2) {
    (**(code **)*param_1)(local_8 - local_10,0);
  }
  else if (param_3 == 5) {
    (**(code **)*param_1)(local_8 - local_10,iVar2);
  }
  else if (param_3 == 8) {
    (**(code **)*param_1)(local_8 - local_10,local_c - local_14);
  }
  else if (param_3 == 7) {
    (**(code **)*param_1)(iVar1,local_c - local_14);
  }
  else if (param_3 == 6) {
    (**(code **)*param_1)(0,local_c - local_14);
  }
  else if (param_3 == 4) {
    (**(code **)*param_1)(iVar1,iVar2);
  }
  return;
}

/* 1009f9b0  FUN_1009f9b0  (29 bytes)
 * undefined FUN_1009f9b0(undefined4 param_1)
 */
void __cdecl FUN_1009f9b0(undefined4 param_1)

{
  (*DAT_102e1590)(param_1);
  return;
}

/* 1009f9e0  FUN_1009f9e0  (22 bytes)
 * undefined FUN_1009f9e0(void)
 */
void FUN_1009f9e0(void)

{
  (*DAT_102e158c)();
  return;
}

/* 1009fa00  FUN_1009fa00  (245 bytes)
 * undefined FUN_1009fa00(void)
 */
void FUN_1009fa00(void)

{
  int *piVar1;
  BorderLayout *this;
  void *this_00;
  int iVar2;
  int iVar3;
  undefined4 local_5c;
  
  piVar1 = (int *)thunk_FUN_1009f9e0();
  (**(code **)(*piVar1 + 300))(0x80,0x80,0,0);
  this = operator_new(8);
  if (this == (BorderLayout *)0x0) {
    local_5c = (Panel *)0x0;
  }
  else {
    local_5c = (Panel *)vgui::BorderLayout::BorderLayout(this,0);
  }
  (**(code **)(*piVar1 + 0xb4))(local_5c);
  if (DAT_102e15e0 == (Panel *)0x0) {
    this_00 = thunk_FUN_100a9870(0xad8);
    if (this_00 == (void *)0x0) {
      local_5c = (Panel *)0x0;
    }
    else {
      iVar2 = (**(code **)(*piVar1 + 0x1c))();
      iVar3 = (**(code **)(*piVar1 + 0x18))();
      local_5c = thunk_FUN_100a98c0(this_00,0,0,iVar3,iVar2);
    }
    DAT_102e15e0 = local_5c;
    (**(code **)(*(int *)local_5c + 0x40))(piVar1);
  }
  else {
    thunk_FUN_100a9ec0(DAT_102e15e0);
  }
  return;
}

/* 1009fb40  FUN_1009fb40  (68 bytes)
 * undefined FUN_1009fb40(void)
 */
void FUN_1009fb40(void)

{
  if (DAT_102e15e0 != (void *)0x0) {
    thunk_FUN_1009fba0(DAT_102e15e0,1);
  }
  DAT_102e15e0 = (void *)0x0;
  return;
}

/* 1009fba0  FUN_1009fba0  (54 bytes)
 * void * FUN_1009fba0(uint param_1)
 */
void * __thiscall FUN_1009fba0(void *this,uint param_1)

{
  thunk_FUN_1009fbf0((int)this);
  if ((param_1 & 1) != 0) {
    FUN_100bbb10(this);
  }
  return this;
}

/* 1009fbf0  FUN_1009fbf0  (33 bytes)
 * undefined FUN_1009fbf0(int param_1)
 */
void __fastcall FUN_1009fbf0(int param_1)

{
  thunk_FUN_100a2870((undefined4 *)(param_1 + 0x22c));
  return;
}

/* 1009fc20  FUN_1009fc20  (433 bytes)
 * Panel * FUN_1009fc20(Panel * param_1)
 */
Panel * __fastcall FUN_1009fc20(Panel *param_1)

{
  vgui::Panel::Panel(param_1,0,0,0,0);
  vgui::Panel::Panel(param_1 + 200,0,0,0,0);
  vgui::Slider2::Slider2((Slider2 *)(param_1 + 0x188),0,0,10,0x28,true);
  vgui::ScrollBar2::ScrollBar2((ScrollBar2 *)(param_1 + 0x284),0,0,0,0,true);
  thunk_FUN_1009fe40((IntChangeSignal *)(param_1 + 0x35c));
  *(undefined ***)param_1 = &PTR_thunk_FUN_100a0200_10274754;
  *(Panel **)(param_1 + 0x360) = param_1;
  (**(code **)(*(int *)(param_1 + 200) + 0x40))(param_1);
  (**(code **)(*(int *)(param_1 + 200) + 300))(0,0,0,0xff);
  (**(code **)(*(int *)(param_1 + 0x188) + 0x214))(0x32);
  (**(code **)(*(int *)(param_1 + 0x188) + 0x218))(1);
  (**(code **)(*(int *)(param_1 + 0x284) + 0x40))(param_1);
  (**(code **)(*(int *)(param_1 + 0x284) + 0x204))(param_1 + 0x35c);
  (**(code **)(*(int *)(param_1 + 0x284) + 0x224))(param_1 + 0x188);
  (**(code **)(*(int *)(param_1 + 0x284) + 0x230))(1);
  *(Panel **)(param_1 + 0xc0) = param_1 + 0xbc;
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x364) = 0xffffffff;
  return param_1;
}

/* 1009fe40  FUN_1009fe40  (39 bytes)
 * IntChangeSignal * FUN_1009fe40(IntChangeSignal * param_1)
 */
IntChangeSignal * __fastcall FUN_1009fe40(IntChangeSignal *param_1)

{
  vgui::IntChangeSignal::IntChangeSignal(param_1);
  *(undefined ***)param_1 = &PTR_thunk_FUN_100a05a0_102749c0;
  return param_1;
}

/* 1009fe70  FUN_1009fe70  (36 bytes)
 * undefined FUN_1009fe70(undefined4 * param_1)
 */
void __fastcall FUN_1009fe70(undefined4 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100a0200_10274754;
  thunk_FUN_1009fed0((int)param_1);
  return;
}

/* 1009fea0  FUN_1009fea0  (27 bytes)
 * undefined FUN_1009fea0(int param_1)
 */
void __fastcall FUN_1009fea0(int param_1)

{
  thunk_FUN_1009fed0(param_1);
  return;
}

/* 1009fed0  FUN_1009fed0  (148 bytes)
 * undefined FUN_1009fed0(int param_1)
 */
void __fastcall FUN_1009fed0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *local_10;
  
  *(undefined4 *)(param_1 + 0x184) = 0;
  local_10 = *(undefined4 **)(param_1 + 0xc4);
  while (local_10 != (undefined4 *)(param_1 + 0xbc)) {
    (**(code **)(*(int *)*local_10 + 0x40))(0);
    puVar1 = (undefined4 *)local_10[2];
    FUN_100bbb10(local_10);
    local_10 = puVar1;
  }
  *(int *)(param_1 + 0xc4) = param_1 + 0xbc;
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xc4);
  return;
}

/* 1009ff90  FUN_1009ff90  (231 bytes)
 * undefined FUN_1009ff90(undefined4 param_1)
 */
void __thiscall FUN_1009ff90(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = operator_new(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    (**(code **)(*(int *)*puVar1 + 0x40))((int)this + 200);
    puVar1[1] = *(undefined4 *)((int)this + 0xc0);
    puVar1[2] = (int)this + 0xbc;
    *(undefined4 **)(puVar1[1] + 8) = puVar1;
    *(undefined4 **)(puVar1[2] + 4) = puVar1;
    iVar2 = thunk_FUN_100a0550((int)this);
    (**(code **)(*(int *)((int)this + 0x284) + 0x208))(0,iVar2);
    (**(code **)(*(int *)((int)this + 0x188) + 0x214))(0x32);
    (**(code **)(*(int *)((int)this + 0x188) + 0x218))(1);
    thunk_FUN_100a02d0(this);
  }
  return;
}

/* 100a00b0  FUN_100a00b0  (76 bytes)
 * int FUN_100a00b0(int param_1)
 */
int __fastcall FUN_100a00b0(int param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = 0;
  for (local_10 = *(int *)(param_1 + 0xc4); local_10 != param_1 + 0xbc;
      local_10 = *(int *)(local_10 + 8)) {
    local_c = local_c + 1;
  }
  return local_c;
}

/* 100a0110  FUN_100a0110  (51 bytes)
 * undefined4 FUN_100a0110(int param_1)
 */
undefined4 __fastcall FUN_100a0110(int param_1)

{
  undefined1 local_10 [4];
  undefined4 local_c;
  int local_8;
  
  local_8 = param_1;
  (**(code **)(*(int *)(param_1 + 200) + 0xc))(&local_c,local_10);
  return local_c;
}

/* 100a0150  FUN_100a0150  (28 bytes)
 * undefined4 FUN_100a0150(int param_1)
 */
undefined4 __fastcall FUN_100a0150(int param_1)

{
  return *(undefined4 *)(param_1 + 0x184);
}

/* 100a0180  FUN_100a0180  (103 bytes)
 * undefined FUN_100a0180(int param_1)
 */
void __thiscall FUN_100a0180(void *this,int param_1)

{
  undefined4 local_54;
  undefined4 local_50;
  
  local_54 = thunk_FUN_100a0550((int)this);
  if (-1 < local_54) {
    if (param_1 < 0) {
      local_50 = 0;
    }
    else {
      if (param_1 <= local_54) {
        local_54 = param_1;
      }
      local_50 = local_54;
    }
    *(int *)((int)this + 0x184) = local_50;
    thunk_FUN_100a02d0(this);
  }
  return;
}

/* 100a0200  FUN_100a0200  (45 bytes)
 * undefined FUN_100a0200(int param_1, int param_2)
 * called by: thunk_FUN_100a0200
 */
void __thiscall FUN_100a0200(void *this,int param_1,int param_2)

{
  vgui::Panel::setPos(this,param_1,param_2);
  thunk_FUN_100a02d0(this);
  return;
}

/* 100a0240  FUN_100a0240  (45 bytes)
 * undefined FUN_100a0240(int param_1, int param_2)
 * called by: thunk_FUN_100a0240
 */
void __thiscall FUN_100a0240(void *this,int param_1,int param_2)

{
  vgui::Panel::setSize(this,param_1,param_2);
  thunk_FUN_100a02d0(this);
  return;
}

/* 100a0280  FUN_100a0280  (62 bytes)
 * undefined FUN_100a0280(int * param_1)
 * called by: thunk_FUN_100a0280
 */
void __fastcall FUN_100a0280(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1[0xa1] + 0x200))();
  param_1[0x61] = iVar1;
  thunk_FUN_100a02d0(param_1);
  return;
}

/* 100a02d0  FUN_100a02d0  (399 bytes)
 * undefined FUN_100a02d0(int * param_1)
 */
void __fastcall FUN_100a02d0(int *param_1)

{
  int local_34;
  undefined1 local_30 [4];
  int *local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 local_19;
  int local_18;
  int local_14;
  undefined1 local_10 [4];
  undefined1 local_c [4];
  int *local_8;
  
  local_8 = param_1;
  (**(code **)(*param_1 + 0x14))(local_c,local_10,&local_14,&local_18);
  (**(code **)(local_8[0x32] + 0x10))(0,0,local_14 + -0xf,local_18);
  (**(code **)(local_8[0xa1] + 0x10))(local_14 + -0xf,0,0xf,local_18);
  local_19 = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = thunk_FUN_100a0550((int)local_8);
  for (local_2c = (int *)local_8[0x31]; local_2c != local_8 + 0x2f; local_2c = (int *)local_2c[2]) {
    if (local_20 < local_8[0x61]) {
      (**(code **)(*(int *)*local_2c + 0x24))(0);
      local_19 = 1;
    }
    else if (local_20 < local_28) {
      (**(code **)(*(int *)*local_2c + 0x24))(1);
      (**(code **)(*(int *)*local_2c + 0xc))(local_30,&local_34);
      (**(code **)(*(int *)*local_2c + 0x10))(0,local_24,local_14,local_34);
      local_24 = local_24 + local_34;
      if (local_18 < local_24) {
        local_19 = 1;
      }
    }
    else {
      (**(code **)(*(int *)*local_2c + 0x24))(0);
    }
    local_20 = local_20 + 1;
  }
  (**(code **)(local_8[0xa1] + 0x24))(CONCAT31((int3)((uint)(local_8 + 0x2f) >> 8),local_19));
  (**(code **)(*local_8 + 0x30))();
  return;
}

/* 100a04d0  FUN_100a04d0  (19 bytes)
 * undefined FUN_100a04d0(void)
 * called by: thunk_FUN_100a04d0
 */
void FUN_100a04d0(void)

{
  return;
}

/* 100a04f0  FUN_100a04f0  (71 bytes)
 * undefined FUN_100a04f0(int param_1)
 */
void __thiscall FUN_100a04f0(void *this,int param_1)

{
  *(int *)((int)this + 0x364) = param_1;
  (**(code **)(*(int *)((int)this + 0x284) + 0x208))(0,param_1);
  thunk_FUN_100a02d0(this);
  return;
}

/* 100a0550  FUN_100a0550  (53 bytes)
 * int FUN_100a0550(int param_1)
 */
int __fastcall FUN_100a0550(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x364) < 0) {
    iVar1 = thunk_FUN_100a00b0(param_1);
    iVar1 = iVar1 + -1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x364);
  }
  return iVar1;
}

/* 100a05a0  FUN_100a05a0  (47 bytes)
 * undefined FUN_100a05a0(int param_1)
 * called by: thunk_FUN_100a05a0
 */
void __thiscall FUN_100a05a0(void *this,int param_1)

{
  (**(code **)(**(int **)((int)this + 4) + 0x1fc))(-param_1);
  return;
}

/* 100a05e0  FUN_100a05e0  (181 bytes)
 * undefined4 FUN_100a05e0(undefined4 param_1)
 */
undefined4 __cdecl FUN_100a05e0(undefined4 param_1)

{
  BitmapTGA *this;
  undefined4 local_70;
  InputStream local_20 [4];
  int local_1c;
  undefined1 local_18 [4];
  undefined4 local_14;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e5d3b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  thunk_FUN_100a06d0(local_20);
  local_1c = (*DAT_102e1594)(param_1,5,local_18);
  if (local_1c == 0) {
    local_70 = 0;
  }
  else {
    local_14 = 0;
    this = operator_new(0x30);
    local_8 = 0;
    if (this == (BitmapTGA *)0x0) {
      local_70 = 0;
    }
    else {
      local_70 = vgui::BitmapTGA::BitmapTGA(this,local_20,true);
    }
    local_8 = 0xffffffff;
    (*DAT_102e159c)(local_1c);
  }
  ExceptionList = local_10;
  return local_70;
}

/* 100a06d0  FUN_100a06d0  (69 bytes)
 * InputStream * FUN_100a06d0(InputStream * param_1)
 */
InputStream * __fastcall FUN_100a06d0(InputStream *param_1)

{
  vgui::InputStream::InputStream(param_1);
  *(undefined ***)param_1 = &PTR_thunk_FUN_100a0730_102749cc;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

/* 100a0730  FUN_100a0730  (37 bytes)
 * undefined FUN_100a0730(undefined1 * param_1)
 * called by: thunk_FUN_100a0730
 */
void __thiscall FUN_100a0730(void *this,undefined1 *param_1)

{
  *(undefined4 *)((int)this + 0xc) = 0;
  *param_1 = 1;
  return;
}

/* 100a0760  FUN_100a0760  (42 bytes)
 * undefined FUN_100a0760(int param_1, undefined1 * param_2)
 * called by: thunk_FUN_100a0760
 */
void __thiscall FUN_100a0760(void *this,int param_1,undefined1 *param_2)

{
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + param_1;
  *param_2 = 1;
  return;
}

/* 100a07a0  FUN_100a07a0  (39 bytes)
 * undefined FUN_100a07a0(undefined1 * param_1)
 * called by: thunk_FUN_100a07a0
 */
void __thiscall FUN_100a07a0(void *this,undefined1 *param_1)

{
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)this + 8);
  *param_1 = 1;
  return;
}

/* 100a07d0  FUN_100a07d0  (29 bytes)
 * undefined4 FUN_100a07d0(undefined1 * param_1)
 * called by: thunk_FUN_100a07d0
 */
undefined4 FUN_100a07d0(undefined1 *param_1)

{
  *param_1 = 0;
  return 0;
}

/* 100a0800  FUN_100a0800  (96 bytes)
 * undefined1 FUN_100a0800(undefined1 * param_1)
 * called by: thunk_FUN_100a0800
 */
undefined1 __thiscall FUN_100a0800(void *this,undefined1 *param_1)

{
  undefined1 uVar1;
  
  if ((*(int *)((int)this + 0xc) < 0) || (*(int *)((int)this + 8) <= *(int *)((int)this + 0xc))) {
    *param_1 = 0;
    uVar1 = 0;
  }
  else {
    *param_1 = 1;
    uVar1 = *(undefined1 *)(*(int *)((int)this + 4) + *(int *)((int)this + 0xc));
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  }
  return uVar1;
}

/* 100a0880  FUN_100a0880  (72 bytes)
 * undefined FUN_100a0880(int param_1, int param_2, undefined4 param_3)
 * called by: thunk_FUN_100a0880
 */
void __thiscall FUN_100a0880(void *this,int param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 local_c;
  
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    uVar1 = (**(code **)(*(int *)this + 0x14))(param_3);
    *(undefined1 *)(param_1 + local_c) = uVar1;
  }
  return;
}

/* 100a08e0  FUN_100a08e0  (51 bytes)
 * undefined FUN_100a08e0(int param_1)
 * called by: thunk_FUN_100a08e0
 */
void __fastcall FUN_100a08e0(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

/* 100a0920  FUN_100a0920  (181 bytes)
 * undefined4 FUN_100a0920(undefined4 param_1)
 */
undefined4 __cdecl FUN_100a0920(undefined4 param_1)

{
  BitmapTGA *this;
  undefined4 local_70;
  InputStream local_20 [4];
  int local_1c;
  undefined1 local_18 [4];
  undefined4 local_14;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e5d5b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  thunk_FUN_100a06d0(local_20);
  local_1c = (*DAT_102e1594)(param_1,5,local_18);
  if (local_1c == 0) {
    local_70 = 0;
  }
  else {
    local_14 = 0;
    this = operator_new(0x30);
    local_8 = 0;
    if (this == (BitmapTGA *)0x0) {
      local_70 = 0;
    }
    else {
      local_70 = vgui::BitmapTGA::BitmapTGA(this,local_20,false);
    }
    local_8 = 0xffffffff;
    (*DAT_102e159c)(local_1c);
  }
  ExceptionList = local_10;
  return local_70;
}

/* 100a0a10  FUN_100a0a10  (144 bytes)
 * undefined4 * FUN_100a0a10(undefined4 param_1, undefined4 param_2, int param_3, undefined4 param_4, int param_5, int param_6, int param_7, int param_8)
 */
undefined4 * __cdecl
FUN_100a0a10(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
            int param_6,int param_7,int param_8)

{
  void *this;
  undefined4 *local_5c;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e5d7b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = operator_new(0xd8);
  local_8 = 0;
  if (this == (void *)0x0) {
    local_5c = (undefined4 *)0x0;
  }
  else {
    local_5c = thunk_FUN_100a0ad0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                                  param_8);
  }
  ExceptionList = local_10;
  return local_5c;
}

/* 100a0ad0  FUN_100a0ad0  (2144 bytes)
 * undefined4 * FUN_100a0ad0(undefined4 param_1, undefined4 param_2, int param_3, undefined4 param_4, int param_5, int param_6, int param_7, int param_8)
 */
undefined4 * __thiscall
FUN_100a0ad0(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
            int param_5,int param_6,int param_7,int param_8)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LineBorder *pLVar5;
  Label *this_00;
  undefined4 uVar6;
  TextPanel *this_01;
  int *piVar7;
  Button *pBVar8;
  int iVar9;
  char *pcVar10;
  longlong lVar11;
  Button BVar12;
  Button *local_dc;
  Panel *local_d8;
  undefined4 local_54;
  undefined4 local_50;
  int *local_4c;
  ScrollPanel *local_48;
  int *local_44;
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  void *local_18;
  undefined4 *local_14;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e5de3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = this;
  thunk_FUN_1003a500(this,(-(uint)(param_3 != 0) & 0xffffff65) + 0xff,param_4,param_5,param_6,
                     param_7,param_8);
  *local_14 = &PTR_setPos_102749fc;
  local_18 = (void *)thunk_FUN_1009ace0(DAT_102e15e0);
  local_1c = thunk_FUN_100a28e0(local_18,(byte_conflict *)"Title Font");
  local_20 = thunk_FUN_100a28e0(local_18,(byte_conflict *)"Briefing Text");
  pvVar1 = operator_new(0xc0);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_d8 = (Panel *)0x0;
  }
  else {
    lVar11 = __ftol();
    iVar2 = (int)lVar11;
    lVar11 = __ftol();
    iVar3 = (int)lVar11;
    lVar11 = __ftol();
    iVar4 = (int)lVar11;
    lVar11 = __ftol();
    local_d8 = thunk_FUN_1003a570(pvVar1,(-(uint)(param_3 != 0) & 0x9b) + 100,(int)lVar11,iVar4,
                                  iVar3,iVar2);
  }
  local_8 = 0xffffffff;
  local_14[0x35] = local_d8;
  (**(code **)(*(int *)local_14[0x35] + 0x40))();
  pLVar5 = operator_new(0x44);
  local_8 = 1;
  if (pLVar5 != (LineBorder *)0x0) {
    vgui::Color::Color((Color *)&stack0xffffff04,0xb2,0x76,0,0);
    vgui::LineBorder::LineBorder(pLVar5);
  }
  local_8 = 0xffffffff;
  (**(code **)(*(int *)local_14[0x35] + 0xd4))();
  (**(code **)(*(int *)local_14[0x35] + 0x24))();
  (**(code **)(*(int *)local_14[0x35] + 4))(local_3c);
  (**(code **)(*(int *)local_14[0x35] + 0xc))(local_34,local_38);
  this_00 = operator_new(0xd0);
  local_8 = 2;
  if (this_00 == (Label *)0x0) {
    local_d8 = (Panel *)0x0;
  }
  else {
    lVar11 = __ftol();
    iVar2 = (int)lVar11;
    lVar11 = __ftol();
    local_d8 = (Panel *)vgui::Label::Label(this_00,"",(int)lVar11,iVar2);
  }
  local_8 = 0xffffffff;
  local_44 = (int *)local_d8;
  (**(code **)(*(int *)local_d8 + 0x40))(local_14);
  uVar6 = thunk_FUN_100a29a0(local_18,local_1c);
  (**(code **)(*local_44 + 0x208))(uVar6);
  (**(code **)(*local_44 + 0x20c))(1);
  thunk_FUN_100a29d0(local_18,local_1c,&local_24,&local_28,&local_2c,&local_30);
  (**(code **)(*local_44 + 0x120))(local_24,local_28,local_2c,local_30);
  (**(code **)(*local_44 + 0x124))(3);
  thunk_FUN_100a2a40(local_18,local_1c,&local_24,&local_28,&local_2c,&local_30);
  (**(code **)(*local_44 + 300))(local_24,local_28,local_2c,local_30);
  (**(code **)(*local_44 + 0x21c))(3);
  (**(code **)(*local_44 + 0x200))(local_44,param_2);
  pvVar1 = operator_new(0xd0);
  local_8 = 3;
  if (pvVar1 == (void *)0x0) {
    local_d8 = (Panel *)0x0;
  }
  else {
    lVar11 = __ftol();
    iVar2 = (int)lVar11;
    lVar11 = __ftol();
    iVar3 = (int)lVar11;
    lVar11 = __ftol();
    iVar4 = (int)lVar11;
    lVar11 = __ftol();
    local_d8 = (Panel *)thunk_FUN_1009db50(pvVar1,(int)lVar11,iVar4,iVar3,iVar2);
  }
  local_8 = 0xffffffff;
  local_48 = (ScrollPanel *)local_d8;
  (**(code **)(*(int *)local_d8 + 0x40))(local_14);
  (**(code **)(*(int *)local_48 + 0x200))(0,0);
  (**(code **)(*(int *)local_48 + 0x1fc))(1,1);
  (**(code **)(*(int *)local_48 + 0x220))();
  this_01 = operator_new(0xc0);
  local_8 = 4;
  if (this_01 == (TextPanel *)0x0) {
    local_d8 = (Panel *)0x0;
  }
  else {
    local_d8 = (Panel *)vgui::TextPanel::TextPanel(this_01,"",0,0,0x40,0x40);
  }
  local_8 = 0xffffffff;
  local_4c = (int *)local_d8;
  uVar6 = (**(code **)(*(int *)local_48 + 0x204))();
  (**(code **)(*local_4c + 0x40))(uVar6);
  uVar6 = thunk_FUN_100a29a0(local_18,local_20);
  (**(code **)(*local_4c + 0x200))(uVar6);
  thunk_FUN_100a29d0(local_18,local_20,&local_24,&local_28,&local_2c,&local_30);
  (**(code **)(*local_4c + 0x120))(local_24,local_28,local_2c,local_30);
  thunk_FUN_100a2a40(local_18,local_20,&local_24,&local_28,&local_2c,&local_30);
  (**(code **)(*local_4c + 300))(local_24,local_28,local_2c,local_30);
  (**(code **)(*local_4c + 0x1fc))(param_1);
  piVar7 = (int *)(**(code **)(*(int *)local_48 + 0x208))();
  uVar6 = (**(code **)(*piVar7 + 0x1c))();
  piVar7 = (int *)(**(code **)(*(int *)local_48 + 0x208))(uVar6);
  uVar6 = (**(code **)(*piVar7 + 0x18))();
  piVar7 = (int *)(**(code **)(*local_4c + 0x208))(uVar6);
  (**(code **)(*piVar7 + 0x14))();
  piVar7 = (int *)(**(code **)(*local_4c + 0x208))(&local_50,&local_54);
  (**(code **)(*piVar7 + 0x68))();
  (**(code **)(*local_4c + 8))(local_50,local_54);
  (**(code **)(*(int *)local_48 + 0x200))(1,1);
  (**(code **)(*(int *)local_48 + 0x1fc))(0,0);
  (**(code **)(*(int *)local_48 + 0x220))();
  pBVar8 = operator_new(300);
  local_8 = 5;
  if (pBVar8 == (Button *)0x0) {
    local_dc = (Button *)0x0;
  }
  else {
    BVar12 = (Button)0x0;
    lVar11 = __ftol();
    iVar2 = (int)lVar11;
    lVar11 = __ftol();
    iVar3 = (int)lVar11;
    lVar11 = __ftol();
    iVar4 = (int)lVar11;
    lVar11 = __ftol();
    iVar9 = (int)lVar11;
    pcVar10 = thunk_FUN_10068750("#Menu_OK");
    local_dc = thunk_FUN_1009cd50(pBVar8,pcVar10,iVar9,iVar4,iVar3,iVar2,BVar12);
  }
  local_8 = 0xffffffff;
  pvVar1 = operator_new(8);
  local_8 = 6;
  if (pvVar1 == (void *)0x0) {
    local_d8 = (Panel *)0x0;
  }
  else {
    local_d8 = (Panel *)thunk_FUN_1009ae20(pvVar1,0);
  }
  local_8 = 0xffffffff;
  (**(code **)(*(int *)local_dc + 0x240))(local_d8);
  (**(code **)(*(int *)local_dc + 0x40))(local_14);
  ExceptionList = local_10;
  return local_14;
}

/* 100a1550  FUN_100a1550  (69 bytes)
 * Layout * FUN_100a1550(Layout * param_1)
 */
Layout * __thiscall FUN_100a1550(void *this,Layout *param_1)

{
  vgui::Layout::Layout(this,param_1);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(Layout *)((int)this + 8) = param_1[8];
  *(undefined ***)this = &vgui::StackLayout::_vftable_;
  return this;
}

/* 100a15b0  FUN_100a15b0  (60 bytes)
 * Layout * FUN_100a15b0(Layout * param_1)
 */
Layout * __thiscall FUN_100a15b0(void *this,Layout *param_1)

{
  vgui::Layout::operator=(this,param_1);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(Layout *)((int)this + 8) = param_1[8];
  return this;
}

/* 100a1600  FUN_100a1600  (42 bytes)
 * undefined FUN_100a1600(void)
 */
void FUN_100a1600(void)

{
  DAT_1031e378 = (*DAT_102e1490)("bitmapfonts",&DAT_1026d38c,0);
  return;
}

/* 100a1640  FUN_100a1640  (75 bytes)
 * undefined1 * FUN_100a1640(undefined1 * param_1)
 * called by: thunk_FUN_100a1640
 */
undefined1 * __fastcall FUN_100a1640(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return param_1;
}

/* 100a16a0  FUN_100a16a0  (49 bytes)
 * undefined FUN_100a16a0(int param_1)
 */
void __fastcall FUN_100a16a0(int param_1)

{
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_100bbb10(*(void **)(param_1 + 0x58));
  }
  return;
}

/* 100a16e0  FUN_100a16e0  (3093 bytes)
 * undefined4 * FUN_100a16e0(int param_1)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_100a16e0(void *this,int param_1)

{
  int iVar1;
  size_t sVar2;
  undefined4 uVar3;
  uint uVar4;
  Font *this_00;
  int *local_714;
  int local_6c0;
  int local_6bc;
  byte_conflict local_6b4 [63];
  undefined1 local_675;
  byte_conflict local_674 [63];
  undefined1 local_635;
  char local_632;
  char local_631;
  char local_630;
  char local_62f;
  char local_62e;
  char local_62d;
  char *local_62c;
  int local_628;
  undefined1 local_624 [512];
  int local_424;
  void *local_420;
  int local_41c;
  int local_418;
  byte_conflict local_414 [1024];
  undefined4 *local_14;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e5e2c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)this = &PTR_thunk_FUN_100a2780_10274ecc;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  local_14 = this;
  local_41c = FUN_100a2600("",param_1);
  local_14[3] = param_1;
  local_418 = local_41c;
  if ((DAT_1031c470 & 1) == 0) {
    DAT_1031c470 = DAT_1031c470 | 1;
    _eh_vector_constructor_iterator_(&DAT_1031c478,0x7c,0x40,thunk_FUN_100a1640,thunk_FUN_100a16a0);
    FUN_100bc490(0x100a2750);
  }
  _memset(&DAT_1031c478,0,0x1f00);
  local_628 = -1;
  local_62c = (char *)0x0;
  if (local_418 == 0) {
    (*DAT_102e14fc)("Unable to find *_textscheme.txt\n");
  }
  else {
    local_418 = (*DAT_102e1598)(local_418,local_414);
    while( true ) {
      sVar2 = _strlen((char *)local_414);
      if ((sVar2 == 0) || (0x3f < local_628)) goto LAB_100a1d7b;
      _strncpy((char *)local_674,(char *)local_414,0x40);
      local_635 = 0;
      local_418 = (*DAT_102e1598)(local_418,local_414);
      uVar4 = FUN_100db540(local_414,"=");
      if (uVar4 != 0) break;
      local_418 = (*DAT_102e1598)(local_418,local_414);
      _strncpy((char *)local_6b4,(char *)local_414,0x40);
      local_675 = 0;
      uVar4 = FUN_100db540(local_674,(byte_conflict *)"SchemeName");
      if (uVar4 == 0) {
        if (local_62c != (char *)0x0) {
          if (local_62d == '\0') {
            local_62c[99] = -1;
            local_62c[0x62] = -1;
            local_62c[0x61] = -1;
            local_62c[0x60] = -1;
          }
          if (local_62f == '\0') {
            FUN_100bc090((undefined4 *)(local_62c + 0x68),(undefined4 *)(local_62c + 0x60),4);
          }
          if (local_631 == '\0') {
            FUN_100bc090((undefined4 *)(local_62c + 0x70),(undefined4 *)(local_62c + 0x68),4);
          }
          if (local_62e == '\0') {
            local_62c[0x67] = '\0';
            local_62c[0x66] = '\0';
            local_62c[0x65] = '\0';
            local_62c[100] = '\0';
          }
          if (local_630 == '\0') {
            FUN_100bc090((undefined4 *)(local_62c + 0x6c),(undefined4 *)(local_62c + 100),4);
          }
          if (local_632 == '\0') {
            FUN_100bc090((undefined4 *)(local_62c + 0x74),(undefined4 *)(local_62c + 0x6c),4);
          }
          if (*(int *)(local_62c + 0x50) == 0) {
            local_62c[0x50] = '\x11';
            local_62c[0x51] = '\0';
            local_62c[0x52] = '\0';
            local_62c[0x53] = '\0';
          }
          if (local_62c[0x20] == '\0') {
            FUN_100bba20((uint *)(local_62c + 0x20),(uint *)"Arial");
          }
        }
        local_628 = local_628 + 1;
        local_62c = &DAT_1031c478 + local_628 * 0x7c;
        local_632 = '\0';
        local_631 = '\0';
        local_630 = '\0';
        local_62f = '\0';
        local_62e = '\0';
        local_62d = '\0';
        _strncpy(local_62c,(char *)local_6b4,0x20);
        local_62c[0x1f] = '\0';
      }
      if (local_62c == (char *)0x0) {
        (*DAT_102e14f8)("font scheme text file MUST start with a \'SchemeName\'\n");
        goto LAB_100a1d7b;
      }
      uVar4 = FUN_100db540(local_674,(byte_conflict *)"FontName");
      if (uVar4 == 0) {
        _strncpy(local_62c + 0x20,(char *)local_6b4,0x30);
        local_62c[0x4f] = '\0';
      }
      else {
        uVar4 = FUN_100db540(local_674,(byte_conflict *)"FontSize");
        if (uVar4 == 0) {
          uVar3 = FUN_100c0d30(local_6b4);
          *(undefined4 *)(local_62c + 0x50) = uVar3;
        }
        else {
          uVar4 = FUN_100db540(local_674,(byte_conflict *)"FontWeight");
          if (uVar4 == 0) {
            uVar3 = FUN_100c0d30(local_6b4);
            *(undefined4 *)(local_62c + 0x54) = uVar3;
          }
          else {
            uVar4 = FUN_100db540(local_674,(byte_conflict *)"FgColor");
            if (uVar4 == 0) {
              FUN_100a26e0(local_62c + 0x60,(char *)local_6b4);
              local_62d = '\x01';
            }
            else {
              uVar4 = FUN_100db540(local_674,(byte_conflict *)"BgColor");
              if (uVar4 == 0) {
                FUN_100a26e0(local_62c + 100,(char *)local_6b4);
                local_62e = '\x01';
              }
              else {
                uVar4 = FUN_100db540(local_674,(byte_conflict *)"FgColorArmed");
                if (uVar4 == 0) {
                  FUN_100a26e0(local_62c + 0x68,(char *)local_6b4);
                  local_62f = '\x01';
                }
                else {
                  uVar4 = FUN_100db540(local_674,(byte_conflict *)"BgColorArmed");
                  if (uVar4 == 0) {
                    FUN_100a26e0(local_62c + 0x6c,(char *)local_6b4);
                    local_630 = '\x01';
                  }
                  else {
                    uVar4 = FUN_100db540(local_674,(byte_conflict *)"FgColorMousedown");
                    if (uVar4 == 0) {
                      FUN_100a26e0(local_62c + 0x70,(char *)local_6b4);
                      local_631 = '\x01';
                    }
                    else {
                      uVar4 = FUN_100db540(local_674,(byte_conflict *)"BgColorMousedown");
                      if (uVar4 == 0) {
                        FUN_100a26e0(local_62c + 0x74,(char *)local_6b4);
                        local_632 = '\x01';
                      }
                      else {
                        uVar4 = FUN_100db540(local_674,(byte_conflict *)"BorderColor");
                        if (uVar4 == 0) {
                          FUN_100a26e0(local_62c + 0x78,(char *)local_6b4);
                          local_632 = '\x01';
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      local_418 = (*DAT_102e1598)(local_418,local_414);
    }
    if (local_628 < 0) {
      (*DAT_102e14f8)("error parsing font scheme text file at file start - expected \'=\', found \'%s\'\'\n"
                      ,local_414);
    }
    else {
      (*DAT_102e14f8)("error parsing font scheme text file at scheme \'%s\' - expected \'=\', found \'%s\'\'\n"
                      ,&DAT_1031c478 + local_628 * 0x7c,local_414);
    }
LAB_100a1d7b:
    (*DAT_102e159c)(local_41c);
  }
  if (local_628 < 0) {
    local_628 = 0;
    FUN_100bba20((uint *)&DAT_1031c478,(uint *)"Default Scheme");
    FUN_100bba20((uint *)&DAT_1031c498,(uint *)"Arial");
    _DAT_1031c4c8 = 0;
    DAT_1031c4db = 0xff;
    DAT_1031c4da = 0xff;
    DAT_1031c4d9 = 0xff;
    DAT_1031c4d8 = 0xff;
    DAT_1031c4e3 = 0xff;
    DAT_1031c4e2 = 0xff;
    DAT_1031c4e1 = 0xff;
    DAT_1031c4e0 = 0xff;
    DAT_1031c4eb = 0xff;
    DAT_1031c4ea = 0xff;
    DAT_1031c4e9 = 0xff;
    DAT_1031c4e8 = 0xff;
  }
  local_14[2] = local_628 + 1;
  iVar1 = local_14[2];
  local_714 = operator_new(iVar1 * 0x7c + 4);
  local_8 = 0;
  if (local_714 == (int *)0x0) {
    local_714 = (int *)0x0;
  }
  else {
    *local_714 = iVar1;
    _eh_vector_constructor_iterator_(local_714 + 1,0x7c,iVar1,thunk_FUN_100a1640,thunk_FUN_100a16a0)
    ;
    local_714 = local_714 + 1;
  }
  local_8 = 0xffffffff;
  local_14[1] = local_714;
  FUN_100bc090((undefined4 *)local_14[1],(undefined4 *)&DAT_1031c478,local_14[2] * 0x7c);
  for (local_6bc = 0; local_6bc < (int)local_14[2]; local_6bc = local_6bc + 1) {
    *(undefined4 *)(local_14[1] + 0x58 + local_6bc * 0x7c) = 0;
    for (local_6c0 = 0; local_6c0 < local_6bc; local_6c0 = local_6c0 + 1) {
      uVar4 = FUN_100db540((byte_conflict *)(local_14[1] + 0x20 + local_6bc * 0x7c),
                           (byte_conflict *)(local_14[1] + 0x20 + local_6c0 * 0x7c));
      if (((uVar4 == 0) &&
          (*(int *)(local_14[1] + 0x50 + local_6bc * 0x7c) ==
           *(int *)(local_14[1] + 0x50 + local_6c0 * 0x7c))) &&
         (*(int *)(local_14[1] + 0x54 + local_6bc * 0x7c) ==
          *(int *)(local_14[1] + 0x54 + local_6c0 * 0x7c))) {
        *(undefined4 *)(local_14[1] + 0x58 + local_6bc * 0x7c) =
             *(undefined4 *)(local_14[1] + 0x58 + local_6c0 * 0x7c);
        *(undefined4 *)(local_14[1] + 0x5c + local_6bc * 0x7c) = 0;
      }
    }
    if (*(int *)(local_14[1] + 0x58 + local_6bc * 0x7c) == 0) {
      local_424 = -1;
      local_420 = (void *)0x0;
      if ((DAT_1031e378 != 0) && (*(float *)(DAT_1031e378 + 0xc) != 0.0)) {
        FUN_100bb6e0(local_624,(byte_conflict *)"gfx\\vgui\\fonts\\%d_%s.tga");
        local_420 = (void *)(*DAT_102e1594)(local_624,5,&local_424);
      }
      this_00 = operator_new(0x10);
      local_8 = 1;
      if (this_00 == (Font *)0x0) {
        local_714 = (int *)0x0;
      }
      else {
        local_714 = (int *)vgui::Font::Font(this_00,(char *)(local_14[1] + 0x20 + local_6bc * 0x7c),
                                            local_420,local_424,
                                            *(int *)(local_14[1] + 0x50 + local_6bc * 0x7c),0,0.0,
                                            *(int *)(local_14[1] + 0x54 + local_6bc * 0x7c),false,
                                            false,false,false);
      }
      local_8 = 0xffffffff;
      *(int **)(local_14[1] + 0x58 + local_6bc * 0x7c) = local_714;
      *(undefined4 *)(local_14[1] + 0x5c + local_6bc * 0x7c) = 1;
    }
    *(char *)(local_14[1] + 99 + local_6bc * 0x7c) =
         -1 - *(char *)(local_14[1] + 99 + local_6bc * 0x7c);
    *(char *)(local_14[1] + 0x67 + local_6bc * 0x7c) =
         -1 - *(char *)(local_14[1] + 0x67 + local_6bc * 0x7c);
    *(char *)(local_14[1] + 0x6b + local_6bc * 0x7c) =
         -1 - *(char *)(local_14[1] + 0x6b + local_6bc * 0x7c);
    *(char *)(local_14[1] + 0x6f + local_6bc * 0x7c) =
         -1 - *(char *)(local_14[1] + 0x6f + local_6bc * 0x7c);
    *(char *)(local_14[1] + 0x73 + local_6bc * 0x7c) =
         -1 - *(char *)(local_14[1] + 0x73 + local_6bc * 0x7c);
    *(char *)(local_14[1] + 0x77 + local_6bc * 0x7c) =
         -1 - *(char *)(local_14[1] + 0x77 + local_6bc * 0x7c);
  }
  ExceptionList = local_10;
  return local_14;
}

/* 100a2600  FUN_100a2600  (176 bytes)
 * int FUN_100a2600(undefined4 param_1, int param_2)
 * called by: FUN_100a16e0
 */
int __cdecl FUN_100a2600(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 local_10c [256];
  undefined4 local_c;
  int local_8;
  
  local_8 = DAT_1028a910 + -1;
  do {
    if (*(int *)(local_8 * 4 + 0x1028a8ec) <= param_2) {
      while( true ) {
        local_c = 0;
        FUN_100bb6e0(local_10c,(byte_conflict *)"%s%d%s");
        iVar1 = (*DAT_102e1594)(local_10c,5,0);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (local_8 == 0) break;
        local_8 = local_8 + -1;
      }
      return 0;
    }
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  return 0;
}

/* 100a26e0  FUN_100a26e0  (84 bytes)
 * undefined FUN_100a26e0(undefined1 * param_1, char * param_2)
 * called by: FUN_100a16e0
 */
void __cdecl FUN_100a26e0(undefined1 *param_1,char *param_2)

{
  undefined1 local_14;
  undefined1 local_10;
  undefined1 local_c;
  undefined1 local_8;
  
  FUN_100c19a0(param_2,(byte_conflict *)"%d %d %d %d");
  *param_1 = local_8;
  param_1[1] = local_c;
  param_1[2] = local_10;
  param_1[3] = local_14;
  return;
}

/* 100a2750  FUN_100a2750  (35 bytes)
 * undefined FUN_100a2750(void)
 */
void FUN_100a2750(void)

{
  FUN_100c1c00(&DAT_1031c478,0x7c,0x40,thunk_FUN_100a16a0);
  return;
}

/* 100a2780  FUN_100a2780  (54 bytes)
 * undefined4 * FUN_100a2780(uint param_1)
 * called by: thunk_FUN_100a2780
 */
undefined4 * __thiscall FUN_100a2780(void *this,uint param_1)

{
  thunk_FUN_100a2870(this);
  if ((param_1 & 1) != 0) {
    FUN_100bbb10(this);
  }
  return this;
}

/* 100a27d0  FUN_100a27d0  (120 bytes)
 * void * FUN_100a27d0(uint param_1)
 */
void * __thiscall FUN_100a27d0(void *this,uint param_1)

{
  if ((param_1 & 2) == 0) {
    thunk_FUN_100a16a0((int)this);
    if ((param_1 & 1) != 0) {
      FUN_100bbb10(this);
    }
  }
  else {
    FUN_100c1c00(this,0x7c,*(int *)((int)this + -4),thunk_FUN_100a16a0);
    if ((param_1 & 1) != 0) {
      FUN_100bbb10((void *)((int)this + -4));
    }
    this = (void *)((int)this + -4);
  }
  return this;
}

/* 100a2870  FUN_100a2870  (81 bytes)
 * undefined FUN_100a2870(undefined4 * param_1)
 */
void __fastcall FUN_100a2870(undefined4 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100a2780_10274ecc;
  if ((void *)param_1[1] != (void *)0x0) {
    thunk_FUN_100a27d0((void *)param_1[1],3);
  }
  param_1[2] = 0;
  return;
}

/* 100a28e0  FUN_100a28e0  (88 bytes)
 * int FUN_100a28e0(byte.conflict * param_1)
 */
int __thiscall FUN_100a28e0(void *this,byte_conflict *param_1)

{
  uint uVar1;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (*(int *)((int)this + 8) <= local_c) {
      return 0;
    }
    uVar1 = FUN_100db540(param_1,(byte_conflict *)(local_c * 0x7c + *(int *)((int)this + 4)));
    if (uVar1 == 0) break;
    local_c = local_c + 1;
  }
  return local_c;
}

/* 100a2950  FUN_100a2950  (52 bytes)
 * int FUN_100a2950(int param_1)
 */
int __thiscall FUN_100a2950(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 < *(int *)((int)this + 8)) {
    iVar1 = param_1 * 0x7c + *(int *)((int)this + 4);
  }
  else {
    iVar1 = *(int *)((int)this + 4);
  }
  return iVar1;
}

/* 100a29a0  FUN_100a29a0  (36 bytes)
 * undefined4 FUN_100a29a0(int param_1)
 */
undefined4 __thiscall FUN_100a29a0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_100a2950(this,param_1);
  return *(undefined4 *)(iVar1 + 0x58);
}

/* 100a29d0  FUN_100a29d0  (88 bytes)
 * undefined FUN_100a29d0(int param_1, uint * param_2, uint * param_3, uint * param_4, uint * param_5)
 */
void __thiscall
FUN_100a29d0(void *this,int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  
  iVar1 = thunk_FUN_100a2950(this,param_1);
  *param_2 = (uint)*(byte *)(iVar1 + 0x60);
  *param_3 = (uint)*(byte *)(iVar1 + 0x61);
  *param_4 = (uint)*(byte *)(iVar1 + 0x62);
  *param_5 = (uint)*(byte *)(iVar1 + 99);
  return;
}

/* 100a2a40  FUN_100a2a40  (88 bytes)
 * undefined FUN_100a2a40(int param_1, uint * param_2, uint * param_3, uint * param_4, uint * param_5)
 */
void __thiscall
FUN_100a2a40(void *this,int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  
  iVar1 = thunk_FUN_100a2950(this,param_1);
  *param_2 = (uint)*(byte *)(iVar1 + 100);
  *param_3 = (uint)*(byte *)(iVar1 + 0x65);
  *param_4 = (uint)*(byte *)(iVar1 + 0x66);
  *param_5 = (uint)*(byte *)(iVar1 + 0x67);
  return;
}

/* 100a2ab0  FUN_100a2ab0  (88 bytes)
 * undefined FUN_100a2ab0(int param_1, uint * param_2, uint * param_3, uint * param_4, uint * param_5)
 */
void __thiscall
FUN_100a2ab0(void *this,int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  
  iVar1 = thunk_FUN_100a2950(this,param_1);
  *param_2 = (uint)*(byte *)(iVar1 + 0x68);
  *param_3 = (uint)*(byte *)(iVar1 + 0x69);
  *param_4 = (uint)*(byte *)(iVar1 + 0x6a);
  *param_5 = (uint)*(byte *)(iVar1 + 0x6b);
  return;
}

/* 100a2b20  FUN_100a2b20  (88 bytes)
 * undefined FUN_100a2b20(int param_1, uint * param_2, uint * param_3, uint * param_4, uint * param_5)
 */
void __thiscall
FUN_100a2b20(void *this,int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  
  iVar1 = thunk_FUN_100a2950(this,param_1);
  *param_2 = (uint)*(byte *)(iVar1 + 0x6c);
  *param_3 = (uint)*(byte *)(iVar1 + 0x6d);
  *param_4 = (uint)*(byte *)(iVar1 + 0x6e);
  *param_5 = (uint)*(byte *)(iVar1 + 0x6f);
  return;
}

/* 100a2b90  FUN_100a2b90  (88 bytes)
 * undefined FUN_100a2b90(int param_1, uint * param_2, uint * param_3, uint * param_4, uint * param_5)
 */
void __thiscall
FUN_100a2b90(void *this,int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  
  iVar1 = thunk_FUN_100a2950(this,param_1);
  *param_2 = (uint)*(byte *)(iVar1 + 0x70);
  *param_3 = (uint)*(byte *)(iVar1 + 0x71);
  *param_4 = (uint)*(byte *)(iVar1 + 0x72);
  *param_5 = (uint)*(byte *)(iVar1 + 0x73);
  return;
}

/* 100a2c00  FUN_100a2c00  (88 bytes)
 * undefined FUN_100a2c00(int param_1, uint * param_2, uint * param_3, uint * param_4, uint * param_5)
 */
void __thiscall
FUN_100a2c00(void *this,int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  
  iVar1 = thunk_FUN_100a2950(this,param_1);
  *param_2 = (uint)*(byte *)(iVar1 + 0x74);
  *param_3 = (uint)*(byte *)(iVar1 + 0x75);
  *param_4 = (uint)*(byte *)(iVar1 + 0x76);
  *param_5 = (uint)*(byte *)(iVar1 + 0x77);
  return;
}

/* 100a2c70  FUN_100a2c70  (88 bytes)
 * undefined FUN_100a2c70(int param_1, uint * param_2, uint * param_3, uint * param_4, uint * param_5)
 */
void __thiscall
FUN_100a2c70(void *this,int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  
  iVar1 = thunk_FUN_100a2950(this,param_1);
  *param_2 = (uint)*(byte *)(iVar1 + 0x78);
  *param_3 = (uint)*(byte *)(iVar1 + 0x79);
  *param_4 = (uint)*(byte *)(iVar1 + 0x7a);
  *param_5 = (uint)*(byte *)(iVar1 + 0x7b);
  return;
}

/* 100a2ce0  FUN_100a2ce0  (94 bytes)
 * undefined FUN_100a2ce0(undefined4 param_1)
 * called by: thunk_FUN_100a2ce0
 */
void __thiscall FUN_100a2ce0(void *this,undefined4 param_1)

{
  int iVar1;
  InputSignal *pIVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 local_c;
  
  local_c = 0;
  while( true ) {
    iVar1 = vgui::Dar<vgui::InputSignal*>::getCount((Dar<vgui::InputSignal*> *)((int)this + 0x40));
    if (iVar1 <= local_c) break;
    uVar3 = param_1;
    pvVar4 = this;
    pIVar2 = vgui::Dar<vgui::InputSignal*>::operator[]
                       ((Dar<vgui::InputSignal*> *)((int)this + 0x40),local_c);
    (**(code **)(*(int *)pIVar2 + 0xc))(uVar3,pvVar4);
    local_c = local_c + 1;
  }
  return;
}

/* 100a2d60  FUN_100a2d60  (2669 bytes)
 * Panel * FUN_100a2d60(int param_1, int param_2, int param_3, int param_4)
 */
Panel * __thiscall FUN_100a2d60(void *this,int param_1,int param_2,int param_3,int param_4)

{
  Panel *this_00;
  LineBorder *pLVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined4 uStack_ec;
  int iStack_e8;
  Border *local_b8;
  int local_68;
  int local_60;
  int local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  Border *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  void *local_18;
  Panel *local_14;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e5ebd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = this;
  vgui::Panel::Panel(this,param_1,param_2,param_3,param_4);
  thunk_FUN_10036600((InputSignal *)(local_14 + 0xbc));
  vgui::Label::Label((Label *)(local_14 + 0xc0));
  thunk_FUN_1009e500(local_14 + 400);
  local_8 = 0;
  _eh_vector_constructor_iterator_(local_14 + 0x274,0xe8,8,thunk_FUN_100a6170,thunk_FUN_100a6600);
  local_8._0_1_ = 1;
  thunk_FUN_1009fc20(local_14 + 0x9bc);
  local_8._0_1_ = 2;
  _eh_vector_constructor_iterator_(local_14 + 0xd24,0xe4,0x4a,thunk_FUN_1009e500,thunk_FUN_1009e590)
  ;
  local_8._0_1_ = 3;
  _eh_vector_constructor_iterator_
            (local_14 + 0x4f0c,0xe8,0x250,thunk_FUN_100a6170,thunk_FUN_100a6600);
  local_8._0_1_ = 4;
  thunk_FUN_100a3a70(local_14 + 0x2678c);
  *(undefined ***)local_14 = &PTR_setPos_10274f94;
  *(undefined ***)(local_14 + 0xbc) = &PTR_thunk_FUN_100a5a60_10274f54;
  local_18 = (void *)thunk_FUN_1009ace0(DAT_102e15e0);
  local_1c = thunk_FUN_100a28e0(local_18,(byte_conflict *)"Scoreboard Title Text");
  local_20 = thunk_FUN_100a28e0(local_18,"Scoreboard Small Text");
  local_24 = thunk_FUN_100a29a0(local_18,local_1c);
  local_28 = thunk_FUN_100a29a0(local_18,local_20);
  vgui::Panel::setBgColor(local_14,0,0,0,0x60);
  *(undefined4 *)(local_14 + 0x9b4) = 0;
  *(undefined4 *)(local_14 + 0x9b8) = 0xffffffff;
  (**(code **)(*(int *)(local_14 + 0xc0) + 0x208))();
  (**(code **)(*(int *)(local_14 + 0xc0) + 0x200))();
  (**(code **)(*(int *)(local_14 + 0xc0) + 300))();
  (**(code **)(*(int *)(local_14 + 0xc0) + 0x124))();
  (**(code **)(*(int *)(local_14 + 0xc0) + 0x21c))();
  iStack_e8 = 0x100a2f7f;
  pLVar1 = operator_new(0x44);
  local_8._0_1_ = 5;
  if (pLVar1 == (LineBorder *)0x0) {
    local_b8 = (Border *)0x0;
  }
  else {
    vgui::Color::Color((Color *)&uStack_ec,0x3c,0x3c,0x3c,0x80);
    local_b8 = (Border *)vgui::LineBorder::LineBorder(pLVar1);
  }
  local_8 = CONCAT31(local_8._1_3_,4);
  local_2c = local_b8;
  iStack_e8 = 0x100a2fe0;
  vgui::Panel::setBorder(local_14,local_b8);
  iStack_e8 = 0x100a2fea;
  vgui::Panel::setPaintBorderEnabled(local_14,true);
  local_30 = DAT_1028a944 + 3;
  if (0x27f < DAT_102e1234) {
    lVar7 = __ftol();
    local_30 = (int)lVar7;
  }
  __ftol();
  iStack_e8 = param_3;
  uStack_ec = 4;
  (**(code **)(*(int *)(local_14 + 0xc0) + 0x10))(local_30);
  (**(code **)(*(int *)(local_14 + 0xc0) + 0x220))(0);
  (**(code **)(*(int *)(local_14 + 0xc0) + 0x40))(local_14);
  thunk_FUN_1009e5c0(local_14 + 400,8,1);
  thunk_FUN_1009ea00(local_14 + 400,0,0);
  for (local_34 = 0; local_34 < 8; local_34 = local_34 + 1) {
    if ((*(int *)(&DAT_1028a940 + local_34 * 0xc) == 0) ||
       (**(char **)(&DAT_1028a940 + local_34 * 0xc) != '#')) {
      if (*(int *)(&DAT_1028a940 + local_34 * 0xc) != 0) {
        (**(code **)(*(int *)(local_14 + local_34 * 0xe8 + 0x274) + 0x22c))
                  (*(undefined4 *)(&DAT_1028a940 + local_34 * 0xc));
      }
    }
    else {
      puVar2 = thunk_FUN_10068750(*(char **)(&DAT_1028a940 + local_34 * 0xc));
      (**(code **)(*(int *)(local_14 + local_34 * 0xe8 + 0x274) + 0x22c))(puVar2);
    }
    local_38 = (&DAT_1028a944)[local_34 * 3];
    if (DAT_102e1234 < 0x280) {
      if (DAT_102e1234 == 400) {
        if (local_34 == 1) {
          local_38 = local_38 + -0x1c;
        }
        else if (local_34 == 0) {
          local_38 = local_38 + -8;
        }
      }
    }
    else {
      lVar7 = __ftol();
      local_38 = (int)lVar7;
    }
    thunk_FUN_1009ea90(local_14 + 400,local_34,local_38);
    thunk_FUN_1009e900(local_14 + 400,local_34,0,(int *)(local_14 + local_34 * 0xe8 + 0x274));
    (**(code **)(*(int *)(local_14 + local_34 * 0xe8 + 0x274) + 300))(0,0,0,0xff);
    (**(code **)(*(int *)(local_14 + local_34 * 0xe8 + 0x274) + 300))(0,0,0,0xff);
    (**(code **)(*(int *)(local_14 + local_34 * 0xe8 + 0x274) + 0x124))(3);
    (**(code **)(*(int *)(local_14 + local_34 * 0xe8 + 0x274) + 0x208))(local_28);
    (**(code **)(*(int *)(local_14 + local_34 * 0xe8 + 0x274) + 0x21c))
              (*(undefined4 *)(&DAT_1028a948 + local_34 * 0xc));
    local_3c = 0xc;
    if (0x1df < DAT_102e1238) {
      lVar7 = __ftol();
      local_3c = (undefined4)lVar7;
    }
    (**(code **)(*(int *)(local_14 + local_34 * 0xe8 + 0x274) + 8))(0x32,local_3c);
  }
  thunk_FUN_1009ef20(local_14 + 400,6,0,&local_40,&local_44,&local_48,&local_4c);
  lVar7 = __ftol();
  thunk_FUN_1009ea90(local_14 + 400,7,(int)lVar7);
  thunk_FUN_1009eeb0(local_14 + 400);
  uVar3 = thunk_FUN_1009ec50(local_14 + 400,0);
  lVar7 = __ftol();
  uVar4 = (undefined4)lVar7;
  lVar7 = __ftol();
  uVar5 = (undefined4)lVar7;
  lVar7 = __ftol();
  (**(code **)(*(int *)(local_14 + 400) + 0x10))((int)lVar7,uVar5,uVar4,uVar3);
  (**(code **)(*(int *)(local_14 + 400) + 0x40))(local_14);
  (**(code **)(*(int *)(local_14 + 400) + 300))(0,0,0,0xff);
  (**(code **)(*(int *)(local_14 + 400) + 0x14))(&local_50,&local_54,&local_58,&local_5c);
  (**(code **)(*(int *)(local_14 + 0x9bc) + 0x10))
            (local_50,local_54 + local_5c,local_58,((param_4 - local_54) - local_5c) + -6);
  (**(code **)(*(int *)(local_14 + 0x9bc) + 300))(0,0,0,0xff);
  (**(code **)(*(int *)(local_14 + 0x9bc) + 0x40))(local_14);
  for (local_60 = 0; local_60 < 0x4a; local_60 = local_60 + 1) {
    this_00 = local_14 + local_60 * 0xe4 + 0xd24;
    thunk_FUN_1009e5c0(this_00,8,1);
    for (local_68 = 0; local_68 < 8; local_68 = local_68 + 1) {
      (**(code **)(*(int *)(local_14 + local_60 * 0xe8 + local_68 * 0x4310 + 0x4f0c) + 0x220))(0);
      thunk_FUN_100a6660(local_14 + local_60 * 0xe8 + local_68 * 0x4310 + 0x4f0c,local_60);
      if (local_14 == (Panel *)0x0) {
        local_b8 = (Border *)0x0;
      }
      else {
        local_b8 = (Border *)(local_14 + 0xbc);
      }
      (**(code **)(*(int *)(local_14 + local_60 * 0xe8 + local_68 * 0x4310 + 0x4f0c) + 0x70))
                (local_b8);
      thunk_FUN_1009e900(this_00,local_68,0,
                         (int *)(local_14 + local_60 * 0xe8 + local_68 * 0x4310 + 0x4f0c));
    }
    (**(code **)(*(int *)this_00 + 300))(0,0,0,0xff);
    thunk_FUN_1009ea00(this_00,0,0);
    thunk_FUN_1009f010(this_00,(int)(local_14 + 400));
    thunk_FUN_1009eeb0(this_00);
    iVar6 = thunk_FUN_1009f1d0((int)this_00);
    uVar3 = thunk_FUN_100a6c10((int *)this_00);
    (**(code **)(*(int *)this_00 + 8))(uVar3,iVar6);
    thunk_FUN_1009f0c0(this_00);
    thunk_FUN_1009ff90(local_14 + 0x9bc,this_00);
  }
  (**(code **)(*(int *)(local_14 + 0x2678c) + 300))(0,0,0,0xff);
  (**(code **)(*(int *)(local_14 + 0x2678c) + 0x40))(local_14);
  (**(code **)(*(int *)(local_14 + 0x2678c) + 0x10))(0,0,param_3,param_4);
  if (local_14 == (Panel *)0x0) {
    local_b8 = (Border *)0x0;
  }
  else {
    local_b8 = (Border *)(local_14 + 0xbc);
  }
  (**(code **)(*(int *)(local_14 + 0x2678c) + 0x70))(local_b8);
  thunk_FUN_100a3aa0((int)local_14);
  ExceptionList = local_10;
  return local_14;
}

/* 100a3a70  FUN_100a3a70  (39 bytes)
 * Panel * FUN_100a3a70(Panel * param_1)
 */
Panel * __fastcall FUN_100a3a70(Panel *param_1)

{
  vgui::Panel::Panel(param_1);
  *(undefined ***)param_1 = &PTR_setPos_102751fc;
  return param_1;
}

/* 100a3aa0  FUN_100a3aa0  (111 bytes)
 * undefined FUN_100a3aa0(int param_1)
 */
void __fastcall FUN_100a3aa0(int param_1)

{
  *(undefined4 *)(param_1 + 0x26ae8) = 0;
  *(undefined4 *)(param_1 + 0x26aec) = 0;
  *(undefined4 *)(param_1 + 0x2684c) = 0;
  *(undefined4 *)(param_1 + 0x26848) = 0;
  _memset(&DAT_1031fa00,0,0x69a);
  _memset(&DAT_1031e9b8,0,0xa28);
  return;
}

/* 100a3b30  FUN_100a3b30  (253 bytes)
 * undefined FUN_100a3b30(void * param_1)
 */
void __fastcall FUN_100a3b30(void *param_1)

{
  int local_3c;
  undefined1 local_38 [48];
  void *local_8;
  
  local_8 = param_1;
  if (DAT_102e15e0 != -0xab0) {
    FUN_100bb6e0(local_38,"%s");
    (**(code **)(*(int *)((int)local_8 + 0xc0) + 0x200))((int)local_8 + 0xc0,local_38);
  }
  *(undefined4 *)((int)local_8 + 0x26854) = 0;
  thunk_FUN_100b1100(DAT_102e15e0);
  for (local_3c = 0; local_3c < 0x4a; local_3c = local_3c + 1) {
    *(undefined4 *)((int)local_8 + local_3c * 4 + 0x26858) = 0;
    *(undefined4 *)((int)local_8 + local_3c * 4 + 0x26980) = 0;
    *(undefined1 *)((int)local_8 + local_3c + 0x26aa8) = 0;
  }
  if (DAT_102da424 == 0) {
    thunk_FUN_100a4190(local_8,0,(byte_conflict *)0x0);
  }
  else {
    thunk_FUN_100a3c70(local_8);
  }
  thunk_FUN_100a04f0((void *)((int)local_8 + 0x9bc),*(int *)((int)local_8 + 0x26854));
  thunk_FUN_100a4670();
  return;
}

/* 100a3c70  FUN_100a3c70  (1038 bytes)
 * undefined FUN_100a3c70(void * param_1)
 */
void __fastcall FUN_100a3c70(void *param_1)

{
  uint uVar1;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  for (local_c = 1; local_c <= *(int *)((int)param_1 + 0x26848); local_c = local_c + 1) {
    if (*(int *)(local_c * 0x28 + 0x1031e9d8) == 0) {
      *(undefined2 *)(&DAT_1031e9c8 + local_c * 0x28) = 0;
    }
    *(undefined2 *)(&DAT_1031e9ca + local_c * 0x28) = 0;
    *(undefined2 *)(local_c * 0x28 + 0x1031e9ce) = 0;
    *(undefined2 *)(&DAT_1031e9cc + local_c * 0x28) = 0;
  }
  for (local_c = 1; local_c < 0x40; local_c = local_c + 1) {
    if ((*(int *)(&DAT_1031f3e0 + local_c * 0x14) != 0) && ((&DAT_1031fa0a)[local_c * 0x1a] != '\0')
       ) {
      local_10 = 1;
      while ((local_10 <= *(int *)((int)param_1 + 0x26848) &&
             (uVar1 = FUN_100db540(&DAT_1031fa0a + local_c * 0x1a,&DAT_1031e9b8 + local_10 * 0x28),
             uVar1 != 0))) {
        local_10 = local_10 + 1;
      }
      if (local_10 <= *(int *)((int)param_1 + 0x26848)) {
        if ((*(int *)(local_10 * 0x28 + 0x1031e9d8) == 0) && (DAT_102da424 < 2)) {
          *(short *)(&DAT_1031e9c8 + local_10 * 0x28) =
               *(short *)(&DAT_1031e9c8 + local_10 * 0x28) +
               *(short *)(&DAT_1031fa02 + local_c * 0x1a);
        }
        *(short *)(&DAT_1031e9ca + local_10 * 0x28) =
             *(short *)(&DAT_1031e9ca + local_10 * 0x28) +
             *(short *)(&DAT_1031fa04 + local_c * 0x1a);
        *(short *)(&DAT_1031e9cc + local_10 * 0x28) =
             *(short *)(&DAT_1031e9cc + local_10 * 0x28) +
             *(short *)(&DAT_1031f3e4 + local_c * 0x14);
        *(ushort *)(local_10 * 0x28 + 0x1031e9ce) =
             *(short *)(local_10 * 0x28 + 0x1031e9ce) +
             (ushort)*(byte *)(local_c * 0x14 + 0x1031f3e8);
        if ((&DAT_1031f3e6)[local_c * 0x14] == '\0') {
          *(undefined2 *)(local_10 * 0x28 + 0x1031e9d0) = 0;
        }
        else {
          *(undefined2 *)(local_10 * 0x28 + 0x1031e9d0) = 1;
        }
        *(int *)(&DAT_1031e9dc + local_10 * 0x28) = (int)*(short *)(&DAT_1031fa08 + local_c * 0x1a);
      }
    }
  }
  for (local_c = 1; local_c <= *(int *)((int)param_1 + 0x26848); local_c = local_c + 1) {
    *(undefined4 *)(local_c * 0x28 + 0x1031e9d4) = 0;
    if (0 < *(short *)(&DAT_1031e9d2 + local_c * 0x28)) {
      *(short *)(&DAT_1031e9cc + local_c * 0x28) =
           *(short *)(&DAT_1031e9cc + local_c * 0x28) / *(short *)(&DAT_1031e9d2 + local_c * 0x28);
      *(short *)(local_c * 0x28 + 0x1031e9ce) =
           *(short *)(local_c * 0x28 + 0x1031e9ce) / *(short *)(&DAT_1031e9d2 + local_c * 0x28);
    }
  }
  while( true ) {
    local_14 = -99999;
    local_18 = 99999;
    local_1c = 0;
    for (local_c = 1; local_c <= *(int *)((int)param_1 + 0x26848); local_c = local_c + 1) {
      if ((((0 < *(short *)(&DAT_1031e9d2 + local_c * 0x28)) &&
           (*(int *)(local_c * 0x28 + 0x1031e9d4) == 0)) &&
          (local_14 <= *(short *)(&DAT_1031e9c8 + local_c * 0x28))) &&
         ((local_14 < *(short *)(&DAT_1031e9c8 + local_c * 0x28) ||
          (*(short *)(&DAT_1031e9ca + local_c * 0x28) < local_18)))) {
        local_1c = local_c;
        local_18 = (int)*(short *)(&DAT_1031e9ca + local_c * 0x28);
        local_14 = (int)*(short *)(&DAT_1031e9c8 + local_c * 0x28);
      }
    }
    if (local_1c == 0) break;
    *(int *)((int)param_1 + *(int *)((int)param_1 + 0x26854) * 4 + 0x26858) = local_1c;
    *(undefined4 *)((int)param_1 + *(int *)((int)param_1 + 0x26854) * 4 + 0x26980) = 1;
    *(undefined4 *)(local_1c * 0x28 + 0x1031e9d4) = 1;
    *(int *)((int)param_1 + 0x26854) = *(int *)((int)param_1 + 0x26854) + 1;
    thunk_FUN_100a4190(param_1,0,&DAT_1031e9b8 + local_1c * 0x28);
  }
  thunk_FUN_100a4190(param_1,2,(byte_conflict *)0x0);
  return;
}

/* 100a4190  FUN_100a4190  (453 bytes)
 * undefined FUN_100a4190(int param_1, byte.conflict * param_2)
 */
void __thiscall FUN_100a4190(void *this,int param_1,byte_conflict *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  bVar1 = false;
  do {
    local_10 = -99999;
    local_14 = 99999;
    local_18 = 0;
    for (local_1c = 1; local_1c < 0x40; local_1c = local_1c + 1) {
      if ((((*(char *)((int)this + local_1c + 0x26aa8) == '\0') &&
           (*(int *)(&DAT_1031f3e0 + local_1c * 0x14) != 0)) &&
          (local_10 <= *(short *)(&DAT_1031fa02 + local_1c * 0x1a))) &&
         (iVar2 = (*DAT_102e152c)(local_1c), iVar2 != 0)) {
        if (param_2 != (byte_conflict *)0x0) {
          uVar3 = FUN_100db540(&DAT_1031fa0a + local_1c * 0x1a,param_2);
          if (uVar3 != 0) goto LAB_100a41cb;
        }
        iVar2 = local_1c * 0x1a;
        if ((local_10 < *(short *)(&DAT_1031fa02 + iVar2)) ||
           (*(short *)(&DAT_1031fa04 + iVar2) < local_14)) {
          local_18 = local_1c;
          local_14 = (int)*(short *)(&DAT_1031fa04 + iVar2);
          local_10 = (int)*(short *)(&DAT_1031fa02 + iVar2);
        }
      }
LAB_100a41cb:
    }
    if (local_18 == 0) {
      if (param_2 != (byte_conflict *)0x0) {
        *(undefined4 *)((int)this + *(int *)((int)this + 0x26854) * 4 + 0x26980) = 3;
        *(int *)((int)this + 0x26854) = *(int *)((int)this + 0x26854) + 1;
      }
      return;
    }
    if ((!bVar1) && (param_1 != 0)) {
      *(int *)((int)this + *(int *)((int)this + 0x26854) * 4 + 0x26980) = param_1;
      *(int *)((int)this + 0x26854) = *(int *)((int)this + 0x26854) + 1;
      bVar1 = true;
    }
    *(int *)((int)this + *(int *)((int)this + 0x26854) * 4 + 0x26858) = local_18;
    *(undefined1 *)((int)this + local_18 + 0x26aa8) = 1;
    *(int *)((int)this + 0x26854) = *(int *)((int)this + 0x26854) + 1;
  } while( true );
}

/* 100a43d0  FUN_100a43d0  (534 bytes)
 * undefined FUN_100a43d0(void * param_1)
 */
void __fastcall FUN_100a43d0(void *param_1)

{
  uint uVar1;
  int local_58;
  int local_14;
  int local_10;
  int local_c;
  
  for (local_c = 1; local_c <= *(int *)((int)param_1 + 0x26848); local_c = local_c + 1) {
    *(undefined2 *)(&DAT_1031e9d2 + local_c * 0x28) = 0;
  }
  thunk_FUN_100b1100(DAT_102e15e0);
  *(undefined4 *)((int)param_1 + 0x26848) = 0;
  for (local_c = 1; local_c < 0x40; local_c = local_c + 1) {
    if ((*(int *)(&DAT_1031f3e0 + local_c * 0x14) != 0) && ((&DAT_1031fa0a)[local_c * 0x1a] != '\0')
       ) {
      local_10 = 1;
      while (((local_10 <= *(int *)((int)param_1 + 0x26848) &&
              ((&DAT_1031e9b8)[local_10 * 0x28] != '\0')) &&
             (uVar1 = FUN_100db540(&DAT_1031fa0a + local_c * 0x1a,&DAT_1031e9b8 + local_10 * 0x28),
             uVar1 != 0))) {
        local_10 = local_10 + 1;
      }
      if (*(int *)((int)param_1 + 0x26848) < local_10) {
        for (local_14 = 1;
            (local_14 <= *(int *)((int)param_1 + 0x26848) &&
            ((&DAT_1031e9b8)[local_14 * 0x28] != '\0')); local_14 = local_14 + 1) {
        }
        if (*(int *)((int)param_1 + 0x26848) < local_14) {
          local_58 = local_14;
        }
        else {
          local_58 = *(int *)((int)param_1 + 0x26848);
        }
        *(int *)((int)param_1 + 0x26848) = local_58;
        _strncpy(&DAT_1031e9b8 + local_14 * 0x28,&DAT_1031fa0a + local_c * 0x1a,0x10);
        *(undefined2 *)(&DAT_1031e9d2 + local_14 * 0x28) = 0;
      }
      *(short *)(&DAT_1031e9d2 + local_10 * 0x28) = *(short *)(&DAT_1031e9d2 + local_10 * 0x28) + 1;
    }
  }
  for (local_c = 1; local_c <= *(int *)((int)param_1 + 0x26848); local_c = local_c + 1) {
    if (*(short *)(&DAT_1031e9d2 + local_c * 0x28) < 1) {
      _memset(&DAT_1031e9b8 + local_c * 0x28,0,0x28);
    }
  }
  thunk_FUN_100a3b30(param_1);
  return;
}

/* 100a4670  FUN_100a4670  (3274 bytes)
 * undefined FUN_100a4670(void)
 */
void FUN_100a4670(void)

{
  char cVar1;
  int *piVar2;
  undefined *puVar3;
  undefined4 uVar4;
  byte_conflict *pbVar5;
  int iVar6;
  longlong lVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  uint *local_1a0;
  uint local_154 [32];
  undefined *local_d4;
  undefined *local_d0;
  undefined1 local_cc [128];
  undefined4 local_4c;
  int *local_48;
  int local_44;
  undefined1 local_3d;
  int local_3c;
  int *local_38;
  int local_34;
  char local_2d;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  void *local_c;
  int *local_8;
  
  local_c = (void *)thunk_FUN_1009ace0((int)DAT_102e15e0);
  local_10 = thunk_FUN_100a28e0(local_c,(byte_conflict *)"Scoreboard Text");
  local_14 = thunk_FUN_100a28e0(local_c,(byte_conflict *)"Scoreboard Title Text");
  local_18 = thunk_FUN_100a28e0(local_c,"Scoreboard Small Text");
  local_1c = thunk_FUN_100a29a0(local_c,local_10);
  local_20 = thunk_FUN_100a29a0(local_c,local_14);
  local_24 = thunk_FUN_100a29a0(local_c,local_18);
  piVar2 = (int *)(**(code **)(*local_8 + 0x14c))(&local_28,&local_2c);
  (**(code **)(*piVar2 + 0x34))();
  (**(code **)local_8[0x2f])(local_28,local_2c,local_8);
  puVar3 = thunk_FUN_100361a0();
  cVar1 = thunk_FUN_10038710((int)puVar3);
  if (cVar1 == '\0') {
    local_8[0x26e] = -1;
  }
  local_2d = '\0';
  for (local_34 = 0; local_34 < 0x4a; local_34 = local_34 + 1) {
    local_38 = local_8 + local_34 * 0x39 + 0x349;
    thunk_FUN_1009f3c0(local_38,0,'\0',0,0,0,0,0);
    if (local_34 < local_8[0x9a15]) {
      local_3d = local_2d != '\0';
      if ((bool)local_3d) {
        local_2d = '\0';
      }
      for (local_44 = 0; local_44 < 8; local_44 = local_44 + 1) {
        local_48 = local_8 + local_44 * 0x10c4 + local_34 * 0x3a + 0x13c3;
        (**(code **)(*local_48 + 0x24))(1);
        thunk_FUN_100a6870(local_48,"");
        (**(code **)(*local_48 + 0x1fc))(0);
        (**(code **)(*local_48 + 0x208))(local_1c);
        thunk_FUN_100a6b20(local_48,0,0);
        local_4c = 0xd;
        if (DAT_102e1238 < 0x1e1) {
          local_4c = 0xf;
        }
        else {
          lVar7 = __ftol();
          local_4c = (undefined4)lVar7;
        }
        uVar4 = (**(code **)(*local_48 + 0x18))(local_4c);
        (**(code **)(*local_48 + 8))(uVar4);
        (**(code **)(*local_48 + 300))(0,0,0,0xff);
        local_d0 = (undefined *)0x0;
        local_d4 = (undefined *)0x0;
        if (local_8[local_34 + 0x9a60] == 3) {
          (**(code **)(*local_48 + 0x22c))(&DAT_10270908);
        }
        else {
          if (local_8[local_34 + 0x9a60] == 1) {
            iVar6 = local_8[local_34 + 0x9a16] * 0x28;
            local_d4 = &DAT_1031e9b8 + iVar6;
            (**(code **)(*local_48 + 0x120))
                      (*(undefined4 *)
                        (&DAT_1028aeec + (*(int *)(&DAT_1031e9dc + iVar6) % DAT_1028aee8) * 0xc),
                       *(undefined4 *)
                        (&DAT_1028aef0 + (*(int *)(&DAT_1031e9dc + iVar6) % DAT_1028aee8) * 0xc),
                       *(undefined4 *)
                        (&DAT_1028aef4 + (*(int *)(&DAT_1031e9dc + iVar6) % DAT_1028aee8) * 0xc),0);
            local_4c = 0x14;
            if (0x1df < DAT_102e1238) {
              lVar7 = __ftol();
              local_4c = (undefined4)lVar7;
            }
            uVar4 = (**(code **)(*local_48 + 0x18))(local_4c);
            (**(code **)(*local_48 + 8))(uVar4);
            (**(code **)(*local_48 + 0x208))(local_20);
            uVar11 = 0;
            uVar10 = (undefined2)
                     *(undefined4 *)
                      (&DAT_1028aef4 + (*(int *)(local_d4 + 0x24) % DAT_1028aee8) * 0xc);
            uVar9 = (undefined2)
                    *(undefined4 *)
                     (&DAT_1028aef0 + (*(int *)(local_d4 + 0x24) % DAT_1028aee8) * 0xc);
            uVar8 = (undefined2)
                    *(undefined4 *)
                     (&DAT_1028aeec + (*(int *)(local_d4 + 0x24) % DAT_1028aee8) * 0xc);
            lVar7 = __ftol();
            thunk_FUN_1009f3c0(local_38,0,'\x01',(int)lVar7,uVar8,uVar9,uVar10,uVar11);
          }
          else if (local_8[local_34 + 0x9a60] == 2) {
            (**(code **)(*local_48 + 0x120))(100,100,100,0);
            local_4c = 0x14;
            if (0x1df < DAT_102e1238) {
              lVar7 = __ftol();
              local_4c = (undefined4)lVar7;
            }
            uVar4 = (**(code **)(*local_48 + 0x18))(local_4c);
            (**(code **)(*local_48 + 8))(uVar4);
            (**(code **)(*local_48 + 0x208))(local_20);
            uVar11 = 0;
            uVar8 = 100;
            uVar9 = 100;
            uVar10 = 100;
            lVar7 = __ftol();
            thunk_FUN_1009f3c0(local_38,0,'\x01',(int)lVar7,uVar10,uVar9,uVar8,uVar11);
          }
          else {
            (**(code **)(*local_48 + 0x120))
                      (*(undefined4 *)
                        (&DAT_1028aeec +
                        ((int)*(short *)(&DAT_1031fa08 + local_8[local_34 + 0x9a16] * 0x1a) %
                        DAT_1028aee8) * 0xc),
                       *(undefined4 *)
                        (&DAT_1028aef0 +
                        ((int)*(short *)(&DAT_1031fa08 + local_8[local_34 + 0x9a16] * 0x1a) %
                        DAT_1028aee8) * 0xc),
                       *(undefined4 *)
                        (&DAT_1028aef4 +
                        ((int)*(short *)(&DAT_1031fa08 + local_8[local_34 + 0x9a16] * 0x1a) %
                        DAT_1028aee8) * 0xc),0);
            local_d0 = &DAT_1031f3e0 + local_8[local_34 + 0x9a16] * 0x14;
            if ((&DAT_1031f3e6)[local_8[local_34 + 0x9a16] * 0x14] == '\0') {
              if (((local_8[local_34 + 0x9a16] == local_8[0x9aba]) && (local_8[0x9abb] != 0)) &&
                 (DAT_102da3ec < (float)local_8[0x9abb])) {
                lVar7 = __ftol();
                (**(code **)(*local_48 + 300))(0xff,0,0,(int)lVar7);
              }
            }
            else {
              (**(code **)(*local_48 + 0x124))(2);
              (**(code **)(*local_48 + 300))
                        (*(undefined4 *)
                          (&DAT_1028aeec +
                          ((int)*(short *)(&DAT_1031fa08 + local_8[local_34 + 0x9a16] * 0x1a) %
                          DAT_1028aee8) * 0xc),
                         *(undefined4 *)
                          (&DAT_1028aef0 +
                          ((int)*(short *)(&DAT_1031fa08 + local_8[local_34 + 0x9a16] * 0x1a) %
                          DAT_1028aee8) * 0xc),
                         *(undefined4 *)
                          (&DAT_1028aef4 +
                          ((int)*(short *)(&DAT_1031fa08 + local_8[local_34 + 0x9a16] * 0x1a) %
                          DAT_1028aee8) * 0xc),0xc4);
            }
          }
          if ((local_44 == 1) || (local_44 == 2)) {
            (**(code **)(*local_48 + 0x21c))(3);
          }
          else if (local_44 == 0) {
            (**(code **)(*local_48 + 0x21c))(4);
          }
          else {
            (**(code **)(*local_48 + 0x21c))(5);
          }
          FUN_100bba20((uint *)local_cc,(uint *)"");
          if (local_8[local_34 + 0x9a60] == 0) {
            switch(local_44) {
            case 1:
              FUN_100bb6e0(local_cc,"%s  ");
              break;
            case 2:
              switch((&DAT_1031fa00)[local_8[local_34 + 0x9a16] * 0x1a]) {
              case 1:
                FUN_100bba20((uint *)local_cc,(uint *)&DAT_102754a4);
                break;
              case 2:
                FUN_100bba20((uint *)local_cc,(uint *)"KILLER");
                (**(code **)(*local_48 + 0x120))(0x7d,0xff,0x7d,5);
                break;
              case 3:
                FUN_100bba20((uint *)local_cc,(uint *)"DEMOLITION");
                (**(code **)(*local_48 + 0x120))(0x87,0xff,0x87,5);
                break;
              case 4:
                FUN_100bba20((uint *)local_cc,(uint *)"SPECIALIST");
                (**(code **)(*local_48 + 0x120))(0x91,0xff,0x91,5);
                break;
              case 5:
                FUN_100bba20((uint *)local_cc,(uint *)"UNSTOPPABLE");
                (**(code **)(*local_48 + 0x120))(0x9b,0xff,0x9b,5);
                break;
              default:
                if ((&DAT_1031fa01)[local_8[local_34 + 0x9a16] * 0x1a] == '\0') {
                  local_1a0 = (uint *)0x10267428;
                }
                else {
                  local_1a0 = (uint *)0x102754ac;
                }
                FUN_100bba20((uint *)local_cc,local_1a0);
                break;
              case 10:
                FUN_100bba20((uint *)local_cc,(uint *)"THE ONE");
                (**(code **)(*local_48 + 0x120))(0xaf,0xff,0xaf,5);
                break;
              case 0xb:
                FUN_100bba20((uint *)local_cc,(uint *)"WAITING");
              }
              break;
            case 3:
              FUN_100bb6e0(local_cc,"%d");
              break;
            case 4:
              FUN_100bb6e0(local_cc,"%d");
              break;
            case 5:
              FUN_100bb6e0(local_cc,"%d");
              break;
            case 6:
              local_cc[0] = 0;
              if ((local_d0[6] == '\0') || (iVar6 = (*DAT_102e15b8)(), iVar6 != 0)) {
                iVar6 = local_8[local_34 + 0x9a16];
                piVar2 = local_48;
                puVar3 = thunk_FUN_100361a0();
                thunk_FUN_100381d0(puVar3,piVar2,iVar6);
              }
            }
          }
          else {
            switch(local_44) {
            case 1:
              if (local_8[local_34 + 0x9a60] == 2) {
                pbVar5 = thunk_FUN_10068750("#Spectators");
                FUN_100bb6e0((undefined1 *)local_154,pbVar5);
              }
              else {
                pbVar5 = (byte_conflict *)thunk_FUN_100a60e0(DAT_102e15e0,*(int *)(local_d4 + 0x24))
                ;
                FUN_100bb6e0((undefined1 *)local_154,pbVar5);
              }
              FUN_100bba20((uint *)local_cc,local_154);
              if (local_8[local_34 + 0x9a60] == 1) {
                if (*(short *)(local_d4 + 0x1a) == 1) {
                  thunk_FUN_10068750("#Player");
                  FUN_100bb6e0((undefined1 *)local_154,(byte_conflict *)"(%d %s)");
                }
                else {
                  thunk_FUN_10068750("#Player_plural");
                  FUN_100bb6e0((undefined1 *)local_154,(byte_conflict *)"(%d %s)");
                }
                thunk_FUN_100a6870(local_48,local_154);
                thunk_FUN_100a6ad0(local_48,local_24);
              }
              break;
            case 3:
              if (local_8[local_34 + 0x9a60] == 1) {
                FUN_100bb6e0(local_cc,"%d");
              }
              break;
            case 4:
              if (local_8[local_34 + 0x9a60] == 1) {
                FUN_100bb6e0(local_cc,"%d");
              }
              break;
            case 5:
              if (local_8[local_34 + 0x9a60] == 1) {
                FUN_100bb6e0(local_cc,"%d");
              }
            }
          }
          (**(code **)(*local_48 + 0x22c))(local_cc);
        }
      }
    }
    else {
      for (local_3c = 0; local_3c < 8; local_3c = local_3c + 1) {
        (**(code **)(local_8[local_3c * 0x10c4 + local_34 * 0x3a + 0x13c3] + 0x24))(0);
      }
    }
  }
  for (local_34 = 0; local_34 < 0x4a; local_34 = local_34 + 1) {
    piVar2 = local_8 + local_34 * 0x39 + 0x349;
    thunk_FUN_1009eeb0(piVar2);
    iVar6 = thunk_FUN_1009f1d0((int)piVar2);
    uVar4 = thunk_FUN_100a6c10(piVar2);
    (**(code **)(*piVar2 + 8))(uVar4,iVar6);
    thunk_FUN_1009f0c0(piVar2);
  }
  (**(code **)(local_8[0x26f] + 0xc))(&local_28,&local_2c);
  (**(code **)(local_8[0x26f] + 8))(local_28,local_2c);
  return;
}

/* 100a56e0  FUN_100a56e0  (137 bytes)
 * undefined FUN_100a56e0(int param_1, int param_2)
 */
void __thiscall FUN_100a56e0(void *this,int param_1,int param_2)

{
  longlong lVar1;
  undefined4 local_4c;
  
  if ((param_2 == *(int *)((int)this + 0x2684c)) || (param_1 == 0)) {
    if (param_1 == 0) {
      local_4c = *(int *)((int)this + 0x2684c);
    }
    else {
      local_4c = param_1;
    }
    *(int *)((int)this + 0x26ae8) = local_4c;
    lVar1 = __ftol();
    *(int *)((int)this + 0x26aec) = (int)lVar1;
    if (param_1 == *(int *)((int)this + 0x2684c)) {
      *(undefined4 *)((int)this + 0x26ae8) = *(undefined4 *)((int)this + 0x2684c);
    }
  }
  return;
}

/* 100a5790  FUN_100a5790  (63 bytes)
 * undefined FUN_100a5790(int * param_1)
 */
void __fastcall FUN_100a5790(int *param_1)

{
  thunk_FUN_100a43d0(param_1);
  (**(code **)(*param_1 + 0x24))(1);
  (**(code **)(param_1[0x99e3] + 0x24))(1);
  return;
}

/* 100a57e0  FUN_100a57e0  (505 bytes)
 * undefined FUN_100a57e0(void)
 * called by: thunk_FUN_100a57e0
 */
void FUN_100a57e0(void)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  byte_conflict *pbVar4;
  size_t sVar5;
  int iVar6;
  char *pcVar7;
  undefined1 local_d10 [1024];
  undefined1 local_910 [1024];
  undefined1 local_510 [1024];
  char local_110 [256];
  int *local_10;
  int local_c;
  int local_8;
  
  if (DAT_102e144c == 0) {
    puVar3 = thunk_FUN_100361a0();
    cVar1 = thunk_FUN_10038710((int)puVar3);
    if (cVar1 == '\0') {
      puVar3 = thunk_FUN_100361a0();
      thunk_FUN_10038660((int)puVar3);
      (**(code **)(*(int *)(local_8 + 0x266d0) + 0x24))(0);
    }
    else if ((((-1 < *(int *)(local_8 + 0x8fc)) &&
              (iVar6 = *(int *)(local_8 + 0x2679c + *(int *)(local_8 + 0x8fc) * 4), 0 < iVar6)) &&
             (local_10 = (int *)(&DAT_1031f3e0 + iVar6 * 0x14), local_10 != (int *)0x0)) &&
            ((*local_10 != 0 && (*(char *)*local_10 != '\0')))) {
      local_c = iVar6;
      thunk_FUN_100361a0();
      bVar2 = thunk_FUN_10038f30(iVar6);
      if (bVar2) {
        iVar6 = local_c;
        thunk_FUN_100361a0();
        thunk_FUN_10039080(iVar6);
        pbVar4 = thunk_FUN_10068750("#Unmuted");
        FUN_100bb6e0(local_510,pbVar4);
        FUN_100bb6e0(local_110,(byte_conflict *)"%c** %s\n");
        pcVar7 = local_110;
        sVar5 = _strlen(local_110);
        thunk_FUN_100688f0(0,sVar5 + 1,pcVar7);
      }
      else {
        iVar6 = local_c;
        thunk_FUN_100361a0();
        thunk_FUN_10039080(iVar6);
        pbVar4 = thunk_FUN_10068750("#Muted");
        FUN_100bb6e0(local_910,pbVar4);
        pbVar4 = thunk_FUN_10068750("#No_longer_hear_that_player");
        FUN_100bb6e0(local_d10,pbVar4);
        FUN_100bb6e0(local_110,(byte_conflict *)"%c** %s %s\n");
        pcVar7 = local_110;
        sVar5 = _strlen(local_110);
        thunk_FUN_100688f0(0,sVar5 + 1,pcVar7);
      }
    }
  }
  return;
}

/* 100a5a60  FUN_100a5a60  (141 bytes)
 * undefined FUN_100a5a60(undefined4 param_1, undefined4 param_2)
 * called by: thunk_FUN_100a5a60
 */
void FUN_100a5a60(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined *puVar2;
  uint uVar3;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puVar2 = thunk_FUN_100361a0();
  cVar1 = thunk_FUN_10038710((int)puVar2);
  if (cVar1 != '\0') {
    for (local_c = 0; local_c < 0x4a; local_c = local_c + 1) {
      uVar3 = thunk_FUN_1009f720((void *)(local_8 + 0xc68 + local_c * 0xe4),param_1,param_2,
                                 &local_10,&local_14);
      if ((uVar3 & 0xff) != 0) {
        thunk_FUN_100a5b10((void *)(local_8 + -0xbc),local_c,local_14);
        return;
      }
    }
  }
  return;
}

/* 100a5b10  FUN_100a5b10  (258 bytes)
 * undefined FUN_100a5b10(int param_1, int param_2)
 */
void __thiscall FUN_100a5b10(void *this,int param_1,int param_2)

{
  bool bVar1;
  undefined *this_00;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)this + param_1 * 0xe8 + param_2 * 0x4310 + 0x4f0c;
  if (*(int *)((int)this + 0x9b4) != iVar2) {
    *(undefined4 *)((int)this + 0x9b4) = 0;
    *(undefined4 *)((int)this + 0x9b8) = 0xffffffff;
  }
  if ((iVar2 != 0) && (*(int *)((int)this + param_1 * 4 + 0x26980) == 0)) {
    iVar3 = *(int *)((int)this + param_1 * 4 + 0x26858) * 0x14;
    if (((*(int *)(&DAT_1031f3e0 + iVar3) != 0) && (**(char **)(&DAT_1031f3e0 + iVar3) != '\0')) &&
       (((&DAT_1031f3e6)[iVar3] == '\0' || (iVar3 = (*DAT_102e15b8)(), iVar3 != 0)))) {
      iVar3 = *(int *)((int)this + param_1 * 4 + 0x26858);
      this_00 = thunk_FUN_100361a0();
      bVar1 = thunk_FUN_10038f80(this_00,iVar3);
      if (bVar1) {
        *(int *)((int)this + 0x9b4) = iVar2;
        *(int *)((int)this + 0x9b8) = param_1;
      }
    }
  }
  return;
}

/* 100a5c60  FUN_100a5c60  (134 bytes)
 * undefined FUN_100a5c60(void)
 * called by: thunk_FUN_100a5c60
 */
void FUN_100a5c60(void)

{
  int iVar1;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  Color *pCStack_68;
  Color local_14 [12];
  Panel *local_8;
  
  pCStack_68 = (Color *)0x100a5c74;
  vgui::Color::Color(local_14);
  pCStack_68 = local_14;
  uStack_6c = 0x100a5c86;
  (**(code **)(*(int *)local_8 + 0x13c))();
  uStack_6c = 0x100a5c91;
  iVar1 = thunk_FUN_100a6110(DAT_102e15e0);
  if (*(int *)(iVar1 + 0x9b8) == *(int *)(local_8 + 0xd4)) {
    uStack_6c = 0;
    uStack_70 = 0x13;
    uStack_74 = 0x5b;
    (**(code **)(*(int *)local_8 + 300))(0x86);
  }
  uStack_6c = 0x100a5cc3;
  vgui::Panel::paintBackground(local_8);
  vgui::Color::Color((Color *)&uStack_74,local_14);
  (**(code **)(*(int *)local_8 + 0x128))();
  return;
}

/* 100a5d10  FUN_100a5d10  (474 bytes)
 * undefined FUN_100a5d10(void)
 * called by: thunk_FUN_100a5d10
 */
void FUN_100a5d10(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 local_2c;
  undefined1 local_28 [4];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14 [3];
  int *local_8;
  
  vgui::Color::Color((Color *)local_14);
  (**(code **)(*local_8 + 0x134))(local_14);
  iVar1 = thunk_FUN_100a6110(DAT_102e15e0);
  if (*(int *)(iVar1 + 0x9b8) == local_8[0x35]) {
    (**(code **)(*local_8 + 0x120))(0xff,0xff,0xff,0);
  }
  (**(code **)(*local_8 + 0x210))(&local_20,&local_24);
  thunk_FUN_100a5f60(local_8,local_20,local_24,&local_18,&local_1c);
  (*(code *)**(undefined4 **)local_8[0x34])(local_18,local_1c);
  puVar3 = &local_2c;
  puVar5 = local_28;
  piVar2 = (int *)thunk_FUN_100a6140((void *)local_8[0x34],1);
  (**(code **)(*piVar2 + 4))(puVar5,puVar3);
  iVar1 = local_8[0x36];
  puVar3 = (undefined4 *)thunk_FUN_100a6140((void *)local_8[0x34],1);
  (**(code **)*puVar3)(iVar1,local_2c);
  (**(code **)(*(int *)local_8[0x34] + 0x5c))(local_8);
  if (local_8[0x33] != 0) {
    (**(code **)(*(int *)local_8[0x33] + 8))(&local_20,&local_24);
    thunk_FUN_100a5f60(local_8,local_20,local_24,&local_18,&local_1c);
    (*(code *)**(undefined4 **)local_8[0x33])(local_18,local_1c);
    (**(code **)(*(int *)local_8[0x33] + 0x5c))(local_8);
  }
  uVar4 = (**(code **)(local_14[0] + 0x14))(3);
  uVar4 = (**(code **)(local_14[0] + 0x14))(2,uVar4);
  uVar4 = (**(code **)(local_14[0] + 0x14))(1,uVar4);
  uVar4 = (**(code **)(local_14[0] + 0x14))(0,uVar4);
  (**(code **)(*local_8 + 0x120))(uVar4);
  return;
}

/* 100a5f60  FUN_100a5f60  (265 bytes)
 * undefined FUN_100a5f60(int param_1, int param_2, int * param_3, int * param_4)
 */
void __thiscall FUN_100a5f60(void *this,int param_1,int param_2,int *param_3,int *param_4)

{
  int local_10;
  int local_c;
  void *local_8;
  
  local_8 = this;
  (**(code **)(*(int *)this + 0xc))(&local_c,&local_10);
  *param_3 = 0;
  *param_4 = 0;
  switch(*(undefined4 *)((int)local_8 + 0xc4)) {
  case 0:
  case 3:
  case 6:
    *param_3 = 0;
    break;
  case 1:
  case 4:
  case 7:
    *param_3 = (local_c - param_1) / 2;
    break;
  case 2:
  case 5:
  case 8:
    *param_3 = local_c - param_1;
  }
  switch(*(undefined4 *)((int)local_8 + 0xc4)) {
  case 0:
  case 1:
  case 2:
    *param_4 = 0;
    break;
  case 3:
  case 4:
  case 5:
    *param_4 = (local_10 - param_2) / 2;
    break;
  case 6:
  case 7:
  case 8:
    *param_4 = local_10 - param_2;
  }
  if (*param_3 < 0) {
    *param_3 = 0;
  }
  *param_3 = *param_3 + *(int *)((int)local_8 + 0xdc);
  *param_4 = *param_4 + *(int *)((int)local_8 + 0xe0);
  return;
}

/* 100a60e0  FUN_100a60e0  (37 bytes)
 * int FUN_100a60e0(int param_1)
 */
int __thiscall FUN_100a60e0(void *this,int param_1)

{
  return (int)this + param_1 * 0x40 + 0x8bc;
}

/* 100a6110  FUN_100a6110  (28 bytes)
 * undefined4 FUN_100a6110(int param_1)
 */
undefined4 __fastcall FUN_100a6110(int param_1)

{
  return *(undefined4 *)(param_1 + 0xaa8);
}

/* 100a6140  FUN_100a6140  (31 bytes)
 * undefined4 FUN_100a6140(int param_1)
 */
undefined4 __thiscall FUN_100a6140(void *this,int param_1)

{
  return *(undefined4 *)((int)this + param_1 * 4 + 0x24);
}

/* 100a6170  FUN_100a6170  (236 bytes)
 * Label * FUN_100a6170(Label * param_1)
 * called by: thunk_FUN_100a6170
 */
Label * __fastcall FUN_100a6170(Label *param_1)

{
  Image *pIVar1;
  Color aCStack_7c [4];
  undefined4 uStack_78;
  Image *local_64;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e5efb;
  local_10 = ExceptionList;
  uStack_78 = 0x100a619e;
  ExceptionList = &local_10;
  vgui::Label::Label(param_1,"");
  *(undefined ***)param_1 = &PTR_setPos_1027556c;
  uStack_78 = 0x100a61ae;
  pIVar1 = operator_new(0x2c);
  local_8 = 0;
  if (pIVar1 == (Image *)0x0) {
    local_64 = (Image *)0x0;
  }
  else {
    local_64 = thunk_FUN_100a62a0(pIVar1);
  }
  local_8 = 0xffffffff;
  *(Image **)(param_1 + 0xd0) = local_64;
  vgui::Color::Color(aCStack_7c,0xff,0xaa,0,0);
  thunk_FUN_100a65b0(*(int *)(param_1 + 0xd0));
  *(undefined4 *)(param_1 + 0xd4) = 0xfffffffe;
  param_1[0xe4] = (Label)0x1;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  ExceptionList = local_10;
  return param_1;
}

/* 100a62a0  FUN_100a62a0  (216 bytes)
 * Image * FUN_100a62a0(Image * param_1)
 */
Image * __fastcall FUN_100a62a0(Image *param_1)

{
  TextImage *pTVar1;
  undefined4 local_68;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e5f26;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  vgui::Image::Image(param_1);
  *(undefined ***)param_1 = &PTR_thunk_FUN_100a64b0_10275814;
  pTVar1 = operator_new(0x48);
  local_8 = 0;
  if (pTVar1 == (TextImage *)0x0) {
    local_68 = 0;
  }
  else {
    local_68 = vgui::TextImage::TextImage(pTVar1,"");
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = local_68;
  pTVar1 = operator_new(0x48);
  local_8 = 1;
  if (pTVar1 == (TextImage *)0x0) {
    local_68 = 0;
  }
  else {
    local_68 = vgui::TextImage::TextImage(pTVar1,"");
  }
  *(undefined4 *)(param_1 + 0x28) = local_68;
  ExceptionList = local_10;
  return param_1;
}

/* 100a63b0  FUN_100a63b0  (135 bytes)
 * undefined FUN_100a63b0(int * param_1, int * param_2)
 * called by: thunk_FUN_100a63b0
 */
void __thiscall FUN_100a63b0(void *this,int *param_1,int *param_2)

{
  int local_5c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_8 = this;
  (**(code **)(**(int **)((int)this + 0x24) + 100))(&local_c,&local_14);
  (**(code **)(*(int *)local_8[10] + 100))(&local_10,&local_18);
  *param_1 = local_c + local_10;
  if (local_18 < local_14) {
    local_5c = local_14;
  }
  else {
    local_5c = local_18;
  }
  *param_2 = local_5c;
  (**(code **)(*local_8 + 0x14))(*param_1,*param_2);
  return;
}

/* 100a6460  FUN_100a6460  (63 bytes)
 * undefined FUN_100a6460(undefined4 param_1)
 * called by: thunk_FUN_100a6460
 */
void __thiscall FUN_100a6460(void *this,undefined4 param_1)

{
  (**(code **)(**(int **)((int)this + 0x24) + 0x5c))(param_1);
  (**(code **)(**(int **)((int)this + 0x28) + 0x5c))(param_1);
  return;
}

/* 100a64b0  FUN_100a64b0  (141 bytes)
 * undefined FUN_100a64b0(int param_1, undefined4 param_2)
 * called by: thunk_FUN_100a64b0
 */
void __thiscall FUN_100a64b0(void *this,int param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 local_18 [4];
  int local_14;
  undefined1 local_10 [4];
  undefined1 local_c [4];
  void *local_8;
  
  local_8 = this;
  (**(code **)**(undefined4 **)((int)this + 0x24))(param_1,param_2);
  (**(code **)(**(int **)((int)local_8 + 0x24) + 8))(local_c,local_10);
  (**(code **)(**(int **)((int)local_8 + 0x28) + 8))(&local_14,local_18);
  lVar1 = __ftol();
  (**(code **)**(undefined4 **)((int)local_8 + 0x28))(param_1 + local_14,(int)lVar1);
  return;
}

/* 100a6560  FUN_100a6560  (52 bytes)
 * undefined FUN_100a6560(int param_1)
 * called by: thunk_FUN_100a6560
 */
void __fastcall FUN_100a6560(int param_1)

{
  Color aCStack_64 [12];
  
  vgui::Color::Color(aCStack_64,(Color *)&stack0x00000004);
  (**(code **)(**(int **)(param_1 + 0x24) + 0xc))();
  return;
}

/* 100a65b0  FUN_100a65b0  (52 bytes)
 * undefined FUN_100a65b0(int param_1)
 */
void __fastcall FUN_100a65b0(int param_1)

{
  Color aCStack_64 [12];
  
  vgui::Color::Color(aCStack_64,(Color *)&stack0x00000004);
  (**(code **)(**(int **)(param_1 + 0x28) + 0xc))();
  return;
}

/* 100a6600  FUN_100a6600  (74 bytes)
 * undefined FUN_100a6600(undefined4 * param_1)
 * called by: thunk_FUN_100a6600
 */
void __fastcall FUN_100a6600(undefined4 *param_1)

{
  *param_1 = &PTR_setPos_1027556c;
  if ((void *)param_1[0x34] != (void *)0x0) {
    thunk_FUN_100a6b60((void *)param_1[0x34],1);
  }
  return;
}

/* 100a6660  FUN_100a6660  (33 bytes)
 * undefined FUN_100a6660(undefined4 param_1)
 */
void __thiscall FUN_100a6660(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0xd4) = param_1;
  return;
}

/* 100a6690  FUN_100a6690  (228 bytes)
 * undefined FUN_100a6690(undefined4 param_1, char * param_2)
 */
void __thiscall FUN_100a6690(void *this,undefined4 param_1,char *param_2)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  int local_1c;
  int local_18;
  int local_14;
  char *local_10;
  int *local_c;
  void *local_8;
  
  pcVar3 = param_2;
  local_8 = this;
  piVar1 = (int *)thunk_FUN_100a6140(*(void **)((int)this + 0xd0),0);
  (**(code **)(*piVar1 + 0x70))(pcVar3);
  piVar1 = (int *)thunk_FUN_100a6140(*(void **)((int)local_8 + 0xd0),0);
  local_c = (int *)(**(code **)(*piVar1 + 0x6c))();
  *(undefined4 *)((int)local_8 + 0xd8) = 0;
  for (local_10 = param_2; *local_10 != '\0'; local_10 = local_10 + 1) {
    (**(code **)(*local_c + 8))((int)*local_10,&local_14,&local_18,&local_1c);
    *(int *)((int)local_8 + 0xd8) = local_14 + local_18 + local_1c + *(int *)((int)local_8 + 0xd8);
  }
  lVar2 = __ftol();
  *(int *)((int)local_8 + 0xd8) = (int)lVar2;
  return;
}

/* 100a67b0  FUN_100a67b0  (148 bytes)
 * undefined FUN_100a67b0(uint * param_1)
 * called by: thunk_FUN_100a67b0
 */
void FUN_100a67b0(uint *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 local_20c;
  uint local_208 [128];
  void *local_8;
  
  FUN_100bba20(local_208,param_1);
  local_20c = _strlen((char *)local_208);
  while (local_20c != 0) {
    iVar1 = local_20c - 1;
    local_20c = local_20c - 1;
    uVar2 = FUN_100c0fe0((int)*(char *)((int)local_208 + iVar1));
    if (uVar2 == 0) break;
    *(undefined1 *)((int)local_208 + local_20c) = 0;
  }
  thunk_FUN_100a6690(local_8,0,(char *)local_208);
  return;
}

/* 100a6870  FUN_100a6870  (55 bytes)
 * undefined FUN_100a6870(undefined4 param_1)
 */
void __thiscall FUN_100a6870(void *this,undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)thunk_FUN_100a6140(*(void **)((int)this + 0xd0),1);
  (**(code **)(*piVar1 + 0x70))(param_1);
  return;
}

/* 100a68c0  FUN_100a68c0  (52 bytes)
 * undefined FUN_100a68c0(undefined4 param_1, undefined4 param_2)
 * called by: thunk_FUN_100a68c0
 */
void __thiscall FUN_100a68c0(void *this,undefined4 param_1,undefined4 param_2)

{
  (**(code **)(**(int **)((int)this + 0xd0) + 8))(param_1,param_2);
  return;
}

/* 100a6910  FUN_100a6910  (209 bytes)
 * undefined FUN_100a6910(int param_1, int param_2, int param_3, int param_4)
 * called by: thunk_FUN_100a6910
 */
void __thiscall FUN_100a6910(void *this,int param_1,int param_2,int param_3,int param_4)

{
  Color aCStack_84 [4];
  undefined4 uStack_80;
  Color local_14 [12];
  int *local_8;
  
  uStack_80 = 0x100a6934;
  local_8 = this;
  vgui::Label::setFgColor(this,param_1,param_2,param_3,param_4);
  uStack_80 = 0x100a694c;
  vgui::Color::Color(local_14,param_1,param_2,param_3,param_4);
  uStack_80 = 0x100a695a;
  vgui::Color::Color((Color *)&stack0xffffff88,local_14);
  (**(code **)(*(int *)local_8[0x34] + 0xc))();
  vgui::Color::Color(aCStack_84,local_14);
  thunk_FUN_100a65b0(local_8[0x34]);
  if ((local_8[0x33] != 0) && ((char)local_8[0x39] != '\0')) {
    vgui::Color::Color(aCStack_84,local_14);
    (**(code **)(*(int *)local_8[0x33] + 0xc))();
  }
  (**(code **)(*local_8 + 0x30))();
  return;
}

/* 100a6a20  FUN_100a6a20  (70 bytes)
 * undefined FUN_100a6a20(SchemeColor param_1)
 * called by: thunk_FUN_100a6a20
 */
void __thiscall FUN_100a6a20(void *this,SchemeColor param_1)

{
  Color aCStack_64 [4];
  undefined4 uStack_60;
  
  uStack_60 = 0x100a6a38;
  vgui::Label::setFgColor(this,param_1);
  vgui::Color::Color(aCStack_64,param_1);
  (**(code **)(**(int **)((int)this + 0xd0) + 0xc))();
  return;
}

/* 100a6a80  FUN_100a6a80  (55 bytes)
 * undefined FUN_100a6a80(undefined4 param_1)
 * called by: thunk_FUN_100a6a80
 */
void __thiscall FUN_100a6a80(void *this,undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)thunk_FUN_100a6140(*(void **)((int)this + 0xd0),0);
  (**(code **)(*piVar1 + 0x78))(param_1);
  return;
}

/* 100a6ad0  FUN_100a6ad0  (55 bytes)
 * undefined FUN_100a6ad0(undefined4 param_1)
 */
void __thiscall FUN_100a6ad0(void *this,undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)thunk_FUN_100a6140(*(void **)((int)this + 0xd0),1);
  (**(code **)(*piVar1 + 0x78))(param_1);
  return;
}

/* 100a6b20  FUN_100a6b20  (45 bytes)
 * undefined FUN_100a6b20(undefined4 param_1, undefined4 param_2)
 */
void __thiscall FUN_100a6b20(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0xdc) = param_1;
  *(undefined4 *)((int)this + 0xe0) = param_2;
  return;
}

/* 100a6b60  FUN_100a6b60  (54 bytes)
 * undefined4 * FUN_100a6b60(uint param_1)
 */
undefined4 * __thiscall FUN_100a6b60(void *this,uint param_1)

{
  thunk_FUN_100a6bb0(this);
  if ((param_1 & 1) != 0) {
    FUN_100bbb10(this);
  }
  return this;
}

/* 100a6bb0  FUN_100a6bb0  (70 bytes)
 * undefined FUN_100a6bb0(undefined4 * param_1)
 */
void __fastcall FUN_100a6bb0(undefined4 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100a64b0_10275814;
  FUN_100bbb10((void *)param_1[9]);
  FUN_100bbb10((void *)param_1[10]);
  return;
}

/* 100a6c10  FUN_100a6c10  (46 bytes)
 * undefined4 FUN_100a6c10(int * param_1)
 */
undefined4 __cdecl FUN_100a6c10(int *param_1)

{
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  (**(code **)(*param_1 + 0x14))(local_8,local_c,&local_10,local_14);
  return local_10;
}

/* 100a6c50  FUN_100a6c50  (2682 bytes)
 * Panel * FUN_100a6c50(int param_1, int param_2, int param_3, int param_4)
 */
Panel * __thiscall FUN_100a6c50(void *this,int param_1,int param_2,int param_3,int param_4)

{
  HeaderPanel *this_00;
  void *pvVar1;
  int iVar2;
  Button *pBVar3;
  longlong lVar4;
  int iVar5;
  Label *local_100;
  Label *local_2c [4];
  Label *local_1c;
  int local_18;
  Panel *local_14;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e6005;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = this;
  thunk_FUN_1003a570(this,100,param_1,param_2,param_3,param_4);
  *(undefined ***)local_14 = &PTR_setPos_10275904;
  this_00 = operator_new(0xf8);
  local_8 = 0;
  if (this_00 == (HeaderPanel *)0x0) {
    local_100 = (Label *)0x0;
  }
  else {
    lVar4 = __ftol();
    local_100 = (Label *)vgui::HeaderPanel::HeaderPanel(this_00,0,0,param_3,(int)lVar4);
  }
  local_8 = 0xffffffff;
  *(Label **)(local_14 + 0xc0) = local_100;
  (**(code **)(**(int **)(local_14 + 0xc0) + 0x40))(local_14);
  (**(code **)(**(int **)(local_14 + 0xc0) + 0x120))(100,100,100,100);
  (**(code **)(**(int **)(local_14 + 0xc0) + 300))(0,0,0,100);
  pvVar1 = operator_new(0x114);
  local_8 = 1;
  if (pvVar1 == (void *)0x0) {
    local_100 = (Label *)0x0;
  }
  else {
    local_100 = thunk_FUN_100a8420(pvVar1,"Address",(uint *)"address");
  }
  local_8 = 0xffffffff;
  local_2c[0] = local_100;
  pvVar1 = operator_new(0x114);
  local_8 = 2;
  if (pvVar1 == (void *)0x0) {
    local_100 = (Label *)0x0;
  }
  else {
    local_100 = thunk_FUN_100a8420(pvVar1,"Server",(uint *)"hostname");
  }
  local_8 = 0xffffffff;
  local_2c[1] = local_100;
  pvVar1 = operator_new(0x114);
  local_8 = 3;
  if (pvVar1 == (void *)0x0) {
    local_100 = (Label *)0x0;
  }
  else {
    local_100 = thunk_FUN_100a8420(pvVar1,"Map",(uint *)&DAT_102758e4);
  }
  local_8 = 0xffffffff;
  local_2c[2] = local_100;
  pvVar1 = operator_new(0x114);
  local_8 = 4;
  if (pvVar1 == (void *)0x0) {
    local_100 = (Label *)0x0;
  }
  else {
    local_100 = thunk_FUN_100a8420(pvVar1,"Current",(uint *)"current");
  }
  local_8 = 0xffffffff;
  local_2c[3] = local_100;
  pvVar1 = operator_new(0x114);
  local_8 = 5;
  if (pvVar1 == (void *)0x0) {
    local_100 = (Label *)0x0;
  }
  else {
    local_100 = thunk_FUN_100a8420(pvVar1,"Latency",(uint *)&DAT_1026f2f0);
  }
  local_8 = 0xffffffff;
  local_1c = local_100;
  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
    (**(code **)(**(int **)(local_14 + 0xc0) + 0x1fc))(local_2c[local_18]);
  }
  lVar4 = __ftol();
  (**(code **)(**(int **)(local_14 + 0xc0) + 0x200))(0,(int)lVar4);
  lVar4 = __ftol();
  (**(code **)(**(int **)(local_14 + 0xc0) + 0x200))(1,(int)lVar4);
  lVar4 = __ftol();
  (**(code **)(**(int **)(local_14 + 0xc0) + 0x200))(2,(int)lVar4);
  lVar4 = __ftol();
  (**(code **)(**(int **)(local_14 + 0xc0) + 0x200))(3,(int)lVar4);
  lVar4 = __ftol();
  (**(code **)(**(int **)(local_14 + 0xc0) + 0x200))(4,(int)lVar4);
  pvVar1 = operator_new(0x10c);
  local_8 = 6;
  if (pvVar1 == (void *)0x0) {
    local_100 = (Label *)0x0;
  }
  else {
    iVar5 = 5;
    lVar4 = __ftol();
    iVar2 = (int)lVar4;
    lVar4 = __ftol();
    local_100 = (Label *)thunk_FUN_100a7ad0(pvVar1,0,(int)lVar4,param_3,iVar2,iVar5);
  }
  local_8 = 0xffffffff;
  *(Label **)(local_14 + 0xc4) = local_100;
  (**(code **)(**(int **)(local_14 + 0xc4) + 0x40))(local_14);
  (**(code **)(**(int **)(local_14 + 0xc4) + 0x21c))(*(undefined4 *)(local_14 + 0xc0));
  (**(code **)(**(int **)(local_14 + 0xc4) + 0x120))(100,100,100,100);
  (**(code **)(**(int **)(local_14 + 0xc4) + 300))(0,0,0,100);
  pvVar1 = operator_new(8);
  local_8 = 7;
  if (pvVar1 == (void *)0x0) {
    local_100 = (Label *)0x0;
  }
  else {
    local_100 = (Label *)thunk_FUN_100a7970(pvVar1,*(undefined4 *)(local_14 + 0xc4));
  }
  local_8 = 0xffffffff;
  (**(code **)(**(int **)(local_14 + 0xc4) + 0x70))(local_100);
  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
    thunk_FUN_100a8520(local_2c[local_18],*(int *)(local_14 + 0xc4));
  }
  lVar4 = __ftol();
  iVar2 = (int)lVar4;
  pBVar3 = operator_new(300);
  local_8 = 8;
  if (pBVar3 == (Button *)0x0) {
    local_100 = (Label *)0x0;
  }
  else {
    local_100 = (Label *)thunk_FUN_1009cd50(pBVar3,"Connect",10,iVar2,0x50,0xf,(Button)0x0);
  }
  local_8 = 0xffffffff;
  *(Label **)(local_14 + 200) = local_100;
  (**(code **)(**(int **)(local_14 + 200) + 0x40))(local_14);
  pvVar1 = operator_new(8);
  local_8 = 9;
  if (pvVar1 == (void *)0x0) {
    local_100 = (Label *)0x0;
  }
  else {
    local_100 = (Label *)thunk_FUN_100a8140(pvVar1,*(undefined4 *)(local_14 + 0xc4));
  }
  local_8 = 0xffffffff;
  (**(code **)(**(int **)(local_14 + 200) + 0x240))(local_100);
  pBVar3 = operator_new(300);
  local_8 = 10;
  if (pBVar3 == (Button *)0x0) {
    local_100 = (Label *)0x0;
  }
  else {
    local_100 = (Label *)thunk_FUN_1009cd50(pBVar3,"Refresh",0x5a,iVar2,0x50,0xf,(Button)0x0);
  }
  local_8 = 0xffffffff;
  *(Label **)(local_14 + 0xcc) = local_100;
  (**(code **)(**(int **)(local_14 + 0xcc) + 0x40))(local_14);
  pvVar1 = operator_new(8);
  local_8 = 0xb;
  if (pvVar1 == (void *)0x0) {
    local_100 = (Label *)0x0;
  }
  else {
    local_100 = (Label *)thunk_FUN_100a8280(pvVar1,*(undefined4 *)(local_14 + 0xc4));
  }
  local_8 = 0xffffffff;
  (**(code **)(**(int **)(local_14 + 0xcc) + 0x240))(local_100);
  pBVar3 = operator_new(300);
  local_8 = 0xc;
  if (pBVar3 == (Button *)0x0) {
    local_100 = (Label *)0x0;
  }
  else {
    local_100 = (Label *)thunk_FUN_1009cd50(pBVar3,"Stop",0xaa,iVar2,0x50,0xf,(Button)0x0);
  }
  local_8 = 0xffffffff;
  *(Label **)(local_14 + 0xd4) = local_100;
  (**(code **)(**(int **)(local_14 + 0xd4) + 0x40))(local_14);
  pvVar1 = operator_new(8);
  local_8 = 0xd;
  if (pvVar1 == (void *)0x0) {
    local_100 = (Label *)0x0;
  }
  else {
    local_100 = (Label *)thunk_FUN_100a8320(pvVar1,*(undefined4 *)(local_14 + 0xc4));
  }
  local_8 = 0xffffffff;
  (**(code **)(**(int **)(local_14 + 0xd4) + 0x240))(local_100);
  pBVar3 = operator_new(300);
  local_8 = 0xe;
  if (pBVar3 == (Button *)0x0) {
    local_100 = (Label *)0x0;
  }
  else {
    local_100 = (Label *)thunk_FUN_1009cd50(pBVar3,"Close",0xfa,iVar2,0x50,0xf,(Button)0x0);
  }
  local_8 = 0xffffffff;
  *(Label **)(local_14 + 0xdc) = local_100;
  (**(code **)(**(int **)(local_14 + 0xdc) + 0x40))(local_14);
  pvVar1 = operator_new(8);
  local_8 = 0xf;
  if (pvVar1 == (void *)0x0) {
    local_100 = (Label *)0x0;
  }
  else {
    local_100 = (Label *)thunk_FUN_100a83b0(pvVar1,*(undefined4 *)(local_14 + 0xc4));
  }
  local_8 = 0xffffffff;
  (**(code **)(**(int **)(local_14 + 0xdc) + 0x240))(local_100);
  vgui::Panel::setPaintBorderEnabled(local_14,false);
  vgui::Panel::setPaintBackgroundEnabled(local_14,false);
  vgui::Panel::setPaintEnabled(local_14,false);
  ExceptionList = local_10;
  return local_14;
}

/* 100a7970  FUN_100a7970  (50 bytes)
 * InputSignal * FUN_100a7970(undefined4 param_1)
 */
InputSignal * __thiscall FUN_100a7970(void *this,undefined4 param_1)

{
  vgui::InputSignal::InputSignal(this);
  *(undefined ***)this = &PTR_thunk_FUN_100a79b0_10275b6c;
  *(undefined4 *)((int)this + 4) = param_1;
  return this;
}

/* 100a79b0  FUN_100a79b0  (21 bytes)
 * undefined FUN_100a79b0(void)
 * called by: thunk_FUN_100a79b0
 */
void FUN_100a79b0(void)

{
  return;
}

/* 100a79d0  FUN_100a79d0  (21 bytes)
 * undefined FUN_100a79d0(void)
 * called by: thunk_FUN_100a79d0
 */
void FUN_100a79d0(void)

{
  return;
}

/* 100a79f0  FUN_100a79f0  (21 bytes)
 * undefined FUN_100a79f0(void)
 * called by: thunk_FUN_100a79f0
 */
void FUN_100a79f0(void)

{
  return;
}

/* 100a7a10  FUN_100a7a10  (21 bytes)
 * undefined FUN_100a7a10(void)
 * called by: thunk_FUN_100a7a10
 */
void FUN_100a7a10(void)

{
  return;
}

/* 100a7a30  FUN_100a7a30  (21 bytes)
 * undefined FUN_100a7a30(void)
 * called by: thunk_FUN_100a7a30
 */
void FUN_100a7a30(void)

{
  return;
}

/* 100a7a50  FUN_100a7a50  (21 bytes)
 * undefined FUN_100a7a50(void)
 * called by: thunk_FUN_100a7a50
 */
void FUN_100a7a50(void)

{
  return;
}

/* 100a7a70  FUN_100a7a70  (21 bytes)
 * undefined FUN_100a7a70(void)
 * called by: thunk_FUN_100a7a70
 */
void FUN_100a7a70(void)

{
  return;
}

/* 100a7a90  FUN_100a7a90  (21 bytes)
 * undefined FUN_100a7a90(void)
 * called by: thunk_FUN_100a7a90
 */
void FUN_100a7a90(void)

{
  return;
}

/* 100a7ab0  FUN_100a7ab0  (21 bytes)
 * undefined FUN_100a7ab0(void)
 * called by: thunk_FUN_100a7ab0
 */
void FUN_100a7ab0(void)

{
  return;
}

/* 100a7ad0  FUN_100a7ad0  (188 bytes)
 * TablePanel * FUN_100a7ad0(int param_1, int param_2, int param_3, int param_4, int param_5)
 */
TablePanel * __thiscall
FUN_100a7ad0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  Label *this_00;
  undefined4 local_60;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e605b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  vgui::TablePanel::TablePanel(this,param_1,param_2,param_3,param_4,param_5);
  *(undefined ***)this = &PTR_setPos_10275bac;
  this_00 = operator_new(0xd0);
  local_8 = 0;
  if (this_00 == (Label *)0x0) {
    local_60 = 0;
  }
  else {
    local_60 = vgui::Label::Label(this_00,"",0,0);
  }
  *(undefined4 *)((int)this + 0x104) = local_60;
  *(undefined4 *)((int)this + 0x108) = 0;
  ExceptionList = local_10;
  return this;
}

/* 100a7bc0  FUN_100a7bc0  (117 bytes)
 * ulonglong FUN_100a7bc0(int * param_1)
 * called by: thunk_FUN_100a7bc0
 */
ulonglong __fastcall FUN_100a7bc0(int *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 local_14 [4];
  uint local_10 [2];
  int *local_8;
  
  local_8 = param_1;
  (**(code **)(*param_1 + 0xc))(local_14,local_10);
  lVar1 = __ftol();
  local_10[0] = ((int)(uint)lVar1 < 0) - 1 & (uint)lVar1;
  uVar2 = __ftol();
  return uVar2;
}

/* 100a7c60  FUN_100a7c60  (50 bytes)
 * longlong FUN_100a7c60(void)
 * called by: thunk_FUN_100a7c60
 */
longlong FUN_100a7c60(void)

{
  longlong lVar1;
  
  lVar1 = __ftol();
  return lVar1;
}

/* 100a7ca0  FUN_100a7ca0  (902 bytes)
 * undefined4 FUN_100a7ca0(int param_1, int param_2)
 * called by: thunk_FUN_100a7ca0
 */
undefined4 FUN_100a7ca0(int param_1,int param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  char local_34 [31];
  undefined1 local_15;
  int local_14;
  char *local_10;
  int local_c;
  int local_8;
  
  local_c = thunk_FUN_10049ec0(param_2);
  if (param_2 == *(int *)(local_8 + 0x108)) {
    (**(code **)(**(int **)(local_8 + 0x104) + 0x120))(200,0xf0,0x3f,100);
  }
  else {
    (**(code **)(**(int **)(local_8 + 0x104) + 0x120))(0xff,0xff,0xff,0);
  }
  (**(code **)(**(int **)(local_8 + 0x104) + 300))(0,0,0,200);
  (**(code **)(**(int **)(local_8 + 0x104) + 0x21c))(3);
  (**(code **)(**(int **)(local_8 + 0x104) + 0x20c))(2);
  if (local_c == 0) {
    if ((param_2 == 0) && (param_1 == 0)) {
      bVar1 = thunk_FUN_10049e80();
      if (CONCAT31(extraout_var,bVar1) == 0) {
        (**(code **)(**(int **)(local_8 + 0x104) + 0x200))
                  (*(undefined4 *)(local_8 + 0x104),"Press \'Refresh\' to search for servers...");
      }
      else {
        (**(code **)(**(int **)(local_8 + 0x104) + 0x200))
                  (*(undefined4 *)(local_8 + 0x104),"Waiting for servers to respond...");
      }
    }
    else {
      (**(code **)(**(int **)(local_8 + 0x104) + 0x200))(*(undefined4 *)(local_8 + 0x104),"");
    }
  }
  else {
    switch(param_1) {
    case 0:
      local_10 = (char *)(**(code **)(DAT_102e15b0 + 0x20))(local_c,"address");
      if (local_10 != (char *)0x0) {
        _strncpy(local_34,local_10,0x1f);
        local_15 = 0;
        (**(code **)(**(int **)(local_8 + 0x104) + 0x200))
                  (*(undefined4 *)(local_8 + 0x104),local_34);
      }
      break;
    case 1:
      local_10 = (char *)(**(code **)(DAT_102e15b0 + 0x20))(local_c,"hostname");
      if (local_10 != (char *)0x0) {
        _strncpy(local_34,local_10,0x1f);
        local_15 = 0;
        (**(code **)(**(int **)(local_8 + 0x104) + 0x200))
                  (*(undefined4 *)(local_8 + 0x104),local_34);
      }
      break;
    case 2:
      local_10 = (char *)(**(code **)(DAT_102e15b0 + 0x20))(local_c,&DAT_102758e4);
      if (local_10 != (char *)0x0) {
        _strncpy(local_34,local_10,0x1f);
        local_15 = 0;
        (**(code **)(**(int **)(local_8 + 0x104) + 0x200))
                  (*(undefined4 *)(local_8 + 0x104),local_34);
      }
      break;
    case 3:
      local_10 = (char *)(**(code **)(DAT_102e15b0 + 0x20))(local_c,"current");
      local_14 = (**(code **)(DAT_102e15b0 + 0x20))(local_c,&DAT_10275ed0);
      if ((local_10 != (char *)0x0) && (local_14 != 0)) {
        FUN_100bb6e0(local_34,(byte_conflict *)"%s/%s");
        local_15 = 0;
        (**(code **)(**(int **)(local_8 + 0x104) + 0x200))
                  (*(undefined4 *)(local_8 + 0x104),local_34);
      }
      break;
    case 4:
      local_10 = (char *)(**(code **)(DAT_102e15b0 + 0x20))(local_c,&DAT_1026f2f0);
      if (local_10 != (char *)0x0) {
        _strncpy(local_34,local_10,0x1f);
        local_15 = 0;
        (**(code **)(**(int **)(local_8 + 0x104) + 0x200))
                  (*(undefined4 *)(local_8 + 0x104),local_34);
      }
    }
  }
  return *(undefined4 *)(local_8 + 0x104);
}

/* 100a8120  FUN_100a8120  (23 bytes)
 * undefined4 FUN_100a8120(void)
 * called by: thunk_FUN_100a8120
 */
undefined4 FUN_100a8120(void)

{
  return 0;
}

/* 100a8140  FUN_100a8140  (50 bytes)
 * ActionSignal * FUN_100a8140(undefined4 param_1)
 */
ActionSignal * __thiscall FUN_100a8140(void *this,undefined4 param_1)

{
  vgui::ActionSignal::ActionSignal(this);
  *(undefined ***)this = &PTR_thunk_FUN_100a8180_10275ed8;
  *(undefined4 *)((int)this + 4) = param_1;
  return this;
}

/* 100a8180  FUN_100a8180  (32 bytes)
 * undefined FUN_100a8180(int param_1)
 * called by: thunk_FUN_100a8180
 */
void __fastcall FUN_100a8180(int param_1)

{
  thunk_FUN_100a81b0(*(int *)(param_1 + 4));
  return;
}

/* 100a81b0  FUN_100a81b0  (123 bytes)
 * undefined FUN_100a81b0(int param_1)
 */
void __fastcall FUN_100a81b0(int param_1)

{
  undefined1 local_110 [256];
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_8 = param_1;
  local_c = thunk_FUN_10049ec0(*(int *)(param_1 + 0x108));
  if (local_c != 0) {
    local_10 = (**(code **)(DAT_102e15b0 + 0x20))(local_c,"address");
    FUN_100bb6e0(local_110,(byte_conflict *)"connect %s\n");
    (*DAT_102e14a8)(local_110);
    thunk_FUN_100a8250();
  }
  return;
}

/* 100a8250  FUN_100a8250  (33 bytes)
 * undefined FUN_100a8250(void)
 */
void FUN_100a8250(void)

{
  (*DAT_102e14a8)("togglebrowser\n");
  return;
}

/* 100a8280  FUN_100a8280  (50 bytes)
 * ActionSignal * FUN_100a8280(undefined4 param_1)
 */
ActionSignal * __thiscall FUN_100a8280(void *this,undefined4 param_1)

{
  vgui::ActionSignal::ActionSignal(this);
  *(undefined ***)this = &PTR_thunk_FUN_100a82c0_10275f08;
  *(undefined4 *)((int)this + 4) = param_1;
  return this;
}

/* 100a82c0  FUN_100a82c0  (32 bytes)
 * undefined FUN_100a82c0(void)
 * called by: thunk_FUN_100a82c0
 */
void FUN_100a82c0(void)

{
  thunk_FUN_100a82f0();
  return;
}

/* 100a82f0  FUN_100a82f0  (34 bytes)
 * undefined FUN_100a82f0(void)
 */
void FUN_100a82f0(void)

{
  thunk_FUN_1004a100();
  thunk_FUN_1004a130(0);
  return;
}

/* 100a8320  FUN_100a8320  (50 bytes)
 * ActionSignal * FUN_100a8320(undefined4 param_1)
 */
ActionSignal * __thiscall FUN_100a8320(void *this,undefined4 param_1)

{
  vgui::ActionSignal::ActionSignal(this);
  *(undefined ***)this = &PTR_thunk_FUN_100a8360_10275f14;
  *(undefined4 *)((int)this + 4) = param_1;
  return this;
}

/* 100a8360  FUN_100a8360  (32 bytes)
 * undefined FUN_100a8360(void)
 * called by: thunk_FUN_100a8360
 */
void FUN_100a8360(void)

{
  thunk_FUN_100a8390();
  return;
}

/* 100a8390  FUN_100a8390  (24 bytes)
 * undefined FUN_100a8390(void)
 */
void FUN_100a8390(void)

{
  thunk_FUN_1004a0d0();
  return;
}

/* 100a83b0  FUN_100a83b0  (50 bytes)
 * ActionSignal * FUN_100a83b0(undefined4 param_1)
 */
ActionSignal * __thiscall FUN_100a83b0(void *this,undefined4 param_1)

{
  vgui::ActionSignal::ActionSignal(this);
  *(undefined ***)this = &PTR_thunk_FUN_100a83f0_10275f20;
  *(undefined4 *)((int)this + 4) = param_1;
  return this;
}

/* 100a83f0  FUN_100a83f0  (32 bytes)
 * undefined FUN_100a83f0(void)
 * called by: thunk_FUN_100a83f0
 */
void FUN_100a83f0(void)

{
  thunk_FUN_100a8250();
  return;
}

/* 100a8420  FUN_100a8420  (204 bytes)
 * Label * FUN_100a8420(char * param_1, uint * param_2)
 */
Label * __thiscall FUN_100a8420(void *this,char *param_1,uint *param_2)

{
  vgui::Label::Label(this,param_1);
  *(undefined ***)this = &PTR_setPos_10275f2c;
  *(undefined4 *)((int)this + 0x110) = 0;
  FUN_100bba20((uint *)((int)this + 0xd0),param_2);
  vgui::Label::setContentAlignment(this,3);
  vgui::Label::setFgColor(this,0xff,0,0,0);
  vgui::Panel::setBgColor(this,0x78,0x4b,0x20,200);
  vgui::Label::setFont(this,2);
  return this;
}

/* 100a8520  FUN_100a8520  (157 bytes)
 * undefined FUN_100a8520(int param_1)
 */
void __thiscall FUN_100a8520(void *this,int param_1)

{
  void *this_00;
  InputSignal *local_60;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_100e607b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(int *)((int)this + 0x110) = param_1;
  this_00 = operator_new(0x48);
  local_8 = 0;
  if (this_00 == (void *)0x0) {
    local_60 = (InputSignal *)0x0;
  }
  else {
    local_60 = thunk_FUN_100a85f0(this_00,*(undefined4 *)((int)this + 0x110),
                                  (uint *)((int)this + 0xd0));
  }
  local_8 = 0xffffffff;
  (**(code **)(*(int *)this + 0x70))(local_60);
  ExceptionList = local_10;
  return;
}

/* 100a85f0  FUN_100a85f0  (69 bytes)
 * InputSignal * FUN_100a85f0(undefined4 param_1, uint * param_2)
 */
InputSignal * __thiscall FUN_100a85f0(void *this,undefined4 param_1,uint *param_2)

{
  vgui::InputSignal::InputSignal(this);
  *(undefined ***)this = &PTR_thunk_FUN_100a8650_102761cc;
  *(undefined4 *)((int)this + 4) = param_1;
  FUN_100bba20((uint *)((int)this + 8),param_2);
  return this;
}

/* 100a8650  FUN_100a8650  (21 bytes)
 * undefined FUN_100a8650(void)
 * called by: thunk_FUN_100a8650
 */
void FUN_100a8650(void)

{
  return;
}

/* 100a8670  FUN_100a8670  (21 bytes)
 * undefined FUN_100a8670(void)
 * called by: thunk_FUN_100a8670
 */
void FUN_100a8670(void)

{
  return;
}

/* 100a8690  FUN_100a8690  (21 bytes)
 * undefined FUN_100a8690(void)
 * called by: thunk_FUN_100a8690
 */
void FUN_100a8690(void)

{
  return;
}

/* 100a86b0  FUN_100a86b0  (39 bytes)
 * undefined FUN_100a86b0(int param_1)
 * called by: thunk_FUN_100a86b0
 */
void __fastcall FUN_100a86b0(int param_1)

{
  thunk_FUN_100a86e0((uint *)(param_1 + 8));
  return;
}

/* 100a86e0  FUN_100a86e0  (33 bytes)
 * undefined FUN_100a86e0(uint * param_1)
 */
void FUN_100a86e0(uint *param_1)

{
  thunk_FUN_10049f00(param_1);
  return;
}

/* 100a8710  FUN_100a8710  (39 bytes)
 * undefined FUN_100a8710(int param_1)
 * called by: thunk_FUN_100a8710
 */
void __fastcall FUN_100a8710(int param_1)

{
  thunk_FUN_100a86e0((uint *)(param_1 + 8));
  return;
}

/* 100a8740  FUN_100a8740  (21 bytes)
 * undefined FUN_100a8740(void)
 * called by: thunk_FUN_100a8740
 */
void FUN_100a8740(void)

{
  return;
}

/* 100a8760  FUN_100a8760  (21 bytes)
 * undefined FUN_100a8760(void)
 * called by: thunk_FUN_100a8760
 */
void FUN_100a8760(void)

{
  return;
}

/* 100a8780  FUN_100a8780  (21 bytes)
 * undefined FUN_100a8780(void)
 * called by: thunk_FUN_100a8780
 */
void FUN_100a8780(void)

{
  return;
}

/* 100a87a0  FUN_100a87a0  (21 bytes)
 * undefined FUN_100a87a0(void)
 * called by: thunk_FUN_100a87a0
 */
void FUN_100a87a0(void)

{
  return;
}

/* 100a87c0  FUN_100a87c0  (21 bytes)
 * undefined FUN_100a87c0(void)
 * called by: thunk_FUN_100a87c0
 */
void FUN_100a87c0(void)

{
  return;
}

/* 100a87e0  FUN_100a87e0  (21 bytes)
 * undefined FUN_100a87e0(void)
 * called by: thunk_FUN_100a87e0
 */
void FUN_100a87e0(void)

{
  return;
}

